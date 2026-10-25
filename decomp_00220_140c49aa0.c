// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140c49aa0 FUN_140c49aa0 body=300 status=ok
// SIG undefined FUN_140c49aa0(void)

void FUN_140c49aa0(longlong *param_1,undefined8 param_2,uint param_3,char param_4,undefined1 param_5
                  ,char param_6)

{
  char cVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    if ((param_3 >> (uVar4 & 0x1f) & 1) != 0) {
      FUN_140e864a0(param_1 + 0xf2,uVar4,param_2);
    }
    bVar3 = (char)uVar4 + 1;
    uVar4 = (uint)bVar3;
  } while (bVar3 < 4);
  if (param_4 != '\0') {
    (**(code **)(*param_1 + 0xf8))(param_1,param_3,param_5,0);
  }
  if (param_6 != '\0') {
    if ((char)param_1[-0x18c] == '\x03') {
      lVar2 = (**(code **)(param_1[-0x1b1] + 0x668))(param_1 + -0x1b1);
      if ((lVar2 != 0) &&
         (cVar1 = (**(code **)(param_1[-0x1b1] + 0x778))(param_1 + -0x1b1), cVar1 == '\0')) {
        FUN_1413f83c0(param_1 + -0x1b1,param_2,param_3,param_4,param_5);
        return;
      }
      if ((char)param_1[-0x18c] == '\x03') {
        return;
      }
    }
    cVar1 = (**(code **)(param_1[-0x1b1] + 0x778))(param_1 + -0x1b1);
    if (cVar1 != '\0') {
      FUN_1413f89a0(param_1 + -0x1b1,param_2,param_3,param_4,param_5);
    }
  }
  return;
}



// FUNCTION 140c49bd0 FUN_140c49bd0 body=574 status=ok
// SIG undefined FUN_140c49bd0(void)

void FUN_140c49bd0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *local_48;
  ulonglong local_40;
  
  FUN_142cc79e0();
  uVar11 = 0;
  if ((char)param_1[0x39c] == '\0') {
    plVar8 = param_1 + 0x39d;
    *(undefined4 *)(param_1 + 0x39e) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x1cf4)) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar8,0);
    }
    local_48 = (longlong *)0x0;
    local_40 = 0;
    (**(code **)(*param_1 + 0x4b8))(param_1,&local_48,1);
    if (*(int *)((longlong)param_1 + 0x1cf4) < (int)local_40) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar8,local_40 & 0xffffffff);
    }
    uVar4 = (ulonglong)((longlong)(local_48 + (int)local_40) + (7 - (longlong)local_48)) >> 3;
    if (local_48 + (int)local_40 < local_48) {
      uVar4 = uVar11;
    }
    plVar10 = local_48;
    uVar12 = uVar11;
    if (uVar4 != 0) {
      do {
        iVar1 = (int)param_1[0x39e];
        uVar2 = *(undefined4 *)(*plVar10 + 0xc);
        *(int *)(param_1 + 0x39e) = iVar1 + 1;
        if (*(int *)((longlong)param_1 + 0x1cf4) < iVar1 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar8,iVar1);
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)(*plVar8 + (longlong)iVar1 * 4) = uVar2;
        plVar10 = plVar10 + 1;
      } while (uVar12 != uVar4);
    }
    *(undefined1 *)(param_1 + 0x39c) = 1;
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  puVar9 = (undefined4 *)param_1[0x39d];
  uVar4 = (longlong)(int)param_1[0x39e] & 0x3fffffffffffffff;
  if (puVar9 + (int)param_1[0x39e] < puVar9) {
    uVar4 = uVar11;
  }
  if (uVar4 != 0) {
    do {
      FCollisionQueryParams::AddIgnoredActor(param_2,*puVar9);
      uVar11 = uVar11 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar11 != uVar4);
  }
  lVar5 = FUN_142ceef80(param_1);
  FCollisionQueryParams::AddIgnoredActor(param_2,lVar5);
  lVar6 = ATestBeaconClient::ClientPing_Implementation(param_1);
  if (*(char *)((longlong)param_1 + 0x13c1) == '\0') {
    if (lVar5 == 0) {
      return;
    }
    lVar6 = FUN_1429d7ab0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    lVar6 = FUN_14222e2a0(lVar5);
    if (lVar6 == 0) {
      return;
    }
  }
  else {
    if (lVar6 == 0) {
      return;
    }
    if (param_1[0x92] != 0) {
      return;
    }
    uVar7 = UDamageableInterface::GetPrivateStaticClass();
    plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
    if (plVar8 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140c49df1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0xb0))(plVar8,param_2,1);
      return;
    }
  }
  FCollisionQueryParams::AddIgnoredActor(param_2,lVar6);
  return;
}



// FUNCTION 140c49e10 FUN_140c49e10 body=1169 status=ok
// SIG undefined FUN_140c49e10(void)

void FUN_140c49e10(longlong param_1,longlong *param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (param_3 != '\x03') {
    if (param_3 != '\x04') {
      if (param_3 != '\x05') {
        return;
      }
      cVar2 = FUN_140c58a50(param_1 + -0x1a0);
      if (cVar2 == '\0') {
        return;
      }
      if (*(int *)(param_1 + -0x20) < 1) {
        return;
      }
      if (param_2 != (longlong *)0x0) {
        plVar3 = (longlong *)FUN_142f71d80();
        plVar7 = param_2;
        do {
          if (plVar7 == plVar3) goto LAB_140c4a1c3;
          plVar7 = (longlong *)plVar7[6];
        } while (plVar7 != (longlong *)0x0);
      }
      param_2 = (longlong *)0x0;
LAB_140c4a1c3:
      lVar8 = param_2[0x1f];
      if (lVar8 == 0) {
        (**(code **)(*param_2 + 0x368))(param_2);
        lVar8 = param_2[0x1f];
        if (lVar8 != 0) goto LAB_140c4a1e7;
LAB_140c4a21d:
        lVar8 = 0;
      }
      else {
LAB_140c4a1e7:
        lVar4 = FUN_142f71d80();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140c4a21d;
      }
      lVar4 = *(longlong *)(param_1 + -0x88);
      if (lVar4 == 0) {
LAB_140c4a261:
        lVar4 = 0;
      }
      else {
        lVar5 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140c4a261;
      }
      FUN_140c3e1c0(param_1 + -0x1a0,lVar4,lVar8,3);
      goto LAB_140c4a27b;
    }
    if (param_2 != (longlong *)0x0) {
      plVar3 = (longlong *)FUN_142f71d80();
      plVar7 = param_2;
      do {
        plVar9 = param_2;
        if (plVar7 == plVar3) goto LAB_140c49fa1;
        plVar7 = (longlong *)plVar7[6];
      } while (plVar7 != (longlong *)0x0);
    }
    plVar9 = (longlong *)0x0;
LAB_140c49fa1:
    lVar8 = plVar9[0x1f];
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x368))(plVar9);
      lVar8 = plVar9[0x1f];
      if (lVar8 != 0) goto LAB_140c49fc5;
LAB_140c4a000:
      lVar8 = 0;
    }
    else {
LAB_140c49fc5:
      lVar4 = FUN_141437870();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140c4a000;
    }
    lVar4 = param_1 + -0x1a0;
    if (*(char *)(lVar8 + 0x178) == '\0') {
      cVar2 = FUN_140c58a50(lVar4,param_2);
      if (cVar2 == '\0') {
        return;
      }
      lVar5 = *(longlong *)(param_1 + -0x88);
      if (lVar5 != 0) {
        lVar6 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) goto LAB_140c4a112;
      }
      lVar5 = 0;
LAB_140c4a112:
      if (DAT_146af4bf0 != 0) {
        FUN_140cabb00(DAT_146af4bf0,lVar5,param_2);
      }
      FUN_140c3e1c0(lVar4,lVar5,lVar8,2);
      FUN_140c3b970(lVar4,lVar8);
      FUN_14146d7b0(lVar4,param_2);
      if (0 < *(int *)(param_1 + -0x20)) {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + -0x28,0);
      }
      if (*(char *)(lVar8 + 0x177) == '\0') {
        return;
      }
      FUN_140c3a4a0(lVar4);
      return;
    }
    lVar5 = FUN_140c450c0(lVar4,param_2,0);
    if (lVar5 == 0) {
      return;
    }
    if (*(char *)(lVar5 + 8) != '\x01') {
      return;
    }
    lVar5 = *(longlong *)(param_1 + -0x88);
    if (lVar5 == 0) {
LAB_140c4a079:
      lVar5 = 0;
    }
    else {
      lVar6 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_140c4a079;
    }
    FUN_140c3e1c0(lVar4,lVar5,lVar8,2);
    FUN_140c3b970(lVar4,lVar8);
    FUN_14146d7b0(lVar4,param_2);
    FUN_140c3ae60(lVar4,param_2);
    if (*(int *)(param_1 + -0x20) < 1) {
      return;
    }
LAB_140c4a27b:
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + -0x28,0);
    return;
  }
  if (param_2 != (longlong *)0x0) {
    plVar3 = (longlong *)FUN_142f71d80();
    plVar7 = param_2;
    do {
      plVar9 = param_2;
      if (plVar7 == plVar3) goto LAB_140c49e58;
      plVar7 = (longlong *)plVar7[6];
    } while (plVar7 != (longlong *)0x0);
  }
  plVar9 = (longlong *)0x0;
LAB_140c49e58:
  lVar8 = plVar9[0x1f];
  if (lVar8 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar8 = plVar9[0x1f];
    if (lVar8 != 0) goto LAB_140c49e7c;
LAB_140c49eb7:
    lVar8 = 0;
  }
  else {
LAB_140c49e7c:
    lVar4 = FUN_141437870();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140c49eb7;
  }
  cVar2 = FUN_140c58a50(param_1 + -0x1a0,param_2);
  if (cVar2 == '\0') goto LAB_140c49f39;
  lVar4 = *(longlong *)(param_1 + -0x88);
  if (lVar4 == 0) {
LAB_140c49f0e:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140c49f0e;
  }
  FUN_140c3e1c0(param_1 + -0x1a0,lVar4,lVar8,1);
  if (0 < *(int *)(param_1 + -0x20)) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + -0x28,0);
  }
LAB_140c49f39:
  if (((lVar8 != 0) && (lVar4 = FUN_140c14790(lVar8), lVar4 != 0)) &&
     (*(longlong *)(lVar8 + 0x4c8) == 0)) {
    FUN_14146d7f0(param_1 + -0x1a0,param_2);
  }
  return;
}



// FUNCTION 140c4a2b0 FUN_140c4a2b0 body=390 status=ok
// SIG undefined FUN_140c4a2b0(void)

void FUN_140c4a2b0(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  
  lVar1 = param_1 + -0x1a0;
  cVar4 = FUN_142f63b20(param_2,lVar1);
  if (cVar4 == '\0') {
    return;
  }
  if (param_3 == '\b') {
    puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,local_res8);
    uVar6 = FUN_142f5f490(param_2);
    FUN_140c3a6a0(lVar1,uVar6,*puVar5);
  }
  else if (param_3 != '\a') {
    if (param_3 != '\n') {
      return;
    }
    plVar7 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2,local_res8);
    if (*plVar7 != 0) {
      plVar8 = (longlong *)FUN_142f71d80();
      plVar7 = (longlong *)*plVar7;
      for (plVar2 = plVar7; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[6]) {
        if (plVar2 == plVar8) goto LAB_140c4a394;
      }
    }
    plVar7 = (longlong *)0x0;
LAB_140c4a394:
    lVar10 = plVar7[0x1f];
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x368))(plVar7);
      lVar10 = plVar7[0x1f];
      if (lVar10 == 0) {
        return;
      }
    }
    lVar9 = FUN_141437870();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
    lVar9 = FUN_140c14790(lVar10);
    if (lVar9 == 0) {
      return;
    }
    lVar9 = FUN_142f5f490(param_2);
    if (*(longlong *)(lVar10 + 0x4c8) != lVar9) {
      return;
    }
    puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,local_res8);
    FUN_14146d7f0(lVar1,*puVar5);
    return;
  }
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,local_res8);
  cVar4 = FUN_140c58a50(lVar1,*puVar5);
  if ((cVar4 != '\0') && (0 < *(int *)(param_1 + -0x20))) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + -0x28,0);
  }
  return;
}



// FUNCTION 140c4a440 FUN_140c4a440 body=72 status=ok
// SIG undefined FUN_140c4a440(void)

void FUN_140c4a440(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 local_res20 [8];
  
  if (param_3 == '\x03') {
    puVar2 = (undefined8 *)FUN_142f5af50(param_2,local_res20);
    cVar1 = FUN_140c58a50(param_1 + -0x1a0,*puVar2);
    if ((cVar1 != '\0') && (0 < *(int *)(param_1 + -0x20))) {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + -0x28,0)
      ;
    }
  }
  return;
}



// FUNCTION 140c4a490 FUN_140c4a490 body=273 status=ok
// SIG undefined FUN_140c4a490(void)

void FUN_140c4a490(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  iVar1 = *(int *)(param_1 + 0x1e0);
  if (iVar1 == -1) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (((lVar2 == 0) && (lVar2 = FUN_1423407b0(), lVar2 == 0)) ||
       (lVar2 = UWorld::GetGameState<APVPGameState>(lVar2), lVar2 == 0)) {
      iVar1 = -1;
    }
    else {
      iVar1 = FUN_140cb6340(lVar2);
      iVar1 = iVar1 + -1;
    }
    *(int *)(param_1 + 0x1e0) = iVar1;
  }
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 400))) {
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x188) + (longlong)iVar1 * 0x18);
    plVar6 = plVar7 + (longlong)
                      *(int *)(*(longlong *)(param_1 + 0x188) + 8 + (longlong)iVar1 * 0x18) * 6;
    for (; plVar7 != plVar6; plVar7 = plVar7 + 6) {
      if (*plVar7 != 0) {
        lVar3 = FUN_142f71d80();
        lVar2 = *plVar7;
        for (lVar5 = lVar2; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
          if (lVar5 == lVar3) goto LAB_140c4a556;
        }
      }
      lVar2 = 0;
LAB_140c4a556:
      if (param_2 != 0) {
        lVar3 = FUN_142f71d80();
        lVar5 = param_2;
        do {
          lVar4 = param_2;
          if (lVar5 == lVar3) goto LAB_140c4a573;
          lVar5 = *(longlong *)(lVar5 + 0x30);
        } while (lVar5 != 0);
      }
      lVar4 = 0;
LAB_140c4a573:
      if (lVar2 == lVar4) {
        *(undefined1 *)(plVar7 + 5) = 1;
        return;
      }
    }
  }
  return;
}



// FUNCTION 140c4a5d0 FUN_140c4a5d0 body=1612 status=ok
// SIG undefined FUN_140c4a5d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140c4a5d0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong local_res8;
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  ulonglong in_stack_fffffffffffffed8;
  float local_118;
  float local_114;
  float local_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined1 local_f0 [24];
  undefined1 local_d8 [32];
  longlong local_b8;
  undefined1 local_98 [88];
  
  cVar6 = (**(code **)(param_1[0x1b1] + 0x110))(param_1 + 0x1b1,3);
  if (cVar6 == '\0') {
    return 0;
  }
  uVar10 = 0;
  local_res20 = 0;
  plVar7 = (longlong *)(**(code **)(param_1[0x1b0] + 0x18))();
  lVar8 = FUN_140c46b40(param_1);
  if (lVar8 == 0) {
    return local_res20;
  }
  if (plVar7 == (longlong *)0x0) {
    return local_res20;
  }
  plVar15 = (longlong *)param_1[0x3a3];
  if ((plVar15 == (longlong *)0x0) || ((longlong *)plVar15[0x39a] != param_1)) {
    plVar15 = param_1;
  }
  plVar14 = param_1 + 0x2a3;
  cVar6 = FUN_140e96340(plVar14);
  if ((cVar6 != '\0') && (lVar9 = FUN_140e7eef0(plVar14,0), lVar9 != 0)) {
    uVar10 = FUN_140e83520(plVar14,lVar9);
  }
  FUN_142ffa6f0(plVar7,local_res10,uVar10);
  if (local_res10[0] == -1) {
    return local_res20;
  }
  lVar9 = param_1[0x9a];
  if (lVar9 == 0) {
    fVar16 = 0.0;
  }
  else {
    auVar17._0_4_ = *(uint *)(lVar9 + 0x230) & _DAT_14686bda0;
    auVar17._4_4_ = *(uint *)(lVar9 + 0x234) & uRam000000014686bda4;
    auVar17._8_4_ = *(uint *)(lVar9 + 0x238) & uRam000000014686bda8;
    auVar17._12_4_ = *(uint *)(lVar9 + 0x23c) & uRam000000014686bdac;
    auVar18._4_4_ = auVar17._8_4_;
    auVar18._0_4_ = auVar17._4_4_;
    auVar18._8_4_ = auVar17._0_4_;
    auVar18._12_4_ = auVar17._12_4_;
    auVar18 = minps(auVar17,auVar18);
    auVar4._4_4_ = auVar17._0_4_;
    auVar4._0_4_ = auVar17._8_4_;
    auVar4._8_4_ = auVar17._4_4_;
    auVar4._12_4_ = auVar17._12_4_;
    auVar18 = minps(auVar18,auVar4);
    local_res8 = CONCAT44(local_res8._4_4_,auVar18._0_4_);
    fVar16 = auVar18._0_4_ * *(float *)(lVar9 + 0x714);
  }
  (**(code **)(*plVar15 + 0x788))(plVar15,local_108);
  lVar9 = param_1[0x9a];
  if (lVar9 == 0) {
    pfVar11 = (float *)FRotator::Vector(local_108,local_f0);
    fVar1 = pfVar11[2];
    fVar2 = pfVar11[1];
    fVar3 = *pfVar11;
    pfVar11 = (float *)(**(code **)(*plVar15 + 0x790))(plVar15,local_98);
    local_110 = fVar16 * fVar1 + pfVar11[2];
    local_114 = fVar16 * fVar2 + pfVar11[1];
    local_118 = fVar16 * fVar3 + *pfVar11;
  }
  else {
    local_118 = *(float *)(lVar9 + 0x220);
    local_114 = *(float *)(lVar9 + 0x224);
    lVar9 = (**(code **)(*plVar15 + 0x790))(plVar15);
    local_110 = *(float *)(lVar9 + 8);
    pfVar11 = (float *)FRotator::Vector(local_108,local_f0);
    local_118 = local_118 + fVar16 * *pfVar11;
    local_114 = local_114 + fVar16 * pfVar11[1];
    local_110 = local_110 + fVar16 * pfVar11[2];
  }
  FUN_143004da0(plVar7,local_res18,lVar8);
  bVar5 = local_res18[0] != -1 && local_res10[0] != local_res18[0];
  lVar8 = 0;
  local_f8 = 0;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar9 = *(longlong *)(DAT_146b33f38 + 0x58);
  if ((lVar9 != 0) && (*(longlong *)(lVar9 + 800) != 0)) {
    lVar12 = FUN_1413c0f50();
    for (lVar13 = *(longlong *)(lVar9 + 800); lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x30)) {
      if (lVar13 == lVar12) {
        lVar8 = 0;
        if (*(longlong *)(lVar9 + 800) != 0) {
          local_res8 = 0;
          cVar6 = FUN_140e96340(plVar14);
          if ((cVar6 != '\0') && (lVar8 = FUN_140e7eef0(plVar14,0), lVar8 != 0)) {
            local_res8 = FUN_140e83520(plVar14,lVar8);
          }
          if (*(longlong *)(lVar9 + 800) == 0) goto LAB_140c4a922;
          lVar13 = FUN_1413c0f50();
          lVar8 = *(longlong *)(lVar9 + 800);
          lVar9 = lVar8;
          goto joined_r0x000140c4a908;
        }
        break;
      }
    }
  }
  goto LAB_140c4a982;
joined_r0x000140c4a908:
  if (lVar9 == 0) goto LAB_140c4a922;
  if (lVar9 == lVar13) goto LAB_140c4a928;
  lVar9 = *(longlong *)(lVar9 + 0x30);
  goto joined_r0x000140c4a908;
LAB_140c4a922:
  lVar8 = 0;
LAB_140c4a928:
  lVar9 = 0;
  uVar10 = FUN_140c428a0(param_1);
  in_stack_fffffffffffffed8 = 0;
  lVar8 = FUN_140e80ad0(uVar10,lVar8,local_res8,&local_f8,0);
  if (lVar8 != 0) {
    cVar6 = FUN_140e96340(plVar14);
    if ((cVar6 != '\0') && (lVar13 = FUN_140e7eef0(plVar14,0), lVar13 != 0)) {
      lVar9 = FUN_140e83520(plVar14,lVar13);
    }
    if (lVar8 != lVar9) goto LAB_140c4a982;
  }
  bVar5 = false;
LAB_140c4a982:
  plVar14 = (longlong *)(**(code **)(plVar15[0x1b1] + 0xf0))(plVar15 + 0x1b1,0);
  if (plVar14 != (longlong *)0x0) {
    if (*(char *)((longlong)plVar14 + 0x62c) == '\0') {
      *(undefined1 *)(plVar15 + 0x278) = 0;
      (**(code **)(*plVar14 + 0x8c0))(plVar14,0,1);
      local_res8 = CONCAT71(local_res8._1_7_,2);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (plVar15 + 0x206,&local_res8);
    }
    FUN_140e91030(plVar15 + 0x2a3,0,0);
    FUN_140e91ca0(plVar15 + 0x2a3,0,0,0);
    (**(code **)(*plVar14 + 0x820))(plVar14,0,1);
    (**(code **)(*plVar14 + 0x8a8))(plVar14);
    (**(code **)(*plVar14 + 0x8e8))(plVar14);
  }
  cVar6 = (**(code **)(*param_1 + 0x778))(param_1);
  if (cVar6 != '\0') {
    FUN_142fde510(local_d8);
    cVar6 = FUN_142ffa4f0(plVar7,local_res10,local_d8);
    if ((cVar6 != '\0') && (cVar6 = (**(code **)(*plVar7 + 0x478))(plVar7,local_d8), cVar6 == '\0'))
    {
      lVar8 = param_1[0x138];
      if (lVar8 != 0) {
        lVar9 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_98,L"Cannot Drop",L"OakCharacter",L"CannotDropMessage");
          FUN_140cf8780(lVar8,uVar10);
        }
      }
      return 0;
    }
  }
  if ((char)param_1[0x25] == '\x03') {
    local_res20 = FUN_142ff0dc0();
  }
  else {
    FUN_143025940(plVar7,local_res10,&local_118,local_108);
  }
  if (lVar8 == 0) {
    if (bVar5) {
      FUN_142fde510(local_d8);
      FUN_142ffa4f0(plVar7,local_res18,local_d8);
      if (local_b8 != 0) {
        lVar8 = FUN_1430b3b80();
        if ((*(int *)(*(longlong *)(local_b8 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(local_b8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        lVar8 = local_b8;
        if (bVar5) goto LAB_140c4abf4;
      }
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
    }
  }
  else {
    lVar9 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) {
      lVar8 = 0;
    }
  }
LAB_140c4abf4:
  if (*(byte *)(plVar15 + 0x25) < 3) {
    FUN_1413f89f0();
  }
  else {
    FUN_140c578a0(plVar15,lVar8,0,0,in_stack_fffffffffffffed8 & 0xffffffffffffff00);
  }
  return local_res20;
}



// FUNCTION 140c4ac20 FUN_140c4ac20 body=118 status=ok
// SIG undefined FUN_140c4ac20(void)

undefined8 FUN_140c4ac20(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_140e96340(param_1 + 0x2a3);
  if (cVar1 != '\0') {
    lVar2 = FUN_140e7eef0(param_1 + 0x2a3,0);
    if (lVar2 != 0) {
      lVar2 = FUN_140e83520(param_1 + 0x2a3,lVar2);
      if (lVar2 != 0) {
        cVar1 = (**(code **)(*param_1 + 0xa60))(param_1);
        if ((cVar1 != '\0') || ((char)param_1[0x278] != '\0')) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140c4acb0 FUN_140c4acb0 body=966 status=ok
// SIG undefined FUN_140c4acb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c4acb0(longlong *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_198 [32];
  uint local_178;
  undefined8 *local_170;
  undefined1 local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined1 local_138;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong *local_108;
  int local_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if (lVar5 != 0) {
    if (param_2 != 0) {
      local_e0 = 0;
      lVar5 = param_1[0x2d];
      local_e8 = 0;
      if (lVar5 == 0) {
        local_128 = _DAT_1468b5d90;
        local_120 = DAT_1468b5d98;
      }
      else {
        local_128 = *(undefined8 *)(lVar5 + 0x220);
        local_120 = *(undefined4 *)(lVar5 + 0x228);
      }
      local_110 = local_120;
      local_118 = local_128;
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      local_170 = &local_e8;
      local_178 = 0x42480000;
      FUN_1405a1e30(&local_108,uVar6,param_2,&local_118);
      FUN_140591060(&local_108);
    }
    if (param_3 != 0) {
      local_138 = 1;
      local_140 = 0;
      local_148 = 0;
      local_150 = 0;
      local_158 = 0;
      local_160 = 1;
      local_168 = 1;
      local_170 = (undefined8 *)CONCAT71(local_170._1_7_,4);
      local_178 = 0x42c80000;
      local_118 = 0;
      FUN_142db83d0(param_1,param_3,1,0x4110000041800000);
      local_108 = (longlong *)0x0;
      local_100 = 0;
      FWeakObjectPtr::operator=(&local_e8,param_3);
      FWeakObjectPtr::operator=(&local_118,param_1);
      uVar1 = (undefined4)local_118;
      uVar2 = local_118._4_4_;
      uVar3 = (undefined4)local_e8;
      uVar4 = local_e8._4_4_;
      plVar7 = (longlong *)FMemory::Realloc(0,0x40,0);
      if (plVar7 == (longlong *)0x0) {
        if (((local_100 != 0) && (local_108 != (longlong *)0x0)) &&
           ((**(code **)(*local_108 + 0x28))(local_108,0), local_108 != (longlong *)0x0)) {
          local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
        }
      }
      else {
        *plVar7 = (longlong)&PTR_GetPoolName_144358830;
        *(undefined4 *)(plVar7 + 1) = uVar1;
        *(undefined4 *)((longlong)plVar7 + 0xc) = uVar2;
        *(undefined4 *)(plVar7 + 2) = uVar3;
        *(undefined4 *)((longlong)plVar7 + 0x14) = uVar4;
        plVar7[3] = (longlong)param_1;
        plVar7[4] = param_3;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar7[6] = lVar5;
        *plVar7 = (longlong)&PTR_GetPoolName_144358878;
        FUN_140c3bd60(plVar7,&local_108);
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        lVar5 = FMemory::Realloc(plVar7,0,0);
        if (lVar5 != 0) {
          FMemory::Free(lVar5);
        }
      }
      local_128 = 0;
      lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar5 + 400) == 0) {
        uVar6 = *(undefined8 *)(lVar5 + 0x3f8);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
      }
      local_d8 = 0;
      local_d0 = 0;
      if ((local_100 != 0) && (local_108 != (longlong *)0x0)) {
        (**(code **)(*local_108 + 0x30))(local_108,&local_d8);
      }
      FWeakObjectPtr::operator=(local_c8,0);
      local_170 = (undefined8 *)CONCAT44(local_170._4_4_,0xbf800000);
      local_178 = local_178 & 0xffffff00;
      local_c0 = 0;
      local_88 = (longlong *)0x0;
      local_78 = 0;
      local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar6,&local_128,&local_d8,param_4);
      if (local_78 != 0) {
        plVar7 = local_a8;
        if (local_88 != (longlong *)0x0) {
          plVar7 = local_88;
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7,0);
        }
      }
      if (local_88 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
      if (local_100 != 0) {
        if (local_108 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*local_108 + 0x28))(local_108,0);
        if (local_108 != (longlong *)0x0) {
          local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
        }
        local_100 = 0;
      }
      if (local_108 != (longlong *)0x0) {
        FMemory::Free(local_108);
      }
    }
  }
  return;
}



// FUNCTION 140c4b080 FUN_140c4b080 body=185 status=ok
// SIG undefined FUN_140c4b080(void)

longlong FUN_140c4b080(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *local_18;
  int local_10;
  
  if (param_1 == 0) {
    return 0;
  }
  UWorld::GetPlayerControllerIterator(param_1,&local_18);
  for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
    lVar3 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
    if (((lVar3 != 0) &&
        (((*(longlong *)(lVar3 + 0x10) == 0 ||
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x18) != DAT_14686c1f0)) &&
         (*(longlong *)(lVar3 + 0x460) != 0)))) &&
       (plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x460) + 0x4b8), plVar1 != (longlong *)0x0)) {
      cVar2 = (**(code **)(*plVar1 + 0x20))();
      if (cVar2 != '\0') {
        cVar2 = APlayerController::IsPrimaryPlayer(lVar3);
        if (cVar2 != '\0') {
          return lVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140c4b140 FUN_140c4b140 body=127 status=ok
// SIG undefined FUN_140c4b140(void)

void FUN_140c4b140(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*(longlong *)(param_1 + 0x468) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x468) + 0x30), lVar3 != 0)) {
    iVar2 = *(int *)(param_1 + 0x498);
    uVar4 = *(undefined8 *)(lVar3 + 0x218);
    uVar5 = *(undefined8 *)(lVar3 + 0x220);
    *(int *)(param_1 + 0x498) = iVar2 + 1;
    if (*(int *)(param_1 + 0x49c) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 0x490),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x490);
    puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x14);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    *(undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x14) = 0;
  }
  return;
}



// FUNCTION 140c4b1c0 FUN_140c4b1c0 body=1191 status=ok
// SIG undefined FUN_140c4b1c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c4b1c0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  bool bVar11;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  uint local_100;
  longlong *local_f8;
  int local_f0;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_e0 = 0;
  FUN_142dd4280();
  if ((char)param_1[0x49] == '\0') {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x8a) != '\0') {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x8d) == '\0') {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar8 = *(longlong *)(DAT_146b33f38 + 0x90);
  lVar5 = UWidgetComponent::GetRenderTarget(param_2);
  if (lVar5 == 0) {
    return;
  }
  lVar6 = FUN_14142a560();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (!bVar11) {
    return;
  }
  if (lVar8 == 0) {
    return;
  }
  if (*(longlong *)(lVar8 + 0xf50) == 0) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14686c364) && (_Init_thread_header(&DAT_14686c364), DAT_14686c364 == -1))
  {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146299560,0);
    FGenericPlatformString::Memcpy(DAT_146299560,L"Challenge_HiJack",0x22);
    atexit((_func_5014 *)&LAB_143e4f780);
    _Init_thread_footer(&DAT_14686c364);
  }
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  bVar11 = false;
  if ((lVar6 != 0) && (bVar11 = false, param_1[2] != 0)) {
    local_d8 = *(undefined8 *)(param_1[2] + 0x18);
    puVar10 = &DAT_143f3eda8;
    if (DAT_146299568 != 0) {
      puVar10 = DAT_146299560;
    }
    bVar11 = true;
    FName::ToString(&local_d8,&local_f8);
    cVar4 = FString::StartsWith(&local_f8,puVar10,1);
    if (cVar4 != '\0') {
      bVar2 = true;
      goto LAB_140c4b346;
    }
  }
  bVar2 = false;
LAB_140c4b346:
  if ((bVar11) && (local_f8 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if (bVar2) {
    FWeakObjectPtr::operator=(&local_d0,lVar5);
    FWeakObjectPtr::operator=(&local_c8,lVar8);
    FWeakObjectPtr::operator=(&local_d8,param_1[2]);
    uVar3 = (undefined4)local_d8;
    local_c0 = 0;
    local_f8 = (longlong *)0x0;
    local_f0 = 0;
    local_e0 = local_d8._4_4_;
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 == (longlong *)0x0) {
      if (((local_f0 != 0) && (local_f8 != (longlong *)0x0)) &&
         ((**(code **)(*local_f8 + 0x28))(local_f8,0), local_f8 != (longlong *)0x0)) {
        local_f8 = (longlong *)FMemory::Realloc(local_f8,0,0);
      }
    }
    else {
      *plVar7 = (longlong)&PTR_GetPoolName_1443587a0;
      *(undefined4 *)(plVar7 + 1) = local_d0;
      *(undefined4 *)((longlong)plVar7 + 0xc) = local_cc;
      *(undefined4 *)(plVar7 + 2) = local_c8;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_c4;
      *(undefined4 *)(plVar7 + 3) = uVar3;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = local_e0;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar8;
      *plVar7 = (longlong)&PTR_GetPoolName_1443587e8;
      FUN_140c3bdd0(plVar7,&local_f8);
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      lVar8 = FMemory::Realloc(plVar7,0,0);
      if (lVar8 != 0) {
        FMemory::Free(lVar8);
      }
    }
    lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar8 + 400) == 0) {
      uVar9 = *(undefined8 *)(lVar8 + 0x3f8);
    }
    else {
      uVar9 = *(undefined8 *)(*(longlong *)(lVar8 + 400) + 0x90);
    }
    local_b8 = 0;
    local_b0 = 0;
    if ((local_f0 != 0) && (local_f8 != (longlong *)0x0)) {
      (**(code **)(*local_f8 + 0x30))(local_f8,&local_b8);
    }
    FWeakObjectPtr::operator=(local_a8,0);
    local_100 = 0xbf800000;
    local_108 = local_108 & 0xffffffffffffff00;
    local_a0 = 0;
    local_68 = (longlong *)0x0;
    local_58 = 0;
    local_98 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar9,&local_c0,&local_b8,0x3f000000);
    if (local_58 != 0) {
      plVar7 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar7 = local_68;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
    if (local_f0 != 0) {
      if (local_f8 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_f8 + 0x28))(local_f8,0);
      if (local_f8 != (longlong *)0x0) {
        local_f8 = (longlong *)FMemory::Realloc(local_f8,0,0);
      }
      local_f0 = 0;
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free(local_f8);
    }
  }
  else {
    lVar6 = param_1[2];
    lVar1 = *(longlong *)(lVar8 + 0xf50);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (&local_f8,L"Crew Challenge Complete!",L"OakChallenges",
                       L"CrewChallengeComplete");
    local_100 = local_100 & 0xffffff00;
    local_108 = lVar6;
    FUN_140c70250(lVar5,*(undefined8 *)(lVar8 + 0xf50),uVar9,*(undefined4 *)(lVar1 + 0x48));
  }
  return;
}



// FUNCTION 140c4b670 FUN_140c4b670 body=228 status=ok
// SIG undefined FUN_140c4b670(void)

void FUN_140c4b670(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int local_res10 [6];
  
  if ((((param_2 != 0) && (lVar6 = FUN_140b27500(param_2), lVar6 != 0)) &&
      (*(longlong *)(param_1 + 0x468) != 0)) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x468) + 0x30), lVar3 != 0)) {
    plVar1 = (longlong *)(lVar3 + 0x1c8);
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(plVar1,local_res10,lVar6);
    puVar8 = (undefined8 *)0x0;
    if (local_res10[0] != -1) {
      puVar8 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *plVar1);
    }
    puVar7 = puVar8 + 1;
    if (puVar8 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    if (puVar7 != (undefined8 *)0x0) {
      iVar2 = *(int *)(param_1 + 0x498);
      uVar4 = *puVar7;
      uVar5 = puVar7[1];
      *(int *)(param_1 + 0x498) = iVar2 + 1;
      if (*(int *)(param_1 + 0x49c) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x490,iVar2);
      }
      lVar6 = *(longlong *)(param_1 + 0x490);
      puVar8 = (undefined8 *)(lVar6 + (longlong)iVar2 * 0x14);
      *puVar8 = uVar4;
      puVar8[1] = uVar5;
      *(undefined4 *)(lVar6 + 0x10 + (longlong)iVar2 * 0x14) = 0;
    }
  }
  return;
}



// FUNCTION 140c4b760 FUN_140c4b760 body=127 status=ok
// SIG undefined FUN_140c4b760(void)

void FUN_140c4b760(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*(longlong *)(param_1 + 0x468) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x468) + 0x30), lVar3 != 0)) {
    iVar2 = *(int *)(param_1 + 0x498);
    uVar4 = *(undefined8 *)(lVar3 + 0x228);
    uVar5 = *(undefined8 *)(lVar3 + 0x230);
    *(int *)(param_1 + 0x498) = iVar2 + 1;
    if (*(int *)(param_1 + 0x49c) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 0x490),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x490);
    puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x14);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    *(undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x14) = 0;
  }
  return;
}



// FUNCTION 140c4b7e0 FUN_140c4b7e0 body=75 status=ok
// SIG undefined FUN_140c4b7e0(void)

void FUN_140c4b7e0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)(param_1 + -0xd88);
  lVar2 = (**(code **)(*plVar1 + 0xa58))(plVar1);
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*plVar1 + 0xa58))(plVar1);
    FUN_142397540(uVar3,param_2,1);
  }
  return;
}



// FUNCTION 140c4b830 FUN_140c4b830 body=116 status=ok
// SIG undefined FUN_140c4b830(void)

void FUN_140c4b830(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  if (0 < *(int *)(param_1 + 0x300)) {
    local_res8 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x2f8,&local_res8);
  }
  cVar1 = (**(code **)(*(longlong *)(param_1 + -0xd88) + 0x780))(param_1 + -0xd88);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*(longlong *)(param_1 + -0xd88) + 0x670))(param_1 + -0xd88);
    FUN_1430a22e0(uVar2,param_2,0);
  }
  return;
}



// FUNCTION 140c4b8b0 FUN_140c4b8b0 body=147 status=ok
// SIG undefined FUN_140c4b8b0(void)

void FUN_140c4b8b0(longlong param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686c4e0) {
    _Init_thread_header(&DAT_14686c4e0);
    if (DAT_14686c4e0 == -1) {
      FName::FName(&DAT_14686c4d8,L"Cloaked",1);
      _Init_thread_footer(&DAT_14686c4e0);
    }
  }
  if (*(longlong *)(param_1 + 0xe90) != 0) {
    ARawbotsBuildModePawn::AddToBuildPartList(*(longlong *)(param_1 + 0xe90),DAT_14686c4d8);
  }
                    /* WARNING: Could not recover jumptable at 0x000140c4b903. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0xe38) + 0x10))();
  return;
}



// FUNCTION 140c4b950 FUN_140c4b950 body=139 status=ok
// SIG undefined FUN_140c4b950(void)

void FUN_140c4b950(longlong param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686c4f0) {
    _Init_thread_header(&DAT_14686c4f0);
    if (DAT_14686c4f0 == -1) {
      FName::FName(&DAT_14686c4e8,L"Cloaked",1);
      _Init_thread_footer(&DAT_14686c4f0);
    }
  }
  if (*(longlong *)(param_1 + 0xe90) != 0) {
    ARawbotsBuildModePawn::AddToBuildPartList(*(longlong *)(param_1 + 0xe90),DAT_14686c4e8);
    return;
  }
  return;
}



// FUNCTION 140c4b9e0 FUN_140c4b9e0 body=192 status=ok
// SIG undefined FUN_140c4b9e0(void)

void FUN_140c4b9e0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    lVar3 = FUN_14148cad0();
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
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar3 = FUN_142f6c9f0(uVar4);
      if (lVar3 != 0) {
        lVar5 = UWebSocketNetDriver::StaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_140c1b600(lVar3,param_1,lVar1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c4baa0 FUN_140c4baa0 body=56 status=ok
// SIG undefined FUN_140c4baa0(void)

void FUN_140c4baa0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + 0x7c0) != '\0') {
    FUN_140c33210(param_1,param_3);
  }
  if (*(char *)(param_1 + 0x7c2) == '\0') {
    FUN_142f56470(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140c4bae0 FUN_140c4bae0 body=22 status=ok
// SIG undefined FUN_140c4bae0(void)

void FUN_140c4bae0(longlong param_1)

{
  if (*(char *)(param_1 + 0x3b8) != '\0') {
    *(undefined1 *)(param_1 + 0x3b8) = 0;
    FUN_142f545a0();
    return;
  }
  return;
}



// FUNCTION 140c4bb00 FUN_140c4bb00 body=1702 status=ok
// SIG undefined FUN_140c4bb00(void)

void FUN_140c4bb00(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined8 uVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  plVar10 = param_1 + 0x98;
  lVar5 = FWeakObjectPtr::Get(plVar10);
  pwVar11 = (wchar_t *)0x0;
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0x99]) && (param_1[0x9a] != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar10,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x99) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(plVar10);
      if (lVar5 != 0) goto LAB_140c4bb97;
    }
  }
  else {
LAB_140c4bb97:
    lVar6 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ANewGameFlow::OnBusRideStarted",L"::");
      pwVar8 = pwVar11;
      while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar8 = pwVar2;
      }
      FName::FName(&local_res10,pwVar8 + 2,1);
      pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar10);
      if (pwVar8 == (wchar_t *)0x0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != (int)param_1[0x99]) && (param_1[0x9a] != 0)) {
          lVar5 = FUN_141796df0();
          FWeakObjectPtr::operator=(plVar10,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x99) = DAT_1464b56f4;
          }
          pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar10);
          if (pwVar8 != (wchar_t *)0x0) goto LAB_140c4bc92;
        }
LAB_140c4bcc8:
        pwVar8 = pwVar11;
      }
      else {
LAB_140c4bc92:
        lVar5 = UScrollBar::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
             ) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140c4bcc8;
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(pwVar8 + 0x2a8,param_1,local_res10);
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ANewGameFlow::OnBusRideFinished",L"::");
      pwVar8 = pwVar11;
      while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar8 = pwVar2;
      }
      FName::FName(&local_res18,pwVar8 + 2,1);
      pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar10);
      if (pwVar8 == (wchar_t *)0x0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != (int)param_1[0x99]) && (param_1[0x9a] != 0)) {
          lVar5 = FUN_141796df0();
          FWeakObjectPtr::operator=(plVar10,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x99) = DAT_1464b56f4;
          }
          pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar10);
          if (pwVar8 != (wchar_t *)0x0) goto LAB_140c4bda2;
        }
LAB_140c4bdd8:
        pwVar8 = pwVar11;
      }
      else {
LAB_140c4bda2:
        lVar5 = UScrollBar::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
             ) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140c4bdd8;
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(pwVar8 + 0x2c0,param_1,local_res18);
      pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar10);
      if (pwVar8 == (wchar_t *)0x0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != (int)param_1[0x99]) && (param_1[0x9a] != 0)) {
          lVar5 = FUN_141796df0();
          FWeakObjectPtr::operator=(plVar10,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x99) = DAT_1464b56f4;
          }
          pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar10);
          if (pwVar8 != (wchar_t *)0x0) goto LAB_140c4be65;
        }
LAB_140c4be9b:
        pwVar8 = pwVar11;
      }
      else {
LAB_140c4be65:
        lVar5 = UScrollBar::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
             ) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140c4be9b;
      }
      SVirtualWindow::SetIsFocusable(pwVar8,1);
    }
  }
  plVar10 = param_1 + 0x9d;
  lVar5 = FWeakObjectPtr::Get(plVar10);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == (int)param_1[0x9e]) || (param_1[0x9f] == 0)) goto LAB_140c4c055;
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(plVar10,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x9e) = DAT_1464b56f4;
    }
    lVar5 = FWeakObjectPtr::Get(plVar10);
    if (lVar5 == 0) goto LAB_140c4c055;
  }
  lVar6 = FUN_141410f00();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_140c4c055;
  pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar10);
  if (pwVar8 == (wchar_t *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0x9e]) && (param_1[0x9f] != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar10,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x9e) = DAT_1464b56f4;
      }
      pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar10);
      if (pwVar8 != (wchar_t *)0x0) goto LAB_140c4bfdb;
    }
LAB_140c4c047:
    pwVar8 = pwVar11;
  }
  else {
LAB_140c4bfdb:
    lVar5 = FUN_141410f00();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140c4c047;
    lVar5 = FUN_141410f00();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140c4c047;
  }
  FUN_142dd6360(param_1,pwVar8);
LAB_140c4c055:
  iVar4 = FUN_142235230(param_1);
  if (iVar4 < 3) {
    uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar10 = (longlong *)FUN_142d5ecc0(uVar9);
    if ((plVar10 != (longlong *)0x0) &&
       (plVar10 = (longlong *)(**(code **)(*plVar10 + 0x2b8))(plVar10), plVar10 != (longlong *)0x0))
    {
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  UWorld::GetPlayerControllerIterator(uVar9,&local_48);
  while( true ) {
    if ((local_40 < 0) || (*(int *)(local_48 + 8) <= local_40)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    plVar10 = (longlong *)FWeakObjectPtr::Get();
    if (plVar10 != (longlong *)0x0) {
      lVar5 = FUN_14145f370();
      if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) && (cVar3 = (**(code **)(*plVar10 + 0x768))(), cVar3 != '\0')) &&
         (plVar10 = (longlong *)plVar10[0xa5], plVar10 != (longlong *)0x0)) {
        local_38 = (undefined4)param_1[0xcc];
        uStack_34 = *(undefined4 *)((longlong)param_1 + 0x664);
        uStack_30 = (undefined4)param_1[0xcd];
        uStack_2c = *(undefined4 *)((longlong)param_1 + 0x66c);
        (**(code **)(*plVar10 + 0x850))
                  (plVar10,0x3f800000,0,*(undefined4 *)((longlong)param_1 + 0x674),&local_38,0,0);
      }
    }
    local_40 = local_40 + 1;
  }
  FUN_140c32620(param_1);
  return;
}



// FUNCTION 140c4c1b0 FUN_140c4c1b0 body=193 status=ok
// SIG undefined FUN_140c4c1b0(void)

void FUN_140c4c1b0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_18;
  int local_10;
  
  uVar3 = (**(code **)(*param_1 + 0x148))();
  UWorld::GetPlayerControllerIterator(uVar3,&local_18);
  while( true ) {
    if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    plVar4 = (longlong *)FWeakObjectPtr::Get();
    if (plVar4 != (longlong *)0x0) {
      lVar5 = FUN_14145f370();
      if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        cVar2 = (**(code **)(*plVar4 + 0x768))();
        if ((cVar2 != '\0') && ((longlong *)plVar4[0xa5] != (longlong *)0x0)) {
          (**(code **)(*(longlong *)plVar4[0xa5] + 0x858))();
        }
      }
    }
    local_10 = local_10 + 1;
  }
  return;
}



// FUNCTION 140c4c280 FUN_140c4c280 body=2375 status=ok
// SIG undefined FUN_140c4c280(void)

void FUN_140c4c280(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  undefined4 *puVar10;
  wchar_t *pwVar11;
  uint uVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_58 [8];
  longlong local_50;
  int local_48;
  
  FUN_140c49830();
  uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  UWorld::GetPlayerControllerIterator(uVar5,&local_50);
  pwVar14 = (wchar_t *)0x0;
  while( true ) {
    if ((local_48 < 0) || (*(int *)(local_50 + 8) <= local_48)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    lVar6 = FWeakObjectPtr::Get();
    if (lVar6 != 0) {
      lVar7 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (cVar3 = APlayerController::IsPrimaryPlayer(), cVar3 != '\0')) {
        lVar7 = param_1[0x8c];
        pwVar9 = pwVar14;
        pwVar11 = pwVar14;
        if (0 < *(int *)(lVar6 + 0xc18)) {
          do {
            plVar13 = (longlong *)(*(longlong *)(lVar6 + 0xc10) + (longlong)pwVar11);
            if ((((int)plVar13[1] != 0) &&
                (plVar8 = (longlong *)*plVar13, plVar8 != (longlong *)0x0)) &&
               (plVar8 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,local_58),
               *plVar8 == lVar7)) {
              if (((int)plVar13[1] != 0) &&
                 (plVar8 = (longlong *)*plVar13, plVar8 != (longlong *)0x0)) {
                (**(code **)(*plVar8 + 0x28))(plVar8,0);
                if (*plVar13 != 0) {
                  lVar7 = FMemory::Realloc(*plVar13,0,0);
                  *plVar13 = lVar7;
                }
                *(undefined4 *)(plVar13 + 1) = 0;
              }
              break;
            }
            uVar12 = (int)pwVar9 + 1;
            pwVar9 = (wchar_t *)(ulonglong)uVar12;
            pwVar11 = pwVar11 + 8;
          } while ((int)uVar12 < *(int *)(lVar6 + 0xc18));
        }
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar6 + 0xc10,0);
      }
    }
    local_48 = local_48 + 1;
  }
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x148), lVar6 != 0)) {
    lVar7 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      TBaseMulticastDelegate<void>::Remove(lVar6 + 0x620,param_1[0x8d]);
    }
  }
  uVar5 = FUN_1422312c0(param_1);
  FUN_1411d6cf0(uVar5);
  plVar13 = param_1 + 0xa2;
  lVar6 = FWeakObjectPtr::Get(plVar13);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0xa3]) && (local_res10 = 0, param_1[0xa4] != 0)) {
      lVar6 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar13,lVar6);
      if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0xa3) = DAT_1464b56f4;
      }
      lVar6 = FWeakObjectPtr::Get(plVar13);
      if (lVar6 != 0) goto LAB_140c4c4e0;
    }
  }
  else {
LAB_140c4c4e0:
    lVar7 = FUN_141410f00();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pwVar9 = (wchar_t *)FWeakObjectPtr::Get(plVar13);
      if (pwVar9 == (wchar_t *)0x0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != (int)param_1[0xa3]) && (local_res10 = 0, param_1[0xa4] != 0)) {
          lVar6 = FUN_141796df0();
          FWeakObjectPtr::operator=(plVar13,lVar6);
          if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0xa3) = DAT_1464b56f4;
          }
          pwVar9 = (wchar_t *)FWeakObjectPtr::Get(plVar13);
          if (pwVar9 != (wchar_t *)0x0) goto LAB_140c4c593;
        }
LAB_140c4c5ff:
        pwVar9 = pwVar14;
      }
      else {
LAB_140c4c593:
        lVar6 = FUN_141410f00();
        if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
             ) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140c4c5ff;
        lVar6 = FUN_141410f00();
        if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
             ) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140c4c5ff;
      }
      FUN_142dd6360(param_1,pwVar9);
    }
  }
  local_res10 = 0;
  if (param_1[0x9f] != 0) {
    plVar13 = param_1 + 0x9d;
    lVar6 = FUN_1405ec200(plVar13);
    if (lVar6 != 0) {
      lVar7 = FUN_141410f00();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        pwVar9 = (wchar_t *)FWeakObjectPtr::Get(plVar13);
        if (pwVar9 == (wchar_t *)0x0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != (int)param_1[0x9e]) && (local_res10 = 0, param_1[0x9f] != 0)) {
            lVar6 = FUN_141796df0();
            FWeakObjectPtr::operator=(plVar13,lVar6);
            if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(param_1 + 0x9e) = DAT_1464b56f4;
            }
            pwVar9 = (wchar_t *)FWeakObjectPtr::Get(plVar13);
            if (pwVar9 != (wchar_t *)0x0) goto LAB_140c4c6f3;
          }
LAB_140c4c75f:
          pwVar9 = pwVar14;
        }
        else {
LAB_140c4c6f3:
          lVar6 = FUN_141410f00();
          if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_140c4c75f;
          lVar6 = FUN_141410f00();
          if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_140c4c75f;
        }
        FUN_142dd6bd0(param_1,pwVar9);
      }
    }
  }
  local_res10 = 0;
  if (param_1[0x9a] == 0) {
LAB_140c4cbb0:
    FUN_140c4bb00(param_1);
    return;
  }
  plVar13 = param_1 + 0x98;
  lVar6 = FUN_1405ec200(plVar13);
  if (lVar6 == 0) goto LAB_140c4cbb0;
  lVar7 = UScrollBar::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_140c4cbb0;
  pwVar9 = (wchar_t *)FWeakObjectPtr::Get(plVar13);
  if (pwVar9 == (wchar_t *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0x99]) && (local_res10 = 0, param_1[0x9a] != 0)) {
      lVar6 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar13,lVar6);
      if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x99) = DAT_1464b56f4;
      }
      pwVar9 = (wchar_t *)FWeakObjectPtr::Get(plVar13);
      if (pwVar9 != (wchar_t *)0x0) goto LAB_140c4c84f;
    }
LAB_140c4c885:
    pwVar9 = pwVar14;
  }
  else {
LAB_140c4c84f:
    lVar6 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140c4c885;
  }
  puVar10 = (undefined4 *)FLinearColor::ToFColor(param_1 + 0xca,local_res8,1);
  *(undefined4 *)(pwVar9 + 0x2fc) = *puVar10;
  pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ANewGameFlow::OnBusRideStarted",L"::");
  pwVar9 = pwVar14;
  while (pwVar2 = pwVar11, pwVar2 != (wchar_t *)0x0) {
    pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar9 = pwVar2;
  }
  FName::FName(&local_res18,pwVar9 + 2,1);
  pwVar9 = (wchar_t *)FWeakObjectPtr::Get(plVar13);
  if (pwVar9 == (wchar_t *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0x99]) && (local_res10 = 0, param_1[0x9a] != 0)) {
      lVar6 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar13,lVar6);
      if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x99) = DAT_1464b56f4;
      }
      pwVar9 = (wchar_t *)FWeakObjectPtr::Get(plVar13);
      if (pwVar9 != (wchar_t *)0x0) goto LAB_140c4c96a;
    }
LAB_140c4c9a0:
    pwVar9 = pwVar14;
  }
  else {
LAB_140c4c96a:
    lVar6 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140c4c9a0;
  }
  FUN_14074ba20(pwVar9 + 0x2a8,param_1,FUN_140c4c1b0,local_res18);
  pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ANewGameFlow::OnBusRideFinished",L"::");
  pwVar9 = pwVar14;
  while (pwVar2 = pwVar11, pwVar2 != (wchar_t *)0x0) {
    pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
    pwVar9 = pwVar2;
  }
  FName::FName(&local_res20,pwVar9 + 2,1);
  pwVar9 = (wchar_t *)FWeakObjectPtr::Get(plVar13);
  if (pwVar9 == (wchar_t *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0x99]) && (local_res10 = 0, param_1[0x9a] != 0)) {
      lVar6 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar13,lVar6);
      if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x99) = DAT_1464b56f4;
      }
      pwVar9 = (wchar_t *)FWeakObjectPtr::Get(plVar13);
      if (pwVar9 != (wchar_t *)0x0) goto LAB_140c4ca84;
    }
LAB_140c4caba:
    pwVar9 = pwVar14;
  }
  else {
LAB_140c4ca84:
    lVar6 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140c4caba;
  }
  FUN_14074ba20(pwVar9 + 0x2c0,param_1,FUN_140c4bb00,local_res20);
  iVar4 = FUN_142235230(param_1);
  if (2 < iVar4) {
    return;
  }
  pwVar9 = (wchar_t *)FWeakObjectPtr::Get(plVar13);
  if (pwVar9 == (wchar_t *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0x99]) && (local_res10 = 0, param_1[0x9a] != 0)) {
      lVar6 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar13,lVar6);
      if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x99) = DAT_1464b56f4;
      }
      pwVar9 = (wchar_t *)FWeakObjectPtr::Get(plVar13);
      if (pwVar9 != (wchar_t *)0x0) goto LAB_140c4cb61;
    }
  }
  else {
LAB_140c4cb61:
    lVar6 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140c4cb9a;
  }
  pwVar9 = pwVar14;
LAB_140c4cb9a:
  FUN_1407ed900(pwVar9);
  return;
}



// FUNCTION 140c4cbd0 FUN_140c4cbd0 body=464 status=ok
// SIG undefined FUN_140c4cbd0(void)

void FUN_140c4cbd0(longlong param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_140c57f20();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686c490) {
    _Init_thread_header(&DAT_14686c490);
    if (DAT_14686c490 == -1) {
      FName::FName(&DAT_14686c488,"DeathMovementLock",1);
      _Init_thread_footer(&DAT_14686c490);
    }
  }
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    if (param_2 == '\0') {
      FUN_142dbb5d0(*(longlong *)(param_1 + 0xe68) + 0x8b0,&DAT_14686c488);
      FUN_142dbb5d0(*(longlong *)(param_1 + 0xe68) + 0x948,&DAT_14686c488);
    }
    else {
      FUN_142dafbc0();
      FUN_142dafbc0(*(longlong *)(param_1 + 0xe68) + 0x948,&DAT_14686c488);
      FUN_142d010e0(*(undefined8 *)(param_1 + 0xe68),0,1);
      thunk_FUN_142cfe5a0(*(undefined8 *)(param_1 + 0xe68));
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x490);
  if (lVar1 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (*(longlong *)(param_1 + 0x10e0) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x10e0) + 0x1070) != 0)) {
      lVar4 = FUN_140cff1b0(lVar1);
      if (lVar4 != 0) {
        if (param_2 == '\0') {
          FUN_142f00490(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x10e0) + 0x1070));
        }
        else {
          cVar3 = FUN_140cfdb70();
          if (cVar3 == '\0') {
            FUN_142f02570(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x10e0) + 0x1070),1);
          }
        }
      }
    }
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x10b0,0);
  return;
}



// FUNCTION 140c4cda0 FUN_140c4cda0 body=51 status=ok
// SIG undefined FUN_140c4cda0(void)

void FUN_140c4cda0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2290) != 0) {
    FUN_140736920(*(longlong *)(param_1 + 0x2290),0);
    FUN_14073c0a0(*(undefined8 *)(param_1 + 0x2290));
    return;
  }
  return;
}



// FUNCTION 140c4ce00 FUN_140c4ce00 body=452 status=ok
// SIG undefined FUN_140c4ce00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c4ce00(longlong *param_1,byte param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  undefined8 *local_290;
  undefined8 local_288;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 *local_268;
  undefined1 *puStack_260;
  undefined8 local_258;
  longlong *local_250;
  undefined1 local_240 [8];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [520];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  iVar1 = FUN_142235230();
  if (iVar1 != 3) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = FUN_140a05e30(uVar2);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x78) != *(int *)(lVar3 + 0xa4)) {
        lVar4 = *(longlong *)(lVar3 + 0xb0);
        if (*(longlong *)(lVar3 + 0xb0) == 0) {
          lVar4 = lVar3 + 0xa8;
        }
        iVar1 = *(int *)(lVar4 + ((longlong)*(int *)(lVar3 + 0xb8) - 1U & (ulonglong)param_2) * 4);
        if (iVar1 != -1) {
          do {
            pbVar5 = (byte *)((longlong)iVar1 * 0x20 + *(longlong *)(lVar3 + 0x70));
            if (*pbVar5 == param_2) {
              if (iVar1 != -1) goto LAB_140c4cec0;
              break;
            }
            iVar1 = *(int *)(pbVar5 + 0x18);
          } while (iVar1 != -1);
        }
      }
      pbVar5 = (byte *)0x0;
LAB_140c4cec0:
      pbVar6 = pbVar5 + 8;
      if (pbVar5 == (byte *)0x0) {
        pbVar6 = (byte *)0x0;
      }
      if (pbVar6 != (byte *)0x0) {
        if (*(longlong *)pbVar6 != 0) {
          local_278 = 0;
          local_270 = 0;
          local_258 = *(undefined8 *)(lVar3 + 0xc0);
          local_268 = &local_258;
          puStack_260 = local_240;
          local_250 = param_1;
          local_238 = local_268;
          uStack_230 = puStack_260;
          FUN_1405e1200(local_228,&local_238);
          local_278 = CONCAT44(0xffffffff,(undefined4)local_278);
          local_270 = 0;
          uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
          local_288 = 0;
          local_290 = &local_278;
          local_298 = 0;
          FUN_1405f8040(&local_268,uVar2,*(longlong *)pbVar6,local_228);
          if (local_20 != 0) {
            FMemory::Free();
          }
        }
        if (*(longlong *)(pbVar6 + 8) != 0) {
          FUN_1413f8690(param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c4cfd0 FUN_140c4cfd0 body=69 status=ok
// SIG undefined FUN_140c4cfd0(void)

void FUN_140c4cfd0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_142315c00();
  if (*(longlong *)(param_1 + 0x948) != 0) {
    thunk_FUN_142ccc2e0(*(longlong *)(param_1 + 0x948),param_2,param_3);
  }
  return;
}



// FUNCTION 140c4d020 FUN_140c4d020 body=129 status=ok
// SIG undefined FUN_140c4d020(void)

void FUN_140c4d020(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_140e96340(param_1 + 0x1518);
  if (cVar1 != '\0') {
    uVar3 = FUN_140e80600(param_1 + 0x1518);
    uVar2 = FUN_140e83450(param_1 + 0x1518,0);
    FUN_140e78770(param_1 + 0x1518,0,uVar3,uVar2);
  }
  if (0 < *(int *)(param_1 + 0x1150)) {
    FUN_142ca9970(param_1 + 0x1148,1);
    return;
  }
  return;
}



// FUNCTION 140c4d0b0 FUN_140c4d0b0 body=73 status=ok
// SIG undefined FUN_140c4d0b0(void)

void FUN_140c4d0b0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = UUGHUDGearBarUW::GetPrivateStaticClass();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x288))(plVar2);
  }
  *(undefined1 *)(param_2 + 0x6eb) = 1;
  return;
}



// FUNCTION 140c4d100 FUN_140c4d100 body=125 status=ok
// SIG undefined FUN_140c4d100(void)

void FUN_140c4d100(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = ULevelSequencePlayer::GetPrivateStaticClass();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x288))(plVar2);
  }
  uVar1 = FUN_1407a6820();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x288))(plVar2);
  }
  *(undefined1 *)(param_2 + 0x6eb) = 1;
  FUN_140b8bf10(param_1,DAT_14686c2f0);
  return;
}



// FUNCTION 140c4d180 FUN_140c4d180 body=130 status=ok
// SIG undefined FUN_140c4d180(void)

void FUN_140c4d180(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = ULevelSequencePlayer::GetPrivateStaticClass();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x280))(plVar2,0);
  }
  uVar1 = FUN_1407a6820();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x280))(plVar2,0);
  }
  *(undefined1 *)(param_2 + 0x6eb) = 0;
  FUN_140b8c280(param_1,DAT_14686c2f0);
  return;
}



// FUNCTION 140c4d210 FUN_140c4d210 body=130 status=ok
// SIG undefined FUN_140c4d210(void)

void FUN_140c4d210(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    uVar3 = UUGHUDGearBarUW::GetPrivateStaticClass();
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar3);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x280))(plVar4,0);
    }
    *(undefined1 *)(param_2 + 0x6eb) = 0;
    if (((*(longlong *)(param_2 + 0x6d8) != 0) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x6d8) + 0x650), lVar1 != 0)) &&
       (cVar2 = FUN_140eb27a0(lVar1,1), cVar2 != '\0')) {
      FUN_142d8f260(param_1,DAT_146871b50);
    }
  }
  return;
}



// FUNCTION 140c4d2a0 FUN_140c4d2a0 body=78 status=ok
// SIG undefined FUN_140c4d2a0(void)

void FUN_140c4d2a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_res18 [16];
  
  plVar1 = (longlong *)FName::FName(local_res18,&DAT_14433ad6c,1);
  if (param_3 == *plVar1) {
    lVar2 = FUN_142f5cb40(param_1);
    if (lVar2 != 0) {
      FUN_142f61df0(lVar2,0);
    }
  }
  return;
}



// FUNCTION 140c4d2f0 FUN_140c4d2f0 body=9 status=ok
// SIG undefined FUN_140c4d2f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c4d2f0(longlong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [48];
  undefined1 auStack_48 [48];
  ulonglong uStack_18;
  
  if ((char)param_2 == '\0') {
    return;
  }
  uStack_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  lVar7 = *(longlong *)(param_1 + 0x1518);
  param_2 = param_2 & 0xffffffffffffff00;
  bVar3 = false;
  lVar8 = (longlong)*(int *)(param_1 + 0x1520) * 0xf8 + lVar7;
  if (lVar7 != lVar8) {
    do {
      plVar5 = *(longlong **)(lVar7 + 8);
      if (plVar5 != (longlong *)0x0) {
        uVar6 = CONCAT71((int7)(param_2 >> 8),1);
        (**(code **)(*plVar5 + 0x918))(plVar5,uVar6);
        param_2 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        bVar3 = true;
      }
      lVar7 = lVar7 + 0xf8;
    } while (lVar7 != lVar8);
    if ((bVar3) && (*(longlong *)(param_1 + 0x948) != 0)) {
      plVar5 = (longlong *)
               (**(code **)(*(longlong *)(param_1 + 0xd88) + 0xf0))((longlong *)(param_1 + 0xd88),0)
      ;
      if (plVar5 != (longlong *)0x0) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x900))(plVar5,1,0);
        if (plVar5 != (longlong *)0x0) {
          cVar4 = (**(code **)(*plVar5 + 0x440))
                            (plVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x330));
          if (cVar4 != '\0') {
            lVar8 = (**(code **)(*plVar5 + 0x420))
                              (plVar5,auStack_48,
                               *(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x330),3);
            lVar7 = *(longlong *)(param_1 + 0x948);
            uVar1 = *(undefined4 *)(lVar8 + 0x14);
            uVar2 = *(undefined4 *)(lVar8 + 0x18);
            *(undefined4 *)(lVar7 + 0x43c) = *(undefined4 *)(lVar8 + 0x10);
            *(undefined4 *)(lVar7 + 0x440) = uVar1;
            *(undefined4 *)(lVar7 + 0x444) = uVar2;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c4d300 FUN_140c4d300 body=24 status=ok
// SIG undefined FUN_140c4d300(void)

void FUN_140c4d300(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x618) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_2 + 0x61c) = *(undefined4 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 140c4d330 FUN_140c4d330 body=231 status=ok
// SIG undefined FUN_140c4d330(void)

void FUN_140c4d330(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((char)param_1[0x25] == '\x03') {
    if (param_2 != 0) {
      param_1[0x3ad] = *(longlong *)(param_2 + 0x50);
      param_1[0x3ae] = *(longlong *)(param_2 + 0x270);
    }
    if (((char)param_1[0x1e8] == '\0') || ((int)param_1[0x1e2] < 1)) {
      if ((param_1[0x122] == 0) || ((*(byte *)(param_1[0x122] + 0x660) & 0x10) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000140c4d40a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xbc8))(param_1,1);
        return;
      }
    }
    else {
      lVar2 = (**(code **)(*param_1 + 0x148))();
      if (lVar2 != 0) {
        cVar1 = UWorld::IsInSeamlessTravel(lVar2);
        if (((cVar1 == '\0') && ((char)param_1[0x25] == '\x03')) &&
           (cVar1 = (char)param_1[0x1d8], 1 < (byte)(cVar1 - 3U))) {
          if (param_1[0x120] != 0) {
            FUN_142d01010(param_1[0x120],0,1);
            cVar1 = (char)param_1[0x1d8];
          }
          if (cVar1 != '\x03') {
            *(undefined1 *)(param_1 + 0x1d8) = 3;
                    /* WARNING: Could not recover jumptable at 0x000140c4d3e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(param_1[0x1b5] + 0x48))();
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c4d420 FUN_140c4d420 body=388 status=ok
// SIG undefined FUN_140c4d420(void)

void FUN_140c4d420(longlong *param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int local_res8 [2];
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2b0);
  }
  if (param_2 != (longlong *)0x0) {
    if (lVar5 != 0) {
      uVar3 = FUN_14301f8f0();
      lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
      if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x208) != 0)) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x208) + 0x1d8) == lVar5)) {
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x241,0);
      }
    }
    lVar5 = FUN_14149b100();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (param_2[0xff] == DAT_146b47938) {
        plVar6 = (longlong *)(**(code **)(*param_1 + 0x670))(param_1);
        if (plVar6 != (longlong *)0x0) {
          cVar2 = (**(code **)(*plVar6 + 0x768))(plVar6);
          if (cVar2 != '\0') {
            FUN_143076230(param_2,1);
          }
        }
      }
      lVar5 = FUN_140e7f970(param_1 + 0x286,param_3);
      if (lVar5 != 0) {
        FUN_14127e570(param_2,lVar5);
      }
    }
  }
  lVar5 = (**(code **)(param_1[0x1b0] + 0x18))();
  if (lVar5 != 0) {
    FUN_142ffa6f0(lVar5,local_res8,param_2);
    if (local_res8[0] != -1) {
      FUN_1430157c0(lVar5,local_res8,1);
    }
  }
  if ((param_3 != 0) && (*(char *)(param_3 + 0x38) != '\0')) {
    FUN_140c587c0(param_1);
  }
  return;
}



// FUNCTION 140c4d5b0 FUN_140c4d5b0 body=398 status=ok
// SIG undefined FUN_140c4d5b0(void)

void FUN_140c4d5b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (((*(char *)(param_1 + 0x128) == '\x03') &&
      (lVar2 = (**(code **)(*(longlong *)(param_1 + 0xd80) + 0x18))(), lVar2 != 0)) &&
     (plVar3 = (longlong *)FUN_142fffe20(lVar2,param_2), plVar3 != (longlong *)0x0)) {
    lVar2 = FUN_1430b3b80();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_14307df60(plVar3,param_1);
      if (*(char *)(param_1 + 0x128) == '\x03') {
        if (plVar3[0xff] == DAT_146b47938) {
          (**(code **)(*plVar3 + 0x310))(plVar3,0);
        }
        FUN_14306e700(plVar3);
      }
      lVar2 = param_1 + 0x1430;
      lVar4 = lVar2;
      if (*(longlong *)(param_1 + 0x1cd0) != 0) {
        lVar4 = FUN_140c428a0();
      }
      lVar4 = FUN_140e81f30(lVar4,param_3);
      if (lVar4 != 0) {
        if (*(longlong *)(param_1 + 0x1cd0) != 0) {
          lVar2 = FUN_140c428a0();
        }
        FUN_140e7b7b0(lVar2,lVar4,plVar3,1,0);
      }
      lVar2 = (**(code **)(*(longlong *)(param_1 + 0xd88) + 0xf0))((longlong *)(param_1 + 0xd88),0);
      if (lVar2 == param_3) {
        if (*(byte *)(param_1 + 0x128) < 3) {
          FUN_1413f89f0();
          return;
        }
        FUN_140c578a0(param_1,plVar3,0,1,1);
      }
    }
  }
  return;
}



// FUNCTION 140c4d740 FUN_140c4d740 body=451 status=ok
// SIG undefined FUN_140c4d740(void)

void FUN_140c4d740(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res8 [2];
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    plVar2 = (longlong *)FUN_140e810a0(param_1 + 0x1518,0);
    if (param_2 == plVar2) {
      if (*(byte *)(param_1 + 0x128) < 3) {
        FUN_1413f89f0();
      }
      else {
        FUN_140c578a0(param_1,0,0,0,0);
      }
    }
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2b0);
  }
  if (param_2 == (longlong *)0x0) goto LAB_140c4d89f;
  if (lVar5 != 0) {
    uVar3 = FUN_14301f8f0();
    lVar4 = (**(code **)(*param_2 + 0x628))(param_2,uVar3);
    if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x208) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x208) + 0x1d8) == lVar5)) {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x1218,0);
    }
  }
  lVar5 = FUN_14149b100();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_140c4d89f;
  if (param_2[0xff] != DAT_146b479a0) {
    lVar5 = FUN_140a63ba0(param_2);
    if (lVar5 != param_1) {
      lVar5 = FUN_140a63ba0(param_2);
      if (lVar5 != 0) goto LAB_140c4d87b;
    }
    FUN_143076230(param_2,0);
  }
LAB_140c4d87b:
  FUN_14127e570(param_2,0);
  if ((*(char *)(param_1 + 0x128) == '\x03') && (*(longlong **)(param_1 + 0x1cb0) == param_2)) {
    FUN_140c587c0(param_1);
  }
LAB_140c4d89f:
  lVar5 = (**(code **)(*(longlong *)(param_1 + 0xd80) + 0x18))();
  if (lVar5 != 0) {
    FUN_142ffa6f0(lVar5,local_res8,param_2);
    if (local_res8[0] != -1) {
      FUN_1430157c0(lVar5,local_res8,0);
    }
  }
  if ((param_3 != 0) && (*(char *)(param_3 + 0x38) != '\0')) {
    FUN_140c587c0(param_1);
  }
  return;
}



// FUNCTION 140c4d910 FUN_140c4d910 body=485 status=ok
// SIG undefined FUN_140c4d910(void)

void FUN_140c4d910(longlong *param_1,char param_2,char param_3,int param_4,undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong local_38 [4];
  
  if ((param_4 < 0) || ((int)param_1[0x3a] <= param_4)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    plVar2 = param_1 + 0x39;
    lVar1 = *(longlong *)((longlong)param_4 * 8 + *plVar2);
    if (lVar1 != 0) {
      lVar5 = FUN_142f71d80();
      lVar6 = lVar1;
      do {
        if (lVar6 == lVar5) {
          iVar7 = (int)param_1[0x3a];
          iVar4 = (iVar7 - param_4) + -1;
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)param_4 * 8 + *plVar2),
                       (void *)(*plVar2 + (longlong)(param_4 + 1) * 8),(longlong)iVar4 << 3);
            iVar7 = (int)param_1[0x3a];
          }
          *(int *)(param_1 + 0x3a) = iVar7 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar2);
          if ((((int)param_1[0x3a] == 0) || (param_2 == '\0')) || (param_3 != '\0')) {
            if (plVar2 != local_38) {
              if (*plVar2 != 0) {
                FMemory::Free();
              }
              *plVar2 = 0;
              param_1[0x3a] = 0;
            }
            param_1[0x3b] = 0;
            (**(code **)(*param_1 + 0x358))(param_1,0);
            lVar6 = FUN_140c45020(param_1);
            if (lVar6 != 0) {
              FUN_140e49430(lVar6 + 0x26f0,param_2,param_3);
            }
            plVar2 = (longlong *)param_1[0x23];
            if (plVar2 != (longlong *)0x0) {
              lVar6 = FUN_14145f370();
              if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
                  lVar6 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                FUN_140d13500(plVar2,0,DAT_14686c138);
                FUN_140d13830(plVar2,0,DAT_14686c138);
                lVar6 = (**(code **)(*plVar2 + 0xfa8))(plVar2);
                if ((lVar6 != 0) && (lVar6 = FUN_140c2d670(lVar6), lVar6 != 0)) {
                  FUN_142eb3990(lVar6);
                }
              }
            }
          }
          FUN_14146d880(param_1,param_2,lVar1,param_5);
          return;
        }
        lVar6 = *(longlong *)(lVar6 + 0x30);
      } while (lVar6 != 0);
    }
  }
  return;
}



// FUNCTION 140c4db00 FUN_140c4db00 body=521 status=ok
// SIG undefined FUN_140c4db00(void)

void FUN_140c4db00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong local_res10;
  undefined1 local_58 [8];
  longlong local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (lVar4 != 0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      FWeakObjectPtr::operator=(local_58,0);
      local_50 = 0;
      pwVar9 = _guard_xfg_dispatch_icall_nop
                         (L"&UOakPlayerMissionComponent::OnFastForwardDialogClicked",L"::");
      pwVar7 = (wchar_t *)0x0;
      while (pwVar6 = pwVar9, pwVar6 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
        pwVar7 = pwVar6;
      }
      FName::FName(&local_res10,pwVar7 + 2,1);
      FWeakObjectPtr::operator=(local_58,param_1);
      local_50 = local_res10;
      if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(local_58), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_50);
      }
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_30,
                          L"Would you like to skip missions you have already completed in another play session?"
                          ,L"OakPlayerMissionComponent",L"FastForwardText");
      uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_48,L"Fast Forward?",L"OakPlayerMissionComponent",
                          L"FastForwardHeader");
      FUN_1410f47a0(lVar4,uVar11,uVar10,local_58,1,0,0,0,0);
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
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)local_28 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c4dd20 FUN_140c4dd20 body=39 status=ok
// SIG undefined FUN_140c4dd20(void)

void FUN_140c4dd20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x460);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x1d8) == '\0')) && (*(longlong *)(lVar1 + 0x1c0) == 0)) {
    FUN_140ea86c0(lVar1,1);
    return;
  }
  return;
}



// FUNCTION 140c4dd50 FUN_140c4dd50 body=100 status=ok
// SIG undefined FUN_140c4dd50(void)

void FUN_140c4dd50(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar4 = *(undefined4 *)(lVar3 + 0x79c);
  }
  *(undefined4 *)(param_1 + 0x9d) = uVar4;
  uVar4 = param_2[1];
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  *(undefined4 *)((longlong)param_1 + 0x4d4) = *param_2;
  *(undefined4 *)(param_1 + 0x9b) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = uVar1;
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = param_2[4];
  FUN_140c5c100(param_1);
  return;
}



// FUNCTION 140c4ddc0 thunk_FUN_140c53500 body=5 status=ok
// SIG undefined thunk_FUN_140c53500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void thunk_FUN_140c53500(longlong param_1)

{
  int iVar1;
  int *piVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int *piVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_e8 [32];
  undefined1 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  longlong alStack_a0 [2];
  undefined4 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  code *pcStack_78;
  longlong alStack_68 [4];
  longlong *plStack_48;
  int iStack_38;
  ulonglong uStack_28;
  
  uStack_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar10 = *(longlong *)(param_1 + 0x118);
  if (lVar10 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if ((bVar15) && (*(char *)(lVar10 + 0x128) == '\x03')) {
      lVar7 = *(longlong *)(lVar10 + 0x848);
      if (lVar7 != 0) {
        lVar8 = FUN_1413ffe00();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar15 = false;
        }
        else {
          bVar15 = true;
        }
        if (bVar15) {
          pwVar9 = _guard_xfg_dispatch_icall_nop
                             (L"&UOakPlayerMissionComponent::OnWeaponChanged",L"::");
          pwVar4 = (wchar_t *)0x0;
          while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
            pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
            pwVar4 = pwVar3;
          }
          FName::FName(alStack_a0,pwVar4 + 2,1);
          plVar13 = (longlong *)(lVar7 + 0x1050);
          FWeakObjectPtr::operator=(&uStack_b8,0);
          uStack_b0 = 0;
          FWeakObjectPtr::operator=(&uStack_b8,param_1);
          uStack_b0 = alStack_a0[0];
          uStack_a8 = 0;
          if ((alStack_a0[0] != 0) && (lVar10 = FWeakObjectPtr::Get(&uStack_b8), lVar10 != 0)) {
            UObject::FindFunction(lVar10,uStack_b0);
          }
          piVar2 = (int *)*plVar13;
          iVar1 = *(int *)(lVar7 + 0x1058);
          piVar5 = piVar2;
          uVar11 = uStack_b8;
          do {
            uStack_b8 = (code *)uVar11;
            if (piVar5 == piVar2 + (longlong)iVar1 * 4) {
LAB_140c536ed:
              iVar1 = *(int *)(lVar7 + 0x1058);
              *(int *)(lVar7 + 0x1058) = iVar1 + 1;
              if (*(int *)(lVar7 + 0x105c) < iVar1 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar1);
              }
              puVar12 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar13);
              *puVar12 = (int)uStack_b8;
              puVar12[1] = uStack_b8._4_4_;
              *(longlong *)(puVar12 + 2) = uStack_b0;
LAB_140c53723:
              TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
              FUN_140c4efc0(param_1,0,0);
              return;
            }
            uStack_b8._0_4_ = (int)uVar11;
            if (((*piVar5 == (int)uStack_b8) &&
                (uStack_b8._4_4_ = (int)((ulonglong)uVar11 >> 0x20),
                bVar15 = piVar5[1] == uStack_b8._4_4_, bVar15)) ||
               ((cVar6 = FWeakObjectPtr::IsValid(piVar5), cVar6 == '\0' &&
                (cVar6 = FWeakObjectPtr::IsValid(&uStack_b8), cVar6 == '\0')))) {
              bVar15 = true;
            }
            else {
              bVar15 = false;
            }
            if ((bVar15) && (*(longlong *)(piVar5 + 2) == uStack_b0)) {
              bVar15 = true;
            }
            else {
              bVar15 = false;
            }
            if (bVar15) {
              if ((int)((longlong)piVar5 - (longlong)piVar2 >> 4) != -1) goto LAB_140c53723;
              goto LAB_140c536ed;
            }
            piVar5 = piVar5 + 4;
            uVar11 = uStack_b8;
          } while( true );
        }
      }
      uStack_b8 = FUN_140c53500;
      uStack_b0._0_4_ = 0;
      uVar11 = AActor::GetWorldTimerManager(lVar10);
      plVar13 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar13 != (longlong *)0x0) {
        *plVar13 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar13 + 1,param_1);
        *(int *)(plVar13 + 2) = (int)uStack_b8;
        *(int *)((longlong)plVar13 + 0x14) = uStack_b8._4_4_;
        *(undefined4 *)(plVar13 + 3) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_b0._4_4_;
        lVar10 = FDelegateHandle::GenerateNewID();
        plVar13[5] = lVar10;
        *plVar13 = (longlong)&PTR_FUN_143f77bd0;
      }
      alStack_a0[1] = 0;
      uStack_90 = 0;
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x30))(plVar13,alStack_a0 + 1);
      }
      FWeakObjectPtr::operator=(auStack_88,0);
      uStack_c0 = 0xbf800000;
      uStack_c8 = 0;
      uStack_80 = 0;
      plStack_48 = (longlong *)0x0;
      iStack_38 = 0;
      pcStack_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar11,param_1 + 0x1f0,alStack_a0 + 1,0x3dcccccd);
      if (iStack_38 != 0) {
        plVar14 = alStack_68;
        if (plStack_48 != (longlong *)0x0) {
          plVar14 = plStack_48;
        }
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x10))(plVar14,0);
        }
      }
      if (plStack_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(alStack_a0 + 1);
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x28))(plVar13,0);
        lVar10 = FMemory::Realloc(plVar13,0,0);
        if (lVar10 != 0) {
          FMemory::Free(lVar10);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c4ddd0 FUN_140c4ddd0 body=81 status=ok
// SIG undefined FUN_140c4ddd0(void)

void FUN_140c4ddd0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x10) == 2) {
    plVar1 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
    lVar2 = plVar1[0x1f];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar2 = plVar1[0x1f];
    }
    FUN_140c58b10(param_1,*(undefined4 *)(lVar2 + 0x28));
  }
  return;
}



// FUNCTION 140c4de30 FUN_140c4de30 body=158 status=ok
// SIG undefined FUN_140c4de30(void)

void FUN_140c4de30(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_res10;
  
  if ((int)param_1[2] == 0) {
    *(undefined4 *)(param_1 + 2) = 1;
  }
  else if ((int)param_1[2] != 1) {
    return;
  }
  local_res10 = param_2;
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 5,&local_res10);
  lVar1 = param_1[6];
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 1);
  if (cVar2 != '\0') {
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 1);
    lVar5 = (**(code **)(*plVar4 + 0x148))(plVar4);
    if ((lVar5 != 0) && (lVar5 = UWorld::GetGameState<APVPGameState>(lVar5), lVar5 != 0)) {
      iVar3 = *(int *)(lVar5 + 0x478);
      goto LAB_140c4deab;
    }
  }
  iVar3 = 0;
LAB_140c4deab:
  if ((int)lVar1 != iVar3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140c4dec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



// FUNCTION 140c4ded0 FUN_140c4ded0 body=143 status=ok
// SIG undefined FUN_140c4ded0(void)

void FUN_140c4ded0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_res10;
  
  if ((int)param_1[2] != 3) {
    return;
  }
  local_res10 = param_2;
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 9,&local_res10);
  lVar1 = param_1[10];
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 1);
  if (cVar2 != '\0') {
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 1);
    lVar5 = (**(code **)(*plVar4 + 0x148))(plVar4);
    if ((lVar5 != 0) && (lVar5 = UWorld::GetGameState<APVPGameState>(lVar5), lVar5 != 0)) {
      iVar3 = *(int *)(lVar5 + 0x478);
      goto LAB_140c4df3c;
    }
  }
  iVar3 = 0;
LAB_140c4df3c:
  if ((int)lVar1 != iVar3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140c4df55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



// FUNCTION 140c4df60 FUN_140c4df60 body=468 status=ok
// SIG undefined FUN_140c4df60(void)

void FUN_140c4df60(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res10;
  
  local_res10 = param_2;
  TArray<FName,FDefaultAllocator>::Remove(param_1 + 5,&local_res10);
  TArray<FName,FDefaultAllocator>::Remove(param_1 + 7,&local_res10);
  TArray<FName,FDefaultAllocator>::Remove(param_1 + 9,&local_res10);
  if ((int)param_1[2] == 1) {
    lVar5 = param_1[6];
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 1);
    if (cVar1 == '\0') {
LAB_140c4dfed:
      iVar2 = 0;
    }
    else {
      plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 1);
      lVar4 = (**(code **)(*plVar3 + 0x148))(plVar3);
      if (lVar4 == 0) goto LAB_140c4dfed;
      lVar4 = UWorld::GetGameState<APVPGameState>(lVar4);
      if (lVar4 == 0) goto LAB_140c4dfed;
      iVar2 = *(int *)(lVar4 + 0x478);
    }
    if ((int)lVar5 == iVar2) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  if ((int)param_1[2] != 2) goto LAB_140c4e0cf;
  lVar5 = param_1[8];
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 1);
  if (cVar1 == '\0') {
LAB_140c4e045:
    iVar2 = 0;
  }
  else {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 1);
    lVar4 = (**(code **)(*plVar3 + 0x148))(plVar3);
    if (lVar4 == 0) goto LAB_140c4e045;
    lVar4 = UWorld::GetGameState<APVPGameState>(lVar4);
    if (lVar4 == 0) goto LAB_140c4e045;
    iVar2 = *(int *)(lVar4 + 0x478);
  }
  if ((int)lVar5 == iVar2) {
    plVar3 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
    lVar5 = plVar3[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar5 = plVar3[0x1f];
    }
    if ((int)param_1[4] <= *(int *)(lVar5 + 0x2c)) {
      cVar1 = FUN_140c49200(param_1);
      if (cVar1 != '\0') goto LAB_140c4e0cf;
    }
    plVar3 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
    lVar5 = plVar3[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar5 = plVar3[0x1f];
    }
    FUN_140c58b10(param_1,*(undefined4 *)(lVar5 + 0x2c));
  }
  else {
    iVar2 = FUN_140c44a30(param_1);
    if (iVar2 == 1) {
      FUN_140c3afd0(param_1);
    }
  }
LAB_140c4e0cf:
  if ((int)param_1[2] == 3) {
    lVar5 = param_1[10];
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 1);
    iVar2 = 0;
    if (cVar1 != '\0') {
      plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 1);
      lVar4 = (**(code **)(*plVar3 + 0x148))(plVar3);
      iVar2 = 0;
      if (lVar4 != 0) {
        lVar4 = UWorld::GetGameState<APVPGameState>(lVar4);
        if (lVar4 != 0) {
          iVar2 = *(int *)(lVar4 + 0x478);
        }
      }
    }
    if ((int)lVar5 == iVar2) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return;
}



// FUNCTION 140c4e140 FUN_140c4e140 body=402 status=ok
// SIG undefined FUN_140c4e140(void)

void FUN_140c4e140(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  float local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = param_2;
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 7,&local_res10);
  lVar5 = param_1[8];
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 1);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 1);
    lVar4 = (**(code **)(*plVar3 + 0x148))(plVar3);
    if ((lVar4 != 0) && (lVar4 = UWorld::GetGameState<APVPGameState>(lVar4), lVar4 != 0)) {
      iVar2 = *(int *)(lVar4 + 0x478);
      goto LAB_140c4e1a6;
    }
  }
  iVar2 = 0;
LAB_140c4e1a6:
  if ((int)lVar5 != iVar2) {
    return;
  }
  cVar1 = FUN_140c478e0(param_1);
  if (cVar1 == '\0') {
    local_res8[0] = 0.0;
    if ((DAT_1468b6148 != 0) &&
       (FConfigCacheIni::GetFloat
                  (DAT_1468b6148,L"/Script/OakGame.NewGameFlow",L"FadeDuration",local_res8,
                   &DAT_1468e2410), 0.0 < local_res8[0])) {
      FUN_140c58b10(param_1,-((int)ROUND(-0.5 - local_res8[0] * 2.0) >> 1));
      return;
    }
    (**(code **)(*param_1 + 8))(param_1);
    return;
  }
  plVar3 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
  lVar5 = plVar3[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar5 = plVar3[0x1f];
  }
  if (((int)param_1[4] <= *(int *)(lVar5 + 0x2c)) && (cVar1 = FUN_140c49200(param_1), cVar1 != '\0')
     ) {
    return;
  }
  plVar3 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
  lVar5 = plVar3[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar5 = plVar3[0x1f];
  }
  FUN_140c58b10(param_1,*(undefined4 *)(lVar5 + 0x2c));
  return;
}



// FUNCTION 140c4e2e0 thunk_FUN_140c54800 body=5 status=ok
// SIG undefined thunk_FUN_140c54800(void)

void thunk_FUN_140c54800(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
  }
  FUN_140c3afd0(param_1);
  return;
}



// FUNCTION 140c4e300 FUN_140c4e300 body=82 status=ok
// SIG undefined FUN_140c4e300(void)

void FUN_140c4e300(longlong param_1)

{
  longlong lVar1;
  
  FUN_142cc9630();
  lVar1 = *(longlong *)(param_1 + 0x490);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x478) != 0) {
      FUN_140c51b80(param_1);
      FUN_140c5b220(param_1,0xffffffff);
      lVar1 = *(longlong *)(param_1 + 0x490);
    }
    if (lVar1 != 0) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x13c0) = 0;
  return;
}



// FUNCTION 140c4e390 FUN_140c4e390 body=63 status=ok
// SIG undefined FUN_140c4e390(void)

void FUN_140c4e390(longlong *param_1)

{
  undefined8 uVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((char)param_1[0x228] != '\0') {
    uVar1 = FUN_142e43690();
    uVar1 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    FUN_142d2ad60(uVar1);
    return;
  }
  return;
}



// FUNCTION 140c4e3f0 FUN_140c4e3f0 body=66 status=ok
// SIG undefined FUN_140c4e3f0(void)

void FUN_140c4e3f0(longlong param_1)

{
  FUN_142cc9740();
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FUN_140c51b80(param_1);
    if (*(longlong *)(param_1 + 0x490) != 0) {
      FUN_140c5b220(param_1,0xffffffff);
      return;
    }
  }
  return;
}



// FUNCTION 140c4e440 FUN_140c4e440 body=1575 status=ok
// SIG undefined FUN_140c4e440(void)

void FUN_140c4e440(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  wchar_t *pwVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined8 local_res10;
  undefined8 local_res18;
  
  if (((char)param_1[0xd3] != '\0') && (iVar4 = FUN_142235230(), iVar4 == 3)) {
    return;
  }
  plVar1 = param_1 + 0x8e;
  *(undefined1 *)(param_1 + 0xd3) = 1;
  lVar5 = FWeakObjectPtr::Get(plVar1);
  pwVar9 = (wchar_t *)0x0;
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0x8f]) && (param_1[0x90] != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar1,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x8f) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(plVar1);
      if (lVar5 != 0) goto LAB_140c4e4f6;
    }
  }
  else {
LAB_140c4e4f6:
    lVar6 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ANewGameFlow::OnRockNRollStarted",L"::");
      pwVar8 = pwVar9;
      while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar8 = pwVar3;
      }
      FName::FName(&local_res10,pwVar8 + 2,1);
      pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar1);
      if (pwVar8 == (wchar_t *)0x0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != (int)param_1[0x8f]) && (param_1[0x90] != 0)) {
          lVar5 = FUN_141796df0();
          FWeakObjectPtr::operator=(plVar1,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x8f) = DAT_1464b56f4;
          }
          pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar1);
          if (pwVar8 != (wchar_t *)0x0) goto LAB_140c4e5ec;
        }
LAB_140c4e622:
        pwVar8 = pwVar9;
      }
      else {
LAB_140c4e5ec:
        lVar5 = UScrollBar::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
             ) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140c4e622;
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(pwVar8 + 0x2a8,param_1,local_res10);
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ANewGameFlow::OnRockNRollFinished",L"::");
      pwVar8 = pwVar9;
      while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar8 = pwVar3;
      }
      FName::FName(&local_res18,pwVar8 + 2,1);
      pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar1);
      if (pwVar8 == (wchar_t *)0x0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != (int)param_1[0x8f]) && (param_1[0x90] != 0)) {
          lVar5 = FUN_141796df0();
          FWeakObjectPtr::operator=(plVar1,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x8f) = DAT_1464b56f4;
          }
          pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar1);
          if (pwVar8 != (wchar_t *)0x0) goto LAB_140c4e6fc;
        }
LAB_140c4e732:
        pwVar8 = pwVar9;
      }
      else {
LAB_140c4e6fc:
        lVar5 = UScrollBar::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
             ) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140c4e732;
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(pwVar8 + 0x2c0,param_1,local_res18);
    }
  }
  plVar1 = param_1 + 0x93;
  lVar5 = FWeakObjectPtr::Get(plVar1);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0x94]) && (param_1[0x95] != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar1,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x94) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(plVar1);
      if (lVar5 != 0) goto LAB_140c4e7c8;
    }
  }
  else {
LAB_140c4e7c8:
    lVar6 = FUN_141410f00();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar1);
      if (pwVar8 == (wchar_t *)0x0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != (int)param_1[0x94]) && (param_1[0x95] != 0)) {
          lVar5 = FUN_141796df0();
          FWeakObjectPtr::operator=(plVar1,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x94) = DAT_1464b56f4;
          }
          pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar1);
          if (pwVar8 != (wchar_t *)0x0) goto LAB_140c4e876;
        }
LAB_140c4e8e2:
        pwVar8 = pwVar9;
      }
      else {
LAB_140c4e876:
        lVar5 = FUN_141410f00();
        if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
             ) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140c4e8e2;
        lVar5 = FUN_141410f00();
        if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
             ) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140c4e8e2;
      }
      FUN_142dd6360(param_1,pwVar8);
    }
  }
  if (param_1[0xa4] == 0) goto LAB_140c4ea0b;
  plVar1 = param_1 + 0xa2;
  lVar5 = FUN_140c49a40(plVar1);
  if (lVar5 == 0) goto LAB_140c4ea0b;
  pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar1);
  if (pwVar8 == (wchar_t *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0xa3]) && (param_1[0xa4] != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar1,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0xa3) = DAT_1464b56f4;
      }
      pwVar8 = (wchar_t *)FWeakObjectPtr::Get(plVar1);
      if (pwVar8 != (wchar_t *)0x0) goto LAB_140c4e991;
    }
LAB_140c4e9fd:
    pwVar8 = pwVar9;
  }
  else {
LAB_140c4e991:
    lVar5 = FUN_141410f00();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140c4e9fd;
    lVar5 = FUN_141410f00();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140c4e9fd;
  }
  FUN_142dd6bd0(param_1,pwVar8);
LAB_140c4ea0b:
  FUN_140c51230(param_1);
  iVar4 = FUN_142235230(param_1);
  if (((iVar4 != 3) && (lVar5 = (**(code **)(*param_1 + 0x148))(param_1), lVar5 != 0)) &&
     (lVar5 = UWorld::GetGameState<APVPGameState>(lVar5), lVar5 != 0)) {
    *(undefined1 *)(lVar5 + 0x701) = 1;
  }
  FUN_140c52170(param_1);
  return;
}



// FUNCTION 140c4ea80 FUN_140c4ea80 body=10 status=ok
// SIG undefined FUN_140c4ea80(void)

void FUN_140c4ea80(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140c4ea83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8f0))();
  return;
}



// FUNCTION 140c4ea90 thunk_FUN_140c3bc90 body=5 status=ok
// SIG undefined thunk_FUN_140c3bc90(void)

void thunk_FUN_140c3bc90(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
LAB_140c3bcfd:
    if (*(char *)(param_1 + 0x3b8) != '\x01') {
      *(undefined1 *)(param_1 + 0x3b8) = 1;
      FUN_142f545a0(param_1);
    }
  }
  else {
    cVar1 = FUN_1407c14c0(param_2,0,1);
    if (cVar1 == '\0') {
      iVar2 = FUN_1407c9e50(param_2,0,1);
      iVar3 = FUN_1407c9f60(param_2);
      if (iVar2 <= iVar3) goto LAB_140c3bcfd;
    }
    if (*(char *)(param_1 + 0x3b8) != '\0') {
      *(undefined1 *)(param_1 + 0x3b8) = 0;
      FUN_142f545a0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140c4eaa0 FUN_140c4eaa0 body=112 status=ok
// SIG undefined FUN_140c4eaa0(void)

void FUN_140c4eaa0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_1407e2730();
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
      uVar4 = UCableComponent::GetAttachedActor(lVar1);
      goto LAB_140c4eafb;
    }
  }
  uVar4 = 0;
LAB_140c4eafb:
  FUN_140c3bc90(param_1,uVar4);
  return;
}



// FUNCTION 140c4eb10 FUN_140c4eb10 body=182 status=ok
// SIG undefined FUN_140c4eb10(void)

void FUN_140c4eb10(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1423165c0();
  lVar3 = *(longlong *)(param_1 + 0x9c0);
  if (lVar3 != 0) {
    lVar2 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140c4eb76;
  }
  lVar3 = 0;
LAB_140c4eb76:
  if (DAT_14686b358 == '\0') {
    FUN_140c18430(&DAT_14686b350);
  }
  FUN_140c29190(DAT_14686b350,lVar3);
  if (*(longlong *)(param_1 + 0x948) != 0) {
    thunk_FUN_142ccc2e0(*(longlong *)(param_1 + 0x948),param_2,param_3);
  }
  return;
}



// FUNCTION 140c4ebd0 FUN_140c4ebd0 body=317 status=ok
// SIG undefined FUN_140c4ebd0(void)

void FUN_140c4ebd0(longlong *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_38;
  int local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_2 ==
      -((int)ROUND(-0.5 - (*(float *)((longlong)param_1 + 0x674) +
                          *(float *)((longlong)param_1 + 0x674))) >> 1)) {
    uVar3 = (**(code **)(*param_1 + 0x148))();
    UWorld::GetPlayerControllerIterator(uVar3,&local_38);
    while( true ) {
      if ((local_30 < 0) || (*(int *)(local_38 + 8) <= local_30)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      plVar4 = (longlong *)FWeakObjectPtr::Get();
      if (plVar4 != (longlong *)0x0) {
        lVar5 = FUN_14145f370();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (((bVar1) && (cVar2 = (**(code **)(*plVar4 + 0x768))(), cVar2 != '\0')) &&
           (plVar4 = (longlong *)plVar4[0xa5], plVar4 != (longlong *)0x0)) {
          local_28 = (undefined4)param_1[0xca];
          uStack_24 = *(undefined4 *)((longlong)param_1 + 0x654);
          uStack_20 = (undefined4)param_1[0xcb];
          uStack_1c = *(undefined4 *)((longlong)param_1 + 0x65c);
          (**(code **)(*plVar4 + 0x850))
                    (plVar4,0,0x3f800000,*(undefined4 *)((longlong)param_1 + 0x674),&local_28,0,1);
        }
      }
      local_30 = local_30 + 1;
    }
  }
  return;
}



// FUNCTION 140c4ed10 FUN_140c4ed10 body=46 status=ok
// SIG undefined FUN_140c4ed10(void)

void FUN_140c4ed10(longlong *param_1)

{
  (**(code **)(*param_1 + 0x768))();
  if (param_1[0x129] != 0) {
    FUN_142ccc2e0();
    return;
  }
  return;
}



// FUNCTION 140c4ed40 FUN_140c4ed40 body=237 status=ok
// SIG undefined FUN_140c4ed40(void)

void FUN_140c4ed40(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  ulonglong in_stack_ffffffffffffffd8;
  longlong *local_18;
  undefined8 uStack_10;
  
  if (param_1[0x21d] == 0) {
    return;
  }
  if ((char)param_1[0x25] == '\x03') {
    uStack_10 = 0;
    local_18 = param_1;
    FUN_142c90ad0(param_1[0x21d] + 0x58,param_1 + 0x229,param_1,&local_18,
                  in_stack_ffffffffffffffd8 & 0xffffffffffffff00,local_res8);
  }
  cVar2 = (**(code **)(*param_1 + 0x778))(param_1);
  if (cVar2 == '\0') {
    return;
  }
  lVar4 = param_1[0x92];
  if (lVar4 != 0) {
    lVar3 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140c4edfb;
  }
  lVar4 = 0;
LAB_140c4edfb:
  FUN_142d408e0(*(undefined8 *)(param_1[0x21d] + 0x50),lVar4,0x3f800000,0,0);
  return;
}



// FUNCTION 140c4ee30 FUN_140c4ee30 body=145 status=ok
// SIG undefined FUN_140c4ee30(void)

void FUN_140c4ee30(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x1cd0) == 0) {
      param_1 = param_1 + 0x1430;
    }
    else {
      param_1 = FUN_140c428a0(*(longlong *)(param_1 + 0x1cd0));
    }
    lVar2 = FUN_140e7fd70(param_1,param_3);
    if (lVar2 != 0) {
      lVar3 = FUN_14149b100();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_14127e570(lVar2,param_2);
      }
    }
  }
  return;
}



// FUNCTION 140c4eed0 FUN_140c4eed0 body=128 status=ok
// SIG undefined FUN_140c4eed0(void)

void FUN_140c4eed0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x1cd0) == 0) {
    param_1 = param_1 + 0x1430;
  }
  else {
    param_1 = FUN_140c428a0(*(longlong *)(param_1 + 0x1cd0));
  }
  lVar2 = FUN_140e7fd70(param_1,param_3);
  if (lVar2 != 0) {
    lVar3 = FUN_14149b100();
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
      FUN_14127e570(lVar2,0);
      return;
    }
  }
  return;
}



// FUNCTION 140c4ef50 FUN_140c4ef50 body=97 status=ok
// SIG undefined FUN_140c4ef50(void)

void FUN_140c4ef50(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    lVar3 = FUN_14148cad0();
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
      FUN_140c33210(param_1,lVar1);
    }
  }
  return;
}



// FUNCTION 140c4efc0 FUN_140c4efc0 body=88 status=ok
// SIG undefined FUN_140c4efc0(void)

void FUN_140c4efc0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_142f5cb40();
  if (lVar2 != 0) {
    lVar3 = UWebSocketNetDriver::StaticClass();
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
      FUN_140c20f10(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140c4f020 FUN_140c4f020 body=879 status=ok
// SIG undefined FUN_140c4f020(void)

void FUN_140c4f020(longlong *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  ulonglong *local_28;
  undefined8 local_20;
  
  if ((char)param_1[0x25] == '\x03') {
    lVar6 = param_1[0x2a4];
    if (*(char *)((longlong)param_1 + 0x1ccd) == '\0') {
      puVar1 = (ulonglong *)param_1[0x2a3];
      if (puVar1 != puVar1 + (longlong)(int)lVar6 * 0x1f) {
        uVar17 = 0;
        puVar16 = puVar1 + 4;
        do {
          uVar9 = *puVar16;
          uVar13 = uVar17;
          if (uVar9 == 0) {
LAB_140c4f202:
            if (DAT_146b33f38 == 0) {
              FUN_142d7ebe0();
            }
            lVar7 = *(longlong *)(DAT_146b33f38 + 0x58);
            if ((lVar7 != 0) && (*(longlong *)(lVar7 + 800) != 0)) {
              lVar10 = FUN_1413c0f50();
              for (lVar2 = *(longlong *)(lVar7 + 800); lVar2 != 0;
                  lVar2 = *(longlong *)(lVar2 + 0x30)) {
                if (lVar2 == lVar10) {
                  if (*(longlong *)(lVar7 + 800) != 0) {
                    local_28 = (ulonglong *)0x0;
                    local_20 = 0;
                    uVar11 = FUN_1413c0f50();
                    for (uVar9 = *(ulonglong *)(lVar7 + 800);
                        (uVar12 = uVar17, uVar9 != 0 &&
                        (uVar12 = *(ulonglong *)(lVar7 + 800), uVar9 != uVar11));
                        uVar9 = *(ulonglong *)(uVar9 + 0x30)) {
                    }
                    FUN_140e7fdb0(param_1 + 0x286,uVar12,&local_28);
                    uVar9 = (ulonglong)
                            ((longlong)(local_28 + (int)local_20) + (7 - (longlong)local_28)) >> 3;
                    if (local_28 + (int)local_20 < local_28) {
                      uVar9 = uVar17;
                    }
                    uVar11 = uVar17;
                    puVar15 = local_28;
                    if (uVar9 != 0) {
                      do {
                        if (*(longlong *)(*puVar15 + 0x7f8) == DAT_146b47938) {
                          uVar13 = *puVar15;
                        }
                        uVar11 = uVar11 + 1;
                        puVar15 = puVar15 + 1;
                      } while (uVar11 != uVar9);
                    }
                    if (local_28 != (ulonglong *)0x0) {
                      FMemory::Free(local_28);
                    }
                  }
                  break;
                }
              }
            }
            uVar9 = uVar13;
            if (uVar13 != 0) goto LAB_140c4f31c;
          }
          else {
            lVar7 = FUN_1413c0f50();
            if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              if (param_1[0x39a] == 0) {
                plVar8 = param_1 + 0x286;
              }
              else {
                plVar8 = (longlong *)FUN_140c428a0();
              }
              uVar9 = FUN_140e7fd70(plVar8,uVar9);
            }
            else {
              uVar9 = *puVar16;
            }
            if (uVar9 == 0) {
LAB_140c4f1d0:
              uVar9 = uVar17;
            }
            else {
              lVar7 = FUN_1430b3b80();
              if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (!bVar3) goto LAB_140c4f1d0;
            }
            *puVar16 = 0;
            uVar13 = uVar9;
            if ((uVar9 == 0) ||
               ((*(longlong *)(uVar9 + 0x7f8) != DAT_146b47938 &&
                (cVar5 = FUN_14307eb90(uVar9), uVar13 = uVar17, cVar5 == '\0'))))
            goto LAB_140c4f202;
LAB_140c4f31c:
            if (puVar16[-4] == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = (**(code **)(*param_1 + 0xa68))(param_1);
            }
            if (*(byte *)(param_1 + 0x25) < 3) {
              FUN_1413f89f0();
            }
            else {
              FUN_140c578a0(param_1,uVar9,uVar4,0,0);
            }
          }
          puVar15 = puVar16 + 0x1b;
          puVar16 = puVar16 + 0x1f;
          if (puVar15 == puVar1 + (longlong)(int)lVar6 * 0x1f) {
            return;
          }
        } while( true );
      }
    }
    else {
      plVar8 = (longlong *)param_1[0x2a3];
      plVar14 = plVar8 + (longlong)(int)lVar6 * 0x1f;
      if (plVar8 != plVar14) {
        do {
          if (plVar8[1] != 0) {
            plVar8[4] = plVar8[1];
            lVar6 = FUN_140e81f30(param_1 + 0x286);
            if (lVar6 != 0) {
              plVar8[4] = lVar6;
            }
          }
          if (*plVar8 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = (**(code **)(*param_1 + 0xa68))(param_1);
          }
          if (*(byte *)(param_1 + 0x25) < 3) {
            FUN_1413f89f0();
          }
          else {
            FUN_140c578a0(param_1,0,uVar4,0,0);
          }
          plVar8 = plVar8 + 0x1f;
        } while (plVar8 != plVar14);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140c4f390 FUN_140c4f390 body=207 status=ok
// SIG undefined FUN_140c4f390(void)

void FUN_140c4f390(longlong *param_1)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  
  uVar1 = (**(code **)(*param_1 + 0xa68))();
  cVar2 = FUN_140e7fa40(param_1 + 0x2a3,uVar1);
  FUN_140e75b30(param_1 + 0x2a3,uVar1);
  cVar3 = (**(code **)(*param_1 + 0x778))(param_1);
  if (cVar3 != '\0') {
    cVar3 = FUN_140e83450(param_1 + 0x2a3,uVar1);
    if (cVar3 == '\0') {
      if (cVar2 == '\0') {
        FUN_140c5b160(param_1,uVar1);
      }
      else {
        (**(code **)(param_1[0x1b1] + 0x20))(param_1 + 0x1b1,uVar1,0);
        (**(code **)(param_1[0x1b1] + 0x28))(param_1 + 0x1b1,uVar1,0);
      }
    }
    else {
      (**(code **)(param_1[0x1b1] + 0x20))(param_1 + 0x1b1,uVar1,0);
    }
  }
  return;
}



// FUNCTION 140c4f460 FUN_140c4f460 body=128 status=ok
// SIG undefined FUN_140c4f460(void)

void FUN_140c4f460(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1048) + -1;
  lVar1 = (longlong)iVar3;
  if (-1 < iVar3) {
    lVar2 = lVar1 * 0x18;
    do {
      if ((-1 < lVar1) && (iVar3 < *(int *)(param_1 + 0x1048))) {
        FUN_1409deef0(*(undefined8 *)(*(longlong *)(param_1 + 0x1040) + 0x10 + lVar2),param_2);
      }
      iVar3 = iVar3 + -1;
      lVar2 = lVar2 + -0x18;
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 140c4f4e0 FUN_140c4f4e0 body=375 status=ok
// SIG undefined FUN_140c4f4e0(void)

undefined8 FUN_140c4f4e0(undefined8 param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar4 = UEnum::GetPrivateStaticClass();
  plVar5 = (longlong *)FUN_141799410(uVar4,0xffffffffffffffff,L"EOakMusicPart",1);
  bVar6 = plVar5 == (longlong *)0x0;
  if (bVar6) {
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Invalid",L"OakMusicLogging",L"InvalidText");
  }
  else {
    uVar4 = (**(code **)(*plVar5 + 0x288))(plVar5,local_28,param_2);
  }
  FText::FText(local_58,uVar4);
  if (bVar6) {
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_38 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
  }
  if ((!bVar6) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_20 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  uVar4 = FText::ToString(local_58);
  FString::FString(param_1,uVar4);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140c4f660 FUN_140c4f660 body=837 status=ok
// SIG undefined FUN_140c4f660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c4f660(longlong *param_1,float param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  undefined1 *local_1e0;
  undefined *local_1d8;
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  float local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined8 local_1a0;
  float local_198;
  undefined8 local_190;
  float local_188;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined1 local_168 [12];
  undefined8 local_15c [2];
  byte local_148 [12];
  undefined4 local_13c;
  undefined1 local_dc [36];
  undefined1 local_b8 [20];
  undefined1 local_a4;
  longlong local_70;
  longlong local_50;
  ulonglong local_38;
  
  if (param_3 == 0) {
    return;
  }
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  lVar8 = param_1[0x92];
  if (lVar8 != 0) {
    lVar4 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140c4f6e4;
  }
  lVar8 = 0;
LAB_140c4f6e4:
  _guard_xfg_dispatch_icall_nop(local_148,0,0x90);
  local_1c0 = 0;
  local_13c = 0x3f800000;
  local_1e8 = param_1;
  FUN_1422ffb20(local_b8,0,local_1c8,1);
  local_a4 = 1;
  if (lVar8 == 0) {
    lVar8 = param_1[0x2d];
    if (lVar8 == 0) {
      local_1c0 = _DAT_1468b5d90;
      local_1b8 = DAT_1468b5d98;
    }
    else {
      local_1c0 = *(undefined8 *)(lVar8 + 0x220);
      local_1b8 = *(float *)(lVar8 + 0x228);
    }
    local_1b0 = (float)local_1c0;
    local_1ac = (float)((ulonglong)local_1c0 >> 0x20);
    local_1a8 = local_1b8;
    if (lVar8 == 0) {
      uVar10 = (undefined4)DAT_1468b5da0;
      uVar11 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_1b8 = (float)DAT_1468b5da8;
    }
    else {
      local_178 = *(float *)(lVar8 + 0x210);
      fStack_174 = *(float *)(lVar8 + 0x214);
      fStack_170 = *(float *)(lVar8 + 0x218);
      fStack_16c = *(float *)(lVar8 + 0x21c);
      auVar1._4_4_ = -(uint)(*(float *)(lVar8 + 0x254) != fStack_174);
      auVar1._0_4_ = -(uint)(*(float *)(lVar8 + 0x250) != local_178);
      auVar1._8_4_ = -(uint)(*(float *)(lVar8 + 600) != fStack_170);
      auVar1._12_4_ = -(uint)(*(float *)(lVar8 + 0x25c) != fStack_16c);
      iVar3 = movmskps(local_1b8,auVar1);
      if (iVar3 != 0) {
        *(float *)(lVar8 + 0x250) = local_178;
        *(float *)(lVar8 + 0x254) = fStack_174;
        *(float *)(lVar8 + 600) = fStack_170;
        *(float *)(lVar8 + 0x25c) = fStack_16c;
        puVar5 = (undefined8 *)FQuat::Rotator(&local_178,local_168);
        *(undefined8 *)(lVar8 + 0x260) = *puVar5;
        *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar5 + 1);
      }
      uVar10 = (undefined4)*(undefined8 *)(lVar8 + 0x260);
      uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x260) >> 0x20);
      local_1b8 = (float)*(undefined4 *)(lVar8 + 0x268);
    }
    puVar5 = local_15c;
    local_1c0 = CONCAT44(uVar11,uVar10);
    puVar9 = &local_1a0;
    local_1a0 = local_1c0;
    local_198 = local_1b8;
  }
  else {
    local_1c0 = 0;
    local_1b8 = 0.0;
    (**(code **)(*param_1 + 0x648))(param_1,&local_1b0,&local_1c0);
    puVar5 = &local_1a0;
    puVar9 = &local_1c0;
  }
  pfVar6 = (float *)FRotator::Vector(puVar9,puVar5);
  local_198 = local_1a8 + param_2 * pfVar6[2];
  local_190 = CONCAT44(local_1ac + param_2 * pfVar6[1],local_1b0 + param_2 * *pfVar6);
  local_188 = local_198;
  uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  local_1d8 = &DAT_146aefe68;
  local_1e0 = local_b8;
  local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,0xf);
  UWorld::LineTraceSingleByChannel(uVar7,local_148,&local_1b0,&local_190);
  if (((local_148[0] & 1) == 0) || ((local_148[0] & 2) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    uVar7 = FWeakObjectPtr::Get(local_dc);
    lVar8 = FUN_142d29780(uVar7);
    if (lVar8 == 0) {
      local_1e0 = (undefined1 *)((ulonglong)local_1e0 & 0xffffffffffffff00);
      local_1e8 = &DAT_1466ad4f0;
      FUN_142d68ea0(param_3,param_1,local_148,1);
    }
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140c4f9b0 FUN_140c4f9b0 body=140 status=ok
// SIG undefined FUN_140c4f9b0(void)

void FUN_140c4f9b0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  char cVar1;
  undefined8 local_res8;
  undefined1 local_18 [16];
  
  local_res8 = 0;
  (**(code **)(*(longlong *)(param_1 + 0x8b8) + 0x18))
            ((longlong *)(param_1 + 0x8b8),*(undefined4 *)(param_3 + 0xac),local_18,&local_res8);
  if ((*(longlong *)(param_1 + 0xea8) != 0) &&
     (cVar1 = FUN_140a6d9f0(*(longlong *)(param_1 + 0xea8),param_2,local_18,param_3), cVar1 != '\0')
     ) {
    return;
  }
  FUN_142cca030(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140c4fa40 FUN_140c4fa40 body=340 status=ok
// SIG undefined FUN_140c4fa40(void)

void FUN_140c4fa40(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_28 [32];
  
  if (param_2 != *(longlong *)(param_1 + 0x468)) {
    lVar4 = *(longlong *)(param_1 + 0x470);
    if (lVar4 != 0) {
      if (*(char *)(param_1 + 0x4d0) != '\0') {
        FUN_141440750(lVar4);
        lVar4 = *(longlong *)(param_1 + 0x470);
        *(undefined1 *)(param_1 + 0x4d0) = 0;
      }
      iVar1 = *(int *)(lVar4 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar5 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar5;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
      }
      else {
        lVar4 = 0;
      }
      *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 0x20000000;
      *(undefined8 *)(param_1 + 0x470) = 0;
    }
    cVar2 = FUN_14059ee90(param_1 + 0x4b0);
    if (cVar2 != '\0') {
      if (((*(longlong *)(param_1 + 0x458) == 0) || (*(longlong *)(param_1 + 0x468) == 0)) ||
         (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x468) + 0x40), lVar4 == 0)) {
        FUN_1405ac8f0(param_1 + 0x4b0,0,4);
      }
      else {
        FUN_1405a3150(*(longlong *)(param_1 + 0x458),local_28,lVar4,0);
        FUN_140591060(local_28);
      }
    }
    *(undefined8 *)(param_1 + 0x468) = 0;
    *(undefined2 *)(param_1 + 0x4c8) = 0;
    *(undefined4 *)(param_1 + 0x4f8) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x4fc)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x4f0,0);
    }
    if (param_2 != 0) {
      cVar2 = FUN_140c3a890(param_1,param_2);
      if (cVar2 != '\0') {
        *(longlong *)(param_1 + 0x468) = param_2;
        FUN_140c35420(param_1);
      }
    }
  }
  return;
}



// FUNCTION 140c4fba0 FUN_140c4fba0 body=694 status=ok
// SIG undefined FUN_140c4fba0(void)

void FUN_140c4fba0(longlong param_1,longlong param_2)

{
  bool bVar1;
  ulonglong uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong local_28;
  ulonglong local_20;
  
  if (param_2 != 0) {
    plVar9 = (longlong *)(param_2 + 0x150);
    iVar10 = 0;
    local_20 = 0;
    local_28 = 0;
    iVar11 = *(int *)(param_1 + 400);
    if (*(int *)(param_2 + 0x15c) < iVar11) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
                (plVar9,iVar11);
      iVar11 = *(int *)(param_1 + 400);
    }
    if (0 < iVar11) {
      do {
        if ((longlong)local_20 < 0) {
          if ((int)local_20 != 0) {
            plVar7 = (longlong *)(local_28 + 0x38);
            iVar11 = (int)local_20;
            do {
              if (plVar7[5] != 0) {
                FMemory::Free();
              }
              if (*plVar7 != 0) {
                FMemory::Free();
              }
              if (plVar7[-6] != 0) {
                FMemory::Free();
              }
              plVar7 = plVar7 + 0xf;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          uVar2 = local_20 >> 0x20;
          local_20 = local_20 & 0xffffffff00000000;
          if ((int)uVar2 != 0) {
            TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo
                      (&local_28,0);
          }
        }
        else {
          if ((int)local_20 != 0) {
            plVar7 = (longlong *)(local_28 + 0x38);
            iVar11 = (int)local_20;
            do {
              if (plVar7[5] != 0) {
                FMemory::Free();
              }
              if (*plVar7 != 0) {
                FMemory::Free();
              }
              if (plVar7[-6] != 0) {
                FMemory::Free();
              }
              plVar7 = plVar7 + 0xf;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          local_20 = local_20 & 0xffffffff00000000;
        }
        if ((iVar10 < 0) || (*(int *)(param_2 + 0x158) <= iVar10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_140d3c040((longlong)iVar10 * 0x38 + *plVar9,&local_28);
        }
        else {
          iVar11 = *(int *)(param_2 + 0x158);
          *(int *)(param_2 + 0x158) = iVar11 + 1;
          if (*(int *)(param_2 + 0x15c) < iVar11 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar9,iVar11);
          }
          puVar6 = (undefined8 *)((longlong)iVar11 * 0x38 + *plVar9);
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6[6] = 0;
        }
        lVar8 = (longlong)iVar10 * 0x38;
        FUN_140d3d370(lVar8 + *plVar9,*(longlong *)(param_1 + 0x188) + (longlong)iVar10 * 0x18);
        FUN_140c2c2f0(lVar8 + *plVar9);
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 400));
    }
    lVar8 = *(longlong *)(param_1 + 0x118);
    if (lVar8 != 0) {
      lVar5 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) && (*(char *)(lVar8 + 0x128) == '\x03')) &&
         (cVar3 = APlayerController::IsPrimaryPlayer(lVar8), cVar3 != '\0')) {
        uVar4 = FUN_140c42190(param_1);
        *(undefined4 *)(param_2 + 0x140) = uVar4;
      }
    }
    *(undefined4 *)(param_2 + 0x144) = *(undefined4 *)(param_1 + 0x1e4);
    *(undefined1 *)(param_2 + 0x148) = *(undefined1 *)(param_1 + 0x1e8);
    if ((int)local_20 != 0) {
      plVar9 = (longlong *)(local_28 + 0x38);
      iVar11 = (int)local_20;
      do {
        if (plVar9[5] != 0) {
          FMemory::Free();
        }
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        if (plVar9[-6] != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 0xf;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140c4fe60 FUN_140c4fe60 body=64 status=ok
// SIG undefined FUN_140c4fe60(void)

void FUN_140c4fe60(longlong param_1,undefined8 param_2)

{
  FUN_142ccb550();
  if (*(longlong *)(param_1 + 0xe90) != 0) {
    FUN_140eb35f0(*(longlong *)(param_1 + 0xe90),param_2);
  }
  FUN_140c5b220(param_1,0xffffffff);
  return;
}



// FUNCTION 140c4fea0 FUN_140c4fea0 body=64 status=ok
// SIG undefined FUN_140c4fea0(void)

void FUN_140c4fea0(longlong param_1)

{
  FUN_142ccb610();
  FStringTable::SetOwnerAsset(param_1 + 0xf48,param_1);
  FUN_140e8e630(param_1 + 0x1430,param_1);
  FStringTable::SetOwnerAsset(param_1 + 0x1518,param_1);
  return;
}



// FUNCTION 140c4fee0 FUN_140c4fee0 body=105 status=ok
// SIG undefined FUN_140c4fee0(void)

void FUN_140c4fee0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong local_20;
  
  FUN_1417931d0();
  uVar1 = FSoftObjectPath::FSoftObjectPath(local_28,param_1);
  puVar3 = (undefined8 *)FSoftObjectPath::GetLongPackageName(uVar1,local_38);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar3;
  }
  uVar2 = FUN_140438070(puVar4);
  *(undefined4 *)(param_1 + 600) = uVar2;
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_20 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140c4ff50 FUN_140c4ff50 body=1585 status=ok
// SIG undefined FUN_140c4ff50(void)

void FUN_140c4ff50(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  wchar_t *pwVar3;
  ulonglong uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  longlong *plVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  bool bVar17;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_142ccb710();
  uVar6 = FUN_142dfdf30();
  lVar7 = (**(code **)(*param_1 + 0x628))(param_1,uVar6);
  param_1[0x21b] = lVar7;
  uVar6 = FUN_141312e30();
  lVar7 = (**(code **)(*param_1 + 0x628))(param_1,uVar6);
  param_1[0x21c] = lVar7;
  uVar6 = UUGLoadoutBarUW::GetPrivateStaticClass();
  lVar7 = (**(code **)(*param_1 + 0x628))(param_1,uVar6);
  param_1[0x1d1] = lVar7;
  uVar6 = FUN_1430a76d0();
  lVar7 = (**(code **)(*param_1 + 0x628))(param_1,uVar6);
  param_1[0x1d6] = lVar7;
  uVar6 = APostProcessVolume::GetPrivateStaticClass();
  lVar7 = (**(code **)(*param_1 + 0x628))(param_1,uVar6);
  param_1[0x1d7] = lVar7;
  uVar6 = UCircularThrobber::GetPrivateStaticClass();
  lVar7 = (**(code **)(*param_1 + 0x628))(param_1,uVar6);
  param_1[0x3af] = lVar7;
  lVar7 = (**(code **)(param_1[0x1b0] + 0x18))();
  pwVar16 = (wchar_t *)0x0;
  param_1[0x1d3] = lVar7;
  if (lVar7 != 0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::AddedToInventory",L"::");
    pwVar10 = pwVar16;
    while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar10 = pwVar3;
    }
    FName::FName(&local_res10,pwVar10 + 2,1);
    uVar4 = local_res10;
    lVar7 = param_1[0x1d3];
    plVar14 = (longlong *)(lVar7 + 0x338);
    FWeakObjectPtr::operator=(&local_38,0);
    uStack_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    uStack_30 = uVar4;
    local_res8 = 0;
    if ((uVar4 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_38), lVar9 != 0)) {
      UObject::FindFunction(lVar9,uStack_30);
    }
    piVar2 = (int *)*plVar14;
    iVar1 = *(int *)(lVar7 + 0x340);
    for (piVar13 = piVar2; piVar13 != piVar2 + (longlong)iVar1 * 4; piVar13 = piVar13 + 4) {
      if ((((*piVar13 == (int)local_38) &&
           (local_38._4_4_ = (int)((ulonglong)local_38 >> 0x20),
           bVar17 = piVar13[1] == local_38._4_4_, bVar17)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar13), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_38), cVar5 == '\0')))) &&
         (*(ulonglong *)(piVar13 + 2) == uStack_30)) {
        if ((int)((longlong)piVar13 - (longlong)piVar2 >> 4) != -1) goto LAB_140c50174;
        break;
      }
    }
    iVar1 = *(int *)(lVar7 + 0x340);
    *(int *)(lVar7 + 0x340) = iVar1 + 1;
    if (*(int *)(lVar7 + 0x344) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar1);
    }
    puVar12 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar14);
    *puVar12 = (int)local_38;
    puVar12[1] = local_38._4_4_;
    *(ulonglong *)(puVar12 + 2) = uStack_30;
LAB_140c50174:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::PreAddToFullInventory",L"::");
    pwVar10 = pwVar16;
    while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar10 = pwVar3;
    }
    FName::FName(&local_res10,pwVar10 + 2,1);
    uVar4 = local_res10;
    lVar7 = param_1[0x1d3];
    plVar14 = (longlong *)(lVar7 + 0x348);
    FWeakObjectPtr::operator=(&local_38,0);
    uStack_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    uStack_30 = uVar4;
    local_res8 = 0;
    if ((uVar4 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_38), lVar9 != 0)) {
      UObject::FindFunction(lVar9,uStack_30);
    }
    piVar2 = (int *)*plVar14;
    iVar1 = *(int *)(lVar7 + 0x350);
    for (piVar13 = piVar2; piVar13 != piVar2 + (longlong)iVar1 * 4; piVar13 = piVar13 + 4) {
      if ((((*piVar13 == (int)local_38) &&
           (local_38._4_4_ = (int)((ulonglong)local_38 >> 0x20),
           bVar17 = piVar13[1] == local_38._4_4_, bVar17)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar13), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_38), cVar5 == '\0')))) &&
         (*(ulonglong *)(piVar13 + 2) == uStack_30)) {
        if ((int)((longlong)piVar13 - (longlong)piVar2 >> 4) != -1) goto LAB_140c502b4;
        break;
      }
    }
    iVar1 = *(int *)(lVar7 + 0x350);
    *(int *)(lVar7 + 0x350) = iVar1 + 1;
    if (*(int *)(lVar7 + 0x354) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar1);
    }
    puVar12 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar14);
    *puVar12 = (int)local_38;
    puVar12[1] = local_38._4_4_;
    *(ulonglong *)(puVar12 + 2) = uStack_30;
LAB_140c502b4:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::RemovingFromInventory",L"::");
    pwVar10 = pwVar16;
    while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar10 = pwVar3;
    }
    FName::FName(&local_res10,pwVar10 + 2,1);
    lVar7 = param_1[0x1d3];
    plVar14 = (longlong *)(lVar7 + 0x358);
    FWeakObjectPtr::operator=(&local_38,0);
    uStack_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    uStack_30 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_38), lVar9 != 0)) {
      UObject::FindFunction(lVar9,uStack_30);
    }
    piVar2 = (int *)*plVar14;
    iVar1 = *(int *)(lVar7 + 0x360);
    for (piVar13 = piVar2; piVar13 != piVar2 + (longlong)iVar1 * 4; piVar13 = piVar13 + 4) {
      if ((((*piVar13 == (int)local_38) &&
           (local_38._4_4_ = (int)((ulonglong)local_38 >> 0x20),
           bVar17 = piVar13[1] == local_38._4_4_, bVar17)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar13), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_38), cVar5 == '\0')))) &&
         (*(ulonglong *)(piVar13 + 2) == uStack_30)) {
        if ((int)((longlong)piVar13 - (longlong)piVar2 >> 4) != -1) goto LAB_140c503f4;
        break;
      }
    }
    iVar1 = *(int *)(lVar7 + 0x360);
    *(int *)(lVar7 + 0x360) = iVar1 + 1;
    if (*(int *)(lVar7 + 0x364) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar1);
    }
    puVar12 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar14);
    *puVar12 = (int)local_38;
    puVar12[1] = local_38._4_4_;
    *(ulonglong *)(puVar12 + 2) = uStack_30;
LAB_140c503f4:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
  }
  if (param_1[0x129] != 0) {
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = FUN_140c4d2f0;
    pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AOakCharacter::OnFirstPersonCreated",L"::");
    while (pwVar8 = pwVar10, pwVar8 != (wchar_t *)0x0) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
      pwVar16 = pwVar8;
    }
    FName::FName(&local_res8,pwVar16 + 2,1);
    FUN_1407260e0(param_1[0x129] + 0x380,param_1,&local_38,local_res8);
  }
  lVar7 = param_1[0x122];
  if (lVar7 != 0) {
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = FUN_140c472e0;
    plVar15 = (longlong *)(lVar7 + 0x268);
    plVar14 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar14 != (longlong *)0x0) {
      *plVar14 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar14 + 1,param_1);
      *(int *)(plVar14 + 2) = (int)local_38;
      *(int *)((longlong)plVar14 + 0x14) = local_38._4_4_;
      *(undefined4 *)(plVar14 + 3) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)plVar14 + 0x1c) = uStack_30._4_4_;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar14[5] = lVar9;
      *plVar14 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar15,1);
      (**(code **)(*plVar14 + 0x20))(plVar14,&local_res8);
      iVar1 = *(int *)(lVar7 + 0x270);
      *(int *)(lVar7 + 0x270) = iVar1 + 1;
      if (*(int *)(lVar7 + 0x274) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar1);
      }
      puVar11 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar15);
      *puVar11 = plVar14;
      *(undefined4 *)(puVar11 + 1) = 3;
    }
  }
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar7 != 0) && (cVar5 = UWorld::IsGameWorld(lVar7), cVar5 != '\0')) {
    FUN_140c54860(param_1);
  }
  return;
}



// FUNCTION 140c50590 FUN_140c50590 body=31 status=ok
// SIG undefined FUN_140c50590(void)

void FUN_140c50590(longlong param_1)

{
  FUN_142ccb840();
  FUN_140a78890(param_1 + 0x1fb0);
  return;
}



// FUNCTION 140c505b0 FUN_140c505b0 body=177 status=ok
// SIG undefined FUN_140c505b0(void)

void FUN_140c505b0(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_1422384a0();
  if (*(longlong *)(param_1 + 0x490) != 0) {
    lVar7 = FUN_142f71d80();
    lVar3 = *(longlong *)(param_1 + 0x490);
    lVar8 = lVar3;
    if (lVar3 != 0) {
      while (lVar8 != lVar7) {
        lVar8 = *(longlong *)(lVar8 + 0x30);
        if (lVar8 == 0) {
          return;
        }
      }
      if (lVar3 != 0) {
        iVar2 = *(int *)(param_1 + 0x4a8);
        *(int *)(param_1 + 0x4a8) = iVar2 + 1;
        if (*(int *)(param_1 + 0x4ac) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x4a0,iVar2);
        }
        uVar4 = *(undefined4 *)(param_1 + 0x494);
        uVar5 = *(undefined4 *)(param_1 + 0x498);
        uVar6 = *(undefined4 *)(param_1 + 0x49c);
        puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x4a0) + (longlong)iVar2 * 0x10);
        *puVar1 = *(undefined4 *)(param_1 + 0x490);
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        FUN_142f54e20(param_1 + 0x490);
      }
    }
  }
  return;
}



// FUNCTION 140c50670 FUN_140c50670 body=385 status=ok
// SIG undefined FUN_140c50670(void)

void FUN_140c50670(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong local_30;
  
  FUN_142dd6450();
  uVar5 = FSoftObjectPath::FSoftObjectPath(local_38,param_1);
  puVar6 = (undefined8 *)FSoftObjectPath::GetLongPackageName(uVar5,local_48);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  uVar4 = FUN_140438070(puVar7);
  *(undefined4 *)(param_1 + 600) = uVar4;
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_30 != 0) {
    FMemory::Free();
  }
  if ((0 < *(int *)(param_1 + 0x228)) && (*(int *)(param_1 + 0x238) == 0)) {
    plVar1 = (longlong *)(param_1 + 0x230);
    iVar3 = *(int *)(param_1 + 0x238);
    *(int *)(param_1 + 0x238) = iVar3 + 1;
    if (*(int *)(param_1 + 0x23c) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar1,iVar3);
    }
    lVar10 = *plVar1;
    lVar2 = (longlong)iVar3 * 0x18;
    *(undefined8 *)(lVar2 + lVar10) = 0;
    *(undefined8 *)(lVar2 + 8 + lVar10) = 0;
    *(undefined8 *)(lVar2 + 0x10 + lVar10) = 0;
    if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x238))) {
      *(undefined1 *)(lVar2 + *plVar1) = 1;
      lVar10 = *(longlong *)(param_1 + 0x220);
      lVar9 = (longlong)*(int *)(param_1 + 0x228) * 0xe0 + lVar10;
      for (; lVar10 != lVar9; lVar10 = lVar10 + 0xe0) {
        lVar8 = *plVar1 + lVar2;
        iVar3 = *(int *)(lVar8 + 0x10);
        *(int *)(lVar8 + 0x10) = iVar3 + 1;
        if (*(int *)(lVar8 + 0x14) < iVar3 + 1) {
          FUN_140822570(lVar8 + 8,iVar3);
        }
        FUN_140c2f8d0((longlong)iVar3 * 0xe0 + *(longlong *)(lVar8 + 8),lVar10);
      }
    }
  }
  return;
}



// FUNCTION 140c50800 FUN_140c50800 body=513 status=ok
// SIG undefined FUN_140c50800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c50800(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  undefined8 local_48;
  float fStack_40;
  float fStack_3c;
  undefined8 local_38;
  float local_30;
  undefined1 local_28 [32];
  
  lVar11 = FUN_142cc1670(param_1 + -0xd78);
  if (lVar11 != 0) {
    local_30 = *(float *)(param_2 + 0x58) - *(float *)(param_2 + 100);
    *(ulonglong *)(lVar11 + 0x390) =
         CONCAT44(*(float *)(param_2 + 0x54) - *(float *)(param_2 + 0x60),
                  *(float *)(param_2 + 0x50) - *(float *)(param_2 + 0x5c));
    *(float *)(lVar11 + 0x398) = local_30;
    plVar3 = *(longlong **)(param_1 + -0x8e8);
    if (plVar3 == (longlong *)0x0) {
      lVar4 = *(longlong *)(param_1 + -0xc10);
      uVar10 = DAT_1468b5da8;
      local_38 = DAT_1468b5da0;
      if (lVar4 != 0) {
        fVar2 = *(float *)(lVar4 + 0x210);
        local_48 = *(undefined8 *)(lVar4 + 0x210);
        fStack_40 = *(float *)(lVar4 + 0x218);
        fStack_3c = *(float *)(lVar4 + 0x21c);
        auVar15._4_4_ = -(uint)(*(float *)(lVar4 + 0x254) != *(float *)(lVar4 + 0x214));
        auVar15._0_4_ = -(uint)(*(float *)(lVar4 + 0x250) != fVar2);
        auVar15._8_4_ = -(uint)(*(float *)(lVar4 + 600) != fStack_40);
        auVar15._12_4_ = -(uint)(*(float *)(lVar4 + 0x25c) != fStack_3c);
        iVar9 = movmskps(local_30,auVar15);
        if (iVar9 != 0) {
          *(float *)(lVar4 + 0x250) = fVar2;
          *(float *)(lVar4 + 0x254) = *(float *)(lVar4 + 0x214);
          *(float *)(lVar4 + 600) = fStack_40;
          *(float *)(lVar4 + 0x25c) = fStack_3c;
          puVar12 = (undefined8 *)FQuat::Rotator(&local_48,&local_38);
          *(undefined8 *)(lVar4 + 0x260) = *puVar12;
          *(undefined4 *)(lVar4 + 0x268) = *(undefined4 *)(puVar12 + 1);
        }
        uVar10 = *(undefined4 *)(lVar4 + 0x268);
        local_38 = *(undefined8 *)(lVar4 + 0x260);
      }
      local_30 = (float)uVar10;
      puVar12 = &local_38;
    }
    else {
      puVar12 = (undefined8 *)(**(code **)(*plVar3 + 0x720))(plVar3,local_28);
    }
    uVar1 = *puVar12;
    fVar2 = *(float *)(puVar12 + 1);
    fVar17 = (float)uVar1 - *(float *)(param_2 + 0x74);
    fVar6 = (float)DAT_14686bce0;
    fVar7 = DAT_14686bce0._4_4_;
    fVar8 = DAT_14686bce0._8_4_;
    fVar16 = (float)((ulonglong)uVar1 >> 0x20) - *(float *)(param_2 + 0x78);
    fVar13 = fVar2 - *(float *)(param_2 + 0x7c);
    auVar14._4_4_ = fVar16;
    auVar14._0_4_ = fVar17;
    auVar14._8_4_ = fVar13;
    auVar14._12_4_ = 0;
    auVar15 = divps(auVar14,_DAT_14686bce0);
    fVar17 = fVar17 - (float)(int)auVar15._0_4_ * fVar6;
    fVar16 = fVar16 - (float)(int)auVar15._4_4_ * fVar7;
    fVar13 = fVar13 - (float)(int)auVar15._8_4_ * fVar8;
    fVar17 = (float)(((uint)(fVar17 + fVar6) ^ (uint)fVar17) & -(uint)(0.0 <= fVar17) ^
                    (uint)(fVar17 + fVar6));
    fVar16 = (float)(((uint)(fVar16 + fVar7) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                    (uint)(fVar16 + fVar7));
    fVar13 = (float)(((uint)(fVar13 + fVar8) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                    (uint)(fVar13 + fVar8));
    bVar5 = fRam000000014686bcd8 < fVar13;
    *(ulonglong *)(lVar11 + 0x39c) =
         CONCAT44(((uint)(fVar16 - fVar7) ^ (uint)fVar16) & -(uint)(fRam000000014686bcd4 < fVar16) ^
                  (uint)fVar16,
                  ((uint)(fVar17 - fVar6) ^ (uint)fVar17) & -(uint)(_DAT_14686bcd0 < fVar17) ^
                  (uint)fVar17);
    *(uint *)(lVar11 + 0x3a4) =
         ((uint)(fVar13 - fVar8) ^ (uint)fVar13) & -(uint)bVar5 ^ (uint)fVar13;
    *(undefined8 *)(param_2 + 0x74) = uVar1;
    *(undefined8 *)(param_2 + 0x5c) = *(undefined8 *)(param_2 + 0x50);
    *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_2 + 0x58);
    *(float *)(param_2 + 0x7c) = fVar2;
  }
  return;
}



// FUNCTION 140c50a10 FUN_140c50a10 body=100 status=ok
// SIG undefined FUN_140c50a10(void)

void FUN_140c50a10(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong local_20;
  
  uVar1 = FSoftObjectPath::FSoftObjectPath(local_28,param_1);
  puVar3 = (undefined8 *)FSoftObjectPath::GetLongPackageName(uVar1,local_38);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar3;
  }
  uVar2 = FUN_140438070(puVar4);
  *(undefined4 *)(param_1 + 600) = uVar2;
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_20 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140c50a80 FUN_140c50a80 body=58 status=ok
// SIG undefined FUN_140c50a80(void)

void FUN_140c50a80(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x80) != '\0') {
    lVar1 = FUN_140c44470();
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0xf8) = 0;
    }
    *(undefined1 *)(param_1 + 0x80) = 0;
    return;
  }
  FUN_140c5b630();
  return;
}



// FUNCTION 140c50ac0 FUN_140c50ac0 body=131 status=ok
// SIG undefined FUN_140c50ac0(void)

void FUN_140c50ac0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  param_1 = param_1 + 0x28;
  cVar2 = FWeakObjectPtr::IsValid(param_1);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1);
    lVar3 = FUN_1424503b0(uVar1);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x128) == '\x03')) {
      cVar2 = FWeakObjectPtr::IsValid(param_1);
      if (cVar2 != '\0') {
        plVar4 = (longlong *)FWeakObjectPtr::Get(param_1);
        lVar3 = (**(code **)(*plVar4 + 0x148))(plVar4);
        if (lVar3 != 0) {
          lVar5 = UWorld::GetGameState<APVPGameState>(lVar3);
          if (lVar5 != 0) {
            FUN_140b6c800(lVar5 + 0x670,lVar3);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c50b50 FUN_140c50b50 body=267 status=ok
// SIG undefined FUN_140c50b50(void)

void FUN_140c50b50(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0xd80) + 0x18))();
  if ((lVar2 != 0) && ((param_4 & 1) != 0)) {
    uVar3 = FUN_140c46b40(param_1);
    cVar1 = FUN_1404724a0(uVar3,param_2);
    if (cVar1 == '\0') {
      if (*(longlong *)(param_1 + 0x1cd0) == 0) {
        lVar4 = param_1 + 0x1430;
      }
      else {
        lVar4 = FUN_140c428a0();
      }
      uVar3 = FUN_140e7f8d0(lVar4,param_2);
    }
    else {
      if (*(longlong *)(param_1 + 0x1cd0) == 0) {
        lVar4 = param_1 + 0x1430;
      }
      else {
        lVar4 = FUN_140c428a0();
      }
      lVar4 = FUN_140e80e00(lVar4,param_2);
      if (lVar4 != 0) {
        return;
      }
      uVar3 = 0;
      cVar1 = FUN_140e96340(param_1 + 0x1518);
      if ((cVar1 != '\0') && (lVar4 = FUN_140e7eef0(param_1 + 0x1518,0), lVar4 != 0)) {
        uVar3 = FUN_140e83520(param_1 + 0x1518,lVar4);
      }
    }
    uVar3 = FUN_142ffa6f0(lVar2,local_res8,uVar3);
    FUN_140c3dc20(param_1,uVar3);
  }
  return;
}



// FUNCTION 140c50c60 FUN_140c50c60 body=144 status=ok
// SIG undefined FUN_140c50c60(void)

void FUN_140c50c60(longlong param_1,longlong *param_2,undefined4 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xf50);
  if (lVar4 == 0) {
    lVar4 = param_1 + -0xd80;
  }
  if (param_2 != (longlong *)0x0) {
    uVar2 = FUN_14301f8f0();
    lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
    if ((lVar3 != 0) && (cVar1 = FUN_142fe9d60(lVar3,lVar4), cVar1 == '\0')) {
      return;
    }
  }
  FUN_1413f88a0(lVar4,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 140c50cf0 FUN_140c50cf0 body=39 status=ok
// SIG undefined FUN_140c50cf0(void)

void FUN_140c50cf0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0xd80) + 0x18))();
  if (lVar1 != 0) {
    FUN_142fe9e20(lVar1);
    return;
  }
  return;
}



// FUNCTION 140c50d20 FUN_140c50d20 body=1293 status=ok
// SIG undefined FUN_140c50d20(void)

void FUN_140c50d20(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong local_res8;
  longlong *local_res10;
  int local_108;
  int local_104;
  longlong *local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  int *local_80;
  int *local_78;
  longlong **local_70;
  longlong *local_68;
  longlong **local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  
  if (param_1 == 0) {
    return;
  }
  local_res8 = param_1;
  local_res10 = param_2;
  lVar7 = FUN_142f71d80();
  lVar9 = local_res8;
  if (local_res8 == 0) {
    return;
  }
  while (lVar9 != lVar7) {
    plVar1 = (longlong *)(lVar9 + 0x30);
    lVar9 = *plVar1;
    if (*plVar1 == 0) {
      return;
    }
  }
  if (local_res10 == (longlong *)0x0) {
    return;
  }
  if (param_3 == (longlong *)0x0) {
    return;
  }
  uVar8 = FUN_14146c130();
  local_e8 = AGameStateBase::OnRep_GameModeClass(local_res10,uVar8);
  if (local_e8 == 0) {
    return;
  }
  lVar9 = FUN_14146c130();
  if ((*(int *)(*(longlong *)(local_e8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(local_e8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
      != lVar9 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  local_f0 = (**(code **)(*local_res10 + 0x148))();
  if (local_f0 == 0) {
    return;
  }
  lVar9 = FUN_142f5cb40(local_e8);
  if (lVar9 == 0) {
    return;
  }
  local_100 = (longlong *)FUN_142f5cb40(local_e8);
  if (local_100 == (longlong *)0x0) {
    return;
  }
  lVar9 = UWebSocketNetDriver::StaticClass();
  if ((*(int *)(local_100[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)(*(longlong *)(local_100[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar9 = local_res10[0x109];
  if (lVar9 == 0) {
    return;
  }
  lVar7 = FUN_1413f82e0();
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  local_d8 = lVar9;
  local_e0 = FUN_140c430a0(lVar9,0);
  if (local_e0 == 0) {
    return;
  }
  local_f8 = FUN_142f5c820(local_100,local_res8);
  if (local_e0 == 0) {
    return;
  }
  lVar9 = UWorld::GetGameState<APVPGameState>(local_f0);
  if (lVar9 == 0) {
    return;
  }
  lVar13 = 0;
  lVar7 = *(longlong *)(local_f0 + 400);
  if (lVar7 != 0) {
    lVar10 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140c50f72;
  }
  lVar7 = lVar13;
LAB_140c50f72:
  local_108 = (**(code **)(*local_100 + 0x780))(local_100,local_res8);
  local_104 = local_108;
  cVar4 = FUN_140bca690(lVar7);
  iVar5 = local_108;
  if (cVar4 != '\0') {
    iVar5 = FUN_140c129d0(local_100,local_res8);
    if (iVar5 == -1) {
      iVar5 = FUN_140cb6860(lVar9);
    }
    iVar6 = (**(code **)(*param_3 + 0x408))(param_3);
    local_108 = local_104 - (iVar5 - iVar6);
    iVar5 = FUN_1405120f0();
    if (local_108 < 1) {
      local_108 = 1;
      iVar5 = local_108;
    }
    else if (local_108 < iVar5) {
      iVar5 = local_108;
    }
  }
  local_108 = iVar5;
  local_98 = param_5;
  local_88 = &local_f8;
  local_80 = &local_104;
  local_78 = &local_108;
  local_70 = &local_res10;
  local_68 = &local_res8;
  local_60 = &local_100;
  local_58 = &local_f0;
  local_50 = &local_e0;
  local_48 = &local_d8;
  local_40 = &local_e8;
  local_90 = param_4;
  FUN_140c31860(&local_98,*(undefined8 *)(local_f8 + 0x188),0);
  plVar12 = *(longlong **)(local_f8 + 0x210);
  plVar1 = plVar12 + *(int *)(local_f8 + 0x218);
  for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
    lVar9 = *plVar12;
    if (lVar9 != 0) {
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0xffffffff;
      local_ac = 0;
      local_d0 = &DAT_1441d2800;
      local_a8 = 0;
      FUN_142f60460(&local_d0,local_f8,lVar9);
      if (*(char *)(lVar9 + 0xa8) != '\0') {
        lVar7 = lVar13;
        if (local_res8 != 0) {
          lVar11 = FUN_142f71d80();
          for (lVar10 = local_res8;
              (lVar7 = lVar13, lVar10 != 0 && (lVar7 = local_res8, lVar10 != lVar11));
              lVar10 = *(longlong *)(lVar10 + 0x30)) {
          }
        }
        cVar4 = FUN_142f63720(local_100,&local_d0,lVar7);
        if (cVar4 != '\0') {
          uVar8 = ULevel::GetWorld(lVar9);
          FUN_140c31860(&local_98,uVar8,1);
          lVar7 = local_f0;
          plVar3 = local_res10;
          if (*(char *)(lVar9 + 0xa4) == '\0') {
            if (DAT_146b33f38 == 0) {
              FUN_142d7ebe0();
            }
            if (((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
                (lVar9 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x4c8), lVar9 != 0)) &&
               (lVar7 = *(longlong *)(lVar7 + 0x140), lVar7 != 0)) {
              lVar10 = FUN_141425c60();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if ((bVar2) && (lVar7 = FUN_142d84360(lVar7), lVar7 != 0)) {
                FUN_142dd18b0(lVar7,plVar3,lVar9,1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c51230 FUN_140c51230 body=1858 status=ok
// SIG undefined FUN_140c51230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c51230(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined1 local_110;
  undefined8 local_108;
  longlong local_100;
  int local_f8;
  undefined1 local_f0 [8];
  undefined1 local_e8 [16];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar7 = 0;
  local_108 = 0;
  if ((param_1[0xa9] == 0) || (local_108 = 0, param_1[0xae] == 0)) {
LAB_140c51965:
    FUN_140c4c280(param_1);
    return;
  }
  plVar11 = param_1 + 0xa7;
  lVar4 = FUN_1405ec200(plVar11);
  if (lVar4 == 0) goto LAB_140c51965;
  lVar5 = FUN_14216ee80();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_140c51965;
  plVar12 = param_1 + 0xac;
  lVar4 = FUN_1405ec200(plVar12);
  if (lVar4 == 0) goto LAB_140c51965;
  lVar5 = FUN_142f2cf80();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_140c51965;
  lVar4 = FUN_1422312c0(param_1);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_14141f270();
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
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar4 != 0) && (lVar4 = UWorld::GetGameState<APVPGameState>(lVar4), lVar4 != 0)) &&
     (param_1[0x8d] == 0)) {
    plVar10 = (longlong *)(lVar4 + 0x620);
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_c8 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_1442e7fd8;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      plVar6[2] = (longlong)FUN_140c4ebd0;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[4] = lVar7;
      *plVar6 = (longlong)&PTR_FUN_1442e8020;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
      plVar8 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_f0);
      iVar3 = *(int *)(lVar4 + 0x628);
      lVar7 = *plVar8;
      *(int *)(lVar4 + 0x628) = iVar3 + 1;
      if (*(int *)(lVar4 + 0x62c) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar3);
      }
      lVar4 = *plVar10;
      *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar6;
      *(undefined4 *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = 3;
    }
    param_1[0x8d] = lVar7;
  }
  uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  plVar10 = (longlong *)FUN_140c4b080(uVar9);
  if (plVar10 == (longlong *)0x0) {
LAB_140c51822:
    iVar3 = FUN_142235230(param_1);
    if (iVar3 != 3) {
      return;
    }
    lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar7 == 0) {
      return;
    }
    if (*(longlong *)(lVar7 + 400) == 0) {
      uVar9 = *(undefined8 *)(lVar7 + 0x3f8);
    }
    else {
      uVar9 = *(undefined8 *)(*(longlong *)(lVar7 + 400) + 0x90);
    }
    plVar11 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar11 != (longlong *)0x0) {
      *plVar11 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar11 + 1,param_1);
      plVar11[2] = (longlong)FUN_140c51230;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar11[4] = lVar7;
      *plVar11 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_b8 = 0;
    local_b0 = 0;
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x30))(plVar11,&local_b8);
    }
    FWeakObjectPtr::operator=(local_a8,0);
    local_a0 = 0;
    local_98 = AK::MemoryMgr::StartProfileThreadUsage;
    local_68 = (longlong *)0x0;
    local_58 = 0;
    FUN_142880af0(uVar9,&local_b8);
    if (local_58 != 0) {
      plVar12 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar12 = local_68;
      }
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x10))(plVar12,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
    if (plVar11 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar11 + 0x28))(plVar11,0);
    lVar7 = FMemory::Realloc(plVar11,0,0);
    if (lVar7 == 0) {
      return;
    }
    FMemory::Free(lVar7);
    return;
  }
  lVar7 = FUN_14145f370();
  if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_140c51822;
  lVar7 = FWeakObjectPtr::Get(plVar11);
  if (lVar7 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0xa8]) && (local_108 = 0, param_1[0xa9] != 0)) {
      lVar7 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar11,lVar7);
      if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0xa8) = DAT_1464b56f4;
      }
      lVar7 = FWeakObjectPtr::Get(plVar11);
      if (lVar7 != 0) goto LAB_140c5154f;
    }
LAB_140c515bb:
    lVar7 = 0;
  }
  else {
LAB_140c5154f:
    lVar4 = FUN_14216ee80();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140c515bb;
    lVar4 = FUN_14216ee80();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140c515bb;
  }
  local_110 = 0;
  local_118 = 0;
  (**(code **)(*plVar10 + 0xcd0))(plVar10,lVar7,0,0);
  uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  UWorld::GetPlayerControllerIterator(uVar9,&local_100);
  while( true ) {
    if ((local_f8 < 0) || (*(int *)(local_100 + 8) <= local_f8)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    plVar11 = (longlong *)FWeakObjectPtr::Get();
    if (plVar11 != (longlong *)0x0) {
      lVar7 = FUN_14145f370();
      if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) && (cVar2 = (**(code **)(*plVar11 + 0x768))(), cVar2 != '\0')) &&
         (plVar11 = (longlong *)plVar11[0xa5], plVar11 != (longlong *)0x0)) {
        local_d8 = (undefined4)param_1[200];
        uStack_d4 = *(undefined4 *)((longlong)param_1 + 0x644);
        uStack_d0 = (undefined4)param_1[0xc9];
        uStack_cc = *(undefined4 *)((longlong)param_1 + 0x64c);
        (**(code **)(*plVar11 + 0x860))(plVar11,0,&local_d8,0);
      }
    }
    local_f8 = local_f8 + 1;
  }
  lVar7 = (**(code **)(*plVar10 + 0xfa8))(plVar10);
  if (lVar7 == 0) {
    return;
  }
  lVar4 = FWeakObjectPtr::Get(plVar12);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0xad]) && (local_108 = 0, param_1[0xae] != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar12,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0xad) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(plVar12);
      if (lVar4 != 0) goto LAB_140c5174f;
    }
  }
  else {
LAB_140c5174f:
    lVar5 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar5 = FUN_142f2cf80();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_140c517be;
    }
  }
  lVar4 = 0;
LAB_140c517be:
  FUN_142f02280(lVar7,lVar4);
  plVar11 = (longlong *)FUN_140ac3b30(plVar10 + 0x182,local_e8,param_1,FUN_140c4c280);
  param_1[0x8c] = *plVar11;
  return;
}



// FUNCTION 140c51980 FUN_140c51980 body=474 status=ok
// SIG undefined FUN_140c51980(void)

void FUN_140c51980(longlong *param_1,longlong *param_2,char param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  if (((char)param_1[-0x18c] == '\x03') || (param_3 != -1)) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0xf0))(param_1,param_3);
    if ((plVar2 == (longlong *)0x0) || (plVar2 != param_2)) {
      plVar2 = (longlong *)FUN_140e810a0(param_1 + 0xf2,param_3);
      if (plVar2 == param_2) {
        FUN_140e75c90(param_1 + 0xf2,param_3);
        return;
      }
    }
    else {
      if (((((char)param_1[-0x18c] == '\x03') && (param_3 == '\0')) && (0 < (int)param_1[0xd2])) &&
         (((lVar3 = FUN_140e81f30(param_1 + 0xd5,param_2), lVar3 != 0 &&
           (*(char *)(lVar3 + 0x38) != '\0')) && (lVar3 != param_1[0x1e6])))) {
        param_1[0x1e6] = lVar3;
      }
      param_1 = param_1 + -0x1b1;
      cVar1 = FUN_1407cd900(plVar2);
      if (cVar1 == '\0') {
        FWeakObjectPtr::operator=(&local_38,0);
        local_30 = 0;
        puVar4 = (undefined8 *)FName::FName(local_res8,L"WeaponEquipped",1);
        FWeakObjectPtr::operator=(&local_38,param_1);
        local_30 = *puVar4;
        local_28 = local_38;
        local_24 = local_34;
        local_20 = local_30;
        FUN_143094000(plVar2,&local_28);
        (**(code **)(*plVar2 + 0x7d8))(plVar2,*(undefined1 *)((longlong)plVar2 + 0x621));
      }
      else {
        cVar1 = FUN_1407cd900(param_1);
        if (cVar1 == '\0') {
          FUN_140c5e0a0(param_1,param_3);
          return;
        }
      }
    }
  }
  else {
    bVar5 = 0;
    if (0 < (int)param_1[0xf3]) {
      do {
        plVar2 = (longlong *)FUN_140e810a0(param_1 + 0xf2,bVar5);
        if (plVar2 == param_2) {
          FUN_140e75c90(param_1 + 0xf2,bVar5);
          return;
        }
        bVar5 = bVar5 + 1;
      } while ((int)(uint)bVar5 < (int)param_1[0xf3]);
      return;
    }
  }
  return;
}



// FUNCTION 140c51b80 FUN_140c51b80 body=332 status=ok
// SIG undefined FUN_140c51b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c51b80(longlong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [48];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  lVar7 = *(longlong *)(param_1 + 0x1518);
  param_2 = param_2 & 0xffffffffffffff00;
  bVar3 = false;
  lVar8 = (longlong)*(int *)(param_1 + 0x1520) * 0xf8 + lVar7;
  if (lVar7 != lVar8) {
    do {
      plVar5 = *(longlong **)(lVar7 + 8);
      if (plVar5 != (longlong *)0x0) {
        uVar6 = CONCAT71((int7)(param_2 >> 8),1);
        (**(code **)(*plVar5 + 0x918))(plVar5,uVar6);
        param_2 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        bVar3 = true;
      }
      lVar7 = lVar7 + 0xf8;
    } while (lVar7 != lVar8);
    if ((bVar3) && (*(longlong *)(param_1 + 0x948) != 0)) {
      plVar5 = (longlong *)
               (**(code **)(*(longlong *)(param_1 + 0xd88) + 0xf0))((longlong *)(param_1 + 0xd88),0)
      ;
      if (plVar5 != (longlong *)0x0) {
        plVar5 = (longlong *)(**(code **)(*plVar5 + 0x900))(plVar5,1,0);
        if (plVar5 != (longlong *)0x0) {
          cVar4 = (**(code **)(*plVar5 + 0x440))
                            (plVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x330));
          if (cVar4 != '\0') {
            lVar8 = (**(code **)(*plVar5 + 0x420))
                              (plVar5,local_48,
                               *(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x330),3);
            lVar7 = *(longlong *)(param_1 + 0x948);
            uVar1 = *(undefined4 *)(lVar8 + 0x14);
            uVar2 = *(undefined4 *)(lVar8 + 0x18);
            *(undefined4 *)(lVar7 + 0x43c) = *(undefined4 *)(lVar8 + 0x10);
            *(undefined4 *)(lVar7 + 0x440) = uVar1;
            *(undefined4 *)(lVar7 + 0x444) = uVar2;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c51cd0 FUN_140c51cd0 body=98 status=ok
// SIG undefined FUN_140c51cd0(void)

void FUN_140c51cd0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0xd80) + 0x18))();
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x4a8))(plVar1,1);
    }
    FUN_140e75b80(param_1 + 0x1430,1);
    FUN_140e75d40(param_1 + 0x1518,1);
    FUN_140c3be40(param_1);
    return;
  }
  return;
}



// FUNCTION 140c51d40 FUN_140c51d40 body=163 status=ok
// SIG undefined FUN_140c51d40(void)

void FUN_140c51d40(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0xe68) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0xe68) + 0xbf0))();
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x1141) != '\0') {
        *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x1144);
        return;
      }
      goto LAB_140c51d8a;
    }
  }
  if ((*(byte *)(param_1 + 0x56c) & 1) == 0) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    lVar3 = plVar1[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar3 = plVar1[0x1f];
    }
    *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(lVar3 + 0x464);
    return;
  }
LAB_140c51d8a:
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x568);
  return;
}



// FUNCTION 140c51df0 FUN_140c51df0 body=132 status=ok
// SIG undefined FUN_140c51df0(void)

void FUN_140c51df0(longlong param_1)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (**(code **)(*(longlong *)(param_1 + 0xd88) + 0xf0))((longlong *)(param_1 + 0xd88),0);
  if (lVar3 != 0) {
    lVar4 = FUN_14149b100();
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
      if (*(longlong *)(param_1 + 0xe80) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_140a8e500();
      }
      FUN_14127d5f0(lVar3,uVar2);
    }
  }
  return;
}



// FUNCTION 140c51e80 FUN_140c51e80 body=551 status=ok
// SIG undefined FUN_140c51e80(void)

void FUN_140c51e80(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  if ((*(byte *)(param_1 + 0x13fc) & 8) != 0) {
    if ((*(char *)(param_1 + 0x128) == '\x03') &&
       (lVar7 = FUN_140c40ac0(), lVar7 != *(longlong *)(param_1 + 0x1cb0))) {
      *(longlong *)(param_1 + 0x1cb0) = lVar7;
    }
    uVar3 = FUN_1407c3030(param_1 + 0x1ae8);
    FUN_1407c3030(param_1 + 0x1b80);
    cVar4 = FUN_1407c3030(param_1 + 0x1c18);
    uVar8 = FUN_140c46b40(param_1);
    plVar9 = (longlong *)FUN_140c44b40(param_1,uVar8);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x310))(plVar9,uVar3);
      if (cVar4 == '\0') {
        uVar8 = *(undefined8 *)(param_1 + 0x1cb0);
      }
      else {
        uVar8 = 0;
      }
      FUN_140b3d600(plVar9,uVar8,0);
    }
    lVar7 = *(longlong *)(param_1 + 0x14e0);
    lVar12 = (longlong)*(int *)(param_1 + 0x14e8) * 0x40 + lVar7;
    for (; lVar7 != lVar12; lVar7 = lVar7 + 0x40) {
      if ((*(longlong *)(lVar7 + 0x20) != 0) &&
         (*(char *)(*(longlong *)(lVar7 + 0x20) + 0x38) != '\0')) {
        lVar11 = *(longlong *)(param_1 + 0x1420);
        if (lVar11 == 0) {
          if (DAT_146b33f38 == 0) {
            FUN_142d7ebe0();
            lVar11 = *(longlong *)(param_1 + 0x1420);
          }
          if ((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
             (lVar1 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2a8), lVar1 != 0)) {
            *(longlong *)(param_1 + 0x1420) = lVar1;
            lVar11 = lVar1;
          }
        }
        cVar5 = FUN_140e85c60(*(undefined8 *)(lVar7 + 0x20),lVar11);
        if ((cVar5 == '\0') &&
           (plVar9 = (longlong *)
                     FUN_140c44b40(param_1,*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0x70)),
           plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar9 + 0x310))(plVar9,uVar3);
          if (cVar4 == '\0') {
            uVar8 = *(undefined8 *)(lVar7 + 0x10);
          }
          else {
            uVar8 = 0;
          }
          FUN_140b3d600(plVar9,uVar8,0);
        }
      }
    }
    *(int *)(param_1 + 0x136c) = *(int *)(param_1 + 0x136c) + 1;
    bVar2 = false;
    iVar10 = *(int *)(param_1 + 0x136c);
    iVar6 = *(int *)(param_1 + 0x1360) + -1;
    lVar7 = (longlong)iVar6;
    if (-1 < iVar6) {
      lVar12 = lVar7 << 4;
      bVar2 = false;
      do {
        lVar11 = *(longlong *)(param_1 + 0x1358);
        if (((*(int *)(lVar12 + 8 + lVar11) == 0) ||
            (plVar9 = *(longlong **)(lVar12 + lVar11), plVar9 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar9 + 0x40))(), cVar4 == '\0')) {
          bVar2 = true;
        }
        lVar12 = lVar12 + -0x10;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
      iVar10 = *(int *)(param_1 + 0x136c);
    }
    *(int *)(param_1 + 0x136c) = iVar10 + -1;
    if (bVar2) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                ((longlong *)(param_1 + 0x1358),0);
    }
  }
  return;
}



// FUNCTION 140c520b0 FUN_140c520b0 body=190 status=ok
// SIG undefined FUN_140c520b0(void)

void FUN_140c520b0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_1414e0f70();
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
      if (*(char *)(param_1 + 0xb00) == '\0') {
        param_2 = 0;
      }
      if (((*(int *)(param_1 + 0x1e48) == DAT_1464aaa8c) &&
          (*(longlong *)(param_1 + 0x1e38) == param_2)) &&
         (*(char *)(param_1 + 0x1e60) == *(char *)(param_1 + 0xb00))) {
        return;
      }
      *(int *)(param_1 + 0x1e48) = DAT_1464aaa8c;
      *(longlong *)(param_1 + 0x1e40) = param_2;
      FUN_140c524b0(param_1);
      return;
    }
  }
  if (*(char *)(param_1 + 0xb00) == '\0') {
    param_2 = 0;
  }
  FUN_140c35040(param_1,param_2);
  return;
}



// FUNCTION 140c52170 FUN_140c52170 body=825 status=ok
// SIG undefined FUN_140c52170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c52170(longlong *param_1)

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
  undefined8 uVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
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
  longlong *local_68;
  longlong local_60;
  int local_58;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar8 = AXUsableActorScriptedBotEncounter::GetPrivateStaticClass();
  local_a0 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar8 != 0) {
    lVar9 = AXUsableActorScriptedBotEncounter::GetPrivateStaticClass();
    lVar18 = lVar8;
    do {
      if (lVar18 == lVar9) goto LAB_140c521d0;
      lVar18 = *(longlong *)(lVar18 + 0x30);
    } while (lVar18 != 0);
  }
  lVar8 = 0;
LAB_140c521d0:
  local_98[0] = 5;
  local_40 = '\0';
  local_a8 = lVar8;
  FUN_14044bc80(&local_90,&local_a0,&local_a8);
  FUN_14045a130(local_98);
  iVar16 = local_78;
  plVar15 = local_68;
joined_r0x000140c52201:
  local_78 = iVar16;
  local_68 = plVar15;
  if (local_74 == '\0') {
    if (plVar15 != (longlong *)0x0) {
      uVar10 = AArchVisCharacter::StaticClass();
      lVar8 = (**(code **)(*plVar15 + 0x628))(plVar15,uVar10);
      if (lVar8 != 0) {
        FUN_142f44710(lVar8);
      }
    }
    lVar8 = local_90;
    iVar16 = local_78 + 1;
    if (iVar16 < local_58 + local_80) {
      lVar18 = (longlong)iVar16 * 8;
      iVar17 = local_58;
      iVar13 = local_80;
      do {
        if (iVar16 < iVar13) {
          plVar15 = *(longlong **)(local_88 + lVar18);
        }
        else {
          plVar15 = *(longlong **)(local_60 + (longlong)(iVar16 - iVar13) * 8);
        }
        local_70 = local_70 + 1;
        if ((plVar15 != (longlong *)0x0) &&
           (lVar9 = AActor::GetLevel(plVar15), iVar17 = local_58, iVar13 = local_80, lVar9 != 0)) {
          if ((local_98[0] & 1) != 0) {
            iVar1 = *(int *)((longlong)plVar15 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar14 = iVar1 >> 0x1f & 0xffff;
              uVar7 = iVar1 + uVar14;
              lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                       (longlong)(int)((uVar7 & 0xffff) - uVar14) * 0x18;
            }
            else {
              lVar11 = 0;
            }
            if ((*(uint *)(lVar11 + 8) >> 0x1d & 1) != 0) goto LAB_140c523f5;
          }
          if (((local_98[0] >> 1 & 1) == 0) ||
             (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(plVar15), iVar17 = local_58,
             iVar13 = local_80, cVar6 != '\0')) {
            if ((local_98[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar9 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar9 + 0x205) & 0x10) == 0)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              piVar2 = *(int **)(lVar9 + 600);
              if (((*(longlong *)(lVar9 + 0xc0) == 0) ||
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
              iVar17 = local_58;
              iVar13 = local_80;
              if ((!bVar5) || (!bVar3)) goto LAB_140c523f5;
            }
            lVar9 = ULevel::GetWorld(lVar9);
            iVar17 = local_58;
            iVar13 = local_80;
            if (lVar9 == lVar8) {
              lVar9 = AActor::GetLevel(plVar15);
              if (lVar9 == *(longlong *)(lVar8 + 0x30)) goto joined_r0x000140c52201;
              lVar9 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(plVar15[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar15[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                  lVar9 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              iVar17 = local_58;
              iVar13 = local_80;
              if (!bVar5) goto joined_r0x000140c52201;
            }
          }
        }
LAB_140c523f5:
        iVar16 = iVar16 + 1;
        lVar18 = lVar18 + 8;
        if (iVar17 + iVar13 <= iVar16) break;
      } while( true );
    }
    local_68 = (longlong *)0x0;
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
  return;
}



// FUNCTION 140c524b0 FUN_140c524b0 body=1928 status=ok
// SIG undefined FUN_140c524b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c524b0(longlong *param_1)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined8 local_f8;
  longlong local_f0;
  code *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if (((char)param_1[0x25] != '\x03') &&
     (((param_1[0x3c8] != 0 && (*(longlong *)(param_1[0x3c8] + 0x6d8) == 0)) ||
      ((param_1[0x3c7] != 0 && (*(longlong *)(param_1[0x3c7] + 0x6d8) == 0)))))) {
    FWeakObjectPtr::operator=(&local_f8,param_1);
    local_b8 = (longlong *)0x0;
    local_a8 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_CopyToEmptyStorage_143fcfe50;
      *(undefined4 *)(puVar7 + 1) = (undefined4)local_f8;
      *(undefined4 *)((longlong)puVar7 + 0xc) = local_f8._4_4_;
    }
    local_e8[0] = FUN_140c394b0;
    lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar8 + 400) == 0) {
      uVar11 = *(undefined8 *)(lVar8 + 0x3f8);
    }
    else {
      uVar11 = *(undefined8 *)(*(longlong *)(lVar8 + 400) + 0x90);
    }
    local_98 = 0;
    local_90 = 0;
    FWeakObjectPtr::operator=(local_88,0);
    local_80 = 0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,local_e8);
    FUN_142880af0(uVar11,&local_98);
    if (local_38 != 0) {
      plVar9 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar9 = local_48;
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (local_a8 != 0) {
      plVar9 = local_d8;
      if (local_b8 != (longlong *)0x0) {
        plVar9 = local_b8;
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
      }
    }
    if (local_b8 == (longlong *)0x0) {
      return;
    }
    FMemory::Free();
    return;
  }
  lVar8 = param_1[0x3c8];
  lVar10 = param_1[0x3c7];
  if (lVar8 != lVar10) {
    if (lVar8 == 0) {
      if (lVar10 != 0) {
        if (((char)param_1[0x3cc] == '\x01') || ((char)param_1[0x3cc] == '\x02')) {
          if (*(longlong *)(lVar10 + 0x6d8) != 0) {
            FUN_14124eab0(*(longlong *)(lVar10 + 0x6d8),lVar10,param_1,
                          *(undefined1 *)((longlong)param_1 + 0x13c1));
            lVar10 = param_1[0x3c7];
          }
          (**(code **)(*param_1 + 0xc68))(param_1,lVar10);
          local_f8 = param_1[0x3c7];
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x3b5,&local_f8);
          lVar10 = param_1[0x3c7];
        }
        if (*(longlong *)(lVar10 + 0x6d8) != 0) {
          FUN_14124e9b0(*(longlong *)(lVar10 + 0x6d8),lVar10,param_1,
                        *(undefined1 *)((longlong)param_1 + 0x13c1));
          lVar10 = param_1[0x3c7];
        }
        (**(code **)(*param_1 + 0xc70))(param_1,lVar10);
        local_f8 = param_1[0x3c7];
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x3b7,&local_f8);
        *(undefined1 *)((longlong)param_1 + 0x1e61) = 0;
      }
    }
    else {
      if (lVar10 != 0) {
        lVar3 = *(longlong *)(lVar10 + 0x6d8);
        if (*(longlong *)(lVar8 + 0x6d8) == lVar3) {
          if ((char)param_1[0x160] == '\x03') {
            (**(code **)(*param_1 + 0xc68))(param_1,lVar8);
            local_f8 = param_1[0x3c8];
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (param_1 + 0x3b5,&local_f8);
            param_1[0x3c7] = param_1[0x3c8];
          }
          else {
            pcVar4 = *(code **)(*param_1 + 0xc78);
            if ((char)param_1[0x160] == '\x02') {
              (*pcVar4)();
              local_f8 = param_1[0x3c7];
              local_f0 = param_1[0x3c8];
              TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                        (param_1 + 0x3b9,&local_f8);
              (**(code **)(*param_1 + 0xc80))(param_1,param_1[0x3c8]);
              local_f8 = param_1[0x3c8];
              TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                        (param_1 + 0x3bb,&local_f8);
              param_1[0x3c7] = param_1[0x3c8];
            }
            else {
              (*pcVar4)(param_1,lVar10,lVar8);
              local_f8 = param_1[0x3c7];
              local_f0 = param_1[0x3c8];
              TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                        (param_1 + 0x3b9,&local_f8);
              param_1[0x3c7] = param_1[0x3c8];
              *(undefined1 *)((longlong)param_1 + 0x1e61) = 1;
            }
          }
        }
        else {
          if (lVar3 != 0) {
            FUN_14124e9b0(lVar3,lVar10,param_1,*(undefined1 *)((longlong)param_1 + 0x13c1));
          }
          if ((char)param_1[0x3cc] == '\x02') {
            (**(code **)(*param_1 + 0xc68))(param_1,param_1[0x3c7]);
            local_f8 = param_1[0x3c7];
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (param_1 + 0x3b5,&local_f8);
          }
          (**(code **)(*param_1 + 0xc70))(param_1,param_1[0x3c7]);
          local_f8 = param_1[0x3c7];
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x3b7,&local_f8);
          lVar8 = param_1[0x3c8];
          if (*(longlong *)(lVar8 + 0x6d8) != 0) {
            local_108 = *(undefined1 *)(lVar8 + 0x6a8);
            FUN_14124e800(*(longlong *)(lVar8 + 0x6d8),lVar8,param_1,
                          *(undefined1 *)((longlong)param_1 + 0x13c1));
            lVar8 = param_1[0x3c8];
          }
          (**(code **)(*param_1 + 0xc58))(param_1,lVar8);
          local_f8 = param_1[0x3c8];
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x3b1,&local_f8);
          param_1[0x3c7] = param_1[0x3c8];
        }
        goto LAB_140c52c07;
      }
      if ((char)param_1[0x160] != '\x03') {
        if (*(longlong *)(lVar8 + 0x6d8) != 0) {
          local_108 = *(undefined1 *)(lVar8 + 0x6a8);
          FUN_14124e800(*(longlong *)(lVar8 + 0x6d8),lVar8,param_1,
                        *(undefined1 *)((longlong)param_1 + 0x13c1));
          lVar8 = param_1[0x3c8];
        }
        (**(code **)(*param_1 + 0xc58))(param_1,lVar8);
        local_f8 = param_1[0x3c8];
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x3b1,&local_f8);
        if ((char)param_1[0x160] == '\x02') {
          (**(code **)(*param_1 + 0xc60))(param_1,param_1[0x3c8]);
          local_f8 = param_1[0x3c8];
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x3b3,&local_f8);
          if ((char)param_1[0x25] != '\x03') {
            FWeakObjectPtr::operator=(&local_f8,param_1);
            uVar5 = (undefined4)local_f8;
            uVar6 = local_f8._4_4_;
            local_b8 = (longlong *)0x0;
            local_a8 = 0;
            puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = &PTR_CopyToEmptyStorage_143fcfe50;
              *(undefined4 *)(puVar7 + 1) = uVar5;
              *(undefined4 *)((longlong)puVar7 + 0xc) = uVar6;
            }
            local_e8[0] = FUN_140c394d0;
            lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
            if (*(longlong *)(lVar8 + 400) == 0) {
              uVar11 = *(undefined8 *)(lVar8 + 0x3f8);
            }
            else {
              uVar11 = *(undefined8 *)(*(longlong *)(lVar8 + 400) + 0x90);
            }
            local_98 = 0;
            local_90 = 0;
            FWeakObjectPtr::operator=(local_88,0);
            local_80 = 0;
            TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,local_e8);
            FUN_142880af0(uVar11,&local_98);
            if (local_38 != 0) {
              plVar9 = local_68;
              if (local_48 != (longlong *)0x0) {
                plVar9 = local_48;
              }
              if (plVar9 != (longlong *)0x0) {
                (**(code **)(*plVar9 + 0x10))(plVar9,0);
              }
            }
            if (local_48 != (longlong *)0x0) {
              FMemory::Free();
            }
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
            if (local_a8 != 0) {
              plVar9 = local_d8;
              if (local_b8 != (longlong *)0x0) {
                plVar9 = local_b8;
              }
              if (plVar9 != (longlong *)0x0) {
                (**(code **)(*plVar9 + 0x10))(plVar9,0);
              }
            }
            if (local_b8 != (longlong *)0x0) {
              FMemory::Free();
              param_1[0x3c7] = param_1[0x3c8];
              goto LAB_140c52c07;
            }
          }
        }
      }
    }
    param_1[0x3c7] = param_1[0x3c8];
    goto LAB_140c52c07;
  }
  if (lVar8 == 0) goto LAB_140c52c07;
  cVar1 = (char)param_1[0x160];
  cVar2 = (char)param_1[0x3cc];
  if (cVar2 == cVar1) goto LAB_140c52c07;
  if ((cVar2 == '\x01') && (cVar1 == '\x02')) {
    if (*(char *)((longlong)param_1 + 0x1e61) == '\0') {
      (**(code **)(*param_1 + 0xc60))(param_1,lVar8);
      plVar9 = param_1 + 0x3b3;
LAB_140c52be3:
      local_f8 = param_1[0x3c8];
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(plVar9,&local_f8);
    }
    else {
      (**(code **)(*param_1 + 0xc80))();
      local_f8 = param_1[0x3c8];
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x3bb,&local_f8);
      *(undefined1 *)((longlong)param_1 + 0x1e61) = 0;
    }
  }
  else if ((cVar1 == '\x03') && ((byte)(cVar2 - 1U) < 2)) {
    if (*(longlong *)(lVar10 + 0x6d8) != 0) {
      FUN_14124eab0(*(longlong *)(lVar10 + 0x6d8),lVar10,param_1,
                    *(undefined1 *)((longlong)param_1 + 0x13c1));
      lVar8 = param_1[0x3c8];
    }
    (**(code **)(*param_1 + 0xc68))(param_1,lVar8);
    plVar9 = param_1 + 0x3b5;
    goto LAB_140c52be3;
  }
  if (((char)param_1[0x3cc] == '\x02') && (cVar1 == '\0')) {
    return;
  }
LAB_140c52c07:
  *(char *)(param_1 + 0x3cc) = (char)param_1[0x160];
  return;
}



// FUNCTION 140c52c40 FUN_140c52c40 body=577 status=ok
// SIG undefined FUN_140c52c40(void)

void FUN_140c52c40(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  undefined2 *puVar13;
  longlong lVar14;
  undefined2 *local_58;
  undefined8 local_50;
  
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x28);
  if (((cVar4 != '\0') && ((int)param_2[1] != 0)) &&
     (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x28), cVar4 != '\0')) {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x28);
    lVar6 = FUN_1424503b0(uVar5);
    if (((lVar6 != 0) && (*(char *)(lVar6 + 0x128) == '\x03')) &&
       (lVar6 = FUN_140c44470(param_1), lVar6 != 0)) {
      lVar6 = *param_2;
      lVar7 = (longlong)(int)param_2[1] * 0x48 + lVar6;
      for (; lVar6 != lVar7; lVar6 = lVar6 + 0x48) {
        lVar12 = *(longlong *)(lVar6 + 0x38);
        lVar14 = (longlong)*(int *)(lVar6 + 0x40) * 0x20 + lVar12;
        if (lVar12 != lVar14) {
          piVar10 = (int *)(lVar12 + 0x14);
          do {
            iVar1 = piVar10[1];
            if (((piVar10[-3] != 0) || (piVar10[-2] != 0)) &&
               ((piVar10[-1] != 0 || (*piVar10 != 0)))) {
              local_58 = (undefined2 *)0x0;
              local_50 = 0x13;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
              puVar2 = local_58;
              FGenericPlatformString::Memcpy(local_58,L"OakModifierManager",0x26);
              if (DAT_146b33f38 == 0) {
                FUN_142d7ebe0();
              }
              lVar11 = *(longlong *)(DAT_146b33f38 + 0x58);
              if (lVar11 == 0) {
                lVar9 = 0;
                lVar11 = 0;
              }
              else {
                lVar9 = *(longlong *)(lVar11 + 0x5f8);
                lVar11 = *(longlong *)(lVar11 + 0x600);
              }
              iVar3 = (int)local_50;
              if (lVar9 == 0) {
                uVar5 = 0;
              }
              else {
                puVar13 = &DAT_143f3eda8;
                if ((int)local_50 != 0) {
                  puVar13 = puVar2;
                }
                uVar5 = FUN_140c2d920(lVar9,*(undefined8 *)(piVar10 + -3),puVar13,1);
              }
              if (lVar11 == 0) {
                uVar8 = 0;
              }
              else {
                puVar13 = &DAT_143f3eda8;
                if (iVar3 != 0) {
                  puVar13 = puVar2;
                }
                uVar8 = FUN_140c2d850(lVar11,*(undefined8 *)(piVar10 + -1),puVar13,1);
              }
              FUN_140c53000(param_1,uVar5,uVar8,iVar1,lVar12);
              if (puVar2 != (undefined2 *)0x0) {
                FMemory::Free(puVar2);
              }
            }
            lVar12 = lVar12 + 0x20;
            piVar10 = piVar10 + 8;
          } while (lVar12 != lVar14);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c52e90 FUN_140c52e90 body=358 status=ok
// SIG undefined FUN_140c52e90(void)

ulonglong FUN_140c52e90(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4,
                       undefined4 param_5)

{
  longlong lVar1;
  undefined2 *puVar2;
  byte bVar3;
  ulonglong in_RAX;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined2 *local_38;
  undefined8 local_30;
  
  if (((*param_3 != 0) || (param_3[1] != 0)) && ((*param_4 != 0 || (param_4[1] != 0)))) {
    lVar5 = 0;
    local_38 = (undefined2 *)0x0;
    local_30 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    puVar2 = local_38;
    FGenericPlatformString::Memcpy(local_38,L"OakModifierManager",0x26);
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar4 = *(longlong *)(DAT_146b33f38 + 0x58);
    lVar7 = lVar5;
    lVar1 = lVar5;
    if (lVar4 != 0) {
      lVar7 = *(longlong *)(lVar4 + 0x600);
      lVar1 = *(longlong *)(lVar4 + 0x5f8);
    }
    lVar4 = lVar5;
    if (lVar1 != 0) {
      puVar6 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar6 = puVar2;
      }
      lVar4 = FUN_140c2d920(lVar1,*(undefined8 *)param_3,puVar6,1);
    }
    if (lVar7 != 0) {
      puVar6 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar6 = puVar2;
      }
      lVar5 = FUN_140c2d850(lVar7,*(undefined8 *)param_4,puVar6,1);
    }
    bVar3 = FUN_140c53000(param_1,lVar4,lVar5,param_5,param_2);
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
    return (ulonglong)bVar3;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140c53000 FUN_140c53000 body=219 status=ok
// SIG undefined FUN_140c53000(void)

ulonglong FUN_140c53000(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                       int *param_5)

{
  int *piVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 local_38 [8];
  int *local_30;
  undefined8 *local_28;
  
  piVar1 = param_5;
  uVar3 = 0;
  if ((((*param_5 == 0) && (param_5[1] == 0)) ||
      (in_RAX = FUN_140c446b0(param_1,param_5), (char)in_RAX != DAT_146b4ae20)) ||
     ((param_2 == 0 || (param_3 == 0)))) {
    uVar3 = in_RAX & 0xffffffffffffff00;
  }
  else {
    lVar2 = FUN_140c44470(param_1);
    if ((lVar2 != 0) &&
       (param_5._0_1_ = FUN_14099d430(lVar2,param_2,param_3,param_4), (char)param_5 != DAT_146b4ae20
       )) {
      local_28 = &param_5;
      local_30 = piVar1;
      FUN_140c2d3a0(param_1 + 0x30,local_38,&local_30,0);
      uVar3 = 1;
    }
  }
  return uVar3;
}



// FUNCTION 140c530e0 FUN_140c530e0 body=1054 status=ok
// SIG undefined FUN_140c530e0(void)

void FUN_140c530e0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  char local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  undefined1 *local_80;
  char *local_78;
  longlong local_70 [2];
  longlong local_60 [4];
  
  local_res10 = param_2;
  FUN_140c5b630();
  puVar3 = (undefined8 *)FName::ToString(&local_res10,local_60);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*puVar3;
  }
  puVar3 = (undefined8 *)FPackageName::GetShortName(local_70,puVar11);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*puVar3;
  }
  FName::FName(&local_c0,puVar11,1);
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x28);
  if (cVar2 != '\0') {
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x28);
    lVar5 = FUN_1424503b0(uVar4);
    if (((lVar5 != 0) && (*(char *)(lVar5 + 0x128) == '\x03')) &&
       (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x28), cVar2 != '\0')) {
      plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x28);
      lVar5 = (**(code **)(*plVar6 + 0x148))(plVar6);
      if ((lVar5 != 0) && (lVar5 = UWorld::GetGameState<APVPGameState>(lVar5), lVar5 != 0)) {
        FUN_140b5b740(lVar5 + 0x670,&local_d8);
        for (plVar6 = local_d8; plVar6 != local_d8 + (int)local_d0; plVar6 = plVar6 + 1) {
          if (*plVar6 == local_c0) goto LAB_140c534d8;
        }
      }
    }
  }
  lVar5 = FUN_140c44470(param_1);
  if (lVar5 != 0) {
    local_c8 = *(longlong **)(param_1 + 0x80);
    local_a8 = local_c8 + (longlong)*(int *)(param_1 + 0x88) * 7;
    if (local_c8 != local_a8) {
      do {
        lVar12 = *local_c8;
        lVar13 = (longlong)(int)local_c8[1] * 0x30 + lVar12;
        if (lVar12 != lVar13) {
          lVar14 = 0;
LAB_140c532a0:
          lVar7 = FUN_1405ec200(lVar12);
          if (lVar7 != 0) {
            lVar8 = FUN_14171bfe0();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              lVar9 = FUN_1430f1090();
              lVar8 = lVar7;
              do {
                if (lVar8 == lVar9) {
                  local_res8[0] = FUN_14099d1d0(lVar5,lVar7,*(undefined8 *)(lVar12 + 0x28));
                  if (local_res8[0] != DAT_146b4ae20) {
                    lVar8 = FWeakObjectPtr::Get(lVar12);
                    lVar7 = lVar14;
                    if (lVar8 == 0) {
                      LOCK();
                      if (DAT_1464b56f4 == 0) {
                        DAT_1464b56f4 = 0;
                      }
                      UNLOCK();
                      if ((DAT_1464b56f4 == *(int *)(lVar12 + 8)) ||
                         (local_res20 = 0, *(longlong *)(lVar12 + 0x10) == 0)) goto LAB_140c533e8;
                      lVar8 = FUN_141796df0(lVar12 + 0x10);
                      FWeakObjectPtr::operator=(lVar12,lVar8);
                      if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
                        LOCK();
                        if (DAT_1464b56f4 == 0) {
                          DAT_1464b56f4 = 0;
                        }
                        UNLOCK();
                        *(int *)(lVar12 + 8) = DAT_1464b56f4;
                      }
                      lVar8 = FWeakObjectPtr::Get(lVar12);
                      if (lVar8 == 0) goto LAB_140c533e8;
                    }
                    lVar9 = FUN_14171bfe0();
                    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (!bVar1) goto LAB_140c533e8;
                    lVar10 = FUN_1430f1090();
                    lVar9 = lVar8;
                    goto LAB_140c533d7;
                  }
                  break;
                }
                lVar8 = *(longlong *)(lVar8 + 0x30);
              } while (lVar8 != 0);
            }
          }
          goto LAB_140c53489;
        }
LAB_140c5349a:
        local_c8 = local_c8 + 7;
      } while (local_c8 != local_a8);
    }
  }
LAB_140c534d8:
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  return;
  while (lVar9 = *(longlong *)(lVar9 + 0x30), lVar7 = lVar14, lVar9 != 0) {
LAB_140c533d7:
    lVar7 = lVar8;
    if (lVar9 == lVar10) break;
  }
LAB_140c533e8:
  local_b8 = *(undefined8 *)(lVar7 + 0x18);
  FName::ToString(&local_b8,&local_90);
  puVar11 = &DAT_143f3eda8;
  if (local_88 != 0) {
    puVar11 = local_90;
  }
  FString::PrintfImpl(&local_a0,L"%s_%08d",puVar11,DAT_14686c354);
  puVar11 = &DAT_143f3eda8;
  if (local_98 != 0) {
    puVar11 = local_a0;
  }
  FName::FName(local_b0,puVar11,1);
  if (local_a0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_90 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  DAT_14686c354 = DAT_14686c354 + 1;
  local_80 = local_b0;
  local_78 = local_res8;
  FUN_140c2d3a0(param_1 + 0x30,local_res18,&local_80,0);
LAB_140c53489:
  lVar12 = lVar12 + 0x30;
  if (lVar12 == lVar13) goto LAB_140c5349a;
  goto LAB_140c532a0;
}



// FUNCTION 140c53500 FUN_140c53500 body=923 status=ok
// SIG undefined FUN_140c53500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_140c53500(longlong param_1)

{
  int iVar1;
  int *piVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int *piVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_a0 [2];
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar10 = *(longlong *)(param_1 + 0x118);
  if (lVar10 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if ((bVar15) && (*(char *)(lVar10 + 0x128) == '\x03')) {
      lVar7 = *(longlong *)(lVar10 + 0x848);
      if (lVar7 != 0) {
        lVar8 = FUN_1413ffe00();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar15 = false;
        }
        else {
          bVar15 = true;
        }
        if (bVar15) {
          pwVar9 = _guard_xfg_dispatch_icall_nop
                             (L"&UOakPlayerMissionComponent::OnWeaponChanged",L"::");
          pwVar4 = (wchar_t *)0x0;
          while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
            pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
            pwVar4 = pwVar3;
          }
          FName::FName(local_a0,pwVar4 + 2,1);
          plVar13 = (longlong *)(lVar7 + 0x1050);
          FWeakObjectPtr::operator=(&local_b8,0);
          uStack_b0 = 0;
          FWeakObjectPtr::operator=(&local_b8,param_1);
          uStack_b0 = local_a0[0];
          local_a8 = 0;
          if ((local_a0[0] != 0) && (lVar10 = FWeakObjectPtr::Get(&local_b8), lVar10 != 0)) {
            UObject::FindFunction(lVar10,uStack_b0);
          }
          piVar2 = (int *)*plVar13;
          iVar1 = *(int *)(lVar7 + 0x1058);
          piVar5 = piVar2;
          uVar11 = local_b8;
          do {
            local_b8 = (code *)uVar11;
            if (piVar5 == piVar2 + (longlong)iVar1 * 4) {
LAB_140c536ed:
              iVar1 = *(int *)(lVar7 + 0x1058);
              *(int *)(lVar7 + 0x1058) = iVar1 + 1;
              if (*(int *)(lVar7 + 0x105c) < iVar1 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar1);
              }
              puVar12 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar13);
              *puVar12 = (int)local_b8;
              puVar12[1] = local_b8._4_4_;
              *(longlong *)(puVar12 + 2) = uStack_b0;
LAB_140c53723:
              TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
              FUN_140c4efc0(param_1,0,0);
              return;
            }
            local_b8._0_4_ = (int)uVar11;
            if (((*piVar5 == (int)local_b8) &&
                (local_b8._4_4_ = (int)((ulonglong)uVar11 >> 0x20),
                bVar15 = piVar5[1] == local_b8._4_4_, bVar15)) ||
               ((cVar6 = FWeakObjectPtr::IsValid(piVar5), cVar6 == '\0' &&
                (cVar6 = FWeakObjectPtr::IsValid(&local_b8), cVar6 == '\0')))) {
              bVar15 = true;
            }
            else {
              bVar15 = false;
            }
            if ((bVar15) && (*(longlong *)(piVar5 + 2) == uStack_b0)) {
              bVar15 = true;
            }
            else {
              bVar15 = false;
            }
            if (bVar15) {
              if ((int)((longlong)piVar5 - (longlong)piVar2 >> 4) != -1) goto LAB_140c53723;
              goto LAB_140c536ed;
            }
            piVar5 = piVar5 + 4;
            uVar11 = local_b8;
          } while( true );
        }
      }
      local_b8 = FUN_140c53500;
      uStack_b0._0_4_ = 0;
      uVar11 = AActor::GetWorldTimerManager(lVar10);
      plVar13 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar13 != (longlong *)0x0) {
        *plVar13 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar13 + 1,param_1);
        *(int *)(plVar13 + 2) = (int)local_b8;
        *(int *)((longlong)plVar13 + 0x14) = local_b8._4_4_;
        *(undefined4 *)(plVar13 + 3) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_b0._4_4_;
        lVar10 = FDelegateHandle::GenerateNewID();
        plVar13[5] = lVar10;
        *plVar13 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_a0[1] = 0;
      local_90 = 0;
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x30))(plVar13,local_a0 + 1);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_c0 = 0xbf800000;
      local_c8 = 0;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar11,param_1 + 0x1f0,local_a0 + 1,0x3dcccccd);
      if (local_38 != 0) {
        plVar14 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar14 = local_48;
        }
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x10))(plVar14,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(local_a0 + 1);
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x28))(plVar13,0);
        lVar10 = FMemory::Realloc(plVar13,0,0);
        if (lVar10 != 0) {
          FMemory::Free(lVar10);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c538a0 FUN_140c538a0 body=544 status=ok
// SIG undefined FUN_140c538a0(void)

void FUN_140c538a0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
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
      uVar11 = 0;
      uVar12 = (ulonglong)uVar5;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar10 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_38;
      }
      uVar5 = *puVar13;
      local_68 = 0;
      iStack_50 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar9 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar9;
        if (bVar4) goto LAB_140c539cf;
        uVar5 = puVar13[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar9 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_54 = (iStack_50 - iVar9) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_140c539cf:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = *param_1;
        lVar8 = (longlong)iStack_2c;
        uVar5 = FCrc::MemCrc32(*(undefined8 *)(lVar6 + lVar8 * 0x48),
                               *(int *)(lVar6 + 8 + lVar8 * 0x48) * 0x30,0);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x44 + lVar8 * 0x48) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x40 + lVar8 * 0x48) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 140c53ac0 Rehash body=521 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<unsigned_char,FName>,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
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
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar10) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar10;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar10 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar5) goto LAB_140c53bff;
        uVar10 = puVar13[lVar6 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
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
      if (iVar4 < iStack_44) {
LAB_140c53bff:
        iStack_44 = iVar4;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        pbVar3 = (byte *)(*param_1 + (longlong)iStack_1c * 0x14);
        uVar10 = (int)*plVar2 - 1U & (uint)*pbVar3;
        *(uint *)(pbVar3 + 0x10) = uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(pbVar3 + 0xc) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140c53cd0 Rehash body=521 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<enum_EGRumbleActionBarContextAction,FGRumbleActionBarContextActionData>,TDefaultMapHashableKeyFuncs<enum_EGRumbleActionBarContextAction,FGRumbleActionBarContextActionData,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte *pbVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int iStack_44;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar4 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar4 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar4) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar4;
      do {
        uVar8 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar8 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    iVar10 = 0;
    iStack_44 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      uVar4 = *puVar13;
      iVar5 = 0;
      while (uVar4 == 0) {
        iVar10 = iVar10 + 0x20;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140c53e0f;
        uVar4 = puVar13[(longlong)iVar5 + 1];
        iVar5 = iVar5 + 1;
      }
      uVar4 = -uVar4 & uVar4;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uVar4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      iStack_44 = (iVar10 - iVar5) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_140c53e0f:
        iStack_44 = iVar3;
      }
    }
    while (iStack_44 < iVar3) {
      pbVar9 = (byte *)((longlong)iStack_44 * 0x30 + *param_1);
      uVar4 = (int)*plVar2 - 1U & (uint)*pbVar9;
      *(uint *)(pbVar9 + 0x2c) = uVar4;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(pbVar9 + 0x28) =
           *(undefined4 *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar4) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar4) * 4) = iStack_44;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
      iVar3 = (int)param_1[5];
    }
  }
  return;
}



// FUNCTION 140c53ee0 FUN_140c53ee0 body=517 status=ok
// SIG undefined FUN_140c53ee0(void)

void FUN_140c53ee0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte *pbVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int iStack_44;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar4 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar4 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar4) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar4;
      do {
        uVar8 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar8 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    iVar10 = 0;
    iStack_44 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      uVar4 = *puVar13;
      iVar5 = 0;
      while (uVar4 == 0) {
        iVar10 = iVar10 + 0x20;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140c5401f;
        uVar4 = puVar13[(longlong)iVar5 + 1];
        iVar5 = iVar5 + 1;
      }
      uVar4 = -uVar4 & uVar4;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uVar4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      iStack_44 = (iVar10 - iVar5) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_140c5401f:
        iStack_44 = iVar3;
      }
    }
    while (iStack_44 < iVar3) {
      pbVar9 = (byte *)((longlong)iStack_44 * 0x70 + *param_1);
      uVar4 = (int)*plVar2 - 1U & (uint)*pbVar9;
      *(uint *)(pbVar9 + 0x6c) = uVar4;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(pbVar9 + 0x68) =
           *(undefined4 *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar4) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar4) * 4) = iStack_44;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
      iVar3 = (int)param_1[5];
    }
  }
  return;
}



// FUNCTION 140c540f0 FUN_140c540f0 body=129 status=ok
// SIG undefined FUN_140c540f0(void)

void FUN_140c540f0(longlong *param_1,longlong param_2,undefined1 param_3)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0xa68))();
  }
  lVar3 = (**(code **)(param_1[0x1b1] + 0xf0))(param_1 + 0x1b1,uVar1);
  if (lVar3 != 0) {
    cVar2 = FUN_140c39ab0(param_1,uVar1,2);
    if (cVar2 != '\0') {
      FUN_14308e980(lVar3,param_3);
    }
  }
  return;
}



// FUNCTION 140c54180 RemoveAtImpl body=113 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<int,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = (int)param_1[1];
    iVar2 = (iVar1 - param_2) - param_3;
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 4),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 4),(longlong)iVar2 << 2);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 - param_3;
    if (param_4 != '\0') {
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140c54200 RemoveAtImpl body=190 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FGQuestDatumList,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_3 != 0) {
    lVar2 = *param_1 + (longlong)param_2 * 0x18;
    iVar3 = param_3;
    do {
      TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_>::
      ~TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_>(lVar2);
      lVar2 = lVar2 + 0x18;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x18),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 0x18),(longlong)iVar1 * 0x18);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140c542c0 FUN_140c542c0 body=17 status=ok
// SIG undefined FUN_140c542c0(void)

void FUN_140c542c0(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  plVar2 = *(longlong **)(param_1 + 0xe78);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  if ((int)plVar2[0xce] == 0) {
    iVar3 = FUN_14233f450();
    if (((iVar3 == 3) && (0 < param_2)) && (param_2 < (int)plVar2[0xd0])) {
      plVar1 = plVar2 + 0xcf;
      lVar5 = (longlong)param_2 * 0x78;
      FUN_140a7d5a0(param_3,*plVar1 + lVar5);
      if (*(longlong *)(lVar5 + 0x10 + *plVar1) != 0) {
        FMemory::Free();
      }
      iVar3 = (int)plVar2[0xd0];
      iVar4 = (iVar3 - param_2) + -1;
      if (iVar4 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar1 + lVar5),(void *)((longlong)(param_2 + 1) * 0x78 + *plVar1),
                   (longlong)iVar4 * 0x78);
        iVar3 = (int)plVar2[0xd0];
      }
      *(int *)(plVar2 + 0xd0) = iVar3 + -1;
      FUN_14089e470(plVar1);
      TBaseDelegate<void>::ExecuteIfBound(plVar2 + 299);
      (**(code **)(*plVar2 + 0x260))(plVar2);
    }
  }
  return;
}



// FUNCTION 140c542e0 FUN_140c542e0 body=83 status=ok
// SIG undefined FUN_140c542e0(void)

void FUN_140c542e0(longlong param_1,undefined8 *param_2)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_58 = param_2[2];
  uStack_50 = param_2[3];
  local_48 = param_2[4];
  uStack_40 = param_2[5];
  local_38 = param_2[6];
  uStack_30 = param_2[7];
  local_28 = *(undefined4 *)(param_2 + 8);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x44);
  uStack_20 = *(undefined4 *)(param_2 + 9);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x4c);
  local_18 = param_2[10];
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1d50,&local_68);
  return;
}



// FUNCTION 140c54340 FUN_140c54340 body=206 status=ok
// SIG undefined FUN_140c54340(void)

void FUN_140c54340(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  
  uVar6 = 0;
  piVar8 = (int *)*param_3;
  uVar7 = (longlong)*(int *)(param_3 + 1) & 0x3fffffffffffffff;
  if (piVar8 + *(int *)(param_3 + 1) < piVar8) {
    uVar7 = uVar6;
  }
  if (uVar7 != 0) {
    plVar1 = (longlong *)(param_1 + 0x5d0);
    do {
      piVar4 = (int *)*plVar1;
      iVar2 = *(int *)(param_1 + 0x5d8);
      iVar3 = *piVar8;
      for (piVar5 = piVar4; piVar5 != piVar4 + iVar2; piVar5 = piVar5 + 1) {
        if (*piVar5 == iVar3) {
          if ((int)((longlong)piVar5 - (longlong)piVar4 >> 2) != -1) goto LAB_140c543e9;
          break;
        }
      }
      *(int *)(param_1 + 0x5d8) = iVar2 + 1;
      if (*(int *)(param_1 + 0x5dc) < iVar2 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      *(int *)((longlong)iVar2 * 4 + *plVar1) = iVar3;
LAB_140c543e9:
      piVar8 = piVar8 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7);
  }
  return;
}



// FUNCTION 140c54410 FUN_140c54410 body=54 status=ok
// SIG undefined FUN_140c54410(void)

void FUN_140c54410(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0xd80) + 0x18))();
  if ((*param_2 != -1) && (lVar1 != 0)) {
    FUN_1430259b0(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 140c54450 FUN_140c54450 body=383 status=ok
// SIG undefined FUN_140c54450(void)

void FUN_140c54450(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x128) != '\x03') {
    return;
  }
  uVar3 = FUN_140c46b40();
  cVar2 = FUN_1404724a0(uVar3,param_2);
  if (cVar2 == '\0') goto LAB_140c5458f;
  lVar6 = *(longlong *)(param_1 + 0x1d18);
  if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x1cd0) != param_1)) {
    lVar6 = param_1;
  }
  if (param_3 == 0) {
LAB_140c544ef:
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_1430b3b80();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar4 = param_3;
    if (!bVar1) goto LAB_140c544ef;
  }
  lVar6 = lVar6 + 0x1518;
  cVar2 = FUN_140e7ef80(lVar6,param_3);
  if (cVar2 != -1) {
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x7f8) != DAT_146b47938)) {
      uVar3 = FUN_140e7eef0(lVar6,cVar2);
      FUN_140c57820(param_1,0,uVar3,1,0);
    }
    lVar5 = FUN_140e810a0(lVar6,cVar2);
    if (param_3 == lVar5) {
      FUN_140e75c90(lVar6,cVar2);
    }
  }
  if (lVar4 != 0) {
    FUN_140e8eb20(param_1 + 0x1518,lVar4);
    cVar2 = FUN_1407cd900(param_1);
    if (cVar2 == '\0') {
      FUN_1430712b0(lVar4);
    }
  }
LAB_140c5458f:
  if (param_3 != 0) {
    if (*(longlong *)(param_1 + 0x1cd0) == 0) {
      param_1 = param_1 + 0x1430;
    }
    else {
      param_1 = FUN_140c428a0();
    }
    FUN_140e949c0(param_1,param_3,1,0);
  }
  return;
}



// FUNCTION 140c545d0 FUN_140c545d0 body=545 status=ok
// SIG undefined FUN_140c545d0(void)

void FUN_140c545d0(longlong param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int local_res10 [4];
  undefined1 local_res20 [8];
  uint uVar7;
  
  if (param_2 != (longlong *)0x0) {
    uVar2 = FUN_14301f8f0();
    lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x208) != 0)) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x208) + 0x1d8), lVar3 != 0)) {
      if (param_3 == (longlong *)0x0) {
        return;
      }
      uVar2 = FUN_14301f8f0();
      lVar4 = (**(code **)(*param_3 + 0x628))(param_3,uVar2);
      if ((((lVar4 != 0) && (*(longlong *)(lVar4 + 0x208) != 0)) &&
          ((lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x208) + 0x1d8), lVar4 != 0 &&
           ((lVar3 == lVar4 &&
            (lVar3 = (**(code **)(*(longlong *)(param_1 + 0xd80) + 0x18))(), lVar3 != 0)))))) &&
         (FUN_142ffa6f0(lVar3,local_res10,param_2), local_res10[0] != -1)) {
        uVar7 = 0;
        FUN_142fe3dd0(lVar3,local_res20,lVar4,param_3,1,0,0,0,1);
        uVar2 = FUN_140c428a0(param_1);
        lVar4 = FUN_140e81f30(uVar2,param_2);
        if (lVar4 != 0) {
          uVar7 = uVar7 & 0xffffff00;
          FUN_140e7b7b0(uVar2,lVar4,param_3,1,uVar7);
        }
        lVar4 = FUN_140e7ef10(param_1 + 0x1518,param_2);
        if (lVar4 != 0) {
          lVar5 = FUN_1430b3b80();
          if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          plVar6 = (longlong *)0x0;
          if (bVar1) {
            plVar6 = param_3;
          }
          FUN_140c57820(param_1,plVar6,lVar4,1,uVar7 & 0xffffff00);
        }
        FUN_143011bf0(lVar3,local_res10,1);
        (**(code **)(*param_2 + 0x6d0))(param_2,0);
        return;
      }
      (**(code **)(*param_3 + 0x6d0))(param_3,0);
      return;
    }
  }
  if (param_3 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*param_3 + 0x6d0))(param_3,0);
  return;
}



// FUNCTION 140c54800 FUN_140c54800 body=96 status=ok
// SIG undefined FUN_140c54800(void)

void FUN_140c54800(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x38,0);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x48,0);
  }
  FUN_140c3afd0(param_1);
  return;
}



// FUNCTION 140c54860 FUN_140c54860 body=161 status=ok
// SIG undefined FUN_140c54860(void)

void FUN_140c54860(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    lVar2 = FUN_140c430a0(param_1,0);
    if (lVar2 != 0) {
      lVar3 = ANavLinkProxy::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar4 = FUN_140c41f70(param_1);
        FUN_140b3dd10(lVar2,uVar4);
      }
    }
    FUN_140e75d40(param_1 + 0x1518,1);
    FUN_140e75b80(param_1 + 0x1430,1);
    *(undefined8 *)(param_1 + 0x1cb0) = 0;
  }
  return;
}



// FUNCTION 140c54910 FUN_140c54910 body=282 status=ok
// SIG undefined FUN_140c54910(void)

void FUN_140c54910(int param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  
  if ((0 < param_1) && (param_2 != 0)) {
    iVar4 = *(int *)(param_2 + 0x158);
    while (iVar4 <= param_1) {
      iVar4 = *(int *)(param_2 + 0x158);
      *(int *)(param_2 + 0x158) = iVar4 + 1;
      if (*(int *)(param_2 + 0x15c) < iVar4 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(param_2 + 0x150,iVar4);
      }
      puVar3 = (undefined8 *)((longlong)iVar4 * 0x38 + *(longlong *)(param_2 + 0x150));
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      FResearchTreeMessageData::FResearchTreeMessageData();
      iVar4 = *(int *)(param_2 + 0x158);
    }
    lVar1 = *(longlong *)(param_2 + 0x150);
    uVar2 = FUN_142f6caf0(param_3);
    FUN_140c2dda0((longlong)param_1 * 0x38 + lVar1,uVar2,param_4);
    if ((param_1 < *(int *)(param_2 + 0x188)) &&
       (plVar5 = (longlong *)(*(longlong *)(param_2 + 0x180) + (longlong)param_1 * 0x10),
       *plVar5 != 0)) {
      iVar4 = 0;
      *(undefined4 *)(plVar5 + 1) = 0;
      if (*(int *)((longlong)plVar5 + 0xc) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar5);
        iVar4 = (int)plVar5[1];
      }
      *(int *)(plVar5 + 1) = iVar4;
      if (*(int *)((longlong)plVar5 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar5);
      }
    }
  }
  return;
}



// FUNCTION 140c54a30 ResizeForCopy body=142 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FAsyncPathFindingQuery,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0xe0,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 7);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if ((iVar4 != param_3) && ((*param_1 != 0 || (iVar4 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xe0,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 140c54ac0 FUN_140c54ac0 body=206 status=ok
// SIG undefined FUN_140c54ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_140c54ac0(undefined8 param_1,undefined1 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  FUN_142cb2580(param_2,0);
  if (param_4 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_4 + 0x148))(param_4);
    if (lVar1 != 0) {
      uVar2 = FUN_140c447b0(lVar1);
      FUN_142cb2580(local_28,uVar2);
      lVar1 = local_20;
      if (param_2 == local_28) {
        if (local_20 != 0) {
          FMemory::Free();
        }
      }
      else {
        if (local_20 == 0) {
          _guard_xfg_dispatch_icall_nop(param_2,local_28,8);
        }
        if (*(longlong *)(param_2 + 8) != 0) {
          FMemory::Free();
          lVar1 = local_20;
        }
        *(longlong *)(param_2 + 8) = lVar1;
        *(undefined4 *)(param_2 + 0x10) = local_18;
        *(undefined4 *)(param_2 + 0x14) = local_14;
      }
    }
  }
  return param_2;
}



// FUNCTION 140c54b90 FUN_140c54b90 body=27 status=ok
// SIG undefined FUN_140c54b90(void)

void FUN_140c54b90(undefined8 param_1)

{
  FUN_142cce190();
  FUN_140c47160(param_1);
  return;
}



// FUNCTION 140c54bb0 FUN_140c54bb0 body=451 status=ok
// SIG undefined FUN_140c54bb0(void)

void FUN_140c54bb0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_28;
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x1cd0) == 0) {
    *(undefined8 *)(param_1 + 0x1cd0) = 0;
    return;
  }
  if ((*(longlong *)(param_1 + 0xe98) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xe98) + 0x118) == *(longlong *)(param_1 + 0x1cd0))) {
    local_28 = 0;
    local_20 = 0;
    uVar3 = FUN_140c46b40(param_1);
    FUN_142ffa060(*(undefined8 *)(param_1 + 0xe98),uVar3,&local_28);
    lVar1 = local_28 + (longlong)(int)local_20 * 4;
    for (lVar6 = local_28; lVar6 != lVar1; lVar6 = lVar6 + 4) {
      lVar4 = FUN_142fffe20(*(undefined8 *)(param_1 + 0xe98),lVar6);
      if (lVar4 != 0) {
        lVar5 = FUN_1430b3b80();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (*(longlong *)(lVar4 + 0x150) != *(longlong *)(param_1 + 0x1cd0))) {
          lVar5 = FUN_140e7ef10(param_1 + 0x1518,lVar4);
          if (lVar5 != 0) {
            FUN_140c57820(param_1,0,lVar5,1,0);
          }
          FUN_140e949c0(param_1 + 0x1430,lVar4,0,0);
          FUN_14307df60(lVar4,*(undefined8 *)(param_1 + 0x1cd0));
          if (lVar5 != 0) {
            FUN_140c57820(*(undefined8 *)(param_1 + 0x1cd0),lVar4,lVar5,1,0);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0xe98) = 0;
    if (local_28 != 0) {
      FMemory::Free(local_28);
    }
    *(undefined8 *)(param_1 + 0x1cd0) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x1cd0) = 0;
  return;
}



// FUNCTION 140c54d80 FUN_140c54d80 body=3547 status=ok
// SIG undefined FUN_140c54d80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_140c54d80(longlong param_1,undefined8 *param_2,float param_3,float param_4,longlong *param_5)

{
  float **ppfVar1;
  void **ppvVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  float *pfVar7;
  int *piVar8;
  float *pfVar9;
  void *pvVar10;
  longlong *plVar11;
  int *piVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  longlong lVar20;
  void *pvVar21;
  void *pvVar22;
  uint *puVar23;
  float fVar24;
  int *piVar25;
  float *_Src;
  int iVar26;
  longlong *plVar27;
  int iVar28;
  int *piVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_2e8 [32];
  undefined4 local_2c8;
  uint local_2b8;
  float local_2b0 [2];
  int local_2a8;
  float local_2a4;
  longlong local_2a0;
  longlong *local_298;
  undefined8 local_290;
  longlong local_288;
  ulonglong local_280;
  undefined8 local_278;
  float *local_270;
  undefined8 local_268;
  void *local_260;
  undefined8 local_258;
  int *local_250;
  uint local_248;
  uint local_244;
  longlong local_240;
  uint local_238;
  uint local_234;
  int local_230;
  longlong local_228;
  undefined8 local_220;
  uint local_218;
  uint uStack_214;
  uint *puStack_210;
  int local_208;
  int iStack_204;
  uint uStack_200;
  undefined4 uStack_1fc;
  int local_1f8 [2];
  longlong local_1f0;
  longlong local_1e8;
  ulonglong local_1e0;
  longlong *local_1d8;
  longlong local_1d0;
  undefined1 local_1c8 [8];
  longlong local_1c0;
  undefined8 *local_1b8;
  longlong *local_1b0;
  undefined8 uStack_1a8;
  uint *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  longlong local_188;
  float *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong *local_138;
  undefined8 uStack_130;
  uint *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  float local_108;
  char local_104;
  longlong local_100;
  undefined8 local_f8;
  uint local_f0 [4];
  uint *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c0;
  undefined4 local_b8;
  uint local_b0;
  uint local_ac;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  local_1d8 = param_5;
  local_2b0[0] = param_4;
  local_2a4 = param_3;
  local_1b8 = param_2;
  cVar4 = FWeakObjectPtr::IsValid();
  if (cVar4 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    piVar8 = (int *)0x0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x28);
    if (cVar4 != '\0') {
      plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x28);
      lVar6 = (**(code **)(*plVar5 + 0x148))(plVar5);
      if ((lVar6 != 0) && (lVar6 = UWorld::GetGameState<APVPGameState>(lVar6), lVar6 != 0)) {
        FUN_140b5b5c0(lVar6 + 0x670,&local_178,&local_1e8,param_3);
      }
    }
    lVar6 = (longlong)(int)local_1e0;
    local_298 = &local_240;
    local_230 = 0;
    local_240 = 0;
    local_238 = 0;
    local_234 = 0;
    local_250 = (int *)0x0;
    local_2b8 = 0;
    local_244 = 0;
    uVar18 = local_2b8;
    if (0 < (int)local_1e0) {
      uVar14 = local_1e0 & 0xffffffff;
      piVar12 = piVar8;
      piVar19 = piVar8;
      piVar25 = piVar8;
      piVar29 = piVar8;
      while( true ) {
        local_238 = (int)piVar12 + 1;
        if ((int)piVar8 < (int)local_238) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_240,piVar12);
        }
        iVar16 = (int)piVar25;
        local_278 = 0x3f800000;
        *(undefined1 *)((int)piVar12 + local_240) = 1;
        local_248 = iVar16 + 1;
        if ((int)piVar19 < (int)local_248) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_250,piVar25);
          piVar19 = (int *)(ulonglong)local_244;
          piVar29 = local_250;
        }
        uVar18 = local_248;
        piVar25 = (int *)(ulonglong)local_248;
        local_288 = 0;
        piVar8 = piVar29 + (longlong)iVar16 * 0xe;
        local_280 = 0;
        local_270 = (float *)0x0;
        local_268 = 0;
        local_260 = (void *)0x0;
        piVar8[0] = 0;
        piVar8[1] = 0;
        piVar8[2] = 0;
        piVar8[3] = 0;
        piVar8[6] = 0;
        piVar8[7] = 0;
        piVar8[4] = 0x3f800000;
        piVar8[8] = 0;
        piVar8[9] = 0;
        piVar8[10] = 0;
        piVar8[0xb] = 0;
        piVar8[0xc] = 0;
        piVar8[0xd] = 0;
        local_258 = 0;
        FUN_140b4e2b0(&local_288);
        uVar14 = uVar14 - 1;
        param_3 = local_2a4;
        param_4 = local_2b0[0];
        if (uVar14 == 0) break;
        piVar8 = (int *)(ulonglong)local_234;
        piVar12 = (int *)(ulonglong)local_238;
      }
    }
    local_2b8 = uVar18;
    local_b0 = (int)param_3 + (int)param_4;
    local_108 = 0.0;
    local_1f0 = (longlong)(int)(local_2b8 - 1);
    local_104 = '\0';
    local_100 = 0;
    local_f8 = 0;
    local_e0 = (uint *)0x0;
    local_d8 = 0;
    local_d0 = 0xffffffff;
    local_cc = 0;
    local_c0 = 0;
    local_b8 = 0;
    uVar18 = local_2b8;
    local_1d0 = lVar6;
    local_ac = local_b0;
    do {
      local_2a8 = 0;
      local_2a0 = 0;
      if (0 < lVar6) {
        do {
          lVar15 = local_2a0;
          iVar16 = local_2a8;
          _Src = (float *)0x0;
          if ((*(longlong *)(local_1e8 + local_2a0 * 8) != 0) &&
             (*(char *)(local_2a0 + local_240) != '\0')) {
            *(undefined1 *)(local_2a0 + local_240) = 0;
            iVar17 = -1;
            if ((local_1d8 != (longlong *)0x0) &&
               ((-1 < local_2a0 && (local_2a8 < (int)local_1d8[1])))) {
              iVar17 = *(int *)(*local_1d8 + local_2a0 * 4);
            }
            local_228 = 0;
            local_220 = 0;
            plVar5 = *(longlong **)(local_1e8 + local_2a0 * 8);
            (**(code **)(*plVar5 + 0x280))(plVar5,&local_228);
            if (0 < (int)local_220) {
              if ((iVar17 < 0) || ((int)local_220 <= iVar17)) {
                local_108 = 0.0;
                FUN_140c3e970(&local_100,0);
                lVar20 = (longlong)(int)local_220 * 0x38 + local_228;
                fVar24 = local_2b0[0];
                for (lVar6 = local_228; lVar6 != lVar20; lVar6 = lVar6 + 0x38) {
                  local_2b0[0] = *(float *)(lVar6 + 0x10);
                  if ((0.0 < local_2b0[0]) &&
                     ((1e-08 < local_2b0[0] || (fVar24 = local_2b0[0], local_104 != '\0')))) {
                    FUN_140c40e00(&local_100,local_1f8,lVar6);
                    pfVar9 = _Src;
                    if (local_1f8[0] != -1) {
                      pfVar9 = (float *)(local_100 + (longlong)local_1f8[0] * 0x48);
                    }
                    pfVar7 = pfVar9 + 0xe;
                    if (pfVar9 == (float *)0x0) {
                      pfVar7 = _Src;
                    }
                    if (pfVar7 != (float *)0x0) {
                      local_108 = local_108 - *pfVar7;
                    }
                    local_108 = local_108 + local_2b0[0];
                    local_180 = local_2b0;
                    local_188 = lVar6;
                    FUN_140c2d0d0(&local_100,local_1c8,&local_188,0);
                    fVar24 = local_2b0[0];
                  }
                  local_2b0[0] = fVar24;
                  fVar24 = local_2b0[0];
                }
                pvVar21 = (void *)0x0;
                iVar16 = (int)local_d8;
                local_278._4_4_ = (undefined4)((ulonglong)local_278 >> 0x20);
                local_278 = CONCAT44(local_278._4_4_,0x3f800000);
                local_288 = 0;
                local_ac = local_ac * 0xbb38435 + 0x3619636b;
                local_280 = 0;
                local_270 = (float *)0x0;
                local_2a4 = (float)(local_ac & 0x7fffff | 0x3f800000);
                local_268 = 0;
                fVar30 = 0.0;
                local_260 = (void *)0x0;
                local_258 = 0;
                local_218 = 0;
                uStack_214 = 1;
                iStack_204 = 0;
                uStack_200 = 0;
                puStack_210 = local_f0;
                fVar31 = local_108 * (local_2a4 - (float)(int)local_2a4);
                if ((int)local_d8 != 0) {
                  puVar23 = local_f0;
                  if (local_e0 != (uint *)0x0) {
                    puVar23 = local_e0;
                  }
                  uVar18 = *puVar23;
                  pvVar10 = pvVar21;
                  pvVar22 = pvVar21;
                  while (uVar18 == 0) {
                    iVar17 = (int)pvVar10;
                    uStack_200 = (int)pvVar22 + 0x20;
                    pvVar22 = (void *)(ulonglong)uStack_200;
                    local_218 = iVar17 + 1;
                    pvVar10 = (void *)(ulonglong)local_218;
                    if ((int)((int)local_d8 + -1 + ((int)local_d8 + -1 >> 0x1f & 0x1fU)) >> 5 <=
                        iVar17) {
                      iStack_204 = (int)local_d8;
                      goto LAB_140c553e7;
                    }
                    uVar18 = puVar23[(longlong)iVar17 + 1];
                  }
                  uStack_214 = -uVar18 & uVar18;
                  iVar17 = 0x1f;
                  if (uStack_214 != 0) {
                    for (; uStack_214 >> iVar17 == 0; iVar17 = iVar17 + -1) {
                    }
                  }
                  if (uStack_214 == 0) {
                    iVar17 = 0x20;
                  }
                  else {
                    iVar17 = 0x1f - iVar17;
                  }
                  iStack_204 = (uStack_200 - iVar17) + 0x1f;
                  if ((int)local_d8 < iStack_204) {
                    iStack_204 = (int)local_d8;
                  }
                }
LAB_140c553e7:
                uStack_198 = CONCAT44(iStack_204,0xffffffff);
                local_190 = CONCAT44(uStack_1fc,uStack_200);
                local_1b0 = &local_100;
                uStack_1a8 = CONCAT44(uStack_214,local_218);
                iStack_204 = (int)local_d8;
                local_208 = -1 << ((byte)local_d8 & 0x1f);
                local_2b0[0] = fVar24;
                local_1a0 = puStack_210;
                local_138 = local_1b0;
                uStack_130 = uStack_1a8;
                puStack_128 = puStack_210;
                uStack_120 = uStack_198;
                uStack_118 = local_190;
                while( true ) {
                  if (((uStack_198._4_4_ == iVar16) && (local_1a0 == local_f0)) &&
                     (iVar17 = 0x3f800000, iVar26 = 0, iVar28 = 0, local_1b0 == &local_100))
                  goto LAB_140c554cc;
                  lVar6 = *local_1b0 + (longlong)uStack_198._4_4_ * 0x48;
                  if ((fVar30 <= fVar31) && (fVar31 <= fVar30 + *(float *)(lVar6 + 0x38))) break;
                  fVar30 = fVar30 + *(float *)(lVar6 + 0x38);
                  uStack_198 = CONCAT44(uStack_198._4_4_,(uint)uStack_198 & ~uStack_1a8._4_4_);
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1a8);
                }
                FUN_140c31480(&local_288);
                pvVar21 = local_260;
                _Src = local_270;
                iVar17 = (int)local_278;
                iVar26 = (int)local_268;
                iVar28 = (int)local_258;
LAB_140c554cc:
                plVar5 = (longlong *)(local_250 + lVar15 * 0xe);
                if (plVar5 != &local_288) {
                  iVar16 = (int)plVar5[1];
                  if (iVar16 != 0) {
                    plVar27 = (longlong *)(*plVar5 + 0x18);
                    do {
                      if (*plVar27 != 0) {
                        FMemory::Free();
                      }
                      plVar27 = plVar27 + 6;
                      iVar16 = iVar16 + -1;
                    } while (iVar16 != 0);
                  }
                  local_2c8 = 0;
                  TArray<FMovieSceneObjectPathChannelKeyValue,FDefaultAllocator>::
                  CopyToEmpty<FMovieSceneObjectPathChannelKeyValue>
                            (plVar5,local_288,local_280 & 0xffffffff);
                }
                ppfVar1 = (float **)(plVar5 + 3);
                *(int *)(plVar5 + 2) = iVar17;
                if (ppfVar1 != &local_270) {
                  *(int *)(plVar5 + 4) = iVar26;
                  if ((iVar26 == 0) && (*(int *)((longlong)plVar5 + 0x24) == 0)) {
                    *(int *)((longlong)plVar5 + 0x24) = 0;
                  }
                  else {
                    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                              (ppfVar1,iVar26);
                    _guard_xfg_dispatch_icall_nop(*ppfVar1,_Src,(longlong)iVar26 << 3);
                  }
                }
                ppvVar2 = (void **)(plVar5 + 5);
                if (ppvVar2 != &local_260) {
                  *(int *)(plVar5 + 6) = iVar28;
                  if ((iVar28 == 0) && (*(int *)((longlong)plVar5 + 0x34) == 0)) {
                    *(int *)((longlong)plVar5 + 0x34) = 0;
                  }
                  else {
                    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                              (ppvVar2,iVar28);
                    _guard_xfg_dispatch_icall_nop(*ppvVar2,pvVar21,(longlong)iVar28 << 3);
                  }
                }
                if (pvVar21 != (void *)0x0) {
                  FMemory::Free(pvVar21);
                }
                if (_Src != (float *)0x0) {
                  FMemory::Free(_Src);
                }
                FUN_140b4e2b0(&local_288);
                lVar15 = local_2a0;
                lVar6 = local_1d0;
                iVar16 = local_2a8;
              }
              else {
                plVar5 = (longlong *)(local_250 + lVar15 * 0xe);
                plVar27 = (longlong *)((longlong)iVar17 * 0x38 + local_228);
                if (plVar5 != plVar27) {
                  iVar16 = (int)plVar5[1];
                  if (iVar16 != 0) {
                    plVar13 = (longlong *)(*plVar5 + 0x18);
                    do {
                      if (*plVar13 != 0) {
                        FMemory::Free();
                      }
                      plVar13 = plVar13 + 6;
                      iVar16 = iVar16 + -1;
                    } while (iVar16 != 0);
                  }
                  local_2c8 = 0;
                  TArray<FMovieSceneObjectPathChannelKeyValue,FDefaultAllocator>::
                  CopyToEmpty<FMovieSceneObjectPathChannelKeyValue>(plVar5,*plVar27,(int)plVar27[1])
                  ;
                }
                plVar13 = plVar5 + 3;
                *(int *)(plVar5 + 2) = (int)plVar27[2];
                if (plVar13 != plVar27 + 3) {
                  iVar16 = (int)plVar27[4];
                  pvVar21 = (void *)plVar27[3];
                  *(int *)(plVar5 + 4) = iVar16;
                  if ((iVar16 == 0) && (*(int *)((longlong)plVar5 + 0x24) == 0)) {
                    *(int *)((longlong)plVar5 + 0x24) = 0;
                  }
                  else {
                    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                              (plVar13,iVar16);
                    _guard_xfg_dispatch_icall_nop((void *)*plVar13,pvVar21,(longlong)iVar16 << 3);
                  }
                }
                plVar13 = plVar5 + 5;
                lVar15 = local_2a0;
                iVar16 = local_2a8;
                if (plVar13 != plVar27 + 5) {
                  iVar17 = (int)plVar27[6];
                  pvVar21 = (void *)plVar27[5];
                  *(int *)(plVar5 + 6) = iVar17;
                  if ((iVar17 == 0) && (*(int *)((longlong)plVar5 + 0x34) == 0)) {
                    *(int *)((longlong)plVar5 + 0x34) = 0;
                  }
                  else {
                    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                              (plVar13,iVar17);
                    _guard_xfg_dispatch_icall_nop((void *)*plVar13,pvVar21,(longlong)iVar17 << 3);
                    lVar15 = local_2a0;
                    iVar16 = local_2a8;
                  }
                }
              }
            }
            if ((int)local_220 != 0) {
              plVar5 = (longlong *)(local_228 + 0x18);
              iVar17 = (int)local_220;
              do {
                if (plVar5[2] != 0) {
                  FMemory::Free();
                }
                if (*plVar5 != 0) {
                  FMemory::Free();
                }
                FUN_140b4e2b0(plVar5 + -3);
                plVar5 = plVar5 + 7;
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
            }
            if (local_228 != 0) {
              FMemory::Free();
            }
          }
          local_2a8 = iVar16 + 1;
          local_2a0 = lVar15 + 1;
          uVar18 = local_2b8;
        } while (local_2a0 < lVar6);
      }
      local_2a0 = 0;
      if (0 < local_1f0) {
        local_2b0[0] = 1.4013e-45;
        piVar8 = local_250 + 0x10;
        do {
          lVar6 = local_2a0 + 1;
          piVar12 = piVar8;
          fVar24 = local_2b0[0];
          local_1c0 = lVar6;
          if ((int)local_2b0[0] < (int)uVar18) {
            do {
              local_2a8 = -1;
              local_2a4 = -NAN;
              if (local_1d8 != (longlong *)0x0) {
                if ((-1 < local_2a0) && ((int)local_2b0[0] + -1 < (int)local_1d8[1])) {
                  local_2a8 = *(int *)(*local_1d8 + local_2a0 * 4);
                }
                if ((-1 < lVar6) && ((int)fVar24 < (int)local_1d8[1])) {
                  local_2a4 = *(float *)(*local_1d8 + lVar6 * 4);
                }
              }
              iVar16 = *piVar12;
              if (iVar16 == piVar8[-0xe]) {
                if (iVar16 != 0) {
                  plVar5 = (longlong *)(*(longlong *)(piVar8 + -0x10) + 0x28);
                  plVar27 = (longlong *)(*(longlong *)(piVar12 + -2) + 0x28);
                  do {
                    cVar4 = FSoftObjectPath::operator==(plVar5 + -3);
                    uVar18 = local_2b8;
                    if ((cVar4 == '\0') || (*plVar5 != *plVar27)) goto LAB_140c5572c;
                    plVar27 = plVar27 + 6;
                    plVar5 = plVar5 + 6;
                    iVar16 = iVar16 + -1;
                  } while (iVar16 != 0);
                }
LAB_140c55783:
                if (local_2a8 == -1) {
                  *(undefined1 *)(local_240 + local_2a0) = 1;
                }
                uVar18 = local_2b8;
                if (local_2a4 == -NAN) {
                  *(undefined1 *)(local_240 + lVar6) = 1;
                }
              }
              else {
LAB_140c5572c:
                plVar27 = *(longlong **)(piVar8 + -10);
                bVar3 = false;
                plVar5 = plVar27 + piVar8[-8];
                if (plVar27 != plVar5) {
                  plVar13 = *(longlong **)(piVar12 + 4);
                  do {
                    if (plVar13 != plVar13 + piVar12[6]) {
                      plVar11 = plVar13;
                      do {
                        lVar15 = *plVar11;
                        plVar11 = plVar11 + 1;
                        bVar3 = (bool)(bVar3 | *plVar27 == lVar15);
                      } while (plVar11 != plVar13 + piVar12[6]);
                    }
                    plVar27 = plVar27 + 1;
                  } while (plVar27 != plVar5);
                  if (bVar3) goto LAB_140c55783;
                }
              }
              fVar24 = (float)((int)fVar24 + 1);
              lVar6 = lVar6 + 1;
              piVar12 = piVar12 + 0xe;
            } while ((int)fVar24 < (int)uVar18);
          }
          local_2b0[0] = (float)((int)local_2b0[0] + 1);
          piVar8 = piVar8 + 0xe;
          lVar6 = local_1d0;
          local_2a0 = local_1c0;
        } while (local_1c0 < local_1f0);
      }
      iVar16 = local_230 + 1;
      local_230 = iVar16;
      cVar4 = FUN_140c31dd0(&local_298);
    } while ((cVar4 != '\0') && (iVar16 < 100));
    local_298 = (longlong *)0x0;
    local_290 = 1;
    plVar27 = (longlong *)FUN_140b73d00(&local_178,&local_288);
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_298,0);
    plVar5 = local_298;
    *local_298 = 0;
    *local_298 = *plVar27;
    *plVar27 = 0;
    *(int *)(local_298 + 1) = (int)plVar27[1];
    *(undefined4 *)((longlong)local_298 + 0xc) = *(undefined4 *)((longlong)plVar27 + 0xc);
    plVar27[1] = 0;
    lVar6 = plVar27[2];
    local_298[3] = 0;
    *(int *)(local_298 + 2) = (int)lVar6;
    local_298[3] = plVar27[3];
    plVar27[3] = 0;
    *(int *)(local_298 + 4) = (int)plVar27[4];
    *(undefined4 *)((longlong)local_298 + 0x24) = *(undefined4 *)((longlong)plVar27 + 0x24);
    plVar27[4] = 0;
    local_298[5] = 0;
    local_298[5] = plVar27[5];
    plVar27[5] = 0;
    *(int *)(local_298 + 6) = (int)plVar27[6];
    *(undefined4 *)((longlong)local_298 + 0x34) = *(undefined4 *)((longlong)plVar27 + 0x34);
    plVar27[6] = 0;
    if (local_260 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_270 != (float *)0x0) {
      FMemory::Free();
    }
    FUN_140b4e2b0(&local_288);
    piVar8 = local_250 + (longlong)(int)uVar18 * 0xe;
    if (local_250 != piVar8) {
      piVar12 = local_250 + 0xc;
      do {
        local_288 = 0;
        local_2c8 = 0;
        TArray<FMovieSceneObjectPathChannelKeyValue,FDefaultAllocator>::
        CopyToEmpty<FMovieSceneObjectPathChannelKeyValue>
                  (&local_288,*(undefined8 *)(piVar12 + -0xc),piVar12[-10],0);
        iVar16 = piVar12[-4];
        pvVar21 = *(void **)(piVar12 + -6);
        local_278 = CONCAT44(local_278._4_4_,piVar12[-8]);
        local_270 = (float *)0x0;
        local_268 = CONCAT44(local_268._4_4_,iVar16);
        if (iVar16 == 0) {
          local_268 = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_270,iVar16,0)
          ;
          _guard_xfg_dispatch_icall_nop(local_270,pvVar21,(longlong)iVar16 << 3);
        }
        iVar16 = *piVar12;
        pvVar21 = *(void **)(piVar12 + -2);
        local_260 = (void *)0x0;
        local_258 = CONCAT44(local_258._4_4_,iVar16);
        if (iVar16 == 0) {
          local_258 = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_260,iVar16,0)
          ;
          _guard_xfg_dispatch_icall_nop(local_260,pvVar21,(longlong)iVar16 << 3);
        }
        uVar14 = local_290;
        lVar6 = (longlong)(int)local_290;
        iVar16 = (int)local_290 + 1;
        local_290 = CONCAT44(local_290._4_4_,iVar16);
        if (local_290._4_4_ < iVar16) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_298,uVar14 & 0xffffffff);
          plVar5 = local_298;
        }
        FUN_140b4bd40(plVar5 + lVar6 * 7,&local_288);
        if (local_260 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_270 != (float *)0x0) {
          FMemory::Free();
        }
        FUN_140b4e2b0(&local_288);
        piVar19 = piVar12 + 2;
        piVar12 = piVar12 + 0xe;
        uVar18 = local_2b8;
      } while (piVar19 != piVar8);
    }
    param_2 = local_1b8;
    piVar8 = local_250;
    local_298 = (longlong *)0x0;
    *local_1b8 = plVar5;
    *(int *)(local_1b8 + 1) = (int)local_290;
    *(int *)((longlong)local_1b8 + 0xc) = local_290._4_4_;
    local_290 = 0;
    TArray<FCompositeSubFont,FDefaultAllocator>::~TArray<FCompositeSubFont,FDefaultAllocator>
              (&local_298);
    local_b8 = 0;
    if (local_c0 != 0) {
      FMemory::Free();
    }
    FUN_140c3e9f0(&local_100,0);
    if (local_e0 != (uint *)0x0) {
      FMemory::Free();
    }
    if (local_100 != 0) {
      FMemory::Free();
    }
    if (uVar18 != 0) {
      plVar5 = (longlong *)(piVar8 + 6);
      do {
        if (plVar5[2] != 0) {
          FMemory::Free();
        }
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        FUN_140b4e2b0(plVar5 + -3);
        plVar5 = plVar5 + 7;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    if (piVar8 != (int *)0x0) {
      FMemory::Free(piVar8);
    }
    if (local_240 != 0) {
      FMemory::Free();
    }
    if (local_1e8 != 0) {
      FMemory::Free();
    }
    FUN_140b4e2b0(&local_178);
  }
  return param_2;
}



// FUNCTION 140c55b60 FUN_140c55b60 body=159 status=ok
// SIG undefined FUN_140c55b60(void)

void FUN_140c55b60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  
  if (((*(char *)(param_1 + 0x1ce0) != '\0') && (lVar1 = *(longlong *)(param_2 + 0x118), lVar1 != 0)
      ) && (lVar1 != param_1)) {
    lVar5 = UMovieScene2DTransformSection::GetPrivateStaticClass();
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_140c471e0(param_1,CONCAT71((int7)((ulonglong)lVar2 >> 8),1),lVar1);
    }
    cVar4 = AActor::IsChildActor(lVar1);
    if (cVar4 != '\0') {
      *(undefined1 *)(param_1 + 0x1ce0) = 0;
    }
  }
  FUN_14223c440(param_1,param_2);
  return;
}



// FUNCTION 140c55c00 FUN_140c55c00 body=164 status=ok
// SIG undefined FUN_140c55c00(void)

void FUN_140c55c00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x1ce0) != '\0') {
    lVar1 = *(longlong *)(param_2 + 0x118);
    if ((lVar1 == 0) || ((lVar1 != param_1 && (cVar3 = AActor::IsChildActor(lVar1), cVar3 != '\0')))
       ) {
      *(undefined1 *)(param_1 + 0x1ce0) = 0;
    }
    if (lVar1 != 0) {
      lVar4 = UMovieScene2DTransformSection::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FUN_140c471e0(param_1,0,lVar1);
      }
    }
  }
  FUN_14223c450(param_1,param_2);
  return;
}



// FUNCTION 140c55cb0 FUN_140c55cb0 body=375 status=ok
// SIG undefined FUN_140c55cb0(void)

undefined8 FUN_140c55cb0(undefined8 param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar4 = UEnum::GetPrivateStaticClass();
  plVar5 = (longlong *)FUN_141799410(uVar4,0xffffffffffffffff,L"EOakMusicSection",1);
  bVar6 = plVar5 == (longlong *)0x0;
  if (bVar6) {
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Invalid",L"OakMusicLogging",L"InvalidText");
  }
  else {
    uVar4 = (**(code **)(*plVar5 + 0x288))(plVar5,local_28,param_2);
  }
  FText::FText(local_58,uVar4);
  if (bVar6) {
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_38 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
  }
  if ((!bVar6) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_20 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  uVar4 = FText::ToString(local_58);
  FString::FString(param_1,uVar4);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140c55e30 FUN_140c55e30 body=576 status=ok
// SIG undefined FUN_140c55e30(void)

void FUN_140c55e30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong alStack_98 [2];
  undefined8 local_88;
  undefined8 local_80;
  longlong alStack_78 [3];
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50 [7];
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (plVar2 = *(longlong **)(lVar1 + 0x848), plVar2 != (longlong *)0x0)) {
      lVar4 = FUN_1413f82e0();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        uVar5 = FUN_1414aa4c0();
        lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar5);
        if ((lVar4 != 0) && (lVar6 = FUN_140c430a0(plVar2,0), lVar6 != 0)) {
          local_88 = 0;
          alStack_78[1] = 0;
          local_a8 = 0;
          alStack_98[1] = 0;
          local_80 = 0;
          alStack_78[0] = 0;
          local_a0 = 0;
          alStack_98[0] = 0;
          FUN_140c50d20(param_2,lVar1,lVar4,&local_88,&local_a8);
          FUN_140e421f0(lVar4,local_a8._4_4_ + local_88._4_4_,2);
          FUN_142fe44f0(lVar6,local_80,local_88 & 0xffffffff);
          FUN_142fe44f0(lVar6,local_a0,local_a8 & 0xffffffff);
          local_60 = (undefined4)local_88;
          local_5c = local_88._4_4_;
          local_58 = local_80;
          local_50[0] = 0;
          local_50[1] = 0;
          local_50[2] = 0;
          local_50[3] = 0;
          local_50[4] = 0;
          local_50[5] = 0;
          alStack_78[2] = param_2;
          TArray<FName,TSizedDefaultAllocator<32>_>::operator=(local_50,alStack_78);
          local_50[2] = local_a8;
          local_50[3] = local_a0;
          TArray<FName,TSizedDefaultAllocator<32>_>::operator=(local_50 + 4,alStack_98);
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x1a8,alStack_78 + 2);
          if (local_50[4] != 0) {
            FMemory::Free();
          }
          if (local_50[0] != 0) {
            FMemory::Free();
          }
          if (alStack_98[0] != 0) {
            FMemory::Free();
          }
          if (alStack_78[0] != 0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c56070 FUN_140c56070 body=50 status=ok
// SIG undefined FUN_140c56070(void)

bool FUN_140c56070(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_142f71d80();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) goto LAB_140c56096;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_2 = 0;
LAB_140c56096:
  return param_2 != 0;
}



// FUNCTION 140c560c0 FUN_140c560c0 body=1419 status=ok
// SIG undefined FUN_140c560c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c560c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *_Src;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  uint local_d8;
  undefined1 local_d0;
  undefined1 local_c8 [8];
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined1 local_78 [32];
  longlong *local_58;
  undefined4 local_38;
  char local_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_b8 = param_1;
  if (param_2 != (longlong *)0x0) {
    plVar6 = (longlong *)FUN_142f71d80();
    plVar9 = param_2;
    do {
      plVar16 = param_2;
      if (plVar9 == plVar6) goto LAB_140c56108;
      plVar9 = (longlong *)plVar9[6];
    } while (plVar9 != (longlong *)0x0);
  }
  plVar16 = (longlong *)0x0;
LAB_140c56108:
  lVar8 = plVar16[0x1f];
  if (lVar8 == 0) {
    local_80 = lVar8;
    (**(code **)(*plVar16 + 0x368))(plVar16);
    lVar8 = plVar16[0x1f];
    if (lVar8 == 0) {
      return;
    }
  }
  local_80 = lVar8;
  lVar7 = FUN_141437870();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (lVar8 = FUN_140c14790(lVar8), lVar8 != 0)) {
    lVar7 = *(longlong *)(param_1 + 0x120);
    if (lVar7 == 0) {
      lVar7 = FUN_1423407b0(param_1);
    }
    plVar9 = (longlong *)FUN_142f5cb40(param_1);
    if (plVar9 != (longlong *)0x0) {
      lVar10 = UWebSocketNetDriver::StaticClass();
      if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
          lVar10 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (iVar4 = FUN_142f5c9d0(plVar9,param_2), iVar4 == 1)) &&
         (lVar10 = *(longlong *)(param_1 + 0x118), lVar10 != 0)) {
        lVar11 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          uVar5 = (**(code **)(*plVar9 + 0x780))(plVar9,param_2);
          uVar12 = FUN_140cffa10(lVar10);
          uVar13 = UWorld::GetGameState<APVPGameState>(lVar7);
          uVar5 = FUN_140b816f0(uVar13,uVar5,uVar12);
          FUN_142ff8050(lVar8,&local_38,lVar10,uVar5);
          if (local_34 != '\0') {
            plVar6 = (longlong *)0x0;
            local_e8 = 0;
            local_f0 = local_f0 & 0xffffffffffffff00;
            local_b0 = (longlong *)0x0;
            local_a8 = 0;
            local_f8 = plVar9;
            FUN_143013ad0(&local_b0,lVar8,1,local_38);
            if ((((int)local_a8 == 1) && (*local_b0 != 0)) &&
               (lVar8 = *(longlong *)(lVar10 + 0x848), lVar8 != 0)) {
              lVar7 = FUN_1413f82e0();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if ((bVar2) && (lVar8 = FUN_140c430a0(lVar8,0), local_c0 = lVar8, lVar8 != 0)) {
                FUN_142fde510(local_78);
                local_90 = 0;
                local_88 = 0;
                FUN_142ffa060(lVar8,0,&local_90);
                lVar7 = local_90 + (longlong)(int)local_88 * 4;
                for (lVar10 = local_90; lVar10 != lVar7; lVar10 = lVar10 + 4) {
                  cVar3 = FUN_142ffa4f0(lVar8,lVar10,local_78);
                  plVar9 = local_58;
                  if ((cVar3 != '\0') && (lVar8 = local_c0, local_58 != (longlong *)0x0)) {
                    uVar12 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
                    lVar11 = (**(code **)(*plVar9 + 0x628))(plVar9,uVar12);
                    lVar8 = local_c0;
                    if (lVar11 != 0) {
                      plVar9 = plVar6;
                      if (*(longlong *)(lVar11 + 0x178) != 0) {
                        plVar14 = (longlong *)FUN_142f71d80();
                        for (plVar16 = *(longlong **)(lVar11 + 0x178);
                            (plVar9 = plVar6, plVar16 != (longlong *)0x0 &&
                            (plVar9 = *(longlong **)(lVar11 + 0x178), plVar16 != plVar14));
                            plVar16 = (longlong *)plVar16[6]) {
                        }
                      }
                      plVar16 = plVar6;
                      if (param_2 != (longlong *)0x0) {
                        plVar15 = (longlong *)FUN_142f71d80();
                        plVar14 = param_2;
                        do {
                          plVar16 = param_2;
                          if (plVar14 == plVar15) break;
                          plVar14 = (longlong *)plVar14[6];
                          plVar16 = plVar6;
                        } while (plVar14 != (longlong *)0x0);
                      }
                      lVar8 = local_c0;
                      if (plVar9 == plVar16) goto LAB_140c565f7;
                    }
                  }
                }
                local_a0 = (longlong *)0x0;
                local_98 = 0;
                lVar8 = *(longlong *)(local_b8 + 0x120);
                if (lVar8 == 0) {
                  lVar8 = FUN_1423407b0();
                }
                FUN_143018ff0(&local_b0,lVar8,&local_a0,0);
                plVar9 = local_a0 + (int)local_98;
                for (plVar6 = local_a0; (plVar6 != plVar9 && (lVar8 = *plVar6, lVar8 != 0));
                    plVar6 = plVar6 + 1) {
                  lVar7 = FUN_14149b100();
                  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  if (!bVar2) break;
                  FUN_1417846f0(lVar8,
                                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                               );
                  local_b8 = 0;
                  uVar12 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
                  local_d8 = local_d8 & 0xffffff00;
                  local_e0 = 0;
                  local_e8 = local_e8 & 0xffffffffffffff00;
                  local_f0 = 0;
                  local_f8 = (longlong *)((ulonglong)local_f8 & 0xffffffff00000000);
                  lVar8 = FUN_1417985e0(uVar12,lVar8,local_b8,0);
                  puVar1 = (undefined8 *)(lVar8 + 0x180);
                  *(longlong **)(lVar8 + 0x178) = param_2;
                  if (puVar1 != (undefined8 *)(local_80 + 0x4d0)) {
                    iVar4 = *(int *)(local_80 + 0x4d8);
                    _Src = *(void **)(local_80 + 0x4d0);
                    *(int *)(lVar8 + 0x188) = iVar4;
                    if ((iVar4 == 0) && (*(int *)(lVar8 + 0x18c) == 0)) {
                      *(undefined4 *)(lVar8 + 0x18c) = 0;
                    }
                    else {
                      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                                (puVar1,iVar4);
                      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar4 << 3);
                    }
                  }
                  lVar8 = local_c0;
                  local_d0 = 0;
                  local_d8 = 0;
                  local_e0 = CONCAT71(local_e0._1_7_,1);
                  local_e8 = local_e8 & 0xffffffffffffff00;
                  local_f0 = local_f0 & 0xffffffffffffff00;
                  local_f8 = (longlong *)CONCAT44(local_f8._4_4_,1);
                  FUN_142fe3d60(local_c0,local_c8,*(undefined8 *)(*local_b0 + 0x1d8));
                  FUN_1430157c0(lVar8,local_c8,1);
                  FUN_143015780(lVar8,local_c8,2);
                }
                if (local_a0 != (longlong *)0x0) {
                  FMemory::Free(local_a0);
                }
LAB_140c565f7:
                if (local_90 != 0) {
                  FMemory::Free();
                }
              }
            }
            FUN_1409f5880(&local_b0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c56650 FUN_140c56650 body=894 status=ok
// SIG undefined FUN_140c56650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c56650(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0;
  ulonglong local_b8;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong local_50;
  undefined4 local_48;
  char local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  plVar9 = (longlong *)0x0;
  local_98 = param_2;
  local_50 = param_1;
  if (param_3 != (longlong *)0x0) {
    plVar5 = (longlong *)FUN_142f71d80();
    plVar11 = param_3;
    do {
      plVar9 = param_3;
      if (plVar11 == plVar5) break;
      plVar11 = (longlong *)plVar11[6];
      plVar9 = (longlong *)0x0;
    } while (plVar11 != (longlong *)0x0);
  }
  lVar8 = plVar9[0x1f];
  if (lVar8 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar8 = plVar9[0x1f];
    if (lVar8 == 0) {
      return;
    }
  }
  lVar6 = FUN_141437870();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (lVar6 = *(longlong *)(param_1 + 0x118), lVar6 != 0)) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar6 = *(longlong *)(lVar6 + 0x848), lVar6 != 0)) {
      lVar7 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (lVar7 = FUN_140c430a0(lVar6,0), lVar7 != 0)) &&
         (plVar9 = *(longlong **)(lVar6 + 0x10d8), plVar9 != (longlong *)0x0)) {
        plVar11 = *(longlong **)(lVar8 + 0x4b0);
        plVar5 = plVar11 + (longlong)*(int *)(lVar8 + 0x4b8) * 0xb;
        local_90 = plVar5;
        if (plVar11 != plVar5) {
          do {
            if (((*plVar11 == param_2) &&
                (lVar8 = FUN_140c499e0(plVar11 + 1), param_2 = local_98, lVar8 != 0)) &&
               (lVar6 = FUN_140c49980(plVar11 + 6), plVar5 = local_90, param_2 = local_98,
               lVar6 != 0)) {
              local_68 = 0;
              local_60 = 0;
              FUN_142ffa060(lVar7,lVar6,&local_68);
              if (0 < (int)local_60) {
LAB_140c56994:
                if (local_68 == 0) {
                  return;
                }
                FMemory::Free();
                return;
              }
              uVar4 = (**(code **)(*plVar9 + 0x408))(plVar9);
              FUN_142ff7db0(&local_48,lVar8,plVar9,uVar4);
              if (local_44 != '\0') {
                local_b0 = 0;
                local_b8 = 0;
                local_c0 = 0;
                local_c8 = 0;
                local_88 = (longlong *)0x0;
                local_80 = 0;
                FUN_143013fe0(&local_88,lVar8,local_48,plVar9);
                if ((0 < (int)local_80) && (*local_88 != 0)) {
                  local_78 = (undefined8 *)0x0;
                  local_70 = 0;
                  lVar8 = *(longlong *)(local_50 + 0x120);
                  if (lVar8 == 0) {
                    lVar8 = FUN_1423407b0();
                  }
                  FUN_143018ff0(&local_88,lVar8,&local_78,0);
                  puVar1 = local_78 + (int)local_70;
                  for (puVar10 = local_78; puVar10 != puVar1; puVar10 = puVar10 + 1) {
                    if (*(longlong *)(*local_88 + 0x1d8) != lVar6) {
                      if (local_78 != (undefined8 *)0x0) {
                        FMemory::Free();
                      }
                      FUN_1409f5880(&local_88);
                      local_44 = '\0';
                      goto LAB_140c56994;
                    }
                    local_a0 = 0;
                    local_a8 = 0;
                    local_b0 = 1;
                    local_b8 = local_b8 & 0xffffffffffffff00;
                    local_c0 = 0;
                    uVar3 = (ulonglong)local_c8 >> 0x20;
                    local_c8 = CONCAT44((int)uVar3,1);
                    FUN_142fe3d60(lVar7,local_58,*(longlong *)(*local_88 + 0x1d8),*puVar10);
                  }
                  if (local_78 != (undefined8 *)0x0) {
                    FMemory::Free(local_78);
                  }
                }
                FUN_1409f5880(&local_88);
                local_44 = '\0';
              }
              plVar5 = local_90;
              param_2 = local_98;
              if (local_68 != 0) {
                FMemory::Free();
                plVar5 = local_90;
                param_2 = local_98;
              }
            }
            plVar11 = plVar11 + 0xb;
          } while (plVar11 != plVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c569d0 FUN_140c569d0 body=52 status=ok
// SIG undefined FUN_140c569d0(void)

undefined8 FUN_140c569d0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0();
    }
    cVar1 = FUN_140adac00(lVar2);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140c56a10 FUN_140c56a10 body=49 status=ok
// SIG undefined FUN_140c56a10(void)

void FUN_140c56a10(longlong param_1)

{
  if (*(char *)(param_1 + 0x128) == '\x03') {
    (**(code **)(*(longlong *)(param_1 + 0xd88) + 0x100))();
  }
  return;
}



// FUNCTION 140c56a50 FUN_140c56a50 body=158 status=ok
// SIG undefined FUN_140c56a50(void)

void FUN_140c56a50(undefined8 param_1,char param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 != '\0') {
    if (param_4 != (longlong *)0x0) {
      uVar1 = FUN_142f71e20();
      lVar3 = (**(code **)(*param_4 + 0x628))(param_4,uVar1);
      if (lVar3 != 0) {
        FUN_142f50d80(lVar3,param_3);
        return;
      }
    }
    plVar4 = (longlong *)FUN_142f5cb40(param_1);
    if ((plVar4 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar4 + 0x728))(plVar4,param_3), cVar2 != '\0')) {
      FUN_142f50b00(plVar4,param_3,0,0);
    }
  }
  return;
}



// FUNCTION 140c56af0 AfterSummary body=85 status=ok
// SIG undefined AfterSummary(void)

void UGDecisionIncident_TradeoffChoice::AfterSummary(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18;
  undefined8 local_10;
  
  lVar1 = FUN_142f5cb40();
  if (lVar1 != 0) {
    local_18 = param_1;
    if (param_1 == 0) {
      local_10 = 0;
    }
    else {
      uVar2 = UUserObjectListEntry::GetPrivateStaticClass();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
    }
    FUN_142f6b110(lVar1,&local_18);
  }
  return;
}



// FUNCTION 140c56b50 FUN_140c56b50 body=484 status=ok
// SIG undefined FUN_140c56b50(void)

void FUN_140c56b50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_48 [32];
  longlong local_28;
  
  lVar4 = (**(code **)(*(longlong *)(param_1 + 0xd80) + 0x18))();
  lVar6 = *(longlong *)(param_1 + 0x1420);
  if (lVar6 == 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
      lVar6 = *(longlong *)(param_1 + 0x1420);
    }
    if ((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2a8), lVar1 != 0)) {
      *(longlong *)(param_1 + 0x1420) = lVar1;
      lVar6 = lVar1;
    }
  }
  if ((lVar4 != 0) && (lVar6 != 0)) {
    cVar3 = FUN_1404724a0(lVar6,param_2);
    if (cVar3 == '\0') {
      FUN_142fde510(local_48);
      FUN_142ffa4f0(lVar4,param_3,local_48);
      cVar3 = FUN_140c39630(param_1,local_28);
      if (cVar3 != '\0') {
        FUN_143016230(lVar4,param_2,param_3);
        if (local_28 != 0) {
          uVar5 = FUN_140c428a0(param_1);
          FUN_140e7b630(uVar5,param_2,local_28,1,1);
        }
      }
    }
    else {
      FUN_142fde510(local_48);
      FUN_142ffa4f0(lVar4,param_3,local_48);
      cVar3 = FUN_140c39630(param_1,local_28);
      lVar4 = local_28;
      if ((cVar3 != '\0') && (local_28 != 0)) {
        uVar5 = FUN_140c428a0(param_1);
        FUN_140e7b630(uVar5,lVar6,lVar4,1,1);
        if (local_28 != 0) {
          lVar6 = FUN_1430b3b80();
          if ((*(int *)(*(longlong *)(local_28 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(local_28 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            if (*(byte *)(param_1 + 0x128) < 3) {
              FUN_1413f89f0();
            }
            else {
              FUN_140c578a0(param_1,local_28,0,0,0);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c56d70 FUN_140c56d70 body=28 status=ok
// SIG undefined FUN_140c56d70(void)

void FUN_140c56d70(longlong param_1)

{
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_140c59fc0();
  }
  return;
}



// FUNCTION 140c56d90 FUN_140c56d90 body=596 status=ok
// SIG undefined FUN_140c56d90(void)

void FUN_140c56d90(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int local_res8 [2];
  int local_res18 [4];
  ulonglong in_stack_ffffffffffffffc8;
  
  lVar3 = (**(code **)(*(longlong *)(param_1 + 0xd80) + 0x18))();
  if (lVar3 != 0) {
    if (*(longlong *)(param_1 + 0x1cd0) == 0) {
      lVar4 = param_1 + 0x1430;
    }
    else {
      lVar4 = FUN_140c428a0();
    }
    uVar5 = FUN_140e7fd70(lVar4,param_2);
    FUN_142ffa6f0(lVar3,local_res8,uVar5);
    FUN_142ffe3d0(lVar3,local_res18,*(undefined8 *)(param_2 + 0x70));
    if (local_res18[0] == local_res8[0]) {
      FUN_142fea760(lVar3,*(undefined8 *)(param_2 + 0x70));
    }
    lVar9 = 0;
    lVar10 = 0;
    lVar6 = FUN_140c46b40(param_1);
    lVar3 = lVar9;
    lVar4 = lVar9;
    if ((lVar6 != 0) && (cVar2 = FUN_140e85c60(param_2,lVar6), lVar3 = 0, cVar2 != '\0')) {
      lVar3 = *(longlong *)(param_1 + 0x1d18);
      if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x1cd0) != param_1)) {
        lVar3 = param_1;
      }
      lVar3 = FUN_140e7ef10(lVar3 + 0x1518,uVar5);
      if (lVar3 != 0) {
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        lVar6 = *(longlong *)(DAT_146b33f38 + 0x58);
        lVar4 = lVar10;
        if ((lVar6 != 0) && (*(longlong *)(lVar6 + 800) != 0)) {
          lVar7 = FUN_1413c0f50();
          lVar10 = *(longlong *)(lVar6 + 800);
          for (lVar11 = lVar10; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
            if (lVar11 == lVar7) {
              if (lVar10 != 0) {
                lVar11 = lVar9;
                if (lVar10 != 0) {
                  lVar7 = FUN_1413c0f50();
                  for (lVar10 = *(longlong *)(lVar6 + 800);
                      (lVar11 = lVar9, lVar10 != 0 &&
                      (lVar11 = *(longlong *)(lVar6 + 800), lVar10 != lVar7));
                      lVar10 = *(longlong *)(lVar10 + 0x30)) {
                  }
                }
                uVar8 = FUN_140c428a0(param_1);
                in_stack_ffffffffffffffc8 = 0;
                lVar6 = FUN_140e80ad0(uVar8,lVar11,uVar5,0,0);
                if (lVar6 != 0) {
                  lVar9 = FUN_1430b3b80();
                  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if (bVar1) {
                    lVar4 = lVar6;
                  }
                }
              }
              break;
            }
          }
        }
      }
    }
    if (*(longlong *)(param_1 + 0x1cd0) == 0) {
      lVar6 = param_1 + 0x1430;
    }
    else {
      lVar6 = FUN_140c428a0();
    }
    FUN_140e948e0(lVar6,param_2,1,0);
    if (lVar3 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x1d18);
      if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x1cd0) != param_1)) {
        lVar6 = param_1;
      }
      FUN_140c57820(lVar6,lVar4,lVar3,0,in_stack_ffffffffffffffc8 & 0xffffffffffffff00);
    }
  }
  return;
}



// FUNCTION 140c57010 FUN_140c57010 body=1272 status=ok
// SIG undefined FUN_140c57010(void)

void FUN_140c57010(longlong param_1,byte param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  byte bVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 local_res8;
  uint local_98;
  uint uStack_94;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_70;
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
  
  if ((*(byte *)(param_1 + 0x80) & 1) != param_2) {
    FUN_142ccef30();
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_14686c4d0) &&
       (_Init_thread_header(&DAT_14686c4d0), DAT_14686c4d0 == -1)) {
      FName::FName(&DAT_14686c4c8,L"HiddenInGame",1);
      _Init_thread_footer(&DAT_14686c4d0);
    }
    if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
      FUN_140e94ca0(param_1 + 0x1518,DAT_14686c4c8);
    }
    else {
      FUN_140e839f0();
    }
    bVar13 = *(byte *)(param_1 + 0x80);
    local_res8 = DAT_14686c4c8;
    cVar7 = FUN_1407c3030(param_1 + 0x1ae8);
    if ((bVar13 & 1) == 0) {
      FUN_142dbb5d0(param_1 + 0x1ae8,&local_res8);
    }
    else {
      FUN_142dafbc0();
    }
    cVar8 = FUN_1407c3030(param_1 + 0x1ae8);
    uVar19 = 0;
    if (cVar7 != cVar8) {
      plVar14 = *(longlong **)(param_1 + 0x1ad0);
      uVar18 = (longlong)*(int *)(param_1 + 0x1ad8) & 0x1fffffffffffffff;
      if (plVar14 + *(int *)(param_1 + 0x1ad8) < plVar14) {
        uVar18 = uVar19;
      }
      uVar15 = uVar19;
      if (uVar18 != 0) {
        do {
          plVar4 = (longlong *)*plVar14;
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x310))(plVar4,cVar8);
          }
          plVar14 = plVar14 + 1;
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar18);
      }
    }
    plVar14 = (longlong *)(param_1 + 0x2b0);
    uStack_94 = 1;
    uVar2 = *(uint *)(param_1 + 0x2d8);
    puVar1 = (uint *)(param_1 + 0x2c0);
    local_98 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    if (uVar2 != 0) {
      puVar17 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar17 = puVar1;
      }
      uVar3 = *puVar17;
      uVar18 = uVar19;
      while (uVar3 == 0) {
        iVar9 = (int)uVar19;
        uStack_80 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_80;
        local_98 = iVar9 + 1;
        uVar19 = (ulonglong)local_98;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_140c571ed;
        uVar3 = puVar17[(longlong)iVar9 + 1];
      }
      uStack_94 = uVar3 - 1 & uVar3 ^ uVar3;
      iVar9 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_84 = (uStack_80 - iVar9) + 0x1f;
      if ((int)uVar2 < (int)uStack_84) {
LAB_140c571ed:
        uStack_84 = uVar2;
      }
    }
    uVar3 = *(uint *)(param_1 + 0x2d8);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,uStack_80);
    uStack_48 = CONCAT44(uStack_94,local_98);
    uVar16 = uVar3 & 0xffffffe0;
    uStack_70 = local_98;
    uStack_6c = uStack_94;
    local_68 = puVar1;
    local_50 = plVar14;
    puStack_40 = puVar1;
    uStack_30 = local_58;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_84 = uVar3;
    if (uVar3 != uVar2) {
      puVar17 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar17 = puVar1;
      }
      uVar12 = puVar17[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
      iVar9 = (int)uVar3 >> 5;
      while (uVar12 == 0) {
        uVar16 = uVar16 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_140c572c5;
        uVar12 = puVar17[(longlong)iVar9 + 1];
        iVar9 = iVar9 + 1;
      }
      uVar12 = uVar12 - 1 & uVar12 ^ uVar12;
      iVar9 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uVar12 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_84 = (uVar16 - iVar9) + 0x1f;
      if ((int)uVar2 < (int)uStack_84) {
LAB_140c572c5:
        uStack_84 = uVar2;
      }
    }
    while( true ) {
      if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) break;
      lVar5 = *(longlong *)(*plVar14 + (longlong)(int)uStack_5c * 0x10);
      if (lVar5 != 0) {
        lVar10 = FUN_1429bed90();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          bVar13 = 0;
          if (((*(byte *)(param_1 + 0x80) & 1) == 0) && (lVar10 = FUN_14178ca30(lVar5), lVar10 != 0)
             ) {
            lVar11 = FUN_1429bed90();
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
              bVar13 = *(byte *)(lVar10 + 0x2f2) >> 6 & 1;
            }
          }
          if ((*(byte *)(lVar5 + 0x2f2) >> 6 & 1) != bVar13) {
            *(byte *)(lVar5 + 0x2f2) = bVar13 << 6 | *(byte *)(lVar5 + 0x2f2) & 0xbf;
            FUN_1423424e0(lVar5);
          }
        }
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    }
    uVar19 = 0;
    if (*(char *)(param_1 + 0x128) == '\x03') {
      plVar14 = *(longlong **)(param_1 + 0x13b0);
      uVar18 = (longlong)*(int *)(param_1 + 0x13b8) & 0x1fffffffffffffff;
      if (plVar14 + *(int *)(param_1 + 0x13b8) < plVar14) {
        uVar18 = 0;
      }
      if (uVar18 != 0) {
        do {
          plVar4 = (longlong *)*plVar14;
          if ((plVar4 != (longlong *)0x0) &&
             (((*(byte *)(plVar4 + 0x10) ^ *(byte *)(param_1 + 0x80)) & 1) != 0)) {
            (**(code **)(*plVar4 + 0x600))(plVar4);
            (**(code **)(*plVar4 + 0x310))(plVar4,*(byte *)(param_1 + 0x80) & 1);
          }
          plVar14 = plVar14 + 1;
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar18);
      }
    }
    if (*(longlong *)(param_1 + 0xe90) != 0) {
      FUN_140eb3560();
    }
  }
  return;
}



// FUNCTION 140c57510 FUN_140c57510 body=111 status=ok
// SIG undefined FUN_140c57510(void)

void FUN_140c57510(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x1e58) != 0) {
    FUN_1412403c0(*(longlong *)(param_1 + 0x1e58),0);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*(longlong *)(param_1 + 0x1e58) + 0x8c8,0);
  }
  *(longlong *)(param_1 + 0x1e58) = param_2;
  if (param_2 != 0) {
    FUN_1412403c0(param_2,param_1);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*(longlong *)(param_1 + 0x1e58) + 0x8c8,0);
  }
  return;
}



// FUNCTION 140c57580 FUN_140c57580 body=323 status=ok
// SIG undefined FUN_140c57580(void)

void FUN_140c57580(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686c480) {
    _Init_thread_header(&DAT_14686c480);
    if (DAT_14686c480 == -1) {
      FName::FName(&DAT_14686c478,L"CharacterRoot",1);
      _Init_thread_footer(&DAT_14686c480);
    }
  }
  if (*(char *)(param_1 + 0x1125) != '\0') {
    if (param_2 == '\0') {
      FUN_142dbb5d0(param_1 + 0x1158,local_res18);
    }
    else {
      FUN_142dafbc0();
    }
    cVar2 = FUN_1407c3030(param_1 + 0x1158);
    lVar1 = *(longlong *)(param_1 + 0x900);
    if (cVar2 != '\0') {
      if (lVar1 != 0) {
        FUN_142dafbc0(lVar1 + 0x8b0,&DAT_14686c478);
        (**(code **)(**(longlong **)(param_1 + 0x900) + 0x430))();
      }
      FUN_142d8e990(param_1,DAT_14686c478,1);
      return;
    }
    if (lVar1 != 0) {
      FUN_142dbb5d0(lVar1 + 0x8b0,&DAT_14686c478);
    }
    FUN_142d8f260(param_1,DAT_14686c478);
  }
  return;
}



// FUNCTION 140c576d0 FUN_140c576d0 body=34 status=ok
// SIG undefined FUN_140c576d0(void)

void FUN_140c576d0(longlong param_1,float param_2)

{
  if (param_2 < 0.0) {
    *(undefined4 *)(param_1 + 0x460) = 0;
    return;
  }
  if (9.99 <= param_2) {
    param_2 = 9.99;
  }
  *(float *)(param_1 + 0x460) = param_2;
  return;
}



// FUNCTION 140c57710 FUN_140c57710 body=39 status=ok
// SIG undefined FUN_140c57710(void)

void FUN_140c57710(longlong param_1,float param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1d28) = param_3;
  if (0.0 <= param_2) {
    *(byte *)(param_1 + 0xf48) = *(byte *)(param_1 + 0xf48) | 4;
    *(float *)(param_1 + 0xf4c) = param_2;
    *(float *)(param_1 + 0x1d20) = param_2;
  }
  return;
}



// FUNCTION 140c57740 FUN_140c57740 body=176 status=ok
// SIG undefined FUN_140c57740(void)

void FUN_140c57740(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0xd88) + 0x110))((longlong *)(param_1 + 0xd88),3);
  if (cVar2 != '\0') {
    lVar3 = FUN_140e7fd70(param_1 + 0x1430,param_2);
    if (lVar3 != 0) {
      lVar4 = FUN_1430b3b80();
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
        FUN_140c57820(param_1,lVar3,param_3,param_4,param_5);
      }
    }
  }
  return;
}



// FUNCTION 140c577f0 FUN_140c577f0 body=35 status=ok
// SIG undefined FUN_140c577f0(void)

void FUN_140c577f0(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x1cd8) = 0;
  }
  else if (*(longlong *)(param_1 + 0x1cd8) == 0) {
    *(longlong *)(param_1 + 0x1cd8) = param_2;
    return;
  }
  return;
}



// FUNCTION 140c57820 FUN_140c57820 body=116 status=ok
// SIG undefined FUN_140c57820(void)

void FUN_140c57820(longlong *param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = (**(code **)(*param_1 + 0xa68))(param_1,param_3);
  }
  if (*(byte *)(param_1 + 0x25) < 3) {
    FUN_1413f89f0();
    return;
  }
  FUN_140c578a0(param_1,param_2,uVar1,param_4,param_5);
  return;
}



// FUNCTION 140c578a0 FUN_140c578a0 body=480 status=ok
// SIG undefined FUN_140c578a0(void)

void FUN_140c578a0(longlong *param_1,longlong param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  
  if (((char)param_1[0x25] == '\x03') &&
     ((*(char *)((longlong)param_1 + 0x1ccd) == '\0' || (param_2 == 0)))) {
    cVar4 = (**(code **)(*param_1 + 0xc08))();
    if ((cVar4 == '\0') && (cVar4 = (**(code **)(*param_1 + 0xc28))(), cVar4 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    uVar8 = 1;
    uVar3 = 1;
    if (!bVar2) {
      uVar8 = param_5;
      uVar3 = param_4;
    }
    if ((param_2 != 0) &&
       ((*(longlong **)(param_2 + 0x150) != param_1 || (*(longlong **)(param_2 + 0x4a0) != param_1))
       )) {
      FUN_14307df60(param_2,param_1);
    }
    plVar1 = param_1 + 0x1b1;
    lVar6 = (**(code **)(*plVar1 + 0xf0))(plVar1,param_3);
    if ((((lVar6 == 0) || (param_2 != lVar6)) || (cVar4 = FUN_14307eb90(lVar6), cVar4 != '\0')) ||
       (((cVar4 = FUN_1407cd900(lVar6), cVar4 != '\0' || (param_2 == 0)) ||
        (*(longlong *)(param_2 + 0x7f8) == DAT_146b47938)))) {
      uVar5 = FUN_140e80ac0(param_1 + 0x2a3);
      if (param_2 != 0) {
        FUN_1430833a0(param_2,param_1,param_3,uVar8,uVar5);
      }
      if (((lVar6 != 0) && (param_2 != lVar6)) &&
         ((*(longlong *)(lVar6 + 0x7f8) != DAT_146b47938 &&
          (cVar4 = FUN_1407cd900(lVar6), cVar4 == '\0')))) {
        FUN_143083420(lVar6,uVar3);
      }
      (**(code **)(*plVar1 + 0x1b0))(plVar1,param_2,param_3,uVar5);
      if ((((lVar6 != 0) && (param_2 != lVar6)) &&
          (lVar7 = (**(code **)(*plVar1 + 0xf0))(plVar1,param_3), lVar7 != param_2)) &&
         ((*(longlong *)(lVar6 + 0x7f8) != DAT_146b47938 &&
          (cVar4 = FUN_1407cd900(lVar6), cVar4 == '\0')))) {
        (**(code **)(*plVar1 + 0x1b8))(plVar1,lVar6,param_3);
      }
    }
  }
  return;
}



// FUNCTION 140c57a80 FUN_140c57a80 body=1177 status=ok
// SIG undefined FUN_140c57a80(void)

void FUN_140c57a80(longlong *param_1,char param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if (lVar7 == 0) {
    return;
  }
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  lVar13 = 0;
  lVar15 = lVar13;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar12 = iVar1 >> 0x1f & 0xffff;
    uVar6 = iVar1 + uVar12;
    lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
             (longlong)(int)((uVar6 & 0xffff) - uVar12) * 0x18;
  }
  if ((*(uint *)(lVar15 + 8) >> 0x1d & 1) != 0) {
    return;
  }
  cVar5 = UWorld::IsInSeamlessTravel(lVar7);
  lVar15 = lVar13;
  if (cVar5 != '\0') {
    return;
  }
LAB_140c57b30:
  if (*(longlong *)(param_1[2] + 0x18) == *(longlong *)((longlong)&DAT_14686c2c8 + lVar15)) {
    uVar2 = *(undefined8 *)((longlong)&PTR_u__Game_PatchDLC_Hibiscus_GameData_146299540 + lVar15);
    uVar8 = FUN_142dfdfe0();
    lVar9 = FUN_141799830(uVar8,0,uVar2,0,0,0);
    if (lVar9 != 0) {
      lVar10 = FUN_142dfdfe0();
      lVar11 = lVar9;
      do {
        if (lVar11 == lVar10) {
          lVar11 = UWorld::GetFirstPlayerController(lVar7);
          if (lVar11 != 0) {
            lVar10 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((bVar4) && (plVar3 = *(longlong **)(lVar11 + 0xc98), plVar3 != (longlong *)0x0)) {
              lVar11 = UBlueprintGeneratedClass::GetPrivateStaticClass();
              if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
                  lVar11 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                lVar10 = FUN_142dfdfe0();
                lVar11 = lVar9;
                goto LAB_140c57c23;
              }
            }
          }
          break;
        }
        lVar11 = *(longlong *)(lVar11 + 0x30);
      } while (lVar11 != 0);
    }
  }
  goto LAB_140c57c46;
  while (lVar11 = *(longlong *)(lVar11 + 0x30), lVar14 = lVar13, lVar11 != 0) {
LAB_140c57c23:
    lVar14 = lVar9;
    if (lVar11 == lVar10) break;
  }
  (**(code **)(*plVar3 + 0x410))(plVar3,lVar14,0);
LAB_140c57c46:
  lVar15 = lVar15 + 8;
  if (0x1f < lVar15) goto code_r0x000140c57c54;
  goto LAB_140c57b30;
code_r0x000140c57c54:
  lVar7 = FUN_142ceefa0(param_1);
  *(bool *)((longlong)param_1 + 0xec2) = lVar7 != 0;
  if (lVar7 != 0) {
    lVar7 = FUN_142ceefa0(param_1);
    if (lVar7 != 0) {
      lVar15 = FUN_1414e0f70();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (*(longlong *)(lVar7 + 0x6d8) != 0)) {
        *(undefined4 *)(param_1 + 0x3c6) = *(undefined4 *)(lVar7 + 0x6c8);
        param_1[0x3c5] = *(longlong *)(*(longlong *)(lVar7 + 0x6d8) + 0x7c0);
        goto LAB_140c57d3f;
      }
    }
    lVar7 = FUN_14222e2a0(param_1);
    if (lVar7 != 0) {
      lVar15 = FUN_1414d8e60();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (*(char *)(lVar7 + 0x518) == '\0')) {
        *(undefined1 *)((longlong)param_1 + 0xec3) = 1;
      }
    }
  }
LAB_140c57d3f:
  if ((char)param_1[0x25] != '\x03') {
    return;
  }
  cVar5 = (**(code **)(*param_1 + 0x950))(param_1);
  if (cVar5 != '\0') {
    return;
  }
  if (*(char *)((longlong)param_1 + 0xec1) != '\0') {
    return;
  }
  FUN_140c40780(param_1,1);
  lVar7 = FUN_142ceefa0(param_1);
  if (lVar7 != 0) {
    if ((*(char *)((longlong)param_1 + 0x13c1) == '\0') &&
       (lVar15 = FUN_140c41820(param_1), lVar15 == 0)) {
      if ((char)param_1[0x1d8] != '\x04') {
        *(undefined1 *)(param_1 + 0x1d8) = 4;
        (**(code **)(param_1[0x1b5] + 0x48))();
      }
    }
    else if (param_2 != '\x03') goto LAB_140c57dd2;
    FUN_142ce8a30(lVar7,1,0);
  }
LAB_140c57dd2:
  *(char *)((longlong)param_1 + 0xec1) = param_2;
  if ((param_1[0x122] != 0) && (cVar5 = FUN_142d1f310(), cVar5 == '\0')) {
    if (param_2 == '\x05') {
      FUN_140a8aa70(param_1[0x1cf]);
    }
    else {
      (**(code **)(*(longlong *)param_1[0x122] + 0x420))();
    }
  }
  if (param_1[0x120] != 0) {
    FUN_142d01010(param_1[0x120],0,1);
  }
  if ((char)param_1[0x1d8] != '\x04') {
    *(undefined1 *)(param_1 + 0x1d8) = 4;
    (**(code **)(param_1[0x1b5] + 0x48))();
  }
  (**(code **)(param_1[0x1b1] + 0xf8))(param_1 + 0x1b1,0xffffffff,1);
  if ((*(byte *)((longlong)param_1 + 0x13fc) & 2) != 0) {
    FUN_140c3cb50(param_1);
  }
  FUN_1405f45e0(param_1,0);
  FUN_140c47d80(param_1);
  FUN_142cbbd00(param_1);
  FUN_140c57f20(param_1,1);
  if (((param_1[0x21c] != 0) && ((byte)(param_2 - 3U) < 2)) && (lVar7 = param_1[0x92], lVar7 != 0))
  {
    lVar15 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8)
        != lVar15 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((*(byte *)(lVar7 + 0x640) & 2) != 0)) {
      FUN_140ad0a50(param_1[0x21c]);
    }
  }
  return;
}



// FUNCTION 140c57f20 FUN_140c57f20 body=161 status=ok
// SIG undefined FUN_140c57f20(void)

void FUN_140c57f20(longlong param_1,undefined1 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686c4a0) {
    _Init_thread_header(&DAT_14686c4a0);
    if (DAT_14686c4a0 == -1) {
      FName::FName(&DAT_14686c498,L"IsDead",1);
      _Init_thread_footer(&DAT_14686c4a0);
    }
  }
  if ((*(char *)(param_1 + 0x128) == '\x03') && (*(longlong *)(param_1 + 0x908) != 0)) {
    FUN_142ddcd30(*(longlong *)(param_1 + 0x908),param_2,DAT_14686c498);
  }
  return;
}



// FUNCTION 140c57fd0 FUN_140c57fd0 body=541 status=ok
// SIG undefined FUN_140c57fd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c57fd0(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 local_60;
  
  lVar6 = FUN_1405c6c00();
  lVar2 = *(longlong *)(param_1 + -1000);
  if ((((param_2 != 0) && (param_3 != 0)) && (lVar6 != 0)) &&
     ((lVar2 != 0 && (lVar3 = *(longlong *)(param_1 + 0x5f0), lVar3 != 0)))) {
    if (*(longlong *)(lVar3 + 0x1d0) == 0) {
      FUN_1405aaa50(param_3,*(undefined8 *)(lVar6 + 0x1b0),0,0,4,0);
      FUN_1405aaa50(param_3,*(undefined8 *)(lVar6 + 0x1b8),0,0,4,0);
    }
    else {
      lVar4 = *(longlong *)(param_1 + -0x750);
      if (lVar4 == 0) {
        local_60 = DAT_1468b5d98;
        uVar7 = _DAT_1468b5d90;
      }
      else {
        local_60 = *(float *)(lVar4 + 0x228);
        uVar7 = *(undefined8 *)(lVar4 + 0x220);
      }
      uVar8 = *(uint *)(lVar2 + 0x230) & _DAT_14686bda0;
      uVar9 = *(uint *)(lVar2 + 0x234) & uRam000000014686bda4;
      uVar10 = *(uint *)(lVar2 + 0x238) & uRam000000014686bda8;
      uVar11 = *(uint *)(lVar2 + 0x23c) & uRam000000014686bdac;
      fVar1 = *(float *)(lVar2 + 0x710);
      auVar13._4_4_ = uVar9;
      auVar13._0_4_ = uVar8;
      auVar13._8_4_ = uVar10;
      auVar13._12_4_ = uVar11;
      auVar14._4_4_ = uVar10;
      auVar14._0_4_ = uVar9;
      auVar14._8_4_ = uVar8;
      auVar14._12_4_ = uVar11;
      auVar14 = minps(auVar13,auVar14);
      auVar5._4_4_ = uVar8;
      auVar5._0_4_ = uVar10;
      auVar5._8_4_ = uVar9;
      auVar5._12_4_ = uVar11;
      auVar14 = minps(auVar14,auVar5);
      fVar12 = *(float *)(lVar3 + 0x1f0) - (local_60 - fVar1 * auVar14._0_4_);
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      FUN_1405aaa50(param_3,*(undefined8 *)(lVar6 + 0x1b0),fVar12,0,4,0,uVar7);
      FUN_1405aaa50(param_3,*(undefined8 *)(lVar6 + 0x1b8),(fVar12 / (fVar1 * auVar14._0_4_)) * 0.5,
                    0,4,0);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x5f0) + 0x1e8);
      if (lVar2 != 0) {
        uVar7 = FUN_142db9220(*(undefined1 *)(lVar2 + 0x50));
        FUN_1405aaf10(param_3,uVar7);
      }
    }
  }
  return;
}



// FUNCTION 140c581f0 FUN_140c581f0 body=171 status=ok
// SIG undefined FUN_140c581f0(void)

void FUN_140c581f0(longlong param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x478);
  if (lVar1 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
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
      *(undefined4 *)(lVar1 + 0x584) = param_5;
      *(undefined4 *)(lVar1 + 0x57c) = param_3;
      *(undefined1 *)(lVar1 + 0x578) = param_2;
      *(undefined1 *)(lVar1 + 0x580) = param_4;
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(lVar1 + 0x588,param_6);
    }
  }
  return;
}



// FUNCTION 140c582b0 FUN_140c582b0 body=190 status=ok
// SIG undefined FUN_140c582b0(void)

void FUN_140c582b0(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  undefined8 local_res8;
  
  lVar1 = param_1 + 0x1c18;
  local_res8 = param_3;
  cVar2 = FUN_1407c3030(lVar1);
  if (param_2 == '\0') {
    FUN_142dbb5d0(lVar1,&local_res8);
  }
  else {
    FUN_142dafbc0();
  }
  cVar3 = FUN_1407c3030(lVar1);
  if (cVar2 != cVar3) {
    FUN_140c587c0(param_1);
  }
  local_res8 = param_3;
  cVar2 = FUN_1407c3030(param_1 + 0x1b80);
  if (param_2 == '\0') {
    FUN_142dbb5d0(param_1 + 0x1b80,&local_res8);
  }
  else {
    FUN_142dafbc0();
  }
  cVar3 = FUN_1407c3030(param_1 + 0x1b80);
  if (cVar2 != cVar3) {
    FUN_140c587c0(param_1);
  }
  return;
}



// FUNCTION 140c58370 FUN_140c58370 body=196 status=ok
// SIG undefined FUN_140c58370(void)

void FUN_140c58370(longlong param_1,char param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  cVar2 = FUN_1407c3030(param_1 + 0x1ae8);
  if (param_2 == '\0') {
    FUN_142dbb5d0(param_1 + 0x1ae8,local_res18);
  }
  else {
    FUN_142dafbc0();
  }
  cVar3 = FUN_1407c3030(param_1 + 0x1ae8);
  if (cVar2 != cVar3) {
    plVar4 = *(longlong **)(param_1 + 0x1ad0);
    uVar6 = 0;
    uVar5 = (longlong)*(int *)(param_1 + 0x1ad8) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(param_1 + 0x1ad8) < plVar4) {
      uVar5 = uVar6;
    }
    if (uVar5 != 0) {
      do {
        plVar1 = (longlong *)*plVar4;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x310))(plVar1,cVar3);
        }
        plVar4 = plVar4 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
  }
  return;
}



// FUNCTION 140c58440 FUN_140c58440 body=86 status=ok
// SIG undefined FUN_140c58440(void)

void FUN_140c58440(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1405c6c00();
  if (((*param_2 != 0) && (lVar1 != 0)) && (*(longlong *)(lVar1 + 0x1c0) != 0)) {
    FUN_1405aaa50(*param_2,*(longlong *)(lVar1 + 0x1c0),*(undefined4 *)(param_1 + 0x1d30),0,4,0);
  }
  return;
}



// FUNCTION 140c584a0 FUN_140c584a0 body=292 status=ok
// SIG undefined FUN_140c584a0(void)

void FUN_140c584a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong local_res10 [3];
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x378) != 0)) {
    FUN_14058f880(local_res10);
    lVar3 = FUN_1405c6c00();
    if ((local_res10[0] != 0) && ((lVar3 != 0 && (*(longlong *)(lVar3 + 0x1c0) != 0)))) {
      FUN_1405aaa50(local_res10[0],*(longlong *)(lVar3 + 0x1c0),*(undefined4 *)(param_1 + 4000),0,4,
                    0);
    }
    lVar3 = FUN_1405c6c00();
    if (local_res10[0] != 0) {
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1c8) != 0)) {
        plVar1 = *(longlong **)(param_1 + -0x900);
        if ((plVar1 == (longlong *)0x0) ||
           ((((*(uint *)((longlong)plVar1 + 0x4cc) >> 1 & 1) == 0 ||
             (cVar2 = (**(code **)(*plVar1 + 0x768))(plVar1), cVar2 == '\0')) ||
            (cVar2 = (**(code **)(*(longlong *)(param_1 + -0xd90) + 0x818))(param_1 + -0xd90),
            cVar2 == '\0')))) {
          uVar4 = 0x3f800000;
        }
        else {
          uVar4 = 0;
        }
        FUN_1405aaa50(local_res10[0],*(undefined8 *)(lVar3 + 0x1c8),uVar4,0,4,0);
      }
      if (local_res10[0] != 0) {
        FUN_1405a53f0();
      }
    }
  }
  return;
}



// FUNCTION 140c585d0 FUN_140c585d0 body=34 status=ok
// SIG undefined FUN_140c585d0(void)

void FUN_140c585d0(longlong param_1,float param_2)

{
  if (param_2 < 0.0) {
    *(undefined4 *)(param_1 + 0x464) = 0;
    return;
  }
  if (9.99 <= param_2) {
    param_2 = 9.99;
  }
  *(float *)(param_1 + 0x464) = param_2;
  return;
}



// FUNCTION 140c58600 FUN_140c58600 body=438 status=ok
// SIG undefined FUN_140c58600(void)

void FUN_140c58600(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (param_2 != param_1[0x39a]) {
    FUN_140c54bb0();
    param_1[0x39a] = param_2;
    if (param_2 != 0) {
      (**(code **)(*(longlong *)(param_2 + 0xd88) + 0xf8))
                ((longlong *)(param_2 + 0xd88),0xffffffff,1);
      lVar4 = (**(code **)(*(longlong *)(param_1[0x39a] + 0xd80) + 0x18))();
      param_1[0x1d3] = lVar4;
      plVar6 = (longlong *)param_1[0x2a3];
      plVar7 = plVar6 + (longlong)(int)param_1[0x2a4] * 0x1f;
      for (; plVar6 != plVar7; plVar6 = plVar6 + 0x1f) {
        lVar4 = *plVar6;
        if (lVar4 != 0) {
          lVar5 = param_1[0x39a] + 0x1518;
          cVar2 = FUN_140e96340(lVar5);
          if ((cVar2 != '\0') &&
             (((lVar4 != 0 || (lVar4 = FUN_140e7eef0(lVar5,0), lVar4 != 0)) &&
              (lVar4 = FUN_140e83520(lVar5), lVar4 != 0)))) {
            plVar1 = (longlong *)param_1[0x39a];
            if (*plVar6 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = (**(code **)(*plVar1 + 0xa68))(plVar1);
            }
            if (*(byte *)(plVar1 + 0x25) < 3) {
              FUN_1413f89f0();
            }
            else {
              FUN_140c578a0(plVar1,0,uVar3,1,0);
            }
            FUN_14307df60(lVar4,param_1);
            if (*plVar6 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = (**(code **)(*param_1 + 0xa68))(param_1);
            }
            if (*(byte *)(param_1 + 0x25) < 3) {
              FUN_1413f89f0();
            }
            else {
              FUN_140c578a0(param_1,lVar4,uVar3,1,0);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c587c0 FUN_140c587c0 body=523 status=ok
// SIG undefined FUN_140c587c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c587c0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((*(longlong *)(lVar1 + 400) != 0) && (*(longlong *)(*(longlong *)(lVar1 + 400) + 0xa0) != 0)
       ) {
      local_98 = FUN_140c51e80;
      uVar3 = 0;
      uStack_90 = 0;
      lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar1 + 400) != 0) {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0xa0);
      }
      plVar2 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar2 + 1,param_1);
        *(undefined4 *)(plVar2 + 2) = (undefined4)local_98;
        *(undefined4 *)((longlong)plVar2 + 0x14) = local_98._4_4_;
        *(undefined4 *)(plVar2 + 3) = uStack_90;
        *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_8c;
        lVar1 = FDelegateHandle::GenerateNewID();
        plVar2[5] = lVar1;
        *plVar2 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_88 = 0;
      local_80 = 0;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
      }
      FWeakObjectPtr::operator=(local_78,0);
      local_a0 = 0xbf800000;
      local_a8 = 0;
      local_70 = 0;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      local_68 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar3,param_1 + 0x35c,&local_88,0x3c23d70a);
      if (local_28 != 0) {
        plVar4 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar4 = local_38;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        lVar1 = FMemory::Realloc(plVar2,0,0);
        if (lVar1 != 0) {
          FMemory::Free(lVar1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c589d0 SetNum body=108 status=ok
// SIG undefined SetNum(void)

void TArray<int,FDefaultAllocator>::SetNum(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1[1];
  iVar2 = (int)param_2;
  if (iVar1 < iVar2) {
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow();
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar1 * 4),0,(longlong)(iVar2 - iVar1) << 2);
    return;
  }
  if (iVar2 < iVar1) {
    RemoveAtImpl(param_1,param_2,iVar1 - iVar2,param_3);
  }
  return;
}



// FUNCTION 140c58a40 FUN_140c58a40 body=8 status=ok
// SIG undefined FUN_140c58a40(void)

void FUN_140c58a40(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1e50) = param_2;
  return;
}



// FUNCTION 140c58a50 FUN_140c58a50 body=161 status=ok
// SIG undefined FUN_140c58a50(void)

ulonglong FUN_140c58a50(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar1 = FUN_140c450c0(param_1,param_2,1);
  uVar4 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_142f5cb40(param_1);
    uVar4 = 0;
    if (lVar2 != 0) {
      lVar3 = FUN_142f5c680(lVar2,param_2);
      uVar4 = 0;
      if (lVar3 != 0) {
        uVar4 = FUN_142f68040(lVar2,lVar1,1);
        if ((char)uVar4 == '\0') {
          *(undefined1 *)(lVar1 + 8) = *(undefined1 *)(lVar3 + 0x10);
          *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar3 + 0x28);
          TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(lVar1 + 0x10,lVar3 + 0x18);
          *(undefined1 *)(lVar1 + 0x29) = *(undefined1 *)(lVar3 + 0x68);
          return 1;
        }
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140c58b00 FUN_140c58b00 body=7 status=ok
// SIG undefined FUN_140c58b00(void)

void FUN_140c58b00(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x13c3) = param_2;
  return;
}



// FUNCTION 140c58b10 FUN_140c58b10 body=601 status=ok
// SIG undefined FUN_140c58b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c58b10(longlong param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (param_2 != *(int *)(param_1 + 0x20)) {
    *(int *)(param_1 + 0x20) = param_2;
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
    uVar4 = 0;
    if (cVar1 != '\0') {
      plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
      lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
      if ((lVar3 != 0) && (lVar3 = UWorld::GetGameState<APVPGameState>(lVar3), lVar3 != 0)) {
        cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
        if (cVar1 != '\0') {
          plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
          lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
          if (lVar3 != 0) {
            uVar4 = UWorld::GetGameState<APVPGameState>(lVar3);
          }
        }
        FUN_140cd0230(uVar4,*(undefined4 *)(param_1 + 0x20));
      }
    }
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
      lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
      if (lVar3 != 0) {
        plVar2 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar2 != (longlong *)0x0) {
          plVar2[1] = param_1;
          *plVar2 = (longlong)&DAT_143f3ed00;
          plVar2[2] = (longlong)FUN_140c5d160;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar2[4] = lVar5;
          *plVar2 = (longlong)&PTR_GetPoolName_143f3ed48;
        }
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        local_88 = 0;
        local_80 = 0;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
        }
        FWeakObjectPtr::operator=(local_78,0);
        local_90 = 0xbf800000;
        local_98 = 0;
        local_70 = 0;
        local_38 = (longlong *)0x0;
        local_28 = 0;
        local_68 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar4,param_1 + 0x18,&local_88,0x3f800000);
        if (local_28 != 0) {
          plVar6 = local_58;
          if (local_38 != (longlong *)0x0) {
            plVar6 = local_38;
          }
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6,0);
          }
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          lVar3 = FMemory::Realloc(plVar2,0,0);
          if (lVar3 != 0) {
            FMemory::Free(lVar3);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c58d70 FUN_140c58d70 body=170 status=ok
// SIG undefined FUN_140c58d70(void)

void FUN_140c58d70(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  uVar2 = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x660);
  uVar4 = (longlong)*(int *)(param_1 + 0x668) & 0x1fffffffffffffff;
  if (puVar3 + *(int *)(param_1 + 0x668) < puVar3) {
    uVar4 = uVar2;
  }
  if (uVar4 != 0) {
    do {
      lVar1 = FUN_140e83520(param_1 + 0x790,*puVar3);
      if (lVar1 != 0) {
        local_18 = *param_2;
        local_14 = param_2[1];
        local_10 = *(undefined8 *)(param_2 + 2);
        FUN_14308c6f0(lVar1,&local_18);
      }
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar4);
  }
  return;
}



// FUNCTION 140c58e20 FUN_140c58e20 body=34 status=ok
// SIG undefined FUN_140c58e20(void)

void FUN_140c58e20(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xe68);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x2ac0) = *(uint *)(lVar1 + 0x2ac0) & 0xfffffff7;
    *(uint *)(lVar1 + 0x2ac0) = *(uint *)(lVar1 + 0x2ac0) | (uint)param_2 << 3;
  }
  return;
}



// FUNCTION 140c58e50 FUN_140c58e50 body=46 status=ok
// SIG undefined FUN_140c58e50(void)

void FUN_140c58e50(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xe68);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x2ac0) = *(uint *)(lVar1 + 0x2ac0) & 0xfffffffd;
    *(uint *)(lVar1 + 0x2ac0) =
         ((uint)param_2 + (uint)param_2 | *(uint *)(lVar1 + 0x2ac0)) & 0xfffffffe | (uint)param_2;
  }
  return;
}



// FUNCTION 140c58e80 FUN_140c58e80 body=139 status=ok
// SIG undefined FUN_140c58e80(void)

bool FUN_140c58e80(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (((*(longlong *)(param_1 + 0x250) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x118), lVar1 != 0)) {
    lVar3 = FUN_14145f370();
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
      return *(longlong *)(lVar1 + 0xa58) == *(longlong *)(param_1 + 0x250);
    }
  }
  return true;
}



// FUNCTION 140c58f10 FUN_140c58f10 body=47 status=ok
// SIG undefined FUN_140c58f10(void)

undefined1 FUN_140c58f10(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1407c3030(param_1 + 1000);
  if ((cVar1 == '\0') && (*(char *)(param_1 + -0x340) == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 140c58f40 FUN_140c58f40 body=89 status=ok
// SIG undefined FUN_140c58f40(void)

undefined8 FUN_140c58f40(longlong param_1)

{
  longlong lVar1;
  
  if ((((*(char *)(param_1 + 0x13c3) == '\0') && ((*(char *)(param_1 + 0xb00) - 1U & 0xfd) != 0)) &&
      ((lVar1 = *(longlong *)(param_1 + 0x900), lVar1 == 0 ||
       (((*(char *)(lVar1 + 0x248) != '\x06' || (*(char *)(lVar1 + 0x249) != '\0')) ||
        (*(longlong *)(lVar1 + 0x178) == 0)))))) &&
     ((*(longlong *)(param_1 + 0xe98) == 0 ||
      (*(char *)(*(longlong *)(param_1 + 0xe98) + 0x369) == '\0')))) {
    return 0;
  }
  return 1;
}



// FUNCTION 140c58fa0 FUN_140c58fa0 body=46 status=ok
// SIG undefined FUN_140c58fa0(void)

void FUN_140c58fa0(longlong param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  FUN_140c5b630();
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x28) = local_res8;
  *(undefined4 *)(param_1 + 0x2c) = local_resc;
  return;
}



// FUNCTION 140c58fd0 FUN_140c58fd0 body=527 status=ok
// SIG undefined FUN_140c58fd0(void)

longlong FUN_140c58fd0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  undefined1 local_10;
  
  lVar5 = param_1[0x27a];
  lVar6 = 0;
  if (lVar5 == 0) {
    if (param_1[0x279] != 0) {
      lVar7 = FUN_1430b3b80();
      for (lVar5 = param_1[0x279]; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar7) {
          if (param_1[0x279] == 0) {
            return 0;
          }
          FActorSpawnParameters::FActorSpawnParameters(local_38);
          local_10 = 1;
          lVar5 = lVar6;
          if (param_1[0x279] != 0) {
            lVar8 = FUN_1430b3b80();
            for (lVar7 = param_1[0x279];
                (lVar5 = lVar6, lVar7 != 0 && (lVar5 = param_1[0x279], lVar7 != lVar8));
                lVar7 = *(longlong *)(lVar7 + 0x30)) {
            }
          }
          uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
          lVar5 = UWorld::SpawnActor(uVar4,lVar5,0,0,local_38);
          return lVar5;
        }
      }
    }
  }
  else {
    local_48 = 0;
    local_40 = 0;
    if ((longlong *)param_1[0x21b] == (longlong *)0x0) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)(*(longlong *)param_1[0x21b] + 0x400))();
      lVar5 = param_1[0x27a];
    }
    cVar2 = FUN_143013ad0(&local_48,lVar5,1,uVar3,param_1,0,0);
    lVar5 = local_48;
    if ((cVar2 != '\0') && (0 < (int)local_40)) {
      *(undefined1 *)(local_48 + 0x58) = *(undefined1 *)((longlong)param_1 + 0x13c1);
      *(bool *)(local_48 + 0x59) = *(char *)((longlong)param_1 + 0x13c1) == '\0';
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar5 = FUN_143018fc0(lVar5,uVar4,0);
      if (lVar5 != 0) {
        lVar6 = FUN_1430b3b80();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        lVar6 = 0;
        if (bVar1) {
          lVar6 = lVar5;
        }
      }
    }
    if ((int)local_40 != 0) {
      plVar9 = (longlong *)(local_48 + 0x38);
      iVar10 = (int)local_40;
      do {
        if (plVar9[2] != 0) {
          FMemory::Free();
        }
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar9 + -3);
        plVar9 = plVar9 + 0xc;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  return lVar6;
}



// FUNCTION 140c591e0 FUN_140c591e0 body=466 status=ok
// SIG undefined FUN_140c591e0(void)

void FUN_140c591e0(longlong *param_1,longlong param_2,byte param_3)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  ulonglong uVar9;
  undefined1 local_88 [32];
  longlong local_68;
  longlong local_58;
  longlong local_48;
  longlong local_38;
  
  if ((param_2 != 0) && (uVar9 = 0, param_3 != 0)) {
    while ((int)uVar9 < (int)param_1[0x2a4]) {
      plVar7 = (longlong *)(uVar9 * 0xf8 + param_1[0x2a3]);
      if (*plVar7 != 0) {
        lVar6 = uVar9 * 0x20 + param_2;
        _guard_xfg_dispatch_icall_nop(local_88,0,0x68);
        cVar3 = FUN_1430036a0(lVar6);
        if ((cVar3 == '\0') || (cVar3 = FUN_143001780(local_88,lVar6), cVar3 == '\0')) {
          if (local_38 != 0) {
            FMemory::Free();
          }
          if (local_48 != 0) {
            FMemory::Free();
          }
          if (local_58 != 0) {
            FMemory::Free();
          }
          if (local_68 == 0) {
            return;
          }
          FMemory::Free();
          return;
        }
        uVar1 = *(undefined1 *)((longlong)param_1 + 0x13c1);
        uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar6 = FUN_143019ed0(uVar4,local_88,uVar1,0);
        if (lVar6 != 0) {
          lVar5 = FUN_1430b3b80();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_140c57820(param_1,lVar6,*plVar7,0,0);
          }
        }
        if (local_38 != 0) {
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
      }
      bVar8 = (char)uVar9 + 1;
      uVar9 = (ulonglong)bVar8;
      if (param_3 <= bVar8) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 140c593c0 FUN_140c593c0 body=293 status=ok
// SIG undefined FUN_140c593c0(void)

void FUN_140c593c0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong local_18;
  undefined8 local_10;
  
  iVar2 = FUN_1424f4b20();
  iVar4 = *(int *)(param_1 + 0x5bc);
  if (iVar2 != iVar4) {
    if (iVar2 < iVar4) {
      iVar4 = iVar4 - iVar2;
      (**(code **)(**(longlong **)(param_1 + 0x5c0) + 0x988))(*(longlong **)(param_1 + 0x5c0),iVar4)
      ;
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        (**(code **)(**(longlong **)(param_1 + 0x5c0) + 0x980))
                  (*(longlong **)(param_1 + 0x5c0),&DAT_1468b5b70);
      }
    }
    else {
      local_18 = 0;
      local_10 = 0;
      iVar2 = iVar2 - iVar4;
      iVar4 = 0;
      iVar3 = 0;
      if (iVar2 != 0) {
        while( true ) {
          iVar1 = *(int *)(param_1 + 0x5bc);
          iVar2 = iVar2 + -1;
          local_10 = CONCAT44(local_10._4_4_,iVar3 + 1);
          if (iVar4 < iVar3 + 1) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_18,iVar3);
          }
          *(int *)(local_18 + (longlong)iVar3 * 4) = iVar1 + iVar2;
          if (iVar2 == 0) break;
          iVar4 = local_10._4_4_;
          iVar3 = (int)local_10;
        }
      }
      FUN_1424ce8e0(*(undefined8 *)(param_1 + 0x5c0),&local_18);
      if (local_18 != 0) {
        FMemory::Free();
      }
    }
  }
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 2;
  *(undefined4 *)(param_1 + 0x5d8) = 0;
  if (*(int *)(param_1 + 0x5dc) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x5d0,0);
  }
  FUN_140c5d3c0(param_1);
  return;
}



// FUNCTION 140c594f0 FUN_140c594f0 body=420 status=ok
// SIG undefined FUN_140c594f0(void)

void FUN_140c594f0(longlong *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_18 [2];
  
  plVar5 = param_1 + 1;
  cVar2 = FWeakObjectPtr::IsValid(plVar5);
  if (cVar2 == '\0') {
    lVar4 = 0;
  }
  else {
    plVar3 = (longlong *)FWeakObjectPtr::Get(plVar5);
    lVar4 = (**(code **)(*plVar3 + 0x148))(plVar3);
  }
  (**(code **)(*param_1 + 8))(param_1);
  cVar2 = FWeakObjectPtr::IsValid(plVar5);
  if (cVar2 != '\0') {
    plVar5 = (longlong *)FWeakObjectPtr::Get(plVar5);
    lVar6 = (**(code **)(*plVar5 + 0x148))(plVar5);
    if ((lVar6 != 0) && (*(longlong *)(lVar6 + 400) != 0)) {
      lVar6 = UGameInstance::GetFirstGamePlayer();
      if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0)) {
        lVar7 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_140d141e0(lVar6);
        }
      }
    }
  }
  if (((param_2 == '\0') && (lVar4 != 0)) && (lVar4 = *(longlong *)(lVar4 + 400), lVar4 != 0)) {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_140bce8b0(lVar4,0);
      local_18[0] = 0;
      local_18[1] = 0;
      plVar5 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
      lVar6 = plVar5[0x1f];
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x368))(plVar5);
        lVar6 = plVar5[0x1f];
      }
      FUN_140bc8fd0(lVar4,lVar6 + 0x30,local_18,0);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140c596a0 FUN_140c596a0 body=58 status=ok
// SIG undefined FUN_140c596a0(void)

void FUN_140c596a0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = '\0';
  if (param_2 != 0) {
    cVar1 = (**(code **)(*param_1 + 0xa68))();
    if (cVar1 == -1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140c596d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x1b1] + 0x20))(param_1 + 0x1b1,cVar1,0);
  return;
}



// FUNCTION 140c596e0 FUN_140c596e0 body=258 status=ok
// SIG undefined FUN_140c596e0(void)

void FUN_140c596e0(longlong *param_1,byte param_2,undefined1 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = (**(code **)(param_1[-0x1b1] + 0x950))(param_1 + -0x1b1);
  if ((cVar1 == '\0') && ((int)(uint)param_2 < (int)param_1[0xf3])) {
    FUN_140e91ca0(param_1 + 0xf2,param_2,1,0);
    cVar1 = FUN_140e969b0(param_1 + 0xf2,param_2);
    if (((cVar1 == '\0') &&
        ((plVar2 = (longlong *)(**(code **)(*param_1 + 0xf0))(param_1,param_2),
         plVar2 != (longlong *)0x0 &&
         (cVar1 = FUN_140c39ab0(param_1 + -0x1b1,param_2,0), cVar1 != '\0')))) &&
       ((*(char *)((longlong)param_1 + 0x39a) != '\0' ||
        (((param_1[0x1c] == 0 || ((*(uint *)(param_1[0x1c] + 0x2ac0) >> 2 & 1) == 0)) ||
         (*(float *)(plVar2 + 0xb0) <= 0.0)))))) {
      (**(code **)(*plVar2 + 0x818))(plVar2,param_3);
    }
  }
  return;
}



// FUNCTION 140c597f0 FUN_140c597f0 body=172 status=ok
// SIG undefined FUN_140c597f0(void)

void FUN_140c597f0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  *(undefined1 *)(param_1 + 0x278) = 1;
  plVar2 = (longlong *)(**(code **)(param_1[0x1b1] + 0xf0))(param_1 + 0x1b1,0);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  cVar1 = FUN_140c39ab0(param_1,0,1);
  if (cVar1 != '\0') {
    cVar1 = FUN_1413f8640(param_1);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0xa60))(param_1);
      if ((cVar1 == '\0') || (cVar1 = FUN_140c46e10(param_1), cVar1 == '\0')) {
        (**(code **)(*plVar2 + 0x8b8))(plVar2);
        local_res8[0] = 1;
      }
      else {
        (**(code **)(*plVar2 + 0x8c0))(plVar2,0,1);
        local_res8[0] = 2;
      }
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x206,local_res8);
      return;
    }
    return;
  }
  return;
}



// FUNCTION 140c598a0 FUN_140c598a0 body=747 status=ok
// SIG undefined FUN_140c598a0(void)

void FUN_140c598a0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *local_res8;
  longlong *local_res10;
  longlong local_res18;
  
  iVar1 = (int)param_1[1];
  lVar11 = (longlong)iVar1;
  local_res8 = param_1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_2,iVar1);
  }
  plVar8 = local_res8;
  local_res18 = lVar11;
  if (0 < iVar1) {
    lVar15 = 0;
    do {
      puVar12 = (undefined1 *)(*plVar8 + lVar15);
      if (((puVar12[0x74] == '\0') &&
          (local_res18 = lVar11, FUN_140d3b5a0(puVar12,&local_res10), plVar8 = local_res8,
          local_res10 != (longlong *)0x0)) &&
         (plVar5 = (longlong *)FUN_142f71d80(), plVar9 = local_res10, plVar8 = local_res8,
         local_res10 != (longlong *)0x0)) {
LAB_140c59940:
        if (plVar9 != plVar5) goto code_r0x000140c59945;
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        lVar2 = *param_2;
        lVar10 = (longlong)iVar1 * 0x30;
        *(undefined8 *)(lVar10 + lVar2) = 0;
        *(undefined1 *)(lVar10 + 8 + lVar2) = 0;
        *(undefined8 *)(lVar10 + 0x10 + lVar2) = 0;
        *(undefined8 *)(lVar10 + 0x18 + lVar2) = 0;
        *(undefined8 *)(lVar10 + 0x20 + lVar2) = 0;
        *(undefined2 *)(lVar10 + 0x28 + lVar2) = 0;
        *(undefined1 *)(lVar10 + 0x2a + lVar2) = 0;
        puVar16 = (undefined8 *)(*param_2 + lVar10);
        *puVar16 = local_res10;
        plVar9 = puVar16 + 2;
        *(undefined1 *)(puVar16 + 1) = *puVar12;
        if (plVar9 != (longlong *)(puVar12 + 8)) {
          iVar1 = *(int *)(puVar12 + 0x10);
          _Src = *(void **)(puVar12 + 8);
          *(int *)(puVar16 + 3) = iVar1;
          if ((iVar1 == 0) && (*(int *)((longlong)puVar16 + 0x1c) == 0)) {
            *(undefined4 *)((longlong)puVar16 + 0x1c) = 0;
            lVar11 = local_res18;
          }
          else {
            TArray<int,FDefaultAllocator>::ResizeForCopy(plVar9,iVar1);
            _guard_xfg_dispatch_icall_nop((void *)*plVar9,_Src,(longlong)iVar1 << 2);
            lVar11 = local_res18;
          }
        }
        plVar5 = (longlong *)0x0;
        uVar6 = FUN_140d3a5b0(puVar12);
        puVar16[4] = uVar6;
        *(undefined1 *)(puVar16 + 5) = puVar12[1];
        *(undefined1 *)((longlong)puVar16 + 0x29) = puVar12[2];
        *(undefined1 *)((longlong)puVar16 + 0x2a) = puVar12[0x18];
        plVar8 = local_res8;
        if (*(char *)(puVar16 + 1) != '\x01') goto LAB_140c59b44;
        plVar8 = plVar5;
        if (local_res10 != (longlong *)0x0) {
          plVar7 = (longlong *)FUN_142f71d80();
          for (plVar13 = local_res10;
              (plVar8 = plVar5, plVar13 != (longlong *)0x0 &&
              (plVar8 = local_res10, plVar13 != plVar7)); plVar13 = (longlong *)plVar13[6]) {
          }
        }
        plVar13 = (longlong *)plVar8[0x1f];
        if (plVar13 == (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x368))(plVar8);
          plVar13 = (longlong *)plVar8[0x1f];
          if (plVar13 != (longlong *)0x0) goto LAB_140c59a85;
LAB_140c59abb:
          plVar13 = plVar5;
        }
        else {
LAB_140c59a85:
          lVar11 = FUN_142f71d80();
          if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
              lVar11 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_140c59abb;
        }
        plVar8 = local_res8;
        lVar11 = local_res18;
        plVar7 = plVar5;
        if ((int)plVar13[0x43] < 1) goto LAB_140c59b44;
        do {
          if (((longlong)plVar7 < 0) || (*(int *)(puVar16 + 3) <= (int)plVar5)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          plVar8 = local_res8;
          lVar11 = local_res18;
          if (!bVar3) break;
          lVar11 = *(longlong *)(plVar13[0x42] + (longlong)plVar7 * 8);
          if ((lVar11 != 0) &&
             (((*(char *)(lVar11 + 0xa5) != '\0' && (*(char *)(lVar11 + 0xa6) == '\0')) ||
              ((*(char *)(lVar11 + 0xa1) != '\0' &&
               (cVar4 = FUN_142f6dbd0(lVar11,*(undefined4 *)(*plVar9 + (longlong)plVar7 * 4)),
               cVar4 != *(char *)(lVar11 + 0x28))))))) {
            *(undefined4 *)(*plVar9 + (longlong)plVar7 * 4) = 0;
          }
          uVar14 = (int)plVar5 + 1;
          plVar5 = (longlong *)(ulonglong)uVar14;
          plVar7 = (longlong *)((longlong)plVar7 + 1);
          plVar8 = local_res8;
          lVar11 = local_res18;
        } while ((int)uVar14 < (int)plVar13[0x43]);
      }
LAB_140c59b44:
      lVar15 = lVar15 + 0x78;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    local_res18 = 0;
  }
  plVar8 = (longlong *)FUN_140d3bd80(plVar8,&local_res8);
  param_2[2] = *plVar8;
  return;
code_r0x000140c59945:
  plVar9 = (longlong *)plVar9[6];
  if (plVar9 == (longlong *)0x0) goto LAB_140c59b44;
  goto LAB_140c59940;
}



// FUNCTION 140c59b90 FUN_140c59b90 body=422 status=ok
// SIG undefined FUN_140c59b90(void)

void FUN_140c59b90(longlong *param_1,uint param_2,char param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  uVar4 = 0;
  if (0 < (int)param_1[0xf3]) {
    plVar1 = param_1 + -0x1b1;
    do {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0xf0))(param_1,uVar4 & 0xff);
      if (plVar3 != (longlong *)0x0) {
        if ((*(char *)((longlong)plVar3 + 0x62c) == '\0') && ((param_2 >> 1 & 1) != 0)) {
          if (param_3 != '\0') {
            *(undefined1 *)(param_1 + 199) = 0;
          }
          (**(code **)(*plVar3 + 0x8c0))(plVar3,0,1);
          local_res8[0] = 2;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (param_1 + 0x55,local_res8);
        }
        if ((param_2 & 1) != 0) {
          FUN_140e91030(param_1 + 0xf2,uVar4 & 0xff,0);
          if (param_3 != '\0') {
            FUN_140e91ca0(param_1 + 0xf2,uVar4 & 0xff,0,0);
          }
          (**(code **)(*plVar3 + 0x820))(plVar3,0);
        }
        if ((param_2 >> 2 & 1) != 0) {
          (**(code **)(*plVar3 + 0x8a8))(plVar3);
        }
        if ((param_2 >> 3 & 1) != 0) {
          (**(code **)(*plVar3 + 0x8e8))(plVar3);
        }
      }
      if (param_4 != '\0') {
        if ((char)param_1[-0x18c] == '\x03') {
          if ((param_1[-0x11f] == 0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x778))(plVar1), cVar2 != '\0')) {
            if ((char)param_1[-0x18c] != '\x03') goto LAB_140c59ce7;
          }
          else {
            FUN_1413f8410(plVar1,uVar4 & 0xff);
          }
        }
        else {
LAB_140c59ce7:
          cVar2 = (**(code **)(*plVar1 + 0x778))(plVar1);
          if (cVar2 != '\0') {
            FUN_1413f8a90(plVar1,uVar4 & 0xff);
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)param_1[0xf3]);
  }
  return;
}



// FUNCTION 140c59d40 FUN_140c59d40 body=35 status=ok
// SIG undefined FUN_140c59d40(void)

void FUN_140c59d40(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x5c0) + 0x9a0))();
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xfd;
  return;
}



// FUNCTION 140c59d70 FUN_140c59d70 body=279 status=ok
// SIG undefined FUN_140c59d70(void)

void FUN_140c59d70(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_28 [32];
  
  lVar4 = *(longlong *)(param_1 + 0x470);
  if (lVar4 != 0) {
    if (*(char *)(param_1 + 0x4d0) != '\0') {
      FUN_141440750(lVar4);
      lVar4 = *(longlong *)(param_1 + 0x470);
      *(undefined1 *)(param_1 + 0x4d0) = 0;
    }
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 0x20000000;
    *(undefined8 *)(param_1 + 0x470) = 0;
  }
  cVar2 = FUN_14059ee90(param_1 + 0x4b0);
  if (cVar2 != '\0') {
    if (((*(longlong *)(param_1 + 0x458) == 0) || (*(longlong *)(param_1 + 0x468) == 0)) ||
       (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x468) + 0x40), lVar4 == 0)) {
      FUN_1405ac8f0(param_1 + 0x4b0,0,4);
    }
    else {
      FUN_1405a3150(*(longlong *)(param_1 + 0x458),local_28,lVar4,0);
      FUN_140591060(local_28);
    }
  }
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined2 *)(param_1 + 0x4c8) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x4fc)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x4f0,0);
  }
  return;
}



// FUNCTION 140c59ea0 FUN_140c59ea0 body=71 status=ok
// SIG undefined FUN_140c59ea0(void)

void FUN_140c59ea0(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = (**(code **)(*param_1 + 0xa68))();
  }
  plVar2 = (longlong *)(**(code **)(param_1[0x1b1] + 0xf0))(param_1 + 0x1b1,uVar1);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140c59eda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x8a8))(plVar2);
    return;
  }
  return;
}



// FUNCTION 140c59ef0 FUN_140c59ef0 body=58 status=ok
// SIG undefined FUN_140c59ef0(void)

void FUN_140c59ef0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = '\0';
  if (param_2 != 0) {
    cVar1 = (**(code **)(*param_1 + 0xa68))();
    if (cVar1 == -1) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140c59f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x1b1] + 0x28))(param_1 + 0x1b1,cVar1,0);
  return;
}



// FUNCTION 140c59f30 FUN_140c59f30 body=99 status=ok
// SIG undefined FUN_140c59f30(void)

void FUN_140c59f30(longlong *param_1,ulonglong param_2,undefined1 param_3)

{
  longlong *plVar1;
  
  FUN_140e91ca0(param_1 + 0xf2,param_2,0,0);
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xf0))(param_1,param_2 & 0xff);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x820))(plVar1,param_3,0);
  }
  return;
}



// FUNCTION 140c59fc0 FUN_140c59fc0 body=387 status=ok
// SIG undefined FUN_140c59fc0(void)

void FUN_140c59fc0(longlong *param_1,undefined1 param_2,ulonglong param_3,char param_4,char param_5)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 local_res8 [8];
  
  uVar3 = param_3 & 0xffffffff;
  plVar2 = (longlong *)(**(code **)(param_1[0x1b1] + 0xf0))();
  if (plVar2 != (longlong *)0x0) {
    if ((*(char *)((longlong)plVar2 + 0x62c) == '\0') && ((uVar3 >> 1 & 1) != 0)) {
      if (param_4 != '\0') {
        *(undefined1 *)(param_1 + 0x278) = 0;
      }
      (**(code **)(*plVar2 + 0x8c0))(plVar2,0,1);
      local_res8[0] = 2;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x206,local_res8);
    }
    if ((param_3 & 1) != 0) {
      FUN_140e91030(param_1 + 0x2a3,param_2,0);
      if (param_4 != '\0') {
        FUN_140e91ca0(param_1 + 0x2a3,param_2,0,0);
      }
      (**(code **)(*plVar2 + 0x820))(plVar2,0,1);
    }
    if ((uVar3 >> 2 & 1) != 0) {
      (**(code **)(*plVar2 + 0x8a8))(plVar2);
    }
    if ((uVar3 >> 3 & 1) != 0) {
      (**(code **)(*plVar2 + 0x8e8))(plVar2);
    }
  }
  if (param_5 != '\0') {
    if ((char)param_1[0x25] == '\x03') {
      if ((param_1[0x92] != 0) && (cVar1 = (**(code **)(*param_1 + 0x778))(param_1), cVar1 == '\0'))
      {
        FUN_1413f8410(param_1,param_2,uVar3,param_4);
        return;
      }
      if ((char)param_1[0x25] == '\x03') {
        return;
      }
    }
    cVar1 = (**(code **)(*param_1 + 0x778))(param_1);
    if (cVar1 != '\0') {
      FUN_1413f8a90(param_1,param_2,uVar3,param_4);
    }
  }
  return;
}



// FUNCTION 140c5a150 FUN_140c5a150 body=143 status=ok
// SIG undefined FUN_140c5a150(void)

void FUN_140c5a150(longlong param_1,char param_2,undefined1 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  *(undefined1 *)(param_1 + 0x13c0) = 0;
  plVar2 = (longlong *)
           (**(code **)(*(longlong *)(param_1 + 0xd88) + 0xf0))((longlong *)(param_1 + 0xd88),0);
  if (plVar2 != (longlong *)0x0) {
    if ((param_2 == '\0') && (cVar1 = FUN_140c46e10(param_1), cVar1 != '\0')) {
      return;
    }
    (**(code **)(*plVar2 + 0x8c0))(plVar2,param_3,1);
    local_res8[0] = 2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x1030,local_res8);
  }
  return;
}



// FUNCTION 140c5a1e0 FUN_140c5a1e0 body=31 status=ok
// SIG undefined FUN_140c5a1e0(void)

void FUN_140c5a1e0(longlong param_1)

{
  FUN_1422400e0();
  FUN_140a5af40(param_1 + 0xf48);
  return;
}



// FUNCTION 140c5a200 FUN_140c5a200 body=1309 status=ok
// SIG undefined FUN_140c5a200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c5a200(longlong *param_1,undefined8 *param_2,undefined8 *param_3,byte param_4,
                  float param_5)

{
  undefined8 uVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  longlong *plVar7;
  longlong *plVar8;
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
  ulonglong in_stack_ffffffffffffff28;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x690))();
  plVar7 = (longlong *)param_1[0x138];
  plVar8 = param_1;
  if (plVar3 != (longlong *)0x0) {
    plVar8 = plVar3;
  }
  fVar18 = param_5;
  fVar14 = param_5;
  fVar15 = param_5;
  if (plVar7 != (longlong *)0x0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = plVar7[0x286];
      if (lVar4 != 0) {
        *(uint *)(lVar4 + 0x2c40) = *(uint *)(lVar4 + 0x2c40) & 0xffffff7f;
        *(uint *)(lVar4 + 0x2c40) = *(uint *)(lVar4 + 0x2c40) | (param_4 ^ 1) << 7;
        lVar4 = plVar8[0x2d];
        if (lVar4 == 0) {
          local_b0 = DAT_1468b5d98;
          puVar5 = &local_b8;
          local_b8 = _DAT_1468b5d90;
        }
        else {
          puVar5 = &local_c8;
          local_c0 = (float)*(undefined4 *)(lVar4 + 0x228);
          local_c8 = *(undefined8 *)(lVar4 + 0x220);
        }
        uVar1 = *puVar5;
        local_b0 = *(float *)(puVar5 + 1);
        pfVar6 = (float *)FUN_1426e1ca0(plVar7[0x286],&local_c8);
        fVar14 = *pfVar6 - (float)uVar1;
        fVar15 = pfVar6[1] - (float)((ulonglong)uVar1 >> 0x20);
        lVar4 = plVar8[0x2d];
        fVar18 = pfVar6[2] - local_b0;
        if (lVar4 == 0) {
          fVar16 = 1.0;
          fVar11 = 0.0;
          fVar12 = 0.0;
          fVar13 = 0.0;
        }
        else {
          fVar11 = *(float *)(lVar4 + 0x210);
          fVar12 = *(float *)(lVar4 + 0x214);
          fVar13 = *(float *)(lVar4 + 0x218);
          fVar16 = *(float *)(lVar4 + 0x21c);
        }
        fVar11 = -fVar11;
        fVar12 = -fVar12;
        fVar13 = -fVar13;
        fVar17 = fVar18 * fVar12 - fVar15 * fVar13;
        fVar17 = fVar17 + fVar17;
        fVar10 = fVar14 * fVar13 - fVar18 * fVar11;
        fVar9 = fVar15 * fVar11 - fVar14 * fVar12;
        fVar10 = fVar10 + fVar10;
        fVar9 = fVar9 + fVar9;
        fVar18 = fVar16 * fVar9 + fVar18 + (fVar11 * fVar10 - fVar17 * fVar12);
        fVar14 = fVar17 * fVar16 + fVar14 + (fVar12 * fVar9 - fVar13 * fVar10);
        fVar15 = fVar16 * fVar10 + fVar15 + (fVar17 * fVar13 - fVar11 * fVar9);
        local_b8 = uVar1;
      }
      goto LAB_140c5a496;
    }
  }
  plVar7 = (longlong *)0x0;
LAB_140c5a496:
  if ((param_5._0_1_ == '\0') || (plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar8 + 0x500))
              (plVar8,param_2,param_3,0,in_stack_ffffffffffffff28 & 0xffffffffffffff00);
  }
  else {
    (**(code **)(*param_1 + 0xc90))(param_1,param_2,param_3);
  }
  local_b8 = *param_3;
  local_b0 = *(float *)(param_3 + 1);
  local_c8 = *param_2;
  local_c0 = *(float *)(param_2 + 1);
  FUN_14223ca30(plVar8,&local_c8,&local_b8,0,0,1);
  if (plVar7 != (longlong *)0x0) {
    if (plVar7[0x286] != 0) {
      lVar4 = plVar8[0x2d];
      if (lVar4 == 0) {
        local_b8 = _DAT_1468b5d90;
        local_b0 = DAT_1468b5d98;
      }
      else {
        local_b8 = *(undefined8 *)(lVar4 + 0x220);
        local_b0 = *(float *)(lVar4 + 0x228);
      }
      local_c8 = local_b8;
      uVar1 = local_c8;
      local_c0 = local_b0;
      if (lVar4 == 0) {
        fVar16 = 1.0;
        fVar11 = 0.0;
        fVar12 = 0.0;
        fVar13 = 0.0;
      }
      else {
        fVar11 = *(float *)(lVar4 + 0x210);
        fVar12 = *(float *)(lVar4 + 0x214);
        fVar13 = *(float *)(lVar4 + 0x218);
        fVar16 = *(float *)(lVar4 + 0x21c);
      }
      fVar17 = fVar12 * fVar18 - fVar13 * fVar15;
      fVar10 = fVar13 * fVar14 - fVar11 * fVar18;
      fVar17 = fVar17 + fVar17;
      fVar9 = fVar11 * fVar15 - fVar12 * fVar14;
      fVar10 = fVar10 + fVar10;
      fVar9 = fVar9 + fVar9;
      local_c8._0_4_ = (float)local_b8;
      local_c8._4_4_ = (float)((ulonglong)local_b8 >> 0x20);
      local_b8 = CONCAT44(local_c8._4_4_ +
                          fVar10 * fVar16 + fVar15 + (fVar17 * fVar13 - fVar9 * fVar11),
                          (float)local_c8 +
                          fVar17 * fVar16 + fVar14 + (fVar9 * fVar12 - fVar10 * fVar13));
      local_b0 = local_b0 + fVar9 * fVar16 + fVar18 + (fVar10 * fVar11 - fVar17 * fVar12);
      local_c8 = uVar1;
      FUN_142fccfa0(plVar7[0x286],&local_b8);
    }
    local_b8 = *param_3;
    local_b0 = 0.0;
    (**(code **)(*plVar7 + 0x728))(plVar7,&local_b8,1);
  }
  return;
}



// FUNCTION 140c5a720 K2_TeleportTo body=26 status=ok
// SIG undefined K2_TeleportTo(void)

void AActor::K2_TeleportTo(longlong *param_1)

{
  (**(code **)(*param_1 + 0x500))();
  return;
}



// FUNCTION 140c5a740 FUN_140c5a740 body=287 status=ok
// SIG undefined FUN_140c5a740(void)

void FUN_140c5a740(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_28;
  float fStack_20;
  float fStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  longlong lVar7;
  
  FUN_1426adfa0();
  if ((param_2 == '\0') && (lVar1 = *(longlong *)(param_1 + 0x490), lVar1 != 0)) {
    lVar6 = FUN_14145f370();
    iVar5 = *(int *)(lVar6 + 0x90);
    lVar7 = (longlong)iVar5;
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < iVar5) ||
       (lVar7 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88),
       *(longlong *)(lVar7 + (longlong)iVar5 * 8) != lVar6 + 0x88)) {
      uVar4 = (uint)lVar7 & 0xffffff00;
    }
    else {
      uVar4 = (uint)CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
    }
    if ((char)uVar4 != '\0') {
      lVar7 = *(longlong *)(param_1 + 0x168);
      if (lVar7 == 0) {
        uVar9 = (undefined4)DAT_1468b5da0;
        uVar10 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        fStack_20 = (float)DAT_1468b5da8;
      }
      else {
        fVar3 = *(float *)(lVar7 + 0x210);
        local_28 = *(undefined8 *)(lVar7 + 0x210);
        fStack_20 = *(float *)(lVar7 + 0x218);
        fStack_1c = *(float *)(lVar7 + 0x21c);
        auVar2._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != *(float *)(lVar7 + 0x214));
        auVar2._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != fVar3);
        auVar2._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fStack_20);
        auVar2._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != fStack_1c);
        iVar5 = movmskps(uVar4,auVar2);
        if (iVar5 != 0) {
          *(float *)(lVar7 + 0x250) = fVar3;
          *(float *)(lVar7 + 0x254) = *(float *)(lVar7 + 0x214);
          *(float *)(lVar7 + 600) = fStack_20;
          *(float *)(lVar7 + 0x25c) = fStack_1c;
          puVar8 = (undefined8 *)FQuat::Rotator(&local_28,&local_18);
          *(undefined8 *)(lVar7 + 0x260) = *puVar8;
          *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar8 + 1);
        }
        uVar9 = (undefined4)*(undefined8 *)(lVar7 + 0x260);
        uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x260) >> 0x20);
        fStack_20 = (float)*(undefined4 *)(lVar7 + 0x268);
      }
      local_28 = CONCAT44(uVar10,uVar9);
      local_18 = local_28;
      local_10 = fStack_20;
      FUN_142920470(lVar1,&local_18,1);
    }
  }
  return;
}



// FUNCTION 140c5a860 FUN_140c5a860 body=545 status=ok
// SIG undefined FUN_140c5a860(void)

void FUN_140c5a860(longlong param_1,float param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  FUN_1422406d0();
  fVar10 = *(float *)(param_1 + 0x5b8);
  fVar11 = *(float *)(param_1 + 0x5ac) - *(float *)(param_1 + 0x5a0);
  fVar9 = *(float *)(param_1 + 0x5b0) - *(float *)(param_1 + 0x5a4);
  fVar12 = *(float *)(param_1 + 0x5b4) - *(float *)(param_1 + 0x5a8);
  if (fVar10 == 0.0) {
    fVar10 = 1.0;
  }
  iVar6 = (int)((1.0 - *(float *)(param_1 + 0x5c8)) * (float)*(int *)(param_1 + 0x5bc));
  fVar9 = (fVar10 / SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar12 * fVar12)) * param_2 +
          *(float *)(param_1 + 0x5c8);
  fVar10 = (float)(int)fVar9;
  if (ABS(fVar9) < ABS((float)(int)fVar9)) {
    fVar10 = fVar9;
  }
  *(float *)(param_1 + 0x5c8) = fVar9 - fVar10;
  if ((iVar6 != (int)((1.0 - (fVar9 - fVar10)) * (float)*(int *)(param_1 + 0x5bc))) &&
     (lVar1 = (longlong)*(int *)(param_1 + 0x5d8), *(int *)(param_1 + 0x5d8) != 0)) {
    iVar7 = 0;
    bVar8 = **(int **)(param_1 + 0x5d0) != iVar6;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar1) {
        piVar2 = (int *)(*(longlong *)(param_1 + 0x5d0) + lVar3 * 4);
        do {
          if (bVar8 != (*piVar2 != iVar6)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          piVar2 = piVar2 + 1;
        } while (lVar3 < lVar1);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x5d0) + (longlong)iVar7 * 4),
                     (void *)(*(longlong *)(param_1 + 0x5d0) + (longlong)iVar4 * 4),
                     (longlong)(iVar5 - iVar4) << 2);
        }
        iVar7 = iVar7 + (iVar5 - iVar4);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar1);
    *(int *)(param_1 + 0x5d8) = iVar7;
  }
  FUN_140c5d3c0(param_1);
  return;
}



// FUNCTION 140c5aa90 FUN_140c5aa90 body=409 status=ok
// SIG undefined FUN_140c5aa90(void)

void FUN_140c5aa90(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  FUN_1422406d0();
  if ((char)param_1[0x25] == '\x03') {
    FUN_140c343f0(param_1);
  }
  FUN_140c3b390(param_1,param_2);
  lVar2 = param_1[0x8d];
  if (lVar2 != 0) {
    uVar3 = 0;
    if ((*(longlong *)(lVar2 + 0x30) != 0) && (param_1[0x8b] != 0)) {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0xd0);
      if (lVar1 != 0) {
        FUN_1405aaad0(param_1[0x8b],lVar1,(int)param_1[0x8c],0,4);
        lVar2 = param_1[0x8d];
      }
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0xd8);
      if (lVar2 != 0) {
        FUN_1405aaad0(param_1[0x8b],lVar2,*(undefined4 *)((longlong)param_1 + 0x464),0,4);
      }
    }
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      uVar3 = *(undefined4 *)(lVar2 + 0x79c);
    }
    if ((((((char)param_1[0x9a] != '\0') || (*(float *)(param_1 + 0x9c) <= 0.5)) ||
         (*(float *)((longlong)param_1 + 0x4dc) <= 0.5)) ||
        ((*(float *)(param_1 + 0x9b) <= 0.0001 ||
         (lVar2 = (**(code **)(*param_1 + 0x148))(param_1), lVar2 == 0)))) ||
       (lVar2 = (**(code **)(*param_1 + 0x148))(param_1),
       *(float *)((longlong)param_1 + 0x4dc) * *(float *)(param_1 + 0x9b) <=
       *(float *)(lVar2 + 0x79c) - *(float *)(param_1 + 0x9d))) {
      FUN_140c5c100(param_1);
    }
    if ((param_1[0x8e] != 0) && ((char)param_1[0x9a] != '\0')) {
      *(int *)(param_1[0x8e] + 0x28) = (int)param_1[0x8c];
      *(undefined4 *)(param_1[0x8e] + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x464);
      FUN_141440790(param_1[0x8e],uVar3);
    }
    return;
  }
  return;
}



// FUNCTION 140c5ac30 FUN_140c5ac30 body=379 status=ok
// SIG undefined FUN_140c5ac30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c5ac30(longlong param_1)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  longlong lVar4;
  float local_28;
  float fStack_24;
  undefined8 local_18;
  float local_10;
  
  FUN_142357eb0();
  lVar4 = FUN_140c45020(param_1);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (((lVar4 != 0) && (*(longlong *)(param_1 + 0x1d8) != 0)) &&
     (*(longlong *)(DAT_146b33f38 + 0x58) != 0)) {
    lVar4 = *(longlong *)(lVar4 + 0x168);
    if (lVar4 == 0) {
      local_18 = _DAT_1468b5d90;
      local_10 = DAT_1468b5d98;
    }
    else {
      local_18 = *(undefined8 *)(lVar4 + 0x220);
      local_10 = *(float *)(lVar4 + 0x228);
    }
    fVar3 = local_10;
    uVar2 = local_18;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x168);
    if (lVar4 == 0) {
      local_18 = _DAT_1468b5d90;
      local_10 = DAT_1468b5d98;
    }
    else {
      local_18 = *(undefined8 *)(lVar4 + 0x220);
      local_10 = *(float *)(lVar4 + 0x228);
    }
    local_28 = (float)uVar2;
    fStack_24 = (float)((ulonglong)uVar2 >> 0x20);
    local_28 = local_28 - (float)local_18;
    fStack_24 = fStack_24 - (float)((ulonglong)local_18 >> 0x20);
    fVar1 = *(float *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x4c0);
    if (fStack_24 * fStack_24 + local_28 * local_28 + (fVar3 - local_10) * (fVar3 - local_10) <
        fVar1 * fVar1) {
      return;
    }
  }
  FUN_140c4d910(param_1,0,0,0,*(undefined8 *)(param_1 + 0x1d8));
  return;
}



// FUNCTION 140c5adb0 FUN_140c5adb0 body=147 status=ok
// SIG undefined FUN_140c5adb0(void)

void FUN_140c5adb0(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x948) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x948) + 0x188);
    if (lVar1 != 0) {
      if (param_2 == '\0') {
        *(byte *)(lVar1 + 0xb1a) = *(byte *)(lVar1 + 0xb1a) | 0x40;
        FUN_1427da950();
      }
      else {
        *(byte *)(lVar1 + 0xb1a) = *(byte *)(lVar1 + 0xb1a) & 0xbf;
      }
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x948) + 0x180);
    if (lVar1 != 0) {
      if (param_2 != '\0') {
        *(byte *)(lVar1 + 0xb1a) = *(byte *)(lVar1 + 0xb1a) & 0xbf;
        return;
      }
      *(byte *)(lVar1 + 0xb1a) = *(byte *)(lVar1 + 0xb1a) | 0x40;
      FUN_1427da950();
    }
  }
  return;
}



// FUNCTION 140c5ae50 FUN_140c5ae50 body=89 status=ok
// SIG undefined FUN_140c5ae50(void)

void FUN_140c5ae50(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  *(undefined1 *)(param_1 + 0x1300) = 0;
  plVar2 = (longlong *)
           (**(code **)(*(longlong *)(param_1 + 0xd88) + 0xf0))((longlong *)(param_1 + 0xd88),0);
  if (plVar2 != (longlong *)0x0) {
    cVar1 = FUN_140c39ab0(param_1,0,3);
    if (cVar1 != '\0') {
      (**(code **)(*plVar2 + 0x8f0))(plVar2,0);
    }
  }
  return;
}



// FUNCTION 140c5aeb0 FUN_140c5aeb0 body=48 status=ok
// SIG undefined FUN_140c5aeb0(void)

void FUN_140c5aeb0(longlong param_1)

{
  FUN_14231f950();
  if (*(longlong *)(param_1 + 0xe90) != 0) {
    FUN_140eb8b50();
  }
  FUN_140a5af40(param_1 + 0xf48);
  return;
}



// FUNCTION 140c5aee0 FUN_140c5aee0 body=395 status=ok
// SIG undefined FUN_140c5aee0(void)

void FUN_140c5aee0(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == -1) {
    if (((*(longlong *)(param_1 + -0x80) == 0) && (lVar3 = FUN_1423407b0(), lVar3 == 0)) ||
       (lVar3 = UWorld::GetGameState<APVPGameState>(), lVar3 == 0)) {
      iVar2 = -1;
    }
    else {
      iVar2 = FUN_140cb6340();
      iVar2 = iVar2 + -1;
    }
    *(int *)(param_1 + 0x40) = iVar2;
  }
  if ((iVar2 < 0) || (*(int *)(param_1 + -0x10) <= iVar2)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar8 = 0;
    lVar5 = *(longlong *)(param_1 + -0x18);
    lVar3 = (longlong)iVar2 * 0x18;
    lVar9 = lVar8;
    if (*(longlong *)(lVar5 + 0x10 + (longlong)iVar2 * 0x18) != 0) {
      lVar4 = FUN_142f71d80();
      lVar5 = *(longlong *)(lVar5 + 0x10 + lVar3);
      for (lVar7 = lVar5; (lVar9 = lVar8, lVar7 != 0 && (lVar9 = lVar5, lVar7 != lVar4));
          lVar7 = *(longlong *)(lVar7 + 0x30)) {
      }
    }
    lVar5 = lVar8;
    if (param_2 != 0) {
      lVar4 = FUN_142f71d80();
      lVar7 = param_2;
      do {
        lVar5 = param_2;
        if (lVar7 == lVar4) break;
        lVar7 = *(longlong *)(lVar7 + 0x30);
        lVar5 = lVar8;
      } while (lVar7 != 0);
    }
    if ((lVar9 != lVar5) &&
       (*(longlong *)(lVar3 + 0x10 + *(longlong *)(param_1 + -0x18)) = param_2,
       0 < *(int *)(param_1 + -0x20))) {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + -0x28,0)
      ;
    }
    lVar3 = *(longlong *)(param_1 + -0x80);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1 + -0x1a0);
    }
    lVar3 = *(longlong *)(lVar3 + 400);
    if (lVar3 != 0) {
      lVar5 = FUN_14141f270();
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
        uVar6 = FUN_140bb7440(lVar3);
        FUN_140d9f600(uVar6,0xc);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140c5b070 FUN_140c5b070 body=179 status=ok
// SIG undefined FUN_140c5b070(void)

void FUN_140c5b070(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  cVar4 = (**(code **)(*param_1 + 0x778))();
  if (cVar4 != '\0') {
    bVar3 = false;
    *(int *)((longlong)param_1 + 0xf3c) = *(int *)((longlong)param_1 + 0xf3c) + 1;
    iVar6 = *(int *)((longlong)param_1 + 0xf3c);
    iVar5 = (int)param_1[0x1e6] + -1;
    lVar8 = (longlong)iVar5;
    if (-1 < iVar5) {
      lVar7 = lVar8 << 4;
      bVar3 = false;
      do {
        lVar1 = param_1[0x1e5];
        if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
           (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140c5b0e3:
          bVar3 = true;
        }
        else {
          cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
          if (cVar4 == '\0') goto LAB_140c5b0e3;
        }
        lVar7 = lVar7 + -0x10;
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
      iVar6 = *(int *)((longlong)param_1 + 0xf3c);
    }
    *(int *)((longlong)param_1 + 0xf3c) = iVar6 + -1;
    if (bVar3) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x1e5,0);
    }
  }
  return;
}



// FUNCTION 140c5b130 FUN_140c5b130 body=45 status=ok
// SIG undefined FUN_140c5b130(void)

void FUN_140c5b130(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142ceefa0();
  if (lVar1 != 0) {
    FUN_142ce8a30(lVar1,param_2,param_2);
    return;
  }
  return;
}



// FUNCTION 140c5b160 FUN_140c5b160 body=191 status=ok
// SIG undefined FUN_140c5b160(void)

void FUN_140c5b160(longlong *param_1,byte param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x950))();
  if (((((cVar1 == '\0') && ((int)(uint)param_2 < (int)param_1[0x2a4])) &&
       (cVar1 = FUN_140e969b0(param_1 + 0x2a3,param_2), cVar1 == '\0')) &&
      ((lVar2 = (**(code **)(param_1[0x1b1] + 0xf0))(param_1 + 0x1b1,param_2), lVar2 != 0 &&
       (cVar1 = FUN_140c39ab0(param_1,param_2,0), cVar1 != '\0')))) &&
     (((*(char *)((longlong)param_1 + 0x1122) != '\0' ||
       ((param_1[0x1cd] == 0 || ((*(uint *)(param_1[0x1cd] + 0x2ac0) >> 2 & 1) == 0)))) ||
      (*(float *)(lVar2 + 0x580) <= 0.0)))) {
    FUN_143089bd0(lVar2);
  }
  return;
}



// FUNCTION 140c5b220 FUN_140c5b220 body=603 status=ok
// SIG undefined FUN_140c5b220(void)

void FUN_140c5b220(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  cVar1 = (**(code **)(*param_1 + 0x778))();
  if (cVar1 != '\0') {
    uVar6 = 0;
    if (((param_2 & 0xffffffff) >> 2 & 1) != 0) {
      cVar1 = FUN_140e71290(param_1 + 0x2a3,2);
      if ((cVar1 == '\0') && (uVar5 = uVar6, uVar7 = uVar6, 0 < (int)param_1[0x2a4])) {
        do {
          lVar3 = param_1[0x2a3];
          plVar2 = *(longlong **)(lVar3 + 8 + uVar7);
          if ((plVar2 != (longlong *)0x0) &&
             ((cVar1 = (**(code **)(*plVar2 + 0x888))(), cVar1 != '\0' &&
              (*(longlong *)(*(longlong *)(lVar3 + 8 + uVar7) + 0x7f8) == DAT_146b479a0)))) {
            FUN_140c540f0(param_1,*(undefined8 *)(lVar3 + uVar7),1);
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          uVar7 = uVar7 + 0xf8;
        } while ((int)uVar4 < (int)param_1[0x2a4]);
      }
    }
    if ((param_2 >> 3 & 1) != 0) {
      cVar1 = FUN_140e71290(param_1 + 0x2a3,3);
      if ((cVar1 == '\0') && (uVar5 = uVar6, uVar7 = uVar6, 0 < (int)param_1[0x2a4])) {
        do {
          lVar3 = param_1[0x2a3];
          plVar2 = *(longlong **)(lVar3 + 8 + uVar7);
          if ((plVar2 != (longlong *)0x0) &&
             ((cVar1 = (**(code **)(*plVar2 + 0x8f8))(), cVar1 != '\0' &&
              (*(longlong *)(*(longlong *)(lVar3 + 8 + uVar7) + 0x7f8) == DAT_146b479a0)))) {
            *(undefined1 *)(param_1 + 0x260) = 0;
            plVar2 = (longlong *)(**(code **)(param_1[0x1b1] + 0xf0))(param_1 + 0x1b1,0);
            if (plVar2 != (longlong *)0x0) {
              cVar1 = FUN_140c39ab0(param_1,0,3);
              if (cVar1 != '\0') {
                (**(code **)(*plVar2 + 0x8f0))(plVar2);
              }
            }
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
          uVar7 = uVar7 + 0xf8;
        } while ((int)uVar4 < (int)param_1[0x2a4]);
      }
    }
    if ((param_2 & 1) != 0) {
      cVar1 = FUN_140e71290(param_1 + 0x2a3,0);
      if ((cVar1 == '\0') && (0 < (int)param_1[0x2a4])) {
        do {
          lVar3 = (longlong)(int)uVar6 * 0xf8 + param_1[0x2a3];
          if ((*(longlong *)(lVar3 + 8) != 0) && (*(longlong *)(lVar3 + 0x28) == 0)) {
            if ((*(byte *)(lVar3 + 0x38) & 2) == 0) {
              FUN_140c5b160(param_1,uVar6 & 0xff);
            }
            else {
              (**(code **)(param_1[0x1b1] + 0x20))(param_1 + 0x1b1,uVar6 & 0xff,0);
            }
          }
          uVar4 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar4;
        } while ((int)uVar4 < (int)param_1[0x2a4]);
      }
    }
    if (((((char)param_1[0x278] != '\0') &&
         (cVar1 = (**(code **)(*param_1 + 0xa60))(param_1), cVar1 == '\0')) &&
        ((param_2 >> 1 & 1) != 0)) && (cVar1 = FUN_140e71290(param_1 + 0x2a3,1), cVar1 == '\0')) {
      FUN_140c597f0(param_1);
    }
  }
  return;
}



// FUNCTION 140c5b480 FUN_140c5b480 body=39 status=ok
// SIG undefined FUN_140c5b480(void)

void FUN_140c5b480(longlong param_1)

{
  uint *puVar1;
  
  thunk_FUN_14231ffd0();
  if (*(longlong *)(param_1 + 0xe68) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xe68) + 0x2ac0);
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  return;
}



// FUNCTION 140c5b4b0 FUN_140c5b4b0 body=46 status=ok
// SIG undefined FUN_140c5b4b0(void)

void FUN_140c5b4b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe90) != 0) {
    FUN_140eb35f0(*(longlong *)(param_1 + 0xe90),*(undefined8 *)(param_1 + 0x490));
  }
  UPawnAction_Move::BeginDestroy(param_1);
  return;
}



// FUNCTION 140c5b520 FUN_140c5b520 body=270 status=ok
// SIG undefined FUN_140c5b520(void)

void FUN_140c5b520(longlong param_1,undefined8 param_2,uint param_3,char param_4)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  
  bVar5 = 0;
  uVar4 = 0;
  do {
    if ((param_3 >> (uVar4 & 0x1f) & 1) != 0) {
      bVar1 = FUN_140e959b0(param_1 + 0x790,uVar4,param_2);
      bVar5 = bVar5 | bVar1;
    }
    bVar1 = (char)uVar4 + 1;
    uVar4 = (uint)bVar1;
  } while (bVar1 < 4);
  if (bVar5 != 0) {
    FUN_140c5b220(param_1 + -0xd88,param_3);
  }
  if (param_4 != '\0') {
    if (*(char *)(param_1 + -0xc60) == '\x03') {
      lVar3 = (**(code **)(*(longlong *)(param_1 + -0xd88) + 0x668))(param_1 + -0xd88);
      if ((lVar3 != 0) &&
         (cVar2 = (**(code **)(*(longlong *)(param_1 + -0xd88) + 0x778))(param_1 + -0xd88),
         cVar2 == '\0')) {
        FUN_1413f8470(param_1 + -0xd88,param_2,param_3);
        return;
      }
      if (*(char *)(param_1 + -0xc60) == '\x03') {
        return;
      }
    }
    cVar2 = (**(code **)(*(longlong *)(param_1 + -0xd88) + 0x778))(param_1 + -0xd88);
    if (cVar2 != '\0') {
      FUN_1413f8b30(param_1 + -0xd88,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 140c5b630 FUN_140c5b630 body=469 status=ok
// SIG undefined FUN_140c5b630(void)

void FUN_140c5b630(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  undefined8 uStack_30;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  lVar7 = FUN_140c44470();
  if (lVar7 != 0) {
    *(undefined1 *)(lVar7 + 0xf8) = 1;
  }
  lVar7 = FUN_140c44470();
  local_68 = (uint *)CONCAT44(local_68._4_4_,(undefined4)local_68);
  if (lVar7 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x58);
    puStack_28 = (uint *)(param_1 + 0x40);
    local_78 = 0x100000000;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar8 = puStack_28;
      }
      uVar5 = *puVar8;
      iVar6 = 0;
      uStack_60 = 0;
      while (uVar5 == 0) {
        uStack_60 = uStack_60 + 0x20;
        uVar4 = (ulonglong)local_78 >> 0x20;
        local_78 = CONCAT44((int)uVar4,iVar6 + 1);
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140c5b71f;
        uVar5 = puVar8[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      local_78 = CONCAT44(uVar5,(undefined4)local_78);
      if (uVar5 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      local_68._4_4_ = (uStack_60 - iVar6) + 0x1f;
      if (iVar2 < local_68._4_4_) {
LAB_140c5b71f:
        local_68._4_4_ = iVar2;
      }
    }
    auStack_20._4_4_ = local_68._4_4_;
    auStack_20._0_4_ = 0xffffffff;
    auStack_20._8_4_ = uStack_60;
    auStack_20._12_4_ = iStack_5c;
    uStack_30 = local_78;
    local_40 = 0;
    local_10._0_4_ = SUB84(plVar1,0);
    local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
    uStack_70 = local_78;
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    local_58._8_4_ = (undefined4)local_10;
    local_58._0_8_ = auStack_20._8_8_;
    local_58._12_4_ = local_10._4_4_;
    bVar3 = local_68._4_4_ < *(int *)(param_1 + 0x58);
    local_48 = plVar1;
    local_38 = plVar1;
    local_10 = plVar1;
    local_68 = puStack_28;
    if (bVar3) {
      do {
        thunk_FUN_1430edee0(lVar7,*(undefined1 *)(*plVar1 + 8 + (longlong)iStack_5c * 0x18));
        uStack_60 = uStack_60 & ~uStack_70._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      } while (iStack_5c < (int)local_68[6]);
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
      }
    }
  }
  FUN_1406c5d90(param_1 + 0x30,0);
  return;
}



// FUNCTION 140c5b810 FUN_140c5b810 body=90 status=ok
// SIG undefined FUN_140c5b810(void)

void FUN_140c5b810(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_140c446b0();
  if (cVar1 != DAT_146b4ae20) {
    lVar2 = FUN_140c44470(param_1);
    if (lVar2 != 0) {
      thunk_FUN_1430edee0(lVar2,cVar1);
      TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
      Remove(param_1 + 0x30,*param_2);
    }
  }
  return;
}



// FUNCTION 140c5b870 FUN_140c5b870 body=163 status=ok
// SIG undefined FUN_140c5b870(void)

void FUN_140c5b870(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar3 = FUN_1405c6c00();
  if (*param_2 == 0) {
    return;
  }
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x1c8) != 0) {
      plVar1 = (longlong *)param_1[0x92];
      if ((((plVar1 == (longlong *)0x0) || ((*(uint *)((longlong)plVar1 + 0x4cc) >> 1 & 1) == 0)) ||
          (cVar2 = (**(code **)(*plVar1 + 0x768))(), cVar2 == '\0')) ||
         (cVar2 = (**(code **)(*param_1 + 0x818))(param_1), cVar2 == '\0')) {
        uVar4 = 0x3f800000;
      }
      else {
        uVar4 = 0;
      }
      FUN_1405aaa50(*param_2,*(undefined8 *)(lVar3 + 0x1c8),uVar4,0,4,0);
      return;
    }
    return;
  }
  return;
}



// FUNCTION 140c5b920 FUN_140c5b920 body=74 status=ok
// SIG undefined FUN_140c5b920(void)

void FUN_140c5b920(longlong param_1,longlong param_2)

{
  longlong local_res10 [3];
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x378) != 0)) {
    FUN_14058f880(local_res10);
    FUN_140c5b870(param_1 + -0xd90,local_res10);
    if (local_res10[0] != 0) {
      FUN_1405a53f0();
    }
  }
  return;
}



// FUNCTION 140c5b970 FUN_140c5b970 body=204 status=ok
// SIG undefined FUN_140c5b970(void)

void FUN_140c5b970(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142cd8680();
  lVar3 = *(longlong *)(param_1 + 0x9c8);
  if (lVar3 != 0) {
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
    if (bVar1) goto LAB_140c5b9c6;
  }
  lVar3 = 0;
LAB_140c5b9c6:
  *(longlong *)(param_1 + 0xe58) = lVar3;
  if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x608), lVar3 != 0)) {
    lVar2 = AGTutorialStepBotDestroy::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(longlong *)(param_1 + 0xe60) = lVar3;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0xe60) = 0;
  return;
}



// FUNCTION 140c5ba40 FUN_140c5ba40 body=689 status=ok
// SIG undefined FUN_140c5ba40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c5ba40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_28;
  float local_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  lVar8 = *(longlong *)(param_1 + -0xc10);
  if (lVar8 == 0) {
    local_28 = _DAT_1468b5d90;
    local_20 = DAT_1468b5d98;
  }
  else {
    local_28 = *(undefined8 *)(lVar8 + 0x220);
    local_20 = *(float *)(lVar8 + 0x228);
  }
  lVar8 = *(longlong *)(param_2 + 0xa0);
  local_20 = local_20 + *(float *)(param_1 + -0x914);
  *(undefined8 *)(param_2 + 0x50) = local_28;
  *(float *)(param_2 + 0x58) = local_20;
  if (lVar8 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140c5bb26;
  }
  lVar8 = 0;
LAB_140c5bb26:
  if ((*(longlong *)(param_1 + 0xf0) != 0) && (lVar8 != 0)) {
    cVar4 = FUN_140cfdb70(lVar8);
    if (cVar4 != '\0') {
      cVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x218) + 0x38))();
      if (cVar4 != '\0') {
        lVar8 = FUN_14233f840(*(undefined8 *)(param_1 + 0xf0));
        *(float *)(param_2 + 0x50) = *(float *)(param_2 + 0x50) + *(float *)(lVar8 + 0xb0);
        *(float *)(param_2 + 0x54) = *(float *)(lVar8 + 0xb4) + *(float *)(param_2 + 0x54);
        *(float *)(param_2 + 0x58) = *(float *)(lVar8 + 0xb8) + *(float *)(param_2 + 0x58);
      }
    }
  }
  *(undefined8 *)(param_2 + 0x8c) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0x58);
  lVar8 = *(longlong *)(param_1 + -0xc10);
  if (lVar8 == 0) {
    uVar11 = (undefined4)DAT_1468b5da0;
    uVar12 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_20 = (float)DAT_1468b5da8;
  }
  else {
    local_18 = *(float *)(lVar8 + 0x210);
    fStack_14 = *(float *)(lVar8 + 0x214);
    fStack_10 = *(float *)(lVar8 + 0x218);
    fStack_c = *(float *)(lVar8 + 0x21c);
    auVar2._4_4_ = -(uint)(fStack_14 != *(float *)(lVar8 + 0x254));
    auVar2._0_4_ = -(uint)(local_18 != *(float *)(lVar8 + 0x250));
    auVar2._8_4_ = -(uint)(fStack_10 != *(float *)(lVar8 + 600));
    auVar2._12_4_ = -(uint)(fStack_c != *(float *)(lVar8 + 0x25c));
    iVar6 = movmskps(*(undefined4 *)(param_2 + 0x58),auVar2);
    if (iVar6 != 0) {
      *(float *)(lVar8 + 0x250) = local_18;
      *(float *)(lVar8 + 0x254) = fStack_14;
      *(float *)(lVar8 + 600) = fStack_10;
      *(float *)(lVar8 + 0x25c) = fStack_c;
      puVar9 = (undefined8 *)FQuat::Rotator(&local_18,&local_28);
      *(undefined8 *)(lVar8 + 0x260) = *puVar9;
      *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar9 + 1);
    }
    uVar11 = (undefined4)*(undefined8 *)(lVar8 + 0x260);
    uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x260) >> 0x20);
    local_20 = (float)*(undefined4 *)(lVar8 + 0x268);
  }
  local_28 = CONCAT44(uVar12,uVar11);
  *(undefined8 *)(param_2 + 0x80) = local_28;
  *(undefined8 *)(param_2 + 0x68) = local_28;
  *(float *)(param_2 + 0x88) = local_20;
  *(float *)(param_2 + 0x70) = local_20;
  lVar8 = AGPoisonSplashProjectile::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
      != lVar8 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    plVar1 = (longlong *)(param_1 + -0xd78);
    uVar5 = (**(code **)(*plVar1 + 0xc28))(plVar1);
    *(undefined1 *)(param_2 + 0xc2) = uVar5;
    uVar10 = (**(code **)(*(longlong *)(param_1 + 0x10) + 0xf0))((longlong *)(param_1 + 0x10),0);
    *(undefined8 *)(param_2 + 0xb8) = uVar10;
    cVar4 = (**(code **)(*plVar1 + 0x818))(plVar1);
    if (cVar4 == '\0') {
      uVar10 = *(undefined8 *)(param_1 + -0x8b8);
    }
    else {
      uVar10 = (**(code **)(*plVar1 + 0xa58))(plVar1);
    }
    *(undefined8 *)(param_2 + 0xa8) = uVar10;
  }
  return;
}



// FUNCTION 140c5bd00 FUN_140c5bd00 body=103 status=ok
// SIG undefined FUN_140c5bd00(void)

void FUN_140c5bd00(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x478);
  if (lVar1 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
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
      FUN_140e652b0(lVar1,param_2);
    }
  }
  return;
}



// FUNCTION 140c5bd70 FUN_140c5bd70 body=250 status=ok
// SIG undefined FUN_140c5bd70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c5bd70(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_78 [48];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x948) != 0) {
    plVar5 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + 0xd88) + 0xf0))((longlong *)(param_1 + 0xd88),0);
    if (((plVar5 != (longlong *)0x0) &&
        (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x900))(plVar5,1,0), plVar5 != (longlong *)0x0)
        ) && (cVar4 = (**(code **)(*plVar5 + 0x440))
                                (plVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x330)),
             cVar4 != '\0')) {
      lVar6 = (**(code **)(*plVar5 + 0x420))
                        (plVar5,local_48,*(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x330),3);
      lVar1 = *(longlong *)(param_1 + 0x948);
      uVar2 = *(undefined4 *)(lVar6 + 0x14);
      uVar3 = *(undefined4 *)(lVar6 + 0x18);
      *(undefined4 *)(lVar1 + 0x43c) = *(undefined4 *)(lVar6 + 0x10);
      *(undefined4 *)(lVar1 + 0x440) = uVar2;
      *(undefined4 *)(lVar1 + 0x444) = uVar3;
    }
  }
  return;
}



// FUNCTION 140c5be70 FUN_140c5be70 body=656 status=ok
// SIG undefined FUN_140c5be70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c5be70(longlong param_1)

{
  undefined4 uVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  float fVar8;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar3 + 0x38) < DAT_146866ca8) &&
     (_Init_thread_header(&DAT_146866ca8), DAT_146866ca8 == -1)) {
    DAT_146866c90 = 0xff;
    _DAT_146866c98 = 0;
    DAT_146866ca0._0_4_ = 0;
    _Init_thread_footer(&DAT_146866ca8);
  }
  lVar7 = *(longlong *)(param_1 + 0x910);
  if (lVar7 == 0) {
    puVar5 = (undefined4 *)&DAT_146866c90;
  }
  else {
    if ((*(int *)(lVar3 + 0x38) < DAT_146866c88) &&
       (_Init_thread_header(&DAT_146866c88), DAT_146866c88 == -1)) {
      DAT_146866c70 = 0xff;
      _DAT_146866c78 = 0;
      DAT_146866c80._0_4_ = 0;
      _Init_thread_footer(&DAT_146866c88);
    }
    if (*(int *)(lVar7 + 0x680) < 1) {
      puVar5 = (undefined4 *)&DAT_146866c70;
    }
    else {
      puVar5 = (undefined4 *)(*(longlong *)(lVar7 + 0x678) + 0x60);
    }
  }
  local_58 = *puVar5;
  uStack_54 = puVar5[1];
  uStack_50 = puVar5[2];
  uStack_4c = puVar5[3];
  local_48 = *(undefined8 *)(puVar5 + 4);
  cVar4 = FUN_142d52a00(&local_58);
  if (cVar4 != '\0') {
    uVar6 = FUN_142d52a20(&local_58);
    uVar6 = FArchive::operator<<(uVar6);
    cVar4 = FUN_142d639f0(uVar6,0);
    if ((cVar4 == '\0') && (1 < (byte)(*(char *)(param_1 + 0xec0) - 3U))) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar3 = *(longlong *)(DAT_146b33f38 + 0x58);
      cVar4 = '\0';
      if (lVar3 != 0) {
        uVar6 = FUN_142d52a20(&local_58);
        lVar7 = FArchive::operator<<(uVar6);
        cVar4 = '\0';
        if (1e-08 < *(float *)(lVar7 + 0x20)) {
          uVar6 = FUN_142d52a20(&local_58);
          lVar7 = FArchive::operator<<(uVar6);
          uVar1 = *(undefined4 *)(lVar7 + 0x14);
          uVar6 = FUN_142d52a20(&local_58);
          lVar7 = FArchive::operator<<(uVar6);
          fVar2 = *(float *)(lVar7 + 0x20);
          fVar8 = (float)FUN_142d5fee0(&local_58,uVar1);
          fVar8 = fVar8 / fVar2;
          if ((fVar8 < *(float *)(lVar3 + 0x21c)) ||
             (ABS(fVar8 - *(float *)(lVar3 + 0x21c)) <= 1e-08)) {
            cVar4 = '\x02';
          }
          else if ((fVar8 < *(float *)(lVar3 + 0x218)) ||
                  (ABS(fVar8 - *(float *)(lVar3 + 0x224)) <= 1e-08)) {
            cVar4 = '\x01';
          }
        }
      }
      if (cVar4 != *(char *)(param_1 + 0xec0)) {
        *(char *)(param_1 + 0xec0) = cVar4;
        (**(code **)(*(longlong *)(param_1 + 0xda8) + 0x48))();
      }
    }
  }
  return;
}



// FUNCTION 140c5c100 FUN_140c5c100 body=693 status=ok
// SIG undefined FUN_140c5c100(void)

void FUN_140c5c100(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  int *piVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  
  cVar7 = FUN_140c39080();
  if (cVar7 == '\0') {
    FUN_140c5ce20(param_1);
    if (*(char *)(param_1 + 0x4d0) == '\0') {
      return;
    }
    FUN_140c5c970(param_1);
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x468);
  if (lVar3 == 0) {
    return;
  }
  iVar13 = (int)ROUND(*(float *)(param_1 + 0x4d4) + *(float *)(param_1 + 0x4d4) + 0.5);
  iVar14 = iVar13 >> 1;
  iVar12 = (int)ROUND(*(float *)(param_1 + 0x4dc) + *(float *)(param_1 + 0x4dc) + 0.5) >> 1;
  iVar15 = (int)ROUND(*(float *)(param_1 + 0x4e0) + *(float *)(param_1 + 0x4e0) + 0.5) >> 1;
  iVar10 = (int)ROUND(*(float *)(param_1 + 0x4e4) + *(float *)(param_1 + 0x4e4) + 0.5) >> 1;
  iVar11 = 1;
  if (1 < *(int *)(lVar3 + 0x4c)) {
    iVar11 = *(int *)(lVar3 + 0x4c);
  }
  if ((iVar12 <= iVar11) && (iVar11 < iVar10)) {
    iVar12 = iVar10;
  }
  iVar11 = iVar11 + iVar14;
  piVar8 = (int *)FUN_140c420e0(param_1);
  iVar10 = iVar15;
  if (((piVar8 != (int *)0x0) && (iVar2 = *piVar8, 0 < iVar2)) && (iVar2 < iVar15)) {
    iVar10 = iVar2;
  }
  lVar4 = (longlong)iVar11 % (longlong)iVar10;
  if (0 < *(int *)(lVar3 + 0x48)) {
    iVar15 = *(int *)(lVar3 + 0x48) * iVar12;
  }
  iVar10 = (int)(CONCAT44(iVar13 >> 0x1f,iVar14) % (longlong)iVar15);
  bVar16 = iVar10 == 0;
  iVar15 = (int)lVar4;
  if (*(char *)(param_1 + 0x479) != '\0') {
    pfVar9 = (float *)FUN_140c421f0(param_1);
    if (pfVar9 == (float *)0x0) {
      return;
    }
    if ((pfVar9[1] <= *(float *)(param_1 + 0x460)) || (*(float *)(param_1 + 0x460) < *pfVar9)) {
      FUN_140c5ce20(param_1);
    }
    else {
      if (iVar15 == 0) {
        FUN_140c5c970(param_1);
      }
      if (iVar10 != 0) {
        return;
      }
    }
    goto LAB_140c5c385;
  }
  if ((iVar11 % iVar12 != 0) || (pfVar9 = (float *)FUN_140c421f0(param_1), pfVar9 == (float *)0x0))
  goto LAB_140c5c363;
  if (pfVar9[1] <= *(float *)(param_1 + 0x460)) {
    FUN_140c5ce20(param_1);
    if ((*(longlong *)(param_1 + 0x468) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x468) + 0x30), lVar3 != 0)) {
      iVar11 = *(int *)(param_1 + 0x498);
      uVar5 = *(undefined8 *)(lVar3 + 0x218);
      uVar6 = *(undefined8 *)(lVar3 + 0x220);
      *(int *)(param_1 + 0x498) = iVar11 + 1;
      if (*(int *)(param_1 + 0x49c) < iVar11 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x490,iVar11);
      }
      lVar3 = *(longlong *)(param_1 + 0x490);
      puVar1 = (undefined8 *)(lVar3 + (longlong)iVar11 * 0x14);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      *(undefined4 *)(lVar3 + 0x10 + (longlong)iVar11 * 0x14) = 0;
    }
    goto LAB_140c5c385;
  }
  if (*pfVar9 <= *(float *)(param_1 + 0x460)) {
    if (*(char *)(param_1 + 0x4d1) != '\0') {
      *(undefined1 *)(param_1 + 0x4d1) = 0;
      goto LAB_140c5c360;
    }
  }
  else if (*(char *)(param_1 + 0x4d1) == '\0') {
    *(undefined1 *)(param_1 + 0x4d1) = 1;
LAB_140c5c360:
    bVar16 = true;
  }
LAB_140c5c363:
  if (iVar15 == 0) {
    if (*(char *)(param_1 + 0x4d1) == (char)lVar4) {
      FUN_140c5c970(param_1);
    }
    else {
      FUN_140c5ce20();
    }
  }
  if (!bVar16) {
    return;
  }
LAB_140c5c385:
  FUN_140c5c3c0(param_1);
  return;
}



// FUNCTION 140c5c3c0 FUN_140c5c3c0 body=1453 status=ok
// SIG undefined FUN_140c5c3c0(void)

void FUN_140c5c3c0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  char local_c8;
  float fStack_c4;
  int local_b8;
  uint uStack_b4;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  uint uStack_84;
  undefined8 uStack_68;
  uint *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 local_50;
  
  lVar5 = FUN_140c420e0();
  if (lVar5 != 0) {
    uVar4 = *(uint *)(lVar5 + 0x38);
    puVar1 = (uint *)(lVar5 + 0x20);
    local_b8 = 0;
    uStack_b4 = 1;
    uStack_a4 = 0;
    iStack_a0 = 0;
    if (uVar4 != 0) {
      puVar14 = *(uint **)(lVar5 + 0x30);
      if (*(uint **)(lVar5 + 0x30) == (uint *)0x0) {
        puVar14 = puVar1;
      }
      uVar13 = *puVar14;
      iStack_a0 = 0;
      local_b8 = 0;
      while (uVar13 == 0) {
        lVar11 = (longlong)local_b8;
        iStack_a0 = iStack_a0 + 0x20;
        iVar12 = local_b8 + 1;
        bVar17 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
        local_b8 = iVar12;
        if (bVar17) goto LAB_140c5c4ca;
        uVar13 = puVar14[lVar11 + 1];
      }
      uStack_b4 = -uVar13 & uVar13;
      iVar12 = 0x1f;
      if (uStack_b4 != 0) {
        for (; uStack_b4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (uStack_b4 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      uStack_a4 = (iStack_a0 - iVar12) + 0x1f;
      if ((int)uVar4 < (int)uStack_a4) {
LAB_140c5c4ca:
        uStack_a4 = uVar4;
      }
    }
    uStack_84 = *(uint *)(lVar5 + 0x38);
    uStack_68 = CONCAT44(uStack_b4,local_b8);
    uStack_58 = 0xffffffff;
    uStack_54 = uStack_a4;
    local_50 = CONCAT44(uStack_9c,iStack_a0);
    uVar13 = uStack_84 & 0xffffffe0;
    local_60 = puVar1;
    if (uStack_84 != uVar4) {
      puVar14 = *(uint **)(lVar5 + 0x30);
      if (*(uint **)(lVar5 + 0x30) == (uint *)0x0) {
        puVar14 = puVar1;
      }
      uVar10 = puVar14[(int)uStack_84 >> 5] & -1 << ((byte)uStack_84 & 0x1f);
      iVar12 = (int)uStack_84 >> 5;
      while (uVar10 == 0) {
        uVar13 = uVar13 + 0x20;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
        goto LAB_140c5c592;
        uVar10 = puVar14[(longlong)iVar12 + 1];
        iVar12 = iVar12 + 1;
      }
      uVar10 = -uVar10 & uVar10;
      iVar12 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (uVar10 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      uStack_84 = (uVar13 - iVar12) + 0x1f;
      if ((int)uVar4 < (int)uStack_84) {
LAB_140c5c592:
        uStack_84 = uVar4;
      }
    }
    while ((uStack_54 != uStack_84 || (local_60 != puVar1))) {
      uVar3 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + (longlong)(int)uStack_54 * 0x14);
      local_c8 = (char)uVar3;
      if (*(char *)(param_1 + 0x4d1) == '\0') {
        fStack_c4 = (float)(uVar3 >> 0x20);
        if ((*(float *)(param_1 + 0x464) < fStack_c4) ||
           (*(float *)(*(longlong *)(lVar5 + 0x10) + 8 + (longlong)(int)uStack_54 * 0x14) <=
            *(float *)(param_1 + 0x464))) {
          pcVar8 = (char *)0x0;
          lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x468) + 0x30);
          if (*(int *)(lVar11 + 0xe8) != *(int *)(lVar11 + 0x114)) {
            lVar9 = *(longlong *)(lVar11 + 0x120);
            if (*(longlong *)(lVar11 + 0x120) == 0) {
              lVar9 = lVar11 + 0x118;
            }
            iVar12 = *(int *)(lVar9 + ((longlong)*(int *)(lVar11 + 0x128) - 1U & uVar3 & 0xff) * 4);
            if (iVar12 != -1) {
              do {
                pcVar6 = (char *)((longlong)iVar12 * 0x30 + *(longlong *)(lVar11 + 0xe0));
                if (*pcVar6 == local_c8) {
                  if (iVar12 != -1) goto LAB_140c5c835;
                  break;
                }
                iVar12 = *(int *)(pcVar6 + 0x28);
              } while (iVar12 != -1);
            }
          }
          pcVar6 = pcVar8;
LAB_140c5c835:
          pcVar7 = pcVar6 + 8;
          if (pcVar6 == (char *)0x0) {
            pcVar7 = pcVar8;
          }
          if ((pcVar7 != (char *)0x0) && (lVar11 = *(longlong *)(pcVar7 + 0x10), lVar11 != 0)) {
            lVar9 = (longlong)*(int *)(param_1 + 0x4f8);
            if (*(int *)(param_1 + 0x4f8) != 0) {
              bVar17 = **(char **)(param_1 + 0x4f0) != local_c8;
              pcVar6 = pcVar8;
              pcVar7 = pcVar8;
              do {
                iVar12 = (int)pcVar6;
                pcVar8 = pcVar8 + 1;
                pcVar6 = (char *)(ulonglong)(iVar12 + 1);
                if ((longlong)pcVar8 < lVar9) {
                  do {
                    if (bVar17 != (pcVar8[*(longlong *)(param_1 + 0x4f0)] != local_c8)) break;
                    pcVar6 = (char *)(ulonglong)((int)pcVar6 + 1);
                    pcVar8 = pcVar8 + 1;
                  } while ((longlong)pcVar8 < lVar9);
                }
                iVar16 = (int)pcVar6 - iVar12;
                if (bVar17 != false) {
                  iVar15 = (int)pcVar7;
                  if (iVar15 != iVar12) {
                    _guard_xfg_dispatch_icall_nop
                              ((void *)((longlong)iVar15 + *(longlong *)(param_1 + 0x4f0)),
                               (void *)(*(longlong *)(param_1 + 0x4f0) + (longlong)iVar12),
                               (longlong)iVar16);
                  }
                  pcVar7 = (char *)(ulonglong)(uint)(iVar15 + iVar16);
                }
                bVar17 = (bool)(bVar17 ^ 1);
              } while ((longlong)pcVar8 < lVar9);
              *(int *)(param_1 + 0x4f8) = (int)pcVar7;
            }
            FUN_1405aa0a0(lVar11);
          }
        }
        else {
          lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x468) + 0x30);
          if (*(int *)(lVar11 + 0xe8) != *(int *)(lVar11 + 0x114)) {
            lVar9 = *(longlong *)(lVar11 + 0x120);
            if (*(longlong *)(lVar11 + 0x120) == 0) {
              lVar9 = lVar11 + 0x118;
            }
            iVar12 = *(int *)(lVar9 + ((longlong)*(int *)(lVar11 + 0x128) - 1U & uVar3 & 0xff) * 4);
            if (iVar12 != -1) {
              do {
                pcVar8 = (char *)((longlong)iVar12 * 0x30 + *(longlong *)(lVar11 + 0xe0));
                if (*pcVar8 == local_c8) {
                  if (iVar12 != -1) goto LAB_140c5c734;
                  break;
                }
                iVar12 = *(int *)(pcVar8 + 0x28);
              } while (iVar12 != -1);
            }
          }
          pcVar8 = (char *)0x0;
LAB_140c5c734:
          pcVar6 = pcVar8 + 8;
          if (pcVar8 == (char *)0x0) {
            pcVar6 = (char *)0x0;
          }
          if ((pcVar6 != (char *)0x0) && (lVar11 = *(longlong *)(pcVar6 + 8), lVar11 != 0)) {
            plVar2 = (longlong *)(param_1 + 0x4f0);
            pcVar8 = (char *)*plVar2;
            iVar12 = *(int *)(param_1 + 0x4f8);
            for (pcVar6 = pcVar8; pcVar6 != pcVar8 + iVar12; pcVar6 = pcVar6 + 1) {
              if (*pcVar6 == local_c8) {
                if ((int)pcVar6 - (int)pcVar8 != -1) goto LAB_140c5c7a5;
                break;
              }
            }
            *(int *)(param_1 + 0x4f8) = iVar12 + 1;
            if (*(int *)(param_1 + 0x4fc) < iVar12 + 1) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar2,iVar12);
            }
            *(char *)((longlong)iVar12 + *plVar2) = local_c8;
LAB_140c5c7a5:
            FUN_1405aa0a0(lVar11);
          }
        }
      }
      else {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x468) + 0x30);
        if (*(int *)(lVar11 + 0xe8) != *(int *)(lVar11 + 0x114)) {
          lVar9 = *(longlong *)(lVar11 + 0x120);
          if (*(longlong *)(lVar11 + 0x120) == 0) {
            lVar9 = lVar11 + 0x118;
          }
          iVar12 = *(int *)(lVar9 + ((longlong)*(int *)(lVar11 + 0x128) - 1U & uVar3 & 0xff) * 4);
          if (iVar12 != -1) {
            do {
              pcVar8 = (char *)((longlong)iVar12 * 0x30 + *(longlong *)(lVar11 + 0xe0));
              if (*pcVar8 == local_c8) {
                if (iVar12 != -1) goto LAB_140c5c665;
                break;
              }
              iVar12 = *(int *)(pcVar8 + 0x28);
            } while (iVar12 != -1);
          }
        }
        pcVar8 = (char *)0x0;
LAB_140c5c665:
        pcVar6 = pcVar8 + 8;
        if (pcVar8 == (char *)0x0) {
          pcVar6 = (char *)0x0;
        }
        if ((pcVar6 != (char *)0x0) && (*(longlong *)(pcVar6 + 0x18) != 0)) {
          FUN_1405aa0a0();
        }
      }
      uStack_58 = uStack_58 & ~uStack_68._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_68);
    }
  }
  return;
}



// FUNCTION 140c5c970 FUN_140c5c970 body=1194 status=ok
// SIG undefined FUN_140c5c970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c5c970(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  char cVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint *puVar15;
  undefined1 auStack_158 [32];
  longlong *local_138;
  uint local_130;
  uint uStack_12c;
  uint *puStack_128;
  undefined4 local_120;
  uint uStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  ulonglong local_110;
  uint local_108;
  uint local_104;
  longlong *local_100;
  undefined8 uStack_f8;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  uint *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined1 local_a8;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  uVar12 = 0;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0;
  lVar7 = FUN_140c421f0();
  if (lVar7 != 0) {
    uVar1 = *(uint *)(lVar7 + 0x30);
    local_138 = (longlong *)(lVar7 + 8);
    puStack_128 = (uint *)(lVar7 + 0x18);
    local_130 = 0;
    local_110 = 0;
    local_104 = 0;
    uStack_12c = 1;
    uStack_11c = 0;
    uStack_118 = 0;
    if (uVar1 != 0) {
      puVar15 = *(uint **)(lVar7 + 0x28);
      if (*(uint **)(lVar7 + 0x28) == (uint *)0x0) {
        puVar15 = puStack_128;
      }
      uVar10 = *puVar15;
      uVar9 = uVar12;
      uVar13 = uVar12;
      while (uVar10 == 0) {
        iVar4 = (int)uVar9;
        uStack_118 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_118;
        local_130 = iVar4 + 1;
        uVar9 = (ulonglong)local_130;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_140c5caa1;
        uVar10 = puVar15[(longlong)iVar4 + 1];
      }
      uStack_12c = -uVar10 & uVar10;
      iVar4 = 0x1f;
      if (uStack_12c != 0) {
        for (; uStack_12c >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_12c == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_11c = (uStack_118 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_11c) {
LAB_140c5caa1:
        uStack_11c = uVar1;
      }
    }
    local_120 = 0xffffffff;
    uStack_f8 = CONCAT44(uStack_12c,local_130);
    uVar1 = *(uint *)(lVar7 + 0x30);
    uStack_c0 = 0xffffffff;
    uStack_bc = uStack_11c;
    uStack_e0 = CONCAT44(uStack_114,uStack_118);
    uStack_ec = *(uint *)(lVar7 + 0x30);
    uStack_f0 = -1 << ((byte)uStack_ec & 0x1f);
    uVar14 = uStack_ec & 0xffffffe0;
    uVar9 = uVar12;
    uVar13 = uVar12;
    local_100 = local_138;
    local_d8 = local_138;
    uStack_d0 = uStack_f8;
    local_c8 = puStack_128;
    local_b8 = uStack_e0;
    uStack_e8 = uStack_c0;
    uStack_e4 = uStack_bc;
    uVar10 = uStack_ec;
    if (uStack_ec != uVar1) {
      puVar15 = *(uint **)(lVar7 + 0x28);
      if (*(uint **)(lVar7 + 0x28) == (uint *)0x0) {
        puVar15 = puStack_128;
      }
      uVar10 = puVar15[(int)uStack_ec >> 5] & uStack_f0;
      iVar4 = (int)uStack_ec >> 5;
      while (uVar10 == 0) {
        uVar14 = uVar14 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_140c5cb97;
        uVar10 = puVar15[(longlong)iVar4 + 1];
        uStack_f0 = 0xffffffff;
        iVar4 = iVar4 + 1;
      }
      uVar10 = -uVar10 & uVar10;
      iVar4 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar10 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_ec = (uVar14 - iVar4) + 0x1f;
      uVar10 = uStack_ec;
      if ((int)uVar1 < (int)uStack_ec) {
LAB_140c5cb97:
        uStack_ec = uVar1;
        uVar10 = uVar1;
      }
    }
    while( true ) {
      if (((uStack_bc == uVar10) && (local_c8 == puStack_128)) && (local_d8 == local_138)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      iVar4 = (int)uVar12;
      if (!bVar3) break;
      puVar11 = (undefined1 *)((longlong)(int)uStack_bc * 0x70 + *local_d8);
      local_a8 = *puVar11;
      local_a0 = *(undefined4 *)(puVar11 + 8);
      local_9c = *(float *)(puVar11 + 0xc);
      local_98 = *(float *)(puVar11 + 0x10);
      local_90 = 0;
      local_88 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0xffffffff;
      local_5c = 0;
      local_50 = 0;
      local_48 = 0;
      FUN_140c310a0(&local_90,puVar11 + 0x18);
      if ((local_9c <= *(float *)((longlong)param_1 + 0x464)) &&
         (*(float *)((longlong)param_1 + 0x464) < local_98)) {
        local_108 = iVar4 + 1;
        if ((int)uVar9 < (int)local_108) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_110,uVar12);
          uVar9 = (ulonglong)local_104;
          uVar13 = local_110;
        }
        uVar12 = (ulonglong)local_108;
        *(undefined1 *)((longlong)iVar4 + uVar13) = local_a8;
      }
      local_48 = 0;
      if (local_50 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_90);
      uStack_c0 = uStack_c0 & ~uStack_d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d0);
    }
    if (iVar4 < 1) {
      cVar8 = '\0';
    }
    else {
      iVar5 = rand();
      iVar6 = (int)((float)iVar5 * 3.051851e-05 * (float)iVar4);
      iVar5 = iVar4 + -1;
      if (iVar6 <= iVar4 + -1) {
        iVar5 = iVar6;
      }
      cVar8 = *(char *)((longlong)iVar5 + uVar13);
    }
    if (*(char *)((longlong)param_1 + 0x4c9) != cVar8) {
      *(char *)((longlong)param_1 + 0x4c9) = cVar8;
      uVar2 = *(undefined8 *)(param_1[0x8d] + 0x30);
      lVar7 = FUN_140c46400(uVar2,cVar8);
      if ((lVar7 != 0) || (lVar7 = FUN_140c46400(uVar2,0), lVar7 != 0)) {
        FUN_1405aa0a0(lVar7);
      }
      if ((param_1[0x8e] != 0) && (lVar7 = (**(code **)(*param_1 + 0x148))(param_1), lVar7 != 0)) {
        if (*(char *)((longlong)param_1 + 0x4c9) == '\x15') {
          if ((char)param_1[0x9a] == '\0') {
            *(int *)(param_1[0x8e] + 0x28) = (int)param_1[0x8c];
            *(undefined4 *)(param_1[0x8e] + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x464);
            (**(code **)(*param_1 + 0x148))(param_1);
            FUN_14143f3d0(param_1[0x8e],param_1);
            *(undefined1 *)(param_1 + 0x9a) = 1;
          }
        }
        else if ((char)param_1[0x9a] != '\0') {
          FUN_141440750(param_1[0x8e]);
          *(undefined1 *)(param_1 + 0x9a) = 0;
        }
      }
    }
    if (uVar13 != 0) {
      FMemory::Free(uVar13);
    }
  }
  return;
}



// FUNCTION 140c5ce20 FUN_140c5ce20 body=159 status=ok
// SIG undefined FUN_140c5ce20(void)

void FUN_140c5ce20(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  *(undefined1 *)(param_1 + 0x4d1) = 0;
  cVar2 = '\0';
  if (*(longlong *)(param_1 + 0x468) != 0) {
    cVar2 = FUN_140c40f40(*(longlong *)(param_1 + 0x468),*(undefined4 *)(param_1 + 0x460));
  }
  if (*(char *)(param_1 + 0x4c8) != cVar2) {
    *(char *)(param_1 + 0x4c8) = cVar2;
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x468) + 0x30);
    lVar3 = FUN_140c464a0(uVar1,cVar2);
    if ((lVar3 != 0) || (lVar3 = FUN_140c464a0(uVar1,0), lVar3 != 0)) {
      FUN_1405aa0a0(lVar3);
      cVar2 = *(char *)(param_1 + 0x4c8);
    }
    if (cVar2 != '\0') {
      FUN_140c5c970(param_1);
    }
    return;
  }
  return;
}



// FUNCTION 140c5cec0 FUN_140c5cec0 body=112 status=ok
// SIG undefined FUN_140c5cec0(void)

void FUN_140c5cec0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x1300) != '\0') {
    *(undefined1 *)(param_1 + 0x1300) = 0;
    TBaseMulticastDelegate<void,bool>::Broadcast(param_1 + 0x12e8);
    return;
  }
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0xd88) + 0xf0))();
  if (lVar2 != 0) {
    cVar1 = FUN_140c39ab0(param_1,0,3);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x1300) = 1;
      TBaseMulticastDelegate<void,bool>::Broadcast(param_1 + 0x12e8,1);
      return;
    }
  }
  return;
}



// FUNCTION 140c5cf30 FUN_140c5cf30 body=556 status=ok
// SIG undefined FUN_140c5cf30(void)

void FUN_140c5cf30(longlong param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_18;
  int local_10;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 2;
    cVar3 = FUN_140c478e0();
    if (cVar3 != '\0') {
      lVar5 = FUN_140c2d9f0();
      FUN_140c58b10(param_1,*(undefined4 *)(lVar5 + 0x28));
    }
  }
  else if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 3;
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 8);
    if (cVar3 != '\0') {
      plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
      lVar5 = (**(code **)(*plVar4 + 0x148))(plVar4);
      if (lVar5 != 0) {
        UWorld::GetPlayerControllerIterator(lVar5,&local_18);
        while( true ) {
          if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) break;
          lVar5 = FWeakObjectPtr::Get();
          if (lVar5 != 0) {
            lVar6 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              FUN_14145d6f0(lVar5,0);
            }
          }
          local_10 = local_10 + 1;
        }
      }
    }
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 8);
    if (cVar3 != '\0') {
      plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
      lVar5 = (**(code **)(*plVar4 + 0x148))(plVar4);
      if (lVar5 != 0) {
        UWorld::GetPlayerControllerIterator(lVar5,&local_18);
        while( true ) {
          if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) break;
          lVar5 = FWeakObjectPtr::Get();
          if (lVar5 != 0) {
            lVar6 = FUN_14145f370();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              FUN_14145dea0();
            }
          }
          local_10 = local_10 + 1;
        }
      }
    }
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar3 != '\0') {
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
    lVar5 = (**(code **)(*plVar4 + 0x148))(plVar4);
    if (lVar5 != 0) {
      lVar5 = UWorld::GetGameState<APVPGameState>(lVar5);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x618) = *(undefined4 *)(param_1 + 0x10);
      }
    }
  }
  return;
}



// FUNCTION 140c5d160 FUN_140c5d160 body=606 status=ok
// SIG undefined FUN_140c5d160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c5d160(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  *(int *)(param_1 + 4) = (int)param_1[4] + -1;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 1);
  uVar4 = 0;
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 1);
    lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
    if ((lVar3 != 0) && (lVar3 = UWorld::GetGameState<APVPGameState>(lVar3), lVar3 != 0)) {
      cVar1 = FWeakObjectPtr::IsValid(param_1 + 1);
      if (cVar1 != '\0') {
        plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 1);
        lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
        if (lVar3 != 0) {
          uVar4 = UWorld::GetGameState<APVPGameState>(lVar3);
        }
      }
      FUN_140cd0230(uVar4,(int)param_1[4]);
    }
  }
  if ((int)param_1[4] < 1) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  else {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 1);
    if (cVar1 != '\0') {
      plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 1);
      lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
      if (lVar3 != 0) {
        plVar2 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar2 != (longlong *)0x0) {
          plVar2[1] = (longlong)param_1;
          *plVar2 = (longlong)&DAT_143f3ed00;
          plVar2[2] = (longlong)FUN_140c5d160;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar2[4] = lVar5;
          *plVar2 = (longlong)&PTR_GetPoolName_143f3ed48;
        }
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar4 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        local_88 = 0;
        local_80 = 0;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
        }
        FWeakObjectPtr::operator=(local_78,0);
        local_90 = 0xbf800000;
        local_98 = 0;
        local_70 = 0;
        local_38 = (longlong *)0x0;
        local_28 = 0;
        local_68 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar4,param_1 + 3,&local_88,0x3f800000);
        if (local_28 != 0) {
          plVar6 = local_58;
          if (local_38 != (longlong *)0x0) {
            plVar6 = local_38;
          }
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6,0);
          }
        }
        if (local_38 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          lVar3 = FMemory::Realloc(plVar2,0,0);
          if (lVar3 != 0) {
            FMemory::Free(lVar3);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c5d3c0 FUN_140c5d3c0 body=565 status=ok
// SIG undefined FUN_140c5d3c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c5d3c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b8 = *(float *)(param_1 + 0x5ac) - *(float *)(param_1 + 0x5a0);
  local_b4 = *(float *)(param_1 + 0x5b0) - *(float *)(param_1 + 0x5a4);
  local_b0 = *(float *)(param_1 + 0x5b4) - *(float *)(param_1 + 0x5a8);
  uVar4 = FVector::Rotation(&local_b8,local_98);
  FRotator::Quaternion(uVar4,&local_a8);
  iVar6 = 0;
  local_38 = _DAT_14686bd10 & _DAT_14686bd20;
  uStack_34 = uRam000000014686bd14 & uRam000000014686bd24;
  uStack_30 = uRam000000014686bd18 & uRam000000014686bd28;
  uStack_2c = uRam000000014686bd1c & uRam000000014686bd2c;
  iVar3 = *(int *)(param_1 + 0x5bc);
  local_58 = local_a8;
  uStack_50 = uStack_a0;
  local_88 = local_a8;
  uStack_80 = uStack_a0;
  local_68._4_4_ = DAT_1468b5d94;
  local_68._0_4_ = DAT_1468b5d90;
  local_68._8_4_ = DAT_1468b5d98;
  local_68._12_4_ = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (0 < iVar3) {
    do {
      fVar8 = (float)iVar6 / (float)iVar3 + *(float *)(param_1 + 0x5c8);
      fVar9 = (float)(int)fVar8;
      if (ABS(fVar8) < ABS((float)(int)fVar8)) {
        fVar9 = fVar8;
      }
      piVar1 = *(int **)(param_1 + 0x5d0);
      fVar8 = fVar8 - fVar9;
      fVar9 = local_b4 * fVar8 + *(float *)(param_1 + 0x5a4);
      for (piVar5 = piVar1; piVar5 != piVar1 + *(int *)(param_1 + 0x5d8); piVar5 = piVar5 + 1) {
        if (*piVar5 == iVar6) {
          iVar3 = (int)((longlong)piVar5 - (longlong)piVar1 >> 2);
          goto LAB_140c5d566;
        }
      }
      iVar3 = -1;
LAB_140c5d566:
      local_c0 = 1;
      local_c8 = 1;
      plVar2 = *(longlong **)(param_1 + 0x5c0);
      puVar7 = &local_88;
      if (iVar3 == -1) {
        puVar7 = &local_58;
      }
      auVar10._4_4_ = fVar9;
      auVar10._0_4_ = local_b8 * fVar8 + *(float *)(param_1 + 0x5a0);
      auVar10._8_4_ = local_b0 * fVar8 + *(float *)(param_1 + 0x5a8);
      auVar10._12_4_ = 0;
      *(undefined1 (*) [16])(puVar7 + 2) = auVar10;
      (**(code **)(*plVar2 + 0x990))(plVar2,iVar6,fVar9,0);
      iVar3 = *(int *)(param_1 + 0x5bc);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  return;
}



// FUNCTION 140c5d600 FUN_140c5d600 body=690 status=ok
// SIG undefined FUN_140c5d600(void)

void FUN_140c5d600(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  int local_res10 [2];
  int local_res18;
  longlong *local_res20;
  undefined8 *local_58;
  undefined8 local_50;
  longlong *local_48;
  int local_40;
  
  plVar14 = (longlong *)0x0;
  local_res20 = (longlong *)0x0;
  iVar8 = 0;
  uVar3 = FUN_142a07000();
  ppuVar4 = (undefined8 **)AActor::GetComponentsByClass(param_1,&local_48,uVar3);
  plVar13 = plVar14;
  if (&local_58 != ppuVar4) {
    plVar13 = *ppuVar4;
    *ppuVar4 = (undefined8 *)0x0;
    iVar8 = *(int *)(ppuVar4 + 1);
    ppuVar4[1] = (undefined8 *)0x0;
    local_res20 = plVar13;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_58 = (undefined8 *)0x0;
  local_50 = 1;
  puVar5 = (undefined8 *)FName::FName(local_res10,L"Unarmed",1);
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,0);
  *local_58 = *puVar5;
  ppuVar4 = (undefined8 **)(param_2 + 0x7c8);
  if (param_2 == 0) {
    ppuVar4 = &local_58;
  }
  local_res10[0] = *(int *)(ppuVar4 + 1);
  lVar10 = (longlong)local_res10[0];
  puVar5 = *ppuVar4;
  local_48 = (longlong *)0x0;
  local_40 = local_res10[0];
  plVar12 = plVar14;
  if (local_res10[0] != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_48,local_res10[0],0);
    plVar12 = local_48;
    _guard_xfg_dispatch_icall_nop(local_48,puVar5,lVar10 << 3);
    local_res10[0] = local_40;
  }
  ppuVar4 = (undefined8 **)(param_3 + 0x7c8);
  if (param_3 == 0) {
    ppuVar4 = &local_58;
  }
  local_res18 = *(int *)(ppuVar4 + 1);
  lVar10 = (longlong)local_res18;
  puVar5 = *ppuVar4;
  local_48 = (longlong *)0x0;
  local_40 = local_res18;
  if (local_res18 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_48,local_res18,0);
    plVar14 = local_48;
    _guard_xfg_dispatch_icall_nop(local_48,puVar5,lVar10 << 3);
  }
  plVar1 = plVar13 + iVar8;
  local_res18 = local_40;
  for (; plVar13 != plVar1; plVar13 = plVar13 + 1) {
    lVar10 = *plVar13;
    if (lVar10 != 0) {
      lVar6 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar7 = 0;
        uVar9 = (ulonglong)((longlong)(plVar12 + local_res10[0]) + (7 - (longlong)plVar12)) >> 3;
        if (plVar12 + local_res10[0] < plVar12) {
          uVar9 = uVar7;
        }
        if (uVar9 != 0) {
          do {
            FUN_1423a95e0(lVar10);
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar9);
        }
        uVar7 = 0;
        uVar9 = (ulonglong)((longlong)(plVar14 + local_res18) + (7 - (longlong)plVar14)) >> 3;
        if (plVar14 + local_res18 < plVar14) {
          uVar9 = uVar7;
        }
        plVar11 = plVar14;
        if (uVar9 != 0) {
          do {
            FUN_1423aa350(lVar10,*plVar11);
            uVar7 = uVar7 + 1;
            plVar11 = plVar11 + 1;
          } while (uVar7 != uVar9);
        }
      }
    }
  }
  if (plVar14 != (longlong *)0x0) {
    FMemory::Free(plVar14);
  }
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  FMemory::Free(local_58);
  if (local_res20 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140c5d8c0 FUN_140c5d8c0 body=27 status=ok
// SIG undefined FUN_140c5d8c0(void)

void FUN_140c5d8c0(long param_1)

{
  FUN_140a67750();
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 140c5d8e0 FUN_140c5d8e0 body=47 status=ok
// SIG undefined FUN_140c5d8e0(void)

void FUN_140c5d8e0(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0xa68))();
  }
  FUN_140e83450(param_1 + 0x2a3,uVar1);
  return;
}



// FUNCTION 140c5d910 FUN_140c5d910 body=8 status=ok
// SIG undefined FUN_140c5d910(void)

undefined1 FUN_140c5d910(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x13c0);
}



// FUNCTION 140c5d920 FUN_140c5d920 body=134 status=ok
// SIG undefined FUN_140c5d920(void)

void FUN_140c5d920(longlong param_1,undefined8 param_2,char param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_3 != '\0') {
    puVar1 = *(undefined4 **)(param_1 + 0x4a0);
    uVar2 = 0;
    if (*(char *)(param_1 + 0x4b0) != '\0') {
      uVar2 = param_2;
    }
    puVar3 = puVar1 + (longlong)*(int *)(param_1 + 0x4a8) * 4;
    for (; puVar1 != puVar3; puVar1 = puVar1 + 4) {
      local_18 = *puVar1;
      uStack_14 = puVar1[1];
      uStack_10 = puVar1[2];
      uStack_c = puVar1[3];
      FUN_142f6b950(param_1,&local_18,uVar2);
    }
  }
  return;
}



// FUNCTION 140c5d9b0 FUN_140c5d9b0 body=543 status=ok
// SIG undefined FUN_140c5d9b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c5d9b0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  cVar1 = (**(code **)(*param_1 + 0x778))();
  if (((cVar1 != '\0') && (param_1[0x1cd] != 0)) &&
     ((*(uint *)(param_1[0x1cd] + 0x2ac0) >> 2 & 1) != 0)) {
    local_a8 = &LAB_140c4e2f0;
    *(undefined1 *)((longlong)param_1 + 0x1cfc) = 1;
    uStack_a0 = 0;
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar5 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    lVar2 = param_1[0x39f];
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_9c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar5,param_1 + 0x3a0,&local_98,(int)lVar2);
    if (local_38 != 0) {
      plVar6 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar6 = local_48;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar2 = FMemory::Realloc(plVar3,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 140c5dbd0 FUN_140c5dbd0 body=387 status=ok
// SIG undefined FUN_140c5dbd0(void)

void FUN_140c5dbd0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res8 [2];
  undefined1 local_48 [32];
  longlong local_28;
  
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0xd88) + 0x110))((longlong *)(param_1 + 0xd88),3);
  if ((cVar2 != '\0') && (cVar2 = FUN_140c40030(param_1,0), cVar2 == '\0')) {
    lVar3 = (**(code **)(*(longlong *)(param_1 + 0xd80) + 0x18))();
    lVar4 = FUN_140c46b40(param_1);
    if ((lVar4 != 0) &&
       ((lVar3 != 0 && (FUN_143004da0(lVar3,local_res8,lVar4), local_res8[0] != -1)))) {
      FUN_142fde510(local_48);
      FUN_142ffa4f0(lVar3,local_res8,local_48);
      lVar3 = 0;
      cVar2 = FUN_140e96340(param_1 + 0x1518);
      if ((cVar2 != '\0') && (lVar4 = FUN_140e7eef0(param_1 + 0x1518,0), lVar4 != 0)) {
        lVar3 = FUN_140e83520(param_1 + 0x1518,lVar4);
      }
      if ((local_28 != lVar3) && (local_28 != 0)) {
        lVar3 = FUN_1430b3b80();
        if ((*(int *)(*(longlong *)(local_28 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(local_28 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          if (*(byte *)(param_1 + 0x128) < 3) {
            FUN_1413f89f0();
            return;
          }
          FUN_140c578a0(param_1,local_28,0,0,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c5dd60 FUN_140c5dd60 body=387 status=ok
// SIG undefined FUN_140c5dd60(void)

void FUN_140c5dd60(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res8 [2];
  undefined1 local_48 [32];
  longlong local_28;
  
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0xd88) + 0x110))((longlong *)(param_1 + 0xd88),3);
  if ((cVar2 != '\0') && (cVar2 = FUN_140c40280(param_1,0), cVar2 == '\0')) {
    lVar3 = (**(code **)(*(longlong *)(param_1 + 0xd80) + 0x18))();
    lVar4 = FUN_140c46b40(param_1);
    if ((lVar4 != 0) &&
       ((lVar3 != 0 && (FUN_14300cbb0(lVar3,local_res8,lVar4), local_res8[0] != -1)))) {
      FUN_142fde510(local_48);
      FUN_142ffa4f0(lVar3,local_res8,local_48);
      lVar3 = 0;
      cVar2 = FUN_140e96340(param_1 + 0x1518);
      if ((cVar2 != '\0') && (lVar4 = FUN_140e7eef0(param_1 + 0x1518,0), lVar4 != 0)) {
        lVar3 = FUN_140e83520(param_1 + 0x1518,lVar4);
      }
      if ((local_28 != lVar3) && (local_28 != 0)) {
        lVar3 = FUN_1430b3b80();
        if ((*(int *)(*(longlong *)(local_28 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(local_28 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          if (*(byte *)(param_1 + 0x128) < 3) {
            FUN_1413f89f0();
            return;
          }
          FUN_140c578a0(param_1,local_28,0,0,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c5def0 FUN_140c5def0 body=266 status=ok
// SIG undefined FUN_140c5def0(void)

void FUN_140c5def0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_res10 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    puVar3 = (undefined8 *)FName::FName(local_res10,L"WeaponPutDown",1);
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = *puVar3;
    local_18 = local_28;
    local_14 = local_24;
    local_10 = local_20;
    FUN_143094030(param_2,&local_18);
    cVar1 = (**(code **)(*param_1 + 0x778))(param_1);
    if ((cVar1 != '\0') && (plVar4 = (longlong *)FUN_140a63ba0(param_2), plVar4 == param_1)) {
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x670))(param_1);
      if ((plVar4 == (longlong *)0x0) ||
         ((cVar1 = (**(code **)(*plVar4 + 0x768))(plVar4), cVar1 == '\0' ||
          (lVar5 = FUN_140e81f30(param_1 + 0x286,param_2), lVar5 == 0)))) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      FUN_143076230(param_2,uVar6);
    }
    uVar2 = FUN_140e7ef80(param_1 + 0x2a3,param_2);
    FUN_140c5e0a0(param_1,uVar2);
    return;
  }
  return;
}



// FUNCTION 140c5e000 FUN_140c5e000 body=36 status=ok
// SIG undefined FUN_140c5e000(void)

void FUN_140c5e000(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 local_18;
  undefined1 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1070,&local_18);
  return;
}



// FUNCTION 140c5e030 FUN_140c5e030 body=100 status=ok
// SIG undefined FUN_140c5e030(void)

void FUN_140c5e030(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 local_18;
  undefined1 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x20c,&local_18);
  lVar1 = (**(code **)(*param_1 + 0x670))(param_1);
  if (lVar1 != 0) {
    FUN_1430a1ee0(lVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 140c5e0a0 FUN_140c5e0a0 body=129 status=ok
// SIG undefined FUN_140c5e0a0(void)

void FUN_140c5e0a0(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (((int)(uint)param_2 < *(int *)(param_1 + 0x1520)) && ((*(byte *)(param_1 + 0x94) & 2) == 0)) {
    uVar1 = FUN_140e83500(param_1 + 0x1518,param_2);
    FUN_140e71370(param_1 + 0x1518,param_2);
    uVar2 = FUN_140e83500(param_1 + 0x1518,param_2);
    FUN_140c39dd0(param_1,uVar1,uVar2);
  }
  return;
}



// FUNCTION 140c5e130 FUN_140c5e130 body=130 status=ok
// SIG undefined FUN_140c5e130(void)

void FUN_140c5e130(longlong *param_1,char param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  
  if ((char)param_1[0x25] == '\x03') {
    cVar1 = *(char *)((longlong)param_1 + 0x1ccd);
    if (param_2 == '\0') {
      FUN_140e95b80(param_1 + 0x2a3,param_3);
    }
    else {
      FUN_140e8ff10();
    }
    uVar2 = SEditableText::OnTextChanged(param_1 + 0x2a3);
    *(undefined1 *)((longlong)param_1 + 0x1ccd) = uVar2;
    cVar3 = SEditableText::OnTextChanged(param_1 + 0x2a3);
    if (cVar1 != cVar3) {
                    /* WARNING: Could not recover jumptable at 0x000140c5e1a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xc40))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140c5e1c0 FUN_140c5e1c0 body=64 status=ok
// SIG undefined FUN_140c5e1c0(void)

void FUN_140c5e1c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1444d5058;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 140c5e200 FUN_140c5e200 body=38 status=ok
// SIG undefined FUN_140c5e200(void)

undefined8 * FUN_140c5e200(undefined8 *param_1,byte param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140c5e230 FUN_140c5e230 body=56 status=ok
// SIG undefined FUN_140c5e230(void)

void FUN_140c5e230(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1444d5098;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 140c5e270 FUN_140c5e270 body=38 status=ok
// SIG undefined FUN_140c5e270(void)

undefined8 * FUN_140c5e270(undefined8 *param_1,byte param_2)

{
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140c5e2a0 FUN_140c5e2a0 body=1005 status=ok
// SIG undefined FUN_140c5e2a0(void)

void FUN_140c5e2a0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined1 local_res8 [8];
  longlong local_28 [2];
  
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_1444d5158;
    plVar4[1] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[3] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_1444d51a0;
  }
  lVar5 = FUN_14244d3d0();
  uVar9 = 0;
  plVar1 = (longlong *)(lVar5 + 0xb8);
  if (local_28 != plVar1) {
    if (plVar4 == (longlong *)0x0) {
      if ((*(int *)(lVar5 + 0xc0) != 0) && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)
         ) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar6 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar6;
        }
        *(undefined4 *)(lVar5 + 0xc0) = 0;
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
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  uVar8 = uVar9;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_GetPoolName_1440459e8;
    plVar4[1] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[3] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_144045a30;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465357a8,1);
    puVar7 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar3 = DAT_1465357b0;
    lVar5 = (longlong)DAT_1465357b0;
    uVar8 = *puVar7;
    DAT_1465357b0 = DAT_1465357b0 + 1;
    if (DAT_1465357b4 < DAT_1465357b0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465357a8,iVar3);
    }
    puVar7 = (undefined8 *)(lVar5 * 0x10 + DAT_1465357a8);
    *puVar7 = plVar4;
    *(undefined4 *)(puVar7 + 1) = 2;
  }
  *(undefined8 *)(param_1 + 8) = uVar8;
  plVar4 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar4 == (longlong *)0x0) {
    if ((DAT_146b32138 != 0) && (DAT_146b32130 != (longlong *)0x0)) {
      (**(code **)(*DAT_146b32130 + 0x28))(DAT_146b32130,0);
      if (DAT_146b32130 != (longlong *)0x0) {
        DAT_146b32130 = (longlong *)FMemory::Realloc(DAT_146b32130,0,0);
      }
      DAT_146b32138 = 0;
    }
  }
  else {
    *plVar4 = (longlong)&PTR_GetPoolName_1444d5098;
    plVar4[1] = (longlong)FUN_140cdcd70;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[3] = lVar5;
    (**(code **)(*plVar4 + 0x30))(plVar4,&DAT_146b32130);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar5 = FMemory::Realloc(plVar4,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  iVar3 = DAT_146b31a78;
  lVar5 = (longlong)DAT_146b31a78;
  for (piVar10 = DAT_146b31a70; piVar10 != DAT_146b31a70 + lVar5; piVar10 = piVar10 + 1) {
    if (*piVar10 == 0x16) {
      if ((int)((longlong)piVar10 - (longlong)DAT_146b31a70 >> 2) != -1) goto LAB_140c5e556;
      break;
    }
  }
  DAT_146b31a78 = DAT_146b31a78 + 1;
  if (DAT_146b31a7c < DAT_146b31a78) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146b31a70,iVar3);
  }
  DAT_146b31a70[lVar5] = 0x16;
LAB_140c5e556:
  iVar3 = DAT_146b31a78;
  for (piVar10 = DAT_146b31a70; piVar10 != DAT_146b31a70 + DAT_146b31a78; piVar10 = piVar10 + 1) {
    if (*piVar10 == 7) {
      if ((int)((longlong)piVar10 - (longlong)DAT_146b31a70 >> 2) != -1) goto LAB_140c5e5b1;
      break;
    }
  }
  DAT_146b31a78 = DAT_146b31a78 + 1;
  if (DAT_146b31a7c < DAT_146b31a78) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146b31a70,iVar3);
  }
  DAT_146b31a70[iVar3] = 7;
LAB_140c5e5b1:
  iVar3 = DAT_146b31a88;
  lVar5 = (longlong)DAT_146b31a88;
  piVar10 = DAT_146b31a80;
  do {
    if (piVar10 == DAT_146b31a80 + lVar5) {
LAB_140c5e5ec:
      DAT_146b31a88 = DAT_146b31a88 + 1;
      if (DAT_146b31a8c < DAT_146b31a88) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146b31a80,iVar3);
      }
      DAT_146b31a80[lVar5] = 0x19;
LAB_140c5e619:
      uVar8 = FUN_142cc0880();
      FUN_140c5f090(uVar8,FUN_1405120f0);
      lVar5 = FUN_142cc0880();
      FUN_140c5f090(lVar5 + 0x10,FUN_1405120f0);
      lVar5 = FMemory::Malloc(0x20);
      if (lVar5 != 0) {
        uVar9 = FUN_140c634e0(lVar5);
      }
      puVar7 = DAT_146af4bf0;
      DAT_146af4bf0 = (undefined8 *)uVar9;
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000140c5e685. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar7)(puVar7,1);
      return;
    }
    if (*piVar10 == 0x19) {
      if ((int)((longlong)piVar10 - (longlong)DAT_146b31a80 >> 2) != -1) goto LAB_140c5e619;
      goto LAB_140c5e5ec;
    }
    piVar10 = piVar10 + 1;
  } while( true );
}



// FUNCTION 140c5e690 FUN_140c5e690 body=560 status=ok
// SIG undefined FUN_140c5e690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c5e690(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  
  lVar4 = *(longlong *)(param_1 + 8);
  uVar8 = 0;
  uVar11 = uVar8;
  uVar12 = uVar8;
  iVar6 = DAT_1465357b0;
  if (0 < DAT_1465357b0) {
    do {
      plVar10 = (longlong *)(DAT_1465357a8 + uVar12);
      if ((((int)plVar10[1] != 0) && (plVar3 = (longlong *)*plVar10, plVar3 != (longlong *)0x0)) &&
         (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8),
         iVar6 = DAT_1465357b0, *plVar3 == lVar4)) {
        if (((int)plVar10[1] != 0) && (plVar3 = (longlong *)*plVar10, plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0);
          if (*plVar10 != 0) {
            lVar4 = FMemory::Realloc(*plVar10,0,0);
            *plVar10 = lVar4;
          }
          *(undefined4 *)(plVar10 + 1) = 0;
          iVar6 = DAT_1465357b0;
        }
        break;
      }
      uVar9 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar9;
      uVar12 = uVar12 + 0x10;
    } while ((int)uVar9 < iVar6);
  }
  if (DAT_1465357bc < 1) {
    uVar11 = uVar8;
    iVar7 = iVar6;
    if (0 < iVar6) {
      do {
        if (((*(int *)(uVar11 + 8 + DAT_1465357a8) == 0) ||
            (*(longlong **)(uVar11 + DAT_1465357a8) == (longlong *)0x0)) ||
           (cVar2 = (**(code **)(**(longlong **)(uVar11 + DAT_1465357a8) + 0x10))(), cVar2 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1465357a8,uVar8,1,1);
        }
        else {
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar11 = uVar11 + 0x10;
        }
        iVar7 = DAT_1465357b0;
      } while ((int)uVar8 < DAT_1465357b0);
    }
    _DAT_1465357b8 = iVar7 * 2;
    if (_DAT_1465357b8 < 3) {
      _DAT_1465357b8 = 2;
    }
    if ((_DAT_1465357b8 < iVar6) && (DAT_1465357b4 != iVar7)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1465357a8);
    }
  }
  if ((DAT_146b32138 != 0) && (DAT_146b32130 != (longlong *)0x0)) {
    (**(code **)(*DAT_146b32130 + 0x28))(DAT_146b32130,0);
    if (DAT_146b32130 != (longlong *)0x0) {
      DAT_146b32130 = (longlong *)FMemory::Realloc(DAT_146b32130,0,0);
    }
    DAT_146b32138 = 0;
  }
  plVar10 = (longlong *)FUN_142cc0880();
  if (((int)plVar10[1] != 0) && (plVar3 = (longlong *)*plVar10, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    if (*plVar10 != 0) {
      lVar4 = FMemory::Realloc(*plVar10,0,0);
      *plVar10 = lVar4;
    }
    *(undefined4 *)(plVar10 + 1) = 0;
  }
  lVar4 = FUN_142cc0880();
  if ((*(int *)(lVar4 + 0x18) != 0) &&
     (plVar10 = *(longlong **)(lVar4 + 0x10), plVar10 != (longlong *)0x0)) {
    (**(code **)(*plVar10 + 0x28))(plVar10,0);
    if (*(longlong *)(lVar4 + 0x10) != 0) {
      uVar5 = FMemory::Realloc(*(longlong *)(lVar4 + 0x10),0,0);
      *(undefined8 *)(lVar4 + 0x10) = uVar5;
    }
    *(undefined4 *)(lVar4 + 0x18) = 0;
  }
  puVar1 = DAT_146af4bf0;
  DAT_146af4bf0 = (undefined8 *)0x0;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140c5e8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,1);
  return;
}



// FUNCTION 140c5e8c0 FUN_140c5e8c0 body=66 status=ok
// SIG undefined FUN_140c5e8c0(void)

void FUN_140c5e8c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1444d5158;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1444d51a0;
  }
  return;
}



// FUNCTION 140c5e930 ExecuteIfSafe body=34 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseStaticDelegateInstance<void___cdecl(wchar_t_const_*,enum_EGameDelegates_SaveGame,FString_&)>::
ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4)

{
  (**(code **)(param_1 + 8))(param_2,param_3,param_4);
  return 1;
}



// FUNCTION 140c5e960 FUN_140c5e960 body=66 status=ok
// SIG undefined FUN_140c5e960(void)

void FUN_140c5e960(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1444d51e8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1444d5230;
  }
  return;
}



// FUNCTION 140c5e9b0 FUN_140c5e9b0 body=80 status=ok
// SIG undefined FUN_140c5e9b0(void)

undefined8 * FUN_140c5e9b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = &PTR_FUN_1444d9d08;
  }
  *param_1 = &LAB_140c6b520;
  return param_1;
}



// FUNCTION 140c5ea00 FUN_140c5ea00 body=109 status=ok
// SIG undefined FUN_140c5ea00(void)

undefined8 * FUN_140c5ea00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = *puVar1;
  param_2[2] = puVar1[1];
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(puVar1 + 2);
  *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)((longlong)puVar1 + 0x14);
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  param_2[0xc] = 0;
  *(undefined4 *)(param_2 + 0xd) = 0;
  TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>
  ::operator=(param_2 + 4,puVar1 + 3);
  return param_2;
}



// FUNCTION 140c5ea70 FUN_140c5ea70 body=233 status=ok
// SIG undefined FUN_140c5ea70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_140c5ea70(undefined8 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b7 [7];
  undefined1 local_b0 [128];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  _guard_xfg_dispatch_icall_nop(local_b7,0,0x87);
  local_b8 = 0;
  local_30 = 0;
  local_28 = 0;
  *param_2 = *(undefined1 *)*param_1;
  param_2[8] = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  _guard_xfg_dispatch_icall_nop(param_2 + 0x10,local_b0,0x80);
  uVar3 = 0;
  uVar2 = 0;
  uVar1 = 0;
  if (*(longlong *)(param_2 + 0x90) != 0) {
    FMemory::Free();
    uVar3 = local_30;
    uVar2 = (undefined4)local_28;
    uVar1 = local_28._4_4_;
  }
  *(undefined8 *)(param_2 + 0x90) = uVar3;
  *(undefined4 *)(param_2 + 0x98) = uVar2;
  *(undefined4 *)(param_2 + 0x9c) = uVar1;
  return param_2;
}



// FUNCTION 140c5eb60 FUN_140c5eb60 body=198 status=ok
// SIG undefined FUN_140c5eb60(void)

undefined8 FUN_140c5eb60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    plVar1[1] = param_3;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d9918;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_1444d9960;
  }
  TBaseMulticastDelegate<void>::Add(param_1,param_2,&local_18);
  plVar1 = local_18;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return param_2;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    plVar1 = (longlong *)FMemory::Realloc(plVar1,0,0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return param_2;
}



// FUNCTION 140c5ec30 FUN_140c5ec30 body=328 status=ok
// SIG undefined FUN_140c5ec30(void)

longlong FUN_140c5ec30(longlong param_1,undefined8 param_2)

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
    uVar2 = ULevelStreamingAlwaysLoaded::StaticClass();
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
      lVar5 = ULevelStreamingAlwaysLoaded::StaticClass();
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



// FUNCTION 140c5ed80 FUN_140c5ed80 body=218 status=ok
// SIG undefined FUN_140c5ed80(void)

undefined8 *
FUN_140c5ed80(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 local_res10 [8];
  
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_1444d9f90;
    FWeakObjectPtr::operator=(plVar7 + 1,param_3);
    *(undefined4 *)(plVar7 + 2) = uVar3;
    *(undefined4 *)((longlong)plVar7 + 0x14) = uVar4;
    *(undefined4 *)(plVar7 + 3) = uVar5;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar6;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar8;
    *plVar7 = (longlong)&PTR_FUN_1444d9fd8;
  }
  *param_2 = 0;
  if (plVar7 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar9;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar9 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar9 = plVar7;
    *(undefined4 *)(puVar9 + 1) = 3;
  }
  return param_2;
}


