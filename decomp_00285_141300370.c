// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141300370 FUN_141300370 body=126 status=ok
// SIG undefined FUN_141300370(void)

void FUN_141300370(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x2ed) = 1;
    *puVar1 = &PTR_FUN_1447d9e40;
    puVar1[0x20] = &PTR_LAB_1447da2e0;
    puVar1[0x41] = &PTR_LAB_1447da308;
    puVar1[0x57] = &PTR_LAB_1447da358;
    puVar1[0x60] = 0;
    puVar1[0x61] = 0;
    puVar1[0x62] = 0;
    *(undefined1 *)(puVar1 + 99) = 0;
    puVar1[100] = 0;
  }
  return;
}



// FUNCTION 1413003f0 FUN_1413003f0 body=49 status=ok
// SIG undefined FUN_1413003f0(void)

void FUN_1413003f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447da508;
  }
  return;
}



// FUNCTION 141300430 FUN_141300430 body=53 status=ok
// SIG undefined FUN_141300430(void)

void FUN_141300430(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447da788;
    *(undefined1 *)(puVar1 + 7) = 1;
  }
  return;
}



// FUNCTION 141300470 FUN_141300470 body=51 status=ok
// SIG undefined FUN_141300470(void)

void FUN_141300470(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447daa08;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 1413004b0 FUN_1413004b0 body=49 status=ok
// SIG undefined FUN_1413004b0(void)

void FUN_1413004b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447dac88;
  }
  return;
}



// FUNCTION 1413004f0 FUN_1413004f0 body=49 status=ok
// SIG undefined FUN_1413004f0(void)

void FUN_1413004f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447daf08;
  }
  return;
}



// FUNCTION 141300530 FUN_141300530 body=51 status=ok
// SIG undefined FUN_141300530(void)

void FUN_141300530(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_1447d92d8;
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  return;
}



// FUNCTION 141300570 FUN_141300570 body=136 status=ok
// SIG undefined FUN_141300570(void)

undefined4 * FUN_141300570(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0x3f800000;
  param_1[0xe] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1c] = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0x3f800000;
  FUN_142494900(param_1 + 0x35);
  return param_1;
}



// FUNCTION 141300600 FUN_141300600 body=192 status=ok
// SIG undefined FUN_141300600(void)

longlong FUN_141300600(longlong param_1)

{
  FName::FName(param_1 + 0x30,L"FireDamageEvent",1);
  FName::FName(param_1 + 0x38,L"Single",1);
  *(undefined4 *)(param_1 + 0x40) = 3;
  FName::FName(param_1 + 0x48,L"LOSDamageEvent",1);
  FName::FName(param_1 + 0x50,L"Full",1);
  FName::FName(param_1 + 0x58,L"DamageSeverity",1);
  FName::FName(param_1 + 0x60,L"DamageDirection",1);
  *(undefined4 *)(param_1 + 0x68) = 0x3e000000;
  *(undefined4 *)(param_1 + 0x6c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x70) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x74) = 0x40000000;
  *(undefined4 *)(param_1 + 0x78) = 0x453b8000;
  return param_1;
}



// FUNCTION 1413006c0 FUN_1413006c0 body=173 status=ok
// SIG undefined FUN_1413006c0(void)

longlong FUN_1413006c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1 + 0x54;
  lVar2 = 4;
  do {
    *(undefined4 *)(lVar1 + -0x54) = 0;
    *(undefined8 *)(lVar1 + -0x4c) = 0;
    *(undefined8 *)(lVar1 + -0x44) = 0;
    *(undefined8 *)(lVar1 + -0x3c) = 0;
    *(undefined8 *)(lVar1 + -0x34) = 0;
    *(undefined8 *)(lVar1 + -0x2c) = 0;
    *(undefined4 *)(lVar1 + -0x24) = 0x3f800000;
    *(undefined4 *)(lVar1 + -0x1c) = 0;
    *(undefined8 *)(lVar1 + -0x14) = 0;
    *(undefined8 *)(lVar1 + -0xc) = 0;
    *(undefined8 *)(lVar1 + -4) = 0;
    *(undefined8 *)(lVar1 + 4) = 0;
    *(undefined8 *)(lVar1 + 0xc) = 0;
    *(undefined4 *)(lVar1 + 0x14) = 0x3f800000;
    *(undefined4 *)(lVar1 + 0x1c) = 0;
    *(undefined8 *)(lVar1 + 0x24) = 0;
    *(undefined8 *)(lVar1 + 0x2c) = 0;
    *(undefined8 *)(lVar1 + 0x34) = 0;
    *(undefined8 *)(lVar1 + 0x3c) = 0;
    *(undefined8 *)(lVar1 + 0x44) = 0;
    *(undefined4 *)(lVar1 + 0x4c) = 0x3f800000;
    FUN_142494900(lVar1 + 0x80);
    lVar1 = lVar1 + 0xe0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}



// FUNCTION 141300770 FUN_141300770 body=222 status=ok
// SIG undefined FUN_141300770(void)

undefined8 * FUN_141300770(undefined8 *param_1)

{
  FUN_1420d5de0();
  *(undefined4 *)(param_1 + 0x42) = 0;
  *param_1 = &PTR_FUN_1447d6728;
  *(undefined2 *)(param_1 + 0x46) = 0x300;
  param_1[0x20] = &PTR_LAB_1447d6bc0;
  param_1[0x41] = &PTR_LAB_1447d6be8;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x4c,0);
  param_1[0x4d] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x4e,0);
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0xffffffff;
  return param_1;
}



// FUNCTION 141300850 ~TArray<FCommandListCommandItem,TSizedDefaultAllocator<32>_> body=173 status=ok
// SIG undefined ~TArray<FCommandListCommandItem,TSizedDefaultAllocator<32>_>(void)

void TArray<FCommandListCommandItem,TSizedDefaultAllocator<32>_>::
     ~TArray<FCommandListCommandItem,TSizedDefaultAllocator<32>_>(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 8);
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
      plVar7 = plVar7 + 6;
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



// FUNCTION 141300900 FUN_141300900 body=115 status=ok
// SIG undefined FUN_141300900(void)

void FUN_141300900(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x20);
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
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 141300980 FUN_141300980 body=354 status=ok
// SIG undefined FUN_141300980(void)

void FUN_141300980(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x1e8);
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
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x148);
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
  *(undefined ***)(param_1 + 0x100) = &PTR_FUN_1447d59a0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0xe8);
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
  plVar4 = *(longlong **)(param_1 + 0xd8);
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
  plVar4 = *(longlong **)(param_1 + 0x48);
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
  FUN_141782120(param_1);
  return;
}



// FUNCTION 141300af0 FUN_141300af0 body=1164 status=ok
// SIG undefined FUN_141300af0(void)

undefined8 * FUN_141300af0(undefined8 *param_1,undefined8 *param_2)

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
  param_1[6] = param_2[6];
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar1;
  param_1[0xd] = param_2[0xd];
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined1 *)((longlong)param_1 + 0xd4) = *(undefined1 *)((longlong)param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_2 + 0xdc);
  uVar1 = param_2[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar1;
  uVar1 = param_2[0x1f];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = uVar1;
  uVar1 = param_2[0x21];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar1;
  param_1[0x22] = param_2[0x22];
  uVar1 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = uVar1;
  uVar1 = param_2[0x26];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = uVar1;
  uVar1 = param_2[0x28];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = uVar1;
  param_1[0x29] = param_2[0x29];
  uVar1 = param_2[0x2b];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = uVar1;
  uVar1 = param_2[0x2d];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar1;
  uVar1 = param_2[0x2f];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = uVar1;
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  param_1[0x34] = param_2[0x34];
  *(undefined4 *)(param_1 + 0x35) = *(undefined4 *)(param_2 + 0x35);
  *(undefined4 *)((longlong)param_1 + 0x1ac) = *(undefined4 *)((longlong)param_2 + 0x1ac);
  *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)(param_2 + 0x36);
  *(undefined1 *)((longlong)param_1 + 0x1b4) = *(undefined1 *)((longlong)param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_2 + 0x37);
  *(undefined4 *)((longlong)param_1 + 0x1bc) = *(undefined4 *)((longlong)param_2 + 0x1bc);
  uVar1 = param_2[0x39];
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = uVar1;
  uVar1 = param_2[0x3b];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = uVar1;
  uVar1 = param_2[0x3d];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = uVar1;
  param_1[0x3e] = param_2[0x3e];
  uVar1 = param_2[0x40];
  param_1[0x3f] = param_2[0x3f];
  param_1[0x40] = uVar1;
  uVar1 = param_2[0x42];
  param_1[0x41] = param_2[0x41];
  param_1[0x42] = uVar1;
  uVar1 = param_2[0x44];
  param_1[0x43] = param_2[0x43];
  param_1[0x44] = uVar1;
  param_1[0x45] = param_2[0x45];
  uVar1 = param_2[0x47];
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = uVar1;
  uVar1 = param_2[0x49];
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = uVar1;
  uVar1 = param_2[0x4b];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x4b] = uVar1;
  param_1[0x4c] = param_2[0x4c];
  param_1[0x4d] = param_2[0x4d];
  param_1[0x4e] = param_2[0x4e];
  param_1[0x4f] = param_2[0x4f];
  param_1[0x50] = param_2[0x50];
  *(undefined4 *)(param_1 + 0x51) = *(undefined4 *)(param_2 + 0x51);
  *(undefined4 *)((longlong)param_1 + 0x28c) = *(undefined4 *)((longlong)param_2 + 0x28c);
  *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_2 + 0x52);
  *(undefined1 *)((longlong)param_1 + 0x294) = *(undefined1 *)((longlong)param_2 + 0x294);
  *(undefined4 *)(param_1 + 0x53) = *(undefined4 *)(param_2 + 0x53);
  *(undefined4 *)((longlong)param_1 + 0x29c) = *(undefined4 *)((longlong)param_2 + 0x29c);
  uVar1 = param_2[0x55];
  param_1[0x54] = param_2[0x54];
  param_1[0x55] = uVar1;
  uVar1 = param_2[0x57];
  param_1[0x56] = param_2[0x56];
  param_1[0x57] = uVar1;
  uVar1 = param_2[0x59];
  param_1[0x58] = param_2[0x58];
  param_1[0x59] = uVar1;
  param_1[0x5a] = param_2[0x5a];
  uVar1 = param_2[0x5c];
  param_1[0x5b] = param_2[0x5b];
  param_1[0x5c] = uVar1;
  uVar1 = param_2[0x5e];
  param_1[0x5d] = param_2[0x5d];
  param_1[0x5e] = uVar1;
  uVar1 = param_2[0x60];
  param_1[0x5f] = param_2[0x5f];
  param_1[0x60] = uVar1;
  param_1[0x61] = param_2[0x61];
  uVar1 = param_2[99];
  param_1[0x62] = param_2[0x62];
  param_1[99] = uVar1;
  uVar1 = param_2[0x65];
  param_1[100] = param_2[100];
  param_1[0x65] = uVar1;
  uVar1 = param_2[0x67];
  param_1[0x66] = param_2[0x66];
  param_1[0x67] = uVar1;
  param_1[0x68] = param_2[0x68];
  param_1[0x69] = param_2[0x69];
  param_1[0x6a] = param_2[0x6a];
  param_1[0x6b] = param_2[0x6b];
  param_1[0x6c] = param_2[0x6c];
  *(undefined4 *)(param_1 + 0x6d) = *(undefined4 *)(param_2 + 0x6d);
  *(undefined4 *)((longlong)param_1 + 0x36c) = *(undefined4 *)((longlong)param_2 + 0x36c);
  *(undefined1 *)(param_1 + 0x6e) = *(undefined1 *)(param_2 + 0x6e);
  *(undefined1 *)((longlong)param_1 + 0x374) = *(undefined1 *)((longlong)param_2 + 0x374);
  *(undefined4 *)(param_1 + 0x6f) = *(undefined4 *)(param_2 + 0x6f);
  *(undefined4 *)((longlong)param_1 + 0x37c) = *(undefined4 *)((longlong)param_2 + 0x37c);
  return param_1;
}



