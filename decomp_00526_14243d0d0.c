// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14243d0d0 FForceFeedbackChannelDetails body=239 status=ok
// SIG undefined FForceFeedbackChannelDetails(void)

uint * FForceFeedbackChannelDetails::FForceFeedbackChannelDetails(uint *param_1,uint *param_2)

{
  void *_Src;
  uint uVar1;
  
  *param_1 = *param_1 ^ (*param_2 ^ *param_1) & 1;
  uVar1 = (*param_1 ^ *param_2) & 2 ^ *param_1;
  *param_1 = uVar1;
  uVar1 = (uVar1 ^ *param_2) & 4 ^ uVar1;
  *param_1 = uVar1;
  *param_1 = (uVar1 ^ *param_2) & 8 ^ uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined ***)(param_1 + 2) = &PTR_FUN_14413ebc8;
  *(char *)(param_1 + 0x18) = (char)param_2[0x18];
  *(undefined1 *)((longlong)param_1 + 0x61) = *(undefined1 *)((longlong)param_2 + 0x61);
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar1 = param_2[0x1c];
  _Src = *(void **)(param_2 + 0x1a);
  param_1[0x1c] = uVar1;
  if (uVar1 == 0) {
    param_1[0x1d] = 0;
  }
  else {
    TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(param_1 + 0x1a,uVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x1a),_Src,(longlong)(int)uVar1 * 0x1c);
  }
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  return param_1;
}



// FUNCTION 14243d1c0 FHUDHitBox body=33 status=ok
// SIG undefined FHUDHitBox(void)

undefined8 *
FHUDHitBox::FHUDHitBox
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          undefined1 param_5,undefined4 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = *param_4;
  *(undefined1 *)(param_1 + 3) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_6;
  return param_1;
}



// FUNCTION 14243d1f0 FRootMotionServerToLocalIDMapping body=9 status=ok
// SIG undefined FRootMotionServerToLocalIDMapping(void)

undefined8 *
FRootMotionServerToLocalIDMapping::FRootMotionServerToLocalIDMapping(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14243d200 FRootMotionSource body=206 status=ok
// SIG undefined FRootMotionSource(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FRootMotionSource::FRootMotionSource(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *param_1 = &PTR_FUN_1450ab4a0;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 0x10);
  *(undefined2 *)((longlong)param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
  *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
  *(undefined1 *)((longlong)param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
  *(undefined1 *)((longlong)param_1 + 0x33) = *(undefined1 *)(param_2 + 0x33);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  uVar2 = uRam0000000146af381c;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(uint *)((longlong)param_1 + 0x5c) = uVar2;
  uVar2 = uRam0000000146af3814 & uRam0000000146af3824;
  uVar3 = uRam0000000146af3818 & uRam0000000146af3828;
  uVar4 = uRam0000000146af381c & uRam0000000146af382c;
  *(uint *)(param_1 + 0xe) = _DAT_146af3810 & _DAT_146af3820;
  *(uint *)((longlong)param_1 + 0x74) = uVar2;
  *(uint *)(param_1 + 0xf) = uVar3;
  *(uint *)((longlong)param_1 + 0x7c) = uVar4;
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[0x11] = uVar1;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  return param_1;
}



// FUNCTION 14243d360 FRootMotionSourceGroup body=58 status=ok
// SIG undefined FRootMotionSourceGroup(void)

undefined8 * FRootMotionSourceGroup::FRootMotionSourceGroup(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144080980;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  return param_1;
}



// FUNCTION 14243d7b0 FSaveGameHeader body=237 status=ok
// SIG undefined FSaveGameHeader(void)

undefined4 * FSaveGameHeader::FSaveGameHeader(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = 0x53415647;
  param_1[1] = 2;
  param_1[2] = 0x204;
  puVar2 = (undefined8 *)FEngineVersion::Current();
  *(undefined8 *)(param_1 + 4) = *puVar2;
  param_1[6] = *(undefined4 *)(puVar2 + 1);
  FString::FString(param_1 + 8,puVar2 + 2);
  param_1[0xc] = 3;
  puVar2 = (undefined8 *)FCustomVersionContainer::GetRegistered();
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  param_1[0x10] = iVar1;
  if (iVar1 == 0) {
    param_1[0x11] = 0;
  }
  else {
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1 + 0xe,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0xe),_Src,(longlong)iVar1 << 5);
  }
  if (param_2 != 0) {
    lVar3 = USaveGame::GetPrivateStaticClass();
    lVar4 = param_2;
    do {
      if (lVar4 == lVar3) goto LAB_14243d870;
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  param_2 = 0;
LAB_14243d870:
  UObjectBaseUtility::GetPathName(param_2,param_1 + 0x12,0);
  return param_1;
}



// FUNCTION 14243d8a0 FUN_14243d8a0 body=727 status=ok
// SIG undefined FUN_14243d8a0(void)

undefined8 * FUN_14243d8a0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d4f670;
  FButtonStyle::FButtonStyle(param_1 + 1,param_2 + 8);
  FButtonStyle::FButtonStyle(param_1 + 0x50,param_2 + 0x280);
  FButtonStyle::FButtonStyle(param_1 + 0x9f,param_2 + 0x4f8);
  FButtonStyle::FButtonStyle(param_1 + 0xee,param_2 + 0x770);
  param_1[0x13d] = &PTR__scalar_deleting_destructor__144042b98;
  param_1[0x13e] = *(undefined8 *)(param_2 + 0x9f0);
  param_1[0x13f] = *(undefined8 *)(param_2 + 0x9f8);
  uVar5 = *(undefined8 *)(param_2 + 0xa08);
  param_1[0x140] = *(undefined8 *)(param_2 + 0xa00);
  param_1[0x141] = uVar5;
  uVar2 = *(undefined4 *)(param_2 + 0xa14);
  uVar3 = *(undefined4 *)(param_2 + 0xa18);
  uVar4 = *(undefined4 *)(param_2 + 0xa1c);
  *(undefined4 *)(param_1 + 0x142) = *(undefined4 *)(param_2 + 0xa10);
  *(undefined4 *)((longlong)param_1 + 0xa14) = uVar2;
  *(undefined4 *)(param_1 + 0x143) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xa1c) = uVar4;
  param_1[0x144] = *(undefined8 *)(param_2 + 0xa20);
  lVar1 = *(longlong *)(param_2 + 0xa28);
  param_1[0x145] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x146] = *(undefined8 *)(param_2 + 0xa30);
  *(undefined4 *)(param_1 + 0x147) = *(undefined4 *)(param_2 + 0xa38);
  *(undefined1 *)((longlong)param_1 + 0xa3c) = *(undefined1 *)(param_2 + 0xa3c);
  uVar5 = *(undefined8 *)(param_2 + 0xa48);
  param_1[0x148] = *(undefined8 *)(param_2 + 0xa40);
  param_1[0x149] = uVar5;
  *(undefined1 *)(param_1 + 0x14a) = *(undefined1 *)(param_2 + 0xa50);
  param_1[0x14b] = *(undefined8 *)(param_2 + 0xa58);
  lVar1 = *(longlong *)(param_2 + 0xa60);
  param_1[0x14c] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x14d] = *(undefined8 *)(param_2 + 0xa68);
  uVar5 = *(undefined8 *)(param_2 + 0xa78);
  param_1[0x14e] = *(undefined8 *)(param_2 + 0xa70);
  param_1[0x14f] = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xa88);
  param_1[0x150] = *(undefined8 *)(param_2 + 0xa80);
  param_1[0x151] = uVar5;
  *(undefined1 *)(param_1 + 0x152) = *(undefined1 *)(param_2 + 0xa90);
  param_1[0x153] = *(undefined8 *)(param_2 + 0xa98);
  lVar1 = *(longlong *)(param_2 + 0xaa0);
  param_1[0x154] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined4 *)(param_2 + 0xaac);
  uVar3 = *(undefined4 *)(param_2 + 0xab0);
  uVar4 = *(undefined4 *)(param_2 + 0xab4);
  *(undefined4 *)(param_1 + 0x155) = *(undefined4 *)(param_2 + 0xaa8);
  *(undefined4 *)((longlong)param_1 + 0xaac) = uVar2;
  *(undefined4 *)(param_1 + 0x156) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xab4) = uVar4;
  FUN_14080bc50(param_1 + 0x157,param_2 + 0xab8);
  FUN_14080bc50(param_1 + 0x168,param_2 + 0xb40);
  FUN_14080bc50(param_1 + 0x179,param_2 + 0xbc8);
  FUN_14080bc50(param_1 + 0x18a,param_2 + 0xc50);
  FUN_14080bc50(param_1 + 0x19b,param_2 + 0xcd8);
  uVar2 = *(undefined4 *)(param_2 + 0xd64);
  uVar3 = *(undefined4 *)(param_2 + 0xd68);
  uVar4 = *(undefined4 *)(param_2 + 0xd6c);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0xd60);
  *(undefined4 *)((longlong)param_1 + 0xd64) = uVar2;
  *(undefined4 *)(param_1 + 0x1ad) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xd6c) = uVar4;
  *(undefined1 *)(param_1 + 0x1ae) = *(undefined1 *)(param_2 + 0xd70);
  param_1[0x1af] = *(undefined8 *)(param_2 + 0xd78);
  lVar1 = *(longlong *)(param_2 + 0xd80);
  param_1[0x1b0] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FUN_14080bc50(param_1 + 0x1b1,param_2 + 0xd88);
  uVar2 = *(undefined4 *)(param_2 + 0xe14);
  uVar3 = *(undefined4 *)(param_2 + 0xe18);
  uVar4 = *(undefined4 *)(param_2 + 0xe1c);
  *(undefined4 *)(param_1 + 0x1c2) = *(undefined4 *)(param_2 + 0xe10);
  *(undefined4 *)((longlong)param_1 + 0xe14) = uVar2;
  *(undefined4 *)(param_1 + 0x1c3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xe1c) = uVar4;
  *(undefined1 *)(param_1 + 0x1c4) = *(undefined1 *)(param_2 + 0xe20);
  param_1[0x1c5] = *(undefined8 *)(param_2 + 0xe28);
  lVar1 = *(longlong *)(param_2 + 0xe30);
  param_1[0x1c6] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FUN_14080bc50(param_1 + 0x1c7,param_2 + 0xe38);
  FUN_14080bc50(param_1 + 0x1d8,param_2 + 0xec0);
  FUN_14080bc50(param_1 + 0x1e9,param_2 + 0xf48);
  return param_1;
}



// FUNCTION 14243db80 FUN_14243db80 body=3216 status=ok
// SIG undefined FUN_14243db80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14243db80(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  FUN_141781840();
  puVar10 = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_1450a85f8;
  param_1[5] = &PTR_LAB_1450a8af8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
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
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  plVar5 = param_1 + 0x111;
  param_1[0xcd] = 0;
  puVar2 = param_1 + 0x146;
  param_1[0xd7] = 0;
  puVar3 = param_1 + 0x148;
  param_1[0xd8] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  *(undefined1 *)(param_1 + 0xfd) = 2;
  *(undefined4 *)((longlong)param_1 + 0x7ec) = 0;
  *(undefined1 *)(param_1 + 0xfe) = 2;
  *(undefined4 *)((longlong)param_1 + 0x7f4) = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  *(undefined4 *)(param_1 + 0x107) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x83c) = 1;
  *plVar5 = 0;
  param_1[0x112] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  param_1[0x139] = 2;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 2;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 2;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 2;
  *puVar2 = 0;
  param_1[0x147] = 0;
  *puVar3 = 0;
  param_1[0x149] = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  *(undefined4 *)(param_1 + 0x153) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa9c) = 0;
  param_1[0x155] = 0;
  *(undefined4 *)(param_1 + 0x156) = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  puVar8 = (undefined8 *)operator_new(0x10);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar10 = puVar8;
  }
  param_1[0x15b] = puVar10;
  puVar8 = (undefined8 *)operator_new(0x18);
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar8 + 1) = 1;
    *puVar8 = &PTR_DestroyObject_1450ad0f8;
    *(undefined4 *)((longlong)puVar8 + 0xc) = 1;
    puVar8[2] = puVar10;
  }
  param_1[0x15c] = puVar8;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 0x15b,puVar10,puVar10);
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 2;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 2;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 2;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 2;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  UEngine::FErrorsAndWarningsCollector::FErrorsAndWarningsCollector(param_1 + 0x188);
  param_1[0x19e] = 0;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a4] = 0;
  *(undefined4 *)(param_1 + 0x1a5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd2c) = 0;
  param_1[0x1a7] = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  *(undefined4 *)(param_1 + 0x1af) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd7c) = 0;
  param_1[0x1b1] = 0;
  *(undefined4 *)(param_1 + 0x1b2) = 0;
  param_1[0x217] = 0;
  param_1[0x218] = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  param_1[0x21c] = 0;
  param_1[0x21d] = 0;
  param_1[0x21f] = 0;
  param_1[0x220] = 0;
  param_1[0x221] = 0;
  param_1[0x222] = 0;
  param_1[0x223] = 0;
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  param_1[0x22a] = 0;
  param_1[0x22b] = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1164) = 0;
  param_1[0x22e] = 0;
  *(undefined4 *)(param_1 + 0x22f) = 0;
  param_1[0x230] = 0;
  param_1[0x231] = 0;
  param_1[0x234] = 0;
  param_1[0x235] = 0;
  *(undefined4 *)(param_1 + 0x236) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x11b4) = 0;
  param_1[0x238] = 0;
  *(undefined4 *)(param_1 + 0x239) = 0;
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 1;
  *(uint *)(param_1 + 0xfb) = *(uint *)(param_1 + 0xfb) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x84c) = 0xff000028;
  *(undefined4 *)(param_1 + 0x10a) = 0xffc00000;
  *(undefined4 *)((longlong)param_1 + 0x854) = 0xff7f7fff;
  *(undefined4 *)(param_1 + 0x10b) = 0xffff7f7f;
  *(undefined4 *)((longlong)param_1 + 0x85c) = 0xff7fff00;
  *(undefined4 *)(param_1 + 0x10c) = 0xff3fc020;
  *(undefined4 *)((longlong)param_1 + 0x864) = 0xff000000;
  *(undefined4 *)(param_1 + 0x10d) = 0xffdf959d;
  *(undefined4 *)((longlong)param_1 + 0x86c) = 0xff95df9d;
  *(undefined4 *)(param_1 + 0x10e) = 0xff959ddf;
  *(undefined4 *)((longlong)param_1 + 0x874) = 0xff1e1e1e;
  *(undefined4 *)(param_1 + 0x10f) = 0xffffc4ff;
  local_88 = CONCAT44(local_88._4_4_,0xff80ff80);
  *(undefined4 *)((longlong)param_1 + 0x87c) = 0xff80ff80;
  *(undefined4 *)(param_1 + 0x132) = 0;
  *(undefined4 *)(param_1 + 0x133) = 0;
  *(undefined4 *)((longlong)param_1 + 0x99c) = 0x41200000;
  *(undefined4 *)(param_1 + 0x134) = 0x3e800000;
  *(undefined1 *)(param_1 + 0x143) = 0;
  param_1[0x135] = 0;
  *(uint *)(param_1 + 0xfc) = *(uint *)(param_1 + 0xfc) & 0xffffffbf | 7;
  param_1[0x136] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7e4) = 0x41f00000;
  *(undefined1 *)((longlong)param_1 + 0xc14) = 0;
  plVar9 = (longlong *)FPaths::ScreenShotDir(local_78);
  if (plVar5 != plVar9) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    *plVar5 = *plVar9;
    *plVar9 = 0;
    *(int *)(param_1 + 0x112) = (int)plVar9[1];
    *(undefined4 *)((longlong)param_1 + 0x894) = *(undefined4 *)((longlong)plVar9 + 0xc);
    plVar9[1] = 0;
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  param_1[0x144] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x14a) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa2e) = 3;
  if (DAT_1468b616c == '\0') {
    puVar10 = (undefined8 *)FDynamicResolutionHeuristicProxy::CreateDefaultState(local_68);
    if (puVar3 != puVar10) {
      *puVar3 = *puVar10;
      *puVar10 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x149,puVar10 + 1);
    }
    plVar5 = (longlong *)param_1[0x149];
    uVar6 = *puVar3;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_88 = uVar6;
    plStack_80 = plVar5;
    if (&local_88 != puVar2) {
      local_88 = *puVar2;
      plStack_80 = (longlong *)param_1[0x147];
      *puVar2 = uVar6;
      param_1[0x147] = plVar5;
      local_58 = uVar6;
      plStack_50 = plVar5;
    }
    plVar5 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar9 = plStack_80 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_80 + 8))(plStack_80,1);
        }
      }
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_60 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  param_1[0x107] = 0x10000001e;
  return param_1;
}



// FUNCTION 14243e810 FUN_14243e810 body=134 status=ok
// SIG undefined FUN_14243e810(void)

undefined8 * FUN_14243e810(undefined8 *param_1)

{
  FUN_14235eec0();
  *param_1 = &PTR_FUN_1450a9300;
  param_1[5] = &PTR_LAB_1450a98a8;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x42);
  FUN_14246fd50(param_1 + 0x42,0x44960000);
  *(uint *)(param_1 + 0x45) = *(uint *)(param_1 + 0x45) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x457a0000;
  *(undefined4 *)(param_1 + 0x44) = 0x45fa0000;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0x41000000;
  return param_1;
}



// FUNCTION 14243e8a0 UFont body=230 status=ok
// SIG undefined UFont(void)

undefined8 * UFont::UFont(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450a9070;
  param_1[5] = &PTR_LAB_1450a92e8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FFontImportOptionsData::FFontImportOptionsData(param_1 + 0xe);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x3f800000;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 9;
  return param_1;
}



// FUNCTION 14243e990 UFontFace body=147 status=ok
// SIG undefined UFontFace(void)

undefined8 * UFontFace::UFontFace(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_1417818c0();
  puVar2 = (undefined8 *)0x0;
  *param_1 = &PTR__scalar_deleting_destructor__1450a98d8;
  param_1[5] = &PTR_LAB_1450a9b50;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_144cb51c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar2 = puVar1;
  }
  puVar1 = puVar2 + 2;
  param_1[9] = puVar1;
  param_1[10] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 9,puVar1,puVar1);
  return param_1;
}



// FUNCTION 14243ea30 UFontImportOptions body=42 status=ok
// SIG undefined UFontImportOptions(void)

undefined8 * UFontImportOptions::UFontImportOptions(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450a8df8;
  FFontImportOptionsData::FFontImportOptionsData(param_1 + 5);
  return param_1;
}



// FUNCTION 14243ea60 FUN_14243ea60 body=176 status=ok
// SIG undefined FUN_14243ea60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14243ea60(undefined8 *param_1)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  uint local_98 [2];
  undefined1 local_90 [120];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FUN_141781840();
  local_98[0] = local_98[0] | 0xf;
  *param_1 = &PTR_FUN_1450a8b78;
  param_1[5] = 0;
  param_1[6] = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(local_90);
  iVar1 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar1 + 1) {
    TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar1);
  }
  FForceFeedbackChannelDetails::FForceFeedbackChannelDetails
            ((longlong)iVar1 * 0x80 + param_1[5],local_98);
  FRichCurve::~FRichCurve(local_90);
  return param_1;
}



// FUNCTION 14243eb10 FUN_14243eb10 body=94 status=ok
// SIG undefined FUN_14243eb10(void)

undefined8 * FUN_14243eb10(undefined8 *param_1)

{
  FUN_14243db80();
  *param_1 = &PTR_FUN_1450a9b90;
  param_1[5] = &PTR_LAB_1450aa090;
  param_1[0x23c] = 0;
  param_1[0x23d] = 0;
  param_1[0x23e] = 0;
  param_1[0x23f] = 0;
  param_1[0x240] = 0;
  param_1[0x241] = 0;
  *(undefined4 *)(param_1 + 0x242) = 0;
  return param_1;
}



// FUNCTION 14243eb70 FUN_14243eb70 body=411 status=ok
// SIG undefined FUN_14243eb70(void)

undefined8 * FUN_14243eb70(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  void *_Dst;
  void *pvVar3;
  
  FUN_141781840();
  pvVar3 = (void *)0x0;
  *param_1 = &PTR_FUN_1450a8278;
  param_1[5] = &PTR_LAB_1450a85e8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  lVar1 = operator_new(0xf0);
  pvVar2 = pvVar3;
  if (lVar1 != 0) {
    pvVar2 = (void *)FTimerManager::FTimerManager(lVar1);
  }
  param_1[0x12] = pvVar2;
  _Dst = (void *)operator_new(0xf0);
  pvVar2 = pvVar3;
  if (_Dst != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0xf0);
    *(undefined8 *)((longlong)_Dst + 0x20) = 0;
    *(undefined8 *)((longlong)_Dst + 0x28) = 0;
    *(undefined4 *)((longlong)_Dst + 0x30) = 0xffffffff;
    *(undefined4 *)((longlong)_Dst + 0x34) = 0;
    *(undefined8 *)((longlong)_Dst + 0x40) = 0;
    *(undefined4 *)((longlong)_Dst + 0x48) = 0;
    *(undefined8 *)((longlong)_Dst + 0x50) = 0;
    *(undefined8 *)((longlong)_Dst + 0x58) = 0;
    *(undefined8 *)((longlong)_Dst + 0x70) = 0;
    *(undefined8 *)((longlong)_Dst + 0x78) = 0;
    *(undefined4 *)((longlong)_Dst + 0x80) = 0xffffffff;
    *(undefined4 *)((longlong)_Dst + 0x84) = 0;
    *(undefined8 *)((longlong)_Dst + 0x90) = 0;
    *(undefined4 *)((longlong)_Dst + 0x98) = 0;
    *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
    *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
    *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
    *(undefined8 *)((longlong)_Dst + 200) = 0;
    *(undefined4 *)((longlong)_Dst + 0xd0) = 0xffffffff;
    *(undefined4 *)((longlong)_Dst + 0xd4) = 0;
    *(undefined8 *)((longlong)_Dst + 0xe0) = 0;
    *(undefined4 *)((longlong)_Dst + 0xe8) = 0;
    pvVar2 = _Dst;
  }
  param_1[0x13] = pvVar2;
  lVar1 = operator_new(0xf0);
  if (lVar1 != 0) {
    pvVar3 = (void *)FTimerManager::FTimerManager(lVar1);
  }
  param_1[0x14] = pvVar3;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 **)(param_1[0x12] + 0xe8) = param_1;
  *(undefined8 **)(param_1[0x14] + 0xe8) = param_1;
  return param_1;
}



// FUNCTION 14243ed10 FUN_14243ed10 body=33 status=ok
// SIG undefined FUN_14243ed10(void)

undefined8 * FUN_14243ed10(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450aaa60;
  return param_1;
}



// FUNCTION 14243ed40 UHapticFeedbackEffect_Buffer body=124 status=ok
// SIG undefined UHapticFeedbackEffect_Buffer(void)

undefined8 * UHapticFeedbackEffect_Buffer::UHapticFeedbackEffect_Buffer(undefined8 *param_1)

{
  int iVar1;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450ab210;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar1 = *(int *)(param_1 + 9);
  *(int *)(param_1 + 9) = *(int *)(param_1 + 6) + iVar1;
  if (*(int *)((longlong)param_1 + 0x4c) < *(int *)(param_1 + 6) + iVar1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow();
  }
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 7);
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  return param_1;
}



// FUNCTION 14243edc0 UHapticFeedbackEffect_Curve body=63 status=ok
// SIG undefined UHapticFeedbackEffect_Curve(void)

undefined8 * UHapticFeedbackEffect_Curve::UHapticFeedbackEffect_Curve(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450aacf0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 5);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x14);
  return param_1;
}



// FUNCTION 14243ee00 UHapticFeedbackEffect_SoundWave body=59 status=ok
// SIG undefined UHapticFeedbackEffect_SoundWave(void)

undefined8 * UHapticFeedbackEffect_SoundWave::UHapticFeedbackEffect_SoundWave(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450aaf80;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 14243ee40 FUN_14243ee40 body=197 status=ok
// SIG undefined FUN_14243ee40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14243ee40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_14237f6c0();
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *param_1 = &PTR_FUN_1450ab740;
  param_1[5] = &PTR_LAB_1450abc98;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined1 *)(param_1 + 7) = 4;
  *(uint *)((longlong)param_1 + 0x2f4) = *(uint *)((longlong)param_1 + 0x2f4) & 0xfffffffd;
  *(uint *)((longlong)param_1 + 0x2f4) = *(uint *)((longlong)param_1 + 0x2f4) | 0x1d;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x20;
  *(undefined4 *)(param_1 + 0x5a) = 0x43960000;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x41400000;
  *(undefined1 *)(param_1 + 0x5e) = 4;
  uVar2 = _DAT_1464aa818;
  uVar1 = _DAT_1464aa810;
  *(uint *)((longlong)param_1 + 0x2f4) = *(uint *)((longlong)param_1 + 0x2f4) | 0x80;
  param_1[0x6a] = uVar1;
  param_1[0x6b] = uVar2;
  *(undefined4 *)(param_1 + 0x5f) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0x41200000;
  param_1[0x60] = 0x3c888889;
  *(undefined8 *)((longlong)param_1 + 0x30c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x314) = DAT_1468b5d98;
  return param_1;
}



// FUNCTION 14243ef10 UTouchInterface body=78 status=ok
// SIG undefined UTouchInterface(void)

undefined8 * UTouchInterface::UTouchInterface(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1450abcd8;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 8) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x40000000;
  return param_1;
}



// FUNCTION 14243ef60 FUN_14243ef60 body=349 status=ok
// SIG undefined FUN_14243ef60(void)

void FUN_14243ef60(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x58);
    do {
      plVar4 = (longlong *)plVar7[3];
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
      plVar4 = (longlong *)*plVar7;
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
      plVar4 = (longlong *)plVar7[-8];
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
      plVar4 = (longlong *)plVar7[-10];
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
      plVar7 = plVar7 + 0x1a;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14243f0c0 ~TArray<FTouchInputControl,TSizedDefaultAllocator<32>_> body=224 status=ok
// SIG undefined ~TArray<FTouchInputControl,TSizedDefaultAllocator<32>_>(void)

void TArray<FTouchInputControl,TSizedDefaultAllocator<32>_>::
     ~TArray<FTouchInputControl,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x48);
    do {
      plVar4 = (longlong *)plVar7[3];
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
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 0xd;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14243f1a0 FUN_14243f1a0 body=648 status=ok
// SIG undefined FUN_14243f1a0(void)

void FUN_14243f1a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x430);
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
  plVar4 = *(longlong **)(param_1 + 0x418);
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
  plVar4 = *(longlong **)(param_1 + 0x408);
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
  plVar4 = *(longlong **)(param_1 + 0x3f8);
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
  plVar4 = *(longlong **)(param_1 + 1000);
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
  plVar4 = *(longlong **)(param_1 + 0x3d8);
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
  plVar4 = *(longlong **)(param_1 + 0x3c8);
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
  plVar4 = *(longlong **)(param_1 + 0x3b8);
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
  plVar4 = *(longlong **)(param_1 + 0x3a8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x390);
  *(undefined4 *)(param_1 + 0x378) = 0;
  if (*(longlong *)(param_1 + 0x370) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x330,0);
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FMemory::Free();
  }
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 14243f430 FUN_14243f430 body=741 status=ok
// SIG undefined FUN_14243f430(void)

longlong * FUN_14243f430(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  
  if (param_1 != param_2) {
    iVar7 = (int)param_1[1];
    if (iVar7 != 0) {
      plVar8 = (longlong *)(*param_1 + 0x58);
      do {
        plVar5 = (longlong *)plVar8[3];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar5 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = (longlong *)*plVar8;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar5 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = (longlong *)plVar8[-8];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar5 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = (longlong *)plVar8[-10];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar5 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar8 = plVar8 + 0x1a;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = (int)param_2[1];
    lVar4 = *param_2;
    *(int *)(param_1 + 1) = iVar7;
    if ((iVar7 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeForCopy(param_1,iVar7);
      plVar8 = (longlong *)*param_1;
      if (iVar7 != 0) {
        plVar5 = (longlong *)(lVar4 + 0x70);
        plVar6 = plVar8 + 0xe;
        do {
          *plVar8 = plVar5[-0xe];
          lVar4 = plVar5[-0xd];
          plVar6[-0xd] = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          plVar6[-0xc] = plVar5[-0xc];
          lVar4 = plVar5[-0xb];
          plVar6[-0xb] = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          plVar6[-10] = plVar5[-10];
          plVar6[-9] = plVar5[-9];
          plVar6[-8] = plVar5[-8];
          plVar6[-7] = plVar5[-7];
          plVar6[-6] = plVar5[-6];
          plVar6[-5] = plVar5[-5];
          plVar6[-4] = plVar5[-4];
          lVar4 = plVar5[-3];
          plVar6[-3] = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          plVar6[-2] = plVar5[-2];
          plVar6[-1] = plVar5[-1];
          lVar4 = *plVar5;
          *plVar6 = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          plVar8 = plVar8 + 0x1a;
          plVar6[1] = plVar5[1];
          plVar6[2] = plVar5[2];
          plVar6[3] = plVar5[3];
          plVar6[4] = plVar5[4];
          plVar6[5] = plVar5[5];
          plVar6[6] = plVar5[6];
          plVar6[7] = plVar5[7];
          plVar6[8] = plVar5[8];
          *(int *)(plVar6 + 9) = (int)plVar5[9];
          *(undefined4 *)((longlong)plVar6 + 0x4c) = *(undefined4 *)((longlong)plVar5 + 0x4c);
          plVar6[10] = plVar5[10];
          *(char *)(plVar6 + 0xb) = (char)plVar5[0xb];
          *(undefined1 *)((longlong)plVar6 + 0x59) = *(undefined1 *)((longlong)plVar5 + 0x59);
          puVar2 = (undefined1 *)((longlong)plVar5 + 0x5a);
          plVar5 = plVar5 + 0x1a;
          *(undefined1 *)((longlong)plVar6 + 0x5a) = *puVar2;
          plVar6 = plVar6 + 0x1a;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 14243f720 FUN_14243f720 body=735 status=ok
// SIG undefined FUN_14243f720(void)

longlong FUN_14243f720(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *puVar7;
  
  if (param_1 != param_2) {
    lVar1 = param_1 + 8;
    FUN_14244add0(lVar1,*(undefined4 *)(param_2 + 0x90));
    puVar8 = (undefined8 *)0x0;
    if (0 < *(int *)(param_2 + 0x90)) {
      puVar7 = puVar8;
      puVar9 = puVar8;
      do {
        lVar5 = *(longlong *)(param_2 + 0x88);
        if (*(longlong *)(param_2 + 0x88) == 0) {
          lVar5 = param_2 + 8;
        }
        if (*(longlong **)(lVar5 + (longlong)puVar9) != (longlong *)0x0) {
          uVar3 = (**(code **)(**(longlong **)(lVar5 + (longlong)puVar9) + 0x10))();
          local_38 = uVar3;
          puVar4 = (undefined8 *)operator_new(0x18);
          local_30 = puVar8;
          if (puVar4 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar4 + 1) = 1;
            *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
            *puVar4 = &PTR_FUN_143f3f2e0;
            puVar4[2] = uVar3;
            local_30 = puVar4;
          }
          SharedPointerInternals::EnableSharedFromThis(&local_38,uVar3,uVar3);
          iVar2 = *(int *)(param_1 + 0x90);
          *(int *)(param_1 + 0x90) = iVar2 + 1;
          if (*(int *)(param_1 + 0x94) < iVar2 + 1) {
            TArray<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,TInlineAllocator<8,FDefaultAllocator>_>
            ::ResizeGrow(lVar1,iVar2);
          }
          lVar5 = *(longlong *)(param_1 + 0x88);
          if (*(longlong *)(param_1 + 0x88) == 0) {
            lVar5 = lVar1;
          }
          puVar4 = (undefined8 *)(lVar5 + (longlong)iVar2 * 0x10);
          *puVar4 = local_38;
          puVar4[1] = local_30;
          local_30 = (undefined8 *)0x0;
          local_38 = 0;
        }
        uVar6 = (int)puVar7 + 1;
        puVar7 = (undefined8 *)(ulonglong)uVar6;
        puVar9 = puVar9 + 2;
      } while ((int)uVar6 < *(int *)(param_2 + 0x90));
    }
    lVar1 = param_1 + 0x98;
    FUN_14244ad10(lVar1,*(undefined4 *)(param_2 + 0xe0));
    if (0 < *(int *)(param_2 + 0xe0)) {
      puVar7 = puVar8;
      puVar9 = puVar8;
      do {
        lVar5 = *(longlong *)(param_2 + 0xd8);
        if (*(longlong *)(param_2 + 0xd8) == 0) {
          lVar5 = param_2 + 0x98;
        }
        if (*(longlong **)(lVar5 + (longlong)puVar9) != (longlong *)0x0) {
          uVar3 = (**(code **)(**(longlong **)(lVar5 + (longlong)puVar9) + 0x10))();
          local_38 = uVar3;
          puVar4 = (undefined8 *)operator_new(0x18);
          local_30 = puVar8;
          if (puVar4 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar4 + 1) = 1;
            *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
            *puVar4 = &PTR_FUN_143f3f2e0;
            puVar4[2] = uVar3;
            local_30 = puVar4;
          }
          SharedPointerInternals::EnableSharedFromThis(&local_38,uVar3,uVar3);
          iVar2 = *(int *)(param_1 + 0xe0);
          *(int *)(param_1 + 0xe0) = iVar2 + 1;
          if (*(int *)(param_1 + 0xe4) < iVar2 + 1) {
            TArray<FMovieSceneSectionData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (lVar1,iVar2);
          }
          lVar5 = *(longlong *)(param_1 + 0xd8);
          if (*(longlong *)(param_1 + 0xd8) == 0) {
            lVar5 = lVar1;
          }
          puVar4 = (undefined8 *)(lVar5 + (longlong)iVar2 * 0x10);
          *puVar4 = local_38;
          puVar4[1] = local_30;
          local_30 = (undefined8 *)0x0;
          local_38 = 0;
        }
        uVar6 = (int)puVar7 + 1;
        puVar7 = (undefined8 *)(ulonglong)uVar6;
        puVar9 = puVar9 + 2;
      } while ((int)uVar6 < *(int *)(param_2 + 0xe0));
    }
    *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
    *(undefined1 *)(param_1 + 0xe9) = *(undefined1 *)(param_2 + 0xe9);
    *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(param_2 + 0xec);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
    *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
    *(undefined1 *)(param_1 + 0xf9) = *(undefined1 *)(param_2 + 0xf9);
  }
  return param_1;
}



// FUNCTION 14243fa00 operator<< body=194 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_14243fad0();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(param_2 + 0x40),0,0);
      *(undefined8 *)(param_2 + 0x40) = uVar3;
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar5 < 4) {
      iVar2 = 1;
    }
    else {
      uVar1 = (uVar5 >> 1) + 8;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar4 = 0x20;
      if (uVar1 != 0) {
        iVar4 = 0x1f - iVar2;
      }
      uVar1 = (uVar5 >> 1) + 7;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      if (uVar1 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
      }
    }
    if (0 < (int)uVar5) {
      *(int *)(param_2 + 0x48) = iVar2;
      TSet<wchar_t,DefaultKeyFuncs<wchar_t,0>,FDefaultSetAllocator>::Rehash(param_2);
    }
  }
  return param_1;
}



// FUNCTION 14243fad0 FUN_14243fad0 body=1053 status=ok
// SIG undefined FUN_14243fad0(void)

longlong * FUN_14243fad0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  int local_res8 [2];
  longlong *local_58;
  undefined1 local_50 [4];
  uint local_4c;
  longlong local_48;
  uint local_40;
  int local_3c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  plVar1 = param_2 + 2;
  iVar6 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar7 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar12 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar12[1] < (int *)*plVar12 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar12;
      *plVar12 = *plVar12 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_58,param_2);
    if (local_3c < *(int *)(local_48 + 0x18)) {
      do {
        puVar3 = (undefined2 *)(*local_58 + (longlong)local_3c * 0xc);
        puVar5 = *(undefined2 **)param_1[1];
        if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
          (**(code **)(*param_1 + 0x50))(param_1,puVar3,2);
          if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_1,puVar3,2);
          }
        }
        else {
          *puVar3 = *puVar5;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
        }
        puVar5 = *(undefined2 **)param_1[1];
        if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
          (**(code **)(*param_1 + 0x50))(param_1,puVar3 + 1,2);
          if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_1,puVar3 + 1,2);
          }
        }
        else {
          puVar3[1] = *puVar5;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
        }
        local_40 = local_40 & ~local_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_50);
      } while (local_3c < *(int *)(local_48 + 0x18));
    }
    return param_1;
  }
  iVar6 = 0;
  local_res8[0] = 0;
  if ((int *)plVar12[1] < (int *)*plVar12 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar12;
    *plVar12 = *plVar12 + 4;
  }
  iVar7 = local_res8[0];
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  uVar8 = iVar7 + 0x1f + (iVar7 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_2 + 0x2c) != uVar8) {
    *(uint *)((longlong)param_2 + 0x2c) = uVar8;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar1,0);
  }
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar7 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar7 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(plVar1,0,1);
      }
      else {
        iVar7 = (int)param_2[6];
        iVar9 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar10 = *(int *)(*param_2 + 4 + (longlong)iVar7 * 0xc);
        *(int *)(param_2 + 6) = iVar10;
        *(int *)((longlong)param_2 + 0x34) = iVar9;
        if (iVar9 != 0) {
          *(undefined4 *)(*param_2 + (longlong)iVar10 * 0xc) = 0xffffffff;
        }
      }
      plVar12 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar12 = plVar1;
      }
      iVar10 = iVar7;
      if (iVar7 < 0) {
        iVar10 = iVar7 + 0x1f;
      }
      puVar2 = (uint *)((longlong)plVar12 + (longlong)(iVar10 >> 5) * 4);
      lVar11 = (longlong)iVar7;
      *puVar2 = *puVar2 | 1 << ((byte)iVar7 & 0x1f);
      lVar4 = *param_2;
      *(undefined4 *)(lVar4 + lVar11 * 0xc) = 0;
      *(undefined4 *)(lVar4 + 4 + lVar11 * 0xc) = 0xffffffff;
      puVar3 = (undefined2 *)(lVar4 + lVar11 * 0xc);
      puVar5 = *(undefined2 **)param_1[1];
      if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,puVar3,2);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,puVar3,2);
        }
      }
      else {
        *puVar3 = *puVar5;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
      }
      puVar5 = *(undefined2 **)param_1[1];
      if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,puVar3 + 1,2);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,puVar3 + 1,2);
        }
      }
      else {
        puVar3[1] = *puVar5;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 14243fef0 operator== body=350 status=ok
// SIG undefined operator==(void)

undefined8 FRootMotionSourceGroup::operator==(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if (((((*(char *)(param_1 + 0xe8) != *(char *)(param_2 + 0xe8)) ||
        (*(char *)(param_1 + 0xe9) != *(char *)(param_2 + 0xe9))) ||
       (*(char *)(param_1 + 0xf8) != *(char *)(param_2 + 0xf8))) ||
      ((1.0 < ABS(*(float *)(param_1 + 0xec) - *(float *)(param_2 + 0xec)) ||
       (1.0 < ABS(*(float *)(param_1 + 0xf0) - *(float *)(param_2 + 0xf0)))))) ||
     ((1.0 < ABS(*(float *)(param_1 + 0xf4) - *(float *)(param_2 + 0xf4)) ||
      (*(int *)(param_1 + 0x90) != *(int *)(param_2 + 0x90))))) {
    return 0;
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x88);
      if (*(longlong *)(param_2 + 0x88) == 0) {
        lVar4 = param_2 + 8;
      }
      lVar3 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        lVar3 = param_1 + 8;
      }
      plVar1 = *(longlong **)(lVar3 + lVar5);
      if ((plVar1 != (longlong *)0x0) != (*(longlong *)(lVar4 + lVar5) != 0)) {
        return 0;
      }
      if ((plVar1 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar1 + 0x20))(), cVar2 == '\0')) {
        return 0;
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar6 < *(int *)(param_1 + 0x90));
  }
  return 1;
}



// FUNCTION 142440050 operator!= body=333 status=ok
// SIG undefined operator!=(void)

undefined8 FRootMotionSourceGroup::operator!=(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if (((((*(char *)(param_1 + 0xe8) == *(char *)(param_2 + 0xe8)) &&
        (*(char *)(param_1 + 0xe9) == *(char *)(param_2 + 0xe9))) &&
       (*(char *)(param_1 + 0xf8) == *(char *)(param_2 + 0xf8))) &&
      ((ABS(*(float *)(param_1 + 0xec) - *(float *)(param_2 + 0xec)) <= 1.0 &&
       (ABS(*(float *)(param_1 + 0xf0) - *(float *)(param_2 + 0xf0)) <= 1.0)))) &&
     (ABS(*(float *)(param_1 + 0xf4) - *(float *)(param_2 + 0xf4)) <= 1.0)) {
    if (*(int *)(param_1 + 0x90) == *(int *)(param_2 + 0x90)) {
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 0x90)) {
        lVar5 = 0;
        do {
          lVar4 = *(longlong *)(param_2 + 0x88);
          if (*(longlong *)(param_2 + 0x88) == 0) {
            lVar4 = param_2 + 8;
          }
          lVar3 = *(longlong *)(param_1 + 0x88);
          if (*(longlong *)(param_1 + 0x88) == 0) {
            lVar3 = param_1 + 8;
          }
          plVar1 = *(longlong **)(lVar3 + lVar5);
          if (((plVar1 != (longlong *)0x0) != (*(longlong *)(lVar4 + lVar5) != 0)) ||
             ((plVar1 != (longlong *)0x0 && (cVar2 = (**(code **)(*plVar1 + 0x20))(), cVar2 == '\0')
              ))) {
            return 1;
          }
          iVar6 = iVar6 + 1;
          lVar5 = lVar5 + 0x10;
        } while (iVar6 < *(int *)(param_1 + 0x90));
      }
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1424401a0 FUN_1424401a0 body=904 status=ok
// SIG undefined FUN_1424401a0(void)

undefined8 FUN_1424401a0(longlong *param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    if ((*(byte *)(lVar3 + 0x30) & 6) == 0) {
      return 0;
    }
    if ((*(char *)(lVar3 + 0x14) == '\x01') && (lVar2 = *param_1, *(char *)(lVar2 + 0xf8) != '\0'))
    {
      FUN_142441120(lVar2,lVar3,(int)param_1[1],param_1[2],param_1[3],lVar2 + 0xec);
      lVar3 = *param_2;
    }
    if (*(char *)(lVar3 + 0x80) == '\x02') {
      fVar9 = *(float *)(lVar3 + 0x90);
      lVar3 = param_1[3];
      if (0.0001 <= fVar9) {
        fVar5 = *(float *)(lVar3 + 400);
        fVar1 = *(float *)(lVar3 + 0x18c);
        fVar6 = fVar1 * fVar1 + fVar5 * fVar5;
        if (fVar6 <= fVar9 * fVar9) {
          uVar7 = *(undefined8 *)(lVar3 + 0x18c);
          uVar4 = *(undefined4 *)(lVar3 + 0x194);
        }
        else {
          auVar10 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
          fVar8 = auVar10._0_4_;
          fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
          uVar4 = *(undefined4 *)(lVar3 + 0x194);
          fVar9 = (fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8)) * fVar9;
          uVar7 = CONCAT44(fVar5 * fVar9,fVar1 * fVar9);
        }
      }
      else {
        uVar4 = *(undefined4 *)(lVar3 + 0x194);
        uVar7 = 0;
      }
      *(undefined8 *)(lVar3 + 0x18c) = uVar7;
      *(undefined4 *)(lVar3 + 0x194) = uVar4;
      fVar9 = *(float *)(param_1[3] + 0x194);
      fVar5 = *(float *)(*param_2 + 0x90);
      if (fVar9 <= *(float *)(*param_2 + 0x90)) {
        fVar5 = fVar9;
      }
      *(float *)(param_1[3] + 0x194) = fVar5;
      lVar3 = *param_1;
      if (*(char *)(lVar3 + 0xf8) != '\0') {
        fVar9 = *(float *)(*param_2 + 0x90);
        if (0.0001 <= fVar9) {
          fVar5 = *(float *)(lVar3 + 0xf0);
          fVar1 = *(float *)(lVar3 + 0xec);
          fVar6 = fVar1 * fVar1 + fVar5 * fVar5;
          if (fVar6 <= fVar9 * fVar9) {
            uVar7 = *(undefined8 *)(lVar3 + 0xec);
            uVar4 = *(undefined4 *)(lVar3 + 0xf4);
          }
          else {
            auVar10 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
            fVar8 = auVar10._0_4_;
            fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
            uVar4 = *(undefined4 *)(lVar3 + 0xf4);
            fVar9 = (fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8)) * fVar9;
            uVar7 = CONCAT44(fVar5 * fVar9,fVar1 * fVar9);
          }
        }
        else {
          uVar4 = *(undefined4 *)(lVar3 + 0xf4);
          uVar7 = 0;
        }
        *(undefined8 *)(lVar3 + 0xec) = uVar7;
        *(undefined4 *)(lVar3 + 0xf4) = uVar4;
        fVar9 = *(float *)(*param_1 + 0xf4);
        fVar5 = *(float *)(*param_2 + 0x90);
        if (fVar9 <= *(float *)(*param_2 + 0x90)) {
          fVar5 = fVar9;
        }
        *(float *)(*param_1 + 0xf4) = fVar5;
      }
    }
    else if (*(char *)(lVar3 + 0x80) == '\x01') {
      lVar2 = param_1[3];
      *(undefined8 *)(lVar2 + 0x18c) = *(undefined8 *)(lVar3 + 0x84);
      *(undefined4 *)(lVar2 + 0x194) = *(undefined4 *)(lVar3 + 0x8c);
      lVar3 = *param_1;
      if (*(char *)(lVar3 + 0xf8) != '\0') {
        uVar4 = *(undefined4 *)(*param_2 + 0x8c);
        *(undefined8 *)(lVar3 + 0xec) = *(undefined8 *)(*param_2 + 0x84);
        *(undefined4 *)(lVar3 + 0xf4) = uVar4;
      }
    }
  }
  return 1;
}



// FUNCTION 142440530 operator() body=231 status=ok
// SIG undefined operator()(void)

void <lambda_d78fe1ab79e86ce96bf4851e164ff097>::operator()(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  
  lVar9 = *param_2;
  lVar1 = lVar9 + (longlong)(int)param_2[1] * 0x28;
  if (lVar9 != lVar1) {
    lVar9 = lVar9 + 8;
    do {
      lVar4 = FUniqueNetIdString::GetBytes(lVar9);
      if (lVar4 == 0) {
LAB_1424405aa:
        cVar3 = FFontData::GetLoadingPolicy(lVar9);
        if (cVar3 == '\0') {
          plVar6 = (longlong *)FUN_1415c3d50();
          puVar7 = (undefined8 *)FFontData::GetFontFilename(lVar9);
          if (*(int *)(puVar7 + 1) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*puVar7;
          }
          lVar4 = (**(code **)(*plVar6 + 0xe8))(plVar6,puVar8);
          if (0 < lVar4) {
            *(longlong *)(*param_1 + 8) = *(longlong *)(*param_1 + 8) + lVar4;
          }
        }
      }
      else {
        lVar5 = UFontFace::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1424405aa;
      }
      lVar4 = lVar9 + 0x20;
      lVar9 = lVar9 + 0x28;
    } while (lVar4 != lVar1);
  }
  return;
}



// FUNCTION 1424406c0 FUN_1424406c0 body=97 status=ok
// SIG undefined FUN_1424406c0(void)

undefined8 * FUN_1424406c0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1450aaa50;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142440730 FUN_142440730 body=73 status=ok
// SIG undefined FUN_142440730(void)

longlong FUN_142440730(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x528) != 0) {
    FMemory::Free();
  }
  FUN_140ac7a60(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x548);
  }
  return param_1;
}



// FUNCTION 142440780 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UOctreeRenderingComponent::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140ac7a60();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x500);
  }
  return param_1;
}



// FUNCTION 1424407c0 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FRadialDamageEvent::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_14503cd78;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142440810 FUN_142440810 body=43 status=ok
// SIG undefined FUN_142440810(void)

undefined8 * FUN_142440810(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1450ab4a0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 142440840 FUN_142440840 body=43 status=ok
// SIG undefined FUN_142440840(void)

undefined8 * FUN_142440840(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1450ab4a0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 142440870 FUN_142440870 body=43 status=ok
// SIG undefined FUN_142440870(void)

undefined8 * FUN_142440870(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1450ab4a0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1424408a0 FUN_1424408a0 body=43 status=ok
// SIG undefined FUN_1424408a0(void)

undefined8 * FUN_1424408a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1450ab4a0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1424408d0 FUN_1424408d0 body=43 status=ok
// SIG undefined FUN_1424408d0(void)

undefined8 * FUN_1424408d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1450ab4a0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 142440900 FUN_142440900 body=52 status=ok
// SIG undefined FUN_142440900(void)

undefined8 FUN_142440900(undefined8 param_1,ulonglong param_2)

{
  FUN_141420620();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x11d0);
  }
  return param_1;
}



// FUNCTION 142440940 FUN_142440940 body=85 status=ok
// SIG undefined FUN_142440940(void)

longlong FUN_142440940(longlong param_1,ulonglong param_2)

{
  thunk_FUN_142478640(param_1 + 0x210);
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 1424409a0 `scalar_deleting_destructor' body=279 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UFont::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x180);
  TArray<FCompositeSubFont,FDefaultAllocator>::~TArray<FCompositeSubFont,FDefaultAllocator>
            (param_1 + 0x170);
  TArray<FTypefaceEntry,FDefaultAllocator>::~TArray<FTypefaceEntry,FDefaultAllocator>
            (param_1 + 0x158);
  TArray<FTypefaceEntry,FDefaultAllocator>::~TArray<FTypefaceEntry,FDefaultAllocator>
            (param_1 + 0x148);
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143fe0658;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 142440ac0 `scalar_deleting_destructor' body=157 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UFontFace::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_14476ab00;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142440b60 `scalar_deleting_destructor' body=126 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UFontImportOptions::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 142440be0 FUN_142440be0 body=130 status=ok
// SIG undefined FUN_142440be0(void)

longlong FUN_142440be0(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      FRichCurve::~FRichCurve(lVar1);
      lVar1 = lVar1 + 0x80;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x28);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142440c70 FUN_142440c70 body=230 status=ok
// SIG undefined FUN_142440c70(void)

longlong FUN_142440c70(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x1208);
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
  plVar4 = *(longlong **)(param_1 + 0x11f8);
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
  plVar4 = *(longlong **)(param_1 + 0x11e8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FUN_141420620(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1220);
  }
  return param_1;
}



// FUNCTION 142440d60 FUN_142440d60 body=136 status=ok
// SIG undefined FUN_142440d60(void)

longlong FUN_142440d60(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FExec::~FExec(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 142440df0 `scalar_deleting_destructor' body=128 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UHapticFeedbackEffect_Buffer::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1450ab210;
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142440e70 FUN_142440e70 body=87 status=ok
// SIG undefined FUN_142440e70(void)

longlong FUN_142440e70(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0xa0);
  FRichCurve::~FRichCurve(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 142440ed0 `scalar_deleting_destructor' body=114 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UHapticFeedbackEffect_SoundWave::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1450aaf80;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 7,0);
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142440f50 FUN_142440f50 body=52 status=ok
// SIG undefined FUN_142440f50(void)

undefined8 FUN_142440f50(undefined8 param_1,ulonglong param_2)

{
  FUN_1405911f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x360);
  }
  return param_1;
}



// FUNCTION 142440f90 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UTouchInterface::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FTouchInputControl,TSizedDefaultAllocator<32>_>::
  ~TArray<FTouchInputControl,TSizedDefaultAllocator<32>_>(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142440ff0 AccumulateAdditiveRootMotionVelocity body=37 status=ok
// SIG undefined AccumulateAdditiveRootMotionVelocity(void)

void FRootMotionSourceGroup::AccumulateAdditiveRootMotionVelocity
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  AccumulateRootMotionVelocity(param_1,1,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 142441020 AccumulateOverrideRootMotionVelocity body=37 status=ok
// SIG undefined AccumulateOverrideRootMotionVelocity(void)

void FRootMotionSourceGroup::AccumulateOverrideRootMotionVelocity
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  AccumulateRootMotionVelocity(param_1,0,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 142441050 AccumulateRootMotionVelocity body=193 status=ok
// SIG undefined AccumulateRootMotionVelocity(void)

void FRootMotionSourceGroup::AccumulateRootMotionVelocity
               (longlong param_1,char param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x88);
  if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
    plVar2 = (longlong *)(param_1 + 8);
  }
  plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x90) * 2;
  for (; (plVar2 != plVar3 &&
         (((lVar1 = *plVar2, lVar1 == 0 || (*(char *)(lVar1 + 0x14) != param_2)) ||
          (FUN_142441120(param_1,lVar1,param_3,param_4,param_5,param_6),
          *(char *)(*plVar2 + 0x14) != '\0')))); plVar2 = plVar2 + 2) {
  }
  return;
}



// FUNCTION 142441120 FUN_142441120 body=1495 status=ok
// SIG undefined FUN_142441120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142441120(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,float *param_6)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float fVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar18 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  fVar11 = fRam0000000146af3908;
  fVar10 = fRam0000000146af3904;
  fVar9 = _DAT_146af3900;
  fVar8 = fRam0000000146af3818;
  fVar7 = fRam0000000146af3814;
  fVar6 = _DAT_146af3810;
  fVar5 = DAT_1464aa790;
  fVar4 = DAT_1464aa788._4_4_;
  fVar3 = (float)DAT_1464aa788;
  local_b8 = *(float *)(param_2 + 0x60);
  fStack_b4 = *(float *)(param_2 + 100);
  fStack_b0 = *(float *)(param_2 + 0x68);
  fVar17 = *(float *)(param_2 + 0x50);
  fVar15 = *(float *)(param_2 + 0x54);
  fVar20 = *(float *)(param_2 + 0x58);
  fVar22 = *(float *)(param_2 + 0x5c);
  auVar1 = *(undefined1 (*) [16])(param_2 + 0x70);
  fVar40 = auVar1._0_4_;
  fVar41 = auVar1._4_4_;
  fVar42 = auVar1._8_4_;
  if ((*(char *)(param_2 + 0x32) != '\0') && (lVar2 = *(longlong *)(param_5 + 0x178), lVar2 != 0)) {
    fVar16 = *(float *)(lVar2 + 0x210);
    fVar21 = *(float *)(lVar2 + 0x214);
    fVar19 = *(float *)(lVar2 + 0x218);
    fVar23 = *(float *)(lVar2 + 0x21c);
    auVar13._4_4_ = DAT_1464aa788._4_4_;
    auVar13._0_4_ = (float)DAT_1464aa788;
    auVar13._8_4_ = DAT_1464aa790;
    auVar13._12_4_ = 0;
    auVar13 = minps(auVar1,auVar13);
    auVar14._4_4_ = -(uint)(auVar13._4_4_ < fRam0000000146af3904);
    auVar14._0_4_ = -(uint)(auVar13._0_4_ < _DAT_146af3900);
    auVar14._8_4_ = -(uint)(auVar13._8_4_ < fRam0000000146af3908);
    auVar14._12_4_ = -(uint)(auVar13._12_4_ < fRam0000000146af390c);
    iVar12 = movmskps((int)param_5,auVar14);
    if (iVar12 == 0) {
      local_b8 = (float)DAT_1464aa788 * local_b8;
      fStack_b4 = DAT_1464aa788._4_4_ * fStack_b4;
      fStack_b0 = DAT_1464aa790 * fStack_b0;
      fVar40 = fStack_b0 * fVar21 - fStack_b4 * fVar19;
      fVar41 = local_b8 * fVar19 - fStack_b0 * fVar16;
      fVar42 = fStack_b4 * fVar16 - local_b8 * fVar21;
      fVar40 = fVar40 + fVar40;
      fVar41 = fVar41 + fVar41;
      fVar42 = fVar42 + fVar42;
      local_b8 = (fVar42 * fVar21 - fVar41 * fVar19) + fVar23 * fVar40 + local_b8 + DAT_1468b5d90;
      fStack_b4 = (fVar40 * fVar19 - fVar42 * fVar16) + fVar23 * fVar41 + fStack_b4 + DAT_1468b5d94;
      fStack_b0 = (fVar41 * fVar16 - fVar40 * fVar21) + fVar23 * fVar42 + fStack_b0 + DAT_1468b5d98;
    }
    else {
      fVar24 = fVar21 + fVar21;
      fVar27 = fVar19 + fVar19;
      fVar29 = fVar16 * (fVar16 + fVar16);
      fVar25 = (fVar16 + fVar16) * fVar23;
      fVar26 = fVar15 + fVar15;
      fVar28 = fVar20 + fVar20;
      fVar37 = (fVar27 * fVar23 + fVar24 * fVar16) * (float)DAT_1464aa788;
      fVar38 = (fVar25 + fVar27 * fVar21) * DAT_1464aa788._4_4_;
      fVar39 = (fVar24 * fVar23 + fVar27 * fVar16) * DAT_1464aa790;
      fVar30 = DAT_1464aa788._4_4_ * (fVar24 * fVar16 - fVar27 * fVar23);
      fVar31 = DAT_1464aa790 * (fVar27 * fVar21 - fVar25);
      fVar32 = (float)DAT_1464aa788 * (fVar27 * fVar16 - fVar24 * fVar23);
      fVar25 = fVar17 * (fVar17 + fVar17);
      fVar16 = (float)((uint)((_DAT_146af3810 - (fVar19 * fVar27 + fVar21 * fVar24)) *
                             (float)DAT_1464aa788) & _DAT_146af3820);
      fVar19 = (float)((uint)((fRam0000000146af3814 - (fVar19 * fVar27 + fVar29)) *
                             DAT_1464aa788._4_4_) & uRam0000000146af3824);
      fVar21 = (float)((uint)((fRam0000000146af3818 - (fVar21 * fVar24 + fVar29)) * DAT_1464aa790) &
                      uRam0000000146af3828);
      fVar23 = (float)((uint)((fRam0000000146af381c - (fVar29 + fVar29)) * 0.0) &
                      uRam0000000146af382c);
      fVar24 = (fVar17 + fVar17) * fVar22;
      fVar34 = (fVar28 * fVar22 + fVar26 * fVar17) * fVar40;
      fVar35 = (fVar24 + fVar28 * fVar15) * fVar41;
      fVar36 = (fVar26 * fVar22 + fVar28 * fVar17) * fVar42;
      fVar27 = fVar41 * (fVar26 * fVar17 - fVar28 * fVar22);
      fVar29 = fVar42 * (fVar28 * fVar15 - fVar24);
      fVar33 = fVar40 * (fVar28 * fVar17 - fVar26 * fVar22);
      fVar17 = (float)((uint)((_DAT_146af3810 - (fVar20 * fVar28 + fVar15 * fVar26)) * fVar40) &
                      _DAT_146af3820);
      fVar20 = (float)((uint)((fRam0000000146af3814 - (fVar20 * fVar28 + fVar25)) * fVar41) &
                      uRam0000000146af3824);
      fVar22 = (float)((uint)((fRam0000000146af3818 - (fVar15 * fVar26 + fVar25)) * fVar42) &
                      uRam0000000146af3828);
      fVar24 = (float)((uint)((fRam0000000146af381c - (fVar25 + fVar25)) * auVar1._12_4_) &
                      uRam0000000146af382c);
      local_e8 = fVar34 * fVar30 + fVar17 * fVar16 + fVar33 * fVar39 + fVar24 * DAT_1468b5d90;
      fStack_e4 = fVar34 * fVar19 + fVar17 * fVar37 + fVar33 * fVar31 + fVar24 * DAT_1468b5d94;
      fStack_e0 = fVar34 * fVar38 + fVar17 * fVar32 + fVar33 * fVar21 + fVar24 * DAT_1468b5d98;
      fStack_dc = fVar34 * fVar23 + fVar17 * fVar23 + fVar33 * fVar23 +
                  fVar24 * fRam0000000146af381c;
      local_d8 = fVar20 * fVar30 + fVar27 * fVar16 + fVar35 * fVar39 + fVar24 * DAT_1468b5d90;
      fStack_d4 = fVar20 * fVar19 + fVar27 * fVar37 + fVar35 * fVar31 + fVar24 * DAT_1468b5d94;
      fStack_d0 = fVar20 * fVar38 + fVar27 * fVar32 + fVar35 * fVar21 + fVar24 * DAT_1468b5d98;
      fStack_cc = fVar20 * fVar23 + fVar27 * fVar23 + fVar35 * fVar23 +
                  fVar24 * fRam0000000146af381c;
      fVar26 = fStack_b4 * fVar38;
      fVar27 = fStack_b4 * fVar23;
      fVar25 = fStack_b0 * fVar23;
      fVar17 = local_b8 * fVar37;
      fVar15 = local_b8 * fVar32;
      fVar20 = local_b8 * fVar23;
      local_c8 = fVar29 * fVar30 + fVar36 * fVar16 + fVar22 * fVar39 + fVar24 * DAT_1468b5d90;
      fStack_c4 = fVar29 * fVar19 + fVar36 * fVar37 + fVar22 * fVar31 + fVar24 * DAT_1468b5d94;
      fStack_c0 = fVar29 * fVar38 + fVar36 * fVar32 + fVar22 * fVar21 + fVar24 * DAT_1468b5d98;
      fStack_bc = fVar29 * fVar23 + fVar36 * fVar23 + fVar22 * fVar23 +
                  fVar24 * fRam0000000146af381c;
      local_b8 = fStack_b4 * fVar30 + local_b8 * fVar16 + fStack_b0 * fVar39 +
                 fRam0000000146af381c * DAT_1468b5d90;
      fStack_b4 = fStack_b4 * fVar19 + fVar17 + fStack_b0 * fVar31 +
                  fRam0000000146af381c * DAT_1468b5d94;
      fStack_b0 = fVar26 + fVar15 + fStack_b0 * fVar21 + fRam0000000146af381c * DAT_1468b5d98;
      fStack_ac = fVar27 + fVar20 + fVar25 + fRam0000000146af381c * fRam0000000146af381c;
      FMatrix::RemoveScaling(&local_e8);
      fVar40 = (float)(-(uint)(fVar9 <= fVar40 * fVar3) & (_DAT_146af38f0 ^ (uint)fVar6) ^
                      _DAT_146af38f0);
      fVar41 = (float)(-(uint)(fVar10 <= fVar41 * fVar4) & (uRam0000000146af38f4 ^ (uint)fVar7) ^
                      uRam0000000146af38f4);
      fVar42 = (float)(-(uint)(fVar11 <= fVar42 * fVar5) & (uRam0000000146af38f8 ^ (uint)fVar8) ^
                      uRam0000000146af38f8);
      local_e8 = local_e8 * fVar40;
      fStack_e4 = fStack_e4 * fVar40;
      fStack_e0 = fStack_e0 * fVar40;
      fStack_d0 = fStack_d0 * fVar41;
      fStack_d4 = fStack_d4 * fVar41;
      local_d8 = local_d8 * fVar41;
      fStack_c0 = fStack_c0 * fVar42;
      local_c8 = local_c8 * fVar42;
      fStack_c4 = fStack_c4 * fVar42;
      FQuat::FQuat(&local_f8,&local_e8);
      auVar18._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
      auVar18._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
      auVar18._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
      auVar18._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
      auVar1._4_4_ = auVar18._8_4_ + auVar18._4_4_;
      auVar1._0_4_ = auVar18._4_4_ + auVar18._0_4_;
      auVar1._8_4_ = auVar18._12_4_ + auVar18._8_4_;
      auVar1._12_4_ = auVar18._0_4_ + auVar18._12_4_;
      rsqrtps(auVar18,auVar1);
    }
  }
  if (*(char *)(param_2 + 0x14) != '\0') {
    if (*(char *)(param_2 + 0x14) == '\x01') {
      *param_6 = local_b8 + *param_6;
      param_6[1] = fStack_b4 + param_6[1];
      param_6[2] = fStack_b0 + param_6[2];
    }
    return;
  }
  *(ulonglong *)param_6 = CONCAT44(fStack_b4,local_b8);
  param_6[2] = fStack_b0;
  return;
}



// FUNCTION 142441700 FUN_142441700 body=1989 status=ok
// SIG undefined FUN_142441700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142441b04) */
/* WARNING: Removing unreachable block (ram,0x000142441b11) */
/* WARNING: Removing unreachable block (ram,0x000142441b1d) */
/* WARNING: Removing unreachable block (ram,0x000142441b35) */

void FUN_142441700(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined1 local_1c8;
  undefined4 local_1c0;
  int local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  longlong local_190;
  longlong *plStack_188;
  longlong *local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong lStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_148;
  float local_144;
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  longlong local_120;
  longlong *local_118;
  longlong local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong *plStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  local_1b8 = 0;
  local_180 = param_2;
  local_c0 = param_1;
  if (*param_2 != 0) {
    local_1c0 = *(undefined4 *)(param_1 + 0x50);
    local_1d8 = *(undefined4 *)(param_1 + 0x44);
    local_1c8 = *(undefined1 *)(param_1 + 0x4c);
    local_1d0 = *(undefined4 *)(param_1 + 0x48);
    SVirtualJoystick::SetGlobalParameters
              (*param_2,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
               *(undefined4 *)(param_1 + 0x40));
    local_1b0 = 0;
    local_1a8 = 0;
    local_1b8 = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      local_108 = 0;
      plVar16 = local_180;
      plVar17 = local_180;
      do {
        plVar12 = (longlong *)(local_108 * 0x68 + *(longlong *)(param_1 + 0x28));
        local_170 = plVar12[1];
        local_168 = plVar12[2];
        lStack_160 = plVar12[3];
        lVar2 = *plVar12;
        local_144 = *(float *)((longlong)plVar12 + 0x34);
        local_140 = plVar12[7];
        local_158 = plVar12[4];
        uStack_150 = plVar12[5];
        local_138 = plVar12[8];
        local_130 = (longlong *)plVar12[9];
        local_148 = *(float *)(plVar12 + 6);
        if (local_130 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_130 + 1) = (int)local_130[1] + 1;
          UNLOCK();
        }
        local_128 = plVar12[10];
        local_120 = plVar12[0xb];
        local_118 = (longlong *)plVar12[0xc];
        if (local_118 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_118 + 1) = (int)local_118[1] + 1;
          UNLOCK();
        }
        lVar15 = (longlong)(int)local_1a8;
        iVar11 = (int)local_1a8 + 1;
        local_1a8 = CONCAT44(local_1a8._4_4_,iVar11);
        local_178 = lVar2;
        if (local_1a8._4_4_ < iVar11) {
          TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(&local_1b0);
        }
        puVar14 = (undefined8 *)0x0;
        puVar18 = (undefined8 *)(lVar15 * 0xd0 + local_1b0);
        if (puVar18 != (undefined8 *)0x0) {
          puVar18[3] = 0;
          *(undefined4 *)((longlong)puVar18 + 0x4c) = 0;
          puVar18[10] = 0;
          puVar18[0xb] = 0;
          *(undefined4 *)((longlong)puVar18 + 100) = 0;
          puVar18[0xd] = 0;
          puVar18[0xe] = 0;
          _guard_xfg_dispatch_icall_nop(puVar18,0,0xd0);
          *(undefined4 *)(puVar18 + 0x17) = 0xffffffff;
          *(undefined4 *)(puVar18 + 8) = 0x3f800000;
          *(undefined4 *)((longlong)puVar18 + 0x44) = 0x3f800000;
          puVar14 = puVar18;
        }
        if (lVar2 == 0) {
          puVar18 = &local_e0;
          local_e0 = 0;
          plStack_d8 = (longlong *)0x0;
          bVar5 = true;
        }
        else {
          local_1d8 = 1;
          bVar7 = true;
          bVar6 = true;
          bVar4 = true;
          local_b8 = 0x3f800000;
          uStack_b4 = 0x3f800000;
          uStack_b0 = 0x3f800000;
          uStack_ac = 0x3f800000;
          puVar18 = (undefined8 *)FUN_1427f8ad0(local_a8,lVar2,&local_b8,0);
          plVar17 = (longlong *)puVar18[1];
          local_100 = *puVar18;
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
            UNLOCK();
          }
          local_f8 = plVar17;
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
            UNLOCK();
          }
          puVar18 = &local_100;
        }
        if (puVar14 != puVar18) {
          uVar3 = *puVar18;
          *puVar18 = 0;
          *puVar14 = uVar3;
          SharedPointerInternals::FSharedReferencer<1>::operator=(puVar14 + 1,puVar18 + 1);
        }
        plVar12 = plStack_d8;
        if ((bVar5) && (bVar5 = false, plStack_d8 != (longlong *)0x0)) {
          LOCK();
          plVar13 = plStack_d8 + 1;
          lVar2 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*plStack_d8)(plStack_d8);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plStack_d8 + 8))(plStack_d8,1);
            }
          }
        }
        plVar12 = local_f8;
        if ((bVar6) && (bVar6 = false, local_f8 != (longlong *)0x0)) {
          LOCK();
          plVar13 = local_f8 + 1;
          lVar2 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_f8)(local_f8);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_f8 + 8))(local_f8,1);
            }
          }
        }
        if ((bVar7) && (bVar7 = false, plVar17 != (longlong *)0x0)) {
          LOCK();
          plVar12 = plVar17 + 1;
          lVar2 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17,1);
            }
          }
        }
        plVar12 = local_a0;
        if ((bVar4) && (bVar4 = false, local_a0 != (longlong *)0x0)) {
          LOCK();
          plVar13 = local_a0 + 1;
          lVar2 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        if (local_170 == 0) {
          puVar18 = &local_d0;
          local_d0 = 0;
          uStack_c8 = 0;
          bVar10 = false;
          bVar9 = false;
          bVar8 = false;
        }
        else {
          local_1d8 = 1;
          local_98 = 0x3f800000;
          uStack_94 = 0x3f800000;
          uStack_90 = 0x3f800000;
          uStack_8c = 0x3f800000;
          puVar18 = (undefined8 *)FUN_1427f8ad0(local_88,local_170,&local_98,0);
          plVar16 = (longlong *)puVar18[1];
          local_f0 = *puVar18;
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
            UNLOCK();
          }
          local_e8 = plVar16;
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
            UNLOCK();
          }
          puVar18 = &local_f0;
          bVar10 = true;
          bVar9 = true;
          bVar8 = true;
        }
        if (puVar14 + 2 != puVar18) {
          puVar14[2] = *puVar18;
          *puVar18 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(puVar14 + 3,puVar18 + 1);
        }
        plVar12 = local_e8;
        if ((bVar8) && (local_e8 != (longlong *)0x0)) {
          LOCK();
          plVar13 = local_e8 + 1;
          lVar2 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_e8 + 8))(local_e8,1);
            }
          }
        }
        if ((bVar9) && (plVar16 != (longlong *)0x0)) {
          LOCK();
          plVar12 = plVar16 + 1;
          lVar2 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16,1);
            }
          }
        }
        plVar12 = local_80;
        if ((bVar10) && (local_80 != (longlong *)0x0)) {
          LOCK();
          plVar13 = local_80 + 1;
          lVar2 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        puVar14[4] = local_168;
        puVar14[5] = lStack_160;
        *(undefined4 *)(puVar14 + 6) = (undefined4)local_158;
        *(undefined4 *)((longlong)puVar14 + 0x34) = local_158._4_4_;
        if (9.9999994e-11 < local_148 * local_148 + local_144 * local_144) {
          *(float *)(puVar14 + 8) = local_148;
          *(float *)((longlong)puVar14 + 0x44) = local_144;
        }
        plVar12 = puVar14 + 10;
        *(undefined4 *)(puVar14 + 7) = (undefined4)uStack_150;
        *(undefined4 *)((longlong)puVar14 + 0x3c) = uStack_150._4_4_;
        puVar14[9] = local_140;
        local_1a0 = local_138;
        if (local_130 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_130 + 1) = (int)local_130[1] + 1;
          UNLOCK();
        }
        plVar13 = local_130;
        if (&local_1a0 != plVar12) {
          local_1a0._0_4_ = (undefined4)local_138;
          local_1a0._4_4_ = (undefined4)((ulonglong)local_138 >> 0x20);
          uStack_198._0_4_ = SUB84(local_130,0);
          uStack_198._4_4_ = (undefined4)((ulonglong)local_130 >> 0x20);
          lVar2 = *plVar12;
          plVar13 = (longlong *)puVar14[0xb];
          local_78 = (undefined4)local_1a0;
          uStack_74 = local_1a0._4_4_;
          uStack_70 = (undefined4)uStack_198;
          uStack_6c = uStack_198._4_4_;
          *(undefined4 *)plVar12 = (undefined4)local_1a0;
          *(undefined4 *)((longlong)puVar14 + 0x54) = local_1a0._4_4_;
          *(undefined4 *)(puVar14 + 0xb) = (undefined4)uStack_198;
          *(undefined4 *)((longlong)puVar14 + 0x5c) = uStack_198._4_4_;
          local_1a0 = lVar2;
        }
        uStack_198 = plVar13;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar13 + 1;
          lVar2 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*uStack_198 + 8))(uStack_198,1);
            }
          }
        }
        puVar14[0xc] = local_128;
        plVar12 = puVar14 + 0xd;
        local_190 = local_120;
        if (local_118 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_118 + 1) = (int)local_118[1] + 1;
          UNLOCK();
        }
        plVar13 = local_118;
        if (&local_190 != plVar12) {
          local_190 = *plVar12;
          plVar13 = (longlong *)puVar14[0xe];
          local_68 = local_120;
          plStack_60 = local_118;
          *plVar12 = local_120;
          puVar14[0xe] = local_118;
        }
        plStack_188 = plVar13;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar13 + 1;
          lVar2 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plStack_188 + 8))(plStack_188,1);
            }
          }
        }
        plVar12 = local_118;
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_118 + 1;
          lVar2 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_118 + 8))(local_118,1);
            }
          }
        }
        plVar12 = local_130;
        if (local_130 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_130 + 1;
          lVar2 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_130 + 8))(local_130,1);
            }
          }
        }
        local_1b8 = local_1b8 + 1;
        local_108 = local_108 + 1;
        param_1 = local_c0;
        param_2 = local_180;
      } while (local_1b8 < *(int *)(local_c0 + 0x30));
    }
    FUN_14243f430(*param_2 + 0x208,&local_1b0);
    FUN_14243ef60(&local_1b0);
  }
  plVar17 = (longlong *)param_2[1];
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar17 + 1;
    lVar2 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17,1);
      }
    }
  }
  return;
}



// FUNCTION 142441ed0 FUN_142441ed0 body=179 status=ok
// SIG undefined FUN_142441ed0(void)

void FUN_142441ed0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  longlong lVar2;
  
  if ((((param_2 != 0) && (DAT_146b17150 != (longlong *)0x0)) &&
      (cVar1 = (**(code **)(*DAT_146b17150 + 0x388))(), cVar1 != '\0')) &&
     (((lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar2 != 0 &&
       ((*(uint *)(lVar2 + 0x830) & 0x4000) != 0)) &&
      (lVar2 = UWorld::GetAudioDevice(lVar2), lVar2 != 0)))) {
    FAudioDevice::ActivateReverbEffect(lVar2,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



// FUNCTION 142441f90 FUN_142441f90 body=818 status=ok
// SIG undefined FUN_142441f90(void)

void FUN_142441f90(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  void *_Dst;
  uint uVar13;
  undefined2 *puVar14;
  void *_Src;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  bool bVar19;
  int iVar20;
  
  lVar9 = (**(code **)(*param_1 + 0x148))();
  if (((((*(byte *)((longlong)param_2 + 0x484) & 0x20) == 0) &&
       (cVar4 = FUN_14293c170(param_1,param_3), cVar4 == '\0')) &&
      ((*(uint *)(lVar9 + 0x830) & 0x400) == 0)) &&
     (plVar10 = (longlong *)(**(code **)(*param_2 + 0x770))(param_2), plVar10 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)param_1[0x97] + 0x738))((longlong *)param_1[0x97],plVar10);
    FUN_14223ef90(plVar10,0);
    (**(code **)(*plVar10 + 0x3a0))(plVar10,(int)param_1[0xa7]);
    cVar4 = FOutputDevice::CanBeUsedOnAnyThread(DAT_146b17150,0);
    if (((longlong *)plVar10[0x97] == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*(longlong *)plVar10[0x97] + 0x20))(), cVar5 == '\0')) {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
    lVar9 = plVar10[0x95];
    if ((cVar4 != '\0') || (bVar19)) {
      bVar19 = true;
    }
    else {
      bVar19 = false;
    }
    uVar18 = 0;
    if (0 < (int)param_1[0xa6]) {
      plVar1 = param_1 + 0xa5;
      uVar11 = uVar18;
      uVar16 = uVar18;
      iVar17 = 0;
      do {
        iVar20 = iVar17 + 1;
        lVar2 = *plVar1;
        lVar3 = *(longlong *)(lVar2 + uVar16);
        iVar15 = (int)uVar11;
        if (lVar3 == 0) {
LAB_1424421a7:
          iVar7 = (int)param_1[0xa6];
          iVar8 = (iVar7 - iVar15) + -1;
          if (iVar8 != 0) {
            _Src = (void *)(lVar2 + (longlong)iVar20 * 8);
            _Dst = (void *)(lVar2 + (longlong)iVar15 * 8);
LAB_1424421c5:
            _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar8 << 3);
            iVar7 = (int)param_1[0xa6];
          }
LAB_1424421d2:
          *(int *)(param_1 + 0xa6) = iVar7 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
          iVar15 = iVar15 + -1;
          uVar16 = uVar16 - 8;
          iVar20 = iVar17;
        }
        else {
          uVar6 = *(uint *)(lVar3 + 0xc);
          uVar11 = uVar18;
          if ((int)uVar6 < (int)DAT_1469e91c4) {
            uVar13 = uVar6 & 0xffff;
            if ((int)uVar6 < 0) {
              uVar6 = uVar6 + 0xffff;
              uVar13 = uVar13 - 0x10000;
            }
            uVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                     (longlong)(int)uVar13 * 0x18;
          }
          if ((*(uint *)(uVar11 + 8) >> 0x1d & 1) != 0) goto LAB_1424421a7;
          if (bVar19) {
            cVar4 = FUniqueNetIdWrapper::operator==(lVar3 + 0x4b0,plVar10 + 0x96);
            if (cVar4 == '\0') goto LAB_1424421f4;
LAB_142442177:
            FUN_142227350(lVar3,0,1);
            iVar7 = (int)param_1[0xa6];
            iVar8 = (iVar7 - iVar15) + -1;
            if (iVar8 != 0) {
              _Src = (void *)(*plVar1 + (longlong)iVar20 * 8);
              _Dst = (void *)(*plVar1 + (longlong)iVar15 * 8);
              goto LAB_1424421c5;
            }
            goto LAB_1424421d2;
          }
          if (1 < (int)lVar9) {
            if ((int)plVar10[0x95] == 0) {
              puVar14 = &DAT_143f3eda8;
            }
            else {
              puVar14 = (undefined2 *)plVar10[0x94];
            }
            if (*(int *)(lVar3 + 0x4a8) == 0) {
              puVar12 = &DAT_143f3eda8;
            }
            else {
              puVar12 = *(undefined2 **)(lVar3 + 0x4a0);
            }
            iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar14);
            if (iVar7 == 0) goto LAB_142442177;
          }
        }
LAB_1424421f4:
        uVar11 = (ulonglong)(iVar15 + 1U);
        uVar16 = uVar16 + 8;
        iVar17 = iVar20;
      } while ((int)(iVar15 + 1U) < (int)param_1[0xa6]);
    }
    plVar1 = param_1 + 0xa5;
    iVar17 = (int)param_1[0xa6];
    *(int *)(param_1 + 0xa6) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0x534) < iVar17 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar17);
    }
    *(longlong **)(*plVar1 + (longlong)iVar17 * 8) = plVar10;
    if (*(int *)((longlong)param_1 + 0x53c) < (int)param_1[0xa6]) {
      iVar17 = (int)param_1[0xa6] - *(int *)((longlong)param_1 + 0x53c);
      if (0 < iVar17) {
        do {
          lVar9 = *(longlong *)(*plVar1 + uVar18 * 8);
          if (lVar9 != 0) {
            FUN_142227350(lVar9,0,1);
          }
          uVar18 = uVar18 + 1;
        } while ((longlong)uVar18 < (longlong)iVar17);
      }
      if (iVar17 != 0) {
        iVar20 = (int)param_1[0xa6];
        if (iVar20 - iVar17 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)*plVar1,(void *)(*plVar1 + (longlong)iVar17 * 8),
                     (longlong)(iVar20 - iVar17) << 3);
          iVar20 = (int)param_1[0xa6];
        }
        *(int *)(param_1 + 0xa6) = iVar20 - iVar17;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
      }
    }
  }
  return;
}



// FUNCTION 1424422f0 AddReferencedObjects body=71 status=ok
// SIG undefined AddReferencedObjects(void)

void FRootMotionSource_JumpForce::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0xb0,0,0);
                    /* WARNING: Could not recover jumptable at 0x000142442333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0xb8,0,0);
  return;
}



// FUNCTION 142442340 AddReferencedObjects body=71 status=ok
// SIG undefined AddReferencedObjects(void)

void FRootMotionSource_MoveToDynamicForce::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0xc0,0,0);
                    /* WARNING: Could not recover jumptable at 0x000142442383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 200,0,0);
  return;
}



// FUNCTION 1424423b0 AddReferencedObjects body=93 status=ok
// SIG undefined AddReferencedObjects(void)

void FRootMotionSource_RadialForce::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0xa8,0,0);
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0xc0,0,0);
                    /* WARNING: Could not recover jumptable at 0x000142442409. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 200,0,0);
  return;
}



// FUNCTION 142442410 AddStructReferencedObjects body=192 status=ok
// SIG undefined AddStructReferencedObjects(void)

void FRootMotionSourceGroup::AddStructReferencedObjects(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x88);
  if (*(undefined8 **)(param_1 + 0x88) == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(param_1 + 8);
  }
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x90) * 2;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    (**(code **)(*(longlong *)*puVar1 + 0x68))((longlong *)*puVar1,param_2);
  }
  puVar1 = *(undefined8 **)(param_1 + 0xd8);
  if (*(undefined8 **)(param_1 + 0xd8) == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(param_1 + 0x98);
  }
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0xe0) * 2;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    (**(code **)(*(longlong *)*puVar1 + 0x68))((longlong *)*puVar1,param_2);
  }
  return;
}



// FUNCTION 1424424d0 AddUserToReplay body=54 status=ok
// SIG undefined AddUserToReplay(void)

void UGameInstance::AddUserToReplay(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x108) != 0)) {
    FUN_1424082d0(*(longlong *)(lVar1 + 0x108),param_2);
    return;
  }
  return;
}



// FUNCTION 142442510 EqualTo body=19 status=ok
// SIG undefined EqualTo(void)

bool FText::EqualTo(void)

{
  int iVar1;
  
  iVar1 = FUN_142235230();
  return iVar1 == 0;
}



// FUNCTION 142442530 FUN_142442530 body=36 status=ok
// SIG undefined FUN_142442530(void)

undefined4 FUN_142442530(longlong param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x4e0) & 4) == 0) {
    iVar1 = FUN_142235230();
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142442560 FUN_142442560 body=1822 status=ok
// SIG undefined FUN_142442560(void)

void FUN_142442560(longlong *param_1,float param_2)

{
  float fVar1;
  char cVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_b8;
  float fStack_b4;
  undefined8 local_a8;
  float local_a0;
  
  pfVar3 = (float *)FUN_14236d610(param_1,&local_a8);
  fVar13 = pfVar3[1];
  fVar12 = *pfVar3;
  fVar9 = pfVar3[2];
  fVar6 = fVar12 * fVar12 + fVar13 * fVar13 + fVar9 * fVar9;
  if (fVar6 <= 1.0) {
    fVar9 = pfVar3[2];
    fVar13 = (float)((ulonglong)*(undefined8 *)pfVar3 >> 0x20);
    local_b8 = (float)*(undefined8 *)pfVar3;
    fVar12 = local_b8;
  }
  else {
    auVar10 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar8 = auVar10._0_4_;
    fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
    fVar8 = fVar8 + fVar8 * (0.5 - fVar6 * 0.5 * fVar8 * fVar8);
    fVar13 = fVar8 * fVar13;
    fVar9 = fVar8 * fVar9;
    fVar12 = fVar8 * fVar12;
  }
  fVar8 = 0.0;
  fVar6 = fVar13 * fVar13 + fVar12 * fVar12 + fVar9 * fVar9;
  if (0.0 < fVar6) {
    fVar8 = SQRT(fVar6);
  }
  fVar6 = (float)(**(code **)(*param_1 + 0x400))(param_1);
  fVar6 = fVar6 * fVar8;
  cVar2 = (**(code **)(*param_1 + 0x428))(param_1,fVar6);
  if ((fVar8 <= 0.0) || (cVar2 != '\0')) {
    fVar8 = *(float *)(param_1 + 0x32);
    fVar14 = *(float *)((longlong)param_1 + 0x18c) * *(float *)((longlong)param_1 + 0x18c) +
             fVar8 * fVar8 +
             *(float *)((longlong)param_1 + 0x194) * *(float *)((longlong)param_1 + 0x194);
    if (0.0 < fVar14) {
      fVar1 = *(float *)((longlong)param_1 + 0x194);
      uVar5 = *(undefined8 *)((longlong)param_1 + 0x18c);
      fVar7 = SQRT(fVar14) - ABS(*(float *)(param_1 + 0x44)) * param_2;
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      if (fVar14 == 1.0) {
        local_a8 = *(undefined8 *)((longlong)param_1 + 0x18c);
        local_a0 = fVar1;
        fVar11 = (float)local_a8;
        fVar4 = (float)((ulonglong)local_a8 >> 0x20);
      }
      else {
        local_a0 = DAT_1468b5d98;
        fVar11 = DAT_1468b5d90;
        fVar4 = DAT_1468b5d94;
        if (1e-08 <= fVar14) {
          auVar10 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
          fVar4 = auVar10._0_4_;
          fVar4 = fVar4 + fVar4 * (0.5 - fVar14 * 0.5 * fVar4 * fVar4);
          fVar4 = fVar4 * (0.5 - fVar14 * 0.5 * fVar4 * fVar4) + fVar4;
          fVar11 = fVar4 * *(float *)((longlong)param_1 + 0x18c);
          local_a0 = fVar4 * *(float *)((longlong)param_1 + 0x194);
          fVar4 = fVar4 * fVar8;
        }
      }
      local_a0 = local_a0 * fVar7;
      *(ulonglong *)((longlong)param_1 + 0x18c) = CONCAT44(fVar4 * fVar7,fVar11 * fVar7);
      *(float *)((longlong)param_1 + 0x194) = local_a0;
      if ((cVar2 != '\0') &&
         (*(float *)((longlong)param_1 + 0x18c) * *(float *)((longlong)param_1 + 0x18c) +
          *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32) +
          *(float *)((longlong)param_1 + 0x194) * *(float *)((longlong)param_1 + 0x194) <
          fVar6 * fVar6)) {
        fStack_b4 = (float)((ulonglong)uVar5 >> 0x20);
        local_b8 = (float)uVar5;
        fVar7 = fStack_b4 * fStack_b4 + local_b8 * local_b8 + fVar1 * fVar1;
        local_a0 = fVar1;
        fVar8 = local_b8;
        fVar14 = fStack_b4;
        if ((fVar7 != 1.0) &&
           (local_a0 = DAT_1468b5d98, fVar8 = DAT_1468b5d90, fVar14 = DAT_1468b5d94, 1e-08 <= fVar7)
           ) {
          auVar10 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
          fVar11 = auVar10._0_4_;
          fVar11 = fVar11 + fVar11 * (0.5 - fVar7 * 0.5 * fVar11 * fVar11);
          fVar11 = fVar11 + fVar11 * (0.5 - fVar7 * 0.5 * fVar11 * fVar11);
          fVar8 = local_b8 * fVar11;
          fVar14 = fStack_b4 * fVar11;
          local_a0 = fVar1 * fVar11;
        }
        local_a0 = local_a0 * fVar6;
        *(ulonglong *)((longlong)param_1 + 0x18c) = CONCAT44(fVar14 * fVar6,fVar8 * fVar6);
        *(float *)((longlong)param_1 + 0x194) = local_a0;
      }
    }
  }
  else {
    fVar8 = *(float *)(param_1 + 0x32);
    fVar14 = *(float *)((longlong)param_1 + 0x18c);
    fVar1 = *(float *)((longlong)param_1 + 0x194);
    fVar7 = fVar14 * fVar14 + fVar8 * fVar8 + fVar1 * fVar1;
    if (0.0 < fVar7) {
      fVar4 = param_2 * *(float *)((longlong)param_1 + 0x224);
      fVar11 = 0.0;
      if ((0.0 <= fVar4) && (fVar11 = fVar4, 1.0 <= fVar4)) {
        fVar11 = 1.0;
      }
      fVar7 = SQRT(fVar7);
      local_a0 = (fVar9 * fVar7 - fVar1) * fVar11 + fVar1;
      *(ulonglong *)((longlong)param_1 + 0x18c) =
           CONCAT44((fVar13 * fVar7 - fVar8) * fVar11 + fVar8,
                    (fVar12 * fVar7 - fVar14) * fVar11 + fVar14);
      *(float *)((longlong)param_1 + 0x194) = local_a0;
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x428))(param_1,fVar6);
  if (cVar2 != '\0') {
    fVar6 = SQRT(*(float *)((longlong)param_1 + 0x18c) * *(float *)((longlong)param_1 + 0x18c) +
                 *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32) +
                 *(float *)((longlong)param_1 + 0x194) * *(float *)((longlong)param_1 + 0x194));
  }
  fVar8 = ABS(*(float *)((longlong)param_1 + 0x21c));
  fVar12 = fVar12 * fVar8 * param_2 + *(float *)((longlong)param_1 + 0x18c);
  fVar14 = fVar13 * fVar8 * param_2 + *(float *)(param_1 + 0x32);
  fVar13 = fVar9 * fVar8 * param_2 + *(float *)((longlong)param_1 + 0x194);
  *(float *)((longlong)param_1 + 0x18c) = fVar12;
  *(float *)(param_1 + 0x32) = fVar14;
  *(float *)((longlong)param_1 + 0x194) = fVar13;
  if (0.0001 <= fVar6) {
    fVar9 = fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13;
    if (fVar9 <= fVar6 * fVar6) {
      uVar5 = *(undefined8 *)((longlong)param_1 + 0x18c);
      fVar13 = *(float *)((longlong)param_1 + 0x194);
    }
    else {
      auVar10 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar8 = auVar10._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar9 * 0.5 * fVar8 * fVar8);
      fVar6 = (fVar8 + fVar8 * (0.5 - fVar9 * 0.5 * fVar8 * fVar8)) * fVar6;
      fVar13 = fVar13 * fVar6;
      uVar5 = CONCAT44(fVar14 * fVar6,fVar12 * fVar6);
    }
  }
  else {
    uVar5 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    fVar13 = DAT_1468b5d98;
  }
  *(undefined8 *)((longlong)param_1 + 0x18c) = uVar5;
  *(float *)((longlong)param_1 + 0x194) = fVar13;
  (**(code **)(*param_1 + 0x580))(param_1,&local_a8);
  return;
}



// FUNCTION 142442c80 FUN_142442c80 body=159 status=ok
// SIG undefined FUN_142442c80(void)

void FUN_142442c80(longlong *param_1,float param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined **local_28;
  longlong local_20;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0.0)) {
    if (param_5 != 0) {
      lVar1 = UDamageType::GetPrivateStaticClass();
      lVar2 = param_5;
      do {
        if (lVar2 == lVar1) goto LAB_142442cd8;
        lVar2 = *(longlong *)(lVar2 + 0x30);
      } while (lVar2 != 0);
    }
    param_5 = UDamageType::GetPrivateStaticClass();
LAB_142442cd8:
    local_28 = &PTR_FUN_14503cd78;
    local_20 = param_5;
    (**(code **)(*param_1 + 0x5a0))(param_1,param_2,&local_28,param_3,param_4);
  }
  return;
}



// FUNCTION 142442d20 FUN_142442d20 body=230 status=ok
// SIG undefined FUN_142442d20(void)

void FUN_142442d20(longlong *param_1,float param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined **local_c8;
  longlong local_c0;
  float local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined1 local_a8 [160];
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0.0)) {
    if (param_7 != 0) {
      lVar1 = UDamageType::GetPrivateStaticClass();
      lVar2 = param_7;
      do {
        if (lVar2 == lVar1) goto LAB_142442d86;
        lVar2 = *(longlong *)(lVar2 + 0x30);
      } while (lVar2 != 0);
    }
    param_7 = UDamageType::GetPrivateStaticClass();
LAB_142442d86:
    local_b4 = *param_3;
    local_c8 = &PTR_FUN_14503cd98;
    local_ac = *(undefined4 *)(param_3 + 1);
    local_c0 = param_7;
    local_b8 = param_2;
    FUN_140729f20(local_a8,param_4);
    (**(code **)(*param_1 + 0x5a0))(param_1,param_2,&local_c8,param_5,param_6);
  }
  return;
}



// FUNCTION 142442e10 ApplyRadialDamage body=124 status=ok
// SIG undefined ApplyRadialDamage(void)

void UGameplayStatics::ApplyRadialDamage(void)

{
  FUN_142442e90();
  return;
}



// FUNCTION 142442e90 FUN_142442e90 body=1926 status=ok
// SIG undefined FUN_142442e90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_142442e90(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,longlong param_8,
             undefined8 param_9,uint *param_10,undefined8 param_11,int param_12)

{
  longlong *plVar1;
  void *_Src;
  bool bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  void **ppvVar11;
  byte *pbVar12;
  int iVar13;
  undefined1 auStack_318 [32];
  uint *local_2f8;
  byte *local_2f0;
  undefined1 *local_2e8;
  undefined1 local_2d8 [16];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  uint uStack_2b0;
  int iStack_2ac;
  undefined1 local_2a8 [16];
  undefined4 **local_298;
  undefined2 local_290;
  uint local_288;
  undefined1 local_284;
  int local_280 [2];
  longlong local_278;
  undefined8 local_270;
  uint *local_268 [2];
  undefined **local_258;
  longlong local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined8 local_234;
  undefined4 local_22c;
  void *local_228;
  undefined8 local_220;
  undefined8 local_218;
  byte local_208 [4];
  undefined4 local_204;
  uint local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 local_180;
  uint **local_178;
  undefined8 uStack_170;
  uint *puStack_168;
  undefined1 auStack_160 [16];
  undefined8 local_150;
  uint *local_148;
  int local_140;
  undefined4 local_13c;
  uint local_138 [4];
  uint *local_128;
  undefined8 local_120;
  undefined4 local_118;
  int local_114;
  longlong local_108;
  undefined4 local_100;
  undefined1 local_f8 [72];
  longlong local_b0;
  longlong local_90;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  local_218 = param_11;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af4a38) && (_Init_thread_header(&DAT_146af4a38), DAT_146af4a38 == -1))
  {
    FName::FName(&DAT_146af4a30,"ApplyRadialDamage",1);
    _Init_thread_footer(&DAT_146af4a38);
  }
  local_2f8 = param_10;
  FUN_1422ffb20(local_f8,DAT_146af4a30,local_2d8,0);
  FCollisionQueryParams::AddIgnoredActors(local_f8,param_9);
  iVar13 = 0;
  local_278 = 0;
  local_270 = 0;
  lVar7 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar7 != 0) {
    local_2c8 = (uint **)CONCAT44(param_6,2);
    puVar8 = (uint *)FUN_140a05dc0();
    local_288 = ~puVar8[1] & *puVar8;
    local_2e8 = local_f8;
    local_2f0 = (byte *)&local_2c8;
    local_2f8 = &local_288;
    local_284 = 0;
    UWorld::OverlapMultiByObjectType(lVar7,&local_278,param_4,&DAT_1464aa810);
  }
  local_140 = 0;
  local_114 = 0;
  local_148 = (uint *)0x0;
  local_13c = 0;
  local_128 = (uint *)0x0;
  local_120 = 0;
  local_118 = 0xffffffff;
  local_108 = 0;
  local_100 = 0;
  if (0 < (int)local_270) {
    do {
      lVar7 = local_278 + (longlong)iVar13 * 0x18;
      local_268[0] = (uint *)FUN_1423111a0(lVar7);
      if ((((local_268[0] != (uint *)0x0) &&
           ((*(byte *)((longlong)local_268[0] + 0x91) & 0x40) != 0)) && (local_268[0] != param_10))
         && (cVar5 = FWeakObjectPtr::IsValid(lVar7 + 8), cVar5 != '\0')) {
        _guard_xfg_dispatch_icall_nop(local_208,0,0x90);
        local_1fc = 0x3f800000;
        if (param_12 != 0x21) {
          uVar9 = FWeakObjectPtr::Get(lVar7 + 8);
          local_2f0 = local_208;
          local_2f8 = (uint *)CONCAT44(local_2f8._4_4_,param_12);
          cVar5 = FUN_1424459b0(uVar9,param_4,param_10,param_9);
          if (cVar5 == '\0') goto LAB_142443233;
        }
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(&local_148,local_280,local_268[0]);
        if ((local_280[0] == -1) ||
           (puVar8 = local_148 + (longlong)local_280[0] * 8, puVar8 == (uint *)0x0)) {
          local_2c8 = local_268;
          FUN_1407b9130(&local_148,&local_288,&local_2c8,0);
          puVar8 = local_148 + (longlong)(int)local_288 * 8;
        }
        uVar6 = puVar8[4];
        puVar8[4] = uVar6 + 1;
        if ((int)puVar8[5] < (int)(uVar6 + 1)) {
          TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                    (puVar8 + 2,uVar6);
        }
        pbVar12 = (byte *)((longlong)(int)uVar6 * 0x90 + *(longlong *)(puVar8 + 2));
        *pbVar12 = *pbVar12 ^ (*pbVar12 ^ local_208[0]) & 1;
        *pbVar12 = *pbVar12 ^ (*pbVar12 ^ local_208[0]) & 2;
        *(undefined4 *)(pbVar12 + 4) = local_204;
        *(uint *)(pbVar12 + 8) = *(uint *)(pbVar12 + 8) ^ (local_200 ^ *(uint *)(pbVar12 + 8)) & 1;
        *(undefined4 *)(pbVar12 + 0xc) = local_1fc;
        *(undefined4 *)(pbVar12 + 0x10) = local_1f8;
        *(undefined8 *)(pbVar12 + 0x14) = local_1f4;
        *(undefined4 *)(pbVar12 + 0x1c) = local_1ec;
        *(undefined8 *)(pbVar12 + 0x20) = local_1e8;
        *(undefined4 *)(pbVar12 + 0x28) = local_1e0;
        *(undefined8 *)(pbVar12 + 0x2c) = local_1dc;
        *(undefined4 *)(pbVar12 + 0x34) = local_1d4;
        *(undefined8 *)(pbVar12 + 0x38) = local_1d0;
        *(undefined4 *)(pbVar12 + 0x40) = local_1c8;
        *(undefined8 *)(pbVar12 + 0x44) = local_1c4;
        *(undefined4 *)(pbVar12 + 0x4c) = local_1bc;
        *(undefined8 *)(pbVar12 + 0x50) = local_1b8;
        *(undefined4 *)(pbVar12 + 0x58) = local_1b0;
        *(undefined4 *)(pbVar12 + 0x5c) = local_1ac;
        *(undefined4 *)(pbVar12 + 0x60) = local_1a8;
        *(undefined4 *)(pbVar12 + 100) = local_1a4;
        *(undefined4 *)(pbVar12 + 0x68) = local_1a0;
        *(undefined4 *)(pbVar12 + 0x6c) = local_19c;
        *(undefined4 *)(pbVar12 + 0x70) = local_198;
        *(undefined4 *)(pbVar12 + 0x74) = local_194;
        *(undefined4 *)(pbVar12 + 0x78) = local_190;
        *(undefined8 *)(pbVar12 + 0x80) = local_188;
        *(undefined8 *)(pbVar12 + 0x88) = local_180;
      }
LAB_142443233:
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)local_270);
  }
  uVar9 = 0;
  local_2b8 = (uint *)CONCAT44(local_2b8._4_4_,(undefined4)local_2b8);
  if (0 < local_140 - local_114) {
    if (param_8 != 0) {
      lVar10 = UDamageType::GetPrivateStaticClass();
      lVar7 = param_8;
      do {
        if (lVar7 == lVar10) goto LAB_142443286;
        lVar7 = *(longlong *)(lVar7 + 0x30);
      } while (lVar7 != 0);
    }
    param_8 = UDamageType::GetPrivateStaticClass();
LAB_142443286:
    uVar4 = local_218;
    local_234 = *param_4;
    local_258 = &PTR__scalar_deleting_destructor__1450a8258;
    local_22c = *(undefined4 *)(param_4 + 1);
    local_238 = param_7;
    puStack_168 = local_138;
    local_228 = (void *)0x0;
    local_220 = 0;
    uStack_240 = param_5;
    uStack_23c = param_6;
    local_2b8._4_4_ = 0;
    uStack_2b0 = 0;
    local_2c8 = (uint **)0x100000000;
    if ((int)local_120 != 0) {
      puVar8 = local_138;
      if (local_128 != (uint *)0x0) {
        puVar8 = local_128;
      }
      uVar6 = *puVar8;
      iVar13 = 0;
      while (uVar6 == 0) {
        uStack_2b0 = uStack_2b0 + 0x20;
        uVar3 = (ulonglong)local_2c8 >> 0x20;
        local_2c8 = (uint **)CONCAT44((int)uVar3,iVar13 + 1);
        if ((int)((int)local_120 + -1 + ((int)local_120 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar13) {
          local_2b8._4_4_ = (int)local_120;
          goto LAB_1424433cd;
        }
        uVar6 = puVar8[(longlong)iVar13 + 1];
        iVar13 = iVar13 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar13 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      local_2c8 = (uint **)CONCAT44(uVar6,SUB84(local_2c8,0));
      if (uVar6 == 0) {
        iVar13 = 0x20;
      }
      else {
        iVar13 = 0x1f - iVar13;
      }
      local_2b8._4_4_ = (uStack_2b0 - iVar13) + 0x1f;
      if ((int)local_120 < local_2b8._4_4_) {
        local_2b8._4_4_ = (int)local_120;
      }
    }
LAB_1424433cd:
    auStack_160._4_4_ = local_2b8._4_4_;
    auStack_160._0_4_ = 0xffffffff;
    auStack_160._8_4_ = uStack_2b0;
    auStack_160._12_4_ = iStack_2ac;
    local_178 = &local_148;
    local_290 = 0;
    uStack_170 = local_2c8;
    local_298 = &local_148;
    local_150._0_4_ = SUB84(&local_148,0);
    local_150._4_4_ = (undefined4)((ulonglong)&local_148 >> 0x20);
    uStack_2c0 = local_2c8;
    uStack_2b0 = 0xffffffff;
    iStack_2ac = local_2b8._4_4_;
    local_2a8._8_4_ = (undefined4)local_150;
    local_2a8._0_8_ = auStack_160._8_8_;
    local_2a8._12_4_ = local_150._4_4_;
    bVar2 = local_2b8._4_4_ < (int)local_120;
    local_2c8 = local_178;
    local_250 = param_8;
    local_248 = (int)param_2;
    uStack_244 = param_3;
    local_150 = &local_148;
    local_2b8 = puStack_168;
    if (bVar2) {
      uVar9 = 1;
      iVar13 = 0;
      while( true ) {
        plVar1 = *(longlong **)(*local_2c8 + (longlong)iStack_2ac * 8);
        ppvVar11 = (void **)(*local_2c8 + (longlong)iStack_2ac * 8 + 2);
        if (&local_228 != ppvVar11) {
          uVar6 = *(uint *)(ppvVar11 + 1);
          _Src = *ppvVar11;
          local_220 = CONCAT44(local_220._4_4_,uVar6);
          if ((uVar6 == 0) && (iVar13 == 0)) {
            local_220 = 0;
          }
          else {
            TArray<FLiveLinkFrame,FDefaultAllocator>::ResizeForCopy(&local_228,uVar6,iVar13);
            _guard_xfg_dispatch_icall_nop(local_228,_Src,(longlong)(int)uVar6 * 0x90);
          }
        }
        local_2f8 = param_10;
        (**(code **)(*plVar1 + 0x5a0))(plVar1,param_2,&local_258,uVar4);
        uStack_2b0 = uStack_2b0 & ~uStack_2c0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_2c0);
        if ((int)local_2b8[6] <= iStack_2ac) break;
        iVar13 = local_220._4_4_;
      }
      if (((char)local_290 != '\0') && (local_290._1_1_ != '\0')) {
        TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_298,*(int *)(local_298 + 1) - *(int *)((longlong)local_298 + 0x34)
                            ,1);
      }
      if (local_228 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  local_100 = 0;
  if (local_108 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_148);
  if (local_278 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  return uVar9;
}



// FUNCTION 142443620 ApplyTimeStampReset body=181 status=ok
// SIG undefined ApplyTimeStampReset(void)

void FRootMotionSourceGroup::ApplyTimeStampReset(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x88);
  if (*(longlong **)(param_1 + 0x88) == (longlong *)0x0) {
    plVar3 = (longlong *)(param_1 + 8);
  }
  plVar2 = plVar3 + (longlong)*(int *)(param_1 + 0x90) * 2;
  for (; plVar3 != plVar2; plVar3 = plVar3 + 2) {
    lVar1 = *plVar3;
    if ((lVar1 != 0) && (*(float *)(lVar1 + 0x20) != -3.4e+38)) {
      *(float *)(lVar1 + 0x20) = *(float *)(lVar1 + 0x20) - param_2;
    }
  }
  plVar3 = *(longlong **)(param_1 + 0xd8);
  if (*(longlong **)(param_1 + 0xd8) == (longlong *)0x0) {
    plVar3 = (longlong *)(param_1 + 0x98);
  }
  plVar2 = plVar3 + (longlong)*(int *)(param_1 + 0xe0) * 2;
  for (; plVar3 != plVar2; plVar3 = plVar3 + 2) {
    lVar1 = *plVar3;
    if ((lVar1 != 0) && (*(float *)(lVar1 + 0x20) != -3.4e+38)) {
      *(float *)(lVar1 + 0x20) = *(float *)(lVar1 + 0x20) - param_2;
    }
  }
  return;
}



// FUNCTION 1424436e0 FUN_1424436e0 body=156 status=ok
// SIG undefined FUN_1424436e0(void)

void FUN_1424436e0(longlong param_1,float *param_2)

{
  FUN_142381c70();
  *(float *)(param_1 + 0x318) = *(float *)(param_1 + 0x318) + *param_2;
  *(float *)(param_1 + 0x31c) = param_2[1] + *(float *)(param_1 + 0x31c);
  *(float *)(param_1 + 800) = param_2[2] + *(float *)(param_1 + 800);
  *(float *)(param_1 + 0x324) = *(float *)(param_1 + 0x324) + *param_2;
  *(float *)(param_1 + 0x328) = param_2[1] + *(float *)(param_1 + 0x328);
  *(float *)(param_1 + 0x32c) = param_2[2] + *(float *)(param_1 + 0x32c);
  return;
}



// FUNCTION 142443780 FUN_142443780 body=136 status=ok
// SIG undefined FUN_142443780(void)

ulonglong FUN_142443780(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  
  if (DAT_146b17150 != (longlong *)0x0) {
    in_RAX = (**(code **)(*DAT_146b17150 + 0x388))();
    if ((char)in_RAX != '\0') {
      lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
      in_RAX = 0;
      if (lVar1 != 0) {
        lVar1 = UWorld::GetAudioDevice(lVar1);
        in_RAX = 0;
        if (lVar1 != 0) {
          uVar2 = FUN_1422d1a70(lVar1,param_2,param_3);
          return uVar2;
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142443810 FUN_142443810 body=24 status=ok
// SIG undefined FUN_142443810(void)

uint FUN_142443810(void)

{
  if (DAT_146b17150 != 0) {
    return CONCAT31((uint3)(*(uint *)(DAT_146b17150 + 0x7d8) >> 9),
                    (char)(*(uint *)(DAT_146b17150 + 0x7d8) >> 1)) & 0xffffff01;
  }
  return 0;
}



// FUNCTION 142443830 FUN_142443830 body=386 status=ok
// SIG undefined FUN_142443830(void)

longlong FUN_142443830(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                      undefined8 param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_38 [16];
  undefined8 local_28;
  longlong local_20;
  undefined1 local_10;
  ushort local_e;
  
  if (param_2 != 0) {
    lVar2 = FUN_1428dfc70();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar2) {
        if (param_1 != 0) {
          lVar3 = FUN_1429d7ab0();
          if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          lVar3 = param_1;
          if (bVar1) goto LAB_142443913;
        }
        lVar3 = 0;
        if (param_1 != 0) {
          lVar2 = FUN_1428dfc70();
          if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            lVar3 = *(longlong *)(param_1 + 0x150);
          }
        }
LAB_142443913:
        lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
        if (lVar2 == 0) {
          return 0;
        }
        FActorSpawnParameters::FActorSpawnParameters(local_38);
        local_e = local_e | 4;
        local_28 = param_5;
        local_20 = lVar3;
        local_10 = param_4;
        lVar3 = FUN_142550d00(lVar2,param_2,param_3,local_38);
        if (lVar3 != 0) {
          lVar2 = FUN_1428dfc70();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            return lVar3;
          }
        }
        return 0;
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 1424439c0 FUN_1424439c0 body=177 status=ok
// SIG undefined FUN_1424439c0(void)

void FUN_1424439c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_18;
  longlong *local_10;
  
  if (((*(char *)(param_1 + 0x30) == '\x01') && (DAT_1469f4590 != 0)) &&
     (*(longlong *)(DAT_1469f4590 + 0x18) != 0)) {
    FUN_1418375f0(*(undefined8 *)(*(longlong *)(DAT_1469f4590 + 0x18) + 8),&local_18);
    FSlateFontCache::FlushCompositeFont(local_18,param_1 + 0x148);
    FSlateFontCache::FlushObject(local_18,param_1);
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)local_10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 142443a80 FUN_142443a80 body=269 status=ok
// SIG undefined FUN_142443a80(void)

undefined8 FUN_142443a80(undefined8 param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    lVar1 = UObject::GetPrivateStaticClass();
    for (lVar2 = *(longlong *)(param_2 + 0x30); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar1) {
        if (*(longlong *)(param_2 + 0x30) == 0) {
          return 0;
        }
        lVar2 = FUN_1428dfc70();
        if (*(longlong *)(param_2 + 0x30) == 0) goto LAB_142443b22;
        lVar3 = UObject::GetPrivateStaticClass();
        lVar4 = *(longlong *)(param_2 + 0x30);
        lVar1 = lVar4;
        goto joined_r0x000142443b12;
      }
    }
  }
  return 0;
joined_r0x000142443b12:
  if (lVar1 == 0) goto LAB_142443b22;
  if (lVar1 == lVar3) goto joined_r0x000142443b27;
  lVar1 = *(longlong *)(lVar1 + 0x30);
  goto joined_r0x000142443b12;
LAB_142443b22:
  lVar4 = 0;
joined_r0x000142443b27:
  while( true ) {
    if (lVar4 == 0) {
      return 0;
    }
    if (lVar4 == lVar2) break;
    lVar4 = *(longlong *)(lVar4 + 0x30);
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar4 = UObject::GetPrivateStaticClass();
    lVar2 = *(longlong *)(param_2 + 0x30);
    for (lVar1 = lVar2; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar4) goto LAB_142443b70;
    }
  }
  lVar2 = 0;
LAB_142443b70:
  uVar5 = FUN_142443830(param_1,lVar2,param_3,param_4 * '\x02' + '\x01',0);
  return uVar5;
}



// FUNCTION 142443b90 BeginSpawningActorFromClass body=11 status=ok
// SIG undefined BeginSpawningActorFromClass(void)

void UGameplayStatics::BeginSpawningActorFromClass(void)

{
  FUN_142443830();
  return;
}



// FUNCTION 142443bc0 BlueprintSuggestProjectileVelocity body=204 status=ok
// SIG undefined BlueprintSuggestProjectileVelocity(void)

undefined1
UGameplayStatics::BlueprintSuggestProjectileVelocity
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined1 param_9,undefined1 param_10)

{
  undefined1 uVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  longlong local_18 [2];
  
  local_30 = *(undefined4 *)(param_4 + 1);
  local_38 = *param_4;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_18[0] = 0;
  local_18[1] = 0;
  local_28 = *param_3;
  uVar1 = FUN_1424622f0(param_5,param_8,&local_28,&local_38,param_5,param_9,param_8,param_6,param_7,
                        &DAT_146aefe68,local_18,param_10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 142443c90 thunk_FUN_142459850 body=5 status=ok
// SIG undefined thunk_FUN_142459850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 thunk_FUN_142459850(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  longlong lVar17;
  undefined8 uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_388 [32];
  undefined4 *puStack_368;
  uint *puStack_360;
  undefined8 *puStack_358;
  undefined1 *puStack_350;
  undefined *puStack_348;
  char acStack_338 [8];
  undefined8 uStack_330;
  float fStack_328;
  float fStack_320;
  undefined8 uStack_318;
  float fStack_310;
  uint uStack_308;
  undefined1 uStack_304;
  undefined8 uStack_300;
  float fStack_2f8;
  undefined8 uStack_2f0;
  float fStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  undefined8 uStack_2d0;
  float fStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  float fStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  float fStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined1 auStack_288 [12];
  float fStack_27c;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [12];
  float fStack_1ec;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [72];
  longlong lStack_120;
  longlong lStack_100;
  ulonglong uStack_e8;
  
  uStack_e8 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  *(undefined4 *)(param_3 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_3 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
              (param_3);
  }
  fStack_2d8 = 0.0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  *(undefined4 *)(param_3 + 5) = 0;
  _guard_xfg_dispatch_icall_nop(param_3 + 6,0,0x90);
  *(undefined4 *)((longlong)param_3 + 0x3c) = 0x3f800000;
  uVar18 = 0;
  lVar11 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((lVar11 != 0) && (0.0001 < *(float *)(param_2 + 9))) {
    fStack_320 = *(float *)((longlong)param_2 + 0x4c);
    fVar23 = 1.0 / *(float *)(param_2 + 9);
    fStack_2d4 = fVar23;
    if (ABS(fStack_320) <= 1e-08) {
      fStack_320 = (float)FUN_1428cc5b0(lVar11);
    }
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146af4a58) &&
       (_Init_thread_header(&DAT_146af4a58), DAT_146af4a58 == -1)) {
      FName::FName(&DAT_146af4a50,"PredictProjectilePath",1);
      _Init_thread_footer(&DAT_146af4a58);
    }
    iVar19 = 0;
    puStack_368 = (undefined4 *)0x0;
    FUN_1422ffb20(auStack_168,DAT_146af4a50,acStack_338,*(undefined1 *)(param_2 + 0xb));
    iVar4 = *(int *)(param_2 + 6);
    uStack_308 = 0;
    uStack_304 = 0;
    if ((*(char *)(param_2 + 3) == '\0') ||
       ((*(char *)((longlong)param_2 + 0x24) == '\0' && (iVar4 < 1)))) {
      acStack_338[0] = '\0';
    }
    else {
      acStack_338[0] = '\x01';
      FCollisionQueryParams::AddIgnoredActors(auStack_168,param_2 + 7);
      if (0 < iVar4) {
        for (; (-1 < iVar19 && (iVar19 < *(int *)(param_2 + 6))); iVar19 = iVar19 + 1) {
          uVar3 = *(undefined1 *)((longlong)iVar19 + param_2[5]);
          uVar12 = UCollisionProfile::Get();
          uVar10 = UCollisionProfile::ConvertToCollisionChannel(uVar12,0,uVar3);
          uStack_308 = uStack_308 | 1 << (uVar10 & 0x1f);
        }
      }
    }
    fStack_328 = *(float *)(param_2 + 1);
    uStack_330 = *param_2;
    uVar12 = *(undefined8 *)((longlong)param_2 + 0xc);
    fVar5 = *(float *)((longlong)param_2 + 0x14);
    iVar19 = -((int)ROUND(-0.5 - (*(float *)(param_2 + 9) * *(float *)(param_2 + 4) +
                                 *(float *)(param_2 + 9) * *(float *)(param_2 + 4))) >> 1);
    if (0x7f < iVar19) {
      iVar19 = 0x80;
    }
    uStack_318 = uStack_330;
    fStack_310 = fStack_328;
    uStack_300 = uVar12;
    fStack_2f8 = fVar5;
    if (*(int *)((longlong)param_3 + 0xc) < iVar19) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeTo
                (param_3);
    }
    iVar19 = (int)param_3[1];
    uStack_2c4 = (undefined4)uVar12;
    uVar6 = uStack_2c4;
    uStack_2c0 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar7 = uStack_2c0;
    uStack_2b8 = 0;
    *(int *)(param_3 + 1) = iVar19 + 1;
    uStack_2d0 = uStack_318;
    fStack_2c8 = fStack_310;
    fStack_2bc = fVar5;
    if (*(int *)((longlong)param_3 + 0xc) < iVar19 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
                (param_3,iVar19);
    }
    lVar17 = *param_3;
    lVar15 = (longlong)iVar19 * 0x1c;
    puVar1 = (undefined4 *)(lVar15 + lVar17);
    *puVar1 = (undefined4)uStack_2d0;
    puVar1[1] = uStack_2d0._4_4_;
    puVar1[2] = fStack_2c8;
    puVar1[3] = uStack_2c4;
    *(ulonglong *)(lVar15 + 0x10 + lVar17) = CONCAT44(fStack_2bc,uStack_2c0);
    *(undefined4 *)(lVar15 + 0x18 + lVar17) = uStack_2b8;
    fVar5 = *(float *)(param_2 + 4);
    uStack_224 = 0xffffffff;
    uStack_220 = 0;
    uStack_21c = 0xffffffff;
    uStack_218 = 0;
    uStack_214 = 0xffffffff;
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_194 = 0xffffffff;
    uStack_190 = 0;
    uStack_18c = 0xffffffff;
    uStack_188 = 0;
    uStack_184 = 0xffffffff;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    fStack_27c = 1.0;
    fStack_1ec = 1.0;
    if (0.0 < fVar5) {
      fVar26 = (float)uStack_300 * 2.0;
      fVar27 = uStack_300._4_4_ * 2.0;
      fVar21 = 0.0;
      fVar24 = fStack_2f8;
      do {
        *(undefined8 *)((longlong)param_3 + 0x1c) = uVar12;
        uStack_318 = uStack_330;
        fStack_310 = fStack_328;
        fVar20 = fVar5 - fVar21;
        if (fVar23 <= fVar5 - fVar21) {
          fVar20 = fVar23;
        }
        fVar22 = fVar21 + fVar20;
        fVar23 = fVar20 * 0.5;
        fVar25 = fVar20 * fStack_320 + fVar24;
        *(float *)(param_3 + 5) = fVar22;
        uStack_330._0_4_ = fVar26 * fVar23 + (float)uStack_330;
        *(float *)((longlong)param_3 + 0x24) = fVar25;
        uStack_330._4_4_ = fVar27 * fVar23 + uStack_330._4_4_;
        fStack_328 = (fVar25 + fVar24) * fVar23 + fStack_328;
        param_3[2] = CONCAT44(uStack_330._4_4_,(float)uStack_330);
        *(float *)(param_3 + 3) = fStack_328;
        fStack_2f8 = fVar25;
        if (acStack_338[0] != '\0') {
          if (iVar4 < 1) {
LAB_142459dfe:
            if (*(char *)((longlong)param_2 + 0x24) != '\0') {
              puStack_348 = &DAT_146aefe68;
              puStack_350 = auStack_168;
              puStack_358 = &uStack_2d0;
              puStack_360 = (uint *)CONCAT44(puStack_360._4_4_,
                                             (uint)*(byte *)((longlong)param_2 + 0x25));
              puStack_368 = &DAT_1464aa810;
              uStack_2d0 = CONCAT44(uVar2,2);
              cVar8 = UWorld::SweepSingleByChannel(lVar11,auStack_1f8,&uStack_318,&uStack_330);
LAB_142459e52:
              if (cVar8 != '\0') {
                puVar16 = auStack_288;
                if (fStack_1ec <= fStack_27c) {
                  puVar16 = auStack_1f8;
                }
                FUN_140729f20(param_3 + 6,puVar16);
                fVar20 = fVar20 * *(float *)((longlong)param_3 + 0x3c);
                fStack_2e8 = *(float *)((longlong)param_3 + 0x4c);
                iVar4 = (int)param_3[1];
                fStack_2d8 = fVar20 + fVar21;
                fStack_2dc = fVar20 * fStack_320 + fVar24;
                uStack_2f0 = *(undefined8 *)((longlong)param_3 + 0x44);
                uStack_2e4 = (float)uStack_300;
                uStack_2e0 = uStack_300._4_4_;
                *(int *)(param_3 + 1) = iVar4 + 1;
                fStack_2a8 = fStack_2dc;
                if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>
                  ::ResizeGrow(param_3,iVar4);
                }
                lVar11 = *param_3;
                uVar18 = 1;
                lVar17 = (longlong)iVar4 * 0x1c;
                puVar1 = (undefined4 *)(lVar17 + lVar11);
                *puVar1 = (undefined4)uStack_2f0;
                puVar1[1] = uStack_2f0._4_4_;
                puVar1[2] = fStack_2e8;
                puVar1[3] = uStack_2e4;
                *(ulonglong *)(lVar17 + 0x10 + lVar11) = CONCAT44(fStack_2dc,uStack_2e0);
                *(float *)(lVar17 + 0x18 + lVar11) = fStack_2d8;
                break;
              }
            }
          }
          else {
            if (*(char *)((longlong)param_2 + 0x24) == '\0') {
              if (iVar4 < 1) goto LAB_142459dfe;
              puStack_350 = auStack_168;
              puStack_358 = (undefined8 *)&uStack_2a0;
              uStack_2a0 = 2;
              puStack_360 = &uStack_308;
              puStack_368 = &DAT_1464aa810;
              uStack_29c = uVar2;
              cVar8 = UWorld::SweepSingleByObjectType(lVar11,auStack_288,&uStack_318,&uStack_330);
              goto LAB_142459e52;
            }
            while( true ) {
              puStack_350 = auStack_168;
              puStack_358 = (undefined8 *)&uStack_2b0;
              uStack_2b0 = 2;
              puStack_360 = &uStack_308;
              puStack_368 = &DAT_1464aa810;
              uStack_2ac = uVar2;
              cVar8 = UWorld::SweepSingleByObjectType(lVar11,auStack_288,&uStack_318,&uStack_330);
              if (cVar8 == '\0') break;
              cVar9 = FWeakObjectPtr::IsValid(&uStack_21c,1,0);
              if ((cVar9 == '\0') ||
                 (cVar9 = FWeakObjectPtr::IsValid(&uStack_214,1,0), cVar9 == '\0'))
              goto LAB_142459e52;
              plVar13 = (longlong *)FWeakObjectPtr::Get(&uStack_214);
              iVar19 = (**(code **)(*plVar13 + 0x4f0))
                                 (plVar13,*(undefined1 *)((longlong)param_2 + 0x25));
              if (iVar19 != 0) goto LAB_142459e52;
              uVar14 = FWeakObjectPtr::Get(&uStack_21c);
              FCollisionQueryParams::AddIgnoredActor(auStack_168,uVar14);
            }
          }
        }
        iVar19 = (int)param_3[1];
        fStack_2e8 = fStack_328;
        *(int *)(param_3 + 1) = iVar19 + 1;
        uStack_2f0 = uStack_330;
        uStack_2e4 = uVar6;
        uStack_2e0 = uVar7;
        fStack_2dc = fVar25;
        fStack_2d8 = fVar22;
        if (*(int *)((longlong)param_3 + 0xc) < iVar19 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::
          ResizeGrow(param_3,iVar19);
        }
        lVar17 = *param_3;
        lVar15 = (longlong)iVar19 * 0x1c;
        puVar1 = (undefined4 *)(lVar15 + lVar17);
        *puVar1 = (undefined4)uStack_2f0;
        puVar1[1] = uStack_2f0._4_4_;
        puVar1[2] = fStack_2e8;
        puVar1[3] = uStack_2e4;
        *(ulonglong *)(lVar15 + 0x10 + lVar17) = CONCAT44(fStack_2dc,uStack_2e0);
        *(float *)(lVar15 + 0x18 + lVar17) = fStack_2d8;
        fVar21 = fVar22;
        fVar23 = fStack_2d4;
        fVar24 = fVar25;
      } while (fVar22 < fVar5);
    }
    if (lStack_100 != 0) {
      FMemory::Free();
    }
    if (lStack_120 != 0) {
      FMemory::Free();
    }
  }
  return uVar18;
}



// FUNCTION 142443ca0 FUN_142443ca0 body=955 status=ok
// SIG undefined FUN_142443ca0(void)

undefined1
FUN_142443ca0(undefined8 param_1,byte *param_2,longlong *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined1 param_7,undefined4 param_8,
             void **param_9,undefined1 param_10,void **param_11,undefined1 param_12,
             undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined1 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  ushort local_124;
  void *local_120;
  undefined8 local_118;
  void *local_110;
  ulonglong local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  byte local_b8 [4];
  undefined4 local_b4;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_128 = param_15;
  local_120 = (void *)0x0;
  local_148 = *param_5;
  local_140 = *(undefined4 *)(param_5 + 1);
  local_118 = 0;
  local_110 = (void *)0x0;
  local_13c = *param_6;
  local_134 = *(undefined4 *)(param_6 + 1);
  local_130 = param_7;
  local_f0 = param_10;
  local_12c = param_8;
  local_100 = 0x41a00000;
  local_108 = 0;
  local_fc = 0;
  local_f4 = 0x3f800000;
  local_124 = 1;
  local_f8 = 0;
  iVar8 = 0;
  if (&local_110 != param_11) {
    uVar1 = *(uint *)(param_11 + 1);
    pvVar3 = *param_11;
    local_108 = (ulonglong)uVar1;
    iVar8 = 0;
    if (uVar1 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_110,uVar1);
      _guard_xfg_dispatch_icall_nop(local_110,pvVar3,(longlong)(int)uVar1 << 3);
      iVar8 = local_118._4_4_;
    }
  }
  local_f8 = param_12;
  local_f4 = param_13;
  local_100 = param_14;
  local_fc = param_16;
  if (&local_120 != param_9) {
    iVar2 = *(int *)(param_9 + 1);
    pvVar3 = *param_9;
    local_118 = CONCAT44(local_118._4_4_,iVar2);
    if ((iVar2 == 0) && (iVar8 == 0)) {
      local_118 = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_120,iVar2);
      _guard_xfg_dispatch_icall_nop(local_120,pvVar3,(longlong)iVar2);
    }
  }
  local_124 = local_124 & 0xff00;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_54 = 0xffffffff;
  local_50 = 0;
  local_4c = 0xffffffff;
  local_48 = 0;
  local_44 = 0xffffffff;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  _guard_xfg_dispatch_icall_nop(local_b8,0,0x90);
  local_ac = 0x3f800000;
  uVar5 = FUN_142459850(param_1,&local_148,&local_e8);
  *param_2 = *param_2 & 0xfc;
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffffe;
  *param_2 = *param_2 | local_b8[0] & 3;
  *(undefined4 *)(param_2 + 0xc) = local_ac;
  *(undefined8 *)(param_2 + 0x14) = local_a4;
  *(undefined4 *)(param_2 + 0x1c) = local_9c;
  *(undefined8 *)(param_2 + 0x20) = local_98;
  *(undefined4 *)(param_2 + 0x28) = local_90;
  *(undefined8 *)(param_2 + 0x2c) = local_8c;
  *(undefined4 *)(param_2 + 0x34) = local_84;
  *(undefined8 *)(param_2 + 0x38) = local_80;
  *(undefined4 *)(param_2 + 0x40) = local_78;
  *(undefined8 *)(param_2 + 0x44) = local_74;
  *(undefined4 *)(param_2 + 0x4c) = local_6c;
  *(undefined4 *)(param_2 + 4) = local_b4;
  *(undefined8 *)(param_2 + 0x50) = local_68;
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | local_b0 & 1;
  *(undefined4 *)(param_2 + 0x58) = local_60;
  *(undefined4 *)(param_2 + 0x60) = local_58;
  *(undefined4 *)(param_2 + 0x10) = local_a8;
  *(undefined4 *)(param_2 + 0x5c) = local_5c;
  *(undefined4 *)(param_2 + 100) = local_54;
  *(undefined4 *)(param_2 + 0x68) = local_50;
  *(undefined4 *)(param_2 + 0x6c) = local_4c;
  *(undefined4 *)(param_2 + 0x70) = local_48;
  *(undefined4 *)(param_2 + 0x74) = local_44;
  *(undefined4 *)(param_2 + 0x78) = local_40;
  *(undefined8 *)(param_2 + 0x80) = local_38;
  lVar6 = (longlong)(int)local_e0;
  *(ulonglong *)(param_2 + 0x88) = CONCAT44(uStack_2c,local_30);
  *param_4 = local_d8;
  *(undefined4 *)(param_4 + 1) = (undefined4)uStack_d0;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != (int)local_e0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_3,local_e0 & 0xffffffff);
  }
  puVar4 = local_e8;
  puVar9 = (undefined8 *)(lVar6 * 0x1c + (longlong)local_e8);
  for (puVar7 = local_e8; puVar7 != puVar9; puVar7 = (undefined8 *)((longlong)puVar7 + 0x1c)) {
    iVar8 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar8 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_3,iVar8);
    }
    lVar6 = *param_3;
    *(undefined8 *)(lVar6 + (longlong)iVar8 * 0xc) = *puVar7;
    *(undefined4 *)(lVar6 + 8 + (longlong)iVar8 * 0xc) = *(undefined4 *)(puVar7 + 1);
  }
  if (puVar4 != (undefined8 *)0x0) {
    FMemory::Free(puVar4);
  }
  if (local_110 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_120 != (void *)0x0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 142444060 FUN_142444060 body=875 status=ok
// SIG undefined FUN_142444060(void)

undefined1
FUN_142444060(undefined8 param_1,byte *param_2,longlong *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined1 param_7,undefined4 param_8,
             undefined1 *param_9,undefined1 param_10,void **param_11,undefined1 param_12,
             undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined1 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined2 local_124;
  longlong local_120;
  undefined8 local_118;
  void *local_110;
  ulonglong local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  byte local_b8 [4];
  undefined4 local_b4;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_128 = param_15;
  local_120 = 0;
  local_148 = *param_5;
  local_140 = *(undefined4 *)(param_5 + 1);
  local_118 = 0;
  local_110 = (void *)0x0;
  local_13c = *param_6;
  local_134 = *(undefined4 *)(param_6 + 1);
  local_130 = param_7;
  local_f0 = param_10;
  local_12c = param_8;
  local_100 = 0x41a00000;
  local_108 = 0;
  local_fc = 0;
  local_f4 = 0x3f800000;
  local_124 = 1;
  local_f8 = 0;
  if (&local_110 != param_11) {
    uVar1 = *(uint *)(param_11 + 1);
    _Src = *param_11;
    local_108 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_110,uVar1,0);
      _guard_xfg_dispatch_icall_nop(local_110,_Src,(longlong)(int)uVar1 << 3);
    }
  }
  local_f4 = param_13;
  local_f8 = param_12;
  local_fc = param_16;
  local_100 = param_14;
  local_e8 = (undefined8 *)0x0;
  local_124 = CONCAT11(*param_9,(undefined1)local_124);
  local_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_54 = 0xffffffff;
  local_50 = 0;
  local_4c = 0xffffffff;
  local_48 = 0;
  local_44 = 0xffffffff;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  _guard_xfg_dispatch_icall_nop(local_b8,0,0x90);
  local_ac = 0x3f800000;
  uVar4 = FUN_142459850(param_1,&local_148,&local_e8);
  *param_2 = *param_2 & 0xfc;
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffffe;
  *param_2 = *param_2 | local_b8[0] & 3;
  *(undefined4 *)(param_2 + 0xc) = local_ac;
  *(undefined8 *)(param_2 + 0x14) = local_a4;
  *(undefined4 *)(param_2 + 0x1c) = local_9c;
  *(undefined8 *)(param_2 + 0x20) = local_98;
  *(undefined4 *)(param_2 + 0x28) = local_90;
  *(undefined8 *)(param_2 + 0x2c) = local_8c;
  *(undefined4 *)(param_2 + 0x34) = local_84;
  *(undefined8 *)(param_2 + 0x38) = local_80;
  *(undefined4 *)(param_2 + 0x40) = local_78;
  *(undefined8 *)(param_2 + 0x44) = local_74;
  *(undefined4 *)(param_2 + 0x4c) = local_6c;
  *(undefined4 *)(param_2 + 4) = local_b4;
  *(undefined8 *)(param_2 + 0x50) = local_68;
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | local_b0 & 1;
  *(undefined4 *)(param_2 + 0x58) = local_60;
  *(undefined4 *)(param_2 + 0x60) = local_58;
  *(undefined4 *)(param_2 + 0x10) = local_a8;
  *(undefined4 *)(param_2 + 0x5c) = local_5c;
  *(undefined4 *)(param_2 + 100) = local_54;
  *(undefined4 *)(param_2 + 0x68) = local_50;
  lVar5 = (longlong)(int)local_e0;
  *(undefined4 *)(param_2 + 0x6c) = local_4c;
  *(undefined4 *)(param_2 + 0x70) = local_48;
  *(undefined4 *)(param_2 + 0x74) = local_44;
  *(undefined4 *)(param_2 + 0x78) = local_40;
  *(undefined8 *)(param_2 + 0x80) = local_38;
  *(ulonglong *)(param_2 + 0x88) = CONCAT44(uStack_2c,local_30);
  *param_4 = local_d8;
  *(undefined4 *)(param_4 + 1) = (undefined4)uStack_d0;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != (int)local_e0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_3,local_e0 & 0xffffffff);
  }
  puVar3 = local_e8;
  puVar7 = (undefined8 *)(lVar5 * 0x1c + (longlong)local_e8);
  for (puVar6 = local_e8; puVar6 != puVar7; puVar6 = (undefined8 *)((longlong)puVar6 + 0x1c)) {
    iVar2 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
    }
    lVar5 = *param_3;
    *(undefined8 *)(lVar5 + (longlong)iVar2 * 0xc) = *puVar6;
    *(undefined4 *)(lVar5 + 8 + (longlong)iVar2 * 0xc) = *(undefined4 *)(puVar6 + 1);
  }
  if (puVar3 != (undefined8 *)0x0) {
    FMemory::Free(puVar3);
  }
  if (local_110 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_120 != 0) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 1424443d0 FUN_1424443d0 body=275 status=ok
// SIG undefined FUN_1424443d0(void)

void FUN_1424443d0(byte *param_1,byte *param_2,byte *param_3,undefined4 *param_4,undefined4 *param_5
                  ,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9,
                  undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
                  undefined8 *param_13,undefined4 *param_14,undefined4 *param_15,
                  undefined8 *param_16,undefined8 *param_17)

{
  undefined8 uVar1;
  
  *param_2 = *param_1 & 1;
  *param_3 = *param_1 >> 1 & 1;
  *param_4 = *(undefined4 *)(param_1 + 0xc);
  *param_5 = *(undefined4 *)(param_1 + 0x10);
  *param_6 = *(undefined8 *)(param_1 + 0x14);
  *(undefined4 *)(param_6 + 1) = *(undefined4 *)(param_1 + 0x1c);
  *param_7 = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(param_7 + 1) = *(undefined4 *)(param_1 + 0x28);
  *param_8 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined4 *)(param_8 + 1) = *(undefined4 *)(param_1 + 0x34);
  *param_9 = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)(param_9 + 1) = *(undefined4 *)(param_1 + 0x40);
  uVar1 = FWeakObjectPtr::Get(param_1 + 100);
  *param_10 = uVar1;
  uVar1 = FWeakObjectPtr::Get(param_1 + 0x6c);
  *param_11 = uVar1;
  uVar1 = FWeakObjectPtr::Get(param_1 + 0x74);
  *param_12 = uVar1;
  *param_13 = *(undefined8 *)(param_1 + 0x80);
  *param_14 = *(undefined4 *)(param_1 + 0x60);
  *param_16 = *(undefined8 *)(param_1 + 0x44);
  *(undefined4 *)(param_16 + 1) = *(undefined4 *)(param_1 + 0x4c);
  *param_17 = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(param_17 + 1) = *(undefined4 *)(param_1 + 0x58);
  *param_15 = *(undefined4 *)(param_1 + 4);
  return;
}



// FUNCTION 1424444f0 FUN_1424444f0 body=449 status=ok
// SIG undefined FUN_1424444f0(void)

/* WARNING: Removing unreachable block (ram,0x00014244458c) */

void FUN_1424444f0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_28;
  int local_20;
  
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = FUN_1429d7ab0();
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
      lVar3 = FUN_1429d7ab0();
      lVar2 = lRam0000000000000478;
      if ((*(int *)(lVar3 + 0x90) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x90)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) == lVar3 + 0x88)) {
        lVar2 = *(longlong *)(param_2 + 0x478);
      }
    }
    else {
      lVar2 = FUN_14291fb80();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      lVar2 = 0;
      if (bVar1) {
        lVar2 = FUN_14291fb80();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          param_2 = 0;
        }
        lVar2 = *(longlong *)(param_2 + 0x460);
      }
    }
  }
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  UWorld::GetPlayerControllerIterator(uVar4,&local_28);
  while( true ) {
    if ((local_20 < 0) || (*(int *)(local_28 + 8) <= local_20)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    lVar3 = FWeakObjectPtr::Get();
    if (lVar3 != 0) {
      FUN_1429e1250(lVar3,lVar2,param_3,param_4,0);
    }
    local_20 = local_20 + 1;
  }
  return;
}



// FUNCTION 1424446c0 BroadcastLocalized body=180 status=ok
// SIG undefined BroadcastLocalized(void)

void AGameMode::BroadcastLocalized
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  UWorld::GetPlayerControllerIterator(uVar1,&local_18);
  for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
    lVar2 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
    if (lVar2 != 0) {
      FUN_1429e0d40(lVar2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  return;
}



// FUNCTION 142444780 FUN_142444780 body=112 status=ok
// SIG undefined FUN_142444780(void)

ulonglong FUN_142444780(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  iVar3 = 1;
  if (*(longlong **)(lVar4 + 0x140) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x140) + 0x760))();
    iVar3 = 1;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
  }
  uVar1 = (longlong)(int)param_1[0x8c] / (longlong)iVar3;
  iVar3 = (int)uVar1;
  if (iVar3 < (int)*(uint *)((longlong)param_1 + 0x464)) {
    return (ulonglong)*(uint *)((longlong)param_1 + 0x464);
  }
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x8d);
  if (iVar3 < (int)*(uint *)(param_1 + 0x8d)) {
    uVar5 = uVar1 & 0xffffffff;
  }
  return uVar5;
}



// FUNCTION 1424447f0 FUN_1424447f0 body=36 status=ok
// SIG undefined FUN_1424447f0(void)

void FUN_1424447f0(undefined4 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)IStreamingManager::Get();
                    /* WARNING: Could not recover jumptable at 0x000142444810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1,*param_1,0);
  return;
}



// FUNCTION 142444820 FUN_142444820 body=50 status=ok
// SIG undefined FUN_142444820(void)

undefined8 FUN_142444820(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142444860();
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x500) != DAT_146af39a0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142444860 FUN_142444860 body=602 status=ok
// SIG undefined FUN_142444860(void)

ulonglong FUN_142444860(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  wchar_t *pwVar10;
  wchar_t *_Source;
  int iVar11;
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  if ((*(int *)(lVar6 + 0x708) == 3) && ((*(byte *)(param_1 + 0x9c) & 1) != 0)) {
    uVar7 = FCommandLine::Get();
    uVar8 = FParse::Param(uVar7,L"MultiprocessOSS");
    if ((char)uVar8 == '\0') goto LAB_142444ab1;
  }
  uVar8 = FUN_141592950(param_2,&DAT_1450a063c,1,0,0xffffffff);
  if ((((int)uVar8 == -1) &&
      (uVar8 = FUN_141592950(param_2,&DAT_1450a06dc,1,0,0xffffffff), (int)uVar8 == -1)) &&
     (uVar8 = FUN_141592950(param_2,&DAT_1450a092c,1,0,0xffffffff), (int)uVar8 == -1)) {
    pwVar10 = (wchar_t *)0x0;
    local_58 = (wchar_t *)0x0;
    local_50 = 0;
    iVar5 = FUN_141592950(param_2,&DAT_1450a0a6c,1,0,0xffffffff);
    if (iVar5 == -1) {
      FString::operator=(&local_58,param_2);
    }
    else {
      iVar3 = *(int *)(param_2 + 1);
      if (iVar3 == 0) {
        _Source = L"";
      }
      else {
        _Source = (wchar_t *)*param_2;
      }
      iVar11 = 0;
      iVar9 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar9 = iVar11;
      }
      if ((-1 < iVar5) && (iVar11 = iVar9, iVar5 < iVar9)) {
        iVar11 = iVar5;
      }
      local_48 = (wchar_t *)0x0;
      local_3c = 0;
      iVar5 = iVar11 + 1;
      if (iVar11 == 0) {
        iVar5 = 0;
      }
      local_40 = iVar5;
      if ((0 < iVar5) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0), iVar5 = local_40,
         pwVar10 = local_48, 0 < local_40)) {
        wcsncpy(local_48,_Source,(longlong)iVar11);
        pwVar10[iVar11] = L'\0';
      }
      if (local_58 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_50 = CONCAT44(local_3c,iVar5);
      local_58 = pwVar10;
    }
    FText::FText(local_38);
    cVar4 = FString::StartsWith(&local_58,&DAT_1450a0a7c,1);
    if ((cVar4 == '\0') ||
       (cVar4 = FPackageName::IsValidLongPackageName(&local_58,1,local_38), cVar4 != '\0')) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
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
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (local_58 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    return uVar8;
  }
LAB_142444ab1:
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 142444ad0 FUN_142444ad0 body=103 status=ok
// SIG undefined FUN_142444ad0(void)

void FUN_142444ad0(undefined8 param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  if ((param_2 != 0) && (1 < *(int *)(param_3 + 8))) {
    (**(code **)(**(longlong **)(param_2 + 0x460) + 0x730))(*(longlong **)(param_2 + 0x460),param_3)
    ;
    FUN_14293bf60(param_1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 142444b40 CheckTimeOut body=50 status=ok
// SIG undefined CheckTimeOut(void)

void FRootMotionSource::CheckTimeOut(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 != '\0') {
    if (*(float *)((longlong)param_1 + 0x2c) < *(float *)((longlong)param_1 + 0x24) ||
        *(float *)((longlong)param_1 + 0x2c) == *(float *)((longlong)param_1 + 0x24)) {
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 2;
      return;
    }
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfd;
  }
  return;
}



// FUNCTION 142444b80 FUN_142444b80 body=1561 status=ok
// SIG undefined FUN_142444b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_142444b80(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  longlong lVar18;
  int *piVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  uint local_178;
  uint local_174;
  longlong local_170;
  ulonglong local_168;
  uint local_160;
  int local_15c;
  ulonglong local_158;
  uint local_150;
  int local_14c;
  ulonglong local_148;
  undefined4 local_140;
  ulonglong local_138;
  undefined4 local_130;
  longlong *local_128;
  ulonglong local_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  ulonglong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [16];
  uint local_a8 [2];
  longlong local_a0;
  longlong local_98;
  int local_90;
  int local_88;
  char local_84;
  int local_80;
  longlong local_78;
  longlong local_70;
  int local_68;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_128 = param_1;
  (**(code **)(*param_1 + 0x8e8))();
  uVar24 = 0;
  plVar10 = (longlong *)FUN_14293bd80(param_1,param_2);
  if (plVar10 == (longlong *)0x0) {
    local_170 = 0;
  }
  else {
    local_170 = plVar10[0x1f];
    if (local_170 == 0) {
      (**(code **)(*plVar10 + 0x368))(plVar10);
      local_170 = plVar10[0x1f];
    }
  }
  local_168 = 0;
  local_174 = 0;
  local_15c = 0;
  local_158 = 0;
  local_178 = 0;
  local_14c = 0;
  uVar11 = UUGRichTextBlock::GetPrivateStaticClass();
  local_148 = (**(code **)(*param_1 + 0x148))(param_1);
  local_138 = uVar24;
  if (uVar11 != 0) {
    uVar12 = UUGRichTextBlock::GetPrivateStaticClass();
    uVar13 = uVar11;
    do {
      local_138 = uVar11;
      if (uVar13 == uVar12) break;
      uVar13 = *(ulonglong *)(uVar13 + 0x30);
      local_138 = uVar24;
    } while (uVar13 != 0);
  }
  local_a8[0] = 5;
  local_50 = '\0';
  FUN_14044bc80(&local_a0,&local_148,&local_138);
  FUN_14045a130(local_a8);
  uVar8 = 0;
  uVar22 = 0;
  uVar11 = uVar24;
  uVar13 = uVar24;
  uVar12 = uVar24;
  lVar23 = local_78;
joined_r0x000142444c96:
  lVar14 = 0;
  local_78 = lVar23;
  if (local_84 == '\0') {
    uVar8 = (uint)uVar11;
    uVar22 = (uint)uVar24;
    lVar14 = UUGRichTextBlock::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8
         ) != lVar14 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    lVar14 = lVar23;
    if (!bVar3) {
      lVar14 = *(longlong *)(lVar23 + 0x168);
      if (lVar14 == 0) {
        local_118 = DAT_1468b5d98;
        puVar15 = &local_120;
        local_120 = _DAT_1468b5d90;
      }
      else {
        puVar15 = &local_138;
        local_130 = *(undefined4 *)(lVar14 + 0x228);
        local_138 = *(ulonglong *)(lVar14 + 0x220);
      }
      local_148 = *puVar15;
      local_140 = (undefined4)puVar15[1];
      if (lVar14 == 0) {
        puVar16 = &local_108;
        local_108 = DAT_1468b5da0;
        local_100 = DAT_1468b5da8;
      }
      else {
        local_c8 = *(float *)(lVar14 + 0x210);
        fStack_c4 = *(float *)(lVar14 + 0x214);
        fStack_c0 = *(float *)(lVar14 + 0x218);
        fStack_bc = *(float *)(lVar14 + 0x21c);
        auVar26._4_4_ = -(uint)(fStack_c4 != *(float *)(lVar14 + 0x254));
        auVar26._0_4_ = -(uint)(local_c8 != *(float *)(lVar14 + 0x250));
        auVar26._8_4_ = -(uint)(fStack_c0 != *(float *)(lVar14 + 600));
        auVar26._12_4_ = -(uint)(fStack_bc != *(float *)(lVar14 + 0x25c));
        iVar7 = movmskps((int)puVar15,auVar26);
        if (iVar7 != 0) {
          *(float *)(lVar14 + 0x250) = local_c8;
          *(float *)(lVar14 + 0x254) = fStack_c4;
          *(float *)(lVar14 + 600) = fStack_c0;
          *(float *)(lVar14 + 0x25c) = fStack_bc;
          puVar16 = (undefined8 *)FQuat::Rotator(&local_c8,local_b8);
          *(undefined8 *)(lVar14 + 0x260) = *puVar16;
          *(undefined4 *)(lVar14 + 0x268) = *(undefined4 *)(puVar16 + 1);
        }
        puVar16 = &local_114;
        local_114 = *(undefined8 *)(lVar14 + 0x260);
        local_10c = *(undefined4 *)(lVar14 + 0x268);
      }
      local_f0 = *(undefined4 *)(puVar16 + 1);
      local_f8 = *puVar16;
      local_e8 = local_148;
      local_e0 = local_140;
      uVar17 = (**(code **)(*local_128 + 0x148))();
      local_188 = 0;
      cVar6 = FUN_142543f80(uVar17,local_170,&local_e8,&local_f8);
      if (cVar6 == '\0') {
        local_174 = uVar22 + 1;
        local_160 = local_174;
        if (local_15c < (int)local_174) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,uVar24);
          uVar13 = local_168;
        }
        *(longlong *)(uVar13 + (longlong)(int)uVar22 * 8) = lVar23;
        local_174 = local_160;
      }
      else {
        local_d0 = *(undefined4 *)(puVar16 + 1);
        local_d8 = *puVar16;
        uVar17 = (**(code **)(*local_128 + 0x148))();
        cVar6 = FUN_142546cc0(uVar17,local_170,&local_148,&local_d8);
        if (cVar6 != '\0') {
          local_178 = uVar8 + 1;
          local_150 = local_178;
          if (local_14c < (int)local_178) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_158,uVar11);
            uVar12 = local_158;
          }
          *(longlong *)(uVar12 + (longlong)(int)uVar8 * 8) = lVar23;
          local_178 = local_150;
        }
      }
      lVar14 = local_a0;
      iVar7 = local_88 + 1;
      if (iVar7 < local_68 + local_90) {
        lVar25 = (longlong)iVar7 * 8;
        iVar9 = local_68;
        iVar21 = local_90;
        do {
          lVar20 = 0;
          if (iVar7 < iVar21) {
            lVar23 = *(longlong *)(lVar25 + local_98);
          }
          else {
            lVar23 = *(longlong *)(local_70 + (longlong)(iVar7 - iVar21) * 8);
          }
          local_80 = local_80 + 1;
          if ((lVar23 != 0) &&
             (lVar18 = AActor::GetLevel(lVar23), iVar9 = local_68, iVar21 = local_90, lVar18 != 0))
          {
            if ((local_a8[0] & 1) != 0) {
              iVar1 = *(int *)(lVar23 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar22 = iVar1 >> 0x1f & 0xffff;
                uVar8 = iVar1 + uVar22;
                lVar20 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                         (longlong)(int)((uVar8 & 0xffff) - uVar22) * 0x18;
              }
              if ((*(uint *)(lVar20 + 8) >> 0x1d & 1) != 0) goto LAB_142445049;
            }
            if (((local_a8[0] >> 1 & 1) == 0) ||
               (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar23), iVar9 = local_68,
               iVar21 = local_90, cVar6 != '\0')) {
              if ((local_a8[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar18 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar18 + 0x205) & 0x10) == 0)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                piVar2 = *(int **)(lVar18 + 600);
                if (((*(longlong *)(lVar18 + 0xc0) == 0) ||
                    (piVar19 = (int *)UWorld::GetActiveLevelCollection(), piVar19 == (int *)0x0)) ||
                   (piVar2 == piVar19)) {
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
                iVar9 = local_68;
                iVar21 = local_90;
                if ((!bVar3) || (!bVar4)) goto LAB_142445049;
              }
              lVar20 = ULevel::GetWorld(lVar18);
              iVar9 = local_68;
              iVar21 = local_90;
              if (lVar20 == lVar14) {
                lVar20 = AActor::GetLevel(lVar23);
                if (lVar20 == *(longlong *)(lVar14 + 0x30)) goto LAB_14244507b;
                lVar20 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x90) < *(int *)(lVar20 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar20 + 0x90) * 8) != lVar20 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                iVar9 = local_68;
                iVar21 = local_90;
                if (!bVar3) goto LAB_14244507b;
              }
            }
          }
LAB_142445049:
          iVar7 = iVar7 + 1;
          lVar25 = lVar25 + 8;
          if (iVar9 + iVar21 <= iVar7) break;
        } while( true );
      }
      local_78 = 0;
      local_84 = '\x01';
      lVar14 = 0;
      uVar12 = local_158;
      uVar13 = local_168;
      uVar22 = local_174;
      uVar8 = local_178;
    }
  }
  if (local_50 != '\0') {
    local_50 = '\0';
    UWorld::RemoveOnActorSpawnedHandler(local_a0,local_58);
    if (local_70 != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
  }
  if (lVar14 == 0) {
    if ((int)uVar22 < 1) {
      if (0 < (int)uVar8) {
        iVar7 = rand();
        iVar9 = (int)((float)iVar7 * 3.051851e-05 * (float)(int)uVar8);
        iVar7 = uVar8 - 1;
        if (iVar9 <= (int)(uVar8 - 1)) {
          iVar7 = iVar9;
        }
        lVar14 = *(longlong *)(uVar12 + (longlong)iVar7 * 8);
      }
    }
    else {
      iVar7 = rand();
      iVar9 = (int)((float)iVar7 * 3.051851e-05 * (float)(int)uVar22);
      iVar7 = uVar22 - 1;
      if (iVar9 <= (int)(uVar22 - 1)) {
        iVar7 = iVar9;
      }
      lVar14 = *(longlong *)(uVar13 + (longlong)iVar7 * 8);
    }
  }
  if (uVar12 != 0) {
    FMemory::Free(uVar12);
  }
  if (uVar13 != 0) {
    FMemory::Free(uVar13);
  }
  return lVar14;
LAB_14244507b:
  uVar11 = (ulonglong)local_178;
  uVar24 = (ulonglong)local_174;
  uVar8 = local_178;
  uVar22 = local_174;
  uVar13 = local_168;
  uVar12 = local_158;
  local_88 = iVar7;
  goto joined_r0x000142444c96;
}



// FUNCTION 1424451a0 CleanUpInvalidRootMotion body=66 status=ok
// SIG undefined CleanUpInvalidRootMotion(void)

void FRootMotionSourceGroup::CleanUpInvalidRootMotion
               (longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_res8 [32];
  longlong local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = param_1;
  local_20 = param_2;
  local_18 = param_3;
  local_10 = param_4;
  FUN_14243bc90(param_1 + 8,&local_28);
  FUN_14243c420(param_1 + 0x98,local_res8);
  return;
}



// FUNCTION 1424451f0 FUN_1424451f0 body=89 status=ok
// SIG undefined FUN_1424451f0(void)

void FUN_1424451f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x40) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar3 * 8);
      if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x70), lVar1 != 0)) &&
         (*(longlong *)(lVar1 + 0xb0) == 0)) {
        FUN_14245cc40(param_1);
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 142445250 Clear body=58 status=ok
// SIG undefined Clear(void)

void FRootMotionSourceGroup::Clear(longlong param_1)

{
  FUN_14244add0(param_1 + 8,0);
  FUN_14244ad10(param_1 + 0x98,0);
  *(undefined2 *)(param_1 + 0xf8) = 0;
  *(undefined2 *)(param_1 + 0xe8) = 0;
  return;
}



// FUNCTION 142445290 FUN_142445290 body=381 status=ok
// SIG undefined FUN_142445290(void)

undefined8 FUN_142445290(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong **pplVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *local_28;
  int local_20;
  
  uVar6 = 0;
  cVar1 = (**(code **)(*param_1 + 0x790))(param_1,0);
  if ((cVar1 == '\0') && (0 < (int)param_1[0x9e])) {
    FUN_14245d1a0(param_1 + 0x9d,0);
    uVar6 = 1;
  }
  iVar2 = (int)param_1[0x9e];
  iVar5 = iVar2 + -1;
  if (-1 < iVar5) {
    lVar7 = (longlong)iVar5 << 4;
    do {
      pplVar3 = (longlong **)(param_1[0x9d] + lVar7);
      local_28 = (longlong *)0x0;
      local_20 = 0;
      if ((((pplVar3 == &local_28) || (*(int *)(pplVar3 + 1) == 0)) ||
          (plVar4 = *pplVar3, plVar4 == (longlong *)0x0)) ||
         ((((**(code **)(*plVar4 + 0x30))(plVar4,&local_28), local_20 == 0 ||
           (local_28 == (longlong *)0x0)) ||
          (cVar1 = (**(code **)(*local_28 + 0x18))(), cVar1 == '\0')))) {
LAB_142445366:
        FUN_1418bdc80(param_1 + 0x9d,iVar5,1);
        uVar6 = 1;
      }
      else {
        plVar4 = (longlong *)0x0;
        if (local_20 != 0) {
          plVar4 = local_28;
        }
        cVar1 = (**(code **)(*plVar4 + 0x38))();
        if (cVar1 != '\0') goto LAB_142445366;
      }
      if (local_20 == 0) {
LAB_1424453bd:
        if (local_28 != (longlong *)0x0) {
          FMemory::Free(local_28);
        }
      }
      else if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0x28))(local_28,0);
        if (local_28 != (longlong *)0x0) {
          local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
        }
        local_20 = 0;
        goto LAB_1424453bd;
      }
      lVar7 = lVar7 + -0x10;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    iVar2 = (int)param_1[0x9e];
  }
  if (iVar2 == 0) {
    lVar7 = AActor::GetWorldSettings(param_1);
    *(undefined8 *)(lVar7 + 0x600) = 0;
  }
  return uVar6;
}



// FUNCTION 142445410 FUN_142445410 body=155 status=ok
// SIG undefined FUN_142445410(void)

void FUN_142445410(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  
  if ((((param_2 != 0) && (DAT_146b17150 != (longlong *)0x0)) &&
      (cVar1 = (**(code **)(*DAT_146b17150 + 0x388))(), cVar1 != '\0')) &&
     (((lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar2 != 0 &&
       ((*(uint *)(lVar2 + 0x830) & 0x4000) != 0)) &&
      (lVar2 = UWorld::GetAudioDevice(lVar2), lVar2 != 0)))) {
    FUN_1422c49d0(lVar2,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 1424454b0 FUN_1424454b0 body=104 status=ok
// SIG undefined FUN_1424454b0(void)

void FUN_1424454b0(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (DAT_146b17150 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_146b17150 + 0x388))();
    if (cVar1 != '\0') {
      lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
      if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x830) & 0x4000) != 0)) {
        lVar2 = UWorld::GetAudioDevice(lVar2);
        if (lVar2 != 0) {
          FUN_1422c4d10(lVar2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142445520 FUN_142445520 body=200 status=ok
// SIG undefined FUN_142445520(void)

undefined8 FUN_142445520(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_28 [4];
  
  uVar2 = (**(code **)(*param_1 + 0x148))();
  local_28[0] = 0;
  local_28[1] = 0;
  plVar3 = (longlong *)UOnlineEngineInterface::Get();
  cVar1 = (**(code **)(*plVar3 + 0x328))(plVar3,uVar2,param_3,local_28);
  if (cVar1 != '\0') {
    lVar4 = UEngine::GetLocalPlayerFromControllerId(DAT_146b17150,uVar2,param_2);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x30) != 0)) {
      local_28[2] = 0;
      local_28[3] = 0;
      FUN_1426ffc80(*(longlong *)(lVar4 + 0x30),local_28,0,0,local_28 + 2);
      uVar2 = 1;
      goto LAB_1424455c6;
    }
  }
  uVar2 = 0;
LAB_1424455c6:
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 1424455f0 Clone body=119 status=ok
// SIG undefined Clone(void)

undefined8 * FRootMotionSource_ConstantForce::Clone(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xb0);
  if (puVar1 != (undefined8 *)0x0) {
    FRootMotionSource::FRootMotionSource(puVar1,param_1);
    *puVar1 = &PTR_FUN_1450ab510;
    puVar1[0x13] = *(undefined8 *)(param_1 + 0x98);
    *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)(param_1 + 0xa0);
    puVar1[0x15] = *(undefined8 *)(param_1 + 0xa8);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142445670 Clone body=202 status=ok
// SIG undefined Clone(void)

undefined8 * FRootMotionSource_JumpForce::Clone(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FRootMotionSource::FRootMotionSource(puVar1,param_1);
    *puVar1 = &PTR_FUN_1450ab6d0;
    puVar1[0x13] = *(undefined8 *)(param_1 + 0x98);
    *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined4 *)((longlong)puVar1 + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
    *(undefined4 *)(puVar1 + 0x15) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined1 *)((longlong)puVar1 + 0xac) = *(undefined1 *)(param_1 + 0xac);
    puVar1[0x16] = *(undefined8 *)(param_1 + 0xb0);
    puVar1[0x17] = *(undefined8 *)(param_1 + 0xb8);
    puVar1[0x18] = *(undefined8 *)(param_1 + 0xc0);
    *(undefined4 *)(puVar1 + 0x19) = *(undefined4 *)(param_1 + 200);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142445740 Clone body=206 status=ok
// SIG undefined Clone(void)

undefined8 * FRootMotionSource_MoveToDynamicForce::Clone(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    FRootMotionSource::FRootMotionSource(puVar1,param_1);
    *puVar1 = &PTR_FUN_1450ab660;
    puVar1[0x13] = *(undefined8 *)(param_1 + 0x98);
    *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined8 *)((longlong)puVar1 + 0xa4) = *(undefined8 *)(param_1 + 0xa4);
    *(undefined4 *)((longlong)puVar1 + 0xac) = *(undefined4 *)(param_1 + 0xac);
    puVar1[0x16] = *(undefined8 *)(param_1 + 0xb0);
    *(undefined4 *)(puVar1 + 0x17) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined1 *)((longlong)puVar1 + 0xbc) = *(undefined1 *)(param_1 + 0xbc);
    puVar1[0x18] = *(undefined8 *)(param_1 + 0xc0);
    puVar1[0x19] = *(undefined8 *)(param_1 + 200);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142445810 Clone body=160 status=ok
// SIG undefined Clone(void)

undefined8 * FRootMotionSource_MoveToForce::Clone(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xc0);
  if (puVar1 != (undefined8 *)0x0) {
    FRootMotionSource::FRootMotionSource(puVar1,param_1);
    *puVar1 = &PTR_FUN_1450ab5f0;
    puVar1[0x13] = *(undefined8 *)(param_1 + 0x98);
    *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined8 *)((longlong)puVar1 + 0xa4) = *(undefined8 *)(param_1 + 0xa4);
    *(undefined4 *)((longlong)puVar1 + 0xac) = *(undefined4 *)(param_1 + 0xac);
    *(undefined1 *)(puVar1 + 0x16) = *(undefined1 *)(param_1 + 0xb0);
    puVar1[0x17] = *(undefined8 *)(param_1 + 0xb8);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424458b0 Clone body=242 status=ok
// SIG undefined Clone(void)

undefined8 * FRootMotionSource_RadialForce::Clone(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FRootMotionSource::FRootMotionSource(puVar1,param_1);
    *puVar1 = &PTR_FUN_1450ab580;
    puVar1[0x13] = *(undefined8 *)(param_1 + 0x98);
    *(undefined4 *)(puVar1 + 0x14) = *(undefined4 *)(param_1 + 0xa0);
    puVar1[0x15] = *(undefined8 *)(param_1 + 0xa8);
    *(undefined4 *)(puVar1 + 0x16) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)((longlong)puVar1 + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined1 *)(puVar1 + 0x17) = *(undefined1 *)(param_1 + 0xb8);
    *(undefined1 *)((longlong)puVar1 + 0xb9) = *(undefined1 *)(param_1 + 0xb9);
    puVar1[0x18] = *(undefined8 *)(param_1 + 0xc0);
    puVar1[0x19] = *(undefined8 *)(param_1 + 200);
    *(undefined1 *)(puVar1 + 0x1a) = *(undefined1 *)(param_1 + 0xd0);
    *(undefined8 *)((longlong)puVar1 + 0xd4) = *(undefined8 *)(param_1 + 0xd4);
    *(undefined4 *)((longlong)puVar1 + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424459b0 FUN_1424459b0 body=1115 status=ok
// SIG undefined FUN_1424459b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1424459b0(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,byte *param_6)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  byte *pbVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_218 [32];
  float *local_1f8;
  undefined1 *local_1f0;
  undefined *local_1e8;
  undefined1 local_1d8 [8];
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined8 local_1c0;
  float local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined1 local_188 [144];
  undefined1 local_f8 [72];
  longlong local_b0;
  longlong local_90;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af4a28) && (_Init_thread_header(&DAT_146af4a28), DAT_146af4a28 == -1))
  {
    FName::FName(&DAT_146af4a20,"ComponentIsVisibleFrom",1);
    _Init_thread_footer(&DAT_146af4a28);
  }
  local_1f8 = (float *)param_3;
  FUN_1422ffb20(local_f8,DAT_146af4a20,local_1d8,1);
  FCollisionQueryParams::AddIgnoredActors(local_f8,param_4);
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(param_1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x1d0);
  local_1b8 = *(float *)(param_1 + 0x1d8);
  local_1a8 = param_2[2];
  local_1b0 = *(undefined8 *)param_2;
  if ((((float)uVar1 == *param_2) &&
      (local_1c0._4_4_ = (float)((ulonglong)uVar1 >> 0x20), local_1c0._4_4_ == param_2[1])) &&
     (local_1b8 == param_2[2])) {
    local_1a8 = local_1a8 + 0.01;
  }
  local_1e8 = &DAT_146aefe68;
  local_1f0 = local_f8;
  local_1f8 = (float *)CONCAT44(local_1f8._4_4_,param_5);
  local_1c0 = uVar1;
  cVar2 = UWorld::LineTraceSingleByChannel(lVar3,param_6,&local_1b0,&local_1c0);
  if (cVar2 == '\0') {
    local_1a0 = *(float *)(param_1 + 0x220);
    local_19c = *(float *)(param_1 + 0x224);
    local_198 = *(float *)(param_1 + 0x228);
    local_1d0 = *param_2 - local_1a0;
    local_1cc = param_2[1] - local_19c;
    local_1c8 = param_2[2] - local_198;
    fVar6 = local_1cc * local_1cc + local_1d0 * local_1d0 + local_1c8 * local_1c8;
    if (fVar6 != 1.0) {
      if (1e-08 <= fVar6) {
        auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
        fVar7 = auVar8._0_4_;
        fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
        fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
        local_1d0 = local_1d0 * fVar7;
        local_1cc = local_1cc * fVar7;
        local_1c8 = local_1c8 * fVar7;
      }
      else {
        local_1d0 = DAT_1468b5d90;
        local_1c8 = DAT_1468b5d98;
        local_1cc = DAT_1468b5d94;
      }
    }
    local_1f8 = &local_1d0;
    pbVar4 = (byte *)FUN_1422ffd10(local_188,*(undefined8 *)(param_1 + 0x118),param_1,&local_1a0);
    bVar5 = true;
    *param_6 = *param_6 ^ (*param_6 ^ *pbVar4) & 1;
    *param_6 = *param_6 ^ (*param_6 ^ *pbVar4) & 2;
    *(undefined4 *)(param_6 + 4) = *(undefined4 *)(pbVar4 + 4);
    *(uint *)(param_6 + 8) =
         *(uint *)(param_6 + 8) ^ (*(uint *)(pbVar4 + 8) ^ *(uint *)(param_6 + 8)) & 1;
    *(undefined4 *)(param_6 + 0xc) = *(undefined4 *)(pbVar4 + 0xc);
    *(undefined4 *)(param_6 + 0x10) = *(undefined4 *)(pbVar4 + 0x10);
    *(undefined8 *)(param_6 + 0x14) = *(undefined8 *)(pbVar4 + 0x14);
    *(undefined4 *)(param_6 + 0x1c) = *(undefined4 *)(pbVar4 + 0x1c);
    *(undefined8 *)(param_6 + 0x20) = *(undefined8 *)(pbVar4 + 0x20);
    *(undefined4 *)(param_6 + 0x28) = *(undefined4 *)(pbVar4 + 0x28);
    *(undefined8 *)(param_6 + 0x2c) = *(undefined8 *)(pbVar4 + 0x2c);
    *(undefined4 *)(param_6 + 0x34) = *(undefined4 *)(pbVar4 + 0x34);
    *(undefined8 *)(param_6 + 0x38) = *(undefined8 *)(pbVar4 + 0x38);
    *(undefined4 *)(param_6 + 0x40) = *(undefined4 *)(pbVar4 + 0x40);
    *(undefined8 *)(param_6 + 0x44) = *(undefined8 *)(pbVar4 + 0x44);
    *(undefined4 *)(param_6 + 0x4c) = *(undefined4 *)(pbVar4 + 0x4c);
    *(undefined8 *)(param_6 + 0x50) = *(undefined8 *)(pbVar4 + 0x50);
    *(undefined4 *)(param_6 + 0x58) = *(undefined4 *)(pbVar4 + 0x58);
    *(undefined4 *)(param_6 + 0x5c) = *(undefined4 *)(pbVar4 + 0x5c);
    *(undefined4 *)(param_6 + 0x60) = *(undefined4 *)(pbVar4 + 0x60);
    *(undefined4 *)(param_6 + 100) = *(undefined4 *)(pbVar4 + 100);
    *(undefined4 *)(param_6 + 0x68) = *(undefined4 *)(pbVar4 + 0x68);
    *(undefined4 *)(param_6 + 0x6c) = *(undefined4 *)(pbVar4 + 0x6c);
    *(undefined4 *)(param_6 + 0x70) = *(undefined4 *)(pbVar4 + 0x70);
    *(undefined4 *)(param_6 + 0x74) = *(undefined4 *)(pbVar4 + 0x74);
    *(undefined4 *)(param_6 + 0x78) = *(undefined4 *)(pbVar4 + 0x78);
    *(undefined8 *)(param_6 + 0x80) = *(undefined8 *)(pbVar4 + 0x80);
    *(undefined8 *)(param_6 + 0x88) = *(undefined8 *)(pbVar4 + 0x88);
  }
  else {
    cVar2 = FUN_14058c1e0(param_6 + 0x74,param_1);
    bVar5 = cVar2 != '\0';
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  return bVar5;
}



// FUNCTION 142445e10 FUN_142445e10 body=674 status=ok
// SIG undefined FUN_142445e10(void)

void FUN_142445e10(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  short *psVar5;
  int *piVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  int *local_48;
  int local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined8 local_30;
  
  piVar10 = (int *)0x0;
  iVar11 = 0;
  uVar4 = FCommandLine::Get();
  cVar3 = FParse::Param(uVar4,L"Windowed");
  if (cVar3 == '\0') {
    uVar4 = FCommandLine::Get();
    cVar3 = FParse::Param(uVar4,L"SimMobile");
    if (cVar3 == '\0') {
      uVar4 = FCommandLine::Get();
      cVar3 = FParse::Param(uVar4,L"FullScreen");
      if (cVar3 == '\0') goto LAB_142446028;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146af3a10) &&
         (_Init_thread_header(&DAT_146af3a10), DAT_146af3a10 == -1)) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        plVar7 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.FullScreenMode")
        ;
        piVar6 = piVar10;
        if (plVar7 != (longlong *)0x0) {
          piVar6 = (int *)(**(code **)(*plVar7 + 0x38))(plVar7);
        }
        DAT_146af3a08 = piVar6;
        _Init_thread_footer(&DAT_146af3a10);
      }
      iVar8 = *DAT_146af3a08;
      *param_3 = (uint)(iVar8 != 0);
      if (iVar8 != 0) goto LAB_142446028;
      piVar6 = local_48;
      piVar12 = piVar10;
      puVar14 = local_38;
      if (DAT_146ab6358 == (longlong *)0x0) {
LAB_142445fda:
        bVar2 = false;
      }
      else {
        local_38 = (undefined2 *)0x0;
        local_30 = 6;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        puVar14 = local_38;
        FGenericPlatformString::Memcpy(local_38,L"D3D12",0xc);
        psVar5 = (short *)(**(code **)(*DAT_146ab6358 + 0x20))();
        local_48 = (int *)0x0;
        local_3c = 0;
        if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (psVar5[lVar9] != 0);
          iVar8 = (int)lVar9 + 1;
          local_40 = iVar8;
          if (0 < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
          }
          iVar11 = local_40;
          piVar10 = local_48;
          FGenericPlatformString::Memcpy(local_48,psVar5,(longlong)iVar8 * 2);
        }
        puVar13 = &DAT_143f3eda8;
        if ((int)local_30 != 0) {
          puVar13 = puVar14;
        }
        piVar12 = (int *)0x3;
        piVar6 = (int *)&DAT_143f3eda8;
        if (iVar11 != 0) {
          piVar6 = piVar10;
        }
        lVar9 = (longlong)puVar13 - (longlong)piVar6;
        do {
          iVar11 = *piVar6;
          sVar1 = *(short *)((longlong)piVar6 + lVar9);
          if ((short)iVar11 != sVar1) break;
          piVar6 = (int *)((longlong)piVar6 + 2);
        } while (sVar1 != 0);
        piVar6 = piVar10;
        if ((short)iVar11 != sVar1) goto LAB_142445fda;
        bVar2 = true;
      }
      if ((((ulonglong)piVar12 & 2) != 0) &&
         (piVar12 = (int *)(ulonglong)((uint)piVar12 & 0xfffffffd), piVar6 != (int *)0x0)) {
        FMemory::Free(piVar6);
      }
      if ((((ulonglong)piVar12 & 1) != 0) && (puVar14 != (undefined2 *)0x0)) {
        FMemory::Free(puVar14);
      }
      if (bVar2) {
        *param_3 = 1;
      }
      goto LAB_142446028;
    }
  }
  *param_3 = 2;
LAB_142446028:
  FUN_14244a3b0(param_1,param_2,param_3,0);
  return;
}



// FUNCTION 1424460c0 Contains body=68 status=ok
// SIG undefined Contains(void)

ulonglong FHUDHitBox::Contains(float *param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  float local_res8;
  float fStackX_c;
  
  uVar1 = in_RAX & 0xffffffffffffff00;
  local_res8 = (float)param_2;
  if ((*param_1 <= local_res8) && (local_res8 <= *param_1 + param_1[2])) {
    fStackX_c = (float)((ulonglong)param_2 >> 0x20);
    if ((param_1[1] <= fStackX_c) && (uVar1 = 0, fStackX_c <= param_1[1] + param_1[3])) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



// FUNCTION 142446110 FUN_142446110 body=56 status=ok
// SIG undefined FUN_142446110(void)

void FUN_142446110(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1450ad0e0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 142446150 CreateCopy body=82 status=ok
// SIG undefined CreateCopy(void)

void TBaseUObjectMethodDelegateInstance<1,UGameEngine,FSceneViewport_*___cdecl(void),UGameViewportClient_*>
     ::CreateCopy(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1450aa9b0;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1424461b0 FUN_1424461b0 body=291 status=ok
// SIG undefined FUN_1424461b0(void)

longlong FUN_1424461b0(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                      float param_5,float param_6,undefined8 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = param_3;
  if (param_4 != 0) {
    lVar3 = param_4;
  }
  FUN_1417846f0(lVar3,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = FUN_142923000();
  lVar3 = FUN_1417985e0(uVar2,lVar3,0,0,0,0,0,0,0);
  *(byte *)(lVar3 + 0xba) = *(byte *)(lVar3 + 0xba) | 1;
  FUN_1423516b0(lVar3,param_1);
  uVar2 = *param_2;
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(byte *)(lVar3 + 0x24c) = *(byte *)(lVar3 + 0x24c) | 0x10;
  *(undefined8 *)(lVar3 + 0x70c) = uVar2;
  *(undefined4 *)(lVar3 + 0x714) = uVar1;
  FUN_14234b270(lVar3,param_3);
  if (0.0 < param_5) {
    FUN_142377330(lVar3,param_5);
  }
  if (0.0 < param_6) {
    FUN_142376e80(lVar3,param_5 + param_6,param_6,0);
  }
  FUN_142376ef0(lVar3,param_8);
  return lVar3;
}



// FUNCTION 1424462e0 FUN_1424462e0 body=221 status=ok
// SIG undefined FUN_1424462e0(void)

longlong FUN_1424462e0(undefined8 param_1,undefined8 param_2,char param_3,undefined4 param_4,
                      undefined8 param_5,byte param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1417846f0(param_2,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = APainCausingVolume::StaticClass();
  lVar2 = FUN_1417985e0(uVar1,param_2,0,0,0,0,0,0,0);
  *(byte *)(lVar2 + 0x2d8) = *(byte *)(lVar2 + 0x2d8) & 0xfe;
  *(byte *)(lVar2 + 0xba) = *(byte *)(lVar2 + 0xba) & 0xfd;
  *(undefined4 *)(lVar2 + 0x2dc) = param_4;
  *(byte *)(lVar2 + 0x2d8) = (param_6 | *(byte *)(lVar2 + 0x2d8)) & 0xfb | param_3 << 2;
  *(undefined8 *)(lVar2 + 0x2d0) = param_1;
  *(undefined8 *)(lVar2 + 0x2e0) = param_5;
  FUN_14234b150(lVar2);
  return lVar2;
}



// FUNCTION 1424463c0 FUN_1424463c0 body=2298 status=ok
// SIG undefined FUN_1424463c0(void)

undefined8 FUN_1424463c0(longlong *param_1,longlong param_2)

{
  void *_Dst;
  void *pvVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  short *psVar19;
  undefined2 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  wchar_t *pwVar24;
  short *psVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong local_res10;
  longlong local_res18;
  undefined8 local_res20;
  ulonglong in_stack_fffffffffffffef8;
  wchar_t *local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  uint local_c0;
  uint local_bc;
  short *local_b8;
  int local_b0;
  short *local_a8;
  int local_a0;
  longlong local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 local_80 [40];
  undefined1 local_58;
  uint local_54;
  
  uVar17 = 0;
  psVar25 = &DAT_143f3eda8;
  local_c0 = 0;
  local_c8 = 0;
  local_bc = 0;
  local_98 = 0;
  local_90 = 0;
  uVar21 = uVar17;
  uVar23 = uVar17;
  uVar27 = uVar17;
  local_res10 = param_2;
  if (0 < *(int *)(param_2 + 0x50)) {
    while( true ) {
      iVar13 = (int)uVar17;
      local_c0 = (2 - (uint)(iVar13 != 0)) + iVar13;
      if ((int)uVar23 < (int)local_c0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,uVar17);
      }
      uVar26 = local_c0;
      puVar20 = (undefined2 *)(local_c8 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
      *puVar20 = 0x3f;
      puVar20[1] = 0;
      iVar13 = *(int *)(uVar21 + *(longlong *)(param_2 + 0x48) + 8);
      iVar14 = 0;
      if (iVar13 != 0) {
        iVar14 = iVar13 + -1;
      }
      pvVar1 = *(void **)(uVar21 + *(longlong *)(param_2 + 0x48));
      if (iVar14 != 0) {
        lVar22 = (longlong)(int)local_c0;
        local_c0 = (local_c0 == 0) + local_c0 + iVar14;
        if ((int)local_bc < (int)local_c0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,uVar26);
        }
        _Dst = (void *)(local_c8 + (lVar22 - (ulonglong)(uVar26 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar14 * 2);
        *(undefined2 *)((longlong)iVar14 * 2 + (longlong)_Dst) = 0;
      }
      if (*(int *)(uVar21 + *(longlong *)(param_2 + 0x48) + 8) == 0) {
        puVar20 = &DAT_143f3eda8;
      }
      else {
        puVar20 = *(undefined2 **)(uVar21 + *(longlong *)(param_2 + 0x48));
      }
      FParse::Value(puVar20,L"GAME=",&local_98);
      uVar26 = (int)uVar27 + 1;
      if (*(int *)(param_2 + 0x50) <= (int)uVar26) break;
      uVar17 = (ulonglong)local_c0;
      uVar21 = uVar21 + 0x10;
      uVar23 = (ulonglong)local_bc;
      uVar27 = (ulonglong)uVar26;
    }
  }
  local_res20 = (**(code **)(*param_1 + 0x148))();
  lVar4 = UWorld::GetWorldSettings(local_res20,0,1);
  lVar22 = DAT_146b17150;
  local_res18 = DAT_146b17150;
  if (DAT_146b17150 != 0) {
    lVar5 = FUN_142937670();
    if ((*(int *)(*(longlong *)(lVar22 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar22 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1424465ab;
  }
  lVar22 = 0;
  local_res18 = 0;
LAB_1424465ab:
  uVar26 = (uint)(in_stack_fffffffffffffef8 >> 0x20);
  lVar28 = -1;
  lVar4 = *(longlong *)(lVar4 + 0x498);
  lVar5 = lVar4;
  if (1 < (int)local_90) {
    FUN_141e0ee20(&local_b8,&local_98);
    if (lVar22 != 0) {
      psVar19 = &DAT_143f3eda8;
      if (local_b0 != 0) {
        psVar19 = local_b8;
      }
      local_e8 = (wchar_t *)0x0;
      local_e0 = 0;
      if ((psVar19 != (short *)0x0) && (*psVar19 != 0)) {
        lVar18 = -1;
        do {
          lVar18 = lVar18 + 1;
        } while (psVar19[lVar18] != 0);
        uVar15 = (int)lVar18 + 1;
        local_e0 = (ulonglong)uVar15;
        if (0 < (int)uVar15) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
        }
        FGenericPlatformString::Memcpy(local_e8,psVar19,(longlong)(int)uVar15 * 2);
      }
      FUN_142882e70(lVar22,local_res20,1,&local_e8);
      if (local_e8 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
    psVar19 = &DAT_143f3eda8;
    if (local_b0 != 0) {
      psVar19 = local_b8;
    }
    uVar6 = UFadeInOutViewportClient::GetPrivateStaticClass();
    in_stack_fffffffffffffef8 = (ulonglong)uVar26 << 0x20;
    lVar22 = FUN_141799830(uVar6,0,psVar19,0,in_stack_fffffffffffffef8,0);
    if (lVar22 != 0) {
      lVar7 = UFadeInOutViewportClient::GetPrivateStaticClass();
      lVar18 = lVar22;
      do {
        lVar5 = lVar22;
        if (lVar18 == lVar7) break;
        lVar18 = *(longlong *)(lVar18 + 0x30);
        lVar5 = lVar4;
      } while (lVar18 != 0);
    }
    if (local_b8 != (short *)0x0) {
      FMemory::Free();
    }
  }
  lVar22 = lVar5;
  if (lVar5 != 0) {
    lVar18 = UFadeInOutViewportClient::GetPrivateStaticClass();
    lVar4 = lVar5;
    do {
      lVar7 = local_res18;
      if (lVar4 == lVar18) goto LAB_1424469de;
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  iVar13 = *(int *)(param_2 + 0x30);
  local_d8 = (void *)0x0;
  pvVar1 = *(void **)(param_2 + 0x28);
  local_d0 = CONCAT44(local_d0._4_4_,iVar13);
  if (iVar13 == 0) {
    local_d0 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,iVar13,0);
    _guard_xfg_dispatch_icall_nop(local_d8,pvVar1,(longlong)iVar13 * 2);
  }
  FUN_141671940(&local_e8,&local_d8,1);
  cVar3 = FString::StartsWith(&local_e8,L"UEDPIE",1);
  if (cVar3 == '\0') {
    iVar13 = (int)local_e0;
  }
  else {
    lVar4 = UWorld::BuildPIEPackagePrefix(&local_f8,*(undefined4 *)(param_1[6] + 600));
    uVar26 = *(int *)(lVar4 + 8) - 1;
    if (*(int *)(lVar4 + 8) == 0) {
      uVar26 = 0;
    }
    if (local_f8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    uVar12 = uVar26 + 0x7fffffff;
    uVar15 = (int)local_e0 - 1;
    if ((int)local_e0 == 0) {
      uVar15 = 0;
    }
    if (uVar26 < uVar15) {
      uVar15 = uVar26;
    }
    uVar26 = (int)local_e0 - 1;
    if ((int)local_e0 == 0) {
      uVar26 = 0;
    }
    uVar16 = uVar15;
    if ((uVar15 <= uVar12) && (uVar16 = uVar26, uVar12 < uVar26)) {
      uVar16 = uVar12;
    }
    local_f8 = (wchar_t *)0x0;
    local_88 = L"";
    if ((int)local_e0 != 0) {
      local_88 = local_e8;
    }
    iVar14 = uVar16 - uVar15;
    local_f0 = (ulonglong)(iVar14 + 1);
    if (iVar14 == 0) {
      local_f0 = 0;
    }
    iVar13 = (int)local_f0;
    pwVar24 = local_f8;
    if (0 < iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
      pwVar24 = local_f8;
      iVar13 = (int)local_f0;
      if (0 < (int)local_f0) {
        wcsncpy(local_f8,local_88 + (int)uVar15,(longlong)iVar14);
        pwVar24[iVar14] = L'\0';
      }
    }
    if (local_e8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_e0 = CONCAT44(local_f0._4_4_,iVar13);
    local_e8 = pwVar24;
  }
  pwVar24 = local_e8;
  local_f8 = (wchar_t *)0x0;
  local_f0 = CONCAT44(local_f0._4_4_,iVar13);
  if (iVar13 == 0) {
    local_f0 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,iVar13,0);
    _guard_xfg_dispatch_icall_nop(local_f8,pwVar24,(longlong)iVar13 * 2);
  }
  FUN_141e0eb40(&local_a8,&local_f8);
  if (local_f8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  lVar7 = local_res18;
  if (1 < local_a0) {
    if (local_res18 != 0) {
      psVar19 = &DAT_143f3eda8;
      if (local_a0 != 0) {
        psVar19 = local_a8;
      }
      local_f8 = (wchar_t *)0x0;
      local_f0 = 0;
      if ((psVar19 != (short *)0x0) && (*psVar19 != 0)) {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (psVar19[lVar4] != 0);
        uVar26 = (int)lVar4 + 1;
        local_f0 = (ulonglong)uVar26;
        if (0 < (int)uVar26) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
        }
        FGenericPlatformString::Memcpy(local_f8,psVar19,(longlong)(int)uVar26 * 2);
      }
      FUN_142882e70(lVar7,local_res20,1,&local_f8);
      if (local_f8 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
    psVar19 = &DAT_143f3eda8;
    if (local_a0 != 0) {
      psVar19 = local_a8;
    }
    uVar6 = UFadeInOutViewportClient::GetPrivateStaticClass();
    in_stack_fffffffffffffef8 = in_stack_fffffffffffffef8 & 0xffffffff00000000;
    lVar4 = FUN_141799830(uVar6,0,psVar19,0,in_stack_fffffffffffffef8,0);
    if (lVar4 != 0) {
      lVar8 = UFadeInOutViewportClient::GetPrivateStaticClass();
      lVar18 = lVar4;
      do {
        lVar22 = lVar4;
        if (lVar18 == lVar8) break;
        lVar18 = *(longlong *)(lVar18 + 0x30);
        lVar22 = lVar5;
      } while (lVar18 != 0);
    }
  }
  if (local_a8 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_e8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  param_2 = local_res10;
  if (local_d8 != (void *)0x0) {
    FMemory::Free();
    param_2 = local_res10;
  }
LAB_1424469de:
  if (lVar22 != 0) {
    lVar5 = UFadeInOutViewportClient::GetPrivateStaticClass();
    lVar4 = lVar22;
    do {
      if (lVar4 == lVar5) goto LAB_142446a46;
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  puVar9 = (undefined8 *)FUN_141e0f120(&local_f8);
  if (*(int *)(puVar9 + 1) == 0) {
    puVar20 = &DAT_143f3eda8;
  }
  else {
    puVar20 = (undefined2 *)*puVar9;
  }
  uVar6 = UFadeInOutViewportClient::GetPrivateStaticClass();
  lVar22 = FUN_141799830(uVar6,0,puVar20,0,in_stack_fffffffffffffef8 & 0xffffffff00000000,0);
  if (local_f8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
LAB_142446a46:
  if (lVar22 != 0) {
    lVar5 = UFadeInOutViewportClient::GetPrivateStaticClass();
    lVar4 = lVar22;
LAB_142446a53:
    if (lVar4 != lVar5) goto code_r0x000142446a5c;
    if (*(int *)(param_2 + 0x60) != 0) {
      psVar25 = *(short **)(param_2 + 0x58);
    }
    local_f0 = 0;
    local_f8 = (wchar_t *)0x0;
    if ((psVar25 != (short *)0x0) && (*psVar25 != 0)) {
      do {
        lVar28 = lVar28 + 1;
      } while (psVar25[lVar28] != 0);
      uVar26 = (int)lVar28 + 1;
      local_f0 = (ulonglong)uVar26;
      if (0 < (int)uVar26) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
      }
      FGenericPlatformString::Memcpy(local_f8,psVar25,(longlong)(int)uVar26 * 2);
    }
    lVar4 = *param_1;
    uVar6 = FUN_141671940(&local_b8,param_2 + 0x28,1);
    plVar11 = (longlong *)
              (**(code **)(lVar4 + 800))(param_1,&local_res10,lVar22,uVar6,&local_c8,&local_f8);
    lVar22 = *plVar11;
    if (local_b8 != (short *)0x0) {
      FMemory::Free();
    }
    if (local_f8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    goto LAB_142446a6d;
  }
LAB_142446a65:
  lVar22 = UFadeInOutViewportClient::GetPrivateStaticClass();
LAB_142446a6d:
  uVar6 = local_res20;
  if (lVar7 != 0) {
    if (lVar22 != 0) {
      lVar5 = UFadeInOutViewportClient::GetPrivateStaticClass();
      lVar4 = lVar22;
      do {
        lVar28 = lVar22;
        if (lVar4 == lVar5) goto LAB_142446aa9;
        lVar4 = *(longlong *)(lVar4 + 0x30);
      } while (lVar4 != 0);
    }
    lVar28 = 0;
LAB_142446aa9:
    uVar10 = UObjectBaseUtility::GetPathName(lVar28,&local_d8,0);
    uVar6 = local_res20;
    FUN_142882e70(lVar7,local_res20,2,uVar10);
    if (local_d8 != (void *)0x0) {
      FMemory::Free();
    }
    local_d8 = (void *)0x0;
    local_d0 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"LoadForAllGameModes",0x28);
    FUN_142882e70(lVar7,uVar6,2,&local_d8);
    if (local_d8 != (void *)0x0) {
      FMemory::Free();
    }
  }
  FActorSpawnParameters::FActorSpawnParameters(local_80);
  local_54 = local_54 | 0x40;
  local_58 = 1;
  lVar4 = 0;
  if (lVar22 != 0) {
    lVar28 = UFadeInOutViewportClient::GetPrivateStaticClass();
    lVar5 = lVar22;
    do {
      lVar4 = lVar22;
      if (lVar5 == lVar28) break;
      lVar5 = *(longlong *)(lVar5 + 0x30);
      lVar4 = 0;
    } while (lVar5 != 0);
  }
  uVar6 = UWorld::SpawnActor(uVar6,lVar4,0,0,local_80);
  if (local_98 != 0) {
    FMemory::Free();
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  FURL::~FURL(param_2);
  return uVar6;
code_r0x000142446a5c:
  lVar4 = *(longlong *)(lVar4 + 0x30);
  if (lVar4 == 0) goto LAB_142446a65;
  goto LAB_142446a53;
}



// FUNCTION 142446cc0 FUN_142446cc0 body=1571 status=ok
// SIG undefined FUN_142446cc0(void)

void FUN_142446cc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  int *piVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  int local_res8 [4];
  int local_res18;
  int local_res1c;
  longlong local_res20;
  longlong *local_d8;
  int local_d0;
  longlong *local_c8;
  int local_c0;
  code *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  longlong *local_70;
  
  if (*(longlong *)(param_1 + 0x1200) == 0) {
    FUN_1424472f0();
  }
  plVar1 = *(longlong **)(param_1 + 0x1208);
  lVar8 = *(longlong *)(param_1 + 0x1200);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x11e8);
  plVar13 = plVar4;
  plVar9 = (longlong *)0x0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar4[1];
    bVar14 = iVar3 == 0;
    if (bVar14) {
      *(int *)(plVar4 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar13 = (longlong *)0x0, plVar9 = (longlong *)0x0, !bVar14) {
      LOCK();
      bVar14 = iVar3 == (int)plVar4[1];
      if (bVar14) {
        *(int *)(plVar4 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar14) {
        plVar13 = plVar4;
        if (plVar4 != (longlong *)0x0) {
          plVar9 = *(longlong **)(param_1 + 0x11e0);
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar4[1];
      bVar14 = iVar3 == 0;
      if (bVar14) {
        *(int *)(plVar4 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  uStack_b0 = 0;
  local_d8 = (longlong *)0x0;
  local_b8 = FUN_142457640;
  local_res20 = lVar8;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_d0 = 3;
  local_d8 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)local_b8;
    plVar4[3] = CONCAT44(uStack_ac,uStack_b0);
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143fcff08;
  }
  SScrollBar::SetOnUserScrolled(plVar9,&local_d8);
  if (local_d0 == 0) {
LAB_142446e02:
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free(local_d8);
    }
  }
  else if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x28))(local_d8,0);
    if (local_d8 != (longlong *)0x0) {
      local_d8 = (longlong *)FMemory::Realloc(local_d8,0,0);
    }
    local_d0 = 0;
    goto LAB_142446e02;
  }
  uVar6 = FCommandLine::Get();
  cVar2 = FParse::Value(uVar6,L"SAVEWINPOS=",local_res8);
  if ((cVar2 != '\0') && (0 < local_res8[0])) {
    plVar4 = (longlong *)FUN_142874ac0(param_1);
    (**(code **)(*plVar4 + 0x2c8))(plVar4,&local_res18);
    if ((-1 < local_res18) && (-1 < local_res1c)) {
      plVar4 = (longlong *)FUN_142874ac0(param_1);
      piVar7 = (int *)(**(code **)(*plVar4 + 0x2c8))(plVar4,local_88);
      iVar3 = *piVar7;
      plVar4 = (longlong *)FUN_142874ac0(param_1);
      lVar5 = (**(code **)(*plVar4 + 0x2c8))(plVar4,local_80);
      SWindow::MoveWindowTo(plVar9,CONCAT44((float)*(int *)(lVar5 + 4),(float)iVar3));
    }
    local_b8 = FUN_142457710;
    uStack_b0 = 0;
    local_c8 = (longlong *)0x0;
    plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_c0 = 3;
    local_c8 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      plVar4[2] = (longlong)local_b8;
      plVar4[3] = CONCAT44(uStack_ac,uStack_b0);
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[5] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_143fcff08;
    }
    SDockingTabStack::Tick(plVar9,&local_c8);
    if (local_c0 != 0) {
      if (local_c8 == (longlong *)0x0) goto LAB_142446f88;
      (**(code **)(*local_c8 + 0x28))(local_c8,0);
      if (local_c8 != (longlong *)0x0) {
        local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
      }
      local_c0 = 0;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
  }
LAB_142446f88:
  lVar5 = operator_new(0x3a8);
  if (lVar5 == 0) {
    lVar8 = 0;
  }
  else {
    lVar12 = param_2 + 0x28;
    if (param_2 == 0) {
      lVar12 = 0;
    }
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    local_98 = lVar8;
    local_90 = plVar1;
    lVar8 = FUN_1427ede60(lVar5,lVar12,&local_98);
  }
  plVar4 = (longlong *)0x0;
  plVar9 = (longlong *)operator_new(0x18);
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_144fb23d8;
    plVar9[2] = lVar8;
    plVar4 = plVar9;
  }
  plVar9 = (longlong *)(param_1 + 0x11f0);
  local_a8 = lVar8;
  local_a0 = plVar4;
  SharedPointerInternals::EnableSharedFromThis(&local_a8,lVar8,lVar8);
  if (plVar9 != &local_a8) {
    *plVar9 = lVar8;
    local_a8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x11f8,&local_a0);
    plVar4 = local_a0;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar4 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar7 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  lVar8 = *plVar9 + 8;
  if (*plVar9 == 0) {
    lVar8 = 0;
  }
  *(longlong *)(param_2 + 0xb0) = lVar8;
  plVar4 = *(longlong **)(param_1 + 0x11f8);
  lVar8 = *plVar9;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar5 = lVar8 + 0x158;
  if (lVar8 == 0) {
    lVar5 = 0;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *(longlong *)(local_res20 + 0x2f0) = lVar5;
  plVar11 = *(longlong **)(local_res20 + 0x2f8);
  if (plVar4 != plVar11) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar11 = *(longlong **)(local_res20 + 0x2f8);
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar7 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
    *(longlong **)(local_res20 + 0x2f8) = plVar4;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar4 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar7 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar4 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar7 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x2d0))(*(longlong **)(param_1 + 0x7b0),*plVar9);
  local_b8 = FUN_142457840;
  uStack_b0 = 0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_70 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_14428ae88;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)local_b8;
    plVar4[3] = CONCAT44(uStack_ac,uStack_b0);
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar8;
    *plVar4 = (longlong)&PTR_FUN_14428aed0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465351a8,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_78);
    iVar3 = DAT_1465351b0;
    lVar8 = (longlong)DAT_1465351b0;
    DAT_1465351b0 = DAT_1465351b0 + 1;
    if (DAT_1465351b4 < DAT_1465351b0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465351a8,iVar3);
    }
    puVar10 = (undefined8 *)(lVar8 * 0x10 + DAT_1465351a8);
    *puVar10 = plVar4;
    *(undefined4 *)(puVar10 + 1) = 3;
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar13 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar7 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar1 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar7 = (int *)((longlong)plVar1 + 0xc);
      iVar3 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  return;
}



// FUNCTION 1424472f0 FUN_1424472f0 body=3035 status=ok
// SIG undefined FUN_1424472f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424472f0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong **pplVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auStack_578 [32];
  longlong local_558;
  longlong local_550;
  undefined4 local_548;
  longlong local_540;
  longlong local_538;
  longlong local_530;
  undefined1 local_528;
  undefined1 local_520;
  longlong local_518;
  undefined1 local_508;
  undefined8 local_500;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  longlong local_4f0;
  longlong *local_4e8;
  longlong *plStack_4e0;
  longlong *local_4d8;
  longlong *plStack_4d0;
  longlong *local_4c8;
  longlong *local_4c0;
  undefined8 local_4b8;
  undefined1 local_4b0;
  undefined8 local_4a8;
  undefined4 local_4a0;
  longlong *local_498;
  longlong *local_488;
  longlong *local_480;
  longlong *local_470;
  longlong *local_468;
  longlong *local_458;
  longlong *local_450;
  longlong *local_440;
  longlong *plStack_438;
  longlong *local_430;
  longlong *plStack_428;
  undefined1 local_418 [272];
  longlong *local_308;
  undefined1 local_2f8 [32];
  longlong *local_2d8;
  undefined1 local_2c0 [24];
  undefined1 local_2a8 [272];
  longlong *local_198;
  undefined1 local_180 [24];
  undefined1 local_168 [264];
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_578;
  local_4f0 = param_1;
  if (*(int *)(param_1 + 0x1210) == 0) {
LAB_14244737c:
    local_508 = 1;
    if (DAT_1468c2180 == 0) goto LAB_14244738f;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146aee198) &&
       (_Init_thread_header(&DAT_146aee198), DAT_146aee198 == -1)) {
      FName::FName(&DAT_146aee190,L"MovieSceneCapture",1);
      _Init_thread_footer(&DAT_146aee198);
    }
    uVar3 = DAT_146aee190;
    uVar7 = FUN_14168dc80();
    plVar8 = (longlong *)FUN_141690010(uVar7,uVar3);
    cVar4 = (**(code **)(*plVar8 + 0x78))(plVar8);
    if (cVar4 != '\0') goto LAB_14244737c;
  }
  local_508 = 0;
LAB_14244738f:
  plVar8 = (longlong *)operator_new(0x240);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_1440f90d0;
    if (plVar8 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4610();
    }
  }
  plVar12 = plVar8 + 2;
  local_488 = plVar12;
  local_480 = plVar8;
  FUN_14044f790(&local_488,plVar12);
  local_558 = 0x230;
  SWidget::SetDebugInfo
            (plVar12,"SOverlay",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp",0xd9);
  lVar9 = SOverlay::FArguments::FArguments(local_168);
  local_548 = *(undefined4 *)(lVar9 + 0x90);
  local_518 = lVar9 + 0xf8;
  local_530 = lVar9 + 0xe8;
  local_520 = *(undefined1 *)(lVar9 + 0xf1);
  local_538 = lVar9 + 200;
  local_540 = lVar9 + 0x98;
  local_528 = *(undefined1 *)(lVar9 + 0xf0);
  local_550 = lVar9 + 0x78;
  local_558 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar12,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  SOverlay::Construct(plVar12,lVar9);
  if (((char)plVar8[5] < '\0') || (cVar4 = (**(code **)(*plVar12 + 0x1e8))(plVar12), cVar4 != '\0'))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar5;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar8 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_168);
  local_500 = &LAB_14244f590;
  uStack_4f8 = 0;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14243ce20(local_2a8);
  plVar10 = (longlong *)FMemory::Realloc(0,0x30);
  local_498 = plVar10;
  if (plVar10 != (longlong *)0x0) {
    *plVar10 = (longlong)&PTR_FUN_1450aa9b0;
    FWeakObjectPtr::operator=(plVar10 + 1,local_4f0);
    *(undefined4 *)(plVar10 + 2) = (undefined4)local_500;
    *(undefined4 *)((longlong)plVar10 + 0x14) = local_500._4_4_;
    *(undefined4 *)(plVar10 + 3) = uStack_4f8;
    *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_4f4;
    plVar10[4] = param_2;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar10[5] = lVar11;
  }
  local_4a8 = 0;
  local_4b8 = 0;
  local_4b0 = 1;
  local_4a0 = 0;
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x30))(plVar10,&local_4a8);
  }
  *(undefined1 *)(lVar9 + 0x120) = local_4b0;
  *(undefined8 *)(lVar9 + 0x118) = local_4b8;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x128,&local_4a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4a8);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x28))(plVar10,0);
    local_498 = (longlong *)FMemory::Realloc(plVar10,0,0);
    if (local_498 != (longlong *)0x0) {
      FMemory::Free(local_498);
    }
  }
  pplVar2 = (longlong **)(lVar9 + 0x108);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_4e8 = plVar12;
  plStack_4e0 = plVar8;
  if (&local_4e8 != pplVar2) {
    local_4e8 = *pplVar2;
    plStack_4e0 = *(longlong **)(lVar9 + 0x110);
    *pplVar2 = plVar12;
    *(longlong **)(lVar9 + 0x110) = plVar8;
    local_440 = plVar12;
    plStack_438 = plVar8;
  }
  plVar12 = plStack_4e0;
  if (plStack_4e0 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_4e0 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_4e0)(plStack_4e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_4e0 + 8))(plStack_4e0,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar8 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar12 = (longlong *)operator_new(0x450);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar12 + 1) = 1;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_1450ad108;
    if (plVar12 != (longlong *)0xfffffffffffffff0) {
      FUN_1427ef1e0();
    }
  }
  plVar10 = plVar12 + 2;
  local_470 = plVar10;
  local_468 = plVar12;
  FUN_14044f790(&local_470,plVar10);
  local_558 = 0x440;
  SWidget::SetDebugInfo
            (plVar10,"SGameLayerManager",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp",0xdb);
  local_548 = *(undefined4 *)(lVar9 + 0x90);
  local_518 = lVar9 + 0xf8;
  local_530 = lVar9 + 0xe8;
  local_520 = *(undefined1 *)(lVar9 + 0xf1);
  local_538 = lVar9 + 200;
  local_540 = lVar9 + 0x98;
  local_528 = *(undefined1 *)(lVar9 + 0xf0);
  local_550 = lVar9 + 0x78;
  local_558 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar10,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_1427f69c0(plVar10,lVar9);
  if (((char)plVar12[5] < '\0') || (cVar4 = (**(code **)(*plVar10 + 0x1e8))(plVar10), cVar4 != '\0')
     ) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar5;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar13 = plVar12 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_180);
  if (local_198 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_198 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_198)(local_198);
      LOCK();
      piVar1 = (int *)((longlong)local_198 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_198 + 8))(local_198,1);
      }
    }
  }
  FUN_140456c70(local_2a8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_500 = (undefined1 *)FUN_14200e4c0(local_418);
  *(undefined1 *)((longlong)local_500 + 0x130) = local_508;
  *(undefined1 *)((longlong)local_500 + 0x134) = local_508;
  pplVar2 = (longlong **)((longlong)local_500 + 0x108);
  *(undefined1 *)((longlong)local_500 + 0x131) = 0;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_4d8 = plVar10;
  plStack_4d0 = plVar12;
  if (&local_4d8 != pplVar2) {
    local_4d8 = *pplVar2;
    plStack_4d0 = *(longlong **)((longlong)local_500 + 0x110);
    *pplVar2 = plVar10;
    *(longlong **)((longlong)local_500 + 0x110) = plVar12;
    local_430 = plVar10;
    plStack_428 = plVar12;
  }
  plVar10 = plStack_4d0;
  if (plStack_4d0 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_4d0 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_4d0)(plStack_4d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_4d0 + 8))(plStack_4d0,1);
      }
    }
  }
  lVar9 = (longlong)local_500;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar12 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  plVar10 = (longlong *)operator_new(0x370);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar10 + 1) = 1;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_144f65c70;
    if (plVar10 != (longlong *)0xfffffffffffffff0) {
      SViewport::SViewport();
    }
  }
  plVar13 = plVar10 + 2;
  local_458 = plVar13;
  local_450 = plVar10;
  FUN_14044f790(&local_458,plVar13);
  local_558 = 0x360;
  SWidget::SetDebugInfo
            (plVar13,"SViewport",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp",0xe2);
  local_518 = lVar9 + 0xf8;
  local_530 = lVar9 + 0xe8;
  local_538 = lVar9 + 200;
  local_540 = lVar9 + 0x98;
  local_550 = lVar9 + 0x78;
  local_558 = lVar9 + 0x60;
  local_520 = *(undefined1 *)((longlong)local_500 + 0xf1);
  local_528 = *(undefined1 *)((longlong)local_500 + 0xf0);
  local_548 = *(undefined4 *)((longlong)local_500 + 0x90);
  SWidget::SWidgetConstruct(plVar13,local_500,(longlong)local_500 + 0x30,(longlong)local_500 + 0x40)
  ;
  FUN_141978d50(plVar13,local_500);
  if (((char)plVar10[5] < '\0') || (cVar4 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar4 != '\0')
     ) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar5;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar16 = plVar10 + 1;
    lVar9 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_2c0);
  if (local_2d8 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_2d8 + 1;
    lVar9 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_2d8)(local_2d8);
      LOCK();
      piVar1 = (int *)((longlong)local_2d8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_2d8 + 8))(local_2d8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_2f8);
  if (local_308 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_308 + 1;
    lVar9 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_308)(local_308);
      LOCK();
      piVar1 = (int *)((longlong)local_308 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_308 + 8))(local_308,1);
      }
    }
  }
  FUN_140456c70(local_418);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_4c8 = plVar13;
  local_4c0 = plVar10;
  if ((longlong **)(local_4f0 + 0x1200) != &local_4c8) {
    *(longlong **)(local_4f0 + 0x1200) = plVar13;
    local_4c8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_4f0 + 0x1208,&local_4c0);
  }
  plVar13 = local_4c0;
  plVar16 = (longlong *)0x0;
  if (local_4c0 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_4c0 + 1;
    lVar9 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_4c0)(local_4c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_4c0 + 8))(local_4c0,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar13 = *(longlong **)(local_4f0 + 0x11e8);
  plVar14 = plVar16;
  plVar15 = plVar13;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar13[1];
    bVar17 = iVar6 == 0;
    if (bVar17) {
      *(int *)(plVar13 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar15 = plVar16, !bVar17) {
      LOCK();
      bVar17 = iVar6 == (int)plVar13[1];
      if (bVar17) {
        *(int *)(plVar13 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar17) {
        plVar14 = (longlong *)0x0;
        plVar15 = plVar13;
        if (plVar13 != (longlong *)0x0) {
          plVar14 = *(longlong **)(local_4f0 + 0x11e0);
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar13[1];
      bVar17 = iVar6 == 0;
      if (bVar17) {
        *(int *)(plVar13 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  *(longlong **)(param_2 + 0xc0) = plVar14;
  plVar13 = *(longlong **)(param_2 + 200);
  if (plVar15 != plVar13) {
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
      plVar13 = *(longlong **)(param_2 + 200);
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    *(longlong **)(param_2 + 200) = plVar15;
  }
  *(longlong **)(param_2 + 0xd0) = plVar8 + 2;
  plVar13 = *(longlong **)(param_2 + 0xd8);
  if (plVar8 != plVar13) {
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
      UNLOCK();
      plVar13 = *(longlong **)(param_2 + 0xd8);
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    *(longlong **)(param_2 + 0xd8) = plVar8;
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar15 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar8 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar13 = plVar12 + 0x60;
  if (plVar12 == (longlong *)0xfffffffffffffff0) {
    plVar13 = plVar16;
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  *(longlong **)(param_2 + 0xe0) = plVar13;
  plVar13 = *(longlong **)(param_2 + 0xe8);
  if (plVar12 != plVar13) {
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      plVar13 = *(longlong **)(param_2 + 0xe8);
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    *(longlong **)(param_2 + 0xe8) = plVar12;
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar12 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar10 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar12 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar8 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 142447ed0 FUN_142447ed0 body=6349 status=ok
// SIG undefined FUN_142447ed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142447ed0(longlong *param_1)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined2 *puVar12;
  char cVar13;
  AKRESULT AVar14;
  undefined8 uVar15;
  short *psVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  ErrorCode EVar21;
  ErrorLevel EVar22;
  uint uVar23;
  longlong lVar24;
  undefined2 *puVar25;
  undefined *puVar26;
  longlong **pplVar27;
  char *pcVar28;
  ulong uVar29;
  __uint64 _Var30;
  byte bVar31;
  longlong lVar32;
  bool bVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStackY_cf8 [32];
  ulong uVar39;
  undefined1 in_stack_fffffffffffff330;
  char local_c88;
  char local_c87;
  undefined1 local_c86;
  char local_c85;
  undefined1 local_c84;
  undefined1 local_c83;
  undefined1 local_c82;
  byte local_c81;
  uint local_c80;
  int local_c7c;
  int local_c78;
  undefined1 local_c74 [4];
  int local_c70;
  int local_c6c;
  float local_c68 [2];
  undefined8 *local_c60;
  float local_c58;
  undefined1 local_c54;
  float local_c50;
  undefined1 local_c4c;
  longlong local_c48;
  ulonglong local_c40;
  longlong local_c38;
  ulonglong local_c30;
  longlong local_c28 [16];
  undefined2 *local_ba8;
  undefined8 local_ba0;
  undefined2 *local_b98;
  undefined8 local_b90;
  undefined2 *local_b88;
  undefined8 local_b80;
  undefined2 *local_b78;
  undefined8 local_b70;
  undefined2 *local_b68;
  undefined8 local_b60;
  undefined2 *local_b58;
  undefined8 local_b50;
  undefined4 *local_b48;
  undefined1 *puStack_b40;
  undefined1 local_b38 [4];
  undefined1 local_b34 [4];
  undefined1 local_b30 [4];
  undefined1 local_b2c [4];
  longlong local_b28;
  undefined1 local_b20 [24];
  undefined1 local_b08;
  longlong *local_b00;
  int local_af8;
  longlong *local_af0;
  longlong local_ae8;
  undefined1 *local_ae0;
  undefined1 local_ad8 [8];
  longlong *local_ad0;
  longlong local_ac0;
  longlong local_ab8;
  longlong *local_ab0;
  undefined4 *local_aa8;
  longlong *local_aa0;
  undefined4 *local_a98;
  undefined8 local_a90;
  longlong local_a88;
  longlong *local_a80;
  undefined4 *local_a78;
  longlong *local_a70;
  undefined4 *local_a68;
  longlong *local_a60;
  undefined4 *local_a58;
  undefined1 local_a50 [8];
  undefined1 local_a48 [8];
  undefined1 local_a40 [8];
  undefined1 local_a38 [16];
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined4 local_a18;
  undefined4 uStack_a14;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  undefined1 local_a08 [8];
  longlong *local_a00;
  undefined1 local_9f8 [8];
  undefined8 local_9f0;
  undefined8 local_9e8;
  int local_9d0;
  int local_9cc;
  int local_9c8;
  int local_9c4;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined1 local_998 [8];
  longlong *local_990;
  undefined1 local_980 [8];
  longlong *local_978;
  undefined1 local_968 [8];
  longlong *local_960;
  undefined1 local_950 [8];
  longlong *local_948;
  undefined1 local_938 [8];
  longlong *local_930;
  undefined1 local_920 [8];
  longlong *local_918;
  undefined1 local_908 [8];
  longlong *local_900;
  undefined1 local_8f0 [8];
  longlong *local_8e8;
  undefined1 local_8d8 [8];
  longlong *local_8d0;
  undefined1 local_8c0 [8];
  longlong *local_8b8;
  undefined1 local_8a8 [8];
  longlong *local_8a0;
  undefined1 local_890 [8];
  longlong *local_888;
  undefined1 local_878 [8];
  longlong *local_870;
  undefined1 local_860 [16];
  undefined1 local_850 [16];
  undefined1 local_840 [24];
  undefined1 local_828 [24];
  undefined1 local_810 [24];
  undefined1 local_7f8 [136];
  undefined1 local_770 [136];
  undefined1 local_6e8 [136];
  undefined1 local_660 [136];
  undefined1 local_5d8 [136];
  undefined1 local_550 [136];
  undefined1 local_4c8 [144];
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_418;
  undefined8 local_410;
  undefined4 local_408;
  undefined4 local_404;
  longlong local_3f8;
  undefined4 local_3f0;
  undefined4 local_3e8 [4];
  undefined1 local_3d8 [8];
  longlong *local_3d0;
  char local_3c0;
  undefined4 local_3b8 [4];
  undefined1 local_3a8 [8];
  longlong *local_3a0;
  char local_390;
  undefined4 local_388 [4];
  undefined1 local_378 [8];
  longlong *local_370;
  char local_360;
  undefined4 local_358 [4];
  undefined1 local_348 [8];
  longlong *local_340;
  char local_330;
  undefined4 local_328 [4];
  undefined1 local_318 [8];
  longlong *local_310;
  char local_300;
  undefined4 local_2f8 [4];
  undefined1 local_2e8 [24];
  undefined1 local_2d0;
  undefined4 local_2c8;
  undefined1 local_2b8 [24];
  undefined1 local_2a0;
  undefined4 local_298;
  undefined1 local_288 [24];
  undefined1 local_270;
  undefined1 local_268 [40];
  char local_240 [240];
  undefined1 local_150 [104];
  undefined1 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined1 local_d0;
  undefined1 local_a8 [16];
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStackY_cf8;
  local_c70 = 0;
  local_c7c = DAT_1465351f0;
  local_c78 = DAT_1465351f4;
  local_c80 = DAT_1465351f8;
  FUN_142445e10(&local_c7c,&local_c78,&local_c80);
  if (((local_c7c != DAT_1465351f0) || (local_c78 != DAT_1465351f4)) || (local_c80 != DAT_1465351f8)
     ) {
    FSystemResolution::RequestResolutionChange();
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    (**(code **)(*DAT_1468b1f88 + 0x38))();
  }
  FText::FText(local_ad8);
  uVar39 = 0x468e2410;
  FConfigCacheIni::GetText
            (DAT_1468b6148,L"/Script/EngineSettings.GeneralProjectSettings",L"ProjectDisplayedTitle"
            );
  cVar13 = FText::IsEmpty(local_ad8);
  bVar33 = cVar13 == '\0';
  if (bVar33) {
    FText::FText(local_920,local_ad8);
  }
  else {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_908,L"{GameName}",L"UnrealEd");
  }
  FText::FText(local_938);
  if ((bVar33) && (local_918 != (longlong *)0x0)) {
    LOCK();
    plVar20 = local_918 + 1;
    lVar32 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar32 == 1) {
      (**(code **)*local_918)(local_918);
      LOCK();
      piVar1 = (int *)((longlong)local_918 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_918 + 8))(local_918);
      }
    }
  }
  if ((!bVar33) && (local_900 != (longlong *)0x0)) {
    LOCK();
    plVar20 = local_900 + 1;
    lVar32 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar32 == 1) {
      (**(code **)*local_900)(local_900);
      LOCK();
      piVar1 = (int *)((longlong)local_900 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_900 + 8))(local_900);
      }
    }
  }
  FText::FText(local_950);
  local_c28[0] = 0;
  local_c28[1] = 3;
  lVar32 = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c28);
  FGenericPlatformString::Memcpy(local_c28[0],&DAT_1450a3d14,6);
  FText::FromString(local_968,local_c28);
  if (local_c28[0] != 0) {
    FMemory::Free();
  }
  local_c48 = 0;
  local_438 = 0;
  local_430 = 0;
  local_418 = 0;
  local_410 = 0;
  local_408 = 0xffffffff;
  local_404 = 0;
  local_3f8 = 0;
  local_3f0 = 0;
  local_c40 = 0;
  if (DAT_146299580 != 0) {
    lVar24 = -1;
    do {
      lVar24 = lVar24 + 1;
    } while ((&DAT_146299580)[lVar24] != 0);
    uVar23 = (int)lVar24 + 1;
    local_c40 = (ulonglong)uVar23;
    if (0 < (int)uVar23) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c48,0);
    }
    FGenericPlatformString::Memcpy(local_c48,&DAT_146299580,(longlong)(int)uVar23 * 2);
  }
  uVar15 = FText::FromString(local_8f0,&local_c48);
  local_3e8[0] = 4;
  FText::FText(local_3d8,uVar15);
  local_3c0 = '\x01';
  local_c28[2] = 0;
  local_c28[3] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c28 + 2,0);
  FGenericPlatformString::Memcpy(local_c28[2],L"GameName",0x12);
  local_ab0 = local_c28 + 2;
  local_aa8 = local_3e8;
  FUN_1407484b0(&local_438,local_b38,&local_ab0);
  if (local_c28[2] != 0) {
    FMemory::Free();
  }
  if ((local_3c0 != '\0') && (local_3c0 = '\0', local_3d0 != (longlong *)0x0)) {
    LOCK();
    plVar20 = local_3d0 + 1;
    lVar24 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      (**(code **)*local_3d0)(local_3d0);
      LOCK();
      piVar1 = (int *)((longlong)local_3d0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_3d0 + 8))(local_3d0,1);
      }
    }
  }
  if (local_8e8 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_8e8 + 1;
    lVar24 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      (**(code **)*local_8e8)(local_8e8);
      LOCK();
      piVar1 = (int *)((longlong)local_8e8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_8e8 + 8))(local_8e8,1);
      }
    }
  }
  if (local_c48 != 0) {
    FMemory::Free();
  }
  local_3b8[0] = 4;
  FText::FText(local_3a8,local_968);
  local_390 = '\x01';
  local_c28[4] = 0;
  local_c28[5] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c28 + 4,0);
  FGenericPlatformString::Memcpy(local_c28[4],L"PlatformArchitecture",0x2a);
  local_a80 = local_c28 + 4;
  local_a78 = local_3b8;
  FUN_1407484b0(&local_438,local_b34,&local_a80);
  if (local_c28[4] != 0) {
    FMemory::Free();
  }
  if ((local_390 != '\0') && (local_390 = '\0', local_3a0 != (longlong *)0x0)) {
    LOCK();
    plVar20 = local_3a0 + 1;
    lVar24 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      (**(code **)*local_3a0)(local_3a0);
      LOCK();
      piVar1 = (int *)((longlong)local_3a0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_3a0 + 8))(local_3a0,1);
      }
    }
  }
  uVar15 = FUN_141eca160(local_a40,DAT_146ab62cc);
  uVar15 = FText::FromName(local_8d8,uVar15);
  local_388[0] = 4;
  FText::FText(local_378,uVar15);
  local_360 = '\x01';
  local_c28[6] = 0;
  local_c28[7] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c28 + 6,0);
  FGenericPlatformString::Memcpy(local_c28[6],L"RHIName",0x10);
  _Var30 = 0;
  uVar29 = (ulong)&local_aa0;
  local_a98 = local_388;
  EVar22 = (ErrorLevel)local_b30;
  local_aa0 = local_c28 + 6;
  FUN_1407484b0(&local_438);
  lVar24 = local_c28[6];
  if (local_c28[6] != 0) {
    FMemory::Free();
  }
  EVar21 = (ErrorCode)lVar24;
  if ((local_360 != '\0') && (local_360 = '\0', local_370 != (longlong *)0x0)) {
    LOCK();
    plVar20 = local_370 + 1;
    lVar24 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      plVar20 = local_370;
      (**(code **)*local_370)();
      EVar21 = (ErrorCode)plVar20;
      LOCK();
      piVar1 = (int *)((longlong)local_370 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        EVar22 = 1;
        (**(code **)(*local_370 + 8))();
        EVar21 = (ErrorCode)local_370;
      }
    }
  }
  if (local_8d0 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_8d0 + 1;
    lVar24 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      plVar20 = local_8d0;
      (**(code **)*local_8d0)();
      EVar21 = (ErrorCode)plVar20;
      LOCK();
      piVar1 = (int *)((longlong)local_8d0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        EVar22 = 1;
        (**(code **)(*local_8d0 + 8))();
        EVar21 = (ErrorCode)local_8d0;
      }
    }
  }
  AVar14 = AK::Monitor::PostCode(EVar21,EVar22,uVar29,_Var30,uVar39,(bool)in_stack_fffffffffffff330)
  ;
  psVar16 = (short *)FUN_1415bb3d0(AVar14);
  local_c30 = 0;
  local_c38 = 0;
  if ((psVar16 != (short *)0x0) && (*psVar16 != 0)) {
    lVar24 = -1;
    do {
      lVar24 = lVar24 + 1;
    } while (psVar16[lVar24] != 0);
    uVar23 = (int)lVar24 + 1;
    local_c30 = (ulonglong)uVar23;
    if (0 < (int)uVar23) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c38,0);
    }
    FGenericPlatformString::Memcpy(local_c38,psVar16,(longlong)(int)uVar23 * 2);
  }
  uVar15 = FText::FromString(local_8c0,&local_c38);
  local_328[0] = 4;
  FText::FText(local_318,uVar15);
  local_300 = '\x01';
  local_c28[8] = 0;
  local_c28[9] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c28 + 8,0);
  FGenericPlatformString::Memcpy(local_c28[8],L"BuildConfiguration",0x26);
  local_a70 = local_c28 + 8;
  local_a68 = local_328;
  FUN_1407484b0(&local_438,local_b2c,&local_a70,0);
  if (local_c28[8] != 0) {
    FMemory::Free();
  }
  if ((local_300 != '\0') && (local_300 = '\0', local_310 != (longlong *)0x0)) {
    LOCK();
    plVar20 = local_310 + 1;
    lVar24 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      (**(code **)*local_310)(local_310);
      LOCK();
      piVar1 = (int *)((longlong)local_310 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_310 + 8))(local_310,1);
      }
    }
  }
  if (local_8b8 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_8b8 + 1;
    lVar24 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      (**(code **)*local_8b8)(local_8b8);
      LOCK();
      piVar1 = (int *)((longlong)local_8b8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_8b8 + 8))(local_8b8,1);
      }
    }
  }
  if (local_c38 != 0) {
    FMemory::Free();
  }
  local_c28[0xe] = 0;
  local_c28[0xf] = 0;
  uVar15 = FCommandLine::Get();
  FParse::Value(uVar15,L"WindowTitle=",local_c28 + 0xe,1);
  uVar15 = FText::FromString(local_8a8,local_c28 + 0xe);
  local_358[0] = 4;
  FText::FText(local_348,uVar15);
  local_330 = '\x01';
  local_c28[10] = 0;
  local_c28[0xb] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c28 + 10,0);
  FGenericPlatformString::Memcpy(local_c28[10],L"GBXAdditionalString",0x28);
  local_a60 = local_c28 + 10;
  local_a58 = local_358;
  FUN_1407484b0(&local_438,local_c68,&local_a60,0);
  if (local_c28[10] != 0) {
    FMemory::Free();
  }
  if ((local_330 != '\0') && (local_330 = '\0', local_340 != (longlong *)0x0)) {
    LOCK();
    plVar20 = local_340 + 1;
    lVar24 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      (**(code **)*local_340)(local_340);
      LOCK();
      piVar1 = (int *)((longlong)local_340 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_340 + 8))(local_340,1);
      }
    }
  }
  if (local_8a0 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_8a0 + 1;
    lVar24 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      (**(code **)*local_8a0)(local_8a0);
      LOCK();
      piVar1 = (int *)((longlong)local_8a0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_8a0 + 8))(local_8a0,1);
      }
    }
  }
  local_c28[0xc] = 0;
  local_c28[0xd] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c28 + 0xc,0);
  FGenericPlatformString::Memcpy(local_c28[0xc],L"{0} {1} {2}",0x18);
  puVar17 = (undefined8 *)FUN_1418fc990();
  uVar15 = FUN_1418fce90(*puVar17);
  lVar24 = FText::FText(local_840,uVar15);
  local_b28 = lVar24;
  lVar18 = FText::FText(local_828,local_950);
  local_c60 = (undefined8 *)lVar18;
  lVar19 = FText::FText(local_810,local_938);
  uVar15 = FText::FromString(local_878,local_c28 + 0xc);
  puVar17 = (undefined8 *)FTextFormat::FTextFormat(local_850,uVar15);
  local_2f8[0] = 4;
  FText::FText(local_2e8,lVar19);
  local_2d0 = 1;
  local_2c8 = 4;
  FText::FText(local_2b8,lVar18);
  local_2a0 = 1;
  local_298 = 4;
  FText::FText(local_288,lVar24);
  local_b48 = local_2f8;
  local_270 = 1;
  puStack_b40 = local_268;
  local_a90 = *puVar17;
  local_a88 = puVar17[1];
  if (local_a88 != 0) {
    LOCK();
    *(int *)(local_a88 + 8) = *(int *)(local_a88 + 8) + 1;
    UNLOCK();
  }
  uVar15 = TArray<FFormatArgumentValue,FDefaultAllocator>::
           TArray<FFormatArgumentValue,FDefaultAllocator>(local_a38,&local_b48);
  uVar15 = FText::Format(local_890,&local_a90,uVar15);
  FText::FText(local_980,uVar15);
  if (local_888 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_888 + 1;
    lVar24 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      (**(code **)*local_888)(local_888);
      LOCK();
      piVar1 = (int *)((longlong)local_888 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_888 + 8))(local_888,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_a38);
  pcVar28 = local_240;
  do {
    lVar32 = lVar32 + -1;
    pcVar2 = pcVar28 + -0x30;
    if (*pcVar2 != '\0') {
      *pcVar2 = '\0';
      plVar20 = *(longlong **)(pcVar28 + -0x40);
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar20 + 1;
        lVar24 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar24 == 1) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar20 + 8))(plVar20,1);
          }
        }
      }
    }
    pcVar28 = pcVar2;
  } while (lVar32 != 0);
  plVar20 = (longlong *)puVar17[1];
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar20 + 1;
    lVar32 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar32 == 1) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar20 + 8))(plVar20,1);
      }
    }
  }
  plVar20 = *(longlong **)(lVar19 + 8);
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar20 + 1;
    lVar32 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar32 == 1) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar20 + 8))(plVar20,1);
      }
    }
  }
  plVar20 = *(longlong **)((longlong)local_c60 + 8);
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar20 + 1;
    lVar32 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar32 == 1) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar20 + 8))(plVar20,1);
      }
    }
  }
  plVar20 = *(longlong **)(local_b28 + 8);
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar20 + 1;
    lVar32 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar32 == 1) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar20 + 8))(plVar20,1);
      }
    }
  }
  if (local_870 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_870 + 1;
    lVar32 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar32 == 1) {
      (**(code **)*local_870)(local_870);
      LOCK();
      piVar1 = (int *)((longlong)local_870 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_870 + 8))(local_870,1);
      }
    }
  }
  if (local_c28[0xc] != 0) {
    FMemory::Free();
  }
  uVar15 = FTextFormat::FTextFormat(local_860,local_980);
  FText::Format(local_998,uVar15,&local_438);
  bVar33 = false;
  local_ba0 = 0x21;
  local_ba8 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c28 + 0x10,0);
  puVar12 = local_ba8;
  FGenericPlatformString::Memcpy(local_ba8,L"bShouldWindowPreserveAspectRatio",0x42);
  local_c86 = 1;
  puVar25 = &DAT_143f3eda8;
  if ((int)local_ba0 != 0) {
    puVar25 = puVar12;
  }
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"/Script/EngineSettings.GeneralProjectSettings",puVar25,&local_c86);
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
  }
  local_b98 = (undefined2 *)0x0;
  local_b90 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b98,0);
  puVar12 = local_b98;
  FGenericPlatformString::Memcpy(local_b98,L"bUseBorderlessWindow",0x2a);
  local_c88 = '\0';
  puVar25 = &DAT_143f3eda8;
  if ((int)local_b90 != 0) {
    puVar25 = puVar12;
  }
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"/Script/EngineSettings.GeneralProjectSettings",puVar25,&local_c88);
  bVar34 = local_c88 != '\0';
  local_c81 = bVar34;
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
  }
  local_b88 = (undefined2 *)0x0;
  local_b80 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b88,0);
  puVar12 = local_b88;
  FGenericPlatformString::Memcpy(local_b88,L"bAllowWindowResize",0x26);
  local_c85 = '\x01';
  puVar25 = &DAT_143f3eda8;
  if ((int)local_b80 != 0) {
    puVar25 = puVar12;
  }
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"/Script/EngineSettings.GeneralProjectSettings",puVar25,&local_c85);
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
  }
  local_b78 = (undefined2 *)0x0;
  local_b70 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b78,0);
  puVar12 = local_b78;
  FGenericPlatformString::Memcpy(local_b78,L"bAllowClose",0x18);
  local_c84 = 1;
  puVar25 = &DAT_143f3eda8;
  if ((int)local_b70 != 0) {
    puVar25 = puVar12;
  }
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"/Script/EngineSettings.GeneralProjectSettings",puVar25,&local_c84);
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
  }
  local_b68 = (undefined2 *)0x0;
  local_b60 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b68,0);
  puVar12 = local_b68;
  FGenericPlatformString::Memcpy(local_b68,L"bAllowMaximize",0x1e);
  local_c82 = 1;
  puVar25 = &DAT_143f3eda8;
  if ((int)local_b60 != 0) {
    puVar25 = puVar12;
  }
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"/Script/EngineSettings.GeneralProjectSettings",puVar25,&local_c82);
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
  }
  local_b58 = (undefined2 *)0x0;
  local_b50 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b58,0);
  puVar12 = local_b58;
  FGenericPlatformString::Memcpy(local_b58,L"bAllowMinimize",0x1e);
  puVar25 = &DAT_143f3eda8;
  if ((int)local_b50 != 0) {
    puVar25 = puVar12;
  }
  local_c83 = 1;
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"/Script/EngineSettings.GeneralProjectSettings",puVar25,&local_c83);
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
  }
  local_c6c = 0;
  local_c70 = 0;
  uVar15 = FCommandLine::Get();
  cVar13 = FParse::Value(uVar15,L"WinX=",&local_c6c);
  bVar31 = 1;
  if (cVar13 != '\0') {
    uVar15 = FCommandLine::Get();
    cVar13 = FParse::Value(uVar15,L"WinY=",&local_c70);
    bVar31 = 1;
    if (cVar13 != '\0') {
      bVar31 = 0;
    }
  }
  local_c87 = '\0';
  fVar6 = local_c68[0];
  fVar7 = local_c68[0];
  if (local_c80 == 2) {
    local_9f0 = 0;
    local_9e8 = 0;
    local_9b8 = 0;
    uStack_9b0 = 0;
    local_9a8 = 0;
    uStack_9a0 = 0;
    if (DAT_1469f4590 == (longlong *)0x0) {
      FDisplayMetrics::RebuildDisplayMetrics(local_9f8);
    }
    else {
      (**(code **)(*DAT_1469f4590 + 0x188))(DAT_1469f4590,local_9f8);
    }
    bVar33 = true;
    local_c87 = '\x01';
    iVar4 = local_c7c;
    if (local_c7c <= local_9c8 - local_9d0) {
      iVar4 = local_9c8 - local_9d0;
    }
    iVar5 = local_c78;
    if (local_c78 <= local_9c4 - local_9cc) {
      iVar5 = local_9c4 - local_9cc;
    }
    FUN_141189610(&local_9f0);
    fVar6 = (float)iVar4;
    fVar7 = (float)iVar5;
  }
  puVar26 = &DAT_146af3a20;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af49f0) && (_Init_thread_header(&DAT_146af49f0), DAT_146af49f0 == -1))
  {
    uVar15 = FUN_141835510();
    FUN_14243d8a0(&DAT_146af3a20,uVar15);
    atexit((_func_5014 *)&LAB_143eacb10);
    _Init_thread_footer(&DAT_146af49f0);
  }
  uVar15 = FSlateNoResource::FSlateNoResource(local_770,&DAT_1468b5d88);
  FUN_1406922e0(&DAT_146af45e8,uVar15);
  uVar15 = FSlateNoResource::FSlateNoResource(local_6e8,&DAT_1468b5d88);
  FUN_1406922e0(&DAT_146af4670,uVar15);
  uVar15 = FSlateNoResource::FSlateNoResource(local_7f8,&DAT_1468b5d88);
  FUN_1406922e0(&DAT_146af46f8,uVar15);
  uVar15 = FSlateNoResource::FSlateNoResource(local_660,&DAT_1468b5d88);
  FUN_1406922e0(&DAT_146af47a8,uVar15);
  uVar15 = FSlateNoResource::FSlateNoResource(local_5d8,&DAT_1468b5d88);
  FUN_1406922e0(&DAT_146af4858,uVar15);
  uVar15 = FSlateNoResource::FSlateNoResource(local_550,&DAT_1468b5d88);
  FUN_1406922e0(&DAT_146af48e0,uVar15);
  uVar15 = FSlateNoResource::FSlateNoResource(local_4c8,&DAT_1468b5d88);
  FUN_1406922e0(&DAT_146af4968,uVar15);
  FSlateBrush::~FSlateBrush(local_770);
  FSlateBrush::~FSlateBrush(local_6e8);
  FSlateBrush::~FSlateBrush(local_7f8);
  FSlateBrush::~FSlateBrush(local_660);
  FSlateBrush::~FSlateBrush(local_5d8);
  FSlateBrush::~FSlateBrush(local_550);
  FSlateBrush::~FSlateBrush(local_4c8);
  if (bVar34) {
    local_c60 = &local_a28;
    local_a28 = 0;
    uStack_a20 = 0;
  }
  else {
    local_c60 = (undefined8 *)&local_a18;
    local_a18 = 0x40a00000;
    uStack_a14 = 0x40a00000;
    uStack_a10 = 0x40a00000;
    uStack_a0c = 0x40a00000;
  }
  FText::FText(local_b20,local_998);
  plVar20 = DAT_1469eb140;
  local_b08 = 1;
  local_b00 = (longlong *)0x0;
  local_af8 = 0;
  if (!bVar34) {
    puVar17 = (undefined8 *)FName::FName(local_a50,"Window",1);
    lVar32 = *plVar20;
    puVar17 = (undefined8 *)ISlateStyle::Join(local_a48,*puVar17,0);
    puVar26 = (undefined *)(**(code **)(lVar32 + 0x80))(plVar20,DAT_1469eb210,*puVar17);
    if (puVar26 == (undefined *)0x0) {
      puVar26 = (undefined *)FUN_141835510();
    }
  }
  if (bVar33) {
    local_c50 = fVar7;
  }
  fVar7 = local_c50;
  bVar34 = local_c87 != '\0';
  if (bVar34) {
    local_c58 = fVar6;
  }
  fVar6 = local_c58;
  fVar37 = (float)local_c6c;
  fVar38 = (float)local_c70;
  fVar35 = (float)local_c7c;
  fVar36 = (float)local_c78;
  local_c54 = bVar34;
  local_c4c = bVar33;
  lVar32 = FUN_1417e8330(local_268);
  *(undefined **)(lVar32 + 0x110) = puVar26;
  *(float *)(lVar32 + 0x154) = fVar35;
  *(float *)(lVar32 + 0x158) = fVar36;
  *(undefined4 *)(lVar32 + 0x108) = 5;
  *(undefined1 *)(lVar32 + 0x15c) = 0;
  FText::operator=(lVar32 + 0x118,local_b20);
  *(undefined1 *)(lVar32 + 0x130) = local_b08;
  pplVar27 = (longlong **)(lVar32 + 0x138);
  if (&local_b00 != pplVar27) {
    if ((local_af8 == 0) || (local_b00 == (longlong *)0x0)) {
      if ((*(int *)(lVar32 + 0x140) != 0) && (plVar20 = *pplVar27, plVar20 != (longlong *)0x0)) {
        (**(code **)(*plVar20 + 0x28))(plVar20,0);
        if (*pplVar27 != (longlong *)0x0) {
          plVar20 = (longlong *)FMemory::Realloc(*pplVar27,0,0);
          *pplVar27 = plVar20;
        }
        *(undefined4 *)(lVar32 + 0x140) = 0;
      }
    }
    else {
      (**(code **)(*local_b00 + 0x30))(local_b00,pplVar27);
    }
  }
  *(float *)(lVar32 + 0x14c) = fVar37;
  *(float *)(lVar32 + 0x150) = fVar38;
  *(byte *)(lVar32 + 0x149) = bVar31;
  if (&local_c58 != (float *)(lVar32 + 0x18c)) {
    if (*(char *)(lVar32 + 400) != '\0') {
      *(undefined1 *)(lVar32 + 400) = 0;
    }
    if (bVar34) {
      *(float *)(lVar32 + 0x18c) = fVar6;
      *(undefined1 *)(lVar32 + 400) = 1;
    }
  }
  if (&local_c50 != (float *)(lVar32 + 0x194)) {
    if (*(char *)(lVar32 + 0x198) != '\0') {
      *(undefined1 *)(lVar32 + 0x198) = 0;
    }
    if (bVar33) {
      *(float *)(lVar32 + 0x194) = fVar7;
      *(undefined1 *)(lVar32 + 0x198) = 1;
    }
  }
  *(undefined1 *)(lVar32 + 0x16d) = 1;
  *(byte *)(lVar32 + 0x174) = local_c81 ^ 1;
  *(byte *)(lVar32 + 0x19c) = local_c81 ^ 1;
  *(undefined1 *)(lVar32 + 0x178) = local_c86;
  *(byte *)(lVar32 + 0x19d) = bVar31 ^ 1;
  uVar8 = *(undefined4 *)local_c60;
  uVar9 = *(undefined4 *)((longlong)local_c60 + 4);
  uVar10 = *(undefined4 *)(local_c60 + 1);
  uVar11 = *(undefined4 *)((longlong)local_c60 + 0xc);
  *(undefined1 *)(lVar32 + 0x175) = local_c84;
  *(undefined1 *)(lVar32 + 0x177) = local_c83;
  *(undefined1 *)(lVar32 + 0x176) = local_c82;
  *(undefined4 *)(lVar32 + 0x1a0) = uVar8;
  *(undefined4 *)(lVar32 + 0x1a4) = uVar9;
  *(undefined4 *)(lVar32 + 0x1a8) = uVar10;
  *(undefined4 *)(lVar32 + 0x1ac) = uVar11;
  *(byte *)(lVar32 + 0x16a) = -(local_c85 != '\0') & 2;
  lVar24 = SharedPointerInternals::NewIntrusiveReferenceController<SWindow>();
  plVar20 = (longlong *)(lVar24 + 0x10);
  local_af0 = plVar20;
  local_ae8 = lVar24;
  FUN_14044f790(&local_af0,plVar20);
  local_ae0 = local_c74;
  SWidget::SetDebugInfo
            (plVar20,"SWindow",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\GameEngine.cpp",0x27d);
  SWidget::SWidgetConstruct(plVar20,lVar32,lVar32 + 0x30,lVar32 + 0x40);
  FUN_141806bd0(plVar20,lVar32);
  if ((*(char *)(lVar24 + 0x28) < '\0') ||
     (cVar13 = (**(code **)(*plVar20 + 0x1e8))(plVar20), cVar13 != '\0')) {
    bVar31 = 1;
  }
  else {
    bVar31 = 0;
  }
  *(byte *)(lVar24 + 0x29) = *(byte *)(lVar24 + 0x29) & 0xfe;
  *(byte *)(lVar24 + 0x29) = *(byte *)(lVar24 + 0x29) | bVar31;
  *param_1 = (longlong)plVar20;
  param_1[1] = lVar24;
  if (lVar24 != 0) {
    LOCK();
    *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
    UNLOCK();
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_af0);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_a8);
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  TAttribute<FText>::~TAttribute<FText>(local_150);
  FUN_140456c70(local_268);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b00);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_b20);
  plVar20 = DAT_1469f4590;
  local_ac0 = *param_1;
  local_ab8 = param_1[1];
  if (local_ab8 != 0) {
    LOCK();
    *(int *)(local_ab8 + 8) = *(int *)(local_ab8 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar20 + 0x10))(plVar20,local_a08,&local_ac0,0);
  if (local_a00 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_a00 + 1;
    lVar32 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar32 == 1) {
      (**(code **)*local_a00)(local_a00);
      LOCK();
      piVar1 = (int *)((longlong)local_a00 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_a00 + 8))(local_a00,1);
      }
    }
  }
  uVar23 = 1;
  if (local_c80 != 0) {
    uVar23 = local_c80;
  }
  FUN_14185bc30(*param_1,uVar23);
  FUN_14185c3e0(*param_1);
  FUN_1418c5190(DAT_1469f4590,1,0);
  if (local_990 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_990 + 1;
    lVar32 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar32 == 1) {
      (**(code **)*local_990)(local_990);
      LOCK();
      piVar1 = (int *)((longlong)local_990 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_990 + 8))(local_990,1);
      }
    }
  }
  if (local_978 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_978 + 1;
    lVar32 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar32 == 1) {
      (**(code **)*local_978)(local_978);
      LOCK();
      piVar1 = (int *)((longlong)local_978 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_978 + 8))(local_978,1);
      }
    }
  }
  if (local_c28[0xe] != 0) {
    FMemory::Free();
  }
  local_3f0 = 0;
  if (local_3f8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_438);
  if (local_960 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_960 + 1;
    lVar32 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar32 == 1) {
      (**(code **)*local_960)(local_960);
      LOCK();
      piVar1 = (int *)((longlong)local_960 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_960 + 8))(local_960,1);
      }
    }
  }
  if (local_948 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_948 + 1;
    lVar32 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar32 == 1) {
      (**(code **)*local_948)(local_948);
      LOCK();
      piVar1 = (int *)((longlong)local_948 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_948 + 8))(local_948,1);
      }
    }
  }
  if (local_930 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_930 + 1;
    lVar32 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar32 == 1) {
      (**(code **)*local_930)(local_930);
      LOCK();
      piVar1 = (int *)((longlong)local_930 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_930 + 8))(local_930,1);
      }
    }
  }
  if (local_ad0 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_ad0 + 1;
    lVar32 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar32 == 1) {
      (**(code **)*local_ad0)(local_ad0);
      LOCK();
      piVar1 = (int *)((longlong)local_ad0 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_ad0 + 8))(local_ad0,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1424497b0 FUN_1424497b0 body=888 status=ok
// SIG undefined FUN_1424497b0(void)

longlong * FUN_1424497b0(longlong *param_1,uint param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  wint_t wVar4;
  wint_t wVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  int iVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  wint_t *pwVar16;
  uint uVar17;
  longlong *plVar18;
  longlong *local_res8;
  longlong local_48;
  undefined8 local_40;
  
  uVar15 = 0;
  lVar8 = param_1[6];
  plVar18 = (longlong *)0x0;
  if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + 0x238) == 0)) {
    uVar17 = 1;
  }
  else {
    uVar6 = *(ulonglong *)(lVar8 + 0x238);
    if (lVar8 == 0) {
      uVar6 = uVar15;
    }
    uVar17 = *(uint *)(uVar6 + 0x78);
  }
  plVar1 = (longlong *)param_1[7];
  plVar11 = plVar1 + (int)param_1[8];
  for (plVar10 = plVar1; plVar10 != plVar11; plVar10 = plVar10 + 1) {
    if ((*plVar10 != 0) && (*(uint *)(*plVar10 + 0x108) == param_2)) {
      pwVar12 = L"A local player already exists for controller ID %d,";
      goto LAB_142449a6b;
    }
  }
  if ((int)param_1[8] < (int)uVar17) {
    if (((int)param_2 < 0) && (param_2 = 0, 0 < (int)uVar17)) {
      while (param_2 = (uint)uVar15, plVar18 = plVar1, plVar1 != plVar11) {
        while ((*plVar18 == 0 || (*(uint *)(*plVar18 + 0x108) != param_2))) {
          plVar18 = plVar18 + 1;
          if (plVar18 == plVar11) goto LAB_142449891;
        }
        param_2 = param_2 + 1;
        uVar15 = (ulonglong)param_2;
        if ((int)uVar17 <= (int)param_2) break;
      }
    }
LAB_142449891:
    lVar8 = param_1[4];
    local_res8 = (longlong *)0x0;
    if (*(longlong *)(lVar8 + 0x158) != 0) {
      lVar7 = ULocalPlayer::GetPrivateStaticClass();
      lVar8 = *(longlong *)(lVar8 + 0x158);
      for (lVar2 = lVar8; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar7) goto LAB_1424498d8;
      }
    }
    lVar8 = 0;
LAB_1424498d8:
    plVar18 = local_res8;
    lVar2 = param_1[4];
    if (local_res8 == (longlong *)0x0) {
      FUN_1417846f0(lVar2,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    plVar18 = (longlong *)FUN_1417985e0(lVar8,lVar2,plVar18,0,0,0,0,0,0);
    local_res8 = plVar18;
    if (plVar18 == (longlong *)0x0) {
      iVar13 = -1;
    }
    else {
      iVar13 = (int)param_1[8];
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 7,&local_res8);
      plVar11 = (longlong *)0x0;
      if (param_1[6] != 0) {
        plVar11 = *(longlong **)(param_1[6] + 0x238);
      }
      (**(code **)(*plVar18 + 0x290))(plVar18,plVar11,param_2);
      lVar8 = param_1[6];
      if ((lVar8 != 0) && (*(longlong **)(lVar8 + 0x238) != (longlong *)0x0)) {
        plVar11 = *(longlong **)(lVar8 + 0x238);
        if (lVar8 == 0) {
          plVar11 = (longlong *)0x0;
        }
        (**(code **)(*plVar11 + 0x330))(plVar11,iVar13,plVar18);
      }
    }
    if (((param_4 != '\0') && (iVar13 != -1)) &&
       (lVar8 = (**(code **)(*param_1 + 0x148))(param_1), lVar8 != 0)) {
      uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
      iVar13 = FUN_1428cf800(uVar9);
      lVar8 = *plVar18;
      if (iVar13 == 3) {
        (**(code **)(lVar8 + 0x2b0))(plVar18);
      }
      else {
        local_48 = 0;
        local_40 = 0;
        uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
        cVar3 = (**(code **)(lVar8 + 0x2a8))(plVar18,&local_48,param_3,uVar9);
        if (local_48 != 0) {
          FMemory::Free();
        }
        if (cVar3 == '\0') {
          FUN_14245cc40(param_1,plVar18);
          plVar18 = (longlong *)0x0;
        }
      }
    }
  }
  else {
    pwVar12 = L"Maximum number of players (%d) already created.  Unable to create more.";
    param_2 = uVar17;
LAB_142449a6b:
    FString::PrintfImpl(&local_48,pwVar12,param_2);
    if (param_3 == &local_48) {
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_3 != 0) {
        FMemory::Free();
      }
      *param_3 = local_48;
      *(undefined4 *)(param_3 + 1) = (undefined4)local_40;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_40._4_4_;
    }
  }
  if ((int)param_3[1] == 0) {
    puVar14 = &DAT_143f3eda8;
  }
  else {
    puVar14 = (undefined2 *)*param_3;
  }
  for (pwVar16 = &DAT_14509fc94;
      (wVar4 = *(wint_t *)((longlong)pwVar16 + (longlong)(puVar14 + -0xa284fe4a)), wVar4 != 0 ||
      (*pwVar16 != 0)); pwVar16 = pwVar16 + 1) {
    if (wVar4 != *pwVar16) {
      wVar4 = towlower(wVar4);
      wVar5 = towlower(*pwVar16);
      if (wVar4 != wVar5) {
        return plVar18;
      }
    }
  }
  return plVar18;
}



// FUNCTION 142449b30 FUN_142449b30 body=255 status=ok
// SIG undefined FUN_142449b30(void)

void FUN_142449b30(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_res8 [3];
  
  local_res8[0] = param_1;
  FPackageName::GetShortFName(local_res8 + 2,local_res8);
  lVar2 = local_res8[0];
  local_res8[1] = 0;
  if (local_res8[0] == 0) {
    FUN_1417846f0(0,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar1 = UPackage::GetPrivateStaticClass();
  lVar2 = FUN_1417985e0(uVar1,0,lVar2,0x40,0,0,0,0,0);
  *param_2 = lVar2;
  local_res8[1] = 0;
  *(uint *)(lVar2 + 0x50) = *(uint *)(lVar2 + 0x50) | 0x20000;
  lVar2 = *param_2;
  if (local_res8[2] == 0) {
    FUN_1417846f0(lVar2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar1 = FUN_142a2f930();
  lVar2 = FUN_1417985e0(uVar1,lVar2,local_res8[2],0,0,0,0,0,0);
  *param_3 = lVar2;
  *(undefined4 *)(lVar2 + 0x708) = 6;
  FUN_1428cf500(*param_3,(uint)local_res8[0] & 0xfffffc00);
  return;
}



// FUNCTION 142449c30 FUN_142449c30 body=246 status=ok
// SIG undefined FUN_142449c30(void)

longlong FUN_142449c30(undefined8 param_1,longlong param_2,longlong param_3,char param_4,
                      char param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_5 != '\0') {
    lVar1 = FUN_1426923d0(param_2 + 0x870,param_1,param_2);
    return lVar1;
  }
  if (param_3 != 0) {
    param_2 = param_3;
  }
  FUN_1417846f0(param_2,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = AGFreezeCharacterCue::GetPrivateStaticClass();
  lVar1 = FUN_1417985e0(uVar2,param_2,0,0,0,0,0,0,0);
  *(byte *)(lVar1 + 0x71a) = *(byte *)(lVar1 + 0x71a) & 0xbf;
  *(byte *)(lVar1 + 0x71a) = *(byte *)(lVar1 + 0x71a) | param_4 << 6;
  *(byte *)(lVar1 + 0xba) = *(byte *)(lVar1 + 0xba) & 0xfd | 1;
  *(undefined4 *)(lVar1 + 0x794) = 0;
  FUN_14260f940(lVar1,param_1);
  *(byte *)(lVar1 + 0x71a) = *(byte *)(lVar1 + 0x71a) & 0xfe;
  return lVar1;
}



// FUNCTION 142449d30 CreatePlayer body=127 status=ok
// SIG undefined CreatePlayer(void)

undefined8 UGameplayStatics::CreatePlayer(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  uVar2 = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  if (lVar1 != 0) {
    lVar1 = FUN_1424497b0(*(undefined8 *)(lVar1 + 400),param_2,local_18,param_3);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x30);
    }
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 142449db0 CreateSaveGameObject body=186 status=ok
// SIG undefined CreateSaveGameObject(void)

undefined8 UGameplayStatics::CreateSaveGameObject(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = USaveGame::GetPrivateStaticClass();
  lVar2 = param_1;
  while (lVar2 != lVar1) {
    lVar2 = *(longlong *)(lVar2 + 0x30);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar1 = USaveGame::GetPrivateStaticClass();
  lVar2 = param_1;
  do {
    lVar4 = param_1;
    if (lVar2 == lVar1) goto LAB_142449e05;
    lVar2 = *(longlong *)(lVar2 + 0x30);
  } while (lVar2 != 0);
  lVar4 = 0;
LAB_142449e05:
  lVar2 = USaveGame::GetPrivateStaticClass();
  if (lVar4 == lVar2) {
    return 0;
  }
  lVar1 = USaveGame::GetPrivateStaticClass();
  lVar2 = param_1;
  do {
    if (lVar2 == lVar1) goto LAB_142449e35;
    lVar2 = *(longlong *)(lVar2 + 0x30);
  } while (lVar2 != 0);
  param_1 = 0;
LAB_142449e35:
  uVar3 = GetTransientPackage();
  uVar3 = ::NewObject<USaveGame>(uVar3,param_1,0,0,0,0,0);
  return uVar3;
}



// FUNCTION 142449e70 CreateSaveGameObjectFromBlueprint body=280 status=ok
// SIG undefined CreateSaveGameObjectFromBlueprint(void)

undefined8 UGameplayStatics::CreateSaveGameObjectFromBlueprint(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    lVar1 = UObject::GetPrivateStaticClass();
    for (lVar5 = *(longlong *)(param_1 + 0x30); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar1) {
        if (*(longlong *)(param_1 + 0x30) == 0) {
          return 0;
        }
        lVar1 = USaveGame::GetPrivateStaticClass();
        lVar6 = 0;
        lVar5 = lVar6;
        if (*(longlong *)(param_1 + 0x30) != 0) {
          lVar2 = UObject::GetPrivateStaticClass();
          for (lVar3 = *(longlong *)(param_1 + 0x30);
              (lVar5 = lVar6, lVar3 != 0 && (lVar5 = *(longlong *)(param_1 + 0x30), lVar3 != lVar2))
              ; lVar3 = *(longlong *)(lVar3 + 0x30)) {
          }
        }
        if (lVar5 == 0) {
          return 0;
        }
        do {
          if (lVar5 == lVar1) {
            lVar5 = lVar6;
            if (*(longlong *)(param_1 + 0x30) != 0) {
              lVar3 = UObject::GetPrivateStaticClass();
              for (lVar1 = *(longlong *)(param_1 + 0x30);
                  (lVar5 = lVar6, lVar1 != 0 &&
                  (lVar5 = *(longlong *)(param_1 + 0x30), lVar1 != lVar3));
                  lVar1 = *(longlong *)(lVar1 + 0x30)) {
              }
            }
            uVar4 = GetTransientPackage();
            uVar4 = ::NewObject<USaveGame>(uVar4,lVar5,0,0,0,0,0);
            return uVar4;
          }
          lVar5 = *(longlong *)(lVar5 + 0x30);
        } while (lVar5 != 0);
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 142449f90 FUN_142449f90 body=383 status=ok
// SIG undefined FUN_142449f90(void)

longlong FUN_142449f90(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                      undefined8 param_5,undefined8 param_6,char param_7,byte param_8)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined1 local_78 [16];
  undefined8 local_68;
  
  if ((((param_2 == (longlong *)0x0) || (DAT_146b17150 == (longlong *)0x0)) ||
      (cVar1 = (**(code **)(*DAT_146b17150 + 0x388))(), cVar1 == '\0')) ||
     (((lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar3 == 0 ||
       ((*(uint *)(lVar3 + 0x830) & 0x4000) == 0)) || (iVar2 = FUN_1428cf800(lVar3), iVar2 == 1))))
  {
    lVar3 = 0;
  }
  else {
    if (param_7 == '\0') {
      FAudioDevice::FCreateComponentParams::FCreateComponentParams(local_78,lVar3,0);
      puVar5 = local_78;
      local_68 = param_6;
    }
    else {
      uVar4 = UWorld::GetAudioDevice(lVar3);
      FAudioDevice::FCreateComponentParams::FCreateComponentParams(local_c8,uVar4);
      puVar5 = local_c8;
      local_b8 = param_6;
    }
    lVar3 = FUN_1422c5640(param_2,puVar5);
    if (lVar3 != 0) {
      FUN_142351eb0(lVar3,param_3);
      FUN_142351310(lVar3,param_4);
      *(byte *)(lVar3 + 0x2f0) = *(byte *)(lVar3 + 0x2f0) & 0xf6;
      *(byte *)(lVar3 + 0x2f1) = *(byte *)(lVar3 + 0x2f1) & 0xf7;
      *(byte *)(lVar3 + 0x2f0) = *(byte *)(lVar3 + 0x2f0) | param_8 | 0x40;
      *(byte *)(lVar3 + 0x2f1) = *(byte *)(lVar3 + 0x2f1) | param_7 << 3;
      uVar6 = (**(code **)(*param_2 + 0x2b8))(param_2);
      *(undefined4 *)(lVar3 + 800) = uVar6;
    }
  }
  return lVar3;
}



// FUNCTION 14244a110 CullInvalidSources body=14 status=ok
// SIG undefined CullInvalidSources(void)

void FRootMotionSourceGroup::CullInvalidSources(longlong param_1)

{
  undefined1 local_res8 [32];
  
  FUN_14243c240(param_1 + 8,local_res8);
  return;
}



// FUNCTION 14244a120 FUN_14244a120 body=114 status=ok
// SIG undefined FUN_14244a120(void)

void FUN_14244a120(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (DAT_146b17150 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_146b17150 + 0x388))();
    if (cVar1 != '\0') {
      lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
      if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x830) & 0x4000) != 0)) {
        lVar2 = UWorld::GetAudioDevice(lVar2);
        if (lVar2 != 0) {
          FAudioDevice::DeactivateReverbEffect(lVar2,param_2);
        }
      }
    }
  }
  return;
}



// FUNCTION 14244a1a0 DeleteGameInSlot body=151 status=ok
// SIG undefined DeleteGameInSlot(void)

void UGameplayStatics::DeleteGameInSlot(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if (DAT_146850158 == (longlong *)0x0) {
    DAT_146850158 = (longlong *)operator_new(8);
    if (DAT_146850158 == (longlong *)0x0) {
      DAT_146850158 = (longlong *)0x0;
    }
    else {
      *DAT_146850158 = (longlong)&PTR_FUN_143f3eef8;
    }
  }
  plVar1 = (longlong *)(**(code **)(*DAT_146850158 + 0x40))();
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014244a228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))(plVar1,0,&DAT_143f3eda8,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014244a20b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,0,*param_1,param_2);
  return;
}



// FUNCTION 14244a240 FUN_14244a240 body=294 status=ok
// SIG undefined FUN_14244a240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14244a240(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             char param_5,undefined1 param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_208 [64];
  undefined1 local_1c8 [208];
  undefined4 local_f8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [64];
  undefined1 local_48 [64];
  
  if (((param_1 != 0) && (plVar2 = (longlong *)FUN_14270bb10(), plVar2 != (longlong *)0x0)) &&
     (plVar2[0xe] != 0)) {
    local_f8 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    cVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2,*(undefined8 *)(plVar2[0xe] + 0xb0),0,local_1c8);
    if (cVar1 != '\0') {
      if (param_5 == '\0') {
        uVar3 = FSceneViewProjectionData::ComputeViewProjectionMatrix(local_1c8,local_48);
      }
      else {
        uVar3 = FUN_1411d6fd0(local_1c8,local_88);
      }
      FMatrix::InverseFast(uVar3,local_208);
      FUN_14274a0c0(param_2,&local_98,local_208,param_3,param_4,param_6);
      return 1;
    }
  }
  *param_3 = _DAT_1468b5d90;
  *(undefined4 *)(param_3 + 1) = DAT_1468b5d98;
  *param_4 = _DAT_1468b5d90;
  *(undefined4 *)(param_4 + 1) = DAT_1468b5d98;
  return 0;
}



// FUNCTION 14244a370 FUN_14244a370 body=9 status=ok
// SIG undefined FUN_14244a370(void)

void FUN_14244a370(longlong param_1)

{
  FUN_14243f1a0(param_1 + 0x10);
  return;
}



// FUNCTION 14244a380 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FSceneViewExtensions,SharedPointerInternals::DefaultDeleter<FSceneViewExtensions>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
    ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(lVar1);
    FMemory::operator_delete(lVar1,0x10);
    return;
  }
  return;
}



// FUNCTION 14244a3b0 FUN_14244a3b0 body=1578 status=ok
// SIG undefined FUN_14244a3b0(void)

void FUN_14244a3b0(uint *param_1,uint *param_2,longlong *param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  uint local_res20;
  undefined8 local_120;
  undefined8 local_118;
  float local_110;
  float local_10c;
  longlong local_108;
  undefined8 local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  uint local_d8;
  uint local_d4;
  longlong local_d0;
  undefined8 local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  longlong local_68;
  longlong local_58 [3];
  
  uVar3 = FCommandLine::Get();
  FParse::Value(uVar3,L"ResX=",param_1);
  uVar3 = FCommandLine::Get();
  FParse::Value(uVar3);
  local_d0 = 0;
  local_c8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  if (DAT_1469f4590 == (longlong *)0x0) {
    FDisplayMetrics::RebuildDisplayMetrics(&local_d8);
  }
  else {
    (**(code **)(*DAT_1469f4590 + 0x188))();
  }
  uVar16 = local_d4;
  iVar8 = (int)*param_3;
  local_res20 = local_d8;
  if ((param_4 != '\0') && (iVar8 == 2)) {
    local_res20 = local_b8 - local_c0;
  }
  if ((param_4 == '\0') || (iVar8 != 2)) {
    local_118 = (ulonglong)local_d4;
    if ((iVar8 == 0) && (0 < (int)local_c8)) {
      if ((DAT_146b17150 == 0) || (lVar7 = FUN_142874ac0(), lVar7 == 0)) {
        puVar4 = (undefined8 *)FUN_14247fbb0(local_78);
        bVar19 = false;
        bVar20 = true;
      }
      else {
        puVar4 = (undefined8 *)UMWAITargetSelectionComponent::GetTargetUnitName(lVar7);
        bVar19 = true;
        bVar20 = false;
      }
      puVar14 = (undefined2 *)*puVar4;
      *puVar4 = 0;
      iVar8 = *(int *)(puVar4 + 1);
      puVar4[1] = 0;
      local_120 = puVar14;
      if ((bVar20) && (local_78[0] != 0)) {
        FMemory::Free();
      }
      if ((bVar19) && (local_68 != 0)) {
        FMemory::Free();
      }
      bVar20 = false;
      iVar17 = -1;
      iVar18 = 0;
      iVar11 = iVar17;
      if (0 < (int)local_c8) {
        lVar7 = 0;
        do {
          if ((iVar11 < 0) && (*(char *)(local_d0 + 0x58 + lVar7) != '\0')) {
            iVar11 = iVar18;
          }
          bVar19 = bVar20;
          if (iVar17 < 0) {
            bVar20 = true;
            puVar4 = (undefined8 *)FUN_142480c60(local_58,iVar18);
            puVar9 = &DAT_143f3eda8;
            if (iVar8 != 0) {
              puVar9 = puVar14;
            }
            if (*(int *)(puVar4 + 1) == 0) {
              puVar5 = &DAT_143f3eda8;
            }
            else {
              puVar5 = (undefined2 *)*puVar4;
            }
            iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar9);
            bVar19 = true;
            if (iVar2 != 0) goto LAB_14244a5a7;
            bVar19 = true;
          }
          else {
LAB_14244a5a7:
            bVar20 = bVar19;
            bVar19 = false;
          }
          if ((bVar20) && (bVar20 = false, local_58[0] != 0)) {
            FMemory::Free();
          }
          iVar2 = iVar18;
          if (!bVar19) {
            iVar2 = iVar17;
          }
          iVar17 = iVar2;
          iVar18 = iVar18 + 1;
          lVar7 = lVar7 + 0x70;
        } while (iVar18 < (int)local_c8);
        uVar16 = (uint)local_118;
        puVar14 = local_120;
      }
      if (-1 < iVar17) {
        iVar11 = iVar17;
      }
      if (-1 < iVar11) {
        local_res20 = *(uint *)((longlong)iVar11 * 0x70 + 0x30 + local_d0);
        uVar16 = *(uint *)((longlong)iVar11 * 0x70 + 0x34 + local_d0);
      }
      if (puVar14 != (undefined2 *)0x0) {
        FMemory::Free(puVar14);
      }
    }
  }
  else {
    uVar16 = local_b4 - local_bc;
  }
  bVar20 = false;
  plVar12 = param_3;
  if ((DAT_146b17150 != 0) && (lVar7 = *(longlong *)(DAT_146b17150 + 0x7b0), lVar7 != 0)) {
    plVar13 = *(longlong **)(lVar7 + 200);
    bVar20 = true;
    plVar12 = plVar13;
    if (plVar13 != (longlong *)0x0) {
      plVar12 = (longlong *)0x0;
      LOCK();
      iVar8 = (int)plVar13[1];
      bVar19 = iVar8 == 0;
      if (bVar19) {
        *(int *)(plVar13 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
      while (!bVar19) {
        LOCK();
        bVar19 = iVar8 == (int)plVar13[1];
        if (bVar19) {
          *(int *)(plVar13 + 1) = iVar8 + 1;
        }
        UNLOCK();
        if (bVar19) {
          plVar12 = plVar13;
          if ((plVar13 != (longlong *)0x0) && (*(longlong *)(lVar7 + 0xc0) != 0)) {
            bVar19 = true;
            goto LAB_14244a694;
          }
          break;
        }
        LOCK();
        iVar8 = (int)plVar13[1];
        bVar19 = iVar8 == 0;
        if (bVar19) {
          *(int *)(plVar13 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
      }
    }
  }
  bVar19 = false;
  plVar13 = plVar12;
LAB_14244a694:
  if ((bVar20) && (plVar13 != (longlong *)0x0)) {
    LOCK();
    plVar12 = plVar13 + 1;
    lVar7 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar6 = (int *)((longlong)plVar13 + 0xc);
      iVar8 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (bVar19) {
    lVar7 = *(longlong *)(DAT_146b17150 + 0x7b0);
    plVar12 = *(longlong **)(lVar7 + 200);
    plVar13 = plVar12;
    plVar15 = (longlong *)0x0;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      iVar8 = (int)plVar12[1];
      bVar20 = iVar8 == 0;
      if (bVar20) {
        *(int *)(plVar12 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
      while (plVar13 = (longlong *)0x0, plVar15 = (longlong *)0x0, !bVar20) {
        LOCK();
        bVar20 = iVar8 == (int)plVar12[1];
        if (bVar20) {
          *(int *)(plVar12 + 1) = iVar8 + 1;
        }
        UNLOCK();
        if (bVar20) {
          plVar13 = plVar12;
          if (plVar12 != (longlong *)0x0) {
            plVar15 = *(longlong **)(lVar7 + 0xc0);
          }
          break;
        }
        LOCK();
        iVar8 = (int)plVar12[1];
        bVar20 = iVar8 == 0;
        if (bVar20) {
          *(int *)(plVar12 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
      }
    }
    FUN_14183b310(plVar15,&local_120);
    local_f0 = (float)(int)*param_1 + (float)local_120;
    local_f8 = (float)local_120;
    local_ec = (float)(int)*param_2 + local_120._4_4_;
    local_f4 = local_120._4_4_;
    FSlateApplication::GetWorkArea(DAT_1469f4590,&local_118,&local_f8);
    if ((int)local_c8 < 1) {
      local_res20 = (uint)(local_110 - (float)local_118);
      uVar16 = (uint)(local_10c - local_118._4_4_);
    }
    else {
      local_e8 = *(undefined8 *)(local_d0 + 0x38);
      uStack_e0 = *(undefined8 *)(local_d0 + 0x40);
      if (1 < (int)local_c8) {
        uVar10 = (ulonglong)((int)local_c8 - 1);
        piVar6 = (int *)(local_d0 + 0xbc);
        do {
          if (((float)local_118 == (float)piVar6[-1]) && (local_118._4_4_ == (float)*piVar6)) {
            local_e8 = *(undefined8 *)(piVar6 + -5);
            uStack_e0 = *(undefined8 *)(piVar6 + -3);
          }
          piVar6 = piVar6 + 0x1c;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      local_res20 = (int)uStack_e0 - (int)local_e8;
      uVar16 = (int)((ulonglong)uStack_e0 >> 0x20) - (int)((ulonglong)local_e8 >> 0x20);
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar13 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar6 = (int *)((longlong)plVar13 + 0xc);
        iVar8 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
  }
  uVar3 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar3,L"ForceRes");
  if ((cVar1 == '\0') &&
     (((((int)*param_1 < 1 || ((int)local_res20 < (int)*param_1)) || ((int)*param_2 < 1)) ||
      ((int)uVar16 < (int)*param_2)))) {
    *param_1 = local_res20;
    *param_2 = uVar16;
    if ((int)*param_3 == 2) {
      local_108 = 0;
      local_100 = 0;
      GenerateConvenientWindowedResolutions(&local_d8,&local_108);
      if (0 < (int)local_100) {
        iVar8 = (int)local_100 + -1;
        lVar7 = (longlong)iVar8;
        *param_1 = *(uint *)(local_108 + lVar7 * 8);
        *param_2 = *(uint *)(local_108 + 4 + lVar7 * 8);
        if (-1 < iVar8) {
          do {
            if (ABS((float)*(int *)(local_108 + lVar7 * 8) /
                    (float)*(int *)(local_108 + 4 + lVar7 * 8) -
                    (float)(int)local_d8 / (float)(int)local_d4) < 0.0001) {
              *param_1 = *(uint *)(local_108 + (longlong)iVar8 * 8);
              *param_2 = *(uint *)(local_108 + 4 + (longlong)iVar8 * 8);
              break;
            }
            iVar8 = iVar8 + -1;
            lVar7 = lVar7 + -1;
          } while (-1 < lVar7);
        }
      }
      if (local_108 != 0) {
        FMemory::Free(local_108);
      }
    }
  }
  uVar3 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar3,L"Portrait");
  if (cVar1 != '\0') {
    uVar16 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar16;
  }
  FUN_141189610(&local_d0);
  return;
}



// FUNCTION 14244a9e0 FUN_14244a9e0 body=111 status=ok
// SIG undefined FUN_14244a9e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14244a9e0(char *param_1)

{
  longlong *plVar1;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  if (*param_1 == '\0') {
    _DAT_146ac3e80 = *(float *)(param_1 + 4);
    DAT_146ac3e84 = DAT_146ac3e84 + _DAT_146ac3e80;
  }
  plVar1 = (longlong *)GetRendererModule();
  (**(code **)(*plVar1 + 0xa0))(plVar1);
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 14244aa50 DoesSaveGameExist body=147 status=ok
// SIG undefined DoesSaveGameExist(void)

void UGameplayStatics::DoesSaveGameExist(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if (DAT_146850158 == (longlong *)0x0) {
    DAT_146850158 = (longlong *)operator_new(8);
    if (DAT_146850158 == (longlong *)0x0) {
      DAT_146850158 = (longlong *)0x0;
    }
    else {
      *DAT_146850158 = (longlong)&PTR_FUN_143f3eef8;
    }
  }
  plVar1 = (longlong *)(**(code **)(*DAT_146850158 + 0x40))();
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014244aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,&DAT_143f3eda8,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014244aab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1,*param_1,param_2);
  return;
}



// FUNCTION 14244aaf0 FUN_14244aaf0 body=536 status=ok
// SIG undefined FUN_14244aaf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14244aaf0(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_2b8 [32];
  undefined1 local_298 [8];
  longlong *local_290;
  undefined **local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined1 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  longlong local_200;
  undefined8 local_1f8;
  undefined **local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  uint local_1a8;
  uint local_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined2 local_160;
  undefined1 local_15e;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined1 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_140 [136];
  undefined1 local_b8 [24];
  undefined8 local_a0;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  local_270 = *param_1;
  local_26c = param_1[1];
  local_240 = param_1[2];
  local_250 = *(undefined4 *)param_3;
  uStack_24c = *(undefined4 *)((longlong)param_3 + 4);
  uStack_248 = *(undefined4 *)(param_3 + 1);
  uStack_244 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_268 = 0;
  local_23c = param_1[3];
  local_260 = 0;
  local_258 = 0;
  local_278 = &PTR_FUN_1444d5548;
  local_238 = 0;
  local_200 = 0;
  local_1f8 = 0;
  FCanvas::DrawItem(param_2,&local_278);
  uVar5 = UEngine::GetSmallFont();
  uVar6 = FText::FromName(local_298,param_1 + 4);
  local_1e0 = *param_1;
  local_1dc = param_1[1];
  local_1a8 = local_1a8 & 0xfffffffc;
  local_1a4 = local_1a4 & 0xfffffffe;
  local_1d8 = 0;
  local_1c0 = _DAT_1464aa6c0;
  uStack_1b8 = _DAT_1464aa6c8;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1e8 = &PTR__scalar_deleting_destructor__1444d54b8;
  local_170 = (undefined4)DAT_1468b5d88;
  uStack_16c = DAT_1468b5d88._4_4_;
  uStack_168 = (undefined4)DAT_1468b5d88;
  uStack_164 = DAT_1468b5d88._4_4_;
  local_1b0 = 0;
  local_1ac = 0x3f800000;
  local_190 = 0;
  uStack_188 = 0;
  local_160 = 0;
  local_180 = DAT_1464aa6e0;
  uStack_17c = DAT_1464aa6e4;
  uStack_178 = DAT_1464aa6e8;
  uStack_174 = DAT_1464aa6ec;
  local_15e = 0;
  local_15c = DAT_1464aa6e0;
  uStack_158 = DAT_1464aa6e4;
  uStack_154 = DAT_1464aa6e8;
  uStack_150 = DAT_1464aa6ec;
  local_14c = 1;
  FCanvasTileItem::FCanvasTileItem(local_140,param_1,&DAT_1468b5d88,param_3);
  local_1c0 = *param_3;
  uStack_1b8 = param_3[1];
  local_148 = 0x3f800000;
  local_144 = 0x3f800000;
  local_1d8 = CONCAT44(2,(undefined4)local_1d8);
  local_1e8 = &PTR_FUN_1444d5500;
  FText::FText(local_b8,uVar6);
  local_48 = 0;
  local_1d8 = CONCAT44(2,(undefined4)local_1d8);
  local_a0 = uVar5;
  if (local_290 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_290 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_290)(local_290);
      LOCK();
      piVar2 = (int *)((longlong)local_290 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_290 + 8))(local_290,1);
      }
    }
  }
  FCanvas::DrawItem(param_2,&local_1e8);
  FUN_140c64b70(&local_1e8);
  if (local_200 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14244ad10 FUN_14244ad10 body=184 status=ok
// SIG undefined FUN_14244ad10(void)

void FUN_14244ad10(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  
  iVar5 = *(int *)(param_1 + 0x48);
  lVar6 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar6 = param_1;
  }
  if (iVar5 != 0) {
    plVar7 = (longlong *)(lVar6 + 8);
    do {
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != param_2) {
    FUN_141f620a0(param_1,param_2);
  }
  return;
}



// FUNCTION 14244add0 FUN_14244add0 body=191 status=ok
// SIG undefined FUN_14244add0(void)

void FUN_14244add0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  
  iVar5 = *(int *)(param_1 + 0x88);
  lVar6 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar6 = param_1;
  }
  if (iVar5 != 0) {
    plVar7 = (longlong *)(lVar6 + 8);
    do {
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != param_2) {
    FUN_14245d780(param_1,param_2);
  }
  return;
}



// FUNCTION 14244ae90 EnableLiveStreaming body=95 status=ok
// SIG undefined EnableLiveStreaming(void)

void UGameplayStatics::EnableLiveStreaming(undefined1 param_1)

{
  longlong *plVar1;
  
  if (DAT_146850158 == (longlong *)0x0) {
    DAT_146850158 = (longlong *)operator_new(8);
    if (DAT_146850158 == (longlong *)0x0) {
      DAT_146850158 = (longlong *)0x0;
    }
    else {
      *DAT_146850158 = (longlong)&PTR_FUN_143f3eef8;
    }
  }
  plVar1 = (longlong *)(**(code **)(*DAT_146850158 + 0x48))();
  if (plVar1 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014244aee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  return;
}



// FUNCTION 14244aef0 FUN_14244aef0 body=198 status=ok
// SIG undefined FUN_14244aef0(void)

void FUN_14244aef0(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  lVar1 = *(longlong *)(lVar1 + 0x38);
  if (lVar1 != 0) {
    if (param_2 != '\0') {
      *(undefined1 *)(lVar1 + 0x1f9) = 0;
      *(int *)(lVar1 + 0x1fc) = (int)param_1[0x8e];
      *(undefined4 *)(lVar1 + 0x200) = *(undefined4 *)((longlong)param_1 + 0x474);
      *(int *)(lVar1 + 0x204) = (int)param_1[0x8f];
      *(undefined4 *)(lVar1 + 0x208) = *(undefined4 *)((longlong)param_1 + 0x47c);
      *(int *)(lVar1 + 0x20c) = (int)param_1[0x90];
      *(undefined4 *)(lVar1 + 0x210) = *(undefined4 *)((longlong)param_1 + 0x484);
      *(int *)(lVar1 + 0x214) = (int)param_1[0x91];
      if (0.0 < *(float *)(param_1 + 0x8e)) {
        *(undefined1 *)(lVar1 + 0x1f8) = 1;
        return;
      }
    }
    *(undefined1 *)(lVar1 + 0x1f8) = 0;
  }
  return;
}



// FUNCTION 14244afc0 FUN_14244afc0 body=53 status=ok
// SIG undefined FUN_14244afc0(void)

void FUN_14244afc0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x900))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014244afe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x930))(param_1,DAT_146af3990);
    return;
  }
  return;
}



// FUNCTION 14244b000 FUN_14244b000 body=101 status=ok
// SIG undefined FUN_14244b000(void)

undefined8 FUN_14244b000(longlong param_1,float *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar2 = plVar1[0x1f];
  fVar3 = *param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),
                  *(float *)(lVar2 + 0x490) <= fVar3 && fVar3 != *(float *)(lVar2 + 0x490));
}



// FUNCTION 14244b070 FUN_14244b070 body=1271 status=ok
// SIG undefined FUN_14244b070(void)

undefined1 FUN_14244b070(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  wchar_t _C;
  bool bVar1;
  char cVar2;
  wint_t wVar3;
  wint_t wVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined2 *puVar9;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  float fVar12;
  undefined8 local_res18 [2];
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  local_res18[0] = param_3;
  cVar2 = FParse::Command(local_res18,L"REATTACHCOMPONENTS",1);
  if (cVar2 != '\0') {
    return 1;
  }
  cVar2 = FParse::Command(local_res18,L"REREGISTERCOMPONENTS",1);
  if (cVar2 != '\0') {
    return 1;
  }
  cVar2 = FParse::Command(local_res18,L"EXIT",1);
  if ((cVar2 != '\0') || (cVar2 = FParse::Command(local_res18,&DAT_1450a5800,1), cVar2 != '\0')) {
    FParse::Token(&local_38,local_res18,0);
    if (1 < local_30) {
      pwVar10 = L"background";
      puVar11 = &DAT_143f3eda8;
      if (local_30 != 0) {
        puVar11 = local_38;
      }
      for (; (_C = *(wchar_t *)((longlong)pwVar10 + (longlong)(puVar11 + -0xa2852c08)), _C != L'\0'
             || (*pwVar10 != L'\0')); pwVar10 = pwVar10 + 1) {
        if (_C != *pwVar10) {
          wVar3 = towlower(_C);
          wVar4 = towlower(*pwVar10);
          if (wVar3 != wVar4) break;
        }
      }
    }
    FOutputDevice::Log(param_4,L"Closing by request");
    uVar6 = FUN_14244d3d0();
    TBaseMulticastDelegate<void>::Broadcast(uVar6);
    FUN_1416a8180(0);
    puVar11 = local_38;
    goto LAB_14244b547;
  }
  cVar2 = FParse::Command(local_res18,L"EXITWITHERROR",1);
  if ((cVar2 != '\0') || (cVar2 = FParse::Command(local_res18,L"QUITWITHERROR",1), cVar2 != '\0')) {
    _dynamic_initializer_for__GSystemSettings__(0,1);
    return 1;
  }
  cVar2 = FParse::Command(local_res18,L"GETMAXTICKRATE",1);
  if (cVar2 != '\0') {
    fVar12 = (float)(**(code **)(*(longlong *)(param_1 + -0x28) + 0x2b8))(param_1 + -0x28,0,0);
    FOutputDevice::LogfImpl(param_4,&DAT_1450a59e8,(double)fVar12);
    return 1;
  }
  cVar2 = FParse::Command(local_res18,L"CANCEL",1);
  if (cVar2 != '\0') {
    lVar8 = *(longlong *)(param_1 + -0x28);
    uVar6 = FUN_142876210(param_1 + -0x28,param_2);
    (**(code **)(lVar8 + 0x480))(param_1 + -0x28,uVar6);
    return 1;
  }
  cVar2 = FParse::Command(local_res18,L"TOGGLECVAR",1);
  if (cVar2 == '\0') {
    if (param_2 != 0) {
      cVar2 = FUN_1428ca210(param_2,param_2,local_res18[0],param_4);
      if (cVar2 != '\0') {
        return 1;
      }
      plVar7 = *(longlong **)(param_2 + 0x140);
      if ((plVar7 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar7 + 0x220))(plVar7,local_res18[0],param_4,0), cVar2 != '\0')) {
        return 1;
      }
    }
    cVar2 = FParse::Command(local_res18,&DAT_1450a5908,1);
    if ((cVar2 != '\0') || (cVar2 = FParse::Command(local_res18,L"SETNOPEC",1), cVar2 != '\0')) {
      lVar8 = FUN_142876210(param_1 + -0x28,param_2);
      if (*(longlong *)(lVar8 + 0x1c8) != 0) {
        return 1;
      }
      iVar5 = FUN_1428cf800(param_2);
      if (iVar5 != 0) {
        return 1;
      }
      DAT_146af37f0 = 1;
    }
    cVar2 = FUN_142871890(param_1,param_2,local_res18[0],param_4);
    if (cVar2 != '\0') {
      return 1;
    }
    cVar2 = UPlatformInterfaceBase::StaticExec(local_res18[0],param_4);
    if (cVar2 != '\0') {
      return 1;
    }
    return 0;
  }
  local_78 = (undefined2 *)0x0;
  local_70 = 0;
  FParse::Token(local_res18,&local_78,0);
  bVar1 = false;
  if ((int)local_70 == 0) {
LAB_14244b38e:
    puVar11 = &DAT_143f3eda8;
  }
  else {
    if (0 < (int)local_70 + -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      puVar11 = &DAT_143f3eda8;
      if ((int)local_70 != 0) {
        puVar11 = local_78;
      }
      plVar7 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,puVar11);
      if (plVar7 != (longlong *)0x0) {
        local_68 = (undefined2 *)0x0;
        local_60 = 0;
        local_58 = (undefined2 *)0x0;
        local_50 = 0;
        cVar2 = FParse::Token(local_res18,&local_68,0);
        if ((cVar2 != '\0') && (cVar2 = FParse::Token(local_res18,&local_58,0), cVar2 != '\0')) {
          bVar1 = true;
          (**(code **)(*plVar7 + 0x78))(plVar7,&local_38);
          puVar11 = &DAT_143f3eda8;
          if ((int)local_60 != 0) {
            puVar11 = local_68;
          }
          puVar9 = &DAT_143f3eda8;
          if (local_30 != 0) {
            puVar9 = local_38;
          }
          iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar11);
          puVar11 = &DAT_143f3eda8;
          if (iVar5 == 0) {
            if ((int)local_50 != 0) {
              puVar11 = local_58;
            }
          }
          else if ((int)local_60 != 0) {
            puVar11 = local_68;
          }
          puVar9 = &DAT_143f3eda8;
          if ((int)local_70 != 0) {
            puVar9 = local_78;
          }
          FString::PrintfImpl(&local_48,L"%s %s",puVar9,puVar11);
          puVar11 = &DAT_143f3eda8;
          if (local_40 != 0) {
            puVar11 = local_48;
          }
          lVar8 = *(longlong *)(DAT_146b17150 + 0x28);
          uVar6 = FUN_141672640();
          (**(code **)(lVar8 + 8))(DAT_146b17150 + 0x28,param_2,puVar11,uVar6);
          if (local_48 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_38 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
        if (local_58 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_68 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        puVar11 = local_78;
        if (!bVar1) {
          FOutputDevice::Log(param_4,L"Usage: TOGGLECVAR CVarName Value1 Value2");
          puVar11 = local_78;
        }
        goto LAB_14244b547;
      }
    }
    puVar11 = local_78;
    if ((int)local_70 == 0) goto LAB_14244b38e;
  }
  FString::PrintfImpl(&local_38,L"TOGGLECVAR: cvar \'%s\' was not found",puVar11);
  puVar11 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar11 = local_38;
  }
  FOutputDevice::Log(param_4,puVar11);
  puVar11 = local_78;
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
    puVar11 = local_78;
  }
LAB_14244b547:
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 14244b570 FUN_14244b570 body=112 status=ok
// SIG undefined FUN_14244b570(void)

ulonglong FUN_14244b570(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  uVar1 = FParse::Command(local_res18,L"OPEN",1);
  if ((char)uVar1 != '\0') {
    uVar1 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x278))
                      (param_1 + -0x28,local_res18[0],param_4,param_2);
    return uVar1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 14244b5e0 FUN_14244b5e0 body=237 status=ok
// SIG undefined FUN_14244b5e0(void)

void FUN_14244b5e0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14244a9e0(param_1 + 2,param_3,param_1 + 4);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1450aaa50;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 14244b6d0 FUN_14244b6d0 body=683 status=ok
// SIG undefined FUN_14244b6d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14244b6d0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  undefined1 in_XMM5 [16];
  undefined1 auVar16 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 local_res20 [8];
  float local_98;
  float local_94;
  float local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [88];
  
  plVar7 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar11 = plVar7[0x1f];
  if (lVar11 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar11 = plVar7[0x1f];
  }
  if (*(char *)(lVar11 + 0xac) == '\0') {
    FName::FName(local_res20,&DAT_14509fbf4,1);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_78,
                       L"Calling FindCollisionUV but \'Support UV From Hit Results\' is not enabled in project settings. This is required for finding UV for collision results."
                       ,L"GameplayStatics",L"CollisionUVNoSupport");
    uVar9 = FUN_14161fb50(local_60,local_res20);
    FMessageLog::Warning(uVar9,local_88,uVar8);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_80 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    uVar10 = FMessageLog::~FMessageLog(local_60);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_70 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      uVar6 = (int)lVar11 - 1;
      uVar10 = (ulonglong)uVar6;
      if (uVar6 == 0) {
        uVar10 = (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          uVar10 = (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  else {
    plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x74);
    uVar10 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar11 = (**(code **)(*plVar7 + 0x6b8))(plVar7);
      uVar10 = 0;
      if (lVar11 != 0) {
        auVar16 = *(undefined1 (*) [16])(plVar7 + 0x46);
        fVar3 = auVar16._0_4_;
        fVar4 = auVar16._4_4_;
        fVar5 = auVar16._8_4_;
        auVar16 = rcpps(in_XMM5,auVar16);
        fVar19 = *(float *)(plVar7 + 0x42) * _DAT_146af39f0;
        fVar20 = *(float *)((longlong)plVar7 + 0x214) * fRam0000000146af39f4;
        fVar21 = *(float *)(plVar7 + 0x43) * fRam0000000146af39f8;
        fVar22 = *(float *)((longlong)plVar7 + 0x21c) * fRam0000000146af39fc;
        fVar23 = (float)((uint)(*(float *)(param_1 + 0x14) - *(float *)(plVar7 + 0x44)) &
                        _DAT_146af3820);
        fVar24 = (float)((uint)(*(float *)(param_1 + 0x18) - *(float *)((longlong)plVar7 + 0x224)) &
                        uRam0000000146af3824);
        fVar25 = (float)((uint)(*(float *)(param_1 + 0x1c) - *(float *)(plVar7 + 0x45)) &
                        uRam0000000146af3828);
        fVar12 = fVar25 * fVar20 - fVar24 * fVar21;
        fVar13 = fVar23 * fVar21 - fVar25 * fVar19;
        fVar14 = fVar24 * fVar19 - fVar23 * fVar20;
        fVar15 = auVar16._0_4_;
        fVar17 = auVar16._4_4_;
        fVar18 = auVar16._8_4_;
        fVar12 = fVar12 + fVar12;
        fVar13 = fVar13 + fVar13;
        fVar14 = fVar14 + fVar14;
        fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar3;
        fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar4;
        fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar5;
        fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar3;
        fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar4;
        fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar5;
        local_98 = ((fVar14 * fVar20 - fVar13 * fVar21) + fVar22 * fVar12 + fVar23) *
                   (float)(-(uint)((float)((uint)fVar3 & _DAT_146af3870) <= _DAT_146af39e0) &
                           (uint)fVar15 ^ (uint)fVar15);
        local_94 = ((fVar12 * fVar21 - fVar14 * fVar19) + fVar22 * fVar13 + fVar24) *
                   (float)(-(uint)((float)((uint)fVar4 & uRam0000000146af3874) <=
                                  fRam0000000146af39e4) & (uint)fVar17 ^ (uint)fVar17);
        local_90 = ((fVar13 * fVar19 - fVar12 * fVar20) + fVar22 * fVar14 + fVar25) *
                   (float)(-(uint)((float)((uint)fVar5 & uRam0000000146af3878) <=
                                  fRam0000000146af39e8) & (uint)fVar18 ^ (uint)fVar18);
        uVar10 = FUN_1426ba550(lVar11,&local_98,*(undefined4 *)(param_1 + 4),param_2,param_3);
        return uVar10;
      }
    }
  }
  return uVar10 & 0xffffffffffffff00;
}



// FUNCTION 14244b980 FindId body=212 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FCrc::MemCrc_DEPRECATED(param_3,0x10);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x48);
        if (((piVar1[1] == param_3[1] &&
             *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x48) == param_3[2]) &&
            piVar1[3] == param_3[3]) && *param_3 == *piVar1) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = piVar1[0x10];
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14244ba60 FUN_14244ba60 body=1149 status=ok
// SIG undefined FUN_14244ba60(void)

ulonglong FUN_14244ba60(longlong *param_1,longlong param_2)

{
  int *piVar1;
  void *_Src;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined2 *puVar15;
  uint uVar16;
  int iVar17;
  undefined2 *puVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  undefined2 *puVar23;
  bool bVar24;
  longlong *plVar25;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  undefined8 local_70;
  longlong *plStack_68;
  longlong local_60 [4];
  
  bVar24 = false;
  uVar12 = FUN_14293c170();
  if ((char)uVar12 != '\0') {
    return uVar12 & 0xffffffffffffff00;
  }
  cVar6 = FOutputDevice::CanBeUsedOnAnyThread(DAT_146b17150);
  plVar25 = *(longlong **)(*(longlong *)(param_2 + 0x460) + 0x4b8);
  if ((plVar25 == (longlong *)0x0) || (cVar7 = (**(code **)(*plVar25 + 0x20))(), cVar7 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  lVar20 = *(longlong *)(param_2 + 0x460);
  iVar11 = *(int *)(lVar20 + 0x4a8);
  if ((cVar6 != '\0') || (bVar5 = false, bVar4)) {
    bVar5 = true;
  }
  local_88 = *(int *)(lVar20 + 0x4a8);
  lVar19 = (longlong)local_88;
  puVar23 = (undefined2 *)0x0;
  _Src = *(void **)(lVar20 + 0x4a0);
  local_90 = (undefined2 *)0x0;
  if (local_88 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,local_88,0);
    puVar23 = local_90;
    _guard_xfg_dispatch_icall_nop(local_90,_Src,lVar19 * 2);
    lVar20 = *(longlong *)(param_2 + 0x460);
  }
  iVar17 = local_88;
  FUN_14270d290(lVar20,&local_80);
  iVar21 = 0;
  if (0 < (int)param_1[0xa6]) {
    plVar25 = param_1 + 0xa5;
    iVar22 = 1;
    lVar20 = 0;
    do {
      lVar19 = *plVar25;
      plVar2 = *(longlong **)(lVar19 + lVar20);
      if (plVar2 == (longlong *)0x0) {
LAB_14244bcf1:
        iVar9 = (int)param_1[0xa6];
        iVar10 = (iVar9 - iVar21) + -1;
        if (iVar10 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar19 + (longlong)iVar21 * 8),(void *)(lVar19 + (longlong)iVar22 * 8)
                     ,(longlong)iVar10 << 3);
          iVar9 = (int)param_1[0xa6];
        }
        *(int *)(param_1 + 0xa6) = iVar9 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar25);
        iVar21 = iVar21 + -1;
        iVar22 = iVar22 + -1;
        lVar20 = lVar20 + -8;
      }
      else {
        uVar8 = *(uint *)((longlong)plVar2 + 0xc);
        if ((int)uVar8 < (int)DAT_1469e91c4) {
          uVar16 = uVar8 & 0xffff;
          if ((int)uVar8 < 0) {
            uVar8 = uVar8 + 0xffff;
            uVar16 = uVar16 - 0x10000;
          }
          lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                   (longlong)(int)uVar16 * 0x18;
        }
        else {
          lVar13 = 0;
        }
        if ((*(uint *)(lVar13 + 8) >> 0x1d & 1) != 0) goto LAB_14244bcf1;
        if (bVar5) {
          cVar6 = FUniqueNetIdWrapper::operator==
                            (plVar2 + 0x96,*(longlong *)(param_2 + 0x460) + 0x4b0);
          if (cVar6 == '\0') goto LAB_14244bc37;
LAB_14244bce9:
          bVar4 = true;
        }
        else {
          if (1 < iVar11) {
            puVar18 = &DAT_143f3eda8;
            if (iVar17 != 0) {
              puVar18 = puVar23;
            }
            if ((int)plVar2[0x95] == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)plVar2[0x94];
            }
            iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar18);
            if (iVar9 == 0) {
              bVar24 = true;
              puVar18 = &DAT_143f3eda8;
              if (local_78 != 0) {
                puVar18 = local_80;
              }
              puVar14 = (undefined8 *)FUN_14270d290(plVar2,local_60);
              if (*(int *)(puVar14 + 1) == 0) {
                puVar15 = &DAT_143f3eda8;
              }
              else {
                puVar15 = (undefined2 *)*puVar14;
              }
              iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar18);
              if (iVar9 == 0) goto LAB_14244bce9;
            }
          }
LAB_14244bc37:
          bVar4 = false;
        }
        if ((bVar24) && (bVar24 = false, local_60[0] != 0)) {
          FMemory::Free();
        }
        if (bVar4) {
          plVar3 = *(longlong **)(param_2 + 0x460);
          *(longlong **)(param_2 + 0x460) = plVar2;
          (**(code **)(*plVar2 + 0x448))(plVar2,param_2);
          FUN_14223ef90(*(undefined8 *)(param_2 + 0x460),1);
          (**(code **)(**(longlong **)(param_2 + 0x460) + 0x3a0))(*(longlong **)(param_2 + 0x460),0)
          ;
          (**(code **)(*param_1 + 0x9c8))(param_1,param_2,plVar3);
          (**(code **)(*(longlong *)param_1[0x97] + 0x730))
                    ((longlong *)param_1[0x97],*(undefined8 *)(param_2 + 0x460));
          iVar11 = (int)param_1[0xa6];
          iVar17 = (iVar11 - iVar21) + -1;
          if (iVar17 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar25 + (longlong)iVar21 * 8),
                       (void *)(*plVar25 + (longlong)(iVar21 + 1) * 8),(longlong)iVar17 << 3);
            iVar11 = (int)param_1[0xa6];
          }
          *(int *)(param_1 + 0xa6) = iVar11 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar25);
          *(uint *)((longlong)plVar3 + 0x484) = *(uint *)((longlong)plVar3 + 0x484) | 0x10;
          local_70 = 0;
          plStack_68 = (longlong *)0x0;
          (**(code **)(*plVar3 + 0x758))(plVar3,&local_70);
          plVar25 = plStack_68;
          if (plStack_68 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_68 + 1;
            lVar20 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            puVar23 = local_90;
            if ((int)lVar20 == 1) {
              (**(code **)*plStack_68)(plStack_68);
              LOCK();
              piVar1 = (int *)((longlong)plVar25 + 0xc);
              iVar11 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              puVar23 = local_90;
              if (iVar11 == 1) {
                (**(code **)(*plVar25 + 8))(plVar25,1);
                puVar23 = local_90;
              }
            }
          }
          FUN_142227350(plVar3,0,1);
          (**(code **)(**(longlong **)(param_2 + 0x460) + 0x780))();
          uVar12 = 1;
          goto LAB_14244bd53;
        }
      }
      iVar21 = iVar21 + 1;
      iVar22 = iVar22 + 1;
      lVar20 = lVar20 + 8;
    } while (iVar21 < (int)param_1[0xa6]);
  }
  uVar12 = 0;
LAB_14244bd53:
  if (local_80 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar23 != (undefined2 *)0x0) {
    FMemory::Free(puVar23);
  }
  return uVar12;
}



// FUNCTION 14244bee0 FindLocalPlayerFromControllerId body=46 status=ok
// SIG undefined FindLocalPlayerFromControllerId(void)

longlong UGameInstance::FindLocalPlayerFromControllerId(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
  plVar1 = plVar3 + *(int *)(param_1 + 0x40);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    lVar2 = *plVar3;
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x108) == param_2)) break;
    plVar3 = plVar3 + 1;
  }
  return lVar2;
}



// FUNCTION 14244bf10 FUN_14244bf10 body=351 status=ok
// SIG undefined FUN_14244bf10(void)

longlong FUN_14244bf10(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  longlong *plVar9;
  undefined **local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  
  plVar9 = *(longlong **)(param_1 + 0x38);
  plVar3 = plVar9 + *(int *)(param_1 + 0x40);
  do {
    if (plVar9 == plVar3) {
      return 0;
    }
    lVar5 = *plVar9;
    if (lVar5 != 0) {
      FUN_142547b50(lVar5,&local_58);
      if (((local_50 != (longlong *)0x0) &&
          (cVar8 = (**(code **)(*local_50 + 0x20))(), cVar8 != '\0')) &&
         (cVar8 = (**(code **)*param_2)(param_2,local_50), cVar8 != '\0')) {
        local_58 = &PTR_FUN_143f740c8;
        if (local_40 != 0) {
          FMemory::Free();
        }
        local_58 = &PTR_FUN_143f73d18;
        if (local_48 == (longlong *)0x0) {
          return lVar5;
        }
        LOCK();
        plVar3 = local_48 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 != 1) {
          return lVar5;
        }
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 != 1) {
          return lVar5;
        }
        (**(code **)(*local_48 + 8))(local_48,1);
        return lVar5;
      }
      local_58 = &PTR_FUN_143f740c8;
      if (local_40 != 0) {
        FMemory::Free();
      }
      plVar7 = local_48;
      local_58 = &PTR_FUN_143f73d18;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    }
    plVar9 = plVar9 + 1;
  } while( true );
}



// FUNCTION 14244c070 FUN_14244c070 body=522 status=ok
// SIG undefined FUN_14244c070(void)

longlong FUN_14244c070(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined **local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  
  puVar4 = (undefined8 *)*param_2;
  if (puVar4 == (undefined8 *)0x0) {
    plVar5 = (longlong *)param_2[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar5 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    return 0;
  }
  plVar10 = *(longlong **)(param_1 + 0x38);
  plVar5 = plVar10 + *(int *)(param_1 + 0x40);
  do {
    if (plVar10 == plVar5) {
      lVar9 = 0;
LAB_14244c1b9:
      plVar5 = (longlong *)param_2[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar5 + 1;
        lVar6 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      return lVar9;
    }
    lVar9 = *plVar10;
    if (lVar9 != 0) {
      FUN_142547b50(lVar9,&local_58);
      if (((local_50 != (longlong *)0x0) &&
          (cVar8 = (**(code **)(*local_50 + 0x20))(), cVar8 != '\0')) &&
         (cVar8 = (**(code **)*puVar4)(puVar4,local_50), cVar8 != '\0')) {
        local_58 = &PTR_FUN_143f740c8;
        if (local_40 != 0) {
          FMemory::Free();
        }
        local_58 = &PTR_FUN_143f73d18;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_48 + 1;
          lVar6 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar1 = (int *)((longlong)local_48 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_48 + 8))(local_48,1);
            }
          }
        }
        goto LAB_14244c1b9;
      }
      local_58 = &PTR_FUN_143f740c8;
      if (local_40 != 0) {
        FMemory::Free();
      }
      plVar7 = local_48;
      local_58 = &PTR_FUN_143f73d18;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    }
    plVar10 = plVar10 + 1;
  } while( true );
}



// FUNCTION 14244c280 FUN_14244c280 body=282 status=ok
// SIG undefined FUN_14244c280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14244c280(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 local_28;
  undefined4 local_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  lVar1 = *(longlong *)(param_2 + 0x168);
  if (lVar1 == 0) {
    local_28 = _DAT_1468b5d90;
    local_20 = DAT_1468b5d98;
  }
  else {
    local_28 = *(undefined8 *)(lVar1 + 0x220);
    local_20 = *(undefined4 *)(lVar1 + 0x228);
  }
  *param_4 = local_28;
  *(undefined4 *)(param_4 + 1) = local_20;
  lVar1 = *(longlong *)(param_2 + 0x168);
  if (lVar1 == 0) {
    uVar5 = (uint)((ulonglong)DAT_1468b5da0 >> 0x20);
  }
  else {
    local_18 = *(float *)(lVar1 + 0x210);
    fStack_14 = *(float *)(lVar1 + 0x214);
    fStack_10 = *(float *)(lVar1 + 0x218);
    fStack_c = *(float *)(lVar1 + 0x21c);
    auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_14);
    auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_18);
    auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_10);
    auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_c);
    iVar3 = movmskps(local_20,auVar2);
    if (iVar3 != 0) {
      *(float *)(lVar1 + 0x250) = local_18;
      *(float *)(lVar1 + 0x254) = fStack_14;
      *(float *)(lVar1 + 600) = fStack_10;
      *(float *)(lVar1 + 0x25c) = fStack_c;
      puVar4 = (undefined8 *)FQuat::Rotator(&local_18,&local_28);
      *(undefined8 *)(lVar1 + 0x260) = *puVar4;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar4 + 1);
    }
    uVar5 = (uint)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
  }
  *param_5 = (ulonglong)uVar5 << 0x20;
  *(undefined4 *)(param_5 + 1) = 0;
  return;
}



// FUNCTION 14244c3a0 FUN_14244c3a0 body=895 status=ok
// SIG undefined FUN_14244c3a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14244c3a0(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 local_a0;
  uint local_98 [2];
  longlong local_90;
  longlong local_88;
  int local_80;
  int local_78;
  char local_74;
  int local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x8e8))();
  lVar8 = UUGRichTextBlock::GetPrivateStaticClass();
  local_a0 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar8 != 0) {
    lVar9 = UUGRichTextBlock::GetPrivateStaticClass();
    lVar13 = lVar8;
    do {
      if (lVar13 == lVar9) goto LAB_14244c400;
      lVar13 = *(longlong *)(lVar13 + 0x30);
    } while (lVar13 != 0);
  }
  lVar8 = 0;
LAB_14244c400:
  local_98[0] = 5;
  local_40 = '\0';
  local_a8 = lVar8;
  FUN_14044bc80(&local_90,&local_a0,&local_a8);
  FUN_14045a130(local_98);
  iVar16 = local_78;
  lVar8 = local_68;
joined_r0x00014244c459:
  local_78 = iVar16;
  local_68 = lVar8;
  if (local_74 == '\0') {
    lVar10 = UUGRichTextBlock::GetPrivateStaticClass();
    lVar9 = local_68;
    lVar13 = local_90;
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      if (local_40 == '\0') {
        return local_68;
      }
      local_40 = 0;
      UWorld::RemoveOnActorSpawnedHandler(local_90,local_48);
      if (local_60 != 0) {
        FMemory::Free();
      }
      if (local_88 == 0) {
        return lVar9;
      }
      FMemory::Free();
      return lVar9;
    }
    iVar16 = local_78 + 1;
    if (iVar16 < local_58 + local_80) {
      lVar9 = (longlong)iVar16 * 8;
      iVar17 = local_58;
      iVar14 = local_80;
      do {
        if (iVar16 < iVar14) {
          lVar8 = *(longlong *)(local_88 + lVar9);
        }
        else {
          lVar8 = *(longlong *)(local_60 + (longlong)(iVar16 - iVar14) * 8);
        }
        local_70 = local_70 + 1;
        if ((lVar8 != 0) &&
           (lVar10 = AActor::GetLevel(lVar8), iVar17 = local_58, iVar14 = local_80, lVar10 != 0)) {
          if ((local_98[0] & 1) != 0) {
            iVar1 = *(int *)(lVar8 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar15 = iVar1 >> 0x1f & 0xffff;
              uVar7 = iVar1 + uVar15;
              lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                       (longlong)(int)((uVar7 & 0xffff) - uVar15) * 0x18;
            }
            else {
              lVar11 = 0;
            }
            if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) goto LAB_14244c638;
          }
          if (((local_98[0] >> 1 & 1) == 0) ||
             (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar8), iVar17 = local_58,
             iVar14 = local_80, cVar6 != '\0')) {
            if ((local_98[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar10 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar10 + 0x205) & 0x10) == 0)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              piVar2 = *(int **)(lVar10 + 600);
              if (((*(longlong *)(lVar10 + 0xc0) == 0) ||
                  (piVar12 = (int *)UWorld::GetActiveLevelCollection(), piVar12 == (int *)0x0)) ||
                 (piVar2 == piVar12)) {
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
              iVar17 = local_58;
              iVar14 = local_80;
              if ((!bVar3) || (!bVar4)) goto LAB_14244c638;
            }
            lVar10 = ULevel::GetWorld(lVar10);
            iVar17 = local_58;
            iVar14 = local_80;
            if (lVar10 == lVar13) {
              lVar10 = AActor::GetLevel(lVar8);
              if (lVar10 == *(longlong *)(lVar13 + 0x30)) goto joined_r0x00014244c459;
              lVar10 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              iVar17 = local_58;
              iVar14 = local_80;
              if (!bVar3) goto joined_r0x00014244c459;
            }
          }
        }
LAB_14244c638:
        iVar16 = iVar16 + 1;
        lVar9 = lVar9 + 8;
        if (iVar17 + iVar14 <= iVar16) break;
      } while( true );
    }
    local_68 = 0;
    local_74 = '\x01';
  }
  if (local_40 != '\0') {
    local_40 = 0;
    UWorld::RemoveOnActorSpawnedHandler(local_90,local_48);
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
  }
  return 0;
}



// FUNCTION 14244c720 FUN_14244c720 body=939 status=ok
// SIG undefined FUN_14244c720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14244c720(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  undefined2 *puVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  uint local_a8 [2];
  longlong local_a0;
  longlong local_98;
  int local_90;
  int local_88;
  char local_84;
  int local_80;
  longlong local_78;
  longlong local_70;
  int local_68;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d0 = param_1;
  local_c8 = param_2;
  uVar8 = (**(code **)(*param_1 + 0x148))();
  local_d8 = uVar8;
  if (1 < *(int *)(param_3 + 1)) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)*param_3;
    }
    FName::FName(&local_b0,puVar16,1);
    local_c0 = UUGRichTextBlock::GetPrivateStaticClass();
    if (local_c0 != 0) {
      lVar9 = UUGRichTextBlock::GetPrivateStaticClass();
      lVar13 = local_c0;
      do {
        if (lVar13 == lVar9) goto LAB_14244c7c0;
        lVar13 = *(longlong *)(lVar13 + 0x30);
      } while (lVar13 != 0);
    }
    local_c0 = 0;
LAB_14244c7c0:
    local_a8[0] = 5;
    local_50 = '\0';
    local_b8 = uVar8;
    FUN_14044bc80(&local_a0,&local_b8,&local_c0);
    FUN_14045a130(local_a8);
    if (local_84 == '\0') {
LAB_14244c800:
      lVar9 = local_78;
      lVar13 = local_a0;
      if ((local_78 != 0) && (*(longlong *)(local_78 + 0x480) == local_b0)) {
        if (local_50 == '\0') {
          return local_78;
        }
        local_50 = 0;
        UWorld::RemoveOnActorSpawnedHandler(local_a0,local_58);
        if (local_70 != 0) {
          FMemory::Free();
        }
        if (local_98 == 0) {
          return lVar9;
        }
        FMemory::Free();
        return lVar9;
      }
      iVar19 = local_88 + 1;
      if (iVar19 < local_68 + local_90) {
        lVar9 = (longlong)iVar19 * 8;
        iVar14 = local_90;
        iVar18 = local_68;
        do {
          if (iVar19 < iVar14) {
            lVar17 = *(longlong *)(local_98 + lVar9);
          }
          else {
            lVar17 = *(longlong *)(local_70 + (longlong)(iVar19 - iVar14) * 8);
          }
          local_80 = local_80 + 1;
          if ((lVar17 != 0) &&
             (lVar10 = AActor::GetLevel(lVar17), iVar14 = local_90, iVar18 = local_68, lVar10 != 0))
          {
            if ((local_a8[0] & 1) != 0) {
              iVar1 = *(int *)(lVar17 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar15 = iVar1 >> 0x1f & 0xffff;
                uVar7 = iVar1 + uVar15;
                lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                         (longlong)(int)((uVar7 & 0xffff) - uVar15) * 0x18;
              }
              else {
                lVar11 = 0;
              }
              if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) goto LAB_14244c9b5;
            }
            if (((local_a8[0] >> 1 & 1) == 0) ||
               (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar17), iVar14 = local_90,
               iVar18 = local_68, cVar6 != '\0')) {
              if ((local_a8[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar10 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar10 + 0x205) & 0x10) == 0)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                piVar2 = *(int **)(lVar10 + 600);
                if (((*(longlong *)(lVar10 + 0xc0) == 0) ||
                    (piVar12 = (int *)UWorld::GetActiveLevelCollection(), piVar12 == (int *)0x0)) ||
                   (piVar2 == piVar12)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if ((bVar3) || (bVar3 = false, bVar4)) {
                  bVar3 = true;
                }
                iVar14 = local_90;
                iVar18 = local_68;
                if ((!bVar5) || (!bVar3)) goto LAB_14244c9b5;
              }
              lVar10 = ULevel::GetWorld(lVar10);
              iVar14 = local_90;
              iVar18 = local_68;
              if (lVar10 == lVar13) {
                lVar10 = AActor::GetLevel(lVar17);
                if (lVar10 == *(longlong *)(lVar13 + 0x30)) goto LAB_14244ca7c;
                lVar10 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                iVar14 = local_90;
                iVar18 = local_68;
                if (!bVar5) goto LAB_14244ca7c;
              }
            }
          }
LAB_14244c9b5:
          iVar19 = iVar19 + 1;
          lVar9 = lVar9 + 8;
          if (iVar18 + iVar14 <= iVar19) break;
        } while( true );
      }
      local_78 = 0;
      local_84 = '\x01';
      param_2 = local_c8;
      param_1 = local_d0;
    }
LAB_14244c9dd:
    if (local_50 != '\0') {
      local_50 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(local_a0,local_58);
      if (local_70 != 0) {
        FMemory::Free();
      }
      if (local_98 != 0) {
        FMemory::Free();
      }
    }
  }
  uVar8 = local_d8;
  cVar6 = (**(code **)(*param_1 + 0x8a8))(param_1,param_2);
  if (((cVar6 == '\0') || (lVar13 = FWeakObjectPtr::Get(param_2 + 0x468), lVar13 == 0)) &&
     (lVar13 = FUN_14293b9d0(param_1,param_2), lVar13 == 0)) {
    lVar13 = UWorld::GetWorldSettings(uVar8,0,1);
  }
  return lVar13;
LAB_14244ca7c:
  param_2 = local_c8;
  param_1 = local_d0;
  local_88 = iVar19;
  local_78 = lVar17;
  if (local_84 != '\0') goto LAB_14244c9dd;
  goto LAB_14244c800;
}



// FUNCTION 14244cae0 FUN_14244cae0 body=141 status=ok
// SIG undefined FUN_14244cae0(void)

void FUN_14244cae0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x90);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x98);
  if (lVar2 != 0) {
    FUN_142512170(lVar2);
    FMemory::operator_delete(lVar2,0xf0);
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0xa0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 14244cb70 FUN_14244cb70 body=331 status=ok
// SIG undefined FUN_14244cb70(void)

void FUN_14244cb70(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  float fStack_20;
  float fStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar4 = (**(code **)(*param_2 + 0x778))(param_2,param_2[0x91]);
  if (param_2[0x91] == 0) {
    (**(code **)(*param_2 + 0x7b0))(param_2);
  }
  else {
    lVar1 = *(longlong *)(param_2[0x91] + 0x168);
    if (lVar1 == 0) {
      uVar4 = (undefined4)DAT_1468b5da0;
      uVar7 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      fStack_20 = (float)DAT_1468b5da8;
    }
    else {
      fVar3 = *(float *)(lVar1 + 0x210);
      local_28 = *(undefined8 *)(lVar1 + 0x210);
      fStack_20 = *(float *)(lVar1 + 0x218);
      fStack_1c = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != *(float *)(lVar1 + 0x214));
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != fVar3);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_20);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_1c);
      iVar5 = movmskps(uVar4,auVar2);
      if (iVar5 != 0) {
        *(float *)(lVar1 + 0x250) = fVar3;
        *(float *)(lVar1 + 0x254) = *(float *)(lVar1 + 0x214);
        *(float *)(lVar1 + 600) = fStack_20;
        *(float *)(lVar1 + 0x25c) = fStack_1c;
        puVar6 = (undefined8 *)FQuat::Rotator(&local_28,&local_18);
        *(undefined8 *)(lVar1 + 0x260) = *puVar6;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar6 + 1);
      }
      uVar4 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      fStack_20 = (float)*(undefined4 *)(lVar1 + 0x268);
    }
    local_28 = CONCAT44(uVar7,uVar4);
    local_18 = local_28;
    local_10 = fStack_20;
    FUN_142920470(param_2,&local_18,1);
    local_38 = *param_3;
    local_30 = 0;
    (**(code **)(*param_2 + 0x728))(param_2,&local_38,1);
    (**(code **)(*param_1 + 0x858))(param_1,param_2[0x91]);
    FUN_14293c060(param_1,param_2);
  }
  return;
}



// FUNCTION 14244ccc0 FinishSpawningActor body=34 status=ok
// SIG undefined FinishSpawningActor(void)

longlong UGameplayStatics::FinishSpawningActor(longlong param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_14222b9f0(param_1,param_2,0,0);
  }
  return param_1;
}



// FUNCTION 14244ccf0 FlushLevelStreaming body=52 status=ok
// SIG undefined FlushLevelStreaming(void)

void UGameplayStatics::FlushLevelStreaming(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    FUN_1428caf60(lVar1,1);
    return;
  }
  return;
}



// FUNCTION 14244cd30 FUN_14244cd30 body=479 status=ok
// SIG undefined FUN_14244cd30(void)

void FUN_14244cd30(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong local_28;
  int local_20;
  
  if (param_2 != 0) {
    bVar2 = false;
    lVar5 = 0;
    iVar7 = (int)param_1[0x9e] + -1;
    if (-1 < iVar7) {
      lVar8 = (longlong)iVar7 << 4;
      do {
        lVar4 = lVar5;
        if ((*(int *)(lVar8 + 8 + param_1[0x9d]) != 0) &&
           (puVar1 = *(undefined8 **)(lVar8 + param_1[0x9d]), puVar1 != (undefined8 *)0x0)) {
          lVar4 = (**(code **)*puVar1)();
        }
        if (lVar4 == param_2) {
          FUN_14245ca00(param_1 + 0x9d,iVar7,1,1);
          bVar2 = true;
        }
        lVar8 = lVar8 + -0x10;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
      if (bVar2) {
        (**(code **)(*param_1 + 0x788))(param_1);
      }
    }
    lVar8 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
         ) != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      param_2 = lVar5;
    }
    lVar5 = AActor::GetWorldSettings(param_1);
    if ((((param_2 != 0) && (*(longlong *)(param_2 + 0x460) != 0)) && (lVar5 != 0)) &&
       (*(longlong *)(lVar5 + 0x600) == *(longlong *)(param_2 + 0x460))) {
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      UWorld::GetPlayerControllerIterator(uVar6,&local_28);
      while( true ) {
        if ((local_20 < 0) || (*(int *)(local_28 + 8) <= local_20)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          lVar8 = *(longlong *)(lVar5 + 0x600);
          goto LAB_14244cee8;
        }
        lVar8 = FWeakObjectPtr::Get();
        if (((lVar8 != 0) && (lVar8 = *(longlong *)(lVar8 + 0x460), lVar8 != 0)) &&
           ((lVar8 != *(longlong *)(param_2 + 0x460) &&
            ((cVar3 = FUN_1407cd900(), cVar3 == '\0' && (cVar3 = FUN_1407cd900(), cVar3 == '\0')))))
           ) break;
        local_20 = local_20 + 1;
      }
      *(longlong *)(lVar5 + 0x600) = lVar8;
LAB_14244cee8:
      if (lVar8 == *(longlong *)(param_2 + 0x460)) {
        *(undefined8 *)(lVar5 + 0x600) = 0;
      }
    }
  }
  return;
}



// FUNCTION 14244cf10 GenerateConvenientWindowedResolutions body=598 status=ok
// SIG undefined GenerateConvenientWindowedResolutions(void)

void GenerateConvenientWindowedResolutions(int *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  int local_res8;
  int iStackX_c;
  longlong local_res10;
  
  iVar1 = *param_1;
  pfVar6 = (float *)&DAT_1450aa990;
  iVar2 = param_1[1];
  local_res10 = 4;
  do {
    pfVar5 = (float *)&DAT_1450aa9a0;
    lVar4 = 3;
    do {
      if (iVar1 < iVar2) {
        fVar7 = (float)param_1[1] * *pfVar6;
        fVar8 = (float)((int)ROUND(fVar7 + fVar7 + 0.5) >> 1);
        fVar7 = fVar8 * *pfVar5 * 0.0625;
      }
      else {
        fVar7 = (float)*param_1 * *pfVar6;
        fVar7 = (float)((int)ROUND(fVar7 + fVar7 + 0.5) >> 1);
        fVar8 = fVar7 * *pfVar5 * 0.0625;
      }
      if ((((fVar7 < (float)*param_1) && (fVar8 < (float)param_1[1])) && (1280.0 <= fVar7)) &&
         (720.0 <= fVar8)) {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        *(ulonglong *)(*param_2 + (longlong)iVar3 * 8) = CONCAT44((int)fVar8,(int)fVar7);
      }
      pfVar5 = pfVar5 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    pfVar6 = pfVar6 + 1;
    local_res10 = local_res10 + -1;
  } while (local_res10 != 0);
  if ((int)param_2[1] == 0) {
    fVar7 = (float)param_1[1];
    if ((fVar7 <= 720.0) || ((float)*param_1 <= 1280.0)) {
      local_res8 = (int)((float)((int)ROUND((float)*param_1 + (float)*param_1 + 0.5) >> 1) *
                        0.8333333);
      iStackX_c = (int)((float)((int)ROUND(fVar7 + fVar7 + 0.5) >> 1) * 0.8333333);
    }
    else {
      local_res8 = 0x500;
      iStackX_c = 0x2d0;
    }
    *(undefined4 *)(param_2 + 1) = 1;
    if (*(int *)((longlong)param_2 + 0xc) < 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    *(ulonglong *)*param_2 = CONCAT44(iStackX_c,local_res8);
  }
  return;
}



// FUNCTION 14244d170 FUN_14244d170 body=396 status=ok
// SIG undefined FUN_14244d170(void)

void FUN_14244d170(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_38 [8];
  longlong local_30;
  undefined8 local_28;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1429e18b0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_14293bf20(param_1,param_2);
      (**(code **)(*param_1 + 0x880))(param_1,param_2);
      if ((longlong *)param_1[0x96] != (longlong *)0x0) {
        lVar3 = *param_2;
        cVar2 = (**(code **)(*(longlong *)param_1[0x96] + 0x7a0))();
        (**(code **)(lVar3 + 0xc00))(param_2,cVar2 == '\0');
      }
      (**(code **)(*param_1 + 0x8a0))(param_1,param_2);
      local_38[0] = 0;
      local_res20[0] = 0;
      local_res18[0] = 0;
      local_res10[0] = 0;
      cVar2 = (**(code **)(*param_1 + 0x878))
                        (param_1,param_2,local_38,local_res20,local_res18,local_res10);
      if (cVar2 != '\0') {
        (**(code **)(*param_2 + 0xba8))
                  (param_2,1,local_38[0],local_res20[0],local_res18[0],local_res10[0]);
      }
      uVar6 = 0;
      local_30 = 0;
      local_28 = 0;
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      UWorld::GetMatineeActors(uVar4,&local_30);
      uVar7 = uVar6;
      if (0 < (int)local_28) {
        do {
          FUN_1424e45b0(*(undefined8 *)(uVar7 + local_30),param_2);
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          uVar7 = uVar7 + 8;
        } while ((int)uVar5 < (int)local_28);
      }
      if (local_30 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14244d300 Get body=207 status=ok
// SIG undefined Get(void)

undefined8 * FExternalTextureRegistry::Get(void)

{
  undefined8 *puVar1;
  
  if (DAT_146af3800 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)operator_new(200);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined4 *)(puVar1 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
      puVar1[8] = 0;
      *(undefined4 *)(puVar1 + 9) = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      *(undefined4 *)(puVar1 + 0x10) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x84) = 0;
      puVar1[0x12] = 0;
      *(undefined4 *)(puVar1 + 0x13) = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 0x14));
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 0x14),4000);
      DAT_146af3800 = puVar1;
      return puVar1;
    }
    DAT_146af3800 = (undefined8 *)0x0;
  }
  return DAT_146af3800;
}



// FUNCTION 14244d3d0 FUN_14244d3d0 body=108 status=ok
// SIG undefined FUN_14244d3d0(void)

undefined * FUN_14244d3d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146af3a00) {
    _Init_thread_header(&DAT_146af3a00);
    if (DAT_146af3a00 == -1) {
      atexit(`FGameDelegates::Get'::`2'::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&DAT_146af3a00);
      return &DAT_1465325f0;
    }
  }
  return &DAT_1465325f0;
}



// FUNCTION 14244d440 GetAccurateRealTime body=161 status=ok
// SIG undefined GetAccurateRealTime(void)

void UGameplayStatics::GetAccurateRealTime(undefined8 param_1,int *param_2,float *param_3)

{
  uint uVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  LARGE_INTEGER local_res10 [3];
  
  QueryPerformanceCounter(local_res10);
  dVar5 = ((double)local_res10[0].QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_1468e2430;
  lVar2 = (longlong)dVar5;
  dVar3 = dVar5;
  if ((lVar2 != -0x8000000000000000) && ((double)lVar2 != dVar5)) {
    auVar4._8_8_ = dVar5;
    auVar4._0_8_ = dVar5;
    uVar1 = movmskpd(0,auVar4);
    dVar3 = (double)(longlong)(lVar2 - (ulonglong)(uVar1 & 1));
  }
  *param_2 = (int)dVar3;
  *param_3 = (float)(dVar5 - (double)(int)dVar3);
  return;
}



// FUNCTION 14244d4f0 FUN_14244d4f0 body=845 status=ok
// SIG undefined FUN_14244d4f0(void)

undefined8 * FUN_14244d4f0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar9 = 0;
  lVar6 = 0;
  fVar11 = 0.0;
  fVar13 = 0.0;
  lVar7 = (longlong)(int)param_2[1];
  fVar12 = 0.0;
  if (3 < lVar7) {
    plVar8 = (longlong *)(*param_2 + 0x10);
    lVar5 = (lVar7 - 4U >> 2) + 1;
    lVar6 = lVar5 * 4;
    do {
      lVar1 = plVar8[-2];
      if (lVar1 != 0) {
        uVar2 = *(uint *)(lVar1 + 0xc);
        if ((int)uVar2 < (int)DAT_1469e91c4) {
          uVar3 = uVar2 & 0xffff;
          if ((int)uVar2 < 0) {
            uVar2 = uVar2 + 0xffff;
            uVar3 = uVar3 - 0x10000;
          }
          lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)uVar3 * 0x18;
        }
        else {
          lVar4 = 0;
        }
        if (((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) &&
           (lVar1 = *(longlong *)(lVar1 + 0x168), lVar1 != 0)) {
          iVar9 = iVar9 + 1;
          fVar11 = fVar11 + *(float *)(lVar1 + 0x220);
          fVar13 = fVar13 + *(float *)(lVar1 + 0x224);
          fVar12 = fVar12 + *(float *)(lVar1 + 0x228);
        }
      }
      lVar1 = plVar8[-1];
      if (lVar1 != 0) {
        uVar2 = *(uint *)(lVar1 + 0xc);
        if ((int)uVar2 < (int)DAT_1469e91c4) {
          uVar3 = uVar2 & 0xffff;
          if ((int)uVar2 < 0) {
            uVar2 = uVar2 + 0xffff;
            uVar3 = uVar3 - 0x10000;
          }
          lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)uVar3 * 0x18;
        }
        else {
          lVar4 = 0;
        }
        if (((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) &&
           (lVar1 = *(longlong *)(lVar1 + 0x168), lVar1 != 0)) {
          iVar9 = iVar9 + 1;
          fVar11 = fVar11 + *(float *)(lVar1 + 0x220);
          fVar13 = fVar13 + *(float *)(lVar1 + 0x224);
          fVar12 = fVar12 + *(float *)(lVar1 + 0x228);
        }
      }
      lVar1 = *plVar8;
      if (lVar1 != 0) {
        uVar2 = *(uint *)(lVar1 + 0xc);
        if ((int)uVar2 < (int)DAT_1469e91c4) {
          uVar3 = uVar2 & 0xffff;
          if ((int)uVar2 < 0) {
            uVar2 = uVar2 + 0xffff;
            uVar3 = uVar3 - 0x10000;
          }
          lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)uVar3 * 0x18;
        }
        else {
          lVar4 = 0;
        }
        if (((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) &&
           (lVar1 = *(longlong *)(lVar1 + 0x168), lVar1 != 0)) {
          iVar9 = iVar9 + 1;
          fVar11 = fVar11 + *(float *)(lVar1 + 0x220);
          fVar13 = fVar13 + *(float *)(lVar1 + 0x224);
          fVar12 = fVar12 + *(float *)(lVar1 + 0x228);
        }
      }
      lVar1 = plVar8[1];
      if (lVar1 != 0) {
        uVar2 = *(uint *)(lVar1 + 0xc);
        if ((int)uVar2 < (int)DAT_1469e91c4) {
          uVar3 = uVar2 & 0xffff;
          if ((int)uVar2 < 0) {
            uVar2 = uVar2 + 0xffff;
            uVar3 = uVar3 - 0x10000;
          }
          lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)uVar3 * 0x18;
        }
        else {
          lVar4 = 0;
        }
        if (((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) &&
           (lVar1 = *(longlong *)(lVar1 + 0x168), lVar1 != 0)) {
          iVar9 = iVar9 + 1;
          fVar11 = fVar11 + *(float *)(lVar1 + 0x220);
          fVar13 = fVar13 + *(float *)(lVar1 + 0x224);
          fVar12 = fVar12 + *(float *)(lVar1 + 0x228);
        }
      }
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (lVar6 < lVar7) {
    lVar7 = lVar7 - lVar6;
    plVar8 = (longlong *)(*param_2 + lVar6 * 8);
    do {
      lVar6 = *plVar8;
      if (lVar6 != 0) {
        uVar2 = *(uint *)(lVar6 + 0xc);
        if ((int)uVar2 < (int)DAT_1469e91c4) {
          uVar3 = uVar2 & 0xffff;
          if ((int)uVar2 < 0) {
            uVar2 = uVar2 + 0xffff;
            uVar3 = uVar3 - 0x10000;
          }
          lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)uVar3 * 0x18;
        }
        else {
          lVar5 = 0;
        }
        if (((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) &&
           (lVar6 = *(longlong *)(lVar6 + 0x168), lVar6 != 0)) {
          iVar9 = iVar9 + 1;
          fVar11 = fVar11 + *(float *)(lVar6 + 0x220);
          fVar13 = fVar13 + *(float *)(lVar6 + 0x224);
          fVar12 = fVar12 + *(float *)(lVar6 + 0x228);
        }
      }
      plVar8 = plVar8 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (0 < iVar9) {
    fVar10 = 1.0 / (float)iVar9;
    *param_1 = CONCAT44(fVar13 * fVar10,fVar11 * fVar10);
    *(float *)(param_1 + 1) = fVar12 * fVar10;
  }
  return param_1;
}



// FUNCTION 14244d840 FUN_14244d840 body=707 status=ok
// SIG undefined FUN_14244d840(void)

void FUN_14244d840(longlong *param_1,byte param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  float *pfVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_a8;
  undefined1 local_98 [128];
  
  cVar2 = '\0';
  iVar8 = 0;
  fVar9 = DAT_1468b5d98;
  fVar10 = DAT_1468b5d90;
  local_a8 = DAT_1468b5d94;
  fVar11 = DAT_1468b5d90;
  fVar12 = DAT_1468b5d94;
  fVar13 = DAT_1468b5d98;
  if (0 < (int)param_1[1]) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)(lVar7 + *param_1);
      if (plVar1 != (longlong *)0x0) {
        uVar3 = *(uint *)((longlong)plVar1 + 0xc);
        if ((int)uVar3 < (int)DAT_1469e91c4) {
          uVar6 = uVar3 & 0xffff;
          if ((int)uVar3 < 0) {
            uVar3 = uVar3 + 0xffff;
            uVar6 = uVar6 - 0x10000;
          }
          lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                  (longlong)(int)uVar6 * 0x18;
        }
        else {
          lVar4 = 0;
        }
        if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
          pfVar5 = (float *)(**(code **)(*plVar1 + 0x560))(plVar1,local_98,param_2 ^ 1);
          if (cVar2 == '\0') {
            if (*(char *)(pfVar5 + 6) != '\0') {
              fVar11 = *pfVar5;
              fVar12 = pfVar5[1];
              fVar13 = pfVar5[2];
              fVar10 = pfVar5[3];
              cVar2 = SUB41(pfVar5[6],0);
              fVar9 = (float)((ulonglong)*(undefined8 *)(pfVar5 + 4) >> 0x20);
              local_a8 = (float)*(undefined8 *)(pfVar5 + 4);
            }
          }
          else if (*(char *)(pfVar5 + 6) != '\0') {
            if (*pfVar5 < fVar11) {
              fVar11 = *pfVar5;
            }
            if (pfVar5[1] < fVar12) {
              fVar12 = pfVar5[1];
            }
            if (pfVar5[2] < fVar13) {
              fVar13 = pfVar5[2];
            }
            if (fVar10 < pfVar5[3]) {
              fVar10 = pfVar5[3];
            }
            if (local_a8 < pfVar5[4]) {
              local_a8 = pfVar5[4];
            }
            if (fVar9 < pfVar5[5]) {
              fVar9 = pfVar5[5];
            }
          }
        }
      }
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar8 < (int)param_1[1]);
  }
  *param_4 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  *(float *)(param_4 + 1) = DAT_1468b5d98;
  *param_3 = *param_4;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_4 + 1);
  if (cVar2 != '\0') {
    *param_3 = CONCAT44((local_a8 + fVar12) * 0.5,(fVar10 + fVar11) * 0.5);
    *(float *)(param_3 + 1) = (fVar9 + fVar13) * 0.5;
    *param_4 = CONCAT44((local_a8 - fVar12) * 0.5,(fVar10 - fVar11) * 0.5);
    *(float *)(param_4 + 1) = (fVar9 - fVar13) * 0.5;
  }
  return;
}



// FUNCTION 14244db10 FUN_14244db10 body=919 status=ok
// SIG undefined FUN_14244db10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14244db10(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  uint local_a0 [2];
  longlong local_98;
  longlong local_90;
  int local_88;
  int local_80;
  char local_7c;
  int local_78;
  longlong local_70;
  longlong local_68;
  int local_60;
  undefined8 local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_3 + 1) = 0;
  local_a8 = param_3;
  if (0x7fffffff < *(uint *)((longlong)param_3 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  local_b0 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (param_2 != 0) {
    lVar8 = FUN_1428dfc70();
    lVar12 = param_2;
    do {
      if (lVar12 == lVar8) {
        if (local_b0 == 0) {
          return;
        }
        local_a0[0] = 5;
        local_48 = '\0';
        local_b8 = param_2;
        FUN_14044bc80(&local_98,&local_b0,&local_b8);
        FUN_14045a130(local_a0);
        iVar17 = local_80;
        lVar12 = local_70;
joined_r0x00014244dbcd:
        local_80 = iVar17;
        local_70 = lVar12;
        if (local_7c == '\0') {
          iVar17 = *(int *)(lVar12 + 0xc);
          if (iVar17 < (int)DAT_1469e91c4) {
            uVar13 = iVar17 >> 0x1f & 0xffff;
            uVar7 = iVar17 + uVar13;
            lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                    (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18;
          }
          else {
            lVar8 = 0;
          }
          if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) {
            iVar17 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar17 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar17 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar17);
            }
            *(longlong *)(*param_3 + (longlong)iVar17 * 8) = lVar12;
          }
          lVar8 = local_98;
          iVar17 = local_80 + 1;
          if (iVar17 < local_60 + local_88) {
            lVar16 = (longlong)iVar17 * 8;
            iVar15 = local_60;
            iVar14 = local_88;
            do {
              if (iVar17 < iVar14) {
                lVar12 = *(longlong *)(local_90 + lVar16);
              }
              else {
                lVar12 = *(longlong *)(local_68 + (longlong)(iVar17 - iVar14) * 8);
              }
              local_78 = local_78 + 1;
              if ((lVar12 != 0) &&
                 (lVar9 = AActor::GetLevel(lVar12), iVar15 = local_60, iVar14 = local_88, lVar9 != 0
                 )) {
                if ((local_a0[0] & 1) != 0) {
                  iVar1 = *(int *)(lVar12 + 0xc);
                  if (iVar1 < (int)DAT_1469e91c4) {
                    uVar13 = iVar1 >> 0x1f & 0xffff;
                    uVar7 = iVar1 + uVar13;
                    lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                             (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18;
                  }
                  else {
                    lVar10 = 0;
                  }
                  if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) != 0) goto LAB_14244de05;
                }
                if (((local_a0[0] >> 1 & 1) == 0) ||
                   (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar12), iVar15 = local_60,
                   iVar14 = local_88, cVar6 != '\0')) {
                  if ((local_a0[0] >> 2 & 1) != 0) {
                    if (((*(byte *)(lVar9 + 0x204) & 0x10) == 0) &&
                       ((*(byte *)(lVar9 + 0x205) & 0x10) == 0)) {
                      bVar5 = false;
                    }
                    else {
                      bVar5 = true;
                    }
                    piVar2 = *(int **)(lVar9 + 600);
                    if (((*(longlong *)(lVar9 + 0xc0) == 0) ||
                        (piVar11 = (int *)UWorld::GetActiveLevelCollection(), piVar11 == (int *)0x0)
                        ) || (piVar2 == piVar11)) {
                      bVar3 = true;
                    }
                    else {
                      bVar3 = false;
                    }
                    if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                      bVar4 = true;
                    }
                    else {
                      bVar4 = false;
                    }
                    if ((bVar3) || (bVar3 = false, bVar4)) {
                      bVar3 = true;
                    }
                    iVar15 = local_60;
                    iVar14 = local_88;
                    if ((!bVar5) || (!bVar3)) goto LAB_14244de05;
                  }
                  lVar9 = ULevel::GetWorld(lVar9);
                  iVar15 = local_60;
                  iVar14 = local_88;
                  if (lVar9 == lVar8) {
                    lVar9 = AActor::GetLevel(lVar12);
                    param_3 = local_a8;
                    if (lVar9 == *(longlong *)(lVar8 + 0x30)) goto joined_r0x00014244dbcd;
                    lVar9 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                      bVar5 = false;
                    }
                    else {
                      bVar5 = true;
                    }
                    iVar15 = local_60;
                    iVar14 = local_88;
                    param_3 = local_a8;
                    if (!bVar5) goto joined_r0x00014244dbcd;
                  }
                }
              }
LAB_14244de05:
              iVar17 = iVar17 + 1;
              lVar16 = lVar16 + 8;
              if (iVar15 + iVar14 <= iVar17) break;
            } while( true );
          }
          local_70 = 0;
          local_7c = '\x01';
        }
        if (local_48 == '\0') {
          return;
        }
        local_48 = 0;
        UWorld::RemoveOnActorSpawnedHandler(local_98,local_50);
        if (local_68 != 0) {
          FMemory::Free();
        }
        if (local_90 == 0) {
          return;
        }
        FMemory::Free();
        return;
      }
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 14244deb0 FUN_14244deb0 body=977 status=ok
// SIG undefined FUN_14244deb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14244deb0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  uint local_a0 [2];
  longlong local_98;
  longlong local_90;
  int local_88;
  int local_80;
  char local_7c;
  int local_78;
  longlong local_70;
  longlong local_68;
  int local_60;
  undefined8 local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_3 + 1) = 0;
  local_a8 = param_3;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  lVar8 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (param_2 != 0) {
    lVar9 = UInterface::GetPrivateStaticClass();
    lVar15 = param_2;
    do {
      if (lVar15 == lVar9) {
        if (lVar8 == 0) {
          return;
        }
        local_b0 = FUN_1428dfc70();
        local_a0[0] = 5;
        local_48 = '\0';
        local_b8 = lVar8;
        FUN_14044bc80(&local_98,&local_b8,&local_b0);
        FUN_14045a130(local_a0);
        iVar16 = local_80;
        lVar8 = local_70;
joined_r0x00014244df72:
        local_80 = iVar16;
        local_70 = lVar8;
        if (local_7c == '\0') {
          if (lVar8 != 0) {
            iVar16 = *(int *)(lVar8 + 0xc);
            if (iVar16 < (int)DAT_1469e91c4) {
              uVar12 = iVar16 >> 0x1f & 0xffff;
              uVar7 = iVar16 + uVar12;
              lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                       (longlong)(int)((uVar7 & 0xffff) - uVar12) * 0x18;
            }
            else {
              lVar15 = 0;
            }
            if ((*(uint *)(lVar15 + 8) >> 0x1d & 1) == 0) {
              lVar9 = UInterface::GetPrivateStaticClass();
              lVar15 = param_2;
              do {
                lVar11 = param_2;
                if (lVar15 == lVar9) goto LAB_14244e007;
                lVar15 = *(longlong *)(lVar15 + 0x30);
              } while (lVar15 != 0);
              lVar11 = 0;
LAB_14244e007:
              cVar6 = UClass::ImplementsInterface(*(undefined8 *)(lVar8 + 0x10),lVar11);
              if (cVar6 != '\0') {
                iVar16 = (int)param_3[1];
                *(int *)(param_3 + 1) = iVar16 + 1;
                if (*(int *)((longlong)param_3 + 0xc) < iVar16 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar16);
                }
                *(longlong *)(*param_3 + (longlong)iVar16 * 8) = lVar8;
              }
            }
          }
          local_b8 = local_98;
          iVar16 = local_80 + 1;
          if (iVar16 < local_60 + local_88) {
            lVar15 = (longlong)iVar16 * 8;
            iVar14 = local_60;
            iVar13 = local_88;
            do {
              if (iVar16 < iVar13) {
                lVar8 = *(longlong *)(local_90 + lVar15);
              }
              else {
                lVar8 = *(longlong *)(local_68 + (longlong)(iVar16 - iVar13) * 8);
              }
              local_78 = local_78 + 1;
              if ((lVar8 != 0) &&
                 (lVar9 = AActor::GetLevel(lVar8), iVar14 = local_60, iVar13 = local_88, lVar9 != 0)
                 ) {
                if ((local_a0[0] & 1) != 0) {
                  iVar1 = *(int *)(lVar8 + 0xc);
                  if (iVar1 < (int)DAT_1469e91c4) {
                    uVar12 = iVar1 >> 0x1f & 0xffff;
                    uVar7 = iVar1 + uVar12;
                    lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                             (longlong)(int)((uVar7 & 0xffff) - uVar12) * 0x18;
                  }
                  else {
                    lVar11 = 0;
                  }
                  if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) goto LAB_14244e1de;
                }
                if (((local_a0[0] >> 1 & 1) == 0) ||
                   (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar8), iVar14 = local_60,
                   iVar13 = local_88, cVar6 != '\0')) {
                  if ((local_a0[0] >> 2 & 1) != 0) {
                    if (((*(byte *)(lVar9 + 0x204) & 0x10) == 0) &&
                       ((*(byte *)(lVar9 + 0x205) & 0x10) == 0)) {
                      bVar5 = false;
                    }
                    else {
                      bVar5 = true;
                    }
                    piVar2 = *(int **)(lVar9 + 600);
                    if (((*(longlong *)(lVar9 + 0xc0) == 0) ||
                        (piVar10 = (int *)UWorld::GetActiveLevelCollection(), piVar10 == (int *)0x0)
                        ) || (piVar2 == piVar10)) {
                      bVar3 = true;
                    }
                    else {
                      bVar3 = false;
                    }
                    if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                      bVar4 = true;
                    }
                    else {
                      bVar4 = false;
                    }
                    if ((bVar3) || (bVar3 = false, bVar4)) {
                      bVar3 = true;
                    }
                    iVar14 = local_60;
                    iVar13 = local_88;
                    if ((!bVar5) || (!bVar3)) goto LAB_14244e1de;
                  }
                  lVar11 = ULevel::GetWorld(lVar9);
                  lVar9 = local_b8;
                  iVar14 = local_60;
                  iVar13 = local_88;
                  if (lVar11 == local_b8) {
                    lVar11 = AActor::GetLevel(lVar8);
                    param_3 = local_a8;
                    if (lVar11 == *(longlong *)(lVar9 + 0x30)) goto joined_r0x00014244df72;
                    lVar9 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                      bVar5 = false;
                    }
                    else {
                      bVar5 = true;
                    }
                    iVar14 = local_60;
                    iVar13 = local_88;
                    param_3 = local_a8;
                    if (!bVar5) goto joined_r0x00014244df72;
                  }
                }
              }
LAB_14244e1de:
              iVar16 = iVar16 + 1;
              lVar15 = lVar15 + 8;
              if (iVar14 + iVar13 <= iVar16) break;
            } while( true );
          }
          local_70 = 0;
          local_7c = '\x01';
        }
        if (local_48 == '\0') {
          return;
        }
        local_48 = 0;
        UWorld::RemoveOnActorSpawnedHandler(local_98,local_50);
        if (local_68 != 0) {
          FMemory::Free();
        }
        if (local_90 == 0) {
          return;
        }
        FMemory::Free();
        return;
      }
      lVar15 = *(longlong *)(lVar15 + 0x30);
    } while (lVar15 != 0);
  }
  return;
}



// FUNCTION 14244e290 FUN_14244e290 body=932 status=ok
// SIG undefined FUN_14244e290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14244e290(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iStackX_14;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  uint local_a0 [2];
  longlong local_98;
  longlong local_90;
  int local_88;
  int local_80;
  char local_7c;
  int local_78;
  longlong local_70;
  longlong local_68;
  int local_60;
  undefined8 local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_3 + 1) = 0;
  local_a8 = param_3;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  local_b8 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (((int)param_2 == 0) && (iStackX_14 = (int)((ulonglong)param_2 >> 0x20), iStackX_14 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((!bVar3) && (local_b8 != 0)) {
    local_b0 = FUN_1428dfc70();
    local_a0[0] = 5;
    local_48 = '\0';
    FUN_14044bc80(&local_98,&local_b8,&local_b0);
    FUN_14045a130(local_a0);
    if (local_7c == '\0') {
LAB_14244e372:
      lVar15 = local_70;
      if (local_70 != 0) {
        iVar16 = *(int *)(local_70 + 0xc);
        if (iVar16 < (int)DAT_1469e91c4) {
          uVar12 = iVar16 >> 0x1f & 0xffff;
          uVar7 = iVar16 + uVar12;
          lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                  (longlong)(int)((uVar7 & 0xffff) - uVar12) * 0x18;
        }
        else {
          lVar8 = 0;
        }
        if (((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) &&
           (cVar6 = FUN_142221b10(local_70,param_2), cVar6 != '\0')) {
          iVar16 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar16 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar16 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar16);
          }
          *(longlong *)(*param_3 + (longlong)iVar16 * 8) = lVar15;
        }
      }
      local_b8 = local_98;
      iVar16 = local_80 + 1;
      if (iVar16 < local_60 + local_88) {
        lVar15 = (longlong)iVar16 * 8;
        iVar14 = local_60;
        iVar13 = local_88;
        do {
          if (iVar16 < iVar13) {
            lVar8 = *(longlong *)(local_90 + lVar15);
          }
          else {
            lVar8 = *(longlong *)(local_68 + (longlong)(iVar16 - iVar13) * 8);
          }
          local_78 = local_78 + 1;
          if ((lVar8 != 0) &&
             (lVar9 = AActor::GetLevel(lVar8), iVar14 = local_60, iVar13 = local_88, lVar9 != 0)) {
            if ((local_a0[0] & 1) != 0) {
              iVar1 = *(int *)(lVar8 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar12 = iVar1 >> 0x1f & 0xffff;
                uVar7 = iVar1 + uVar12;
                lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                         (longlong)(int)((uVar7 & 0xffff) - uVar12) * 0x18;
              }
              else {
                lVar11 = 0;
              }
              if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) goto LAB_14244e591;
            }
            if (((local_a0[0] >> 1 & 1) == 0) ||
               (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar8), iVar14 = local_60,
               iVar13 = local_88, cVar6 != '\0')) {
              if ((local_a0[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar9 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar9 + 0x205) & 0x10) == 0)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                piVar2 = *(int **)(lVar9 + 600);
                if (((*(longlong *)(lVar9 + 0xc0) == 0) ||
                    (piVar10 = (int *)UWorld::GetActiveLevelCollection(), piVar10 == (int *)0x0)) ||
                   (piVar2 == piVar10)) {
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
                iVar14 = local_60;
                iVar13 = local_88;
                if ((!bVar3) || (!bVar4)) goto LAB_14244e591;
              }
              lVar11 = ULevel::GetWorld(lVar9);
              lVar9 = local_b8;
              iVar14 = local_60;
              iVar13 = local_88;
              if (lVar11 == local_b8) {
                lVar11 = AActor::GetLevel(lVar8);
                if (lVar11 == *(longlong *)(lVar9 + 0x30)) goto LAB_14244e61d;
                lVar9 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                iVar14 = local_60;
                iVar13 = local_88;
                if (!bVar3) goto LAB_14244e61d;
              }
            }
          }
LAB_14244e591:
          iVar16 = iVar16 + 1;
          lVar15 = lVar15 + 8;
          if (iVar14 + iVar13 <= iVar16) break;
        } while( true );
      }
      local_70 = 0;
      local_7c = '\x01';
    }
LAB_14244e5d1:
    if (local_48 != '\0') {
      local_48 = 0;
      UWorld::RemoveOnActorSpawnedHandler(local_98,local_50);
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (local_90 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
LAB_14244e61d:
  param_3 = local_a8;
  local_80 = iVar16;
  local_70 = lVar8;
  if (local_7c != '\0') goto LAB_14244e5d1;
  goto LAB_14244e372;
}



// FUNCTION 14244e640 GetAudioTimeSeconds body=51 status=ok
// SIG undefined GetAudioTimeSeconds(void)

undefined4 UGameplayStatics::GetAudioTimeSeconds(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x79c);
  }
  return 0;
}



// FUNCTION 14244e680 FUN_14244e680 body=414 status=ok
// SIG undefined FUN_14244e680(void)

undefined2 FUN_14244e680(longlong param_1,undefined2 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [30];
  undefined2 local_6a;
  undefined1 local_58 [56];
  longlong *local_20;
  undefined1 local_c;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar5 = FUN_1428ab700();
    FEngineFontServices::GetFontCache(uVar5,&local_b8);
    if (local_b8 != 0) {
      local_a8 = 0;
      local_a4 = 0;
      local_a0 = 0;
      local_98 = DAT_1464aa6e0;
      uStack_94 = DAT_1464aa6e4;
      uStack_90 = DAT_1464aa6e8;
      uStack_8c = DAT_1464aa6ec;
      FSlateFontInfo::FSlateFontInfo
                (local_58,param_1,*(undefined4 *)(param_1 + 0x13c),param_1 + 0x140,&local_a8);
      uVar5 = FUN_1418336f0(local_b8,local_58,0x3f800000,&DAT_1469eaf80);
      FCharacterList::GetCharacter(uVar5,local_88,param_2,local_c);
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
      }
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
      return local_6a;
    }
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
  return 0;
}



// FUNCTION 14244e820 FUN_14244e820 body=407 status=ok
// SIG undefined FUN_14244e820(void)

ulonglong FUN_14244e820(longlong param_1,undefined2 param_2,undefined2 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  ulonglong in_RAX;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [56];
  longlong *local_20;
  undefined1 local_c;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar8 = (ulonglong)*(byte *)(param_1 + 0x6c);
  }
  else {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      uVar7 = FUN_1428ab700();
      in_RAX = FEngineFontServices::GetFontCache(uVar7,&local_88);
      if (local_88 != 0) {
        local_78 = 0;
        local_74 = 0;
        local_70 = 0;
        local_68 = DAT_1464aa6e0;
        uStack_64 = DAT_1464aa6e4;
        uStack_60 = DAT_1464aa6e8;
        uStack_5c = DAT_1464aa6ec;
        FSlateFontInfo::FSlateFontInfo
                  (local_58,param_1,*(undefined4 *)(param_1 + 0x13c),param_1 + 0x140,&local_78);
        uVar7 = FUN_1418336f0(local_88,local_58,0x3f800000,&DAT_1469eaf80);
        bVar5 = FCharacterList::GetKerning(uVar7,param_2,param_3,local_c);
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
        }
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
        return (ulonglong)bVar5;
      }
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        uVar6 = (int)lVar4 - 1;
        in_RAX = (ulonglong)uVar6;
        if (uVar6 == 0) {
          in_RAX = (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)local_80 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            in_RAX = (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
    }
    uVar8 = in_RAX & 0xffffffffffffff00;
  }
  return uVar8;
}



// FUNCTION 14244e9c0 FUN_14244e9c0 body=755 status=ok
// SIG undefined FUN_14244e9c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14244e9c0(longlong param_1,ushort param_2,float *param_3,float *param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  ushort *puVar8;
  ushort *puVar9;
  ulonglong uVar10;
  ushort local_res8 [4];
  ushort local_res18 [8];
  longlong local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [34];
  short local_86;
  undefined1 local_78 [56];
  longlong *local_40;
  undefined1 local_2c;
  
  *param_4 = 0.0;
  *param_3 = 0.0;
  if (*(char *)(param_1 + 0x30) != '\0') {
    if (*(char *)(param_1 + 0x30) != '\x01') {
      return;
    }
    uVar6 = FUN_1428ab700();
    FEngineFontServices::GetFontCache(uVar6,&local_d8);
    if (local_d8 != 0) {
      local_c8 = 0;
      local_c4 = 0;
      local_c0 = 0;
      local_b8 = _DAT_1464aa6e0;
      uStack_b0 = _DAT_1464aa6e8;
      FSlateFontInfo::FSlateFontInfo
                (local_78,param_1,*(undefined4 *)(param_1 + 0x13c),param_1 + 0x140,&local_c8);
      uVar6 = FUN_1418336f0(local_d8,local_78,0x3f800000,&DAT_1469eaf80);
      FCharacterList::GetCharacter(uVar6,local_a8,param_2,local_2c);
      *param_3 = (float)(int)local_86;
      uVar4 = FUN_14183a900(uVar6);
      *param_4 = (float)uVar4;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)local_40 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
    if (local_d0 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = local_d0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) {
      return;
    }
    (**(code **)*local_d0)(local_d0);
    LOCK();
    piVar2 = (int *)((longlong)local_d0 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 != 1) {
      return;
    }
    (**(code **)(*local_d0 + 8))(local_d0,1);
    return;
  }
  local_res18[0] = param_2;
  FGenericPlatformString::Memcpy(local_res8,local_res18,2);
  if (*(int *)(param_1 + 0x58) == 0) {
    if ((((int)(uint)local_res8[0] < *(int *)(param_1 + 0x120)) &&
        ((int)(uint)local_res8[0] < *(int *)(param_1 + 0x40))) &&
       ((*(int *)(*(longlong *)(param_1 + 0x38) + 0xc + (ulonglong)local_res8[0] * 0x18) != 0 ||
        (local_res8[0] < 0x20)))) goto LAB_14244ec41;
  }
  else {
    if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x1b4)) {
      lVar7 = *(longlong *)(param_1 + 0x1c0);
      if (*(longlong *)(param_1 + 0x1c0) == 0) {
        lVar7 = param_1 + 0x1b8;
      }
      iVar5 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x1c8) - 1U & (ulonglong)local_res8[0])
                               * 4);
      if (iVar5 != -1) {
        do {
          puVar9 = (ushort *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar5 * 0xc);
          if (*(ushort *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar5 * 0xc) == local_res8[0])
          {
            if (iVar5 != -1) goto LAB_14244ebf4;
            break;
          }
          iVar5 = *(int *)(puVar9 + 2);
        } while (iVar5 != -1);
      }
    }
    puVar9 = (ushort *)0x0;
LAB_14244ebf4:
    puVar8 = puVar9 + 1;
    if (puVar9 == (ushort *)0x0) {
      puVar8 = (ushort *)0x0;
    }
    if (puVar8 != (ushort *)0x0) {
      param_2 = *puVar8;
      goto LAB_14244ec41;
    }
  }
  param_2 = 0x7f;
LAB_14244ec41:
  uVar10 = (ulonglong)param_2;
  if ((int)(uint)param_2 < *(int *)(param_1 + 0x40)) {
    bVar3 = *(byte *)(*(longlong *)(param_1 + 0x38) + 0x10 + uVar10 * 0x18);
    if (((int)(uint)bVar3 < *(int *)(param_1 + 0x50)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)bVar3 * 8) != 0)) {
      *param_3 = (float)*(int *)(*(longlong *)(param_1 + 0x38) + 8 + uVar10 * 0x18);
      *param_4 = (float)*(int *)(*(longlong *)(param_1 + 0x128) +
                                (longlong)
                                (int)((longlong)uVar10 / (longlong)*(int *)(param_1 + 0x120)) * 4);
      return;
    }
  }
  return;
}



// FUNCTION 14244ece0 GetCookedFilename body=613 status=ok
// SIG undefined GetCookedFilename(void)

longlong * UFontFace::GetCookedFilename(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 local_res8;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  int local_40;
  longlong local_38 [2];
  longlong local_28 [2];
  
  lVar1 = UObjectBaseUtility::GetOutermost(param_1 + -0x28);
  local_res8 = *(undefined8 *)(lVar1 + 0x18);
  FName::ToString(&local_res8,&local_58);
  plVar2 = (longlong *)FPackageName::GetLocalizedPackagePath(&local_48,&local_58);
  if (&local_58 != plVar2) {
    if (local_58 != 0) {
      FMemory::Free();
    }
    local_58 = *plVar2;
    *plVar2 = 0;
    local_50 = (undefined4)plVar2[1];
    local_4c = *(undefined4 *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  local_68 = 0;
  local_60 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L".uasset",0x10);
  FUN_1416fecc0(local_38,&local_58,&local_68);
  if (local_68 != 0) {
    FMemory::Free();
  }
  local_res8 = *(undefined8 *)(param_1 + -0x10);
  FName::ToString(&local_res8,&local_48);
  plVar2 = (longlong *)FUN_141672d20(local_28,local_38);
  iVar4 = 0;
  if (local_40 != 0) {
    iVar4 = local_40 + -1;
  }
  if (((int)plVar2[1] != 0) || (iVar3 = 2, iVar4 == -1)) {
    iVar3 = 1;
  }
  local_78 = *plVar2;
  *plVar2 = 0;
  local_70._0_4_ = (int)plVar2[1];
  local_70._4_4_ = *(int *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  if (local_70._4_4_ < iVar3 + (int)local_70 + iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
  }
  FString::PathAppend(&local_78,local_48,iVar4);
  iVar3 = local_70._4_4_;
  iVar4 = (int)local_70;
  bVar5 = (int)local_70 != 0;
  local_68 = local_78;
  local_78 = 0;
  local_60._0_4_ = (int)local_70;
  local_60._4_4_ = local_70._4_4_;
  local_70 = 0;
  if (iVar3 < (int)((7 - (uint)bVar5) + iVar4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
    iVar4 = (int)local_60;
  }
  local_60._0_4_ = (7 - (uint)(iVar4 != 0)) + iVar4;
  if (local_60._4_4_ < (int)local_60) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar4);
  }
  lVar1 = (longlong)iVar4 - (ulonglong)(iVar4 != 0);
  *(undefined8 *)(local_68 + lVar1 * 2) = 0x6f00660075002e;
  lVar1 = local_68 + lVar1 * 2;
  *(undefined4 *)(lVar1 + 8) = 0x74006e;
  *(undefined2 *)(lVar1 + 0xc) = 0;
  *param_2 = local_68;
  *(int *)(param_2 + 1) = (int)local_60;
  *(int *)((longlong)param_2 + 0xc) = local_60._4_4_;
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14244ef50 GetCurrentLevelName body=156 status=ok
// SIG undefined GetCurrentLevelName(void)

undefined8 *
UGameplayStatics::GetCurrentLevelName(undefined8 *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
  if (lVar1 != 0) {
    FUN_1428cc8c0(lVar1,&local_18);
    if (param_3 != '\0') {
      FString::RemoveFromStart(&local_18,lVar1 + 0xe8,1);
    }
    *param_1 = local_18;
    *(undefined4 *)(param_1 + 1) = local_10;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_c;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 14244eff0 FUN_14244eff0 body=106 status=ok
// SIG undefined FUN_14244eff0(void)

undefined8 FUN_14244eff0(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (DAT_146b17150 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_146b17150 + 0x388))();
    if (cVar1 != '\0') {
      lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
      if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x830) & 0x4000) != 0)) {
        lVar2 = UWorld::GetAudioDevice(lVar2);
        if (lVar2 != 0) {
          return *(undefined8 *)(lVar2 + 0x2d0);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14244f060 GetDefaultGameClassPath body=30 status=ok
// SIG undefined GetDefaultGameClassPath(void)

undefined8 AGameMode::GetDefaultGameClassPath(longlong param_1,undefined8 param_2)

{
  UObjectBaseUtility::GetPathName(*(undefined8 *)(param_1 + 0x10),param_2,0);
  return param_2;
}



// FUNCTION 14244f080 FUN_14244f080 body=70 status=ok
// SIG undefined FUN_14244f080(void)

longlong FUN_14244f080(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x490) != 0) {
    lVar2 = FUN_1429d7ab0();
    for (lVar1 = *(longlong *)(param_1 + 0x490); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        return *(longlong *)(param_1 + 0x490);
      }
    }
  }
  return 0;
}



// FUNCTION 14244f0d0 GetDuration body=148 status=ok
// SIG undefined GetDuration(void)

float UForceFeedbackEffect::GetDuration(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  float local_res8 [2];
  undefined1 local_res10 [8];
  
  fVar3 = *(float *)(param_1 + 0x38);
  if (fVar3 < 1e-08) {
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      do {
        uVar1 = FRuntimeFloatCurve::GetRichCurve
                          (*(longlong *)(param_1 + 0x28) + 8 + (longlong)iVar2 * 0x80);
        FRichCurve::GetTimeRange(uVar1,local_res10,local_res8);
        fVar3 = *(float *)(param_1 + 0x38);
        if (*(float *)(param_1 + 0x38) < local_res8[0]) {
          *(float *)(param_1 + 0x38) = local_res8[0];
          fVar3 = local_res8[0];
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x30));
      return fVar3;
    }
    fVar3 = 0.0;
  }
  return fVar3;
}



// FUNCTION 14244f190 GetDuration body=84 status=ok
// SIG undefined GetDuration(void)

float UHapticFeedbackEffect_Curve::GetDuration(longlong param_1)

{
  undefined8 uVar1;
  float local_res8 [2];
  float local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0xa0);
  FRichCurve::GetTimeRange(uVar1,local_res18,local_res10);
  uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x28);
  FRichCurve::GetTimeRange(uVar1,local_res20,local_res8);
  if (local_res8[0] <= local_res10[0]) {
    local_res8[0] = local_res10[0];
  }
  return local_res8[0];
}



// FUNCTION 14244f210 FUN_14244f210 body=241 status=ok
// SIG undefined FUN_14244f210(void)

undefined8
FUN_14244f210(longlong *param_1,longlong param_2,int *param_3,undefined8 param_4,undefined8 param_5)

{
  BOOL BVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  local_res10 = param_2;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  }
  if ((param_2 != 0) && (*(char *)(param_2 + 0x28) != '\0')) {
    FUN_14058c5a0(param_1 + 10,local_res8,&local_res10,0);
  }
  if (((param_3[3] != 0 || param_3[2] != 0) || param_3[1] != 0) || *param_3 != 0) {
    TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
    ::FindId(param_1,&local_res10);
    puVar2 = (undefined8 *)0x0;
    if ((int)local_res10 != -1) {
      puVar2 = (undefined8 *)(*param_1 + (longlong)(int)local_res10 * 0x48);
    }
    puVar3 = puVar2 + 2;
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    if (puVar3 != (undefined8 *)0x0) {
      TRefCountPtr<FRHITexture>::operator=(param_4,*puVar3);
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_5,puVar3[1]);
      uVar4 = 1;
      goto LAB_14244f2dd;
    }
  }
  uVar4 = 0;
LAB_14244f2dd:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  return uVar4;
}



// FUNCTION 14244f310 GetExternalTextureCoordinateOffset body=169 status=ok
// SIG undefined GetExternalTextureCoordinateOffset(void)

bool FExternalTextureRegistry::GetExternalTextureCoordinateOffset
               (longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong lVar6;
  int local_res8 [2];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x14);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8);
  lVar6 = 0;
  if (local_res8[0] != -1) {
    lVar6 = *param_1 + (longlong)local_res8[0] * 0x48;
  }
  lVar5 = lVar6 + 0x10;
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    uVar1 = *(undefined4 *)(lVar5 + 0x24);
    uVar2 = *(undefined4 *)(lVar5 + 0x28);
    uVar3 = *(undefined4 *)(lVar5 + 0x2c);
    *param_3 = *(undefined4 *)(lVar5 + 0x20);
    param_3[1] = uVar1;
    param_3[2] = uVar2;
    param_3[3] = uVar3;
  }
  LeaveCriticalSection(lpCriticalSection);
  return lVar5 != 0;
}



// FUNCTION 14244f3c0 GetExternalTextureCoordinateScaleRotation body=169 status=ok
// SIG undefined GetExternalTextureCoordinateScaleRotation(void)

bool FExternalTextureRegistry::GetExternalTextureCoordinateScaleRotation
               (longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong lVar6;
  int local_res8 [2];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x14);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  TSet<TTuple<FGuid,FExternalTextureRegistry::FExternalTextureEntry>,TDefaultMapHashableKeyFuncs<FGuid,FExternalTextureRegistry::FExternalTextureEntry,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8);
  lVar6 = 0;
  if (local_res8[0] != -1) {
    lVar6 = *param_1 + (longlong)local_res8[0] * 0x48;
  }
  lVar5 = lVar6 + 0x10;
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    uVar1 = *(undefined4 *)(lVar5 + 0x14);
    uVar2 = *(undefined4 *)(lVar5 + 0x18);
    uVar3 = *(undefined4 *)(lVar5 + 0x1c);
    *param_3 = *(undefined4 *)(lVar5 + 0x10);
    param_3[1] = uVar1;
    param_3[2] = uVar2;
    param_3[3] = uVar3;
  }
  LeaveCriticalSection(lpCriticalSection);
  return lVar5 != 0;
}



// FUNCTION 14244f470 GetFirstGamePlayer body=17 status=ok
// SIG undefined GetFirstGamePlayer(void)

undefined8 UGameInstance::GetFirstGamePlayer(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x40)) {
    return **(undefined8 **)(param_1 + 0x38);
  }
  return 0;
}



// FUNCTION 14244f490 FUN_14244f490 body=157 status=ok
// SIG undefined FUN_14244f490(void)

longlong * FUN_14244f490(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *local_18;
  int local_10;
  
  if (param_2 == 0) {
    plVar4 = *(longlong **)(param_1 + 0x38);
    plVar3 = plVar4 + *(int *)(param_1 + 0x40);
    for (; plVar4 != plVar3; plVar4 = plVar4 + 1) {
      if ((*plVar4 != 0) && (plVar1 = *(longlong **)(*plVar4 + 0x30), plVar1 != (longlong *)0x0)) {
        return plVar1;
      }
    }
  }
  else {
    UWorld::GetPlayerControllerIterator(param_2,&local_18);
    for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
      plVar3 = (longlong *)FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
      if ((plVar3 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar3 + 0x768))(plVar3), cVar2 != '\0')) {
        return plVar3;
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14244f530 GetGameInstance body=47 status=ok
// SIG undefined GetGameInstance(void)

undefined8 UGameplayStatics::GetGameInstance(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 400);
  }
  return 0;
}



// FUNCTION 14244f560 GetGameMode body=47 status=ok
// SIG undefined GetGameMode(void)

undefined8 UGameplayStatics::GetGameMode(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x140);
  }
  return 0;
}



// FUNCTION 14244f5a0 FUN_14244f5a0 body=106 status=ok
// SIG undefined FUN_14244f5a0(void)

longlong * FUN_14244f5a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x468) != 0) {
    lVar2 = FUN_142948cb0();
    lVar3 = *(longlong *)(param_1 + 0x468);
    for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        if (lVar3 != 0) {
          *param_2 = lVar3;
          return param_2;
        }
        break;
      }
    }
  }
  lVar3 = FUN_142948cb0();
  *param_2 = lVar3;
  return param_2;
}



// FUNCTION 14244f610 GetGameState body=47 status=ok
// SIG undefined GetGameState(void)

undefined8 UGameplayStatics::GetGameState(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x148);
  }
  return 0;
}



// FUNCTION 14244f640 GetGameViewportClient body=18 status=ok
// SIG undefined GetGameViewportClient(void)

undefined8 UGameInstance::GetGameViewportClient(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x238);
  }
  return 0;
}



// FUNCTION 14244f660 FUN_14244f660 body=60 status=ok
// SIG undefined FUN_14244f660(void)

longlong FUN_14244f660(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if ((iVar3 < 0) || (*(int *)(param_1 + 0xc20) <= iVar3)) {
      return 0;
    }
    pcVar1 = *(char **)(*(longlong *)(param_1 + 0xc18) + (longlong)iVar3 * 8);
    if ((*pcVar1 == '\x01') && (lVar2 = *(longlong *)(pcVar1 + 0x288), lVar2 != 0)) break;
    iVar3 = iVar3 + 1;
  }
  return lVar2;
}



// FUNCTION 14244f6a0 FUN_14244f6a0 body=69 status=ok
// SIG undefined FUN_14244f6a0(void)

undefined4 FUN_14244f6a0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    lVar1 = UWorld::GetWorldSettings(lVar1,0,1);
    return *(undefined4 *)(lVar1 + 0x5e0);
  }
  return 0x3f800000;
}



// FUNCTION 14244f6f0 GetIntOption body=106 status=ok
// SIG undefined GetIntOption(void)

int UGameplayStatics::GetIntOption(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  wchar_t *_Str;
  wchar_t *local_28;
  int local_20;
  undefined1 local_18 [16];
  
  uVar1 = FString::FString(local_18,param_1);
  ParseOption(&local_28,uVar1,param_2);
  if (1 < local_20) {
    _Str = L"";
    if (local_20 != 0) {
      _Str = local_28;
    }
    param_3 = _wtoi(_Str);
  }
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free(local_28);
  }
  return param_3;
}



// FUNCTION 14244f760 FUN_14244f760 body=618 status=ok
// SIG undefined FUN_14244f760(void)

void FUN_14244f760(undefined8 *param_1,wchar_t **param_2,wchar_t **param_3)

{
  uint uVar1;
  wchar_t *_Source;
  uint uVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  wchar_t *local_38;
  uint local_30;
  undefined4 local_2c;
  
  uVar1 = FUN_141592950(param_1,&DAT_1450a013c,0,0,0xffffffff);
  if (uVar1 == 0xffffffff) {
    FString::operator=(param_2,param_1);
    if (*param_3 != L"") {
      iVar4 = 0;
      *(undefined4 *)(param_3 + 1) = 0;
      if (*(int *)((longlong)param_3 + 0xc) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3,0);
        iVar4 = *(int *)(param_3 + 1);
      }
      *(int *)(param_3 + 1) = iVar4;
      if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar4);
        return;
      }
    }
  }
  else {
    pwVar6 = (wchar_t *)0x0;
    uVar7 = 0;
    uVar8 = 0;
    if (*(int *)(param_1 + 1) == 0) {
      _Source = L"";
      uVar2 = uVar8;
    }
    else {
      _Source = (wchar_t *)*param_1;
      uVar2 = *(int *)(param_1 + 1) - 1;
    }
    uVar3 = uVar8;
    if ((-1 < (int)uVar1) && (uVar3 = uVar2, (int)uVar1 < (int)uVar2)) {
      uVar3 = uVar1;
    }
    local_38 = (wchar_t *)0x0;
    local_2c = 0;
    uVar2 = uVar3 + 1;
    if (uVar3 == 0) {
      uVar2 = uVar7;
    }
    pwVar5 = pwVar6;
    local_30 = uVar2;
    if ((0 < (int)uVar2) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), uVar2 = local_30,
       pwVar5 = local_38, 0 < (int)local_30)) {
      wcsncpy(local_38,_Source,(longlong)(int)uVar3);
      pwVar5[(int)uVar3] = L'\0';
    }
    if (param_2 == &local_38) {
      if (pwVar5 != (wchar_t *)0x0) {
        FMemory::Free(pwVar5);
      }
    }
    else {
      if (*param_2 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *param_2 = pwVar5;
      *(uint *)(param_2 + 1) = uVar2;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_2c;
    }
    iVar4 = *(int *)(param_1 + 1);
    uVar2 = uVar1 + 0x80000000;
    uVar3 = iVar4 - 1;
    if (iVar4 == 0) {
      uVar3 = uVar8;
    }
    if (uVar1 + 1 < uVar3) {
      uVar3 = uVar1 + 1;
    }
    uVar1 = iVar4 - 1;
    if (iVar4 == 0) {
      uVar1 = uVar7;
    }
    uVar8 = uVar3;
    if ((uVar3 <= uVar2) && (uVar8 = uVar1, uVar2 < uVar1)) {
      uVar8 = uVar2;
    }
    if (iVar4 == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*param_1;
    }
    iVar4 = uVar8 - uVar3;
    local_38 = (wchar_t *)0x0;
    local_2c = 0;
    uVar1 = iVar4 + 1;
    if (iVar4 == 0) {
      uVar1 = uVar7;
    }
    local_30 = uVar1;
    if ((0 < (int)uVar1) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), uVar1 = local_30,
       pwVar6 = local_38, 0 < (int)local_30)) {
      wcsncpy(local_38,puVar9 + (int)uVar3,(longlong)iVar4);
      pwVar6[iVar4] = L'\0';
    }
    if (param_3 == &local_38) {
      if (pwVar6 != (wchar_t *)0x0) {
        FMemory::Free(pwVar6);
        return;
      }
    }
    else {
      if (*param_3 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *param_3 = pwVar6;
      *(uint *)(param_3 + 1) = uVar1;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
    }
  }
  return;
}



// FUNCTION 14244f9d0 GetLocalPlayerByIndex body=12 status=ok
// SIG undefined GetLocalPlayerByIndex(void)

undefined8 UGameInstance::GetLocalPlayerByIndex(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 8);
}



// FUNCTION 14244f9e0 GetLocalPlayerIterator body=18 status=ok
// SIG undefined GetLocalPlayerIterator(void)

longlong * UGameInstance::GetLocalPlayerIterator(longlong param_1,longlong *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = param_1 + 0x38;
  return param_2;
}



// FUNCTION 14244fa00 FUN_14244fa00 body=575 status=ok
// SIG undefined FUN_14244fa00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14244fa00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 local_res8;
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [56];
  longlong *local_30;
  ulonglong uVar13;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar4 = *(uint *)(param_1 + 0x130);
    uVar11 = 1;
    uVar9 = 0;
    uVar12 = 0;
    if (((0 < (int)uVar4) && (7 < uVar4)) && (1 < DAT_1468387b0)) {
      uVar14 = 1;
      uVar15 = 1;
      uVar16 = 1;
      uVar17 = 1;
      uVar11 = uVar4 & 0x80000007;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
      }
      uVar13 = uVar9;
      uVar18 = uVar14;
      uVar19 = uVar15;
      uVar20 = uVar16;
      uVar21 = uVar17;
      do {
        piVar2 = (int *)(*(longlong *)(param_1 + 0x128) + uVar9 * 4);
        iVar3 = *piVar2;
        iVar5 = piVar2[1];
        iVar6 = piVar2[2];
        iVar7 = piVar2[3];
        uVar12 = (int)uVar13 + 8;
        uVar13 = (ulonglong)uVar12;
        uVar14 = (uint)((int)uVar14 < iVar3) * iVar3 | ((int)uVar14 >= iVar3) * uVar14;
        uVar15 = (uint)((int)uVar15 < iVar5) * iVar5 | ((int)uVar15 >= iVar5) * uVar15;
        uVar16 = (uint)((int)uVar16 < iVar6) * iVar6 | ((int)uVar16 >= iVar6) * uVar16;
        uVar17 = (uint)((int)uVar17 < iVar7) * iVar7 | ((int)uVar17 >= iVar7) * uVar17;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x128) + 0x10 + uVar9 * 4);
        iVar3 = *piVar2;
        iVar5 = piVar2[1];
        iVar6 = piVar2[2];
        iVar7 = piVar2[3];
        uVar9 = uVar9 + 8;
        uVar18 = (uint)((int)uVar18 < iVar3) * iVar3 | ((int)uVar18 >= iVar3) * uVar18;
        uVar19 = (uint)((int)uVar19 < iVar5) * iVar5 | ((int)uVar19 >= iVar5) * uVar19;
        uVar20 = (uint)((int)uVar20 < iVar6) * iVar6 | ((int)uVar20 >= iVar6) * uVar20;
        uVar21 = (uint)((int)uVar21 < iVar7) * iVar7 | ((int)uVar21 >= iVar7) * uVar21;
      } while ((longlong)uVar9 < (longlong)(int)(uVar4 - uVar11));
      uVar11 = ((int)uVar14 < (int)uVar18) * uVar18 | ((int)uVar14 >= (int)uVar18) * uVar14;
      uVar14 = ((int)uVar15 < (int)uVar19) * uVar19 | ((int)uVar15 >= (int)uVar19) * uVar15;
      uVar15 = ((int)uVar16 < (int)uVar20) * uVar20 | ((int)uVar16 >= (int)uVar20) * uVar16;
      uVar16 = ((int)uVar17 < (int)uVar21) * uVar21 | ((int)uVar17 >= (int)uVar21) * uVar17;
      uVar11 = ((int)uVar11 < (int)uVar15) * uVar15 | ((int)uVar11 >= (int)uVar15) * uVar11;
      uVar14 = ((int)uVar14 < (int)uVar16) * uVar16 | ((int)uVar14 >= (int)uVar16) * uVar14;
      uVar11 = ((int)uVar11 < (int)uVar14) * uVar14 | ((int)uVar11 >= (int)uVar14) * uVar11;
    }
    lVar10 = (longlong)(int)uVar12;
    if (lVar10 < (int)uVar4) {
      do {
        uVar12 = *(uint *)(*(longlong *)(param_1 + 0x128) + lVar10 * 4);
        if ((int)uVar12 <= (int)uVar11) {
          uVar12 = uVar11;
        }
        uVar11 = uVar12;
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)uVar4);
    }
  }
  else if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar8 = FUN_1428ab700();
    FEngineFontServices::GetFontCache(uVar8,&local_98);
    if (local_98 != 0) {
      local_res8 = 0;
      local_88 = 0;
      local_84 = 0;
      local_80 = 0;
      local_78 = _DAT_1464aa6e0;
      uStack_70 = _DAT_1464aa6e8;
      FSlateFontInfo::FSlateFontInfo
                (local_68,param_1,*(undefined4 *)(param_1 + 0x13c),&local_res8,&local_88);
      uVar8 = FUN_1418336f0(local_98,local_68);
      FUN_14183a900(uVar8);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14244fc50 FUN_14244fc50 body=263 status=ok
// SIG undefined FUN_14244fc50(void)

ulonglong FUN_14244fc50(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  
  uVar5 = 0;
  fVar7 = 0.0;
  fVar8 = 0.0;
  if (0 < *(int *)(param_1 + 0xc20)) {
    puVar4 = *(undefined8 **)(param_1 + 0xc18);
    uVar6 = uVar5;
    do {
      if (*(char *)*puVar4 == '\x01') {
        lVar1 = *(longlong *)((*(undefined8 **)(param_1 + 0xc18))[(int)uVar6] + 0x288);
        fVar8 = fVar7;
        if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x38), lVar1 != 0)) &&
           ((iVar2 = UNetDriver::GetNetMode(lVar1), iVar2 == 1 ||
            ((iVar2 = UNetDriver::GetNetMode(lVar1), iVar2 == 2 &&
             ((*(byte *)(lVar1 + 0x54) & 1) != 0)))))) {
          iVar2 = *(int *)(lVar1 + 0x58);
          if (iVar2 < 1) {
            iVar3 = 1;
          }
          else {
            iVar3 = 1000;
            if (iVar2 < 1000) {
              iVar3 = iVar2;
            }
          }
          fVar8 = (float)iVar3;
        }
        break;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
      fVar8 = 0.0;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0xc20));
  }
  uVar5 = FUN_1428754c0(param_1,param_2,param_3);
  if ((float)uVar5 == 0.0) {
    uVar5 = (ulonglong)(uint)fVar8;
  }
  return uVar5;
}



// FUNCTION 14244fd60 FUN_14244fd60 body=176 status=ok
// SIG undefined FUN_14244fd60(void)

longlong * FUN_14244fd60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong local_28 [4];
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  plVar2 = *(longlong **)(lVar1 + 0x38);
  bVar3 = plVar2 == (longlong *)0x0;
  if (bVar3) {
    local_28[0] = 0;
    plVar2 = local_28;
    local_28[1] = 0;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2d0))(plVar2,local_28 + 2);
  }
  *param_2 = 0;
  *param_2 = *plVar2;
  *plVar2 = 0;
  *(int *)(param_2 + 1) = (int)plVar2[1];
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  if (bVar3) {
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar3) && (local_28[2] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14244fe20 FUN_14244fe20 body=134 status=ok
// SIG undefined FUN_14244fe20(void)

int FUN_14244fe20(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *local_18;
  int local_10;
  
  iVar4 = 0;
  uVar2 = (**(code **)(*param_1 + 0x148))();
  UWorld::GetPlayerControllerIterator(uVar2,&local_18);
  for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
    lVar3 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x460) != 0)) {
      cVar1 = FUN_14293c170(param_1,lVar3);
      if (cVar1 == '\0') {
        iVar4 = iVar4 + 1;
      }
    }
  }
  return iVar4;
}



// FUNCTION 14244fec0 FUN_14244fec0 body=134 status=ok
// SIG undefined FUN_14244fec0(void)

int FUN_14244fec0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *local_18;
  int local_10;
  
  iVar4 = 0;
  uVar2 = (**(code **)(*param_1 + 0x148))();
  UWorld::GetPlayerControllerIterator(uVar2,&local_18);
  for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
    lVar3 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x460) != 0)) {
      cVar1 = FUN_14293c170(param_1,lVar3);
      if (cVar1 != '\0') {
        iVar4 = iVar4 + 1;
      }
    }
  }
  return iVar4;
}



// FUNCTION 14244ff50 GetObjectClass body=13 status=ok
// SIG undefined GetObjectClass(void)

undefined8 UGameplayStatics::GetObjectClass(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x10);
  }
  return 0;
}



// FUNCTION 14244ff60 GetOnlinePlatformName body=39 status=ok
// SIG undefined GetOnlinePlatformName(void)

undefined8 UGameInstance::GetOnlinePlatformName(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)UOnlineEngineInterface::Get();
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_2);
  return param_2;
}



// FUNCTION 14244ff90 GetOnlineSessionClass body=26 status=ok
// SIG undefined GetOnlineSessionClass(void)

undefined8 * UGameInstance::GetOnlineSessionClass(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = UOnlineSession::GetPrivateStaticClass();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 14244ffb0 GetPathOffsetInWorldSpace body=199 status=ok
// SIG undefined GetPathOffsetInWorldSpace(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FRootMotionSource_MoveToDynamicForce::GetPathOffsetInWorldSpace
          (longlong param_1,undefined8 *param_2)

{
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_28 [4];
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    UCurveVector::GetVectorValue(*(longlong *)(param_1 + 0xc0),local_18);
    local_38 = *(float *)(param_1 + 0xb0) - *(float *)(param_1 + 0x98);
    local_34 = *(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0x9c);
    local_30 = *(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0xa0);
    FVector::Rotation(&local_38,local_28);
    local_28[0] = 0;
    FRotator::RotateVector(local_28,param_2,local_18);
    return param_2;
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  return param_2;
}



// FUNCTION 142450080 GetPathOffsetInWorldSpace body=199 status=ok
// SIG undefined GetPathOffsetInWorldSpace(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FRootMotionSource_MoveToForce::GetPathOffsetInWorldSpace(longlong param_1,undefined8 *param_2)

{
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_28 [4];
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    UCurveVector::GetVectorValue(*(longlong *)(param_1 + 0xb8),local_18);
    local_38 = *(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0x98);
    local_34 = *(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0x9c);
    local_30 = *(float *)(param_1 + 0xac) - *(float *)(param_1 + 0xa0);
    FVector::Rotation(&local_38,local_28);
    local_28[0] = 0;
    FRotator::RotateVector(local_28,param_2,local_18);
    return param_2;
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  return param_2;
}



// FUNCTION 142450150 GetPlatformName body=72 status=ok
// SIG undefined GetPlatformName(void)

undefined8 * UGameplayStatics::GetPlatformName(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
  FGenericPlatformString::Convert<char,wchar_t>(*param_1,8,"Windows",8,0x3f);
  return param_1;
}



// FUNCTION 1424501a0 FUN_1424501a0 body=31 status=ok
// SIG undefined FUN_1424501a0(void)

undefined8 FUN_1424501a0(void)

{
  longlong lVar1;
  
  lVar1 = UGameplayStatics::GetPlayerController();
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x528);
  }
  return 0;
}



// FUNCTION 1424501c0 FUN_1424501c0 body=36 status=ok
// SIG undefined FUN_1424501c0(void)

void FUN_1424501c0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)UGameplayStatics::GetPlayerController();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424501d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x678))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1424501f0 GetPlayerController body=124 status=ok
// SIG undefined GetPlayerController(void)

undefined8 UGameplayStatics::GetPlayerController(undefined8 param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *local_18;
  int local_10;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    iVar3 = 0;
    UWorld::GetPlayerControllerIterator(lVar1,&local_18);
    for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
      uVar2 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
      if (iVar3 == param_2) {
        return uVar2;
      }
      iVar3 = iVar3 + 1;
    }
  }
  return 0;
}



// FUNCTION 142450270 FUN_142450270 body=227 status=ok
// SIG undefined FUN_142450270(void)

longlong * FUN_142450270(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x478) != 0) {
    lVar2 = FUN_1429e18b0();
    lVar4 = *(longlong *)(param_1 + 0x478);
    for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) goto LAB_1424502c0;
    }
  }
  lVar4 = 0;
LAB_1424502c0:
  if ((param_3 != 0) && (*(longlong *)(param_1 + 0x4a0) != 0)) {
    lVar3 = FUN_1429e18b0();
    lVar1 = *(longlong *)(param_1 + 0x4a0);
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) {
        if (((lVar1 != 0) && (*(longlong *)(param_3 + 0x460) != 0)) &&
           ((*(byte *)(*(longlong *)(param_3 + 0x460) + 0x484) & 2) != 0)) {
          if (lVar1 == 0) goto LAB_142450335;
          lVar2 = FUN_1429e18b0();
          lVar4 = *(longlong *)(param_1 + 0x4a0);
          lVar1 = lVar4;
          goto joined_r0x000142450325;
        }
        break;
      }
    }
  }
LAB_142450337:
  *param_2 = lVar4;
  return param_2;
joined_r0x000142450325:
  if (lVar1 == 0) goto LAB_142450335;
  if (lVar1 == lVar2) goto LAB_142450337;
  lVar1 = *(longlong *)(lVar1 + 0x30);
  goto joined_r0x000142450325;
LAB_142450335:
  lVar4 = 0;
  goto LAB_142450337;
}



// FUNCTION 142450360 GetPlayerControllerID body=40 status=ok
// SIG undefined GetPlayerControllerID(void)

undefined4 UGameplayStatics::GetPlayerControllerID(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_14270bb10();
    if (lVar1 != 0) {
      return *(undefined4 *)(lVar1 + 0x108);
    }
  }
  return 0xffffffff;
}



// FUNCTION 142450390 GetPlayerPawn body=31 status=ok
// SIG undefined GetPlayerPawn(void)

void UGameplayStatics::GetPlayerPawn(void)

{
  longlong lVar1;
  
  lVar1 = GetPlayerController();
  if (lVar1 != 0) {
    FUN_14270d130(lVar1);
    return;
  }
  return;
}



// FUNCTION 1424503b0 FUN_1424503b0 body=155 status=ok
// SIG undefined FUN_1424503b0(void)

longlong FUN_1424503b0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *local_18;
  int local_10;
  
  uVar3 = (**(code **)(*param_1 + 0x148))();
  UWorld::GetPlayerControllerIterator(uVar3,&local_18);
  for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
    lVar4 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
    if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x460) != 0)) &&
       (plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x460) + 0x4b8), plVar1 != (longlong *)0x0)) {
      cVar2 = (**(code **)(*plVar1 + 0x20))();
      if (cVar2 != '\0') {
        cVar2 = APlayerController::IsPrimaryPlayer(lVar4);
        if (cVar2 != '\0') {
          return lVar4;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142450450 FUN_142450450 body=589 status=ok
// SIG undefined FUN_142450450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142450450(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  char cVar6;
  undefined ***pppuVar7;
  int iVar8;
  longlong lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined1 auStack_c8 [32];
  undefined **local_a8;
  undefined **local_a0;
  undefined **ppuStack_98;
  undefined **local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined **local_70 [2];
  longlong *local_60;
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  iVar8 = 0;
  lVar9 = 0;
  while (((-1 < iVar8 && (iVar8 < *(int *)(param_1 + 0x40))) &&
         (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar8 * 8), lVar3 != 0)))
  {
    lVar9 = lVar3;
    if (*(longlong *)(lVar3 + 0x30) != 0) {
      cVar6 = APlayerController::IsPrimaryPlayer();
      if (cVar6 != '\0') break;
    }
    iVar8 = iVar8 + 1;
  }
  local_90 = (undefined **)0x0;
  local_88 = 0;
  local_a8 = &PTR_FUN_143f740c8;
  local_a0 = (undefined **)0x0;
  ppuStack_98 = (undefined **)0x0;
  if (lVar9 != 0) {
    pppuVar7 = (undefined ***)FUN_142547b50(lVar9,local_70);
    if (pppuVar7 != &local_a8) {
      ppuVar4 = pppuVar7[1];
      ppuVar5 = pppuVar7[2];
      ppuVar10 = (undefined **)0x0;
      ppuVar11 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        LOCK();
        *(int *)(ppuVar5 + 1) = *(int *)(ppuVar5 + 1) + 1;
        UNLOCK();
        ppuVar10 = local_a0;
        ppuVar11 = ppuStack_98;
      }
      local_80._0_4_ = SUB84(ppuVar4,0);
      local_80._4_4_ = (undefined4)((ulonglong)ppuVar4 >> 0x20);
      uStack_78._0_4_ = SUB84(ppuVar5,0);
      uStack_78._4_4_ = (undefined4)((ulonglong)ppuVar5 >> 0x20);
      local_48 = (undefined4)local_80;
      uStack_44 = local_80._4_4_;
      uStack_40 = (undefined4)uStack_78;
      uStack_3c = uStack_78._4_4_;
      local_a0 = ppuVar4;
      ppuStack_98 = ppuVar5;
      local_80 = ppuVar10;
      uStack_78 = ppuVar11;
      if (ppuVar11 != (undefined **)0x0) {
        LOCK();
        ppuVar4 = ppuVar11 + 1;
        iVar8 = *(int *)ppuVar4;
        *(int *)ppuVar4 = *(int *)ppuVar4 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)*ppuVar11)(ppuVar11);
          LOCK();
          piVar1 = (int *)((longlong)ppuVar11 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*uStack_78 + 8))(uStack_78,1);
          }
        }
      }
    }
    if (&local_90 != pppuVar7 + 3) {
      iVar8 = *(int *)(pppuVar7 + 4);
      ppuVar4 = pppuVar7[3];
      local_88 = CONCAT44(local_88._4_4_,iVar8);
      if ((iVar8 != 0) || (local_88._4_4_ != 0)) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_90,iVar8,local_88._4_4_);
        _guard_xfg_dispatch_icall_nop(local_90,ppuVar4,(longlong)iVar8);
      }
    }
    local_70[0] = &PTR_FUN_143f740c8;
    if (local_58 != 0) {
      FMemory::Free();
    }
    local_70[0] = &PTR_FUN_143f73d18;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_60 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  ppuVar4 = ppuStack_98;
  *param_2 = local_a0;
  param_2[1] = ppuStack_98;
  if (ppuStack_98 != (undefined **)0x0) {
    LOCK();
    *(int *)(ppuStack_98 + 1) = *(int *)(ppuStack_98 + 1) + 1;
    UNLOCK();
  }
  if (local_90 != (undefined **)0x0) {
    FMemory::Free();
  }
  ppuVar5 = ppuStack_98;
  if (ppuVar4 != (undefined **)0x0) {
    LOCK();
    ppuVar4 = ppuVar4 + 1;
    iVar8 = *(int *)ppuVar4;
    *(int *)ppuVar4 = *(int *)ppuVar4 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)*ppuStack_98)(ppuStack_98);
      LOCK();
      piVar1 = (int *)((longlong)ppuVar5 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*ppuStack_98 + 8))(ppuStack_98,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1424506a0 GetRealTimeSeconds body=51 status=ok
// SIG undefined GetRealTimeSeconds(void)

undefined4 UGameplayStatics::GetRealTimeSeconds(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x798);
  }
  return 0;
}



// FUNCTION 1424506e0 GetRelativeLocation body=262 status=ok
// SIG undefined GetRelativeLocation(void)

undefined8
FRootMotionSource_JumpForce::GetRelativeLocation(longlong param_1,undefined8 param_2,float param_3)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 local_58;
  float local_50;
  float local_48;
  undefined4 local_44;
  float local_40;
  ulonglong local_38;
  undefined4 local_30;
  
  local_30 = *(undefined4 *)(param_1 + 0xa0);
  local_38 = *(ulonglong *)(param_1 + 0x98) & 0xffffffff00000000;
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    fVar2 = (param_3 + param_3) - 1.0;
    local_40 = 1.0 - fVar2 * fVar2;
    local_44 = DAT_1468b5d94;
    local_48 = DAT_1468b5d90;
  }
  else {
    puVar1 = (undefined8 *)UCurveVector::GetVectorValue(*(longlong *)(param_1 + 0xb0),&local_58);
    local_58 = *puVar1;
    local_40 = *(float *)(puVar1 + 1);
    local_44 = (int)((ulonglong)local_58 >> 0x20);
    local_50 = local_40;
    local_48 = (float)local_58;
  }
  if (0.0 <= *(float *)(param_1 + 0xa8)) {
    local_40 = local_40 * *(float *)(param_1 + 0xa8);
  }
  local_48 = param_3 * *(float *)(param_1 + 0xa4) + local_48;
  FRotator::RotateVector(&local_38,param_2,&local_48);
  return param_2;
}



// FUNCTION 1424507f0 GetResourceSizeEx body=338 status=ok
// SIG undefined GetResourceSizeEx(void)

void UFont::GetResourceSizeEx(longlong param_1,int *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  int *local_res8;
  
  FUN_141758340();
  if ((*(char *)(param_1 + 0x30) == '\x01') && (*param_2 == 1)) {
    local_res8 = param_2;
    <lambda_d78fe1ab79e86ce96bf4851e164ff097>::operator()(&local_res8,param_1 + 0x148);
    plVar10 = *(longlong **)(param_1 + 0x170);
    plVar11 = plVar10 + (longlong)*(int *)(param_1 + 0x178) * 7;
    for (; plVar10 != plVar11; plVar10 = plVar10 + 7) {
      lVar9 = *plVar10;
      lVar1 = lVar9 + (longlong)(int)plVar10[1] * 0x28;
      if (lVar9 != lVar1) {
        lVar9 = lVar9 + 8;
        do {
          lVar4 = FUniqueNetIdString::GetBytes(lVar9);
          if (lVar4 == 0) {
LAB_1424508c6:
            cVar3 = FFontData::GetLoadingPolicy(lVar9);
            if (cVar3 == '\0') {
              plVar6 = (longlong *)FUN_1415c3d50();
              puVar7 = (undefined8 *)FFontData::GetFontFilename(lVar9);
              if (*(int *)(puVar7 + 1) == 0) {
                puVar8 = &DAT_143f3eda8;
              }
              else {
                puVar8 = (undefined2 *)*puVar7;
              }
              lVar4 = (**(code **)(*plVar6 + 0xe8))(plVar6,puVar8);
              if (0 < lVar4) {
                *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + lVar4;
              }
            }
          }
          else {
            lVar5 = UFontFace::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_1424508c6;
          }
          lVar4 = lVar9 + 0x20;
          lVar9 = lVar9 + 0x28;
        } while (lVar4 != lVar1);
      }
    }
  }
  return;
}



// FUNCTION 142450950 GetResourceSizeEx body=112 status=ok
// SIG undefined GetResourceSizeEx(void)

void UFontFace::GetResourceSizeEx(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  
  FUN_141758340();
  if (*(char *)(param_1 + 0x41) != '\x01') {
    if (*(char *)(param_1 + 0x41) == '\x02') {
      *(longlong *)(param_2 + 8) =
           *(longlong *)(param_2 + 8) + (longlong)*(int *)(*(longlong *)(param_1 + 0x48) + 8);
      return;
    }
    plVar1 = (longlong *)FUN_1415c3d50();
    if (*(int *)(param_1 + 0x38) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = *(undefined2 **)(param_1 + 0x30);
    }
    lVar2 = (**(code **)(*plVar1 + 0xe8))(plVar1,puVar3);
    if (0 < lVar2) {
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + lVar2;
    }
  }
  return;
}



// FUNCTION 1424509c0 FUN_1424509c0 body=255 status=ok
// SIG undefined FUN_1424509c0(void)

longlong FUN_1424509c0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined2 *puVar8;
  longlong local_18 [2];
  
  lVar6 = *(longlong *)(param_1 + 0xc0);
  if (lVar6 == 0) {
    puVar4 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0xa8,local_18);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar4;
    }
    uVar5 = USoundMix::GetPrivateStaticClass();
    lVar6 = 0;
    uVar5 = FUN_141799c90(uVar5,0,puVar8,0,0,0,1);
    *(undefined8 *)(param_1 + 0xc0) = uVar5;
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    plVar2 = *(longlong **)(param_1 + 0xc0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,param_1,0);
      iVar1 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar7 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar7;
        lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
      }
      *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x40000000;
      return *(longlong *)(param_1 + 0xc0);
    }
    lVar6 = 0;
  }
  return lVar6;
}



// FUNCTION 142450b20 FUN_142450b20 body=309 status=ok
// SIG undefined FUN_142450b20(void)

ulonglong FUN_142450b20(longlong param_1,char param_2,ulonglong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong *puVar6;
  int iVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x4b8);
  uVar3 = (ulonglong)(byte)-param_2;
  if (*(int *)((longlong)param_3 + 0xc) <
      (int)((-(uint)(param_2 != '\0') & 3) + *(int *)(lVar5 + 0x478))) {
    uVar3 = TArray<void_*,FDefaultAllocator>::ResizeTo(param_3);
    lVar5 = *(longlong *)(param_1 + 0x4b8);
  }
  iVar1 = *(int *)(lVar5 + 0x478);
  if (iVar1 != 0) {
    iVar7 = (int)param_3[1];
    if (*(int *)((longlong)param_3 + 0xc) < iVar7 + iVar1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_3);
      iVar7 = (int)param_3[1];
    }
    puVar4 = *(ulonglong **)(lVar5 + 0x470);
    puVar6 = (ulonglong *)(*param_3 + (longlong)iVar7 * 8);
    iVar7 = iVar1;
    do {
      uVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar6 = uVar3;
      puVar6 = puVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    *(int *)(param_3 + 1) = (int)param_3[1] + iVar1;
  }
  if (param_2 != '\0') {
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
    }
    *(longlong *)(*param_3 + (longlong)iVar1 * 8) = param_1;
    iVar1 = (int)param_3[1];
    uVar2 = *(undefined8 *)(param_1 + 0x4b8);
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
    }
    *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = uVar2;
    iVar1 = (int)param_3[1];
    uVar2 = *(undefined8 *)(param_1 + 0x4b0);
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
    }
    uVar3 = *param_3;
    *(undefined8 *)(uVar3 + (longlong)iVar1 * 8) = uVar2;
  }
  return uVar3;
}



// FUNCTION 142450c60 FUN_142450c60 body=2841 status=ok
// SIG undefined FUN_142450c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142450c60(longlong param_1,float *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar29;
  float fVar30;
  float fVar33;
  float fVar34;
  float fVar36;
  float fVar37;
  undefined1 auVar27 [16];
  float fVar31;
  float fVar32;
  float fVar35;
  undefined1 auVar28 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  ulonglong local_b8;
  
  uVar14 = uRam0000000146af382c;
  uVar13 = uRam0000000146af3828;
  uVar12 = uRam0000000146af3824;
  uVar11 = _DAT_146af3820;
  fVar2 = fRam0000000146af381c;
  fVar23 = fRam0000000146af3818;
  fVar22 = fRam0000000146af3814;
  fVar51 = _DAT_146af3810;
  fVar10 = DAT_1464aa790;
  fVar9 = DAT_1464aa788._4_4_;
  fVar8 = (float)DAT_1464aa788;
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  fVar45 = *(float *)(param_1 + 0x344);
  fVar47 = *(float *)(param_1 + 0x340);
  fVar50 = *(float *)*(undefined1 (*) [12])(param_1 + 0x33c);
  auVar7 = *(undefined1 (*) [12])(param_1 + 0x33c);
  fVar25 = *(float *)(param_1 + 0x350);
  fVar34 = *(float *)(param_1 + 0x354);
  fVar30 = *(float *)(param_1 + 0x358);
  fVar37 = *(float *)(param_1 + 0x35c);
  if (param_4 == 0) {
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = fVar2;
    fVar51 = (float)((uint)fRam0000000146af3814 & uVar12);
    fVar22 = (float)((uint)fRam0000000146af3818 & uVar13);
    fVar23 = (float)((uint)fRam0000000146af381c & uVar14);
    param_2[8] = (float)((uint)_DAT_146af3810 & uVar11);
    param_2[9] = fVar51;
    param_2[10] = fVar22;
    param_2[0xb] = fVar23;
    fVar36 = fRam0000000146af3818;
    fVar29 = fRam0000000146af3814;
    fVar33 = _DAT_146af3810;
    auVar20._4_4_ = fVar9;
    auVar20._0_4_ = fVar8;
    auVar20._8_4_ = fVar10;
    auVar20._12_4_ = 0;
    auVar18 = *(undefined1 (*) [16])(param_1 + 0x230);
    fVar51 = auVar18._0_4_;
    fVar22 = auVar18._4_4_;
    fVar23 = auVar18._8_4_;
    fVar2 = auVar18._12_4_;
    fVar52 = *(float *)(param_1 + 0x210);
    fVar35 = *(float *)(param_1 + 0x214);
    fVar32 = *(float *)(param_1 + 0x218);
    fVar24 = *(float *)(param_1 + 0x21c);
    auVar18 = minps(auVar20,auVar18);
    auVar21._4_4_ = -(uint)(auVar18._4_4_ < fRam0000000146af3904);
    auVar21._0_4_ = -(uint)(auVar18._0_4_ < _DAT_146af3900);
    auVar21._8_4_ = -(uint)(auVar18._8_4_ < fRam0000000146af3908);
    auVar21._12_4_ = -(uint)(auVar18._12_4_ < fRam0000000146af390c);
    iVar15 = movmskps((int)local_b8,auVar21);
    if (iVar15 == 0) {
      fVar33 = *(float *)(param_1 + 0x220);
      fVar29 = *(float *)(param_1 + 0x224);
      fVar36 = *(float *)(param_1 + 0x228);
      fVar55 = *(float *)(param_1 + 0x22c);
      fVar50 = fVar51 * fVar50;
      fVar47 = fVar22 * fVar47;
      fVar45 = fVar23 * fVar45;
      fVar44 = fVar2 * 0.0;
      fVar40 = fVar37 * fVar52 * _DAT_146af38c0;
      fVar41 = fVar30 * fVar52 * fRam0000000146af38c4;
      fVar42 = fVar34 * fVar52 * fRam0000000146af38c8;
      fVar43 = fVar25 * fVar52 * fRam0000000146af38cc;
      fVar26 = fVar30 * fVar35 * _DAT_146af38b0;
      fVar31 = fVar37 * fVar35 * fRam0000000146af38b4;
      fVar38 = fVar25 * fVar35 * fRam0000000146af38b8;
      fVar39 = fVar34 * fVar35 * fRam0000000146af38bc;
      fVar46 = fVar34 * fVar32 * _DAT_146af38a0;
      fVar48 = fVar25 * fVar32 * fRam0000000146af38a4;
      fVar49 = fVar37 * fVar32 * fRam0000000146af38a8;
      fVar53 = fVar30 * fVar32 * fRam0000000146af38ac;
      param_2[8] = fVar8 * fVar51;
      param_2[9] = fVar9 * fVar22;
      param_2[10] = fVar10 * fVar23;
      param_2[0xb] = fVar2 * 0.0;
      *param_2 = fVar40 + fVar24 * fVar25 + fVar26 + fVar46;
      param_2[1] = fVar41 + fVar24 * fVar34 + fVar31 + fVar48;
      param_2[2] = fVar42 + fVar24 * fVar30 + fVar38 + fVar49;
      param_2[3] = fVar43 + fVar24 * fVar37 + fVar39 + fVar53;
      fVar25 = fVar45 * fVar35 - fVar47 * fVar32;
      fVar34 = fVar50 * fVar32 - fVar45 * fVar52;
      fVar30 = fVar47 * fVar52 - fVar50 * fVar35;
      fVar37 = fVar44 * fVar24 - fVar44 * fVar24;
      fVar25 = fVar25 + fVar25;
      fVar34 = fVar34 + fVar34;
      fVar30 = fVar30 + fVar30;
      fVar37 = fVar37 + fVar37;
      param_2[4] = (fVar30 * fVar35 - fVar34 * fVar32) + fVar24 * fVar25 + fVar50 + fVar33;
      param_2[5] = (fVar25 * fVar32 - fVar30 * fVar52) + fVar24 * fVar34 + fVar47 + fVar29;
      param_2[6] = (fVar34 * fVar52 - fVar25 * fVar35) + fVar24 * fVar30 + fVar45 + fVar36;
      param_2[7] = (fVar37 * fVar24 - fVar37 * fVar24) + fVar24 * fVar37 + fVar44 + fVar55;
    }
    else {
      fVar31 = fVar35 + fVar35;
      fVar38 = fVar32 + fVar32;
      fVar41 = fVar52 * (fVar52 + fVar52);
      fVar55 = fVar24 * (fVar52 + fVar52);
      fVar56 = (fVar24 * fVar38 + fVar52 * fVar31) * fVar51;
      fVar57 = (fVar55 + fVar35 * fVar38) * fVar22;
      fVar58 = (fVar24 * fVar31 + fVar52 * fVar38) * fVar23;
      fVar42 = fVar22 * (fVar52 * fVar31 - fVar24 * fVar38);
      fVar44 = fVar23 * (fVar35 * fVar38 - fVar55);
      fVar46 = fVar51 * (fVar52 * fVar38 - fVar24 * fVar31);
      fVar39 = fVar34 + fVar34;
      fVar40 = fVar30 + fVar30;
      fVar52 = *(float *)(param_1 + 0x220);
      fVar24 = *(float *)(param_1 + 0x224);
      fVar55 = *(float *)(param_1 + 0x228);
      fVar26 = (float)((uint)((_DAT_146af3810 - (fVar32 * fVar38 + fVar35 * fVar31)) * fVar51) &
                      uVar11);
      fVar32 = (float)((uint)((fRam0000000146af3814 - (fVar32 * fVar38 + fVar41)) * fVar22) & uVar12
                      );
      fVar35 = (float)((uint)((fRam0000000146af3818 - (fVar35 * fVar31 + fVar41)) * fVar23) & uVar13
                      );
      fVar31 = (float)((uint)((fRam0000000146af381c - (fVar41 + fVar41)) * fVar2) & uVar14);
      fVar41 = fVar25 * (fVar25 + fVar25);
      fVar38 = (fVar25 + fVar25) * fVar37;
      fVar49 = (fVar40 * fVar37 + fVar39 * fVar25) * fVar8;
      fVar53 = (fVar38 + fVar40 * fVar34) * fVar9;
      fVar54 = (fVar39 * fVar37 + fVar40 * fVar25) * fVar10;
      fVar43 = fVar9 * (fVar39 * fVar25 - fVar40 * fVar37);
      fVar38 = fVar10 * (fVar40 * fVar34 - fVar38);
      fVar48 = fVar8 * (fVar40 * fVar25 - fVar39 * fVar37);
      fVar25 = (float)((uint)((_DAT_146af3810 - (fVar30 * fVar40 + fVar34 * fVar39)) * fVar8) &
                      uVar11);
      fVar30 = (float)((uint)((fRam0000000146af3814 - (fVar30 * fVar40 + fVar41)) * fVar9) & uVar12)
      ;
      fVar34 = (float)((uint)((fRam0000000146af3818 - (fVar34 * fVar39 + fVar41)) * fVar10) & uVar13
                      );
      fVar37 = (float)((uint)((fRam0000000146af381c - (fVar41 + fVar41)) * 0.0) & uVar14);
      local_128._0_4_ = fVar49 * fVar42 + fVar25 * fVar26 + fVar48 * fVar58 + fVar37 * fVar52;
      local_128._4_4_ = fVar49 * fVar32 + fVar25 * fVar56 + fVar48 * fVar44 + fVar37 * fVar24;
      uStack_120._0_4_ = fVar49 * fVar57 + fVar25 * fVar46 + fVar48 * fVar35 + fVar37 * fVar55;
      uStack_120._4_4_ =
           fVar49 * fVar31 + fVar25 * fVar31 + fVar48 * fVar31 + fVar37 * fRam0000000146af381c;
      local_118._0_4_ = fVar30 * fVar42 + fVar43 * fVar26 + fVar53 * fVar58 + fVar37 * fVar52;
      local_118._4_4_ = fVar30 * fVar32 + fVar43 * fVar56 + fVar53 * fVar44 + fVar37 * fVar24;
      uStack_110._0_4_ = fVar30 * fVar57 + fVar43 * fVar46 + fVar53 * fVar35 + fVar37 * fVar55;
      uStack_110._4_4_ =
           fVar30 * fVar31 + fVar43 * fVar31 + fVar53 * fVar31 + fVar37 * fRam0000000146af381c;
      local_108._0_4_ = fVar38 * fVar42 + fVar54 * fVar26 + fVar34 * fVar58 + fVar37 * fVar52;
      local_108._4_4_ = fVar38 * fVar32 + fVar54 * fVar56 + fVar34 * fVar44 + fVar37 * fVar24;
      uStack_100._0_4_ = fVar38 * fVar57 + fVar54 * fVar46 + fVar34 * fVar35 + fVar37 * fVar55;
      uStack_100._4_4_ =
           fVar38 * fVar31 + fVar54 * fVar31 + fVar34 * fVar31 + fVar37 * fRam0000000146af381c;
      local_f8 = fVar47 * fVar42 + fVar50 * fVar26 + fVar45 * fVar58 + fRam0000000146af381c * fVar52
      ;
      fStack_f4 = fVar47 * fVar32 + fVar50 * fVar56 + fVar45 * fVar44 +
                  fRam0000000146af381c * fVar24;
      fStack_f0 = fVar47 * fVar57 + fVar50 * fVar46 + fVar45 * fVar35 +
                  fRam0000000146af381c * fVar55;
      fStack_ec = fVar47 * fVar31 + fVar50 * fVar31 + fVar45 * fVar31 +
                  fRam0000000146af381c * fRam0000000146af381c;
      FMatrix::RemoveScaling(&local_128);
      fVar45 = (float)(-(uint)(_DAT_146af3900 <= fVar8 * fVar51) & (_DAT_146af38f0 ^ (uint)fVar33) ^
                      _DAT_146af38f0);
      fVar47 = (float)(-(uint)(fRam0000000146af3904 <= fVar9 * fVar22) &
                       (uRam0000000146af38f4 ^ (uint)fVar29) ^ uRam0000000146af38f4);
      fVar50 = (float)(-(uint)(fRam0000000146af3908 <= fVar10 * fVar23) &
                       (uRam0000000146af38f8 ^ (uint)fVar36) ^ uRam0000000146af38f8);
      local_128 = CONCAT44(local_128._4_4_ * fVar45,(float)local_128 * fVar45);
      uStack_120 = CONCAT44(uStack_120._4_4_,(float)uStack_120 * fVar45);
      uStack_110 = CONCAT44(uStack_110._4_4_,(float)uStack_110 * fVar47);
      uStack_100 = CONCAT44(uStack_100._4_4_,(float)uStack_100 * fVar50);
      local_118 = CONCAT44(local_118._4_4_ * fVar47,(float)local_118 * fVar47);
      local_108 = CONCAT44(local_108._4_4_ * fVar50,(float)local_108 * fVar50);
      FQuat::FQuat(&local_138,&local_128);
      auVar28._0_4_ = local_138 * local_138 + fStack_130 * fStack_130;
      auVar28._4_4_ = fStack_134 * fStack_134 + fStack_12c * fStack_12c;
      auVar28._8_4_ = fStack_130 * fStack_130 + local_138 * local_138;
      auVar28._12_4_ = fStack_12c * fStack_12c + fStack_134 * fStack_134;
      fVar34 = auVar28._4_4_ + auVar28._0_4_;
      fVar30 = auVar28._8_4_ + auVar28._4_4_;
      fVar37 = auVar28._12_4_ + auVar28._8_4_;
      fVar52 = auVar28._0_4_ + auVar28._12_4_;
      auVar4._4_4_ = fVar30;
      auVar4._0_4_ = fVar34;
      auVar4._8_4_ = fVar37;
      auVar4._12_4_ = fVar52;
      auVar18 = rsqrtps(auVar28,auVar4);
      fVar45 = auVar18._0_4_;
      fVar47 = auVar18._4_4_;
      fVar50 = auVar18._8_4_;
      fVar25 = auVar18._12_4_;
      fVar45 = (_DAT_146af38e0 - fVar45 * fVar45 * fVar34 * _DAT_146af38e0) * fVar45 + fVar45;
      fVar47 = (fRam0000000146af38e4 - fVar47 * fVar47 * fVar30 * fRam0000000146af38e4) * fVar47 +
               fVar47;
      fVar50 = (fRam0000000146af38e8 - fVar50 * fVar50 * fVar37 * fRam0000000146af38e8) * fVar50 +
               fVar50;
      fVar25 = (fRam0000000146af38ec - fVar25 * fVar25 * fVar52 * fRam0000000146af38ec) * fVar25 +
               fVar25;
      auVar18._4_4_ = fStack_f4;
      auVar18._0_4_ = local_f8;
      auVar18._8_4_ = fStack_f0;
      fVar45 = (float)(((uint)(((_DAT_146af38e0 - fVar45 * fVar45 * fVar34 * _DAT_146af38e0) *
                                fVar45 + fVar45) * local_138) ^ _DAT_146af38d0) &
                       -(uint)(1e-08 <= fVar34) ^ _DAT_146af38d0);
      fVar47 = (float)(((uint)(((fRam0000000146af38e4 -
                                fVar47 * fVar47 * fVar30 * fRam0000000146af38e4) * fVar47 + fVar47)
                              * fStack_134) ^ uRam0000000146af38d4) & -(uint)(1e-08 <= fVar30) ^
                      uRam0000000146af38d4);
      fVar50 = (float)(((uint)(((fRam0000000146af38e8 -
                                fVar50 * fVar50 * fVar37 * fRam0000000146af38e8) * fVar50 + fVar50)
                              * fStack_130) ^ uRam0000000146af38d8) & -(uint)(1e-08 <= fVar37) ^
                      uRam0000000146af38d8);
      fVar25 = (float)(((uint)(((fRam0000000146af38ec -
                                fVar25 * fVar25 * fVar52 * fRam0000000146af38ec) * fVar25 + fVar25)
                              * fStack_12c) ^ uRam0000000146af38dc) & -(uint)(1e-08 <= fVar52) ^
                      uRam0000000146af38dc);
      auVar18._12_4_ = 0;
      *(undefined1 (*) [16])(param_2 + 4) = auVar18;
      param_2[8] = fVar8 * fVar51;
      param_2[9] = fVar9 * fVar22;
      param_2[10] = fVar10 * fVar23;
      param_2[0xb] = fVar2 * 0.0;
      *param_2 = fVar45;
      param_2[1] = fVar47;
      param_2[2] = fVar50;
      param_2[3] = fVar25;
    }
  }
  else if ((param_4 == 1) && (lVar1 = *(longlong *)(param_1 + 0x118), lVar1 != 0)) {
    auVar18 = *(undefined1 (*) [16])(param_1 + 0x230);
    fVar2 = auVar18._0_4_;
    fVar52 = auVar18._4_4_;
    fVar35 = auVar18._8_4_;
    fVar32 = auVar18._12_4_;
    auVar17._4_4_ = DAT_1464aa788._4_4_;
    auVar17._0_4_ = (float)DAT_1464aa788;
    auVar17._8_4_ = DAT_1464aa790;
    auVar17._12_4_ = 0;
    fVar24 = *(float *)(param_1 + 0x210);
    fVar33 = *(float *)(param_1 + 0x214);
    fVar29 = *(float *)(param_1 + 0x218);
    fVar36 = *(float *)(param_1 + 0x21c);
    auVar18 = minps(auVar17,auVar18);
    auVar19._4_4_ = -(uint)(auVar18._4_4_ < fRam0000000146af3904);
    auVar19._0_4_ = -(uint)(auVar18._0_4_ < _DAT_146af3900);
    auVar19._8_4_ = -(uint)(auVar18._8_4_ < fRam0000000146af3908);
    auVar19._12_4_ = -(uint)(auVar18._12_4_ < fRam0000000146af390c);
    iVar15 = movmskps((int)local_b8,auVar19);
    if (iVar15 == 0) {
      fVar50 = fVar2 * fVar50;
      fVar47 = fVar52 * fVar47;
      fVar45 = fVar35 * fVar45;
      fVar51 = fVar32 * 0.0;
      local_e8 = fVar24 * fVar37 * _DAT_146af38c0 + fVar36 * fVar25 +
                 fVar33 * fVar30 * _DAT_146af38b0 + fVar29 * fVar34 * _DAT_146af38a0;
      fStack_e4 = fVar24 * fVar30 * fRam0000000146af38c4 + fVar36 * fVar34 +
                  fVar33 * fVar37 * fRam0000000146af38b4 + fVar29 * fVar25 * fRam0000000146af38a4;
      fStack_e0 = fVar24 * fVar34 * fRam0000000146af38c8 + fVar36 * fVar30 +
                  fVar33 * fVar25 * fRam0000000146af38b8 + fVar29 * fVar37 * fRam0000000146af38a8;
      fStack_dc = fVar24 * fVar25 * fRam0000000146af38cc + fVar36 * fVar37 +
                  fVar33 * fVar34 * fRam0000000146af38bc + fVar29 * fVar30 * fRam0000000146af38ac;
      fVar25 = fVar45 * fVar33 - fVar47 * fVar29;
      fVar34 = fVar50 * fVar29 - fVar45 * fVar24;
      fVar30 = fVar47 * fVar24 - fVar50 * fVar33;
      fVar37 = fVar51 * fVar36 - fVar51 * fVar36;
      fVar25 = fVar25 + fVar25;
      fVar34 = fVar34 + fVar34;
      fVar30 = fVar30 + fVar30;
      fVar37 = fVar37 + fVar37;
      local_d8._4_4_ =
           (fVar25 * fVar29 - fVar30 * fVar24) + fVar36 * fVar34 + fVar47 +
           *(float *)(param_1 + 0x224);
      local_d8._0_4_ =
           (fVar30 * fVar33 - fVar34 * fVar29) + fVar36 * fVar25 + fVar50 +
           *(float *)(param_1 + 0x220);
      fStack_d0 = (fVar34 * fVar24 - fVar25 * fVar33) + fVar36 * fVar30 + fVar45 +
                  *(float *)(param_1 + 0x228);
      fStack_cc = (fVar37 * fVar36 - fVar37 * fVar36) + fVar36 * fVar37 + fVar51 +
                  *(float *)(param_1 + 0x22c);
    }
    else {
      fVar38 = fVar33 + fVar33;
      fVar41 = fVar29 + fVar29;
      fVar55 = *(float *)(param_1 + 0x220);
      fVar26 = *(float *)(param_1 + 0x224);
      fVar31 = *(float *)(param_1 + 0x228);
      fVar59 = (float)DAT_1464aa788 * fVar2;
      fVar60 = DAT_1464aa788._4_4_ * fVar52;
      fVar61 = DAT_1464aa790 * fVar35;
      fVar43 = (fVar24 + fVar24) * fVar24;
      fVar39 = (fVar24 + fVar24) * fVar36;
      fVar40 = fVar34 + fVar34;
      fVar42 = fVar30 + fVar30;
      fVar56 = (fVar41 * fVar36 + fVar38 * fVar24) * fVar2;
      fVar57 = (fVar39 + fVar41 * fVar33) * fVar52;
      fVar58 = (fVar38 * fVar36 + fVar41 * fVar24) * fVar35;
      fVar44 = fVar52 * (fVar38 * fVar24 - fVar41 * fVar36);
      fVar46 = fVar35 * (fVar41 * fVar33 - fVar39);
      fVar48 = fVar2 * (fVar41 * fVar24 - fVar38 * fVar36);
      fVar39 = (fVar25 + fVar25) * fVar25;
      fVar24 = (float)((uint)((_DAT_146af3810 - (fVar41 * fVar29 + fVar38 * fVar33)) * fVar2) &
                      _DAT_146af3820);
      fVar29 = (float)((uint)((fRam0000000146af3814 - (fVar41 * fVar29 + fVar43)) * fVar52) &
                      uRam0000000146af3824);
      fVar33 = (float)((uint)((fRam0000000146af3818 - (fVar38 * fVar33 + fVar43)) * fVar35) &
                      uRam0000000146af3828);
      fVar36 = (float)((uint)((fRam0000000146af381c - (fVar43 + fVar43)) * fVar32) &
                      uRam0000000146af382c);
      fVar38 = (fVar25 + fVar25) * fVar37;
      fVar41 = DAT_1464aa788._4_4_ * (fVar40 * fVar25 - fVar42 * fVar37);
      fVar43 = DAT_1464aa790 * (fVar42 * fVar34 - fVar38);
      fVar49 = (float)DAT_1464aa788 * (fVar42 * fVar25 - fVar40 * fVar37);
      fVar53 = (fVar40 * fVar25 + fVar42 * fVar37) * (float)DAT_1464aa788;
      fVar38 = (fVar42 * fVar34 + fVar38) * DAT_1464aa788._4_4_;
      fVar54 = (fVar42 * fVar25 + fVar40 * fVar37) * DAT_1464aa790;
      fVar25 = (float)((uint)((_DAT_146af3810 - (fVar42 * fVar30 + fVar40 * fVar34)) *
                             (float)DAT_1464aa788) & _DAT_146af3820);
      fVar30 = (float)((uint)((fRam0000000146af3814 - (fVar42 * fVar30 + fVar39)) *
                             DAT_1464aa788._4_4_) & uRam0000000146af3824);
      fVar34 = (float)((uint)((fRam0000000146af3818 - (fVar40 * fVar34 + fVar39)) * DAT_1464aa790) &
                      uRam0000000146af3828);
      fVar37 = (float)((uint)((fRam0000000146af381c - (fVar39 + fVar39)) * 0.0) &
                      uRam0000000146af382c);
      local_128._0_4_ = fVar53 * fVar44 + fVar25 * fVar24 + fVar49 * fVar58 + fVar37 * fVar55;
      local_128._4_4_ = fVar53 * fVar29 + fVar25 * fVar56 + fVar49 * fVar46 + fVar37 * fVar26;
      uStack_120._0_4_ = fVar53 * fVar57 + fVar25 * fVar48 + fVar49 * fVar33 + fVar37 * fVar31;
      uStack_120._4_4_ =
           fVar53 * fVar36 + fVar25 * fVar36 + fVar49 * fVar36 + fVar37 * fRam0000000146af381c;
      local_118._0_4_ = fVar30 * fVar44 + fVar41 * fVar24 + fVar38 * fVar58 + fVar37 * fVar55;
      local_118._4_4_ = fVar30 * fVar29 + fVar41 * fVar56 + fVar38 * fVar46 + fVar37 * fVar26;
      uStack_110._0_4_ = fVar30 * fVar57 + fVar41 * fVar48 + fVar38 * fVar33 + fVar37 * fVar31;
      uStack_110._4_4_ =
           fVar30 * fVar36 + fVar41 * fVar36 + fVar38 * fVar36 + fVar37 * fRam0000000146af381c;
      local_108._0_4_ = fVar43 * fVar44 + fVar54 * fVar24 + fVar34 * fVar58 + fVar37 * fVar55;
      local_108._4_4_ = fVar43 * fVar29 + fVar54 * fVar56 + fVar34 * fVar46 + fVar37 * fVar26;
      uStack_100._0_4_ = fVar43 * fVar57 + fVar54 * fVar48 + fVar34 * fVar33 + fVar37 * fVar31;
      uStack_100._4_4_ =
           fVar43 * fVar36 + fVar54 * fVar36 + fVar34 * fVar36 + fVar37 * fRam0000000146af381c;
      local_f8 = fVar47 * fVar44 + fVar50 * fVar24 + fVar45 * fVar58 + fRam0000000146af381c * fVar55
      ;
      fStack_f4 = fVar47 * fVar29 + fVar50 * fVar56 + fVar45 * fVar46 +
                  fRam0000000146af381c * fVar26;
      fStack_f0 = fVar47 * fVar57 + fVar50 * fVar48 + fVar45 * fVar33 +
                  fRam0000000146af381c * fVar31;
      fStack_ec = fVar47 * fVar36 + fVar50 * fVar36 + fVar45 * fVar36 +
                  fRam0000000146af381c * fRam0000000146af381c;
      FMatrix::RemoveScaling(&local_128);
      fVar45 = (float)(-(uint)(_DAT_146af3900 <= fVar59) & (_DAT_146af38f0 ^ (uint)fVar51) ^
                      _DAT_146af38f0);
      fVar47 = (float)(-(uint)(fRam0000000146af3904 <= fVar60) &
                       (uRam0000000146af38f4 ^ (uint)fVar22) ^ uRam0000000146af38f4);
      fVar50 = (float)(-(uint)(fRam0000000146af3908 <= fVar61) &
                       (uRam0000000146af38f8 ^ (uint)fVar23) ^ uRam0000000146af38f8);
      local_128 = CONCAT44(local_128._4_4_ * fVar45,(float)local_128 * fVar45);
      uStack_120 = CONCAT44(uStack_120._4_4_,(float)uStack_120 * fVar45);
      uStack_110 = CONCAT44(uStack_110._4_4_,(float)uStack_110 * fVar47);
      uStack_100 = CONCAT44(uStack_100._4_4_,(float)uStack_100 * fVar50);
      local_118 = CONCAT44(local_118._4_4_ * fVar47,(float)local_118 * fVar47);
      local_108 = CONCAT44(local_108._4_4_ * fVar50,(float)local_108 * fVar50);
      FQuat::FQuat(&local_138,&local_128);
      local_148 = 0x322bcc77;
      auVar27._0_4_ = local_138 * local_138 + fStack_130 * fStack_130;
      auVar27._4_4_ = fStack_134 * fStack_134 + fStack_12c * fStack_12c;
      auVar27._8_4_ = fStack_130 * fStack_130 + local_138 * local_138;
      auVar27._12_4_ = fStack_12c * fStack_12c + fStack_134 * fStack_134;
      fVar34 = auVar27._4_4_ + auVar27._0_4_;
      fVar30 = auVar27._8_4_ + auVar27._4_4_;
      fVar37 = auVar27._12_4_ + auVar27._8_4_;
      fVar51 = auVar27._0_4_ + auVar27._12_4_;
      auVar3._4_4_ = fVar30;
      auVar3._0_4_ = fVar34;
      auVar3._8_4_ = fVar37;
      auVar3._12_4_ = fVar51;
      auVar18 = rsqrtps(auVar27,auVar3);
      fVar45 = auVar18._0_4_;
      fVar47 = auVar18._4_4_;
      fVar50 = auVar18._8_4_;
      fVar25 = auVar18._12_4_;
      fVar45 = (_DAT_146af38e0 - fVar45 * fVar45 * fVar34 * _DAT_146af38e0) * fVar45 + fVar45;
      fVar47 = (fRam0000000146af38e4 - fVar47 * fVar47 * fVar30 * fRam0000000146af38e4) * fVar47 +
               fVar47;
      fVar50 = (fRam0000000146af38e8 - fVar50 * fVar50 * fVar37 * fRam0000000146af38e8) * fVar50 +
               fVar50;
      fVar25 = (fRam0000000146af38ec - fVar25 * fVar25 * fVar51 * fRam0000000146af38ec) * fVar25 +
               fVar25;
      local_d8._4_4_ = fStack_f4;
      local_d8._0_4_ = local_f8;
      fStack_d0 = fStack_f0;
      local_e8 = (float)(((uint)(((_DAT_146af38e0 - fVar45 * fVar45 * fVar34 * _DAT_146af38e0) *
                                  fVar45 + fVar45) * local_138) ^ _DAT_146af38d0) &
                         -(uint)(1e-08 <= fVar34) ^ _DAT_146af38d0);
      fStack_e4 = (float)(((uint)(((fRam0000000146af38e4 -
                                   fVar47 * fVar47 * fVar30 * fRam0000000146af38e4) * fVar47 +
                                  fVar47) * fStack_134) ^ uRam0000000146af38d4) &
                          -(uint)(1e-08 <= fVar30) ^ uRam0000000146af38d4);
      fStack_e0 = (float)(((uint)(((fRam0000000146af38e8 -
                                   fVar50 * fVar50 * fVar37 * fRam0000000146af38e8) * fVar50 +
                                  fVar50) * fStack_130) ^ uRam0000000146af38d8) &
                          -(uint)(1e-08 <= fVar37) ^ uRam0000000146af38d8);
      fStack_dc = (float)(((uint)(((fRam0000000146af38ec -
                                   fVar25 * fVar25 * fVar51 * fRam0000000146af38ec) * fVar25 +
                                  fVar25) * fStack_12c) ^ uRam0000000146af38dc) &
                          -(uint)(1e-08 <= fVar51) ^ uRam0000000146af38dc);
      fStack_cc = 0.0;
    }
    fStack_bc = fVar32 * 0.0;
    fStack_c0 = fVar10 * fVar35;
    fStack_c4 = fVar9 * fVar52;
    local_c8 = fVar8 * fVar2;
    lVar1 = *(longlong *)(lVar1 + 0x168);
    if (lVar1 == 0) {
      puVar16 = (undefined8 *)&DAT_1468b5b70;
    }
    else {
      puVar16 = (undefined8 *)(lVar1 + 0x210);
    }
    local_128 = *puVar16;
    uStack_120 = puVar16[1];
    local_118 = puVar16[2];
    uStack_110 = puVar16[3];
    local_108 = puVar16[4];
    uStack_100 = puVar16[5];
    FUN_14162bcf0(&local_e8,param_2,&local_128);
  }
  else {
    *param_2 = fVar25;
    param_2[1] = fVar34;
    param_2[2] = fVar30;
    param_2[3] = fVar37;
    auVar6._12_4_ = 0;
    auVar6._0_12_ = auVar7;
    *(undefined1 (*) [16])(param_2 + 4) = auVar6;
    auVar5._4_4_ = fVar9;
    auVar5._0_4_ = fVar8;
    auVar5._8_4_ = fVar10;
    auVar5._12_4_ = 0;
    *(undefined1 (*) [16])(param_2 + 8) = auVar5;
  }
  return param_2;
}



// FUNCTION 142451780 GetStreamingLevel body=431 status=ok
// SIG undefined GetStreamingLevel(void)

longlong UGameplayStatics::GetStreamingLevel(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  longlong local_res10;
  undefined8 local_res18;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  bVar10 = false;
  local_res18 = 0;
  if ((param_2 != 0) &&
     (local_res10 = param_2, lVar6 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1),
     lVar6 != 0)) {
    FStreamLevelAction::MakeSafeLevelName(&local_48,&local_res10,lVar6);
    cVar5 = FPackageName::IsShortPackageName(&local_48);
    if (cVar5 != '\0') {
      iVar8 = local_40 + -1;
      if (local_40 == 0) {
        iVar8 = 0;
      }
      local_30 = iVar8 + 2;
      local_38 = (undefined2 *)0x0;
      local_2c = 0;
      if (0 < local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      uVar4 = local_2c;
      iVar3 = local_30;
      puVar2 = local_38;
      *local_38 = 0x2f;
      ::_guard_xfg_dispatch_icall_nop(local_38 + 1,local_48,(longlong)iVar8 * 2);
      puVar2[(longlong)iVar8 + 1] = 0;
      bVar11 = local_48 != (undefined2 *)0x0;
      local_48 = puVar2;
      local_40 = iVar3;
      local_3c = uVar4;
      if (bVar11) {
        FMemory::Free();
      }
    }
    plVar9 = *(longlong **)(lVar6 + 0x88);
    plVar1 = plVar9 + *(int *)(lVar6 + 0x90);
    for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
LAB_1424518ca:
        bVar11 = false;
      }
      else {
        bVar10 = true;
        uVar7 = ULevelStreaming::GetWorldAssetPackageName(lVar6,&local_38);
        cVar5 = FString::EndsWith(uVar7,&local_48,1);
        if (cVar5 == '\0') goto LAB_1424518ca;
        bVar11 = true;
      }
      if ((bVar10) && (bVar10 = false, local_38 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      if (bVar11) {
        if (local_48 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        return lVar6;
      }
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free(local_48);
    }
  }
  return 0;
}



// FUNCTION 142451930 FUN_142451930 body=667 status=ok
// SIG undefined FUN_142451930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142451930(longlong param_1,short *param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  float fVar6;
  short *psVar7;
  longlong lVar8;
  longlong *plVar9;
  char cVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float local_res10 [2];
  float local_res18 [2];
  longlong local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [56];
  longlong *local_70;
  undefined1 local_5c;
  
  sVar4 = *param_2;
  fVar13 = 0.0;
  fVar6 = 0.0;
  psVar7 = (short *)0x0;
  do {
    if (sVar4 == 0) {
      *param_4 = -((int)ROUND(-0.5 - (fVar13 + fVar13)) >> 1);
      *param_3 = -((int)ROUND(-0.5 - (fVar6 + fVar6)) >> 1);
      return;
    }
    FUN_14244e9c0(param_1,sVar4,local_res10,local_res18);
    cVar10 = '\0';
    if (psVar7 != (short *)0x0) {
      sVar4 = *param_2;
      sVar5 = *psVar7;
      if (*(char *)(param_1 + 0x30) == '\0') {
        cVar10 = *(char *)(param_1 + 0x6c);
      }
      else {
        if (*(char *)(param_1 + 0x30) == '\x01') {
          uVar11 = FUN_1428ab700();
          FEngineFontServices::GetFontCache(uVar11,&local_d8);
          plVar9 = local_d0;
          if (local_d8 != 0) {
            local_c8 = 0;
            local_c4 = 0;
            local_c0 = 0;
            local_b8 = _DAT_1464aa6e0;
            uStack_b0 = _DAT_1464aa6e8;
            FSlateFontInfo::FSlateFontInfo
                      (local_a8,param_1,*(undefined4 *)(param_1 + 0x13c),param_1 + 0x140,&local_c8);
            uVar11 = FUN_1418336f0(local_d8,local_a8,0x3f800000,&DAT_1469eaf80);
            cVar10 = FCharacterList::GetKerning(uVar11,sVar5,sVar4,local_5c);
            plVar9 = local_70;
            if (local_70 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_70 + 1;
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_70)(local_70);
                LOCK();
                piVar2 = (int *)((longlong)plVar9 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar9 + 8))(plVar9,1);
                }
              }
            }
            plVar9 = local_d0;
            if (local_d0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_d0 + 1;
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*local_d0)(local_d0);
                LOCK();
                piVar2 = (int *)((longlong)plVar9 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar9 + 8))(plVar9,1);
                }
              }
            }
            goto LAB_142451b2c;
          }
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_d0 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_d0)(local_d0);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
        }
        cVar10 = '\0';
      }
    }
LAB_142451b2c:
    fVar12 = local_res18[0];
    if (local_res18[0] <= fVar6) {
      fVar12 = fVar6;
    }
    sVar4 = param_2[1];
    fVar13 = fVar13 + (float)(int)cVar10 + local_res10[0];
    fVar6 = fVar12;
    psVar7 = param_2;
    param_2 = param_2 + 1;
  } while( true );
}



// FUNCTION 142451bd0 GetStringSize body=28 status=ok
// SIG undefined GetStringSize(void)

undefined4 UFont::GetStringSize(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  
  FUN_142451930(param_1,param_2,local_res20,local_res18);
  return local_res18[0];
}



// FUNCTION 142451bf0 GetSurfaceType body=25 status=ok
// SIG undefined GetSurfaceType(void)

void UGameplayStatics::GetSurfaceType(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 100);
  FUN_1426bd9f0(uVar1);
  return;
}



// FUNCTION 142451c10 FUN_142451c10 body=352 status=ok
// SIG undefined FUN_142451c10(void)

float * FUN_142451c10(longlong param_1,float *param_2)

{
  byte bVar1;
  float fVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined4 in_EAX;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  float local_28;
  float fStack_24;
  float local_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = *(float *)(param_1 + 0x210);
  fStack_14 = *(float *)(param_1 + 0x214);
  fStack_10 = *(float *)(param_1 + 0x218);
  fStack_c = *(float *)(param_1 + 0x21c);
  auVar5._4_4_ = -(uint)(fStack_14 != *(float *)(param_1 + 0x254));
  auVar5._0_4_ = -(uint)(local_18 != *(float *)(param_1 + 0x250));
  auVar5._8_4_ = -(uint)(fStack_10 != *(float *)(param_1 + 600));
  auVar5._12_4_ = -(uint)(fStack_c != *(float *)(param_1 + 0x25c));
  iVar7 = movmskps(in_EAX,auVar5);
  if (iVar7 != 0) {
    *(float *)(param_1 + 0x250) = local_18;
    *(float *)(param_1 + 0x254) = fStack_14;
    *(float *)(param_1 + 600) = fStack_10;
    *(float *)(param_1 + 0x25c) = fStack_c;
    puVar8 = (undefined8 *)FQuat::Rotator(&local_18,&local_28);
    *(undefined8 *)(param_1 + 0x260) = *puVar8;
    *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(puVar8 + 1);
  }
  bVar1 = *(byte *)(param_1 + 0x2f4);
  fVar2 = *(float *)(param_1 + 0x268);
  *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x260);
  param_2[2] = fVar2;
  if (((bVar1 & 2) != 0) && (plVar4 = *(longlong **)(param_1 + 0x118), plVar4 != (longlong *)0x0)) {
    lVar9 = FUN_1429d7ab0();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      (**(code **)(*plVar4 + 0x788))(plVar4,&local_28);
      if (((local_28 == *param_2) && (fStack_24 == param_2[1])) && (local_20 == param_2[2])) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        *(ulonglong *)param_2 = CONCAT44(fStack_24,local_28);
        param_2[2] = local_20;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x24c) & 8) == 0) {
    uVar3 = *(uint *)(param_1 + 0x2f4);
    if ((uVar3 & 4) == 0) {
      *param_2 = *(float *)(param_1 + 0x1f8);
    }
    if ((uVar3 & 8) == 0) {
      param_2[1] = *(float *)(param_1 + 0x1fc);
    }
    if ((uVar3 & 0x10) == 0) {
      param_2[2] = *(float *)(param_1 + 0x200);
    }
  }
  return param_2;
}



// FUNCTION 142451d70 GetTimeSeconds body=51 status=ok
// SIG undefined GetTimeSeconds(void)

undefined4 UGameplayStatics::GetTimeSeconds(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x790);
  }
  return 0;
}



// FUNCTION 142451db0 FUN_142451db0 body=25 status=ok
// SIG undefined FUN_142451db0(void)

undefined8 * FUN_142451db0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x314);
  *param_2 = *(undefined8 *)(param_1 + 0x30c);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 142451dd0 GetUnpausedTimeSeconds body=51 status=ok
// SIG undefined GetUnpausedTimeSeconds(void)

undefined4 UGameplayStatics::GetUnpausedTimeSeconds(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x794);
  }
  return 0;
}



// FUNCTION 142451e10 GetValues body=360 status=ok
// SIG undefined GetValues(void)

void FActiveForceFeedbackEffect::GetValues(longlong *param_1,float *param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (*param_1 == 0) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    return;
  }
  fVar8 = (float)UForceFeedbackEffect::GetDuration();
  fVar1 = *(float *)((longlong)param_1 + 0x14);
  lVar2 = *param_1;
  fVar11 = fVar1 / fVar8;
  iVar6 = 0;
  if (0 < *(int *)(lVar2 + 0x30)) {
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 0x28);
      uVar5 = FRuntimeFloatCurve::GetRichCurve(lVar3 + 8 + lVar7);
      fVar9 = (float)FRichCurve::Eval(uVar5,fVar1 - (float)((int)ROUND((fVar11 + fVar11) - 0.5) >> 1
                                                           ) * fVar8,0);
      uVar4 = *(uint *)(lVar7 + lVar3);
      if ((uVar4 & 1) != 0) {
        fVar10 = *param_2;
        if ((*param_2 <= fVar9) && (fVar10 = fVar9, 1.0 <= fVar9)) {
          fVar10 = 1.0;
        }
        *param_2 = fVar10;
        uVar4 = *(uint *)(lVar7 + lVar3);
      }
      if ((uVar4 & 2) != 0) {
        fVar10 = param_2[1];
        if ((param_2[1] <= fVar9) && (fVar10 = fVar9, 1.0 <= fVar9)) {
          fVar10 = 1.0;
        }
        param_2[1] = fVar10;
        uVar4 = *(uint *)(lVar7 + lVar3);
      }
      if ((uVar4 & 4) != 0) {
        fVar10 = param_2[2];
        if ((param_2[2] <= fVar9) && (fVar10 = fVar9, 1.0 <= fVar9)) {
          fVar10 = 1.0;
        }
        param_2[2] = fVar10;
        uVar4 = *(uint *)(lVar7 + lVar3);
      }
      if ((uVar4 & 8) != 0) {
        fVar10 = param_2[3];
        if ((param_2[3] <= fVar9) && (fVar10 = fVar9, 1.0 <= fVar9)) {
          fVar10 = 1.0;
        }
        param_2[3] = fVar10;
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 0x80;
    } while (iVar6 < *(int *)(lVar2 + 0x30));
  }
  return;
}



// FUNCTION 142451f80 FUN_142451f80 body=290 status=ok
// SIG undefined FUN_142451f80(void)

void FUN_142451f80(longlong *param_1,undefined4 param_2,float *param_3,float param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  iVar4 = 0;
  if (0 < (int)param_1[1]) {
    lVar5 = 0;
    do {
      lVar1 = *param_1;
      uVar3 = FRuntimeFloatCurve::GetRichCurve(lVar1 + 8 + lVar5);
      fVar6 = (float)FRichCurve::Eval(uVar3,param_2,0);
      uVar2 = *(uint *)(lVar5 + lVar1);
      fVar6 = fVar6 * param_4;
      if ((uVar2 & 1) != 0) {
        fVar7 = *param_3;
        if ((*param_3 <= fVar6) && (fVar7 = fVar6, 1.0 <= fVar6)) {
          fVar7 = 1.0;
        }
        *param_3 = fVar7;
        uVar2 = *(uint *)(lVar5 + lVar1);
      }
      if ((uVar2 & 2) != 0) {
        fVar7 = param_3[1];
        if ((param_3[1] <= fVar6) && (fVar7 = fVar6, 1.0 <= fVar6)) {
          fVar7 = 1.0;
        }
        param_3[1] = fVar7;
        uVar2 = *(uint *)(lVar5 + lVar1);
      }
      if ((uVar2 & 4) != 0) {
        fVar7 = param_3[2];
        if ((param_3[2] <= fVar6) && (fVar7 = fVar6, 1.0 <= fVar6)) {
          fVar7 = 1.0;
        }
        param_3[2] = fVar7;
        uVar2 = *(uint *)(lVar5 + lVar1);
      }
      if ((uVar2 & 8) != 0) {
        fVar7 = param_3[3];
        if ((param_3[3] <= fVar6) && (fVar7 = fVar6, 1.0 <= fVar6)) {
          fVar7 = 1.0;
        }
        param_3[3] = fVar7;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x80;
    } while (iVar4 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 1424520b0 GetValues body=291 status=ok
// SIG undefined GetValues(void)

void UForceFeedbackEffect::GetValues
               (longlong param_1,undefined4 param_2,float *param_3,float param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x28);
      uVar3 = FRuntimeFloatCurve::GetRichCurve(lVar1 + 8 + lVar5);
      fVar6 = (float)FRichCurve::Eval(uVar3,param_2,0);
      uVar2 = *(uint *)(lVar5 + lVar1);
      fVar6 = fVar6 * param_4;
      if ((uVar2 & 1) != 0) {
        fVar7 = *param_3;
        if ((*param_3 <= fVar6) && (fVar7 = fVar6, 1.0 <= fVar6)) {
          fVar7 = 1.0;
        }
        *param_3 = fVar7;
        uVar2 = *(uint *)(lVar5 + lVar1);
      }
      if ((uVar2 & 2) != 0) {
        fVar7 = param_3[1];
        if ((param_3[1] <= fVar6) && (fVar7 = fVar6, 1.0 <= fVar6)) {
          fVar7 = 1.0;
        }
        param_3[1] = fVar7;
        uVar2 = *(uint *)(lVar5 + lVar1);
      }
      if ((uVar2 & 4) != 0) {
        fVar7 = param_3[2];
        if ((param_3[2] <= fVar6) && (fVar7 = fVar6, 1.0 <= fVar6)) {
          fVar7 = 1.0;
        }
        param_3[2] = fVar7;
        uVar2 = *(uint *)(lVar5 + lVar1);
      }
      if ((uVar2 & 8) != 0) {
        fVar7 = param_3[3];
        if ((param_3[3] <= fVar6) && (fVar7 = fVar6, 1.0 <= fVar6)) {
          fVar7 = 1.0;
        }
        param_3[3] = fVar7;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x80;
    } while (iVar4 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 142452240 GetValues body=98 status=ok
// SIG undefined GetValues(void)

void UHapticFeedbackEffect_Curve::GetValues(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0xa0);
  uVar2 = FRichCurve::Eval(uVar1,param_2,0);
  param_3[1] = uVar2;
  uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x28);
  uVar2 = FRichCurve::Eval(uVar1,param_2,0);
  *param_3 = uVar2;
  return;
}



// FUNCTION 1424522b0 GetValues body=124 status=ok
// SIG undefined GetValues(void)

void UHapticFeedbackEffect_SoundWave::GetValues(longlong param_1,float param_2,undefined4 *param_3)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  fVar2 = (float)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x2a0))();
  *param_3 = 0x3f800000;
  iVar1 = (int)(((float)iVar1 * param_2) / fVar2);
  if (iVar1 < *(int *)(param_1 + 0x4c)) {
    fVar2 = (float)*(byte *)((longlong)iVar1 + *(longlong *)(param_1 + 0x38)) * 0.003921569;
  }
  else {
    fVar2 = 0.0;
  }
  param_3[1] = fVar2;
  *(longlong **)(param_3 + 2) = (longlong *)(param_1 + 0x38);
  return;
}



// FUNCTION 142452330 FUN_142452330 body=3 status=ok
// SIG undefined FUN_142452330(void)

undefined4 FUN_142452330(undefined4 param_1)

{
  return param_1;
}



// FUNCTION 142452360 FUN_142452360 body=51 status=ok
// SIG undefined FUN_142452360(void)

undefined4 FUN_142452360(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x7b0);
  }
  return 0;
}



// FUNCTION 1424523a0 FUN_1424523a0 body=70 status=ok
// SIG undefined FUN_1424523a0(void)

undefined8 * FUN_1424523a0(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
  if (lVar2 == 0) {
    puVar3 = (undefined8 *)&DAT_1468b5ca8;
  }
  else {
    puVar3 = (undefined8 *)(lVar2 + 0x7bc);
  }
  uVar1 = *(undefined4 *)(puVar3 + 1);
  *param_1 = *puVar3;
  *(undefined4 *)(param_1 + 1) = uVar1;
  return param_1;
}



// FUNCTION 1424523f0 FUN_1424523f0 body=1360 status=ok
// SIG undefined FUN_1424523f0(void)

undefined8 FUN_1424523f0(wchar_t **param_1,wchar_t **param_2)

{
  wchar_t wVar1;
  wchar_t wVar2;
  int iVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  uint uVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  wchar_t *local_res8;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  undefined8 local_30;
  
  local_30 = 2;
  local_38 = (wchar_t *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  pwVar12 = local_38;
  FGenericPlatformString::Memcpy(local_38,&DAT_1450a00ac,4);
  pwVar15 = L"";
  iVar7 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_res8 = L"";
    iVar7 = 0;
  }
  else {
    local_res8 = *param_1;
  }
  local_48 = (wchar_t *)0x0;
  local_3c = 0;
  pwVar14 = (wchar_t *)0x0;
  if (1 < iVar7) {
    iVar7 = 1;
  }
  iVar3 = iVar7 + 1;
  if (iVar7 == 0) {
    iVar3 = 0;
  }
  local_40 = iVar3;
  if ((0 < iVar3) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0), iVar3 = local_40,
     pwVar14 = local_48, 0 < local_40)) {
    wcsncpy(local_48,local_res8,(longlong)iVar7);
    pwVar14[iVar7] = L'\0';
  }
  pwVar10 = L"";
  if ((uint)local_30 != 0) {
    pwVar10 = pwVar12;
  }
  pwVar5 = L"";
  if (iVar3 != 0) {
    pwVar5 = pwVar14;
  }
  lVar11 = (longlong)pwVar10 - (longlong)pwVar5;
  do {
    wVar1 = *pwVar5;
    wVar2 = *(wchar_t *)((longlong)pwVar5 + lVar11);
    if (wVar1 != wVar2) break;
    pwVar5 = pwVar5 + 1;
  } while (wVar2 != L'\0');
  if (pwVar14 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  pwVar14 = (wchar_t *)0x0;
  if (wVar1 != wVar2) {
    uVar9 = 0;
    goto LAB_142452912;
  }
  iVar7 = *(int *)(param_1 + 1);
  uVar13 = iVar7 - 1;
  if (iVar7 == 0) {
    uVar13 = 0xffffffff;
  }
  uVar4 = iVar7 - 1;
  if (iVar7 == 0) {
    uVar13 = 0;
  }
  if (1 < uVar13) {
    uVar13 = 1;
  }
  if (iVar7 == 0) {
    uVar4 = 0;
  }
  uVar6 = uVar13;
  if ((uVar13 < 0x80000001) && (uVar6 = uVar4, 0x80000000 < uVar4)) {
    uVar6 = 0x80000000;
  }
  if (iVar7 == 0) {
    local_res8 = L"";
  }
  else {
    local_res8 = *param_1;
  }
  iVar7 = uVar6 - uVar13;
  local_48 = (wchar_t *)0x0;
  local_3c = 0;
  pwVar12 = (wchar_t *)(ulonglong)(iVar7 + 1);
  if (iVar7 == 0) {
    pwVar12 = pwVar14;
  }
  iVar3 = (int)pwVar12;
  local_40 = iVar3;
  if ((0 < iVar3) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0), iVar3 = local_40,
     pwVar14 = local_48, 0 < local_40)) {
    wcsncpy(local_48,local_res8 + (int)uVar13,(longlong)iVar7);
    pwVar14[iVar7] = L'\0';
  }
  if (param_2 == &local_48) {
    if (pwVar14 != (wchar_t *)0x0) {
      FMemory::Free(pwVar14);
    }
  }
  else {
    if (*param_2 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    *param_2 = pwVar14;
    *(int *)(param_2 + 1) = iVar3;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_3c;
  }
  pwVar12 = local_38;
  iVar7 = (uint)local_30;
  pwVar14 = L"";
  if ((uint)local_30 != 0) {
    pwVar14 = local_38;
  }
  iVar3 = FUN_141592950(param_2,pwVar14,0,0,0xffffffff);
  if (iVar3 != -1) {
    pwVar14 = L"";
    if (iVar7 != 0) {
      pwVar14 = pwVar12;
    }
    iVar3 = FUN_141592950(param_2,pwVar14,0,0,0xffffffff);
    iVar7 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_res8 = L"";
      iVar7 = 0;
    }
    else {
      local_res8 = *param_2;
    }
    if (iVar3 < 0) {
      iVar7 = 0;
    }
    else if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
    local_48 = (wchar_t *)0x0;
    local_3c = 0;
    iVar3 = iVar7 + 1;
    if (iVar7 == 0) {
      iVar3 = 0;
    }
    pwVar14 = (wchar_t *)0x0;
    local_40 = iVar3;
    if ((0 < iVar3) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0), iVar3 = local_40,
       pwVar14 = local_48, 0 < local_40)) {
      wcsncpy(local_48,local_res8,(longlong)iVar7);
      pwVar14[iVar7] = L'\0';
    }
    if (param_2 == &local_48) {
      if (pwVar14 != (wchar_t *)0x0) {
        FMemory::Free(pwVar14);
      }
    }
    else {
      if (*param_2 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *param_2 = pwVar14;
      *(int *)(param_2 + 1) = iVar3;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_3c;
    }
  }
  iVar7 = *(int *)(param_1 + 1);
  uVar13 = iVar7 - 1;
  if (iVar7 == 0) {
    uVar13 = 0;
  }
  uVar4 = iVar7 - 1;
  if (1 < uVar13) {
    uVar13 = 1;
  }
  if (iVar7 == 0) {
    uVar4 = 0;
  }
  uVar6 = uVar13;
  if ((uVar13 < 0x80000001) && (uVar6 = uVar4, 0x80000000 < uVar4)) {
    uVar6 = 0x80000000;
  }
  if (iVar7 == 0) {
    local_res8 = L"";
  }
  else {
    local_res8 = *param_1;
  }
  iVar3 = uVar6 - uVar13;
  local_48 = (wchar_t *)0x0;
  local_3c = 0;
  iVar7 = iVar3 + 1;
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  pwVar14 = local_48;
  local_40 = iVar7;
  if ((0 < iVar7) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0), iVar7 = local_40,
     pwVar14 = local_48, 0 < local_40)) {
    wcsncpy(local_48,local_res8 + (int)uVar13,(longlong)iVar3);
    pwVar14[iVar3] = L'\0';
  }
  if (param_1 == &local_48) {
    if (pwVar14 != (wchar_t *)0x0) {
      FMemory::Free(pwVar14);
    }
  }
  else {
    if (*param_1 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    *param_1 = pwVar14;
    *(int *)(param_1 + 1) = iVar7;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
  }
  iVar7 = (uint)local_30;
  pwVar14 = L"";
  if ((uint)local_30 != 0) {
    pwVar14 = pwVar12;
  }
  iVar3 = FUN_141592950(param_1,pwVar14,0,0,0xffffffff);
  if (iVar3 == -1) {
    if (param_1 != &local_38) {
      if (*param_1 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *param_1 = (wchar_t *)0x0;
      param_1[1] = (wchar_t *)0x0;
    }
  }
  else {
    pwVar14 = L"";
    if (iVar7 != 0) {
      pwVar14 = pwVar12;
    }
    uVar4 = FUN_141592950(param_1,pwVar14,0,0,0xffffffff);
    iVar7 = *(int *)(param_1 + 1);
    uVar6 = uVar4 + 0x7fffffff;
    uVar13 = iVar7 - 1;
    if (iVar7 == 0) {
      uVar13 = 0;
    }
    uVar8 = iVar7 - 1;
    if (uVar4 < uVar13) {
      uVar13 = uVar4;
    }
    if (iVar7 == 0) {
      uVar8 = 0;
    }
    uVar4 = uVar13;
    if ((uVar13 <= uVar6) && (uVar4 = uVar8, uVar6 < uVar8)) {
      uVar4 = uVar6;
    }
    if (iVar7 != 0) {
      pwVar15 = *param_1;
    }
    iVar7 = uVar4 - uVar13;
    local_38 = (wchar_t *)0x0;
    pwVar14 = (wchar_t *)0x0;
    uVar4 = iVar7 + 1;
    if (iVar7 == 0) {
      uVar4 = 0;
    }
    local_30 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      pwVar14 = local_38;
      uVar4 = (uint)local_30;
      if (0 < (int)(uint)local_30) {
        wcsncpy(local_38,pwVar15 + (int)uVar13,(longlong)iVar7);
        pwVar14[iVar7] = L'\0';
      }
    }
    if (param_1 != &local_38) {
      if (*param_1 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      uVar9 = 1;
      *param_1 = pwVar14;
      *(uint *)(param_1 + 1) = uVar4;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_30._4_4_;
      goto LAB_142452912;
    }
    if (pwVar14 != (wchar_t *)0x0) {
      FMemory::Free(pwVar14);
      uVar9 = 1;
      goto LAB_142452912;
    }
  }
  uVar9 = 1;
LAB_142452912:
  if (pwVar12 != (wchar_t *)0x0) {
    FMemory::Free(pwVar12);
  }
  return uVar9;
}



// FUNCTION 142452940 FUN_142452940 body=930 status=ok
// SIG undefined FUN_142452940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142452940(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  int iVar21;
  longlong lVar22;
  undefined1 auStack_f8 [32];
  uint local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  longlong local_a0;
  longlong local_98;
  int local_90;
  int local_88;
  char local_84;
  int local_80;
  longlong local_78;
  longlong local_70;
  int local_68;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar19 = 0;
  local_d8 = 0;
  local_c0 = param_2;
  lVar9 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar9 != 0) {
    local_b8 = *param_3;
    local_b0 = *(undefined4 *)(param_3 + 1);
    local_ac = param_4;
    uVar10 = FUN_141f1ec00();
    local_d0 = uVar19;
    if (uVar10 != 0) {
      uVar11 = FUN_141f1ec00();
      uVar17 = uVar10;
      do {
        local_d0 = uVar10;
        if (uVar17 == uVar11) break;
        uVar17 = *(ulonglong *)(uVar17 + 0x30);
        local_d0 = uVar19;
      } while (uVar17 != 0);
    }
    local_a8 = 5;
    local_50 = '\0';
    local_c8 = lVar9;
    FUN_14044bc80(&local_a0,&local_c8,&local_d0);
    FUN_14045a130();
    if (local_84 == '\0') {
LAB_142452a30:
      if (local_78 != 0) {
        uVar17 = 0;
        plVar20 = *(longlong **)(local_78 + 0x500);
        uVar10 = (longlong)*(int *)(local_78 + 0x508) & 0x1fffffffffffffff;
        if (plVar20 + *(int *)(local_78 + 0x508) < plVar20) {
          uVar10 = uVar17;
        }
        if (uVar10 != 0) {
          do {
            lVar9 = *plVar20;
            if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x728) == param_2)) {
              iVar7 = FUN_1424c8f90(lVar9,&local_b8);
              uVar19 = (ulonglong)(uint)((int)uVar19 + iVar7);
            }
            plVar20 = plVar20 + 1;
            uVar17 = uVar17 + 1;
          } while (uVar17 != uVar10);
          local_d8 = (uint)uVar19;
        }
      }
      lVar9 = local_a0;
      iVar7 = local_88 + 1;
      if (iVar7 < local_68 + local_90) {
        lVar22 = (longlong)iVar7 * 8;
        iVar21 = local_68;
        iVar15 = local_90;
        do {
          lVar14 = 0;
          if (iVar7 < iVar15) {
            lVar18 = *(longlong *)(local_98 + lVar22);
          }
          else {
            lVar18 = *(longlong *)(local_70 + (longlong)(iVar7 - iVar15) * 8);
          }
          local_80 = local_80 + 1;
          if ((lVar18 != 0) &&
             (lVar12 = AActor::GetLevel(), iVar21 = local_68, iVar15 = local_90, lVar12 != 0)) {
            if ((local_a8 & 1) != 0) {
              iVar1 = *(int *)(lVar18 + 0xc);
              if (iVar1 < (int)DAT_1469e91c4) {
                uVar16 = iVar1 >> 0x1f & 0xffff;
                uVar8 = iVar1 + uVar16;
                lVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                         (longlong)(int)((uVar8 & 0xffff) - uVar16) * 0x18;
              }
              if ((*(uint *)(lVar14 + 8) >> 0x1d & 1) != 0) goto LAB_142452c2f;
            }
            if (((local_a8 >> 1 & 1) == 0) ||
               (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), iVar21 = local_68, iVar15 = local_90,
               cVar6 != '\0')) {
              if ((local_a8 >> 2 & 1) != 0) {
                if (((*(byte *)(lVar12 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar12 + 0x205) & 0x10) == 0)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                piVar2 = *(int **)(lVar12 + 600);
                if (((*(longlong *)(lVar12 + 0xc0) == 0) ||
                    (piVar13 = (int *)UWorld::GetActiveLevelCollection(), piVar13 == (int *)0x0)) ||
                   (piVar2 == piVar13)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if ((bVar3) || (bVar3 = false, bVar4)) {
                  bVar3 = true;
                }
                iVar21 = local_68;
                iVar15 = local_90;
                if ((!bVar5) || (!bVar3)) goto LAB_142452c2f;
              }
              lVar14 = ULevel::GetWorld();
              iVar21 = local_68;
              iVar15 = local_90;
              if (lVar14 == lVar9) {
                lVar14 = AActor::GetLevel();
                if (lVar14 == *(longlong *)(lVar9 + 0x30)) goto LAB_142452c46;
                lVar14 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                iVar21 = local_68;
                iVar15 = local_90;
                if (!bVar5) goto LAB_142452c46;
              }
            }
          }
LAB_142452c2f:
          iVar7 = iVar7 + 1;
          lVar22 = lVar22 + 8;
          if (iVar21 + iVar15 <= iVar7) break;
        } while( true );
      }
      uVar19 = (ulonglong)local_d8;
      local_78 = 0;
      local_84 = '\x01';
    }
LAB_142452c81:
    if (local_50 != '\0') {
      local_50 = 0;
      UWorld::RemoveOnActorSpawnedHandler(local_a0,local_58);
      if (local_70 != 0) {
        FMemory::Free();
      }
      if (local_98 != 0) {
        FMemory::Free();
      }
    }
  }
  return uVar19;
LAB_142452c46:
  uVar19 = (ulonglong)local_d8;
  param_2 = local_c0;
  local_88 = iVar7;
  local_78 = lVar18;
  if (local_84 != '\0') goto LAB_142452c81;
  goto LAB_142452a30;
}



// FUNCTION 142452cf0 HandleBrowseToDefaultMapFailure body=20 status=ok
// SIG undefined HandleBrowseToDefaultMapFailure(void)

void UGameEngine::HandleBrowseToDefaultMapFailure(void)

{
  FUN_142876370();
  FUN_1416a8180(0);
  return;
}



// FUNCTION 142452d20 FUN_142452d20 body=86 status=ok
// SIG undefined FUN_142452d20(void)

void FUN_142452d20(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  (**(code **)(*(longlong *)param_1[0x96] + 0x7c8))();
  cVar1 = (**(code **)(*param_1 + 0x868))(param_1);
  if (cVar1 != '\0') {
    lVar2 = FUN_1422312c0(param_1);
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_1422312c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142452d69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x2e0))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 142452d80 FUN_142452d80 body=825 status=ok
// SIG undefined FUN_142452d80(void)

void FUN_142452d80(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  longlong local_48;
  int local_40;
  longlong local_38 [2];
  longlong local_28 [2];
  
  (**(code **)(*(longlong *)param_1[0x96] + 0x7c0))();
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  UWorld::GetPlayerControllerIterator(uVar3,&local_68);
  iVar2 = (int)local_60;
  while ((-1 < iVar2 && (iVar2 < (int)local_68[1]))) {
    lVar4 = FWeakObjectPtr::Get(*local_68 + (longlong)iVar2 * 8);
    if ((lVar4 != 0) &&
       ((*(longlong *)(lVar4 + 0x488) == 0 && (cVar1 = FUN_14293c250(param_1,lVar4), cVar1 != '\0'))
       )) {
      (**(code **)(*param_1 + 0x840))(param_1,lVar4);
    }
    iVar2 = (int)local_60 + 1;
    local_60 = CONCAT44(local_60._4_4_,iVar2);
  }
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_142866090(DAT_146b17150,uVar3);
  plVar5 = (longlong *)AActor::GetWorldSettings(param_1);
  (**(code **)(*plVar5 + 0x708))(plVar5);
  plVar5 = (longlong *)AActor::GetWorldSettings(param_1);
  (**(code **)(*plVar5 + 0x710))(plVar5);
  local_60 = 7;
  local_68 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  plVar5 = local_68;
  FGenericPlatformString::Memcpy(local_68,L"BugLoc",0xe);
  uVar3 = FString::FString(local_28,param_1 + 0x8b);
  UGameplayStatics::ParseOption(&local_48,uVar3,&local_68);
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  local_68 = (longlong *)0x0;
  local_60 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  plVar5 = local_68;
  FGenericPlatformString::Memcpy(local_68,L"BugRot",0xe);
  uVar3 = FString::FString(local_28,param_1 + 0x8b);
  UGameplayStatics::ParseOption(&local_58,uVar3,&local_68);
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  if ((1 < local_40) || (1 < local_50)) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::GetPlayerControllerIterator(uVar3,&local_68);
    iVar2 = (int)local_60;
    while ((-1 < iVar2 && (iVar2 < (int)local_68[1]))) {
      lVar4 = FWeakObjectPtr::Get(*local_68 + (longlong)iVar2 * 8);
      if ((lVar4 != 0) && (plVar5 = *(longlong **)(lVar4 + 0x5a8), plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x3b8))(plVar5,&local_48,&local_58);
      }
      iVar2 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar2);
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x868))(param_1);
  if ((cVar1 != '\0') && (lVar4 = FUN_1422312c0(param_1), lVar4 != 0)) {
    plVar5 = (longlong *)FUN_1422312c0(param_1);
    local_68 = (longlong *)0x0;
    local_60 = 0;
    lVar4 = *plVar5;
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar3 = FUN_1428cc8c0(uVar3,local_28);
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar6 = FUN_1428cc8c0(uVar6,local_38);
    (**(code **)(lVar4 + 0x2d8))(plVar5,uVar6,uVar3,&local_68);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    plVar5 = local_68;
    for (iVar2 = (int)local_60; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1424530c0 FUN_1424530c0 body=74 status=ok
// SIG undefined FUN_1424530c0(void)

void FUN_1424530c0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_1 + 0x4b0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x7b8))();
  }
  cVar1 = FUN_14293c2f0(param_1);
  if (cVar1 == '\0') {
    plVar2 = (longlong *)AActor::GetWorldSettings(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001424530fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x708))(plVar2);
    return;
  }
  return;
}



// FUNCTION 142453110 FUN_142453110 body=79 status=ok
// SIG undefined FUN_142453110(void)

void FUN_142453110(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x11d8);
  if (lVar2 != 0) {
    bVar3 = true;
    if (param_3 != 0) {
      iVar1 = UNetDriver::GetNetMode(param_3,param_2,1);
      lVar2 = *(longlong *)(param_1 + 0x11d8);
      bVar3 = iVar1 != 3;
    }
    FUN_142937870(lVar2,param_4,bVar3);
  }
  return;
}



// FUNCTION 142453170 FUN_142453170 body=538 status=ok
// SIG undefined FUN_142453170(void)

void FUN_142453170(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 local_res8 [8];
  undefined1 local_48 [12];
  undefined1 local_3c [20];
  
  plVar9 = (longlong *)*param_2;
  if (plVar9 == (longlong *)0x0) {
LAB_1424531bf:
    plVar9 = (longlong *)0x0;
  }
  else {
    lVar4 = FUN_1429e18b0();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1424531bf;
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x7c8))(param_1,local_res8,plVar9);
  if (*plVar5 != 0) {
    lVar6 = FUN_1429e18b0();
    lVar4 = *plVar5;
    for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar6) goto LAB_142453202;
    }
  }
  lVar4 = 0;
LAB_142453202:
  if ((plVar9 == (longlong *)0x0) || (plVar9[2] == lVar4)) {
    (**(code **)(**(longlong **)(*param_2 + 0x460) + 0x5e8))();
    plVar5 = (longlong *)((longlong *)*param_2)[0x8c];
    (**(code **)(*(longlong *)*param_2 + 0x798))();
    (**(code **)(*plVar5 + 0x788))(plVar5,*(undefined8 *)(*param_2 + 0x460));
  }
  else {
    plVar5 = plVar9;
    if (plVar9[0xa1] != 0) {
      if (((*(uint *)((longlong)plVar9 + 0x4cc) >> 1 & 1) == 0) ||
         (cVar3 = (**(code **)(*plVar9 + 0x768))(plVar9), cVar3 == '\0')) {
        iVar10 = 1;
      }
      else {
        iVar10 = 0;
      }
      lVar1 = *param_1;
      uVar7 = (**(code **)(*plVar9 + 0x720))(plVar9,local_48);
      uVar8 = (**(code **)(*plVar9 + 0xe40))(plVar9,local_3c);
      plVar5 = (longlong *)(**(code **)(lVar1 + 0x8c8))(param_1,iVar10 + 1,uVar8,uVar7,lVar4);
      if (plVar5 == (longlong *)0x0) {
        FUN_142227350(plVar9,0,1);
        return;
      }
      (**(code **)(*plVar9 + 0xbe8))(plVar9,plVar5);
      (**(code **)(*plVar5 + 0xbf0))(plVar5,plVar9);
      (**(code **)(*param_1 + 0x7c0))(param_1,plVar9,plVar5);
      *param_2 = (longlong)plVar5;
      plVar9 = plVar5;
      goto LAB_142453349;
    }
  }
  FUN_142227350(plVar5,0,1);
LAB_142453349:
  (**(code **)(*param_1 + 0x8c0))(param_1,*param_2);
  (**(code **)(*param_1 + 0x898))(param_1,*param_2);
  if (plVar9 != (longlong *)0x0) {
    FUN_14293be90(param_1,plVar9);
  }
  return;
}



// FUNCTION 142453390 FUN_142453390 body=452 status=ok
// SIG undefined FUN_142453390(void)

void FUN_142453390(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 local_res10 [8];
  undefined1 local_48 [12];
  undefined1 local_3c [20];
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar5 = FUN_1429e18b0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar6 = plVar1;
      if (plVar1[0xa1] != 0) {
        plVar6 = (longlong *)(**(code **)(*param_1 + 0x7c8))(param_1,local_res10,plVar1);
        if (*plVar6 != 0) {
          lVar7 = FUN_1429e18b0();
          lVar5 = *plVar6;
          for (lVar2 = lVar5; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
            if (lVar2 == lVar7) goto LAB_142453447;
          }
        }
        lVar5 = 0;
LAB_142453447:
        if (((*(uint *)((longlong)plVar1 + 0x4cc) >> 1 & 1) == 0) ||
           (cVar4 = (**(code **)(*plVar1 + 0x768))(plVar1), cVar4 == '\0')) {
          iVar10 = 1;
        }
        else {
          iVar10 = 0;
        }
        lVar2 = *param_1;
        uVar8 = (**(code **)(*plVar1 + 0x720))(plVar1,local_48);
        uVar9 = (**(code **)(*plVar1 + 0xe40))(plVar1,local_3c);
        plVar6 = (longlong *)(**(code **)(lVar2 + 0x8c8))(param_1,iVar10 + 1,uVar9,uVar8,lVar5);
        if (plVar6 == (longlong *)0x0) {
          FUN_142227350(plVar1,0,1);
          return;
        }
        (**(code **)(*plVar1 + 0xbe8))(plVar1,plVar6);
        (**(code **)(*plVar6 + 0xbf0))(plVar6,plVar1);
        (**(code **)(*param_1 + 0x7c0))(param_1,plVar1,plVar6);
        *param_2 = (longlong)plVar6;
      }
      goto LAB_14245351a;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_14245351a:
  (**(code **)(*param_1 + 0x8c0))(param_1,*param_2);
  (**(code **)(*param_1 + 0x898))(param_1,*param_2);
  if (plVar6 != (longlong *)0x0) {
    FUN_14293be90(param_1,plVar6);
  }
  return;
}



// FUNCTION 142453560 FUN_142453560 body=142 status=ok
// SIG undefined FUN_142453560(void)

void FUN_142453560(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x9c) & 2) == 0) {
    cVar1 = FUN_14293c170();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x900))(param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_14293c250(param_1,param_2);
        if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001424535b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x840))(param_1,param_2);
          return;
        }
      }
      if (param_1[0xa0] == DAT_146af3980) {
        cVar1 = FUN_14293c2f0(param_1);
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x910))(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1424535f0 FUN_1424535f0 body=75 status=ok
// SIG undefined FUN_1424535f0(void)

void FUN_1424535f0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x9c) & 2) == 0) {
    cVar1 = FUN_14293c170();
    if (cVar1 == '\0') {
      cVar1 = FUN_14293c250(param_1,param_2);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x840))(param_1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 142453660 HasActiveRootMotionSources body=24 status=ok
// SIG undefined HasActiveRootMotionSources(void)

undefined1 FRootMotionSourceGroup::HasActiveRootMotionSources(longlong param_1)

{
  if ((*(int *)(param_1 + 0x90) < 1) && (*(int *)(param_1 + 0xe0) < 1)) {
    return 0;
  }
  return 1;
}



// FUNCTION 142453680 FUN_142453680 body=8 status=ok
// SIG undefined FUN_142453680(void)

undefined1 FUN_142453680(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xe8);
}


