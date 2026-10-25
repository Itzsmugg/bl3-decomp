// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1406ffbe0 FUN_1406ffbe0 body=53 status=ok
// SIG undefined FUN_1406ffbe0(void)

longlong FUN_1406ffbe0(longlong param_1)

{
  FUN_1406d4b30(param_1,0);
  FUN_142de2eb0(param_1 + 0x90);
  *(byte *)(param_1 + 0x91) = *(byte *)(param_1 + 0x91) | 0x40;
  *(undefined2 *)(param_1 + 0x110) = 0x500;
  return param_1;
}



// FUNCTION 1406ffc20 FUN_1406ffc20 body=241 status=ok
// SIG undefined FUN_1406ffc20(void)

longlong FUN_1406ffc20(longlong param_1)

{
  FUN_142de2eb0();
  FUN_142de2d20(param_1 + 0x88,0x40000000,0);
  *(undefined1 *)(param_1 + 0x108) = 0;
  FUN_142de2d20(param_1 + 0x110,0x40000000,0);
  *(undefined1 *)(param_1 + 400) = 0;
  FUN_142de2d20(param_1 + 0x198,0x40000000,0);
  *(undefined1 *)(param_1 + 0x218) = 0;
  FUN_142de2d20(param_1 + 0x220,0x40000000,0);
  *(undefined1 *)(param_1 + 0x2a0) = 0;
  FUN_142de2d20(param_1 + 0x2a8,0x40000000,0);
  *(undefined1 *)(param_1 + 0x328) = 0;
  FUN_142de2d20(param_1 + 0x330,0x40000000,0);
  *(undefined1 *)(param_1 + 0x3b0) = 0;
  FUN_142de2d20(param_1 + 0x3b8,0x40000000,0);
  *(undefined1 *)(param_1 + 0x438) = 0;
  FUN_142de2d20(param_1 + 0x440,0x40000000,0);
  *(undefined1 *)(param_1 + 0x4c0) = 0;
  return param_1;
}



// FUNCTION 1406ffd20 FUN_1406ffd20 body=333 status=ok
// SIG undefined FUN_1406ffd20(void)

undefined8 * FUN_1406ffd20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TargetActorInfo",1);
  *param_1 = *puVar1;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CoverSlot",1);
  param_1[2] = *puVar1;
  *(undefined2 *)(param_1 + 3) = 0xff00;
  *(undefined2 *)(param_1 + 4) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f400000;
  FUN_142de2eb0(param_1 + 6);
  FUN_142de2eb0(param_1 + 0x17);
  *(undefined1 *)((longlong)param_1 + 0x33) = 2;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x40200000;
  *(undefined4 *)(param_1 + 7) = 0x3f000000;
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | 0x40;
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)((longlong)param_1 + 0xb9) = *(undefined1 *)((longlong)param_1 + 0x31);
  *(undefined1 *)((longlong)param_1 + 0xba) = *(undefined1 *)((longlong)param_1 + 0x32);
  *(undefined1 *)((longlong)param_1 + 0xbb) = *(undefined1 *)((longlong)param_1 + 0x33);
  *(undefined8 *)((longlong)param_1 + 0xbc) = *(undefined8 *)((longlong)param_1 + 0x34);
  param_1[0x19] = param_1[8];
  param_1[0x1a] = param_1[9];
  param_1[0x1b] = param_1[10];
  param_1[0x1c] = param_1[0xb];
  param_1[0x1d] = param_1[0xc];
  param_1[0x1e] = param_1[0xd];
  param_1[0x1f] = param_1[0xe];
  param_1[0x20] = param_1[0xf];
  param_1[0x21] = param_1[0x10];
  param_1[0x22] = param_1[0x11];
  param_1[0x23] = param_1[0x12];
  param_1[0x24] = param_1[0x13];
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)((longlong)param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_1 + 0x15);
  return param_1;
}



// FUNCTION 1406ffe70 FUN_1406ffe70 body=177 status=ok
// SIG undefined FUN_1406ffe70(void)

longlong FUN_1406ffe70(longlong param_1)

{
  FUN_142de2eb0(param_1 + 8);
  FUN_142de2eb0(param_1 + 0x90);
  FUN_142de2eb0(param_1 + 0x118);
  FUN_142de2eb0(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0x44fa0000;
  FUN_14077f980(param_1);
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  FUN_142de2c00(param_1 + 0x248,0,2);
  FUN_142de2f30(param_1 + 0x2c8,1);
  FUN_142de2f30(param_1 + 0x348,1);
  *(undefined2 *)(param_1 + 0x3c8) = 0x101;
  return param_1;
}



// FUNCTION 1406fff30 FUN_1406fff30 body=277 status=ok
// SIG undefined FUN_1406fff30(void)

undefined8 * FUN_1406fff30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  param_1[0xc] = param_2[0xc];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined8 *)((longlong)param_1 + 0x6c) = *(undefined8 *)((longlong)param_2 + 0x6c);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  param_1[0x16] = param_2[0x16];
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  *(undefined1 *)((longlong)param_1 + 0xb9) = *(undefined1 *)((longlong)param_2 + 0xb9);
  *(undefined1 *)((longlong)param_1 + 0xba) = *(undefined1 *)((longlong)param_2 + 0xba);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0xc1) = *(undefined1 *)((longlong)param_2 + 0xc1);
  *(undefined1 *)((longlong)param_1 + 0xc2) = *(undefined1 *)((longlong)param_2 + 0xc2);
  return param_1;
}



// FUNCTION 140700050 FUN_140700050 body=66 status=ok
// SIG undefined FUN_140700050(void)

undefined8 * FUN_140700050(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UBlueprint::UBlueprint(param_1,uVar1);
  *param_1 = &PTR_FUN_14406a600;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  return param_1;
}



// FUNCTION 1407000a0 FUN_1407000a0 body=44 status=ok
// SIG undefined FUN_1407000a0(void)

undefined8 * FUN_1407000a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_1422e0db0(param_1,uVar1);
  *param_1 = &PTR_FUN_14406a898;
  return param_1;
}



// FUNCTION 1407000d0 FUN_1407000d0 body=543 status=ok
// SIG undefined FUN_1407000d0(void)

undefined8 * FUN_1407000d0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14178c940();
  FUN_142bd5d50(param_1,uVar2);
  *param_1 = &PTR_FUN_144066530;
  plVar1 = param_1 + 0x9a;
  param_1[5] = &PTR_LAB_144066990;
  param_1[0x2f] = &PTR_LAB_1440669c0;
  param_1[0x3b] = &PTR_LAB_1440669f0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  *plVar1 = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined2 *)(param_1 + 0xa1) = 0;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  if ((*(uint *)(param_1 + 1) >> 5 & 1) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146858bc8) {
      _Init_thread_header(&DAT_146858bc8);
      if (DAT_146858bc8 == -1) {
        DAT_146858bc0 = 0;
        DAT_146858bb0 = (longlong *)0x0;
        DAT_146858bb8 = 0;
        atexit((_func_5014 *)&LAB_143e41610);
        _Init_thread_footer(&DAT_146858bc8);
      }
    }
    param_1[0x9c] = param_1;
    param_1[0x9b] = &DAT_146858bb0;
    *plVar1 = (longlong)DAT_146858bb0;
    DAT_146858bb0 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfd;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) & 0xfd;
  return param_1;
}



// FUNCTION 1407002f0 FUN_1407002f0 body=116 status=ok
// SIG undefined FUN_1407002f0(void)

undefined8 * FUN_1407002f0(undefined8 *param_1)

{
  FUN_1406d50d0();
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *param_1 = &PTR_FUN_144064a08;
  param_1[5] = &PTR_LAB_144064df8;
  *(undefined1 *)((longlong)param_1 + 0x141) = 4;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 3;
  return param_1;
}



// FUNCTION 140700370 FUN_140700370 body=102 status=ok
// SIG undefined FUN_140700370(void)

undefined8 * FUN_140700370(undefined8 *param_1)

{
  FUN_1406d50d0();
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *param_1 = &PTR_FUN_144064628;
  param_1[5] = &PTR_LAB_1440649f0;
  *(undefined1 *)((longlong)param_1 + 0x141) = 4;
  *(undefined1 *)(param_1 + 0x2a) = 1;
  return param_1;
}



// FUNCTION 1407003e0 FUN_1407003e0 body=71 status=ok
// SIG undefined FUN_1407003e0(void)

undefined8 * FUN_1407003e0(undefined8 *param_1)

{
  FUN_1407002f0();
  *(undefined4 *)(param_1 + 0x2c) = 0x3f000000;
  *param_1 = &PTR_FUN_144065210;
  param_1[5] = &PTR_LAB_144065618;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  return param_1;
}



// FUNCTION 140700430 FUN_140700430 body=71 status=ok
// SIG undefined FUN_140700430(void)

undefined8 * FUN_140700430(undefined8 *param_1)

{
  FUN_140700370();
  *(undefined4 *)(param_1 + 0x2b) = 0x3f800000;
  *param_1 = &PTR_FUN_14406aeb0;
  param_1[5] = &PTR_LAB_14405abe8;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 1;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return param_1;
}



// FUNCTION 140700480 FUN_140700480 body=44 status=ok
// SIG undefined FUN_140700480(void)

undefined8 * FUN_140700480(undefined8 *param_1)

{
  FUN_1407002f0();
  *param_1 = &PTR_FUN_144064e10;
  param_1[5] = &PTR_LAB_144064df8;
  return param_1;
}



// FUNCTION 1407004b0 FUN_1407004b0 body=70 status=ok
// SIG undefined FUN_1407004b0(void)

undefined8 * FUN_1407004b0(undefined8 *param_1)

{
  FUN_1407002f0();
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *param_1 = &PTR_FUN_14406b278;
  param_1[5] = &PTR_LAB_14406b678;
  FUN_142de2f30(param_1 + 0x2d,1);
  return param_1;
}



// FUNCTION 140700500 FUN_140700500 body=44 status=ok
// SIG undefined FUN_140700500(void)

undefined8 * FUN_140700500(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UBlueprint::UBlueprint(param_1,uVar1);
  *param_1 = &PTR_FUN_14406ac18;
  return param_1;
}



// FUNCTION 140700530 FUN_140700530 body=44 status=ok
// SIG undefined FUN_140700530(void)

undefined8 * FUN_140700530(undefined8 *param_1)

{
  FUN_140700830();
  *param_1 = &PTR__scalar_deleting_destructor__144063ec8;
  param_1[5] = &PTR_LAB_144063eb0;
  return param_1;
}



// FUNCTION 140700560 FUN_140700560 body=123 status=ok
// SIG undefined FUN_140700560(void)

undefined8 * FUN_140700560(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR_FUN_144064270;
  param_1[5] = &PTR_LAB_144064610;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LeadTarget",1);
  param_1[0x20] = *puVar1;
  *(undefined2 *)(param_1 + 0x21) = 0xff00;
  *(undefined2 *)(param_1 + 0x22) = 1;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x40400000;
  return param_1;
}



// FUNCTION 1407005e0 FUN_1407005e0 body=169 status=ok
// SIG undefined FUN_1407005e0(void)

undefined8 * FUN_1407005e0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_1406d8630();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_144065630;
  param_1[5] = &PTR_LAB_1440659d8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146858a28) {
    _Init_thread_header(&DAT_146858a28);
    if (DAT_146858a28 == -1) {
      FName::FName(&DAT_146858a20,L"CoverSlot",1);
      _Init_thread_footer(&DAT_146858a28);
    }
  }
  param_1[0x37] = DAT_146858a20;
  *(undefined2 *)(param_1 + 0x92) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1ca) = 1;
  return param_1;
}



// FUNCTION 140700690 FUN_140700690 body=142 status=ok
// SIG undefined FUN_140700690(void)

undefined8 * FUN_140700690(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__144057018;
  param_1[5] = &PTR_LAB_1440573d0;
  FUN_1406fedb0(param_1 + 0x20);
  *param_1 = &PTR__scalar_deleting_destructor__1440659f0;
  param_1[5] = &PTR_LAB_144065da8;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x49) = 0x437a0000;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0x437a0000;
  *(undefined4 *)(param_1 + 0x48) = 0x453b8000;
  *(undefined1 *)((longlong)param_1 + 0x205) = 1;
  return param_1;
}



// FUNCTION 140700720 FUN_140700720 body=262 status=ok
// SIG undefined FUN_140700720(void)

undefined8 * FUN_140700720(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR_FUN_144065dc0;
  param_1[5] = &PTR_LAB_144066160;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"FollowActor",1);
  param_1[0x20] = *puVar1;
  *(undefined2 *)(param_1 + 0x21) = 0xff00;
  *(undefined4 *)(param_1 + 0x22) = 0x443b8000;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x437a0000;
  *(undefined4 *)(param_1 + 0x23) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x25) = 0x40400000;
  *(undefined1 *)((longlong)param_1 + 300) = 1;
  *(undefined4 *)(param_1 + 0x26) = 0x459c4000;
  *(undefined2 *)((longlong)param_1 + 0x134) = 0x100;
  FUN_1406fedb0(param_1 + 0x27);
  param_1[0x4f] = 0;
  *(undefined2 *)(param_1 + 0x50) = 0xff00;
  param_1[0x51] = 0;
  *(undefined2 *)(param_1 + 0x52) = 0xff00;
  param_1[0x53] = 0;
  *(undefined2 *)(param_1 + 0x54) = 0xff00;
  return param_1;
}



// FUNCTION 140700830 FUN_140700830 body=202 status=ok
// SIG undefined FUN_140700830(void)

undefined8 * FUN_140700830(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__144063b08;
  param_1[5] = &PTR_LAB_144063eb0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 1;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x25) = 0xff00;
  *(undefined1 *)(param_1 + 0x26) = 0;
  FUN_142de2c00(param_1 + 0x27,1,2);
  FUN_142de2f30(param_1 + 0x37,0,1);
  FUN_142de2f30(param_1 + 0x47,0,1);
  FUN_142de2d20(param_1 + 0x57,0x3f800000,0);
  *(byte *)((longlong)param_1 + 0x13a) = *(byte *)((longlong)param_1 + 0x13a) | 1;
  *(byte *)((longlong)param_1 + 0x2ba) = *(byte *)((longlong)param_1 + 0x2ba) | 1;
  return param_1;
}



// FUNCTION 140700900 FUN_140700900 body=162 status=ok
// SIG undefined FUN_140700900(void)

undefined8 * FUN_140700900(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__144066178;
  param_1[5] = &PTR_LAB_144066518;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GroupLocation",1);
  param_1[0x20] = *puVar1;
  *(undefined2 *)(param_1 + 0x21) = 0xff00;
  FUN_142de2d20(param_1 + 0x22,0x447a0000,0);
  *(undefined4 *)(param_1 + 0x32) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x194) = 1;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 1;
  *(undefined2 *)(param_1 + 0x1f) = 1;
  return param_1;
}



// FUNCTION 1407009b0 FUN_1407009b0 body=132 status=ok
// SIG undefined FUN_1407009b0(void)

undefined8 * FUN_1407009b0(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__144057018;
  param_1[5] = &PTR_LAB_1440573d0;
  FUN_1406fedb0(param_1 + 0x20);
  *param_1 = &PTR__scalar_deleting_destructor__144066a08;
  param_1[5] = &PTR_LAB_144065da8;
  *(undefined4 *)(param_1 + 0x49) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0x437a0000;
  *(undefined4 *)(param_1 + 0x48) = 0x453b8000;
  *(undefined1 *)((longlong)param_1 + 0x205) = 1;
  return param_1;
}



// FUNCTION 140700a40 FUN_140700a40 body=305 status=ok
// SIG undefined FUN_140700a40(void)

undefined8 * FUN_140700a40(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR_FUN_144067160;
  param_1[5] = &PTR_LAB_144067500;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"LeadActor",1);
  param_1[0x20] = *puVar1;
  *(undefined2 *)(param_1 + 0x21) = 0xff00;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"DestAINode",1);
  param_1[0x22] = *puVar1;
  *(undefined2 *)(param_1 + 0x23) = 0xff00;
  *(undefined4 *)(param_1 + 0x24) = 0x443b8000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x43160000;
  *(undefined4 *)(param_1 + 0x25) = 0x41c80000;
  *(undefined4 *)((longlong)param_1 + 300) = 0x44480000;
  *(undefined4 *)(param_1 + 0x26) = 0x43960000;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x27) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x43160000;
  *(undefined4 *)(param_1 + 0x28) = 0x457a0000;
  *(undefined2 *)((longlong)param_1 + 0x144) = 0x101;
  *(undefined4 *)(param_1 + 0x29) = 0x43fa0000;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0xff00;
  param_1[0x2c] = 0;
  *(undefined2 *)(param_1 + 0x2d) = 0xff00;
  param_1[0x2e] = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0xff00;
  return param_1;
}



// FUNCTION 140700b80 FUN_140700b80 body=85 status=ok
// SIG undefined FUN_140700b80(void)

undefined8 * FUN_140700b80(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR_FUN_144067518;
  param_1[5] = &PTR_LAB_14405fdb8;
  *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
  *(undefined1 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 1;
  return param_1;
}



// FUNCTION 140700be0 FUN_140700be0 body=201 status=ok
// SIG undefined FUN_140700be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140700be0(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR_FUN_1440678b8;
  param_1[5] = &PTR_LAB_144067c58;
  *(undefined4 *)(param_1 + 0x20) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x43340000;
  *(undefined4 *)(param_1 + 0x21) = 0x3f000000;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0xff00;
  param_1[0x24] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x25) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 300) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x134) = DAT_1468b5d98;
  param_1[0x27] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x28) = DAT_1468b5da8;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  return param_1;
}



// FUNCTION 140700cb0 FUN_140700cb0 body=132 status=ok
// SIG undefined FUN_140700cb0(void)

undefined8 * FUN_140700cb0(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__144057018;
  param_1[5] = &PTR_LAB_1440573d0;
  FUN_1406fedb0(param_1 + 0x20);
  *param_1 = &PTR__scalar_deleting_destructor__144067c70;
  param_1[5] = &PTR_LAB_144065da8;
  param_1[0x48] = 0;
  *(undefined2 *)(param_1 + 0x49) = 0xff00;
  *(undefined1 *)((longlong)param_1 + 0x205) = 1;
  FUN_142f97b10((longlong)param_1 + 0x20c);
  return param_1;
}



// FUNCTION 140700d40 FUN_140700d40 body=132 status=ok
// SIG undefined FUN_140700d40(void)

undefined8 * FUN_140700d40(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__144057018;
  param_1[5] = &PTR_LAB_1440573d0;
  FUN_1406fedb0(param_1 + 0x20);
  *param_1 = &PTR_FUN_144068028;
  param_1[5] = &PTR_LAB_144058ff8;
  param_1[0x48] = 0;
  *(undefined2 *)(param_1 + 0x49) = 0xff00;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x25c) = 0;
  return param_1;
}



// FUNCTION 140700dd0 FUN_140700dd0 body=650 status=ok
// SIG undefined FUN_140700dd0(void)

undefined8 * FUN_140700dd0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [128];
  
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__144057018;
  param_1[5] = &PTR_LAB_1440573d0;
  FUN_1406fedb0(param_1 + 0x20);
  *param_1 = &PTR_FUN_1440683e0;
  param_1[5] = &PTR_LAB_144068798;
  param_1[0x48] = 0;
  *(undefined2 *)(param_1 + 0x49) = 0xff00;
  FUN_142de2eb0(param_1 + 0x4a);
  FUN_142de2eb0(param_1 + 0x5a);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146858af8) {
    _Init_thread_header(&DAT_146858af8);
    if (DAT_146858af8 == -1) {
      FName::FName(&DAT_146858af0,L"TargetActorInfo",1);
      _Init_thread_footer(&DAT_146858af8);
    }
  }
  uStack_90 = CONCAT22(uStack_90._2_2_,0xff00);
  local_98 = (undefined4)DAT_146858af0;
  uStack_94 = (undefined4)((ulonglong)DAT_146858af0 >> 0x20);
  *(undefined4 *)(param_1 + 0x48) = local_98;
  *(undefined4 *)((longlong)param_1 + 0x244) = uStack_94;
  *(undefined4 *)(param_1 + 0x49) = uStack_90;
  *(undefined4 *)((longlong)param_1 + 0x24c) = uStack_8c;
  puVar5 = (undefined1 *)FUN_142de2d20(local_88,0x44fa0000,0);
  *(undefined1 *)(param_1 + 0x4a) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x251) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x252) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x253) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x254) = *(undefined8 *)(puVar5 + 4);
  param_1[0x4c] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x4d] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x4e] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x4f] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x50] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x51] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x52] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x53] = uVar4;
  param_1[0x54] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x55) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x2ac) = uVar1;
  *(undefined4 *)(param_1 + 0x56) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = uVar3;
  param_1[0x57] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x2c4) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x59) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x251) = *(byte *)((longlong)param_1 + 0x251) | 0x42;
  puVar5 = (undefined1 *)FUN_142de2d20(local_88,0x447a0000,0);
  *(undefined1 *)(param_1 + 0x5a) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x2d1) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x2d2) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x2d3) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x2d4) = *(undefined8 *)(puVar5 + 4);
  param_1[0x5c] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x5d] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x5e] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x5f] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x60] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x61] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x62] = *(undefined8 *)(puVar5 + 0x40);
  param_1[99] = uVar4;
  param_1[100] = *(undefined8 *)(puVar5 + 0x50);
  uVar4 = *(undefined8 *)(puVar5 + 0x60);
  param_1[0x65] = *(undefined8 *)(puVar5 + 0x58);
  param_1[0x66] = uVar4;
  param_1[0x67] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x344) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x69) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x2d1) = *(byte *)((longlong)param_1 + 0x2d1) | 0x40;
  *(byte *)((longlong)param_1 + 0x251) = *(byte *)((longlong)param_1 + 0x251) | 2;
  *(undefined4 *)(param_1 + 0x6a) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0x6b) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x205) = 1;
  *(undefined1 *)((longlong)param_1 + 0x203) = 2;
  return param_1;
}



// FUNCTION 140701060 FUN_140701060 body=121 status=ok
// SIG undefined FUN_140701060(void)

undefined8 * FUN_140701060(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__144057018;
  param_1[5] = &PTR_LAB_1440573d0;
  FUN_1406fedb0(param_1 + 0x20);
  *param_1 = &PTR_FUN_1440687b0;
  param_1[5] = &PTR_LAB_144068b68;
  FUN_1406feee0(param_1 + 0x48);
  *(undefined1 *)((longlong)param_1 + 0x205) = 1;
  *(undefined1 *)((longlong)param_1 + 0x203) = 2;
  return param_1;
}



// FUNCTION 1407010e0 FUN_1407010e0 body=92 status=ok
// SIG undefined FUN_1407010e0(void)

undefined8 * FUN_1407010e0(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__144068b80;
  param_1[5] = &PTR_LAB_144068f20;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return param_1;
}



// FUNCTION 140701140 FUN_140701140 body=254 status=ok
// SIG undefined FUN_140701140(void)

undefined8 * FUN_140701140(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__144066dc0;
  param_1[5] = &PTR_LAB_144066518;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0xff00;
  *(undefined4 *)(param_1 + 0x22) = 0x443b8000;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x23) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x41f00000;
  *(undefined2 *)(param_1 + 0x24) = 1;
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 0x26) = 0xff00;
  param_1[0x27] = 0;
  *(undefined2 *)(param_1 + 0x28) = 0xff00;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0xff00;
  param_1[0x2b] = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0xff00;
  param_1[0x2d] = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0xff00;
  param_1[0x2f] = 0;
  *(undefined2 *)(param_1 + 0x30) = 0xff00;
  param_1[0x31] = 0;
  *(undefined2 *)(param_1 + 0x32) = 0xff00;
  *(undefined1 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
  return param_1;
}



// FUNCTION 140701240 FUN_140701240 body=542 status=ok
// SIG undefined FUN_140701240(void)

undefined8 * FUN_140701240(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [128];
  
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__144057018;
  param_1[5] = &PTR_LAB_1440573d0;
  FUN_1406fedb0(param_1 + 0x20);
  *param_1 = &PTR_FUN_1440687b0;
  param_1[5] = &PTR_LAB_144068b68;
  FUN_1406feee0(param_1 + 0x48);
  *(undefined1 *)((longlong)param_1 + 0x205) = 1;
  *param_1 = &PTR__scalar_deleting_destructor__144068f78;
  *(undefined1 *)((longlong)param_1 + 0x203) = 2;
  param_1[5] = &PTR_LAB_144069330;
  param_1[0x8c] = 0;
  *(undefined2 *)(param_1 + 0x8d) = 0xff00;
  FUN_142de2eb0(param_1 + 0x8e);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146858b18) {
    _Init_thread_header(&DAT_146858b18);
    if (DAT_146858b18 == -1) {
      FName::FName(&DAT_146858b10,L"TargetActorInfo",1);
      _Init_thread_footer(&DAT_146858b18);
    }
  }
  uStack_90 = CONCAT22(uStack_90._2_2_,0xff00);
  local_98 = (undefined4)DAT_146858b10;
  uStack_94 = (undefined4)((ulonglong)DAT_146858b10 >> 0x20);
  *(undefined4 *)(param_1 + 0x8c) = local_98;
  *(undefined4 *)((longlong)param_1 + 0x464) = uStack_94;
  *(undefined4 *)(param_1 + 0x8d) = uStack_90;
  *(undefined4 *)((longlong)param_1 + 0x46c) = uStack_8c;
  puVar2 = (undefined1 *)FUN_142de2d20(local_88,0x43fa0000,0);
  *(undefined1 *)(param_1 + 0x8e) = *puVar2;
  *(undefined1 *)((longlong)param_1 + 0x471) = puVar2[1];
  *(undefined1 *)((longlong)param_1 + 0x472) = puVar2[2];
  *(undefined1 *)((longlong)param_1 + 0x473) = puVar2[3];
  *(undefined8 *)((longlong)param_1 + 0x474) = *(undefined8 *)(puVar2 + 4);
  param_1[0x90] = *(undefined8 *)(puVar2 + 0x10);
  param_1[0x91] = *(undefined8 *)(puVar2 + 0x18);
  uVar1 = *(undefined8 *)(puVar2 + 0x28);
  param_1[0x92] = *(undefined8 *)(puVar2 + 0x20);
  param_1[0x93] = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 0x38);
  param_1[0x94] = *(undefined8 *)(puVar2 + 0x30);
  param_1[0x95] = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 0x48);
  param_1[0x96] = *(undefined8 *)(puVar2 + 0x40);
  param_1[0x97] = uVar1;
  param_1[0x98] = *(undefined8 *)(puVar2 + 0x50);
  uVar1 = *(undefined8 *)(puVar2 + 0x60);
  param_1[0x99] = *(undefined8 *)(puVar2 + 0x58);
  param_1[0x9a] = uVar1;
  param_1[0x9b] = *(undefined8 *)(puVar2 + 0x68);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(puVar2 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x4e4) = *(undefined4 *)(puVar2 + 0x74);
  *(undefined4 *)(param_1 + 0x9d) = *(undefined4 *)(puVar2 + 0x78);
  *(byte *)((longlong)param_1 + 0x471) = *(byte *)((longlong)param_1 + 0x471) | 0x40;
  *(undefined4 *)(param_1 + 0x9e) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0x43340000;
  *(undefined4 *)(param_1 + 0x9f) = 0x42340000;
  *(undefined4 *)(param_1 + 0xa0) = 0x43fa0000;
  *(undefined1 *)((longlong)param_1 + 0x4fc) = 2;
  *(undefined1 *)((longlong)param_1 + 0x205) = 1;
  *(undefined1 *)((longlong)param_1 + 0x203) = 2;
  return param_1;
}



// FUNCTION 140701460 FUN_140701460 body=151 status=ok
// SIG undefined FUN_140701460(void)

undefined8 * FUN_140701460(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__144057018;
  param_1[5] = &PTR_LAB_1440573d0;
  FUN_1406fedb0(param_1 + 0x20);
  *param_1 = &PTR_FUN_144069348;
  param_1[5] = &PTR_LAB_144069700;
  FUN_1406ff550(param_1 + 0x48);
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  *(undefined1 *)((longlong)param_1 + 0x205) = 1;
  *(undefined1 *)((longlong)param_1 + 0x203) = 2;
  return param_1;
}



// FUNCTION 140701500 FUN_140701500 body=54 status=ok
// SIG undefined FUN_140701500(void)

undefined8 * FUN_140701500(undefined8 *param_1)

{
  FUN_140700830();
  *(undefined4 *)(param_1 + 0x67) = 0x437a0000;
  *param_1 = &PTR_FUN_144069718;
  param_1[5] = &PTR_LAB_144069ac0;
  return param_1;
}



// FUNCTION 140701540 FUN_140701540 body=78 status=ok
// SIG undefined FUN_140701540(void)

undefined8 * FUN_140701540(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__144069ad8;
  param_1[5] = &PTR_LAB_144069e78;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return param_1;
}



// FUNCTION 140701590 FUN_140701590 body=167 status=ok
// SIG undefined FUN_140701590(void)

undefined8 * FUN_140701590(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__144057018;
  param_1[5] = &PTR_LAB_1440573d0;
  FUN_1406fedb0(param_1 + 0x20);
  *param_1 = &PTR__scalar_deleting_destructor__144067c70;
  param_1[5] = &PTR_LAB_144065da8;
  param_1[0x48] = 0;
  *(undefined2 *)(param_1 + 0x49) = 0xff00;
  *(undefined1 *)((longlong)param_1 + 0x205) = 1;
  FUN_142f97b10((longlong)param_1 + 0x20c);
  *(undefined1 *)(param_1 + 0x40) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144069e90;
  param_1[5] = &PTR_LAB_144065da8;
  *(undefined1 *)((longlong)param_1 + 0x206) = 0;
  return param_1;
}



// FUNCTION 140701640 FUN_140701640 body=259 status=ok
// SIG undefined FUN_140701640(void)

undefined8 * FUN_140701640(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR_FUN_14406a248;
  param_1[5] = &PTR_LAB_14406a5e8;
  FUN_142de2eb0(param_1 + 0x21);
  FUN_142de2eb0(param_1 + 0x32);
  FUN_142de2eb0(param_1 + 0x43);
  FUN_142de2eb0(param_1 + 0x54);
  *(undefined8 *)((longlong)param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0x44fa0000;
  FUN_14077f980(param_1 + 0x20);
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  FUN_142de2c00(param_1 + 0x69,0,2);
  FUN_142de2f30(param_1 + 0x79,1);
  FUN_142de2f30(param_1 + 0x89,1);
  *(undefined2 *)(param_1 + 0x99) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
  return param_1;
}



// FUNCTION 140701750 FUN_140701750 body=95 status=ok
// SIG undefined FUN_140701750(void)

void FUN_140701750(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  iVar3 = *(int *)(param_1 + 0x58);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = param_1;
  }
  if (iVar3 != 0) {
    lVar2 = lVar2 + 0x10;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2);
      lVar2 = lVar2 + 0x28;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x50);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407017b0 ~TIndirectArray<FCustomPropertyListNode,FDefaultAllocator> body=101 status=ok
// SIG undefined ~TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>(void)

void TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>::
     ~TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  for (iVar2 = (int)param_1[1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    FMemory::Free(*puVar1);
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140701820 FUN_140701820 body=398 status=ok
// SIG undefined FUN_140701820(void)

void FUN_140701820(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b8));
  TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>::
  ~TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>(param_1 + 0x2a8);
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FBlueprintCookedComponentInstancingData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 600,0);
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x100);
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  FSlateTextBlockLayout::SetDebugSourceInfo(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1407019b0 FUN_1407019b0 body=147 status=ok
// SIG undefined FUN_1407019b0(void)

longlong FUN_1407019b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x20);
    if ((lVar2 != 0) && (lVar2 == *(longlong *)(param_1 + 0x98))) {
      local_res8 = *(undefined8 *)(lVar1 + 0x18);
      FUN_1406fd9f0(*(undefined8 *)(param_1 + 0x90),&local_res8);
      if (*(char *)(param_1 + 0xa0) != '\0') {
        *(longlong *)(param_1 + 0x98) = *param_2;
        (**(code **)(*(longlong *)*param_2 + 0xa8))((longlong *)*param_2,param_1);
        *(longlong *)(param_1 + 0x98) = lVar2;
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 140701a50 FUN_140701a50 body=143 status=ok
// SIG undefined FUN_140701a50(void)

longlong FUN_140701a50(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong local_res8;
  
  local_res8 = *param_2;
  if (local_res8 != 0) {
    lVar1 = *(longlong *)(local_res8 + 0x20);
    if ((lVar1 != 0) && (lVar1 == *(longlong *)(param_1 + 0x98))) {
      FUN_1406fd9f0(*(undefined8 *)(param_1 + 0x90),&local_res8);
      if (*(char *)(param_1 + 0xa0) != '\0') {
        *(longlong *)(param_1 + 0x98) = *param_2;
        (**(code **)(*(longlong *)*param_2 + 0xa8))((longlong *)*param_2,param_1);
        *(longlong *)(param_1 + 0x98) = lVar1;
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 140701ae0 FUN_140701ae0 body=369 status=ok
// SIG undefined FUN_140701ae0(void)

void FUN_140701ae0(undefined8 *param_1,byte param_2)

{
  float fVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  undefined1 local_3c [52];
  
  fVar7 = *(float *)param_1[1] - *(float *)param_1[2];
  fVar8 = *(float *)*param_1;
  if (fVar7 <= -fVar8) {
    fVar7 = -fVar8;
  }
  fVar1 = *(float *)param_1[3];
  fVar6 = (float)(int)((param_2 ^ 1) * 2 + -1) * *(float *)param_1[4] + fVar1;
  if (fVar7 <= fVar6) {
    fVar7 = *(float *)param_1[2] + *(float *)param_1[1];
    if (fVar8 <= fVar7) {
      fVar7 = fVar8;
    }
    if (fVar6 <= fVar7) {
      fVar7 = fVar6;
    }
  }
  pfVar5 = (float *)(param_1[5] + 0x5c);
  fVar8 = ABS(fVar7 - fVar1) + (float)((fVar1 < *pfVar5 || fVar1 == *pfVar5) ^ param_2) * 100.0;
  FUN_140757d80(param_1[5],&local_58,fVar7);
  plVar2 = *(longlong **)(*(longlong *)param_1[6] + 0x628);
  if (plVar2 != (longlong *)0x0) {
    lVar4 = FWeakObjectPtr::Get(param_1[7] + 0x48);
    pfVar5 = (float *)(**(code **)(*(longlong *)(lVar4 + 0x458) + 0x18))
                                ((longlong *)(lVar4 + 0x458),local_3c);
    local_40 = local_50 - pfVar5[2];
    local_44 = local_54 - pfVar5[1];
    local_48 = local_58 - *pfVar5;
    cVar3 = (**(code **)(*plVar2 + 0x458))(plVar2,&local_48,1,0);
    if ((cVar3 != '\0') && (pfVar5 = (float *)param_1[8], *pfVar5 <= fVar8 && fVar8 != *pfVar5)) {
      *pfVar5 = fVar8;
      *(float *)param_1[9] = fVar7;
    }
  }
  return;
}



// FUNCTION 140701c60 FUN_140701c60 body=247 status=ok
// SIG undefined FUN_140701c60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140701c60(undefined8 *param_1,undefined1 param_2,char *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_18;
  float local_14;
  float local_10;
  
  uVar5 = FUN_142ced280(*param_1,&local_18,param_2);
  fVar10 = local_18;
  if (*param_3 != '\0') {
    fVar10 = 0.0;
  }
  fVar11 = local_14;
  if (param_3[1] != '\0') {
    fVar11 = 0.0;
  }
  fVar9 = local_10;
  if (param_3[2] != '\0') {
    fVar9 = 0.0;
  }
  fVar1 = (float)DAT_1468588d0;
  fVar2 = DAT_1468588d0._4_4_;
  fVar3 = DAT_1468588d0._8_4_;
  fVar4 = DAT_1468588d0._12_4_;
  auVar7._4_4_ = fVar11 - local_14;
  auVar7._0_4_ = fVar10 - local_18;
  auVar7._8_4_ = fVar9 - local_10;
  auVar7._12_4_ = 0;
  auVar7 = divps(auVar7,_DAT_1468588d0);
  fVar10 = (fVar10 - local_18) - (float)(int)auVar7._0_4_ * fVar1;
  fVar11 = (fVar11 - local_14) - (float)(int)auVar7._4_4_ * fVar2;
  fVar9 = (fVar9 - local_10) - (float)(int)auVar7._8_4_ * fVar3;
  fVar12 = 0.0 - (float)(int)auVar7._12_4_ * fVar4;
  fVar10 = (float)(((uint)(fVar10 + fVar1) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                  (uint)(fVar10 + fVar1));
  fVar11 = (float)(((uint)(fVar11 + fVar2) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                  (uint)(fVar11 + fVar2));
  fVar9 = (float)(((uint)(fVar9 + fVar3) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                 (uint)(fVar9 + fVar3));
  fVar12 = (float)(((uint)(fVar12 + fVar4) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                  (uint)(fVar12 + fVar4));
  auVar8._4_4_ = -(uint)(0.0001 < (float)((((uint)(fVar11 - fVar2) ^ (uint)fVar11) &
                                           -(uint)(fRam00000001468588c4 < fVar11) ^ (uint)fVar11) &
                                         uRam00000001468588b4));
  auVar8._0_4_ = -(uint)(0.0001 < (float)((((uint)(fVar10 - fVar1) ^ (uint)fVar10) &
                                           -(uint)(_DAT_1468588c0 < fVar10) ^ (uint)fVar10) &
                                         _DAT_1468588b0));
  auVar8._8_4_ = -(uint)(0.0001 < (float)((((uint)(fVar9 - fVar3) ^ (uint)fVar9) &
                                           -(uint)(fRam00000001468588c8 < fVar9) ^ (uint)fVar9) &
                                         uRam00000001468588b8));
  auVar8._12_4_ =
       -(uint)(0.0001 < (float)((((uint)(fVar12 - fVar4) ^ (uint)fVar12) &
                                 -(uint)(fRam00000001468588cc < fVar12) ^ (uint)fVar12) &
                               uRam00000001468588bc));
  iVar6 = movmskps(uVar5,auVar8);
  return CONCAT31((int3)((uint)iVar6 >> 8),iVar6 == 0);
}



// FUNCTION 140701d60 FUN_140701d60 body=232 status=ok
// SIG undefined FUN_140701d60(void)

void FUN_140701d60(longlong *param_1,undefined8 *param_2)

{
  void *_Dst;
  void *_Src;
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  plVar3 = (longlong *)*param_1;
  iVar1 = (int)plVar3[1];
  if (1 < iVar1) {
    iVar4 = iVar1 + -1;
    if (iVar1 < 1) {
      iVar4 = 0;
    }
    iVar1 = (iVar1 < 1) + 1 + iVar1;
    *(int *)(plVar3 + 1) = iVar1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar3);
    }
    *(undefined2 *)(*plVar3 + (longlong)iVar4 * 2) = 10;
    *(undefined2 *)(*plVar3 + 2 + (longlong)iVar4 * 2) = 0;
    plVar3 = (longlong *)*param_1;
  }
  _Src = (void *)*param_2;
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    iVar4 = (int)plVar3[1];
    iVar2 = (uint)(iVar4 == 0) + iVar1 + iVar4;
    *(int *)(plVar3 + 1) = iVar2;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar3,iVar4);
    }
    _Dst = (void *)(*plVar3 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 * 2);
    *(undefined2 *)((longlong)iVar1 * 2 + (longlong)_Dst) = 0;
  }
  return;
}



// FUNCTION 140701e50 FUN_140701e50 body=607 status=ok
// SIG undefined FUN_140701e50(void)

undefined8 *
FUN_140701e50(longlong *param_1,undefined8 *param_2,undefined1 param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float *pfVar5;
  float *pfVar6;
  undefined2 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res8;
  undefined1 local_a8 [4];
  float local_a4;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined1 local_78 [12];
  undefined1 local_6c [84];
  
  if (*(char *)(param_4 + 0x1b0) != '\0') {
    local_res8 = *(undefined8 *)(*(longlong *)param_1[1] + 0x568);
    fVar8 = (float)FUN_142de77e0(param_4 + 0x130,*(longlong *)param_1[1],0,&local_res8);
    if (fVar8 < 0.5) {
      puVar3 = (undefined8 *)FUN_142de9d00(param_4 + 0x130,local_98);
      if (*(int *)(puVar3 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar3;
      }
      FString::PrintfImpl(param_2,L"Disabled: %s",puVar7);
      if (local_98[0] == 0) {
        return param_2;
      }
      FMemory::Free();
      return param_2;
    }
  }
  FUN_142ced280(param_1[2],local_88,param_3);
  lVar2 = param_1[2];
  uVar4 = FUN_142ced5e0(lVar2,local_6c,param_3);
  FUN_142ce6bb0(lVar2,local_a8,uVar4);
  lVar2 = *param_1;
  cVar1 = *(char *)(lVar2 + 0x100);
  if (cVar1 == '\0') {
    local_a4 = local_a4 - *(float *)(lVar2 + 0x104);
    fVar8 = (float)(int)(local_a4 * 0.0027777778) * 360.0;
    if (ABS(local_a4) < ABS(fVar8)) {
      fVar8 = local_a4;
    }
    local_a4 = local_a4 - fVar8;
    if (local_a4 < 0.0) {
      local_a4 = local_a4 + 360.0;
    }
    if (180.0 < local_a4) {
      local_a4 = local_a4 - 360.0;
    }
    cVar1 = *(char *)(lVar2 + 0x100);
  }
  fVar9 = (float)FUN_140718860(param_4,param_1[1],param_3,cVar1);
  pfVar5 = (float *)FRotator::Vector(local_a8,local_78);
  pfVar6 = (float *)FRotator::Vector(local_88,local_98);
  fVar10 = pfVar6[1] * pfVar5[1] + *pfVar6 * *pfVar5 + pfVar6[2] * pfVar5[2];
  fVar8 = -1.0;
  if ((-1.0 <= fVar10) && (fVar8 = fVar10, 1.0 <= fVar10)) {
    fVar8 = 1.0;
  }
  fVar8 = _guard_xfg_dispatch_icall_nop(fVar8);
  if (fVar9 < fVar8 * 57.295776) {
    FString::PrintfImpl(param_2,L"%0.0f",(double)(fVar9 - fVar8 * 57.295776));
  }
  else {
    *param_2 = 0;
    param_2[1] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"Facing",0xe);
  }
  return param_2;
}



// FUNCTION 1407021d0 FUN_1407021d0 body=43 status=ok
// SIG undefined FUN_1407021d0(void)

undefined8 * FUN_1407021d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144063ad8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140702200 FUN_140702200 body=111 status=ok
// SIG undefined FUN_140702200(void)

longlong FUN_140702200(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xc0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 140702270 FUN_140702270 body=52 status=ok
// SIG undefined FUN_140702270(void)

undefined8 FUN_140702270(undefined8 param_1,ulonglong param_2)

{
  FUN_140701820();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2e0);
  }
  return param_1;
}



// FUNCTION 1407022b0 FUN_1407022b0 body=342 status=ok
// SIG undefined FUN_1407022b0(void)

longlong FUN_1407022b0(longlong param_1,ulonglong param_2)

{
  FUN_1406d8ac0(param_1 + 0x4e8);
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    if (*(longlong *)(param_1 + 0x4d0) == 0) {
      **(longlong **)(param_1 + 0x4d8) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x4d8) = *(longlong *)(param_1 + 0x4d0);
      *(undefined8 *)(*(longlong *)(param_1 + 0x4d0) + 8) = *(undefined8 *)(param_1 + 0x4d8);
      *(undefined8 *)(param_1 + 0x4d0) = 0;
    }
    *(undefined8 *)(param_1 + 0x4d8) = 0;
    *(undefined8 *)(param_1 + 0x4e0) = 0;
  }
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x420) != 0) {
    FMemory::Free();
  }
  FUN_140701750(param_1 + 0x338);
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x280);
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x1d8) = &PTR_FUN_144055c50;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_144063ad8;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x510);
  }
  return param_1;
}



// FUNCTION 140702410 FUN_140702410 body=124 status=ok
// SIG undefined FUN_140702410(void)

longlong FUN_140702410(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  FUN_1406d8c70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 140702490 FUN_140702490 body=107 status=ok
// SIG undefined FUN_140702490(void)

longlong FUN_140702490(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  FUN_1406d8c70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 140702500 FUN_140702500 body=124 status=ok
// SIG undefined FUN_140702500(void)

longlong FUN_140702500(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  FUN_1406d8c70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 140702580 FUN_140702580 body=124 status=ok
// SIG undefined FUN_140702580(void)

longlong FUN_140702580(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  FUN_1406d8c70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e8);
  }
  return param_1;
}



// FUNCTION 140702600 FUN_140702600 body=111 status=ok
// SIG undefined FUN_140702600(void)

longlong FUN_140702600(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xc0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 140702670 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
ADungeonParticleSystem::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x338);
  }
  return param_1;
}



// FUNCTION 1407026b0 FUN_1407026b0 body=52 status=ok
// SIG undefined FUN_1407026b0(void)

undefined8 FUN_1407026b0(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1407026f0 FUN_1407026f0 body=85 status=ok
// SIG undefined FUN_1407026f0(void)

longlong FUN_1407026f0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FMemory::Free();
  }
  FUN_1406d8b70(param_1 + 0x100);
  FUN_1406d8c70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4c8);
  }
  return param_1;
}



// FUNCTION 140702750 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FShaderCompilerEnvironment::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x250);
  }
  return param_1;
}



// FUNCTION 140702790 FUN_140702790 body=52 status=ok
// SIG undefined FUN_140702790(void)

undefined8 FUN_140702790(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2a8);
  }
  return param_1;
}



// FUNCTION 1407027d0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TConeTraceScreenGridGlobalOcclusionCS<1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 140702810 FUN_140702810 body=52 status=ok
// SIG undefined FUN_140702810(void)

undefined8 FUN_140702810(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 140702850 FUN_140702850 body=52 status=ok
// SIG undefined FUN_140702850(void)

undefined8 FUN_140702850(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 140702890 FUN_140702890 body=52 status=ok
// SIG undefined FUN_140702890(void)

undefined8 FUN_140702890(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x360);
  }
  return param_1;
}



// FUNCTION 1407028d0 FUN_1407028d0 body=52 status=ok
// SIG undefined FUN_1407028d0(void)

undefined8 FUN_1407028d0(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x460);
  }
  return param_1;
}



// FUNCTION 140702910 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UUITweenManager::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  FUN_1406d8c70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 140702970 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FOnlineIdentityEOSCore::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x508);
  }
  return param_1;
}



// FUNCTION 1407029b0 FUN_1407029b0 body=90 status=ok
// SIG undefined FUN_1407029b0(void)

longlong FUN_1407029b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x570) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x560) != 0) {
    FMemory::Free();
  }
  FUN_1406d8c70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x580);
  }
  return param_1;
}



// FUNCTION 140702a10 FUN_140702a10 body=52 status=ok
// SIG undefined FUN_140702a10(void)

undefined8 FUN_140702a10(undefined8 param_1,ulonglong param_2)

{
  FUN_1406d8c70();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x340);
  }
  return param_1;
}



// FUNCTION 140702a50 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UWorldSoundComponent::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  FUN_1406d8c70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 140702aa0 FUN_140702aa0 body=73 status=ok
// SIG undefined FUN_140702aa0(void)

longlong FUN_140702aa0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  FUN_1406d8c70(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4d0);
  }
  return param_1;
}



// FUNCTION 140702af0 FUN_140702af0 body=315 status=ok
// SIG undefined FUN_140702af0(void)

void FUN_140702af0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  longlong *local_38;
  int local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  bVar1 = false;
  plVar3 = local_38;
  iVar5 = local_30;
  bVar6 = bVar1;
  if (*(longlong *)(param_1 + 0x68) == 0) {
LAB_140702bb4:
    bVar1 = true;
  }
  else {
    uStack_20 = 0;
    local_28 = FUN_140714c10;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    iVar5 = 3;
    local_30 = 3;
    local_38 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_144060be0;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_28;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_28._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_20;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_1c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_144060c28;
    }
    bVar6 = true;
    cVar2 = FUN_14071ba40(*(undefined8 *)(param_1 + 0x68),1,*(undefined8 *)(param_1 + 0x70),
                          &local_38,0);
    if (cVar2 == '\0') goto LAB_140702bb4;
  }
  if (bVar6) {
    if (iVar5 != 0) {
      if (plVar3 == (longlong *)0x0) goto LAB_140702bf3;
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      plVar3 = (longlong *)FMemory::Realloc(plVar3,0,0);
    }
    if (plVar3 != (longlong *)0x0) {
      FMemory::Free(plVar3);
    }
  }
LAB_140702bf3:
  if (!bVar1) {
    return;
  }
  UGameplayTask::EndTask(param_1);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x88,0);
  return;
}



// FUNCTION 140702c30 FUN_140702c30 body=1309 status=ok
// SIG undefined FUN_140702c30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140702c30(longlong param_1,longlong *param_2,undefined1 *param_3,char param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong local_res10 [2];
  char local_res20;
  float local_150;
  float local_14c;
  float local_148;
  undefined8 local_138;
  float local_130;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined1 local_100 [4];
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined1 local_c0 [4];
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_80 [4];
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined1 local_48;
  
  local_res20 = param_4;
  lVar4 = FUN_14070cef0(*param_2);
  if ((lVar4 == 0) || (lVar1 = *(longlong *)(lVar4 + 0xfd8), lVar1 == 0)) {
    return 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0xd8) + param_2[1] + 0x48) == '\0') {
    local_fc = 0xffffffff;
    uStack_f4 = 0xffffffff;
    local_100[0] = 9;
    local_ec = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    local_d4 = _DAT_1468b5d90;
    local_bc = 0xffffffff;
    uStack_b4 = 0xffffffff;
    local_cc = DAT_1468b5d98;
    local_ac = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    local_c8 = 0;
    local_94 = _DAT_1468b5d90;
    local_7c = 0xffffffff;
    uStack_74 = 0xffffffff;
    local_c0[0] = 0;
    local_6c = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    local_54 = _DAT_1468b5d90;
    local_8c = DAT_1468b5d98;
    local_88 = 0;
    local_80[0] = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    local_4c = DAT_1468b5d98;
    local_48 = 0;
    local_res10[0] = local_res10[0] & 0xffffffffffffff00;
    bVar2 = false;
    if ((*(char *)(param_1 + 0x2c8) != '\0') &&
       (cVar3 = FUN_140713bf0(param_1 + 0x110,param_2), cVar3 != '\0')) {
      local_100[0] = *param_3;
      local_ec = *(undefined8 *)(param_3 + 0x14);
      local_fc = *(undefined8 *)(param_3 + 4);
      uStack_f4 = *(undefined8 *)(param_3 + 0xc);
      uStack_e4 = *(undefined4 *)(param_3 + 0x1c);
      uStack_d8 = *(undefined4 *)(param_3 + 0x28);
      local_cc = *(undefined4 *)(param_3 + 0x34);
      local_c8 = param_3[0x38];
      uStack_e0 = (undefined4)*(undefined8 *)(param_3 + 0x20);
      uStack_dc = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x20) >> 0x20);
      local_d4 = *(undefined8 *)(param_3 + 0x2c);
      local_res10[0] = CONCAT71(local_res10[0]._1_7_,1);
      if (param_4 != '\0') {
        FUN_142ced180(lVar4,&local_150,0);
        FUN_142cc2d20(lVar1 + 0xbe0,&local_118,local_100,lVar4);
        local_130 = local_110 - local_148;
        local_138 = CONCAT44(local_114 - local_14c,local_118 - local_150);
        local_120 = local_130;
        FUN_142ccf010(local_100,&local_138);
      }
    }
    if (*(char *)(param_1 + 0x488) != '\0') {
      cVar3 = FUN_140713bf0(param_1 + 0x2d0,param_2);
      param_4 = local_res20;
      if ((cVar3 != '\0') &&
         (cVar3 = FUN_1407142c0(param_1 + 0x2d0,param_2,1,param_3 + 0x3c), param_4 = local_res20,
         cVar3 != '\0')) {
        local_c0[0] = param_3[0x3c];
        local_ac = *(undefined8 *)(param_3 + 0x50);
        local_bc = *(undefined8 *)(param_3 + 0x40);
        uStack_b4 = *(undefined8 *)(param_3 + 0x48);
        uStack_a4 = *(undefined4 *)(param_3 + 0x58);
        uStack_98 = *(undefined4 *)(param_3 + 100);
        local_8c = *(undefined4 *)(param_3 + 0x70);
        local_88 = param_3[0x74];
        uStack_a0 = (undefined4)*(undefined8 *)(param_3 + 0x5c);
        uStack_9c = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x5c) >> 0x20);
        local_94 = *(undefined8 *)(param_3 + 0x68);
        bVar2 = true;
        if (local_res20 != '\0') {
          FUN_142ced180(lVar4,&local_150,1);
          FUN_142cc2d20(lVar1 + 0xbe0,&local_118,local_c0,lVar4);
          local_130 = local_110 - local_148;
          local_138 = CONCAT44(local_114 - local_14c,local_118 - local_150);
          local_120 = local_130;
          FUN_142ccf010(local_c0,&local_138);
        }
      }
    }
    if (((*(char *)(param_1 + 0x648) != '\0') &&
        (cVar3 = FUN_140713bf0(param_1 + 0x490,param_2), cVar3 != '\0')) &&
       (cVar3 = FUN_1407142c0(param_1 + 0x490,param_2,2,param_3 + 0x78), cVar3 != '\0')) {
      local_80[0] = param_3[0x78];
      local_6c = *(undefined8 *)(param_3 + 0x8c);
      local_7c = *(undefined8 *)(param_3 + 0x7c);
      uStack_74 = *(undefined8 *)(param_3 + 0x84);
      uStack_64 = *(undefined4 *)(param_3 + 0x94);
      uStack_58 = *(undefined4 *)(param_3 + 0xa0);
      local_4c = *(undefined4 *)(param_3 + 0xac);
      local_48 = param_3[0xb0];
      uStack_60 = (undefined4)*(undefined8 *)(param_3 + 0x98);
      uStack_5c = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x98) >> 0x20);
      local_54 = *(undefined8 *)(param_3 + 0xa4);
      if (param_4 != '\0') {
        FUN_142ced180(lVar4,&local_150,2);
        FUN_142cc2d20(lVar1 + 0xbe0,&local_118,local_80,lVar4);
        local_130 = local_110 - local_148;
        local_138 = CONCAT44(local_114 - local_14c,local_118 - local_150);
        local_120 = local_130;
        FUN_142ccf010(local_80,&local_138);
      }
    }
    FUN_142cff0b0(lVar4,local_100,0);
    FUN_142cff0b0(lVar4,local_c0,1);
    FUN_142cff0b0(lVar4,local_80,2);
    if ((*(char *)(param_1 + 0x100) != '\0') && ((char)local_res10[0] != '\0')) {
      if (*(char *)(param_1 + 0x1b0) != '\0') {
        local_res10[0] = *(ulonglong *)(*param_2 + 0x568);
        uVar5 = FUN_142de77e0(param_1 + 0x130,*param_2,0,local_res10);
        FUN_142cf7210(lVar4,uVar5);
        return 1;
      }
      if (!bVar2) {
        FUN_142cf7210(lVar4,0);
        return 1;
      }
      FUN_142cfe420(lVar4);
    }
  }
  return 1;
}



// FUNCTION 140703150 FUN_140703150 body=559 status=ok
// SIG undefined FUN_140703150(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140703150(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [4];
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_90;
  undefined1 local_88 [4];
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_48 [4];
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  undefined1 local_10;
  
  lVar1 = FUN_14070cef0(*param_2);
  uVar2 = 0;
  if (lVar1 != 0) {
    local_c4 = 0xffffffff;
    uStack_bc = 0xffffffff;
    local_c8[0] = 0;
    local_b4 = 0;
    uStack_ac = 0;
    local_a4 = 0;
    local_9c = _DAT_1468b5d90;
    local_84 = 0xffffffff;
    uStack_7c = 0xffffffff;
    local_94 = DAT_1468b5d98;
    local_74 = 0;
    uStack_6c = 0;
    local_90 = 0;
    local_5c = _DAT_1468b5d90;
    local_44 = 0xffffffff;
    uStack_3c = 0xffffffff;
    local_88[0] = 0;
    local_34 = 0;
    uStack_2c = 0;
    local_64 = 0;
    local_1c = _DAT_1468b5d90;
    local_54 = DAT_1468b5d98;
    local_50 = 0;
    local_48[0] = 0;
    local_24 = 0;
    local_14 = DAT_1468b5d98;
    local_10 = 0;
    if (*(char *)(param_1 + 0x103) != '\0') {
      FUN_142ced280(lVar1,&local_e8,0);
      if (*(char *)(param_1 + 0x100) != '\0') {
        local_e8 = 0;
      }
      if (*(char *)(param_1 + 0x101) != '\0') {
        uStack_e4 = 0;
      }
      if (*(char *)(param_1 + 0x102) != '\0') {
        local_e0 = 0;
      }
      local_d8 = CONCAT44(uStack_e4,local_e8);
      local_d0 = local_e0;
      FUN_142ccf180(local_c8,&local_d8);
    }
    if (*(char *)(param_1 + 0x107) != '\0') {
      FUN_142ced280(lVar1,&local_e8,1);
      if (*(char *)(param_1 + 0x104) != '\0') {
        local_e8 = 0;
      }
      if (*(char *)(param_1 + 0x105) != '\0') {
        uStack_e4 = 0;
      }
      if (*(char *)(param_1 + 0x106) != '\0') {
        local_e0 = 0;
      }
      local_d8 = CONCAT44(uStack_e4,local_e8);
      local_d0 = local_e0;
      FUN_142ccf180(local_88,&local_d8);
    }
    if (*(char *)(param_1 + 0x10b) != '\0') {
      FUN_142ced280(lVar1,&local_e8,2);
      if (*(char *)(param_1 + 0x108) != '\0') {
        local_e8 = 0;
      }
      if (*(char *)(param_1 + 0x109) != '\0') {
        uStack_e4 = 0;
      }
      if (*(char *)(param_1 + 0x10a) != '\0') {
        local_e0 = 0;
      }
      local_d8 = CONCAT44(uStack_e4,local_e8);
      local_d0 = local_e0;
      FUN_142ccf180(local_48,&local_d8);
    }
    FUN_142cff0b0(lVar1,local_c8,0);
    FUN_142cff0b0(lVar1,local_88,1);
    FUN_142cff0b0(lVar1,local_48,2);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140703380 FUN_140703380 body=842 status=ok
// SIG undefined FUN_140703380(void)

void FUN_140703380(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar4 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar4;
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)((longlong)param_2 + 0x11) = *(undefined1 *)((longlong)param_1 + 0x11);
  *(undefined1 *)((longlong)param_2 + 0x12) = *(undefined1 *)((longlong)param_1 + 0x12);
  *(undefined1 *)((longlong)param_2 + 0x13) = *(undefined1 *)((longlong)param_1 + 0x13);
  *(undefined8 *)((longlong)param_2 + 0x14) = *(undefined8 *)((longlong)param_1 + 0x14);
  param_2[4] = param_1[4];
  param_2[5] = param_1[5];
  uVar4 = param_1[7];
  param_2[6] = param_1[6];
  param_2[7] = uVar4;
  uVar4 = param_1[9];
  param_2[8] = param_1[8];
  param_2[9] = uVar4;
  uVar4 = param_1[0xb];
  param_2[10] = param_1[10];
  param_2[0xb] = uVar4;
  param_2[0xc] = param_1[0xc];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x6c);
  uVar2 = *(undefined4 *)(param_1 + 0xe);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x74);
  *(undefined4 *)(param_2 + 0xd) = *(undefined4 *)(param_1 + 0xd);
  *(undefined4 *)((longlong)param_2 + 0x6c) = uVar1;
  *(undefined4 *)(param_2 + 0xe) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x74) = uVar3;
  param_2[0xf] = param_1[0xf];
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((longlong)param_2 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x84);
  *(undefined4 *)(param_2 + 0x11) = *(undefined4 *)(param_1 + 0x11);
  FUN_142de2d20(&local_88,*(undefined4 *)(param_1 + 0x12),0);
  *(undefined1 *)(param_2 + 0x12) = local_88;
  *(undefined1 *)((longlong)param_2 + 0x91) = local_87;
  *(undefined1 *)((longlong)param_2 + 0x92) = local_86;
  *(undefined1 *)((longlong)param_2 + 0x93) = local_85;
  *(undefined4 *)((longlong)param_2 + 0x94) = local_84;
  param_2[0x14] = local_78;
  param_2[0x16] = local_68;
  param_2[0x17] = uStack_60;
  param_2[0x15] = local_70;
  *(undefined4 *)(param_2 + 0x13) = local_80;
  param_2[0x1f] = local_20;
  param_2[0x18] = local_58;
  param_2[0x19] = uStack_50;
  param_2[0x1a] = local_48;
  param_2[0x1b] = uStack_40;
  param_2[0x1c] = local_38;
  param_2[0x1d] = local_30;
  param_2[0x1e] = uStack_28;
  *(undefined4 *)(param_2 + 0x20) = local_18;
  *(undefined4 *)((longlong)param_2 + 0x104) = local_14;
  *(undefined4 *)(param_2 + 0x21) = local_10;
  FUN_142de2d20(&local_88,*(undefined4 *)((longlong)param_1 + 0x94),0);
  *(undefined1 *)(param_2 + 0x22) = local_88;
  *(undefined1 *)((longlong)param_2 + 0x111) = local_87;
  *(undefined1 *)((longlong)param_2 + 0x112) = local_86;
  *(undefined1 *)((longlong)param_2 + 0x113) = local_85;
  *(undefined4 *)((longlong)param_2 + 0x114) = local_84;
  param_2[0x24] = local_78;
  param_2[0x26] = local_68;
  param_2[0x27] = uStack_60;
  param_2[0x25] = local_70;
  *(undefined4 *)(param_2 + 0x23) = local_80;
  param_2[0x2f] = local_20;
  param_2[0x28] = local_58;
  param_2[0x29] = uStack_50;
  param_2[0x2a] = local_48;
  param_2[0x2b] = uStack_40;
  param_2[0x2c] = local_38;
  param_2[0x2d] = local_30;
  param_2[0x2e] = uStack_28;
  *(undefined4 *)(param_2 + 0x30) = local_18;
  *(undefined4 *)((longlong)param_2 + 0x184) = local_14;
  *(undefined4 *)(param_2 + 0x31) = local_10;
  FUN_142de2d20(&local_88,*(undefined4 *)(param_1 + 0x13),0);
  *(undefined1 *)(param_2 + 0x32) = local_88;
  *(undefined1 *)((longlong)param_2 + 0x191) = local_87;
  *(undefined1 *)((longlong)param_2 + 0x192) = local_86;
  *(undefined1 *)((longlong)param_2 + 0x193) = local_85;
  *(undefined4 *)((longlong)param_2 + 0x194) = local_84;
  param_2[0x34] = local_78;
  param_2[0x36] = local_68;
  param_2[0x37] = uStack_60;
  param_2[0x35] = local_70;
  *(undefined4 *)(param_2 + 0x33) = local_80;
  param_2[0x3f] = local_20;
  param_2[0x38] = local_58;
  param_2[0x39] = uStack_50;
  param_2[0x3a] = local_48;
  param_2[0x3b] = uStack_40;
  param_2[0x3c] = local_38;
  param_2[0x3d] = local_30;
  param_2[0x3e] = uStack_28;
  *(undefined4 *)(param_2 + 0x40) = local_18;
  *(undefined4 *)((longlong)param_2 + 0x204) = local_14;
  *(undefined4 *)(param_2 + 0x41) = local_10;
  *(undefined1 *)(param_2 + 0x42) = *(undefined1 *)((longlong)param_1 + 0x9c);
  *(undefined4 *)((longlong)param_2 + 0x214) = *(undefined4 *)(param_1 + 0x14);
  return;
}



// FUNCTION 1407036d0 FUN_1407036d0 body=388 status=ok
// SIG undefined FUN_1407036d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1407036d0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [4];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_98 = 0xffffffff;
  uStack_90 = 0xffffffff;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_78 = 0;
  local_64 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_38 = 0;
  local_28 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_d8[0] = 0;
  local_d4 = 0xffffffff;
  local_cc = 0xffffffff;
  local_ac = _DAT_1468b5d90;
  local_a4 = DAT_1468b5d98;
  local_88 = 0;
  uStack_80 = 0;
  local_70 = _DAT_1468b5d90;
  local_68 = DAT_1468b5d98;
  local_5c = 0xffffffff;
  local_54 = 0xffffffff;
  local_34 = _DAT_1468b5d90;
  local_2c = DAT_1468b5d98;
  cVar1 = FUN_1407186a0(param_1,0,local_d8);
  if (cVar1 == '\0') {
    lVar2 = FUN_14070cef0(*param_2);
    if (lVar2 != 0) {
      cVar1 = '\0';
      do {
        FUN_142ce6360(lVar2,cVar1);
        cVar1 = cVar1 + '\x01';
      } while (cVar1 != '\x03');
      return 2;
    }
  }
  else if (*(char *)(param_1 + 0x100) == '\0') {
    cVar1 = FUN_140713c80();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  else {
    cVar1 = FUN_140702c30(param_1,param_2,local_d8,0);
    if (cVar1 != '\0') {
      cVar1 = FUN_140713c80(param_1,param_2,local_d8);
      if (cVar1 != '\0') {
        return 1;
      }
      return 0;
    }
    lVar2 = FUN_14070cef0(*param_2);
    if (lVar2 != 0) {
      cVar1 = '\0';
      do {
        FUN_142ce6360(lVar2,cVar1);
        cVar1 = cVar1 + '\x01';
      } while (cVar1 != '\x03');
    }
  }
  return 2;
}



// FUNCTION 140703860 FUN_140703860 body=178 status=ok
// SIG undefined FUN_140703860(void)

undefined1 FUN_140703860(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong local_res18 [2];
  
  cVar1 = FUN_140703150();
  if (cVar1 == '\0') {
    return 2;
  }
  local_res18[0] = FUN_14070cef0(*param_2);
  if (local_res18[0] == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x103) != '\0') {
    cVar1 = FUN_140701c60(local_res18,0,param_1 + 0x100);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x107) != '\0') {
    cVar1 = FUN_140701c60(local_res18,1,param_1 + 0x104);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  if ((*(char *)(param_1 + 0x10b) != '\0') &&
     (cVar1 = FUN_140701c60(local_res18,2,param_1 + 0x108), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 140703920 FUN_140703920 body=81 status=ok
// SIG undefined FUN_140703920(void)

void FUN_140703920(longlong param_1)

{
  uint uVar1;
  
  if (DAT_1468c217e == '\0') {
    uVar1 = 1;
    do {
      FUN_14070a590(param_1,uVar1 & 0xff,4);
      uVar1 = uVar1 - 1;
    } while (-1 < (int)uVar1);
    FUN_1406d8ac0(param_1 + 0x4e8);
  }
  FUN_142330890(param_1);
  return;
}



// FUNCTION 140703980 FUN_140703980 body=44 status=ok
// SIG undefined FUN_140703980(void)

void FUN_140703980(longlong param_1)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_14071ba40(param_1,0,*(undefined8 *)(param_1 + 0x220),&local_18,0);
  return;
}



// FUNCTION 1407039b0 FUN_1407039b0 body=34 status=ok
// SIG undefined FUN_1407039b0(void)

void FUN_1407039b0(longlong param_1)

{
  FUN_142330a70();
  FUN_1406f7da0(param_1 + 0x4e8,param_1);
  return;
}



// FUNCTION 1407039e0 FUN_1407039e0 body=182 status=ok
// SIG undefined FUN_1407039e0(void)

void FUN_1407039e0(longlong param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                  int *param_5)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  cVar1 = FUN_140761c70(param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_140761c70(param_3);
    if (cVar1 != '\0') {
      fVar2 = (float)FUN_14075f460(param_2);
      fVar3 = (float)FUN_14075f460(param_3);
      fVar2 = fVar2 - fVar3;
      goto LAB_140703a3e;
    }
  }
  fVar2 = 3.4028235e+38;
LAB_140703a3e:
  *param_4 = fVar2;
  if (fVar2 <= *(float *)(param_1 + 300) + *(float *)(param_1 + 0x130)) {
    *param_5 = (*(float *)(param_1 + 300) - *(float *)(param_1 + 0x130) <= fVar2) + 1;
  }
  else {
    *param_5 = 3;
  }
  return;
}



// FUNCTION 140703aa0 FUN_140703aa0 body=645 status=ok
// SIG undefined FUN_140703aa0(void)

undefined8 FUN_140703aa0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  longlong lVar5;
  float fVar6;
  float local_48;
  float local_44;
  float local_40;
  undefined8 local_38;
  float local_30;
  
  lVar5 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  FUN_142f96fa0(lVar5 + 0x70);
  local_48 = (float)DAT_14622e710;
  local_40 = DAT_14622e718;
  local_44 = DAT_14622e710._4_4_;
  FUN_142cc54f0(param_1 + 0x240,*(undefined8 *)(*param_2 + 0x568),&local_48);
  if ((((local_48 != (float)DAT_14622e710) || (local_44 != DAT_14622e710._4_4_)) ||
      (local_40 != DAT_14622e718)) && (*(longlong *)(*param_2 + 0x628) != 0)) {
    pfVar4 = (float *)FUN_142fa2d40(*(longlong *)(*param_2 + 0x628) + 0x6e8,&local_38);
    fVar6 = (pfVar4[1] - local_44) * (pfVar4[1] - local_44) +
            (*pfVar4 - local_48) * (*pfVar4 - local_48);
    if ((fVar6 != 1.0) && (1e-08 <= fVar6)) {
      rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    }
    fVar6 = (float)FGenericPlatformMath::Atan2();
    *(undefined4 *)(lVar5 + 0x68) = 0;
    *(float *)(lVar5 + 0x60) = fVar6 * 57.295776;
    *(float *)(lVar5 + 100) = fVar6 * 57.295776;
    cVar2 = FUN_140706530(param_1,param_2);
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x458) != '\0') {
        lVar1 = *(longlong *)(*param_2 + 0x618);
        if (lVar1 != 0) {
          local_38 = CONCAT44(DAT_14622e710._4_4_,(float)DAT_14622e710);
          local_30 = DAT_14622e718;
          FUN_142cc54f0(param_1 + 0x240,*(undefined8 *)(*param_2 + 0x568),&local_38);
          cVar2 = FUN_142df43c0(lVar1,2,&local_38);
          if (cVar2 == '\0') {
            return 0;
          }
        }
      }
      if (*(char *)(param_1 + 0x450) != '\0') {
        if (*(char *)(param_1 + 0x450) == '\x01') {
          *(undefined1 *)(lVar5 + 0x6c) = 0;
          return 1;
        }
        iVar3 = rand();
        *(bool *)(lVar5 + 0x6c) = 0.5 < (float)iVar3 * 3.051851e-05;
        return 1;
      }
      *(undefined1 *)(lVar5 + 0x6c) = 1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140703d30 FUN_140703d30 body=801 status=ok
// SIG undefined FUN_140703d30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_140703d30(longlong param_1,undefined1 *param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float local_48;
  float fStack_44;
  undefined8 local_3c;
  float local_34;
  
  lVar7 = *(longlong *)(param_3 + 8) + *(longlong *)(param_1 + 0xd8);
  lVar3 = FWeakObjectPtr::Get(lVar7 + 0x50);
  if (lVar3 == 0) {
    *(undefined8 *)(param_2 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 4) = DAT_14622e710;
    *(undefined4 *)(param_2 + 0xc) = DAT_14622e718;
    *(undefined8 *)(param_2 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x18) = 0xffffffffffffffff;
    *param_2 = 0;
    return param_2;
  }
  if (*(char *)(param_1 + 0x134) != '\0') {
    lVar6 = *(longlong *)(param_3 + 8) + *(longlong *)(param_1 + 0xd8);
    lVar4 = FWeakObjectPtr::Get(lVar6 + 0x48);
    lVar6 = FWeakObjectPtr::Get(lVar6 + 0x74);
    if ((lVar4 != 0) && (lVar6 != 0)) {
      lVar6 = *(longlong *)(lVar6 + 0x168);
      if (lVar6 == 0) {
        local_3c = _DAT_1468b5d90;
        local_34 = DAT_1468b5d98;
      }
      else {
        local_3c = *(undefined8 *)(lVar6 + 0x220);
        local_34 = *(float *)(lVar6 + 0x228);
      }
      fVar8 = local_34;
      uVar5 = local_3c;
      lVar4 = *(longlong *)(lVar4 + 0x168);
      if (lVar4 == 0) {
        local_3c = _DAT_1468b5d90;
        local_34 = DAT_1468b5d98;
      }
      else {
        local_3c = *(undefined8 *)(lVar4 + 0x220);
        local_34 = *(float *)(lVar4 + 0x228);
      }
      local_48 = (float)uVar5;
      local_48 = local_48 - (float)local_3c;
      fStack_44 = (float)((ulonglong)uVar5 >> 0x20);
      fStack_44 = fStack_44 - (float)((ulonglong)local_3c >> 0x20);
      fVar8 = SQRT(fStack_44 * fStack_44 + local_48 * local_48 +
                   (fVar8 - local_34) * (fVar8 - local_34));
      if (*(float *)(param_1 + 0x130) <= fVar8 && fVar8 != *(float *)(param_1 + 0x130))
      goto LAB_140703fa8;
    }
  }
  FUN_142fa8c00(lVar3);
  cVar2 = FUN_142fa8c00(lVar3);
  if (cVar2 == '\0') {
    if ((*(int *)(lVar7 + 0x6c) < 0) || (*(int *)(lVar7 + 0x70) < 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    cVar2 = FUN_142f958b0(lVar3 + 0x9e8,*(undefined8 *)(lVar7 + 0x6c));
  }
  else {
    if ((*(int *)(lVar7 + 100) < 0) || (*(int *)(lVar7 + 0x68) < 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    cVar2 = FUN_142f95960(lVar3 + 0x9e8,*(undefined8 *)(lVar7 + 100));
  }
  if (bVar1) {
    if (cVar2 != '\0') {
      lVar3 = *(longlong *)(param_3 + 8) + *(longlong *)(param_1 + 0xd8);
      *(undefined8 *)(param_2 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(param_2 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(param_2 + 4) = DAT_14622e710;
      *(undefined4 *)(param_2 + 0xc) = DAT_14622e718;
      *param_2 = 0;
      *(undefined8 *)(param_2 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(param_2 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar3 + 0x58);
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(lVar3 + 0x60);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar3 + 100);
      uVar5 = *(undefined8 *)(lVar3 + 0x6c);
      goto LAB_140704028;
    }
    if (*(char *)(param_1 + 300) != '\0') {
LAB_140703fa8:
      FUN_140707300(param_1,param_2,param_3);
      return param_2;
    }
  }
  *(undefined8 *)(param_2 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 4) = DAT_14622e710;
  *(undefined4 *)(param_2 + 0xc) = DAT_14622e718;
  *(undefined8 *)(param_2 + 0x10) = 0xffffffffffffffff;
  uVar5 = 0xffffffffffffffff;
  *param_2 = 0;
LAB_140704028:
  *(undefined8 *)(param_2 + 0x18) = uVar5;
  return param_2;
}



// FUNCTION 140704060 FUN_140704060 body=880 status=ok
// SIG undefined FUN_140704060(void)

undefined8 *
FUN_140704060(longlong param_1,undefined8 *param_2,longlong *param_3,float param_4,float param_5)

{
  longlong lVar1;
  char cVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined1 local_108 [8];
  float local_100;
  undefined8 local_f8;
  float local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  
  local_128 = (float)DAT_14622e710;
  local_120 = DAT_14622e718;
  local_124 = DAT_14622e710._4_4_;
  FUN_142cc54f0(param_1 + 0x240,*(undefined8 *)(*param_3 + 0x568),&local_128);
  fVar7 = (float)DAT_14622e710;
  fVar9 = DAT_14622e710._4_4_;
  fVar8 = DAT_14622e718;
  if ((((local_128 != (float)DAT_14622e710) || (local_124 != DAT_14622e710._4_4_)) ||
      (local_120 != DAT_14622e718)) && (lVar1 = *(longlong *)(*param_3 + 0x628), lVar1 != 0)) {
    if (*(char *)(*(longlong *)(param_1 + 0xd8) + 0x60 + param_3[1]) == '\x02') {
      local_130 = *(float *)(lVar1 + 0x77c);
      fVar4 = (float)*(undefined8 *)(lVar1 + 0x774);
      fVar5 = (float)((ulonglong)*(undefined8 *)(lVar1 + 0x774) >> 0x20);
    }
    else {
      pfVar3 = (float *)FUN_142fa2d40((undefined8 *)(lVar1 + 0x6e8),&local_118);
      fVar9 = *pfVar3 - local_128;
      fVar8 = pfVar3[1] - local_124;
      local_130 = pfVar3[2] - local_120;
      fVar7 = fVar8 * fVar8 + fVar9 * fVar9;
      if (fVar7 == 1.0) {
        fVar4 = fVar9;
        fVar5 = fVar8;
        if (local_130 != 0.0) {
          local_130 = 0.0;
        }
      }
      else {
        fVar4 = DAT_1468b5d90;
        fVar5 = DAT_1468b5d94;
        local_130 = DAT_1468b5d98;
        if (1e-08 <= fVar7) {
          auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
          fVar5 = auVar6._0_4_;
          fVar5 = fVar5 + fVar5 * (0.5 - fVar7 * 0.5 * fVar5 * fVar5);
          fVar5 = fVar5 + fVar5 * (0.5 - fVar7 * 0.5 * fVar5 * fVar5);
          local_130 = 0.0;
          fVar4 = fVar9 * fVar5;
          fVar5 = fVar8 * fVar5;
        }
      }
    }
    local_118 = CONCAT44(fVar5,fVar4);
    fVar9 = fVar4 * param_4 + local_128;
    fVar7 = fVar5 * param_4 + local_124;
    local_110 = local_130 * param_4 + local_120 + param_5;
    FUN_142f88ab0(&local_f8);
    local_88 = *(undefined8 *)(lVar1 + 0x6b8);
    local_f0 = local_110;
    local_f8 = CONCAT44(fVar7,fVar9);
    local_ec = *(undefined4 *)(param_1 + 0x550);
    local_e8 = *(undefined8 *)(lVar1 + 0x6e8);
    uStack_e0 = *(undefined8 *)(lVar1 + 0x6f0);
    local_d8 = *(undefined8 *)(lVar1 + 0x6f8);
    uStack_d0 = *(undefined8 *)(lVar1 + 0x700);
    local_c8 = *(undefined8 *)(lVar1 + 0x708);
    uStack_c0 = *(undefined8 *)(lVar1 + 0x710);
    local_b8 = *(undefined8 *)(lVar1 + 0x718);
    uStack_b0 = *(undefined8 *)(lVar1 + 0x720);
    local_a8 = *(undefined4 *)(lVar1 + 0x728);
    uStack_a4 = *(undefined4 *)(lVar1 + 0x72c);
    uStack_a0 = *(undefined4 *)(lVar1 + 0x730);
    uStack_9c = *(undefined4 *)(lVar1 + 0x734);
    local_98 = *(undefined4 *)(lVar1 + 0x738);
    uStack_94 = *(undefined4 *)(lVar1 + 0x73c);
    uStack_90 = *(undefined4 *)(lVar1 + 0x740);
    uStack_8c = *(undefined4 *)(lVar1 + 0x744);
    cVar2 = FUN_142f9e4d0(&local_f8,local_108,0);
    fVar7 = (float)DAT_14622e710;
    fVar9 = DAT_14622e710._4_4_;
    fVar8 = DAT_14622e718;
    if (cVar2 != '\0') {
      fVar7 = local_108._0_4_;
      fVar9 = local_108._4_4_;
      fVar8 = local_100;
    }
  }
  *param_2 = CONCAT44(fVar9,fVar7);
  *(float *)(param_2 + 1) = fVar8;
  return param_2;
}



// FUNCTION 1407043d0 FUN_1407043d0 body=264 status=ok
// SIG undefined FUN_1407043d0(void)

undefined8
FUN_1407043d0(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  char cVar1;
  undefined8 *puVar2;
  char local_res10 [8];
  float local_res18 [2];
  undefined1 local_res20 [8];
  longlong *local_38;
  undefined1 local_30 [24];
  
  *param_4 = DAT_14622e710;
  *(undefined4 *)(param_4 + 1) = DAT_14622e718;
  *param_3 = *param_4;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_4 + 1);
  if (*(longlong *)(*param_2 + 0x488) != 0) {
    puVar2 = (undefined8 *)FUN_142f9e160(local_30);
    *param_3 = *puVar2;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar2 + 1);
    cVar1 = FUN_142cc45e0(param_1 + 0x108,*(undefined8 *)(*param_2 + 0x568),param_4,&local_38,
                          local_res10);
    if (cVar1 != '\0') {
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x578))(local_38,local_res20,local_res18);
        *(float *)(param_4 + 1) = *(float *)(param_4 + 1) - local_res18[0];
      }
      if ((local_res10[0] != '\0') && (param_5 != (undefined8 *)0x0)) {
        *param_5 = local_38;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1407044e0 FUN_1407044e0 body=44 status=ok
// SIG undefined FUN_1407044e0(void)

undefined8 FUN_1407044e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_1406fff30(param_2,*(longlong *)(param_3 + 8) + *(longlong *)(param_1 + 0xd8) + 0x60);
  return param_2;
}



// FUNCTION 140704510 FUN_140704510 body=49 status=ok
// SIG undefined FUN_140704510(void)

undefined8 FUN_140704510(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_68 [96];
  
  uVar1 = (**(code **)(*param_1 + 0x3a8))(param_1,local_68);
  FUN_142f89220(param_2,uVar1);
  return param_2;
}



// FUNCTION 140704550 FUN_140704550 body=44 status=ok
// SIG undefined FUN_140704550(void)

undefined8 FUN_140704550(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_1406fff30(param_2,*(longlong *)(param_3 + 8) + *(longlong *)(param_1 + 0xd8) + 0x70);
  return param_2;
}



// FUNCTION 140704580 FUN_140704580 body=44 status=ok
// SIG undefined FUN_140704580(void)

undefined8 FUN_140704580(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_1406fff30(param_2,*(longlong *)(param_3 + 8) + *(longlong *)(param_1 + 0xd8) + 0x68);
  return param_2;
}



// FUNCTION 1407045b0 FUN_1407045b0 body=656 status=ok
// SIG undefined FUN_1407045b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1407045b0(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 local_a8 [2];
  undefined1 local_98 [4];
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  undefined1 local_70;
  undefined3 uStack_6f;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  float fStack_58;
  byte bStack_54;
  byte bStack_53;
  byte bStack_52;
  byte bStack_51;
  byte local_50;
  byte bStack_4f;
  undefined1 auStack_4e [6];
  byte local_48;
  byte local_47;
  byte local_46;
  int local_44;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  float local_38;
  float local_34;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x3a0))();
  local_98[0] = *(undefined1 *)(param_2 + 0x68);
  local_74 = *(float *)(param_2 + 0x8c);
  local_94 = *(undefined8 *)(param_2 + 0x6c);
  local_8c = *(undefined4 *)(param_2 + 0x74);
  local_88 = *(undefined4 *)(param_2 + 0x78);
  local_84 = *(undefined4 *)(param_2 + 0x7c);
  local_80 = *(undefined4 *)(param_2 + 0x80);
  local_7c = *(undefined4 *)(param_2 + 0x84);
  local_40 = *(undefined1 *)(param_2 + 0xc0);
  local_3e = *(undefined1 *)(param_2 + 0xc2);
  local_3f = *(undefined1 *)((longlong)param_1 + 0x202);
  local_48 = *(byte *)((longlong)param_1 + 0x201) | *(byte *)(param_2 + 0xb8);
  local_46 = *(byte *)((longlong)param_1 + 0x204) & *(byte *)(param_2 + 0xba);
  local_47 = *(byte *)((longlong)param_1 + 0x206) & *(byte *)(param_2 + 0xb9);
  local_78 = *(float *)(param_2 + 0x88);
  local_60 = *(undefined1 *)(param_2 + 0xa0);
  uStack_5f = *(undefined1 *)(param_2 + 0xa1);
  uStack_5e = *(undefined1 *)(param_2 + 0xa2);
  uStack_5d = *(undefined1 *)(param_2 + 0xa3);
  uStack_5c = *(undefined1 *)(param_2 + 0xa4);
  uStack_5b = *(undefined1 *)(param_2 + 0xa5);
  uStack_5a = *(undefined1 *)(param_2 + 0xa6);
  uStack_59 = *(undefined1 *)(param_2 + 0xa7);
  fStack_58 = *(float *)(param_2 + 0xa8);
  bStack_54 = *(byte *)(param_2 + 0xac) & *(byte *)(param_1 + 0x45);
  bStack_53 = *(byte *)(param_2 + 0xad) | *(byte *)((longlong)param_1 + 0x229);
  bStack_52 = *(byte *)(param_2 + 0xae) & *(byte *)((longlong)param_1 + 0x22a);
  bStack_51 = *(byte *)(param_2 + 0xaf) | *(byte *)((longlong)param_1 + 0x22b);
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  bStack_4f = (byte)((ulonglong)uVar1 >> 8);
  bStack_4f = bStack_4f & *(byte *)((longlong)param_1 + 0x22d);
  auStack_4e = SUB86((ulonglong)uVar1 >> 0x10,0);
  local_50 = (byte)uVar1;
  _local_50 = CONCAT71(_bStack_4f,local_50 | *(byte *)((longlong)param_1 + 0x22c));
  uVar3 = _local_50;
  auStack_4e._2_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  bVar2 = (float)auStack_4e._2_4_ < *(float *)(param_1 + 0x46);
  _local_50 = uVar3;
  if (bVar2) {
    _local_50 = CONCAT44(*(float *)(param_1 + 0x46),(int)uVar3);
  }
  local_44 = (int)param_1[0x41];
  if ((int)param_1[0x41] <= *(int *)(param_2 + 0xbc)) {
    local_44 = *(int *)(param_2 + 0xbc);
  }
  uStack_6c = (undefined4)param_1[0x42];
  uStack_68 = (undefined4)((ulonglong)param_1[0x42] >> 0x20);
  uStack_64 = (undefined4)param_1[0x43];
  _local_70 = CONCAT31((int3)((ulonglong)*(undefined8 *)(param_2 + 0x90) >> 8),
                       *(undefined1 *)((longlong)param_1 + 0x20c));
  local_a8[0] = *(undefined8 *)(*param_3 + 0x568);
  fVar4 = (float)FUN_142de77e0(param_1 + 0x30,*param_3,0,local_a8);
  if (local_78 < fVar4) {
    local_78 = fVar4;
  }
  local_a8[0] = *(undefined8 *)(*param_3 + 0x568);
  local_b8 = local_a8;
  FUN_142df1760(param_1 + 0x20,&local_38,*param_3,0);
  if (local_30 == '\x01') {
    fVar4 = local_38 + local_34;
    local_38 = local_38 - local_34;
    if (local_38 == fVar4) {
      local_38 = -fVar4;
    }
    fVar5 = (fVar4 - local_38) * 0.5;
    if (local_74 < fVar5) {
      local_74 = fVar5;
    }
    fStack_58 = fStack_58 + local_38 * 0.5 + fVar4 * 0.5;
  }
  else {
    fVar4 = (float)FUN_142cc4350(&local_38);
    if (local_74 < fVar4) {
      local_74 = fVar4;
    }
  }
  FUN_142fb4460(param_2,local_98);
  return param_2;
}



// FUNCTION 140704840 FUN_140704840 body=1256 status=ok
// SIG undefined FUN_140704840(void)

undefined1 * FUN_140704840(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res8 [2];
  undefined8 local_208;
  float local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8 [16];
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined1 local_187;
  undefined1 local_186;
  undefined4 local_184;
  undefined1 local_180;
  undefined1 local_17f;
  undefined1 local_17e;
  undefined8 local_178;
  float local_170;
  undefined4 local_16c;
  undefined8 local_164;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
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
  undefined8 local_78;
  
  lVar8 = *(longlong *)(param_1 + 0xd8) + param_3[1];
  if ((*(char *)(lVar8 + 0x28) == '\x02') && (*(float *)(param_3 + 3) < *(float *)(lVar8 + 0x60))) {
    lVar8 = *(longlong *)(lVar8 + 0x48);
    *param_2 = *(undefined1 *)(lVar8 + 0x68);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar8 + 0x6c);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(lVar8 + 0x74);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar8 + 0x78);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(lVar8 + 0x7c);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(lVar8 + 0x80);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(lVar8 + 0x84);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(lVar8 + 0x88);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(lVar8 + 0x8c);
    uVar5 = *(undefined8 *)(lVar8 + 0x98);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar8 + 0x90);
    *(undefined8 *)(param_2 + 0x30) = uVar5;
    uVar5 = *(undefined8 *)(lVar8 + 0xa8);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(lVar8 + 0xa0);
    *(undefined8 *)(param_2 + 0x40) = uVar5;
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(lVar8 + 0xb0);
    param_2[0x50] = *(undefined1 *)(lVar8 + 0xb8);
    param_2[0x51] = *(undefined1 *)(lVar8 + 0xb9);
    param_2[0x52] = *(undefined1 *)(lVar8 + 0xba);
    *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(lVar8 + 0xbc);
    param_2[0x58] = *(undefined1 *)(lVar8 + 0xc0);
    param_2[0x59] = *(undefined1 *)(lVar8 + 0xc1);
    param_2[0x5a] = *(undefined1 *)(lVar8 + 0xc2);
    return param_2;
  }
  *(float *)(lVar8 + 0x60) = *(float *)(param_3 + 3) + *(float *)(param_1 + 0x24c);
  lVar8 = *(longlong *)(*param_3 + 0x628);
  if (lVar8 != 0) {
    puVar1 = (undefined8 *)(lVar8 + 0x6e8);
    FUN_142f88b40(&local_178);
    local_f8 = *(undefined8 *)(lVar8 + 0x6b8);
    puVar9 = (undefined8 *)FUN_142fa2d40(puVar1,&local_208);
    local_16c = *(undefined4 *)(param_1 + 0x240);
    fVar2 = *(float *)(param_1 + 0x244);
    local_178 = *puVar9;
    local_170 = *(float *)(puVar9 + 1);
    local_158 = *puVar1;
    uStack_150 = *(undefined8 *)(lVar8 + 0x6f0);
    local_148 = *(undefined8 *)(lVar8 + 0x6f8);
    uStack_140 = *(undefined8 *)(lVar8 + 0x700);
    local_138 = *(undefined8 *)(lVar8 + 0x708);
    uStack_130 = *(undefined8 *)(lVar8 + 0x710);
    local_128 = *(undefined8 *)(lVar8 + 0x718);
    uStack_120 = *(undefined8 *)(lVar8 + 0x720);
    local_118 = *(undefined4 *)(lVar8 + 0x728);
    uStack_114 = *(undefined4 *)(lVar8 + 0x72c);
    uStack_110 = *(undefined4 *)(lVar8 + 0x730);
    uStack_10c = *(undefined4 *)(lVar8 + 0x734);
    local_108 = *(undefined4 *)(lVar8 + 0x738);
    uStack_104 = *(undefined4 *)(lVar8 + 0x73c);
    uStack_100 = *(undefined4 *)(lVar8 + 0x740);
    uStack_fc = *(undefined4 *)(lVar8 + 0x744);
    if (0.0 < fVar2) {
      fVar3 = *(float *)(lVar8 + 0x774);
      fVar4 = *(float *)(lVar8 + 0x778);
      fVar10 = fVar3 * fVar3 + fVar4 * fVar4;
      if (fVar10 == 1.0) {
        fVar14 = fVar4;
        fVar12 = 0.0;
        fVar13 = fVar3;
        if (*(float *)(lVar8 + 0x77c) == 0.0) {
          local_208 = *(undefined8 *)(lVar8 + 0x774);
          local_200 = *(float *)(lVar8 + 0x77c);
          fVar14 = (float)((ulonglong)local_208 >> 0x20);
          fVar12 = local_200;
          fVar13 = (float)local_208;
        }
      }
      else {
        fVar14 = DAT_1468b5d94;
        fVar12 = DAT_1468b5d98;
        fVar13 = DAT_1468b5d90;
        if (1e-08 <= fVar10) {
          auVar11 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
          local_res8[0] = auVar11._0_4_;
          local_res8[0] =
               local_res8[0] + local_res8[0] * (0.5 - fVar10 * 0.5 * local_res8[0] * local_res8[0]);
          local_res8[0] =
               local_res8[0] + local_res8[0] * (0.5 - fVar10 * 0.5 * local_res8[0] * local_res8[0]);
          fVar13 = fVar3 * local_res8[0];
          fVar14 = fVar4 * local_res8[0];
          fVar12 = 0.0;
        }
      }
      local_178._4_4_ = (float)((ulonglong)local_178 >> 0x20);
      local_178 = CONCAT44(local_178._4_4_ + fVar14 * fVar2,(float)local_178 + fVar2 * fVar13);
      local_170 = local_170 + fVar12 * fVar2;
    }
    if ((int)((ulonglong)uStack_150 >> 0x20) == -1) {
      puVar9 = (undefined8 *)FUN_142f92a50(local_res8,puVar1,local_16c,local_16c);
      local_164 = *puVar9;
      iVar7 = FUN_142fa3830(local_f8);
      uStack_150 = CONCAT44(iVar7,(undefined4)uStack_150);
      if (iVar7 == -1) goto LAB_140704cf9;
    }
    cVar6 = FUN_142f9e730(&local_178,&local_1f8,0);
    if (cVar6 != '\0') {
      FUN_142f88ab0(&local_e8);
      local_78 = *(undefined8 *)(lVar8 + 0x6b8);
      local_e8 = local_1f8;
      local_dc = *(undefined4 *)(param_1 + 0x248);
      local_e0 = local_1f0;
      local_d8 = *puVar1;
      uStack_d0 = *(undefined8 *)(lVar8 + 0x6f0);
      local_c8 = *(undefined8 *)(lVar8 + 0x6f8);
      uStack_c0 = *(undefined8 *)(lVar8 + 0x700);
      local_b8 = *(undefined8 *)(lVar8 + 0x708);
      uStack_b0 = *(undefined8 *)(lVar8 + 0x710);
      local_a8 = *(undefined8 *)(lVar8 + 0x718);
      uStack_a0 = *(undefined8 *)(lVar8 + 0x720);
      local_98 = *(undefined4 *)(lVar8 + 0x728);
      uStack_94 = *(undefined4 *)(lVar8 + 0x72c);
      uStack_90 = *(undefined4 *)(lVar8 + 0x730);
      uStack_8c = *(undefined4 *)(lVar8 + 0x734);
      local_88 = *(undefined4 *)(lVar8 + 0x738);
      uStack_84 = *(undefined4 *)(lVar8 + 0x73c);
      uStack_80 = *(undefined4 *)(lVar8 + 0x740);
      uStack_7c = *(undefined4 *)(lVar8 + 0x744);
      cVar6 = FUN_142f9e4d0(&local_e8,&local_1e8,0);
      if (cVar6 != '\0') {
        FUN_142f89530(local_1d8);
        *(undefined8 *)(param_2 + 4) = local_1e8;
        *(undefined4 *)(param_2 + 0xc) = local_1e0;
        *param_2 = 0;
        *(undefined4 *)(param_2 + 0x10) = local_1c8;
        *(undefined4 *)(param_2 + 0x14) = local_1c4;
        *(undefined4 *)(param_2 + 0x18) = local_1c0;
        *(undefined4 *)(param_2 + 0x1c) = local_1bc;
        param_2[0x50] = local_188;
        param_2[0x51] = local_187;
        param_2[0x52] = local_186;
        *(undefined4 *)(param_2 + 0x54) = local_184;
        *(undefined4 *)(param_2 + 0x20) = local_1b8;
        param_2[0x58] = local_180;
        *(undefined8 *)(param_2 + 0x28) = local_1b0;
        *(undefined8 *)(param_2 + 0x30) = uStack_1a8;
        param_2[0x59] = local_17f;
        *(undefined4 *)(param_2 + 0x24) = local_1b4;
        param_2[0x5a] = local_17e;
        *(undefined8 *)(param_2 + 0x38) = local_1a0;
        *(undefined8 *)(param_2 + 0x40) = uStack_198;
        *(undefined8 *)(param_2 + 0x48) = local_190;
        return param_2;
      }
    }
  }
LAB_140704cf9:
  FUN_142f89530(param_2);
  return param_2;
}



// FUNCTION 140704d30 FUN_140704d30 body=781 status=ok
// SIG undefined FUN_140704d30(void)

undefined1 * FUN_140704d30(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_188 [16];
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136;
  undefined4 local_134;
  undefined1 local_130;
  undefined1 local_12f;
  undefined1 local_12e;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 local_18 [16];
  
  lVar4 = *(longlong *)(param_1 + 0xd8) + param_3[1];
  if ((*(char *)(lVar4 + 0x28) != '\x02') || (*(float *)(lVar4 + 0x60) <= *(float *)(param_3 + 3)))
  {
    *(float *)(lVar4 + 0x60) = *(float *)(param_3 + 3) + *(float *)(param_1 + 0x248);
    lVar4 = *(longlong *)(*param_3 + 0x628);
    if (lVar4 != 0) {
      puVar1 = (undefined8 *)(lVar4 + 0x6e8);
      FUN_142f88b40(&local_a8);
      local_28 = *(undefined8 *)(lVar4 + 0x6b8);
      puVar5 = (undefined8 *)FUN_142fa2d40(puVar1,local_18);
      local_a8 = *puVar5;
      local_a0 = *(undefined4 *)(puVar5 + 1);
      local_9c = *(undefined4 *)(param_1 + 0x240);
      local_88 = *puVar1;
      uStack_80 = *(undefined8 *)(lVar4 + 0x6f0);
      local_78 = *(undefined8 *)(lVar4 + 0x6f8);
      uStack_70 = *(undefined8 *)(lVar4 + 0x700);
      local_68 = *(undefined8 *)(lVar4 + 0x708);
      uStack_60 = *(undefined8 *)(lVar4 + 0x710);
      local_58 = *(undefined8 *)(lVar4 + 0x718);
      uStack_50 = *(undefined8 *)(lVar4 + 0x720);
      local_48 = *(undefined4 *)(lVar4 + 0x728);
      uStack_44 = *(undefined4 *)(lVar4 + 0x72c);
      uStack_40 = *(undefined4 *)(lVar4 + 0x730);
      uStack_3c = *(undefined4 *)(lVar4 + 0x734);
      local_38 = *(undefined4 *)(lVar4 + 0x738);
      uStack_34 = *(undefined4 *)(lVar4 + 0x73c);
      uStack_30 = *(undefined4 *)(lVar4 + 0x740);
      uStack_2c = *(undefined4 *)(lVar4 + 0x744);
      cVar3 = FUN_142f9e730(&local_a8,&local_1a8,0);
      if (cVar3 != '\0') {
        FUN_142f88ab0(&local_128);
        local_b8 = *(undefined8 *)(lVar4 + 0x6b8);
        local_128 = local_1a8;
        local_11c = *(undefined4 *)(param_1 + 0x244);
        local_120 = local_1a0;
        local_118 = *puVar1;
        uStack_110 = *(undefined8 *)(lVar4 + 0x6f0);
        local_108 = *(undefined8 *)(lVar4 + 0x6f8);
        uStack_100 = *(undefined8 *)(lVar4 + 0x700);
        local_f8 = *(undefined8 *)(lVar4 + 0x708);
        uStack_f0 = *(undefined8 *)(lVar4 + 0x710);
        local_e8 = *(undefined8 *)(lVar4 + 0x718);
        uStack_e0 = *(undefined8 *)(lVar4 + 0x720);
        local_d8 = *(undefined4 *)(lVar4 + 0x728);
        uStack_d4 = *(undefined4 *)(lVar4 + 0x72c);
        uStack_d0 = *(undefined4 *)(lVar4 + 0x730);
        uStack_cc = *(undefined4 *)(lVar4 + 0x734);
        local_c8 = *(undefined4 *)(lVar4 + 0x738);
        uStack_c4 = *(undefined4 *)(lVar4 + 0x73c);
        uStack_c0 = *(undefined4 *)(lVar4 + 0x740);
        uStack_bc = *(undefined4 *)(lVar4 + 0x744);
        cVar3 = FUN_142f9e4d0(&local_128,&local_198,0);
        if (cVar3 != '\0') {
          FUN_142f89530(local_188);
          *(undefined8 *)(param_2 + 4) = local_198;
          *(undefined4 *)(param_2 + 0xc) = local_190;
          *param_2 = 0;
          *(undefined4 *)(param_2 + 0x10) = local_178;
          *(undefined4 *)(param_2 + 0x14) = local_174;
          *(undefined4 *)(param_2 + 0x18) = local_170;
          *(undefined4 *)(param_2 + 0x1c) = local_16c;
          param_2[0x50] = local_138;
          param_2[0x51] = local_137;
          param_2[0x52] = local_136;
          *(undefined4 *)(param_2 + 0x54) = local_134;
          *(undefined4 *)(param_2 + 0x20) = local_168;
          param_2[0x58] = local_130;
          *(undefined8 *)(param_2 + 0x28) = local_160;
          *(undefined8 *)(param_2 + 0x30) = uStack_158;
          param_2[0x59] = local_12f;
          *(undefined4 *)(param_2 + 0x24) = local_164;
          param_2[0x5a] = local_12e;
          *(undefined8 *)(param_2 + 0x38) = local_150;
          *(undefined8 *)(param_2 + 0x40) = uStack_148;
          *(undefined8 *)(param_2 + 0x48) = local_140;
          return param_2;
        }
      }
    }
    FUN_142f89530(param_2);
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x48);
    *param_2 = *(undefined1 *)(lVar4 + 0x68);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar4 + 0x6c);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(lVar4 + 0x74);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar4 + 0x78);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(lVar4 + 0x7c);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(lVar4 + 0x80);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(lVar4 + 0x84);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(lVar4 + 0x88);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(lVar4 + 0x8c);
    uVar2 = *(undefined8 *)(lVar4 + 0x98);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar4 + 0x90);
    *(undefined8 *)(param_2 + 0x30) = uVar2;
    uVar2 = *(undefined8 *)(lVar4 + 0xa8);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(lVar4 + 0xa0);
    *(undefined8 *)(param_2 + 0x40) = uVar2;
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(lVar4 + 0xb0);
    param_2[0x50] = *(undefined1 *)(lVar4 + 0xb8);
    param_2[0x51] = *(undefined1 *)(lVar4 + 0xb9);
    param_2[0x52] = *(undefined1 *)(lVar4 + 0xba);
    *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(lVar4 + 0xbc);
    param_2[0x58] = *(undefined1 *)(lVar4 + 0xc0);
    param_2[0x59] = *(undefined1 *)(lVar4 + 0xc1);
    param_2[0x5a] = *(undefined1 *)(lVar4 + 0xc2);
  }
  return param_2;
}



// FUNCTION 140705040 FUN_140705040 body=396 status=ok
// SIG undefined FUN_140705040(void)

undefined1 * FUN_140705040(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_res8;
  undefined8 local_res18;
  undefined1 local_88 [4];
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  
  lVar5 = *(longlong *)(param_1 + 0xd8);
  lVar1 = param_3[1];
  lVar4 = 0;
  local_res8 = (longlong *)0x0;
  FUN_142cc3a70(param_1 + 0x240,*(undefined8 *)(*param_3 + 0x568),&local_res8);
  plVar2 = local_res8;
  if (local_res8 != (longlong *)0x0) {
    uVar3 = AUGWeapon_Hook::GetPrivateStaticClass();
    lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
  }
  FWeakObjectPtr::operator=(lVar5 + lVar1 + 0x60,lVar4);
  if (lVar4 == 0) {
    FUN_142f89530(param_2);
  }
  else {
    FUN_142f894f0(local_88,lVar4);
    local_37 = 0;
    local_68 = *(undefined4 *)(lVar4 + 0x704);
    local_res18 = 0xffffffffffffffff;
    local_64 = (float)FUN_142de77e0(param_1 + 0x100,*param_3,0,&local_res18);
    local_64 = local_64 + *(float *)(lVar4 + 0x708);
    lVar5 = FUN_14076aaa0(lVar4);
    *param_2 = local_88[0];
    *(undefined8 *)(param_2 + 4) = local_84;
    *(undefined4 *)(param_2 + 0xc) = local_7c;
    *(undefined4 *)(param_2 + 0x10) = local_78;
    *(undefined4 *)(param_2 + 0x14) = local_74;
    *(undefined4 *)(param_2 + 0x18) = local_70;
    *(undefined4 *)(param_2 + 0x1c) = local_6c;
    param_2[0x50] = local_38;
    param_2[0x51] = local_37;
    *(undefined4 *)(param_2 + 0x20) = local_68;
    *(undefined4 *)(param_2 + 0x54) = local_34;
    *(undefined8 *)(param_2 + 0x28) = local_60;
    *(undefined8 *)(param_2 + 0x30) = uStack_58;
    param_2[0x58] = local_30;
    *(float *)(param_2 + 0x24) = local_64;
    param_2[0x59] = local_2f;
    param_2[0x52] = lVar5 == 0;
    *(undefined8 *)(param_2 + 0x38) = local_50;
    *(undefined8 *)(param_2 + 0x40) = uStack_48;
    param_2[0x5a] = 1;
    *(undefined8 *)(param_2 + 0x48) = local_40;
  }
  return param_2;
}



// FUNCTION 1407051d0 FUN_1407051d0 body=70 status=ok
// SIG undefined FUN_1407051d0(void)

longlong FUN_1407051d0(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_142f89470(param_2,*(longlong *)(param_3 + 8) + 0x70 + *(longlong *)(param_1 + 0xd8));
  *(undefined1 *)(param_2 + 0x58) = *(undefined1 *)(param_1 + 0x28c);
  *(undefined4 *)(param_2 + 0x20) = 0x43c80000;
  return param_2;
}



// FUNCTION 140705220 FUN_140705220 body=1900 status=ok
// SIG undefined FUN_140705220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_140705220(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  float *pfVar11;
  undefined8 *puVar12;
  byte bVar13;
  undefined1 auStack_528 [32];
  char local_508 [8];
  undefined8 local_500;
  float local_4f8;
  float local_4f0;
  float local_4ec;
  float local_4e8;
  undefined1 local_4d8 [4];
  undefined8 local_4d4;
  float local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined1 local_488;
  undefined1 local_487;
  undefined1 local_486;
  undefined4 local_484;
  undefined1 local_480;
  undefined1 local_47f;
  byte local_47e;
  undefined8 local_478;
  float local_470;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  longlong local_458;
  longlong local_450;
  undefined1 local_448 [16];
  undefined1 local_438 [96];
  undefined1 local_3d8 [8];
  undefined1 local_3d0 [904];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_528;
  lVar7 = *(longlong *)(*param_3 + 0x568);
  if (lVar7 == 0) {
    FUN_142f89530(param_2);
    return param_2;
  }
  FUN_142f89530(local_4d8);
  FUN_142dc1ad0(local_3d8);
  local_4f0 = DAT_14622e6f0;
  local_4e8 = DAT_14622e6f8;
  local_4ec = DAT_14622e6f4;
  cVar5 = FUN_142cc5430(param_1 + 0x240,lVar7,local_3d8);
  if (cVar5 == '\0') {
    cVar5 = FUN_142cc3f20(param_1 + 0x240,lVar7,&local_458);
    if (cVar5 == '\0') {
      cVar5 = FUN_142cc3a70(param_1 + 0x240,lVar7,&local_450);
      if (cVar5 == '\0') {
        cVar5 = FUN_142cc54f0(param_1 + 0x240,lVar7,local_448);
        if (cVar5 == '\0') goto LAB_14070580d;
        puVar10 = (undefined1 *)FUN_142f89470(local_438,local_448);
        goto LAB_14070577b;
      }
      puVar10 = (undefined1 *)FUN_142f894b0(local_438,local_450);
      local_4d8[0] = *puVar10;
      local_4d4 = *(undefined8 *)(puVar10 + 4);
      local_4cc = *(float *)(puVar10 + 0xc);
      local_4c8 = *(undefined4 *)(puVar10 + 0x10);
      local_4c4 = *(undefined4 *)(puVar10 + 0x14);
      local_4c0 = *(undefined4 *)(puVar10 + 0x18);
      local_4bc = *(undefined4 *)(puVar10 + 0x1c);
      local_4b8 = *(undefined4 *)(puVar10 + 0x20);
      local_4b4 = *(undefined4 *)(puVar10 + 0x24);
      local_4b0 = *(undefined8 *)(puVar10 + 0x28);
      uStack_4a8 = *(undefined8 *)(puVar10 + 0x30);
      local_4a0 = *(undefined8 *)(puVar10 + 0x38);
      uStack_498 = *(undefined8 *)(puVar10 + 0x40);
      local_490 = *(undefined8 *)(puVar10 + 0x48);
      local_488 = puVar10[0x50];
      local_487 = puVar10[0x51];
      local_486 = puVar10[0x52];
      local_484 = *(undefined4 *)(puVar10 + 0x54);
      local_480 = puVar10[0x58];
      local_47f = puVar10[0x59];
      local_47e = puVar10[0x5a];
      if (local_450 == 0) goto LAB_14070580d;
      lVar7 = *(longlong *)(local_450 + 0x168);
      if (lVar7 == 0) {
        local_4f0 = (float)DAT_1468b5da0;
        local_4ec = (float)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_4f8 = DAT_1468b5da8;
      }
      else {
        local_468 = *(float *)(lVar7 + 0x210);
        fStack_464 = *(float *)(lVar7 + 0x214);
        fStack_460 = *(float *)(lVar7 + 0x218);
        fStack_45c = *(float *)(lVar7 + 0x21c);
        auVar4._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != fStack_464);
        auVar4._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != local_468);
        auVar4._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fStack_460);
        auVar4._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != fStack_45c);
        iVar6 = movmskps((uint)local_47e,auVar4);
        if (iVar6 != 0) {
          *(float *)(lVar7 + 0x250) = local_468;
          *(float *)(lVar7 + 0x254) = fStack_464;
          *(float *)(lVar7 + 600) = fStack_460;
          *(float *)(lVar7 + 0x25c) = fStack_45c;
          puVar12 = (undefined8 *)FQuat::Rotator(&local_468,&local_500);
          *(undefined8 *)(lVar7 + 0x260) = *puVar12;
          *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar12 + 1);
        }
        local_4f0 = (float)*(undefined8 *)(lVar7 + 0x260);
        local_4ec = (float)((ulonglong)*(undefined8 *)(lVar7 + 0x260) >> 0x20);
        local_4f8 = *(float *)(lVar7 + 0x268);
      }
    }
    else {
      if (local_458 == 0) goto LAB_14070580d;
      puVar10 = (undefined1 *)FUN_142f894f0(local_438);
      local_4d8[0] = *puVar10;
      local_4d4 = *(undefined8 *)(puVar10 + 4);
      local_4cc = *(float *)(puVar10 + 0xc);
      local_4c8 = *(undefined4 *)(puVar10 + 0x10);
      local_4c4 = *(undefined4 *)(puVar10 + 0x14);
      local_4c0 = *(undefined4 *)(puVar10 + 0x18);
      local_4bc = *(undefined4 *)(puVar10 + 0x1c);
      local_4b8 = *(undefined4 *)(puVar10 + 0x20);
      local_4b4 = *(undefined4 *)(puVar10 + 0x24);
      local_4b0 = *(undefined8 *)(puVar10 + 0x28);
      uStack_4a8 = *(undefined8 *)(puVar10 + 0x30);
      local_4a0 = *(undefined8 *)(puVar10 + 0x38);
      uStack_498 = *(undefined8 *)(puVar10 + 0x40);
      local_490 = *(undefined8 *)(puVar10 + 0x48);
      local_488 = puVar10[0x50];
      local_487 = puVar10[0x51];
      local_486 = puVar10[0x52];
      local_484 = *(undefined4 *)(puVar10 + 0x54);
      local_480 = puVar10[0x58];
      local_47f = puVar10[0x59];
      local_47e = puVar10[0x5a];
      local_468 = *(float *)(local_458 + 0x210);
      fStack_464 = *(float *)(local_458 + 0x214);
      fStack_460 = *(float *)(local_458 + 0x218);
      fStack_45c = *(float *)(local_458 + 0x21c);
      auVar3._4_4_ = -(uint)(*(float *)(local_458 + 0x254) != fStack_464);
      auVar3._0_4_ = -(uint)(*(float *)(local_458 + 0x250) != local_468);
      auVar3._8_4_ = -(uint)(*(float *)(local_458 + 600) != fStack_460);
      auVar3._12_4_ = -(uint)(*(float *)(local_458 + 0x25c) != fStack_45c);
      iVar6 = movmskps((uint)local_47e,auVar3);
      if (iVar6 != 0) {
        *(float *)(local_458 + 0x250) = local_468;
        *(float *)(local_458 + 0x254) = fStack_464;
        *(float *)(local_458 + 600) = fStack_460;
        *(float *)(local_458 + 0x25c) = fStack_45c;
        puVar12 = (undefined8 *)FQuat::Rotator(&local_468,&local_500);
        *(undefined8 *)(local_458 + 0x260) = *puVar12;
        *(undefined4 *)(local_458 + 0x268) = *(undefined4 *)(puVar12 + 1);
      }
      local_4f0 = (float)*(undefined8 *)(local_458 + 0x260);
      local_4ec = (float)((ulonglong)*(undefined8 *)(local_458 + 0x260) >> 0x20);
      local_4f8 = *(float *)(local_458 + 0x268);
    }
    local_500 = CONCAT44(local_4ec,local_4f0);
    local_4e8 = local_4f8;
  }
  else {
    lVar7 = FWeakObjectPtr::Get(local_3d8);
    lVar8 = FUN_142dd0030(local_3d8);
    if ((lVar7 == 0) || (lVar8 == 0)) goto LAB_14070580d;
    cVar5 = FWeakObjectPtr::IsValid(local_3d0);
    if (cVar5 == '\0') {
      local_508[0] = '\0';
      FUN_142dcd3a0(local_3d8,&local_500,local_508);
      puVar10 = (undefined1 *)FUN_142f894b0(local_438,lVar8);
      local_4d8[0] = *puVar10;
      local_4d4 = *(undefined8 *)(puVar10 + 4);
      local_4cc = *(float *)(puVar10 + 0xc);
      local_4c8 = *(undefined4 *)(puVar10 + 0x10);
      local_4c4 = *(undefined4 *)(puVar10 + 0x14);
      local_4c0 = *(undefined4 *)(puVar10 + 0x18);
      local_4bc = *(undefined4 *)(puVar10 + 0x1c);
      local_4b8 = *(undefined4 *)(puVar10 + 0x20);
      local_4b4 = *(undefined4 *)(puVar10 + 0x24);
      local_4b0 = *(undefined8 *)(puVar10 + 0x28);
      uStack_4a8 = *(undefined8 *)(puVar10 + 0x30);
      local_4a0 = *(undefined8 *)(puVar10 + 0x38);
      uStack_498 = *(undefined8 *)(puVar10 + 0x40);
      local_490 = *(undefined8 *)(puVar10 + 0x48);
      local_488 = puVar10[0x50];
      local_487 = puVar10[0x51];
      local_486 = puVar10[0x52];
      local_484 = *(undefined4 *)(puVar10 + 0x54);
      local_480 = puVar10[0x58];
      local_47f = puVar10[0x59];
      local_47e = puVar10[0x5a];
      lVar7 = *(longlong *)(lVar8 + 0x168);
      if (lVar7 == 0) {
        local_4f0 = (float)DAT_1468b5da0;
        local_4ec = (float)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_4e8 = DAT_1468b5da8;
      }
      else {
        local_468 = *(float *)(lVar7 + 0x210);
        fStack_464 = *(float *)(lVar7 + 0x214);
        fStack_460 = *(float *)(lVar7 + 0x218);
        fStack_45c = *(float *)(lVar7 + 0x21c);
        auVar2._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != fStack_464);
        auVar2._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != local_468);
        auVar2._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fStack_460);
        auVar2._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != fStack_45c);
        iVar6 = movmskps((uint)local_47e,auVar2);
        if (iVar6 != 0) {
          *(float *)(lVar7 + 0x250) = local_468;
          *(float *)(lVar7 + 0x254) = fStack_464;
          *(float *)(lVar7 + 600) = fStack_460;
          *(float *)(lVar7 + 0x25c) = fStack_45c;
          puVar12 = (undefined8 *)FQuat::Rotator(&local_468,&local_478);
          *(undefined8 *)(lVar7 + 0x260) = *puVar12;
          *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar12 + 1);
        }
        local_4f0 = (float)*(undefined8 *)(lVar7 + 0x260);
        local_4ec = (float)((ulonglong)*(undefined8 *)(lVar7 + 0x260) >> 0x20);
        local_4e8 = *(float *)(lVar7 + 0x268);
      }
      local_478 = CONCAT44(local_4ec,local_4f0);
      local_470 = local_4e8;
      if (local_508[0] == '\0') {
        local_4d4 = local_500;
        local_4cc = local_4f8;
      }
      goto LAB_14070580d;
    }
    uVar9 = FWeakObjectPtr::Get(local_3d0);
    puVar10 = (undefined1 *)FUN_142f894f0(local_438,uVar9);
LAB_14070577b:
    local_4d8[0] = *puVar10;
    local_4d4 = *(undefined8 *)(puVar10 + 4);
    local_4cc = *(float *)(puVar10 + 0xc);
    local_4c8 = *(undefined4 *)(puVar10 + 0x10);
    local_4c4 = *(undefined4 *)(puVar10 + 0x14);
    local_4c0 = *(undefined4 *)(puVar10 + 0x18);
    local_4bc = *(undefined4 *)(puVar10 + 0x1c);
    local_4b8 = *(undefined4 *)(puVar10 + 0x20);
    local_4b4 = *(undefined4 *)(puVar10 + 0x24);
    local_4b0 = *(undefined8 *)(puVar10 + 0x28);
    uStack_4a8 = *(undefined8 *)(puVar10 + 0x30);
    local_4a0 = *(undefined8 *)(puVar10 + 0x38);
    uStack_498 = *(undefined8 *)(puVar10 + 0x40);
    local_490 = *(undefined8 *)(puVar10 + 0x48);
    local_488 = puVar10[0x50];
    local_487 = puVar10[0x51];
    local_486 = puVar10[0x52];
    local_484 = *(undefined4 *)(puVar10 + 0x54);
    local_47f = puVar10[0x59];
  }
LAB_14070580d:
  local_480 = *(undefined1 *)(param_1 + 0x25c);
  local_47e = 1;
  if (((local_4f0 != DAT_14622e6f0) || (local_4ec != DAT_14622e6f4)) ||
     (bVar13 = 1, local_4e8 != DAT_14622e6f8)) {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0xd8) + 0x60 + param_3[1]);
    pfVar11 = (float *)FRotator::Vector(&local_4f0,&local_500);
    local_470 = fVar1 * pfVar11[2];
    local_478 = CONCAT44(fVar1 * pfVar11[1],fVar1 * *pfVar11);
    puVar12 = (undefined8 *)
              FVector::RotateAngleAxis
                        (&local_478,&local_468,*(undefined4 *)(param_1 + 600),&DAT_1464aa798);
    local_4a0 = *puVar12;
    uStack_498 = CONCAT44(uStack_498._4_4_,*(undefined4 *)(puVar12 + 1));
    bVar13 = local_47e;
  }
  *param_2 = local_4d8[0];
  *(undefined8 *)(param_2 + 4) = local_4d4;
  *(float *)(param_2 + 0xc) = local_4cc;
  *(undefined4 *)(param_2 + 0x10) = local_4c8;
  *(undefined4 *)(param_2 + 0x14) = local_4c4;
  *(undefined4 *)(param_2 + 0x18) = local_4c0;
  *(undefined4 *)(param_2 + 0x1c) = local_4bc;
  param_2[0x50] = local_488;
  param_2[0x51] = local_487;
  *(undefined4 *)(param_2 + 0x20) = local_4b8;
  param_2[0x52] = local_486;
  *(undefined8 *)(param_2 + 0x28) = local_4b0;
  *(undefined8 *)(param_2 + 0x30) = uStack_4a8;
  *(undefined4 *)(param_2 + 0x54) = local_484;
  *(undefined4 *)(param_2 + 0x24) = local_4b4;
  param_2[0x59] = local_47f;
  param_2[0x58] = local_480;
  *(undefined8 *)(param_2 + 0x38) = local_4a0;
  *(undefined8 *)(param_2 + 0x40) = uStack_498;
  param_2[0x5a] = bVar13;
  *(undefined8 *)(param_2 + 0x48) = local_490;
  return param_2;
}



// FUNCTION 140705990 FUN_140705990 body=471 status=ok
// SIG undefined FUN_140705990(void)

undefined1 * FUN_140705990(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong local_res18 [2];
  undefined1 local_88 [16];
  undefined1 local_78 [4];
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  uint uStack_38;
  undefined1 uStack_33;
  undefined1 uStack_31;
  undefined8 local_30;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  
  if (((*(longlong *)(*param_3 + 0x568) != 0) &&
      (cVar5 = FUN_142cc3f20(param_1 + 0x240,*(longlong *)(*param_3 + 0x568),local_res18),
      cVar5 != '\0')) && (local_res18[0] != 0)) {
    lVar6 = ACameraActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(local_res18[0] + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res18[0] + 0x10) + 0x88) +
         (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (plVar3 = *(longlong **)(*param_3 + 0x488), plVar3 != (longlong *)0x0)) {
      uVar7 = FUN_1407a6820();
      lVar6 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar7);
      if ((lVar6 != 0) &&
         (((lVar8 = USkeletalMeshComponent::GetPostProcessInstance(local_res18[0]), lVar8 != 0 &&
           (*(longlong *)(*param_3 + 0x628) != 0)) &&
          (cVar5 = FUN_140731380(lVar6,local_res18[0]), cVar5 != '\0')))) {
        uVar7 = FUN_140738550(local_res18[0],local_88);
        FUN_142f89470(local_78,uVar7);
        uVar1 = *(undefined4 *)(lVar6 + 0x620);
        uVar2 = *(undefined4 *)(lVar6 + 0x61c);
        *param_2 = local_78[0];
        *(undefined8 *)(param_2 + 4) = local_74;
        *(undefined4 *)(param_2 + 0xc) = local_6c;
        *(undefined4 *)(param_2 + 0x10) = local_68;
        *(undefined4 *)(param_2 + 0x14) = local_64;
        *(undefined4 *)(param_2 + 0x18) = local_60;
        *(undefined4 *)(param_2 + 0x1c) = local_5c;
        param_2[0x50] = local_28;
        param_2[0x51] = local_27;
        param_2[0x52] = local_26;
        *(undefined4 *)(param_2 + 0x54) = local_24;
        *(undefined8 *)(param_2 + 0x28) = local_50;
        *(undefined8 *)(param_2 + 0x30) = uStack_48;
        param_2[0x58] = local_20;
        *(undefined4 *)(param_2 + 0x24) = uVar2;
        param_2[0x59] = local_1f;
        *(undefined8 *)(param_2 + 0x38) = local_40;
        *(ulonglong *)(param_2 + 0x40) =
             CONCAT17(uStack_31,(uint7)CONCAT15(uStack_33,(uint5)uStack_38));
        param_2[0x5a] = local_1e;
        *(undefined4 *)(param_2 + 0x20) = uVar1;
        *(undefined8 *)(param_2 + 0x48) = local_30;
        return param_2;
      }
    }
  }
  FUN_142f89530(param_2);
  return param_2;
}



// FUNCTION 140705b70 GetPropertyTooltip body=26 status=ok
// SIG undefined GetPropertyTooltip(void)

undefined8 UPropertyValue::GetPropertyTooltip(undefined8 param_1,undefined8 param_2)

{
  FUN_142f89530(param_2);
  return param_2;
}



// FUNCTION 140705b90 FUN_140705b90 body=319 status=ok
// SIG undefined FUN_140705b90(void)

ulonglong FUN_140705b90(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar3 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  fVar4 = *(float *)(lVar3 + 100);
  fVar5 = fVar4 - *(float *)(lVar3 + 0x60);
  fVar6 = (float)(int)(fVar5 * 0.0027777778) * 360.0;
  if (ABS(fVar5) < ABS(fVar6)) {
    fVar6 = fVar5;
  }
  fVar6 = fVar5 - fVar6;
  if (fVar6 < 0.0) {
    fVar6 = fVar6 + 360.0;
  }
  if (180.0 < fVar6) {
    fVar6 = fVar6 - 360.0;
  }
  fVar6 = fVar6 + *(float *)(lVar3 + 0x68);
  *(float *)(lVar3 + 0x68) = fVar6;
  if (*(float *)(lVar3 + 0x140) <= ABS(fVar6)) {
    return CONCAT71((uint7)(uint3)((uint)(int)(fVar5 * 0.0027777778) >> 8),1);
  }
  fVar6 = *(float *)(lVar3 + 0x144);
  if (*(char *)(lVar3 + 0x6c) != '\0') {
    fVar6 = -fVar6;
  }
  *(float *)(lVar3 + 0x60) = fVar4;
  fVar4 = fVar4 + fVar6;
  fVar6 = (float)(int)(fVar4 * 0.0027777778) * 360.0;
  if (ABS(fVar4) < ABS(fVar6)) {
    fVar6 = fVar4;
  }
  fVar4 = fVar4 - fVar6;
  if (fVar4 < 0.0) {
    fVar4 = fVar4 + 360.0;
  }
  if (180.0 < fVar4) {
    fVar4 = fVar4 - 360.0;
  }
  *(float *)(lVar3 + 100) = fVar4;
  cVar1 = FUN_140706530();
  bVar2 = 0;
  if (cVar1 == '\0') {
    bVar2 = 2;
  }
  return (ulonglong)bVar2;
}



// FUNCTION 140705cd0 FUN_140705cd0 body=390 status=ok
// SIG undefined FUN_140705cd0(void)

undefined8 FUN_140705cd0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 local_res18;
  float local_158;
  float fStack_154;
  float local_150;
  undefined1 local_148 [12];
  float local_13c;
  undefined1 local_f6;
  undefined1 local_f0;
  undefined1 local_e8 [224];
  
  lVar1 = *(longlong *)(*param_3 + 0x628);
  if (lVar1 != 0) {
    *(int *)(*(longlong *)(param_1 + 0xd8) + 0x128 + param_3[1]) = (int)param_3[3];
    local_res18 = *(undefined8 *)(*param_3 + 0x568);
    uVar2 = FUN_142de77e0(param_1 + 0x250,*param_3,0,&local_res18);
    local_res18 = *(undefined8 *)(*param_3 + 0x568);
    uVar3 = FUN_142de77e0(param_1 + 0x2d0,*param_3,0,&local_res18);
    FUN_140705e60(param_1,&local_158,param_3,uVar2,uVar3);
    if (((local_158 != (float)DAT_14622e710) || (fStack_154 != DAT_14622e710._4_4_)) ||
       (local_150 != DAT_14622e718)) {
      FUN_142f89530(local_148);
      local_13c = local_150;
      local_148[0] = 0;
      local_f6 = 0;
      local_f0 = 1;
      FUN_142f89220(local_e8,local_148);
      FUN_142fb8fb0(local_e8,lVar1 + 0x6e8);
      FUN_1406fff30(param_2,local_e8);
      FUN_142f8b770(local_e8);
      return param_2;
    }
  }
  FUN_142f89330(param_2);
  return param_2;
}



// FUNCTION 140705e60 FUN_140705e60 body=1192 status=ok
// SIG undefined FUN_140705e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_140705e60(longlong param_1,undefined8 *param_2,longlong *param_3,float param_4,float param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  float *pfVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_538 [32];
  undefined8 local_518;
  float local_510;
  undefined8 local_508;
  float local_500;
  undefined1 local_4f8 [8];
  undefined8 local_4f0;
  float local_4e8;
  undefined1 local_4e0 [4];
  float local_4dc;
  undefined8 local_4d8;
  float local_4d0;
  undefined8 local_4c8;
  float local_4c0;
  float local_4bc;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined1 local_448 [912];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_538;
  local_500 = DAT_14622e718;
  local_508 = CONCAT44(DAT_14622e710._4_4_,(float)DAT_14622e710);
  uVar1 = *(undefined8 *)(*param_3 + 0x568);
  FUN_142dc1ad0(local_448);
  cVar3 = FUN_142cc5430(param_1 + 0x240,uVar1,local_448);
  if (cVar3 == '\0') {
    FUN_142cc54f0(param_1 + 0x240,*(undefined8 *)(*param_3 + 0x568),&local_508);
  }
  else {
    puVar4 = (undefined8 *)FUN_142dcd3a0(local_448,&local_4f0,local_4f8);
    local_508 = *puVar4;
    local_500 = *(float *)(puVar4 + 1);
    plVar5 = (longlong *)FUN_142dd0030(local_448);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x578))(plVar5,local_4e0,&local_4dc);
      local_500 = local_500 + local_4dc;
    }
  }
  if (((((float)local_508 != (float)DAT_14622e710) || (local_508._4_4_ != DAT_14622e710._4_4_)) ||
      (local_500 != DAT_14622e718)) && (lVar2 = *(longlong *)(*param_3 + 0x628), lVar2 != 0)) {
    lVar7 = param_3[1] + *(longlong *)(param_1 + 0xd8);
    if (*(float *)(param_1 + 0x35c) == 0.0) {
      pfVar6 = (float *)FUN_142fa2d40((undefined8 *)(lVar2 + 0x6e8),&local_4f0);
      fVar12 = *pfVar6 - (float)local_508;
      fVar11 = pfVar6[1] - local_508._4_4_;
      local_510 = pfVar6[2] - local_500;
      fVar8 = fVar11 * fVar11 + fVar12 * fVar12;
      if (fVar8 != 1.0) goto LAB_1407060db;
      local_518 = CONCAT44(fVar11,fVar12);
      fVar13 = local_508._4_4_;
      fVar14 = (float)local_508;
      if (local_510 == 0.0) goto LAB_140706182;
LAB_14070617a:
      local_510 = 0.0;
    }
    else {
      fVar11 = *(float *)(lVar2 + 0x778);
      fVar12 = *(float *)(lVar2 + 0x774);
      fVar8 = fVar12 * fVar12 + fVar11 * fVar11;
      if (fVar8 == 1.0) {
        fVar13 = local_508._4_4_;
        fVar14 = (float)local_508;
        if (*(float *)(lVar2 + 0x77c) != 0.0) {
LAB_14070616e:
          local_518 = CONCAT44(fVar11,fVar12);
          goto LAB_14070617a;
        }
        local_518 = *(undefined8 *)(lVar2 + 0x774);
        local_510 = *(float *)(lVar2 + 0x77c);
      }
      else {
LAB_1407060db:
        fVar13 = local_508._4_4_;
        fVar14 = (float)local_508;
        if (1e-08 <= fVar8) {
          auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
          fVar9 = auVar10._0_4_;
          fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
          fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
          fVar11 = fVar11 * fVar9;
          fVar12 = fVar12 * fVar9;
          goto LAB_14070616e;
        }
        local_510 = DAT_1468b5d98;
        local_518 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      }
    }
LAB_140706182:
    local_4f0 = local_518;
    uVar1 = local_4f0;
    local_4f0._0_4_ = (float)local_518;
    local_4f0._4_4_ = (float)((ulonglong)local_518 >> 0x20);
    fVar12 = (float)local_4f0 * param_4;
    fVar11 = local_4f0._4_4_ * param_4;
    local_4e8 = local_510 * param_4 + local_500 + param_5;
    local_4f0 = uVar1;
    FUN_142f88ab0(&local_4c8);
    local_458 = *(undefined8 *)(lVar2 + 0x6b8);
    local_4c0 = local_4e8;
    local_4c8 = CONCAT44(fVar11 + fVar13,fVar12 + fVar14);
    local_4b8 = *(undefined8 *)(lVar2 + 0x6e8);
    uStack_4b0 = *(undefined8 *)(lVar2 + 0x6f0);
    local_4a8 = *(undefined8 *)(lVar2 + 0x6f8);
    uStack_4a0 = *(undefined8 *)(lVar2 + 0x700);
    local_498 = *(undefined8 *)(lVar2 + 0x708);
    uStack_490 = *(undefined8 *)(lVar2 + 0x710);
    local_488 = *(undefined8 *)(lVar2 + 0x718);
    uStack_480 = *(undefined8 *)(lVar2 + 0x720);
    local_478 = *(undefined4 *)(lVar2 + 0x728);
    uStack_474 = *(undefined4 *)(lVar2 + 0x72c);
    uStack_470 = *(undefined4 *)(lVar2 + 0x730);
    uStack_46c = *(undefined4 *)(lVar2 + 0x734);
    local_468 = *(undefined4 *)(lVar2 + 0x738);
    uStack_464 = *(undefined4 *)(lVar2 + 0x73c);
    uStack_460 = *(undefined4 *)(lVar2 + 0x740);
    uStack_45c = *(undefined4 *)(lVar2 + 0x744);
    local_4bc = param_4;
    if (*(char *)(param_1 + 0x354) != '\0') {
      local_4bc = *(float *)(param_1 + 0x350);
    }
    cVar3 = FUN_142f9e4d0(&local_4c8,&local_4d8,0);
    if (cVar3 != '\0') {
      cVar3 = FUN_142fae850(lVar7 + 0x80,&local_4d8);
      if (cVar3 != '\0') {
        *param_2 = *(undefined8 *)(lVar7 + 0x9c);
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar7 + 0xa4);
        return param_2;
      }
      *param_2 = local_4d8;
      goto LAB_1407062cb;
    }
  }
  *param_2 = CONCAT44(DAT_14622e710._4_4_,(float)DAT_14622e710);
  local_4d0 = DAT_14622e718;
LAB_1407062cb:
  *(float *)(param_2 + 1) = local_4d0;
  return param_2;
}



// FUNCTION 140706310 FUN_140706310 body=538 status=ok
// SIG undefined FUN_140706310(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_140706310(longlong param_1,float *param_2,longlong *param_3,longlong param_4,
                     undefined8 param_5,float *param_6)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_108 [32];
  float *local_e8;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  float local_68;
  float fStack_64;
  float fStack_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_e8 = param_6;
  FUN_140707100(param_1,&local_b8,param_4,param_5);
  if ((*(longlong *)(*param_3 + 0x568) == 0) || (param_4 == 0)) {
    local_d8 = 0;
    local_d0 = 0.0;
  }
  else {
    lVar1 = *(longlong *)(param_4 + 0x168);
    local_a8 = *(undefined8 *)(param_1 + 0x118);
    local_a0 = *(undefined4 *)(param_1 + 0x120);
    if (lVar1 == 0) {
      uVar5 = (undefined4)DAT_1468b5da0;
      uVar6 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_c0 = DAT_1468b5da8;
    }
    else {
      local_88 = *(float *)(lVar1 + 0x210);
      fStack_84 = *(float *)(lVar1 + 0x214);
      fStack_80 = *(float *)(lVar1 + 0x218);
      fStack_7c = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_84);
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_88);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_80);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_7c);
      iVar3 = movmskps(local_a0,auVar2);
      if (iVar3 != 0) {
        *(float *)(lVar1 + 0x250) = local_88;
        *(float *)(lVar1 + 0x254) = fStack_84;
        *(float *)(lVar1 + 600) = fStack_80;
        *(float *)(lVar1 + 0x25c) = fStack_7c;
        puVar4 = (undefined8 *)FQuat::Rotator(&local_88,&local_c8);
        *(undefined8 *)(lVar1 + 0x260) = *puVar4;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar4 + 1);
      }
      uVar5 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar6 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      local_c0 = *(undefined4 *)(lVar1 + 0x268);
    }
    local_c8 = CONCAT44(uVar6,uVar5);
    local_98 = local_c8;
    local_90 = local_c0;
    FRotator::RotateVector(&local_98,&local_d8,&local_a8);
  }
  fVar7 = DAT_1468b5d90;
  fVar8 = DAT_1468b5d98;
  fVar9 = DAT_1468b5d94;
  if ((((*(int *)(param_1 + 0x130) != 0) || (*(int *)(param_1 + 0x134) != 0)) && (param_4 != 0)) &&
     (((FUN_1423111b0(local_78,param_4,*(undefined8 *)(param_1 + 0x130)), local_68 != 0.0 ||
       (fStack_64 != 0.0)) ||
      (fVar7 = DAT_1468b5d90, fVar8 = DAT_1468b5d98, fVar9 = DAT_1468b5d94, fStack_60 != 0.0)))) {
    fVar7 = local_68 - *param_6;
    fVar8 = fStack_60 - param_6[2];
    fVar9 = fStack_64 - param_6[1];
  }
  *param_2 = local_b8 + (float)local_d8 + fVar7;
  param_2[1] = local_b4 + local_d8._4_4_ + fVar9;
  param_2[2] = local_b0 + local_d0 + fVar8;
  return param_2;
}



// FUNCTION 140706530 FUN_140706530 body=765 status=ok
// SIG undefined FUN_140706530(void)

undefined8 FUN_140706530(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  undefined8 local_res8;
  float local_148;
  float fStack_144;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 local_88 [4];
  undefined1 local_84 [78];
  undefined1 local_36;
  undefined1 local_30;
  
  lVar3 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  FUN_142f96fa0(lVar3 + 0x70);
  lVar1 = *(longlong *)(*param_2 + 0x628);
  if (lVar1 != 0) {
    local_138 = (float)DAT_14622e710;
    local_130 = DAT_14622e718;
    local_134 = DAT_14622e710._4_4_;
    FUN_142cc54f0(param_1 + 0x240,*(undefined8 *)(*param_2 + 0x568),&local_138);
    if (((local_138 != (float)DAT_14622e710) || (local_134 != DAT_14622e710._4_4_)) ||
       (local_130 != DAT_14622e718)) {
      fStack_144 = *(float *)(lVar3 + 100);
      local_148 = 0.0;
      local_140 = 0.0;
      FRotator::Vector(&local_148,&local_128);
      fVar4 = *(float *)(lVar3 + 0x13c);
      local_148 = local_128 * fVar4 + local_138;
      fStack_144 = local_124 * fVar4 + local_134;
      fVar4 = local_120 * fVar4 + local_130;
      local_140 = fVar4;
      FUN_142f89530(local_88);
      cVar2 = FUN_142fa8480(lVar1);
      if (cVar2 == '\0') {
        FUN_142f88b40(&local_118);
        local_118 = CONCAT44(fStack_144,local_148);
        local_f8 = *(undefined8 *)(lVar1 + 0x6e8);
        uStack_f0 = *(undefined8 *)(lVar1 + 0x6f0);
        local_98 = *(undefined8 *)(lVar1 + 0x6b8);
        local_10c = *(undefined4 *)(param_1 + 0x454);
        local_e8 = *(undefined8 *)(lVar1 + 0x6f8);
        uStack_e0 = *(undefined8 *)(lVar1 + 0x700);
        local_c8 = *(undefined8 *)(lVar1 + 0x718);
        uStack_c0 = *(undefined8 *)(lVar1 + 0x720);
        local_110 = local_140;
        local_d8 = *(undefined8 *)(lVar1 + 0x708);
        uStack_d0 = *(undefined8 *)(lVar1 + 0x710);
        local_res8 = 0xffffffffffffffff;
        local_a8 = *(undefined8 *)(lVar1 + 0x738);
        uStack_a0 = *(undefined4 *)(lVar1 + 0x740);
        uStack_9c = *(undefined4 *)(lVar1 + 0x744);
        local_b8 = *(undefined4 *)(lVar1 + 0x728);
        uStack_b4 = *(undefined4 *)(lVar1 + 0x72c);
        uStack_b0 = *(undefined4 *)(lVar1 + 0x730);
        uStack_ac = *(undefined4 *)(lVar1 + 0x734);
        cVar2 = FUN_142f9e730(&local_118,local_84,&local_res8);
        if (cVar2 == '\0') {
          return 0;
        }
        cVar2 = FUN_142f95960(lVar1 + 0x9e8,local_res8);
      }
      else {
        local_140 = fVar4 + *(float *)(lVar3 + 0x138);
        FUN_142f88ab0(&local_118);
        local_118 = CONCAT44(fStack_144,local_148);
        local_108 = *(undefined8 *)(lVar1 + 0x6e8);
        uStack_100 = *(undefined8 *)(lVar1 + 0x6f0);
        local_a8 = *(undefined8 *)(lVar1 + 0x6b8);
        local_10c = *(undefined4 *)(param_1 + 0x454);
        local_f8 = *(undefined8 *)(lVar1 + 0x6f8);
        uStack_f0 = *(undefined8 *)(lVar1 + 0x700);
        local_d8 = *(undefined8 *)(lVar1 + 0x718);
        uStack_d0 = *(undefined8 *)(lVar1 + 0x720);
        local_110 = local_140;
        local_e8 = *(undefined8 *)(lVar1 + 0x708);
        uStack_e0 = *(undefined8 *)(lVar1 + 0x710);
        local_res8 = 0xffffffffffffffff;
        local_b8 = *(undefined4 *)(lVar1 + 0x738);
        uStack_b4 = *(undefined4 *)(lVar1 + 0x73c);
        uStack_b0 = *(undefined4 *)(lVar1 + 0x740);
        uStack_ac = *(undefined4 *)(lVar1 + 0x744);
        local_c8 = *(undefined8 *)(lVar1 + 0x728);
        uStack_c0 = *(undefined8 *)(lVar1 + 0x730);
        cVar2 = FUN_142f9e4d0(&local_118,local_84,&local_res8);
        if (cVar2 == '\0') {
          return 0;
        }
        cVar2 = FUN_142f958b0(lVar1 + 0x9e8,local_res8);
      }
      if (cVar2 == '\x01') {
        local_88[0] = 0;
        local_36 = 0;
        local_30 = 1;
        FUN_142fb4460(lVar3 + 0x70,local_88);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140706830 FUN_140706830 body=912 status=ok
// SIG undefined FUN_140706830(void)

undefined8 * FUN_140706830(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined1 local_res8 [8];
  undefined8 local_res20;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  undefined4 local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  lVar8 = *(longlong *)(param_1 + 0xd8) + param_3[1];
  lVar6 = FWeakObjectPtr::Get(lVar8 + 0x78);
  uVar5 = DAT_1468b5da8;
  if (lVar6 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(longlong *)(lVar6 + 0x118);
  }
  if (lVar9 == 0) {
    *param_2 = DAT_1468b5da0;
    *(undefined4 *)(param_2 + 1) = DAT_1468b5da8;
    return param_2;
  }
  if (*(char *)(param_1 + 0x113) == '\0') {
LAB_1407068a2:
    lVar8 = *(longlong *)(lVar9 + 0x168);
    if (lVar8 == 0) {
      *param_2 = DAT_1468b5da0;
      *(undefined4 *)(param_2 + 1) = uVar5;
    }
    else {
      local_68 = *(float *)(lVar8 + 0x210);
      fStack_64 = *(float *)(lVar8 + 0x214);
      fStack_60 = *(float *)(lVar8 + 0x218);
      fStack_5c = *(float *)(lVar8 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar8 + 0x254) != fStack_64);
      auVar2._0_4_ = -(uint)(*(float *)(lVar8 + 0x250) != local_68);
      auVar2._8_4_ = -(uint)(*(float *)(lVar8 + 600) != fStack_60);
      auVar2._12_4_ = -(uint)(*(float *)(lVar8 + 0x25c) != fStack_5c);
      iVar4 = movmskps((int)lVar6,auVar2);
      if (iVar4 != 0) {
        *(float *)(lVar8 + 0x250) = local_68;
        *(float *)(lVar8 + 0x254) = fStack_64;
        *(float *)(lVar8 + 600) = fStack_60;
        *(float *)(lVar8 + 0x25c) = fStack_5c;
        puVar7 = (undefined8 *)FQuat::Rotator(&local_68,&local_98);
        *(undefined8 *)(lVar8 + 0x260) = *puVar7;
        *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar7 + 1);
      }
      uVar5 = *(undefined4 *)(lVar8 + 0x268);
      *param_2 = *(undefined8 *)(lVar8 + 0x260);
      *(undefined4 *)(param_2 + 1) = uVar5;
    }
    return param_2;
  }
  lVar6 = *param_3;
  lVar1 = *(longlong *)(lVar6 + 0x568);
  if (lVar1 == 0) goto LAB_1407068a2;
  local_88 = 0;
  local_80 = 0.0;
  local_res8[0] = 0;
  local_res20 = 0;
  cVar3 = FUN_142cc45e0(param_1 + 0x118,lVar1,&local_88,&local_res20,local_res8);
  if (cVar3 == '\0') {
    local_78 = 0;
    local_70 = 0;
    uVar5 = FUN_142cc4c60(param_1 + 0x118,lVar1,&local_78);
    if ((char)uVar5 == '\0') {
      lVar6 = *(longlong *)(lVar9 + 0x168);
      if (lVar6 == 0) {
        local_70 = DAT_1468b5da8;
        puVar7 = &local_78;
        local_78 = DAT_1468b5da0;
      }
      else {
        local_68 = *(float *)(lVar6 + 0x210);
        fStack_64 = *(float *)(lVar6 + 0x214);
        fStack_60 = *(float *)(lVar6 + 0x218);
        fStack_5c = *(float *)(lVar6 + 0x21c);
        auVar13._4_4_ = -(uint)(*(float *)(lVar6 + 0x254) != fStack_64);
        auVar13._0_4_ = -(uint)(*(float *)(lVar6 + 0x250) != local_68);
        auVar13._8_4_ = -(uint)(*(float *)(lVar6 + 600) != fStack_60);
        auVar13._12_4_ = -(uint)(*(float *)(lVar6 + 0x25c) != fStack_5c);
        iVar4 = movmskps(uVar5,auVar13);
        if (iVar4 != 0) {
          *(float *)(lVar6 + 0x250) = local_68;
          *(float *)(lVar6 + 0x254) = fStack_64;
          *(float *)(lVar6 + 600) = fStack_60;
          *(float *)(lVar6 + 0x25c) = fStack_5c;
          puVar7 = (undefined8 *)FQuat::Rotator(&local_68,&local_98);
          *(undefined8 *)(lVar6 + 0x260) = *puVar7;
          *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar7 + 1);
        }
        local_90 = (float)*(undefined4 *)(lVar6 + 0x268);
        puVar7 = &local_98;
        local_98 = *(undefined8 *)(lVar6 + 0x260);
      }
      uVar5 = (undefined4)*puVar7;
      uVar10 = (undefined4)((ulonglong)*puVar7 >> 0x20);
      local_70 = *(undefined4 *)(puVar7 + 1);
    }
    else {
      uVar5 = (undefined4)local_78;
      uVar10 = (undefined4)((ulonglong)local_78 >> 0x20);
    }
    *param_2 = CONCAT44(uVar10,uVar5);
    *(undefined4 *)(param_2 + 1) = local_70;
    return param_2;
  }
  local_90 = local_80 - *(float *)(lVar8 + 0x68);
  fVar14 = (float)local_88 - *(float *)(lVar8 + 0x60);
  fVar15 = local_88._4_4_ - *(float *)(lVar8 + 100);
  fVar11 = fVar15 * fVar15 + fVar14 * fVar14;
  if (fVar11 == 1.0) {
    local_98 = CONCAT44(fVar15,fVar14);
    if (local_90 == 0.0) goto LAB_140706ab6;
  }
  else {
    if (fVar11 < 1e-08) {
      local_90 = DAT_1468b5d98;
      local_98 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      goto LAB_140706ab6;
    }
    auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
    fVar12 = auVar13._0_4_;
    fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
    fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
    local_98 = CONCAT44(fVar15 * fVar12,fVar14 * fVar12);
  }
  local_90 = 0.0;
LAB_140706ab6:
  FVector::Rotation(&local_98,param_2);
  return param_2;
}



// FUNCTION 140706bc0 FUN_140706bc0 body=986 status=ok
// SIG undefined FUN_140706bc0(void)

float FUN_140706bc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res8 [2];
  undefined1 local_res10 [8];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  
  lVar5 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  if (*(char *)(lVar5 + 0x28) != '\x02') {
    return 1.0;
  }
  lVar1 = FWeakObjectPtr::Get(lVar5 + 0x50);
  lVar2 = FWeakObjectPtr::Get(lVar5 + 0x48);
  plVar3 = (longlong *)FWeakObjectPtr::Get(lVar5 + 0x74);
  lVar6 = 0;
  if (lVar2 != 0) {
    lVar6 = *(longlong *)(lVar2 + 0x900);
  }
  if (lVar1 == 0) {
    return 1.0;
  }
  if (lVar6 == 0) {
    return 1.0;
  }
  if (plVar3 == (longlong *)0x0) {
    return 1.0;
  }
  if (*(float *)(lVar5 + 0x58) <= -(float)DAT_14622e710) {
    return 1.0;
  }
  if ((float)DAT_14622e710 <= *(float *)(lVar5 + 0x58)) {
    return 1.0;
  }
  if (*(float *)(lVar5 + 0x5c) <= -DAT_14622e710._4_4_) {
    return 1.0;
  }
  if (DAT_14622e710._4_4_ <= *(float *)(lVar5 + 0x5c)) {
    return 1.0;
  }
  if (*(float *)(lVar5 + 0x60) <= -DAT_14622e718) {
    return 1.0;
  }
  if (DAT_14622e718 <= *(float *)(lVar5 + 0x60)) {
    return 1.0;
  }
  if (*(float *)(param_1 + 0x114) <= 0.0) {
    return 1.0;
  }
  lVar5 = plVar3[0x2d];
  if (lVar5 == 0) {
    local_a8 = DAT_1468b5d90;
    fStack_a4 = DAT_1468b5d94;
    local_a0 = DAT_1468b5d98;
  }
  else {
    local_a8 = *(float *)(lVar5 + 0x220);
    fStack_a4 = *(float *)(lVar5 + 0x224);
    local_a0 = *(float *)(lVar5 + 0x228);
  }
  fVar8 = fStack_a4;
  fVar10 = local_a8;
  (**(code **)(*plVar3 + 0x578))(plVar3,local_res10,local_res8);
  fVar16 = local_a0 - local_res8[0];
  FUN_142fa2d40(lVar1 + 0x6e8,&local_b8);
  fVar13 = fVar10 - local_b8;
  fVar15 = fVar16 - local_b0;
  fVar11 = fVar8 - local_b4;
  fVar7 = fVar11 * fVar11 + fVar13 * fVar13;
  if (fVar7 == 1.0) {
    fVar12 = fVar11;
    fVar14 = fVar13;
    if (fVar15 == 0.0) goto LAB_140706e79;
  }
  else {
    fVar12 = DAT_1468b5d94;
    fVar14 = DAT_1468b5d90;
    fVar15 = DAT_1468b5d98;
    if (fVar7 < 1e-08) goto LAB_140706e79;
    auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar15 = auVar9._0_4_;
    fVar15 = fVar15 + fVar15 * (0.5 - fVar7 * 0.5 * fVar15 * fVar15);
    fVar15 = fVar15 + fVar15 * (0.5 - fVar7 * 0.5 * fVar15 * fVar15);
    fVar13 = fVar13 * fVar15;
    fVar11 = fVar11 * fVar15;
  }
  fVar12 = fVar11;
  fVar14 = fVar13;
  fVar15 = 0.0;
LAB_140706e79:
  local_a8 = fVar10;
  fStack_a4 = fVar8;
  pfVar4 = (float *)(**(code **)(*plVar3 + 0x308))(plVar3,&local_a8);
  fVar16 = fVar16 - local_b0;
  fVar7 = *(float *)(lVar6 + 0x278);
  fVar11 = fVar7 * *(float *)(param_1 + 0x11c);
  fVar15 = fVar12 * pfVar4[1] + fVar14 * *pfVar4 + fVar15 * pfVar4[2];
  if (fVar15 <= fVar11) {
    fVar15 = fVar11;
  }
  fVar8 = (SQRT((fVar8 - local_b4) * (fVar8 - local_b4) + (fVar10 - local_b8) * (fVar10 - local_b8)
                + fVar16 * fVar16) - (*(float *)(param_1 + 0x114) + *(float *)(param_1 + 0x110))) *
          (0.5 / *(float *)(param_1 + 0x114));
  fVar10 = 0.0;
  if ((0.0 <= fVar8) && (fVar10 = fVar8, 1.0 <= fVar8)) {
    fVar10 = 1.0;
  }
  return ((fVar7 * *(float *)(param_1 + 0x118) - fVar15) * fVar10 + fVar15) / fVar7;
}



// FUNCTION 140706fa0 FUN_140706fa0 body=341 status=ok
// SIG undefined FUN_140706fa0(void)

undefined8 FUN_140706fa0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float local_148;
  float fStack_144;
  float local_140;
  undefined1 local_138 [12];
  float local_12c;
  undefined1 local_e6;
  undefined1 local_e0;
  undefined1 local_d8 [208];
  
  lVar1 = *(longlong *)(*param_3 + 0x628);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd8) + param_3[1];
    *(int *)(lVar2 + 0x130) = (int)param_3[3];
    if (*(char *)(lVar2 + 0x60) == '\x01') {
      uVar4 = *(undefined4 *)(lVar2 + 0x144);
      uVar3 = *(undefined4 *)(lVar2 + 0x138);
    }
    else if (*(char *)(lVar2 + 0x60) == '\x02') {
      uVar4 = *(undefined4 *)(lVar2 + 0x148);
      uVar3 = *(undefined4 *)(lVar2 + 0x13c);
    }
    else {
      uVar4 = *(undefined4 *)(lVar2 + 0x140);
      uVar3 = *(undefined4 *)(lVar2 + 0x134);
    }
    FUN_140704060(uVar3,&local_148,param_3,uVar4,uVar3);
    if (((local_148 != (float)DAT_14622e710) || (fStack_144 != DAT_14622e710._4_4_)) ||
       (local_140 != DAT_14622e718)) {
      FUN_142f89530(local_138);
      local_12c = local_140;
      local_138[0] = 0;
      local_e6 = 0;
      local_e0 = 1;
      FUN_142f89220(local_d8,local_138);
      FUN_142fb8fb0(local_d8,lVar1 + 0x6e8);
      FUN_1406fff30(param_2,local_d8);
      FUN_142f8b770(local_d8);
      return param_2;
    }
  }
  FUN_142f89330(param_2);
  return param_2;
}



// FUNCTION 140707100 FUN_140707100 body=497 status=ok
// SIG undefined FUN_140707100(void)

undefined8 *
FUN_140707100(longlong param_1,undefined8 *param_2,longlong *param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float local_res8 [2];
  undefined1 local_58 [4];
  float local_54;
  float local_50;
  float local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [48];
  
  local_48 = *(undefined8 *)(param_1 + 0x124);
  local_40 = *(undefined4 *)(param_1 + 300);
  if ((*(char *)(param_1 + 0x146) != '\0') && (param_3 != (longlong *)0x0)) {
    (**(code **)(*param_3 + 0x578))(param_3,local_res8,local_58);
    local_48 = CONCAT44(local_48._4_4_,(float)local_48 - local_res8[0]);
  }
  if (((*(float *)(param_1 + 0x124) == 0.0) && (*(float *)(param_1 + 0x128) == 0.0)) &&
     (*(float *)(param_1 + 300) == 0.0)) {
    *param_2 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    *(float *)(param_2 + 1) = DAT_1468b5d98;
    return param_2;
  }
  local_54 = *param_5 - *param_4;
  local_50 = param_5[1] - param_4[1];
  local_4c = param_5[2] - param_4[2];
  fVar2 = local_50 * local_50 + local_54 * local_54;
  if (fVar2 == 1.0) {
    if (local_4c == 0.0) goto LAB_1407072b3;
  }
  else {
    if (fVar2 < 1e-08) {
      local_54 = DAT_1468b5d90;
      local_4c = DAT_1468b5d98;
      local_50 = DAT_1468b5d94;
      goto LAB_1407072b3;
    }
    auVar4 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar3 = auVar4._0_4_;
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    fVar3 = fVar3 + fVar3 * (0.5 - fVar2 * 0.5 * fVar3 * fVar3);
    local_54 = local_54 * fVar3;
    local_50 = local_50 * fVar3;
  }
  local_4c = 0.0;
LAB_1407072b3:
  uVar1 = FVector::Rotation(&local_54,local_38);
  FRotator::RotateVector(uVar1,param_2,&local_48);
  return param_2;
}



// FUNCTION 140707300 FUN_140707300 body=1703 status=ok
// SIG undefined FUN_140707300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140707300(longlong param_1,undefined8 *param_2,longlong param_3)

{
  float fVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_238 [32];
  longlong local_218;
  uint local_210;
  undefined8 local_208;
  float local_200;
  undefined8 local_1f8;
  float local_1f0;
  undefined4 local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  longlong local_1d8;
  longlong lStack_1d0;
  longlong local_1c8 [2];
  ulonglong local_1b8;
  float local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  ulonglong local_128;
  float local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  float local_98;
  uint local_94;
  uint local_90;
  undefined8 local_8c;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  undefined8 local_74;
  uint local_6c;
  ulonglong local_68 [6];
  
  local_68[0] = DAT_1468387a8 ^ (ulonglong)auStack_238;
  lVar9 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_3 + 8);
  lVar6 = FWeakObjectPtr::Get(lVar9 + 0x48);
  lVar9 = FWeakObjectPtr::Get(lVar9 + 0x74);
  if ((lVar6 == 0) || (lVar9 == 0)) {
    param_2[2] = 0xffffffffffffffff;
    param_2[3] = 0xffffffffffffffff;
    *(ulonglong *)((longlong)param_2 + 4) = CONCAT44(DAT_14622e710._4_4_,(float)DAT_14622e710);
    *(float *)((longlong)param_2 + 0xc) = DAT_14622e718;
    param_2[2] = 0xffffffffffffffff;
    param_2[3] = 0xffffffffffffffff;
    *(undefined1 *)param_2 = 0;
  }
  else {
    local_1d8 = -1;
    local_218 = -1;
    lStack_1d0 = -1;
    fStack_1e4 = (float)DAT_14622e710;
    fStack_1e0 = DAT_14622e710._4_4_;
    fStack_1dc = DAT_14622e718;
    local_1e8 = CONCAT31(local_1e8._1_3_,1);
    if (*(longlong *)(lVar9 + 0x168) == 0) {
      local_200 = DAT_1464aa7b0;
      puVar7 = &local_208;
      local_208 = DAT_1464aa7a8;
      lVar9 = 0;
    }
    else {
      puVar7 = (undefined8 *)FUN_142369f10();
      lVar9 = *(longlong *)(lVar9 + 0x168);
    }
    uVar2 = *puVar7;
    uVar3 = *(uint *)(puVar7 + 1);
    local_1f8 = uVar2;
    local_1f0 = (float)uVar3;
    if (lVar9 == 0) {
      puVar7 = &local_208;
      local_208 = DAT_1464aa7b8;
      local_200 = DAT_1464aa7c0;
    }
    else {
      puVar7 = (undefined8 *)FUN_14238d380();
    }
    pfVar10 = &local_98;
    local_8c = *puVar7;
    local_210 = *(uint *)(puVar7 + 1);
    local_98 = -(float)local_1f8;
    local_90 = (uint)local_1f0 ^ 0x80000000;
    local_94 = local_1f8._4_4_ ^ 0x80000000;
    local_80 = (uint)local_8c ^ 0x80000000;
    local_7c = (uint)((ulonglong)local_8c >> 0x20) ^ 0x80000000;
    local_78 = local_210 ^ 0x80000000;
    local_84 = local_210;
    local_74 = uVar2;
    local_6c = uVar3;
    fVar12 = DAT_14622e718;
    fVar13 = DAT_14622e710._4_4_;
    fVar14 = (float)DAT_14622e710;
    do {
      fVar1 = *(float *)(param_1 + 0x110);
      lVar9 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_3 + 8);
      local_1c8[0] = -1;
      local_218 = -1;
      local_1f8 = CONCAT44(fVar1 * pfVar10[1],fVar1 * *pfVar10);
      local_1f0 = fVar1 * pfVar10[2];
      if (((((-fVar14 < *(float *)(lVar9 + 0x58)) && (*(float *)(lVar9 + 0x58) < fVar14)) &&
           (-fVar13 < *(float *)(lVar9 + 0x5c))) &&
          ((*(float *)(lVar9 + 0x5c) < fVar13 && (-fVar12 < *(float *)(lVar9 + 0x60))))) &&
         ((*(float *)(lVar9 + 0x60) < fVar12 &&
          (lVar8 = FWeakObjectPtr::Get(lVar9 + 0x50), fVar12 = DAT_14622e718,
          fVar13 = DAT_14622e710._4_4_, fVar14 = (float)DAT_14622e710, lVar8 != 0)))) {
        if ((*(int *)(lVar9 + 100) < 0) || (*(int *)(lVar9 + 0x68) < 0)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          FUN_142f88bf0(&local_128);
          local_a8 = *(undefined8 *)(lVar8 + 0x6b8);
          local_108 = *(undefined8 *)(lVar8 + 0x6e8);
          uStack_100 = *(undefined8 *)(lVar8 + 0x6f0);
          local_f8 = *(undefined8 *)(lVar8 + 0x6f8);
          uStack_f0 = *(undefined8 *)(lVar8 + 0x700);
          local_114 = *(undefined4 *)(lVar9 + 0x60);
          local_e8 = *(undefined8 *)(lVar8 + 0x708);
          uStack_e0 = *(undefined8 *)(lVar8 + 0x710);
          local_110 = *(undefined8 *)(lVar9 + 100);
          local_c8 = *(undefined8 *)(lVar8 + 0x728);
          uStack_c0 = *(undefined8 *)(lVar8 + 0x730);
          local_d8 = *(undefined8 *)(lVar8 + 0x718);
          uStack_d0 = *(undefined8 *)(lVar8 + 0x720);
          local_120 = local_1f0;
          local_11c = *(undefined8 *)(lVar9 + 0x58);
          local_b8 = *(undefined4 *)(lVar8 + 0x738);
          uStack_b4 = *(undefined4 *)(lVar8 + 0x73c);
          uStack_b0 = *(undefined4 *)(lVar8 + 0x740);
          uStack_ac = *(undefined4 *)(lVar8 + 0x744);
          local_128 = local_1f8;
          cVar5 = FUN_142f99630(&local_128,&local_208,local_1c8);
        }
        else {
          if ((*(int *)(lVar9 + 0x6c) < 0) || (*(int *)(lVar9 + 0x70) < 0)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_140707771;
          FUN_142f88bf0(&local_1b8);
          local_138 = *(undefined8 *)(lVar8 + 0x6b8);
          local_198 = *(undefined8 *)(lVar8 + 0x6e8);
          uStack_190 = *(undefined8 *)(lVar8 + 0x6f0);
          local_188 = *(undefined8 *)(lVar8 + 0x6f8);
          uStack_180 = *(undefined8 *)(lVar8 + 0x700);
          local_1a4 = *(undefined4 *)(lVar9 + 0x60);
          local_178 = *(undefined8 *)(lVar8 + 0x708);
          uStack_170 = *(undefined8 *)(lVar8 + 0x710);
          local_1a0 = *(undefined8 *)(lVar9 + 0x6c);
          local_158 = *(undefined8 *)(lVar8 + 0x728);
          uStack_150 = *(undefined8 *)(lVar8 + 0x730);
          local_168 = *(undefined8 *)(lVar8 + 0x718);
          uStack_160 = *(undefined8 *)(lVar8 + 0x720);
          local_1b0 = local_1f0;
          local_1ac = *(undefined8 *)(lVar9 + 0x58);
          local_148 = *(undefined4 *)(lVar8 + 0x738);
          uStack_144 = *(undefined4 *)(lVar8 + 0x73c);
          uStack_140 = *(undefined4 *)(lVar8 + 0x740);
          uStack_13c = *(undefined4 *)(lVar8 + 0x744);
          local_1b8 = local_1f8;
          cVar5 = FUN_142f993b0(&local_1b8,&local_208,&local_218);
        }
        fVar12 = DAT_14622e718;
        fVar13 = DAT_14622e710._4_4_;
        fVar14 = (float)DAT_14622e710;
        if (cVar5 != '\0') {
          fStack_1e4 = (float)local_208;
          fStack_1e0 = local_208._4_4_;
          fStack_1dc = local_200;
          local_1d8 = local_1c8[0];
          lStack_1d0 = local_218;
          break;
        }
      }
LAB_140707771:
      pfVar10 = pfVar10 + 3;
    } while (pfVar10 != (float *)local_68);
    if (((((-fVar14 < fStack_1e4) && (fStack_1e4 < fVar14)) && (-fVar13 < fStack_1e0)) &&
        (((fStack_1e0 < fVar13 && (-fVar12 < fStack_1dc)) && (fStack_1dc < fVar12)))) &&
       (((-1 < (int)local_1d8 && (-1 < local_1d8)) || ((-1 < (int)lStack_1d0 && (-1 < lStack_1d0))))
       )) {
      _guard_xfg_dispatch_icall_nop(&local_1b8,0,0x90);
      local_1ac = CONCAT44(local_1ac._4_4_,0x3f800000);
      uVar11 = FUN_142fa2df0(lVar6,&fStack_1e4,&local_1b8);
      if (((local_1b8 & 1) != 0) && ((local_1b8 & 2) == 0)) {
        *param_2 = CONCAT44(fStack_1e4,local_1e8);
        param_2[1] = CONCAT44(uVar11,fStack_1e0);
        param_2[2] = local_1d8;
        param_2[3] = lStack_1d0;
        return param_2;
      }
    }
    param_2[2] = 0xffffffffffffffff;
    param_2[3] = 0xffffffffffffffff;
    *(ulonglong *)((longlong)param_2 + 4) = CONCAT44(DAT_14622e710._4_4_,(float)DAT_14622e710);
    *(float *)((longlong)param_2 + 0xc) = DAT_14622e718;
    param_2[2] = 0xffffffffffffffff;
    param_2[3] = 0xffffffffffffffff;
    *(undefined1 *)param_2 = 0;
  }
  return param_2;
}



// FUNCTION 1407079b0 FUN_1407079b0 body=113 status=ok
// SIG undefined FUN_1407079b0(void)

undefined8 FUN_1407079b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x148);
  plVar1 = plVar3 + *(int *)(param_1 + 0x150);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    if ((*plVar3 != 0) && (cVar2 = FUN_1406de170(*plVar3,param_2), cVar2 != '\0')) break;
    plVar3 = plVar3 + 1;
  }
  return 1;
}



// FUNCTION 140707a30 FUN_140707a30 body=236 status=ok
// SIG undefined FUN_140707a30(void)

char FUN_140707a30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x148);
  cVar4 = '\0';
  plVar1 = plVar5 + *(int *)(param_1 + 0x150);
  if (plVar5 == plVar1) {
    cVar4 = '\0';
  }
  else {
    do {
      plVar2 = (longlong *)*plVar5;
      if (((plVar2 != (longlong *)0x0) &&
          (cVar3 = (**(code **)(*plVar2 + 0x2d0))(plVar2), cVar3 != '\0')) &&
         ((plVar2[0x29] != 0 || ((0 < (int)plVar2[0x22] || (0 < (int)plVar2[0x24])))))) {
        cVar4 = FUN_1406de170(plVar2,param_2);
        cVar3 = *(char *)(plVar2[0x1b] + 0x29 + *(longlong *)(param_2 + 8));
        if (cVar3 == '\x02') {
          if (*(char *)((longlong)plVar2 + 0xd3) != '\0') {
LAB_140707ad5:
            cVar4 = '\x01';
          }
        }
        else if (cVar3 == '\x01') goto LAB_140707ad5;
        if (*(char *)(param_1 + 0x160) == '\0') {
          return cVar4;
        }
        if ((*(char *)(param_1 + 0x160) == '\x01') && (cVar4 == '\0')) {
          return '\0';
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  return cVar4;
}



// FUNCTION 140707b20 FUN_140707b20 body=385 status=ok
// SIG undefined FUN_140707b20(void)

ulonglong FUN_140707b20(longlong param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4,
                       undefined4 param_5)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 local_res10;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  lVar1 = *(longlong *)(*param_2 + 0x628);
  if (lVar1 == 0) {
    uVar3 = *param_2 & 0xffffffffffffff00;
  }
  else {
    if (*(char *)(lVar1 + 0x781) == '\x01') {
      FUN_142f89a30(&local_98);
      local_98 = *param_3;
      local_28 = *(undefined8 *)(lVar1 + 0x6b8);
      local_8c = param_5;
      local_88 = *(undefined8 *)(lVar1 + 0x6e8);
      uStack_80 = *(undefined8 *)(lVar1 + 0x6f0);
      local_90 = *(undefined4 *)(param_3 + 1);
      local_78 = *(undefined8 *)(lVar1 + 0x6f8);
      uStack_70 = *(undefined8 *)(lVar1 + 0x700);
      local_68 = *(undefined8 *)(lVar1 + 0x708);
      uStack_60 = *(undefined8 *)(lVar1 + 0x710);
      local_res10 = 0xffffffffffffffff;
      local_58 = *(undefined8 *)(lVar1 + 0x718);
      uStack_50 = *(undefined8 *)(lVar1 + 0x720);
      local_48 = *(undefined4 *)(lVar1 + 0x728);
      uStack_44 = *(undefined4 *)(lVar1 + 0x72c);
      uStack_40 = *(undefined4 *)(lVar1 + 0x730);
      uStack_3c = *(undefined4 *)(lVar1 + 0x734);
      local_38 = *(undefined4 *)(lVar1 + 0x738);
      uStack_34 = *(undefined4 *)(lVar1 + 0x73c);
      uStack_30 = *(undefined4 *)(lVar1 + 0x740);
      uStack_2c = *(undefined4 *)(lVar1 + 0x744);
      cVar2 = FUN_142fae610(&local_98,&local_b8,&local_res10);
      if ((cVar2 != '\0') && (cVar2 = FUN_142f95960(lVar1 + 0x9e8,local_res10), cVar2 != '\0')) {
        *param_4 = local_b8;
        *(undefined4 *)(param_4 + 1) = local_b0;
        return CONCAT71((uint7)(uint3)((uint)local_b0 >> 8),1);
      }
    }
    local_b0 = *(undefined4 *)(param_1 + 0x148);
    local_b8 = CONCAT44(local_b0,local_b0);
    local_a0 = local_b0;
    cVar2 = FUN_142f95a50(lVar1 + 0x9e8,param_3,param_4,&local_b8);
    if ((cVar2 == '\0') && (*(longlong *)(*param_2 + 0x488) != 0)) {
      FUN_14059c710(lVar1 + 0x9e8,&local_res10);
    }
    uVar3 = (ulonglong)(cVar2 != '\0');
  }
  return uVar3;
}



// FUNCTION 140707cb0 FUN_140707cb0 body=198 status=ok
// SIG undefined FUN_140707cb0(void)

void FUN_140707cb0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    lVar5 = 0;
    *param_1 = 0;
    if (*(char *)((longlong)plVar2 + 0x39) != '\x04') {
      iVar1 = *(int *)((longlong)plVar2 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar6;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
      }
      if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
        lVar5 = UCompositionGraphCaptureProtocol::StaticClass();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_14072b980(plVar2,param_2);
          return;
        }
        (**(code **)(*plVar2 + 0x298))(plVar2);
      }
    }
  }
  return;
}



// FUNCTION 140707d80 FUN_140707d80 body=99 status=ok
// SIG undefined FUN_140707d80(void)

undefined1 FUN_140707d80(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_1406de560();
  if (cVar1 != '\0') {
    if (*(longlong *)(param_1 + 0x148) != 0) {
      uVar2 = FUN_1406de170(*(longlong *)(param_1 + 0x148),param_2);
      return uVar2;
    }
    if ((0 < *(int *)(param_1 + 0x110)) || (0 < *(int *)(param_1 + 0x120))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140707df0 FUN_140707df0 body=245 status=ok
// SIG undefined FUN_140707df0(void)

undefined8 FUN_140707df0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *local_res18 [2];
  longlong *local_28;
  longlong *local_20;
  
  cVar5 = FUN_1406de560();
  if (cVar5 == '\0') {
LAB_140707ed0:
    uVar8 = 0;
  }
  else {
    local_res18[0] = (longlong *)(param_1 + 0x148);
    FUN_1407227b0(local_res18,&local_28);
    lVar2 = *(longlong *)(param_1 + 0x148);
    iVar1 = *(int *)(param_1 + 0x150);
    plVar9 = local_28;
joined_r0x000140707e43:
    if (plVar9 != (longlong *)(lVar2 + (longlong)iVar1 * 8)) {
      plVar3 = (longlong *)*plVar9;
      cVar5 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (((cVar5 != '\0') && (cVar5 = FUN_1406de170(plVar3,param_2), cVar5 == '\0')) &&
         ((char)plVar3[0x2b] != '\0')) goto LAB_140707ed0;
      do {
        do {
          plVar9 = plVar9 + 1;
          if (plVar9 == local_20) goto joined_r0x000140707e43;
          lVar4 = *plVar9;
        } while (lVar4 == 0);
        lVar7 = USoundNodeEnveloper::StaticClass();
        lVar4 = *(longlong *)(lVar4 + 0x10);
        if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
      } while (!bVar6);
      goto joined_r0x000140707e43;
    }
    uVar8 = 1;
  }
  return uVar8;
}



// FUNCTION 140707ef0 FUN_140707ef0 body=197 status=ok
// SIG undefined FUN_140707ef0(void)

undefined8 FUN_140707ef0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(float *)(param_1 + 0x158) <= 0.0) || (cVar1 = FUN_1406de560(), cVar1 == '\0')) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x148) == 0) {
    if ((*(int *)(param_1 + 0x110) < 1) && (*(int *)(param_1 + 0x120) < 1)) {
      return 0;
    }
  }
  else {
    cVar1 = FUN_1406de170(*(longlong *)(param_1 + 0x148),param_2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x160) != '\0') {
    lVar3 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
    iVar2 = *(int *)(lVar3 + 0x50);
    if (0 < iVar2) {
      if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
        lVar4 = *(longlong *)(param_1 + 0x20);
      }
      else {
        lVar4 = 0;
      }
      if ((lVar4 != 0) &&
         (*(float *)(lVar4 + 0x164) <= *(float *)(param_2 + 0x18) - *(float *)(lVar3 + 0x3c))) {
        *(undefined4 *)(lVar3 + 0x50) = 0;
        iVar2 = 0;
      }
    }
    if (*(int *)(param_1 + 0x15c) <= iVar2) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140707fc0 FUN_140707fc0 body=70 status=ok
// SIG undefined FUN_140707fc0(void)

undefined8 FUN_140707fc0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_1406de560();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x3f0))(param_1,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140708010 FUN_140708010 body=127 status=ok
// SIG undefined FUN_140708010(void)

undefined8 FUN_140708010(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if ((*(longlong *)(*param_2 + 0x568) != 0) &&
     ((*(char *)(*param_2 + 0x600) != '\0' || (*(char *)(param_1 + 0x118) == '\0')))) {
    if ((*(char *)(param_1 + 0x110) != '\0') &&
       ((*(char *)(*(longlong *)(param_1 + 0xd8) + 0x4c + param_2[1]) == '\0' &&
        (cVar1 = FUN_140712e50(param_1), cVar1 == '\0')))) {
      return 0;
    }
    cVar1 = FUN_140720f90(param_1,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140708090 SetContent body=42 status=ok
// SIG undefined SetContent(void)

void UContentWidget::SetContent(undefined8 param_1,undefined8 param_2)

{
  FUN_140709e00();
  FUN_1406df0a0(param_1,param_2);
  return;
}



// FUNCTION 1407080c0 FUN_1407080c0 body=99 status=ok
// SIG undefined FUN_1407080c0(void)

ulonglong FUN_1407080c0(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 100 + param_2[1]);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *param_2;
    if (*(longlong *)(uVar2 + 0x628) != 0) {
      uVar2 = FUN_142fa8480();
      if ((char)uVar2 != '\0') {
        uVar2 = FUN_140708a20(param_1,param_2);
        return uVar2;
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140708130 FUN_140708130 body=250 status=ok
// SIG undefined FUN_140708130(void)

undefined1 FUN_140708130(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined1 local_28 [32];
  
  lVar8 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  cVar5 = FWeakObjectPtr::IsValid(lVar8 + 0x48);
  if ((cVar5 != '\0') && (cVar5 = FWeakObjectPtr::IsValid(lVar8 + 0x50), cVar5 != '\0')) {
    uVar1 = FUN_140718800(param_1,param_2);
    FWeakObjectPtr::operator=(lVar8 + 0x74,uVar1);
    cVar5 = FWeakObjectPtr::IsValid(lVar8 + 0x74);
    if ((cVar5 != '\0') && (cVar5 = FUN_140721f30(param_1,param_2), cVar5 != '\0')) {
      if ((*(char *)(param_1 + 0x135) == '\0') &&
         (cVar5 = FUN_1407146d0(param_1,param_2), cVar5 != '\0')) {
        return 0;
      }
      if (*(char *)(lVar8 + 0x28) != '\x02') {
        puVar7 = (undefined4 *)FUN_140703d30(param_1,local_28,param_2);
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        *(undefined4 *)(lVar8 + 0x9c) = *puVar7;
        *(undefined4 *)(lVar8 + 0xa0) = uVar2;
        *(undefined4 *)(lVar8 + 0xa4) = uVar3;
        *(undefined4 *)(lVar8 + 0xa8) = uVar4;
        uVar2 = puVar7[5];
        uVar3 = puVar7[6];
        uVar4 = puVar7[7];
        *(undefined4 *)(lVar8 + 0xac) = puVar7[4];
        *(undefined4 *)(lVar8 + 0xb0) = uVar2;
        *(undefined4 *)(lVar8 + 0xb4) = uVar3;
        *(undefined4 *)(lVar8 + 0xb8) = uVar4;
        uVar6 = FUN_140714650();
        return uVar6;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140708230 FUN_140708230 body=142 status=ok
// SIG undefined FUN_140708230(void)

undefined8 FUN_140708230(longlong *param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong local_res8 [4];
  
  if ((char)param_1[0x21] == '\0') {
    (**(code **)(*param_1 + 0x3a0))(param_1,local_res8,param_2);
    if (local_res8[0] == 0) {
      return 0;
    }
    uVar2 = FUN_142e20fc0();
    if (local_res8[0] == 0) {
      return 0;
    }
    while (local_res8[0] != uVar2) {
      local_res8[0] = *(ulonglong *)(local_res8[0] + 0x30);
      if (local_res8[0] == 0) {
        return 0;
      }
    }
    cVar1 = FUN_142c6b610();
    if (cVar1 != '\0') {
      return 0;
    }
  }
  if ((*(longlong *)(*param_2 + 0x648) != 0) &&
     (cVar1 = FUN_1407c3030(*(longlong *)(*param_2 + 0x648) + 0x288), cVar1 != '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 1407082c0 FUN_1407082c0 body=156 status=ok
// SIG undefined FUN_1407082c0(void)

longlong FUN_1407082c0(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar4;
  
  FUN_140721b10();
  lVar2 = *(longlong *)(param_1 + 0xd8);
  lVar3 = *(longlong *)(param_2 + 8);
  fVar1 = *(float *)(lVar2 + 0x4c + lVar3);
  uVar4 = (uint7)((ulonglong)lVar2 >> 8);
  if ((-(float)DAT_14622e710 < fVar1) && (fVar1 < (float)DAT_14622e710)) {
    fVar1 = *(float *)(lVar2 + 0x50 + lVar3);
    if ((-DAT_14622e710._4_4_ < fVar1) && (fVar1 < DAT_14622e710._4_4_)) {
      fVar1 = *(float *)(lVar2 + 0x54 + lVar3);
      if ((-DAT_14622e718 < fVar1) && (fVar1 < DAT_14622e718)) {
        return CONCAT71(uVar4,1);
      }
    }
  }
  return (ulonglong)uVar4 << 8;
}



// FUNCTION 140708370 FUN_140708370 body=263 status=ok
// SIG undefined FUN_140708370(void)

undefined8 FUN_140708370(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong local_res10;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  
  lVar1 = *(longlong *)(*param_2 + 0x568);
  if (lVar1 == 0) {
LAB_14070843e:
    uVar3 = 0;
  }
  else {
    cVar2 = FUN_142cc3a70(param_1 + 0x100,lVar1,&local_res10);
    if ((cVar2 == '\0') || (local_res10 == 0)) {
LAB_1407083f4:
      cVar2 = FUN_142cc54f0(param_1 + 0x100,lVar1,&local_38);
      if (cVar2 == '\0') goto LAB_14070843e;
    }
    else {
      uVar3 = UNavAgentInterface::GetPrivateStaticClass();
      plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(local_res10,uVar3);
      if (plVar4 == (longlong *)0x0) goto LAB_1407083f4;
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x18))(plVar4,local_28);
      local_38 = *puVar5;
      local_30 = *(undefined4 *)(puVar5 + 1);
    }
    if (*(char *)(param_1 + 0x340) == '\0') {
      cVar2 = FUN_14070bd20(param_1 + 0x118,param_2,&local_38,*(undefined1 *)(param_1 + 0x110));
joined_r0x000140708471:
      if (cVar2 == '\0') goto LAB_14070843e;
    }
    else if (*(char *)(param_1 + 0x338) != '\0') {
      cVar2 = FUN_14070bd20(param_1 + 0x1a0,param_2,&local_38,*(undefined1 *)(param_1 + 0x110));
      goto joined_r0x000140708471;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 140708490 FUN_140708490 body=859 status=ok
// SIG undefined FUN_140708490(void)

undefined8 FUN_140708490(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_a8 [16];
  undefined1 local_98 [112];
  
  lVar12 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  lVar8 = *(longlong *)(*param_2 + 0x488);
  if (lVar8 != 0) {
    local_res8 = (longlong *)0x0;
    FUN_142cc3a70(param_1 + 0x100,*(undefined8 *)(*param_2 + 0x568),&local_res8);
    if ((local_res8 != (longlong *)0x0) &&
       (plVar6 = (longlong *)(**(code **)(*local_res8 + 0x688))(), plVar6 != (longlong *)0x0)) {
      plVar1 = *(longlong **)(*param_2 + 0x628);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x4a8))(plVar1,0x40000000);
      }
      cVar5 = FUN_1405dc8f0(lVar12 + 0x48,lVar8);
      if (cVar5 != '\0') {
        lVar11 = param_2[1] + *(longlong *)(param_1 + 0xd8);
        FWeakObjectPtr::operator=(&local_res10,0);
        *(undefined4 *)(lVar11 + 0x58) = local_res10;
        *(undefined4 *)(lVar11 + 0x5c) = local_res14;
      }
      FWeakObjectPtr::operator=(lVar12 + 0x48,lVar8);
      FWeakObjectPtr::operator=(lVar12 + 0x50,plVar6);
      uVar7 = UScrollBox::GetPrivateStaticClass();
      uVar7 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
      FWeakObjectPtr::operator=(lVar12 + 0x60,uVar7);
      local_res8 = (longlong *)0x0;
      cVar5 = FUN_142cc3a70(param_1 + 0x110,*(undefined8 *)(*param_2 + 0x568),&local_res8);
      plVar6 = local_res8;
      if ((cVar5 != '\0') && (local_res8 != (longlong *)0x0)) {
        uVar7 = AUGWeapon_Hook::GetPrivateStaticClass();
        lVar8 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
        if ((lVar8 != 0) && (*(char *)(lVar8 + 0x6f9) != '\0')) {
          if ((*(int *)(lVar12 + 0x130) < 1) ||
             (cVar5 = FUN_1405dc8f0(lVar12 + 0x58,lVar8), cVar5 != '\0')) {
            lVar13 = param_2[1] + *(longlong *)(param_1 + 0xd8);
            puVar9 = (undefined4 *)FUN_14074c870(local_98);
            *(undefined4 *)(lVar13 + 0x138) = *puVar9;
            *(undefined4 *)(lVar13 + 0x13c) = puVar9[1];
            *(undefined4 *)(lVar13 + 0x140) = puVar9[2];
            *(undefined4 *)(lVar13 + 0x144) = puVar9[3];
            uVar7 = *(undefined8 *)(puVar9 + 6);
            *(undefined8 *)(lVar13 + 0x148) = *(undefined8 *)(puVar9 + 4);
            *(undefined8 *)(lVar13 + 0x150) = uVar7;
            uVar7 = *(undefined8 *)(puVar9 + 10);
            *(undefined8 *)(lVar13 + 0x158) = *(undefined8 *)(puVar9 + 8);
            *(undefined8 *)(lVar13 + 0x160) = uVar7;
            uVar7 = *(undefined8 *)(puVar9 + 0xe);
            *(undefined8 *)(lVar13 + 0x168) = *(undefined8 *)(puVar9 + 0xc);
            *(undefined8 *)(lVar13 + 0x170) = uVar7;
            uVar2 = puVar9[0x11];
            uVar3 = puVar9[0x12];
            uVar4 = puVar9[0x13];
            *(undefined4 *)(lVar13 + 0x178) = puVar9[0x10];
            *(undefined4 *)(lVar13 + 0x17c) = uVar2;
            *(undefined4 *)(lVar13 + 0x180) = uVar3;
            *(undefined4 *)(lVar13 + 0x184) = uVar4;
            *(undefined8 *)(lVar13 + 0x188) = *(undefined8 *)(puVar9 + 0x14);
            *(undefined4 *)(lVar13 + 400) = puVar9[0x16];
            *(undefined4 *)(lVar13 + 0x194) = puVar9[0x17];
            *(undefined8 *)(lVar13 + 0x198) = *(undefined8 *)(puVar9 + 0x18);
            *(undefined4 *)(lVar13 + 0x1a0) = puVar9[0x1a];
            *(undefined1 *)(lVar13 + 0x1a4) = *(undefined1 *)(puVar9 + 0x1b);
            *(undefined4 *)(lVar13 + 0x29c) = 0;
            lVar11 = FWeakObjectPtr::Get(lVar13 + 0x48);
            uVar7 = (**(code **)(*(longlong *)(lVar11 + 0x458) + 0x18))
                              ((longlong *)(lVar11 + 0x458),local_a8);
            cVar5 = FUN_140752a60(lVar13 + 0x68,uVar7,lVar8,lVar13 + 0x1a8);
            if (cVar5 == '\0') {
              return 0;
            }
            FWeakObjectPtr::operator=(lVar13 + 0x58,lVar8);
            *(undefined4 *)(lVar13 + 0x280) = 0xffffffff;
            FWeakObjectPtr::operator=(lVar12 + 0x58,lVar8);
          }
          FUN_140721c70(param_1,param_2);
          if (*(int *)(lVar12 + 0x298) == 2) {
            return 0;
          }
          if (*(int *)(lVar12 + 0x298) != 3) {
            return 1;
          }
          if (*(char *)(param_1 + 0x144) == '\0') {
            return 0;
          }
          cVar5 = FUN_140761c70(lVar12 + 0x138);
          if (cVar5 == '\0') {
            return 0;
          }
          cVar5 = FWeakObjectPtr::IsValid(lVar12 + 0x140);
          if (cVar5 == '\0') {
            return 0;
          }
          uVar7 = FWeakObjectPtr::Get(lVar12 + 0x138);
          uVar10 = FWeakObjectPtr::Get(lVar12 + 0x140);
          cVar5 = UKeyLabel::GetDisplayNameVisibility_Implementation(uVar10,uVar7);
          if (cVar5 == '\0') {
            return 0;
          }
          return 1;
        }
      }
      FUN_14070c610(param_1,param_2);
    }
  }
  return 0;
}



// FUNCTION 1407087f0 FUN_1407087f0 body=236 status=ok
// SIG undefined FUN_1407087f0(void)

undefined8 FUN_1407087f0(longlong param_1,longlong *param_2)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x100) != 0) {
    lVar3 = FUN_142e20fc0();
    for (lVar4 = *(longlong *)(param_1 + 0x100); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar3) {
        if (*(longlong *)(param_1 + 0x100) == 0) {
          return 0;
        }
        lVar4 = *(longlong *)(param_1 + 0xd8);
        lVar3 = param_2[1];
        fVar1 = *(float *)(lVar3 + 0x48 + lVar4);
        if ((fVar1 <= 0.0) || (*(float *)(param_1 + 0x14c) <= *(float *)(param_2 + 3) - fVar1)) {
          *(int *)(lVar3 + 0x48 + lVar4) = (int)param_2[3];
          FUN_14070b8c0(param_1,param_2);
          lVar4 = *(longlong *)(param_1 + 0xd8);
          lVar3 = param_2[1];
        }
        if (*(char *)(lVar4 + 0x4c + lVar3) != '\0') {
          if (*(char *)(lVar4 + 0x4d + lVar3) == '\0') {
            return 0;
          }
          if (*(char *)(param_1 + 0x150) == '\0') {
            plVar5 = (longlong *)0x0;
            if (*(longlong *)(*param_2 + 0x5c8) != 0) {
              plVar5 = *(longlong **)(*(longlong *)(*param_2 + 0x5c8) + 0x900);
            }
            if (plVar5 == (longlong *)0x0) {
              return 0;
            }
            cVar2 = (**(code **)(*plVar5 + 0x558))();
            if (cVar2 != '\0') {
              return 0;
            }
          }
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 1407088e0 FUN_1407088e0 body=167 status=ok
// SIG undefined FUN_1407088e0(void)

ulonglong FUN_1407088e0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  FUN_140721750();
  uVar1 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  if ((-(float)DAT_14622e710 < *(float *)(uVar1 + 0x70)) &&
     (*(float *)(uVar1 + 0x70) < (float)DAT_14622e710)) {
    if ((-DAT_14622e710._4_4_ < *(float *)(uVar1 + 0x74)) &&
       (*(float *)(uVar1 + 0x74) < DAT_14622e710._4_4_)) {
      if (((-DAT_14622e718 < *(float *)(uVar1 + 0x78)) && (*(float *)(uVar1 + 0x78) < DAT_14622e718)
          ) && (*(char *)(uVar1 + 0x60) == '\0')) {
        uVar1 = FUN_140708a20(param_1,param_2);
        return uVar1;
      }
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 140708990 FUN_140708990 body=144 status=ok
// SIG undefined FUN_140708990(void)

ulonglong FUN_140708990(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 local_d8 [208];
  
  lVar3 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  uVar1 = FUN_140705cd0(param_1,local_d8,param_2);
  FUN_142f8c200(lVar3 + 0x60,uVar1);
  FUN_142f8b770(local_d8);
  uVar2 = *param_2;
  if ((*(longlong *)(uVar2 + 0x628) != 0) &&
     (uVar2 = FUN_142f958b0(*(longlong *)(uVar2 + 0x628) + 0x9e8,*(undefined8 *)(lVar3 + 0x94)),
     (char)uVar2 == '\x01')) {
    uVar2 = FUN_140708a20(param_1,param_2);
    return uVar2;
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140708a20 FUN_140708a20 body=182 status=ok
// SIG undefined FUN_140708a20(void)

undefined8 FUN_140708a20(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = param_1[0x1b] + *(longlong *)(param_2 + 8);
  if ((*(longlong *)(lVar2 + 0x48) == 0) || (cVar1 = FUN_14070a100(), cVar1 == '\0')) {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x3b0))(param_1,param_2,*(undefined8 *)(lVar2 + 0x48));
  if (cVar1 == '\0') {
    if ((char)param_1[0x40] == '\0') {
      cVar1 = FUN_142fa58d0(*(undefined8 *)(lVar2 + 0x48));
      if (cVar1 != '\0') {
        return 0;
      }
      cVar1 = FUN_14070b3f0(param_1,param_2,*(undefined8 *)(lVar2 + 0x48));
    }
    else {
      cVar1 = FUN_140712ec0(param_1,param_2);
    }
    if (cVar1 == '\0') {
      return 0;
    }
  }
  else if ((*(char *)((longlong)param_1 + 0x205) == '\0') && ((char)param_1[0x40] != '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 140708ae0 FUN_140708ae0 body=320 status=ok
// SIG undefined FUN_140708ae0(void)

void FUN_140708ae0(longlong param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0xd8);
  lVar3 = param_2[1];
  if (*(char *)(lVar2 + 0x28 + lVar3) != '\x02') {
    fVar1 = *(float *)(lVar2 + 0x148 + lVar3);
    if ((fVar1 == 0.0) || (1.0 <= *(float *)(param_2 + 3) - fVar1)) {
      *(int *)(lVar2 + 0x148 + lVar3) = (int)param_2[3];
      local_res8 = *(undefined8 *)(*param_2 + 0x568);
      uVar5 = FUN_142de77e0(param_1 + 0x250,*param_2,0,&local_res8);
      *(undefined4 *)(lVar2 + 0x138 + lVar3) = uVar5;
      local_res8 = *(undefined8 *)(*param_2 + 0x568);
      uVar5 = FUN_142de77e0(param_1 + 0x2d0,*param_2,0,&local_res8);
      *(undefined4 *)(lVar2 + 0x13c + lVar3) = uVar5;
      local_res8 = *(undefined8 *)(*param_2 + 0x568);
      uVar5 = FUN_142de77e0(param_1 + 0x350,*param_2,0,&local_res8);
      *(undefined4 *)(lVar2 + 0x140 + lVar3) = uVar5;
      local_res8 = *(undefined8 *)(*param_2 + 0x568);
      uVar5 = FUN_142de77e0(param_1 + 0x3d0,*param_2,0,&local_res8);
      *(undefined4 *)(lVar2 + 0x144 + lVar3) = uVar5;
    }
    cVar4 = FUN_140703aa0(param_1,param_2);
    if (cVar4 == '\0') {
      return;
    }
  }
  FUN_140708a20(param_1,param_2);
  return;
}



// FUNCTION 140708c20 FUN_140708c20 body=178 status=ok
// SIG undefined FUN_140708c20(void)

ulonglong FUN_140708c20(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = FUN_14075eaf0(*param_2);
  if (uVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0xd8) + param_2[1];
    fVar2 = *(float *)(lVar5 + 0x50);
    if ((fVar2 <= 0.0) || (fVar2 < *(float *)(param_2 + 3) || fVar2 == *(float *)(param_2 + 3))) {
      lVar1 = uVar4 + 0x27a8;
      uVar4 = FUN_1407537e0(lVar1,param_1 + 0x110,*param_2,lVar5 + 0x48,*(undefined4 *)(param_2 + 3)
                           );
      if ((char)uVar4 != '\0') {
        FUN_14076de90(lVar1,*param_2,*(undefined4 *)(lVar5 + 0x48),*(undefined4 *)(param_2 + 3));
        uVar3 = *(undefined4 *)(param_2 + 3);
        *(undefined4 *)(lVar5 + 0x4c) = uVar3;
        return CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140708ce0 FUN_140708ce0 body=272 status=ok
// SIG undefined FUN_140708ce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140708ce0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [4];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_98 = 0xffffffff;
  uStack_90 = 0xffffffff;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_78 = 0;
  local_64 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_38 = 0;
  local_28 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_d8[0] = 0;
  local_d4 = 0xffffffff;
  local_cc = 0xffffffff;
  local_ac = _DAT_1468b5d90;
  local_a4 = DAT_1468b5d98;
  local_88 = 0;
  uStack_80 = 0;
  local_70 = _DAT_1468b5d90;
  local_68 = DAT_1468b5d98;
  local_5c = 0xffffffff;
  local_54 = 0xffffffff;
  local_34 = _DAT_1468b5d90;
  local_2c = DAT_1468b5d98;
  cVar1 = FUN_1407186a0(param_1,0,local_d8);
  if (cVar1 == '\0') {
LAB_140708dcd:
    uVar2 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x100) == '\0') {
      cVar1 = FUN_140713c80(param_1,param_2,local_d8);
      if (cVar1 == '\0') goto LAB_140708dcd;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140708df0 FUN_140708df0 body=825 status=ok
// SIG undefined FUN_140708df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_140708df0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong *local_res8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [96];
  
  lVar11 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  cVar6 = FWeakObjectPtr::IsValid(lVar11 + 0x48);
  if (cVar6 == '\0') {
    return 0;
  }
  cVar6 = FSkeletonRemapping::IsValid(lVar11 + 0x50);
  if (cVar6 != '\0') goto LAB_140708fae;
  lVar11 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  local_res8 = (longlong *)0x0;
  *(int *)(lVar11 + 0xb0) = (int)param_2[3];
  FUN_142cc4b40(param_1 + 0x100,*(undefined8 *)(*param_2 + 0x568),&local_res8);
  plVar5 = local_res8;
  if (local_res8 == (longlong *)0x0) {
LAB_140708ee0:
    uVar8 = 0;
  }
  else {
    lVar7 = FUN_1428dfc70();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140708ee0;
    uVar8 = AUGWeapon_Hook::GetPrivateStaticClass();
    uVar8 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar8);
  }
  lVar7 = FWeakObjectPtr::Get(lVar11 + 0x48);
  uVar9 = (**(code **)(*(longlong *)(lVar7 + 0x458) + 0x18))((longlong *)(lVar7 + 0x458),&local_88);
  puVar10 = (undefined4 *)FUN_1407565c0(local_78,uVar8,uVar9);
  *(undefined4 *)(lVar11 + 0x50) = *puVar10;
  *(undefined4 *)(lVar11 + 0x54) = puVar10[1];
  *(undefined4 *)(lVar11 + 0x58) = puVar10[2];
  *(undefined4 *)(lVar11 + 0x5c) = puVar10[3];
  uVar8 = *(undefined8 *)(puVar10 + 6);
  *(undefined8 *)(lVar11 + 0x60) = *(undefined8 *)(puVar10 + 4);
  *(undefined8 *)(lVar11 + 0x68) = uVar8;
  uVar8 = *(undefined8 *)(puVar10 + 10);
  *(undefined8 *)(lVar11 + 0x70) = *(undefined8 *)(puVar10 + 8);
  *(undefined8 *)(lVar11 + 0x78) = uVar8;
  uVar8 = *(undefined8 *)(puVar10 + 0xe);
  *(undefined8 *)(lVar11 + 0x80) = *(undefined8 *)(puVar10 + 0xc);
  *(undefined8 *)(lVar11 + 0x88) = uVar8;
  uVar1 = puVar10[0x11];
  uVar2 = puVar10[0x12];
  uVar3 = puVar10[0x13];
  *(undefined4 *)(lVar11 + 0x90) = puVar10[0x10];
  *(undefined4 *)(lVar11 + 0x94) = uVar1;
  *(undefined4 *)(lVar11 + 0x98) = uVar2;
  *(undefined4 *)(lVar11 + 0x9c) = uVar3;
  *(undefined8 *)(lVar11 + 0xa0) = *(undefined8 *)(puVar10 + 0x14);
  *(undefined4 *)(lVar11 + 0xa8) = puVar10[0x16];
  *(undefined4 *)(lVar11 + 0xac) = puVar10[0x17];
  cVar6 = FUN_140761890(lVar11 + 0x50);
  if (cVar6 == '\0') {
    FUN_14071c170(param_1,param_2);
  }
  cVar6 = FSkeletonRemapping::IsValid(lVar11 + 0x50);
  if (cVar6 == '\0') {
    FUN_142cbcc90(param_1 + 0x100,*(undefined8 *)(*param_2 + 0x568));
    return 0;
  }
LAB_140708fae:
  lVar11 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  cVar6 = FWeakObjectPtr::IsValid(lVar11 + 0xb8);
  if ((cVar6 == '\0') || (local_res8 = (longlong *)0x0, *(longlong *)(lVar11 + 0xc0) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    lVar7 = FWeakObjectPtr::Get(lVar11 + 0x48);
    lVar7 = *(longlong *)(lVar7 + 0x168);
    if (lVar7 == 0) {
      local_98 = _DAT_1468b5d90;
      local_90 = DAT_1468b5d98;
    }
    else {
      local_98 = *(undefined8 *)(lVar7 + 0x220);
      local_90 = *(undefined4 *)(lVar7 + 0x228);
    }
    local_88 = local_98;
    local_80 = local_90;
    uVar8 = FWeakObjectPtr::Get(lVar11 + 0xb8);
    FUN_14074c920(local_78,uVar8,*(undefined8 *)(lVar11 + 0xc0),&local_88);
    lVar11 = FUN_14075fa30(local_78,0);
    if (lVar11 != 0) {
      FUN_142cd0820(param_1 + 0x138,*(undefined8 *)(*param_2 + 0x568),
                    *(undefined4 *)(lVar11 + 0x728));
      FUN_142cd0a60(param_1 + 0x128,*(undefined8 *)(*param_2 + 0x568),lVar11);
    }
    FUN_142cd0450(param_1 + 0x158,*(undefined8 *)(*param_2 + 0x568),0);
    FUN_142cd0450(param_1 + 0x178,*(undefined8 *)(*param_2 + 0x568),0);
  }
  else {
    FUN_14071c370(param_1,param_2);
  }
  return 1;
}



// FUNCTION 140709130 FUN_140709130 body=481 status=ok
// SIG undefined FUN_140709130(void)

void FUN_140709130(longlong param_1,longlong *param_2)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 local_res8;
  undefined1 local_d8 [208];
  
  lVar4 = *(longlong *)(param_1 + 0xd8);
  lVar3 = param_2[1];
  fVar1 = *(float *)(lVar4 + 0x14c + lVar3);
  if ((fVar1 == 0.0) || (1.0 <= *(float *)(param_2 + 3) - fVar1)) {
    *(int *)(lVar4 + 0x14c + lVar3) = (int)param_2[3];
    local_res8 = *(undefined8 *)(*param_2 + 0x568);
    uVar5 = FUN_142de77e0(param_1 + 0x2d0,*param_2,0,&local_res8);
    *(undefined4 *)(lVar4 + 0x134 + lVar3) = uVar5;
    local_res8 = *(undefined8 *)(*param_2 + 0x568);
    uVar5 = FUN_142de77e0(param_1 + 0x3d0,*param_2,0,&local_res8);
    *(undefined4 *)(lVar4 + 0x138 + lVar3) = uVar5;
    local_res8 = *(undefined8 *)(*param_2 + 0x568);
    uVar5 = FUN_142de77e0(param_1 + 0x4d0,*param_2,0,&local_res8);
    *(undefined4 *)(lVar4 + 0x13c + lVar3) = uVar5;
    local_res8 = *(undefined8 *)(*param_2 + 0x568);
    uVar5 = FUN_142de77e0(param_1 + 0x250,*param_2,0,&local_res8);
    *(undefined4 *)(lVar4 + 0x140 + lVar3) = uVar5;
    local_res8 = *(undefined8 *)(*param_2 + 0x568);
    uVar5 = FUN_142de77e0(param_1 + 0x350,*param_2,0,&local_res8);
    *(undefined4 *)(lVar4 + 0x144 + lVar3) = uVar5;
    local_res8 = *(undefined8 *)(*param_2 + 0x568);
    uVar5 = FUN_142de77e0(param_1 + 0x450,*param_2,0,&local_res8);
    *(undefined4 *)(lVar4 + 0x148 + lVar3) = uVar5;
    lVar4 = *(longlong *)(param_1 + 0xd8);
    lVar3 = param_2[1];
  }
  *(undefined1 *)(lVar4 + 0x60 + lVar3) = 0;
  uVar2 = FUN_140706fa0(param_1,local_d8,param_2);
  FUN_142f8c200(lVar3 + 0x68 + lVar4,uVar2);
  FUN_142f8b770(local_d8);
  FUN_140708a20(param_1,param_2);
  return;
}



// FUNCTION 140709320 FUN_140709320 body=166 status=ok
// SIG undefined FUN_140709320(void)

undefined8 FUN_140709320(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FWeakObjectPtr::Get(*(longlong *)(param_1 + 0xd8) + 300 + param_2[1]);
  if (((plVar2 != (longlong *)0x0) && (cVar1 = FUN_1407c3030(plVar2 + 0x116), cVar1 == '\0')) &&
     (cVar1 = (**(code **)(*plVar2 + 0xc80))(plVar2), cVar1 == '\0')) {
    if ((*(longlong *)(*param_2 + 0x628) != 0) &&
       (cVar1 = FUN_142fa8470(*(longlong *)(*param_2 + 0x628) + 0x930), cVar1 != '\0')) {
      return 0;
    }
    cVar1 = FUN_140713fe0(param_1,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1407093d0 FUN_1407093d0 body=96 status=ok
// SIG undefined FUN_1407093d0(void)

undefined1 FUN_1407093d0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FWeakObjectPtr::IsValid(*(longlong *)(param_1 + 0xd8) + 0x78 + *(longlong *)(param_2 + 8))
  ;
  if (cVar1 != '\0') {
    cVar1 = FUN_14070bf00(param_1,param_2);
    if (cVar1 != '\0') {
      cVar1 = FUN_140709e90(param_1,param_2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140709430 FUN_140709430 body=234 status=ok
// SIG undefined FUN_140709430(void)

undefined1 FUN_140709430(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 local_res10;
  
  lVar2 = FUN_14075eaf0(*param_2);
  if (lVar2 != 0) {
    local_res10 = *(undefined8 *)(*param_2 + 0x568);
    uVar3 = FUN_142de77e0(param_1 + 0x108,*(undefined8 *)(*param_2 + 0x488),0,&local_res10);
    local_res10 = 0;
    if (((*(char *)(param_1 + 0x220) != '\0') && (*(longlong *)(param_1 + 0x208) != 0)) &&
       (*(char *)(*(longlong *)(param_1 + 0x208) + 0x130) != '\0')) {
      FUN_142cc3a70(param_1 + 0x210,*(undefined8 *)(*param_2 + 0x568),&local_res10);
    }
    cVar1 = FUN_140753a50(lVar2 + 0x48,*(undefined8 *)(param_1 + 0x208),*param_2,
                          *(undefined1 *)(param_1 + 0x101),uVar3,local_res10);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140709520 FUN_140709520 body=108 status=ok
// SIG undefined FUN_140709520(void)

bool FUN_140709520(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  cVar1 = FUN_1406e8e60(param_1 + 0x100);
  if (cVar1 == '\0') {
    *(undefined4 *)(lVar2 + 0x4c) = 0;
    return false;
  }
  fVar3 = *(float *)(lVar2 + 0x4c);
  if (fVar3 <= 0.0) {
    fVar3 = *(float *)(param_2 + 0x18);
    *(float *)(lVar2 + 0x4c) = fVar3;
  }
  return *(float *)(lVar2 + 0x48) <= *(float *)(param_2 + 0x18) - fVar3;
}



// FUNCTION 140709590 FUN_140709590 body=423 status=ok
// SIG undefined FUN_140709590(void)

undefined8 FUN_140709590(longlong param_1,longlong *param_2)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 local_res8;
  
  lVar3 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  fVar5 = *(float *)(param_2 + 3);
  if (fVar5 < *(float *)(lVar3 + 0x50)) goto LAB_14070971b;
  if (*(char *)(param_1 + 0x290) == '\0') {
LAB_14070963e:
    if (*(char *)(param_1 + 0x318) != '\0') {
      if ((*(longlong *)(*param_2 + 0x5e8) != 0) &&
         (fVar1 = *(float *)(*(longlong *)(*param_2 + 0x5e8) + 0xe788), 0.0 < fVar1)) {
        if (fVar1 != *(float *)(lVar3 + 100)) {
          *(float *)(lVar3 + 100) = fVar1;
          local_res8 = *(undefined8 *)(*param_2 + 0x568);
          uVar4 = FUN_142de77e0(param_1 + 0x298,*param_2,0,&local_res8);
          *(undefined4 *)(lVar3 + 0x68) = uVar4;
          fVar5 = *(float *)(param_2 + 3);
        }
        if (fVar5 < fVar1 + *(float *)(lVar3 + 0x68)) goto LAB_14070971b;
      }
    }
    if (*(char *)(param_1 + 0x180) != '\0') {
      if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
        lVar3 = *(longlong *)(param_1 + 0x20);
      }
      else {
        lVar3 = 0;
      }
      if (lVar3 != 0) {
        if ((*(char *)(*(longlong *)(lVar3 + 0xd8) + 0x28 + param_2[1]) != '\x02') &&
           (*(float *)(*(longlong *)(lVar3 + 0xd8) + 0x4c + param_2[1]) <= 0.0)) {
          local_res8 = *(undefined8 *)(*param_2 + 0x568);
          uVar4 = FUN_142de77e0(param_1 + 0x100,*param_2,0,&local_res8);
          lVar3 = *(longlong *)(lVar3 + 0xd8) + param_2[1];
          *(undefined4 *)(lVar3 + 0x48) = uVar4;
          *(int *)(lVar3 + 0x4c) = (int)param_2[3];
        }
      }
    }
    uVar2 = 1;
  }
  else {
    if (*(longlong *)(*param_2 + 0x5e8) == 0) goto LAB_14070963e;
    fVar1 = *(float *)(*(longlong *)(*param_2 + 0x5e8) + 0xe78c);
    if (0.0 < fVar1) {
      if (fVar1 != *(float *)(lVar3 + 0x5c)) {
        *(float *)(lVar3 + 0x5c) = fVar1;
        local_res8 = *(undefined8 *)(*param_2 + 0x568);
        uVar4 = FUN_142de77e0(param_1 + 0x210,*param_2,0,&local_res8);
        *(undefined4 *)(lVar3 + 0x60) = uVar4;
        fVar5 = *(float *)(param_2 + 3);
      }
      if (fVar1 + *(float *)(lVar3 + 0x60) <= fVar5) goto LAB_14070963e;
    }
LAB_14070971b:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 140709740 FUN_140709740 body=163 status=ok
// SIG undefined FUN_140709740(void)

undefined1 FUN_140709740(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 local_138 [304];
  
  lVar3 = FWeakObjectPtr::Get(*(longlong *)(param_2 + 8) + 0x58 + *(longlong *)(param_1 + 0xd8));
  if (lVar3 == 0) {
LAB_14070977d:
    lVar3 = FWeakObjectPtr::Get(*(longlong *)(param_2 + 8) + 0x58 + *(longlong *)(param_1 + 0xd8));
    if (lVar3 != 0) {
      FUN_14070d210(param_1,local_138,param_2);
      cVar1 = FUN_14073d210(local_138);
      if (cVar1 != '\0') {
        cVar1 = FUN_140731860(lVar3,local_138);
        if (cVar1 != '\0') goto LAB_1407097c8;
      }
    }
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_14073cf40(lVar3);
    if (cVar1 == '\0') goto LAB_14070977d;
LAB_1407097c8:
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1407097f0 FUN_1407097f0 body=92 status=ok
// SIG undefined FUN_1407097f0(void)

void FUN_1407097f0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x148) != 0) {
    cVar1 = FUN_1406de2b0();
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_1406df180(param_1,param_2,param_3);
  return;
}



// FUNCTION 140709850 FUN_140709850 body=305 status=ok
// SIG undefined FUN_140709850(void)

ulonglong FUN_140709850(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  plVar8 = *(longlong **)(param_1 + 0x148);
  plVar1 = plVar8 + *(int *)(param_1 + 0x150);
  for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
    lVar3 = *plVar8;
    if (lVar3 != 0) {
      lVar5 = USoundNodeEnveloper::StaticClass();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) break;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x148);
  iVar2 = *(int *)(param_1 + 0x150);
joined_r0x0001407098ec:
  do {
    if (plVar8 == (longlong *)(lVar3 + (longlong)iVar2 * 8)) {
      uVar6 = FUN_1406df180(param_1,param_2,param_3);
      return uVar6;
    }
    uVar6 = FUN_1406de2b0(*plVar8,param_2,param_3);
    if ((char)uVar6 == '\0') {
      return uVar6 & 0xffffffffffffff00;
    }
    do {
      do {
        plVar8 = plVar8 + 1;
        if (plVar8 == plVar1) goto joined_r0x0001407098ec;
        lVar5 = *plVar8;
      } while (lVar5 == 0);
      lVar7 = USoundNodeEnveloper::StaticClass();
      lVar5 = *(longlong *)(lVar5 + 0x10);
      if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
    } while (!bVar4);
  } while( true );
}



// FUNCTION 140709990 FUN_140709990 body=124 status=ok
// SIG undefined FUN_140709990(void)

void FUN_140709990(longlong param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0xd8) + 0x50 + *(longlong *)(param_2 + 8));
  if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x150))) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar1 * 8) != 0)) {
    cVar2 = FUN_1406de2b0();
    if (cVar2 == '\0') {
      return;
    }
  }
  FUN_1406df180(param_1,param_2,param_3);
  return;
}



// FUNCTION 140709a10 FUN_140709a10 body=183 status=ok
// SIG undefined FUN_140709a10(void)

ulonglong FUN_140709a10(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  float extraout_XMM0_Da;
  undefined8 local_res20;
  
  if (param_3 == '\x03') {
    local_res20 = *(undefined8 *)(*param_2 + 0x568);
    uVar3 = FUN_142de77e0(param_1 + 0x168,*param_2,0,&local_res20);
    if (extraout_XMM0_Da < 0.5) goto LAB_140709a97;
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0xd8) + 0x50 + param_2[1]);
  if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x150))) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar1 * 8), lVar2 != 0)) {
    uVar3 = FUN_1406de2b0(lVar2,param_2,param_3);
    if ((char)uVar3 == '\0') {
LAB_140709a97:
      return uVar3 & 0xffffffffffffff00;
    }
  }
  uVar3 = FUN_1406df180(param_1,param_2,param_3);
  return uVar3;
}



// FUNCTION 140709ad0 FUN_140709ad0 body=359 status=ok
// SIG undefined FUN_140709ad0(void)

ulonglong FUN_140709ad0(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  float extraout_XMM0_Da;
  undefined8 local_res20;
  
  if (((*(longlong *)(*param_2 + 0x648) != 0) &&
      (lVar9 = *(longlong *)(param_1 + 0xd8) + param_2[1], *(longlong *)(lVar9 + 0x48) != 0)) &&
     (*(longlong *)(lVar9 + 0x50) != 0)) {
    plVar7 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(lVar9 + 0x50) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar2 = *(longlong **)(lVar9 + 0x50);
      plVar8 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar8 = plVar7, !bVar10) {
          LOCK();
          bVar10 = iVar4 == (int)plVar2[1];
          if (bVar10) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar10) {
            plVar8 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar7 = *(longlong **)(lVar9 + 0x48);
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar2[1];
          bVar10 = iVar4 == 0;
          if (bVar10) {
            *(int *)(plVar2 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      cVar3 = (**(code **)(*plVar7 + 0x38))(plVar7);
      if (cVar3 == '\0') {
        local_res20 = *(undefined8 *)(*param_2 + 0x568);
        lVar9 = 0x238;
        if (param_3 != '\x02') {
          lVar9 = 0x1b8;
        }
        uVar6 = FUN_142de77e0(lVar9 + param_1,*param_2,0,&local_res20);
        if (extraout_XMM0_Da < 0.5) {
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar8 + 1;
            lVar9 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            uVar5 = (int)lVar9 - 1;
            uVar6 = (ulonglong)uVar5;
            if (uVar5 == 0) {
              uVar6 = (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                uVar6 = (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          return uVar6 & 0xffffffffffffff00;
        }
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar8 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
  }
  uVar6 = BuildSettings::IsPromotedBuild(param_1,param_2,param_3);
  return uVar6;
}



// FUNCTION 140709c40 FUN_140709c40 body=285 status=ok
// SIG undefined FUN_140709c40(void)

ulonglong FUN_140709c40(longlong param_1,longlong param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  lVar8 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  if ((*(longlong *)(lVar8 + 0x50) != 0) && (*(longlong *)(lVar8 + 0x58) != 0)) {
    plVar6 = (longlong *)0x0;
    piVar1 = (int *)(*(longlong *)(lVar8 + 0x58) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      plVar2 = *(longlong **)(lVar8 + 0x58);
      plVar7 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar3 = (int)plVar2[1];
        bVar9 = iVar3 == 0;
        if (bVar9) {
          *(int *)(plVar2 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        while (plVar7 = plVar6, !bVar9) {
          LOCK();
          bVar9 = iVar3 == (int)plVar2[1];
          if (bVar9) {
            *(int *)(plVar2 + 1) = iVar3 + 1;
          }
          UNLOCK();
          if (bVar9) {
            plVar7 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar6 = *(longlong **)(lVar8 + 0x50);
            }
            break;
          }
          LOCK();
          iVar3 = (int)plVar2[1];
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(plVar2 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
        }
      }
      uVar5 = (**(code **)(*plVar6 + 0x38))(plVar6);
      if ((char)uVar5 == '\0') {
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar7 + 1;
          lVar8 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          uVar4 = (int)lVar8 - 1;
          uVar5 = (ulonglong)uVar4;
          if (uVar4 == 0) {
            uVar5 = (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              uVar5 = (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
        return uVar5 & 0xffffffffffffff00;
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        lVar8 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar7)(plVar7);
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
  }
  uVar5 = BuildSettings::IsPromotedBuild(param_1,param_2,param_3);
  return uVar5;
}



// FUNCTION 140709d60 FUN_140709d60 body=105 status=ok
// SIG undefined FUN_140709d60(void)

undefined1 FUN_140709d60(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14075eaf0(*param_2);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xd8) + param_2[1];
    if ((*(float *)(lVar3 + 0x50) <= *(float *)(param_2 + 3)) && (-1 < *(int *)(lVar3 + 0x48))) {
      cVar1 = FUN_140761900(lVar2 + 0x27a8,*param_2);
      if (cVar1 != '\0') {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 140709e00 FUN_140709e00 body=130 status=ok
// SIG undefined FUN_140709e00(void)

void FUN_140709e00(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x4c0) != '\0') {
    lVar3 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
    lVar2 = FWeakObjectPtr::Get(lVar3 + 0x298);
    if (((lVar2 != 0) && (lVar3 = FWeakObjectPtr::Get(lVar3 + 0x2a0), lVar3 != 0)) &&
       (cVar1 = FUN_14073ca40(lVar3,lVar2), cVar1 != '\0')) {
      FUN_1406dfae0(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 140709e90 FUN_140709e90 body=618 status=ok
// SIG undefined FUN_140709e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140709e90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 local_f8;
  float local_f0;
  longlong local_e8 [2];
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  uint local_c8 [4];
  undefined1 local_b8 [12];
  undefined4 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  if (*(char *)(param_1 + 0x111) == '\0') {
    return 1;
  }
  lVar6 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  if (((((float)DAT_14622e710 != *(float *)(lVar6 + 0x54)) ||
       (DAT_14622e710._4_4_ != *(float *)(lVar6 + 0x58))) ||
      (DAT_14622e718 != *(float *)(lVar6 + 0x5c))) &&
     (plVar3 = (longlong *)FWeakObjectPtr::Get(lVar6 + 0x78), plVar3 != (longlong *)0x0)) {
    lVar1 = plVar3[0x44];
    lVar4 = 0;
    if (lVar1 != 0) {
      lVar4 = *(longlong *)(lVar1 + 0x4d0);
    }
    if (lVar4 == 0) {
      fVar12 = 0.0;
    }
    else {
      uVar8 = *(uint *)(lVar4 + 0x230) & _DAT_1468588b0;
      uVar9 = *(uint *)(lVar4 + 0x234) & uRam00000001468588b4;
      uVar10 = *(uint *)(lVar4 + 0x238) & uRam00000001468588b8;
      uVar11 = *(uint *)(lVar4 + 0x23c) & uRam00000001468588bc;
      auVar13._4_4_ = uVar9;
      auVar13._0_4_ = uVar8;
      auVar13._8_4_ = uVar10;
      auVar13._12_4_ = uVar11;
      auVar14._4_4_ = uVar10;
      auVar14._0_4_ = uVar9;
      auVar14._8_4_ = uVar8;
      auVar14._12_4_ = uVar11;
      auVar14 = minps(auVar13,auVar14);
      auVar2._4_4_ = uVar8;
      auVar2._0_4_ = uVar10;
      auVar2._8_4_ = uVar9;
      auVar2._12_4_ = uVar11;
      auVar14 = minps(auVar14,auVar2);
      fVar12 = auVar14._0_4_ * *(float *)(lVar4 + 0x710);
    }
    lVar4 = plVar3[0x24];
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(plVar3);
    }
    uVar5 = FUN_142f9cfb0(lVar4,0);
    fVar7 = (float)FUN_142fa34f0(uVar5);
    local_e8[0] = 0;
    local_f8 = *(undefined8 *)(lVar6 + 0x54);
    local_e8[1] = 0;
    local_f0 = *(float *)(lVar6 + 0x5c);
    local_f0 = (float)FUN_142fa2ea0(lVar1,&local_f8,0,fVar7 * 2.0,local_e8);
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
    local_c8[0] = local_c8[0] & 0xfffffff8;
    local_d8 = (undefined4)local_f8;
    local_d4 = local_f8._4_4_;
    local_c8[1] = 0;
    local_c8[2] = 0;
    local_d0 = fVar12 + 1.0 + local_f0;
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
    FUN_142326750(local_e8,plVar3);
    (**(code **)(*plVar3 + 0x870))(plVar3,&local_d8,local_c8,0,0);
    FUN_142328740(local_e8);
    if (((byte)local_c8[0] & 3) == 3) {
      *(undefined8 *)(lVar6 + 0x60) = local_a4;
      *(undefined4 *)(lVar6 + 0x68) = local_9c;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14070a100 FUN_14070a100 body=320 status=ok
// SIG undefined FUN_14070a100(void)

bool FUN_14070a100(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_d8 [104];
  undefined1 local_70 [104];
  
  lVar5 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  lVar1 = *(longlong *)(lVar5 + 0x48);
  if (lVar1 == 0) {
    return false;
  }
  lVar2 = *(longlong *)(*param_2 + 0x628);
  if (lVar2 == 0) {
    return false;
  }
  if (*(char *)(lVar5 + 0x28) != '\x02') {
    uVar4 = FUN_1407045b0(param_1,local_d8,param_2);
    FUN_142f8c200(lVar1,uVar4);
    FUN_142f8b770(local_d8);
    FUN_142fb8fb0(*(undefined8 *)(lVar5 + 0x48),lVar2 + 0x6e8);
    cVar3 = FUN_1407c3030(*(undefined8 *)(lVar5 + 0x48));
    return cVar3 == '\0';
  }
  if (*(char *)(lVar1 + 0xb9) == '\0') {
    return true;
  }
  FUN_1407045b0(param_1,local_d8,param_2);
  cVar3 = FUN_142f8c620(*(longlong *)(lVar5 + 0x48) + 0x68,local_70);
  if (cVar3 != '\0') {
    cVar3 = FUN_142fa8a40(local_d8);
    if ((cVar3 != '\0') && (cVar3 = FUN_140712ec0(param_1,param_2,local_d8), cVar3 != '\0')) {
      FUN_142f8c200(*(undefined8 *)(lVar5 + 0x48),local_d8);
      cVar3 = FUN_14071ccd0(param_1,param_2);
      if (cVar3 != '\x02') goto LAB_14070a232;
    }
    FUN_142f8b770(local_d8);
    return false;
  }
LAB_14070a232:
  FUN_142f8b770(local_d8);
  return true;
}



// FUNCTION 14070a240 FUN_14070a240 body=385 status=ok
// SIG undefined FUN_14070a240(void)

void FUN_14070a240(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_res8;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146858a18) && (_Init_thread_header(&DAT_146858a18), DAT_146858a18 == -1))
  {
    FName::FName(&DAT_146858a10,L"Cover",1);
    _Init_thread_footer(&DAT_146858a18);
  }
  lVar9 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  lVar6 = FWeakObjectPtr::Get(lVar9 + 0x4c);
  lVar1 = *(longlong *)(*param_2 + 0x628);
  if (lVar6 == 0) {
    return;
  }
  if (lVar1 == 0) {
    return;
  }
  if (param_3 == '\0') {
    lVar2 = *(longlong *)(*param_2 + 0x568);
    lVar8 = 0;
    if (lVar2 != 0) {
      local_res8 = 0;
      FUN_142cc3f20(param_1 + 0x100,lVar2,&local_res8);
      lVar2 = local_res8;
      if (local_res8 != 0) {
        lVar7 = ACameraActor::GetPrivateStaticClass();
        lVar3 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          lVar8 = lVar2;
        }
      }
    }
    cVar5 = FUN_14073cf70(lVar6,lVar8);
    if (cVar5 != '\0') {
      cVar5 = '\x01';
      goto LAB_14070a33f;
    }
  }
  cVar5 = '\0';
LAB_14070a33f:
  if (cVar5 != *(char *)(lVar9 + 0x48)) {
    if (cVar5 == '\0') {
      FUN_142dbb5d0(lVar1 + 0x178,&DAT_146858a10);
    }
    else {
      FUN_142dafbc0();
    }
    *(char *)(lVar9 + 0x48) = cVar5;
  }
  return;
}



// FUNCTION 14070a3d0 FUN_14070a3d0 body=74 status=ok
// SIG undefined FUN_14070a3d0(void)

void FUN_14070a3d0(longlong param_1)

{
  uint uVar1;
  
  if (DAT_1468c217e == '\0') {
    uVar1 = 1;
    do {
      FUN_14070a590(param_1,uVar1 & 0xff,4);
      uVar1 = uVar1 - 1;
    } while (-1 < (int)uVar1);
    FUN_1406d8ac0(param_1 + 0x4e8);
  }
  return;
}



// FUNCTION 14070a420 FUN_14070a420 body=145 status=ok
// SIG undefined FUN_14070a420(void)

void FUN_14070a420(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar1 = *(longlong **)(param_1 + 0x148);
  uVar2 = (longlong)*(int *)(param_1 + 0x150) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x150) < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_1406e7ff0(*plVar1,param_2);
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  FUN_1406df740(param_1,param_2);
  return;
}



// FUNCTION 14070a4c0 FUN_14070a4c0 body=54 status=ok
// SIG undefined FUN_14070a4c0(void)

void FUN_14070a4c0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1406e7ff0();
  }
  FUN_1406df740(param_1,param_2);
  return;
}



// FUNCTION 14070a500 FUN_14070a500 body=135 status=ok
// SIG undefined FUN_14070a500(void)

void FUN_14070a500(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  lVar2 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  if (*(longlong *)(lVar2 + 0x48) != 0) {
    lVar1 = *(longlong *)(*param_2 + 0x568);
    if (lVar1 != 0) {
      FUN_142ccda60(param_1 + 0x100,lVar1,local_res8);
      FUN_142bcd200(lVar1,local_res8[0],*(undefined8 *)(lVar2 + 0x48));
    }
    *(undefined8 *)(lVar2 + 0x48) = 0;
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 14070a590 FUN_14070a590 body=953 status=ok
// SIG undefined FUN_14070a590(void)

void FUN_14070a590(longlong param_1,byte param_2,undefined1 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  byte local_res10 [8];
  undefined1 local_58 [48];
  
  plVar9 = (longlong *)(((ulonglong)param_2 + 0xf) * 0x30 + param_1);
  lVar10 = plVar9[1];
  if ((lVar10 == 0) || (*(char *)((longlong)plVar9 + 0x2a) != '\0')) goto LAB_14070a8e5;
  *(undefined1 *)((longlong)plVar9 + 0x2a) = 1;
  lVar8 = 0;
  iVar1 = *(int *)(param_1 + 0xc);
  lVar5 = lVar8;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar7 = iVar1 >> 0x1f & 0xffff;
    uVar4 = iVar1 + uVar7;
    lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
  }
  if (((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) &&
     (lVar5 = *(longlong *)(param_1 + 0x188), lVar5 != 0)) {
    lVar6 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (plVar9[4] != 0)) {
      FUN_1406d48b0(local_58,lVar5,plVar9[4],plVar9[3]);
      if ((char)plVar9[5] != -1) {
        *(char *)(plVar9 + 5) = (char)plVar9[5] + '\x01';
      }
      FUN_1406f7e60(plVar9[1],local_58,param_3);
      if ((char)plVar9[5] != '\0') {
        *(char *)(plVar9 + 5) = (char)plVar9[5] + -1;
      }
      if (plVar9[1] != lVar10) {
        *(undefined1 *)((longlong)plVar9 + 0x2a) = 1;
        return;
      }
    }
  }
  if ((char)plVar9[5] == '\0') {
    lVar5 = *(longlong *)(param_1 + 0x188);
    if (lVar5 == 0) {
LAB_14070a770:
      lVar5 = lVar8;
    }
    else {
      lVar6 = ARemnantWeaponMod::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14070a770;
    }
    plVar9[1] = 0;
    if (plVar9[4] != 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      lVar6 = lVar8;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar7 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar7;
        lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
      }
      if (((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) && (lVar5 != 0)) {
        FUN_1406d48b0(local_58,lVar5,plVar9[4],plVar9[3]);
        if ((char)plVar9[5] != -1) {
          *(char *)(plVar9 + 5) = (char)plVar9[5] + '\x01';
        }
        FUN_1406e7ff0(lVar10,local_58);
        if ((char)plVar9[5] != '\0') {
          *(char *)(plVar9 + 5) = (char)plVar9[5] + -1;
        }
      }
      FUN_1406e9910(plVar9[4],plVar9[3]);
      plVar9[4] = 0;
    }
    plVar2 = (longlong *)*plVar9;
    plVar9[3] = 0;
    if ((plVar2 != (longlong *)0x0) && (*plVar9 = 0, *(char *)((longlong)plVar2 + 0x39) != '\x04'))
    {
      iVar1 = *(int *)((longlong)plVar2 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar7 = iVar1 >> 0x1f & 0xffff;
        uVar4 = iVar1 + uVar7;
        lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
      }
      if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) {
        lVar10 = UCompositionGraphCaptureProtocol::StaticClass();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
            != lVar10 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_14072b980(plVar2,lVar5);
        }
        else {
          (**(code **)(*plVar2 + 0x298))(plVar2);
        }
      }
    }
    local_res10[0] = param_2;
    FUN_1406fe380(param_1 + 0x338,local_res10);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x390);
    lVar10 = (longlong)iVar1;
    *(int *)(param_1 + 0x390) = iVar1 + 1;
    if (*(int *)(param_1 + 0x394) < iVar1 + 1) {
      FUN_140717ed0(param_1 + 0x338,iVar1);
    }
    lVar8 = *(longlong *)(param_1 + 0x388);
    if (*(longlong *)(param_1 + 0x388) == 0) {
      lVar8 = param_1 + 0x338;
    }
    *(byte *)(lVar8 + lVar10 * 0x28) = param_2;
    *(undefined1 *)(lVar8 + 1 + lVar10 * 0x28) = param_3;
    *(undefined8 *)(lVar8 + 8 + lVar10 * 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x10 + lVar10 * 0x28) = 0;
    *(undefined4 *)(lVar8 + 0x18 + lVar10 * 0x28) = 0;
    *(undefined4 *)(lVar8 + 0x20 + lVar10 * 0x28) = 0xffffffff;
    *(undefined4 *)(lVar8 + 0x24 + lVar10 * 0x28) = 0;
  }
  *(undefined1 *)((longlong)plVar9 + 0x2a) = 0;
LAB_14070a8e5:
  if ((longlong *)(param_1 + 0x2d0) != (longlong *)(param_1 + 0x330)) {
    plVar9 = (longlong *)(param_1 + 0x2f0);
    do {
      if ((plVar9[-3] == 0) || (*plVar9 == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return;
      }
      plVar2 = plVar9 + 2;
      plVar9 = plVar9 + 6;
    } while (plVar2 != (longlong *)(param_1 + 0x330));
  }
  FUN_1406d8ac0(param_1 + 0x4e8);
  return;
}



// FUNCTION 14070a950 FUN_14070a950 body=59 status=ok
// SIG undefined FUN_14070a950(void)

void FUN_14070a950(longlong param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  do {
    FUN_14070a590(param_1,uVar1 & 0xff,4);
    uVar1 = uVar1 - 1;
  } while (-1 < (int)uVar1);
  FUN_1406d8ac0(param_1 + 0x4e8);
  return;
}



// FUNCTION 14070a990 FUN_14070a990 body=134 status=ok
// SIG undefined FUN_14070a990(void)

void FUN_14070a990(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  if (*(int *)(lVar2 + 0x88) != 7) {
    plVar1 = (longlong *)FWeakObjectPtr::Get(lVar2 + 0x78);
    if (plVar1 != (longlong *)0x0) {
      FUN_142cf3f20(plVar1,0);
      (**(code **)(*plVar1 + 0x5a0))(plVar1,*(undefined4 *)(lVar2 + 0x88),0);
    }
    *(undefined4 *)(lVar2 + 0x88) = 7;
  }
  lVar2 = FWeakObjectPtr::Get(lVar2 + 0x70);
  if (lVar2 != 0) {
    FUN_140732b00(lVar2);
    return;
  }
  return;
}



// FUNCTION 14070aa20 FUN_14070aa20 body=92 status=ok
// SIG undefined FUN_14070aa20(void)

void FUN_14070aa20(longlong param_1,longlong *param_2)

{
  FUN_142cbcc90(param_1 + 0x298,*(undefined8 *)(*param_2 + 0x568));
  FUN_142cbcc90(param_1 + 0x288,*(undefined8 *)(*param_2 + 0x568));
  FUN_142cbcc90(param_1 + 0x278,*(undefined8 *)(*param_2 + 0x568));
  return;
}



// FUNCTION 14070aa80 FUN_14070aa80 body=92 status=ok
// SIG undefined FUN_14070aa80(void)

void FUN_14070aa80(longlong param_1,longlong *param_2)

{
  FUN_142cbcc90(param_1 + 0x150,*(undefined8 *)(*param_2 + 0x568));
  FUN_142cbcc90(param_1 + 0x160,*(undefined8 *)(*param_2 + 0x568));
  FUN_142cbcc90(param_1 + 0x170,*(undefined8 *)(*param_2 + 0x568));
  return;
}



// FUNCTION 14070aae0 FUN_14070aae0 body=84 status=ok
// SIG undefined FUN_14070aae0(void)

void FUN_14070aae0(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x58);
    *param_2 = 0xffffffff;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    *(undefined8 *)(param_2 + 0x12) = 0;
    param_2[0x14] = 0;
  }
  return;
}



// FUNCTION 14070ab40 FUN_14070ab40 body=122 status=ok
// SIG undefined FUN_14070ab40(void)

void FUN_14070ab40(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x138);
    *param_2 = 0xffffffff;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    *(undefined8 *)(param_2 + 0x12) = 0;
    *(undefined8 *)(param_2 + 0x14) = 0;
    FUN_142c62180(param_2 + 0x16);
    param_2[0x4c] = 0;
    param_2[0x4b] = 0xffffffff;
  }
  return;
}



// FUNCTION 14070abc0 FUN_14070abc0 body=83 status=ok
// SIG undefined FUN_14070abc0(void)

void FUN_14070abc0(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x50);
    *param_2 = 0xffffffff;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    param_2[0x12] = 0;
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  return;
}



// FUNCTION 14070ac20 FUN_14070ac20 body=205 status=ok
// SIG undefined FUN_14070ac20(void)

void FUN_14070ac20(longlong param_1,undefined4 *param_2)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    *param_2 = 0xffffffff;
    param_2[1] = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    FUN_14247fd00(param_2 + 0x12);
    param_2[0x14] = 0xffffffff;
    param_2[0x15] = 0;
    FUN_142d2e660(param_2 + 0x18);
    FUN_142193af0(param_2 + 0x12);
    param_2[0x14] = 0xffffffff;
    param_2[0x15] = 0;
    param_2[0xa6] = 0xffffffff;
    param_2[0xa7] = 0;
    param_2[0xa8] = 0xffffffff;
    param_2[0xa9] = 0;
    FWeakObjectPtr::operator=(&local_res8,0);
    param_2[0xa6] = local_res8;
    param_2[0xa7] = local_resc;
  }
  return;
}



// FUNCTION 14070acf0 FUN_14070acf0 body=61 status=ok
// SIG undefined FUN_14070acf0(void)

void FUN_14070acf0(longlong param_1,void *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x70);
    FUN_1406d4f00(param_2);
    *(undefined4 *)((longlong)param_2 + 100) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14070ad30 FUN_14070ad30 body=341 status=ok
// SIG undefined FUN_14070ad30(void)

void FUN_14070ad30(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0xe0);
    *param_2 = 0xffffffff;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    param_2[0x13] = 0;
    param_2[0x12] = 0xffffffff;
    param_2[0x15] = 0;
    param_2[0x14] = 0xffffffff;
    *(undefined8 *)(param_2 + 0x19) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x1b) = 0xffffffffffffffff;
    param_2[0x1e] = 0;
    param_2[0x1d] = 0xffffffff;
    *(undefined8 *)(param_2 + 0x23) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x25) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x20) = DAT_14622e710;
    param_2[0x22] = DAT_14622e718;
    *(undefined8 *)(param_2 + 0x23) = 0xffffffffffffffff;
    *(undefined1 *)(param_2 + 0x1f) = 0;
    *(undefined8 *)(param_2 + 0x25) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x2b) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x2d) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x28) = DAT_14622e710;
    param_2[0x2a] = DAT_14622e718;
    *(undefined8 *)(param_2 + 0x2b) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x2d) = 0xffffffffffffffff;
    *(undefined1 *)(param_2 + 0x27) = 0;
    FUN_14246da30(param_2 + 0x33);
    return;
  }
  return;
}



// FUNCTION 14070ae90 FUN_14070ae90 body=101 status=ok
// SIG undefined FUN_14070ae90(void)

void FUN_14070ae90(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x128);
    *param_2 = 0xffffffff;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    *(undefined8 *)(param_2 + 0x12) = 0;
    *(undefined8 *)(param_2 + 0x14) = 0;
    FUN_142c62180(param_2 + 0x16);
    return;
  }
  return;
}



// FUNCTION 14070af00 FUN_14070af00 body=77 status=ok
// SIG undefined FUN_14070af00(void)

void FUN_14070af00(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x58);
    *param_2 = 0xffffffff;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
  }
  return;
}



// FUNCTION 14070af50 FUN_14070af50 body=190 status=ok
// SIG undefined FUN_14070af50(void)

void FUN_14070af50(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x2c0);
    *param_2 = 0xffffffff;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    param_2[0x12] = 0xffffffff;
    param_2[0x13] = 0;
    param_2[0x14] = 0xffffffff;
    param_2[0x15] = 0;
    param_2[0x16] = 0xffffffff;
    param_2[0x17] = 0;
    param_2[0x18] = 0xffffffff;
    param_2[0x19] = 0;
    *(undefined8 *)(param_2 + 0x4a) = 0;
    *(undefined8 *)(param_2 + 0x4c) = 0;
    FUN_14074c870(param_2 + 0x4e);
    FUN_14074c870(param_2 + 0x6a);
    FUN_14074c870(param_2 + 0x86);
    FUN_14246da30(param_2 + 0xaa);
    return;
  }
  return;
}



// FUNCTION 14070b010 FUN_14070b010 body=106 status=ok
// SIG undefined FUN_14070b010(void)

void FUN_14070b010(longlong param_1,undefined4 *param_2)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    *param_2 = 0xffffffff;
    param_2[1] = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    param_2[0x12] = 0xffffffff;
    param_2[0x13] = 0;
    FWeakObjectPtr::operator=(&local_res8,0);
    param_2[0x12] = local_res8;
    param_2[0x13] = local_resc;
  }
  return;
}



// FUNCTION 14070b080 FUN_14070b080 body=61 status=ok
// SIG undefined FUN_14070b080(void)

void FUN_14070b080(longlong param_1,void *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x68);
    FUN_1406d4f00(param_2);
    *(undefined4 *)((longlong)param_2 + 0x60) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 100) = 0;
  }
  return;
}



// FUNCTION 14070b0c0 FUN_14070b0c0 body=54 status=ok
// SIG undefined FUN_14070b0c0(void)

void FUN_14070b0c0(longlong param_1,void *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x68);
    FUN_1406d4f00(param_2);
    *(undefined4 *)((longlong)param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14070b100 FUN_14070b100 body=63 status=ok
// SIG undefined FUN_14070b100(void)

void FUN_14070b100(longlong param_1,void *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x130);
    FUN_1406d4f00(param_2);
    FUN_142f89330((longlong)param_2 + 0x60);
    return;
  }
  return;
}



// FUNCTION 14070b140 FUN_14070b140 body=63 status=ok
// SIG undefined FUN_14070b140(void)

void FUN_14070b140(longlong param_1,void *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x150);
    FUN_1406d4f00(param_2);
    FUN_142f89330((longlong)param_2 + 0x70);
    return;
  }
  return;
}



// FUNCTION 14070b1d0 FUN_14070b1d0 body=167 status=ok
// SIG undefined FUN_14070b1d0(void)

void FUN_14070b1d0(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0xd8);
    *param_2 = 0xffffffff;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    param_2[0x12] = 0xffffffff;
    param_2[0x13] = 0;
    FUN_14074c8d0(param_2 + 0x14);
    *(undefined8 *)(param_2 + 0x2f) = 0;
    param_2[0x2e] = 0xffffffff;
    param_2[0x31] = 0;
    param_2[0x33] = 0;
    param_2[0x32] = 0xffffffff;
    param_2[0x35] = 0;
    param_2[0x34] = 0xffffffff;
  }
  return;
}



// FUNCTION 14070b280 FUN_14070b280 body=63 status=ok
// SIG undefined FUN_14070b280(void)

void FUN_14070b280(longlong param_1,void *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x150);
    FUN_1406d4f00(param_2);
    FUN_142f89330((longlong)param_2 + 0x68);
    return;
  }
  return;
}



// FUNCTION 14070b2c0 FUN_14070b2c0 body=85 status=ok
// SIG undefined FUN_14070b2c0(void)

void FUN_14070b2c0(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x58);
    *param_2 = 0xffffffff;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    *(undefined8 *)(param_2 + 0x12) = 0;
    *(undefined8 *)(param_2 + 0x14) = 0;
  }
  return;
}



// FUNCTION 14070b320 FUN_14070b320 body=91 status=ok
// SIG undefined FUN_14070b320(void)

void FUN_14070b320(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    _guard_xfg_dispatch_icall_nop(param_2,0,0x58);
    *param_2 = 0xffffffff;
    param_2[4] = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined2 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined1 *)((longlong)param_2 + 0x42) = 1;
    param_2[0xd] = 0xff7fffff;
    *(undefined8 *)((longlong)param_2 + 0x4a) = 0xffffffffffffffff;
    *(undefined2 *)((longlong)param_2 + 0x52) = 0xffff;
  }
  return;
}



// FUNCTION 14070b380 FUN_14070b380 body=66 status=ok
// SIG undefined FUN_14070b380(void)

void FUN_14070b380(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_1 + 0x138);
  *(undefined1 *)(param_1 + 0x102) = *(undefined1 *)(param_1 + 0x13a);
  *(undefined1 *)(param_1 + 0x104) = *(undefined1 *)(param_1 + 0x13c);
  *(undefined1 *)(param_1 + 0x106) = *(undefined1 *)(param_1 + 0x13e);
  *(undefined1 *)(param_1 + 0x101) = *(undefined1 *)(param_1 + 0x139);
  return;
}



// FUNCTION 14070b3d0 FUN_14070b3d0 body=27 status=ok
// SIG undefined FUN_14070b3d0(void)

void FUN_14070b3d0(longlong param_1)

{
  if (*(char *)(param_1 + 0x135) != '\0') {
    *(undefined1 *)(param_1 + 0x135) = 0;
    *(undefined4 *)(param_1 + 0x108) = 1;
  }
  return;
}



// FUNCTION 14070b3f0 FUN_14070b3f0 body=129 status=ok
// SIG undefined FUN_14070b3f0(void)

undefined8 FUN_14070b3f0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 local_18 [16];
  
  cVar2 = FUN_1407c3030(param_3);
  if (cVar2 == '\0') {
    lVar1 = *(longlong *)(*param_2 + 0x628);
    if (lVar1 != 0) {
      cVar2 = FUN_142fa8480(lVar1);
      if (cVar2 == '\0') {
        FUN_142fa2d40(lVar1 + 0x6e8,local_18);
        cVar2 = UAIBlueprintHelperLibrary::IsValidAILocation(param_3 + 0x50);
        if (cVar2 != '\0') {
          cVar2 = FUN_142c738d0(param_3 + 0x50,local_18);
          if (cVar2 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14070b480 FUN_14070b480 body=34 status=ok
// SIG undefined FUN_14070b480(void)

void FUN_14070b480(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1406e7b30(param_1,param_2,DAT_146858a08);
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  return;
}



// FUNCTION 14070b4b0 FUN_14070b4b0 body=594 status=ok
// SIG undefined FUN_14070b4b0(void)

longlong FUN_14070b4b0(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  void *_Src;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong local_res8;
  
  (**(code **)(*param_1 + 0x3d0))(param_1,&local_res8);
  if (local_res8 != 0) {
    lVar4 = USafeZone::GetPrivateStaticClass();
    for (lVar5 = local_res8; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar4) {
        lVar4 = USafeZone::GetPrivateStaticClass();
        lVar5 = local_res8;
        goto joined_r0x00014070b517;
      }
    }
  }
  return 0;
joined_r0x00014070b517:
  if (lVar5 == 0) goto LAB_14070b52e;
  if (lVar5 == lVar4) goto LAB_14070b530;
  lVar5 = *(longlong *)(lVar5 + 0x30);
  goto joined_r0x00014070b517;
LAB_14070b52e:
  local_res8 = 0;
LAB_14070b530:
  lVar5 = FUN_1406e7b30(param_1,local_res8,param_2);
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x128) = 1;
    if ((param_3 < 0) || ((int)param_1[0x2a] <= param_3)) {
      plVar1 = param_1 + 0x29;
      plVar2 = (longlong *)*plVar1;
      iVar8 = (int)param_1[0x2a];
      for (plVar7 = plVar2; plVar7 != plVar2 + iVar8; plVar7 = plVar7 + 1) {
        if (*plVar7 == lVar5) {
          if ((int)((longlong)plVar7 - (longlong)plVar2 >> 3) != -1) {
            return lVar5;
          }
          break;
        }
      }
      *(int *)(param_1 + 0x2a) = iVar8 + 1;
      if (*(int *)((longlong)param_1 + 0x154) < iVar8 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      *(longlong *)((longlong)iVar8 * 8 + *plVar1) = lVar5;
    }
    else {
      plVar1 = param_1 + 0x29;
      plVar2 = (longlong *)*plVar1;
      iVar8 = (int)param_1[0x2a];
      for (plVar7 = plVar2; plVar7 != plVar2 + iVar8; plVar7 = plVar7 + 1) {
        if (*plVar7 == lVar5) {
          iVar6 = (int)((longlong)plVar7 - (longlong)plVar2 >> 3);
          goto LAB_14070b5a3;
        }
      }
      iVar6 = -1;
LAB_14070b5a3:
      if (iVar6 != param_3) {
        if (plVar2[param_3] == 0) {
          plVar2[param_3] = lVar5;
          if ((-1 < iVar6) && (iVar6 < (int)param_1[0x2a])) {
            iVar8 = (int)param_1[0x2a];
            iVar3 = (iVar8 - iVar6) + -1;
            if (iVar3 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar1 + (longlong)iVar6 * 8),
                         (void *)(*plVar1 + (longlong)(iVar6 + 1) * 8),(longlong)iVar3 << 3);
              iVar8 = (int)param_1[0x2a];
            }
            *(int *)(param_1 + 0x2a) = iVar8 + -1;
          }
        }
        else {
          if ((-1 < iVar6) && (iVar6 < (int)param_1[0x2a])) {
            iVar3 = (iVar8 - iVar6) + -1;
            if (iVar3 != 0) {
              _guard_xfg_dispatch_icall_nop
                        (plVar2 + iVar6,plVar2 + (iVar6 + 1),(longlong)iVar3 << 3);
              iVar8 = (int)param_1[0x2a];
            }
            iVar8 = iVar8 + -1;
            if (iVar6 < param_3) {
              param_3 = param_3 + -1;
            }
          }
          *(int *)(param_1 + 0x2a) = iVar8 + 1;
          if (*(int *)((longlong)param_1 + 0x154) < iVar8 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
          }
          _Src = (void *)(*plVar1 + (longlong)param_3 * 8);
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)_Src + 8),_Src,(longlong)(iVar8 - param_3) << 3);
          *(longlong *)((longlong)param_3 * 8 + *plVar1) = lVar5;
        }
      }
    }
  }
  return lVar5;
}



// FUNCTION 14070b710 FUN_14070b710 body=85 status=ok
// SIG undefined FUN_14070b710(void)

longlong FUN_14070b710(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_141718120();
  if (lVar2 != 0) {
    lVar3 = USoundBase::GetPrivateStaticClass();
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
      *(undefined1 *)(lVar2 + 0xf0) = 3;
    }
  }
  return lVar2;
}



// FUNCTION 14070b770 FUN_14070b770 body=106 status=ok
// SIG undefined FUN_14070b770(void)

void FUN_14070b770(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_142c63c50(param_2 + 0x58);
    plVar3 = *(longlong **)(param_2 + 0x50);
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
    *(undefined1 *)(param_2 + 0x42) = 0;
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
    return;
  }
  return;
}



// FUNCTION 14070b7e0 FUN_14070b7e0 body=74 status=ok
// SIG undefined FUN_14070b7e0(void)

void FUN_14070b7e0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    if (*(longlong *)(param_2 + 0x128) != 0) {
      FMemory::Free();
    }
    *(undefined1 *)(param_2 + 0x42) = 0;
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2 + 8);
    return;
  }
  return;
}



// FUNCTION 14070b830 FUN_14070b830 body=47 status=ok
// SIG undefined FUN_14070b830(void)

void FUN_14070b830(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_142f8b770(param_2 + 0x60);
    FUN_1406d8bf0(param_2);
    return;
  }
  return;
}



// FUNCTION 14070b860 FUN_14070b860 body=47 status=ok
// SIG undefined FUN_14070b860(void)

void FUN_14070b860(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_142f8b770(param_2 + 0x70);
    FUN_1406d8bf0(param_2);
    return;
  }
  return;
}



// FUNCTION 14070b890 FUN_14070b890 body=47 status=ok
// SIG undefined FUN_14070b890(void)

void FUN_14070b890(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_142f8b770(param_2 + 0x68);
    FUN_1406d8bf0(param_2);
    return;
  }
  return;
}



// FUNCTION 14070b8c0 FUN_14070b8c0 body=650 status=ok
// SIG undefined FUN_14070b8c0(void)

void FUN_14070b8c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  char local_res8 [8];
  float local_res10 [2];
  undefined1 local_res18 [8];
  longlong *local_res20;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_60;
  undefined1 local_58 [32];
  
  lVar6 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  *(undefined2 *)(lVar6 + 0x4c) = 0x101;
  if ((*(char *)(param_1 + 0x145) == '\0') && (*(char *)(param_1 + 0x144) == '\0')) {
    return;
  }
  plVar1 = *(longlong **)(*param_2 + 0x488);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar4 = (**(code **)(*plVar1 + 0x148))(plVar1);
  if (lVar4 == 0) {
    return;
  }
  local_e8 = (float)DAT_14622e710;
  local_e0 = DAT_14622e718;
  local_e4 = DAT_14622e710._4_4_;
  if (*(longlong *)(*param_2 + 0x488) == 0) {
    return;
  }
  puVar5 = (undefined8 *)FUN_142f9e160(&local_d8);
  local_b8 = *puVar5;
  local_b0 = *(undefined4 *)(puVar5 + 1);
  cVar2 = FUN_142cc45e0(param_1 + 0x108,*(undefined8 *)(*param_2 + 0x568),&local_e8,&local_res20,
                        local_res8);
  if (cVar2 == '\0') {
    return;
  }
  if (local_res20 != (longlong *)0x0) {
    (**(code **)(*local_res20 + 0x578))(local_res20,local_res18,local_res10);
    local_e0 = local_e0 - local_res10[0];
  }
  plVar7 = (longlong *)0x0;
  if (local_res8[0] != '\0') {
    plVar7 = local_res20;
  }
  FUN_1406d5050(&local_a8);
  local_a8 = *(undefined8 *)(*param_2 + 0x488);
  puVar5 = (undefined8 *)FUN_142f9e0e0(&local_d8,plVar1,&local_b8);
  local_a0 = *puVar5;
  local_98 = *(undefined4 *)(puVar5 + 1);
  FUN_140706310(param_1,&local_c8,param_2,plVar7,&local_b8,&local_e8);
  if (plVar7 == (longlong *)0x0) {
    local_d8 = local_e8 + local_c8;
    local_d4 = local_e4 + local_c4;
    local_d0 = local_c0 + local_e0;
    FUN_1406f6550(&local_a8,&local_d8);
  }
  else {
    FUN_1406f66c0(&local_a8,plVar7,&local_c8);
  }
  local_60 = 0;
  uVar8 = FUN_1428cc5b0(lVar4);
  FUN_1406f6820(&local_a8,uVar8,*(undefined4 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x13c));
  FUN_1406dd6c0(&local_a8,local_58);
  if (*(char *)(param_1 + 0x144) != '\0') {
    cVar2 = FUN_1406fd510(&local_a8,local_58);
    uVar3 = 0;
    if (cVar2 == '\0') goto LAB_14070bb00;
  }
  uVar3 = 1;
LAB_14070bb00:
  *(undefined1 *)(lVar6 + 0x4c) = uVar3;
  if ((*(char *)(param_1 + 0x145) == '\0') ||
     (cVar2 = FUN_1406fd380(&local_a8,local_58), cVar2 == '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)(lVar6 + 0x4d) = uVar3;
  return;
}



// FUNCTION 14070bb50 Empty body=461 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,FBlueprintCookedComponentInstancingData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_14070bc21;
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
LAB_14070bc21:
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
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        FMemory::Free();
      }
      TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>::
      ~TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>(lVar5 + 0x38);
      if (*(longlong *)(lVar5 + 0x10) != 0) {
        FMemory::Free();
      }
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



// FUNCTION 14070bd20 FUN_14070bd20 body=424 status=ok
// SIG undefined FUN_14070bd20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14070bd20(longlong param_1,longlong *param_2,float *param_3,char param_4)

{
  char cVar1;
  float extraout_XMM0_Da;
  float fVar2;
  float fVar3;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  float local_68;
  float local_64;
  float local_60;
  undefined8 local_58;
  float local_50;
  float local_4c;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  (**(code **)(*(longlong *)(*param_2 + 0x458) + 0x18))((longlong *)(*param_2 + 0x458),&local_68);
  if (param_4 == '\0') {
    fVar2 = SQRT((param_3[1] - local_64) * (param_3[1] - local_64) +
                 (*param_3 - local_68) * (*param_3 - local_68) +
                 (param_3[2] - local_60) * (param_3[2] - local_60));
  }
  else if (param_4 == '\x01') {
    fVar2 = SQRT((param_3[1] - local_64) * (param_3[1] - local_64) +
                 (*param_3 - local_68) * (*param_3 - local_68));
  }
  else if (param_4 == '\x02') {
    fVar2 = ABS(param_3[2] - local_60);
  }
  else if (param_4 == '\x03') {
    fVar2 = param_3[2] - local_60;
  }
  else {
    fVar2 = 3.4028235e+38;
  }
  local_58 = *(undefined8 *)(*param_2 + 0x568);
  local_78 = &local_58;
  FUN_142df1760(param_1,&local_50,*param_2,0);
  if (local_48 == '\x01') {
    fVar3 = local_50 - local_4c;
    local_4c = local_4c + local_50;
  }
  else {
    if (param_4 == '\x03') {
      fVar3 = -3.4028235e+38;
    }
    else {
      fVar3 = 0.0;
    }
    FUN_142cc4350(&local_50,0);
    local_4c = extraout_XMM0_Da;
  }
  if ((fVar2 < fVar3) || (local_4c < fVar2)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  return cVar1 != *(char *)(param_1 + 0x80);
}



// FUNCTION 14070bed0 FUN_14070bed0 body=41 status=ok
// SIG undefined FUN_14070bed0(void)

void FUN_14070bed0(longlong param_1)

{
  UGameplayTask::EndTask();
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_14071caf0(*(longlong *)(param_1 + 0x68),4);
    return;
  }
  return;
}



// FUNCTION 14070bf00 FUN_14070bf00 body=190 status=ok
// SIG undefined FUN_14070bf00(void)

ulonglong FUN_14070bf00(longlong param_1,ulonglong *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 local_res10 [8];
  undefined8 local_res18 [2];
  
  uVar3 = *param_2;
  lVar2 = *(longlong *)(uVar3 + 0x568);
  if (lVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xd8) + param_2[1];
    *(ulonglong *)(lVar4 + 0x54) = CONCAT44(DAT_14622e710._4_4_,(float)DAT_14622e710);
    *(float *)(lVar4 + 0x5c) = DAT_14622e718;
    local_res10[0] = 0;
    local_res18[0] = 0;
    FUN_142cc45e0(param_1 + 0x100,lVar2,lVar4 + 0x54,local_res18,local_res10);
    uVar1 = *(uint *)(lVar4 + 0x5c);
    uVar3 = (ulonglong)uVar1;
    *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(lVar4 + 0x54);
    *(uint *)(lVar4 + 0x68) = uVar1;
    if ((((float)DAT_14622e710 != *(float *)(lVar4 + 0x60)) ||
        (DAT_14622e710._4_4_ != *(float *)(lVar4 + 100))) ||
       (DAT_14622e718 != *(float *)(lVar4 + 0x68))) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 14070bfc0 FUN_14070bfc0 body=218 status=ok
// SIG undefined FUN_14070bfc0(void)

uint FUN_14070bfc0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    lVar3 = (ulonglong)*(byte *)(param_1 + 0x330) + 0xf;
    if ((((*(longlong *)(param_1 + 8 + lVar3 * 0x30) != 0) &&
         (*(longlong *)(param_1 + 0x20 + lVar3 * 0x30) != 0)) &&
        (*(ulonglong *)(param_2 + 0xd8) < *(ulonglong *)(param_1 + 0x18 + lVar3 * 0x30))) &&
       (cVar2 = UObjectBaseUtility::IsIn(param_2), cVar2 != '\0')) {
      return (uint)*(byte *)(param_1 + 0x330);
    }
    uVar4 = 1;
    do {
      if (((uVar4 != *(byte *)(param_1 + 0x330)) &&
          (lVar3 = ((longlong)(int)uVar4 + 0xf) * 0x30 + param_1, *(longlong *)(lVar3 + 8) != 0)) &&
         ((*(longlong *)(lVar3 + 0x20) != 0 &&
          ((*(ulonglong *)(param_2 + 0xd8) < *(ulonglong *)(lVar3 + 0x18) &&
           (cVar2 = UObjectBaseUtility::IsIn(param_2), cVar2 != '\0')))))) {
        return uVar4 & 0xff;
      }
      bVar1 = 0 < (int)uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar1);
  }
  return 2;
}



// FUNCTION 14070c0a0 FUN_14070c0a0 body=1186 status=ok
// SIG undefined FUN_14070c0a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14070c0a0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  float fVar19;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  longlong local_2e0 [4];
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  longlong *local_2a0;
  undefined4 *local_298;
  undefined8 local_290;
  undefined4 local_288;
  ulonglong local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined1 local_258 [8];
  undefined4 local_250;
  undefined1 local_248 [16];
  undefined1 local_238 [88];
  float local_1e0;
  undefined1 local_1d8 [160];
  undefined1 *local_138;
  undefined8 local_130;
  undefined8 local_128 [20];
  undefined8 *local_88;
  undefined8 local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  lVar16 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  *(undefined4 *)(lVar16 + 0xbc) = 0;
  *(undefined4 *)(lVar16 + 0xb8) = 0xffffffff;
  *(undefined8 *)(lVar16 + 0xc0) = 0;
  local_2e8 = lVar16 + 0xd0;
  local_298 = param_3;
  uVar5 = FWeakObjectPtr::IsValid(local_2e8);
  if ((((char)uVar5 == '\0') ||
      (*(float *)(param_2 + 3) <= *(float *)(lVar16 + 0xb0) &&
       *(float *)(lVar16 + 0xb0) != *(float *)(param_2 + 3))) ||
     (uVar6 = FUN_14075eda0(lVar16 + 0x50), uVar5 = uVar6, *(int *)(uVar6 + 0x18) == 0)) {
LAB_14070c516:
    return uVar5 & 0xffffffffffffff00;
  }
  lVar7 = FWeakObjectPtr::Get(lVar16 + 0x48);
  uVar5 = 0;
  if (lVar7 == 0) goto LAB_14070c516;
  local_2e0[0] = 0;
  local_2e0[1] = 0;
  local_2e0[2] = 0;
  local_2e0[3] = 0;
  uVar8 = FWeakObjectPtr::Get(lVar16 + 0x48);
  lVar9 = FUN_142da89b0(uVar8);
  if (lVar9 != 0) {
    if (*(char *)(param_1 + 0x121) != '\0') {
      FUN_1421d3220(local_2e0,lVar9 + 0x30);
    }
    if (*(char *)(param_1 + 0x120) != '\0') {
      FUN_1421d3220(local_2e0,lVar9 + 0x38);
    }
  }
  uVar8 = FWeakObjectPtr::Get(lVar16 + 0x50);
  uVar10 = FWeakObjectPtr::Get(lVar16 + 0x58);
  uVar11 = (**(code **)(*(longlong *)(lVar7 + 0x458) + 0x18))((longlong *)(lVar7 + 0x458),local_258)
  ;
  FUN_140756220(local_238,uVar8,uVar10,uVar11);
  fVar19 = *(float *)(lVar16 + 0xa4) + *(float *)(lVar16 + 0xa0);
  if (*(float *)(lVar16 + 0xa8) <= fVar19) {
    fVar19 = *(float *)(lVar16 + 0xa8);
  }
  local_138 = (undefined1 *)0x0;
  local_130 = 0;
  plVar17 = *(longlong **)(uVar6 + 0x10);
  plVar18 = plVar17 + (longlong)*(int *)(uVar6 + 0x18) * 2;
  local_2a0 = plVar18;
  if (plVar17 != plVar18) {
    do {
      uVar5 = 0;
      if (((*plVar17 != 0) && (local_1e0 < *(float *)(plVar17 + 1))) &&
         (*(float *)(plVar17 + 1) < fVar19)) {
        lVar16 = *(longlong *)(*plVar17 + 0x168);
        if (lVar16 == 0) {
          local_288 = DAT_1468b5d98;
          puVar12 = &local_290;
          local_290 = _DAT_1468b5d90;
        }
        else {
          puVar12 = (undefined8 *)&local_2c0;
          local_2c0 = *(undefined4 *)(lVar16 + 0x220);
          local_2b8 = *(undefined4 *)(lVar16 + 0x228);
          uStack_2bc = *(undefined4 *)(lVar16 + 0x224);
        }
        local_268 = *puVar12;
        local_260 = *(undefined4 *)(puVar12 + 1);
        lVar16 = *(longlong *)(*param_2 + 0x628);
        if (lVar16 != 0) {
          local_278 = (ulonglong)*(uint *)(lVar16 + 0x6e8);
          local_250 = 0x42c80000;
          local_270 = 0x42c80000;
          cVar2 = FUN_142f95a50(lVar16 + 0x9e8,&local_268,local_248,&local_278);
          if (cVar2 != '\0') {
            local_88 = (undefined8 *)0x0;
            local_80 = 0;
            uVar8 = FWeakObjectPtr::Get(local_2e8);
            FUN_14075fc20(uVar8,*plVar17,local_2e0,local_128);
            puVar12 = local_128;
            if (local_88 != (undefined8 *)0x0) {
              puVar12 = local_88;
            }
            uVar6 = (longlong)(int)local_80 & 0x1fffffffffffffff;
            if (puVar12 + (int)local_80 < puVar12) {
              uVar6 = uVar5;
            }
            if (uVar6 != 0) {
              do {
                FWeakObjectPtr::operator=(&local_2b0,*plVar17);
                uVar1 = local_130;
                lVar16 = (longlong)(int)local_130;
                local_2a8 = *puVar12;
                iVar3 = (int)local_130 + 1;
                local_130 = CONCAT44(local_130._4_4_,iVar3);
                if (local_130._4_4_ < iVar3) {
                  FUN_140717f70(local_1d8,uVar1 & 0xffffffff);
                }
                puVar14 = local_1d8;
                if (local_138 != (undefined1 *)0x0) {
                  puVar14 = local_138;
                }
                puVar12 = puVar12 + 1;
                uVar5 = uVar5 + 1;
                puVar15 = (undefined4 *)(puVar14 + lVar16 * 0x10);
                *puVar15 = local_2b0;
                puVar15[1] = local_2ac;
                *(undefined8 *)(puVar15 + 2) = local_2a8;
                plVar18 = local_2a0;
              } while (uVar5 != uVar6);
            }
            if (local_88 != (undefined8 *)0x0) {
              FMemory::Free();
            }
          }
        }
      }
      plVar17 = plVar17 + 2;
    } while (plVar17 != plVar18);
    iVar3 = (int)local_130;
    if (0 < (int)local_130) {
      iVar4 = rand();
      iVar13 = iVar3 + -1;
      uVar5 = 1;
      iVar3 = (int)((float)iVar4 * 3.051851e-05 * (float)iVar3);
      if (iVar3 <= iVar13) {
        iVar13 = iVar3;
      }
      puVar14 = local_1d8;
      if (local_138 != (undefined1 *)0x0) {
        puVar14 = local_138;
      }
      puVar15 = (undefined4 *)(puVar14 + (longlong)iVar13 * 0x10);
      *local_298 = *puVar15;
      local_298[1] = puVar15[1];
      *(undefined8 *)(local_298 + 2) = *(undefined8 *)(puVar15 + 2);
      goto LAB_14070c4cf;
    }
  }
  uVar5 = 0;
LAB_14070c4cf:
  if (local_138 != (undefined1 *)0x0) {
    FMemory::Free(local_138);
  }
  if (local_2e0[2] != 0) {
    FMemory::Free();
  }
  if (local_2e0[0] == 0) {
    return uVar5;
  }
  FMemory::Free();
  return uVar5;
}



// FUNCTION 14070c550 FUN_14070c550 body=182 status=ok
// SIG undefined FUN_14070c550(void)

longlong FUN_14070c550(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_res10 [3];
  
  if (*(longlong *)(*param_2 + 0x568) != 0) {
    local_res10[0] = 0;
    cVar4 = FUN_142cc4b40(param_1 + 0x240,*(longlong *)(*param_2 + 0x568),local_res10);
    lVar8 = local_res10[0];
    if ((cVar4 != '\0') && (local_res10[0] != 0)) {
      lVar5 = UGNewsMenuItem::GetPrivateStaticClass();
      lVar3 = local_res10[0];
      lVar1 = *(longlong *)(lVar8 + 0x10);
      if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return lVar8;
      }
      if (local_res10[0] != 0) {
        uVar6 = FUN_142fc5d60();
        plVar7 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar6);
        if (plVar7 != (longlong *)0x0) {
          lVar8 = (**(code **)(*plVar7 + 0x20))(plVar7);
          return lVar8;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14070c610 FUN_14070c610 body=161 status=ok
// SIG undefined FUN_14070c610(void)

void FUN_14070c610(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar1 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(lVar1 + 0x58) = local_res8;
  *(undefined4 *)(lVar1 + 0x5c) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(lVar1 + 0x50) = local_res8;
  *(undefined4 *)(lVar1 + 0x54) = local_resc;
  *(undefined4 *)(lVar1 + 0x130) = 0;
  if (*(int *)(lVar1 + 0x134) != 0) {
    FUN_140718100(lVar1 + 0x68,0);
  }
  *(undefined4 *)(lVar1 + 0x210) = 0xffffffff;
  FUN_142cbcc90(param_1 + 0x110,*(undefined8 *)(*param_2 + 0x568));
  return;
}



// FUNCTION 14070c6c0 FUN_14070c6c0 body=335 status=ok
// SIG undefined FUN_14070c6c0(void)

void FUN_14070c6c0(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  
  puVar1 = (undefined1 *)(param_1 + 0x338);
  puVar8 = *(undefined1 **)(param_1 + 0x388);
  if (*(undefined1 **)(param_1 + 0x388) == (undefined1 *)0x0) {
    puVar8 = puVar1;
  }
  puVar2 = puVar8 + (longlong)*(int *)(param_1 + 0x390) * 0x28;
  if (puVar8 != puVar2) {
    plVar9 = (longlong *)(puVar8 + 8);
    do {
      if (*plVar9 != 0) {
        lVar5 = USafeZone::GetPrivateStaticClass();
        for (lVar3 = *plVar9; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
          if (lVar3 == lVar5) {
            uVar6 = FWeakObjectPtr::Get(plVar9 + 3);
            FUN_14071ba40(param_1,*puVar8,*plVar9,plVar9 + 1,uVar6);
            goto LAB_14070c741;
          }
        }
      }
      FUN_14070a590(param_1,*puVar8,*(undefined1 *)((longlong)plVar9 + -7));
LAB_14070c741:
      puVar8 = puVar8 + 0x28;
      plVar9 = plVar9 + 5;
    } while (puVar8 != puVar2);
  }
  iVar4 = *(int *)(param_1 + 0x394);
  puVar8 = *(undefined1 **)(param_1 + 0x388);
  iVar7 = *(int *)(param_1 + 0x390);
  if (-1 < iVar4) {
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = puVar1;
    }
    if (iVar7 != 0) {
      puVar8 = puVar8 + 0x10;
      do {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar8);
        puVar8 = puVar8 + 0x28;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(param_1 + 0x390) = 0;
    return;
  }
  if (puVar8 == (undefined1 *)0x0) {
    puVar8 = puVar1;
  }
  if (iVar7 != 0) {
    puVar8 = puVar8 + 0x10;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar8);
      puVar8 = puVar8 + 0x28;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar4 = *(int *)(param_1 + 0x394);
  }
  *(undefined4 *)(param_1 + 0x390) = 0;
  if (iVar4 == 0) {
    return;
  }
  FUN_140718080(puVar1,0);
  return;
}



// FUNCTION 14070c810 FUN_14070c810 body=782 status=ok
// SIG undefined FUN_14070c810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14070c810(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  ulonglong local_88 [4];
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar6 = 0;
  local_88[0] = uVar6;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    uVar2 = USafeZone::GetPrivateStaticClass();
    for (uVar4 = *(ulonglong *)(param_1 + 0x48);
        (local_88[0] = uVar6, uVar4 != 0 &&
        (local_88[0] = *(ulonglong *)(param_1 + 0x48), uVar4 != uVar2));
        uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
    }
  }
  local_88[1] = uVar6;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar2 = USafeZone::GetPrivateStaticClass();
    for (uVar4 = *(ulonglong *)(param_1 + 0x50);
        (local_88[1] = uVar6, uVar4 != 0 &&
        (local_88[1] = *(ulonglong *)(param_1 + 0x50), uVar4 != uVar2));
        uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
    }
  }
  local_88[2] = uVar6;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    uVar2 = USafeZone::GetPrivateStaticClass();
    for (uVar4 = *(ulonglong *)(param_1 + 0x58);
        (local_88[2] = uVar6, uVar4 != 0 &&
        (local_88[2] = *(ulonglong *)(param_1 + 0x58), uVar4 != uVar2));
        uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
    }
  }
  local_88[3] = uVar6;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    uVar2 = USafeZone::GetPrivateStaticClass();
    for (uVar4 = *(ulonglong *)(param_1 + 0x60);
        (local_88[3] = uVar6, uVar4 != 0 &&
        (local_88[3] = *(ulonglong *)(param_1 + 0x60), uVar4 != uVar2));
        uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
    }
  }
  local_68 = uVar6;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    uVar2 = USafeZone::GetPrivateStaticClass();
    for (uVar4 = *(ulonglong *)(param_1 + 0x68);
        (local_68 = uVar6, uVar4 != 0 && (local_68 = *(ulonglong *)(param_1 + 0x68), uVar4 != uVar2)
        ); uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
    }
  }
  local_60 = uVar6;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    uVar2 = USafeZone::GetPrivateStaticClass();
    for (uVar4 = *(ulonglong *)(param_1 + 0x70);
        (local_60 = uVar6, uVar4 != 0 && (local_60 = *(ulonglong *)(param_1 + 0x70), uVar4 != uVar2)
        ); uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
    }
  }
  local_58 = uVar6;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    uVar2 = USafeZone::GetPrivateStaticClass();
    for (uVar4 = *(ulonglong *)(param_1 + 0x78);
        (local_58 = uVar6, uVar4 != 0 && (local_58 = *(ulonglong *)(param_1 + 0x78), uVar4 != uVar2)
        ); uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
    }
  }
  local_50 = uVar6;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    uVar2 = USafeZone::GetPrivateStaticClass();
    for (uVar4 = *(ulonglong *)(param_1 + 0x80);
        (local_50 = uVar6, uVar4 != 0 && (local_50 = *(ulonglong *)(param_1 + 0x80), uVar4 != uVar2)
        ); uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
    }
  }
  local_48 = uVar6;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    uVar2 = USafeZone::GetPrivateStaticClass();
    for (uVar4 = *(ulonglong *)(param_1 + 0x88);
        (local_48 = uVar6, uVar4 != 0 && (local_48 = *(ulonglong *)(param_1 + 0x88), uVar4 != uVar2)
        ); uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
    }
  }
  local_40 = uVar6;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    uVar2 = USafeZone::GetPrivateStaticClass();
    for (uVar4 = *(ulonglong *)(param_1 + 0x90);
        (local_40 = uVar6, uVar4 != 0 && (local_40 = *(ulonglong *)(param_1 + 0x90), uVar4 != uVar2)
        ); uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
    }
  }
  local_38 = uVar6;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    uVar2 = USafeZone::GetPrivateStaticClass();
    for (uVar4 = *(ulonglong *)(param_1 + 0x98);
        (local_38 = uVar6, uVar4 != 0 && (local_38 = *(ulonglong *)(param_1 + 0x98), uVar4 != uVar2)
        ); uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
    }
  }
  local_30 = uVar6;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    uVar2 = USafeZone::GetPrivateStaticClass();
    for (uVar4 = *(ulonglong *)(param_1 + 0xa0);
        (local_30 = uVar6, uVar4 != 0 && (local_30 = *(ulonglong *)(param_1 + 0xa0), uVar4 != uVar2)
        ); uVar4 = *(ulonglong *)(uVar4 + 0x30)) {
    }
  }
  puVar5 = local_88;
  uVar4 = 0xc;
  if (local_28 < local_88) {
    uVar4 = uVar6;
  }
  do {
    plVar1 = (longlong *)*puVar5;
    if (plVar1 != (longlong *)0x0) {
      lVar3 = plVar1[0x1f];
      if (lVar3 == 0) {
        (**(code **)(*plVar1 + 0x368))(plVar1);
        lVar3 = plVar1[0x1f];
        if (lVar3 == 0) goto LAB_14070caea;
      }
      (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x10))(lVar3 + 0x28,param_2);
    }
LAB_14070caea:
    puVar5 = puVar5 + 1;
    uVar6 = uVar6 + 1;
    if (uVar6 == uVar4) {
      return;
    }
  } while( true );
}



// FUNCTION 14070cb20 FUN_14070cb20 body=92 status=ok
// SIG undefined FUN_14070cb20(void)

void FUN_14070cb20(longlong param_1,undefined8 param_2)

{
  longlong local_18 [2];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(char *)(param_1 + 200) != '\x01') {
    local_18[0] = 0;
    local_18[1] = 0;
    FUN_1406dc710(param_1 + -0x28,param_2,param_1 + 0x170,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14070cbb0 FUN_14070cbb0 body=410 status=ok
// SIG undefined FUN_14070cbb0(void)

void FUN_14070cbb0(longlong param_1,longlong *param_2)

{
  void *_Src;
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  int iVar8;
  undefined8 local_res8;
  void *local_48;
  ulonglong local_40;
  undefined8 local_38;
  void *local_30;
  int local_28;
  undefined4 local_24;
  
  FUN_1417557f0();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar3 = UObject::GetPrivateStaticClass();
    lVar5 = *(longlong *)(param_1 + 0x30);
    lVar7 = lVar5;
    if (lVar5 != 0) {
      while (lVar7 != lVar3) {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == 0) {
          return;
        }
      }
      if (lVar5 != 0) {
        if (lVar5 != 0) {
          lVar3 = UObject::GetPrivateStaticClass();
          lVar5 = *(longlong *)(param_1 + 0x30);
          for (lVar7 = lVar5; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
            if (lVar7 == lVar3) goto LAB_14070cc41;
          }
        }
        lVar5 = 0;
LAB_14070cc41:
        local_res8 = *(undefined8 *)(lVar5 + 0x18);
        FName::ToString(&local_res8,&local_38);
        FUN_1406f9010(&local_48,&local_38);
        puVar4 = (undefined8 *)FName::FName(&local_res8,L"DisplayName",1);
        _Src = local_48;
        local_30 = (void *)0x0;
        local_38 = *puVar4;
        iVar8 = (int)local_40;
        local_28 = iVar8;
        if (iVar8 == 0) {
          pvVar6 = (void *)0x0;
          local_24 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_30,local_40 & 0xffffffff,0);
          pvVar6 = local_30;
          _guard_xfg_dispatch_icall_nop(local_30,_Src,(longlong)iVar8 * 2);
        }
        iVar2 = local_28;
        uVar1 = local_38;
        iVar8 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar8 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar8 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_2,iVar8);
        }
        puVar4 = (undefined8 *)((longlong)iVar8 * 0x20 + *param_2);
        *puVar4 = uVar1;
        puVar4[1] = pvVar6;
        *(int *)(puVar4 + 2) = iVar2;
        *(undefined4 *)((longlong)puVar4 + 0x14) = local_24;
        puVar4[3] = 1;
        if (local_48 != (void *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 14070cd50 FUN_14070cd50 body=410 status=ok
// SIG undefined FUN_14070cd50(void)

void FUN_14070cd50(longlong param_1,longlong *param_2)

{
  void *_Src;
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  int iVar8;
  undefined8 local_res8;
  void *local_48;
  ulonglong local_40;
  undefined8 local_38;
  void *local_30;
  int local_28;
  undefined4 local_24;
  
  FUN_1417557f0();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar3 = UObject::GetPrivateStaticClass();
    lVar5 = *(longlong *)(param_1 + 0x30);
    lVar7 = lVar5;
    if (lVar5 != 0) {
      while (lVar7 != lVar3) {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == 0) {
          return;
        }
      }
      if (lVar5 != 0) {
        if (lVar5 != 0) {
          lVar3 = UObject::GetPrivateStaticClass();
          lVar5 = *(longlong *)(param_1 + 0x30);
          for (lVar7 = lVar5; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
            if (lVar7 == lVar3) goto LAB_14070cde1;
          }
        }
        lVar5 = 0;
LAB_14070cde1:
        local_res8 = *(undefined8 *)(lVar5 + 0x18);
        FName::ToString(&local_res8,&local_38);
        FUN_1406f9010(&local_48,&local_38);
        puVar4 = (undefined8 *)FName::FName(&local_res8,L"DisplayName",1);
        _Src = local_48;
        local_30 = (void *)0x0;
        local_38 = *puVar4;
        iVar8 = (int)local_40;
        local_28 = iVar8;
        if (iVar8 == 0) {
          pvVar6 = (void *)0x0;
          local_24 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_30,local_40 & 0xffffffff,0);
          pvVar6 = local_30;
          _guard_xfg_dispatch_icall_nop(local_30,_Src,(longlong)iVar8 * 2);
        }
        iVar2 = local_28;
        uVar1 = local_38;
        iVar8 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar8 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar8 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_2,iVar8);
        }
        puVar4 = (undefined8 *)((longlong)iVar8 * 0x20 + *param_2);
        *puVar4 = uVar1;
        puVar4[1] = pvVar6;
        *(int *)(puVar4 + 2) = iVar2;
        *(undefined4 *)((longlong)puVar4 + 0x14) = local_24;
        puVar4[3] = 1;
        if (local_48 != (void *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 14070cef0 FUN_14070cef0 body=123 status=ok
// SIG undefined FUN_14070cef0(void)

longlong FUN_14070cef0(longlong *param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x678))();
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = (**(code **)(*plVar2 + 0x6e8))(plVar2);
  if (lVar3 != 0) {
    lVar4 = FUN_142e39920();
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
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 14070cf70 FUN_14070cf70 body=638 status=ok
// SIG undefined FUN_14070cf70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14070cf70(longlong param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58 [8];
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    uVar3 = USafeZone::GetPrivateStaticClass();
    local_58[0] = *(ulonglong *)(param_1 + 0x220);
    for (uVar1 = local_58[0]; uVar1 != 0; uVar1 = *(ulonglong *)(uVar1 + 0x30)) {
      if (uVar1 == uVar3) goto LAB_14070cfb6;
    }
  }
  local_58[0] = 0;
LAB_14070cfb6:
  if (*(longlong *)(param_1 + 0x228) != 0) {
    lVar4 = USafeZone::GetPrivateStaticClass();
    local_58[1] = *(longlong *)(param_1 + 0x228);
    for (lVar5 = local_58[1]; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar4) goto LAB_14070cff0;
    }
  }
  local_58[1] = 0;
LAB_14070cff0:
  if (*(longlong *)(param_1 + 0x240) != 0) {
    lVar4 = USafeZone::GetPrivateStaticClass();
    local_58[2] = *(longlong *)(param_1 + 0x240);
    for (lVar5 = local_58[2]; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar4) goto LAB_14070d023;
    }
  }
  local_58[2] = 0;
LAB_14070d023:
  if (*(longlong *)(param_1 + 0x248) != 0) {
    lVar4 = USafeZone::GetPrivateStaticClass();
    local_58[3] = *(longlong *)(param_1 + 0x248);
    for (lVar5 = local_58[3]; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar4) goto LAB_14070d056;
    }
  }
  local_58[3] = 0;
LAB_14070d056:
  if (*(longlong *)(param_1 + 0x250) != 0) {
    lVar4 = USafeZone::GetPrivateStaticClass();
    local_58[4] = *(longlong *)(param_1 + 0x250);
    for (lVar5 = local_58[4]; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar4) goto LAB_14070d090;
    }
  }
  local_58[4] = 0;
LAB_14070d090:
  if (*(longlong *)(param_1 + 600) != 0) {
    lVar4 = USafeZone::GetPrivateStaticClass();
    local_58[5] = *(longlong *)(param_1 + 600);
    for (lVar5 = local_58[5]; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar4) goto LAB_14070d0c3;
    }
  }
  local_58[5] = 0;
LAB_14070d0c3:
  if (*(longlong *)(param_1 + 0x270) != 0) {
    lVar4 = USafeZone::GetPrivateStaticClass();
    local_58[6] = *(longlong *)(param_1 + 0x270);
    for (lVar5 = local_58[6]; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar4) goto LAB_14070d0f6;
    }
  }
  local_58[6] = 0;
LAB_14070d0f6:
  if (*(longlong *)(param_1 + 0x278) != 0) {
    lVar4 = USafeZone::GetPrivateStaticClass();
    local_58[7] = *(longlong *)(param_1 + 0x278);
    for (lVar5 = local_58[7]; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar4) goto LAB_14070d130;
    }
  }
  local_58[7] = 0;
LAB_14070d130:
  puVar6 = local_58;
  if (local_58[0] == 0) {
    puVar6 = local_58;
    do {
      puVar6 = puVar6 + 1;
      if (puVar6 == local_18) break;
    } while (*puVar6 == 0);
    if (puVar6 == local_18) {
      return 0;
    }
  }
  do {
    plVar2 = (longlong *)*puVar6;
    lVar5 = plVar2[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar5 = plVar2[0x1f];
      if (lVar5 != 0) goto LAB_14070d197;
    }
    else {
LAB_14070d197:
      if (*(longlong *)(lVar5 + 0xf8) != 0) {
        return *(longlong *)(lVar5 + 0xf8);
      }
    }
    if (puVar6 != local_18) {
      do {
        puVar6 = puVar6 + 1;
        if (puVar6 == local_18) break;
      } while (*puVar6 == 0);
    }
    if (puVar6 == local_18) {
      return 0;
    }
  } while( true );
}



// FUNCTION 14070d1f0 FUN_14070d1f0 body=26 status=ok
// SIG undefined FUN_14070d1f0(void)

undefined8 * FUN_14070d1f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = USafeZone::GetPrivateStaticClass();
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 14070d210 FUN_14070d210 body=1041 status=ok
// SIG undefined FUN_14070d210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14070d210(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_538 [32];
  longlong local_518 [2];
  longlong local_508;
  longlong local_500;
  longlong local_4f8;
  undefined1 local_4f0;
  undefined1 local_4ef;
  undefined4 local_4ec;
  undefined1 local_4e8;
  undefined1 local_4e0;
  undefined1 local_4df;
  undefined1 local_4de;
  undefined1 local_4dd;
  undefined8 local_4dc;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined1 local_460;
  undefined1 local_458;
  undefined1 local_457;
  undefined1 local_456;
  undefined1 local_455;
  undefined8 local_454;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  longlong local_3d8;
  undefined8 local_3d0;
  longlong local_3c8;
  undefined1 local_3c0;
  undefined1 local_3bf;
  undefined4 local_3bc;
  undefined1 local_3b8;
  undefined1 local_3b0 [128];
  undefined1 local_330;
  undefined1 local_328 [736];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_538;
  lVar7 = *(longlong *)(param_1 + 0xd8) + param_3[1];
  lVar5 = FWeakObjectPtr::Get(lVar7 + 0x58);
  if (lVar5 != 0) {
    FUN_1407265c0(&local_508);
    lVar1 = *(longlong *)(*param_3 + 0x568);
    if (lVar1 != 0) {
      local_518[0] = 0;
      FUN_142cc3f20(param_1 + 0x110,lVar1,local_518);
      local_508 = local_518[0];
      if (local_518[0] != 0) {
        lVar6 = ACameraActor::GetPrivateStaticClass();
        lVar2 = *(longlong *)(local_508 + 0x10);
        if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_4f8 = 0;
          FUN_142dc1ad0(&local_3d8);
          cVar4 = FUN_142cc5430(param_1 + 0x100,lVar1,&local_3d8);
          if (cVar4 == '\0') {
            FUN_142cc3a70(param_1 + 0x100,lVar1,&local_4f8);
          }
          else {
            local_4f8 = FUN_142dd0030(&local_3d8);
          }
          if ((local_4f8 != 0) || (*(char *)(param_1 + 0x120) == '\0')) {
            local_4f0 = *(undefined1 *)(param_1 + 0x120);
            local_4ec = *(undefined4 *)(param_1 + 0x124);
            local_4b0 = *(undefined8 *)(param_1 + 0x160);
            uStack_4a8 = *(undefined8 *)(param_1 + 0x168);
            local_4ef = *(undefined1 *)(param_1 + 0x121);
            local_4e8 = *(undefined1 *)(param_1 + 0x128);
            local_4e0 = *(undefined1 *)(param_1 + 0x130);
            local_4df = *(undefined1 *)(param_1 + 0x131);
            local_4de = *(undefined1 *)(param_1 + 0x132);
            local_4dd = *(undefined1 *)(param_1 + 0x133);
            local_4d0 = *(undefined8 *)(param_1 + 0x140);
            local_4c8 = *(undefined8 *)(param_1 + 0x148);
            local_478 = *(undefined8 *)(param_1 + 0x198);
            local_470 = *(undefined4 *)(param_1 + 0x1a0);
            local_46c = *(undefined4 *)(param_1 + 0x1a4);
            local_4dc = *(undefined8 *)(param_1 + 0x134);
            local_460 = *(undefined1 *)(param_1 + 0x1b0);
            local_4c0 = *(undefined8 *)(param_1 + 0x150);
            uStack_4b8 = *(undefined8 *)(param_1 + 0x158);
            local_458 = *(undefined1 *)(param_1 + 0x1b8);
            local_457 = *(undefined1 *)(param_1 + 0x1b9);
            local_4a0 = *(undefined8 *)(param_1 + 0x170);
            uStack_498 = *(undefined8 *)(param_1 + 0x178);
            local_456 = *(undefined1 *)(param_1 + 0x1ba);
            local_488 = *(undefined8 *)(param_1 + 0x188);
            uStack_480 = *(undefined8 *)(param_1 + 400);
            local_455 = *(undefined1 *)(param_1 + 0x1bb);
            local_448 = *(undefined8 *)(param_1 + 0x1c8);
            local_468 = *(undefined4 *)(param_1 + 0x1a8);
            local_454 = *(undefined8 *)(param_1 + 0x1bc);
            local_438 = *(undefined8 *)(param_1 + 0x1d8);
            uStack_430 = *(undefined8 *)(param_1 + 0x1e0);
            local_440 = *(undefined8 *)(param_1 + 0x1d0);
            local_418 = *(undefined8 *)(param_1 + 0x1f8);
            uStack_410 = *(undefined8 *)(param_1 + 0x200);
            local_3f0 = *(undefined8 *)(param_1 + 0x220);
            local_490 = *(undefined8 *)(param_1 + 0x180);
            local_3e8 = *(undefined4 *)(param_1 + 0x228);
            local_428 = *(undefined8 *)(param_1 + 0x1e8);
            uStack_420 = *(undefined8 *)(param_1 + 0x1f0);
            local_3e4 = *(undefined4 *)(param_1 + 0x22c);
            local_400 = *(undefined8 *)(param_1 + 0x210);
            uStack_3f8 = *(undefined8 *)(param_1 + 0x218);
            local_408 = *(undefined8 *)(param_1 + 0x208);
            local_3e0 = *(undefined4 *)(param_1 + 0x230);
            local_500 = FWeakObjectPtr::Get(lVar7 + 0x60);
            local_3d8 = local_508;
            local_3c8 = local_4f8;
            local_3c0 = local_4f0;
            local_3bf = local_4ef;
            local_3b8 = local_4e8;
            local_3bc = local_4ec;
            local_3d0 = local_500;
            FUN_142de2b80(local_3b0,&local_4e0);
            local_330 = local_460;
            FUN_142de2b80(local_328,&local_458);
            local_500 = FUN_140737ac0(lVar5,&local_3d8);
            FWeakObjectPtr::operator=(lVar7 + 0x60,local_500);
            if (local_500 != 0) {
              param_2[1] = local_500;
              *param_2 = local_508;
              param_2[2] = local_4f8;
              *(undefined1 *)((longlong)param_2 + 0x19) = local_4ef;
              *(undefined1 *)(param_2 + 4) = local_4e8;
              *(undefined4 *)((longlong)param_2 + 0x1c) = local_4ec;
              *(undefined1 *)(param_2 + 3) = local_4f0;
              FUN_142de2b80(param_2 + 5,&local_4e0);
              *(undefined1 *)(param_2 + 0x15) = local_460;
              FUN_142de2b80(param_2 + 0x16,&local_458);
              return param_2;
            }
          }
          goto LAB_14070d5f5;
        }
      }
      local_508 = 0;
    }
  }
LAB_14070d5f5:
  FUN_1407265c0(param_2);
  return param_2;
}



// FUNCTION 14070d630 FUN_14070d630 body=909 status=ok
// SIG undefined FUN_14070d630(void)

longlong * FUN_14070d630(longlong param_1,longlong *param_2)

{
  void *_Dst;
  byte bVar1;
  longlong lVar2;
  void *_Src;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *local_68;
  ulonglong local_60;
  undefined1 local_58 [48];
  
  *param_2 = 0;
  param_2[1] = 0;
  bVar1 = *(byte *)(param_1 + 0x330);
  lVar10 = ((ulonglong)bVar1 + 0xf) * 0x30 + param_1;
  if ((*(longlong *)(lVar10 + 8) == 0) || (*(longlong *)(lVar10 + 0x20) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x77);
    iVar5 = (int)param_2[1] + 0x77;
    *(int *)(param_2 + 1) = iVar5;
    if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    builtin_wcsncpy((wchar_t *)*param_2,
                    L"No AIAction is currently running. Make sure that you specify a Main AIAction in your AIController\'s AIActionComponent."
                    ,0x77);
    return param_2;
  }
  if (bVar1 == 0) {
    *(undefined4 *)(param_2 + 1) = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    builtin_wcsncpy((wchar_t *)*param_2,L"Main AIAction: ",0x10);
  }
  else if (bVar1 == 1) {
    *(undefined4 *)(param_2 + 1) = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    builtin_wcsncpy((wchar_t *)*param_2,L"Scripted AIAction: ",0x14);
  }
  lVar2 = *(longlong *)(param_1 + 0x188);
  bVar3 = false;
  if (lVar2 != 0) {
    lVar7 = ARemnantWeaponMod::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_1406d48b0(local_58,lVar2,*(undefined8 *)(lVar10 + 0x20),*(undefined8 *)(lVar10 + 0x18));
      local_68 = (longlong *)0x0;
      local_60 = 0;
      (**(code **)(**(longlong **)(lVar10 + 8) + 0x358))
                (*(longlong **)(lVar10 + 8),local_58,&local_68,1);
      uVar11 = (ulonglong)(int)local_60;
      plVar13 = local_68 + uVar11 * 2;
      plVar12 = local_68;
      if (local_68 != plVar13) {
        do {
          if (bVar3) {
            iVar5 = (int)param_2[1];
            iVar8 = iVar5 + -1;
            if (iVar5 < 1) {
              iVar8 = 0;
            }
            iVar5 = (iVar5 < 1) + 1 + iVar5;
            *(int *)(param_2 + 1) = iVar5;
            if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
            }
            *(undefined2 *)(*param_2 + (longlong)iVar8 * 2) = 10;
            *(undefined2 *)(*param_2 + 2 + (longlong)iVar8 * 2) = 0;
          }
          _Src = (void *)*plVar12;
          iVar5 = (int)plVar12[1] + -1;
          if ((int)plVar12[1] == 0) {
            iVar5 = 0;
          }
          if (iVar5 != 0) {
            iVar8 = (int)param_2[1];
            iVar6 = (uint)(iVar8 == 0) + iVar8 + iVar5;
            *(int *)(param_2 + 1) = iVar6;
            if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
            }
            _Dst = (void *)(*param_2 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
            *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
          }
          plVar12 = plVar12 + 2;
          bVar3 = true;
        } while (plVar12 != plVar13);
        uVar11 = local_60 & 0xffffffff;
      }
      uVar9 = (uint)uVar11;
      plVar12 = local_68;
      while (uVar9 != 0) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
        uVar9 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar9;
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free(local_68);
      }
    }
  }
  return param_2;
}



// FUNCTION 14070d9c0 FUN_14070d9c0 body=1998 status=ok
// SIG undefined FUN_14070d9c0(void)

undefined8 * FUN_14070d9c0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined8 *local_res8;
  undefined8 local_res10;
  undefined2 *local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  int local_80;
  void *local_78;
  int local_70;
  void *local_68;
  int local_60;
  longlong local_58 [4];
  
  *param_2 = 0;
  param_2[1] = 0;
  local_res8 = param_2;
  if (*param_1 != 0) {
    lVar7 = FUN_142e20fc0();
    lVar11 = *param_1;
    for (lVar1 = lVar11; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar7) {
        if (lVar11 != 0) {
          local_res10 = *(undefined8 *)(lVar11 + 0x18);
          FName::ToString(&local_res10,&local_b8);
          goto LAB_14070da51;
        }
        break;
      }
    }
  }
  local_b8 = (undefined2 *)0x0;
  local_b0 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,&DAT_143f3edc8,10);
LAB_14070da51:
  iVar10 = 0;
  puVar12 = &DAT_143f3eda8;
  if ((int)local_b0 != 0) {
    puVar12 = local_b8;
  }
  FString::PrintfImpl(&local_68,L"Action: %s",puVar12);
  FUN_1406dad70(&local_res8,&local_68);
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_b8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar8 = FName::ToString(param_1 + 1,local_58);
  iVar5 = FUN_141592950(uVar8,&DAT_144060df4,1,0,0xffffffff);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (iVar5 == -1) {
    puVar9 = (undefined8 *)FName::ToString(param_1 + 1,local_58);
    if (*(int *)(puVar9 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar9;
    }
    FString::PrintfImpl(&local_68,L"Target: %s",puVar12);
    FUN_1406dad70(&local_res8,&local_68);
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  if (0.0001 < ABS(*(float *)((longlong)param_1 + 0x24))) {
LAB_14070dbcf:
    local_b8 = (undefined2 *)0x0;
    local_b0 = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    puVar12 = local_b8;
    FGenericPlatformString::Memcpy(local_b8,&DAT_144063a8c,6);
    bVar2 = true;
    if (1e-08 < ABS(*(float *)((longlong)param_1 + 0x24))) {
      FString::PrintfImpl(&local_88,L"X=%.2f",(double)*(float *)((longlong)param_1 + 0x24));
      pvVar4 = local_88;
      uVar3 = local_b0;
      if (local_80 != 0) {
        iVar10 = local_80 + -1;
      }
      if (iVar10 != 0) {
        iVar5 = (int)local_b0;
        lVar11 = (longlong)(int)local_b0;
        iVar6 = (uint)((int)local_b0 == 0) + (int)local_b0 + iVar10;
        local_b0 = CONCAT44(local_b0._4_4_,iVar6);
        if (local_b0._4_4_ < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar3 & 0xffffffff);
          puVar12 = local_b8;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar12 + (lVar11 - (ulonglong)(iVar5 != 0)),pvVar4,(longlong)iVar10 * 2);
        (puVar12 + (lVar11 - (ulonglong)(iVar5 != 0)))[iVar10] = 0;
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      bVar2 = false;
    }
    if (1e-08 < ABS(*(float *)(param_1 + 5))) {
      if (!bVar2) {
        local_98 = (void *)0x0;
        local_90 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        pvVar4 = local_98;
        FGenericPlatformString::Memcpy(local_98,&DAT_144063aa8,6);
        uVar3 = local_b0;
        if (((int)local_90 != 0) && (iVar10 = (int)local_90 + -1, iVar10 != 0)) {
          iVar5 = (int)local_b0;
          lVar11 = (longlong)(int)local_b0;
          iVar6 = (uint)((int)local_b0 == 0) + iVar10 + (int)local_b0;
          local_b0 = CONCAT44(local_b0._4_4_,iVar6);
          if (local_b0._4_4_ < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar3 & 0xffffffff);
            puVar12 = local_b8;
          }
          _guard_xfg_dispatch_icall_nop
                    (puVar12 + (lVar11 - (ulonglong)(iVar5 != 0)),pvVar4,(longlong)iVar10 * 2);
          (puVar12 + (lVar11 - (ulonglong)(iVar5 != 0)))[iVar10] = 0;
        }
        if (pvVar4 != (void *)0x0) {
          FMemory::Free(pvVar4);
        }
      }
      FString::PrintfImpl(&local_78,L"Y=%.2f",(double)*(float *)(param_1 + 5));
      pvVar4 = local_78;
      uVar3 = local_b0;
      iVar10 = 0;
      if (local_70 != 0) {
        iVar10 = local_70 + -1;
      }
      if (iVar10 != 0) {
        iVar5 = (int)local_b0;
        lVar11 = (longlong)(int)local_b0;
        iVar6 = (uint)((int)local_b0 == 0) + (int)local_b0 + iVar10;
        local_b0 = CONCAT44(local_b0._4_4_,iVar6);
        if (local_b0._4_4_ < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar3 & 0xffffffff);
          puVar12 = local_b8;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar12 + (lVar11 - (ulonglong)(iVar5 != 0)),pvVar4,(longlong)iVar10 * 2);
        (puVar12 + (lVar11 - (ulonglong)(iVar5 != 0)))[iVar10] = 0;
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      bVar2 = false;
    }
    if (1e-08 < ABS(*(float *)((longlong)param_1 + 0x2c))) {
      if (!bVar2) {
        local_98 = (void *)0x0;
        local_90 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        pvVar4 = local_98;
        FGenericPlatformString::Memcpy(local_98,&DAT_144063aa8,6);
        uVar3 = local_b0;
        if (((int)local_90 != 0) && (iVar10 = (int)local_90 + -1, iVar10 != 0)) {
          iVar5 = (int)local_b0;
          lVar11 = (longlong)(int)local_b0;
          iVar6 = (uint)((int)local_b0 == 0) + (int)local_b0 + iVar10;
          local_b0 = CONCAT44(local_b0._4_4_,iVar6);
          if (local_b0._4_4_ < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar3 & 0xffffffff);
            puVar12 = local_b8;
          }
          _guard_xfg_dispatch_icall_nop
                    (puVar12 + (lVar11 - (ulonglong)(iVar5 != 0)),pvVar4,(longlong)iVar10 * 2);
          (puVar12 + (lVar11 - (ulonglong)(iVar5 != 0)))[iVar10] = 0;
        }
        if (pvVar4 != (void *)0x0) {
          FMemory::Free(pvVar4);
        }
      }
      FString::PrintfImpl(&local_68,L"Z=%.2f",(double)*(float *)((longlong)param_1 + 0x2c));
      pvVar4 = local_68;
      uVar3 = local_b0;
      if (local_60 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = local_60 + -1;
      }
      if (iVar10 != 0) {
        iVar5 = (int)local_b0;
        lVar11 = (longlong)(int)local_b0;
        iVar6 = (uint)((int)local_b0 == 0) + (int)local_b0 + iVar10;
        local_b0 = CONCAT44(local_b0._4_4_,iVar6);
        if (local_b0._4_4_ < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar3 & 0xffffffff);
          puVar12 = local_b8;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar12 + (lVar11 - (ulonglong)(iVar5 != 0)),pvVar4,(longlong)iVar10 * 2);
        (puVar12 + (lVar11 - (ulonglong)(iVar5 != 0)))[iVar10] = 0;
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
    }
    local_90 = 2;
    local_98 = (void *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    pvVar4 = local_98;
    FGenericPlatformString::Memcpy(local_98,&DAT_144063ad0,4);
    uVar3 = local_b0;
    if (((int)local_90 != 0) && (iVar10 = (int)local_90 + -1, iVar10 != 0)) {
      iVar5 = (int)local_b0;
      lVar11 = (longlong)(int)local_b0;
      iVar6 = (uint)((int)local_b0 == 0) + (int)local_b0 + iVar10;
      local_b0 = CONCAT44(local_b0._4_4_,iVar6);
      if (local_b0._4_4_ < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar3 & 0xffffffff);
        puVar12 = local_b8;
      }
      _guard_xfg_dispatch_icall_nop
                (puVar12 + (lVar11 - (ulonglong)(iVar5 != 0)),pvVar4,(longlong)iVar10 * 2);
      (puVar12 + (lVar11 - (ulonglong)(iVar5 != 0)))[iVar10] = 0;
    }
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    local_a0 = (int)local_b0;
    local_9c = local_b0._4_4_;
    local_a8 = puVar12;
  }
  else {
    if ((ABS(*(float *)(param_1 + 5)) <= 0.0001) &&
       (ABS(*(float *)((longlong)param_1 + 0x2c)) <= 0.0001)) goto LAB_14070e075;
    if ((0.0001 < ABS(*(float *)((longlong)param_1 + 0x24))) ||
       ((0.0001 < ABS(*(float *)(param_1 + 5)) ||
        (0.0001 < ABS(*(float *)((longlong)param_1 + 0x2c)))))) goto LAB_14070dbcf;
    FString::PrintfImpl(&local_a8,L"V(0)");
  }
  puVar12 = &DAT_143f3eda8;
  if (local_a0 != 0) {
    puVar12 = local_a8;
  }
  FString::PrintfImpl(local_58,L"TargetOffset: %s",puVar12);
  FUN_1406dad70(&local_res8,local_58);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_14070e075:
  puVar12 = &DAT_143f3eda8;
  if (((int)param_1[6] != 0) || (*(int *)((longlong)param_1 + 0x34) != 0)) {
    puVar9 = (undefined8 *)FName::ToString(param_1 + 6,&local_68);
    if (*(int *)(puVar9 + 1) != 0) {
      puVar12 = (undefined2 *)*puVar9;
    }
    FString::PrintfImpl(local_58,L"TargetSocket: %s",puVar12);
    FUN_1406dad70(&local_res8,local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (0.0 < *(float *)(param_1 + 7)) {
    FString::PrintfImpl(local_58,L"Speed: %.2f",(double)*(float *)(param_1 + 7));
    FUN_1406dad70(&local_res8,local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  if (0.0 < *(float *)((longlong)param_1 + 0x3c)) {
    FString::PrintfImpl(local_58,L"AnglePercent: %.2f",(double)*(float *)((longlong)param_1 + 0x3c))
    ;
    FUN_1406dad70(&local_res8,local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 14070e190 FUN_14070e190 body=817 status=ok
// SIG undefined FUN_14070e190(void)

undefined8 * FUN_14070e190(longlong param_1,undefined8 *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *local_res8;
  wchar_t *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  local_res8 = param_2;
  if (*(char *)(param_1 + 0x80) != '\0') {
    puVar4 = (undefined8 *)FUN_142de9d00(param_1,local_38);
    local_48 = (wchar_t *)0x0;
    iVar5 = *(int *)(puVar4 + 1) + -1;
    if (*(int *)(puVar4 + 1) == 0) {
      iVar5 = 0;
    }
    local_40._0_4_ = iVar5 + 0x10;
    local_40._4_4_ = 0;
    if (0 < (int)local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    uVar3 = local_40._4_4_;
    iVar2 = (int)local_40;
    pwVar1 = local_48;
    builtin_wcsncpy(local_48,L"LoopCondition: ",0xf);
    _guard_xfg_dispatch_icall_nop(local_48 + 0xf,(void *)*puVar4,(longlong)iVar5 * 2);
    pwVar1[(longlong)iVar5 + 0xf] = L'\0';
    local_40 = CONCAT44(uVar3,iVar2);
    local_48 = pwVar1;
    FUN_140701d60(&local_res8,&local_48);
    if (pwVar1 != (wchar_t *)0x0) {
      FMemory::Free(pwVar1);
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(char *)(param_1 + 0x108) != '\0') {
    puVar4 = (undefined8 *)FUN_142de9d00(param_1 + 0x88,local_38);
    local_48 = (wchar_t *)0x0;
    iVar5 = *(int *)(puVar4 + 1) + -1;
    if (*(int *)(puVar4 + 1) == 0) {
      iVar5 = 0;
    }
    local_40._0_4_ = iVar5 + 0xc;
    local_40._4_4_ = 0;
    if (0 < (int)local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    uVar3 = local_40._4_4_;
    iVar2 = (int)local_40;
    pwVar1 = local_48;
    builtin_wcsncpy(local_48,L"LoopCount: ",0xb);
    _guard_xfg_dispatch_icall_nop(local_48 + 0xb,(void *)*puVar4,(longlong)iVar5 * 2);
    pwVar1[(longlong)iVar5 + 0xb] = L'\0';
    local_40 = CONCAT44(uVar3,iVar2);
    local_48 = pwVar1;
    FUN_140701d60(&local_res8,&local_48);
    if (pwVar1 != (wchar_t *)0x0) {
      FMemory::Free(pwVar1);
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(char *)(param_1 + 400) != '\0') {
    puVar4 = (undefined8 *)FUN_142de9d00(param_1 + 0x110,local_38);
    local_48 = (wchar_t *)0x0;
    iVar5 = *(int *)(puVar4 + 1) + -1;
    if (*(int *)(puVar4 + 1) == 0) {
      iVar5 = 0;
    }
    local_40._0_4_ = iVar5 + 0xf;
    local_40._4_4_ = 0;
    if (0 < (int)local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    uVar3 = local_40._4_4_;
    iVar2 = (int)local_40;
    pwVar1 = local_48;
    builtin_wcsncpy(local_48,L"LoopDuration: ",0xe);
    _guard_xfg_dispatch_icall_nop(local_48 + 0xe,(void *)*puVar4,(longlong)iVar5 * 2);
    pwVar1[(longlong)iVar5 + 0xe] = L'\0';
    local_40 = CONCAT44(uVar3,iVar2);
    local_48 = pwVar1;
    FUN_140701d60(&local_res8,&local_48);
    if (pwVar1 != (wchar_t *)0x0) {
      FMemory::Free(pwVar1);
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(char *)(param_1 + 0x191) != '\0') {
    local_48 = (wchar_t *)0x0;
    local_40 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pwVar1 = local_48;
    FGenericPlatformString::Memcpy(local_48,L"StopImmediately",0x20);
    FUN_140701d60(&local_res8,&local_48);
    if (pwVar1 != (wchar_t *)0x0) {
      FMemory::Free(pwVar1);
    }
  }
  return param_2;
}



// FUNCTION 14070e4d0 FUN_14070e4d0 body=238 status=ok
// SIG undefined FUN_14070e4d0(void)

undefined8 * FUN_14070e4d0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 *local_res8;
  longlong local_28 [2];
  longlong local_18 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  local_res8 = param_2;
  puVar1 = (undefined8 *)FUN_142de9d00(param_1 + 0x80,local_18);
  puVar2 = &DAT_143f3eda8;
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(local_28,L"ReachedDistance: %s",puVar3);
  FUN_1406dad70(&local_res8,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  puVar1 = (undefined8 *)FUN_142de9d00(param_1,local_18);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(local_28,L"ReachedHeight: %s",puVar2);
  FUN_1406dad70(&local_res8,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14070e5c0 FUN_14070e5c0 body=643 status=ok
// SIG undefined FUN_14070e5c0(void)

undefined8 * FUN_14070e5c0(char *param_1,undefined8 *param_2)

{
  float fVar1;
  longlong lVar2;
  undefined8 *puVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined8 *local_res8;
  longlong local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  *param_2 = 0;
  puVar5 = &DAT_143f3eda8;
  param_2[1] = 0;
  local_res8 = param_2;
  if (param_1[0x1c8] == '\0') goto LAB_14070e775;
  if (*param_1 == '\0') {
    fVar1 = *(float *)(param_1 + 4);
    if (fVar1 == 0.0) {
      local_38 = 0;
      local_30 = 0x19;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      uVar6 = 0x32;
      pwVar4 = L"BodyHeadingOffset: Front";
LAB_14070e6f6:
      lVar2 = local_38;
      FGenericPlatformString::Memcpy(local_38,pwVar4,uVar6);
      FUN_140701d60(&local_res8,&local_38);
    }
    else {
      if ((fVar1 == 180.0) || (fVar1 == -180.0)) {
        local_38 = 0;
        local_30 = 0x18;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        pwVar4 = L"BodyHeadingOffset: Back";
LAB_14070e6f0:
        uVar6 = 0x30;
        goto LAB_14070e6f6;
      }
      if (fVar1 == -90.0) {
        local_38 = 0;
        local_30 = 0x18;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        pwVar4 = L"BodyHeadingOffset: Left";
        goto LAB_14070e6f0;
      }
      if (fVar1 == 90.0) {
        local_38 = 0;
        local_30 = 0x19;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        uVar6 = 0x32;
        pwVar4 = L"BodyHeadingOffset: Right";
        goto LAB_14070e6f6;
      }
      FString::PrintfImpl(&local_38,L"BodyHeadingOffset: %0.02f degrees",(double)fVar1);
      FUN_140701d60(&local_res8,&local_38);
      lVar2 = local_38;
    }
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  puVar3 = (undefined8 *)FUN_14070e850(param_1 + 0x10,local_28);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar3;
  }
  FString::PrintfImpl(&local_38,L"Body: %s",puVar7);
  FUN_140701d60(&local_res8,&local_38);
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
LAB_14070e775:
  if (param_1[0x388] != '\0') {
    puVar3 = (undefined8 *)FUN_14070e850(param_1 + 0x1d0,local_28);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar3;
    }
    FString::PrintfImpl(&local_38,L"Aim:  %s",puVar7);
    FUN_140701d60(&local_res8,&local_38);
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if (param_1[0x548] != '\0') {
    puVar3 = (undefined8 *)FUN_14070e850(param_1 + 0x390,local_28);
    if (*(int *)(puVar3 + 1) != 0) {
      puVar5 = (undefined2 *)*puVar3;
    }
    FString::PrintfImpl(&local_38,L"Look: %s",puVar5);
    FUN_140701d60(&local_res8,&local_38);
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 14070e850 FUN_14070e850 body=268 status=ok
// SIG undefined FUN_14070e850(void)

longlong * FUN_14070e850(longlong param_1,longlong *param_2)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  void *local_28;
  int local_20;
  longlong local_18 [2];
  
  FName::ToString();
  if (*(char *)(param_1 + 0xa0) != '\0') {
    puVar3 = (undefined8 *)FUN_142de9d00(param_1 + 0x20,local_18);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar3;
    }
    FString::PrintfImpl(&local_28,L" (%s degrees)",puVar5);
    _Src = local_28;
    iVar4 = 0;
    if (local_20 != 0) {
      iVar4 = local_20 + -1;
    }
    if (iVar4 != 0) {
      iVar1 = (int)param_2[1];
      iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar4;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      _Dst = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar4 * 2);
      *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
    }
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 14070e960 FUN_14070e960 body=276 status=ok
// SIG undefined FUN_14070e960(void)

undefined8 * FUN_14070e960(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined8 *local_res8;
  longlong local_28 [2];
  longlong local_18 [2];
  
  *param_2 = 0;
  pwVar2 = L"False";
  param_2[1] = 0;
  if (*(char *)(param_1 + 0x10) != '\0') {
    pwVar2 = L"True";
  }
  local_res8 = param_2;
  FString::PrintfImpl(local_28,L"bCloak: %s",pwVar2);
  FUN_1406dad70(&local_res8,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  pwVar2 = L"False";
  if (*(char *)(param_1 + 0x11) != '\0') {
    pwVar2 = L"True";
  }
  FString::PrintfImpl(local_28,L"bTraceToGround: %s",pwVar2);
  FUN_1406dad70(&local_res8,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  puVar1 = (undefined8 *)FUN_142de9d00(param_1 + 0x28,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(local_28,L"TravelTime: %s",puVar3);
  FUN_1406dad70(&local_res8,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14070ea80 FUN_14070ea80 body=295 status=ok
// SIG undefined FUN_14070ea80(void)

undefined8 * FUN_14070ea80(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined8 *local_res8;
  longlong local_28 [2];
  longlong local_18 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  local_res8 = param_2;
  puVar1 = (undefined8 *)FUN_142de9d00(param_1 + 0x2c8,local_18);
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(puVar1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(local_28,L"CanUseWeapon: %s",puVar4);
  FUN_1406dad70(&local_res8,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x3c8) != '\0') {
    puVar1 = (undefined8 *)FUN_142de9d00(param_1 + 0x348,local_18);
    if (*(int *)(puVar1 + 1) != 0) {
      puVar3 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(local_28,L"CanUseWeaponWhileMoving: %s",puVar3);
    FUN_1406dad70(&local_res8,local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  uVar2 = FUN_140778f30(param_1,local_18);
  FUN_1406dad70(&local_res8,uVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14070ebe0 FUN_14070ebe0 body=377 status=ok
// SIG undefined FUN_14070ebe0(void)

/* WARNING: Removing unreachable block (ram,0x00014070ec95) */
/* WARNING: Removing unreachable block (ram,0x00014070ed3e) */

void FUN_14070ebe0(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_1406eb5a0();
  lVar3 = 0;
  if (*(char *)(param_1 + 0x160) != '\0') {
    FString::PrintfImpl(&local_18,L"ConsecutiveRunCount: %d / %d",
                        *(undefined4 *)
                         (*(longlong *)(param_1 + 0xd8) + 0x50 + *(longlong *)(param_2 + 8)),
                        *(undefined4 *)(param_1 + 0x15c));
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
    *puVar2 = 0;
    *puVar2 = local_18;
    local_18 = 0;
    *(undefined4 *)(puVar2 + 1) = (undefined4)local_10;
    *(undefined4 *)((longlong)puVar2 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
  }
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x160) != '\0')) {
    FString::PrintfImpl(&local_18,L"Parent RunCount: %u, Run Count : %u",
                        *(undefined4 *)
                         (*(longlong *)(lVar3 + 0xd8) + 0x2c + *(longlong *)(param_2 + 8)),
                        *(undefined4 *)
                         (*(longlong *)(param_1 + 0xd8) + 0x2c + *(longlong *)(param_2 + 8)));
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
    *puVar2 = 0;
    *puVar2 = local_18;
    *(undefined4 *)(puVar2 + 1) = (undefined4)local_10;
    *(undefined4 *)((longlong)puVar2 + 0xc) = local_10._4_4_;
  }
  return;
}



// FUNCTION 14070ed60 FUN_14070ed60 body=952 status=ok
// SIG undefined FUN_14070ed60(void)

/* WARNING: Removing unreachable block (ram,0x00014070f05e) */
/* WARNING: Removing unreachable block (ram,0x00014070ef23) */
/* WARNING: Removing unreachable block (ram,0x00014070efc0) */
/* WARNING: Removing unreachable block (ram,0x00014070f0f9) */

void FUN_14070ed60(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_res8;
  undefined2 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  
  FUN_1406eb5a0();
  lVar6 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  lVar2 = FWeakObjectPtr::Get(lVar6 + 0x48);
  lVar3 = FWeakObjectPtr::Get(lVar6 + 0x74);
  if ((((lVar2 != 0) && (-(float)DAT_14622e710 < *(float *)(lVar6 + 0x58))) &&
      (*(float *)(lVar6 + 0x58) < (float)DAT_14622e710)) &&
     (((-DAT_14622e710._4_4_ < *(float *)(lVar6 + 0x5c) &&
       (*(float *)(lVar6 + 0x5c) < DAT_14622e710._4_4_)) &&
      ((-DAT_14622e718 < *(float *)(lVar6 + 0x60) && (*(float *)(lVar6 + 0x60) < DAT_14622e718))))))
  {
    pfVar4 = (float *)(**(code **)(*(longlong *)(lVar2 + 0x458) + 0x18))
                                ((longlong *)(lVar2 + 0x458),&local_78);
    fVar8 = *pfVar4 - *(float *)(lVar6 + 0x58);
    fVar9 = pfVar4[1] - *(float *)(lVar6 + 0x5c);
    fVar10 = pfVar4[2] - *(float *)(lVar6 + 0x60);
    if (lVar3 == 0) {
      local_78 = (undefined2 *)0x0;
      local_70 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      FGenericPlatformString::Memcpy(local_78,&DAT_143f3edc8,10);
    }
    else {
      local_res8 = *(undefined8 *)(lVar3 + 0x18);
      FName::ToString(&local_res8,&local_78);
    }
    puVar7 = &DAT_143f3eda8;
    if ((int)local_70 != 0) {
      puVar7 = local_78;
    }
    FString::PrintfImpl(&local_68,L"Target: %s",puVar7);
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
    *puVar5 = 0;
    *puVar5 = local_68;
    *(undefined4 *)(puVar5 + 1) = (undefined4)local_60;
    *(undefined4 *)((longlong)puVar5 + 0xc) = local_60._4_4_;
    local_60 = 0;
    local_68 = 0;
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FString::PrintfImpl(&local_68,L"Distance to Target: %f",
                        (double)SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10));
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
    *puVar5 = 0;
    *puVar5 = local_68;
    local_68 = 0;
    *(undefined4 *)(puVar5 + 1) = (undefined4)local_60;
    *(undefined4 *)((longlong)puVar5 + 0xc) = local_60._4_4_;
    local_60 = 0;
  }
  if (0.0 <= *(float *)(lVar6 + 0xc4)) {
    fVar8 = *(float *)(param_1 + 0x128) - (*(float *)(param_2 + 0x18) - *(float *)(lVar6 + 0xc4));
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    FString::PrintfImpl(&local_68,L"Time to Teleport: %f",(double)fVar8);
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
    *puVar5 = 0;
    *puVar5 = local_68;
    local_68 = 0;
    *(undefined4 *)(puVar5 + 1) = (undefined4)local_60;
    *(undefined4 *)((longlong)puVar5 + 0xc) = local_60._4_4_;
    local_60 = 0;
  }
  if (0.0 <= *(float *)(lVar6 + 0xc0)) {
    fVar8 = *(float *)(param_1 + 0x124) - (*(float *)(param_2 + 0x18) - *(float *)(lVar6 + 0xc0));
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    FString::PrintfImpl(&local_68,L"Time to Teleport: %f",(double)fVar8);
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
    *puVar5 = 0;
    *puVar5 = local_68;
    *(undefined4 *)(puVar5 + 1) = (undefined4)local_60;
    *(undefined4 *)((longlong)puVar5 + 0xc) = local_60._4_4_;
  }
  return;
}



// FUNCTION 14070f120 FUN_14070f120 body=809 status=ok
// SIG undefined FUN_14070f120(void)

/* WARNING: Removing unreachable block (ram,0x00014070f251) */
/* WARNING: Removing unreachable block (ram,0x00014070f412) */

void FUN_14070f120(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  int iVar8;
  float fVar9;
  longlong local_res10;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  FUN_1406eb5a0();
  lVar1 = *(longlong *)(*param_2 + 0x568);
  if (lVar1 == 0) {
    return;
  }
  iVar8 = 0;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  cVar2 = FUN_142cc4d50(param_1 + 0x100,lVar1,&local_48);
  if ((cVar2 == '\0') && (local_48 != (undefined8 *)&DAT_144061ce8)) {
    uVar5 = local_40._4_4_;
    local_40 = (ulonglong)local_40._4_4_ << 0x20;
    if (uVar5 != 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,5);
      iVar8 = (int)local_40;
      uVar5 = local_40._4_4_;
    }
    local_40 = CONCAT44(local_40._4_4_,iVar8 + 5);
    if ((int)uVar5 < iVar8 + 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
    }
    *local_48 = 0x65006e006f004e;
    *(undefined2 *)(local_48 + 1) = 0;
  }
  puVar6 = (undefined8 *)&DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar6 = local_48;
  }
  FString::PrintfImpl(&local_58,L"Target: %s",puVar6);
  iVar8 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar8 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar8 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar8);
  }
  puVar6 = (undefined8 *)((longlong)iVar8 * 0x10 + *param_3);
  *puVar6 = 0;
  *puVar6 = local_58;
  *(float *)(puVar6 + 1) = (float)local_50;
  *(undefined4 *)((longlong)puVar6 + 0xc) = local_50._4_4_;
  local_50 = 0;
  local_58 = 0;
  cVar2 = FUN_142cc3a70(param_1 + 0x100,lVar1,&local_res10);
  if ((cVar2 == '\0') || (local_res10 == 0)) {
LAB_14070f2aa:
    cVar2 = FUN_142cc54f0(param_1 + 0x100,lVar1,&local_68);
    if (cVar2 == '\0') goto LAB_14070f417;
  }
  else {
    uVar3 = UNavAgentInterface::GetPrivateStaticClass();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(local_res10,uVar3);
    if (plVar4 == (longlong *)0x0) goto LAB_14070f2aa;
    puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
    local_68 = *puVar6;
    local_60 = *(float *)(puVar6 + 1);
  }
  (**(code **)(*(longlong *)(*param_2 + 0x458) + 0x18))((longlong *)(*param_2 + 0x458),&local_58);
  cVar2 = *(char *)(param_1 + 0x110);
  if (cVar2 == '\0') {
    fVar9 = SQRT((local_68._4_4_ - local_58._4_4_) * (local_68._4_4_ - local_58._4_4_) +
                 ((float)local_68 - (float)local_58) * ((float)local_68 - (float)local_58) +
                 (local_60 - (float)local_50) * (local_60 - (float)local_50));
  }
  else if (cVar2 == '\x01') {
    fVar9 = SQRT((local_68._4_4_ - local_58._4_4_) * (local_68._4_4_ - local_58._4_4_) +
                 ((float)local_68 - (float)local_58) * ((float)local_68 - (float)local_58));
  }
  else if (cVar2 == '\x02') {
    fVar9 = ABS(local_60 - (float)local_50);
  }
  else if (cVar2 == '\x03') {
    fVar9 = local_60 - (float)local_50;
  }
  else {
    fVar9 = 3.4028235e+38;
  }
  if (cVar2 == '\x01') {
    pwVar7 = L"Horizontal Distance";
  }
  else if (cVar2 == '\x02') {
    pwVar7 = L"Vertical Distance";
  }
  else if (cVar2 == '\x03') {
    pwVar7 = L"Vertical Offset";
  }
  else {
    pwVar7 = L"Distance";
  }
  FString::PrintfImpl(&local_38,L"Target %s: %0.02f",pwVar7,(double)fVar9);
  iVar8 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar8 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar8 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar8);
  }
  puVar6 = (undefined8 *)((longlong)iVar8 * 0x10 + *param_3);
  *puVar6 = 0;
  *puVar6 = local_38;
  local_38 = 0;
  *(undefined4 *)(puVar6 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar6 + 0xc) = local_30._4_4_;
  local_30 = 0;
LAB_14070f417:
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14070f450 FUN_14070f450 body=2635 status=ok
// SIG undefined FUN_14070f450(void)

/* WARNING: Removing unreachable block (ram,0x00014070fd10) */
/* WARNING: Removing unreachable block (ram,0x00014070fc1a) */
/* WARNING: Removing unreachable block (ram,0x00014070faf0) */
/* WARNING: Removing unreachable block (ram,0x00014070fa0e) */
/* WARNING: Removing unreachable block (ram,0x00014070f92a) */
/* WARNING: Removing unreachable block (ram,0x00014070f837) */
/* WARNING: Removing unreachable block (ram,0x00014070f733) */
/* WARNING: Removing unreachable block (ram,0x00014070f64f) */
/* WARNING: Removing unreachable block (ram,0x00014070f540) */
/* WARNING: Removing unreachable block (ram,0x00014070f5c9) */
/* WARNING: Removing unreachable block (ram,0x00014070f6c1) */
/* WARNING: Removing unreachable block (ram,0x00014070f7ae) */
/* WARNING: Removing unreachable block (ram,0x00014070f8b8) */
/* WARNING: Removing unreachable block (ram,0x00014070f99c) */
/* WARNING: Removing unreachable block (ram,0x00014070fa6f) */
/* WARNING: Removing unreachable block (ram,0x00014070fb85) */
/* WARNING: Removing unreachable block (ram,0x00014070fcaf) */
/* WARNING: Removing unreachable block (ram,0x00014070fe80) */

void FUN_14070f450(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  undefined8 uVar9;
  int iVar10;
  double dVar11;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  FUN_1406eb5a0();
  lVar2 = *(longlong *)(param_1 + 0xd8);
  lVar3 = *(longlong *)(param_2 + 8);
  if (*(char *)(lVar2 + 0x28 + lVar3) != '\x02') {
    return;
  }
  cVar5 = FWeakObjectPtr::IsValid(lVar2 + lVar3 + 0x48);
  if (cVar5 == '\0') {
    return;
  }
  cVar5 = FWeakObjectPtr::IsValid(lVar2 + lVar3 + 0x50);
  if (cVar5 == '\0') {
    return;
  }
  lVar6 = FWeakObjectPtr::Get(lVar2 + lVar3 + 0x48);
  (**(code **)(*(longlong *)(lVar6 + 0x458) + 0x18))((longlong *)(lVar6 + 0x458),&local_58);
  FString::PrintfImpl(&local_38,&DAT_1440620c4);
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar7 = 0;
  *puVar7 = local_38;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  dVar11 = (double)local_50;
  FString::PrintfImpl(&local_38,L"\tLocation : %.0f, %.0f, %.0f",(double)local_58,(double)local_54,
                      dVar11);
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar7 = 0;
  *puVar7 = local_38;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  iVar1 = *(int *)(lVar2 + 0x210 + lVar3);
  iVar10 = -1;
  if (*(char *)(lVar2 + 0x214 + lVar3) != '\0') {
    iVar10 = 1;
  }
  FString::PrintfImpl(&local_38,L"\tNode Index : [%d, %d]",iVar1,iVar10 + iVar1,dVar11);
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar7 = 0;
  *puVar7 = local_38;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  FString::PrintfImpl(&local_38,L"\tDist: %.0f",(double)*(float *)(lVar2 + 0x200 + lVar3));
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar7 = 0;
  *puVar7 = local_38;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  FString::PrintfImpl(&local_38,L"\tOffset: %.0f",(double)*(float *)(lVar2 + 0x204 + lVar3));
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar7 = 0;
  *puVar7 = local_38;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  lVar6 = FWeakObjectPtr::Get(lVar2 + lVar3 + 0x50);
  (**(code **)(*(longlong *)(lVar6 + 0x458) + 0x18))((longlong *)(lVar6 + 0x458),&local_48);
  FString::PrintfImpl(&local_38,L"Target");
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar7 = 0;
  *puVar7 = local_38;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  dVar11 = (double)local_40;
  FString::PrintfImpl(&local_38,L"\tLocation : %.0f, %.0f, %.0f",(double)local_48,(double)local_44,
                      dVar11);
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar7 = 0;
  *puVar7 = local_38;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  iVar1 = *(int *)(lVar2 + 0x280 + lVar3);
  iVar10 = -1;
  if (*(char *)(lVar2 + 0x284 + lVar3) != '\0') {
    iVar10 = 1;
  }
  FString::PrintfImpl(&local_38,L"\tNode Index : [%d, %d]",iVar1,iVar10 + iVar1,dVar11);
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar7 = 0;
  *puVar7 = local_38;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  FString::PrintfImpl(&local_38,L"\tDist: %.0f",(double)*(float *)(lVar2 + 0x270 + lVar3));
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar7 = 0;
  *puVar7 = local_38;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  FString::PrintfImpl(&local_38,L"\tOffset: %.0f",(double)*(float *)(lVar2 + 0x274 + lVar3));
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar7 = 0;
  *puVar7 = local_38;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  FString::PrintfImpl(&local_38,L"\tPath Speed: %.0f",(double)*(float *)(lVar2 + 0x288 + lVar3));
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar7 = 0;
  *puVar7 = local_38;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  FString::PrintfImpl(&local_38,L"Route");
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar7 = 0;
  *puVar7 = local_38;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  iVar1 = *(int *)(lVar2 + 0x210 + lVar3);
  iVar10 = -1;
  if (*(char *)(lVar2 + 0x214 + lVar3) != '\0') {
    iVar10 = 1;
  }
  FString::PrintfImpl(&local_38,L"\tNode Index : [%d, %d]",iVar1,iVar1 + iVar10);
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar7 = 0;
  *puVar7 = local_38;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  FString::PrintfImpl(&local_38,L"\tStart : %.0f, %.0f, %.0f",
                      (double)*(float *)(lVar2 + 0x1b8 + lVar3),
                      (double)*(float *)(lVar2 + 0x1bc + lVar3),
                      (double)*(float *)(lVar2 + 0x1c0 + lVar3));
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar7 = 0;
  *puVar7 = local_38;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  FString::PrintfImpl(&local_38,L"\tEnd : %.0f, %.0f, %.0f",
                      (double)*(float *)(lVar2 + 0x1c4 + lVar3),
                      (double)*(float *)(lVar2 + 0x1c8 + lVar3),
                      (double)*(float *)(lVar2 + 0x1cc + lVar3));
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar7 = 0;
  *puVar7 = local_38;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  FString::PrintfImpl(&local_38,L"\tDirection : %.0f, %.0f, %.0f",
                      (double)*(float *)(lVar2 + 0x1d0 + lVar3),
                      (double)*(float *)(lVar2 + 0x1d4 + lVar3),
                      (double)*(float *)(lVar2 + 0x1d8 + lVar3));
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar7 = 0;
  *puVar7 = local_38;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  FString::PrintfImpl(&local_38,L"UserLocState");
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar7 = 0;
  *puVar7 = local_38;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_30._4_4_;
  local_30 = 0;
  local_38 = 0;
  iVar1 = *(int *)(lVar2 + 0x298 + lVar3);
  if (iVar1 == 0) {
    local_38 = 0;
    local_30 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    uVar9 = 0x22;
    pwVar8 = L"\tStatus: Unknown";
  }
  else if (iVar1 == 1) {
    local_38 = 0;
    local_30 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    uVar9 = 0x20;
    pwVar8 = L"\tStatus: Behind";
  }
  else if (iVar1 == 2) {
    local_38 = 0;
    local_30 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    uVar9 = 0x1e;
    pwVar8 = L"\tStatus: Ideal";
  }
  else {
    if (iVar1 != 3) goto LAB_14070fe0d;
    local_38 = 0;
    local_30 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    uVar9 = 0x1e;
    pwVar8 = L"\tStatus: Ahead";
  }
  uVar4 = local_38;
  FGenericPlatformString::Memcpy(local_38,pwVar8,uVar9);
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar7 = uVar4;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_30._4_4_;
LAB_14070fe0d:
  FString::PrintfImpl(&local_38,L"\tPath Separation: %.0f",(double)*(float *)(lVar2 + 0x294 + lVar3)
                     );
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar7 = 0;
  *puVar7 = local_38;
  *(undefined4 *)(puVar7 + 1) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar7 + 0xc) = local_30._4_4_;
  return;
}



// FUNCTION 14070fea0 FUN_14070fea0 body=736 status=ok
// SIG undefined FUN_14070fea0(void)

/* WARNING: Removing unreachable block (ram,0x0001407100c5) */
/* WARNING: Removing unreachable block (ram,0x000140710160) */

void FUN_14070fea0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  void *_Src;
  float fVar8;
  undefined8 local_res8;
  longlong *local_res10;
  void *local_48;
  undefined8 local_40;
  
  local_res10 = param_2;
  FUN_1406eb5a0();
  lVar2 = *(longlong *)(param_1 + 0xd8);
  lVar3 = param_2[1];
  if (*(char *)(lVar2 + 0x28 + lVar3) == '\x02') {
    if (*(char *)(param_1 + 0x180) != '\0') {
      local_48 = (void *)0x0;
      local_40 = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      _Src = local_48;
      FGenericPlatformString::Memcpy(local_48,L"Condition: ",0x18);
      local_res8 = *(undefined8 *)(*param_2 + 0x568);
      fVar8 = (float)FUN_142de77e0(param_1 + 0x100,*param_2,0,&local_res8);
      iVar1 = (int)local_40;
      lVar6 = (longlong)(int)local_40;
      if (fVar8 < 0.5) {
        iVar5 = (6 - (uint)((int)local_40 != 0)) + (int)local_40;
        local_40 = CONCAT44(local_40._4_4_,iVar5);
        if (local_40._4_4_ < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
          _Src = local_48;
          iVar5 = (int)local_40;
        }
        lVar6 = lVar6 - (ulonglong)(iVar1 != 0);
        builtin_wcsncpy((wchar_t *)((longlong)_Src + lVar6 * 2),L"fals",4);
        *(undefined2 *)((longlong)_Src + lVar6 * 2 + 8) = 0x65;
        *(undefined2 *)((longlong)_Src + lVar6 * 2 + 10) = 0;
      }
      else {
        iVar5 = (5 - (uint)((int)local_40 != 0)) + (int)local_40;
        local_40 = CONCAT44(local_40._4_4_,iVar5);
        if (local_40._4_4_ < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
          _Src = local_48;
          iVar5 = (int)local_40;
        }
        lVar6 = lVar6 - (ulonglong)(iVar1 != 0);
        builtin_wcsncpy((wchar_t *)((longlong)_Src + lVar6 * 2),L"true",4);
        *(undefined2 *)((longlong)_Src + lVar6 * 2 + 8) = 0;
      }
      iVar1 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
      }
      puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
      *puVar7 = 0;
      *(int *)(puVar7 + 1) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar7,iVar5,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar7,_Src,(longlong)iVar5 * 2);
      }
      param_2 = local_res10;
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
        param_2 = local_res10;
      }
    }
    if (*(char *)(param_1 + 0x208) != '\0') {
      FString::PrintfImpl(&local_48,L"Count: %u of %u",*(undefined4 *)(lVar2 + 0x48 + lVar3),
                          *(undefined4 *)(lVar2 + 0x4c + lVar3));
      iVar1 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
      }
      plVar4 = (longlong *)((longlong)iVar1 * 0x10 + *param_3);
      *plVar4 = 0;
      *plVar4 = (longlong)local_48;
      local_48 = (void *)0x0;
      *(int *)(plVar4 + 1) = (int)local_40;
      *(int *)((longlong)plVar4 + 0xc) = local_40._4_4_;
      local_40 = 0;
    }
    if (*(char *)(param_1 + 0x290) != '\0') {
      fVar8 = *(float *)(lVar2 + 0x50 + lVar3) - *(float *)(param_2 + 3);
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      FString::PrintfImpl(&local_48,L"Duration: %0.02fs of %0.02fs",(double)fVar8,
                          (double)*(float *)(lVar2 + 0x54 + lVar3));
      iVar1 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
      }
      plVar4 = (longlong *)((longlong)iVar1 * 0x10 + *param_3);
      *plVar4 = 0;
      *plVar4 = (longlong)local_48;
      *(int *)(plVar4 + 1) = (int)local_40;
      *(int *)((longlong)plVar4 + 0xc) = local_40._4_4_;
    }
  }
  return;
}



// FUNCTION 140710180 FUN_140710180 body=436 status=ok
// SIG undefined FUN_140710180(void)

/* WARNING: Removing unreachable block (ram,0x00014071023a) */
/* WARNING: Removing unreachable block (ram,0x000140710319) */

void FUN_140710180(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  float *pfVar4;
  longlong lVar5;
  undefined2 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  FUN_1406eb5a0();
  lVar5 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  if (*(longlong *)(lVar5 + 0x48) != 0) {
    puVar3 = (undefined8 *)
             BuildPatchServices::FDeltaScanner::GetResultWhenComplete
                       (*(longlong *)(lVar5 + 0x48),local_18);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar3;
    }
    FString::PrintfImpl(&local_28,L"Goal: %s",puVar6);
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
    *puVar3 = 0;
    *puVar3 = local_28;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    cVar2 = FUN_142fa58d0(*(undefined8 *)(lVar5 + 0x48));
    if (cVar2 != '\0') {
      lVar5 = *(longlong *)(lVar5 + 0x48);
      pfVar4 = (float *)(**(code **)(*(longlong *)(*param_2 + 0x458) + 0x18))
                                  ((longlong *)(*param_2 + 0x458),&local_28);
      fVar9 = pfVar4[1] - *(float *)(lVar5 + 0x40);
      fVar7 = pfVar4[2] - *(float *)(lVar5 + 0x44);
      fVar8 = *pfVar4 - *(float *)(lVar5 + 0x3c);
      FString::PrintfImpl(&local_28,L"Goal Distance: %0.02f",
                          (double)SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7));
      iVar1 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
      }
      puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
      *puVar3 = 0;
      *puVar3 = local_28;
      *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
      *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
    }
  }
  return;
}



// FUNCTION 140710340 FUN_140710340 body=1545 status=ok
// SIG undefined FUN_140710340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140710340(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  void *pvVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  ulonglong *puVar6;
  wchar_t *pwVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  void *_Dst;
  undefined1 auStack_198 [32];
  void *local_178;
  undefined8 local_170;
  int local_168;
  void *local_160;
  int local_158;
  longlong local_150;
  void *local_148;
  int local_140;
  longlong local_138 [2];
  longlong local_128;
  undefined8 *local_120;
  longlong local_118;
  undefined1 local_108 [4];
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_150 = param_1;
  FUN_1406eb5a0();
  local_118 = FUN_14070cef0(*param_2);
  pvVar12 = (void *)0x0;
  iVar15 = 0;
  if (local_118 == 0) {
    local_178 = (void *)0x0;
    local_170 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
    uVar14 = 0x2a;
    pwVar7 = L"No MovementComponent";
  }
  else {
    local_c8 = 0xffffffff;
    uStack_c0 = 0xffffffff;
    local_108[0] = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_104 = 0xffffffff;
    iVar8 = 0;
    local_100 = 0;
    local_fc = 0xffffffff;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_dc = _DAT_1468b5d90;
    local_d4 = DAT_1468b5d98;
    local_d0 = 0;
    local_cc = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = _DAT_1468b5d90;
    local_98 = DAT_1468b5d98;
    local_94 = 0;
    local_90 = 0;
    local_8c = 0xffffffff;
    local_88 = 0;
    local_84 = 0xffffffff;
    local_80 = 0;
    local_68 = 0;
    local_64 = _DAT_1468b5d90;
    local_5c = DAT_1468b5d98;
    local_58 = 0;
    cVar2 = FUN_1407186a0(param_1,param_2,local_108);
    local_178 = (void *)0x0;
    if (cVar2 != '\0') {
      local_170._4_4_ = 0;
      _Dst = pvVar12;
      local_128 = param_1;
      local_120 = param_2;
      if (*(char *)(param_1 + 0x2c8) != '\0') {
        puVar3 = (undefined8 *)FUN_140701e50(&local_128,&local_160,0,param_1 + 0x110);
        if (*(int *)(puVar3 + 1) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)*puVar3;
        }
        FString::PrintfImpl(&local_148,L"Body(%s)",puVar5);
        pvVar1 = local_148;
        iVar9 = iVar8;
        if (local_140 != 0) {
          iVar9 = local_140 + -1;
        }
        iVar15 = 0;
        if (iVar9 != 0) {
          local_170._0_4_ = iVar9 + 1;
          iVar15 = 0;
          if (0 < (int)(uint)local_170) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
            _Dst = local_178;
            iVar15 = local_170._4_4_;
          }
          pvVar12 = (void *)(ulonglong)(uint)local_170;
          _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar9 * 2);
          *(undefined2 *)((longlong)iVar9 * 2 + (longlong)_Dst) = 0;
        }
        if (local_148 != (void *)0x0) {
          FMemory::Free(local_148);
        }
        param_1 = local_150;
        if (local_160 != (void *)0x0) {
          FMemory::Free();
          param_1 = local_150;
        }
      }
      if (*(char *)(param_1 + 0x488) != '\0') {
        iVar9 = (int)pvVar12;
        if (1 < iVar9) {
          iVar13 = iVar9 + -1;
          if (iVar9 < 1) {
            iVar13 = iVar8;
          }
          local_170._0_4_ = (iVar9 < 1) + 1 + iVar9;
          if (iVar15 < (int)(uint)local_170) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,pvVar12);
            _Dst = local_178;
            iVar15 = local_170._4_4_;
          }
          *(undefined4 *)((longlong)_Dst + (longlong)iVar13 * 2) = 0x2c;
          iVar9 = (uint)local_170 + -1;
          if ((int)(uint)local_170 < 1) {
            iVar9 = iVar8;
          }
          local_170._0_4_ = ((int)(uint)local_170 < 1) + 1 + (uint)local_170;
          if (iVar15 < (int)(uint)local_170) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178);
            _Dst = local_178;
            iVar15 = local_170._4_4_;
          }
          pvVar12 = (void *)(ulonglong)(uint)local_170;
          *(undefined4 *)((longlong)_Dst + (longlong)iVar9 * 2) = 0x20;
        }
        puVar3 = (undefined8 *)FUN_140701e50(&local_128,local_138,1,param_1 + 0x2d0);
        if (*(int *)(puVar3 + 1) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)*puVar3;
        }
        FString::PrintfImpl(&local_160,L"Aim(%s)",puVar5);
        local_168 = iVar8;
        if (local_158 != 0) {
          local_168 = local_158 + -1;
        }
        local_148 = local_160;
        if (local_168 != 0) {
          iVar9 = (int)pvVar12;
          local_170._0_4_ = local_168 + (uint)(iVar9 == 0) + iVar9;
          if (iVar15 < (int)(uint)local_170) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,pvVar12);
            _Dst = local_178;
            iVar15 = local_170._4_4_;
          }
          pvVar12 = (void *)(ulonglong)(uint)local_170;
          pvVar1 = (void *)((longlong)_Dst + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
          lVar4 = (longlong)local_168;
          _guard_xfg_dispatch_icall_nop(pvVar1,local_148,lVar4 * 2);
          *(undefined2 *)(lVar4 * 2 + (longlong)pvVar1) = 0;
          param_1 = local_150;
        }
        if (local_160 != (void *)0x0) {
          FMemory::Free(local_160);
        }
        if (local_138[0] != 0) {
          FMemory::Free();
        }
      }
      uVar10 = (uint)pvVar12;
      if (*(char *)(param_1 + 0x648) != '\0') {
        if (1 < (int)uVar10) {
          iVar9 = uVar10 - 1;
          if ((int)uVar10 < 1) {
            iVar9 = iVar8;
          }
          local_170._0_4_ = ((int)uVar10 < 1) + 1 + uVar10;
          if (iVar15 < (int)(uint)local_170) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,pvVar12);
            _Dst = local_178;
            iVar15 = local_170._4_4_;
          }
          *(undefined4 *)((longlong)_Dst + (longlong)iVar9 * 2) = 0x2c;
          iVar9 = (uint)local_170 + -1;
          if ((int)(uint)local_170 < 1) {
            iVar9 = iVar8;
          }
          local_170._0_4_ = ((int)(uint)local_170 < 1) + 1 + (uint)local_170;
          if (iVar15 < (int)(uint)local_170) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178);
            _Dst = local_178;
            iVar15 = local_170._4_4_;
          }
          pvVar12 = (void *)(ulonglong)(uint)local_170;
          *(undefined4 *)((longlong)_Dst + (longlong)iVar9 * 2) = 0x20;
        }
        uVar11 = (uint)pvVar12;
        puVar3 = (undefined8 *)FUN_140701e50(&local_128,local_138,2,param_1 + 0x490);
        if (*(int *)(puVar3 + 1) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)*puVar3;
        }
        FString::PrintfImpl(&local_160,L"Look(%s)",puVar5);
        if (local_158 != 0) {
          iVar8 = local_158 + -1;
        }
        local_148 = local_160;
        uVar10 = uVar11;
        if (iVar8 != 0) {
          local_170._0_4_ = uVar11 + (uVar11 == 0) + iVar8;
          if (iVar15 < (int)(uint)local_170) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,pvVar12);
            _Dst = local_178;
          }
          uVar10 = (uint)local_170;
          pvVar12 = (void *)((longlong)_Dst + ((longlong)(int)uVar11 - (ulonglong)(uVar11 != 0)) * 2
                            );
          _guard_xfg_dispatch_icall_nop(pvVar12,local_148,(longlong)iVar8 * 2);
          *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar12) = 0;
        }
        if (local_160 != (void *)0x0) {
          FMemory::Free(local_160);
        }
        if (local_138[0] != 0) {
          FMemory::Free();
        }
      }
      if (1 < (int)uVar10) {
        iVar15 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar15 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar15 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar15);
        }
        puVar3 = (undefined8 *)((longlong)iVar15 * 0x10 + *param_3);
        *puVar3 = 0;
        *(uint *)(puVar3 + 1) = uVar10;
        if (uVar10 == 0) {
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,uVar10,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Dst,(longlong)(int)uVar10 * 2);
        }
      }
      if (_Dst == (void *)0x0) {
        return;
      }
      FMemory::Free(_Dst);
      return;
    }
    local_170 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
    uVar14 = 0x22;
    pwVar7 = L"No FacingTargets";
  }
  pvVar12 = local_178;
  FGenericPlatformString::Memcpy(local_178,pwVar7,uVar14);
  iVar15 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar15 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar15 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar15);
  }
  puVar6 = (ulonglong *)((longlong)iVar15 * 0x10 + *param_3);
  *puVar6 = (ulonglong)pvVar12;
  *(uint *)(puVar6 + 1) = (uint)local_170;
  *(int *)((longlong)puVar6 + 0xc) = local_170._4_4_;
  return;
}



// FUNCTION 140710950 FUN_140710950 body=1510 status=ok
// SIG undefined FUN_140710950(void)

/* WARNING: Removing unreachable block (ram,0x000140710e8a) */
/* WARNING: Removing unreachable block (ram,0x000140710d5a) */
/* WARNING: Removing unreachable block (ram,0x000140710c30) */
/* WARNING: Removing unreachable block (ram,0x000140710b44) */
/* WARNING: Removing unreachable block (ram,0x000140710a4d) */
/* WARNING: Removing unreachable block (ram,0x000140710ad4) */
/* WARNING: Removing unreachable block (ram,0x000140710bb4) */
/* WARNING: Removing unreachable block (ram,0x000140710c8f) */
/* WARNING: Removing unreachable block (ram,0x000140710e00) */
/* WARNING: Removing unreachable block (ram,0x000140710f1c) */

void FUN_140710950(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  float fVar8;
  undefined8 local_res8;
  undefined8 local_res10;
  float local_78;
  float local_74;
  float local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  
  FUN_1406eb5a0();
  lVar7 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  cVar2 = FSkeletonRemapping::IsValid(lVar7 + 0x50);
  if ((((cVar2 != '\0') &&
       (lVar3 = FWeakObjectPtr::Get(lVar7 + 0x50), *(longlong *)(lVar3 + 0x118) != 0)) &&
      (lVar3 = FWeakObjectPtr::Get(lVar7 + 0x58), *(longlong *)(lVar3 + 0x118) != 0)) &&
     (cVar2 = FWeakObjectPtr::IsValid(lVar7 + 0x48), cVar2 != '\0')) {
    lVar3 = FWeakObjectPtr::Get(lVar7 + 0x48);
    (**(code **)(*(longlong *)(lVar3 + 0x458) + 0x18))((longlong *)(lVar3 + 0x458),&local_78);
    FString::PrintfImpl(&local_68,&DAT_144060d74);
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
    *puVar4 = 0;
    *puVar4 = local_68;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_60;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_60._4_4_;
    local_60 = 0;
    local_68 = 0;
    FString::PrintfImpl(&local_68,L"\tLocation : %.0f, %.0f, %.0f",(double)local_78,(double)local_74
                        ,(double)local_70);
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
    *puVar4 = 0;
    *puVar4 = local_68;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_60;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_60._4_4_;
    local_60 = 0;
    local_68 = 0;
    FString::PrintfImpl(&local_68,L"\tDist: %.0f",(double)*(float *)(lVar7 + 0xa8));
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
    *puVar4 = 0;
    *puVar4 = local_68;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_60;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_60._4_4_;
    local_60 = 0;
    local_68 = 0;
    FString::PrintfImpl(&local_68,L"\tOffset: %.0f",(double)*(float *)(lVar7 + 0xac));
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
    *puVar4 = 0;
    *puVar4 = local_68;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_60;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_60._4_4_;
    local_60 = 0;
    local_68 = 0;
    fVar8 = *(float *)(lVar7 + 0xb0) - *(float *)(param_2 + 0x18);
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    FString::PrintfImpl(&local_68,L"\tNext Usage: %.0f",(double)fVar8);
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
    *puVar4 = 0;
    *puVar4 = local_68;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_60;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_60._4_4_;
    local_60 = 0;
    local_68 = 0;
    FString::PrintfImpl(&local_68,L"Route");
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
    *puVar4 = 0;
    *puVar4 = local_68;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_60;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_60._4_4_;
    local_60 = 0;
    local_68 = 0;
    lVar3 = FWeakObjectPtr::Get(lVar7 + 0x58);
    local_res8 = *(undefined8 *)(*(longlong *)(lVar3 + 0x118) + 0x18);
    FName::ToString(&local_res8,&local_48);
    puVar5 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar5 = local_48;
    }
    lVar3 = FWeakObjectPtr::Get(lVar7 + 0x50);
    local_res10 = *(undefined8 *)(*(longlong *)(lVar3 + 0x118) + 0x18);
    FName::ToString(&local_res10,&local_58);
    puVar6 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar6 = local_58;
    }
    FString::PrintfImpl(&local_68,L"\tLink: [%s, %s]",puVar6,puVar5);
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
    *puVar4 = 0;
    *puVar4 = local_68;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_60;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_60._4_4_;
    local_60 = 0;
    local_68 = 0;
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FString::PrintfImpl(&local_68,L"\tStart : %.0f, %.0f, %.0f",(double)*(float *)(lVar7 + 0x60),
                        (double)*(float *)(lVar7 + 100),(double)*(float *)(lVar7 + 0x68));
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
    *puVar4 = 0;
    *puVar4 = local_68;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_60;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_60._4_4_;
    local_60 = 0;
    local_68 = 0;
    FString::PrintfImpl(&local_68,L"\tEnd : %.0f, %.0f, %.0f",(double)*(float *)(lVar7 + 0x6c),
                        (double)*(float *)(lVar7 + 0x70),(double)*(float *)(lVar7 + 0x74));
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
    *puVar4 = 0;
    *puVar4 = local_68;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_60;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_60._4_4_;
    local_60 = 0;
    local_68 = 0;
    FString::PrintfImpl(&local_68,L"\tDirection : %.0f, %.0f, %.0f",(double)*(float *)(lVar7 + 0x78)
                        ,(double)*(float *)(lVar7 + 0x7c),(double)*(float *)(lVar7 + 0x80));
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
    *puVar4 = 0;
    *puVar4 = local_68;
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_60;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_60._4_4_;
  }
  return;
}



// FUNCTION 140710f40 FUN_140710f40 body=203 status=ok
// SIG undefined FUN_140710f40(void)

/* WARNING: Removing unreachable block (ram,0x000140710ff6) */

void FUN_140710f40(longlong param_1,longlong param_2,longlong *param_3)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  FUN_1406eb5a0();
  fVar5 = 0.0;
  lVar3 = *(longlong *)(param_1 + 0xd8) + *(longlong *)(param_2 + 8);
  fVar1 = *(float *)(lVar3 + 0x4c);
  if (0.0 < fVar1) {
    fVar5 = *(float *)(param_2 + 0x18) - fVar1;
  }
  FString::PrintfImpl(&local_18,L"Time: %0.02f / %0.02f",(double)fVar5,
                      (double)*(float *)(lVar3 + 0x48));
  lVar3 = param_3[1];
  iVar2 = (int)lVar3 + 1;
  *(int *)(param_3 + 1) = iVar2;
  if (*(int *)((longlong)param_3 + 0xc) < iVar2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3);
  }
  puVar4 = (undefined8 *)((longlong)(int)lVar3 * 0x10 + *param_3);
  *puVar4 = 0;
  *puVar4 = local_18;
  *(undefined4 *)(puVar4 + 1) = local_10;
  *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_c;
  return;
}



// FUNCTION 140711010 FUN_140711010 body=616 status=ok
// SIG undefined FUN_140711010(void)

/* WARNING: Removing unreachable block (ram,0x0001407111c6) */
/* WARNING: Removing unreachable block (ram,0x000140711118) */
/* WARNING: Removing unreachable block (ram,0x000140711250) */

void FUN_140711010(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  bool bVar7;
  float fVar8;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [4];
  
  bVar7 = false;
  FUN_1406eb5a0();
  lVar2 = *(longlong *)(param_2 + 8);
  lVar3 = *(longlong *)(param_1 + 0xd8);
  fVar8 = *(float *)(lVar2 + 0x50 + lVar3);
  if (0.0 < fVar8) {
    piVar4 = (int *)(lVar3 + 0x48 + lVar2);
    if ((*piVar4 == 0) && (piVar4[1] == 0)) {
      pwVar6 = L"Cooldown";
    }
    else {
      puVar5 = (undefined8 *)FName::ToString(piVar4,local_48);
      if (*(int *)(puVar5 + 1) == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)*puVar5;
      }
      fVar8 = *(float *)(lVar2 + 0x50 + lVar3);
      bVar7 = true;
    }
    fVar8 = fVar8 - *(float *)(param_2 + 0x18);
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    FString::PrintfImpl(&local_58,L"Off %s in %0.02fs",pwVar6,(double)fVar8);
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
    *puVar5 = 0;
    *puVar5 = local_58;
    *(undefined4 *)(puVar5 + 1) = (undefined4)local_50;
    *(undefined4 *)((longlong)puVar5 + 0xc) = local_50._4_4_;
    local_50 = 0;
    local_58 = 0;
    if ((bVar7) && (local_48[0] != 0)) {
      FMemory::Free();
    }
  }
  if (*(char *)(*(longlong *)(param_2 + 8) + 0x28 + *(longlong *)(param_1 + 0xd8)) == '\x02') {
    if (*(char *)(param_1 + 0x538) != '\0') {
      fVar8 = *(float *)(lVar2 + 0x54 + lVar3) - *(float *)(param_2 + 0x18);
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      FString::PrintfImpl(&local_58,L"Succeed in %0.02fs",(double)fVar8);
      iVar1 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
      }
      puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
      *puVar5 = 0;
      *puVar5 = local_58;
      local_58 = 0;
      *(undefined4 *)(puVar5 + 1) = (undefined4)local_50;
      *(undefined4 *)((longlong)puVar5 + 0xc) = local_50._4_4_;
      local_50 = 0;
    }
    if (*(char *)(param_1 + 0x5c0) != '\0') {
      fVar8 = *(float *)(lVar2 + 0x58 + lVar3) - *(float *)(param_2 + 0x18);
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      FString::PrintfImpl(&local_58,L"Fail in %0.02fs",(double)fVar8);
      iVar1 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
      }
      puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
      *puVar5 = 0;
      *puVar5 = local_58;
      *(undefined4 *)(puVar5 + 1) = (undefined4)local_50;
      *(undefined4 *)((longlong)puVar5 + 0xc) = local_50._4_4_;
    }
  }
  return;
}



// FUNCTION 140711280 FUN_140711280 body=1965 status=ok
// SIG undefined FUN_140711280(void)

/* WARNING: Removing unreachable block (ram,0x000140711392) */
/* WARNING: Removing unreachable block (ram,0x0001407114ee) */
/* WARNING: Removing unreachable block (ram,0x000140711876) */
/* WARNING: Removing unreachable block (ram,0x0001407118f4) */
/* WARNING: Removing unreachable block (ram,0x000140711968) */

void FUN_140711280(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  uint uVar11;
  int iVar12;
  void *pvVar14;
  undefined4 uVar15;
  uint uVar16;
  ulonglong uVar17;
  void *_Src;
  char *pcVar18;
  float fVar19;
  void *local_118;
  uint local_110;
  int local_10c;
  ulonglong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  char *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  void *local_78;
  float local_70;
  float local_6c;
  longlong local_60 [5];
  ulonglong uVar13;
  
  FUN_1406eb5a0();
  local_88 = *(longlong *)(param_1 + 0xd8) + param_2[1];
  pcVar5 = (char *)(local_88 + 0x4a);
  lVar8 = 10;
  pcVar18 = pcVar5;
  local_e8 = lVar8;
  if (pcVar5 <= (char *)(local_88 + 0x54)) {
    do {
      uVar13 = 0;
      cVar3 = *pcVar18;
      if (-1 < cVar3) {
        local_e0 = pcVar18;
        lVar8 = FUN_140760140(*param_2,(int)cVar3);
        if (lVar8 == 0) {
          local_f8 = 0;
          local_f0 = 0x21;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
          uVar2 = local_f8;
          FGenericPlatformString::Memcpy(local_f8,L"ERROR: No AIWeaponUserComponent!",0x42);
          iVar12 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar12 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar12 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar12);
          }
          puVar9 = (undefined8 *)((longlong)iVar12 * 0x10 + *param_3);
          *puVar9 = uVar2;
          *(undefined4 *)(puVar9 + 1) = (undefined4)local_f0;
          local_f8 = 0;
          *(undefined4 *)((longlong)puVar9 + 0xc) = local_f0._4_4_;
          local_f0 = 0;
          lVar8 = local_e8;
        }
        else {
          FString::PrintfImpl(&local_d8,L"===== WEAPON SLOT %d =====",(int)cVar3);
          iVar12 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar12 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar12 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar12);
          }
          puVar9 = (undefined8 *)((longlong)iVar12 * 0x10 + *param_3);
          *puVar9 = 0;
          *puVar9 = local_d8;
          *(undefined4 *)(puVar9 + 1) = (undefined4)local_d0;
          *(undefined4 *)((longlong)puVar9 + 0xc) = local_d0._4_4_;
          local_d0 = 0;
          local_d8 = 0;
          cVar3 = UIndianaGameUserSettings::GetXAxisInverted(lVar8);
          local_108 = 0;
          pwVar10 = L"WeaponUse Disabled";
          if (cVar3 != '\0') {
            pwVar10 = L"WeaponUse Enabled";
          }
          uVar15 = 0;
          local_100 = local_100 & 0xffffffff;
          uVar17 = uVar13;
          if (*pwVar10 != L'\0') {
            lVar6 = -1;
            do {
              lVar1 = lVar6 + 1;
              lVar6 = lVar6 + 1;
            } while (pwVar10[lVar1] != L'\0');
            uVar11 = (int)lVar6 + 1;
            local_100 = (ulonglong)uVar11;
            uVar16 = uVar11;
            if (0 < (int)uVar11) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
              uVar15 = local_100._4_4_;
              uVar16 = (uint)local_100;
            }
            uVar17 = local_108;
            uVar13 = (ulonglong)uVar16;
            FGenericPlatformString::Memcpy(local_108,pwVar10,(longlong)(int)uVar11 * 2);
          }
          iVar12 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar12 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar12 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar12);
          }
          local_108 = 0;
          puVar7 = (ulonglong *)((longlong)iVar12 * 0x10 + *param_3);
          *puVar7 = uVar17;
          *(int *)(puVar7 + 1) = (int)uVar13;
          pvVar14 = (void *)0x0;
          *(undefined4 *)((longlong)puVar7 + 0xc) = uVar15;
          local_100 = 0;
          if (*(char *)(lVar8 + 0x1b3) == '\x02') {
            fVar19 = *(float *)(lVar8 + 0x1cc) - *(float *)(param_2 + 3);
            if (fVar19 <= 0.0) {
              fVar19 = 0.0;
            }
            FString::PrintfImpl(&local_c8,L"Firing: Burst %d / %d, NextShot %0.02fs",
                                *(undefined4 *)(lVar8 + 0x1dc),*(undefined4 *)(lVar8 + 0x1c8),
                                (double)fVar19);
            iVar12 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar12 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar12 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar12);
            }
            puVar9 = (undefined8 *)((longlong)iVar12 * 0x10 + *param_3);
            *puVar9 = 0;
            *puVar9 = local_c8;
            local_c8 = 0;
            *(undefined4 *)(puVar9 + 1) = (undefined4)local_c0;
            *(undefined4 *)((longlong)puVar9 + 0xc) = local_c0._4_4_;
            local_c0 = 0;
          }
          else {
            local_118 = (void *)0x0;
            iVar12 = 0;
            local_10c = 0;
            pwVar10 = L"Not Firing: ";
            if (*(char *)(lVar8 + 0x1b3) == '\x01') {
              pwVar10 = L"Firing Paused: ";
            }
            _Src = pvVar14;
            if (*pwVar10 != L'\0') {
              lVar6 = -1;
              do {
                lVar1 = lVar6 + 1;
                lVar6 = lVar6 + 1;
              } while (pwVar10[lVar1] != L'\0');
              local_110 = (int)lVar6 + 1;
              lVar6 = (longlong)(int)local_110;
              if (0 < (int)local_110) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
              }
              iVar12 = local_10c;
              _Src = local_118;
              pvVar14 = (void *)(ulonglong)local_110;
              FGenericPlatformString::Memcpy(local_118,pwVar10,lVar6 * 2);
            }
            uVar16 = (uint)pvVar14;
            if (*(char *)(local_88 + 0x48) == '\0') {
              local_110 = (0x16 - (uint)(uVar16 != 0)) + uVar16;
              if (iVar12 < (int)local_110) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,pvVar14);
                _Src = local_118;
              }
              lVar6 = (longlong)(int)uVar16 - (ulonglong)(uVar16 != 0);
              builtin_wcsncpy((wchar_t *)((longlong)_Src + lVar6 * 2),L"CanUseWe",8);
              builtin_wcsncpy((wchar_t *)((longlong)_Src + lVar6 * 2 + 0x10),L"apon is ",8);
              *(undefined8 *)((longlong)_Src + lVar6 * 2 + 0x20) = 0x73006c00610066;
              *(undefined2 *)((longlong)_Src + lVar6 * 2 + 0x28) = 0x65;
              *(undefined2 *)((longlong)_Src + lVar6 * 2 + 0x2a) = 0;
              uVar11 = local_110;
            }
            else if (((*(char *)(local_88 + 0x49) == '\0') && (*(longlong *)(*param_2 + 0x628) != 0)
                     ) && (iVar4 = FUN_142eb7a00(), iVar4 != 0)) {
              local_110 = (0x2e - (uint)(uVar16 != 0)) + uVar16;
              if (iVar12 < (int)local_110) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,pvVar14);
                _Src = local_118;
              }
              lVar6 = (longlong)(int)uVar16 - (ulonglong)(uVar16 != 0);
              builtin_wcsncpy((wchar_t *)((longlong)_Src + lVar6 * 2),L"Moving w",8);
              builtin_wcsncpy((wchar_t *)((longlong)_Src + lVar6 * 2 + 0x10),L"hile Can",8);
              builtin_wcsncpy((wchar_t *)((longlong)_Src + lVar6 * 2 + 0x20),L"UseWeapo",8);
              builtin_wcsncpy((wchar_t *)((longlong)_Src + lVar6 * 2 + 0x30),L"nWhileMo",8);
              builtin_wcsncpy((wchar_t *)((longlong)_Src + lVar6 * 2 + 0x40),L"ving is ",8);
              *(undefined8 *)((longlong)_Src + lVar6 * 2 + 0x50) = 0x73006c00610066;
              *(undefined2 *)((longlong)_Src + lVar6 * 2 + 0x58) = 0x65;
              *(undefined2 *)((longlong)_Src + lVar6 * 2 + 0x5a) = 0;
              uVar11 = local_110;
            }
            else {
              local_80 = *(undefined8 *)(lVar8 + 0x1b8);
              puVar9 = (undefined8 *)FName::ToString(&local_80,local_60);
              local_78 = (void *)*puVar9;
              iVar4 = *(int *)(puVar9 + 1) + -1;
              if (*(int *)(puVar9 + 1) == 0) {
                iVar4 = 0;
              }
              uVar11 = uVar16;
              if (iVar4 != 0) {
                local_110 = iVar4 + (uint)(uVar16 == 0) + uVar16;
                if (iVar12 < (int)local_110) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,pvVar14);
                  _Src = local_118;
                }
                uVar11 = local_110;
                pvVar14 = (void *)((longlong)_Src +
                                  ((longlong)(int)uVar16 - (ulonglong)(uVar16 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar14,local_78,(longlong)iVar4 * 2);
                *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar14) = 0;
              }
              if (local_60[0] != 0) {
                FMemory::Free();
              }
            }
            iVar12 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar12 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar12 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar12);
            }
            puVar9 = (undefined8 *)((longlong)iVar12 * 0x10 + *param_3);
            *puVar9 = 0;
            *(uint *)(puVar9 + 1) = uVar11;
            if (uVar11 == 0) {
              *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar9,uVar11,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar9,_Src,(longlong)(int)uVar11 * 2);
            }
            if (_Src != (void *)0x0) {
              FMemory::Free(_Src);
            }
          }
          if (*(longlong *)(*param_2 + 0x5e0) != 0) {
            FUN_142cec500(*(longlong *)(*param_2 + 0x5e0),&local_70);
            FString::PrintfImpl(&local_b8,L"AimOffset: %0.02f, %0.02f",(double)local_6c,
                                (double)local_70);
            iVar12 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar12 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar12 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar12);
            }
            puVar9 = (undefined8 *)((longlong)iVar12 * 0x10 + *param_3);
            *puVar9 = 0;
            *puVar9 = local_b8;
            local_b8 = 0;
            *(undefined4 *)(puVar9 + 1) = (undefined4)local_b0;
            *(undefined4 *)((longlong)puVar9 + 0xc) = local_b0._4_4_;
            local_b0 = 0;
          }
          fVar19 = *(float *)(lVar8 + 0x1d0) - *(float *)(param_2 + 3);
          if (fVar19 <= 0.0) {
            fVar19 = 0.0;
          }
          FString::PrintfImpl(&local_a8,L"NextBurst: %0.02fs",(double)fVar19);
          iVar12 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar12 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar12 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar12);
          }
          puVar9 = (undefined8 *)((longlong)iVar12 * 0x10 + *param_3);
          *puVar9 = 0;
          *puVar9 = local_a8;
          *(undefined4 *)(puVar9 + 1) = (undefined4)local_a0;
          *(undefined4 *)((longlong)puVar9 + 0xc) = local_a0._4_4_;
          local_a0 = 0;
          local_a8 = 0;
          FString::PrintfImpl(&local_98,L"FireConeAngle: %0.02f degrees",
                              (double)*(float *)(lVar8 + 0x1c0));
          iVar12 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar12 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar12 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar12);
          }
          puVar9 = (undefined8 *)((longlong)iVar12 * 0x10 + *param_3);
          *puVar9 = 0;
          *puVar9 = local_98;
          *(undefined4 *)(puVar9 + 1) = (undefined4)local_90;
          *(undefined4 *)((longlong)puVar9 + 0xc) = local_90._4_4_;
          local_90 = 0;
          local_98 = 0;
          lVar8 = local_e8;
          pcVar18 = local_e0;
        }
      }
      pcVar18 = pcVar18 + 1;
    } while ((longlong)pcVar18 - (longlong)pcVar5 != lVar8);
  }
  return;
}



// FUNCTION 140711ab0 FUN_140711ab0 body=265 status=ok
// SIG undefined FUN_140711ab0(void)

ulonglong FUN_140711ab0(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  float fVar3;
  int local_res8 [2];
  undefined8 local_res10;
  
  uVar1 = FUN_142cc4370(param_1 + 0x100,*(undefined8 *)(*param_2 + 0x568),local_res8);
  if ((char)uVar1 != '\0') {
    local_res10 = *(undefined8 *)(*param_2 + 0x568);
    fVar3 = (float)FUN_142de77e0(param_1 + 0x118,*param_2,0,&local_res10);
    uVar1 = (ulonglong)*(byte *)(param_1 + 0x111);
    iVar2 = (int)ROUND(fVar3 * 2.0 + 0.5) >> 1;
    switch(uVar1) {
    case 0:
      return (ulonglong)(local_res8[0] == iVar2);
    case 1:
      return (ulonglong)(local_res8[0] != iVar2);
    case 2:
      return (ulonglong)(local_res8[0] < iVar2);
    case 3:
      return (ulonglong)(local_res8[0] <= iVar2);
    case 4:
      return (ulonglong)(iVar2 < local_res8[0]);
    case 5:
      return (ulonglong)(iVar2 <= local_res8[0]);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 140711be0 FUN_140711be0 body=720 status=ok
// SIG undefined FUN_140711be0(void)

undefined8 FUN_140711be0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res8;
  float local_58;
  float fStack_54;
  float local_50;
  undefined8 local_48;
  float local_40;
  float local_30;
  
  lVar4 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  iVar2 = FUN_140755990(lVar4 + 0x138);
  if (iVar2 == 0) {
    lVar4 = param_2[1] + *(longlong *)(param_1 + 0xd8);
    FWeakObjectPtr::operator=(&local_res8,0);
    *(undefined4 *)(lVar4 + 0x58) = (undefined4)local_res8;
    *(undefined4 *)(lVar4 + 0x5c) = local_res8._4_4_;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        uVar3 = FWeakObjectPtr::Get(lVar4 + 0x48);
        FUN_14076de30(param_3,uVar3);
        uVar3 = FWeakObjectPtr::Get(lVar4 + 0x48);
        FUN_14076de60(param_3,uVar3);
        uVar3 = FUN_14075e290(lVar4 + 0x138);
        return uVar3;
      }
      if (iVar2 != 3) {
        if (iVar2 != 4) {
          return 0;
        }
        lVar5 = param_2[1] + *(longlong *)(param_1 + 0xd8);
        lVar4 = FWeakObjectPtr::Get(lVar5 + 0x58);
        if (lVar4 != 0) {
          FUN_142cbcc90(param_1 + 0x150,*(undefined8 *)(*param_2 + 0x568));
          FUN_142cbcc90(param_1 + 0x160,*(undefined8 *)(*param_2 + 0x568));
          FUN_142cbcc90(param_1 + 0x170,*(undefined8 *)(*param_2 + 0x568));
          *(undefined4 *)(lVar5 + 0x29c) = 3;
          local_res8 = lVar5 + 0x138;
          local_58 = *(float *)(lVar4 + 0x220);
          fStack_54 = *(float *)(lVar4 + 0x224);
          local_50 = *(float *)(lVar4 + 0x228);
          FUN_14076b860(local_res8,&local_58);
          cVar1 = FUN_1407144b0(param_1,param_2);
          if (cVar1 == '\0') {
            local_48 = CONCAT44(fStack_54,local_58);
            local_40 = local_50;
            cVar1 = FUN_140707b20(param_1,param_2,&local_48,&local_58,*(undefined4 *)(lVar4 + 0x6fc)
                                 );
            FUN_14076b860(local_res8,&local_58);
            if (cVar1 == '\0') {
              local_40 = DAT_1464aa7a0 * 5.0 + local_50;
              local_48 = CONCAT44(DAT_1464aa798._4_4_ * 5.0 + fStack_54,
                                  (float)DAT_1464aa798 * 5.0 + local_58);
              local_30 = local_40;
              FUN_142cd0df0(param_1 + 0x170,*(undefined8 *)(*param_2 + 0x568),&local_48);
              return param_4;
            }
            local_48 = CONCAT44(fStack_54,local_58);
            local_40 = local_50;
            FUN_142cd0df0(param_1 + 0x150,*(undefined8 *)(*param_2 + 0x568),&local_48);
            FUN_142cd0820(param_1 + 0x160,*(undefined8 *)(*param_2 + 0x568),
                          *(undefined4 *)(lVar4 + 0x704));
            return param_4;
          }
        }
        FUN_14070c610(param_1,param_2);
        return param_4;
      }
    }
    FUN_140712fa0(param_1,param_2);
  }
  return 0;
}



// FUNCTION 140711eb0 FUN_140711eb0 body=17 status=ok
// SIG undefined FUN_140711eb0(void)

undefined4 FUN_140711eb0(longlong param_1,longlong param_2)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0x48 + *(longlong *)(param_2 + 8));
}



// FUNCTION 140711ee0 FUN_140711ee0 body=43 status=ok
// SIG undefined FUN_140711ee0(void)

undefined8 FUN_140711ee0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0xd8) + 0x50 + *(longlong *)(param_2 + 8));
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x150))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar1 * 8);
  }
  return 0;
}



// FUNCTION 140711f10 FUN_140711f10 body=718 status=ok
// SIG undefined FUN_140711f10(void)

undefined8 ** FUN_140711f10(longlong *param_1,undefined8 **param_2)

{
  void *_Dst;
  void *_Src;
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  undefined8 local_res8;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  int local_30;
  
  *param_2 = (undefined8 *)0x0;
  param_2[1] = (undefined8 *)0x0;
  iVar7 = 0;
  if ((char)param_1[3] == '\0') {
    if ((char)param_1[6] == '\0') {
      if ((char)param_1[1] == '\0') {
        return param_2;
      }
      if (*param_1 != 0) {
        lVar5 = FUN_142e20fc0();
        lVar6 = *param_1;
        for (lVar1 = lVar6; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          if (lVar1 == lVar5) {
            if (lVar6 != 0) {
              local_res8 = *(undefined8 *)(lVar6 + 0x18);
              FName::ToString(&local_res8,&local_48);
              goto LAB_14071218b;
            }
            break;
          }
        }
      }
      local_48 = (undefined8 *)0x0;
      local_40 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,&DAT_143f3edc8,10);
LAB_14071218b:
      FString::operator=(param_2,&local_48);
      local_38 = local_48;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,5);
      iVar2 = *(int *)(param_2 + 1);
      *(int *)(param_2 + 1) = iVar2 + 5;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      puVar4 = *param_2;
      *puVar4 = 0x20003a00420042;
      *(undefined2 *)(puVar4 + 1) = 0;
      if ((char)param_1[5] != '\0') {
        iVar7 = *(int *)(param_2 + 1);
        iVar2 = (10 - (uint)(iVar7 != 0)) + iVar7;
        *(int *)(param_2 + 1) = iVar2;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
        }
        lVar6 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
        puVar4 = *param_2;
        builtin_wcsncpy((wchar_t *)((longlong)puVar4 + lVar6 * 2),L"[runtime",8);
        *(undefined2 *)((longlong)puVar4 + lVar6 * 2 + 0x10) = 0x5d;
        *(undefined2 *)((longlong)puVar4 + lVar6 * 2 + 0x12) = 0;
        return param_2;
      }
      puVar4 = (undefined8 *)FName::ToString(param_1 + 4,&local_38);
      _Src = (void *)*puVar4;
      iVar2 = *(int *)(puVar4 + 1) + -1;
      if (*(int *)(puVar4 + 1) == 0) {
        iVar2 = iVar7;
      }
      if (iVar2 != 0) {
        iVar7 = *(int *)(param_2 + 1);
        iVar3 = (uint)(iVar7 == 0) + iVar7 + iVar2;
        *(int *)(param_2 + 1) = iVar3;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
        }
        _Dst = (void *)((longlong)*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar2 * 2);
        *(undefined2 *)((longlong)iVar2 * 2 + (longlong)_Dst) = 0;
      }
    }
  }
  else {
    FName::ToString(param_1 + 2,&local_38);
    iVar2 = local_30 + -1;
    if (local_30 == 0) {
      iVar2 = iVar7;
    }
    uVar8 = iVar2 + 6;
    local_48 = (undefined8 *)0x0;
    local_40 = (ulonglong)uVar8;
    if (0 < (int)uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      uVar8 = (uint)local_40;
      iVar7 = local_40._4_4_;
    }
    puVar4 = local_48;
    *local_48 = 0x3a00790065004b;
    *(undefined2 *)(local_48 + 1) = 0x20;
    _guard_xfg_dispatch_icall_nop((void *)((longlong)local_48 + 10),local_38,(longlong)iVar2 * 2);
    *(undefined2 *)((longlong)puVar4 + (longlong)iVar2 * 2 + 10) = 0;
    if (param_2 == &local_48) {
      if (puVar4 != (undefined8 *)0x0) {
        FMemory::Free(puVar4);
      }
    }
    else {
      if (*param_2 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      *param_2 = puVar4;
      *(uint *)(param_2 + 1) = uVar8;
      *(int *)((longlong)param_2 + 0xc) = iVar7;
    }
  }
  if (local_38 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1407121e0 FUN_1407121e0 body=305 status=ok
// SIG undefined FUN_1407121e0(void)

longlong * FUN_1407121e0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_res8;
  longlong local_28;
  int local_20;
  int local_1c;
  
  plVar3 = *(longlong **)(param_1 + 0x108);
  plVar1 = plVar3 + *(int *)(param_1 + 0x110);
  do {
    if (plVar3 == plVar1) {
      if (*(longlong *)(param_1 + 0x148) == 0) {
        *param_2 = 0;
        param_2[1] = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
        FGenericPlatformString::Memcpy(*param_2,&DAT_143f3edc8,10);
      }
      else {
        local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x18);
        FName::ToString(&local_res8,param_2);
      }
      return param_2;
    }
    plVar2 = (longlong *)*plVar3;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x388))(plVar2,&local_28,param_3);
      if (1 < local_20) {
        iVar4 = local_20 + -1;
        if (local_20 < 1) {
          iVar4 = 0;
        }
        local_20 = (local_20 < 1) + 1 + local_20;
        if (local_1c < local_20) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
        }
        *(undefined2 *)(local_28 + (longlong)iVar4 * 2) = 0x2a;
        *(undefined2 *)(local_28 + 2 + (longlong)iVar4 * 2) = 0;
        *param_2 = local_28;
        *(int *)(param_2 + 1) = local_20;
        *(int *)((longlong)param_2 + 0xc) = local_1c;
        return param_2;
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
    }
    plVar3 = plVar3 + 1;
  } while( true );
}



// FUNCTION 140712320 FUN_140712320 body=1454 status=ok
// SIG undefined FUN_140712320(void)

longlong * FUN_140712320(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  void *_Dst;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  void *_Src;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;
  undefined8 local_res8;
  void *local_58;
  undefined8 local_50;
  
  plVar12 = (longlong *)param_1[0x21];
  plVar15 = (longlong *)0x0;
  plVar1 = plVar12 + (int)param_1[0x22];
  for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
    plVar2 = (longlong *)*plVar12;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x388))(plVar2,&local_58,param_3);
      if (1 < (int)local_50) {
        iVar7 = (int)local_50 + -1;
        if ((int)local_50 < 1) {
          iVar7 = 0;
        }
        iVar8 = ((int)local_50 < 1) + 1 + (int)local_50;
        local_50 = CONCAT44(local_50._4_4_,iVar8);
        if (local_50._4_4_ < iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
        }
        *(undefined2 *)((longlong)local_58 + (longlong)iVar7 * 2) = 0x2a;
        *(undefined2 *)((longlong)local_58 + (longlong)iVar7 * 2 + 2) = 0;
        *param_2 = (longlong)local_58;
        *(int *)(param_2 + 1) = (int)local_50;
        *(int *)((longlong)param_2 + 0xc) = local_50._4_4_;
        goto LAB_140712447;
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (param_1[0x29] == 0) {
    *param_2 = 0;
    param_2[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,&DAT_143f3edc8,10);
  }
  else {
    local_res8 = *(undefined8 *)(param_1[0x29] + 0x18);
    FName::ToString(&local_res8,param_2);
  }
LAB_140712447:
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar15 = (longlong *)param_1[4];
  }
  if (plVar15 != (longlong *)0x0) {
    plVar12 = (longlong *)plVar15[0x29];
    fVar17 = 0.0;
    plVar1 = plVar12 + (int)plVar15[0x2a];
    for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
      lVar3 = *plVar12;
      if (lVar3 != 0) {
        lVar9 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
        lVar3 = *(longlong *)(lVar3 + 0x10);
        if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
            lVar9 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) break;
      }
    }
    lVar3 = plVar15[0x29];
    lVar9 = plVar15[0x2a];
joined_r0x0001407124ef:
    if (plVar12 != (longlong *)(lVar3 + (longlong)(int)lVar9 * 8)) {
      plVar2 = (longlong *)*plVar12;
      cVar6 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
      if (cVar6 != '\0') {
        if (param_3 == 0) {
          fVar16 = *(float *)(plVar2 + 0x2b);
        }
        else {
          fVar16 = (float)(**(code **)(*plVar15 + 0x400))(plVar15,plVar2,param_3);
        }
        fVar17 = fVar17 + fVar16;
      }
      do {
        do {
          plVar12 = plVar12 + 1;
          if (plVar12 == plVar1) goto joined_r0x0001407124ef;
          lVar4 = *plVar12;
        } while (lVar4 == 0);
        lVar10 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
        lVar4 = *(longlong *)(lVar4 + 0x10);
        if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
            lVar10 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
      } while (!bVar5);
      goto joined_r0x0001407124ef;
    }
    if (param_3 == 0) {
      fVar16 = *(float *)(param_1 + 0x2b);
    }
    else {
      fVar16 = (float)(**(code **)(*plVar15 + 0x400))(plVar15,param_1,param_3);
    }
    cVar6 = (**(code **)(*param_1 + 0x2d0))(param_1);
    if ((cVar6 == '\0') ||
       (iVar7 = (int)ROUND(fVar16 * (1.0 / fVar17) * 200.0 + 0.5) >> 1, iVar7 < 0)) {
      iVar8 = 0;
    }
    else {
      iVar8 = 100;
      if (iVar7 < 100) {
        iVar8 = iVar7;
      }
    }
    iVar14 = 0;
    iVar7 = (int)param_2[1];
    iVar11 = 0;
    iVar13 = iVar7 + -1;
    if (iVar7 < 1) {
      iVar13 = iVar14;
    }
    iVar7 = (iVar7 < 1) + 1 + iVar7;
    *(int *)(param_2 + 1) = iVar7;
    if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    *(undefined2 *)(*param_2 + (longlong)iVar13 * 2) = 0x3a;
    *(undefined2 *)(*param_2 + 2 + (longlong)iVar13 * 2) = 0;
    iVar7 = (int)param_2[1];
    iVar13 = iVar7 + -1;
    if (iVar7 < 1) {
      iVar13 = iVar14;
    }
    iVar7 = (iVar7 < 1) + 1 + iVar7;
    *(int *)(param_2 + 1) = iVar7;
    if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    *(undefined2 *)(*param_2 + (longlong)iVar13 * 2) = 0x20;
    *(undefined2 *)(*param_2 + 2 + (longlong)iVar13 * 2) = 0;
    if (iVar8 < 100) {
      iVar7 = (int)param_2[1];
      iVar13 = iVar7 + -1;
      if (iVar7 < 1) {
        iVar13 = iVar14;
      }
      iVar7 = (iVar7 < 1) + 1 + iVar7;
      *(int *)(param_2 + 1) = iVar7;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      *(undefined2 *)(*param_2 + (longlong)iVar13 * 2) = 0x20;
      *(undefined2 *)(*param_2 + 2 + (longlong)iVar13 * 2) = 0;
      iVar7 = (int)param_2[1];
      iVar13 = iVar7 + -1;
      if (iVar7 < 1) {
        iVar13 = iVar14;
      }
      iVar7 = (iVar7 < 1) + 1 + iVar7;
      *(int *)(param_2 + 1) = iVar7;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      *(undefined2 *)(*param_2 + (longlong)iVar13 * 2) = 0x20;
      *(undefined2 *)(*param_2 + 2 + (longlong)iVar13 * 2) = 0;
      if (iVar8 < 10) {
        iVar7 = (int)param_2[1];
        iVar13 = iVar7 + -1;
        if (iVar7 < 1) {
          iVar13 = iVar14;
        }
        iVar7 = (iVar7 < 1) + 1 + iVar7;
        *(int *)(param_2 + 1) = iVar7;
        if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
        }
        *(undefined2 *)(*param_2 + (longlong)iVar13 * 2) = 0x20;
        *(undefined2 *)(*param_2 + 2 + (longlong)iVar13 * 2) = 0;
        iVar7 = (int)param_2[1];
        iVar13 = iVar7 + -1;
        if (iVar7 < 1) {
          iVar13 = iVar14;
        }
        iVar7 = (iVar7 < 1) + 1 + iVar7;
        *(int *)(param_2 + 1) = iVar7;
        if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
        }
        *(undefined2 *)(*param_2 + (longlong)iVar13 * 2) = 0x20;
        *(undefined2 *)(*param_2 + 2 + (longlong)iVar13 * 2) = 0;
        iVar7 = (int)param_2[1];
        iVar13 = iVar7 + -1;
        if (iVar7 < 1) {
          iVar13 = iVar14;
        }
        iVar7 = (iVar7 < 1) + 1 + iVar7;
        *(int *)(param_2 + 1) = iVar7;
        if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
        }
        *(undefined2 *)(*param_2 + (longlong)iVar13 * 2) = 0x20;
        *(undefined2 *)(*param_2 + 2 + (longlong)iVar13 * 2) = 0;
      }
    }
    local_58 = (void *)0x0;
    local_50 = 0;
    FString::AppendInt(&local_58,iVar8);
    _Src = local_58;
    if ((int)local_50 != 0) {
      iVar11 = (int)local_50 + -1;
    }
    if (iVar11 != 0) {
      iVar7 = (int)param_2[1];
      iVar8 = (uint)(iVar7 == 0) + iVar11 + iVar7;
      *(int *)(param_2 + 1) = iVar8;
      if (*(int *)((longlong)param_2 + 0xc) < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
      }
      _Dst = (void *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar11 * 2);
      *(undefined2 *)((longlong)iVar11 * 2 + (longlong)_Dst) = 0;
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    iVar7 = (int)param_2[1];
    iVar8 = iVar7 + -1;
    if (iVar7 < 1) {
      iVar8 = iVar14;
    }
    iVar7 = (iVar7 < 1) + 1 + iVar7;
    *(int *)(param_2 + 1) = iVar7;
    if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    *(undefined2 *)(*param_2 + (longlong)iVar8 * 2) = 0x25;
    *(undefined2 *)(*param_2 + 2 + (longlong)iVar8 * 2) = 0;
  }
  return param_2;
}



// FUNCTION 1407128d0 GetDefaultEventAttribute body=30 status=ok
// SIG undefined GetDefaultEventAttribute(void)

undefined8 FAnalyticsProviderET::GetDefaultEventAttribute(longlong param_1,undefined8 param_2)

{
  FUN_140711f10(param_1 + 0x100);
  return param_2;
}



// FUNCTION 1407128f0 FUN_1407128f0 body=258 status=ok
// SIG undefined FUN_1407128f0(void)

undefined8 FUN_1407128f0(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  undefined8 local_res8 [4];
  undefined2 *local_18;
  undefined8 local_10;
  
  puVar2 = *(undefined2 **)(param_1 + 0x100);
  if (*(char *)(param_1 + 0x108) == '\0') {
    if (puVar2 == (undefined2 *)0x0) {
      local_10 = 5;
      local_18 = puVar2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      FGenericPlatformString::Memcpy(local_18,&DAT_143f3edc8,10);
    }
    else {
      local_res8[0] = *(undefined8 *)(puVar2 + 0xc);
      FName::ToString(local_res8,&local_18);
    }
    pwVar1 = L"%s)";
  }
  else if (puVar2 == (undefined2 *)0x0) {
    local_10 = 5;
    local_18 = puVar2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,&DAT_143f3edc8,10);
    pwVar1 = L"%s (override blueprint)";
  }
  else {
    local_res8[0] = *(undefined8 *)(puVar2 + 0xc);
    FName::ToString(local_res8,&local_18);
    pwVar1 = L"%s (override blueprint)";
  }
  puVar2 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar2 = local_18;
  }
  FString::PrintfImpl(param_2,pwVar1,puVar2);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140712a00 FUN_140712a00 body=237 status=ok
// SIG undefined FUN_140712a00(void)

undefined8 FUN_140712a00(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 local_res8;
  undefined2 *local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FUN_142de9d00(param_1 + 0x108,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  puVar3 = *(undefined2 **)(param_1 + 0x208);
  if (puVar3 == (undefined2 *)0x0) {
    local_20 = 5;
    local_28 = puVar3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,&DAT_143f3edc8,10);
  }
  else {
    local_res8 = *(undefined8 *)(puVar3 + 0xc);
    FName::ToString(&local_res8,&local_28);
  }
  puVar3 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar3 = local_28;
  }
  FString::PrintfImpl(param_2,L"%s (%s)",puVar3,puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140712af0 FUN_140712af0 body=210 status=ok
// SIG undefined FUN_140712af0(void)

float FUN_140712af0(undefined1 *param_1,undefined8 param_2,char param_3,undefined8 param_4,
                   float param_5)

{
  char cVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  *param_1 = 0;
  uVar2 = FUN_1423ac1f0(param_2,param_4);
  fVar3 = (float)FUN_1423ae500(param_2,uVar2);
  if (param_3 != '\0') {
    param_5 = -param_5;
  }
  fVar3 = fVar3 + param_5;
  fVar4 = (float)FUN_1423b1370(param_2);
  if (param_3 == '\0') {
    if (fVar4 < fVar3) {
      cVar1 = UIndianaGameUserSettings::GetShowEnemyHealthBars(param_2);
      if (cVar1 == '\0') {
        *param_1 = 1;
        fVar3 = fVar4;
      }
      else {
        fVar3 = fVar3 - fVar4;
      }
    }
  }
  else if (fVar3 < 0.0) {
    cVar1 = UIndianaGameUserSettings::GetShowEnemyHealthBars(param_2);
    if (cVar1 == '\0') {
      *param_1 = 1;
      fVar3 = 0.0;
    }
    else {
      fVar3 = fVar3 + fVar4;
    }
  }
  return fVar3;
}



// FUNCTION 140712bd0 FUN_140712bd0 body=178 status=ok
// SIG undefined FUN_140712bd0(void)

float * FUN_140712bd0(float *param_1,undefined8 param_2,char param_3,undefined4 param_4,
                     float param_5)

{
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  
  FUN_1423aee90(param_2,&local_28,param_4,1);
  FUN_1423afc10(param_2,&local_38,param_4,1);
  if (param_3 != '\0') {
    param_5 = -param_5;
  }
  *param_1 = param_5 * local_38 + local_28;
  param_1[1] = param_5 * local_34 + local_24;
  param_1[2] = param_5 * local_30 + local_20;
  return param_1;
}



// FUNCTION 140712c90 FUN_140712c90 body=175 status=ok
// SIG undefined FUN_140712c90(void)

void FUN_140712c90(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  FUN_1406ed2d0();
  plVar3 = *(longlong **)(param_1 + 0x148);
  uVar2 = 0;
  uVar4 = (longlong)*(int *)(param_1 + 0x150) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x150) < plVar3) {
    uVar4 = uVar2;
  }
  if (uVar4 != 0) {
    do {
      plVar1 = (longlong *)*plVar3;
      if ((plVar1 != (longlong *)0x0) &&
         ((byte)(*(char *)(plVar1[0x1b] + 0x28 + *(longlong *)(param_2 + 8)) - 1U) < 2)) {
        (**(code **)(*plVar1 + 0x358))(plVar1,param_2,param_3,1);
      }
      plVar3 = plVar3 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar4);
  }
  return;
}



// FUNCTION 140712d40 FUN_140712d40 body=75 status=ok
// SIG undefined FUN_140712d40(void)

void FUN_140712d40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  FUN_1406ed2d0();
  plVar1 = *(longlong **)(param_1 + 0x148);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x358))(plVar1,param_2,param_3,1);
  }
  return;
}



// FUNCTION 140712d90 FUN_140712d90 body=87 status=ok
// SIG undefined FUN_140712d90(void)

undefined8 FUN_140712d90(longlong param_1,longlong *param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  if (((*(char *)(param_1 + 0x120) != '\0') && (*(longlong *)(param_1 + 0x108) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x108) + 0x130) != '\0')) {
    FUN_142cc3a70(param_1 + 0x110,*(undefined8 *)(*param_2 + 0x568),local_res8);
    return local_res8[0];
  }
  return 0;
}



// FUNCTION 140712e50 FUN_140712e50 body=103 status=ok
// SIG undefined FUN_140712e50(void)

undefined8 FUN_140712e50(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *local_res10 [3];
  
  if (*(longlong *)(*param_2 + 0x568) != 0) {
    local_res10[0] = (longlong *)0x0;
    cVar1 = FUN_142cc3a70(param_1 + 0x100,*(longlong *)(*param_2 + 0x568),local_res10);
    if ((cVar1 != '\0') && (local_res10[0] != (longlong *)0x0)) {
      plVar2 = (longlong *)(**(code **)(*local_res10[0] + 0x678))();
      if (plVar2 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar2 + 0x780))(plVar2);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140712ec0 FUN_140712ec0 body=223 status=ok
// SIG undefined FUN_140712ec0(void)

undefined1 FUN_140712ec0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(*param_2 + 0x628);
  if (lVar1 == 0) {
    return 0;
  }
  FUN_142faaf90(lVar1 + 0x930);
  cVar2 = FUN_142fb0960(param_3 + 0x68);
  if (cVar2 != '\0') {
    cVar2 = FUN_142fa8a40(param_3);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = FUN_1407c3030(param_3);
    if (cVar2 != '\0') {
      return 0;
    }
    cVar2 = FUN_142fa58d0(param_3);
    if (cVar2 == '\0') {
      if ((*(char *)(param_1[0x1b] + 0x28 + param_2[1]) != '\x02') &&
         (*(char *)((longlong)param_1 + 0x234) == '\0')) {
        return 0;
      }
    }
    else {
      cVar2 = (**(code **)(*param_1 + 0x3b0))(param_1,param_2,param_3);
      if ((cVar2 == '\0') && (cVar2 = FUN_142f959c0(lVar1 + 0x9e8,param_3 + 0x20), cVar2 != '\x01'))
      {
        if (cVar2 != '\x02') {
          return 0;
        }
        return *(undefined1 *)((longlong)param_1 + 0x234);
      }
    }
  }
  return 1;
}



// FUNCTION 140712fa0 FUN_140712fa0 body=192 status=ok
// SIG undefined FUN_140712fa0(void)

void FUN_140712fa0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_18 [16];
  
  lVar3 = param_2[1] + *(longlong *)(param_1 + 0xd8);
  *(undefined4 *)(lVar3 + 0x29c) = 0;
  lVar1 = FWeakObjectPtr::Get(lVar3 + 0x48);
  uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x458) + 0x18))((longlong *)(lVar1 + 0x458),local_18);
  FUN_14076b860(lVar3 + 0x1a8,uVar2);
  FUN_14076b320(param_2[1] + *(longlong *)(param_1 + 0xd8) + 0x138,1);
  FUN_142cbcc90(param_1 + 0x150,*(undefined8 *)(*param_2 + 0x568));
  FUN_142cbcc90(param_1 + 0x160,*(undefined8 *)(*param_2 + 0x568));
  FUN_142cbcc90(param_1 + 0x170,*(undefined8 *)(*param_2 + 0x568));
  return;
}



// FUNCTION 140713060 FUN_140713060 body=168 status=ok
// SIG undefined FUN_140713060(void)

void FUN_140713060(longlong param_1)

{
  void *_Dst;
  longlong *plVar1;
  void *_Src;
  
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    for (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x58); plVar1 != (longlong *)0x0;
        plVar1 = (longlong *)plVar1[10]) {
      if (((*(byte *)(plVar1 + 7) & 1) != 0) && ((plVar1[7] & 0x8000022000U) == 0)) {
        _Src = (void *)(*(longlong *)(param_1 + 0xe8) + (longlong)*(int *)((longlong)plVar1 + 0x44))
        ;
        _Dst = (void *)(*(int *)((longlong)plVar1 + 0x44) + param_1);
        if (_Dst != _Src) {
          if (((ulonglong)plVar1[7] >> 0x1e & 1) == 0) {
            (**(code **)(*plVar1 + 0x2e8))(plVar1,_Dst,_Src,(int)plVar1[6]);
          }
          else {
            _guard_xfg_dispatch_icall_nop
                      (_Dst,_Src,(longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]));
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140713110 FUN_140713110 body=129 status=ok
// SIG undefined FUN_140713110(void)

void FUN_140713110(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_1406ee000();
  plVar1 = *(longlong **)(param_1 + 0x148);
  uVar3 = 0;
  uVar2 = (longlong)*(int *)(param_1 + 0x150) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x150) < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_1406e7a20(*plVar1,param_2);
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 1407131a0 FUN_1407131a0 body=52 status=ok
// SIG undefined FUN_1407131a0(void)

void FUN_1407131a0(longlong param_1,undefined8 param_2)

{
  FUN_1406ee000();
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1406e7a20(*(longlong *)(param_1 + 0x148),param_2);
  }
  return;
}



// FUNCTION 1407131e0 FUN_1407131e0 body=91 status=ok
// SIG undefined FUN_1407131e0(void)

void FUN_1407131e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar1 = *(longlong *)(param_1 + 0xd8);
  lVar2 = param_2[1];
  plVar3 = *(longlong **)(*param_2 + 0x488);
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_1407a6820();
    uVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    FWeakObjectPtr::operator=(lVar1 + lVar2 + 0x4c,uVar4);
  }
  return;
}



// FUNCTION 140713240 FUN_140713240 body=152 status=ok
// SIG undefined FUN_140713240(void)

void FUN_140713240(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar1 = *(longlong *)(param_1 + 0xd8);
  lVar2 = param_2[1];
  lVar4 = (**(code **)(*(longlong *)*param_2 + 0x678))();
  if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x4c8), lVar4 != 0)) {
    lVar5 = FUN_142e39920();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1407132ba;
  }
  lVar4 = 0;
LAB_1407132ba:
  FWeakObjectPtr::operator=(lVar1 + lVar2 + 300,lVar4);
  return;
}



// FUNCTION 1407132e0 FUN_1407132e0 body=94 status=ok
// SIG undefined FUN_1407132e0(void)

void FUN_1407132e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  FUN_1406ef270();
  lVar1 = *(longlong *)(param_1 + 0xd8);
  lVar2 = param_2[1];
  plVar3 = *(longlong **)(*param_2 + 0x488);
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_1407a6820();
    uVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    FWeakObjectPtr::operator=(lVar1 + lVar2 + 0x2a0,uVar4);
  }
  return;
}



// FUNCTION 140713340 FUN_140713340 body=149 status=ok
// SIG undefined FUN_140713340(void)

void FUN_140713340(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar1 = *(longlong *)(param_1 + 0xd8);
  lVar2 = param_2[1];
  lVar4 = (**(code **)(*(longlong *)*param_2 + 0x678))();
  if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x4c8), lVar4 != 0)) {
    lVar5 = FUN_142e39920();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1407133ba;
  }
  lVar4 = 0;
LAB_1407133ba:
  FWeakObjectPtr::operator=(lVar1 + lVar2 + 100,lVar4);
  return;
}


