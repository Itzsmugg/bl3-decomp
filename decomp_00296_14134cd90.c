// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14134cd90 FUN_14134cd90 body=47 status=ok
// SIG undefined FUN_14134cd90(void)

longlong FUN_14134cd90(void)

{
  if (DAT_146883028 == 0) {
    FUN_141786a30(&DAT_146883028,&PTR_FUN_1463184e0);
  }
  return DAT_146883028;
}



// FUNCTION 14134cdc0 FUN_14134cdc0 body=47 status=ok
// SIG undefined FUN_14134cdc0(void)

longlong FUN_14134cdc0(void)

{
  if (DAT_146883030 == 0) {
    FUN_141786a30(&DAT_146883030,&PTR_FUN_1463185a0);
  }
  return DAT_146883030;
}



// FUNCTION 14134cdf0 FUN_14134cdf0 body=47 status=ok
// SIG undefined FUN_14134cdf0(void)

longlong FUN_14134cdf0(void)

{
  if (DAT_146883038 == 0) {
    FUN_141786a30(&DAT_146883038,&PTR_FUN_146318660);
  }
  return DAT_146883038;
}



// FUNCTION 14134ce20 FUN_14134ce20 body=47 status=ok
// SIG undefined FUN_14134ce20(void)

longlong FUN_14134ce20(void)

{
  if (DAT_146883040 == 0) {
    FUN_141786a30(&DAT_146883040,&PTR_FUN_146318720);
  }
  return DAT_146883040;
}



// FUNCTION 14134ce50 FUN_14134ce50 body=47 status=ok
// SIG undefined FUN_14134ce50(void)

longlong FUN_14134ce50(void)

{
  if (DAT_146883048 == 0) {
    FUN_141786a30(&DAT_146883048,&PTR_FUN_1463187e0);
  }
  return DAT_146883048;
}



// FUNCTION 14134ce80 FUN_14134ce80 body=47 status=ok
// SIG undefined FUN_14134ce80(void)

longlong FUN_14134ce80(void)

{
  if (DAT_146883050 == 0) {
    FUN_141786a30(&DAT_146883050,&PTR_FUN_1463188a0);
  }
  return DAT_146883050;
}



// FUNCTION 14134ceb0 FUN_14134ceb0 body=47 status=ok
// SIG undefined FUN_14134ceb0(void)

longlong FUN_14134ceb0(void)

{
  if (DAT_146883058 == 0) {
    FUN_141786a30(&DAT_146883058,&PTR_FUN_1463188e0);
  }
  return DAT_146883058;
}



// FUNCTION 14134cee0 FUN_14134cee0 body=209 status=ok
// SIG undefined FUN_14134cee0(void)

void FUN_14134cee0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_14489b2d0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    *(undefined4 *)(puVar1 + 0x3c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1e4) = 0x3f800000;
    puVar1[0x3d] = 0x43fa0000;
    *(undefined4 *)(puVar1 + 0x3e) = 0xffffffff;
    *(undefined8 *)((longlong)puVar1 + 500) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1fc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x204) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x20c) = 0;
  }
  return;
}



// FUNCTION 14134cfc0 FUN_14134cfc0 body=170 status=ok
// SIG undefined FUN_14134cfc0(void)

void FUN_14134cfc0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140f5a170(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0xc6) = 0x42c80000;
    *puVar1 = &PTR_FUN_14489b578;
    puVar1[199] = 0;
    puVar1[200] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 199,0);
    FGenericPlatformString::Memcpy(puVar1[199],L"GrenadeIndicator",0x22);
    *(undefined4 *)(puVar1 + 0xc9) = 5;
    puVar1[0xca] = 0;
    puVar1[0xcb] = 0;
    puVar1[0xcc] = 0;
    puVar1[0xcd] = 0;
  }
  return;
}



// FUNCTION 14134d0b0 FUN_14134d0b0 body=195 status=ok
// SIG undefined FUN_14134d0b0(void)

void FUN_14134d0b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x5b) = 0xffffffff;
    puVar1[0x59] = 0;
    puVar1[0x5a] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x2f4) = 0;
    puVar1[0x5f] = 0;
    *(undefined4 *)(puVar1 + 0x60) = 0;
    *puVar1 = &PTR_FUN_14489c340;
    puVar1[0x2e] = &PTR_LAB_14489c670;
    puVar1[0x61] = 0;
    puVar1[0x62] = 0;
    puVar1[99] = 0;
    puVar1[100] = 0;
    puVar1[0x65] = 0;
    puVar1[0x66] = 0;
    puVar1[0x67] = 0;
    puVar1[0x68] = 0;
    puVar1[0x69] = 0;
    puVar1[0x6a] = 0;
    *(undefined2 *)(puVar1 + 0x6b) = 0;
    puVar1[0x6c] = 0;
    puVar1[0x6d] = 0;
  }
  return;
}



// FUNCTION 14134d180 FUN_14134d180 body=141 status=ok
// SIG undefined FUN_14134d180(void)

void FUN_14134d180(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x5b) = 0xffffffff;
    puVar1[0x59] = 0;
    puVar1[0x5a] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x2f4) = 0;
    puVar1[0x5f] = 0;
    *(undefined4 *)(puVar1 + 0x60) = 0;
    *puVar1 = &PTR_FUN_14489c6c0;
    puVar1[0x2e] = &PTR_LAB_14489c9f0;
    puVar1[0x62] = 0;
    puVar1[99] = 0;
    puVar1[100] = 0;
    puVar1[0x65] = 0;
    *(undefined4 *)(puVar1 + 0x61) = 0;
    puVar1[0x66] = 0;
  }
  return;
}



// FUNCTION 14134d210 FUN_14134d210 body=147 status=ok
// SIG undefined FUN_14134d210(void)

void FUN_14134d210(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x5b) = 0xffffffff;
    puVar1[0x59] = 0;
    puVar1[0x5a] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x2f4) = 0;
    puVar1[0x5f] = 0;
    *(undefined4 *)(puVar1 + 0x60) = 0;
    *puVar1 = &PTR_FUN_14489ca40;
    puVar1[0x2e] = &PTR_LAB_14489cd70;
    puVar1[0x62] = 0;
    puVar1[99] = 0;
    puVar1[0x65] = 0;
    *(undefined4 *)(puVar1 + 0x61) = 0;
    puVar1[0x66] = 0;
    *(undefined4 *)(puVar1 + 100) = 0;
    puVar1[0x67] = 0;
  }
  return;
}



// FUNCTION 14134d2b0 FUN_14134d2b0 body=142 status=ok
// SIG undefined FUN_14134d2b0(void)

void FUN_14134d2b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1410229d0(puVar1,param_1);
    *puVar1 = &PTR_FUN_14489d680;
    puVar1[0x9b] = &PTR_LAB_14489dc48;
    puVar1[0xd5] = &PTR_LAB_14489ddc8;
    puVar1[0x1e2] = 0;
    puVar1[0x1e3] = 0;
    puVar1[0x1e4] = 0;
    puVar1[0x1e5] = 0;
    puVar1[0x1e6] = 0;
    puVar1[0x1e7] = 0;
    FText::FText(puVar1 + 0x1e8);
    FText::FText(puVar1 + 0x1eb);
    return;
  }
  return;
}



// FUNCTION 14134d340 FUN_14134d340 body=359 status=ok
// SIG undefined FUN_14134d340(void)

void FUN_14134d340(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140e9aa30(puVar1,param_1);
    *puVar1 = &PTR_FUN_14489ddf0;
    puVar1[0x9b] = &PTR_LAB_14489e358;
    FText::FText(puVar1 + 0xd1);
    FText::FText(puVar1 + 0xd4);
    FText::FText(puVar1 + 0xd7);
    FText::FText(puVar1 + 0xda);
    FText::FText(puVar1 + 0xdd);
    FText::FText(puVar1 + 0xe0);
    *(undefined4 *)(puVar1 + 0xe3) = 0x42480000;
    *(undefined4 *)((longlong)puVar1 + 0x71c) = 0x43c80000;
    *(undefined4 *)(puVar1 + 0xe4) = 0x40800000;
    FText::FText(puVar1 + 0xe5);
    FText::FText(puVar1 + 0xe8);
    *(undefined4 *)(puVar1 + 0xeb) = 0x3f800000;
    *(undefined4 *)((longlong)puVar1 + 0x75c) = 0x42480000;
    FText::FText(puVar1 + 0xec);
    FText::FText(puVar1 + 0xef);
    puVar1[0xf2] = 0x3f800000;
    FText::FText(puVar1 + 0xf3);
    FText::FText(puVar1 + 0xf6);
    FText::FText(puVar1 + 0xf9);
    FText::FText(puVar1 + 0xfc);
    FText::FText(puVar1 + 0xff);
    FText::FText(puVar1 + 0x102);
    *(undefined1 *)(puVar1 + 0x10a) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x854) = 0x43c80000;
    *(undefined4 *)(puVar1 + 0x10b) = 0x40800000;
    *(undefined8 *)((longlong)puVar1 + 0x85c) = 0x42480000;
    *(undefined2 *)((longlong)puVar1 + 0x867) = 0;
  }
  return;
}



// FUNCTION 14134d4b0 FUN_14134d4b0 body=239 status=ok
// SIG undefined FUN_14134d4b0(void)

void FUN_14134d4b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140e9aa30(puVar1,param_1);
    *puVar1 = &PTR_FUN_14489ed10;
    puVar1[0x9b] = &PTR_LAB_14489f278;
    FText::FText(puVar1 + 0xd0);
    puVar1[0xd3] = 0;
    puVar1[0xd4] = 0;
    puVar1[0xd5] = 0;
    puVar1[0xd6] = 0;
    puVar1[0xd7] = 0;
    puVar1[0xd8] = 0;
    puVar1[0xd9] = 0;
    puVar1[0xda] = 0;
    puVar1[0xdb] = 0;
    puVar1[0xdc] = 0;
    puVar1[0xdd] = 0;
    puVar1[0xde] = 0;
    puVar1[0xdf] = 0;
    puVar1[0xe0] = 0;
    puVar1[0xe1] = 0;
    puVar1[0xe2] = 0;
    puVar1[0xe3] = 0;
    puVar1[0xe4] = 0;
    puVar1[0xe5] = 0;
    puVar1[0xe6] = 0;
    puVar1[0xe7] = 0;
    *(undefined1 *)(puVar1 + 0xe8) = 0;
    puVar1[0xe9] = 0;
    *(undefined4 *)(puVar1 + 0xea) = 0;
  }
  return;
}



// FUNCTION 14134d5a0 FUN_14134d5a0 body=323 status=ok
// SIG undefined FUN_14134d5a0(void)

void FUN_14134d5a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140f5a170(puVar1,param_1);
    *puVar1 = &PTR_FUN_14489e610;
    puVar1[0xc6] = 0;
    puVar1[199] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 0xc6,0);
    FGenericPlatformString::Memcpy(puVar1[0xc6],L"healthBar",0x14);
    FName::FName(puVar1 + 200,L"Health_Low_Stop",1);
    FName::FName(puVar1 + 0xc9,L"Health_Low_Very_Stop",1);
    FName::FName(puVar1 + 0xca,L"Health_Low_Start",1);
    FName::FName(puVar1 + 0xcb,L"Health_Low_Very_Start",1);
    puVar1[0xcc] = 0;
    puVar1[0xcd] = 0;
    puVar1[0xce] = 0;
    puVar1[0xcf] = 0;
    puVar1[0xd0] = 0;
    puVar1[0xd1] = 0;
    puVar1[0xd2] = 0;
    puVar1[0xd4] = 0;
    puVar1[0xd5] = 0;
    puVar1[0xd6] = 0;
    puVar1[0xd7] = 0;
    *(undefined4 *)(puVar1 + 0xd3) = 0;
    puVar1[0xd8] = 0xffffffffbf800000;
    *(undefined4 *)(puVar1 + 0xd9) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x6cc) = 3;
  }
  return;
}



// FUNCTION 14134d6f0 FUN_14134d6f0 body=159 status=ok
// SIG undefined FUN_14134d6f0(void)

void FUN_14134d6f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140f5a170(puVar1,param_1);
    *puVar1 = &PTR_FUN_14489f4a0;
    puVar1[0xc6] = 0;
    puVar1[199] = 0;
    puVar1[200] = 0;
    puVar1[0xc9] = 0;
    puVar1[0xca] = 0;
    puVar1[0xcb] = 0;
    puVar1[0xcd] = 0;
    puVar1[0xce] = 0;
    FUN_142de2fd0(puVar1 + 0xcf);
    InitializeSRWLock((PSRWLOCK)(puVar1 + 0xd7));
    puVar1[0xd8] = 0;
    *(undefined2 *)(puVar1 + 0xd9) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x6ca) = 0;
  }
  return;
}



// FUNCTION 14134d790 FUN_14134d790 body=1177 status=ok
// SIG undefined FUN_14134d790(void)

undefined8 * FUN_14134d790(undefined8 *param_1)

{
  FUN_140f5a170();
  *param_1 = &PTR_FUN_14489bbb8;
  param_1[0xc6] = 0;
  *(undefined4 *)(param_1 + 199) = 0;
  *(undefined1 *)((longlong)param_1 + 0x63c) = 0;
  *(undefined1 *)(param_1 + 200) = 0xff;
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xcb,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0xcb],0xe,"grenadeWidget",0xe,0x3f);
  param_1[0xcd] = 0;
  param_1[0xce] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xcd,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0xcd],0xc,"grenadeText",0xc,0x3f);
  param_1[0xcf] = 0;
  param_1[0xd0] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xcf,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0xcf],0x15,"grenadeTextContainer",0x15,0x3f)
  ;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xd1,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (param_1[0xd1],0x18,"grenadeInitializationMC",0x18,0x3f);
  param_1[0xd3] = 0;
  param_1[0xd4] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xd3,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0xd3],0x10,"swapIconToReady",0x10,0x3f);
  param_1[0xd5] = 0;
  param_1[0xd6] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xd5,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0xd5],0x10,"swapIconToEmpty",0x10,0x3f);
  param_1[0xd7] = 0;
  param_1[0xd8] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xd7,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0xd7],0x11,"failedToActivate",0x11,0x3f);
  param_1[0xd9] = 0;
  param_1[0xda] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xd9,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0xd9],0xd,"emptyToReady",0xd,0x3f);
  param_1[0xdb] = 0;
  param_1[0xdc] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xdb,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0xdb],0xd,"readyToEmpty",0xd,0x3f);
  param_1[0xdd] = 0;
  param_1[0xde] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xdd,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0xdd],0xd,"valueChanged",0xd,0x3f);
  param_1[0xdf] = 0;
  param_1[0xe0] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xdf,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0xdf],0xd,"withGrenades",0xd,0x3f);
  param_1[0xe1] = 0;
  param_1[0xe2] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xe1,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0xe1],0x10,"withoutGrenades",0x10,0x3f);
  param_1[0xe3] = 0;
  param_1[0xe4] = 0x1f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xe3,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (param_1[0xe3],0x1f,"failedToActivateNoGrenadesLeft",0x1f,0x3f);
  param_1[0xe5] = 0;
  param_1[0xe6] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xe5,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0xe5],0x12,"setIconToDisabled",0x12,0x3f);
  param_1[0xe7] = 0;
  param_1[0xe8] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xe7,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0xe7],0xd,"valueChanged",0xd,0x3f);
  param_1[0xe9] = 0;
  param_1[0xea] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xe9,0);
  FGenericPlatformString::Convert<char,wchar_t>(param_1[0xe9],0xf,"initialization",0xf,0x3f);
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  *(undefined1 *)(param_1 + 0xee) = 0;
  return param_1;
}