// FUNCTION 141301090 FUN_141301090 body=43 status=ok
// SIG undefined FUN_141301090(void)

undefined8 * FUN_141301090(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1447d59a0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1413010c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FEditableTextStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141300980();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 141301100 FUN_141301100 body=152 status=ok
// SIG undefined FUN_141301100(void)

longlong FUN_141301100(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x368) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3a0);
  }
  return param_1;
}



// FUNCTION 1413011a0 FUN_1413011a0 body=64 status=ok
// SIG undefined FUN_1413011a0(void)

longlong FUN_1413011a0(longlong param_1,ulonglong param_2)

{
  FUN_140b9c620(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1413011e0 FUN_1413011e0 body=80 status=ok
// SIG undefined FUN_1413011e0(void)

longlong FUN_1413011e0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x300);
  }
  return param_1;
}



// FUNCTION 141301230 FUN_141301230 body=81 status=ok
// SIG undefined FUN_141301230(void)

longlong FUN_141301230(longlong param_1,ulonglong param_2)

{
  FUN_140b9c620(param_1 + 0x2d8);
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2e8);
  }
  return param_1;
}



// FUNCTION 141301290 FUN_141301290 body=80 status=ok
// SIG undefined FUN_141301290(void)

longlong FUN_141301290(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x328);
  }
  return param_1;
}



// FUNCTION 1413012e0 FUN_1413012e0 body=101 status=ok
// SIG undefined FUN_1413012e0(void)

longlong FUN_1413012e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x328);
  }
  return param_1;
}



// FUNCTION 141301350 FUN_141301350 body=80 status=ok
// SIG undefined FUN_141301350(void)

longlong FUN_141301350(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2f8);
  }
  return param_1;
}



// FUNCTION 1413013a0 FUN_1413013a0 body=64 status=ok
// SIG undefined FUN_1413013a0(void)

longlong FUN_1413013a0(longlong param_1,ulonglong param_2)

{
  TArray<FCommandListCommandItem,TSizedDefaultAllocator<32>_>::
  ~TArray<FCommandListCommandItem,TSizedDefaultAllocator<32>_>(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1413013e0 FUN_1413013e0 body=80 status=ok
// SIG undefined FUN_1413013e0(void)

longlong FUN_1413013e0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2f0);
  }
  return param_1;
}



// FUNCTION 141301430 FUN_141301430 body=66 status=ok
// SIG undefined FUN_141301430(void)

longlong FUN_141301430(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2b8);
  }
  return param_1;
}



// FUNCTION 141301480 FUN_141301480 body=87 status=ok
// SIG undefined FUN_141301480(void)

void FUN_141301480(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *param_2 = 0;
  FText::FText(param_2 + 1);
  FText::FText(param_2 + 4);
  param_2[7] = 0;
  param_2[8] = 0;
  return;
}



// FUNCTION 141301520 Construct body=38 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FAISettings_Melee>::Construct(undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0xe0);
  FUN_141300570(param_2);
  return;
}



// FUNCTION 141301550 Construct body=38 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FInspectInfo>::Construct(undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x80);
  FUN_141300600(param_2);
  return;
}



// FUNCTION 141301580 Construct body=38 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FTraceQueryTestResultsInner>::Construct
               (undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x380);
  FUN_1413006c0(param_2);
  return;
}



// FUNCTION 1413015b0 FUN_1413015b0 body=49 status=ok
// SIG undefined FUN_1413015b0(void)

void FUN_1413015b0(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2 + 2,0,0x380);
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1413006c0(param_2 + 2);
  return;
}



// FUNCTION 1413015f0 FUN_1413015f0 body=128 status=ok
// SIG undefined FUN_1413015f0(void)

undefined8 FUN_1413015f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20 + param_2);
      FText::operator=(param_2 + -0x18,param_3 + -0x18 + param_2);
      FText::operator=(param_2,param_3 + param_2);
      FString::operator=(param_2 + 0x18,param_3 + 0x18 + param_2);
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141301670 FUN_141301670 body=207 status=ok
// SIG undefined FUN_141301670(void)

undefined8 FUN_141301670(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 8);
    do {
      *param_2 = puVar3[-1];
      puVar1 = param_2 + 3;
      param_2[1] = *puVar3;
      param_2[2] = puVar3[1];
      if (puVar1 != puVar3 + 2) {
        iVar2 = *(int *)(puVar3 + 3);
        _Src = (void *)puVar3[2];
        *(int *)(param_2 + 4) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x24) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x24) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
        }
      }
      puVar3 = puVar3 + 5;
      param_4 = param_4 + -1;
      param_2 = param_2 + 5;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141301740 FUN_141301740 body=96 status=ok
// SIG undefined FUN_141301740(void)

undefined8 FUN_141301740(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x18;
    do {
      *(undefined1 *)(param_2 + -0x18) = *(undefined1 *)(param_3 + -0x18 + param_2);
      FString::operator=(param_2 + -0x10,param_3 + -0x10 + param_2);
      FText::operator=(param_2,param_3 + param_2);
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413019b0 FUN_1413019b0 body=74 status=ok
// SIG undefined FUN_1413019b0(void)

undefined1 FUN_1413019b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_141300af0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x380;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141301a00 FUN_141301a00 body=193 status=ok
// SIG undefined FUN_141301a00(void)

undefined8 FUN_141301a00(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar1 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar1;
      if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1);
        _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 3);
      }
    }
    FUN_141300af0(param_2 + 2,param_3 + 2);
    param_3 = param_3 + 0x72;
    param_2 = param_2 + 0x72;
  }
  return 1;
}



// FUNCTION 141301af0 FUN_141301af0 body=55 status=ok
// SIG undefined FUN_141301af0(void)

void FUN_141301af0(void)

{
  undefined8 uVar1;
  
  if (DAT_14687c158 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687c158 = GetStaticEnum(FUN_141302540,uVar1,L"EDamagePresentationLevel");
  }
  return;
}



// FUNCTION 141301b30 FUN_141301b30 body=6 status=ok
// SIG undefined FUN_141301b30(void)

undefined8 FUN_141301b30(void)

{
  return 0x8327774c;
}



// FUNCTION 141301b40 FUN_141301b40 body=6 status=ok
// SIG undefined FUN_141301b40(void)

undefined8 FUN_141301b40(void)

{
  return 0x571a8958;
}



// FUNCTION 141301b50 FUN_141301b50 body=6 status=ok
// SIG undefined FUN_141301b50(void)

undefined8 FUN_141301b50(void)

{
  return 0xdaaa3cd8;
}



// FUNCTION 141301b60 FUN_141301b60 body=6 status=ok
// SIG undefined FUN_141301b60(void)

undefined8 FUN_141301b60(void)

{
  return 0x164386a3;
}



// FUNCTION 141301b70 FUN_141301b70 body=6 status=ok
// SIG undefined FUN_141301b70(void)

undefined8 FUN_141301b70(void)

{
  return 0xcd44e3f0;
}



// FUNCTION 141301b80 FUN_141301b80 body=6 status=ok
// SIG undefined FUN_141301b80(void)

undefined8 FUN_141301b80(void)

{
  return 0xfc10242e;
}



// FUNCTION 141301b90 FUN_141301b90 body=6 status=ok
// SIG undefined FUN_141301b90(void)

undefined8 FUN_141301b90(void)

{
  return 0xb45e4bb;
}



// FUNCTION 141301ba0 FUN_141301ba0 body=6 status=ok
// SIG undefined FUN_141301ba0(void)

undefined8 FUN_141301ba0(void)

{
  return 0xe9b6767f;
}



// FUNCTION 141301bb0 FUN_141301bb0 body=6 status=ok
// SIG undefined FUN_141301bb0(void)

undefined8 FUN_141301bb0(void)

{
  return 0x49b2ea3a;
}



// FUNCTION 141301bd0 FUN_141301bd0 body=57 status=ok
// SIG undefined FUN_141301bd0(void)

