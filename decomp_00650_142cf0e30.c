// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142cf0e30 FUN_142cf0e30 body=286 status=ok
// SIG undefined FUN_142cf0e30(void)

void FUN_142cf0e30(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_142340830();
  local_68 = (undefined4)param_1;
  uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_60 = (undefined4)param_2;
  uStack_5c = (undefined4)((ulonglong)param_2 >> 0x20);
  if (((*(longlong *)(param_1 + 0x1778) != 0) && ((*(byte *)(param_1 + 0x18cc) & 2) == 0)) &&
     (*(longlong *)(param_1 + 0x178) != 0)) {
    local_28 = 0;
    local_18 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar1 + 1) = local_68;
      *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_64;
      *(undefined4 *)(puVar1 + 2) = uStack_60;
      *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_5c;
    }
    local_58[0] = &LAB_142ce3ac0;
    uVar2 = FUN_14247f500();
    FUN_14247d5a0(uVar2,param_1,local_58);
  }
  if (((*(char *)(param_1 + 0xea8) != '\0') && (*(longlong *)(param_1 + 0xeb0) != 0)) &&
     (*(longlong *)(param_1 + 0xeb8) != 0)) {
    local_28 = 0;
    local_18 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar1 + 1) = local_68;
      *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_64;
      *(undefined4 *)(puVar1 + 2) = uStack_60;
      *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_5c;
    }
    local_58[0] = &LAB_142ce3b10;
    uVar2 = FUN_14247f500();
    FUN_14247d5a0(uVar2,param_1,local_58);
  }
  return;
}



// FUNCTION 142cf0f50 FUN_142cf0f50 body=357 status=ok
// SIG undefined FUN_142cf0f50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cf0f50(longlong *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong local_18 [2];
  
  if (param_1 + 0x272 != local_18) {
    param_1[0x272] = 0;
    plVar3 = (longlong *)param_1[0x273];
    param_1[0x273] = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x274) = 0;
  *(undefined1 *)(param_1 + 0x270) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1384) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x138c) = DAT_1468b5d98;
  iVar8 = FUN_14233f450(param_1);
  if (iVar8 == 3) {
    (**(code **)(*param_1 + 0x260))(param_1);
    *(undefined1 *)((longlong)param_1 + 0x13a9) = 0;
  }
  if (param_1[0x1fb] != 0) {
    plVar3 = *(longlong **)(param_1[0x1fb] + 0x10);
    lVar9 = plVar3[0x1f];
    if (lVar9 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar9 = plVar3[0x1f];
      if (lVar9 == 0) goto LAB_142cf10a3;
    }
    if (*(longlong *)(lVar9 + 0x4c8) != 0) {
      uVar2 = *(undefined1 *)(*(longlong *)(lVar9 + 0x4c8) + 0x3f4);
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x1000;
      *(undefined1 *)((longlong)param_1 + 0x3f4) = uVar2;
      cVar7 = (**(code **)(*param_1 + 0x5c0))(param_1);
      if ((cVar7 != '\0') &&
         ((*(char *)(param_1[0x1fb] + 0x128) == '\x01' ||
          (*(char *)(param_1[0x1fb] + 0x95) == '\x02')))) {
        lVar9 = FUN_14233f840(param_1);
        if (lVar9 != 0) {
          *(undefined8 *)(lVar9 + 0xb0) = _DAT_1468b5d90;
          *(undefined4 *)(lVar9 + 0xb8) = DAT_1468b5d98;
          uVar6 = DAT_1464aa81c;
          uVar5 = DAT_1464aa818;
          uVar4 = DAT_1464aa814;
          *(undefined4 *)(lVar9 + 0xd0) = DAT_1464aa810;
          *(undefined4 *)(lVar9 + 0xd4) = uVar4;
          *(undefined4 *)(lVar9 + 0xd8) = uVar5;
          *(undefined4 *)(lVar9 + 0xdc) = uVar6;
        }
      }
    }
  }
LAB_142cf10a3:
  FUN_142cebf10(param_1);
  return;
}



// FUNCTION 142cf10c0 FUN_142cf10c0 body=177 status=ok
// SIG undefined FUN_142cf10c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_142cf10c0(longlong *param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_1 + 0x225) & 0x10) == 0) {
    cVar2 = FUN_1407c3030(param_1 + 0x1ae);
    if ((cVar2 == '\0') &&
       ((((char)param_1[0x49] != '\x06' || (*(char *)((longlong)param_1 + 0x249) != '\0')) ||
        (param_1[0x2f] == 0)))) {
      if (((*(byte *)(param_1 + 0x32d) & 1) != 0) &&
         (((*(float *)((longlong)param_1 + 0x4ec) != 0.0 || (*(float *)(param_1 + 0x9e) != 0.0)) ||
          (*(float *)((longlong)param_1 + 0x4f4) != 0.0)))) {
        cVar2 = (**(code **)(*param_1 + 0x5c0))(param_1);
        if (cVar2 != '\0') {
          FUN_142cbfa60(param_1 + 0x32a);
        }
      }
      lVar3 = FUN_1423408b0(param_1);
      return lVar3;
    }
  }
  *(undefined8 *)((longlong)param_1 + 0x4ec) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = DAT_1468b5d98;
  return (ulonglong)(uint3)((uint)uVar1 >> 8) << 8;
}



// FUNCTION 142cf1180 FUN_142cf1180 body=177 status=ok
// SIG undefined FUN_142cf1180(void)

void FUN_142cf1180(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  if ((param_1[0x81] != 0) && ((*(byte *)((longlong)param_1 + 0x544) & 1) != 0)) {
    cVar3 = (**(code **)(*param_1 + 0x448))();
    if (cVar3 != '\0') {
      FUN_142ce8a30(param_1,0,0);
    }
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(lVar1 + 0x848) != 0)) {
      FUN_142ce1dc0(param_1,*(longlong *)(lVar1 + 0x848),0);
    }
  }
  FUN_142ded8d0(param_1,param_2);
  return;
}



// FUNCTION 142cf1240 FUN_142cf1240 body=94 status=ok
// SIG undefined FUN_142cf1240(void)

undefined1 FUN_142cf1240(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x220);
  plVar4 = (longlong *)0x0;
  plVar3 = plVar4;
  if (lVar1 != 0) {
    plVar3 = *(longlong **)(lVar1 + 0x4c0);
  }
  if (plVar3 != (longlong *)0x0) {
    if (lVar1 != 0) {
      plVar4 = *(longlong **)(lVar1 + 0x4c0);
    }
    if (((plVar4 == (longlong *)0x0) || ((*(byte *)((longlong)plVar4 + 0xb1c) & 8) == 0)) &&
       (cVar2 = (**(code **)(*plVar3 + 0xa00))(), cVar2 != '\0')) {
      return 1;
    }
  }
  return *(undefined1 *)(param_1 + 0x7c0);
}



// FUNCTION 142cf12a0 FUN_142cf12a0 body=49 status=ok
// SIG undefined FUN_142cf12a0(void)

ulonglong FUN_142cf12a0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x30);
  uVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x110 + uVar1;
  while( true ) {
    if (uVar1 == uVar2) {
      return uVar1 & 0xffffffffffffff00;
    }
    if ((*(byte *)(uVar1 + 0x10c) & 1) != 0) break;
    uVar1 = uVar1 + 0x110;
  }
  return CONCAT71((int7)(uVar1 >> 8),1);
}



// FUNCTION 142cf12e0 FUN_142cf12e0 body=45 status=ok
// SIG undefined FUN_142cf12e0(void)

ulonglong FUN_142cf12e0(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = *(char **)(param_1 + 0x30);
  pcVar2 = pcVar1 + (longlong)*(int *)(param_1 + 0x38) * 0x110;
  while( true ) {
    if (pcVar1 == pcVar2) {
      return (ulonglong)pcVar1 & 0xffffffffffffff00;
    }
    if (*pcVar1 == '\x01') break;
    pcVar1 = pcVar1 + 0x110;
  }
  return CONCAT71((int7)((ulonglong)pcVar1 >> 8),1);
}



// FUNCTION 142cf1310 FUN_142cf1310 body=162 status=ok
// SIG undefined FUN_142cf1310(void)

undefined1 FUN_142cf1310(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xfd8);
  if (lVar1 == 0) {
    return false;
  }
  if (*(char *)(lVar1 + 0xce8) != '\0') {
    uVar2 = FUN_142cc5d20(lVar1 + 0xbe0);
    return uVar2;
  }
  if ((param_2 == '\0') && (*(longlong **)(param_1 + 0x20f8) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x20f8) + 0x3f8))();
    if (cVar3 != '\0') {
      return true;
    }
  }
  cVar3 = FUN_142cc1640(*(longlong *)(param_1 + 0xfd8) + 0xbe0,param_2);
  return cVar3 != '\0';
}



// FUNCTION 142cf13c0 FUN_142cf13c0 body=108 status=ok
// SIG undefined FUN_142cf13c0(void)

undefined8 FUN_142cf13c0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (param_1[0x44] != 0) {
    lVar2 = *(longlong *)(param_1[0x44] + 0x4c0);
  }
  if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0xb1c) & 8) != 0)) || ((char)param_1[0x4b0] == '\0')) {
    cVar1 = (**(code **)(*param_1 + 0xa60))();
    if (cVar1 == '\0') {
      return 0;
    }
    cVar1 = FUN_1407c3030(param_1 + 0x116);
    if ((cVar1 == '\0') && (cVar1 = FUN_142cf1430(param_1), cVar1 == '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142cf1430 FUN_142cf1430 body=73 status=ok
// SIG undefined FUN_142cf1430(void)

undefined1 FUN_142cf1430(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if ((*(longlong *)(param_1 + 0xfd8) == 0) || (*(longlong *)(param_1 + 0xfe8) == 0)) {
    return 0;
  }
  lVar1 = FUN_142274500();
  if ((lVar1 == 0) && (cVar2 = FUN_142285b90(*(undefined8 *)(param_1 + 0xfe8)), cVar2 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 142cf1480 FUN_142cf1480 body=110 status=ok
// SIG undefined FUN_142cf1480(void)

undefined8 FUN_142cf1480(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(longlong *)(param_1 + 0xfd8) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0xfd8) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      cVar2 = FUN_142340c40(param_1);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142cf14f0 FUN_142cf14f0 body=2092 status=ok
// SIG undefined FUN_142cf14f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142cf14f0(longlong param_1)

{
  ulonglong *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_128 [32];
  char local_108;
  int local_104;
  undefined8 *local_100;
  int local_f8;
  longlong *local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  plVar7 = (longlong *)FUN_142c6f130();
  if (plVar7 == (longlong *)0x0) {
    return 0;
  }
  local_f0 = plVar7;
  iVar4 = FUN_142235230(plVar7);
  uVar16 = *(longlong *)(param_1 + 0x10);
  local_e8 = uVar16;
  if ((*(byte *)(uVar16 + 0x60) & 4) != 0) {
    lVar8 = FUN_1422312c0(plVar7);
    if (lVar8 != 0) {
      lVar9 = FUN_142e4e4a0();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (cVar3 = FUN_142d6fcd0(lVar8), cVar3 == '\0')) goto LAB_142cf15bc;
    }
    *(undefined1 *)(param_1 + 0x192) = 1;
  }
LAB_142cf15bc:
  uVar13 = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  local_e0 = 0;
  cVar3 = FUN_142c71eb0(param_1,&DAT_146b31780,&local_e0);
  uVar15 = local_e0;
  if (cVar3 == '\0') goto LAB_142cf162d;
  if (local_e0 == 0) {
LAB_142cf1623:
    uVar15 = uVar13;
  }
  else {
    lVar9 = FUN_1428dfc70();
    lVar8 = *(longlong *)(uVar15 + 0x10);
    if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142cf1623;
  }
  *(ulonglong *)(param_1 + 200) = uVar15;
LAB_142cf162d:
  FUN_142c71d90(param_1,&DAT_146b31788,param_1 + 0x1a0);
  local_104 = 0;
  cVar3 = FUN_142c711a0(param_1,&DAT_146b31790,&local_104);
  if ((cVar3 != '\0') && (local_104 == 1)) {
    *(undefined1 *)(param_1 + 0x193) = 1;
  }
  *(undefined2 *)(param_1 + 400) = 1;
  *(undefined4 *)(param_1 + 0x198) = 0;
  lVar8 = (**(code **)(*plVar7 + 0x148))(plVar7);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(lVar8 + 0x790);
  if ((iVar4 != 1) && (*(char *)(param_1 + 0x192) == '\0')) {
    if ((*(byte *)(uVar16 + 0x60) & 0x10) != 0) {
      (**(code **)(*plVar7 + 0x310))(plVar7,0);
    }
    uVar10 = FUN_142c61880(param_1,&local_100);
    FUN_142c66430(*(undefined8 *)(param_1 + 0x18),plVar7,uVar10);
    iVar4 = *(int *)(uVar16 + 0xf0);
    if (0 < iVar4) {
      iVar6 = *(int *)(param_1 + 0xd8);
      iVar5 = iVar6 + iVar4;
      *(int *)(param_1 + 0xd8) = iVar5;
      if (*(int *)(param_1 + 0xdc) < iVar5) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xd0);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar6 * 8),0,
                 (longlong)iVar4 << 3);
    }
    iVar4 = *(int *)(uVar16 + 0x118);
    if (0 < iVar4) {
      iVar6 = *(int *)(param_1 + 0xe8);
      iVar5 = iVar6 + iVar4;
      *(int *)(param_1 + 0xe8) = iVar5;
      if (*(int *)(param_1 + 0xec) < iVar5) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xe0);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar6 * 8),0,
                 (longlong)iVar4 << 3);
    }
    local_100 = (undefined8 *)0x0;
    if (*(longlong *)(uVar16 + 0x70) != 0) {
      uVar10 = FUN_1429ff160();
      AActor::GetComponentsByTag(plVar7,&local_100,uVar10,*(undefined8 *)(uVar16 + 0x70));
      uVar15 = (ulonglong)((longlong)(local_100 + local_f8) + (7 - (longlong)local_100)) >> 3;
      if (local_100 + local_f8 < local_100) {
        uVar15 = uVar13;
      }
      uVar12 = uVar13;
      puVar11 = local_100;
      if (uVar15 != 0) {
        do {
          (**(code **)(*(longlong *)*puVar11 + 0x3b0))((longlong *)*puVar11,0);
          uVar12 = uVar12 + 1;
          puVar11 = puVar11 + 1;
        } while (uVar12 != uVar15);
      }
      if (local_100 != (undefined8 *)0x0) {
        FMemory::Free(local_100);
      }
    }
    local_58 = (longlong *)0x0;
    local_48 = 0;
    puVar11 = (undefined8 *)FUN_140438ef0(0x10,local_78);
    if (puVar11 != (undefined8 *)0x0) {
      puVar11[1] = param_1;
      *puVar11 = &PTR_FUN_143f77b70;
    }
    local_88[0] = &LAB_142ce3930;
    if (*(char *)(uVar16 + 0x10c) != '\0') {
      puVar1 = (ulonglong *)(param_1 + 0xf0);
      FUN_142cf09a0(plVar7,1,puVar1,local_88);
      if (*(char *)(uVar16 + 0x10c) == '\x01') {
        puVar11 = (undefined8 *)*puVar1;
        uVar15 = (longlong)*(int *)(param_1 + 0xf8) & 0x1fffffffffffffff;
        if (puVar11 + *(int *)(param_1 + 0xf8) < puVar11) {
          uVar15 = uVar13;
        }
        if (uVar15 != 0) {
          do {
            FUN_142397540(*puVar11,1);
            uVar13 = uVar13 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar13 != uVar15);
        }
      }
      else if ((*(char *)(uVar16 + 0x10c) == '\x02') &&
              (iVar4 = *(int *)(param_1 + 0xf8) + -1, -1 < iVar4)) {
        lVar8 = (longlong)iVar4 * 8;
        lVar9 = lVar8;
        do {
          plVar7 = *(longlong **)(lVar9 + *puVar1);
          cVar3 = (**(code **)(*plVar7 + 0x2a0))(plVar7);
          if ((((cVar3 == '\0') || (plVar7[0xde] == 0)) ||
              ((*(uint *)(plVar7[0xde] + 0x14c) >> 1 & 1) == 0)) ||
             ((*(byte *)(plVar7 + 0xe3) & 0x10) != 0)) {
            iVar6 = *(int *)(param_1 + 0xf8);
            iVar5 = (iVar6 - iVar4) + -1;
            if (0 < iVar5) {
              iVar5 = 1;
            }
            if (iVar5 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*puVar1 + lVar8),(void *)(*puVar1 + (longlong)(iVar6 - iVar5) * 8)
                         ,(longlong)iVar5 << 3);
              iVar6 = *(int *)(param_1 + 0xf8);
            }
            *(int *)(param_1 + 0xf8) = iVar6 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(puVar1);
          }
          else {
            FUN_142600fa0(plVar7);
          }
          lVar8 = lVar8 + -8;
          lVar9 = lVar9 + -8;
          iVar4 = iVar4 + -1;
          uVar16 = local_e8;
          plVar7 = local_f0;
        } while (-1 < iVar4);
      }
    }
    uVar15 = 0;
    if (*(longlong *)(uVar16 + 0x80) != 0) {
      uVar10 = UMaterialInstanceDynamic::Create(*(longlong *)(uVar16 + 0x80),plVar7);
      *(undefined8 *)(param_1 + 0x1b0) = uVar10;
    }
    if (*(longlong *)(uVar16 + 0x88) != 0) {
      uVar10 = UMaterialInstanceDynamic::Create(*(longlong *)(uVar16 + 0x88),plVar7);
      *(undefined8 *)(param_1 + 0x1b8) = uVar10;
    }
    if ((*(longlong *)(uVar16 + 0x78) != 0) || (local_108 = '\0', 0 < *(int *)(uVar16 + 0x98))) {
      local_108 = '\x01';
    }
    FUN_142cf0590(plVar7,&DAT_146b31768,local_88);
    plVar7 = (longlong *)(param_1 + 0x100);
    if (*(int *)(param_1 + 0x10c) < DAT_146b31770) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar7);
    }
    local_e8 = (ulonglong)
               ((longlong)(DAT_146b31768 + DAT_146b31770) + (7 - (longlong)DAT_146b31768)) >> 3;
    if (DAT_146b31768 + DAT_146b31770 < DAT_146b31768) {
      local_e8 = 0;
    }
    puVar11 = DAT_146b31768;
    if (local_e8 != 0) {
      do {
        iVar4 = *(int *)(param_1 + 0x108);
        plVar14 = (longlong *)*puVar11;
        iVar6 = iVar4 + 1;
        *(int *)(param_1 + 0x108) = iVar6;
        if (*(int *)(param_1 + 0x10c) < iVar6) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7);
        }
        lVar8 = *plVar7;
        lVar9 = (longlong)iVar4 * 0x10;
        *(undefined8 *)(lVar9 + lVar8) = 0;
        *(undefined8 *)(lVar9 + 8 + lVar8) = 0;
        *(longlong **)(*plVar7 + 8 + lVar9) = plVar14;
        *(undefined4 *)(lVar9 + *plVar7) = 0xffffffff;
        if (local_108 == '\0') {
          FUN_142cf4830(plVar14);
        }
        else if ((*(byte *)(uVar16 + 0xd1) & 8) == 0) {
          FUN_142cfd110(param_1,plVar14,*plVar7 + lVar9);
        }
        else {
          FUN_142cfdbf0();
        }
        if ((*(longlong *)(param_1 + 0x1b0) != 0) || (*(longlong *)(param_1 + 0x1b8) != 0)) {
          uVar10 = FUN_142c61880(param_1,&local_100);
          FUN_142c65940(*(undefined8 *)(param_1 + 0x18),plVar14,uVar10);
          if (*(longlong *)(param_1 + 0x1b0) != 0) {
            (**(code **)(*plVar14 + 0x580))(plVar14);
          }
          if (*(longlong *)(param_1 + 0x1b8) != 0) {
            (**(code **)(*plVar14 + 0x590))(plVar14);
          }
        }
        puVar11 = puVar11 + 1;
        uVar15 = uVar15 + 1;
      } while (uVar15 != local_e8);
    }
    FUN_142cf20d0(param_1);
    DAT_146b31770 = 0;
    if ((DAT_146b31774 < 0) && (DAT_146b31774 != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b31768,0);
    }
    plVar7 = local_f0;
    if (0 < *(int *)(uVar16 + 0x128)) {
      local_a8 = (longlong *)0x0;
      local_98 = 0;
      puVar11 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
      plVar7 = local_f0;
      if (puVar11 != (undefined8 *)0x0) {
        puVar11[1] = param_1;
        *puVar11 = &PTR_FUN_143f77b70;
      }
      local_d8[0] = &LAB_142ce39f0;
      FUN_142cf00f0(local_f0,0,param_1 + 0x110,local_d8);
      if (0 < *(int *)(param_1 + 0x118)) {
        FUN_142cf1ef0(param_1);
      }
      if (local_98 != 0) {
        plVar14 = local_c8;
        if (local_a8 != (longlong *)0x0) {
          plVar14 = local_a8;
        }
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x10))(plVar14,0);
        }
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    if (0 < *(int *)(uVar16 + 0x100)) {
      local_a8 = (longlong *)0x0;
      local_98 = 0;
      puVar11 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
      if (puVar11 != (undefined8 *)0x0) {
        puVar11[1] = param_1;
        *puVar11 = &PTR_FUN_143f77b70;
      }
      local_d8[0] = &LAB_142ce3950;
      FUN_142cf09a0(plVar7,0,param_1 + 0x120,local_d8);
      if (0 < *(int *)(param_1 + 0x128)) {
        FUN_142cf24d0(param_1);
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
    }
    FUN_142ce2790(param_1);
    if (local_48 != 0) {
      plVar7 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar7 = local_58;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return 1;
}



// FUNCTION 142cf1d20 FUN_142cf1d20 body=462 status=ok
// SIG undefined FUN_142cf1d20(void)

void FUN_142cf1d20(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8;
  longlong local_res10;
  undefined1 *local_38;
  longlong *plStack_30;
  undefined1 *local_28;
  longlong *plStack_20;
  
  lVar3 = 0;
  *(longlong *)(param_1 + 0xfe8) = param_2;
  if (param_2 != 0) {
    lVar2 = UMonkeyAnim::StaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142cf1d7c;
  }
  param_2 = lVar3;
LAB_142cf1d7c:
  *(longlong *)(param_1 + 0xfe0) = param_2;
  *(longlong *)(param_1 + 0x25c8) = param_1;
  *(longlong *)(param_1 + 0x25d0) = param_2;
  if ((*(longlong *)(param_1 + 0xfe8) != 0) &&
     (*(uint *)(param_1 + 0xfd0) = (uint)*(byte *)(*(longlong *)(param_1 + 0xfe8) + 0x30),
     param_2 != 0)) {
    lVar2 = FUN_142c9e9f0(param_2,DAT_146b31718);
    *(longlong *)(param_1 + 0x1448) = lVar2;
    if (lVar2 != 0) {
      plStack_20 = &local_res8;
      plStack_30 = &local_res10;
      local_28 = &LAB_142ce3990;
      local_38 = &LAB_142ce3ae0;
      local_res8 = param_1;
      local_res10 = param_1;
      FUN_142cacbe0(lVar2,*(undefined8 *)(param_1 + 0xfe0),&local_38,&local_28);
    }
    if (*(longlong *)(param_1 + 0xfe8) != 0) {
      lVar2 = FUN_142c9e9f0(*(undefined8 *)(param_1 + 0xfe0),DAT_146b31730);
      *(longlong *)(param_1 + 0x2420) = lVar2;
      if (lVar2 != 0) {
        plStack_20 = &local_res8;
        plStack_30 = &local_res10;
        local_28 = &LAB_142ce3960;
        local_38 = &LAB_142ce3a20;
        local_res8 = param_1;
        local_res10 = param_1;
        FUN_142cacbe0(lVar2,*(undefined8 *)(param_1 + 0xfe0),&local_38,&local_28);
      }
    }
    if (*(longlong *)(param_1 + 0xfd8) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xfd8) + 0xa18);
    }
    if ((lVar3 != 0) && (*(char *)(*(longlong *)(param_1 + 0xfe0) + 0x530) == '\0')) {
      FUN_142c945d0(lVar3);
    }
    FUN_142258420(*(undefined8 *)(param_1 + 0xfe0));
  }
  return;
}



// FUNCTION 142cf1ef0 FUN_142cf1ef0 body=466 status=ok
// SIG undefined FUN_142cf1ef0(void)

void FUN_142cf1ef0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined1 local_48 [16];
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x160);
  iVar14 = *(int *)(param_1 + 0x168);
  iVar3 = *(int *)(lVar4 + 0x128);
  if (iVar14 < iVar3) {
    *(int *)(param_1 + 0x168) = iVar3;
    if (*(int *)(param_1 + 0x16c) < iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<28,4>_>,FDefaultAllocator>::ResizeGrow
                (plVar1);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar14 * 0x1c + *plVar1),0,(longlong)(iVar3 - iVar14) * 0x1c);
  }
  else if ((iVar3 < iVar14) && (iVar3 != iVar14)) {
    *(int *)(param_1 + 0x168) = iVar3;
  }
  iVar14 = 0;
  if (0 < *(int *)(lVar4 + 0x128)) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + 0x120);
      lVar6 = *plVar1;
      bVar9 = *(byte *)(lVar13 + 8 + lVar5);
      if (((((bVar9 & 1) != 0) && ((*(byte *)(lVar13 + 0x1e0 + lVar5) & 2) != 0)) &&
          (*(char *)(lVar12 + lVar6) == '\0')) ||
         ((((bVar9 & 2) != 0 && ((*(byte *)(lVar13 + 0x2fa + lVar5) & 2) != 0)) &&
          (*(char *)(lVar12 + 0x14 + lVar6) == '\0')))) {
        plVar11 = *(longlong **)(param_1 + 0x110);
        plVar2 = plVar11 + *(int *)(param_1 + 0x118);
        if (plVar11 != plVar2) {
          do {
            if ((*(longlong *)(lVar13 + lVar5) == 0) ||
               (*(int *)(*plVar11 + 0x18) == (int)*(longlong *)(lVar13 + lVar5))) {
              if (plVar11 != (longlong *)0x0) {
                if ((((bVar9 & 1) != 0) && ((*(byte *)(lVar13 + 0x1e0 + lVar5) & 2) != 0)) &&
                   (*(char *)(lVar12 + lVar6) == '\0')) {
                  puVar10 = (undefined8 *)FUN_14236c8c0(*plVar11,local_48);
                  uVar7 = *puVar10;
                  uVar8 = puVar10[1];
                  *(undefined1 *)(lVar12 + lVar6) = 1;
                  puVar10 = (undefined8 *)(lVar12 + 4 + lVar6);
                  *puVar10 = uVar7;
                  puVar10[1] = uVar8;
                  bVar9 = *(byte *)(lVar13 + 8 + lVar5);
                }
                if ((((bVar9 & 2) != 0) && ((*(byte *)(lVar13 + 0x2fa + lVar5) & 2) != 0)) &&
                   (*(char *)(lVar12 + 0x14 + lVar6) == '\0')) {
                  *(undefined4 *)(lVar12 + 0x18 + lVar6) = *(undefined4 *)(*plVar11 + 0x2e4);
                  *(undefined1 *)(lVar12 + 0x14 + lVar6) = 1;
                }
              }
              break;
            }
            plVar11 = plVar11 + 1;
          } while (plVar11 != plVar2);
        }
      }
      iVar14 = iVar14 + 1;
      lVar13 = lVar13 + 0x3d0;
      lVar12 = lVar12 + 0x1c;
    } while (iVar14 < *(int *)(lVar4 + 0x128));
  }
  return;
}



// FUNCTION 142cf20d0 FUN_142cf20d0 body=1024 status=ok
// SIG undefined FUN_142cf20d0(void)

void FUN_142cf20d0(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  char *pcVar13;
  longlong lVar14;
  int local_res10;
  longlong local_res20;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_res10 = 1;
  if (0 < *(int *)(lVar1 + 0xa8)) {
    lVar11 = 0;
    iVar10 = 1;
    local_res20 = 0;
    do {
      puVar12 = (undefined8 *)(*(longlong *)(lVar1 + 0xa0) + local_res20);
      if ((((*(byte *)(puVar12 + 0x28) & 1) == 0) || (*(int *)(puVar12 + 0x2a) != 0)) &&
         ((*(byte *)((longlong)puVar12 + 0x82) & 2) != 0)) {
        plVar5 = (longlong *)(param_1 + 0x130);
        iVar4 = *(int *)(param_1 + 0x138);
        if (iVar4 < iVar10) {
          *(int *)(param_1 + 0x138) = iVar10;
          if (*(int *)(param_1 + 0x13c) < iVar10) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar5 + (longlong)iVar4 * 8),0,(longlong)(iVar10 - iVar4) << 3);
        }
        else if ((iVar10 < iVar4) && (iVar10 != iVar4)) {
          *(int *)(param_1 + 0x138) = iVar10;
        }
        pcVar13 = (char *)(*plVar5 + lVar11);
        if (*pcVar13 == '\0') {
          lVar9 = *(longlong *)(param_1 + 0x100);
          lVar8 = (longlong)*(int *)(param_1 + 0x108) * 0x10 + lVar9;
          for (; lVar9 != lVar8; lVar9 = lVar9 + 0x10) {
            iVar4 = (**(code **)(**(longlong **)(lVar9 + 8) + 0x6c8))();
            iVar7 = 0;
            if (0 < iVar4) {
              do {
                if ((*(byte *)(puVar12 + 0x28) & 1) == 0) {
LAB_142cf223f:
                  plVar5 = (longlong *)
                           (**(code **)(**(longlong **)(lVar9 + 8) + 0x560))
                                     (*(longlong **)(lVar9 + 8),iVar7);
                  if (plVar5 != (longlong *)0x0) {
                    local_60 = *puVar12;
                    local_58 = 0x202ffff;
                    local_54 = 0xffffffff;
                    cVar3 = (**(code **)(*plVar5 + 1000))(plVar5,&local_60,pcVar13 + 4,0);
                    if (cVar3 != '\0') {
                      *pcVar13 = '\x01';
                      goto LAB_142cf22b4;
                    }
                  }
                }
                else {
                  piVar2 = (int *)puVar12[0x29];
                  for (piVar6 = piVar2; piVar6 != piVar2 + *(int *)(puVar12 + 0x2a);
                      piVar6 = piVar6 + 1) {
                    if (*piVar6 == iVar7) {
                      if ((int)((longlong)piVar6 - (longlong)piVar2 >> 2) != -1) goto LAB_142cf223f;
                      break;
                    }
                  }
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < iVar4);
            }
            if (*pcVar13 != '\0') break;
          }
        }
      }
LAB_142cf22b4:
      local_res20 = local_res20 + 0x158;
      iVar10 = iVar10 + 1;
      lVar11 = lVar11 + 8;
    } while (iVar10 <= *(int *)(lVar1 + 0xa8));
  }
  if (0 < *(int *)(lVar1 + 0xb8)) {
    lVar11 = 0;
    lVar9 = 0;
    do {
      puVar12 = (undefined8 *)(*(longlong *)(lVar1 + 0xb0) + lVar9);
      if ((((*(byte *)(puVar12 + 0x4a) & 1) == 0) || (*(int *)(puVar12 + 0x4c) != 0)) &&
         ((*(byte *)(puVar12 + 0x3a) & 2) != 0)) {
        plVar5 = (longlong *)(param_1 + 0x140);
        iVar10 = *(int *)(param_1 + 0x148);
        if (iVar10 < local_res10) {
          *(int *)(param_1 + 0x148) = local_res10;
          if (*(int *)(param_1 + 0x14c) < local_res10) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
            ResizeGrow(plVar5);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar5 + (longlong)iVar10 * 0x14),0,
                     (longlong)(local_res10 - iVar10) * 0x14);
        }
        else if ((local_res10 < iVar10) && (local_res10 != iVar10)) {
          *(int *)(param_1 + 0x148) = local_res10;
        }
        pcVar13 = (char *)(*plVar5 + lVar11);
        if (*pcVar13 == '\0') {
          lVar8 = *(longlong *)(param_1 + 0x100);
          lVar14 = (longlong)*(int *)(param_1 + 0x108) * 0x10 + lVar8;
          for (; lVar8 != lVar14; lVar8 = lVar8 + 0x10) {
            iVar10 = (**(code **)(**(longlong **)(lVar8 + 8) + 0x6c8))();
            iVar4 = 0;
            if (0 < iVar10) {
              do {
                if ((*(byte *)(puVar12 + 0x4a) & 1) == 0) {
LAB_142cf241e:
                  plVar5 = (longlong *)
                           (**(code **)(**(longlong **)(lVar8 + 8) + 0x560))
                                     (*(longlong **)(lVar8 + 8),iVar4);
                  if (plVar5 != (longlong *)0x0) {
                    local_60 = *puVar12;
                    local_58 = 0x202ffff;
                    local_54 = 0xffffffff;
                    cVar3 = (**(code **)(*plVar5 + 0x400))(plVar5,&local_60,pcVar13 + 4,0);
                    if (cVar3 != '\0') {
                      *pcVar13 = '\x01';
                      goto LAB_142cf2492;
                    }
                  }
                }
                else {
                  piVar2 = (int *)puVar12[0x4b];
                  for (piVar6 = piVar2; piVar6 != piVar2 + *(int *)(puVar12 + 0x4c);
                      piVar6 = piVar6 + 1) {
                    if (*piVar6 == iVar4) {
                      if ((int)((longlong)piVar6 - (longlong)piVar2 >> 2) != -1) goto LAB_142cf241e;
                      break;
                    }
                  }
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < iVar10);
            }
            if (*pcVar13 != '\0') break;
          }
        }
      }
LAB_142cf2492:
      local_res10 = local_res10 + 1;
      lVar9 = lVar9 + 0x268;
      lVar11 = lVar11 + 0x14;
    } while (local_res10 <= *(int *)(lVar1 + 0xb8));
  }
  return;
}



// FUNCTION 142cf24d0 FUN_142cf24d0 body=999 status=ok
// SIG undefined FUN_142cf24d0(void)

void FUN_142cf24d0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  int local_res10;
  longlong local_res20;
  longlong local_80;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  local_res10 = 0;
  if (0 < *(int *)(lVar4 + 0x100)) {
    local_res20 = 0;
    local_80 = 0;
    do {
      lVar9 = *(longlong *)(lVar4 + 0xf8) + local_80;
      if (0 < *(int *)(lVar9 + 0x18)) {
        lVar14 = 0;
        lVar13 = 0;
        iVar10 = 1;
        do {
          lVar5 = *(longlong *)(lVar9 + 0x10);
          if ((*(byte *)(lVar5 + 0x82 + lVar13) & 2) != 0) {
            plVar1 = (longlong *)(param_1 + 0x150);
            iVar3 = *(int *)(param_1 + 0x158);
            iVar7 = local_res10 + 1;
            if (iVar3 < iVar7) {
              *(int *)(param_1 + 0x158) = iVar7;
              if (*(int *)(param_1 + 0x15c) < iVar7) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                ::ResizeGrow(plVar1);
              }
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar3 * 0x20 + *plVar1),0,(longlong)(iVar7 - iVar3) << 5
                        );
            }
            else if (iVar7 < iVar3) {
              TArray<FMovieSceneEvaluationGroup,FDefaultAllocator>::RemoveAtImpl
                        (plVar1,iVar7,iVar3 - iVar7,0);
            }
            plVar12 = (longlong *)(*plVar1 + local_res20);
            iVar3 = (int)plVar12[1];
            if (iVar3 < iVar10) {
              *(int *)(plVar12 + 1) = iVar10;
              if (*(int *)((longlong)plVar12 + 0xc) < iVar10) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar12);
              }
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar12 + (longlong)iVar3 * 8),0,(longlong)(iVar10 - iVar3) << 3)
              ;
            }
            else if ((iVar10 < iVar3) && (iVar10 != iVar3)) {
              *(int *)(plVar12 + 1) = iVar10;
            }
            lVar11 = *(longlong *)(local_res20 + *plVar1);
            if (*(char *)(lVar11 + lVar14) == '\0') {
              puVar8 = *(undefined8 **)(param_1 + 0x120);
              puVar2 = puVar8 + *(int *)(param_1 + 0x128);
              for (; puVar8 != puVar2; puVar8 = puVar8 + 1) {
                cVar6 = (**(code **)(*(longlong *)*puVar8 + 0x960))
                                  ((longlong *)*puVar8,*(undefined8 *)(lVar5 + lVar13),
                                   lVar14 + 4 + lVar11);
                if (cVar6 != '\0') {
                  *(undefined1 *)(lVar11 + lVar14) = 1;
                  break;
                }
              }
            }
          }
          iVar10 = iVar10 + 1;
          lVar13 = lVar13 + 0x158;
          lVar14 = lVar14 + 8;
        } while (iVar10 <= *(int *)(lVar9 + 0x18));
      }
      if (0 < *(int *)(lVar9 + 0x28)) {
        lVar14 = 0;
        lVar13 = 0;
        iVar10 = 1;
        do {
          lVar5 = *(longlong *)(lVar9 + 0x20);
          if ((*(byte *)(lVar5 + 0x1d0 + lVar13) & 2) != 0) {
            plVar1 = (longlong *)(param_1 + 0x150);
            iVar3 = *(int *)(param_1 + 0x158);
            iVar7 = local_res10 + 1;
            if (iVar3 < iVar7) {
              *(int *)(param_1 + 0x158) = iVar7;
              if (*(int *)(param_1 + 0x15c) < iVar7) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                ::ResizeGrow(plVar1);
              }
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar3 * 0x20 + *plVar1),0,(longlong)(iVar7 - iVar3) << 5
                        );
            }
            else if (iVar7 < iVar3) {
              TArray<FMovieSceneEvaluationGroup,FDefaultAllocator>::RemoveAtImpl
                        (plVar1,iVar7,iVar3 - iVar7,0);
            }
            lVar11 = *plVar1 + local_res20;
            iVar3 = *(int *)(lVar11 + 0x18);
            if (iVar3 < iVar10) {
              *(int *)(lVar11 + 0x18) = iVar10;
              if (*(int *)(lVar11 + 0x1c) < iVar10) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
                ResizeGrow(lVar11 + 0x10);
              }
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(lVar11 + 0x10) + (longlong)iVar3 * 0x14),0,
                         (longlong)(iVar10 - iVar3) * 0x14);
            }
            else if ((iVar10 < iVar3) && (iVar10 != iVar3)) {
              *(int *)(lVar11 + 0x18) = iVar10;
            }
            lVar11 = *(longlong *)(local_res20 + 0x10 + *plVar1);
            if (*(char *)(lVar11 + lVar14) == '\0') {
              puVar8 = *(undefined8 **)(param_1 + 0x120);
              puVar2 = puVar8 + *(int *)(param_1 + 0x128);
              for (; puVar8 != puVar2; puVar8 = puVar8 + 1) {
                cVar6 = (**(code **)(*(longlong *)*puVar8 + 0x968))
                                  ((longlong *)*puVar8,*(undefined8 *)(lVar5 + lVar13),local_70);
                if (cVar6 != '\0') {
                  FLinearColor::FLinearColor(&local_60,local_70);
                  *(undefined1 *)(lVar11 + lVar14) = 1;
                  puVar2 = (undefined8 *)(lVar11 + 4 + lVar14);
                  *puVar2 = local_60;
                  puVar2[1] = uStack_58;
                  break;
                }
              }
            }
          }
          iVar10 = iVar10 + 1;
          lVar13 = lVar13 + 0x268;
          lVar14 = lVar14 + 0x14;
        } while (iVar10 <= *(int *)(lVar9 + 0x28));
      }
      local_res10 = local_res10 + 1;
      local_80 = local_80 + 0x30;
      local_res20 = local_res20 + 0x20;
    } while (local_res10 < *(int *)(lVar4 + 0x100));
  }
  return;
}



// FUNCTION 142cf28c0 FUN_142cf28c0 body=875 status=ok
// SIG undefined FUN_142cf28c0(void)

void FUN_142cf28c0(longlong *param_1,longlong param_2,char param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong local_res10;
  char local_res18;
  int local_88;
  int local_84;
  longlong local_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  longlong *plStack_40;
  
  plVar10 = param_1 + 0x80;
  local_res18 = param_3;
  if (param_1[0x81] != param_2) {
    param_1[0x81] = param_2;
    if ((longlong *)*plVar10 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar10 + 0x260))();
    }
  }
  param_1[0x82] = *(longlong *)(param_2 + 0x490);
  if ((char)param_1[0x83] != '\x01') {
    *(undefined1 *)(param_1 + 0x83) = 1;
    if ((longlong *)*plVar10 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar10 + 0x260))();
    }
  }
  local_68 = 0;
  uStack_60 = 0;
  FUN_142cff980(plVar10,&local_68);
  local_58 = 0;
  uStack_50 = 0;
  FUN_142cfee00(plVar10,&local_58);
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UPawnAttachSlotComponent::HandleActorDestroyed",L"::");
  pwVar2 = (wchar_t *)0x0;
  while (pwVar1 = pwVar6, pwVar1 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
    pwVar2 = pwVar1;
  }
  FName::FName(&local_res10,pwVar2 + 2,1);
  lVar11 = param_1[0x81];
  plVar12 = (longlong *)(lVar11 + 0x290);
  FWeakObjectPtr::operator=(&local_88,0);
  local_80 = 0;
  FWeakObjectPtr::operator=(&local_88,param_1);
  local_80 = local_res10;
  if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_88), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_80);
  }
  piVar8 = (int *)*plVar12;
  iVar5 = *(int *)(lVar11 + 0x298);
  piVar9 = piVar8;
  do {
    if (piVar9 == piVar8 + (longlong)iVar5 * 4) {
LAB_142cf2a5e:
      iVar5 = *(int *)(lVar11 + 0x298);
      *(int *)(lVar11 + 0x298) = iVar5 + 1;
      if (*(int *)(lVar11 + 0x29c) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar5);
      }
      piVar8 = (int *)((longlong)iVar5 * 0x10 + *plVar12);
      *piVar8 = local_88;
      piVar8[1] = local_84;
      *(longlong *)(piVar8 + 2) = local_80;
LAB_142cf2a96:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar12);
      FUN_142cfcd80(param_1,param_2);
      cVar3 = local_res18;
      iVar5 = -1;
      if ((local_res18 == '\0') && (iVar5 = -1, *(char *)((longlong)param_1 + 0x511) != '\0')) {
        iVar5 = (**(code **)(*param_1 + 0x4b8))(param_1,param_2);
      }
      (**(code **)(*param_1 + 0x470))(param_1);
      lVar11 = param_1[0x81];
      if ((lVar11 != 0) && ((char)param_1[0x83] == '\x01')) {
        if ((cVar3 == '\0') && (*(char *)((longlong)param_1 + 0x511) == '\0')) {
          iVar5 = (**(code **)(*param_1 + 0x4b8))(param_1,param_2);
          lVar11 = param_1[0x81];
        }
        if ((-1 < iVar5) && (iVar5 < (int)param_1[0xa4])) {
          FUN_142cfab40(param_1,param_1[0xa3] + (longlong)iVar5 * 0x48);
          lVar11 = param_1[0x81];
        }
        if ((lVar11 != 0) && ((char)param_1[0x83] == '\x01')) {
          FUN_142cef130(plVar10,&local_78);
          if ((local_78 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*local_78 + 0x38))(), plVar10 = plStack_70, cVar4 != '\0')) {
            if ((cVar3 != '\0') || (plVar10 = plStack_70, (char)param_1[0xa2] == '\0')) {
              FUN_142ceb590(param_1);
              plVar10 = plStack_70;
            }
          }
          else {
            lVar11 = param_1[0xa3];
            local_48 = local_78;
            plStack_40 = plStack_70;
            if (plStack_70 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
              UNLOCK();
            }
            FUN_142cf7e00(param_1,&local_48,0,lVar11 + (longlong)iVar5 * 0x48);
          }
          plVar12 = plStack_70;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar10 = plVar10 + 1;
            lVar11 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plStack_70)(plStack_70);
              LOCK();
              piVar8 = (int *)((longlong)plVar12 + 0xc);
              iVar5 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plStack_70 + 8))(plStack_70,1);
              }
            }
          }
        }
      }
      return;
    }
    if ((((*piVar9 == local_88) && (piVar9[1] == local_84)) ||
        ((cVar3 = FWeakObjectPtr::IsValid(piVar9), cVar3 == '\0' &&
         (cVar3 = FWeakObjectPtr::IsValid(&local_88), cVar3 == '\0')))) &&
       (*(longlong *)(piVar9 + 2) == local_80)) {
      if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_142cf2a96;
      goto LAB_142cf2a5e;
    }
    piVar9 = piVar9 + 4;
  } while( true );
}



// FUNCTION 142cf2c30 FUN_142cf2c30 body=27 status=ok
// SIG undefined FUN_142cf2c30(void)

void FUN_142cf2c30(longlong param_1)

{
  FUN_142340f20();
  *(longlong *)(param_1 + 0x400) = param_1;
  return;
}



// FUNCTION 142cf2c50 FUN_142cf2c50 body=593 status=ok
// SIG undefined FUN_142cf2c50(void)

void FUN_142cf2c50(longlong *param_1,char param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  longlong *plStack_20;
  
  plVar8 = param_1 + 0x80;
  if ((char)param_1[0x83] != '\x03') {
    *(undefined1 *)(param_1 + 0x83) = 3;
    if ((longlong *)*plVar8 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar8 + 0x260))();
    }
  }
  *(char *)((longlong)param_1 + 0x419) = param_3;
  local_48 = 0;
  uStack_40 = 0;
  FUN_142cff980(plVar8,&local_48);
  local_38 = 0;
  uStack_30 = 0;
  FUN_142cfee00(plVar8,&local_38);
  (**(code **)(*param_1 + 0x480))(param_1);
  lVar7 = param_1[0x81];
  if ((lVar7 != 0) && ((char)param_1[0x83] == '\x03')) {
    iVar4 = -1;
    if (param_3 == '\0') {
      iVar4 = (**(code **)(*param_1 + 0x4c0))(param_1,lVar7);
      lVar7 = param_1[0x81];
      *(int *)((longlong)param_1 + 0x41c) = iVar4;
    }
    if (((param_2 == '\0') && (-1 < iVar4)) && (iVar4 < (int)param_1[0xa7])) {
      FUN_142cfab40(param_1,(longlong)iVar4 * 0x68 + param_1[0xa6],lVar7);
      lVar7 = param_1[0x81];
    }
    if ((lVar7 != 0) && ((char)param_1[0x83] == '\x03')) {
      FUN_142cef130(plVar8,&local_58);
      if ((local_58 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*local_58 + 0x38))(), plVar8 = plStack_50, cVar3 != '\0')) {
        if (param_1[0x8d] != 0) {
          lVar5 = FUN_142e20fc0();
          for (lVar7 = param_1[0x8d]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
            if (lVar7 == lVar5) {
              if (param_1[0x8d] != 0) {
                plVar8 = (longlong *)param_1[0x81];
                uVar6 = FUN_142e27720();
                lVar7 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar6);
                if (lVar7 != 0) {
                  FUN_142c84570(lVar7,param_1[0x8d]);
                }
              }
              break;
            }
          }
        }
        FUN_142ceb5d0(param_1);
        plVar8 = plStack_50;
      }
      else {
        lVar7 = param_1[0xa6];
        local_28 = local_58;
        plStack_20 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
          UNLOCK();
        }
        FUN_142cf7e00(param_1,&local_28,1,(longlong)iVar4 * 0x68 + lVar7);
      }
      plVar2 = plStack_50;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar8 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142cf2eb0 FUN_142cf2eb0 body=224 status=ok
// SIG undefined FUN_142cf2eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cf2eb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b31870) {
    _Init_thread_header(&DAT_146b31870);
    if (DAT_146b31870 == -1) {
      _DAT_146b31864 = 0x40800000;
      _DAT_146b31868 = 0x3f000000;
      _DAT_146b31860 = 3;
      _Init_thread_footer(&DAT_146b31870);
    }
  }
  UWorld::SweepMultiByChannel
            (param_3,param_1 + 0x100,param_1 + 200,param_1 + 0xd4,&DAT_1464aa810,2,&DAT_146b31860,
             param_1 + 8,param_1 + 0x80);
  return;
}



// FUNCTION 142cf2f90 FUN_142cf2f90 body=593 status=ok
// SIG undefined FUN_142cf2f90(void)

void FUN_142cf2f90(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined2 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28 [2];
  
  lVar8 = 0;
  if (param_1[0xaa] != 0) {
    lVar6 = param_1[0x24];
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0();
    }
    if (*(longlong *)(lVar6 + 400) == 0) {
      uVar7 = *(undefined8 *)(lVar6 + 0x3f8);
    }
    else {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
    }
    FUN_142880530(uVar7,param_1 + 0xaa);
    param_1[0xaa] = 0;
  }
  if (((param_1[0xab] != 0) && (plVar3 = param_1 + 0xac, *plVar3 != 0)) && (param_1[0xad] != 0)) {
    piVar1 = (int *)(param_1[0xad] + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      local_40 = (longlong *)param_1[0xad];
      if (local_40 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)local_40[1];
        bVar9 = iVar5 == 0;
        if (bVar9) {
          *(int *)(local_40 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar5 == (int)local_40[1];
          if (bVar9) {
            *(int *)(local_40 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar9) {
            lVar8 = *plVar3;
            goto LAB_142cf3077;
          }
          LOCK();
          iVar5 = (int)local_40[1];
          bVar9 = iVar5 == 0;
          if (bVar9) {
            *(int *)(local_40 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
        lVar8 = 0;
        local_40 = (longlong *)0x0;
      }
LAB_142cf3077:
      TBaseMulticastDelegate<void>::Remove(lVar8 + 0x58,param_1[0xab]);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_40 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      param_1[0xab] = 0;
      if (plVar3 != local_28) {
        *plVar3 = 0;
        plVar3 = (longlong *)param_1[0xad];
        param_1[0xad] = 0;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  if (param_1[0x81] != 0) {
    FUN_142d01170(param_1);
    lVar8 = param_1[0x81];
    if (lVar8 != 0) {
      lVar6 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if ((bVar9) &&
         (uVar4 = (**(code **)(*param_1 + 0x4d0))(param_1), *(char *)(lVar8 + 0x128) == '\x03')) {
        *(longlong **)(lVar8 + 0xae8) = param_1;
        *(undefined1 *)(lVar8 + 0xaf0) = 2;
        *(undefined2 *)(lVar8 + 0xaf2) = uVar4;
        FUN_142cf6b00(lVar8);
      }
    }
  }
  local_38 = param_1[0x81];
  local_30 = param_1[0x82];
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x78,&local_38);
                    /* WARNING: Could not recover jumptable at 0x000142cf31da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x460))(param_1);
  return;
}



// FUNCTION 142cf31f0 FUN_142cf31f0 body=259 status=ok
// SIG undefined FUN_142cf31f0(void)

void FUN_142cf31f0(longlong param_1)

{
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0xc) = local_94;
  *(undefined4 *)(param_1 + 0x18) = local_88;
  *(undefined8 *)(param_1 + 0x28) = local_78;
  *(undefined8 *)(param_1 + 0x34) = local_6c;
  *(undefined8 *)(param_1 + 0x40) = local_60;
  *(undefined8 *)(param_1 + 0x4c) = local_54;
  *(undefined8 *)(param_1 + 0x58) = local_48;
  *(undefined8 *)(param_1 + 0x1c) = local_84;
  *(undefined4 *)(param_1 + 0x24) = local_7c;
  *(undefined4 *)(param_1 + 0x30) = local_70;
  *(undefined4 *)(param_1 + 0x3c) = local_64;
  *(undefined4 *)(param_1 + 0x48) = local_58;
  *(undefined4 *)(param_1 + 0x54) = local_4c;
  *(undefined4 *)(param_1 + 0x60) = local_40;
  *(undefined4 *)(param_1 + 0x68) = local_38;
  *(undefined4 *)(param_1 + 100) = local_3c;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6c) = local_34;
  *(undefined4 *)(param_1 + 0x70) = local_30;
  *(undefined4 *)(param_1 + 0x74) = local_2c;
  *(undefined4 *)(param_1 + 0x78) = local_28;
  *(undefined4 *)(param_1 + 0x7c) = local_24;
  *(undefined4 *)(param_1 + 0x80) = local_20;
  *(undefined8 *)(param_1 + 0x88) = local_18;
  *(undefined8 *)(param_1 + 0x90) = local_10;
  return;
}



// FUNCTION 142cf3330 FUN_142cf3330 body=116 status=ok
// SIG undefined FUN_142cf3330(void)

undefined8 FUN_142cf3330(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0xfd8) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xfd8) + 0xaf8), plVar1 != (longlong *)0x0)) {
    lVar4 = FUN_142e6b880();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar3 = (**(code **)(*plVar1 + 0x458))(plVar1);
      if (cVar3 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142cf33b0 FUN_142cf33b0 body=48 status=ok
// SIG undefined FUN_142cf33b0(void)

bool FUN_142cf33b0(longlong param_1)

{
  char cVar1;
  
  if (1 < (byte)(*(char *)(param_1 + 0x469) - 1U)) {
    cVar1 = FUN_142c73400(param_1,1,1);
    return cVar1 == '\0';
  }
  return false;
}



// FUNCTION 142cf33f0 FUN_142cf33f0 body=195 status=ok
// SIG undefined FUN_142cf33f0(void)

undefined8 FUN_142cf33f0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  cVar3 = FUN_142dee6e0();
  if ((cVar3 == '\0') ||
     (((uVar1 = *(uint *)(param_1 + 0x544), (uVar1 & 8) == 0 && (param_2 != 0)) &&
      ((*(uint *)(param_2 + 0x4cc) >> 1 & 1) != 0)))) {
    return 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x408);
  if (plVar2 != (longlong *)0x0) {
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if (((uVar1 & 2) == 0) && (cVar3 = (**(code **)(*plVar2 + 0x780))(plVar2), cVar3 != '\0')) {
      return 0;
    }
    if (((*(byte *)(param_1 + 0x544) & 4) == 0) && (param_2 != 0)) {
      uVar5 = UCircularThrobber::GetPrivateStaticClass();
      lVar6 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar5);
      if ((lVar6 != 0) &&
         (iVar4 = FUN_142dec940(lVar6,*(undefined8 *)(param_2 + 0x488)), iVar4 == 0)) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 142cf34c0 FUN_142cf34c0 body=87 status=ok
// SIG undefined FUN_142cf34c0(void)

void FUN_142cf34c0(undefined8 param_1,undefined4 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 local_58 [80];
  
  uVar1 = FUN_142ced5e0(param_1,local_58);
  FUN_142cf3520(param_1,param_2,param_3,uVar1,0);
  return;
}



// FUNCTION 142cf3520 FUN_142cf3520 body=611 status=ok
// SIG undefined FUN_142cf3520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_142cf3520(longlong param_1,float param_2,char param_3,undefined1 *param_4,float param_5)

{
  bool bVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a0;
  float local_98;
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  char local_58;
  
  if (*(longlong *)(param_1 + 0x220) == 0) {
    bVar1 = false;
  }
  else {
    local_90[0] = *param_4;
    local_7c = *(undefined8 *)(param_4 + 0x14);
    local_8c = *(undefined4 *)(param_4 + 4);
    local_88 = *(undefined4 *)(param_4 + 8);
    local_84 = *(undefined4 *)(param_4 + 0xc);
    local_80 = *(undefined4 *)(param_4 + 0x10);
    local_74 = *(undefined4 *)(param_4 + 0x1c);
    local_70 = *(undefined8 *)(param_4 + 0x20);
    local_68 = *(undefined4 *)(param_4 + 0x28);
    local_64 = *(undefined8 *)(param_4 + 0x2c);
    local_5c = *(undefined4 *)(param_4 + 0x34);
    local_b0 = DAT_1468b5da8;
    local_a0 = DAT_1468b5da0;
    local_58 = param_3;
    if (*(longlong *)(param_1 + 0xfd8) != 0) {
      lVar2 = FUN_142cc2d20(*(longlong *)(param_1 + 0xfd8) + 0xbe0,&local_b8,local_90,param_1);
      local_b0 = *(float *)(lVar2 + 0x14);
      local_a0 = *(undefined8 *)(lVar2 + 0xc);
    }
    local_b8._4_4_ = (float)((ulonglong)local_a0 >> 0x20);
    if (local_58 == '\0') {
      fVar7 = (float)DAT_146b315f0;
      fVar8 = DAT_146b315f0._4_4_;
      fVar9 = DAT_146b315f0._8_4_;
      auVar3 = divps(ZEXT416((uint)(local_b8._4_4_ - param_5)) << 0x20,_DAT_146b315f0);
      fVar4 = 0.0 - (float)(int)auVar3._0_4_ * fVar7;
      fVar5 = (local_b8._4_4_ - param_5) - (float)(int)auVar3._4_4_ * fVar8;
      fVar6 = 0.0 - (float)(int)auVar3._8_4_ * fVar9;
      fVar4 = (float)(((uint)(fVar4 + fVar7) ^ (uint)fVar4) & -(uint)(0.0 <= fVar4) ^
                     (uint)(fVar4 + fVar7));
      fVar5 = (float)(((uint)(fVar5 + fVar8) ^ (uint)fVar5) & -(uint)(0.0 <= fVar5) ^
                     (uint)(fVar5 + fVar8));
      fVar6 = (float)(((uint)(fVar6 + fVar9) ^ (uint)fVar6) & -(uint)(0.0 <= fVar6) ^
                     (uint)(fVar6 + fVar9));
      fVar7 = (float)(((uint)(fVar4 - fVar7) ^ (uint)fVar4) & -(uint)(_DAT_146b315e0 < fVar4) ^
                     (uint)fVar4);
      fVar8 = (float)(((uint)(fVar5 - fVar8) ^ (uint)fVar5) & -(uint)(fRam0000000146b315e4 < fVar5)
                     ^ (uint)fVar5);
      fVar9 = (float)(((uint)(fVar6 - fVar9) ^ (uint)fVar6) & -(uint)(fRam0000000146b315e8 < fVar6)
                     ^ (uint)fVar6);
    }
    else {
      local_b8._0_4_ = (float)local_a0;
      fVar7 = (float)local_b8;
      fVar8 = local_b8._4_4_;
      fVar9 = local_b0;
    }
    local_b8 = local_a0;
    local_98 = local_b0;
    FUN_142ced280(param_1,&local_b8);
    fVar4 = (float)DAT_146b315f0;
    fVar5 = DAT_146b315f0._4_4_;
    auVar3._4_4_ = local_b8._4_4_ - fVar8;
    auVar3._0_4_ = (float)local_b8 - fVar7;
    auVar3._8_4_ = local_b0 - fVar9;
    auVar3._12_4_ = 0;
    auVar3 = divps(auVar3,_DAT_146b315f0);
    fVar7 = ((float)local_b8 - fVar7) - (float)(int)auVar3._0_4_ * fVar4;
    fVar8 = (local_b8._4_4_ - fVar8) - (float)(int)auVar3._4_4_ * fVar5;
    fVar7 = (float)(((uint)(fVar7 + fVar4) ^ (uint)fVar7) & -(uint)(0.0 <= fVar7) ^
                   (uint)(fVar7 + fVar4));
    fVar8 = (float)(((uint)(fVar8 + fVar5) ^ (uint)fVar8) & -(uint)(0.0 <= fVar8) ^
                   (uint)(fVar8 + fVar5));
    fVar7 = (float)(((uint)(fVar7 - fVar4) ^ (uint)fVar7) & -(uint)(_DAT_146b315e0 < fVar7) ^
                   (uint)fVar7);
    fVar8 = (float)(((uint)(fVar8 - fVar5) ^ (uint)fVar8) & -(uint)(fRam0000000146b315e4 < fVar8) ^
                   (uint)fVar8);
    bVar1 = fVar8 * fVar8 + fVar7 * fVar7 <= param_2 * param_2;
  }
  return bVar1;
}



// FUNCTION 142cf3790 FUN_142cf3790 body=100 status=ok
// SIG undefined FUN_142cf3790(void)

undefined8 FUN_142cf3790(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong **)(param_1 + 0xfd8) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xfd8) + 0x950))(), cVar1 != '\0')) {
    return 0;
  }
  if (((DAT_146531c18 == '\0') && (*(longlong **)(param_1 + 0xfd8) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xfd8) + 0x778))(), cVar1 != '\0')) {
    return 0;
  }
  cVar1 = FUN_1407c3030(param_1 + 0x14f0);
  if (cVar1 != '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 142cf3800 FUN_142cf3800 body=116 status=ok
// SIG undefined FUN_142cf3800(void)

undefined8 FUN_142cf3800(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1407c3030(param_1 + 0x1588);
  if (cVar1 == '\0') {
    if ((*(longlong **)(param_1 + 0xfd8) != (longlong *)0x0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xfd8) + 0x950))(), cVar1 != '\0')) {
      return 0;
    }
    if (((DAT_146531c18 == '\0') && (*(longlong **)(param_1 + 0xfd8) != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xfd8) + 0x778))(), cVar1 != '\0')) {
      return 0;
    }
    cVar1 = FUN_1407c3030(param_1 + 0x14f0);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cf3880 FUN_142cf3880 body=26 status=ok
// SIG undefined FUN_142cf3880(void)

bool FUN_142cf3880(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1407c3030(param_1 + 0x16b8);
  return cVar1 == '\0';
}



// FUNCTION 142cf38a0 FUN_142cf38a0 body=190 status=ok
// SIG undefined FUN_142cf38a0(void)

undefined8 FUN_142cf38a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_2;
  if ((((*(byte *)(param_1 + 0x330) & 1) == 0) ||
      (((*(float *)(lVar1 + 0x354) == *(float *)(param_1 + 0x354) &&
        (*(float *)(lVar1 + 0x358) == *(float *)(param_1 + 0x358))) &&
       (*(float *)(lVar1 + 0x35c) == *(float *)(param_1 + 0x35c))))) &&
     (((*(byte *)(lVar1 + 0x330) ^ *(byte *)(param_1 + 0x330)) & 4) == 0)) {
    cVar2 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                      (param_1 + 0x334,lVar1 + 0x334);
    if (cVar2 == '\0') {
      cVar2 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                        (param_1 + 0x33c,lVar1 + 0x33c);
      if (cVar2 == '\0') {
        uVar3 = FUN_142340ff0(param_1,param_2);
        return uVar3;
      }
    }
  }
  return 1;
}



// FUNCTION 142cf3960 FUN_142cf3960 body=24 status=ok
// SIG undefined FUN_142cf3960(void)

undefined1 FUN_142cf3960(longlong param_1)

{
  if ((*(char *)(param_1 + 0x248) == '\x06') && (*(char *)(param_1 + 0x249) == '\x04')) {
    return 1;
  }
  return 0;
}



// FUNCTION 142cf3980 FUN_142cf3980 body=43 status=ok
// SIG undefined FUN_142cf3980(void)

undefined8 FUN_142cf3980(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0xfd8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xfd8) + 0x778))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cf39b0 FUN_142cf39b0 body=25 status=ok
// SIG undefined FUN_142cf39b0(void)

undefined8 FUN_142cf39b0(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x418) != '\0') &&
     ((param_2 != '\0' || (*(char *)(param_1 + 0x418) != '\x03')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 142cf39d0 FUN_142cf39d0 body=43 status=ok
// SIG undefined FUN_142cf39d0(void)

undefined8 FUN_142cf39d0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0xfd8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xfd8) + 0x780))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cf3a00 FUN_142cf3a00 body=27 status=ok
// SIG undefined FUN_142cf3a00(void)

longlong FUN_142cf3a00(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xfd8);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x128) == '\x01')) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 142cf3a20 FUN_142cf3a20 body=167 status=ok
// SIG undefined FUN_142cf3a20(void)

undefined8 FUN_142cf3a20(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_1407c3030(param_1 + 0x129);
  if ((cVar1 == '\0') && (cVar1 = FUN_142ce46b0(param_1), cVar1 != '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x560))(param_1);
    if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_1 + 0xbf8))(param_1), cVar1 == '\0')) {
      return 0;
    }
    if ((((ABS(*(float *)((longlong)param_1 + 0x18c)) <= 0.0001) &&
         (ABS(*(float *)(param_1 + 0x32)) <= 0.0001)) &&
        (ABS(*(float *)((longlong)param_1 + 0x194)) <= 0.0001)) &&
       (cVar1 = FUN_142cf1310(param_1,0), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cf3ad0 FUN_142cf3ad0 body=837 status=ok
// SIG undefined FUN_142cf3ad0(void)

bool FUN_142cf3ad0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b31890) && (_Init_thread_header(&DAT_146b31890), DAT_146b31890 == -1))
  {
    FName::FName(&DAT_146b31888,L"NoMantle",1);
    _Init_thread_footer(&DAT_146b31890);
  }
  bVar2 = true;
  if (param_2 == (longlong *)0x0) {
    return true;
  }
  plVar12 = (longlong *)0x0;
  do {
    if (!bVar2) {
      return bVar2;
    }
    plVar13 = plVar12;
    if (param_2 != (longlong *)0x0) {
      plVar13 = (longlong *)param_2[0x23];
    }
    if (plVar13 == (longlong *)0x0) {
LAB_142cf3cba:
      cVar4 = (**(code **)(*param_2 + 0x400))(param_2,0);
      if (cVar4 == '\0') {
        cVar4 = UActorComponent::ComponentHasTag(param_2,DAT_146b31888);
        if (cVar4 == '\0') {
          if (*(int *)(param_1 + 0x50) != 0) {
            puVar11 = *(undefined8 **)(param_1 + 0x48);
            bVar2 = false;
            puVar1 = puVar11 + *(int *)(param_1 + 0x50);
            if (puVar11 != puVar1) {
LAB_142cf3d13:
              plVar13 = (longlong *)*puVar11;
              if (plVar13 != (longlong *)0x0) {
                plVar6 = (longlong *)FUN_1429f11d0();
                plVar7 = plVar13;
                do {
                  if (plVar7 == plVar6) {
                    plVar6 = (longlong *)FUN_1429f11d0();
                    plVar7 = plVar13;
                    goto LAB_142cf3d40;
                  }
                  plVar7 = (longlong *)plVar7[6];
                } while (plVar7 != (longlong *)0x0);
              }
              goto LAB_142cf3d7f;
            }
          }
        }
        else {
LAB_142cf3ced:
          bVar2 = false;
        }
      }
      else {
        bVar2 = false;
      }
    }
    else {
      cVar4 = FUN_142221b10(plVar13,DAT_146b31888);
      if (cVar4 == '\0') {
        if (*(int *)(param_1 + 0x30) == 0) {
          if (*(int *)(param_1 + 0x40) != 0) {
            plVar6 = *(longlong **)(param_1 + 0x38);
            plVar7 = plVar6 + *(int *)(param_1 + 0x40);
            if (plVar6 != plVar7) {
LAB_142cf3c30:
              plVar10 = (longlong *)*plVar6;
              if (plVar10 != (longlong *)0x0) {
                plVar5 = (longlong *)FUN_1428dfc70();
                plVar8 = plVar10;
                do {
                  if (plVar8 == plVar5) {
                    plVar5 = (longlong *)FUN_1428dfc70();
                    plVar8 = plVar10;
                    goto LAB_142cf3c58;
                  }
                  plVar8 = (longlong *)plVar8[6];
                } while (plVar8 != (longlong *)0x0);
              }
              goto LAB_142cf3c97;
            }
          }
LAB_142cf3ca0:
          cVar4 = (**(code **)(*plVar13 + 0x598))(plVar13,0);
          if (cVar4 != '\0') goto LAB_142cf3cba;
          bVar2 = false;
        }
        else {
          plVar6 = *(longlong **)(param_1 + 0x28);
          bVar2 = false;
          plVar7 = plVar6 + *(int *)(param_1 + 0x30);
          if (plVar6 != plVar7) {
LAB_142cf3b91:
            plVar10 = (longlong *)*plVar6;
            if (plVar10 != (longlong *)0x0) {
              plVar5 = (longlong *)FUN_1428dfc70();
              plVar8 = plVar10;
              do {
                if (plVar8 == plVar5) {
                  plVar5 = (longlong *)FUN_1428dfc70();
                  plVar8 = plVar10;
                  goto LAB_142cf3bc0;
                }
                plVar8 = (longlong *)plVar8[6];
              } while (plVar8 != (longlong *)0x0);
            }
            goto LAB_142cf3bff;
          }
        }
      }
      else {
        bVar2 = false;
      }
    }
LAB_142cf3d8d:
    param_2 = (longlong *)param_2[0x32];
    if (param_2 == (longlong *)0x0) {
      return bVar2;
    }
  } while( true );
  while (plVar8 = (longlong *)plVar8[6], plVar9 = plVar12, plVar8 != (longlong *)0x0) {
LAB_142cf3c58:
    plVar9 = plVar10;
    if (plVar8 == plVar5) break;
  }
  if ((*(int *)(plVar13[2] + 0x90) < (int)plVar9[0x12]) ||
     (*(longlong **)(*(longlong *)(plVar13[2] + 0x88) + (longlong)(int)plVar9[0x12] * 8) !=
      plVar9 + 0x11)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) goto LAB_142cf3ced;
LAB_142cf3c97:
  plVar6 = plVar6 + 1;
  if (plVar6 == plVar7) goto LAB_142cf3ca0;
  goto LAB_142cf3c30;
  while (plVar8 = (longlong *)plVar8[6], plVar9 = plVar12, plVar8 != (longlong *)0x0) {
LAB_142cf3bc0:
    plVar9 = plVar10;
    if (plVar8 == plVar5) break;
  }
  if ((*(int *)(plVar13[2] + 0x90) < (int)plVar9[0x12]) ||
     (*(longlong **)(*(longlong *)(plVar13[2] + 0x88) + (longlong)(int)plVar9[0x12] * 8) !=
      plVar9 + 0x11)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    bVar2 = true;
    goto LAB_142cf3ca0;
  }
LAB_142cf3bff:
  plVar6 = plVar6 + 1;
  if (plVar6 == plVar7) goto LAB_142cf3d8d;
  goto LAB_142cf3b91;
  while (plVar7 = (longlong *)plVar7[6], plVar10 = plVar12, plVar7 != (longlong *)0x0) {
LAB_142cf3d40:
    plVar10 = plVar13;
    if (plVar7 == plVar6) break;
  }
  if ((*(int *)(param_2[2] + 0x90) < (int)plVar10[0x12]) ||
     (*(longlong **)(*(longlong *)(param_2[2] + 0x88) + (longlong)(int)plVar10[0x12] * 8) !=
      plVar10 + 0x11)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    bVar2 = true;
    goto LAB_142cf3d8d;
  }
LAB_142cf3d7f:
  puVar11 = puVar11 + 1;
  if (puVar11 == puVar1) goto LAB_142cf3d8d;
  goto LAB_142cf3d13;
}



// FUNCTION 142cf3e20 FUN_142cf3e20 body=170 status=ok
// SIG undefined FUN_142cf3e20(void)

bool FUN_142cf3e20(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  float fVar4;
  float fVar5;
  
  if (*(float *)(param_1 + 0x40) <= 0.0001 && *(float *)(param_1 + 0x40) != 0.0001) {
    return false;
  }
  fVar5 = 0.7;
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x74);
  if (lVar2 != 0) {
    pcVar3 = (char *)FUN_14270dd10(lVar2);
    cVar1 = *pcVar3;
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        FWalkableSlopeOverride::CheckCachedData(pcVar3);
        fVar4 = *(float *)(pcVar3 + 0xc);
        if (0.7 <= fVar4) goto LAB_142cf3eb8;
      }
      else {
        if (cVar1 != '\x02') {
          if (cVar1 == '\x03') {
            fVar5 = 2.0;
          }
          goto LAB_142cf3eb8;
        }
        FWalkableSlopeOverride::CheckCachedData(pcVar3);
        fVar4 = *(float *)(pcVar3 + 0xc);
        if (fVar4 <= 0.7) goto LAB_142cf3eb8;
      }
      fVar5 = fVar4;
    }
  }
LAB_142cf3eb8:
  return fVar5 < *(float *)(param_1 + 0x40) || fVar5 == *(float *)(param_1 + 0x40);
}



// FUNCTION 142cf3ed0 FUN_142cf3ed0 body=73 status=ok
// SIG undefined FUN_142cf3ed0(void)

void FUN_142cf3ed0(longlong *param_1)

{
  char cVar1;
  
  FUN_142341b10();
  if (((*(float *)((longlong)param_1 + 0x4ec) != 0.0) || (*(float *)(param_1 + 0x9e) != 0.0)) ||
     (*(float *)((longlong)param_1 + 0x4f4) != 0.0)) {
    cVar1 = (**(code **)(*param_1 + 0x5c0))(param_1);
    if (cVar1 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0xea1) = 1;
    }
  }
  return;
}



// FUNCTION 142cf3f20 FUN_142cf3f20 body=15 status=ok
// SIG undefined FUN_142cf3f20(void)

void FUN_142cf3f20(longlong *param_1,char param_2)

{
  if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142cf3f27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x7a8))();
    return;
  }
  return;
}



// FUNCTION 142cf3f30 FUN_142cf3f30 body=291 status=ok
// SIG undefined FUN_142cf3f30(void)

void FUN_142cf3f30(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uStack_c;
  
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0xfc8);
    plVar1 = (longlong *)(param_1 + 0xec0);
    plVar6 = *(longlong **)(param_1 + 0xfc0);
    if (*(longlong **)(param_1 + 0xfc0) == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    for (plVar5 = plVar6; plVar5 != plVar6 + (longlong)iVar2 * 2; plVar5 = plVar5 + 2) {
      if (*plVar5 == param_2) {
        iVar4 = (int)((longlong)plVar5 - (longlong)plVar6 >> 4);
        goto LAB_142cf3fa3;
      }
    }
    iVar4 = -1;
LAB_142cf3fa3:
    if (iVar4 == -1) {
      *(int *)(param_1 + 0xfc8) = iVar2 + 1;
      if (*(int *)(param_1 + 0xfcc) < iVar2 + 1) {
        TArray<FNiagaraRendererVariableInfo,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::
        ResizeGrow(plVar1,iVar2);
      }
      plVar6 = *(longlong **)(param_1 + 0xfc0);
      if (*(longlong **)(param_1 + 0xfc0) == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      plVar6[(longlong)iVar2 * 2] = param_2;
      (plVar6 + (longlong)iVar2 * 2)[1] = CONCAT44(uStack_c,param_3);
    }
    else {
      *(undefined4 *)(plVar6 + (longlong)iVar4 * 2 + 1) = param_3;
    }
    if (*(longlong *)(param_1 + 0xfe8) != 0) {
      uVar3 = (undefined1)*(undefined4 *)(param_1 + 0xfd0);
      if (0 < *(int *)(param_1 + 0xfc8)) {
        plVar6 = *(longlong **)(param_1 + 0xfc0);
        if (*(longlong **)(param_1 + 0xfc0) == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar3 = (undefined1)(int)plVar6[(longlong)*(int *)(param_1 + 0xfc8) * 2 + -1];
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0xfe8) + 0x30) = uVar3;
    }
  }
  return;
}



// FUNCTION 142cf4060 FUN_142cf4060 body=56 status=ok
// SIG undefined FUN_142cf4060(void)

void FUN_142cf4060(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if (((iVar1 == 3) && (*(char *)(param_1 + 0x510) != '\0')) &&
     (*(char *)(param_1 + 0x418) == '\x01')) {
    FUN_142ceb590(param_1);
    return;
  }
  return;
}



// FUNCTION 142cf40a0 FUN_142cf40a0 body=70 status=ok
// SIG undefined FUN_142cf40a0(void)

void FUN_142cf40a0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  
  FUN_142342c30();
  cVar1 = (**(code **)(*param_1 + 0x5c0))(param_1);
  if (cVar1 != '\0') {
    FUN_142cb7010(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 142cf40f0 FUN_142cf40f0 body=714 status=ok
// SIG undefined FUN_142cf40f0(void)

byte FUN_142cf40f0(longlong param_1,char *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char local_res18 [16];
  undefined8 local_28 [2];
  
  bVar2 = FUN_142c79030();
  param_3 = (longlong *)*param_3;
  bVar2 = bVar2 & 1;
  if (param_3 == (longlong *)0x0) {
    if (param_4 != (longlong *)0x0) {
      if (*param_2 == '\0') {
        plVar3 = (longlong *)param_4[1];
        if ((char *)plVar3[1] < (char *)*plVar3 + 1) {
          (**(code **)(*param_4 + 0x50))(param_4,local_res18,1);
        }
        else {
          local_res18[0] = *(char *)*plVar3;
          *plVar3 = *plVar3 + 1;
        }
        *(char *)(param_1 + 0x468) = local_res18[0];
        plVar3 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar3 != (longlong *)0x0) {
          plVar3[1] = param_1;
          *plVar3 = (longlong)&DAT_143f3ed00;
          plVar3[2] = (longlong)FUN_142cf6a90;
          lVar4 = FDelegateHandle::GenerateNewID();
          plVar3[4] = lVar4;
          *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
        }
        iVar1 = *(int *)(param_2 + 0x38);
        *(int *)(param_2 + 0x38) = iVar1 + 1;
        if (*(int *)(param_2 + 0x3c) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 0x30,iVar1);
        }
        puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_2 + 0x30));
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 0;
        if (local_28 != puVar5) {
          if (plVar3 == (longlong *)0x0) {
            return bVar2;
          }
          (**(code **)(*plVar3 + 0x30))(plVar3);
        }
        if (plVar3 == (longlong *)0x0) {
          return bVar2;
        }
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
      }
      else {
        if (*param_2 != '\x01') {
          return bVar2;
        }
        if (param_2[1] != '\x16') {
          return bVar2;
        }
        plVar3 = (longlong *)param_4[1];
        if ((char *)plVar3[1] < (char *)*plVar3 + 1) {
          (**(code **)(*param_4 + 0x50))(param_4,local_res18,1);
        }
        else {
          local_res18[0] = *(char *)*plVar3;
          *plVar3 = *plVar3 + 1;
        }
        *(char *)(param_1 + 0x468) = local_res18[0];
        plVar3 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar3 != (longlong *)0x0) {
          plVar3[1] = param_1;
          *plVar3 = (longlong)&DAT_143f3ed00;
          plVar3[2] = (longlong)FUN_142cf6a90;
          lVar4 = FDelegateHandle::GenerateNewID();
          plVar3[4] = lVar4;
          *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
        }
        iVar1 = *(int *)(param_2 + 0x38);
        *(int *)(param_2 + 0x38) = iVar1 + 1;
        if (*(int *)(param_2 + 0x3c) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 0x30,iVar1);
        }
        puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_2 + 0x30));
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 0;
        if (local_28 != puVar5) {
          if (plVar3 == (longlong *)0x0) {
            return bVar2;
          }
          (**(code **)(*plVar3 + 0x30))(plVar3);
        }
        if (plVar3 == (longlong *)0x0) {
          return bVar2;
        }
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
      }
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
  }
  else {
    if (*param_2 == '\0') {
      local_res18[0] = *(char *)(param_1 + 0x468);
    }
    else {
      if (*param_2 != '\x01') {
        return bVar2;
      }
      if (*(longlong *)(param_2 + 0x28) == 0) {
        return bVar2;
      }
      local_res18[0] = *(char *)(param_1 + 0x468);
      if (*(char *)(*(longlong *)(param_2 + 0x28) + 0xa1) == local_res18[0]) {
        return bVar2;
      }
      FUN_142c881e0(param_3,0x16,param_2);
    }
    plVar3 = (longlong *)param_3[1];
    if ((ulonglong)plVar3[1] < *plVar3 + 1U) {
      (**(code **)(*param_3 + 0x50))(param_3,local_res18,1);
    }
    else {
      *plVar3 = *plVar3 + 1;
    }
  }
  return bVar2;
}



// FUNCTION 142cf43c0 FUN_142cf43c0 body=184 status=ok
// SIG undefined FUN_142cf43c0(void)

undefined8 FUN_142cf43c0(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  
  (**(code **)(*param_2 + 0x30))(param_2,param_1);
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 8),1);
  }
  else {
    *(undefined1 *)(param_1 + 8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar2 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 10,2);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 10,2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 10) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  *param_4 = 1;
  return 1;
}



// FUNCTION 142cf4480 FUN_142cf4480 body=843 status=ok
// SIG undefined FUN_142cf4480(void)

longlong *
FUN_142cf4480(longlong *param_1,longlong *param_2,longlong *param_3,float *param_4,float param_5)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_88;
  float local_78;
  
  local_88 = *param_3;
  fVar12 = *(float *)(param_3 + 1);
  if (((param_1[0x2ef] == 0) || ((*(byte *)((longlong)param_1 + 0x18cc) & 2) != 0)) ||
     (param_1[0x2f] == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    cVar3 = FUN_142cc9790(param_1 + 0x2ee);
    if (cVar3 != '\0') {
      local_88 = param_1[0x312];
      fVar12 = *(float *)(param_1 + 0x313);
      goto LAB_142cf47a8;
    }
  }
  fVar7 = *param_4;
  if (((fVar7 != 0.0) || (param_4[1] != 0.0)) || (param_4[2] != 0.0)) {
    fVar6 = param_4[1];
    fVar1 = param_4[2];
    fVar11 = fVar7 * param_5 + (float)local_88;
    fVar12 = fVar1 * param_5 + fVar12;
    local_88._4_4_ = (float)((ulonglong)local_88 >> 0x20);
    local_88._4_4_ = fVar6 * param_5 + local_88._4_4_;
    local_88 = CONCAT44(local_88._4_4_,fVar11);
    fVar5 = fVar6 * fVar6 + fVar7 * fVar7 + fVar1 * fVar1;
    if (fVar5 == 1.0) {
      local_78 = (float)*(undefined8 *)param_4;
      fVar10 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
      fVar8 = param_4[2];
    }
    else {
      local_78 = DAT_1468b5d90;
      fVar10 = DAT_1468b5d94;
      fVar8 = DAT_1468b5d98;
      if (1e-08 <= fVar5) {
        auVar9 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
        fVar8 = auVar9._0_4_;
        fVar8 = fVar8 + fVar8 * (0.5 - fVar5 * 0.5 * fVar8 * fVar8);
        fVar8 = fVar8 + fVar8 * (0.5 - fVar5 * 0.5 * fVar8 * fVar8);
        local_78 = fVar7 * fVar8;
        fVar10 = fVar6 * fVar8;
        fVar8 = fVar1 * fVar8;
      }
    }
    lVar4 = (**(code **)(*param_1 + 0x440))(param_1);
    fVar7 = ABS(*(float *)(lVar4 + 0x490));
    if ((bVar2) && (param_1[0x2ef] != 0)) {
      cVar3 = *(char *)(param_1[0x2ef] + 0x4c0);
      if (cVar3 == '\0') {
        fVar7 = *(float *)(param_1 + 0x30e);
      }
      else if (cVar3 == '\x01') {
        fVar7 = fVar7 * *(float *)(param_1 + 0x30e);
      }
    }
    if (fVar7 < fVar11 * local_78 + local_88._4_4_ * fVar10 + fVar12 * fVar8) {
      fVar6 = (fVar11 - DAT_1468b5d90) * local_78 + (local_88._4_4_ - DAT_1468b5d94) * fVar10 +
              (fVar12 - DAT_1468b5d98) * fVar8;
      fVar12 = (fVar12 - fVar8 * fVar6) + fVar8 * fVar7;
      local_88 = CONCAT44((local_88._4_4_ - fVar10 * fVar6) + fVar10 * fVar7,
                          (fVar11 - local_78 * fVar6) + local_78 * fVar7);
    }
  }
LAB_142cf47a8:
  *param_2 = local_88;
  *(float *)(param_2 + 1) = fVar12;
  return param_2;
}



// FUNCTION 142cf47d0 NormalizeAxis body=95 status=ok
// SIG undefined NormalizeAxis(void)

float UKismetMathLibrary::NormalizeAxis(float param_1)

{
  float fVar1;
  
  fVar1 = (float)(int)(param_1 * 0.15915494) * 6.2831855;
  if (ABS(param_1) < ABS(fVar1)) {
    fVar1 = param_1;
  }
  param_1 = param_1 - fVar1;
  if (param_1 < 0.0) {
    param_1 = param_1 + 6.2831855;
  }
  if (3.1415927 < param_1) {
    param_1 = param_1 - 6.2831855;
  }
  return param_1;
}



// FUNCTION 142cf4830 FUN_142cf4830 body=217 status=ok
// SIG undefined FUN_142cf4830(void)

void FUN_142cf4830(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar3 = (**(code **)(*param_1 + 0x6c8))();
  if (0 < iVar3) {
    iVar5 = (int)param_1[0xdf];
    if (iVar5 < iVar3) {
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          lVar2 = *param_1;
          uVar4 = (**(code **)(lVar2 + 0x560))(param_1,iVar5);
          (**(code **)(lVar2 + 0x568))(param_1,iVar5,uVar4);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
      }
    }
    else {
      iVar3 = iVar5 - iVar5 % iVar3;
      if (iVar3 < iVar5) {
        plVar1 = param_1 + 0xde;
        iVar5 = (int)param_1[0xdf];
        if (iVar5 < iVar3) {
          *(int *)(param_1 + 0xdf) = iVar3;
          if (*(int *)((longlong)param_1 + 0x6fc) < iVar3) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar5 * 8),0,(longlong)(iVar3 - iVar5) << 3);
        }
        else if ((iVar3 < iVar5) && (iVar3 != iVar5)) {
          *(int *)(param_1 + 0xdf) = iVar3;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        }
        FUN_1423424e0(param_1);
      }
    }
  }
  return;
}



// FUNCTION 142cf4910 FUN_142cf4910 body=66 status=ok
// SIG undefined FUN_142cf4910(void)

void FUN_142cf4910(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x418) == '\x01') {
    if (((*(char *)(param_1 + 0x440) == '\0') || (*(longlong *)(param_1 + 0x118) == 0)) ||
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x118), lVar1 == 0)) {
      lVar1 = *(longlong *)(param_1 + 0x118);
    }
    FUN_142cf7950(param_1,lVar1,*(undefined8 *)(param_1 + 0x408));
    return;
  }
  return;
}



// FUNCTION 142cf4960 FUN_142cf4960 body=24 status=ok
// SIG undefined FUN_142cf4960(void)

void FUN_142cf4960(longlong param_1,byte param_2)

{
  if (*(char *)(param_1 + 0x418) == '\x03') {
    *(byte *)(param_1 + 0x41a) = param_2 ^ 1;
    FUN_142ceb5d0();
    return;
  }
  return;
}



// FUNCTION 142cf4980 FUN_142cf4980 body=81 status=ok
// SIG undefined FUN_142cf4980(void)

void FUN_142cf4980(longlong param_1)

{
  longlong lVar1;
  
  FUN_142d01010(param_1,0,1);
  lVar1 = *(longlong *)(param_1 + 0x618);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x40) != 0)) {
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x618) + 0x48) = 0;
  }
  return;
}



// FUNCTION 142cf49e0 FUN_142cf49e0 body=157 status=ok
// SIG undefined FUN_142cf49e0(void)

void FUN_142cf49e0(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x40);
  lVar4 = (longlong)iVar2;
  puVar1 = param_1 + 8;
  *(int *)(param_1 + 0x40) = iVar2 + 1;
  if (*(int *)(param_1 + 0x44) < iVar2 + 1) {
    TArray<FSectionEvaluationData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(puVar1,iVar2);
  }
  puVar3 = *(undefined1 **)(param_1 + 0x38);
  if (*(undefined1 **)(param_1 + 0x38) == (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(undefined8 *)(puVar3 + lVar4 * 0xc) = 0;
  *(undefined4 *)(puVar3 + lVar4 * 0xc + 8) = 0;
  puVar3 = *(undefined1 **)(param_1 + 0x38);
  if (*(undefined1 **)(param_1 + 0x38) == (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(undefined4 *)(puVar3 + lVar4 * 0xc + 4) = param_3;
  *(undefined4 *)(puVar3 + lVar4 * 0xc + 8) = param_2;
  puVar3[lVar4 * 0xc] = 1;
  *param_1 = 1;
  return;
}



// FUNCTION 142cf4a80 FUN_142cf4a80 body=89 status=ok
// SIG undefined FUN_142cf4a80(void)

void FUN_142cf4a80(undefined1 *param_1,int param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  *param_1 = 0;
  pcVar2 = *(char **)(param_1 + 0x38);
  if (*(char **)(param_1 + 0x38) == (char *)0x0) {
    pcVar2 = param_1 + 8;
  }
  pcVar1 = pcVar2 + (longlong)*(int *)(param_1 + 0x40) * 0xc;
  for (; pcVar2 != pcVar1; pcVar2 = pcVar2 + 0xc) {
    if ((*(int *)(pcVar2 + 8) == param_2) && (*(int *)(pcVar2 + 4) == param_3)) {
      *pcVar2 = '\0';
    }
    else if (*pcVar2 != '\0') {
      *param_1 = 1;
    }
  }
  return;
}



// FUNCTION 142cf4ae0 FUN_142cf4ae0 body=191 status=ok
// SIG undefined FUN_142cf4ae0(void)

void FUN_142cf4ae0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_18;
  longlong local_10;
  
  lVar2 = 0;
  if (param_3 != 0) {
    uVar1 = UDamageableInterface::GetPrivateStaticClass();
    lVar2 = UObjectBaseUtility::GetInterfaceAddress(param_3,uVar1);
  }
  if (lVar2 != 0) {
    if (param_3 == 0) {
      lVar2 = 0;
    }
    local_18 = param_3;
    local_10 = lVar2;
    TArray<TScriptInterface<ITTLArsenalHUDMakerInterface>,FDefaultAllocator>::
    AddUniqueImpl<TScriptInterface<ITTLArsenalHUDMakerInterface>_const_&>
              (param_1 + 0x1348,&local_18);
    if ((*(longlong *)(param_1 + 0x1358) == 0) || (*(longlong *)(param_1 + 0x1360) == 0)) {
      *(longlong *)(param_1 + 0x1358) = param_3;
      *(longlong *)(param_1 + 0x1360) = lVar2;
    }
  }
  if (((*(longlong *)(param_1 + 0x1778) != 0) && ((*(byte *)(param_1 + 0x18cc) & 2) == 0)) &&
     (*(longlong *)(param_1 + 0x178) != 0)) {
    AK::MemoryMgr::StartProfileThreadUsage((int)param_1 + 6000);
  }
  return;
}



// FUNCTION 142cf4ba0 FUN_142cf4ba0 body=137 status=ok
// SIG undefined FUN_142cf4ba0(void)

void FUN_142cf4ba0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong local_18;
  longlong local_10;
  
  local_10 = 0;
  if (param_3 != 0) {
    uVar1 = UDamageableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_3,uVar1);
  }
  if (((local_10 != 0) && (*(longlong *)(param_1 + 0x180) != 0)) &&
     (cVar2 = FUN_142390930(*(longlong *)(param_1 + 0x180),param_3), cVar2 == '\0')) {
    if (param_3 == 0) {
      local_10 = 0;
    }
    local_18 = param_3;
    FUN_142cf62b0(param_1,&local_18);
  }
  return;
}



// FUNCTION 142cf4c30 FUN_142cf4c30 body=90 status=ok
// SIG undefined FUN_142cf4c30(void)

void FUN_142cf4c30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 == 3) {
    lVar2 = *(longlong *)(param_1 + 0x618);
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*(longlong *)(param_1 + 0x218) + 0x30))();
    }
    if (0.0 < *(float *)(lVar2 + 0x88)) {
      *(float *)(lVar2 + 0x88) = *(float *)(lVar2 + 0x88) - *(float *)(param_1 + 0x620);
    }
  }
  return;
}



// FUNCTION 142cf4c90 FUN_142cf4c90 body=1324 status=ok
// SIG undefined FUN_142cf4c90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cf4c90(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_138 [32];
  char local_118;
  longlong *local_110;
  ulonglong local_108;
  longlong *local_100;
  undefined1 local_f8 [16];
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 == 0) {
    return;
  }
  local_100 = param_2;
  if ((*(char *)(lVar2 + 0x10c) != '\0') && (param_2 != (longlong *)0x0)) {
    lVar5 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && ((char)param_2[0x12f] == '\0')) {
      plVar9 = *(longlong **)(param_1 + 0xd0);
      plVar11 = plVar9 + *(int *)(param_1 + 0xd8);
      for (; plVar9 != plVar11; plVar9 = plVar9 + 1) {
        if ((longlong *)*plVar9 == param_2) goto LAB_142cf4de6;
      }
      if (*(char *)(lVar2 + 0x10c) == '\x01') {
        FUN_142397540(param_2,1,1);
      }
      else {
        if ((((*(char *)(lVar2 + 0x10c) != '\x02') ||
             (cVar4 = (**(code **)(*param_2 + 0x2a0))(param_2), cVar4 == '\0')) ||
            (param_2[0xde] == 0)) || ((*(uint *)(param_2[0xde] + 0x14c) >> 1 & 1) == 0))
        goto LAB_142cf4de6;
        FUN_142600fa0(param_2);
      }
      iVar1 = *(int *)(param_1 + 0xf8);
      *(int *)(param_1 + 0xf8) = iVar1 + 1;
      if (*(int *)(param_1 + 0xfc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xf0,iVar1);
      }
      *(longlong **)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar1 * 8) = param_2;
    }
  }
LAB_142cf4de6:
  bVar3 = false;
  local_68 = (longlong *)0x0;
  local_58 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_88);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = param_1;
    *puVar6 = &PTR_FUN_143f77b70;
  }
  local_98[0] = &LAB_142ce3930;
  if ((*(longlong *)(lVar2 + 0x78) != 0) || (local_118 = '\0', 0 < *(int *)(lVar2 + 0x98))) {
    local_118 = '\x01';
  }
  FUN_142cf0870(param_2,&DAT_146b31768,local_98);
  local_108 = 0;
  uVar7 = (ulonglong)((longlong)(DAT_146b31768 + DAT_146b31770) + (7 - (longlong)DAT_146b31768)) >>
          3;
  if (DAT_146b31768 + DAT_146b31770 < DAT_146b31768) {
    uVar7 = 0;
  }
  local_110 = DAT_146b31768;
  if (uVar7 != 0) {
    plVar11 = (longlong *)(param_1 + 0x100);
    do {
      lVar5 = *plVar11;
      iVar1 = *(int *)(param_1 + 0x108);
      plVar9 = (longlong *)*local_110;
      lVar10 = (longlong)iVar1 * 0x10 + lVar5;
      for (; lVar5 != lVar10; lVar5 = lVar5 + 0x10) {
        if (*(longlong **)(lVar5 + 8) == plVar9) goto LAB_142cf4fa8;
      }
      *(int *)(param_1 + 0x108) = iVar1 + 1;
      if (*(int *)(param_1 + 0x10c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11);
      }
      lVar5 = *plVar11;
      lVar10 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar10 + lVar5) = 0;
      *(undefined8 *)(lVar10 + 8 + lVar5) = 0;
      *(longlong **)(lVar10 + 8 + *plVar11) = plVar9;
      *(undefined4 *)(lVar10 + *plVar11) = 0xffffffff;
      if (local_118 != '\0') {
        if ((*(byte *)(lVar2 + 0xd1) & 8) == 0) {
          FUN_142cfd110(param_1,plVar9,*plVar11 + lVar10);
        }
        else {
          FUN_142cfdbf0();
        }
      }
      if ((*(longlong *)(param_1 + 0x1b0) != 0) || (*(longlong *)(param_1 + 0x1b8) != 0)) {
        uVar8 = FUN_142c61880(param_1,local_f8);
        FUN_142c65940(*(undefined8 *)(param_1 + 0x18),plVar9,uVar8);
        if (*(longlong *)(param_1 + 0x1b0) != 0) {
          (**(code **)(*plVar9 + 0x580))(plVar9);
        }
        if (*(longlong *)(param_1 + 0x1b8) != 0) {
          (**(code **)(*plVar9 + 0x590))(plVar9);
        }
      }
      bVar3 = true;
LAB_142cf4fa8:
      local_110 = local_110 + 1;
      local_108 = local_108 + 1;
      param_2 = local_100;
    } while (local_108 != uVar7);
  }
  DAT_146b31770 = 0;
  if ((DAT_146b31774 < 0) && (DAT_146b31774 != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b31768,0);
  }
  if (0 < *(int *)(lVar2 + 0x128)) {
    local_b8 = (longlong *)0x0;
    local_a8 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = param_1;
      *puVar6 = &PTR_FUN_143f77b70;
    }
    iVar1 = *(int *)(param_1 + 0x118);
    local_e8[0] = &LAB_142ce39f0;
    FUN_142cf03c0(param_2,0,param_1 + 0x110,local_e8);
    if (*(int *)(param_1 + 0x118) != iVar1) {
      FUN_142cf1ef0(param_1);
      bVar3 = true;
    }
    if (local_a8 != 0) {
      plVar11 = local_d8;
      if (local_b8 != (longlong *)0x0) {
        plVar11 = local_b8;
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11,0);
      }
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if (0 < *(int *)(lVar2 + 0x100)) {
    local_b8 = (longlong *)0x0;
    local_a8 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = param_1;
      *puVar6 = &PTR_FUN_143f77b70;
    }
    iVar1 = *(int *)(param_1 + 0x128);
    local_e8[0] = &LAB_142ce3950;
    FUN_142cf0c70(param_2,0,param_1 + 0x120,local_e8);
    if (*(int *)(param_1 + 0x128) != iVar1) {
      FUN_142cf24d0(param_1);
      bVar3 = true;
    }
    if (local_a8 != 0) {
      plVar11 = local_d8;
      if (local_b8 != (longlong *)0x0) {
        plVar11 = local_b8;
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11,0);
      }
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if (bVar3) {
    FUN_142cfd7b0(param_1,param_2[0x23],1);
  }
  if (local_58 != 0) {
    plVar11 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar11 = local_68;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142cf51c0 FUN_142cf51c0 body=16 status=ok
// SIG undefined FUN_142cf51c0(void)

void FUN_142cf51c0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_142cf51d0(param_1,param_2,0);
    return;
  }
  return;
}



// FUNCTION 142cf51d0 FUN_142cf51d0 body=2411 status=ok
// SIG undefined FUN_142cf51d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cf51d0(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  undefined8 *puVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong *plVar23;
  undefined1 auStack_138 [32];
  char local_118;
  char local_117;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8 [2];
  longlong *local_a8;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar22 = *(longlong *)(param_1 + 0x10);
  local_117 = param_3;
  local_110 = lVar22;
  local_f8 = param_1;
  local_e8 = param_2;
  if (((lVar22 != 0) && (*(char *)(lVar22 + 0x10c) != '\0')) && (param_2 != 0)) {
    lVar8 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
         ) != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(char *)(param_2 + 0x978) == '\0')) {
      plVar14 = *(longlong **)(param_1 + 0xf0);
      iVar6 = *(int *)(param_1 + 0xf8);
      for (plVar21 = plVar14; plVar21 != plVar14 + iVar6; plVar21 = plVar21 + 1) {
        if (*plVar21 == param_2) {
          iVar19 = (int)((longlong)plVar21 - (longlong)plVar14 >> 3);
          if (iVar19 != -1) {
            iVar17 = (iVar6 - iVar19) + -1;
            if (0 < iVar17) {
              iVar17 = 1;
            }
            if (iVar17 != 0) {
              _guard_xfg_dispatch_icall_nop
                        (plVar14 + iVar19,plVar14 + (iVar6 - iVar17),(longlong)iVar17 << 3);
            }
            *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + -1;
          }
          break;
        }
      }
    }
  }
  local_118 = '\0';
  lVar8 = FUN_142c6f130(param_1);
  local_d0 = lVar8;
  FUN_142c61880(param_1,&local_e0);
  plVar14 = local_d8;
  local_a8 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_d8 + 0xc) = *(int *)((longlong)local_d8 + 0xc) + 1;
    UNLOCK();
  }
  local_f0 = local_d8;
  local_68 = (longlong *)0x0;
  local_58 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_88);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_FUN_144575d30;
    puVar9[1] = local_e0;
    puVar9[2] = plVar14;
    plVar14 = (longlong *)0x0;
    local_a8 = (longlong *)0x0;
  }
  local_98[0] = &LAB_142ce38e0;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar14 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*local_a8 + 8))(local_a8,1);
    }
    local_f0 = local_d8;
  }
  if (param_3 == '\0') {
    if ((param_2 == 0) || (*(longlong *)(param_2 + 0x118) == lVar8)) goto LAB_142cf5438;
    lVar8 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
         ) != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142cf5438;
  }
  FUN_142cf0870(param_2,&DAT_146b31768,local_98);
LAB_142cf5438:
  plVar14 = DAT_146b31768 + DAT_146b31770;
  lVar8 = param_1;
  cVar4 = '\0';
  if (DAT_146b31768 != plVar14) {
    plVar21 = DAT_146b31768;
    do {
      lVar11 = *(longlong *)(param_1 + 0x100);
      iVar6 = *(int *)(param_1 + 0x108);
      plVar23 = (longlong *)*plVar21;
      for (lVar12 = lVar11; lVar12 != (longlong)iVar6 * 0x10 + lVar11; lVar12 = lVar12 + 0x10) {
        if (*(longlong **)(lVar12 + 8) == plVar23) {
          iVar19 = (int)(lVar12 - lVar11 >> 4);
          if ((iVar19 < 0) || (*(int *)(lVar8 + 0x108) <= iVar19)) goto LAB_142cf5498;
          bVar2 = true;
          goto LAB_142cf549a;
        }
      }
      iVar19 = -1;
LAB_142cf5498:
      bVar2 = false;
LAB_142cf549a:
      if (bVar2) {
        iVar5 = (iVar6 - iVar19) + -1;
        iVar17 = *(int *)(lVar11 + (longlong)iVar19 * 0x10);
        if (0 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar11 + (longlong)iVar19 * 0x10),
                     (void *)((longlong)(iVar6 - iVar5) * 0x10 + lVar11),(longlong)iVar5 << 4);
          iVar6 = *(int *)(param_1 + 0x108);
        }
        *(int *)(param_1 + 0x108) = iVar6 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink((longlong *)(param_1 + 0x100));
        local_118 = '\x01';
        if (iVar17 == -1) goto LAB_142cf5878;
        iVar6 = (**(code **)(*plVar23 + 0x6c8))(plVar23);
        lVar8 = local_f8;
        lVar22 = local_110;
        if (iVar6 < (int)plVar23[0xdf]) {
          iVar19 = (int)plVar23[0xdf] - iVar6;
          iVar17 = 0;
          if (iVar19 < 1) {
            iVar19 = 0;
          }
          if (0 < iVar6) {
            do {
              lVar22 = *plVar23;
              uVar10 = (**(code **)(lVar22 + 0x560))(plVar23,iVar17 + iVar19);
              (**(code **)(lVar22 + 0x568))(plVar23,iVar17,uVar10);
              iVar17 = iVar17 + 1;
            } while (iVar17 < iVar6);
          }
          plVar16 = plVar23 + 0xde;
          iVar19 = (int)plVar23[0xdf];
          if (iVar19 < iVar6) {
            *(int *)(plVar23 + 0xdf) = iVar6;
            if (*(int *)((longlong)plVar23 + 0x6fc) < iVar6) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar16 + (longlong)iVar19 * 8),0,(longlong)(iVar6 - iVar19) << 3);
          }
          else if ((iVar6 < iVar19) && (iVar19 - iVar6 != 0)) {
            *(int *)(plVar23 + 0xdf) = iVar19 - (iVar19 - iVar6);
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar16);
          }
          FUN_1423424e0(plVar23);
          lVar8 = local_f8;
          lVar22 = local_110;
        }
LAB_142cf55eb:
        if (*(longlong *)(lVar8 + 0x1b0) != 0) goto LAB_142cf55f5;
      }
      else {
LAB_142cf5878:
        if (lVar22 == 0) goto LAB_142cf55eb;
        if ((*(byte *)(lVar22 + 0xd1) & 0x20) != 0) {
LAB_142cf58a7:
          puVar9 = *(undefined8 **)(lVar22 + 0xa0);
          puVar18 = puVar9 + (longlong)*(int *)(lVar22 + 0xa8) * 0x2b;
          for (; puVar9 != puVar18; puVar9 = puVar9 + 0x2b) {
            FUN_142ce64c0(plVar23,*puVar9,1);
          }
          puVar9 = *(undefined8 **)(lVar22 + 0xb0);
          puVar18 = puVar9 + (longlong)*(int *)(lVar22 + 0xb8) * 0x4d;
          for (; puVar9 != puVar18; puVar9 = puVar9 + 0x4d) {
            FUN_142ce6590(plVar23,*puVar9,1);
          }
          goto LAB_142cf55eb;
        }
        if (*(longlong *)(lVar8 + 0x1b0) == 0) {
          if (*(longlong *)(lVar8 + 0x1b8) != 0) goto LAB_142cf55eb;
          goto LAB_142cf58a7;
        }
LAB_142cf55f5:
        lVar11 = (**(code **)(*plVar23 + 0x578))(plVar23);
        if (*(longlong *)(lVar8 + 0x1b0) == lVar11) {
          (**(code **)(*plVar23 + 0x580))(plVar23,0);
        }
      }
      if ((*(longlong *)(lVar8 + 0x1b8) != 0) &&
         (lVar11 = (**(code **)(*plVar23 + 0x588))(plVar23), *(longlong *)(lVar8 + 0x1b8) == lVar11)
         ) {
        (**(code **)(*plVar23 + 0x590))(plVar23,0);
      }
      plVar21 = plVar21 + 1;
      param_2 = local_e8;
      cVar4 = local_118;
    } while (plVar21 != plVar14);
  }
  DAT_146b31770 = 0;
  if ((DAT_146b31774 < 0) && (DAT_146b31774 != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b31768,0);
  }
  lVar11 = local_d0;
  cVar3 = local_117;
  if (lVar22 != 0) {
    lVar12 = lVar8;
    if ((0 < *(int *)(lVar22 + 0x128)) && (iVar6 = *(int *)(lVar8 + 0x118) + -1, -1 < iVar6)) {
      plVar14 = (longlong *)(lVar8 + 0x110);
      lVar15 = (longlong)iVar6 * 8;
      lVar20 = lVar15;
      do {
        lVar22 = *(longlong *)(lVar20 + *plVar14);
        if (((lVar22 == param_2) || (cVar4 = FUN_142390860(lVar22,param_2), cVar4 != '\0')) &&
           ((cVar3 != '\0' || (*(longlong *)(lVar22 + 0x118) != lVar11)))) {
          iVar19 = *(int *)(lVar8 + 0x118);
          iVar17 = (iVar19 - iVar6) + -1;
          if (0 < iVar17) {
            iVar17 = 1;
          }
          if (iVar17 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar14 + lVar15),
                       (void *)(*plVar14 + (longlong)(iVar19 - iVar17) * 8),(longlong)iVar17 << 3);
            iVar19 = *(int *)(lVar8 + 0x118);
          }
          *(int *)(lVar8 + 0x118) = iVar19 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar14);
          local_118 = '\x01';
        }
        lVar15 = lVar15 + -8;
        lVar20 = lVar20 + -8;
        iVar6 = iVar6 + -1;
        lVar12 = local_f8;
        lVar22 = local_110;
        cVar4 = local_118;
      } while (-1 < iVar6);
    }
    if ((0 < *(int *)(lVar22 + 0x100)) && (iVar6 = *(int *)(lVar12 + 0x128) + -1, -1 < iVar6)) {
      plVar14 = (longlong *)(lVar12 + 0x120);
      local_100 = (longlong)iVar6 * 8;
      local_108 = local_100;
      local_c0 = plVar14;
      do {
        lVar8 = *(longlong *)(local_100 + *plVar14);
        if (((lVar8 != 0) &&
            ((lVar8 == local_e8 || (cVar4 = FUN_142390860(lVar8,local_e8), cVar4 != '\0')))) &&
           ((local_117 != '\0' || (*(longlong *)(lVar8 + 0x118) != local_d0)))) {
          iVar19 = (int)plVar14[1];
          iVar17 = (iVar19 - iVar6) + -1;
          if (0 < iVar17) {
            iVar17 = 1;
          }
          if (iVar17 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar14 + local_108),
                       (void *)(*plVar14 + (longlong)(iVar19 - iVar17) * 8),(longlong)iVar17 << 3);
            iVar19 = (int)plVar14[1];
          }
          *(int *)(plVar14 + 1) = iVar19 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink();
          uVar7 = *(uint *)(lVar8 + 0xc);
          local_118 = '\x01';
          if ((int)uVar7 < (int)DAT_1469e91c4) {
            uVar13 = uVar7 & 0xffff;
            if ((int)uVar7 < 0) {
              uVar7 = uVar7 + 0xffff;
              uVar13 = uVar13 - 0x10000;
            }
            lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                     (longlong)(int)uVar13 * 0x18;
          }
          else {
            lVar11 = 0;
          }
          if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) == 0) {
            plVar21 = *(longlong **)(lVar22 + 0xf8);
            plVar23 = plVar21 + (longlong)*(int *)(local_110 + 0x100) * 6;
            lVar22 = local_110;
            if (plVar21 != plVar23) {
              plVar16 = plVar21 + 5;
              do {
                if ((plVar16[-4] == 0) || (*(longlong *)(lVar8 + 0x6f0) != plVar16[-4])) {
                  local_c8 = 0;
                  if ((*plVar21 == 0) || (*(int *)(lVar8 + 0x18) == (int)*plVar21))
                  goto LAB_142cf599c;
                }
                else {
LAB_142cf599c:
                  puVar9 = (undefined8 *)plVar16[-3];
                  puVar18 = puVar9 + (longlong)(int)plVar16[-2] * 0x2b;
                  for (; puVar9 != puVar18; puVar9 = puVar9 + 0x2b) {
                    FUN_1425ff2e0(lVar8,*puVar9,1);
                  }
                  puVar9 = (undefined8 *)plVar16[-1];
                  puVar18 = puVar9 + (longlong)(int)*plVar16 * 0x4d;
                  for (; puVar9 != puVar18; puVar9 = puVar9 + 0x4d) {
                    FUN_1425ff2e0(lVar8,*puVar9,3);
                  }
                }
                plVar21 = plVar21 + 6;
                plVar16 = plVar16 + 6;
                plVar14 = local_c0;
                lVar22 = local_110;
              } while (plVar21 != plVar23);
            }
          }
        }
        local_108 = local_108 + -8;
        local_100 = local_100 + -8;
        iVar6 = iVar6 + -1;
        cVar4 = local_118;
      } while (-1 < iVar6);
    }
  }
  lVar8 = local_e8;
  lVar22 = local_f8;
  if ((local_e8 != 0) && (cVar4 != '\0')) {
    local_b8[0] = *(undefined8 *)(local_e8 + 0x118);
    TArray<FName,FDefaultAllocator>::Remove(local_f8 + 0x180,local_b8);
    FUN_142cfd7b0(lVar22,*(undefined8 *)(lVar8 + 0x118),0);
  }
  if (local_58 != 0) {
    plVar14 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar14 = local_68;
    }
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x10))(plVar14,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_f0 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*local_d8 + 8))(local_d8,1);
    }
  }
  return;
}



// FUNCTION 142cf5b40 FUN_142cf5b40 body=110 status=ok
// SIG undefined FUN_142cf5b40(void)

void FUN_142cf5b40(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = FUN_1429ff160();
    lVar1 = *(longlong *)(param_2 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && ((*(byte *)(param_2 + 200) & 0x40) == 0)) {
      FUN_142cf51d0(param_1,param_2,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
    }
  }
  return;
}



// FUNCTION 142cf5bb0 FUN_142cf5bb0 body=175 status=ok
// SIG undefined FUN_142cf5bb0(void)

void FUN_142cf5bb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_res8 [2];
  undefined8 local_18 [2];
  
  if (*(longlong *)(param_1 + 0xfe0) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0xfe0) + 0x8b0) = 0;
    *(undefined1 *)(param_1 + 0x2290) = 1;
    FUN_142295480(param_2,local_18);
    FUN_142274e20(*(undefined8 *)(param_1 + 0xfe0),local_18[0],local_res8,0);
    *(undefined4 *)(param_1 + 0x2288) = local_res8[0];
    lVar1 = *(longlong *)(param_1 + 0x178);
    *(undefined4 *)(param_1 + 0x228c) = param_4;
    uVar2 = *(undefined4 *)(lVar1 + 0x224);
    uVar3 = *(undefined4 *)(lVar1 + 0x228);
    *(undefined4 *)(param_1 + 0x2278) = *(undefined4 *)(lVar1 + 0x220);
    *(undefined4 *)(param_1 + 0x227c) = uVar2;
    *(undefined4 *)(param_1 + 0x2280) = uVar3;
  }
  return;
}



// FUNCTION 142cf5c60 FUN_142cf5c60 body=1165 status=ok
// SIG undefined FUN_142cf5c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cf5c60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float fVar11;
  uint uVar12;
  longlong lVar13;
  int *piVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  undefined1 auStack_268 [32];
  float local_248;
  float fStack_244;
  uint *puStack_240;
  uint local_238;
  uint uStack_234;
  int iStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong *local_1f8;
  undefined8 uStack_1f0;
  uint *local_1e8;
  uint uStack_1e0;
  uint uStack_1dc;
  undefined8 local_1d8;
  float local_1c8;
  longlong *local_1c0;
  undefined8 uStack_1b8;
  uint *puStack_1b0;
  uint uStack_1a8;
  uint uStack_1a4;
  undefined8 uStack_1a0;
  undefined1 local_198 [12];
  undefined1 local_18c [20];
  int local_178;
  int local_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  undefined1 local_150 [120];
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined1 local_b8 [112];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  if (*(longlong *)(param_1 + 0xfe0) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0xfe0) + 0x8b4) = 0;
    *(undefined1 *)(param_1 + 0x2300) = 1;
    FUN_142295480(param_2,&local_220);
    FUN_142274e20(*(undefined8 *)(param_1 + 0xfe0),local_220);
    plVar2 = (longlong *)(param_1 + 0x2298);
    *(undefined4 *)(param_1 + 0x22f8) = local_228;
    puVar1 = (uint *)(param_1 + 0x22a8);
    *(undefined4 *)(param_1 + 0x22fc) = param_4;
    uVar3 = *(uint *)(param_1 + 0x22c0);
    local_248 = 0.0;
    fStack_244 = 1.4013e-45;
    uStack_234 = 0;
    iStack_230 = 0;
    if (uVar3 != 0) {
      puVar17 = *(uint **)(param_1 + 0x22b8);
      if (*(uint **)(param_1 + 0x22b8) == (uint *)0x0) {
        puVar17 = puVar1;
      }
      uVar4 = *puVar17;
      iStack_230 = 0;
      local_248 = 0.0;
      while (uVar4 == 0) {
        lVar13 = (longlong)(int)local_248;
        iStack_230 = iStack_230 + 0x20;
        fVar11 = (float)((int)local_248 + 1);
        bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_248;
        local_248 = fVar11;
        if (bVar5) goto LAB_142cf5db1;
        uVar4 = puVar17[lVar13 + 1];
      }
      fStack_244 = (float)(-uVar4 & uVar4);
      iVar8 = 0x1f;
      if (fStack_244 != 0.0) {
        for (; (uint)fStack_244 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (fStack_244 == 0.0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_234 = (iStack_230 - iVar8) + 0x1f;
      if ((int)uVar3 < (int)uStack_234) {
LAB_142cf5db1:
        uStack_234 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x22c0);
    uStack_1e0 = 0xffffffff;
    uStack_1dc = uStack_234;
    local_1d8 = CONCAT44(uStack_22c,iStack_230);
    uStack_1f0 = CONCAT44(fStack_244,local_248);
    local_238 = -1 << ((byte)uVar4 & 0x1f);
    uVar16 = uVar4 & 0xffffffe0;
    puStack_240 = puVar1;
    uStack_234 = uVar4;
    local_1f8 = plVar2;
    local_1e8 = puVar1;
    local_1c0 = plVar2;
    uStack_1b8 = uStack_1f0;
    puStack_1b0 = puVar1;
    uStack_1a0 = local_1d8;
    uStack_1a8 = uStack_1e0;
    uStack_1a4 = uStack_1dc;
    if (uVar4 != uVar3) {
      puVar17 = *(uint **)(param_1 + 0x22b8);
      if (*(uint **)(param_1 + 0x22b8) == (uint *)0x0) {
        puVar17 = puVar1;
      }
      uVar12 = puVar17[(int)uVar4 >> 5] & local_238;
      iVar8 = (int)uVar4 >> 5;
      while (uVar12 == 0) {
        uVar16 = uVar16 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_142cf5e89;
        uVar12 = puVar17[(longlong)iVar8 + 1];
        local_238 = 0xffffffff;
        iVar8 = iVar8 + 1;
      }
      uVar12 = -uVar12 & uVar12;
      iVar8 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar12 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_234 = (uVar16 - iVar8) + 0x1f;
      uVar4 = uStack_234;
      if ((int)uVar3 < (int)uStack_234) {
LAB_142cf5e89:
        uStack_234 = uVar3;
        uVar4 = uVar3;
      }
    }
    while( true ) {
      if (((uStack_1dc == uVar4) && (local_1e8 == puVar1)) && (local_1f8 == plVar2)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) break;
      piVar14 = (int *)((longlong)(int)uStack_1dc * 0xa0 + *local_1f8);
      local_178 = *piVar14;
      local_170 = piVar14[2];
      iStack_16c = piVar14[3];
      iStack_168 = piVar14[4];
      iStack_164 = piVar14[5];
      local_160 = piVar14[6];
      iStack_15c = piVar14[7];
      iStack_158 = piVar14[8];
      iStack_154 = piVar14[9];
      FRichCurve::FRichCurve(local_150,piVar14 + 10);
      iVar7 = local_178;
      uVar15 = (ulonglong)local_178;
      local_d8 = local_170;
      iStack_d4 = iStack_16c;
      iStack_d0 = iStack_168;
      iStack_cc = iStack_164;
      local_c8 = local_160;
      iStack_c4 = iStack_15c;
      iStack_c0 = iStack_158;
      iStack_bc = iStack_154;
      FRichCurve::FRichCurve(local_b8,local_150);
      iVar8 = *(int *)(param_1 + 0x2310);
      if (iVar8 != *(int *)(param_1 + 0x233c)) {
        lVar13 = *(longlong *)(param_1 + 0x2348);
        if (*(longlong *)(param_1 + 0x2348) == 0) {
          lVar13 = param_1 + 0x2340;
        }
        iVar8 = *(int *)(lVar13 + ((longlong)*(int *)(param_1 + 0x2350) - 1U & uVar15) * 4);
        if (iVar8 != -1) {
          do {
            piVar14 = (int *)((longlong)iVar8 * 0x20 + *(longlong *)(param_1 + 0x2308));
            if (*piVar14 == iVar7) {
              if (iVar8 != -1) goto LAB_142cf5f7f;
              break;
            }
            iVar8 = piVar14[6];
          } while (iVar8 != -1);
        }
      }
      piVar14 = (int *)0x0;
LAB_142cf5f7f:
      piVar14[1] = (int)((*(float *)(param_1 + 0x18c) * *(float *)(param_1 + 0x18c) +
                          *(float *)(param_1 + 400) * *(float *)(param_1 + 400) +
                         *(float *)(param_1 + 0x194) * *(float *)(param_1 + 0x194)) *
                        (0.5 / (float)piVar14[2]));
      lVar13 = *(longlong *)(param_1 + 0x178);
      local_208 = *(undefined8 *)(lVar13 + 0x220);
      uStack_200 = *(undefined8 *)(lVar13 + 0x228);
      local_248 = *(float *)(lVar13 + 0x210);
      fStack_244 = *(float *)(lVar13 + 0x214);
      fVar11 = *(float *)(lVar13 + 0x218);
      puStack_240 = *(uint **)(lVar13 + 0x218);
      auVar6._4_4_ = -(uint)(*(float *)(lVar13 + 0x254) != fStack_244);
      auVar6._0_4_ = -(uint)(*(float *)(lVar13 + 0x250) != local_248);
      auVar6._8_4_ = -(uint)(*(float *)(lVar13 + 600) != fVar11);
      auVar6._12_4_ = -(uint)(*(float *)(lVar13 + 0x25c) != *(float *)(lVar13 + 0x21c));
      iVar8 = movmskps(iVar8,auVar6);
      if (iVar8 != 0) {
        *(float *)(lVar13 + 0x250) = local_248;
        *(float *)(lVar13 + 0x254) = fStack_244;
        *(float *)(lVar13 + 600) = fVar11;
        *(float *)(lVar13 + 0x25c) = *(float *)(lVar13 + 0x21c);
        puVar9 = (undefined8 *)FQuat::Rotator(&local_248,local_198);
        *(undefined8 *)(lVar13 + 0x260) = *puVar9;
        *(undefined4 *)(lVar13 + 0x268) = *(undefined4 *)(puVar9 + 1);
      }
      local_218 = *(undefined8 *)(lVar13 + 0x260);
      local_210 = *(undefined4 *)(lVar13 + 0x268);
      pfVar10 = (float *)FRotator::Vector(&local_218,local_18c);
      fVar11 = (float)piVar14[2];
      local_1c8 = fVar11 * pfVar10[2] + (float)uStack_200;
      *(ulonglong *)(piVar14 + 3) =
           CONCAT44(fVar11 * pfVar10[1] + local_208._4_4_,fVar11 * *pfVar10 + (float)local_208);
      piVar14[5] = (int)local_1c8;
      FRichCurve::~FRichCurve(local_b8);
      FRichCurve::~FRichCurve(local_150);
      uStack_1e0 = uStack_1e0 & ~uStack_1f0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1f0);
    }
  }
  return;
}



// FUNCTION 142cf60f0 FUN_142cf60f0 body=442 status=ok
// SIG undefined FUN_142cf60f0(void)

void FUN_142cf60f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_res8 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined1 local_38 [12];
  undefined1 local_2c [20];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  FUN_142297850(param_2,param_4);
  *(undefined2 *)(param_1 + 0x13c5) = 1;
  *(undefined4 *)(param_1 + 0x2400) = 0;
  *(undefined4 *)(param_1 + 0x2404) = 0xbf800000;
  if (*(longlong *)(param_1 + 0xfe0) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0xfe0) + 0x8b8) = 0;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xfd8) + 0x168);
    if (lVar1 == 0) {
      uVar7 = (undefined4)DAT_1468b5da0;
      uVar8 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_48 = DAT_1468b5da8;
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
      iVar4 = movmskps((int)*(longlong *)(param_1 + 0xfd8),auVar2);
      if (iVar4 != 0) {
        *(float *)(lVar1 + 0x250) = local_18;
        *(float *)(lVar1 + 0x254) = fStack_14;
        *(float *)(lVar1 + 600) = fStack_10;
        *(float *)(lVar1 + 0x25c) = fStack_c;
        puVar5 = (undefined8 *)FQuat::Rotator(&local_18,local_38);
        *(undefined8 *)(lVar1 + 0x260) = *puVar5;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
      }
      uVar7 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar8 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      local_48 = *(undefined4 *)(lVar1 + 0x268);
    }
    local_50 = CONCAT44(uVar8,uVar7);
    local_44 = local_50;
    local_3c = local_48;
    puVar5 = (undefined8 *)FUN_142ce7a40(param_1,local_2c,&local_44);
    *(undefined8 *)(param_1 + 0x23f0) = *puVar5;
    *(undefined4 *)(param_1 + 0x23f8) = *(undefined4 *)(puVar5 + 1);
    FRichCurve::Reset(param_1 + 0x2380);
    FUN_142295480(param_2,&local_58);
    FUN_142274e20(*(undefined8 *)(param_1 + 0xfe0),local_58,local_res8,0);
    *(undefined4 *)(param_1 + 0x2408) = local_res8[0];
    *(undefined4 *)(param_1 + 0x240c) = param_4;
    uVar6 = FUN_142296090(param_2,param_4);
    cVar3 = FUN_142cad850(*(undefined8 *)(param_1 + 0xfe0),uVar6,0);
    *(char *)(param_1 + 0x13c6) = cVar3;
    if (cVar3 != '\0') {
      return;
    }
  }
  FUN_142cf3f30(param_1,DAT_146b31718,2);
  return;
}



// FUNCTION 142cf62b0 FUN_142cf62b0 body=526 status=ok
// SIG undefined FUN_142cf62b0(void)

void FUN_142cf62b0(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  
  lVar11 = (longlong)*(int *)(param_1 + 0x1350);
  uVar7 = 0;
  if (*(int *)(param_1 + 0x1350) != 0) {
    lVar6 = **(longlong **)(param_1 + 0x1348);
    uVar5 = uVar7;
    if (lVar6 != 0) {
      uVar5 = (*(longlong **)(param_1 + 0x1348))[1];
    }
    uVar1 = uVar7;
    if (*param_2 != 0) {
      uVar1 = param_2[1];
    }
    uVar13 = uVar7;
    if ((uVar5 == uVar1) && (lVar6 == *param_2)) {
      bVar8 = 0;
      uVar5 = uVar7;
    }
    else {
      bVar8 = 1;
      uVar5 = uVar7;
    }
    do {
      iVar9 = (int)uVar5;
      uVar7 = uVar7 + 1;
      uVar5 = (ulonglong)(iVar9 + 1);
      if ((longlong)uVar7 < lVar11) {
        plVar2 = (longlong *)(uVar7 * 0x10 + *(longlong *)(param_1 + 0x1348));
        do {
          lVar6 = 0;
          if (*plVar2 != 0) {
            lVar6 = plVar2[1];
          }
          lVar3 = 0;
          if (*param_2 != 0) {
            lVar3 = param_2[1];
          }
          if ((lVar6 == lVar3) && (*plVar2 == *param_2)) {
            bVar4 = 0;
          }
          else {
            bVar4 = 1;
          }
          if (bVar8 != bVar4) break;
          uVar5 = (ulonglong)((int)uVar5 + 1);
          uVar7 = uVar7 + 1;
          plVar2 = plVar2 + 2;
        } while ((longlong)uVar7 < lVar11);
      }
      iVar10 = (int)uVar5 - iVar9;
      if (bVar8 != 0) {
        iVar12 = (int)uVar13;
        if (iVar12 != iVar9) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar12 * 0x10 + *(longlong *)(param_1 + 0x1348)),
                     (void *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 0x1348)),
                     (longlong)iVar10 << 4);
        }
        uVar13 = (ulonglong)(uint)(iVar12 + iVar10);
      }
      bVar8 = bVar8 ^ 1;
    } while ((longlong)uVar7 < lVar11);
    *(int *)(param_1 + 0x1350) = (int)uVar13;
  }
  lVar6 = 0;
  lVar11 = lVar6;
  if (*(longlong *)(param_1 + 0x1358) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x1360);
  }
  lVar3 = lVar6;
  if (*param_2 != 0) {
    lVar3 = param_2[1];
  }
  if ((lVar11 == lVar3) && (*(longlong *)(param_1 + 0x1358) == *param_2)) {
    lVar3 = lVar6;
    lVar11 = lVar6;
    if (0 < *(int *)(param_1 + 0x1350)) {
      lVar11 = **(longlong **)(param_1 + 0x1348);
      if (lVar11 != 0) {
        lVar3 = (*(longlong **)(param_1 + 0x1348))[1];
      }
    }
    *(longlong *)(param_1 + 0x1358) = lVar11;
    *(longlong *)(param_1 + 0x1360) = lVar3;
    if ((*(longlong *)(param_1 + 0x1368) != 0) && (*(longlong *)(param_1 + 0x1370) != 0)) {
      if (lVar11 == 0) {
        lVar3 = lVar6;
      }
      if ((*(longlong *)(param_1 + 0x1370) != lVar3) || (*(longlong *)(param_1 + 0x1368) != lVar11))
      {
        *(undefined8 *)(param_1 + 0x1368) = 0;
        *(undefined8 *)(param_1 + 0x1370) = 0;
      }
    }
  }
  return;
}



// FUNCTION 142cf64c0 FUN_142cf64c0 body=49 status=ok
// SIG undefined FUN_142cf64c0(void)

void FUN_142cf64c0(longlong param_1)

{
  undefined8 local_18;
  undefined4 local_10;
  
  *(undefined8 *)(param_1 + 0x2278) = local_18;
  *(undefined4 *)(param_1 + 0x2280) = local_10;
  *(undefined4 *)(param_1 + 0x2284) = 0;
  *(undefined1 *)(param_1 + 0x2290) = 0;
  return;
}



// FUNCTION 142cf6500 FUN_142cf6500 body=49 status=ok
// SIG undefined FUN_142cf6500(void)

void FUN_142cf6500(longlong param_1)

{
  undefined8 local_18;
  undefined4 local_10;
  
  *(undefined8 *)(param_1 + 0x22e8) = local_18;
  *(undefined4 *)(param_1 + 0x22f0) = local_10;
  *(undefined4 *)(param_1 + 0x22f4) = 0;
  *(undefined1 *)(param_1 + 0x2300) = 0;
  return;
}



// FUNCTION 142cf65a0 FUN_142cf65a0 body=908 status=ok
// SIG undefined FUN_142cf65a0(void)

void FUN_142cf65a0(longlong *param_1,int param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  float fVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  byte bVar12;
  uint uVar13;
  longlong local_88;
  float fStack_80;
  float fStack_7c;
  longlong local_78;
  undefined4 local_70;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  plVar1 = (longlong *)param_1[0x30];
  if ((plVar1 == (longlong *)0x0) || (param_1[0x44] == 0)) goto LAB_142cf6705;
  if ((param_2 == 6) && (param_3 == '\0')) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((((char)param_1[0x49] == '\x06') && (*(char *)((longlong)param_1 + 0x249) == '\0')) &&
     (param_1[0x2f] != 0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if (bVar6) {
    if (bVar7) goto LAB_142cf6705;
    (**(code **)(*plVar1 + 0x830))(plVar1,2,2);
    if ((*(byte *)(param_1[0x44] + 0x56c) & 8) != 0) goto LAB_142cf6705;
    local_38 = 0;
    local_28 = 0;
    puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[1] = param_1;
      *puVar10 = &PTR_FUN_143f77b70;
    }
    local_68[0] = &LAB_142ce3a30;
  }
  else {
    if (!bVar7) goto LAB_142cf6705;
    (**(code **)(*plVar1 + 0x830))(plVar1,2);
    bVar12 = 4;
    if (1 < param_2 - 1U) {
      bVar12 = 0;
    }
    *(byte *)((longlong)param_1 + 0x137c) = *(byte *)((longlong)param_1 + 0x137c) & 0xfb;
    *(byte *)((longlong)param_1 + 0x137c) = *(byte *)((longlong)param_1 + 0x137c) | bVar12;
    if ((*(byte *)(param_1[0x44] + 0x56c) & 8) != 0) goto LAB_142cf6705;
    local_38 = 0;
    local_28 = 0;
    puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[1] = param_1;
      *puVar10 = &PTR_FUN_143f77b70;
    }
    local_68[0] = &LAB_142ce3a60;
  }
  uVar11 = FUN_14247f500();
  FUN_14247d5a0(uVar11,param_1,local_68);
LAB_142cf6705:
  lVar2 = param_1[0x23];
  if ((lVar2 != 0) && (*(byte *)(param_1 + 0x49) == *(byte *)((longlong)param_1 + 0x4b2))) {
    lVar3 = *(longlong *)(lVar2 + 0x168);
    if (lVar3 == 0) {
      uVar13 = (uint)((ulonglong)DAT_1468b5da0 >> 0x20);
    }
    else {
      fVar5 = *(float *)(lVar3 + 0x210);
      local_88 = *(longlong *)(lVar3 + 0x210);
      fStack_80 = *(float *)(lVar3 + 0x218);
      fStack_7c = *(float *)(lVar3 + 0x21c);
      auVar4._4_4_ = -(uint)(*(float *)(lVar3 + 0x254) != *(float *)(lVar3 + 0x214));
      auVar4._0_4_ = -(uint)(*(float *)(lVar3 + 0x250) != fVar5);
      auVar4._8_4_ = -(uint)(*(float *)(lVar3 + 600) != fStack_80);
      auVar4._12_4_ = -(uint)(*(float *)(lVar3 + 0x25c) != fStack_7c);
      iVar9 = movmskps((uint)*(byte *)((longlong)param_1 + 0x4b2),auVar4);
      if (iVar9 != 0) {
        *(float *)(lVar3 + 0x250) = fVar5;
        *(float *)(lVar3 + 0x254) = *(float *)(lVar3 + 0x214);
        *(float *)(lVar3 + 600) = fStack_80;
        *(float *)(lVar3 + 0x25c) = fStack_7c;
        puVar10 = (undefined8 *)FQuat::Rotator(&local_88,&local_78);
        *(undefined8 *)(lVar3 + 0x260) = *puVar10;
        *(undefined4 *)(lVar3 + 0x268) = *(undefined4 *)(puVar10 + 1);
      }
      uVar13 = (uint)((ulonglong)*(undefined8 *)(lVar3 + 0x260) >> 0x20);
    }
    local_88 = (ulonglong)uVar13 << 0x20;
    local_78 = local_88;
    fStack_80 = 0.0;
    local_70 = 0;
    AActor::SetActorRotation(lVar2,&local_78,0);
  }
  FUN_1423437f0(param_1);
  if ((param_2 == 6) && (param_3 == '\x01')) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  cVar8 = (char)param_1[0x49];
  if ((cVar8 == '\x06') && (*(char *)((longlong)param_1 + 0x249) == '\x01')) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if (((!bVar6) && (bVar7)) &&
     (((param_1[0x1fb] != 0 && (*(char *)(param_1[0x1fb] + 0x128) == '\x01')) ||
      ((param_1[0x44] != 0 && ((*(byte *)(param_1[0x44] + 0x56c) & 8) != 0)))))) {
    FUN_142cd9170(param_1);
    cVar8 = (char)param_1[0x49];
  }
  if ((cVar8 == '\x06') && (*(char *)((longlong)param_1 + 0x249) == '\x02')) {
    (**(code **)(*param_1 + 0x430))(param_1);
  }
  if (param_2 == 3) {
    if (((param_1[0x2ef] != 0) && ((*(byte *)((longlong)param_1 + 0x18cc) & 2) == 0)) &&
       (param_1[0x2f] != 0)) {
      local_38 = 0;
      local_28 = 0;
      puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar10 != (undefined8 *)0x0) {
        puVar10[1] = param_1;
        *puVar10 = &PTR_FUN_143f77b70;
      }
      local_68[0] = &LAB_142ce3b00;
      uVar11 = FUN_14247f500();
      FUN_14247d5a0(uVar11,param_1,local_68);
    }
    FUN_142cf31f0(param_1 + 0x1ff);
  }
  param_1[0x444] = DAT_1468c21b0;
  return;
}



// FUNCTION 142cf6930 FUN_142cf6930 body=54 status=ok
// SIG undefined FUN_142cf6930(void)

void FUN_142cf6930(longlong param_1)

{
  longlong lVar1;
  
  FUN_142344470();
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
  FWeakObjectPtr::operator=(param_1 + 0x2568,lVar1);
  return;
}



// FUNCTION 142cf6970 FUN_142cf6970 body=53 status=ok
// SIG undefined FUN_142cf6970(void)

void FUN_142cf6970(longlong *param_1)

{
  if (((char)param_1[0x83] == '\x01') && (param_1[0x81] != 0)) {
    FUN_142cfcd80();
  }
                    /* WARNING: Could not recover jumptable at 0x000142cf699e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x460))(param_1);
  return;
}



// FUNCTION 142cf69b0 FUN_142cf69b0 body=212 status=ok
// SIG undefined FUN_142cf69b0(void)

void FUN_142cf69b0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar2 != '\0') {
    lVar4 = param_1[0x31b];
    if (lVar4 != 0) {
      lVar3 = FUN_142e07420();
      do {
        if (lVar4 == lVar3) {
          plVar1 = (longlong *)param_1[0x31b];
          if (plVar1 == (longlong *)0x0) {
            lVar4 = 0;
          }
          else {
            lVar4 = plVar1[0x1f];
            if (lVar4 == 0) {
              (**(code **)(*plVar1 + 0x368))(plVar1);
              lVar4 = plVar1[0x1f];
            }
          }
          cVar2 = FUN_142cc5960(param_1,lVar4);
          if (cVar2 != '\0') {
            return;
          }
          FUN_142cd3420(param_1 + 0x2ee,param_1 + 0x31a);
          return;
        }
        lVar4 = *(longlong *)(lVar4 + 0x30);
      } while (lVar4 != 0);
    }
    if (((*(byte *)((longlong)param_1 + 0x1914) >> 1 & 1) != 0) ||
       (cVar2 = FUN_142cc5960(param_1,param_1[0x2ef]), cVar2 == '\0')) {
      FUN_142cd3ad0(param_1 + 0x2ee,param_1 + 0x31a);
    }
  }
  return;
}



// FUNCTION 142cf6a90 FUN_142cf6a90 body=105 status=ok
// SIG undefined FUN_142cf6a90(void)

void FUN_142cf6a90(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)(param_1 + 0x468);
  if (*(byte *)(param_1 + 0x469) != bVar1) {
    lVar2 = FUN_142c6f130();
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x128) == '\x03')) {
      *(byte *)(param_1 + 0x468) = bVar1;
      FUN_142c76980(param_1);
    }
    *(byte *)(param_1 + 0x469) = bVar1;
    FUN_142cfa6e0(param_1);
    if (2 < bVar1) {
      FUN_142c835c0(param_1,1);
    }
  }
  return;
}



// FUNCTION 142cf6b00 FUN_142cf6b00 body=263 status=ok
// SIG undefined FUN_142cf6b00(void)

void FUN_142cf6b00(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cStack_10;
  undefined2 uStack_e;
  
  if ((*(longlong *)(param_1 + 0xae8) != 0) || (*(char *)(param_1 + 0xaf0) == '\0')) {
    plVar1 = *(longlong **)(param_1 + 0xaf8);
    uVar4 = *(ulonglong *)(param_1 + 0xb00);
    *(undefined4 *)(param_1 + 0xaf8) = *(undefined4 *)(param_1 + 0xae8);
    *(undefined4 *)(param_1 + 0xafc) = *(undefined4 *)(param_1 + 0xaec);
    *(undefined4 *)(param_1 + 0xb00) = *(undefined4 *)(param_1 + 0xaf0);
    *(undefined4 *)(param_1 + 0xb04) = *(undefined4 *)(param_1 + 0xaf4);
    if (*(longlong *)(param_1 + 0xaf8) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xaf8) + 0x18);
    }
    *(undefined8 *)(param_1 + 0xb08) = uVar2;
    FUN_142235230();
    plVar3 = *(longlong **)(param_1 + 0xaf8);
    cStack_10 = (char)uVar4;
    if (plVar1 == plVar3) {
      if (plVar3 == (longlong *)0x0) {
        return;
      }
      if (cStack_10 == *(char *)(param_1 + 0xb00)) {
        return;
      }
      (**(code **)(*plVar3 + 0x4d8))(plVar3,*(undefined2 *)(param_1 + 0xb02));
      uVar4 = uVar4 & 0xff;
    }
    else {
      if (plVar1 != (longlong *)0x0) {
        uStack_e = (undefined2)(uVar4 >> 0x10);
        (**(code **)(*plVar1 + 0x4d8))(plVar1,uStack_e);
        FUN_142cf73e0(plVar1,param_1,0,uVar4 & 0xff);
        plVar3 = *(longlong **)(param_1 + 0xaf8);
      }
      if (plVar3 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*plVar3 + 0x4d8))(plVar3,*(undefined2 *)(param_1 + 0xb02));
      uVar4 = 0;
    }
    FUN_142cf73e0(*(undefined8 *)(param_1 + 0xaf8),param_1,*(undefined1 *)(param_1 + 0xb00),uVar4);
  }
  return;
}



// FUNCTION 142cf6c10 FUN_142cf6c10 body=381 status=ok
// SIG undefined FUN_142cf6c10(void)

void FUN_142cf6c10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_14233f450();
  if (iVar2 == 3) {
    lVar1 = *(longlong *)(param_2 + 0x28);
    if (lVar1 == 0) {
      FUN_14248ba60();
      FUN_14248ba60(param_1 + 0x274,param_1 + 0x2614);
      FUN_14248ba60(param_1 + 0x13ac,param_1 + 0x25d8);
      FUN_14248ba60(param_1 + 0x13b8,param_1 + 0x25ec);
      FUN_14248ba60(param_1 + 0x145c,param_1 + 0x2628);
      FUN_14248ba60(param_1 + 0x1480,param_1 + 0x263c);
    }
    else {
      FUN_142dc55a0(lVar1 + 0x30,param_1 + 0x298,param_1 + 0x2600);
      FUN_142dc55a0(lVar1 + 0x30,param_1 + 0x274,param_1 + 0x2614);
      FUN_142dc55a0(lVar1 + 0x38,param_1 + 0x13ac,param_1 + 0x25d8);
      lVar3 = 0x58;
      if (*(char *)(lVar1 + 0x60) == '\0') {
        lVar3 = 0x38;
      }
      FUN_142dc55a0(lVar3 + lVar1,param_1 + 0x13b8,param_1 + 0x25ec);
      if (*(char *)(lVar1 + 0x48) != '\0') {
        FUN_142dc55a0(lVar1 + 0x40,param_1 + 0x145c,param_1 + 0x2628);
      }
      if (*(char *)(lVar1 + 0x54) != '\0') {
        FUN_142dc55a0(lVar1 + 0x4c,param_1 + 0x1480,param_1 + 0x263c);
      }
    }
  }
  return;
}



// FUNCTION 142cf6d90 FUN_142cf6d90 body=803 status=ok
// SIG undefined FUN_142cf6d90(void)

void FUN_142cf6d90(longlong *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  ulonglong local_d8;
  float local_d0;
  undefined1 local_c8 [4];
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 local_9c;
  float local_94;
  undefined1 local_90;
  undefined1 local_88 [4];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  float local_54;
  undefined1 local_50;
  undefined1 local_48 [8];
  float local_40;
  
  if ((longlong *)param_1[0x1fb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1fb] + 0x9d8))();
  }
  *(byte *)((longlong)param_1 + 0x137c) = *(byte *)((longlong)param_1 + 0x137c) & 0xfe;
  iVar3 = FUN_14233f450(param_1);
  if (iVar3 < 2) {
    if ((iVar3 == 1) && (*(char *)((longlong)param_1 + 0x13a9) == '\0')) {
      (**(code **)(*param_1 + 0xbe8))(param_1);
    }
  }
  else {
    FUN_142cfbc30(param_1);
    if ((param_1[0x26b] != 0) && (param_1[0x26c] != 0)) {
      pfVar4 = (float *)(**(code **)(*(longlong *)param_1[0x26c] + 0x18))
                                  ((longlong *)param_1[0x26c],local_48);
      fVar1 = pfVar4[1];
      fVar2 = *pfVar4;
      fVar5 = fVar2 * fVar2 + fVar1 * fVar1;
      if (fVar5 == 1.0) {
        fVar6 = fVar1;
        local_d8._0_4_ = fVar2;
        local_d0 = 0.0;
        if (pfVar4[2] == 0.0) {
          local_d8._0_4_ = (float)*(undefined8 *)pfVar4;
          fVar6 = (float)((ulonglong)*(undefined8 *)pfVar4 >> 0x20);
          local_d0 = pfVar4[2];
        }
      }
      else {
        fVar6 = DAT_1468b5d94;
        local_d8._0_4_ = DAT_1468b5d90;
        local_d0 = DAT_1468b5d98;
        if (1e-08 <= fVar5) {
          auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
          fVar6 = auVar7._0_4_;
          fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
          fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
          local_d8._0_4_ = fVar2 * fVar6;
          fVar6 = fVar1 * fVar6;
          local_d0 = 0.0;
        }
      }
      local_d0 = -local_d0;
      local_94 = DAT_1468b5d98;
      local_c4 = 0xffffffff;
      uStack_bc = 0xffffffff;
      local_c8[0] = 0;
      local_9c = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_d8 = CONCAT44(fVar6,(float)local_d8) ^ 0x8000000080000000;
      local_b4 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      local_90 = 0;
      local_40 = local_d0;
      FUN_142ccf010(local_c8,&local_d8);
      if (param_1[0x1fb] != 0) {
        local_88[0] = local_c8[0];
        local_84 = (undefined4)local_c4;
        local_80 = local_c4._4_4_;
        local_7c = (undefined4)uStack_bc;
        local_78 = uStack_bc._4_4_;
        local_6c = uStack_ac;
        local_74 = local_b4;
        local_68 = CONCAT44(uStack_a4,uStack_a8);
        local_60 = uStack_a0;
        local_54 = local_94;
        local_50 = local_90;
        local_5c = local_9c;
        FUN_142ccf650(param_1[0x1fb] + 0xbe0,0,local_88);
        if (param_1[0x1fb] != 0) {
          local_88[0] = local_c8[0];
          local_84 = (undefined4)local_c4;
          local_80 = local_c4._4_4_;
          local_7c = (undefined4)uStack_bc;
          local_78 = uStack_bc._4_4_;
          local_6c = uStack_ac;
          local_74 = local_b4;
          local_68 = CONCAT44(uStack_a4,uStack_a8);
          local_60 = uStack_a0;
          local_54 = local_94;
          local_50 = local_90;
          local_5c = local_9c;
          FUN_142ccf650(param_1[0x1fb] + 0xbe0,1,local_88);
        }
      }
    }
  }
  if ((char)param_1[0x274] == '\x03') {
    *(undefined1 *)((longlong)param_1 + 0x265c) = 1;
  }
  return;
}



// FUNCTION 142cf70c0 FUN_142cf70c0 body=136 status=ok
// SIG undefined FUN_142cf70c0(void)

void FUN_142cf70c0(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(longlong **)(param_1 + 0xfd8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xfd8) + 0x9e0))();
    if (*(longlong **)(param_1 + 0xfd8) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0xfd8) + 0x778))();
      if (cVar1 != '\0') {
        *(byte *)(param_1 + 0x137c) = *(byte *)(param_1 + 0x137c) & 0xfd;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x265c) = 0;
  *(byte *)(param_1 + 0x137c) = *(byte *)(param_1 + 0x137c) & 0xfa;
  iVar2 = FUN_14233f450(param_1);
  if (1 < iVar2) {
    FUN_142cfbc30(param_1);
    FUN_142ce6360(param_1,0);
    FUN_142ce6360(param_1,1);
    return;
  }
  return;
}



// FUNCTION 142cf7150 FUN_142cf7150 body=151 status=ok
// SIG undefined FUN_142cf7150(void)

void FUN_142cf7150(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_142344560();
  bVar3 = false;
  *(int *)(param_1 + 0x89c) = *(int *)(param_1 + 0x89c) + 1;
  iVar6 = *(int *)(param_1 + 0x89c);
  iVar5 = *(int *)(param_1 + 0x890) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x888);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_142cf71ad:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))();
        if (cVar4 == '\0') goto LAB_142cf71ad;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x89c);
  }
  *(int *)(param_1 + 0x89c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x888),0);
  }
  return;
}



// FUNCTION 142cf71f0 FUN_142cf71f0 body=31 status=ok
// SIG undefined FUN_142cf71f0(void)

void FUN_142cf71f0(longlong param_1)

{
  FUN_142344780();
  FItemComparisonDetails::Reset(param_1 + 0x2568);
  return;
}



// FUNCTION 142cf7210 FUN_142cf7210 body=25 status=ok
// SIG undefined FUN_142cf7210(void)

void FUN_142cf7210(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xfd8) != 0) {
    FUN_142cc97a0(*(longlong *)(param_1 + 0xfd8) + 0xbe0);
    return;
  }
  return;
}



// FUNCTION 142cf7230 FUN_142cf7230 body=46 status=ok
// SIG undefined FUN_142cf7230(void)

void FUN_142cf7230(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x88) = *param_2;
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x98) = param_2[2];
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)(param_1 + 0xa8) = param_2[4];
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  *(undefined8 *)(param_1 + 0xb8) = param_2[6];
  return;
}



// FUNCTION 142cf7260 FUN_142cf7260 body=46 status=ok
// SIG undefined FUN_142cf7260(void)

void FUN_142cf7260(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 200) = *param_2;
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0xd8) = param_2[2];
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)(param_1 + 0xe8) = param_2[4];
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  *(undefined8 *)(param_1 + 0xf8) = param_2[6];
  return;
}



// FUNCTION 142cf7290 SetHeadTrackingEnforced body=7 status=ok
// SIG undefined SetHeadTrackingEnforced(void)

void FHeadMountedDisplayBase::SetHeadTrackingEnforced(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xc0) = param_2;
  return;
}



// FUNCTION 142cf72a0 FUN_142cf72a0 body=105 status=ok
// SIG undefined FUN_142cf72a0(void)

void FUN_142cf72a0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ce6e70(param_1,param_2,2);
  FUN_142ce72b0(param_1,param_2,2);
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 != 3) {
    if (param_2 == 0) {
      local_10 = 0;
    }
    else {
      local_10 = *(undefined8 *)(param_2 + 0x490);
    }
    local_18 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x3c0,&local_18);
  }
  return;
}



// FUNCTION 142cf7310 FUN_142cf7310 body=203 status=ok
// SIG undefined FUN_142cf7310(void)

void FUN_142cf7310(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *local_18;
  longlong local_10;
  
  if (param_2 != (longlong *)0x0) {
    AHeoCon::GetPrivateStaticClass();
  }
  FUN_142ce72b0(param_1,param_2,1);
  if (((*(uint *)(param_1 + 0x544) & 0x100) != 0) && (*(longlong *)(param_1 + 0x408) != 0)) {
    FUN_142d6e060(*(longlong *)(param_1 + 0x408),*(undefined8 *)(param_1 + 0x18));
  }
  FUN_142ce7230(param_1,param_2);
  if (param_2 != (longlong *)0x0) {
    uVar2 = FUN_142e39920();
    lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x4b4) = *(uint *)(lVar3 + 0x4b4) | 0x100;
    }
  }
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 != 3) {
    if (param_2 == (longlong *)0x0) {
      local_10 = 0;
    }
    else {
      local_10 = param_2[0x92];
    }
    local_18 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x3b0,&local_18);
  }
  return;
}



// FUNCTION 142cf73e0 FUN_142cf73e0 body=162 status=ok
// SIG undefined FUN_142cf73e0(void)

void FUN_142cf73e0(longlong *param_1,undefined8 param_2,char param_3,char param_4)

{
  while (param_3 != param_4) {
    if (param_4 == '\0') {
      (**(code **)(*param_1 + 0x490))(param_1,param_2);
      param_4 = '\x01';
    }
    else if (param_4 == '\x01') {
      (**(code **)(*param_1 + 0x498))(param_1,param_2);
      param_4 = '\x02';
    }
    else if (param_4 == '\x02') {
      (**(code **)(*param_1 + 0x4a0))(param_1,param_2);
      param_4 = '\x03';
    }
    else if (param_4 == '\x03') {
      (**(code **)(*param_1 + 0x4a8))(param_1,param_2);
      param_4 = '\0';
    }
    else {
      param_4 = '\0';
    }
  }
  return;
}



// FUNCTION 142cf7490 FUN_142cf7490 body=160 status=ok
// SIG undefined FUN_142cf7490(void)

void FUN_142cf7490(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *local_18;
  longlong local_10;
  
  FUN_142ce6e70(param_1,param_2,0);
  FUN_142ce72b0(param_1,param_2,0);
  FUN_142ce7430(param_1,param_2,0);
  if (param_2 != (longlong *)0x0) {
    uVar2 = FUN_142e39920();
    lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
    if (lVar3 != 0) {
      *(uint *)(lVar3 + 0x4b4) = *(uint *)(lVar3 + 0x4b4) & 0xfffffeff;
    }
  }
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 != 3) {
    if (param_2 == (longlong *)0x0) {
      local_10 = 0;
    }
    else {
      local_10 = param_2[0x92];
    }
    local_18 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x3e0,&local_18);
  }
  return;
}



// FUNCTION 142cf7530 FUN_142cf7530 body=208 status=ok
// SIG undefined FUN_142cf7530(void)

void FUN_142cf7530(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong local_18;
  undefined8 local_10;
  
  if (param_2 != 0) {
    AHeoCon::GetPrivateStaticClass();
  }
  FUN_142ce72b0(param_1,param_2,3);
  if (((*(uint *)(param_1 + 0x544) & 0x8000) != 0) && (param_2 != 0)) {
    lVar3 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(param_2 + 0x900) != 0)) {
      *(undefined1 *)(*(longlong *)(param_2 + 0x900) + 0x838) = 0;
    }
  }
  iVar2 = FUN_14233f450(param_1);
  if (iVar2 != 3) {
    if (param_2 == 0) {
      local_10 = 0;
    }
    else {
      local_10 = *(undefined8 *)(param_2 + 0x490);
    }
    local_18 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x3d0,&local_18);
  }
  return;
}



// FUNCTION 142cf7600 FUN_142cf7600 body=716 status=ok
// SIG undefined FUN_142cf7600(void)

void FUN_142cf7600(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  longlong local_28;
  longlong local_20;
  
  cVar1 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar1 == '\0') {
    return;
  }
  if ((((char)param_1[0x49] == '\x06') && (*(char *)((longlong)param_1 + 0x249) == '\x02')) &&
     (cVar1 = FUN_142cf3330(param_1), cVar1 == '\0')) {
    if ((((char)param_1[0x49] == '\x06') && (*(char *)((longlong)param_1 + 0x249) == '\x02')) &&
       ((param_1[0x1fb] != 0 && (*(char *)(param_1[0x1fb] + 0xb00) == '\x03')))) {
      return;
    }
    if ((((*(byte *)(param_1[0x44] + 0x56c) & 8) == 0) && (cVar1 = FUN_1423146e0(), cVar1 != '\0'))
       && ((*(longlong *)(param_1[0x44] + 0x4c0) != 0 &&
           ((*(uint *)(param_1[0x44] + 0x56c) & 0x200) == 0)))) {
      FUN_142357d10(param_1,param_2);
      *(undefined1 *)(param_1 + 0xf8) = 0;
      *(undefined4 *)((longlong)param_1 + 0x7c4) = 0;
      FRootMotionSourceGroup::Clear(param_1 + 0xc5);
    }
                    /* WARNING: Could not recover jumptable at 0x000142cf76e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6f8))(param_1);
    return;
  }
  if ((char)param_1[0x328] != '\0') {
    *(undefined1 *)(param_1 + 0x328) = 0;
  }
  if (((param_1[0x2ef] != 0) && ((*(byte *)((longlong)param_1 + 0x18cc) & 2) == 0)) &&
     (param_1[0x2f] != 0)) {
    FUN_142cd46d0(param_1 + 0x2ee,param_2);
  }
  if ((*(byte *)(param_1[0x44] + 0x56c) & 8) == 0) {
    bVar2 = *(byte *)(param_1 + 0x32d);
    if ((bVar2 & 8) == 0) {
      if (((bVar2 & 1) != 0) && (iVar3 = FUN_14233f450(param_1), 1 < iVar3)) {
        FUN_142cd5420(param_1 + 0x32a,param_2);
      }
    }
    else {
      *(byte *)(param_1 + 0x32d) = bVar2 & 0xf7;
      if (((longlong *)param_1[0x1fb] != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*(longlong *)param_1[0x1fb] + 0x778))(), cVar1 != '\0')) {
        FUN_142cb6f80(param_1 + 0x32a);
      }
    }
    cVar1 = FUN_1407c3030(param_1 + 0x1c1);
    if (cVar1 != '\0') {
      *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xfffff7ff;
    }
    if ((((*(byte *)(param_1 + 0x225) & 2) != 0) && ((longlong *)param_1[0x1fb] != (longlong *)0x0))
       && (cVar1 = (**(code **)(*(longlong *)param_1[0x1fb] + 0x778))(), cVar1 != '\0')) {
      if (((param_1[0x26d] != 0) && (param_1[0x26e] != 0)) &&
         ((lVar4 = param_1[0x24], lVar4 != 0 || (lVar4 = FUN_1423407b0(param_1), lVar4 != 0)))) {
        if (param_1[0x231] == 0) {
          fVar5 = 0.0;
        }
        else {
          fVar5 = *(float *)(param_1[0x231] + 0x40);
        }
        if (fVar5 + *(float *)(param_1 + 0x26f) < *(float *)(lVar4 + 0x790)) {
          param_1[0x26d] = 0;
          param_1[0x26e] = 0;
        }
      }
      if ((((char)param_1[0x49] == '\x06') && (*(char *)((longlong)param_1 + 0x249) == '\0')) &&
         (param_1[0x2f] != 0)) {
        *(byte *)((longlong)param_1 + 0x137c) = *(byte *)((longlong)param_1 + 0x137c) | 2;
      }
      else if ((param_1[0x26b] != 0) && (param_1[0x26c] != 0)) {
        local_20 = param_1[0x26c];
        local_28 = param_1[0x26b];
        bVar2 = (**(code **)(*param_1 + 3000))(param_1,&local_28);
        *(byte *)((longlong)param_1 + 0x137c) = *(byte *)((longlong)param_1 + 0x137c) & 0xfd;
        *(byte *)((longlong)param_1 + 0x137c) =
             *(byte *)((longlong)param_1 + 0x137c) | (bVar2 & 1) * '\x02';
      }
    }
  }
  FUN_142ce4c70(param_1);
  FUN_142345050(param_1,param_2);
  return;
}



// FUNCTION 142cf78d0 FUN_142cf78d0 body=124 status=ok
// SIG undefined FUN_142cf78d0(void)

void FUN_142cf78d0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  
  if ((*(char *)(param_1 + 0x540) == '\0') && (lVar1 = *(longlong *)(param_1 + 0x118), lVar1 != 0))
  {
    lVar4 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (plVar2 = *(longlong **)(param_1 + 0x410), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x778))(plVar2,lVar1);
    }
  }
  return;
}



// FUNCTION 142cf7950 FUN_142cf7950 body=908 status=ok
// SIG undefined FUN_142cf7950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cf7950(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_res10 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [32];
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  cVar5 = (**(code **)(*param_2 + 0x528))(param_2,param_3);
  if (cVar5 != '\0') {
    FUN_1422279d0(param_2,&DAT_146532190);
  }
  lVar2 = *(longlong *)(param_3 + 0x168);
  lVar6 = FUN_14222b250(param_2,*(undefined8 *)(param_4 + 8),0);
  if (lVar6 == 0) {
    return;
  }
  if (lVar2 == 0) {
    return;
  }
  FUN_142d06680(param_1,param_3,1);
  local_res10[0] = DAT_146532184;
  if (*(char *)(param_4 + 1) != '\0') {
    local_res10[0] = DAT_146532180;
  }
  if ((*(longlong *)(lVar2 + 400) == lVar6) &&
     (*(longlong *)(lVar2 + 0x198) == *(longlong *)(param_4 + 8))) {
    if (*(char *)(param_4 + 1) == '\0') {
      fVar9 = *(float *)(lVar2 + 0x1f8);
      fVar11 = (float)(int)(fVar9 * 0.0027777778) * 360.0;
      if (ABS(fVar9) < ABS(fVar11)) {
        fVar11 = fVar9;
      }
      fVar9 = fVar9 - fVar11;
      if (fVar9 < 0.0) {
        fVar9 = fVar9 + 360.0;
      }
      if (fVar9 == 0.0) {
        fVar9 = *(float *)(lVar2 + 0x1fc);
        fVar11 = (float)(int)(fVar9 * 0.0027777778) * 360.0;
        if (ABS(fVar9) < ABS(fVar11)) {
          fVar11 = fVar9;
        }
        fVar9 = fVar9 - fVar11;
        if (fVar9 < 0.0) {
          fVar9 = fVar9 + 360.0;
        }
        if (fVar9 == 0.0) {
          fVar9 = *(float *)(lVar2 + 0x200);
          fVar11 = (float)(int)(fVar9 * 0.0027777778) * 360.0;
          if (ABS(fVar9) < ABS(fVar11)) {
            fVar11 = fVar9;
          }
          fVar9 = fVar9 - fVar11;
          if (fVar9 < 0.0) {
            fVar9 = fVar9 + 360.0;
          }
          if (fVar9 == 0.0) goto LAB_142cf7b69;
        }
      }
      local_58 = *(undefined8 *)(lVar2 + 0x1ec);
      uStack_50 = CONCAT44(uStack_50._4_4_,*(undefined4 *)(lVar2 + 500));
      FUN_142397be0(lVar2,&local_58,&DAT_1464aa810,0,0,1);
    }
  }
  else {
    FUN_142382f60(lVar2,lVar6,local_res10,*(undefined8 *)(param_4 + 8));
  }
LAB_142cf7b69:
  FUN_142ceca90(param_4,&local_58,param_3,param_2);
  if (*(char *)(param_4 + 1) == '\0') {
    pfVar1 = (float *)(lVar2 + 0x280);
    local_48 = local_58;
    local_40 = (undefined4)uStack_50;
    if (((*(float *)(lVar2 + 0x1f8) != *pfVar1) ||
        (*(float *)(lVar2 + 0x1fc) != *(float *)(lVar2 + 0x284))) ||
       (*(float *)(lVar2 + 0x200) != *(float *)(lVar2 + 0x288))) {
      local_58 = *(undefined8 *)*(undefined1 (*) [12])(lVar2 + 0x1f8);
      auVar8._12_4_ = 0;
      auVar8._0_12_ = *(undefined1 (*) [12])(lVar2 + 0x1f8);
      fVar9 = (float)DAT_146b315f0;
      fVar11 = DAT_146b315f0._4_4_;
      fVar3 = DAT_146b315f0._8_4_;
      auVar8 = divps(auVar8,_DAT_146b315f0);
      fVar12 = (float)local_58 - (float)(int)auVar8._0_4_ * fVar9;
      fVar13 = (float)((ulonglong)local_58 >> 0x20) - (float)(int)auVar8._4_4_ * fVar11;
      fVar14 = *(float *)(lVar2 + 0x200) - (float)(int)auVar8._8_4_ * fVar3;
      fVar12 = (float)(((uint)(fVar12 + fVar9) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                      (uint)(fVar12 + fVar9));
      fVar13 = (float)(((uint)(fVar13 + fVar11) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                      (uint)(fVar13 + fVar11));
      fVar14 = (float)(((uint)(fVar14 + fVar3) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                      (uint)(fVar14 + fVar3));
      uVar10 = ((uint)(fVar14 - fVar3) ^ (uint)fVar14) & -(uint)(fRam0000000146b315e8 < fVar14) ^
               (uint)fVar14;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar10);
      *(ulonglong *)pfVar1 =
           CONCAT44(((uint)(fVar13 - fVar11) ^ (uint)fVar13) &
                    -(uint)(fRam0000000146b315e4 < fVar13) ^ (uint)fVar13,
                    ((uint)(fVar12 - fVar9) ^ (uint)fVar12) & -(uint)(_DAT_146b315e0 < fVar12) ^
                    (uint)fVar12);
      *(uint *)(lVar2 + 0x288) = uVar10;
      puVar7 = (undefined8 *)FRotator::Quaternion(pfVar1,local_38);
      uVar4 = puVar7[1];
      *(undefined8 *)(lVar2 + 0x270) = *puVar7;
      *(undefined8 *)(lVar2 + 0x278) = uVar4;
    }
    local_58 = *(undefined8 *)(lVar2 + 0x270);
    uStack_50 = *(undefined8 *)(lVar2 + 0x278);
    FUN_142397be0(lVar2,&local_48,&local_58,0,0,0);
  }
  return;
}



// FUNCTION 142cf7ce0 FUN_142cf7ce0 body=279 status=ok
// SIG undefined FUN_142cf7ce0(void)

void FUN_142cf7ce0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong local_28;
  float fStack_20;
  float fStack_1c;
  undefined1 local_18 [8];
  undefined4 local_10;
  
  if (param_2 != 0) {
    FUN_142d06680(param_1,param_2,0);
    FUN_1422279d0(param_2,&DAT_146532190);
    uVar4 = FUN_14223c850(param_2,param_3,0,0,1);
    lVar1 = *(longlong *)(param_2 + 0x168);
    if (lVar1 == 0) {
      uVar7 = (uint)((ulonglong)DAT_1468b5da0 >> 0x20);
    }
    else {
      fVar3 = *(float *)(lVar1 + 0x210);
      local_28 = *(longlong *)(lVar1 + 0x210);
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
        puVar6 = (undefined8 *)FQuat::Rotator(&local_28,local_18);
        *(undefined8 *)(lVar1 + 0x260) = *puVar6;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar6 + 1);
      }
      uVar7 = (uint)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
    }
    local_10 = 0;
    local_28 = (ulonglong)uVar7 << 0x20;
    fStack_20 = 0.0;
    AActor::SetActorRotation(param_2,&local_28,1);
  }
  return;
}



// FUNCTION 142cf7e00 FUN_142cf7e00 body=1184 status=ok
// SIG undefined FUN_142cf7e00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cf7e00(longlong param_1,longlong *param_2,char param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  float fVar14;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  longlong *local_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [16];
  longlong *local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  *(bool *)(param_1 + 0x41a) = *(char *)(param_4 + 0x10) == '\0';
  pcVar12 = (char *)(param_4 + 0x18);
  if (*(char *)(param_4 + 0x12) == '\0') {
    pcVar12 = (char *)(param_1 + 0x440);
  }
  local_108 = param_2;
  if (*(char *)(param_4 + 0x11) == '\0') {
    if (param_3 == '\0') {
      if (((*pcVar12 == '\0') || (*(longlong *)(param_1 + 0x118) == 0)) ||
         (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x118), lVar5 == 0)) {
        lVar5 = *(longlong *)(param_1 + 0x118);
      }
      lVar9 = *(longlong *)(param_1 + 0x408);
      goto LAB_142cf7eef;
    }
    uVar13 = *(undefined8 *)(param_1 + 0x408);
    uVar4 = FUN_142cefa50(param_1,local_e8);
    FUN_142cf7ce0(param_1,uVar13,uVar4);
  }
  else if (*(char *)(param_4 + 0x11) == '\x02') {
    if (((*pcVar12 == '\0') || (*(longlong *)(param_1 + 0x118) == 0)) ||
       (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x118), lVar9 == 0)) {
      lVar9 = *(longlong *)(param_1 + 0x118);
    }
    lVar5 = *(longlong *)(param_1 + 0x408);
LAB_142cf7eef:
    FUN_142cf7950(param_1,lVar5,lVar9,pcVar12);
  }
  if (((*(char *)(param_1 + 0x510) == '\0') || (param_3 != '\0')) &&
     ((*(longlong *)(param_1 + 0x120) != 0 || (lVar5 = FUN_1423407b0(param_1), lVar5 != 0)))) {
    FWeakObjectPtr::operator=(&local_110,param_1);
    lVar9 = 0;
    lVar5 = *param_2;
    local_118 = local_110;
    local_114 = local_10c;
    if (lVar5 != 0) {
      lVar7 = *(longlong *)(lVar5 + 8);
      lVar6 = FUN_142e219b0();
      for (; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == lVar6) {
          bVar3 = true;
          goto LAB_142cf7f94;
        }
      }
      bVar3 = false;
LAB_142cf7f94:
      lVar7 = lVar9;
      if (bVar3) {
        lVar7 = lVar5;
      }
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0x470) == '\0')) {
        *(longlong *)(param_1 + 0x560) = *param_2;
        plVar8 = (longlong *)param_2[1];
        plVar10 = *(longlong **)(param_1 + 0x568);
        if (plVar8 != plVar10) {
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
            UNLOCK();
            plVar10 = *(longlong **)(param_1 + 0x568);
          }
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
          *(longlong **)(param_1 + 0x568) = plVar8;
        }
        lVar5 = *param_2;
        plVar8 = (longlong *)FMemory::Realloc(0,0x20);
        local_d8 = plVar8;
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = (longlong)&PTR_GetPoolName_14585dbb8;
          *(undefined4 *)(plVar8 + 1) = local_118;
          *(undefined4 *)((longlong)plVar8 + 0xc) = local_114;
          *(char *)(plVar8 + 2) = param_3;
          lVar9 = FDelegateHandle::GenerateNewID();
          plVar8[3] = lVar9;
          *plVar8 = (longlong)&PTR_GetPoolName_14585dc00;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar5 + 0x58,1);
          plVar10 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,local_100);
          iVar2 = *(int *)(lVar5 + 0x60);
          lVar9 = *plVar10;
          *(int *)(lVar5 + 0x60) = iVar2 + 1;
          if (*(int *)(lVar5 + 100) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar5 + 0x58,iVar2);
          }
          puVar11 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar5 + 0x58));
          *puVar11 = plVar8;
          *(undefined4 *)(puVar11 + 1) = 2;
          param_2 = local_108;
        }
        *(longlong *)(param_1 + 0x558) = lVar9;
        goto LAB_142cf823a;
      }
    }
    fVar14 = (float)(**(code **)(*(longlong *)*param_2 + 0x60))();
    if (fVar14 <= 1.1754944e-38) {
      fVar14 = 1.1754944e-38;
    }
    plVar8 = (longlong *)FMemory::Realloc(0,0x20);
    local_f8 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_GetPoolName_14585db28;
      *(undefined4 *)(plVar8 + 1) = local_118;
      *(undefined4 *)((longlong)plVar8 + 0xc) = local_114;
      *(char *)(plVar8 + 2) = param_3;
      *(undefined1 *)((longlong)plVar8 + 0x14) = 1;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar8[3] = lVar5;
      *plVar8 = (longlong)&PTR_GetPoolName_14585db70;
    }
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar5 + 400) == 0) {
      uVar13 = *(undefined8 *)(lVar5 + 0x3f8);
    }
    else {
      uVar13 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
    }
    local_c8 = 0;
    local_c0 = 0;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x30))(plVar8,&local_c8);
    }
    FWeakObjectPtr::operator=(local_b8,0);
    local_120 = 0xbf800000;
    local_128 = 0;
    local_b0 = 0;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar13,param_1 + 0x550,&local_c8,fVar14);
    if (local_68 != 0) {
      plVar10 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar10 = local_78;
      }
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x10))(plVar10,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8,0);
      local_f8 = (longlong *)FMemory::Realloc(plVar8,0,0);
      if (local_f8 != (longlong *)0x0) {
        FMemory::Free(local_f8);
      }
    }
  }
LAB_142cf823a:
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 142cf82a0 FUN_142cf82a0 body=733 status=ok
// SIG undefined FUN_142cf82a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cf82a0(longlong *param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [12];
  float local_ac;
  undefined1 local_8c [132];
  
  if ((char)param_1[0x49] == '\x06') {
    if ((*(char *)((longlong)param_1 + 0x249) == '\0') && (param_1[0x2f] != 0)) {
      FUN_142cf8dc0();
      return;
    }
    if (*(char *)((longlong)param_1 + 0x249) == '\x01') {
      AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
      return;
    }
    if (*(char *)((longlong)param_1 + 0x249) == '\x02') {
      FUN_142cfa050(param_1);
      return;
    }
    if (*(char *)((longlong)param_1 + 0x249) == '\x04') {
      if ((1e-06 <= param_2) && (param_1[0x2f] != 0)) {
        *(undefined8 *)((longlong)param_1 + 0x18c) = _DAT_1468b5d90;
        *(undefined4 *)((longlong)param_1 + 0x194) = DAT_1468b5d98;
        if ((param_1[0x2ef] == 0) || ((*(byte *)((longlong)param_1 + 0x18cc) & 2) != 0)) {
          FUN_14232e840(param_1);
        }
        else {
          *(longlong *)((longlong)param_1 + 0x18c) = param_1[0x30c];
          *(int *)((longlong)param_1 + 0x194) = (int)param_1[0x30d];
        }
        if (((*(float *)((longlong)param_1 + 0x18c) != 0.0) || (*(float *)(param_1 + 0x32) != 0.0))
           || (*(float *)((longlong)param_1 + 0x194) != 0.0)) {
          *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xffffffdf;
          local_e8 = param_2 * *(float *)((longlong)param_1 + 0x18c);
          lVar1 = param_1[0x2f];
          local_d8 = *(undefined8 *)(lVar1 + 0x220);
          uStack_d0 = *(undefined8 *)(lVar1 + 0x228);
          local_e4 = param_2 * *(float *)(param_1 + 0x32);
          local_e0 = param_2 * *(float *)((longlong)param_1 + 0x194);
          _guard_xfg_dispatch_icall_nop(local_b8,0,0x90);
          local_ac = 1.0;
          local_c8 = *(undefined4 *)(lVar1 + 0x210);
          uStack_c4 = *(undefined4 *)(lVar1 + 0x214);
          uStack_c0 = *(undefined4 *)(lVar1 + 0x218);
          uStack_bc = *(undefined4 *)(lVar1 + 0x21c);
          FUN_1423755e0(param_1,&local_e8,&local_c8,1,local_b8,0);
          if (local_ac < 1.0) {
            (**(code **)(*param_1 + 0x468))(param_1,local_b8,param_2,&local_e8);
            (**(code **)(*param_1 + 0x4a8))(param_1,&local_e8,1.0 - local_ac,local_8c,local_b8,1);
          }
          if ((*(byte *)((longlong)param_1 + 0x4b4) & 0x20) == 0) {
            lVar1 = param_1[0x2f];
            param_2 = 1.0 / param_2;
            fVar2 = *(float *)(lVar1 + 0x228);
            *(ulonglong *)((longlong)param_1 + 0x18c) =
                 CONCAT44((*(float *)(lVar1 + 0x224) - local_d8._4_4_) * param_2,
                          (*(float *)(lVar1 + 0x220) - (float)local_d8) * param_2);
            *(float *)((longlong)param_1 + 0x194) = (fVar2 - (float)uStack_d0) * param_2;
          }
        }
      }
      return;
    }
  }
  FUN_142345a90(param_1);
  return;
}



// FUNCTION 142cf8580 FUN_142cf8580 body=2100 status=ok
// SIG undefined FUN_142cf8580(void)

void FUN_142cf8580(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 in_stack_fffffffffffffe38;
  undefined4 uVar14;
  undefined8 local_1b8;
  float local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_198;
  float fStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_168;
  float local_164;
  float local_160;
  undefined8 local_158;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  float local_120;
  float local_11c;
  float local_118;
  undefined8 local_110;
  float local_100;
  undefined1 local_f8 [12];
  float local_ec;
  undefined1 local_cc [20];
  float local_b8;
  
  fVar13 = (float)param_2;
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffe38 >> 0x20);
  if ((((param_1[0x2f] == 0) || (param_1[0x41f] == 0)) ||
      (*(char *)((longlong)param_1 + 0x221c) != '\0')) ||
     ((param_1[0x2ef] != 0 && ((*(byte *)((longlong)param_1 + 0x18cc) & 2) == 0)))) {
    FUN_142346d90();
    return;
  }
  if (fVar13 < 1e-06) {
    return;
  }
  FUN_14234cf40();
  cVar2 = (**(code **)(*param_1 + 0xa60))(param_1);
  if ((cVar2 == '\0') &&
     (cVar2 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5), cVar2 == '\0')) {
    if (((*(uint *)((longlong)param_1 + 0x4b4) & 0x400) != 0) &&
       (((*(float *)(param_1 + 0x6a) == 0.0 && (*(float *)((longlong)param_1 + 0x354) == 0.0)) &&
        (*(float *)(param_1 + 0x6b) == 0.0)))) {
      *(ulonglong *)((longlong)param_1 + 0x18c) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      *(float *)((longlong)param_1 + 0x194) = DAT_1468b5d98;
    }
    fVar12 = *(float *)((longlong)param_1 + 0x2104);
    lVar3 = (**(code **)(*param_1 + 0x440))(param_1);
    lVar5 = *param_1;
    fVar11 = *(float *)(lVar3 + 0x498) * 0.5;
    uVar6 = (**(code **)(lVar5 + 0x6c0))(param_1);
    if (fVar11 <= fVar12) {
      fVar11 = fVar12;
    }
    (**(code **)(lVar5 + 0x688))(param_1,fVar13,fVar11,0,CONCAT44(uVar14,uVar6));
  }
  FUN_14232e840(param_1,fVar13);
  lVar5 = param_1[0x2f];
  *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xffffffdf;
  if (lVar5 == 0) {
    local_1a0 = DAT_1466ad138;
    puVar4 = &local_1a8;
    local_1a8 = DAT_1466ad130;
  }
  else {
    local_188 = *(undefined8 *)(lVar5 + 0x220);
    puVar4 = &local_188;
    local_180 = *(float *)(lVar5 + 0x228) - *(float *)(lVar5 + 0x1e4);
  }
  uVar1 = *puVar4;
  fVar11 = (float)uVar1;
  fVar12 = *(float *)(puVar4 + 1);
  local_138 = 0;
  local_168 = fVar13 * *(float *)((longlong)param_1 + 0x18c) + fVar11;
  local_160 = fVar13 * *(float *)((longlong)param_1 + 0x194) + fVar12;
  local_188._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  local_164 = fVar13 * *(float *)(param_1 + 0x32) + local_188._4_4_;
  local_144 = DAT_1468b5d94;
  local_148 = DAT_1468b5d90;
  local_140 = DAT_1468b5d98;
  local_188 = uVar1;
  local_180 = fVar12;
  cVar2 = (**(code **)(*(longlong *)param_1[0x41f] + 0x430))
                    ((longlong *)param_1[0x41f],&local_168,&local_148);
  if (cVar2 == '\0') {
    return;
  }
  _guard_xfg_dispatch_icall_nop(local_f8,0,0x90);
  lVar5 = param_1[0x2f];
  local_178 = local_148 - fVar11;
  local_174 = local_144 - local_188._4_4_;
  local_ec = 1.0;
  local_170 = local_140 - fVar12;
  local_198 = *(undefined8 *)(lVar5 + 0x210);
  fStack_190 = *(float *)(lVar5 + 0x218);
  uStack_18c = *(undefined4 *)(lVar5 + 0x21c);
  FUN_1423755e0(param_1,&local_178,&local_198,1,local_f8,0);
  if (1.0 <= local_ec) goto LAB_142cf8c4d;
  fVar8 = *(float *)((longlong)param_1 + 0x194);
  local_130 = 0;
  local_128 = 0xbf800000;
  fVar7 = *(float *)((longlong)param_1 + 0x18c) * *(float *)((longlong)param_1 + 0x18c) +
          *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32) + fVar8 * fVar8;
  if (fVar7 == 1.0) {
    local_1a8 = *(undefined8 *)((longlong)param_1 + 0x18c);
    local_1a0 = *(float *)((longlong)param_1 + 0x194);
    fVar9 = local_1a0;
  }
  else {
    fVar9 = DAT_1468b5d98;
    if (1e-08 <= fVar7) {
      auVar10 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar9 = auVar10._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar7 * 0.5 * fVar9 * fVar9);
      fVar9 = fVar8 * (fVar9 + fVar9 * (0.5 - fVar7 * 0.5 * fVar9 * fVar9));
    }
  }
  if (((0.2 <= ABS(local_b8)) || (0.5 <= fVar9 * -1.0)) ||
     ((fVar9 * -1.0 <= -0.2 ||
      (cVar2 = (**(code **)(*param_1 + 0x6c8))(param_1,local_f8), cVar2 == '\0')))) {
LAB_142cf8ae3:
    (**(code **)(*param_1 + 0x468))(param_1,local_f8,param_2,&local_178);
    (**(code **)(*param_1 + 0x4a8))(param_1,&local_178,1.0 - local_ec,local_cc,local_f8,1);
    lVar5 = param_1[0x2f];
  }
  else {
    lVar5 = param_1[0x2f];
    if (lVar5 == 0) {
      local_1b0 = DAT_1466ad138;
    }
    else {
      local_1b0 = *(float *)(lVar5 + 0x228) - *(float *)(lVar5 + 0x1e4);
    }
    local_100 = local_1b0;
    fVar8 = 1.0 - local_ec;
    local_1b0 = local_170 * fVar8;
    local_1b8 = CONCAT44(local_174 * fVar8,local_178 * fVar8);
    cVar2 = (**(code **)(*param_1 + 0x6d0))(param_1,&local_130,&local_1b8,local_f8,0);
    if (cVar2 == '\0') goto LAB_142cf8ae3;
    lVar5 = param_1[0x2f];
    if (lVar5 == 0) {
      local_1b8 = DAT_1466ad130;
      local_1b0 = DAT_1466ad138;
    }
    else {
      local_1b8 = *(undefined8 *)(lVar5 + 0x220);
      local_1b0 = *(float *)(lVar5 + 0x228) - *(float *)(lVar5 + 0x1e4);
    }
    fStack_190 = local_1b0;
    local_198 = local_1b8;
    fVar12 = (fVar12 - local_100) + local_1b0;
  }
  local_120 = DAT_1468b5d90;
  local_118 = DAT_1468b5d98;
  local_11c = DAT_1468b5d94;
  local_110 = 0;
  if (lVar5 == 0) {
    local_198 = DAT_1466ad130;
    puVar4 = &local_198;
    fStack_190 = DAT_1466ad138;
  }
  else {
    puVar4 = &local_1b8;
    local_1b8 = *(undefined8 *)(lVar5 + 0x220);
    local_1b0 = *(float *)(lVar5 + 0x228) - *(float *)(lVar5 + 0x1e4);
  }
  local_158 = *puVar4;
  local_150 = *(float *)(puVar4 + 1);
  (**(code **)(*(longlong *)param_1[0x41f] + 0x430))
            ((longlong *)param_1[0x41f],&local_158,&local_120);
  local_1a0 = local_118 - local_150;
  local_1a8 = CONCAT44(local_11c - local_158._4_4_,local_120 - (float)local_158);
  if (((local_120 - (float)local_158 != 0.0) || (local_11c - local_158._4_4_ != 0.0)) ||
     (local_1a0 != 0.0)) {
    lVar5 = param_1[0x2f];
    local_198 = *(undefined8 *)(lVar5 + 0x210);
    fStack_190 = *(float *)(lVar5 + 0x218);
    uStack_18c = *(undefined4 *)(lVar5 + 0x21c);
    FUN_1423755e0(param_1,&local_1a8,&local_198,1,local_f8,0);
  }
LAB_142cf8c4d:
  if ((((*(byte *)((longlong)param_1 + 0x4b4) & 0x20) == 0) &&
      (cVar2 = (**(code **)(*param_1 + 0xa60))(param_1), cVar2 == '\0')) &&
     (cVar2 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5), cVar2 == '\0')) {
    lVar5 = param_1[0x2f];
    if (lVar5 == 0) {
      fStack_190 = DAT_1466ad138;
      puVar4 = &local_198;
      local_198 = DAT_1466ad130;
    }
    else {
      local_1a8 = *(undefined8 *)(lVar5 + 0x220);
      puVar4 = &local_1a8;
      local_1a0 = *(float *)(lVar5 + 0x228) - *(float *)(lVar5 + 0x1e4);
    }
    fVar8 = *(float *)(puVar4 + 1);
    fVar13 = 1.0 / fVar13;
    *(ulonglong *)((longlong)param_1 + 0x18c) =
         CONCAT44(((float)((ulonglong)*puVar4 >> 0x20) - ((local_144 - local_164) + local_188._4_4_)
                  ) * fVar13,((float)*puVar4 - ((local_148 - local_168) + fVar11)) * fVar13);
    *(float *)((longlong)param_1 + 0x194) = (fVar8 - ((local_140 - local_160) + fVar12)) * fVar13;
  }
  return;
}



// FUNCTION 142cf8dc0 FUN_142cf8dc0 body=4490 status=ok
// SIG undefined FUN_142cf8dc0(void)

void FUN_142cf8dc0(longlong *param_1,float param_2,int param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  byte *in_stack_fffffffffffffc68;
  undefined4 uVar28;
  float local_388;
  float local_384;
  float local_380;
  float local_370;
  float fStack_36c;
  float local_368;
  undefined8 local_360;
  float local_358;
  float local_350;
  float local_34c;
  float local_348;
  float local_340;
  float fStack_33c;
  float local_338;
  undefined1 local_328 [8];
  float local_320;
  undefined8 local_318;
  float local_310;
  float local_30c;
  float local_308;
  undefined8 local_300;
  float local_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  undefined4 uStack_2cc;
  undefined1 local_2c8 [8];
  float local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  byte local_2a8 [12];
  float local_29c;
  undefined1 local_27c [100];
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined1 *local_1d8 [2];
  undefined1 local_1c8 [32];
  undefined8 local_1a8;
  undefined4 local_198;
  undefined1 local_17c [20];
  byte local_168 [12];
  undefined4 local_15c;
  
  if (1e-06 <= param_2) {
    if ((param_1[0x44] == 0) ||
       ((((*(longlong *)(param_1[0x44] + 0x490) == 0 && ((*(byte *)(param_1 + 0x60) & 0x80) == 0))
         && (cVar3 = (**(code **)(*param_1 + 0xa60))(), cVar3 == '\0')) &&
        ((cVar3 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5), cVar3 == '\0' &&
         (*(char *)(param_1[0x44] + 0x128) != '\x01')))))) {
      param_1[0x6a] = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      *(float *)(param_1 + 0x6b) = DAT_1468b5d98;
      *(ulonglong *)((longlong)param_1 + 0x18c) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      *(float *)((longlong)param_1 + 0x194) = DAT_1468b5d98;
    }
    else if (*(char *)(param_1[0x44] + 0x128) == '\x01') {
      fVar13 = param_2 * *(float *)((longlong)param_1 + 0x18c);
      local_358 = param_2 * *(float *)((longlong)param_1 + 0x194);
      local_360 = CONCAT44(param_2 * *(float *)(param_1 + 0x32),fVar13);
      if ((((fVar13 != 0.0) || (param_2 * *(float *)(param_1 + 0x32) != 0.0)) || (local_358 != 0.0))
         && (lVar9 = param_1[0x2f], lVar9 != 0)) {
        _guard_xfg_dispatch_icall_nop(local_2a8,0,0x90);
        local_29c = 1.0;
        local_2d8 = *(float *)(lVar9 + 0x210);
        fStack_2d4 = *(float *)(lVar9 + 0x214);
        fStack_2d0 = *(float *)(lVar9 + 0x218);
        uStack_2cc = *(undefined4 *)(lVar9 + 0x21c);
        FUN_1423755e0(param_1,&local_360,&local_2d8,1,local_2a8,0);
      }
    }
    else {
      iVar5 = (**(code **)(*(longlong *)param_1[0x2f] + 0x4e8))();
      if ((iVar5 - 1U & 0xfffffffd) == 0) {
        cVar3 = (**(code **)(*param_1 + 0xbc0))(param_1);
        if (((cVar3 == '\0') || (param_1[0x26b] == 0)) || (param_1[0x26c] == 0)) {
          (**(code **)(*param_1 + 0x5a0))(param_1,3);
        }
        else {
          *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xffffffdf;
          if (1e-06 <= param_2) {
            plVar11 = (longlong *)0x0;
            do {
              if ((int)param_1[0x78] <= param_3) {
                return;
              }
              if (param_1[0x44] == 0) {
                return;
              }
              if ((((*(longlong *)(param_1[0x44] + 0x490) == 0) &&
                   ((*(byte *)(param_1 + 0x60) & 0x80) == 0)) &&
                  (cVar3 = (**(code **)(*param_1 + 0xa60))(param_1), cVar3 == '\0')) &&
                 ((cVar3 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5),
                  cVar3 == '\0' && (*(char *)(param_1[0x44] + 0x128) != '\x01')))) {
                return;
              }
              *(uint *)((longlong)param_1 + 0x4b4) =
                   *(uint *)((longlong)param_1 + 0x4b4) & 0xffffffdf;
              iVar5 = param_3 + 1;
              fVar13 = (float)FUN_14233ff20(param_1,param_2,iVar5);
              fVar27 = param_2 - fVar13;
              if ((*(byte *)((longlong)param_1 + 0x137c) & 1) == 0) {
                plVar6 = plVar11;
                if (param_1[0x26b] != 0) {
                  plVar6 = (longlong *)param_1[0x26c];
                }
                cVar3 = (**(code **)(*plVar6 + 0x28))();
                if (cVar3 != '\0') {
                  plVar6 = plVar11;
                  if (param_1[0x26b] != 0) {
                    plVar6 = (longlong *)param_1[0x26c];
                  }
                  (**(code **)(*plVar6 + 0x38))(plVar6,&local_370,param_1);
                  lVar9 = param_1[0x2f];
                  fVar20 = local_370 - *(float *)(lVar9 + 0x220);
                  fVar22 = fStack_36c - *(float *)(lVar9 + 0x224);
                  fVar23 = local_368 - *(float *)(lVar9 + 0x228);
                  fVar16 = fVar22 * fVar22 + fVar20 * fVar20 + fVar23 * fVar23;
                  fVar21 = fVar20;
                  fVar17 = fVar22;
                  fVar18 = fVar23;
                  if ((fVar16 != 1.0) &&
                     (fVar21 = DAT_1468b5d90, fVar17 = DAT_1468b5d94, fVar18 = DAT_1468b5d98,
                     1e-08 <= fVar16)) {
                    auVar19 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
                    fVar18 = auVar19._0_4_;
                    fVar18 = fVar18 + fVar18 * (0.5 - fVar16 * 0.5 * fVar18 * fVar18);
                    fVar18 = fVar18 + fVar18 * (0.5 - fVar16 * 0.5 * fVar18 * fVar18);
                    fVar21 = fVar18 * fVar20;
                    fVar17 = fVar18 * fVar22;
                    fVar18 = fVar18 * fVar23;
                  }
                  local_308 = *(float *)(param_1 + 0x22c);
                  local_310 = fVar21 * fVar13 * local_308;
                  local_30c = fVar17 * fVar13 * local_308;
                  local_308 = fVar18 * fVar13 * local_308;
                  if (((0.0001 < ABS(local_310)) || (0.0001 < ABS(local_30c))) ||
                     (0.0001 < ABS(local_308))) {
                    _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
                    local_15c = 0x3f800000;
                    in_stack_fffffffffffffc68 = local_168;
                    local_218 = *(undefined4 *)(lVar9 + 0x210);
                    uStack_214 = *(undefined4 *)(lVar9 + 0x214);
                    uStack_210 = *(undefined4 *)(lVar9 + 0x218);
                    uStack_20c = *(undefined4 *)(lVar9 + 0x21c);
                    FUN_1423755e0(param_1,&local_310,&local_218,0,in_stack_fffffffffffffc68,0);
                    lVar9 = param_1[0x2f];
                    fVar24 = local_370 - *(float *)(lVar9 + 0x220);
                    fVar25 = fStack_36c - *(float *)(lVar9 + 0x224);
                    fVar26 = local_368 - *(float *)(lVar9 + 0x228);
                    fVar23 = fVar25 * fVar25 + fVar24 * fVar24 + fVar26 * fVar26;
                    fVar16 = fVar24;
                    fVar20 = fVar25;
                    fVar22 = fVar26;
                    if ((fVar23 != 1.0) &&
                       (fVar16 = DAT_1468b5d90, fVar20 = DAT_1468b5d94, fVar22 = DAT_1468b5d98,
                       1e-08 <= fVar23)) {
                      auVar19 = rsqrtss(ZEXT416((uint)fVar23),ZEXT416((uint)fVar23));
                      fVar22 = auVar19._0_4_;
                      fVar22 = fVar22 + fVar22 * (0.5 - fVar23 * 0.5 * fVar22 * fVar22);
                      fVar22 = fVar22 + fVar22 * (0.5 - fVar23 * 0.5 * fVar22 * fVar22);
                      fVar16 = fVar22 * fVar24;
                      fVar20 = fVar22 * fVar25;
                      fVar22 = fVar22 * fVar26;
                    }
                    if (0.0 < fVar21 * fVar16 + fVar17 * fVar20 + fVar18 * fVar22) {
                      if (((ABS(*(float *)(lVar9 + 0x220) - local_370) <= 0.0001) &&
                          (ABS(*(float *)(lVar9 + 0x224) - fStack_36c) <= 0.0001)) &&
                         (ABS(*(float *)(lVar9 + 0x228) - local_368) <= 0.0001)) {
                        *(byte *)((longlong)param_1 + 0x137c) =
                             *(byte *)((longlong)param_1 + 0x137c) | 1;
                      }
                    }
                    else {
                      local_2c0 = local_368;
                      in_stack_fffffffffffffc68 =
                           (byte *)((ulonglong)in_stack_fffffffffffffc68 & 0xffffffffffffff00);
                      FUN_1423990b0(lVar9,local_2c8,0,0,in_stack_fffffffffffffc68);
                      *(byte *)((longlong)param_1 + 0x137c) =
                           *(byte *)((longlong)param_1 + 0x137c) | 1;
                    }
                  }
                }
              }
              lVar1 = param_1[0x2f];
              lVar9 = param_1[0x6a];
              fVar21 = *(float *)(param_1 + 0x6b);
              fVar17 = *(float *)(lVar1 + 0x220);
              fStack_2d4 = *(float *)(lVar1 + 0x224);
              fStack_2d0 = *(float *)(lVar1 + 0x228);
              uStack_2cc = *(undefined4 *)(lVar1 + 0x22c);
              local_360 = lVar9;
              local_358 = fVar21;
              local_2d8 = fVar17;
              local_1f8 = fStack_2d4;
              fStack_1f4 = fStack_2d4;
              fStack_1f0 = fStack_2d4;
              fStack_1ec = fStack_2d4;
              local_1e8 = fStack_2d0;
              fStack_1e4 = fStack_2d0;
              fStack_1e0 = fStack_2d0;
              fStack_1dc = fStack_2d0;
              FUN_14234cf40(param_1);
              plVar6 = (longlong *)(**(code **)(*param_1 + 0xb90))(param_1);
              param_1[0x6a] = *plVar6;
              *(int *)(param_1 + 0x6b) = (int)plVar6[1];
              cVar3 = (**(code **)(*param_1 + 0xa60))(param_1);
              if (cVar3 == '\0') {
                cVar3 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5);
                uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffffc68 >> 0x20);
                if (cVar3 == '\0') {
                  lVar1 = *param_1;
                  uVar14 = (**(code **)(lVar1 + 0xb98))(param_1);
                  uVar15 = (**(code **)(*param_1 + 0xba0))(param_1);
                  in_stack_fffffffffffffc68 = (byte *)CONCAT44(uVar28,uVar14);
                  (**(code **)(lVar1 + 0x688))(param_1,fVar13,uVar15,0,in_stack_fffffffffffffc68);
                  puVar7 = (undefined8 *)
                           (**(code **)(*param_1 + 0xba8))
                                     (param_1,local_17c,(longlong)param_1 + 0x18c,fVar13);
                  *(undefined8 *)((longlong)param_1 + 0x18c) = *puVar7;
                  *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(puVar7 + 1);
                  (**(code **)(*param_1 + 0xbb0))(param_1);
                }
              }
              FUN_14232e840(param_1,fVar13);
              param_1[0x6a] = lVar9;
              *(float *)(param_1 + 0x6b) = fVar21;
              if ((((char)param_1[0x49] != '\x06') || (*(char *)((longlong)param_1 + 0x249) != '\0')
                  ) || (lVar9 = param_1[0x2f], lVar9 == 0)) {
                lVar9 = *param_1;
                goto LAB_142cf9e52;
              }
              local_318 = *(undefined8 *)((longlong)param_1 + 0x18c);
              fVar16 = (float)local_318;
              fVar21 = *(float *)((longlong)param_1 + 0x194);
              local_388 = fVar16 * fVar13;
              local_300._4_4_ = (float)((ulonglong)local_318 >> 0x20);
              fVar18 = local_300._4_4_;
              local_384 = local_300._4_4_ * fVar13;
              local_380 = fVar21 * fVar13;
              local_300 = local_318;
              local_2f8 = fVar21;
              param_3 = iVar5;
              if (((0.0001 < ABS(local_388)) || (0.0001 < ABS(local_384))) ||
                 (param_2 = 0.0, 0.0001 < ABS(local_380))) {
                _guard_xfg_dispatch_icall_nop(local_2a8,0,0x90);
                local_29c = 1.0;
                in_stack_fffffffffffffc68 = local_2a8;
                local_208 = *(undefined4 *)(lVar9 + 0x210);
                uStack_204 = *(undefined4 *)(lVar9 + 0x214);
                uStack_200 = *(undefined4 *)(lVar9 + 0x218);
                uStack_1fc = *(undefined4 *)(lVar9 + 0x21c);
                FUN_1423755e0(param_1,&local_388,&local_208,1,in_stack_fffffffffffffc68,0);
                fVar23 = local_358;
                fVar22 = local_360._4_4_;
                fVar20 = (float)local_360;
                bVar2 = local_380 < 0.0;
                if (((bVar2) || (param_1[0x26b] == 0)) ||
                   ((param_1[0x26c] == 0 ||
                    (cVar3 = (**(code **)(*(longlong *)param_1[0x26c] + 0x30))(), cVar3 == '\0'))))
                {
LAB_142cf987d:
                  if ((local_2a8[0] & 2) == 0) {
                    if ((local_2a8[0] & 1) == 0) goto LAB_142cf99de;
                    (**(code **)(*param_1 + 0x468))(param_1,local_2a8,fVar13);
                    if ((!bVar2) ||
                       (cVar3 = (**(code **)(*param_1 + 0x7f0))(param_1,local_2a8), cVar3 == '\0'))
                    {
                      in_stack_fffffffffffffc68 = local_2a8;
                      (**(code **)(*param_1 + 0x4a8))
                                (param_1,&local_388,1.0 - local_29c,local_27c,
                                 in_stack_fffffffffffffc68,1);
                      if (((local_2a8[0] & 1) == 0) ||
                         ((((local_2a8[0] & 2) != 0 || (!bVar2)) ||
                          (cVar3 = (**(code **)(*param_1 + 0x7f0))(param_1,local_2a8), cVar3 == '\0'
                          )))) goto LAB_142cf99de;
                    }
                    goto LAB_142cf9a87;
                  }
                  (**(code **)(*param_1 + 0x468))(param_1,local_2a8,0,&DAT_1468b5d90);
                  in_stack_fffffffffffffc68 = local_2a8;
                  (**(code **)(*param_1 + 0x4a8))
                            (param_1,&local_388,0x3f800000,local_27c,in_stack_fffffffffffffc68,1);
                  if ((local_2a8[0] & 2) != 0) {
                    uStack_2b0 = local_2a8;
                    local_1a8 = 0;
                    local_198 = 0;
                    local_2b8 = param_1;
                    puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_1c8);
                    if (puVar7 != (undefined8 *)0x0) {
                      *puVar7 = &PTR_FUN_143f77c18;
                      *(undefined4 *)(puVar7 + 1) = (undefined4)local_2b8;
                      *(undefined4 *)((longlong)puVar7 + 0xc) = local_2b8._4_4_;
                      *(undefined4 *)(puVar7 + 2) = (undefined4)uStack_2b0;
                      *(undefined4 *)((longlong)puVar7 + 0x14) = uStack_2b0._4_4_;
                    }
                    local_1d8[0] = &LAB_142ce3a40;
                    uVar8 = FUN_14247f500();
                    FUN_14247d5a0(uVar8,param_1,local_1d8);
                  }
                  if (bVar2) goto LAB_142cf9a87;
LAB_142cf99de:
                  if (((*(byte *)(param_1 + 0x60) & 0x20) != 0) && (param_1[0x30] != 0)) {
                    param_1[0x26b] = 0;
                    param_1[0x26c] = 0;
                    plVar6 = (longlong *)param_1[0x269];
                    plVar12 = plVar6 + (longlong)(int)param_1[0x26a] * 2;
                    for (; plVar6 != plVar12; plVar6 = plVar6 + 2) {
                      lVar9 = *plVar6;
                      plVar10 = plVar11;
                      if (lVar9 != 0) {
                        plVar10 = (longlong *)plVar6[1];
                      }
                      if ((plVar10 != (longlong *)0x0) &&
                         (cVar3 = (**(code **)(*plVar10 + 0x20))(plVar10,param_1[0x30]),
                         cVar3 != '\0')) {
                        param_1[0x26b] = lVar9;
                        param_1[0x26c] = (longlong)plVar10;
                        break;
                      }
                    }
                  }
                  if ((param_1[0x26b] == 0) || (param_1[0x26c] == 0)) goto LAB_142cf9a87;
                }
                else {
                  plVar6 = plVar11;
                  if (param_1[0x26b] != 0) {
                    plVar6 = (longlong *)param_1[0x26c];
                  }
                  cVar3 = (**(code **)(*plVar6 + 0x48))(plVar6,param_1);
                  if (cVar3 == '\0') goto LAB_142cf987d;
                  plVar6 = plVar11;
                  if (param_1[0x26b] != 0) {
                    plVar6 = (longlong *)param_1[0x26c];
                  }
                  (**(code **)(*plVar6 + 0x58))(plVar6,&local_340,param_1);
                  if (((local_340 == 0.0) && (fStack_33c == 0.0)) && (local_338 == 0.0))
                  goto LAB_142cf99de;
                  lVar9 = param_1[0x2f];
                  if (lVar9 == 0) {
                    local_2e4 = 0x7f7fffff;
                    puVar7 = (undefined8 *)&local_2e4;
                    local_2e0 = 0x7f7fffff;
                    local_2dc = 0x7f7fffff;
                  }
                  else {
                    puVar7 = (undefined8 *)&local_2f0;
                    local_2f0 = *(undefined4 *)(lVar9 + 0x220);
                    local_2e8 = *(undefined4 *)(lVar9 + 0x228);
                    uStack_2ec = *(undefined4 *)(lVar9 + 0x224);
                  }
                  uVar28 = *(undefined4 *)(puVar7 + 1);
                  *(undefined8 *)((longlong)param_1 + 0x1384) = *puVar7;
                  *(undefined4 *)((longlong)param_1 + 0x138c) = uVar28;
                  local_320 = local_338;
                  FUN_1423990b0(lVar9,local_328,0,0,1);
                  *(ulonglong *)((longlong)param_1 + 0x18c) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
                  fVar17 = DAT_1468b5d98;
                  *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) | 0x20
                  ;
                  *(float *)((longlong)param_1 + 0x194) = fVar17;
LAB_142cf9a87:
                  lVar9 = param_1[0x2f];
                  local_350 = *(float *)(lVar9 + 0x220);
                  local_34c = *(float *)(lVar9 + 0x224);
                  local_348 = *(float *)(lVar9 + 0x228);
                  if (fVar21 <= 0.0) {
                    uVar4 = 2;
                  }
                  else {
                    fVar17 = *(float *)(lVar9 + 0x1e0);
                    if (*(float *)(lVar9 + 0x1e0) <= *(float *)(lVar9 + 0x1dc)) {
                      fVar17 = *(float *)(lVar9 + 0x1dc);
                    }
                    fVar16 = fVar22 * fVar22 + fVar20 * fVar20;
                    if (fVar16 == 1.0) {
                      fVar24 = fVar20;
                      fVar25 = fVar22;
                      if (fVar23 != 0.0) {
LAB_142cf9b99:
                        fVar23 = 0.0;
                      }
                    }
                    else {
                      fVar24 = DAT_1468b5d90;
                      fVar25 = DAT_1468b5d94;
                      fVar23 = DAT_1468b5d98;
                      if (1e-08 <= fVar16) {
                        auVar19 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
                        fVar25 = auVar19._0_4_;
                        fVar25 = fVar25 + fVar25 * (0.5 - fVar16 * 0.5 * fVar25 * fVar25);
                        fVar25 = fVar25 + fVar25 * (0.5 - fVar16 * 0.5 * fVar25 * fVar25);
                        fVar24 = fVar20 * fVar25;
                        fVar25 = fVar22 * fVar25;
                        goto LAB_142cf9b99;
                      }
                    }
                    uVar4 = 4;
                    local_350 = fVar24 * fVar17 + local_350;
                    local_34c = fVar25 * fVar17 + local_34c;
                    local_348 = fVar23 * fVar17 + local_348;
                  }
                  *(undefined1 *)(param_1 + 0x270) = uVar4;
                  in_stack_fffffffffffffc68 = (byte *)0x0;
                  (**(code **)(*param_1 + 0x870))(param_1,&local_350,param_1 + 0x82,0,0);
                  if (((byte)(int)param_1[0x82] & 3) == 3) {
                    local_1a8 = 0;
                    local_198 = 0;
                    puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_1c8);
                    if (puVar7 != (undefined8 *)0x0) {
                      *puVar7 = &PTR_FUN_143f77b70;
                      puVar7[1] = param_1;
                    }
                    local_1d8[0] = &LAB_142ce3a70;
                    uVar8 = FUN_14247f500();
                    FUN_14247d5a0(uVar8,param_1,local_1d8);
                    uVar4 = (undefined1)param_1[0x96];
                  }
                  else {
                    uVar4 = 3;
                  }
                  (**(code **)(*param_1 + 0x5a0))(param_1,uVar4,0);
                  fVar16 = (float)local_318;
                  fVar17 = local_2d8;
                }
                if ((((char)param_1[0x49] != '\x06') ||
                    (*(char *)((longlong)param_1 + 0x249) != '\0')) ||
                   (param_2 = fVar27, param_1[0x2f] == 0)) {
                  lVar9 = param_1[0x2f];
                  fVar17 = *(float *)(lVar9 + 0x220) - fVar17;
                  fVar23 = *(float *)(lVar9 + 0x224) - local_1f8;
                  fVar24 = *(float *)(lVar9 + 0x228) - local_1e8;
                  fVar17 = (1.0 / SQRT(local_384 * local_384 + local_388 * local_388 +
                                       local_380 * local_380)) *
                           SQRT(fVar23 * fVar23 + fVar17 * fVar17 + fVar24 * fVar24);
                  if (1.0 <= fVar17) {
                    fVar17 = 1.0;
                  }
                  fVar13 = (1.0 - fVar17) * fVar13;
                  if ((char)param_1[0x274] != '\0') {
                    return;
                  }
                  fVar24 = fVar22 * fVar22 + fVar20 * fVar20;
                  fVar17 = fVar20;
                  fVar23 = fVar22;
                  if ((fVar24 != 1.0) &&
                     (fVar17 = DAT_1468b5d90, fVar23 = DAT_1468b5d94, 1e-08 <= fVar24)) {
                    auVar19 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
                    fVar23 = auVar19._0_4_;
                    fVar23 = fVar23 + fVar23 * (0.5 - fVar24 * 0.5 * fVar23 * fVar23);
                    fVar23 = fVar23 + fVar23 * (0.5 - fVar24 * 0.5 * fVar23 * fVar23);
                    fVar17 = fVar20 * fVar23;
                    fVar23 = fVar22 * fVar23;
                  }
                  lVar9 = *param_1;
                  fVar20 = fVar21;
                  if (0.0 <= fVar21) {
                    fVar20 = 0.0;
                  }
                  *(ulonglong *)((longlong)param_1 + 0x18c) =
                       CONCAT44(fVar23 * ABS(fVar21) + fVar18,fVar17 * ABS(fVar21) + fVar16);
                  *(float *)((longlong)param_1 + 0x194) = fVar20;
LAB_142cf9e52:
                  (**(code **)(lVar9 + 0x610))(param_1,fVar27 + fVar13,param_3);
                  return;
                }
              }
            } while (1e-06 <= param_2);
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0x5a0))(param_1,6);
      }
    }
  }
  return;
}



// FUNCTION 142cf9f50 FUN_142cf9f50 body=254 status=ok
// SIG undefined FUN_142cf9f50(void)

void FUN_142cf9f50(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong in_RCX;
  undefined8 local_18;
  undefined4 local_10;
  
  if (((*(byte *)(*(longlong *)(in_RCX + 0x2048) + 0x4b4) & 0x20) != 0) ||
     (1 < (ulonglong)(DAT_1468c21b0 - *(longlong *)(in_RCX + 0x20f0)))) {
    lVar1 = *(longlong *)(in_RCX + 0x178);
    *(undefined8 *)(in_RCX + 0x508) = 0;
    if (lVar1 == 0) {
      local_18 = DAT_1466ad130;
      local_10 = DAT_1466ad138;
    }
    else {
      local_18 = *(undefined8 *)(lVar1 + 0x220);
      local_10 = *(float *)(lVar1 + 0x228) - *(float *)(lVar1 + 0x1e4);
    }
    *(undefined8 *)(in_RCX + 0x4f8) = local_18;
    *(float *)(in_RCX + 0x500) = local_10;
    param_1 = local_18;
  }
  FUN_142347220(param_1,param_2);
  if ((*(char *)(in_RCX + 0x248) == '\x02') && (*(longlong *)(in_RCX + 0x220) != 0)) {
    uVar2 = FWeakObjectPtr::Get(in_RCX + 0x20c4);
                    /* WARNING: Could not recover jumptable at 0x000142cfa041. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(in_RCX + 0x220) + 0x838))(*(longlong **)(in_RCX + 0x220),uVar2,0,1)
    ;
    return;
  }
  return;
}



// FUNCTION 142cfa050 FUN_142cfa050 body=812 status=ok
// SIG undefined FUN_142cfa050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cfa050(longlong *param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if ((((((char)param_1[0x49] == '\x06') && (*(char *)((longlong)param_1 + 0x249) == '\x02')) &&
       (param_1[0x1fb] != 0)) &&
      ((*(char *)(param_1[0x1fb] + 0xb00) == '\x03' && (param_1[0x44] != 0)))) &&
     (*(longlong *)(param_1[0x44] + 0x4c0) != 0)) {
    cVar2 = FUN_1423146e0();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_1 + 0x5c0))(param_1);
      if (((cVar2 != '\0') && ((char)param_1[0xf8] != '\0')) && (0.0 < param_2)) {
        local_c0 = param_2 * *(float *)(param_1 + 0x101);
        local_c8 = CONCAT44(param_2 * *(float *)((longlong)param_1 + 0x804),
                            param_2 * *(float *)(param_1 + 0x100));
        local_98 = *(undefined8 *)(param_1[0x2f] + 0x210);
        uStack_90 = *(undefined8 *)(param_1[0x2f] + 0x218);
        if ((param_1[0x1fb] == 0) || (*(char *)(param_1[0x1fb] + 0x128) != '\x01')) {
          local_88 = param_1[0xfa];
          lStack_80 = param_1[0xfb];
          local_78 = (undefined4)param_1[0xfc];
          uStack_74 = *(undefined4 *)((longlong)param_1 + 0x7e4);
          uStack_70 = (undefined4)param_1[0xfd];
          uStack_6c = *(undefined4 *)((longlong)param_1 + 0x7ec);
          local_68 = (undefined4)param_1[0xfe];
          uStack_64 = *(undefined4 *)((longlong)param_1 + 0x7f4);
          uStack_60 = (undefined4)param_1[0xff];
          uStack_5c = *(undefined4 *)((longlong)param_1 + 0x7fc);
          (**(code **)(**(longlong **)(param_1[0x44] + 0x4c0) + 0xa80))
                    (*(longlong **)(param_1[0x44] + 0x4c0),&local_58,&local_88);
          fVar6 = local_98._4_4_ * local_58;
          fVar7 = (float)local_98 * local_58;
          fVar4 = (float)local_98 * fStack_54;
          fVar5 = local_98._4_4_ * fStack_54;
          local_98 = CONCAT44((float)uStack_90 * local_58 * fRam0000000146b31664 +
                              fStack_4c * local_98._4_4_ +
                              uStack_90._4_4_ * fStack_54 * fRam0000000146b31654 +
                              (float)local_98 * fStack_50 * fRam0000000146b31644,
                              uStack_90._4_4_ * local_58 * _DAT_146b31660 +
                              fStack_4c * (float)local_98 +
                              (float)uStack_90 * fStack_54 * _DAT_146b31650 +
                              local_98._4_4_ * fStack_50 * _DAT_146b31640);
          uStack_90 = CONCAT44(fVar7 * fRam0000000146b3166c + fStack_4c * uStack_90._4_4_ +
                               fVar5 * fRam0000000146b3165c +
                               (float)uStack_90 * fStack_50 * fRam0000000146b3164c,
                               fVar6 * fRam0000000146b31668 + fStack_4c * (float)uStack_90 +
                               fVar4 * fRam0000000146b31658 +
                               uStack_90._4_4_ * fStack_50 * fRam0000000146b31648);
        }
        lVar1 = *(longlong *)(param_1[0x44] + 0x168);
        if (lVar1 == 0) {
          local_b8 = _DAT_1468b5d90;
          local_b0 = DAT_1468b5d98;
        }
        else {
          local_b8 = *(undefined8 *)(lVar1 + 0x220);
          local_b0 = *(float *)(lVar1 + 0x228);
        }
        local_a8 = local_b8;
        local_a0 = local_b0;
        uVar3 = FUN_14247f500();
        FUN_14247ea90(uVar3);
        local_d0 = 0;
        local_d8 = 0;
        (**(code **)(*param_1 + 0x488))(param_1,&local_c8,&local_98,1);
        *(undefined1 *)(param_1 + 0xf8) = 0;
        *(undefined4 *)((longlong)param_1 + 0x7c4) = 0;
        lVar1 = *(longlong *)(param_1[0x44] + 0x168);
        if (lVar1 == 0) {
          local_c8 = _DAT_1468b5d90;
          local_c0 = DAT_1468b5d98;
        }
        else {
          local_c8 = *(undefined8 *)(lVar1 + 0x220);
          local_c0 = *(float *)(lVar1 + 0x228);
        }
        param_2 = 1.0 / param_2;
        *(ulonglong *)((longlong)param_1 + 0x18c) =
             CONCAT44(((float)((ulonglong)local_c8 >> 0x20) - local_a8._4_4_) * param_2,
                      ((float)local_c8 - (float)local_a8) * param_2);
        *(float *)((longlong)param_1 + 0x194) = (local_c0 - local_a0) * param_2;
      }
    }
  }
  return;
}



// FUNCTION 142cfa380 FUN_142cfa380 body=14 status=ok
// SIG undefined FUN_142cfa380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cfa380(longlong *param_1,float param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float *in_stack_fffffffffffffc08;
  ulonglong in_stack_fffffffffffffc10;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  longlong lStack_3a8;
  float fStack_3a0;
  longlong lStack_398;
  undefined4 uStack_390;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined8 uStack_378;
  float fStack_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined8 uStack_358;
  undefined4 uStack_350;
  longlong lStack_348;
  float fStack_340;
  longlong lStack_338;
  undefined4 uStack_330;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  undefined4 uStack_31c;
  float fStack_310;
  float fStack_304;
  undefined1 auStack_300 [24];
  float fStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  uint uStack_2c8;
  uint uStack_2c0;
  undefined8 uStack_2bc;
  undefined1 auStack_2b0 [12];
  undefined4 uStack_2a4;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_228;
  undefined1 auStack_218 [16];
  float fStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined1 auStack_1f8 [44];
  undefined1 auStack_1cc [12];
  undefined1 auStack_1c0 [88];
  undefined1 auStack_168 [76];
  float fStack_11c;
  float fStack_110;
  
  if ((char)param_1[0x96] != '\x01') {
    return;
  }
  if (1e-06 <= param_2) {
    if ((param_1[0x44] == 0) ||
       ((((*(longlong *)(param_1[0x44] + 0x490) == 0 && ((*(byte *)(param_1 + 0x60) & 0x80) == 0))
         && (cVar6 = (**(code **)(*param_1 + 0xa60))(), cVar6 == '\0')) &&
        ((cVar6 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5), cVar6 == '\0' &&
         (*(char *)(param_1[0x44] + 0x128) != '\x01')))))) {
      param_1[0x6a] = _DAT_1468b5d90;
      *(undefined4 *)(param_1 + 0x6b) = DAT_1468b5d98;
      *(longlong *)((longlong)param_1 + 0x18c) = _DAT_1468b5d90;
      *(undefined4 *)((longlong)param_1 + 0x194) = DAT_1468b5d98;
    }
    else {
      iVar8 = (**(code **)(*(longlong *)param_1[0x2f] + 0x4e8))();
      if ((iVar8 - 1U & 0xfffffffd) == 0) {
        *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xffffffdf;
        bVar5 = false;
        bVar4 = false;
joined_r0x00014234837e:
        do {
          if ((((param_2 < 1e-06) || ((int)param_1[0x78] <= param_3)) || (param_1[0x44] == 0)) ||
             ((((*(longlong *)(param_1[0x44] + 0x490) == 0 &&
                ((*(byte *)(param_1 + 0x60) & 0x80) == 0)) &&
               (cVar6 = (**(code **)(*param_1 + 0xa60))(param_1), cVar6 == '\0')) &&
              ((cVar6 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5), cVar6 == '\0'
               && (*(char *)(param_1[0x44] + 0x128) != '\x01')))))) break;
          *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xffffffdf;
          iVar8 = param_3 + 1;
          fVar19 = *(float *)((longlong)param_1 + 0x3bc);
          fVar20 = param_2;
          if ((fVar19 < param_2) &&
             ((iVar8 < (int)param_1[0x78] && (fVar20 = param_2 * 0.5, fVar19 <= param_2 * 0.5)))) {
            fVar20 = fVar19;
          }
          if (fVar20 <= 1e-06) {
            fVar20 = 1e-06;
          }
          param_2 = param_2 - fVar20;
          plVar10 = (longlong *)FUN_14233f0e0(param_1);
          if (plVar10 == (longlong *)0x0) {
            fStack_3a0 = (float)DAT_1468b5d98;
            plVar11 = &lStack_3a8;
            lStack_3a8 = _DAT_1468b5d90;
          }
          else {
            plVar11 = (longlong *)&uStack_388;
            uStack_388 = (int)plVar10[0x44];
            uStack_380 = (int)plVar10[0x45];
            uStack_384 = *(undefined4 *)((longlong)plVar10 + 0x224);
          }
          lStack_338 = *plVar11;
          puVar1 = (uint *)(param_1 + 0x82);
          uStack_330 = (undefined4)plVar11[1];
          lVar13 = param_1[0x2f];
          fStack_3c8 = *(float *)(lVar13 + 0x220);
          fStack_3c4 = *(float *)(lVar13 + 0x224);
          fStack_3c0 = *(float *)(lVar13 + 0x228);
          fStack_208 = (float)((uint)fStack_208 ^ (*puVar1 ^ (uint)fStack_208) & 7);
          uStack_200 = (undefined4)param_1[0x83];
          uStack_204 = *(undefined4 *)((longlong)param_1 + 0x414);
          FUN_140729f20(auStack_1f8);
          if ((char)param_1[0xe4] != '\0') {
            *(undefined8 *)((longlong)param_1 + 0x18c) = *(undefined8 *)((longlong)param_1 + 0x714);
            *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)((longlong)param_1 + 0x71c);
            *(undefined1 *)(param_1 + 0xe4) = 0;
          }
          (**(code **)(*param_1 + 0x848))(param_1);
          lVar13 = *(longlong *)((longlong)param_1 + 0x18c);
          uVar2 = *(undefined4 *)((longlong)param_1 + 0x194);
          *(undefined4 *)(param_1 + 0x6b) = 0;
          cVar6 = (**(code **)(*param_1 + 0xa68))(param_1);
          if (cVar6 == '\0') {
            cVar6 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5);
            uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffc08 >> 0x20);
            if (cVar6 == '\0') {
              lVar3 = *param_1;
              uVar15 = (**(code **)(lVar3 + 0x6c0))(param_1);
              in_stack_fffffffffffffc08 = (float *)CONCAT44(uVar21,uVar15);
              (**(code **)(lVar3 + 0x688))
                        (param_1,fVar20,(int)param_1[0x4e],0,in_stack_fffffffffffffc08);
            }
          }
          FUN_14232e840(param_1,fVar20);
          cVar6 = (**(code **)(*param_1 + 0x558))(param_1);
          if (cVar6 != '\0') {
            lVar13 = *param_1;
            param_2 = fVar20 + param_2;
LAB_142348d7c:
            (**(code **)(lVar13 + 0x610))(param_1,param_2,param_3);
            return;
          }
          uStack_378 = *(undefined8 *)((longlong)param_1 + 0x18c);
          fStack_370 = *(float *)((longlong)param_1 + 0x194);
          fStack_3b8 = (float)uStack_378 * fVar20;
          fStack_3b4 = (float)((ulonglong)uStack_378 >> 0x20) * fVar20;
          fStack_3b0 = fStack_370 * fVar20;
          if (((0.0001 < ABS(fStack_3b8)) || (0.0001 < ABS(fStack_3b4))) ||
             (0.0001 < ABS(fStack_3b0))) {
            cVar6 = '\0';
          }
          else {
            cVar6 = '\x01';
          }
          uStack_2c8 = uStack_2c8 & 0xfffffffe;
          uStack_2c0 = uStack_2c0 & 0xfffffff8;
          uStack_248 = 0xffffffff00000000;
          uStack_240 = 0xffffffff00000000;
          uStack_238 = 0;
          uStack_230 = 0;
          uStack_228 = 0;
          uStack_2bc = 0;
          uStack_24c = 0xffffffff;
          _guard_xfg_dispatch_icall_nop(auStack_2b0,0,0x90);
          uStack_2a4 = 0x3f800000;
          param_3 = iVar8;
          if (cVar6 == '\0') {
            (**(code **)(*param_1 + 0x838))(param_1,&uStack_378,fVar20);
            cVar7 = (**(code **)(*param_1 + 0x558))(param_1);
            if (cVar7 != '\0') {
              fVar19 = SQRT(fStack_3b8 * fStack_3b8 + fStack_3b4 * fStack_3b4 +
                            fStack_3b0 * fStack_3b0);
              if (0.0001 < fVar19) {
                fVar18 = *(float *)(param_1[0x2f] + 0x224) - fStack_3c4;
                fVar17 = *(float *)(param_1[0x2f] + 0x220) - fStack_3c8;
                fVar19 = SQRT(fVar18 * fVar18 + fVar17 * fVar17) * (1.0 / fVar19);
                if (1.0 <= fVar19) {
                  fVar19 = 1.0;
                }
                param_2 = param_2 + (1.0 - fVar19) * fVar20;
              }
              lVar13 = *param_1;
              goto LAB_142348d7c;
            }
            cVar7 = (**(code **)(*param_1 + 0x568))(param_1);
            uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffc08 >> 0x20);
            if (cVar7 != '\0') goto LAB_142348cb6;
          }
          else {
            param_2 = 0.0;
          }
          if ((uStack_2c8 & 1) == 0) {
            lVar13 = param_1[0x2f];
            in_stack_fffffffffffffc08 = (float *)0x0;
            uStack_368 = *(undefined4 *)(lVar13 + 0x220);
            uStack_364 = *(undefined4 *)(lVar13 + 0x224);
            uStack_360 = *(undefined4 *)(lVar13 + 0x228);
            (**(code **)(*param_1 + 0x870))(param_1,&uStack_368,puVar1,cVar6,0);
          }
          else {
            *puVar1 = *puVar1 & 0xfffffff8;
            *puVar1 = *puVar1 | uStack_2c0 & 7;
            *(undefined4 *)((longlong)param_1 + 0x414) = (undefined4)uStack_2bc;
            *(undefined4 *)(param_1 + 0x83) = uStack_2bc._4_4_;
            FUN_140729f20(param_1 + 0x84,auStack_2b0);
          }
          cVar7 = (**(code **)(*param_1 + 0x7e8))(param_1);
          if ((cVar7 == '\0') && (((byte)*puVar1 & 3) != 3)) {
            uStack_358 = 0;
            uStack_350 = 0xbf800000;
            if (bVar4) {
              uStack_390 = DAT_1468b5d98;
              plVar11 = &lStack_398;
              lStack_398 = _DAT_1468b5d90;
            }
            else {
              plVar11 = (longlong *)
                        (**(code **)(*param_1 + 0x788))
                                  (param_1,auStack_218,&fStack_3c8,&fStack_3b8,&uStack_358);
            }
            lStack_348 = *plVar11;
            fVar19 = *(float *)(plVar11 + 1);
            fVar18 = (float)((ulonglong)lStack_348 >> 0x20);
            fVar17 = (float)lStack_348;
            fStack_340 = fVar19;
            if ((((float)lStack_348 == 0.0) && (fVar18 == 0.0)) && (fVar19 == 0.0)) {
              if (((cVar6 == '\0') && (plVar10 != (longlong *)0x0)) &&
                 ((iVar9 = (**(code **)(*plVar10 + 0x4e8))(), (iVar9 - 1U & 0xfffffffd) == 0 ||
                  (cVar6 = FUN_142314560(), cVar6 == '\0')))) {
                uVar14 = 0;
                if (!bVar5) goto LAB_142348b9e;
              }
              else {
                uVar14 = 1;
LAB_142348b9e:
                cVar6 = (**(code **)(*param_1 + 0x790))
                                  (param_1,&fStack_208,param_1 + 0x84,&fStack_3b8,&fStack_3c8,
                                   param_2,fVar20,iVar8,uVar14);
                if (cVar6 != '\0') {
                  return;
                }
              }
              FUN_14234cf70(param_1,&fStack_3c8,plVar10,&lStack_338,&fStack_208,1);
              break;
            }
            in_stack_fffffffffffffc08 = &fStack_208;
            in_stack_fffffffffffffc10 = in_stack_fffffffffffffc10 & 0xffffffffffffff00;
            FUN_14234cf70(param_1,&fStack_3c8,plVar10,&lStack_338,in_stack_fffffffffffffc08,
                          in_stack_fffffffffffffc10);
            bVar4 = true;
            fVar16 = 1.0 / fVar20;
            param_2 = param_2 + fVar20;
            fStack_310 = fVar19 * fVar16;
            *(ulonglong *)((longlong)param_1 + 0x18c) = CONCAT44(fVar18 * fVar16,fVar17 * fVar16);
            *(float *)((longlong)param_1 + 0x194) = fStack_310;
            goto joined_r0x00014234837e;
          }
          if (((byte)*puVar1 & 3) == 3) {
            cVar7 = (**(code **)(*param_1 + 0x5d8))(param_1,&fStack_208,puVar1);
            if (cVar7 != '\0') {
              FUN_142913490(param_1[0x44],auStack_1c0,auStack_1cc,&fStack_3c8,fVar20);
              cVar6 = (**(code **)(*param_1 + 0x560))(param_1);
              if (cVar6 == '\0') {
                return;
              }
              (**(code **)(*param_1 + 0x5d0))(param_1,iVar8,param_2,fVar20,&fStack_3b8,&fStack_3c8);
              return;
            }
            if ((uStack_2c8 & 1) == 0) {
              (**(code **)(*param_1 + 0x5e0))(param_1);
            }
            uVar12 = FWeakObjectPtr::Get((longlong)param_1 + 0x494);
            (**(code **)(*param_1 + 0x6d8))(param_1,uVar12,param_1[0x94]);
          }
          else if (((*(byte *)(param_1 + 0x84) & 2) != 0) && (param_2 <= 0.0)) {
            FUN_140729f20(auStack_168);
            fStack_304 = fStack_11c + 2.4;
            fStack_110 = fStack_304;
            (**(code **)(*param_1 + 0x490))(param_1,auStack_300,auStack_168);
            uStack_2d8 = *(undefined8 *)(param_1[0x2f] + 0x210);
            uStack_2d0 = *(undefined8 *)(param_1[0x2f] + 0x218);
            (**(code **)(*param_1 + 0x498))(param_1,auStack_300,auStack_168);
            *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x100;
          }
          cVar7 = (**(code **)(*param_1 + 0x568))(param_1);
          uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffc08 >> 0x20);
          if (cVar7 != '\0') {
            lVar13 = *(longlong *)((longlong)param_1 + 0x18c);
            uVar2 = *(undefined4 *)((longlong)param_1 + 0x194);
LAB_142348cb6:
            uStack_390 = uVar2;
            lStack_398 = lVar13;
            lStack_3a8 = CONCAT44(fStack_3c4,fStack_3c8);
            fStack_3a0 = fStack_3c0;
            FUN_142356470(param_1,&lStack_3a8,&lStack_398,fVar20,CONCAT44(uVar21,param_2),iVar8);
            return;
          }
          if ((((byte)*puVar1 & 3) != 3) && ((*(byte *)(param_1 + 0x84) & 2) == 0)) {
            if ((((*(byte *)((longlong)param_1 + 0x4b4) & 0x20) == 0) &&
                ((cVar6 == '\0' && (plVar10 != (longlong *)0x0)))) &&
               ((iVar9 = (**(code **)(*plVar10 + 0x4e8))(), (iVar9 - 1U & 0xfffffffd) == 0 ||
                (cVar6 = FUN_142314560(), cVar6 == '\0')))) {
              uVar14 = 0;
              if (!bVar5) goto LAB_142348a0c;
            }
            else {
              uVar14 = 1;
LAB_142348a0c:
              in_stack_fffffffffffffc08 = &fStack_3c8;
              in_stack_fffffffffffffc10 = CONCAT44((int)(in_stack_fffffffffffffc10 >> 0x20),param_2)
              ;
              cVar6 = (**(code **)(*param_1 + 0x790))
                                (param_1,&fStack_208,param_1 + 0x84,&fStack_3b8,
                                 in_stack_fffffffffffffc08,in_stack_fffffffffffffc10,fVar20,iVar8,
                                 uVar14);
              if (cVar6 != '\0') {
                return;
              }
            }
            bVar5 = true;
          }
          cVar6 = (**(code **)(*param_1 + 0x560))(param_1);
          if ((((cVar6 != '\0') && ((*(byte *)((longlong)param_1 + 0x4b4) & 0x20) == 0)) &&
              (cVar6 = (**(code **)(*param_1 + 0xa68))(param_1), cVar6 == '\0')) &&
             ((cVar6 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5), cVar6 == '\0' &&
              (1e-06 <= fVar20)))) {
            lVar13 = param_1[0x2f];
            fVar20 = 1.0 / fVar20;
            fStack_2e8 = (*(float *)(lVar13 + 0x228) - fStack_3c0) * fVar20;
            *(ulonglong *)((longlong)param_1 + 0x18c) =
                 CONCAT44((*(float *)(lVar13 + 0x224) - fStack_3c4) * fVar20,
                          (*(float *)(lVar13 + 0x220) - fStack_3c8) * fVar20);
            *(float *)((longlong)param_1 + 0x194) = fStack_2e8;
          }
          lVar13 = param_1[0x2f];
          fStack_328 = *(float *)(lVar13 + 0x220);
          fStack_324 = *(float *)(lVar13 + 0x224);
          fStack_320 = *(float *)(lVar13 + 0x228);
          uStack_31c = *(undefined4 *)(lVar13 + 0x22c);
        } while (((fStack_328 != fStack_3c8) || (fStack_324 != fStack_3c4)) ||
                (fStack_320 != fStack_3c0));
        cVar6 = (**(code **)(*param_1 + 0x560))(param_1);
        if (cVar6 != '\0') {
          (**(code **)(*param_1 + 0x848))(param_1);
        }
      }
      else {
        (**(code **)(*param_1 + 0x5a0))(param_1,1);
      }
    }
  }
  return;
}



// FUNCTION 142cfa390 FUN_142cfa390 body=481 status=ok
// SIG undefined FUN_142cfa390(void)

void FUN_142cfa390(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_58 [80];
  
  if (((((char)param_1[0x4b0] == '\0') || (*(char *)((longlong)param_1 + 0x2582) != '\0')) &&
      (cVar5 = (**(code **)(*param_1 + 0x5c0))(), cVar5 != '\0')) &&
     ((cVar5 = FUN_1407c3030(param_1 + 0x129), cVar5 == '\0' &&
      (cVar5 = FUN_1407c3030(param_1 + 0x175), cVar5 == '\0')))) {
    cVar5 = FUN_142cf3330(param_1);
    cVar6 = (**(code **)(*param_1 + 0x560))(param_1);
    if ((((cVar6 != '\0') || (cVar6 = (**(code **)(*param_1 + 0x570))(param_1), cVar6 != '\0')) &&
        (*(float *)((longlong)param_1 + 0x18c) * *(float *)((longlong)param_1 + 0x18c) +
         *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32) <= 1.0)) || (cVar5 != '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    cVar6 = FUN_142ce46b0();
    if ((*(char *)((longlong)param_1 + 0x13c5) == '\0') ||
       (*(char *)((longlong)param_1 + 0x13c6) == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((((cVar6 == '\0') || (bVar3)) || (bVar4)) &&
       ((*(longlong *)(param_1[0x2f] + 400) == 0 || (cVar5 != '\0')))) {
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x658))(param_1,&local_78,param_2);
      uVar1 = *puVar7;
      uVar2 = *(undefined4 *)(puVar7 + 1);
      uVar8 = FUN_142ced5e0(param_1,local_58,0);
      local_78 = DAT_1468b5da0;
      local_70 = DAT_1468b5da8;
      if (param_1[0x1fb] != 0) {
        lVar9 = FUN_142cc2d20(param_1[0x1fb] + 0xbe0,&local_78,uVar8,param_1);
        local_78 = *(undefined8 *)(lVar9 + 0xc);
        local_70 = *(undefined4 *)(lVar9 + 0x14);
      }
      local_88 = uVar1;
      local_80 = uVar2;
      FUN_142d069f0(param_1,&local_78,&local_88);
    }
  }
  return;
}



// FUNCTION 142cfa580 FUN_142cfa580 body=145 status=ok
// SIG undefined FUN_142cfa580(void)

int FUN_142cfa580(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x520) < 1) {
    return -1;
  }
  lVar4 = 0;
  while( true ) {
    lVar1 = *(longlong *)(lVar4 + 0x40 + *(longlong *)(param_1 + 0x518));
    if (lVar1 == 0) {
      return iVar3;
    }
    cVar2 = FUN_142c48f90(lVar1,param_2,param_1);
    if (cVar2 != '\0') break;
    iVar3 = iVar3 + 1;
    lVar4 = lVar4 + 0x48;
    if (*(int *)(param_1 + 0x520) <= iVar3) {
      return -1;
    }
  }
  return iVar3;
}



// FUNCTION 142cfa620 FUN_142cfa620 body=181 status=ok
// SIG undefined FUN_142cfa620(void)

int FUN_142cfa620(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_18 [16];
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x538) < 1) {
    return -1;
  }
  lVar4 = 0;
  do {
    lVar3 = *(longlong *)(param_1 + 0x530) + lVar4;
    if ((*(longlong *)(lVar3 + 0x40) == 0) ||
       (cVar1 = FUN_142c48f90(*(longlong *)(lVar3 + 0x40),param_2,param_1), cVar1 != '\0')) {
      if (*(char *)(lVar3 + 0x48) == '\0') {
        return iVar2;
      }
      cVar1 = FUN_142ce9c50(param_1,lVar3,param_2,local_18);
      if (cVar1 != '\0') {
        return iVar2;
      }
    }
    iVar2 = iVar2 + 1;
    lVar4 = lVar4 + 0x68;
    if (*(int *)(param_1 + 0x538) <= iVar2) {
      return -1;
    }
  } while( true );
}



// FUNCTION 142cfa6e0 FUN_142cfa6e0 body=793 status=ok
// SIG undefined FUN_142cfa6e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cfa6e0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong *local_a8 [2];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_80;
  undefined1 local_78 [16];
  float local_68;
  float fStack_64;
  float fStack_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar2 = param_1[2];
  lVar6 = FUN_142cec940(lVar2,*(undefined1 *)((longlong)param_1 + 0x469));
  if (lVar6 != 0) {
    FUN_142c62320(&local_98);
    cVar1 = *(char *)((longlong)param_1 + 0x469);
    if (cVar1 == '\x02') {
      local_80 = 2;
    }
    if (cVar1 == '\x01') {
      local_98 = *(undefined4 *)(lVar2 + 0xc0);
    }
    else if (cVar1 == '\x02') {
      local_98 = *(undefined4 *)(lVar2 + 0xc4);
    }
    else {
      local_98 = *(undefined4 *)(lVar2 + 200);
    }
    if (cVar1 == '\x01') {
      local_94 = *(undefined4 *)(lVar2 + 0xc4);
    }
    else if (cVar1 == '\x02') {
      local_94 = *(undefined4 *)(lVar2 + 200);
    }
    else {
      local_94 = *(undefined4 *)(lVar2 + 0xcc);
    }
    uVar7 = FDifficultyFloat::FDifficultyFloat(local_a8);
    FUN_142c7c510(param_1,lVar6,&local_98,uVar7);
    if (*(char *)((longlong)param_1 + 0x469) == '\x02') {
      if (*(char *)(param_1[2] + 0xb8) == '\0') {
        lVar8 = (**(code **)(*param_1 + 0xa0))(param_1,1);
        if (lVar8 != 0) {
          lVar9 = FUN_1423ac7e0(lVar8);
          param_1[0x8f] = lVar9;
          if (lVar9 != 0) {
            local_a8[0] = (longlong *)0x0;
            FUN_142c81650(lVar6,local_a8,lVar8);
            plVar5 = local_a8[0];
            if (local_a8[0] != (longlong *)0x0) {
              lVar6 = UAnimMontage::GetPrivateStaticClass();
              if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
                  lVar6 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                fVar3 = *(float *)(lVar8 + 0x230);
                local_b8 = 0;
                FUN_142291830(plVar5,local_78,0,0x7f7fffff);
                fVar10 = (float)(**(code **)(*plVar5 + 0x2a0))(plVar5);
                *(float *)(param_1 + 0x90) =
                     (SQRT(fStack_64 * fStack_64 + local_68 * local_68 + fStack_60 * fStack_60) *
                     fVar3) / fVar10;
              }
            }
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1[2] + 0xbc);
      }
    }
  }
  switch(*(undefined1 *)((longlong)param_1 + 0x469)) {
  case 2:
    uVar7 = FUN_142c6f130(param_1);
    FUN_142e21560(lVar2,uVar7);
    break;
  case 3:
    uVar7 = FUN_142c6f130(param_1);
    FUN_142e215a0(lVar2,uVar7);
    break;
  case 4:
    uVar7 = FUN_142c6f130(param_1);
    FUN_142e216f0(lVar2,uVar7);
    break;
  case 5:
    uVar7 = FUN_142c6f130(param_1);
    FUN_142e21520(lVar2,uVar7);
    break;
  case 6:
    uVar7 = FUN_142c6f130(param_1);
    FUN_142e215e0(lVar2,uVar7);
    break;
  case 7:
    uVar7 = FUN_142c6f130(param_1);
    FUN_142e216b0(lVar2,uVar7);
  }
  return;
}



// FUNCTION 142cfaa20 FUN_142cfaa20 body=288 status=ok
// SIG undefined FUN_142cfaa20(void)

undefined8 * FUN_142cfaa20(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong local_res18 [2];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 *local_128 [2];
  undefined1 local_118 [32];
  undefined8 local_f8;
  undefined4 local_e8;
  undefined1 local_d8 [49];
  undefined1 local_a7;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_3 != 0) {
    local_res18[0] = param_3;
    lVar2 = FUN_142e20fc0();
    for (lVar1 = local_res18[0]; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar2) {
        if (*(longlong *)(param_1 + 0x11f8) == 0) {
          return param_2;
        }
        FUN_142c62180(local_d8);
        local_a7 = 2;
        local_f8 = 0;
        local_e8 = 0;
        puVar3 = (undefined8 *)FUN_140438ef0(0x28,local_118);
        if (puVar3 != (undefined8 *)0x0) {
          local_148 = SUB84(param_2,0);
          uStack_144 = (undefined4)((ulonglong)param_2 >> 0x20);
          uStack_140 = (undefined4)param_1;
          uStack_13c = (undefined4)((ulonglong)param_1 >> 0x20);
          *puVar3 = &PTR_FUN_143ff7760;
          *(undefined4 *)(puVar3 + 1) = local_148;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_144;
          *(undefined4 *)(puVar3 + 2) = uStack_140;
          *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_13c;
          puVar3[3] = local_res18;
          puVar3[4] = local_d8;
        }
        local_128[0] = &LAB_142ce3a10;
        uVar4 = FUN_14247f500();
        FUN_14247d5a0(uVar4,param_1,local_128);
        FUN_142c63c50(local_d8);
        return param_2;
      }
    }
  }
  return param_2;
}



// FUNCTION 142cfab40 FUN_142cfab40 body=1050 status=ok
// SIG undefined FUN_142cfab40(void)

void FUN_142cfab40(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined1 local_1e8 [32];
  longlong local_1c8;
  int local_1c0;
  int local_1bc;
  undefined1 local_1b7;
  undefined1 local_118 [56];
  undefined1 local_e0 [200];
  
  if (*param_2 != 0) {
    lVar7 = FUN_142e20fc0();
    for (lVar9 = *param_2; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
      if (lVar9 == lVar7) {
        if ((*param_2 != 0) &&
           (plVar11 = *(longlong **)(param_1 + 0x118), plVar11 != (longlong *)0x0)) {
          uVar8 = FUN_142e27720();
          lVar9 = (**(code **)(*plVar11 + 0x628))(plVar11,uVar8);
          if (lVar9 != 0) {
            uVar8 = FUN_142c7bae0(lVar9,&local_1f8,*param_2);
            FUN_142cfee00(param_1 + 0x400,uVar8);
          }
        }
        break;
      }
    }
  }
  if (param_2[1] != 0) {
    lVar7 = FUN_142e20fc0();
    for (lVar9 = param_2[1]; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
      if (lVar9 == lVar7) {
        if (param_2[1] == 0) {
          return;
        }
        uVar8 = FUN_142e27720();
        lVar9 = (**(code **)(*param_3 + 0x628))(param_3,uVar8);
        if (lVar9 == 0) {
          return;
        }
        lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if ((*(int *)(lVar7 + 0x38) < DAT_146b318b0) &&
           (_Init_thread_header(&DAT_146b318b0), DAT_146b318b0 == -1)) {
          FName::FName(&DAT_146b318a8,L"OffsetX",1);
          _Init_thread_footer(&DAT_146b318b0);
        }
        if ((*(int *)(lVar7 + 0x38) < DAT_146b318c0) &&
           (_Init_thread_header(&DAT_146b318c0), DAT_146b318c0 == -1)) {
          FName::FName(&DAT_146b318b8,L"OffsetY",1);
          _Init_thread_footer(&DAT_146b318c0);
        }
        if ((*(int *)(lVar7 + 0x38) < DAT_146b318d0) &&
           (_Init_thread_header(&DAT_146b318d0), DAT_146b318d0 == -1)) {
          FName::FName(&DAT_146b318c8,L"OffsetZ",1);
          _Init_thread_footer(&DAT_146b318d0);
        }
        plVar11 = param_2 + 3;
        if (*(char *)((longlong)param_2 + 0x12) == '\0') {
          plVar11 = (longlong *)(param_1 + 0x440);
        }
        if ((((char)*plVar11 == '\0') || (*(longlong *)(param_1 + 0x118) == 0)) ||
           (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x118), lVar7 == 0)) {
          lVar7 = *(longlong *)(param_1 + 0x118);
        }
        FUN_142ceca90(plVar11,&local_1f8,param_3,lVar7);
        FUN_142c62180(local_1e8);
        local_1b7 = 1;
        puVar10 = (undefined8 *)FUN_142c62590(local_118,&DAT_146b318a8,local_1f8);
        iVar6 = local_1c0;
        lVar7 = (longlong)local_1c0;
        local_1c0 = local_1c0 + 1;
        if (local_1bc < local_1c0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_1c8,iVar6);
        }
        uVar8 = puVar10[1];
        lVar7 = lVar7 * 0x38;
        *(undefined8 *)(lVar7 + local_1c8) = *puVar10;
        ((undefined8 *)(lVar7 + local_1c8))[1] = uVar8;
        uVar8 = puVar10[3];
        puVar1 = (undefined8 *)(lVar7 + 0x10 + local_1c8);
        *puVar1 = puVar10[2];
        puVar1[1] = uVar8;
        uVar3 = *(undefined4 *)((longlong)puVar10 + 0x24);
        uVar4 = *(undefined4 *)(puVar10 + 5);
        uVar5 = *(undefined4 *)((longlong)puVar10 + 0x2c);
        puVar2 = (undefined4 *)(lVar7 + 0x20 + local_1c8);
        *puVar2 = *(undefined4 *)(puVar10 + 4);
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        *(undefined8 *)(lVar7 + 0x30 + local_1c8) = puVar10[6];
        puVar10 = (undefined8 *)FUN_142c62590(local_118,&DAT_146b318b8,local_1f4);
        iVar6 = local_1c0;
        lVar7 = (longlong)local_1c0;
        local_1c0 = local_1c0 + 1;
        if (local_1bc < local_1c0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_1c8,iVar6);
        }
        uVar8 = puVar10[1];
        lVar7 = lVar7 * 0x38;
        *(undefined8 *)(lVar7 + local_1c8) = *puVar10;
        ((undefined8 *)(lVar7 + local_1c8))[1] = uVar8;
        uVar8 = puVar10[3];
        puVar1 = (undefined8 *)(lVar7 + 0x10 + local_1c8);
        *puVar1 = puVar10[2];
        puVar1[1] = uVar8;
        uVar3 = *(undefined4 *)((longlong)puVar10 + 0x24);
        uVar4 = *(undefined4 *)(puVar10 + 5);
        uVar5 = *(undefined4 *)((longlong)puVar10 + 0x2c);
        puVar2 = (undefined4 *)(lVar7 + 0x20 + local_1c8);
        *puVar2 = *(undefined4 *)(puVar10 + 4);
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        *(undefined8 *)(lVar7 + 0x30 + local_1c8) = puVar10[6];
        puVar10 = (undefined8 *)FUN_142c62590(local_118,&DAT_146b318c8,local_1f0);
        iVar6 = local_1c0;
        lVar7 = (longlong)local_1c0;
        local_1c0 = local_1c0 + 1;
        if (local_1bc < local_1c0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_1c8,iVar6);
        }
        uVar8 = puVar10[1];
        lVar7 = lVar7 * 0x38;
        *(undefined8 *)(lVar7 + local_1c8) = *puVar10;
        ((undefined8 *)(lVar7 + local_1c8))[1] = uVar8;
        uVar8 = puVar10[3];
        puVar1 = (undefined8 *)(lVar7 + 0x10 + local_1c8);
        *puVar1 = puVar10[2];
        puVar1[1] = uVar8;
        uVar3 = *(undefined4 *)((longlong)puVar10 + 0x24);
        uVar4 = *(undefined4 *)(puVar10 + 5);
        uVar5 = *(undefined4 *)((longlong)puVar10 + 0x2c);
        puVar2 = (undefined4 *)(lVar7 + 0x20 + local_1c8);
        *puVar2 = *(undefined4 *)(puVar10 + 4);
        puVar2[1] = uVar3;
        puVar2[2] = uVar4;
        puVar2[3] = uVar5;
        *(undefined8 *)(lVar7 + 0x30 + local_1c8) = puVar10[6];
        uVar8 = FUN_1405e0fd0(local_e0,local_1e8);
        uVar8 = FUN_142c7bb40(lVar9,&local_1f8,param_2[1],uVar8,0);
        FUN_142cff980(param_1 + 0x400,uVar8);
        FUN_142c63c50(local_1e8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142cfaf60 FUN_142cfaf60 body=568 status=ok
// SIG undefined FUN_142cfaf60(void)

void FUN_142cfaf60(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  float fVar13;
  undefined1 local_38 [32];
  
  uVar6 = FUN_142c61880(param_1,local_38);
  FUN_142c80b40(*(undefined8 *)(param_1 + 0x18),param_2,uVar6);
  bVar12 = false;
  if ((*(longlong *)(param_1 + 0x1b0) != 0) &&
     (lVar7 = (**(code **)(*param_2 + 0x578))(param_2), *(longlong *)(param_1 + 0x1b0) == lVar7)) {
    bVar12 = true;
    (**(code **)(*param_2 + 0x580))(param_2,0);
  }
  if ((*(longlong *)(param_1 + 0x1b8) == 0) ||
     (lVar7 = (**(code **)(*param_2 + 0x588))(param_2), *(longlong *)(param_1 + 0x1b8) != lVar7)) {
    if (!bVar12) {
      return;
    }
  }
  else {
    (**(code **)(*param_2 + 0x590))(param_2,0);
  }
  plVar8 = (longlong *)FUN_142c701e0(*(undefined8 *)(param_1 + 0x18),param_2);
  if (plVar8 != (longlong *)0x0) {
    plVar11 = (longlong *)*plVar8;
    plVar8 = plVar11 + (longlong)(int)plVar8[1] * 2;
    fVar13 = -1.0;
    if (plVar11 != plVar8) {
      do {
        plVar4 = (longlong *)plVar11[1];
        lVar7 = *plVar11;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
          UNLOCK();
        }
        if (lVar7 == 0) {
LAB_142cfb14d:
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
        else if (plVar4 != (longlong *)0x0) {
          LOCK();
          iVar5 = (int)plVar4[1];
          if (iVar5 == 0) {
            *(int *)(plVar4 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
          if (0 < iVar5) {
            lVar10 = 0;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              iVar5 = (int)plVar4[1];
              bVar12 = iVar5 == 0;
              if (bVar12) {
                *(int *)(plVar4 + 1) = 0;
                iVar5 = 0;
              }
              UNLOCK();
              while (lVar10 = 0, !bVar12) {
                LOCK();
                bVar12 = iVar5 == (int)plVar4[1];
                if (bVar12) {
                  *(int *)(plVar4 + 1) = iVar5 + 1;
                }
                UNLOCK();
                if (bVar12) {
                  LOCK();
                  plVar1 = plVar4 + 1;
                  lVar9 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  lVar10 = lVar7;
                  if ((int)lVar9 == 1) {
                    (**(code **)*plVar4)(plVar4);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar4 + 0xc);
                    iVar5 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar5 == 1) {
                      (**(code **)(*plVar4 + 8))(plVar4,1);
                    }
                  }
                  break;
                }
                LOCK();
                iVar5 = (int)plVar4[1];
                bVar12 = iVar5 == 0;
                if (bVar12) {
                  *(int *)(plVar4 + 1) = 0;
                  iVar5 = 0;
                }
                UNLOCK();
              }
            }
            if (((*(longlong *)(lVar10 + 0x1b0) != 0) || (*(longlong *)(lVar10 + 0x1b8) != 0)) &&
               (fVar3 = *(float *)(lVar10 + 0x1a8), fVar13 < fVar3)) {
              lVar7 = *(longlong *)(lVar10 + 0x100);
              lVar9 = (longlong)*(int *)(lVar10 + 0x108) * 0x10 + lVar7;
              for (; lVar7 != lVar9; lVar7 = lVar7 + 0x10) {
                if (*(longlong **)(lVar7 + 8) == param_2) {
                  if (*(longlong *)(lVar10 + 0x1b0) != 0) {
                    (**(code **)(*param_2 + 0x580))(param_2);
                  }
                  fVar13 = fVar3;
                  if (*(longlong *)(lVar10 + 0x1b8) != 0) {
                    (**(code **)(*param_2 + 0x590))(param_2);
                  }
                  break;
                }
              }
            }
          }
          goto LAB_142cfb14d;
        }
        plVar11 = plVar11 + 2;
      } while (plVar11 != plVar8);
    }
  }
  return;
}



// FUNCTION 142cfb1a0 FUN_142cfb1a0 body=651 status=ok
// SIG undefined FUN_142cfb1a0(void)

void FUN_142cfb1a0(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int *piVar8;
  undefined8 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 local_48 [16];
  
  FUN_142c61880(param_1,local_48);
  FUN_142c80b40(*(undefined8 *)(param_1 + 0x18),param_2);
  if ((-1 < param_3) && (param_2[0x23] != 0)) {
    iVar6 = (**(code **)(*param_2 + 0x6c8))(param_2);
    lVar4 = param_2[0xdf];
    iVar14 = iVar6 * param_3;
    iVar12 = (int)lVar4 - iVar6;
    if (-1 < iVar12) {
      if ((iVar6 < iVar12) &&
         (plVar7 = (longlong *)FUN_142c701e0(*(undefined8 *)(param_1 + 0x18),param_2),
         plVar7 != (longlong *)0x0)) {
        plVar15 = (longlong *)*plVar7;
        plVar7 = plVar15 + (longlong)(int)plVar7[1] * 2;
        for (; plVar15 != plVar7; plVar15 = plVar15 + 2) {
          plVar2 = (longlong *)plVar15[1];
          lVar3 = *plVar15;
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
            UNLOCK();
          }
          if (lVar3 == 0) {
LAB_142cfb343:
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              piVar11 = (int *)((longlong)plVar2 + 0xc);
              iVar10 = *piVar11;
              *piVar11 = *piVar11 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
              }
            }
          }
          else if (plVar2 != (longlong *)0x0) {
            LOCK();
            iVar10 = (int)plVar2[1];
            if (iVar10 == 0) {
              *(int *)(plVar2 + 1) = 0;
              iVar10 = 0;
            }
            UNLOCK();
            if (0 < iVar10) {
              lVar13 = 0;
              if (plVar2 != (longlong *)0x0) {
                LOCK();
                iVar10 = (int)plVar2[1];
                bVar16 = iVar10 == 0;
                if (bVar16) {
                  *(int *)(plVar2 + 1) = 0;
                  iVar10 = 0;
                }
                UNLOCK();
                while (lVar13 = 0, !bVar16) {
                  LOCK();
                  bVar16 = iVar10 == (int)plVar2[1];
                  if (bVar16) {
                    *(int *)(plVar2 + 1) = iVar10 + 1;
                  }
                  UNLOCK();
                  if (bVar16) {
                    LOCK();
                    plVar1 = plVar2 + 1;
                    lVar5 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    lVar13 = lVar3;
                    if ((int)lVar5 == 1) {
                      (**(code **)*plVar2)(plVar2);
                      LOCK();
                      piVar11 = (int *)((longlong)plVar2 + 0xc);
                      iVar10 = *piVar11;
                      *piVar11 = *piVar11 + -1;
                      UNLOCK();
                      if (iVar10 == 1) {
                        (**(code **)(*plVar2 + 8))(plVar2,1);
                      }
                    }
                    break;
                  }
                  LOCK();
                  iVar10 = (int)plVar2[1];
                  bVar16 = iVar10 == 0;
                  if (bVar16) {
                    *(int *)(plVar2 + 1) = 0;
                    iVar10 = 0;
                  }
                  UNLOCK();
                }
              }
              piVar11 = *(int **)(lVar13 + 0x100);
              piVar8 = piVar11 + (longlong)*(int *)(lVar13 + 0x108) * 4;
              for (; piVar11 != piVar8; piVar11 = piVar11 + 4) {
                if (*(longlong **)(piVar11 + 2) == param_2) {
                  if (param_3 < *piVar11) {
                    *piVar11 = *piVar11 + -1;
                  }
                  break;
                }
              }
            }
            goto LAB_142cfb343;
          }
        }
      }
      for (; iVar14 < iVar12; iVar14 = iVar14 + 1) {
        lVar3 = *param_2;
        uVar9 = (**(code **)(lVar3 + 0x560))(param_2,iVar14 + iVar6);
        (**(code **)(lVar3 + 0x568))(param_2,iVar14,uVar9);
      }
      if (iVar6 != 0) {
        iVar14 = (int)param_2[0xdf];
        iVar10 = (iVar14 - iVar12) - iVar6;
        if (iVar10 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_2[0xde] + (longlong)iVar12 * 8),
                     (void *)(param_2[0xde] + (longlong)(int)lVar4 * 8),(longlong)iVar10 << 3);
          iVar14 = (int)param_2[0xdf];
        }
        *(int *)(param_2 + 0xdf) = iVar14 - iVar6;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_2 + 0xde);
      }
      FUN_1423424e0(param_2);
    }
  }
  return;
}



// FUNCTION 142cfb430 FUN_142cfb430 body=115 status=ok
// SIG undefined FUN_142cfb430(void)

void FUN_142cfb430(longlong param_1)

{
  UObject::PostLoad();
  if (*(longlong *)(param_1 + 0x248) != 0) {
    *(longlong *)(param_1 + 0x148) = *(longlong *)(param_1 + 0x248);
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  if (*(longlong *)(param_1 + 0x250) != 0) {
    *(longlong *)(param_1 + 0x1c8) = *(longlong *)(param_1 + 0x250);
    *(undefined8 *)(param_1 + 0x250) = 0;
  }
  if (*(float *)(param_1 + 600) != 10.0) {
    *(float *)(param_1 + 0xa8) = *(float *)(param_1 + 600);
    *(undefined1 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 600) = 0x41200000;
  }
  return;
}



// FUNCTION 142cfb4b0 FUN_142cfb4b0 body=84 status=ok
// SIG undefined FUN_142cfb4b0(void)

void FUN_142cfb4b0(longlong param_1)

{
  UObject::PostLoad();
  if ((*(char *)(param_1 + 0x10c) == '\0') && (*(char *)(param_1 + 0x10e) != '\0')) {
    *(undefined1 *)(param_1 + 0x10c) = 1;
    *(undefined1 *)(param_1 + 0x10e) = 1;
  }
  if ((*(byte *)(param_1 + 0xd1) & 3) == 3) {
    *(undefined1 *)(param_1 + 0xd0) = 2;
    *(byte *)(param_1 + 0xd1) = *(byte *)(param_1 + 0xd1) & 0xfd;
  }
  return;
}



// FUNCTION 142cfb510 FUN_142cfb510 body=63 status=ok
// SIG undefined FUN_142cfb510(void)

void FUN_142cfb510(longlong param_1)

{
  float fVar1;
  
  FUN_142349d70();
  fVar1 = *(float *)(param_1 + 0x14e4);
  if (fVar1 != 5.0) {
    *(undefined4 *)(param_1 + 0x14e4) = 0x40a00000;
    *(float *)(param_1 + 0x1490) = fVar1 * 57.295776;
  }
  return;
}



// FUNCTION 142cfb550 FUN_142cfb550 body=785 status=ok
// SIG undefined FUN_142cfb550(void)

void FUN_142cfb550(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  FUN_142349c80();
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    if (*(int *)(param_1 + 0x520) == 0) {
      if (*(char *)(param_1 + 0x492) == '\0') {
        if (*(longlong *)(param_1 + 0x480) != 0) {
          lVar4 = FUN_142e20fc0();
          for (lVar6 = *(longlong *)(param_1 + 0x480); lVar6 != 0;
              lVar6 = *(longlong *)(lVar6 + 0x30)) {
            if (lVar6 == lVar4) {
              if (*(longlong *)(param_1 + 0x480) != 0) goto LAB_142cfb60c;
              break;
            }
          }
        }
        if (*(longlong *)(param_1 + 0x488) != 0) {
          lVar4 = FUN_142e20fc0();
          for (lVar6 = *(longlong *)(param_1 + 0x488); lVar6 != 0;
              lVar6 = *(longlong *)(lVar6 + 0x30)) {
            if (lVar6 == lVar4) {
              if (*(longlong *)(param_1 + 0x488) != 0) goto LAB_142cfb60c;
              break;
            }
          }
        }
      }
      else {
LAB_142cfb60c:
        plVar1 = (longlong *)(param_1 + 0x518);
        iVar2 = *(int *)(param_1 + 0x520);
        lVar6 = (longlong)iVar2;
        *(int *)(param_1 + 0x520) = iVar2 + 1;
        if (*(int *)(param_1 + 0x524) < iVar2 + 1) {
          TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
        }
        lVar4 = *plVar1;
        *(undefined8 *)(lVar4 + lVar6 * 0x48) = 0;
        *(undefined8 *)(lVar4 + 8 + lVar6 * 0x48) = 0;
        *(undefined2 *)(lVar4 + 0x11 + lVar6 * 0x48) = 0;
        *(undefined1 *)(lVar4 + 0x18 + lVar6 * 0x48) = 0;
        *(undefined1 *)(lVar4 + 0x1a + lVar6 * 0x48) = 0;
        *(undefined8 *)(lVar4 + 0x20 + lVar6 * 0x48) = 0;
        *(undefined8 *)(lVar4 + 0x28 + lVar6 * 0x48) = 0;
        *(undefined4 *)(lVar4 + 0x30 + lVar6 * 0x48) = 0;
        *(undefined8 *)(lVar4 + 0x38 + lVar6 * 0x48) = 0;
        *(undefined8 *)(lVar4 + 0x40 + lVar6 * 0x48) = 0;
        *(undefined1 *)(lVar4 + 0x10 + lVar6 * 0x48) = 1;
        *(undefined8 *)*plVar1 = *(undefined8 *)(param_1 + 0x480);
        *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(param_1 + 0x488);
        *(undefined1 *)(*plVar1 + 0x11) = *(undefined1 *)(param_1 + 0x491);
        *(undefined1 *)(*plVar1 + 0x12) = *(undefined1 *)(param_1 + 0x492);
        uVar3 = *(undefined8 *)(param_1 + 0x4a0);
        lVar6 = *plVar1;
        *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_1 + 0x498);
        *(undefined8 *)(lVar6 + 0x20) = uVar3;
        uVar3 = *(undefined8 *)(param_1 + 0x4b0);
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_1 + 0x4a8);
        *(undefined8 *)(lVar6 + 0x30) = uVar3;
        *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(param_1 + 0x4b8);
        *(undefined1 *)(param_1 + 0x492) = 0;
        *(undefined8 *)(param_1 + 0x480) = 0;
        *(undefined8 *)(param_1 + 0x488) = 0;
      }
    }
    if (*(int *)(param_1 + 0x538) == 0) {
      if (*(char *)(param_1 + 0x4da) == '\0') {
        if (*(longlong *)(param_1 + 0x4c8) != 0) {
          lVar4 = FUN_142e20fc0();
          for (lVar6 = *(longlong *)(param_1 + 0x4c8); lVar6 != 0;
              lVar6 = *(longlong *)(lVar6 + 0x30)) {
            if (lVar6 == lVar4) {
              if (*(longlong *)(param_1 + 0x4c8) != 0) goto LAB_142cfb76c;
              break;
            }
          }
        }
        if (*(longlong *)(param_1 + 0x4d0) != 0) {
          lVar4 = FUN_142e20fc0();
          for (lVar6 = *(longlong *)(param_1 + 0x4d0); lVar6 != 0;
              lVar6 = *(longlong *)(lVar6 + 0x30)) {
            if (lVar6 == lVar4) {
              if (*(longlong *)(param_1 + 0x4d0) == 0) {
                return;
              }
              goto LAB_142cfb76c;
            }
          }
        }
      }
      else {
LAB_142cfb76c:
        plVar1 = (longlong *)(param_1 + 0x530);
        iVar2 = *(int *)(param_1 + 0x538);
        *(int *)(param_1 + 0x538) = iVar2 + 1;
        if (*(int *)(param_1 + 0x53c) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar1,iVar2);
        }
        puVar5 = (undefined8 *)((longlong)iVar2 * 0x68 + *plVar1);
        *puVar5 = 0;
        puVar5[1] = 0;
        *(undefined2 *)(puVar5 + 2) = 0x100;
        *(undefined1 *)((longlong)puVar5 + 0x12) = 0;
        *(undefined1 *)(puVar5 + 3) = 0;
        *(undefined1 *)((longlong)puVar5 + 0x1a) = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        *(undefined4 *)(puVar5 + 6) = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        *(undefined1 *)(puVar5 + 9) = 1;
        *(undefined4 *)((longlong)puVar5 + 0x4c) = 0x7f7fffff;
        *(undefined4 *)(puVar5 + 10) = 0x42c80000;
        *(undefined2 *)((longlong)puVar5 + 0x54) = 0;
        puVar5[0xb] = 0;
        *(undefined4 *)(puVar5 + 0xc) = 0;
        *(undefined8 *)*plVar1 = *(undefined8 *)(param_1 + 0x480);
        *(undefined8 *)(*plVar1 + 8) = *(undefined8 *)(param_1 + 0x488);
        *(undefined1 *)(*plVar1 + 0x11) = *(undefined1 *)(param_1 + 0x491);
        *(undefined1 *)(*plVar1 + 0x12) = *(undefined1 *)(param_1 + 0x492);
        uVar3 = *(undefined8 *)(param_1 + 0x4a0);
        lVar6 = *plVar1;
        *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(param_1 + 0x498);
        *(undefined8 *)(lVar6 + 0x20) = uVar3;
        uVar3 = *(undefined8 *)(param_1 + 0x4b0);
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(param_1 + 0x4a8);
        *(undefined8 *)(lVar6 + 0x30) = uVar3;
        *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(param_1 + 0x4b8);
        *(undefined1 *)(param_1 + 0x4da) = 0;
        *(undefined8 *)(param_1 + 0x4c8) = 0;
        *(undefined8 *)(param_1 + 0x4d0) = 0;
      }
    }
  }
  return;
}



// FUNCTION 142cfb870 FUN_142cfb870 body=279 status=ok
// SIG undefined FUN_142cfb870(void)

void FUN_142cfb870(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  byte bVar3;
  
  FUN_14234a1a0();
  if (param_3 == 0) {
    *(byte *)(param_1 + 0x330) =
         *(byte *)(param_1 + 0x330) ^
         (*(char *)(*(longlong *)(param_2 + 0x900) + 0x137c) * '\x02' ^ *(byte *)(param_1 + 0x330))
         & 4;
    FWeakObjectPtr::operator=
              (param_1 + 0x33c,*(undefined8 *)(*(longlong *)(param_2 + 0x900) + 0x1358));
    bVar3 = -(*(longlong *)(*(longlong *)(param_2 + 0x900) + 0x1778) != 0) & 2U |
            *(byte *)(param_1 + 0x330) & 0xfd;
    *(byte *)(param_1 + 0x330) = bVar3;
    lVar2 = *(longlong *)(param_2 + 0x900);
    if (*(char *)(lVar2 + 0x1940) != '\0') {
      uVar1 = *(undefined8 *)(lVar2 + 0x1920);
      *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(lVar2 + 0x1918);
      *(undefined8 *)(param_1 + 0x358) = uVar1;
      uVar1 = *(undefined8 *)(lVar2 + 0x1930);
      *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(lVar2 + 0x1928);
      *(undefined8 *)(param_1 + 0x368) = uVar1;
      *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(lVar2 + 0x1938);
      lVar2 = *(longlong *)(param_2 + 0x900);
    }
    bVar3 = (*(char *)(lVar2 + 0x1968) << 4 ^ bVar3) & 0x10 ^ bVar3;
    *(byte *)(param_1 + 0x330) = bVar3;
    *(byte *)(param_1 + 0x330) =
         (*(char *)(*(longlong *)(param_2 + 0x900) + 0x10b8) << 6 ^ bVar3) & 0x40 ^ bVar3;
  }
  return;
}



// FUNCTION 142cfb990 FUN_142cfb990 body=529 status=ok
// SIG undefined FUN_142cfb990(void)

void FUN_142cfb990(longlong *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  char cVar4;
  float local_a8;
  float fStack_a4;
  float local_a0;
  undefined8 local_98;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  
  if (param_2 != 3) {
    if ((((*(float *)(param_1 + 0x4ca) == 0.0) && (*(float *)((longlong)param_1 + 0x2654) == 0.0))
        && (*(float *)(param_1 + 0x4cb) == 0.0)) ||
       (plVar3 = (longlong *)param_1[0x1fb], plVar3 == (longlong *)0x0)) {
      *(undefined1 *)((longlong)param_1 + 0x265c) = 0;
    }
    else {
      (**(code **)(*plVar3 + 0x9b8))(plVar3,&local_88);
      fVar1 = *(float *)(param_1 + 0x4ca);
      fVar2 = *(float *)((longlong)param_1 + 0x2654);
      local_a8 = local_78 * fVar1 + DAT_1468b5d90 + local_88 * fVar2;
      fStack_a4 = local_74 * fVar1 + DAT_1468b5d94 + local_84 * fVar2;
      local_a0 = local_70 * fVar1 + DAT_1468b5d98 + local_80 * fVar2;
      cVar4 = (**(code **)(*param_1 + 0x570))(param_1);
      if (cVar4 != '\0') {
        fVar1 = *(float *)(param_1 + 0x4cb);
        local_a8 = local_68 * fVar1 + local_a8;
        fStack_a4 = local_64 * fVar1 + fStack_a4;
        local_a0 = local_60 * fVar1 + local_a0;
      }
      if (*(float *)((longlong)param_1 + 0x2654) <= 0.0) {
        *(undefined1 *)((longlong)param_1 + 0x265c) = 0;
      }
      if ((((char)param_1[0x49] == '\x06') && (*(char *)((longlong)param_1 + 0x249) == '\0')) &&
         ((param_1[0x2f] != 0 && (*(char *)((longlong)param_1 + 0x265c) != '\0')))) {
        local_a8 = -local_a8;
        fStack_a4 = -fStack_a4;
        local_a0 = -local_a0;
      }
      local_98 = CONCAT44(fStack_a4,local_a8);
      local_90 = local_a0;
      (**(code **)(*param_1 + 0x578))(param_1,&local_98,0);
    }
  }
  return;
}



// FUNCTION 142cfbbb0 FUN_142cfbbb0 body=67 status=ok
// SIG undefined FUN_142cfbbb0(void)

void FUN_142cfbbb0(longlong param_1,longlong param_2)

{
  FUN_14234a630();
  if ((*(byte *)(param_1 + 0x330) & 1) != 0) {
    FUN_142cd9700(*(longlong *)(param_2 + 0x900) + 6000,param_1 + 0x350);
  }
  return;
}



// FUNCTION 142cfbc30 FUN_142cfbc30 body=3068 status=ok
// SIG undefined FUN_142cfbc30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cfbc30(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  float *pfVar11;
  longlong **pplVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  float *pfVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined1 auStack_978 [32];
  undefined8 local_958;
  float local_950;
  float local_948;
  float local_944;
  float local_940;
  longlong *local_938;
  longlong *plStack_930;
  undefined8 local_928;
  float fStack_920;
  undefined4 uStack_91c;
  float local_918;
  float local_914;
  float local_910;
  undefined8 local_908;
  float local_900;
  undefined1 local_8f8 [16];
  longlong local_8e8;
  undefined4 local_8e0;
  undefined4 uStack_8dc;
  undefined4 local_8d8;
  float local_8d0;
  float local_8cc;
  float local_8c8;
  float local_8c0;
  float local_8bc;
  float local_8b8;
  float local_8b0;
  float local_8ac;
  float local_8a8;
  float local_8a0;
  float fStack_89c;
  float local_898;
  float local_890;
  float local_88c;
  float local_888;
  float local_880;
  longlong local_878;
  undefined8 local_870;
  float local_868;
  undefined8 local_864;
  float local_85c;
  undefined8 local_858;
  undefined8 uStack_850;
  longlong *local_848;
  undefined1 *puStack_840;
  undefined1 local_838 [8];
  undefined1 local_830 [12];
  undefined1 local_824 [12];
  float local_818;
  float fStack_814;
  float fStack_810;
  undefined4 uStack_80c;
  float local_808;
  float fStack_804;
  float fStack_800;
  undefined4 uStack_7fc;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined1 *local_7e8 [2];
  undefined1 local_7d8 [32];
  undefined8 local_7b8;
  undefined4 local_7a8;
  undefined1 local_798 [49];
  undefined1 local_767;
  undefined4 local_6c8;
  undefined4 local_6c4;
  undefined4 local_6c0;
  longlong *local_6b8;
  undefined1 local_6b0 [112];
  longlong local_640;
  undefined1 local_638 [112];
  longlong local_5c8;
  longlong local_5c0;
  float local_5b8;
  undefined8 local_5b4;
  float local_5ac;
  longlong local_5a8;
  float local_5a0;
  undefined8 local_59c;
  float local_594;
  undefined1 local_588 [16];
  float local_578;
  float fStack_574;
  float fStack_570;
  undefined4 uStack_56c;
  undefined1 local_558 [16];
  float local_548;
  float fStack_544;
  float fStack_540;
  undefined4 uStack_53c;
  undefined1 local_528 [1136];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_978;
  if (param_1[0x1fb] == 0) {
    return;
  }
  cVar2 = (char)param_1[0x270];
  if (cVar2 == '\0') {
    return;
  }
  if ((char)param_1[0x274] == cVar2) {
    return;
  }
  local_950 = *(float *)((longlong)param_1 + 0x138c);
  local_958 = *(undefined8 *)((longlong)param_1 + 0x1384);
  *(undefined1 *)((longlong)param_1 + 0x3f4) = 0;
  (**(code **)(*param_1 + 0xbe0))((int)local_958,&local_878,cVar2);
  cVar4 = (char)param_1[0x270];
  if (cVar4 == '\x01') {
LAB_142cfbcef:
    plVar14 = param_1 + 0x232;
LAB_142cfbcf6:
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(plVar14,0);
  }
  else {
    if (cVar4 == '\x02') {
      plVar14 = param_1 + 0x236;
      goto LAB_142cfbcf6;
    }
    if (cVar4 == '\x03') goto LAB_142cfbcef;
    if (cVar4 == '\x04') {
      plVar14 = param_1 + 0x234;
      goto LAB_142cfbcf6;
    }
  }
  plVar14 = (longlong *)0x0;
  local_8e8 = local_878;
  local_938 = (longlong *)0x0;
  plStack_930 = (longlong *)0x0;
  if (local_878 != 0) {
    lVar6 = FUN_142e20fc0();
    for (lVar8 = local_8e8; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar6) {
        if (param_1[0x23f] != 0) {
          FUN_142c62180(local_798);
          local_858 = &local_938;
          local_767 = 2;
          local_848 = &local_8e8;
          puStack_840 = local_798;
          local_7b8 = 0;
          local_7a8 = 0;
          uStack_850 = param_1;
          puVar13 = (undefined8 *)FUN_140438ef0(0x28,local_7d8);
          if (puVar13 != (undefined8 *)0x0) {
            *puVar13 = &PTR_FUN_143ff7760;
            *(undefined4 *)(puVar13 + 1) = (undefined4)local_858;
            *(undefined4 *)((longlong)puVar13 + 0xc) = local_858._4_4_;
            *(undefined4 *)(puVar13 + 2) = (undefined4)uStack_850;
            *(undefined4 *)((longlong)puVar13 + 0x14) = uStack_850._4_4_;
            puVar13[3] = local_848;
            puVar13[4] = puStack_840;
          }
          local_7e8[0] = &LAB_142ce3a10;
          uVar7 = FUN_14247f500();
          FUN_14247d5a0(uVar7,param_1,local_7e8);
          FUN_142c63c50(local_798);
        }
        break;
      }
    }
  }
  plVar15 = plStack_930;
  param_1[0x272] = (longlong)local_938;
  plVar10 = (longlong *)param_1[0x273];
  if (plStack_930 != plVar10) {
    if (plStack_930 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plStack_930 + 0xc) = *(int *)((longlong)plStack_930 + 0xc) + 1;
      UNLOCK();
      plVar10 = (longlong *)param_1[0x273];
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar5 == 1) && (plVar10 != (longlong *)0x0)) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    param_1[0x273] = (longlong)plVar15;
  }
  *(char *)(param_1 + 0x274) = cVar2;
  if ((local_938 == (longlong *)0x0) ||
     (plVar10 = (longlong *)local_938[2], plVar10 == (longlong *)0x0)) {
LAB_142cfbeac:
    plVar10 = plVar14;
  }
  else {
    lVar8 = UThrobber::GetPrivateStaticClass();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_142cfbeac;
  }
  if ((((param_1[0x1fb] == 0) || (local_938 == (longlong *)0x0)) ||
      (cVar4 = (**(code **)(*local_938 + 0x38))(), fVar18 = local_950, cVar4 != '\0')) ||
     (plVar10 == (longlong *)0x0)) {
    (**(code **)(*param_1 + 0xbe8))(param_1);
    goto LAB_142cfc7bc;
  }
  if ((byte)(cVar2 - 3U) < 2) {
    fVar20 = (float)local_958;
    fVar21 = local_958._4_4_;
    if ((((float)local_958 == 0.0) && (local_958._4_4_ == 0.0)) && (local_950 == 0.0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      lVar8 = FUN_142cc1670(param_1[0x1fb]);
      plVar10 = local_938;
      plVar15 = plVar14;
      if (local_938 != (longlong *)0x0) {
        lVar6 = local_938[1];
        lVar9 = FUN_142e219b0();
        for (; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
          if (lVar6 == lVar9) {
            bVar3 = true;
            goto LAB_142cfbfb1;
          }
        }
        bVar3 = false;
LAB_142cfbfb1:
        if (bVar3) {
          plVar15 = plVar10;
        }
      }
      plVar10 = (longlong *)FUN_142c6f640(plVar15,1);
      local_908 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_900 = DAT_1468b5d98;
      if (plVar10 == (longlong *)0x0) {
LAB_142cfc01e:
        plVar10 = plVar14;
      }
      else {
        lVar6 = UAnimMontage::GetPrivateStaticClass();
        if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
            != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_142cfc01e;
      }
      if (cVar2 == '\x03') {
        uVar22 = *(undefined4 *)(param_1[0x231] + 0x44);
      }
      else {
        uVar22 = *(undefined4 *)(param_1[0x231] + 0x48);
      }
      uVar17 = (**(code **)(*local_938 + 0x60))();
      if ((plVar10 != (longlong *)0x0) &&
         (cVar4 = UBlockablePlayerInputComponent::GetIsGrapplingPressed(plVar10), cVar4 != '\0')) {
        FUN_142295fa0(plVar10,local_528);
        iVar5 = FUN_142269cc0(local_528);
        if (0 < iVar5) {
          FTransformCurve::Evaluate(local_528,local_588,uVar22,0x3f800000);
          FTransformCurve::Evaluate(local_528,local_558,uVar17,0x3f800000);
          local_808 = local_548;
          fStack_804 = fStack_544;
          fStack_800 = fStack_540;
          uStack_7fc = uStack_53c;
          local_818 = local_578;
          fStack_814 = fStack_574;
          fStack_810 = fStack_570;
          uStack_80c = uStack_56c;
          fStack_920 = fStack_540 - fStack_570;
          local_908 = CONCAT44(fStack_544 - fStack_574,local_548 - local_578);
          local_900 = fStack_920;
        }
        plVar14 = (longlong *)(ulonglong)(0 < iVar5);
        FUN_142255920(local_528);
      }
      lVar6 = *(longlong *)(param_1[0x1fb] + 0x168);
      if (lVar6 == 0) {
        local_868 = DAT_1468b5d98;
        puVar13 = &local_870;
        local_870 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      }
      else {
        local_7f8 = *(undefined4 *)(lVar6 + 0x220);
        uStack_7f4 = *(undefined4 *)(lVar6 + 0x224);
        uStack_7f0 = *(undefined4 *)(lVar6 + 0x228);
        uStack_7ec = *(undefined4 *)(lVar6 + 0x22c);
        puVar13 = (undefined8 *)&local_8e0;
        local_8e0 = local_7f8;
        local_8d8 = uStack_7f0;
        uStack_8dc = uStack_7f4;
      }
      local_950 = *(float *)(puVar13 + 1);
      local_918 = (float)*puVar13 - fVar20;
      local_910 = local_950 - fVar18;
      local_914 = (float)((ulonglong)*puVar13 >> 0x20) - fVar21;
      if (cVar2 == '\x03') {
        local_8cc = -1.0;
      }
      else {
        local_8cc = 1.0;
      }
      fVar18 = local_914 * local_914 + local_918 * local_918;
      if (fVar18 == 1.0) {
        local_940 = local_910;
        local_944 = local_914;
        local_948 = local_918;
        if (local_910 != 0.0) {
LAB_142cfc2ad:
          local_940 = 0.0;
        }
      }
      else {
        if (1e-08 <= fVar18) {
          auVar19 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
          local_880 = auVar19._0_4_;
          local_880 = local_880 + local_880 * (0.5 - fVar18 * 0.5 * local_880 * local_880);
          local_880 = local_880 + local_880 * (0.5 - fVar18 * 0.5 * local_880 * local_880);
          local_944 = local_914 * local_880;
          local_948 = local_880 * local_918;
          goto LAB_142cfc2ad;
        }
        local_948 = DAT_1468b5d90;
        local_944 = DAT_1468b5d94;
        local_940 = DAT_1468b5d98;
      }
      local_8c8 = local_940 * local_8cc;
      local_8d0 = local_948 * local_8cc;
      local_8cc = local_944 * local_8cc;
      FVector::Rotation(&local_8d0,local_8f8);
      FRotator::RotateVector(local_8f8,&local_8c0,&local_908);
      local_8b0 = local_918 - local_8c0;
      local_8ac = local_914 - local_8bc;
      local_8a8 = local_910 - local_8b8;
      FRotator::UnrotateVector(local_8f8,&local_890,&local_8b0);
      if (lVar8 == 0) {
        pfVar16 = (float *)&local_864;
        local_864 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        local_85c = DAT_1468b5d98;
      }
      else {
        local_950 = *(float *)(lVar8 + 0x4a4);
        uVar7 = *(undefined8 *)(lVar8 + 0x49c);
        pfVar11 = (float *)FRotator::UnrotateVector(local_8f8,local_830,&local_918);
        pfVar16 = &local_8a0;
        local_8a0 = (float)uVar7 - *pfVar11;
        fStack_89c = (float)((ulonglong)uVar7 >> 0x20) - pfVar11[1];
        local_898 = local_950 - pfVar11[2];
      }
      fStack_920 = pfVar16[2];
      lVar8 = *(longlong *)pfVar16;
      uVar7 = *(undefined8 *)(param_1[0x1fb] + 0x53c);
      local_950 = *(float *)(param_1[0x1fb] + 0x544);
      pfVar11 = (float *)FRotator::UnrotateVector(local_8f8,local_824,&local_918);
      fVar18 = local_950 - pfVar11[2];
      fVar21 = (float)uVar7 - *pfVar11;
      fVar20 = (float)((ulonglong)uVar7 >> 0x20) - pfVar11[1];
      local_950 = fVar18;
      FUN_142cdd1c0(&local_6c8);
      local_5b8 = fStack_920 + local_888;
      fStack_920 = fVar18 + local_888;
      local_5c0 = CONCAT44((float)((ulonglong)lVar8 >> 0x20) + local_88c,(float)lVar8 + local_890);
      local_5a0 = pfVar16[2];
      local_594 = local_950;
      local_5b4 = CONCAT44(fVar20 + local_88c,fVar21 + local_890);
      local_6b8 = (longlong *)0x0;
      if ((char)plVar14 != '\0') {
        local_6b8 = plVar10;
      }
      local_59c = CONCAT44(fVar20,fVar21);
      local_6c4 = 0;
      local_928 = (undefined1 *)lVar8;
      local_6c8 = uVar17;
      local_6c0 = uVar22;
      local_5ac = fStack_920;
      local_5a8 = lVar8;
      if (param_1[0x231] != 0) {
        lVar8 = 0x60;
        if (cVar2 != '\x03') {
          lVar8 = 0x150;
        }
        lVar8 = lVar8 + param_1[0x231];
        FRichCurve::operator=(local_6b0,lVar8);
        local_640 = *(longlong *)(lVar8 + 0x70);
        lVar8 = 0xd8;
        if (cVar2 != '\x03') {
          lVar8 = 0x1c8;
        }
        lVar6 = param_1[0x231];
        FRichCurve::operator=(local_638,lVar8 + lVar6);
        local_5c8 = *(longlong *)(lVar8 + lVar6 + 0x70);
      }
      *(undefined1 *)(param_1 + 0x240) = 1;
      *(undefined4 *)((longlong)param_1 + 0x1204) = 0;
      *(undefined4 *)(param_1 + 0x241) = local_6c8;
      *(undefined4 *)((longlong)param_1 + 0x120c) = local_6c4;
      *(undefined4 *)(param_1 + 0x242) = local_6c0;
      param_1[0x243] = (longlong)local_6b8;
      FRichCurve::operator=(param_1 + 0x244,local_6b0);
      param_1[0x252] = local_640;
      FRichCurve::operator=(param_1 + 0x253,local_638);
      param_1[0x261] = local_5c8;
      param_1[0x262] = local_5c0;
      *(undefined8 *)((longlong)param_1 + 0x131c) = local_5b4;
      *(float *)(param_1 + 0x263) = local_5b8;
      param_1[0x265] = local_5a8;
      *(float *)((longlong)param_1 + 0x1324) = local_5ac;
      *(float *)(param_1 + 0x266) = local_5a0;
      *(undefined8 *)((longlong)param_1 + 0x1334) = local_59c;
      *(float *)((longlong)param_1 + 0x133c) = local_594;
      FUN_142d03d60(param_1,0);
      FRichCurve::~FRichCurve(local_638);
      FRichCurve::~FRichCurve(local_6b0);
    }
  }
  plVar14 = local_938;
  local_928 = &LAB_142cf6590;
  fStack_920 = 0.0;
  pplVar12 = (longlong **)FMemory::Realloc(0,0x30);
  local_858 = pplVar12;
  if (pplVar12 != (longlong **)0x0) {
    *pplVar12 = (longlong *)&PTR_FUN_143fcff50;
    FWeakObjectPtr::operator=(pplVar12 + 1,param_1);
    *(undefined4 *)(pplVar12 + 2) = (undefined4)local_928;
    *(undefined4 *)((longlong)pplVar12 + 0x14) = local_928._4_4_;
    *(float *)(pplVar12 + 3) = fStack_920;
    *(undefined4 *)((longlong)pplVar12 + 0x1c) = uStack_91c;
    plVar10 = (longlong *)FDelegateHandle::GenerateNewID();
    pplVar12[5] = plVar10;
    *pplVar12 = (longlong *)&PTR_FUN_143fcff98;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar14 + 0xb,1);
    (*(code *)(*pplVar12)[4])(pplVar12,local_838);
    iVar5 = (int)plVar14[0xc];
    *(int *)(plVar14 + 0xc) = iVar5 + 1;
    if (*(int *)((longlong)plVar14 + 100) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14 + 0xb,iVar5);
    }
    puVar13 = (undefined8 *)((longlong)iVar5 * 0x10 + plVar14[0xb]);
    *puVar13 = pplVar12;
    *(undefined4 *)(puVar13 + 1) = 3;
  }
  iVar5 = FUN_14233f450(param_1);
  if (iVar5 == 3) {
    (**(code **)(*param_1 + 0x260))(param_1);
    *(char *)(param_1 + 0x275) = (char)param_1[0x275] + '\x01';
    *(char *)((longlong)param_1 + 0x13a9) = cVar2;
  }
LAB_142cfc7bc:
  plVar14 = plStack_930;
  if (plStack_930 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_930 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_930)(plStack_930);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  return;
}



// FUNCTION 142cfc830 FUN_142cfc830 body=143 status=ok
// SIG undefined FUN_142cfc830(void)

void FUN_142cfc830(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  if (((param_1[0x2ef] != 0) && ((*(byte *)((longlong)param_1 + 0x18cc) & 2) == 0)) &&
     (param_1[0x2f] != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x5c0))();
    if (cVar1 != '\0') {
      FUN_142cc8440(param_1 + 0x2ee,param_2);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xea1) = 0;
  FUN_14234aae0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142cfc8c0 FUN_142cfc8c0 body=758 status=ok
// SIG undefined FUN_142cfc8c0(void)

undefined8 *
FUN_142cfc8c0(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined1 local_b8 [12];
  undefined4 local_ac;
  
  if (((*(byte *)(*param_1 + 0x4b4) & 0x20) != 0) ||
     (1 < (ulonglong)(DAT_1468c21b0 - param_1[0x15]))) {
    _guard_xfg_dispatch_icall_nop(local_b8,0,0x90);
    local_ac = 0x3f800000;
    FUN_140729f20(param_1 + 1,local_b8);
    *(ulonglong *)((longlong)param_1 + 0x9c) = CONCAT44(DAT_1466ad1f4,DAT_1466ad1f0);
    *(float *)((longlong)param_1 + 0xa4) = DAT_1466ad1f8;
  }
  fVar5 = *(float *)((longlong)param_1 + 0x9c);
  if (((((-DAT_1466ad1f0 < fVar5) && (fVar5 < DAT_1466ad1f0)) &&
       (-DAT_1466ad1f4 < *(float *)(param_1 + 0x14))) &&
      ((*(float *)(param_1 + 0x14) < DAT_1466ad1f4 &&
       (fVar6 = *(float *)((longlong)param_1 + 0xa4), -DAT_1466ad1f8 < fVar6)))) &&
     (fVar6 < DAT_1466ad1f8)) {
    lVar2 = *param_1;
    fVar9 = DAT_1466ad1f0;
    fVar10 = DAT_1466ad1f8;
    fVar7 = DAT_1466ad1f4;
    if ((lVar2 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x178), lVar3 != 0)) {
      fVar9 = *(float *)(lVar3 + 0x220);
      fVar10 = *(float *)(lVar3 + 0x228);
      fVar7 = *(float *)(lVar3 + 0x224);
    }
    if (((fVar7 - *(float *)(param_1 + 0x14)) * (fVar7 - *(float *)(param_1 + 0x14)) +
         (fVar9 - fVar5) * (fVar9 - fVar5) + (fVar10 - fVar6) * (fVar10 - fVar6) <
         *(float *)(lVar2 + 0x2100) * *(float *)(lVar2 + 0x2100)) &&
       (cVar4 = FUN_142cf3e20(param_1 + 1), cVar4 != '\0')) goto LAB_142cfcac0;
  }
  if ((*param_1 == 0) || (lVar2 = *(longlong *)(*param_1 + 0x178), lVar2 == 0)) {
    uVar8 = CONCAT44(DAT_1466ad1f4,DAT_1466ad1f0);
    fVar5 = DAT_1466ad1f8;
  }
  else {
    uVar8 = *(undefined8 *)(lVar2 + 0x220);
    fVar5 = (float)*(undefined8 *)(lVar2 + 0x228);
  }
  *(undefined8 *)((longlong)param_1 + 0x9c) = uVar8;
  *(float *)((longlong)param_1 + 0xa4) = fVar5;
  FUN_142d06e30(param_1,param_4,param_5);
LAB_142cfcac0:
  *param_2 = *param_5;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_5 + 1);
  fVar5 = *(float *)(param_5 + 1);
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    fVar5 = (float)FUN_142cfcbf0(param_1 + 1,param_2);
  }
  fVar6 = *(float *)(*param_1 + 0x5a8);
  if (*(float *)(*param_1 + 0x5a8) <= 0.0) {
    fVar6 = 0.0;
  }
  fVar6 = (float)FMath::FInterpTo((int)param_1[0x13],0,param_3,fVar6);
  *(float *)(param_1 + 0x13) = fVar6;
  *(float *)(param_2 + 1) = fVar6 + fVar5;
  FUN_140729f20(*param_1 + 0x420,param_1 + 1);
  puVar1 = (uint *)(*param_1 + 0x410);
  *puVar1 = *puVar1 ^ ((uint)*(byte *)(param_1 + 1) ^ *(uint *)(*param_1 + 0x410)) & 1;
  puVar1 = (uint *)(*param_1 + 0x410);
  *puVar1 = *puVar1 ^ ((uint)*(byte *)(param_1 + 1) * 2 ^ *(uint *)(*param_1 + 0x410)) & 2;
  *(uint *)(*param_1 + 0x410) = *(uint *)(*param_1 + 0x410) & 0xfffffffb;
  *(int *)(*param_1 + 0x414) = (int)param_1[0x13];
  *(undefined4 *)(*param_1 + 0x418) = 0;
  param_1[0x15] = DAT_1468c21b0;
  return param_2;
}



// FUNCTION 142cfcbc0 FUN_142cfcbc0 body=40 status=ok
// SIG undefined FUN_142cfcbc0(void)

undefined8 FUN_142cfcbc0(longlong param_1,undefined8 param_2)

{
  FUN_142cfc8c0(param_1 + 0x2048);
  return param_2;
}



// FUNCTION 142cfcbf0 FUN_142cfcbf0 body=274 status=ok
// SIG undefined FUN_142cfcbf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_142cfcbf0(longlong param_1,float *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b31858) {
    _Init_thread_header(&DAT_146b31858);
    if (DAT_146b31858 == -1) {
      _DAT_146b31854 = 2.15;
      _Init_thread_footer(&DAT_146b31858);
    }
  }
  return (param_2[2] -
         (((float)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20) * param_2[1] +
           (float)*(undefined8 *)(param_1 + 0x38) * *param_2 +
          param_2[2] * *(float *)(param_1 + 0x40)) -
         ((float)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * *(float *)(param_1 + 0x3c) +
          (float)*(undefined8 *)(param_1 + 0x20) * *(float *)(param_1 + 0x38) +
         *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x40))) / ABS(*(float *)(param_1 + 0x40))
         ) + _DAT_146b31854;
}



// FUNCTION 142cfcd10 FUN_142cfcd10 body=102 status=ok
// SIG undefined FUN_142cfcd10(void)

void FUN_142cfcd10(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x418) == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x408) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x408) + 0xc);
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
      return;
    }
  }
  FUN_142ce61d0(param_1 + 0x400);
  return;
}



// FUNCTION 142cfcd80 FUN_142cfcd80 body=900 status=ok
// SIG undefined FUN_142cfcd80(void)

void FUN_142cfcd80(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *local_48;
  undefined8 local_40;
  
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_14083bac0(param_2,&local_48,1);
  plVar2 = local_48 + (int)local_40;
  plVar16 = local_48;
  do {
    if (plVar16 == plVar2) {
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
        return;
      }
      return;
    }
    lVar5 = *plVar16;
    if ((lVar5 != 0) && (lVar6 = *(longlong *)(lVar5 + 0xa48), lVar6 != 0)) {
      piVar7 = *(int **)(param_1 + 0x470);
      iVar3 = *(int *)(param_1 + 0x478);
      if (piVar7 != piVar7 + (longlong)iVar3 * 0xc) {
        lVar15 = 0;
        piVar14 = piVar7 + 2;
        do {
          lVar9 = FWeakObjectPtr::Get(piVar14 + -2);
          if (lVar9 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != *piVar14) && (*(longlong *)(piVar14 + 2) != 0)) {
              lVar9 = FUN_141796df0();
              FWeakObjectPtr::operator=(piVar14 + -2,lVar9);
              if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *piVar14 = DAT_1464b56f4;
              }
              lVar9 = FWeakObjectPtr::Get(piVar14 + -2);
              if (lVar9 != 0) goto LAB_142cfceb4;
            }
          }
          else {
LAB_142cfceb4:
            lVar10 = UObject::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (bVar8) {
              lVar10 = FWeakObjectPtr::Get(piVar14 + -2);
              lVar9 = lVar15;
              if (lVar10 == 0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                if ((DAT_1464b56f4 != *piVar14) && (*(longlong *)(piVar14 + 2) != 0)) {
                  lVar10 = FUN_141796df0();
                  FWeakObjectPtr::operator=(piVar14 + -2,lVar10);
                  if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    *piVar14 = DAT_1464b56f4;
                  }
                  lVar10 = FWeakObjectPtr::Get(piVar14 + -2);
                  if (lVar10 != 0) goto LAB_142cfcf6c;
                }
LAB_142cfd034:
                lVar10 = lVar15;
                if (*(longlong *)(lVar5 + 0x718) != 0) {
                  lVar10 = *(longlong *)(*(longlong *)(lVar5 + 0x718) + 0x48);
                }
                if (lVar10 != lVar9) goto LAB_142cfd08a;
              }
              else {
LAB_142cfcf6c:
                lVar11 = UObject::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                  bVar8 = false;
                }
                else {
                  bVar8 = true;
                }
                if (!bVar8) goto LAB_142cfd034;
                lVar9 = UBlueprint::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar8 = false;
                }
                else {
                  bVar8 = true;
                }
                lVar9 = lVar10;
                if (!bVar8) goto LAB_142cfd034;
                lVar10 = *(longlong *)(lVar10 + 0x30);
                lVar11 = lVar15;
                if (lVar10 != 0) {
                  lVar12 = UObject::GetPrivateStaticClass();
                  lVar13 = lVar10;
                  do {
                    lVar11 = lVar10;
                    if (lVar13 == lVar12) break;
                    lVar13 = *(longlong *)(lVar13 + 0x30);
                    lVar11 = lVar15;
                  } while (lVar13 != 0);
                }
                if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                  bVar8 = false;
                }
                else {
                  bVar8 = true;
                }
                if (!bVar8) goto LAB_142cfd034;
              }
              iVar4 = *(int *)(lVar6 + 0x420);
              *(int *)(lVar6 + 0x420) = iVar4 + 1;
              if (*(int *)(lVar6 + 0x424) < iVar4 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (lVar6 + 0x418,iVar4);
              }
              *(undefined8 *)(*(longlong *)(lVar6 + 0x418) + (longlong)iVar4 * 8) =
                   *(undefined8 *)(piVar14 + 8);
              *(undefined1 *)(lVar6 + 0x428) = 1;
            }
          }
LAB_142cfd08a:
          piVar1 = piVar14 + 10;
          piVar14 = piVar14 + 0xc;
        } while (piVar1 != piVar7 + (longlong)iVar3 * 0xc);
      }
    }
    plVar16 = plVar16 + 1;
  } while( true );
}



// FUNCTION 142cfd110 FUN_142cfd110 body=1395 status=ok
// SIG undefined FUN_142cfd110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cfd110(longlong param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  size_t _Size;
  undefined8 *puVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  longlong *local_190;
  byte *local_188;
  byte local_178;
  char local_177;
  int local_174;
  int local_170;
  uint local_16c;
  uint local_168;
  longlong local_160;
  undefined4 local_158;
  undefined4 local_154;
  longlong local_150;
  longlong local_148;
  undefined4 local_140;
  undefined4 local_13c;
  uint local_138;
  longlong local_130;
  int *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined1 local_e0 [64];
  undefined1 *local_a0;
  undefined8 local_98;
  undefined1 local_90 [64];
  undefined1 *local_50;
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *param_3 = -1;
  local_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_160 = param_1;
  local_128 = param_3;
  local_e8 = param_2;
  uVar6 = (**(code **)(*param_2 + 0x6c8))(param_2);
  local_138 = uVar6;
  uVar9 = FUN_142c61880(param_1,&local_f8);
  FUN_142c65940(*(undefined8 *)(param_1 + 0x18),param_2,uVar9);
  if (param_2[0x23] == 0) {
    return;
  }
  if ((int)uVar6 < 1) {
    return;
  }
  iVar7 = (int)param_2[0xdf] / (int)uVar6 + -1;
  local_170 = 0;
  if (-1 < iVar7) {
    local_170 = iVar7;
  }
  *param_3 = local_170;
  local_170 = local_170 * uVar6;
  FUN_142cf4830(param_2);
  local_108 = *(longlong *)(param_1 + 0x10);
  iVar7 = *param_3 * uVar6;
  local_16c = 0;
  local_168 = 0;
  local_50 = (undefined1 *)0x0;
  local_44 = 0;
  local_a0 = (undefined1 *)0x0;
  local_98 = 0;
  local_174 = iVar7;
  local_48 = uVar6;
  TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(local_90);
  _Size = (longlong)(int)uVar6 * 8;
  puVar14 = local_90;
  if (local_50 != (undefined1 *)0x0) {
    puVar14 = local_50;
  }
  local_130 = (longlong)(int)uVar6;
  _guard_xfg_dispatch_icall_nop(puVar14,0,_Size);
  uVar18 = local_98;
  lVar15 = (longlong)(int)local_98;
  iVar8 = uVar6 + (int)local_98;
  local_98 = CONCAT44(local_98._4_4_,iVar8);
  if (local_98._4_4_ < iVar8) {
    TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
              (local_e0,uVar18 & 0xffffffff);
  }
  puVar14 = local_e0;
  if (local_a0 != (undefined1 *)0x0) {
    puVar14 = local_a0;
  }
  _guard_xfg_dispatch_icall_nop(puVar14 + lVar15 * 8,0,_Size);
  lVar15 = 0;
  local_177 = '\0';
  if ((int)uVar6 < 1) {
LAB_142cfd3d4:
    if (*(char *)(param_1 + 0x193) != '\0') {
      *param_3 = -1;
      goto LAB_142cfd63a;
    }
  }
  else {
    uVar6 = 1;
    iVar8 = iVar7;
    do {
      local_148 = 0;
      local_150 = 0;
      local_178 = *(byte *)(local_108 + 0xd1) & 1;
      local_188 = &local_178;
      local_190 = &local_150;
      local_198 = &local_148;
      cVar5 = FUN_142ceed50(param_1,param_2,iVar8,iVar8 - iVar7);
      lVar12 = local_150;
      bVar4 = local_178;
      if (cVar5 != '\0') {
        puVar14 = local_90;
        if (local_50 != (undefined1 *)0x0) {
          puVar14 = local_50;
        }
        local_177 = '\x01';
        *(longlong *)(puVar14 + lVar15 * 8) = local_148;
        if (((local_178 != 0) ||
            ((param_1 = local_160, local_150 != 0 && (0 < *(int *)(local_150 + 8))))) &&
           (lVar10 = (**(code **)(*param_2 + 0x560))(param_2,iVar8), param_1 = local_160,
           iVar7 = local_174, lVar10 != 0)) {
          lVar11 = FUN_1429b6de0();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          param_1 = local_160;
          iVar7 = local_174;
          if (bVar3) {
            local_16c = local_16c | uVar6;
            if (bVar4 == 0) {
              puVar14 = local_e0;
              if (local_a0 != (undefined1 *)0x0) {
                puVar14 = local_a0;
              }
              *(longlong *)(puVar14 + lVar15 * 8) = lVar12;
            }
            else {
              local_168 = local_168 | uVar6;
            }
          }
        }
      }
      iVar8 = iVar8 + 1;
      uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      lVar15 = lVar15 + 1;
    } while (lVar15 < local_130);
    param_3 = local_128;
    if (local_177 == '\0') goto LAB_142cfd3d4;
  }
  uVar6 = local_138;
  iVar8 = local_170 + local_138;
  if ((int)param_2[0xdf] <= iVar8) {
    if (0 < (int)local_138) {
      uVar18 = (ulonglong)local_138;
      iVar17 = (iVar7 - local_170) - local_138;
      do {
        lVar15 = *param_2;
        uVar9 = (**(code **)(lVar15 + 0x560))(param_2,iVar17 + iVar8);
        (**(code **)(lVar15 + 0x568))(param_2,iVar8,uVar9);
        iVar8 = iVar8 + 1;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    iVar7 = iVar7 + uVar6;
  }
  lVar15 = 0;
  if (0 < local_130) {
    local_174 = iVar7 - local_170;
    uVar6 = 1;
    do {
      iVar7 = local_170;
      puVar14 = local_90;
      if (local_50 != (undefined1 *)0x0) {
        puVar14 = local_50;
      }
      if ((*(longlong *)(puVar14 + lVar15 * 8) != 0) &&
         ((**(code **)(*param_2 + 0x568))(param_2,local_170), (local_16c & uVar6) != 0)) {
        local_150 = 0;
        lVar12 = (**(code **)(*param_2 + 0x5a8))(param_2,iVar7,0,0);
        plVar13 = (longlong *)(**(code **)(*param_2 + 0x560))(param_2,local_174 + iVar7);
        if ((lVar12 != 0) && (plVar13 != (longlong *)0x0)) {
          if ((local_168 & uVar6) == 0) {
            puVar14 = local_e0;
            if (local_a0 != (undefined1 *)0x0) {
              puVar14 = local_a0;
            }
            puVar2 = *(undefined8 **)(puVar14 + lVar15 * 8);
            if (puVar2 != (undefined8 *)0x0) {
              plVar16 = (longlong *)*puVar2;
              plVar1 = plVar16 + *(int *)(puVar2 + 1);
              iVar7 = local_170;
              for (; plVar16 != plVar1; plVar16 = plVar16 + 1) {
                local_128 = (int *)*plVar16;
                local_120 = 0x202ffff;
                local_11c = 0xffffffff;
                local_170 = iVar7;
                cVar5 = (**(code **)(*plVar13 + 0x428))(plVar13,&local_128,&local_100,0);
                if (cVar5 == '\0') {
                  local_148 = *plVar16;
                  local_140 = 0x202ffff;
                  local_13c = 0xffffffff;
                  cVar5 = (**(code **)(*plVar13 + 0x400))(plVar13,&local_148,&local_118);
                  if (cVar5 == '\0') {
                    local_160 = *plVar16;
                    local_158 = 0x202ffff;
                    local_154 = 0xffffffff;
                    cVar5 = (**(code **)(*plVar13 + 1000))(plVar13,&local_160,&local_118);
                    if (cVar5 != '\0') {
                      FUN_1425a2750(lVar12,*plVar16,(undefined4)local_118);
                    }
                  }
                  else {
                    local_f8 = (undefined4)local_118;
                    uStack_f4 = local_118._4_4_;
                    uStack_f0 = (undefined4)uStack_110;
                    uStack_ec = uStack_110._4_4_;
                    FUN_1425a2be0(lVar12,*plVar16,&local_f8);
                  }
                }
                else {
                  FUN_1425a28b0(lVar12,*plVar16,local_100);
                }
                param_2 = local_e8;
                iVar7 = local_170;
              }
            }
          }
          else {
            FUN_142589350(lVar12,plVar13,*(undefined1 *)(local_108 + 0xd0));
          }
        }
      }
      local_170 = iVar7 + 1;
      uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      lVar15 = lVar15 + 1;
    } while (lVar15 < local_130);
  }
LAB_142cfd63a:
  if (local_a0 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  if (local_50 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142cfd690 FUN_142cfd690 body=242 status=ok
// SIG undefined FUN_142cfd690(void)

undefined8 * FUN_142cfd690(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_2;
  if (param_2 != (longlong *)0x0) {
    local_38 = (**(code **)(*param_2 + 0x148))(param_2);
    local_30 = &local_38;
    local_28 = FUN_14073d760(&local_38,DAT_146b31748);
    puVar2 = local_30;
    local_20 = &local_38;
    local_18 = 0;
    puVar3 = (undefined8 *)FUN_14073d760(local_30,local_28);
    puVar4 = (undefined8 *)FUN_14073d760(local_20,local_18);
    for (; puVar3 != puVar4; puVar3 = (undefined8 *)FUN_14073d760(puVar2,*puVar3)) {
      lVar1 = puVar3[2];
      if (*(longlong **)(lVar1 + 0x408) == param_2) {
        param_1[2] = *(undefined8 *)(lVar1 + 0x118);
        param_1[1] = *(undefined8 *)(lVar1 + 0x18);
        return param_1;
      }
    }
  }
  return param_1;
}



// FUNCTION 142cfd790 FUN_142cfd790 body=23 status=ok
// SIG undefined FUN_142cfd790(void)

undefined8 FUN_142cfd790(undefined8 param_1)

{
  FUN_142cfd690();
  return param_1;
}



// FUNCTION 142cfd7b0 FUN_142cfd7b0 body=409 status=ok
// SIG undefined FUN_142cfd7b0(void)

void FUN_142cfd7b0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_res10;
  undefined1 local_18 [16];
  
  local_res10 = param_2;
  lVar5 = FUN_142c6f130();
  if ((param_2 != lVar5) && (param_2 != 0)) {
    plVar1 = (longlong *)(param_1 + 0x170);
    plVar7 = (longlong *)*plVar1;
    plVar2 = plVar7 + *(int *)(param_1 + 0x178);
    for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
      if (*plVar7 == param_2) {
        bVar4 = true;
        goto LAB_142cfd811;
      }
    }
    bVar4 = false;
LAB_142cfd811:
    if (param_3 == '\0') {
      if (bVar4) {
        lVar5 = *(longlong *)(param_1 + 0x100);
        lVar8 = (longlong)*(int *)(param_1 + 0x108) * 0x10 + lVar5;
        for (; lVar5 != lVar8; lVar5 = lVar5 + 0x10) {
          if ((*(longlong *)(lVar5 + 8) != 0) &&
             (*(longlong *)(*(longlong *)(lVar5 + 8) + 0x118) == param_2)) {
            return;
          }
        }
        plVar7 = *(longlong **)(param_1 + 0x110);
        plVar2 = plVar7 + *(int *)(param_1 + 0x118);
        for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
          if ((*plVar7 != 0) && (*(longlong *)(*plVar7 + 0x118) == param_2)) {
            return;
          }
        }
        plVar7 = *(longlong **)(param_1 + 0x120);
        plVar2 = plVar7 + *(int *)(param_1 + 0x128);
        for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
          if ((*plVar7 != 0) && (*(longlong *)(*plVar7 + 0x118) == param_2)) {
            return;
          }
        }
        uVar6 = FUN_142c61880(param_1,local_18);
        FUN_142c81170(*(undefined8 *)(param_1 + 0x18),param_2,uVar6);
        TArray<FName,FDefaultAllocator>::Remove(plVar1,&local_res10);
      }
    }
    else if (!bVar4) {
      uVar6 = FUN_142c61880(param_1,local_18);
      FUN_142c66430(*(undefined8 *)(param_1 + 0x18),param_2,uVar6);
      iVar3 = *(int *)(param_1 + 0x178);
      *(int *)(param_1 + 0x178) = iVar3 + 1;
      if (*(int *)(param_1 + 0x17c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
      }
      *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = param_2;
    }
  }
  return;
}



// FUNCTION 142cfd950 FUN_142cfd950 body=529 status=ok
// SIG undefined FUN_142cfd950(void)

void FUN_142cfd950(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_142cfda8f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_142cfda8f:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar12 = (uint *)((longlong)iStack_1c * 0xa0 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[0x27] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[0x26] =
             *(uint *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 142cfdb70 FUN_142cfdb70 body=126 status=ok
// SIG undefined FUN_142cfdb70(void)

void FUN_142cfdb70(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x98))) {
    iVar4 = *(int *)(param_1 + 0x98) - param_2;
    if (param_3 <= iVar4) {
      iVar4 = param_3;
    }
    if (iVar4 != 0) {
      iVar2 = *(int *)(param_1 + 0x98);
      iVar3 = (iVar2 - iVar4) - param_2;
      if (iVar3 != 0) {
        lVar1 = *(longlong *)(param_1 + 0x90);
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar1 + (longlong)param_2 * 8),
                   (void *)(lVar1 + (longlong)(iVar4 + param_2) * 8),(longlong)iVar3 << 3);
        iVar2 = *(int *)(param_1 + 0x98);
      }
      *(int *)(param_1 + 0x98) = iVar2 - iVar4;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x90));
    }
  }
  return;
}



// FUNCTION 142cfdbf0 FUN_142cfdbf0 body=1241 status=ok
// SIG undefined FUN_142cfdbf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cfdbf0(longlong param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  longlong *local_180;
  byte *local_178;
  byte local_168 [4];
  int local_164;
  uint local_160;
  uint local_15c;
  longlong local_158;
  undefined4 local_150;
  undefined4 local_14c;
  longlong local_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined1 local_e0 [64];
  undefined1 *local_a0;
  undefined8 local_98;
  undefined1 local_90 [64];
  undefined1 *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  *param_3 = -1;
  lVar14 = 0;
  local_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_158 = param_1;
  local_e8 = param_2;
  iVar5 = (**(code **)(*param_2 + 0x6c8))(param_2);
  lVar11 = (longlong)iVar5;
  if ((param_2[0x23] != 0) && (0 < iVar5)) {
    iVar6 = (int)param_2[0xdf] / iVar5 + -1;
    iVar15 = 0;
    if (-1 < iVar6) {
      iVar15 = iVar6;
    }
    *param_3 = iVar15;
    FUN_142cf4830(param_2);
    local_120 = *(longlong *)(param_1 + 0x10);
    iVar15 = *param_3 * iVar5;
    local_160 = 0;
    local_15c = 0;
    local_50 = (undefined1 *)0x0;
    local_44 = 0;
    local_a0 = (undefined1 *)0x0;
    local_98 = 0;
    local_164 = iVar15;
    local_48 = iVar5;
    TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(local_90);
    puVar9 = local_90;
    if (local_50 != (undefined1 *)0x0) {
      puVar9 = local_50;
    }
    local_110 = lVar11;
    _guard_xfg_dispatch_icall_nop(puVar9,0,lVar11 * 8);
    lVar13 = (longlong)(int)local_98;
    iVar6 = iVar5 + (int)local_98;
    local_98 = CONCAT44(local_98._4_4_,iVar6);
    if (local_98._4_4_ < iVar6) {
      TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(local_e0);
    }
    puVar9 = local_e0;
    if (local_a0 != (undefined1 *)0x0) {
      puVar9 = local_a0;
    }
    _guard_xfg_dispatch_icall_nop(puVar9 + lVar13 * 8,0,lVar11 * 8);
    if (0 < iVar5) {
      uVar10 = 1;
      iVar5 = iVar15;
      do {
        local_140 = 0;
        local_148 = 0;
        local_168[0] = *(byte *)(local_120 + 0xd1) & 1;
        local_178 = local_168;
        local_180 = &local_148;
        local_188 = &local_140;
        cVar4 = FUN_142ceed50(param_1,param_2,iVar5,iVar5 - iVar15);
        lVar11 = local_148;
        bVar3 = local_168[0];
        if (cVar4 != '\0') {
          puVar9 = local_90;
          if (local_50 != (undefined1 *)0x0) {
            puVar9 = local_50;
          }
          *(longlong *)(puVar9 + lVar14 * 8) = local_140;
          if (((local_168[0] != 0) ||
              ((param_1 = local_158, iVar15 = local_164, local_148 != 0 &&
               (0 < *(int *)(local_148 + 8))))) &&
             (lVar13 = (**(code **)(*param_2 + 0x560))(param_2,iVar5), param_1 = local_158,
             iVar15 = local_164, lVar13 != 0)) {
            lVar7 = FUN_1429b6de0();
            if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            param_1 = local_158;
            iVar15 = local_164;
            if (bVar2) {
              local_160 = local_160 | uVar10;
              if (bVar3 == 0) {
                puVar9 = local_e0;
                if (local_a0 != (undefined1 *)0x0) {
                  puVar9 = local_a0;
                }
                *(longlong *)(puVar9 + lVar14 * 8) = lVar11;
              }
              else {
                local_15c = local_15c | uVar10;
              }
            }
          }
        }
        iVar5 = iVar5 + 1;
        uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
        lVar14 = lVar14 + 1;
        lVar11 = local_110;
      } while (lVar14 < local_110);
    }
    uVar10 = 1;
    lVar14 = 0;
    if (0 < lVar11) {
      do {
        puVar9 = local_90;
        if (local_50 != (undefined1 *)0x0) {
          puVar9 = local_50;
        }
        lVar11 = *(longlong *)(puVar9 + lVar14 * 8);
        if (lVar11 != 0) {
          plVar8 = (longlong *)(**(code **)(*param_2 + 0x560))(param_2,iVar15);
          (**(code **)(*param_2 + 0x568))(param_2,iVar15,lVar11);
          if ((local_160 & uVar10) != 0) {
            local_148 = 0;
            lVar11 = (**(code **)(*param_2 + 0x5a8))(param_2,iVar15,0,0);
            if ((lVar11 != 0) && (plVar8 != (longlong *)0x0)) {
              if ((local_15c & uVar10) == 0) {
                puVar9 = local_e0;
                if (local_a0 != (undefined1 *)0x0) {
                  puVar9 = local_a0;
                }
                plVar1 = *(longlong **)(puVar9 + lVar14 * 8);
                if (plVar1 != (longlong *)0x0) {
                  plVar12 = (longlong *)*plVar1;
                  plVar1 = plVar12 + (int)plVar1[1];
                  iVar15 = local_164;
                  for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
                    local_140 = *plVar12;
                    local_138 = 0x202ffff;
                    local_134 = 0xffffffff;
                    local_164 = iVar15;
                    cVar4 = (**(code **)(*plVar8 + 0x428))(plVar8,&local_140,&local_118,0);
                    if (cVar4 == '\0') {
                      local_158 = *plVar12;
                      local_150 = 0x202ffff;
                      local_14c = 0xffffffff;
                      cVar4 = (**(code **)(*plVar8 + 0x400))(plVar8,&local_158,&local_130);
                      if (cVar4 == '\0') {
                        local_108 = *plVar12;
                        local_100 = 0x202ffff;
                        local_fc = 0xffffffff;
                        cVar4 = (**(code **)(*plVar8 + 1000))(plVar8,&local_108,&local_130);
                        if (cVar4 != '\0') {
                          FUN_1425a2750(lVar11,*plVar12,(undefined4)local_130);
                        }
                      }
                      else {
                        local_f8 = (undefined4)local_130;
                        uStack_f4 = local_130._4_4_;
                        uStack_f0 = (undefined4)uStack_128;
                        uStack_ec = uStack_128._4_4_;
                        FUN_1425a2be0(lVar11,*plVar12,&local_f8);
                      }
                    }
                    else {
                      FUN_1425a28b0(lVar11,*plVar12,local_118);
                    }
                    param_2 = local_e8;
                    iVar15 = local_164;
                  }
                }
              }
              else {
                FUN_142589350(lVar11,plVar8,*(undefined1 *)(local_120 + 0xd0));
              }
            }
          }
        }
        iVar15 = iVar15 + 1;
        uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
        lVar14 = lVar14 + 1;
        local_164 = iVar15;
      } while (lVar14 < local_110);
    }
    if (local_a0 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (local_50 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142cfe0e0 FUN_142cfe0e0 body=338 status=ok
// SIG undefined FUN_142cfe0e0(void)

void FUN_142cfe0e0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1[0x81] == 0) {
    return;
  }
  if ((char)param_1[0x83] == '\x03') {
    return;
  }
  iVar3 = FUN_14233f450();
  if (iVar3 == 3) {
    cVar2 = (**(code **)(*param_1 + 0x440))(param_1);
    if (cVar2 == '\0') {
      return;
    }
    iVar3 = FUN_14233f450(param_1);
    if (iVar3 != 3) {
      return;
    }
    FUN_142cfcd10(param_1);
    cVar2 = (char)param_1[0x83];
    if (cVar2 == '\0') {
      return;
    }
    if (cVar2 == '\x01') {
      FUN_142ceb590(param_1);
      cVar2 = (char)param_1[0x83];
    }
    if (cVar2 != '\x02') {
      return;
    }
    FUN_142cf2c50(param_1,0,0);
    return;
  }
  lVar4 = (**(code **)(*(longlong *)param_1[0x23] + 0x668))();
  if (lVar4 != 0) {
    lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142cfe218;
  }
  lVar4 = (**(code **)(*(longlong *)param_1[0x81] + 0x670))();
  if (lVar4 == 0) {
    return;
  }
  lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
LAB_142cfe218:
  FUN_142e57880(lVar4,param_1[0x81]);
  return;
}



// FUNCTION 142cfe240 FUN_142cfe240 body=54 status=ok
// SIG undefined FUN_142cfe240(void)

void FUN_142cfe240(undefined8 param_1)

{
  longlong lVar1;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  FUN_142cfd690(local_28,param_1);
  lVar1 = FUN_142cebc70(local_18,local_20);
  if (lVar1 != 0) {
    FUN_142cfe0e0(lVar1);
    return;
  }
  return;
}



// FUNCTION 142cfe280 FUN_142cfe280 body=31 status=ok
// SIG undefined FUN_142cfe280(void)

void FUN_142cfe280(void)

{
  longlong lVar1;
  
  lVar1 = FUN_142cebc70();
  if (lVar1 != 0) {
    FUN_142cfe0e0(lVar1);
    return;
  }
  return;
}



// FUNCTION 142cfe2a0 FUN_142cfe2a0 body=376 status=ok
// SIG undefined FUN_142cfe2a0(void)

void FUN_142cfe2a0(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  
  iVar6 = (int)param_1[1];
  if (iVar6 < param_2) {
    uVar9 = (ulonglong)(uint)(param_2 - iVar6);
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    iVar10 = param_2 + -1;
    lVar11 = (longlong)iVar10;
    if (iVar6 <= lVar11) {
      iVar3 = *(int *)((longlong)param_1 + 0x34);
      lVar8 = lVar11 * 0xa0;
      lVar11 = (lVar11 - iVar6) + 1;
      do {
        if (iVar3 != 0) {
          *(int *)((longlong)(int)param_1[6] * 0xa0 + *param_1) = iVar10;
        }
        *(undefined4 *)(lVar8 + *param_1) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar8 + 4 + *param_1) = uVar5;
        lVar8 = lVar8 + -0xa0;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar10;
        iVar10 = iVar10 + -1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (0 < param_2 - iVar6) {
      do {
        iVar10 = (int)param_1[5];
        iVar6 = iVar10 + 1;
        *(int *)(param_1 + 5) = iVar6;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
          uVar2 = (int)(iVar10 + 0x20 + (iVar10 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar2 < 5) {
            iVar3 = 4;
          }
          else {
            uVar4 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2)
                               * 4 + 0x40,0);
            iVar6 = (int)param_1[5];
            iVar3 = (int)(uVar4 >> 2);
            if (iVar3 < (int)uVar2) {
              iVar3 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar3 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar6 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar6 = iVar10;
        if (iVar10 < 0) {
          iVar6 = iVar10 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar10 & 0x1f));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 142cfe420 FUN_142cfe420 body=25 status=ok
// SIG undefined FUN_142cfe420(void)

void FUN_142cfe420(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xfd8) != 0) {
    FUN_142ccd260(*(longlong *)(param_1 + 0xfd8) + 0xbe0);
    return;
  }
  return;
}



// FUNCTION 142cfe440 FUN_142cfe440 body=31 status=ok
// SIG undefined FUN_142cfe440(void)

void FUN_142cfe440(undefined8 param_1)

{
  FUN_142ce6360(param_1,0);
  FUN_142ce6360(param_1,1);
  return;
}



// FUNCTION 142cfe460 FUN_142cfe460 body=318 status=ok
// SIG undefined FUN_142cfe460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cfe460(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  undefined4 local_48;
  undefined4 local_44;
  
  cVar3 = (char)param_1[0x217];
  if (((cVar3 != '\0') && ((*(byte *)(param_1 + 0x215) & 8) != 0)) &&
     ((char)param_1[0x49] == '\x05')) {
    (**(code **)(*param_1 + 0x5a0))(param_1,3);
    cVar3 = (char)param_1[0x217];
  }
  if (((cVar3 != '\0') && ((*(byte *)(param_1 + 0x215) & 4) != 0)) &&
     (fVar5 = *(float *)((longlong)param_1 + 0x18c) * *(float *)((longlong)param_1 + 0x18c) +
              *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32), 0.0 < fVar5)) {
    fVar4 = (float)(**(code **)(*param_1 + 0x400))(param_1);
    fVar4 = fVar4 / SQRT(fVar5);
    if (fVar4 < 1.0) {
      *(float *)(param_1 + 0x32) = fVar4 * *(float *)(param_1 + 0x32);
      *(float *)((longlong)param_1 + 0x18c) = fVar4 * *(float *)((longlong)param_1 + 0x18c);
    }
  }
  FWeakObjectPtr::operator=(&local_48,0);
  uVar2 = DAT_1468b5d98;
  lVar1 = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x212) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x1094) = local_44;
  param_1[0x213] = lVar1;
  *(undefined4 *)(param_1 + 0x214) = uVar2;
  *(uint *)(param_1 + 0x215) = *(uint *)(param_1 + 0x215) & 0xfffffff1 | 1;
  *(undefined4 *)((longlong)param_1 + 0x10a4) = 0x3f800000;
  *(longlong *)((longlong)param_1 + 0x10ac) = lVar1;
  *(undefined4 *)((longlong)param_1 + 0x10b4) = uVar2;
  *(undefined1 *)(param_1 + 0x217) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10bc) = 0;
  return;
}



// FUNCTION 142cfe5a0 FUN_142cfe5a0 body=205 status=ok
// SIG undefined FUN_142cfe5a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cfe5a0(longlong param_1)

{
  undefined4 uVar1;
  undefined1 local_5c [52];
  undefined8 local_28;
  undefined4 local_20;
  
  uVar1 = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x10d0) = _DAT_1468b5d90;
  *(undefined8 *)(param_1 + 0x10c8) = 0;
  *(undefined4 *)(param_1 + 0x10d8) = uVar1;
  *(undefined8 *)(param_1 + 0x10c0) = 0;
  if ((local_5c != (undefined1 *)(param_1 + 0x10dc)) && (*(char *)(param_1 + 0x10e8) != '\0')) {
    *(undefined1 *)(param_1 + 0x10e8) = 0;
  }
  *(undefined4 *)(param_1 + 0x10ec) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x10f0) = 0;
  *(undefined4 *)(param_1 + 0x10f4) = 0x41200000;
  *(undefined4 *)(param_1 + 0x10f8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x10fc) = 0;
  *(undefined1 *)(param_1 + 0x1100) = 0;
  *(undefined1 *)(param_1 + 0x1104) = 0;
  *(undefined4 *)(param_1 + 0x1108) = 0x40000000;
  *(undefined4 *)(param_1 + 0x110c) = 2;
  *(undefined8 *)(param_1 + 0x1110) = local_28;
  *(undefined4 *)(param_1 + 0x1118) = local_20;
  *(undefined1 *)(param_1 + 0x111c) = 0;
  *(undefined4 *)(param_1 + 0x1120) = 0;
  return;
}



// FUNCTION 142cfe670 FUN_142cfe670 body=163 status=ok
// SIG undefined FUN_142cfe670(void)

void FUN_142cfe670(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x38);
  uVar3 = *(uint *)(param_1 + 0x3c);
  if (uVar2 < 5) {
    uVar2 = 4;
    goto LAB_142cfe6ec;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) * 0xc)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 * 0xc,0);
        uVar3 = *(uint *)(param_1 + 0x3c);
        uVar2 = (uint)(uVar1 / 0xc);
      }
      goto LAB_142cfe6ec;
    }
    if (uVar2 == 0) goto LAB_142cfe6ec;
  }
  uVar2 = uVar3;
LAB_142cfe6ec:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x3c) = uVar2;
    TInlineAllocator<4,FDefaultAllocator>::ForElementType<FSectionEvaluationData>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x38),uVar2,0xc);
    return;
  }
  return;
}



// FUNCTION 142cfe720 FUN_142cfe720 body=207 status=ok
// SIG undefined FUN_142cfe720(void)

void FUN_142cfe720(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = (**(code **)(*param_1 + 0x6c8))();
  if (iVar3 < (int)param_1[0xdf]) {
    iVar5 = (int)param_1[0xdf] - iVar3;
    iVar6 = 0;
    if (iVar5 < 1) {
      iVar5 = 0;
    }
    if (0 < iVar3) {
      do {
        lVar2 = *param_1;
        uVar4 = (**(code **)(lVar2 + 0x560))(param_1,iVar6 + iVar5);
        (**(code **)(lVar2 + 0x568))(param_1,iVar6,uVar4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
    plVar1 = param_1 + 0xde;
    iVar5 = (int)param_1[0xdf];
    if (iVar5 < iVar3) {
      *(int *)(param_1 + 0xdf) = iVar3;
      if (*(int *)((longlong)param_1 + 0x6fc) < iVar3) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + (longlong)iVar5 * 8),0,(longlong)(iVar3 - iVar5) << 3);
    }
    else if ((iVar3 < iVar5) && (iVar3 != iVar5)) {
      *(int *)(param_1 + 0xdf) = iVar3;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
    }
    FUN_1423424e0(param_1);
  }
  return;
}



// FUNCTION 142cfe7f0 FUN_142cfe7f0 body=215 status=ok
// SIG undefined FUN_142cfe7f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cfe7f0(longlong *param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  
  if (param_1[0x1fb] != 0) {
    plVar2 = *(longlong **)(param_1[0x1fb] + 0x10);
    lVar5 = plVar2[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar5 = plVar2[0x1f];
      if (lVar5 == 0) {
        return;
      }
    }
    if (*(longlong *)(lVar5 + 0x4c8) != 0) {
      uVar1 = *(undefined1 *)(*(longlong *)(lVar5 + 0x4c8) + 0x3f4);
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x1000;
      *(undefined1 *)((longlong)param_1 + 0x3f4) = uVar1;
      cVar4 = (**(code **)(*param_1 + 0x5c0))(param_1);
      if ((cVar4 != '\0') &&
         (((*(char *)(param_1[0x1fb] + 0x128) == '\x01' ||
           (*(char *)(param_1[0x1fb] + 0x95) == '\x02')) &&
          (lVar5 = FUN_14233f840(param_1), lVar5 != 0)))) {
        *(undefined8 *)(lVar5 + 0xb0) = _DAT_1468b5d90;
        *(undefined4 *)(lVar5 + 0xb8) = DAT_1468b5d98;
        uVar3 = _DAT_1464aa818;
        *(undefined8 *)(lVar5 + 0xd0) = _DAT_1464aa810;
        *(undefined8 *)(lVar5 + 0xd8) = uVar3;
      }
    }
  }
  return;
}



// FUNCTION 142cfe8d0 FUN_142cfe8d0 body=317 status=ok
// SIG undefined FUN_142cfe8d0(void)

void FUN_142cfe8d0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(char *)(param_1 + 0x540) != '\0') {
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x408);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  plVar5 = *(longlong **)(param_1 + 0x410);
  cVar3 = FUN_1407cd900(plVar1);
  if (cVar3 == '\0') {
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    if (plVar1 != (longlong *)0x0) {
      lVar4 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (cVar3 = (**(code **)(*plVar1 + 0x950))(plVar1), cVar3 != '\0')) &&
         (cVar3 = (**(code **)(*plVar1 + 0x780))(plVar1), cVar3 == '\0')) {
        (**(code **)(**(longlong **)(param_1 + 0x410) + 0x780))();
        plVar5 = *(longlong **)(param_1 + 0x410);
        goto LAB_142cfe9f3;
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x410);
    cVar3 = FUN_1407cd900(plVar1);
    if ((cVar3 == '\0') && (plVar1[0x91] != *(longlong *)(param_1 + 0x408))) {
                    /* WARNING: Could not recover jumptable at 0x000142cfe9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x778))(plVar1);
      return;
    }
  }
  else {
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    cVar3 = FUN_1407cd900(plVar5);
    if (cVar3 != '\0') {
      return;
    }
    (**(code **)(*plVar5 + 0x780))(plVar5);
LAB_142cfe9f3:
    FUN_142227350(plVar5,0,1);
  }
  return;
}



// FUNCTION 142cfea30 FUN_142cfea30 body=348 status=ok
// SIG undefined FUN_142cfea30(void)

void FUN_142cfea30(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18 [2];
  undefined8 uStack_10;
  
  plVar1 = (longlong *)(param_1 + -0x218);
  cVar4 = (**(code **)(*plVar1 + 0x5c0))(plVar1);
  if ((cVar4 != '\0') && (lVar6 = FUN_14233f990(), 0.0 < *(float *)(lVar6 + 0x10))) {
    if ((*(longlong *)(param_1 + 0x1560) == 0) ||
       (((*(byte *)(param_1 + 0x16b4) & 2) != 0 || (*(longlong *)(param_1 + -0xa0) == 0)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((*(char *)(lVar6 + 0x50) == '\0') && (bVar3)) {
      if (*(longlong *)(param_1 + 0x1560) == 0) {
        uStack_10 = 0;
      }
      else {
        uStack_10 = *(undefined8 *)(*(longlong *)(param_1 + 0x1560) + 0x10);
      }
      local_38 = *(undefined8 *)(lVar6 + 0x24);
      local_18[0] = *(undefined4 *)(param_1 + 0x15a8);
      local_30 = *(undefined4 *)(lVar6 + 0x2c);
      lVar2 = *(longlong *)(lVar6 + 0x40);
      local_28 = *(undefined8 *)(lVar6 + 0x18);
      local_20 = *(undefined4 *)(lVar6 + 0x20);
      uVar5 = FUN_142344c40(plVar1);
      FUN_142e3b6e0(plVar1,*(undefined4 *)(lVar6 + 0x10),local_18,&local_28,&local_38,lVar2,
                    *(undefined8 *)(lVar6 + 0x48),lVar2 != 0,*(undefined1 *)(lVar6 + 0x51),uVar5);
      *(uint *)(lVar6 + 0x6c) = *(uint *)(lVar6 + 0x6c) & 0xfffffffe;
      *(undefined4 *)(lVar6 + 0x10) = 0;
      *(undefined1 *)(lVar6 + 0x50) = 0;
    }
    else {
      FUN_14234e220(param_1);
    }
  }
  return;
}



// FUNCTION 142cfeb90 FUN_142cfeb90 body=279 status=ok
// SIG undefined FUN_142cfeb90(void)

void FUN_142cfeb90(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined2 param_11)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FWeakObjectPtr::operator=(&local_res8,param_8);
  local_48 = 0;
  local_38 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x50,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    *puVar3 = &PTR_FUN_14585dac8;
    uVar2 = *(undefined4 *)(param_3 + 1);
    puVar3[3] = uVar1;
    uVar1 = *param_4;
    *(undefined4 *)(puVar3 + 4) = uVar2;
    uVar2 = *(undefined4 *)(param_4 + 1);
    *(undefined8 *)((longlong)puVar3 + 0x24) = uVar1;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = uVar2;
    *(undefined1 *)(puVar3 + 6) = param_5;
    *(undefined1 *)((longlong)puVar3 + 0x31) = param_6;
    *(undefined4 *)((longlong)puVar3 + 0x34) = param_7;
    *(undefined4 *)(puVar3 + 2) = param_2;
    puVar3[1] = param_1;
    *(undefined2 *)((longlong)puVar3 + 0x14) = param_11;
    *(undefined4 *)(puVar3 + 7) = local_res8;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = local_resc;
    puVar3[8] = param_9;
    *(undefined1 *)(puVar3 + 9) = param_10;
  }
  local_78[0] = &LAB_142ce3970;
  FUN_142339040(param_1,local_78);
  return;
}



// FUNCTION 142cfecb0 FUN_142cfecb0 body=199 status=ok
// SIG undefined FUN_142cfecb0(void)

void FUN_142cfecb0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[6];
  uVar6 = param_2[4];
  uVar1 = param_2[5];
  uVar2 = *(undefined8 *)(param_2 + 2);
  local_48 = 0;
  local_38 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x30,local_68);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_14585db10;
    puVar7[1] = param_1;
    *(undefined4 *)(puVar7 + 2) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0x14) = uVar4;
    *(uint *)(puVar7 + 5) = *(uint *)(puVar7 + 5) & 0xfffffff0;
    *(uint *)(puVar7 + 5) = *(uint *)(puVar7 + 5) | uVar5 & 0xf;
    puVar7[3] = uVar2;
    *(undefined4 *)((longlong)puVar7 + 0x24) = uVar1;
    *(undefined4 *)(puVar7 + 4) = uVar6;
  }
  local_78[0] = &LAB_142ce3aa0;
  FUN_142339040(param_1,local_78);
  return;
}



// FUNCTION 142cfed90 FUN_142cfed90 body=100 status=ok
// SIG undefined FUN_142cfed90(void)

void FUN_142cfed90(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if (*(byte *)(param_1 + 0x469) != param_2) {
    lVar1 = FUN_142c6f130();
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x128) == '\x03')) {
      *(byte *)(param_1 + 0x468) = param_2;
      FUN_142c76980(param_1);
    }
    *(byte *)(param_1 + 0x469) = param_2;
    FUN_142cfa6e0(param_1);
    if (2 < param_2) {
      FUN_142c835c0(param_1,1);
    }
  }
  return;
}



// FUNCTION 142cfee00 FUN_142cfee00 body=169 status=ok
// SIG undefined FUN_142cfee00(void)

void FUN_142cfee00(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_1 + 0x30) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar5 = *(longlong **)(param_1 + 0x38);
  if (plVar3 != plVar5) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x38);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    *(longlong **)(param_1 + 0x38) = plVar3;
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142cfeeb0 FUN_142cfeeb0 body=399 status=ok
// SIG undefined FUN_142cfeeb0(void)

void FUN_142cfeeb0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [12];
  
  bVar1 = false;
  plVar4 = *(longlong **)(param_1 + 0xb0);
  plVar6 = plVar4 + (longlong)*(int *)(param_1 + 0xb8) * 0x4d;
  if (plVar4 != plVar6) {
    plVar5 = plVar4 + 0xf;
    do {
      if (*plVar4 == param_2) {
        FRichCurve::Reset(plVar5 + -0xe);
        puVar2 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
        FRichCurve::AddKey(plVar5 + -0xe,local_res20,0,*param_3,0,*puVar2);
        FRichCurve::Reset(plVar5);
        puVar2 = (undefined4 *)FKeyHandle::FKeyHandle(local_48);
        FRichCurve::AddKey(plVar5,local_44,0,param_3[1],0,*puVar2);
        FRichCurve::Reset(plVar5 + 0xe);
        puVar2 = (undefined4 *)FKeyHandle::FKeyHandle(local_40);
        FRichCurve::AddKey(plVar5 + 0xe,local_3c,0,param_3[2],0,*puVar2);
        FRichCurve::Reset(plVar5 + 0x1c);
        puVar2 = (undefined4 *)FKeyHandle::FKeyHandle(local_38);
        FRichCurve::AddKey(plVar5 + 0x1c,local_34,0,param_3[3],0,*puVar2);
        bVar1 = true;
      }
      plVar4 = plVar4 + 0x4d;
      plVar5 = plVar5 + 0x4d;
    } while (plVar4 != plVar6);
    if (bVar1) {
      lVar3 = FUN_1406d4330(param_1);
      if (lVar3 != 0) {
        plVar4 = (longlong *)FUN_1406d4330(param_1);
        (**(code **)(*plVar4 + 0xc0))(plVar4,0);
      }
    }
  }
  return;
}



// FUNCTION 142cff080 FUN_142cff080 body=45 status=ok
// SIG undefined FUN_142cff080(void)

void FUN_142cff080(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_2 != '\0') {
    FUN_142dafbc0();
    return;
  }
  FUN_142dbb5d0(param_1 + 0x570,local_res18);
  return;
}



// FUNCTION 142cff0b0 FUN_142cff0b0 body=143 status=ok
// SIG undefined FUN_142cff0b0(void)

void FUN_142cff0b0(longlong param_1,undefined1 *param_2,undefined1 param_3)

{
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  undefined1 local_10;
  
  if (*(longlong *)(param_1 + 0xfd8) != 0) {
    local_48[0] = *param_2;
    local_34 = *(undefined8 *)(param_2 + 0x14);
    local_44 = *(undefined4 *)(param_2 + 4);
    local_40 = *(undefined4 *)(param_2 + 8);
    local_3c = *(undefined4 *)(param_2 + 0xc);
    local_38 = *(undefined4 *)(param_2 + 0x10);
    local_2c = *(undefined4 *)(param_2 + 0x1c);
    local_20 = *(undefined4 *)(param_2 + 0x28);
    local_28 = *(undefined8 *)(param_2 + 0x20);
    local_14 = *(undefined4 *)(param_2 + 0x34);
    local_10 = param_2[0x38];
    local_1c = *(undefined8 *)(param_2 + 0x2c);
    FUN_142ccf650(*(longlong *)(param_1 + 0xfd8) + 0xbe0,param_3,local_48);
  }
  return;
}



// FUNCTION 142cff140 FUN_142cff140 body=196 status=ok
// SIG undefined FUN_142cff140(void)

void FUN_142cff140(undefined8 param_1,char param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b31900) {
    _Init_thread_header(&DAT_146b31900);
    if (DAT_146b31900 == -1) {
      FName::FName(&DAT_146b318f8,L"GodLock_PawnAttachment",1);
      _Init_thread_footer(&DAT_146b31900);
    }
  }
  if (param_3 != (longlong *)0x0) {
    uVar1 = UScrollBox::GetPrivateStaticClass();
    lVar2 = (**(code **)(*param_3 + 0x628))(param_3,uVar1);
    if (lVar2 != 0) {
      if (param_2 != '\0') {
        FUN_142dafbc0();
        return;
      }
      FUN_142dbb5d0(lVar2 + 0x290,&DAT_146b318f8);
    }
  }
  return;
}



// FUNCTION 142cff210 FUN_142cff210 body=351 status=ok
// SIG undefined FUN_142cff210(void)

void FUN_142cff210(longlong *param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  uint local_a8 [4];
  undefined1 local_98 [12];
  undefined4 local_8c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((char)param_1[0x1d4] != param_2) {
    *(char *)(param_1 + 0x1d4) = param_2;
    if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142cff256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x5a0))(param_1,6,2);
      return;
    }
    cVar2 = (**(code **)(*param_1 + 0xb60))();
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x5a0))(param_1);
      lVar1 = param_1[0x2f];
      if (lVar1 != 0) {
        local_b8 = *(undefined4 *)(lVar1 + 0x220);
        local_b4 = *(undefined4 *)(lVar1 + 0x224);
        local_b0 = *(undefined4 *)(lVar1 + 0x228);
        local_a8[0] = local_a8[0] & 0xfffffff8;
        local_a8[1] = 0;
        local_a8[2] = 0;
        local_34 = 0xffffffff;
        local_30 = 0;
        local_2c = 0xffffffff;
        local_28 = 0;
        local_24 = 0xffffffff;
        local_20 = 0;
        local_18 = 0;
        local_10 = 0;
        _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
        local_8c = 0x3f800000;
        (**(code **)(*param_1 + 0x870))(param_1,&local_b8,local_a8,0,0);
        if (((byte)local_a8[0] & 3) == 3) {
          cVar2 = (**(code **)(*param_1 + 0x898))(param_1,&local_b8,local_98);
          if (cVar2 != '\0') {
            (**(code **)(*param_1 + 0x740))(param_1,local_98);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142cff370 FUN_142cff370 body=332 status=ok
// SIG undefined FUN_142cff370(void)

void FUN_142cff370(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_142350590();
  lVar1 = *(longlong *)(param_2 + 0x900);
  lVar8 = 0;
  lVar4 = lVar8;
  if (*(longlong *)(lVar1 + 0x1778) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x1778) + 0x10);
  }
  *(longlong *)(param_1 + 0x348) = lVar4;
  lVar7 = lVar8;
  if (lVar4 != 0) {
    lVar5 = FUN_142e07420();
    for (lVar4 = *(longlong *)(param_1 + 0x348);
        (lVar7 = lVar8, lVar4 != 0 && (lVar7 = *(longlong *)(param_1 + 0x348), lVar4 != lVar5));
        lVar4 = *(longlong *)(lVar4 + 0x30)) {
    }
  }
  bVar6 = lVar7 != 0 | *(byte *)(param_1 + 0x330) & 0xfe;
  *(byte *)(param_1 + 0x330) = bVar6;
  bVar6 = (*(char *)(lVar1 + 0x1968) << 3 ^ bVar6) & 8 ^ bVar6;
  *(byte *)(param_1 + 0x330) = bVar6;
  *(byte *)(param_1 + 0x330) = (*(char *)(lVar1 + 0x10b8) << 5 ^ bVar6) & 0x20 ^ bVar6;
  FWeakObjectPtr::operator=(param_1 + 0x334,*(undefined8 *)(lVar1 + 0x1358));
  bVar6 = *(byte *)(param_1 + 0x330);
  if ((bVar6 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(lVar1 + 0x17c0);
  }
  if ((bVar6 & 8) != 0) {
    *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(lVar1 + 0x1988);
  }
  if ((bVar6 & 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(lVar1 + 0x10bc);
  }
  if ((bVar6 & 1) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x348);
    if ((plVar2 != (longlong *)0x0) && (lVar8 = plVar2[0x1f], lVar8 == 0)) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar8 = plVar2[0x1f];
    }
    cVar3 = FUN_142cc7760(lVar8);
    if (cVar3 != '\0') {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 8;
    }
  }
  return;
}



// FUNCTION 142cff4c0 FUN_142cff4c0 body=232 status=ok
// SIG undefined FUN_142cff4c0(void)

void FUN_142cff4c0(longlong *param_1,undefined8 param_2,undefined4 param_3,char param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  
  iVar2 = (**(code **)(*param_1 + 0x6c8))();
  iVar3 = iVar2;
  if ((param_4 != '\0') && (iVar3 = (**(code **)(*param_1 + 0x908))(param_1), iVar3 <= iVar2)) {
    iVar3 = iVar2;
  }
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      if (param_5 == (undefined8 *)0x0) {
LAB_142cff55b:
        lVar4 = (**(code **)(*param_1 + 0x5a8))(param_1,iVar6,0,0);
        if (lVar4 != 0) {
          FUN_1425a2750(lVar4,param_2,param_3);
        }
      }
      else {
        piVar1 = (int *)*param_5;
        for (piVar5 = piVar1; piVar5 != piVar1 + *(int *)(param_5 + 1); piVar5 = piVar5 + 1) {
          if (*piVar5 == iVar6 % iVar2) {
            if ((int)((longlong)piVar5 - (longlong)piVar1 >> 2) != -1) goto LAB_142cff55b;
            break;
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return;
}



// FUNCTION 142cff5b0 FUN_142cff5b0 body=245 status=ok
// SIG undefined FUN_142cff5b0(void)

void FUN_142cff5b0(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  
  iVar2 = (**(code **)(*param_1 + 0x6c8))();
  iVar3 = iVar2;
  if ((param_4 != '\0') && (iVar3 = (**(code **)(*param_1 + 0x908))(param_1), iVar3 <= iVar2)) {
    iVar3 = iVar2;
  }
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      if (param_5 == (undefined8 *)0x0) {
LAB_142cff64b:
        lVar5 = (**(code **)(*param_1 + 0x5a8))(param_1,iVar6,0,0);
        if (lVar5 != 0) {
          FUN_1425a2be0(lVar5,param_2);
        }
      }
      else {
        piVar1 = (int *)*param_5;
        for (piVar4 = piVar1; piVar4 != piVar1 + *(int *)(param_5 + 1); piVar4 = piVar4 + 1) {
          if (*piVar4 == iVar6 % iVar2) {
            if ((int)((longlong)piVar4 - (longlong)piVar1 >> 2) != -1) goto LAB_142cff64b;
            break;
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return;
}



// FUNCTION 142cff6b0 FUN_142cff6b0 body=71 status=ok
// SIG undefined FUN_142cff6b0(void)

void FUN_142cff6b0(longlong param_1,longlong param_2)

{
  FUN_142350ce0();
  if ((*(char *)(*(longlong *)(param_2 + 0x900) + 0x248) == '\x06') &&
     (*(char *)(*(longlong *)(param_2 + 0x900) + 0x249) == '\x02')) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 8;
  }
  return;
}



// FUNCTION 142cff700 FUN_142cff700 body=227 status=ok
// SIG undefined FUN_142cff700(void)

void FUN_142cff700(longlong *param_1,int param_2,char param_3)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  
  if ((param_2 == 6) && (param_3 == '\x02')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  iVar4 = FUN_14233f450();
  if (((iVar4 == 3) && ((char)param_1[0x1d4] != '\0')) && (!bVar2)) {
    return;
  }
  if (((*(byte *)(param_1 + 0x32d) & 1) != 0) && (iVar4 = FUN_14233f450(param_1), 1 < iVar4)) {
    if (!bVar2) {
      return;
    }
    if ((char)param_1[0x1d4] == '\0') {
      return;
    }
  }
  if (((param_2 == 6) && (param_3 == '\0')) && ((*(byte *)(param_1 + 0x225) & 2) == 0)) {
    return;
  }
  FUN_142350ef0(param_1,param_2,param_3);
  cVar1 = *(char *)((longlong)param_1 + 0x221c);
  if ((char)param_1[0x49] == '\x05') {
    if (param_3 != '\x03') {
LAB_142cff7a5:
      cVar3 = '\0';
      goto LAB_142cff7a7;
    }
  }
  else if (((char)param_1[0x49] != '\x06') || (*(char *)((longlong)param_1 + 0x249) != '\x04'))
  goto LAB_142cff7a5;
  cVar3 = '\x01';
LAB_142cff7a7:
  *(char *)((longlong)param_1 + 0x221c) = cVar3;
  if (cVar3 != cVar1) {
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  return;
}



// FUNCTION 142cff800 FUN_142cff800 body=277 status=ok
// SIG undefined FUN_142cff800(void)

void FUN_142cff800(longlong param_1,char param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  FUN_142351040();
  plVar3 = *(longlong **)(param_1 + 0x180);
  if ((plVar3 != (longlong *)0x0) && (lVar2 = *(longlong *)(param_1 + 0x220), lVar2 != 0)) {
    if (param_2 != '\0') {
      (**(code **)(*plVar3 + 0x830))(plVar3,7);
                    /* WARNING: Could not recover jumptable at 0x000142cff867. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x180) + 0x830))(*(longlong **)(param_1 + 0x180),5);
      return;
    }
    if (*(longlong *)(lVar2 + 0x4d0) == *(longlong *)(param_1 + 0x178)) {
      lVar2 = UClass::GetDefaultObject<UDamageType>(*(undefined8 *)(lVar2 + 0x10));
      if (lVar2 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(lVar2 + 0x4d0);
      }
      if (plVar3 != (longlong *)0x0) {
        lVar2 = **(longlong **)(param_1 + 0x180);
        uVar1 = (**(code **)(*plVar3 + 0x4f0))(plVar3,7);
        (**(code **)(lVar2 + 0x830))(*(undefined8 *)(param_1 + 0x180),7,uVar1);
        lVar2 = **(longlong **)(param_1 + 0x180);
        uVar1 = (**(code **)(*plVar3 + 0x4f0))(plVar3,7);
        (**(code **)(lVar2 + 0x830))(*(undefined8 *)(param_1 + 0x180),5,uVar1);
      }
    }
  }
  return;
}



// FUNCTION 142cff920 FUN_142cff920 body=72 status=ok
// SIG undefined FUN_142cff920(void)

void FUN_142cff920(longlong *param_1,char param_2)

{
  (**(code **)(*param_1 + 0x5a0))(param_1,6,4);
  if (param_2 != *(char *)((longlong)param_1 + 0x221c)) {
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  *(char *)((longlong)param_1 + 0x221c) = param_2;
  return;
}



// FUNCTION 142cff970 SetSelectedState body=7 status=ok
// SIG undefined SetSelectedState(void)

void CLogicalCitizen::SetSelectedState(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x88) = param_2;
  return;
}



// FUNCTION 142cff980 FUN_142cff980 body=169 status=ok
// SIG undefined FUN_142cff980(void)

void FUN_142cff980(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar5 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != plVar5) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x28);
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    *(longlong **)(param_1 + 0x28) = plVar3;
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142cffa30 FUN_142cffa30 body=82 status=ok
// SIG undefined FUN_142cffa30(void)

void FUN_142cffa30(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x8c) = *param_2;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x98) = param_2[3];
  FWeakObjectPtr::operator=(param_1 + 0x9c,*(undefined8 *)(param_2 + 4));
  *(undefined4 *)(param_1 + 0x88) = param_3;
  return;
}



// FUNCTION 142cffa90 bpf__StartSelectBuild__pf body=8 status=ok
// SIG undefined bpf__StartSelectBuild__pf(void)

void ABP_Cow_C__pf308280451::bpf__StartSelectBuild__pf(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x448) = param_2;
  return;
}



// FUNCTION 142cffac0 FUN_142cffac0 body=69 status=ok
// SIG undefined FUN_142cffac0(void)

void FUN_142cffac0(longlong param_1,char param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 local_18 [3];
  
  puVar2 = (undefined8 *)(param_1 + 0x175c);
  if (param_2 == '\0') {
    if ((local_18 != puVar2) && (*(char *)(param_1 + 0x1768) != '\0')) {
      *(undefined1 *)(param_1 + 0x1768) = 0;
    }
  }
  else if (param_3 != puVar2) {
    uVar1 = *(undefined4 *)(param_3 + 1);
    *puVar2 = *param_3;
    *(undefined4 *)(param_1 + 0x1764) = uVar1;
    *(undefined1 *)(param_1 + 0x1768) = 1;
    return;
  }
  return;
}



// FUNCTION 142cffb10 FUN_142cffb10 body=172 status=ok
// SIG undefined FUN_142cffb10(void)

void FUN_142cffb10(undefined8 param_1,undefined1 param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b31910) {
    _Init_thread_header(&DAT_146b31910);
    if (DAT_146b31910 == -1) {
      FName::FName(&DAT_146b31908,L"UntargetableLock_PawnAttachment",1);
      _Init_thread_footer(&DAT_146b31910);
    }
  }
  if (param_3 != (longlong *)0x0) {
    uVar1 = FUN_142e79d90();
    lVar2 = (**(code **)(*param_3 + 0x628))(param_3,uVar1);
    if (lVar2 != 0) {
      FUN_142ddcd30(lVar2,param_2,DAT_146b31908);
    }
  }
  return;
}



// FUNCTION 142cffbc0 FUN_142cffbc0 body=1308 status=ok
// SIG undefined FUN_142cffbc0(void)

void FUN_142cffbc0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  uint uVar9;
  int *piVar10;
  longlong lVar11;
  int *piVar12;
  wchar_t *pwVar13;
  longlong *plVar14;
  undefined8 local_res8;
  longlong local_res18;
  int local_38;
  int local_34;
  longlong local_30;
  
  lVar11 = *(longlong *)(param_1 + 0x178);
  if (lVar11 == 0) {
LAB_142cffc60:
    lVar11 = 0;
LAB_142cffc64:
    bVar2 = false;
  }
  else {
    lVar6 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142cffc60;
    iVar1 = *(int *)(lVar11 + 0xc);
    lVar6 = 0;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar9;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) != 0) goto LAB_142cffc64;
    bVar2 = true;
  }
  pwVar13 = (wchar_t *)0x0;
  if (bVar2) {
    pwVar7 = _guard_xfg_dispatch_icall_nop
                       (L"&UGbxCharacterMovementComponent::OnCapsuleBeginOverlap",L"::");
    pwVar8 = pwVar13;
    while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar8 = pwVar3;
    }
    FName::FName(&local_res8,pwVar8 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar11 + 0x570,param_1,local_res8);
    pwVar7 = _guard_xfg_dispatch_icall_nop
                       (L"&UGbxCharacterMovementComponent::OnCapsuleEndOverlap",L"::");
    pwVar8 = pwVar13;
    while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar8 = pwVar3;
    }
    FName::FName(&local_res8,pwVar8 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar11 + 0x580,param_1,local_res8);
  }
  FUN_142351990(param_1,param_2);
  lVar11 = *(longlong *)(param_1 + 0x208);
  if (lVar11 != 0) {
    lVar6 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_142cffd7e;
  }
  lVar11 = 0;
LAB_142cffd7e:
  *(longlong *)(param_1 + 0xfd8) = lVar11;
  *(longlong *)(param_1 + 6000) = param_1;
  FUN_142cb7940(param_1 + 0x1950,param_1);
  FUN_142ce6360(param_1,0);
  FUN_142ce6360(param_1,1);
  if (*(longlong *)(param_1 + 0x180) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x180) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar9;
      lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
               (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar11 = 0;
    }
    if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) == 0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop
                         (L"&UGbxCharacterMovementComponent::OnCapsuleBeginOverlap",L"::");
      pwVar8 = pwVar13;
      while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar8 = pwVar3;
      }
      FName::FName(&local_res18,pwVar8 + 2,1);
      lVar6 = local_res18;
      lVar11 = *(longlong *)(param_1 + 0x180);
      plVar14 = (longlong *)(lVar11 + 0x570);
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_res8 = 0;
      local_30 = lVar6;
      if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_38), lVar6 != 0)) {
        UObject::FindFunction(lVar6,local_30);
      }
      piVar10 = (int *)*plVar14;
      iVar1 = *(int *)(lVar11 + 0x578);
      for (piVar12 = piVar10; piVar12 != piVar10 + (longlong)iVar1 * 4; piVar12 = piVar12 + 4) {
        if (((*piVar12 == local_38) && (piVar12[1] == local_34)) ||
           ((cVar4 = FWeakObjectPtr::IsValid(piVar12), cVar4 == '\0' &&
            (cVar4 = FWeakObjectPtr::IsValid(&local_38), cVar4 == '\0')))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar2) && (*(longlong *)(piVar12 + 2) == local_30)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          if ((int)((longlong)piVar12 - (longlong)piVar10 >> 4) != -1) goto LAB_142cfff65;
          break;
        }
      }
      iVar1 = *(int *)(lVar11 + 0x578);
      *(int *)(lVar11 + 0x578) = iVar1 + 1;
      if (*(int *)(lVar11 + 0x57c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar1);
      }
      piVar10 = (int *)((longlong)iVar1 * 0x10 + *plVar14);
      *piVar10 = local_38;
      piVar10[1] = local_34;
      *(longlong *)(piVar10 + 2) = local_30;
LAB_142cfff65:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
      pwVar8 = _guard_xfg_dispatch_icall_nop
                         (L"&UGbxCharacterMovementComponent::OnCapsuleEndOverlap",L"::");
      while (pwVar7 = pwVar8, pwVar7 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
        pwVar13 = pwVar7;
      }
      FName::FName(&local_res18,pwVar13 + 2,1);
      lVar11 = *(longlong *)(param_1 + 0x180);
      plVar14 = (longlong *)(lVar11 + 0x580);
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      FWeakObjectPtr::operator=(&local_38,param_1);
      local_res8 = 0;
      local_30 = local_res18;
      if ((local_res18 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_38), lVar6 != 0)) {
        UObject::FindFunction(lVar6,local_30);
      }
      piVar10 = (int *)*plVar14;
      iVar1 = *(int *)(lVar11 + 0x588);
      for (piVar12 = piVar10; piVar12 != piVar10 + (longlong)iVar1 * 4; piVar12 = piVar12 + 4) {
        if (((*piVar12 == local_38) && (piVar12[1] == local_34)) ||
           ((cVar4 = FWeakObjectPtr::IsValid(piVar12), cVar4 == '\0' &&
            (cVar4 = FWeakObjectPtr::IsValid(&local_38), cVar4 == '\0')))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar2) && (*(longlong *)(piVar12 + 2) == local_30)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          if ((int)((longlong)piVar12 - (longlong)piVar10 >> 4) != -1) goto LAB_142d000c3;
          break;
        }
      }
      iVar1 = *(int *)(lVar11 + 0x588);
      *(int *)(lVar11 + 0x588) = iVar1 + 1;
      if (*(int *)(lVar11 + 0x58c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar1);
      }
      piVar10 = (int *)((longlong)iVar1 * 0x10 + *plVar14);
      *piVar10 = local_38;
      piVar10[1] = local_34;
      *(longlong *)(piVar10 + 2) = local_30;
LAB_142d000c3:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
    }
  }
  return;
}



// FUNCTION 142d00110 FUN_142d00110 body=96 status=ok
// SIG undefined FUN_142d00110(void)

void FUN_142d00110(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar1 != '\0') {
    if (((param_1[0x2ef] != 0) && ((*(byte *)((longlong)param_1 + 0x18cc) & 2) == 0)) &&
       (param_1[0x2f] != 0)) {
      FUN_142cd46d0(param_1 + 0x2ee,param_2);
    }
    FUN_142352950(param_1,param_2);
  }
  return;
}



// FUNCTION 142d00170 FUN_142d00170 body=497 status=ok
// SIG undefined FUN_142d00170(void)

void FUN_142d00170(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined1 param_6)

{
  char cVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float local_68;
  float fStack_64;
  float local_60;
  undefined8 local_58;
  float local_50;
  
  local_58 = *param_4;
  local_50 = *(float *)(param_4 + 1);
  if ((((param_1[0x2ef] == 0) || ((*(byte *)((longlong)param_1 + 0x18cc) & 2) != 0)) ||
      (param_1[0x2f] == 0)) ||
     ((local_50 <= 0.0 || (cVar1 = (**(code **)(*param_1 + 0x7f0))(local_50,param_5), cVar1 != '\0')
      ))) goto LAB_142d00323;
  fVar2 = (float)local_58 * (float)local_58 + local_58._4_4_ * local_58._4_4_;
  if (fVar2 == 1.0) {
    local_68 = (float)local_58;
    fStack_64 = local_58._4_4_;
    if (local_50 == 0.0) {
      local_60 = local_50;
    }
    else {
LAB_142d002f9:
      local_60 = 0.0;
    }
  }
  else {
    if (1e-08 <= fVar2) {
      auVar3 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
      local_68 = auVar3._0_4_;
      local_68 = local_68 + local_68 * (0.5 - fVar2 * 0.5 * local_68 * local_68);
      local_68 = local_68 + local_68 * (0.5 - fVar2 * 0.5 * local_68 * local_68);
      fStack_64 = local_68 * local_58._4_4_;
      local_68 = local_68 * (float)local_58;
      goto LAB_142d002f9;
    }
    local_68 = DAT_1468b5d90;
    local_60 = DAT_1468b5d98;
    fStack_64 = DAT_1468b5d94;
  }
  local_58 = CONCAT44(fStack_64,local_68);
  local_50 = local_60;
LAB_142d00323:
  FUN_142353c40(param_1,param_2,param_3,&local_58,param_5,param_6);
  return;
}



// FUNCTION 142d00370 FUN_142d00370 body=536 status=ok
// SIG undefined FUN_142d00370(void)

void FUN_142d00370(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  
  lVar1 = param_1 + -0x218;
  iVar4 = FUN_14233f450(lVar1);
  if (iVar4 == 1) {
    if (((*(int *)(param_1 + 0x1e24) != -1) && ((*(byte *)(param_1 + 0x1750) & 1) == 0)) &&
       (*(char *)(param_1 + 0x1778) != *(char *)(param_1 + 0x1e20))) {
      FUN_142cd2770(param_1 + 0x1738,param_4);
    }
    plVar2 = *(longlong **)(param_1 + 0x1560);
    if ((plVar2 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*plVar2 + 0x2d0))(plVar2,param_2,param_3,param_4,param_5),
       cVar3 != '\0')) {
      return;
    }
  }
  lVar5 = FQuat::Rotator(param_5,&local_38);
  lVar6 = FQuat::Rotator(param_3,local_28);
  fVar7 = *(float *)(lVar5 + 4) - *(float *)(lVar6 + 4);
  fVar8 = (float)(int)(fVar7 * 0.0027777778) * 360.0;
  if (ABS(fVar7) < ABS(fVar8)) {
    fVar8 = fVar7;
  }
  fVar7 = fVar7 - fVar8;
  if (fVar7 < 0.0) {
    fVar7 = fVar7 + 360.0;
  }
  if (180.0 < fVar7) {
    fVar7 = fVar7 - 360.0;
  }
  *(float *)(param_1 + 0x11bc) = fVar7 * 0.017453292 + *(float *)(param_1 + 0x11bc);
  *(float *)(param_1 + 0x11c8) = fVar7 * 0.017453292 + *(float *)(param_1 + 0x11c8);
  FUN_142355a70(param_1,param_2,param_3,param_4,param_5);
  iVar4 = FUN_14233f450(lVar1);
  if (((iVar4 == 1) && (*(char *)(param_1 + 0x1191) != '\0')) &&
     (*(char *)(param_1 + 0x1192) != *(char *)(param_1 + 0x1190))) {
    if (*(longlong *)(param_1 + -0xa0) != 0) {
      local_38 = *param_4;
      local_30 = *(undefined4 *)(param_4 + 1);
      FUN_1423990b0(*(longlong *)(param_1 + -0xa0),&local_38,0,0,param_5 & 0xffffffffffffff00);
    }
    *(undefined1 *)(param_1 + 0x1168) = *(undefined1 *)(param_1 + 0x1191);
    *(undefined8 *)(param_1 + 0x116c) = *param_2;
    *(undefined4 *)(param_1 + 0x1174) = *(undefined4 *)(param_2 + 1);
    *(undefined1 *)(param_1 + 0x1192) = *(undefined1 *)(param_1 + 0x1190);
    FUN_142cfbc30(lVar1);
  }
  return;
}



// FUNCTION 142d00590 FUN_142d00590 body=426 status=ok
// SIG undefined FUN_142d00590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142d00590(longlong *param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  uVar7 = FUN_14233f450();
  if (((int)uVar7 != 1) && (param_2 != 0)) {
    uVar7 = FUN_142e07420();
    uVar10 = param_2;
    do {
      if (uVar10 == uVar7) {
        uVar7 = param_1[0x2ef];
        if (((uVar7 == 0) || ((*(byte *)((longlong)param_1 + 0x18cc) & 2) != 0)) ||
           ((*(uint *)(uVar7 + 0x2c) & 0x800) != 0)) {
          iVar6 = FUN_14233f450(param_1);
          if (iVar6 == 2) {
            (**(code **)(*param_1 + 0xa98))(param_1);
          }
          uVar4 = DAT_1468b5d98;
          uVar3 = _DAT_1468b5d90;
          uVar7 = (**(code **)(*param_1 + 0x5c0))(param_1);
          if ((char)uVar7 == '\0') {
            return uVar7;
          }
          lVar1 = param_1[0x1fb];
          local_48 = 0;
          local_40 = 0;
          local_30 = uVar3;
          local_28 = uVar4;
          local_38 = param_3;
          if (param_3 == 0) goto LAB_142d00718;
          lVar8 = FUN_1429d7ab0();
          lVar5 = local_38;
          if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            if (local_38 == 0) goto LAB_142d00718;
            lVar9 = FUN_14291fb80();
            lVar8 = *(longlong *)(lVar5 + 0x10);
            if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                lVar9 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((!bVar2) || (param_3 = *(longlong *)(lVar5 + 0x488), param_3 == 0))
            goto LAB_142d00718;
          }
          local_38 = param_3;
LAB_142d00718:
          uVar7 = FUN_142cd1310(param_1 + 0x2ee,param_2,&local_48,lVar1);
          return uVar7;
        }
        break;
      }
      uVar10 = *(ulonglong *)(uVar10 + 0x30);
    } while (uVar10 != 0);
  }
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 142d00740 FUN_142d00740 body=338 status=ok
// SIG undefined FUN_142d00740(void)

void FUN_142d00740(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,longlong param_7,undefined8 *param_8)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  cVar3 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar3 == '\0') {
    return;
  }
  if (param_3 == 0) {
    param_3 = param_1[0x1fb];
  }
  local_44 = param_5;
  local_30 = *param_8;
  local_28 = *(undefined4 *)(param_8 + 1);
  local_40 = param_6;
  local_38 = param_7;
  local_48 = param_4;
  if (param_7 == 0) goto LAB_142d0085d;
  lVar4 = FUN_1429d7ab0();
  lVar2 = local_38;
  if ((*(int *)(*(longlong *)(param_7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
      != lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    if (local_38 == 0) goto LAB_142d0085d;
    lVar5 = FUN_14291fb80();
    lVar4 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (param_7 = *(longlong *)(lVar2 + 0x488), param_7 == 0)) goto LAB_142d0085d;
  }
  local_38 = param_7;
LAB_142d0085d:
  FUN_142cd1310(param_1 + 0x2ee,param_2,&local_48,param_3);
  return;
}



// FUNCTION 142d008a0 FUN_142d008a0 body=63 status=ok
// SIG undefined FUN_142d008a0(void)

void FUN_142d008a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0xfd8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xfd8) + 0x778))();
    if (cVar1 != '\0') {
      FUN_142d008e0(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 142d008e0 FUN_142d008e0 body=601 status=ok
// SIG undefined FUN_142d008e0(void)

void FUN_142d008e0(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_8c [20];
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FUN_142cfe460();
  lVar6 = FWeakObjectPtr::Get(param_2);
  if ((((lVar6 != 0) || ((float)param_2[2] != 0.0)) || ((float)param_2[3] != 0.0)) ||
     ((float)param_2[4] != 0.0)) {
    if ((param_1[0x24] == 0) && (lVar6 = FUN_1423407b0(param_1), lVar6 == 0)) {
      return;
    }
    if (param_1[0x1fb] != 0) {
      *(undefined4 *)(param_1 + 0x212) = *param_2;
      *(undefined4 *)((longlong)param_1 + 0x1094) = param_2[1];
      param_1[0x213] = *(longlong *)(param_2 + 2);
      *(undefined4 *)(param_1 + 0x214) = param_2[4];
      *(undefined4 *)((longlong)param_1 + 0x10a4) = param_2[5];
      *(uint *)(param_1 + 0x215) =
           *(uint *)(param_1 + 0x215) ^ (*(uint *)(param_1 + 0x215) ^ param_2[6]) & 1;
      uVar9 = (*(uint *)(param_1 + 0x215) ^ param_2[6]) & 2 ^ *(uint *)(param_1 + 0x215);
      *(uint *)(param_1 + 0x215) = uVar9;
      uVar9 = (uVar9 ^ param_2[6]) & 4 ^ uVar9;
      *(uint *)(param_1 + 0x215) = uVar9;
      *(uint *)(param_1 + 0x215) = (uVar9 ^ param_2[6]) & 8 ^ uVar9;
      lVar6 = FWeakObjectPtr::Get(param_2);
      if (lVar6 == 0) {
        local_90 = param_2[4];
        puVar8 = &local_98;
        local_98 = *(undefined8 *)(param_2 + 2);
      }
      else {
        uVar7 = FWeakObjectPtr::Get(param_2);
        puVar8 = (undefined8 *)FUN_142ce3180(param_1,local_8c,uVar7);
      }
      *(undefined8 *)((longlong)param_1 + 0x10ac) = *puVar8;
      *(undefined4 *)((longlong)param_1 + 0x10b4) = *(undefined4 *)(puVar8 + 1);
      *(undefined1 *)(param_1 + 0x217) = 1;
      *(undefined4 *)((longlong)param_1 + 0x10bc) = param_2[5];
      if ((*(byte *)(param_1 + 0x215) & 8) != 0) {
        (**(code **)(*param_1 + 0x5a0))(param_1,5);
      }
      iVar5 = FUN_142340f30(param_1);
      if (iVar5 == 3) {
        uVar2 = param_2[1];
        uVar3 = *param_2;
        uVar4 = param_2[4];
        uVar7 = *(undefined8 *)(param_2 + 2);
        uVar1 = param_2[5];
        uVar9 = param_2[6];
        (**(code **)(*param_1 + 0xa98))(param_1);
        local_48 = 0;
        local_38 = 0;
        puVar8 = (undefined8 *)FUN_140438ef0(0x30,local_68);
        if (puVar8 != (undefined8 *)0x0) {
          *puVar8 = &PTR_FUN_14585db10;
          puVar8[1] = param_1;
          *(undefined4 *)(puVar8 + 2) = uVar3;
          *(undefined4 *)((longlong)puVar8 + 0x14) = uVar2;
          *(uint *)(puVar8 + 5) = *(uint *)(puVar8 + 5) & 0xfffffff0;
          *(uint *)(puVar8 + 5) = *(uint *)(puVar8 + 5) | uVar9 & 0xf;
          puVar8[3] = uVar7;
          *(undefined4 *)((longlong)puVar8 + 0x24) = uVar1;
          *(undefined4 *)(puVar8 + 4) = uVar4;
        }
        local_78[0] = &LAB_142ce3940;
        FUN_14234b4d0(param_1,local_78);
      }
    }
  }
  return;
}



// FUNCTION 142d00b40 FUN_142d00b40 body=657 status=ok
// SIG undefined FUN_142d00b40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d00b40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_38 [16];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  FUN_142cfe5a0();
  if ((((((*(float *)(param_2 + 2) != 0.0) || (*(float *)((longlong)param_2 + 0x14) != 0.0)) ||
        (*(float *)(param_2 + 3) != 0.0)) || ((*param_2 != 0 || ((char)param_2[5] != '\0')))) ||
      ((char)param_2[6] != '\0')) &&
     (((*(longlong *)(param_1 + 0x120) != 0 || (lVar10 = FUN_1423407b0(param_1), lVar10 != 0)) &&
      ((*(longlong *)(param_1 + 0xfd8) != 0 &&
       ((plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xfd8) + 0x490), plVar1 != (longlong *)0x0
        && (lVar10 = *(longlong *)(param_1 + 0x178), lVar10 != 0)))))))) {
    uVar7 = *(uint *)((longlong)plVar1 + 0x4cc) >> 1;
    if ((uVar7 & 1) == 0) {
      local_28 = *(float *)(lVar10 + 0x210);
      fStack_24 = *(float *)(lVar10 + 0x214);
      fStack_20 = *(float *)(lVar10 + 0x218);
      fStack_1c = *(float *)(lVar10 + 0x21c);
      auVar13._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != fStack_24);
      auVar13._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != local_28);
      auVar13._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fStack_20);
      auVar13._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_1c);
      iVar8 = movmskps(uVar7,auVar13);
      if (iVar8 != 0) {
        *(float *)(lVar10 + 0x250) = local_28;
        *(float *)(lVar10 + 0x254) = fStack_24;
        *(float *)(lVar10 + 600) = fStack_20;
        *(float *)(lVar10 + 0x25c) = fStack_1c;
        puVar11 = (undefined8 *)FQuat::Rotator(&local_28,local_38);
        *(undefined8 *)(lVar10 + 0x260) = *puVar11;
        *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar11 + 1);
      }
      *(undefined8 *)(param_1 + 0x1110) = *(undefined8 *)(lVar10 + 0x260);
      uVar9 = *(undefined4 *)(lVar10 + 0x268);
    }
    else {
      puVar11 = (undefined8 *)(**(code **)(*plVar1 + 0x720))(plVar1,local_38);
      *(undefined8 *)(param_1 + 0x1110) = *puVar11;
      uVar9 = *(undefined4 *)(puVar11 + 1);
    }
    *(undefined4 *)(param_1 + 0x1118) = uVar9;
    fVar4 = (float)DAT_146b315f0;
    fVar5 = DAT_146b315f0._4_4_;
    fVar6 = DAT_146b315f0._8_4_;
    auVar12._12_4_ = 0;
    auVar12._0_12_ = *(undefined1 (*) [12])(param_1 + 0x1110);
    auVar13 = divps(auVar12,_DAT_146b315f0);
    fVar14 = *(float *)*(undefined1 (*) [12])(param_1 + 0x1110) - (float)(int)auVar13._0_4_ * fVar4;
    fVar15 = *(float *)(param_1 + 0x1114) - (float)(int)auVar13._4_4_ * fVar5;
    fVar16 = *(float *)(param_1 + 0x1118) - (float)(int)auVar13._8_4_ * fVar6;
    fVar14 = (float)(((uint)(fVar4 + fVar14) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                    (uint)(fVar4 + fVar14));
    fVar15 = (float)(((uint)(fVar5 + fVar15) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                    (uint)(fVar5 + fVar15));
    fVar16 = (float)(((uint)(fVar6 + fVar16) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                    (uint)(fVar6 + fVar16));
    bVar2 = fRam0000000146b315e4 < fVar15;
    bVar3 = fRam0000000146b315e8 < fVar16;
    *(uint *)(param_1 + 0x1110) =
         ((uint)(fVar14 - fVar4) ^ (uint)fVar14) & -(uint)(_DAT_146b315e0 < fVar14) ^ (uint)fVar14;
    *(uint *)(param_1 + 0x1114) =
         ((uint)(fVar15 - fVar5) ^ (uint)fVar15) & -(uint)bVar2 ^ (uint)fVar15;
    *(uint *)(param_1 + 0x1118) =
         ((uint)(fVar16 - fVar6) ^ (uint)fVar16) & -(uint)bVar3 ^ (uint)fVar16;
    *(longlong *)(param_1 + 0x10c0) = *param_2;
    *(longlong *)(param_1 + 0x10c8) = param_2[1];
    *(longlong *)(param_1 + 0x10d0) = param_2[2];
    *(int *)(param_1 + 0x10d8) = (int)param_2[3];
    if ((undefined8 *)((longlong)param_2 + 0x1c) != (undefined8 *)(param_1 + 0x10dc)) {
      if (*(char *)(param_1 + 0x10e8) != '\0') {
        *(undefined1 *)(param_1 + 0x10e8) = 0;
      }
      if ((char)param_2[5] != '\0') {
        *(undefined8 *)(param_1 + 0x10dc) = *(undefined8 *)((longlong)param_2 + 0x1c);
        *(undefined4 *)(param_1 + 0x10e4) = *(undefined4 *)((longlong)param_2 + 0x24);
        *(undefined1 *)(param_1 + 0x10e8) = 1;
      }
    }
    *(undefined4 *)(param_1 + 0x10ec) = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(char *)(param_1 + 0x10f0) = (char)param_2[6];
    *(undefined4 *)(param_1 + 0x10f4) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(int *)(param_1 + 0x10f8) = (int)param_2[7];
    *(undefined4 *)(param_1 + 0x10fc) = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(char *)(param_1 + 0x1100) = (char)param_2[8];
    *(undefined1 *)(param_1 + 0x1104) = *(undefined1 *)((longlong)param_2 + 0x44);
    *(int *)(param_1 + 0x1108) = (int)param_2[9];
    *(undefined4 *)(param_1 + 0x110c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    *(undefined1 *)(param_1 + 0x111c) = 1;
    *(undefined4 *)(param_1 + 0x1120) = *(undefined4 *)((longlong)param_2 + 0x2c);
  }
  return;
}



// FUNCTION 142d00de0 FUN_142d00de0 body=276 status=ok
// SIG undefined FUN_142d00de0(void)

void FUN_142d00de0(longlong param_1,undefined4 *param_2)

{
  *(undefined1 *)(param_1 + 0x1200) = 1;
  *(undefined4 *)(param_1 + 0x1204) = 0;
  *(undefined4 *)(param_1 + 0x1208) = *param_2;
  *(undefined4 *)(param_1 + 0x120c) = param_2[1];
  *(undefined4 *)(param_1 + 0x1210) = param_2[2];
  *(undefined8 *)(param_1 + 0x1218) = *(undefined8 *)(param_2 + 4);
  FRichCurve::operator=(param_1 + 0x1220,param_2 + 6);
  *(undefined8 *)(param_1 + 0x1290) = *(undefined8 *)(param_2 + 0x22);
  FRichCurve::operator=(param_1 + 0x1298,param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x1308) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x1310) = *(undefined8 *)(param_2 + 0x42);
  *(undefined4 *)(param_1 + 0x1318) = param_2[0x44];
  *(undefined8 *)(param_1 + 0x131c) = *(undefined8 *)(param_2 + 0x45);
  *(undefined4 *)(param_1 + 0x1324) = param_2[0x47];
  *(undefined8 *)(param_1 + 0x1328) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x1330) = param_2[0x4a];
  *(undefined8 *)(param_1 + 0x1334) = *(undefined8 *)(param_2 + 0x4b);
  *(undefined4 *)(param_1 + 0x133c) = param_2[0x4d];
  return;
}



// FUNCTION 142d00f00 FUN_142d00f00 body=134 status=ok
// SIG undefined FUN_142d00f00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d00f00(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x2650) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x2658) = DAT_1468b5d98;
  if (*(char *)(param_1 + 0x10b8) != '\0') {
    if (*(longlong **)(param_1 + 0xfd8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xfd8) + 0x778))();
    }
    FUN_142cfe460(param_1);
  }
  if (*(char *)(param_1 + 0x111c) != '\0') {
    FUN_142cfe5a0(param_1);
  }
  FUN_142d01010(param_1,0,1);
  FUN_142cbfa60(param_1 + 0x1950);
  FUN_1423570b0(param_1);
  return;
}



// FUNCTION 142d00f90 FUN_142d00f90 body=122 status=ok
// SIG undefined FUN_142d00f90(void)

void FUN_142d00f90(longlong *param_1,undefined1 param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_14233f450();
  if ((iVar2 != 1) && (param_1[0x2ef] != 0)) {
    cVar1 = FUN_142cc5960(param_1[0x2ee]);
    if (cVar1 != '\0') {
      iVar2 = FUN_14233f450(param_1);
      if (iVar2 == 2) {
        (**(code **)(*param_1 + 0xa98))(param_1);
      }
      FUN_142d01010(param_1,0,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 142d01010 FUN_142d01010 body=195 status=ok
// SIG undefined FUN_142d01010(void)

void FUN_142d01010(longlong *param_1,longlong param_2,undefined1 param_3,undefined1 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar1 == '\0') {
    return;
  }
  if (param_1[0x2ef] == 0) {
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x18cc) & 2) != 0) {
    return;
  }
  if (param_2 != 0) {
    lVar2 = FUN_142e07420();
    lVar4 = param_2;
    do {
      if (lVar4 == lVar2) {
        lVar4 = *(longlong *)(param_1[0x2ef] + 0x10);
        lVar3 = FUN_142e07420();
        lVar2 = param_2;
        goto LAB_142d01093;
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  goto LAB_142d010a8;
  while (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0) {
LAB_142d01093:
    if (lVar2 == lVar3) goto LAB_142d010a3;
  }
  param_2 = 0;
LAB_142d010a3:
  if (lVar4 != param_2) {
    return;
  }
LAB_142d010a8:
  FUN_142cd34e0(param_1 + 0x2ee,param_3,param_4);
  return;
}



// FUNCTION 142d010e0 FUN_142d010e0 body=117 status=ok
// SIG undefined FUN_142d010e0(void)

void FUN_142d010e0(longlong *param_1,char param_2,char param_3)

{
  char cVar1;
  int iVar2;
  
  if ((((longlong *)param_1[0x1fb] == (longlong *)0x0) ||
      (cVar1 = (**(code **)(*(longlong *)param_1[0x1fb] + 0x778))(), cVar1 == '\0')) &&
     (param_2 == '\0')) {
    return;
  }
  if ((param_3 != '\0') && (iVar2 = FUN_142340f30(param_1), iVar2 == 3)) {
    (**(code **)(*param_1 + 0xa98))(param_1);
    FUN_142e3d2b0(param_1);
  }
  FUN_142cfe460(param_1);
  return;
}



// FUNCTION 142d01160 thunk_FUN_142cfe5a0 body=5 status=ok
// SIG undefined thunk_FUN_142cfe5a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_142cfe5a0(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_5c [52];
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uVar1 = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x10d0) = _DAT_1468b5d90;
  *(undefined8 *)(param_1 + 0x10c8) = 0;
  *(undefined4 *)(param_1 + 0x10d8) = uVar1;
  *(undefined8 *)(param_1 + 0x10c0) = 0;
  if ((auStack_5c != (undefined1 *)(param_1 + 0x10dc)) && (*(char *)(param_1 + 0x10e8) != '\0')) {
    *(undefined1 *)(param_1 + 0x10e8) = 0;
  }
  *(undefined4 *)(param_1 + 0x10ec) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x10f0) = 0;
  *(undefined4 *)(param_1 + 0x10f4) = 0x41200000;
  *(undefined4 *)(param_1 + 0x10f8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x10fc) = 0;
  *(undefined1 *)(param_1 + 0x1100) = 0;
  *(undefined1 *)(param_1 + 0x1104) = 0;
  *(undefined4 *)(param_1 + 0x1108) = 0x40000000;
  *(undefined4 *)(param_1 + 0x110c) = 2;
  *(undefined8 *)(param_1 + 0x1110) = uStack_28;
  *(undefined4 *)(param_1 + 0x1118) = uStack_20;
  *(undefined1 *)(param_1 + 0x111c) = 0;
  *(undefined4 *)(param_1 + 0x1120) = 0;
  return;
}



// FUNCTION 142d01170 FUN_142d01170 body=689 status=ok
// SIG undefined FUN_142d01170(void)

void FUN_142d01170(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  bVar4 = false;
  bVar3 = false;
  if (*(char *)(param_1 + 0x41a) != '\0') goto LAB_142d013e2;
  if (*(longlong *)(param_1 + 0x118) == 0) {
LAB_142d011eb:
    bVar5 = false;
  }
  else {
    plVar7 = (longlong *)FUN_142cecda0(param_1 + 0x400,local_88);
    bVar4 = true;
    bVar3 = false;
    if (*plVar7 == 0) goto LAB_142d011eb;
    puVar8 = (undefined8 *)FUN_142cecda0(param_1 + 0x400,local_98);
    bVar4 = true;
    bVar3 = true;
    cVar6 = (**(code **)(*(longlong *)*puVar8 + 0x38))();
    if (cVar6 != '\0') goto LAB_142d011eb;
    bVar5 = true;
  }
  if (bVar3) {
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_90 + 1;
      lVar10 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  if (bVar4) {
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_80 + 1;
      lVar10 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
  }
  bVar4 = false;
  bVar3 = false;
  if (bVar5) {
    plVar7 = *(longlong **)(param_1 + 0x118);
    uVar9 = FUN_142e27720();
    lVar10 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar9);
    if (lVar10 != 0) {
      uVar9 = FUN_142cecda0(param_1 + 0x400,local_38);
      FUN_142c84750(lVar10,uVar9);
    }
  }
  if (*(longlong *)(param_1 + 0x408) == 0) {
LAB_142d0130d:
    bVar5 = false;
  }
  else {
    bVar4 = true;
    bVar3 = false;
    plVar7 = (longlong *)FUN_142cef130(param_1 + 0x400,local_68);
    if (*plVar7 == 0) goto LAB_142d0130d;
    bVar4 = true;
    bVar3 = true;
    puVar8 = (undefined8 *)FUN_142cef130(param_1 + 0x400,local_78);
    cVar6 = (**(code **)(*(longlong *)*puVar8 + 0x38))();
    if (cVar6 != '\0') goto LAB_142d0130d;
    bVar5 = true;
  }
  if (bVar3) {
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_70 + 1;
      lVar10 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  if ((bVar4) && (local_60 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_60 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (bVar5) {
    plVar7 = *(longlong **)(param_1 + 0x408);
    uVar9 = FUN_142e27720();
    lVar10 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar9);
    if (lVar10 != 0) {
      uVar9 = FUN_142cef130(param_1 + 0x400,local_28);
      FUN_142c84750(lVar10,uVar9);
    }
  }
LAB_142d013e2:
  local_58 = 0;
  uStack_50 = 0;
  FUN_142cff980(param_1 + 0x400,&local_58);
  local_48 = 0;
  uStack_40 = 0;
  FUN_142cfee00(param_1 + 0x400,&local_48);
  return;
}



// FUNCTION 142d01430 FUN_142d01430 body=176 status=ok
// SIG undefined FUN_142d01430(void)

void FUN_142d01430(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  FUN_142c85cd0();
  if (((*(char *)(param_1 + 0x469) == '\x02') && (*(longlong *)(param_1 + 0x470) != 0)) &&
     (*(longlong *)(param_1 + 0x478) != 0)) {
    puVar2 = (undefined8 *)FUN_142c71cc0(param_1,1);
    lVar3 = UAnimInstance::GetActiveInstanceForMontage(*(undefined8 *)(param_1 + 0x478),*puVar2);
    if (lVar3 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x470);
      *(float *)(lVar3 + 300) =
           SQRT(*(float *)(lVar1 + 0x18c) * *(float *)(lVar1 + 0x18c) +
                *(float *)(lVar1 + 400) * *(float *)(lVar1 + 400) +
                *(float *)(lVar1 + 0x194) * *(float *)(lVar1 + 0x194)) *
           (1.0 / *(float *)(param_1 + 0x480));
    }
  }
  return;
}



// FUNCTION 142d01500 FUN_142d01500 body=508 status=ok
// SIG undefined FUN_142d01500(void)

void FUN_142d01500(char *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  
  iVar7 = 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b31920) && (_Init_thread_header(&DAT_146b31920), DAT_146b31920 == -1))
  {
    FName::FName(&DAT_146b31918,L"RootMotionState",1);
    _Init_thread_footer(&DAT_146b31920);
  }
  if ((*(longlong *)(param_1 + 0x48) != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
    if (*param_1 == '\0') {
      cVar6 = '\0';
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0x40)) {
        pcVar1 = param_1 + 8;
        lVar8 = 0;
        do {
          pcVar5 = *(char **)(param_1 + 0x38);
          if (*(char **)(param_1 + 0x38) == (char *)0x0) {
            pcVar5 = pcVar1;
          }
          fVar9 = (float)FUN_142269220(*(undefined8 *)(param_1 + 0x50),
                                       *(undefined4 *)(pcVar5 + lVar8 + 8));
          fVar10 = (float)FUN_142269360(*(undefined8 *)(param_1 + 0x50),
                                        *(undefined4 *)(pcVar5 + lVar8 + 8),
                                        *(undefined4 *)(pcVar5 + lVar8 + 4));
          if ((fVar9 <= 0.0) || (fVar10 <= 0.0)) {
            iVar2 = *(int *)(param_1 + 0x40);
            iVar3 = (iVar2 - iVar4) + -1;
            if (iVar3 != 0) {
              pcVar5 = *(char **)(param_1 + 0x38);
              if (*(char **)(param_1 + 0x38) == (char *)0x0) {
                pcVar5 = pcVar1;
              }
              _guard_xfg_dispatch_icall_nop
                        (pcVar5 + (longlong)iVar4 * 0xc,pcVar5 + (longlong)iVar7 * 0xc,
                         (longlong)iVar3 * 0xc);
              iVar2 = *(int *)(param_1 + 0x40);
            }
            *(int *)(param_1 + 0x40) = iVar2 + -1;
            FUN_142cfe670(pcVar1);
            iVar4 = iVar4 + -1;
            iVar7 = iVar7 + -1;
            lVar8 = lVar8 + -0xc;
          }
          else {
            cVar6 = '\x01';
          }
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 1;
          lVar8 = lVar8 + 0xc;
        } while (iVar4 < *(int *)(param_1 + 0x40));
      }
    }
    else {
      cVar6 = '\x01';
    }
    if (cVar6 != param_1[1]) {
      param_1[1] = cVar6;
      if (cVar6 != '\0') {
        FUN_142cf3f30(*(undefined8 *)(param_1 + 0x48),DAT_146b31918,2);
        return;
      }
      FUN_142d04ee0(*(undefined8 *)(param_1 + 0x48),DAT_146b31918);
    }
  }
  return;
}



// FUNCTION 142d01700 FUN_142d01700 body=1661 status=ok
// SIG undefined FUN_142d01700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d01700(longlong *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_168;
  float local_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  float fStack_130;
  float fStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [208];
  
  cVar3 = FUN_1407c3030(param_1 + 0x13c);
  if (cVar3 != '\0') {
    return;
  }
  if (param_1[0x1fb] == 0) {
LAB_142d0179c:
    fVar14 = (float)_DAT_1468b5d90;
    fVar19 = (float)((ulonglong)_DAT_1468b5d90 >> 0x20);
    local_160 = DAT_1468b5d98;
  }
  else {
    FUN_142cc15c0(param_1[0x1fb] + 0xbe0,local_d8,1);
    if (param_1[0x1fb] == 0) goto LAB_142d0179c;
    puVar5 = (undefined8 *)FUN_142cc2d20(param_1[0x1fb] + 0xbe0,&local_128,local_d8,param_1);
    fVar14 = (float)*puVar5;
    fVar19 = (float)((ulonglong)*puVar5 >> 0x20);
    local_160 = *(float *)(puVar5 + 1);
  }
  local_168 = CONCAT44(fVar19,fVar14);
  FUN_142ced180(param_1,&local_f8,1);
  fVar16 = local_160 - local_f0;
  fVar14 = (fVar19 - local_f4) * (fVar19 - local_f4) + (fVar14 - local_f8) * (fVar14 - local_f8);
  local_168 = CONCAT44(fVar19,SQRT(fVar16 * fVar16 + fVar14));
  uVar9 = FGenericPlatformMath::Atan2();
  local_168 = CONCAT44(uVar9,(float)local_168);
  local_160 = (float)FGenericPlatformMath::Atan2(fVar16,SQRT(fVar14));
  FUN_142ce7bf0(param_1,&local_108,&local_168);
  FUN_142ce7bf0(param_1,&local_158,param_1 + 0x27a);
  iVar4 = _finite((double)(float)local_158);
  if ((iVar4 != 0) && ((float)local_158 != 3.4028235e+38)) {
    iVar4 = _finite((double)local_158._4_4_);
    if ((iVar4 != 0) &&
       (((local_158._4_4_ != 3.4028235e+38 && (iVar4 = _finite((double)local_150), iVar4 != 0)) &&
        (local_150 != 3.4028235e+38)))) {
      local_160 = *(float *)((longlong)param_1 + 0x1484) * 0.017453292;
      local_168 = CONCAT44(local_160,0x461c4000);
      uVar9 = (undefined4)DAT_1468b5da0;
      uVar10 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      fStack_130 = (float)DAT_1468b5da8;
      if (param_1[0x1fb] != 0) {
        lVar12 = *(longlong *)(param_1[0x1fb] + 0x168);
        local_140 = DAT_1468b5da8;
        if (lVar12 != 0) {
          fVar14 = *(float *)(lVar12 + 0x210);
          local_138 = *(undefined8 *)(lVar12 + 0x210);
          fStack_130 = *(float *)(lVar12 + 0x218);
          fStack_12c = *(float *)(lVar12 + 0x21c);
          auVar1._4_4_ = -(uint)(*(float *)(lVar12 + 0x254) != *(float *)(lVar12 + 0x214));
          auVar1._0_4_ = -(uint)(*(float *)(lVar12 + 0x250) != fVar14);
          auVar1._8_4_ = -(uint)(*(float *)(lVar12 + 600) != fStack_130);
          auVar1._12_4_ = -(uint)(*(float *)(lVar12 + 0x25c) != fStack_12c);
          iVar4 = movmskps(iVar4,auVar1);
          if (iVar4 != 0) {
            *(float *)(lVar12 + 0x250) = fVar14;
            *(float *)(lVar12 + 0x254) = *(float *)(lVar12 + 0x214);
            *(float *)(lVar12 + 600) = fStack_130;
            *(float *)(lVar12 + 0x25c) = fStack_12c;
            puVar5 = (undefined8 *)FQuat::Rotator(&local_138,&local_128);
            *(undefined8 *)(lVar12 + 0x260) = *puVar5;
            *(undefined4 *)(lVar12 + 0x268) = *(undefined4 *)(puVar5 + 1);
          }
          uVar9 = (undefined4)*(undefined8 *)(lVar12 + 0x260);
          uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar12 + 0x260) >> 0x20);
          local_140 = *(undefined4 *)(lVar12 + 0x268);
        }
        local_148 = CONCAT44(uVar10,uVar9);
        fStack_130 = (float)local_140;
      }
      local_138 = CONCAT44(uVar10,uVar9);
      local_e8 = local_138;
      local_e0 = fStack_130;
      FUN_142ce7a40(param_1,&local_148,&local_e8);
      fVar14 = (float)(**(code **)(*param_1 + 0xc20))(param_1);
      if (180.0 <= fVar14) {
        local_120 = local_140;
        local_128 = local_148;
        plVar6 = (longlong *)
                 FUN_142d86570(&local_138,&local_108,&local_158,&local_168,(int)param_2,&local_128);
      }
      else {
        fVar14 = (float)(**(code **)(*param_1 + 0xc20))(param_1);
        fStack_130 = 3.4028235e+38;
        local_120 = local_140;
        local_138 = CONCAT44(fVar14 * 0.017453292,0x7f7fffff);
        local_128 = local_148;
        plVar6 = (longlong *)
                 FUN_142d861d0(&local_148,&local_108,&local_158,&local_168,(int)param_2,&local_128,
                               &local_138);
      }
      local_158 = *plVar6;
      local_150 = (float)plVar6[1];
      goto LAB_142d01ae1;
    }
  }
  local_150 = (float)local_100;
  local_158 = CONCAT44(local_104,local_108);
LAB_142d01ae1:
  lVar12 = local_158;
  fVar14 = local_150;
  if (((param_1[0x1fb] != 0) &&
      (lVar7 = FUN_14222e2a0(), lVar12 = local_158, fVar14 = local_150, lVar7 != 0)) &&
     (cVar3 = FUN_142cf3330(param_1), lVar12 = local_158, fVar14 = local_150, cVar3 != '\0')) {
    if (*(longlong *)(lVar7 + 0x168) == 0) {
      pfVar8 = (float *)&DAT_1468b5b70;
    }
    else {
      pfVar8 = (float *)(*(longlong *)(lVar7 + 0x168) + 0x210);
    }
    fVar14 = *pfVar8;
    fVar19 = pfVar8[1];
    fVar16 = pfVar8[2];
    fVar2 = pfVar8[3];
    puVar5 = (undefined8 *)FUN_142d08040(&local_158,&local_128);
    local_168 = *puVar5;
    fVar11 = (float)((ulonglong)local_168 >> 0x20);
    local_160 = *(float *)(puVar5 + 1);
    fVar18 = local_160 * fVar19 - fVar11 * fVar16;
    fVar17 = (float)local_168 * fVar16 - local_160 * fVar14;
    fVar18 = fVar18 + fVar18;
    fVar13 = fVar11 * fVar14 - (float)local_168 * fVar19;
    fVar17 = fVar17 + fVar17;
    fVar13 = fVar13 + fVar13;
    fVar15 = (fVar19 * fVar13 - fVar16 * fVar17) + (float)local_168 + fVar2 * fVar18;
    fVar16 = (fVar16 * fVar18 - fVar14 * fVar13) + fVar11 + fVar2 * fVar17;
    fVar19 = (fVar14 * fVar17 - fVar19 * fVar18) + local_160 + fVar2 * fVar13;
    fVar14 = fVar15 * fVar15 + fVar16 * fVar16;
    uVar9 = FGenericPlatformMath::Atan2(fVar16,fVar15);
    local_120 = FGenericPlatformMath::Atan2(fVar19,SQRT(fVar14));
    lVar12 = CONCAT44(uVar9,SQRT(fVar19 * fVar19 + fVar14));
    fVar14 = (float)local_120;
  }
  param_1[0x27a] = lVar12;
  *(float *)(param_1 + 0x27b) = fVar14;
  uVar9 = (**(code **)(*param_1 + 0xc18))(param_1);
  uVar9 = FMath::FInterpConstantTo
                    (*(undefined4 *)((longlong)param_1 + 0x13cc),uVar9,param_2,0x40a00000);
  *(undefined4 *)((longlong)param_1 + 0x13cc) = uVar9;
  return;
}



// FUNCTION 142d01d80 thunk_FUN_142357eb0 body=5 status=ok
// SIG undefined thunk_FUN_142357eb0(void)

void thunk_FUN_142357eb0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1428e7d90();
  if (DAT_146531c14 != 0) {
    lVar1 = FUN_14046f570(param_1);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 400) == 0) {
        lVar2 = lVar1 + 0x400;
      }
      else {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 400) + 0x98);
      }
      FUN_1425328c0(lVar2,param_1,*(undefined4 *)(lVar1 + 0x7b0));
      return;
    }
  }
  return;
}



// FUNCTION 142d01d90 FUN_142d01d90 body=1120 status=ok
// SIG undefined FUN_142d01d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d01d90(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined1 (*pauVar7) [12];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_58;
  uint uStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  FUN_142358370();
  FUN_142cd5240(param_1 + 0x1950,param_2);
  if ((*(longlong *)(param_1 + 0xfd8) != 0) && (*(char *)(param_1 + 0x1200) != '\0')) {
    fVar17 = param_2 + *(float *)(param_1 + 0x1204);
    *(float *)(param_1 + 0x1204) = fVar17;
    FUN_142d07960(param_1,fVar17);
    if (*(float *)(param_1 + 0x1208) <= fVar17 && fVar17 != *(float *)(param_1 + 0x1208)) {
      FUN_142cebf10(param_1);
    }
  }
  if ((*(char *)(param_1 + 0x111c) != '\0') && (*(float *)(param_1 + 0x1120) <= 0.0)) {
    FUN_142cfe5a0(param_1);
  }
  if ((*(char *)(param_1 + 0x10b8) != '\0') && (*(float *)(param_1 + 0x10bc) <= 0.0)) {
    FUN_142cfe460(param_1);
  }
  *(undefined8 *)(param_1 + 0x2650) = _DAT_1468b5d90;
  uVar3 = DAT_1468b5d98;
  *(byte *)(param_1 + 0x1968) = *(byte *)(param_1 + 0x1968) & 0xf7;
  *(undefined4 *)(param_1 + 0x2658) = uVar3;
  iVar5 = FUN_142340f30(param_1);
  if (iVar5 != 3) {
    if (*(longlong **)(param_1 + 0xfd8) == (longlong *)0x0) goto LAB_142d021cc;
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0xfd8) + 0x778))();
    if (cVar4 == '\0') goto LAB_142d021cc;
  }
  if ((*(longlong *)(param_1 + 0xfd8) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0xfd8) + 0x128) != '\x01')) {
    fVar17 = *(float *)(param_1 + 0x370);
    fVar1 = *(float *)(param_1 + 0x374);
    fVar2 = *(float *)(param_1 + 0x378);
    fVar16 = *(float *)(param_1 + 0x37c);
    fVar15 = -*(float *)(param_1 + 0x2660);
    fVar11 = -*(float *)(param_1 + 0x2664);
    fStack_4c = *(float *)(param_1 + 0x266c);
    fStack_50 = -*(float *)(param_1 + 0x2668);
    local_58 = -*(float *)(param_1 + 0x2660);
    uStack_54 = *(uint *)(param_1 + 0x2664) ^ 0x80000000;
    local_48 = fVar15 * fVar16 * _DAT_146b31660 + fStack_4c * fVar17 +
               fVar11 * fVar2 * _DAT_146b31650 + fStack_50 * fVar1 * _DAT_146b31640;
    fStack_44 = fVar15 * fVar2 * fRam0000000146b31664 + fStack_4c * fVar1 +
                fVar11 * fVar16 * fRam0000000146b31654 + fStack_50 * fVar17 * fRam0000000146b31644;
    fStack_40 = fVar15 * fVar1 * fRam0000000146b31668 + fStack_4c * fVar2 +
                fVar11 * fVar17 * fRam0000000146b31658 + fStack_50 * fVar16 * fRam0000000146b31648;
    fStack_3c = fVar15 * fVar17 * fRam0000000146b3166c + fStack_4c * fVar16 +
                fVar11 * fVar1 * fRam0000000146b3165c + fStack_50 * fVar2 * fRam0000000146b3164c;
    pauVar7 = (undefined1 (*) [12])FQuat::Rotator(&local_48,&local_58);
    fVar17 = (float)DAT_146b315f0;
    fVar1 = DAT_146b315f0._4_4_;
    fVar2 = DAT_146b315f0._8_4_;
    auVar9._12_4_ = 0;
    auVar9._0_12_ = *pauVar7;
    auVar9 = divps(auVar9,_DAT_146b315f0);
    fVar16 = (float)*(undefined8 *)*pauVar7 - (float)(int)auVar9._0_4_ * fVar17;
    fVar11 = (float)((ulonglong)*(undefined8 *)*pauVar7 >> 0x20) - (float)(int)auVar9._4_4_ * fVar1;
    fVar15 = *(float *)(*pauVar7 + 8) - (float)(int)auVar9._8_4_ * fVar2;
    fVar16 = (float)(((uint)(fVar16 + fVar17) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                    (uint)(fVar16 + fVar17));
    fVar11 = (float)(((uint)(fVar11 + fVar1) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                    (uint)(fVar11 + fVar1));
    fStack_50 = (float)(((uint)(fVar15 + fVar2) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                       (uint)(fVar15 + fVar2));
    uVar12 = ((uint)(fVar16 - fVar17) ^ (uint)fVar16) & -(uint)(_DAT_146b315e0 < fVar16) ^
             (uint)fVar16;
    uVar13 = ((uint)(fVar11 - fVar1) ^ (uint)fVar11) & -(uint)(fRam0000000146b315e4 < fVar11) ^
             (uint)fVar11;
    fStack_50 = (float)(((uint)(fStack_50 - fVar2) ^ (uint)fStack_50) &
                        -(uint)(fRam0000000146b315e8 < fStack_50) ^ (uint)fStack_50);
    fVar17 = param_2;
  }
  else {
    if (*(char *)(param_1 + 0x2670) == '\0') goto LAB_142d021cc;
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    fVar2 = *(float *)(param_1 + 0x370);
    fVar16 = *(float *)(param_1 + 0x374);
    fVar11 = *(float *)(param_1 + 0x378);
    fVar15 = *(float *)(param_1 + 0x37c);
    fVar14 = -*(float *)(param_1 + 0x2660);
    fVar10 = -*(float *)(param_1 + 0x2664);
    fStack_4c = *(float *)(param_1 + 0x266c);
    fStack_50 = -*(float *)(param_1 + 0x2668);
    fVar17 = *(float *)(lVar6 + 0x790);
    fVar1 = *(float *)(param_1 + 0x2674);
    local_58 = -*(float *)(param_1 + 0x2660);
    uStack_54 = *(uint *)(param_1 + 0x2664) ^ 0x80000000;
    local_48 = fVar14 * fVar15 * _DAT_146b31660 + fStack_4c * fVar2 +
               fVar10 * fVar11 * _DAT_146b31650 + fStack_50 * fVar16 * _DAT_146b31640;
    fStack_44 = fVar14 * fVar11 * fRam0000000146b31664 + fStack_4c * fVar16 +
                fVar10 * fVar15 * fRam0000000146b31654 + fStack_50 * fVar2 * fRam0000000146b31644;
    fStack_40 = fVar14 * fVar16 * fRam0000000146b31668 + fStack_4c * fVar11 +
                fVar10 * fVar2 * fRam0000000146b31658 + fStack_50 * fVar15 * fRam0000000146b31648;
    fStack_3c = fVar14 * fVar2 * fRam0000000146b3166c + fStack_4c * fVar15 +
                fVar10 * fVar16 * fRam0000000146b3165c + fStack_50 * fVar11 * fRam0000000146b3164c;
    pauVar7 = (undefined1 (*) [12])FQuat::Rotator(&local_48,&local_58);
    fVar2 = (float)DAT_146b315f0;
    fVar16 = DAT_146b315f0._4_4_;
    fVar11 = DAT_146b315f0._8_4_;
    auVar8._12_4_ = 0;
    auVar8._0_12_ = *pauVar7;
    auVar9 = divps(auVar8,_DAT_146b315f0);
    fVar15 = (float)*(undefined8 *)*pauVar7 - (float)(int)auVar9._0_4_ * fVar2;
    fVar10 = (float)((ulonglong)*(undefined8 *)*pauVar7 >> 0x20) - (float)(int)auVar9._4_4_ * fVar16
    ;
    fVar14 = *(float *)(*pauVar7 + 8) - (float)(int)auVar9._8_4_ * fVar11;
    fVar15 = (float)(((uint)(fVar15 + fVar2) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                    (uint)(fVar15 + fVar2));
    fVar10 = (float)(((uint)(fVar10 + fVar16) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                    (uint)(fVar10 + fVar16));
    fStack_50 = (float)(((uint)(fVar14 + fVar11) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                       (uint)(fVar14 + fVar11));
    uVar12 = ((uint)(fVar15 - fVar2) ^ (uint)fVar15) & -(uint)(_DAT_146b315e0 < fVar15) ^
             (uint)fVar15;
    uVar13 = ((uint)(fVar10 - fVar16) ^ (uint)fVar10) & -(uint)(fRam0000000146b315e4 < fVar10) ^
             (uint)fVar10;
    fStack_50 = (float)(((uint)(fStack_50 - fVar11) ^ (uint)fStack_50) &
                        -(uint)(fRam0000000146b315e8 < fStack_50) ^ (uint)fStack_50);
    fVar17 = fVar17 - fVar1;
  }
  fVar17 = 1.0 / fVar17;
  *(ulonglong *)(param_1 + 0x1450) = CONCAT44(uVar13,uVar12);
  *(float *)(param_1 + 0x1458) = fStack_50;
  *(float *)(param_1 + 0x1454) = fVar17 * *(float *)(param_1 + 0x1454);
  *(float *)(param_1 + 0x1458) = fVar17 * *(float *)(param_1 + 0x1458);
  *(float *)(param_1 + 0x1450) = fVar17 * *(float *)(param_1 + 0x1450);
LAB_142d021cc:
  FUN_142d92c10(param_1 + 0x2428,param_2);
  return;
}



// FUNCTION 142d021f0 FUN_142d021f0 body=889 status=ok
// SIG undefined FUN_142d021f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d021f0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(byte *)(param_1 + 0x4ce) = (byte)(*(uint *)((longlong)param_1 + 0x4b4) >> 6) & 1;
  *(undefined4 *)((longlong)param_1 + 0x2674) = *(undefined4 *)((longlong)param_1 + 0x83c);
  *(int *)(param_1 + 0x4cc) = (int)param_1[0x6e];
  *(undefined4 *)((longlong)param_1 + 0x2664) = *(undefined4 *)((longlong)param_1 + 0x374);
  *(int *)(param_1 + 0x4cd) = (int)param_1[0x6f];
  *(undefined4 *)((longlong)param_1 + 0x266c) = *(undefined4 *)((longlong)param_1 + 0x37c);
  (**(code **)(*param_1 + 0xc40))();
  if (((param_1[0x2ef] != 0) && ((*(byte *)((longlong)param_1 + 0x18cc) & 2) == 0)) &&
     (param_1[0x2f] != 0)) {
    FUN_142cb76f0(param_1 + 0x2ee);
  }
  if (param_1[0x1fb] != 0) {
    FUN_142ccd280(param_1[0x1fb] + 0xbe0,param_1);
  }
  if (((0.0001 < ABS(*(float *)((longlong)param_1 + 0x18c))) ||
      (0.0001 < ABS(*(float *)(param_1 + 0x32)))) ||
     (0.0001 < ABS(*(float *)((longlong)param_1 + 0x194)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  lVar4 = 0x13bc;
  if (!bVar1) {
    lVar4 = 0x13b0;
  }
  *(undefined4 *)(param_1 + 0x5f) = *(undefined4 *)(lVar4 + (longlong)param_1);
  FUN_142d035f0(param_1,param_2);
  FUN_142ce1560(param_1,param_2);
  FUN_142d07bd0(param_1);
  FUN_142d075b0(param_1,param_2);
  FUN_142d01700(param_1,param_2);
  FUN_142d02ad0(param_1,param_2);
  FUN_142d02840(param_1);
  FUN_142d02570(param_1,param_2);
  FUN_142d01500(param_1 + 0x4b0);
  if (param_1[0x1fb] != 0) {
    FUN_142cda7c0(param_1[0x1fb] + 0xbe0,param_1);
  }
  if ((((char)param_1[0x49] == '\x06') && (*(char *)((longlong)param_1 + 0x249) == '\x02')) &&
     ((param_1[0x1fb] != 0 && (*(char *)(param_1[0x1fb] + 0xb00) == '\x03')))) {
    iVar3 = FUN_14233f450(param_1);
    if ((((((1 < iVar3) && ((char)param_1[0x49] == '\x06')) &&
          (*(char *)((longlong)param_1 + 0x249) == '\x02')) &&
         ((param_1[0x1fb] != 0 && (*(char *)(param_1[0x1fb] + 0xb00) == '\x03')))) &&
        (param_1[0x44] != 0)) && (*(longlong *)(param_1[0x44] + 0x4c0) != 0)) {
      FUN_142357d10(param_1,param_2);
      cVar2 = (**(code **)(*param_1 + 0x5c0))(param_1);
      if (cVar2 != '\0') {
        cVar2 = FUN_1423146e0(param_1[0x44]);
        if (cVar2 != '\0') {
          local_88 = param_1[0xfa];
          lStack_80 = param_1[0xfb];
          local_78 = (undefined4)param_1[0xfc];
          uStack_74 = *(undefined4 *)((longlong)param_1 + 0x7e4);
          uStack_70 = (undefined4)param_1[0xfd];
          uStack_6c = *(undefined4 *)((longlong)param_1 + 0x7ec);
          local_68 = (undefined4)param_1[0xfe];
          uStack_64 = *(undefined4 *)((longlong)param_1 + 0x7f4);
          uStack_60 = (undefined4)param_1[0xff];
          uStack_5c = *(undefined4 *)((longlong)param_1 + 0x7fc);
          lVar4 = (**(code **)(**(longlong **)(param_1[0x44] + 0x4c0) + 0xa80))
                            (*(longlong **)(param_1[0x44] + 0x4c0),local_58,&local_88);
          local_b8 = &DAT_1468b5d90;
          local_a8 = *(undefined4 *)(lVar4 + 0x10);
          local_a4 = *(undefined4 *)(lVar4 + 0x14);
          local_a0 = *(undefined4 *)(lVar4 + 0x18);
          plVar5 = (longlong *)(**(code **)(*param_1 + 0xa70))(param_1,local_98,&local_a8,param_2);
          param_1[0x100] = *plVar5;
          *(int *)(param_1 + 0x101) = (int)plVar5[1];
          *(undefined8 *)((longlong)param_1 + 0x18c) = _DAT_1468b5d90;
          *(undefined4 *)((longlong)param_1 + 0x194) = DAT_1468b5d98;
          FUN_142cfa050(param_1,param_2,0);
        }
      }
    }
  }
  if (param_1[0x329] != 0) {
    *(undefined8 *)((longlong)param_1 + 0x1da4) = *(undefined8 *)((longlong)param_1 + 0x35c);
    *(undefined4 *)((longlong)param_1 + 0x1dac) = *(undefined4 *)((longlong)param_1 + 0x364);
  }
  FUN_1423584c0(param_1,param_2,param_3);
  return;
}



// FUNCTION 142d02570 FUN_142d02570 body=711 status=ok
// SIG undefined FUN_142d02570(void)

void FUN_142d02570(longlong param_1,float param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((*(longlong *)(param_1 + 0xfe0) != 0) && (*(char *)(param_1 + 0x2290) != '\0')) {
    iVar1 = FUN_142ca1e90(*(longlong *)(param_1 + 0xfe0),*(undefined4 *)(param_1 + 0x2288),
                          *(undefined4 *)(param_1 + 0x228c));
    if (iVar1 != -1) {
      if (*(int *)(param_1 + 0x2230) != *(int *)(param_1 + 0x225c)) {
        lVar3 = *(longlong *)(param_1 + 0x2268);
        if (*(longlong *)(param_1 + 0x2268) == 0) {
          lVar3 = param_1 + 0x2260;
        }
        iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x2270) - 1U & (longlong)iVar1) * 4);
        if (iVar2 != -1) {
          do {
            piVar4 = (int *)((longlong)iVar2 * 0xa0 + *(longlong *)(param_1 + 0x2228));
            if (*piVar4 == iVar1) {
              if (iVar2 != -1) goto LAB_142d02627;
              break;
            }
            iVar2 = piVar4[0x26];
          } while (iVar2 != -1);
        }
      }
      piVar4 = (int *)0x0;
LAB_142d02627:
      lVar3 = *(longlong *)(param_1 + 0x178);
      fVar6 = *(float *)(lVar3 + 0x220) - *(float *)(param_1 + 0x2278);
      fVar7 = *(float *)(lVar3 + 0x224) - *(float *)(param_1 + 0x227c);
      fVar8 = *(float *)(lVar3 + 0x228) - *(float *)(param_1 + 0x2280);
      fVar6 = (float)FFloatCurve::Evaluate
                               (piVar4 + 2,SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8));
      if (fVar6 <= *(float *)(param_1 + 0x2284)) {
        *(float *)(param_1 + 0x2284) = *(float *)(param_1 + 0x2284) + param_2;
      }
      else {
        *(float *)(param_1 + 0x2284) = fVar6;
      }
    }
  }
  if ((*(longlong *)(param_1 + 0xfe0) != 0) && (*(char *)(param_1 + 0x2300) != '\0')) {
    iVar1 = FUN_142ca1e90(*(longlong *)(param_1 + 0xfe0),*(undefined4 *)(param_1 + 0x22f8),
                          *(undefined4 *)(param_1 + 0x22fc));
    if (iVar1 != -1) {
      if (*(int *)(param_1 + 0x22a0) != *(int *)(param_1 + 0x22cc)) {
        lVar3 = *(longlong *)(param_1 + 0x22d8);
        if (*(longlong *)(param_1 + 0x22d8) == 0) {
          lVar3 = param_1 + 0x22d0;
        }
        iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x22e0) - 1U & (longlong)iVar1) * 4);
        if (iVar2 != -1) {
          do {
            piVar4 = (int *)((longlong)iVar2 * 0xa0 + *(longlong *)(param_1 + 0x2298));
            if (*piVar4 == iVar1) {
              if (iVar2 != -1) goto LAB_142d02749;
              break;
            }
            iVar2 = piVar4[0x26];
          } while (iVar2 != -1);
        }
      }
      piVar4 = (int *)0x0;
LAB_142d02749:
      if (*(int *)(param_1 + 0x2310) != *(int *)(param_1 + 0x233c)) {
        lVar3 = *(longlong *)(param_1 + 0x2348);
        if (*(longlong *)(param_1 + 0x2348) == 0) {
          lVar3 = param_1 + 0x2340;
        }
        iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x2350) - 1U & (longlong)iVar1) * 4);
        if (iVar2 != -1) {
          do {
            piVar5 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x2308));
            if (*piVar5 == iVar1) {
              if (iVar2 != -1) goto LAB_142d027b0;
              break;
            }
            iVar2 = piVar5[6];
          } while (iVar2 != -1);
        }
      }
      piVar5 = (int *)0x0;
LAB_142d027b0:
      lVar3 = *(longlong *)(param_1 + 0x178);
      fVar6 = *(float *)(lVar3 + 0x220) - (float)piVar5[3];
      fVar7 = *(float *)(lVar3 + 0x224) - (float)piVar5[4];
      fVar8 = *(float *)(lVar3 + 0x228) - (float)piVar5[5];
      fVar6 = (float)FFloatCurve::Evaluate
                               (piVar4 + 2,-SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8));
      if (fVar6 <= *(float *)(param_1 + 0x22f4)) {
        fVar6 = *(float *)(param_1 + 0x22f4) + param_2;
      }
      *(float *)(param_1 + 0x22f4) = fVar6;
      *(int *)(param_1 + 0x2358) = piVar5[1];
    }
  }
  return;
}



// FUNCTION 142d02840 FUN_142d02840 body=642 status=ok
// SIG undefined FUN_142d02840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d02840(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined *local_e8;
  undefined8 local_d8;
  float local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  float local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_92;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  longlong local_60;
  undefined8 local_58;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if (((char)param_1[0x49] == '\x03') && (0.0 < *(float *)((longlong)param_1 + 0xff4))) {
    if ((param_1[0x24] == 0) && (lVar3 = FUN_1423407b0(), lVar3 == 0)) {
      fVar4 = 0.0;
    }
    else {
      lVar3 = param_1[0x24];
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      fVar4 = *(float *)(lVar3 + 0x790);
    }
    if (*(float *)(param_1 + 0x1fe) <= fVar4 - *(float *)(param_1 + 0x1ff) &&
        fVar4 - *(float *)(param_1 + 0x1ff) != *(float *)(param_1 + 0x1fe)) {
      lVar3 = param_1[0x24];
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      if ((((char)param_1[0x49] == '\x03') &&
          (cVar2 = (**(code **)(*param_1 + 0x5c0))(param_1), cVar2 != '\0')) && (lVar3 != 0)) {
        *(undefined4 *)(param_1 + 0x1ff) = *(undefined4 *)(lVar3 + 0x790);
        local_c0 = (float)(**(code **)(*param_1 + 0xb58))(param_1);
        lVar1 = param_1[0x2f];
        if (lVar1 == 0) {
          local_d8._0_4_ = 0x7f7fffff;
          local_d8._4_4_ = 0x7f7fffff;
          local_d0 = 3.4028235e+38;
        }
        else {
          local_d8._0_4_ = *(undefined4 *)(lVar1 + 0x220);
          local_d8._4_4_ = *(undefined4 *)(lVar1 + 0x224);
          local_d0 = *(float *)(lVar1 + 0x228);
        }
        local_c4 = local_d8._4_4_;
        local_b0 = local_d0;
        local_c0 = local_d0 - local_c0;
        local_c8 = (undefined4)local_d8;
        local_b8 = (undefined4)local_d8;
        uStack_b4 = local_d8._4_4_;
        local_a0 = 0;
        local_60 = 0;
        local_58 = 0;
        local_40 = 0;
        local_38 = 0;
        local_98 = 0x10000;
        local_90 = 0;
        local_d8 = 0;
        local_a8 = 0;
        local_94 = 0;
        local_84 = 0x101;
        local_8c = 0;
        local_92 = 0;
        local_88 = 0;
        FCollisionQueryParams::AddIgnoredActor(&local_a8,param_1[0x44]);
        local_f8 = FUN_14233f510(param_1,&local_d8,0,0);
        local_e8 = &DAT_146aefe68;
        local_f0 = &local_a8;
        local_100 = 2;
        local_108 = &DAT_1464aa810;
        UWorld::SweepSingleByChannel(lVar3,param_1 + 0x200,&local_b8,&local_c8);
        if (local_40 != 0) {
          FMemory::Free();
        }
        if (local_60 != 0) {
          FMemory::Free();
        }
      }
      else {
        FUN_142cf31f0(param_1 + 0x1ff);
      }
    }
  }
  return;
}



// FUNCTION 142d02ad0 FUN_142d02ad0 body=2747 status=ok
// SIG undefined FUN_142d02ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d02ad0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  float *pfVar12;
  float fVar13;
  float extraout_XMM0_Da;
  float fVar14;
  float fVar15;
  uint uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  ulonglong *local_180;
  undefined8 *local_178;
  undefined8 local_168;
  float local_160;
  undefined8 local_158;
  float local_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  ulonglong local_138;
  float local_130;
  undefined4 local_128;
  float local_124;
  float local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 local_e8;
  longlong local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_cc;
  undefined4 local_c4;
  undefined1 local_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if (param_1[0x1fb] == 0) {
    *(longlong *)((longlong)param_1 + 0x13dc) = param_1[0x27a];
    *(int *)((longlong)param_1 + 0x13e4) = (int)param_1[0x27b];
    return;
  }
  fVar13 = (float)(**(code **)(*param_1 + 0xc10))();
  fStack_144 = 0.0;
  fStack_140 = 0.0;
  cVar5 = FUN_1407c3030(param_1 + 0x162);
  if (cVar5 == '\0') {
    uVar8 = FUN_142ced5e0(param_1,&local_f8,(0.0 < fVar13) + '\x01');
    if (param_1[0x1fb] == 0) {
      fVar20 = (float)_DAT_1468b5d90;
      fVar14 = (float)((ulonglong)_DAT_1468b5d90 >> 0x20);
      local_160 = DAT_1468b5d98;
    }
    else {
      puVar11 = (undefined8 *)FUN_142cc2d20(param_1[0x1fb] + 0xbe0,&local_118,uVar8,param_1);
      fVar20 = (float)*puVar11;
      fVar14 = (float)((ulonglong)*puVar11 >> 0x20);
      local_160 = *(float *)(puVar11 + 1);
    }
    local_168 = CONCAT44(fVar14,fVar20);
    FUN_142ced180(param_1,&local_158,2);
    fVar19 = local_160 - local_150;
    fVar15 = (fVar14 - local_158._4_4_) * (fVar14 - local_158._4_4_) +
             (fVar20 - (float)local_158) * (fVar20 - (float)local_158);
    local_148 = SQRT(fVar19 * fVar19 + fVar15);
    local_168 = CONCAT44(fVar14,fVar20);
    fStack_144 = (float)FGenericPlatformMath::Atan2();
    fStack_140 = (float)FGenericPlatformMath::Atan2(fVar19,SQRT(fVar15));
    fStack_144 = (float)UKismetMathLibrary::NormalizeAxis(fStack_144);
    fStack_140 = (float)UKismetMathLibrary::NormalizeAxis(fStack_140);
  }
  else {
    fStack_140 = *(float *)((longlong)param_1 + 0x13e4);
    local_148 = (float)*(undefined8 *)((longlong)param_1 + 0x13dc);
    fStack_144 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x13dc) >> 0x20);
  }
  uVar9 = FUN_1407c3030(param_1 + 0x14f);
  if ((*(longlong *)(param_1[0x1fb] + 0xd18) == 0) || (fVar13 != 0.0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  cVar5 = (char)uVar9;
  if (*(char *)((longlong)param_1 + 0x14e1) != '\0') {
    if (0.0 < fVar13) {
      *(undefined4 *)(param_1 + 0x27e) = 3;
    }
    else {
      uVar16 = *(uint *)(param_1 + 0x27e);
      uVar9 = (ulonglong)uVar16;
      if (((0 < (int)uVar16) && (cVar5 == '\0')) && (!bVar4)) {
        *(undefined4 *)(param_1 + 0x27d) = 0;
        *(uint *)(param_1 + 0x27e) = uVar16 - 1;
        return;
      }
    }
  }
  iVar7 = (int)uVar9;
  fVar20 = *(float *)((longlong)param_1 + 0x13ec);
  uVar21 = 0x3f800000;
  if (fVar13 != fVar20) {
    if ((0.17453292 < ABS(*(float *)((longlong)param_1 + 0x13e4) - fStack_140)) ||
       (0.17453292 < ABS(*(float *)(param_1 + 0x27c) - fStack_144))) {
      iVar7 = (int)(uVar9 >> 8) << 8;
    }
    else {
      iVar7 = (int)CONCAT71((int7)(uVar9 >> 8),1);
    }
    if (fVar20 < fVar13) {
      if ((char)iVar7 != '\0') goto LAB_142d02e10;
LAB_142d02dc3:
      uVar21 = 0x41200000;
    }
    else {
      if ((char)iVar7 == '\0') {
        if ((cVar5 != '\0') || (bVar4)) goto LAB_142d02dc3;
        goto LAB_142d02ddf;
      }
LAB_142d02e10:
      if (cVar5 != '\0') goto LAB_142d02dc3;
    }
    iVar7 = FMath::FInterpConstantTo(fVar20,fVar13,param_2,uVar21);
    *(float *)((longlong)param_1 + 0x13ec) = extraout_XMM0_Da;
    fVar20 = extraout_XMM0_Da;
  }
LAB_142d02ddf:
  if (fVar20 <= 0.0) {
    *(ulonglong *)((longlong)param_1 + 0x13dc) = CONCAT44(fStack_144,local_148);
    *(float *)((longlong)param_1 + 0x13e4) = fStack_140;
    *(undefined4 *)(param_1 + 0x27d) = 0;
    return;
  }
  if ((((char)param_1[0x297] == '\0') || (lVar1 = *(longlong *)(param_1[0x1fb] + 0xa18), lVar1 == 0)
      ) || (*(int *)((longlong)param_1 + 0x13f4) == -1)) {
    lVar1 = *(longlong *)(param_1[0x1fb] + 0x168);
    if (lVar1 == 0) {
      uVar21 = (undefined4)DAT_1468b5da0;
      uVar17 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_160 = DAT_1468b5da8;
    }
    else {
      local_118 = *(float *)(lVar1 + 0x210);
      fStack_114 = *(float *)(lVar1 + 0x214);
      fStack_110 = *(float *)(lVar1 + 0x218);
      fStack_10c = *(float *)(lVar1 + 0x21c);
      auVar3._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_114);
      auVar3._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_118);
      auVar3._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_110);
      auVar3._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_10c);
      iVar7 = movmskps(iVar7,auVar3);
      if (iVar7 != 0) {
        *(float *)(lVar1 + 0x250) = local_118;
        *(float *)(lVar1 + 0x254) = fStack_114;
        *(float *)(lVar1 + 600) = fStack_110;
        *(float *)(lVar1 + 0x25c) = fStack_10c;
        puVar11 = (undefined8 *)FQuat::Rotator(&local_118,&local_138);
        *(undefined8 *)(lVar1 + 0x260) = *puVar11;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar11 + 1);
      }
      uVar21 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar17 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      local_160 = *(float *)(lVar1 + 0x268);
    }
    local_168 = CONCAT44(uVar17,uVar21);
    local_158 = CONCAT44(uVar17,uVar21);
    local_150 = local_160;
    goto LAB_142d0315c;
  }
  FUN_1423acfd0(lVar1,&local_f8);
  switch((int)param_1[0x27f]) {
  case 0:
    fVar13 = 1.0;
    fVar20 = 0.0;
    fVar14 = 0.0;
    break;
  case 1:
    fVar13 = 0.0;
    fVar20 = 1.0;
    fVar14 = 0.0;
    break;
  case 2:
    fVar13 = 0.0;
    fVar20 = 0.0;
    fVar14 = 1.0;
    break;
  case 3:
    fVar13 = 1.0;
    fVar20 = 0.0;
    fVar14 = 0.0;
    goto LAB_142d02f3c;
  case 4:
    fVar13 = 0.0;
    fVar20 = 1.0;
    fVar14 = 0.0;
    goto LAB_142d02f3c;
  case 5:
    fVar13 = 0.0;
    fVar20 = 0.0;
    fVar14 = 1.0;
LAB_142d02f3c:
    fVar15 = fVar14 * fStack_f4 - fVar20 * fStack_f0;
    fVar19 = fVar13 * fStack_f0 - fVar14 * local_f8;
    fVar18 = fVar20 * local_f8 - fVar13 * fStack_f4;
    fVar15 = fVar15 + fVar15;
    fVar19 = fVar19 + fVar19;
    fVar18 = fVar18 + fVar18;
    local_160 = -((fVar19 * local_f8 - fVar15 * fStack_f4) + fStack_ec * fVar18 + fVar14);
    local_168 = CONCAT44(-((fVar15 * fStack_f0 - fVar18 * local_f8) + fStack_ec * fVar19 + fVar20),
                         -((fVar18 * fStack_f4 - fVar19 * fStack_f0) + fStack_ec * fVar15 + fVar13))
    ;
    goto LAB_142d02f00;
  default:
    lVar1 = *(longlong *)(param_1[0x1fb] + 0x168);
    if (lVar1 == 0) {
      uVar21 = (undefined4)DAT_1468b5da0;
      uVar16 = (uint)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_160 = DAT_1468b5da8;
    }
    else {
      local_118 = *(float *)(lVar1 + 0x210);
      fStack_114 = *(float *)(lVar1 + 0x214);
      fStack_110 = *(float *)(lVar1 + 0x218);
      fStack_10c = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_114);
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_118);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_110);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_10c);
      iVar7 = movmskps((int)param_1[0x1fb],auVar2);
      if (iVar7 != 0) {
        *(float *)(lVar1 + 0x250) = local_118;
        *(float *)(lVar1 + 0x254) = fStack_114;
        *(float *)(lVar1 + 600) = fStack_110;
        *(float *)(lVar1 + 0x25c) = fStack_10c;
        puVar11 = (undefined8 *)FQuat::Rotator(&local_118,&local_138);
        *(undefined8 *)(lVar1 + 0x260) = *puVar11;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar11 + 1);
      }
      uVar21 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar16 = (uint)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      local_160 = *(float *)(lVar1 + 0x268);
    }
    local_168 = CONCAT44(uVar16,uVar21);
    local_158 = (ulonglong)uVar16 << 0x20;
    local_150 = 0.0;
    local_138 = local_168;
    local_130 = local_160;
    goto LAB_142d0315c;
  }
  fVar15 = fVar14 * fStack_f4 - fVar20 * fStack_f0;
  fVar19 = fVar13 * fStack_f0 - fVar14 * local_f8;
  fVar18 = fVar20 * local_f8 - fVar13 * fStack_f4;
  fVar15 = fVar15 + fVar15;
  fVar19 = fVar19 + fVar19;
  fVar18 = fVar18 + fVar18;
  local_160 = (fVar19 * local_f8 - fVar15 * fStack_f4) + fStack_ec * fVar18 + fVar14;
  local_168 = CONCAT44((fVar15 * fStack_f0 - fVar18 * local_f8) + fStack_ec * fVar19 + fVar20,
                       (fVar18 * fStack_f4 - fVar19 * fStack_f0) + fStack_ec * fVar15 + fVar13);
LAB_142d02f00:
  puVar10 = (ulonglong *)FVector::Rotation(&local_168,&local_138);
  local_158 = *puVar10 & 0xffffffff00000000;
  local_150 = 0.0;
LAB_142d0315c:
  if ((char)param_1[0x296] == '\0') {
    fVar20 = *(float *)((longlong)param_1 + 0x13fc);
    fVar13 = *(float *)((longlong)param_1 + 0x14a4);
  }
  else {
    fVar20 = *(float *)((longlong)param_1 + 0x14a4);
    fVar13 = (float)FUN_142c585a0(param_1 + 0x295,local_148);
    fVar20 = fVar13 * (1.0 - fVar20) + fVar20;
    FUN_142cc15c0(param_1[0x1fb] + 0xbe0,&local_f8,2);
    cVar5 = FUN_142c6a420(param_1 + 0x422,6);
    cVar6 = FUN_142cb4220((undefined1 *)((longlong)param_1 + 0x1404),&local_f8);
    if ((cVar6 != '\0') || ((cVar5 != '\0' && ((char)param_1[0x288] == '\0')))) {
      *(float *)((longlong)param_1 + 0x13fc) = fVar20;
    }
    *(undefined1 *)((longlong)param_1 + 0x1404) = local_f8._0_1_;
    *(float *)(param_1 + 0x281) = fStack_f4;
    *(float *)((longlong)param_1 + 0x140c) = fStack_f0;
    *(float *)(param_1 + 0x282) = fStack_ec;
    *(undefined4 *)((longlong)param_1 + 0x1414) = local_e8;
    param_1[0x283] = local_e4;
    *(undefined8 *)((longlong)param_1 + 0x1424) = local_d8;
    param_1[0x286] = local_cc;
    *(undefined4 *)(param_1 + 0x284) = local_dc;
    *(undefined4 *)((longlong)param_1 + 0x142c) = local_d0;
    *(undefined4 *)(param_1 + 0x287) = local_c4;
    *(undefined1 *)((longlong)param_1 + 0x143c) = local_c0;
    fVar13 = *(float *)((longlong)param_1 + 0x13fc);
    *(char *)(param_1 + 0x288) = cVar5;
    if (1e-08 < ABS(*(float *)(param_1 + 0x280) - fVar13)) {
      fVar13 = (float)FMath::FInterpConstantTo
                                (*(float *)(param_1 + 0x280),fVar13,param_2,
                                 *(undefined4 *)((longlong)param_1 + 0x14b4));
    }
  }
  *(float *)(param_1 + 0x280) = fVar13;
  local_124 = *(float *)(param_1 + 0x27d) * 0.017453292;
  local_160 = 3.4028235e+38;
  local_128 = 0x461c4000;
  local_130 = local_150;
  local_178 = &local_168;
  local_180 = &local_138;
  local_168 = CONCAT44(*(float *)((longlong)param_1 + 0x148c) * 0.017453292,0x7f7fffff);
  local_138 = local_158;
  local_188 = param_2;
  local_120 = local_124;
  puVar11 = (undefined8 *)FUN_142d861d0(&local_118,&local_148,(longlong)param_1 + 0x13dc,&local_128)
  ;
  *(undefined8 *)((longlong)param_1 + 0x13dc) = *puVar11;
  *(undefined4 *)((longlong)param_1 + 0x13e4) = *(undefined4 *)(puVar11 + 1);
  uVar21 = UKismetMathLibrary::NormalizeAxis((int)param_1[0x27c]);
  *(undefined4 *)(param_1 + 0x27c) = uVar21;
  fVar13 = (float)UKismetMathLibrary::NormalizeAxis(*(undefined4 *)((longlong)param_1 + 0x13e4));
  *(float *)((longlong)param_1 + 0x13dc) = local_148;
  *(float *)((longlong)param_1 + 0x13e4) = fVar13;
  fVar13 = SQRT((fStack_144 - *(float *)(param_1 + 0x27c)) *
                (fStack_144 - *(float *)(param_1 + 0x27c)) +
                (fStack_140 - fVar13) * (fStack_140 - fVar13)) * 57.295776;
  if (fVar13 <= 0.0001) {
    uVar21 = 0;
  }
  else {
    if (10.0 <= fVar13) {
      if ((char)param_1[0x293] == '\0') {
        fVar13 = *(float *)(param_1 + 0x292);
      }
      else {
        pfVar12 = (float *)(**(code **)(*(longlong *)param_1[0x1fb] + 0x308))
                                     ((longlong *)param_1[0x1fb],&local_118);
        fVar13 = *(float *)(param_1 + 0x292);
        fVar14 = (float)FUN_142c585a0((longlong)param_1 + 0x149c,
                                      SQRT(*pfVar12 * *pfVar12 + pfVar12[1] * pfVar12[1] +
                                           pfVar12[2] * pfVar12[2]));
        fVar13 = fVar14 * (*(float *)((longlong)param_1 + 0x1494) - fVar13) + fVar13;
      }
    }
    else {
      fVar13 = 25.0;
    }
    uVar21 = FMath::FInterpConstantTo((int)param_1[0x27d],fVar13,param_2,fVar13 + fVar13);
  }
  *(undefined4 *)(param_1 + 0x27d) = uVar21;
  if (1e-08 < ABS(*(float *)((longlong)param_1 + 0x13fc) - fVar20)) {
    uVar21 = local_158._4_4_;
    fVar13 = (float)FMath::FindDeltaAngleDegrees(local_158._4_4_,fStack_144 * 57.295776);
    if (1e-08 < ABS(fVar13)) {
      fVar14 = (float)FMath::FindDeltaAngleDegrees(uVar21,*(float *)(param_1 + 0x27c) * 57.295776);
      fVar15 = ABS(fVar14 / fVar13);
      if (0.0 <= fVar14 / fVar13) {
        if (fVar15 < 1.0) {
          *(float *)((longlong)param_1 + 0x13fc) = fVar15;
        }
      }
      else {
        *(float *)((longlong)param_1 + 0x13fc) = fVar20;
      }
    }
  }
  return;
}



// FUNCTION 142d035b0 FUN_142d035b0 body=61 status=ok
// SIG undefined FUN_142d035b0(void)

void FUN_142d035b0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_142c48f90(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0x118),0);
  if (cVar1 == '\0') {
    FUN_142bc8a50(param_2,param_1);
  }
  return;
}



// FUNCTION 142d035f0 FUN_142d035f0 body=1894 status=ok
// SIG undefined FUN_142d035f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d035f0(longlong param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float *pfVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined8 local_d8;
  float fStack_d0;
  uint uStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  undefined8 local_88;
  undefined4 local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [80];
  
  if (*(char *)(param_1 + 0x111c) != '\0') {
    *(float *)(param_1 + 0x1120) = *(float *)(param_1 + 0x1120) - param_2;
    if (((*(float *)(param_1 + 0x10d0) == 0.0) && (*(float *)(param_1 + 0x10d4) == 0.0)) &&
       (*(float *)(param_1 + 0x10d8) == 0.0)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (((bVar6) && (*(longlong *)(param_1 + 0x10c0) == 0)) && (*(char *)(param_1 + 0x10e8) == '\0')
       ) {
      iVar8 = (int)((ulonglong)&stack0x00000000 >> 8) << 8;
    }
    else {
      iVar8 = (int)CONCAT71((int7)((ulonglong)&stack0x00000000 >> 8),1);
    }
    if ((((char)iVar8 != '\0') && (0.0 < param_2)) &&
       ((*(longlong *)(param_1 + 0xfd8) != 0 &&
        ((lVar2 = *(longlong *)(param_1 + 0x178), lVar2 != 0 &&
         (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xfd8) + 0x490), plVar3 != (longlong *)0x0
         )))))) {
      local_78 = *(float *)(lVar2 + 0x210);
      fStack_74 = *(float *)(lVar2 + 0x214);
      fStack_70 = *(float *)(lVar2 + 0x218);
      fStack_6c = *(float *)(lVar2 + 0x21c);
      auVar16._4_4_ = -(uint)(fStack_74 != *(float *)(lVar2 + 0x254));
      auVar16._0_4_ = -(uint)(local_78 != *(float *)(lVar2 + 0x250));
      auVar16._8_4_ = -(uint)(fStack_70 != *(float *)(lVar2 + 600));
      auVar16._12_4_ = -(uint)(fStack_6c != *(float *)(lVar2 + 0x25c));
      iVar8 = movmskps(iVar8,auVar16);
      lVar10 = lVar2;
      if (iVar8 != 0) {
        *(float *)(lVar2 + 0x250) = local_78;
        *(float *)(lVar2 + 0x254) = fStack_74;
        *(float *)(lVar2 + 600) = fStack_70;
        *(float *)(lVar2 + 0x25c) = fStack_6c;
        puVar9 = (undefined8 *)FQuat::Rotator(&local_78,&local_d8);
        *(undefined8 *)(lVar2 + 0x260) = *puVar9;
        *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar9 + 1);
        lVar10 = *(longlong *)(param_1 + 0x178);
      }
      local_c8 = (float)*(undefined8 *)(lVar2 + 0x260);
      fStack_c4 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x260) >> 0x20);
      local_c0 = *(float *)(lVar2 + 0x268);
      local_a8 = *(float *)(lVar10 + 0x220);
      local_a4 = *(float *)(lVar10 + 0x224);
      local_a0 = *(float *)(lVar10 + 0x228);
      if ((*(uint *)((longlong)plVar3 + 0x4cc) >> 1 & 1) != 0) {
        (**(code **)(*plVar3 + 0x830))(plVar3,&local_a8,&local_c8);
      }
      fVar30 = (float)DAT_146b315f0;
      fVar24 = DAT_146b315f0._4_4_;
      auVar15._4_4_ = fStack_c4;
      auVar15._0_4_ = local_c8;
      auVar15._8_4_ = local_c0;
      auVar15._12_4_ = 0;
      local_c0 = 0.0;
      auVar16 = divps(auVar15,_DAT_146b315f0);
      local_c8 = local_c8 - (float)(int)auVar16._0_4_ * fVar30;
      fStack_c4 = fStack_c4 - (float)(int)auVar16._4_4_ * fVar24;
      local_c8 = (float)(-(uint)(0.0 <= local_c8) & ((uint)(local_c8 + fVar30) ^ (uint)local_c8) ^
                        (uint)(local_c8 + fVar30));
      fStack_c4 = (float)(-(uint)(0.0 <= fStack_c4) & ((uint)(fStack_c4 + fVar24) ^ (uint)fStack_c4)
                         ^ (uint)(fStack_c4 + fVar24));
      local_c8 = (float)(((uint)(local_c8 - fVar30) ^ (uint)local_c8) &
                         -(uint)(_DAT_146b315e0 < local_c8) ^ (uint)local_c8);
      fStack_c4 = (float)(((uint)(fStack_c4 - fVar24) ^ (uint)fStack_c4) &
                          -(uint)(fRam0000000146b315e4 < fStack_c4) ^ (uint)fStack_c4);
      if (*(char *)(param_1 + 0x10e8) == '\0') {
        lVar2 = *(longlong *)(param_1 + 0x10c0);
        if (lVar2 == 0) {
          local_b8 = *(undefined8 *)(param_1 + 0x10d0);
          local_b0 = *(float *)(param_1 + 0x10d8);
        }
        else {
          lVar10 = APostProcessVolume::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (((bVar6) && (plVar4 = *(longlong **)(lVar2 + 0x4c0), plVar4 != (longlong *)0x0)) &&
             (cVar7 = (**(code **)(*plVar4 + 0x440))(plVar4,*(undefined8 *)(param_1 + 0x10c8)),
             cVar7 != '\0')) {
            (**(code **)(*plVar4 + 0x428))(plVar4,&local_b8,*(undefined8 *)(param_1 + 0x10c8));
          }
          else {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10c0) + 0x168);
            local_b8 = _DAT_1468b5d90;
            local_b0 = DAT_1468b5d98;
            if (lVar2 != 0) {
              local_b8 = *(undefined8 *)(lVar2 + 0x220);
              local_b0 = *(float *)(lVar2 + 0x228);
            }
          }
        }
        fStack_d0 = local_b0 - local_a0;
        local_d8 = CONCAT44(local_b8._4_4_ - local_a4,(float)local_b8 - local_a8);
        puVar9 = (undefined8 *)FVector::Rotation(&local_d8,&local_78);
        local_88 = *puVar9;
        local_80 = *(undefined4 *)(puVar9 + 1);
      }
      else {
        local_88 = *(undefined8 *)(param_1 + 0x10dc);
        local_80 = *(undefined4 *)(param_1 + 0x10e4);
      }
      if (*(char *)(param_1 + 0x1100) == '\0') {
        uVar31 = *(undefined4 *)(param_1 + 0x10f4);
        FMath::RInterpTo(&local_d8,&local_c8,&local_88);
        fVar24 = (float)DAT_146b315f0;
        fVar29 = DAT_146b315f0._4_4_;
        fVar1 = DAT_146b315f0._8_4_;
        auVar18._4_4_ = local_d8._4_4_ - fStack_c4;
        auVar18._0_4_ = (float)local_d8 - local_c8;
        auVar18._8_4_ = fStack_d0 - local_c0;
        auVar18._12_4_ = 0;
        auVar16 = divps(auVar18,_DAT_146b315f0);
        fVar20 = ((float)local_d8 - local_c8) - (float)(int)auVar16._0_4_ * fVar24;
        fVar21 = (local_d8._4_4_ - fStack_c4) - (float)(int)auVar16._4_4_ * fVar29;
        fVar22 = (fStack_d0 - local_c0) - (float)(int)auVar16._8_4_ * fVar1;
        fVar30 = *(float *)(param_1 + 0x10f8);
        fVar23 = (float)(-(uint)(0.0 <= fVar20) & ((uint)(fVar20 + fVar24) ^ (uint)fVar20) ^
                        (uint)(fVar20 + fVar24));
        fVar25 = (float)(-(uint)(0.0 <= fVar21) & ((uint)(fVar21 + fVar29) ^ (uint)fVar21) ^
                        (uint)(fVar21 + fVar29));
        fVar22 = (float)(-(uint)(0.0 <= fVar22) & ((uint)(fVar22 + fVar1) ^ (uint)fVar22) ^
                        (uint)(fVar22 + fVar1));
        fVar20 = 1.0 / param_2;
        fVar21 = (float)(((uint)(fVar23 - fVar24) ^ (uint)fVar23) & -(uint)(_DAT_146b315e0 < fVar23)
                        ^ (uint)fVar23) * fVar20;
        fVar24 = (float)(((uint)(fVar25 - fVar29) ^ (uint)fVar25) &
                         -(uint)(fRam0000000146b315e4 < fVar25) ^ (uint)fVar25) * fVar20;
        local_94 = fVar24;
        if (((0.0 <= fVar30) && (local_94 = -fVar30, local_94 <= fVar24)) &&
           (local_94 = fVar24, fVar30 <= fVar24)) {
          local_94 = fVar30;
        }
        fVar30 = *(float *)(param_1 + 0x10fc);
        fVar24 = fVar21;
        if (((0.0 <= fVar30) && (fVar24 = -fVar30, fVar24 <= fVar21)) &&
           (fVar24 = fVar21, fVar30 <= fVar21)) {
          fVar24 = fVar30;
        }
        fVar24 = fVar24 * param_2;
        local_94 = local_94 * param_2;
        local_90 = (float)(((uint)(fVar22 - fVar1) ^ (uint)fVar22) &
                           -(uint)(fRam0000000146b315e8 < fVar22) ^ (uint)fVar22) * fVar20 * param_2
        ;
        fVar29 = local_c8 + fVar24;
        fVar30 = fStack_c4 + local_94;
        local_98 = fVar24;
      }
      else {
        uVar31 = *(undefined4 *)(param_1 + 0x1108);
        uVar32 = *(undefined4 *)(param_1 + 0x110c);
        uVar14 = UKismetMathLibrary::Ease();
        uVar11 = FRotator::Quaternion(&local_88,&local_b8);
        uVar12 = FRotator::Quaternion(param_1 + 0x1110,local_68);
        pfVar13 = (float *)FQuat::Slerp_NotNormalized(local_58,uVar12,uVar11,uVar14,uVar31,uVar32);
        fVar30 = *pfVar13;
        fVar24 = pfVar13[1];
        fVar29 = pfVar13[2];
        fVar1 = pfVar13[3];
        auVar19._0_4_ = fVar30 * fVar30 + fVar29 * fVar29;
        auVar19._4_4_ = fVar24 * fVar24 + fVar1 * fVar1;
        auVar19._8_4_ = fVar29 * fVar29 + fVar30 * fVar30;
        auVar19._12_4_ = fVar1 * fVar1 + fVar24 * fVar24;
        fVar25 = auVar19._4_4_ + auVar19._0_4_;
        fVar26 = auVar19._8_4_ + auVar19._4_4_;
        fVar27 = auVar19._12_4_ + auVar19._8_4_;
        fVar28 = auVar19._0_4_ + auVar19._12_4_;
        auVar5._4_4_ = fVar26;
        auVar5._0_4_ = fVar25;
        auVar5._8_4_ = fVar27;
        auVar5._12_4_ = fVar28;
        auVar16 = rsqrtps(auVar19,auVar5);
        fVar20 = auVar16._0_4_;
        fVar21 = auVar16._4_4_;
        fVar22 = auVar16._8_4_;
        fVar23 = auVar16._12_4_;
        fVar20 = (_DAT_146b31610 - fVar20 * fVar20 * fVar25 * _DAT_146b31610) * fVar20 + fVar20;
        fVar21 = (fRam0000000146b31614 - fVar21 * fVar21 * fVar26 * fRam0000000146b31614) * fVar21 +
                 fVar21;
        fVar22 = (fRam0000000146b31618 - fVar22 * fVar22 * fVar27 * fRam0000000146b31618) * fVar22 +
                 fVar22;
        fVar23 = (fRam0000000146b3161c - fVar23 * fVar23 * fVar28 * fRam0000000146b3161c) * fVar23 +
                 fVar23;
        fStack_d0 = (float)(((uint)(((fRam0000000146b31618 -
                                     fVar22 * fVar22 * fVar27 * fRam0000000146b31618) * fVar22 +
                                    fVar22) * fVar29) ^ uRam0000000146b31608) &
                            -(uint)(1e-08 <= fVar27) ^ uRam0000000146b31608);
        uStack_cc = ((uint)(((fRam0000000146b3161c - fVar23 * fVar23 * fVar28 * fRam0000000146b3161c
                             ) * fVar23 + fVar23) * fVar1) ^ uRam0000000146b3160c) &
                    -(uint)(1e-08 <= fVar28) ^ uRam0000000146b3160c;
        local_d8 = CONCAT44(((uint)(((fRam0000000146b31614 -
                                     fVar21 * fVar21 * fVar26 * fRam0000000146b31614) * fVar21 +
                                    fVar21) * fVar24) ^ uRam0000000146b31604) &
                            -(uint)(1e-08 <= fVar26) ^ uRam0000000146b31604,
                            ((uint)(((_DAT_146b31610 - fVar20 * fVar20 * fVar25 * _DAT_146b31610) *
                                     fVar20 + fVar20) * fVar30) ^ _DAT_146b31600) &
                            -(uint)(1e-08 <= fVar25) ^ _DAT_146b31600);
        puVar9 = (undefined8 *)FQuat::Rotator(&local_d8,&local_78);
        fVar29 = (float)*puVar9;
        fVar24 = fVar29 - local_c8;
        local_d8._4_4_ = (float)((ulonglong)*puVar9 >> 0x20);
        fVar1 = (float)DAT_146b315f0;
        fVar30 = DAT_146b315f0._4_4_;
        auVar17._4_4_ = local_d8._4_4_ - fStack_c4;
        auVar17._0_4_ = fVar24;
        auVar17._8_4_ = -local_c0;
        auVar17._12_4_ = 0;
        auVar16 = divps(auVar17,_DAT_146b315f0);
        local_90 = 0.0;
        fVar20 = fVar24 - (float)(int)auVar16._0_4_ * fVar1;
        fVar21 = (local_d8._4_4_ - fStack_c4) - (float)(int)auVar16._4_4_ * fVar30;
        fVar20 = (float)(-(uint)(0.0 <= fVar20) & ((uint)(fVar20 + fVar1) ^ (uint)fVar20) ^
                        (uint)(fVar20 + fVar1));
        local_94 = (float)(-(uint)(0.0 <= fVar21) & ((uint)(fVar21 + fVar30) ^ (uint)fVar21) ^
                          (uint)(fVar21 + fVar30));
        local_94 = (float)(((uint)(local_94 - fVar30) ^ (uint)local_94) &
                           -(uint)(fRam0000000146b315e4 < local_94) ^ (uint)local_94);
        fVar30 = local_d8._4_4_;
        local_98 = (float)(((uint)(fVar20 - fVar1) ^ (uint)fVar20) &
                           -(uint)(_DAT_146b315e0 < fVar20) ^ (uint)fVar20);
      }
      local_d8 = CONCAT44(fVar30,fVar29);
      fStack_d0 = 0.0;
      (**(code **)(*plVar3 + 0x728))(plVar3,&local_d8,0,fVar24,uVar31);
      (**(code **)(*plVar3 + 0x840))(plVar3,&local_98);
      local_b0 = 0.0;
      local_d8 = (ulonglong)(uint)fVar30 << 0x20;
      fStack_d0 = 0.0;
      AActor::SetActorRotation(*(undefined8 *)(param_1 + 0xfd8),&local_d8,0);
    }
  }
  return;
}



// FUNCTION 142d03d60 FUN_142d03d60 body=88 status=ok
// SIG undefined FUN_142d03d60(void)

void FUN_142d03d60(longlong param_1,float param_2)

{
  if ((*(longlong *)(param_1 + 0xfd8) != 0) && (*(char *)(param_1 + 0x1200) != '\0')) {
    param_2 = param_2 + *(float *)(param_1 + 0x1204);
    *(float *)(param_1 + 0x1204) = param_2;
    FUN_142d07960(param_1,param_2);
    if (*(float *)(param_1 + 0x1208) <= param_2 && param_2 != *(float *)(param_1 + 0x1208)) {
      FUN_142cebf10(param_1);
    }
  }
  return;
}



// FUNCTION 142d03dc0 FUN_142d03dc0 body=1292 status=ok
// SIG undefined FUN_142d03dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong *
FUN_142d03dc0(longlong param_1,ulonglong *param_2,longlong *param_3,undefined8 param_4,
             undefined8 *param_5,float param_6,undefined1 param_7)

{
  float *pfVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res8 [2];
  ulonglong local_188;
  float local_180;
  ulonglong local_178;
  float local_170;
  undefined8 local_168;
  float local_160;
  undefined1 local_158 [4];
  ulonglong local_154;
  undefined4 local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 local_128 [12];
  undefined1 local_11c [20];
  undefined1 local_108 [224];
  
  if (*(longlong *)(param_1 + 0x408) != 0) {
    lVar2 = param_3[0x2d];
    local_170 = (float)DAT_1468b5da8;
    local_178 = DAT_1468b5da0;
    if (lVar2 != 0) {
      local_138 = *(float *)(lVar2 + 0x210);
      fStack_134 = *(float *)(lVar2 + 0x214);
      fStack_130 = *(float *)(lVar2 + 0x218);
      fStack_12c = *(float *)(lVar2 + 0x21c);
      auVar11._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != fStack_134);
      auVar11._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != local_138);
      auVar11._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fStack_130);
      auVar11._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != fStack_12c);
      iVar4 = movmskps((int)&stack0x00000000,auVar11);
      if (iVar4 != 0) {
        *(float *)(lVar2 + 0x250) = local_138;
        *(float *)(lVar2 + 0x254) = fStack_134;
        *(float *)(lVar2 + 600) = fStack_130;
        *(float *)(lVar2 + 0x25c) = fStack_12c;
        puVar5 = (undefined8 *)FQuat::Rotator(&local_138,local_128);
        *(undefined8 *)(lVar2 + 0x260) = *puVar5;
        *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar5 + 1);
      }
      local_170 = (float)*(undefined4 *)(lVar2 + 0x268);
      local_178 = *(ulonglong *)(lVar2 + 0x260);
    }
    local_154 = local_178;
    local_14c = local_170;
    puVar6 = (ulonglong *)FRotator::Vector(&local_154,local_11c);
    local_180 = (float)((uint)puVar6[1] ^ 0x80000000);
    local_188 = *puVar6 ^ 0x8000000080000000;
    local_168 = 0;
    local_160 = 1.0;
    uVar7 = FRotationMatrix::MakeFromZX(local_108,&local_168,&local_188);
    FMatrix::GetUnitAxis(uVar7,&local_148,1);
    lVar2 = param_3[0x2d];
    if (lVar2 == 0) {
      local_14c = DAT_1468b5d98;
      puVar6 = &local_154;
      local_154 = _DAT_1468b5d90;
    }
    else {
      puVar6 = &local_188;
      local_180 = (float)*(uint *)(lVar2 + 0x228);
      local_188 = *(ulonglong *)(lVar2 + 0x220);
    }
    local_168 = *puVar6;
    local_160 = *(float *)(puVar6 + 1);
    if (param_6 < 0.0) {
      (**(code **)(*param_3 + 0x578))(param_3,local_res8,local_158);
      param_6 = local_res8[0];
    }
    (**(code **)(**(longlong **)(param_1 + 0x408) + 0x578))
              (*(longlong **)(param_1 + 0x408),local_res8,local_158);
    local_res8[0] = local_res8[0] + param_6;
    pfVar8 = (float *)*param_5;
    pfVar1 = pfVar8 + *(int *)(param_5 + 1);
    if (pfVar8 != pfVar1) {
      fVar9 = local_160 - local_res8[0] * local_140;
      local_170 = fVar9;
      do {
        fVar13 = *pfVar8 * 0.008726646;
        if (fVar13 < 0.0) {
          fVar10 = fVar13 * 0.15915494 - 0.5;
        }
        else {
          fVar10 = fVar13 * 0.15915494 + 0.5;
        }
        fVar13 = fVar13 - (float)(int)fVar10 * 6.2831855;
        if (fVar13 <= 1.5707964) {
          if (-1.5707964 <= fVar13) {
            fVar10 = 1.0;
          }
          else {
            fVar10 = -1.0;
            fVar13 = -3.1415927 - fVar13;
          }
        }
        else {
          fVar10 = -1.0;
          fVar13 = 3.1415927 - fVar13;
        }
        fVar12 = fVar13 * fVar13;
        fVar13 = (((((2.7525562e-06 - fVar12 * 2.3889859e-08) * fVar12 - 0.00019840874) * fVar12 +
                   0.008333331) * fVar12 - 0.16666667) * fVar12 + 1.0) * fVar13;
        fVar10 = (((((2.4760495e-05 - fVar12 * 2.6051615e-07) * fVar12 - 0.0013888378) * fVar12 +
                   0.041666638) * fVar12 - 0.5) * fVar12 + 1.0) * fVar10;
        fVar12 = -(fVar13 * local_144) + -(fVar13 * local_144);
        fVar14 = (fVar13 + fVar13) * local_148;
        local_188 = CONCAT44(local_168._4_4_ -
                             (fVar14 * fVar10 + local_144 + fVar12 * fVar13) * local_res8[0],
                             (float)local_168 -
                             ((fVar12 * fVar10 + local_148) - fVar14 * fVar13) * local_res8[0]);
        local_180 = fVar9;
        local_178 = local_188;
        cVar3 = FUN_142d042d0(param_1,&local_178,*(undefined8 *)(param_1 + 0x408),param_4,&local_188
                              ,0x42480000,param_7,0);
        if (cVar3 != '\0') {
          *param_2 = local_188;
          *(float *)(param_2 + 1) = local_180;
          *(undefined1 *)((longlong)param_2 + 0xc) = 1;
          return param_2;
        }
        pfVar8 = pfVar8 + 1;
      } while (pfVar8 != pfVar1);
    }
  }
  *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  return param_2;
}



// FUNCTION 142d042d0 FUN_142d042d0 body=1730 status=ok
// SIG undefined FUN_142d042d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142d042d0(longlong *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4,
                       undefined8 *param_5,undefined4 param_6,char param_7,undefined8 *param_8)

{
  longlong *plVar1;
  void *_Src;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined1 auStack_2c8 [32];
  undefined1 *local_2a8;
  undefined *local_2a0;
  undefined *local_298;
  char local_288 [8];
  undefined8 *local_280;
  float local_278;
  float local_270;
  undefined8 local_268;
  float local_260;
  undefined8 *local_258;
  float local_250;
  undefined8 *local_248;
  float fStack_240;
  float fStack_23c;
  longlong *local_238;
  undefined8 local_230;
  longlong local_228 [2];
  undefined8 *local_218;
  undefined4 local_210;
  longlong *local_208;
  undefined8 local_200;
  undefined1 local_1f8 [16];
  byte local_1e8 [12];
  undefined4 local_1dc;
  undefined4 local_1d4;
  undefined4 local_1d0;
  float local_1cc;
  undefined1 local_158 [28];
  undefined1 local_13c;
  longlong local_110;
  longlong local_f0;
  undefined1 local_d8 [28];
  undefined1 local_bc;
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_258 = param_5;
  local_248 = param_8;
  if (param_3 == 0) {
    uVar5 = (ulonglong)param_2 & 0xffffffffffffff00;
  }
  else {
    *param_5 = *param_2;
    uVar5 = (ulonglong)*(uint *)(param_2 + 1);
    *(uint *)(param_5 + 1) = *(uint *)(param_2 + 1);
    plVar1 = *(longlong **)(param_3 + 0x168);
    if (plVar1 != (longlong *)0x0) {
      local_218 = param_2;
      local_208 = param_1;
      local_200 = param_4;
      lVar6 = FUN_1429f11d0();
      iVar4 = *(int *)(lVar6 + 0x90);
      uVar5 = (longlong)iVar4;
      if ((*(int *)(plVar1[2] + 0x90) < iVar4) ||
         (uVar5 = *(ulonglong *)(plVar1[2] + 0x88),
         *(longlong *)(uVar5 + (longlong)iVar4 * 8) != lVar6 + 0x88)) {
        uVar5 = uVar5 & 0xffffffffffffff00;
      }
      else {
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
      }
      if ((char)uVar5 != '\0') {
        puVar9 = (undefined8 *)0x0;
        local_278 = *(float *)(plVar1 + 0x70);
        lVar6 = (longlong)(int)local_278;
        _Src = (void *)plVar1[0x6f];
        local_280 = (undefined8 *)0x0;
        puVar12 = puVar9;
        if (local_278 != 0.0) {
          local_270 = local_278;
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&local_280,local_278,0);
          puVar12 = local_280;
          _guard_xfg_dispatch_icall_nop(local_280,_Src,lVar6 << 3);
        }
        local_228[0] = 0;
        local_228[1] = 0;
        local_238 = (longlong *)0x0;
        local_230 = 0;
        local_270 = local_278;
        (**(code **)(*param_1 + 0x4c8))(param_1,&local_238,local_228);
        puVar14 = (undefined8 *)
                  ((ulonglong)((longlong)(local_238 + (int)local_230) + (7 - (longlong)local_238))
                  >> 3);
        if (local_238 + (int)local_230 < local_238) {
          puVar14 = puVar9;
        }
        plVar10 = local_238;
        puVar13 = puVar9;
        if (puVar14 != (undefined8 *)0x0) {
          do {
            FUN_14238f290(plVar1,*plVar10,1);
            puVar13 = (undefined8 *)((longlong)puVar13 + 1);
            plVar10 = plVar10 + 1;
          } while (puVar13 != puVar14);
        }
        puVar14 = local_258;
        local_268 = *local_258;
        local_260 = *(float *)(local_258 + 1);
        if (param_7 != '\0') {
          piVar7 = (int *)(**(code **)(*plVar1 + 0x748))(plVar1,local_1f8,0);
          iVar4 = *piVar7;
          if (iVar4 == 1) {
            fVar17 = (float)piVar7[3];
          }
          else if (iVar4 == 2) {
            fVar17 = (float)piVar7[1];
          }
          else {
            fVar17 = DAT_1468b5d98;
            if (iVar4 == 3) {
              fVar17 = (float)piVar7[2];
            }
          }
          local_258 = (undefined8 *)*local_218;
          local_280 = (undefined8 *)*local_218;
          local_278 = fVar17 + 200.0 + *(float *)(local_218 + 1);
          local_250 = *(float *)(local_218 + 1) - (fVar17 + 200.0);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38) <
               DAT_146b318e0) && (_Init_thread_header(&DAT_146b318e0), DAT_146b318e0 == -1)) {
            FName::FName(&DAT_146b318d8,L"TryFindSafeDetachLocation - Find ground trace",1);
            _Init_thread_footer(&DAT_146b318e0);
          }
          local_2a8 = (undefined1 *)param_3;
          FUN_1422ffb20(local_158,DAT_146b318d8,local_288,1);
          FCollisionQueryParams::AddIgnoredActors(local_158);
          local_13c = *(undefined1 *)((longlong)plVar1 + 0x302);
          _guard_xfg_dispatch_icall_nop(local_1e8,0,0x90);
          local_1dc = 0x3f800000;
          lVar6 = local_208[0x24];
          if (lVar6 == 0) {
            lVar6 = FUN_1423407b0();
          }
          local_2a0 = local_158;
          local_298 = &DAT_146aefe68;
          local_2a8 = (undefined1 *)((ulonglong)local_2a8 & 0xffffffff00000000);
          cVar3 = UWorld::LineTraceSingleByChannel(lVar6,local_1e8,&local_280,&local_258);
          if ((cVar3 != '\0') && ((local_1e8[0] & 1) != 0)) {
            local_268 = CONCAT44(local_1d0,local_1d4);
            local_260 = local_1cc + fVar17;
          }
          if (local_f0 != 0) {
            FMemory::Free();
          }
          if (local_110 != 0) {
            FMemory::Free();
          }
        }
        cVar3 = *(char *)(param_3 + 0x93);
        if (-1 < cVar3) {
          FUN_14223c460(param_3,1);
        }
        if (local_248 == (undefined8 *)0x0) {
          lVar6 = *(longlong *)(param_3 + 0x168);
          if (lVar6 == 0) {
            uVar15 = (undefined4)DAT_1468b5da0;
            uVar16 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
            local_278 = (float)DAT_1468b5da8;
          }
          else {
            fVar17 = *(float *)(lVar6 + 0x210);
            local_248 = *(undefined8 **)(lVar6 + 0x210);
            fStack_240 = *(float *)(lVar6 + 0x218);
            fStack_23c = *(float *)(lVar6 + 0x21c);
            auVar2._4_4_ = -(uint)(*(float *)(lVar6 + 0x214) != *(float *)(lVar6 + 0x254));
            auVar2._0_4_ = -(uint)(fVar17 != *(float *)(lVar6 + 0x250));
            auVar2._8_4_ = -(uint)(fStack_240 != *(float *)(lVar6 + 600));
            auVar2._12_4_ = -(uint)(fStack_23c != *(float *)(lVar6 + 0x25c));
            iVar4 = movmskps(0,auVar2);
            if (iVar4 != 0) {
              *(float *)(lVar6 + 0x250) = fVar17;
              *(float *)(lVar6 + 0x254) = *(float *)(lVar6 + 0x214);
              *(float *)(lVar6 + 600) = fStack_240;
              *(float *)(lVar6 + 0x25c) = fStack_23c;
              puVar13 = (undefined8 *)FQuat::Rotator(&local_248,&local_280);
              *(undefined8 *)(lVar6 + 0x260) = *puVar13;
              *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar13 + 1);
            }
            uVar15 = (undefined4)*(undefined8 *)(lVar6 + 0x260);
            uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x260) >> 0x20);
            local_278 = (float)*(undefined4 *)(lVar6 + 0x268);
          }
          local_280 = (undefined8 *)CONCAT44(uVar16,uVar15);
          fStack_240 = local_278;
          ppuVar8 = &local_248;
          local_248 = (undefined8 *)CONCAT44(uVar16,uVar15);
        }
        else {
          local_278 = (float)*(undefined4 *)(local_248 + 1);
          ppuVar8 = &local_280;
          local_280 = (undefined8 *)*local_248;
        }
        local_218 = *ppuVar8;
        local_210 = *(undefined4 *)(ppuVar8 + 1);
        local_288[0] = FUN_142d08a20(param_3,&local_268,&local_218,param_6);
        if (-1 < cVar3) {
          FUN_14223c460(param_3,0);
        }
        UMistLogHudWidget::ClearEntries(plVar1);
        puVar13 = (undefined8 *)
                  ((ulonglong)((longlong)(puVar12 + (int)local_270) + (7 - (longlong)puVar12)) >> 3)
        ;
        if (puVar12 + (int)local_270 < puVar12) {
          puVar13 = puVar9;
        }
        puVar11 = puVar12;
        if (puVar13 != (undefined8 *)0x0) {
          do {
            FUN_14238f290(plVar1,*puVar11,1);
            puVar9 = (undefined8 *)((longlong)puVar9 + 1);
            puVar11 = puVar11 + 1;
          } while (puVar9 != puVar13);
        }
        if (local_288[0] == '\0') {
          uVar5 = 0;
        }
        else {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38) <
               DAT_146b318f0) && (_Init_thread_header(&DAT_146b318f0), DAT_146b318f0 == -1)) {
            FName::FName(&DAT_146b318e8,L"SafeDetachLocation",1);
            _Init_thread_footer(&DAT_146b318f0);
          }
          local_2a8 = (undefined1 *)param_3;
          FUN_1422ffb20(local_d8,DAT_146b318e8,local_288,1);
          FCollisionQueryParams::AddIgnoredActors(local_d8,local_228);
          local_bc = *(undefined1 *)((longlong)plVar1 + 0x302);
          lVar6 = local_208[0x24];
          if (lVar6 == 0) {
            lVar6 = FUN_1423407b0();
          }
          local_2a0 = &DAT_146aefe68;
          local_2a8 = local_d8;
          cVar3 = UWorld::LineTraceTestByChannel(lVar6,local_200,&local_268,2);
          if (cVar3 == '\0') {
            *puVar14 = local_268;
            *(float *)(puVar14 + 1) = local_260;
          }
          uVar5 = (ulonglong)(cVar3 == '\0');
          if (local_70 != 0) {
            FMemory::Free();
          }
          if (local_90 != 0) {
            FMemory::Free();
          }
        }
        if (local_238 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_228[0] != 0) {
          FMemory::Free();
        }
        if (puVar12 == (undefined8 *)0x0) {
          return uVar5;
        }
        FMemory::Free(puVar12);
        return uVar5;
      }
    }
    uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
  }
  return uVar5;
}



// FUNCTION 142d049a0 FUN_142d049a0 body=910 status=ok
// SIG undefined FUN_142d049a0(void)

void FUN_142d049a0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined8 local_c8;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [64];
  
  if ((((*(longlong *)(param_1 + 0x10) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x10) + 0xc0) != '\0')) && (param_2 != (longlong *)0x0))
     && (param_3 != 0)) {
    uVar4 = UCircularThrobber::GetPrivateStaticClass();
    lVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
    if (lVar5 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = FUN_142dee8a0(lVar5,param_3);
    }
    if (cVar2 == '\0') {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb8);
    }
    else {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb0);
    }
    if (lVar5 != 0) {
      lVar1 = param_2[0x2d];
      local_c8._0_4_ = DAT_1468b5d90;
      local_c8._4_4_ = DAT_1468b5d94;
      if (lVar1 == 0) {
        local_c0 = DAT_1468b5d98;
      }
      else {
        local_c8._0_4_ = *(float *)(lVar1 + 0x220);
        local_c8._4_4_ = *(float *)(lVar1 + 0x224);
        local_c0 = *(float *)(lVar1 + 0x228);
      }
      local_b0 = local_c0;
      local_b4 = local_c8._4_4_;
      local_b8 = (float)local_c8;
      lVar1 = *(longlong *)(param_3 + 0x168);
      local_a0 = local_c0;
      local_a8._0_4_ = (float)local_c8;
      local_a8._4_4_ = local_c8._4_4_;
      if (lVar1 == 0) {
        local_c8._0_4_ = DAT_1468b5d90;
        local_c8._4_4_ = DAT_1468b5d94;
        local_c0 = DAT_1468b5d98;
      }
      else {
        local_c8._0_4_ = *(float *)(lVar1 + 0x220);
        local_c8._4_4_ = *(float *)(lVar1 + 0x224);
        local_c0 = *(float *)(lVar1 + 0x228);
      }
      local_b4 = local_c8._4_4_ - local_b4;
      local_b8 = (float)local_c8 - local_b8;
      local_b0 = local_c0 - local_b0;
      fVar9 = local_b4 * local_b4 + local_b8 * local_b8;
      if (fVar9 == 1.0) {
        if (local_b0 != 0.0) {
          local_b0 = 0.0;
        }
      }
      else if (1e-08 <= fVar9) {
        auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar10 = auVar11._0_4_;
        fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
        fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
        local_b0 = 0.0;
        local_b8 = local_b8 * fVar10;
        local_b4 = local_b4 * fVar10;
      }
      else {
        local_b8 = DAT_1468b5d90;
        local_b4 = DAT_1468b5d94;
        local_b0 = DAT_1468b5d98;
      }
      if (lVar1 == 0) {
        uVar7 = (undefined4)DAT_1468b5da0;
        uVar8 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_c0 = (float)DAT_1468b5da8;
      }
      else {
        fVar9 = *(float *)(lVar1 + 0x210);
        local_88 = *(undefined8 *)(lVar1 + 0x210);
        fVar10 = *(float *)(lVar1 + 0x218);
        uStack_80 = *(undefined8 *)(lVar1 + 0x218);
        auVar11._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != *(float *)(lVar1 + 0x214));
        auVar11._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != fVar9);
        auVar11._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fVar10);
        auVar11._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != *(float *)(lVar1 + 0x21c));
        iVar3 = movmskps(local_c0,auVar11);
        if (iVar3 != 0) {
          *(float *)(lVar1 + 0x250) = fVar9;
          *(float *)(lVar1 + 0x254) = *(float *)(lVar1 + 0x214);
          *(float *)(lVar1 + 600) = fVar10;
          *(float *)(lVar1 + 0x25c) = *(float *)(lVar1 + 0x21c);
          puVar6 = (undefined8 *)FQuat::Rotator(&local_88,local_68);
          *(undefined8 *)(lVar1 + 0x260) = *puVar6;
          *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar6 + 1);
        }
        uVar7 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
        uVar8 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
        local_c0 = (float)*(undefined4 *)(lVar1 + 0x268);
      }
      local_c8 = CONCAT44(uVar8,uVar7);
      local_a8 = local_c8;
      local_a0 = local_c0;
      FRotator::UnrotateVector(&local_a8,&local_98,&local_b8);
      uVar7 = FUN_142d9cad0(*(longlong *)(param_1 + 0x10) + 0x90,param_2);
      puVar6 = (undefined8 *)FUN_142d979a0(local_58,uVar7);
      local_88 = *puVar6;
      uStack_80 = puVar6[1];
      local_78 = *(undefined4 *)(puVar6 + 2);
      uStack_74 = *(undefined4 *)((longlong)puVar6 + 0x14);
      uStack_70 = *(undefined4 *)(puVar6 + 3);
      uStack_6c = *(undefined4 *)((longlong)puVar6 + 0x1c);
      local_c0 = (float)local_90;
      local_c8 = local_98;
      FUN_142d6ec80(param_3,param_2,lVar5,&local_c8,0,&local_88);
    }
  }
  return;
}



// FUNCTION 142d04d30 FUN_142d04d30 body=118 status=ok
// SIG undefined FUN_142d04d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d04d30(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [448];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  FUN_14237e6d0(local_1d8,*(undefined8 *)(param_1 + 0x178),1,1);
  FUN_142358a10(param_1,param_2);
  FUN_14237f990(local_1d8);
  return;
}



// FUNCTION 142d04db0 FUN_142d04db0 body=289 status=ok
// SIG undefined FUN_142d04db0(void)

void FUN_142d04db0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  FUN_142359510();
  iVar3 = FUN_142340f30(param_1);
  if ((iVar3 == 3) &&
     ((*(longlong *)(param_1 + 0x120) != 0 || (lVar5 = FUN_1423407b0(param_1), lVar5 != 0)))) {
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
    }
    cVar2 = UWorld::IsGameWorld(lVar5);
    if ((cVar2 != '\0') && (lVar5 = *(longlong *)(param_1 + 0x408), lVar5 != 0)) {
      lVar6 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        iVar3 = *(int *)(lVar5 + 0xc);
        lVar6 = 0;
        if (iVar3 < (int)DAT_1469e91c4) {
          uVar7 = iVar3 >> 0x1f & 0xffff;
          uVar4 = iVar3 + uVar7;
          lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                  (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
        }
        if (((*(uint *)(lVar6 + 8) & 0x30000000) == 0) && (*(longlong *)(lVar5 + 0xaf8) == param_1))
        {
          *(undefined8 *)(lVar5 + 0xae8) = 0;
          *(undefined1 *)(lVar5 + 0xaf0) = 0;
          *(undefined2 *)(lVar5 + 0xaf2) = 0;
          FUN_142cf6b00(lVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 142d04ee0 FUN_142d04ee0 body=287 status=ok
// SIG undefined FUN_142d04ee0(void)

void FUN_142d04ee0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (param_2 != 0) {
    iVar7 = *(int *)(param_1 + 0xfc8);
    plVar1 = (longlong *)(param_1 + 0xec0);
    plVar6 = *(longlong **)(param_1 + 0xfc0);
    if (*(longlong **)(param_1 + 0xfc0) == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    plVar4 = plVar6;
    if (plVar6 != plVar6 + (longlong)iVar7 * 2) {
      while (*plVar4 != param_2) {
        plVar4 = plVar4 + 2;
        if (plVar4 == plVar6 + (longlong)iVar7 * 2) {
          return;
        }
      }
      iVar3 = (int)((longlong)plVar4 - (longlong)plVar6 >> 4);
      if (iVar3 != -1) {
        iVar5 = (iVar7 - iVar3) + -1;
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (plVar6 + (longlong)iVar3 * 2,plVar6 + (longlong)(iVar3 + 1) * 2,
                     (longlong)iVar5 << 4);
          iVar7 = *(int *)(param_1 + 0xfc8);
        }
        *(int *)(param_1 + 0xfc8) = iVar7 + -1;
        TArray<D3D12_STATE_SUBOBJECT,TInlineAllocator<16,FDefaultAllocator>_>::ResizeShrink(plVar1);
        if (*(longlong *)(param_1 + 0xfe8) != 0) {
          uVar2 = (undefined1)*(undefined4 *)(param_1 + 0xfd0);
          if (0 < *(int *)(param_1 + 0xfc8)) {
            plVar6 = *(longlong **)(param_1 + 0xfc0);
            if (*(longlong **)(param_1 + 0xfc0) == (longlong *)0x0) {
              plVar6 = plVar1;
            }
            uVar2 = (undefined1)(int)plVar6[(longlong)*(int *)(param_1 + 0xfc8) * 2 + -1];
          }
          *(undefined1 *)(*(longlong *)(param_1 + 0xfe8) + 0x30) = uVar2;
        }
      }
    }
  }
  return;
}



// FUNCTION 142d05000 FUN_142d05000 body=5750 status=ok
// SIG undefined FUN_142d05000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142d05000(longlong *param_1,float param_2)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  uint7 uVar16;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar17;
  uint uVar18;
  longlong *plVar19;
  int *piVar20;
  longlong *plVar21;
  longlong lVar22;
  int *piVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  int iVar26;
  char cVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  int iVar31;
  longlong lVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  longlong local_270;
  undefined1 local_268;
  undefined8 local_260;
  undefined1 local_258;
  char local_248;
  longlong *local_240;
  float local_238;
  longlong *local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  float local_210;
  ulonglong local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined1 local_178 [16];
  longlong local_168 [16];
  longlong *local_e8;
  uint local_e0;
  int local_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  local_240 = param_1;
  plVar7 = (longlong *)FUN_142c6f130();
  local_238 = *(float *)(param_1 + 0x33);
  param_2 = local_238 + param_2;
  fVar38 = 1.0 / *(float *)((longlong)param_1 + 0x194);
  *(float *)(param_1 + 0x33) = param_2;
  local_238 = fVar38 * local_238;
  if (0.0 <= local_238) {
    if (1.0 <= local_238) {
      local_238 = 1.0;
    }
  }
  else {
    local_238 = 0.0;
  }
  fVar38 = fVar38 * param_2;
  if (0.0 <= fVar38) {
    if (1.0 <= fVar38) {
      fVar38 = 1.0;
    }
  }
  else {
    fVar38 = 0.0;
  }
  lVar14 = param_1[2];
  uVar16 = (uint7)((ulonglong)plVar7 >> 8);
  if (((fVar38 == 1.0) && (local_238 == 1.0)) && ((*(byte *)(lVar14 + 0x60) & 1) == 0)) {
    plVar8 = (longlong *)CONCAT71(uVar16,1);
  }
  else {
    plVar8 = (longlong *)((ulonglong)uVar16 << 8);
  }
  *(char *)((longlong)param_1 + 0x191) = (char)plVar8;
  if ((char)plVar8 == '\0') {
    if ((*(char *)((longlong)param_1 + 0x192) == '\0') &&
       (local_230 = plVar7, local_228 = lVar14, local_210 = fVar38,
       plVar8 = (longlong *)FUN_142235230(plVar7), (int)plVar8 != 1)) {
      bVar4 = *(byte *)(lVar14 + 0x60);
      fVar48 = fVar38;
      if (((bVar4 & 1) != 0) && (fVar35 = *(float *)((longlong)param_1 + 0x194), 0.0 < fVar35)) {
        fVar48 = *(float *)(param_1 + 0x33);
        if (1e-08 < ABS(fVar35)) {
          fVar37 = (float)(int)(fVar48 / fVar35) * fVar35;
          if (ABS(fVar48) < ABS(fVar37)) {
            fVar37 = fVar48;
          }
          fVar48 = fVar48 - fVar37;
        }
        else {
          AK::MemoryMgr::StartProfileThreadUsage((uint)bVar4);
          fVar35 = *(float *)((longlong)param_1 + 0x194);
          fVar48 = 0.0;
          bVar4 = *(byte *)(lVar14 + 0x60);
        }
        fVar48 = fVar48 / fVar35;
        if ((bVar4 & 2) != 0) {
          fVar38 = fVar48;
        }
      }
      lVar32 = 0;
      iVar26 = (int)param_1[0x21] + -1;
      if (-1 < iVar26) {
        lVar22 = (longlong)iVar26 << 4;
        lVar29 = lVar22;
        do {
          lVar10 = param_1[0x20];
          lVar9 = *(longlong *)(lVar22 + 8 + lVar10);
          if (lVar9 == 0) {
LAB_142d05273:
            iVar31 = (int)param_1[0x21];
            iVar6 = (iVar31 - iVar26) + -1;
            if (0 < iVar6) {
              iVar6 = 1;
            }
            if (iVar6 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar29 + lVar10),
                         (void *)((longlong)(iVar31 - iVar6) * 0x10 + lVar10),(longlong)iVar6 << 4);
              iVar31 = (int)param_1[0x21];
            }
            *(int *)(param_1 + 0x21) = iVar31 + -1;
            TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x20);
          }
          else {
            iVar31 = *(int *)(lVar9 + 0xc);
            lVar9 = lVar32;
            if (iVar31 < (int)DAT_1469e91c4) {
              uVar18 = iVar31 >> 0x1f & 0xffff;
              uVar5 = iVar31 + uVar18;
              lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                      (longlong)(int)((uVar5 & 0xffff) - uVar18) * 0x18;
            }
            if ((*(uint *)(lVar9 + 8) >> 0x1d & 1) != 0) goto LAB_142d05273;
          }
          lVar29 = lVar29 + -0x10;
          lVar22 = lVar22 + -0x10;
          iVar26 = iVar26 + -1;
        } while (-1 < iVar26);
      }
      iVar26 = (int)param_1[0x23] + -1;
      plVar19 = param_1;
      if (-1 < iVar26) {
        lVar29 = (longlong)iVar26 * 8;
        lVar22 = lVar29;
        do {
          lVar10 = param_1[0x22];
          if (*(longlong *)(lVar29 + lVar10) == 0) {
LAB_142d05352:
            iVar31 = (int)param_1[0x23];
            iVar6 = (iVar31 - iVar26) + -1;
            if (0 < iVar6) {
              iVar6 = 1;
            }
            if (iVar6 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar22 + lVar10),(void *)(lVar10 + (longlong)(iVar31 - iVar6) * 8)
                         ,(longlong)iVar6 << 3);
              iVar31 = (int)param_1[0x23];
            }
            *(int *)(param_1 + 0x23) = iVar31 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x22);
          }
          else {
            iVar31 = *(int *)(*(longlong *)(lVar29 + lVar10) + 0xc);
            lVar9 = lVar32;
            if (iVar31 < (int)DAT_1469e91c4) {
              uVar18 = iVar31 >> 0x1f & 0xffff;
              uVar5 = iVar31 + uVar18;
              lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                      (longlong)(int)((uVar5 & 0xffff) - uVar18) * 0x18;
            }
            if ((*(uint *)(lVar9 + 8) >> 0x1d & 1) != 0) goto LAB_142d05352;
          }
          lVar22 = lVar22 + -8;
          lVar29 = lVar29 + -8;
          iVar26 = iVar26 + -1;
          plVar19 = local_240;
        } while (-1 < iVar26);
      }
      plVar8 = (longlong *)(ulonglong)*(uint *)(plVar19 + 0x25);
      iVar26 = *(uint *)(plVar19 + 0x25) - 1;
      plVar21 = plVar19;
      if (-1 < iVar26) {
        lVar29 = (longlong)iVar26 * 8;
        lVar22 = lVar29;
        do {
          lVar14 = plVar19[0x24];
          if (*(longlong *)(lVar29 + lVar14) == 0) {
LAB_142d05433:
            iVar31 = (int)plVar19[0x25];
            iVar6 = (iVar31 - iVar26) + -1;
            if (0 < iVar6) {
              iVar6 = 1;
            }
            if (iVar6 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar22 + lVar14),(void *)(lVar14 + (longlong)(iVar31 - iVar6) * 8)
                         ,(longlong)iVar6 << 3);
              iVar31 = (int)plVar19[0x25];
            }
            *(int *)(plVar19 + 0x25) = iVar31 + -1;
            plVar8 = (longlong *)
                     TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar19 + 0x24);
          }
          else {
            iVar31 = *(int *)(*(longlong *)(lVar29 + lVar14) + 0xc);
            lVar10 = lVar32;
            if (iVar31 < (int)DAT_1469e91c4) {
              uVar18 = iVar31 >> 0x1f & 0xffff;
              uVar5 = iVar31 + uVar18;
              lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                       (longlong)(int)((uVar5 & 0xffff) - uVar18) * 0x18;
            }
            plVar8 = (longlong *)0x0;
            if (((byte)((uint)*(undefined4 *)(lVar10 + 8) >> 0x1d) & 1) != 0) goto LAB_142d05433;
          }
          lVar22 = lVar22 + -8;
          lVar29 = lVar29 + -8;
          iVar26 = iVar26 + -1;
          plVar21 = local_240;
          lVar14 = local_228;
        } while (-1 < iVar26);
      }
      if (plVar7 != (longlong *)0x0) {
        puVar11 = (undefined8 *)(**(code **)(*plVar7 + 0x560))(plVar7,&local_1f8,0);
        local_198 = *puVar11;
        uStack_190 = puVar11[1];
        local_188 = puVar11[2];
        uStack_180 = *(uint *)(puVar11 + 3);
        plVar8 = (longlong *)(ulonglong)uStack_180;
      }
      local_1c0 = ((float)uStack_190 + local_188._4_4_) * 0.5;
      local_1c4 = (local_198._4_4_ + (float)local_188) * 0.5;
      local_1c8 = ((float)local_198 + uStack_190._4_4_) * 0.5;
      fVar35 = (float)uStack_190;
      fVar37 = local_188._4_4_;
      fVar44 = local_198._4_4_;
      fVar45 = (float)local_188;
      fVar46 = (float)local_198;
      fVar47 = uStack_190._4_4_;
      local_1b8 = local_1c8;
      local_1b4 = local_1c4;
      local_1b0 = local_1c0;
      if (0 < (int)plVar21[0x21]) {
        uVar5 = *(uint *)(lVar14 + 0xa8);
        plVar8 = (longlong *)(ulonglong)uVar5;
        if ((0 < (int)uVar5) || (0 < *(int *)(lVar14 + 0xb8))) {
          if (((*(byte *)(lVar14 + 0xd1) & 0x20) == 0) &&
             ((plVar21[0x36] != 0 || (plVar21[0x37] != 0)))) {
            local_248 = '\0';
          }
          else {
            local_248 = '\x01';
          }
          iVar26 = 0;
          cVar27 = local_248;
          if (0 < (int)uVar5) {
            do {
              local_270 = 0;
              puVar11 = (undefined8 *)(lVar32 + *(longlong *)(lVar14 + 0xa0));
              if ((iVar26 < 0) || ((int)plVar21[0x27] <= iVar26)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                local_270 = plVar21[0x26] + (longlong)iVar26 * 8;
              }
              fVar35 = fVar38;
              if ((*(byte *)((longlong)puVar11 + 0x82) & 1) != 0) {
                fVar35 = fVar48;
              }
              local_278 = local_230;
              plVar8 = (longlong *)FUN_142ce99f0(puVar11,fVar35,&local_198,&local_1b8);
              if (plVar21[0x36] != 0) {
                plVar8 = (longlong *)FUN_1425a2750(plVar21[0x36],*puVar11);
              }
              if (plVar21[0x37] != 0) {
                plVar8 = (longlong *)FUN_1425a2750(plVar21[0x37],*puVar11);
              }
              if (cVar27 != '\0') {
                lVar29 = plVar21[0x20];
                lVar22 = lVar29 + (longlong)(int)local_240[0x21] * 0x10;
                plVar8 = local_240;
                plVar21 = local_240;
                if (lVar29 != lVar22) {
                  do {
                    local_278 = puVar11 + 0x29;
                    if ((*(byte *)(puVar11 + 0x28) & 1) == 0) {
                      local_278 = (longlong *)0x0;
                    }
                    plVar8 = (longlong *)FUN_142cff4c0(*(undefined8 *)(lVar29 + 8),*puVar11);
                    lVar29 = lVar29 + 0x10;
                    plVar21 = local_240;
                    cVar27 = local_248;
                  } while (lVar29 != lVar22);
                }
              }
              iVar26 = iVar26 + 1;
              lVar32 = lVar32 + 0x158;
            } while (iVar26 < *(int *)(lVar14 + 0xa8));
            fVar35 = (float)uStack_190;
            fVar37 = local_188._4_4_;
            fVar44 = local_198._4_4_;
            fVar45 = (float)local_188;
            fVar46 = (float)local_198;
            fVar47 = uStack_190._4_4_;
          }
          uVar30 = 0;
          plVar7 = local_230;
          uVar24 = uVar30;
          if (0 < *(int *)(lVar14 + 0xb8)) {
            do {
              puVar11 = (undefined8 *)(uVar24 + *(longlong *)(lVar14 + 0xb0));
              plVar8 = (longlong *)FUN_142ce9b30(puVar11,&local_1d8);
              if (plVar21[0x36] != 0) {
                local_1f8 = local_1d8;
                uStack_1f4 = uStack_1d4;
                uStack_1f0 = uStack_1d0;
                uStack_1ec = uStack_1cc;
                plVar8 = (longlong *)FUN_1425a2be0(plVar21[0x36],*puVar11,&local_1f8);
              }
              if (plVar21[0x37] != 0) {
                local_1f8 = local_1d8;
                uStack_1f4 = uStack_1d4;
                uStack_1f0 = uStack_1d0;
                uStack_1ec = uStack_1cc;
                plVar8 = (longlong *)FUN_1425a2be0(plVar21[0x37],*puVar11,&local_1f8);
              }
              if (cVar27 != '\0') {
                piVar20 = (int *)plVar21[0x20];
                piVar23 = piVar20 + (longlong)(int)local_240[0x21] * 4;
                plVar8 = local_240;
                plVar21 = local_240;
                if (piVar20 != piVar23) {
                  do {
                    if ((*piVar20 == -1) || ((*(byte *)(lVar14 + 0xd1) & 8) != 0)) {
                      uVar15 = 1;
                    }
                    else {
                      uVar15 = 0;
                    }
                    local_278 = puVar11 + 0x4b;
                    if ((*(byte *)(puVar11 + 0x4a) & 1) == 0) {
                      local_278 = (longlong *)0x0;
                    }
                    plVar8 = (longlong *)
                             FUN_142cff5b0(*(undefined8 *)(piVar20 + 2),*puVar11,&local_1d8,uVar15);
                    piVar20 = piVar20 + 4;
                    plVar21 = local_240;
                    cVar27 = local_248;
                  } while (piVar20 != piVar23);
                }
              }
              uVar5 = (int)uVar30 + 1;
              uVar30 = (ulonglong)uVar5;
              plVar7 = local_230;
              uVar24 = uVar24 + 0x268;
            } while ((int)uVar5 < *(int *)(lVar14 + 0xb8));
          }
        }
      }
      uVar24 = 0;
      if (0 < (int)plVar21[0x23]) {
        local_208 = local_208 & 0xffffffff00000000;
        uVar39 = 0;
        uVar30 = uVar24;
        uVar40 = local_1f8;
        uVar41 = uStack_1f4;
        uVar42 = uStack_1f0;
        uVar43 = uStack_1ec;
        if (0 < *(int *)(lVar14 + 0x128)) {
          do {
            lVar32 = 0;
            lVar14 = *(longlong *)(lVar14 + 0x120);
            iVar26 = (int)uVar24;
            if ((iVar26 < 0) || ((int)plVar21[0x2d] <= iVar26)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              lVar32 = (longlong)iVar26 * 0x1c + local_240[0x2c];
            }
            bVar4 = *(byte *)(uVar30 + 8 + lVar14);
            if ((bVar4 & 1) != 0) {
              puVar12 = (undefined4 *)FUN_142ce9b30(lVar14 + 0x10 + uVar30,&local_1d8);
              uVar40 = *puVar12;
              uVar41 = puVar12[1];
              uVar42 = puVar12[2];
              uVar43 = puVar12[3];
              bVar4 = *(byte *)(uVar30 + 8 + lVar14);
            }
            if ((bVar4 & 2) != 0) {
              local_270 = lVar32 + 0x14;
              if (lVar32 == 0) {
                local_270 = 0;
              }
              fVar35 = fVar38;
              if ((*(byte *)(uVar30 + 0x2fa + lVar14) & 1) != 0) {
                fVar35 = fVar48;
              }
              local_278 = plVar7;
              uVar39 = FUN_142ce99f0(lVar14 + 0x278 + uVar30,fVar35,&local_198,&local_1b8);
            }
            uVar28 = 0;
            plVar7 = (longlong *)local_240[0x22];
            plVar8 = plVar7 + (int)local_240[0x23];
            uVar24 = (longlong)(int)local_240[0x23] & 0x1fffffffffffffff;
            if (plVar8 < plVar7) {
              uVar24 = uVar28;
            }
            if (uVar24 != 0) {
              local_220 = 0;
              do {
                lVar32 = *(longlong *)(uVar30 + lVar14);
                lVar29 = *plVar7;
                uVar16 = (uint7)((ulonglong)lVar32 >> 8);
                if ((lVar32 == 0) || (*(int *)(lVar29 + 0x18) == (int)lVar32)) {
                  plVar8 = (longlong *)CONCAT71(uVar16,1);
                }
                else {
                  plVar8 = (longlong *)((ulonglong)uVar16 << 8);
                }
                if ((char)plVar8 != '\0') {
                  bVar4 = *(byte *)(uVar30 + 8 + lVar14);
                  if ((bVar4 & 1) != 0) {
                    local_1f8 = uVar40;
                    uStack_1f4 = uVar41;
                    uStack_1f0 = uVar42;
                    uStack_1ec = uVar43;
                    FUN_142377550(lVar29,&local_1f8,1);
                    bVar4 = *(byte *)(uVar30 + 8 + lVar14);
                  }
                  plVar8 = (longlong *)0x0;
                  if ((bVar4 & 2) != 0) {
                    plVar8 = (longlong *)FUN_1423772c0(lVar29,uVar39);
                  }
                }
                plVar7 = plVar7 + 1;
                uVar28 = uVar28 + 1;
              } while (uVar28 != uVar24);
            }
            uVar5 = (int)local_208 + 1;
            uVar24 = (ulonglong)uVar5;
            local_208 = CONCAT44(local_208._4_4_,uVar5);
            plVar21 = local_240;
            uVar30 = uVar30 + 0x3d0;
            plVar7 = local_230;
            lVar14 = local_228;
          } while ((int)uVar5 < *(int *)(local_228 + 0x128));
          fVar35 = (float)uStack_190;
          fVar37 = local_188._4_4_;
          fVar44 = local_198._4_4_;
          fVar45 = (float)local_188;
          fVar46 = (float)local_198;
          fVar47 = uStack_190._4_4_;
        }
      }
      plVar7 = (longlong *)0x0;
      lVar32 = local_228;
      if (0 < (int)plVar21[0x25]) {
        local_e8 = (longlong *)0x0;
        local_dc = 0;
        local_208 = local_208 & 0xffffffff00000000;
        plVar19 = plVar7;
        plVar13 = plVar7;
        if (0 < *(int *)(lVar14 + 0x100)) {
          do {
            plVar17 = (longlong *)0x0;
            local_220 = *(longlong *)(local_228 + 0xf8);
            iVar26 = (int)plVar19;
            if ((iVar26 < 0) || ((int)plVar21[0x2b] <= iVar26)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            plVar19 = plVar17;
            if (bVar3) {
              plVar19 = (longlong *)((longlong)iVar26 * 0x20 + plVar21[0x2a]);
            }
            local_e0 = 0;
            if (local_dc < 0) {
              FUN_1407418a0(local_168,0);
              plVar17 = (longlong *)(ulonglong)local_e0;
              plVar7 = local_e8;
            }
            uVar30 = 0;
            iVar26 = (int)plVar17;
            plVar21 = (longlong *)local_240[0x24];
            plVar8 = plVar21 + (int)local_240[0x25];
            uVar24 = (longlong)(int)local_240[0x25] & 0x1fffffffffffffff;
            if (plVar8 < plVar21) {
              uVar24 = uVar30;
            }
            lVar14 = local_220;
            if (uVar24 != 0) {
              do {
                lVar32 = *plVar21;
                plVar8 = *(longlong **)(lVar14 + 8 + (longlong)plVar13);
                if (lVar32 != 0) {
                  if ((plVar8 == (longlong *)0x0) || (*(longlong **)(lVar32 + 0x6f0) != plVar8)) {
                    plVar8 = *(longlong **)(lVar14 + (longlong)plVar13);
                    local_200 = 0;
                    if ((plVar8 != (longlong *)0x0) && (*(int *)(lVar32 + 0x18) != (int)plVar8))
                    goto LAB_142d05b8f;
                  }
                  local_e0 = (int)plVar17 + 1;
                  if (local_dc < (int)local_e0) {
                    TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow
                              (local_168,plVar17);
                    plVar7 = local_e8;
                  }
                  plVar8 = (longlong *)(longlong)(int)plVar17;
                  plVar17 = local_168;
                  if (plVar7 != (longlong *)0x0) {
                    plVar17 = plVar7;
                  }
                  plVar17[(longlong)plVar8] = lVar32;
                  plVar17 = (longlong *)(ulonglong)local_e0;
                  lVar14 = local_220;
                  plVar7 = local_e8;
                }
LAB_142d05b8f:
                iVar26 = (int)plVar17;
                plVar21 = plVar21 + 1;
                uVar30 = uVar30 + 1;
              } while (uVar30 != uVar24);
            }
            iVar31 = 0;
            if (iVar26 != 0) {
              if (0 < *(int *)(lVar14 + 0x18 + (longlong)plVar13)) {
                local_218 = 0;
                do {
                  local_270 = 0;
                  puVar11 = (undefined8 *)
                            (*(longlong *)(lVar14 + 0x10 + (longlong)plVar13) + local_218);
                  if (plVar19 != (longlong *)0x0) {
                    if ((iVar31 < 0) || ((int)plVar19[1] <= iVar31)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    if (bVar3) {
                      local_270 = *plVar19 + (longlong)iVar31 * 8;
                    }
                  }
                  fVar35 = fVar38;
                  if ((*(byte *)((longlong)puVar11 + 0x82) & 1) != 0) {
                    fVar35 = fVar48;
                  }
                  local_278 = local_230;
                  FUN_142ce99f0(puVar11,fVar35,&local_198,&local_1b8);
                  plVar7 = local_168;
                  if (local_e8 != (longlong *)0x0) {
                    plVar7 = local_e8;
                  }
                  uVar30 = 0;
                  plVar8 = plVar7 + (int)local_e0;
                  uVar24 = (longlong)(int)local_e0 & 0x1fffffffffffffff;
                  if (plVar8 < plVar7) {
                    uVar24 = 0;
                  }
                  if (uVar24 != 0) {
                    do {
                      plVar8 = (longlong *)FUN_14260f0c0(*plVar7,*puVar11);
                      uVar30 = uVar30 + 1;
                      plVar7 = plVar7 + 1;
                    } while (uVar30 != uVar24);
                  }
                  iVar31 = iVar31 + 1;
                  local_218 = local_218 + 0x158;
                  lVar14 = local_220;
                  plVar7 = local_e8;
                } while (iVar31 < *(int *)(local_220 + 0x18 + (longlong)plVar13));
              }
              iVar26 = 0;
              if (0 < *(int *)(lVar14 + 0x28 + (longlong)plVar13)) {
                local_218 = 0;
                do {
                  lVar32 = 0;
                  puVar11 = (undefined8 *)
                            (*(longlong *)(lVar14 + 0x20 + (longlong)plVar13) + local_218);
                  if (plVar19 != (longlong *)0x0) {
                    if ((iVar26 < 0) || ((int)plVar19[3] <= iVar26)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    if (bVar3) {
                      lVar32 = plVar19[2] + (longlong)iVar26 * 0x14;
                    }
                  }
                  FUN_142ce9b30(puVar11,&local_1f8,local_218,lVar32);
                  plVar7 = local_168;
                  if (local_e8 != (longlong *)0x0) {
                    plVar7 = local_e8;
                  }
                  uVar30 = 0;
                  plVar8 = plVar7 + (int)local_e0;
                  uVar24 = (longlong)(int)local_e0 & 0x1fffffffffffffff;
                  if (plVar8 < plVar7) {
                    uVar24 = 0;
                  }
                  if (uVar24 != 0) {
                    do {
                      local_1a8 = CONCAT44(uStack_1f4,local_1f8);
                      uStack_1d0 = uStack_1f0;
                      local_1a0 = uStack_1f0;
                      plVar8 = (longlong *)FUN_142610200(*plVar7,*puVar11,&local_1a8);
                      uVar30 = uVar30 + 1;
                      plVar7 = plVar7 + 1;
                    } while (uVar30 != uVar24);
                  }
                  iVar26 = iVar26 + 1;
                  local_218 = local_218 + 0x268;
                  lVar14 = local_220;
                  plVar7 = local_e8;
                } while (iVar26 < *(int *)(local_220 + 0x28 + (longlong)plVar13));
              }
            }
            lVar32 = local_228;
            plVar21 = local_240;
            uVar5 = (int)local_208 + 1;
            local_208 = CONCAT44(local_208._4_4_,uVar5);
            plVar19 = (longlong *)(ulonglong)uVar5;
            plVar13 = plVar13 + 6;
          } while ((int)uVar5 < *(int *)(local_228 + 0x100));
          if (plVar7 != (longlong *)0x0) {
            plVar8 = (longlong *)FMemory::Free(plVar7);
          }
          fVar35 = (float)uStack_190;
          fVar37 = local_188._4_4_;
          fVar44 = local_198._4_4_;
          fVar45 = (float)local_188;
          fVar46 = (float)local_198;
          fVar47 = uStack_190._4_4_;
        }
      }
      uVar24 = 0;
      if (0 < *(int *)(lVar32 + 0xf0)) {
        plVar8 = (longlong *)0x0;
        uVar30 = uVar24;
        plVar7 = plVar8;
        do {
          plVar19 = local_230;
          uVar28 = *(ulonglong *)(lVar32 + 0xe8);
          fVar36 = *(float *)(uVar28 + 0x48 + (longlong)plVar7);
          local_208 = uVar28;
          if (fVar36 < local_210) {
            plVar8 = (longlong *)plVar21[0x1a];
            fVar34 = *(float *)(uVar28 + 0x4c + (longlong)plVar7);
            plVar13 = *(longlong **)((longlong)plVar8 + uVar24);
            if ((fVar34 <= 0.0) || (local_210 <= fVar34)) {
              if (local_238 <= fVar36) {
                bVar4 = *(byte *)(uVar28 + 0x71 + (longlong)plVar7);
                FUN_1417846f0(local_230,
                              L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                             );
                uVar15 = AGFreezeCharacterCue::GetPrivateStaticClass();
                if ((bVar4 & 8) == 0) {
                  local_258 = 0;
                  local_260 = 0;
                  local_268 = 0;
                  local_270 = 0;
                  local_278 = (longlong *)((ulonglong)local_278._4_4_ << 0x20);
                  local_220 = 0;
                  plVar13 = (longlong *)FUN_1417985e0(uVar15,plVar19,0,0);
                }
                else {
                  local_258 = 0;
                  local_260 = 0;
                  local_268 = 0;
                  local_270 = 0;
                  local_278 = (longlong *)((ulonglong)local_278._4_4_ << 0x20);
                  local_218 = 0;
                  plVar13 = (longlong *)FUN_1417985e0(uVar15,plVar19,0,0);
                  local_200 = 0;
                  if (*(longlong *)(lVar32 + 0x70) != 0) {
                    iVar26 = (int)plVar13[0x12];
                    *(int *)(plVar13 + 0x12) = iVar26 + 1;
                    if (*(int *)((longlong)plVar13 + 0x94) < iVar26 + 1) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (plVar13 + 0x11,iVar26);
                    }
                    *(undefined8 *)(plVar13[0x11] + (longlong)iVar26 * 8) =
                         *(undefined8 *)(local_228 + 0x70);
                    lVar32 = local_228;
                  }
                }
                plVar19 = local_240;
                plVar8 = (longlong *)local_240[0x1a];
                *(longlong **)((longlong)plVar8 + uVar24) = plVar13;
                plVar21 = local_240;
                if (plVar13 == (longlong *)0x0) goto LAB_142d0646d;
                *(byte *)((longlong)plVar13 + 0xba) = *(byte *)((longlong)plVar13 + 0xba) & 0xfd;
                *(byte *)(plVar13 + 0x12f) = ~(*(byte *)(uVar28 + 0x71 + (longlong)plVar7) >> 3) & 1
                ;
                FUN_14260f940(plVar13,*(undefined8 *)(uVar28 + (longlong)plVar7));
                *(undefined4 *)(plVar13 + 0xfb) = *(undefined4 *)(lVar32 + 0x108);
                cVar27 = *(char *)(uVar28 + 0x70 + (longlong)plVar7);
                puVar11 = (undefined8 *)(uVar28 + 0x10 + (longlong)plVar7);
                local_198 = *puVar11;
                uStack_190 = puVar11[1];
                puVar11 = (undefined8 *)(uVar28 + 0x20 + (longlong)plVar7);
                local_188 = *puVar11;
                uStack_180 = *(uint *)(puVar11 + 1);
                uStack_17c = *(undefined4 *)((longlong)puVar11 + 0xc);
                pauVar1 = (undefined1 (*) [16])(uVar28 + 0x30 + (longlong)plVar7);
                local_178 = *pauVar1;
                if (cVar27 == '\x01') {
                  fVar36 = (fVar47 - fVar46) * 0.5;
                  fVar34 = (fVar45 - fVar44) * 0.5;
                  fVar33 = (fVar37 - fVar35) * 0.5;
                  if (fVar36 <= fVar34) {
                    fVar36 = fVar34;
                  }
                  fVar34 = fVar36;
                  fVar2 = fVar36;
                  if (fVar36 <= fVar33) {
                    fVar36 = fVar33;
                    fVar34 = fVar33;
                    fVar2 = fVar33;
                  }
LAB_142d06154:
                  local_178._4_4_ = *(float *)(*pauVar1 + 4) * fVar2;
                  local_178._0_4_ = fVar36 * *(float *)*pauVar1;
                  local_178._8_4_ = *(float *)(*pauVar1 + 8) * fVar34;
                  local_178._12_4_ = 0;
                }
                else {
                  if (cVar27 == '\x02') {
                    fVar36 = (fVar47 - fVar46) * 0.5;
                    fVar34 = (fVar45 - fVar44) * 0.5;
                    fVar33 = (fVar37 - fVar35) * 0.5;
                    if (fVar34 <= fVar36) {
                      fVar36 = fVar34;
                    }
                    fVar34 = fVar36;
                    fVar2 = fVar36;
                    if (fVar33 <= fVar36) {
                      fVar36 = fVar33;
                      fVar34 = fVar33;
                      fVar2 = fVar33;
                    }
                    goto LAB_142d06154;
                  }
                  if (cVar27 == '\x03') {
                    fVar36 = (fVar47 - fVar46) * 0.5;
                    fVar33 = (fVar45 - fVar44) * 0.5;
                    fVar34 = fVar36;
                    fVar2 = fVar36;
                    if (fVar36 <= fVar33) {
                      fVar36 = fVar33;
                      fVar34 = fVar33;
                      fVar2 = fVar33;
                    }
                    goto LAB_142d06154;
                  }
                  if (cVar27 == '\x04') {
                    fVar36 = (fVar37 - fVar35) * 0.5;
                    fVar34 = fVar36;
                    fVar2 = fVar36;
                    goto LAB_142d06154;
                  }
                  if (cVar27 == '\x05') {
                    fVar36 = (fVar47 - fVar46) * 0.5;
                    fVar34 = (fVar37 - fVar35) * 0.5;
                    fVar2 = (fVar45 - fVar44) * 0.5;
                    goto LAB_142d06154;
                  }
                }
                local_278 = (longlong *)((ulonglong)local_278 & 0xffffffffffffff00);
                FUN_142398770(plVar13,&local_198,0,0);
                *(uint *)(plVar13 + 0x73) =
                     *(uint *)(plVar13 + 0x73) ^
                     ((uint)(*(byte *)(uVar28 + 0x71 + (longlong)plVar7) >> 1) ^
                     *(uint *)(plVar13 + 0x73)) & 1;
                uVar15 = FUN_142c728d0(plVar19);
                FUN_14234b270(plVar13,uVar15);
                lVar14 = FUN_14222b250(local_230,*(undefined8 *)(uVar28 + 0x40 + (longlong)plVar7),
                                       *(byte *)(uVar28 + 0x71 + (longlong)plVar7) >> 1 & 1);
                FUN_142382f60(plVar13,lVar14,&DAT_146af29ec);
                if ((*(byte *)(uVar28 + 0x71 + (longlong)plVar7) & 4) != 0) {
                  if (lVar14 == 0) {
LAB_142d06222:
                    lVar14 = local_230[0x2d];
                    if (lVar14 != 0) {
                      lVar29 = FUN_1429f11d0();
                      if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar29 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar29 + 0x90) * 8) != lVar29 + 0x88)) {
                        bVar3 = false;
                      }
                      else {
                        bVar3 = true;
                      }
                      if (bVar3) goto LAB_142d0626d;
                    }
                  }
                  else {
                    lVar29 = FUN_1429f11d0();
                    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar29 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar29 + 0x90) * 8) != lVar29 + 0x88)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    if (!bVar3) goto LAB_142d06222;
LAB_142d0626d:
                    FUN_1423979a0(plVar13,*(byte *)(lVar14 + 0x2f0) >> 5 & 1);
                    FUN_142397970(plVar13,*(byte *)(lVar14 + 0x2f0) >> 6 & 1);
                    FUN_142398e60(plVar13,*(undefined4 *)(lVar14 + 0x6b8),0);
                    FUN_142398ea0(plVar13,*(undefined8 *)(lVar14 + 0x6b0));
                    UActorComponent::SetTickableWhenPaused(plVar13,*(byte *)(lVar14 + 0x3c) & 1);
                  }
                }
                plVar8 = (longlong *)FUN_1425fcab0(plVar13,1);
                plVar21 = local_240;
              }
              plVar19 = local_230;
              if (plVar13 != (longlong *)0x0) {
                lVar14 = *(longlong *)(uVar28 + 0x50 + (longlong)plVar7);
                lVar32 = (longlong)*(int *)(uVar28 + 0x58 + (longlong)plVar7) * 0x158 + lVar14;
                if (lVar14 != lVar32) {
                  lVar14 = lVar14 + 8;
                  do {
                    fVar36 = fVar38;
                    if ((*(byte *)(lVar14 + 0x7a) & 1) != 0) {
                      fVar36 = fVar48;
                    }
                    uVar15 = FRuntimeFloatCurve::GetRichCurve(lVar14);
                    FRichCurve::Eval(uVar15,fVar36);
                    if ((*(byte *)(lVar14 + 0xf8) & 1) != 0) {
                      FUN_142c98860(lVar14 + 0x100,plVar19);
                    }
                    FUN_14260f0c0(plVar13,*(undefined8 *)(lVar14 + -8));
                    lVar29 = lVar14 + 0x150;
                    lVar14 = lVar14 + 0x158;
                    uVar28 = local_208;
                  } while (lVar29 != lVar32);
                }
                puVar11 = *(undefined8 **)(uVar28 + 0x60 + (longlong)plVar7);
                plVar8 = (longlong *)(longlong)*(int *)(uVar28 + 0x68 + (longlong)plVar7);
                puVar25 = puVar11 + (longlong)plVar8 * 0x4d;
                plVar21 = local_240;
                lVar32 = local_228;
                for (; local_240 = plVar21, local_228 = lVar32, puVar11 != puVar25;
                    puVar11 = puVar11 + 0x4d) {
                  FUN_1423d25b0(puVar11 + 1,&local_1f8);
                  local_1a8 = CONCAT44(uStack_1f4,local_1f8);
                  uStack_1d0 = uStack_1f0;
                  local_1a0 = uStack_1f0;
                  plVar8 = (longlong *)FUN_142610200(plVar13,*puVar11,&local_1a8);
                  plVar21 = local_240;
                  lVar32 = local_228;
                }
              }
            }
            else if ((plVar13 != (longlong *)0x0) && (local_238 <= fVar34)) {
              *(byte *)((longlong)plVar13 + 0x71a) = *(byte *)((longlong)plVar13 + 0x71a) | 0x40;
              (**(code **)(*plVar13 + 0x290))(plVar13,0,0);
              plVar8 = (longlong *)plVar21[0x1a];
              *(undefined8 *)(uVar24 + (longlong)plVar8) = 0;
            }
          }
LAB_142d0646d:
          uVar5 = (int)uVar30 + 1;
          uVar30 = (ulonglong)uVar5;
          plVar7 = plVar7 + 0x10;
          uVar24 = uVar24 + 8;
        } while ((int)uVar5 < *(int *)(lVar32 + 0xf0));
      }
      uVar28 = 0;
      uVar24 = uVar28;
      uVar30 = uVar28;
      if (0 < *(int *)(lVar32 + 0x118)) {
        do {
          lVar14 = *(longlong *)(lVar32 + 0x110);
          fVar48 = *(float *)(uVar28 + 0x10 + lVar14);
          if (fVar48 < local_210) {
            fVar35 = *(float *)(uVar28 + 0x14 + lVar14);
            if ((fVar35 <= 0.0) || (local_210 <= fVar35)) {
              if (local_238 <= fVar48) {
                uVar15 = FUN_14222b250(local_230,*(undefined8 *)(uVar28 + 8 + lVar14),0);
                lVar32 = plVar21[0x1c];
                uVar15 = FUN_1405ab470(local_230,*(undefined8 *)(uVar28 + 8 + lVar14),1,uVar15);
                plVar21 = local_240;
                *(undefined8 *)(lVar32 + uVar24) = uVar15;
                if (*(longlong *)(uVar24 + local_240[0x1c]) != 0) {
                  FUN_1405a3150(*(longlong *)(uVar24 + local_240[0x1c]),&local_1f8,
                                *(undefined8 *)(uVar28 + lVar14),0);
                  FUN_140591060(&local_1f8);
                }
              }
              plVar8 = (longlong *)plVar21[0x1c];
              if ((*(longlong *)(uVar24 + (longlong)plVar8) != 0) &&
                 (*(longlong *)(uVar28 + 0x18 + lVar14) != 0)) {
                uVar15 = FRuntimeFloatCurve::GetRichCurve(lVar14 + 0x20 + uVar28);
                FRichCurve::Eval(uVar15,fVar38);
                local_278 = (longlong *)CONCAT71(local_278._1_7_,4);
                plVar8 = (longlong *)
                         FUN_1405aaad0(*(undefined8 *)(plVar21[0x1c] + uVar24),
                                       *(undefined8 *)(uVar28 + 0x18 + lVar14));
              }
            }
            else {
              plVar8 = (longlong *)plVar21[0x1c];
              if ((*(longlong *)(uVar24 + (longlong)plVar8) != 0) && (local_238 <= fVar35)) {
                FUN_1405ac9d0();
                plVar8 = (longlong *)plVar21[0x1c];
                *(undefined8 *)(uVar24 + (longlong)plVar8) = 0;
              }
            }
          }
          uVar5 = (int)uVar30 + 1;
          uVar28 = uVar28 + 0x98;
          lVar32 = local_228;
          uVar24 = uVar24 + 8;
          uVar30 = (ulonglong)uVar5;
        } while ((int)uVar5 < *(int *)(local_228 + 0x118));
      }
    }
    uVar24 = (ulonglong)plVar8 & 0xffffffffffffff00;
  }
  else {
    uVar24 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
  }
  return uVar24;
}



// FUNCTION 142d06680 FUN_142d06680 body=133 status=ok
// SIG undefined FUN_142d06680(void)

void FUN_142d06680(undefined8 param_1,longlong *param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (cVar2 = (**(code **)(*param_2 + 0x780))(param_2), cVar2 == '\0')) &&
       (lVar3 = param_2[0x9a], lVar3 != 0)) {
      *(byte *)(lVar3 + 0x24c) = *(byte *)(lVar3 + 0x24c) & 0xef;
      *(byte *)(lVar3 + 0x24c) = *(byte *)(lVar3 + 0x24c) | param_3 << 4;
    }
  }
  return;
}



// FUNCTION 142d06710 FUN_142d06710 body=579 status=ok
// SIG undefined FUN_142d06710(void)

void FUN_142d06710(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2;
  if ((-DAT_1466ad1f0 < fVar1) && (fVar1 < DAT_1466ad1f0)) {
    fVar2 = param_2[1];
    if ((-DAT_1466ad1f4 < fVar2) && (fVar2 < DAT_1466ad1f4)) {
      fVar3 = param_2[2];
      if ((((((-DAT_1466ad1f8 < fVar3) && (fVar3 < DAT_1466ad1f8)) &&
            ((*(byte *)(param_1 + 1) & 1) != 0)) &&
           (((fVar4 = *(float *)((longlong)param_1 + 0x9c), -DAT_1466ad1f0 < fVar4 &&
             (fVar4 < DAT_1466ad1f0)) && (-DAT_1466ad1f4 < *(float *)(param_1 + 0x14))))) &&
          ((*(float *)(param_1 + 0x14) < DAT_1466ad1f4 &&
           (-DAT_1466ad1f8 < *(float *)((longlong)param_1 + 0xa4))))) &&
         (*(float *)((longlong)param_1 + 0xa4) < DAT_1466ad1f8)) {
        fVar6 = DAT_1466ad1f0;
        fVar7 = DAT_1466ad1f8;
        fVar8 = DAT_1466ad1f4;
        if ((*param_1 != 0) && (lVar5 = *(longlong *)(*param_1 + 0x178), lVar5 != 0)) {
          fVar6 = *(float *)(lVar5 + 0x220);
          fVar7 = *(float *)(lVar5 + 0x228);
          fVar8 = *(float *)(lVar5 + 0x224);
        }
        fVar6 = fVar6 - fVar1;
        fVar8 = fVar8 - fVar2;
        fVar7 = fVar7 - fVar3;
        if (((0.0001 < ABS(fVar6)) || (0.0001 < ABS(fVar8))) || (0.0001 < ABS(fVar7))) {
          *(float *)((longlong)param_1 + 0x1c) = fVar6 + *(float *)((longlong)param_1 + 0x1c);
          *(float *)(param_1 + 4) = fVar8 + *(float *)(param_1 + 4);
          *(float *)((longlong)param_1 + 0x24) = fVar7 + *(float *)((longlong)param_1 + 0x24);
          *(float *)(param_1 + 5) = fVar6 + *(float *)(param_1 + 5);
          *(float *)((longlong)param_1 + 0x2c) = fVar8 + *(float *)((longlong)param_1 + 0x2c);
          *(float *)(param_1 + 6) = fVar7 + *(float *)(param_1 + 6);
          *(float *)((longlong)param_1 + 0x4c) = fVar6 + *(float *)((longlong)param_1 + 0x4c);
          *(float *)(param_1 + 10) = fVar8 + *(float *)(param_1 + 10);
          *(float *)((longlong)param_1 + 0x54) = fVar7 + *(float *)((longlong)param_1 + 0x54);
          *(float *)(param_1 + 0xb) = fVar6 + *(float *)(param_1 + 0xb);
          *(float *)((longlong)param_1 + 0x5c) = fVar8 + *(float *)((longlong)param_1 + 0x5c);
          *(float *)(param_1 + 0xc) = fVar7 + *(float *)(param_1 + 0xc);
          *(float *)((longlong)param_1 + 0x9c) = fVar6 + fVar4;
          *(float *)(param_1 + 0x14) = fVar8 + *(float *)(param_1 + 0x14);
          *(float *)((longlong)param_1 + 0xa4) = fVar7 + *(float *)((longlong)param_1 + 0xa4);
        }
      }
    }
  }
  return;
}



// FUNCTION 142d06960 FUN_142d06960 body=133 status=ok
// SIG undefined FUN_142d06960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d06960(longlong param_1)

{
  longlong lVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (lVar1 == 0) {
    local_28 = _DAT_1466ad1f0;
    local_20 = DAT_1466ad1f8;
  }
  else {
    local_28 = *(undefined8 *)(lVar1 + 0x220);
    local_20 = *(undefined4 *)(lVar1 + 0x228);
  }
  local_18 = local_28;
  local_10 = local_20;
  FUN_1423595e0();
  FUN_142d06710(param_1 + 0x2048,&local_18);
  return;
}



// FUNCTION 142d069f0 FUN_142d069f0 body=1078 status=ok
// SIG undefined FUN_142d069f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d069f0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc [20];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  
  lVar1 = param_1[0x2f];
  local_a8 = *(float *)(lVar1 + 0x210);
  fStack_a4 = *(float *)(lVar1 + 0x214);
  fStack_a0 = *(float *)(lVar1 + 0x218);
  fStack_9c = *(float *)(lVar1 + 0x21c);
  auVar11._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_a4);
  auVar11._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_a8);
  auVar11._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_a0);
  auVar11._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_9c);
  iVar6 = movmskps((int)&stack0x00000000,auVar11);
  if (iVar6 != 0) {
    *(float *)(lVar1 + 0x250) = local_a8;
    *(float *)(lVar1 + 0x254) = fStack_a4;
    *(float *)(lVar1 + 600) = fStack_a0;
    *(float *)(lVar1 + 0x25c) = fStack_9c;
    puVar8 = (undefined8 *)FQuat::Rotator(&local_a8,local_bc);
    *(undefined8 *)(lVar1 + 0x260) = *puVar8;
    *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar8 + 1);
  }
  local_c8 = *(undefined8 *)(lVar1 + 0x260);
  local_c0 = *(undefined4 *)(lVar1 + 0x268);
  FUN_142ce7a40(param_1,&local_d8,&local_c8);
  FUN_142ce7a40(param_1,&local_e8,param_2);
  uVar7 = (**(code **)(*param_1 + 0x560))(param_1);
  if (((((char)uVar7 != '\0') ||
       (uVar7 = (**(code **)(*param_1 + 0x558))(param_1), (char)uVar7 != '\0')) ||
      ((longlong *)param_1[0x41f] == (longlong *)0x0)) ||
     (uVar7 = (**(code **)(*(longlong *)param_1[0x41f] + 0x408))(), (char)uVar7 == '\0')) {
    local_e8 = 0.0;
  }
  fVar2 = (float)DAT_146b315f0;
  fVar3 = DAT_146b315f0._4_4_;
  fVar4 = DAT_146b315f0._8_4_;
  fVar5 = DAT_146b315f0._12_4_;
  auVar10._4_4_ = local_e4;
  auVar10._0_4_ = local_e8;
  auVar10._8_8_ = 0;
  auVar11 = divps(auVar10,_DAT_146b315f0);
  local_e8 = local_e8 - (float)(int)auVar11._0_4_ * fVar2;
  local_e4 = local_e4 - (float)(int)auVar11._4_4_ * fVar3;
  fVar14 = 0.0 - (float)(int)auVar11._8_4_ * fVar4;
  local_e8 = (float)(-(uint)(0.0 <= local_e8) & ((uint)(local_e8 + fVar2) ^ (uint)local_e8) ^
                    (uint)(local_e8 + fVar2));
  local_e4 = (float)(-(uint)(0.0 <= local_e4) & ((uint)(local_e4 + fVar3) ^ (uint)local_e4) ^
                    (uint)(local_e4 + fVar3));
  local_e0 = (float)(-(uint)(0.0 <= fVar14) & ((uint)(fVar14 + fVar4) ^ (uint)fVar14) ^
                    (uint)(fVar14 + fVar4));
  local_e8 = (float)(((uint)(local_e8 - fVar2) ^ (uint)local_e8) &
                     -(uint)(_DAT_146b315e0 < local_e8) ^ (uint)local_e8);
  local_e4 = (float)(((uint)(local_e4 - fVar3) ^ (uint)local_e4) &
                     -(uint)(fRam0000000146b315e4 < local_e4) ^ (uint)local_e4);
  local_e0 = (float)(((uint)(local_e0 - fVar4) ^ (uint)local_e0) &
                     -(uint)(fRam0000000146b315e8 < local_e0) ^ (uint)local_e0);
  auVar12._4_4_ = local_d4 - local_e4;
  auVar12._0_4_ = local_d8 - local_e8;
  auVar12._8_4_ = local_d0 - local_e0;
  auVar12._12_4_ = 0;
  auVar11 = divps(auVar12,_DAT_146b315f0);
  fVar14 = (local_d8 - local_e8) - (float)(int)auVar11._0_4_ * fVar2;
  fVar15 = (local_d4 - local_e4) - (float)(int)auVar11._4_4_ * fVar3;
  fVar16 = (local_d0 - local_e0) - (float)(int)auVar11._8_4_ * fVar4;
  fVar17 = 0.0 - (float)(int)auVar11._12_4_ * fVar5;
  fVar14 = (float)(((uint)(fVar14 + fVar2) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                  (uint)(fVar14 + fVar2));
  fVar15 = (float)(((uint)(fVar15 + fVar3) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                  (uint)(fVar15 + fVar3));
  fVar16 = (float)(((uint)(fVar16 + fVar4) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                  (uint)(fVar16 + fVar4));
  fVar17 = (float)(((uint)(fVar17 + fVar5) ^ (uint)fVar17) & -(uint)(0.0 <= fVar17) ^
                  (uint)(fVar17 + fVar5));
  auVar13._4_4_ =
       -(uint)(0.001 < (float)((((uint)(fVar15 - fVar3) ^ (uint)fVar15) &
                                -(uint)(fRam0000000146b315e4 < fVar15) ^ (uint)fVar15) &
                              uRam0000000146b316c4));
  auVar13._0_4_ =
       -(uint)(0.001 < (float)((((uint)(fVar14 - fVar2) ^ (uint)fVar14) &
                                -(uint)(_DAT_146b315e0 < fVar14) ^ (uint)fVar14) & _DAT_146b316c0));
  auVar13._8_4_ =
       -(uint)(0.001 < (float)((((uint)(fVar16 - fVar4) ^ (uint)fVar16) &
                                -(uint)(fRam0000000146b315e8 < fVar16) ^ (uint)fVar16) &
                              uRam0000000146b316c8));
  auVar13._12_4_ =
       -(uint)(0.001 < (float)((((uint)(fVar17 - fVar5) ^ (uint)fVar17) &
                                -(uint)(fRam0000000146b315ec < fVar17) ^ (uint)fVar17) &
                              uRam0000000146b316cc));
  iVar6 = movmskps(uVar7,auVar13);
  if (iVar6 != 0) {
    if (0.001 < ABS(local_d8 - local_e8)) {
      local_e8 = (float)FMath::FixedTurn();
    }
    if (0.001 < ABS(local_d4 - local_e4)) {
      local_e4 = (float)FMath::FixedTurn();
    }
    if (0.001 < ABS(local_d0 - local_e0)) {
      local_e0 = (float)FMath::FixedTurn();
    }
    puVar8 = (undefined8 *)FUN_142ce7910(param_1,local_bc,&local_e8);
    *param_2 = *puVar8;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar8 + 1);
    uVar9 = FUN_14247f500();
    FUN_14247ea90(uVar9);
    lVar1 = *param_1;
    uVar9 = FRotator::Quaternion(param_2,&local_a8);
    (**(code **)(lVar1 + 0x488))(param_1,&DAT_1468b5d90,uVar9,1,0,0);
  }
  return;
}



// FUNCTION 142d06e30 FUN_142d06e30 body=1080 status=ok
// SIG undefined FUN_142d06e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d06e30(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_308 [32];
  longlong *local_2e8;
  undefined1 local_2d8 [8];
  longlong local_2d0 [2];
  float local_2c0 [2];
  byte local_2b8 [144];
  undefined1 local_228 [144];
  undefined4 local_198;
  undefined4 local_194;
  undefined1 local_190 [72];
  longlong local_148;
  longlong local_128;
  undefined1 local_118 [32];
  undefined4 local_f8;
  undefined1 local_f4;
  undefined4 local_f0;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  float local_bc;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98 [4];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  plVar6 = (longlong *)0x0;
  if (*param_1 != 0) {
    plVar6 = *(longlong **)(*param_1 + 0xfd8);
  }
  if ((plVar6 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar6 + 0x148))(plVar6), lVar5 != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b31880) &&
       (_Init_thread_header(&DAT_146b31880), DAT_146b31880 == -1)) {
      FName::FName(&DAT_146b31878,L"NavProject",1);
      _Init_thread_footer(&DAT_146b31880);
    }
    lVar3 = *param_1;
    plVar4 = *(longlong **)(lVar3 + 0xfd8);
    if ((((*(byte *)(param_1 + 1) & 1) == 0) && ((*(byte *)(lVar3 + 0x4b4) & 0x20) == 0)) &&
       ((ulonglong)(DAT_1468c21b0 - param_1[0x15]) < 2)) {
      fVar8 = (float)param_3[2];
    }
    else {
      fVar8 = *(float *)(param_2 + 8);
    }
    fVar7 = *(float *)(lVar3 + 0x2108);
    (**(code **)(*plVar4 + 0x578))(plVar4,local_2d0,local_2c0);
    local_c8 = *(float *)(*param_1 + 0x5ac);
    local_bc = *(float *)(*param_1 + 0x5b0);
    if (local_c8 <= 0.0) {
      local_c8 = 0.0;
    }
    local_198 = 0xffffffff;
    if (local_bc <= 0.0) {
      local_bc = 0.0;
    }
    local_194 = 0;
    local_2d0[0] = 0;
    local_2e8 = (longlong *)0x0;
    local_c8 = local_c8 * local_2c0[0] * 2.0;
    local_bc = local_bc * local_2c0[0] * 2.0;
    FUN_1422ffb20(local_190,0,local_2d8,0);
    FUN_1426d3dd0(local_118);
    FUN_1426ea8d0(local_118,2);
    local_d0 = *param_3;
    if (local_c8 <= fVar7) {
      local_c8 = fVar7;
    }
    local_cc = param_3[1];
    if (local_bc <= fVar7) {
      local_bc = fVar7;
    }
    local_f8 = 0;
    local_c8 = local_c8 + fVar8;
    local_f4 = 0;
    local_f0 = 0;
    local_bc = fVar8 - local_bc;
    local_a8 = 0;
    local_a0 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_2d0[0] = 0;
    local_2d0[1] = 0;
    local_2e8 = local_2d0;
    local_c4 = local_d0;
    local_c0 = local_cc;
    FUN_142cee900(plVar4,DAT_146b31878,local_190,local_118);
    if (local_2d0[0] != 0) {
      FMemory::Free();
    }
    FUN_142cf2eb0(&local_198,plVar6,lVar5);
    FUN_140729f20(local_2b8,param_1 + 1);
    FUN_142ceb750(local_228,plVar6,(local_c8 + local_bc) * 0.5,local_98);
    FUN_140729f20(param_1 + 1);
    if (((*(byte *)(param_1 + 1) & 2) != 0) || ((*(byte *)(param_1 + 1) & 1) == 0)) {
      uVar1 = *(undefined8 *)((longlong)param_1 + 0x4c);
      uVar2 = *(undefined4 *)((longlong)param_1 + 0x54);
      lVar5 = param_1[0xb];
      lVar3 = param_1[0xc];
      _guard_xfg_dispatch_icall_nop(param_1 + 1,0,0x90);
      *(undefined8 *)((longlong)param_1 + 0x4c) = uVar1;
      param_1[0xb] = lVar5;
      *(undefined4 *)((longlong)param_1 + 0x54) = uVar2;
      *(int *)(param_1 + 0xc) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
    }
    fVar8 = *(float *)(param_2 + 8);
    if ((local_2b8[0] & 1) != 0) {
      fVar7 = (float)FUN_142cfcbf0(local_2b8,param_3);
      fVar7 = fVar7 + *(float *)(param_1 + 0x13);
      fVar8 = local_bc;
      if ((local_bc <= fVar7) && (fVar8 = local_c8, fVar7 <= local_c8)) {
        fVar8 = fVar7;
      }
    }
    fVar7 = (float)param_3[2];
    if ((*(byte *)(param_1 + 1) & 1) != 0) {
      fVar7 = (float)FUN_142cfcbf0(param_1 + 1,param_3);
    }
    *(float *)(param_1 + 0x13) = fVar8 - fVar7;
    if (local_98[0] != 0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if (local_128 != 0) {
      FMemory::Free();
    }
    if (local_148 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142d07270 FUN_142d07270 body=83 status=ok
// SIG undefined FUN_142d07270(void)

void FUN_142d07270(longlong *param_1)

{
  char cVar1;
  
  FUN_14235abe0();
  if ((*(uint *)((longlong)param_1 + 0x4b4) & 0x800) != 0) {
    cVar1 = (**(code **)(*param_1 + 0x550))(param_1);
    if ((cVar1 == '\0') && ((*(byte *)(param_1 + 0x225) & 1) == 0)) {
      cVar1 = (**(code **)(*param_1 + 0x558))(param_1);
      if (cVar1 != '\0') {
        *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xfffff7ff;
      }
    }
  }
  return;
}



// FUNCTION 142d072d0 FUN_142d072d0 body=147 status=ok
// SIG undefined FUN_142d072d0(void)

void FUN_142d072d0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0xfd8);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (1 < *(byte *)(plVar1 + 0x25)) {
    uVar4 = *(uint *)(param_1 + 0x4b4) >> 0xb;
    if (((uVar4 & 1) == 0) && (cVar2 = (**(code **)(*plVar1 + 0x988))(), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x800;
    }
    *(uint *)(param_1 + 0x4b4) = *(uint *)(param_1 + 0x4b4) & 0xfffff7ff;
    *(uint *)(param_1 + 0x4b4) = *(uint *)(param_1 + 0x4b4) | uVar3;
    FUN_14235ac20(param_1,param_2);
    *(uint *)(param_1 + 0x4b4) =
         *(uint *)(param_1 + 0x4b4) ^ ((uVar4 & 0xff) << 0xb ^ *(uint *)(param_1 + 0x4b4)) & 0x800;
    return;
  }
  return;
}



// FUNCTION 142d07370 FUN_142d07370 body=501 status=ok
// SIG undefined FUN_142d07370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d07370(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined *local_d8;
  undefined8 local_c8;
  float local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  float local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  undefined2 local_74;
  longlong local_50;
  undefined8 local_48;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar3 = param_1[0x24];
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  if ((((char)param_1[0x49] != '\x03') ||
      (cVar2 = (**(code **)(*param_1 + 0x5c0))(param_1), cVar2 == '\0')) || (lVar3 == 0)) {
    FUN_142cf31f0(param_1 + 0x1ff);
    return;
  }
  *(undefined4 *)(param_1 + 0x1ff) = *(undefined4 *)(lVar3 + 0x790);
  local_b0 = (float)(**(code **)(*param_1 + 0xb58))(param_1);
  lVar1 = param_1[0x2f];
  if (lVar1 == 0) {
    local_c8._0_4_ = 0x7f7fffff;
    local_c8._4_4_ = 0x7f7fffff;
    local_c0 = 3.4028235e+38;
  }
  else {
    local_c8._0_4_ = *(undefined4 *)(lVar1 + 0x220);
    local_c8._4_4_ = *(undefined4 *)(lVar1 + 0x224);
    local_c0 = *(float *)(lVar1 + 0x228);
  }
  local_b4 = local_c8._4_4_;
  local_a0 = local_c0;
  local_b0 = local_c0 - local_b0;
  local_b8 = (undefined4)local_c8;
  local_a8 = (undefined4)local_c8;
  uStack_a4 = local_c8._4_4_;
  local_90 = 0;
  local_50 = 0;
  local_48 = 0;
  local_30 = 0;
  local_28 = 0;
  local_88 = 0x10000;
  local_80 = 0;
  local_c8 = 0;
  local_98 = 0;
  local_84 = 0;
  local_74 = 0x101;
  local_7c = 0;
  local_82 = 0;
  local_78 = 0;
  FCollisionQueryParams::AddIgnoredActor(&local_98,param_1[0x44]);
  local_e8 = FUN_14233f510(param_1,&local_c8,0,0);
  local_d8 = &DAT_146aefe68;
  local_e0 = &local_98;
  local_f0 = 2;
  local_f8 = &DAT_1464aa810;
  UWorld::SweepSingleByChannel(lVar3,param_1 + 0x200,&local_a8,&local_b8);
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (local_50 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 142d07570 FUN_142d07570 body=54 status=ok
// SIG undefined FUN_142d07570(void)

void FUN_142d07570(longlong param_1,byte param_2)

{
  FUN_14235ad50();
  *(byte *)(param_1 + 0x137c) = *(byte *)(param_1 + 0x137c) & 0xfd;
  *(byte *)(param_1 + 0x137c) = *(byte *)(param_1 + 0x137c) | param_2 >> 3 & 2;
  return;
}



// FUNCTION 142d075b0 FUN_142d075b0 body=942 status=ok
// SIG undefined FUN_142d075b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d075b0(longlong param_1,float param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_88;
  float fStack_84;
  float local_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  
  cVar2 = FUN_142cf3a20();
  if (cVar2 == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x13c5) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x13c6) == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0xfe0) != 0) {
    iVar3 = FUN_142ca1e90(*(longlong *)(param_1 + 0xfe0),*(undefined4 *)(param_1 + 0x2408),
                          *(undefined4 *)(param_1 + 0x240c));
    FUN_142ca0500(*(undefined8 *)(param_1 + 0xfe0),&local_88,iVar3);
    if ((((iVar3 != *(int *)(param_1 + 0x2410)) ||
         (0.0001 < ABS(local_88 - *(float *)(param_1 + 0x2414)))) ||
        (0.0001 < ABS(fStack_84 - *(float *)(param_1 + 0x2418)))) ||
       (0.0001 < ABS(local_80 - *(float *)(param_1 + 0x241c)))) {
      FRichCurve::Reset(param_1 + 0x2380);
      FUN_142c9e2a0(*(undefined8 *)(param_1 + 0xfe0),iVar3,param_1 + 0x2360);
      uVar5 = FUN_142c9fd90(*(undefined8 *)(param_1 + 0xfe0),iVar3);
      *(undefined4 *)(param_1 + 0x23fc) = uVar5;
      *(ulonglong *)(param_1 + 0x2414) = CONCAT44(fStack_84,local_88);
      *(float *)(param_1 + 0x241c) = local_80;
      *(int *)(param_1 + 0x2410) = iVar3;
    }
    if (*(int *)(param_1 + 0x23e8) == 0) {
      return;
    }
    if (*(float *)(param_1 + 0x23fc) == 0.0) {
      return;
    }
  }
  fVar14 = *(float *)(param_1 + 0x23fc);
  uVar4 = FUN_142ced280(param_1,&local_78,0);
  FUN_142ce7a40(param_1,&local_88,uVar4);
  local_80 = local_80 - *(float *)(param_1 + 0x23f8);
  fStack_84 = fStack_84 - *(float *)(param_1 + 0x23f4);
  local_88 = local_88 - *(float *)(param_1 + 0x23f0);
  fVar15 = fVar14 * *(float *)(param_1 + 0x2400);
  fVar6 = (float)DAT_146b315f0;
  fVar9 = DAT_146b315f0._4_4_;
  fVar1 = DAT_146b315f0._8_4_;
  fVar12 = DAT_146b315f0._12_4_;
  auVar7._4_4_ = fStack_84;
  auVar7._0_4_ = local_88;
  auVar7._8_4_ = local_80;
  auVar7._12_4_ = 0;
  auVar7 = divps(auVar7,_DAT_146b315f0);
  local_88 = local_88 - (float)(int)auVar7._0_4_ * fVar6;
  fStack_84 = fStack_84 - (float)(int)auVar7._4_4_ * fVar9;
  local_80 = local_80 - (float)(int)auVar7._8_4_ * fVar1;
  fVar13 = 0.0 - (float)(int)auVar7._12_4_ * fVar12;
  fVar8 = (float)(((uint)(local_88 + fVar6) ^ (uint)local_88) & -(uint)(0.0 <= local_88) ^
                 (uint)(local_88 + fVar6));
  fVar10 = (float)(((uint)(fStack_84 + fVar9) ^ (uint)fStack_84) & -(uint)(0.0 <= fStack_84) ^
                  (uint)(fStack_84 + fVar9));
  fVar11 = (float)(((uint)(local_80 + fVar1) ^ (uint)local_80) & -(uint)(0.0 <= local_80) ^
                  (uint)(local_80 + fVar1));
  fVar13 = (float)(((uint)(fVar13 + fVar12) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                  (uint)(fVar13 + fVar12));
  local_78 = ((uint)(fVar8 - fVar6) ^ (uint)fVar8) & -(uint)(_DAT_146b315e0 < fVar8) ^ (uint)fVar8;
  uStack_74 = ((uint)(fVar10 - fVar9) ^ (uint)fVar10) & -(uint)(fRam0000000146b315e4 < fVar10) ^
              (uint)fVar10;
  uStack_70 = ((uint)(fVar11 - fVar1) ^ (uint)fVar11) & -(uint)(fRam0000000146b315e8 < fVar11) ^
              (uint)fVar11;
  uStack_6c = ((uint)(fVar13 - fVar12) ^ (uint)fVar13) & -(uint)(fRam0000000146b315ec < fVar13) ^
              (uint)fVar13;
  fVar6 = (float)FFloatCurve::Evaluate(param_1 + 0x2360,uStack_74);
  fVar14 = 1.0 / fVar14;
  fVar9 = fVar14 * fVar6;
  if (0.0 <= fVar9) {
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
  }
  else {
    fVar9 = 0.0;
  }
  if (fVar15 == 0.0) {
LAB_142d078d6:
    if (*(float *)(param_1 + 0x2400) <= fVar9 && fVar9 != *(float *)(param_1 + 0x2400))
    goto LAB_142d07913;
  }
  else if (*(float *)(param_1 + 0x2400) <= fVar9 && fVar9 != *(float *)(param_1 + 0x2400)) {
    fVar1 = *(float *)(param_1 + 0x2404);
    fVar6 = ABS((fVar6 - fVar15) / param_2);
    if (0.0 < fVar1) {
      fVar12 = fVar6 / fVar1;
      if (2.0 < fVar12) {
LAB_142d078a0:
        fVar6 = fVar1 + 0.2;
      }
      else {
        if (0.33 <= fVar12) goto LAB_142d078ce;
        if (2.0 < fVar12) goto LAB_142d078a0;
        fVar6 = fVar1 - 0.2;
      }
      if (0.75 <= fVar6) {
        if (2.0 <= fVar6) {
          fVar6 = 2.0;
        }
      }
      else {
        fVar6 = 0.75;
      }
      fVar9 = (fVar6 * param_2 + fVar15) * fVar14;
    }
LAB_142d078ce:
    *(float *)(param_1 + 0x2404) = fVar6;
    goto LAB_142d078d6;
  }
  if (fVar15 != 0.0) {
    fVar6 = *(float *)(param_1 + 0x2404);
    fVar9 = 0.75;
    if ((0.75 <= fVar6) && (fVar9 = fVar6, 2.0 <= fVar6)) {
      fVar9 = 2.0;
    }
    *(float *)(param_1 + 0x2404) = fVar9;
    fVar9 = (fVar9 * param_2 + fVar15) * fVar14;
  }
LAB_142d07913:
  fVar14 = 0.0;
  if ((0.0 <= fVar9) && (fVar14 = fVar9, 1.0 <= fVar9)) {
    fVar14 = 1.0;
  }
  *(float *)(param_1 + 0x2400) = fVar14;
  return;
}



// FUNCTION 142d07960 FUN_142d07960 body=610 status=ok
// SIG undefined FUN_142d07960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d07960(longlong param_1,undefined4 param_2)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [32];
  
  if (*(longlong *)(param_1 + 0xfd8) != 0) {
    lVar7 = FUN_142cc1670();
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xfd8) + 0x4c0);
    if (lVar7 != 0) {
      local_48 = *(undefined8 *)(lVar7 + 0x49c);
      uStack_40._0_4_ = *(undefined4 *)(lVar7 + 0x4a4);
      FUN_142cefe20(param_1,&local_38,param_1 + 0x1328,&local_48,param_1 + 0x1310,
                    *(undefined4 *)(param_1 + 0x120c),param_2);
      local_48 = local_38;
      uStack_40 = CONCAT44(uStack_40._4_4_,local_30);
      FUN_142ccf1e0(lVar7,&local_48);
    }
    if (lVar2 != 0) {
      local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0xfd8) + 0x53c);
      local_30 = *(undefined4 *)(*(longlong *)(param_1 + 0xfd8) + 0x544);
      uVar14 = *(uint *)(param_1 + 0x1210);
      FUN_142cefe20(param_1,&local_48,param_1 + 0x1334,&local_38,param_1 + 0x131c,uVar14,param_2);
      pfVar1 = (float *)(lVar2 + 0x280);
      local_38 = local_48;
      local_30 = (undefined4)uStack_40;
      if (((*(float *)(lVar2 + 0x1f8) != *pfVar1) ||
          (*(float *)(lVar2 + 0x1fc) != *(float *)(lVar2 + 0x284))) ||
         (*(float *)(lVar2 + 0x200) != *(float *)(lVar2 + 0x288))) {
        local_48 = *(undefined8 *)*(undefined1 (*) [12])(lVar2 + 0x1f8);
        auVar9._12_4_ = 0;
        auVar9._0_12_ = *(undefined1 (*) [12])(lVar2 + 0x1f8);
        fVar3 = (float)DAT_146b315f0;
        fVar4 = DAT_146b315f0._4_4_;
        fVar5 = DAT_146b315f0._8_4_;
        auVar9 = divps(auVar9,_DAT_146b315f0);
        fVar11 = (float)local_48 - (float)(int)auVar9._0_4_ * fVar3;
        fVar12 = (float)((ulonglong)local_48 >> 0x20) - (float)(int)auVar9._4_4_ * fVar4;
        fVar13 = *(float *)(lVar2 + 0x200) - (float)(int)auVar9._8_4_ * fVar5;
        fVar11 = (float)(((uint)(fVar11 + fVar3) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                        (uint)(fVar11 + fVar3));
        fVar12 = (float)(((uint)(fVar12 + fVar4) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                        (uint)(fVar12 + fVar4));
        fVar13 = (float)(((uint)(fVar13 + fVar5) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                        (uint)(fVar13 + fVar5));
        uVar10 = ((uint)(fVar13 - fVar5) ^ (uint)fVar13) & -(uint)(fRam0000000146b315e8 < fVar13) ^
                 (uint)fVar13;
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar10);
        *(ulonglong *)pfVar1 =
             CONCAT44(((uint)(fVar12 - fVar4) ^ (uint)fVar12) &
                      -(uint)(fRam0000000146b315e4 < fVar12) ^ (uint)fVar12,
                      ((uint)(fVar11 - fVar3) ^ (uint)fVar11) & -(uint)(_DAT_146b315e0 < fVar11) ^
                      (uint)fVar11);
        *(uint *)(lVar2 + 0x288) = uVar10;
        puVar8 = (undefined8 *)FRotator::Quaternion(pfVar1,local_28);
        uVar6 = puVar8[1];
        *(undefined8 *)(lVar2 + 0x270) = *puVar8;
        *(undefined8 *)(lVar2 + 0x278) = uVar6;
      }
      local_48 = *(undefined8 *)(lVar2 + 0x270);
      uStack_40 = *(undefined8 *)(lVar2 + 0x278);
      FUN_142397be0(lVar2,&local_38,&local_48,0,0,uVar14 & 0xffffff00);
    }
  }
  return;
}



// FUNCTION 142d07bd0 FUN_142d07bd0 body=696 status=ok
// SIG undefined FUN_142d07bd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142d07bd0(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined8 local_b8;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined8 local_98;
  float local_90;
  undefined1 local_8c [24];
  undefined1 local_74 [108];
  
  lVar4 = *(longlong *)(param_1 + 0xfd8);
  if (lVar4 == 0) {
    return;
  }
  if (*(byte *)(lVar4 + 0x128) < 2) {
    *(bool *)(param_1 + 0x13c7) = *(char *)(lVar4 + 0xcf0) != '\0';
    uVar5 = FUN_142cb7670(*(undefined1 *)(lVar4 + 0xcf0));
    *(undefined4 *)(param_1 + 0x13c8) = uVar5;
  }
  else {
    if (*(char *)(param_1 + 0x13c5) != '\0') goto LAB_142d07e25;
    *(undefined1 *)(param_1 + 0x13c7) = 0;
    *(undefined4 *)(param_1 + 0x13c8) = 0;
    *(undefined1 *)(lVar4 + 0xcf0) = 0;
    cVar2 = FUN_142cf3a20(param_1);
    if (cVar2 != '\0') {
      uVar3 = FUN_142ced5e0(param_1,local_74,0);
      local_b0 = DAT_1468b5da8;
      local_b8 = DAT_1468b5da0;
      if (*(longlong *)(param_1 + 0xfd8) != 0) {
        lVar4 = FUN_142cc2d20(*(longlong *)(param_1 + 0xfd8) + 0xbe0,local_8c,uVar3,param_1);
        local_b0 = *(float *)(lVar4 + 0x14);
        local_b8 = *(undefined8 *)(lVar4 + 0xc);
      }
      local_98 = local_b8;
      local_90 = local_b0;
      FUN_142ce7a40(param_1,&local_a8,&local_98);
      uVar3 = FUN_142ced280(param_1,&local_98,0);
      FUN_142ce7a40(param_1,&local_b8,uVar3);
      fVar6 = DAT_146b315f0._4_4_;
      auVar7._4_4_ = local_a4 - local_b8._4_4_;
      auVar7._0_4_ = local_a8 - (float)local_b8;
      auVar7._8_4_ = local_a0 - local_b0;
      auVar7._12_4_ = 0;
      auVar7 = divps(auVar7,_DAT_146b315f0);
      fVar9 = (local_a4 - local_b8._4_4_) - (float)(int)auVar7._4_4_ * fVar6;
      fVar9 = (float)(((uint)(fVar9 + fVar6) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                     (uint)(fVar9 + fVar6));
      fVar9 = (float)(((uint)(fVar9 - fVar6) ^ (uint)fVar9) & -(uint)(fRam0000000146b315e4 < fVar9)
                     ^ (uint)fVar9);
      if (*(longlong *)(param_1 + 0xfd8) == 0) {
        fVar6 = 0.0;
      }
      else {
        fVar6 = (float)FUN_14256bd80(*(longlong *)(param_1 + 0xfd8) + 0xbe0);
        if (fVar6 < 0.0) {
          fVar6 = *(float *)(param_1 + 0x1468);
        }
      }
      fVar8 = *(float *)(param_1 + 0x146c);
      if (*(float *)(param_1 + 0x146c) <= fVar6) {
        fVar8 = fVar6;
      }
      if (fVar8 < ABS(fVar9) - 0.1) {
        *(float *)(param_1 + 0x13c8) = fVar9;
        *(undefined1 *)(param_1 + 0x13c7) = 1;
        uVar1 = FUN_142cbe170();
        *(undefined1 *)(*(longlong *)(param_1 + 0xfd8) + 0xcf0) = uVar1;
      }
    }
  }
  if (*(char *)(param_1 + 0x13c5) == '\0') {
    return;
  }
LAB_142d07e25:
  if ((*(char *)(param_1 + 0x13c7) == '\0') || (cVar2 = FUN_142cf3a20(param_1), cVar2 == '\0')) {
    *(undefined2 *)(param_1 + 0x13c6) = 0;
    *(undefined1 *)(param_1 + 0x13c5) = 0;
    *(undefined4 *)(param_1 + 0x2410) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x2414) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x241c) = DAT_1468b5d98;
    FUN_142d04ee0(param_1,DAT_146b31718);
  }
  return;
}



// FUNCTION 142d07e90 FUN_142d07e90 body=68 status=ok
// SIG undefined FUN_142d07e90(void)

ulonglong FUN_142d07e90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    plVar1 = plVar2 + *(int *)(param_2 + 0x90);
    while( true ) {
      if (plVar2 == plVar1) {
        return (ulonglong)plVar2 & 0xffffffffffffff00;
      }
      if (*plVar2 == *(longlong *)(param_1 + 0x1a0)) break;
      plVar2 = plVar2 + 1;
    }
  }
  return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
}



// FUNCTION 142d07ee0 FUN_142d07ee0 body=120 status=ok
// SIG undefined FUN_142d07ee0(void)

ulonglong FUN_142d07ee0(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  uVar1 = (**(code **)(*param_1 + 0xa0))();
  if ((char)uVar1 != '\0') {
    plVar2 = *(longlong **)(param_1[2] + 0x120);
    uVar1 = (ulonglong)*(int *)(param_1[2] + 0x128);
    plVar3 = plVar2 + uVar1 * 0x7a;
    if (plVar2 != plVar3) {
      uVar1 = 0;
      do {
        if ((*plVar2 == 0) || (*(int *)(param_2 + 0x18) == (int)*plVar2)) {
          return 1;
        }
        plVar2 = plVar2 + 0x7a;
      } while (plVar2 != plVar3);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142d07f60 FUN_142d07f60 body=222 status=ok
// SIG undefined FUN_142d07f60(void)

undefined8 FUN_142d07f60(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  cVar2 = (**(code **)(*param_1 + 0xa0))();
  if (cVar2 != '\0') {
    plVar4 = *(longlong **)(param_1[2] + 0xf8);
    plVar5 = plVar4 + (longlong)*(int *)(param_1[2] + 0x100) * 6;
    if (plVar4 != plVar5) {
      do {
        if (param_2 == 0) {
LAB_142d07fee:
          lVar3 = 0;
        }
        else {
          lVar3 = AGFreezeCharacterCue::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          lVar3 = param_2;
          if (!bVar1) goto LAB_142d07fee;
        }
        if ((lVar3 != 0) &&
           ((((plVar4[1] != 0 && (*(longlong *)(lVar3 + 0x6f0) == plVar4[1])) || (*plVar4 == 0)) ||
            (*(int *)(lVar3 + 0x18) == (int)*plVar4)))) {
          return 1;
        }
        plVar4 = plVar4 + 6;
      } while (plVar4 != plVar5);
    }
  }
  return 0;
}



// FUNCTION 142d08040 FUN_142d08040 body=677 status=ok
// SIG undefined FUN_142d08040(void)

float * FUN_142d08040(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = param_1[2];
  if (fVar6 < 0.0) {
    fVar2 = fVar6 * 0.15915494 - 0.5;
  }
  else {
    fVar2 = fVar6 * 0.15915494 + 0.5;
  }
  fVar6 = fVar6 - (float)(int)fVar2 * 6.2831855;
  if (fVar6 <= 1.5707964) {
    if (-1.5707964 <= fVar6) {
      fVar2 = 1.0;
    }
    else {
      fVar2 = -1.0;
      fVar6 = -3.1415927 - fVar6;
    }
  }
  else {
    fVar2 = -1.0;
    fVar6 = 3.1415927 - fVar6;
  }
  fVar4 = fVar6 * fVar6;
  fVar2 = (((((2.4760495e-05 - fVar4 * 2.6051615e-07) * fVar4 - 0.0013888378) * fVar4 + 0.041666638)
            * fVar4 - 0.5) * fVar4 + 1.0) * fVar2;
  fVar7 = param_1[1];
  if (fVar7 < 0.0) {
    fVar3 = fVar7 * 0.15915494 - 0.5;
  }
  else {
    fVar3 = fVar7 * 0.15915494 + 0.5;
  }
  fVar7 = fVar7 - (float)(int)fVar3 * 6.2831855;
  if (fVar7 <= 1.5707964) {
    fVar3 = fVar2;
    if (-1.5707964 <= fVar7) goto LAB_142d08214;
    fVar7 = -3.1415927 - fVar7;
  }
  else {
    fVar7 = 3.1415927 - fVar7;
  }
  fVar3 = -fVar2;
LAB_142d08214:
  fVar1 = *param_1;
  fVar5 = fVar7 * fVar7;
  *param_2 = (((((2.4760495e-05 - fVar5 * 2.6051615e-07) * fVar5 - 0.0013888378) * fVar5 +
               0.041666638) * fVar5 - 0.5) * fVar5 + 1.0) * fVar3 * fVar1;
  param_2[1] = (((((2.7525562e-06 - fVar5 * 2.3889859e-08) * fVar5 - 0.00019840874) * fVar5 +
                 0.008333331) * fVar5 - 0.16666667) * fVar5 + 1.0) * fVar7 * fVar2 * fVar1;
  param_2[2] = fVar1 * (((((2.7525562e-06 - fVar4 * 2.3889859e-08) * fVar4 - 0.00019840874) * fVar4
                         + 0.008333331) * fVar4 - 0.16666667) * fVar4 + 1.0) * fVar6;
  return param_2;
}



// FUNCTION 142d082f0 FUN_142d082f0 body=1829 status=ok
// SIG undefined FUN_142d082f0(void)

undefined8 FUN_142d082f0(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  float *pfVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_res10;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined8 local_f8;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  
  if (*param_2 == 0) {
    return 0;
  }
  if (param_2[1] == 0) {
    return 0;
  }
  cVar3 = (**(code **)(*param_1 + 0xbc8))();
  if (cVar3 == '\0') {
    return 0;
  }
  plVar10 = (longlong *)0x0;
  plVar9 = plVar10;
  if (*param_2 != 0) {
    plVar9 = (longlong *)param_2[1];
  }
  cVar3 = (**(code **)(*plVar9 + 0x30))();
  plVar9 = plVar10;
  if (*param_2 != 0) {
    plVar9 = (longlong *)param_2[1];
  }
  cVar4 = (**(code **)(*plVar9 + 0x40))(plVar9,param_1);
  plVar9 = plVar10;
  if (*param_2 != 0) {
    plVar9 = (longlong *)param_2[1];
  }
  cVar5 = (**(code **)(*plVar9 + 0x50))(plVar9,param_1);
  lVar7 = (**(code **)(*(longlong *)param_1[0x44] + 0x738))((longlong *)param_1[0x44],&local_f8);
  local_104 = *(undefined4 *)(lVar7 + 4);
  local_108 = 0;
  local_100 = 0;
  pfVar8 = (float *)FRotator::Vector(&local_108,&local_f8);
  fVar18 = pfVar8[1];
  fVar22 = *pfVar8;
  fVar12 = fVar22 * fVar22 + fVar18 * fVar18;
  if (fVar12 == 1.0) {
    if (pfVar8[2] == 0.0) {
      local_f8 = *(undefined8 *)pfVar8;
      local_res10 = pfVar8[2];
      fVar18 = (float)((ulonglong)local_f8 >> 0x20);
      fVar22 = (float)local_f8;
      local_f0 = local_res10;
    }
    else {
LAB_142d08503:
      local_res10 = 0.0;
    }
  }
  else {
    if (1e-08 <= fVar12) {
      auVar16 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
      fVar11 = auVar16._0_4_;
      fVar11 = fVar11 + fVar11 * (0.5 - fVar12 * 0.5 * fVar11 * fVar11);
      fVar11 = fVar11 + fVar11 * (0.5 - fVar12 * 0.5 * fVar11 * fVar11);
      fVar22 = fVar22 * fVar11;
      fVar18 = fVar18 * fVar11;
      goto LAB_142d08503;
    }
    local_res10 = DAT_1468b5d98;
    fVar18 = DAT_1468b5d94;
    fVar22 = DAT_1468b5d90;
  }
  if ((cVar3 == '\0') || (cVar5 != '\0')) {
    fVar12 = -1.0;
  }
  else {
    fVar12 = 1.0;
  }
  plVar9 = plVar10;
  if (*param_2 != 0) {
    plVar9 = (longlong *)param_2[1];
  }
  pfVar8 = (float *)(**(code **)(*plVar9 + 0x18))(plVar9,&local_f8);
  fVar11 = pfVar8[1];
  fVar14 = *pfVar8;
  fVar13 = fVar14 * fVar14 + fVar11 * fVar11;
  if (fVar13 == 1.0) {
    if (pfVar8[2] == 0.0) {
      local_f8 = *(undefined8 *)pfVar8;
      local_f0 = pfVar8[2];
      fVar17 = (float)((ulonglong)local_f8 >> 0x20);
      fVar19 = (float)local_f8;
      fVar20 = local_f0;
    }
    else {
LAB_142d08615:
      fVar17 = fVar11;
      fVar19 = fVar14;
      fVar20 = 0.0;
    }
  }
  else {
    fVar17 = DAT_1468b5d94;
    fVar19 = DAT_1468b5d90;
    fVar20 = DAT_1468b5d98;
    if (1e-08 <= fVar13) {
      auVar16 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
      fVar17 = auVar16._0_4_;
      fVar17 = fVar17 + fVar17 * (0.5 - fVar13 * 0.5 * fVar17 * fVar17);
      fVar17 = fVar17 + fVar17 * (0.5 - fVar13 * 0.5 * fVar17 * fVar17);
      fVar14 = fVar14 * fVar17;
      fVar11 = fVar11 * fVar17;
      goto LAB_142d08615;
    }
  }
  local_e8 = *(float *)((longlong)param_1 + 0x2654);
  local_e4 = *(float *)(param_1 + 0x4ca);
  local_e0 = DAT_1468b5d98;
  fVar19 = fVar19 * fVar12;
  fVar17 = fVar17 * fVar12;
  fVar20 = fVar20 * fVar12;
  if (((0.0001 < ABS(local_e8)) || (0.0001 < ABS(local_e4))) || (0.0001 < ABS(DAT_1468b5d98))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  pfVar8 = (float *)FRotator::RotateVector(&local_108,&local_f8,&local_e8);
  fVar12 = pfVar8[1];
  fVar11 = *pfVar8;
  fVar14 = fVar11 * fVar11 + fVar12 * fVar12;
  if (fVar14 == 1.0) {
    if (pfVar8[2] == 0.0) {
      local_f8 = *(undefined8 *)pfVar8;
      local_f0 = pfVar8[2];
      fVar13 = (float)((ulonglong)local_f8 >> 0x20);
      fVar15 = local_f0;
      fVar21 = (float)local_f8;
    }
    else {
LAB_142d0877c:
      fVar13 = fVar12;
      fVar15 = 0.0;
      fVar21 = fVar11;
    }
  }
  else {
    fVar13 = DAT_1468b5d94;
    fVar15 = DAT_1468b5d98;
    fVar21 = DAT_1468b5d90;
    if (1e-08 <= fVar14) {
      auVar16 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar13 = auVar16._0_4_;
      fVar13 = fVar13 + fVar13 * (0.5 - fVar14 * 0.5 * fVar13 * fVar13);
      fVar13 = fVar13 + fVar13 * (0.5 - fVar14 * 0.5 * fVar13 * fVar13);
      fVar12 = fVar13 * fVar12;
      fVar11 = fVar13 * fVar11;
      goto LAB_142d0877c;
    }
  }
  if ((!bVar1) || (0.0 <= fVar17 * fVar13 + fVar21 * fVar19 + fVar20 * fVar15)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((!bVar1) || (bVar2)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  cVar6 = (**(code **)(*param_1 + 0x558))(param_1);
  fVar12 = *(float *)(param_1 + 0x32);
  fVar11 = *(float *)((longlong)param_1 + 0x18c);
  fVar14 = fVar11 * fVar11 + fVar12 * fVar12;
  if (fVar14 == 1.0) {
    if (*(float *)((longlong)param_1 + 0x194) == 0.0) {
      local_f8 = *(undefined8 *)((longlong)param_1 + 0x18c);
      local_f0 = *(float *)((longlong)param_1 + 0x194);
      fVar13 = (float)((ulonglong)local_f8 >> 0x20);
      fVar15 = local_f0;
      fVar21 = (float)local_f8;
    }
    else {
LAB_142d088d1:
      fVar13 = fVar12;
      fVar15 = 0.0;
      fVar21 = fVar11;
    }
  }
  else {
    fVar13 = DAT_1468b5d94;
    fVar15 = DAT_1468b5d98;
    fVar21 = DAT_1468b5d90;
    if (1e-08 <= fVar14) {
      auVar16 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar13 = auVar16._0_4_;
      fVar13 = fVar13 + fVar13 * (0.5 - fVar14 * 0.5 * fVar13 * fVar13);
      fVar13 = fVar13 + fVar13 * (0.5 - fVar14 * 0.5 * fVar13 * fVar13);
      fVar12 = fVar13 * fVar12;
      fVar11 = fVar13 * fVar11;
      goto LAB_142d088d1;
    }
  }
  lVar7 = param_1[0x231];
  if (lVar7 == 0) goto LAB_142d089b8;
  fVar18 = fVar17 * fVar18 + fVar19 * fVar22 + fVar20 * local_res10;
  if (cVar4 == '\0') {
LAB_142d08995:
    if (fVar18 < *(float *)(lVar7 + 0x30)) {
      return 0;
    }
  }
  else {
    if (0.0 <= fVar18) {
      if (*(char *)(lVar7 + 0x38) == '\0') {
        return 0;
      }
      goto LAB_142d08995;
    }
    if (-fVar18 < *(float *)(lVar7 + 0x34)) {
      return 0;
    }
  }
  if (*(float *)((longlong)param_1 + 0x194) < -*(float *)(lVar7 + 0x3c)) {
    return 0;
  }
  if (*(float *)(lVar7 + 0x3c) < *(float *)((longlong)param_1 + 0x194)) {
    return 0;
  }
LAB_142d089b8:
  if (((((cVar6 == '\0') || (fVar17 * fVar13 + fVar21 * fVar19 + fVar20 * fVar15 <= 0.0)) || (bVar2)
       ) && (!bVar1)) || ((param_1[0x26d] != 0 && (param_1[0x26e] != 0)))) {
    return 0;
  }
  if ((cVar3 != '\0') && (cVar5 != '\0')) {
    if (param_1[0x26b] != 0) {
      plVar10 = (longlong *)param_1[0x26c];
    }
    cVar3 = (**(code **)(*plVar10 + 0x48))(plVar10,param_1);
    if (cVar3 != '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142d08a20 FUN_142d08a20 body=1567 status=ok
// SIG undefined FUN_142d08a20(void)

bool FUN_142d08a20(longlong *param_1,float *param_2,undefined8 *param_3,float param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_138;
  float fStack_134;
  float local_130;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  
  fVar18 = param_4 * param_4;
  if (((param_1 == (longlong *)0x0) || (lVar8 = (**(code **)(*param_1 + 0x148))(), lVar8 == 0)) ||
     (param_1[0x2d] == 0)) {
LAB_142d08fe4:
    bVar6 = true;
  }
  else {
    local_118 = *(undefined8 *)param_2;
    fVar12 = (float)local_118;
    fVar15 = (float)((ulonglong)local_118 >> 0x20);
    fVar2 = param_2[2];
    local_138 = 0.0;
    fStack_134 = 0.0;
    local_130 = 0.0;
    local_128 = local_118;
    local_120 = fVar2;
    local_f8 = local_118;
    local_f0 = fVar2;
    if ((fVar15 - fVar15) * (fVar15 - fVar15) + (fVar12 - fVar12) * (fVar12 - fVar12) +
        (fVar2 - fVar2) * (fVar2 - fVar2) <= fVar18) {
      local_120 = *(float *)(param_3 + 1);
      local_128 = *param_3;
      local_110 = param_2[2];
      cVar5 = FUN_142543f80(lVar8,param_1,&local_118,&local_128,&local_138);
      if (cVar5 == '\0') goto LAB_142d08fe4;
    }
    if ((1e-08 < ABS(local_130)) && (ABS(local_130) < param_4)) {
      param_2[2] = local_130 + param_2[2];
      uVar1 = *(undefined8 *)param_2;
      fVar16 = (float)((ulonglong)uVar1 >> 0x20) - fVar15;
      fVar13 = (float)uVar1 - fVar12;
      if (fVar16 * fVar16 + fVar13 * fVar13 + (param_2[2] - fVar2) * (param_2[2] - fVar2) <= fVar18)
      {
        local_110 = *(float *)(param_3 + 1);
        local_118 = *param_3;
        local_120 = param_2[2];
        local_128 = uVar1;
        cVar5 = FUN_142543f80(lVar8,param_1,&local_128,&local_118,&local_138);
        if (cVar5 == '\0') goto LAB_142d08fe4;
      }
    }
    fVar4 = local_130;
    fVar16 = fStack_134;
    fVar13 = local_138;
    if (((1e-08 < ABS(local_138)) || (1e-08 < ABS(fStack_134))) &&
       (fStack_134 * fStack_134 + local_138 * local_138 < fVar18)) {
      uVar1 = *(undefined8 *)param_2;
      fVar3 = param_2[2];
      local_120 = local_130;
      local_128 = CONCAT44(fStack_134,local_138);
      iVar11 = 8;
      if ((*(byte *)((longlong)param_1 + 0x94) & 0x18) == 0x10) {
        iVar11 = 1;
      }
      uVar10 = 0;
      do {
        _local_138 = CONCAT44(fVar16,fVar13);
        fVar14 = fVar16;
        if ((int)uVar10 < 4) {
          fVar14 = fVar13;
        }
        *param_2 = (float)(int)((~uVar10 & 1) * 2 + -1) * fVar14 + *param_2;
        fVar14 = fVar16;
        if (3 < (int)uVar10) {
          fVar14 = fVar13;
        }
        uVar9 = uVar10 & 0x80000003;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
        }
        iVar7 = -1;
        if ((int)uVar9 < 2) {
          iVar7 = 1;
        }
        param_2[1] = (float)iVar7 * fVar14 + param_2[1];
        local_118 = *(undefined8 *)param_2;
        local_110 = param_2[2];
        fVar17 = (float)((ulonglong)local_118 >> 0x20) - fVar15;
        fVar14 = (float)local_118 - fVar12;
        if (fVar17 * fVar17 + fVar14 * fVar14 + (local_110 - fVar2) * (local_110 - fVar2) <= fVar18)
        {
          local_120 = *(float *)(param_3 + 1);
          local_128 = *param_3;
          local_100 = param_2[2];
          local_130 = fVar4;
          local_108 = local_118;
          cVar5 = FUN_142543f80(lVar8,param_1,&local_108,&local_128,&local_138);
          if (cVar5 == '\0') goto LAB_142d08fe4;
        }
        uVar10 = uVar10 + 1;
        *(undefined8 *)param_2 = uVar1;
        param_2[2] = fVar3;
      } while ((int)uVar10 < iVar11);
    }
    local_130 = fVar4;
    local_138 = fVar13;
    fStack_134 = fVar16;
    if (1e-08 < ABS(fVar4)) {
      param_2[2] = fVar4 + param_2[2];
      local_118 = *(undefined8 *)param_2;
      fVar16 = (float)((ulonglong)local_118 >> 0x20) - fVar15;
      fVar13 = (float)local_118 - fVar12;
      if (fVar16 * fVar16 + fVar13 * fVar13 + (param_2[2] - fVar2) * (param_2[2] - fVar2) <= fVar18)
      {
        local_100 = *(float *)(param_3 + 1);
        local_108 = *param_3;
        local_110 = param_2[2];
        cVar5 = FUN_142543f80(lVar8,param_1,&local_118,&local_108,&local_138);
        if (cVar5 == '\0') goto LAB_142d08fe4;
      }
    }
    if (((0.0001 < ABS(local_138)) || (0.0001 < ABS(fStack_134))) || (0.0001 < ABS(local_130))) {
      fVar13 = *param_2;
      param_2[2] = local_130 + param_2[2];
      *(ulonglong *)param_2 = CONCAT44(fStack_134 + param_2[1],local_138 + fVar13);
      fVar15 = (fStack_134 + param_2[1]) - fVar15;
      fVar12 = (local_138 + fVar13) - fVar12;
      if (fVar15 * fVar15 + fVar12 * fVar12 + (param_2[2] - fVar2) * (param_2[2] - fVar2) <= fVar18)
      {
        local_100 = *(float *)(param_3 + 1);
        local_108 = *param_3;
        local_110 = param_2[2];
        local_118 = *(undefined8 *)param_2;
        cVar5 = FUN_142543f80(lVar8,param_1,&local_118,&local_108,&local_138);
        return cVar5 == '\0';
      }
    }
    bVar6 = false;
  }
  return bVar6;
}



// FUNCTION 142d09040 FUN_142d09040 body=159 status=ok
// SIG undefined FUN_142d09040(void)

undefined8 FUN_142d09040(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)*param_1;
  plVar1 = plVar5 + (int)param_1[1];
  do {
    if (plVar5 == plVar1) {
      return 0;
    }
    if (*plVar5 != 0) {
      lVar2 = FUN_142e49950();
      lVar6 = *plVar5;
      for (lVar4 = lVar6; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar2) goto LAB_142d09090;
      }
    }
    lVar6 = 0;
LAB_142d09090:
    if (*param_2 != 0) {
      lVar3 = FUN_142e49950();
      lVar4 = *param_2;
      for (lVar2 = lVar4; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar3) goto LAB_142d090b6;
      }
    }
    lVar4 = 0;
LAB_142d090b6:
    if (lVar6 == lVar4) {
      return 1;
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 142d090e0 FUN_142d090e0 body=35 status=ok
// SIG undefined FUN_142d090e0(void)

void FUN_142d090e0(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = UScrollBox::GetPrivateStaticClass();
                    /* WARNING: Could not recover jumptable at 0x000142d090fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  return;
}



// FUNCTION 142d09110 GetAuthGameMode<ABaseGameMode> body=89 status=ok
// SIG undefined GetAuthGameMode<ABaseGameMode>(void)

longlong UWorld::GetAuthGameMode<ABaseGameMode>(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x140);
  if (lVar1 != 0) {
    lVar3 = FUN_142e4e340();
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
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 142d09170 FUN_142d09170 body=1675 status=ok
// SIG undefined FUN_142d09170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d09170(undefined8 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  int iVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  int iVar26;
  longlong local_348 [50];
  longlong local_1b8 [50];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)local_348;
  iVar11 = (param_2 + -2) / 2;
  if (-1 < iVar11) {
    iVar12 = iVar11 * 2 + 1;
    iVar2 = iVar12;
    iVar23 = iVar11;
joined_r0x000142d091b7:
    do {
      if (iVar12 < param_2) {
        iVar12 = iVar11 * 2;
        iVar26 = iVar12 + 1;
        if (iVar12 + 2 < param_2) {
          lVar13 = (longlong)iVar12 + 2;
          plVar19 = param_1 + (longlong)iVar26 * 0x32;
          if (param_1[lVar13 * 0x32] == 0) {
            if (*plVar19 == 0) {
LAB_142d09204:
              if ((*(byte *)(param_1 + lVar13 * 0x32 + 1) & 2) == 0) {
                if ((*(byte *)(plVar19 + 1) & 2) != 0) goto LAB_142d0921d;
LAB_142d09221:
                bVar1 = *(float *)(plVar19 + 0x1f) < *(float *)(param_1 + lVar13 * 0x32 + 0x1f);
              }
              else if ((*(byte *)(plVar19 + 1) & 2) == 0) {
                bVar1 = true;
              }
              else {
LAB_142d0921d:
                bVar1 = false;
                if ((*(byte *)(param_1 + lVar13 * 0x32 + 1) & 2) != 0) goto LAB_142d09221;
              }
            }
            else {
              bVar1 = true;
            }
          }
          else {
            bVar1 = false;
            if (*plVar19 != 0) goto LAB_142d09204;
          }
          if (bVar1) {
            iVar26 = iVar12;
          }
          iVar26 = iVar26 + 1;
        }
        plVar25 = param_1 + (longlong)iVar11 * 0x32;
        plVar19 = param_1 + (longlong)iVar26 * 0x32;
        if (*plVar25 == 0) {
          if (*plVar19 == 0) {
LAB_142d09270:
            if ((((*(byte *)(plVar25 + 1) & 2) == 0) || ((*(byte *)(plVar19 + 1) & 2) != 0)) &&
               ((((*(byte *)(plVar19 + 1) & 2) != 0 && ((*(byte *)(plVar25 + 1) & 2) == 0)) ||
                (*(float *)(plVar25 + 0x1f) <= *(float *)(plVar19 + 0x1f))))) goto LAB_142d093fd;
          }
          if (plVar25 != plVar19) {
            lVar13 = 3;
            plVar18 = local_348;
            plVar17 = plVar25;
            do {
              plVar22 = plVar17;
              plVar16 = plVar18;
              lVar20 = plVar22[1];
              lVar3 = plVar22[2];
              lVar4 = plVar22[3];
              *plVar16 = *plVar22;
              plVar16[1] = lVar20;
              lVar20 = plVar22[4];
              lVar5 = plVar22[5];
              plVar16[2] = lVar3;
              plVar16[3] = lVar4;
              lVar3 = plVar22[6];
              lVar4 = plVar22[7];
              plVar16[4] = lVar20;
              plVar16[5] = lVar5;
              lVar20 = plVar22[8];
              lVar5 = plVar22[9];
              plVar16[6] = lVar3;
              plVar16[7] = lVar4;
              lVar3 = plVar22[10];
              lVar4 = plVar22[0xb];
              plVar16[8] = lVar20;
              plVar16[9] = lVar5;
              lVar20 = plVar22[0xc];
              lVar5 = plVar22[0xd];
              plVar16[10] = lVar3;
              plVar16[0xb] = lVar4;
              lVar3 = plVar22[0xe];
              lVar4 = plVar22[0xf];
              plVar16[0xc] = lVar20;
              plVar16[0xd] = lVar5;
              plVar16[0xe] = lVar3;
              plVar16[0xf] = lVar4;
              lVar13 = lVar13 + -1;
              plVar18 = plVar16 + 0x10;
              plVar17 = plVar22 + 0x10;
            } while (lVar13 != 0);
            lVar13 = plVar22[0x11];
            lVar20 = 3;
            plVar16[0x10] = plVar22[0x10];
            plVar16[0x11] = lVar13;
            plVar18 = plVar19;
            do {
              plVar16 = plVar25;
              plVar17 = plVar18;
              lVar13 = plVar17[1];
              *plVar16 = *plVar17;
              plVar16[1] = lVar13;
              lVar13 = plVar17[3];
              plVar16[2] = plVar17[2];
              plVar16[3] = lVar13;
              lVar13 = plVar17[5];
              plVar16[4] = plVar17[4];
              plVar16[5] = lVar13;
              lVar13 = plVar17[7];
              plVar16[6] = plVar17[6];
              plVar16[7] = lVar13;
              lVar13 = plVar17[9];
              plVar16[8] = plVar17[8];
              plVar16[9] = lVar13;
              lVar13 = plVar17[0xb];
              plVar16[10] = plVar17[10];
              plVar16[0xb] = lVar13;
              lVar13 = plVar17[0xd];
              plVar16[0xc] = plVar17[0xc];
              plVar16[0xd] = lVar13;
              lVar13 = plVar17[0xf];
              plVar16[0xe] = plVar17[0xe];
              plVar16[0xf] = lVar13;
              lVar20 = lVar20 + -1;
              plVar18 = plVar17 + 0x10;
              plVar25 = plVar16 + 0x10;
            } while (lVar20 != 0);
            lVar13 = plVar17[0x11];
            lVar20 = 3;
            plVar16[0x10] = plVar17[0x10];
            plVar16[0x11] = lVar13;
            plVar25 = local_348;
            do {
              plVar17 = plVar19;
              plVar18 = plVar25;
              lVar13 = plVar18[1];
              lVar3 = plVar18[2];
              lVar4 = plVar18[3];
              *plVar17 = *plVar18;
              plVar17[1] = lVar13;
              lVar13 = plVar18[4];
              lVar5 = plVar18[5];
              plVar17[2] = lVar3;
              plVar17[3] = lVar4;
              lVar3 = plVar18[6];
              lVar4 = plVar18[7];
              plVar17[4] = lVar13;
              plVar17[5] = lVar5;
              lVar13 = plVar18[8];
              lVar5 = plVar18[9];
              plVar17[6] = lVar3;
              plVar17[7] = lVar4;
              lVar3 = plVar18[10];
              lVar4 = plVar18[0xb];
              plVar17[8] = lVar13;
              plVar17[9] = lVar5;
              lVar13 = plVar18[0xc];
              lVar5 = plVar18[0xd];
              plVar17[10] = lVar3;
              plVar17[0xb] = lVar4;
              lVar3 = plVar18[0xe];
              lVar4 = plVar18[0xf];
              plVar17[0xc] = lVar13;
              plVar17[0xd] = lVar5;
              plVar17[0xe] = lVar3;
              plVar17[0xf] = lVar4;
              lVar20 = lVar20 + -1;
              plVar25 = plVar18 + 0x10;
              plVar19 = plVar17 + 0x10;
            } while (lVar20 != 0);
            lVar13 = plVar18[0x11];
            plVar17[0x10] = plVar18[0x10];
            plVar17[0x11] = lVar13;
          }
          iVar12 = iVar26 * 2 + 1;
          iVar11 = iVar26;
          goto joined_r0x000142d091b7;
        }
        if (*plVar19 != 0) goto LAB_142d09270;
      }
LAB_142d093fd:
      iVar12 = iVar2 + -2;
      iVar11 = iVar23 + -1;
      iVar2 = iVar12;
      iVar23 = iVar11;
    } while (-1 < iVar11);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar24 = param_1 + (longlong)param_2 * 0x32;
    do {
      if (param_1 != puVar24) {
        lVar13 = 3;
        plVar19 = local_348;
        puVar10 = param_1;
        do {
          puVar14 = puVar10;
          puVar15 = plVar19;
          uVar6 = puVar14[1];
          uVar7 = puVar14[2];
          uVar8 = puVar14[3];
          *puVar15 = *puVar14;
          puVar15[1] = uVar6;
          uVar6 = puVar14[4];
          uVar9 = puVar14[5];
          puVar15[2] = uVar7;
          puVar15[3] = uVar8;
          uVar7 = puVar14[6];
          uVar8 = puVar14[7];
          puVar15[4] = uVar6;
          puVar15[5] = uVar9;
          uVar6 = puVar14[8];
          uVar9 = puVar14[9];
          puVar15[6] = uVar7;
          puVar15[7] = uVar8;
          uVar7 = puVar14[10];
          uVar8 = puVar14[0xb];
          puVar15[8] = uVar6;
          puVar15[9] = uVar9;
          uVar6 = puVar14[0xc];
          uVar9 = puVar14[0xd];
          puVar15[10] = uVar7;
          puVar15[0xb] = uVar8;
          uVar7 = puVar14[0xe];
          uVar8 = puVar14[0xf];
          puVar15[0xc] = uVar6;
          puVar15[0xd] = uVar9;
          puVar15[0xe] = uVar7;
          puVar15[0xf] = uVar8;
          lVar13 = lVar13 + -1;
          plVar19 = puVar15 + 0x10;
          puVar10 = puVar14 + 0x10;
        } while (lVar13 != 0);
        uVar6 = puVar14[0x11];
        lVar13 = 3;
        puVar15[0x10] = puVar14[0x10];
        puVar15[0x11] = uVar6;
        puVar10 = param_1;
        puVar15 = puVar24;
        do {
          puVar21 = puVar15;
          puVar14 = puVar10;
          uVar6 = puVar21[1];
          *puVar14 = *puVar21;
          puVar14[1] = uVar6;
          uVar6 = puVar21[3];
          puVar14[2] = puVar21[2];
          puVar14[3] = uVar6;
          uVar6 = puVar21[5];
          puVar14[4] = puVar21[4];
          puVar14[5] = uVar6;
          uVar6 = puVar21[7];
          puVar14[6] = puVar21[6];
          puVar14[7] = uVar6;
          uVar6 = puVar21[9];
          puVar14[8] = puVar21[8];
          puVar14[9] = uVar6;
          uVar6 = puVar21[0xb];
          puVar14[10] = puVar21[10];
          puVar14[0xb] = uVar6;
          uVar6 = puVar21[0xd];
          puVar14[0xc] = puVar21[0xc];
          puVar14[0xd] = uVar6;
          uVar6 = puVar21[0xf];
          puVar14[0xe] = puVar21[0xe];
          puVar14[0xf] = uVar6;
          lVar13 = lVar13 + -1;
          puVar10 = puVar14 + 0x10;
          puVar15 = puVar21 + 0x10;
        } while (lVar13 != 0);
        uVar6 = puVar21[0x11];
        lVar13 = 3;
        puVar14[0x10] = puVar21[0x10];
        puVar14[0x11] = uVar6;
        puVar10 = puVar24;
        plVar19 = local_348;
        do {
          puVar14 = plVar19;
          puVar15 = puVar10;
          uVar6 = puVar14[1];
          uVar7 = puVar14[2];
          uVar8 = puVar14[3];
          *puVar15 = *puVar14;
          puVar15[1] = uVar6;
          uVar6 = puVar14[4];
          uVar9 = puVar14[5];
          puVar15[2] = uVar7;
          puVar15[3] = uVar8;
          uVar7 = puVar14[6];
          uVar8 = puVar14[7];
          puVar15[4] = uVar6;
          puVar15[5] = uVar9;
          uVar6 = puVar14[8];
          uVar9 = puVar14[9];
          puVar15[6] = uVar7;
          puVar15[7] = uVar8;
          uVar7 = puVar14[10];
          uVar8 = puVar14[0xb];
          puVar15[8] = uVar6;
          puVar15[9] = uVar9;
          uVar6 = puVar14[0xc];
          uVar9 = puVar14[0xd];
          puVar15[10] = uVar7;
          puVar15[0xb] = uVar8;
          uVar7 = puVar14[0xe];
          uVar8 = puVar14[0xf];
          puVar15[0xc] = uVar6;
          puVar15[0xd] = uVar9;
          puVar15[0xe] = uVar7;
          puVar15[0xf] = uVar8;
          lVar13 = lVar13 + -1;
          puVar10 = puVar15 + 0x10;
          plVar19 = puVar14 + 0x10;
        } while (lVar13 != 0);
        uVar6 = puVar14[0x11];
        puVar15[0x10] = puVar14[0x10];
        puVar15[0x11] = uVar6;
      }
      iVar11 = 0;
      if (1 < param_2) {
        do {
          iVar2 = iVar11 * 2;
          iVar12 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            lVar13 = (longlong)iVar2 + 2;
            plVar19 = param_1 + (longlong)iVar12 * 0x32;
            if (param_1[lVar13 * 0x32] == 0) {
              if (*plVar19 == 0) {
LAB_142d095d4:
                if ((*(byte *)(param_1 + lVar13 * 0x32 + 1) & 2) == 0) {
                  if ((*(byte *)(plVar19 + 1) & 2) != 0) goto LAB_142d095ed;
LAB_142d095f1:
                  bVar1 = *(float *)(plVar19 + 0x1f) < *(float *)(param_1 + lVar13 * 0x32 + 0x1f);
                }
                else if ((*(byte *)(plVar19 + 1) & 2) == 0) {
                  bVar1 = true;
                }
                else {
LAB_142d095ed:
                  bVar1 = false;
                  if ((*(byte *)(param_1 + lVar13 * 0x32 + 1) & 2) != 0) goto LAB_142d095f1;
                }
              }
              else {
                bVar1 = true;
              }
            }
            else {
              bVar1 = false;
              if (*plVar19 != 0) goto LAB_142d095d4;
            }
            if (bVar1) {
              iVar12 = iVar2;
            }
            iVar12 = iVar12 + 1;
          }
          plVar25 = param_1 + (longlong)iVar11 * 0x32;
          plVar19 = param_1 + (longlong)iVar12 * 0x32;
          if (*plVar25 == 0) {
            if (*plVar19 == 0) goto LAB_142d09640;
          }
          else {
            if (*plVar19 == 0) break;
LAB_142d09640:
            if ((((*(byte *)(plVar25 + 1) & 2) == 0) || ((*(byte *)(plVar19 + 1) & 2) != 0)) &&
               ((((*(byte *)(plVar19 + 1) & 2) != 0 && ((*(byte *)(plVar25 + 1) & 2) == 0)) ||
                (*(float *)(plVar25 + 0x1f) <= *(float *)(plVar19 + 0x1f))))) break;
          }
          if (plVar25 != plVar19) {
            lVar13 = 3;
            plVar18 = local_1b8;
            plVar17 = plVar25;
            do {
              plVar22 = plVar17;
              plVar16 = plVar18;
              lVar20 = plVar22[1];
              lVar3 = plVar22[2];
              lVar4 = plVar22[3];
              *plVar16 = *plVar22;
              plVar16[1] = lVar20;
              lVar20 = plVar22[4];
              lVar5 = plVar22[5];
              plVar16[2] = lVar3;
              plVar16[3] = lVar4;
              lVar3 = plVar22[6];
              lVar4 = plVar22[7];
              plVar16[4] = lVar20;
              plVar16[5] = lVar5;
              lVar20 = plVar22[8];
              lVar5 = plVar22[9];
              plVar16[6] = lVar3;
              plVar16[7] = lVar4;
              lVar3 = plVar22[10];
              lVar4 = plVar22[0xb];
              plVar16[8] = lVar20;
              plVar16[9] = lVar5;
              lVar20 = plVar22[0xc];
              lVar5 = plVar22[0xd];
              plVar16[10] = lVar3;
              plVar16[0xb] = lVar4;
              lVar3 = plVar22[0xe];
              lVar4 = plVar22[0xf];
              plVar16[0xc] = lVar20;
              plVar16[0xd] = lVar5;
              plVar16[0xe] = lVar3;
              plVar16[0xf] = lVar4;
              lVar13 = lVar13 + -1;
              plVar18 = plVar16 + 0x10;
              plVar17 = plVar22 + 0x10;
            } while (lVar13 != 0);
            lVar13 = plVar22[0x11];
            lVar20 = 3;
            plVar16[0x10] = plVar22[0x10];
            plVar16[0x11] = lVar13;
            plVar18 = plVar19;
            do {
              plVar16 = plVar25;
              plVar17 = plVar18;
              lVar13 = plVar17[1];
              *plVar16 = *plVar17;
              plVar16[1] = lVar13;
              lVar13 = plVar17[3];
              plVar16[2] = plVar17[2];
              plVar16[3] = lVar13;
              lVar13 = plVar17[5];
              plVar16[4] = plVar17[4];
              plVar16[5] = lVar13;
              lVar13 = plVar17[7];
              plVar16[6] = plVar17[6];
              plVar16[7] = lVar13;
              lVar13 = plVar17[9];
              plVar16[8] = plVar17[8];
              plVar16[9] = lVar13;
              lVar13 = plVar17[0xb];
              plVar16[10] = plVar17[10];
              plVar16[0xb] = lVar13;
              lVar13 = plVar17[0xd];
              plVar16[0xc] = plVar17[0xc];
              plVar16[0xd] = lVar13;
              lVar13 = plVar17[0xf];
              plVar16[0xe] = plVar17[0xe];
              plVar16[0xf] = lVar13;
              lVar20 = lVar20 + -1;
              plVar18 = plVar17 + 0x10;
              plVar25 = plVar16 + 0x10;
            } while (lVar20 != 0);
            lVar13 = plVar17[0x11];
            lVar20 = 3;
            plVar16[0x10] = plVar17[0x10];
            plVar16[0x11] = lVar13;
            plVar25 = local_1b8;
            do {
              plVar17 = plVar19;
              plVar18 = plVar25;
              lVar13 = plVar18[1];
              lVar3 = plVar18[2];
              lVar4 = plVar18[3];
              *plVar17 = *plVar18;
              plVar17[1] = lVar13;
              lVar13 = plVar18[4];
              lVar5 = plVar18[5];
              plVar17[2] = lVar3;
              plVar17[3] = lVar4;
              lVar3 = plVar18[6];
              lVar4 = plVar18[7];
              plVar17[4] = lVar13;
              plVar17[5] = lVar5;
              lVar13 = plVar18[8];
              lVar5 = plVar18[9];
              plVar17[6] = lVar3;
              plVar17[7] = lVar4;
              lVar3 = plVar18[10];
              lVar4 = plVar18[0xb];
              plVar17[8] = lVar13;
              plVar17[9] = lVar5;
              lVar13 = plVar18[0xc];
              lVar5 = plVar18[0xd];
              plVar17[10] = lVar3;
              plVar17[0xb] = lVar4;
              lVar3 = plVar18[0xe];
              lVar4 = plVar18[0xf];
              plVar17[0xc] = lVar13;
              plVar17[0xd] = lVar5;
              plVar17[0xe] = lVar3;
              plVar17[0xf] = lVar4;
              lVar20 = lVar20 + -1;
              plVar25 = plVar18 + 0x10;
              plVar19 = plVar17 + 0x10;
            } while (lVar20 != 0);
            lVar13 = plVar18[0x11];
            plVar17[0x10] = plVar18[0x10];
            plVar17[0x11] = lVar13;
          }
          iVar11 = iVar12;
        } while (iVar12 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar24 = puVar24 + -0x32;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142d09800 FUN_142d09800 body=2270 status=ok
// SIG undefined FUN_142d09800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142d09800(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  float fVar21;
  undefined1 auStack_9b8 [48];
  longlong local_988;
  longlong local_980 [50];
  longlong local_7f0 [50];
  longlong local_660 [50];
  longlong local_4d0 [51];
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_9b8;
    fVar21 = (float)(longlong)param_2;
    lStack_330 = param_1 + -400 + param_2 * 400;
    if ((longlong)param_2 < 0) {
      fVar21 = fVar21 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar21 = _guard_xfg_dispatch_icall_nop(fVar21);
    local_328 = (undefined4)(longlong)(fVar21 + fVar21);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar20 = &local_338;
    do {
      plVar18 = (longlong *)*plVar20;
      plVar15 = (longlong *)plVar20[1];
      lVar16 = plVar20[2];
      local_988._0_4_ = (int)lVar16;
      lVar13 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)plVar15 - (longlong)plVar18),
                      8) + ((longlong)plVar15 - (longlong)plVar18);
      lVar13 = ((lVar13 >> 8) + 1) - (lVar13 >> 0x3f);
      plVar17 = plVar18;
      if ((int)local_988 != 0) {
LAB_142d09900:
        if (8 < lVar13) {
          plVar18 = plVar17 + (lVar13 / 2) * 0x32;
          if (plVar18 != plVar17) {
            lVar13 = 3;
            plVar19 = local_980;
            plVar11 = plVar18;
            do {
              plVar8 = plVar11;
              plVar10 = plVar19;
              lVar14 = plVar8[1];
              lVar4 = plVar8[2];
              lVar5 = plVar8[3];
              *plVar10 = *plVar8;
              plVar10[1] = lVar14;
              lVar14 = plVar8[4];
              lVar6 = plVar8[5];
              plVar10[2] = lVar4;
              plVar10[3] = lVar5;
              lVar4 = plVar8[6];
              lVar5 = plVar8[7];
              plVar10[4] = lVar14;
              plVar10[5] = lVar6;
              lVar14 = plVar8[8];
              lVar6 = plVar8[9];
              plVar10[6] = lVar4;
              plVar10[7] = lVar5;
              lVar4 = plVar8[10];
              lVar5 = plVar8[0xb];
              plVar10[8] = lVar14;
              plVar10[9] = lVar6;
              lVar14 = plVar8[0xc];
              lVar6 = plVar8[0xd];
              plVar10[10] = lVar4;
              plVar10[0xb] = lVar5;
              lVar4 = plVar8[0xe];
              lVar5 = plVar8[0xf];
              plVar10[0xc] = lVar14;
              plVar10[0xd] = lVar6;
              plVar10[0xe] = lVar4;
              plVar10[0xf] = lVar5;
              lVar13 = lVar13 + -1;
              plVar19 = plVar10 + 0x10;
              plVar11 = plVar8 + 0x10;
            } while (lVar13 != 0);
            lVar13 = plVar8[0x11];
            lVar14 = 3;
            plVar10[0x10] = plVar8[0x10];
            plVar10[0x11] = lVar13;
            plVar19 = plVar17;
            do {
              plVar10 = plVar18;
              plVar11 = plVar19;
              lVar13 = plVar11[1];
              *plVar10 = *plVar11;
              plVar10[1] = lVar13;
              lVar13 = plVar11[3];
              plVar10[2] = plVar11[2];
              plVar10[3] = lVar13;
              lVar13 = plVar11[5];
              plVar10[4] = plVar11[4];
              plVar10[5] = lVar13;
              lVar13 = plVar11[7];
              plVar10[6] = plVar11[6];
              plVar10[7] = lVar13;
              lVar13 = plVar11[9];
              plVar10[8] = plVar11[8];
              plVar10[9] = lVar13;
              lVar13 = plVar11[0xb];
              plVar10[10] = plVar11[10];
              plVar10[0xb] = lVar13;
              lVar13 = plVar11[0xd];
              plVar10[0xc] = plVar11[0xc];
              plVar10[0xd] = lVar13;
              lVar13 = plVar11[0xf];
              plVar10[0xe] = plVar11[0xe];
              plVar10[0xf] = lVar13;
              lVar14 = lVar14 + -1;
              plVar19 = plVar11 + 0x10;
              plVar18 = plVar10 + 0x10;
            } while (lVar14 != 0);
            lVar13 = plVar11[0x11];
            lVar14 = 3;
            plVar10[0x10] = plVar11[0x10];
            plVar10[0x11] = lVar13;
            plVar18 = plVar17;
            plVar19 = local_980;
            do {
              plVar10 = plVar19;
              plVar11 = plVar18;
              lVar13 = plVar10[1];
              lVar4 = plVar10[2];
              lVar5 = plVar10[3];
              *plVar11 = *plVar10;
              plVar11[1] = lVar13;
              lVar13 = plVar10[4];
              lVar6 = plVar10[5];
              plVar11[2] = lVar4;
              plVar11[3] = lVar5;
              lVar4 = plVar10[6];
              lVar5 = plVar10[7];
              plVar11[4] = lVar13;
              plVar11[5] = lVar6;
              lVar13 = plVar10[8];
              lVar6 = plVar10[9];
              plVar11[6] = lVar4;
              plVar11[7] = lVar5;
              lVar4 = plVar10[10];
              lVar5 = plVar10[0xb];
              plVar11[8] = lVar13;
              plVar11[9] = lVar6;
              lVar6 = plVar10[0xc];
              lVar7 = plVar10[0xd];
              plVar11[10] = lVar4;
              plVar11[0xb] = lVar5;
              lVar13 = plVar10[0xe];
              lVar4 = plVar10[0xf];
              plVar11[0xc] = lVar6;
              plVar11[0xd] = lVar7;
              plVar11[0xe] = lVar13;
              plVar11[0xf] = lVar4;
              lVar14 = lVar14 + -1;
              plVar18 = plVar11 + 0x10;
              plVar19 = plVar10 + 0x10;
            } while (lVar14 != 0);
            uVar2 = *(undefined4 *)((longlong)plVar10 + 0x84);
            lVar13 = plVar10[0x11];
            uVar3 = *(undefined4 *)((longlong)plVar10 + 0x8c);
            *(int *)(plVar11 + 0x10) = (int)plVar10[0x10];
            *(undefined4 *)((longlong)plVar11 + 0x84) = uVar2;
            *(int *)(plVar11 + 0x11) = (int)lVar13;
            *(undefined4 *)((longlong)plVar11 + 0x8c) = uVar3;
          }
          plVar19 = plVar15 + 0x32;
          plVar18 = plVar17;
LAB_142d09a73:
          while( true ) {
            plVar11 = plVar18;
            plVar18 = plVar11 + 0x32;
            if (plVar15 < plVar18) goto LAB_142d09ad0;
            if (*plVar17 != 0) break;
            if (*plVar18 != 0) goto LAB_142d09ad0;
LAB_142d09a96:
            if (*plVar17 == 0) {
LAB_142d09a9b:
              if ((((*(byte *)(plVar17 + 1) & 2) != 0) && ((*(byte *)(plVar11 + 0x33) & 2) == 0)) ||
                 ((((*(byte *)(plVar11 + 0x33) & 2) == 0 || ((*(byte *)(plVar17 + 1) & 2) != 0)) &&
                  (*(float *)(plVar11 + 0x51) < *(float *)(plVar17 + 0x1f))))) {
LAB_142d09ad0:
                do {
                  plVar11 = plVar19;
                  plVar19 = plVar11 + -0x32;
                  if (plVar19 <= plVar17) goto LAB_142d09b29;
                  if (*plVar19 == 0) {
                    if (*plVar17 != 0) goto LAB_142d09b29;
LAB_142d09af1:
                    if (*plVar19 != 0) goto LAB_142d09ad0;
                  }
                  else if (*plVar17 == 0) goto LAB_142d09af1;
                  if ((((*(byte *)(plVar11 + -0x31) & 2) != 0) &&
                      ((*(byte *)(plVar17 + 1) & 2) == 0)) ||
                     ((((*(byte *)(plVar17 + 1) & 2) == 0 || ((*(byte *)(plVar11 + -0x31) & 2) != 0)
                       ) && (*(float *)(plVar17 + 0x1f) < *(float *)(plVar11 + -0x13)))))
                  goto LAB_142d09b29;
                } while( true );
              }
            }
          }
          if (*plVar18 == 0) goto LAB_142d09a96;
          goto LAB_142d09a9b;
        }
        for (; plVar19 = plVar17, plVar18 = plVar17, plVar17 < plVar15; plVar15 = plVar15 + -0x32) {
          while (plVar11 = plVar19, plVar18 = plVar18 + 0x32, plVar18 <= plVar15) {
            if (*plVar11 == 0) {
              if (*plVar18 == 0) {
LAB_142d09f2d:
                if ((*(byte *)(plVar11 + 1) & 2) == 0) {
                  if ((*(byte *)(plVar18 + 1) & 2) != 0) goto LAB_142d09f46;
LAB_142d09f4f:
                  bVar1 = *(float *)(plVar18 + 0x1f) < *(float *)(plVar11 + 0x1f);
                }
                else if ((*(byte *)(plVar18 + 1) & 2) == 0) {
                  bVar1 = true;
                }
                else {
LAB_142d09f46:
                  if ((*(byte *)(plVar11 + 1) & 2) != 0) goto LAB_142d09f4f;
                  bVar1 = false;
                }
              }
              else {
                bVar1 = true;
              }
            }
            else {
              if (*plVar18 != 0) goto LAB_142d09f2d;
              bVar1 = false;
            }
            plVar19 = plVar18;
            if (!bVar1) {
              plVar19 = plVar11;
            }
          }
          if (plVar11 != plVar15) {
            lVar16 = 3;
            plVar18 = local_4d0;
            plVar19 = plVar11;
            do {
              plVar8 = plVar19;
              plVar10 = plVar18;
              lVar13 = plVar8[1];
              lVar14 = plVar8[2];
              lVar4 = plVar8[3];
              *plVar10 = *plVar8;
              plVar10[1] = lVar13;
              lVar13 = plVar8[4];
              lVar5 = plVar8[5];
              plVar10[2] = lVar14;
              plVar10[3] = lVar4;
              lVar14 = plVar8[6];
              lVar4 = plVar8[7];
              plVar10[4] = lVar13;
              plVar10[5] = lVar5;
              lVar13 = plVar8[8];
              lVar5 = plVar8[9];
              plVar10[6] = lVar14;
              plVar10[7] = lVar4;
              lVar14 = plVar8[10];
              lVar4 = plVar8[0xb];
              plVar10[8] = lVar13;
              plVar10[9] = lVar5;
              lVar13 = plVar8[0xc];
              lVar5 = plVar8[0xd];
              plVar10[10] = lVar14;
              plVar10[0xb] = lVar4;
              lVar14 = plVar8[0xe];
              lVar4 = plVar8[0xf];
              plVar10[0xc] = lVar13;
              plVar10[0xd] = lVar5;
              plVar10[0xe] = lVar14;
              plVar10[0xf] = lVar4;
              lVar16 = lVar16 + -1;
              plVar18 = plVar10 + 0x10;
              plVar19 = plVar8 + 0x10;
            } while (lVar16 != 0);
            lVar16 = plVar8[0x11];
            lVar13 = 3;
            plVar10[0x10] = plVar8[0x10];
            plVar10[0x11] = lVar16;
            plVar18 = plVar15;
            do {
              plVar10 = plVar11;
              plVar19 = plVar18;
              lVar16 = plVar19[1];
              *plVar10 = *plVar19;
              plVar10[1] = lVar16;
              lVar16 = plVar19[3];
              plVar10[2] = plVar19[2];
              plVar10[3] = lVar16;
              lVar16 = plVar19[5];
              plVar10[4] = plVar19[4];
              plVar10[5] = lVar16;
              lVar16 = plVar19[7];
              plVar10[6] = plVar19[6];
              plVar10[7] = lVar16;
              lVar16 = plVar19[9];
              plVar10[8] = plVar19[8];
              plVar10[9] = lVar16;
              lVar16 = plVar19[0xb];
              plVar10[10] = plVar19[10];
              plVar10[0xb] = lVar16;
              lVar16 = plVar19[0xd];
              plVar10[0xc] = plVar19[0xc];
              plVar10[0xd] = lVar16;
              lVar16 = plVar19[0xf];
              plVar10[0xe] = plVar19[0xe];
              plVar10[0xf] = lVar16;
              lVar13 = lVar13 + -1;
              plVar18 = plVar19 + 0x10;
              plVar11 = plVar10 + 0x10;
            } while (lVar13 != 0);
            lVar16 = plVar19[0x11];
            lVar13 = 3;
            plVar10[0x10] = plVar19[0x10];
            plVar10[0x11] = lVar16;
            plVar18 = plVar15;
            plVar19 = local_4d0;
            do {
              plVar10 = plVar19;
              plVar11 = plVar18;
              lVar16 = plVar10[1];
              lVar14 = plVar10[2];
              lVar4 = plVar10[3];
              *plVar11 = *plVar10;
              plVar11[1] = lVar16;
              lVar16 = plVar10[4];
              lVar5 = plVar10[5];
              plVar11[2] = lVar14;
              plVar11[3] = lVar4;
              lVar14 = plVar10[6];
              lVar4 = plVar10[7];
              plVar11[4] = lVar16;
              plVar11[5] = lVar5;
              lVar16 = plVar10[8];
              lVar5 = plVar10[9];
              plVar11[6] = lVar14;
              plVar11[7] = lVar4;
              lVar14 = plVar10[10];
              lVar4 = plVar10[0xb];
              plVar11[8] = lVar16;
              plVar11[9] = lVar5;
              lVar5 = plVar10[0xc];
              lVar6 = plVar10[0xd];
              plVar11[10] = lVar14;
              plVar11[0xb] = lVar4;
              lVar16 = plVar10[0xe];
              lVar14 = plVar10[0xf];
              plVar11[0xc] = lVar5;
              plVar11[0xd] = lVar6;
              plVar11[0xe] = lVar16;
              plVar11[0xf] = lVar14;
              lVar13 = lVar13 + -1;
              plVar18 = plVar11 + 0x10;
              plVar19 = plVar10 + 0x10;
            } while (lVar13 != 0);
            lVar16 = plVar10[0x11];
            plVar11[0x10] = plVar10[0x10];
            plVar11[0x11] = lVar16;
          }
        }
        goto LAB_142d09e9c;
      }
LAB_142d09e8d:
      local_988 = lVar16;
      FUN_142d09170(plVar18,lVar13,param_3,param_4);
LAB_142d09e9c:
      plVar20 = plVar20 + -3;
    } while (&local_338 <= plVar20);
  }
  return;
LAB_142d09b29:
  if (plVar18 <= plVar19) {
    if (plVar18 != plVar19) {
      lVar13 = 3;
      plVar11 = local_7f0;
      plVar10 = plVar18;
      do {
        plVar9 = plVar10;
        plVar8 = plVar11;
        lVar14 = plVar9[1];
        lVar4 = plVar9[2];
        lVar5 = plVar9[3];
        *plVar8 = *plVar9;
        plVar8[1] = lVar14;
        lVar14 = plVar9[4];
        lVar6 = plVar9[5];
        plVar8[2] = lVar4;
        plVar8[3] = lVar5;
        lVar4 = plVar9[6];
        lVar5 = plVar9[7];
        plVar8[4] = lVar14;
        plVar8[5] = lVar6;
        lVar14 = plVar9[8];
        lVar6 = plVar9[9];
        plVar8[6] = lVar4;
        plVar8[7] = lVar5;
        lVar4 = plVar9[10];
        lVar5 = plVar9[0xb];
        plVar8[8] = lVar14;
        plVar8[9] = lVar6;
        lVar14 = plVar9[0xc];
        lVar6 = plVar9[0xd];
        plVar8[10] = lVar4;
        plVar8[0xb] = lVar5;
        lVar4 = plVar9[0xe];
        lVar5 = plVar9[0xf];
        plVar8[0xc] = lVar14;
        plVar8[0xd] = lVar6;
        plVar8[0xe] = lVar4;
        plVar8[0xf] = lVar5;
        lVar13 = lVar13 + -1;
        plVar11 = plVar8 + 0x10;
        plVar10 = plVar9 + 0x10;
      } while (lVar13 != 0);
      lVar13 = plVar9[0x11];
      lVar14 = 3;
      plVar8[0x10] = plVar9[0x10];
      plVar8[0x11] = lVar13;
      plVar11 = plVar18;
      plVar10 = plVar19;
      do {
        plVar9 = plVar10;
        plVar8 = plVar11;
        lVar13 = plVar9[1];
        *plVar8 = *plVar9;
        plVar8[1] = lVar13;
        lVar13 = plVar9[3];
        plVar8[2] = plVar9[2];
        plVar8[3] = lVar13;
        lVar13 = plVar9[5];
        plVar8[4] = plVar9[4];
        plVar8[5] = lVar13;
        lVar13 = plVar9[7];
        plVar8[6] = plVar9[6];
        plVar8[7] = lVar13;
        lVar13 = plVar9[9];
        plVar8[8] = plVar9[8];
        plVar8[9] = lVar13;
        lVar13 = plVar9[0xb];
        plVar8[10] = plVar9[10];
        plVar8[0xb] = lVar13;
        lVar13 = plVar9[0xd];
        plVar8[0xc] = plVar9[0xc];
        plVar8[0xd] = lVar13;
        lVar13 = plVar9[0xf];
        plVar8[0xe] = plVar9[0xe];
        plVar8[0xf] = lVar13;
        lVar14 = lVar14 + -1;
        plVar11 = plVar8 + 0x10;
        plVar10 = plVar9 + 0x10;
      } while (lVar14 != 0);
      lVar13 = plVar9[0x11];
      lVar14 = 3;
      plVar8[0x10] = plVar9[0x10];
      plVar8[0x11] = lVar13;
      plVar11 = plVar19;
      plVar10 = local_7f0;
      do {
        plVar9 = plVar10;
        plVar8 = plVar11;
        lVar13 = plVar9[1];
        lVar4 = plVar9[2];
        lVar5 = plVar9[3];
        *plVar8 = *plVar9;
        plVar8[1] = lVar13;
        lVar13 = plVar9[4];
        lVar6 = plVar9[5];
        plVar8[2] = lVar4;
        plVar8[3] = lVar5;
        lVar4 = plVar9[6];
        lVar5 = plVar9[7];
        plVar8[4] = lVar13;
        plVar8[5] = lVar6;
        lVar13 = plVar9[8];
        lVar6 = plVar9[9];
        plVar8[6] = lVar4;
        plVar8[7] = lVar5;
        lVar4 = plVar9[10];
        lVar5 = plVar9[0xb];
        plVar8[8] = lVar13;
        plVar8[9] = lVar6;
        lVar6 = plVar9[0xc];
        lVar7 = plVar9[0xd];
        plVar8[10] = lVar4;
        plVar8[0xb] = lVar5;
        lVar13 = plVar9[0xe];
        lVar4 = plVar9[0xf];
        plVar8[0xc] = lVar6;
        plVar8[0xd] = lVar7;
        plVar8[0xe] = lVar13;
        plVar8[0xf] = lVar4;
        lVar14 = lVar14 + -1;
        plVar11 = plVar8 + 0x10;
        plVar10 = plVar9 + 0x10;
      } while (lVar14 != 0);
      uVar2 = *(undefined4 *)((longlong)plVar9 + 0x84);
      lVar13 = plVar9[0x11];
      uVar3 = *(undefined4 *)((longlong)plVar9 + 0x8c);
      *(int *)(plVar8 + 0x10) = (int)plVar9[0x10];
      *(undefined4 *)((longlong)plVar8 + 0x84) = uVar2;
      *(int *)(plVar8 + 0x11) = (int)lVar13;
      *(undefined4 *)((longlong)plVar8 + 0x8c) = uVar3;
    }
    goto LAB_142d09a73;
  }
  if (plVar17 != plVar19) {
    lVar13 = 3;
    plVar10 = local_660;
    plVar8 = plVar17;
    do {
      plVar12 = plVar8;
      plVar9 = plVar10;
      lVar14 = plVar12[1];
      lVar4 = plVar12[2];
      lVar5 = plVar12[3];
      *plVar9 = *plVar12;
      plVar9[1] = lVar14;
      lVar14 = plVar12[4];
      lVar6 = plVar12[5];
      plVar9[2] = lVar4;
      plVar9[3] = lVar5;
      lVar4 = plVar12[6];
      lVar5 = plVar12[7];
      plVar9[4] = lVar14;
      plVar9[5] = lVar6;
      lVar14 = plVar12[8];
      lVar6 = plVar12[9];
      plVar9[6] = lVar4;
      plVar9[7] = lVar5;
      lVar4 = plVar12[10];
      lVar5 = plVar12[0xb];
      plVar9[8] = lVar14;
      plVar9[9] = lVar6;
      lVar14 = plVar12[0xc];
      lVar6 = plVar12[0xd];
      plVar9[10] = lVar4;
      plVar9[0xb] = lVar5;
      lVar4 = plVar12[0xe];
      lVar5 = plVar12[0xf];
      plVar9[0xc] = lVar14;
      plVar9[0xd] = lVar6;
      plVar9[0xe] = lVar4;
      plVar9[0xf] = lVar5;
      lVar13 = lVar13 + -1;
      plVar10 = plVar9 + 0x10;
      plVar8 = plVar12 + 0x10;
    } while (lVar13 != 0);
    lVar13 = plVar12[0x11];
    lVar14 = 3;
    plVar9[0x10] = plVar12[0x10];
    plVar9[0x11] = lVar13;
    plVar10 = plVar17;
    plVar8 = plVar19;
    do {
      plVar12 = plVar8;
      plVar9 = plVar10;
      lVar13 = plVar12[1];
      *plVar9 = *plVar12;
      plVar9[1] = lVar13;
      lVar13 = plVar12[3];
      plVar9[2] = plVar12[2];
      plVar9[3] = lVar13;
      lVar13 = plVar12[5];
      plVar9[4] = plVar12[4];
      plVar9[5] = lVar13;
      lVar13 = plVar12[7];
      plVar9[6] = plVar12[6];
      plVar9[7] = lVar13;
      lVar13 = plVar12[9];
      plVar9[8] = plVar12[8];
      plVar9[9] = lVar13;
      lVar13 = plVar12[0xb];
      plVar9[10] = plVar12[10];
      plVar9[0xb] = lVar13;
      lVar13 = plVar12[0xd];
      plVar9[0xc] = plVar12[0xc];
      plVar9[0xd] = lVar13;
      lVar13 = plVar12[0xf];
      plVar9[0xe] = plVar12[0xe];
      plVar9[0xf] = lVar13;
      lVar14 = lVar14 + -1;
      plVar10 = plVar9 + 0x10;
      plVar8 = plVar12 + 0x10;
    } while (lVar14 != 0);
    lVar13 = plVar12[0x11];
    lVar14 = 3;
    plVar9[0x10] = plVar12[0x10];
    plVar9[0x11] = lVar13;
    plVar10 = plVar19;
    plVar8 = local_660;
    do {
      plVar12 = plVar8;
      plVar9 = plVar10;
      lVar13 = plVar12[1];
      lVar4 = plVar12[2];
      lVar5 = plVar12[3];
      *plVar9 = *plVar12;
      plVar9[1] = lVar13;
      lVar13 = plVar12[4];
      lVar6 = plVar12[5];
      plVar9[2] = lVar4;
      plVar9[3] = lVar5;
      lVar4 = plVar12[6];
      lVar5 = plVar12[7];
      plVar9[4] = lVar13;
      plVar9[5] = lVar6;
      lVar13 = plVar12[8];
      lVar6 = plVar12[9];
      plVar9[6] = lVar4;
      plVar9[7] = lVar5;
      lVar4 = plVar12[10];
      lVar5 = plVar12[0xb];
      plVar9[8] = lVar13;
      plVar9[9] = lVar6;
      lVar6 = plVar12[0xc];
      lVar7 = plVar12[0xd];
      plVar9[10] = lVar4;
      plVar9[0xb] = lVar5;
      lVar13 = plVar12[0xe];
      lVar4 = plVar12[0xf];
      plVar9[0xc] = lVar6;
      plVar9[0xd] = lVar7;
      plVar9[0xe] = lVar13;
      plVar9[0xf] = lVar4;
      lVar14 = lVar14 + -1;
      plVar10 = plVar9 + 0x10;
      plVar8 = plVar12 + 0x10;
    } while (lVar14 != 0);
    uVar2 = *(undefined4 *)((longlong)plVar12 + 0x84);
    lVar13 = plVar12[0x11];
    uVar3 = *(undefined4 *)((longlong)plVar12 + 0x8c);
    *(int *)(plVar9 + 0x10) = (int)plVar12[0x10];
    *(undefined4 *)((longlong)plVar9 + 0x84) = uVar2;
    *(int *)(plVar9 + 0x11) = (int)lVar13;
    *(undefined4 *)((longlong)plVar9 + 0x8c) = uVar3;
  }
  local_988._0_4_ = (int)local_988 + -1;
  lVar13 = (longlong)plVar19 + (-400 - (longlong)plVar17);
  lVar13 = lVar13 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar13),8);
  lVar14 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)plVar15 - (longlong)plVar18),8) +
           ((longlong)plVar15 - (longlong)plVar18);
  if ((lVar13 >> 8) - (lVar13 >> 0x3f) < (lVar14 >> 8) - (lVar14 >> 0x3f)) {
    if (plVar18 < plVar15) {
      *plVar20 = (longlong)plVar18;
      plVar20[1] = (longlong)plVar15;
      *(int *)(plVar20 + 2) = (int)local_988;
      plVar20 = plVar20 + 3;
    }
    if (plVar19 <= plVar17 + 0x32) goto LAB_142d09e9c;
    plVar15 = plVar11 + -100;
    plVar18 = plVar17;
  }
  else {
    if (plVar17 + 0x32 < plVar19) {
      *plVar20 = (longlong)plVar17;
      plVar20[1] = (longlong)(plVar11 + -100);
      *(int *)(plVar20 + 2) = (int)local_988;
      plVar20 = plVar20 + 3;
    }
    if (plVar15 <= plVar18) goto LAB_142d09e9c;
  }
  lVar13 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)plVar15 - (longlong)plVar18),8) +
           ((longlong)plVar15 - (longlong)plVar18);
  lVar13 = ((lVar13 >> 8) + 1) - (lVar13 >> 0x3f);
  plVar17 = plVar18;
  if ((int)local_988 == 0) goto LAB_142d09e8d;
  goto LAB_142d09900;
}



// FUNCTION 142d0a0e0 FUN_142d0a0e0 body=54 status=ok
// SIG undefined FUN_142d0a0e0(void)

undefined8 * FUN_142d0a0e0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_142d0a300(param_1 + 4);
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  return param_1;
}



// FUNCTION 142d0a120 FUN_142d0a120 body=128 status=ok
// SIG undefined FUN_142d0a120(void)

undefined8 * FUN_142d0a120(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  param_1[3] = param_2[3];
  FUN_140a7a190(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c2) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  return param_1;
}



// FUNCTION 142d0a1a0 FUN_142d0a1a0 body=113 status=ok
// SIG undefined FUN_142d0a1a0(void)

undefined8 * FUN_142d0a1a0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_142d0a300(param_1 + 4);
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c2) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  return param_1;
}



// FUNCTION 142d0a220 FUN_142d0a220 body=211 status=ok
// SIG undefined FUN_142d0a220(void)

undefined1 * FUN_142d0a220(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  iVar1 = *(int *)(param_2 + 0x40);
  _Src = *(void **)(param_2 + 0x38);
  *(int *)(param_1 + 0x40) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x38,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x38),_Src,(longlong)iVar1 << 4);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  param_1[0x58] = param_2[0x58];
  return param_1;
}



// FUNCTION 142d0a300 FUN_142d0a300 body=393 status=ok
// SIG undefined FUN_142d0a300(void)

undefined8 * FUN_142d0a300(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0x88 | 8;
  FWeakObjectPtr::operator=((longlong)param_1 + 0x14);
  FWeakObjectPtr::operator=((longlong)param_1 + 0x1c);
  FWeakObjectPtr::operator=((longlong)param_1 + 0x24);
  FWeakObjectPtr::operator=((longlong)param_1 + 0x2c);
  FWeakObjectPtr::operator=((longlong)param_1 + 0x34);
  FWeakObjectPtr::operator=((longlong)param_1 + 0x3c);
  param_1[9] = 0;
  param_1[10] = 0;
  FWeakObjectPtr::operator=(param_1 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0xc,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x20] = 0;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined1 *)((longlong)param_1 + 300) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  *(undefined1 *)((longlong)param_1 + 0x174) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3f800000;
  FWeakObjectPtr::operator=(param_1 + 0x32,0);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x36] = AK::MemoryMgr::StartProfileThreadUsage;
  return param_1;
}



// FUNCTION 142d0a490 FUN_142d0a490 body=176 status=ok
// SIG undefined FUN_142d0a490(void)

undefined4 * FUN_142d0a490(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  FWeakObjectPtr::operator=(param_1 + 4,param_3);
  FWeakObjectPtr::operator=(param_1 + 6,0);
  FUN_142d0a300(param_1 + 8);
  *(undefined8 *)(param_1 + 0x88) = param_2;
  FWeakObjectPtr::operator=(param_1 + 0x8a,0);
  FWeakObjectPtr::operator=(param_1 + 0x8c,0);
  *(undefined8 *)(param_1 + 0x8e) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x92,0);
  FWeakObjectPtr::operator=(param_1 + 0x94,0);
  FUN_140590080(param_1 + 0x96);
  return param_1;
}



// FUNCTION 142d0a540 FUN_142d0a540 body=162 status=ok
// SIG undefined FUN_142d0a540(void)

undefined4 * FUN_142d0a540(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  FWeakObjectPtr::operator=(param_1 + 4,0);
  FWeakObjectPtr::operator=(param_1 + 6,0);
  FUN_142d0a300(param_1 + 8);
  *(undefined8 *)(param_1 + 0x88) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x8a,0);
  FWeakObjectPtr::operator=(param_1 + 0x8c,0);
  *(undefined8 *)(param_1 + 0x8e) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  FWeakObjectPtr::operator=(param_1 + 0x92,0);
  FWeakObjectPtr::operator=(param_1 + 0x94,0);
  FUN_140590080(param_1 + 0x96);
  return param_1;
}



// FUNCTION 142d0a5f0 FUN_142d0a5f0 body=377 status=ok
// SIG undefined FUN_142d0a5f0(void)

undefined8 * FUN_142d0a5f0(undefined8 *param_1)

{
  undefined4 uStack_c;
  
  *param_1 = &PTR_FUN_1458747c0;
  FUN_142d0ab00(param_1 + 2);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  FUN_142d1e4a0();
  *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined2 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = CONCAT44(uStack_c,0xffffffff);
  *(undefined1 *)(param_1 + 0x5e) = 0;
  param_1[100] = 0;
  param_1[0x65] = 1;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined2 *)((longlong)param_1 + 0x334) = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x344) = 0;
  return param_1;
}



// FUNCTION 142d0a770 FUN_142d0a770 body=317 status=ok
// SIG undefined FUN_142d0a770(void)

undefined8 * FUN_142d0a770(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *_Src;
  undefined8 *_Dst;
  byte bVar2;
  
  *param_1 = *param_2;
  *(byte *)(param_1 + 1) =
       *(byte *)(param_1 + 1) ^ (*(byte *)(param_1 + 1) ^ *(byte *)(param_2 + 1)) & 1;
  bVar2 = (*(byte *)(param_2 + 1) ^ *(byte *)(param_1 + 1)) & 2 ^ *(byte *)(param_1 + 1);
  *(byte *)(param_1 + 1) = bVar2;
  bVar2 = (*(byte *)(param_2 + 1) ^ bVar2) & 4 ^ bVar2;
  *(byte *)(param_1 + 1) = bVar2;
  bVar2 = (*(byte *)(param_2 + 1) ^ bVar2) & 8 ^ bVar2;
  *(byte *)(param_1 + 1) = bVar2;
  *(byte *)(param_1 + 1) = (*(byte *)(param_2 + 1) ^ bVar2) & 0x10 ^ bVar2;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[0x1d] = 0;
  iVar1 = *(int *)(param_2 + 0x1e);
  _Src = (undefined8 *)param_2[0x1d];
  *(int *)(param_1 + 0x1e) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  }
  else {
    TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
    ResizeForCopy(param_1 + 5,iVar1,0);
    if (_Src == (undefined8 *)0x0) {
      _Src = param_2 + 5;
    }
    _Dst = (undefined8 *)param_1[0x1d];
    if ((undefined8 *)param_1[0x1d] == (undefined8 *)0x0) {
      _Dst = param_1 + 5;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 * 0x18);
  }
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  FUN_140729f20(param_1 + 0x20,param_2 + 0x20);
  return param_1;
}



// FUNCTION 142d0a8b0 FUN_142d0a8b0 body=444 status=ok
// SIG undefined FUN_142d0a8b0(void)

longlong * FUN_142d0a8b0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  if (param_2 == 0) {
    return param_1;
  }
  lVar8 = *(longlong *)(param_2 + 0xf8);
  lVar7 = (longlong)*(int *)(param_2 + 0x100) * 0x40 + lVar8;
  if (lVar8 == lVar7) {
    return param_1;
  }
  piVar9 = (int *)(lVar8 + 0x30);
  do {
    lVar6 = *(longlong *)(piVar9 + -6);
    lVar5 = (longlong)piVar9[-4] * 0x20 + lVar6;
    for (; lVar6 != lVar5; lVar6 = lVar6 + 0x20) {
      lVar3 = FUN_141796df0(lVar6 + 8);
      plVar2 = (longlong *)*param_1;
      iVar1 = (int)param_1[1];
      for (plVar4 = plVar2; plVar4 != plVar2 + iVar1; plVar4 = plVar4 + 1) {
        if (*plVar4 == lVar3) {
          if ((int)((longlong)plVar4 - (longlong)plVar2 >> 3) != -1) goto LAB_142d0a98a;
          break;
        }
      }
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      *(longlong *)((longlong)iVar1 * 8 + *param_1) = lVar3;
LAB_142d0a98a:
    }
    lVar5 = *(longlong *)(piVar9 + -2);
    lVar6 = lVar5 + (longlong)*piVar9 * 0x18;
    for (; lVar5 != lVar6; lVar5 = lVar5 + 0x18) {
      lVar3 = FUN_141796280(lVar5);
      plVar2 = (longlong *)*param_1;
      iVar1 = (int)param_1[1];
      for (plVar4 = plVar2; plVar4 != plVar2 + iVar1; plVar4 = plVar4 + 1) {
        if (*plVar4 == lVar3) {
          if ((int)((longlong)plVar4 - (longlong)plVar2 >> 3) != -1) goto LAB_142d0aa0a;
          break;
        }
      }
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      *(longlong *)((longlong)iVar1 * 8 + *param_1) = lVar3;
LAB_142d0aa0a:
    }
    lVar8 = lVar8 + 0x40;
    piVar9 = piVar9 + 0x10;
    if (lVar8 == lVar7) {
      return param_1;
    }
  } while( true );
}



// FUNCTION 142d0aa70 FUN_142d0aa70 body=131 status=ok
// SIG undefined FUN_142d0aa70(void)

longlong FUN_142d0aa70(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_142d0ab00();
  FUN_142d28c00(param_1,param_2);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  uVar2 = FUN_142d46fe0(param_3);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(longlong *)(param_1 + 0x30) = param_4;
  if ((param_4 == 0) && (plVar1 = *(longlong **)(param_1 + 0x28), plVar1 != (longlong *)0x0)) {
    uVar2 = UCircularThrobber::GetPrivateStaticClass();
    uVar2 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
  }
  return param_1;
}



// FUNCTION 142d0ab00 FUN_142d0ab00 body=371 status=ok
// SIG undefined FUN_142d0ab00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142d0ab00(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 10,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 300) = 0;
  *(undefined1 *)((longlong)param_1 + 0x131) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x28] = AK::MemoryMgr::StartProfileThreadUsage;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3f800000;
  param_1[0x35] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(uint *)(param_1 + 0x1e) = *(uint *)(param_1 + 0x1e) & 0xffffffe0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)((longlong)param_1 + 0x125) = 0;
  param_1[0x20] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x21) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x10c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x114) = DAT_1468b5d98;
  param_1[0x23] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x24) = DAT_1468b5d98;
  *(undefined1 *)((longlong)param_1 + 0x124) = 0;
  return param_1;
}



// FUNCTION 142d0ac80 URoomDecorationObject body=52 status=ok
// SIG undefined URoomDecorationObject(void)

undefined8 * URoomDecorationObject::URoomDecorationObject(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotify::UAnimNotify(param_1,uVar1);
  *param_1 = &PTR_FUN_1458721d0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 142d0acc0 FUN_142d0acc0 body=92 status=ok
// SIG undefined FUN_142d0acc0(void)

undefined8 * FUN_142d0acc0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145872cf0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 8;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined2 *)(param_1 + 6) = 0xf;
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x40;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x42c80000;
  *(undefined4 *)(param_1 + 7) = 0x42960000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x40a00000;
  return param_1;
}



// FUNCTION 142d0ad20 FUN_142d0ad20 body=135 status=ok
// SIG undefined FUN_142d0ad20(void)

undefined8 * FUN_142d0ad20(undefined8 *param_1)

{
  FUN_141781840();
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 8;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined2 *)(param_1 + 6) = 0xf;
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x40;
  *param_1 = &PTR_FUN_145873050;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x42c80000;
  *(undefined4 *)(param_1 + 7) = 0x42960000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x40a00000;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x43480000;
  return param_1;
}



// FUNCTION 142d0adb0 FUN_142d0adb0 body=251 status=ok
// SIG undefined FUN_142d0adb0(void)

undefined8 * FUN_142d0adb0(undefined8 *param_1)

{
  FUN_141781840();
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 8;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined2 *)(param_1 + 6) = 0xf;
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x40;
  *param_1 = &PTR__scalar_deleting_destructor__145873af0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x42c80000;
  *(undefined4 *)(param_1 + 7) = 0x42960000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x40a00000;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x42480000;
  *(undefined4 *)(param_1 + 0x13) = 0x42480000;
  *(undefined4 *)(param_1 + 0x1a) = 0x43480000;
  *(undefined1 *)((longlong)param_1 + 0x109) = 0;
  return param_1;
}



// FUNCTION 142d0aeb0 FUN_142d0aeb0 body=190 status=ok
// SIG undefined FUN_142d0aeb0(void)

undefined8 * FUN_142d0aeb0(undefined8 *param_1)

{
  FUN_141781840();
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 8;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined2 *)(param_1 + 6) = 0xf;
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x40;
  *param_1 = &PTR__scalar_deleting_destructor__145873d98;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x42c80000;
  *(undefined4 *)(param_1 + 7) = 0x42960000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x40a00000;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x43480000;
  *(undefined4 *)(param_1 + 0x13) = 0x42480000;
  return param_1;
}



// FUNCTION 142d0af70 FUN_142d0af70 body=190 status=ok
// SIG undefined FUN_142d0af70(void)

undefined8 * FUN_142d0af70(undefined8 *param_1)

{
  FUN_141781840();
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 8;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined2 *)(param_1 + 6) = 0xf;
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) | 0x40;
  *param_1 = &PTR__scalar_deleting_destructor__145873848;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x42c80000;
  *(undefined4 *)(param_1 + 7) = 0x42960000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x40a00000;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x43480000;
  *(undefined4 *)(param_1 + 0x13) = 0x41a00000;
  return param_1;
}



// FUNCTION 142d0b030 FUN_142d0b030 body=196 status=ok
// SIG undefined FUN_142d0b030(void)

undefined8 * FUN_142d0b030(undefined8 *param_1)

{
  FUN_142d0ad20();
  *param_1 = &PTR_FUN_1458735a0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x42480000;
  *(undefined4 *)(param_1 + 0x22) = 0x41a00000;
  return param_1;
}



// FUNCTION 142d0b100 FUN_142d0b100 body=51 status=ok
// SIG undefined FUN_142d0b100(void)

undefined8 * FUN_142d0b100(undefined8 *param_1)

{
  FUN_142d0ad20();
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xfffffff7;
  *param_1 = &PTR_FUN_1458732f8;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 0x13) = 1;
  return param_1;
}



// FUNCTION 142d0b140 FUN_142d0b140 body=153 status=ok
// SIG undefined FUN_142d0b140(void)

undefined8 * FUN_142d0b140(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_141781840();
  puVar1 = param_1 + 5;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar1;
  *param_1 = &PTR_FUN_145874b40;
  *puVar1 = &PTR_FUN_145874db8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 1;
  return param_1;
}



// FUNCTION 142d0b1e0 FUN_142d0b1e0 body=586 status=ok
// SIG undefined FUN_142d0b1e0(void)

undefined8 * FUN_142d0b1e0(undefined8 *param_1)

{
  FUN_142326e40();
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *param_1 = &PTR_FUN_1458728a8;
  param_1[5] = &PTR_LAB_145872ca8;
  param_1[0x39] = &PTR_LAB_145872cd8;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 2;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 2;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(uint *)((longlong)param_1 + 0x244) = *(uint *)((longlong)param_1 + 0x244) & 0xfffffffb | 3;
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x24c);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x4b);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x264);
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x50);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x28c);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x53);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x2a4);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x2b4);
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  FUN_14246fd50((longlong)param_1 + 0x2b4,0x40000000);
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  FUN_14246fd50(param_1 + 0x50,0x3f800000);
  FUN_14246fd50((longlong)param_1 + 0x24c,0x3f800000);
  FUN_14246fd50(param_1 + 0x4b,0x3f800000);
  FUN_14246fd50((longlong)param_1 + 0x264,0x3f800000);
  FUN_14246fd50((longlong)param_1 + 0x28c,0x3f800000);
  FUN_14246fd50(param_1 + 0x53,0x3f800000);
  return param_1;
}



// FUNCTION 142d0b430 FUN_142d0b430 body=1176 status=ok
// SIG undefined FUN_142d0b430(void)

undefined8 * FUN_142d0b430(undefined8 *param_1)

{
  FUN_142326e40();
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *param_1 = &PTR_FUN_1458742d0;
  param_1[5] = &PTR_LAB_145874778;
  param_1[0x39] = &PTR_LAB_1458747a8;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 2;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 2;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 2;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 2;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa4] = 0;
  *(undefined1 *)(param_1 + 0xa5) = 1;
  param_1[0xab] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined4 *)(param_1 + 0xb7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x60c) = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xcb] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0x3f800000;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0xd9);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0xdc);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x6ec);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0xdf);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x704);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0xe2);
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *(undefined4 *)(param_1 + 0xe7) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x73c) = 0x437a0000;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  *(undefined4 *)((longlong)param_1 + 0x794) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf3) = 0x3f800000;
  param_1[0xf4] = 0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0xf6);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x7bc);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0xf9);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x7d4);
  param_1[0xfc] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x105] = 0;
  param_1[0x107] = 0;
  *(undefined8 *)((longlong)param_1 + 0x844) = 0;
  param_1[0x10a] = 0;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 4;
  *(byte *)((longlong)param_1 + 0x734) = *(byte *)((longlong)param_1 + 0x734) & 0xfe;
  *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) | 0x11;
  FUN_14246fd50(param_1 + 0xf9,0x3f800000);
  FUN_14246fd50((longlong)param_1 + 0x7bc,0x3f800000);
  FUN_14246fd50(param_1 + 0xdc,0x3f800000);
  FUN_14246fd50((longlong)param_1 + 0x6ec,0x3f800000);
  FUN_14246fd50(param_1 + 0xdf,0x3f800000);
  FUN_14246fd50((longlong)param_1 + 0x704,0x3f800000);
  FUN_14246fd50(param_1 + 0xe2,0x3f800000);
  *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) & 0xfe;
  *(undefined4 *)(param_1 + 0xe6) = 0x41a00000;
  *(byte *)(param_1 + 0xfd) = *(byte *)(param_1 + 0xfd) | 2;
  return param_1;
}



// FUNCTION 142d0b8d0 FUN_142d0b8d0 body=353 status=ok
// SIG undefined FUN_142d0b8d0(void)

undefined8 * FUN_142d0b8d0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145874040;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  FUN_142c8c260(param_1 + 0xc,0x3f800000);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_142d979c0(param_1 + 0x19);
  param_1[0x21] = 0;
  *(uint *)((longlong)param_1 + 300) = *(uint *)((longlong)param_1 + 300) & 0xfffffffb | 3;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x32] = 0;
  *(byte *)((longlong)param_1 + 0x1c1) = *(byte *)((longlong)param_1 + 0x1c1) & 0xfe;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0x4e;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x41800000;
  *(undefined4 *)(param_1 + 0x39) = 0x41100000;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x3a) = 4;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  *(uint *)((longlong)param_1 + 0x134) = *(uint *)((longlong)param_1 + 0x134) | 4;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x102) = 1;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x27) = 0x40a00000;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  return param_1;
}



// FUNCTION 142d0ba40 FUN_142d0ba40 body=89 status=ok
// SIG undefined FUN_142d0ba40(void)

undefined8 * FUN_142d0ba40(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR_FUN_145874e00;
  param_1[6] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x20000000;
  return param_1;
}



// FUNCTION 142d0baa0 FUN_142d0baa0 body=345 status=ok
// SIG undefined FUN_142d0baa0(void)

undefined8 * FUN_142d0baa0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_145871f48;
  *(undefined4 *)(param_1 + 6) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f000000;
  *(undefined4 *)(param_1 + 7) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x1c);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x2b);
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x41700000;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"PhysicsActor",1);
  param_1[0x3b] = *puVar1;
  return param_1;
}



// FUNCTION 142d0bc00 FUN_142d0bc00 body=138 status=ok
// SIG undefined FUN_142d0bc00(void)

undefined8 * FUN_142d0bc00(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_141781840();
  puVar1 = param_1 + 5;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar1;
  *param_1 = &PTR_FUN_145874868;
  *puVar1 = &PTR_FUN_145874af8;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 142d0bc90 FUN_142d0bc90 body=492 status=ok
// SIG undefined FUN_142d0bc90(void)

undefined8 * FUN_142d0bc90(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_145871318;
  param_1[5] = &PTR_LAB_145871748;
  param_1[0x2f] = &PTR_LAB_145871778;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0xffffffff;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0xffffffffffffffff;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 2;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 2;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 2;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0xffffffff;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  return param_1;
}



// FUNCTION 142d0be80 FUN_142d0be80 body=323 status=ok
// SIG undefined FUN_142d0be80(void)

undefined8 * FUN_142d0be80(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_145871790;
  FText::FText(param_1 + 6);
  FText::FText(param_1 + 9);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,0);
  FGenericPlatformString::Memcpy(param_1[0x10],L"DesignerFixMe",0x1c);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xb4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x15,0);
  }
  if ((undefined2 *)param_1[0x15] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x15] = 0;
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  return param_1;
}



// FUNCTION 142d0bfd0 FUN_142d0bfd0 body=42 status=ok
// SIG undefined FUN_142d0bfd0(void)

undefined8 * FUN_142d0bfd0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR__scalar_deleting_destructor__145871cc8;
  FText::FText(param_1 + 6);
  return param_1;
}