// FUNCTION 14134dc30 FUN_14134dc30 body=1576 status=ok
// SIG undefined FUN_14134dc30(void)

undefined8 * FUN_14134dc30(undefined8 *param_1)

{
  FUN_140e9aa30();
  *param_1 = &PTR_FUN_144646880;
  param_1[0x9b] = &PTR_LAB_144646df0;
  FWeakObjectPtr::operator=(param_1 + 0xd0,0);
  *(undefined4 *)(param_1 + 0xd1) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x69c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd2) = 0x10000;
  *(undefined2 *)((longlong)param_1 + 0x694) = 0;
  param_1[0xd4] = 0;
  *param_1 = &PTR_FUN_14489cdc0;
  param_1[0x9b] = &PTR_LAB_14489d368;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  param_1[0xf5] = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  param_1[0xf7] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xde) = 0;
  param_1[0xfa] = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0;
  param_1[0xfb] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  param_1[0xfd] = 0;
  *(undefined4 *)(param_1 + 0xe7) = 0;
  param_1[0xfe] = 0;
  *(undefined4 *)(param_1 + 0xea) = 0;
  param_1[0x100] = 0;
  *(undefined4 *)(param_1 + 0xed) = 0;
  param_1[0x101] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0xf3) = 0;
  param_1[0x104] = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0;
  param_1[0x106] = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  param_1[0x109] = 0;
  *(undefined4 *)(param_1 + 0xff) = 0;
  param_1[0x10a] = 0;
  *(undefined4 *)(param_1 + 0x102) = 0;
  param_1[0x10c] = 0;
  *(undefined4 *)(param_1 + 0x105) = 0;
  param_1[0x10d] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  param_1[0x10f] = 0;
  *(undefined4 *)(param_1 + 0x10b) = 0;
  param_1[0x110] = 0;
  *(undefined4 *)(param_1 + 0x10e) = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  *(undefined4 *)(param_1 + 0x111) = 0;
  param_1[0x13f] = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  param_1[0x140] = 0;
  *(undefined4 *)(param_1 + 0x117) = 0;
  param_1[0x142] = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  param_1[0x143] = 0;
  *(undefined4 *)(param_1 + 0x11d) = 0;
  param_1[0x145] = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  param_1[0x146] = 0;
  *(undefined4 *)(param_1 + 0x123) = 0;
  param_1[0x148] = 0;
  *(undefined4 *)(param_1 + 0x126) = 0;
  param_1[0x149] = 0;
  *(undefined4 *)(param_1 + 0x129) = 0;
  param_1[0x14b] = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  param_1[0x14c] = 0;
  *(undefined4 *)(param_1 + 0x12f) = 0;
  param_1[0x14e] = 0;
  *(undefined4 *)(param_1 + 0x132) = 0;
  param_1[0x14f] = 0;
  *(undefined4 *)(param_1 + 0x135) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13b) = 0;
  *(undefined4 *)(param_1 + 0x13e) = 0;
  *(undefined4 *)(param_1 + 0x141) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x147) = 0;
  *(undefined4 *)(param_1 + 0x14a) = 0;
  *(undefined4 *)(param_1 + 0x14d) = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  FText::FText(param_1 + 0x173);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x176,L"Accept",L"UGFxGuardianRankMenu",L"HintAcceptStatAllocation");
  FText::FText(param_1 + 0x179);
  FText::FText(param_1 + 0x17c);
  FText::FText(param_1 + 0x17f);
  FText::FText(param_1 + 0x182);
  FText::FText(param_1 + 0x185);
  FText::FText(param_1 + 0x188);
  FText::FText(param_1 + 0x18b);
  FText::FText(param_1 + 0x18e);
  FText::FText(param_1 + 0x191);
  FText::FText(param_1 + 0x194);
  FText::FText(param_1 + 0x197);
  FText::FText(param_1 + 0x19a);
  FText::FText(param_1 + 0x19d);
  FText::FText(param_1 + 0x1a0);
  FText::FText(param_1 + 0x1a3);
  FText::FText(param_1 + 0x1a6);
  FText::FText(param_1 + 0x1a9);
  FText::FText(param_1 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1b5) = 6;
  *(undefined4 *)((longlong)param_1 + 0xdac) = 3;
  *(undefined4 *)(param_1 + 0x1b6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdb4) = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b8] = 0;
  *(undefined1 *)(param_1 + 0x1b9) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdcc) = 0xffffffff;
  param_1[0x1ba] = 0;
  *(undefined4 *)(param_1 + 0x1bb) = 0;
  *(undefined4 *)((longlong)param_1 + 0xddc) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xde4) = 0;
  *(undefined4 *)(param_1 + 0x1bd) = 0;
  return param_1;
}



// FUNCTION 14134e260 FUN_14134e260 body=358 status=ok
// SIG undefined FUN_14134e260(void)

void FUN_14134e260(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1d8);
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
  plVar3 = *(longlong **)(param_1 + 0x1c8);
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
  plVar3 = *(longlong **)(param_1 + 0x1b8);
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
  plVar3 = *(longlong **)(param_1 + 0x1a8);
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
  plVar3 = *(longlong **)(param_1 + 0x198);
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
  plVar3 = *(longlong **)(param_1 + 0x188);
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
  plVar3 = *(longlong **)(param_1 + 0x178);
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
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14134e3d0 FUN_14134e3d0 body=3346 status=ok
// SIG undefined FUN_14134e3d0(void)

void FUN_14134e3d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xdb8) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0xd68);
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
  plVar4 = *(longlong **)(param_1 + 0xd50);
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
  plVar4 = *(longlong **)(param_1 + 0xd38);
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
  plVar4 = *(longlong **)(param_1 + 0xd20);
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
  plVar4 = *(longlong **)(param_1 + 0xd08);
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
  plVar4 = *(longlong **)(param_1 + 0xcf0);
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
  plVar4 = *(longlong **)(param_1 + 0xcd8);
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
  plVar4 = *(longlong **)(param_1 + 0xcc0);
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
  plVar4 = *(longlong **)(param_1 + 0xca8);
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
  plVar4 = *(longlong **)(param_1 + 0xc90);
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
  plVar4 = *(longlong **)(param_1 + 0xc78);
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
  plVar4 = *(longlong **)(param_1 + 0xc60);
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
  plVar4 = *(longlong **)(param_1 + 0xc48);
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
  plVar4 = *(longlong **)(param_1 + 0xc30);
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
  plVar4 = *(longlong **)(param_1 + 0xc18);
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
  plVar4 = *(longlong **)(param_1 + 0xc00);
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
  plVar4 = *(longlong **)(param_1 + 0xbe8);
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
  plVar4 = *(longlong **)(param_1 + 0xbd0);
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
  plVar4 = *(longlong **)(param_1 + 3000);
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
  plVar4 = *(longlong **)(param_1 + 0xba0);
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
  plVar4 = *(longlong **)(param_1 + 0xb88);
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
  plVar4 = *(longlong **)(param_1 + 0xb78);
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
  plVar4 = *(longlong **)(param_1 + 0xb68);
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
  plVar4 = *(longlong **)(param_1 + 0xb58);
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
  plVar4 = *(longlong **)(param_1 + 0xb48);
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
  plVar4 = *(longlong **)(param_1 + 0xb10);
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
  plVar4 = *(longlong **)(param_1 + 0xb00);
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
  plVar4 = *(longlong **)(param_1 + 0xaf0);
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
  plVar4 = *(longlong **)(param_1 + 0xaa8);
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
  plVar4 = *(longlong **)(param_1 + 0xa98);
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
  plVar4 = *(longlong **)(param_1 + 0xa78);
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
  plVar4 = *(longlong **)(param_1 + 0xa60);
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
  plVar4 = *(longlong **)(param_1 + 0xa48);
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
  plVar4 = *(longlong **)(param_1 + 0xa30);
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
  plVar4 = *(longlong **)(param_1 + 0xa18);
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
  plVar4 = *(longlong **)(param_1 + 0xa00);
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
  plVar4 = *(longlong **)(param_1 + 0x9e8);
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
  plVar4 = *(longlong **)(param_1 + 0x9d0);
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
  plVar4 = *(longlong **)(param_1 + 0x9b8);
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
  plVar4 = *(longlong **)(param_1 + 0x9a0);
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
  plVar4 = *(longlong **)(param_1 + 0x988);
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
  plVar4 = *(longlong **)(param_1 + 0x970);
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
  plVar4 = *(longlong **)(param_1 + 0x958);
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
  plVar4 = *(longlong **)(param_1 + 0x940);
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
  plVar4 = *(longlong **)(param_1 + 0x928);
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
  plVar4 = *(longlong **)(param_1 + 0x910);
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
  plVar4 = *(longlong **)(param_1 + 0x8f8);
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
  plVar4 = *(longlong **)(param_1 + 0x8e0);
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
  plVar4 = *(longlong **)(param_1 + 0x8c8);
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
  plVar4 = *(longlong **)(param_1 + 0x8b0);
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
  plVar4 = *(longlong **)(param_1 + 0x898);
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
  plVar4 = *(longlong **)(param_1 + 0x880);
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
  plVar4 = *(longlong **)(param_1 + 0x868);
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
  plVar4 = *(longlong **)(param_1 + 0x850);
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
  plVar4 = *(longlong **)(param_1 + 0x838);
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
  plVar4 = *(longlong **)(param_1 + 0x820);
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
  plVar4 = *(longlong **)(param_1 + 0x808);
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
  plVar4 = *(longlong **)(param_1 + 0x7f0);
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
  plVar4 = *(longlong **)(param_1 + 0x7d8);
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
  plVar4 = *(longlong **)(param_1 + 0x7c0);
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
  plVar4 = *(longlong **)(param_1 + 0x7a8);
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
  plVar4 = *(longlong **)(param_1 + 0x790);
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
  plVar4 = *(longlong **)(param_1 + 0x778);
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
  plVar4 = *(longlong **)(param_1 + 0x760);
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
  plVar4 = *(longlong **)(param_1 + 0x748);
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
  plVar4 = *(longlong **)(param_1 + 0x730);
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
  plVar4 = *(longlong **)(param_1 + 0x718);
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
  plVar4 = *(longlong **)(param_1 + 0x700);
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
  plVar4 = *(longlong **)(param_1 + 0x6e8);
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
  plVar4 = *(longlong **)(param_1 + 0x6d0);
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
  plVar4 = *(longlong **)(param_1 + 0x6b8);
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
  FUN_140e9c5f0(param_1);
  return;
}



// FUNCTION 14134f0f0 FUN_14134f0f0 body=967 status=ok
// SIG undefined FUN_14134f0f0(void)

void FUN_14134f0f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x818);
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
  plVar4 = *(longlong **)(param_1 + 0x800);
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
  plVar4 = *(longlong **)(param_1 + 0x7e8);
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
  plVar4 = *(longlong **)(param_1 + 2000);
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
  plVar4 = *(longlong **)(param_1 + 0x7b8);
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
  plVar4 = *(longlong **)(param_1 + 0x7a0);
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
  plVar4 = *(longlong **)(param_1 + 0x780);
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
  plVar4 = *(longlong **)(param_1 + 0x768);
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
  plVar4 = *(longlong **)(param_1 + 0x748);
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
  plVar4 = *(longlong **)(param_1 + 0x730);
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
  plVar4 = *(longlong **)(param_1 + 0x708);
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
  plVar4 = *(longlong **)(param_1 + 0x6f0);
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
  plVar4 = *(longlong **)(param_1 + 0x6d8);
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
  plVar4 = *(longlong **)(param_1 + 0x6c0);
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
  plVar4 = *(longlong **)(param_1 + 0x6a8);
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
  plVar4 = *(longlong **)(param_1 + 0x690);
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
  FUN_140e9c5f0(param_1);
  return;
}



// FUNCTION 14134f520 FUN_14134f520 body=52 status=ok
// SIG undefined FUN_14134f520(void)

undefined8 FUN_14134f520(undefined8 param_1,ulonglong param_2)

{
  FUN_14134e260();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 14134f560 FUN_14134f560 body=107 status=ok
// SIG undefined FUN_14134f560(void)

longlong FUN_14134f560(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x660) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x650) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x638) != 0) {
    FMemory::Free();
  }
  FUN_140f5a560(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x670);
  }
  return param_1;
}



// FUNCTION 14134f5d0 FUN_14134f5d0 body=328 status=ok
// SIG undefined FUN_14134f5d0(void)

longlong FUN_14134f5d0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x748) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x738) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x728) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x718) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x708) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x698) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x688) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x678) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x668) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x658) != 0) {
    FMemory::Free();
  }
  FUN_140f5a560(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x780);
  }
  return param_1;
}



// FUNCTION 14134f720 FUN_14134f720 body=52 status=ok
// SIG undefined FUN_14134f720(void)

undefined8 FUN_14134f720(undefined8 param_1,ulonglong param_2)

{
  FUN_14134e3d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xdf0);
  }
  return param_1;
}



// FUNCTION 14134f760 FUN_14134f760 body=253 status=ok
// SIG undefined FUN_14134f760(void)

longlong FUN_14134f760(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x360) != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x340);
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
  plVar3 = *(longlong **)(param_1 + 0x330);
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
  plVar3 = *(longlong **)(param_1 + 800);
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
  plVar3 = *(longlong **)(param_1 + 0x310);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x370);
  }
  return param_1;
}



// FUNCTION 14134f860 FUN_14134f860 body=156 status=ok
// SIG undefined FUN_14134f860(void)

longlong FUN_14134f860(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x328);
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
  plVar3 = *(longlong **)(param_1 + 0x318);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x340);
  }
  return param_1;
}



// FUNCTION 14134f900 FUN_14134f900 body=156 status=ok
// SIG undefined FUN_14134f900(void)

longlong FUN_14134f900(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x330);
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
  plVar3 = *(longlong **)(param_1 + 0x318);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f8);
  FUN_141320cb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x340);
  }
  return param_1;
}