void FUN_141301bd0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14687c518);
                    /* WARNING: Could not recover jumptable at 0x000141301c06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141301c10 FUN_141301c10 body=57 status=ok
// SIG undefined FUN_141301c10(void)

void FUN_141301c10(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14687c520);
                    /* WARNING: Could not recover jumptable at 0x000141301c46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141301c50 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UDungeonEventListener::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 141301c70 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UGPasswordResetPage::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 141301c90 thunk_FUN_14301f840 body=5 status=ok
// SIG undefined thunk_FUN_14301f840(void)

void thunk_FUN_14301f840(void)

{
  FUN_14301f840();
  return;
}



// FUNCTION 141301cc0 FUN_141301cc0 body=34 status=ok
// SIG undefined FUN_141301cc0(void)

void FUN_141301cc0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412ffe60();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetAvailableSocketNames_1447d5e60,1);
  return;
}



// FUNCTION 141301cf0 FUN_141301cf0 body=34 status=ok
// SIG undefined FUN_141301cf0(void)

void FUN_141301cf0(void)

{
  undefined8 uVar1;
  
  uVar1 = AXUsableActorEncounter::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_TakeDamageOnInstances_1447d5990,1);
  return;
}



// FUNCTION 141301d20 FUN_141301d20 body=34 status=ok
// SIG undefined FUN_141301d20(void)

void FUN_141301d20(void)

{
  undefined8 uVar1;
  
  uVar1 = ARemnantMiniMapDisplayActor::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_GetNextStageDeathCirclePoints_1447d6718,1);
  return;
}



// FUNCTION 141301d50 FUN_141301d50 body=34 status=ok
// SIG undefined FUN_141301d50(void)

void FUN_141301d50(void)

{
  undefined8 uVar1;
  
  uVar1 = UTextBlock::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetDamageCauser_1447d5e50,1);
  return;
}



// FUNCTION 141301d80 FUN_141301d80 body=34 status=ok
// SIG undefined FUN_141301d80(void)

void FUN_141301d80(void)

{
  undefined8 uVar1;
  
  uVar1 = AInteractiveFoliageActor::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ConstructCharacterPage_1447d8ba0,10);
  return;
}



// FUNCTION 141301db0 FUN_141301db0 body=34 status=ok
// SIG undefined FUN_141301db0(void)

void FUN_141301db0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412fe770();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddCommandItem_1447d8390,6);
  return;
}



// FUNCTION 141301de0 StaticRegisterNativesUProgressBar body=34 status=ok
// SIG undefined StaticRegisterNativesUProgressBar(void)

void UProgressBar::StaticRegisterNativesUProgressBar(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClientConnectTimedout_1447da4d8,3);
  return;
}



// FUNCTION 141301e10 FUN_141301e10 body=82 status=ok
// SIG undefined FUN_141301e10(void)

void FUN_141301e10(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687c670 == 0) {
    uVar1 = FUN_141301b30();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687c670 = GetStaticStruct(FUN_141302570,uVar2,L"DebugMenuCommandItemData",0x48,uVar1);
  }
  return;
}



// FUNCTION 141301e70 FUN_141301e70 body=82 status=ok
// SIG undefined FUN_141301e70(void)

void FUN_141301e70(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687c6d0 == 0) {
    uVar1 = FUN_141301b40();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687c6d0 = GetStaticStruct(FUN_1413025a0,uVar2,L"DebugMenuGradebox",0x28,uVar1);
  }
  return;
}



// FUNCTION 141301ed0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687c790 == 0) {
    uVar1 = FUN_141301b50();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687c790 = GetStaticStruct(FUN_1413025d0,uVar2,L"DefaultCrosshairData",0x10,uVar1);
  }
  return;
}



// FUNCTION 141301f30 FUN_141301f30 body=82 status=ok
// SIG undefined FUN_141301f30(void)

void FUN_141301f30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687c760 == 0) {
    uVar1 = FUN_141301b60();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687c760 = GetStaticStruct(FUN_141302600,uVar2,L"GbxReportTag",0x30,uVar1);
  }
  return;
}



// FUNCTION 141301f90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FTreasureDefinition::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687c638 == 0) {
    uVar1 = FUN_141301b70();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687c638 =
         GetStaticStruct(FUN_141302630,uVar2,L"IncomingDamagePresentationData",0xe0,uVar1);
  }
  return;
}



// FUNCTION 141301ff0 FUN_141301ff0 body=82 status=ok
// SIG undefined FUN_141301ff0(void)

void FUN_141301ff0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687c608 == 0) {
    uVar1 = FUN_141301b80();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687c608 =
         GetStaticStruct(FUN_141302660,uVar2,L"IncomingDamagePresentationGenericData",1,uVar1);
  }
  return;
}



// FUNCTION 141302050 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneCameraCutSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687c5f8 == 0) {
    uVar1 = FUN_141301b90();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687c5f8 =
         GetStaticStruct(FUN_141302690,uVar2,L"IncomingDamagePresentationGlobalInfo",0x80,uVar1);
  }
  return;
}



// FUNCTION 1413020b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPostMissionPilotRecord::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687c628 == 0) {
    uVar1 = FUN_141301ba0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687c628 =
         GetStaticStruct(FUN_1413026c0,uVar2,L"IncomingDamagePresentationGroup",0x380,uVar1);
  }
  return;
}



// FUNCTION 141302110 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSynth2DSliderStyle::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687c618 == 0) {
    uVar1 = FUN_141301bb0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687c618 =
         GetStaticStruct(FUN_1413026f0,uVar2,L"IncomingDamagePresentationSource",0x390,uVar1);
  }
  return;
}



// FUNCTION 141302170 FUN_141302170 body=98 status=ok
// SIG undefined FUN_141302170(void)

void FUN_141302170(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = *param_2;
  local_20 = *(undefined4 *)(param_2 + 1);
  lVar1 = *param_1;
  local_18 = *param_4;
  local_10 = *(undefined4 *)(param_4 + 1);
  local_1c = param_3;
  uVar2 = FUN_14178ac60(local_18,DAT_14687c260);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return;
}



// FUNCTION 1413021e0 FUN_1413021e0 body=47 status=ok
// SIG undefined FUN_1413021e0(void)

longlong FUN_1413021e0(void)

{
  if (DAT_14687c538 == 0) {
    FUN_141786440(&DAT_14687c538,&PTR_GetPrivateStaticClass_1447d42a0);
  }
  return DAT_14687c538;
}



// FUNCTION 141302210 FUN_141302210 body=47 status=ok
// SIG undefined FUN_141302210(void)

longlong FUN_141302210(void)

{
  if (DAT_14687c548 == 0) {
    FUN_141786440(&DAT_14687c548,&PTR_GetPrivateStaticClass_1447d32b0);
  }
  return DAT_14687c548;
}



// FUNCTION 141302240 FUN_141302240 body=47 status=ok
// SIG undefined FUN_141302240(void)

longlong FUN_141302240(void)

{
  if (DAT_14687c558 == 0) {
    FUN_141786440(&DAT_14687c558,&PTR_GetPrivateStaticClass_1447d3d30);
  }
  return DAT_14687c558;
}



// FUNCTION 141302270 FUN_141302270 body=47 status=ok
// SIG undefined FUN_141302270(void)

longlong FUN_141302270(void)

{
  if (DAT_14687c568 == 0) {
    FUN_141786440(&DAT_14687c568,&PTR_FUN_1447d4190);
  }
  return DAT_14687c568;
}



// FUNCTION 1413022a0 FUN_1413022a0 body=47 status=ok
// SIG undefined FUN_1413022a0(void)

longlong FUN_1413022a0(void)

{
  if (DAT_14687c578 == 0) {
    FUN_141786440(&DAT_14687c578,&PTR_GetPrivateStaticClass_1447d46b0);
  }
  return DAT_14687c578;
}



// FUNCTION 1413022d0 FUN_1413022d0 body=47 status=ok
// SIG undefined FUN_1413022d0(void)

longlong FUN_1413022d0(void)

{
  if (DAT_14687c5a8 == 0) {
    FUN_141786440(&DAT_14687c5a8,&PTR_StaticClass_1447d1450);
  }
  return DAT_14687c5a8;
}



// FUNCTION 141302300 FUN_141302300 body=47 status=ok
// SIG undefined FUN_141302300(void)

longlong FUN_141302300(void)

{
  if (DAT_14687c648 == 0) {
    FUN_141786440(&DAT_14687c648,&PTR_FUN_1447d1bb0);
  }
  return DAT_14687c648;
}



// FUNCTION 141302330 FUN_141302330 body=47 status=ok
// SIG undefined FUN_141302330(void)

longlong FUN_141302330(void)

{
  if (DAT_14687c680 == 0) {
    FUN_141786440(&DAT_14687c680,&PTR_GetPrivateStaticClass_1447d1730);
  }
  return DAT_14687c680;
}



// FUNCTION 141302360 FUN_141302360 body=47 status=ok
// SIG undefined FUN_141302360(void)

longlong FUN_141302360(void)

{
  if (DAT_14687c750 == 0) {
    FUN_141786440(&DAT_14687c750,&PTR_GetPrivateStaticClass_1447d3340);
  }
  return DAT_14687c750;
}



// FUNCTION 141302390 FUN_141302390 body=47 status=ok
// SIG undefined FUN_141302390(void)

longlong FUN_141302390(void)

{
  if (DAT_14687c780 == 0) {
    FUN_141786440(&DAT_14687c780,&PTR_GetPrivateStaticClass_1447d37b0);
  }
  return DAT_14687c780;
}



// FUNCTION 1413023c0 FUN_1413023c0 body=47 status=ok
// SIG undefined FUN_1413023c0(void)

longlong FUN_1413023c0(void)

{
  if (DAT_14687c7a0 == 0) {
    FUN_141786440(&DAT_14687c7a0,&PTR_FUN_1447d3c30);
  }
  return DAT_14687c7a0;
}



// FUNCTION 1413023f0 FUN_1413023f0 body=47 status=ok
// SIG undefined FUN_1413023f0(void)

longlong FUN_1413023f0(void)

{
  if (DAT_14687c7d8 == 0) {
    FUN_141786440(&DAT_14687c7d8,&PTR_GetPrivateStaticClass_1447d4310);
  }
  return DAT_14687c7d8;
}



// FUNCTION 141302420 FUN_141302420 body=47 status=ok
// SIG undefined FUN_141302420(void)

longlong FUN_141302420(void)

{
  if (DAT_14687c7e8 == 0) {
    FUN_141786440(&DAT_14687c7e8,&PTR_FUN_1447d4780);
  }
  return DAT_14687c7e8;
}



// FUNCTION 141302450 FUN_141302450 body=47 status=ok
// SIG undefined FUN_141302450(void)

longlong FUN_141302450(void)

{
  if (DAT_14687c7f8 == 0) {
    FUN_141786440(&DAT_14687c7f8,&PTR_FUN_1447d49f0);
  }
  return DAT_14687c7f8;
}



// FUNCTION 141302480 FUN_141302480 body=47 status=ok
// SIG undefined FUN_141302480(void)

longlong FUN_141302480(void)

{
  if (DAT_14687c808 == 0) {
    FUN_141786440(&DAT_14687c808,&PTR_FUN_1447d4c30);
  }
  return DAT_14687c808;
}



// FUNCTION 1413024b0 FUN_1413024b0 body=47 status=ok
// SIG undefined FUN_1413024b0(void)

longlong FUN_1413024b0(void)

{
  if (DAT_14687c818 == 0) {
    FUN_141786440(&DAT_14687c818,&PTR_FUN_1447d4de0);
  }
  return DAT_14687c818;
}



// FUNCTION 1413024e0 FUN_1413024e0 body=47 status=ok
// SIG undefined FUN_1413024e0(void)

longlong FUN_1413024e0(void)

{
  if (DAT_14687c770 == 0) {
    FUN_141786440(&DAT_14687c770,&PTR_FUN_1447d3690);
  }
  return DAT_14687c770;
}



// FUNCTION 141302510 FUN_141302510 body=47 status=ok
// SIG undefined FUN_141302510(void)

longlong FUN_141302510(void)

{
  if (DAT_14687c588 == 0) {
    FUN_141786a30(&DAT_14687c588,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462c9ca0);
  }
  return DAT_14687c588;
}



// FUNCTION 141302540 FUN_141302540 body=47 status=ok
// SIG undefined FUN_141302540(void)

longlong FUN_141302540(void)

{
  if (DAT_14687c5f0 == 0) {
    FUN_1417866a0(&DAT_14687c5f0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462cd210);
  }
  return DAT_14687c5f0;
}



// FUNCTION 141302570 FUN_141302570 body=47 status=ok
// SIG undefined FUN_141302570(void)

longlong FUN_141302570(void)

{
  if (DAT_14687c678 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687c678,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462cb3b0);
  }
  return DAT_14687c678;
}



// FUNCTION 1413025a0 FUN_1413025a0 body=47 status=ok
// SIG undefined FUN_1413025a0(void)

longlong FUN_1413025a0(void)

{
  if (DAT_14687c6d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687c6d8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462cbc20);
  }
  return DAT_14687c6d8;
}



// FUNCTION 1413025d0 FUN_1413025d0 body=47 status=ok
// SIG undefined FUN_1413025d0(void)

longlong FUN_1413025d0(void)

{
  if (DAT_14687c798 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687c798,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462cca10);
  }
  return DAT_14687c798;
}



// FUNCTION 141302600 FUN_141302600 body=47 status=ok
// SIG undefined FUN_141302600(void)

longlong FUN_141302600(void)

{
  if (DAT_14687c768 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687c768,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462cc6d0);
  }
  return DAT_14687c768;
}



// FUNCTION 141302630 FUN_141302630 body=47 status=ok
// SIG undefined FUN_141302630(void)

longlong FUN_141302630(void)

{
  if (DAT_14687c640 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687c640,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462cb0a0);
  }
  return DAT_14687c640;
}



// FUNCTION 141302660 FUN_141302660 body=47 status=ok
// SIG undefined FUN_141302660(void)

longlong FUN_141302660(void)

{
  if (DAT_14687c610 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687c610,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462cabe0);
  }
  return DAT_14687c610;
}



// FUNCTION 141302690 FUN_141302690 body=47 status=ok
// SIG undefined FUN_141302690(void)

longlong FUN_141302690(void)

{
  if (DAT_14687c600 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687c600,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462cab90);
  }
  return DAT_14687c600;
}



// FUNCTION 1413026c0 FUN_1413026c0 body=47 status=ok
// SIG undefined FUN_1413026c0(void)

longlong FUN_1413026c0(void)

{
  if (DAT_14687c630 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687c630,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462cad90);
  }
  return DAT_14687c630;
}



// FUNCTION 1413026f0 FUN_1413026f0 body=47 status=ok
// SIG undefined FUN_1413026f0(void)

longlong FUN_1413026f0(void)

{
  if (DAT_14687c620 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14687c620,&PTR_Z_Construct_UPackage__Script_MechWarrior_1462cad00);
  }
  return DAT_14687c620;
}



// FUNCTION 141302740 FUN_141302740 body=457 status=ok
// SIG undefined FUN_141302740(void)

void FUN_141302740(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  FText::FText(local_50);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  FText::FText(local_68);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  FWeakObjectPtr::operator=(&local_88,0);
  local_80 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_78 = local_88;
  local_74 = local_84;
  local_70 = local_80;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = FText::FText(local_38,local_68);
  uVar6 = FText::FText(local_20,local_50);
  uVar5 = FUN_1410c2b40(param_1,uVar6,uVar5,&local_78);
  *param_3 = uVar5;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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



// FUNCTION 141302910 FUN_141302910 body=143 status=ok
// SIG undefined FUN_141302910(void)

void FUN_141302910(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  puVar1 = &local_res10;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1410c2f90(param_1,puVar1);
  return;
}



// FUNCTION 1413029a0 FUN_1413029a0 body=448 status=ok
// SIG undefined FUN_1413029a0(void)

void FUN_1413029a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  FText::FText(local_50);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  FText::FText(local_68);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = FText::FText(local_38,local_68);
  uVar6 = FText::FText(local_20,local_50);
  uVar5 = FUN_1410c3340(param_1,uVar6,uVar5,local_78);
  *param_3 = uVar5;
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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



// FUNCTION 141302ba0 FUN_141302ba0 body=128 status=ok
// SIG undefined FUN_141302ba0(void)

void FUN_141302ba0(undefined8 param_1,longlong param_2)

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
  Z_Construct_UClass_ANavSvoDebugActor_Statics::NewProp_bAutoIncrementPathSearch_SetBit
            (param_1,local_res10);
  return;
}



// FUNCTION 141302c20 FUN_141302c20 body=126 status=ok
// SIG undefined FUN_141302c20(void)

void FUN_141302c20(undefined8 param_1,longlong param_2)

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
  Z_Construct_UClass_ANavSvoDebugActor_Statics::NewProp_bAutoIncrementPathSearch_SetBit
            (param_1,local_res10[0]);
  return;
}



// FUNCTION 141302cc0 execTestServerLevelVisibilityChange body=191 status=ok
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
  Z_Construct_UClass_ANavSvoDebugActor_Statics::NewProp_bAutoIncrementPathSearch_SetBit
            (param_1,local_res20,local_res10);
  return;
}



// FUNCTION 141302d80 FUN_141302d80 body=334 status=ok
// SIG undefined FUN_141302d80(void)

void FUN_141302d80(undefined8 param_1,longlong param_2)

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
  FUN_1410d1820(param_1,local_res10,puVar6);
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



// FUNCTION 141302ed0 FUN_141302ed0 body=128 status=ok
// SIG undefined FUN_141302ed0(void)

void FUN_141302ed0(undefined8 param_1,longlong param_2)

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
  FUN_1410d1910(param_1,local_res10);
  return;
}



// FUNCTION 141302f50 FUN_141302f50 body=128 status=ok
// SIG undefined FUN_141302f50(void)

void FUN_141302f50(undefined8 param_1,longlong param_2)

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
  FUN_1410d2580(param_1,local_res10);
  return;
}



// FUNCTION 141302fd0 FUN_141302fd0 body=128 status=ok
// SIG undefined FUN_141302fd0(void)

void FUN_141302fd0(undefined8 param_1,longlong param_2)

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
  FUN_1410d37d0(param_1,local_res10);
  return;
}



// FUNCTION 141303050 FUN_141303050 body=334 status=ok
// SIG undefined FUN_141303050(void)

void FUN_141303050(undefined8 param_1,longlong param_2)

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
  FUN_1410d4250(param_1,local_res10,puVar6);
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



// FUNCTION 1413031a0 FUN_1413031a0 body=334 status=ok
// SIG undefined FUN_1413031a0(void)

void FUN_1413031a0(undefined8 param_1,longlong param_2)

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
  FUN_1410d4e70(param_1,local_res10,puVar6);
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



// FUNCTION 1413032f0 FUN_1413032f0 body=334 status=ok
// SIG undefined FUN_1413032f0(void)

void FUN_1413032f0(undefined8 param_1,longlong param_2)

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
  FUN_1410d58a0(param_1,local_res10,puVar6);
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



// FUNCTION 141303440 FUN_141303440 body=188 status=ok
// SIG undefined FUN_141303440(void)

void FUN_141303440(undefined8 param_1,longlong param_2)

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
  Z_Construct_UClass_ANavSvoDebugActor_Statics::NewProp_bAutoIncrementPathSearch_SetBit
            (param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 141303520 execSetTarget body=128 status=ok
// SIG undefined execSetTarget(void)

void UNewbieHelperWidget::execSetTarget(undefined8 param_1,longlong param_2)

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
  SetTarget(param_1,local_res10);
  return;
}



// FUNCTION 1413035a0 FUN_1413035a0 body=285 status=ok
// SIG undefined FUN_1413035a0(void)

void FUN_1413035a0(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_28 = local_48;
  local_18 = local_38;
  local_20 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_30;
  (**(code **)(*param_1 + 0x770))(param_1,&local_18,local_res8[0],&local_28);
  return;
}



// FUNCTION 1413036d0 FUN_1413036d0 body=47 status=ok
// SIG undefined FUN_1413036d0(void)

longlong FUN_1413036d0(void)

{
  if (DAT_14687cda8 == 0) {
    FUN_141786440(&DAT_14687cda8,&PTR_StaticClass_1447dcad0);
  }
  return DAT_14687cda8;
}



// FUNCTION 141303700 FUN_141303700 body=47 status=ok
// SIG undefined FUN_141303700(void)

longlong FUN_141303700(void)

{
  if (DAT_14687cd40 == 0) {
    FUN_141786a30(&DAT_14687cd40,&PTR_FUN_1462ce250);
  }
  return DAT_14687cd40;
}



// FUNCTION 141303730 FUN_141303730 body=47 status=ok
// SIG undefined FUN_141303730(void)

longlong FUN_141303730(void)

{
  if (DAT_14687cd48 == 0) {
    FUN_141786a30(&DAT_14687cd48,&PTR_FUN_1462ce2d0);
  }
  return DAT_14687cd48;
}



// FUNCTION 141303760 FUN_141303760 body=47 status=ok
// SIG undefined FUN_141303760(void)

longlong FUN_141303760(void)

{
  if (DAT_14687cd50 == 0) {
    FUN_141786a30(&DAT_14687cd50,&PTR_FUN_1462ce390);
  }
  return DAT_14687cd50;
}



// FUNCTION 141303790 FUN_141303790 body=47 status=ok
// SIG undefined FUN_141303790(void)

longlong FUN_141303790(void)

{
  if (DAT_14687cd58 == 0) {
    FUN_141786a30(&DAT_14687cd58,&PTR_FUN_1462ce490);
  }
  return DAT_14687cd58;
}



// FUNCTION 1413037c0 FUN_1413037c0 body=47 status=ok
// SIG undefined FUN_1413037c0(void)

longlong FUN_1413037c0(void)

{
  if (DAT_14687cd60 == 0) {
    FUN_141786a30(&DAT_14687cd60,&PTR_FUN_1462ce4d0);
  }
  return DAT_14687cd60;
}



// FUNCTION 1413037f0 FUN_1413037f0 body=47 status=ok
// SIG undefined FUN_1413037f0(void)

longlong FUN_1413037f0(void)

{
  if (DAT_14687cd68 == 0) {
    FUN_141786a30(&DAT_14687cd68,&PTR_FUN_1462ce5e0);
  }
  return DAT_14687cd68;
}



// FUNCTION 141303820 FUN_141303820 body=47 status=ok
// SIG undefined FUN_141303820(void)

longlong FUN_141303820(void)

{
  if (DAT_14687cd70 == 0) {
    FUN_141786a30(&DAT_14687cd70,&PTR_FUN_1462ce670);
  }
  return DAT_14687cd70;
}



// FUNCTION 141303850 FUN_141303850 body=47 status=ok
// SIG undefined FUN_141303850(void)

longlong FUN_141303850(void)

{
  if (DAT_14687cd78 == 0) {
    FUN_141786a30(&DAT_14687cd78,&PTR_FUN_1462ce730);
  }
  return DAT_14687cd78;
}



// FUNCTION 141303880 FUN_141303880 body=47 status=ok
// SIG undefined FUN_141303880(void)

longlong FUN_141303880(void)

{
  if (DAT_14687cd80 == 0) {
    FUN_141786a30(&DAT_14687cd80,&PTR_FUN_1462ce800);
  }
  return DAT_14687cd80;
}



// FUNCTION 1413038b0 FUN_1413038b0 body=47 status=ok
// SIG undefined FUN_1413038b0(void)

longlong FUN_1413038b0(void)

{
  if (DAT_14687cd88 == 0) {
    FUN_141786a30(&DAT_14687cd88,&PTR_FUN_1462ce8d0);
  }
  return DAT_14687cd88;
}



// FUNCTION 1413038e0 FUN_1413038e0 body=47 status=ok
// SIG undefined FUN_1413038e0(void)

longlong FUN_1413038e0(void)

{
  if (DAT_14687cd90 == 0) {
    FUN_141786a30(&DAT_14687cd90,&PTR_FUN_1462ce910);
  }
  return DAT_14687cd90;
}



// FUNCTION 141303910 FUN_141303910 body=47 status=ok
// SIG undefined FUN_141303910(void)

longlong FUN_141303910(void)

{
  if (DAT_14687cd98 == 0) {
    FUN_141786a30(&DAT_14687cd98,&PTR_FUN_1462ce990);
  }
  return DAT_14687cd98;
}



// FUNCTION 141303940 FUN_141303940 body=47 status=ok
// SIG undefined FUN_141303940(void)

longlong FUN_141303940(void)

{
  if (DAT_14687cda0 == 0) {
    FUN_141786a30(&DAT_14687cda0,&PTR_FUN_1462cea50);
  }
  return DAT_14687cda0;
}



// FUNCTION 141303970 FUN_141303970 body=162 status=ok
// SIG undefined FUN_141303970(void)

longlong FUN_141303970(void)

{
  if (DAT_14687cc58 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_HasShield",&DAT_14687cc58,
                  FUN_140447710,0x38,0x10000000,0,L"Engine",FUN_1413054a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687cc58;
}



// FUNCTION 141303a20 FUN_141303a20 body=53 status=ok
// SIG undefined FUN_141303a20(void)

void FUN_141303a20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1447e3a28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141303a70 FUN_141303a70 body=162 status=ok
// SIG undefined FUN_141303a70(void)

longlong FUN_141303a70(void)

{
  if (DAT_14687cc68 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_IsDriver",&DAT_14687cc68,
                  FUN_140447710,0x40,0x10000000,0,L"Engine",FUN_1413054e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687cc68;
}



// FUNCTION 141303b20 FUN_141303b20 body=53 status=ok
// SIG undefined FUN_141303b20(void)

void FUN_141303b20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1447e3b40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141303b70 FUN_141303b70 body=162 status=ok
// SIG undefined FUN_141303b70(void)

longlong FUN_141303b70(void)

{
  if (DAT_14687cc78 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_IsFlag",&DAT_14687cc78,
                  FUN_140447710,0x38,0x10000000,0,L"Engine",FUN_141305520,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687cc78;
}



// FUNCTION 141303c20 FUN_141303c20 body=53 status=ok
// SIG undefined FUN_141303c20(void)

void FUN_141303c20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1447e3c58;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141303c70 FUN_141303c70 body=162 status=ok
// SIG undefined FUN_141303c70(void)

longlong FUN_141303c70(void)

{
  if (DAT_14687cc88 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_IsNearbyPlayerDown",
                  &DAT_14687cc88,FUN_140447710,0x40,0x10000000,0,L"Engine",FUN_141305560,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687cc88;
}



// FUNCTION 141303d20 FUN_141303d20 body=53 status=ok
// SIG undefined FUN_141303d20(void)

void FUN_141303d20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1447e3d70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141303d70 FUN_141303d70 body=162 status=ok
// SIG undefined FUN_141303d70(void)

longlong FUN_141303d70(void)

{
  if (DAT_14687cc98 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_IsPassenger",&DAT_14687cc98,
                  FUN_140447710,0x40,0x10000000,0,L"Engine",FUN_1413055a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687cc98;
}



// FUNCTION 141303e30 FUN_141303e30 body=162 status=ok
// SIG undefined FUN_141303e30(void)

longlong FUN_141303e30(void)

{
  if (DAT_14687cca8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_IsPetAlive",&DAT_14687cca8,
                  FUN_140447710,0x38,0x10000000,0,L"Engine",FUN_1413055e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687cca8;
}



// FUNCTION 141303ef0 FUN_141303ef0 body=162 status=ok
// SIG undefined FUN_141303ef0(void)

longlong FUN_141303ef0(void)

{
  if (DAT_14687ccb8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_MissionCommentary",
                  &DAT_14687ccb8,FUN_140447710,0x38,0x10000000,0,L"Engine",FUN_141305620,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687ccb8;
}



// FUNCTION 141303fb0 FUN_141303fb0 body=162 status=ok
// SIG undefined FUN_141303fb0(void)

longlong FUN_141303fb0(void)

{
  if (DAT_14687ccc8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_MissionCommentaryIndefinite",
                  &DAT_14687ccc8,FUN_140447710,0x38,0x10000000,0,L"Engine",FUN_141305660,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687ccc8;
}



// FUNCTION 141304080 FUN_141304080 body=162 status=ok
// SIG undefined FUN_141304080(void)

longlong FUN_141304080(void)

{
  if (DAT_14687ccd8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_OnMissionInRange",&DAT_14687ccd8
                  ,FUN_140447710,0x40,0x10000000,0,L"Engine",FUN_1413056a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687ccd8;
}



// FUNCTION 141304140 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGPasswordResetPage::GetPrivateStaticClass(void)

{
  if (DAT_14687ce08 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DisplayedNotificationWidget",&DAT_14687ce08,
                  StaticRegisterNativesUGPasswordResetPage,0x2f0,0x10000000,0,L"Engine",
                  FUN_1413057a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301c80,&LAB_140447700,0);
  }
  return DAT_14687ce08;
}



// FUNCTION 1413041f0 FUN_1413041f0 body=47 status=ok
// SIG undefined FUN_1413041f0(void)

longlong FUN_1413041f0(void)

{
  if (DAT_14687cdd0 == 0) {
    FUN_141786a30(&DAT_14687cdd0,&PTR_FUN_1462cef10);
  }
  return DAT_14687cdd0;
}



// FUNCTION 141304220 FUN_141304220 body=47 status=ok
// SIG undefined FUN_141304220(void)

longlong FUN_141304220(void)

{
  if (DAT_14687ce00 == 0) {
    FUN_141786440(&DAT_14687ce00,&PTR_GetPrivateStaticClass_1447dd2e0);
  }
  return DAT_14687ce00;
}



// FUNCTION 141304250 FUN_141304250 body=47 status=ok
// SIG undefined FUN_141304250(void)

longlong FUN_141304250(void)

{
  if (DAT_14687cdd8 == 0) {
    FUN_141786a30(&DAT_14687cdd8,&PTR_FUN_1462cef50);
  }
  return DAT_14687cdd8;
}



// FUNCTION 141304280 FUN_141304280 body=47 status=ok
// SIG undefined FUN_141304280(void)

longlong FUN_141304280(void)

{
  if (DAT_14687cde0 == 0) {
    FUN_141786a30(&DAT_14687cde0,&PTR_FUN_1462cef90);
  }
  return DAT_14687cde0;
}



// FUNCTION 1413042b0 FUN_1413042b0 body=47 status=ok
// SIG undefined FUN_1413042b0(void)

longlong FUN_1413042b0(void)

{
  if (DAT_14687cde8 == 0) {
    FUN_141786a30(&DAT_14687cde8,&PTR_FUN_1462cefd0);
  }
  return DAT_14687cde8;
}



// FUNCTION 1413042e0 FUN_1413042e0 body=47 status=ok
// SIG undefined FUN_1413042e0(void)

longlong FUN_1413042e0(void)

{
  if (DAT_14687cdf0 == 0) {
    FUN_141786a30(&DAT_14687cdf0,&PTR_FUN_1462cf010);
  }
  return DAT_14687cdf0;
}



// FUNCTION 141304310 FUN_141304310 body=47 status=ok
// SIG undefined FUN_141304310(void)

longlong FUN_141304310(void)

{
  if (DAT_14687cdf8 == 0) {
    FUN_141786a30(&DAT_14687cdf8,&PTR_FUN_1462cf090);
  }
  return DAT_14687cdf8;
}



// FUNCTION 141304350 FUN_141304350 body=162 status=ok
// SIG undefined FUN_141304350(void)

longlong FUN_141304350(void)

{
  if (DAT_14687ce78 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DownloadableExpansionData",&DAT_14687ce78,FUN_140447710,0x380
                  ,0x10000000,0,L"Engine",&LAB_141305a10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1404e7160,&LAB_140447700,0);
  }
  return DAT_14687ce78;
}



// FUNCTION 141304400 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEnvQueryTest_Random::StaticClass(void)

{
  if (DAT_14687ce18 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DodgeTriggerZoneComponent",&DAT_14687ce18,FUN_140447710,0x1c0
                  ,0x10000000,0,L"Engine",&LAB_1413058e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_14687ce18;
}



// FUNCTION 1413044c0 FUN_1413044c0 body=162 status=ok
// SIG undefined FUN_1413044c0(void)

longlong FUN_1413044c0(void)

{
  if (DAT_14687ce28 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DownloadableEntitlementCategoryData",&DAT_14687ce28,
                  FUN_140447710,0x60,0x10000000,0,L"Engine",InternalConstructor<UUnlockableItem>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687ce28;
}



// FUNCTION 141304580 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXPrimaryDataAsset::GetPrivateStaticClass(void)

{
  if (DAT_14687ce38 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DownloadableEntitlementPartData",&DAT_14687ce38,FUN_140447710
                  ,0x48,0x10000001,0,L"Engine",FUN_141305940,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687ce38;
}



// FUNCTION 141304630 FUN_141304630 body=162 status=ok
// SIG undefined FUN_141304630(void)

longlong FUN_141304630(void)

{
  if (DAT_14687ce48 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DownloadableEntitlementPartData_Currency",&DAT_14687ce48,
                  FUN_140447710,0x50,0x10000000,0,L"Engine",FUN_141305980,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UXPrimaryDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687ce48;
}



// FUNCTION 1413046e0 FUN_1413046e0 body=47 status=ok
// SIG undefined FUN_1413046e0(void)

longlong FUN_1413046e0(void)

{
  if (DAT_14687ce30 == 0) {
    FUN_141786440(&DAT_14687ce30,&PTR_GetPrivateStaticClass_1447dd9b0);
  }
  return DAT_14687ce30;
}



// FUNCTION 141304730 FUN_141304730 body=162 status=ok
// SIG undefined FUN_141304730(void)

longlong FUN_141304730(void)

{
  if (DAT_14687ce58 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DownloadableEntitlementSourceData",&DAT_14687ce58,
                  FUN_140447710,0x58,0x10000000,0,L"Engine",InternalConstructor<UDialogueRole>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDataAsset::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14687ce58;
}



// FUNCTION 141304800 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AItem::GetPrivateStaticClass(void)

{
  if (DAT_14687cec0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DuelArena",&DAT_14687cec0,FUN_141306410,0x4b0,0x10000000,0,
                  L"Engine",&LAB_141305300,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_14687cec0;
}



// FUNCTION 1413048b0 FUN_1413048b0 body=47 status=ok
// SIG undefined FUN_1413048b0(void)

longlong FUN_1413048b0(void)

{
  if (DAT_14687ceb8 == 0) {
    FUN_141786440(&DAT_14687ceb8,&PTR_GetPrivateStaticClass_1447de930);
  }
  return DAT_14687ceb8;
}



// FUNCTION 1413048e0 FUN_1413048e0 body=47 status=ok
// SIG undefined FUN_1413048e0(void)

longlong FUN_1413048e0(void)

{
  if (DAT_14687ce90 == 0) {
    FUN_141786a30(&DAT_14687ce90,&PTR_FUN_1462d05f0);
  }
  return DAT_14687ce90;
}



// FUNCTION 141304910 FUN_141304910 body=47 status=ok
// SIG undefined FUN_141304910(void)

longlong FUN_141304910(void)

{
  if (DAT_14687ce98 == 0) {
    FUN_141786a30(&DAT_14687ce98,&PTR_FUN_1462d0670);
  }
  return DAT_14687ce98;
}



// FUNCTION 141304940 FUN_141304940 body=47 status=ok
// SIG undefined FUN_141304940(void)

longlong FUN_141304940(void)

{
  if (DAT_14687cea0 == 0) {
    FUN_141786a30(&DAT_14687cea0,&PTR_FUN_1462d06f0);
  }
  return DAT_14687cea0;
}



// FUNCTION 141304970 FUN_141304970 body=47 status=ok
// SIG undefined FUN_141304970(void)

longlong FUN_141304970(void)

{
  if (DAT_14687cea8 == 0) {
    FUN_141786a30(&DAT_14687cea8,&PTR_FUN_1462d0770);
  }
  return DAT_14687cea8;
}



// FUNCTION 1413049a0 FUN_1413049a0 body=47 status=ok
// SIG undefined FUN_1413049a0(void)

longlong FUN_1413049a0(void)

{
  if (DAT_14687ceb0 == 0) {
    FUN_141786a30(&DAT_14687ceb0,&PTR_FUN_1462d07b0);
  }
  return DAT_14687ceb0;
}



// FUNCTION 1413049d0 FUN_1413049d0 body=53 status=ok
// SIG undefined FUN_1413049d0(void)

void FUN_1413049d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1447e4eb0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141304a10 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGBattleRoyaleGameState::GetPrivateStaticClass(void)

{
  if (DAT_14687cdc8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DisplacementZone",&DAT_14687cdc8,FUN_140447710,0x588,
                  0x10000000,0,L"Engine",&LAB_1413052e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1412d9cf0,&LAB_140447700,0);
  }
  return DAT_14687cdc8;
}



// FUNCTION 141304ad0 FUN_141304ad0 body=162 status=ok
// SIG undefined FUN_141304ad0(void)

longlong FUN_141304ad0(void)

{
  if (DAT_14687ccf0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DiscoveryAreaComponent",&DAT_14687ccf0,FUN_140447710,2000,
                  0x10000000,0,L"Engine",FUN_1413056e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141306400,&LAB_140447700,0);
  }
  return DAT_14687ccf0;
}



// FUNCTION 141304ba0 FUN_141304ba0 body=162 status=ok
// SIG undefined FUN_141304ba0(void)

longlong FUN_141304ba0(void)

{
  if (DAT_14687cf00 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DuelGlobals",&DAT_14687cf00,FUN_140447710,0x148,0x10000000,0,
                  L"Engine",&LAB_141305a20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_14687cf00;
}



// FUNCTION 141304c50 FUN_141304c50 body=162 status=ok
// SIG undefined FUN_141304c50(void)

longlong FUN_141304c50(void)

{
  if (DAT_14687cbf8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_CheckWeaponIsUnderleveled",
                  &DAT_14687cbf8,FUN_140447710,0x40,0x10000000,0,L"Engine",FUN_141305320,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687cbf8;
}



// FUNCTION 141304d10 FUN_141304d10 body=162 status=ok
// SIG undefined FUN_141304d10(void)

longlong FUN_141304d10(void)

{
  if (DAT_14687cc08 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_CheckWeaponManufacturer",
                  &DAT_14687cc08,FUN_140447710,0x40,0x10000000,0,L"Engine",FUN_141305360,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687cc08;
}



// FUNCTION 141304dd0 FUN_141304dd0 body=162 status=ok
// SIG undefined FUN_141304dd0(void)

longlong FUN_141304dd0(void)

{
  if (DAT_14687cc18 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_CheckWeaponRarity",
                  &DAT_14687cc18,FUN_140447710,0x40,0x10000000,0,L"Engine",FUN_1413053a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687cc18;
}



// FUNCTION 141304e80 FUN_141304e80 body=53 status=ok
// SIG undefined FUN_141304e80(void)

void FUN_141304e80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1447e5010;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141304ed0 FUN_141304ed0 body=162 status=ok
// SIG undefined FUN_141304ed0(void)

longlong FUN_141304ed0(void)

{
  if (DAT_14687cc28 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_CheckWeaponType",&DAT_14687cc28,
                  FUN_140447710,0x40,0x10000000,0,L"Engine",FUN_1413053e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687cc28;
}



// FUNCTION 141304f90 FUN_141304f90 body=53 status=ok
// SIG undefined FUN_141304f90(void)

void FUN_141304f90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1447e5128;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141304fd0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UEnvQueryTest_Random::StaticClass(void)

{
  if (DAT_14687cdb0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DiscoveryComponent",&DAT_14687cdb0,FUN_141306440,0x1c0,
                  0x10000000,0,L"Engine",&LAB_141305780,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_14687cdb0;
}



// FUNCTION 141305090 FUN_141305090 body=162 status=ok
// SIG undefined FUN_141305090(void)

longlong FUN_141305090(void)

{
  if (DAT_14687cc38 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_GbxCondition",&DAT_14687cc38,
                  FUN_140447710,0x40,0x10000000,0,L"Engine",FUN_141305420,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687cc38;
}



// FUNCTION 141305150 FUN_141305150 body=162 status=ok
// SIG undefined FUN_141305150(void)

longlong FUN_141305150(void)

{
  if (DAT_14687cc48 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"DialogSelectorImplementation_HasGameplayTag",&DAT_14687cc48,
                  FUN_140447710,0x40,0x10000000,0,L"Engine",FUN_141305460,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_140600e90,&LAB_140447700,0);
  }
  return DAT_14687cc48;
}



// FUNCTION 141305200 FUN_141305200 body=224 status=ok
// SIG undefined FUN_141305200(void)

void FUN_141305200(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_2 + 8);
    do {
      *param_1 = puVar3[-1];
      param_1[1] = 0;
      iVar2 = *(int *)(puVar3 + 1);
      _Src = (void *)*puVar3;
      *(int *)(param_1 + 2) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x14) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 1,iVar2,0);
        _guard_xfg_dispatch_icall_nop((void *)param_1[1],_Src,(longlong)iVar2 << 4);
      }
      puVar1 = puVar3 + 2;
      puVar3 = puVar3 + 4;
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)puVar1;
      param_1 = param_1 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141305320 FUN_141305320 body=49 status=ok
// SIG undefined FUN_141305320(void)

void FUN_141305320(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447e0a98;
  }
  return;
}



// FUNCTION 141305360 FUN_141305360 body=49 status=ok
// SIG undefined FUN_141305360(void)

void FUN_141305360(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447e0d18;
  }
  return;
}



// FUNCTION 1413053a0 FUN_1413053a0 body=49 status=ok
// SIG undefined FUN_1413053a0(void)

void FUN_1413053a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447e0f98;
  }
  return;
}



// FUNCTION 1413053e0 FUN_1413053e0 body=49 status=ok
// SIG undefined FUN_1413053e0(void)

void FUN_1413053e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447e1218;
  }
  return;
}



// FUNCTION 141305420 FUN_141305420 body=49 status=ok
// SIG undefined FUN_141305420(void)

void FUN_141305420(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447e1498;
  }
  return;
}



// FUNCTION 141305460 FUN_141305460 body=49 status=ok
// SIG undefined FUN_141305460(void)

void FUN_141305460(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447e1718;
  }
  return;
}



// FUNCTION 1413054a0 FUN_1413054a0 body=49 status=ok
// SIG undefined FUN_1413054a0(void)

void FUN_1413054a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447e1998;
  }
  return;
}



// FUNCTION 1413054e0 FUN_1413054e0 body=49 status=ok
// SIG undefined FUN_1413054e0(void)

void FUN_1413054e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447e1c18;
  }
  return;
}



// FUNCTION 141305520 FUN_141305520 body=49 status=ok
// SIG undefined FUN_141305520(void)

void FUN_141305520(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447e1e98;
  }
  return;
}



// FUNCTION 141305560 FUN_141305560 body=56 status=ok
// SIG undefined FUN_141305560(void)

void FUN_141305560(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447e2118;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x453b8000;
  }
  return;
}



// FUNCTION 1413055a0 FUN_1413055a0 body=49 status=ok
// SIG undefined FUN_1413055a0(void)

void FUN_1413055a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447e2398;
  }
  return;
}



// FUNCTION 1413055e0 FUN_1413055e0 body=49 status=ok
// SIG undefined FUN_1413055e0(void)

void FUN_1413055e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447e2618;
  }
  return;
}



// FUNCTION 141305620 FUN_141305620 body=49 status=ok
// SIG undefined FUN_141305620(void)

void FUN_141305620(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447e2898;
  }
  return;
}



// FUNCTION 141305660 FUN_141305660 body=49 status=ok
// SIG undefined FUN_141305660(void)

void FUN_141305660(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447e2b18;
  }
  return;
}



// FUNCTION 1413056a0 FUN_1413056a0 body=49 status=ok
// SIG undefined FUN_1413056a0(void)

void FUN_1413056a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    puVar1[5] = 0;
    *puVar1 = &PTR_FUN_1447e2d98;
  }
  return;
}



// FUNCTION 1413056e0 FUN_1413056e0 body=159 status=ok
// SIG undefined FUN_1413056e0(void)

void FUN_1413056e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142d7a730(puVar1,param_1);
    *puVar1 = &PTR_FUN_1447e3018;
    puVar1[5] = &PTR_LAB_1447e3918;
    puVar1[0x5a] = &PTR_LAB_1447e3948;
    puVar1[0xea] = 0;
    FText::FText(puVar1 + 0xeb);
    puVar1[0xf0] = 0;
    *(undefined4 *)(puVar1 + 0xf2) = 0;
    puVar1[0xf3] = 0;
    puVar1[0xf4] = 0;
    puVar1[0xf5] = 0;
    puVar1[0xf6] = 0;
    puVar1[0xf7] = 0;
    *(undefined4 *)(puVar1 + 0xf8) = 0x3f800000;
  }
  return;
}



// FUNCTION 1413057a0 FUN_1413057a0 body=315 status=ok
// SIG undefined FUN_1413057a0(void)

void FUN_1413057a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1420d5de0(puVar1,param_1);
    *(undefined4 *)(puVar1 + 0x42) = 0;
    *puVar1 = &PTR_FUN_1447d6728;
    *(undefined2 *)(puVar1 + 0x46) = 0x300;
    puVar1[0x20] = &PTR_LAB_1447d6bc0;
    puVar1[0x41] = &PTR_LAB_1447d6be8;
    puVar1[0x48] = 0;
    puVar1[0x49] = 0;
    *(undefined1 *)(puVar1 + 0x4a) = 0;
    puVar1[0x4b] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x4c,0);
    puVar1[0x4d] = 0;
    FWeakObjectPtr::operator=(puVar1 + 0x4e,0);
    puVar1[0x4f] = 0;
    puVar1[0x50] = 0;
    puVar1[0x51] = 0;
    puVar1[0x52] = 0;
    puVar1[0x53] = 0;
    *(undefined1 *)(puVar1 + 0x54) = 0;
    *(undefined4 *)(puVar1 + 0x55) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x2a4) = 0xffffffff;
    *puVar1 = &PTR_FUN_1447e3f60;
    puVar1[0x20] = &PTR_LAB_1447e43f8;
    puVar1[0x41] = &PTR_LAB_1447e4420;
    puVar1[0x58] = 0;
    puVar1[0x59] = 0;
    puVar1[0x5a] = 0;
    puVar1[0x5b] = 0;
    puVar1[0x5c] = 0;
    puVar1[0x5d] = 0;
  }
  return;
}



// FUNCTION 141305900 InternalConstructor<UUnlockableItem> body=64 status=ok
// SIG undefined InternalConstructor<UUnlockableItem>(void)

void InternalConstructor<UUnlockableItem>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    *puVar1 = &PTR_FUN_1447e44a0;
    FText::FText(puVar1 + 6);
    FText::FText(puVar1 + 9);
    return;
  }
  return;
}



// FUNCTION 141305940 FUN_141305940 body=62 status=ok
// SIG undefined FUN_141305940(void)

void FUN_141305940(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    *puVar1 = &PTR_FUN_1447e4718;
    puVar1[6] = &PTR_LAB_1447e4990;
    puVar1[7] = 0;
    puVar1[8] = 0;
  }
  return;
}



// FUNCTION 141305980 FUN_141305980 body=66 status=ok
// SIG undefined FUN_141305980(void)

void FUN_141305980(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    puVar1[7] = 0;
    puVar1[8] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__1447e49a8;
    puVar1[6] = &PTR_LAB_1447e4c20;
    puVar1[9] = 0;
  }
  return;
}



// FUNCTION 1413059d0 InternalConstructor<UDialogueRole> body=56 status=ok
// SIG undefined InternalConstructor<UDialogueRole>(void)

void InternalConstructor<UDialogueRole>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UDataAsset::UDataAsset(puVar1,param_1);
    *puVar1 = &PTR_FUN_1447e4c38;
    FText::FText(puVar1 + 6);
    puVar1[9] = 0;
  }
  return;
}



// FUNCTION 141305a40 FUN_141305a40 body=106 status=ok
// SIG undefined FUN_141305a40(void)

undefined4 * FUN_141305a40(undefined4 *param_1)

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
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 141305b00 FUN_141305b00 body=203 status=ok
// SIG undefined FUN_141305b00(void)

longlong FUN_141305b00(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x760);
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
  if (*(longlong *)(param_1 + 0x738) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x720) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x710) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,2000);
  }
  return param_1;
}



// FUNCTION 141305bd0 FUN_141305bd0 body=121 status=ok
// SIG undefined FUN_141305bd0(void)

longlong FUN_141305bd0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2f0);
  }
  return param_1;
}



// FUNCTION 141305c50 FUN_141305c50 body=184 status=ok
// SIG undefined FUN_141305c50(void)

longlong FUN_141305c50(longlong param_1,ulonglong param_2)

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
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141305d10 FUN_141305d10 body=63 status=ok
// SIG undefined FUN_141305d10(void)

longlong FUN_141305d10(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_143fe0658;
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141305d50 `scalar_deleting_destructor' body=63 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UGizmoConstantAxisSource::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_143fe0658;
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141305d90 FUN_141305d90 body=132 status=ok
// SIG undefined FUN_141305d90(void)

longlong FUN_141305d90(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141305e20 FUN_141305e20 body=61 status=ok
// SIG undefined FUN_141305e20(void)

void FUN_141305e20(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14687c928);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 141305e60 FUN_141305e60 body=61 status=ok
// SIG undefined FUN_141305e60(void)

void FUN_141305e60(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14687c930);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 141305f00 FUN_141305f00 body=71 status=ok
// SIG undefined FUN_141305f00(void)

undefined1 FUN_141305f00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_140e14db0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141305f50 FUN_141305f50 body=71 status=ok
// SIG undefined FUN_141305f50(void)

undefined1 FUN_141305f50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_140e14dc0(param_2 + param_3,param_3);
      param_3 = param_3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141305fa0 FUN_141305fa0 body=143 status=ok
// SIG undefined FUN_141305fa0(void)

undefined8 FUN_141305fa0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(param_3 + 0x20 + (longlong)puVar1);
      puVar1 = puVar1 + 0xc;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141306030 FUN_141306030 body=168 status=ok
// SIG undefined FUN_141306030(void)

undefined1 FUN_141306030(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar2 = (int)param_2[1];
      if (iVar2 != 0) {
        plVar1 = (longlong *)(*param_2 + 8);
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 4;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_141305200(param_2,*param_3,(int)param_3[1],*(undefined4 *)((longlong)param_2 + 0xc),0);
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 1413060e0 FUN_1413060e0 body=245 status=ok
// SIG undefined FUN_1413060e0(void)

undefined8 FUN_1413060e0(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *_Src;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined4 *)(param_3 + 4);
    do {
      *param_2 = puVar4[-1];
      puVar1 = (undefined8 *)(param_2 + 4);
      param_2[1] = *puVar4;
      *(undefined1 *)(param_2 + 2) = *(undefined1 *)(puVar4 + 1);
      param_2[3] = puVar4[2];
      if (puVar1 != (undefined8 *)(puVar4 + 3)) {
        iVar3 = puVar4[5];
        _Src = *(void **)(puVar4 + 3);
        param_2[6] = iVar3;
        if ((iVar3 == 0) && (param_2[7] == 0)) {
          param_2[7] = 0;
        }
        else {
          TArray<FRotator,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 * 0xc);
        }
      }
      param_2[8] = puVar4[7];
      param_2[9] = puVar4[8];
      puVar2 = puVar4 + 9;
      puVar4 = puVar4 + 0xc;
      param_2[10] = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xc;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1413061e0 FUN_1413061e0 body=158 status=ok
// SIG undefined FUN_1413061e0(void)

undefined8 FUN_1413061e0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar1 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar1;
      if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1);
        _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 3);
      }
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 141306290 FUN_141306290 body=55 status=ok
// SIG undefined FUN_141306290(void)

void FUN_141306290(void)

{
  undefined8 uVar1;
  
  if (DAT_14687c828 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687c828 = GetStaticEnum(FUN_141306cb0,uVar1,L"EDiscoveryAreaDrawStyle");
  }
  return;
}



// FUNCTION 1413062e0 FUN_1413062e0 body=6 status=ok
// SIG undefined FUN_1413062e0(void)

undefined8 FUN_1413062e0(void)

{
  return 0x3ced9c49;
}



// FUNCTION 1413062f0 FUN_1413062f0 body=6 status=ok
// SIG undefined FUN_1413062f0(void)

undefined8 FUN_1413062f0(void)

{
  return 0x99cf89b9;
}



// FUNCTION 141306300 FUN_141306300 body=6 status=ok
// SIG undefined FUN_141306300(void)

undefined8 FUN_141306300(void)

{
  return 0xaf147140;
}



// FUNCTION 141306310 FUN_141306310 body=6 status=ok
// SIG undefined FUN_141306310(void)

undefined8 FUN_141306310(void)

{
  return 0x84e6164e;
}



// FUNCTION 141306320 FUN_141306320 body=6 status=ok
// SIG undefined FUN_141306320(void)

undefined8 FUN_141306320(void)

{
  return 0x3241fa5c;
}



// FUNCTION 141306330 FUN_141306330 body=6 status=ok
// SIG undefined FUN_141306330(void)

undefined8 FUN_141306330(void)

{
  return 0x30e85f4f;
}



// FUNCTION 141306340 FUN_141306340 body=6 status=ok
// SIG undefined FUN_141306340(void)

undefined8 FUN_141306340(void)

{
  return 0x92193e2d;
}



// FUNCTION 141306350 FUN_141306350 body=6 status=ok
// SIG undefined FUN_141306350(void)

undefined8 FUN_141306350(void)

{
  return 0x76912a07;
}



// FUNCTION 141306360 FUN_141306360 body=6 status=ok
// SIG undefined FUN_141306360(void)

undefined8 FUN_141306360(void)

{
  return 0x7344174c;
}



// FUNCTION 141306370 FUN_141306370 body=57 status=ok
// SIG undefined FUN_141306370(void)

void FUN_141306370(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14687cbe0);
                    /* WARNING: Could not recover jumptable at 0x0001413063a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1413063c0 FUN_1413063c0 body=61 status=ok
// SIG undefined FUN_1413063c0(void)

void FUN_1413063c0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14687c938);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 141306410 FUN_141306410 body=34 status=ok
// SIG undefined FUN_141306410(void)

void FUN_141306410(void)

{
  undefined8 uVar1;
  
  uVar1 = AItem::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetDuelTimeRemaining_1447e4fd0,4);
  return;
}



// FUNCTION 141306440 FUN_141306440 body=34 status=ok
// SIG undefined FUN_141306440(void)

void FUN_141306440(void)

{
  undefined8 uVar1;
  
  uVar1 = UEnvQueryTest_Random::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClientDiscoverLevel_1447e3e90,0xd);
  return;
}



// FUNCTION 141306470 StaticRegisterNativesUGPasswordResetPage body=34 status=ok
// SIG undefined StaticRegisterNativesUGPasswordResetPage(void)

void UGPasswordResetPage::StaticRegisterNativesUGPasswordResetPage(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_Displayed_1447e4470,3);
  return;
}



// FUNCTION 1413064a0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687cd30 == 0) {
    uVar1 = FUN_1413062e0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687cd30 = GetStaticStruct(FUN_141306ce0,uVar2,L"DiscoveredAreaInfo",0x10,uVar1);
  }
  return;
}



// FUNCTION 141306500 FUN_141306500 body=82 status=ok
// SIG undefined FUN_141306500(void)

void FUN_141306500(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687cd20 == 0) {
    uVar1 = FUN_1413062f0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687cd20 = GetStaticStruct(FUN_141306d10,uVar2,L"DiscoveredLevelInfo",0x20,uVar1);
  }
  return;
}



// FUNCTION 141306560 FUN_141306560 body=82 status=ok
// SIG undefined FUN_141306560(void)

void FUN_141306560(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687cd10 == 0) {
    uVar1 = FUN_141306300();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687cd10 = GetStaticStruct(FUN_141306d40,uVar2,L"DiscoveredPlanetInfo",0x30,uVar1);
  }
  return;
}



// FUNCTION 1413065c0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687cd00 == 0) {
    uVar1 = FUN_141306310();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687cd00 = GetStaticStruct(FUN_141306d70,uVar2,L"DiscoverySaveData",0x10,uVar1);
  }
  return;
}



// FUNCTION 141306620 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687ce60 == 0) {
    uVar1 = FUN_141306320();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687ce60 = GetStaticStruct(FUN_141306da0,uVar2,L"DlcLevelTravelPair",0x10,uVar1);
  }
  return;
}



// FUNCTION 141306680 FUN_141306680 body=82 status=ok
// SIG undefined FUN_141306680(void)

void FUN_141306680(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687cec8 == 0) {
    uVar1 = FUN_141306330();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687cec8 = GetStaticStruct(FUN_141306dd0,uVar2,L"DuelModeSettings",0x30,uVar1);
  }
  return;
}



// FUNCTION 1413066e0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687cee8 == 0) {
    uVar1 = FUN_141306340();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687cee8 = GetStaticStruct(FUN_141306e00,uVar2,L"DuelTeamGroup",0x10,uVar1);
  }
  return;
}



// FUNCTION 141306740 FUN_141306740 body=82 status=ok
// SIG undefined FUN_141306740(void)

void FUN_141306740(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687ced8 == 0) {
    uVar1 = FUN_141306350();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687ced8 = GetStaticStruct(FUN_141306e30,uVar2,L"DuelingNumParticipantsInfo",0xc,uVar1);
  }
  return;
}



// FUNCTION 1413067a0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14687ce80 == 0) {
    uVar1 = FUN_141306360();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14687ce80 = GetStaticStruct(FUN_141306e60,uVar2,L"PlayerDuelArenaState",0x10,uVar1);
  }
  return;
}



// FUNCTION 141306800 FUN_141306800 body=47 status=ok
// SIG undefined FUN_141306800(void)

longlong FUN_141306800(void)

{
  if (DAT_14687cdc0 == 0) {
    FUN_141786440(&DAT_14687cdc0,&PTR_GetPrivateStaticClass_1447debe0);
  }
  return DAT_14687cdc0;
}



// FUNCTION 141306830 Z_Construct_UClass_UAkXboxOneInitializationSettings body=47 status=ok
// SIG undefined Z_Construct_UClass_UAkXboxOneInitializationSettings(void)

longlong Z_Construct_UClass_UAkXboxOneInitializationSettings(void)

{
  if (DAT_14687cbf0 == 0) {
    FUN_141786440(&DAT_14687cbf0,&PTR_FUN_1447df7d0);
  }
  return DAT_14687cbf0;
}



// FUNCTION 141306860 FUN_141306860 body=47 status=ok
// SIG undefined FUN_141306860(void)

longlong FUN_141306860(void)

{
  if (DAT_14687cc00 == 0) {
    FUN_141786440(&DAT_14687cc00,&PTR_FUN_1447dfa00);
  }
  return DAT_14687cc00;
}



// FUNCTION 141306890 FUN_141306890 body=47 status=ok
// SIG undefined FUN_141306890(void)

longlong FUN_141306890(void)

{
  if (DAT_14687cc10 == 0) {
    FUN_141786440(&DAT_14687cc10,&PTR_FUN_1447dfc40);
  }
  return DAT_14687cc10;
}



// FUNCTION 1413068c0 FUN_1413068c0 body=47 status=ok
// SIG undefined FUN_1413068c0(void)

longlong FUN_1413068c0(void)

{
  if (DAT_14687cc20 == 0) {
    FUN_141786440(&DAT_14687cc20,&PTR_FUN_1447e0010);
  }
  return DAT_14687cc20;
}



// FUNCTION 1413068f0 FUN_1413068f0 body=47 status=ok
// SIG undefined FUN_1413068f0(void)

longlong FUN_1413068f0(void)

{
  if (DAT_14687cc30 == 0) {
    FUN_141786440(&DAT_14687cc30,&PTR_FUN_1447e0530);
  }
  return DAT_14687cc30;
}



// FUNCTION 141306920 FUN_141306920 body=47 status=ok
// SIG undefined FUN_141306920(void)

longlong FUN_141306920(void)

{
  if (DAT_14687cc40 == 0) {
    FUN_141786440(&DAT_14687cc40,&PTR_FUN_1447e0710);
  }
  return DAT_14687cc40;
}



// FUNCTION 141306950 FUN_141306950 body=47 status=ok
// SIG undefined FUN_141306950(void)

longlong FUN_141306950(void)

{
  if (DAT_14687cc50 == 0) {
    FUN_141786440(&DAT_14687cc50,&PTR_FUN_1447db3d0);
  }
  return DAT_14687cc50;
}



// FUNCTION 141306980 FUN_141306980 body=47 status=ok
// SIG undefined FUN_141306980(void)

longlong FUN_141306980(void)

{
  if (DAT_14687cc60 == 0) {
    FUN_141786440(&DAT_14687cc60,&PTR_FUN_1447db7f0);
  }
  return DAT_14687cc60;
}



// FUNCTION 1413069b0 FUN_1413069b0 body=47 status=ok
// SIG undefined FUN_1413069b0(void)

longlong FUN_1413069b0(void)

{
  if (DAT_14687cc70 == 0) {
    FUN_141786440(&DAT_14687cc70,&PTR_FUN_1447dba70);
  }
  return DAT_14687cc70;
}



// FUNCTION 1413069e0 FUN_1413069e0 body=47 status=ok
// SIG undefined FUN_1413069e0(void)

longlong FUN_1413069e0(void)

{
  if (DAT_14687cc80 == 0) {
    FUN_141786440(&DAT_14687cc80,&PTR_FUN_1447dbd30);
  }
  return DAT_14687cc80;
}



// FUNCTION 141306a10 FUN_141306a10 body=47 status=ok
// SIG undefined FUN_141306a10(void)

longlong FUN_141306a10(void)

{
  if (DAT_14687cc90 == 0) {
    FUN_141786440(&DAT_14687cc90,&PTR_FUN_1447dc230);
  }
  return DAT_14687cc90;
}



// FUNCTION 141306a40 FUN_141306a40 body=47 status=ok
// SIG undefined FUN_141306a40(void)

longlong FUN_141306a40(void)

{
  if (DAT_14687cca0 == 0) {
    FUN_141786440(&DAT_14687cca0,&PTR_FUN_1447dc510);
  }
  return DAT_14687cca0;
}



// FUNCTION 141306a70 FUN_141306a70 body=47 status=ok
// SIG undefined FUN_141306a70(void)

longlong FUN_141306a70(void)

{
  if (DAT_14687ccb0 == 0) {
    FUN_141786440(&DAT_14687ccb0,&PTR_FUN_1447dc780);
  }
  return DAT_14687ccb0;
}


