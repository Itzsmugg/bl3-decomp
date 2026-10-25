// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1409b4150 FUN_1409b4150 body=99 status=ok
// SIG undefined FUN_1409b4150(void)

void FUN_1409b4150(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  
  FUN_142c6c710();
  if (*(longlong *)(param_1 + 0x150) != 0) {
    lVar1 = FUN_1406d4330(param_1);
    if ((*(byte *)(lVar1 + 0x38) & 2) == 0) {
      lVar1 = *(longlong *)(param_1 + 0x150);
      uVar2 = FUN_1413dd260(param_1,local_res8,lVar1 + 0x2e0);
      FUN_1409baf60(param_1,*(undefined8 *)(lVar1 + 0x2e0),uVar2);
    }
  }
  return;
}



// FUNCTION 1409b41c0 NativeConstruct body=27 status=ok
// SIG undefined NativeConstruct(void)

void UUserWidget::NativeConstruct(long param_1)

{
  FUN_1413dc770();
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 1409b41e0 FUN_1409b41e0 body=133 status=ok
// SIG undefined FUN_1409b41e0(void)

void FUN_1409b41e0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((0 < *(int *)(param_1 + 0x28)) || (0.0 < (float)*(int *)(param_1 + 0x2c))) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  if (*(char *)(param_1 + 0x30) != cVar1) {
    *(char *)(param_1 + 0x30) = cVar1;
    lVar2 = *(longlong *)(param_2 + 0xb0);
    if (lVar2 != 0) {
      if (cVar1 == '\0') {
        lVar2 = lVar2 + 0x2f0;
      }
      else {
        lVar2 = lVar2 + 0x2d8;
      }
      TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
                (lVar2,param_2,param_1);
    }
  }
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
              (*(longlong *)(param_2 + 0xb0) + 0x308,param_2,param_1);
  }
  return;
}



// FUNCTION 1409b4290 FUN_1409b4290 body=334 status=ok
// SIG undefined FUN_1409b4290(void)

void FUN_1409b4290(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar5 = FUN_1413ffd50();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  plVar6 = (longlong *)UDamageType::GetPrivateStaticClass();
  lVar5 = plVar6[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar5 = plVar6[0x1f];
  }
  lVar7 = (**(code **)(*param_2 + 0x148))(param_2);
  if (((lVar7 != 0) && (lVar7 = UWorld::GetWorldSettings(lVar7,1), lVar7 != 0)) &&
     (*(longlong *)(lVar7 + 0x478) != 0)) {
    lVar8 = UDamageType::GetPrivateStaticClass();
    lVar1 = *(longlong *)(lVar7 + 0x478);
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar8) {
        if (lVar1 != 0) {
          if (lVar1 == 0) goto LAB_1409b439e;
          plVar9 = (longlong *)UDamageType::GetPrivateStaticClass();
          plVar6 = *(longlong **)(lVar7 + 0x478);
          plVar3 = plVar6;
          goto joined_r0x0001409b438d;
        }
        break;
      }
    }
  }
  goto LAB_1409b43bf;
joined_r0x0001409b438d:
  if (plVar3 == (longlong *)0x0) goto LAB_1409b439e;
  if (plVar3 == plVar9) goto LAB_1409b43a0;
  plVar3 = (longlong *)plVar3[6];
  goto joined_r0x0001409b438d;
LAB_1409b439e:
  plVar6 = (longlong *)0x0;
LAB_1409b43a0:
  lVar5 = plVar6[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar5 = plVar6[0x1f];
  }
LAB_1409b43bf:
  (**(code **)(*param_2 + 0x550))(param_2,lVar5);
  return;
}



// FUNCTION 1409b43e0 FUN_1409b43e0 body=330 status=ok
// SIG undefined FUN_1409b43e0(void)

void FUN_1409b43e0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 99);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 99);
    cVar2 = FUN_1409ace70(param_1);
    if ((cVar2 == '\0') && (lVar4 != 0)) {
      plVar1 = param_1 + 0x5e;
      iVar3 = (int)param_1[0x5f];
      *(int *)(param_1 + 0x5f) = iVar3 + 1;
      if (*(int *)((longlong)param_1 + 0x2fc) < iVar3 + 1) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
      }
      lVar5 = *plVar1 + (longlong)iVar3 * 0x60;
      FWeakObjectPtr::operator=(lVar5,lVar4);
      *(undefined8 *)(lVar5 + 8) = 0;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(undefined8 *)(lVar5 + 0x20) = 0;
      *(undefined8 *)(lVar5 + 0x28) = 0;
      *(undefined8 *)(lVar5 + 0x30) = 0;
      *(undefined8 *)(lVar5 + 0x38) = 0;
      *(undefined8 *)(lVar5 + 0x40) = 0;
      *(undefined8 *)(lVar5 + 0x48) = 0;
      *(undefined2 *)(lVar5 + 0x5c) = 0;
      *(undefined1 *)(lVar5 + 0x5e) = 0;
      FUN_14099d680(param_1,*plVar1 + (longlong)iVar3 * 0x60);
      local_res8 = lVar4;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x33,&local_res8);
      iVar3 = FUN_14233f450(param_1);
      if (iVar3 < 3) {
        FUN_141311f40(param_1,lVar4);
      }
    }
  }
  FUN_14099cdb0(param_1);
  cVar2 = (**(code **)(*param_1 + 0x400))(param_1);
  if ((cVar2 != '\0') && (cVar2 = FUN_1409ace70(param_1), cVar2 == '\0')) {
    FUN_1409bc600(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1409b4530 FUN_1409b4530 body=113 status=ok
// SIG undefined FUN_1409b4530(void)

undefined1 FUN_1409b4530(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x250);
  if (lVar1 != 0) {
    if (param_2 == '\x01') {
      FUN_1409add40(lVar1,0);
      return 1;
    }
    if (param_2 == '\x02') {
      FUN_1409add40(lVar1,2);
      return 1;
    }
    if (param_2 == '\x03') {
      FUN_1409add40(lVar1,2);
      FUN_1409b7b10(*(undefined8 *)(param_1 + 0x250));
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1409b45b0 FUN_1409b45b0 body=120 status=ok
// SIG undefined FUN_1409b45b0(void)

void FUN_1409b45b0(longlong param_1,undefined8 param_2,float *param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x128);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xc98))(plVar1,param_3[1]);
    (**(code **)(*plVar1 + 0xca0))(plVar1,*param_3);
    if (*param_3 * *param_3 + param_3[1] * param_3[1] + param_3[2] * param_3[2] != 0.0) {
      FUN_140d032d0(plVar1);
    }
  }
  return;
}



// FUNCTION 1409b4630 FUN_1409b4630 body=245 status=ok
// SIG undefined FUN_1409b4630(void)

void FUN_1409b4630(longlong param_1,undefined8 param_2,float *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  
  if ((*(longlong *)(param_1 + 0x118) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x900), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 0x2650) = *(undefined8 *)param_3;
    *(float *)(lVar1 + 0x2658) = param_3[2];
  }
  if ((*(longlong *)(param_1 + 0x128) != 0) &&
     (fVar5 = *param_3 * *param_3 + param_3[1] * param_3[1] + param_3[2] * param_3[2], 0.0 < fVar5))
  {
    FUN_140d032d0();
    lVar1 = *(longlong *)(param_1 + 0x118);
    if (lVar1 != 0) {
      lVar4 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((((bVar2) && (0.64000005 <= fVar5)) && (cVar3 = FUN_140e27e00(lVar1), cVar3 != '\0')) &&
         (cVar3 = FUN_140e27b70(lVar1), cVar3 == '\0')) {
        FUN_140e26ad0(lVar1);
      }
    }
  }
  return;
}



// FUNCTION 1409b4730 FUN_1409b4730 body=349 status=ok
// SIG undefined FUN_1409b4730(void)

void FUN_1409b4730(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  lVar3 = (longlong)*(int *)(param_1 + 800);
  if (0 < *(int *)(param_1 + 800)) {
    lVar6 = *(longlong *)(param_1 + 0x318);
    uVar4 = 0;
    lVar1 = *(longlong *)(lVar6 + -0x10 + lVar3 * 0x10);
    *(undefined8 *)(lVar6 + -0x10 + lVar3 * 0x10) = 0;
    *(undefined8 *)(lVar6 + -8 + lVar3 * 0x10) = 0;
    iVar2 = *(int *)(param_1 + 800);
    lVar3 = (longlong)iVar2;
    lVar6 = lVar3 * 0x10 + -0x10;
    iVar5 = iVar2 + -1;
    if (*(longlong *)(lVar6 + *(longlong *)(param_1 + 0x318)) != 0) {
      FMemory::Free();
      iVar2 = *(int *)(param_1 + 800);
    }
    iVar5 = (iVar2 - iVar5) + -1;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar6 + *(longlong *)(param_1 + 0x318)),
                 (void *)(lVar3 * 0x10 + *(longlong *)(param_1 + 0x318)),(longlong)iVar5 << 4);
      iVar2 = *(int *)(param_1 + 800);
    }
    *(int *)(param_1 + 800) = iVar2 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x318);
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
    iVar2 = *(int *)(param_1 + 800);
    if (((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x2c8))) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2c0) + (longlong)iVar2 * 8), lVar3 != 0)) {
      (**(code **)(*(longlong *)(lVar3 + 0x148) + 0x38))();
    }
    if ((-1 < iVar2 + -1) && (iVar2 + -1 < *(int *)(param_1 + 0x2c8))) {
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x2c0) + -8 + (longlong)iVar2 * 8);
    }
    FUN_1409ba8b0(param_1,uVar4);
  }
  return;
}



// FUNCTION 1409b4890 FUN_1409b4890 body=518 status=ok
// SIG undefined FUN_1409b4890(void)

void FUN_1409b4890(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  
  if (param_2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x310);
    while (lVar4 != 0) {
      iVar8 = 0;
      iVar3 = (**(code **)(*(longlong *)(lVar4 + 0x148) + 0x20))();
      if (0 < iVar3) {
        do {
          plVar5 = (longlong *)(*(longlong *)(param_1 + 0x310) + 0x148);
          lVar4 = (**(code **)(*plVar5 + 0x40))(plVar5,iVar8);
          if (lVar4 == param_2) {
            return;
          }
          iVar8 = iVar8 + 1;
          iVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x310) + 0x148) + 0x20))();
        } while (iVar8 < iVar3);
      }
      lVar6 = (longlong)*(int *)(param_1 + 800);
      lVar1 = *(longlong *)(param_1 + 0x310);
      lVar4 = lVar1;
      if (0 < *(int *)(param_1 + 800)) {
        lVar4 = *(longlong *)(param_1 + 0x318);
        lVar2 = *(longlong *)(lVar4 + -0x10 + lVar6 * 0x10);
        *(undefined8 *)(lVar4 + -0x10 + lVar6 * 0x10) = 0;
        *(undefined8 *)(lVar4 + -8 + lVar6 * 0x10) = 0;
        iVar3 = *(int *)(param_1 + 800);
        lVar6 = (longlong)iVar3;
        lVar4 = lVar6 * 0x10 + -0x10;
        iVar8 = iVar3 + -1;
        if (*(longlong *)(*(longlong *)(param_1 + 0x318) + lVar4) != 0) {
          FMemory::Free();
          iVar3 = *(int *)(param_1 + 800);
        }
        iVar8 = (iVar3 - iVar8) + -1;
        if (iVar8 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x318) + lVar4),
                     (void *)(lVar6 * 0x10 + *(longlong *)(param_1 + 0x318)),(longlong)iVar8 << 4);
          iVar3 = *(int *)(param_1 + 800);
        }
        *(int *)(param_1 + 800) = iVar3 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x318);
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
        iVar3 = *(int *)(param_1 + 800);
        if (((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x2c8))) &&
           (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2c0) + (longlong)iVar3 * 8), lVar4 != 0)
           ) {
          (**(code **)(*(longlong *)(lVar4 + 0x148) + 0x38))();
        }
        if ((iVar3 + -1 < 0) || (*(int *)(param_1 + 0x2c8) <= iVar3 + -1)) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x2c0) + -8 + (longlong)iVar3 * 8);
        }
        FUN_1409ba8b0(param_1,uVar7);
        lVar4 = *(longlong *)(param_1 + 0x310);
      }
      if (lVar4 == lVar1) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 1409b4aa0 FUN_1409b4aa0 body=486 status=ok
// SIG undefined FUN_1409b4aa0(void)

void FUN_1409b4aa0(longlong *param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  if (param_2 != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x148) + 0x38))(param_2 + 0x148);
    puVar3 = (undefined4 *)*param_3;
    uVar9 = 0;
    iVar2 = *(int *)(param_3 + 1);
    if (puVar3 != puVar3 + (longlong)iVar2 * 5) {
      puVar10 = puVar3 + 4;
      do {
        local_48 = 0;
        local_50 = param_2;
        uVar5 = FUN_142f2b0d0();
        local_48 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar5);
        uVar5 = (**(code **)(*param_1 + 0x2a0))(param_1);
        lVar6 = FUN_142ee6de0(&local_50,uVar5);
        if (lVar6 != 0) {
          lVar7 = UUGStartScreenUW::GetPrivateStaticClass();
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
            *(undefined4 *)(lVar6 + 0x2e8) = puVar10[-4];
            *(undefined4 *)(lVar6 + 0x2ec) = puVar10[-3];
            *(undefined4 *)(lVar6 + 0x2f0) = puVar10[-2];
            *(undefined4 *)(lVar6 + 0x2f4) = puVar10[-1];
            *(undefined4 *)(lVar6 + 0x2f8) = *puVar10;
            if (((param_1[0x61] != 0) && (lVar7 = FWeakObjectPtr::Get(param_1 + 0x60), lVar7 != 0))
               && (lVar7 = UObject::FindFunction(lVar7,param_1[0x61]), lVar7 != 0)) {
              local_58 = lVar6;
              plVar8 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x60);
              uVar5 = FUN_14178ac60(plVar8,param_1[0x61]);
              (**(code **)(*plVar8 + 0x208))(plVar8,uVar5,&local_58);
            }
          }
        }
        puVar1 = puVar10 + 1;
        puVar10 = puVar10 + 5;
      } while (puVar1 != puVar3 + (longlong)iVar2 * 5);
    }
    if (param_4 != 0) {
      uVar9 = *(undefined4 *)(param_4 + 0x2e0);
    }
    (**(code **)(*(longlong *)(param_2 + 0x148) + 0x18))(param_2 + 0x148,uVar9,1,0);
  }
  return;
}



// FUNCTION 1409b4c90 FUN_1409b4c90 body=1066 status=ok
// SIG undefined FUN_1409b4c90(void)

void FUN_1409b4c90(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  if (*(char *)(param_1 + 0x651) != '\0') {
    FUN_14099b910(param_2,param_1 + 0x658);
    return;
  }
  local_8c = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_14099b6f0(param_2,local_90);
  FUN_14099a9b0(&local_58);
  FUN_14099aa40(&local_68);
  TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>(&local_78);
  FUN_14099a950(&local_88);
  lVar9 = *(longlong *)(param_1 + 0x478);
  lVar15 = (longlong)*(int *)(param_1 + 0x480) * 0x20 + lVar9;
  for (; lVar9 != lVar15; lVar9 = lVar9 + 0x20) {
    if ((*(longlong *)(lVar9 + 0x10) != 0) && (*(longlong *)(lVar9 + 0x18) != 0)) {
      lVar8 = FUN_14144bcb0();
      for (lVar5 = *(longlong *)(lVar9 + 0x18); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar8) {
          iVar4 = param_2[8];
          uVar6 = *(undefined8 *)(lVar9 + 0x10);
          param_2[8] = iVar4 + 1;
          if ((int)param_2[9] < iVar4 + 1) {
            TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_2 + 6,iVar4);
          }
          FUN_140d1f8b0((longlong)iVar4 * 0x50 + *(longlong *)(param_2 + 6),uVar6,lVar9 + 0x18);
          break;
        }
      }
    }
  }
  lVar15 = *(longlong *)(param_1 + 0x540);
  lVar9 = lVar15 + (longlong)*(int *)(param_1 + 0x548) * 0x28;
  for (; lVar15 != lVar9; lVar15 = lVar15 + 0x28) {
    if (*(longlong *)(lVar15 + 0x10) != 0) {
      lVar8 = UUGLoadoutBarUW::GetPrivateStaticClass();
      for (lVar5 = *(longlong *)(lVar15 + 0x10); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar8) {
          lVar5 = *(longlong *)(lVar15 + 0x18);
          if ((lVar5 != 0) && (lVar8 = *(longlong *)(lVar15 + 0x20), lVar8 != 0)) {
            iVar4 = param_2[0xc];
            param_2[0xc] = iVar4 + 1;
            if ((int)param_2[0xd] < iVar4 + 1) {
              TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::
              ResizeGrow(param_2 + 10,iVar4);
            }
            FUN_140d20360((longlong)iVar4 * 0x78 + *(longlong *)(param_2 + 10),lVar15 + 0x10,lVar5,
                          lVar8);
          }
          break;
        }
      }
    }
  }
  plVar1 = (longlong *)(param_2 + 0xe);
  FUN_1409a50e0(plVar1,0);
  plVar13 = *(longlong **)(param_1 + 0x630);
  plVar10 = plVar13 + (longlong)*(int *)(param_1 + 0x638) * 4;
  do {
    if (plVar13 == plVar10) {
      lVar9 = *(longlong *)(param_1 + 0x3b0);
      if (lVar9 != 0) {
        *param_2 = *(undefined4 *)(lVar9 + 0x17c);
        param_2[1] = *(undefined4 *)(lVar9 + 0x160);
        lVar15 = *(longlong *)(lVar9 + 0xb0);
        lVar9 = (longlong)*(int *)(lVar9 + 0xb8) * 0x30 + lVar15;
        for (; lVar15 != lVar9; lVar15 = lVar15 + 0x30) {
          if (*(longlong *)(lVar15 + 8) != 0) {
            uVar3 = *(undefined4 *)(lVar15 + 0x28);
            iVar4 = param_2[4];
            param_2[4] = iVar4 + 1;
            if ((int)param_2[5] < iVar4 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
              ResizeGrow(param_2 + 2,iVar4);
            }
            FUN_140d1fc10((longlong)iVar4 * 0x38 + *(longlong *)(param_2 + 2),
                          *(undefined8 *)(lVar15 + 8),uVar3,*(undefined4 *)(lVar15 + 0x20));
          }
        }
      }
      return;
    }
    if (*plVar13 != 0) {
      lVar15 = UUGLoadoutBarUW::GetPrivateStaticClass();
      for (lVar9 = *plVar13; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
        if (lVar9 == lVar15) {
          if ((*plVar13 != 0) && (plVar13[1] != 0)) {
            plVar11 = (longlong *)plVar13[2];
            plVar2 = plVar11 + (longlong)(int)plVar13[3] * 3;
            for (; plVar11 != plVar2; plVar11 = plVar11 + 3) {
              if (*plVar11 != 0) {
                puVar12 = (undefined8 *)plVar11[1];
                puVar14 = puVar12 + (longlong)(int)plVar11[2] * 2;
                for (; puVar12 != puVar14; puVar12 = puVar12 + 2) {
                  iVar4 = param_2[0x10];
                  uVar6 = puVar12[1];
                  uVar7 = *puVar12;
                  lVar9 = *plVar11;
                  param_2[0x10] = iVar4 + 1;
                  if ((int)param_2[0x11] < iVar4 + 1) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>
                    ::ResizeGrow(plVar1,iVar4);
                  }
                  FUN_140d1fe00((longlong)iVar4 * 0xa0 + *plVar1,plVar13,lVar9,uVar7,uVar6);
                }
              }
            }
          }
          break;
        }
      }
    }
    plVar13 = plVar13 + 4;
  } while( true );
}



// FUNCTION 1409b50c0 FUN_1409b50c0 body=126 status=ok
// SIG undefined FUN_1409b50c0(void)

void FUN_1409b50c0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xb0);
  lVar3 = (longlong)*(int *)(param_1 + 0xb8) * 0x30 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x30) {
    if (*(longlong *)(lVar2 + 8) != 0) {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + 8);
    }
  }
  return;
}



// FUNCTION 1409b5140 FUN_1409b5140 body=302 status=ok
// SIG undefined FUN_1409b5140(void)

void FUN_1409b5140(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  FUN_1422383f0();
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) == DAT_146864b88)) {
    plVar1 = (longlong *)(param_1 + 0x6f0);
    *(undefined4 *)(param_1 + 0x6f8) = 0;
    if (*(int *)(param_1 + 0x6fc) < 6) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar1,6);
    }
    iVar2 = *(int *)(param_1 + 0x6f8);
    *(int *)(param_1 + 0x6f8) = iVar2 + 1;
    if (*(int *)(param_1 + 0x6fc) < iVar2 + 1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(undefined1 *)((longlong)iVar2 + *plVar1) = 2;
    iVar2 = *(int *)(param_1 + 0x6f8);
    *(int *)(param_1 + 0x6f8) = iVar2 + 1;
    if (*(int *)(param_1 + 0x6fc) < iVar2 + 1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(undefined1 *)((longlong)iVar2 + *plVar1) = 5;
    iVar2 = *(int *)(param_1 + 0x6f8);
    *(int *)(param_1 + 0x6f8) = iVar2 + 1;
    if (*(int *)(param_1 + 0x6fc) < iVar2 + 1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(undefined1 *)((longlong)iVar2 + *plVar1) = 7;
    iVar2 = *(int *)(param_1 + 0x6f8);
    *(int *)(param_1 + 0x6f8) = iVar2 + 1;
    if (*(int *)(param_1 + 0x6fc) < iVar2 + 1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(undefined1 *)((longlong)iVar2 + *plVar1) = 6;
    iVar2 = *(int *)(param_1 + 0x6f8);
    *(int *)(param_1 + 0x6f8) = iVar2 + 1;
    if (*(int *)(param_1 + 0x6fc) < iVar2 + 1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(undefined1 *)((longlong)iVar2 + *plVar1) = 0xe;
    iVar2 = *(int *)(param_1 + 0x6f8);
    *(int *)(param_1 + 0x6f8) = iVar2 + 1;
    if (*(int *)(param_1 + 0x6fc) < iVar2 + 1) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *(undefined1 *)((longlong)iVar2 + *plVar1) = 0x18;
    *(undefined1 *)(param_1 + 0x6ed) = 0;
  }
  return;
}



// FUNCTION 1409b5270 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  FUN_1409af650(param_2,param_1);
  return;
}



// FUNCTION 1409b5280 thunk_FUN_1409b41e0 body=5 status=ok
// SIG undefined thunk_FUN_1409b41e0(void)

void thunk_FUN_1409b41e0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((0 < *(int *)(param_1 + 0x28)) || (0.0 < (float)*(int *)(param_1 + 0x2c))) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  if (*(char *)(param_1 + 0x30) != cVar1) {
    *(char *)(param_1 + 0x30) = cVar1;
    lVar2 = *(longlong *)(param_2 + 0xb0);
    if (lVar2 != 0) {
      if (cVar1 == '\0') {
        lVar2 = lVar2 + 0x2f0;
      }
      else {
        lVar2 = lVar2 + 0x2d8;
      }
      TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
                (lVar2,param_2,param_1);
    }
  }
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
              (*(longlong *)(param_2 + 0xb0) + 0x308,param_2,param_1);
  }
  return;
}



// FUNCTION 1409b5290 FUN_1409b5290 body=50 status=ok
// SIG undefined FUN_1409b5290(void)

void FUN_1409b5290(longlong param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    local_res10[0] = *(undefined8 *)(param_1 + 0x10);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (*(longlong *)(param_2 + 0xb0) + 0x2a8,local_res10);
  }
  return;
}



// FUNCTION 1409b52d0 FUN_1409b52d0 body=38 status=ok
// SIG undefined FUN_1409b52d0(void)

void FUN_1409b52d0(longlong param_1,longlong param_2)

{
  if (*(char *)(param_1 + 0x30) != '\0') {
    *(undefined1 *)(param_1 + 0x30) = 0;
    if (*(longlong *)(param_2 + 0xb0) != 0) {
      TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
                (*(longlong *)(param_2 + 0xb0) + 0x2f0,param_2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1409b5310 FUN_1409b5310 body=173 status=ok
// SIG undefined FUN_1409b5310(void)

void FUN_1409b5310(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_1409b4890();
  iVar1 = *(int *)(param_1 + 800);
  if (iVar1 <= *(int *)(param_1 + 0x2c8)) {
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x2c8) <= iVar1)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x2c0) + (longlong)iVar1 * 8);
    }
    FUN_1409b4aa0(param_1,uVar2,param_3,0);
    FUN_1409ba8b0(param_1,uVar2);
    iVar1 = *(int *)(param_1 + 800);
    *(int *)(param_1 + 800) = iVar1 + 1;
    if (*(int *)(param_1 + 0x324) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x318,iVar1);
    }
    FUN_140998ff0((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x318),param_3);
  }
  return;
}



// FUNCTION 1409b53c0 FUN_1409b53c0 body=831 status=ok
// SIG undefined FUN_1409b53c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1409b53c0(undefined8 *param_1,longlong *param_2,char *param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  float local_74;
  longlong local_70;
  int local_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 != (longlong *)0x0) && (lVar8 = (**(code **)(*param_2 + 0x148))(param_2), lVar8 != 0)
     ) {
    lVar9 = param_2[0x2d];
    if (lVar9 == 0) {
      local_88 = _DAT_1468b5d90;
      local_80 = DAT_1468b5d98;
    }
    else {
      local_88 = *(undefined8 *)(lVar9 + 0x220);
      local_80 = *(float *)(lVar9 + 0x228);
    }
    local_98 = local_88;
    local_90 = local_80;
    UWorld::GetPlayerControllerIterator(lVar8,&local_70);
    fVar6 = local_90;
    fVar5 = local_98._4_4_;
    fVar4 = (float)local_98;
    while( true ) {
      if ((local_68 < 0) || (*(int *)(local_70 + 8) <= local_68)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) break;
      lVar8 = FWeakObjectPtr::Get();
      if (lVar8 != 0) {
        lVar9 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (plVar2 = *(longlong **)(lVar8 + 0x848), plVar2 != (longlong *)0x0)) {
          lVar8 = FUN_1413ffe00();
          if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            if (plVar2 == param_2) {
LAB_1409b562a:
              bVar3 = true;
            }
            else {
              if (*param_3 == '\0') {
                lVar8 = plVar2[0x2d];
                if (lVar8 == 0) {
                  local_90 = DAT_1468b5d98;
                  puVar10 = &local_98;
                  local_98 = _DAT_1468b5d90;
                }
                else {
                  puVar10 = &local_88;
                  local_80 = *(float *)(lVar8 + 0x228);
                  local_88 = *(undefined8 *)(lVar8 + 0x220);
                }
                local_74 = *(float *)(puVar10 + 1);
                fVar12 = fVar4 - (float)*puVar10;
                fVar13 = fVar5 - (float)((ulonglong)*puVar10 >> 0x20);
                fVar12 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 +
                              (fVar6 - local_74) * (fVar6 - local_74));
                if (fVar12 < *(float *)(param_3 + 4) || fVar12 == *(float *)(param_3 + 4))
                goto LAB_1409b5614;
              }
              else {
LAB_1409b5614:
                cVar7 = FUN_14099da90(param_1,param_2,plVar2);
                if (cVar7 != '\0') goto LAB_1409b562a;
              }
              bVar3 = false;
            }
            if ((param_3[8] != '\0') && (bVar3)) {
              lVar9 = plVar2[0x588];
              lVar8 = lVar9 + (longlong)(int)plVar2[0x589] * 0xc;
              for (; lVar9 != lVar8; lVar9 = lVar9 + 0xc) {
                cVar7 = FWeakObjectPtr::IsValid();
                if ((cVar7 != '\0') &&
                   ((param_3[9] == '\0' || ((*(byte *)(lVar9 + 8) & param_3[0xc]) == param_3[0xc])))
                   ) {
                  uVar11 = FWeakObjectPtr::Get(lVar9);
                  iVar1 = *(int *)(param_1 + 3);
                  *(int *)(param_1 + 3) = iVar1 + 1;
                  if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (param_1 + 2,iVar1);
                  }
                  *(undefined8 *)(param_1[2] + (longlong)iVar1 * 8) = uVar11;
                }
              }
            }
          }
        }
      }
      local_68 = local_68 + 1;
    }
  }
  return param_1;
}



// FUNCTION 1409b5700 FUN_1409b5700 body=122 status=ok
// SIG undefined FUN_1409b5700(void)

void FUN_1409b5700(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  
  FUN_14099de30(param_1 + 0x628);
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 == 3) {
    FUN_141455ea0(param_1,*param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 1409b5780 FUN_1409b5780 body=95 status=ok
// SIG undefined FUN_1409b5780(void)

undefined1 FUN_1409b5780(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  cVar1 = FUN_142d52a00(param_2);
  if (cVar1 != '\0') {
    local_28 = *(undefined8 *)(param_2 + 4);
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    FUN_142d6c7b0(&local_38,param_3,0x3f800000);
    return 1;
  }
  return 0;
}



// FUNCTION 1409b57e0 FUN_1409b57e0 body=374 status=ok
// SIG undefined FUN_1409b57e0(void)

void FUN_1409b57e0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong local_res10;
  
  plVar10 = *(longlong **)(param_1 + 0x2c0);
  plVar1 = plVar10 + *(int *)(param_1 + 0x2c8);
  do {
    if (plVar10 == plVar1) {
      return;
    }
    if (*plVar10 != 0) {
      plVar8 = (longlong *)(*plVar10 + 0x148);
      iVar9 = 0;
      iVar3 = (**(code **)(*plVar8 + 0x20))(plVar8);
      if (0 < iVar3) {
        do {
          lVar4 = (**(code **)(*plVar8 + 0x40))(plVar8,iVar9);
          if (lVar4 == 0) {
LAB_1409b58a6:
            lVar4 = 0;
          }
          else {
            lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_1409b58a6;
          }
          if (((*(longlong *)(param_1 + 0x308) != 0) &&
              (lVar5 = FWeakObjectPtr::Get(param_1 + 0x300), lVar5 != 0)) &&
             (lVar5 = UObject::FindFunction(lVar5,*(undefined8 *)(param_1 + 0x308)), lVar5 != 0)) {
            local_res10 = lVar4;
            plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x300);
            uVar7 = FUN_14178ac60(plVar6,*(undefined8 *)(param_1 + 0x308));
            (**(code **)(*plVar6 + 0x208))(plVar6,uVar7,&local_res10);
          }
          iVar9 = iVar9 + 1;
          iVar3 = (**(code **)(*plVar8 + 0x20))(plVar8);
        } while (iVar9 < iVar3);
      }
    }
    plVar10 = plVar10 + 1;
  } while( true );
}



// FUNCTION 1409b5960 FUN_1409b5960 body=412 status=ok
// SIG undefined FUN_1409b5960(void)

void FUN_1409b5960(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_18;
  undefined1 local_10;
  
  lVar7 = *(longlong *)(param_2 + 8);
  if (lVar7 != 0) {
    lVar5 = FUN_14144ee20();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1409b59b6;
  }
  lVar7 = 0;
LAB_1409b59b6:
  if (((((*(longlong *)(param_1 + 0x78) == 0) || (iVar4 = FUN_14233f450(), iVar4 == 3)) &&
       (cVar3 = FUN_1409a1f10(param_2), cVar3 != '\0')) &&
      ((lVar7 != 0 && (*(longlong *)(lVar7 + 0x88) != 0)))) && (*(longlong *)(param_1 + 0x80) != 0))
  {
    lVar6 = UUGLoadoutBarUW::GetPrivateStaticClass();
    lVar7 = *(longlong *)(param_1 + 0x80);
    lVar5 = lVar7;
    if (lVar7 != 0) {
      while (lVar5 != lVar6) {
        plVar1 = (longlong *)(lVar5 + 0x30);
        lVar5 = *plVar1;
        if (*plVar1 == 0) {
          return;
        }
      }
      if (((lVar7 != 0) && (*(longlong *)(param_1 + 0x78) != 0)) &&
         (iVar4 = FUN_14233f450(), iVar4 == 3)) {
        if (*(longlong *)(param_1 + 0x80) != 0) {
          lVar5 = UUGLoadoutBarUW::GetPrivateStaticClass();
          for (lVar7 = *(longlong *)(param_1 + 0x80); (lVar7 != 0 && (lVar7 != lVar5));
              lVar7 = *(longlong *)(lVar7 + 0x30)) {
          }
        }
        cVar3 = FUN_1430ecc40(*(undefined8 *)(param_1 + 0x78));
        if (cVar3 == '\0') {
          local_18 = 0;
          if (*(longlong *)(param_1 + 0x80) != 0) {
            lVar5 = UUGLoadoutBarUW::GetPrivateStaticClass();
            local_18 = *(longlong *)(param_1 + 0x80);
            for (lVar7 = local_18; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
              if (lVar7 == lVar5) goto LAB_1409b5ad4;
            }
          }
          local_18 = 0;
LAB_1409b5ad4:
          local_10 = 2;
          FUN_1430ea410(*(undefined8 *)(param_1 + 0x78),&local_18);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409b5b00 FUN_1409b5b00 body=701 status=ok
// SIG undefined FUN_1409b5b00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409b5b00(longlong *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  float *pfVar4;
  longlong lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined8 *local_1f0;
  undefined *local_1e8;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1c8;
  float fStack_1c4;
  float local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [12];
  float local_16c;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_10c [8];
  undefined1 local_104 [28];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined1 local_d2;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  longlong local_a0;
  undefined8 local_98;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_68;
  
  uVar2 = DAT_1468b5da8;
  uVar1 = DAT_1468b5da0;
  uVar6 = DAT_1468b5d98;
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  uVar10 = (undefined4)_DAT_1468b5d90;
  uVar11 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
  (**(code **)(*param_1 + 0x648))(param_1,&local_1d8,local_188);
  fVar7 = (float)FUN_142c98860(param_1 + 0x9b,param_1);
  pfVar4 = (float *)FRotator::Vector(local_188,&local_1a8);
  fVar8 = fVar7 * *pfVar4 + local_1d8;
  fVar9 = pfVar4[1] * fVar7 + local_1d4;
  fVar7 = pfVar4[2] * fVar7 + local_1d0;
  local_1c0 = fVar7;
  local_1c8 = fVar8;
  fStack_1c4 = fVar9;
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar5 != 0) {
    local_e0 = 0;
    local_e8 = 0;
    local_c8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_80 = 0;
    local_78 = 0;
    local_d8 = 0x10000;
    local_d0 = 0;
    local_1b8 = 0;
    local_d4 = 0;
    local_c4 = 0x101;
    local_cc = 0;
    local_d2 = 0;
    FCollisionQueryParams::AddIgnoredActor(&local_e8,param_1[0x23]);
    FUN_140a63ba0(param_1);
    FCollisionQueryParams::AddIgnoredActor(&local_e8);
    _guard_xfg_dispatch_icall_nop(local_178,0,0x90);
    local_1e8 = &DAT_146aefe68;
    local_1f0 = &local_e8;
    local_16c = 1.0;
    local_1f8 = CONCAT44(local_1f8._4_4_,2);
    cVar3 = UWorld::LineTraceSingleByChannel(lVar5,local_178,&local_1d8,&local_1c8);
    if (cVar3 != '\0') {
      FWeakObjectPtr::Get(local_10c);
      fVar8 = (local_1c8 - local_1d8) * local_16c + local_1d8;
      fVar7 = (local_1c0 - local_1d0) * local_16c + local_1d0;
      fVar9 = (fStack_1c4 - local_1d4) * local_16c + local_1d4;
      local_1a0 = fVar7;
      FWeakObjectPtr::Get(local_104);
      uVar10 = (undefined4)local_140;
      uVar11 = (undefined4)((ulonglong)local_140 >> 0x20);
      uVar6 = local_138;
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
    if (local_a0 != 0) {
      FMemory::Free();
    }
  }
  local_1f0 = &local_1b8;
  local_1b8 = CONCAT44(uVar11,uVar10);
  local_1f8 = 0;
  local_198 = uVar1;
  local_190 = uVar2;
  local_1a8 = CONCAT44(fVar9,fVar8);
  local_1b0 = uVar6;
  local_1a0 = fVar7;
  FUN_140a783e0(param_1,0,&local_1a8,&local_198);
  return;
}



// FUNCTION 1409b5dc0 FUN_1409b5dc0 body=357 status=ok
// SIG undefined FUN_1409b5dc0(void)

void FUN_1409b5dc0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_18;
  undefined1 local_10;
  
  if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x290))();
    if (cVar2 == '\x01') {
      lVar7 = *(longlong *)(param_2 + 8);
      if (lVar7 != 0) {
        lVar4 = FUN_14144ecc0();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (*(longlong *)(lVar7 + 0x88) != 0)) {
          lVar5 = FUN_14144bcb0();
          lVar7 = *(longlong *)(lVar7 + 0x88);
          for (lVar4 = lVar7; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
            if (lVar4 == lVar5) goto LAB_1409b5e81;
          }
        }
      }
      lVar7 = 0;
LAB_1409b5e81:
      if (((*(longlong *)(param_1 + 0x78) != 0) && (iVar3 = FUN_14233f450(), iVar3 == 3)) &&
         (lVar7 != 0)) {
        cVar2 = FUN_1409a1f10(param_2);
        if (cVar2 != '\0') {
          plVar6 = (longlong *)FUN_1430ec580();
          if (plVar6 == (longlong *)0x0) {
            local_10 = 2;
            local_18 = lVar7;
            plVar6 = (longlong *)FUN_1430ea410(*(undefined8 *)(param_1 + 0x78),&local_18);
            if (plVar6 == (longlong *)0x0) {
              return;
            }
          }
          (**(code **)(*plVar6 + 0x2f0))(plVar6,*(int *)(param_2 + 0x2c) + *(int *)(param_2 + 0x28))
          ;
          return;
        }
        cVar2 = FUN_1430ecc40(*(undefined8 *)(param_1 + 0x78),lVar7);
        if (cVar2 != '\0') {
          FUN_1430ede10(*(undefined8 *)(param_1 + 0x78),lVar7);
        }
      }
    }
    else if (cVar2 == '\x02') {
      FUN_1409b5960(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1409b5f30 FUN_1409b5f30 body=137 status=ok
// SIG undefined FUN_1409b5f30(void)

void FUN_1409b5f30(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_28 = *param_3;
  local_24 = param_3[1];
  local_20 = param_3[2];
  local_1c = param_3[3];
  local_18 = param_3[4];
  local_14 = param_3[5];
  local_10 = param_3[6];
  local_c = param_3[7];
  FUN_142f052f0(param_1,param_2,&local_28);
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x9c);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x9c);
    FUN_142eea2b0(uVar2,*(undefined8 *)(param_1 + -0x68));
  }
  return;
}



// FUNCTION 1409b5fc0 FUN_1409b5fc0 body=1457 status=ok
// SIG undefined FUN_1409b5fc0(void)

void FUN_1409b5fc0(undefined8 param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  undefined4 *puVar15;
  int *piVar16;
  bool bVar17;
  undefined8 local_res10;
  ulonglong local_res18 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  
  plVar9 = (longlong *)FUN_140a63ba0();
  if (plVar9 != (longlong *)0x0) {
    uVar10 = AGFireballProjectile::GetPrivateStaticClass();
    lVar11 = (**(code **)(*plVar9 + 0x628))(plVar9,uVar10);
    if ((lVar11 != 0) && (lVar11 = *(longlong *)(lVar11 + 0x3b8), lVar11 != 0)) {
      lVar12 = FUN_141448ac0();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if (bVar17) {
        uStack_40 = uStack_40 & 0xffffffff00000000;
        local_48 = &LAB_1409b1320;
        plVar1 = (longlong *)(lVar11 + 0x58);
        plVar13 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar13 != (longlong *)0x0) {
          *plVar13 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar13 + 1,param_1);
          *(int *)(plVar13 + 2) = (int)local_48;
          *(int *)((longlong)plVar13 + 0x14) = local_48._4_4_;
          *(undefined4 *)(plVar13 + 3) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_40._4_4_;
          lVar12 = FDelegateHandle::GenerateNewID();
          plVar13[5] = lVar12;
          *plVar13 = (longlong)&PTR_FUN_143f77bd0;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_res10);
          iVar2 = *(int *)(lVar11 + 0x60);
          *(int *)(lVar11 + 0x60) = iVar2 + 1;
          if (*(int *)(lVar11 + 100) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
          }
          lVar11 = *plVar1;
          *(longlong **)(lVar11 + (longlong)iVar2 * 0x10) = plVar13;
          *(undefined4 *)(lVar11 + 8 + (longlong)iVar2 * 0x10) = 3;
        }
      }
    }
  }
  lVar11 = FUN_1414a2bb0(param_1);
  if (lVar11 != 0) {
    pwVar14 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnActorEnteredSphere",L"::");
    pwVar6 = (wchar_t *)0x0;
    while (pwVar5 = pwVar14, pwVar5 != (wchar_t *)0x0) {
      pwVar14 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar6 = pwVar5;
    }
    FName::FName(local_res18,pwVar6 + 2,1);
    uVar7 = local_res18[0];
    plVar1 = (longlong *)(lVar11 + 0x570);
    FWeakObjectPtr::operator=(&local_48,0);
    uStack_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1);
    uStack_40 = uVar7;
    local_res10 = 0;
    if ((uVar7 != 0) && (lVar12 = FWeakObjectPtr::Get(&local_48), lVar12 != 0)) {
      UObject::FindFunction(lVar12,uStack_40);
    }
    piVar3 = (int *)*plVar1;
    iVar2 = *(int *)(lVar11 + 0x578);
    for (piVar16 = piVar3; piVar16 != piVar3 + (longlong)iVar2 * 4; piVar16 = piVar16 + 4) {
      if (((*piVar16 == (int)local_48) &&
          (local_48._4_4_ = (int)((ulonglong)local_48 >> 0x20),
          bVar17 = piVar16[1] == local_48._4_4_, bVar17)) ||
         ((cVar8 = FWeakObjectPtr::IsValid(piVar16), cVar8 == '\0' &&
          (cVar8 = FWeakObjectPtr::IsValid(&local_48), cVar8 == '\0')))) {
        bVar17 = true;
      }
      else {
        bVar17 = false;
      }
      if ((bVar17) && (*(ulonglong *)(piVar16 + 2) == uStack_40)) {
        bVar17 = true;
      }
      else {
        bVar17 = false;
      }
      if (bVar17) {
        if ((int)((longlong)piVar16 - (longlong)piVar3 >> 4) != -1) goto LAB_1409b6257;
        break;
      }
    }
    iVar2 = *(int *)(lVar11 + 0x578);
    lVar12 = (longlong)iVar2;
    *(int *)(lVar11 + 0x578) = iVar2 + 1;
    if (*(int *)(lVar11 + 0x57c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    lVar4 = *plVar1;
    *(int *)(lVar4 + lVar12 * 0x10) = (int)local_48;
    *(int *)(lVar4 + 4 + lVar12 * 0x10) = local_48._4_4_;
    *(ulonglong *)(lVar4 + 8 + lVar12 * 0x10) = uStack_40;
LAB_1409b6257:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    pwVar14 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnActorExitedSphere",L"::");
    pwVar6 = (wchar_t *)0x0;
    while (pwVar5 = pwVar14, pwVar5 != (wchar_t *)0x0) {
      pwVar14 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar6 = pwVar5;
    }
    FName::FName(local_res18,pwVar6 + 2,1);
    uVar7 = local_res18[0];
    plVar1 = (longlong *)(lVar11 + 0x580);
    FWeakObjectPtr::operator=(&local_48,0);
    uStack_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1);
    uStack_40 = uVar7;
    local_res10 = 0;
    if ((uVar7 != 0) && (lVar12 = FWeakObjectPtr::Get(&local_48), lVar12 != 0)) {
      UObject::FindFunction(lVar12,uStack_40);
    }
    piVar3 = (int *)*plVar1;
    iVar2 = *(int *)(lVar11 + 0x588);
    for (piVar16 = piVar3; piVar16 != piVar3 + (longlong)iVar2 * 4; piVar16 = piVar16 + 4) {
      if (((*piVar16 == (int)local_48) &&
          (local_48._4_4_ = (int)((ulonglong)local_48 >> 0x20),
          bVar17 = piVar16[1] == local_48._4_4_, bVar17)) ||
         ((cVar8 = FWeakObjectPtr::IsValid(piVar16), cVar8 == '\0' &&
          (cVar8 = FWeakObjectPtr::IsValid(&local_48), cVar8 == '\0')))) {
        bVar17 = true;
      }
      else {
        bVar17 = false;
      }
      if ((bVar17) && (*(ulonglong *)(piVar16 + 2) == uStack_40)) {
        bVar17 = true;
      }
      else {
        bVar17 = false;
      }
      if (bVar17) {
        if ((int)((longlong)piVar16 - (longlong)piVar3 >> 4) != -1) goto LAB_1409b63a7;
        break;
      }
    }
    iVar2 = *(int *)(lVar11 + 0x588);
    lVar12 = (longlong)iVar2;
    *(int *)(lVar11 + 0x588) = iVar2 + 1;
    if (*(int *)(lVar11 + 0x58c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    lVar11 = *plVar1;
    *(int *)(lVar11 + lVar12 * 0x10) = (int)local_48;
    *(int *)(lVar11 + 4 + lVar12 * 0x10) = local_48._4_4_;
    *(ulonglong *)(lVar11 + 8 + lVar12 * 0x10) = uStack_40;
LAB_1409b63a7:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  }
  if ((plVar9 != (longlong *)0x0) && (lVar11 = (**(code **)(*plVar9 + 0x668))(plVar9), lVar11 != 0))
  {
    lVar12 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) {
      pwVar14 = _guard_xfg_dispatch_icall_nop(L"&APetEnrageRift::OnCinematicModeChanged",L"::");
      pwVar6 = (wchar_t *)0x0;
      while (pwVar5 = pwVar14, pwVar5 != (wchar_t *)0x0) {
        pwVar14 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar6 = pwVar5;
      }
      FName::FName(local_res18,pwVar6 + 2,1);
      plVar9 = (longlong *)(lVar11 + 0x1b00);
      FWeakObjectPtr::operator=(&local_48,0);
      uStack_40 = 0;
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_res10 = 0;
      uStack_40 = local_res18[0];
      if ((local_res18[0] != 0) && (lVar12 = FWeakObjectPtr::Get(&local_48), lVar12 != 0)) {
        UObject::FindFunction(lVar12,uStack_40);
      }
      piVar3 = (int *)*plVar9;
      iVar2 = *(int *)(lVar11 + 0x1b08);
      for (piVar16 = piVar3; piVar16 != piVar3 + (longlong)iVar2 * 4; piVar16 = piVar16 + 4) {
        if (((*piVar16 == (int)local_48) &&
            (local_48._4_4_ = (int)((ulonglong)local_48 >> 0x20),
            bVar17 = piVar16[1] == local_48._4_4_, bVar17)) ||
           ((cVar8 = FWeakObjectPtr::IsValid(piVar16), cVar8 == '\0' &&
            (cVar8 = FWeakObjectPtr::IsValid(&local_48), cVar8 == '\0')))) {
          bVar17 = true;
        }
        else {
          bVar17 = false;
        }
        if ((bVar17) && (*(ulonglong *)(piVar16 + 2) == uStack_40)) {
          bVar17 = true;
        }
        else {
          bVar17 = false;
        }
        if (bVar17) {
          if ((int)((longlong)piVar16 - (longlong)piVar3 >> 4) != -1) goto LAB_1409b655a;
          break;
        }
      }
      iVar2 = *(int *)(lVar11 + 0x1b08);
      *(int *)(lVar11 + 0x1b08) = iVar2 + 1;
      if (*(int *)(lVar11 + 0x1b0c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar2);
      }
      puVar15 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar9);
      *puVar15 = (int)local_48;
      puVar15[1] = local_48._4_4_;
      *(ulonglong *)(puVar15 + 2) = uStack_40;
LAB_1409b655a:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
    }
  }
  return;
}



// FUNCTION 1409b6580 FUN_1409b6580 body=567 status=ok
// SIG undefined FUN_1409b6580(void)

void FUN_1409b6580(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 local_res10;
  longlong local_res18 [2];
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  
  if (param_2 != 0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnDigicloneDestroyed",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(local_res18,pwVar4 + 2,1);
    lVar6 = local_res18[0];
    plVar1 = (longlong *)(param_2 + 0x290);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = lVar6;
    local_res10 = 0;
    if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_38), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_30);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    iVar2 = *(int *)(param_2 + 0x298);
    *(int *)(param_2 + 0x298) = iVar2 + 1;
    if (*(int *)(param_2 + 0x29c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar7 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar7 = local_38;
    puVar7[1] = local_34;
    *(longlong *)(puVar7 + 2) = local_30;
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnDigicloneDead",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(local_res18,pwVar4 + 2,1);
    plVar1 = (longlong *)(param_2 + 0xf18);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_res10 = 0;
    local_30 = local_res18[0];
    if ((local_res18[0] != 0) && (lVar6 = FWeakObjectPtr::Get(&local_38), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_30);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    iVar2 = *(int *)(param_2 + 0xf20);
    *(int *)(param_2 + 0xf20) = iVar2 + 1;
    if (*(int *)(param_2 + 0xf24) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar7 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar7 = local_38;
    puVar7[1] = local_34;
    *(longlong *)(puVar7 + 2) = local_30;
    if (((*(byte *)(param_1 + 0x3b0) & 4) != 0) && (*(longlong *)(param_2 + 0x910) != 0)) {
      FUN_140998460(*(longlong *)(param_2 + 0x910) + 0x1e8,&local_res10,param_1,FUN_1409b03a0);
    }
    if (*(longlong *)(param_1 + 0x110) != 0) {
      FUN_140e16190(*(longlong *)(param_1 + 0x110),param_2,2);
    }
  }
  return;
}



// FUNCTION 1409b67c0 FUN_1409b67c0 body=545 status=ok
// SIG undefined FUN_1409b67c0(void)

void FUN_1409b67c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong local_res18 [2];
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x2470) != '\0')) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnIronCubDestroyed",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(local_res18,pwVar4 + 2,1);
    lVar6 = local_res18[0];
    plVar1 = (longlong *)(param_2 + 0x290);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = lVar6;
    if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_38), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_30);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    iVar2 = *(int *)(param_2 + 0x298);
    *(int *)(param_2 + 0x298) = iVar2 + 1;
    if (*(int *)(param_2 + 0x29c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar7 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar7 = local_38;
    puVar7[1] = local_34;
    *(longlong *)(puVar7 + 2) = local_30;
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnIronCubDead",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(local_res18,pwVar4 + 2,1);
    plVar1 = (longlong *)(param_2 + 0xf18);
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = local_res18[0];
    if ((local_res18[0] != 0) && (lVar6 = FWeakObjectPtr::Get(&local_38), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_30);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    iVar2 = *(int *)(param_2 + 0xf20);
    *(int *)(param_2 + 0xf20) = iVar2 + 1;
    if (*(int *)(param_2 + 0xf24) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar7 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar7 = local_38;
    puVar7[1] = local_34;
    *(longlong *)(puVar7 + 2) = local_30;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      FUN_140e16190(*(longlong *)(param_1 + 0x110),param_2,2);
    }
    FUN_1409a51f0(param_1,0);
  }
  return;
}



// FUNCTION 1409b69f0 FUN_1409b69f0 body=458 status=ok
// SIG undefined FUN_1409b69f0(void)

void FUN_1409b69f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  int *piVar9;
  int *piVar10;
  longlong *plVar11;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  lVar2 = *(longlong *)(param_1 + 0x2e0);
  if (lVar2 != 0) {
    lVar7 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTrackedTargetDied",L"::");
      pwVar5 = (wchar_t *)0x0;
      while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar5 = pwVar4;
      }
      FName::FName(&local_res10,pwVar5 + 2,1);
      plVar11 = (longlong *)(lVar2 + 0xf18);
      FWeakObjectPtr::operator=(&local_28,0);
      local_20 = 0;
      FWeakObjectPtr::operator=(&local_28,param_1);
      local_20 = local_res10;
      if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_20);
      }
      piVar9 = (int *)*plVar11;
      iVar1 = *(int *)(lVar2 + 0xf20);
      for (piVar10 = piVar9; piVar10 != piVar9 + (longlong)iVar1 * 4; piVar10 = piVar10 + 4) {
        if (((*piVar10 == local_28) && (piVar10[1] == local_24)) ||
           ((cVar6 = FWeakObjectPtr::IsValid(piVar10), cVar6 == '\0' &&
            (cVar6 = FWeakObjectPtr::IsValid(&local_28), cVar6 == '\0')))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((bVar3) && (*(longlong *)(piVar10 + 2) == local_20)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_1409b6ba1;
          break;
        }
      }
      iVar1 = *(int *)(lVar2 + 0xf20);
      *(int *)(lVar2 + 0xf20) = iVar1 + 1;
      if (*(int *)(lVar2 + 0xf24) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
      }
      piVar9 = (int *)((longlong)iVar1 * 0x10 + *plVar11);
      *piVar9 = local_28;
      piVar9[1] = local_24;
      *(longlong *)(piVar9 + 2) = local_20;
LAB_1409b6ba1:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
    }
  }
  return;
}



// FUNCTION 1409b6bc0 FUN_1409b6bc0 body=75 status=ok
// SIG undefined FUN_1409b6bc0(void)

void FUN_1409b6bc0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (param_2[1] != 0)) {
    lVar2 = 0;
    if (*(longlong *)(param_1 + 0x168) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x170);
    }
    if (lVar2 == 0) {
      *(longlong *)(param_1 + 0x168) = lVar1;
      lVar2 = param_2[1];
      *(longlong *)(param_1 + 0x170) = lVar2;
      if (lVar1 == 0) {
        lVar2 = 0;
      }
      FUN_14099dcd0(param_1,lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1409b6c10 FUN_1409b6c10 body=338 status=ok
// SIG undefined FUN_1409b6c10(void)

void FUN_1409b6c10(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = 0;
  lVar3 = lVar7;
  if (param_2 != 0) {
    uVar2 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    lVar3 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar2);
  }
  if (lVar3 != 0) {
    if (param_3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x618);
      lVar6 = (longlong)*(int *)(param_1 + 0x620) * 0x38 + lVar4;
      for (; lVar4 != lVar6; lVar4 = lVar4 + 0x38) {
        if (*(longlong *)(lVar4 + 0x20) == param_3) {
          if (lVar4 != 0) {
            return;
          }
          break;
        }
      }
    }
    iVar1 = *(int *)(param_1 + 0x620);
    *(int *)(param_1 + 0x620) = iVar1 + 1;
    if (*(int *)(param_1 + 0x624) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x618,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x38 + *(longlong *)(param_1 + 0x618));
    if (param_2 == 0) {
      lVar3 = lVar7;
    }
    *puVar5 = 0xffffffffffffffff;
    if (param_2 == 0) {
      lVar3 = lVar7;
    }
    *(undefined4 *)(puVar5 + 1) = 0xffffffff;
    puVar5[3] = lVar3;
    puVar5[2] = param_2;
    puVar5[4] = param_3;
    puVar5[5] = 0;
    *(undefined1 *)(puVar5 + 6) = 0;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
              (param_1 + 0x560);
    *(int *)(param_1 + 0x5b4) = *(int *)(param_1 + 0x5b4) + 1;
    if (*(int *)(param_1 + 0x5b4) == -1) {
      *(undefined4 *)(param_1 + 0x5b4) = 0;
    }
    *(undefined8 *)(param_1 + 0x608) = 0xffffffffffffffff;
    if (*(longlong **)(param_1 + 0x610) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x610) + 0x260))();
    }
  }
  return;
}



// FUNCTION 1409b6d70 FUN_1409b6d70 body=610 status=ok
// SIG undefined FUN_1409b6d70(void)

void FUN_1409b6d70(longlong param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  int *piVar9;
  int *piVar10;
  wchar_t *pwVar11;
  undefined8 local_res8;
  longlong local_res10;
  int local_38;
  int local_34;
  longlong local_30;
  
  pwVar11 = (wchar_t *)0x0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    pwVar11 = *(wchar_t **)(*(longlong *)(param_1 + 0x110) + 0xe80);
  }
  if (pwVar11 != (wchar_t *)0x0) {
    pwVar1 = pwVar11 + 0xe8;
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f4d290;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      plVar5[2] = (longlong)FUN_1409b00c0;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar6;
      *plVar5 = (longlong)&PTR_FUN_143f4d2d8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(pwVar1,1);
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_res8);
      iVar2 = *(int *)(pwVar11 + 0xec);
      *(int *)(pwVar11 + 0xec) = iVar2 + 1;
      if (*(int *)(pwVar11 + 0xee) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pwVar1,iVar2);
      }
      puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)pwVar1);
      *puVar7 = plVar5;
      *(undefined4 *)(puVar7 + 1) = 3;
    }
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnModifiedWeaponShot",L"::");
    pwVar1 = (wchar_t *)0x0;
    while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar1 = pwVar3;
    }
    FName::FName(&local_res10,pwVar1 + 2,1);
    pwVar1 = pwVar11 + 0x184;
    FWeakObjectPtr::operator=(&local_38,0);
    local_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    local_30 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_38), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_30);
    }
    piVar9 = *(int **)pwVar1;
    iVar2 = *(int *)(pwVar11 + 0x188);
    for (piVar10 = piVar9; piVar10 != piVar9 + (longlong)iVar2 * 4; piVar10 = piVar10 + 4) {
      if ((((*piVar10 == local_38) && (piVar10[1] == local_34)) ||
          ((cVar4 = FWeakObjectPtr::IsValid(piVar10), cVar4 == '\0' &&
           (cVar4 = FWeakObjectPtr::IsValid(&local_38), cVar4 == '\0')))) &&
         (*(longlong *)(piVar10 + 2) == local_30)) {
        if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_1409b6f8d;
        break;
      }
    }
    iVar2 = *(int *)(pwVar11 + 0x188);
    *(int *)(pwVar11 + 0x188) = iVar2 + 1;
    if (*(int *)(pwVar11 + 0x18a) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pwVar1,iVar2);
    }
    piVar9 = (int *)((longlong)iVar2 * 0x10 + *(longlong *)pwVar1);
    *piVar9 = local_38;
    piVar9[1] = local_34;
    *(longlong *)(piVar9 + 2) = local_30;
LAB_1409b6f8d:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(pwVar1);
    if ((*(longlong *)(param_1 + 0x2b8) != 0) && ((*(byte *)(param_1 + 0x25c) & 4) != 0)) {
      FUN_140a95900(pwVar11,*(longlong *)(param_1 + 0x2b8),0,0);
    }
  }
  return;
}



// FUNCTION 1409b6fe0 FUN_1409b6fe0 body=192 status=ok
// SIG undefined FUN_1409b6fe0(void)

void FUN_1409b6fe0(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar3 = (**(code **)(*param_1 + 0x10))();
  if (lVar3 != 0) {
    lVar4 = (**(code **)(*param_1 + 8))(param_1);
    lVar5 = UObject::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(char *)(lVar3 + 0x1f0) != '\0')) {
      iVar1 = *(int *)(lVar3 + 0x218);
      *(int *)(lVar3 + 0x218) = iVar1 + 1;
      if (*(int *)(lVar3 + 0x21c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar3 + 0x210,iVar1);
      }
      plVar6 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x210));
      *plVar6 = lVar4;
      plVar6[1] = (longlong)param_1;
    }
  }
  return;
}



// FUNCTION 1409b70a0 FUN_1409b70a0 body=109 status=ok
// SIG undefined FUN_1409b70a0(void)

void FUN_1409b70a0(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1407665e0(param_2 + 0x290,param_1);
    FUN_1407665e0(param_2 + 0xf18,param_1);
    if (*(longlong *)(param_2 + 0x910) != 0) {
      FUN_140483870(*(longlong *)(param_2 + 0x910) + 0x1e8,param_1);
    }
    if (*(longlong *)(param_1 + 0x110) != 0) {
      FUN_140e33f60(*(longlong *)(param_1 + 0x110),param_2);
    }
  }
  return;
}



// FUNCTION 1409b7110 FUN_1409b7110 body=52 status=ok
// SIG undefined FUN_1409b7110(void)

void FUN_1409b7110(longlong param_1)

{
  if ((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x702) != '\0')) {
    FUN_1409be4f0(param_1 + 0x6e0);
    *(undefined1 *)(param_1 + 0x702) = 0;
  }
  return;
}



// FUNCTION 1409b7150 FUN_1409b7150 body=101 status=ok
// SIG undefined FUN_1409b7150(void)

void FUN_1409b7150(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(char *)(param_2 + 0x2470) != '\0')) {
    FUN_1407665e0(param_2 + 0x290,param_1);
    FUN_1407665e0(param_2 + 0xf18,param_1);
    if (*(longlong *)(param_1 + 0x110) != 0) {
      FUN_140e33f60(*(longlong *)(param_1 + 0x110),param_2);
    }
    FUN_1409a51f0(param_1,1);
  }
  return;
}



// FUNCTION 1409b71c0 FUN_1409b71c0 body=256 status=ok
// SIG undefined FUN_1409b71c0(void)

void FUN_1409b71c0(longlong param_1,byte param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *local_28;
  int local_20;
  
  iVar5 = *(int *)(param_1 + 0x218);
  lVar6 = *(longlong *)(param_1 + 0x210);
  local_28 = (longlong *)0x0;
  local_20 = iVar5;
  if (iVar5 != 0) {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_28,iVar5,0);
    lVar6 = lVar6 - (longlong)local_28;
    plVar4 = local_28 + 1;
    do {
      plVar4[-1] = 0;
      *plVar4 = 0;
      plVar4[-1] = *(longlong *)(lVar6 + -8 + (longlong)plVar4);
      lVar3 = 0;
      if (*(longlong *)(lVar6 + -8 + (longlong)plVar4) != 0) {
        lVar3 = *(longlong *)(lVar6 + (longlong)plVar4);
      }
      *plVar4 = lVar3;
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  plVar2 = local_28;
  plVar7 = local_28 + (longlong)local_20 * 2;
  for (plVar4 = local_28; plVar4 != plVar7; plVar4 = plVar4 + 2) {
    if ((*plVar4 != 0) && (plVar1 = (longlong *)plVar4[1], plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2 ^ 1);
    }
  }
  *(undefined4 *)(param_1 + 0x218) = 0;
  if (*(int *)(param_1 + 0x21c) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong *)(param_1 + 0x210),0);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  return;
}



// FUNCTION 1409b72c0 FUN_1409b72c0 body=58 status=ok
// SIG undefined FUN_1409b72c0(void)

void FUN_1409b72c0(longlong param_1)

{
  FUN_1409b71c0();
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x270) + 0x290,param_1);
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  return;
}



// FUNCTION 1409b7300 FUN_1409b7300 body=88 status=ok
// SIG undefined FUN_1409b7300(void)

void FUN_1409b7300(longlong param_1,char param_2)

{
  if ((param_2 == '\0') && (*(longlong *)(param_1 + 600) != 0)) {
    FUN_1409b7150();
    (**(code **)(**(longlong **)(param_1 + 600) + 0x6d0))(*(longlong **)(param_1 + 600),0);
    *(undefined8 *)(param_1 + 600) = 0;
  }
  FUN_1409b71c0(param_1,param_2);
  return;
}



// FUNCTION 1409b7360 FUN_1409b7360 body=184 status=ok
// SIG undefined FUN_1409b7360(void)

void FUN_1409b7360(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  lVar1 = lVar5 + (longlong)*(int *)(param_1 + 0x20) * 0x28;
  for (; lVar5 != lVar1; lVar5 = lVar5 + 0x28) {
    if (*(char *)(lVar5 + 0x24) != '\0') {
      lVar2 = FWeakObjectPtr::Get(lVar5 + 0xc);
      lVar3 = FWeakObjectPtr::Get(lVar5 + 0x14);
      if ((lVar2 != 0) && (lVar3 != 0)) {
        uVar4 = FWeakObjectPtr::Get(lVar5 + 4);
        FUN_140a9b1e0(lVar2,lVar3,uVar4);
        *(undefined1 *)(lVar5 + 0x24) = 0;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              ((longlong *)(param_1 + 0x18),0);
    return;
  }
  return;
}



// FUNCTION 1409b7420 FUN_1409b7420 body=61 status=ok
// SIG undefined FUN_1409b7420(void)

void FUN_1409b7420(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1430ef9c0();
  if (((cVar1 != '\0') && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (*(longlong *)(param_2 + 0x18) != 0)) {
    FUN_1409b7460(param_1,param_2);
  }
  return;
}



// FUNCTION 1409b7460 FUN_1409b7460 body=387 status=ok
// SIG undefined FUN_1409b7460(void)

void FUN_1409b7460(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24;
  
  FWeakObjectPtr::operator=(local_44,*param_2,param_3,param_4,*(undefined1 *)(param_2 + 1));
  FWeakObjectPtr::operator=(local_3c,param_2[2]);
  FWeakObjectPtr::operator=(local_34,param_2[3]);
  FWeakObjectPtr::operator=(local_2c,param_2[4]);
  iVar9 = *(int *)(param_1 + 0x20) + -1;
  local_24 = 0;
  if (-1 < iVar9) {
    do {
      lVar6 = *(longlong *)(param_1 + 0x18);
      lVar1 = (longlong)iVar9 * 0x28;
      lVar4 = FWeakObjectPtr::Get(lVar6 + 0xc + lVar1);
      lVar5 = FWeakObjectPtr::Get(local_3c);
      if (lVar4 == lVar5) {
        lVar6 = FWeakObjectPtr::Get(lVar6 + 0x14 + lVar1);
        lVar4 = FWeakObjectPtr::Get(local_34);
        if (lVar6 == lVar4) {
          lVar6 = *(longlong *)(param_1 + 0x18) + lVar1;
          if (*(char *)(lVar6 + 0x24) != '\0') {
            lVar4 = FWeakObjectPtr::Get(lVar6 + 0xc);
            lVar5 = FWeakObjectPtr::Get(lVar6 + 0x14);
            if ((lVar4 != 0) && (lVar5 != 0)) {
              uVar7 = FWeakObjectPtr::Get(lVar6 + 4);
              FUN_140a9b1e0(lVar4,lVar5,uVar7);
              *(undefined1 *)(lVar6 + 0x24) = 0;
            }
          }
          iVar8 = *(int *)(param_1 + 0x20);
          iVar3 = (iVar8 - iVar9) + -1;
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar1 + *(longlong *)(param_1 + 0x18)),
                       (void *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar9 + 1) * 0x28),
                       (longlong)iVar3 * 0x28);
            iVar8 = *(int *)(param_1 + 0x20);
          }
          *(int *)(param_1 + 0x20) = iVar8 + -1;
          TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1 + 0x18);
          return;
        }
      }
      bVar2 = 0 < iVar9;
      iVar9 = iVar9 + -1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 1409b75f0 FUN_1409b75f0 body=106 status=ok
// SIG undefined FUN_1409b75f0(void)

byte FUN_1409b75f0(longlong param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_1430ee590();
  if ((*param_4 & 1) != 0) {
    bVar2 = FUN_1423fb1a0(param_2,*(undefined8 *)(param_1 + 0x3b0),param_3,param_4);
    bVar1 = bVar2 | bVar1;
  }
  return bVar1;
}



// FUNCTION 1409b7660 FUN_1409b7660 body=182 status=ok
// SIG undefined FUN_1409b7660(void)

void FUN_1409b7660(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x18);
      do {
        if (plVar2[5] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 10;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1,param_2);
    }
  }
  else {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x18);
      do {
        if (plVar2[5] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 10;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 1409b7720 FUN_1409b7720 body=154 status=ok
// SIG undefined FUN_1409b7720(void)

void FUN_1409b7720(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar2 != 0) {
      plVar3 = (longlong *)(*param_1 + 0x18);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 7;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    if (iVar2 != 0) {
      plVar3 = (longlong *)(*param_1 + 0x18);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 7;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 1409b77c0 FUN_1409b77c0 body=138 status=ok
// SIG undefined FUN_1409b77c0(void)

void FUN_1409b77c0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    iVar2 = (int)param_1[1];
    if (iVar2 != 0) {
      plVar1 = (longlong *)(*param_1 + 0x68);
      do {
        if (plVar1[5] != 0) {
          FMemory::Free();
        }
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        if (plVar1[-5] != 0) {
          FMemory::Free();
        }
        if (plVar1[-10] != 0) {
          FMemory::Free();
        }
        plVar1 = plVar1 + 0x14;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  FUN_1409a50e0();
  return;
}



// FUNCTION 1409b7850 FUN_1409b7850 body=210 status=ok
// SIG undefined FUN_1409b7850(void)

void FUN_1409b7850(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x40);
      do {
        if (plVar2[5] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        if (plVar2[-5] != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 0xf;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo
                (param_1,param_2);
    }
  }
  else {
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*param_1 + 0x40);
      do {
        if (plVar2[5] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        if (plVar2[-5] != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 0xf;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 1409b7930 FUN_1409b7930 body=407 status=ok
// SIG undefined FUN_1409b7930(void)

void FUN_1409b7930(longlong param_1,char param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_res8;
  
  iVar2 = FUN_14233f450();
  if (iVar2 == 3) {
    lVar5 = *(longlong *)(param_1 + 0x478);
    lVar6 = (longlong)*(int *)(param_1 + 0x480) * 0x20 + lVar5;
    if (lVar5 != lVar6) {
      local_res8 = 0;
      do {
        FUN_1409ba780(lVar5,param_1 + 0x3c0,&local_res8);
        lVar5 = lVar5 + 0x20;
      } while (lVar5 != lVar6);
    }
    lVar6 = *(longlong *)(param_1 + 0x540);
    lVar5 = lVar6 + (longlong)*(int *)(param_1 + 0x548) * 0x28;
    for (; lVar6 != lVar5; lVar6 = lVar6 + 0x28) {
      FUN_1409ba950(lVar6,param_1 + 0x488,0);
    }
    if ((*(char *)(param_1 + 0x651) == '\0') &&
       (plVar1 = *(longlong **)(param_1 + 0x118), plVar1 != (longlong *)0x0)) {
      uVar4 = FUN_1414add30();
      lVar5 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
      if (lVar5 != 0) {
        FUN_140e5a8f0(lVar5);
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x638);
  if (iVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x630) + 0x10;
    do {
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (lVar5);
      lVar5 = lVar5 + 0x20;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x638) = 0;
  if (*(int *)(param_1 + 0x63c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x630,0);
  }
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    uVar3 = FUN_1409b7d80();
    iVar2 = FUN_14233f450(param_1);
    if (iVar2 == 3) {
      if (param_3 != '\0') {
        FUN_141455f00(param_1);
      }
      if (param_2 != '\0') {
        FUN_141456f90(*(undefined8 *)(param_1 + 0x3b0),uVar3);
      }
    }
  }
  return;
}



// FUNCTION 1409b7ad0 FUN_1409b7ad0 body=63 status=ok
// SIG undefined FUN_1409b7ad0(void)

void FUN_1409b7ad0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0xe8);
  plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0xf0) * 5;
  if (plVar2 != plVar1) {
    while (*plVar2 != param_2) {
      plVar2 = plVar2 + 5;
      if (plVar2 == plVar1) {
        return;
      }
    }
    if (plVar2 != (longlong *)0x0) {
      plVar2[3] = 0;
      *(undefined4 *)(plVar2 + 4) = 0;
    }
  }
  return;
}



// FUNCTION 1409b7b10 FUN_1409b7b10 body=150 status=ok
// SIG undefined FUN_1409b7b10(void)

void FUN_1409b7b10(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x3f8))();
  if (cVar1 != '\0') {
    iVar2 = FUN_1430ec7c0(param_1);
    if (iVar2 < 3) {
      FUN_1413dd850();
      return;
    }
    FUN_1409b5780(param_1,param_1 + 0x38,0x3f800000);
    if ((char)param_1[0x2f] != '\0') {
      iVar2 = 0;
      if (-1 < (int)param_1[0x41]) {
        iVar2 = (int)param_1[0x41];
      }
      if ((int)param_1[0x40] != iVar2) {
        *(int *)(param_1 + 0x40) = iVar2;
        FUN_1413dd400(param_1);
        (**(code **)(*param_1 + 0x410))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001409b7b99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x260))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1409b7bb0 FUN_1409b7bb0 body=361 status=ok
// SIG undefined FUN_1409b7bb0(void)

void FUN_1409b7bb0(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  
  cVar5 = (**(code **)(*param_1 + 0x400))();
  if (cVar5 != '\0') {
    cVar5 = FUN_142d52a00(param_1 + 0x3b);
    if (cVar5 != '\0') {
      lVar6 = FUN_142d52a20(param_1 + 0x3b);
      plVar1 = param_1 + 0x46;
      cVar5 = FUN_1407c3030(plVar1);
      if (cVar5 != '\0') {
        FUN_14248ba60(lVar6 + 0x1c,plVar1);
      }
      puVar7 = (undefined4 *)FUN_14246da30(&local_38);
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      *(undefined4 *)plVar1 = *puVar7;
      *(undefined4 *)((longlong)param_1 + 0x234) = uVar2;
      *(undefined4 *)(param_1 + 0x47) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x23c) = uVar4;
      *(undefined4 *)(param_1 + 0x48) = puVar7[4];
      if ((char)param_1[0x2f] == '\0') {
        local_res8[0] = 0;
        local_res18[0] = 0;
        cVar5 = FUN_1413dd060(param_1,local_res8,local_res18);
        if (cVar5 != '\0') {
          puVar7 = (undefined4 *)
                   FUN_142470da0(lVar6 + 0x1c,&local_38,local_res8[0],local_res18[0],local_res10);
          uVar2 = puVar7[1];
          uVar3 = puVar7[2];
          uVar4 = puVar7[3];
          *(undefined4 *)plVar1 = *puVar7;
          *(undefined4 *)((longlong)param_1 + 0x234) = uVar2;
          *(undefined4 *)(param_1 + 0x47) = uVar3;
          *(undefined4 *)((longlong)param_1 + 0x23c) = uVar4;
          *(undefined4 *)(param_1 + 0x48) = puVar7[4];
        }
      }
    }
    if (*(char *)((longlong)param_1 + 0x222) != '\0') {
      *(int *)((longlong)param_1 + 0x224) = (int)param_1[0x45];
      *(undefined1 *)((longlong)param_1 + 0x222) = 0;
      (**(code **)(*param_1 + 0x418))(param_1);
    }
    cVar5 = FUN_142d52a00(param_1 + 0x3b);
    if (cVar5 != '\0') {
      local_28 = param_1[0x3d];
      local_38 = (undefined4)param_1[0x3b];
      uStack_34 = *(undefined4 *)((longlong)param_1 + 0x1dc);
      uStack_30 = (undefined4)param_1[0x3c];
      uStack_2c = *(undefined4 *)((longlong)param_1 + 0x1e4);
      FUN_142d6c7b0(&local_38,0x3f800000,0x3f800000);
    }
  }
  return;
}



// FUNCTION 1409b7d20 FUN_1409b7d20 body=83 status=ok
// SIG undefined FUN_1409b7d20(void)

void FUN_1409b7d20(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x2ec) = 0;
  FUN_1409a3250();
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  if (*(int *)(param_1 + 0x2fc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x2f0,0);
  }
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 < 3) {
    FUN_141311f80(param_1);
    return;
  }
  return;
}



// FUNCTION 1409b7d80 FUN_1409b7d80 body=553 status=ok
// SIG undefined FUN_1409b7d80(void)

int FUN_1409b7d80(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong local_res8;
  
  lVar11 = *(longlong *)(param_1 + 0x90);
  uVar15 = 0;
  uVar14 = 0;
  lVar2 = lVar11 + (longlong)*(int *)(param_1 + 0x98) * 0x28;
  uVar10 = uVar15;
  for (; lVar11 != lVar2; lVar11 = lVar11 + 0x28) {
    iVar5 = FUN_1409a0fe0(lVar11);
    uVar14 = (int)uVar10 + iVar5;
    uVar10 = (ulonglong)uVar14;
  }
  plVar12 = *(longlong **)(param_1 + 0xb0);
  iVar5 = *(int *)(param_1 + 0x160);
  plVar13 = plVar12 + (longlong)*(int *)(param_1 + 0xb8) * 6;
  for (; plVar12 != plVar13; plVar12 = plVar12 + 6) {
    if ((int)plVar12[5] != 0) {
      lVar2 = *plVar12;
      *(undefined4 *)(plVar12 + 5) = 0;
      if (lVar2 != 0) {
        FUN_1409b5dc0(lVar2,plVar12);
        local_res8 = plVar12[1];
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (lVar2 + 0x38,&local_res8);
      }
    }
  }
  plVar12 = *(longlong **)(param_1 + 0xa0);
  plVar13 = plVar12 + (longlong)*(int *)(param_1 + 0xa8) * 7;
  for (; plVar12 != plVar13; plVar12 = plVar12 + 7) {
    FUN_1409ba9f0(plVar12,0);
    if (*(char *)((longlong)plVar12 + 0x31) != '\0') {
      *(undefined1 *)((longlong)plVar12 + 0x31) = 0;
      if ((*plVar12 != 0) && (plVar12[1] != 0)) {
        local_res8 = plVar12[1];
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(*plVar12 + 0x28)
        ;
      }
    }
  }
  if (((*(longlong *)(param_1 + 0x78) == 0) || (iVar6 = FUN_14233f450(), iVar6 == 3)) &&
     (*(undefined4 *)(param_1 + 0x160) = 0, *(longlong *)(param_1 + 0x80) != 0)) {
    lVar7 = UUGLoadoutBarUW::GetPrivateStaticClass();
    lVar2 = *(longlong *)(param_1 + 0x80);
    for (lVar11 = lVar2; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
      if (lVar11 == lVar7) {
        if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
          uVar10 = uVar15;
          if (lVar2 == 0) goto LAB_1409b7f31;
          uVar8 = UUGLoadoutBarUW::GetPrivateStaticClass();
          uVar3 = *(ulonglong *)(param_1 + 0x80);
          uVar9 = uVar3;
          if (uVar3 == 0) goto LAB_1409b7f31;
          goto LAB_1409b7f20;
        }
        break;
      }
    }
  }
  goto LAB_1409b7f7a;
  while (puVar1 = (ulonglong *)(uVar9 + 0x30), uVar9 = *puVar1, uVar10 = uVar15, *puVar1 != 0) {
LAB_1409b7f20:
    uVar10 = uVar3;
    if (uVar9 == uVar8) break;
  }
LAB_1409b7f31:
  cVar4 = FUN_1430ecc40(*(undefined8 *)(param_1 + 0x78),uVar10);
  if (cVar4 != '\0') {
    uVar10 = uVar15;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      uVar9 = UUGLoadoutBarUW::GetPrivateStaticClass();
      for (uVar3 = *(ulonglong *)(param_1 + 0x80);
          (uVar10 = uVar15, uVar3 != 0 && (uVar10 = *(ulonglong *)(param_1 + 0x80), uVar3 != uVar9))
          ; uVar3 = *(ulonglong *)(uVar3 + 0x30)) {
      }
    }
    FUN_1430ede10(*(undefined8 *)(param_1 + 0x78),uVar10);
  }
LAB_1409b7f7a:
  FUN_1409be440(param_1);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x68,0);
  return iVar5 + uVar14;
}



// FUNCTION 1409b7fb0 FUN_1409b7fb0 body=132 status=ok
// SIG undefined FUN_1409b7fb0(void)

void FUN_1409b7fb0(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x14,0);
    iVar3 = (int)(uVar1 / 0x14);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x14,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1409b8040 FUN_1409b8040 body=124 status=ok
// SIG undefined FUN_1409b8040(void)

void FUN_1409b8040(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x78,0);
    iVar3 = (int)(uVar1 / 0x78);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x78,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1409b80c0 ResizeTo body=130 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<200,8>_>,TSizedDefaultAllocator<32>_>::
     ResizeTo(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 200,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 7);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 200,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 1409b8150 FUN_1409b8150 body=450 status=ok
// SIG undefined FUN_1409b8150(void)

void FUN_1409b8150(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 local_58 [8];
  undefined2 local_50;
  undefined4 local_4c;
  longlong *local_48;
  int local_40;
  longlong *local_38;
  int local_30;
  
  if ((param_2 != 0) && (lVar3 = FUN_1430ec7a0(param_2), lVar3 != 0)) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_58[0] = 1;
      local_50 = 0x101;
      local_4c = 2;
      FUN_1409b53c0(&local_48,lVar3,local_58);
      uVar5 = 0;
      uVar8 = (ulonglong)((longlong)(local_48 + local_40) + (7 - (longlong)local_48)) >> 3;
      if (local_48 + local_40 < local_48) {
        uVar8 = uVar5;
      }
      uVar6 = uVar5;
      plVar7 = local_48;
      if (uVar8 != 0) {
        do {
          lVar3 = *plVar7;
          if (lVar3 != 0) {
            iVar1 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar1 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
            }
            *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar3;
          }
          plVar7 = plVar7 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar8);
      }
      uVar8 = (ulonglong)((longlong)(local_38 + local_30) + (7 - (longlong)local_38)) >> 3;
      if (local_38 + local_30 < local_38) {
        uVar8 = uVar5;
      }
      plVar7 = local_38;
      if (uVar8 != 0) {
        do {
          lVar3 = *plVar7;
          if (lVar3 != 0) {
            iVar1 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar1 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
            }
            *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar3;
          }
          plVar7 = plVar7 + 1;
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar8);
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free(local_38);
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
    }
  }
  return;
}



// FUNCTION 1409b8320 FUN_1409b8320 body=606 status=ok
// SIG undefined FUN_1409b8320(void)

void FUN_1409b8320(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  if ((param_2 != 0) && (plVar9 = (longlong *)FUN_1430ec7a0(param_2), plVar9 != (longlong *)0x0)) {
    local_68 = (**(code **)(*plVar9 + 0x148))(plVar9);
    local_60 = &local_68;
    local_58 = FUN_14073d760(&local_68,DAT_146b34888);
    puVar7 = local_60;
    local_50 = &local_68;
    local_48 = 0;
    puVar10 = (undefined8 *)FUN_14073d760(local_60,local_58);
    puVar11 = (undefined8 *)FUN_14073d760(local_50,local_48);
    for (; puVar10 != puVar11; puVar10 = (undefined8 *)FUN_14073d760(puVar7,*puVar10)) {
      lVar4 = puVar10[2];
      lVar5 = *(longlong *)(lVar4 + 0x118);
      if (lVar5 != 0) {
        bVar16 = *(int *)(param_1 + 0x38) == 0;
        plVar14 = *(longlong **)(param_1 + 0x30);
        bVar17 = *(int *)(param_1 + 0x48) == 0;
        bVar18 = *(int *)(param_1 + 0x58) == 0;
        plVar1 = plVar14 + *(int *)(param_1 + 0x38);
        for (; plVar14 != plVar1; plVar14 = plVar14 + 1) {
          lVar6 = *plVar14;
          if (lVar6 != 0) {
            uVar12 = (**(code **)(*plVar9 + 0x148))(plVar9);
            lVar13 = FUN_14129b020(uVar12);
            if (lVar13 == lVar6) {
              bVar16 = true;
              break;
            }
          }
        }
        puVar15 = *(undefined8 **)(param_1 + 0x50);
        puVar2 = puVar15 + *(int *)(param_1 + 0x58);
        for (; puVar15 != puVar2; puVar15 = puVar15 + 1) {
          cVar8 = FUN_142221b10(lVar5,*puVar15);
          if (cVar8 != '\0') {
            bVar18 = true;
            break;
          }
        }
        plVar14 = *(longlong **)(param_1 + 0x40);
        plVar1 = plVar14 + *(int *)(param_1 + 0x48);
        for (; plVar14 != plVar1; plVar14 = plVar14 + 1) {
          if ((*plVar14 != 0) && (*(longlong *)(lVar4 + 0x180) == *plVar14)) {
            bVar17 = true;
            break;
          }
        }
        if (((bVar16) && (bVar17)) && (bVar18)) {
          iVar3 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar3);
          }
          *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar5;
        }
      }
    }
  }
  return;
}



// FUNCTION 1409b8580 FUN_1409b8580 body=311 status=ok
// SIG undefined FUN_1409b8580(void)

void FUN_1409b8580(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  if ((param_2 != 0) && (plVar4 = (longlong *)FUN_1430ec7a0(param_2), plVar4 != (longlong *)0x0)) {
    local_48 = (**(code **)(*plVar4 + 0x148))(plVar4);
    local_40 = &local_48;
    local_38 = FUN_14073d760(&local_48,DAT_146b34888);
    puVar2 = local_40;
    local_30 = &local_48;
    local_28 = 0;
    puVar5 = (undefined8 *)FUN_14073d760(local_40,local_38);
    puVar6 = (undefined8 *)FUN_14073d760(local_30,local_28);
    for (; puVar5 != puVar6; puVar5 = (undefined8 *)FUN_14073d760(puVar2,*puVar5)) {
      lVar1 = *(longlong *)(puVar5[2] + 0x118);
      if ((lVar1 != 0) &&
         (iVar3 = FUN_142dec980(puVar5[2],*(undefined8 *)(param_1 + 0x30)), iVar3 != 0)) {
        iVar3 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar3);
        }
        *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar1;
      }
    }
  }
  return;
}



// FUNCTION 1409b86c0 FUN_1409b86c0 body=367 status=ok
// SIG undefined FUN_1409b86c0(void)

void FUN_1409b86c0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  if (((*(int *)(param_1 + 0x38) != 0) && (param_2 != 0)) &&
     (plVar6 = (longlong *)FUN_1430ec7a0(param_2), plVar6 != (longlong *)0x0)) {
    local_58 = (**(code **)(*plVar6 + 0x148))(plVar6);
    local_50 = &local_58;
    local_48 = FUN_14073d760(&local_58,DAT_146b34888);
    puVar4 = local_50;
    local_40 = &local_58;
    local_38 = 0;
    puVar7 = (undefined8 *)FUN_14073d760(local_50,local_48);
    puVar8 = (undefined8 *)FUN_14073d760(local_40,local_38);
    for (; puVar7 != puVar8; puVar7 = (undefined8 *)FUN_14073d760(puVar4,*puVar7)) {
      lVar3 = *(longlong *)(puVar7[2] + 0x118);
      if (lVar3 != 0) {
        puVar9 = *(undefined8 **)(param_1 + 0x30);
        puVar1 = puVar9 + *(int *)(param_1 + 0x38);
        for (; puVar9 != puVar1; puVar9 = puVar9 + 1) {
          cVar5 = FUN_142221b10(lVar3,*puVar9);
          if (cVar5 != '\0') {
            iVar2 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar2 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
            }
            *(longlong *)(*param_3 + (longlong)iVar2 * 8) = lVar3;
            break;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1409b8830 FUN_1409b8830 body=778 status=ok
// SIG undefined FUN_1409b8830(void)

void FUN_1409b8830(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  
  if (param_2 != 0) {
    bVar12 = false;
    plVar6 = (longlong *)FUN_1430ec7a0(param_2);
    if (plVar6 != (longlong *)0x0) {
      puVar11 = *(undefined4 **)(param_1 + 0x30);
      puVar1 = puVar11 + (longlong)*(int *)(param_1 + 0x38) * 10;
      for (; puVar11 != puVar1; puVar11 = puVar11 + 10) {
        local_e8 = *puVar11;
        local_e4 = puVar11[1];
        local_e0 = puVar11[2];
        local_68 = *(undefined8 *)(puVar11 + 4);
        local_d0 = 0;
        local_c8 = 0;
        local_d8 = 0;
        FString::FString(local_60,puVar11 + 6);
        FSoftObjectPath::operator=(&local_d8,&local_68);
        lVar7 = FWeakObjectPtr::Get(&local_e8);
        if (lVar7 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != local_e0) && (local_d8 != 0)) {
            lVar7 = FUN_141796df0(&local_d8);
            FWeakObjectPtr::operator=(&local_e8,lVar7);
            if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              local_e0 = DAT_1464b56f4;
            }
            lVar7 = FWeakObjectPtr::Get(&local_e8);
            if (lVar7 != 0) goto LAB_1409b8977;
          }
LAB_1409b8a0a:
          bVar3 = false;
        }
        else {
LAB_1409b8977:
          uVar8 = (**(code **)(*plVar6 + 0x148))(plVar6);
          lVar7 = FUN_14129b020(uVar8);
          local_b8 = 0xffffffff;
          local_a0 = 0;
          local_98 = 0;
          local_b4 = 0;
          local_a8 = 0;
          if (lVar7 == 0) {
            local_c0 = 0;
            local_a8 = 0;
          }
          else {
            uVar8 = FSoftObjectPath::FSoftObjectPath(local_50,lVar7);
            FSoftObjectPath::operator=(&local_a8,uVar8);
            FWeakObjectPtr::operator=(&local_b8,lVar7);
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            local_b4 = CONCAT44(DAT_1464b56f4,(undefined4)local_b4);
          }
          bVar12 = true;
          cVar5 = FSoftObjectPath::operator==(&local_a8,&local_d8);
          if (cVar5 == '\0') goto LAB_1409b8a0a;
          bVar3 = true;
        }
        if ((bVar12) && (bVar12 = false, local_a0 != 0)) {
          FMemory::Free();
        }
        if (bVar3) {
          local_90 = (**(code **)(*plVar6 + 0x148))(plVar6);
          local_88 = &local_90;
          local_80 = FUN_14073d760(&local_90,DAT_146b34888);
          puVar4 = local_88;
          local_78 = &local_90;
          local_70 = 0;
          puVar9 = (undefined8 *)FUN_14073d760(local_88,local_80);
          puVar10 = (undefined8 *)FUN_14073d760(local_78,local_70);
          for (; puVar9 != puVar10; puVar9 = (undefined8 *)FUN_14073d760(puVar4,*puVar9)) {
            lVar7 = *(longlong *)(puVar9[2] + 0x118);
            if (lVar7 != 0) {
              iVar2 = (int)param_3[1];
              *(int *)(param_3 + 1) = iVar2 + 1;
              if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
              }
              *(longlong *)(*param_3 + (longlong)iVar2 * 8) = lVar7;
            }
          }
          if (local_d0 == 0) {
            return;
          }
          FMemory::Free();
          return;
        }
        if (local_d0 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 1409b8b40 FUN_1409b8b40 body=348 status=ok
// SIG undefined FUN_1409b8b40(void)

void FUN_1409b8b40(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  if ((param_2 != 0) && (plVar4 = (longlong *)FUN_1430ec7a0(param_2), plVar4 != (longlong *)0x0)) {
    local_48 = (**(code **)(*plVar4 + 0x148))(plVar4);
    local_40 = &local_48;
    local_38 = FUN_14073d760(&local_48,DAT_146b34888);
    puVar3 = local_40;
    local_30 = &local_48;
    local_28 = 0;
    puVar5 = (undefined8 *)FUN_14073d760(local_40,local_38);
    puVar6 = (undefined8 *)FUN_14073d760(local_30,local_28);
    for (; puVar5 != puVar6; puVar5 = (undefined8 *)FUN_14073d760(puVar3,*puVar5)) {
      lVar2 = *(longlong *)(puVar5[2] + 0x118);
      if (lVar2 != 0) {
        if (*(int *)(param_1 + 0x38) == 0) {
LAB_1409b8c43:
          iVar1 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
          }
          *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
        }
        else {
          plVar7 = *(longlong **)(param_1 + 0x30);
          plVar4 = plVar7 + *(int *)(param_1 + 0x38);
          for (; plVar7 != plVar4; plVar7 = plVar7 + 1) {
            if ((*plVar7 != 0) && (*(longlong *)(puVar5[2] + 0x180) == *plVar7)) goto LAB_1409b8c43;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1409b8ca0 FUN_1409b8ca0 body=256 status=ok
// SIG undefined FUN_1409b8ca0(void)

void FUN_1409b8ca0(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_1430ec7a0(param_2);
  }
  if ((*(char *)(param_1 + 0x30) != '\0') && (lVar4 != 0)) {
    lVar4 = *(longlong *)(lVar4 + 0x118);
  }
  if (lVar4 != 0) {
    lVar5 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = *(longlong *)(lVar4 + 0x2c40);
      lVar4 = lVar5 + (longlong)*(int *)(lVar4 + 0x2c48) * 0xc;
      for (; lVar5 != lVar4; lVar5 = lVar5 + 0xc) {
        cVar3 = FWeakObjectPtr::IsValid(lVar5);
        if ((cVar3 != '\0') && ((*(byte *)(lVar5 + 8) & 2) != 0)) {
          uVar6 = FWeakObjectPtr::Get(lVar5);
          iVar1 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = uVar6;
        }
      }
    }
  }
  return;
}



// FUNCTION 1409b8da0 FUN_1409b8da0 body=646 status=ok
// SIG undefined FUN_1409b8da0(void)

void FUN_1409b8da0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *local_78;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  plVar15 = (longlong *)0x0;
  iVar13 = 0;
  local_78 = (longlong *)0x0;
  local_6c = 0;
  if ((param_2 != 0) && (plVar7 = (longlong *)FUN_1430ec7a0(param_2), plVar7 != (longlong *)0x0)) {
    local_68 = (**(code **)(*plVar7 + 0x148))(plVar7);
    local_60 = &local_68;
    local_58 = FUN_14073d760(&local_68,DAT_146b34888);
    puVar5 = local_60;
    local_50 = &local_68;
    local_48 = 0;
    puVar8 = (undefined8 *)FUN_14073d760(local_60,local_58);
    puVar9 = (undefined8 *)FUN_14073d760(local_50,local_48);
    plVar7 = plVar15;
    plVar14 = plVar15;
    for (; puVar8 != puVar9; puVar8 = (undefined8 *)FUN_14073d760(puVar5,*puVar8)) {
      lVar3 = *(longlong *)(puVar8[2] + 0x118);
      if ((lVar3 != 0) && (0 < *(int *)(param_1 + 0x38))) {
        plVar12 = *(longlong **)(param_1 + 0x30);
        plVar1 = plVar12 + *(int *)(param_1 + 0x38);
        for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
          if ((*plVar12 != 0) && (*(longlong *)(puVar8[2] + 0x180) == *plVar12)) {
            iVar13 = (int)plVar7;
            local_70 = iVar13 + 1;
            if ((int)plVar14 < (int)local_70) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_78,plVar7);
              plVar14 = (longlong *)(ulonglong)local_6c;
              plVar15 = local_78;
            }
            plVar7 = (longlong *)(ulonglong)local_70;
            plVar15[iVar13] = lVar3;
            break;
          }
        }
      }
      iVar13 = (int)plVar7;
    }
  }
  for (plVar7 = plVar15; plVar7 != plVar15 + iVar13; plVar7 = plVar7 + 1) {
    lVar3 = *plVar7;
    if (lVar3 != 0) {
      lVar10 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar10 = *(longlong *)(lVar3 + 0x2c40);
        lVar3 = lVar10 + (longlong)*(int *)(lVar3 + 0x2c48) * 0xc;
        for (; lVar10 != lVar3; lVar10 = lVar10 + 0xc) {
          cVar6 = FWeakObjectPtr::IsValid(lVar10);
          if ((cVar6 != '\0') && ((*(byte *)(lVar10 + 8) & 2) != 0)) {
            uVar11 = FWeakObjectPtr::Get(lVar10);
            iVar2 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar2 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
            }
            *(undefined8 *)(*param_3 + (longlong)iVar2 * 8) = uVar11;
          }
        }
      }
    }
  }
  if (plVar15 != (longlong *)0x0) {
    FMemory::Free(plVar15);
  }
  return;
}



// FUNCTION 1409b9030 FUN_1409b9030 body=355 status=ok
// SIG undefined FUN_1409b9030(void)

void FUN_1409b9030(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  if ((param_2 != 0) && (plVar3 = (longlong *)FUN_1430ec7a0(param_2), plVar3 != (longlong *)0x0)) {
    local_48 = (**(code **)(*plVar3 + 0x148))(plVar3);
    local_40 = &local_48;
    local_38 = FUN_14073d760(&local_48,DAT_146b34888);
    puVar2 = local_40;
    local_30 = &local_48;
    local_28 = 0;
    puVar4 = (undefined8 *)FUN_14073d760(local_40,local_38);
    puVar5 = (undefined8 *)FUN_14073d760(local_30,local_28);
    for (; puVar4 != puVar5; puVar4 = (undefined8 *)FUN_14073d760(puVar2,*puVar4)) {
      if ((*(longlong **)(puVar4[2] + 0x118) != (longlong *)0x0) &&
         (lVar6 = (**(code **)(**(longlong **)(puVar4[2] + 0x118) + 0x690))(), lVar6 != 0)) {
        plVar3 = (longlong *)*param_3;
        iVar1 = (int)param_3[1];
        for (plVar7 = plVar3; plVar7 != plVar3 + iVar1; plVar7 = plVar7 + 1) {
          if (*plVar7 == lVar6) {
            if ((int)((longlong)plVar7 - (longlong)plVar3 >> 3) != -1) goto LAB_1409b915a;
            break;
          }
        }
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
        }
        *(longlong *)((longlong)iVar1 * 8 + *param_3) = lVar6;
      }
LAB_1409b915a:
    }
  }
  return;
}



// FUNCTION 1409b91a0 FUN_1409b91a0 body=425 status=ok
// SIG undefined FUN_1409b91a0(void)

undefined8 FUN_1409b91a0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *local_38;
  int local_30;
  undefined4 local_2c;
  
  plVar8 = (longlong *)0x0;
  plVar5 = plVar8;
  if (param_4 != (longlong *)0x0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(param_4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = AGFireballProjectile::GetPrivateStaticClass();
      plVar5 = (longlong *)(**(code **)(*param_4 + 0x628))(param_4,uVar4);
    }
  }
  local_38 = (longlong *)0x0;
  local_2c = 0;
  plVar11 = plVar8;
  iVar9 = 0;
  if ((plVar5 != (longlong *)0x0) && (&local_38 != (longlong **)(plVar5 + 0xaa))) {
    local_30 = (int)plVar5[0xab];
    lVar3 = (longlong)local_30;
    plVar5 = (longlong *)plVar5[0xaa];
    plVar11 = (longlong *)0x0;
    iVar9 = local_30;
    if (local_30 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_38,local_30,0);
      plVar11 = local_38;
      _guard_xfg_dispatch_icall_nop(local_38,plVar5,lVar3 << 3);
      iVar9 = local_30;
    }
  }
  plVar5 = plVar11;
  do {
    if (plVar5 == plVar11 + iVar9) {
LAB_1409b930c:
      FUN_142cb2580(param_2,plVar8);
      if (plVar11 != (longlong *)0x0) {
        FMemory::Free(plVar11);
      }
      return param_2;
    }
    lVar3 = *plVar5;
    if (lVar3 == 0) {
LAB_1409b92f3:
      bVar2 = false;
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x50);
      plVar10 = plVar8;
      if (plVar1 != (longlong *)0x0) {
        plVar6 = (longlong *)UUGLoadoutBarUW::GetPrivateStaticClass();
        plVar7 = plVar1;
        do {
          plVar10 = plVar1;
          if (plVar7 == plVar6) break;
          plVar7 = (longlong *)plVar7[6];
          plVar10 = plVar8;
        } while (plVar7 != (longlong *)0x0);
      }
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar3 + 0x90) < (int)plVar10[0x12]) ||
         (*(longlong **)(*(longlong *)(lVar3 + 0x88) + (longlong)(int)plVar10[0x12] * 8) !=
          plVar10 + 0x11)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1409b92f3;
      bVar2 = true;
    }
    if (bVar2) {
      plVar8 = (longlong *)*plVar5;
      goto LAB_1409b930c;
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 1409b9350 FUN_1409b9350 body=112 status=ok
// SIG undefined FUN_1409b9350(void)

undefined8 FUN_1409b9350(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_4 != 0) {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = FUN_140a63ba0(param_4);
      goto LAB_1409b93a7;
    }
  }
  uVar3 = 0;
LAB_1409b93a7:
  FUN_142cb2580(param_2,uVar3);
  return param_2;
}



// FUNCTION 1409b93c0 FUN_1409b93c0 body=231 status=ok
// SIG undefined FUN_1409b93c0(void)

longlong FUN_1409b93c0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar3 = uVar4;
  if (param_4 != 0) {
    lVar2 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = *(ulonglong *)(param_4 + 0x2ae0);
    }
  }
  if (uVar3 == 0) {
    return param_2;
  }
  plVar5 = *(longlong **)(uVar3 + 0x550);
  uVar6 = (longlong)*(int *)(uVar3 + 0x558) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(uVar3 + 0x558) < plVar5) {
    uVar6 = uVar4;
  }
  if (uVar6 != 0) {
    do {
      if (*plVar5 != 0) {
        FUN_142cb6180(param_2);
      }
      plVar5 = plVar5 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar6);
  }
  return param_2;
}



// FUNCTION 1409b94b0 FUN_1409b94b0 body=389 status=ok
// SIG undefined FUN_1409b94b0(void)

longlong FUN_1409b94b0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_1413ffe00();
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
      return param_2;
    }
  }
  if (param_2 != 0) {
    lVar2 = FUN_1413e48b0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(param_2 + 0x488) != 0)) {
      lVar2 = FUN_140a63ba0();
      if (lVar2 != 0) {
        lVar3 = FUN_1413ffe00();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          return lVar2;
        }
      }
    }
    lVar2 = APostProcessVolume::GetPrivateStaticClass();
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
      lVar2 = FUN_140a63ba0(param_2);
      if (lVar2 != 0) {
        lVar3 = FUN_1413ffe00();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          return lVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1409b9640 FUN_1409b9640 body=288 status=ok
// SIG undefined FUN_1409b9640(void)

void FUN_1409b9640(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  float fVar4;
  longlong local_res8;
  
  fVar4 = (float)FUN_1413dcf80();
  cVar3 = FUN_142d52a00(param_1 + 0x1d8);
  if (cVar3 != '\0') {
    uVar1 = FUN_142d52a20(param_1 + 0x1d8);
    uVar1 = FArchive::operator<<(uVar1);
    FUN_142d6f560(uVar1,0,1);
  }
  cVar3 = FUN_142d52a00(param_1 + 0x1c0);
  if (cVar3 != '\0') {
    uVar1 = FUN_142d52a20(param_1 + 0x1c0);
    lVar2 = FArchive::operator<<(uVar1);
    FUN_14246fd70(lVar2 + 0x94,0);
    uVar1 = FUN_142d52a20(param_1 + 0x1c0);
    uVar1 = FArchive::operator<<(uVar1);
    FUN_142d6f560(uVar1,0,1);
    if (0.0 < fVar4) {
      uVar1 = FUN_142d52a20(param_1 + 0x1c0);
      uVar1 = FArchive::operator<<(uVar1);
      FUN_142d6c750(uVar1,fVar4,0x3f800000);
    }
    if (*(char *)(param_1 + 0x178) == '\0') {
      FUN_1413dd500(param_1);
    }
    if (*(longlong *)(param_1 + 0x118) != 0) {
      local_res8 = param_1;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (*(longlong *)(param_1 + 0x118) + 0x268,&local_res8);
    }
  }
  return;
}



// FUNCTION 1409b9760 FUN_1409b9760 body=220 status=ok
// SIG undefined FUN_1409b9760(void)

void FUN_1409b9760(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x651) != '\0') {
    uVar1 = GetTransientPackage();
    FUN_1417846f0(uVar1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar2 = FUN_1414707f0();
    lVar3 = FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
    FUN_14099b910(lVar3 + 0xf8,param_1 + 0x658);
    FUN_14099e040(param_1,lVar3);
    FUN_1409b7720(param_1 + 0x660,0);
    FUN_1409b7660(param_1 + 0x670,0);
    FUN_1409b7850(param_1 + 0x680,0);
    FUN_1409b77c0(param_1 + 0x690,0);
    *(undefined1 *)(param_1 + 0x651) = 0;
  }
  return;
}



// FUNCTION 1409b9840 FUN_1409b9840 body=759 status=ok
// SIG undefined FUN_1409b9840(void)

void FUN_1409b9840(longlong param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  short sVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  LARGE_INTEGER local_res10;
  longlong *local_78;
  int local_70;
  double local_68;
  undefined8 local_60;
  char local_57;
  byte local_56;
  
  if ((*(longlong *)(param_2 + 0x178) != 0) &&
     (lVar5 = FWeakObjectPtr::Get(param_2 + 0x34), lVar5 != 0)) {
    lVar6 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar5 = FUN_142df3510(lVar5), lVar5 != 0)) {
      FUN_142bd2270(&local_78,param_1,param_2,0xffffffff);
LAB_1409b9922:
      if ((int)local_78[1] <= local_70) goto LAB_1409b996f;
      if ((*(byte *)((longlong)local_78 + 0x156) & 1) != 0) goto LAB_1409b996f;
      if ((0.0 <= local_68) &&
         (QueryPerformanceCounter(&local_res10),
         local_68 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0)) goto LAB_1409b996f;
      bVar2 = true;
      do {
        if (!bVar2) {
          *(int *)(local_78 + 0x27) = local_70;
          return;
        }
        plVar7 = (longlong *)
                 (**(code **)(**(longlong **)(param_2 + 0x178) + 0x2a8))
                           (*(longlong **)(param_2 + 0x178),
                            ((longlong)(*(int *)(*local_78 + 4 + (longlong)local_70 * 0xc) * 2) >> 1
                            ) + local_78[3]);
        if (plVar7 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar7 + 0x690))(plVar7);
          if ((lVar6 == 0) || (cVar4 = FUN_142deeb90(lVar5,plVar7), cVar4 == '\0')) {
            if ((local_56 & 2) == 0) {
              cVar4 = *(char *)(param_1 + 0x5a);
              if ((((cVar4 == '\0') || (cVar4 == '\x01')) || (cVar4 == '\x02')) || (cVar4 != '\x03')
                 ) {
                if ((local_56 & 4) == 0) {
                  fVar8 = 0.0;
                  goto LAB_1409b9a1b;
                }
              }
              else {
                fVar8 = 1.0;
LAB_1409b9a1b:
                sVar3 = local_60._4_2_;
                if (local_57 == '\0') {
                  local_60 = CONCAT44(local_60._4_4_,(float)local_60 + fVar8);
                }
                else if (local_57 == '\x01') {
                  if ((sVar3 == 0) || (fVar8 < (float)local_60)) {
LAB_1409b9a56:
                    local_60 = CONCAT44(local_60._4_4_,fVar8);
                  }
                }
                else if (local_57 == '\x02') {
                  if (sVar3 == 0) goto LAB_1409b9a56;
                  if ((float)local_60 < fVar8) {
                    local_60 = CONCAT44(local_60._4_4_,fVar8);
                  }
                }
                local_60._0_6_ = CONCAT24(sVar3 + 1,(float)local_60);
              }
              local_60 = CONCAT26(local_60._6_2_ + 1,(undefined6)local_60);
            }
          }
          else {
            FUN_140744110(&local_78,*(undefined1 *)(param_1 + 0x44),*(undefined1 *)(param_1 + 0x5a),
                          0,1);
          }
        }
        FUN_142bf3280(&local_78);
        if ((*(byte *)((longlong)local_78 + 0x156) & 1) != 0) goto LAB_1409b9922;
        local_70 = local_70 + 1;
        local_60 = 0;
        local_56 = local_56 & 0xfd | 1;
        if (local_70 < (int)local_78[1]) goto LAB_1409b9ac0;
LAB_1409b996f:
        bVar2 = false;
      } while( true );
    }
  }
  return;
LAB_1409b9ac0:
  do {
    uVar1 = *(uint *)(*local_78 + 4 + (longlong)local_70 * 0xc);
    if (((uVar1 >> 0x1e & 1) == 0) && (-1 < (int)uVar1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  } while ((!bVar2) && (local_70 = local_70 + 1, local_70 < (int)local_78[1]));
  goto LAB_1409b9922;
}



// FUNCTION 1409b9b40 FUN_1409b9b40 body=1322 status=ok
// SIG undefined FUN_1409b9b40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409b9b40(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined4 *local_190;
  undefined1 *local_188;
  undefined *local_180;
  undefined1 local_178 [8];
  longlong *local_170;
  int local_168;
  double local_160;
  undefined8 local_158;
  char local_14f;
  byte local_14e;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  float local_130;
  LARGE_INTEGER local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 local_110 [24];
  undefined1 local_f8 [16];
  undefined1 local_e8;
  longlong local_b0;
  longlong local_90;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  if ((*(longlong *)(param_2 + 0x58) != 0) &&
     (lVar5 = FWeakObjectPtr::Get(param_2 + 0x34), lVar5 != 0)) {
    lVar6 = FUN_1428dfc70();
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
      FAIDataProviderValue::BindData(param_1 + 0x1d8,lVar5,*(undefined4 *)(param_2 + 0x30));
      FAIDataProviderValue::BindData(param_1 + 0x208,lVar5,*(undefined4 *)(param_2 + 0x30));
      uVar12 = 0;
      local_148 = 0;
      local_140 = 0;
      uVar9 = uVar12;
      if (*(longlong *)(param_1 + 0x238) != 0) {
        uVar7 = UEnvQueryContext::GetPrivateStaticClass();
        for (uVar11 = *(ulonglong *)(param_1 + 0x238);
            (uVar9 = uVar12, uVar11 != 0 &&
            (uVar9 = *(ulonglong *)(param_1 + 0x238), uVar11 != uVar7));
            uVar11 = *(ulonglong *)(uVar11 + 0x30)) {
        }
      }
      cVar4 = FUN_142bedad0(param_2,uVar9,&local_148);
      if (cVar4 != '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38) < DAT_146864ce8) &&
           (_Init_thread_header(&DAT_146864ce8), DAT_146864ce8 == -1)) {
          FName::FName(&DAT_146864ce0,"EnvQueryTrace",1);
          _Init_thread_footer(&DAT_146864ce8);
        }
        local_198 = 0;
        FUN_1422ffb20(local_f8,DAT_146864ce0,local_178,0);
        local_e8 = 1;
        FCollisionQueryParams::AddIgnoredActor(local_f8,lVar5);
        FCollisionQueryParams::AddIgnoredActor(local_f8,*(undefined8 *)(lVar5 + 0x150));
        local_11c = *(undefined4 *)(param_1 + 0x240);
        local_120 = 2;
        fVar13 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x1d8);
        fVar14 = (float)FAIDataProviderFloatValue::GetValue(param_1 + 0x208);
        uVar9 = uVar12;
        uVar11 = uVar12;
        if (0 < (int)local_140) {
          do {
            uVar10 = (int)uVar11 + 1;
            *(float *)(local_148 + 8 + uVar9) = fVar14 + *(float *)(local_148 + 8 + uVar9);
            uVar9 = uVar9 + 0xc;
            uVar11 = (ulonglong)uVar10;
          } while ((int)uVar10 < (int)local_140);
        }
        FUN_142bd2270(&local_170,param_1,param_2,0xffffffff);
LAB_1409b9d80:
        if ((int)local_170[1] <= local_168) goto LAB_1409b9dd1;
        if ((*(byte *)((longlong)local_170 + 0x156) & 1) != 0) goto LAB_1409b9dd1;
        if ((0.0 <= local_160) &&
           (QueryPerformanceCounter(&local_128),
           local_160 <= (double)local_128.QuadPart * DAT_1468b02f8 + 16777216.0))
        goto LAB_1409b9dd1;
        bVar2 = true;
        do {
          if (!bVar2) {
            *(int *)(local_170 + 0x27) = local_168;
            if (local_90 != 0) {
              FMemory::Free();
            }
            if (local_b0 != 0) {
              FMemory::Free();
            }
            break;
          }
          puVar8 = (undefined4 *)FUN_142be5200(param_1,local_110,param_2,local_168);
          local_130 = fVar13 + (float)puVar8[2];
          local_134 = puVar8[1];
          local_138 = *puVar8;
          uVar9 = uVar12;
          if (0 < (int)local_140) {
            do {
              local_180 = &DAT_146aefe68;
              local_188 = local_f8;
              local_190 = &local_120;
              local_198 = CONCAT44(local_198._4_4_,2);
              cVar4 = UWorld::SweepTestByChannel
                                (*(undefined8 *)(param_2 + 0x58),
                                 local_148 + (longlong)(int)uVar9 * 0xc,&local_138,&DAT_1464aa810);
              if ((local_14e & 2) == 0) {
                cVar1 = *(char *)(param_1 + 0x5a);
                if ((((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) ||
                   ((cVar1 != '\x03' || (cVar4 != '\0')))) {
                  if ((local_14e & 4) == 0) {
                    fVar14 = 0.0;
                    goto LAB_1409b9ea2;
                  }
                }
                else {
                  fVar14 = 1.0;
LAB_1409b9ea2:
                  sVar3 = local_158._4_2_;
                  if (local_14f == '\0') {
                    local_158 = CONCAT44(local_158._4_4_,(float)local_158 + fVar14);
                  }
                  else if (local_14f == '\x01') {
                    if ((sVar3 == 0) || (fVar14 < (float)local_158)) {
LAB_1409b9ee2:
                      local_158 = CONCAT44(local_158._4_4_,fVar14);
                    }
                  }
                  else if (local_14f == '\x02') {
                    if (sVar3 == 0) goto LAB_1409b9ee2;
                    if ((float)local_158 < fVar14) {
                      local_158 = CONCAT44(local_158._4_4_,fVar14);
                    }
                  }
                  local_158._0_6_ = CONCAT24(sVar3 + 1,(float)local_158);
                }
                local_158 = CONCAT26(local_158._6_2_ + 1,(undefined6)local_158);
              }
              uVar10 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar10;
            } while ((int)uVar10 < (int)local_140);
          }
          FUN_142bf3280(&local_170);
          if ((*(byte *)((longlong)local_170 + 0x156) & 1) != 0) goto LAB_1409b9d80;
          local_168 = local_168 + 1;
          local_158 = 0;
          local_14e = local_14e & 0xfd | 1;
          if (local_168 < (int)local_170[1]) goto LAB_1409b9f60;
LAB_1409b9dd1:
          bVar2 = false;
        } while( true );
      }
      if (local_148 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
LAB_1409b9f60:
  do {
    uVar10 = *(uint *)(*local_170 + 4 + (longlong)local_168 * 0xc);
    if (((uVar10 >> 0x1e & 1) == 0) && (-1 < (int)uVar10)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  } while ((!bVar2) && (local_168 = local_168 + 1, local_168 < (int)local_170[1]));
  goto LAB_1409b9d80;
}



// FUNCTION 1409ba070 FUN_1409ba070 body=251 status=ok
// SIG undefined FUN_1409ba070(void)

void FUN_1409ba070(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_18;
  longlong *local_10;
  
  if (((*param_2 != 0) && (param_3 != 0)) &&
     (plVar3 = *(longlong **)(param_3 + 0x118), plVar3 != (longlong *)0x0)) {
    uVar4 = FUN_142e27720();
    lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    if (lVar5 != 0) {
      FUN_142c6e640(lVar5,&local_18,param_4);
      if (local_18 != 0) {
        FUN_142c6c710(*(undefined8 *)(local_18 + 0x10));
        lVar5 = UObject::FindFunction(*(undefined8 *)(local_18 + 0x10),*param_2);
        if (lVar5 != 0) {
          (**(code **)(**(longlong **)(local_18 + 0x10) + 0x208))
                    (*(longlong **)(local_18 + 0x10),lVar5,0);
        }
      }
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_10 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar1 = (int *)((longlong)local_10 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1409ba170 FUN_1409ba170 body=133 status=ok
// SIG undefined FUN_1409ba170(void)

void FUN_1409ba170(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x2f8);
  *(int *)(param_1 + 0x2f8) = iVar1 + 1;
  if (*(int *)(param_1 + 0x2fc) < iVar1 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x2f0),iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0x2f0);
  FWeakObjectPtr::operator=(lVar2,param_2);
  *(undefined8 *)(lVar2 + 8) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined2 *)(lVar2 + 0x5c) = 0;
  *(undefined1 *)(lVar2 + 0x5e) = 0;
  return;
}



// FUNCTION 1409ba200 FUN_1409ba200 body=124 status=ok
// SIG undefined FUN_1409ba200(void)

void FUN_1409ba200(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  FUN_142c6c710(plVar1);
  if ((*(byte *)((longlong)plVar1 + 0x25d) & 1) == 0) {
    *(byte *)((longlong)plVar1 + 0x25d) = *(byte *)((longlong)plVar1 + 0x25d) | 1;
    (**(code **)(*plVar1 + 0x2b8))(plVar1);
  }
  FUN_142c6c710(plVar1);
  uVar2 = FUN_1406d4330(plVar1);
  lVar3 = FUN_142c6f130(uVar2);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x128) == '\x03')) {
    FUN_1409b6fe0(plVar1 + 0x43);
  }
  FUN_142c81ea0(param_1);
  return;
}



// FUNCTION 1409ba280 FUN_1409ba280 body=55 status=ok
// SIG undefined FUN_1409ba280(void)

void FUN_1409ba280(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_1409ad540(lVar1);
  FUN_1409b6fe0(lVar1 + 0x148);
  FUN_142c81e60(param_1);
  return;
}



// FUNCTION 1409ba2c0 FUN_1409ba2c0 body=31 status=ok
// SIG undefined FUN_1409ba2c0(void)

void FUN_1409ba2c0(longlong param_1)

{
  FUN_1409ba340(*(undefined8 *)(param_1 + 0x10));
  FUN_142c81ea0(param_1);
  return;
}



// FUNCTION 1409ba2e0 FUN_1409ba2e0 body=83 status=ok
// SIG undefined FUN_1409ba2e0(void)

void FUN_1409ba2e0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  FUN_142c6c710(plVar1);
  if (*(char *)((longlong)plVar1 + 0x172) == '\0') {
    *(undefined1 *)((longlong)plVar1 + 0x172) = 1;
    (**(code **)(*plVar1 + 0x298))(plVar1);
  }
  FUN_1409b6fe0(plVar1 + 0x29);
  FUN_142c81e60(param_1);
  return;
}



// FUNCTION 1409ba340 FUN_1409ba340 body=528 status=ok
// SIG undefined FUN_1409ba340(void)

void FUN_1409ba340(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_res10;
  longlong *local_30;
  longlong *local_20;
  
  FUN_142c6c710();
  local_30 = *(longlong **)(param_1 + 0x40);
  lVar8 = 0;
  lVar5 = lVar8;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)local_30[1];
    bVar9 = iVar4 == 0;
    if (bVar9) {
      *(int *)(local_30 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar4 == (int)local_30[1];
      if (bVar9) {
        *(int *)(local_30 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar9) {
        lVar5 = *(longlong *)(param_1 + 0x38);
        goto LAB_1409ba3a1;
      }
      LOCK();
      iVar4 = (int)local_30[1];
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(local_30 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
    lVar5 = 0;
    local_30 = (longlong *)0x0;
  }
LAB_1409ba3a1:
  lVar5 = FUN_142c6f130(lVar5);
  if (lVar5 == 0) {
LAB_1409ba3f0:
    lVar5 = lVar8;
  }
  else {
    lVar6 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (!bVar9) goto LAB_1409ba3f0;
  }
  *(longlong *)(param_1 + 0x248) = lVar5;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  local_20 = *(longlong **)(param_1 + 0x40);
  local_res10 = 0;
  lVar5 = lVar8;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)local_20[1];
    bVar9 = iVar4 == 0;
    if (bVar9) {
      *(int *)(local_20 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar4 == (int)local_20[1];
      if (bVar9) {
        *(int *)(local_20 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar9) {
        lVar5 = *(longlong *)(param_1 + 0x38);
        goto LAB_1409ba485;
      }
      LOCK();
      iVar4 = (int)local_20[1];
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(local_20 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
    lVar5 = 0;
    local_20 = (longlong *)0x0;
  }
LAB_1409ba485:
  cVar3 = FUN_142c71eb0(lVar5,&DAT_146864b18,&local_res10);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  lVar5 = local_res10;
  if (cVar3 == '\0') goto LAB_1409ba531;
  if (local_res10 == 0) {
LAB_1409ba527:
    lVar5 = lVar8;
  }
  else {
    lVar7 = UUGBrightnessScreenUW::GetPrivateStaticClass();
    lVar6 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (!bVar9) goto LAB_1409ba527;
  }
  *(longlong *)(param_1 + 0x240) = lVar5;
LAB_1409ba531:
  FUN_1409b6fe0(param_1 + 0x238);
  return;
}



// FUNCTION 1409ba590 FUN_1409ba590 body=210 status=ok
// SIG undefined FUN_1409ba590(void)

void FUN_1409ba590(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined1 *)(lVar1 + 600) = 1;
  FUN_142c81f30();
  FUN_142c6c710(lVar1);
  uVar2 = FUN_1406d4330(lVar1);
  lVar4 = FUN_142c6f130(uVar2);
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x128) == '\x03')) {
    FUN_1409be4f0(lVar1 + 0x218);
  }
  if (((*(longlong *)(lVar1 + 0x250) != 0) && ((*(byte *)(lVar1 + 0x25d) & 2) == 0)) &&
     (cVar3 = FUN_1409b4530(lVar1,*(undefined1 *)(lVar1 + 0x238)), cVar3 == '\0')) {
    puVar5 = *(undefined1 **)(lVar1 + 0x228);
    puVar6 = puVar5 + (longlong)*(int *)(lVar1 + 0x230) * 0x10;
    while ((puVar5 != puVar6 &&
           (((*(longlong *)(puVar5 + 8) == 0 ||
             (cVar3 = FUN_142c48f60(*(longlong *)(puVar5 + 8),lVar1,0), cVar3 == '\0')) ||
            (cVar3 = FUN_1409b4530(lVar1,*puVar5), cVar3 == '\0'))))) {
      puVar5 = puVar5 + 0x10;
    }
  }
  return;
}



// FUNCTION 1409ba670 FUN_1409ba670 body=35 status=ok
// SIG undefined FUN_1409ba670(void)

void FUN_1409ba670(longlong param_1)

{
  FUN_142c81ee0();
  FUN_1409be4f0(*(longlong *)(param_1 + 0x10) + 0x148);
  return;
}



// FUNCTION 1409ba6a0 FUN_1409ba6a0 body=50 status=ok
// SIG undefined FUN_1409ba6a0(void)

void FUN_1409ba6a0(longlong param_1)

{
  longlong lVar1;
  
  FUN_142c81f30();
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_142c6c710(lVar1);
  *(undefined1 *)(lVar1 + 0x250) = 1;
  FUN_1409be4f0(lVar1 + 0x238);
  return;
}



// FUNCTION 1409ba6e0 FUN_1409ba6e0 body=39 status=ok
// SIG undefined FUN_1409ba6e0(void)

void FUN_1409ba6e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined1 *)(lVar1 + 0x171) = 1;
  FUN_142c81ee0();
  FUN_1409be4f0(lVar1 + 0x148);
  return;
}



// FUNCTION 1409ba720 FUN_1409ba720 body=86 status=ok
// SIG undefined FUN_1409ba720(void)

void FUN_1409ba720(longlong *param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_1409add40(param_1,0);
    return;
  }
  if (param_2 != '\x01') {
    if (param_2 == '\x02') {
      FUN_1409add40(param_1,2);
      return;
    }
    return;
  }
  FUN_1409add40(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x0001409ba75d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3c8))(param_1,1);
  return;
}



// FUNCTION 1409ba780 FUN_1409ba780 body=277 status=ok
// SIG undefined FUN_1409ba780(void)

void FUN_1409ba780(int *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_res8;
  
  lVar7 = 0;
  lVar6 = lVar7;
  if (*(longlong *)(param_1 + 6) != 0) {
    lVar3 = FUN_14144bcb0();
    for (lVar5 = *(longlong *)(param_1 + 6);
        (lVar6 = lVar7, lVar5 != 0 && (lVar6 = *(longlong *)(param_1 + 6), lVar5 != lVar3));
        lVar5 = *(longlong *)(lVar5 + 0x30)) {
    }
  }
  lVar5 = 0;
  lVar3 = lVar7;
  if (*param_3 != 0) {
    lVar4 = FUN_14144bcb0();
    lVar5 = *param_3;
    for (lVar1 = lVar5; (lVar3 = lVar7, lVar1 != 0 && (lVar3 = lVar5, lVar1 != lVar4));
        lVar1 = *(longlong *)(lVar1 + 0x30)) {
    }
  }
  if (lVar6 != lVar3) {
    *(longlong *)(param_1 + 6) = lVar5;
    if (*(longlong *)(param_2 + 0xb0) != 0) {
      local_res8 = *(undefined8 *)(param_1 + 4);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (*(longlong *)(param_2 + 0xb0) + 0x2a8,&local_res8);
    }
    if (*param_1 == -1) {
      *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
      *param_1 = *(int *)(param_2 + 0x50);
      iVar2 = *(int *)(param_2 + 0x50);
      if (iVar2 == -1) {
        iVar2 = 0;
      }
      *(int *)(param_2 + 0x50) = iVar2;
    }
    param_1[1] = param_1[1] + 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
              (param_2);
    *(int *)(param_2 + 0x54) = *(int *)(param_2 + 0x54) + 1;
    if (*(int *)(param_2 + 0x54) == -1) {
      *(undefined4 *)(param_2 + 0x54) = 0;
    }
    *(undefined8 *)(param_2 + 0xa8) = 0xffffffffffffffff;
    if (*(longlong **)(param_2 + 0xb0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0xb0) + 0x260))();
    }
  }
  return;
}



// FUNCTION 1409ba8a0 BPF_SetPhaseScenario body=8 status=ok
// SIG undefined BPF_SetPhaseScenario(void)

void AAISpawner::BPF_SetPhaseScenario(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x510) = param_2;
  return;
}



// FUNCTION 1409ba8b0 FUN_1409ba8b0 body=154 status=ok
// SIG undefined FUN_1409ba8b0(void)

void FUN_1409ba8b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x2c0);
    uVar4 = 0;
    uVar3 = (longlong)*(int *)(param_1 + 0x2c8) & 0x1fffffffffffffff;
    if (plVar2 + *(int *)(param_1 + 0x2c8) < plVar2) {
      uVar3 = uVar4;
    }
    if (uVar3 != 0) {
      do {
        if (*plVar2 != 0) {
          plVar1 = (longlong *)(*plVar2 + 0x150);
          (**(code **)(*plVar1 + 0x38))(plVar1,1);
        }
        plVar2 = plVar2 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar3);
    }
    *(longlong *)(param_1 + 0x310) = param_2;
  }
  return;
}



// FUNCTION 1409ba950 FUN_1409ba950 body=149 status=ok
// SIG undefined FUN_1409ba950(void)

undefined8 FUN_1409ba950(int *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 8) != param_3) {
    *(longlong *)(param_1 + 8) = param_3;
    FUN_1409af650(param_2,param_1);
    if (*param_1 == -1) {
      *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
      *param_1 = *(int *)(param_2 + 0x50);
      iVar1 = *(int *)(param_2 + 0x50);
      if (iVar1 == -1) {
        iVar1 = 0;
      }
      *(int *)(param_2 + 0x50) = iVar1;
    }
    param_1[1] = param_1[1] + 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
              (param_2);
    *(int *)(param_2 + 0x54) = *(int *)(param_2 + 0x54) + 1;
    if (*(int *)(param_2 + 0x54) == -1) {
      *(undefined4 *)(param_2 + 0x54) = 0;
    }
    *(undefined8 *)(param_2 + 0xa8) = 0xffffffffffffffff;
    if (*(longlong **)(param_2 + 0xb0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0xb0) + 0x260))();
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1409ba9f0 FUN_1409ba9f0 body=195 status=ok
// SIG undefined FUN_1409ba9f0(void)

void FUN_1409ba9f0(longlong *param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  if ((char)param_1[6] == param_2) {
    return;
  }
  *(char *)(param_1 + 6) = param_2;
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  if (0 < (int)param_1[5]) {
    iVar1 = *(int *)param_1[4];
    if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0xb8))) {
      plVar3 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)(lVar2 + 0xb0));
      goto LAB_1409baa42;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1409baa42:
  if (plVar3 != (longlong *)0x0) {
    while( true ) {
      FUN_1409b5dc0(*param_1,plVar3);
      lVar2 = *plVar3;
      if (lVar2 == 0) break;
      iVar1 = (int)plVar3[3];
      if (((iVar1 < 0) || (*(int *)(lVar2 + 0xb8) <= iVar1)) ||
         (plVar3 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)(lVar2 + 0xb0)),
         plVar3 == (longlong *)0x0)) break;
    }
    lVar2 = *param_1;
  }
  if ((lVar2 != 0) && (local_res8 = param_1[1], local_res8 != 0)) {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar2 + 0x28,&local_res8);
  }
  return;
}



// FUNCTION 1409baac0 FUN_1409baac0 body=47 status=ok
// SIG undefined FUN_1409baac0(void)

void FUN_1409baac0(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x128)) {
    *(int *)(param_1 + 0x128) = param_2;
    FUN_142ba6740();
    FUN_141444b50(param_1);
    return;
  }
  return;
}



// FUNCTION 1409baaf0 FUN_1409baaf0 body=92 status=ok
// SIG undefined FUN_1409baaf0(void)

void FUN_1409baaf0(longlong param_1,char param_2)

{
  FUN_142c6c710();
  if ((*(char *)(param_1 + 0x25b) != '\0') && (*(longlong *)(param_1 + 0x240) != 0)) {
    if (param_2 != '\0') {
      FUN_142dafbc0();
      return;
    }
    FUN_142dbb5d0(*(longlong *)(param_1 + 0x240) + 0x25c8,&DAT_146864b10);
  }
  return;
}



// FUNCTION 1409bab50 FUN_1409bab50 body=320 status=ok
// SIG undefined FUN_1409bab50(void)

void FUN_1409bab50(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res18;
  longlong local_res20;
  longlong local_20 [3];
  
  lVar5 = 0;
  local_20[0] = 0;
  local_20[1] = 0;
  local_res18 = param_3;
  cVar1 = FUN_1409a1fc0(param_1,param_2,&local_res18,local_20);
  if (cVar1 != '\0') {
    lVar4 = lVar5;
    if (local_res18 != 0) {
      lVar2 = FUN_14144bcb0();
      for (lVar3 = local_res18; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar2) {
          lVar3 = FUN_140998cc0(param_1 + 0x478,&local_res18);
          if (lVar3 != 0) {
            lVar4 = *(longlong *)(lVar3 + 0x10);
          }
          break;
        }
      }
    }
    if (lVar4 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x478);
      lVar2 = (longlong)*(int *)(param_1 + 0x480) * 0x20 + lVar3;
      local_res20 = 0;
      for (; lVar3 != lVar2; lVar3 = lVar3 + 0x20) {
        if (*(longlong *)(lVar3 + 0x10) == lVar4) {
          if (lVar3 != 0) {
            FUN_1409ba780(lVar3,param_1 + 0x3c0,&local_res20);
          }
          break;
        }
      }
    }
    local_res20 = param_2;
    if (param_2 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x478);
      lVar3 = (longlong)*(int *)(param_1 + 0x480) * 0x20 + lVar4;
      for (; (lVar2 = lVar5, lVar4 != lVar3 &&
             (lVar2 = lVar4, *(longlong *)(lVar4 + 0x10) != param_2)); lVar4 = lVar4 + 0x20) {
      }
      if (lVar2 != 0) {
        FUN_1409ba780(lVar2,param_1 + 0x3c0,&local_res18);
      }
    }
  }
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409bac90 FUN_1409bac90 body=570 status=ok
// SIG undefined FUN_1409bac90(void)

void FUN_1409bac90(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *local_48 [2];
  longlong *local_38;
  longlong **pplStack_30;
  
  lVar3 = FUN_1409ab2f0();
  if (lVar3 != 0) {
    plVar10 = (longlong *)0x0;
    if (((param_4 != (longlong *)0x0) && ((char)param_4[0x10] != '\0')) &&
       (local_48[0] = param_4, *param_2 != 0)) {
      lVar4 = UUGLoadoutBarUW::GetPrivateStaticClass();
      for (lVar5 = *param_2; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar4) {
          if ((*param_2 != 0) && (local_48[0] != (longlong *)0x0)) {
            plVar7 = *(longlong **)(param_1 + 0xb8);
            plVar1 = plVar7 + (longlong)*(int *)(param_1 + 0xc0) * 5;
            for (; (plVar6 = plVar10, plVar7 != plVar1 &&
                   ((cVar2 = FUN_1409aea60(param_2,plVar7 + 2), cVar2 == '\0' ||
                    (plVar6 = plVar7, (longlong *)plVar7[4] != local_48[0])))); plVar7 = plVar7 + 5)
            {
            }
            if (plVar6 != (longlong *)0x0) {
              FUN_1409bac90(param_1,param_2,plVar6[3],0);
            }
          }
          break;
        }
      }
    }
    cVar2 = FUN_1409ba950(lVar3,param_1,param_4);
    if (((cVar2 != '\0') && (*(longlong *)(param_1 + 0xb0) != 0)) &&
       (*(longlong *)(lVar3 + 0x18) != 0)) {
      if (*(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x78) == 0) {
        FUN_1409adef0(param_1,lVar3);
        pplStack_30 = local_48;
        local_48[0] = param_3;
        local_38 = param_2;
        lVar3 = FUN_140998bf0(*(longlong *)(param_1 + 0xb0) + 0x630,&local_38);
        if (lVar3 != 0) {
          plVar7 = *(longlong **)(lVar3 + 0x10);
          plVar1 = plVar7 + (longlong)*(int *)(lVar3 + 0x18) * 3;
          for (; (plVar6 = plVar10, plVar7 != plVar1 &&
                 (plVar6 = plVar7, (longlong *)*plVar7 != param_4)); plVar7 = plVar7 + 3) {
          }
          if (plVar6 != (longlong *)0x0) {
            puVar8 = (undefined8 *)plVar6[1];
            puVar9 = puVar8 + (longlong)(int)plVar6[2] * 2;
            local_38 = param_4;
            for (; puVar8 != puVar9; puVar8 = puVar8 + 2) {
              lVar3 = FUN_1409ab2f0(param_1,param_2,*puVar8);
              if (lVar3 != 0) {
                FUN_1409ba950(lVar3,param_1,puVar8[1]);
              }
            }
          }
        }
      }
      else {
        lVar5 = FUN_1409ab2f0(param_1,lVar3 + 0x10);
        if (lVar5 != 0) {
          plVar10 = *(longlong **)(lVar5 + 0x20);
        }
        FUN_1409b5700(*(undefined8 *)(param_1 + 0xb0),lVar3 + 0x10,*(undefined8 *)(lVar3 + 0x18),
                      *(undefined8 *)(lVar3 + 0x20),plVar10);
      }
    }
  }
  return;
}



// FUNCTION 1409baed0 FUN_1409baed0 body=114 status=ok
// SIG undefined FUN_1409baed0(void)

void FUN_1409baed0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_res10 = param_2;
  cVar1 = FUN_1409a2540(param_1,&local_res10,param_3,param_4,local_18);
  if (cVar1 != '\0') {
    FUN_1409bac90(param_1 + 0x488,&local_res10,param_3,param_4);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1409baf50 FUN_1409baf50 body=3 status=ok
// SIG undefined FUN_1409baf50(void)

void FUN_1409baf50(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}



// FUNCTION 1409baf60 FUN_1409baf60 body=457 status=ok
// SIG undefined FUN_1409baf60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409baf60(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28 [2];
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142c6c710();
  FUN_1409bcf90(param_1);
  if ((param_2 != 0) && (*param_3 != 0)) {
    lVar4 = FUN_1413d5810();
    for (lVar8 = *param_3; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar4) {
        if (*param_3 == 0) {
          return;
        }
        FWeakObjectPtr::operator=(param_1 + 0x170,param_2);
        local_38 = _DAT_1468b5d90;
        local_30 = DAT_1468b5d98;
        local_28[0] = 0;
        local_28[1] = 0;
        lVar8 = 0;
        if (*param_3 != 0) {
          lVar5 = FUN_1413d5810();
          for (lVar4 = *param_3; (lVar8 = 0, lVar4 != 0 && (lVar8 = *param_3, lVar4 != lVar5));
              lVar4 = *(longlong *)(lVar4 + 0x30)) {
          }
        }
        puVar6 = (undefined8 *)FUN_1409e0430(local_18,lVar8,param_2,2,0,0,0,&local_38,0,local_28,0);
        *(undefined8 *)(param_1 + 0x160) = *puVar6;
        plVar3 = (longlong *)puVar6[1];
        plVar7 = *(longlong **)(param_1 + 0x168);
        if (plVar3 != plVar7) {
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
            UNLOCK();
            plVar7 = *(longlong **)(param_1 + 0x168);
          }
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
          *(longlong **)(param_1 + 0x168) = plVar3;
        }
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_10 + 1;
          lVar8 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_10)(local_10);
            LOCK();
            piVar1 = (int *)((longlong)local_10 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_10 + 8))(local_10,1);
            }
          }
        }
        if (local_28[0] == 0) {
          return;
        }
        FMemory::Free();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1409bb130 FUN_1409bb130 body=107 status=ok
// SIG undefined FUN_1409bb130(void)

void FUN_1409bb130(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 local_res10 [6];
  
  if (*(int *)(param_1 + 0x178) <= param_2) {
    param_2 = *(int *)(param_1 + 0x178);
  }
  if (*(int *)(param_1 + 0x17c) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x17c) = param_2;
  FUN_1409be440();
  local_res10[0] = *(undefined4 *)(param_1 + 0x17c);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x58,local_res10);
  if ((*(longlong *)(param_1 + 0x78) != 0) && (iVar1 = FUN_14233f450(), iVar1 != 3)) {
    return;
  }
  FUN_141455f40(param_1,*(undefined4 *)(param_1 + 0x17c));
  return;
}



// FUNCTION 1409bb1a0 FUN_1409bb1a0 body=100 status=ok
// SIG undefined FUN_1409bb1a0(void)

void FUN_1409bb1a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 local_28 [32];
  
  if ((param_2 != 0) && (cVar2 = FUN_142d52a00(param_3), cVar2 == '\0')) {
    uVar1 = FUN_1430ec7a0(param_1);
    puVar3 = (undefined8 *)FUN_142d62b60(local_28,uVar1,param_2,1);
    uVar1 = puVar3[1];
    *param_3 = *puVar3;
    param_3[1] = uVar1;
    param_3[2] = puVar3[2];
  }
  return;
}



// FUNCTION 1409bb210 FUN_1409bb210 body=190 status=ok
// SIG undefined FUN_1409bb210(void)

void FUN_1409bb210(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)(param_1 + 0x150);
  if (lVar1 != 0) {
    cVar6 = FUN_142d52a00(param_1 + 0x1c0);
    if (cVar6 == '\0') {
      uVar2 = FUN_1430ec7a0(param_1);
      puVar7 = (undefined4 *)FUN_142d62b60(local_28,uVar2,lVar1,1);
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      *(undefined4 *)(param_1 + 0x1c0) = *puVar7;
      *(undefined4 *)(param_1 + 0x1c4) = uVar3;
      *(undefined4 *)(param_1 + 0x1c8) = uVar4;
      *(undefined4 *)(param_1 + 0x1cc) = uVar5;
      *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(puVar7 + 4);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x158);
  if (lVar1 != 0) {
    cVar6 = FUN_142d52a00(param_1 + 0x1d8);
    if (cVar6 == '\0') {
      uVar2 = FUN_1430ec7a0(param_1);
      puVar8 = (undefined8 *)FUN_142d62b60(local_28,uVar2,lVar1,1);
      uVar2 = puVar8[1];
      *(undefined8 *)(param_1 + 0x1d8) = *puVar8;
      *(undefined8 *)(param_1 + 0x1e0) = uVar2;
      *(undefined8 *)(param_1 + 0x1e8) = puVar8[2];
    }
  }
  return;
}



// FUNCTION 1409bb2d0 FUN_1409bb2d0 body=346 status=ok
// SIG undefined FUN_1409bb2d0(void)

void FUN_1409bb2d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined1 local_28 [32];
  
  lVar1 = *(longlong *)(param_1 + 600);
  if (lVar1 != 0) {
    cVar6 = FUN_142d52a00(param_1 + 0x260);
    if (cVar6 == '\0') {
      uVar2 = FUN_1430ec7a0(param_1);
      puVar7 = (undefined4 *)FUN_142d62b60(local_28,uVar2,lVar1,1);
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      *(undefined4 *)(param_1 + 0x260) = *puVar7;
      *(undefined4 *)(param_1 + 0x264) = uVar3;
      *(undefined4 *)(param_1 + 0x268) = uVar4;
      *(undefined4 *)(param_1 + 0x26c) = uVar5;
      *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(puVar7 + 4);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x278);
  if (lVar1 != 0) {
    cVar6 = FUN_142d52a00(param_1 + 0x280);
    if (cVar6 == '\0') {
      uVar2 = FUN_1430ec7a0(param_1);
      puVar7 = (undefined4 *)FUN_142d62b60(local_28,uVar2,lVar1,1);
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      *(undefined4 *)(param_1 + 0x280) = *puVar7;
      *(undefined4 *)(param_1 + 0x284) = uVar3;
      *(undefined4 *)(param_1 + 0x288) = uVar4;
      *(undefined4 *)(param_1 + 0x28c) = uVar5;
      *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(puVar7 + 4);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x150);
  if (lVar1 != 0) {
    cVar6 = FUN_142d52a00(param_1 + 0x1c0);
    if (cVar6 == '\0') {
      uVar2 = FUN_1430ec7a0(param_1);
      puVar7 = (undefined4 *)FUN_142d62b60(local_28,uVar2,lVar1,1);
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      *(undefined4 *)(param_1 + 0x1c0) = *puVar7;
      *(undefined4 *)(param_1 + 0x1c4) = uVar3;
      *(undefined4 *)(param_1 + 0x1c8) = uVar4;
      *(undefined4 *)(param_1 + 0x1cc) = uVar5;
      *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(puVar7 + 4);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x158);
  if (lVar1 != 0) {
    cVar6 = FUN_142d52a00(param_1 + 0x1d8);
    if (cVar6 == '\0') {
      uVar2 = FUN_1430ec7a0(param_1);
      puVar8 = (undefined8 *)FUN_142d62b60(local_28,uVar2,lVar1,1);
      uVar2 = puVar8[1];
      *(undefined8 *)(param_1 + 0x1d8) = *puVar8;
      *(undefined8 *)(param_1 + 0x1e0) = uVar2;
      *(undefined8 *)(param_1 + 0x1e8) = puVar8[2];
    }
  }
  return;
}



// FUNCTION 1409bb440 FUN_1409bb440 body=91 status=ok
// SIG undefined FUN_1409bb440(void)

ulonglong FUN_1409bb440(longlong param_1,undefined1 *param_2)

{
  ulonglong in_RAX;
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x1ba) != '\0') {
    in_RAX = FUN_1413dd9b0();
    if ((char)in_RAX == '\0') goto LAB_1409bb48e;
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar1 = FUN_142ceefa0();
    in_RAX = 0;
    if (lVar1 != 0) {
      *param_2 = DAT_1468646e0;
      return 1;
    }
  }
LAB_1409bb48e:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1409bb4a0 FUN_1409bb4a0 body=119 status=ok
// SIG undefined FUN_1409bb4a0(void)

undefined8 FUN_1409bb4a0(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1409acef0();
  if (cVar1 == '\0') {
    *param_2 = 1;
    return 1;
  }
  if ((*(char *)(param_1 + 0x1ba) != '\0') && (cVar1 = FUN_1413dd9b0(param_1), cVar1 == '\0')) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x110) != 0) && (lVar2 = FUN_142ceefa0(), lVar2 != 0)) {
    *param_2 = DAT_1468646e0;
    return 1;
  }
  return 0;
}



// FUNCTION 1409bb5a0 FUN_1409bb5a0 body=194 status=ok
// SIG undefined FUN_1409bb5a0(void)

void FUN_1409bb5a0(longlong param_1,char param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 local_18;
  longlong local_10;
  
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) | 2;
  FUN_142c6c710(param_1 + -0x218);
  if ((*(char *)(param_1 + 0x40) == '\0') && ((*(char *)(param_1 + 8) == '\0' || (param_2 != '\0')))
     ) {
    local_10 = *(longlong *)(param_1 + -0x1d8);
    local_18 = 0;
    if (local_10 != 0) {
      LOCK();
      iVar1 = *(int *)(local_10 + 8);
      bVar3 = iVar1 == 0;
      if (bVar3) {
        *(int *)(local_10 + 8) = 0;
        iVar1 = 0;
      }
      UNLOCK();
      while (!bVar3) {
        LOCK();
        bVar3 = iVar1 == *(int *)(local_10 + 8);
        if (bVar3) {
          *(int *)(local_10 + 8) = iVar1 + 1;
        }
        UNLOCK();
        if (bVar3) {
          if (local_10 != 0) {
            local_18 = *(undefined8 *)(param_1 + -0x1e0);
          }
          goto LAB_1409bb631;
        }
        LOCK();
        iVar1 = *(int *)(local_10 + 8);
        bVar3 = iVar1 == 0;
        if (bVar3) {
          *(int *)(local_10 + 8) = 0;
          iVar1 = 0;
        }
        UNLOCK();
      }
      local_10 = 0;
    }
LAB_1409bb631:
    uVar2 = FUN_1406d4330(param_1 + -0x218);
    uVar2 = FUN_142c6f130(uVar2);
    FUN_142c84650(&local_18,uVar2);
  }
  return;
}



// FUNCTION 1409bb670 FUN_1409bb670 body=72 status=ok
// SIG undefined FUN_1409bb670(void)

void FUN_1409bb670(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_142c6c710(param_1 + -0x148);
  uVar1 = *(undefined8 *)(param_1 + -0x138);
  uVar2 = FUN_1406d4330(param_1 + -0x148);
  uVar2 = FUN_142c6f130(uVar2);
  FUN_142c84520(uVar1,uVar2);
  return;
}



// FUNCTION 1409bb6c0 FUN_1409bb6c0 body=281 status=ok
// SIG undefined FUN_1409bb6c0(void)

void FUN_1409bb6c0(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 local_18;
  longlong local_10;
  
  FUN_142c6c710(param_1 + -0x148);
  if ((*(char *)(param_1 + 0x29) == '\0') && ((*(char *)(param_1 + 8) == '\0' || (param_2 != '\0')))
     ) {
    plVar2 = *(longlong **)(param_1 + -0x108);
    plVar6 = plVar2;
    plVar7 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar6 = (longlong *)0x0, plVar7 = (longlong *)0x0, !bVar8) {
        LOCK();
        bVar8 = iVar4 == (int)plVar2[1];
        if (bVar8) {
          *(int *)(plVar2 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar8) {
          plVar6 = plVar2;
          if (plVar2 != (longlong *)0x0) {
            plVar7 = *(longlong **)(param_1 + -0x110);
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar8 = iVar4 == 0;
        if (bVar8) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    local_10 = *(longlong *)(param_1 + -0x108);
    local_18 = 0;
    if (local_10 != 0) {
      LOCK();
      iVar4 = *(int *)(local_10 + 8);
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(local_10 + 8) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (!bVar8) {
        LOCK();
        bVar8 = iVar4 == *(int *)(local_10 + 8);
        if (bVar8) {
          *(int *)(local_10 + 8) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar8) {
          if (local_10 != 0) {
            local_18 = *(undefined8 *)(param_1 + -0x110);
          }
          goto LAB_1409bb786;
        }
        LOCK();
        iVar4 = *(int *)(local_10 + 8);
        bVar8 = iVar4 == 0;
        if (bVar8) {
          *(int *)(local_10 + 8) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
      local_10 = 0;
    }
LAB_1409bb786:
    uVar5 = FUN_142c6f130(plVar7);
    FUN_142c84650(&local_18,uVar5);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409bb7e0 FUN_1409bb7e0 body=276 status=ok
// SIG undefined FUN_1409bb7e0(void)

void FUN_1409bb7e0(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 local_18;
  longlong local_10;
  
  FUN_142c6c710(param_1 + -0x238);
  *(undefined1 *)(param_1 + 0x19) = param_2;
  if (*(char *)(param_1 + 0x18) == '\0') {
    plVar2 = *(longlong **)(param_1 + -0x1f8);
    plVar6 = plVar2;
    plVar7 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar6 = (longlong *)0x0, plVar7 = (longlong *)0x0, !bVar8) {
        LOCK();
        bVar8 = iVar4 == (int)plVar2[1];
        if (bVar8) {
          *(int *)(plVar2 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar8) {
          plVar6 = plVar2;
          if (plVar2 != (longlong *)0x0) {
            plVar7 = *(longlong **)(param_1 + -0x200);
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar8 = iVar4 == 0;
        if (bVar8) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    local_10 = *(longlong *)(param_1 + -0x1f8);
    local_18 = 0;
    if (local_10 != 0) {
      LOCK();
      iVar4 = *(int *)(local_10 + 8);
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(local_10 + 8) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (!bVar8) {
        LOCK();
        bVar8 = iVar4 == *(int *)(local_10 + 8);
        if (bVar8) {
          *(int *)(local_10 + 8) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar8) {
          if (local_10 != 0) {
            local_18 = *(undefined8 *)(param_1 + -0x200);
          }
          goto LAB_1409bb8a1;
        }
        LOCK();
        iVar4 = *(int *)(local_10 + 8);
        bVar8 = iVar4 == 0;
        if (bVar8) {
          *(int *)(local_10 + 8) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
      local_10 = 0;
    }
LAB_1409bb8a1:
    uVar5 = FUN_142c6f130(plVar7);
    FUN_142c84650(&local_18,uVar5);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409bb930 FUN_1409bb930 body=336 status=ok
// SIG undefined FUN_1409bb930(void)

void FUN_1409bb930(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8;
  
  plVar1 = (longlong *)param_1[0x77];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x6d0))(plVar1,0);
    if (param_1[0x77] != 0) {
      param_1[0x77] = 0;
      FUN_1409af510(param_1);
    }
  }
  lVar2 = FUN_1413dda80(param_1,param_2);
  lVar3 = param_1[0x77];
  if (lVar3 != lVar2) {
    param_1[0x77] = lVar2;
    FUN_1409af510(param_1);
    lVar3 = param_1[0x77];
  }
  if (lVar3 == 0) {
    FUN_1409add40();
  }
  else {
    FUN_1409b6580(param_1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146864d58) {
      _Init_thread_header(&DAT_146864d58);
      if (DAT_146864d58 == -1) {
        FName::FName(&DAT_146864d50,L"Just Accept It Timer Done",1);
        _Init_thread_footer(&DAT_146864d58);
      }
    }
    lVar3 = UObject::FindFunction(param_1,DAT_146864d50);
    if (lVar3 != 0) {
      (**(code **)(*param_1 + 0x208))(param_1,lVar3,0);
    }
    lVar3 = param_1[0x77];
    lVar2 = FUN_1409aa9f0(param_1[0x22]);
    if (lVar2 != 0) {
      local_res8 = lVar3;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (lVar2 + 0x38,&local_res8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001409bba3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x260))(param_1);
  return;
}



// FUNCTION 1409bba80 FUN_1409bba80 body=636 status=ok
// SIG undefined FUN_1409bba80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1409bba80(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  longlong local_98;
  undefined1 local_88;
  ushort local_86;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar2 = (**(code **)(*param_1 + 0x148))();
  lVar3 = FUN_1430ec7a0(param_1);
  if (lVar3 != 0) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1409bbaf7;
  }
  lVar3 = 0;
LAB_1409bbaf7:
  FUN_1413e25e0(param_1,&local_d8);
  if ((lVar2 != 0) && (local_d8 != (longlong *)0x0)) {
    plVar5 = (longlong *)FUN_1413ffd50();
    plVar8 = local_d8;
    for (plVar6 = local_d8; plVar6 != (longlong *)0x0; plVar6 = (longlong *)plVar6[6]) {
      if (plVar6 == plVar5) {
        if (lVar3 == 0) {
          return 0;
        }
        lVar4 = local_d8[0x1f];
        if (lVar4 == 0) {
          (**(code **)(*local_d8 + 0x368))(local_d8);
          lVar4 = plVar8[0x1f];
        }
        if (*(char *)(lVar4 + 0x2470) == '\0') {
          plVar6 = (longlong *)FUN_1413e2640(param_1,local_c0);
        }
        else {
          local_c8 = (int)param_1[0x4e];
          plVar6 = &local_d0;
          local_d0 = param_1[0x4d];
        }
        lVar4 = *plVar6;
        local_c8 = (undefined4)plVar6[1];
        uVar7 = FUN_1413e26b0(param_1,local_c0);
        FRotator::Quaternion(uVar7,&local_78);
        local_68 = local_78;
        uStack_60 = uStack_70;
        local_58._8_4_ = local_c8;
        local_58._0_8_ = lVar4;
        local_58._12_4_ = 0;
        local_48._4_4_ = DAT_1464aa788._4_4_;
        local_48._0_4_ = (undefined4)DAT_1464aa788;
        local_48._8_4_ = DAT_1464aa790;
        local_48._12_4_ = 0;
        if (local_d8 == (longlong *)0x0) goto LAB_1409bbc5f;
        plVar8 = (longlong *)FUN_1413ffd50();
        plVar6 = local_d8;
        goto joined_r0x0001409bbc4f;
      }
    }
  }
  return 0;
joined_r0x0001409bbc4f:
  if (plVar6 == (longlong *)0x0) goto LAB_1409bbc5f;
  plVar5 = local_d8;
  if (plVar6 == plVar8) goto LAB_1409bbc61;
  plVar6 = (longlong *)plVar6[6];
  goto joined_r0x0001409bbc4f;
LAB_1409bbc5f:
  plVar5 = (longlong *)0x0;
LAB_1409bbc61:
  FActorSpawnParameters::FActorSpawnParameters(local_b0);
  local_86 = local_86 | 4;
  local_88 = 1;
  local_a0 = 0;
  local_98 = lVar3;
  if ((plVar5 != (longlong *)0x0) &&
     (lVar2 = FUN_142550d00(lVar2,plVar5,&local_68,local_b0), lVar2 != 0)) {
    lVar4 = FUN_1413ffd50();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1409bbcd7;
  }
  lVar2 = 0;
LAB_1409bbcd7:
  FUN_140a72370(lVar2,lVar3);
  FUN_14222b9f0(lVar2,&local_68,1,0);
  return lVar2;
}



// FUNCTION 1409bbd00 FUN_1409bbd00 body=561 status=ok
// SIG undefined FUN_1409bbd00(void)

void FUN_1409bbd00(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  undefined1 local_58 [4];
  int local_54;
  float local_50;
  int local_38;
  float fStack_24;
  
  if (((*param_2 != 0) &&
      (((char)param_2[1] != '\0' ||
       (0.0001 < *(float *)((longlong)param_2 + 0xc) ||
        *(float *)((longlong)param_2 + 0xc) == 0.0001)))) &&
     ((*(char *)((longlong)param_2 + 9) == '\0' || (*(char *)(param_1 + 0xa1) == '\x03')))) {
    plVar1 = (longlong *)(param_1 + 0xe8);
    plVar8 = (longlong *)*plVar1;
    iVar6 = *(int *)(param_1 + 0xf0);
    lVar7 = (longlong)iVar6;
    plVar2 = plVar8 + lVar7 * 5;
    for (; plVar8 != plVar2; plVar8 = plVar8 + 5) {
      if (*plVar8 == *param_2) {
        if (plVar8 != (longlong *)0x0) {
          if (*(char *)((longlong)param_2 + 0x14) == '\0') {
            return;
          }
          if (*(char *)((longlong)param_2 + 0x14) != '\x01') {
            return;
          }
          local_58[0] = 3;
          local_54 = 0;
          if ((char)plVar8[1] == '\0') {
            local_54 = (int)(*(float *)(plVar8 + 3) / *(float *)((longlong)plVar8 + 0xc));
            if ((int)plVar8[2] < 1) {
              if (0 < local_54) {
                local_54 = 1;
              }
            }
            else {
              iVar6 = (int)plVar8[2] - *(int *)((longlong)plVar8 + 0x1c);
              if (iVar6 <= local_54) {
                local_54 = iVar6;
              }
            }
          }
          local_50 = (float)local_54 * *(float *)((longlong)plVar8 + 0xc);
          FUN_1413d2440(param_1,plVar8,local_58);
          lVar7 = param_2[2];
          uVar4 = *(undefined4 *)((longlong)param_2 + 4);
          lVar3 = param_2[1];
          fVar9 = *(float *)((longlong)param_2 + 0xc);
          if ((char)(int)lVar3 == '\0') {
            local_38 = (int)lVar7;
            fStack_24 = fVar9;
            if (0 < local_38) {
              fStack_24 = (float)local_38 * fVar9;
            }
          }
          else {
            fStack_24 = 3.4028235e+38;
          }
          *(int *)plVar8 = (int)*param_2;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar4;
          *(int *)(plVar8 + 1) = (int)lVar3;
          *(float *)((longlong)plVar8 + 0xc) = fVar9;
          plVar8[2] = lVar7;
          plVar8[3] = 0;
          plVar8[4] = (ulonglong)(uint)fStack_24 << 0x20;
          return;
        }
        break;
      }
    }
    *(int *)(param_1 + 0xf0) = iVar6 + 1;
    if (*(int *)(param_1 + 0xf4) < iVar6 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
    }
    lVar3 = *plVar1;
    lVar5 = param_2[1];
    plVar1 = (longlong *)(lVar3 + lVar7 * 0x28);
    *plVar1 = *param_2;
    plVar1[1] = lVar5;
    *(longlong *)(lVar3 + 0x10 + lVar7 * 0x28) = param_2[2];
    *(undefined8 *)(lVar3 + 0x18 + lVar7 * 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x20 + lVar7 * 0x28) = 0;
    if (*(char *)(lVar3 + 8 + lVar7 * 0x28) == '\0') {
      iVar6 = *(int *)(lVar3 + 0x10 + lVar7 * 0x28);
      fVar9 = *(float *)(lVar3 + 0xc + lVar7 * 0x28);
      if (0 < iVar6) {
        fVar9 = (float)iVar6 * fVar9;
      }
    }
    else {
      fVar9 = 3.4028235e+38;
    }
    *(float *)(lVar3 + 0x24 + lVar7 * 0x28) = fVar9;
    FUN_1413d24a0(param_1,param_2);
  }
  return;
}



// FUNCTION 1409bbf40 FUN_1409bbf40 body=240 status=ok
// SIG undefined FUN_1409bbf40(void)

void FUN_1409bbf40(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_res8 [8];
  longlong *local_res10 [3];
  
  cVar1 = (**(code **)(*param_1 + 1000))();
  if (cVar1 == '\0') {
    FUN_1413dc7b0(param_1,DAT_1468646e0);
  }
  else {
    iVar2 = FUN_1430ec7c0();
    if (iVar2 < 3) {
      FUN_1413dd890();
      return;
    }
    local_res8[0] = DAT_1468646e0;
    cVar1 = (**(code **)(*param_1 + 0x3c0))(param_1,local_res8);
    if (cVar1 != '\0') {
      FUN_1413dc7b0(param_1,local_res8[0]);
      return;
    }
    if (param_1[0x23] != 0) {
      local_res10[0] = param_1;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1[0x23] + 0x288,local_res10);
    }
    if ((char)param_1[0x3e] != '\x01') {
      *(undefined1 *)(param_1 + 0x3e) = 1;
      (**(code **)(*param_1 + 0x408))(param_1);
      (**(code **)(*param_1 + 0x260))(param_1);
    }
    FUN_1413dd6d0(param_1);
    if (param_1[0x23] != 0) {
      local_res10[0] = param_1;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1[0x23] + 0x278,local_res10);
      return;
    }
  }
  return;
}



// FUNCTION 1409bc030 FUN_1409bc030 body=66 status=ok
// SIG undefined FUN_1409bc030(void)

void FUN_1409bc030(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_142d52a00(param_1 + 0x280);
  if (cVar2 != '\0') {
    uVar1 = FUN_142d52a20(param_1 + 0x280);
    uVar1 = FArchive::operator<<(uVar1);
    FUN_142d6f560(uVar1,0,1);
    return;
  }
  return;
}



// FUNCTION 1409bc080 FUN_1409bc080 body=622 status=ok
// SIG undefined FUN_1409bc080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409bc080(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  float fVar5;
  char cVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float local_res8 [2];
  undefined1 local_res20 [8];
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  float local_20;
  
  FUN_1413dd480();
  plVar1 = *(longlong **)(param_1 + 0x3b8);
  if (plVar1 == (longlong *)0x0) {
    local_48 = _DAT_1468b5d90;
    local_40 = DAT_1468b5d98;
  }
  else {
    local_40 = *(float *)(param_2 + 1);
    local_48 = *param_2;
    lVar2 = plVar1[0x9a];
    if (lVar2 != 0) {
      uVar8 = *(uint *)(lVar2 + 0x230) & _DAT_1468647c0;
      uVar9 = *(uint *)(lVar2 + 0x234) & uRam00000001468647c4;
      uVar10 = *(uint *)(lVar2 + 0x238) & uRam00000001468647c8;
      uVar11 = *(uint *)(lVar2 + 0x23c) & uRam00000001468647cc;
      auVar12._4_4_ = uVar9;
      auVar12._0_4_ = uVar8;
      auVar12._8_4_ = uVar10;
      auVar12._12_4_ = uVar11;
      auVar13._4_4_ = uVar10;
      auVar13._0_4_ = uVar9;
      auVar13._8_4_ = uVar8;
      auVar13._12_4_ = uVar11;
      auVar13 = minps(auVar12,auVar13);
      auVar3._4_4_ = uVar8;
      auVar3._0_4_ = uVar10;
      auVar3._8_4_ = uVar9;
      auVar3._12_4_ = uVar11;
      auVar13 = minps(auVar13,auVar3);
      local_res8[0] = auVar13._0_4_;
      local_40 = local_40 + local_res8[0] * *(float *)(lVar2 + 0x710);
    }
  }
  lVar2 = plVar1[0x2d];
  if (lVar2 == 0) {
    local_38 = _DAT_1468b5d90;
    local_30 = DAT_1468b5d98;
  }
  else {
    local_38 = *(undefined8 *)(lVar2 + 0x220);
    local_30 = *(float *)(lVar2 + 0x228);
  }
  local_20 = local_30;
  local_28 = local_38;
  cVar6 = (**(code **)(*plVar1 + 0x500))(plVar1,&local_48,param_3,0,0);
  *(undefined4 *)(param_1 + 1000) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x3ec) = 0;
  *(undefined4 *)(param_1 + 0x3f8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f4) = 1;
  if (((cVar6 != '\0') && (plVar1 = *(longlong **)(param_1 + 0x110), plVar1 != (longlong *)0x0)) &&
     (*(longlong *)(param_1 + 0x3b8) != 0)) {
    (**(code **)(*plVar1 + 0x578))(plVar1,local_res8,local_res20);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x3b8) + 0x168);
    if (lVar2 == 0) {
      local_38 = _DAT_1468b5d90;
      local_30 = DAT_1468b5d98;
    }
    else {
      local_38 = *(undefined8 *)(lVar2 + 0x220);
      local_30 = *(float *)(lVar2 + 0x228);
    }
    fVar5 = local_30;
    uVar4 = local_38;
    local_40 = local_30;
    lVar2 = plVar1[0x2d];
    local_48 = local_38;
    if (lVar2 == 0) {
      local_38 = _DAT_1468b5d90;
      local_30 = DAT_1468b5d98;
    }
    else {
      local_38 = *(undefined8 *)(lVar2 + 0x220);
      local_30 = *(float *)(lVar2 + 0x228);
    }
    local_48._0_4_ = (float)uVar4;
    fVar7 = (float)local_38 - (float)local_48;
    local_48 = uVar4;
    if (ABS(fVar7) < local_res8[0]) {
      local_48._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
      fVar7 = local_38._4_4_ - local_48._4_4_;
      if ((ABS(fVar7) < local_res8[0]) && (ABS(local_30 - fVar5) < local_res8[0])) {
        *(undefined4 *)(param_1 + 0x3f0) = 1;
      }
    }
  }
  FUN_1409a6340(param_1);
  return;
}



// FUNCTION 1409bc2f0 FUN_1409bc2f0 body=319 status=ok
// SIG undefined FUN_1409bc2f0(void)

void FUN_1409bc2f0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_18;
  undefined1 local_10;
  
  lVar7 = *(longlong *)(param_1 + 0x250);
  if (lVar7 != 0) {
    plVar6 = *(longlong **)(lVar7 + 0x30);
    plVar1 = plVar6 + *(int *)(lVar7 + 0x38);
    if (plVar6 != plVar1) {
      lVar7 = 0;
      do {
        lVar4 = lVar7;
        if (*plVar6 != 0) {
          lVar3 = FUN_14142bd30();
          for (lVar5 = *plVar6; (lVar4 = lVar7, lVar5 != 0 && (lVar4 = *plVar6, lVar5 != lVar3));
              lVar5 = *(longlong *)(lVar5 + 0x30)) {
          }
        }
        lVar4 = FUN_1430ec580(param_1,lVar4);
        if (lVar4 == 0) {
LAB_1409bc3c5:
          local_18 = 0;
          lVar4 = lVar7;
          if (*plVar6 != 0) {
            lVar3 = FUN_14142bd30();
            for (lVar5 = *plVar6; (lVar4 = lVar7, lVar5 != 0 && (lVar4 = *plVar6, lVar5 != lVar3));
                lVar5 = *(longlong *)(lVar5 + 0x30)) {
            }
          }
          local_10 = 2;
          local_18 = lVar4;
          FUN_1430ea410(param_1,&local_18);
        }
        else {
          lVar5 = FUN_14142bd30();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_1409bc3c5;
          if (*(char *)(lVar4 + 0xa1) == '\x03') {
            FUN_140677be0(lVar4 + 0xf8);
          }
          else {
            FUN_140678af0();
          }
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
  }
  return;
}



// FUNCTION 1409bc430 FUN_1409bc430 body=199 status=ok
// SIG undefined FUN_1409bc430(void)

void FUN_1409bc430(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_28 [32];
  
  (**(code **)(*param_1 + 0x310))(param_1,0);
  AActor::SetActorTickEnabled(param_1,1);
  plVar1 = (longlong *)param_1[0x96];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x280))(plVar1,0);
  }
  if (param_1[0x99] != 0) {
    if (param_1[0xa2] == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1[0xa2] + 0x270);
    }
    lVar2 = FUN_14059b7e0(uVar3,1);
    if (lVar2 != 0) {
      lVar2 = FUN_1405a3150(lVar2,local_28,param_1[0x99],0);
      FUN_1405913a0(param_1 + 0xa4,lVar2);
      *(undefined4 *)(param_1 + 0xa6) = *(undefined4 *)(lVar2 + 0x10);
      FUN_140591060(local_28);
    }
  }
  FUN_1409beae0(param_1);
  *(undefined1 *)(param_1 + 0xa3) = 1;
  return;
}



// FUNCTION 1409bc500 FUN_1409bc500 body=249 status=ok
// SIG undefined FUN_1409bc500(void)

void FUN_1409bc500(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_28;
  int local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = 0;
  local_28 = (longlong *)0x0;
  local_18 = FUN_1409b1470;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_144089920;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_18._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_144089968;
  }
  uVar1 = FUN_142d369f0(param_1 + 0x1c0,*(undefined8 *)(param_1 + 0x118),&local_28);
  *(undefined4 *)(param_1 + 0x308) = uVar1;
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 1409bc600 FUN_1409bc600 body=857 status=ok
// SIG undefined FUN_1409bc600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409bc600(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x310) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar4,param_1 + 0x310);
    *(undefined4 *)(param_1 + 0x308) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 0x318) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x31c) = 0;
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar4,param_1 + 800);
    *(undefined8 *)(param_1 + 800) = 0;
  }
  if (param_2 == '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x118);
    local_c8 = FUN_1409bc500;
    lVar1 = *(longlong *)(param_1 + 0x120);
    iStack_c0 = 0;
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar5 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    uVar7 = FUN_142c98860(param_1 + 0x2b0,uVar4);
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = (undefined4)local_c8;
      *(undefined4 *)((longlong)plVar2 + 0x14) = local_c8._4_4_;
      *(int *)(plVar2 + 3) = iStack_c0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_bc;
      lVar1 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar1;
      *plVar2 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_a8 = 0;
    local_a0 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_d0 = 0xbf800000;
    local_d8 = 0;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar5,param_1 + 0x310,&local_a8,uVar7);
    if (local_48 != 0) {
      plVar6 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar6 = local_58;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if (plVar2 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    pcVar3 = (code *)FMemory::Realloc(plVar2,0,0);
  }
  else {
    uStack_b0 = 0;
    local_c8 = (code *)0x0;
    local_b8 = FUN_1409b1470;
    pcVar3 = (code *)FMemory::Realloc(0,0x30);
    iStack_c0 = 3;
    local_c8 = pcVar3;
    if (pcVar3 != (code *)0x0) {
      *(undefined ***)pcVar3 = &PTR_FUN_144089920;
      FWeakObjectPtr::operator=(pcVar3 + 8,param_1);
      *(undefined4 *)(pcVar3 + 0x10) = (undefined4)local_b8;
      *(undefined4 *)(pcVar3 + 0x14) = local_b8._4_4_;
      *(undefined4 *)(pcVar3 + 0x18) = uStack_b0;
      *(undefined4 *)(pcVar3 + 0x1c) = uStack_ac;
      lVar1 = FDelegateHandle::GenerateNewID();
      *(longlong *)(pcVar3 + 0x28) = lVar1;
      *(undefined ***)pcVar3 = &PTR_FUN_144089968;
    }
    uVar7 = FUN_142d369f0(param_1 + 0x1c0,*(undefined8 *)(param_1 + 0x118),&local_c8);
    *(undefined4 *)(param_1 + 0x308) = uVar7;
    pcVar3 = local_c8;
    if (iStack_c0 != 0) {
      if (local_c8 == (code *)0x0) {
        return;
      }
      (**(code **)(*(longlong *)local_c8 + 0x28))(local_c8,0);
      if (local_c8 != (code *)0x0) {
        local_c8 = (code *)FMemory::Realloc(local_c8,0,0);
      }
      iStack_c0 = 0;
      pcVar3 = local_c8;
    }
  }
  if (pcVar3 != (code *)0x0) {
    FMemory::Free(pcVar3);
  }
  return;
}



// FUNCTION 1409bc960 FUN_1409bc960 body=305 status=ok
// SIG undefined FUN_1409bc960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409bc960(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  plVar3 = *(longlong **)(param_1 + 0x490);
  if (plVar3 == (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x488) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x168);
      if (lVar1 == 0) {
        local_38 = _DAT_1468b5d90;
        local_30 = DAT_1468b5d98;
      }
      else {
        local_38 = *(undefined8 *)(lVar1 + 0x220);
        local_30 = *(undefined4 *)(lVar1 + 0x228);
      }
      local_28 = local_38;
      local_20 = local_30;
      FUN_140e1f970(*(longlong *)(param_1 + 0x488),&local_28);
      *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x3c8);
      FUN_1414a2f60(param_1);
      plVar3 = *(longlong **)(param_1 + 0x490);
      if (plVar3 != (longlong *)0x0) goto LAB_1409bca29;
    }
    FUN_14099ce40(param_1);
    return;
  }
LAB_1409bca29:
  lVar1 = plVar3[0x21c];
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x10e5) != '\0')) {
    uVar2 = FUN_1404b03b0();
    uVar2 = FText::FText(&local_28,uVar2);
    FUN_140ad1be0(lVar1,1,uVar2,0);
    FUN_1414a2f60(param_1);
    plVar3 = *(longlong **)(param_1 + 0x490);
  }
  (**(code **)(*plVar3 + 0x2a0))(plVar3,0);
  FUN_1414a2ea0(param_1);
  return;
}



// FUNCTION 1409bcaa0 FUN_1409bcaa0 body=102 status=ok
// SIG undefined FUN_1409bcaa0(void)

void FUN_1409bcaa0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x490);
  if (plVar1 == (longlong *)0x0) {
    FUN_14099ce40(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x128) == '\x03') {
    (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
  }
  cVar2 = FUN_1414a33d0(param_1);
  if (cVar2 == '\0') {
    FUN_14099ce40(param_1);
  }
  if (*(byte *)(param_1 + 0x128) < 3) {
    FUN_1414a2e60(param_1);
    return;
  }
  return;
}



// FUNCTION 1409bcb10 thunk_FUN_1409bbd00 body=5 status=ok
// SIG undefined thunk_FUN_1409bbd00(void)

void thunk_FUN_1409bbd00(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  undefined1 auStack_58 [4];
  int iStack_54;
  float fStack_50;
  int iStack_38;
  float fStack_24;
  
  if (((*param_2 != 0) &&
      (((char)param_2[1] != '\0' ||
       (0.0001 < *(float *)((longlong)param_2 + 0xc) ||
        *(float *)((longlong)param_2 + 0xc) == 0.0001)))) &&
     ((*(char *)((longlong)param_2 + 9) == '\0' || (*(char *)(param_1 + 0xa1) == '\x03')))) {
    plVar1 = (longlong *)(param_1 + 0xe8);
    plVar8 = (longlong *)*plVar1;
    iVar6 = *(int *)(param_1 + 0xf0);
    lVar7 = (longlong)iVar6;
    plVar2 = plVar8 + lVar7 * 5;
    for (; plVar8 != plVar2; plVar8 = plVar8 + 5) {
      if (*plVar8 == *param_2) {
        if (plVar8 != (longlong *)0x0) {
          if (*(char *)((longlong)param_2 + 0x14) == '\0') {
            return;
          }
          if (*(char *)((longlong)param_2 + 0x14) != '\x01') {
            return;
          }
          auStack_58[0] = 3;
          iStack_54 = 0;
          if ((char)plVar8[1] == '\0') {
            iStack_54 = (int)(*(float *)(plVar8 + 3) / *(float *)((longlong)plVar8 + 0xc));
            if ((int)plVar8[2] < 1) {
              if (0 < iStack_54) {
                iStack_54 = 1;
              }
            }
            else {
              iVar6 = (int)plVar8[2] - *(int *)((longlong)plVar8 + 0x1c);
              if (iVar6 <= iStack_54) {
                iStack_54 = iVar6;
              }
            }
          }
          fStack_50 = (float)iStack_54 * *(float *)((longlong)plVar8 + 0xc);
          FUN_1413d2440(param_1,plVar8,auStack_58);
          lVar7 = param_2[2];
          uVar4 = *(undefined4 *)((longlong)param_2 + 4);
          lVar3 = param_2[1];
          fVar9 = *(float *)((longlong)param_2 + 0xc);
          if ((char)(int)lVar3 == '\0') {
            iStack_38 = (int)lVar7;
            fStack_24 = fVar9;
            if (0 < iStack_38) {
              fStack_24 = (float)iStack_38 * fVar9;
            }
          }
          else {
            fStack_24 = 3.4028235e+38;
          }
          *(int *)plVar8 = (int)*param_2;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar4;
          *(int *)(plVar8 + 1) = (int)lVar3;
          *(float *)((longlong)plVar8 + 0xc) = fVar9;
          plVar8[2] = lVar7;
          plVar8[3] = 0;
          plVar8[4] = (ulonglong)(uint)fStack_24 << 0x20;
          return;
        }
        break;
      }
    }
    *(int *)(param_1 + 0xf0) = iVar6 + 1;
    if (*(int *)(param_1 + 0xf4) < iVar6 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1,iVar6);
    }
    lVar3 = *plVar1;
    lVar5 = param_2[1];
    plVar1 = (longlong *)(lVar3 + lVar7 * 0x28);
    *plVar1 = *param_2;
    plVar1[1] = lVar5;
    *(longlong *)(lVar3 + 0x10 + lVar7 * 0x28) = param_2[2];
    *(undefined8 *)(lVar3 + 0x18 + lVar7 * 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x20 + lVar7 * 0x28) = 0;
    if (*(char *)(lVar3 + 8 + lVar7 * 0x28) == '\0') {
      iVar6 = *(int *)(lVar3 + 0x10 + lVar7 * 0x28);
      fVar9 = *(float *)(lVar3 + 0xc + lVar7 * 0x28);
      if (0 < iVar6) {
        fVar9 = (float)iVar6 * fVar9;
      }
    }
    else {
      fVar9 = 3.4028235e+38;
    }
    *(float *)(lVar3 + 0x24 + lVar7 * 0x28) = fVar9;
    FUN_1413d24a0(param_1,param_2);
  }
  return;
}



// FUNCTION 1409bcb20 FUN_1409bcb20 body=84 status=ok
// SIG undefined FUN_1409bcb20(void)

undefined8 FUN_1409bcb20(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x400))();
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x65) = 1;
    plVar2 = (longlong *)FUN_1412996f0(param_1);
    if (plVar2 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar2 + 0x778))(plVar2);
      if (cVar1 != '\0') {
        FUN_1409b7d20(param_1);
        FUN_1409bc600(param_1,1);
      }
    }
  }
  return 1;
}



// FUNCTION 1409bcb80 FUN_1409bcb80 body=107 status=ok
// SIG undefined FUN_1409bcb80(void)

void FUN_1409bcb80(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_1412ac740();
  plVar2 = (longlong *)FUN_1412996f0(param_1);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x240);
    lVar3 = FUN_14309ed70(param_1);
    if (lVar3 != 0) {
      lVar3 = FUN_14309ed70(param_1);
      (**(code **)(*plVar2 + 0x820))(plVar2,uVar1,*(undefined1 *)(lVar3 + 0x62c));
    }
  }
  return;
}



// FUNCTION 1409bcbf0 FUN_1409bcbf0 body=312 status=ok
// SIG undefined FUN_1409bcbf0(void)

undefined8
FUN_1409bcbf0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 *param_7)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_38;
  undefined4 local_30;
  
  FUN_142c6c710();
  lVar5 = 0;
  if (*(longlong *)(param_1 + 0x240) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x240) + 0xe68);
  }
  if (lVar5 != 0) {
    local_38 = *param_7;
    local_30 = *(undefined4 *)(param_7 + 1);
    if (param_2 != 0) {
      lVar3 = APostProcessVolume::GetPrivateStaticClass();
      lVar4 = param_2;
      do {
        if (lVar4 == lVar3) goto LAB_1409bcc70;
        lVar4 = *(longlong *)(lVar4 + 0x30);
      } while (lVar4 != 0);
    }
    param_2 = 0;
LAB_1409bcc70:
    cVar1 = FUN_142d00740(lVar5,param_2,*(undefined8 *)(param_1 + 0x240),param_3,param_4,param_5,
                          param_6,&local_38);
    if (cVar1 != '\0') {
      lVar5 = *(longlong *)(lVar5 + 0x1778);
      if (lVar5 != 0) {
        lVar4 = APostProcessVolume::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          *(longlong *)(lVar5 + 0x8a8) = param_1;
          FUN_141412cb0(lVar5);
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1409bcd30 FUN_1409bcd30 body=319 status=ok
// SIG undefined FUN_1409bcd30(void)

void FUN_1409bcd30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_48 [4];
  int local_44;
  float local_40;
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0xf0)) {
    plVar1 = *(longlong **)(param_1 + 0xe8);
    lVar5 = 0;
    plVar3 = plVar1;
    while (*plVar3 != param_2) {
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 1;
      plVar3 = plVar3 + 5;
      if (*(int *)(param_1 + 0xf0) <= lVar5) {
        return;
      }
    }
    iVar2 = *(int *)(param_1 + 0xf0);
    local_38 = plVar1[(longlong)iVar6 * 5];
    uStack_30 = (plVar1 + (longlong)iVar6 * 5)[1];
    plVar3 = plVar1 + (longlong)iVar6 * 5;
    local_28 = plVar3[2];
    uStack_20 = plVar3[3];
    local_18 = plVar3[4];
    iVar4 = (iVar2 - iVar6) + -1;
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                (plVar3,plVar1 + (longlong)(iVar6 + 1) * 5,(longlong)iVar4 * 0x28);
      iVar2 = *(int *)(param_1 + 0xf0);
    }
    *(int *)(param_1 + 0xf0) = iVar2 + -1;
    TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1 + 0xe8);
    local_48[0] = 2;
    local_44 = 0;
    if ((char)uStack_30 == '\0') {
      local_44 = (int)((float)uStack_20 / uStack_30._4_4_);
      if ((int)local_28 < 1) {
        if (0 < local_44) {
          local_44 = 1;
        }
      }
      else if ((int)local_28 - uStack_20._4_4_ <= local_44) {
        local_44 = (int)local_28 - uStack_20._4_4_;
      }
    }
    local_40 = (float)local_44 * uStack_30._4_4_;
    FUN_1413d2440(param_1,&local_38,local_48);
  }
  return;
}



// FUNCTION 1409bce70 FUN_1409bce70 body=7 status=ok
// SIG undefined FUN_1409bce70(void)

void FUN_1409bce70(undefined8 param_1)

{
  FUN_1409add40(param_1,0);
  return;
}



// FUNCTION 1409bce80 FUN_1409bce80 body=258 status=ok
// SIG undefined FUN_1409bce80(void)

void FUN_1409bce80(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_28 [32];
  
  *(undefined1 *)(param_1 + 0xa3) = 0;
  FUN_140a6f260();
  AActor::SetActorTickEnabled(param_1,0);
  (**(code **)(*param_1 + 0x310))(param_1,1);
  if ((longlong *)param_1[0x96] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x96] + 0x288))();
  }
  plVar1 = param_1 + 0xa4;
  cVar2 = FUN_14059f160(plVar1);
  if (cVar2 != '\0') {
    if (param_1[0x9a] == 0) {
      FUN_1405ac8f0(plVar1,0,4);
    }
    else {
      if (param_1[0xa2] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_1[0xa2] + 0x270);
      }
      lVar3 = FUN_14059b7e0(uVar4,1);
      if (lVar3 != 0) {
        lVar3 = FUN_1405a3150(lVar3,local_28,param_1[0x9a],0);
        FUN_1405913a0(plVar1,lVar3);
        *(undefined4 *)(param_1 + 0xa6) = *(undefined4 *)(lVar3 + 0x10);
        FUN_140591060(local_28);
      }
    }
    lVar3 = FUN_140590080(local_28);
    FUN_1405913a0(plVar1,lVar3);
    *(undefined4 *)(param_1 + 0xa6) = *(undefined4 *)(lVar3 + 0x10);
    FUN_140591060(local_28);
  }
  return;
}



// FUNCTION 1409bcf90 FUN_1409bcf90 body=280 status=ok
// SIG undefined FUN_1409bcf90(void)

void FUN_1409bcf90(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18 [2];
  
  FUN_142c6c710();
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x170);
  if (((lVar4 != 0) && (*(longlong *)(param_1 + 0x160) != 0)) &&
     (*(longlong *)(param_1 + 0x168) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x168) + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      local_20 = *(longlong *)(param_1 + 0x168);
      local_28 = 0;
      if (local_20 != 0) {
        LOCK();
        iVar3 = *(int *)(local_20 + 8);
        bVar5 = iVar3 == 0;
        if (bVar5) {
          *(int *)(local_20 + 8) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        while (!bVar5) {
          LOCK();
          bVar5 = iVar3 == *(int *)(local_20 + 8);
          if (bVar5) {
            *(int *)(local_20 + 8) = iVar3 + 1;
          }
          UNLOCK();
          if (bVar5) {
            if (local_20 != 0) {
              local_28 = *(undefined8 *)(param_1 + 0x160);
            }
            goto LAB_1409bd030;
          }
          LOCK();
          iVar3 = *(int *)(local_20 + 8);
          bVar5 = iVar3 == 0;
          if (bVar5) {
            *(int *)(local_20 + 8) = 0;
            iVar3 = 0;
          }
          UNLOCK();
        }
        local_20 = 0;
      }
LAB_1409bd030:
      FUN_142c84650(&local_28,lVar4);
    }
  }
  FWeakObjectPtr::operator=(&local_res10,0);
  *(undefined4 *)(param_1 + 0x170) = local_res10;
  *(undefined4 *)(param_1 + 0x174) = local_res14;
  if ((undefined8 *)(param_1 + 0x160) != local_18) {
    *(undefined8 *)(param_1 + 0x160) = 0;
    plVar2 = *(longlong **)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x168) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 1409bd0b0 FUN_1409bd0b0 body=131 status=ok
// SIG undefined FUN_1409bd0b0(void)

undefined8 FUN_1409bd0b0(longlong *param_1,char param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x400))();
  if (cVar1 == '\0') {
    return 1;
  }
  *(undefined1 *)(param_1 + 0x65) = 0;
  plVar2 = (longlong *)FUN_1412996f0(param_1);
  if ((plVar2 == (longlong *)0x0) || (cVar1 = (**(code **)(*plVar2 + 0x778))(plVar2), cVar1 == '\0')
     ) {
LAB_1409bd106:
    if (param_2 == '\0') goto LAB_1409bd10b;
  }
  else {
    FUN_14099cdb0(param_1);
    if (param_2 != '\0') {
      FUN_1409a3250(param_1);
      goto LAB_1409bd106;
    }
LAB_1409bd10b:
    if (0 < (int)param_1[0x5f]) {
      uVar3 = 0;
      goto LAB_1409bd11a;
    }
  }
  uVar3 = 1;
LAB_1409bd11a:
  (**(code **)(*param_1 + 0x420))(param_1,uVar3);
  return 1;
}



// FUNCTION 1409bd140 FUN_1409bd140 body=90 status=ok
// SIG undefined FUN_1409bd140(void)

void FUN_1409bd140(longlong param_1)

{
  if (*(char *)(param_1 + 0x651) == '\0') {
    FUN_1409b4c90(param_1,param_1 + 0x658);
    *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(param_1 + 0x658);
    *(undefined4 *)(param_1 + 0x6a4) = *(undefined4 *)(param_1 + 0x65c);
    *(undefined1 *)(param_1 + 0x651) = 1;
    FUN_1409b7930(param_1,0,0);
  }
  return;
}



// FUNCTION 1409bd1a0 ComponentHasTag body=52 status=ok
// SIG undefined ComponentHasTag(void)

ulonglong UActorComponent::ComponentHasTag(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *in_RAX;
  
  if (param_2 != 0) {
    in_RAX = *(longlong **)(param_1 + 0x88);
    plVar1 = in_RAX + *(int *)(param_1 + 0x90);
    for (; in_RAX != plVar1; in_RAX = in_RAX + 1) {
      if (*in_RAX == param_2) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1409bd1e0 FUN_1409bd1e0 body=40 status=ok
// SIG undefined FUN_1409bd1e0(void)

void FUN_1409bd1e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_142d52a00(param_2);
  if (cVar1 != '\0') {
    FUN_142d5bf20(param_2);
    return;
  }
  return;
}



// FUNCTION 1409bd210 FUN_1409bd210 body=80 status=ok
// SIG undefined FUN_1409bd210(void)

void FUN_1409bd210(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142d52a00(param_1 + 0x1c0);
  if (cVar1 != '\0') {
    FUN_142d5bf20(param_1 + 0x1c0);
  }
  cVar1 = FUN_142d52a00(param_1 + 0x1d8);
  if (cVar1 != '\0') {
    FUN_142d5bf20(param_1 + 0x1d8);
  }
  return;
}



// FUNCTION 1409bd260 FUN_1409bd260 body=136 status=ok
// SIG undefined FUN_1409bd260(void)

void FUN_1409bd260(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142d52a00(param_1 + 0x260);
  if (cVar1 != '\0') {
    FUN_142d5bf20(param_1 + 0x260);
  }
  cVar1 = FUN_142d52a00(param_1 + 0x280);
  if (cVar1 != '\0') {
    FUN_142d5bf20(param_1 + 0x280);
  }
  cVar1 = FUN_142d52a00(param_1 + 0x1c0);
  if (cVar1 != '\0') {
    FUN_142d5bf20(param_1 + 0x1c0);
  }
  cVar1 = FUN_142d52a00(param_1 + 0x1d8);
  if (cVar1 != '\0') {
    FUN_142d5bf20(param_1 + 0x1d8);
  }
  return;
}



// FUNCTION 1409bd2f0 FUN_1409bd2f0 body=345 status=ok
// SIG undefined FUN_1409bd2f0(void)

void FUN_1409bd2f0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_28 [32];
  
  FUN_140a73820();
  if (param_1[0xa2] != 0) {
    FUN_1409b5b00(param_1);
    FUN_1409beae0(param_1);
    if ((((char)param_1[0xa3] == '\0') || (param_1[0xa2] == 0)) ||
       (*(longlong *)(param_1[0xa2] + 0x270) == 0)) {
      *(undefined1 *)(param_1 + 0xa3) = 0;
      FUN_140a6f260(param_1);
      AActor::SetActorTickEnabled(param_1,0);
      (**(code **)(*param_1 + 0x310))(param_1,1);
      if ((longlong *)param_1[0x96] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x96] + 0x288))();
      }
      plVar1 = param_1 + 0xa4;
      cVar2 = FUN_14059f160(plVar1);
      if (cVar2 != '\0') {
        if (param_1[0x9a] == 0) {
          FUN_1405ac8f0(plVar1,0,4);
        }
        else {
          if (param_1[0xa2] == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(param_1[0xa2] + 0x270);
          }
          lVar3 = FUN_14059b7e0(uVar4,1);
          if (lVar3 != 0) {
            lVar3 = FUN_1405a3150(lVar3,local_28,param_1[0x9a],0);
            FUN_1405913a0(plVar1,lVar3);
            *(undefined4 *)(param_1 + 0xa6) = *(undefined4 *)(lVar3 + 0x10);
            FUN_140591060(local_28);
          }
        }
        lVar3 = FUN_140590080(local_28);
        FUN_1405913a0(plVar1,lVar3);
        *(undefined4 *)(param_1 + 0xa6) = *(undefined4 *)(lVar3 + 0x10);
        FUN_140591060(local_28);
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001409bd315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6d0))(param_1,0);
  return;
}



// FUNCTION 1409bd450 FUN_1409bd450 body=57 status=ok
// SIG undefined FUN_1409bd450(void)

void FUN_1409bd450(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_1430eec10();
  iVar1 = FUN_1430ec7c0(param_1);
  if (iVar1 == 3) {
    FUN_1409bd8c0(param_1,param_2);
  }
  return;
}



// FUNCTION 1409bd490 FUN_1409bd490 body=407 status=ok
// SIG undefined FUN_1409bd490(void)

void FUN_1409bd490(longlong *param_1,float param_2)

{
  float fVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  FUN_1430eec10();
  iVar4 = FUN_1430ec7c0(param_1);
  if (iVar4 == 3) {
    FUN_1409bd8c0(param_1);
  }
  if (*(char *)((longlong)param_1 + 0xdc) != '\0') {
    return;
  }
  if ((char)param_1[0x3e] == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x221) = 0;
  }
  else if (param_1[0x22] != 0) {
    cVar3 = *(char *)((longlong)param_1 + 0x221);
    cVar2 = UKeyLabel::GetDisplayNameVisibility_Implementation();
    *(char *)((longlong)param_1 + 0x221) = cVar2;
    if (((cVar2 != '\0') && (cVar3 != cVar2)) && (cVar3 = FUN_1413dd9b0(param_1), cVar3 != '\0')) {
      FUN_1409add40(param_1,1);
      (**(code **)(*param_1 + 0x3c8))(param_1,1);
    }
  }
  if (*(char *)((longlong)param_1 + 0x222) != '\0') {
    cVar3 = (**(code **)(*param_1 + 0x3d0))(param_1);
    if (cVar3 == '\0') {
      if (*(char *)((longlong)param_1 + 0x222) != '\0') {
        *(int *)((longlong)param_1 + 0x224) = (int)param_1[0x45];
        *(undefined1 *)((longlong)param_1 + 0x222) = 0;
        (**(code **)(*param_1 + 0x418))(param_1);
      }
      uVar5 = 0;
    }
    else {
      param_2 = *(float *)((longlong)param_1 + 0x224) - param_2;
      *(float *)((longlong)param_1 + 0x224) = param_2;
      if (0.0 < param_2) goto LAB_1409bd59c;
      uVar5 = 2;
    }
    FUN_1409add40(param_1,uVar5);
  }
LAB_1409bd59c:
  if ((char)param_1[0x2f] != '\0') {
    fVar6 = (float)(int)param_1[0x41];
    fVar1 = (float)(int)param_1[0x40];
    if (fVar6 <= (float)(int)param_1[0x40]) {
      fVar1 = fVar6;
    }
    local_38 = param_1[0x38];
    lStack_30 = param_1[0x39];
    local_28 = param_1[0x3a];
    *(int *)(param_1 + 0x40) = (int)fVar1;
    if ((int)fVar1 < (int)param_1[0x41]) {
      cVar3 = FUN_142d63aa0(&local_38,2);
      if (cVar3 != '\0') {
        FUN_1409b9640(param_1);
        return;
      }
    }
    else {
      cVar3 = FUN_142d63aa0(&local_38,2);
      if (cVar3 == '\0') {
        FUN_1409b7b10(param_1);
      }
    }
  }
  return;
}



// FUNCTION 1409bd640 FUN_1409bd640 body=278 status=ok
// SIG undefined FUN_1409bd640(void)

void FUN_1409bd640(longlong param_1,float param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_1409bd490();
  iVar2 = FUN_1430ec7c0(param_1);
  if (((iVar2 == 3) && (*(char *)(param_1 + 0x1f0) != '\0')) &&
     ((*(byte *)(param_1 + 0x3b0) & 4) != 0)) {
    param_2 = *(float *)(param_1 + 0x3cc) - param_2;
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    *(float *)(param_1 + 0x3cc) = param_2;
    if (0.0 < *(float *)(param_1 + 0x3c8)) {
      local_58 = *(undefined8 *)(param_1 + 0x3dc);
      local_50 = *(undefined4 *)(param_1 + 0x3e4);
      local_48 = *(undefined8 *)(param_1 + 0x3d0);
      local_40 = *(undefined4 *)(param_1 + 0x3d8);
      cVar1 = FUN_1413ddfa0(param_1,*(float *)(param_1 + 0x3c8),&local_48,&local_58);
      if (cVar1 != '\0') {
        local_38 = 0;
        *(undefined4 *)(param_1 + 0x3c8) = 0;
        *(undefined4 *)(param_1 + 0x3cc) = 0;
        *(undefined4 *)(param_1 + 0x3d0) = uStack_30;
        *(undefined4 *)(param_1 + 0x3d4) = uStack_2c;
        *(undefined4 *)(param_1 + 0x3d8) = local_28;
        *(undefined4 *)(param_1 + 0x3dc) = uStack_24;
        *(undefined4 *)(param_1 + 0x3e0) = uStack_20;
        *(undefined4 *)(param_1 + 0x3e4) = uStack_1c;
        uVar3 = FUN_1430ec7a0(param_1);
        uVar4 = FUN_142c98860(param_1 + 0x368,uVar3);
        *(undefined4 *)(param_1 + 0x3cc) = uVar4;
        return;
      }
      *(undefined4 *)(param_1 + 0x3cc) = 0x3e99999a;
    }
  }
  return;
}



// FUNCTION 1409bd760 FUN_1409bd760 body=172 status=ok
// SIG undefined FUN_1409bd760(void)

void FUN_1409bd760(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_1409bd490();
  iVar4 = FUN_1430ec7c0(param_1);
  if ((iVar4 == 3) && (lVar5 = FUN_1409aa8f0(param_1), lVar5 != 0)) {
    local_28 = *(undefined4 *)(param_1 + 0x1d8);
    uStack_24 = *(undefined4 *)(param_1 + 0x1dc);
    uStack_20 = *(undefined4 *)(param_1 + 0x1e0);
    uStack_1c = *(undefined4 *)(param_1 + 0x1e4);
    local_18 = *(undefined8 *)(param_1 + 0x1e8);
    cVar3 = FUN_142d52a00(&local_28);
    if (cVar3 != '\0') {
      local_28 = *(undefined4 *)(param_1 + 0x1d8);
      uStack_24 = *(undefined4 *)(param_1 + 0x1dc);
      uStack_20 = *(undefined4 *)(param_1 + 0x1e0);
      uStack_1c = *(undefined4 *)(param_1 + 0x1e4);
      local_18 = *(undefined8 *)(param_1 + 0x1e8);
      uVar1 = *(uint *)(lVar5 + 0x640);
      uVar2 = FUN_142d52a20(&local_28);
      lVar5 = FArchive::operator<<(uVar2);
      FUN_14246fd70(lVar5 + 0x94,uVar1 >> 1 & 1);
    }
  }
  return;
}



// FUNCTION 1409bd810 FUN_1409bd810 body=169 status=ok
// SIG undefined FUN_1409bd810(void)

void FUN_1409bd810(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_48 [16];
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  
  FUN_1430eec10();
  iVar2 = FUN_1430ec7c0(param_1);
  if (iVar2 == 3) {
    FUN_1409bd8c0(param_1,param_2);
  }
  if ((*(char *)(param_1 + 0x173) != '\0') && (*(char *)(param_1 + 0x1ac) != '\0')) {
    if (*(char *)(param_1 + 0x170) == '\0') {
      bVar1 = false;
    }
    else {
      local_38 = *(undefined8 *)(param_1 + 0x130);
      local_28 = 0;
      local_30 = param_1;
      piVar3 = (int *)FUN_142dd6f80(local_48,*(undefined8 *)(param_1 + 0x110),&local_38);
      bVar1 = 0 < *piVar3;
    }
    *(bool *)(param_1 + 0x1ac) = bVar1;
    if ((bVar1 == false) && (*(char *)(param_1 + 0xa1) == '\x03')) {
      FUN_141444b90(param_1);
    }
  }
  return;
}



// FUNCTION 1409bd8c0 FUN_1409bd8c0 body=623 status=ok
// SIG undefined FUN_1409bd8c0(void)

void FUN_1409bd8c0(longlong param_1,float param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  undefined1 local_88 [4];
  int local_84;
  float local_80;
  undefined1 local_78 [4];
  int local_74;
  float local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  iVar8 = *(int *)(param_1 + 0xf0) + -1;
  if (-1 < iVar8) {
    plVar1 = (longlong *)(param_1 + 0xe8);
    lVar7 = (longlong)iVar8 * 0x28;
    lVar9 = (longlong)*(int *)(param_1 + 0xf0) * 0x28;
    lVar10 = lVar7;
    do {
      cVar4 = *(char *)(*plVar1 + 0x15 + lVar7);
      puVar2 = (undefined8 *)(*plVar1 + lVar7);
      if ((cVar4 == '\0') || ((cVar4 == '\x01' && (*(char *)(param_1 + 0xa1) == '\x03')))) {
        if (*(char *)(puVar2 + 1) == '\0') {
          fVar11 = *(float *)(puVar2 + 3);
          if ((fVar11 < *(float *)((longlong)puVar2 + 0xc)) &&
             (fVar3 = *(float *)(puVar2 + 4), fVar3 < *(float *)((longlong)puVar2 + 0x24)))
          goto LAB_1409bd97c;
        }
        else {
          fVar3 = *(float *)(puVar2 + 4);
LAB_1409bd97c:
          fVar11 = param_2 + *(float *)(puVar2 + 3);
          *(float *)(puVar2 + 4) = fVar3 + param_2;
          *(float *)(puVar2 + 3) = fVar11;
          if (*(char *)(puVar2 + 1) != '\0') goto LAB_1409bdada;
        }
        fVar3 = *(float *)((longlong)puVar2 + 0xc);
        if ((fVar3 <= fVar11) ||
           (*(float *)((longlong)puVar2 + 0x24) < *(float *)(puVar2 + 4) ||
            *(float *)((longlong)puVar2 + 0x24) == *(float *)(puVar2 + 4))) {
          iVar6 = *(int *)(puVar2 + 2);
          if ((iVar6 < 1) || (iVar6 <= *(int *)((longlong)puVar2 + 0x1c) + 1)) {
            FUN_142ba6740(param_1);
            local_68 = *puVar2;
            uStack_60 = puVar2[1];
            iVar6 = *(int *)(param_1 + 0xf0);
            local_58 = puVar2[2];
            uStack_50 = puVar2[3];
            local_48 = puVar2[4];
            iVar5 = (iVar6 - iVar8) + -1;
            if (iVar5 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar1 + lVar10),(void *)(lVar9 + *plVar1),(longlong)iVar5 * 0x28
                        );
              iVar6 = *(int *)(param_1 + 0xf0);
            }
            *(int *)(param_1 + 0xf0) = iVar6 + -1;
            TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(plVar1);
            local_78[0] = 1;
            if ((char)uStack_60 == '\0') {
              local_74 = (int)((float)uStack_50 / uStack_60._4_4_);
              if ((int)local_58 < 1) {
                if (0 < local_74) {
                  local_74 = 1;
                }
              }
              else if ((int)local_58 - uStack_50._4_4_ <= local_74) {
                local_74 = (int)local_58 - uStack_50._4_4_;
              }
            }
            else {
              local_74 = 0;
            }
            local_70 = (float)local_74 * uStack_60._4_4_;
            FUN_1413d2440(param_1,&local_68,local_78);
          }
          else {
            iVar6 = iVar6 - *(int *)((longlong)puVar2 + 0x1c);
            local_88[0] = 0;
            local_84 = (int)(fVar11 / fVar3);
            if (iVar6 <= (int)(fVar11 / fVar3)) {
              local_84 = iVar6;
            }
            local_80 = (float)local_84 * fVar3;
            FUN_1413d2440(param_1,puVar2,local_88);
            *(int *)((longlong)puVar2 + 0x1c) = *(int *)((longlong)puVar2 + 0x1c) + 1;
            *(float *)(puVar2 + 3) = *(float *)(puVar2 + 3) - *(float *)((longlong)puVar2 + 0xc);
          }
        }
      }
LAB_1409bdada:
      lVar9 = lVar9 + -0x28;
      lVar10 = lVar10 + -0x28;
      lVar7 = lVar7 + -0x28;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  return;
}



// FUNCTION 1409bdb30 FUN_1409bdb30 body=303 status=ok
// SIG undefined FUN_1409bdb30(void)

void FUN_1409bdb30(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_18 [16];
  
  FUN_1430eed40();
  iVar2 = FUN_14233f450(param_1);
  if (iVar2 == 3) {
    piVar5 = *(int **)(param_1 + 0x618);
    piVar4 = piVar5 + (longlong)*(int *)(param_1 + 0x620) * 0xe;
    if (piVar5 != piVar4) {
      piVar6 = piVar5 + 0xb;
      do {
        if ((((*(longlong *)(piVar6 + -7) != 0) &&
             (plVar1 = *(longlong **)(piVar6 + -5), plVar1 != (longlong *)0x0)) &&
            (*(longlong *)(piVar6 + -3) != 0)) &&
           ((piVar3 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1,local_18), *piVar3 != piVar6[-1]
            || (piVar3[1] != *piVar6)))) {
          iVar2 = *piVar5;
          *(undefined8 *)(piVar6 + -1) = *(undefined8 *)piVar3;
          if (iVar2 == -1) {
            *(int *)(param_1 + 0x5b0) = *(int *)(param_1 + 0x5b0) + 1;
            *piVar5 = *(int *)(param_1 + 0x5b0);
            iVar2 = *(int *)(param_1 + 0x5b0);
            if (iVar2 == -1) {
              iVar2 = 0;
            }
            *(int *)(param_1 + 0x5b0) = iVar2;
          }
          piVar6[-10] = piVar6[-10] + 1;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                    (param_1 + 0x560);
          *(int *)(param_1 + 0x5b4) = *(int *)(param_1 + 0x5b4) + 1;
          if (*(int *)(param_1 + 0x5b4) == -1) {
            *(undefined4 *)(param_1 + 0x5b4) = 0;
          }
          *(undefined8 *)(param_1 + 0x608) = 0xffffffffffffffff;
          if (*(longlong **)(param_1 + 0x610) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x610) + 0x260))();
          }
          FUN_1409b41e0(piVar5,param_1 + 0x560);
        }
        piVar5 = piVar5 + 0xe;
        piVar6 = piVar6 + 0xe;
      } while (piVar5 != piVar4);
    }
  }
  return;
}



// FUNCTION 1409bdc60 FUN_1409bdc60 body=133 status=ok
// SIG undefined FUN_1409bdc60(void)

void FUN_1409bdc60(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  if ((char)param_1[0x3e] != '\0') {
    cVar1 = FUN_140b83580();
    if (cVar1 == '\0') {
      param_2 = 0;
    }
    if (param_2 != param_1[0x5c]) {
      FUN_1409be840(param_1);
      param_1[0x5c] = param_2;
      FWeakObjectPtr::operator=(param_1 + 0x5d,param_2);
      *(undefined4 *)(param_1 + 0x5e) = 1;
      FUN_1409b69f0(param_1);
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x4d);
      (**(code **)(*param_1 + 0x260))(param_1);
    }
  }
  return;
}



// FUNCTION 1409bdcf0 FUN_1409bdcf0 body=576 status=ok
// SIG undefined FUN_1409bdcf0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1409bdcf0(longlong *param_1)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  longlong *local_88;
  int local_80;
  longlong local_70 [3];
  undefined1 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  fVar1 = *(float *)(lVar3 + 0x790);
  if ((fVar1 != *(float *)(param_1 + 0x35)) || (*(char *)((longlong)param_1 + 0x174) != '\0')) {
    uVar9 = FUN_142c98860(param_1 + 0x27,param_1[0x22]);
    if (param_1[0x26] == 0) {
      *(float *)(param_1 + 0x35) = fVar1;
    }
    else {
      if ((char)param_1[0x2e] != '\0') {
        local_40 = 0;
        local_70[1] = 0xffffffff;
        local_70[2] = 0xffffffff;
        local_50 = 0;
        uStack_48 = 0;
        local_58 = 0;
        local_70[0] = param_1[0x26];
        local_54 = uVar9;
        FWeakObjectPtr::operator=(local_70 + 1,param_1);
        FWeakObjectPtr::operator=(local_70 + 2,param_1[0x22]);
        uVar4 = FUN_142dc4b70(&local_88,param_1[0x22],local_70);
        cVar2 = FUN_142dd3d30(uVar4);
        if (cVar2 != '\0') {
          *(float *)(param_1 + 0x35) = fVar1;
          *(undefined1 *)((longlong)param_1 + 0x1ac) = 1;
        }
      }
      if (*(char *)((longlong)param_1 + 0x171) != '\0') {
        FUN_1409a7ae0(param_1,&local_88);
        uVar6 = 0;
        uVar8 = (ulonglong)((longlong)(local_88 + local_80) + (7 - (longlong)local_88)) >> 3;
        if (local_88 + local_80 < local_88) {
          uVar8 = uVar6;
        }
        plVar7 = local_88;
        if (uVar8 != 0) {
          do {
            lVar3 = *plVar7;
            if (lVar3 != 0) {
              local_70[0] = param_1[0x26];
              local_70[1] = 0xffffffff;
              local_70[2] = 0xffffffff;
              local_40 = 0;
              local_50 = 0;
              uStack_48 = 0;
              local_58 = 0;
              local_54 = uVar9;
              FWeakObjectPtr::operator=(local_70 + 1,param_1);
              lVar5 = lVar3;
              if (*(char *)((longlong)param_1 + 0x172) != '\0') {
                lVar5 = param_1[0x22];
              }
              FWeakObjectPtr::operator=(local_70 + 2,lVar5);
              uVar4 = FUN_142dc4b70(&local_88,lVar3,local_70);
              FUN_142dd3d30(uVar4);
            }
            uVar6 = uVar6 + 1;
            plVar7 = plVar7 + 1;
          } while (uVar6 != uVar8);
        }
        if (local_88 != (longlong *)0x0) {
          FMemory::Free(local_88);
        }
      }
    }
  }
  return;
}



// FUNCTION 1409bdf30 FUN_1409bdf30 body=617 status=ok
// SIG undefined FUN_1409bdf30(void)

ulonglong FUN_1409bdf30(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  longlong *plVar11;
  int local_78;
  int local_74;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
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
  
  uVar5 = FUN_1430ec7c0();
  if ((2 < (int)uVar5) && ((char)param_1[0x3e] != '\0')) {
    lVar6 = param_1[0x4e];
    if (lVar6 == 0) {
      local_58 = *param_2;
      uStack_50 = param_2[1];
      local_48 = *(undefined4 *)(param_2 + 2);
      uStack_44 = *(undefined4 *)((longlong)param_2 + 0x14);
      uStack_40 = *(undefined4 *)(param_2 + 3);
      uStack_3c = *(undefined4 *)((longlong)param_2 + 0x1c);
      local_38 = *(undefined4 *)(param_2 + 4);
      uStack_34 = *(undefined4 *)((longlong)param_2 + 0x24);
      uStack_30 = *(undefined4 *)(param_2 + 5);
      uStack_2c = *(undefined4 *)((longlong)param_2 + 0x2c);
      lVar6 = FUN_1413dda00(param_1,&local_58);
      param_1[0x4e] = lVar6;
      uVar5 = 0;
      if (lVar6 == 0) goto LAB_1409be18c;
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBarrierDestroyed",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_68,pwVar3 + 2,1);
      lVar8 = local_68;
      lVar6 = param_1[0x4e];
      plVar11 = (longlong *)(lVar6 + 0x290);
      FWeakObjectPtr::operator=(&local_78,0);
      local_70 = 0;
      FWeakObjectPtr::operator=(&local_78,param_1);
      local_70 = lVar8;
      local_60 = 0;
      if ((lVar8 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_78), lVar8 != 0)) {
        UObject::FindFunction(lVar8,local_70);
      }
      piVar9 = (int *)*plVar11;
      iVar1 = *(int *)(lVar6 + 0x298);
      for (piVar10 = piVar9; piVar10 != piVar9 + (longlong)iVar1 * 4; piVar10 = piVar10 + 4) {
        if ((((*piVar10 == local_78) && (piVar10[1] == local_74)) ||
            ((cVar4 = FWeakObjectPtr::IsValid(piVar10), cVar4 == '\0' &&
             (cVar4 = FWeakObjectPtr::IsValid(&local_78), cVar4 == '\0')))) &&
           (*(longlong *)(piVar10 + 2) == local_70)) {
          if ((int)((longlong)piVar10 - (longlong)piVar9 >> 4) != -1) goto LAB_1409be108;
          break;
        }
      }
      iVar1 = *(int *)(lVar6 + 0x298);
      *(int *)(lVar6 + 0x298) = iVar1 + 1;
      if (*(int *)(lVar6 + 0x29c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
      }
      piVar9 = (int *)((longlong)iVar1 * 0x10 + *plVar11);
      *piVar9 = local_78;
      piVar9[1] = local_74;
      *(longlong *)(piVar9 + 2) = local_70;
LAB_1409be108:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
      lVar6 = param_1[0x4e];
      lVar8 = FUN_1409aa9f0(param_1[0x22]);
      if (lVar8 != 0) {
        local_68 = lVar6;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (lVar8 + 0x70,&local_68);
      }
      (**(code **)(*param_1 + 0x260))(param_1);
      lVar6 = param_1[0x4e];
    }
    uVar5 = FUN_14223d270(lVar6,param_2,0,0,0);
    return uVar5;
  }
LAB_1409be18c:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 1409be1a0 thunk_FUN_1430edee0 body=5 status=ok
// SIG undefined thunk_FUN_1430edee0(void)

undefined8 thunk_FUN_1430edee0(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((param_2 != DAT_146b4ae20) && (iVar7 = *(int *)(param_1 + 0xb0) + -1, -1 < iVar7)) {
    plVar1 = (longlong *)(param_1 + 0xa8);
    lVar8 = (longlong)iVar7;
    lVar6 = *plVar1;
    pcVar5 = (char *)(lVar6 + 0x68 + lVar8 * 0x70);
    do {
      if (*pcVar5 == param_2) {
        lVar9 = (longlong)iVar7 * 0x70;
        lVar8 = *(longlong *)(lVar6 + 0x40 + lVar9);
        lVar6 = (longlong)*(int *)(lVar6 + 0x48 + lVar9) * 0x30 + lVar8;
        for (; lVar8 != lVar6; lVar8 = lVar8 + 0x30) {
          if (*(char *)(lVar8 + 0x28) != '\0') {
            cVar2 = FUN_142dd3d30(lVar8 + 0x10);
            if (cVar2 != '\0') {
              FUN_142dd9490(lVar8 + 0x10);
            }
            *(undefined1 *)(lVar8 + 0x28) = 0;
          }
        }
        lVar6 = *plVar1;
        if (*(longlong *)(lVar6 + 0x58 + lVar9) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar6 + 0x40 + lVar9) != 0) {
          FMemory::Free();
        }
        iVar4 = *(int *)(param_1 + 0xb0);
        iVar3 = (iVar4 - iVar7) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + lVar9),(void *)((longlong)(iVar7 + 1) * 0x70 + *plVar1),
                     (longlong)iVar3 * 0x70);
          iVar4 = *(int *)(param_1 + 0xb0);
        }
        *(int *)(param_1 + 0xb0) = iVar4 + -1;
        TArray<FSvoNode,FDefaultAllocator>::ResizeShrink(plVar1);
        return 1;
      }
      iVar7 = iVar7 + -1;
      pcVar5 = pcVar5 + -0x70;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  return 0;
}



// FUNCTION 1409be1b0 FUN_1409be1b0 body=411 status=ok
// SIG undefined FUN_1409be1b0(void)

void FUN_1409be1b0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res10 [8];
  longlong *local_18;
  int local_10;
  
  iVar2 = FUN_1430ec7c0();
  if (iVar2 != 3) {
    return;
  }
  if (*(int *)(param_1 + 0x264) != -1) {
    return;
  }
  plVar4 = (longlong *)FUN_1413e25e0(param_1,local_res10);
  plVar4 = (longlong *)*plVar4;
  if (plVar4 == (longlong *)0x0) goto LAB_1409be331;
  lVar6 = plVar4[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
    lVar6 = plVar4[0x1f];
    if (lVar6 == 0) goto LAB_1409be331;
  }
  lVar5 = FUN_1413ffb90();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_1409be331;
  local_18 = (longlong *)0x0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  local_10 = 3;
  local_18 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_14419c988;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    plVar4[2] = (longlong)FUN_1409b0de0;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_14419c9d0;
  }
  uVar3 = FUN_142d369f0(lVar6 + 0x2478,*(undefined8 *)(param_1 + 0x110),&local_18);
  *(undefined4 *)(param_1 + 0x264) = uVar3;
  if (local_10 == 0) {
LAB_1409be31b:
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  else if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
    goto LAB_1409be31b;
  }
  if (*(int *)(param_1 + 0x264) != -1) {
    return;
  }
LAB_1409be331:
  FUN_1409add40(param_1,2);
  return;
}



// FUNCTION 1409be350 FUN_1409be350 body=228 status=ok
// SIG undefined FUN_1409be350(void)

void FUN_1409be350(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  longlong local_res8;
  
  while( true ) {
    if ((char)param_1[6] == '\0') {
      lVar1 = *param_1;
      if (lVar1 != 0) {
        iVar2 = *(int *)((longlong)param_1 + 0x14);
        if (((iVar2 < 0) || (*(int *)(lVar1 + 0xa8) <= iVar2)) ||
           ((longlong)iVar2 * 0x38 + *(longlong *)(lVar1 + 0xa0) == 0)) {
          bVar4 = SBORROW4(*(int *)(lVar1 + 0x17c),*(int *)(lVar1 + 0x178));
          bVar3 = *(int *)(lVar1 + 0x17c) - *(int *)(lVar1 + 0x178) < 0;
        }
        else if (param_1[1] == 0) {
          bVar4 = false;
          bVar3 = param_2 < 0;
        }
        else {
          iVar2 = *(int *)(param_1[1] + 0x30);
          bVar4 = SBORROW4(param_2,iVar2);
          bVar3 = param_2 - iVar2 < 0;
        }
        if (bVar4 == bVar3) {
          FUN_1409ba9f0(param_1,1);
        }
      }
      if ((char)param_1[6] == '\0') {
        return;
      }
    }
    if (*(char *)((longlong)param_1 + 0x31) == '\0') {
      lVar1 = param_1[1];
      if (lVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(lVar1 + 0x30);
      }
      if (iVar2 <= param_2) {
        *(undefined1 *)((longlong)param_1 + 0x31) = 1;
        if (*param_1 == 0) {
          return;
        }
        if (lVar1 != 0) {
          local_res8 = lVar1;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (*param_1 + 0x28,&local_res8);
        }
      }
    }
    lVar1 = *param_1;
    if (lVar1 == 0) break;
    iVar2 = (int)param_1[3];
    if (iVar2 < 0) {
      return;
    }
    if (*(int *)(lVar1 + 0xa8) <= iVar2) {
      return;
    }
    param_1 = (longlong *)((longlong)iVar2 * 0x38 + *(longlong *)(lVar1 + 0xa0));
    if (param_1 == (longlong *)0x0) {
      return;
    }
  }
  return;
}



// FUNCTION 1409be440 FUN_1409be440 body=137 status=ok
// SIG undefined FUN_1409be440(void)

void FUN_1409be440(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x90);
  plVar1 = plVar4 + (longlong)*(int *)(param_1 + 0x98) * 5;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 5) {
    lVar5 = *plVar4;
    if ((lVar5 != 0) && (0 < (int)plVar4[4])) {
      iVar2 = *(int *)plVar4[3];
      if ((-1 < iVar2) &&
         ((iVar2 < *(int *)(lVar5 + 0xa8) &&
          (lVar5 = (longlong)iVar2 * 0x38 + *(longlong *)(lVar5 + 0xa0), lVar5 != 0)))) {
        uVar3 = FUN_1409a0fe0(plVar4);
        FUN_1409be350(lVar5,uVar3);
      }
    }
  }
  return;
}



// FUNCTION 1409be4d0 FUN_1409be4d0 body=27 status=ok
// SIG undefined FUN_1409be4d0(void)

void FUN_1409be4d0(undefined8 param_1)

{
  FUN_1409a3680();
  FUN_1430ef200(param_1);
  return;
}



// FUNCTION 1409be4f0 FUN_1409be4f0 body=415 status=ok
// SIG undefined FUN_1409be4f0(void)

void FUN_1409be4f0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  lVar2 = (**(code **)(*param_1 + 0x10))();
  if (lVar2 != 0) {
    lVar3 = (**(code **)(*param_1 + 8))(param_1);
    lVar4 = UObject::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar4 = (longlong)*(int *)(lVar2 + 0x218), *(int *)(lVar2 + 0x218) != 0)) {
      lVar8 = **(longlong **)(lVar2 + 0x210);
      iVar12 = 0;
      if (lVar8 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)(*(longlong **)(lVar2 + 0x210))[1];
      }
      if ((plVar5 == param_1) && (lVar8 == lVar3)) {
        bVar9 = 0;
      }
      else {
        bVar9 = 1;
      }
      lVar8 = 0;
      iVar10 = 0;
      do {
        lVar8 = lVar8 + 1;
        iVar11 = iVar10 + 1;
        if (lVar8 < lVar4) {
          plVar5 = (longlong *)(lVar8 * 0x10 + *(longlong *)(lVar2 + 0x210));
          do {
            if (*plVar5 == 0) {
              plVar7 = (longlong *)0x0;
            }
            else {
              plVar7 = (longlong *)plVar5[1];
            }
            if ((plVar7 == param_1) && (*plVar5 == lVar3)) {
              bVar6 = 0;
            }
            else {
              bVar6 = 1;
            }
            if (bVar9 != bVar6) break;
            iVar11 = iVar11 + 1;
            lVar8 = lVar8 + 1;
            plVar5 = plVar5 + 2;
          } while (lVar8 < lVar4);
        }
        if (bVar9 != 0) {
          if (iVar12 != iVar10) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar12 * 0x10 + *(longlong *)(lVar2 + 0x210)),
                       (void *)((longlong)iVar10 * 0x10 + *(longlong *)(lVar2 + 0x210)),
                       (longlong)(iVar11 - iVar10) << 4);
          }
          iVar12 = iVar12 + (iVar11 - iVar10);
        }
        bVar9 = bVar9 ^ 1;
        iVar10 = iVar11;
      } while (lVar8 < lVar4);
      *(int *)(lVar2 + 0x218) = iVar12;
    }
  }
  return;
}



// FUNCTION 1409be690 FUN_1409be690 body=419 status=ok
// SIG undefined FUN_1409be690(void)

void FUN_1409be690(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  if (param_3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0xb8);
    lVar1 = (longlong)*(int *)(param_1 + 0xc0) * 0x38 + lVar5;
    for (; lVar5 != lVar1; lVar5 = lVar5 + 0x38) {
      if (*(longlong *)(lVar5 + 0x20) == param_3) goto LAB_1409be6d7;
    }
    lVar5 = 0;
LAB_1409be6d7:
    if (lVar5 != 0) {
      if (*(char *)(lVar5 + 0x30) != '\0') {
        *(undefined1 *)(lVar5 + 0x30) = 0;
        if (*(longlong *)(param_1 + 0xb0) != 0) {
          TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
                    (*(longlong *)(param_1 + 0xb0) + 0x2f0,param_1);
        }
      }
      lVar5 = (longlong)*(int *)(param_1 + 0xc0);
      if (*(int *)(param_1 + 0xc0) != 0) {
        iVar6 = 0;
        bVar7 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x20) != param_3;
        lVar1 = 0;
        iVar3 = 0;
        do {
          lVar1 = lVar1 + 1;
          iVar4 = iVar3 + 1;
          if (lVar1 < lVar5) {
            plVar2 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 0x20 + lVar1 * 0x38);
            do {
              if (bVar7 != (*plVar2 != param_3)) break;
              iVar4 = iVar4 + 1;
              lVar1 = lVar1 + 1;
              plVar2 = plVar2 + 7;
            } while (lVar1 < lVar5);
          }
          if (bVar7 != false) {
            if (iVar6 != iVar3) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar6 * 0x38 + *(longlong *)(param_1 + 0xb8)),
                         (void *)((longlong)iVar3 * 0x38 + *(longlong *)(param_1 + 0xb8)),
                         (longlong)(iVar4 - iVar3) * 0x38);
            }
            iVar6 = iVar6 + (iVar4 - iVar3);
          }
          bVar7 = (bool)(bVar7 ^ 1);
          iVar3 = iVar4;
        } while (lVar1 < lVar5);
        *(int *)(param_1 + 0xc0) = iVar6;
      }
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                (param_1);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      if (*(int *)(param_1 + 0x54) == -1) {
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      *(undefined8 *)(param_1 + 0xa8) = 0xffffffffffffffff;
      if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x260))();
      }
    }
  }
  return;
}



// FUNCTION 1409be840 FUN_1409be840 body=105 status=ok
// SIG undefined FUN_1409be840(void)

void FUN_1409be840(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  if (lVar1 != 0) {
    lVar3 = FUN_1413f82e0();
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
      FUN_1407665e0(lVar1 + 0xf18,param_1);
    }
  }
  return;
}



// FUNCTION 1409be8b0 FUN_1409be8b0 body=466 status=ok
// SIG undefined FUN_1409be8b0(void)

void FUN_1409be8b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int local_res10 [2];
  longlong *local_res18;
  undefined1 local_res20 [8];
  
  if ((*param_2 != 0) && ((longlong *)param_2[1] != (longlong *)0x0)) {
    lVar7 = *(longlong *)(param_1 + 0x168);
    plVar8 = (longlong *)0x0;
    plVar3 = plVar8;
    if (lVar7 != 0) {
      plVar3 = *(longlong **)(param_1 + 0x170);
    }
    if ((plVar3 == (longlong *)param_2[1]) && (lVar7 == *param_2)) {
      plVar3 = plVar8;
      if (lVar7 != 0) {
        plVar3 = *(longlong **)(param_1 + 0x170);
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))();
      lVar7 = *plVar3;
      lVar9 = (longlong)(int)plVar3[1] * 0x10 + lVar7;
      for (; lVar7 != lVar9; lVar7 = lVar7 + 0x10) {
        plVar4 = (longlong *)FUN_1409aabf0(lVar7,local_res20);
        plVar3 = plVar8;
        if (*plVar4 != 0) {
          plVar5 = (longlong *)FUN_1414425d0();
          for (plVar1 = (longlong *)*plVar4;
              (plVar3 = plVar8, plVar1 != (longlong *)0x0 &&
              (plVar3 = (longlong *)*plVar4, plVar1 != plVar5)); plVar1 = (longlong *)plVar1[6]) {
          }
        }
        local_res18 = plVar3;
        FUN_1409a61c0(param_1 + 0xc0,local_res10,&local_res18);
        plVar3 = plVar8;
        if (local_res10[0] != -1) {
          plVar3 = (longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)local_res10[0] * 0x18);
        }
        plVar4 = plVar3 + 1;
        if (plVar3 == (longlong *)0x0) {
          plVar4 = plVar8;
        }
        if (plVar4 != (longlong *)0x0) {
          plVar3 = *(longlong **)(param_1 + 0xb0);
          local_res18 = (longlong *)*plVar4;
          plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0xb8) * 6;
          for (; plVar3 != plVar4; plVar3 = plVar3 + 6) {
            if ((local_res18 != (longlong *)0x0) && ((longlong *)plVar3[1] == local_res18)) {
              iVar6 = *(int *)((longlong)plVar3 + 0x2c) - *(int *)(lVar7 + 0xc);
              if (*(int *)((longlong)plVar3 + 0x2c) != iVar6) {
                lVar2 = *plVar3;
                *(int *)((longlong)plVar3 + 0x2c) = iVar6;
                if (lVar2 != 0) {
                  FUN_1409b5dc0(lVar2,plVar3);
                  local_res18 = (longlong *)plVar3[1];
                  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                            (lVar2 + 0x38,&local_res18);
                }
              }
              break;
            }
          }
        }
      }
      *(undefined8 *)(param_1 + 0x168) = 0;
      *(undefined8 *)(param_1 + 0x170) = 0;
    }
  }
  return;
}



// FUNCTION 1409bea90 FUN_1409bea90 body=80 status=ok
// SIG undefined FUN_1409bea90(void)

void FUN_1409bea90(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_18 [16];
  
  if (param_2 != 0) {
    uVar1 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
  }
  FUN_1409be690(param_1 + 0x560,local_18,param_3);
  return;
}



// FUNCTION 1409beae0 FUN_1409beae0 body=293 status=ok
// SIG undefined FUN_1409beae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409beae0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x510) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x510) + 0x270);
  }
  if (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x168);
    uVar2 = _DAT_1468b5d90;
    uVar3 = DAT_1468b5d98;
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x220);
      uVar3 = *(undefined4 *)(lVar1 + 0x228);
    }
    lVar1 = *(longlong *)(param_1 + 0x168);
    if (lVar1 == 0) {
      local_2c = _DAT_1468b5d90;
      local_24 = DAT_1468b5d98;
    }
    else {
      local_2c = *(undefined8 *)(lVar1 + 0x220);
      local_24 = *(undefined4 *)(lVar1 + 0x228);
    }
    local_18 = uVar2;
    local_10 = uVar3;
    (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x8f0))
              (*(longlong **)(param_1 + 0x4b0),*(undefined8 *)(param_1 + 0x4b8),&local_18,0);
    local_10 = local_24;
    local_18 = local_2c;
    (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x908))
              (*(longlong **)(param_1 + 0x4b0),*(undefined8 *)(param_1 + 0x4b8),&local_18,0,uVar2,
               uVar3);
  }
  return;
}



// FUNCTION 1409bec10 FUN_1409bec10 body=178 status=ok
// SIG undefined FUN_1409bec10(void)

void FUN_1409bec10(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar5 = FUN_14233f450();
  if (iVar5 == 3) {
    bVar3 = false;
    *(int *)(param_1 + 0x394) = *(int *)(param_1 + 0x394) + 1;
    iVar5 = *(int *)(param_1 + 0x394);
    iVar6 = *(int *)(param_1 + 0x388) + -1;
    lVar8 = (longlong)iVar6;
    if (-1 < iVar6) {
      lVar7 = lVar8 << 4;
      bVar3 = false;
      do {
        lVar1 = *(longlong *)(param_1 + 0x380);
        if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
           (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_1409bec82:
          bVar3 = true;
        }
        else {
          cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
          if (cVar4 == '\0') goto LAB_1409bec82;
        }
        lVar7 = lVar7 + -0x10;
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
      iVar5 = *(int *)(param_1 + 0x394);
    }
    *(int *)(param_1 + 0x394) = iVar5 + -1;
    if (bVar3) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x380),0)
      ;
    }
  }
  return;
}



// FUNCTION 1409becd0 FUN_1409becd0 body=295 status=ok
// SIG undefined FUN_1409becd0(void)

void FUN_1409becd0(longlong param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  
  pcVar8 = *(char **)(param_1 + 0x18);
  pcVar1 = pcVar8 + (longlong)*(int *)(param_1 + 0x20) * 0x28;
  if (pcVar8 != pcVar1) {
    pcVar7 = pcVar8 + 0xc;
    do {
      if (param_2 == '\x02') {
        cVar2 = pcVar7[-0xb];
LAB_1409bed28:
        if (cVar2 == '\0') goto LAB_1409bed83;
        if (pcVar7[0x18] == '\0') {
          lVar3 = FWeakObjectPtr::Get(pcVar7);
          lVar4 = FWeakObjectPtr::Get(pcVar7 + 8);
          if ((lVar3 != 0) && (lVar4 != 0)) {
            uVar5 = FWeakObjectPtr::Get(pcVar7 + -8);
            uVar6 = FWeakObjectPtr::Get(pcVar7 + 0x10);
            FUN_140a95900(lVar3,lVar4,uVar6,uVar5);
            pcVar7[0x18] = '\x01';
          }
        }
      }
      else {
        if (param_2 == '\x03') {
          cVar2 = *pcVar8;
          goto LAB_1409bed28;
        }
LAB_1409bed83:
        if (pcVar7[0x18] != '\0') {
          lVar3 = FWeakObjectPtr::Get(pcVar7);
          lVar4 = FWeakObjectPtr::Get(pcVar7 + 8);
          if ((lVar3 != 0) && (lVar4 != 0)) {
            uVar5 = FWeakObjectPtr::Get(pcVar7 + -8);
            FUN_140a9b1e0(lVar3,lVar4,uVar5);
            pcVar7[0x18] = '\0';
          }
        }
      }
      pcVar8 = pcVar8 + 0x28;
      pcVar7 = pcVar7 + 0x28;
    } while (pcVar8 != pcVar1);
  }
  return;
}



// FUNCTION 1409bee20 FUN_1409bee20 body=48 status=ok
// SIG undefined FUN_1409bee20(void)

undefined1 FUN_1409bee20(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1423ac7e0(*param_2);
  if (lVar1 != 0) {
    UAnimInstance::Montage_JumpToSection(lVar1,**(undefined8 **)(param_1 + 8),0);
  }
  return 1;
}



// FUNCTION 1409beed0 FUN_1409beed0 body=200 status=ok
// SIG undefined FUN_1409beed0(void)

int FUN_1409beed0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar2 = (int)param_1[1];
  lVar3 = *param_1;
  lVar1 = (longlong)iVar2 * 0x18;
  if (lVar3 != lVar1 + lVar3) {
    lVar5 = lVar3;
    do {
      if (*(longlong *)(lVar5 + 0x10) == param_2[2]) {
        iVar4 = (int)((lVar5 - lVar3) / 0x18);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      lVar5 = lVar5 + 0x18;
    } while (lVar5 != lVar1 + lVar3);
  }
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar2);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar1 + lVar3) = *param_2;
  lVar5 = param_2[1];
  *(longlong *)(lVar1 + 8 + lVar3) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = param_2[2];
  return iVar2;
}



// FUNCTION 1409befa0 FUN_1409befa0 body=127 status=ok
// SIG undefined FUN_1409befa0(void)

longlong FUN_1409befa0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar2 = FUN_142e66e20();
  lVar3 = FUN_1424723e0(param_1,param_2,uVar2);
  if (lVar3 != 0) {
    lVar4 = FUN_142e66e20();
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



// FUNCTION 1409bf020 FUN_1409bf020 body=232 status=ok
// SIG undefined FUN_1409bf020(void)

void FUN_1409bf020(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FExposedValueCopyRecord,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(param_2 + 8);
    puVar2 = (undefined8 *)*param_1;
    do {
      *puVar2 = puVar1[-1];
      puVar2[1] = *puVar1;
      puVar2[2] = puVar1[1];
      *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar1 + 2);
      *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)((longlong)puVar1 + 0x14);
      puVar2[4] = puVar1[3];
      puVar2[5] = puVar1[4];
      *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(puVar1 + 5);
      puVar2[7] = puVar1[6];
      puVar2[8] = puVar1[7];
      puVar2[9] = puVar1[8];
      puVar2[10] = puVar1[9];
      *(undefined4 *)(puVar2 + 0xb) = *(undefined4 *)(puVar1 + 10);
      *(undefined4 *)((longlong)puVar2 + 0x5c) = *(undefined4 *)((longlong)puVar1 + 0x54);
      *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(puVar1 + 0xb);
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0xd;
      puVar2 = puVar2 + 0xd;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1409bf110 FUN_1409bf110 body=248 status=ok
// SIG undefined FUN_1409bf110(void)

void FUN_1409bf110(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FSimpleLinkNavModifier,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4)
  ;
  if (param_3 != 0) {
    puVar1 = (undefined4 *)(param_2 + 4);
    puVar2 = (undefined4 *)*param_1;
    do {
      *puVar2 = puVar1[-1];
      puVar2[1] = *puVar1;
      *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar1 + 1);
      *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 3);
      *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(puVar1 + 5);
      puVar2[8] = puVar1[7];
      puVar2[9] = puVar1[8];
      *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(puVar1 + 9);
      *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(puVar1 + 0xb);
      puVar2[0xe] = puVar1[0xd];
      *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(puVar1 + 0xf);
      *(undefined8 *)(puVar2 + 0x12) = *(undefined8 *)(puVar1 + 0x11);
      *(undefined8 *)(puVar2 + 0x14) = *(undefined8 *)(puVar1 + 0x13);
      *(undefined8 *)(puVar2 + 0x16) = *(undefined8 *)(puVar1 + 0x15);
      puVar2[0x18] = puVar1[0x17];
      puVar2[0x19] = puVar1[0x18];
      puVar2[0x1a] = puVar1[0x19];
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0x1c;
      puVar2 = puVar2 + 0x1c;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1409bf210 FUN_1409bf210 body=672 status=ok
// SIG undefined FUN_1409bf210(void)

uint * FUN_1409bf210(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  char cVar13;
  bool bVar14;
  uint local_res8 [2];
  uint local_res10;
  uint local_res14;
  undefined8 *local_res18;
  
  iVar11 = 1;
  uVar10 = 0xffffffff;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar12 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar12 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar12 = *(uint *)(param_1 + 6);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)(int)uVar12 * 0x14);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x14) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = uVar12;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 +
                   (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar12 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)(int)uVar12 * 0x14);
  puVar2 = (uint *)*local_res18;
  puVar3 = (uint *)local_res18[1];
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  puVar1[2] = *puVar3;
  puVar1[3] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = puVar1[1];
    local_res10 = *puVar1;
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    uVar12 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar9 * 0x14),puVar1,0xc);
      uVar6 = *param_2;
      bVar4 = (byte)uVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x14) = uVar6;
      }
      lVar9 = *param_1;
      *(undefined4 *)(lVar9 + (longlong)(int)uVar6 * 0x14) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar10 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar9 + 4 + (longlong)(int)uVar6 * 0x14) = uVar10;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar6;
      plVar7 = (longlong *)param_1[4];
      *param_2 = uVar12;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1409bf48a;
    }
  }
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar12) {
    uVar6 = (uVar12 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar13 = '\0';
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar11;
    }
    uVar6 = (uVar12 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar13 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    uVar12 = (*puVar1 ^ puVar1[1]) & (int)param_1[9] - 1U;
    puVar1[4] = uVar12;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar1[3] = *(uint *)((longlong)plVar7 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(uint *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TTuple<FWeakObjectPtr,int>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1409bf48a:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1409bf4b0 FUN_1409bf4b0 body=684 status=ok
// SIG undefined FUN_1409bf4b0(void)

uint * FUN_1409bf4b0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  undefined4 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  uint local_res8 [2];
  
  iVar10 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar9 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar9 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar9 = *(uint *)(param_1 + 6);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)(int)uVar9 * 0x18);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x18) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar9;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)(int)uVar9 * 0x18);
  puVar2 = (undefined4 *)param_3[1];
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  *(undefined4 *)(_Src + 1) = *puVar2;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    uVar5 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar8 * 0x18),_Src,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,uVar9,1);
      *param_2 = uVar5;
      goto LAB_1409bf72e;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar11 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar10;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar11 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar10 = (int)(*_Src >> 4);
    uVar5 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar12 = -(uVar5 + iVar10) ^ uVar5 >> 0xd;
    uVar13 = (iVar10 - uVar5) - uVar12 ^ uVar12 >> 0xc;
    uVar5 = (uVar5 - uVar13) - uVar12 ^ uVar13 << 0x10;
    uVar12 = (uVar12 - uVar5) - uVar13 ^ uVar5 >> 5;
    uVar13 = (uVar13 - uVar5) - uVar12 ^ uVar12 >> 3;
    uVar5 = (uVar5 - uVar13) - uVar12 ^ uVar13 << 10;
    uVar13 = ((uVar12 - uVar5) - uVar13 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar13;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         uVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1409bf72e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1409bf760 FUN_1409bf760 body=1020 status=ok
// SIG undefined FUN_1409bf760(void)

void FUN_1409bf760(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *local_b8;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong *local_60;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  plVar13 = (longlong *)0x0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  plVar14 = (longlong *)(param_1 + 0x2b0);
  local_b8 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_a0 = (uint *)(param_1 + 0x2c0);
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = 1;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar1 != 0) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = *puVar12;
    plVar6 = plVar13;
    plVar10 = plVar13;
    while (uVar7 == 0) {
      iVar4 = (int)plVar6;
      uStack_90 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_90;
      local_a8 = iVar4 + 1;
      plVar6 = (longlong *)(ulonglong)local_a8;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1409bf85d;
      uVar7 = puVar12[(longlong)iVar4 + 1];
    }
    uStack_a4 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_94 = (uStack_90 - iVar4) + 0x1f;
    if ((int)uVar1 < (int)uStack_94) {
LAB_1409bf85d:
      uStack_94 = uVar1;
    }
  }
  local_98 = 0xffffffff;
  uStack_74 = *(uint *)(param_1 + 0x2d8);
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  uStack_68 = CONCAT44(uStack_8c,uStack_90);
  uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
  uVar11 = uStack_74 & 0xffffffe0;
  uStack_58 = local_a8;
  uStack_54 = uStack_a4;
  plVar6 = plVar13;
  plVar10 = plVar13;
  local_88 = plVar14;
  local_50 = puStack_a0;
  local_40 = uStack_68;
  local_60 = plVar14;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  uVar7 = uStack_74;
  if (uStack_74 != uVar1) {
    puVar12 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar12 = puStack_a0;
    }
    uVar7 = puVar12[(int)uStack_74 >> 5] & uStack_78;
    iVar4 = (int)uStack_74 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1409bf935;
      uVar7 = puVar12[(longlong)iVar4 + 1];
      uStack_78 = 0xffffffff;
      iVar4 = iVar4 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_74 = (uVar11 - iVar4) + 0x1f;
    uVar7 = uStack_74;
    if ((int)uVar1 < (int)uStack_74) {
LAB_1409bf935:
      uStack_74 = uVar1;
      uVar7 = uVar1;
    }
  }
  while( true ) {
    if ((uStack_44 == uVar7) && (local_50 == puStack_a0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_60 == plVar14)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar4 = (int)plVar10;
    if (!bVar3) break;
    lVar9 = *(longlong *)(*local_60 + (longlong)(int)uStack_44 * 0x10);
    if (lVar9 != 0) {
      lVar5 = FUN_142e5c1e0();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar9;
      }
    }
    if ((param_3 != '\0') && (lVar9 != 0)) {
      lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_b0 = iVar4 + 1;
        if ((int)plVar6 < (int)local_b0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,plVar10);
          plVar6 = (longlong *)(ulonglong)uStack_ac;
          plVar13 = local_b8;
        }
        plVar10 = (longlong *)(ulonglong)local_b0;
        plVar13[iVar4] = lVar9;
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  }
  if (param_3 != '\0') {
    uVar8 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    uStack_ac = 0;
    uVar15 = (ulonglong)((longlong)(plVar13 + iVar4) + (7 - (longlong)plVar13)) >> 3;
    if (plVar13 + iVar4 < plVar13) {
      uVar15 = uVar8;
    }
    plVar14 = plVar13;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_1409bf760(*(longlong *)(*plVar14 + 0x2d8),&local_b8,1);
          uVar1 = local_b0;
          lVar9 = (longlong)(int)local_b0;
          if (local_b0 != 0) {
            iVar4 = (int)param_2[1];
            if (*(int *)((longlong)param_2 + 0xc) < (int)(local_b0 + iVar4)) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
              iVar4 = (int)param_2[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar4 * 8),local_b8,lVar9 << 3);
            *(uint *)(param_2 + 1) = (int)param_2[1] + uVar1;
            local_b0 = 0;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    FMemory::Free(plVar13);
  }
  return;
}



// FUNCTION 1409bfb60 FUN_1409bfb60 body=367 status=ok
// SIG undefined FUN_1409bfb60(void)

void FUN_1409bfb60(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  
  iVar6 = (param_2 + -2) / 2;
  if (-1 < iVar6) {
    iVar11 = iVar6 * 2 + 1;
    iVar9 = iVar11;
    iVar12 = iVar6;
joined_r0x0001409bfb8a:
    do {
      if (iVar11 < param_2) {
        iVar7 = iVar6 * 2 + 1;
        iVar11 = iVar6 * 2 + 2;
        iVar8 = iVar7;
        if ((iVar11 < param_2) &&
           (fVar4 = *(float *)((longlong)param_1 + (longlong)iVar7 * 8 + 4),
           pfVar3 = (float *)((longlong)param_1 + (longlong)iVar11 * 8 + 4), iVar8 = iVar11,
           *pfVar3 <= fVar4 && fVar4 != *pfVar3)) {
          iVar8 = iVar7;
        }
        puVar10 = param_1 + iVar6;
        fVar4 = *(float *)((longlong)param_1 + (longlong)iVar8 * 8 + 4);
        puVar1 = param_1 + iVar8;
        if (*(float *)((longlong)puVar10 + 4) <= fVar4 && fVar4 != *(float *)((longlong)puVar10 + 4)
           ) {
          if (puVar10 != puVar1) {
            uVar5 = *puVar10;
            *puVar10 = *puVar1;
            *puVar1 = uVar5;
          }
          iVar11 = iVar8 * 2 + 1;
          iVar6 = iVar8;
          goto joined_r0x0001409bfb8a;
        }
      }
      iVar11 = iVar9 + -2;
      iVar6 = iVar12 + -1;
      iVar9 = iVar11;
      iVar12 = iVar6;
    } while (-1 < iVar6);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar10 = param_1 + param_2;
    do {
      if (param_1 != puVar10) {
        uVar5 = *param_1;
        *param_1 = *puVar10;
        *puVar10 = uVar5;
      }
      iVar6 = 0;
      if (1 < param_2) {
        do {
          iVar11 = iVar6 * 2 + 1;
          iVar12 = iVar6 * 2 + 2;
          iVar9 = iVar11;
          if ((iVar12 < param_2) &&
             (fVar4 = *(float *)((longlong)param_1 + (longlong)iVar11 * 8 + 4),
             pfVar3 = (float *)((longlong)param_1 + (longlong)iVar12 * 8 + 4), iVar9 = iVar12,
             *pfVar3 <= fVar4 && fVar4 != *pfVar3)) {
            iVar9 = iVar11;
          }
          puVar1 = param_1 + iVar6;
          fVar4 = *(float *)((longlong)param_1 + (longlong)iVar9 * 8 + 4);
          puVar2 = param_1 + iVar9;
          if (fVar4 < *(float *)((longlong)puVar1 + 4) || fVar4 == *(float *)((longlong)puVar1 + 4))
          break;
          if (puVar1 != puVar2) {
            uVar5 = *puVar1;
            *puVar1 = *puVar2;
            *puVar2 = uVar5;
          }
          iVar6 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar10 = puVar10 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1409bfcd0 FUN_1409bfcd0 body=619 status=ok
// SIG undefined FUN_1409bfcd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1409bfcd0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
    local_318 = (undefined4)(longlong)(fVar11 + fVar11);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar6 = &local_328;
    do {
      puVar10 = (undefined8 *)*plVar6;
      puVar8 = (undefined8 *)plVar6[1];
      lVar2 = plVar6[2];
      local_338._0_4_ = (int)lVar2;
      lVar4 = ((longlong)puVar8 - (longlong)puVar10 >> 3) + 1;
      puVar9 = puVar10;
      if ((int)local_338 != 0) {
LAB_1409bfd90:
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = lVar4 + 1;
          }
          puVar10 = puVar9 + (lVar4 >> 1);
          if (puVar10 != puVar9) {
            uVar3 = *puVar10;
            *puVar10 = *puVar9;
            *puVar9 = uVar3;
          }
          puVar7 = puVar8 + 1;
          puVar5 = puVar9;
LAB_1409bfdc7:
          puVar10 = puVar5 + 1;
          if (puVar10 <= puVar8) goto code_r0x0001409bfdd0;
          goto LAB_1409bfde0;
        }
        for (; puVar10 = puVar9, puVar7 = puVar9, puVar9 < puVar8; puVar8 = puVar8 + -1) {
          while (puVar5 = puVar7 + 1, puVar5 <= puVar8) {
            pfVar1 = (float *)((longlong)puVar7 + 0xc);
            puVar7 = puVar5;
            if (*(float *)((longlong)puVar10 + 4) < *pfVar1) {
              puVar10 = puVar5;
            }
          }
          if (puVar10 != puVar8) {
            uVar3 = *puVar10;
            *puVar10 = *puVar8;
            *puVar8 = uVar3;
          }
        }
        goto LAB_1409bfeb6;
      }
LAB_1409bfea7:
      local_338 = lVar2;
      FUN_1409bfb60(puVar10,lVar4,param_3,param_4);
LAB_1409bfeb6:
      plVar6 = plVar6 + -3;
    } while (&local_328 <= plVar6);
  }
  return;
code_r0x0001409bfdd0:
  pfVar1 = (float *)((longlong)puVar5 + 0xc);
  puVar5 = puVar10;
  if (*pfVar1 < *(float *)((longlong)puVar9 + 4) || *pfVar1 == *(float *)((longlong)puVar9 + 4))
  goto LAB_1409bfdc7;
LAB_1409bfde0:
  do {
    puVar5 = puVar7;
    puVar7 = puVar5 + -1;
    if (puVar7 <= puVar9) break;
  } while (*(float *)((longlong)puVar9 + 4) < *(float *)((longlong)puVar5 + -4) ||
           *(float *)((longlong)puVar9 + 4) == *(float *)((longlong)puVar5 + -4));
  if (puVar10 <= puVar7) {
    puVar5 = puVar10;
    if (puVar10 != puVar7) {
      uVar3 = *puVar10;
      *puVar10 = *puVar7;
      *puVar7 = uVar3;
    }
    goto LAB_1409bfdc7;
  }
  if (puVar9 != puVar7) {
    uVar3 = *puVar9;
    *puVar9 = *puVar7;
    *puVar7 = uVar3;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar7 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar8 - (longlong)puVar10 & 0xfffffffffffffff8U)) {
    if (puVar10 < puVar8) {
      *plVar6 = (longlong)puVar10;
      plVar6[1] = (longlong)puVar8;
      *(int *)(plVar6 + 2) = (int)local_338;
      plVar6 = plVar6 + 3;
    }
    if (puVar7 <= puVar9 + 1) goto LAB_1409bfeb6;
    puVar8 = puVar5 + -2;
    puVar10 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar7) {
      *plVar6 = (longlong)puVar9;
      plVar6[1] = (longlong)(puVar5 + -2);
      *(int *)(plVar6 + 2) = (int)local_338;
      plVar6 = plVar6 + 3;
    }
    if (puVar8 <= puVar10) goto LAB_1409bfeb6;
  }
  lVar4 = ((longlong)puVar8 - (longlong)puVar10 >> 3) + 1;
  puVar9 = puVar10;
  if ((int)local_338 == 0) goto LAB_1409bfea7;
  goto LAB_1409bfd90;
}



// FUNCTION 1409bff40 FUN_1409bff40 body=89 status=ok
// SIG undefined FUN_1409bff40(void)

void FUN_1409bff40(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = AGFreezeCharacterCue::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 1409bffa0 FUN_1409bffa0 body=422 status=ok
// SIG undefined FUN_1409bffa0(void)

int FUN_1409bffa0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  iVar3 = (int)param_1[1];
  lVar9 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  iVar10 = 0;
  bVar13 = *(longlong *)(*param_1 + 0x10) != *(longlong *)(*param_2 + 0x10);
  lVar7 = 0;
  iVar11 = 0;
  do {
    lVar8 = lVar7 + 1;
    iVar12 = iVar11 + 1;
    if (lVar8 < lVar9) {
      plVar5 = (longlong *)(*param_1 + (lVar8 + (lVar7 + 2) * 2) * 8);
      do {
        if (bVar13 != (*plVar5 != *(longlong *)(*param_2 + 0x10))) break;
        iVar12 = iVar12 + 1;
        lVar8 = lVar8 + 1;
        plVar5 = plVar5 + 3;
      } while (lVar8 < lVar9);
    }
    iVar6 = iVar12 - iVar11;
    if (bVar13 == false) {
      if (iVar6 != 0) {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar11 * 0x18 + 8);
        do {
          plVar4 = (longlong *)*plVar5;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar5 = plVar5 + 3;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    else {
      if (iVar10 != iVar11) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar10 * 0x18),
                   (void *)(*param_1 + (longlong)iVar11 * 0x18),(longlong)iVar6 * 0x18);
      }
      iVar10 = iVar10 + iVar6;
    }
    bVar13 = (bool)(bVar13 ^ 1);
    lVar7 = lVar8;
    iVar11 = iVar12;
    if (lVar9 <= lVar8) {
      *(int *)(param_1 + 1) = iVar10;
      return iVar3 - iVar10;
    }
  } while( true );
}



// FUNCTION 1409c0150 FUN_1409c0150 body=788 status=ok
// SIG undefined FUN_1409c0150(void)

undefined4 FUN_1409c0150(float *param_1,uint param_2,char param_3,longlong *param_4)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  float fVar11;
  longlong lVar12;
  int *piVar13;
  uint uVar14;
  float *pfVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int local_e8;
  uint uStack_e4;
  float fStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  int iStack_c0;
  uint uStack_bc;
  float *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  float *local_a0;
  undefined8 uStack_98;
  float *pfStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar7 = param_4[1];
  fVar19 = *param_1;
  if (0 < (int)param_2) {
    uVar16 = (ulonglong)param_2;
    pfVar1 = param_1 + 2;
    pfVar2 = param_1 + 6;
    do {
      iVar8 = rand();
      fVar4 = param_1[0xc];
      local_e8 = 0;
      uStack_e4 = 1;
      fVar17 = 0.0;
      fStack_d4 = 0.0;
      iStack_d0 = 0;
      fVar18 = (float)iVar8 * 3.051851e-05 * fVar19;
      if (fVar4 != 0.0) {
        pfVar15 = *(float **)(param_1 + 10);
        if (*(float **)(param_1 + 10) == (float *)0x0) {
          pfVar15 = pfVar2;
        }
        fVar5 = *pfVar15;
        iStack_d0 = 0;
        local_e8 = 0;
        while (fVar5 == 0.0) {
          lVar12 = (longlong)local_e8;
          iStack_d0 = iStack_d0 + 0x20;
          iVar8 = local_e8 + 1;
          bVar6 = (int)(((int)fVar4 - 1U) + ((int)((int)fVar4 - 1U) >> 0x1f & 0x1fU)) >> 5 <=
                  local_e8;
          local_e8 = iVar8;
          if (bVar6) goto LAB_1409c0280;
          fVar5 = pfVar15[lVar12 + 1];
        }
        uStack_e4 = -(int)fVar5 & (uint)fVar5;
        iVar8 = 0x1f;
        if (uStack_e4 != 0) {
          for (; uStack_e4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uStack_e4 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        fStack_d4 = (float)((iStack_d0 - iVar8) + 0x1f);
        if ((int)fVar4 < (int)fStack_d4) {
LAB_1409c0280:
          fStack_d4 = fVar4;
        }
      }
      fVar5 = param_1[0xc];
      uStack_b0 = CONCAT44(fStack_d4,0xffffffff);
      local_a8 = CONCAT44(uStack_cc,iStack_d0);
      uStack_98 = CONCAT44(uStack_e4,local_e8);
      uVar14 = (uint)fVar5 & 0xffffffe0;
      iStack_c0 = local_e8;
      uStack_bc = uStack_e4;
      local_b8 = pfVar2;
      local_a0 = pfVar1;
      pfStack_90 = pfVar2;
      uStack_88 = uStack_b0;
      uStack_80 = local_a8;
      fStack_d4 = fVar5;
      if (fVar5 != fVar4) {
        pfVar15 = *(float **)(param_1 + 10);
        if (*(float **)(param_1 + 10) == (float *)0x0) {
          pfVar15 = pfVar2;
        }
        fVar11 = (float)((uint)pfVar15[(int)fVar5 >> 5] & -1 << (SUB41(fVar5,0) & 0x1f));
        iVar8 = (int)fVar5 >> 5;
        while (fVar11 == 0.0) {
          uVar14 = uVar14 + 0x20;
          if ((int)(((int)fVar4 - 1U) + ((int)((int)fVar4 - 1U) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
          goto LAB_1409c0346;
          fVar11 = pfVar15[(longlong)iVar8 + 1];
          iVar8 = iVar8 + 1;
        }
        uVar9 = -(int)fVar11 & (uint)fVar11;
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
        fStack_d4 = (float)((uVar14 - iVar8) + 0x1f);
        if ((int)fVar4 < (int)fStack_d4) {
LAB_1409c0346:
          fStack_d4 = fVar4;
        }
      }
      while( true ) {
        if ((uStack_b0._4_4_ == fStack_d4) && (local_b8 == pfVar2)) goto LAB_1409c03f6;
        piVar13 = (int *)((longlong)(int)uStack_b0._4_4_ * 0x10 + *(longlong *)pfVar1);
        if (param_3 == '\0') {
          piVar10 = (int *)*param_4;
          piVar3 = piVar10 + (int)param_4[1];
          if (piVar10 != piVar3) {
            do {
              if (*piVar10 == *piVar13) goto LAB_1409c03b8;
              piVar10 = piVar10 + 1;
            } while (piVar10 != piVar3);
          }
        }
        if ((fVar17 <= fVar18) && (fVar18 <= (float)piVar13[1] + fVar17)) break;
        fVar17 = fVar17 + (float)piVar13[1];
LAB_1409c03b8:
        uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_bc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_c0);
      }
      if (param_3 == '\0') {
        fVar19 = fVar19 - (float)piVar13[1];
      }
      iVar8 = (int)param_4[1];
      *(int *)(param_4 + 1) = iVar8 + 1;
      if (*(int *)((longlong)param_4 + 0xc) < iVar8 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_4,iVar8);
      }
      *(int *)(*param_4 + (longlong)iVar8 * 4) = *piVar13;
LAB_1409c03f6:
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  uVar14 = (int)param_4[1] - (int)lVar7;
  return CONCAT31((int3)(uVar14 >> 8),param_2 == uVar14);
}



// FUNCTION 1409c0470 FUN_1409c0470 body=136 status=ok
// SIG undefined FUN_1409c0470(void)

undefined8 * FUN_1409c0470(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  lVar4 = param_2[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = *param_1;
  plVar5 = (longlong *)param_2[1];
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 1409c0500 FUN_1409c0500 body=677 status=ok
// SIG undefined FUN_1409c0500(void)

undefined8 * FUN_1409c0500(undefined8 *param_1)

{
  FUN_140a4e5a0();
  *(undefined1 *)(param_1 + 0x466) = 0;
  *param_1 = &PTR_FUN_1441ba050;
  param_1[0x8b] = &PTR_LAB_1441bacf0;
  param_1[0x116] = &PTR_LAB_1441bad48;
  param_1[0x117] = &PTR_LAB_1441bad70;
  param_1[0x118] = &PTR_LAB_1441badc8;
  param_1[0x119] = &PTR_LAB_1441bae00;
  param_1[0x11a] = &PTR_LAB_1441bae18;
  param_1[0x11b] = &PTR_LAB_1441bae60;
  param_1[0x11c] = &PTR_LAB_1441bae88;
  param_1[0x11d] = &PTR_LAB_1441baeb0;
  param_1[0x11e] = &PTR_LAB_1441baef8;
  param_1[0x11f] = &PTR_LAB_1441baf10;
  param_1[0x1af] = &PTR_LAB_1441baf28;
  param_1[0x1b0] = &PTR_StartProfileThreadUsage_1441baf48;
  param_1[0x1b1] = &PTR_LAB_1441baf78;
  param_1[0x1b2] = &PTR_LAB_1441bb148;
  param_1[0x1b3] = &PTR_LAB_1441bb170;
  param_1[0x1b4] = &PTR_FUN_1441bb240;
  param_1[0x1b5] = &PTR_LAB_1441bb258;
  param_1[0x1b6] = &PTR_LAB_1441bb2a8;
  param_1[0x1b7] = &PTR_LAB_1441bb2c0;
  param_1[0x1b8] = &PTR_LAB_1441bb2d8;
  param_1[0x1b9] = &PTR_LAB_1441bb2f8;
  param_1[0x1c4] = &PTR_LAB_1441bb330;
  param_1[0x1c5] = &PTR_LAB_1441bb370;
  param_1[0x1c6] = &PTR_LAB_1441bb398;
  param_1[0x1c7] = &PTR_LAB_1441bb3b0;
  param_1[0x1c8] = &PTR_LAB_1441bb3d8;
  param_1[0x1c9] = &PTR_LAB_1441bb408;
  param_1[0x1ca] = &PTR_LAB_1441bb430;
  param_1[0x453] = &PTR_LAB_1441bb448;
  *(undefined4 *)((longlong)param_1 + 0x2334) = 0x41200000;
  param_1[0x467] = 0;
  param_1[0x468] = 0;
  param_1[0x469] = 0;
  *(undefined4 *)(param_1 + 0x46a) = 0;
  param_1[0x46b] = 0;
  param_1[0x46c] = 0;
  param_1[0x46d] = 0;
  param_1[0x46e] = 0;
  param_1[0x46f] = 0;
  param_1[0x470] = 0;
  param_1[0x471] = 0;
  param_1[0x472] = 0;
  param_1[0x473] = 0;
  param_1[0x474] = 0;
  param_1[0x475] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(undefined8 *)((longlong)param_1 + 0x23d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23dc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x23e4) = 0;
  *(undefined4 *)(param_1 + 0x477) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x23bc) = 0x42700000;
  *(undefined4 *)(param_1 + 0x478) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x23c4) = 0x40400000;
  *(undefined4 *)(param_1 + 0x479) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x23cc) = 0x40c00000;
  *(undefined2 *)(param_1 + 0x47a) = 0x100;
  return param_1;
}



// FUNCTION 1409c07b0 FUN_1409c07b0 body=303 status=ok
// SIG undefined FUN_1409c07b0(void)

undefined8 * FUN_1409c07b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  *param_1 = &PTR_FUN_1441bbb48;
  param_1[0x8b] = &PTR_LAB_1441bc230;
  puVar1 = (undefined8 *)FName::FName(local_res8,"Root Sphere",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a175e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8e] = uVar3;
  FUN_14223f010(param_1,uVar3);
  puVar1 = (undefined8 *)FName::FName(local_res8,"Targetable Component",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142e79d90();
  lVar4 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = lVar4;
  *(byte *)(lVar4 + 0x3c) = *(byte *)(lVar4 + 0x3c) | 2;
  (**(code **)(*(longlong *)param_1[0x8c] + 0x358))((longlong *)param_1[0x8c],1);
  puVar1 = (undefined8 *)FName::FName(local_res8,"Damage Component",1);
  uVar3 = *puVar1;
  uVar2 = AGFreezeCharacterCue::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8d] = uVar3;
  return param_1;
}



// FUNCTION 1409c08e0 FUN_1409c08e0 body=1055 status=ok
// SIG undefined FUN_1409c08e0(void)

undefined8 * FUN_1409c08e0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1441b9958;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0x42480000;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9e) = 0x3fc00000;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0x40000000;
  *(undefined4 *)(param_1 + 0x9f) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0x40000000;
  *(undefined4 *)(param_1 + 0xa0) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x504) = 0x41000000;
  *(undefined4 *)(param_1 + 0xa1) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0x44d48000;
  *(undefined4 *)(param_1 + 0xa2) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 0x514) = 0x40000000;
  *(undefined4 *)(param_1 + 0xa3) = 0x3dcccccd;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  *(undefined4 *)(param_1 + 0xae) = 4;
  *(undefined4 *)((longlong)param_1 + 0x574) = 8;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(undefined1 *)(param_1 + 0xc6) = 0;
  FUN_1409d1cc0(param_1 + 0xaa,0);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x38) < DAT_146865550) {
    _Init_thread_header(&DAT_146865550);
    if (DAT_146865550 == -1) {
      FName::FName(&DAT_146865548,"AudioComponent1",1);
      _Init_thread_footer(&DAT_146865550);
    }
  }
  if (*(int *)(lVar1 + 0x38) < DAT_146865560) {
    _Init_thread_header(&DAT_146865560);
    if (DAT_146865560 == -1) {
      FName::FName(&DAT_146865558,"AudioComponent2",1);
      _Init_thread_footer(&DAT_146865560);
    }
  }
  if (*(int *)(lVar1 + 0x38) < DAT_146865570) {
    _Init_thread_header(&DAT_146865570);
    if (DAT_146865570 == -1) {
      FName::FName(&DAT_146865568,"AudioComponent3",1);
      _Init_thread_footer(&DAT_146865570);
    }
  }
  if (*(int *)(lVar1 + 0x38) < DAT_146865580) {
    _Init_thread_header(&DAT_146865580);
    if (DAT_146865580 == -1) {
      FName::FName(&DAT_146865578,"AudioComponent4",1);
      _Init_thread_footer(&DAT_146865580);
    }
  }
  uVar3 = DAT_146865548;
  uVar2 = AUGDoor::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xb8] = uVar3;
  FUN_142399e30(uVar3,param_1[0x2d],0);
  uVar3 = DAT_146865558;
  uVar2 = AUGDoor::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xb9] = uVar3;
  FUN_142399e30(uVar3,param_1[0x2d],0);
  uVar3 = DAT_146865568;
  uVar2 = AUGDoor::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xba] = uVar3;
  FUN_142399e30(uVar3,param_1[0x2d],0);
  uVar3 = DAT_146865578;
  uVar2 = AUGDoor::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xbb] = uVar3;
  FUN_142399e30(uVar3,param_1[0x2d],0);
  return param_1;
}



// FUNCTION 1409c0d00 FUN_1409c0d00 body=422 status=ok
// SIG undefined FUN_1409c0d00(void)

undefined8 * FUN_1409c0d00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 local_res8;
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1441bc300;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfb | 2;
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"SceneRootComp",1);
  uVar1 = *puVar2;
  uVar3 = FUN_1429ff160();
  plVar4 = (longlong *)FUN_141789050(param_2,param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8b] = plVar4;
  (**(code **)(*plVar4 + 0x500))(plVar4,2);
  FUN_14223f010(param_1,param_1[0x8b]);
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"LightCone",1);
  uVar1 = *puVar2;
  uVar3 = FUN_142a232e0();
  plVar4 = (longlong *)FUN_141789050(param_2,param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8c] = plVar4;
  (**(code **)(*plVar4 + 0x500))(plVar4,2);
  local_res8 = 0;
  FUN_142399e30(param_1[0x8c],param_1[0x2d],0);
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"SpotLight",1);
  uVar1 = *puVar2;
  uVar3 = UPhysicsConstraintComponent::GetPrivateStaticClass();
  plVar4 = (longlong *)FUN_141789050(param_2,param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8d] = plVar4;
  (**(code **)(*plVar4 + 0x500))(plVar4,2);
  local_res8 = 0;
  FUN_142399e30(param_1[0x8d],param_1[0x2d],0);
  return param_1;
}



// FUNCTION 1409c0eb0 FUN_1409c0eb0 body=3103 status=ok
// SIG undefined FUN_1409c0eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1409c0eb0(undefined8 *param_1,undefined8 param_2)

{
  float *pfVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  int local_res18;
  int local_res20;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_108;
  longlong local_100;
  ulonglong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined4 local_98;
  int iStack_94;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [32];
  
  FUN_14221fbd0();
  uVar13 = (ulonglong)_tls_index;
  plVar2 = param_1 + 0xbc;
  *param_1 = &PTR_FUN_1441bc9e8;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  pvVar8 = ThreadLocalStoragePointer;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 0x42480000;
  *(undefined4 *)(param_1 + 0xae) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb0) = 0x3fc00000;
  lVar14 = *(longlong *)((longlong)pvVar8 + uVar13 * 8);
  *(undefined4 *)((longlong)param_1 + 0x584) = 0x40000000;
  *(undefined4 *)(param_1 + 0xb1) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x58c) = 0x40000000;
  *(undefined4 *)(param_1 + 0xb2) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x594) = 0x41000000;
  *(undefined4 *)(param_1 + 0xb3) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x59c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xb4) = 0x44d48000;
  *(undefined4 *)((longlong)param_1 + 0x5a4) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0xb5) = 0x442f0000;
  *(undefined4 *)((longlong)param_1 + 0x5ac) = 0x40000000;
  *(undefined4 *)(param_1 + 0xb6) = 0x3dcccccd;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  *(undefined1 *)(param_1 + 0xbb) = 0;
  *plVar2 = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 4;
  *(undefined4 *)((longlong)param_1 + 0x604) = 8;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  local_78 = plVar2;
  local_70 = lVar14;
  if ((*(int *)(lVar14 + 0x38) < DAT_146865640) &&
     (_Init_thread_header(&DAT_146865640), DAT_146865640 == -1)) {
    FName::FName(&DAT_146865638,"SceneRootComp",1);
    _Init_thread_footer(&DAT_146865640);
  }
  uVar11 = DAT_146865638;
  uVar9 = FUN_1429ff160();
  plVar10 = (longlong *)FUN_141789050(param_2,param_1,uVar11,uVar9,uVar9,1,0,0);
  param_1[0xaf] = plVar10;
  (**(code **)(*plVar10 + 0x500))(plVar10,2);
  FUN_14223f010(param_1,param_1[0xaf]);
  FUN_1409d1cc0(plVar2,0);
  if ((*(int *)(lVar14 + 0x38) < DAT_146865650) &&
     (_Init_thread_header(&DAT_146865650), DAT_146865650 == -1)) {
    FName::FName(&DAT_146865648,"SectorRoot_",1);
    _Init_thread_footer(&DAT_146865650);
  }
  if ((*(int *)(lVar14 + 0x38) < DAT_146865660) &&
     (_Init_thread_header(&DAT_146865660), DAT_146865660 == -1)) {
    FName::FName(&DAT_146865658,"FireHeat_",1);
    _Init_thread_footer(&DAT_146865660);
  }
  if ((*(int *)(lVar14 + 0x38) < DAT_146865670) &&
     (_Init_thread_header(&DAT_146865670), DAT_146865670 == -1)) {
    FName::FName(&DAT_146865668,"WarmUp_",1);
    _Init_thread_footer(&DAT_146865670);
  }
  if ((*(int *)(lVar14 + 0x38) < DAT_146865680) &&
     (_Init_thread_header(&DAT_146865680), DAT_146865680 == -1)) {
    FName::FName(&DAT_146865678,"FloorFakeEmissive_",1);
    _Init_thread_footer(&DAT_146865680);
  }
  if ((*(int *)(lVar14 + 0x38) < DAT_146865690) &&
     (_Init_thread_header(&DAT_146865690), DAT_146865690 == -1)) {
    FName::FName(&DAT_146865688,"PropaneAudioComponent_",1);
    _Init_thread_footer(&DAT_146865690);
  }
  local_res18 = 0;
  if (0 < *(int *)((longlong)param_1 + 0x604)) {
    local_res20 = 0x3e9;
    do {
      local_100 = 0;
      local_f8 = 0;
      local_c8 = 0;
      local_c0 = 0;
      FUN_140590080(local_b8);
      local_d0 = local_res18;
      local_98 = DAT_146865688;
      local_130 = CONCAT44(local_res20,DAT_146865648);
      local_138 = CONCAT44(local_res20,DAT_146865658);
      local_140 = CONCAT44(local_res20,DAT_146865668);
      local_148 = CONCAT44(local_res20,DAT_146865678);
      iStack_94 = local_res20;
      uVar11 = FUN_1429ff160();
      local_108 = FUN_141752410(param_1,local_130,uVar11,uVar11,1,0,0);
      FUN_142399e30(local_108,param_1[0xaf],0);
      *(byte *)(local_108 + 0xba) = *(byte *)(local_108 + 0xba) | 8;
      uVar11 = AGFreezeCharacterCue::GetPrivateStaticClass();
      local_f0 = FUN_141752410(param_1,local_138,uVar11,uVar11,1,0,0);
      FUN_142399e30(local_f0,local_108,0);
      *(byte *)(local_f0 + 0xba) = *(byte *)(local_f0 + 0xba) & 0xfd;
      *(byte *)(local_f0 + 0xba) = *(byte *)(local_f0 + 0xba) | 8;
      uVar11 = AGFreezeCharacterCue::GetPrivateStaticClass();
      local_e8 = FUN_141752410(param_1,local_140,uVar11,uVar11,1,0,0);
      FUN_142399e30(local_e8,local_108,0);
      lVar14 = local_e8;
      local_60 = 0x42840000;
      pfVar1 = (float *)(local_e8 + 0x280);
      local_68 = 0xc4e1000000000000;
      if (((*(float *)(local_e8 + 0x1f8) != *pfVar1) ||
          (*(float *)(local_e8 + 0x1fc) != *(float *)(local_e8 + 0x284))) ||
         (*(float *)(local_e8 + 0x200) != *(float *)(local_e8 + 0x288))) {
        uVar11 = *(undefined8 *)*(undefined1 (*) [12])(local_e8 + 0x1f8);
        fVar5 = (float)DAT_146864d80;
        fVar6 = DAT_146864d80._4_4_;
        fVar7 = DAT_146864d80._8_4_;
        auVar16._12_4_ = 0;
        auVar16._0_12_ = *(undefined1 (*) [12])(local_e8 + 0x1f8);
        auVar16 = divps(auVar16,_DAT_146864d80);
        fVar17 = (float)uVar11 - (float)(int)auVar16._0_4_ * fVar5;
        fVar18 = (float)((ulonglong)uVar11 >> 0x20) - (float)(int)auVar16._4_4_ * fVar6;
        fVar19 = *(float *)(local_e8 + 0x200) - (float)(int)auVar16._8_4_ * fVar7;
        fVar17 = (float)(-(uint)(0.0 <= fVar17) & ((uint)(fVar17 + fVar5) ^ (uint)fVar17) ^
                        (uint)(fVar17 + fVar5));
        fVar18 = (float)(-(uint)(0.0 <= fVar18) & ((uint)(fVar18 + fVar6) ^ (uint)fVar18) ^
                        (uint)(fVar18 + fVar6));
        fVar19 = (float)(-(uint)(0.0 <= fVar19) & ((uint)(fVar19 + fVar7) ^ (uint)fVar19) ^
                        (uint)(fVar19 + fVar7));
        bVar4 = fRam0000000146864d78 < fVar19;
        *(ulonglong *)pfVar1 =
             CONCAT44(-(uint)(fRam0000000146864d74 < fVar18) &
                      ((uint)(fVar18 - fVar6) ^ (uint)fVar18) ^ (uint)fVar18,
                      -(uint)(_DAT_146864d70 < fVar17) & ((uint)(fVar17 - fVar5) ^ (uint)fVar17) ^
                      (uint)fVar17);
        *(uint *)(local_e8 + 0x288) =
             -(uint)bVar4 & ((uint)(fVar19 - fVar7) ^ (uint)fVar19) ^ (uint)fVar19;
        puVar12 = (undefined8 *)FRotator::Quaternion(pfVar1,local_58);
        uVar11 = puVar12[1];
        *(undefined8 *)(lVar14 + 0x270) = *puVar12;
        *(undefined8 *)(lVar14 + 0x278) = uVar11;
      }
      local_88 = *(undefined8 *)(lVar14 + 0x270);
      uStack_80 = *(undefined8 *)(lVar14 + 0x278);
      uVar9 = 0;
      FUN_142397be0(lVar14,&local_68,&local_88,0,0,0);
      *(byte *)(local_e8 + 0xba) = *(byte *)(local_e8 + 0xba) & 0xfd;
      *(byte *)(local_e8 + 0xba) = *(byte *)(local_e8 + 0xba) & 0xf7;
      uVar11 = FUN_142a232e0();
      uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
      local_e0 = FUN_141752410(param_1,local_148,uVar11,uVar11,uVar9,0,0);
      FUN_142399e30(local_e0,local_108,0);
      FUN_142398ec0(local_e0,0,1);
      *(byte *)(local_e0 + 0xba) = *(byte *)(local_e0 + 0xba) | 8;
      uVar11 = AUGDoor::GetPrivateStaticClass();
      uVar13 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
      local_d8 = FUN_141752410(param_1,CONCAT44(iStack_94,local_98),uVar11,uVar11,uVar13,0,0);
      FUN_142399e30(local_d8,local_108,0);
      *(byte *)(local_d8 + 0xba) = *(byte *)(local_d8 + 0xba) | 8;
      FUN_1409d0720(param_1,&local_108,0);
      FUN_1409d0720(param_1,&local_108,1);
      FUN_1409d0720(param_1,&local_108,2);
      FUN_1409d0720(param_1,&local_108,3);
      plVar2 = local_78;
      iVar3 = (int)local_78[1];
      *(int *)(local_78 + 1) = iVar3 + 1;
      if (*(int *)((longlong)local_78 + 0xc) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
        ResizeGrow(local_78,iVar3);
      }
      lVar14 = *plVar2;
      lVar15 = (longlong)iVar3 * 0x68;
      puVar12 = (undefined8 *)(lVar14 + 8 + lVar15);
      *(longlong *)(lVar15 + lVar14) = local_108;
      *puVar12 = 0;
      FUN_1409bf020(puVar12,local_100,local_f8 & 0xffffffff,0,uVar13 & 0xffffffff00000000);
      *(longlong *)(lVar15 + 0x18 + lVar14) = local_f0;
      *(longlong *)(lVar15 + 0x20 + lVar14) = local_e8;
      *(longlong *)(lVar15 + 0x28 + lVar14) = local_e0;
      *(longlong *)(lVar15 + 0x30 + lVar14) = local_d8;
      *(int *)(lVar15 + 0x38 + lVar14) = local_d0;
      *(undefined8 *)(lVar15 + 0x40 + lVar14) = local_c8;
      *(undefined8 *)(lVar15 + 0x48 + lVar14) = local_c0;
      FUN_14058f8f0(lVar14 + 0x50 + lVar15,local_b8);
      *(undefined4 *)(lVar14 + 0x60 + lVar15) = local_a8;
      FUN_140591060(local_b8);
      if (local_100 != 0) {
        FMemory::Free();
      }
      local_res18 = local_res18 + 1;
      local_res20 = local_res20 + 1000;
      lVar14 = local_70;
    } while (local_res18 < *(int *)((longlong)param_1 + 0x604));
  }
  if ((*(int *)(lVar14 + 0x38) < DAT_1468656a0) &&
     (_Init_thread_header(&DAT_1468656a0), DAT_1468656a0 == -1)) {
    FName::FName(&DAT_146865698,"AudioComponent1",1);
    _Init_thread_footer(&DAT_1468656a0);
  }
  if ((*(int *)(lVar14 + 0x38) < DAT_1468656b0) &&
     (_Init_thread_header(&DAT_1468656b0), DAT_1468656b0 == -1)) {
    FName::FName(&DAT_1468656a8,"AudioComponent2",1);
    _Init_thread_footer(&DAT_1468656b0);
  }
  if ((*(int *)(lVar14 + 0x38) < DAT_1468656c0) &&
     (_Init_thread_header(&DAT_1468656c0), DAT_1468656c0 == -1)) {
    FName::FName(&DAT_1468656b8,"AudioComponent3",1);
    _Init_thread_footer(&DAT_1468656c0);
  }
  if ((*(int *)(lVar14 + 0x38) < DAT_1468656d0) &&
     (_Init_thread_header(&DAT_1468656d0), DAT_1468656d0 == -1)) {
    FName::FName(&DAT_1468656c8,"AudioComponent4",1);
    _Init_thread_footer(&DAT_1468656d0);
  }
  uVar11 = DAT_146865698;
  uVar9 = AUGDoor::GetPrivateStaticClass();
  uVar11 = FUN_141752410(param_1,uVar11,uVar9,uVar9,1,0,0);
  param_1[0xca] = uVar11;
  FUN_142399e30(uVar11,param_1[0xaf],0);
  uVar11 = DAT_1468656a8;
  uVar9 = AUGDoor::GetPrivateStaticClass();
  uVar11 = FUN_141752410(param_1,uVar11,uVar9,uVar9,1,0,0);
  param_1[0xcb] = uVar11;
  FUN_142399e30(uVar11,param_1[0xaf],0);
  uVar11 = DAT_1468656b8;
  uVar9 = AUGDoor::GetPrivateStaticClass();
  uVar11 = FUN_141752410(param_1,uVar11,uVar9,uVar9,1,0,0);
  param_1[0xcc] = uVar11;
  FUN_142399e30(uVar11,param_1[0xaf],0);
  uVar11 = DAT_1468656c8;
  uVar9 = AUGDoor::GetPrivateStaticClass();
  uVar11 = FUN_141752410(param_1,uVar11,uVar9,uVar9,1,0,0);
  param_1[0xcd] = uVar11;
  FUN_142399e30(uVar11,param_1[0xaf],0);
  FUN_1409d94c0(param_1);
  return param_1;
}



// FUNCTION 1409c1ad0 FUN_1409c1ad0 body=194 status=ok
// SIG undefined FUN_1409c1ad0(void)

undefined8 * FUN_1409c1ad0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1441bb460;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SceneRootComp",1);
  uVar1 = *puVar2;
  uVar3 = FUN_1429ff160();
  plVar4 = (longlong *)FUN_141789050(param_2,param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8b] = plVar4;
  (**(code **)(*plVar4 + 0x500))(plVar4,2);
  FUN_14223f010(param_1,param_1[0x8b]);
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  return param_1;
}



// FUNCTION 1409c1ba0 FUN_1409c1ba0 body=277 status=ok
// SIG undefined FUN_1409c1ba0(void)

undefined8 * FUN_1409c1ba0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140aeb790(param_1,uVar1);
  *param_1 = &PTR_FUN_1441bd0e0;
  param_1[0x8b] = &PTR_LAB_1441bd860;
  param_1[0x8c] = &PTR_LAB_1441bd8c0;
  param_1[0x8d] = &PTR_LAB_1441bd8e8;
  param_1[0x8e] = &PTR_LAB_1441bd900;
  param_1[0x8f] = &PTR_LAB_1441bd928;
  param_1[0x90] = &PTR_LAB_1441bd938;
  param_1[0x92] = &PTR_LAB_1441bd978;
  param_1[0x93] = &PTR_LAB_1441bd990;
  *(undefined1 *)(param_1 + 0xad) = 1;
  param_1[0xaa] = 0xc0a00000c0a00000;
  *(undefined4 *)(param_1 + 0xab) = 0xc0a00000;
  *(undefined8 *)((longlong)param_1 + 0x55c) = 0x40a0000040a00000;
  *(undefined4 *)((longlong)param_1 + 0x564) = 0x40a00000;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd;
  return param_1;
}



// FUNCTION 1409c1cc0 FUN_1409c1cc0 body=901 status=ok
// SIG undefined FUN_1409c1cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1409c1cc0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_141784790(param_2,L"DroneMovement");
  uVar1 = APlayerState::GetPrivateStaticClass();
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DroneMovement",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar2,uVar1,param_2);
  FUN_1409f2ce0(param_1,param_2);
  *param_1 = &PTR_FUN_1441b40f8;
  param_1[0xe8] = 0;
  param_1[0x8b] = &PTR_LAB_1441b4820;
  param_1[0x8c] = &PTR_LAB_1441b4838;
  param_1[0xd0] = &PTR_LAB_1441b4860;
  param_1[0xd1] = &PTR_LAB_1441b4878;
  param_1[0xdc] = &PTR_LAB_1441b4948;
  param_1[0xdd] = &PTR_LAB_1441b4990;
  param_1[0xde] = &PTR_LAB_1441b49a8;
  param_1[0xe6] = &PTR_LAB_1441b49d0;
  param_1[0xe9] = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  *(undefined4 *)(param_1 + 0xf1) = 0x3f800000;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  FUN_1409c2810(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0x119) = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  *(undefined4 *)(param_1 + 0x11f) = 0x3f800000;
  FUN_1409c2810(param_1 + 0x120);
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  *(undefined4 *)(param_1 + 0x14b) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xa5c) = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  *(undefined2 *)((longlong)param_1 + 0xabc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xabe) = 0;
  *(undefined2 *)(param_1 + 0x158) = 0;
  *(undefined1 *)((longlong)param_1 + 0xac3) = 0;
  param_1[0x159] = 0;
  FUN_1409c2890(param_1 + 0x15a);
  param_1[0x15a] = &PTR_FUN_1441b3ac8;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x17c) = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0xbe4) = 0;
  *(undefined4 *)(param_1 + 0x17d) = 0x3f800000;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x184] = 0;
  param_1[0x185] = 0;
  *(undefined4 *)(param_1 + 0x186) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc34) = 0;
  param_1[0x188] = 0;
  *(undefined4 *)(param_1 + 0x189) = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  *(undefined4 *)(param_1 + 400) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc84) = 0;
  param_1[0x192] = 0;
  *(undefined4 *)(param_1 + 0x193) = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  param_1[0x198] = 0;
  *(undefined4 *)(param_1 + 0x199) = 0xffffffff;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xfe;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(byte *)((longlong)param_1 + 0xac2) = *(byte *)((longlong)param_1 + 0xac2) & 0xbf | 8;
  *(undefined1 *)((longlong)param_1 + 0x5ae) = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CustomizationComponent",1);
  uVar1 = *puVar2;
  uVar3 = FUN_142e43690();
  uVar1 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0xe7] = uVar1;
  FUN_142350b20(uVar1,0);
  return param_1;
}



// FUNCTION 1409c2050 FUN_1409c2050 body=405 status=ok
// SIG undefined FUN_1409c2050(void)

undefined8 * FUN_1409c2050(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_14221fbd0(param_1,uVar1);
  *(undefined2 *)(param_1 + 0x8f) = 0;
  param_1[0x90] = 0;
  *param_1 = &PTR_FUN_1441b7358;
  param_1[0x8b] = &PTR_LAB_1441b7a40;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0x42480000;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x554) = 0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xad) = 0;
  param_1[0xae] = 0xffffffffffffffff;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5e4) = 0;
  param_1[0xbe] = 0;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 6;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x604) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60c) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 1;
  return param_1;
}



// FUNCTION 1409c21f0 FUN_1409c21f0 body=844 status=ok
// SIG undefined FUN_1409c21f0(void)

undefined8 * FUN_1409c21f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  FUN_140aeb790();
  *param_1 = &PTR_FUN_1441b5720;
  param_1[0x8b] = &PTR_LAB_1441b5e98;
  param_1[0x8c] = &PTR_LAB_1441b5ef8;
  param_1[0x8d] = &PTR_LAB_1441b5f20;
  param_1[0x8e] = &PTR_LAB_1441b5f38;
  param_1[0x8f] = &PTR_LAB_1441b5f60;
  param_1[0x90] = &PTR_LAB_1441b5f70;
  param_1[0x92] = &PTR_LAB_1441b5fb0;
  param_1[0x93] = &PTR_LAB_1441b5fc8;
  param_1[0xaa] = &PTR_LAB_1441b6098;
  param_1[0xab] = &PTR_LAB_1441b60b0;
  param_1[0xac] = &PTR_LAB_1441b60e0;
  FUN_142d2e580(param_1 + 0xad);
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  *(undefined4 *)(param_1 + 0xcd) = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  *(undefined4 *)(param_1 + 0xda) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe2) = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0x3f800000;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0xfb);
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x804) = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  *(undefined1 *)((longlong)param_1 + 0x824) = 0;
  *(undefined1 *)(param_1 + 0x105) = 0;
  *(undefined2 *)((longlong)param_1 + 0x844) = 1;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  *(undefined4 *)(param_1 + 0x131) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x98c) = 0;
  param_1[0x133] = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(undefined4 *)(param_1 + 0xcd) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd4) = 0x40a00000;
  *(undefined4 *)(param_1 + 0xdb) = 0x40a00000;
  *(undefined4 *)(param_1 + 0xe2) = 0x3f000000;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"OakDamageComponent",1);
  uVar4 = *puVar1;
  uVar2 = AGFreezeCharacterCue::GetPrivateStaticClass();
  lVar3 = FUN_141752410(param_1,uVar4,uVar2,uVar2,1,0,0);
  param_1[0xe9] = lVar3;
  *(byte *)(lVar3 + 0x660) = *(byte *)(lVar3 + 0x660) | 4;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CustomizationComponent",1);
  uVar4 = *puVar1;
  uVar2 = FUN_142e43690();
  uVar4 = FUN_141752410(param_1,uVar4,uVar2,uVar2,1,0,0);
  param_1[0xea] = uVar4;
  FUN_142350b20(uVar4,0);
  return param_1;
}



// FUNCTION 1409c2540 FUN_1409c2540 body=74 status=ok
// SIG undefined FUN_1409c2540(void)

undefined8 * FUN_1409c2540(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_142de2d20(param_1 + 7,0,0);
  FUN_142de2eb0(param_1 + 0x17);
  return param_1;
}



// FUNCTION 1409c2590 FUN_1409c2590 body=49 status=ok
// SIG undefined FUN_1409c2590(void)

longlong FUN_1409c2590(longlong param_1)

{
  FUN_142de2f30(param_1,0,1);
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_142df3150(param_1,5);
  return param_1;
}



// FUNCTION 1409c25d0 FUN_1409c25d0 body=49 status=ok
// SIG undefined FUN_1409c25d0(void)

undefined8 * FUN_1409c25d0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  FUN_142de2d20(param_1 + 2,0x43af0000,0);
  return param_1;
}



// FUNCTION 1409c2610 WallClimbingSettings body=9 status=ok
// SIG undefined WallClimbingSettings(void)

undefined2 *
hkaiNavMeshDeprecatedGenerationUtilsSettings::WallClimbingSettings::WallClimbingSettings
          (undefined2 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1409c2620 FUN_1409c2620 body=7 status=ok
// SIG undefined FUN_1409c2620(void)

undefined1 * FUN_1409c2620(undefined1 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1409c2630 FUN_1409c2630 body=28 status=ok
// SIG undefined FUN_1409c2630(void)

undefined8 FUN_1409c2630(undefined8 param_1)

{
  FUN_142de2f30(param_1,0,1);
  return param_1;
}



// FUNCTION 1409c2650 FUN_1409c2650 body=278 status=ok
// SIG undefined FUN_1409c2650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1409c2650(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined6 uStack_e;
  
  FUN_1407aeff0();
  *param_1 = &PTR_FUN_1441b8360;
  *(undefined8 *)((longlong)param_1 + 0x46c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x474) = DAT_1468b5d98;
  param_1[0x8f] = 0;
  *(undefined2 *)(param_1 + 0x90) = 0xff00;
  param_1[0x91] = 0;
  *(undefined2 *)(param_1 + 0x92) = 0xff00;
  *(undefined4 *)(param_1 + 0x99) = 0x40000000;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0x399d4952;
  *(undefined4 *)(param_1 + 0x96) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x97) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x40000000;
  param_1[0x9a] = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x9d) = 0xbf800000;
  param_1[0x8f] = DAT_1468651b8;
  param_1[0x90] = CONCAT62(uStack_e,0xff00);
  uVar1 = DAT_1468651c0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x91] = uVar1;
  param_1[0x92] = CONCAT62(uStack_e,0xff00);
  return param_1;
}



// FUNCTION 1409c2770 FUN_1409c2770 body=148 status=ok
// SIG undefined FUN_1409c2770(void)

undefined8 * FUN_1409c2770(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  FUN_1409bf020(param_1 + 1,param_2[1],*(undefined4 *)(param_2 + 2),0,0);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  FUN_14058f8f0(param_1 + 10,param_2 + 10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}



// FUNCTION 1409c2810 FUN_1409c2810 body=127 status=ok
// SIG undefined FUN_1409c2810(void)

longlong FUN_1409c2810(longlong param_1)

{
  FUN_142d2e580();
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0x3f800000;
  return param_1;
}



// FUNCTION 1409c2890 FUN_1409c2890 body=111 status=ok
// SIG undefined FUN_1409c2890(void)

undefined8 * FUN_1409c2890(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1441b3a38;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_142d2e580(param_1 + 4);
  *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x40a00000;
  param_1[0x1c] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  return param_1;
}



// FUNCTION 1409c2900 FUN_1409c2900 body=253 status=ok
// SIG undefined FUN_1409c2900(void)

byte * FUN_1409c2900(byte *param_1)

{
  *param_1 = *param_1 & 0xfe;
  *param_1 = *param_1 | 0xe;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffffa | 2;
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
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0x80;
  param_1[0x5b] = 0x41;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0x80;
  param_1[0x5f] = 0x41;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0x20;
  param_1[99] = 0x41;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0x80;
  param_1[0x67] = 0x3f;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0x80;
  param_1[0x6b] = 0x3f;
  param_1[0x6c] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0x34;
  param_1[0x73] = 0x43;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc9] = param_1[0xc9] & 0xfe;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0x40;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  *(code **)(param_1 + 0xd0) = AK::MemoryMgr::StartProfileThreadUsage;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0x80;
  param_1[0x12f] = 0x3f;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0x80;
  param_1[0x133] = 0x3f;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0x80;
  param_1[0x137] = 0x3f;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0x80;
  param_1[0x147] = 0x3f;
  param_1[0x10] = 1;
  return param_1;
}



// FUNCTION 1409c2a00 FUN_1409c2a00 body=148 status=ok
// SIG undefined FUN_1409c2a00(void)

undefined8 * FUN_1409c2a00(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  FUN_1409bf110(param_1 + 1,param_2[1],*(undefined4 *)(param_2 + 2),0,0);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  FUN_14058f8f0(param_1 + 10,param_2 + 10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}



// FUNCTION 1409c2aa0 FUN_1409c2aa0 body=233 status=ok
// SIG undefined FUN_1409c2aa0(void)

undefined8 * FUN_1409c2aa0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 local_88 [128];
  
  FUN_140700480();
  *param_1 = &PTR_FUN_1441bda60;
  param_1[5] = &PTR_LAB_1441bde60;
  FUN_142de2eb0(param_1 + 0x2c);
  FUN_1406fe690(param_1 + 0x3c);
  puVar2 = (undefined1 *)FUN_142de2d20(local_88,0x3f800000,0);
  *(undefined1 *)(param_1 + 0x2c) = *puVar2;
  *(undefined1 *)((longlong)param_1 + 0x161) = puVar2[1];
  *(undefined1 *)((longlong)param_1 + 0x162) = puVar2[2];
  *(undefined1 *)((longlong)param_1 + 0x163) = puVar2[3];
  *(undefined8 *)((longlong)param_1 + 0x164) = *(undefined8 *)(puVar2 + 4);
  param_1[0x2e] = *(undefined8 *)(puVar2 + 0x10);
  param_1[0x2f] = *(undefined8 *)(puVar2 + 0x18);
  uVar1 = *(undefined8 *)(puVar2 + 0x28);
  param_1[0x30] = *(undefined8 *)(puVar2 + 0x20);
  param_1[0x31] = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 0x38);
  param_1[0x32] = *(undefined8 *)(puVar2 + 0x30);
  param_1[0x33] = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 0x48);
  param_1[0x34] = *(undefined8 *)(puVar2 + 0x40);
  param_1[0x35] = uVar1;
  param_1[0x36] = *(undefined8 *)(puVar2 + 0x50);
  uVar1 = *(undefined8 *)(puVar2 + 0x60);
  param_1[0x37] = *(undefined8 *)(puVar2 + 0x58);
  param_1[0x38] = uVar1;
  param_1[0x39] = *(undefined8 *)(puVar2 + 0x68);
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(puVar2 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x1d4) = *(undefined4 *)(puVar2 + 0x74);
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(puVar2 + 0x78);
  return param_1;
}



// FUNCTION 1409c2b90 FUN_1409c2b90 body=182 status=ok
// SIG undefined FUN_1409c2b90(void)

undefined8 * FUN_1409c2b90(undefined8 *param_1)

{
  undefined6 uStack_e;
  
  FUN_1406d50d0();
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *param_1 = &PTR_FUN_1441bde78;
  param_1[5] = &PTR_LAB_1441be240;
  *(undefined1 *)((longlong)param_1 + 0x141) = 4;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0xff00;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x44fa0000;
  *(undefined1 *)((longlong)param_1 + 0x164) = 1;
  param_1[0x2d] = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0xff00;
  param_1[0x2d] = DAT_1468652b8;
  param_1[0x2e] = CONCAT62(uStack_e,0xff00);
  return param_1;
}



// FUNCTION 1409c2c50 FUN_1409c2c50 body=149 status=ok
// SIG undefined FUN_1409c2c50(void)

undefined8 * FUN_1409c2c50(undefined8 *param_1)

{
  FUN_1407003e0();
  *param_1 = &PTR_FUN_1441be628;
  param_1[5] = &PTR_LAB_1441bea30;
  FUN_1406fedb0(param_1 + 0x2e);
  FName::FName(param_1 + 0x56,L"Path",1);
  *(undefined1 *)(param_1 + 0x57) = 1;
  *(undefined4 *)((longlong)param_1 + 700) = 0x43c80000;
  *(undefined4 *)(param_1 + 0x58) = 0x43c80000;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0x447a0000;
  FUN_142f89420(param_1 + 0x59);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_142f97b10((longlong)param_1 + 0x27c);
  return param_1;
}



// FUNCTION 1409c2cf0 FUN_1409c2cf0 body=309 status=ok
// SIG undefined FUN_1409c2cf0(void)

undefined8 * FUN_1409c2cf0(undefined8 *param_1)

{
  FUN_1406d50d0();
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *param_1 = &PTR_FUN_1441bea58;
  param_1[5] = &PTR_LAB_1441bee20;
  *(undefined1 *)((longlong)param_1 + 0x141) = 4;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0xff00;
  FUN_142de2d20(param_1 + 0x2b,0x43af0000,0);
  FUN_1406ffb20(param_1 + 0x3b);
  FUN_1406d4c40(param_1 + 0x60);
  FUN_1406fedb0(param_1 + 0xd5);
  FUN_1406d4c40(param_1 + 0xfd);
  *(undefined1 *)(param_1 + 0xd4) = 1;
  *(undefined2 *)(param_1 + 0xc1) = 3;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x3e5) = 1;
  *(undefined2 *)(param_1 + 0x7b) = 0;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined4 *)(param_1 + 0x119) = 0;
  *(undefined2 *)(param_1 + 0xf5) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0x7ad) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x72c) = 0x43160000;
  FUN_142df27a0(param_1 + 0xe5,0x43160000);
  return param_1;
}



// FUNCTION 1409c2e30 FUN_1409c2e30 body=341 status=ok
// SIG undefined FUN_1409c2e30(void)

undefined8 * FUN_1409c2e30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined6 uStack_e;
  
  FUN_1407004b0();
  *param_1 = &PTR_FUN_1441bee38;
  param_1[5] = &PTR_LAB_1441bf238;
  FUN_1409f3550(param_1 + 0x3d);
  param_1[0x71] = 0;
  *(undefined2 *)(param_1 + 0x72) = 0xff00;
  param_1[0x73] = 0;
  *(undefined2 *)(param_1 + 0x74) = 0xff00;
  param_1[0x75] = 0;
  *(undefined2 *)(param_1 + 0x76) = 0xff00;
  param_1[0x77] = 0;
  *(undefined2 *)(param_1 + 0x78) = 0xff00;
  param_1[0x79] = 0;
  *(undefined2 *)(param_1 + 0x7a) = 0xff00;
  param_1[0x7b] = 0;
  *(undefined2 *)(param_1 + 0x7c) = 0xff00;
  param_1[0x71] = DAT_1468652c8;
  param_1[0x72] = CONCAT62(uStack_e,0xff00);
  param_1[0x73] = DAT_1468652d0;
  param_1[0x74] = CONCAT62(uStack_e,0xff00);
  param_1[0x75] = DAT_1468652d8;
  param_1[0x76] = CONCAT62(uStack_e,0xff00);
  param_1[0x77] = DAT_1468652e0;
  param_1[0x78] = CONCAT62(uStack_e,0xff00);
  param_1[0x79] = DAT_1468652e8;
  param_1[0x7a] = CONCAT62(uStack_e,0xff00);
  uVar1 = DAT_1468652f0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  param_1[0x7b] = uVar1;
  param_1[0x7c] = CONCAT62(uStack_e,0xff00);
  return param_1;
}



// FUNCTION 1409c2f90 FUN_1409c2f90 body=706 status=ok
// SIG undefined FUN_1409c2f90(void)

undefined8 * FUN_1409c2f90(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulonglong uVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined2 uStack_e;
  undefined4 uStack_c;
  
  FUN_1407004b0();
  *param_1 = &PTR_FUN_1441bee38;
  param_1[5] = &PTR_LAB_1441bf238;
  FUN_1409f3550();
  param_1[0x71] = 0;
  *(undefined2 *)(param_1 + 0x72) = 0xff00;
  param_1[0x73] = 0;
  *(undefined2 *)(param_1 + 0x74) = 0xff00;
  param_1[0x75] = 0;
  *(undefined2 *)(param_1 + 0x76) = 0xff00;
  param_1[0x77] = 0;
  *(undefined2 *)(param_1 + 0x78) = 0xff00;
  param_1[0x79] = 0;
  *(undefined2 *)(param_1 + 0x7a) = 0xff00;
  param_1[0x7b] = 0;
  *(undefined2 *)(param_1 + 0x7c) = 0xff00;
  param_1[0x71] = DAT_1468652c8;
  param_1[0x72] = CONCAT44(uStack_c,CONCAT22(uStack_e,0xff00));
  param_1[0x73] = DAT_1468652d0;
  param_1[0x74] = CONCAT44(uStack_c,CONCAT22(uStack_e,0xff00));
  param_1[0x75] = DAT_1468652d8;
  param_1[0x76] = CONCAT44(uStack_c,CONCAT22(uStack_e,0xff00));
  param_1[0x77] = DAT_1468652e0;
  param_1[0x78] = CONCAT44(uStack_c,CONCAT22(uStack_e,0xff00));
  param_1[0x79] = DAT_1468652e8;
  param_1[0x7a] = CONCAT44(uStack_c,CONCAT22(uStack_e,0xff00));
  uVar2 = DAT_1468652f0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  local_18 = (undefined4)uVar2;
  uStack_14 = (undefined4)((ulonglong)uVar2 >> 0x20);
  *param_1 = &PTR_FUN_1441bf250;
  param_1[5] = &PTR_LAB_1441bf650;
  pvVar3 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 0x7b) = local_18;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = uStack_14;
  *(uint *)(param_1 + 0x7c) = CONCAT22(uStack_e,0xff00);
  *(undefined4 *)((longlong)param_1 + 0x3e4) = uStack_c;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x7e] = 0x44fa0000;
  param_1[0x80] = 0;
  uVar4 = (ulonglong)_tls_index;
  *(undefined2 *)(param_1 + 0x81) = 0xff00;
  lVar1 = *(longlong *)((longlong)pvVar3 + uVar4 * 8);
  if (*(int *)(lVar1 + 0x38) < DAT_146865780) {
    _Init_thread_header(&DAT_146865780);
    if (DAT_146865780 == -1) {
      FName::FName(&DAT_146865778,&DAT_14419e35c,1);
      _Init_thread_footer(&DAT_146865780);
    }
  }
  param_1[0x71] = DAT_146865778;
  param_1[0x72] = CONCAT44(uStack_c,CONCAT22(uStack_e,0xff00));
  local_18 = (undefined4)DAT_146865778;
  uStack_14 = (undefined4)((ulonglong)DAT_146865778 >> 0x20);
  *(undefined4 *)(param_1 + 0x75) = local_18;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = uStack_14;
  *(uint *)(param_1 + 0x76) = CONCAT22(uStack_e,0xff00);
  *(undefined4 *)((longlong)param_1 + 0x3b4) = uStack_c;
  if (*(int *)(lVar1 + 0x38) < DAT_146865790) {
    _Init_thread_header(&DAT_146865790);
    if (DAT_146865790 == -1) {
      FName::FName(&DAT_146865788,L"TargetActorInfo",1);
      _Init_thread_footer(&DAT_146865790);
    }
  }
  param_1[0x7b] = DAT_146865788;
  param_1[0x7c] = CONCAT44(uStack_c,CONCAT22(uStack_e,0xff00));
  param_1[0x79] = DAT_1468652f8;
  param_1[0x7a] = CONCAT44(uStack_c,CONCAT22(uStack_e,0xff00));
  return param_1;
}



// FUNCTION 1409c3260 FUN_1409c3260 body=185 status=ok
// SIG undefined FUN_1409c3260(void)

undefined8 * FUN_1409c3260(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR__scalar_deleting_destructor__144057018;
  param_1[5] = &PTR_LAB_1440573d0;
  FUN_1406fedb0(param_1 + 0x20);
  *param_1 = &PTR_FUN_1441be258;
  param_1[5] = &PTR_LAB_1441be610;
  FName::FName(param_1 + 0x48,L"Path",1);
  *(undefined1 *)(param_1 + 0x49) = 1;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x43c80000;
  *(undefined4 *)(param_1 + 0x4a) = 0x43c80000;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0x447a0000;
  FUN_142f89420(param_1 + 0x4b);
  *(undefined1 *)((longlong)param_1 + 0x205) = 1;
  FUN_142f97b10((longlong)param_1 + 0x20c);
  return param_1;
}



// FUNCTION 1409c3320 FUN_1409c3320 body=81 status=ok
// SIG undefined FUN_1409c3320(void)

undefined8 * FUN_1409c3320(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x100;
  *param_1 = &PTR_FUN_1441bf668;
  param_1[5] = &PTR_LAB_144056c28;
  *(undefined4 *)((longlong)param_1 + 0xf9) = 0x1010000;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd1) = 0x101;
  return param_1;
}



// FUNCTION 1409c3380 FUN_1409c3380 body=100 status=ok
// SIG undefined FUN_1409c3380(void)

undefined8 * FUN_1409c3380(undefined8 *param_1)

{
  FUN_1406d50d0();
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xfb) = 0x101;
  *param_1 = &PTR_FUN_1441bfa08;
  param_1[5] = &PTR_LAB_144067500;
  FUN_142de2f30(param_1 + 0x20,0,1);
  *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
  *(undefined1 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  return param_1;
}



// FUNCTION 1409c33f0 UAnimNotify_WeaponFire body=44 status=ok
// SIG undefined UAnimNotify_WeaponFire(void)

undefined8 * UAnimNotify_WeaponFire::UAnimNotify_WeaponFire(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotify::UAnimNotify(param_1,uVar1);
  *param_1 = &PTR_FUN_1441b96a8;
  return param_1;
}



// FUNCTION 1409c3420 FUN_1409c3420 body=68 status=ok
// SIG undefined FUN_1409c3420(void)

undefined8 * FUN_1409c3420(undefined8 *param_1)

{
  FUN_140999580();
  *param_1 = &PTR_FUN_1441b34a8;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  return param_1;
}



// FUNCTION 1409c3470 FUN_1409c3470 body=179 status=ok
// SIG undefined FUN_1409c3470(void)

undefined8 * FUN_1409c3470(undefined8 *param_1)

{
  FUN_140999580();
  *param_1 = &PTR_FUN_1441b6b88;
  param_1[0x4b] = &PTR_LAB_1441b6fe0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0xff;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x59);
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2f4) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return param_1;
}



// FUNCTION 1409c3530 FUN_1409c3530 body=43 status=ok
// SIG undefined FUN_1409c3530(void)

undefined8 * FUN_1409c3530(undefined8 *param_1)

{
  FUN_140999580();
  *(undefined4 *)(param_1 + 0x4d) = 0x20;
  *param_1 = &PTR_FUN_1441b52a8;
  return param_1;
}



// FUNCTION 1409c3560 FUN_1409c3560 body=199 status=ok
// SIG undefined FUN_1409c3560(void)

undefined8 * FUN_1409c3560(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142c62eb0();
  *(undefined2 *)(param_1 + 0x35) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1441b4fa0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0xffffffff;
  param_1[5] = &PTR_LAB_1441b5250;
  param_1[0xc] = &PTR_LAB_1441b5298;
  *(undefined2 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x3e800000;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x3e800000;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1db) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1dd) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e4) = 1;
  *(undefined2 *)((longlong)param_1 + 0x1e6) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 500) = 0xbf800000;
  FUN_142c62230(param_1 + 0x3f);
  uVar1 = FVolumeControlStyle::StaticStruct();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 1409c3630 FUN_1409c3630 body=136 status=ok
// SIG undefined FUN_1409c3630(void)

undefined8 * FUN_1409c3630(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140999ac0();
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *param_1 = &PTR_FUN_1441b6818;
  param_1[5] = &PTR_LAB_1441b6ad8;
  param_1[0xc] = &PTR_LAB_1441b6b20;
  param_1[0x43] = &PTR_LAB_1441b6b30;
  param_1[0x4c] = &PTR_LAB_1441b6b58;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  uVar1 = FVolumeControlStyle::StaticStruct();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 1409c36c0 FUN_1409c36c0 body=78 status=ok
// SIG undefined FUN_1409c36c0(void)

undefined8 * FUN_1409c36c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1409c3560();
  *param_1 = &PTR_FUN_1441b7a68;
  param_1[5] = &PTR_LAB_1441b7d18;
  param_1[0xc] = &PTR_LAB_1441b7d60;
  param_1[0x43] = &PTR_LAB_1441b7d70;
  uVar1 = FVolumeControlStyle::StaticStruct();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 1409c3710 FUN_1409c3710 body=122 status=ok
// SIG undefined FUN_1409c3710(void)

undefined8 * FUN_1409c3710(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142cdd770();
  *param_1 = &PTR_FUN_1441b4c90;
  param_1[5] = &PTR_LAB_1441b4f28;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  uVar1 = FHierarchicalSimplification::StaticStruct();
  param_1[0xb] = uVar1;
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x131) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x133) = 0;
  return param_1;
}



// FUNCTION 1409c3790 FUN_1409c3790 body=53 status=ok
// SIG undefined FUN_1409c3790(void)

undefined8 * FUN_1409c3790(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142c62e40();
  *param_1 = &PTR_FUN_14407c550;
  param_1[5] = &PTR_LAB_14407c7e8;
  uVar1 = FUN_1413d85b0();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 1409c37d0 FUN_1409c37d0 body=149 status=ok
// SIG undefined FUN_1409c37d0(void)

undefined8 * FUN_1409c37d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  FUN_1409c3560();
  *param_1 = &PTR__scalar_deleting_destructor__1441b4fa0;
  param_1[5] = &PTR_LAB_1441b5250;
  param_1[0xc] = &PTR_LAB_1441b5298;
  FName::FName(local_res8,L"Orbit",1);
  param_1[0x3d] = local_res8[0];
  *(undefined1 *)(param_1 + 0x35) = 1;
  *(undefined1 *)(param_1 + 0x36) = 1;
  *(undefined1 *)((longlong)param_1 + 0x17c) = 1;
  *(undefined2 *)((longlong)param_1 + 0x6a) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1d1) = 1;
  *(undefined2 *)((longlong)param_1 + 0x1d3) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1da) = 1;
  uVar1 = FVolumeControlStyle::StaticStruct();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 1409c3870 FUN_1409c3870 body=53 status=ok
// SIG undefined FUN_1409c3870(void)

undefined8 * FUN_1409c3870(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142c62e40();
  *param_1 = &PTR_FUN_1441b7da0;
  param_1[5] = &PTR_LAB_1441b8038;
  uVar1 = FMovieSceneSkeletalAnimationParams::StaticStruct();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 1409c38b0 FUN_1409c38b0 body=230 status=ok
// SIG undefined FUN_1409c38b0(void)

undefined8 * FUN_1409c38b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142d517c0();
  *param_1 = &PTR_FUN_1441b8080;
  param_1[5] = &PTR_LAB_1441b8318;
  FUN_1409c2900(param_1 + 0x40);
  FUN_1409c2900(param_1 + 0x6c);
  FUN_1409c2900(param_1 + 0x98);
  FUN_1409c2900(param_1 + 0xc4);
  FUN_1409c2900(param_1 + 0xf0);
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) | 1;
  *(undefined4 *)(param_1 + 0x11c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x3f) = 1;
  uVar1 = FUN_1413d86d0();
  param_1[0xb] = uVar1;
  param_1[0x22] = DAT_1468651b0;
  param_1[0x50] = DAT_1468651b0;
  param_1[0x7c] = DAT_1468651b0;
  param_1[0xa8] = DAT_1468651b0;
  param_1[0xd4] = DAT_1468651b0;
  param_1[0x100] = DAT_1468651b0;
  return param_1;
}



// FUNCTION 1409c39a0 FUN_1409c39a0 body=2005 status=ok
// SIG undefined FUN_1409c39a0(void)

undefined8 * FUN_1409c39a0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 local_c8 [160];
  
  FUN_142c63600();
  *param_1 = &PTR__scalar_deleting_destructor__1441b8470;
  param_1[5] = &PTR_LAB_1441b8720;
  param_1[0xc] = &PTR_LAB_1441b8768;
  FUN_142c62230(param_1 + 0x17);
  FUN_142c62230(param_1 + 0x1a);
  FUN_142c62230(param_1 + 0x1d);
  param_1[0x20] = 0;
  FUN_142de2eb0(param_1 + 0x22);
  FUN_142de2eb0(param_1 + 0x32);
  FUN_142de2eb0(param_1 + 0x42);
  FUN_142de2eb0(param_1 + 0x52);
  FUN_142de2eb0(param_1 + 0x62);
  FUN_142de2eb0(param_1 + 0x72);
  FUN_142de2eb0(param_1 + 0x82);
  FUN_142de2eb0(param_1 + 0x92);
  FUN_142de2eb0(param_1 + 0xa2);
  FUN_142de2eb0(param_1 + 0xb2);
  uVar4 = FAnimNode_RigidBody_Chaos::StaticStruct();
  param_1[0xb] = uVar4;
  puVar5 = (undefined1 *)FUN_142de2d20(local_c8,0x40000000,0);
  *(undefined1 *)(param_1 + 0x22) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x111) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x112) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x113) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x114) = *(undefined8 *)(puVar5 + 4);
  param_1[0x24] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x25] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x26] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x27] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x28] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x29] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x2a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x2b] = uVar4;
  param_1[0x2c] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x16c) = uVar1;
  *(undefined4 *)(param_1 + 0x2e) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x174) = uVar3;
  param_1[0x2f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(puVar5 + 0x78);
  *(undefined4 *)(param_1 + 0x23) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x113) = 2;
  *(byte *)((longlong)param_1 + 0x112) = *(byte *)((longlong)param_1 + 0x112) | 1;
  puVar5 = (undefined1 *)FUN_142de2d20(local_c8,0x40400000,0);
  *(undefined1 *)(param_1 + 0x32) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x191) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x192) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x193) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x194) = *(undefined8 *)(puVar5 + 4);
  param_1[0x34] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x35] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x36] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x37] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x38] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x39] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x3a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x3b] = uVar4;
  param_1[0x3c] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x1ec) = uVar1;
  *(undefined4 *)(param_1 + 0x3e) = uVar2;
  *(undefined4 *)((longlong)param_1 + 500) = uVar3;
  param_1[0x3f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x204) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)(puVar5 + 0x78);
  *(undefined4 *)(param_1 + 0x33) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x193) = 2;
  *(byte *)((longlong)param_1 + 0x192) = *(byte *)((longlong)param_1 + 0x192) | 1;
  puVar5 = (undefined1 *)FUN_142de2d20(local_c8,0x40400000,0);
  *(undefined1 *)(param_1 + 0x82) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x411) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x412) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x413) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x414) = *(undefined8 *)(puVar5 + 4);
  param_1[0x84] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x85] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x86] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x87] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x88] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x89] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x8a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x8b] = uVar4;
  param_1[0x8c] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x8d) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x46c) = uVar1;
  *(undefined4 *)(param_1 + 0x8e) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x474) = uVar3;
  param_1[0x8f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x484) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x91) = *(undefined4 *)(puVar5 + 0x78);
  *(undefined4 *)(param_1 + 0x83) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x413) = 2;
  *(byte *)((longlong)param_1 + 0x412) = *(byte *)((longlong)param_1 + 0x412) | 1;
  puVar5 = (undefined1 *)FUN_142de2d20(local_c8,0x399d4952,0);
  *(undefined1 *)(param_1 + 0x42) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x211) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x212) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x213) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x214) = *(undefined8 *)(puVar5 + 4);
  param_1[0x44] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x45] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x46] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x47] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x48] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x49] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x4a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x4b] = uVar4;
  param_1[0x4c] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x4d) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x26c) = uVar1;
  *(undefined4 *)(param_1 + 0x4e) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x274) = uVar3;
  param_1[0x4f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x284) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x51) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_c8,0x3e4ccccd,0);
  *(undefined1 *)(param_1 + 0x52) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x291) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x292) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x293) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x294) = *(undefined8 *)(puVar5 + 4);
  param_1[0x54] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x55] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x56] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x57] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x58] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x59] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x5a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x5b] = uVar4;
  param_1[0x5c] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x5d) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x2ec) = uVar1;
  *(undefined4 *)(param_1 + 0x5e) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = uVar3;
  param_1[0x5f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_c8,0x3e4ccccd,0);
  *(undefined1 *)(param_1 + 0x62) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x311) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x312) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x313) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x314) = *(undefined8 *)(puVar5 + 4);
  param_1[100] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x65] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x66] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x67] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x68] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x69] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x6a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x6b] = uVar4;
  param_1[0x6c] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x6d) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x36c) = uVar1;
  *(undefined4 *)(param_1 + 0x6e) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x374) = uVar3;
  param_1[0x6f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 900) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x71) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_c8,0x41f00000,0);
  *(undefined1 *)(param_1 + 0x72) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x391) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x392) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x393) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x394) = *(undefined8 *)(puVar5 + 4);
  param_1[0x74] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x75] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x76] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x77] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x78] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x79] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x7a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x7b] = uVar4;
  param_1[0x7c] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x7d) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x3ec) = uVar1;
  *(undefined4 *)(param_1 + 0x7e) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = uVar3;
  param_1[0x7f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x404) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x81) = *(undefined4 *)(puVar5 + 0x78);
  puVar5 = (undefined1 *)FUN_142de2d20(local_c8,0x40400000,0);
  *(undefined1 *)(param_1 + 0xa2) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x511) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x512) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x513) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x514) = *(undefined8 *)(puVar5 + 4);
  param_1[0xa4] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0xa5] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0xa6] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0xa7] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0xa8] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0xa9] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0xaa] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0xab] = uVar4;
  param_1[0xac] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0xad) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x56c) = uVar1;
  *(undefined4 *)(param_1 + 0xae) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x574) = uVar3;
  param_1[0xaf] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x584) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0xb1) = *(undefined4 *)(puVar5 + 0x78);
  *(undefined4 *)(param_1 + 0xa3) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x513) = 2;
  *(byte *)((longlong)param_1 + 0x512) = *(byte *)((longlong)param_1 + 0x512) | 1;
  puVar5 = (undefined1 *)FUN_142de2d20(local_c8,0x3f800000,0);
  *(undefined1 *)(param_1 + 0xb2) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x591) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x592) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x593) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x594) = *(undefined8 *)(puVar5 + 4);
  param_1[0xb4] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0xb5] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0xb6] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0xb7] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0xb8] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0xb9] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0xba] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0xbb] = uVar4;
  param_1[0xbc] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0xbd) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x5ec) = uVar1;
  *(undefined4 *)(param_1 + 0xbe) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x5f4) = uVar3;
  param_1[0xbf] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x604) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0xc1) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x592) = *(byte *)((longlong)param_1 + 0x592) | 1;
  *(undefined1 *)(param_1 + 0x16) = 0;
  puVar5 = (undefined1 *)FUN_142de2d20(local_c8,0x3f000000,0);
  *(undefined1 *)(param_1 + 0x92) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x491) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x492) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x493) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x494) = *(undefined8 *)(puVar5 + 4);
  param_1[0x94] = *(undefined8 *)(puVar5 + 0x10);
  param_1[0x95] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0x96] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0x97] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0x98] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0x99] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0x9a] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x9b] = uVar4;
  param_1[0x9c] = *(undefined8 *)(puVar5 + 0x50);
  uVar4 = *(undefined8 *)(puVar5 + 0x60);
  param_1[0x9d] = *(undefined8 *)(puVar5 + 0x58);
  param_1[0x9e] = uVar4;
  param_1[0x9f] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x504) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0xa1) = *(undefined4 *)(puVar5 + 0x78);
  return param_1;
}



// FUNCTION 1409c4180 FUN_1409c4180 body=141 status=ok
// SIG undefined FUN_1409c4180(void)

undefined8 * FUN_1409c4180(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1406d87d0();
  *(undefined4 *)(param_1 + 0x5d) = 0x43c80000;
  *param_1 = &PTR_FUN_1441b8778;
  param_1[5] = &PTR_LAB_1441b8a28;
  param_1[0xc] = &PTR_LAB_1441b8a70;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0x43c80000;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0x42960000;
  *(undefined4 *)(param_1 + 0x60) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0x44fa0000;
  *(undefined2 *)(param_1 + 0x61) = 1;
  *(undefined1 *)((longlong)param_1 + 0x30a) = 1;
  uVar1 = FUN_1413d8790();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 1409c4210 FUN_1409c4210 body=104 status=ok
// SIG undefined FUN_1409c4210(void)

undefined8 * FUN_1409c4210(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142c63200();
  *(undefined4 *)(param_1 + 0x77) = 0x43160000;
  *param_1 = &PTR_FUN_1441b8ce0;
  param_1[5] = &PTR_LAB_1441b8fa0;
  param_1[0xc] = &PTR_LAB_1441b8fe8;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0x44d48000;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0x42480000;
  *(undefined4 *)(param_1 + 0x78) = 0x3e800000;
  uVar1 = FBBQCharacterCardData::StaticStruct();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 1409c4280 FUN_1409c4280 body=81 status=ok
// SIG undefined FUN_1409c4280(void)

undefined8 * FUN_1409c4280(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142d51930();
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *param_1 = &PTR_FUN_1441b8ff8;
  param_1[5] = &PTR_LAB_1441b92a8;
  param_1[0xc] = &PTR_LAB_1441b92f0;
  uVar1 = FUN_1413ddc80();
  param_1[0xb] = uVar1;
  *(undefined4 *)((longlong)param_1 + 500) = 0xd;
  return param_1;
}



// FUNCTION 1409c42e0 FUN_1409c42e0 body=94 status=ok
// SIG undefined FUN_1409c42e0(void)

undefined8 * FUN_1409c42e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1409c3560();
  *param_1 = &PTR_FUN_1441b9300;
  param_1[5] = &PTR_LAB_1441b95b0;
  param_1[0xc] = &PTR_LAB_1441b95f8;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  uVar1 = FVolumeControlStyle::StaticStruct();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 1409c4340 FUN_1409c4340 body=71 status=ok
// SIG undefined FUN_1409c4340(void)

undefined8 * FUN_1409c4340(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1407bcd00();
  *(undefined1 *)((longlong)param_1 + 0x1ba) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1440da8e8;
  param_1[5] = &PTR_LAB_1440dab98;
  param_1[0xc] = &PTR_LAB_1440dabe0;
  uVar1 = FUN_1413dde00();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 1409c4390 FUN_1409c4390 body=168 status=ok
// SIG undefined FUN_1409c4390(void)

undefined8 * FUN_1409c4390(undefined8 *param_1)

{
  FUN_1409f4ec0();
  *param_1 = &PTR_FUN_1441b3b10;
  param_1[5] = &PTR_LAB_1441b40c8;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0x85) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  *(byte *)(param_1 + 0x8e) = *(byte *)(param_1 + 0x8e) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0;
  return param_1;
}



// FUNCTION 1409c4440 FUN_1409c4440 body=99 status=ok
// SIG undefined FUN_1409c4440(void)

undefined8 * FUN_1409c4440(undefined8 *param_1)

{
  FUN_140999fd0();
  *param_1 = &PTR_FUN_1441b7010;
  param_1[0x24] = &PTR_LAB_1441b7310;
  param_1[0x36] = &PTR_LAB_1441b7328;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  return param_1;
}



// FUNCTION 1409c44b0 FUN_1409c44b0 body=104 status=ok
// SIG undefined FUN_1409c44b0(void)

void FUN_1409c44b0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    do {
      FUN_140591060(plVar2 + 9);
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xd;
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



// FUNCTION 1409c4520 FUN_1409c4520 body=114 status=ok
// SIG undefined FUN_1409c4520(void)

void FUN_1409c4520(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_1441b3a38;
      FUN_1406d8b70(puVar1 + 4);
      puVar1 = puVar1 + 0x1f;
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



// FUNCTION 1409c45a0 FUN_1409c45a0 body=101 status=ok
// SIG undefined FUN_1409c45a0(void)

void FUN_1409c45a0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x120);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x2d;
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



// FUNCTION 1409c4610 FUN_1409c4610 body=165 status=ok
// SIG undefined FUN_1409c4610(void)

void FUN_1409c4610(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x58);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-2] != 0) {
        FMemory::Free();
      }
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      if (plVar2[-6] != 0) {
        FMemory::Free();
      }
      if (plVar2[-8] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xf;
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



// FUNCTION 1409c46c0 FUN_1409c46c0 body=98 status=ok
// SIG undefined FUN_1409c46c0(void)

void FUN_1409c46c0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x16;
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



// FUNCTION 1409c4730 FUN_1409c4730 body=100 status=ok
// SIG undefined FUN_1409c4730(void)

void FUN_1409c4730(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
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



// FUNCTION 1409c47a0 FUN_1409c47a0 body=627 status=ok
// SIG undefined FUN_1409c47a0(void)

void FUN_1409c47a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0xd48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd20) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xc28) = 0;
  if (*(longlong *)(param_1 + 0xc20) != 0) {
    FMemory::Free();
  }
  FUN_1409c4730(param_1 + 0xbe0);
  if (*(longlong *)(param_1 + 0xba0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x990) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x8f8) = &PTR_FUN_14407f7d8;
  *(undefined ***)(param_1 + 0x8f0) = &PTR_FUN_144055c50;
  *(undefined ***)(param_1 + 0x8e8) = &PTR_FUN_144080410;
  *(undefined ***)(param_1 + 0x8e0) = &PTR_FUN_1441b4a50;
  *(undefined ***)(param_1 + 0x8d8) = &PTR_FUN_1441b39d0;
  *(undefined ***)(param_1 + 0x8d0) = &PTR_FUN_144055190;
  *(undefined ***)(param_1 + 0x8c8) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0x8c0) = &PTR_FUN_14407f730;
  *(undefined ***)(param_1 + 0x8b8) = &PTR_FUN_1441b49f8;
  *(undefined ***)(param_1 + 0x8b0) = &PTR_FUN_14407f310;
  if (*(longlong *)(param_1 + 0x888) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x768) = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(param_1 + 0x800);
  FUN_14074e810(param_1 + 0x770);
  iVar1 = *(int *)(param_1 + 0x718);
  lVar2 = *(longlong *)(param_1 + 0x710);
  if (iVar1 != 0) {
    lVar2 = lVar2 + 0x58;
    do {
      if (*(longlong *)(lVar2 + 0x118) != 0) {
        FMemory::Free();
      }
      *(undefined ***)(lVar2 + -8) = &PTR__scalar_deleting_destructor__144080980;
      FUN_14074e760(lVar2 + 0x90);
      FUN_14074e810(lVar2);
      lVar2 = lVar2 + 0x188;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    lVar2 = *(longlong *)(param_1 + 0x710);
  }
  if (lVar2 != 0) {
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



// FUNCTION 1409c4a20 FUN_1409c4a20 body=394 status=ok
// SIG undefined FUN_1409c4a20(void)

void FUN_1409c4a20(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x500) != 0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 0x4d0);
  lVar1 = *(longlong *)(param_1 + 0x4c8);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x4c8);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 0x4c0);
  lVar1 = *(longlong *)(param_1 + 0x4b8);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    do {
      if (plVar2[6] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 9;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x4b8);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    if (*(longlong *)(param_1 + 0x4a0) == 0) {
      **(longlong **)(param_1 + 0x4a8) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x4a8) = *(longlong *)(param_1 + 0x4a0);
      *(undefined8 *)(*(longlong *)(param_1 + 0x4a0) + 8) = *(undefined8 *)(param_1 + 0x4a8);
      *(undefined8 *)(param_1 + 0x4a0) = 0;
    }
    *(undefined8 *)(param_1 + 0x4a8) = 0;
    *(undefined8 *)(param_1 + 0x4b0) = 0;
  }
  *(undefined ***)(param_1 + 0x498) = &PTR_FUN_144193ee0;
  *(undefined ***)(param_1 + 0x490) = &PTR_FUN_1440732c8;
  *(undefined ***)(param_1 + 0x480) = &PTR_FUN_1441b39f8;
  *(undefined ***)(param_1 + 0x478) = &PTR_FUN_143fddd00;
  *(undefined ***)(param_1 + 0x470) = &PTR_FUN_1441b39a8;
  *(undefined ***)(param_1 + 0x468) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0x460) = &PTR_FUN_1441b39d0;
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_1441b3948;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 1409c4bb0 FUN_1409c4bb0 body=2064 status=ok
// SIG undefined FUN_1409c4bb0(void)

void FUN_1409c4bb0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  plVar8 = *(longlong **)(param_1 + 0x2270);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar6 == 1) && (plVar8 != (longlong *)0x0)) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  iVar6 = *(int *)(param_1 + 0x2248);
  plVar8 = *(longlong **)(param_1 + 0x2240);
  if (iVar6 != 0) {
    do {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar8 = *(longlong **)(param_1 + 0x2240);
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  if (*(longlong *)(param_1 + 0x2208) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x21e8) != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0x20a0);
  lVar5 = *(longlong *)(param_1 + 0x2098);
  if (iVar6 != 0) {
    plVar8 = (longlong *)(lVar5 + 0x60);
    do {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 0xe;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x2098);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2078) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2060) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1ff0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1fb0) != 0) {
    FMemory::Free();
  }
  FUN_1409c5580(param_1 + 0x1f18);
  FUN_1409c5580(param_1 + 0x1e80);
  if (*(longlong *)(param_1 + 0x1e18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e08) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1df8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1de8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1dd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1dc8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1db8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1da8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1ce8) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x1cc0);
  if (*(longlong *)(param_1 + 0x1ca0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c08) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1ad0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1ab8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1988) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1858) != 0) {
    FMemory::Free();
  }
  lVar5 = *(longlong *)(param_1 + 0x17c0);
  iVar6 = *(int *)(param_1 + 0x17c8);
  lVar7 = lVar5;
  if (lVar5 == 0) {
    lVar7 = param_1 + 0x1560;
  }
  if (iVar6 != 0) {
    plVar8 = (longlong *)(lVar7 + 0x88);
    do {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 0x13;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x17c0);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1550) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1540) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1530) != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0x1520);
  lVar5 = *(longlong *)(param_1 + 0x1518);
  if (iVar6 != 0) {
    plVar8 = (longlong *)(lVar5 + 200);
    do {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 0x1f;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x1518);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x14e0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x14d0) = 0;
  if (*(longlong *)(param_1 + 0x14c8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1488);
  *(undefined4 *)(param_1 + 0x1478) = 0;
  if (*(longlong *)(param_1 + 0x1470) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1430);
  if (*(longlong *)(param_1 + 0x1410) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x13e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x13d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x13b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x13a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1390) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1380) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1370) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1358);
  if (*(longlong *)(param_1 + 0x1348) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1338) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1328) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1318) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1308) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x12e8);
  if (*(longlong *)(param_1 + 0x12b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1218) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1208) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x11f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x11e0) != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x1148);
  if (*(longlong *)(param_1 + 0x10f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1090) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1080) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1070) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1060) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1050) != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 0x1048);
  lVar5 = *(longlong *)(param_1 + 0x1040);
  if (iVar6 != 0) {
    plVar8 = (longlong *)(lVar5 + 8);
    do {
      plVar4 = (longlong *)*plVar8;
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
      plVar8 = plVar8 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x1040);
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1030) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xff0) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xf28);
  if (*(longlong *)(param_1 + 0xf18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf08) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xef8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xee8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xed8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xec8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xe50) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0xe48) = &PTR_FUN_144191f28;
  *(undefined ***)(param_1 + 0xe40) = &PTR_FUN_1441b4f70;
  *(undefined ***)(param_1 + 0xe38) = &PTR_FUN_1441b39a8;
  *(undefined ***)(param_1 + 0xe30) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0xe28) = &PTR_FUN_1441b4c68;
  *(undefined ***)(param_1 + 0xe20) = &PTR_FUN_1441b4c28;
  *(undefined ***)(param_1 + 0xdc8) = &PTR__scalar_deleting_destructor__1441b4bf0;
  *(undefined4 *)(param_1 + 0xe18) = 0;
  if (*(longlong *)(param_1 + 0xe10) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xdd0);
  *(undefined ***)(param_1 + 0xdc0) = &PTR_FUN_143fce298;
  *(undefined ***)(param_1 + 0xdb8) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0xdb0) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0xda8) = &PTR_FUN_1441b4ba0;
  *(undefined ***)(param_1 + 0xda0) = &PTR_CanBeUsedOnAnyThread_1441b4b88;
  *(undefined ***)(param_1 + 0xd98) = &PTR_FUN_144193ee0;
  *(undefined ***)(param_1 + 0xd90) = &PTR_FUN_144191f28;
  *(undefined ***)(param_1 + 0xd88) = &PTR_FUN_1441939c8;
  *(undefined ***)(param_1 + 0xd80) = &PTR_StartProfileThreadUsage_1441b4b58;
  *(undefined ***)(param_1 + 0xd78) = &PTR_FUN_144194f88;
  FUN_1409c47a0(param_1);
  return;
}



// FUNCTION 1409c53c0 FUN_1409c53c0 body=327 status=ok
// SIG undefined FUN_1409c53c0(void)

void FUN_1409c53c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(int *)(param_1 + 0x1f0) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x1e0);
    if (*(longlong **)(param_1 + 0x1e0) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_1 + 0x1c0);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x17c) != '\0') {
    *(undefined1 *)(param_1 + 0x17c) = 0;
  }
  if (*(char *)(param_1 + 0x174) != '\0') {
    *(undefined1 *)(param_1 + 0x174) = 0;
  }
  if (*(char *)(param_1 + 0x164) != '\0') {
    *(undefined1 *)(param_1 + 0x164) = 0;
  }
  if (*(char *)(param_1 + 0x15c) != '\0') {
    *(undefined1 *)(param_1 + 0x15c) = 0;
  }
  if (*(char *)(param_1 + 0x14c) != '\0') {
    *(undefined1 *)(param_1 + 0x14c) = 0;
  }
  if (*(char *)(param_1 + 0x13c) != '\0') {
    *(undefined1 *)(param_1 + 0x13c) = 0;
  }
  if (*(char *)(param_1 + 300) != '\0') {
    *(undefined1 *)(param_1 + 300) = 0;
  }
  if (*(char *)(param_1 + 0x11c) != '\0') {
    *(undefined1 *)(param_1 + 0x11c) = 0;
  }
  if (*(char *)(param_1 + 0x10c) != '\0') {
    *(undefined1 *)(param_1 + 0x10c) = 0;
  }
  if (*(char *)(param_1 + 0xfc) != '\0') {
    *(undefined1 *)(param_1 + 0xfc) = 0;
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1409c5510 FUN_1409c5510 body=97 status=ok
// SIG undefined FUN_1409c5510(void)

void FUN_1409c5510(longlong *param_1)

{
  longlong *plVar1;
  
  if ((int)param_1[0xe] != 0) {
    plVar1 = (longlong *)param_1[0xc];
    if ((longlong *)param_1[0xc] == (longlong *)0x0) {
      plVar1 = param_1 + 8;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (param_1[0xc] != 0) {
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



// FUNCTION 1409c5580 FUN_1409c5580 body=104 status=ok
// SIG undefined FUN_1409c5580(void)

void FUN_1409c5580(longlong param_1)

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
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1409c55f0 FUN_1409c55f0 body=11 status=ok
// SIG undefined FUN_1409c55f0(void)

void FUN_1409c55f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1441b3948;
  return;
}



// FUNCTION 1409c5600 FUN_1409c5600 body=116 status=ok
// SIG undefined FUN_1409c5600(void)

void FUN_1409c5600(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_1409c5510(param_1 + 0x130);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0x40);
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
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_144055190;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1409c5680 FUN_1409c5680 body=217 status=ok
// SIG undefined FUN_1409c5680(void)

void FUN_1409c5680(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  FUN_1406d8b70(param_1 + 0x330);
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  iVar4 = *(int *)(param_1 + 0x250);
  lVar2 = *(longlong *)(param_1 + 0x248);
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x30);
    do {
      if ((int)plVar3[2] != 0) {
        plVar1 = (longlong *)*plVar3;
        if ((longlong *)*plVar3 == (longlong *)0x0) {
          plVar1 = plVar3 + -4;
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1,0);
        }
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar2 = *(longlong *)(param_1 + 0x248);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 1409c5760 FUN_1409c5760 body=400 status=ok
// SIG undefined FUN_1409c5760(void)

undefined8 FUN_1409c5760(undefined8 *param_1,longlong param_2,short param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  cVar2 = UActorComponent::IsComponentTickEnabled(param_2);
  if ((cVar2 == '\0') && ((*(byte *)(param_2 + 0xb1c) & 8) == 0)) {
    return 1;
  }
  if (param_3 == 0x10) {
    return 1;
  }
  lVar3 = FUN_1423ac7e0(param_2);
  if (lVar3 == 0) {
    return 1;
  }
  plVar4 = (longlong *)FUN_142c71cc0(*param_1,param_3);
  lVar5 = *plVar4;
  if (lVar5 == 0) {
    lVar5 = FUN_142c6f640(*param_1,param_3);
    if (lVar5 == 0) goto LAB_1409c58a8;
    lVar6 = UBlendSpaceBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1409c58a8;
    uVar7 = (**(code **)(*(longlong *)*param_1 + 0x138))((longlong *)*param_1,param_3);
    lVar5 = FUN_14225eb80(lVar3,lVar5,uVar7);
    if (lVar5 == 0) goto LAB_1409c58a8;
    if ((*(longlong *)(lVar5 + 8) == 0) || (*(float *)(lVar5 + 0x50) == 0.0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1409c57ed;
    if ((*(longlong *)(lVar5 + 8) == 0) || (*(char *)(lVar5 + 0x1c) == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
  }
  else {
    cVar2 = FUN_142278320(lVar3,lVar5,1);
    if (cVar2 != '\0') goto LAB_1409c57ed;
    cVar2 = UAnimInstance::Montage_IsActive(lVar3,lVar5);
  }
  if (cVar2 != '\0') {
LAB_1409c57ed:
    *(undefined1 *)param_1[1] = 1;
    return 0;
  }
LAB_1409c58a8:
  if (*(char *)param_1[1] == '\0') {
    uVar7 = (**(code **)(*(longlong *)*param_1 + 0x138))((longlong *)*param_1,param_3);
    cVar2 = FUN_1409d9db0(*param_1,lVar3,uVar7);
    if (cVar2 != '\0') {
      *(undefined1 *)param_1[1] = 1;
    }
  }
  return 1;
}



// FUNCTION 1409c58f0 FUN_1409c58f0 body=631 status=ok
// SIG undefined FUN_1409c58f0(void)

undefined8 FUN_1409c58f0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  longlong local_res10 [2];
  undefined8 local_res20;
  longlong *local_58;
  longlong *local_50;
  
  if ((*(byte *)(param_2 + 0xb1c) & 4) != 0) {
    return 1;
  }
  (**(code **)(*(longlong *)*param_1 + 0xb0))
            ((longlong *)*param_1,param_2,param_3,*(undefined4 *)(param_1[1] + 0x1e0));
  lVar7 = *param_1;
  if (*(char *)(lVar7 + 0x470) == '\x02') {
    *(undefined1 *)(lVar7 + 0x470) = 0;
    lVar7 = *param_1;
  }
  local_res20 = *(undefined8 *)(*(longlong *)param_1[2] + 0x10);
  FUN_142c858a0(*(undefined8 *)(lVar7 + 0x18),&local_58,local_res20,lVar7);
  if (local_58 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar7 = local_58[1];
    lVar4 = FVolumeControlStyle::StaticStruct();
    for (; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar4) {
        bVar3 = true;
        goto LAB_1409c59a8;
      }
    }
    bVar3 = false;
LAB_1409c59a8:
    plVar8 = (longlong *)0x0;
    if (bVar3) {
      plVar8 = local_58;
    }
  }
  plVar5 = (longlong *)FUN_142c6f640(plVar8,param_3 & 0xffff);
  if (plVar5 == (longlong *)0x0) goto LAB_1409c5aff;
  uVar11 = 0;
  if (*(int *)(*param_1 + 0x4fc) != 0) {
    uVar6 = FUN_1430a8390();
    lVar7 = FUN_142c9e5b0(plVar5,uVar6);
    if (lVar7 != 0) {
      fVar9 = (float)FAnimNotifyEvent::GetTriggerTime(lVar7);
      if (0.0 < *(float *)param_1[3]) {
        fVar10 = (float)(**(code **)(*plVar5 + 0x280))(plVar5);
        fVar9 = fVar9 / (fVar10 / *(float *)param_1[3]);
      }
      fVar10 = *(float *)(*param_1 + 0x504);
      if (fVar9 <= fVar10) {
        fVar9 = fVar10;
      }
      *(float *)(*param_1 + 0x504) = fVar9;
    }
  }
  if ((*(char *)param_1[4] == '\0') && (((short)param_3 == 2 || ((short)param_3 == 8))))
  goto LAB_1409c5aff;
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x138))(plVar8,param_3 & 0xffff);
  lVar7 = *plVar8;
  lVar4 = param_1[1];
  local_res10[0] = lVar7;
  if (*(char *)(lVar4 + 0x1e5) == '\0') {
LAB_1409c5aac:
    if (local_res10[0] == lVar7) goto LAB_1409c5ab1;
  }
  else {
    plVar8 = (longlong *)
             (**(code **)(*(longlong *)*param_1 + 0x138))((longlong *)*param_1,param_3 & 0xffff);
    local_res10[0] = *plVar8;
    lVar4 = param_1[1];
    if (*(char *)(lVar4 + 0x1e5) == '\0') goto LAB_1409c5aac;
LAB_1409c5ab1:
    uVar11 = *(undefined4 *)(lVar4 + 0x1e0);
  }
  FUN_142c842f0(*param_1,param_2,param_3 & 0xffff,plVar5,local_res10,uVar11,
                *(undefined4 *)(*param_1 + 0x46c),*(undefined4 *)param_1[3]);
LAB_1409c5aff:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_50 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return 1;
}



// FUNCTION 1409c5b70 FUN_1409c5b70 body=738 status=ok
// SIG undefined FUN_1409c5b70(void)

void FUN_1409c5b70(longlong param_1,longlong *param_2,longlong *param_3)

{
  float **ppfVar1;
  undefined8 *puVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float *pfVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  float *_Src;
  float *pfVar14;
  undefined8 *puVar15;
  float *local_b8;
  uint local_b0;
  uint local_ac;
  undefined8 local_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 local_68;
  undefined8 uStack_60;
  
  if (0 < (int)param_2[1]) {
    pfVar10 = (float *)0x0;
    puVar15 = (undefined8 *)*param_2;
    local_b8 = (float *)0x0;
    local_ac = 0;
    puVar2 = puVar15 + (longlong)(int)param_2[1] * 9;
    _Src = pfVar10;
    uVar13 = 0;
    if (puVar15 != puVar2) {
      puVar11 = puVar15 + 2;
      pfVar14 = pfVar10;
      do {
        local_a8 = *puVar15;
        local_68 = puVar11[6];
        uVar8 = *puVar11;
        uVar9 = puVar11[1];
        uStack_60 = 0;
        uVar4 = puVar11[2];
        uVar5 = puVar11[3];
        lVar12 = (longlong)(int)pfVar10;
        uVar6 = puVar11[4];
        uVar7 = puVar11[5];
        uStack_a0 = *(undefined1 *)(puVar11 + -1);
        local_b0 = (int)pfVar10 + 1;
        if ((int)pfVar14 < (int)local_b0) {
          TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(&local_b8,pfVar10);
          pfVar14 = (float *)(ulonglong)local_ac;
          _Src = local_b8;
        }
        pfVar10 = (float *)(ulonglong)local_b0;
        puVar15 = puVar15 + 9;
        puVar11 = puVar11 + 9;
        *(undefined8 *)(_Src + lVar12 * 0x14) = local_a8;
        *(ulonglong *)(_Src + lVar12 * 0x14 + 2) = CONCAT71(uStack_9f,uStack_a0);
        *(undefined8 *)(_Src + lVar12 * 0x14 + 4) = uVar8;
        *(undefined8 *)(_Src + lVar12 * 0x14 + 4 + 2) = uVar9;
        *(undefined8 *)(_Src + lVar12 * 0x14 + 8) = uVar4;
        *(undefined8 *)(_Src + lVar12 * 0x14 + 8 + 2) = uVar5;
        *(undefined8 *)(_Src + lVar12 * 0x14 + 0xc) = uVar6;
        *(undefined8 *)(_Src + lVar12 * 0x14 + 0xc + 2) = uVar7;
        pfVar3 = _Src + lVar12 * 0x14 + 0x10;
        *pfVar3 = (float)local_68;
        pfVar3[1] = local_68._4_4_;
        pfVar3[2] = (float)uStack_60;
        pfVar3[3] = uStack_60._4_4_;
        uVar13 = local_b0;
      } while (puVar15 != puVar2);
    }
    uVar8 = GetTransientPackage();
    FUN_1417846f0(uVar8,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar9 = UBTTask_RunBehaviorDynamic::GetPrivateStaticClass();
    lVar12 = FUN_1417985e0(uVar9,uVar8,0,0,0,0,0,0,0);
    param_3[1] = lVar12;
    ppfVar1 = (float **)(lVar12 + 0x38);
    if (ppfVar1 != &local_b8) {
      *(uint *)(lVar12 + 0x40) = uVar13;
      if ((uVar13 == 0) && (*(int *)(lVar12 + 0x44) == 0)) {
        *(undefined4 *)(lVar12 + 0x44) = 0;
      }
      else {
        TArray<FPlayerReservation,FDefaultAllocator>::ResizeForCopy(ppfVar1,uVar13);
        _guard_xfg_dispatch_icall_nop(*ppfVar1,_Src,(longlong)(int)uVar13 * 0x50);
      }
    }
    if (_Src != _Src + (longlong)(int)uVar13 * 0x14) {
      pfVar10 = _Src + 0x10;
      do {
        pfVar14 = pfVar10 + 4;
        *pfVar10 = *pfVar10 * *(float *)(param_1 + 8);
        pfVar10 = pfVar10 + 0x14;
      } while (pfVar14 != _Src + (longlong)(int)uVar13 * 0x14);
    }
    uVar8 = GetTransientPackage();
    FUN_1417846f0(uVar8,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar9 = UBTTask_RunBehaviorDynamic::GetPrivateStaticClass();
    lVar12 = FUN_1417985e0(uVar9,uVar8,0,0,0,0,0,0,0);
    *param_3 = lVar12;
    ppfVar1 = (float **)(lVar12 + 0x38);
    if (ppfVar1 != &local_b8) {
      *(uint *)(lVar12 + 0x40) = uVar13;
      if ((uVar13 == 0) && (*(int *)(lVar12 + 0x44) == 0)) {
        *(undefined4 *)(lVar12 + 0x44) = 0;
      }
      else {
        TArray<FPlayerReservation,FDefaultAllocator>::ResizeForCopy(ppfVar1,uVar13);
        _guard_xfg_dispatch_icall_nop(*ppfVar1,_Src,(longlong)(int)uVar13 * 0x50);
      }
    }
    if (_Src != (float *)0x0) {
      FMemory::Free(_Src);
    }
  }
  return;
}



// FUNCTION 1409c62b0 FUN_1409c62b0 body=221 status=ok
// SIG undefined FUN_1409c62b0(void)

longlong FUN_1409c62b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x23a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2388) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2378) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2368) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2358) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2338) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x2300) = 0;
  if (*(longlong *)(param_1 + 0x22f8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,FNavAvoidanceData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x22b8);
  *(undefined ***)(param_1 + 0x2298) = &PTR_FUN_143fe0658;
  FUN_1409c4bb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x23f0);
  }
  return param_1;
}



// FUNCTION 1409c6390 FUN_1409c6390 body=66 status=ok
// SIG undefined FUN_1409c6390(void)

longlong FUN_1409c6390(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_144193ee0;
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x478);
  }
  return param_1;
}



// FUNCTION 1409c63e0 FUN_1409c63e0 body=194 status=ok
// SIG undefined FUN_1409c63e0(void)

longlong FUN_1409c63e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x620) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x610) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x600) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    FMemory::Free();
  }
  FUN_1409c44b0(param_1 + 0x560);
  FUN_1409c44b0(param_1 + 0x550);
  FUN_1409c4610(param_1 + 0x540);
  if (*(longlong *)(param_1 + 0x530) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x638);
  }
  return param_1;
}



// FUNCTION 1409c64b0 FUN_1409c64b0 body=52 status=ok
// SIG undefined FUN_1409c64b0(void)

undefined8 FUN_1409c64b0(undefined8 param_1,ulonglong param_2)

{
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x490);
  }
  return param_1;
}



// FUNCTION 1409c64f0 FUN_1409c64f0 body=182 status=ok
// SIG undefined FUN_1409c64f0(void)

longlong FUN_1409c64f0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x690) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x680) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x670) != 0) {
    FMemory::Free();
  }
  FUN_1409c44b0(param_1 + 0x5f0);
  FUN_1409c44b0(param_1 + 0x5e0);
  if (*(longlong *)(param_1 + 0x5c8) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6c8);
  }
  return param_1;
}



// FUNCTION 1409c65b0 FUN_1409c65b0 body=67 status=ok
// SIG undefined FUN_1409c65b0(void)

longlong FUN_1409c65b0(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x490);
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a0);
  }
  return param_1;
}



// FUNCTION 1409c6600 FUN_1409c6600 body=90 status=ok
// SIG undefined FUN_1409c6600(void)

longlong FUN_1409c6600(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x580) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x570) != 0) {
    FMemory::Free();
  }
  FUN_1409c4a20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5a0);
  }
  return param_1;
}



// FUNCTION 1409c6660 FUN_1409c6660 body=308 status=ok
// SIG undefined FUN_1409c6660(void)

longlong FUN_1409c6660(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xcb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xca0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xc98) = 0;
  if (*(longlong *)(param_1 + 0xc90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xc50);
  *(undefined4 *)(param_1 + 0xc48) = 0;
  if (*(longlong *)(param_1 + 0xc40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xc00);
  FUN_1409c4520(param_1 + 0xbf0);
  *(undefined ***)(param_1 + 0xad0) = &PTR_FUN_1441b3a38;
  FUN_1406d8b70(param_1 + 0xaf0);
  FUN_1409c45a0(param_1 + 0xa38);
  FUN_1406d8b70(param_1 + 0x900);
  FUN_1406d8b70(param_1 + 0x7a0);
  *(undefined ***)(param_1 + 0x730) = &PTR_FUN_144191f28;
  *(undefined ***)(param_1 + 0x6f0) = &PTR_FUN_1441b39a8;
  *(undefined ***)(param_1 + 0x6e8) = &PTR_FUN_144055c50;
  *(undefined ***)(param_1 + 0x6e0) = &PTR_FUN_144080410;
  FUN_14099acc0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xcd0);
  }
  return param_1;
}