// FUNCTION 14134f9a0 FUN_14134f9a0 body=190 status=ok
// SIG undefined FUN_14134f9a0(void)

longlong FUN_14134f9a0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0xf60);
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
  plVar4 = *(longlong **)(param_1 + 0xf48);
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
  FUN_1410238b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf70);
  }
  return param_1;
}



// FUNCTION 14134fa60 FUN_14134fa60 body=52 status=ok
// SIG undefined FUN_14134fa60(void)

undefined8 FUN_14134fa60(undefined8 param_1,ulonglong param_2)

{
  FUN_14134f0f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x870);
  }
  return param_1;
}



// FUNCTION 14134faa0 FUN_14134faa0 body=300 status=ok
// SIG undefined FUN_14134faa0(void)

longlong FUN_14134faa0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x748);
  if (*(longlong *)(param_1 + 0x730) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x708) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x698) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x688);
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
  FUN_140e9c5f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x760);
  }
  return param_1;
}



// FUNCTION 14134fbd0 FUN_14134fbd0 body=305 status=ok
// SIG undefined FUN_14134fbd0(void)

longlong FUN_14134fbd0(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x6a8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x690);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x680);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x670);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x630) != 0) {
    FMemory::Free();
  }
  FUN_140f5a560(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6d0);
  }
  return param_1;
}



// FUNCTION 14134fd10 FUN_14134fd10 body=135 status=ok
// SIG undefined FUN_14134fd10(void)

longlong FUN_14134fd10(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x688);
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
  FUN_140f5a560(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6d0);
  }
  return param_1;
}



// FUNCTION 14134fda0 FUN_14134fda0 body=55 status=ok
// SIG undefined FUN_14134fda0(void)

void FUN_14134fda0(void)

{
  undefined8 uVar1;
  
  if (DAT_146882928 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146882928 = GetStaticEnum(FUN_1413501e0,uVar1,L"ECalibrationOptionSourceType");
  }
  return;
}



// FUNCTION 14134fde0 FUN_14134fde0 body=55 status=ok
// SIG undefined FUN_14134fde0(void)

void FUN_14134fde0(void)

{
  undefined8 uVar1;
  
  if (DAT_146882920 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146882920 = GetStaticEnum(FUN_141350210,uVar1,L"EGFxGrenadeIndicatorMode");
  }
  return;
}



// FUNCTION 14134fe20 FUN_14134fe20 body=55 status=ok
// SIG undefined FUN_14134fe20(void)

void FUN_14134fe20(void)

{
  undefined8 uVar1;
  
  if (DAT_146882918 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146882918 = GetStaticEnum(FUN_141350240,uVar1,L"EGFxGuardianRankMenuState");
  }
  return;
}



// FUNCTION 14134fe60 FUN_14134fe60 body=55 status=ok
// SIG undefined FUN_14134fe60(void)

void FUN_14134fe60(void)

{
  undefined8 uVar1;
  
  if (DAT_146882930 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146882930 = GetStaticEnum(FUN_141350270,uVar1,L"EHUDInitAnimWidgetTarget");
  }
  return;
}



// FUNCTION 14134fea0 FUN_14134fea0 body=55 status=ok
// SIG undefined FUN_14134fea0(void)

void FUN_14134fea0(void)

{
  undefined8 uVar1;
  
  if (DAT_146882940 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146882940 = GetStaticEnum(FUN_1413502a0,uVar1,L"EInteractionPromptGlyphMode");
  }
  return;
}



// FUNCTION 14134fee0 FUN_14134fee0 body=55 status=ok
// SIG undefined FUN_14134fee0(void)

void FUN_14134fee0(void)

{
  undefined8 uVar1;
  
  if (DAT_146882938 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146882938 = GetStaticEnum(FUN_1413502d0,uVar1,L"EPromptLinesLayouts");
  }
  return;
}



// FUNCTION 14134ff20 FUN_14134ff20 body=6 status=ok
// SIG undefined FUN_14134ff20(void)

undefined8 FUN_14134ff20(void)

{
  return 0x3841bccd;
}



// FUNCTION 14134ff30 thunk_FUN_1413a3fb0 body=5 status=ok
// SIG undefined thunk_FUN_1413a3fb0(void)

void thunk_FUN_1413a3fb0(void)

{
  FUN_1413a3fb0();
  return;
}



// FUNCTION 14134ff40 StaticRegisterNativesAGRumbleGameState body=34 status=ok
// SIG undefined StaticRegisterNativesAGRumbleGameState(void)

void AGRumbleGameState::StaticRegisterNativesAGRumbleGameState(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_BeginTrackingGrenades_14489bb98,2);
  return;
}



// FUNCTION 14134ff70 FUN_14134ff70 body=34 status=ok
// SIG undefined FUN_14134ff70(void)

void FUN_14134ff70(void)

{
  undefined8 uVar1;
  
  uVar1 = UCheckBox::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClearDelegates_14489c2a0,10);
  return;
}



// FUNCTION 14134ffa0 FUN_14134ffa0 body=34 status=ok
// SIG undefined FUN_14134ffa0(void)

void FUN_14134ffa0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14134bb00();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_ExtOnIntroAnimationComplete_14489d5d0,0xb);
  return;
}



// FUNCTION 14134ffd0 FUN_14134ffd0 body=34 status=ok
// SIG undefined FUN_14134ffd0(void)

void FUN_14134ffd0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14134b8f0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetButtonState_14489d5c0,1);
  return;
}



// FUNCTION 141350000 FUN_141350000 body=34 status=ok
// SIG undefined FUN_141350000(void)

void FUN_141350000(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14134c430();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnBlackLevelChanged_14489e510,0x10);
  return;
}



// FUNCTION 141350030 FUN_141350030 body=34 status=ok
// SIG undefined FUN_141350030(void)

void FUN_141350030(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14134ca70();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_extInitAnimationComplete_14489f480,2);
  return;
}



// FUNCTION 141350060 FUN_141350060 body=34 status=ok
// SIG undefined FUN_141350060(void)

void FUN_141350060(void)

{
  undefined8 uVar1;
  
  uVar1 = AGPoisonSplashProjectile::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnDeath_14489eca0,7);
  return;
}



// FUNCTION 141350090 FUN_141350090 body=34 status=ok
// SIG undefined FUN_141350090(void)

void FUN_141350090(void)

{
  undefined8 uVar1;
  
  uVar1 = AGPoisonSplashProjectile::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnCurrencyQuantityChanged_14489fb30,0xc);
  return;
}



// FUNCTION 1413500c0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146882d90 == 0) {
    uVar1 = FUN_14134ff20();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146882d90 = GetStaticStruct(FUN_141350300,uVar2,L"GFxGrenadeIndicatorSortItem",0x10,uVar1);
  }
  return;
}



// FUNCTION 141350120 FUN_141350120 body=47 status=ok
// SIG undefined FUN_141350120(void)

longlong FUN_141350120(void)

{
  if (DAT_146882da0 == 0) {
    FUN_141786440(&DAT_146882da0,&PTR_GetPrivateStaticClass_144894380);
  }
  return DAT_146882da0;
}



// FUNCTION 141350150 FUN_141350150 body=47 status=ok
// SIG undefined FUN_141350150(void)

longlong FUN_141350150(void)

{
  if (DAT_146882e50 == 0) {
    FUN_141786440(&DAT_146882e50,&PTR_GetPrivateStaticClass_144893760);
  }
  return DAT_146882e50;
}



// FUNCTION 141350180 FUN_141350180 body=47 status=ok
// SIG undefined FUN_141350180(void)

longlong FUN_141350180(void)

{
  if (DAT_146882e60 == 0) {
    FUN_141786440(&DAT_146882e60,&PTR_GetPrivateStaticClass_1448938d0);
  }
  return DAT_146882e60;
}



// FUNCTION 1413501b0 FUN_1413501b0 body=47 status=ok
// SIG undefined FUN_1413501b0(void)

longlong FUN_1413501b0(void)

{
  if (DAT_146882ed8 == 0) {
    FUN_141786440(&DAT_146882ed8,&PTR_FUN_144892230);
  }
  return DAT_146882ed8;
}



// FUNCTION 1413501e0 FUN_1413501e0 body=47 status=ok
// SIG undefined FUN_1413501e0(void)

longlong FUN_1413501e0(void)

{
  if (DAT_146882ee8 == 0) {
    FUN_1417866a0(&DAT_146882ee8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146318d30);
  }
  return DAT_146882ee8;
}



// FUNCTION 141350210 FUN_141350210 body=47 status=ok
// SIG undefined FUN_141350210(void)

longlong FUN_141350210(void)

{
  if (DAT_146882d88 == 0) {
    FUN_1417866a0(&DAT_146882d88,&PTR_Z_Construct_UPackage__Script_MechWarrior_146318c90);
  }
  return DAT_146882d88;
}



// FUNCTION 141350240 FUN_141350240 body=47 status=ok
// SIG undefined FUN_141350240(void)

longlong FUN_141350240(void)

{
  if (DAT_146882e30 == 0) {
    FUN_1417866a0(&DAT_146882e30,&PTR_Z_Construct_UPackage__Script_MechWarrior_146318ce0);
  }
  return DAT_146882e30;
}



// FUNCTION 141350270 FUN_141350270 body=47 status=ok
// SIG undefined FUN_141350270(void)

longlong FUN_141350270(void)

{
  if (DAT_146882fc8 == 0) {
    FUN_1417866a0(&DAT_146882fc8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146318d80);
  }
  return DAT_146882fc8;
}



// FUNCTION 1413502a0 FUN_1413502a0 body=47 status=ok
// SIG undefined FUN_1413502a0(void)

longlong FUN_1413502a0(void)

{
  if (DAT_146882ff8 == 0) {
    FUN_1417866a0(&DAT_146882ff8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146318e20);
  }
  return DAT_146882ff8;
}



// FUNCTION 1413502d0 FUN_1413502d0 body=47 status=ok
// SIG undefined FUN_1413502d0(void)

longlong FUN_1413502d0(void)

{
  if (DAT_146882ff0 == 0) {
    FUN_1417866a0(&DAT_146882ff0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146318dd0);
  }
  return DAT_146882ff0;
}



// FUNCTION 141350300 FUN_141350300 body=47 status=ok
// SIG undefined FUN_141350300(void)

longlong FUN_141350300(void)

{
  if (DAT_146882d98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146882d98,&PTR_Z_Construct_UPackage__Script_MechWarrior_146313e20);
  }
  return DAT_146882d98;
}



// FUNCTION 141350350 FUN_141350350 body=128 status=ok
// SIG undefined FUN_141350350(void)

void FUN_141350350(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f28180(param_1,local_res10);
  return;
}



// FUNCTION 141350410 FUN_141350410 body=257 status=ok
// SIG undefined FUN_141350410(void)

