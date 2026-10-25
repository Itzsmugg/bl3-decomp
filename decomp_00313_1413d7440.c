// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1413d7440 FUN_1413d7440 body=49 status=ok
// SIG undefined FUN_1413d7440(void)

void FUN_1413d7440(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x520);
  FUN_1413d1720(param_2);
  *param_2 = &PTR_FUN_1449c0c10;
  return;
}



// FUNCTION 1413d7480 FUN_1413d7480 body=33 status=ok
// SIG undefined FUN_1413d7480(void)

void FUN_1413d7480(undefined8 param_1,undefined8 *param_2)

{
  FUN_1413d1720(param_2);
  *param_2 = &PTR_FUN_1449c1448;
  return;
}



// FUNCTION 1413d74b0 FUN_1413d74b0 body=33 status=ok
// SIG undefined FUN_1413d74b0(void)

void FUN_1413d74b0(undefined8 param_1,undefined8 *param_2)

{
  FUN_1413d1720(param_2);
  *param_2 = &PTR_FUN_1449c16b8;
  return;
}



// FUNCTION 1413d74e0 FUN_1413d74e0 body=44 status=ok
// SIG undefined FUN_1413d74e0(void)

void FUN_1413d74e0(undefined8 param_1,undefined8 *param_2)

{
  FUN_1413d1720(param_2);
  param_2[0xa4] = 0;
  *param_2 = &PTR_FUN_1449c1928;
  return;
}



// FUNCTION 1413d7510 FUN_1413d7510 body=44 status=ok
// SIG undefined FUN_1413d7510(void)

void FUN_1413d7510(undefined8 param_1,undefined8 *param_2)

{
  FUN_142c62180(param_2);
  param_2[0x19] = 0;
  *param_2 = &PTR__scalar_deleting_destructor__1449c2458;
  return;
}



// FUNCTION 1413d7540 FUN_1413d7540 body=49 status=ok
// SIG undefined FUN_1413d7540(void)

void FUN_1413d7540(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x520);
  FUN_1413d1720(param_2);
  *param_2 = &PTR_FUN_1449c2610;
  return;
}



// FUNCTION 1413d7580 FUN_1413d7580 body=49 status=ok
// SIG undefined FUN_1413d7580(void)

void FUN_1413d7580(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,200);
  FUN_142c62180(param_2);
  *param_2 = &PTR_FUN_1449c2880;
  return;
}



// FUNCTION 1413d75c0 FUN_1413d75c0 body=56 status=ok
// SIG undefined FUN_1413d75c0(void)

void FUN_1413d75c0(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0xd0);
  FUN_142c62180(param_2);
  *(undefined1 *)(param_2 + 0x19) = 0;
  *param_2 = &PTR__scalar_deleting_destructor__1449c2af0;
  return;
}



// FUNCTION 1413d7610 FUN_1413d7610 body=38 status=ok
// SIG undefined FUN_1413d7610(void)

void FUN_1413d7610(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x570);
  FUN_1413d6640(param_2);
  return;
}



// FUNCTION 1413d7640 FUN_1413d7640 body=49 status=ok
// SIG undefined FUN_1413d7640(void)

void FUN_1413d7640(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x520);
  FUN_1413d1720(param_2);
  *param_2 = &PTR_FUN_1449c3460;
  return;
}



// FUNCTION 1413d7690 FUN_1413d7690 body=49 status=ok
// SIG undefined FUN_1413d7690(void)

void FUN_1413d7690(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x520);
  FUN_1413d1720(param_2);
  *param_2 = &PTR_FUN_1449c11d8;
  return;
}



// FUNCTION 1413d76d0 FUN_1413d76d0 body=38 status=ok
// SIG undefined FUN_1413d76d0(void)

void FUN_1413d76d0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x1c0);
  FUN_1413d67a0(param_2);
  return;
}



// FUNCTION 1413d7700 FUN_1413d7700 body=49 status=ok
// SIG undefined FUN_1413d7700(void)

void FUN_1413d7700(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x1c0);
  FUN_1413d67a0(param_2);
  *param_2 = &PTR__scalar_deleting_destructor__1449c2270;
  return;
}



// FUNCTION 1413d7780 FUN_1413d7780 body=89 status=ok
// SIG undefined FUN_1413d7780(void)

