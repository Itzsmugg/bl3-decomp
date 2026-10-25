// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140771f80 FUN_140771f80 body=514 status=ok
// SIG undefined FUN_140771f80(void)

undefined8 * FUN_140771f80(undefined8 *param_1,longlong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_res8;
  
  FUN_141784790(param_2,L"SpawnerComponent");
  uVar2 = FUN_1407b4660();
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"SpawnerComponent",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar3,uVar2,param_2);
  FUN_1407bb620(param_1,param_2);
  *param_1 = &PTR_FUN_14408c508;
  param_1[0x8b] = &PTR_LAB_14408cc20;
  param_1[0xbd] = &PTR_LAB_14408cc40;
  param_1[0xbe] = &PTR_LAB_14408cc68;
  param_1[0xbf] = &PTR_LAB_14408ccb0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  lVar4 = UCableComponent::GetAttachedActor(param_1);
  if (lVar4 != 0) {
    lVar5 = FUN_1407b4660();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140772077;
  }
  lVar4 = 0;
LAB_140772077:
  param_1[0xc2] = lVar4;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"SpawnNodeComponent",1);
  uVar2 = *puVar3;
  uVar6 = AUGWeapon_Hook::GetPrivateStaticClass();
  uVar2 = FUN_141752410(param_1,uVar2,uVar6,uVar6,1,0,0);
  param_1[0xc3] = uVar2;
  local_res8 = 0;
  FUN_142399e30(uVar2,param_1[0x2d],0);
  *(undefined4 *)(param_1[0xc3] + 0x704) = 0;
  *(undefined1 *)(param_1[0xc3] + 0x70c) = 0;
  uVar2 = DAT_146859368;
  uVar6 = FUN_142dfdf30();
  uVar2 = FUN_141752410(param_1,uVar2,uVar6,uVar6,1,0,0);
  param_1[0xc4] = uVar2;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"GameplayTasksComponent",1);
  uVar2 = *puVar3;
  uVar6 = UEnvQueryTest_Cover::StaticClass();
  uVar2 = FUN_141752410(param_1,uVar2,uVar6,uVar6,1,0,0);
  param_1[0xc5] = uVar2;
  return param_1;
}



// FUNCTION 140772190 FUN_140772190 body=113 status=ok
// SIG undefined FUN_140772190(void)

undefined8 * FUN_140772190(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_14178c940();
  FUN_1424de090(param_1,uVar1);
  *param_1 = &PTR_FUN_144091548;
  lVar2 = FUN_142e7dfd0();
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  uVar3 = FUN_142e7dfd0();
  uVar1 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8b] = uVar1;
  param_1[0x2d] = uVar1;
  return param_1;
}



// FUNCTION 140772210 FUN_140772210 body=164 status=ok
// SIG undefined FUN_140772210(void)

undefined4 * FUN_140772210(undefined4 *param_1)

{
  *param_1 = 0x7f7fffff;
  param_1[1] = 0x7f7fffff;
  param_1[2] = 0xbf800000;
  *(undefined8 *)(param_1 + 3) = DAT_14622e8b0;
  param_1[5] = DAT_14622e8b8;
  *(undefined8 *)(param_1 + 6) = DAT_14622e8b0;
  param_1[8] = DAT_14622e8b8;
  *(undefined8 *)(param_1 + 10) = 0;
  FUN_140760710(param_1 + 0xc);
  param_1[0x11] = param_1[0x11] & 0xfffffc00;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0xbf800000;
  *(undefined8 *)(param_1 + 0x16) = DAT_14622e8b0;
  param_1[0x18] = DAT_14622e8b8;
  return param_1;
}



// FUNCTION 1407722c0 FUN_1407722c0 body=56 status=ok
// SIG undefined FUN_1407722c0(void)

undefined8 * FUN_1407722c0(undefined8 *param_1)

{
  FUN_142dc1920();
  *param_1 = &PTR_FUN_14408b418;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return param_1;
}



// FUNCTION 140772300 FUN_140772300 body=99 status=ok
// SIG undefined FUN_140772300(void)

undefined8 * FUN_140772300(undefined8 *param_1)

{
  undefined8 uVar1;
  
  UAITask::UAITask();
  *param_1 = &PTR_FUN_1440909d0;
  param_1[5] = &PTR_LAB_144090ca0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar1 = FUN_1407b40a0();
  FUN_142b78870(param_1,uVar1);
  uVar1 = FUN_1407b40a0();
  FUN_142b787f0(param_1,uVar1);
  return param_1;
}



// FUNCTION 140772370 FUN_140772370 body=119 status=ok
// SIG undefined FUN_140772370(void)

undefined8 * FUN_140772370(undefined8 *param_1)

{
  undefined8 uVar1;
  
  UAITask::UAITask();
  *param_1 = &PTR_FUN_144090ce8;
  param_1[5] = &PTR_LAB_144090fb8;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  uVar1 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b78870(param_1,uVar1);
  uVar1 = UAIResource_Movement::GetPrivateStaticClass();
  FUN_142b787f0(param_1,uVar1);
  return param_1;
}



// FUNCTION 1407723f0 FUN_1407723f0 body=762 status=ok
// SIG undefined FUN_1407723f0(void)

undefined8 * FUN_1407723f0(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulonglong uVar5;
  
  FUN_142326e40();
  *param_1 = &PTR_FUN_144091c30;
  param_1[5] = &PTR_LAB_144092088;
  param_1[0x2f] = &PTR_LAB_1440920b8;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x37] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x3c,0);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  FUN_142de2eb0(param_1 + 0x49);
  FUN_142de2eb0(param_1 + 0x5a);
  FUN_142de2eb0(param_1 + 0x6b);
  FUN_142de2eb0(param_1 + 0x7c);
  *(undefined8 *)((longlong)param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0x44fa0000;
  FUN_14077f980(param_1 + 0x48);
  FUN_142de2eb0(param_1 + 0x90);
  FUN_142de2eb0(param_1 + 0xa1);
  FUN_142de2eb0(param_1 + 0xb2);
  FUN_142de2eb0(param_1 + 0xc3);
  *(undefined8 *)((longlong)param_1 + 0x69c) = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0x44fa0000;
  FUN_14077f980(param_1 + 0x8f);
  FUN_142de2eb0(param_1 + 0xd7);
  FUN_142de2eb0(param_1 + 0xe8);
  FUN_142de2eb0(param_1 + 0xf9);
  *(undefined8 *)((longlong)param_1 + 0x84c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x855) = 1;
  *(undefined4 *)(param_1 + 0x10b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x85c) = 0;
  *(undefined1 *)(param_1 + 0x10c) = 0xff;
  FName::FName(param_1 + 0x10d,L"Invalid",1);
  *(undefined1 *)(param_1 + 0x10e) = 0xff;
  FName::FName(param_1 + 0x10f,L"Invalid",1);
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 6;
  pvVar4 = ThreadLocalStoragePointer;
  uVar5 = (ulonglong)_tls_index;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  *(undefined4 *)(param_1 + 0x115) = 0;
  *(undefined1 *)((longlong)param_1 + 0x244) = 1;
  *(undefined1 *)(param_1 + 0x8c) = 1;
  lVar1 = *(longlong *)((longlong)pvVar4 + uVar5 * 8);
  if (*(int *)(lVar1 + 0x38) < DAT_146859258) {
    _Init_thread_header(&DAT_146859258);
    if (DAT_146859258 == -1) {
      DAT_146859248 = 0xff;
      FName::FName(&DAT_146859250,L"Invalid",1);
      _Init_thread_footer(&DAT_146859258);
    }
  }
  uVar3 = DAT_146859250;
  *(undefined1 *)(param_1 + 0x10c) = DAT_146859248;
  param_1[0x10d] = uVar3;
  if (*(int *)(lVar1 + 0x38) < DAT_146859258) {
    _Init_thread_header(&DAT_146859258);
    if (DAT_146859258 == -1) {
      DAT_146859248 = 0xff;
      FName::FName(&DAT_146859250,L"Invalid",1);
      _Init_thread_footer(&DAT_146859258);
    }
  }
  uVar2 = DAT_146859248;
  param_1[0x10f] = DAT_146859250;
  *(undefined1 *)(param_1 + 0x10e) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x1b2) = 1;
  return param_1;
}



// FUNCTION 1407726f0 FUN_1407726f0 body=118 status=ok
// SIG undefined FUN_1407726f0(void)

undefined8 * FUN_1407726f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bf8dc0(param_1,uVar1);
  *param_1 = &PTR_FUN_144091000;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x14);
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x1a);
  *(undefined1 *)(param_1 + 0x13) = 0;
  FUN_142bf1db0(param_1 + 0xc);
  *(uint *)((longlong)param_1 + 0x8c) = *(uint *)((longlong)param_1 + 0x8c) | 0x20;
  *(undefined4 *)(param_1 + 0x19) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0x1f) = 0x45bb8000;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 140772770 FUN_140772770 body=123 status=ok
// SIG undefined FUN_140772770(void)

undefined8 * FUN_140772770(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *(undefined2 *)(param_1 + 0x3b) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__14408e040;
  *(undefined4 *)(param_1 + 0x1e) = 0x1010000;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 0;
  uVar1 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 1407727f0 FUN_1407727f0 body=90 status=ok
// SIG undefined FUN_1407727f0(void)

undefined8 * FUN_1407727f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR_FUN_14408e2d8;
  *(undefined4 *)(param_1 + 0x1e) = 0x1010200;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x40400000;
  uVar1 = FUN_142e107c0();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 140772850 FUN_140772850 body=94 status=ok
// SIG undefined FUN_140772850(void)

undefined8 * FUN_140772850(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__14408e570;
  param_1[0x3b] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0xff00;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_142bf1f60(param_1,0);
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  uVar1 = UEnvQueryItemType::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 1407728b0 FUN_1407728b0 body=77 status=ok
// SIG undefined FUN_1407728b0(void)

undefined8 * FUN_1407728b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR_FUN_14408e808;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_142bf1f60(param_1,0);
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  uVar1 = FUN_142e107c0();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 140772900 FUN_140772900 body=180 status=ok
// SIG undefined FUN_140772900(void)

undefined8 * FUN_140772900(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__14408eaa0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 1;
  *(undefined2 *)((longlong)param_1 + 0xf2) = 0x101;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  FUN_142bf1f60(param_1,1);
  uVar1 = FUN_142e107c0();
  param_1[0x38] = uVar1;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x3e2aaac1;
  *(undefined4 *)(param_1 + 0x3c) = 0x3eaaaa3b;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x3d) = 0x3f2aaae3;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x3f55551d;
  *(undefined4 *)(param_1 + 0x3e) = 0x3f800000;
  return param_1;
}



// FUNCTION 1407729c0 FUN_1407729c0 body=77 status=ok
// SIG undefined FUN_1407729c0(void)

undefined8 * FUN_1407729c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR_FUN_14408ed38;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_142bf1f60(param_1,0);
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  uVar1 = FUN_142e107c0();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 140772a10 FUN_140772a10 body=130 status=ok
// SIG undefined FUN_140772a10(void)

undefined8 * FUN_140772a10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *(undefined4 *)(param_1 + 0x3b) = 0x3ccccccd;
  *param_1 = &PTR_FUN_14408efd0;
  FUN_140760710(param_1 + 0x3c);
  FUN_140760710(param_1 + 0x3e);
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined2 *)((longlong)param_1 + 0xf2) = 0x101;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  uVar1 = FUN_142e107c0();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 140772aa0 FUN_140772aa0 body=108 status=ok
// SIG undefined FUN_140772aa0(void)

undefined8 * FUN_140772aa0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__14408f268;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined2 *)((longlong)param_1 + 0xf2) = 0x101;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  uVar1 = FUN_142e107c0();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 140772b10 FUN_140772b10 body=121 status=ok
// SIG undefined FUN_140772b10(void)

undefined8 * FUN_140772b10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR_FUN_14408f500;
  FAIDataProviderFloatValue::FAIDataProviderFloatValue(param_1 + 0x3b);
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined2 *)((longlong)param_1 + 0xf2) = 0x101;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0x457a0000;
  uVar1 = FUN_142e107c0();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 140772b90 FUN_140772b90 body=106 status=ok
// SIG undefined FUN_140772b90(void)

undefined8 * FUN_140772b90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *(undefined4 *)(param_1 + 0x3b) = 0x3ccccccd;
  *param_1 = &PTR__scalar_deleting_destructor__14408f798;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined2 *)((longlong)param_1 + 0xf2) = 0x101;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  uVar1 = FUN_142e107c0();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 140772c00 FUN_140772c00 body=108 status=ok
// SIG undefined FUN_140772c00(void)

undefined8 * FUN_140772c00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__14408fa30;
  FUN_142de2eb0(param_1 + 0x3b);
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined2 *)((longlong)param_1 + 0xf2) = 0x101;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  uVar1 = FUN_142e107c0();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 140772c70 FUN_140772c70 body=77 status=ok
// SIG undefined FUN_140772c70(void)

undefined8 * FUN_140772c70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR_FUN_14408fcc8;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_142bf1f60(param_1,0);
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  uVar1 = FUN_142e107c0();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 140772cc0 FUN_140772cc0 body=106 status=ok
// SIG undefined FUN_140772cc0(void)

undefined8 * FUN_140772cc0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *(undefined4 *)(param_1 + 0x3b) = 0x3ccccccd;
  *param_1 = &PTR__scalar_deleting_destructor__14408ff60;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  *(undefined2 *)((longlong)param_1 + 0xf2) = 0x101;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  uVar1 = FUN_142e107c0();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 140772d30 FUN_140772d30 body=73 status=ok
// SIG undefined FUN_140772d30(void)

undefined8 * FUN_140772d30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR_FUN_1440901f8;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_142bf1f60(param_1,0);
  uVar1 = FUN_142e107c0();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 140772d80 FUN_140772d80 body=116 status=ok
// SIG undefined FUN_140772d80(void)

undefined8 * FUN_140772d80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR_FUN_144090490;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0x40400000;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_142bf1f60(param_1,0);
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  uVar1 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  return param_1;
}



// FUNCTION 140772e00 FUN_140772e00 body=143 status=ok
// SIG undefined FUN_140772e00(void)

undefined8 * FUN_140772e00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142bf9540();
  *param_1 = &PTR_FUN_144090728;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 2;
  *(undefined1 *)((longlong)param_1 + 0x44) = 2;
  *(undefined1 *)((longlong)param_1 + 0x5a) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0xf2) = 0x101;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  uVar1 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  FUN_142bf1f60(param_1,1);
  param_1[0x53] = 0;
  return param_1;
}



// FUNCTION 140772e90 FUN_140772e90 body=80 status=ok
// SIG undefined FUN_140772e90(void)

undefined8 * FUN_140772e90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142bd6400(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__1440912b0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  FUN_142bf1f60(param_1,0);
  uVar1 = UEnvQueryItemType_VectorBase::GetPrivateStaticClass();
  param_1[0x38] = uVar1;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  return param_1;
}



// FUNCTION 140772ee0 FUN_140772ee0 body=88 status=ok
// SIG undefined FUN_140772ee0(void)

undefined8 * FUN_140772ee0(undefined8 *param_1)

{
  FUN_1407bd330();
  *param_1 = &PTR_FUN_14408cd20;
  param_1[5] = &PTR_LAB_14408d630;
  param_1[0x5a] = &PTR_LAB_14408d660;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  return param_1;
}



// FUNCTION 140772f40 FUN_140772f40 body=214 status=ok
// SIG undefined FUN_140772f40(void)

undefined8 * FUN_140772f40(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  
  FUN_142dc2300();
  plVar1 = param_1 + 0x103;
  *param_1 = &PTR_FUN_14408b458;
  param_1[5] = &PTR_LAB_14408bd70;
  param_1[0x5a] = &PTR_LAB_14408bda0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  *(undefined4 *)(param_1 + 0xff) = 0;
  param_1[0x100] = 0;
  *(undefined1 *)(param_1 + 0x101) = 0;
  *(undefined2 *)((longlong)param_1 + 0x80a) = 0;
  *(undefined4 *)(param_1 + 0x102) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x814) = 0;
  *plVar1 = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  *(undefined1 *)(param_1 + 0xfb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6f1) = 0;
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar2 == '\0') {
    param_1[0x105] = param_1;
    param_1[0x104] = &DAT_146859298;
    *plVar1 = (longlong)DAT_146859298;
    DAT_146859298 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 140773020 FUN_140773020 body=88 status=ok
// SIG undefined FUN_140773020(void)

undefined8 * FUN_140773020(undefined8 *param_1)

{
  FUN_14074cd00();
  *(undefined1 *)(param_1 + 0xf1) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__14408d6b8;
  param_1[5] = &PTR_LAB_14408dfa0;
  param_1[0x5a] = &PTR_LAB_14408dfd0;
  param_1[0xde] = &PTR_LAB_14408e028;
  *(undefined2 *)(param_1 + 0xed) = 0;
  return param_1;
}



// FUNCTION 140773080 FUN_140773080 body=137 status=ok
// SIG undefined FUN_140773080(void)

void FUN_140773080(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      plVar1[0xb] = (longlong)&PTR_ValueToString_14407aff8;
      plVar1[5] = (longlong)&PTR_ValueToString_14407aff8;
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x3b;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar1);
  return;
}



// FUNCTION 140773110 FUN_140773110 body=155 status=ok
// SIG undefined FUN_140773110(void)

void FUN_140773110(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_14408b418;
      if (puVar1[0x1c] != 0) {
        FMemory::Free();
      }
      *puVar1 = &PTR_FUN_14408b3d8;
      TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar1 + 6);
      puVar1 = puVar1 + 0x1e;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 1407731b0 FUN_1407731b0 body=165 status=ok
// SIG undefined FUN_1407731b0(void)

void FUN_1407731b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    if (*(longlong *)(param_1 + 0x4a8) == 0) {
      **(longlong **)(param_1 + 0x4b0) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x4b0) = *(longlong *)(param_1 + 0x4a8);
      *(undefined8 *)(*(longlong *)(param_1 + 0x4a8) + 8) = *(undefined8 *)(param_1 + 0x4b0);
      *(undefined8 *)(param_1 + 0x4a8) = 0;
    }
    *(undefined8 *)(param_1 + 0x4b0) = 0;
    *(undefined8 *)(param_1 + 0x4b8) = 0;
  }
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_143fce298;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 140773260 FUN_140773260 body=354 status=ok
// SIG undefined FUN_140773260(void)

void FUN_140773260(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x578) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x558) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x548) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x538) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x520);
  if (*(longlong *)(param_1 + 0x510) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x500) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_143fce298;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 1407733d0 FUN_1407733d0 body=268 status=ok
// SIG undefined FUN_1407733d0(void)

void FUN_1407733d0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
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
  iVar2 = *(int *)(param_1 + 0x720);
  lVar1 = *(longlong *)(param_1 + 0x718);
  if (iVar2 != 0) {
    plVar3 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x718);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x6f0) = &PTR_FUN_1440732c8;
  FUN_14061f760(param_1);
  return;
}



// FUNCTION 1407734e0 FUN_1407734e0 body=606 status=ok
// SIG undefined FUN_1407734e0(void)

void FUN_1407734e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x970) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x960);
  lVar1 = *(longlong *)(param_1 + 0x958);
  if (iVar2 != 0) {
    plVar3 = (longlong *)(lVar1 + 0x18);
    do {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x958);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x940) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x920) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x910);
  plVar3 = *(longlong **)(param_1 + 0x908);
  if (iVar2 != 0) {
    do {
      if (plVar3[6] != 0) {
        FMemory::Free();
      }
      if (plVar3[4] != 0) {
        FMemory::Free();
      }
      if (plVar3[2] != 0) {
        FMemory::Free();
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0x2b;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = *(longlong **)(param_1 + 0x908);
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x880) != 0) {
    if (*(longlong *)(param_1 + 0x870) == 0) {
      **(longlong **)(param_1 + 0x878) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x878) = *(longlong *)(param_1 + 0x870);
      *(undefined8 *)(*(longlong *)(param_1 + 0x870) + 8) = *(undefined8 *)(param_1 + 0x878);
      *(undefined8 *)(param_1 + 0x870) = 0;
    }
    *(undefined8 *)(param_1 + 0x878) = 0;
    *(undefined8 *)(param_1 + 0x880) = 0;
  }
  if (*(longlong *)(param_1 + 0x858) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x848) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x838) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x828) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x818) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x808) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x798) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x788) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x778) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  return;
}



// FUNCTION 140773740 FUN_140773740 body=146 status=ok
// SIG undefined FUN_140773740(void)

void FUN_140773740(undefined8 *param_1)

{
  int iVar1;
  
  *(int *)*param_1 = (int)(*(float *)param_1[1] / *(float *)param_1[2] + 1.0);
  *(int *)param_1[3] = (int)(*(float *)(param_1[1] + 4) / *(float *)(param_1[2] + 4) + 1.0);
  if (*(char *)param_1[5] == '\0') {
    iVar1 = (int)(*(float *)(param_1[1] + 8) / *(float *)(param_1[2] + 8) + 1.0);
  }
  else {
    iVar1 = 1;
  }
  *(int *)param_1[4] = iVar1;
  *(int *)param_1[6] = *(int *)param_1[4] * *(int *)param_1[3] * *(int *)*param_1;
  return;
}



// FUNCTION 1407738a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FVulkanRHIGraphicsPipelineState::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1407731b0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4c8);
  }
  return param_1;
}



// FUNCTION 1407738e0 FUN_1407738e0 body=115 status=ok
// SIG undefined FUN_1407738e0(void)

longlong FUN_1407738e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x600) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x5f8) = &PTR_FUN_14407f768;
  *(undefined ***)(param_1 + 0x5f0) = &PTR_FUN_144055190;
  *(undefined ***)(param_1 + 0x5e8) = &PTR_FUN_14407f310;
  FUN_140773260(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x630);
  }
  return param_1;
}



// FUNCTION 140773960 FUN_140773960 body=66 status=ok
// SIG undefined FUN_140773960(void)

undefined8 * FUN_140773960(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14408b3d8;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 6);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 1407739b0 FUN_1407739b0 body=94 status=ok
// SIG undefined FUN_1407739b0(void)

undefined8 * FUN_1407739b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14408b418;
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_14408b3d8;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 6);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 140773a10 FUN_140773a10 body=119 status=ok
// SIG undefined FUN_140773a10(void)

longlong FUN_140773a10(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0xa0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x70);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 140773a90 FUN_140773a90 body=119 status=ok
// SIG undefined FUN_140773a90(void)

longlong FUN_140773a90(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x98);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x70);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 140773b10 FUN_140773b10 body=104 status=ok
// SIG undefined FUN_140773b10(void)

longlong FUN_140773b10(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8b0);
  }
  return param_1;
}



// FUNCTION 140773b80 FUN_140773b80 body=105 status=ok
// SIG undefined FUN_140773b80(void)

longlong FUN_140773b80(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0xd0) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0xa0) = &PTR_ValueToString_14407aff8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 140773bf0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessDiaphragmDOFDownsampleCS::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_140729c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f8);
  }
  return param_1;
}



// FUNCTION 140773c30 FUN_140773c30 body=52 status=ok
// SIG undefined FUN_140773c30(void)

undefined8 FUN_140773c30(undefined8 param_1,ulonglong param_2)

{
  FUN_140729c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 140773c70 FUN_140773c70 body=66 status=ok
// SIG undefined FUN_140773c70(void)

longlong FUN_140773c70(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x1d8) = &PTR_ValueToString_14407aff8;
  FUN_140729c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 140773cc0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessTemporalAACS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140729c00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,600);
  }
  return param_1;
}



// FUNCTION 140773d00 FUN_140773d00 body=90 status=ok
// SIG undefined FUN_140773d00(void)

longlong FUN_140773d00(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  FUN_140729c00(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 140773d60 FUN_140773d60 body=95 status=ok
// SIG undefined FUN_140773d60(void)

longlong FUN_140773d60(longlong param_1,ulonglong param_2)

{
  FUN_140773080(param_1 + 0x2a0);
  *(undefined ***)(param_1 + 0x268) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x238) = &PTR_ValueToString_14407aff8;
  *(undefined ***)(param_1 + 0x208) = &PTR_ValueToString_14407aff8;
  FUN_140729c00(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2b8);
  }
  return param_1;
}



// FUNCTION 140773dc0 FUN_140773dc0 body=90 status=ok
// SIG undefined FUN_140773dc0(void)

longlong FUN_140773dc0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x9b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9a0) != 0) {
    FMemory::Free();
  }
  FUN_1407734e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x9c0);
  }
  return param_1;
}



// FUNCTION 140773e20 FUN_140773e20 body=172 status=ok
// SIG undefined FUN_140773e20(void)

longlong FUN_140773e20(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x828) != 0) {
    if (*(longlong *)(param_1 + 0x818) == 0) {
      **(longlong **)(param_1 + 0x820) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x820) = *(longlong *)(param_1 + 0x818);
      *(undefined8 *)(*(longlong *)(param_1 + 0x818) + 8) = *(undefined8 *)(param_1 + 0x820);
      *(undefined8 *)(param_1 + 0x818) = 0;
    }
    *(undefined8 *)(param_1 + 0x820) = 0;
    *(undefined8 *)(param_1 + 0x828) = 0;
  }
  FUN_140773110(param_1 + 0x7e8);
  *(undefined ***)(param_1 + 0x700) = &PTR_FUN_14408b3d8;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x730);
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x830);
  }
  return param_1;
}



// FUNCTION 140773ed0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FNiagaraSystemInstance::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1407733d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x790);
  }
  return param_1;
}



// FUNCTION 140773f10 FUN_140773f10 body=936 status=ok
// SIG undefined FUN_140773f10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140773f10(longlong *param_1,float param_2,float param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint7 uVar13;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_478 [32];
  longlong *local_458;
  undefined8 local_450;
  undefined8 local_448;
  float local_440;
  longlong local_438;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 uStack_420;
  undefined4 local_41c;
  undefined8 local_418;
  undefined4 local_410;
  undefined8 local_40c;
  undefined4 local_404;
  float local_3f8;
  undefined1 local_3e8 [864];
  float local_88;
  ulonglong local_58;
  
  uVar7 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  if (param_1 != (longlong *)0x0) {
    local_58 = uVar7;
    lVar8 = (**(code **)(*param_1 + 0x668))();
    uVar7 = 0;
    if (lVar8 != 0) {
      lVar9 = ARemnantWeaponMod::GetPrivateStaticClass();
      uVar13 = (uint7)((ulonglong)(lVar9 + 0x88) >> 8);
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        uVar7 = (ulonglong)uVar13 << 8;
      }
      else {
        uVar7 = CONCAT71(uVar13,1);
      }
      if ((char)uVar7 != '\0') {
        lVar9 = *(longlong *)(lVar8 + 0x5e8);
        plVar2 = *(longlong **)(lVar8 + 0x488);
        if (((lVar9 != 0) && (lVar3 = *(longlong *)(lVar8 + 0x5f8), lVar3 != 0)) &&
           (*(longlong *)(lVar8 + 0x618) != 0)) {
          local_458 = (longlong *)0x0;
          local_450 = 0;
          local_438 = lVar9;
          FUN_14075bba0(lVar8,&local_458,0,0);
          uVar7 = 0;
          plVar1 = local_458 + (int)local_450;
          plVar14 = local_458;
          if (local_458 != plVar1) {
            do {
              plVar4 = (longlong *)*plVar14;
              if (((plVar4 != (longlong *)0x0) && (plVar4 != plVar2)) &&
                 (cVar6 = FUN_142dee8a0(lVar3,plVar4), cVar6 != '\0')) {
                lVar8 = plVar2[0x2d];
                if (lVar8 == 0) {
                  local_418 = _DAT_1468b5d90;
                  puVar10 = &local_418;
                  local_410 = DAT_1468b5d98;
                }
                else {
                  puVar10 = (undefined8 *)&local_430;
                  local_430 = *(undefined4 *)(lVar8 + 0x220);
                  local_428 = *(undefined4 *)(lVar8 + 0x228);
                  uStack_42c = *(undefined4 *)(lVar8 + 0x224);
                }
                uVar12 = *puVar10;
                local_440 = *(float *)(puVar10 + 1);
                lVar8 = plVar4[0x2d];
                if (lVar8 == 0) {
                  local_40c = _DAT_1468b5d90;
                  puVar10 = &local_40c;
                  local_404 = DAT_1468b5d98;
                }
                else {
                  puVar10 = (undefined8 *)&local_424;
                  local_424 = *(undefined4 *)(lVar8 + 0x220);
                  local_41c = *(undefined4 *)(lVar8 + 0x228);
                  uStack_420 = *(undefined4 *)(lVar8 + 0x224);
                }
                local_3f8 = *(float *)(puVar10 + 1);
                local_448._0_4_ = (float)uVar12;
                fVar17 = (float)*puVar10 - (float)local_448;
                local_448._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
                fVar16 = (float)((ulonglong)*puVar10 >> 0x20) - local_448._4_4_;
                local_448 = uVar12;
                if (((fVar17 * fVar17 + fVar16 * fVar16 +
                      (local_3f8 - local_440) * (local_3f8 - local_440) <= param_2 * param_2) &&
                    (cVar6 = FUN_142dee8a0(lVar3,plVar4), cVar6 != '\0')) &&
                   (lVar8 = (**(code **)(*plVar4 + 0x668))(plVar4), lVar8 != 0)) {
                  lVar11 = ARemnantWeaponMod::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  if ((bVar5) && (lVar8 = *(longlong *)(lVar8 + 0x5e8), lVar8 != 0)) {
                    uVar7 = (ulonglong)(*(ulonglong *)(lVar9 + 0x7538) != 0) - 1 & lVar9 + 0x338U |
                            *(ulonglong *)(lVar9 + 0x7538);
                    uVar15 = (longlong)*(int *)(lVar9 + 0x7540) * 0x390 + uVar7;
                    lVar9 = local_438;
                    for (; local_438 = lVar9, uVar7 != uVar15; uVar7 = uVar7 + 0x390) {
                      if ((*(byte *)(uVar7 + 0x38c) & 1) != 0) {
                        FUN_142dc1ad0(local_3e8);
                        uVar12 = FWeakObjectPtr::Get(local_3e8);
                        cVar6 = FUN_142dd0170(lVar8,uVar12,local_3e8);
                        if ((cVar6 == '\0') || (param_3 <= local_88 - *(float *)(uVar7 + 0x360))) {
                          uVar7 = 1;
                          goto LAB_140774262;
                        }
                      }
                      lVar9 = local_438;
                    }
                  }
                }
              }
              plVar14 = plVar14 + 1;
            } while (plVar14 != plVar1);
            uVar7 = 0;
          }
LAB_140774262:
          if (local_458 == (longlong *)0x0) {
            return uVar7;
          }
          FMemory::Free(local_458);
          return uVar7;
        }
      }
    }
  }
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 1407742c0 ToggleCharacterSummary body=33 status=ok
// SIG undefined ToggleCharacterSummary(void)

void AIndianaPlayerController::ToggleCharacterSummary(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142ddddc0();
  if (lVar1 != 0) {
    FUN_142dceb10(lVar1,0);
    return;
  }
  return;
}



// FUNCTION 1407742f0 FUN_1407742f0 body=596 status=ok
// SIG undefined FUN_1407742f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407742f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  longlong *local_e0;
  int local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined1 local_98 [128];
  
  if ((param_1 != (longlong *)0x0) && (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) {
    UWorld::GetPlayerControllerIterator(lVar2,&local_e0);
    for (; (-1 < local_d8 && (local_d8 < (int)local_e0[1])); local_d8 = local_d8 + 1) {
      lVar2 = FWeakObjectPtr::Get(*local_e0 + (longlong)local_d8 * 8);
      if ((lVar2 != 0) &&
         ((plVar8 = *(longlong **)(lVar2 + 0x488), plVar8 != (longlong *)0x0 &&
          (plVar3 = (longlong *)(**(code **)(*param_1 + 0x668))(param_1), plVar3 != (longlong *)0x0)
          ))) {
        plVar4 = (longlong *)(**(code **)(*plVar8 + 0x678))(plVar8);
        if (plVar4 != (longlong *)0x0) {
          plVar8 = plVar4;
        }
        uVar5 = UHomeWidget::GetPrivateStaticClass();
        lVar2 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar5);
        if (lVar2 != 0) {
          plVar3 = (longlong *)UGameplayTask_SpawnActor::GetPrivateStaticClass();
          lVar7 = plVar3[0x1f];
          if (lVar7 == 0) {
            (**(code **)(*plVar3 + 0x368))(plVar3);
            lVar7 = plVar3[0x1f];
          }
          lVar1 = param_1[0x2d];
          if (lVar1 == 0) {
            local_d0 = _DAT_1468b5d90;
            puVar6 = &local_d0;
            local_c8 = DAT_1468b5d98;
          }
          else {
            puVar6 = (undefined8 *)&local_f8;
            local_f8 = *(undefined4 *)(lVar1 + 0x220);
            local_f0 = *(undefined4 *)(lVar1 + 0x228);
            uStack_f4 = *(undefined4 *)(lVar1 + 0x224);
          }
          local_b8 = *puVar6;
          local_b0 = *(undefined4 *)(puVar6 + 1);
          lVar1 = plVar8[0x2d];
          if (lVar1 == 0) {
            local_c4 = _DAT_1468b5d90;
            puVar6 = &local_c4;
            local_bc = DAT_1468b5d98;
          }
          else {
            puVar6 = (undefined8 *)&local_ec;
            local_ec = *(undefined4 *)(lVar1 + 0x220);
            local_e4 = *(undefined4 *)(lVar1 + 0x228);
            uStack_e8 = *(undefined4 *)(lVar1 + 0x224);
          }
          local_ac = *puVar6;
          local_a4 = *(undefined4 *)(puVar6 + 1);
          FUN_142c1a410(local_98,lVar7,0x3f800000,&local_ac,&local_b8,0,0);
          FUN_142c24770(lVar2,plVar8,local_98);
        }
      }
    }
  }
  return;
}



// FUNCTION 140774550 FUN_140774550 body=422 status=ok
// SIG undefined FUN_140774550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140774550(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_88 [112];
  
  if (((param_1 != (longlong *)0x0) && (param_2 != (longlong *)0x0)) &&
     (plVar2 = (longlong *)(**(code **)(*param_1 + 0x668))(), plVar2 != (longlong *)0x0)) {
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x678))(param_2);
    if (plVar3 != (longlong *)0x0) {
      param_2 = plVar3;
    }
    uVar4 = UHomeWidget::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar4);
    if (lVar5 != 0) {
      plVar2 = (longlong *)UGameplayTask_SpawnActor::GetPrivateStaticClass();
      lVar6 = plVar2[0x1f];
      if (lVar6 == 0) {
        (**(code **)(*plVar2 + 0x368))(plVar2);
        lVar6 = plVar2[0x1f];
      }
      lVar1 = param_1[0x2d];
      if (lVar1 == 0) {
        local_b8 = _DAT_1468b5d90;
        local_b0 = DAT_1468b5d98;
      }
      else {
        local_b8 = *(undefined8 *)(lVar1 + 0x220);
        local_b0 = *(undefined4 *)(lVar1 + 0x228);
      }
      local_a4 = local_b0;
      lVar1 = param_2[0x2d];
      local_ac = local_b8;
      if (lVar1 == 0) {
        local_b8 = _DAT_1468b5d90;
        local_b0 = DAT_1468b5d98;
      }
      else {
        local_b8 = *(undefined8 *)(lVar1 + 0x220);
        local_b0 = *(undefined4 *)(lVar1 + 0x228);
      }
      local_98 = local_b0;
      local_a0 = local_b8;
      FUN_142c1a410(local_88,lVar6,0x3f800000,&local_a0,&local_ac,0,0);
      FUN_142c24770(lVar5,param_2,local_88);
    }
  }
  return;
}



// FUNCTION 140774700 FUN_140774700 body=450 status=ok
// SIG undefined FUN_140774700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140774700(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_88 [88];
  undefined8 local_30;
  undefined4 local_28;
  
  if (((param_1 != (longlong *)0x0) && (param_2 != (longlong *)0x0)) &&
     (plVar2 = (longlong *)(**(code **)(*param_1 + 0x668))(), plVar2 != (longlong *)0x0)) {
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x678))(param_2);
    if (plVar3 != (longlong *)0x0) {
      param_2 = plVar3;
    }
    uVar4 = UHomeWidget::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar4);
    if (((lVar5 != 0) && (lVar6 = FUN_142c1f5b0(param_1), lVar6 != 0)) &&
       (lVar6 = FUN_142c20830(lVar6,param_3), lVar6 != 0)) {
      lVar1 = param_1[0x2d];
      if (lVar1 == 0) {
        local_a8 = _DAT_1468b5d90;
        local_a0 = DAT_1468b5d98;
      }
      else {
        local_a8 = *(undefined8 *)(lVar1 + 0x220);
        local_a0 = *(undefined4 *)(lVar1 + 0x228);
      }
      local_94 = local_a0;
      local_9c = local_a8;
      FUN_142c1a410(local_88,lVar6,0x3f800000,param_4,&local_9c,0,0);
      lVar6 = param_2[0x2d];
      if (lVar6 == 0) {
        local_94 = DAT_1468b5d98;
        puVar7 = &local_9c;
        local_9c = _DAT_1468b5d90;
      }
      else {
        puVar7 = &local_a8;
        local_a0 = *(undefined4 *)(lVar6 + 0x228);
        local_a8 = *(undefined8 *)(lVar6 + 0x220);
      }
      local_30 = *puVar7;
      local_28 = *(undefined4 *)(puVar7 + 1);
      FUN_142c24770(lVar5,param_2,local_88);
    }
  }
  return;
}



// FUNCTION 1407748d0 FUN_1407748d0 body=402 status=ok
// SIG undefined FUN_1407748d0(void)

void FUN_1407748d0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_78 [16];
  undefined1 local_68 [96];
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = FUN_142ddddc0(), lVar1 != 0)) {
    lVar7 = *(longlong *)(lVar1 + 0x7538);
    if (*(longlong *)(lVar1 + 0x7538) == 0) {
      lVar7 = lVar1 + 0x338;
    }
    lVar1 = (longlong)*(int *)(lVar1 + 0x7540) * 0x390 + lVar7;
    for (; lVar7 != lVar1; lVar7 = lVar7 + 0x390) {
      uVar2 = FUN_142dcd4d0(lVar7,local_78,0,0);
      uVar3 = FUN_142dd0030(lVar7);
      FUN_142c1a550(local_68,param_1,uVar3,uVar2,param_2,*(undefined4 *)(lVar7 + 0x360),0x3f800000);
      uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar4 = FUN_142c1f5b0(uVar2);
      if (lVar4 != 0) {
        plVar5 = (longlong *)UGameplayTask_SpawnActor::GetPrivateStaticClass();
        lVar6 = plVar5[0x1f];
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 0x368))(plVar5);
          lVar6 = plVar5[0x1f];
        }
        if (((int)(uint)*(byte *)(lVar6 + 0x48) < *(int *)(lVar4 + 0xd8)) &&
           (lVar4 = *(longlong *)
                     (*(longlong *)(lVar4 + 0xd0) + (ulonglong)*(byte *)(lVar6 + 0x48) * 8),
           lVar4 != 0)) {
          FUN_142c23d50(lVar4,local_68);
        }
      }
    }
  }
  return;
}



// FUNCTION 140774a70 FUN_140774a70 body=43 status=ok
// SIG undefined FUN_140774a70(void)

void FUN_140774a70(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142ddddc0();
  if (lVar1 != 0) {
    FUN_142ddbcf0(lVar1,0,param_2);
    return;
  }
  return;
}



// FUNCTION 140774aa0 FUN_140774aa0 body=187 status=ok
// SIG undefined FUN_140774aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140774aa0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_3e8 [32];
  undefined1 local_3c8 [912];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  lVar3 = FUN_142ddddc0();
  if ((((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x7540))) &&
      (lVar4 = FUN_140765020(param_1), lVar4 != 0)) &&
     (lVar4 = *(longlong *)(lVar4 + 0x568), lVar4 != 0)) {
    iVar1 = *(int *)(lVar3 + 0x7540);
    FUN_142dc1ad0(local_3c8);
    cVar2 = FUN_142dd0110(lVar3,(longlong)param_3 % (longlong)iVar1 & 0xffffffff,local_3c8);
    if (cVar2 != '\0') {
      FUN_142cd0d10(param_2,lVar4,local_3c8);
    }
  }
  return;
}



// FUNCTION 140774b60 FUN_140774b60 body=572 status=ok
// SIG undefined FUN_140774b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140774b60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [24];
  undefined8 local_60;
  uint local_58;
  undefined4 local_54;
  longlong *local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_142c1c740();
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x488);
  if (lVar4 == 0) {
    UGameplayTask::EndTask(param_1);
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x168);
  if (lVar4 == 0) {
    local_98 = DAT_1468b5d98;
    puVar6 = &local_a0;
    local_a0 = _DAT_1468b5d90;
  }
  else {
    local_38 = *(undefined4 *)(lVar4 + 0x220);
    uStack_34 = *(undefined4 *)(lVar4 + 0x224);
    uStack_30 = *(undefined4 *)(lVar4 + 0x228);
    uStack_2c = *(undefined4 *)(lVar4 + 0x22c);
    puVar6 = (undefined8 *)&local_b8;
    local_b8 = local_38;
    local_b0 = uStack_30;
    uStack_b4 = uStack_34;
  }
  local_88 = *puVar6;
  local_80 = *(undefined4 *)(puVar6 + 1);
  cVar5 = FUN_140761670(*(undefined8 *)(param_1 + 0x80),&local_88);
  if (cVar5 == '\0') {
    FAIMoveRequest::FAIMoveRequest(local_78);
    lVar4 = *(longlong *)(param_1 + 0x80);
    local_ac = *(undefined4 *)(lVar4 + 0x220);
    local_a8 = *(undefined4 *)(lVar4 + 0x224);
    local_a4 = *(undefined4 *)(lVar4 + 0x228);
    uStack_1c = *(undefined4 *)(lVar4 + 0x22c);
    local_28 = local_ac;
    uStack_24 = local_a8;
    uStack_20 = local_a4;
    FAIMoveRequest::SetGoalLocation(local_78,&local_ac);
    lVar4 = *(longlong *)(param_1 + 0x68);
    local_54 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0xd4);
    local_58 = local_58 & 0xfffffff7 | 0xa4;
    local_60 = *(undefined8 *)(lVar4 + 0x578);
    uVar7 = GetTransientPackage();
    FUN_1417846f0(uVar7,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar8 = UAITask_MoveTo::GetPrivateStaticClass();
    lVar9 = FUN_1417985e0(uVar8,uVar7,0,0,0,0,0,0,0);
    *(undefined8 *)(lVar9 + 0x30) = 0;
    UAITask::InitAITask(lVar9,lVar4,lVar4 + 0x510);
    *(longlong *)(param_1 + 0x90) = lVar9;
    UAITask_MoveTo::SetUp(lVar9,*(undefined8 *)(param_1 + 0x68),local_78);
    FUN_142b7b2b0(*(undefined8 *)(param_1 + 0x90));
    *(undefined1 *)(param_1 + 0xa8) = 1;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    return;
  }
  FUN_140775510(param_1);
  return;
}



// FUNCTION 140774da0 FUN_140774da0 body=639 status=ok
// SIG undefined FUN_140774da0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140774da0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [24];
  undefined8 local_70;
  uint local_68;
  undefined4 local_64;
  longlong *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_142c1c740();
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x488);
  if (lVar10 == 0) {
    UGameplayTask::EndTask(param_1);
    return;
  }
  lVar10 = *(longlong *)(lVar10 + 0x168);
  if (lVar10 == 0) {
    local_a8 = DAT_1468b5d98;
    puVar7 = &local_b0;
    local_b0 = _DAT_1468b5d90;
  }
  else {
    local_48 = *(undefined4 *)(lVar10 + 0x220);
    uStack_44 = *(undefined4 *)(lVar10 + 0x224);
    uStack_40 = *(undefined4 *)(lVar10 + 0x228);
    uStack_3c = *(undefined4 *)(lVar10 + 0x22c);
    puVar7 = (undefined8 *)&local_c8;
    local_c8 = local_48;
    local_c0 = uStack_40;
    uStack_c4 = uStack_44;
  }
  local_98 = *puVar7;
  local_90 = *(undefined4 *)(puVar7 + 1);
  cVar5 = FUN_140761740(*(undefined8 *)(param_1 + 0x80),&local_98);
  if (cVar5 == '\0') {
    *(undefined1 *)(param_1 + 0xa8) = 1;
    FAIMoveRequest::FAIMoveRequest(local_88);
    lVar10 = *(longlong *)(param_1 + 0x80);
    local_bc = *(undefined4 *)(lVar10 + 0x220);
    local_b8 = *(undefined4 *)(lVar10 + 0x224);
    local_b4 = *(undefined4 *)(lVar10 + 0x228);
    uStack_2c = *(undefined4 *)(lVar10 + 0x22c);
    local_38 = local_bc;
    uStack_34 = local_b8;
    uStack_30 = local_b4;
    FAIMoveRequest::SetGoalLocation(local_88,&local_bc);
    local_64 = *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x70c);
    local_68 = local_68 & 0xfffffff7 | 0xa4;
    local_70 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x578);
    uVar6 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x28))(param_1 + 0x28);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    uVar8 = GetTransientPackage();
    FUN_1417846f0(uVar8,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar9 = UAITask_MoveTo::GetPrivateStaticClass();
    lVar10 = FUN_1417985e0(uVar9,uVar8,0,0,0,0,0,0,0);
    *(undefined8 *)(lVar10 + 0x30) = 0;
    UAITask::InitAITask(lVar10,uVar4,param_1 + 0x28,uVar6);
    *(longlong *)(param_1 + 0xa0) = lVar10;
    UAITask_MoveTo::SetUp(lVar10,*(undefined8 *)(param_1 + 0x68),local_88);
    FUN_142b7b2b0(*(undefined8 *)(param_1 + 0xa0));
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    return;
  }
  FUN_140775840(param_1);
  return;
}



// FUNCTION 140775020 FUN_140775020 body=148 status=ok
// SIG undefined FUN_140775020(void)

void FUN_140775020(longlong *param_1,longlong param_2,undefined1 param_3,float param_4)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_142dddd00();
  if ((lVar1 != 0) && (uVar4 = 0, param_2 != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar2 != 0) {
      fVar3 = -1.0;
      if (0.0 < param_4) {
        fVar3 = param_4 + *(float *)(lVar2 + 0x790);
      }
      FUN_142dc5c10(lVar1,param_2,param_3,fVar3,uVar4);
    }
  }
  return;
}



// FUNCTION 1407750c0 FUN_1407750c0 body=390 status=ok
// SIG undefined FUN_1407750c0(void)

undefined8 FUN_1407750c0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float local_res8 [2];
  undefined8 local_res10;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if ((char)param_1[1] != '\0') {
    lVar5 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
            ::GetBoundProgramCounterForTimerManager(param_1 + 2);
    if (lVar5 == 0) {
      *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
      return 0;
    }
  }
  lVar5 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
          ::GetBoundProgramCounterForTimerManager(param_1 + 2);
  if (lVar5 != 0) {
    (**(code **)(*param_1 + 0x38))(param_1);
    *(undefined1 *)((longlong)param_1 + 0xd1) = 0;
    local_res8[0] = 3.4028235e+38;
    if ((param_1[0x1b] != 0) && (*(longlong *)(param_1[0x1b] + 0x118) != 0)) {
      local_res10 = FUN_1407b7340();
      lVar6 = AGameStateBase::OnRep_GameModeClass
                        (*(undefined8 *)(param_1[0x1b] + 0x118),local_res10);
      if (lVar6 != 0) {
        lVar7 = FUN_1407b7340();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          FUN_14077d540(lVar6,local_18,lVar5,local_res8);
          if (local_10 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_10 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
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
          if (local_res8[0] != 3.4028235e+38) {
            *(undefined4 *)(param_1 + 0x19) = 0;
            *(undefined1 *)(param_1 + 0x1a) = 1;
            *(float *)((longlong)param_1 + 0xcc) = local_res8[0] + 0.5;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140775250 FUN_140775250 body=27 status=ok
// SIG undefined FUN_140775250(void)

void FUN_140775250(undefined8 param_1)

{
  FUN_142223710();
  FUN_140778bd0(param_1);
  return;
}



// FUNCTION 140775270 FUN_140775270 body=456 status=ok
// SIG undefined FUN_140775270(void)

void FUN_140775270(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  FUN_142330a70();
  lVar8 = *(longlong *)(param_1 + 0x118);
  if (lVar8 != 0) {
    lVar4 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1407752c6;
  }
  lVar8 = 0;
LAB_1407752c6:
  *(longlong *)(param_1 + 0x1a8) = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(longlong *)(lVar8 + 0x910);
    *(longlong *)(param_1 + 0x210) = lVar8;
    if (lVar8 != 0) {
      plVar1 = (longlong *)(lVar8 + 0x268);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        *(undefined4 *)(plVar5 + 2) = 0x40776280;
        *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
        *(undefined4 *)(plVar5 + 3) = 0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_c;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar4;
        *plVar5 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
        iVar2 = *(int *)(lVar8 + 0x270);
        *(int *)(lVar8 + 0x270) = iVar2 + 1;
        if (*(int *)(lVar8 + 0x274) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar6 = plVar5;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x1a8);
    uVar7 = FUN_1407a6820();
    uVar7 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar7);
    *(undefined8 *)(param_1 + 0x218) = uVar7;
  }
  FUN_140785850(param_1);
  lVar8 = FUN_142da89b0(param_1);
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0x68) != '\0')) {
    *(undefined4 *)(param_1 + 0x8a4) = *(undefined4 *)(lVar8 + 0x118);
    uVar9 = FUN_142c98860(lVar8 + 0x70,*(undefined8 *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x884) = uVar9;
    uVar9 = FUN_142c98860(lVar8 + 0xa8,*(undefined8 *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x88c) = uVar9;
  }
  return;
}



// FUNCTION 140775440 FUN_140775440 body=197 status=ok
// SIG undefined FUN_140775440(void)

void FUN_140775440(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1407c2550();
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 == 0) {
LAB_140775494:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_1407b4160();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140775494;
  }
  *(longlong *)(param_1 + 0x990) = lVar3;
  if (lVar3 == 0) {
    lVar3 = SWindow::GetHittestGrid(param_1);
    if (lVar3 == 0) {
      return;
    }
    lVar3 = FUN_1407cb5c0(lVar3);
    if (lVar3 != 0) {
      lVar2 = FUN_1407b4160();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1407754f3;
    }
    lVar3 = 0;
  }
LAB_1407754f3:
  *(longlong *)(param_1 + 0x998) = lVar3;
  return;
}



// FUNCTION 140775510 FUN_140775510 body=804 status=ok
// SIG undefined FUN_140775510(void)

void FUN_140775510(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_16c;
  undefined1 local_168 [8];
  longlong *local_160;
  longlong *local_158;
  undefined1 local_148 [32];
  longlong local_128;
  int local_120;
  int local_11c;
  undefined1 local_78 [72];
  
  FUN_1407848d0();
  plVar14 = (longlong *)0x0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  bVar15 = false;
  *(undefined1 *)(param_1 + 0xa8) = 3;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x68) + 0x488);
  if (plVar4 != (longlong *)0x0) {
    uVar8 = FUN_142e27720();
    lVar9 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar8);
    if (lVar9 != 0) {
      FUN_142c62180(local_148);
      uVar16 = FUN_14075f920(*(undefined8 *)(param_1 + 0x80));
      puVar10 = (undefined8 *)FUN_142c62590(local_78,&DAT_146b2fd00,uVar16);
      iVar7 = local_120;
      lVar13 = (longlong)local_120;
      local_120 = local_120 + 1;
      if (local_11c < local_120) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_128,iVar7);
      }
      uVar8 = puVar10[1];
      lVar13 = lVar13 * 0x38;
      *(undefined8 *)(lVar13 + local_128) = *puVar10;
      ((undefined8 *)(lVar13 + local_128))[1] = uVar8;
      uVar8 = puVar10[3];
      puVar2 = (undefined8 *)(lVar13 + 0x10 + local_128);
      *puVar2 = puVar10[2];
      puVar2[1] = uVar8;
      uVar16 = *(undefined4 *)((longlong)puVar10 + 0x24);
      uVar5 = *(undefined4 *)(puVar10 + 5);
      uVar6 = *(undefined4 *)((longlong)puVar10 + 0x2c);
      puVar3 = (undefined4 *)(lVar13 + 0x20 + local_128);
      *puVar3 = *(undefined4 *)(puVar10 + 4);
      puVar3[1] = uVar16;
      puVar3[2] = uVar5;
      puVar3[3] = uVar6;
      *(undefined8 *)(lVar13 + 0x30 + local_128) = puVar10[6];
      puVar10 = (undefined8 *)FUN_14075bf80(*(undefined8 *)(param_1 + 0x80),local_res18);
      puVar10 = (undefined8 *)FUN_142c7c900(lVar9,local_168,*puVar10,local_148);
      *(undefined8 *)(param_1 + 0x98) = *puVar10;
      plVar4 = (longlong *)puVar10[1];
      plVar12 = *(longlong **)(param_1 + 0xa0);
      if (plVar4 != plVar12) {
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
          UNLOCK();
          plVar12 = *(longlong **)(param_1 + 0xa0);
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
        *(longlong **)(param_1 + 0xa0) = plVar4;
      }
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_160 + 1;
        lVar9 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar1 = (int *)((longlong)local_160 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_160 + 8))(local_160,1);
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x98) != 0) && (*(longlong *)(param_1 + 0xa0) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0xa0) + 8);
        LOCK();
        iVar7 = *piVar1;
        if (iVar7 == 0) {
          *piVar1 = 0;
          iVar7 = 0;
        }
        UNLOCK();
        if (0 < iVar7) {
          plVar4 = *(longlong **)(param_1 + 0xa0);
          plVar12 = plVar4;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            iVar7 = (int)plVar4[1];
            bVar15 = iVar7 == 0;
            if (bVar15) {
              *(int *)(plVar4 + 1) = 0;
              iVar7 = 0;
            }
            UNLOCK();
            while (plVar12 = plVar14, !bVar15) {
              LOCK();
              bVar15 = iVar7 == (int)plVar4[1];
              if (bVar15) {
                *(int *)(plVar4 + 1) = iVar7 + 1;
              }
              UNLOCK();
              if (bVar15) {
                plVar12 = plVar4;
                if (plVar4 != (longlong *)0x0) {
                  plVar14 = *(longlong **)(param_1 + 0x98);
                }
                break;
              }
              LOCK();
              iVar7 = (int)plVar4[1];
              bVar15 = iVar7 == 0;
              if (bVar15) {
                *(int *)(plVar4 + 1) = 0;
                iVar7 = 0;
              }
              UNLOCK();
            }
          }
          plVar4 = plVar14 + 0xb;
          plVar11 = (longlong *)FMemory::Realloc(0,0x30);
          local_158 = plVar11;
          if (plVar11 != (longlong *)0x0) {
            *plVar11 = (longlong)&PTR_FUN_143fcff50;
            FWeakObjectPtr::operator=(plVar11 + 1,param_1);
            *(undefined4 *)(plVar11 + 2) = 0x4077d020;
            *(undefined4 *)((longlong)plVar11 + 0x14) = 1;
            *(undefined4 *)(plVar11 + 3) = 0;
            *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_16c;
            lVar9 = FDelegateHandle::GenerateNewID();
            plVar11[5] = lVar9;
            *plVar11 = (longlong)&PTR_FUN_143fcff98;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
            (**(code **)(*plVar11 + 0x20))(plVar11,local_res20);
            iVar7 = (int)plVar14[0xc];
            *(int *)(plVar14 + 0xc) = iVar7 + 1;
            if (*(int *)((longlong)plVar14 + 100) < iVar7 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar7);
            }
            puVar10 = (undefined8 *)((longlong)iVar7 * 0x10 + *plVar4);
            *puVar10 = plVar11;
            *(undefined4 *)(puVar10 + 1) = 3;
          }
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar12 + 1;
            lVar9 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
          bVar15 = true;
        }
      }
      FUN_142c63c50(local_148);
      if (bVar15) {
        return;
      }
    }
  }
  TBaseDelegate<void,FUniqueNetId_const_&,bool_const_>::ExecuteIfBound(param_1 + 0x70,param_1,1);
  UGameplayTask::EndTask(param_1);
  return;
}



// FUNCTION 140775840 FUN_140775840 body=804 status=ok
// SIG undefined FUN_140775840(void)

void FUN_140775840(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_16c;
  undefined1 local_168 [8];
  longlong *local_160;
  longlong *local_158;
  undefined1 local_148 [32];
  longlong local_128;
  int local_120;
  int local_11c;
  undefined1 local_78 [72];
  
  FUN_1407848d0();
  plVar14 = (longlong *)0x0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  bVar15 = false;
  *(undefined1 *)(param_1 + 0xa8) = 3;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x68) + 0x488);
  if (plVar4 != (longlong *)0x0) {
    uVar8 = FUN_142e27720();
    lVar9 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar8);
    if (lVar9 != 0) {
      FUN_142c62180(local_148);
      uVar16 = FUN_14075f990(*(undefined8 *)(param_1 + 0x80));
      puVar10 = (undefined8 *)FUN_142c62590(local_78,&DAT_146b2fd00,uVar16);
      iVar7 = local_120;
      lVar13 = (longlong)local_120;
      local_120 = local_120 + 1;
      if (local_11c < local_120) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_128,iVar7);
      }
      uVar8 = puVar10[1];
      lVar13 = lVar13 * 0x38;
      *(undefined8 *)(lVar13 + local_128) = *puVar10;
      ((undefined8 *)(lVar13 + local_128))[1] = uVar8;
      uVar8 = puVar10[3];
      puVar2 = (undefined8 *)(lVar13 + 0x10 + local_128);
      *puVar2 = puVar10[2];
      puVar2[1] = uVar8;
      uVar16 = *(undefined4 *)((longlong)puVar10 + 0x24);
      uVar5 = *(undefined4 *)(puVar10 + 5);
      uVar6 = *(undefined4 *)((longlong)puVar10 + 0x2c);
      puVar3 = (undefined4 *)(lVar13 + 0x20 + local_128);
      *puVar3 = *(undefined4 *)(puVar10 + 4);
      puVar3[1] = uVar16;
      puVar3[2] = uVar5;
      puVar3[3] = uVar6;
      *(undefined8 *)(lVar13 + 0x30 + local_128) = puVar10[6];
      puVar10 = (undefined8 *)FUN_14075bf80(*(undefined8 *)(param_1 + 0x80),local_res18);
      puVar10 = (undefined8 *)FUN_142c7c900(lVar9,local_168,*puVar10,local_148);
      *(undefined8 *)(param_1 + 0x90) = *puVar10;
      plVar4 = (longlong *)puVar10[1];
      plVar12 = *(longlong **)(param_1 + 0x98);
      if (plVar4 != plVar12) {
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
          UNLOCK();
          plVar12 = *(longlong **)(param_1 + 0x98);
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
        *(longlong **)(param_1 + 0x98) = plVar4;
      }
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_160 + 1;
        lVar9 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar1 = (int *)((longlong)local_160 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_160 + 8))(local_160,1);
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x90) != 0) && (*(longlong *)(param_1 + 0x98) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x98) + 8);
        LOCK();
        iVar7 = *piVar1;
        if (iVar7 == 0) {
          *piVar1 = 0;
          iVar7 = 0;
        }
        UNLOCK();
        if (0 < iVar7) {
          plVar4 = *(longlong **)(param_1 + 0x98);
          plVar12 = plVar4;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            iVar7 = (int)plVar4[1];
            bVar15 = iVar7 == 0;
            if (bVar15) {
              *(int *)(plVar4 + 1) = 0;
              iVar7 = 0;
            }
            UNLOCK();
            while (plVar12 = plVar14, !bVar15) {
              LOCK();
              bVar15 = iVar7 == (int)plVar4[1];
              if (bVar15) {
                *(int *)(plVar4 + 1) = iVar7 + 1;
              }
              UNLOCK();
              if (bVar15) {
                plVar12 = plVar4;
                if (plVar4 != (longlong *)0x0) {
                  plVar14 = *(longlong **)(param_1 + 0x90);
                }
                break;
              }
              LOCK();
              iVar7 = (int)plVar4[1];
              bVar15 = iVar7 == 0;
              if (bVar15) {
                *(int *)(plVar4 + 1) = 0;
                iVar7 = 0;
              }
              UNLOCK();
            }
          }
          plVar4 = plVar14 + 0xb;
          plVar11 = (longlong *)FMemory::Realloc(0,0x30);
          local_158 = plVar11;
          if (plVar11 != (longlong *)0x0) {
            *plVar11 = (longlong)&PTR_FUN_143fcff50;
            FWeakObjectPtr::operator=(plVar11 + 1,param_1);
            *(undefined4 *)(plVar11 + 2) = 0x4077d020;
            *(undefined4 *)((longlong)plVar11 + 0x14) = 1;
            *(undefined4 *)(plVar11 + 3) = 0;
            *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_16c;
            lVar9 = FDelegateHandle::GenerateNewID();
            plVar11[5] = lVar9;
            *plVar11 = (longlong)&PTR_FUN_143fcff98;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
            (**(code **)(*plVar11 + 0x20))(plVar11,local_res20);
            iVar7 = (int)plVar14[0xc];
            *(int *)(plVar14 + 0xc) = iVar7 + 1;
            if (*(int *)((longlong)plVar14 + 100) < iVar7 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar7);
            }
            puVar10 = (undefined8 *)((longlong)iVar7 * 0x10 + *plVar4);
            *puVar10 = plVar11;
            *(undefined4 *)(puVar10 + 1) = 3;
          }
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar12 + 1;
            lVar9 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
          bVar15 = true;
        }
      }
      FUN_142c63c50(local_148);
      if (bVar15) {
        return;
      }
    }
  }
  TBaseDelegate<void,FUniqueNetId_const_&,bool_const_>::ExecuteIfBound(param_1 + 0x70,param_1,1);
  UGameplayTask::EndTask(param_1);
  return;
}



// FUNCTION 140775b70 FUN_140775b70 body=346 status=ok
// SIG undefined FUN_140775b70(void)

ulonglong FUN_140775b70(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  undefined8 local_res8;
  
  if ((((*(longlong *)(param_1 + 0x1a8) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x900) == 0)) ||
      (*(longlong *)(param_1 + 0x1f0) == 0)) ||
     (((*(longlong *)(param_1 + 0x1f8) == 0 || (*(longlong *)(param_1 + 0x200) == 0)) ||
      ((*(longlong **)(param_1 + 0x208) == (longlong *)0x0 || (*(longlong *)(param_1 + 0x220) == 0))
      )))) {
    return 1;
  }
  plVar3 = (longlong *)0x0;
  plVar2 = *(longlong **)(param_1 + 0x208);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    plVar2 = plVar3;
  }
  fVar4 = (float)(**(code **)(*plVar2 + 0x48))();
  if (fVar4 != 0.0) {
    if (*(char *)(param_1 + 0x500) != '\0') {
      local_res8 = *(undefined8 *)(param_1 + 0x220);
      fVar4 = (float)FUN_142de77e0(param_1 + 0x480,*(undefined8 *)(param_1 + 0x118),0,&local_res8);
      return (ulonglong)(uint)((int)ROUND(fVar4 * 2.0 + 0.5) >> 1);
    }
    if (*(char *)(param_1 + 0x2c8) != '\0') {
      uVar1 = FUN_140777890(param_1 + 0x248,*(undefined8 *)(param_1 + 0x118),param_1 + 0x220);
      return uVar1;
    }
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x208);
  }
  fVar4 = (float)(**(code **)(*plVar3 + 0x38))(plVar3);
  return (ulonglong)(uint)(int)fVar4;
}



// FUNCTION 140775cd0 FUN_140775cd0 body=189 status=ok
// SIG undefined FUN_140775cd0(void)

undefined8 FUN_140775cd0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_res8 [4];
  
  if ((((*(longlong *)(param_1 + 0x1a8) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x900) != 0)) &&
      (*(longlong *)(param_1 + 0x1f0) != 0)) &&
     (((*(longlong *)(param_1 + 0x1f8) != 0 && (*(longlong *)(param_1 + 0x200) != 0)) &&
      ((*(longlong **)(param_1 + 0x208) != (longlong *)0x0 &&
       (local_res8[0] = *(longlong *)(param_1 + 0x220), local_res8[0] != 0)))))) {
    if (*(char *)(param_1 + 0x588) == '\0') {
      if (*(char *)(param_1 + 0x350) == '\0') {
        plVar2 = *(longlong **)(param_1 + 0x208);
        if (*(longlong *)(param_1 + 0x200) == 0) {
          plVar2 = (longlong *)0x0;
        }
                    /* WARNING: Could not recover jumptable at 0x000140775d81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar2 + 0x40))();
        return uVar3;
      }
      lVar1 = param_1 + 0x2d0;
    }
    else {
      lVar1 = param_1 + 0x508;
    }
    uVar3 = FUN_142de77e0(lVar1,*(undefined8 *)(param_1 + 0x118),0,local_res8);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140775d90 FUN_140775d90 body=189 status=ok
// SIG undefined FUN_140775d90(void)

undefined8 FUN_140775d90(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_res8 [4];
  
  if ((((*(longlong *)(param_1 + 0x1a8) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x900) != 0)) &&
      (*(longlong *)(param_1 + 0x1f0) != 0)) &&
     (((*(longlong *)(param_1 + 0x1f8) != 0 && (*(longlong *)(param_1 + 0x200) != 0)) &&
      ((*(longlong **)(param_1 + 0x208) != (longlong *)0x0 &&
       (local_res8[0] = *(longlong *)(param_1 + 0x220), local_res8[0] != 0)))))) {
    if (*(char *)(param_1 + 0x610) == '\0') {
      if (*(char *)(param_1 + 0x3d8) == '\0') {
        plVar2 = *(longlong **)(param_1 + 0x208);
        if (*(longlong *)(param_1 + 0x200) == 0) {
          plVar2 = (longlong *)0x0;
        }
                    /* WARNING: Could not recover jumptable at 0x000140775e41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar2 + 0x28))();
        return uVar3;
      }
      lVar1 = param_1 + 0x358;
    }
    else {
      lVar1 = param_1 + 0x590;
    }
    uVar3 = FUN_142de77e0(lVar1,*(undefined8 *)(param_1 + 0x118),0,local_res8);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140775e50 FUN_140775e50 body=483 status=ok
// SIG undefined FUN_140775e50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140775e50(undefined8 param_1,float param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_448 [32];
  undefined1 local_428 [8];
  float local_420;
  float local_41c;
  float local_418;
  float local_410;
  float local_40c;
  float local_408;
  undefined1 local_3f8 [912];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_448;
  *param_3 = DAT_14622e8b0;
  *(undefined4 *)(param_3 + 1) = DAT_14622e8b8;
  uVar1 = FUN_142ddddc0();
  uVar2 = uVar1;
  if ((uVar1 != 0) && (fVar7 = 0.0, 0.0 <= param_2)) {
    FUN_142dc1ad0(local_3f8);
    uVar2 = FUN_142dcd6e0(uVar1,local_3f8,0);
    if ((char)uVar2 != '\0') {
      FUN_142dcd3a0(local_3f8,&local_410,local_428);
      iVar5 = 0;
      fVar8 = 0.0;
      fVar9 = 0.0;
      lVar3 = *(longlong *)(uVar1 + 0x7538);
      if (*(longlong *)(uVar1 + 0x7538) == 0) {
        lVar3 = uVar1 + 0x338;
      }
      uVar2 = (ulonglong)*(int *)(uVar1 + 0x7540);
      lVar4 = uVar2 * 0x390 + lVar3;
      if (lVar3 != lVar4) {
        do {
          uVar2 = FUN_142dcd3a0(lVar3,&local_420,local_428);
          if ((local_40c - local_41c) * (local_40c - local_41c) +
              (local_410 - local_420) * (local_410 - local_420) +
              (local_408 - local_418) * (local_408 - local_418) <= param_2 * param_2) {
            iVar5 = iVar5 + 1;
            fVar7 = fVar7 + local_420;
            fVar8 = fVar8 + local_41c;
            fVar9 = fVar9 + local_418;
          }
          lVar3 = lVar3 + 0x390;
        } while (lVar3 != lVar4);
        if (iVar5 != 0) {
          fVar6 = 1.0 / (float)iVar5;
          *param_3 = CONCAT44(fVar6 * fVar8,fVar6 * fVar7);
          *(float *)(param_3 + 1) = fVar6 * fVar9;
          return CONCAT71((uint7)(uint3)((uint)(fVar6 * fVar9) >> 8),1);
        }
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140776040 FUN_140776040 body=576 status=ok
// SIG undefined FUN_140776040(void)

ulonglong FUN_140776040(longlong *param_1,ulonglong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  float fVar6;
  
  uVar4 = DAT_1468593c8;
  if ((((param_1[0x35] == 0) || (*(longlong *)(param_1[0x35] + 0x900) == 0)) || (param_1[0x3e] == 0)
      ) || (((param_1[0x3f] == 0 || (param_1[0x40] == 0)) ||
            ((param_1[0x41] == 0 || (param_1[0x44] == 0)))))) {
    *param_2 = DAT_1468593c8;
    return uVar4 & 0xffffffffffffff00;
  }
  if ((((char)param_1[0x36] == '\0') && (*(char *)((longlong)param_1 + 0x1b1) == '\0')) &&
     ((param_1[0x43] == 0 || (cVar1 = FUN_1407444f0(), cVar1 == '\0')))) {
    uVar4 = DAT_1468593f0;
    *param_2 = DAT_1468593f0;
    return uVar4 & 0xffffffffffffff00;
  }
  lVar3 = param_1[0x24];
  if ((lVar3 == 0) && (lVar3 = FUN_1423407b0(param_1), lVar3 == 0)) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = *(float *)(lVar3 + 0x790);
  }
  uVar4 = DAT_1468593f8;
  if (*(float *)(param_1 + 0x3a) <= fVar6) {
    if ((*(char *)((longlong)param_1 + 0x1b1) == '\0') &&
       ((((param_1[0x43] == 0 || (cVar1 = FUN_1407444f0(), cVar1 == '\0')) && (param_1[0x47] != 0))
        && (cVar1 = FUN_142c48f60(param_1[0x47],param_1[0x23],0), uVar4 = DAT_146859400,
           cVar1 == '\0')))) {
      *param_2 = DAT_146859400;
      return uVar4 & 0xffffffffffffff00;
    }
    uVar2 = (**(code **)(*param_1 + 0x420))();
    if (param_1[0x3e] == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)param_1[0x3f];
    }
    cVar1 = (**(code **)(*plVar5 + 0x40))(plVar5,uVar2);
    uVar4 = DAT_146859408;
    if (cVar1 == '\0') {
      if (param_1[0x3e] == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)param_1[0x3f];
      }
      cVar1 = (**(code **)(*plVar5 + 0x48))(plVar5,uVar2);
      uVar4 = DAT_146859410;
      if ((cVar1 == '\0') &&
         ((((*(char *)((longlong)param_1 + 0x1b1) != '\0' ||
            ((param_1[0x43] != 0 && (cVar1 = FUN_1407444f0(), cVar1 != '\0')))) ||
           (*(char *)((longlong)param_1 + 0x1b2) == '\0')) ||
          (cVar1 = FUN_14077ca30(param_1), uVar4 = DAT_146859418, cVar1 != '\0')))) {
        *param_2 = 0;
        return 1;
      }
    }
    *param_2 = uVar4;
    return uVar4 & 0xffffffffffffff00;
  }
  *param_2 = DAT_1468593f8;
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140776290 FUN_140776290 body=523 status=ok
// SIG undefined FUN_140776290(void)

void FUN_140776290(longlong *param_1)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  
  if ((((param_1[0x35] != 0) && (*(longlong *)(param_1[0x35] + 0x900) != 0)) && (param_1[0x3e] != 0)
      ) && (((param_1[0x3f] != 0 && (param_1[0x40] != 0)) &&
            ((param_1[0x41] != 0 && (param_1[0x44] != 0)))))) {
    uVar1 = (**(code **)(*param_1 + 0x420))();
    lVar3 = param_1[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    fVar7 = 0.0;
    if (lVar3 == 0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = *(float *)(lVar3 + 0x790);
    }
    plVar5 = (longlong *)0x0;
    plVar4 = plVar5;
    if (param_1[0x3e] != 0) {
      plVar4 = (longlong *)param_1[0x3f];
    }
    cVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,uVar1);
    if ((bool)cVar2 != (*(char *)((longlong)param_1 + 0x1b3) == '\x02')) {
      if (*(char *)((longlong)param_1 + 0x1b3) == '\x02') {
        plVar4 = plVar5;
        if (param_1[0x3e] != 0) {
          plVar4 = (longlong *)param_1[0x3f];
        }
        (**(code **)(*plVar4 + 0x30))(plVar4,uVar1,*(undefined1 *)((longlong)param_1 + 0x85c));
        if ((char)param_1[0x3b] == '\0') {
          if (fVar6 < *(float *)((longlong)param_1 + 0x1cc)) {
            return;
          }
          *(undefined1 *)(param_1 + 0x3b) = 1;
          if ((((param_1[0x35] != 0) && (*(longlong *)(param_1[0x35] + 0x900) != 0)) &&
              ((param_1[0x3e] != 0 &&
               (((param_1[0x3f] != 0 && (param_1[0x40] != 0)) &&
                ((longlong *)param_1[0x41] != (longlong *)0x0)))))) && (param_1[0x44] != 0)) {
            plVar4 = (longlong *)param_1[0x41];
            if (param_1[0x40] == 0) {
              plVar4 = plVar5;
            }
            fVar7 = (float)(**(code **)(*plVar4 + 0x30))();
          }
          fVar6 = (float)FUN_140778f00(param_1);
          *(float *)((longlong)param_1 + 0x1cc) = fVar6 + fVar7;
        }
        if (param_1[0x3e] != 0) {
          plVar5 = (longlong *)param_1[0x3f];
        }
        (**(code **)(*plVar5 + 0x20))(plVar5,uVar1,0);
      }
      else {
        *(undefined1 *)(param_1 + 0x3b) = 0;
        if (param_1[0x3e] != 0) {
          plVar5 = (longlong *)param_1[0x3f];
        }
        (**(code **)(*plVar5 + 0x28))(plVar5,uVar1,0);
      }
    }
  }
  return;
}



// FUNCTION 1407764a0 FUN_1407764a0 body=2114 status=ok
// SIG undefined FUN_1407764a0(void)

char FUN_1407764a0(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  float fVar15;
  float fVar16;
  longlong local_res10 [2];
  char local_res20;
  longlong *local_260;
  undefined2 *local_258;
  undefined8 local_250;
  undefined2 *local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong local_218;
  float local_210;
  float local_20c;
  float local_208;
  float local_200;
  float local_1fc;
  float local_1f8;
  undefined8 local_1f0;
  float local_1e8;
  float fStack_1e4;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [16];
  undefined8 local_178;
  float local_170;
  float local_16c;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined8 local_f8;
  float local_f0;
  float local_ec;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  
  lVar4 = *(longlong *)(param_2 + 0x120);
  local_res10[0] = param_2;
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_2);
  }
  plVar5 = (longlong *)FUN_142f9cfb0(lVar4,0);
  if (plVar5 == (longlong *)0x0) {
    return '\x01';
  }
  FUN_142f88b40(&local_f8);
  local_78 = plVar5;
  puVar6 = (undefined8 *)FUN_1407cac20(param_2,&local_210);
  local_f8 = *puVar6;
  local_f0 = *(float *)(puVar6 + 1);
  local_ec = (float)FUN_142fa34d0(plVar5);
  local_ec = local_ec * 2.0;
  FUN_142f88ab0(&local_178);
  local_108 = plVar5;
  puVar6 = (undefined8 *)FUN_1407cac20(param_2,&local_210);
  local_178 = *puVar6;
  local_170 = *(float *)(puVar6 + 1);
  local_16c = (float)FUN_142fa34d0(plVar5);
  local_16c = local_16c * 2.0;
  local_res20 = '\x01';
  plVar12 = (longlong *)param_1[0x10];
  if ((longlong *)param_1[0x10] == (longlong *)0x0) {
    plVar12 = param_1;
  }
  plVar1 = plVar12 + (int)param_1[0x11];
  do {
    if (plVar12 == plVar1) {
      return local_res20;
    }
    plVar2 = (longlong *)*plVar12;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x2c8))(plVar2,&local_260);
      if (local_260 != (longlong *)0x0) {
        plVar7 = (longlong *)FUN_1428dfc70();
        for (plVar13 = local_260; plVar13 != (longlong *)0x0; plVar13 = (longlong *)plVar13[6]) {
          if (plVar13 == plVar7) goto LAB_14077666a;
        }
      }
      (**(code **)(*plVar2 + 0x328))(plVar2);
      puVar6 = (undefined8 *)(**(code **)(*plVar2 + 0x2c8))(plVar2,local_188);
      local_260 = (longlong *)*puVar6;
LAB_14077666a:
      if (local_260 != (longlong *)0x0) {
        plVar8 = (longlong *)FUN_1428dfc70();
        plVar7 = local_260;
        for (plVar13 = local_260; plVar13 != (longlong *)0x0; plVar13 = (longlong *)plVar13[6]) {
          if (plVar13 == plVar8) {
            plVar13 = (longlong *)local_260[0x1f];
            if (plVar13 == (longlong *)0x0) {
              (**(code **)(*local_260 + 0x368))(local_260);
              plVar13 = (longlong *)plVar7[0x1f];
              if (plVar13 == (longlong *)0x0) break;
            }
            (**(code **)(*plVar5 + 0x860))(plVar5,&local_1e8,plVar13);
            FUN_142faeb40(plVar5 + 0x145,&local_198);
            uVar9 = UMediaSoundComponent::GetPrivateStaticClass();
            lVar4 = (**(code **)(*plVar13 + 0x628))(plVar13,uVar9);
            cVar3 = FUN_142fa8b70(&local_198);
            if ((cVar3 == '\0') || (lVar4 == 0)) break;
            uVar9 = UThrobber::GetPrivateStaticClass();
            lVar10 = (**(code **)(*plVar13 + 0x628))(plVar13,uVar9);
            if ((lVar10 != 0) && (cVar3 = FUN_1407c3050(param_2,lVar10 + 0x188), cVar3 == '\0'))
            break;
            if (*(char *)(lVar4 + 0x4b0) == '\x05') {
              uStack_160 = uStack_1e0;
              local_158 = local_1d8;
              uStack_150 = uStack_1d0;
              local_148 = local_1c8;
              uStack_140 = uStack_1c0;
              local_138 = local_1b8;
              uStack_130 = uStack_1b0;
              local_128 = local_1a8;
              uStack_124 = uStack_1a4;
              uStack_120 = uStack_1a0;
              uStack_11c = uStack_19c;
              local_118 = local_198;
              uStack_114 = uStack_194;
              uStack_110 = uStack_190;
              uStack_10c = uStack_18c;
              cVar3 = FUN_142f9e4d0(&local_178,&local_200);
              if (cVar3 != '\0') {
                if ((local_178._4_4_ - local_1fc) * (local_178._4_4_ - local_1fc) +
                    ((float)local_178 - local_200) * ((float)local_178 - local_200) +
                    (local_170 - local_1f8) * (local_170 - local_1f8) <= 1.0) goto LAB_140776b23;
              }
              fVar16 = local_1e8;
              if (local_1e8 <= fStack_1e4) {
                fVar16 = fStack_1e4;
              }
              local_res20 = '\0';
              lVar4 = FUN_142fa3100(plVar5 + 0xe7,fVar16);
              if (param_3 == (longlong *)0x0) {
                return local_res20;
              }
              if (lVar4 == 0) {
                local_250 = 5;
                local_258 = (undefined2 *)0x0;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
                FGenericPlatformString::Memcpy(local_258,&DAT_143f3edc8,10);
              }
              else {
                local_res10[0] = *(longlong *)(lVar4 + 0x18);
                FName::ToString(local_res10,&local_258);
              }
              puVar11 = &DAT_143f3eda8;
              if ((int)local_250 != 0) {
                puVar11 = local_258;
              }
              if (local_260 == (longlong *)0x0) goto LAB_140776ba7;
              plVar12 = (longlong *)FUN_1428dfc70();
              plVar5 = local_260;
              goto joined_r0x000140776b93;
            }
            uStack_d0 = uStack_1e0;
            local_c8 = local_1d8;
            uStack_c0 = uStack_1d0;
            local_b8 = local_1c8;
            uStack_b0 = uStack_1c0;
            local_a8 = local_1b8;
            uStack_a0 = uStack_1b0;
            local_98 = local_1a8;
            uStack_94 = uStack_1a4;
            uStack_90 = uStack_1a0;
            uStack_8c = uStack_19c;
            local_88 = local_198;
            uStack_84 = uStack_194;
            uStack_80 = uStack_190;
            uStack_7c = uStack_18c;
            cVar3 = FUN_142f9e730(&local_f8,&local_210,0);
            if (cVar3 != '\0') {
              fVar16 = local_208 - local_f0;
              if (((local_f8._4_4_ - local_20c) * (local_f8._4_4_ - local_20c) +
                   ((float)local_f8 - local_210) * ((float)local_f8 - local_210) <= 1.0) &&
                 (fVar15 = (float)FUN_142fa34d0(plVar5), param_2 = local_res10[0],
                 ABS(fVar16) <= fVar15)) {
                cVar3 = FUN_140776cf0(local_res10[0],plVar2,plVar13,&local_f8);
                if ((cVar3 == '\0') && (param_3 != (longlong *)0x0)) {
                  FString::PrintfImpl(&local_238,
                                      L"Spawn animation interrupt point not over valid Nav Mesh");
                  if (param_3 == &local_238) {
                    if (local_238 != 0) {
                      FMemory::Free();
                    }
                  }
                  else {
                    if (*param_3 != 0) {
                      FMemory::Free();
                    }
                    *param_3 = local_238;
                    *(undefined4 *)(param_3 + 1) = (undefined4)local_230;
                    *(undefined4 *)((longlong)param_3 + 0xc) = local_230._4_4_;
                    local_230 = 0;
                    local_238 = 0;
                  }
                }
LAB_140776b23:
                if (local_res20 == '\0') {
                  return '\0';
                }
                break;
              }
            }
            local_res20 = '\0';
            puVar11 = (undefined2 *)FUN_142fa3130(plVar5 + 0xe4,local_1e8,fStack_1e4);
            if (param_3 == (longlong *)0x0) {
              return local_res20;
            }
            if (puVar11 == (undefined2 *)0x0) {
              local_240 = 5;
              local_248 = puVar11;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
              FGenericPlatformString::Memcpy(local_248,&DAT_143f3edc8,10);
            }
            else {
              local_1f0 = *(undefined8 *)(puVar11 + 0xc);
              FName::ToString(&local_1f0,&local_248);
            }
            puVar11 = &DAT_143f3eda8;
            if ((int)local_240 != 0) {
              puVar11 = local_248;
            }
            if (local_260 == (longlong *)0x0) goto LAB_1407769a2;
            plVar12 = (longlong *)FUN_1428dfc70();
            plVar5 = local_260;
            goto joined_r0x00014077698c;
          }
        }
      }
    }
    plVar12 = plVar12 + 1;
  } while( true );
joined_r0x000140776b93:
  if (plVar5 == (longlong *)0x0) {
LAB_140776ba7:
    local_248 = (undefined2 *)0x0;
    local_240 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
    FGenericPlatformString::Memcpy(local_248,&DAT_143f3edc8,10);
LAB_140776bd8:
    puVar14 = &DAT_143f3eda8;
    if ((int)local_240 != 0) {
      puVar14 = local_248;
    }
    FString::PrintfImpl(&local_238,
                        L"Outside nav flight area: %s - Layer: %s - (Radius=%.0f, HalfHeight=%.0f)",
                        puVar14,puVar11,(double)local_1e8,(double)fStack_1e4);
    if (param_3 == &local_238) {
      if (local_238 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_3 != 0) {
        FMemory::Free();
      }
      *param_3 = local_238;
      *(undefined4 *)(param_3 + 1) = (undefined4)local_230;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_230._4_4_;
      local_230 = 0;
      local_238 = 0;
    }
    if (local_248 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_258 == (undefined2 *)0x0) {
      return local_res20;
    }
    FMemory::Free();
    return local_res20;
  }
  if (plVar5 == plVar12) {
    local_218 = local_260[3];
    FName::ToString(&local_218,&local_248);
    goto LAB_140776bd8;
  }
  plVar5 = (longlong *)plVar5[6];
  goto joined_r0x000140776b93;
joined_r0x00014077698c:
  if (plVar5 == (longlong *)0x0) {
LAB_1407769a2:
    local_250 = 5;
    local_258 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
    FGenericPlatformString::Memcpy(local_258,&DAT_143f3edc8,10);
LAB_1407769d5:
    puVar14 = &DAT_143f3eda8;
    if ((int)local_250 != 0) {
      puVar14 = local_258;
    }
    FString::PrintfImpl(&local_228,
                        L"Off Nav Mesh or too close to edge: %s - Layer: %s - (Radius=%.0f, HalfHeight=%.0f)"
                        ,puVar14,puVar11,(double)local_1e8,(double)fStack_1e4);
    if (param_3 == &local_228) {
      if (local_228 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_3 != 0) {
        FMemory::Free();
      }
      *param_3 = local_228;
      *(undefined4 *)(param_3 + 1) = (undefined4)local_220;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_220._4_4_;
      local_220 = 0;
      local_228 = 0;
    }
    if (local_258 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_248 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    return local_res20;
  }
  if (plVar5 == plVar12) {
    local_218 = local_260[3];
    FName::ToString(&local_218,&local_258);
    goto LAB_1407769d5;
  }
  plVar5 = (longlong *)plVar5[6];
  goto joined_r0x00014077698c;
}



// FUNCTION 140776cf0 FUN_140776cf0 body=2227 status=ok
// SIG undefined FUN_140776cf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_140776cf0(longlong param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  float *pfVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_708 [32];
  undefined1 local_6e8;
  float local_6d8;
  float fStack_6d4;
  float local_6d0;
  longlong *local_6c8;
  float local_6c0;
  float local_6bc;
  float local_6b8;
  undefined8 local_6b0;
  undefined4 local_6a8;
  undefined4 local_6a0;
  undefined4 local_69c;
  undefined4 local_698;
  undefined4 local_690;
  undefined4 local_68c;
  undefined4 local_688;
  undefined8 local_678;
  undefined4 local_670;
  undefined8 local_668;
  undefined4 local_660;
  longlong *local_658;
  undefined8 uStack_650;
  longlong local_648;
  longlong *local_640;
  undefined8 local_638;
  undefined8 local_630;
  float local_628;
  float fStack_624;
  float fStack_620;
  float fStack_61c;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  float local_600;
  float local_5fc;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined8 local_598;
  undefined1 local_588 [12];
  undefined1 local_57c [12];
  undefined1 local_570 [24];
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  float local_538;
  float fStack_534;
  float fStack_530;
  undefined4 uStack_52c;
  float local_528;
  float fStack_524;
  float fStack_520;
  undefined4 uStack_51c;
  float local_518;
  float fStack_514;
  float fStack_510;
  undefined4 uStack_50c;
  undefined1 local_508 [24];
  longlong local_4f0;
  longlong *local_438;
  longlong local_430;
  longlong *local_428;
  undefined8 uStack_420;
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined1 local_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8;
  undefined8 local_3a4;
  undefined4 local_39c;
  undefined1 local_398;
  undefined1 local_388 [16];
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined1 local_358 [16];
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined1 local_328 [16];
  float local_318;
  float fStack_314;
  float fStack_310;
  undefined4 uStack_30c;
  undefined1 local_2f8 [48];
  undefined1 local_2c8 [48];
  undefined1 local_298 [28];
  undefined4 local_27c;
  longlong local_c8;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_708;
  if ((param_2 == 0) || (param_3 == (longlong *)0x0)) {
    return 0;
  }
  local_658 = param_3;
  local_638 = FUN_142a07000();
  lVar10 = (**(code **)(*param_3 + 0x628))(param_3,local_638);
  local_630 = FUN_142e27720();
  lVar11 = (**(code **)(*param_3 + 0x628))(param_3,local_630);
  if (lVar10 == 0) {
    return 1;
  }
  if (lVar11 == 0) {
    return 1;
  }
  FUN_142c62180(local_508);
  local_4f0 = lVar11;
  FUN_142c70760(lVar11,&local_6c8,*(undefined8 *)(param_1 + 0x8e0),local_508);
  if (local_6c8 != (longlong *)0x0) {
    plVar12 = (longlong *)FUN_142e20fc0();
    for (plVar3 = local_6c8; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6]) {
      if (plVar3 == plVar12) {
        plVar12 = (longlong *)FUN_142e20fc0();
        plVar3 = local_6c8;
        goto joined_r0x000140776e03;
      }
    }
  }
  goto LAB_140776fbd;
joined_r0x000140776e03:
  if (plVar3 == (longlong *)0x0) goto LAB_140776e13;
  plVar17 = local_6c8;
  if (plVar3 == plVar12) goto LAB_140776e15;
  plVar3 = (longlong *)plVar3[6];
  goto joined_r0x000140776e03;
LAB_140776e13:
  plVar17 = (longlong *)0x0;
LAB_140776e15:
  lVar10 = plVar17[0x1f];
  if (lVar10 == 0) {
    (**(code **)(*plVar17 + 0x368))(plVar17);
    lVar10 = plVar17[0x1f];
    if (lVar10 == 0) goto LAB_140776fbd;
  }
  lVar13 = UThrobber::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
      != lVar13 + 0x88)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (bVar6) {
    FUN_142c85760(lVar11,&local_648,local_6c8);
    if (local_648 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(longlong *)(local_648 + 8);
      lVar11 = FUN_142e219b0();
      for (; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
        if (lVar10 == lVar11) {
          bVar6 = true;
          goto LAB_140776eb3;
        }
      }
      bVar6 = false;
LAB_140776eb3:
      lVar10 = 0;
      if (bVar6) {
        lVar10 = local_648;
      }
    }
    lVar10 = FUN_142c6f8e0(lVar10,1);
    if (lVar10 != 0) {
      lVar11 = UAnimMontage::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        lVar11 = *(longlong *)(lVar10 + 0x80);
        cVar2 = *(char *)(param_1 + 0x8e8);
        lVar13 = (longlong)*(int *)(lVar10 + 0x88) * 0xa8 + lVar11;
        for (; lVar11 != lVar13; lVar11 = lVar11 + 0xa8) {
          lVar18 = *(longlong *)(lVar11 + 0x48);
          if (lVar18 == 0) {
LAB_140776f6f:
            lVar18 = 0;
          }
          else {
            lVar14 = FUN_142df97d0();
            if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (!bVar6) goto LAB_140776f6f;
          }
          if (lVar18 != 0) {
            uVar19 = FAnimLinkableElement::GetTime(lVar11,0);
            local_6e8 = 0;
            FUN_142291830(lVar10,local_2f8,0,0);
            local_6e8 = 0;
            FUN_142291830(lVar10,local_388,0,*(undefined4 *)(lVar10 + 0x90));
            local_6e8 = 0;
            FUN_142291830(lVar10,local_358,0,uVar19);
            uVar8 = FUN_1407cac20(param_1,&local_6c0);
            local_69c = uStack_374;
            local_6a0 = local_378;
            local_558 = local_378;
            uStack_554 = uStack_374;
            uStack_550 = uStack_370;
            uStack_54c = uStack_36c;
            local_68c = uStack_344;
            local_698 = uStack_370;
            local_628 = *(float *)(param_1 + 0x210);
            fStack_624 = *(float *)(param_1 + 0x214);
            fStack_620 = *(float *)(param_1 + 0x218);
            fStack_61c = *(float *)(param_1 + 0x21c);
            auVar4._4_4_ = -(uint)(*(float *)(param_1 + 0x254) != fStack_624);
            auVar4._0_4_ = -(uint)(*(float *)(param_1 + 0x250) != local_628);
            auVar4._8_4_ = -(uint)(*(float *)(param_1 + 600) != fStack_620);
            auVar4._12_4_ = -(uint)(*(float *)(param_1 + 0x25c) != fStack_61c);
            iVar9 = movmskps(uVar8,auVar4);
            local_690 = local_348;
            local_548 = local_348;
            uStack_544 = uStack_344;
            uStack_540 = uStack_340;
            uStack_53c = uStack_33c;
            local_688 = uStack_340;
            if (iVar9 != 0) {
              *(float *)(param_1 + 0x250) = local_628;
              *(float *)(param_1 + 0x254) = fStack_624;
              *(float *)(param_1 + 600) = fStack_620;
              *(float *)(param_1 + 0x25c) = fStack_61c;
              puVar15 = (undefined8 *)FQuat::Rotator(&local_628,local_588);
              *(undefined8 *)(param_1 + 0x260) = *puVar15;
              *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(puVar15 + 1);
            }
            local_6b0 = *(undefined8 *)(param_1 + 0x260);
            local_6a8 = *(undefined4 *)(param_1 + 0x268);
            if (cVar2 == '\x01') {
              lVar11 = FUN_1407cb7a0(param_1,local_2c8);
              fVar22 = *(float *)(lVar11 + 0x10);
              fVar21 = *(float *)(lVar11 + 0x14);
              fVar20 = *(float *)(lVar11 + 0x18);
              uStack_52c = *(undefined4 *)(lVar11 + 0x1c);
              local_538 = fVar22;
              fStack_534 = fVar21;
              fStack_530 = fVar20;
            }
            else if ((byte)(cVar2 - 2U) < 2) {
              fVar22 = *(float *)(param_1 + 0x220);
              fVar21 = *(float *)(param_1 + 0x224);
              fVar20 = *(float *)(param_1 + 0x228);
              uStack_51c = *(undefined4 *)(param_1 + 0x22c);
              local_528 = fVar22;
              fStack_524 = fVar21;
              fStack_520 = fVar20;
            }
            else {
              pfVar16 = (float *)FRotator::RotateVector(&local_6b0,local_57c,&local_6a0);
              fVar22 = local_6c0 - *pfVar16;
              fVar21 = local_6bc - pfVar16[1];
              fVar20 = local_6b8 - pfVar16[2];
            }
            pfVar16 = (float *)FRotator::RotateVector(&local_6b0,local_570,&local_690);
            auVar5._4_4_ = local_6bc;
            auVar5._0_4_ = local_6c0;
            auVar5._8_4_ = local_6b8;
            local_6d8 = fVar22 + *pfVar16;
            fStack_6d4 = fVar21 + pfVar16[1];
            local_6d0 = fVar20 + pfVar16[2];
            local_670 = local_6a8;
            local_678 = local_6b0;
            if ((byte)(cVar2 - 1U) < 2) {
              FUN_142c8c8f0(local_298);
              local_3f8 = 0;
              local_3ec = 0;
              local_3e0 = DAT_1468b5da8;
              local_39c = DAT_1468b5d98;
              local_3f0 = 0x3f800000;
              local_438 = local_658;
              local_428 = (longlong *)_DAT_1468b5b70;
              uStack_420 = uRam00000001468b5b78;
              local_418._4_4_ = uRam00000001468b5b84;
              local_418._0_4_ = _DAT_1468b5b80;
              local_418._8_4_ = uRam00000001468b5b88;
              local_418._12_4_ = uRam00000001468b5b8c;
              local_408._4_4_ = uRam00000001468b5b94;
              local_408._0_4_ = _DAT_1468b5b90;
              local_408._8_4_ = uRam00000001468b5b98;
              local_408._12_4_ = uRam00000001468b5b9c;
              local_3e8 = DAT_1468b5da0;
              local_3dc = 0;
              local_3d8 = _DAT_1468b5b70;
              uStack_3d0 = uRam00000001468b5b78;
              local_3c8._4_4_ = uRam00000001468b5b84;
              local_3c8._0_4_ = _DAT_1468b5b80;
              local_3c8._8_4_ = uRam00000001468b5b88;
              local_3c8._12_4_ = uRam00000001468b5b8c;
              local_3b8._4_4_ = uRam00000001468b5b94;
              local_3b8._0_4_ = _DAT_1468b5b90;
              local_3b8._8_4_ = uRam00000001468b5b98;
              local_3b8._12_4_ = uRam00000001468b5b9c;
              local_3a8 = 0;
              local_3a4 = _DAT_1468b5d90;
              local_398 = 1;
              local_430 = lVar10;
              FRotator::Quaternion(&local_678,&local_658);
              local_408._4_4_ = DAT_1464aa788._4_4_;
              local_408._0_4_ = (undefined4)DAT_1464aa788;
              local_408._8_4_ = DAT_1464aa790;
              local_408._12_4_ = 0;
              local_428 = local_658;
              uStack_420 = uStack_650;
              auVar5._12_4_ = 0;
              local_398 = 0;
              local_3dc = 1;
              local_418 = auVar5;
              FRotator::Quaternion(&local_678,&local_618);
              local_3b8._4_4_ = DAT_1464aa788._4_4_;
              local_3b8._0_4_ = (undefined4)DAT_1464aa788;
              local_3b8._8_4_ = DAT_1464aa790;
              local_3b8._12_4_ = 0;
              local_3d8 = local_618;
              uStack_3d0 = uStack_610;
              local_3c8._4_4_ = fVar21;
              local_3c8._0_4_ = fVar22;
              local_3c8._8_4_ = fVar20;
              local_3c8._12_4_ = 0;
              FUN_142ca44b0(local_298,&local_438);
              FUN_142c90170(local_298,uVar19);
              FUN_142ca29d0(local_298,local_328,local_27c);
              local_6d8 = local_318;
              local_518 = local_318;
              fStack_514 = fStack_314;
              fStack_510 = fStack_310;
              uStack_50c = uStack_30c;
              local_6d0 = fStack_310;
              fStack_6d4 = fStack_314;
              if (local_c8 != 0) {
                FMemory::Free();
              }
            }
            local_668 = 0;
            local_660 = 0;
            FUN_142f89a30(&local_608);
            local_608 = CONCAT44(fStack_6d4,local_6d8);
            local_5e8 = *(undefined8 *)(param_4 + 0x30);
            uStack_5e0 = *(undefined8 *)(param_4 + 0x38);
            local_5fc = *(float *)(param_4 + 0x24) + *(float *)(param_4 + 0x24);
            local_5c8 = *(undefined8 *)(param_4 + 0x50);
            uStack_5c0 = *(undefined8 *)(param_4 + 0x58);
            local_600 = local_6d0;
            local_598 = *(undefined8 *)(param_4 + 0x80);
            local_5a8 = *(undefined4 *)(param_4 + 0x70);
            uStack_5a4 = *(undefined4 *)(param_4 + 0x74);
            uStack_5a0 = *(undefined4 *)(param_4 + 0x78);
            uStack_59c = *(undefined4 *)(param_4 + 0x7c);
            local_5f8 = *(undefined8 *)(param_4 + 0x20);
            uStack_5f0 = *(undefined8 *)(param_4 + 0x28);
            local_5d8 = *(undefined8 *)(param_4 + 0x40);
            uStack_5d0 = *(undefined8 *)(param_4 + 0x48);
            local_5b8 = *(undefined4 *)(param_4 + 0x60);
            uStack_5b4 = *(undefined4 *)(param_4 + 100);
            uStack_5b0 = *(undefined4 *)(param_4 + 0x68);
            uStack_5ac = *(undefined4 *)(param_4 + 0x6c);
            uVar7 = FUN_142fae610(&local_608,&local_668,0);
            if (local_640 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_640 + 1;
              lVar10 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_640)(local_640);
                LOCK();
                piVar1 = (int *)((longlong)local_640 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*local_640 + 8))(local_640,1);
                }
              }
            }
            FUN_142c63c50(local_508);
            return uVar7;
          }
        }
      }
    }
    if (local_640 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_640 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_640)(local_640);
        LOCK();
        piVar1 = (int *)((longlong)local_640 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_640 + 8))(local_640,1);
        }
      }
    }
  }
LAB_140776fbd:
  FUN_142c63c50(local_508);
  return 1;
}



// FUNCTION 1407775b0 HandleOnTextChanged body=12 status=ok
// SIG undefined HandleOnTextChanged(void)

void UEditableText::HandleOnTextChanged(longlong param_1)

{
  FUN_14077f980(param_1 + 0x478);
  return;
}



// FUNCTION 1407775c0 FUN_1407775c0 body=42 status=ok
// SIG undefined FUN_1407775c0(void)

void FUN_1407775c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140778bd0(param_1 + -0x5f8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001407775e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x38) + 0x50))(lVar1 + 0x38);
    return;
  }
  return;
}



// FUNCTION 1407775f0 FUN_1407775f0 body=51 status=ok
// SIG undefined FUN_1407775f0(void)

void FUN_1407775f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140778bd0(param_1 + -0x5f8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140777619. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x38) + 0x48))((longlong *)(lVar1 + 0x38),param_2);
    return;
  }
  return;
}



// FUNCTION 140777630 FUN_140777630 body=90 status=ok
// SIG undefined FUN_140777630(void)

void FUN_140777630(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_18 [16];
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x400))(param_1,local_18);
  lVar1 = *plVar2;
  param_1[0x3e] = lVar1;
  plVar2 = (longlong *)plVar2[1];
  param_1[0x3f] = (longlong)plVar2;
  plVar3 = plVar2;
  if (lVar1 == 0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    if (lVar1 == 0) {
      plVar2 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014077767d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0xa0))();
    return;
  }
  return;
}



// FUNCTION 140777690 FUN_140777690 body=50 status=ok
// SIG undefined FUN_140777690(void)

undefined8 FUN_140777690(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140778bd0(param_1 + -0x5f8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001407776b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x38) + 0x28))(lVar1 + 0x38);
    return uVar2;
  }
  return 0xbf800000;
}



// FUNCTION 1407776d0 FUN_1407776d0 body=196 status=ok
// SIG undefined FUN_1407776d0(void)

void FUN_1407776d0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_142dc8e50();
  plVar2 = *(longlong **)(param_1 + 0x7e8);
  plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x7f0) * 0x1e;
  for (; plVar2 != plVar3; plVar2 = plVar2 + 0x1e) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if (0 < *(int *)(param_1 + 0x7f0)) {
    lVar1 = (longlong)*(int *)(param_1 + 0x7f8) * 0xf0 + *(longlong *)(param_1 + 0x7e8);
    *(undefined1 *)(param_1 + 0x7d8) = *(undefined1 *)(lVar1 + 8);
    *(undefined1 *)(param_1 + 0x808) = *(undefined1 *)(lVar1 + 0xb4);
    *(undefined1 *)(param_1 + 0x80a) = *(undefined1 *)(lVar1 + 0xd2);
    *(undefined1 *)(param_1 + 0x80b) = *(undefined1 *)(lVar1 + 0xd3);
    *(undefined8 *)(param_1 + 0x6f8) = *(undefined8 *)(lVar1 + 0x90);
    *(undefined8 *)(param_1 + 0x800) = *(undefined8 *)(lVar1 + 0xc0);
  }
  return;
}



// FUNCTION 1407777a0 FUN_1407777a0 body=119 status=ok
// SIG undefined FUN_1407777a0(void)

void FUN_1407777a0(longlong param_1)

{
  FUN_14233a670();
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FUN_140483870(*(longlong *)(param_1 + 0x210) + 0x268,param_1);
  }
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  return;
}



// FUNCTION 140777820 FUN_140777820 body=100 status=ok
// SIG undefined FUN_140777820(void)

void FUN_140777820(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_142dcad70();
  if ((*(longlong *)(param_1 + 0xa8) != 0) || (*(char *)(param_1 + 0xb0) != '\0')) {
    lVar1 = FUN_14077b890(param_1,param_2);
    if (lVar1 != 0) {
      FUN_142fb4780(lVar1,*(undefined1 *)(param_1 + 0xb0));
      FUN_142fb45e0(lVar1,*(undefined8 *)(param_1 + 0xa8));
    }
  }
  return;
}



// FUNCTION 140777890 FUN_140777890 body=52 status=ok
// SIG undefined FUN_140777890(void)

int FUN_140777890(undefined4 param_1,undefined8 param_2,undefined8 *param_3)

{
  float fVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = *param_3;
  fVar1 = (float)FUN_142de77e0(param_1,param_2,0,local_res18);
  return (int)ROUND(fVar1 * 2.0 + 0.5) >> 1;
}



// FUNCTION 1407778d0 FUN_1407778d0 body=86 status=ok
// SIG undefined FUN_1407778d0(void)

void FUN_1407778d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_142dcba10();
  if ((*(longlong *)(param_1 + 0xa8) != 0) || (*(char *)(param_1 + 0xb0) != '\0')) {
    lVar1 = FUN_14077b890(param_1,param_2);
    if (lVar1 != 0) {
      FUN_142f97fe0(lVar1);
      FUN_142fb0b20(lVar1);
    }
  }
  return;
}



// FUNCTION 140777930 FUN_140777930 body=380 status=ok
// SIG undefined FUN_140777930(void)

void FUN_140777930(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 local_28;
  longlong local_20;
  
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x298))();
  }
  if ((*(longlong *)(param_1 + 0x98) != 0) && (*(longlong *)(param_1 + 0xa0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa0) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      plVar2 = *(longlong **)(param_1 + 0xa0);
      plVar6 = plVar2;
      plVar7 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar6 = (longlong *)0x0, plVar7 = (longlong *)0x0, !bVar8) {
          LOCK();
          bVar8 = iVar5 == (int)plVar2[1];
          if (bVar8) {
            *(int *)(plVar2 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar8) {
            plVar6 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar7 = *(longlong **)(param_1 + 0x98);
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar8 = iVar5 == 0;
          if (bVar8) {
            *(int *)(plVar2 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      lVar3 = plVar7[3];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      if (lVar3 != 0) {
        local_20 = *(longlong *)(param_1 + 0xa0);
        local_28 = 0;
        if (local_20 != 0) {
          LOCK();
          iVar5 = *(int *)(local_20 + 8);
          bVar8 = iVar5 == 0;
          if (bVar8) {
            *(int *)(local_20 + 8) = 0;
            iVar5 = 0;
          }
          UNLOCK();
          while (!bVar8) {
            LOCK();
            bVar8 = iVar5 == *(int *)(local_20 + 8);
            if (bVar8) {
              *(int *)(local_20 + 8) = iVar5 + 1;
            }
            UNLOCK();
            if (bVar8) {
              if (local_20 != 0) {
                local_28 = *(undefined8 *)(param_1 + 0x98);
              }
              goto LAB_140777a71;
            }
            LOCK();
            iVar5 = *(int *)(local_20 + 8);
            bVar8 = iVar5 == 0;
            if (bVar8) {
              *(int *)(local_20 + 8) = 0;
              iVar5 = 0;
            }
            UNLOCK();
          }
          local_20 = 0;
        }
LAB_140777a71:
        FUN_142c84750(lVar3,&local_28);
      }
    }
  }
  TBaseDelegate<void,FUniqueNetId_const_&,bool_const_>::ExecuteIfBound(param_1 + 0x70,param_1,0);
  UGameplayTask::EndTask(param_1);
  UGameplayTask::EndTask(param_1);
  return;
}



// FUNCTION 140777ab0 FUN_140777ab0 body=372 status=ok
// SIG undefined FUN_140777ab0(void)

void FUN_140777ab0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 local_28;
  longlong local_20;
  
  if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x298))();
  }
  if ((*(longlong *)(param_1 + 0x90) != 0) && (*(longlong *)(param_1 + 0x98) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x98) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      plVar2 = *(longlong **)(param_1 + 0x98);
      plVar6 = plVar2;
      plVar7 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar2[1];
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(plVar2 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar6 = (longlong *)0x0, plVar7 = (longlong *)0x0, !bVar8) {
          LOCK();
          bVar8 = iVar5 == (int)plVar2[1];
          if (bVar8) {
            *(int *)(plVar2 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar8) {
            plVar6 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar7 = *(longlong **)(param_1 + 0x90);
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar8 = iVar5 == 0;
          if (bVar8) {
            *(int *)(plVar2 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      lVar3 = plVar7[3];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      if (lVar3 != 0) {
        local_20 = *(longlong *)(param_1 + 0x98);
        local_28 = 0;
        if (local_20 != 0) {
          LOCK();
          iVar5 = *(int *)(local_20 + 8);
          bVar8 = iVar5 == 0;
          if (bVar8) {
            *(int *)(local_20 + 8) = 0;
            iVar5 = 0;
          }
          UNLOCK();
          while (!bVar8) {
            LOCK();
            bVar8 = iVar5 == *(int *)(local_20 + 8);
            if (bVar8) {
              *(int *)(local_20 + 8) = iVar5 + 1;
            }
            UNLOCK();
            if (bVar8) {
              if (local_20 != 0) {
                local_28 = *(undefined8 *)(param_1 + 0x90);
              }
              goto LAB_140777bf1;
            }
            LOCK();
            iVar5 = *(int *)(local_20 + 8);
            bVar8 = iVar5 == 0;
            if (bVar8) {
              *(int *)(local_20 + 8) = 0;
              iVar5 = 0;
            }
            UNLOCK();
          }
          local_20 = 0;
        }
LAB_140777bf1:
        FUN_142c84750(lVar3,&local_28);
      }
    }
  }
  TBaseDelegate<void,FUniqueNetId_const_&,bool_const_>::ExecuteIfBound(param_1 + 0x70,param_1,0);
  UGameplayTask::EndTask(param_1);
  return;
}



// FUNCTION 140777c30 FUN_140777c30 body=392 status=ok
// SIG undefined FUN_140777c30(void)

void FUN_140777c30(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 local_28;
  longlong local_20;
  
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x290))();
  }
  if (param_2 != '\0') {
    if ((*(longlong *)(param_1 + 0x98) != 0) && (*(longlong *)(param_1 + 0xa0) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0xa0) + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) {
        plVar2 = *(longlong **)(param_1 + 0xa0);
        plVar6 = plVar2;
        plVar7 = (longlong *)0x0;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar8 = iVar5 == 0;
          if (bVar8) {
            *(int *)(plVar2 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
          while (plVar6 = (longlong *)0x0, plVar7 = (longlong *)0x0, !bVar8) {
            LOCK();
            bVar8 = iVar5 == (int)plVar2[1];
            if (bVar8) {
              *(int *)(plVar2 + 1) = iVar5 + 1;
            }
            UNLOCK();
            if (bVar8) {
              plVar6 = plVar2;
              if (plVar2 != (longlong *)0x0) {
                plVar7 = *(longlong **)(param_1 + 0x98);
              }
              break;
            }
            LOCK();
            iVar5 = (int)plVar2[1];
            bVar8 = iVar5 == 0;
            if (bVar8) {
              *(int *)(plVar2 + 1) = 0;
              iVar5 = 0;
            }
            UNLOCK();
          }
        }
        lVar3 = plVar7[3];
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        if (lVar3 != 0) {
          local_20 = *(longlong *)(param_1 + 0xa0);
          local_28 = 0;
          if (local_20 != 0) {
            LOCK();
            iVar5 = *(int *)(local_20 + 8);
            bVar8 = iVar5 == 0;
            if (bVar8) {
              *(int *)(local_20 + 8) = 0;
              iVar5 = 0;
            }
            UNLOCK();
            while (!bVar8) {
              LOCK();
              bVar8 = iVar5 == *(int *)(local_20 + 8);
              if (bVar8) {
                *(int *)(local_20 + 8) = iVar5 + 1;
              }
              UNLOCK();
              if (bVar8) {
                if (local_20 != 0) {
                  local_28 = *(undefined8 *)(param_1 + 0x98);
                }
                goto LAB_140777d77;
              }
              LOCK();
              iVar5 = *(int *)(local_20 + 8);
              bVar8 = iVar5 == 0;
              if (bVar8) {
                *(int *)(local_20 + 8) = 0;
                iVar5 = 0;
              }
              UNLOCK();
            }
            local_20 = 0;
          }
LAB_140777d77:
          FUN_142c84750(lVar3,&local_28);
        }
      }
    }
    TBaseDelegate<void,FUniqueNetId_const_&,bool_const_>::ExecuteIfBound(param_1 + 0x70,param_1,0);
    UGameplayTask::EndTask(param_1);
  }
  FUN_142b78fd0(param_1,param_2);
  return;
}



// FUNCTION 140777dc0 FUN_140777dc0 body=384 status=ok
// SIG undefined FUN_140777dc0(void)

void FUN_140777dc0(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 local_28;
  longlong local_20;
  
  if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x290))();
  }
  if (param_2 != '\0') {
    if ((*(longlong *)(param_1 + 0x90) != 0) && (*(longlong *)(param_1 + 0x98) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x98) + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) {
        plVar2 = *(longlong **)(param_1 + 0x98);
        plVar6 = plVar2;
        plVar7 = (longlong *)0x0;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar8 = iVar5 == 0;
          if (bVar8) {
            *(int *)(plVar2 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
          while (plVar6 = (longlong *)0x0, plVar7 = (longlong *)0x0, !bVar8) {
            LOCK();
            bVar8 = iVar5 == (int)plVar2[1];
            if (bVar8) {
              *(int *)(plVar2 + 1) = iVar5 + 1;
            }
            UNLOCK();
            if (bVar8) {
              plVar6 = plVar2;
              if (plVar2 != (longlong *)0x0) {
                plVar7 = *(longlong **)(param_1 + 0x90);
              }
              break;
            }
            LOCK();
            iVar5 = (int)plVar2[1];
            bVar8 = iVar5 == 0;
            if (bVar8) {
              *(int *)(plVar2 + 1) = 0;
              iVar5 = 0;
            }
            UNLOCK();
          }
        }
        lVar3 = plVar7[3];
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        if (lVar3 != 0) {
          local_20 = *(longlong *)(param_1 + 0x98);
          local_28 = 0;
          if (local_20 != 0) {
            LOCK();
            iVar5 = *(int *)(local_20 + 8);
            bVar8 = iVar5 == 0;
            if (bVar8) {
              *(int *)(local_20 + 8) = 0;
              iVar5 = 0;
            }
            UNLOCK();
            while (!bVar8) {
              LOCK();
              bVar8 = iVar5 == *(int *)(local_20 + 8);
              if (bVar8) {
                *(int *)(local_20 + 8) = iVar5 + 1;
              }
              UNLOCK();
              if (bVar8) {
                if (local_20 != 0) {
                  local_28 = *(undefined8 *)(param_1 + 0x90);
                }
                goto LAB_140777f07;
              }
              LOCK();
              iVar5 = *(int *)(local_20 + 8);
              bVar8 = iVar5 == 0;
              if (bVar8) {
                *(int *)(local_20 + 8) = 0;
                iVar5 = 0;
              }
              UNLOCK();
            }
            local_20 = 0;
          }
LAB_140777f07:
          FUN_142c84750(lVar3,&local_28);
        }
      }
    }
    TBaseDelegate<void,FUniqueNetId_const_&,bool_const_>::ExecuteIfBound(param_1 + 0x70,param_1,0);
  }
  FUN_142b78fd0(param_1,param_2);
  return;
}



// FUNCTION 140777f40 FUN_140777f40 body=275 status=ok
// SIG undefined FUN_140777f40(void)

int * FUN_140777f40(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0x380 + *param_1) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x380 + 0x378 + *param_1);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 140778060 FUN_140778060 body=85 status=ok
// SIG undefined FUN_140778060(void)

undefined8 FUN_140778060(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if ((lVar1 == 0) || (cVar2 = UAbilityTask::IsWaitingOnRemotePlayerdata(lVar1), cVar2 != '\0')) {
    return 0;
  }
  lVar3 = FUN_140765020(*(undefined8 *)(lVar1 + 0x150));
  if ((lVar3 == 0) && (lVar3 = FUN_140765020(*(undefined8 *)(lVar1 + 0x118)), lVar3 == 0)) {
    return 0;
  }
  uVar4 = AIndianaUI::GetArmorComponent(lVar3);
  return uVar4;
}



// FUNCTION 1407780c0 FUN_1407780c0 body=1492 status=ok
// SIG undefined FUN_1407780c0(void)

void FUN_1407780c0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  char local_res18 [8];
  int local_res20 [2];
  float local_138;
  float local_134;
  float local_130;
  longlong local_128;
  undefined8 local_120;
  int local_118;
  int local_114;
  int local_110 [2];
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float fStack_f4;
  float local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  int *local_d0;
  int *local_c8;
  char *local_c0;
  int *local_b8;
  
  uVar9 = FWeakObjectPtr::Get(param_2 + 0x34);
  lVar10 = FUN_140765020(uVar9);
  if (lVar10 == 0) {
    return;
  }
  lVar2 = *(longlong *)(lVar10 + 0x618);
  if (lVar2 == 0) {
    return;
  }
  local_138 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x14);
  if (local_138 <= 0.0) {
    local_138 = 500.0;
  }
  local_134 = local_138;
  local_130 = local_138;
  fVar17 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x1a);
  pcVar11 = (char *)FUN_142deca50(lVar2,(char)param_1[0x13]);
  local_108 = fVar17;
  local_104 = fVar17;
  local_100 = fVar17;
  if (*pcVar11 == '\0') {
    FUN_142dec9c0(lVar2,&local_e8,(char)param_1[0x13]);
    local_108 = uStack_e0._4_4_ - (float)local_e8;
    local_104 = (float)local_d8 - local_e8._4_4_;
    if (fVar17 < local_108) {
      local_138 = local_138 * (local_108 / fVar17);
    }
    local_100 = local_d8._4_4_ - (float)uStack_e0;
    if (fVar17 < local_104) {
      local_134 = local_134 * (local_104 / fVar17);
    }
  }
  if ((char)param_1[0x20] == '\x01') {
    local_res18[0] = false;
  }
  else if ((char)param_1[0x20] == '\0') {
    local_res18[0] = true;
  }
  else if (*(longlong *)(lVar10 + 0x5c8) == 0) {
    local_res18[0] = true;
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(lVar10 + 0x5c8) + 0x900);
    if (plVar1 == (longlong *)0x0) {
      local_res18[0] = true;
    }
    else {
      cVar7 = (**(code **)(*plVar1 + 0xc80))();
      local_res18[0] = cVar7 == '\0';
    }
  }
  iVar14 = 0;
  if ((bool)local_res18[0] == false) {
    *(undefined1 *)((longlong)param_1 + 0x8b) = 3;
    param_1[0xe] = 0;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x8b) = 1;
    *(float *)(param_1 + 0xe) = local_100;
    *(float *)((longlong)param_1 + 0x74) = local_100;
  }
  local_e8 = local_110;
  uStack_e0 = &local_108;
  local_d8 = &local_138;
  local_d0 = &local_114;
  local_c8 = &local_118;
  local_c0 = local_res18;
  local_b8 = local_res20;
  FUN_140773740(&local_e8);
  if (local_res20[0] < 0x10) {
    fVar17 = (float)local_res20[0] * 0.0625;
  }
  else {
    if (local_res20[0] < 0x1f5) goto LAB_140778363;
    fVar17 = (float)local_res20[0] * 0.002;
  }
  local_138 = local_138 * fVar17;
  local_134 = local_134 * fVar17;
  local_130 = local_130 * fVar17;
  FUN_140773740(&local_e8);
LAB_140778363:
  local_128 = 0;
  local_120 = 0;
  if (0 < local_res20[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (&local_128);
  }
  fVar17 = *(float *)(lVar2 + 0x220);
  fVar3 = *(float *)(lVar2 + 0x224);
  fVar4 = *(float *)(lVar2 + 0x228);
  fVar18 = (float)(local_110[0] / 2) * local_138;
  fVar19 = (float)(local_114 / 2) * local_134;
  fVar20 = (float)(local_118 / 2) * local_130;
  lVar10 = FUN_142deca50(lVar2,(char)param_1[0x13]);
  if ((*(float *)(lVar10 + 4) <= 0.0001) || (*(int *)(lVar10 + 0x18) != 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  iVar13 = local_110[0];
  iVar8 = local_118;
  iVar12 = local_114;
  if (0 < local_110[0]) {
    do {
      iVar15 = 0;
      fVar22 = (float)iVar14 * local_138 + (fVar17 - fVar18);
      if (0 < iVar12) {
        do {
          iVar13 = 0;
          fVar21 = (float)iVar15 * local_134 + (fVar3 - fVar19);
          if (0 < iVar8) {
            do {
              local_f0 = (float)iVar13 * local_130 + (fVar4 - fVar20);
              local_f8 = fVar22;
              fStack_f4 = fVar21;
              if ((!bVar5) ||
                 (cVar7 = FUN_142df4500(lVar2,(char)param_1[0x13],&local_f8,0,0x3f800000),
                 cVar7 != '\0')) {
                uVar6 = local_120;
                local_e8 = (int *)CONCAT44(fStack_f4,local_f8);
                local_d8 = (float *)0x0;
                lVar10 = (longlong)(int)local_120;
                uStack_e0 = (float *)CONCAT44(uStack_e0._4_4_,local_f0);
                iVar8 = (int)local_120 + 1;
                local_120 = CONCAT44(local_120._4_4_,iVar8);
                if (local_120._4_4_ < iVar8) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_128,uVar6 & 0xffffffff);
                }
                plVar1 = (longlong *)(local_128 + lVar10 * 0x18);
                *plVar1 = (longlong)local_e8;
                plVar1[1] = (longlong)uStack_e0;
                *(float **)(local_128 + 0x10 + lVar10 * 0x18) = local_d8;
              }
              iVar13 = iVar13 + 1;
              iVar8 = local_118;
              iVar12 = local_114;
            } while (iVar13 < local_118);
          }
          iVar15 = iVar15 + 1;
          iVar13 = local_110[0];
        } while (iVar15 < iVar12);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar13);
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_128,param_2);
  iVar14 = (int)local_120 + -1;
  if (-1 < iVar14) {
    lVar10 = (longlong)iVar14 * 0x18;
    lVar16 = (longlong)(int)local_120 * 0x18;
    do {
      cVar7 = FUN_142df43c0(lVar2,(char)param_1[0x13],local_128 + lVar10);
      if (cVar7 == '\0') {
        iVar13 = ((int)local_120 - iVar14) + -1;
        if (iVar13 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar10 + local_128),(void *)(lVar16 + local_128),
                     (longlong)iVar13 * 0x18);
        }
        local_120 = CONCAT44(local_120._4_4_,(int)local_120 + -1);
        TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(&local_128);
      }
      lVar16 = lVar16 + -0x18;
      lVar10 = lVar10 + -0x18;
      iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
  }
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_128,param_2);
  if (local_128 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407786a0 FUN_1407786a0 body=431 status=ok
// SIG undefined FUN_1407786a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1407786a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 auStack_5f68 [32];
  undefined1 local_5f48 [24320];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_5f68;
  uVar2 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  lVar1 = FUN_140765020(*(undefined8 *)(param_1 + 0x118));
  if (((lVar1 != 0) && (lVar1 = FUN_14075f5e0(lVar1), lVar1 != 0)) &&
     (lVar1 = UCableComponent::GetAttachedActor(lVar1), lVar1 != 0)) {
    uVar2 = FUN_1407cb580(lVar1);
    uVar2 = FUN_140771b70(param_1,param_2,uVar2);
  }
  puVar5 = local_5f48;
  if (local_48 != (undefined1 *)0x0) {
    puVar5 = local_48;
  }
  if ((int)local_40 != 0) {
    puVar3 = (undefined8 *)(puVar5 + 0x4b0);
    iVar4 = (int)local_40;
    do {
      if (puVar3[1] != 0) {
        if (puVar3[-1] == 0) {
          *(longlong *)*puVar3 = 0;
        }
        else {
          *(longlong *)*puVar3 = puVar3[-1];
          *(undefined8 *)(puVar3[-1] + 8) = *puVar3;
          puVar3[-1] = 0;
        }
        *puVar3 = 0;
        puVar3[1] = 0;
      }
      if (puVar3[-4] != 0) {
        FMemory::Free();
      }
      if (puVar3[-8] != 0) {
        FMemory::Free();
      }
      if (puVar3[-10] != 0) {
        FMemory::Free();
      }
      puVar3[-0xb] = &PTR_FUN_143fce298;
      FUN_1404571d0(puVar5);
      puVar5 = puVar5 + 0x4c0;
      puVar3 = puVar3 + 0x98;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_48 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 140778850 FUN_140778850 body=886 status=ok
// SIG undefined FUN_140778850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140778850(longlong *param_1,undefined8 param_2,float param_3,int param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1d8 [32];
  char local_1b8;
  undefined1 local_1b7 [7];
  undefined8 *local_1b0;
  float local_1a8;
  undefined8 local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 *local_178;
  undefined8 local_170;
  undefined8 *local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined8 local_150;
  float local_148;
  float local_13c;
  undefined1 local_138 [160];
  undefined1 *local_98;
  undefined8 local_90;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_160 = param_1;
  local_158 = param_2;
  FGenericTeamId::GetTeamIdentifier(&local_1b8,param_1);
  if ((param_1 == (longlong *)0x0) || ((local_1b8 == DAT_146690f0c && (param_4 < 2)))) {
    uVar10 = 0;
  }
  else {
    lVar1 = param_1[0x2d];
    if (lVar1 == 0) {
      local_1b0 = (undefined8 *)_DAT_1468b5d90;
      local_1a8 = DAT_1468b5d98;
    }
    else {
      local_1b0 = *(undefined8 **)(lVar1 + 0x220);
      local_1a8 = *(float *)(lVar1 + 0x228);
    }
    uVar10 = 0;
    local_198 = local_1a8;
    local_1a0 = local_1b0;
    local_98 = (undefined1 *)0x0;
    local_90 = 0;
    local_190 = (**(code **)(*param_1 + 0x148))(param_1);
    local_188 = &local_190;
    local_180 = FUN_14073d6c0(&local_190,DAT_14685c3b0);
    local_178 = &local_190;
    local_168 = local_188;
    local_170 = 0;
    puVar7 = (undefined8 *)FUN_14073d6c0(local_188,local_180);
    local_1b0 = (undefined8 *)FUN_14073d6c0(local_178,local_170);
    fVar4 = local_198;
    if (puVar7 != local_1b0) {
      fVar3 = local_1a0._4_4_;
      fVar2 = (float)local_1a0;
      do {
        lVar1 = puVar7[2];
        lVar13 = *(longlong *)(lVar1 + 0x168);
        if (lVar13 == 0) {
          local_148 = DAT_1468b5d98;
          puVar8 = &local_150;
          local_150 = _DAT_1468b5d90;
        }
        else {
          puVar8 = &local_1a0;
          local_198 = *(float *)(lVar13 + 0x228);
          local_1a0 = *(undefined8 *)(lVar13 + 0x220);
        }
        local_13c = *(float *)(puVar8 + 1);
        fVar14 = fVar2 - (float)*puVar8;
        fVar15 = fVar3 - (float)((ulonglong)*puVar8 >> 0x20);
        if (fVar15 * fVar15 + fVar14 * fVar14 + (fVar4 - local_13c) * (fVar4 - local_13c) <=
            param_3 * param_3) {
          plVar9 = (longlong *)SMenuAnchor::GetChildren(lVar1);
          plVar12 = (longlong *)*plVar9;
          plVar9 = plVar12 + (int)plVar9[1];
          for (; plVar12 != plVar9; plVar12 = plVar12 + 1) {
            if (*plVar12 != 0) {
              FGenericTeamId::GetTeamIdentifier(local_1b7,*(undefined8 *)(*plVar12 + 0x118));
              if (PTR_FUN_146690ee0 == (undefined *)0x0) {
                iVar6 = 1;
              }
              else {
                iVar6 = (*(code *)PTR_FUN_146690ee0)(local_1b8,local_1b7[0]);
              }
              uVar5 = local_90;
              if (iVar6 <= param_4) {
                lVar13 = (longlong)(int)local_90;
                iVar6 = (int)local_90 + 1;
                local_90 = CONCAT44(local_90._4_4_,iVar6);
                if (local_90._4_4_ < iVar6) {
                  TArray<FSlateCachedFastPathRenderingData_*,TInlineAllocator<20,TSizedDefaultAllocator<32>_>_>
                  ::ResizeGrow(local_138,uVar5 & 0xffffffff);
                }
                puVar11 = local_138;
                if (local_98 != (undefined1 *)0x0) {
                  puVar11 = local_98;
                }
                *(longlong *)(puVar11 + lVar13 * 8) = lVar1;
              }
            }
          }
        }
        puVar7 = (undefined8 *)FUN_14073d6c0(local_168,*puVar7);
        param_1 = local_160;
        param_2 = local_158;
      } while (puVar7 != local_1b0);
    }
    if (0 < (int)local_90) {
      uVar10 = FUN_1407718d0(param_1,param_2,local_138);
    }
    if (local_98 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return uVar10;
}



// FUNCTION 140778bd0 FUN_140778bd0 body=110 status=ok
// SIG undefined FUN_140778bd0(void)

longlong FUN_140778bd0(void)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = FUN_1407cb700();
  if (lVar2 == 0) {
    return 0;
  }
  uVar3 = FUN_14079cc20();
  lVar2 = FUN_1407cb740(lVar2,uVar3);
  if (lVar2 != 0) {
    lVar4 = FUN_14079cc20();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
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



// FUNCTION 140778c40 FUN_140778c40 body=8 status=ok
// SIG undefined FUN_140778c40(void)

undefined8 FUN_140778c40(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x618);
}



// FUNCTION 140778c50 FUN_140778c50 body=27 status=ok
// SIG undefined FUN_140778c50(void)

void FUN_140778c50(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  *param_2 = *(undefined4 *)(param_1 + 0x8a4);
  *param_3 = *(undefined4 *)(param_1 + 0x8a0);
  *param_4 = *(undefined4 *)(param_1 + 0x8a8);
  return;
}



// FUNCTION 140778ce0 FUN_140778ce0 body=541 status=ok
// SIG undefined FUN_140778ce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140778ce0(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_448 [32];
  undefined8 local_428;
  undefined4 local_420;
  undefined1 local_418 [16];
  undefined1 local_408 [48];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_448;
  if ((param_2 == (longlong *)0x0) || (param_3 == (longlong *)0x0)) {
    *param_1 = DAT_14622e8b0;
    *(undefined4 *)(param_1 + 1) = DAT_14622e8b8;
    return param_1;
  }
  local_428 = 0;
  if (param_4 == 0) {
    uVar5 = FUN_142e79d90();
    lVar2 = (**(code **)(*param_3 + 0x628))(param_3,uVar5);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)FUN_142dd0240(lVar2,&local_428);
      uVar7 = (undefined4)*puVar3;
      uVar8 = (undefined4)((ulonglong)*puVar3 >> 0x20);
      uVar6 = *(undefined4 *)(puVar3 + 1);
      goto LAB_140778e28;
    }
    lVar2 = param_3[0x2d];
    if (lVar2 == 0) {
      local_428 = _DAT_1468b5d90;
      local_420 = DAT_1468b5d98;
    }
    else {
      local_428 = *(undefined8 *)(lVar2 + 0x220);
      local_420 = *(undefined4 *)(lVar2 + 0x228);
    }
    uVar7 = (undefined4)local_428;
  }
  else {
    lVar2 = FUN_1423111b0(local_408,param_3,param_4);
    local_420 = *(undefined4 *)(lVar2 + 0x18);
    uVar7 = *(undefined4 *)(lVar2 + 0x10);
  }
  uVar8 = 0;
  uVar6 = local_420;
LAB_140778e28:
  plVar4 = (longlong *)(**(code **)(*param_2 + 0x688))(param_2);
  if (((plVar4 == (longlong *)0x0) ||
      (cVar1 = (**(code **)(*plVar4 + 0x780))(plVar4), cVar1 == '\0')) &&
     (plVar4 = (longlong *)(**(code **)(*param_2 + 0x668))(param_2), plVar4 != (longlong *)0x0)) {
    uVar5 = FUN_142e79600();
    lVar2 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
    if (lVar2 != 0) {
      FUN_142dc1ad0(local_3d8);
      cVar1 = FUN_142dd0170(lVar2,param_3,local_3d8);
      if (cVar1 != '\0') {
        FUN_142dcd3a0(local_3d8,param_1,local_418);
        return param_1;
      }
    }
  }
  *param_1 = CONCAT44(uVar8,uVar7);
  *(undefined4 *)(param_1 + 1) = uVar6;
  return param_1;
}



// FUNCTION 140778f00 FUN_140778f00 body=47 status=ok
// SIG undefined FUN_140778f00(void)

undefined4 FUN_140778f00(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
    if (lVar1 == 0) {
      return 0;
    }
  }
  return *(undefined4 *)(lVar1 + 0x790);
}



// FUNCTION 140778f30 FUN_140778f30 body=644 status=ok
// SIG undefined FUN_140778f30(void)

undefined8 * FUN_140778f30(float *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 *local_res8;
  longlong local_28 [2];
  longlong local_18 [2];
  
  *param_2 = 0;
  puVar2 = &DAT_143f3eda8;
  param_2[1] = 0;
  local_res8 = param_2;
  if (*(char *)(param_1 + 1) != '\0') {
    puVar1 = (undefined8 *)FString::SanitizeFloat(local_18,(double)*param_1,1);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(local_28,L"FireConeAngle: %s",puVar3);
    FUN_140701d60(&local_res8,local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    puVar1 = (undefined8 *)FUN_142de9d00(param_1 + 2,local_18);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(local_28,L"BurstCount: %s",puVar3);
    FUN_140701d60(&local_res8,local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(char *)(param_1 + 0x44) != '\0') {
    puVar1 = (undefined8 *)FUN_142de9d00(param_1 + 0x24,local_18);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(local_28,L"BurstDelay: %s",puVar3);
    FUN_140701d60(&local_res8,local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(char *)(param_1 + 0x66) != '\0') {
    puVar1 = (undefined8 *)FUN_142de9d00(param_1 + 0x46,local_18);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(local_28,L"Accuracy: %s",puVar3);
    FUN_140701d60(&local_res8,local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(char *)(param_1 + 0x88) != '\0') {
    puVar1 = (undefined8 *)FUN_142de9d00(param_1 + 0x68,local_18);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(local_28,L"SuppressingFireTime: %s",puVar3);
    FUN_140701d60(&local_res8,local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(char *)(param_1 + 0x8b) != '\0') {
    puVar1 = (undefined8 *)FUN_142c4b1d0(param_1 + 0x89,local_18);
    if (*(int *)(puVar1 + 1) != 0) {
      puVar2 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(local_28,L"DesiredRangeOverride: %s",puVar2);
    FUN_140701d60(&local_res8,local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 1407791c0 FUN_1407791c0 body=30 status=ok
// SIG undefined FUN_1407791c0(void)

undefined8 FUN_1407791c0(longlong param_1,undefined8 param_2)

{
  FUN_142bf4db0(param_1 + 0x60,param_2,0);
  return param_2;
}



// FUNCTION 1407791e0 FUN_1407791e0 body=97 status=ok
// SIG undefined FUN_1407791e0(void)

undefined8 FUN_1407791e0(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x66;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy
            (local_18[0],
             L"Prioritizes candidates that have the specified amount (or percent) of health remaining (or consumed)."
             ,0xcc);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140779250 GetDescriptionTitle body=63 status=ok
// SIG undefined GetDescriptionTitle(void)

undefined8 UDonEnvQueryTest_Navigation::GetDescriptionTitle(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,
                      L"Scores based on the number of enemies already targeting the candidate (querier excluded)."
                     );
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140779290 FUN_140779290 body=113 status=ok
// SIG undefined FUN_140779290(void)

undefined8 FUN_140779290(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong local_28 [2];
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FName::ToString(param_1 + 0x1d8,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(local_28,L"Matches blackboard key: %s",puVar2);
  FText::FromString(param_2,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140779310 GetDescriptionTitle body=63 status=ok
// SIG undefined GetDescriptionTitle(void)

undefined8 UDonEnvQueryTest_Navigation::GetDescriptionTitle(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,
                      L"Boosts or reduces the score of a target that has been tagged by designers as such."
                     );
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140779350 FUN_140779350 body=97 status=ok
// SIG undefined FUN_140779350(void)

undefined8 FUN_140779350(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x40;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy
            (local_18[0],L"Prioritizes enemies who are being attacked by my player-master.",0x80);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1407793c0 FUN_1407793c0 body=97 status=ok
// SIG undefined FUN_1407793c0(void)

undefined8 FUN_1407793c0(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x72;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy
            (local_18[0],
             L"This test only affects pets, and greatly reduces the score if the AI is a boss or if the pet is already targeted."
             ,0xe4);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140779430 FUN_140779430 body=97 status=ok
// SIG undefined FUN_140779430(void)

undefined8 FUN_140779430(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x80;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy
            (local_18[0],
             L"This will prevent the pet from targeting things that are far away from its owner, unless the target matches the AnyDistanceTag."
             ,0x100);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1407794a0 FUN_1407794a0 body=97 status=ok
// SIG undefined FUN_1407794a0(void)

undefined8 FUN_1407794a0(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x3d;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy
            (local_18[0],L"Prioritizes enemies who are attacking a pet\'s player-master.",0x7a);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140779510 FUN_140779510 body=97 status=ok
// SIG undefined FUN_140779510(void)

undefined8 FUN_140779510(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x3a;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy
            (local_18[0],L"Prioritizes enemies who are nearby a pet\'s player-master.",0x74);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140779580 FUN_140779580 body=97 status=ok
// SIG undefined FUN_140779580(void)

undefined8 FUN_140779580(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x54;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy
            (local_18[0],
             L"Prioritizes candidates that are out in the open as opposed to occluded by geometry.",
             0xa8);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1407795f0 FUN_1407795f0 body=97 status=ok
// SIG undefined FUN_1407795f0(void)

undefined8 FUN_1407795f0(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x2a;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Prioritizes candidates that have hurt me.",0x54);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140779660 GetDescriptionTitle body=63 status=ok
// SIG undefined GetDescriptionTitle(void)

undefined8 UDonEnvQueryTest_Navigation::GetDescriptionTitle(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"Prioritizes candidates who have been determined to be a threat.");
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1407796a0 FUN_1407796a0 body=97 status=ok
// SIG undefined FUN_1407796a0(void)

undefined8 FUN_1407796a0(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x4d;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy
            (local_18[0],
             L"Prioritizes candidates who have triggered particular Sense stimuli recently.",0x9a);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140779710 FUN_140779710 body=4274 status=ok
// SIG undefined FUN_140779710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140779710(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  char *pcVar13;
  longlong lVar14;
  undefined1 auStack_718 [32];
  undefined2 local_6f8;
  int local_6e8;
  undefined8 local_6e0;
  undefined4 *local_6d8;
  undefined4 *puStack_6d0;
  undefined4 *local_6c8;
  ulonglong *puStack_6c0;
  longlong local_6b8;
  undefined4 *local_6a8;
  undefined4 *puStack_6a0;
  undefined4 *local_698;
  undefined8 local_690;
  longlong local_688 [4];
  undefined4 *local_668;
  undefined4 *puStack_660;
  longlong local_658;
  longlong local_650;
  longlong local_648;
  undefined1 local_640 [8];
  longlong *local_638;
  undefined8 local_628;
  longlong local_620;
  undefined8 local_618;
  longlong local_610;
  undefined8 local_608;
  longlong local_600;
  undefined8 local_5f8;
  longlong local_5f0;
  undefined8 local_5e8;
  longlong local_5e0;
  undefined1 local_5d8 [16];
  undefined4 *local_5c8;
  undefined4 *puStack_5c0;
  undefined1 local_5b8 [16];
  undefined4 *local_5a8;
  ulonglong *puStack_5a0;
  undefined1 local_598 [16];
  undefined4 *local_588;
  undefined4 *puStack_580;
  undefined1 local_578 [16];
  undefined4 *local_568;
  undefined4 *puStack_560;
  undefined1 local_558 [16];
  undefined1 local_548 [8];
  longlong *local_540;
  undefined1 local_530 [8];
  longlong *local_528;
  undefined1 local_518 [8];
  longlong *local_510;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined1 local_4e8 [8];
  longlong *local_4e0;
  undefined1 local_4d0 [8];
  longlong *local_4c8;
  undefined1 local_4b8 [8];
  longlong *local_4b0;
  undefined1 local_4a0 [8];
  longlong *local_498;
  undefined1 local_488 [8];
  longlong *local_480;
  undefined1 local_470 [8];
  longlong *local_468;
  undefined1 local_458 [8];
  longlong *local_450;
  undefined1 local_440 [8];
  longlong *local_438;
  undefined1 local_428 [8];
  longlong *local_420;
  undefined1 local_410 [8];
  longlong *local_408;
  undefined1 local_3f8 [8];
  longlong *local_3f0;
  undefined1 local_3e0 [8];
  longlong *local_3d8;
  undefined1 local_3c8 [8];
  longlong *local_3c0;
  undefined1 local_3b0 [16];
  undefined1 local_3a0 [16];
  undefined1 local_390 [16];
  undefined1 local_380 [16];
  undefined1 local_370 [16];
  undefined1 local_360 [24];
  undefined1 local_348 [24];
  undefined1 local_330 [24];
  undefined1 local_318 [24];
  undefined1 local_300 [24];
  undefined1 local_2e8 [24];
  undefined1 local_2d0 [24];
  undefined1 local_2b8 [24];
  undefined1 local_2a0 [24];
  undefined4 local_288 [2];
  longlong local_280;
  longlong *local_270;
  char local_260;
  undefined4 local_258 [4];
  undefined1 local_248 [24];
  undefined1 local_230;
  undefined4 local_228;
  undefined1 local_218 [24];
  undefined1 local_200;
  undefined4 local_1f8 [4];
  undefined1 local_1e8 [24];
  char local_1d0 [8];
  undefined4 local_1c8;
  undefined1 local_1b8 [24];
  undefined1 local_1a0;
  undefined4 local_198 [4];
  undefined1 local_188 [24];
  char local_170 [8];
  undefined4 local_168;
  undefined1 local_158 [24];
  undefined1 local_140;
  undefined4 local_138 [2];
  longlong local_130;
  char local_110 [8];
  undefined4 local_108;
  undefined1 local_f8 [24];
  undefined1 local_e0;
  undefined4 local_d8;
  undefined1 local_c8 [24];
  undefined1 local_b0;
  undefined4 local_a8;
  undefined1 local_98 [24];
  undefined1 local_80;
  ulonglong local_78 [5];
  char acStack_50 [24];
  
  local_78[0] = DAT_1468387a8 ^ (ulonglong)auStack_718;
  local_6e8 = 1;
  local_6e0 = param_2;
  local_648 = param_1;
  FText::FText(param_2);
  if (0 < *(int *)(param_1 + 0x2a8)) {
    lVar9 = *(longlong *)(param_1 + 0x2a0);
    local_650 = (longlong)*(int *)(param_1 + 0x2a8) * 0x1d8 + lVar9;
    local_6b8 = lVar9;
    if (lVar9 != local_650) {
      local_6d8 = local_1f8;
      puStack_6d0 = local_198;
      local_6c8 = local_138;
      puStack_6c0 = local_78;
      local_6a8 = local_258;
      puStack_6a0 = local_1f8;
      do {
        local_6b8 = lVar9;
        FText::FText(local_640);
        if (*(char *)(lVar9 + 0x20) == '\0') {
          local_6a8 = (undefined4 *)0x0;
          puStack_6a0 = (undefined4 *)0x0;
          uVar7 = FText::FromString(local_488,&local_6a8);
          FText::operator=(local_640,uVar7);
          plVar5 = local_480;
          puVar12 = local_6a8;
          if (local_480 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_480 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_480)(local_480);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              puVar12 = local_6a8;
              if (iVar4 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
                puVar12 = local_6a8;
              }
            }
          }
        }
        else {
          local_698 = (undefined4 *)0x0;
          local_690 = 0x14;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_698,0);
          FGenericPlatformString::Memcpy(local_698,L"ARC, {0} segments, ",0x28);
          iVar4 = *(int *)(lVar9 + 0x88);
          uVar7 = FText::FromString(local_4b8,&local_698);
          puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_3a0,uVar7);
          local_288[0] = 0;
          local_668 = local_288;
          local_260 = '\0';
          puStack_660 = local_258;
          local_5e8 = *puVar8;
          local_5e0 = puVar8[1];
          if (local_5e0 != 0) {
            LOCK();
            *(int *)(local_5e0 + 8) = *(int *)(local_5e0 + 8) + 1;
            UNLOCK();
          }
          local_280 = (longlong)iVar4;
          local_4f8 = local_668;
          uStack_4f0 = puStack_660;
          uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                  TArray<FFormatArgumentValue,FDefaultAllocator>(local_5d8,&local_4f8);
          uVar7 = FText::Format(local_4a0,&local_5e8,uVar7);
          FText::FText(local_518,uVar7);
          plVar5 = local_498;
          if (local_498 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_498 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_498)(local_498);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_5d8);
          plVar5 = local_270;
          if ((local_260 != '\0') && (local_260 = '\0', local_270 != (longlong *)0x0)) {
            LOCK();
            plVar1 = local_270 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_270)(local_270);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          plVar5 = (longlong *)puVar8[1];
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          FText::operator=(local_640,local_518);
          plVar5 = local_510;
          if (local_510 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_510 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_510)(local_510);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          plVar5 = local_4b0;
          puVar12 = local_698;
          if (local_4b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_4b0 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_4b0)(local_4b0);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              puVar12 = local_698;
              if (iVar4 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
                puVar12 = local_698;
              }
            }
          }
        }
        if (puVar12 != (undefined4 *)0x0) {
          FMemory::Free();
        }
        local_688[0] = 0;
        local_688[1] = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_688,0);
        local_6f8 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>(local_688[0],7,"{0}{1}");
        lVar9 = FUN_142bf4db0(lVar9 + 0x90,local_360,1);
        lVar10 = FText::FText(local_348,local_640);
        uVar7 = FText::FromString(local_458,local_688);
        puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_370,uVar7);
        local_258[0] = 4;
        FText::FText(local_248,lVar10);
        local_230 = 1;
        local_228 = 4;
        FText::FText(local_218,lVar9);
        local_628 = *puVar8;
        local_620 = puVar8[1];
        local_200 = 1;
        if (local_620 != 0) {
          LOCK();
          *(int *)(local_620 + 8) = *(int *)(local_620 + 8) + 1;
          UNLOCK();
        }
        local_5c8 = local_258;
        puStack_5c0 = local_1f8;
        uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_5b8,&local_5c8);
        uVar7 = FText::Format(local_470,&local_628,uVar7);
        FText::FText(local_4e8,uVar7);
        plVar5 = local_468;
        if (local_468 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_468 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_468)(local_468);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_5b8);
        lVar14 = 2;
        pcVar13 = local_1d0;
        do {
          lVar14 = lVar14 + -1;
          pcVar3 = pcVar13 + -0x30;
          if (*pcVar3 != '\0') {
            *pcVar3 = '\0';
            plVar5 = *(longlong **)(pcVar13 + -0x40);
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
                iVar4 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
          }
          pcVar13 = pcVar3;
        } while (lVar14 != 0);
        plVar5 = (longlong *)puVar8[1];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = *(longlong **)(lVar10 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = *(longlong **)(lVar9 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = local_450;
        if (local_450 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_450 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_450)(local_450);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        if (local_688[0] != 0) {
          FMemory::Free();
        }
        local_688[3] = 0x16;
        local_688[2] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_688 + 2,0);
        local_6f8 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>(local_688[2],0x16,"{0}) {1} ({2}): - {3}");
        lVar9 = local_6b8;
        lVar10 = FText::FromString(local_330,local_6b8 + 0x10);
        local_658 = lVar10;
        lVar14 = FText::FText(local_318,local_4e8);
        lVar9 = FText::FromString(local_300,lVar9);
        uVar7 = FText::FromString(local_428,local_688 + 2);
        puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_380,uVar7);
        local_138[0] = 0;
        local_130 = (longlong)local_6e8;
        local_110[0] = '\0';
        local_108 = 4;
        FText::FText(local_f8,lVar9);
        local_e0 = 1;
        local_d8 = 4;
        FText::FText(local_c8,lVar14);
        local_b0 = 1;
        local_a8 = 4;
        FText::FText(local_98,lVar10);
        local_618 = *puVar8;
        local_610 = puVar8[1];
        local_80 = 1;
        if (local_610 != 0) {
          LOCK();
          *(int *)(local_610 + 8) = *(int *)(local_610 + 8) + 1;
          UNLOCK();
        }
        local_5a8 = local_138;
        puStack_5a0 = local_78;
        uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_598,&local_5a8);
        uVar7 = FText::Format(local_440,&local_618,uVar7);
        FText::FText(local_548,uVar7);
        plVar5 = local_438;
        if (local_438 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_438 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_438)(local_438);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_598);
        lVar10 = 4;
        pcVar13 = acStack_50;
        do {
          lVar10 = lVar10 + -1;
          pcVar3 = pcVar13 + -0x30;
          if (*pcVar3 != '\0') {
            *pcVar3 = '\0';
            plVar5 = *(longlong **)(pcVar13 + -0x40);
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
                iVar4 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
          }
          pcVar13 = pcVar3;
        } while (lVar10 != 0);
        plVar5 = (longlong *)puVar8[1];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = *(longlong **)(lVar9 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = *(longlong **)(lVar14 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = *(longlong **)(local_658 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = local_420;
        local_6e8 = local_6e8 + 1;
        if (local_420 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_420 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_420)(local_420);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        if (local_688[2] != 0) {
          FMemory::Free();
        }
        puStack_6d0 = (undefined4 *)&DAT_00000008;
        local_6d8 = (undefined4 *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6d8,0);
        local_6f8 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>(local_6d8,8,"{0}\n{1}");
        lVar9 = FText::FText(local_2e8,local_548);
        lVar10 = FText::FText(local_2d0,local_6e0);
        uVar7 = FText::FromString(local_3f8,&local_6d8);
        puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_390,uVar7);
        local_1f8[0] = 4;
        FText::FText(local_1e8,lVar10);
        local_1d0[0] = '\x01';
        local_1c8 = 4;
        FText::FText(local_1b8,lVar9);
        local_608 = *puVar8;
        local_600 = puVar8[1];
        local_1a0 = 1;
        if (local_600 != 0) {
          LOCK();
          *(int *)(local_600 + 8) = *(int *)(local_600 + 8) + 1;
          UNLOCK();
        }
        local_588 = local_1f8;
        puStack_580 = local_198;
        uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_578,&local_588);
        uVar7 = FText::Format(local_410,&local_608,uVar7);
        FText::FText(local_530,uVar7);
        plVar5 = local_408;
        if (local_408 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_408 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_408)(local_408);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_578);
        lVar14 = 2;
        pcVar13 = local_170;
        do {
          lVar14 = lVar14 + -1;
          pcVar3 = pcVar13 + -0x30;
          if (*pcVar3 != '\0') {
            *pcVar3 = '\0';
            plVar5 = *(longlong **)(pcVar13 + -0x40);
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
                iVar4 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
          }
          pcVar13 = pcVar3;
        } while (lVar14 != 0);
        plVar5 = (longlong *)puVar8[1];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = *(longlong **)(lVar10 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = *(longlong **)(lVar9 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        FText::operator=(local_6e0);
        plVar5 = local_528;
        if (local_528 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_528 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_528)(local_528);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
          }
        }
        plVar5 = local_3f0;
        if (local_3f0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_3f0 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_3f0)(local_3f0);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
          }
        }
        if (local_6d8 != (undefined4 *)0x0) {
          FMemory::Free();
        }
        plVar5 = local_540;
        if (local_540 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_540 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_540)(local_540);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
          }
        }
        plVar5 = local_4e0;
        if (local_4e0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_4e0 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_4e0)(local_4e0);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
          }
        }
        plVar5 = local_638;
        if (local_638 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_638 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_638)(local_638);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
          }
        }
        lVar9 = local_6b8 + 0x1d8;
        param_1 = local_648;
        local_6b8 = lVar9;
      } while (lVar9 != local_650);
    }
    lVar10 = 2;
    local_6c8 = (undefined4 *)0x0;
    puStack_6c0 = (ulonglong *)0x9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6c8,0);
    local_6f8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_6c8,9,"{0}\n\n{1}");
    uVar7 = FUN_142bdcff0(param_1,local_2b8);
    lVar9 = FText::FText(local_2a0,local_6e0);
    uVar11 = FText::FromString(local_3c8,&local_6c8);
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_3b0,uVar11);
    local_198[0] = 4;
    FText::FText(local_188,lVar9);
    local_170[0] = '\x01';
    local_168 = 4;
    FText::FText(local_158,uVar7);
    local_668 = local_198;
    local_140 = 1;
    puStack_660 = local_138;
    local_5f8 = *puVar8;
    local_5f0 = puVar8[1];
    if (local_5f0 != 0) {
      LOCK();
      *(int *)(local_5f0 + 8) = *(int *)(local_5f0 + 8) + 1;
      UNLOCK();
    }
    local_568 = local_668;
    puStack_560 = puStack_660;
    uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_558,&local_568);
    uVar11 = FText::Format(local_3e0,&local_5f8,uVar11);
    FText::FText(local_4d0,uVar11);
    if (local_3d8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_3d8 + 1;
      lVar14 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_3d8)(local_3d8);
        LOCK();
        piVar2 = (int *)((longlong)local_3d8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_3d8 + 8))(local_3d8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_558);
    pcVar13 = local_110;
    do {
      lVar10 = lVar10 + -1;
      pcVar3 = pcVar13 + -0x30;
      if (*pcVar3 != '\0') {
        *pcVar3 = '\0';
        plVar5 = *(longlong **)(pcVar13 + -0x40);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
      pcVar13 = pcVar3;
    } while (lVar10 != 0);
    plVar5 = (longlong *)puVar8[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)(lVar9 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar7);
    param_2 = local_6e0;
    FText::operator=(local_6e0,local_4d0);
    if (local_4c8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_4c8 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_4c8)(local_4c8);
        LOCK();
        piVar2 = (int *)((longlong)local_4c8 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_4c8 + 8))(local_4c8,1);
        }
      }
    }
    if (local_3c0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_3c0 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_3c0)(local_3c0);
        LOCK();
        piVar2 = (int *)((longlong)local_3c0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_3c0 + 8))(local_3c0,1);
        }
      }
    }
    if (local_6c8 != (undefined4 *)0x0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 14077a7d0 FUN_14077a7d0 body=753 status=ok
// SIG undefined FUN_14077a7d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14077a7d0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined1 auStack_188 [32];
  longlong local_168 [2];
  undefined4 *local_158;
  ulonglong *puStack_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined1 local_130 [16];
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [24];
  undefined1 local_c8 [32];
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_168[1] = 9;
  local_168[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_168,0);
  FGenericPlatformString::Memcpy(local_168[0],L"{0}: {1}",0x12);
  lVar7 = FUN_142dea240(local_e0,*(undefined1 *)(param_1 + 0x98));
  local_148 = lVar7;
  lVar8 = FUN_142be4f60(param_1,local_c8);
  uVar9 = FText::FromString(local_108,local_168);
  puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_f0,uVar9);
  local_a8[0] = 4;
  FText::FText(local_98,lVar8);
  local_80 = 1;
  local_78 = 4;
  FText::FText(local_68,lVar7);
  local_158 = local_a8;
  local_50 = 1;
  puStack_150 = local_48;
  local_140 = *puVar10;
  local_138 = puVar10[1];
  if (local_138 != 0) {
    LOCK();
    *(int *)(local_138 + 8) = *(int *)(local_138 + 8) + 1;
    UNLOCK();
  }
  uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_130,&local_158);
  uVar9 = FText::Format(local_120,&local_140,uVar9);
  FText::FText(param_2,uVar9);
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_118 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)local_118 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_118 + 8))(local_118,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_130);
  lVar7 = 2;
  pcVar11 = &stack0xffffffffffffffe0;
  do {
    lVar7 = lVar7 + -1;
    pcVar2 = pcVar11 + -0x30;
    if (*pcVar2 != '\0') {
      *pcVar2 = '\0';
      plVar5 = *(longlong **)(pcVar11 + -0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    pcVar11 = pcVar2;
  } while (lVar7 != 0);
  plVar5 = (longlong *)puVar10[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(lVar8 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(local_148 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_100 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  if (local_168[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14077aad0 FUN_14077aad0 body=97 status=ok
// SIG undefined FUN_14077aad0(void)

undefined8 FUN_14077aad0(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0xd;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Actor Health",0x1a);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14077ab40 FUN_14077ab40 body=97 status=ok
// SIG undefined FUN_14077ab40(void)

undefined8 FUN_14077ab40(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x18;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Target\'s Attacker Count",0x30);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14077abb0 GetDescriptionTitle body=97 status=ok
// SIG undefined GetDescriptionTitle(void)

undefined8 UEnvQueryTest_AITacticalPoint::GetDescriptionTitle(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0xf;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Blackboard Key",0x1e);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14077ac20 FUN_14077ac20 body=97 status=ok
// SIG undefined FUN_14077ac20(void)

undefined8 FUN_14077ac20(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x1a;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Is Already Current Target",0x34);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14077ac90 FUN_14077ac90 body=97 status=ok
// SIG undefined FUN_14077ac90(void)

undefined8 FUN_14077ac90(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x13;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Custom Score Boost",0x26);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14077ad00 GetDescriptionTitle body=97 status=ok
// SIG undefined GetDescriptionTitle(void)

undefined8 UEnvQueryTest_AITacticalPoint::GetDescriptionTitle(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0xf;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Is In God Mode",0x1e);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14077ad70 FUN_14077ad70 body=97 status=ok
// SIG undefined FUN_14077ad70(void)

undefined8 FUN_14077ad70(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x1e;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"My Master is Attacking Target",0x3c);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14077ade0 FUN_14077ade0 body=97 status=ok
// SIG undefined FUN_14077ade0(void)

undefined8 FUN_14077ade0(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0xd;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Pet Modifier",0x1a);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14077ae50 FUN_14077ae50 body=97 status=ok
// SIG undefined FUN_14077ae50(void)

undefined8 FUN_14077ae50(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x13;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Pet Owner Distance",0x26);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14077aec0 FUN_14077aec0 body=97 status=ok
// SIG undefined FUN_14077aec0(void)

undefined8 FUN_14077aec0(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x1e;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Target is Attacking My Master",0x3c);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14077af30 FUN_14077af30 body=97 status=ok
// SIG undefined FUN_14077af30(void)

undefined8 FUN_14077af30(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x1d;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Target is Close to My Master",0x3a);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14077afa0 GetDescriptionTitle body=97 status=ok
// SIG undefined GetDescriptionTitle(void)

undefined8 UEnvQueryTest_Cover::GetDescriptionTitle(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0xb;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Is Exposed",0x16);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14077b010 FUN_14077b010 body=97 status=ok
// SIG undefined FUN_14077b010(void)

undefined8 FUN_14077b010(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0xe;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Is Hurting Me",0x1c);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14077b080 FUN_14077b080 body=97 status=ok
// SIG undefined FUN_14077b080(void)

undefined8 FUN_14077b080(undefined8 param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 0x11;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Target is Threat",0x22);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14077b0f0 FUN_14077b0f0 body=88 status=ok
// SIG undefined FUN_14077b0f0(void)

undefined8 FUN_14077b0f0(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  longlong local_18 [2];
  
  if (*(int *)(param_1 + 0x1e0) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = *(undefined2 **)(param_1 + 0x1d8);
  }
  FString::PrintfImpl(local_18,L"Target Sensed: %s",puVar1);
  FText::FromString(param_2,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14077b150 FUN_14077b150 body=982 status=ok
// SIG undefined FUN_14077b150(void)

undefined8 FUN_14077b150(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  void *_Src;
  undefined2 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  int iVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  undefined2 *puVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  wchar_t *local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  int local_d0;
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong local_98 [2];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  
  if (*(int *)(param_1 + 0x2a8) == 0) {
    local_e8 = (undefined2 *)0x0;
    local_e0 = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
    FGenericPlatformString::Memcpy(local_e8,L"UberTrace: (incomplete)",0x30);
    FText::FromString(param_2,&local_e8);
    puVar15 = local_e8;
    goto LAB_14077b50b;
  }
  lVar2 = *(longlong *)(param_1 + 0x2a0);
  uVar9 = UEnum::GetPrivateStaticClass();
  uVar9 = FUN_141799410(uVar9,0xffffffffffffffff,L"ETraceTypeQuery",1);
  uVar9 = FUN_1417373a0(uVar9,local_88,*(undefined1 *)(lVar2 + 0xb8));
  puVar10 = (undefined8 *)FText::ToString(uVar9);
  local_d8 = (undefined2 *)0x0;
  local_d0 = *(int *)(puVar10 + 1);
  lVar14 = (longlong)local_d0;
  _Src = (void *)*puVar10;
  if (local_d0 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,local_d0,0);
    _guard_xfg_dispatch_icall_nop(local_d8,_Src,lVar14 * 2);
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_80 + 1;
    lVar14 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x218) == 0) {
    uVar9 = UEnvQueryTypes::DescribeContext(local_70,*(undefined8 *)(lVar2 + 0xc0));
    puVar10 = (undefined8 *)FText::ToString(uVar9);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar10;
    }
    pwVar11 = L"to";
    bVar8 = false;
    bVar7 = false;
    bVar6 = false;
    bVar5 = true;
    bVar4 = true;
    plVar16 = local_b8;
    pwVar13 = L"%s %s";
    if (*(char *)(param_1 + 0x230) != '\0') {
      pwVar11 = L"from";
    }
  }
  else {
    puVar10 = (undefined8 *)FAIDataProviderValue::ToString(param_1 + 0x208,local_98);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar10;
    }
    uVar9 = UEnvQueryTypes::DescribeContext(local_58,*(undefined8 *)(lVar2 + 0xc0));
    puVar10 = (undefined8 *)FText::ToString(uVar9);
    if (*(int *)(puVar10 + 1) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)*puVar10;
    }
    plVar16 = local_a8;
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    bVar5 = false;
    bVar4 = false;
    pwVar13 = L"%s, direction: %s";
  }
  FString::PrintfImpl(plVar16,pwVar13,pwVar11,puVar15);
  puVar3 = (undefined2 *)*plVar16;
  *plVar16 = 0;
  lVar2 = plVar16[1];
  plVar16[1] = 0;
  if ((bVar4) && (local_b8[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar5) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar16 = local_68 + 1;
    lVar14 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if ((bVar6) && (local_a8[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar7) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar16 = local_50 + 1;
    lVar14 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if ((bVar8) && (local_98[0] != 0)) {
    FMemory::Free();
  }
  local_f8 = (wchar_t *)0x0;
  local_f0 = 0;
  if (*(int *)(param_1 + 0x2a8) < 2) {
LAB_14077b498:
    pwVar11 = L"";
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8,10);
    iVar12 = (int)local_f0 + 10;
    local_f0 = CONCAT44(local_f0._4_4_,iVar12);
    if (local_f0._4_4_ < iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8);
      iVar12 = (int)local_f0;
    }
    builtin_wcsncpy(local_f8,L" + others",10);
    pwVar11 = local_f8;
    if (iVar12 == 0) goto LAB_14077b498;
  }
  pwVar13 = local_f8;
  puVar15 = &DAT_143f3eda8;
  if (local_d0 != 0) {
    puVar15 = local_d8;
  }
  puVar17 = &DAT_143f3eda8;
  if ((int)lVar2 != 0) {
    puVar17 = puVar3;
  }
  FString::PrintfImpl(local_c8,L"UberTrace: %s on %s%s",puVar17,puVar15,pwVar11);
  FText::FromString(param_2,local_c8);
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  if (pwVar13 != (wchar_t *)0x0) {
    FMemory::Free(pwVar13);
  }
  puVar15 = local_d8;
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
    puVar15 = local_d8;
  }
LAB_14077b50b:
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14077b530 FUN_14077b530 body=753 status=ok
// SIG undefined FUN_14077b530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14077b530(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined1 auStack_188 [32];
  longlong local_168 [2];
  undefined4 *local_158;
  ulonglong *puStack_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined1 local_130 [16];
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [24];
  undefined1 local_c8 [32];
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_168[1] = 9;
  local_168[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_168,0);
  FGenericPlatformString::Memcpy(local_168[0],L"{0}: {1}",0x12);
  lVar7 = FUN_142dea240(local_e0,*(undefined1 *)(param_1 + 0x1d8));
  local_148 = lVar7;
  lVar8 = FUN_142be4f60(param_1,local_c8);
  uVar9 = FText::FromString(local_108,local_168);
  puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_f0,uVar9);
  local_a8[0] = 4;
  FText::FText(local_98,lVar8);
  local_80 = 1;
  local_78 = 4;
  FText::FText(local_68,lVar7);
  local_158 = local_a8;
  local_50 = 1;
  puStack_150 = local_48;
  local_140 = *puVar10;
  local_138 = puVar10[1];
  if (local_138 != 0) {
    LOCK();
    *(int *)(local_138 + 8) = *(int *)(local_138 + 8) + 1;
    UNLOCK();
  }
  uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_130,&local_158);
  uVar9 = FText::Format(local_120,&local_140,uVar9);
  FText::FText(param_2,uVar9);
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_118 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)local_118 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_118 + 8))(local_118,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_130);
  lVar7 = 2;
  pcVar11 = &stack0xffffffffffffffe0;
  do {
    lVar7 = lVar7 + -1;
    pcVar2 = pcVar11 + -0x30;
    if (*pcVar2 != '\0') {
      *pcVar2 = '\0';
      plVar5 = *(longlong **)(pcVar11 + -0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    pcVar11 = pcVar2;
  } while (lVar7 != 0);
  plVar5 = (longlong *)puVar10[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(lVar8 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(local_148 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_100 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  if (local_168[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14077b840 FUN_14077b840 body=71 status=ok
// SIG undefined FUN_14077b840(void)

undefined1 * FUN_14077b840(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1407cb730(param_1 + -0x5e8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x180) != 0)) {
    *param_2 = *(undefined1 *)(*(longlong *)(lVar1 + 0x180) + 0x6a);
    return param_2;
  }
  *param_2 = DAT_146690f0c;
  return param_2;
}



// FUNCTION 14077b890 FUN_14077b890 body=120 status=ok
// SIG undefined FUN_14077b890(void)

undefined8 FUN_14077b890(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  lVar2 = (**(code **)(*param_2 + 0x668))(param_2);
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
      return *(undefined8 *)(lVar2 + 0x628);
    }
  }
  return 0;
}



// FUNCTION 14077b910 FUN_14077b910 body=421 status=ok
// SIG undefined FUN_14077b910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14077b910(longlong *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 local_res18 [16];
  float local_68;
  float fStack_64;
  undefined8 local_58;
  float local_50;
  
  lVar3 = FUN_142ddddc0();
  if (((lVar3 == 0) || (param_1 == (longlong *)0x0)) ||
     (lVar4 = (**(code **)(*param_1 + 0x688))(param_1), lVar4 == 0)) {
    iVar2 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x168);
    iVar2 = 0;
    if (lVar4 == 0) {
      local_58 = _DAT_1468b5d90;
      local_50 = DAT_1468b5d98;
    }
    else {
      local_58 = *(undefined8 *)(lVar4 + 0x220);
      local_50 = *(float *)(lVar4 + 0x228);
    }
    fVar1 = local_50;
    lVar4 = *(longlong *)(lVar3 + 0x7538);
    if (*(longlong *)(lVar3 + 0x7538) == 0) {
      lVar4 = lVar3 + 0x338;
    }
    lVar3 = (longlong)*(int *)(lVar3 + 0x7540) * 0x390 + lVar4;
    if (lVar4 != lVar3) {
      fStack_64 = (float)((ulonglong)local_58 >> 0x20);
      local_68 = (float)local_58;
      iVar5 = iVar2;
      do {
        FUN_142dcd3a0(lVar4,&local_58,local_res18);
        iVar2 = iVar5 + 1;
        if (param_2 * param_2 <
            (local_58._4_4_ - fStack_64) * (local_58._4_4_ - fStack_64) +
            ((float)local_58 - local_68) * ((float)local_58 - local_68) +
            (local_50 - fVar1) * (local_50 - fVar1)) {
          iVar2 = iVar5;
        }
        lVar4 = lVar4 + 0x390;
        iVar5 = iVar2;
      } while (lVar4 != lVar3);
    }
  }
  return iVar2;
}



// FUNCTION 14077bb00 FUN_14077bb00 body=255 status=ok
// SIG undefined FUN_14077bb00(void)

undefined1 * FUN_14077bb00(undefined1 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  
  if (param_2 != (longlong *)0x0) {
    plVar1 = (longlong *)FUN_142c33440();
    plVar3 = param_2;
    do {
      if (plVar3 == plVar1) {
        plVar1 = (longlong *)FUN_142c33440();
        plVar3 = param_2;
        goto LAB_14077bb80;
      }
      plVar3 = (longlong *)plVar3[6];
    } while (plVar3 != (longlong *)0x0);
  }
  uVar2 = DAT_146859250;
  uVar5 = DAT_146859248;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146859258) &&
     (_Init_thread_header(&DAT_146859258), uVar2 = DAT_146859250, uVar5 = DAT_146859248,
     DAT_146859258 == -1)) {
    DAT_146859248 = 0xff;
    FName::FName(&DAT_146859250,L"Invalid",1);
    _Init_thread_footer(&DAT_146859258);
    uVar2 = DAT_146859250;
    uVar5 = DAT_146859248;
  }
  goto LAB_14077bb5f;
  while (plVar3 = (longlong *)plVar3[6], plVar3 != (longlong *)0x0) {
LAB_14077bb80:
    if (plVar3 == plVar1) goto LAB_14077bb90;
  }
  param_2 = (longlong *)0x0;
LAB_14077bb90:
  lVar4 = param_2[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*param_2 + 0x368))(param_2);
    lVar4 = param_2[0x1f];
  }
  uVar2 = *(undefined8 *)(lVar4 + 0x50);
  uVar5 = *(undefined1 *)(lVar4 + 0x48);
LAB_14077bb5f:
  *(undefined8 *)(param_1 + 8) = uVar2;
  *param_1 = uVar5;
  return param_1;
}



// FUNCTION 14077bc00 FUN_14077bc00 body=222 status=ok
// SIG undefined FUN_14077bc00(void)

undefined4 FUN_14077bc00(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  longlong lVar4;
  byte local_a8 [8];
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined4 local_88 [2];
  float local_80;
  
  FUN_140772210(local_88);
  pbVar3 = (byte *)FUN_14077bb00(local_98,param_2);
  bVar1 = *pbVar3;
  local_a0 = *(undefined8 *)(pbVar3 + 8);
  local_a8[0] = bVar1;
  cVar2 = FUN_14077cd10(local_a8);
  if ((((cVar2 == '\0') || (7 < bVar1)) ||
      (lVar4 = (ulonglong)bVar1 * 0x68, *(float *)(lVar4 + 0x28 + param_1) <= 0.0)) ||
     ((3.4028235e+38 <= *(float *)(lVar4 + 0x20 + param_1) ||
      ((*(uint *)(lVar4 + 100 + param_1) >> 1 & 1) == 0)))) {
    local_88[0] = 0x7f7fffff;
  }
  else {
    FUN_1407263c0(local_88,param_1 + 0x20 + (ulonglong)*pbVar3 * 0x68);
    if (local_80 <= 0.0) {
      local_88[0] = 0x7f7fffff;
    }
  }
  return local_88[0];
}



// FUNCTION 14077bce0 FUN_14077bce0 body=53 status=ok
// SIG undefined FUN_14077bce0(void)

undefined8 FUN_14077bce0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1407cb730(param_1 + -0x5e8);
  if (lVar1 != 0) {
    uVar2 = FUN_142dec940(lVar1,param_2);
    return uVar2;
  }
  return 1;
}



// FUNCTION 14077bd20 FUN_14077bd20 body=50 status=ok
// SIG undefined FUN_14077bd20(void)

undefined8 FUN_14077bd20(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140778bd0(param_1 + -0x5f8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014077bd41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x38) + 0x60))(lVar1 + 0x38);
    return uVar2;
  }
  return 0xbf800000;
}



// FUNCTION 14077bd60 FUN_14077bd60 body=255 status=ok
// SIG undefined FUN_14077bd60(void)

undefined8 * FUN_14077bd60(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if ((*(longlong *)(param_1 + 0x200) != 0) && (*(longlong *)(param_1 + 0x208) != 0)) {
    puVar5 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 0x208) + 0x18))
                       (*(longlong **)(param_1 + 0x208),local_28);
    uVar4 = *(undefined4 *)(puVar5 + 1);
    *param_2 = *puVar5;
    *(undefined4 *)(param_2 + 1) = uVar4;
    return param_2;
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x168);
    if (lVar1 == 0) {
      uVar6 = (undefined4)DAT_1468b5da0;
      uVar7 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      uVar4 = DAT_1468b5da8;
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
      iVar3 = movmskps(0,auVar2);
      if (iVar3 != 0) {
        *(float *)(lVar1 + 0x250) = local_18;
        *(float *)(lVar1 + 0x254) = fStack_14;
        *(float *)(lVar1 + 600) = fStack_10;
        *(float *)(lVar1 + 0x25c) = fStack_c;
        puVar5 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
        *(undefined8 *)(lVar1 + 0x260) = *puVar5;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
      }
      uVar6 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      uVar4 = *(undefined4 *)(lVar1 + 0x268);
    }
    *param_2 = CONCAT44(uVar7,uVar6);
    *(undefined4 *)(param_2 + 1) = uVar4;
  }
  return param_2;
}



// FUNCTION 14077be60 FUN_14077be60 body=571 status=ok
// SIG undefined FUN_14077be60(void)

undefined8 *
FUN_14077be60(longlong param_1,undefined8 *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float local_58;
  float fStack_54;
  float local_50;
  
  if ((*(longlong *)(param_1 + 0x200) == 0) || (*(longlong *)(param_1 + 0x208) == 0)) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)(**(code **)(**(longlong **)(param_1 + 0x208) + 0x58))();
  }
  if ((fVar1 <= 0.0) ||
     (local_50 = SQRT((param_4[1] - param_3[1]) * (param_4[1] - param_3[1]) +
                      (*param_4 - *param_3) * (*param_4 - *param_3) +
                      (param_4[2] - param_3[2]) * (param_4[2] - param_3[2])) * (1.0 / fVar1),
     local_50 <= 0.0)) {
    uVar2 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_50 = DAT_1468b5d98;
  }
  else {
    local_58 = local_50 * *param_5;
    fStack_54 = local_50 * param_5[1];
    local_50 = local_50 * param_5[2];
    fVar1 = *(float *)(param_1 + 0x6a8);
    if (*(float *)(param_1 + 0x470) <= *(float *)(param_1 + 0x6a8)) {
      fVar1 = *(float *)(param_1 + 0x470);
    }
    fVar3 = fStack_54 * fStack_54 + local_58 * local_58 + local_50 * local_50;
    if (fVar1 < SQRT(fVar3)) {
      fVar6 = local_50;
      fVar7 = local_58;
      fVar4 = fStack_54;
      if ((fVar3 != 1.0) &&
         (fVar6 = DAT_1468b5d98, fVar7 = DAT_1468b5d90, fVar4 = DAT_1468b5d94, 1e-08 <= fVar3)) {
        auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
        fVar4 = auVar5._0_4_;
        fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
        fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
        fVar6 = local_50 * fVar4;
        fVar7 = local_58 * fVar4;
        fVar4 = fStack_54 * fVar4;
      }
      local_58 = fVar7 * fVar1;
      fStack_54 = fVar4 * fVar1;
      local_50 = fVar6 * fVar1;
    }
    uVar2 = CONCAT44(fStack_54,local_58);
  }
  *param_2 = uVar2;
  *(float *)(param_2 + 1) = local_50;
  return param_2;
}



// FUNCTION 14077c0a0 FUN_14077c0a0 body=113 status=ok
// SIG undefined FUN_14077c0a0(void)

longlong * FUN_14077c0a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x1a8);
  *param_2 = 0;
  param_2[1] = 0;
  if (lVar3 != 0) {
    uVar2 = UDamageableInterface::GetPrivateStaticClass();
    lVar3 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar2);
    if (lVar3 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x1a8);
      *param_2 = lVar1;
      if (lVar1 == 0) {
        lVar3 = 0;
      }
      param_2[1] = lVar3;
    }
  }
  return param_2;
}



// FUNCTION 14077c120 FUN_14077c120 body=123 status=ok
// SIG undefined FUN_14077c120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14077c120(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if ((param_1 == 0) || (param_2 == 0)) {
    param_2 = param_2 & 0xffffffffffffff00;
  }
  else {
    uVar2 = FUN_1407c80f0(param_2,local_a8);
    bVar1 = FUN_1407764a0(uVar2,param_1,0);
    if (local_28 != 0) {
      FMemory::Free();
    }
    param_2 = (ulonglong)bVar1;
  }
  return param_2;
}



// FUNCTION 14077c1a0 FUN_14077c1a0 body=87 status=ok
// SIG undefined FUN_14077c1a0(void)

bool FUN_14077c1a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(longlong *)(param_1 + 0x80) = param_2;
  lVar1 = *(longlong *)(param_2 + 0x6f8);
  *(longlong *)(param_1 + 0x88) = lVar1;
  if (*(char *)(lVar1 + 0x30) == '\0') {
    uVar2 = UAIResource_Movement::GetPrivateStaticClass();
    FUN_142b78870(param_1,uVar2);
    uVar2 = UAIResource_Movement::GetPrivateStaticClass();
    FUN_142b787f0(param_1,uVar2);
    param_2 = *(longlong *)(param_1 + 0x80);
  }
  return param_2 != 0;
}



// FUNCTION 14077c200 FUN_14077c200 body=28 status=ok
// SIG undefined FUN_14077c200(void)

undefined8 FUN_14077c200(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(longlong *)(param_1 + 0x80) = param_2;
  lVar1 = *(longlong *)(param_2 + 0x6f8);
  *(longlong *)(param_1 + 0x88) = lVar1;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != 0);
}



// FUNCTION 14077c220 FUN_14077c220 body=934 status=ok
// SIG undefined FUN_14077c220(void)

void FUN_14077c220(longlong param_1,longlong param_2,longlong param_3)

{
  float *pfVar1;
  float *pfVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  float *pfVar12;
  float fVar13;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar14;
  float *local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [128];
  
  lVar7 = FUN_140765020(param_2);
  if (lVar7 == 0) goto LAB_14077c542;
  ABP_BossTurret_C__pf3024885705::bpf__StartSelect__pf(lVar7,param_1);
  plVar3 = *(longlong **)(lVar7 + 0x488);
  if (plVar3 != (longlong *)0x0) {
    lVar8 = (**(code **)(*plVar3 + 0x148))(plVar3);
    if (lVar8 == 0) {
      fVar13 = 0.0;
    }
    else {
      fVar13 = *(float *)(lVar8 + 0x8c8);
    }
    plVar9 = (longlong *)UGameplayTask_SpawnActor::GetPrivateStaticClass();
    if (plVar9[0x1f] == 0) {
      (**(code **)(*plVar9 + 0x368))(plVar9);
    }
    lVar10 = (**(code **)(*(longlong *)(lVar7 + 0x508) + 0x10))();
    if ((lVar10 != 0) && (*(longlong *)(param_1 + 0x998) != 0)) {
      plVar9 = (longlong *)(*(longlong *)(param_1 + 0x998) + 0x5f8);
      local_b8 = (float *)0x0;
      local_b0 = 0;
      cVar5 = (**(code **)(*plVar9 + 0x40))(plVar9,&local_b8);
      if (cVar5 != '\0') {
        pfVar2 = local_b8 + (longlong)(int)local_b0 * 0x12;
        if (local_b8 != pfVar2) {
          pfVar12 = local_b8 + 4;
          do {
            uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
            if (0.0 < pfVar12[3] || pfVar12[3] == 0.0) {
              uVar11 = FWeakObjectPtr::Get(pfVar12 + -4);
              in_stack_ffffffffffffff28 = CONCAT44(uVar14,0x42c80000);
              FUN_142c1a550(local_a8,plVar3,uVar11,pfVar12 + 10,in_stack_ffffffffffffff28,
                            fVar13 - *pfVar12,0x3f800000);
              FUN_140771e50(lVar8,local_a8);
            }
            pfVar1 = pfVar12 + 0xe;
            pfVar12 = pfVar12 + 0x12;
          } while (pfVar1 != pfVar2);
        }
      }
      if (local_b8 != (float *)0x0) {
        FMemory::Free(local_b8);
      }
    }
  }
  uVar11 = 0;
  plVar3 = *(longlong **)(lVar7 + 0x608);
  if (plVar3 == (longlong *)0x0) goto LAB_14077c542;
  if ((param_3 != 0) && (lVar7 = *(longlong *)(param_3 + 0x8d8), lVar7 != 0)) {
    local_b8 = (float *)0x0;
    local_b0 = local_b0 & 0xffffffff00000000;
    if ((int)plVar3[0x51] != *(int *)((longlong)plVar3 + 0x2b4)) {
      plVar9 = (longlong *)plVar3[0x58];
      if ((longlong *)plVar3[0x58] == (longlong *)0x0) {
        plVar9 = plVar3 + 0x57;
      }
      iVar6 = *(int *)((longlong)plVar9 +
                      ((longlong)((int)((ulonglong)lVar7 >> 0x20) + (int)lVar7) &
                      (longlong)(int)plVar3[0x59] - 1U) * 4);
      if (iVar6 != -1) {
        lVar8 = plVar3[0x50];
        do {
          lVar10 = (longlong)iVar6;
          if (*(longlong *)(lVar8 + lVar10 * 0x18) == lVar7) {
            if ((iVar6 != -1) && (lVar8 = lVar8 + lVar10 * 0x18, lVar8 != 0)) {
              uVar11 = *(undefined8 *)(lVar8 + 8);
            }
            break;
          }
          iVar6 = *(int *)(lVar8 + 0x10 + lVar10 * 0x18);
        } while (iVar6 != -1);
      }
    }
    cVar5 = FUN_14071ba40(plVar3,0,uVar11,&local_b8,0);
    if ((int)local_b0 == 0) {
LAB_14077c524:
      if (local_b8 != (float *)0x0) {
        FMemory::Free(local_b8);
      }
    }
    else if (local_b8 != (float *)0x0) {
      (**(code **)(*(longlong *)local_b8 + 0x28))(local_b8,0);
      if (local_b8 != (float *)0x0) {
        local_b8 = (float *)FMemory::Realloc(local_b8,0,0);
      }
      local_b0 = local_b0 & 0xffffffff00000000;
      goto LAB_14077c524;
    }
    if (cVar5 != '\0') goto LAB_14077c542;
  }
  (**(code **)(*plVar3 + 0x450))(plVar3);
LAB_14077c542:
  plVar9 = *(longlong **)(param_2 + 0x158);
  plVar3 = plVar9 + *(int *)(param_2 + 0x160);
  for (; plVar9 != plVar3; plVar9 = plVar9 + 1) {
    lVar7 = *plVar9;
    if (lVar7 != 0) {
      lVar8 = FUN_1429d7ab0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        FUN_14077c220(param_1,lVar7,param_3);
      }
    }
  }
  return;
}



// FUNCTION 14077c5d0 FUN_14077c5d0 body=470 status=ok
// SIG undefined FUN_14077c5d0(void)

void FUN_14077c5d0(longlong param_1,longlong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*param_2 == 0) {
    return;
  }
  lVar7 = param_2[2];
  plVar8 = (longlong *)0x0;
  lVar4 = FUN_1407cb160(param_1);
  if (((int)lVar7 < 0) || (*(int *)(lVar4 + 8) <= (int)lVar7)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  plVar5 = plVar8;
  if (bVar2) {
    lVar7 = param_2[2];
    plVar5 = (longlong *)FUN_1407cb160(param_1);
    plVar5 = *(longlong **)(*plVar5 + (longlong)(int)lVar7 * 8);
    if (plVar5 != (longlong *)0x0) {
      plVar8 = (longlong *)plVar5[0x23];
    }
    if (plVar8 != (longlong *)0x0) {
      uVar6 = AUGWeapon_Hook::GetPrivateStaticClass();
      lVar7 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar6);
      if ((lVar7 != 0) && (lVar4 = FUN_140765020(*param_2), lVar4 != 0)) {
        cVar1 = *(char *)(lVar7 + 0x788);
        if (cVar1 == '\x01') {
          uVar6 = FUN_14076aaa0(lVar7);
          lVar7 = *(longlong *)(lVar4 + 0x568);
          if (lVar7 != 0) {
            uVar3 = FUN_142bbd6b0(lVar7,&DAT_1468593c0);
            FUN_140725870(lVar7,uVar3,uVar6);
          }
        }
        else {
          if (cVar1 == '\x02') {
            uVar6 = FUN_14076aaa0(lVar7);
            lVar7 = FUN_14072df00(lVar4,uVar6,0,0);
          }
          else {
            if (cVar1 != '\x03') {
              if (cVar1 == '\x04') {
                FUN_14072e6b0(lVar4,0);
              }
              goto LAB_14077c721;
            }
            uVar6 = FUN_14076aaa0(lVar7);
            lVar7 = FUN_14072e550(lVar4,uVar6,0);
          }
          if (lVar7 != 0) {
            FUN_142b7b2b0(lVar7);
          }
        }
      }
    }
  }
LAB_14077c721:
  uVar6 = UThrobber::GetPrivateStaticClass();
  lVar7 = AGameStateBase::OnRep_GameModeClass(*param_2,uVar6);
  if (lVar7 != 0) {
    lVar4 = UThrobber::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FGameplayTagContainer::AppendTags(lVar7 + 0x188,param_1 + 0x9a0);
    }
  }
  FUN_14077c220(param_1,*param_2,plVar5);
  return;
}



// FUNCTION 14077c7b0 FUN_14077c7b0 body=268 status=ok
// SIG undefined FUN_14077c7b0(void)

ulonglong FUN_14077c7b0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  char *pcVar3;
  char local_88 [4];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  char local_50;
  undefined1 local_48 [64];
  
  uVar2 = *(ulonglong *)(param_1 + 0x1a8);
  lVar1 = *(longlong *)(uVar2 + 0x900);
  if (lVar1 != 0) {
    uVar2 = FUN_142ced5e0(lVar1,local_88,1);
    if (local_88[0] == '\0') {
      pcVar3 = (char *)FUN_142ced5e0(lVar1,local_48,0);
      local_88[0] = *pcVar3;
      local_84 = *(undefined4 *)(pcVar3 + 4);
      local_80 = *(undefined4 *)(pcVar3 + 8);
      local_7c = *(undefined4 *)(pcVar3 + 0xc);
      local_78 = *(undefined4 *)(pcVar3 + 0x10);
      local_74 = *(undefined8 *)(pcVar3 + 0x14);
      local_6c = *(undefined4 *)(pcVar3 + 0x1c);
      local_68 = *(undefined8 *)(pcVar3 + 0x20);
      local_60 = *(undefined4 *)(pcVar3 + 0x28);
      local_5c = *(undefined8 *)(pcVar3 + 0x2c);
      local_54 = *(undefined4 *)(pcVar3 + 0x34);
      local_50 = pcVar3[0x38];
      uVar2 = 0;
      if (local_88[0] == '\0') goto LAB_14077c8a9;
    }
    if (2 < (byte)(local_88[0] - 7U)) {
      uVar2 = FUN_142cf3520(lVar1,*(undefined4 *)(param_1 + 0x1c0),1,local_88,0);
      return uVar2;
    }
  }
LAB_14077c8a9:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 14077c8c0 FUN_14077c8c0 body=44 status=ok
// SIG undefined FUN_14077c8c0(void)

undefined1 FUN_14077c8c0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140583fc0();
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0xd8) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 14077c8f0 GetXAxisInverted body=8 status=ok
// SIG undefined GetXAxisInverted(void)

undefined1 UIndianaGameUserSettings::GetXAxisInverted(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x1b0);
}



// FUNCTION 14077c900 FUN_14077c900 body=42 status=ok
// SIG undefined FUN_14077c900(void)

void FUN_14077c900(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140778bd0(param_1 + -0x5f8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014077c921. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x38) + 0x18))(lVar1 + 0x38);
    return;
  }
  return;
}



// FUNCTION 14077c930 FUN_14077c930 body=51 status=ok
// SIG undefined FUN_14077c930(void)

void FUN_14077c930(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140778bd0(param_1 + -0x5f8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014077c959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x38) + 0x20))((longlong *)(lVar1 + 0x38),param_2);
    return;
  }
  return;
}



// FUNCTION 14077c970 FUN_14077c970 body=92 status=ok
// SIG undefined FUN_14077c970(void)

void FUN_14077c970(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_140778bd0(param_1 + -0x5f8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014077c9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x38) + 0x58))
              ((longlong *)(lVar1 + 0x38),param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 14077c9d0 FUN_14077c9d0 body=89 status=ok
// SIG undefined FUN_14077c9d0(void)

undefined8 FUN_14077c9d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  
  if ((param_1[0x3e] != 0) && (param_1[0x3f] != 0)) {
    plVar1 = (longlong *)param_1[0x3f];
    lVar2 = *plVar1;
    uVar4 = (**(code **)(*param_1 + 0x420))();
    cVar3 = (**(code **)(lVar2 + 0x48))(plVar1,uVar4);
    if (cVar3 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14077ca30 FUN_14077ca30 body=515 status=ok
// SIG undefined FUN_14077ca30(void)

undefined8 FUN_14077ca30(longlong param_1)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int local_res8 [2];
  
  if (*(longlong *)(param_1 + 0x228) == 0) {
    return 1;
  }
  if (*(longlong *)(param_1 + 0x230) == 0) {
    return 0;
  }
  lVar3 = FUN_142dcd660(*(longlong *)(param_1 + 0x230),0);
  if (lVar3 == 0) {
    return 0;
  }
  lVar6 = *(longlong *)(param_1 + 0x228);
  FUN_140777f40(lVar6 + 0x1c0,local_res8,lVar3);
  lVar3 = 0;
  if (local_res8[0] != -1) {
    lVar3 = (longlong)local_res8[0] * 0x380 + *(longlong *)(lVar6 + 0x1c0);
  }
  lVar6 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar6 = 0;
  }
  if (lVar6 == 0) {
    return 0;
  }
  FUN_140785750(param_1,lVar6);
  if (*(int *)(lVar6 + 0x350) <= (int)(uint)*(byte *)(param_1 + 0x860)) {
    return 0;
  }
  lVar3 = lVar6 + 8;
  lVar5 = *(longlong *)(lVar6 + 0x348);
  if (*(longlong *)(lVar6 + 0x348) == 0) {
    lVar5 = lVar3;
  }
  lVar4 = (ulonglong)*(byte *)(param_1 + 0x860) * 0x68;
  if (*(float *)(lVar5 + 8 + lVar4) <= 0.0) {
    return 0;
  }
  if (3.4028235e+38 <= *(float *)(lVar5 + lVar4)) {
    return 0;
  }
  if ((*(char *)(param_1 + 0x460) != '\0') && (0.0 < *(float *)(param_1 + 0x1d4))) {
    FUN_140785750(param_1,lVar6);
    fVar8 = 3.4028235e+38;
    if ((int)(uint)*(byte *)(param_1 + 0x860) < *(int *)(lVar6 + 0x350)) {
      lVar5 = *(longlong *)(lVar6 + 0x348);
      if (*(longlong *)(lVar6 + 0x348) == 0) {
        lVar5 = lVar3;
      }
      lVar4 = (ulonglong)*(byte *)(param_1 + 0x860) * 0x68;
      fVar9 = *(float *)(lVar5 + 8 + lVar4);
      if (((0.0 < fVar9) && (fVar1 = *(float *)(lVar5 + lVar4), fVar1 < 3.4028235e+38)) &&
         (fVar8 = fVar1, fVar9 <= 0.0)) {
        fVar8 = 3.4028235e+38;
      }
    }
    fVar9 = fVar8;
    if ((int)(uint)*(byte *)(param_1 + 0x870) < *(int *)(lVar6 + 0x350)) {
      lVar5 = *(longlong *)(lVar6 + 0x348);
      if (*(longlong *)(lVar6 + 0x348) == 0) {
        lVar5 = lVar3;
      }
      lVar3 = (ulonglong)*(byte *)(param_1 + 0x870) * 0x68;
      fVar1 = *(float *)(lVar5 + 8 + lVar3);
      if ((0.0 < fVar1) && (fVar7 = *(float *)(lVar5 + lVar3), fVar7 < 3.4028235e+38)) {
        if (fVar1 <= 0.0) {
          fVar7 = 3.4028235e+38;
        }
        fVar9 = fVar7;
        if (fVar8 <= fVar7) {
          fVar9 = fVar8;
        }
      }
    }
    if (*(float *)(param_1 + 0x1d4) <= fVar9) {
      cVar2 = '\x01';
      goto LAB_14077cc03;
    }
  }
  cVar2 = '\0';
LAB_14077cc03:
  *(char *)(param_1 + 0x6b0) = cVar2;
  if (cVar2 != '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x6b0) = 0;
  return 1;
}



// FUNCTION 14077cc40 FUN_14077cc40 body=149 status=ok
// SIG undefined FUN_14077cc40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14077cc40(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_3c8 [32];
  undefined1 local_3a8 [908];
  byte local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  lVar1 = FUN_142ddddc0();
  uVar2 = 0;
  if (lVar1 != 0) {
    FUN_142dc1ad0(local_3a8);
    uVar2 = FUN_142dd0170(lVar1,param_2,local_3a8);
    if ((char)uVar2 != '\0') {
      lVar1 = FUN_140765020(param_1);
      uVar2 = 0;
      if (lVar1 != 0) {
        return (ulonglong)(local_1c & 1);
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 14077cce0 FUN_14077cce0 body=40 status=ok
// SIG undefined FUN_14077cce0(void)

byte FUN_14077cce0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140765020();
  if (lVar1 == 0) {
    return 0;
  }
  return *(byte *)(param_2 + 0x38c) & 1;
}



// FUNCTION 14077cd10 FUN_14077cd10 body=129 status=ok
// SIG undefined FUN_14077cd10(void)

bool FUN_14077cd10(char *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146859258) {
    _Init_thread_header(&DAT_146859258);
    if (DAT_146859258 == -1) {
      DAT_146859248 = -1;
      FName::FName(&DAT_146859250,L"Invalid",1);
      _Init_thread_footer(&DAT_146859258);
    }
  }
  return *param_1 != DAT_146859248;
}



// FUNCTION 14077cda0 FUN_14077cda0 body=637 status=ok
// SIG undefined FUN_14077cda0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14077cda0(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined1 local_res8 [8];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [80];
  longlong *local_18;
  
  cVar6 = (**(code **)(*param_1 + 0x30))();
  if (cVar6 != '\0') {
    param_1[0x12] = 0;
    uStack_a0 = DAT_1468b5d98;
    uStack_9c = (undefined4)_DAT_1468b5d90;
    uStack_98 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
    uStack_94 = DAT_1468b5d98;
    local_90 = local_90 & 0xffffff00;
    auVar3._8_4_ = DAT_1468b5d98;
    auVar3._0_8_ = _DAT_1468b5d90;
    auVar3._12_4_ = uStack_9c;
    *(undefined1 (*) [16])(param_1 + 0x13) = auVar3;
    param_1[0x15] = CONCAT44(uStack_a0,uStack_98);
    *(uint *)(param_1 + 0x16) = local_90;
    if (param_2 == '\0') {
      plVar2 = param_1 + 0x17;
      *(int *)plVar2 = (int)*plVar2 + -1;
      if ((int)*plVar2 < 0) {
        iVar7 = (int)param_1[0x1d] + -1;
        if (iVar7 < 1) {
          iVar7 = 0;
        }
        *(int *)(param_1 + 0x17) = iVar7;
      }
    }
    else if ((param_2 == '\x01') &&
            (iVar7 = (int)param_1[0x17] + 1, *(int *)(param_1 + 0x17) = iVar7,
            (int)param_1[0x1d] <= iVar7)) {
      *(undefined4 *)(param_1 + 0x17) = 0;
    }
    iVar7 = (int)param_1[0x17];
    if (((-1 < iVar7) && (iVar7 < (int)param_1[0x1d])) &&
       (plVar2 = *(longlong **)(param_1[0x1c] + (longlong)iVar7 * 8), plVar2 != (longlong *)0x0)) {
      local_a8 = uStack_9c;
      uStack_a4 = uStack_98;
      (**(code **)(*plVar2 + 0x328))(plVar2);
      (**(code **)(*plVar2 + 0x2e8))(plVar2);
      plVar8 = (longlong *)(**(code **)(*plVar2 + 0x2c8))(plVar2,local_res8);
      param_1[0x12] = *plVar8;
      lVar11 = *plVar2;
      uVar9 = FUN_1407bc360(local_68);
      puVar10 = (undefined4 *)(**(code **)(lVar11 + 0x298))(plVar2,local_88,uVar9);
      uVar12 = puVar10[1];
      uVar4 = puVar10[2];
      uVar5 = puVar10[3];
      *(undefined4 *)(param_1 + 0x13) = *puVar10;
      *(undefined4 *)((longlong)param_1 + 0x9c) = uVar12;
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      *(undefined4 *)((longlong)param_1 + 0xa4) = uVar5;
      param_1[0x15] = *(longlong *)(puVar10 + 4);
      *(undefined4 *)(param_1 + 0x16) = puVar10[6];
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_18 + 1;
        lVar11 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_18)(local_18);
          LOCK();
          piVar1 = (int *)((longlong)local_18 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_18 + 8))(local_18,1);
          }
        }
      }
    }
    param_1[0x18] = 0;
    local_90 = (uint)param_1[0x16];
    local_a8 = (undefined4)param_1[0x13];
    uStack_a4 = *(undefined4 *)((longlong)param_1 + 0x9c);
    uStack_a0 = (undefined4)param_1[0x14];
    uStack_9c = *(undefined4 *)((longlong)param_1 + 0xa4);
    uStack_98 = (undefined4)param_1[0x15];
    uStack_94 = (undefined4)((ulonglong)param_1[0x15] >> 0x20);
    uVar9 = (**(code **)(*param_1 + 0x20))(param_1);
    lVar11 = FUN_142ddc3a0(param_1 + 2,param_1[0x12],&local_a8,uVar9);
    if (((lVar11 != 0) && ((char)param_1[0x1a] == '\0')) &&
       (((*(char *)((longlong)param_1 + 0xd2) == '\0' &&
         (*(char *)((longlong)param_1 + 0xd1) == '\0')) ||
        (cVar6 = FUN_1407750c0(param_1), cVar6 == '\0')))) {
      *(undefined4 *)(param_1 + 0x19) = 0;
      if (*(char *)((longlong)param_1 + 0xb4) == '\0') {
        uVar12 = 0x7f7fffff;
      }
      else {
        uVar12 = 0x40a00000;
      }
      *(undefined4 *)((longlong)param_1 + 0xcc) = uVar12;
      (**(code **)(*param_1 + 0x38))(param_1);
    }
  }
  return;
}



// FUNCTION 14077d020 FUN_14077d020 body=37 status=ok
// SIG undefined FUN_14077d020(void)

void FUN_14077d020(longlong param_1)

{
  TBaseDelegate<void,FUniqueNetId_const_&,bool_const_>::ExecuteIfBound(param_1 + 0x70,param_1,2);
  UGameplayTask::EndTask(param_1);
  return;
}



// FUNCTION 14077d050 FUN_14077d050 body=241 status=ok
// SIG undefined FUN_14077d050(void)

void FUN_14077d050(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x32,0);
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x400))(param_1,&local_18);
  plVar4 = (longlong *)0x0;
  lVar3 = *plVar1;
  param_1[0x3e] = lVar3;
  plVar1 = (longlong *)plVar1[1];
  param_1[0x3f] = (longlong)plVar1;
  if (lVar3 == 0) {
    plVar1 = plVar4;
  }
  if ((((plVar1 != (longlong *)0x0) && (lVar3 = param_1[0x34], lVar3 != 0)) &&
      (*(longlong *)(lVar3 + 0x6a0) != 0)) &&
     ((lVar2 = FWeakObjectPtr::Get(lVar3 + 0x698), lVar2 != 0 &&
      (lVar3 = UObject::FindFunction(lVar2,*(undefined8 *)(lVar3 + 0x6a0)), lVar3 != 0)))) {
    if (param_1[0x3e] != 0) {
      plVar4 = (longlong *)param_1[0x3f];
    }
    lVar3 = param_1[0x34];
    local_18 = *(undefined4 *)(lVar3 + 0x698);
    local_14 = *(undefined4 *)(lVar3 + 0x69c);
    local_10 = *(undefined8 *)(lVar3 + 0x6a0);
    (**(code **)(*plVar4 + 0x98))(plVar4,&local_18);
  }
  return;
}



// FUNCTION 14077d150 FUN_14077d150 body=230 status=ok
// SIG undefined FUN_14077d150(void)

void FUN_14077d150(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x7f0)) {
    lVar7 = 0;
    do {
      if (param_2 != 0) {
        if (*(longlong *)(param_2 + 0x30) != 0) {
          lVar1 = UObject::GetPrivateStaticClass();
          lVar6 = *(longlong *)(param_2 + 0x30);
          for (lVar4 = lVar6; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
            if (lVar4 == lVar1) goto LAB_14077d1b1;
          }
        }
        lVar6 = 0;
LAB_14077d1b1:
        lVar4 = *(longlong *)(lVar7 + 0x90 + *(longlong *)(param_1 + 0x7e8));
        if (lVar4 != 0) {
          lVar2 = FUN_1428dfc70();
          lVar1 = lVar4;
          do {
            if (lVar1 == lVar2) goto LAB_14077d1e0;
            lVar1 = *(longlong *)(lVar1 + 0x30);
          } while (lVar1 != 0);
        }
        lVar4 = 0;
LAB_14077d1e0:
        if (lVar6 == lVar4) {
          (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x7e8) + lVar7) + 0x10))();
          plVar3 = (longlong *)(*(longlong *)(param_1 + 0x7e8) + lVar7);
          (**(code **)(*plVar3 + 0x28))(plVar3,1);
        }
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 0xf0;
    } while (iVar5 < *(int *)(param_1 + 0x7f0));
  }
  return;
}



// FUNCTION 14077d240 FUN_14077d240 body=120 status=ok
// SIG undefined FUN_14077d240(void)

void FUN_14077d240(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(lVar1 + 0x568);
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x508) + 0x10))();
    *(undefined8 *)(param_1 + 0x228) = uVar2;
    *(longlong *)(param_1 + 0x230) = (*(longlong **)(param_1 + 0x1a0))[0xbd];
                    /* WARNING: Could not recover jumptable at 0x00014077d294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x908))();
    return;
  }
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  return;
}



// FUNCTION 14077d2c0 FUN_14077d2c0 body=175 status=ok
// SIG undefined FUN_14077d2c0(void)

void FUN_14077d2c0(longlong param_1)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x6f1) != '\0') && (0 < *(int *)(param_1 + 0x7f0))) {
    (**(code **)(*(longlong *)
                  ((longlong)*(int *)(param_1 + 0x7f8) * 0xf0 + *(longlong *)(param_1 + 0x7e8)) +
                0x28))();
    if (0 < *(int *)(param_1 + 0x7f0)) {
      lVar1 = (longlong)*(int *)(param_1 + 0x7f8) * 0xf0 + *(longlong *)(param_1 + 0x7e8);
      *(undefined1 *)(param_1 + 0x7d8) = *(undefined1 *)(lVar1 + 8);
      *(undefined1 *)(param_1 + 0x808) = *(undefined1 *)(lVar1 + 0xb4);
      *(undefined1 *)(param_1 + 0x80a) = *(undefined1 *)(lVar1 + 0xd2);
      *(undefined1 *)(param_1 + 0x80b) = *(undefined1 *)(lVar1 + 0xd3);
      *(undefined8 *)(param_1 + 0x6f8) = *(undefined8 *)(lVar1 + 0x90);
      *(undefined8 *)(param_1 + 0x800) = *(undefined8 *)(lVar1 + 0xc0);
    }
  }
  return;
}



// FUNCTION 14077d370 FUN_14077d370 body=27 status=ok
// SIG undefined FUN_14077d370(void)

void FUN_14077d370(undefined8 param_1)

{
  FUN_14077f3f0();
  FUN_142dd4a20(param_1);
  return;
}



// FUNCTION 14077d390 XRPlayAreaChanged_Handler body=14 status=ok
// SIG undefined XRPlayAreaChanged_Handler(void)

void UVRNotificationsComponent::XRPlayAreaChanged_Handler(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x180,0);
  return;
}



// FUNCTION 14077d3d0 FUN_14077d3d0 body=153 status=ok
// SIG undefined FUN_14077d3d0(void)

void FUN_14077d3d0(longlong *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_18 [16];
  
  *(int *)((longlong)param_1 + 0x1dc) = *(int *)((longlong)param_1 + 0x1dc) + 1;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  if ((int)param_1[0x39] <= *(int *)((longlong)param_1 + 0x1dc)) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x400))(param_1,local_18);
    plVar4 = (longlong *)0x0;
    lVar1 = *plVar3;
    param_1[0x3e] = lVar1;
    plVar3 = (longlong *)plVar3[1];
    param_1[0x3f] = (longlong)plVar3;
    if (lVar1 == 0) {
      plVar3 = plVar4;
    }
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*param_1 + 0x420))(param_1);
      *(undefined1 *)(param_1 + 0x3b) = 0;
      if (param_1[0x3e] != 0) {
        plVar4 = (longlong *)param_1[0x3f];
      }
      (**(code **)(*plVar4 + 0x28))(plVar4,uVar2,0);
    }
  }
  return;
}



// FUNCTION 14077d470 FUN_14077d470 body=194 status=ok
// SIG undefined FUN_14077d470(void)

void FUN_14077d470(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    cVar1 = *(char *)(param_1 + 0x788);
    if (cVar1 == '\x01') {
      uVar2 = FUN_14076aaa0();
      lVar4 = *(longlong *)(param_2 + 0x568);
      if (lVar4 != 0) {
        uVar3 = FUN_142bbd6b0(lVar4,&DAT_1468593c0);
        FUN_140725870(lVar4,uVar3,uVar2);
      }
    }
    else {
      if (cVar1 == '\x02') {
        uVar2 = FUN_14076aaa0();
        lVar4 = FUN_14072df00(param_2,uVar2,0,0);
      }
      else {
        if (cVar1 != '\x03') {
          if (cVar1 != '\x04') {
            return;
          }
          FUN_14072e6b0(param_2,0);
          return;
        }
        uVar2 = FUN_14076aaa0();
        lVar4 = FUN_14072e550(param_2,uVar2,0);
      }
      if (lVar4 != 0) {
        FUN_142b7b2b0(lVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14077d540 FUN_14077d540 body=6128 status=ok
// SIG undefined FUN_14077d540(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14077d540(longlong param_1,undefined8 *param_2,longlong *param_3,float *param_4)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  float *pfVar14;
  undefined1 (*pauVar15) [12];
  int iVar16;
  undefined1 uVar17;
  longlong *plVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar32;
  float fVar33;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar35;
  float fVar36;
  float fVar37;
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
  undefined1 auStack_738 [32];
  uint local_718;
  longlong *local_708;
  undefined4 local_700;
  undefined4 local_6f8;
  undefined4 local_6f0;
  float local_6e8;
  float fStack_6e4;
  float fStack_6e0;
  float fStack_6dc;
  float local_6d8;
  float fStack_6d4;
  float fStack_6d0;
  float fStack_6cc;
  float local_6c8;
  float fStack_6c4;
  float fStack_6c0;
  float fStack_6bc;
  float local_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  float local_6a8;
  float fStack_6a4;
  float fStack_6a0;
  float fStack_69c;
  float local_698;
  float fStack_694;
  float fStack_690;
  float fStack_68c;
  float local_688;
  float fStack_684;
  float fStack_680;
  float fStack_67c;
  float local_678;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  float local_668;
  float fStack_664;
  float fStack_660;
  float fStack_65c;
  float local_658;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  float local_648;
  float fStack_644;
  float fStack_640;
  float fStack_63c;
  float local_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  undefined8 local_628;
  longlong *local_620;
  float *local_618;
  longlong local_610;
  float local_608;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  float local_5f8;
  float fStack_5f4;
  float fStack_5f0;
  float fStack_5ec;
  float local_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  float local_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float local_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined1 local_568 [8];
  longlong *local_560;
  float local_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  float local_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  float local_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  float local_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  undefined1 local_518 [8];
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined1 local_4e8;
  undefined1 local_4e7;
  undefined4 local_4e4;
  byte local_4e0;
  undefined1 local_4d8 [24];
  undefined1 local_4c0 [24];
  undefined1 local_4a8 [24];
  undefined1 local_490 [24];
  undefined1 local_478;
  undefined4 local_474;
  undefined1 local_470;
  undefined4 local_46c;
  undefined8 local_468;
  undefined8 local_460;
  longlong local_458;
  undefined **local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428 [2];
  undefined1 local_418;
  undefined1 local_417;
  undefined4 local_414;
  byte local_410;
  undefined1 local_408 [24];
  undefined1 local_3f0 [24];
  undefined1 local_3d8 [24];
  undefined1 local_3c0 [24];
  undefined1 local_3a8;
  undefined4 local_3a4;
  undefined1 local_3a0;
  undefined4 local_39c;
  undefined8 local_398;
  undefined8 local_390;
  longlong local_388;
  undefined1 local_380 [24];
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  float fStack_35c;
  undefined8 local_358;
  undefined8 uStack_350;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  uint uStack_32c;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
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
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  uint uStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  uint uStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined1 local_178 [16];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [8];
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [8];
  float fStack_130;
  float fStack_12c;
  undefined1 local_128 [48];
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_738;
  plVar18 = (longlong *)0x0;
  plVar9 = plVar18;
  if (0 < *(int *)(param_1 + 0x7f0)) {
    plVar9 = *(longlong **)
              ((longlong)*(int *)(param_1 + 0x7f8) * 0xf0 + 0xd8 + *(longlong *)(param_1 + 0x7e8));
  }
  if ((int)plVar9[0xe2] < 1) {
    local_628 = 0;
    plVar9 = plVar18;
  }
  else {
    plVar9 = *(longlong **)plVar9[0xe1];
  }
  if ((param_3 == (longlong *)0x0) || (local_708 = (longlong *)0x0, plVar9 == (longlong *)0x0)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    local_618 = param_4;
    local_588 = FUN_142e27720();
    lVar10 = (**(code **)(*param_3 + 0x628))(param_3,local_588);
    if (lVar10 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      local_610 = lVar10;
      FUN_142c62180(local_518);
      FUN_142c70760(lVar10,&local_708,plVar9,local_518);
      if (local_708 != (longlong *)0x0) {
        plVar11 = (longlong *)FUN_142e20fc0();
        plVar9 = local_708;
joined_r0x00014077d64f:
        if (plVar9 != (longlong *)0x0) {
          if (plVar9 != plVar11) goto code_r0x00014077d656;
          local_580 = FUN_142a07000();
          lVar10 = (**(code **)(*param_3 + 0x628))(param_3,local_580);
          plVar9 = plVar18;
          if (local_708 != (longlong *)0x0) {
            plVar12 = (longlong *)FUN_142e20fc0();
            for (plVar11 = local_708;
                (plVar9 = plVar18, plVar11 != (longlong *)0x0 &&
                (plVar9 = local_708, plVar11 != plVar12)); plVar11 = (longlong *)plVar11[6]) {
            }
          }
          plVar11 = (longlong *)plVar9[0x1f];
          if (plVar11 == (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x368))(plVar9);
            plVar11 = (longlong *)plVar9[0x1f];
            if (plVar11 != (longlong *)0x0) goto LAB_14077d716;
LAB_14077d753:
            plVar11 = plVar18;
          }
          else {
LAB_14077d716:
            lVar13 = UThrobber::GetPrivateStaticClass();
            if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
                lVar13 + 0x88)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (!bVar6) goto LAB_14077d753;
          }
          if (plVar11 != (longlong *)0x0) {
            local_578 = FUN_142e27720();
            (**(code **)(*param_3 + 0x628))(param_3,local_578);
            local_620 = (longlong *)0x0;
            FUN_142c81650(plVar11 + 0x17,&local_620,lVar10);
            plVar18 = local_620;
            if (local_620 != (longlong *)0x0) {
              lVar13 = UTextureRenderTarget::StaticClass();
              if ((*(int *)(plVar18[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar18[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
                  lVar13 + 0x88)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (bVar6) goto LAB_14077d7d0;
            }
            plVar18 = (longlong *)0x0;
          }
LAB_14077d7d0:
          if (((lVar10 != 0) && (plVar11 != (longlong *)0x0)) && (plVar18 != (longlong *)0x0)) {
            lVar13 = UEnvQueryTest_Random::StaticClass();
            if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
                lVar13 + 0x88)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              FUN_1407da930(local_518,*(undefined8 *)(param_1 + 0x118));
              cVar7 = FUN_1407cc0f0(plVar18);
              if (cVar7 == '\0') {
                plVar9 = *(longlong **)(param_1 + 0x118);
                local_570 = FUN_142e27720();
                lVar13 = (**(code **)(*plVar9 + 0x628))(plVar9,local_570);
                if ((lVar13 != 0) &&
                   (FUN_142c7bae0(lVar13,local_568,plVar11[0x35]), local_560 != (longlong *)0x0)) {
                  LOCK();
                  plVar9 = local_560 + 1;
                  lVar13 = *plVar9;
                  *(int *)plVar9 = (int)*plVar9 + -1;
                  UNLOCK();
                  if ((int)lVar13 == 1) {
                    (**(code **)*local_560)(local_560);
                    LOCK();
                    piVar1 = (int *)((longlong)local_560 + 0xc);
                    iVar16 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar16 == 1) {
                      (**(code **)(*local_560 + 8))(local_560,1);
                    }
                  }
                }
              }
            }
            lVar13 = lVar10;
            pfVar14 = (float *)FUN_14238d0c0(lVar10,local_128);
            auVar28 = *(undefined1 (*) [16])(pfVar14 + 8);
            fVar37 = auVar28._0_4_;
            fVar40 = auVar28._4_4_;
            fVar41 = auVar28._8_4_;
            fVar42 = auVar28._12_4_;
            auVar27._0_4_ = (float)((uint)fVar37 & _DAT_1468592d0);
            auVar27._4_4_ = (float)((uint)fVar40 & uRam00000001468592d4);
            auVar27._8_4_ = (float)((uint)fVar41 & uRam00000001468592d8);
            auVar27._12_4_ = (float)((uint)fVar42 & uRam00000001468592dc);
            auVar19._4_4_ = -(uint)(fRam00000001468592c4 < auVar27._4_4_);
            auVar19._0_4_ = -(uint)(_DAT_1468592c0 < auVar27._0_4_);
            auVar19._8_4_ = -(uint)(fRam00000001468592c8 < auVar27._8_4_);
            auVar19._12_4_ = -(uint)(fRam00000001468592cc < auVar27._12_4_);
            iVar16 = movmskps((int)lVar13,auVar19);
            fVar45 = _DAT_1468b5b70;
            fVar47 = fRam00000001468b5b74;
            fVar48 = fRam00000001468b5b78;
            fVar49 = fRam00000001468b5b7c;
            fVar26 = _DAT_1468b5b80;
            fVar32 = fRam00000001468b5b84;
            fVar33 = fRam00000001468b5b88;
            fVar34 = fRam00000001468b5b8c;
            fVar50 = _DAT_1468b5b90;
            fVar51 = fRam00000001468b5b94;
            fVar52 = fRam00000001468b5b98;
            fVar53 = fRam00000001468b5b9c;
            if (iVar16 != 0) {
              fVar45 = *pfVar14 * _DAT_1468592b0;
              fVar47 = pfVar14[1] * fRam00000001468592b4;
              fVar48 = pfVar14[2] * fRam00000001468592b8;
              fVar49 = pfVar14[3] * fRam00000001468592bc;
              auVar28 = rcpps(auVar27,auVar28);
              fVar26 = auVar28._0_4_;
              fVar32 = auVar28._4_4_;
              fVar33 = auVar28._8_4_;
              fVar34 = auVar28._12_4_;
              fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * fVar37;
              fVar32 = (fVar32 + fVar32) - fVar32 * fVar32 * fVar40;
              fVar33 = (fVar33 + fVar33) - fVar33 * fVar33 * fVar41;
              fVar34 = (fVar34 + fVar34) - fVar34 * fVar34 * fVar42;
              fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * fVar37;
              fVar32 = (fVar32 + fVar32) - fVar32 * fVar32 * fVar40;
              fVar33 = (fVar33 + fVar33) - fVar33 * fVar33 * fVar41;
              fVar34 = (fVar34 + fVar34) - fVar34 * fVar34 * fVar42;
              fVar50 = (float)(((uint)fVar26 &
                                -(uint)((float)((uint)fVar37 & _DAT_1468592d0) <= _DAT_1468592c0) ^
                               (uint)fVar26) & _DAT_146859270);
              fVar51 = (float)(((uint)fVar32 &
                                -(uint)((float)((uint)fVar40 & uRam00000001468592d4) <=
                                       fRam00000001468592c4) ^ (uint)fVar32) & uRam0000000146859274)
              ;
              fVar52 = (float)(((uint)fVar33 &
                                -(uint)((float)((uint)fVar41 & uRam00000001468592d8) <=
                                       fRam00000001468592c8) ^ (uint)fVar33) & uRam0000000146859278)
              ;
              fVar53 = (float)(((uint)fVar34 &
                                -(uint)((float)((uint)fVar42 & uRam00000001468592dc) <=
                                       fRam00000001468592cc) ^ (uint)fVar34) & uRam000000014685927c)
              ;
              fVar26 = pfVar14[4] * fVar50;
              fVar32 = pfVar14[5] * fVar51;
              fVar33 = pfVar14[6] * fVar52;
              fVar34 = pfVar14[7] * fVar53;
              fVar37 = fVar33 * fVar47 - fVar32 * fVar48;
              fVar40 = fVar26 * fVar48 - fVar33 * fVar45;
              fVar41 = fVar32 * fVar45 - fVar26 * fVar47;
              fVar42 = fVar34 * fVar49 - fVar34 * fVar49;
              fVar37 = fVar37 + fVar37;
              fVar40 = fVar40 + fVar40;
              fVar41 = fVar41 + fVar41;
              fVar42 = fVar42 + fVar42;
              fVar26 = (float)((uint)(0.0 - ((fVar41 * fVar47 - fVar40 * fVar48) +
                                            fVar26 + fVar37 * fVar49)) & _DAT_146859270);
              fVar32 = (float)((uint)(0.0 - ((fVar37 * fVar48 - fVar41 * fVar45) +
                                            fVar32 + fVar40 * fVar49)) & uRam0000000146859274);
              fVar33 = (float)((uint)(0.0 - ((fVar40 * fVar45 - fVar37 * fVar47) +
                                            fVar33 + fVar41 * fVar49)) & uRam0000000146859278);
              fVar34 = (float)((uint)(0.0 - ((fVar42 * fVar49 - fVar42 * fVar49) +
                                            fVar34 + fVar42 * fVar49)) & uRam000000014685927c);
            }
            uVar17 = 0;
            local_608 = fVar45;
            fStack_604 = fVar47;
            fStack_600 = fVar48;
            fStack_5fc = fVar49;
            local_5f8 = fVar26;
            fStack_5f4 = fVar32;
            fStack_5f0 = fVar33;
            fStack_5ec = fVar34;
            local_5e8 = fVar50;
            fStack_5e4 = fVar51;
            fStack_5e0 = fVar52;
            fStack_5dc = fVar53;
            if (*(char *)((longlong)plVar11 + 0x17e) == '\0') {
              lVar13 = FUN_142e5c1e0();
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if (bVar6) {
                uVar17 = *(undefined1 *)(lVar10 + 0xf30);
                FUN_142c97c50(lVar10,0);
                if (1e-08 < ABS(fVar50)) {
                  fVar37 = 1.0 / fVar50;
                }
                else {
                  fVar37 = 0.0;
                }
                if (1e-08 < ABS(fVar51)) {
                  fVar40 = 1.0 / fVar51;
                }
                else {
                  fVar40 = 0.0;
                }
                if (1e-08 < ABS(fVar52)) {
                  fVar41 = 1.0 / fVar52;
                }
                else {
                  fVar41 = 0.0;
                }
                local_5d8 = fVar50;
                fStack_5d4 = fVar51;
                fStack_5d0 = fVar52;
                fStack_5cc = fVar53;
                uVar8 = FRotator::Quaternion(&DAT_1468b5da0,&local_558);
                fVar44 = fRam000000014685926c;
                fVar43 = fRam0000000146859268;
                fVar46 = fRam0000000146859264;
                fVar42 = _DAT_146859260;
                auVar20._4_4_ = fVar51;
                auVar20._0_4_ = fVar50;
                auVar20._8_4_ = fVar52;
                auVar20._12_4_ = fVar53;
                auVar28._4_4_ = fVar40;
                auVar28._0_4_ = fVar37;
                auVar28._8_4_ = fVar41;
                auVar28._12_4_ = 0;
                auVar28 = minps(auVar20,auVar28);
                local_188 = local_558;
                fStack_184 = fStack_554;
                fStack_180 = fStack_550;
                fStack_17c = fStack_54c;
                auVar21._4_4_ = -(uint)(auVar28._4_4_ < fRam0000000146859344);
                auVar21._0_4_ = -(uint)(auVar28._0_4_ < _DAT_146859340);
                auVar21._8_4_ = -(uint)(auVar28._8_4_ < fRam0000000146859348);
                auVar21._12_4_ = -(uint)(auVar28._12_4_ < fRam000000014685934c);
                iVar16 = movmskps(uVar8,auVar21);
                local_178._4_4_ = DAT_1468b5d94;
                local_178._0_4_ = DAT_1468b5d90;
                local_178._8_4_ = DAT_1468b5d98;
                local_178._12_4_ = 0;
                if (iVar16 == 0) {
                  fVar35 = local_558 * fVar47;
                  fVar36 = local_558 * fVar45;
                  fVar26 = fVar26 * fVar37;
                  fVar32 = fVar32 * fVar40;
                  fVar33 = fVar33 * fVar41;
                  fVar34 = fVar34 * 0.0;
                  fVar43 = fStack_554 * fVar45;
                  fVar44 = fStack_554 * fVar47;
                  fVar42 = fStack_550 * fVar45;
                  fVar46 = fStack_550 * fVar48;
                  fVar45 = local_558 * fVar49 * _DAT_146859300 + fVar45 * fStack_54c +
                           fStack_554 * fVar48 * _DAT_1468592f0 +
                           fStack_550 * fVar47 * _DAT_1468592e0;
                  fVar47 = local_558 * fVar48 * fRam0000000146859304 + fVar47 * fStack_54c +
                           fStack_554 * fVar49 * fRam00000001468592f4 +
                           fVar42 * fRam00000001468592e4;
                  fVar48 = fVar35 * fRam0000000146859308 + fVar48 * fStack_54c +
                           fVar43 * fRam00000001468592f8 +
                           fStack_550 * fVar49 * fRam00000001468592e8;
                  fVar49 = fVar36 * fRam000000014685930c + fVar49 * fStack_54c +
                           fVar44 * fRam00000001468592fc + fVar46 * fRam00000001468592ec;
                  fVar42 = fVar33 * fStack_554 - fVar32 * fStack_550;
                  fVar46 = fVar26 * fStack_550 - fVar33 * local_558;
                  fVar43 = fVar32 * local_558 - fVar26 * fStack_554;
                  fVar44 = fVar34 * fStack_54c - fVar34 * fStack_54c;
                  fVar42 = fVar42 + fVar42;
                  fVar46 = fVar46 + fVar46;
                  fVar43 = fVar43 + fVar43;
                  fVar44 = fVar44 + fVar44;
                  fVar26 = (fVar43 * fStack_554 - fVar46 * fStack_550) +
                           fVar42 * fStack_54c + fVar26 + DAT_1468b5d90;
                  fVar32 = (fVar42 * fStack_550 - fVar43 * local_558) + fVar46 * fStack_54c + fVar32
                           + DAT_1468b5d94;
                  fVar33 = (fVar46 * local_558 - fVar42 * fStack_554) + fVar43 * fStack_54c + fVar33
                           + DAT_1468b5d98;
                  fVar34 = (fVar44 * fStack_54c - fVar44 * fStack_54c) +
                           fVar44 * fStack_54c + fVar34 + 0.0;
                }
                else {
                  fVar34 = fStack_554 + fStack_554;
                  fVar36 = fStack_550 + fStack_550;
                  fVar38 = local_558 * (local_558 + local_558);
                  fVar35 = (local_558 + local_558) * fStack_54c;
                  fStack_324 = (fVar36 * fStack_54c + fVar34 * local_558) * fVar37;
                  fStack_310 = (fVar35 + fVar36 * fStack_554) * fVar40;
                  local_308 = (fVar34 * fStack_54c + fVar36 * local_558) * fVar41;
                  local_318 = fVar40 * (fVar34 * local_558 - fVar36 * fStack_54c);
                  fStack_304 = fVar41 * (fVar36 * fStack_554 - fVar35);
                  fStack_320 = fVar37 * (fVar36 * local_558 - fVar34 * fStack_54c);
                  local_328 = (float)((uint)((_DAT_146859260 -
                                             (fStack_550 * fVar36 + fStack_554 * fVar34)) * fVar37)
                                     & _DAT_146859270);
                  fStack_314 = (float)((uint)((fRam0000000146859264 - (fStack_550 * fVar36 + fVar38)
                                              ) * fVar40) & uRam0000000146859274);
                  fStack_300 = (float)((uint)((fRam0000000146859268 - (fStack_554 * fVar34 + fVar38)
                                              ) * fVar41) & uRam0000000146859278);
                  fStack_31c = (float)((uint)((fRam000000014685926c - (fVar38 + fVar38)) * 0.0) &
                                      uRam000000014685927c);
                  fVar34 = fVar47 + fVar47;
                  fVar35 = fVar48 + fVar48;
                  fVar36 = fVar45 * (fVar45 + fVar45);
                  fVar38 = fVar49 * (fVar45 + fVar45);
                  local_2f8 = DAT_1468b5d90;
                  fStack_2f4 = DAT_1468b5d94;
                  fStack_2f0 = DAT_1468b5d98;
                  fStack_2ec = fRam000000014685926c;
                  fStack_2e4 = (fVar49 * fVar35 + fVar45 * fVar34) * fVar50;
                  fStack_2d0 = (fVar38 + fVar47 * fVar35) * fVar51;
                  local_2c8 = (fVar49 * fVar34 + fVar45 * fVar35) * fVar52;
                  local_2d8 = fVar51 * (fVar45 * fVar34 - fVar49 * fVar35);
                  fStack_2c4 = fVar52 * (fVar47 * fVar35 - fVar38);
                  fStack_2e0 = fVar50 * (fVar45 * fVar35 - fVar49 * fVar34);
                  local_2e8 = (float)((uint)((_DAT_146859260 - (fVar48 * fVar35 + fVar47 * fVar34))
                                            * fVar50) & _DAT_146859270);
                  fStack_2d4 = (float)((uint)((fRam0000000146859264 - (fVar48 * fVar35 + fVar36)) *
                                             fVar51) & uRam0000000146859274);
                  fStack_2c0 = (float)((uint)((fRam0000000146859268 - (fVar47 * fVar34 + fVar36)) *
                                             fVar52) & uRam0000000146859278);
                  fStack_2dc = (float)((uint)((fRam000000014685926c - (fVar36 + fVar36)) * fVar53) &
                                      uRam000000014685927c);
                  local_6e8 = fStack_2e4 * local_318 + local_2e8 * local_328 +
                              fStack_2e0 * local_308 + fStack_2dc * DAT_1468b5d90;
                  fStack_6e4 = fStack_2e4 * fStack_314 + local_2e8 * fStack_324 +
                               fStack_2e0 * fStack_304 + fStack_2dc * DAT_1468b5d94;
                  fStack_6e0 = fStack_2e4 * fStack_310 + local_2e8 * fStack_320 +
                               fStack_2e0 * fStack_300 + fStack_2dc * DAT_1468b5d98;
                  fStack_6dc = fStack_2e4 * fStack_31c + local_2e8 * fStack_31c +
                               fStack_2e0 * fStack_31c + fStack_2dc * fRam000000014685926c;
                  fStack_2ac = fRam000000014685926c;
                  local_6d8 = fStack_2d4 * local_318 + local_2d8 * local_328 +
                              fStack_2d0 * local_308 + fStack_2dc * DAT_1468b5d90;
                  fStack_6d4 = fStack_2d4 * fStack_314 + local_2d8 * fStack_324 +
                               fStack_2d0 * fStack_304 + fStack_2dc * DAT_1468b5d94;
                  fStack_6d0 = fStack_2d4 * fStack_310 + local_2d8 * fStack_320 +
                               fStack_2d0 * fStack_300 + fStack_2dc * DAT_1468b5d98;
                  fStack_6cc = fStack_2d4 * fStack_31c + local_2d8 * fStack_31c +
                               fStack_2d0 * fStack_31c + fStack_2dc * fRam000000014685926c;
                  local_6c8 = fStack_2c4 * local_318 + local_2c8 * local_328 +
                              fStack_2c0 * local_308 + fStack_2dc * DAT_1468b5d90;
                  fStack_6c4 = fStack_2c4 * fStack_314 + local_2c8 * fStack_324 +
                               fStack_2c0 * fStack_304 + fStack_2dc * DAT_1468b5d94;
                  fStack_6c0 = fStack_2c4 * fStack_310 + local_2c8 * fStack_320 +
                               fStack_2c0 * fStack_300 + fStack_2dc * DAT_1468b5d98;
                  fStack_6bc = fStack_2c4 * fStack_31c + local_2c8 * fStack_31c +
                               fStack_2c0 * fStack_31c + fStack_2dc * fRam000000014685926c;
                  local_6b8 = fVar32 * local_318 + fVar26 * local_328 + fVar33 * local_308 +
                              fRam000000014685926c * DAT_1468b5d90;
                  fStack_6b4 = fVar32 * fStack_314 + fVar26 * fStack_324 + fVar33 * fStack_304 +
                               fRam000000014685926c * DAT_1468b5d94;
                  fStack_6b0 = fVar32 * fStack_310 + fVar26 * fStack_320 + fVar33 * fStack_300 +
                               fRam000000014685926c * DAT_1468b5d98;
                  fStack_6ac = fVar32 * fStack_31c + fVar26 * fStack_31c + fVar33 * fStack_31c +
                               fRam000000014685926c * fRam000000014685926c;
                  fStack_30c = fStack_31c;
                  fStack_2fc = fStack_31c;
                  fStack_2cc = fStack_2dc;
                  fStack_2bc = fStack_2dc;
                  local_2b8 = fVar26;
                  fStack_2b4 = fVar32;
                  fStack_2b0 = fVar33;
                  FMatrix::RemoveScaling(&local_6e8);
                  local_198 = (float)(-(uint)(_DAT_146859340 <= fVar50 * fVar37) &
                                      (_DAT_146859330 ^ (uint)fVar42) ^ _DAT_146859330);
                  fStack_194 = (float)(-(uint)(fRam0000000146859344 <= fVar51 * fVar40) &
                                       (uRam0000000146859334 ^ (uint)fVar46) ^ uRam0000000146859334)
                  ;
                  fStack_190 = (float)(-(uint)(fRam0000000146859348 <= fVar52 * fVar41) &
                                       (uRam0000000146859338 ^ (uint)fVar43) ^ uRam0000000146859338)
                  ;
                  uStack_18c = -(uint)(fRam000000014685934c <= fVar53 * 0.0) &
                               (uRam000000014685933c ^ (uint)fVar44) ^ uRam000000014685933c;
                  local_6e8 = local_6e8 * local_198;
                  fStack_6e4 = fStack_6e4 * local_198;
                  fStack_6e0 = fStack_6e0 * local_198;
                  fStack_6d4 = fStack_6d4 * fStack_194;
                  fStack_6d0 = fStack_6d0 * fStack_194;
                  local_6d8 = local_6d8 * fStack_194;
                  fStack_6c4 = fStack_6c4 * fStack_190;
                  fStack_6c0 = fStack_6c0 * fStack_190;
                  local_6c8 = local_6c8 * fStack_190;
                  FQuat::FQuat(&local_5c8,&local_6e8);
                  local_700 = 0x322bcc77;
                  auVar29._0_4_ = local_5c8 * local_5c8 + fStack_5c0 * fStack_5c0;
                  auVar29._4_4_ = fStack_5c4 * fStack_5c4 + fStack_5bc * fStack_5bc;
                  auVar29._8_4_ = fStack_5c0 * fStack_5c0 + local_5c8 * local_5c8;
                  auVar29._12_4_ = fStack_5bc * fStack_5bc + fStack_5c4 * fStack_5c4;
                  fVar45 = auVar29._4_4_ + auVar29._0_4_;
                  fVar26 = auVar29._8_4_ + auVar29._4_4_;
                  fVar32 = auVar29._12_4_ + auVar29._8_4_;
                  fVar33 = auVar29._0_4_ + auVar29._12_4_;
                  auVar2._4_4_ = fVar26;
                  auVar2._0_4_ = fVar45;
                  auVar2._8_4_ = fVar32;
                  auVar2._12_4_ = fVar33;
                  auVar28 = rsqrtps(auVar29,auVar2);
                  fVar42 = auVar28._0_4_;
                  fVar47 = auVar28._4_4_;
                  fVar48 = auVar28._8_4_;
                  fVar49 = auVar28._12_4_;
                  fVar42 = (_DAT_146859320 - fVar42 * fVar42 * fVar45 * _DAT_146859320) * fVar42 +
                           fVar42;
                  fVar47 = (fRam0000000146859324 - fVar47 * fVar47 * fVar26 * fRam0000000146859324)
                           * fVar47 + fVar47;
                  fVar48 = (fRam0000000146859328 - fVar48 * fVar48 * fVar32 * fRam0000000146859328)
                           * fVar48 + fVar48;
                  fVar49 = (fRam000000014685932c - fVar49 * fVar49 * fVar33 * fRam000000014685932c)
                           * fVar49 + fVar49;
                  fVar34 = 0.0;
                  fVar45 = (float)(((uint)(((_DAT_146859320 -
                                            fVar42 * fVar42 * fVar45 * _DAT_146859320) * fVar42 +
                                           fVar42) * local_5c8) ^ _DAT_146859310) &
                                   -(uint)(1e-08 <= fVar45) ^ _DAT_146859310);
                  fVar47 = (float)(((uint)(((fRam0000000146859324 -
                                            fVar47 * fVar47 * fVar26 * fRam0000000146859324) *
                                            fVar47 + fVar47) * fStack_5c4) ^ uRam0000000146859314) &
                                   -(uint)(1e-08 <= fVar26) ^ uRam0000000146859314);
                  fVar48 = (float)(((uint)(((fRam0000000146859328 -
                                            fVar48 * fVar48 * fVar32 * fRam0000000146859328) *
                                            fVar48 + fVar48) * fStack_5c0) ^ uRam0000000146859318) &
                                   -(uint)(1e-08 <= fVar32) ^ uRam0000000146859318);
                  fVar49 = (float)(((uint)(((fRam000000014685932c -
                                            fVar49 * fVar49 * fVar33 * fRam000000014685932c) *
                                            fVar49 + fVar49) * fStack_5bc) ^ uRam000000014685931c) &
                                   -(uint)(1e-08 <= fVar33) ^ uRam000000014685931c);
                  fVar26 = local_6b8;
                  fVar32 = fStack_6b4;
                  fVar33 = fStack_6b0;
                  local_5c8 = fVar45;
                  fStack_5c4 = fVar47;
                  fStack_5c0 = fVar48;
                  fStack_5bc = fVar49;
                }
                fVar53 = fVar53 * 0.0;
                fVar52 = fVar52 * fVar41;
                fVar51 = fVar51 * fVar40;
                fVar50 = fVar50 * fVar37;
                local_608 = fVar45;
                fStack_604 = fVar47;
                fStack_600 = fVar48;
                fStack_5fc = fVar49;
                local_5f8 = fVar26;
                fStack_5f4 = fVar32;
                fStack_5f0 = fVar33;
                fStack_5ec = fVar34;
                local_5e8 = fVar50;
                fStack_5e4 = fVar51;
                fStack_5e0 = fVar52;
                fStack_5dc = fVar53;
              }
            }
            fVar42 = fRam000000014685926c;
            fVar43 = (float)((uint)_DAT_146859260 & _DAT_146859270);
            fVar44 = (float)((uint)fRam0000000146859264 & uRam0000000146859274);
            fVar35 = (float)((uint)fRam0000000146859268 & uRam0000000146859278);
            fVar36 = (float)((uint)fRam000000014685926c & uRam000000014685927c);
            local_368 = 0;
            uStack_364 = 0;
            uStack_360 = 0;
            fStack_35c = fRam000000014685926c;
            local_358 = 0;
            uStack_350 = 0;
            local_348 = fVar43;
            fStack_344 = fVar44;
            fStack_340 = fVar35;
            fStack_33c = fVar36;
            uVar8 = (**(code **)(*plVar18 + 0x2e8))(plVar18);
            fVar46 = fRam000000014685926c;
            fVar41 = fRam0000000146859268;
            fVar40 = fRam0000000146859264;
            fVar37 = _DAT_146859260;
            if ((char)uVar8 != '\0') {
              auVar22._4_4_ = fVar51;
              auVar22._0_4_ = fVar50;
              auVar22._8_4_ = fVar52;
              auVar22._12_4_ = fVar53;
              auVar5._4_4_ = fVar44;
              auVar5._0_4_ = fVar43;
              auVar5._8_4_ = fVar35;
              auVar5._12_4_ = fVar36;
              auVar28 = minps(auVar22,auVar5);
              local_5a8 = _DAT_146859340;
              fStack_5a4 = fRam0000000146859344;
              fStack_5a0 = fRam0000000146859348;
              fStack_59c = fRam000000014685934c;
              auVar23._4_4_ = -(uint)(auVar28._4_4_ < fRam0000000146859344);
              auVar23._0_4_ = -(uint)(auVar28._0_4_ < _DAT_146859340);
              auVar23._8_4_ = -(uint)(auVar28._8_4_ < fRam0000000146859348);
              auVar23._12_4_ = -(uint)(auVar28._12_4_ < fRam000000014685934c);
              iVar16 = movmskps(uVar8,auVar23);
              if (iVar16 == 0) {
                fVar26 = fVar43 * fVar26;
                fVar32 = fVar44 * fVar32;
                fVar33 = fVar35 * fVar33;
                fVar34 = fVar36 * fVar34;
                local_548 = fVar49 * 0.0 * _DAT_146859300 + fVar45 * fVar42 +
                            fVar48 * 0.0 * _DAT_1468592f0 + fVar47 * 0.0 * _DAT_1468592e0;
                fStack_544 = fVar48 * 0.0 * fRam0000000146859304 + fVar47 * fVar42 +
                             fVar49 * 0.0 * fRam00000001468592f4 +
                             fVar45 * 0.0 * fRam00000001468592e4;
                fStack_540 = fVar47 * 0.0 * fRam0000000146859308 + fVar48 * fVar42 +
                             fVar45 * 0.0 * fRam00000001468592f8 +
                             fVar49 * 0.0 * fRam00000001468592e8;
                fStack_53c = fVar45 * 0.0 * fRam000000014685930c + fVar49 * fVar42 +
                             fVar47 * 0.0 * fRam00000001468592fc +
                             fVar48 * 0.0 * fRam00000001468592ec;
                fVar37 = fVar33 * 0.0 - fVar32 * 0.0;
                fVar40 = fVar26 * 0.0 - fVar33 * 0.0;
                fVar41 = fVar32 * 0.0 - fVar26 * 0.0;
                fVar45 = fVar34 * fVar42 - fVar34 * fVar42;
                fVar37 = fVar37 + fVar37;
                fVar40 = fVar40 + fVar40;
                fVar41 = fVar41 + fVar41;
                fVar45 = fVar45 + fVar45;
                local_538 = (fVar41 * 0.0 - fVar40 * 0.0) + fVar37 * fVar42 + fVar26;
                fStack_534 = (fVar37 * 0.0 - fVar41 * 0.0) + fVar40 * fVar42 + fVar32;
                fStack_530 = (fVar40 * 0.0 - fVar37 * 0.0) + fVar41 * fVar42 + fVar33;
                fStack_52c = (fVar45 * fVar42 - fVar45 * fVar42) + fVar45 * fVar42 + fVar34;
                uVar8 = 0;
              }
              else {
                fStack_2a4 = (fVar42 * 0.0 + 0.0) * fVar43;
                fStack_290 = (fVar42 * 0.0 + 0.0) * fVar44;
                local_288 = (fVar42 * 0.0 + 0.0) * fVar35;
                local_298 = fVar44 * (0.0 - fVar42 * 0.0);
                fStack_284 = fVar35 * (0.0 - fVar42 * 0.0);
                fStack_2a0 = fVar43 * (0.0 - fVar42 * 0.0);
                fVar42 = fVar47 + fVar47;
                fVar38 = fVar48 + fVar48;
                local_2a8 = (float)((uint)((_DAT_146859260 - 0.0) * fVar43) & _DAT_146859270);
                fStack_294 = (float)((uint)((fRam0000000146859264 - 0.0) * fVar44) &
                                    uRam0000000146859274);
                fStack_280 = (float)((uint)((fRam0000000146859268 - 0.0) * fVar35) &
                                    uRam0000000146859278);
                fStack_29c = (float)((uint)((fRam000000014685926c - 0.0) * fVar36) &
                                    uRam000000014685927c);
                fVar39 = fVar45 * (fVar45 + fVar45);
                fVar34 = (fVar45 + fVar45) * fVar49;
                local_278 = 0;
                uStack_274 = 0;
                uStack_270 = 0;
                fStack_26c = fRam000000014685926c;
                fStack_264 = (fVar38 * fVar49 + fVar42 * fVar45) * fVar50;
                fStack_250 = (fVar34 + fVar38 * fVar47) * fVar51;
                local_248 = (fVar42 * fVar49 + fVar38 * fVar45) * fVar52;
                local_258 = fVar51 * (fVar42 * fVar45 - fVar38 * fVar49);
                fStack_244 = fVar52 * (fVar38 * fVar47 - fVar34);
                fStack_260 = fVar50 * (fVar38 * fVar45 - fVar42 * fVar49);
                local_268 = (float)((uint)((_DAT_146859260 - (fVar48 * fVar38 + fVar47 * fVar42)) *
                                          fVar50) & _DAT_146859270);
                fStack_254 = (float)((uint)((fRam0000000146859264 - (fVar48 * fVar38 + fVar39)) *
                                           fVar51) & uRam0000000146859274);
                fStack_240 = (float)((uint)((fRam0000000146859268 - (fVar47 * fVar42 + fVar39)) *
                                           fVar52) & uRam0000000146859278);
                fStack_25c = (float)((uint)((fRam000000014685926c - (fVar39 + fVar39)) * fVar53) &
                                    uRam000000014685927c);
                local_6a8 = local_268 * local_2a8 + fStack_264 * local_298 + fStack_260 * local_288
                            + fStack_25c * 0.0;
                fStack_6a4 = local_268 * fStack_2a4 + fStack_264 * fStack_294 +
                             fStack_260 * fStack_284 + fStack_25c * 0.0;
                fStack_6a0 = local_268 * fStack_2a0 + fStack_264 * fStack_290 +
                             fStack_260 * fStack_280 + fStack_25c * 0.0;
                fStack_69c = local_268 * fStack_29c + fStack_264 * fStack_29c +
                             fStack_260 * fStack_29c + fStack_25c * fRam000000014685926c;
                fStack_22c = fRam000000014685926c;
                local_698 = fStack_254 * local_298 + local_258 * local_2a8 + fStack_250 * local_288
                            + fStack_25c * 0.0;
                fStack_694 = fStack_254 * fStack_294 + local_258 * fStack_2a4 +
                             fStack_250 * fStack_284 + fStack_25c * 0.0;
                fStack_690 = fStack_254 * fStack_290 + local_258 * fStack_2a0 +
                             fStack_250 * fStack_280 + fStack_25c * 0.0;
                fStack_68c = fStack_254 * fStack_29c + local_258 * fStack_29c +
                             fStack_250 * fStack_29c + fStack_25c * fRam000000014685926c;
                local_688 = fStack_244 * local_298 + local_248 * local_2a8 + fStack_240 * local_288
                            + fStack_25c * 0.0;
                fStack_684 = fStack_244 * fStack_294 + local_248 * fStack_2a4 +
                             fStack_240 * fStack_284 + fStack_25c * 0.0;
                fStack_680 = fStack_244 * fStack_290 + local_248 * fStack_2a0 +
                             fStack_240 * fStack_280 + fStack_25c * 0.0;
                fStack_67c = fStack_244 * fStack_29c + local_248 * fStack_29c +
                             fStack_240 * fStack_29c + fStack_25c * fRam000000014685926c;
                local_678 = fVar32 * local_298 + fVar26 * local_2a8 + fVar33 * local_288 +
                            fRam000000014685926c * 0.0;
                fStack_674 = fVar32 * fStack_294 + fVar26 * fStack_2a4 + fVar33 * fStack_284 +
                             fRam000000014685926c * 0.0;
                fStack_670 = fVar32 * fStack_290 + fVar26 * fStack_2a0 + fVar33 * fStack_280 +
                             fRam000000014685926c * 0.0;
                fStack_66c = fVar32 * fStack_29c + fVar26 * fStack_29c + fVar33 * fStack_29c +
                             fRam000000014685926c * fRam000000014685926c;
                fStack_28c = fStack_29c;
                fStack_27c = fStack_29c;
                fStack_24c = fStack_25c;
                fStack_23c = fStack_25c;
                local_238 = fVar26;
                fStack_234 = fVar32;
                fStack_230 = fVar33;
                FMatrix::RemoveScaling(&local_6a8);
                local_1a8 = (float)(-(uint)(_DAT_146859340 <= fVar43 * fVar50) &
                                    (_DAT_146859330 ^ (uint)fVar37) ^ _DAT_146859330);
                fStack_1a4 = (float)(-(uint)(fRam0000000146859344 <= fVar44 * fVar51) &
                                     (uRam0000000146859334 ^ (uint)fVar40) ^ uRam0000000146859334);
                fStack_1a0 = (float)(-(uint)(fRam0000000146859348 <= fVar35 * fVar52) &
                                     (uRam0000000146859338 ^ (uint)fVar41) ^ uRam0000000146859338);
                uStack_19c = -(uint)(fRam000000014685934c <= fVar36 * fVar53) &
                             (uRam000000014685933c ^ (uint)fVar46) ^ uRam000000014685933c;
                local_6a8 = local_6a8 * local_1a8;
                fStack_6a4 = fStack_6a4 * local_1a8;
                fStack_6a0 = fStack_6a0 * local_1a8;
                fStack_694 = fStack_694 * fStack_1a4;
                fStack_690 = fStack_690 * fStack_1a4;
                local_698 = local_698 * fStack_1a4;
                fStack_684 = fStack_684 * fStack_1a0;
                fStack_680 = fStack_680 * fStack_1a0;
                local_688 = local_688 * fStack_1a0;
                uVar8 = FQuat::FQuat(&local_5b8,&local_6a8);
                local_6f8 = 0x322bcc77;
                auVar30._0_4_ = local_5b8 * local_5b8 + fStack_5b0 * fStack_5b0;
                auVar30._4_4_ = fStack_5b4 * fStack_5b4 + fStack_5ac * fStack_5ac;
                auVar30._8_4_ = fStack_5b0 * fStack_5b0 + local_5b8 * local_5b8;
                auVar30._12_4_ = fStack_5ac * fStack_5ac + fStack_5b4 * fStack_5b4;
                fVar45 = auVar30._4_4_ + auVar30._0_4_;
                fVar47 = auVar30._8_4_ + auVar30._4_4_;
                fVar48 = auVar30._12_4_ + auVar30._8_4_;
                fVar49 = auVar30._0_4_ + auVar30._12_4_;
                auVar3._4_4_ = fVar47;
                auVar3._0_4_ = fVar45;
                auVar3._8_4_ = fVar48;
                auVar3._12_4_ = fVar49;
                auVar28 = rsqrtps(auVar30,auVar3);
                fVar37 = auVar28._0_4_;
                fVar40 = auVar28._4_4_;
                fVar41 = auVar28._8_4_;
                fVar42 = auVar28._12_4_;
                fVar37 = (_DAT_146859320 - fVar37 * fVar37 * fVar45 * _DAT_146859320) * fVar37 +
                         fVar37;
                fVar40 = (fRam0000000146859324 - fVar40 * fVar40 * fVar47 * fRam0000000146859324) *
                         fVar40 + fVar40;
                fVar41 = (fRam0000000146859328 - fVar41 * fVar41 * fVar48 * fRam0000000146859328) *
                         fVar41 + fVar41;
                fVar42 = (fRam000000014685932c - fVar42 * fVar42 * fVar49 * fRam000000014685932c) *
                         fVar42 + fVar42;
                fStack_52c = 0.0;
                local_548 = (float)(((uint)(((_DAT_146859320 -
                                             fVar37 * fVar37 * fVar45 * _DAT_146859320) * fVar37 +
                                            fVar37) * local_5b8) ^ _DAT_146859310) &
                                    -(uint)(1e-08 <= fVar45) ^ _DAT_146859310);
                fStack_544 = (float)(((uint)(((fRam0000000146859324 -
                                              fVar40 * fVar40 * fVar47 * fRam0000000146859324) *
                                              fVar40 + fVar40) * fStack_5b4) ^ uRam0000000146859314)
                                     & -(uint)(1e-08 <= fVar47) ^ uRam0000000146859314);
                fStack_540 = (float)(((uint)(((fRam0000000146859328 -
                                              fVar41 * fVar41 * fVar48 * fRam0000000146859328) *
                                              fVar41 + fVar41) * fStack_5b0) ^ uRam0000000146859318)
                                     & -(uint)(1e-08 <= fVar48) ^ uRam0000000146859318);
                fStack_53c = (float)(((uint)(((fRam000000014685932c -
                                              fVar42 * fVar42 * fVar49 * fRam000000014685932c) *
                                              fVar42 + fVar42) * fStack_5ac) ^ uRam000000014685931c)
                                     & -(uint)(1e-08 <= fVar49) ^ uRam000000014685931c);
                local_538 = local_678;
                fStack_534 = fStack_674;
                fStack_530 = fStack_670;
                local_5b8 = local_548;
                fStack_5b4 = fStack_544;
                fStack_5b0 = fStack_540;
                fStack_5ac = fStack_53c;
              }
              fVar34 = fRam000000014685926c;
              fVar33 = fRam0000000146859268;
              fVar32 = fRam0000000146859264;
              fVar26 = _DAT_146859260;
              fStack_51c = fVar36 * fVar53;
              fStack_520 = fVar35 * fVar52;
              fStack_524 = fVar44 * fVar51;
              local_528 = fVar43 * fVar50;
              fVar45 = *(float *)(param_1 + 0x210);
              fVar47 = *(float *)(param_1 + 0x214);
              fVar48 = *(float *)(param_1 + 0x218);
              fVar49 = *(float *)(param_1 + 0x21c);
              auVar24._4_4_ = fStack_524;
              auVar24._0_4_ = local_528;
              auVar24._8_4_ = fStack_520;
              auVar24._12_4_ = fStack_51c;
              auVar28 = *(undefined1 (*) [16])(param_1 + 0x230);
              fVar37 = auVar28._0_4_;
              fVar40 = auVar28._4_4_;
              fVar41 = auVar28._8_4_;
              fVar42 = auVar28._12_4_;
              auVar28 = minps(auVar24,auVar28);
              auVar25._4_4_ = -(uint)(auVar28._4_4_ < fRam0000000146859344);
              auVar25._0_4_ = -(uint)(auVar28._0_4_ < _DAT_146859340);
              auVar25._8_4_ = -(uint)(auVar28._8_4_ < fRam0000000146859348);
              auVar25._12_4_ = -(uint)(auVar28._12_4_ < fRam000000014685934c);
              iVar16 = movmskps(uVar8,auVar25);
              local_5a8 = _DAT_146859340;
              fStack_5a4 = fRam0000000146859344;
              fStack_5a0 = fRam0000000146859348;
              fStack_59c = fRam000000014685934c;
              if (iVar16 == 0) {
                fVar26 = fVar37 * local_538;
                fVar32 = fVar40 * fStack_534;
                fVar33 = fVar41 * fStack_530;
                fVar34 = fVar42 * fStack_52c;
                local_138._4_4_ = fVar40 * fStack_524;
                local_138._0_4_ = fVar37 * local_528;
                fStack_130 = fVar41 * fStack_520;
                fStack_12c = fVar42 * fStack_51c;
                local_158 = fVar45 * fStack_53c * _DAT_146859300 + fVar49 * local_548 +
                            fVar47 * fStack_540 * _DAT_1468592f0 +
                            fVar48 * fStack_544 * _DAT_1468592e0;
                fStack_154 = fVar45 * fStack_540 * fRam0000000146859304 + fVar49 * fStack_544 +
                             fVar47 * fStack_53c * fRam00000001468592f4 +
                             fVar48 * local_548 * fRam00000001468592e4;
                fStack_150 = fVar45 * fStack_544 * fRam0000000146859308 + fVar49 * fStack_540 +
                             fVar47 * local_548 * fRam00000001468592f8 +
                             fVar48 * fStack_53c * fRam00000001468592e8;
                fStack_14c = fVar45 * local_548 * fRam000000014685930c + fVar49 * fStack_53c +
                             fVar47 * fStack_544 * fRam00000001468592fc +
                             fVar48 * fStack_540 * fRam00000001468592ec;
                fVar37 = fVar33 * fVar47 - fVar32 * fVar48;
                fVar40 = fVar26 * fVar48 - fVar33 * fVar45;
                fVar41 = fVar32 * fVar45 - fVar26 * fVar47;
                fVar42 = fVar34 * fVar49 - fVar34 * fVar49;
                fVar37 = fVar37 + fVar37;
                fVar40 = fVar40 + fVar40;
                fVar41 = fVar41 + fVar41;
                fVar42 = fVar42 + fVar42;
                local_148._4_4_ =
                     (fVar37 * fVar48 - fVar41 * fVar45) + fVar49 * fVar40 + fVar32 +
                     *(float *)(param_1 + 0x224);
                local_148._0_4_ =
                     (fVar41 * fVar47 - fVar40 * fVar48) + fVar49 * fVar37 + fVar26 +
                     *(float *)(param_1 + 0x220);
                fStack_140 = (fVar40 * fVar45 - fVar37 * fVar47) + fVar49 * fVar41 + fVar33 +
                             *(float *)(param_1 + 0x228);
                fStack_13c = (fVar42 * fVar49 - fVar42 * fVar49) + fVar49 * fVar42 + fVar34 +
                             *(float *)(param_1 + 0x22c);
              }
              else {
                fVar50 = fVar47 + fVar47;
                fVar51 = fVar48 + fVar48;
                fVar46 = local_528 * fVar37;
                fVar43 = fStack_524 * fVar40;
                fVar44 = fStack_520 * fVar41;
                fVar35 = fStack_51c * fVar42;
                fVar52 = fVar45 * (fVar45 + fVar45);
                fVar53 = fVar49 * (fVar45 + fVar45);
                fStack_224 = (fVar49 * fVar51 + fVar45 * fVar50) * fVar37;
                fStack_210 = (fVar53 + fVar47 * fVar51) * fVar40;
                local_208 = (fVar49 * fVar50 + fVar45 * fVar51) * fVar41;
                local_218 = fVar40 * (fVar45 * fVar50 - fVar49 * fVar51);
                fStack_204 = fVar41 * (fVar47 * fVar51 - fVar53);
                fStack_220 = fVar37 * (fVar45 * fVar51 - fVar49 * fVar50);
                fVar45 = fStack_544 + fStack_544;
                fVar49 = fStack_540 + fStack_540;
                local_1f8 = *(float *)(param_1 + 0x220);
                fStack_1f4 = *(float *)(param_1 + 0x224);
                fStack_1f0 = *(float *)(param_1 + 0x228);
                local_228 = (float)((uint)((_DAT_146859260 - (fVar48 * fVar51 + fVar47 * fVar50)) *
                                          fVar37) & _DAT_146859270);
                fStack_214 = (float)((uint)((fRam0000000146859264 - (fVar48 * fVar51 + fVar52)) *
                                           fVar40) & uRam0000000146859274);
                fStack_200 = (float)((uint)((fRam0000000146859268 - (fVar47 * fVar50 + fVar52)) *
                                           fVar41) & uRam0000000146859278);
                fStack_21c = (float)((uint)((fRam000000014685926c - (fVar52 + fVar52)) * fVar42) &
                                    uRam000000014685927c);
                fVar40 = local_548 * (local_548 + local_548);
                fVar37 = (local_548 + local_548) * fStack_53c;
                fStack_1ec = fRam000000014685926c;
                fStack_1e4 = (fVar49 * fStack_53c + fVar45 * local_548) * local_528;
                fStack_1d0 = (fVar37 + fVar49 * fStack_544) * fStack_524;
                local_1c8 = (fVar45 * fStack_53c + fVar49 * local_548) * fStack_520;
                local_1d8 = fStack_524 * (fVar45 * local_548 - fVar49 * fStack_53c);
                fStack_1c4 = fStack_520 * (fVar49 * fStack_544 - fVar37);
                fStack_1e0 = local_528 * (fVar49 * local_548 - fVar45 * fStack_53c);
                local_1e8 = (float)((uint)((_DAT_146859260 -
                                           (fStack_540 * fVar49 + fStack_544 * fVar45)) * local_528)
                                   & _DAT_146859270);
                fStack_1d4 = (float)((uint)((fRam0000000146859264 - (fStack_540 * fVar49 + fVar40))
                                           * fStack_524) & uRam0000000146859274);
                fStack_1c0 = (float)((uint)((fRam0000000146859268 - (fStack_544 * fVar45 + fVar40))
                                           * fStack_520) & uRam0000000146859278);
                fStack_1dc = (float)((uint)((fRam000000014685926c - (fVar40 + fVar40)) * fStack_51c)
                                    & uRam000000014685927c);
                fStack_1ac = fRam000000014685926c;
                local_668 = fStack_1e4 * local_218 + local_1e8 * local_228 + fStack_1e0 * local_208
                            + fStack_1dc * local_1f8;
                fStack_664 = fStack_1e4 * fStack_214 + local_1e8 * fStack_224 +
                             fStack_1e0 * fStack_204 + fStack_1dc * fStack_1f4;
                fStack_660 = fStack_1e4 * fStack_210 + local_1e8 * fStack_220 +
                             fStack_1e0 * fStack_200 + fStack_1dc * fStack_1f0;
                fStack_65c = fStack_1e4 * fStack_21c + local_1e8 * fStack_21c +
                             fStack_1e0 * fStack_21c + fStack_1dc * fRam000000014685926c;
                local_658 = fStack_1d4 * local_218 + local_1d8 * local_228 + fStack_1d0 * local_208
                            + fStack_1dc * local_1f8;
                fStack_654 = fStack_1d4 * fStack_214 + local_1d8 * fStack_224 +
                             fStack_1d0 * fStack_204 + fStack_1dc * fStack_1f4;
                fStack_650 = fStack_1d4 * fStack_210 + local_1d8 * fStack_220 +
                             fStack_1d0 * fStack_200 + fStack_1dc * fStack_1f0;
                fStack_64c = fStack_1d4 * fStack_21c + local_1d8 * fStack_21c +
                             fStack_1d0 * fStack_21c + fStack_1dc * fRam000000014685926c;
                local_648 = fStack_1c4 * local_218 + local_1c8 * local_228 + fStack_1c0 * local_208
                            + fStack_1dc * local_1f8;
                fStack_644 = fStack_1c4 * fStack_214 + local_1c8 * fStack_224 +
                             fStack_1c0 * fStack_204 + fStack_1dc * fStack_1f4;
                fStack_640 = fStack_1c4 * fStack_210 + local_1c8 * fStack_220 +
                             fStack_1c0 * fStack_200 + fStack_1dc * fStack_1f0;
                fStack_63c = fStack_1c4 * fStack_21c + local_1c8 * fStack_21c +
                             fStack_1c0 * fStack_21c + fStack_1dc * fRam000000014685926c;
                local_638 = fStack_534 * local_218 + local_538 * local_228 + fStack_530 * local_208
                            + fRam000000014685926c * local_1f8;
                fStack_634 = fStack_534 * fStack_214 + local_538 * fStack_224 +
                             fStack_530 * fStack_204 + fRam000000014685926c * fStack_1f4;
                fStack_630 = fStack_534 * fStack_210 + local_538 * fStack_220 +
                             fStack_530 * fStack_200 + fRam000000014685926c * fStack_1f0;
                fStack_62c = fStack_534 * fStack_21c + local_538 * fStack_21c +
                             fStack_530 * fStack_21c + fRam000000014685926c * fRam000000014685926c;
                fStack_20c = fStack_21c;
                fStack_1fc = fStack_21c;
                fStack_1cc = fStack_1dc;
                fStack_1bc = fStack_1dc;
                local_1b8 = local_538;
                fStack_1b4 = fStack_534;
                fStack_1b0 = fStack_530;
                FMatrix::RemoveScaling(&local_668);
                local_338 = (float)(-(uint)(local_5a8 <= fVar46) & (_DAT_146859330 ^ (uint)fVar26) ^
                                   _DAT_146859330);
                fStack_334 = (float)(-(uint)(fStack_5a4 <= fVar43) &
                                     (uRam0000000146859334 ^ (uint)fVar32) ^ uRam0000000146859334);
                fStack_330 = (float)(-(uint)(fStack_5a0 <= fVar44) &
                                     (uRam0000000146859338 ^ (uint)fVar33) ^ uRam0000000146859338);
                uStack_32c = -(uint)(fStack_59c <= fVar35) & (uRam000000014685933c ^ (uint)fVar34) ^
                             uRam000000014685933c;
                local_668 = local_668 * local_338;
                fStack_664 = fStack_664 * local_338;
                fStack_660 = fStack_660 * local_338;
                fStack_654 = fStack_654 * fStack_334;
                fStack_650 = fStack_650 * fStack_334;
                local_658 = local_658 * fStack_334;
                fStack_644 = fStack_644 * fStack_330;
                fStack_640 = fStack_640 * fStack_330;
                local_648 = local_648 * fStack_330;
                FQuat::FQuat(&local_598,&local_668);
                local_6f0 = 0x322bcc77;
                local_138._4_4_ = fVar43;
                local_138._0_4_ = fVar46;
                fStack_130 = fVar44;
                fStack_12c = fVar35;
                auVar31._0_4_ = local_598 * local_598 + fStack_590 * fStack_590;
                auVar31._4_4_ = fStack_594 * fStack_594 + fStack_58c * fStack_58c;
                auVar31._8_4_ = fStack_590 * fStack_590 + local_598 * local_598;
                auVar31._12_4_ = fStack_58c * fStack_58c + fStack_594 * fStack_594;
                fVar45 = auVar31._4_4_ + auVar31._0_4_;
                fVar47 = auVar31._8_4_ + auVar31._4_4_;
                fVar48 = auVar31._12_4_ + auVar31._8_4_;
                fVar49 = auVar31._0_4_ + auVar31._12_4_;
                auVar4._4_4_ = fVar47;
                auVar4._0_4_ = fVar45;
                auVar4._8_4_ = fVar48;
                auVar4._12_4_ = fVar49;
                auVar28 = rsqrtps(auVar31,auVar4);
                fVar37 = auVar28._0_4_;
                fVar40 = auVar28._4_4_;
                fVar41 = auVar28._8_4_;
                fVar42 = auVar28._12_4_;
                fVar37 = (_DAT_146859320 - fVar37 * fVar37 * fVar45 * _DAT_146859320) * fVar37 +
                         fVar37;
                fVar40 = (fRam0000000146859324 - fVar40 * fVar40 * fVar47 * fRam0000000146859324) *
                         fVar40 + fVar40;
                fVar41 = (fRam0000000146859328 - fVar41 * fVar41 * fVar48 * fRam0000000146859328) *
                         fVar41 + fVar41;
                fVar42 = (fRam000000014685932c - fVar42 * fVar42 * fVar49 * fRam000000014685932c) *
                         fVar42 + fVar42;
                local_148._4_4_ = fStack_634;
                local_148._0_4_ = local_638;
                fStack_140 = fStack_630;
                local_598 = (float)(((uint)(((_DAT_146859320 -
                                             fVar37 * fVar37 * fVar45 * _DAT_146859320) * fVar37 +
                                            fVar37) * local_598) ^ _DAT_146859310) &
                                    -(uint)(1e-08 <= fVar45) ^ _DAT_146859310);
                fStack_594 = (float)(((uint)(((fRam0000000146859324 -
                                              fVar40 * fVar40 * fVar47 * fRam0000000146859324) *
                                              fVar40 + fVar40) * fStack_594) ^ uRam0000000146859314)
                                     & -(uint)(1e-08 <= fVar47) ^ uRam0000000146859314);
                fStack_590 = (float)(((uint)(((fRam0000000146859328 -
                                              fVar41 * fVar41 * fVar48 * fRam0000000146859328) *
                                              fVar41 + fVar41) * fStack_590) ^ uRam0000000146859318)
                                     & -(uint)(1e-08 <= fVar48) ^ uRam0000000146859318);
                fStack_58c = (float)(((uint)(((fRam000000014685932c -
                                              fVar42 * fVar42 * fVar49 * fRam000000014685932c) *
                                              fVar42 + fVar42) * fStack_58c) ^ uRam000000014685931c)
                                     & -(uint)(1e-08 <= fVar49) ^ uRam000000014685931c);
                fStack_13c = 0.0;
                local_158 = local_598;
                fStack_154 = fStack_594;
                fStack_150 = fStack_590;
                fStack_14c = fStack_58c;
              }
              pauVar15 = (undefined1 (*) [12])FUN_14222dc90(param_3,local_380);
              local_718 = local_718 & 0xffffff00;
              fStack_12c = 0.0;
              _local_138 = *pauVar15;
              FUN_14223d270(param_3,&local_158,0,0);
            }
            if (local_618 != (float *)0x0) {
              *local_618 = *(float *)(plVar18 + 0x12) /
                           (*(float *)(plVar11 + 0x2a) * *(float *)((longlong)plVar18 + 0x94));
            }
            if ((*(char *)((longlong)plVar11 + 0x17e) == '\0') &&
               (cVar7 = FUN_140771e00(lVar10), cVar7 != '\0')) {
              FUN_142c97c50(lVar10,uVar17);
            }
          }
          lVar10 = local_610;
          FUN_142c84570(local_610,local_708);
          local_448 = &PTR_FUN_143ff6170;
          local_440 = local_510;
          local_438 = local_508;
          local_430 = local_500;
          local_428[0] = 0;
          local_718 = 0;
          FUN_140771860(local_428,local_4f8,local_4f0,0);
          local_418 = local_4e8;
          local_417 = local_4e7;
          local_414 = local_4e4;
          local_410 = local_410 ^ (local_4e0 ^ local_410) & 7;
          FUN_1405e0d90(local_408,local_4d8);
          FUN_1405e0d90(local_3f0,local_4c0);
          FUN_1405e0d90(local_3d8,local_4a8);
          FUN_1405e0d90(local_3c0,local_490);
          local_3a8 = local_478;
          local_3a4 = local_474;
          local_3a0 = local_470;
          local_398 = local_468;
          local_390 = local_460;
          local_39c = local_46c;
          local_388 = local_458;
          if (local_458 != 0) {
            LOCK();
            *(int *)(local_458 + 0xc) = *(int *)(local_458 + 0xc) + 1;
            UNLOCK();
          }
          local_718 = local_718 & 0xffffff00;
          FUN_142c7bb40(lVar10,param_2,local_708,&local_448);
          goto LAB_14077d666;
        }
      }
      *param_2 = 0;
      param_2[1] = 0;
LAB_14077d666:
      FUN_142c63c50(local_518);
    }
  }
  return param_2;
code_r0x00014077d656:
  plVar9 = (longlong *)plVar9[6];
  goto joined_r0x00014077d64f;
}



// FUNCTION 14077ed30 FUN_14077ed30 body=57 status=ok
// SIG undefined FUN_14077ed30(void)

void FUN_14077ed30(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_18 [16];
  
  FUN_142238430();
  lVar1 = FUN_142c1f5b0(param_1);
  if (lVar1 != 0) {
    uVar2 = UGameplayTask_SpawnActor::GetPrivateStaticClass();
    FUN_142c23f40(lVar1,local_18,uVar2);
  }
  return;
}



// FUNCTION 14077ed70 FUN_14077ed70 body=1463 status=ok
// SIG undefined FUN_14077ed70(void)

void FUN_14077ed70(longlong param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 local_88 [128];
  
  FUN_142349c80();
  if (0.0 < *(float *)(param_1 + 0x1c0)) {
    *(float *)(param_1 + 0x240) = *(float *)(param_1 + 0x1c0);
  }
  if (*(char *)(param_1 + 0x738) != '\0') {
    *(undefined1 *)(param_1 + 0x248) = *(undefined1 *)(param_1 + 0x6b8);
    *(undefined1 *)(param_1 + 0x249) = *(undefined1 *)(param_1 + 0x6b9);
    *(undefined1 *)(param_1 + 0x24a) = *(undefined1 *)(param_1 + 0x6ba);
    *(undefined1 *)(param_1 + 0x24b) = *(undefined1 *)(param_1 + 0x6bb);
    *(undefined8 *)(param_1 + 0x24c) = *(undefined8 *)(param_1 + 0x6bc);
    *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_1 + 0x6c8);
    *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 0x6d0);
    *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0x6d8);
    *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x6e0);
    *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x6e8);
    *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_1 + 0x6f0);
    *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_1 + 0x6f8);
    *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x700);
    *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_1 + 0x708);
    *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_1 + 0x710);
    *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_1 + 0x714);
    *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_1 + 0x718);
    *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_1 + 0x71c);
    *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x720);
    *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_1 + 0x728);
    *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_1 + 0x72c);
    *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_1 + 0x730);
    *(undefined1 *)(param_1 + 0x2c8) = 1;
  }
  if (*(char *)(param_1 + 0x7c0) != '\0') {
    *(undefined1 *)(param_1 + 0x2d0) = *(undefined1 *)(param_1 + 0x740);
    *(undefined1 *)(param_1 + 0x2d1) = *(undefined1 *)(param_1 + 0x741);
    *(undefined1 *)(param_1 + 0x2d2) = *(undefined1 *)(param_1 + 0x742);
    *(undefined1 *)(param_1 + 0x2d3) = *(undefined1 *)(param_1 + 0x743);
    *(undefined8 *)(param_1 + 0x2d4) = *(undefined8 *)(param_1 + 0x744);
    *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x750);
    *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x758);
    *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x760);
    *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x768);
    *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x770);
    *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x778);
    *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x780);
    *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x788);
    *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x790);
    *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_1 + 0x798);
    *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(param_1 + 0x79c);
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x7a0);
    *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x7a4);
    *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_1 + 0x7a8);
    *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_1 + 0x7b0);
    *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_1 + 0x7b4);
    *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_1 + 0x7b8);
    *(undefined1 *)(param_1 + 0x350) = 1;
  }
  if (*(char *)(param_1 + 0x848) != '\0') {
    *(undefined1 *)(param_1 + 0x358) = *(undefined1 *)(param_1 + 0x7c8);
    *(undefined1 *)(param_1 + 0x359) = *(undefined1 *)(param_1 + 0x7c9);
    *(undefined1 *)(param_1 + 0x35a) = *(undefined1 *)(param_1 + 0x7ca);
    *(undefined1 *)(param_1 + 0x35b) = *(undefined1 *)(param_1 + 0x7cb);
    *(undefined8 *)(param_1 + 0x35c) = *(undefined8 *)(param_1 + 0x7cc);
    *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_1 + 0x7d8);
    *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_1 + 0x7e0);
    *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_1 + 0x7e8);
    *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(param_1 + 0x7f0);
    *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_1 + 0x7f8);
    *(undefined8 *)(param_1 + 0x390) = *(undefined8 *)(param_1 + 0x800);
    *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(param_1 + 0x808);
    *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(param_1 + 0x810);
    *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_1 + 0x818);
    *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_1 + 0x820);
    *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_1 + 0x824);
    *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_1 + 0x828);
    *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(param_1 + 0x82c);
    *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_1 + 0x830);
    *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_1 + 0x838);
    *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_1 + 0x83c);
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x840);
    *(undefined1 *)(param_1 + 0x3d8) = 1;
  }
  if (*(char *)(param_1 + 0x854) != '\0') {
    *(undefined8 *)(param_1 + 0x464) = *(undefined8 *)(param_1 + 0x84c);
    *(undefined1 *)(param_1 + 0x46c) = 1;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined1 *)(param_1 + 0x854) = 0;
  *(undefined1 *)(param_1 + 0x848) = 0;
  *(undefined1 *)(param_1 + 0x7c0) = 0;
  *(undefined1 *)(param_1 + 0x738) = 0;
  puVar2 = (undefined1 *)FUN_142de2eb0(local_88);
  *(undefined1 *)(param_1 + 0x7c8) = *puVar2;
  *(undefined1 *)(param_1 + 0x7c9) = puVar2[1];
  *(undefined1 *)(param_1 + 0x7ca) = puVar2[2];
  *(undefined1 *)(param_1 + 0x7cb) = puVar2[3];
  *(undefined8 *)(param_1 + 0x7cc) = *(undefined8 *)(puVar2 + 4);
  *(undefined8 *)(param_1 + 0x7d8) = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(param_1 + 0x7e0) = *(undefined8 *)(puVar2 + 0x18);
  uVar1 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(param_1 + 0x7e8) = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(param_1 + 0x7f0) = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(param_1 + 0x7f8) = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(param_1 + 0x800) = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(param_1 + 0x808) = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(param_1 + 0x810) = uVar1;
  *(undefined8 *)(param_1 + 0x818) = *(undefined8 *)(puVar2 + 0x50);
  uVar1 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(param_1 + 0x820) = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(param_1 + 0x828) = uVar1;
  *(undefined8 *)(param_1 + 0x830) = *(undefined8 *)(puVar2 + 0x68);
  *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(puVar2 + 0x70);
  *(undefined4 *)(param_1 + 0x83c) = *(undefined4 *)(puVar2 + 0x74);
  *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(puVar2 + 0x78);
  *(undefined1 *)(param_1 + 0x740) = *(undefined1 *)(param_1 + 0x7c8);
  *(undefined1 *)(param_1 + 0x741) = *(undefined1 *)(param_1 + 0x7c9);
  *(undefined1 *)(param_1 + 0x742) = *(undefined1 *)(param_1 + 0x7ca);
  *(undefined1 *)(param_1 + 0x743) = *(undefined1 *)(param_1 + 0x7cb);
  *(undefined8 *)(param_1 + 0x744) = *(undefined8 *)(param_1 + 0x7cc);
  *(undefined8 *)(param_1 + 0x750) = *(undefined8 *)(param_1 + 0x7d8);
  *(undefined8 *)(param_1 + 0x758) = *(undefined8 *)(param_1 + 0x7e0);
  *(undefined8 *)(param_1 + 0x760) = *(undefined8 *)(param_1 + 0x7e8);
  *(undefined8 *)(param_1 + 0x768) = *(undefined8 *)(param_1 + 0x7f0);
  *(undefined8 *)(param_1 + 0x770) = *(undefined8 *)(param_1 + 0x7f8);
  *(undefined8 *)(param_1 + 0x778) = *(undefined8 *)(param_1 + 0x800);
  *(undefined8 *)(param_1 + 0x780) = *(undefined8 *)(param_1 + 0x808);
  *(undefined8 *)(param_1 + 0x788) = *(undefined8 *)(param_1 + 0x810);
  *(undefined8 *)(param_1 + 0x790) = *(undefined8 *)(param_1 + 0x818);
  *(undefined8 *)(param_1 + 0x798) = *(undefined8 *)(param_1 + 0x820);
  *(undefined8 *)(param_1 + 0x7a0) = *(undefined8 *)(param_1 + 0x828);
  *(undefined8 *)(param_1 + 0x7a8) = *(undefined8 *)(param_1 + 0x830);
  *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(param_1 + 0x838);
  *(undefined4 *)(param_1 + 0x7b4) = *(undefined4 *)(param_1 + 0x83c);
  *(undefined4 *)(param_1 + 0x7b8) = *(undefined4 *)(param_1 + 0x840);
  *(undefined1 *)(param_1 + 0x6b8) = *(undefined1 *)(param_1 + 0x740);
  *(undefined1 *)(param_1 + 0x6b9) = *(undefined1 *)(param_1 + 0x741);
  *(undefined1 *)(param_1 + 0x6ba) = *(undefined1 *)(param_1 + 0x742);
  *(undefined1 *)(param_1 + 0x6bb) = *(undefined1 *)(param_1 + 0x743);
  *(undefined8 *)(param_1 + 0x6bc) = *(undefined8 *)(param_1 + 0x744);
  *(undefined8 *)(param_1 + 0x6c8) = *(undefined8 *)(param_1 + 0x750);
  *(undefined8 *)(param_1 + 0x6d0) = *(undefined8 *)(param_1 + 0x758);
  *(undefined8 *)(param_1 + 0x6d8) = *(undefined8 *)(param_1 + 0x760);
  *(undefined8 *)(param_1 + 0x6e0) = *(undefined8 *)(param_1 + 0x768);
  *(undefined8 *)(param_1 + 0x6e8) = *(undefined8 *)(param_1 + 0x770);
  *(undefined8 *)(param_1 + 0x6f0) = *(undefined8 *)(param_1 + 0x778);
  *(undefined8 *)(param_1 + 0x6f8) = *(undefined8 *)(param_1 + 0x780);
  *(undefined8 *)(param_1 + 0x700) = *(undefined8 *)(param_1 + 0x788);
  *(undefined8 *)(param_1 + 0x708) = *(undefined8 *)(param_1 + 0x790);
  *(undefined8 *)(param_1 + 0x710) = *(undefined8 *)(param_1 + 0x798);
  *(undefined8 *)(param_1 + 0x718) = *(undefined8 *)(param_1 + 0x7a0);
  *(undefined8 *)(param_1 + 0x720) = *(undefined8 *)(param_1 + 0x7a8);
  *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(param_1 + 0x7b0);
  *(undefined4 *)(param_1 + 0x72c) = *(undefined4 *)(param_1 + 0x7b4);
  *(undefined4 *)(param_1 + 0x730) = *(undefined4 *)(param_1 + 0x7b8);
  *(undefined8 *)(param_1 + 0x84c) = 0;
  return;
}



// FUNCTION 14077f330 FUN_14077f330 body=191 status=ok
// SIG undefined FUN_14077f330(void)

void FUN_14077f330(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_142dd7950();
  if ((((*(byte *)(param_1 + 0xb8) & 1) != 0) && (0 < *(int *)(param_1 + 0x7f0))) &&
     (DAT_1468c2186 == '\0')) {
    plVar1 = *(longlong **)(param_1 + 0x7e8);
    plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x7f0) * 0x1e;
    if (plVar1 != plVar2) {
      do {
        (**(code **)(*plVar1 + 8))(plVar1,*(undefined1 *)(param_1 + 0x6f1));
        plVar1 = plVar1 + 0x1e;
      } while (plVar1 != plVar2);
      plVar1 = *(longlong **)(param_1 + 0x7e8);
    }
    *(longlong *)(param_1 + 0x6f8) = plVar1[(longlong)*(int *)(param_1 + 0x7f8) * 0x1e + 0x12];
    *(longlong *)(param_1 + 0x800) = plVar1[(longlong)*(int *)(param_1 + 0x7f8) * 0x1e + 0x18];
  }
  return;
}



// FUNCTION 14077f3f0 FUN_14077f3f0 body=1010 status=ok
// SIG undefined FUN_14077f3f0(void)

void FUN_14077f3f0(longlong *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  code *pcVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  int iVar17;
  longlong *local_58;
  uint local_50;
  uint local_4c;
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  longlong local_38 [2];
  
  if (DAT_1468c2186 != '\0') {
    return;
  }
  lVar12 = param_1[0x23];
  plVar8 = (longlong *)0x0;
  bVar4 = false;
  local_58 = (longlong *)0x0;
  local_4c = 0;
  plVar16 = plVar8;
  uVar13 = 0;
  if (lVar12 != 0) {
    lVar6 = AAfrPlayerState::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    plVar16 = (longlong *)0x0;
    uVar13 = 0;
    if (bVar3) {
      uVar7 = UUGHitTextureButton::GetPrivateStaticClass();
      AActor::GetComponentsByClass(lVar12,&local_48,uVar7);
      pcVar1 = local_48 + (longlong)iStack_40 * 8;
      plVar16 = plVar8;
      plVar14 = plVar8;
      uVar13 = 0;
      for (pcVar10 = local_48; pcVar10 != pcVar1; pcVar10 = pcVar10 + 8) {
        lVar12 = *(longlong *)pcVar10;
        if (lVar12 != 0) {
          lVar6 = UUGHitTextureButton::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            iVar17 = (int)plVar8;
            local_50 = iVar17 + 1;
            if ((int)plVar14 < (int)local_50) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,plVar8);
              plVar14 = (longlong *)(ulonglong)local_4c;
              plVar16 = local_58;
            }
            plVar8 = (longlong *)(ulonglong)local_50;
            plVar16[iVar17] = lVar12;
          }
        }
        uVar13 = (uint)plVar8;
      }
      if (local_48 != (code *)0x0) {
        FMemory::Free(local_48);
      }
    }
  }
  lVar12 = 0;
  iVar17 = (int)param_1[0xfe];
  if (((int)uVar13 < iVar17) && (0 < (int)uVar13)) {
    *(int *)(param_1 + 0xff) = (int)param_1[0xff] % (int)uVar13;
    FUN_14077f7f0(param_1 + 0xfd,uVar13,iVar17 - uVar13,1);
  }
  else {
    if ((int)uVar13 <= iVar17) goto LAB_14077f607;
    iVar2 = (int)param_1[0xfe];
    iVar17 = uVar13 - iVar17;
    *(int *)(param_1 + 0xfe) = iVar17 + iVar2;
    if (*(int *)((longlong)param_1 + 0x7f4) < iVar17 + iVar2) {
      TArray<FSlateRenderBatch,FDefaultAllocator>::ResizeGrow(param_1 + 0xfd,iVar2);
    }
    puVar11 = (undefined8 *)((longlong)iVar2 * 0xf0 + param_1[0xfd]);
    if (iVar17 != 0) {
      lVar6 = (longlong)puVar11 + 0xec;
      do {
        FUN_142dc1920(puVar11);
        *puVar11 = &PTR_FUN_14408b418;
        puVar11 = puVar11 + 0x1e;
        *(undefined8 *)(lVar6 + -0x14) = 0;
        *(undefined8 *)(lVar6 + -0xc) = 0;
        *(undefined8 *)(lVar6 + -4) = 0;
        lVar6 = lVar6 + 0xf0;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
    }
  }
  bVar4 = true;
LAB_14077f607:
  plVar8 = plVar16;
  if (0 < (int)uVar13) {
    uVar15 = (ulonglong)uVar13;
    do {
      iStack_40 = 0;
      lVar6 = param_1[0xfd];
      local_48 = FUN_14077d150;
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar8 + 1,param_1);
        *(undefined4 *)(plVar8 + 2) = (undefined4)local_48;
        *(undefined4 *)((longlong)plVar8 + 0x14) = local_48._4_4_;
        *(int *)(plVar8 + 3) = iStack_40;
        *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_3c;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar8[5] = lVar9;
        *plVar8 = (longlong)&PTR_FUN_143fcff08;
      }
      plVar14 = (longlong *)(lVar6 + 0x30 + lVar12);
      if (local_38 == plVar14) {
LAB_14077f6a7:
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x28))(plVar8,0);
          lVar9 = FMemory::Realloc(plVar8,0);
          if (lVar9 != 0) {
            FMemory::Free(lVar9);
          }
        }
      }
      else {
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x30))(plVar8,plVar14);
          goto LAB_14077f6a7;
        }
        if (((int)plVar14[1] != 0) && (plVar8 = (longlong *)*plVar14, plVar8 != (longlong *)0x0)) {
          (**(code **)(*plVar8 + 0x28))(plVar8,0);
          if (*plVar14 != 0) {
            lVar9 = FMemory::Realloc(*plVar14,0);
            *plVar14 = lVar9;
          }
          *(undefined4 *)(plVar14 + 1) = 0;
        }
      }
      FUN_142dd79a0(lVar6 + 0x10 + lVar12);
      lVar6 = *plVar16;
      plVar8 = (longlong *)(param_1[0xfd] + lVar12);
      if (lVar6 != 0) {
        plVar8[0x1b] = lVar6;
        cVar5 = (**(code **)(*plVar8 + 0x30))(plVar8);
        if (cVar5 != '\0') {
          FUN_142ddac80(plVar8 + 2,lVar6);
        }
      }
      (**(code **)(*(longlong *)(param_1[0xfd] + lVar12) + 8))
                ((longlong *)(param_1[0xfd] + lVar12),*(undefined1 *)((longlong)param_1 + 0x6f1));
      plVar16 = plVar16 + 1;
      lVar12 = lVar12 + 0xf0;
      uVar15 = uVar15 - 1;
      plVar8 = local_58;
    } while (uVar15 != 0);
  }
  if (bVar4) {
    (**(code **)(*param_1 + 0x8f0))(param_1);
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  return;
}



// FUNCTION 14077f7f0 FUN_14077f7f0 body=249 status=ok
// SIG undefined FUN_14077f7f0(void)

void FUN_14077f7f0(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(*param_1 + (longlong)param_2 * 0xf0);
    iVar3 = param_3;
    do {
      *puVar2 = &PTR_FUN_14408b418;
      if (puVar2[0x1c] != 0) {
        FMemory::Free();
      }
      *puVar2 = &PTR_FUN_14408b3d8;
      TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar2 + 6);
      puVar2 = puVar2 + 0x1e;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0xf0),
                 (void *)((longlong)(param_2 + param_3) * 0xf0 + *param_1),(longlong)iVar1 * 0xf0);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>,FDefaultAllocator>::
      ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14077f8f0 FUN_14077f8f0 body=51 status=ok
// SIG undefined FUN_14077f8f0(void)

void FUN_14077f8f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140778bd0(param_1 + -0x5f8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014077f919. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x38) + 0x40))((longlong *)(lVar1 + 0x38),param_2);
    return;
  }
  return;
}



// FUNCTION 14077f930 FUN_14077f930 body=71 status=ok
// SIG undefined FUN_14077f930(void)

void FUN_14077f930(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140778bd0(param_1 + -0x5f8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014077f968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x38) + 0x38))((longlong *)(lVar1 + 0x38),param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 14077f980 FUN_14077f980 body=819 status=ok
// SIG undefined FUN_14077f980(void)

void FUN_14077f980(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 local_88 [128];
  
  *param_1 = 0x41200000;
  puVar5 = (undefined1 *)FUN_142de2d20(local_88,0x3f800000,0);
  *(undefined1 *)(param_1 + 2) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 9) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 10) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0xb) = puVar5[3];
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)(puVar5 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(puVar5 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(puVar5 + 0x20);
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(puVar5 + 0x30);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(puVar5 + 0x40);
  *(undefined8 *)(param_1 + 0x14) = uVar4;
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  param_1[0x18] = *(undefined4 *)(puVar5 + 0x58);
  param_1[0x19] = uVar1;
  param_1[0x1a] = uVar2;
  param_1[0x1b] = uVar3;
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(puVar5 + 0x68);
  param_1[0x1e] = *(undefined4 *)(puVar5 + 0x70);
  param_1[0x1f] = *(undefined4 *)(puVar5 + 0x74);
  param_1[0x20] = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_88,0x3f800000,0);
  *(undefined1 *)(param_1 + 0x24) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x91) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x92) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x93) = puVar5[3];
  *(undefined8 *)(param_1 + 0x25) = *(undefined8 *)(puVar5 + 4);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(puVar5 + 0x10);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(puVar5 + 0x20);
  *(undefined8 *)(param_1 + 0x2e) = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(puVar5 + 0x30);
  *(undefined8 *)(param_1 + 0x32) = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(puVar5 + 0x40);
  *(undefined8 *)(param_1 + 0x36) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  param_1[0x3a] = *(undefined4 *)(puVar5 + 0x58);
  param_1[0x3b] = uVar1;
  param_1[0x3c] = uVar2;
  param_1[0x3d] = uVar3;
  *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(puVar5 + 0x68);
  param_1[0x40] = *(undefined4 *)(puVar5 + 0x70);
  param_1[0x41] = *(undefined4 *)(puVar5 + 0x74);
  param_1[0x42] = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_88,0x3f800000,0);
  *(undefined1 *)(param_1 + 0x46) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x119) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x11a) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x11b) = puVar5[3];
  *(undefined8 *)(param_1 + 0x47) = *(undefined8 *)(puVar5 + 4);
  *(undefined8 *)(param_1 + 0x4a) = *(undefined8 *)(puVar5 + 0x10);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  *(undefined8 *)(param_1 + 0x4e) = *(undefined8 *)(puVar5 + 0x20);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  *(undefined8 *)(param_1 + 0x52) = *(undefined8 *)(puVar5 + 0x30);
  *(undefined8 *)(param_1 + 0x54) = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  *(undefined8 *)(param_1 + 0x56) = *(undefined8 *)(puVar5 + 0x40);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  *(undefined8 *)(param_1 + 0x5a) = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  param_1[0x5c] = *(undefined4 *)(puVar5 + 0x58);
  param_1[0x5d] = uVar1;
  param_1[0x5e] = uVar2;
  param_1[0x5f] = uVar3;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(puVar5 + 0x68);
  param_1[0x62] = *(undefined4 *)(puVar5 + 0x70);
  param_1[99] = *(undefined4 *)(puVar5 + 0x74);
  param_1[100] = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_88,0x41700000,0);
  *(undefined1 *)(param_1 + 0x68) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x1a1) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x1a2) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x1a3) = puVar5[3];
  *(undefined8 *)(param_1 + 0x69) = *(undefined8 *)(puVar5 + 4);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(puVar5 + 0x10);
  *(undefined8 *)(param_1 + 0x6e) = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(puVar5 + 0x20);
  *(undefined8 *)(param_1 + 0x72) = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(puVar5 + 0x30);
  *(undefined8 *)(param_1 + 0x76) = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(puVar5 + 0x40);
  *(undefined8 *)(param_1 + 0x7a) = uVar4;
  *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  param_1[0x7e] = *(undefined4 *)(puVar5 + 0x58);
  param_1[0x7f] = uVar1;
  param_1[0x80] = uVar2;
  param_1[0x81] = uVar3;
  *(undefined8 *)(param_1 + 0x82) = *(undefined8 *)(puVar5 + 0x68);
  param_1[0x84] = *(undefined4 *)(puVar5 + 0x70);
  param_1[0x85] = *(undefined4 *)(puVar5 + 0x74);
  param_1[0x86] = *(undefined4 *)(puVar5 + 0x78);
  param_1[0x6a] = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x1a3) = 2;
  *(byte *)((longlong)param_1 + 0x1a2) = *(byte *)((longlong)param_1 + 0x1a2) | 1;
  FUN_142c4aa90(param_1 + 0x89,0x447a0000,0x453b8000);
  param_1[0x8c] = 0x44fa0000;
  return;
}



// FUNCTION 14077fcc0 ResizeGrow body=261 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FSlateCachedFastPathRenderingData_*,TInlineAllocator<20,TSizedDefaultAllocator<32>_>_>::
     ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xa8);
  if (uVar1 < 0x15) {
    uVar2 = 0x14;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0xac) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 8,0);
    uVar2 = (uint)(uVar3 >> 3);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0xac) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0xa0);
  if (uVar2 < 0x15) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 3);
    pvVar4 = *(void **)((longlong)param_1 + 0xa0);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 3,0);
        *(void **)((longlong)param_1 + 0xa0) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0xa0) = uVar5;
  return;
}



// FUNCTION 14077fdd0 ResizeShrink body=165 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<240,8>_>,FDefaultAllocator>::
          ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0xf0) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0xf0,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0x8888888888888889) * auVar1,0);
        iVar4 = (int)(uVar3 / 0xf0);
      }
      goto LAB_14077fe44;
    }
    if (iVar4 == 0) goto LAB_14077fe44;
  }
  iVar4 = iVar5;
LAB_14077fe44:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xf0,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 14077fe80 FUN_14077fe80 body=42 status=ok
// SIG undefined FUN_14077fe80(void)

void FUN_14077fe80(longlong param_1)

{
  FUN_142b7b570();
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    FUN_140775510(param_1);
    return;
  }
  return;
}



// FUNCTION 14077feb0 FUN_14077feb0 body=42 status=ok
// SIG undefined FUN_14077feb0(void)

void FUN_14077feb0(longlong param_1)

{
  FUN_142b7b570();
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    FUN_140775840(param_1);
    return;
  }
  return;
}



// FUNCTION 14077fee0 FUN_14077fee0 body=1226 status=ok
// SIG undefined FUN_14077fee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14077fee0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6,longlong param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,char param_11)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  float fVar10;
  float extraout_XMM0_Da;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined4 local_180;
  undefined1 *local_178;
  undefined4 *local_170;
  longlong *local_168;
  int local_160;
  undefined1 local_158 [8];
  undefined8 local_150 [2];
  undefined8 local_140 [2];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110 [28];
  float local_f4;
  undefined1 local_e8 [16];
  undefined1 local_d8;
  longlong local_a0;
  longlong local_80;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_120 = param_8;
  local_140[0] = param_9;
  local_118 = param_10;
  cVar2 = FUN_142deefb0(param_3 + 0xd8);
  if (cVar2 != '\0') {
    local_150[0] = 0xffffffffffffffff;
    fVar10 = (float)FUN_142de77e0(param_3 + 0xd8,param_4,0,local_150);
    if (0.5 <= fVar10) {
      return *(undefined1 *)(param_1 + 0x2b0);
    }
  }
  cVar2 = FUN_142deefb0(param_3 + 0x158);
  if (cVar2 != '\0') {
    local_150[0] = 0xffffffffffffffff;
    FUN_142de77e0(param_3 + 0x158,param_4,0,local_150);
    if (0.5 <= extraout_XMM0_Da) {
      return *(char *)(param_1 + 0x2b0) == '\0';
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146859460) && (_Init_thread_header(&DAT_146859460), DAT_146859460 == -1))
  {
    FName::FName(&DAT_146859458,"EnvQueryTrace",1);
    _Init_thread_footer(&DAT_146859460);
  }
  local_188 = 0;
  FUN_1422ffb20(local_e8,DAT_146859458,local_158,*(byte *)(param_3 + 0xbc) & 1);
  local_d8 = 1;
  if (0 < *(int *)(param_6 + 8)) {
    FCollisionQueryParams::AddIgnoredActors(local_e8,param_6);
  }
  uVar4 = UEngineTypes::ConvertToCollisionChannel(*(undefined1 *)(param_3 + 0xb8));
  local_130 = *(undefined4 *)(param_3 + 0xa8);
  local_12c = *(undefined4 *)(param_3 + 0xac);
  local_128 = *(undefined4 *)(param_3 + 0xb0);
  local_168 = (longlong *)0x0;
  local_160 = 0;
  if (param_1 == 0) {
LAB_1407802d4:
    uVar3 = 0;
  }
  else {
    cVar2 = *(char *)(param_3 + 0xba);
    if (cVar2 == '\0') {
      pcVar9 = UEnvQueryTest_Trace::RunLineTraceFrom;
      pcVar5 = UEnvQueryTest_Trace::RunLineTraceTo;
    }
    else if (cVar2 == '\x01') {
      pcVar9 = FUN_142c0f8c0;
      pcVar5 = FUN_142c0fac0;
    }
    else if (cVar2 == '\x02') {
      pcVar9 = FUN_142c10340;
      pcVar5 = FUN_142c104c0;
    }
    else {
      if (cVar2 != '\x03') goto LAB_1407802d4;
      pcVar9 = FUN_142c0fcc0;
      pcVar5 = FUN_142c0fe50;
    }
    if (param_11 != '\0') {
      pcVar9 = pcVar5;
    }
    FUN_140747140(&local_168,param_1,pcVar9);
    if (((local_160 == 0) || (local_168 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*local_168 + 0x18))(), cVar2 == '\0')) goto LAB_1407802d4;
    uVar3 = 0;
    if (*(char *)(param_3 + 0x20) == '\0') {
      local_188 = *(undefined8 *)(param_7 + 0x58);
      local_170 = &local_130;
      local_178 = local_e8;
      plVar6 = (longlong *)0x0;
      if (local_160 != 0) {
        plVar6 = local_168;
      }
      local_180 = uVar4;
      uVar3 = (**(code **)(*plVar6 + 0x38))(plVar6,local_140[0],local_118,local_120);
    }
    else {
      FAIDataProviderValue::BindData(param_3 + 0x28,param_4,*(undefined4 *)(param_7 + 0x30));
      FAIDataProviderValue::BindData(param_3 + 0x58,param_4,*(undefined4 *)(param_7 + 0x30));
      uVar11 = FAIDataProviderFloatValue::GetValue(param_3 + 0x28);
      uVar12 = FAIDataProviderFloatValue::GetValue(param_3 + 0x58);
      uVar13 = FUN_1428cc5b0(*(undefined8 *)(param_7 + 0x58));
      local_188 = CONCAT44(local_188._4_4_,uVar11);
      local_180 = uVar12;
      FUN_1424c8560(local_110,local_140[0],local_118,uVar13);
      cVar2 = FUN_1424ca840(local_110);
      uVar1 = local_120;
      if (cVar2 == '\0') goto LAB_1407802d4;
      iVar8 = 2;
      if (1 < *(int *)(param_3 + 0x88)) {
        iVar8 = *(int *)(param_3 + 0x88);
      }
      iVar7 = 0;
      if (0 < iVar8) {
        do {
          FUN_1424be5e0(local_110,local_140,(float)iVar7 * (local_f4 / (float)iVar8));
          iVar7 = iVar7 + 1;
          FUN_1424be5e0(local_110,local_150,(float)iVar7 * (local_f4 / (float)iVar8));
          local_188 = *(undefined8 *)(param_7 + 0x58);
          local_170 = &local_130;
          local_178 = local_e8;
          plVar6 = (longlong *)0x0;
          if (local_160 != 0) {
            plVar6 = local_168;
          }
          local_180 = uVar4;
          cVar2 = (**(code **)(*plVar6 + 0x38))(plVar6,local_140,local_150,uVar1);
        } while (((cVar2 == '\0') || (uVar3 = 1, *(char *)(param_7 + 0x130) != '\0')) &&
                (iVar7 < iVar8));
      }
    }
  }
  if (local_160 != 0) {
    if (local_168 == (longlong *)0x0) goto LAB_140780321;
    (**(code **)(*local_168 + 0x28))(local_168,0);
    if (local_168 != (longlong *)0x0) {
      local_168 = (longlong *)FMemory::Realloc(local_168,0,0);
    }
    local_160 = 0;
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_140780321:
  if (local_80 != 0) {
    FMemory::Free();
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 1407803b0 FUN_1407803b0 body=857 status=ok
// SIG undefined FUN_1407803b0(void)

void FUN_1407803b0(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  short sVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  LARGE_INTEGER local_res10;
  longlong *local_c8;
  int local_c0;
  double local_b8;
  undefined8 local_b0;
  char local_a7;
  byte local_a6;
  
  if ((*(longlong *)(param_2 + 0x178) == 0) ||
     (lVar4 = FWeakObjectPtr::Get(param_2 + 0x34), lVar4 == 0)) {
    return;
  }
  FAIDataProviderValue::BindData(param_1 + 0x90,lVar4,*(undefined4 *)(param_2 + 0x30));
  FAIDataProviderValue::BindData(param_1 + 0xc0,lVar4,*(undefined4 *)(param_2 + 0x30));
  fVar6 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x90);
  fVar7 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0xc0);
  FUN_142bd2270(&local_c8,param_1,param_2,0xffffffff);
  do {
    if ((((int)local_c8[1] <= local_c0) || ((*(byte *)((longlong)local_c8 + 0x156) & 1) != 0)) ||
       ((0.0 <= local_b8 &&
        (QueryPerformanceCounter(&local_res10),
        local_b8 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0)))) {
LAB_1407806a0:
      *(int *)(local_c8 + 0x27) = local_c0;
      return;
    }
    fVar9 = 0.0;
    lVar4 = (**(code **)(**(longlong **)(param_2 + 0x178) + 0x2a8))
                      (*(longlong **)(param_2 + 0x178),
                       ((longlong)(*(int *)(*local_c8 + 4 + (longlong)local_c0 * 0xc) * 2) >> 1) +
                       local_c8[3]);
    if (((lVar4 != 0) && (lVar4 = FUN_142d29780(lVar4), lVar4 != 0)) &&
       (fVar8 = (float)FUN_142d1b990(lVar4), 0.0 < fVar8)) {
      fVar9 = (float)FUN_142d19870(lVar4);
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      if (*(char *)(param_1 + 0x1d8) != '\0') {
        fVar9 = fVar9 / fVar8;
        fVar8 = 1.0;
      }
      if (*(char *)(param_1 + 0x1d9) != '\0') {
        fVar9 = fVar8 - fVar9;
      }
    }
    if ((local_a6 & 2) == 0) {
      if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_1407805de:
        sVar3 = local_b0._4_2_;
        if (local_a7 == '\0') {
          local_b0 = CONCAT44(local_b0._4_4_,(float)local_b0 + fVar9);
        }
        else if (local_a7 == '\x01') {
          if ((sVar3 == 0) || (fVar9 < (float)local_b0)) {
LAB_140780619:
            local_b0 = CONCAT44(local_b0._4_4_,fVar9);
          }
        }
        else if (local_a7 == '\x02') {
          if (sVar3 == 0) goto LAB_140780619;
          if ((float)local_b0 < fVar9) {
            local_b0 = CONCAT44(local_b0._4_4_,fVar9);
          }
        }
        local_b0._0_6_ = CONCAT24(sVar3 + 1,(float)local_b0);
      }
      else {
        cVar1 = *(char *)(param_1 + 0x5a);
        if (cVar1 == '\0') {
          bVar5 = fVar9 < fVar6;
LAB_1407805d7:
          if (!bVar5) goto LAB_1407805de;
        }
        else {
          if (cVar1 == '\x01') {
            bVar5 = fVar7 < fVar9;
            goto LAB_1407805d7;
          }
          if (((cVar1 == '\x02') && (fVar6 <= fVar9)) && (fVar9 <= fVar7)) goto LAB_1407805de;
        }
      }
      local_b0 = CONCAT26(local_b0._6_2_ + 1,(undefined6)local_b0);
    }
    FUN_142bf3280(&local_c8);
    if ((*(byte *)((longlong)local_c8 + 0x156) & 1) == 0) {
      local_c0 = local_c0 + 1;
      local_b0 = 0;
      local_a6 = local_a6 & 0xfd | 1;
      if ((int)local_c8[1] <= local_c0) goto LAB_1407806a0;
      do {
        uVar2 = *(uint *)(*local_c8 + 4 + (longlong)local_c0 * 0xc);
        if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) break;
        local_c0 = local_c0 + 1;
      } while (local_c0 < (int)local_c8[1]);
    }
  } while( true );
}



// FUNCTION 140780710 FUN_140780710 body=674 status=ok
// SIG undefined FUN_140780710(void)

void FUN_140780710(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  LARGE_INTEGER local_res10;
  longlong *local_78;
  int local_70;
  double local_68;
  undefined8 local_60;
  char local_57;
  byte local_56;
  
  lVar3 = *(longlong *)(param_2 + 0x170);
  if (lVar3 != 0) {
    lVar6 = FUN_142e107c0();
    lVar3 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      fVar9 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0xf8);
      fVar10 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x128);
      FUN_142bd2270(&local_78,param_1,param_2,0xffffffff);
LAB_1407807e0:
      if ((int)local_78[1] <= local_70) goto LAB_14078082e;
      if ((*(byte *)((longlong)local_78 + 0x156) & 1) != 0) goto LAB_14078082e;
      if ((0.0 <= local_68) &&
         (QueryPerformanceCounter(&local_res10),
         local_68 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0)) goto LAB_14078082e;
      bVar8 = true;
      do {
        if (!bVar8) {
          *(int *)(local_78 + 0x27) = local_70;
          return;
        }
        uVar7 = FArchive::operator<<
                          (((longlong)(*(int *)(*local_78 + 4 + (longlong)local_70 * 0xc) * 2) >> 1)
                           + local_78[3]);
        iVar5 = FUN_142dcf600(uVar7);
        fVar11 = (float)iVar5;
        if ((local_56 & 2) == 0) {
          if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_1407808a3:
            sVar4 = local_60._4_2_;
            if (local_57 == '\0') {
              local_60 = CONCAT44(local_60._4_4_,(float)local_60 + fVar11);
            }
            else if (local_57 == '\x01') {
              if ((sVar4 == 0) || (fVar11 < (float)local_60)) {
LAB_1407808de:
                local_60 = CONCAT44(local_60._4_4_,fVar11);
              }
            }
            else if (local_57 == '\x02') {
              if (sVar4 == 0) goto LAB_1407808de;
              if ((float)local_60 < fVar11) {
                local_60 = CONCAT44(local_60._4_4_,fVar11);
              }
            }
            local_60._0_6_ = CONCAT24(sVar4 + 1,(float)local_60);
          }
          else {
            cVar1 = *(char *)(param_1 + 0x5a);
            if (cVar1 == '\0') {
              bVar8 = fVar11 < fVar9;
LAB_14078089c:
              if (!bVar8) goto LAB_1407808a3;
            }
            else {
              if (cVar1 == '\x01') {
                bVar8 = fVar10 < fVar11;
                goto LAB_14078089c;
              }
              if (((cVar1 == '\x02') && (fVar9 <= fVar11)) && (fVar11 <= fVar10))
              goto LAB_1407808a3;
            }
          }
          local_60 = CONCAT26(local_60._6_2_ + 1,(undefined6)local_60);
        }
        FUN_142bf3280(&local_78);
        if ((*(byte *)((longlong)local_78 + 0x156) & 1) != 0) goto LAB_1407807e0;
        local_70 = local_70 + 1;
        local_60 = 0;
        local_56 = local_56 & 0xfd | 1;
        if (local_70 < (int)local_78[1]) goto LAB_140780940;
LAB_14078082e:
        bVar8 = false;
      } while( true );
    }
  }
  return;
LAB_140780940:
  do {
    uVar2 = *(uint *)(*local_78 + 4 + (longlong)local_70 * 0xc);
    if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
  } while ((!bVar8) && (local_70 = local_70 + 1, local_70 < (int)local_78[1]));
  goto LAB_1407807e0;
}



// FUNCTION 1407809c0 FUN_1407809c0 body=877 status=ok
// SIG undefined FUN_1407809c0(void)

void FUN_1407809c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *local_res10;
  longlong *local_res18;
  LARGE_INTEGER local_res20;
  longlong *local_88;
  int local_80;
  double local_78;
  
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  lVar6 = FUN_1428dfc70();
  if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  if (*(longlong *)(param_2 + 0x10) == 0) {
    return;
  }
  lVar7 = UEnvQueryItemType::GetPrivateStaticClass();
  lVar6 = *(longlong *)(param_2 + 0x10);
  lVar8 = lVar6;
  if (lVar6 == 0) {
    return;
  }
  while (lVar8 != lVar7) {
    lVar8 = *(longlong *)(lVar8 + 0x30);
    if (lVar8 == 0) {
      return;
    }
  }
  if (lVar6 == 0) {
    return;
  }
  lVar6 = (**(code **)(*plVar5 + 0x668))(plVar5);
  if (lVar6 != 0) {
    lVar8 = FUN_142c2de20();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar6 = *(longlong *)(lVar6 + 0x568);
      goto LAB_140780ac9;
    }
  }
  lVar6 = 0;
LAB_140780ac9:
  if ((lVar6 != 0) && (plVar1 = *(longlong **)(param_2 + 0x10), plVar1 != (longlong *)0x0)) {
    plVar9 = (longlong *)plVar1[0x1f];
    if (plVar9 == (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      plVar9 = (longlong *)plVar1[0x1f];
      if (plVar9 == (longlong *)0x0) {
        return;
      }
    }
    local_res10 = (longlong *)0x0;
    lVar8 = FUN_142cc1dc0(param_1 + 0x1d8,lVar6,&local_res10);
    if (((lVar8 != 0) && (local_res10 != (longlong *)0x0)) &&
       ((**(code **)(*plVar9 + 0x290))(plVar9,&local_res18), local_res18 != (longlong *)0x0)) {
      plVar9 = (longlong *)UBlackboardKeyType::GetPrivateStaticClass();
      for (plVar1 = local_res18; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[6]) {
        if (plVar1 == plVar9) {
          lVar7 = local_res18[0x1f];
          if (lVar7 == 0) {
            (**(code **)(*local_res18 + 0x368))(local_res18);
            lVar7 = local_res18[0x1f];
            if (lVar7 == 0) {
              return;
            }
          }
          FAIDataProviderValue::BindData(param_1 + 0x60,plVar5,*(undefined4 *)(param_2 + 0x30));
          uVar3 = FAIDataProviderBoolValue::GetValue(param_1 + 0x60);
          FUN_142bd2270(&local_88,param_1,param_2,0xffffffff);
          while( true ) {
            if ((((int)local_88[1] <= local_80) ||
                ((*(byte *)((longlong)local_88 + 0x156) & 1) != 0)) ||
               ((0.0 <= local_78 &&
                (QueryPerformanceCounter(&local_res20),
                local_78 <= (double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0)))) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) break;
            iVar4 = (**(code **)(*local_res10 + 0x2a0))
                              (local_res10,lVar6,lVar8,lVar7,
                               ((longlong)(*(int *)(*local_88 + 4 + (longlong)local_80 * 0xc) * 2)
                               >> 1) + local_88[3]);
            FUN_140744110(&local_88,*(undefined1 *)(param_1 + 0x44),*(undefined1 *)(param_1 + 0x5a),
                          iVar4 == 0,uVar3);
            FUN_14072a010(&local_88);
          }
          *(int *)(local_88 + 0x27) = local_80;
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140780d30 FUN_140780d30 body=836 status=ok
// SIG undefined FUN_140780d30(void)

void FUN_140780d30(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  short sVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  float fVar11;
  LARGE_INTEGER local_res10;
  longlong *local_78;
  int local_70;
  double local_68;
  undefined8 local_60;
  char local_57;
  byte local_56;
  
  lVar8 = *(longlong *)(param_2 + 0x170);
  if (lVar8 != 0) {
    lVar7 = FUN_142e107c0();
    lVar8 = *(longlong *)(lVar8 + 0x10);
    if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar8 = FWeakObjectPtr::Get(param_2 + 0x34), lVar8 != 0)) {
      FAIDataProviderValue::BindData(param_1 + 0x60,lVar8,*(undefined4 *)(param_2 + 0x30));
      cVar5 = FAIDataProviderBoolValue::GetValue(param_1 + 0x60);
      plVar9 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
      lVar8 = 0;
      if (plVar9 != (longlong *)0x0) {
        lVar7 = FUN_1428dfc70();
        if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) &&
           (plVar9 = (longlong *)(**(code **)(*plVar9 + 0x668))(plVar9), plVar9 != (longlong *)0x0))
        {
          uVar10 = FUN_142e79600();
          lVar7 = (**(code **)(*plVar9 + 0x628))(plVar9,uVar10);
          if (lVar7 != 0) {
            lVar8 = FUN_142dcd660(lVar7,0);
          }
        }
      }
      FUN_142bd2270(&local_78,param_1,param_2,0xffffffff);
LAB_140780e98:
      if ((int)local_78[1] <= local_70) goto LAB_140780ee5;
      if ((*(byte *)((longlong)local_78 + 0x156) & 1) != 0) goto LAB_140780ee5;
      if ((0.0 <= local_68) &&
         (QueryPerformanceCounter(&local_res10),
         local_68 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0)) goto LAB_140780ee5;
      bVar3 = true;
      do {
        if (!bVar3) {
          *(int *)(local_78 + 0x27) = local_70;
          return;
        }
        uVar10 = FArchive::operator<<
                           (((longlong)(*(int *)(*local_78 + 4 + (longlong)local_70 * 0xc) * 2) >> 1
                            ) + local_78[3]);
        if ((lVar8 == 0) || (cVar6 = FUN_142dd3e20(uVar10), cVar6 == '\0')) {
          cVar6 = '\0';
        }
        else {
          cVar6 = '\x01';
        }
        if ((local_56 & 2) == 0) {
          cVar1 = *(char *)(param_1 + 0x5a);
          if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) ||
             ((cVar1 != '\x03' || (cVar6 != cVar5)))) {
            if ((local_56 & 4) == 0) {
              fVar11 = 0.0;
              goto LAB_140780f67;
            }
          }
          else {
            fVar11 = 1.0;
LAB_140780f67:
            sVar4 = local_60._4_2_;
            if (local_57 == '\0') {
              local_60 = CONCAT44(local_60._4_4_,(float)local_60 + fVar11);
            }
            else if (local_57 == '\x01') {
              if ((sVar4 == 0) || (fVar11 < (float)local_60)) {
LAB_140780fa2:
                local_60 = CONCAT44(local_60._4_4_,fVar11);
              }
            }
            else if (local_57 == '\x02') {
              if (sVar4 == 0) goto LAB_140780fa2;
              if ((float)local_60 < fVar11) {
                local_60 = CONCAT44(local_60._4_4_,fVar11);
              }
            }
            local_60._0_6_ = CONCAT24(sVar4 + 1,(float)local_60);
          }
          local_60 = CONCAT26(local_60._6_2_ + 1,(undefined6)local_60);
        }
        FUN_142bf3280(&local_78);
        if ((*(byte *)((longlong)local_78 + 0x156) & 1) != 0) goto LAB_140780e98;
        local_70 = local_70 + 1;
        local_60 = 0;
        local_56 = local_56 & 0xfd | 1;
        if (local_70 < (int)local_78[1]) goto LAB_140781000;
LAB_140780ee5:
        bVar3 = false;
      } while( true );
    }
  }
  return;
LAB_140781000:
  do {
    uVar2 = *(uint *)(*local_78 + 4 + (longlong)local_70 * 0xc);
    if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  } while ((!bVar3) && (local_70 = local_70 + 1, local_70 < (int)local_78[1]));
  goto LAB_140780e98;
}



// FUNCTION 140781080 FUN_140781080 body=770 status=ok
// SIG undefined FUN_140781080(void)

void FUN_140781080(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  LARGE_INTEGER local_res10;
  longlong *local_78;
  int local_70;
  double local_68;
  undefined8 local_60;
  char local_57;
  byte local_56;
  
  lVar5 = *(longlong *)(param_2 + 0x170);
  if (lVar5 != 0) {
    lVar4 = FUN_142e107c0();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      fVar7 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0xf8);
      fVar8 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x128);
      FUN_142bd2270(&local_78,param_1,param_2,0xffffffff);
LAB_140781156:
      if ((int)local_78[1] <= local_70) goto LAB_1407811a4;
      if ((*(byte *)((longlong)local_78 + 0x156) & 1) != 0) goto LAB_1407811a4;
      if ((0.0 <= local_68) &&
         (QueryPerformanceCounter(&local_res10),
         local_68 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0)) goto LAB_1407811a4;
      bVar6 = true;
      do {
        if (!bVar6) {
          *(int *)(local_78 + 0x27) = local_70;
          return;
        }
        lVar5 = FArchive::operator<<
                          (((longlong)(*(int *)(*local_78 + 4 + (longlong)local_70 * 0xc) * 2) >> 1)
                           + local_78[3]);
        switch(*(undefined1 *)(lVar5 + 0x378)) {
        case 0:
          fVar9 = *(float *)(param_1 + 0x1d8);
          break;
        case 1:
          fVar9 = *(float *)(param_1 + 0x1dc);
          break;
        case 2:
          fVar9 = *(float *)(param_1 + 0x1e0);
          break;
        case 3:
          fVar9 = *(float *)(param_1 + 0x1e4);
          break;
        case 4:
          fVar9 = *(float *)(param_1 + 0x1e8);
          break;
        case 5:
          fVar9 = *(float *)(param_1 + 0x1ec);
          break;
        case 6:
          fVar9 = *(float *)(param_1 + 0x1f0);
          break;
        default:
          fVar9 = 0.0;
        }
        if ((local_56 & 2) == 0) {
          if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_14078126d:
            sVar3 = local_60._4_2_;
            if (local_57 == '\0') {
              local_60 = CONCAT44(local_60._4_4_,(float)local_60 + fVar9);
            }
            else if (local_57 == '\x01') {
              if ((sVar3 == 0) || (fVar9 < (float)local_60)) {
LAB_1407812a8:
                local_60 = CONCAT44(local_60._4_4_,fVar9);
              }
            }
            else if (local_57 == '\x02') {
              if (sVar3 == 0) goto LAB_1407812a8;
              if ((float)local_60 < fVar9) {
                local_60 = CONCAT44(local_60._4_4_,fVar9);
              }
            }
            local_60._0_6_ = CONCAT24(sVar3 + 1,(float)local_60);
          }
          else {
            cVar1 = *(char *)(param_1 + 0x5a);
            if (cVar1 == '\0') {
              bVar6 = fVar9 < fVar7;
LAB_140781266:
              if (!bVar6) goto LAB_14078126d;
            }
            else {
              if (cVar1 == '\x01') {
                bVar6 = fVar8 < fVar9;
                goto LAB_140781266;
              }
              if (((cVar1 == '\x02') && (fVar7 <= fVar9)) && (fVar9 <= fVar8)) goto LAB_14078126d;
            }
          }
          local_60 = CONCAT26(local_60._6_2_ + 1,(undefined6)local_60);
        }
        FUN_142bf3280(&local_78);
        if ((*(byte *)((longlong)local_78 + 0x156) & 1) != 0) goto LAB_140781156;
        local_70 = local_70 + 1;
        local_60 = 0;
        local_56 = local_56 & 0xfd | 1;
        if (local_70 < (int)local_78[1]) goto LAB_140781310;
LAB_1407811a4:
        bVar6 = false;
      } while( true );
    }
  }
  return;
LAB_140781310:
  do {
    uVar2 = *(uint *)(*local_78 + 4 + (longlong)local_70 * 0xc);
    if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
  } while ((!bVar6) && (local_70 = local_70 + 1, local_70 < (int)local_78[1]));
  goto LAB_140781156;
}



// FUNCTION 1407813a0 FUN_1407813a0 body=731 status=ok
// SIG undefined FUN_1407813a0(void)

void FUN_1407813a0(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  short sVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  float fVar11;
  LARGE_INTEGER local_res10;
  longlong *local_78;
  int local_70;
  double local_68;
  undefined8 local_60;
  char local_57;
  byte local_56;
  
  lVar8 = *(longlong *)(param_2 + 0x170);
  if (lVar8 != 0) {
    lVar7 = FUN_142e107c0();
    lVar8 = *(longlong *)(lVar8 + 0x10);
    if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar8 = FWeakObjectPtr::Get(param_2 + 0x34), lVar8 != 0)) {
      FAIDataProviderValue::BindData(param_1 + 0x60,lVar8,*(undefined4 *)(param_2 + 0x30));
      cVar5 = FAIDataProviderBoolValue::GetValue(param_1 + 0x60);
      FUN_142bd2270(&local_78,param_1,param_2,0xffffffff);
LAB_140781480:
      if ((int)local_78[1] <= local_70) goto LAB_1407814cd;
      if ((*(byte *)((longlong)local_78 + 0x156) & 1) != 0) goto LAB_1407814cd;
      if ((0.0 <= local_68) &&
         (QueryPerformanceCounter(&local_res10),
         local_68 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0)) goto LAB_1407814cd;
      bVar3 = true;
      do {
        if (!bVar3) {
          *(int *)(local_78 + 0x27) = local_70;
          return;
        }
        uVar9 = FArchive::operator<<
                          (((longlong)(*(int *)(*local_78 + 4 + (longlong)local_70 * 0xc) * 2) >> 1)
                           + local_78[3]);
        plVar10 = (longlong *)FUN_142dd0030(uVar9);
        if (plVar10 == (longlong *)0x0) {
LAB_14078152d:
          cVar6 = '\0';
        }
        else {
          UScrollBox::GetPrivateStaticClass();
          lVar8 = (**(code **)(*plVar10 + 0x628))(plVar10);
          if (lVar8 == 0) goto LAB_14078152d;
          cVar6 = FUN_142d1f620(lVar8);
        }
        if ((local_56 & 2) == 0) {
          cVar1 = *(char *)(param_1 + 0x5a);
          if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) ||
             ((cVar1 != '\x03' || (cVar6 != cVar5)))) {
            if ((local_56 & 4) == 0) {
              fVar11 = 0.0;
              goto LAB_14078156d;
            }
          }
          else {
            fVar11 = 1.0;
LAB_14078156d:
            sVar4 = local_60._4_2_;
            if (local_57 == '\0') {
              local_60 = CONCAT44(local_60._4_4_,(float)local_60 + fVar11);
            }
            else if (local_57 == '\x01') {
              if ((sVar4 == 0) || (fVar11 < (float)local_60)) {
LAB_1407815a8:
                local_60 = CONCAT44(local_60._4_4_,fVar11);
              }
            }
            else if (local_57 == '\x02') {
              if (sVar4 == 0) goto LAB_1407815a8;
              if ((float)local_60 < fVar11) {
                local_60 = CONCAT44(local_60._4_4_,fVar11);
              }
            }
            local_60._0_6_ = CONCAT24(sVar4 + 1,(float)local_60);
          }
          local_60 = CONCAT26(local_60._6_2_ + 1,(undefined6)local_60);
        }
        FUN_142bf3280(&local_78);
        if ((*(byte *)((longlong)local_78 + 0x156) & 1) != 0) goto LAB_140781480;
        local_70 = local_70 + 1;
        local_60 = 0;
        local_56 = local_56 & 0xfd | 1;
        if (local_70 < (int)local_78[1]) goto LAB_140781610;
LAB_1407814cd:
        bVar3 = false;
      } while( true );
    }
  }
  return;
LAB_140781610:
  do {
    uVar2 = *(uint *)(*local_78 + 4 + (longlong)local_70 * 0xc);
    if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  } while ((!bVar3) && (local_70 = local_70 + 1, local_70 < (int)local_78[1]));
  goto LAB_140781480;
}



// FUNCTION 140781680 FUN_140781680 body=1466 status=ok
// SIG undefined FUN_140781680(void)

void FUN_140781680(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_res10 [2];
  LARGE_INTEGER local_res18 [2];
  longlong *local_e8;
  int local_e0;
  double local_d8;
  undefined8 local_d0;
  char local_c7;
  byte local_c6;
  
  lVar8 = *(longlong *)(param_2 + 0x170);
  if (lVar8 != 0) {
    lVar6 = FUN_142e107c0();
    lVar8 = *(longlong *)(lVar8 + 0x10);
    if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) {
      fVar14 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0xf8);
      fVar15 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x128);
      plVar7 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
      plVar12 = (longlong *)0x0;
      plVar9 = plVar12;
      if (plVar7 != (longlong *)0x0) {
        lVar8 = FUN_1428dfc70();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        if ((bVar13) && (lVar8 = (**(code **)(*plVar7 + 0x678))(plVar7), lVar8 != 0)) {
          lVar6 = AHeoCon::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          if (bVar13) {
            plVar9 = *(longlong **)(lVar8 + 0x9d0);
          }
        }
      }
      plVar7 = plVar12;
      if (plVar9 != (longlong *)0x0) {
        plVar7 = (longlong *)(**(code **)(*plVar9 + 0x688))();
      }
      cVar5 = FUN_14077cd10(param_1 + 0x1e0);
      if (cVar5 == '\0') {
        plVar9 = (longlong *)UGameplayTask_SpawnActor::GetPrivateStaticClass();
        lVar8 = plVar9[0x1f];
        if (lVar8 == 0) {
          (**(code **)(*plVar9 + 0x368))(plVar9);
          lVar8 = plVar9[0x1f];
        }
        uVar1 = *(undefined1 *)(lVar8 + 0x48);
        *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(lVar8 + 0x50);
        *(undefined1 *)(param_1 + 0x1e0) = uVar1;
      }
      cVar5 = FUN_14077cd10(param_1 + 0x1f0);
      if (cVar5 == '\0') {
        plVar9 = (longlong *)FUN_142df53d0();
        lVar8 = plVar9[0x1f];
        if (lVar8 == 0) {
          (**(code **)(*plVar9 + 0x368))(plVar9);
          lVar8 = plVar9[0x1f];
        }
        uVar1 = *(undefined1 *)(lVar8 + 0x48);
        *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(lVar8 + 0x50);
        *(undefined1 *)(param_1 + 0x1f0) = uVar1;
      }
      FUN_142bd2270(&local_e8,param_1,param_2,0xffffffff);
LAB_1407818f0:
      if ((int)local_e8[1] <= local_e0) goto LAB_140781940;
      if ((*(byte *)((longlong)local_e8 + 0x156) & 1) != 0) goto LAB_140781940;
      if ((0.0 <= local_d8) &&
         (QueryPerformanceCounter(local_res18),
         local_d8 <= (double)local_res18[0].QuadPart * DAT_1468b02f8 + 16777216.0))
      goto LAB_140781940;
      bVar13 = true;
      do {
        if (!bVar13) {
          *(int *)(local_e8 + 0x27) = local_e0;
          return;
        }
        fVar19 = 0.0;
        if (plVar7 != (longlong *)0x0) {
          uVar10 = FArchive::operator<<
                             (((longlong)(*(int *)(*local_e8 + 4 + (longlong)local_e0 * 0xc) * 2) >>
                              1) + local_e8[3]);
          plVar9 = (longlong *)FUN_142dd0060(uVar10);
          if (plVar9 != (longlong *)0x0) {
            uVar10 = UHomeWidget::GetPrivateStaticClass();
            lVar8 = (**(code **)(*plVar9 + 0x628))(plVar9,uVar10);
            if (lVar8 != 0) {
              FUN_140777f40((longlong *)(lVar8 + 0x1c0),local_res10,plVar7);
              plVar9 = plVar12;
              if ((local_res10[0] != -1) &&
                 (lVar8 = (longlong)local_res10[0] * 0x380 + *(longlong *)(lVar8 + 0x1c0),
                 lVar8 != 0)) {
                plVar9 = (longlong *)(lVar8 + 8);
              }
              fVar18 = 3.4028235e+38;
              if (plVar9 != (longlong *)0x0) {
                bVar2 = *(byte *)(param_1 + 0x1f0);
                fVar16 = 3.4028235e+38;
                if ((int)(uint)bVar2 < (int)plVar9[0x6a]) {
                  plVar11 = (longlong *)plVar9[0x69];
                  if ((longlong *)plVar9[0x69] == (longlong *)0x0) {
                    plVar11 = plVar9 + 1;
                  }
                  if (*(float *)(plVar11 + (ulonglong)bVar2 * 0xd + 1) <= 0.0) {
                    fVar17 = 3.4028235e+38;
                  }
                  else {
                    fVar17 = *(float *)(plVar11 + (ulonglong)bVar2 * 0xd);
                  }
                  if (fVar17 < 3.4028235e+38) {
                    fVar16 = fVar17;
                  }
                }
                bVar2 = *(byte *)(param_1 + 0x1e0);
                if ((int)(uint)bVar2 < (int)plVar9[0x6a]) {
                  plVar11 = (longlong *)plVar9[0x69];
                  if ((longlong *)plVar9[0x69] == (longlong *)0x0) {
                    plVar11 = plVar9 + 1;
                  }
                  if (0.0 < *(float *)(plVar11 + (ulonglong)bVar2 * 0xd + 1)) {
                    fVar18 = *(float *)(plVar11 + (ulonglong)bVar2 * 0xd);
                  }
                  if (fVar18 < fVar16) {
                    fVar16 = fVar18;
                  }
                }
                if (fVar16 < 3.4028235e+38) {
                  fVar16 = fVar16 * 0.1;
                  if (0.0 <= fVar16) {
                    if (1.0 <= fVar16) {
                      fVar16 = 1.0;
                    }
                  }
                  else {
                    fVar16 = 0.0;
                  }
                  fVar19 = 1.0 - fVar16;
                }
              }
            }
          }
        }
        if ((local_c6 & 2) == 0) {
          if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_140781aed:
            uVar4 = local_d0._4_4_;
            if (local_c7 == '\0') {
              local_d0 = CONCAT44(local_d0._4_4_,(float)local_d0 + fVar19);
            }
            else if (local_c7 == '\x01') {
              if ((local_d0._4_2_ == 0) || (fVar19 < (float)local_d0)) {
LAB_140781b28:
                local_d0 = CONCAT44(uVar4,fVar19);
              }
            }
            else if (local_c7 == '\x02') {
              if (local_d0._4_2_ == 0) goto LAB_140781b28;
              if ((float)local_d0 < fVar19) {
                local_d0 = CONCAT44(uVar4,fVar19);
              }
            }
            local_d0._0_6_ = CONCAT24(local_d0._4_2_ + 1,(float)local_d0);
          }
          else {
            cVar5 = *(char *)(param_1 + 0x5a);
            if (cVar5 == '\0') {
              bVar13 = fVar19 < fVar14;
LAB_140781ae6:
              if (!bVar13) goto LAB_140781aed;
            }
            else {
              if (cVar5 == '\x01') {
                bVar13 = fVar15 < fVar19;
                goto LAB_140781ae6;
              }
              if (((cVar5 == '\x02') && (fVar14 <= fVar19)) && (fVar19 <= fVar15))
              goto LAB_140781aed;
            }
          }
          local_d0 = CONCAT26(local_d0._6_2_ + 1,(undefined6)local_d0);
        }
        FUN_142bf3280(&local_e8);
        if ((*(byte *)((longlong)local_e8 + 0x156) & 1) != 0) goto LAB_1407818f0;
        local_e0 = local_e0 + 1;
        local_d0 = 0;
        local_c6 = local_c6 & 0xfd | 1;
        if (local_e0 < (int)local_e8[1]) goto LAB_140781b90;
LAB_140781940:
        bVar13 = false;
      } while( true );
    }
  }
  return;
LAB_140781b90:
  do {
    uVar3 = *(uint *)(*local_e8 + 4 + (longlong)local_e0 * 0xc);
    if (((uVar3 >> 0x1e & 1) == 0) && (-1 < (int)uVar3)) {
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
  } while ((!bVar13) && (local_e0 = local_e0 + 1, local_e0 < (int)local_e8[1]));
  goto LAB_1407818f0;
}



// FUNCTION 140781c40 FUN_140781c40 body=988 status=ok
// SIG undefined FUN_140781c40(void)

void FUN_140781c40(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  float fVar13;
  LARGE_INTEGER local_res18 [2];
  longlong *local_88;
  int local_80;
  double local_78;
  undefined8 local_70;
  char local_67;
  byte local_66;
  
  lVar10 = *(longlong *)(param_2 + 0x170);
  if (lVar10 != 0) {
    lVar8 = FUN_142e107c0();
    lVar10 = *(longlong *)(lVar10 + 0x10);
    if ((*(int *)(lVar10 + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar10 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      plVar9 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
      if (plVar9 != (longlong *)0x0) {
        lVar10 = FUN_1428dfc70();
        if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
            != lVar10 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          uVar11 = UThrobber::GetPrivateStaticClass();
          lVar10 = (**(code **)(*plVar9 + 0x628))(plVar9,uVar11);
          if ((lVar10 != 0) && (lVar8 = *(longlong *)(param_1 + 0x1e0), lVar8 != 0)) {
            plVar12 = *(longlong **)(lVar10 + 0x188);
            plVar9 = plVar12 + *(int *)(lVar10 + 400);
            for (; plVar12 != plVar9; plVar12 = plVar12 + 1) {
              if (*plVar12 == lVar8) goto LAB_140781e12;
            }
            plVar12 = *(longlong **)(lVar10 + 0x198);
            plVar9 = plVar12 + *(int *)(lVar10 + 0x1a0);
            for (; plVar12 != plVar9; plVar12 = plVar12 + 1) {
              if (*plVar12 == lVar8) goto LAB_140781e12;
            }
          }
        }
      }
      bVar4 = false;
      goto LAB_140781d95;
    }
  }
  return;
LAB_140781e12:
  bVar4 = true;
LAB_140781d95:
  FUN_142bd2270(&local_88,param_1,param_2,0xffffffff);
LAB_140781dc5:
  if ((int)local_88[1] <= local_80) goto LAB_140781e1a;
  if ((*(byte *)((longlong)local_88 + 0x156) & 1) != 0) goto LAB_140781e1a;
  if ((0.0 <= local_78) &&
     (QueryPerformanceCounter(local_res18),
     local_78 <= (double)local_res18[0].QuadPart * DAT_1468b02f8 + 16777216.0)) goto LAB_140781e1a;
  bVar5 = true;
LAB_140781e1c:
  if (!bVar5) {
    *(int *)(local_88 + 0x27) = local_80;
    return;
  }
  lVar10 = FArchive::operator<<
                     (((longlong)(*(int *)(*local_88 + 4 + (longlong)local_80 * 0xc) * 2) >> 1) +
                      local_88[3]);
  plVar9 = (longlong *)FUN_142dd0030(lVar10);
  if (plVar9 != (longlong *)0x0) {
    uVar11 = UThrobber::GetPrivateStaticClass();
    lVar8 = (**(code **)(*plVar9 + 0x628))(plVar9,uVar11);
    if ((lVar8 != 0) && (lVar3 = *(longlong *)(param_1 + 0x1d8), lVar3 != 0)) {
      plVar12 = *(longlong **)(lVar8 + 0x188);
      plVar9 = plVar12 + *(int *)(lVar8 + 400);
      for (; plVar12 != plVar9; plVar12 = plVar12 + 1) {
        if (*plVar12 == lVar3) goto LAB_140781f1f;
      }
      plVar12 = *(longlong **)(lVar8 + 0x198);
      plVar9 = plVar12 + *(int *)(lVar8 + 0x1a0);
      for (; plVar12 != plVar9; plVar12 = plVar12 + 1) {
        if (*plVar12 == lVar3) goto LAB_140781f1f;
      }
    }
  }
  goto LAB_140781ece;
LAB_140781f1f:
  if ((*(byte *)(lVar10 + 0x378) < 5) && ((bVar4 || (iVar7 = FUN_142dcf600(lVar10), 0 < iVar7)))) {
    fVar13 = 0.0;
  }
  else {
LAB_140781ece:
    fVar13 = 1.0;
  }
  if ((local_66 & 2) != 0) goto LAB_140781f6d;
  if ((((*(char *)(param_1 + 0x44) == '\x01') || (cVar1 = *(char *)(param_1 + 0x5a), cVar1 == '\0'))
      || (cVar1 == '\x01')) || (cVar1 == '\x02')) {
    sVar6 = local_70._4_2_;
    if (local_67 == '\0') {
      local_70 = CONCAT44(local_70._4_4_,(float)local_70 + fVar13);
    }
    else if (local_67 == '\x01') {
      if ((sVar6 == 0) || (fVar13 < (float)local_70)) {
LAB_140781f4d:
        local_70 = CONCAT44(local_70._4_4_,fVar13);
      }
    }
    else if (local_67 == '\x02') {
      if (sVar6 == 0) goto LAB_140781f4d;
      if ((float)local_70 < fVar13) {
        local_70 = CONCAT44(local_70._4_4_,fVar13);
      }
    }
    local_70._0_6_ = CONCAT24(sVar6 + 1,(float)local_70);
  }
  local_70 = CONCAT26(local_70._6_2_ + 1,(undefined6)local_70);
LAB_140781f6d:
  FUN_142bf3280(&local_88);
  if ((*(byte *)((longlong)local_88 + 0x156) & 1) != 0) goto LAB_140781dc5;
  local_80 = local_80 + 1;
  local_70 = 0;
  local_66 = local_66 & 0xfd | 1;
  if (local_80 < (int)local_88[1]) goto LAB_140781fb0;
LAB_140781e1a:
  bVar5 = false;
  goto LAB_140781e1c;
LAB_140781fb0:
  do {
    uVar2 = *(uint *)(*local_88 + 4 + (longlong)local_80 * 0xc);
    if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
  } while ((!bVar5) && (local_80 = local_80 + 1, local_80 < (int)local_88[1]));
  goto LAB_140781dc5;
}



// FUNCTION 140782020 FUN_140782020 body=1409 status=ok
// SIG undefined FUN_140782020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140782020(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  short sVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  float fVar14;
  float fVar15;
  LARGE_INTEGER local_res18;
  longlong *local_e8;
  int local_e0;
  double local_d8;
  undefined8 local_d0;
  char local_c7;
  byte local_c6;
  undefined8 local_c0;
  float local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  float local_7c;
  
  lVar11 = *(longlong *)(param_2 + 0x170);
  if (lVar11 == 0) {
    return;
  }
  lVar6 = FUN_142e107c0();
  lVar11 = *(longlong *)(lVar11 + 0x10);
  if ((*(int *)(lVar11 + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar11 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  plVar7 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  lVar11 = 0;
  lVar6 = lVar11;
  if (plVar7 != (longlong *)0x0) {
    lVar8 = FUN_1428dfc70();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar8 = (**(code **)(*plVar7 + 0x678))(plVar7);
      if (lVar8 != 0) {
        lVar9 = AHeoCon::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          lVar11 = lVar8;
          lVar6 = *(longlong *)(lVar8 + 0x9d0);
        }
      }
      goto LAB_140782140;
    }
  }
  plVar7 = (longlong *)0x0;
LAB_140782140:
  if (lVar11 == 0) {
    return;
  }
  FAIDataProviderValue::BindData(param_1 + 0x1d8,plVar7,*(undefined4 *)(param_2 + 0x30));
  fVar14 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x1d8);
  FUN_142bd2270(&local_e8,param_1,param_2,0xffffffff);
LAB_1407821d0:
  if ((int)local_e8[1] <= local_e0) goto LAB_140782220;
  if ((*(byte *)((longlong)local_e8 + 0x156) & 1) != 0) goto LAB_140782220;
  if ((0.0 <= local_d8) &&
     (QueryPerformanceCounter(&local_res18),
     local_d8 <= (double)local_res18.QuadPart * DAT_1468b02f8 + 16777216.0)) goto LAB_140782220;
  bVar4 = true;
LAB_140782222:
  if (!bVar4) {
    *(int *)(local_e8 + 0x27) = local_e0;
    return;
  }
  uVar10 = FArchive::operator<<
                     (((longlong)(*(int *)(*local_e8 + 4 + (longlong)local_e0 * 0xc) * 2) >> 1) +
                      local_e8[3]);
  plVar7 = (longlong *)FUN_142dd0030(uVar10);
  if (plVar7 != (longlong *)0x0) {
    UThrobber::GetPrivateStaticClass();
    lVar11 = (**(code **)(*plVar7 + 0x628))(plVar7);
    if ((lVar11 != 0) && (lVar8 = *(longlong *)(param_1 + 0x208), lVar8 != 0)) {
      plVar13 = *(longlong **)(lVar11 + 0x188);
      plVar1 = plVar13 + *(int *)(lVar11 + 400);
      for (; plVar13 != plVar1; plVar13 = plVar13 + 1) {
        if (*plVar13 == lVar8) goto LAB_140782391;
      }
      plVar13 = *(longlong **)(lVar11 + 0x198);
      plVar1 = plVar13 + *(int *)(lVar11 + 0x1a0);
      for (; plVar13 != plVar1; plVar13 = plVar13 + 1) {
        if (*plVar13 == lVar8) goto LAB_140782391;
      }
    }
    bVar4 = false;
    goto LAB_140782350;
  }
  if ((local_c6 & 2) == 0) {
    if (((*(char *)(param_1 + 0x44) == '\x01') || (cVar2 = *(char *)(param_1 + 0x5a), cVar2 == '\0')
        ) || ((cVar2 == '\x01' || (cVar2 == '\x02')))) {
      sVar5 = local_d0._4_2_;
      if (local_c7 != '\0') {
        if (local_c7 == '\x01') {
          if ((sVar5 == 0) || (0.0 < (float)local_d0)) {
LAB_1407822ce:
            local_d0 = (ulonglong)local_d0._4_4_ << 0x20;
          }
        }
        else if (local_c7 == '\x02') {
          if (sVar5 == 0) goto LAB_1407822ce;
          if ((float)local_d0 < 0.0) {
            local_d0 = (ulonglong)local_d0._4_4_ << 0x20;
          }
        }
      }
      goto LAB_1407824b9;
    }
    goto LAB_1407824c0;
  }
  goto LAB_1407824c4;
LAB_140782391:
  bVar4 = true;
LAB_140782350:
  lVar11 = plVar7[0x2d];
  if (lVar11 == 0) {
    local_9c = _DAT_1468b5d90;
    puVar12 = &local_9c;
    local_94 = DAT_1468b5d98;
  }
  else {
    puVar12 = (undefined8 *)&local_b4;
    local_b4 = *(undefined4 *)(lVar11 + 0x220);
    local_ac = *(undefined4 *)(lVar11 + 0x228);
    uStack_b0 = *(undefined4 *)(lVar11 + 0x224);
  }
  uVar10 = *puVar12;
  local_b8 = *(float *)(puVar12 + 1);
  lVar11 = *(longlong *)(lVar6 + 0x168);
  if (lVar11 == 0) {
    local_90 = _DAT_1468b5d90;
    puVar12 = &local_90;
    local_88 = DAT_1468b5d98;
  }
  else {
    puVar12 = (undefined8 *)&local_a8;
    local_a8 = *(undefined4 *)(lVar11 + 0x220);
    local_a0 = *(undefined4 *)(lVar11 + 0x228);
    uStack_a4 = *(undefined4 *)(lVar11 + 0x224);
  }
  local_c0._0_4_ = (float)uVar10;
  local_7c = *(float *)(puVar12 + 1);
  local_c0._0_4_ = (float)local_c0 - (float)*puVar12;
  local_c0._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
  local_c0._4_4_ = local_c0._4_4_ - (float)((ulonglong)*puVar12 >> 0x20);
  if ((bVar4) ||
     (local_c0._4_4_ * local_c0._4_4_ + (float)local_c0 * (float)local_c0 +
      (local_b8 - local_7c) * (local_b8 - local_7c) <= fVar14 * fVar14)) {
    fVar15 = 1.0;
  }
  else {
    fVar15 = 0.0;
  }
  local_c0 = uVar10;
  if ((local_c6 & 2) != 0) goto LAB_1407824c4;
  if ((((*(char *)(param_1 + 0x44) == '\x01') || (cVar2 = *(char *)(param_1 + 0x5a), cVar2 == '\0'))
      || (cVar2 == '\x01')) || (cVar2 == '\x02')) {
    sVar5 = local_d0._4_2_;
    if (local_c7 == '\0') {
      local_d0 = CONCAT44(local_d0._4_4_,(float)local_d0 + fVar15);
    }
    else if (local_c7 == '\x01') {
      if ((sVar5 == 0) || (fVar15 < (float)local_d0)) {
LAB_1407824a4:
        local_d0 = CONCAT44(local_d0._4_4_,fVar15);
      }
    }
    else if (local_c7 == '\x02') {
      if (sVar5 == 0) goto LAB_1407824a4;
      if ((float)local_d0 < fVar15) {
        local_d0 = CONCAT44(local_d0._4_4_,fVar15);
      }
    }
LAB_1407824b9:
    local_d0._0_6_ = CONCAT24(sVar5 + 1,(float)local_d0);
  }
LAB_1407824c0:
  local_d0 = CONCAT26(local_d0._6_2_ + 1,(undefined6)local_d0);
LAB_1407824c4:
  FUN_142bf3280(&local_e8);
  if ((*(byte *)((longlong)local_e8 + 0x156) & 1) != 0) goto LAB_1407821d0;
  local_e0 = local_e0 + 1;
  local_d0 = 0;
  local_c6 = local_c6 & 0xfd | 1;
  if (local_e0 < (int)local_e8[1]) goto LAB_140782510;
LAB_140782220:
  bVar4 = false;
  goto LAB_140782222;
LAB_140782510:
  do {
    uVar3 = *(uint *)(*local_e8 + 4 + (longlong)local_e0 * 0xc);
    if (((uVar3 >> 0x1e & 1) == 0) && (-1 < (int)uVar3)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
  } while ((!bVar4) && (local_e0 = local_e0 + 1, local_e0 < (int)local_e8[1]));
  goto LAB_1407821d0;
}



// FUNCTION 1407825b0 FUN_1407825b0 body=974 status=ok
// SIG undefined FUN_1407825b0(void)

void FUN_1407825b0(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  LARGE_INTEGER local_res10;
  longlong *local_a8;
  int local_a0;
  double local_98;
  undefined8 local_90;
  char local_87;
  byte local_86;
  
  lVar6 = *(longlong *)(param_2 + 0x170);
  if (lVar6 != 0) {
    lVar4 = FUN_142e107c0();
    lVar6 = *(longlong *)(lVar6 + 0x10);
    if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      fVar12 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0xf8);
      fVar13 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x128);
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
      plVar7 = (longlong *)0x0;
      plVar9 = plVar7;
      if (plVar5 != (longlong *)0x0) {
        lVar6 = FUN_1428dfc70();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if ((bVar11) && (lVar6 = (**(code **)(*plVar5 + 0x678))(plVar5), lVar6 != 0)) {
          lVar4 = AHeoCon::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
          if (bVar11) {
            plVar9 = *(longlong **)(lVar6 + 0x9d0);
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        plVar7 = (longlong *)(**(code **)(*plVar9 + 0x688))();
      }
      FUN_142bd2270(&local_a8,param_1,param_2,0xffffffff);
LAB_140782757:
      if ((int)local_a8[1] <= local_a0) goto LAB_1407827a5;
      if ((*(byte *)((longlong)local_a8 + 0x156) & 1) != 0) goto LAB_1407827a5;
      if ((0.0 <= local_98) &&
         (QueryPerformanceCounter(&local_res10),
         local_98 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0)) goto LAB_1407827a5;
      bVar11 = true;
      do {
        if (!bVar11) {
          *(int *)(local_a8 + 0x27) = local_a0;
          return;
        }
        fVar14 = 0.0;
        if (plVar7 != (longlong *)0x0) {
          uVar8 = FArchive::operator<<
                            (((longlong)(*(int *)(*local_a8 + 4 + (longlong)local_a0 * 0xc) * 2) >>
                             1) + local_a8[3]);
          plVar9 = (longlong *)FUN_142dd0060(uVar8);
          if (plVar9 != (longlong *)0x0) {
            uVar10 = FUN_142e79600();
            (**(code **)(*plVar9 + 0x628))(plVar9,uVar10);
          }
          cVar3 = FUN_142dd3e20(uVar8,plVar7);
          if (cVar3 != '\0') {
            fVar14 = 1.0;
          }
        }
        if ((local_86 & 2) == 0) {
          if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_140782850:
            uVar2 = local_90._4_4_;
            if (local_87 == '\0') {
              local_90 = CONCAT44(local_90._4_4_,(float)local_90 + fVar14);
            }
            else if (local_87 == '\x01') {
              if ((local_90._4_2_ == 0) || (fVar14 < (float)local_90)) {
LAB_14078288b:
                local_90 = CONCAT44(uVar2,fVar14);
              }
            }
            else if (local_87 == '\x02') {
              if (local_90._4_2_ == 0) goto LAB_14078288b;
              if ((float)local_90 < fVar14) {
                local_90 = CONCAT44(uVar2,fVar14);
              }
            }
            local_90._0_6_ = CONCAT24(local_90._4_2_ + 1,(float)local_90);
          }
          else {
            cVar3 = *(char *)(param_1 + 0x5a);
            if (cVar3 == '\0') {
              bVar11 = fVar14 < fVar12;
LAB_140782849:
              if (!bVar11) goto LAB_140782850;
            }
            else {
              if (cVar3 == '\x01') {
                bVar11 = fVar13 < fVar14;
                goto LAB_140782849;
              }
              if (((cVar3 == '\x02') && (fVar12 <= fVar14)) && (fVar14 <= fVar13))
              goto LAB_140782850;
            }
          }
          local_90 = CONCAT26(local_90._6_2_ + 1,(undefined6)local_90);
        }
        FUN_142bf3280(&local_a8);
        if ((*(byte *)((longlong)local_a8 + 0x156) & 1) != 0) goto LAB_140782757;
        local_a0 = local_a0 + 1;
        local_90 = 0;
        local_86 = local_86 & 0xfd | 1;
        if (local_a0 < (int)local_a8[1]) goto LAB_1407828f0;
LAB_1407827a5:
        bVar11 = false;
      } while( true );
    }
  }
  return;
LAB_1407828f0:
  do {
    uVar1 = *(uint *)(*local_a8 + 4 + (longlong)local_a0 * 0xc);
    if (((uVar1 >> 0x1e & 1) == 0) && (-1 < (int)uVar1)) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
  } while ((!bVar11) && (local_a0 = local_a0 + 1, local_a0 < (int)local_a8[1]));
  goto LAB_140782757;
}



// FUNCTION 140782980 FUN_140782980 body=1341 status=ok
// SIG undefined FUN_140782980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140782980(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong *local_res10;
  LARGE_INTEGER local_res18 [2];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined8 local_108;
  undefined4 local_100;
  float local_f0;
  longlong *local_e8;
  int local_e0;
  double local_d8;
  undefined8 local_d0;
  char local_c7;
  byte local_c6;
  
  lVar7 = *(longlong *)(param_2 + 0x170);
  if (lVar7 == 0) {
    return;
  }
  lVar5 = FUN_142e107c0();
  lVar7 = *(longlong *)(lVar7 + 0x10);
  if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  fVar14 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0xf8);
  fVar15 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x128);
  plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
  plVar9 = (longlong *)0x0;
  plVar12 = plVar9;
  if (plVar6 != (longlong *)0x0) {
    lVar7 = FUN_1428dfc70();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) {
      lVar7 = (**(code **)(*plVar6 + 0x678))(plVar6);
      if (lVar7 != 0) {
        lVar5 = AHeoCon::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        if (bVar13) {
          plVar12 = *(longlong **)(lVar7 + 0x9d0);
        }
      }
      goto LAB_140782af5;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_140782af5:
  plVar8 = plVar9;
  if (plVar12 != (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)(*plVar12 + 0x688))();
  }
  plVar12 = plVar9;
  if ((plVar6 != (longlong *)0x0) &&
     (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x668))(plVar6), plVar6 != (longlong *)0x0)) {
    lVar7 = FUN_142c2de20();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) {
      plVar9 = (longlong *)plVar6[0xad];
      plVar12 = plVar6;
    }
  }
  local_res10 = plVar9;
  fVar16 = (float)FUN_142de77e0(param_1 + 0x1d8,plVar12,0,&local_res10);
  FUN_142bd2270(&local_e8,param_1,param_2,0xffffffff);
LAB_140782bd5:
  if ((int)local_e8[1] <= local_e0) goto LAB_140782c27;
  if ((*(byte *)((longlong)local_e8 + 0x156) & 1) != 0) goto LAB_140782c27;
  if ((0.0 <= local_d8) &&
     (QueryPerformanceCounter(local_res18),
     local_d8 <= (double)local_res18[0].QuadPart * DAT_1468b02f8 + 16777216.0)) goto LAB_140782c27;
  bVar13 = true;
  do {
    if (!bVar13) {
      *(int *)(local_e8 + 0x27) = local_e0;
      return;
    }
    fVar19 = 0.0;
    if ((plVar8 != (longlong *)0x0) && (0.0001 < fVar16)) {
      lVar7 = plVar8[0x2d];
      if (lVar7 == 0) {
        local_100 = DAT_1468b5d98;
        puVar10 = &local_108;
        local_108 = _DAT_1468b5d90;
      }
      else {
        puVar10 = (undefined8 *)&local_128;
        local_128 = *(undefined4 *)(lVar7 + 0x220);
        local_120 = *(undefined4 *)(lVar7 + 0x228);
        uStack_124 = *(undefined4 *)(lVar7 + 0x224);
      }
      uVar1 = *puVar10;
      local_f0 = *(float *)(puVar10 + 1);
      uVar11 = FArchive::operator<<
                         (((longlong)(*(int *)(*local_e8 + 4 + (longlong)local_e0 * 0xc) * 2) >> 1)
                          + local_e8[3]);
      FUN_142dcd3a0(uVar11,&local_118,&local_res10);
      fVar18 = local_118 - (float)uVar1;
      fVar17 = local_114 - (float)((ulonglong)uVar1 >> 0x20);
      if (SQRT(fVar18 * fVar18 + fVar17 * fVar17 + (local_110 - local_f0) * (local_110 - local_f0))
          <= fVar16) {
        fVar19 = 1.0;
      }
    }
    if ((local_c6 & 2) == 0) {
      if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_140782d69:
        uVar4 = local_d0._4_4_;
        if (local_c7 == '\0') {
          local_d0 = CONCAT44(local_d0._4_4_,(float)local_d0 + fVar19);
        }
        else if (local_c7 == '\x01') {
          if ((local_d0._4_2_ == 0) || (fVar19 < (float)local_d0)) {
LAB_140782da9:
            local_d0 = CONCAT44(uVar4,fVar19);
          }
        }
        else if (local_c7 == '\x02') {
          if (local_d0._4_2_ == 0) goto LAB_140782da9;
          if ((float)local_d0 < fVar19) {
            local_d0 = CONCAT44(uVar4,fVar19);
          }
        }
        local_d0._0_6_ = CONCAT24(local_d0._4_2_ + 1,(float)local_d0);
      }
      else {
        cVar2 = *(char *)(param_1 + 0x5a);
        if (cVar2 == '\0') {
          bVar13 = fVar19 < fVar14;
LAB_140782d62:
          if (!bVar13) goto LAB_140782d69;
        }
        else {
          if (cVar2 == '\x01') {
            bVar13 = fVar15 < fVar19;
            goto LAB_140782d62;
          }
          if (((cVar2 == '\x02') && (fVar14 <= fVar19)) && (fVar19 <= fVar15)) goto LAB_140782d69;
        }
      }
      local_d0 = CONCAT26(local_d0._6_2_ + 1,(undefined6)local_d0);
    }
    FUN_142bf3280(&local_e8);
    if ((*(byte *)((longlong)local_e8 + 0x156) & 1) != 0) goto LAB_140782bd5;
    local_e0 = local_e0 + 1;
    local_d0 = 0;
    local_c6 = local_c6 & 0xfd | 1;
    if (local_e0 < (int)local_e8[1]) break;
LAB_140782c27:
    bVar13 = false;
  } while( true );
  do {
    uVar3 = *(uint *)(*local_e8 + 4 + (longlong)local_e0 * 0xc);
    if (((uVar3 >> 0x1e & 1) == 0) && (-1 < (int)uVar3)) {
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
  } while ((!bVar13) && (local_e0 = local_e0 + 1, local_e0 < (int)local_e8[1]));
  goto LAB_140782bd5;
}



// FUNCTION 140782ec0 FUN_140782ec0 body=681 status=ok
// SIG undefined FUN_140782ec0(void)

void FUN_140782ec0(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  short sVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  float fVar10;
  LARGE_INTEGER local_res10;
  longlong *local_68;
  int local_60;
  double local_58;
  undefined8 local_50;
  char local_47;
  byte local_46;
  
  lVar8 = *(longlong *)(param_2 + 0x170);
  if (lVar8 != 0) {
    lVar7 = FUN_142e107c0();
    lVar8 = *(longlong *)(lVar8 + 0x10);
    if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar8 = FWeakObjectPtr::Get(param_2 + 0x34), lVar8 != 0)) {
      FAIDataProviderValue::BindData(param_1 + 0x60,lVar8,*(undefined4 *)(param_2 + 0x30));
      cVar5 = FAIDataProviderBoolValue::GetValue(param_1 + 0x60);
      FUN_142bd2270(&local_68,param_1,param_2,0xffffffff);
LAB_140782fa0:
      if ((int)local_68[1] <= local_60) goto LAB_140782fed;
      if ((*(byte *)((longlong)local_68 + 0x156) & 1) != 0) goto LAB_140782fed;
      if ((0.0 <= local_58) &&
         (QueryPerformanceCounter(&local_res10),
         local_58 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0)) goto LAB_140782fed;
      bVar3 = true;
      do {
        if (!bVar3) {
          *(int *)(local_68 + 0x27) = local_60;
          return;
        }
        uVar9 = FArchive::operator<<
                          (((longlong)(*(int *)(*local_68 + 4 + (longlong)local_60 * 0xc) * 2) >> 1)
                           + local_68[3]);
        cVar6 = FUN_142dd38f0(uVar9);
        if ((local_46 & 2) == 0) {
          cVar1 = *(char *)(param_1 + 0x5a);
          if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) ||
             ((cVar1 != '\x03' || (cVar6 != cVar5)))) {
            if ((local_46 & 4) == 0) {
              fVar10 = 0.0;
              goto LAB_14078305b;
            }
          }
          else {
            fVar10 = 1.0;
LAB_14078305b:
            sVar4 = local_50._4_2_;
            if (local_47 == '\0') {
              local_50 = CONCAT44(local_50._4_4_,(float)local_50 + fVar10);
            }
            else if (local_47 == '\x01') {
              if ((sVar4 == 0) || (fVar10 < (float)local_50)) {
LAB_140783096:
                local_50 = CONCAT44(local_50._4_4_,fVar10);
              }
            }
            else if (local_47 == '\x02') {
              if (sVar4 == 0) goto LAB_140783096;
              if ((float)local_50 < fVar10) {
                local_50 = CONCAT44(local_50._4_4_,fVar10);
              }
            }
            local_50._0_6_ = CONCAT24(sVar4 + 1,(float)local_50);
          }
          local_50 = CONCAT26(local_50._6_2_ + 1,(undefined6)local_50);
        }
        FUN_142bf3280(&local_68);
        if ((*(byte *)((longlong)local_68 + 0x156) & 1) != 0) goto LAB_140782fa0;
        local_60 = local_60 + 1;
        local_50 = 0;
        local_46 = local_46 & 0xfd | 1;
        if (local_60 < (int)local_68[1]) goto LAB_140783100;
LAB_140782fed:
        bVar3 = false;
      } while( true );
    }
  }
  return;
LAB_140783100:
  do {
    uVar2 = *(uint *)(*local_68 + 4 + (longlong)local_60 * 0xc);
    if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  } while ((!bVar3) && (local_60 = local_60 + 1, local_60 < (int)local_68[1]));
  goto LAB_140782fa0;
}



// FUNCTION 140783170 FUN_140783170 body=1274 status=ok
// SIG undefined FUN_140783170(void)

void FUN_140783170(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  LARGE_INTEGER local_res18 [2];
  longlong *local_148;
  int local_140;
  double local_138;
  undefined8 local_130;
  char local_127;
  byte local_126;
  float local_118 [3];
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  undefined4 local_d8;
  uint local_d4;
  undefined8 local_d0;
  float local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  byte local_a8 [8];
  undefined8 local_a0;
  
  lVar8 = *(longlong *)(param_2 + 0x170);
  if (lVar8 != 0) {
    lVar5 = FUN_142e107c0();
    lVar8 = *(longlong *)(lVar8 + 0x10);
    if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (bVar11) {
      fVar12 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0xf8);
      fVar13 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x128);
      plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34);
      lVar8 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar5 = FUN_1428dfc70();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if ((bVar11) &&
           (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x688))(plVar6), plVar6 != (longlong *)0x0))
        {
          uVar7 = UScrollBox::GetPrivateStaticClass();
          lVar8 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
        }
      }
      FUN_142bd2270(&local_148,param_1,param_2,0xffffffff);
LAB_1407832f1:
      if ((int)local_148[1] <= local_140) goto LAB_140783349;
      if ((*(byte *)((longlong)local_148 + 0x156) & 1) != 0) goto LAB_140783349;
      if ((0.0 <= local_138) &&
         (QueryPerformanceCounter(local_res18),
         local_138 <= (double)local_res18[0].QuadPart * DAT_1468b02f8 + 16777216.0))
      goto LAB_140783349;
      bVar11 = true;
      do {
        if (!bVar11) {
          *(int *)(local_148 + 0x27) = local_140;
          return;
        }
        lVar9 = FArchive::operator<<
                          (((longlong)(*(int *)(*local_148 + 4 + (longlong)local_140 * 0xc) * 2) >>
                           1) + local_148[3]);
        fVar15 = 0.0;
        local_104 = DAT_14622e8b8;
        local_f8 = DAT_14622e8b8;
        local_118[0] = 3.4028235e+38;
        local_118[1] = 3.4028235e+38;
        local_118[2] = -1.0;
        local_10c = DAT_14622e8b0;
        local_100 = DAT_14622e8b0;
        local_f0 = 0;
        FUN_140760710(local_e8);
        local_d4 = local_d4 & 0xfffffc00;
        local_c0 = DAT_14622e8b0;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0.0;
        local_c4 = 0xbf800000;
        local_b8 = DAT_14622e8b8;
        plVar6 = (longlong *)UGameplayTask_SpawnActor::GetPrivateStaticClass();
        lVar5 = plVar6[0x1f];
        if (lVar5 == 0) {
          (**(code **)(*plVar6 + 0x368))(plVar6);
          lVar5 = plVar6[0x1f];
        }
        bVar1 = *(byte *)(lVar5 + 0x48);
        local_a0 = *(undefined8 *)(lVar5 + 0x50);
        local_a8[0] = bVar1;
        cVar4 = FUN_14077cd10(local_a8);
        if ((cVar4 != '\0') && (bVar1 < 8)) {
          pfVar10 = (float *)(lVar9 + 0x20 + (ulonglong)bVar1 * 0x68);
          if ((0.0 < pfVar10[2]) &&
             ((((*pfVar10 < 3.4028235e+38 &&
                ((*(uint *)((ulonglong)bVar1 * 0x68 + 100 + lVar9) >> 1 & 1) != 0)) &&
               (FUN_1407263c0(local_118), lVar8 != 0)) &&
              (fVar14 = (float)FUN_142d1b990(lVar8), 0.0 < fVar14)))) {
            fVar14 = local_c8 / fVar14;
            if (0.0 <= fVar14) {
              if (1.0 <= fVar14) {
                fVar14 = 1.0;
              }
            }
            else {
              fVar14 = 0.0;
            }
            fVar15 = local_118[0];
            if (local_118[2] <= 0.0) {
              fVar15 = 3.4028235e+38;
            }
            fVar15 = fVar14 - fVar15 * *(float *)(param_1 + 0x1d8);
            if (0.0 <= fVar15) {
              if (1.0 <= fVar15) {
                fVar15 = 1.0;
              }
            }
            else {
              fVar15 = 0.0;
            }
          }
        }
        if ((local_126 & 2) == 0) {
          if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_140783527:
            sVar3 = local_130._4_2_;
            if (local_127 == '\0') {
              local_130 = CONCAT44(local_130._4_4_,(float)local_130 + fVar15);
            }
            else if (local_127 == '\x01') {
              if ((sVar3 == 0) || (fVar15 < (float)local_130)) {
LAB_140783567:
                local_130 = CONCAT44(local_130._4_4_,fVar15);
              }
            }
            else if (local_127 == '\x02') {
              if (sVar3 == 0) goto LAB_140783567;
              if ((float)local_130 < fVar15) {
                local_130 = CONCAT44(local_130._4_4_,fVar15);
              }
            }
            local_130._0_6_ = CONCAT24(sVar3 + 1,(float)local_130);
          }
          else {
            cVar4 = *(char *)(param_1 + 0x5a);
            if (cVar4 == '\0') {
              bVar11 = fVar15 < fVar12;
LAB_140783520:
              if (!bVar11) goto LAB_140783527;
            }
            else {
              if (cVar4 == '\x01') {
                bVar11 = fVar13 < fVar15;
                goto LAB_140783520;
              }
              if (((cVar4 == '\x02') && (fVar12 <= fVar15)) && (fVar15 <= fVar13))
              goto LAB_140783527;
            }
          }
          local_130 = CONCAT26(local_130._6_2_ + 1,(undefined6)local_130);
        }
        FUN_142bf3280(&local_148);
        if ((*(byte *)((longlong)local_148 + 0x156) & 1) != 0) goto LAB_1407832f1;
        local_140 = local_140 + 1;
        local_130 = 0;
        local_126 = local_126 & 0xfd | 1;
        if (local_140 < (int)local_148[1]) goto LAB_1407835d0;
LAB_140783349:
        bVar11 = false;
      } while( true );
    }
  }
  return;
LAB_1407835d0:
  do {
    uVar2 = *(uint *)(*local_148 + 4 + (longlong)local_140 * 0xc);
    if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
  } while ((!bVar11) && (local_140 = local_140 + 1, local_140 < (int)local_148[1]));
  goto LAB_1407832f1;
}



// FUNCTION 140783670 FUN_140783670 body=681 status=ok
// SIG undefined FUN_140783670(void)

void FUN_140783670(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  short sVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  float fVar9;
  LARGE_INTEGER local_res10;
  longlong *local_68;
  int local_60;
  double local_58;
  undefined8 local_50;
  char local_47;
  byte local_46;
  
  lVar8 = *(longlong *)(param_2 + 0x170);
  if (lVar8 != 0) {
    lVar6 = FUN_142e107c0();
    lVar8 = *(longlong *)(lVar8 + 0x10);
    if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar7 = FWeakObjectPtr::Get(param_2 + 0x34);
      lVar8 = FUN_140765020(uVar7);
      if (lVar8 != 0) {
        FAIDataProviderValue::BindData(param_1 + 0x60,lVar8,*(undefined4 *)(param_2 + 0x30));
        bVar5 = FAIDataProviderBoolValue::GetValue(param_1 + 0x60);
        FUN_142bd2270(&local_68,param_1,param_2,0xffffffff);
LAB_140783754:
        if ((int)local_68[1] <= local_60) goto LAB_1407837a1;
        if ((*(byte *)((longlong)local_68 + 0x156) & 1) != 0) goto LAB_1407837a1;
        if ((0.0 <= local_58) &&
           (QueryPerformanceCounter(&local_res10),
           local_58 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0))
        goto LAB_1407837a1;
        bVar3 = true;
        do {
          if (!bVar3) {
            *(int *)(local_68 + 0x27) = local_60;
            return;
          }
          lVar8 = FArchive::operator<<
                            (((longlong)(*(int *)(*local_68 + 4 + (longlong)local_60 * 0xc) * 2) >>
                             1) + local_68[3]);
          if ((local_46 & 2) == 0) {
            cVar1 = *(char *)(param_1 + 0x5a);
            if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) ||
               ((cVar1 != '\x03' || ((*(byte *)(lVar8 + 0x38c) & 1) != bVar5)))) {
              if ((local_46 & 4) == 0) {
                fVar9 = 0.0;
                goto LAB_140783810;
              }
            }
            else {
              fVar9 = 1.0;
LAB_140783810:
              sVar4 = local_50._4_2_;
              if (local_47 == '\0') {
                local_50 = CONCAT44(local_50._4_4_,(float)local_50 + fVar9);
              }
              else if (local_47 == '\x01') {
                if ((sVar4 == 0) || (fVar9 < (float)local_50)) {
LAB_14078384b:
                  local_50 = CONCAT44(local_50._4_4_,fVar9);
                }
              }
              else if (local_47 == '\x02') {
                if (sVar4 == 0) goto LAB_14078384b;
                if ((float)local_50 < fVar9) {
                  local_50 = CONCAT44(local_50._4_4_,fVar9);
                }
              }
              local_50._0_6_ = CONCAT24(sVar4 + 1,(float)local_50);
            }
            local_50 = CONCAT26(local_50._6_2_ + 1,(undefined6)local_50);
          }
          FUN_142bf3280(&local_68);
          if ((*(byte *)((longlong)local_68 + 0x156) & 1) != 0) goto LAB_140783754;
          local_60 = local_60 + 1;
          local_50 = 0;
          local_46 = local_46 & 0xfd | 1;
          if (local_60 < (int)local_68[1]) goto LAB_1407838b0;
LAB_1407837a1:
          bVar3 = false;
        } while( true );
      }
    }
  }
  return;
LAB_1407838b0:
  do {
    uVar2 = *(uint *)(*local_68 + 4 + (longlong)local_60 * 0xc);
    if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  } while ((!bVar3) && (local_60 = local_60 + 1, local_60 < (int)local_68[1]));
  goto LAB_140783754;
}



// FUNCTION 140783920 FUN_140783920 body=1285 status=ok
// SIG undefined FUN_140783920(void)

void FUN_140783920(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  short sVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int local_res10 [2];
  LARGE_INTEGER local_res18 [2];
  byte local_e8 [16];
  longlong *local_d8;
  int local_d0;
  double local_c8;
  undefined8 local_c0;
  char local_b7;
  byte local_b6;
  
  plVar3 = *(longlong **)(param_2 + 0x170);
  if (plVar3 != (longlong *)0x0) {
    lVar5 = UEnvQueryItemType_ActorBase::GetPrivateStaticClass();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if ((bVar12) &&
       (plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34), plVar6 != (longlong *)0x0)) {
      lVar5 = FUN_1428dfc70();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if ((bVar12) && (lVar5 = (**(code **)(*plVar6 + 0x668))(plVar6), lVar5 != 0)) {
        uVar7 = UAIPerceptionListenerInterface::GetPrivateStaticClass();
        plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar7);
        if ((plVar6 != (longlong *)0x0) &&
           (lVar5 = (**(code **)(*plVar6 + 0x10))(plVar6), lVar5 != 0)) {
          fVar13 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0xf8);
          fVar14 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x128);
          FUN_142bd2270(&local_d8,param_1,param_2,0xffffffff);
LAB_140783ac3:
          if ((int)local_d8[1] <= local_d0) goto LAB_140783b11;
          if ((*(byte *)((longlong)local_d8 + 0x156) & 1) != 0) goto LAB_140783b11;
          if ((0.0 <= local_c8) &&
             (QueryPerformanceCounter(local_res18),
             local_c8 <= (double)local_res18[0].QuadPart * DAT_1468b02f8 + 16777216.0))
          goto LAB_140783b11;
          bVar12 = true;
          do {
            if (!bVar12) {
              *(int *)(local_d8 + 0x27) = local_d0;
              return;
            }
            fVar16 = 0.0;
            lVar8 = (**(code **)(*plVar3 + 0x2a8))
                              (plVar3,((longlong)
                                       (*(int *)(*local_d8 + 4 + (longlong)local_d0 * 0xc) * 2) >> 1
                                      ) + local_d8[3]);
            if (lVar8 != 0) {
              FUN_140777f40(lVar5 + 0x1c0,local_res10,lVar8);
              if (((local_res10[0] != -1) &&
                  (lVar8 = (longlong)local_res10[0] * 0x380 + *(longlong *)(lVar5 + 0x1c0),
                  lVar8 != 0)) && (lVar8 != -8)) {
                plVar11 = *(longlong **)(param_1 + 0x1e8);
                plVar6 = plVar11 + *(int *)(param_1 + 0x1f0);
                for (; plVar11 != plVar6; plVar11 = plVar11 + 1) {
                  if (*plVar11 != 0) {
                    lVar9 = FUN_142c33440();
                    for (lVar10 = *plVar11; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
                      if (lVar10 == lVar9) {
                        if (*plVar11 != 0) {
                          FUN_14077bb00(local_e8);
                          fVar15 = 3.4028235e+38;
                          if ((int)(uint)local_e8[0] < *(int *)(lVar8 + 0x358)) {
                            lVar10 = *(longlong *)(lVar8 + 0x350);
                            if (*(longlong *)(lVar8 + 0x350) == 0) {
                              lVar10 = lVar8 + 0x10;
                            }
                            if ((*(float *)(lVar10 + 8 + (ulonglong)local_e8[0] * 0x68) <= 0.0) ||
                               (3.4028235e+38 <= *(float *)(lVar10 + (ulonglong)local_e8[0] * 0x68))
                               ) goto LAB_140783c4a;
                            bVar12 = true;
                          }
                          else {
LAB_140783c4a:
                            bVar12 = false;
                          }
                          if (bVar12) {
                            lVar10 = *(longlong *)(lVar8 + 0x350);
                            if (*(longlong *)(lVar8 + 0x350) == 0) {
                              lVar10 = lVar8 + 0x10;
                            }
                            if (0.0 < *(float *)(lVar10 + 8 + (ulonglong)local_e8[0] * 0x68)) {
                              fVar15 = *(float *)(lVar10 + (ulonglong)local_e8[0] * 0x68);
                            }
                            if (fVar15 < *(float *)(param_1 + 0x1f8)) {
                              fVar16 = 1.0;
                              goto LAB_140783c99;
                            }
                          }
                        }
                        break;
                      }
                    }
                  }
                }
              }
            }
LAB_140783c99:
            if ((local_b6 & 2) == 0) {
              if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_140783cdc:
                sVar4 = local_c0._4_2_;
                if (local_b7 == '\0') {
                  local_c0 = CONCAT44(local_c0._4_4_,(float)local_c0 + fVar16);
                }
                else if (local_b7 == '\x01') {
                  if ((sVar4 == 0) || (fVar16 < (float)local_c0)) {
LAB_140783d17:
                    local_c0 = CONCAT44(local_c0._4_4_,fVar16);
                  }
                }
                else if (local_b7 == '\x02') {
                  if (sVar4 == 0) goto LAB_140783d17;
                  if ((float)local_c0 < fVar16) {
                    local_c0 = CONCAT44(local_c0._4_4_,fVar16);
                  }
                }
                local_c0._0_6_ = CONCAT24(sVar4 + 1,(float)local_c0);
              }
              else {
                cVar1 = *(char *)(param_1 + 0x5a);
                if (cVar1 == '\0') {
                  bVar12 = fVar16 < fVar13;
LAB_140783cd5:
                  if (!bVar12) goto LAB_140783cdc;
                }
                else {
                  if (cVar1 == '\x01') {
                    bVar12 = fVar14 < fVar16;
                    goto LAB_140783cd5;
                  }
                  if (((cVar1 == '\x02') && (fVar13 <= fVar16)) && (fVar16 <= fVar14))
                  goto LAB_140783cdc;
                }
              }
              local_c0 = CONCAT26(local_c0._6_2_ + 1,(undefined6)local_c0);
            }
            FUN_142bf3280(&local_d8);
            if ((*(byte *)((longlong)local_d8 + 0x156) & 1) != 0) goto LAB_140783ac3;
            local_d0 = local_d0 + 1;
            local_c0 = 0;
            local_b6 = local_b6 & 0xfd | 1;
            if (local_d0 < (int)local_d8[1]) goto LAB_140783d80;
LAB_140783b11:
            bVar12 = false;
          } while( true );
        }
      }
    }
  }
  return;
LAB_140783d80:
  do {
    uVar2 = *(uint *)(*local_d8 + 4 + (longlong)local_d0 * 0xc);
    if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
  } while ((!bVar12) && (local_d0 = local_d0 + 1, local_d0 < (int)local_d8[1]));
  goto LAB_140783ac3;
}



// FUNCTION 140783e30 FUN_140783e30 body=1843 status=ok
// SIG undefined FUN_140783e30(void)

void FUN_140783e30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  short sVar4;
  undefined1 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong *local_198;
  int local_190;
  double local_188;
  undefined8 local_180;
  char local_177;
  byte local_176;
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  float local_148;
  LARGE_INTEGER local_140;
  undefined8 local_138;
  longlong local_130;
  longlong *local_128;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  float local_f0;
  undefined1 local_ec [180];
  
  if ((*(longlong *)(param_2 + 0x58) == 0) ||
     (lVar7 = FWeakObjectPtr::Get(param_2 + 0x34), lVar7 == 0)) {
    return;
  }
  local_130 = lVar7;
  FAIDataProviderValue::BindData(param_1 + 0x90,lVar7,*(undefined4 *)(param_2 + 0x30));
  fVar18 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x90);
  FAIDataProviderValue::BindData(param_1 + 0xc0,lVar7,*(undefined4 *)(param_2 + 0x30));
  fVar19 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0xc0);
  lVar8 = FUN_1428dfc70();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  lVar8 = 0;
  lVar13 = lVar8;
  if (bVar17) {
    lVar13 = lVar7;
  }
  FAIDataProviderValue::BindData(param_1 + 0x238,lVar7,*(undefined4 *)(param_2 + 0x30));
  fVar20 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x238);
  FAIDataProviderValue::BindData(param_1 + 0x208,lVar7,*(undefined4 *)(param_2 + 0x30));
  FAIDataProviderValue::BindData(param_1 + 0x268,lVar7,*(undefined4 *)(param_2 + 0x30));
  uVar5 = FAIDataProviderBoolValue::GetValue(param_1 + 0x208);
  fVar21 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x268);
  local_160 = 0;
  local_158 = 0;
  FUN_142bd2270(&local_198,param_1,param_2,0xffffffff);
LAB_140784038:
  if ((int)local_198[1] <= local_190) goto LAB_14078408a;
  if ((*(byte *)((longlong)local_198 + 0x156) & 1) != 0) goto LAB_14078408a;
  if ((0.0 <= local_188) &&
     (QueryPerformanceCounter(&local_140),
     local_188 <= (double)local_140.QuadPart * DAT_1468b02f8 + 16777216.0)) goto LAB_14078408a;
  bVar17 = true;
  do {
    if (!bVar17) {
      *(int *)(local_198 + 0x27) = local_190;
      if (local_160 == 0) {
        return;
      }
      FMemory::Free();
      return;
    }
    puVar9 = (undefined4 *)FUN_142be5200(param_1,local_ec,param_2,local_190);
    local_150 = *puVar9;
    uStack_14c = puVar9[1];
    local_148 = fVar20 + (float)puVar9[2];
    local_138 = FUN_142be4fb0(param_1,param_2,local_190);
    plVar15 = *(longlong **)(param_1 + 0x2a0);
    fVar23 = 0.0;
    local_128 = plVar15 + (longlong)*(int *)(param_1 + 0x2a8) * 0x3b;
    if (plVar15 != local_128) {
      uVar3 = CONCAT44(uStack_14c,local_150);
      plVar15 = plVar15 + 0x18;
      do {
        lVar16 = 0;
        local_170 = 0;
        local_168 = 0;
        lVar7 = lVar16;
        if (*plVar15 != 0) {
          lVar10 = UEnvQueryContext::GetPrivateStaticClass();
          for (lVar12 = *plVar15;
              (lVar7 = lVar16, lVar12 != 0 && (lVar7 = *plVar15, lVar12 != lVar10));
              lVar12 = *(longlong *)(lVar12 + 0x30)) {
          }
        }
        cVar6 = FUN_142bedad0(param_2,lVar7,&local_170);
        if (cVar6 == '\0') {
          if (local_170 != 0) {
            FMemory::Free();
          }
        }
        else {
          lVar7 = lVar16;
          if (*plVar15 != 0) {
            lVar10 = UEnvQueryContext::GetPrivateStaticClass();
            for (lVar12 = *plVar15;
                (lVar7 = lVar16, lVar12 != 0 && (lVar7 = *plVar15, lVar12 != lVar10));
                lVar12 = *(longlong *)(lVar12 + 0x30)) {
            }
          }
          lVar12 = lVar16;
          if (lVar8 != 0) {
            lVar11 = UEnvQueryContext::GetPrivateStaticClass();
            lVar10 = lVar8;
            do {
              lVar12 = lVar8;
              if (lVar10 == lVar11) break;
              lVar10 = *(longlong *)(lVar10 + 0x30);
              lVar12 = lVar16;
            } while (lVar10 != 0);
          }
          if (lVar7 != lVar12) {
            bVar17 = local_158._4_4_ != 0;
            local_158 = (ulonglong)local_158._4_4_ << 0x20;
            if (bVar17) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(&local_160,0);
            }
            FUN_142c0d2a0(param_1,param_2,lVar13,*plVar15,&local_160);
            lVar8 = *plVar15;
          }
          bVar17 = false;
          iVar14 = 0;
          if ((int)local_168 < 1) {
LAB_140784312:
            fVar22 = *(float *)((longlong)plVar15 + 0xc);
            if (0.0 <= fVar22) {
              if (1.0 <= fVar22) {
                fVar22 = 1.0;
              }
            }
            else {
              fVar22 = 0.0;
            }
            bVar17 = *(char *)((longlong)plVar15 + 0x15) == '\0';
            if (fVar22 <= fVar23) {
              fVar23 = fVar22;
            }
          }
          else {
            lVar7 = 0;
            do {
              local_110 = fVar21 + *(float *)(local_170 + 8 + lVar7);
              local_118 = CONCAT44(*(undefined4 *)(local_170 + 4 + lVar7),
                                   *(undefined4 *)(local_170 + lVar7));
              local_100 = local_148;
              local_108 = uVar3;
              local_f0 = local_110;
              cVar6 = FUN_14077fee0(param_1,&local_198,plVar15 + -0x18,local_130,lVar13,&local_160,
                                    param_2,local_138,&local_108,&local_118,uVar5,
                                    *(undefined1 *)(param_1 + 0x2b0));
              if ((char)plVar15[1] == '\0') {
                if (cVar6 == *(char *)(param_1 + 0x2b0)) goto LAB_1407842e7;
              }
              else {
                bVar17 = cVar6 == *(char *)(param_1 + 0x2b0);
                if (!bVar17) goto LAB_140784312;
              }
              iVar14 = iVar14 + 1;
              lVar7 = lVar7 + 0xc;
            } while (iVar14 < (int)local_168);
            if (!bVar17) goto LAB_140784312;
LAB_1407842e7:
            fVar22 = *(float *)(plVar15 + 2);
            if (0.0 <= fVar22) {
              bVar17 = *(char *)((longlong)plVar15 + 0x14) == '\0';
              if (1.0 <= fVar22) {
                fVar22 = 1.0;
              }
              if (fVar23 <= fVar22) {
                fVar23 = fVar22;
              }
            }
            else {
              bVar17 = *(char *)((longlong)plVar15 + 0x14) == '\0';
              if (fVar23 <= 0.0) {
                fVar23 = 0.0;
              }
            }
          }
          if ((!bVar17) && (*(char *)(param_2 + 0x130) == '\0')) {
            if (local_170 != 0) {
              FMemory::Free();
            }
            break;
          }
          if (local_170 != 0) {
            FMemory::Free();
          }
        }
        plVar1 = plVar15 + 0x23;
        plVar15 = plVar15 + 0x3b;
      } while (plVar1 != local_128);
    }
    if ((local_176 & 2) == 0) {
      if (*(char *)(param_1 + 0x44) == '\x01') {
LAB_1407843cb:
        sVar4 = local_180._4_2_;
        if (local_177 == '\0') {
          local_180 = CONCAT44(local_180._4_4_,(float)local_180 + fVar23);
        }
        else if (local_177 == '\x01') {
          if ((sVar4 == 0) || (fVar23 < (float)local_180)) {
LAB_14078440a:
            local_180 = CONCAT44(local_180._4_4_,fVar23);
          }
        }
        else if (local_177 == '\x02') {
          if (sVar4 == 0) goto LAB_14078440a;
          if ((float)local_180 < fVar23) {
            local_180 = CONCAT44(local_180._4_4_,fVar23);
          }
        }
        local_180._0_6_ = CONCAT24(sVar4 + 1,(float)local_180);
      }
      else {
        cVar6 = *(char *)(param_1 + 0x5a);
        if (cVar6 == '\0') {
          bVar17 = fVar23 < fVar18;
LAB_1407843c4:
          if (!bVar17) goto LAB_1407843cb;
        }
        else {
          if (cVar6 == '\x01') {
            bVar17 = fVar19 < fVar23;
            goto LAB_1407843c4;
          }
          if (((cVar6 == '\x02') && (fVar18 <= fVar23)) && (fVar23 <= fVar19)) goto LAB_1407843cb;
        }
      }
      local_180 = CONCAT26(local_180._6_2_ + 1,(undefined6)local_180);
    }
    FUN_142bf3280(&local_198);
    if ((*(byte *)((longlong)local_198 + 0x156) & 1) != 0) goto LAB_140784038;
    local_190 = local_190 + 1;
    local_180 = 0;
    local_176 = local_176 & 0xfd | 1;
    if (local_190 < (int)local_198[1]) break;
LAB_14078408a:
    bVar17 = false;
  } while( true );
  do {
    uVar2 = *(uint *)(*local_198 + 4 + (longlong)local_190 * 0xc);
    if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) {
      bVar17 = true;
    }
    else {
      bVar17 = false;
    }
  } while ((!bVar17) && (local_190 = local_190 + 1, local_190 < (int)local_198[1]));
  goto LAB_140784038;
}



// FUNCTION 140784570 FUN_140784570 body=641 status=ok
// SIG undefined FUN_140784570(void)

void FUN_140784570(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  short sVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  float fVar9;
  LARGE_INTEGER local_res10;
  undefined1 local_88 [16];
  longlong *local_78;
  int local_70;
  double local_68;
  undefined8 local_60;
  char local_57;
  byte local_56;
  
  uVar7 = FWeakObjectPtr::Get(param_2 + 0x34);
  lVar8 = FUN_140765020(uVar7);
  if ((lVar8 == 0) || (lVar3 = *(longlong *)(lVar8 + 0x618), lVar3 == 0)) {
    return;
  }
  FAIDataProviderValue::BindData(param_1 + 0x60,lVar8,*(undefined4 *)(param_2 + 0x30));
  cVar5 = FAIDataProviderBoolValue::GetValue(param_1 + 0x60);
  FUN_142bd2270(&local_78,param_1,param_2,0xffffffff);
  do {
    do {
      if ((((int)local_78[1] <= local_70) || ((*(byte *)((longlong)local_78 + 0x156) & 1) != 0)) ||
         ((0.0 <= local_68 &&
          (QueryPerformanceCounter(&local_res10),
          local_68 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0))))
      goto LAB_1407847b3;
      FUN_142be5200(param_1,local_88,param_2,local_70);
      cVar6 = FUN_142df43c0(lVar3,*(undefined1 *)(param_1 + 0x1d8),local_88);
      if ((local_56 & 2) == 0) {
        cVar1 = *(char *)(param_1 + 0x5a);
        if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) ||
           ((cVar1 != '\x03' || (cVar6 != cVar5)))) {
          if ((local_56 & 4) == 0) {
            fVar9 = 0.0;
            goto LAB_1407846e3;
          }
        }
        else {
          fVar9 = 1.0;
LAB_1407846e3:
          sVar4 = local_60._4_2_;
          if (local_57 == '\0') {
            local_60 = CONCAT44(local_60._4_4_,(float)local_60 + fVar9);
          }
          else if (local_57 == '\x01') {
            if ((sVar4 == 0) || (fVar9 < (float)local_60)) {
LAB_14078471e:
              local_60 = CONCAT44(local_60._4_4_,fVar9);
            }
          }
          else if (local_57 == '\x02') {
            if (sVar4 == 0) goto LAB_14078471e;
            if ((float)local_60 < fVar9) {
              local_60 = CONCAT44(local_60._4_4_,fVar9);
            }
          }
          local_60._0_6_ = CONCAT24(sVar4 + 1,(float)local_60);
        }
        local_60 = CONCAT26(local_60._6_2_ + 1,(undefined6)local_60);
      }
      FUN_142bf3280(&local_78);
    } while ((*(byte *)((longlong)local_78 + 0x156) & 1) != 0);
    local_70 = local_70 + 1;
    local_60 = 0;
    local_56 = local_56 & 0xfd | 1;
    if ((int)local_78[1] <= local_70) {
LAB_1407847b3:
      *(int *)(local_78 + 0x27) = local_70;
      return;
    }
    do {
      uVar2 = *(uint *)(*local_78 + 4 + (longlong)local_70 * 0xc);
      if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) break;
      local_70 = local_70 + 1;
    } while (local_70 < (int)local_78[1]);
  } while( true );
}



// FUNCTION 140784800 FUN_140784800 body=7 status=ok
// SIG undefined FUN_140784800(void)

void FUN_140784800(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1b0) = param_2;
  return;
}



// FUNCTION 140784810 FUN_140784810 body=63 status=ok
// SIG undefined FUN_140784810(void)

void FUN_140784810(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1407cb730(param_1 + -0x5e8);
  if (lVar1 != 0) {
    uVar2 = FUN_142df36d0(*param_2);
    FUN_142df2ca0(lVar1,uVar2);
  }
  return;
}



// FUNCTION 140784850 FUN_140784850 body=127 status=ok
// SIG undefined FUN_140784850(void)

void FUN_140784850(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *local_res8;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  lVar2 = FUN_140778bd0(param_1 + -0xbf);
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x38) + 0x10))((longlong *)(lVar2 + 0x38),param_2);
  }
  if (cVar1 == '\0') {
    local_res8 = param_1 + -0xbf;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 1,&local_res8);
  }
  return;
}



// FUNCTION 1407848d0 FUN_1407848d0 body=476 status=ok
// SIG undefined FUN_1407848d0(void)

void FUN_1407848d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float local_58;
  float fStack_54;
  float local_50;
  undefined1 local_48 [64];
  
  lVar1 = (*(longlong **)(param_1 + 0x68))[0x91];
  if (lVar1 == 0) {
    return;
  }
  lVar1 = *(longlong *)(lVar1 + 0x168);
  if (lVar1 == 0) {
    local_58 = DAT_1468b5d90;
    fStack_54 = DAT_1468b5d94;
    local_50 = DAT_1468b5d98;
  }
  else {
    local_58 = *(float *)(lVar1 + 0x220);
    fStack_54 = *(float *)(lVar1 + 0x224);
    local_50 = *(float *)(lVar1 + 0x228);
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  local_58 = *(float *)(lVar1 + 0x220) - local_58;
  fStack_54 = *(float *)(lVar1 + 0x224) - fStack_54;
  local_50 = *(float *)(lVar1 + 0x228) - local_50;
  fVar3 = fStack_54 * fStack_54 + local_58 * local_58 + local_50 * local_50;
  if (fVar3 != 1.0) {
    if (fVar3 < 1e-08) {
      local_50 = DAT_1468b5d98;
      _local_58 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      goto LAB_140784a6c;
    }
    auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
    fVar4 = auVar5._0_4_;
    fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
    fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
    local_58 = local_58 * fVar4;
    fStack_54 = fStack_54 * fVar4;
    local_50 = local_50 * fVar4;
  }
LAB_140784a6c:
  lVar1 = **(longlong **)(param_1 + 0x68);
  uVar2 = FVector::Rotation(&local_58,local_48);
  (**(code **)(lVar1 + 0x728))(*(undefined8 *)(param_1 + 0x68),uVar2,1);
  return;
}



// FUNCTION 140784ab0 FUN_140784ab0 body=7 status=ok
// SIG undefined FUN_140784ab0(void)

void FUN_140784ab0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1b2) = param_2;
  return;
}



// FUNCTION 140784ac0 SetComputeOnBeginPlay body=7 status=ok
// SIG undefined SetComputeOnBeginPlay(void)

void USBZNavLinkAgilityComponent::SetComputeOnBeginPlay(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1b1) = param_2;
  return;
}



// FUNCTION 140784ad0 FUN_140784ad0 body=939 status=ok
// SIG undefined FUN_140784ad0(void)

void FUN_140784ad0(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x478) = *param_2;
  *(undefined1 *)(param_1 + 0x47c) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x480) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 0x481) = *(undefined1 *)((longlong)param_2 + 9);
  *(undefined1 *)(param_1 + 0x482) = *(undefined1 *)((longlong)param_2 + 10);
  *(undefined1 *)(param_1 + 0x483) = *(undefined1 *)((longlong)param_2 + 0xb);
  *(undefined8 *)(param_1 + 0x484) = *(undefined8 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x498) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x4a8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x4b0) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x4b8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x4c8) = uVar1;
  *(undefined8 *)(param_1 + 0x4d0) = *(undefined8 *)(param_2 + 0x16);
  uVar1 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x4d8) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x4e0) = uVar1;
  *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x4f0) = param_2[0x1e];
  *(undefined4 *)(param_1 + 0x4f4) = param_2[0x1f];
  *(undefined4 *)(param_1 + 0x4f8) = param_2[0x20];
  *(undefined1 *)(param_1 + 0x500) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)(param_1 + 0x508) = *(undefined1 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x509) = *(undefined1 *)((longlong)param_2 + 0x91);
  *(undefined1 *)(param_1 + 0x50a) = *(undefined1 *)((longlong)param_2 + 0x92);
  *(undefined1 *)(param_1 + 0x50b) = *(undefined1 *)((longlong)param_2 + 0x93);
  *(undefined8 *)(param_1 + 0x50c) = *(undefined8 *)(param_2 + 0x25);
  *(undefined8 *)(param_1 + 0x518) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x520) = *(undefined8 *)(param_2 + 0x2a);
  uVar1 = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x528) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x530) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x538) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x540) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x36);
  *(undefined8 *)(param_1 + 0x548) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x550) = uVar1;
  *(undefined8 *)(param_1 + 0x558) = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x560) = *(undefined8 *)(param_2 + 0x3a);
  *(undefined8 *)(param_1 + 0x568) = uVar1;
  *(undefined8 *)(param_1 + 0x570) = *(undefined8 *)(param_2 + 0x3e);
  *(undefined4 *)(param_1 + 0x578) = param_2[0x40];
  *(undefined4 *)(param_1 + 0x57c) = param_2[0x41];
  *(undefined4 *)(param_1 + 0x580) = param_2[0x42];
  *(undefined1 *)(param_1 + 0x588) = *(undefined1 *)(param_2 + 0x44);
  *(undefined1 *)(param_1 + 0x590) = *(undefined1 *)(param_2 + 0x46);
  *(undefined1 *)(param_1 + 0x591) = *(undefined1 *)((longlong)param_2 + 0x119);
  *(undefined1 *)(param_1 + 0x592) = *(undefined1 *)((longlong)param_2 + 0x11a);
  *(undefined1 *)(param_1 + 0x593) = *(undefined1 *)((longlong)param_2 + 0x11b);
  *(undefined8 *)(param_1 + 0x594) = *(undefined8 *)(param_2 + 0x47);
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_2 + 0x4a);
  *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_2 + 0x4c);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x5b0) = *(undefined8 *)(param_2 + 0x4e);
  *(undefined8 *)(param_1 + 0x5b8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x5c0) = *(undefined8 *)(param_2 + 0x52);
  *(undefined8 *)(param_1 + 0x5c8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x5d0) = *(undefined8 *)(param_2 + 0x56);
  *(undefined8 *)(param_1 + 0x5d8) = uVar1;
  *(undefined8 *)(param_1 + 0x5e0) = *(undefined8 *)(param_2 + 0x5a);
  uVar1 = *(undefined8 *)(param_2 + 0x5e);
  *(undefined8 *)(param_1 + 0x5e8) = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 0x5f0) = uVar1;
  *(undefined8 *)(param_1 + 0x5f8) = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x600) = param_2[0x62];
  *(undefined4 *)(param_1 + 0x604) = param_2[99];
  *(undefined4 *)(param_1 + 0x608) = param_2[100];
  *(undefined1 *)(param_1 + 0x610) = *(undefined1 *)(param_2 + 0x66);
  *(undefined1 *)(param_1 + 0x618) = *(undefined1 *)(param_2 + 0x68);
  *(undefined1 *)(param_1 + 0x619) = *(undefined1 *)((longlong)param_2 + 0x1a1);
  *(undefined1 *)(param_1 + 0x61a) = *(undefined1 *)((longlong)param_2 + 0x1a2);
  *(undefined1 *)(param_1 + 0x61b) = *(undefined1 *)((longlong)param_2 + 0x1a3);
  *(undefined8 *)(param_1 + 0x61c) = *(undefined8 *)(param_2 + 0x69);
  *(undefined8 *)(param_1 + 0x628) = *(undefined8 *)(param_2 + 0x6c);
  *(undefined8 *)(param_1 + 0x630) = *(undefined8 *)(param_2 + 0x6e);
  uVar1 = *(undefined8 *)(param_2 + 0x72);
  *(undefined8 *)(param_1 + 0x638) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x640) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x76);
  *(undefined8 *)(param_1 + 0x648) = *(undefined8 *)(param_2 + 0x74);
  *(undefined8 *)(param_1 + 0x650) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x7a);
  *(undefined8 *)(param_1 + 0x658) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x660) = uVar1;
  *(undefined8 *)(param_1 + 0x668) = *(undefined8 *)(param_2 + 0x7c);
  uVar1 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x670) = *(undefined8 *)(param_2 + 0x7e);
  *(undefined8 *)(param_1 + 0x678) = uVar1;
  *(undefined8 *)(param_1 + 0x680) = *(undefined8 *)(param_2 + 0x82);
  *(undefined4 *)(param_1 + 0x688) = param_2[0x84];
  *(undefined4 *)(param_1 + 0x68c) = param_2[0x85];
  *(undefined4 *)(param_1 + 0x690) = param_2[0x86];
  *(undefined1 *)(param_1 + 0x698) = *(undefined1 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x69c) = *(undefined8 *)(param_2 + 0x89);
  *(undefined1 *)(param_1 + 0x6a4) = *(undefined1 *)(param_2 + 0x8b);
  *(undefined4 *)(param_1 + 0x6a8) = param_2[0x8c];
  return;
}



// FUNCTION 140784e80 FUN_140784e80 body=74 status=ok
// SIG undefined FUN_140784e80(void)

void FUN_140784e80(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_1 != (longlong *)0x0) && (param_2 != 0)) {
    uVar1 = FUN_1407e27e0();
    lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_1407da8a0(lVar2,param_2);
    }
  }
  return;
}



// FUNCTION 140784ed0 FUN_140784ed0 body=51 status=ok
// SIG undefined FUN_140784ed0(void)

void FUN_140784ed0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140778bd0(param_1 + -0x5f8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140784ef9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x38) + 0x30))((longlong *)(lVar1 + 0x38),param_2);
    return;
  }
  return;
}



// FUNCTION 140784f10 FUN_140784f10 body=485 status=ok
// SIG undefined FUN_140784f10(void)

undefined8 FUN_140784f10(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (((((param_1[0x35] == 0) || (*(longlong *)(param_1[0x35] + 0x900) == 0)) ||
       (param_1[0x3e] == 0)) || ((param_1[0x3f] == 0 || (param_1[0x40] == 0)))) ||
     ((param_1[0x41] == 0 || (param_1[0x44] == 0)))) {
    *param_2 = DAT_1468593c8;
    return 1;
  }
  if ((*(char *)((longlong)param_1 + 0x1b1) == '\0') &&
     ((param_1[0x43] == 0 || (cVar1 = FUN_1407444f0(), cVar1 == '\0')))) {
    if (*(char *)((longlong)param_1 + 0x856) != '\0') {
      *param_2 = DAT_146859440;
      return 1;
    }
    cVar1 = (**(code **)(*param_1 + 0x408))(param_1);
    if (cVar1 == '\0') {
      *param_2 = DAT_146859428;
      return 1;
    }
    if ((param_1[0x42] != 0) && (cVar1 = FUN_142d59720(param_1[0x42] + 0x3d0), cVar1 == '\0')) {
      *param_2 = DAT_146859430;
      return 1;
    }
    if ((param_1[0x42] != 0) && ((*(uint *)(param_1[0x42] + 0x840) >> 3 & 1) != 0)) {
      *param_2 = DAT_146859448;
      return 1;
    }
    if ((param_1[0x43] != 0) && (cVar1 = FUN_140730f20(), cVar1 == '\0')) {
      *param_2 = DAT_146859438;
      return 1;
    }
  }
  lVar2 = 0;
  if (param_1[0x34] != 0) {
    lVar2 = *(longlong *)(param_1[0x34] + 0x608);
  }
  if ((lVar2 != 0) && (cVar1 = FUN_1407c3030(lVar2 + 0x430), cVar1 != '\0')) {
    *param_2 = DAT_146859450;
    return 1;
  }
  *param_2 = 0;
  return 0;
}



// FUNCTION 140785100 FUN_140785100 body=87 status=ok
// SIG undefined FUN_140785100(void)

undefined8 FUN_140785100(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_140776040();
  if (cVar1 != '\0') {
    if ((*(int *)(param_1 + 0x1c8) < 1) || (*(int *)(param_1 + 0x1dc) < *(int *)(param_1 + 0x1c8)))
    {
      *param_2 = 0;
      return 0;
    }
    *param_2 = DAT_146859420;
  }
  return 1;
}



// FUNCTION 140785160 FUN_140785160 body=48 status=ok
// SIG undefined FUN_140785160(void)

undefined1 FUN_140785160(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x1b1) != '\0') {
    return 1;
  }
  if ((*(longlong *)(param_1 + 0x218) != 0) && (cVar1 = FUN_1407444f0(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140785190 FUN_140785190 body=235 status=ok
// SIG undefined FUN_140785190(void)

void FUN_140785190(longlong *param_1,float param_2)

{
  float fVar1;
  char cVar2;
  
  if (((char)param_1[1] != '\0') && (*(char *)((longlong)param_1 + 0xd1) != '\0')) {
    FUN_1407750c0();
  }
  if (((char)param_1[0x1a] == '\0') && (cVar2 = FUN_142de1370(param_1), cVar2 == '\0')) {
    return;
  }
  FUN_142de0ad0(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x19);
  *(float *)(param_1 + 0x19) = param_2 + fVar1;
  if (*(float *)((longlong)param_1 + 0xcc) <= param_2 + fVar1) {
    *(undefined1 *)(param_1 + 0x1a) = 0;
    if (*(char *)((longlong)param_1 + 0xb4) != '\0') {
      (**(code **)(*param_1 + 0x28))(param_1,1);
      *(undefined4 *)((longlong)param_1 + 0xcc) = 0x40a00000;
      return;
    }
    if (*(char *)((longlong)param_1 + 0xd3) != '\0') {
      FUN_1407750c0(param_1);
      return;
    }
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0x7f7fffff;
    if ((char)param_1[1] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140785263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1);
      return;
    }
    FUN_142dc8e80(param_1 + 2);
  }
  return;
}



// FUNCTION 140785280 FUN_140785280 body=558 status=ok
// SIG undefined FUN_140785280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140785280(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  FUN_142357eb0();
  FUN_140785850(param_1);
  if (param_1[0x34] != 0) {
    FUN_140785cd0(param_1);
    (**(code **)(*param_1 + 0x448))(param_1,param_2);
    if (((((char)param_1[0x36] != '\0') && (*(char *)((longlong)param_1 + 0x855) != '\0')) &&
        (param_1[0x40] != 0)) &&
       ((param_1[0x41] != 0 && (plVar2 = (longlong *)param_1[0x35], plVar2 != (longlong *)0x0)))) {
      iVar1 = *(int *)((longlong)plVar2 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar6;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
      }
      else {
        lVar5 = 0;
      }
      if (((((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) && (param_1[0x41] != 0)) &&
          ((param_1[0x43] != 0 &&
           ((((param_1[0x46] != 0 && (lVar5 = (**(code **)(*plVar2 + 0x148))(plVar2), lVar5 != 0))
             && (1.0 < *(float *)(lVar5 + 0x790) - *(float *)(param_1 + 0x10b))) &&
            (param_1[0x46] != 0)))))) &&
         (((cVar3 = FUN_14073cf40(param_1[0x43]), cVar3 == '\0' ||
           (cVar3 = FUN_140730f20(param_1[0x43]), cVar3 != '\0')) &&
          ((cVar3 = FUN_142c7b8a0(param_1[0x46] + 0x178,(longlong)param_1 + 0x856), cVar3 != '\0' &&
           (*(undefined4 *)(param_1 + 0x10b) = *(undefined4 *)(lVar5 + 0x790),
           *(char *)((longlong)param_1 + 0x856) != '\0')))))) {
        lVar5 = *(longlong *)(param_1[0x35] + 0x168);
        if (lVar5 == 0) {
          local_38 = _DAT_1468b5d90;
          local_30 = DAT_1468b5d98;
        }
        else {
          local_38 = *(undefined8 *)(lVar5 + 0x220);
          local_30 = *(undefined4 *)(lVar5 + 0x228);
        }
        local_28 = local_38;
        local_20 = local_30;
        FUN_1407569c0(param_1[0x34],&local_28);
      }
    }
  }
  return;
}



// FUNCTION 1407854b0 FUN_1407854b0 body=27 status=ok
// SIG undefined FUN_1407854b0(void)

void FUN_1407854b0(undefined8 param_1)

{
  FUN_142ddec70();
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 1407854d0 FUN_1407854d0 body=169 status=ok
// SIG undefined FUN_1407854d0(void)

void FUN_1407854d0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x7e8);
  plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x7f0) * 0x1e;
  for (; plVar2 != plVar3; plVar2 = plVar2 + 0x1e) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
  }
  if (0 < *(int *)(param_1 + 0x7f0)) {
    lVar1 = (longlong)*(int *)(param_1 + 0x7f8) * 0xf0;
    *(undefined8 *)(param_1 + 0x6f8) =
         *(undefined8 *)(lVar1 + 0x90 + *(longlong *)(param_1 + 0x7e8));
    *(undefined8 *)(param_1 + 0x800) =
         *(undefined8 *)(lVar1 + 0xc0 + *(longlong *)(param_1 + 0x7e8));
  }
  return;
}



// FUNCTION 140785580 FUN_140785580 body=459 status=ok
// SIG undefined FUN_140785580(void)

void FUN_140785580(longlong *param_1,float param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res8 [8];
  
  fVar7 = (float)(**(code **)(*param_1 + 0x450))();
  *(float *)(param_1 + 0x114) = fVar7;
  if (0.0 < *(float *)((longlong)param_1 + 0x884)) {
    cVar2 = FUN_140776040(param_1,local_res8);
    if (cVar2 == '\0') {
      lVar3 = param_1[0x24];
      if ((lVar3 == 0) && (lVar3 = FUN_1423407b0(param_1), lVar3 == 0)) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = *(float *)(lVar3 + 0x790);
      }
      bVar1 = fVar7 < *(float *)(param_1 + 0x3a);
    }
    else {
      bVar1 = true;
    }
    fVar7 = *(float *)(param_1 + 0x114);
    fVar9 = (fVar7 * param_2) / *(float *)((longlong)param_1 + 0x884);
    if (bVar1) {
      fVar9 = *(float *)(param_1 + 0x110) - fVar9;
    }
    else {
      fVar9 = *(float *)(param_1 + 0x110) + fVar9;
    }
    if (0.0 <= fVar9) {
      fVar8 = fVar7;
      if (fVar9 <= fVar7) {
        fVar8 = fVar9;
      }
    }
    else {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 0x110) = fVar8;
  }
  if (*(float *)((longlong)param_1 + 0x88c) <= 0.0) {
    fVar9 = *(float *)(param_1 + 0x111);
  }
  else {
    plVar6 = (longlong *)0x0;
    plVar4 = plVar6;
    if (param_1[0x46] != 0) {
      plVar4 = (longlong *)FUN_142dcd660(param_1[0x46],0);
    }
    if (plVar4 == (longlong *)param_1[0x112]) {
      plVar6 = (longlong *)param_1[0x113];
    }
    else {
      param_1[0x112] = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) {
        uVar5 = UScrollBox::GetPrivateStaticClass();
        plVar6 = (longlong *)(**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
      }
      param_1[0x113] = (longlong)plVar6;
    }
    if (plVar6 == (longlong *)0x0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = (float)uhx::glues::AGPlayerState_Glue_obj::get_HealthHealed(plVar6);
    }
    fVar7 = *(float *)(param_1 + 0x114);
    fVar8 = (fVar7 * fVar9) / *(float *)((longlong)param_1 + 0x88c);
    fVar9 = 0.0;
    if ((0.0 <= fVar8) && (fVar9 = fVar7, fVar8 <= fVar7)) {
      fVar9 = fVar8;
    }
    *(float *)(param_1 + 0x111) = fVar9;
  }
  fVar9 = fVar9 + *(float *)(param_1 + 0x110);
  if (*(float *)((longlong)param_1 + 0x8a4) <= fVar9) {
    if (fVar9 <= fVar7) {
      fVar7 = fVar9;
    }
    *(float *)(param_1 + 0x115) = fVar7;
    return;
  }
  *(float *)(param_1 + 0x115) = *(float *)((longlong)param_1 + 0x8a4);
  return;
}



// FUNCTION 140785750 FUN_140785750 body=248 status=ok
// SIG undefined FUN_140785750(void)

void FUN_140785750(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  
  cVar1 = FUN_14077cd10(param_1 + 0x860);
  bVar4 = cVar1 == '\0';
  cVar1 = FUN_14077cd10(param_1 + 0x870);
  bVar5 = cVar1 == '\0';
  if ((param_2 != 0) && ((bVar4 || (bVar5)))) {
    lVar2 = *(longlong *)(param_2 + 0x348);
    if (*(longlong *)(param_2 + 0x348) == 0) {
      lVar2 = param_2 + 8;
    }
    lVar3 = (longlong)*(int *)(param_2 + 0x350) * 0x68 + lVar2;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0x68) {
      if ((bVar4) && ((*(uint *)(lVar2 + 0x44) >> 3 & 1) != 0)) {
        bVar4 = false;
        *(undefined1 *)(param_1 + 0x860) = *(undefined1 *)(lVar2 + 0x30);
        *(undefined8 *)(param_1 + 0x868) = *(undefined8 *)(lVar2 + 0x38);
      }
      if ((bVar5) && ((*(uint *)(lVar2 + 0x44) >> 5 & 1) != 0)) {
        bVar5 = false;
        *(undefined1 *)(param_1 + 0x870) = *(undefined1 *)(lVar2 + 0x30);
        *(undefined8 *)(param_1 + 0x878) = *(undefined8 *)(lVar2 + 0x38);
      }
      if ((!bVar4) && (!bVar5)) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 140785850 FUN_140785850 body=132 status=ok
// SIG undefined FUN_140785850(void)

void FUN_140785850(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1[0x35] != 0) && (lVar3 = *(longlong *)(param_1[0x35] + 0x9c8), lVar3 != 0)) {
    lVar2 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1407858ad;
  }
  lVar3 = 0;
LAB_1407858ad:
  if (lVar3 != param_1[0x34]) {
    param_1[0x34] = lVar3;
    (**(code **)(*param_1 + 0x410))(param_1);
  }
  return;
}



// FUNCTION 1407858e0 FUN_1407858e0 body=999 status=ok
// SIG undefined FUN_1407858e0(void)

void FUN_1407858e0(longlong *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  float fVar14;
  float fVar15;
  undefined8 local_res8;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  undefined1 local_48 [48];
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x400))(param_1,&local_58);
  plVar12 = (longlong *)0x0;
  lVar8 = *plVar3;
  param_1[0x3e] = lVar8;
  plVar3 = (longlong *)plVar3[1];
  param_1[0x3f] = (longlong)plVar3;
  plVar4 = plVar3;
  if (lVar8 == 0) {
    plVar4 = plVar12;
  }
  if (plVar4 != (longlong *)0x0) {
    plVar4 = plVar12;
    plVar13 = plVar12;
    if ((param_1[0x42] == 0) ||
       (plVar10 = plVar12, (*(uint *)(param_1[0x42] + 0x840) >> 3 & 1) == 0)) {
      if (lVar8 == 0) {
        plVar3 = plVar12;
      }
      lVar8 = *plVar3;
      uVar2 = (**(code **)(*param_1 + 0x420))(param_1);
      puVar5 = (undefined8 *)(**(code **)(lVar8 + 0x10))(plVar3,local_48,uVar2);
      plVar10 = (longlong *)*puVar5;
      if (plVar10 != (longlong *)0x0) {
        plVar4 = plVar10;
        plVar13 = (longlong *)puVar5[1];
      }
    }
    plVar3 = (longlong *)param_1[0x40];
    plVar9 = plVar13;
    if (plVar4 == (longlong *)0x0) {
      plVar9 = plVar12;
    }
    plVar11 = plVar12;
    if (plVar3 != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[0x41];
    }
    if ((plVar9 != plVar11) || (plVar4 != plVar3)) {
      if ((plVar3 != (longlong *)0x0) && (param_1[0x41] != 0)) {
        *(undefined1 *)((longlong)param_1 + 0x1b3) = 0;
        *(undefined1 *)(param_1 + 0x3b) = 0;
        plVar3 = plVar12;
        if (param_1[0x3e] != 0) {
          plVar3 = (longlong *)param_1[0x3f];
        }
        lVar8 = *plVar3;
        uVar2 = (**(code **)(*param_1 + 0x420))(param_1);
        (**(code **)(lVar8 + 0x28))(plVar3,uVar2,0);
        plVar3 = plVar12;
        if (param_1[0x40] != 0) {
          plVar3 = (longlong *)param_1[0x41];
        }
        local_58 = (undefined4)param_1[0x3c];
        local_54 = *(undefined4 *)((longlong)param_1 + 0x1e4);
        local_50 = param_1[0x3d];
        (**(code **)(*plVar3 + 0x68))(plVar3,&local_58);
        FWeakObjectPtr::operator=(param_1 + 0x3c,0);
        local_res8 = 0;
        param_1[0x3d] = 0;
      }
      if ((plVar10 != (longlong *)0x0) && (plVar13 != (longlong *)0x0)) {
        plVar3 = (longlong *)FName::FName(&local_res8,L"OnWeaponUsed",1);
        FWeakObjectPtr::operator=(param_1 + 0x3c,param_1);
        local_50 = *plVar3;
        param_1[0x3d] = local_50;
        local_58 = (undefined4)param_1[0x3c];
        local_54 = *(undefined4 *)((longlong)param_1 + 0x1e4);
        (**(code **)(*plVar13 + 0x60))(plVar13,&local_58);
      }
      param_1[0x40] = (longlong)plVar10;
      param_1[0x41] = (longlong)plVar13;
      uVar2 = (**(code **)(*param_1 + 0x450))(param_1);
      *(undefined4 *)(param_1 + 0x110) = uVar2;
      if (param_1[0x3e] != 0) {
        plVar12 = (longlong *)param_1[0x3f];
      }
      uVar1 = (**(code **)(*plVar12 + 0x90))(plVar12);
      uVar7 = (ulonglong)_tls_index;
      *(undefined1 *)((longlong)param_1 + 0x855) = uVar1;
      lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8);
      if ((*(int *)(lVar8 + 0x38) < DAT_146859470) &&
         (_Init_thread_header(&DAT_146859470), DAT_146859470 == -1)) {
        FName::FName(&DAT_146859468,L"WeaponRangeMin",1);
        _Init_thread_footer(&DAT_146859470);
      }
      if ((*(int *)(lVar8 + 0x38) < DAT_146859480) &&
         (_Init_thread_header(&DAT_146859480), DAT_146859480 == -1)) {
        FName::FName(&DAT_146859478,L"WeaponRangeMax",1);
        _Init_thread_footer(&DAT_146859480);
      }
      if (((param_1[0x40] != 0) && (param_1[0x41] != 0)) && (lVar8 = param_1[0x44], lVar8 != 0)) {
        if (*(char *)((longlong)param_1 + 0x6a4) == '\0') {
          if (*(char *)((longlong)param_1 + 0x46c) == '\0') {
            pfVar6 = (float *)(**(code **)(*(longlong *)param_1[0x41] + 0x50))
                                        ((longlong *)param_1[0x41],&local_res8);
            lVar8 = param_1[0x44];
            fVar14 = *pfVar6;
            fVar15 = pfVar6[1];
          }
          else {
            fVar14 = *(float *)((longlong)param_1 + 0x464);
            fVar15 = *(float *)(param_1 + 0x8d);
          }
        }
        else {
          fVar14 = *(float *)((longlong)param_1 + 0x69c);
          fVar15 = *(float *)(param_1 + 0xd4);
        }
        UBlackboardComponent::SetValueAsFloat(lVar8,&DAT_146859468,fVar14 - fVar15);
        UBlackboardComponent::SetValueAsFloat(param_1[0x44],&DAT_146859478,fVar14 + fVar15);
      }
    }
  }
  return;
}



// FUNCTION 140785cd0 FUN_140785cd0 body=976 status=ok
// SIG undefined FUN_140785cd0(void)

void FUN_140785cd0(longlong *param_1)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  longlong local_res8;
  longlong local_res10;
  
  if ((((param_1[0x35] == 0) || (*(longlong *)(param_1[0x35] + 0x900) == 0)) || (param_1[0x3e] == 0)
      ) || (((param_1[0x3f] == 0 || (param_1[0x40] == 0)) ||
            ((param_1[0x41] == 0 || (param_1[0x44] == 0)))))) {
    uVar5 = 0x3f800000;
  }
  else if (*(char *)((longlong)param_1 + 0x47c) == '\0') {
    uVar5 = (undefined4)param_1[0x48];
  }
  else {
    uVar5 = (undefined4)param_1[0x8f];
  }
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  FUN_1407858e0();
  if (param_1[0x35] == 0) {
    return;
  }
  if (*(longlong *)(param_1[0x35] + 0x900) == 0) {
    return;
  }
  if (param_1[0x3e] == 0) {
    return;
  }
  if (param_1[0x3f] == 0) {
    return;
  }
  if (param_1[0x40] == 0) {
    return;
  }
  if (param_1[0x41] == 0) {
    return;
  }
  if (param_1[0x44] == 0) {
    return;
  }
  uVar1 = (**(code **)(*param_1 + 0x420))();
  if (param_1[0x3e] == 0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)param_1[0x3f];
  }
  cVar2 = (**(code **)(*plVar7 + 0x40))(plVar7,uVar1);
  if (cVar2 != '\0') {
    if (param_1[0x3e] == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)param_1[0x3f];
    }
    cVar2 = (**(code **)(*plVar7 + 0x48))(plVar7,uVar1);
    if (cVar2 == '\0') {
      if (param_1[0x3e] == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)param_1[0x3f];
      }
      (**(code **)(*plVar7 + 0x28))(plVar7,uVar1,0);
      if (param_1[0x3e] == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)param_1[0x3f];
      }
      (**(code **)(*plVar7 + 0x50))(plVar7,uVar1,0);
      (**(code **)(*param_1 + 0x430))(param_1);
    }
  }
  cVar2 = *(char *)((longlong)param_1 + 0x1b3);
  plVar7 = param_1 + 0x37;
  cVar4 = cVar2;
  if (cVar2 == '\0') {
    cVar3 = FUN_140776040(param_1,plVar7);
    if (cVar3 != '\0') {
      cVar4 = FUN_140784f10(param_1,plVar7);
      cVar4 = (cVar4 == '\0') + '\x01';
    }
  }
  else if (cVar2 == '\x01') {
    cVar3 = FUN_140785100(param_1,plVar7);
    if (cVar3 == '\0') {
      cVar3 = FUN_140784f10(param_1,plVar7);
      if (cVar3 == '\0') {
        cVar4 = '\x02';
      }
    }
    else {
      cVar4 = '\0';
    }
  }
  else if (cVar2 == '\x02') {
    cVar3 = FUN_140785100(param_1,plVar7);
    if (cVar3 == '\0') {
      cVar3 = FUN_140784f10(param_1,plVar7);
      if (cVar3 != '\0') {
        cVar4 = '\x01';
      }
    }
    else {
      cVar4 = '\0';
    }
  }
  *(char *)((longlong)param_1 + 0x1b3) = cVar4;
  if (cVar2 == '\x02') {
    if (cVar4 == '\x02') goto LAB_14078608d;
  }
  else if (cVar4 == '\x02') {
    *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
    uVar5 = (**(code **)(*param_1 + 0x438))(param_1);
    *(undefined4 *)(param_1 + 0x39) = uVar5;
    if (((param_1[0x35] == 0) || (*(longlong *)(param_1[0x35] + 0x900) == 0)) ||
       ((param_1[0x3e] == 0 ||
        ((((param_1[0x3f] == 0 || (param_1[0x40] == 0)) || (param_1[0x41] == 0)) ||
         (lVar6 = param_1[0x44], lVar6 == 0)))))) {
      uVar5 = 0;
    }
    else if ((char)param_1[0xd3] == '\0') {
      if ((char)param_1[0x8c] == '\0') {
        uVar5 = 0x7f7fffff;
      }
      else {
        local_res10 = lVar6;
        uVar5 = FUN_142de77e0(param_1 + 0x7c,param_1[0x23],0,&local_res10);
      }
    }
    else {
      local_res8 = lVar6;
      uVar5 = FUN_142de77e0(param_1 + 0xc3,param_1[0x23],0,&local_res8);
    }
    *(undefined4 *)((longlong)param_1 + 0x1d4) = uVar5;
    (**(code **)(*param_1 + 0x428))(param_1);
    FUN_140776290(param_1);
    return;
  }
  if ((0 < (int)param_1[0x39]) && ((int)param_1[0x39] <= *(int *)((longlong)param_1 + 0x1dc))) {
    lVar6 = param_1[0x24];
    *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
    if ((lVar6 == 0) && (lVar6 = FUN_1423407b0(param_1), lVar6 == 0)) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = *(float *)(lVar6 + 0x790);
    }
    fVar8 = (float)(**(code **)(*param_1 + 0x440))(param_1);
    *(float *)(param_1 + 0x3a) = fVar8 + fVar9;
  }
LAB_14078608d:
  FUN_140776290(param_1);
  return;
}



// FUNCTION 1407860d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ASoundManager::GetPrivateStaticClass(void)

{
  if (DAT_1468596c0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAction_Land",&DAT_1468596c0,FUN_140447710,0x570,0x10000000,0,
                  L"Engine",&LAB_1407883e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140787410,&LAB_140447700,0);
  }
  return DAT_1468596c0;
}



// FUNCTION 140786180 FUN_140786180 body=162 status=ok
// SIG undefined FUN_140786180(void)

longlong FUN_140786180(void)

{
  if (DAT_1468597d0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAction_Plan",&DAT_1468597d0,FUN_140447710,0x208,0x10000000,0,
                  L"Engine",&LAB_1407884f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140787410,&LAB_140447700,0);
  }
  return DAT_1468597d0;
}



// FUNCTION 140786250 FUN_140786250 body=53 status=ok
// SIG undefined FUN_140786250(void)

void FUN_140786250(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144097d98;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140786290 FUN_140786290 body=162 status=ok
// SIG undefined FUN_140786290(void)

longlong FUN_140786290(void)

{
  if (DAT_1468596a0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAction_GoToPoint",&DAT_1468596a0,FUN_140447710,4000,
                  0x10000000,0,L"Engine",&LAB_1407883d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140787410,&LAB_140447700,0);
  }
  return DAT_1468596a0;
}



// FUNCTION 140786350 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UBTTask_SetTagCooldown::StaticClass(void)

{
  if (DAT_1468596b0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"BTTask_AIAction_GoToPoint",&DAT_1468596b0,FUN_140447710,0x80,
                  0x10000000,0,L"Game",FUN_140788740,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407894b0,&LAB_140447700,0);
  }
  return DAT_1468596b0;
}



// FUNCTION 140786400 FUN_140786400 body=162 status=ok
// SIG undefined FUN_140786400(void)

longlong FUN_140786400(void)

{
  if (DAT_1468597e0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAction_PlayGbxAction",&DAT_1468597e0,FUN_140447710,0x380,
                  0x10000000,0,L"Engine",FUN_140788500,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USafeZone::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468597e0;
}



// FUNCTION 1407864b0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UBTTask_SetTagCooldown::StaticClass(void)

{
  if (DAT_1468597f0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"BTTask_AIAction_PlayGbxAction",&DAT_1468597f0,FUN_140447710,
                  0x80,0x10000000,0,L"Game",FUN_1407889c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407894b0,&LAB_140447700,0);
  }
  return DAT_1468597f0;
}



// FUNCTION 140786560 FUN_140786560 body=162 status=ok
// SIG undefined FUN_140786560(void)

longlong FUN_140786560(void)

{
  if (DAT_1468595f0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAction_ActionAtPoint",&DAT_1468595f0,FUN_140447710,0x1738,
                  0x10000000,0,L"Engine",&LAB_140788300,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140786290,&LAB_140447700,0);
  }
  return DAT_1468595f0;
}



// FUNCTION 140786620 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UBTTask_SetTagCooldown::StaticClass(void)

{
  if (DAT_146859600 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"BTTask_AIAction_ActionAtPoint",&DAT_146859600,FUN_140447710,
                  0x80,0x10000000,0,L"Game",FUN_140788640,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407894b0,&LAB_140447700,0);
  }
  return DAT_146859600;
}



// FUNCTION 1407866e0 FUN_1407866e0 body=47 status=ok
// SIG undefined FUN_1407866e0(void)

longlong FUN_1407866e0(void)

{
  if (DAT_1468595e8 == 0) {
    FUN_141786440(&DAT_1468595e8,&PTR_FUN_144092900);
  }
  return DAT_1468595e8;
}



// FUNCTION 140786710 FUN_140786710 body=47 status=ok
// SIG undefined FUN_140786710(void)

longlong FUN_140786710(void)

{
  if (DAT_146859698 == 0) {
    FUN_141786440(&DAT_146859698,&PTR_FUN_144095ff0);
  }
  return DAT_146859698;
}



// FUNCTION 140786740 FUN_140786740 body=47 status=ok
// SIG undefined FUN_140786740(void)

longlong FUN_140786740(void)

{
  if (DAT_146859848 == 0) {
    FUN_141786440(&DAT_146859848,&PTR_StaticClass_144093570);
  }
  return DAT_146859848;
}



// FUNCTION 140786780 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UParticleModuleTypeDataBeam2::GetPrivateStaticClass(void)

{
  if (DAT_146859810 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAction_RandomChild",&DAT_146859810,FUN_140447710,0x168,
                  0x10000000,0,L"Engine",&LAB_1407885d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USafeZone::GetPrivateStaticClass,GetPrivateStaticClass,0);
  }
  return DAT_146859810;
}



// FUNCTION 140786840 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UParticleModuleTypeDataBeam2::GetPrivateStaticClass(void)

{
  if (DAT_146859820 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAction_Random",&DAT_146859820,FUN_140447710,0x168,0x10000000,
                  0,L"Engine",FUN_140788590,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNodeEnveloper::StaticClass,&LAB_140447700,0);
  }
  return DAT_146859820;
}



// FUNCTION 140786900 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneIntegerSection::GetPrivateStaticClass(void)

{
  if (DAT_146859800 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAction_Priority",&DAT_146859800,FUN_140447710,0x170,
                  0x10000000,0,L"Engine",&LAB_140788580,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundNodeEnveloper::StaticClass,&LAB_140447700,0);
  }
  return DAT_146859800;
}



// FUNCTION 1407869c0 FUN_1407869c0 body=162 status=ok
// SIG undefined FUN_1407869c0(void)

longlong FUN_1407869c0(void)

{
  if (DAT_146859610 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAction_AITree",&DAT_146859610,FUN_140447710,0x170,0x10000001,
                  0,L"Engine",FUN_1407882c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMovieSceneIntegerSection::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146859610;
}



// FUNCTION 140786a70 FUN_140786a70 body=47 status=ok
// SIG undefined FUN_140786a70(void)

longlong FUN_140786a70(void)

{
  if (DAT_1468597f8 == 0) {
    FUN_141786440(&DAT_1468597f8,&PTR_GetPrivateStaticClass_1440927f0);
  }
  return DAT_1468597f8;
}



// FUNCTION 140786ac0 FUN_140786ac0 body=162 status=ok
// SIG undefined FUN_140786ac0(void)

longlong FUN_140786ac0(void)

{
  if (DAT_146859830 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAction_Route",&DAT_146859830,FUN_140447710,0x3c8,0x10000000,0
                  ,L"Engine",&LAB_1407885e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140787410,&LAB_140447700,0);
  }
  return DAT_146859830;
}



// FUNCTION 140786b70 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UBTTask_SetTagCooldown::StaticClass(void)

{
  if (DAT_146859840 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"BTTask_AIAction_Route",&DAT_146859840,FUN_140447710,0x80,
                  0x10000000,0,L"Game",FUN_140788a40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407894b0,&LAB_140447700,0);
  }
  return DAT_146859840;
}



// FUNCTION 140786c60 FUN_140786c60 body=162 status=ok
// SIG undefined FUN_140786c60(void)

longlong FUN_140786c60(void)

{
  if (DAT_146859878 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAction_SimpleCover",&DAT_146859878,FUN_140447710,0x11c0,
                  0x10000004,0,L"Game",&LAB_140788610,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14078c200,&LAB_140447700,0);
  }
  return DAT_146859878;
}



// FUNCTION 140786d20 FUN_140786d20 body=47 status=ok
// SIG undefined FUN_140786d20(void)

longlong FUN_140786d20(void)

{
  if (DAT_1468595d0 == 0) {
    FUN_141786440(&DAT_1468595d0,&PTR_GetPrivateStaticClass_144093b60);
  }
  return DAT_1468595d0;
}



// FUNCTION 140786d50 FUN_140786d50 body=47 status=ok
// SIG undefined FUN_140786d50(void)

longlong FUN_140786d50(void)

{
  if (DAT_1468595c8 == 0) {
    FUN_141786a30(&DAT_1468595c8,&PTR_FUN_14622e9d0);
  }
  return DAT_1468595c8;
}



// FUNCTION 140786d80 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneVectorSection::GetPrivateStaticClass(void)

{
  if (DAT_1468596d0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAction_LeadRoute",&DAT_1468596d0,FUN_140447710,0x368,
                  0x10000000,0,L"Engine",&LAB_1407883f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMovieSceneIntegerSection::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468596d0;
}



// FUNCTION 140786e30 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UBTTask_SetTagCooldown::StaticClass(void)

{
  if (DAT_1468596e0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"BTTask_AIAction_LeadRoute",&DAT_1468596e0,FUN_140447710,0x80,
                  0x10000000,0,L"Game",FUN_1407887c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407894b0,&LAB_140447700,0);
  }
  return DAT_1468596e0;
}



// FUNCTION 140786ef0 FUN_140786ef0 body=162 status=ok
// SIG undefined FUN_140786ef0(void)

longlong FUN_140786ef0(void)

{
  if (DAT_146859888 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAction_SimpleHide",&DAT_146859888,FUN_140447710,0x19f8,
                  0x10000004,0,L"Game",&LAB_140788620,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14078c2b0,&LAB_140447700,0);
  }
  return DAT_146859888;
}



// FUNCTION 140786fa0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USafeZone::GetPrivateStaticClass(void)

{
  if (DAT_146859648 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAction_CompositeChild",&DAT_146859648,
                  StaticRegisterNativesUSafeZone,0x158,0x10000000,0,L"Engine",&LAB_140788330,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,USoundNodeEnveloper::StaticClass,0);
  }
  return DAT_146859648;
}



// FUNCTION 140787050 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong USoundNodeEnveloper::StaticClass(void)

{
  if (DAT_146859660 == 0) {
    FUN_14171ccd0(L"/Script/GbxAI",L"AIAction_Composite",&DAT_146859660,FUN_1407894f0,0x160,
                  0x10000000,0,L"Engine",&LAB_140788320,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USafeZone::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146859660;
}