void FUN_141350410(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  longlong local_28 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_140f2af50(param_1,local_28,local_res18[0],local_res10[0]);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141350520 FUN_141350520 body=126 status=ok
// SIG undefined FUN_141350520(void)

void FUN_141350520(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f2cac0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1413505c0 FUN_1413505c0 body=188 status=ok
// SIG undefined FUN_1413505c0(void)

void FUN_1413505c0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f2cc30(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 141350680 FUN_141350680 body=194 status=ok
// SIG undefined FUN_141350680(void)

void FUN_141350680(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f2ce70(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 141350750 FUN_141350750 body=126 status=ok
// SIG undefined FUN_141350750(void)

void FUN_141350750(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f2ce80(param_1,local_res10[0]);
  return;
}



// FUNCTION 1413507d0 FUN_1413507d0 body=128 status=ok
// SIG undefined FUN_1413507d0(void)

void FUN_1413507d0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f33650(param_1,local_res10);
  return;
}



// FUNCTION 141350850 FUN_141350850 body=334 status=ok
// SIG undefined FUN_141350850(void)

void FUN_141350850(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f33780(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 1413509a0 FUN_1413509a0 body=128 status=ok
// SIG undefined FUN_1413509a0(void)

void FUN_1413509a0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f338b0(param_1,local_res10);
  return;
}



// FUNCTION 141350a20 FUN_141350a20 body=334 status=ok
// SIG undefined FUN_141350a20(void)

void FUN_141350a20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f33930(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 141350b70 FUN_141350b70 body=128 status=ok
// SIG undefined FUN_141350b70(void)

void FUN_141350b70(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f33c10(param_1,local_res10);
  return;
}



// FUNCTION 141350bf0 FUN_141350bf0 body=334 status=ok
// SIG undefined FUN_141350bf0(void)

void FUN_141350bf0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f33c40(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 141350d40 FUN_141350d40 body=333 status=ok
// SIG undefined FUN_141350d40(void)

void FUN_141350d40(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_28 [2];
  undefined8 local_20;
  
  local_res10[0] = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_20 = 0;
  puVar1 = local_res10;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  thunk_FUN_140f549e0(param_1,puVar1,local_20,local_28[0],local_res20[0]);
  return;
}



// FUNCTION 141350e90 FUN_141350e90 body=443 status=ok
// SIG undefined FUN_141350e90(void)

void FUN_141350e90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  longlong *local_48;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  FUN_142de2fd0(local_58);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar5 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_68 = local_78;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_60 = local_70;
  FUN_140f33cb0(param_1,local_res20,puVar5,&local_68,local_res10[0]);
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



// FUNCTION 141351070 FUN_141351070 body=128 status=ok
// SIG undefined FUN_141351070(void)

void FUN_141351070(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f36d80(param_1,local_res10);
  return;
}



// FUNCTION 1413510f0 FUN_1413510f0 body=334 status=ok
// SIG undefined FUN_1413510f0(void)

void FUN_1413510f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f36e20(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 141351240 FUN_141351240 body=229 status=ok
// SIG undefined FUN_141351240(void)

void FUN_141351240(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 local_res10 [2];
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  local_28[0] = 0xff;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res10[0] = 0;
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f36f00(param_1,puVar1,local_res10[0]);
  return;
}



// FUNCTION 141351330 FUN_141351330 body=275 status=ok
// SIG undefined FUN_141351330(void)

void FUN_141351330(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  
  local_38[0] = 0xff;
  local_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res20[0] = 0;
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f36f60(param_1,puVar1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 141351450 FUN_141351450 body=118 status=ok
// SIG undefined FUN_141351450(void)

void FUN_141351450(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f36fa0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1413514d0 FUN_1413514d0 body=128 status=ok
// SIG undefined FUN_1413514d0(void)

void FUN_1413514d0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f36fe0(param_1,local_res10);
  return;
}



// FUNCTION 141351550 FUN_141351550 body=334 status=ok
// SIG undefined FUN_141351550(void)

void FUN_141351550(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f37100(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 1413516a0 FUN_1413516a0 body=128 status=ok
// SIG undefined FUN_1413516a0(void)

void FUN_1413516a0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f37160(param_1,local_res10);
  return;
}



// FUNCTION 141351720 FUN_141351720 body=334 status=ok
// SIG undefined FUN_141351720(void)

void FUN_141351720(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f37280(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 141351870 FUN_141351870 body=334 status=ok
// SIG undefined FUN_141351870(void)

void FUN_141351870(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f372e0(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 1413519c0 FUN_1413519c0 body=128 status=ok
// SIG undefined FUN_1413519c0(void)

void FUN_1413519c0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f37340(param_1,local_res10);
  return;
}



// FUNCTION 141351b20 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f3b270(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141351be0 FUN_141351be0 body=159 status=ok
// SIG undefined FUN_141351be0(void)

void FUN_141351be0(undefined8 param_1,longlong param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = CONCAT31(local_48._1_3_,0xff);
  uStack_40 = 0;
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_18 = CONCAT44(uStack_34,local_38);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f3cec0(param_1,&local_28);
  return;
}



// FUNCTION 141351c80 FUN_141351c80 body=334 status=ok
// SIG undefined FUN_141351c80(void)

void FUN_141351c80(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f3e080(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 141351dd0 FUN_141351dd0 body=334 status=ok
// SIG undefined FUN_141351dd0(void)

void FUN_141351dd0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f3e670(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 141351f20 FUN_141351f20 body=334 status=ok
// SIG undefined FUN_141351f20(void)

void FUN_141351f20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f3e6d0(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 141352090 FUN_141352090 body=130 status=ok
// SIG undefined FUN_141352090(void)

void FUN_141352090(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f3ea00(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 141352120 FUN_141352120 body=334 status=ok
// SIG undefined FUN_141352120(void)

void FUN_141352120(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f3ea70(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 141352270 FUN_141352270 body=334 status=ok
// SIG undefined FUN_141352270(void)

void FUN_141352270(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f3eb60(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 1413523c0 FUN_1413523c0 body=128 status=ok
// SIG undefined FUN_1413523c0(void)

void FUN_1413523c0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f42210(param_1,local_res10);
  return;
}



// FUNCTION 141352440 FUN_141352440 body=334 status=ok
// SIG undefined FUN_141352440(void)

void FUN_141352440(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f42240(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 141352590 FUN_141352590 body=270 status=ok
// SIG undefined FUN_141352590(void)

void FUN_141352590(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined8 local_res10;
  undefined1 local_48 [16];
  longlong *local_38;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FUN_142de2fd0(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar5 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f433e0(param_1,local_res10,puVar5);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  return;
}



// FUNCTION 1413526a0 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f43410(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141352760 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f43460(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141352820 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f434b0(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1413528e0 FUN_1413528e0 body=152 status=ok
// SIG undefined FUN_1413528e0(void)

void FUN_1413528e0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  local_28[0] = 0xff;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f4d280(param_1,puVar1);
  return;
}



// FUNCTION 141352980 FUN_141352980 body=126 status=ok
// SIG undefined FUN_141352980(void)

void FUN_141352980(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f53780(param_1,local_res10[0]);
  return;
}



// FUNCTION 141352a00 FUN_141352a00 body=152 status=ok
// SIG undefined FUN_141352a00(void)

void FUN_141352a00(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  local_28[0] = 0xff;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f538a0(param_1,puVar1);
  return;
}



// FUNCTION 141352b70 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FWorldContext_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x298;
    *puVar1 = &PTR_FUN_1448a8010;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141352bb0 FUN_141352bb0 body=162 status=ok
// SIG undefined FUN_141352bb0(void)

longlong FUN_141352bb0(void)

{
  if (DAT_146883740 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxInWorldIconContainer",&DAT_146883740,FUN_1413568e0,0x8d0,
                  0x10000000,0,L"Engine",&LAB_141353d40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGSquadMemberWidget::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146883740;
}



// FUNCTION 141352c60 FUN_141352c60 body=162 status=ok
// SIG undefined FUN_141352c60(void)

longlong FUN_141352c60(void)

{
  if (DAT_1468836e8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxInWorldIcon",&DAT_1468836e8,FUN_1413568b0,0x250,0x10000008
                  ,0,L"Engine",FUN_141353c20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_1468836e8;
}



// FUNCTION 141352d10 FUN_141352d10 body=162 status=ok
// SIG undefined FUN_141352d10(void)

longlong FUN_141352d10(void)

{
  if (DAT_146883528 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxInventoryMenuAmmoWidget",&DAT_146883528,FUN_140447710,
                  0x260,0x10000008,0,L"Engine",FUN_141353e20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146883528;
}



// FUNCTION 141352dc0 FUN_141352dc0 body=47 status=ok
// SIG undefined FUN_141352dc0(void)

longlong FUN_141352dc0(void)

{
  if (DAT_1468836e0 == 0) {
    FUN_141786440(&DAT_1468836e0,&PTR_FUN_1448a3280);
  }
  return DAT_1468836e0;
}



// FUNCTION 141352df0 FUN_141352df0 body=47 status=ok
// SIG undefined FUN_141352df0(void)

longlong FUN_141352df0(void)

{
  if (DAT_146883660 == 0) {
    FUN_141786a30(&DAT_146883660,&PTR_FUN_14631c540);
  }
  return DAT_146883660;
}



// FUNCTION 141352e20 FUN_141352e20 body=47 status=ok
// SIG undefined FUN_141352e20(void)

longlong FUN_141352e20(void)

{
  if (DAT_146883668 == 0) {
    FUN_141786a30(&DAT_146883668,&PTR_FUN_14631c5c0);
  }
  return DAT_146883668;
}



// FUNCTION 141352e50 FUN_141352e50 body=47 status=ok
// SIG undefined FUN_141352e50(void)

longlong FUN_141352e50(void)

{
  if (DAT_146883670 == 0) {
    FUN_141786a30(&DAT_146883670,&PTR_FUN_14631c640);
  }
  return DAT_146883670;
}



// FUNCTION 141352e80 FUN_141352e80 body=47 status=ok
// SIG undefined FUN_141352e80(void)

longlong FUN_141352e80(void)

{
  if (DAT_146883678 == 0) {
    FUN_141786a30(&DAT_146883678,&PTR_FUN_14631c6c0);
  }
  return DAT_146883678;
}



// FUNCTION 141352eb0 FUN_141352eb0 body=47 status=ok
// SIG undefined FUN_141352eb0(void)

longlong FUN_141352eb0(void)

{
  if (DAT_146883680 == 0) {
    FUN_141786a30(&DAT_146883680,&PTR_FUN_14631c740);
  }
  return DAT_146883680;
}



// FUNCTION 141352ee0 FUN_141352ee0 body=47 status=ok
// SIG undefined FUN_141352ee0(void)

longlong FUN_141352ee0(void)

{
  if (DAT_146883688 == 0) {
    FUN_141786a30(&DAT_146883688,&PTR_FUN_14631c7c0);
  }
  return DAT_146883688;
}



// FUNCTION 141352f10 FUN_141352f10 body=47 status=ok
// SIG undefined FUN_141352f10(void)

longlong FUN_141352f10(void)

{
  if (DAT_146883690 == 0) {
    FUN_141786a30(&DAT_146883690,&PTR_FUN_14631c850);
  }
  return DAT_146883690;
}



// FUNCTION 141352f40 FUN_141352f40 body=47 status=ok
// SIG undefined FUN_141352f40(void)

longlong FUN_141352f40(void)

{
  if (DAT_146883698 == 0) {
    FUN_141786a30(&DAT_146883698,&PTR_FUN_14631c8e0);
  }
  return DAT_146883698;
}



// FUNCTION 141352f70 FUN_141352f70 body=47 status=ok
// SIG undefined FUN_141352f70(void)

longlong FUN_141352f70(void)

{
  if (DAT_1468836a0 == 0) {
    FUN_141786a30(&DAT_1468836a0,&PTR_FUN_14631c9b0);
  }
  return DAT_1468836a0;
}



// FUNCTION 141352fa0 FUN_141352fa0 body=47 status=ok
// SIG undefined FUN_141352fa0(void)

longlong FUN_141352fa0(void)

{
  if (DAT_1468836a8 == 0) {
    FUN_141786a30(&DAT_1468836a8,&PTR_FUN_14631ca30);
  }
  return DAT_1468836a8;
}



// FUNCTION 141352fd0 FUN_141352fd0 body=47 status=ok
// SIG undefined FUN_141352fd0(void)

longlong FUN_141352fd0(void)

{
  if (DAT_1468836b0 == 0) {
    FUN_141786a30(&DAT_1468836b0,&PTR_FUN_14631cab0);
  }
  return DAT_1468836b0;
}



// FUNCTION 141353000 FUN_141353000 body=47 status=ok
// SIG undefined FUN_141353000(void)

longlong FUN_141353000(void)

{
  if (DAT_1468836b8 == 0) {
    FUN_141786a30(&DAT_1468836b8,&PTR_FUN_14631cb30);
  }
  return DAT_1468836b8;
}



// FUNCTION 141353030 FUN_141353030 body=47 status=ok
// SIG undefined FUN_141353030(void)

longlong FUN_141353030(void)

{
  if (DAT_1468836c0 == 0) {
    FUN_141786a30(&DAT_1468836c0,&PTR_FUN_14631cbb0);
  }
  return DAT_1468836c0;
}



// FUNCTION 141353060 FUN_141353060 body=47 status=ok
// SIG undefined FUN_141353060(void)

longlong FUN_141353060(void)

{
  if (DAT_1468836c8 == 0) {
    FUN_141786a30(&DAT_1468836c8,&PTR_FUN_14631cc30);
  }
  return DAT_1468836c8;
}



// FUNCTION 141353090 FUN_141353090 body=47 status=ok
// SIG undefined FUN_141353090(void)

longlong FUN_141353090(void)

{
  if (DAT_1468836d0 == 0) {
    FUN_141786a30(&DAT_1468836d0,&PTR_FUN_14631ccb0);
  }
  return DAT_1468836d0;
}



// FUNCTION 1413530c0 FUN_1413530c0 body=47 status=ok
// SIG undefined FUN_1413530c0(void)

longlong FUN_1413530c0(void)

{
  if (DAT_1468836d8 == 0) {
    FUN_141786a30(&DAT_1468836d8,&PTR_FUN_14631cd30);
  }
  return DAT_1468836d8;
}



// FUNCTION 1413530f0 FUN_1413530f0 body=162 status=ok
// SIG undefined FUN_1413530f0(void)

longlong FUN_1413530f0(void)

{
  if (DAT_146883538 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxInventoryMenuData",&DAT_146883538,FUN_140447710,0x118,
                  0x10000000,0,L"Engine",FUN_141353ef0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1413a4060,&LAB_140447700,0);
  }
  return DAT_146883538;
}



// FUNCTION 1413531a0 FUN_1413531a0 body=162 status=ok
// SIG undefined FUN_1413531a0(void)

longlong FUN_1413531a0(void)

{
  if (DAT_146883548 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxInventoryMenuDragObject",&DAT_146883548,FUN_140447710,
                  0x180,0x10000008,0,L"Engine",FUN_141353f80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_146883548;
}



// FUNCTION 141353250 FUN_141353250 body=162 status=ok
// SIG undefined FUN_141353250(void)

longlong FUN_141353250(void)

{
  if (DAT_146883620 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxInventoryMenu",&DAT_146883620,FUN_141356910,0xfc0,
                  0x10000000,0,L"Engine",&LAB_141353e00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1413a3fb0,&LAB_140447700,0);
  }
  return DAT_146883620;
}



// FUNCTION 141353300 FUN_141353300 body=47 status=ok
// SIG undefined FUN_141353300(void)

longlong FUN_141353300(void)

{
  if (DAT_146883738 == 0) {
    FUN_141786440(&DAT_146883738,&PTR_FUN_1448a3910);
  }
  return DAT_146883738;
}



// FUNCTION 141353330 FUN_141353330 body=47 status=ok
// SIG undefined FUN_141353330(void)

longlong FUN_141353330(void)

{
  if (DAT_1468836f0 == 0) {
    FUN_141786a30(&DAT_1468836f0,&PTR_FUN_14631d050);
  }
  return DAT_1468836f0;
}



// FUNCTION 141353360 FUN_141353360 body=47 status=ok
// SIG undefined FUN_141353360(void)

longlong FUN_141353360(void)

{
  if (DAT_1468836f8 == 0) {
    FUN_141786a30(&DAT_1468836f8,&PTR_FUN_14631d190);
  }
  return DAT_1468836f8;
}



// FUNCTION 141353390 FUN_141353390 body=47 status=ok
// SIG undefined FUN_141353390(void)

longlong FUN_141353390(void)

{
  if (DAT_146883700 == 0) {
    FUN_141786a30(&DAT_146883700,&PTR_FUN_14631d210);
  }
  return DAT_146883700;
}



// FUNCTION 1413533c0 FUN_1413533c0 body=47 status=ok
// SIG undefined FUN_1413533c0(void)

longlong FUN_1413533c0(void)

{
  if (DAT_146883708 == 0) {
    FUN_141786a30(&DAT_146883708,&PTR_FUN_14631d290);
  }
  return DAT_146883708;
}



// FUNCTION 1413533f0 FUN_1413533f0 body=47 status=ok
// SIG undefined FUN_1413533f0(void)

longlong FUN_1413533f0(void)

{
  if (DAT_146883710 == 0) {
    FUN_141786a30(&DAT_146883710,&PTR_FUN_14631d310);
  }
  return DAT_146883710;
}



// FUNCTION 141353420 FUN_141353420 body=47 status=ok
// SIG undefined FUN_141353420(void)

longlong FUN_141353420(void)

{
  if (DAT_146883718 == 0) {
    FUN_141786a30(&DAT_146883718,&PTR_FUN_14631d390);
  }
  return DAT_146883718;
}



// FUNCTION 141353450 FUN_141353450 body=47 status=ok
// SIG undefined FUN_141353450(void)

longlong FUN_141353450(void)

{
  if (DAT_146883720 == 0) {
    FUN_141786a30(&DAT_146883720,&PTR_FUN_14631d410);
  }
  return DAT_146883720;
}



// FUNCTION 141353480 FUN_141353480 body=47 status=ok
// SIG undefined FUN_141353480(void)

longlong FUN_141353480(void)

{
  if (DAT_146883728 == 0) {
    FUN_141786a30(&DAT_146883728,&PTR_FUN_14631d490);
  }
  return DAT_146883728;
}



// FUNCTION 1413534b0 FUN_1413534b0 body=47 status=ok
// SIG undefined FUN_1413534b0(void)

longlong FUN_1413534b0(void)

{
  if (DAT_146883730 == 0) {
    FUN_141786a30(&DAT_146883730,&PTR_FUN_14631d510);
  }
  return DAT_146883730;
}



// FUNCTION 1413534f0 FUN_1413534f0 body=162 status=ok
// SIG undefined FUN_1413534f0(void)

longlong FUN_1413534f0(void)

{
  if (DAT_1468834c8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxInventoryFeedbackWidget",&DAT_1468834c8,FUN_140447710,
                  0x200,0x10000008,0,L"Engine",FUN_141353d50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141326ad0,&LAB_140447700,0);
  }
  return DAT_1468834c8;
}



// FUNCTION 1413535c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXGameInstance::GetPrivateStaticClass(void)

{
  if (DAT_146883630 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxInventoryMenuTrinketButton",&DAT_146883630,FUN_140447710,
                  0x330,0x10000008,0,L"Engine",FUN_141353fc0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142f18d50,&LAB_140447700,0);
  }
  return DAT_146883630;
}



// FUNCTION 141353670 FUN_141353670 body=47 status=ok
// SIG undefined FUN_141353670(void)

longlong FUN_141353670(void)

{
  if (DAT_146883618 == 0) {
    FUN_141786440(&DAT_146883618,&PTR_FUN_1448a0de0);
  }
  return DAT_146883618;
}



// FUNCTION 1413536a0 FUN_1413536a0 body=47 status=ok
// SIG undefined FUN_1413536a0(void)

longlong FUN_1413536a0(void)

{
  if (DAT_146883550 == 0) {
    FUN_141786a30(&DAT_146883550,&PTR_FUN_146319870);
  }
  return DAT_146883550;
}



// FUNCTION 1413536d0 FUN_1413536d0 body=47 status=ok
// SIG undefined FUN_1413536d0(void)

longlong FUN_1413536d0(void)

{
  if (DAT_146883558 == 0) {
    FUN_141786a30(&DAT_146883558,&PTR_FUN_1463198b0);
  }
  return DAT_146883558;
}



// FUNCTION 141353700 FUN_141353700 body=47 status=ok
// SIG undefined FUN_141353700(void)

longlong FUN_141353700(void)

{
  if (DAT_146883560 == 0) {
    FUN_141786a30(&DAT_146883560,&PTR_FUN_1463199b0);
  }
  return DAT_146883560;
}



// FUNCTION 141353730 FUN_141353730 body=47 status=ok
// SIG undefined FUN_141353730(void)

longlong FUN_141353730(void)

{
  if (DAT_146883568 == 0) {
    FUN_141786a30(&DAT_146883568,&PTR_FUN_146319ab0);
  }
  return DAT_146883568;
}



// FUNCTION 141353760 FUN_141353760 body=47 status=ok
// SIG undefined FUN_141353760(void)

longlong FUN_141353760(void)

{
  if (DAT_146883570 == 0) {
    FUN_141786a30(&DAT_146883570,&PTR_FUN_146319b70);
  }
  return DAT_146883570;
}



// FUNCTION 141353790 FUN_141353790 body=47 status=ok
// SIG undefined FUN_141353790(void)

longlong FUN_141353790(void)

{
  if (DAT_146883578 == 0) {
    FUN_141786a30(&DAT_146883578,&PTR_FUN_146319c30);
  }
  return DAT_146883578;
}



// FUNCTION 1413537c0 FUN_1413537c0 body=47 status=ok
// SIG undefined FUN_1413537c0(void)

longlong FUN_1413537c0(void)

{
  if (DAT_146883580 == 0) {
    FUN_141786a30(&DAT_146883580,&PTR_FUN_146319c70);
  }
  return DAT_146883580;
}



// FUNCTION 1413537f0 FUN_1413537f0 body=47 status=ok
// SIG undefined FUN_1413537f0(void)

longlong FUN_1413537f0(void)

{
  if (DAT_146883588 == 0) {
    FUN_141786a30(&DAT_146883588,&PTR_FUN_146319d30);
  }
  return DAT_146883588;
}



// FUNCTION 141353820 FUN_141353820 body=47 status=ok
// SIG undefined FUN_141353820(void)

longlong FUN_141353820(void)

{
  if (DAT_146883590 == 0) {
    FUN_141786a30(&DAT_146883590,&PTR_FUN_146319db0);
  }
  return DAT_146883590;
}



// FUNCTION 141353850 FUN_141353850 body=47 status=ok
// SIG undefined FUN_141353850(void)

longlong FUN_141353850(void)

{
  if (DAT_146883598 == 0) {
    FUN_141786a30(&DAT_146883598,&PTR_FUN_146319e30);
  }
  return DAT_146883598;
}



// FUNCTION 141353880 FUN_141353880 body=47 status=ok
// SIG undefined FUN_141353880(void)

longlong FUN_141353880(void)

{
  if (DAT_1468835a0 == 0) {
    FUN_141786a30(&DAT_1468835a0,&PTR_FUN_146319ef0);
  }
  return DAT_1468835a0;
}



// FUNCTION 1413538b0 FUN_1413538b0 body=47 status=ok
// SIG undefined FUN_1413538b0(void)

longlong FUN_1413538b0(void)

{
  if (DAT_1468835a8 == 0) {
    FUN_141786a30(&DAT_1468835a8,&PTR_FUN_146319f70);
  }
  return DAT_1468835a8;
}



// FUNCTION 1413538e0 FUN_1413538e0 body=47 status=ok
// SIG undefined FUN_1413538e0(void)

longlong FUN_1413538e0(void)

{
  if (DAT_1468835b0 == 0) {
    FUN_141786a30(&DAT_1468835b0,&PTR_FUN_14631a030);
  }
  return DAT_1468835b0;
}



// FUNCTION 141353910 FUN_141353910 body=47 status=ok
// SIG undefined FUN_141353910(void)

longlong FUN_141353910(void)

{
  if (DAT_1468835b8 == 0) {
    FUN_141786a30(&DAT_1468835b8,&PTR_FUN_14631a0b0);
  }
  return DAT_1468835b8;
}



// FUNCTION 141353940 FUN_141353940 body=47 status=ok
// SIG undefined FUN_141353940(void)

longlong FUN_141353940(void)

{
  if (DAT_1468835c0 == 0) {
    FUN_141786a30(&DAT_1468835c0,&PTR_FUN_14631a1e0);
  }
  return DAT_1468835c0;
}



// FUNCTION 141353970 FUN_141353970 body=47 status=ok
// SIG undefined FUN_141353970(void)

longlong FUN_141353970(void)

{
  if (DAT_1468835c8 == 0) {
    FUN_141786a30(&DAT_1468835c8,&PTR_FUN_14631a260);
  }
  return DAT_1468835c8;
}



// FUNCTION 1413539a0 FUN_1413539a0 body=47 status=ok
// SIG undefined FUN_1413539a0(void)

longlong FUN_1413539a0(void)

{
  if (DAT_1468835d0 == 0) {
    FUN_141786a30(&DAT_1468835d0,&PTR_FUN_14631a2a0);
  }
  return DAT_1468835d0;
}



// FUNCTION 1413539d0 FUN_1413539d0 body=47 status=ok
// SIG undefined FUN_1413539d0(void)

longlong FUN_1413539d0(void)

{
  if (DAT_1468835d8 == 0) {
    FUN_141786a30(&DAT_1468835d8,&PTR_FUN_14631a360);
  }
  return DAT_1468835d8;
}



// FUNCTION 141353a00 FUN_141353a00 body=47 status=ok
// SIG undefined FUN_141353a00(void)

longlong FUN_141353a00(void)

{
  if (DAT_1468835e0 == 0) {
    FUN_141786a30(&DAT_1468835e0,&PTR_FUN_14631a420);
  }
  return DAT_1468835e0;
}



// FUNCTION 141353a30 FUN_141353a30 body=47 status=ok
// SIG undefined FUN_141353a30(void)

longlong FUN_141353a30(void)

{
  if (DAT_1468835e8 == 0) {
    FUN_141786a30(&DAT_1468835e8,&PTR_FUN_14631a4e0);
  }
  return DAT_1468835e8;
}



// FUNCTION 141353a60 FUN_141353a60 body=47 status=ok
// SIG undefined FUN_141353a60(void)

longlong FUN_141353a60(void)

{
  if (DAT_1468835f0 == 0) {
    FUN_141786a30(&DAT_1468835f0,&PTR_FUN_14631a520);
  }
  return DAT_1468835f0;
}



// FUNCTION 141353a90 FUN_141353a90 body=47 status=ok
// SIG undefined FUN_141353a90(void)

longlong FUN_141353a90(void)

{
  if (DAT_1468835f8 == 0) {
    FUN_141786a30(&DAT_1468835f8,&PTR_FUN_14631a5e0);
  }
  return DAT_1468835f8;
}



// FUNCTION 141353ac0 FUN_141353ac0 body=47 status=ok
// SIG undefined FUN_141353ac0(void)

longlong FUN_141353ac0(void)

{
  if (DAT_146883600 == 0) {
    FUN_141786a30(&DAT_146883600,&PTR_FUN_14631a620);
  }
  return DAT_146883600;
}



// FUNCTION 141353af0 FUN_141353af0 body=47 status=ok
// SIG undefined FUN_141353af0(void)

longlong FUN_141353af0(void)

{
  if (DAT_146883608 == 0) {
    FUN_141786a30(&DAT_146883608,&PTR_FUN_14631a6e0);
  }
  return DAT_146883608;
}



// FUNCTION 141353b20 FUN_141353b20 body=47 status=ok
// SIG undefined FUN_141353b20(void)

longlong FUN_141353b20(void)

{
  if (DAT_146883610 == 0) {
    FUN_141786a30(&DAT_146883610,&PTR_FUN_14631a7a0);
  }
  return DAT_146883610;
}



// FUNCTION 141353b60 FUN_141353b60 body=53 status=ok
// SIG undefined FUN_141353b60(void)

void FUN_141353b60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_1448a7b38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141353ba0 FUN_141353ba0 body=53 status=ok
// SIG undefined FUN_141353ba0(void)

void FUN_141353ba0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd8;
    *puVar1 = &PTR_FUN_1448a7c50;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141353be0 FUN_141353be0 body=53 status=ok
// SIG undefined FUN_141353be0(void)

void FUN_141353be0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &PTR_FUN_1448a7d68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141353c20 FUN_141353c20 body=283 status=ok
// SIG undefined FUN_141353c20(void)

void FUN_141353c20(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448a8128;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    *(undefined4 *)(puVar1 + 0x30) = 1;
    puVar1[0x35] = 0;
    puVar1[0x36] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = (undefined4)DAT_1468b5d88;
    *(undefined4 *)(puVar1 + 0x39) = DAT_1468b5d88._4_4_;
    *(undefined8 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1dc) = 0;
    *(undefined1 *)(puVar1 + 0x3d) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1ec) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1f6) = 0;
    *(undefined1 *)(puVar1 + 0x3f) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1fc) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x40) = 0x3f800000;
    *(undefined1 *)((longlong)puVar1 + 0x204) = 0;
    *(undefined4 *)(puVar1 + 0x41) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x20c) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x42) = 0;
    InitializeSRWLock((PSRWLOCK)(puVar1 + 0x43));
    *(undefined4 *)(puVar1 + 0x44) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x224) = 0;
    InitializeSRWLock((PSRWLOCK)(puVar1 + 0x45));
    *(undefined4 *)(puVar1 + 0x48) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x23c) = 0xffffffff;
  }
  return;
}



// FUNCTION 141353d50 FUN_141353d50 body=143 status=ok
// SIG undefined FUN_141353d50(void)

void FUN_141353d50(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448a63b8;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    *(undefined4 *)(puVar1 + 0x2f) = 0;
    puVar1[0x3a] = 0;
    *(undefined4 *)(puVar1 + 0x32) = 0;
    puVar1[0x3b] = 0;
    *(undefined4 *)(puVar1 + 0x35) = 0;
    puVar1[0x3d] = 0;
    *(undefined4 *)(puVar1 + 0x39) = 0;
    puVar1[0x3e] = 0;
    *(undefined4 *)(puVar1 + 0x3c) = 0;
  }
  return;
}



// FUNCTION 141353e20 FUN_141353e20 body=205 status=ok
// SIG undefined FUN_141353e20(void)

void FUN_141353e20(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448a6908;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    *(undefined4 *)(puVar1 + 0x2e) = 0;
    *(undefined4 *)(puVar1 + 0x31) = 0;
    *(undefined4 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)(puVar1 + 0x39) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1d4) = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3c] = 0;
    *(undefined1 *)(puVar1 + 0x3f) = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0;
    *(undefined1 *)(puVar1 + 0x44) = 0;
    puVar1[0x45] = 0;
    puVar1[0x46] = 0;
    *(undefined1 *)(puVar1 + 0x49) = 0;
    *(undefined1 *)(puVar1 + 0x4a) = 0;
  }
  return;
}



// FUNCTION 141353ef0 FUN_141353ef0 body=132 status=ok
// SIG undefined FUN_141353ef0(void)

void FUN_141353ef0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141325970(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1448a6660;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    FText::FText(puVar1 + 0x1a);
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    *(undefined2 *)(puVar1 + 0x20) = 1;
    puVar1[0x21] = 0;
    *(undefined4 *)(puVar1 + 0x22) = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__1448a6660;
  }
  return;
}



// FUNCTION 141353f80 FUN_141353f80 body=57 status=ok
// SIG undefined FUN_141353f80(void)

void FUN_141353f80(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14106e9c0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448a6bb0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
  }
  return;
}



// FUNCTION 141353fc0 FUN_141353fc0 body=147 status=ok
// SIG undefined FUN_141353fc0(void)

void FUN_141353fc0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1413205b0(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__1448a7778;
    puVar1[0x2e] = &PTR_LAB_1448a7a98;
    puVar1[0x59] = 0;
    puVar1[0x5a] = 0;
    puVar1[0x5b] = 0;
    puVar1[0x5c] = 0;
    puVar1[0x5d] = 0;
    puVar1[0x5e] = 0;
    puVar1[0x5f] = 0;
    puVar1[0x60] = 0;
    puVar1[0x61] = 0;
    puVar1[0x62] = 0;
    puVar1[99] = 0;
    puVar1[100] = 0;
    *(undefined1 *)(puVar1 + 0x65) = 0;
  }
  return;
}



// FUNCTION 141354060 FUN_141354060 body=512 status=ok
// SIG undefined FUN_141354060(void)

undefined8 * FUN_141354060(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 7) = 0x101;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FName::FName(param_1 + 0x14,L"OakMenu_InventoryDrop",1);
  FName::FName(param_1 + 0x15,L"OakMenu_InventoryDropByHolding",1);
  FName::FName(param_1 + 0x16,L"OakMenu_InventoryTrashFavorite",1);
  FName::FName(param_1 + 0x17,L"OakMenu_InventoryInspect",1);
  FName::FName(param_1 + 0x18,L"OakMenu_InventoryUnequip",1);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x43c80000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x21) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x43c80000;
  *(undefined4 *)(param_1 + 0x22) = 0x43c80000;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x42700000;
  FUN_140e9a1b0(param_1 + 0x23);
  *(undefined4 *)(param_1 + 0x46) = 5;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0x43b18000;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x40400000;
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x48,L"Trinkets",L"GFxInventoryMenu",L"TrinketsCategory");
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  FName::FName(param_1 + 0x50,"GearUpModeTutorial",1);
  *(undefined4 *)(param_1 + 0x51) = 8;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 5;
  *(undefined1 *)(param_1 + 0x52) = 1;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0x3dcccccd;
  return param_1;
}



// FUNCTION 141354260 FUN_141354260 body=285 status=ok
// SIG undefined FUN_141354260(void)

undefined8 * FUN_141354260(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xac)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x14,0);
  }
  if ((undefined2 *)param_1[0x14] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x14] = 0;
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x16,0);
  FGenericPlatformString::Memcpy(param_1[0x16],L"input1",0xe);
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return param_1;
}



// FUNCTION 141354380 FSoVoiceEntry body=111 status=ok
// SIG undefined FSoVoiceEntry(void)

undefined4 * FSoVoiceEntry::FSoVoiceEntry(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  if (0x7fffffff < (uint)param_1[9]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  }
  if (*(undefined2 **)(param_1 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 6) = 0;
  }
  param_1[2] = 0;
  FText::FText(param_1 + 10);
  return param_1;
}



// FUNCTION 1413543f0 FUN_1413543f0 body=1076 status=ok
// SIG undefined FUN_1413543f0(void)

undefined8 * FUN_1413543f0(undefined8 *param_1)

{
  FUN_140e9aa30();
  *param_1 = &PTR_FUN_144646880;
  param_1[0x9b] = &PTR_LAB_144646df0;
  FWeakObjectPtr::operator=(param_1 + 0xd0,0);
  *(undefined4 *)(param_1 + 0xd1) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x69c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd2) = 0x10000;
  *(undefined2 *)((longlong)param_1 + 0x694) = 0;
  param_1[0xd4] = 0;
  *param_1 = &PTR_FUN_1448a6e58;
  param_1[0x9b] = &PTR_LAB_1448a7400;
  param_1[0xd5] = &PTR_LAB_1448a7580;
  FUN_141354060(param_1 + 0xd6);
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  *(undefined4 *)(param_1 + 299) = 0x43520000;
  *(undefined8 *)((longlong)param_1 + 0x95c) = 0x43078000;
  *(undefined4 *)((longlong)param_1 + 0x964) = 0;
  *(undefined4 *)(param_1 + 0x12d) = 0x43520000;
  *(undefined8 *)((longlong)param_1 + 0x96c) = 0x43078000;
  *(undefined4 *)((longlong)param_1 + 0x974) = 0;
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x12f,L"AMMO",L"GFxInventoryMenu",L"AmmoLabelText");
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  *(undefined4 *)(param_1 + 0x132) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x994) = 0;
  param_1[0x134] = 0;
  *(undefined4 *)(param_1 + 0x136) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x9b4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x135,0);
  }
  if ((undefined2 *)param_1[0x135] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x135] = 0;
  }
  *(undefined4 *)(param_1 + 0x133) = 0;
  param_1[0x137] = 0x3e800000;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x139) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13b) = 0;
  param_1[0x13c] = 0;
  *(undefined4 *)(param_1 + 0x13d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9ec) = 0;
  *(undefined4 *)(param_1 + 0x13e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9f4) = 0;
  *(undefined4 *)(param_1 + 0x13f) = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x145) = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa64) = 0;
  *(undefined4 *)(param_1 + 0x14d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa6c) = 0;
  FUN_14106d860(param_1 + 0x150);
  FUN_14106d860(param_1 + 0x183);
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bc] = 0;
  param_1[0x1bd] = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1bb) = 0;
  param_1[0x1c5] = 0;
  *(undefined4 *)(param_1 + 0x1c6) = 1;
  *(undefined2 *)((longlong)param_1 + 0xe34) = 0;
  param_1[0x1c7] = 0;
  param_1[0x1c8] = 0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1cb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1cb),4000);
  *(undefined4 *)((longlong)param_1 + 0xe84) = 0xffffffff;
  param_1[0x1d1] = 0;
  *(undefined2 *)(param_1 + 0x1d2) = 0;
  param_1[0x1d3] = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xea4) = 0;
  *(undefined4 *)(param_1 + 0x1d5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xeac) = 0;
  *(undefined4 *)(param_1 + 0x1d6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xeb4) = 0;
  *(undefined4 *)(param_1 + 0x1d7) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0xebc) = 0;
  param_1[0x1d9] = 0;
  param_1[0x1da] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1dd] = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  param_1[0x1df] = 0;
  *(undefined4 *)(param_1 + 0x1db) = 0;
  param_1[0x1e0] = 0;
  *(undefined4 *)(param_1 + 0x1de) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1e3),4000);
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  FWeakObjectPtr::operator=((longlong)param_1 + 0xf44,0);
  *(undefined4 *)(param_1 + 0x1ea) = 0;
  param_1[0x1eb] = 0;
  param_1[0x1ec] = 0;
  *(undefined4 *)(param_1 + 0x1ed) = 0xffffffff;
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x1f0));
  *(undefined4 *)(param_1 + 0x1f1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf8c) = 0;
  param_1[0x1f2] = 0;
  *(undefined4 *)(param_1 + 499) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf9c) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfa4) = 0;
  *(undefined4 *)(param_1 + 0x1f5) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfac) = 0;
  *(undefined4 *)(param_1 + 0x1f6) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfb4) = 0;
  *(undefined4 *)(param_1 + 0x1f7) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfbc) = 0;
  return param_1;
}