undefined8 FUN_1413d7780(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FUN_1413d18a0(param_2,param_3 + param_2);
      *(undefined8 *)(param_2 + 0x520) = *(undefined8 *)(param_3 + 0x520 + param_2);
      param_2 = param_2 + 0x528;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413d77e0 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FAnimNode_BlendByAnimTags>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1407af350(param_2 + param_3,param_3);
      param_3 = param_3 + 200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413d7830 Copy body=88 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAnimNode_BlendListByBool>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FUN_1407af350(param_2,param_3 + param_2);
      *(undefined1 *)(param_2 + 200) = *(undefined1 *)(param_3 + 200 + param_2);
      param_2 = param_2 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413d7890 FUN_1413d7890 body=277 status=ok
// SIG undefined FUN_1413d7890(void)

undefined8 FUN_1413d7890(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar3 = (undefined8 *)(param_2 + 0x46c);
    do {
      FUN_1407af670((longlong)puVar3 + -0x46c,param_3 + -0x46c + (longlong)puVar3);
      *(undefined1 *)((longlong)puVar3 + -4) = *(undefined1 *)((longlong)puVar3 + param_3 + -4);
      *puVar3 = *(undefined8 *)((longlong)puVar3 + param_3);
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)((longlong)puVar3 + param_3 + 8);
      puVar1 = (undefined8 *)((longlong)puVar3 + param_3 + 0xc);
      uVar2 = puVar1[1];
      *(undefined8 *)((longlong)puVar3 + 0xc) = *puVar1;
      *(undefined8 *)((longlong)puVar3 + 0x14) = uVar2;
      puVar1 = (undefined8 *)((longlong)puVar3 + param_3 + 0x1c);
      uVar2 = puVar1[1];
      *(undefined8 *)((longlong)puVar3 + 0x1c) = *puVar1;
      *(undefined8 *)((longlong)puVar3 + 0x24) = uVar2;
      *(undefined8 *)((longlong)puVar3 + 0x2c) = *(undefined8 *)((longlong)puVar3 + param_3 + 0x2c);
      *(undefined8 *)((longlong)puVar3 + 0x34) = *(undefined8 *)((longlong)puVar3 + param_3 + 0x34);
      *(undefined4 *)((longlong)puVar3 + 0x3c) = *(undefined4 *)((longlong)puVar3 + param_3 + 0x3c);
      *(undefined4 *)(puVar3 + 8) = *(undefined4 *)((longlong)puVar3 + param_3 + 0x40);
      *(undefined4 *)((longlong)puVar3 + 0x44) = *(undefined4 *)((longlong)puVar3 + param_3 + 0x44);
      *(undefined4 *)(puVar3 + 9) = *(undefined4 *)((longlong)puVar3 + param_3 + 0x48);
      *(undefined4 *)((longlong)puVar3 + 0x4c) = *(undefined4 *)((longlong)puVar3 + param_3 + 0x4c);
      puVar3[10] = *(undefined8 *)((longlong)puVar3 + param_3 + 0x50);
      *(undefined4 *)(puVar3 + 0xb) = *(undefined4 *)((longlong)puVar3 + param_3 + 0x58);
      *(undefined4 *)((longlong)puVar3 + 0x5c) = *(undefined4 *)((longlong)puVar3 + param_3 + 0x5c);
      *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)((longlong)puVar3 + param_3 + 0x60);
      *(undefined4 *)((longlong)puVar3 + 100) = *(undefined4 *)((longlong)puVar3 + param_3 + 100);
      *(undefined4 *)(puVar3 + 0xd) = *(undefined4 *)((longlong)puVar3 + param_3 + 0x68);
      *(undefined8 *)((longlong)puVar3 + 0x6c) = *(undefined8 *)((longlong)puVar3 + param_3 + 0x6c);
      *(undefined4 *)((longlong)puVar3 + 0x74) = *(undefined4 *)((longlong)puVar3 + param_3 + 0x74);
      *(undefined4 *)(puVar3 + 0xf) = *(undefined4 *)((longlong)puVar3 + param_3 + 0x78);
      *(undefined4 *)((longlong)puVar3 + 0x7c) = *(undefined4 *)((longlong)puVar3 + param_3 + 0x7c);
      puVar3 = puVar3 + 0x9e;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413d79b0 FUN_1413d79b0 body=418 status=ok
// SIG undefined FUN_1413d79b0(void)

undefined8 FUN_1413d79b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar7 = (undefined8 *)(param_2 + 0x470);
    do {
      FUN_1407af670(puVar7 + -0x8e,param_3 + -0x470 + (longlong)puVar7);
      puVar7[-1] = *(undefined8 *)(param_3 + -8 + (longlong)puVar7);
      *puVar7 = *(undefined8 *)(param_3 + (longlong)puVar7);
      puVar7[1] = *(undefined8 *)(param_3 + 8 + (longlong)puVar7);
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(param_3 + 0x10 + (longlong)puVar7);
      puVar1 = (undefined8 *)(param_3 + 0x18 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[3] = *puVar1;
      puVar7[4] = uVar6;
      puVar1 = (undefined8 *)(param_3 + 0x28 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[5] = *puVar1;
      puVar7[6] = uVar6;
      puVar1 = (undefined8 *)(param_3 + 0x38 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[7] = *puVar1;
      puVar7[8] = uVar6;
      puVar7[9] = *(undefined8 *)(param_3 + 0x48 + (longlong)puVar7);
      puVar1 = (undefined8 *)(param_3 + 0x50 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[10] = *puVar1;
      puVar7[0xb] = uVar6;
      puVar7[0xc] = *(undefined8 *)(param_3 + 0x60 + (longlong)puVar7);
      *(undefined4 *)(puVar7 + 0xd) = *(undefined4 *)(param_3 + 0x68 + (longlong)puVar7);
      puVar7[0xe] = *(undefined8 *)((longlong)puVar7 + param_3 + 0x70);
      *(undefined1 *)(puVar7 + 0xf) = *(undefined1 *)((longlong)puVar7 + param_3 + 0x78);
      *(undefined8 *)((longlong)puVar7 + 0x7c) = *(undefined8 *)((longlong)puVar7 + param_3 + 0x7c);
      *(undefined4 *)((longlong)puVar7 + 0x84) = *(undefined4 *)((longlong)puVar7 + param_3 + 0x84);
      *(undefined1 *)(puVar7 + 0x11) = *(undefined1 *)((longlong)puVar7 + param_3 + 0x88);
      *(undefined4 *)((longlong)puVar7 + 0x8c) = *(undefined4 *)((longlong)puVar7 + param_3 + 0x8c);
      puVar1 = (undefined8 *)((longlong)puVar7 + param_3 + 0x90);
      uVar6 = puVar1[1];
      puVar7[0x12] = *puVar1;
      puVar7[0x13] = uVar6;
      puVar1 = (undefined8 *)((longlong)puVar7 + param_3 + 0xa0);
      uVar6 = puVar1[1];
      puVar7[0x14] = *puVar1;
      puVar7[0x15] = uVar6;
      puVar1 = (undefined8 *)((longlong)puVar7 + param_3 + 0xb0);
      uVar6 = puVar1[1];
      puVar7[0x16] = *puVar1;
      puVar7[0x17] = uVar6;
      puVar2 = (undefined4 *)((longlong)puVar7 + param_3 + 0xc0);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(puVar7 + 0x18) = *puVar2;
      *(undefined4 *)((longlong)puVar7 + 0xc4) = uVar3;
      *(undefined4 *)(puVar7 + 0x19) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0xcc) = uVar5;
      *(undefined4 *)(puVar7 + 0x1a) = *(undefined4 *)((longlong)puVar7 + param_3 + 0xd0);
      *(undefined8 *)((longlong)puVar7 + 0xd4) = *(undefined8 *)((longlong)puVar7 + param_3 + 0xd4);
      *(undefined4 *)((longlong)puVar7 + 0xdc) = *(undefined4 *)((longlong)puVar7 + param_3 + 0xdc);
      puVar2 = (undefined4 *)((longlong)puVar7 + param_3 + 0xe0);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(puVar7 + 0x1c) = *puVar2;
      *(undefined4 *)((longlong)puVar7 + 0xe4) = uVar3;
      *(undefined4 *)(puVar7 + 0x1d) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0xec) = uVar5;
      *(undefined1 *)(puVar7 + 0x1e) = *(undefined1 *)((longlong)puVar7 + param_3 + 0xf0);
      puVar7[0x1f] = *(undefined8 *)((longlong)puVar7 + param_3 + 0xf8);
      puVar7 = puVar7 + 0xae;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413d7b60 FUN_1413d7b60 body=74 status=ok
// SIG undefined FUN_1413d7b60(void)

undefined1 FUN_1413d7b60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1413d6e30(param_2 + param_3,param_3);
      param_3 = param_3 + 0x598;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413d7bb0 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FHierarchicalSimplification>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1413d6b10(param_2 + param_3,param_3);
      param_3 = param_3 + 0x1c0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413d7c00 FUN_1413d7c00 body=503 status=ok
// SIG undefined FUN_1413d7c00(void)

undefined8 FUN_1413d7c00(undefined8 param_1,byte *param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  void *_Src;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  
  if (param_4 != 0) {
    pbVar5 = (byte *)(param_3 + 0x11);
    do {
      pbVar1 = param_2 + 0x48;
      *param_2 = *param_2 ^ (*param_2 ^ pbVar5[-0x11]) & 1;
      bVar3 = (pbVar5[-0x11] ^ *param_2) & 2 ^ *param_2;
      *param_2 = bVar3;
      bVar3 = (pbVar5[-0x11] ^ bVar3) & 4 ^ bVar3;
      *param_2 = bVar3;
      *param_2 = (pbVar5[-0x11] ^ bVar3) & 8 ^ bVar3;
      param_2[0x10] = pbVar5[-1];
      param_2[0x11] = *pbVar5;
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(pbVar5 + 7);
      param_2[0x20] = pbVar5[0xf];
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(pbVar5 + 0x17);
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(pbVar5 + 0x1f);
      *(uint *)(param_2 + 0x38) =
           *(uint *)(param_2 + 0x38) ^ (*(uint *)(pbVar5 + 0x27) ^ *(uint *)(param_2 + 0x38)) & 1;
      uVar4 = (*(uint *)(param_2 + 0x38) ^ *(uint *)(pbVar5 + 0x27)) & 2 ^ *(uint *)(param_2 + 0x38)
      ;
      *(uint *)(param_2 + 0x38) = uVar4;
      uVar4 = (uVar4 ^ *(uint *)(pbVar5 + 0x27)) & 4 ^ uVar4;
      *(uint *)(param_2 + 0x38) = uVar4;
      *(uint *)(param_2 + 0x38) = (uVar4 ^ *(uint *)(pbVar5 + 0x27)) & 8 ^ uVar4;
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(pbVar5 + 0x2f);
      if (pbVar1 != pbVar5 + 0x37) {
        iVar2 = *(int *)(pbVar5 + 0x3f);
        _Src = *(void **)(pbVar5 + 0x37);
        *(int *)(param_2 + 0x50) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x54) == 0)) {
          param_2[0x54] = 0;
          param_2[0x55] = 0;
          param_2[0x56] = 0;
          param_2[0x57] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(pbVar1,iVar2);
          _guard_xfg_dispatch_icall_nop(*(void **)pbVar1,_Src,(longlong)iVar2 << 3);
        }
      }
      *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(pbVar5 + 0x47);
      *(undefined4 *)(param_2 + 0x5c) = *(undefined4 *)(pbVar5 + 0x4b);
      *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(pbVar5 + 0x4f);
      *(undefined4 *)(param_2 + 100) = *(undefined4 *)(pbVar5 + 0x53);
      *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(pbVar5 + 0x57);
      param_2[0x6c] = pbVar5[0x5b];
      *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(pbVar5 + 0x5f);
      *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(pbVar5 + 99);
      *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(pbVar5 + 0x67);
      *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(pbVar5 + 0x6f);
      param_2[0x88] = pbVar5[0x77];
      *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(pbVar5 + 0x7f);
      *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(pbVar5 + 0x87);
      FUN_1412f7c20(param_2 + 0xa0,pbVar5 + 0x8f);
      *(undefined8 *)(param_2 + 0x150) = *(undefined8 *)(pbVar5 + 0x13f);
      pbVar1 = pbVar5 + 0x147;
      pbVar5 = pbVar5 + 0x160;
      *(undefined8 *)(param_2 + 0x158) = *(undefined8 *)pbVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x160;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413d7e00 FUN_1413d7e00 body=46 status=ok
// SIG undefined FUN_1413d7e00(void)

void FUN_1413d7e00(undefined8 param_1,longlong param_2)

{
  FUN_1409c5510(param_2 + 0xa0);
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1413d7e30 FUN_1413d7e30 body=55 status=ok
// SIG undefined FUN_1413d7e30(void)

void FUN_1413d7e30(void)

{
  undefined8 uVar1;
  
  if (DAT_14688c2c8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c2c8 = GetStaticEnum(FUN_1413d8eb0,uVar1,L"EHostileAttachState");
  }
  return;
}



// FUNCTION 1413d7e70 FUN_1413d7e70 body=55 status=ok
// SIG undefined FUN_1413d7e70(void)

void FUN_1413d7e70(void)

{
  undefined8 uVar1;
  
  if (DAT_14688c2c0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c2c0 = GetStaticEnum(FUN_1413d8ee0,uVar1,L"ELeapOnVehicle_SeatType");
  }
  return;
}



// FUNCTION 1413d7eb0 FUN_1413d7eb0 body=55 status=ok
// SIG undefined FUN_1413d7eb0(void)

void FUN_1413d7eb0(void)

{
  undefined8 uVar1;
  
  if (DAT_14688c2b8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c2b8 = GetStaticEnum(FUN_1413d8f10,uVar1,L"EOakAnimActionAbilityEndAction");
  }
  return;
}



// FUNCTION 1413d7ef0 FUN_1413d7ef0 body=6 status=ok
// SIG undefined FUN_1413d7ef0(void)

undefined8 FUN_1413d7ef0(void)

{
  return 0xffa34003;
}



// FUNCTION 1413d7f00 FUN_1413d7f00 body=6 status=ok
// SIG undefined FUN_1413d7f00(void)

undefined8 FUN_1413d7f00(void)

{
  return 0xc2b889ba;
}



// FUNCTION 1413d7f10 FUN_1413d7f10 body=6 status=ok
// SIG undefined FUN_1413d7f10(void)

undefined8 FUN_1413d7f10(void)

{
  return 0x15b37ace;
}



// FUNCTION 1413d7f20 FUN_1413d7f20 body=6 status=ok
// SIG undefined FUN_1413d7f20(void)

undefined8 FUN_1413d7f20(void)

{
  return 0x364ed4e8;
}



// FUNCTION 1413d7f30 FUN_1413d7f30 body=6 status=ok
// SIG undefined FUN_1413d7f30(void)

undefined8 FUN_1413d7f30(void)

{
  return 0x4be814b8;
}



// FUNCTION 1413d7f40 FUN_1413d7f40 body=6 status=ok
// SIG undefined FUN_1413d7f40(void)

undefined8 FUN_1413d7f40(void)

{
  return 0x284ce17e;
}



// FUNCTION 1413d7f50 FUN_1413d7f50 body=6 status=ok
// SIG undefined FUN_1413d7f50(void)

undefined8 FUN_1413d7f50(void)

{
  return 0x17b8a365;
}



// FUNCTION 1413d7f60 FUN_1413d7f60 body=6 status=ok
// SIG undefined FUN_1413d7f60(void)

undefined8 FUN_1413d7f60(void)

{
  return 0x25dee851;
}



// FUNCTION 1413d7f70 FUN_1413d7f70 body=6 status=ok
// SIG undefined FUN_1413d7f70(void)

undefined8 FUN_1413d7f70(void)

{
  return 0x58333419;
}



// FUNCTION 1413d7f80 FUN_1413d7f80 body=6 status=ok
// SIG undefined FUN_1413d7f80(void)

undefined8 FUN_1413d7f80(void)

{
  return 0xd377ded3;
}



// FUNCTION 1413d7f90 FUN_1413d7f90 body=6 status=ok
// SIG undefined FUN_1413d7f90(void)

undefined8 FUN_1413d7f90(void)

{
  return 0x85d4efe5;
}



// FUNCTION 1413d7fa0 FUN_1413d7fa0 body=6 status=ok
// SIG undefined FUN_1413d7fa0(void)

undefined8 FUN_1413d7fa0(void)

{
  return 0x4fdf9ada;
}



// FUNCTION 1413d7fb0 FUN_1413d7fb0 body=6 status=ok
// SIG undefined FUN_1413d7fb0(void)

undefined8 FUN_1413d7fb0(void)

{
  return 0x3a022fd;
}



// FUNCTION 1413d7fc0 FUN_1413d7fc0 body=6 status=ok
// SIG undefined FUN_1413d7fc0(void)

undefined8 FUN_1413d7fc0(void)

{
  return 0x20edc780;
}



// FUNCTION 1413d7fd0 FUN_1413d7fd0 body=6 status=ok
// SIG undefined FUN_1413d7fd0(void)

undefined8 FUN_1413d7fd0(void)

{
  return 0x7dc25696;
}



// FUNCTION 1413d7fe0 FUN_1413d7fe0 body=6 status=ok
// SIG undefined FUN_1413d7fe0(void)

undefined8 FUN_1413d7fe0(void)

{
  return 0xa3d9050b;
}



// FUNCTION 1413d7ff0 FUN_1413d7ff0 body=6 status=ok
// SIG undefined FUN_1413d7ff0(void)

undefined8 FUN_1413d7ff0(void)

{
  return 0xf55bb2ca;
}



// FUNCTION 1413d8000 FUN_1413d8000 body=6 status=ok
// SIG undefined FUN_1413d8000(void)

undefined8 FUN_1413d8000(void)

{
  return 0x94e3be7;
}



// FUNCTION 1413d8010 FUN_1413d8010 body=6 status=ok
// SIG undefined FUN_1413d8010(void)

undefined8 FUN_1413d8010(void)

{
  return 0xa5e6145d;
}



// FUNCTION 1413d8020 FUN_1413d8020 body=6 status=ok
// SIG undefined FUN_1413d8020(void)

undefined8 FUN_1413d8020(void)

{
  return 0x6acc8509;
}



// FUNCTION 1413d8030 FUN_1413d8030 body=6 status=ok
// SIG undefined FUN_1413d8030(void)

undefined8 FUN_1413d8030(void)

{
  return 0xada7d3bb;
}



// FUNCTION 1413d8040 FUN_1413d8040 body=6 status=ok
// SIG undefined FUN_1413d8040(void)

undefined8 FUN_1413d8040(void)

{
  return 0xb59c4a4e;
}



// FUNCTION 1413d8050 FUN_1413d8050 body=57 status=ok
// SIG undefined FUN_1413d8050(void)

void FUN_1413d8050(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688c3d8);
                    /* WARNING: Could not recover jumptable at 0x0001413d8086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1413d8170 FUN_1413d8170 body=61 status=ok
// SIG undefined FUN_1413d8170(void)

void FUN_1413d8170(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688c3c0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1413d81b0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void USafeZone::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1413d81c0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UMovieSceneActorReferenceSection::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1413d81e0 thunk_FUN_1413dd0f0 body=5 status=ok
// SIG undefined thunk_FUN_1413dd0f0(void)

void thunk_FUN_1413dd0f0(void)

{
  FUN_1413dd0f0();
  return;
}



// FUNCTION 1413d81f0 FUN_1413d81f0 body=34 status=ok
// SIG undefined FUN_1413d81f0(void)

void FUN_1413d81f0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413d6240();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_IsLocallyControlled_1449c0690,5);
  return;
}



// FUNCTION 1413d8220 FUN_1413d8220 body=34 status=ok
// SIG undefined FUN_1413d8220(void)

void FUN_1413d8220(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413d4bd0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_K2_SetOperativeDeviceVisible_1449c0950,1)
  ;
  return;
}



// FUNCTION 1413d8250 StaticRegisterNativesUFocusWidget body=34 status=ok
// SIG undefined StaticRegisterNativesUFocusWidget(void)

void UFocusWidget::StaticRegisterNativesUFocusWidget(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_JumpToMontageSection_Arms_1449c0bd0,4);
  return;
}



// FUNCTION 1413d8280 StaticRegisterNativesUUGStreamInteractSpawnedActorUW body=34 status=ok
// SIG undefined StaticRegisterNativesUUGStreamInteractSpawnedActorUW(void)

void UUGStreamInteractSpawnedActorUW::StaticRegisterNativesUUGStreamInteractSpawnedActorUW(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ActivateFirstPersonArms_1449c11b8,2);
  return;
}



// FUNCTION 1413d82b0 FUN_1413d82b0 body=34 status=ok
// SIG undefined FUN_1413d82b0(void)

void FUN_1413d82b0(void)

{
  undefined8 uVar1;
  
  uVar1 = UProgressBar::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_MakeActionLeapOnVehicleRegisters_1449c32f8,1);
  return;
}



// FUNCTION 1413d82e0 FUN_1413d82e0 body=34 status=ok
// SIG undefined FUN_1413d82e0(void)

void FUN_1413d82e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413d5010();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_K2_GetCharacter_1449c37f0,4);
  return;
}



// FUNCTION 1413d8310 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FVolumeControlStyle::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c450 == 0) {
    uVar1 = FUN_1413d7f10();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c450 =
         GetStaticStruct(FUN_1413d4740,uVar2,L"ActionState_OakAnimActionAbility",0x520,uVar1);
  }
  return;
}



// FUNCTION 1413d8370 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FVolumeControlStyle::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c4e0 == 0) {
    uVar1 = FUN_1413d7ef0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c4e0 =
         GetStaticStruct(FUN_1413d8f40,uVar2,L"ActionState_OakAnimActionAbilityOperative",0x520,
                         uVar1);
  }
  return;
}



// FUNCTION 1413d83d0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FVolumeControlStyle::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c548 == 0) {
    uVar1 = FUN_1413d7f00();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c548 =
         GetStaticStruct(FUN_1413d8f70,uVar2,L"ActionState_OakAnimActionAbilityPhaseTrance",0x520,
                         uVar1);
  }
  return;
}



// FUNCTION 1413d8430 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FVolumeControlStyle::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c598 == 0) {
    uVar1 = FUN_1413d7f20();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c598 =
         GetStaticStruct(FUN_1413d8fa0,uVar2,L"ActionState_OakAnimPhaseTranceArms",0x520,uVar1);
  }
  return;
}



// FUNCTION 1413d8490 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FVolumeControlStyle::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c5e8 == 0) {
    uVar1 = FUN_1413d7f30();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c5e8 =
         GetStaticStruct(FUN_1413d8fd0,uVar2,L"ActionState_OakAnim_TedioreReload",0x520,uVar1);
  }
  return;
}



// FUNCTION 1413d84f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FVolumeControlStyle::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c608 == 0) {
    uVar1 = FUN_1413d7f40();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c608 =
         GetStaticStruct(FUN_1413d9000,uVar2,L"ActionState_OakAnim_WeaponReload",0x520,uVar1);
  }
  return;
}



// FUNCTION 1413d8550 FUN_1413d8550 body=82 status=ok
// SIG undefined FUN_1413d8550(void)

void FUN_1413d8550(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c628 == 0) {
    uVar1 = FUN_1413d7f50();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c628 = GetStaticStruct(FUN_1413d9030,uVar2,L"ActionState_OakAttachedAnim",0x528,uVar1);
  }
  return;
}



// FUNCTION 1413d85b0 FUN_1413d85b0 body=82 status=ok
// SIG undefined FUN_1413d85b0(void)

void FUN_1413d85b0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c698 == 0) {
    uVar1 = FUN_1413d7f60();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c698 = GetStaticStruct(FUN_1413d9060,uVar2,L"ActionState_OakDetachFromSeat",0xd0,uVar1)
    ;
  }
  return;
}



// FUNCTION 1413d8610 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FVolumeControlStyle::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c6b8 == 0) {
    uVar1 = FUN_1413d7f70();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c6b8 = GetStaticStruct(FUN_1413d9090,uVar2,L"ActionState_OakEmote",0x520,uVar1);
  }
  return;
}



// FUNCTION 1413d8670 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneSkeletalAnimationParams::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c6d8 == 0) {
    uVar1 = FUN_1413d7f80();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c6d8 = GetStaticStruct(FUN_1413d90c0,uVar2,L"ActionState_OakFrozenDeath",200,uVar1);
  }
  return;
}



// FUNCTION 1413d86d0 FUN_1413d86d0 body=82 status=ok
// SIG undefined FUN_1413d86d0(void)

void FUN_1413d86d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c6f8 == 0) {
    uVar1 = FUN_1413d7f90();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c6f8 = GetStaticStruct(FUN_1413d90f0,uVar2,L"ActionState_OakGib",0xd0,uVar1);
  }
  return;
}



// FUNCTION 1413d8730 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_RigidBody_Chaos::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c730 == 0) {
    uVar1 = FUN_1413d7fa0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c730 = GetStaticStruct(FUN_1413d9120,uVar2,L"ActionState_OakHostileAttach",0x4f0,uVar1)
    ;
  }
  return;
}



// FUNCTION 1413d8790 FUN_1413d8790 body=82 status=ok
// SIG undefined FUN_1413d8790(void)

void FUN_1413d8790(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c768 == 0) {
    uVar1 = FUN_1413d7fb0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c768 = GetStaticStruct(FUN_1413d9150,uVar2,L"ActionState_OakLeapOnVehicle",0x570,uVar1)
    ;
  }
  return;
}



// FUNCTION 1413d87f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FVolumeControlStyle::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c790 == 0) {
    uVar1 = FUN_1413d7fc0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c790 =
         GetStaticStruct(FUN_1413d9180,uVar2,L"ActionState_OakPetUltimateAbility",0x520,uVar1);
  }
  return;
}



// FUNCTION 1413d8850 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBBQCharacterCardData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c7b0 == 0) {
    uVar1 = FUN_1413d7fd0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c7b0 = GetStaticStruct(FUN_1413d91b0,uVar2,L"ActionState_OakPhaseMove",0x598,uVar1);
  }
  return;
}



// FUNCTION 1413d88b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FVolumeControlStyle::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c5c8 == 0) {
    uVar1 = FUN_1413d7fe0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c5c8 = GetStaticStruct(FUN_1413d91e0,uVar2,L"ActionState_OakPlayerMelee",0x520,uVar1);
  }
  return;
}



// FUNCTION 1413d8910 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FHierarchicalSimplification::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c658 == 0) {
    uVar1 = FUN_1413d8000();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c658 =
         GetStaticStruct(FUN_1413d58c0,uVar2,L"OakActionState_CoordinatedEffect",0x1c0,uVar1);
  }
  return;
}



// FUNCTION 1413d8970 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FHierarchicalSimplification::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c678 == 0) {
    uVar1 = FUN_1413d7ff0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c678 =
         GetStaticStruct(FUN_1413d9210,uVar2,L"OakActionState_CoordinatedEffect_ActionAbility",0x1c0
                         ,uVar1);
  }
  return;
}



// FUNCTION 1413d89d0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c440 == 0) {
    uVar1 = FUN_1413d8010();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c440 = GetStaticStruct(FUN_1413d9240,uVar2,L"OakAnimActionAbilityEndAction",0x10,uVar1)
    ;
  }
  return;
}



// FUNCTION 1413d8a30 FUN_1413d8a30 body=82 status=ok
// SIG undefined FUN_1413d8a30(void)

void FUN_1413d8a30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c708 == 0) {
    uVar1 = FUN_1413d8020();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c708 = GetStaticStruct(FUN_1413d9270,uVar2,L"OakElementalGibData",0x160,uVar1);
  }
  return;
}



// FUNCTION 1413d8a90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvent::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c638 == 0) {
    uVar1 = FUN_1413d8030();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c638 = GetStaticStruct(FUN_1413d92a0,uVar2,L"PawnInterpolationInfo",8,uVar1);
  }
  return;
}



// FUNCTION 1413d8af0 FUN_1413d8af0 body=82 status=ok
// SIG undefined FUN_1413d8af0(void)

void FUN_1413d8af0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688c740 == 0) {
    uVar1 = FUN_1413d8040();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688c740 = GetStaticStruct(FUN_1413d92d0,uVar2,L"ReplicatedEject",0xc,uVar1);
  }
  return;
}



// FUNCTION 1413d8b50 FUN_1413d8b50 body=47 status=ok
// SIG undefined FUN_1413d8b50(void)

longlong FUN_1413d8b50(void)

{
  if (DAT_14688c4a0 == 0) {
    FUN_141786440(&DAT_14688c4a0,&PTR_FUN_1449bc130);
  }
  return DAT_14688c4a0;
}



// FUNCTION 1413d8b80 FUN_1413d8b80 body=47 status=ok
// SIG undefined FUN_1413d8b80(void)

longlong FUN_1413d8b80(void)

{
  if (DAT_14688c4b0 == 0) {
    FUN_141786440(&DAT_14688c4b0,&PTR_GetPrivateStaticClass_1449bc340);
  }
  return DAT_14688c4b0;
}



// FUNCTION 1413d8bb0 FUN_1413d8bb0 body=47 status=ok
// SIG undefined FUN_1413d8bb0(void)

longlong FUN_1413d8bb0(void)

{
  if (DAT_14688c4c0 == 0) {
    FUN_141786440(&DAT_14688c4c0,&PTR_GetPrivateStaticClass_1449bc550);
  }
  return DAT_14688c4c0;
}



// FUNCTION 1413d8be0 Z_Construct_UClass_USoundfieldEncodingSettingsBase body=47 status=ok
// SIG undefined Z_Construct_UClass_USoundfieldEncodingSettingsBase(void)

longlong Z_Construct_UClass_USoundfieldEncodingSettingsBase(void)

{
  if (DAT_14688c4d0 == 0) {
    FUN_141786440(&DAT_14688c4d0,&PTR_GetPrivateStaticClass_1449bc8b0);
  }
  return DAT_14688c4d0;
}



// FUNCTION 1413d8c10 FUN_1413d8c10 body=47 status=ok
// SIG undefined FUN_1413d8c10(void)

longlong FUN_1413d8c10(void)

{
  if (DAT_14688c518 == 0) {
    FUN_141786440(&DAT_14688c518,&PTR_GetPrivateStaticClass_1449bdbd0);
  }
  return DAT_14688c518;
}



// FUNCTION 1413d8c40 FUN_1413d8c40 body=47 status=ok
// SIG undefined FUN_1413d8c40(void)

longlong FUN_1413d8c40(void)

{
  if (DAT_14688c528 == 0) {
    FUN_141786440(&DAT_14688c528,&PTR_GetPrivateStaticClass_1449bddd0);
  }
  return DAT_14688c528;
}



// FUNCTION 1413d8c70 FUN_1413d8c70 body=47 status=ok
// SIG undefined FUN_1413d8c70(void)

longlong FUN_1413d8c70(void)

{
  if (DAT_14688c538 == 0) {
    FUN_141786440(&DAT_14688c538,&PTR_GetPrivateStaticClass_1449bdf80);
  }
  return DAT_14688c538;
}



// FUNCTION 1413d8ca0 FUN_1413d8ca0 body=47 status=ok
// SIG undefined FUN_1413d8ca0(void)

longlong FUN_1413d8ca0(void)

{
  if (DAT_14688c5d8 == 0) {
    FUN_141786440(&DAT_14688c5d8,&PTR_GetPrivateStaticClass_1449bf940);
  }
  return DAT_14688c5d8;
}



// FUNCTION 1413d8cd0 FUN_1413d8cd0 body=47 status=ok
// SIG undefined FUN_1413d8cd0(void)

longlong FUN_1413d8cd0(void)

{
  if (DAT_14688c5f8 == 0) {
    FUN_141786440(&DAT_14688c5f8,&PTR_FUN_1449babf0);
  }
  return DAT_14688c5f8;
}



// FUNCTION 1413d8d00 FUN_1413d8d00 body=47 status=ok
// SIG undefined FUN_1413d8d00(void)

longlong FUN_1413d8d00(void)

{
  if (DAT_14688c618 == 0) {
    FUN_141786440(&DAT_14688c618,&PTR_GetPrivateStaticClass_1449baee0);
  }
  return DAT_14688c618;
}



// FUNCTION 1413d8d30 FUN_1413d8d30 body=47 status=ok
// SIG undefined FUN_1413d8d30(void)

longlong FUN_1413d8d30(void)

{
  if (DAT_14688c648 == 0) {
    FUN_141786440(&DAT_14688c648,&PTR_GetPrivateStaticClass_1449bb800);
  }
  return DAT_14688c648;
}



// FUNCTION 1413d8d60 FUN_1413d8d60 body=47 status=ok
// SIG undefined FUN_1413d8d60(void)

longlong FUN_1413d8d60(void)

{
  if (DAT_14688c688 == 0) {
    FUN_141786440(&DAT_14688c688,&PTR_FUN_1449be5d0);
  }
  return DAT_14688c688;
}



// FUNCTION 1413d8d90 FUN_1413d8d90 body=47 status=ok
// SIG undefined FUN_1413d8d90(void)

longlong FUN_1413d8d90(void)

{
  if (DAT_14688c6a8 == 0) {
    FUN_141786440(&DAT_14688c6a8,&PTR_FUN_1449be920);
  }
  return DAT_14688c6a8;
}



// FUNCTION 1413d8dc0 FUN_1413d8dc0 body=47 status=ok
// SIG undefined FUN_1413d8dc0(void)

longlong FUN_1413d8dc0(void)

{
  if (DAT_14688c6c8 == 0) {
    FUN_141786440(&DAT_14688c6c8,&PTR_GetPrivateStaticClass_1449bec10);
  }
  return DAT_14688c6c8;
}



// FUNCTION 1413d8df0 FUN_1413d8df0 body=47 status=ok
// SIG undefined FUN_1413d8df0(void)

longlong FUN_1413d8df0(void)

{
  if (DAT_14688c6e8 == 0) {
    FUN_141786440(&DAT_14688c6e8,&PTR_FUN_1449bed30);
  }
  return DAT_14688c6e8;
}



// FUNCTION 1413d8e20 FUN_1413d8e20 body=47 status=ok
// SIG undefined FUN_1413d8e20(void)

longlong FUN_1413d8e20(void)

{
  if (DAT_14688c718 == 0) {
    FUN_141786440(&DAT_14688c718,&PTR_GetPrivateStaticClass_1449bc7f0);
  }
  return DAT_14688c718;
}



// FUNCTION 1413d8e50 FUN_1413d8e50 body=47 status=ok
// SIG undefined FUN_1413d8e50(void)

longlong FUN_1413d8e50(void)

{
  if (DAT_14688c750 == 0) {
    FUN_141786440(&DAT_14688c750,&PTR_GetPrivateStaticClass_1449bd810);
  }
  return DAT_14688c750;
}



// FUNCTION 1413d8e80 FUN_1413d8e80 body=47 status=ok
// SIG undefined FUN_1413d8e80(void)

longlong FUN_1413d8e80(void)

{
  if (DAT_14688c7a0 == 0) {
    FUN_141786440(&DAT_14688c7a0,&PTR_GetPrivateStaticClass_1449bcd90);
  }
  return DAT_14688c7a0;
}



// FUNCTION 1413d8eb0 FUN_1413d8eb0 body=47 status=ok
// SIG undefined FUN_1413d8eb0(void)

longlong FUN_1413d8eb0(void)

{
  if (DAT_14688c728 == 0) {
    FUN_1417866a0(&DAT_14688c728,&PTR_Z_Construct_UPackage__Script_MechWarrior_146385100);
  }
  return DAT_14688c728;
}



// FUNCTION 1413d8ee0 FUN_1413d8ee0 body=47 status=ok
// SIG undefined FUN_1413d8ee0(void)

longlong FUN_1413d8ee0(void)

{
  if (DAT_14688c760 == 0) {
    FUN_1417866a0(&DAT_14688c760,&PTR_Z_Construct_UPackage__Script_MechWarrior_146385150);
  }
  return DAT_14688c760;
}



// FUNCTION 1413d8f10 FUN_1413d8f10 body=47 status=ok
// SIG undefined FUN_1413d8f10(void)

longlong FUN_1413d8f10(void)

{
  if (DAT_14688c438 == 0) {
    FUN_1417866a0(&DAT_14688c438,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463850b0);
  }
  return DAT_14688c438;
}



// FUNCTION 1413d8f40 FUN_1413d8f40 body=47 status=ok
// SIG undefined FUN_1413d8f40(void)

longlong FUN_1413d8f40(void)

{
  if (DAT_14688c4e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c4e8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146382790);
  }
  return DAT_14688c4e8;
}



// FUNCTION 1413d8f70 FUN_1413d8f70 body=47 status=ok
// SIG undefined FUN_1413d8f70(void)

longlong FUN_1413d8f70(void)

{
  if (DAT_14688c550 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c550,&PTR_Z_Construct_UPackage__Script_MechWarrior_146382aa0);
  }
  return DAT_14688c550;
}



// FUNCTION 1413d8fa0 FUN_1413d8fa0 body=47 status=ok
// SIG undefined FUN_1413d8fa0(void)

longlong FUN_1413d8fa0(void)

{
  if (DAT_14688c5a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c5a0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463830d0);
  }
  return DAT_14688c5a0;
}



// FUNCTION 1413d8fd0 FUN_1413d8fd0 body=47 status=ok
// SIG undefined FUN_1413d8fd0(void)

longlong FUN_1413d8fd0(void)

{
  if (DAT_14688c5f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c5f0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146383310);
  }
  return DAT_14688c5f0;
}



// FUNCTION 1413d9000 FUN_1413d9000 body=47 status=ok
// SIG undefined FUN_1413d9000(void)

longlong FUN_1413d9000(void)

{
  if (DAT_14688c610 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c610,&PTR_Z_Construct_UPackage__Script_MechWarrior_146383400);
  }
  return DAT_14688c610;
}



// FUNCTION 1413d9030 FUN_1413d9030 body=47 status=ok
// SIG undefined FUN_1413d9030(void)

longlong FUN_1413d9030(void)

{
  if (DAT_14688c630 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c630,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463834b0);
  }
  return DAT_14688c630;
}



// FUNCTION 1413d9060 FUN_1413d9060 body=47 status=ok
// SIG undefined FUN_1413d9060(void)

longlong FUN_1413d9060(void)

{
  if (DAT_14688c6a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c6a0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146383a80);
  }
  return DAT_14688c6a0;
}



// FUNCTION 1413d9090 FUN_1413d9090 body=47 status=ok
// SIG undefined FUN_1413d9090(void)

longlong FUN_1413d9090(void)

{
  if (DAT_14688c6c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c6c0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146383af0);
  }
  return DAT_14688c6c0;
}



// FUNCTION 1413d90c0 FUN_1413d90c0 body=47 status=ok
// SIG undefined FUN_1413d90c0(void)

longlong FUN_1413d90c0(void)

{
  if (DAT_14688c6e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c6e0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146383b60);
  }
  return DAT_14688c6e0;
}



// FUNCTION 1413d90f0 FUN_1413d90f0 body=47 status=ok
// SIG undefined FUN_1413d90f0(void)

longlong FUN_1413d90f0(void)

{
  if (DAT_14688c700 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c700,&PTR_Z_Construct_UPackage__Script_MechWarrior_146383d20);
  }
  return DAT_14688c700;
}



// FUNCTION 1413d9120 FUN_1413d9120 body=47 status=ok
// SIG undefined FUN_1413d9120(void)

longlong FUN_1413d9120(void)

{
  if (DAT_14688c738 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c738,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463841a0);
  }
  return DAT_14688c738;
}



// FUNCTION 1413d9150 FUN_1413d9150 body=47 status=ok
// SIG undefined FUN_1413d9150(void)

longlong FUN_1413d9150(void)

{
  if (DAT_14688c770 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c770,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463846c0);
  }
  return DAT_14688c770;
}



// FUNCTION 1413d9180 FUN_1413d9180 body=47 status=ok
// SIG undefined FUN_1413d9180(void)

longlong FUN_1413d9180(void)

{
  if (DAT_14688c798 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c798,&PTR_Z_Construct_UPackage__Script_MechWarrior_146384ab0);
  }
  return DAT_14688c798;
}



// FUNCTION 1413d91b0 FUN_1413d91b0 body=47 status=ok
// SIG undefined FUN_1413d91b0(void)

longlong FUN_1413d91b0(void)

{
  if (DAT_14688c7b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c7b8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146384c00);
  }
  return DAT_14688c7b8;
}



// FUNCTION 1413d91e0 FUN_1413d91e0 body=47 status=ok
// SIG undefined FUN_1413d91e0(void)

longlong FUN_1413d91e0(void)

{
  if (DAT_14688c5d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c5d0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146383210);
  }
  return DAT_14688c5d0;
}



// FUNCTION 1413d9210 FUN_1413d9210 body=47 status=ok
// SIG undefined FUN_1413d9210(void)

longlong FUN_1413d9210(void)

{
  if (DAT_14688c680 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c680,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463838a0);
  }
  return DAT_14688c680;
}



// FUNCTION 1413d9240 FUN_1413d9240 body=47 status=ok
// SIG undefined FUN_1413d9240(void)

longlong FUN_1413d9240(void)

{
  if (DAT_14688c448 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c448,&PTR_Z_Construct_UPackage__Script_MechWarrior_146381d20);
  }
  return DAT_14688c448;
}



// FUNCTION 1413d9270 FUN_1413d9270 body=47 status=ok
// SIG undefined FUN_1413d9270(void)

longlong FUN_1413d9270(void)

{
  if (DAT_14688c710 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c710,&PTR_Z_Construct_UPackage__Script_MechWarrior_146383f70);
  }
  return DAT_14688c710;
}



// FUNCTION 1413d92a0 FUN_1413d92a0 body=47 status=ok
// SIG undefined FUN_1413d92a0(void)

longlong FUN_1413d92a0(void)

{
  if (DAT_14688c640 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c640,&PTR_Z_Construct_UPackage__Script_MechWarrior_146383570);
  }
  return DAT_14688c640;
}



// FUNCTION 1413d92d0 FUN_1413d92d0 body=47 status=ok
// SIG undefined FUN_1413d92d0(void)

longlong FUN_1413d92d0(void)

{
  if (DAT_14688c748 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688c748,&PTR_Z_Construct_UPackage__Script_MechWarrior_146384230);
  }
  return DAT_14688c748;
}



// FUNCTION 1413d9320 FUN_1413d9320 body=48 status=ok
// SIG undefined FUN_1413d9320(void)

void FUN_1413d9320(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142c6c710();
  *(undefined1 *)(param_1 + 0x228) = 1;
  return;
}



// FUNCTION 1413d9350 FUN_1413d9350 body=48 status=ok
// SIG undefined FUN_1413d9350(void)

void FUN_1413d9350(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142c6c710();
  *(undefined1 *)(param_1 + 0x229) = 1;
  return;
}



// FUNCTION 1413d9380 FUN_1413d9380 body=43 status=ok
// SIG undefined FUN_1413d9380(void)

void FUN_1413d9380(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1409ae950();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413d93b0 FUN_1413d93b0 body=128 status=ok
// SIG undefined FUN_1413d93b0(void)

void FUN_1413d93b0(undefined8 param_1,longlong param_2)

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
  FUN_1409aed10(param_1,local_res10);
  return;
}



// FUNCTION 1413d9430 FUN_1413d9430 body=128 status=ok
// SIG undefined FUN_1413d9430(void)

void FUN_1413d9430(undefined8 param_1,longlong param_2)

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
  FUN_1409da6c0(param_1,local_res10);
  return;
}



// FUNCTION 1413d94b0 FUN_1413d94b0 body=128 status=ok
// SIG undefined FUN_1413d94b0(void)

void FUN_1413d94b0(undefined8 param_1,longlong param_2)

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
  FUN_1409da790(param_1,local_res10);
  return;
}



// FUNCTION 1413d9530 FUN_1413d9530 body=44 status=ok
// SIG undefined FUN_1413d9530(void)

void FUN_1413d9530(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1409da980();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413d9560 FUN_1413d9560 body=44 status=ok
// SIG undefined FUN_1413d9560(void)

void FUN_1413d9560(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1409da9f0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413d9590 FUN_1413d9590 body=44 status=ok
// SIG undefined FUN_1413d9590(void)

void FUN_1413d9590(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1409daa60();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413d95c0 FUN_1413d95c0 body=130 status=ok
// SIG undefined FUN_1413d95c0(void)

void FUN_1413d95c0(undefined8 param_1,longlong param_2)

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
  FUN_1409aee20(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1413d9650 execGetSkinsForItem body=255 status=ok
// SIG undefined execGetSkinsForItem(void)

void AEquipmentSkin::execGetSkinsForItem(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  longlong local_18 [2];
  
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
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
  plVar1 = (longlong *)FUN_1409dbd90(local_18,local_res18,local_res10[0]);
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
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1413d9750 execOnMovementModeChange body=256 status=ok
// SIG undefined execOnMovementModeChange(void)

void UAbilityTask_WaitMovementModeChange::execOnMovementModeChange
               (undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
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
  FUN_1409deaa0(param_1,local_18[0],local_res10[0],local_res20[0]);
  return;
}



// FUNCTION 1413d9850 FUN_1413d9850 body=178 status=ok
// SIG undefined FUN_1413d9850(void)

void FUN_1413d9850(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_8c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar1 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  thunk_FUN_1413d8050(param_1,puVar1);
  return;
}



// FUNCTION 1413d9910 FUN_1413d9910 body=530 status=ok
// SIG undefined FUN_1413d9910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1413d9910(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_90 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_90);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_98 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_28 = _DAT_14688c310 & _DAT_14688c320;
  uStack_24 = uRam000000014688c314 & uRam000000014688c324;
  uStack_20 = uRam000000014688c318 & uRam000000014688c328;
  uStack_1c = uRam000000014688c31c & uRam000000014688c32c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam000000014688c31c;
  local_38 = 0;
  uStack_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_a8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  local_a0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_78 = CONCAT44(uStack_44,local_48);
  uStack_70 = CONCAT44(uStack_3c,uStack_40);
  local_58 = CONCAT44(uStack_24,local_28);
  uStack_50 = CONCAT44(uStack_1c,uStack_20);
  local_b0 = local_a0;
  local_b8 = local_a8[0];
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_68 = (undefined4)local_38;
  uStack_64 = local_38._4_4_;
  uStack_60 = (undefined4)uStack_30;
  uStack_5c = uStack_30._4_4_;
  FUN_1409e17b0(local_88[0],local_90,local_98,&local_78);
  return;
}



// FUNCTION 1413d9b50 FUN_1413d9b50 body=128 status=ok
// SIG undefined FUN_1413d9b50(void)

void FUN_1413d9b50(longlong param_1,longlong param_2)

{
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *(bool *)(param_1 + 0x25c) = local_res8[0] != 0;
  return;
}



// FUNCTION 1413d9bd0 FUN_1413d9bd0 body=446 status=ok
// SIG undefined FUN_1413d9bd0(void)

void FUN_1413d9bd0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
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
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_30 = local_40;
  local_38 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1409bcbf0(param_1,local_50,local_res20[0],local_res18[0],local_res10[0],local_58,
                        &local_38);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413d9d90 FUN_1413d9d90 body=47 status=ok
// SIG undefined FUN_1413d9d90(void)

longlong FUN_1413d9d90(void)

{
  if (DAT_14688ced0 == 0) {
    FUN_141786a30(&DAT_14688ced0,&PTR_FUN_146388f10);
  }
  return DAT_14688ced0;
}



// FUNCTION 1413d9dc0 FUN_1413d9dc0 body=47 status=ok
// SIG undefined FUN_1413d9dc0(void)

longlong FUN_1413d9dc0(void)

{
  if (DAT_14688ced8 == 0) {
    FUN_141786a30(&DAT_14688ced8,&PTR_FUN_146388f50);
  }
  return DAT_14688ced8;
}



// FUNCTION 1413d9df0 FUN_1413d9df0 body=47 status=ok
// SIG undefined FUN_1413d9df0(void)

longlong FUN_1413d9df0(void)

{
  if (DAT_14688cee0 == 0) {
    FUN_141786a30(&DAT_14688cee0,&PTR_FUN_146388f90);
  }
  return DAT_14688cee0;
}



// FUNCTION 1413d9e20 FUN_1413d9e20 body=47 status=ok
// SIG undefined FUN_1413d9e20(void)

longlong FUN_1413d9e20(void)

{
  if (DAT_14688cee8 == 0) {
    FUN_141786a30(&DAT_14688cee8,&PTR_FUN_146388fd0);
  }
  return DAT_14688cee8;
}



// FUNCTION 1413d9e50 FUN_1413d9e50 body=47 status=ok
// SIG undefined FUN_1413d9e50(void)

longlong FUN_1413d9e50(void)

{
  if (DAT_14688cef0 == 0) {
    FUN_141786a30(&DAT_14688cef0,&PTR_FUN_146389010);
  }
  return DAT_14688cef0;
}



// FUNCTION 1413d9e80 FUN_1413d9e80 body=47 status=ok
// SIG undefined FUN_1413d9e80(void)

longlong FUN_1413d9e80(void)

{
  if (DAT_14688cef8 == 0) {
    FUN_141786a30(&DAT_14688cef8,&PTR_FUN_146389090);
  }
  return DAT_14688cef8;
}



// FUNCTION 1413d9eb0 FUN_1413d9eb0 body=47 status=ok
// SIG undefined FUN_1413d9eb0(void)

longlong FUN_1413d9eb0(void)

{
  if (DAT_14688cf00 == 0) {
    FUN_141786a30(&DAT_14688cf00,&PTR_FUN_1463890d0);
  }
  return DAT_14688cf00;
}



// FUNCTION 1413d9ee0 FUN_1413d9ee0 body=47 status=ok
// SIG undefined FUN_1413d9ee0(void)

longlong FUN_1413d9ee0(void)

{
  if (DAT_14688cf08 == 0) {
    FUN_141786a30(&DAT_14688cf08,&PTR_FUN_146389110);
  }
  return DAT_14688cf08;
}



// FUNCTION 1413d9f10 FUN_1413d9f10 body=47 status=ok
// SIG undefined FUN_1413d9f10(void)

longlong FUN_1413d9f10(void)

{
  if (DAT_14688cf10 == 0) {
    FUN_141786a30(&DAT_14688cf10,&PTR_FUN_146389150);
  }
  return DAT_14688cf10;
}



// FUNCTION 1413d9f40 FUN_1413d9f40 body=47 status=ok
// SIG undefined FUN_1413d9f40(void)

longlong FUN_1413d9f40(void)

{
  if (DAT_14688cf18 == 0) {
    FUN_141786a30(&DAT_14688cf18,&PTR_FUN_146389190);
  }
  return DAT_14688cf18;
}



// FUNCTION 1413d9f70 FUN_1413d9f70 body=47 status=ok
// SIG undefined FUN_1413d9f70(void)

longlong FUN_1413d9f70(void)

{
  if (DAT_14688cf20 == 0) {
    FUN_141786a30(&DAT_14688cf20,&PTR_FUN_146389210);
  }
  return DAT_14688cf20;
}



// FUNCTION 1413d9fa0 FUN_1413d9fa0 body=47 status=ok
// SIG undefined FUN_1413d9fa0(void)

longlong FUN_1413d9fa0(void)

{
  if (DAT_14688cf28 == 0) {
    FUN_141786a30(&DAT_14688cf28,&PTR_FUN_1463892d0);
  }
  return DAT_14688cf28;
}



// FUNCTION 1413d9fd0 FUN_1413d9fd0 body=47 status=ok
// SIG undefined FUN_1413d9fd0(void)

longlong FUN_1413d9fd0(void)

{
  if (DAT_14688cf30 == 0) {
    FUN_141786a30(&DAT_14688cf30,&PTR_FUN_146389310);
  }
  return DAT_14688cf30;
}



// FUNCTION 1413da000 FUN_1413da000 body=47 status=ok
// SIG undefined FUN_1413da000(void)

longlong FUN_1413da000(void)

{
  if (DAT_14688cf38 == 0) {
    FUN_141786a30(&DAT_14688cf38,&PTR_FUN_1463893d0);
  }
  return DAT_14688cf38;
}



// FUNCTION 1413da030 FUN_1413da030 body=47 status=ok
// SIG undefined FUN_1413da030(void)

longlong FUN_1413da030(void)

{
  if (DAT_14688cf40 == 0) {
    FUN_141786a30(&DAT_14688cf40,&PTR_FUN_146389520);
  }
  return DAT_14688cf40;
}



// FUNCTION 1413da060 FUN_1413da060 body=53 status=ok
// SIG undefined FUN_1413da060(void)

void FUN_1413da060(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x520;
    *puVar1 = &PTR_FUN_1449c97b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413da0a0 FUN_1413da0a0 body=53 status=ok
// SIG undefined FUN_1413da0a0(void)

void FUN_1413da0a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1449c98d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413da0e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGLoadoutBarUW::GetPrivateStaticClass(void)

{
  if (DAT_14688cd60 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakActionAbility",&DAT_14688cd60,FUN_1413ddb00,600,0x10000000
                  ,0,L"Engine",&LAB_1413dbcf0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14144bcb0,&LAB_140447700,0);
  }
  return DAT_14688cd60;
}



// FUNCTION 1413da1a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMaterialInstanceDynamic::GetPrivateStaticClass(void)

{
  if (DAT_14688cb48 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakAction_VehicleInteractionAnim",&DAT_14688cb48,
                  FUN_140447710,0x220,0x10000000,0,L"Engine",FUN_1413dbe60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UTextBlock::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14688cb48;
}



// FUNCTION 1413da250 FUN_1413da250 body=162 status=ok
// SIG undefined FUN_1413da250(void)

longlong FUN_1413da250(void)

{
  if (DAT_14688cdf0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"GbxCondition_IsBeastmasterConsecutiveCritTarget",
                  &DAT_14688cdf0,FUN_140447710,0x88,0x10000000,0,L"Engine",FUN_1413dbc90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1407b5e50,&LAB_140447700,0);
  }
  return DAT_14688cdf0;
}



// FUNCTION 1413da300 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FCameraParams_ScreenPos_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x530;
    *puVar1 = &PTR_FUN_1449c9b40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413da340 FUN_1413da340 body=162 status=ok
// SIG undefined FUN_1413da340(void)

longlong FUN_1413da340(void)

{
  if (DAT_14688ce08 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakAction_Cloak",&DAT_14688ce08,FUN_140447710,0x178,
                  0x10000000,0,L"Engine",FUN_1413dbd90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1413d5810,&LAB_140447700,0);
  }
  return DAT_14688ce08;
}



// FUNCTION 1413da400 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGAccountPage::GetPrivateStaticClass(void)

{
  if (DAT_14688ce40 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakActionAbility_Cloak",&DAT_14688ce40,
                  StaticRegisterNativesUGAccountPage,0x300,0x10000000,0,L"Engine",&LAB_1413dbd50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UUGBrightnessScreenUW::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14688ce40;
}



// FUNCTION 1413da4b0 FUN_1413da4b0 body=162 status=ok
// SIG undefined FUN_1413da4b0(void)

longlong FUN_1413da4b0(void)

{
  if (DAT_14688cb68 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakAction_VehicleMoveTo",&DAT_14688cb68,FUN_140447710,0x78,
                  0x10000000,0,L"Engine",FUN_1413dbf10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142e20fc0,&LAB_140447700,0);
  }
  return DAT_14688cb68;
}



// FUNCTION 1413da560 FUN_1413da560 body=53 status=ok
// SIG undefined FUN_1413da560(void)

void FUN_1413da560(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &PTR_FUN_1449c9f38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413da5b0 FUN_1413da5b0 body=47 status=ok
// SIG undefined FUN_1413da5b0(void)

longlong FUN_1413da5b0(void)

{
  if (DAT_14688ce00 == 0) {
    FUN_141786440(&DAT_14688ce00,&PTR_FUN_1449c5460);
  }
  return DAT_14688ce00;
}



// FUNCTION 1413da5e0 FUN_1413da5e0 body=47 status=ok
// SIG undefined FUN_1413da5e0(void)

longlong FUN_1413da5e0(void)

{
  if (DAT_14688cdf8 == 0) {
    FUN_141786a30(&DAT_14688cdf8,&PTR_FUN_1463882c0);
  }
  return DAT_14688cdf8;
}



// FUNCTION 1413da610 FUN_1413da610 body=47 status=ok
// SIG undefined FUN_1413da610(void)

longlong FUN_1413da610(void)

{
  if (DAT_14688ce38 == 0) {
    FUN_141786440(&DAT_14688ce38,&PTR_GetPrivateStaticClass_1449c6510);
  }
  return DAT_14688ce38;
}



// FUNCTION 1413da640 FUN_1413da640 body=47 status=ok
// SIG undefined FUN_1413da640(void)

longlong FUN_1413da640(void)

{
  if (DAT_14688ce10 == 0) {
    FUN_141786a30(&DAT_14688ce10,&PTR_FUN_146388430);
  }
  return DAT_14688ce10;
}



// FUNCTION 1413da670 FUN_1413da670 body=47 status=ok
// SIG undefined FUN_1413da670(void)

longlong FUN_1413da670(void)

{
  if (DAT_14688ce18 == 0) {
    FUN_141786a30(&DAT_14688ce18,&PTR_FUN_146388470);
  }
  return DAT_14688ce18;
}



// FUNCTION 1413da6a0 FUN_1413da6a0 body=47 status=ok
// SIG undefined FUN_1413da6a0(void)

longlong FUN_1413da6a0(void)

{
  if (DAT_14688ce20 == 0) {
    FUN_141786a30(&DAT_14688ce20,&PTR_FUN_1463884b0);
  }
  return DAT_14688ce20;
}



// FUNCTION 1413da6d0 FUN_1413da6d0 body=47 status=ok
// SIG undefined FUN_1413da6d0(void)

longlong FUN_1413da6d0(void)

{
  if (DAT_14688ce28 == 0) {
    FUN_141786a30(&DAT_14688ce28,&PTR_FUN_1463884f0);
  }
  return DAT_14688ce28;
}



// FUNCTION 1413da700 FUN_1413da700 body=47 status=ok
// SIG undefined FUN_1413da700(void)

longlong FUN_1413da700(void)

{
  if (DAT_14688ce30 == 0) {
    FUN_141786a30(&DAT_14688ce30,&PTR_FUN_146388570);
  }
  return DAT_14688ce30;
}



// FUNCTION 1413da730 FUN_1413da730 body=53 status=ok
// SIG undefined FUN_1413da730(void)

void FUN_1413da730(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c0;
    *puVar1 = &PTR_FUN_1449cae00;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413da770 FUN_1413da770 body=53 status=ok
// SIG undefined FUN_1413da770(void)

void FUN_1413da770(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1449caf18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413da7b0 FUN_1413da7b0 body=162 status=ok
// SIG undefined FUN_1413da7b0(void)

longlong FUN_1413da7b0(void)

{
  if (DAT_14688cb88 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"AnimNotify_InterpolateVehicleToGround",&DAT_14688cb88,
                  FUN_140447710,0x38,0x10000000,0,L"Engine",&LAB_1413dbc80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimNotify::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14688cb88;
}



// FUNCTION 1413da870 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEnvQueryTest_Random::StaticClass(void)

{
  if (DAT_14688cb98 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakAction_VehicleSpawnAnim",&DAT_14688cb98,FUN_140447710,
                  0x1c0,0x10000000,0,L"Engine",&LAB_1413dbfc0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  StaticClass,&LAB_140447700,0);
  }
  return DAT_14688cb98;
}



// FUNCTION 1413da920 FUN_1413da920 body=53 status=ok
// SIG undefined FUN_1413da920(void)

void FUN_1413da920(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x518;
    *puVar1 = &PTR_FUN_1449ca1a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413da970 FUN_1413da970 body=47 status=ok
// SIG undefined FUN_1413da970(void)

longlong FUN_1413da970(void)

{
  if (DAT_14688cd58 == 0) {
    FUN_141786440(&DAT_14688cd58,&PTR_GetPrivateStaticClass_1449c7c00);
  }
  return DAT_14688cd58;
}



// FUNCTION 1413da9a0 FUN_1413da9a0 body=47 status=ok
// SIG undefined FUN_1413da9a0(void)

longlong FUN_1413da9a0(void)

{
  if (DAT_14688cbb0 == 0) {
    FUN_141786a30(&DAT_14688cbb0,&PTR_FUN_146385ab0);
  }
  return DAT_14688cbb0;
}



// FUNCTION 1413da9d0 FUN_1413da9d0 body=47 status=ok
// SIG undefined FUN_1413da9d0(void)

longlong FUN_1413da9d0(void)

{
  if (DAT_14688cbb8 == 0) {
    FUN_141786a30(&DAT_14688cbb8,&PTR_FUN_146385af0);
  }
  return DAT_14688cbb8;
}



// FUNCTION 1413daa00 FUN_1413daa00 body=47 status=ok
// SIG undefined FUN_1413daa00(void)

longlong FUN_1413daa00(void)

{
  if (DAT_14688cbc0 == 0) {
    FUN_141786a30(&DAT_14688cbc0,&PTR_FUN_146385b70);
  }
  return DAT_14688cbc0;
}



// FUNCTION 1413daa30 FUN_1413daa30 body=47 status=ok
// SIG undefined FUN_1413daa30(void)

longlong FUN_1413daa30(void)

{
  if (DAT_14688cbc8 == 0) {
    FUN_141786a30(&DAT_14688cbc8,&PTR_FUN_146385bf0);
  }
  return DAT_14688cbc8;
}



// FUNCTION 1413daa60 FUN_1413daa60 body=47 status=ok
// SIG undefined FUN_1413daa60(void)

longlong FUN_1413daa60(void)

{
  if (DAT_14688cbd0 == 0) {
    FUN_141786a30(&DAT_14688cbd0,&PTR_FUN_146385c70);
  }
  return DAT_14688cbd0;
}



// FUNCTION 1413daa90 FUN_1413daa90 body=47 status=ok
// SIG undefined FUN_1413daa90(void)

longlong FUN_1413daa90(void)

{
  if (DAT_14688cbd8 == 0) {
    FUN_141786a30(&DAT_14688cbd8,&PTR_FUN_146385cf0);
  }
  return DAT_14688cbd8;
}



// FUNCTION 1413daac0 FUN_1413daac0 body=47 status=ok
// SIG undefined FUN_1413daac0(void)

longlong FUN_1413daac0(void)

{
  if (DAT_14688cbe0 == 0) {
    FUN_141786a30(&DAT_14688cbe0,&PTR_FUN_146385d70);
  }
  return DAT_14688cbe0;
}



// FUNCTION 1413daaf0 FUN_1413daaf0 body=47 status=ok
// SIG undefined FUN_1413daaf0(void)

longlong FUN_1413daaf0(void)

{
  if (DAT_14688cbe8 == 0) {
    FUN_141786a30(&DAT_14688cbe8,&PTR_FUN_146385df0);
  }
  return DAT_14688cbe8;
}



// FUNCTION 1413dab20 FUN_1413dab20 body=47 status=ok
// SIG undefined FUN_1413dab20(void)

longlong FUN_1413dab20(void)

{
  if (DAT_14688cbf0 == 0) {
    FUN_141786a30(&DAT_14688cbf0,&PTR_FUN_146385f30);
  }
  return DAT_14688cbf0;
}



// FUNCTION 1413dab50 FUN_1413dab50 body=47 status=ok
// SIG undefined FUN_1413dab50(void)

longlong FUN_1413dab50(void)

{
  if (DAT_14688cbf8 == 0) {
    FUN_141786a30(&DAT_14688cbf8,&PTR_FUN_146386070);
  }
  return DAT_14688cbf8;
}



// FUNCTION 1413dab80 FUN_1413dab80 body=47 status=ok
// SIG undefined FUN_1413dab80(void)

longlong FUN_1413dab80(void)

{
  if (DAT_14688cc00 == 0) {
    FUN_141786a30(&DAT_14688cc00,&PTR_FUN_1463860f0);
  }
  return DAT_14688cc00;
}



// FUNCTION 1413dabb0 FUN_1413dabb0 body=47 status=ok
// SIG undefined FUN_1413dabb0(void)

longlong FUN_1413dabb0(void)

{
  if (DAT_14688cc08 == 0) {
    FUN_141786a30(&DAT_14688cc08,&PTR_FUN_1463861b0);
  }
  return DAT_14688cc08;
}



// FUNCTION 1413dabe0 FUN_1413dabe0 body=47 status=ok
// SIG undefined FUN_1413dabe0(void)

longlong FUN_1413dabe0(void)

{
  if (DAT_14688cc10 == 0) {
    FUN_141786a30(&DAT_14688cc10,&PTR_FUN_1463861f0);
  }
  return DAT_14688cc10;
}



// FUNCTION 1413dac10 FUN_1413dac10 body=47 status=ok
// SIG undefined FUN_1413dac10(void)

longlong FUN_1413dac10(void)

{
  if (DAT_14688cc18 == 0) {
    FUN_141786a30(&DAT_14688cc18,&PTR_FUN_146386230);
  }
  return DAT_14688cc18;
}



// FUNCTION 1413dac40 FUN_1413dac40 body=47 status=ok
// SIG undefined FUN_1413dac40(void)

longlong FUN_1413dac40(void)

{
  if (DAT_14688cc20 == 0) {
    FUN_141786a30(&DAT_14688cc20,&PTR_FUN_146386270);
  }
  return DAT_14688cc20;
}



// FUNCTION 1413dac70 FUN_1413dac70 body=47 status=ok
// SIG undefined FUN_1413dac70(void)

longlong FUN_1413dac70(void)

{
  if (DAT_14688cc28 == 0) {
    FUN_141786a30(&DAT_14688cc28,&PTR_FUN_1463862b0);
  }
  return DAT_14688cc28;
}



// FUNCTION 1413daca0 FUN_1413daca0 body=47 status=ok
// SIG undefined FUN_1413daca0(void)

longlong FUN_1413daca0(void)

{
  if (DAT_14688cc30 == 0) {
    FUN_141786a30(&DAT_14688cc30,&PTR_FUN_1463862f0);
  }
  return DAT_14688cc30;
}



// FUNCTION 1413dacd0 FUN_1413dacd0 body=47 status=ok
// SIG undefined FUN_1413dacd0(void)

longlong FUN_1413dacd0(void)

{
  if (DAT_14688cc38 == 0) {
    FUN_141786a30(&DAT_14688cc38,&PTR_FUN_146386330);
  }
  return DAT_14688cc38;
}



// FUNCTION 1413dad00 FUN_1413dad00 body=47 status=ok
// SIG undefined FUN_1413dad00(void)

longlong FUN_1413dad00(void)

{
  if (DAT_14688cc40 == 0) {
    FUN_141786a30(&DAT_14688cc40,&PTR_FUN_1463863c0);
  }
  return DAT_14688cc40;
}



// FUNCTION 1413dad30 FUN_1413dad30 body=47 status=ok
// SIG undefined FUN_1413dad30(void)

longlong FUN_1413dad30(void)

{
  if (DAT_14688cc48 == 0) {
    FUN_141786a30(&DAT_14688cc48,&PTR_FUN_146386450);
  }
  return DAT_14688cc48;
}



// FUNCTION 1413dad60 FUN_1413dad60 body=47 status=ok
// SIG undefined FUN_1413dad60(void)

longlong FUN_1413dad60(void)

{
  if (DAT_14688cc50 == 0) {
    FUN_141786a30(&DAT_14688cc50,&PTR_FUN_146386520);
  }
  return DAT_14688cc50;
}



// FUNCTION 1413dad90 FUN_1413dad90 body=47 status=ok
// SIG undefined FUN_1413dad90(void)

longlong FUN_1413dad90(void)

{
  if (DAT_14688cc58 == 0) {
    FUN_141786a30(&DAT_14688cc58,&PTR_FUN_146386630);
  }
  return DAT_14688cc58;
}



// FUNCTION 1413dadc0 FUN_1413dadc0 body=47 status=ok
// SIG undefined FUN_1413dadc0(void)

longlong FUN_1413dadc0(void)

{
  if (DAT_14688cc60 == 0) {
    FUN_141786a30(&DAT_14688cc60,&PTR_FUN_146386700);
  }
  return DAT_14688cc60;
}



// FUNCTION 1413dadf0 FUN_1413dadf0 body=47 status=ok
// SIG undefined FUN_1413dadf0(void)

longlong FUN_1413dadf0(void)

{
  if (DAT_14688cc68 == 0) {
    FUN_141786a30(&DAT_14688cc68,&PTR_FUN_146386790);
  }
  return DAT_14688cc68;
}



// FUNCTION 1413dae20 FUN_1413dae20 body=47 status=ok
// SIG undefined FUN_1413dae20(void)

longlong FUN_1413dae20(void)

{
  if (DAT_14688cc70 == 0) {
    FUN_141786a30(&DAT_14688cc70,&PTR_FUN_146386820);
  }
  return DAT_14688cc70;
}



// FUNCTION 1413dae50 FUN_1413dae50 body=47 status=ok
// SIG undefined FUN_1413dae50(void)

longlong FUN_1413dae50(void)

{
  if (DAT_14688cc78 == 0) {
    FUN_141786a30(&DAT_14688cc78,&PTR_FUN_1463868b0);
  }
  return DAT_14688cc78;
}



// FUNCTION 1413dae80 FUN_1413dae80 body=47 status=ok
// SIG undefined FUN_1413dae80(void)

longlong FUN_1413dae80(void)

{
  if (DAT_14688cc80 == 0) {
    FUN_141786a30(&DAT_14688cc80,&PTR_FUN_146386940);
  }
  return DAT_14688cc80;
}



// FUNCTION 1413daeb0 FUN_1413daeb0 body=47 status=ok
// SIG undefined FUN_1413daeb0(void)

longlong FUN_1413daeb0(void)

{
  if (DAT_14688cc88 == 0) {
    FUN_141786a30(&DAT_14688cc88,&PTR_FUN_1463869c0);
  }
  return DAT_14688cc88;
}



// FUNCTION 1413daee0 FUN_1413daee0 body=47 status=ok
// SIG undefined FUN_1413daee0(void)

longlong FUN_1413daee0(void)

{
  if (DAT_14688cc90 == 0) {
    FUN_141786a30(&DAT_14688cc90,&PTR_FUN_146386a40);
  }
  return DAT_14688cc90;
}



// FUNCTION 1413daf10 FUN_1413daf10 body=47 status=ok
// SIG undefined FUN_1413daf10(void)

longlong FUN_1413daf10(void)

{
  if (DAT_14688cc98 == 0) {
    FUN_141786a30(&DAT_14688cc98,&PTR_FUN_146386a80);
  }
  return DAT_14688cc98;
}



// FUNCTION 1413daf40 FUN_1413daf40 body=47 status=ok
// SIG undefined FUN_1413daf40(void)

longlong FUN_1413daf40(void)

{
  if (DAT_14688cca0 == 0) {
    FUN_141786a30(&DAT_14688cca0,&PTR_FUN_146386b00);
  }
  return DAT_14688cca0;
}



// FUNCTION 1413daf70 FUN_1413daf70 body=47 status=ok
// SIG undefined FUN_1413daf70(void)

longlong FUN_1413daf70(void)

{
  if (DAT_14688cca8 == 0) {
    FUN_141786a30(&DAT_14688cca8,&PTR_FUN_146386b40);
  }
  return DAT_14688cca8;
}



// FUNCTION 1413dafa0 FUN_1413dafa0 body=47 status=ok
// SIG undefined FUN_1413dafa0(void)

longlong FUN_1413dafa0(void)

{
  if (DAT_14688ccb0 == 0) {
    FUN_141786a30(&DAT_14688ccb0,&PTR_FUN_146386b80);
  }
  return DAT_14688ccb0;
}



// FUNCTION 1413dafd0 FUN_1413dafd0 body=47 status=ok
// SIG undefined FUN_1413dafd0(void)

longlong FUN_1413dafd0(void)

{
  if (DAT_14688ccb8 == 0) {
    FUN_141786a30(&DAT_14688ccb8,&PTR_FUN_146386bc0);
  }
  return DAT_14688ccb8;
}



// FUNCTION 1413db000 FUN_1413db000 body=47 status=ok
// SIG undefined FUN_1413db000(void)

longlong FUN_1413db000(void)

{
  if (DAT_14688ccc0 == 0) {
    FUN_141786a30(&DAT_14688ccc0,&PTR_FUN_146386c00);
  }
  return DAT_14688ccc0;
}



// FUNCTION 1413db030 FUN_1413db030 body=47 status=ok
// SIG undefined FUN_1413db030(void)

longlong FUN_1413db030(void)

{
  if (DAT_14688ccc8 == 0) {
    FUN_141786a30(&DAT_14688ccc8,&PTR_FUN_146386c90);
  }
  return DAT_14688ccc8;
}



// FUNCTION 1413db060 FUN_1413db060 body=47 status=ok
// SIG undefined FUN_1413db060(void)

longlong FUN_1413db060(void)

{
  if (DAT_14688ccd0 == 0) {
    FUN_141786a30(&DAT_14688ccd0,&PTR_FUN_146386cd0);
  }
  return DAT_14688ccd0;
}



// FUNCTION 1413db090 FUN_1413db090 body=47 status=ok
// SIG undefined FUN_1413db090(void)

longlong FUN_1413db090(void)

{
  if (DAT_14688ccd8 == 0) {
    FUN_141786a30(&DAT_14688ccd8,&PTR_FUN_146386d10);
  }
  return DAT_14688ccd8;
}



// FUNCTION 1413db0c0 FUN_1413db0c0 body=47 status=ok
// SIG undefined FUN_1413db0c0(void)

longlong FUN_1413db0c0(void)

{
  if (DAT_14688cce0 == 0) {
    FUN_141786a30(&DAT_14688cce0,&PTR_FUN_146386d50);
  }
  return DAT_14688cce0;
}



// FUNCTION 1413db0f0 FUN_1413db0f0 body=47 status=ok
// SIG undefined FUN_1413db0f0(void)

longlong FUN_1413db0f0(void)

{
  if (DAT_14688cce8 == 0) {
    FUN_141786a30(&DAT_14688cce8,&PTR_FUN_146386d90);
  }
  return DAT_14688cce8;
}



// FUNCTION 1413db120 FUN_1413db120 body=47 status=ok
// SIG undefined FUN_1413db120(void)

longlong FUN_1413db120(void)

{
  if (DAT_14688ccf0 == 0) {
    FUN_141786a30(&DAT_14688ccf0,&PTR_FUN_146386dd0);
  }
  return DAT_14688ccf0;
}



// FUNCTION 1413db150 FUN_1413db150 body=47 status=ok
// SIG undefined FUN_1413db150(void)

longlong FUN_1413db150(void)

{
  if (DAT_14688ccf8 == 0) {
    FUN_141786a30(&DAT_14688ccf8,&PTR_FUN_146386e10);
  }
  return DAT_14688ccf8;
}



// FUNCTION 1413db180 FUN_1413db180 body=47 status=ok
// SIG undefined FUN_1413db180(void)

longlong FUN_1413db180(void)

{
  if (DAT_14688cd00 == 0) {
    FUN_141786a30(&DAT_14688cd00,&PTR_FUN_146386e90);
  }
  return DAT_14688cd00;
}



// FUNCTION 1413db1b0 FUN_1413db1b0 body=47 status=ok
// SIG undefined FUN_1413db1b0(void)

longlong FUN_1413db1b0(void)

{
  if (DAT_14688cd08 == 0) {
    FUN_141786a30(&DAT_14688cd08,&PTR_FUN_146386ed0);
  }
  return DAT_14688cd08;
}



// FUNCTION 1413db1e0 FUN_1413db1e0 body=47 status=ok
// SIG undefined FUN_1413db1e0(void)

longlong FUN_1413db1e0(void)

{
  if (DAT_14688cd10 == 0) {
    FUN_141786a30(&DAT_14688cd10,&PTR_FUN_146386f10);
  }
  return DAT_14688cd10;
}



// FUNCTION 1413db210 FUN_1413db210 body=47 status=ok
// SIG undefined FUN_1413db210(void)

longlong FUN_1413db210(void)

{
  if (DAT_14688cd18 == 0) {
    FUN_141786a30(&DAT_14688cd18,&PTR_FUN_146386f50);
  }
  return DAT_14688cd18;
}



// FUNCTION 1413db240 FUN_1413db240 body=47 status=ok
// SIG undefined FUN_1413db240(void)

longlong FUN_1413db240(void)

{
  if (DAT_14688cd20 == 0) {
    FUN_141786a30(&DAT_14688cd20,&PTR_FUN_146386f90);
  }
  return DAT_14688cd20;
}



// FUNCTION 1413db270 FUN_1413db270 body=47 status=ok
// SIG undefined FUN_1413db270(void)

longlong FUN_1413db270(void)

{
  if (DAT_14688cd28 == 0) {
    FUN_141786a30(&DAT_14688cd28,&PTR_FUN_146387050);
  }
  return DAT_14688cd28;
}



// FUNCTION 1413db2a0 FUN_1413db2a0 body=47 status=ok
// SIG undefined FUN_1413db2a0(void)

longlong FUN_1413db2a0(void)

{
  if (DAT_14688cd30 == 0) {
    FUN_141786a30(&DAT_14688cd30,&PTR_FUN_146387120);
  }
  return DAT_14688cd30;
}



// FUNCTION 1413db2d0 FUN_1413db2d0 body=47 status=ok
// SIG undefined FUN_1413db2d0(void)

longlong FUN_1413db2d0(void)

{
  if (DAT_14688cd38 == 0) {
    FUN_141786a30(&DAT_14688cd38,&PTR_FUN_1463871b0);
  }
  return DAT_14688cd38;
}



// FUNCTION 1413db300 FUN_1413db300 body=47 status=ok
// SIG undefined FUN_1413db300(void)

longlong FUN_1413db300(void)

{
  if (DAT_14688cd40 == 0) {
    FUN_141786a30(&DAT_14688cd40,&PTR_FUN_146387240);
  }
  return DAT_14688cd40;
}



// FUNCTION 1413db330 FUN_1413db330 body=47 status=ok
// SIG undefined FUN_1413db330(void)

longlong FUN_1413db330(void)

{
  if (DAT_14688cd48 == 0) {
    FUN_141786a30(&DAT_14688cd48,&PTR_FUN_146387280);
  }
  return DAT_14688cd48;
}



// FUNCTION 1413db360 FUN_1413db360 body=47 status=ok
// SIG undefined FUN_1413db360(void)

longlong FUN_1413db360(void)

{
  if (DAT_14688cd50 == 0) {
    FUN_141786a30(&DAT_14688cd50,&PTR_FUN_1463872c0);
  }
  return DAT_14688cd50;
}



// FUNCTION 1413db3e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMHWaitingRewardsListButtonWidget::GetPrivateStaticClass(void)

{
  if (DAT_14688cda0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakActionAbility_Barrier",&DAT_14688cda0,
                  StaticRegisterNativesUMHWaitingRewardsListButtonWidget,0x278,0x10000000,0,
                  L"Engine",&LAB_1413dbd10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UUGLoadoutBarUW::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14688cda0;
}



// FUNCTION 1413db490 FUN_1413db490 body=47 status=ok
// SIG undefined FUN_1413db490(void)

longlong FUN_1413db490(void)

{
  if (DAT_14688cd98 == 0) {
    FUN_141786440(&DAT_14688cd98,&PTR_GetPrivateStaticClass_1449c8870);
  }
  return DAT_14688cd98;
}



// FUNCTION 1413db4c0 FUN_1413db4c0 body=47 status=ok
// SIG undefined FUN_1413db4c0(void)

longlong FUN_1413db4c0(void)

{
  if (DAT_14688cd68 == 0) {
    FUN_141786a30(&DAT_14688cd68,&PTR_FUN_146387a00);
  }
  return DAT_14688cd68;
}



// FUNCTION 1413db4f0 FUN_1413db4f0 body=47 status=ok
// SIG undefined FUN_1413db4f0(void)

longlong FUN_1413db4f0(void)

{
  if (DAT_14688cd70 == 0) {
    FUN_141786a30(&DAT_14688cd70,&PTR_FUN_146387a80);
  }
  return DAT_14688cd70;
}



// FUNCTION 1413db520 FUN_1413db520 body=47 status=ok
// SIG undefined FUN_1413db520(void)

longlong FUN_1413db520(void)

{
  if (DAT_14688cd78 == 0) {
    FUN_141786a30(&DAT_14688cd78,&PTR_FUN_146387ac0);
  }
  return DAT_14688cd78;
}



// FUNCTION 1413db550 FUN_1413db550 body=47 status=ok
// SIG undefined FUN_1413db550(void)

longlong FUN_1413db550(void)

{
  if (DAT_14688cd80 == 0) {
    FUN_141786a30(&DAT_14688cd80,&PTR_FUN_146387b80);
  }
  return DAT_14688cd80;
}



// FUNCTION 1413db580 FUN_1413db580 body=47 status=ok
// SIG undefined FUN_1413db580(void)

longlong FUN_1413db580(void)

{
  if (DAT_14688cd88 == 0) {
    FUN_141786a30(&DAT_14688cd88,&PTR_FUN_146387bc0);
  }
  return DAT_14688cd88;
}



// FUNCTION 1413db5b0 FUN_1413db5b0 body=47 status=ok
// SIG undefined FUN_1413db5b0(void)

longlong FUN_1413db5b0(void)

{
  if (DAT_14688cd90 == 0) {
    FUN_141786a30(&DAT_14688cd90,&PTR_FUN_146387c90);
  }
  return DAT_14688cd90;
}



// FUNCTION 1413db5e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAnimMontage::GetPrivateStaticClass(void)

{
  if (DAT_14688caf8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakAction_PhysicalDeath",&DAT_14688caf8,
                  StaticRegisterNativesUAnimMontage,0x200,0x10000000,0,L"Engine",&LAB_1413dbe40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142e25ce0,&LAB_140447700,0);
  }
  return DAT_14688caf8;
}



// FUNCTION 1413db690 FUN_1413db690 body=47 status=ok
// SIG undefined FUN_1413db690(void)

longlong FUN_1413db690(void)

{
  if (DAT_14688caf0 == 0) {
    FUN_141786440(&DAT_14688caf0,&PTR_GetPrivateStaticClass_1449c8bc0);
  }
  return DAT_14688caf0;
}



// FUNCTION 1413db6c0 FUN_1413db6c0 body=47 status=ok
// SIG undefined FUN_1413db6c0(void)

longlong FUN_1413db6c0(void)

{
  if (DAT_14688cae8 == 0) {
    FUN_141786a30(&DAT_14688cae8,&PTR_FUN_1463852c0);
  }
  return DAT_14688cae8;
}



// FUNCTION 1413db700 FUN_1413db700 body=53 status=ok
// SIG undefined FUN_1413db700(void)

void FUN_1413db700(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x538;
    *puVar1 = &PTR_FUN_1449c9690;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413db740 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGBrightnessScreenUW::GetPrivateStaticClass(void)

{
  if (DAT_14688cdc0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakActionAbility_Beastmaster",&DAT_14688cdc0,FUN_1413ddb60,
                  0x268,0x10000000,0,L"Engine",&LAB_1413dbd30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UUGLoadoutBarUW::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14688cdc0;
}



// FUNCTION 1413db7f0 FUN_1413db7f0 body=47 status=ok
// SIG undefined FUN_1413db7f0(void)

longlong FUN_1413db7f0(void)

{
  if (DAT_14688cdb8 == 0) {
    FUN_141786440(&DAT_14688cdb8,&PTR_GetPrivateStaticClass_1449c8e60);
  }
  return DAT_14688cdb8;
}



// FUNCTION 1413db820 FUN_1413db820 body=47 status=ok
// SIG undefined FUN_1413db820(void)

longlong FUN_1413db820(void)

{
  if (DAT_14688cda8 == 0) {
    FUN_141786a30(&DAT_14688cda8,&PTR_FUN_146387e40);
  }
  return DAT_14688cda8;
}



// FUNCTION 1413db850 FUN_1413db850 body=47 status=ok
// SIG undefined FUN_1413db850(void)

longlong FUN_1413db850(void)

{
  if (DAT_14688cdb0 == 0) {
    FUN_141786a30(&DAT_14688cdb0,&PTR_FUN_146387f50);
  }
  return DAT_14688cdb0;
}



// FUNCTION 1413db8a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AUGWallHowlingMouthTrap::GetPrivateStaticClass(void)

{
  if (DAT_14688cf50 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakActionAbility_Digiclone",&DAT_14688cf50,FUN_1413ddbc0,
                  0x400,0x10000000,0,L"Engine",&LAB_1413dbd70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UUGLoadoutBarUW::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14688cf50;
}



// FUNCTION 1413db950 FUN_1413db950 body=47 status=ok
// SIG undefined FUN_1413db950(void)

longlong FUN_1413db950(void)

{
  if (DAT_14688cf48 == 0) {
    FUN_141786440(&DAT_14688cf48,&PTR_GetPrivateStaticClass_1449c5550);
  }
  return DAT_14688cf48;
}



// FUNCTION 1413db980 FUN_1413db980 body=47 status=ok
// SIG undefined FUN_1413db980(void)

longlong FUN_1413db980(void)

{
  if (DAT_14688ce50 == 0) {
    FUN_141786a30(&DAT_14688ce50,&PTR_FUN_1463887b0);
  }
  return DAT_14688ce50;
}



// FUNCTION 1413db9b0 FUN_1413db9b0 body=47 status=ok
// SIG undefined FUN_1413db9b0(void)

longlong FUN_1413db9b0(void)

{
  if (DAT_14688ce58 == 0) {
    FUN_141786a30(&DAT_14688ce58,&PTR_FUN_1463887f0);
  }
  return DAT_14688ce58;
}



// FUNCTION 1413db9e0 FUN_1413db9e0 body=47 status=ok
// SIG undefined FUN_1413db9e0(void)

longlong FUN_1413db9e0(void)

{
  if (DAT_14688ce60 == 0) {
    FUN_141786a30(&DAT_14688ce60,&PTR_FUN_146388830);
  }
  return DAT_14688ce60;
}