// FUNCTION 141354830 FUN_141354830 body=133 status=ok
// SIG undefined FUN_141354830(void)

void FUN_141354830(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar4 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar5 = (longlong *)(lVar4 + 0x28);
    do {
      FUN_141354b60(plVar5 + 2);
      plVar3 = (longlong *)*plVar5;
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
      plVar5 = plVar5 + 0x1b;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar4 = *param_1;
  }
  if (lVar4 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1413548c0 FUN_1413548c0 body=173 status=ok
// SIG undefined FUN_1413548c0(void)

void FUN_1413548c0(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x18);
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
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 8;
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



// FUNCTION 141354970 FUN_141354970 body=159 status=ok
// SIG undefined FUN_141354970(void)

void FUN_141354970(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[0xf] != 0) {
        FMemory::Free();
      }
      if (plVar1[0xd] != 0) {
        FMemory::Free();
      }
      if (plVar1[8] != 0) {
        FMemory::Free();
      }
      if (plVar1[6] != 0) {
        FMemory::Free();
      }
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x14;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 141354a10 FUN_141354a10 body=202 status=ok
// SIG undefined FUN_141354a10(void)

void FUN_141354a10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FBindingList::~FBindingList(param_1 + 600);
  plVar4 = *(longlong **)(param_1 + 0x248);
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
  FUN_140e9c100(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  FUN_141354970(param_1 + 200);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>::
  ~TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>(param_1 + 0x60);
  return;
}



// FUNCTION 141354ae0 FUN_141354ae0 body=115 status=ok
// SIG undefined FUN_141354ae0(void)

void FUN_141354ae0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 141354b60 FUN_141354b60 body=103 status=ok
// SIG undefined FUN_141354b60(void)

void FUN_141354b60(longlong *param_1)

{
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141354bd0 FUN_141354bd0 body=528 status=ok
// SIG undefined FUN_141354bd0(void)

void FUN_141354bd0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xf70) != 0) {
    FMemory::Free();
  }
  FUN_1416f8340(*(undefined4 *)(param_1 + 0xf68));
  plVar4 = *(longlong **)(param_1 + 0xf60);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf18));
  plVar4 = *(longlong **)(param_1 + 0xf00);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0xee8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0xed0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe58));
  if (*(longlong *)(param_1 + 0xe48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe38) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0xde8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0xdd0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FUN_140ed0430(param_1 + 0xc18);
  FUN_140ed0430(param_1 + 0xa80);
  TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>::
  ~TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>(param_1 + 0xa30);
  FUN_141354830(param_1 + 0xa00);
  if (*(longlong *)(param_1 + 0x9a8) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x980);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  FUN_1413548c0(param_1 + 0x948);
  FUN_141354a10(param_1 + 0x6b0);
  *(undefined ***)(param_1 + 0x6a8) = &PTR_FUN_143fcb7e0;
  FUN_140e9c5f0(param_1);
  return;
}



// FUNCTION 141354de0 FUN_141354de0 body=448 status=ok
// SIG undefined FUN_141354de0(void)

void FUN_141354de0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x248) != '\0') {
    *(undefined1 *)(param_1 + 0x248) = 0;
    if (*(longlong *)(param_1 + 0x238) != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x220) != '\0') {
    *(undefined1 *)(param_1 + 0x220) = 0;
    if (*(longlong *)(param_1 + 0x210) != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x1f8) != '\0') {
    *(undefined1 *)(param_1 + 0x1f8) = 0;
    if (*(longlong *)(param_1 + 0x1e8) != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x1d4) != '\0') {
    *(undefined1 *)(param_1 + 0x1d4) = 0;
  }
  if (*(char *)(param_1 + 0x1c8) != '\0') {
    *(undefined1 *)(param_1 + 0x1c8) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x1b8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x1a8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x198);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x180);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar4 = *(longlong **)(param_1 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 141354fa0 FUN_141354fa0 body=387 status=ok
// SIG undefined FUN_141354fa0(void)

void FUN_141354fa0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 800);
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
  plVar4 = *(longlong **)(param_1 + 0x310);
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
  plVar4 = *(longlong **)(param_1 + 0x300);
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
  plVar4 = *(longlong **)(param_1 + 0x2f0);
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
  plVar4 = *(longlong **)(param_1 + 0x2e0);
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
  plVar4 = *(longlong **)(param_1 + 0x2d0);
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
  FUN_141320cb0(param_1);
  return;
}



// FUNCTION 141355130 FUN_141355130 body=179 status=ok
// SIG undefined FUN_141355130(void)

void FUN_141355130(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0xd8);
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
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1413551f0 operator= body=114 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FRuntimeMeshCollisionSourceSectionInfo,TSizedDefaultAllocator<32>_>::operator=
          (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
  }
  return param_1;
}



// FUNCTION 141355270 FUN_141355270 body=560 status=ok
// SIG undefined FUN_141355270(void)

longlong * FUN_141355270(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 local_48;
  undefined1 local_40 [24];
  
  if (param_1 != param_2) {
    plVar3 = (longlong *)*param_1;
    for (iVar5 = (int)param_1[1]; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (plVar3[0xf] != 0) {
        FMemory::Free();
      }
      if (plVar3[0xd] != 0) {
        FMemory::Free();
      }
      if (plVar3[8] != 0) {
        FMemory::Free();
      }
      if (plVar3[6] != 0) {
        FMemory::Free();
      }
      if (plVar3[2] != 0) {
        FMemory::Free();
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0x14;
    }
    iVar5 = (int)param_2[1];
    lVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar5;
    if ((iVar5 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_141356800(param_1,iVar5);
      lVar7 = *param_1;
      if (iVar5 != 0) {
        puVar6 = (undefined8 *)(lVar7 + 0x70);
        puVar4 = (undefined4 *)(lVar2 + 0x54);
        do {
          FString::FString(lVar7,puVar4 + -0x15);
          FString::FString(puVar6 + -0xc,puVar4 + -0x11);
          puVar6[-10] = *(undefined8 *)(puVar4 + -0xd);
          puVar6[-9] = *(undefined8 *)(puVar4 + -0xb);
          FString::FString(puVar6 + -8,puVar4 + -9);
          FString::FString(puVar6 + -6,puVar4 + -5);
          puVar6[-1] = 0;
          *puVar6 = 0;
          *(undefined4 *)(puVar6 + -4) = 0xffffffff;
          *(undefined4 *)((longlong)puVar6 + -0x1c) = 0;
          puVar6[-2] = 0;
          *(undefined4 *)puVar6 = 0;
          if (0x7fffffff < *(uint *)((longlong)puVar6 + 4)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar6 + -1,0);
          }
          if ((undefined2 *)puVar6[-1] != (undefined2 *)0x0) {
            *(undefined2 *)puVar6[-1] = 0;
          }
          *(undefined4 *)(puVar6 + -3) = 0;
          *(undefined4 *)(puVar6 + -4) = puVar4[-1];
          *(undefined4 *)((longlong)puVar6 + -0x1c) = *puVar4;
          *(undefined4 *)(puVar6 + -3) = puVar4[1];
          local_48 = *(undefined8 *)(puVar4 + 3);
          FString::FString(local_40,puVar4 + 5);
          FSoftObjectPath::operator=(puVar6 + -2,&local_48);
          FString::FString(puVar6 + 1,puVar4 + 9);
          lVar7 = lVar7 + 0xa0;
          puVar6[3] = *(undefined8 *)(puVar4 + 0xd);
          *(undefined4 *)(puVar6 + 4) = puVar4[0xf];
          *(undefined1 *)((longlong)puVar6 + 0x24) = *(undefined1 *)(puVar4 + 0x10);
          *(undefined1 *)((longlong)puVar6 + 0x25) = *(undefined1 *)((longlong)puVar4 + 0x41);
          puVar1 = puVar4 + 0x11;
          puVar4 = puVar4 + 0x28;
          *(undefined4 *)(puVar6 + 5) = *puVar1;
          puVar6 = puVar6 + 0x14;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1413554a0 FUN_1413554a0 body=1402 status=ok
// SIG undefined FUN_1413554a0(void)

undefined8 * FUN_1413554a0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)((longlong)param_2 + 0x39);
  *(undefined1 *)((longlong)param_1 + 0x3a) = *(undefined1 *)((longlong)param_2 + 0x3a);
  uVar12 = *(undefined8 *)((longlong)param_2 + 0x44);
  plVar1 = param_1 + 0xc;
  *(undefined8 *)((longlong)param_1 + 0x3c) = *(undefined8 *)((longlong)param_2 + 0x3c);
  *(undefined8 *)((longlong)param_1 + 0x44) = uVar12;
  uVar9 = *(undefined4 *)(param_2 + 10);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar11 = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar10;
  *(undefined4 *)(param_1 + 0xb) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  if (plVar1 != param_2 + 0xc) {
    iVar14 = *(int *)(param_1 + 0xd);
    if (iVar14 != 0) {
      plVar15 = (longlong *)(*plVar1 + 8);
      do {
        plVar7 = (longlong *)*plVar15;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar7 + 1;
          lVar13 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar3 = (int *)((longlong)plVar7 + 0xc);
            iVar6 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        plVar15 = plVar15 + 4;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    iVar14 = *(int *)(param_2 + 0xd);
    lVar13 = param_2[0xc];
    *(int *)(param_1 + 0xd) = iVar14;
    if ((iVar14 == 0) && (*(int *)((longlong)param_1 + 0x6c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(plVar1,iVar14);
      lVar16 = *plVar1;
      for (; iVar14 != 0; iVar14 = iVar14 + -1) {
        FText::FText(lVar16,lVar13);
        puVar4 = (undefined1 *)(lVar13 + 0x18);
        lVar13 = lVar13 + 0x20;
        *(undefined1 *)(lVar16 + 0x18) = *puVar4;
        lVar16 = lVar16 + 0x20;
      }
    }
  }
  puVar5 = param_1 + 0xe;
  if (puVar5 != param_2 + 0xe) {
    iVar14 = *(int *)(param_2 + 0xf);
    pvVar8 = (void *)param_2[0xe];
    *(int *)(param_1 + 0xf) = iVar14;
    if ((iVar14 == 0) && (*(int *)((longlong)param_1 + 0x7c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar5,iVar14);
      _guard_xfg_dispatch_icall_nop((void *)*puVar5,pvVar8,(longlong)iVar14 * 0x18);
    }
  }
  TArray<FRuntimeMeshCollisionSourceSectionInfo,TSizedDefaultAllocator<32>_>::operator=
            (param_1 + 0x10,param_2 + 0x10);
  TArray<FRuntimeMeshCollisionSourceSectionInfo,TSizedDefaultAllocator<32>_>::operator=
            (param_1 + 0x12,param_2 + 0x12);
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  FUN_141355270(param_1 + 0x19,param_2 + 0x19);
  puVar5 = param_1 + 0x1b;
  if (puVar5 != param_2 + 0x1b) {
    iVar14 = *(int *)(param_2 + 0x1c);
    pvVar8 = (void *)param_2[0x1b];
    *(int *)(param_1 + 0x1c) = iVar14;
    if ((iVar14 == 0) && (*(int *)((longlong)param_1 + 0xe4) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar5,iVar14);
      _guard_xfg_dispatch_icall_nop((void *)*puVar5,pvVar8,(longlong)iVar14 << 3);
    }
  }
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  *(undefined8 *)((longlong)param_1 + 0x10c) = *(undefined8 *)((longlong)param_2 + 0x10c);
  *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)((longlong)param_2 + 0x114);
  FString::operator=(param_1 + 0x23,param_2 + 0x23);
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
  *(undefined1 *)((longlong)param_1 + 0x129) = *(undefined1 *)((longlong)param_2 + 0x129);
  *(undefined1 *)((longlong)param_1 + 0x12a) = *(undefined1 *)((longlong)param_2 + 0x12a);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)((longlong)param_2 + 300);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
  FString::operator=(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
  *(undefined1 *)((longlong)param_1 + 0x151) = *(undefined1 *)((longlong)param_2 + 0x151);
  *(undefined1 *)((longlong)param_1 + 0x152) = *(undefined1 *)((longlong)param_2 + 0x152);
  *(undefined1 *)((longlong)param_1 + 0x153) = *(undefined1 *)((longlong)param_2 + 0x153);
  FString::operator=(param_1 + 0x2b,param_2 + 0x2b);
  FString::operator=(param_1 + 0x2d,param_2 + 0x2d);
  FString::operator=(param_1 + 0x2f,param_2 + 0x2f);
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x31);
  *(undefined1 *)((longlong)param_1 + 0x189) = *(undefined1 *)((longlong)param_2 + 0x189);
  *(undefined1 *)((longlong)param_1 + 0x18a) = *(undefined1 *)((longlong)param_2 + 0x18a);
  *(undefined8 *)((longlong)param_1 + 0x18c) = *(undefined8 *)((longlong)param_2 + 0x18c);
  *(undefined1 *)((longlong)param_1 + 0x194) = *(undefined1 *)((longlong)param_2 + 0x194);
  *(undefined1 *)((longlong)param_1 + 0x195) = *(undefined1 *)((longlong)param_2 + 0x195);
  *(undefined1 *)((longlong)param_1 + 0x196) = *(undefined1 *)((longlong)param_2 + 0x196);
  *(undefined1 *)((longlong)param_1 + 0x197) = *(undefined1 *)((longlong)param_2 + 0x197);
  *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(param_2 + 0x33);
  *(undefined1 *)((longlong)param_1 + 0x199) = *(undefined1 *)((longlong)param_2 + 0x199);
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)(param_2 + 0x36);
  *(undefined1 *)((longlong)param_1 + 0x1b1) = *(undefined1 *)((longlong)param_2 + 0x1b1);
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_2 + 0x37);
  *(undefined4 *)((longlong)param_1 + 0x1bc) = *(undefined4 *)((longlong)param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)((longlong)param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(param_2 + 0x39);
  FString::operator=(param_1 + 0x3a,param_2 + 0x3a);
  FString::operator=(param_1 + 0x3c,param_2 + 0x3c);
  param_1[0x3e] = param_2[0x3e];
  FText::operator=(param_1 + 0x3f,param_2 + 0x3f);
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 0x42);
  *(undefined4 *)((longlong)param_1 + 0x214) = *(undefined4 *)((longlong)param_2 + 0x214);
  *(undefined4 *)(param_1 + 0x43) = *(undefined4 *)(param_2 + 0x43);
  *(undefined4 *)((longlong)param_1 + 0x21c) = *(undefined4 *)((longlong)param_2 + 0x21c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)((longlong)param_1 + 0x224) = *(undefined4 *)((longlong)param_2 + 0x224);
  *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(param_2 + 0x45);
  *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)(param_2 + 0x46);
  *(undefined4 *)((longlong)param_1 + 0x234) = *(undefined4 *)((longlong)param_2 + 0x234);
  *(undefined4 *)(param_1 + 0x47) = *(undefined4 *)(param_2 + 0x47);
  *(undefined4 *)((longlong)param_1 + 0x23c) = *(undefined4 *)((longlong)param_2 + 0x23c);
  FText::operator=(param_1 + 0x48,param_2 + 0x48);
  FUN_141355a20(param_1 + 0x4b,param_2 + 0x4b);
  param_1[0x4f] = param_2[0x4f];
  param_1[0x50] = param_2[0x50];
  *(undefined4 *)(param_1 + 0x51) = *(undefined4 *)(param_2 + 0x51);
  *(undefined4 *)((longlong)param_1 + 0x28c) = *(undefined4 *)((longlong)param_2 + 0x28c);
  *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_2 + 0x52);
  *(undefined4 *)((longlong)param_1 + 0x294) = *(undefined4 *)((longlong)param_2 + 0x294);
  return param_1;
}



// FUNCTION 141355a20 FUN_141355a20 body=428 status=ok
// SIG undefined FUN_141355a20(void)

longlong * FUN_141355a20(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  
  if (param_1 != param_2) {
    iVar6 = (int)param_1[1];
    if (iVar6 != 0) {
      lVar2 = *param_1 + 8;
      do {
        FUN_1410232c0(lVar2);
        lVar2 = lVar2 + 0x18;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (int)param_2[1];
    lVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,iVar6);
      plVar9 = (longlong *)*param_1;
      if (iVar6 != 0) {
        plVar3 = (longlong *)(lVar2 + 8);
        do {
          *plVar9 = plVar3[-1];
          plVar9[1] = 0;
          iVar5 = (int)plVar3[1];
          lVar2 = *plVar3;
          *(int *)(plVar9 + 2) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)((longlong)plVar9 + 0x14) = 0;
          }
          else {
            TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeForCopy(plVar9 + 1,iVar5,0);
            lVar7 = plVar9[1];
            do {
              FUN_140f9f080(lVar7,lVar2);
              lVar7 = lVar7 + 0xd0;
              lVar2 = lVar2 + 0xd0;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          plVar9 = plVar9 + 3;
          plVar3 = plVar3 + 3;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  plVar9 = param_1 + 2;
  if (plVar9 != param_2 + 2) {
    iVar6 = (int)param_1[3];
    if (iVar6 != 0) {
      plVar3 = (longlong *)(*plVar9 + 8);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (int)param_2[3];
    lVar2 = param_2[2];
    *(int *)(param_1 + 3) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0x1c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(plVar9,iVar6);
      puVar8 = (undefined8 *)*plVar9;
      if (iVar6 != 0) {
        puVar4 = (undefined8 *)(lVar2 + 0x18);
        do {
          *puVar8 = puVar4[-3];
          FString::FString(puVar8 + 1,puVar4 + -2);
          uVar1 = *puVar4;
          puVar4 = puVar4 + 4;
          puVar8[3] = uVar1;
          puVar8 = puVar8 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 141355c10 FUN_141355c10 body=125 status=ok
// SIG undefined FUN_141355c10(void)

longlong FUN_141355c10(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x250);
  }
  return param_1;
}



// FUNCTION 141355c90 FUN_141355c90 body=198 status=ok
// SIG undefined FUN_141355c90(void)

longlong FUN_141355c90(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x740);
  lVar1 = *(longlong *)(param_1 + 0x738);
  if (iVar2 != 0) {
    do {
      FUN_1404bf980(lVar1);
      lVar1 = lVar1 + 0x38;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x738);
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  if (*(longlong *)(param_1 + 0x728) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x708) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x638) = &PTR_FUN_1441b3948;
  *(undefined ***)(param_1 + 0x630) = &PTR_FUN_1444d6628;
  FUN_140f5a560(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8d0);
  }
  return param_1;
}



// FUNCTION 141355d60 FUN_141355d60 body=313 status=ok
// SIG undefined FUN_141355d60(void)

longlong FUN_141355d60(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1f0);
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
  plVar3 = *(longlong **)(param_1 + 0x1d8);
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
  plVar3 = *(longlong **)(param_1 + 0x1b8);
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
  plVar3 = *(longlong **)(param_1 + 0x1a0);
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
  plVar3 = *(longlong **)(param_1 + 0x188);
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
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 141355ea0 FUN_141355ea0 body=52 status=ok
// SIG undefined FUN_141355ea0(void)

undefined8 FUN_141355ea0(undefined8 param_1,ulonglong param_2)

{
  FUN_141354bd0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xfc0);
  }
  return param_1;
}



// FUNCTION 141355ee0 FUN_141355ee0 body=52 status=ok
// SIG undefined FUN_141355ee0(void)

undefined8 FUN_141355ee0(undefined8 param_1,ulonglong param_2)

{
  FUN_141354de0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 141355f20 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FBuildTileConesCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141355130();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 141355f60 FUN_141355f60 body=181 status=ok
// SIG undefined FUN_141355f60(void)

longlong FUN_141355f60(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x178);
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
  FUN_140ce1dc0(param_1 + 0xa0);
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 141356020 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 ADungeonDebug::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141354fa0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 141356060 FUN_141356060 body=38 status=ok
// SIG undefined FUN_141356060(void)

void FUN_141356060(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x298);
  FUN_141354060(param_2);
  return;
}



// FUNCTION 141356090 Construct body=38 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FNiagaraSimCacheEmitterFrame>::Construct
               (undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0xd8);
  FUN_141354260(param_2);
  return;
}



// FUNCTION 141356110 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FWorldContext>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1413554a0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x298;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141356160 FUN_141356160 body=486 status=ok
// SIG undefined FUN_141356160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141356160(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  undefined1 local_40 [16];
  longlong local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  uVar7 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (param_4 != 0) {
    plVar8 = (longlong *)(param_3 + 0x28);
    local_20 = uVar7;
    do {
      *param_2 = plVar8[-5];
      plVar1 = param_2 + 4;
      param_2[1] = plVar8[-4];
      param_2[2] = plVar8[-3];
      plVar5 = (longlong *)*plVar8;
      *(int *)(param_2 + 3) = (int)plVar8[-2];
      lVar6 = plVar8[-1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
      }
      local_58 = lVar6;
      plStack_50 = plVar5;
      if (&local_58 != plVar1) {
        local_58 = *plVar1;
        plStack_50 = (longlong *)param_2[5];
        *plVar1 = lVar6;
        param_2[5] = (longlong)plVar5;
        local_30 = lVar6;
        plStack_28 = plVar5;
      }
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plStack_50 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
      *(char *)(param_2 + 6) = (char)plVar8[1];
      FString::operator=(param_2 + 7,plVar8 + 2);
      FString::operator=(param_2 + 9,plVar8 + 4);
      param_2[0xb] = plVar8[6];
      param_2[0xc] = plVar8[7];
      FString::operator=(param_2 + 0xd,plVar8 + 8);
      FString::operator=(param_2 + 0xf,plVar8 + 10);
      *(int *)(param_2 + 0x11) = (int)plVar8[0xc];
      *(undefined4 *)((longlong)param_2 + 0x8c) = *(undefined4 *)((longlong)plVar8 + 100);
      *(int *)(param_2 + 0x12) = (int)plVar8[0xd];
      local_48 = plVar8[0xe];
      FString::FString(local_40,plVar8 + 0xf);
      FSoftObjectPath::operator=(param_2 + 0x13,&local_48);
      FString::operator=(param_2 + 0x16,plVar8 + 0x11);
      param_2[0x18] = plVar8[0x13];
      *(int *)(param_2 + 0x19) = (int)plVar8[0x14];
      *(undefined1 *)((longlong)param_2 + 0xcc) = *(undefined1 *)((longlong)plVar8 + 0xa4);
      *(undefined1 *)((longlong)param_2 + 0xcd) = *(undefined1 *)((longlong)plVar8 + 0xa5);
      puVar3 = (uint *)(plVar8 + 0x15);
      uVar7 = (ulonglong)*puVar3;
      plVar8 = plVar8 + 0x1b;
      *(uint *)(param_2 + 0x1a) = *puVar3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x1b;
    } while (param_4 != 0);
  }
  return CONCAT71((int7)(uVar7 >> 8),1);
}



// FUNCTION 1413563a0 FUN_1413563a0 body=151 status=ok
// SIG undefined FUN_1413563a0(void)

undefined8 FUN_1413563a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 8);
    do {
      puVar1[-2] = *(undefined4 *)(param_3 + -8 + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      local_28 = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      FString::FString(local_20,param_3 + 0x10 + (longlong)puVar1);
      FSoftObjectPath::operator=(puVar1 + 2,&local_28);
      FText::operator=(puVar1 + 8,param_3 + 0x20 + (longlong)puVar1);
      puVar1 = puVar1 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141356450 FUN_141356450 body=70 status=ok
// SIG undefined FUN_141356450(void)

void FUN_141356450(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_141354b60(param_2 + 0x38);
  plVar3 = *(longlong **)(param_2 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014135648c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 1413564b0 FUN_1413564b0 body=55 status=ok
// SIG undefined FUN_1413564b0(void)

void FUN_1413564b0(void)

{
  undefined8 uVar1;
  
  if (DAT_146883070 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883070 = GetStaticEnum(FUN_141356c10,uVar1,L"EGFxInWorldIconClampUpdate");
  }
  return;
}



// FUNCTION 1413564f0 FUN_1413564f0 body=55 status=ok
// SIG undefined FUN_1413564f0(void)

void FUN_1413564f0(void)

{
  undefined8 uVar1;
  
  if (DAT_146883080 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883080 = GetStaticEnum(FUN_141356c40,uVar1,L"EGFxInventoryMenuBackpackSize");
  }
  return;
}



// FUNCTION 141356530 FUN_141356530 body=55 status=ok
// SIG undefined FUN_141356530(void)

void FUN_141356530(void)

{
  undefined8 uVar1;
  
  if (DAT_146883088 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883088 = GetStaticEnum(FUN_141356c70,uVar1,L"EGFxInventoryMenuFocusSide");
  }
  return;
}



// FUNCTION 141356570 FUN_141356570 body=55 status=ok
// SIG undefined FUN_141356570(void)

void FUN_141356570(void)

{
  undefined8 uVar1;
  
  if (DAT_146883078 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883078 = GetStaticEnum(FUN_141356ca0,uVar1,L"EInWorldIconRange");
  }
  return;
}



// FUNCTION 1413565b0 FUN_1413565b0 body=162 status=ok
// SIG undefined FUN_1413565b0(void)

longlong FUN_1413565b0(void)

{
  if (DAT_1468834d8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GFxInventoryItemWidget",&DAT_1468834d8,FUN_140447710,0x6d0,
                  0x10000008,0,L"Engine",&LAB_141353de0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_141324a80,&LAB_140447700,0);
  }
  return DAT_1468834d8;
}



// FUNCTION 141356660 FUN_141356660 body=6 status=ok
// SIG undefined FUN_141356660(void)

undefined8 FUN_141356660(void)

{
  return 0x28fe3b6d;
}



// FUNCTION 141356670 FUN_141356670 body=6 status=ok
// SIG undefined FUN_141356670(void)

undefined8 FUN_141356670(void)

{
  return 0xd5b5a874;
}



// FUNCTION 141356680 FUN_141356680 body=6 status=ok
// SIG undefined FUN_141356680(void)

undefined8 FUN_141356680(void)

{
  return 0x564dc9ed;
}



// FUNCTION 141356690 FUN_141356690 body=6 status=ok
// SIG undefined FUN_141356690(void)

undefined8 FUN_141356690(void)

{
  return 0x491dd32f;
}



// FUNCTION 141356740 FUN_141356740 body=61 status=ok
// SIG undefined FUN_141356740(void)

void FUN_141356740(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468834a8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 141356780 FUN_141356780 body=61 status=ok
// SIG undefined FUN_141356780(void)

void FUN_141356780(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468834b0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1413567c0 FUN_1413567c0 body=60 status=ok
// SIG undefined FUN_1413567c0(void)

void FUN_1413567c0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [6];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468834a0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 141356800 FUN_141356800 body=132 status=ok
// SIG undefined FUN_141356800(void)

void FUN_141356800(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xa0,0);
    iVar3 = (int)(uVar1 / 0xa0);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xa0,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1413568a0 thunk_FUN_1413a4060 body=5 status=ok
// SIG undefined thunk_FUN_1413a4060(void)

void thunk_FUN_1413a4060(void)

{
  FUN_1413a4060();
  return;
}



// FUNCTION 1413568b0 FUN_1413568b0 body=34 status=ok
// SIG undefined FUN_1413568b0(void)

void FUN_1413568b0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141352c60();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetIconData_1448a84a0,0xf);
  return;
}



// FUNCTION 1413568e0 FUN_1413568e0 body=34 status=ok
// SIG undefined FUN_1413568e0(void)

void FUN_1413568e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141352bb0();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_AddNewNameplateForPlayerState_1448a8be0,7);
  return;
}



// FUNCTION 141356910 FUN_141356910 body=34 status=ok
// SIG undefined FUN_141356910(void)

void FUN_141356910(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141353250();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_OnBackpackItemCardElementalUpdat_1448a7e80,0x19);
  return;
}



// FUNCTION 141356940 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FWorldContext::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146883638 == 0) {
    uVar1 = FUN_141356660();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883638 = GetStaticStruct(FUN_141356cd0,uVar2,L"GFxInventoryMenuConfig",0x298,uVar1);
  }
  return;
}



// FUNCTION 1413569a0 FUN_1413569a0 body=82 status=ok
// SIG undefined FUN_1413569a0(void)

void FUN_1413569a0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146883500 == 0) {
    uVar1 = FUN_141356670();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883500 = GetStaticStruct(FUN_141356d00,uVar2,L"GFxInventoryMenuEquipToSlot",0xd8,uVar1);
  }
  return;
}



// FUNCTION 141356a00 FUN_141356a00 body=82 status=ok
// SIG undefined FUN_141356a00(void)

void FUN_141356a00(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146883510 == 0) {
    uVar1 = FUN_141356680();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146883510 = GetStaticStruct(FUN_141356d30,uVar2,L"GFxInventoryMenuSwapItem",0x14,uVar1);
  }
  return;
}



// FUNCTION 141356a60 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468834f0 == 0) {
    uVar1 = FUN_141356690();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468834f0 =
         GetStaticStruct(FUN_141356d60,uVar2,L"GFxInventoryMenuUnlockLookupItem",0x40,uVar1);
  }
  return;
}



// FUNCTION 141356ac0 FUN_141356ac0 body=47 status=ok
// SIG undefined FUN_141356ac0(void)

longlong FUN_141356ac0(void)

{
  if (DAT_1468834c0 == 0) {
    FUN_141786440(&DAT_1468834c0,&PTR_FUN_1448a3720);
  }
  return DAT_1468834c0;
}



// FUNCTION 141356af0 FUN_141356af0 body=47 status=ok
// SIG undefined FUN_141356af0(void)

longlong FUN_141356af0(void)

{
  if (DAT_1468834d0 == 0) {
    FUN_141786440(&DAT_1468834d0,&PTR_LAB_1448a59d0);
  }
  return DAT_1468834d0;
}



// FUNCTION 141356b20 FUN_141356b20 body=47 status=ok
// SIG undefined FUN_141356b20(void)

longlong FUN_141356b20(void)

{
  if (DAT_146883520 == 0) {
    FUN_141786440(&DAT_146883520,&PTR_FUN_1448a61f0);
  }
  return DAT_146883520;
}



// FUNCTION 141356b50 FUN_141356b50 body=47 status=ok
// SIG undefined FUN_141356b50(void)

longlong FUN_141356b50(void)

{
  if (DAT_146883530 == 0) {
    FUN_141786440(&DAT_146883530,&PTR_FUN_14489fce0);
  }
  return DAT_146883530;
}



// FUNCTION 141356b80 FUN_141356b80 body=47 status=ok
// SIG undefined FUN_141356b80(void)

longlong FUN_141356b80(void)

{
  if (DAT_146883540 == 0) {
    FUN_141786440(&DAT_146883540,&PTR_FUN_14489fe30);
  }
  return DAT_146883540;
}



// FUNCTION 141356bb0 FUN_141356bb0 body=47 status=ok
// SIG undefined FUN_141356bb0(void)

longlong FUN_141356bb0(void)

{
  if (DAT_146883628 == 0) {
    FUN_141786440(&DAT_146883628,&PTR_GetPrivateStaticClass_1448a1800);
  }
  return DAT_146883628;
}



// FUNCTION 141356be0 FUN_141356be0 body=47 status=ok
// SIG undefined FUN_141356be0(void)

longlong FUN_141356be0(void)

{
  if (DAT_146883648 == 0) {
    FUN_141786a30(&DAT_146883648,&PTR_Z_Construct_UPackage__Script_MechWarrior_14631c4c0);
  }
  return DAT_146883648;
}



// FUNCTION 141356c10 FUN_141356c10 body=47 status=ok
// SIG undefined FUN_141356c10(void)

longlong FUN_141356c10(void)

{
  if (DAT_146883650 == 0) {
    FUN_1417866a0(&DAT_146883650,&PTR_Z_Construct_UPackage__Script_MechWarrior_14631db40);
  }
  return DAT_146883650;
}



// FUNCTION 141356c40 FUN_141356c40 body=47 status=ok
// SIG undefined FUN_141356c40(void)

longlong FUN_141356c40(void)

{
  if (DAT_1468834e0 == 0) {
    FUN_1417866a0(&DAT_1468834e0,&PTR_Z_Construct_UPackage__Script_MechWarrior_14631daa0);
  }
  return DAT_1468834e0;
}



// FUNCTION 141356c70 FUN_141356c70 body=47 status=ok
// SIG undefined FUN_141356c70(void)

longlong FUN_141356c70(void)

{
  if (DAT_1468834e8 == 0) {
    FUN_1417866a0(&DAT_1468834e8,&PTR_Z_Construct_UPackage__Script_MechWarrior_14631daf0);
  }
  return DAT_1468834e8;
}



// FUNCTION 141356ca0 FUN_141356ca0 body=47 status=ok
// SIG undefined FUN_141356ca0(void)

longlong FUN_141356ca0(void)

{
  if (DAT_146883658 == 0) {
    FUN_1417866a0(&DAT_146883658,&PTR_Z_Construct_UPackage__Script_MechWarrior_14631db90);
  }
  return DAT_146883658;
}



// FUNCTION 141356cd0 FUN_141356cd0 body=47 status=ok
// SIG undefined FUN_141356cd0(void)

longlong FUN_141356cd0(void)

{
  if (DAT_146883640 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146883640,&PTR_Z_Construct_UPackage__Script_MechWarrior_14631c430);
  }
  return DAT_146883640;
}



// FUNCTION 141356d00 FUN_141356d00 body=47 status=ok
// SIG undefined FUN_141356d00(void)

longlong FUN_141356d00(void)

{
  if (DAT_146883508 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146883508,&PTR_Z_Construct_UPackage__Script_MechWarrior_146319620);
  }
  return DAT_146883508;
}



// FUNCTION 141356d30 FUN_141356d30 body=47 status=ok
// SIG undefined FUN_141356d30(void)

longlong FUN_141356d30(void)

{
  if (DAT_146883518 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146883518,&PTR_Z_Construct_UPackage__Script_MechWarrior_146319770);
  }
  return DAT_146883518;
}



// FUNCTION 141356d60 FUN_141356d60 body=47 status=ok
// SIG undefined FUN_141356d60(void)

longlong FUN_141356d60(void)

{
  if (DAT_1468834f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468834f8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146319480);
  }
  return DAT_1468834f8;
}



// FUNCTION 141356d90 FUN_141356d90 body=446 status=ok
// SIG undefined FUN_141356d90(void)

void FUN_141356d90(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140f5a170(puVar1,param_1);
    *puVar1 = &PTR_FUN_1448a8590;
    puVar1[0xc6] = &PTR_LAB_1448a8b58;
    puVar1[199] = &PTR_LAB_1448a8b78;
    puVar1[200] = 0;
    *(undefined1 *)(puVar1 + 0xc9) = 0;
    puVar1[0xca] = 0;
    puVar1[0xcb] = 0;
    *(undefined4 *)(puVar1 + 0xcc) = 0x446d8000;
    *(undefined4 *)((longlong)puVar1 + 0x664) = 0xc3af0000;
    *(undefined4 *)(puVar1 + 0xcd) = 0x43d70000;
    *(undefined4 *)((longlong)puVar1 + 0x66c) = 0x42c80000;
    puVar1[0xce] = 0x3dcccccd;
    puVar1[0xcf] = 0;
    puVar1[0xd0] = 0;
    *(undefined4 *)(puVar1 + 0xd1) = 0x44f00000;
    *(undefined4 *)((longlong)puVar1 + 0x68c) = 0x44870000;
    *(undefined4 *)(puVar1 + 0xd2) = 0xc4700000;
    *(undefined4 *)((longlong)puVar1 + 0x694) = 0xc4070000;
    puVar1[0xd3] = 0;
    puVar1[0xd4] = 0;
    puVar1[0xd5] = 0;
    puVar1[0xd6] = 0;
    puVar1[0xd7] = 0;
    puVar1[0xd8] = 0;
    puVar1[0xd9] = 0;
    puVar1[0xda] = 0;
    puVar1[0xdb] = 0;
    *(undefined2 *)((longlong)puVar1 + 0x6ec) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x6ee) = 0;
    *(undefined4 *)(puVar1 + 0xde) = 0x49742400;
    *(undefined4 *)((longlong)puVar1 + 0x6f4) = 0xc4700000;
    *(undefined4 *)(puVar1 + 0xdf) = 0xc4070000;
    *(undefined4 *)((longlong)puVar1 + 0x6fc) = 0xc4700000;
    *(undefined4 *)(puVar1 + 0xe0) = 0xc4070000;
    *(undefined4 *)((longlong)puVar1 + 0x704) = 0x3e800000;
    puVar1[0xe1] = 0;
    puVar1[0xe2] = 0;
    puVar1[0xe3] = 0;
    puVar1[0xe4] = 0;
    puVar1[0xe5] = 0;
    puVar1[0xe6] = 0;
    puVar1[0xe7] = 0;
    puVar1[0xe8] = 0;
    puVar1[0xe9] = 0;
    *(undefined1 *)(puVar1 + 0xea) = 0;
    *(undefined4 *)(puVar1 + 0x10c) = 0;
    puVar1[0x116] = 0;
    puVar1[0x117] = 0;
    puVar1[0x118] = 0;
    puVar1[0x119] = 0;
  }
  return;
}



// FUNCTION 141356f70 FUN_141356f70 body=128 status=ok
// SIG undefined FUN_141356f70(void)

void FUN_141356f70(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140f61720(param_1,local_res10);
  return;
}



// FUNCTION 141356ff0 FUN_141356ff0 body=44 status=ok
// SIG undefined FUN_141356ff0(void)

void FUN_141356ff0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1405e9990();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141357020 FUN_141357020 body=44 status=ok
// SIG undefined FUN_141357020(void)

void FUN_141357020(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140f67a80();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141357050 FUN_141357050 body=64 status=ok
// SIG undefined FUN_141357050(void)

void FUN_141357050(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x2b0))(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 141357090 FUN_141357090 body=44 status=ok
// SIG undefined FUN_141357090(void)

void FUN_141357090(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140f68160();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413570c0 FUN_1413570c0 body=60 status=ok
// SIG undefined FUN_1413570c0(void)

void FUN_1413570c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_140f681b0(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}


