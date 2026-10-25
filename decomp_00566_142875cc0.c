// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142875cc0 GetTimelineLength body=310 status=ok
// SIG undefined GetTimelineLength(void)

float FTimeline::GetTimelineLength(char *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  undefined1 local_34 [28];
  
  if (*param_1 == '\0') {
    return *(float *)(param_1 + 4);
  }
  if (*param_1 == '\x01') {
    iVar3 = 0;
    iVar2 = 0;
    fVar5 = 0.0;
    while ((fVar4 = fVar5, -1 < iVar2 && (iVar2 < *(int *)(param_1 + 0x18)))) {
      lVar1 = (longlong)iVar2;
      iVar2 = iVar2 + 1;
      fVar5 = *(float *)(*(longlong *)(param_1 + 0x10) + lVar1 * 0x18);
      if (fVar5 <= fVar4) {
        fVar5 = fVar4;
      }
    }
    iVar2 = 0;
    while ((fVar5 = fVar4, -1 < iVar2 && (iVar2 < *(int *)(param_1 + 0x28)))) {
      FUN_1423d62c0(*(undefined8 *)((longlong)iVar2 * 0x40 + *(longlong *)(param_1 + 0x20)),
                    local_res20,local_res8);
      iVar2 = iVar2 + 1;
      fVar4 = local_res8[0];
      if (local_res8[0] <= fVar5) {
        fVar4 = fVar5;
      }
    }
    iVar2 = 0;
    while ((fVar4 = fVar5, -1 < iVar2 && (iVar2 < *(int *)(param_1 + 0x38)))) {
      FUN_1423d62c0(*(undefined8 *)((longlong)iVar2 * 0x40 + *(longlong *)(param_1 + 0x30)),local_38
                    ,local_res10);
      iVar2 = iVar2 + 1;
      fVar5 = local_res10[0];
      if (local_res10[0] <= fVar4) {
        fVar5 = fVar4;
      }
    }
    while ((fVar5 = fVar4, -1 < iVar3 && (iVar3 < *(int *)(param_1 + 0x48)))) {
      FUN_1423d62c0(*(undefined8 *)((longlong)iVar3 * 0x40 + *(longlong *)(param_1 + 0x40)),local_34
                    ,local_res18);
      iVar3 = iVar3 + 1;
      fVar4 = local_res18[0];
      if (local_res18[0] <= fVar5) {
        fVar4 = fVar5;
      }
    }
    return fVar5;
  }
  return 0.0;
}



// FUNCTION 142875e00 FUN_142875e00 body=12 status=ok
// SIG undefined FUN_142875e00(void)

void FUN_142875e00(longlong param_1)

{
  FTimeline::GetTimelineLength(param_1 + 0x178);
  return;
}



// FUNCTION 142875e10 GetTinyFont body=12 status=ok
// SIG undefined GetTinyFont(void)

undefined8 UEngine::GetTinyFont(void)

{
  return *(undefined8 *)(DAT_146b17150 + 0x30);
}



// FUNCTION 142875e20 GetTrackPropertyName body=361 status=ok
// SIG undefined GetTrackPropertyName(void)

undefined8
UTimelineTemplate::GetTrackPropertyName(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined8 local_res18 [2];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  longlong local_18 [2];
  
  local_res18[0] = param_3;
  FUN_1428927f0(&local_28,*(undefined8 *)(param_1 + 0x18));
  FUN_141682af0(param_1 + 0x88,&local_38,0);
  puVar5 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar5 = local_38;
  }
  puVar3 = (undefined8 *)FName::ToString(local_res18,local_18);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*puVar3;
  }
  puVar6 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar6 = local_28;
  }
  FString::PrintfImpl(&local_48,L"%s_%s_%s",puVar6,puVar8,puVar5);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar7 = 0;
  lVar4 = 0;
  while( true ) {
    if (local_40 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = local_40 + -1;
    }
    if (iVar2 <= iVar7) break;
    uVar1 = local_48[lVar4];
    if ((((uVar1 < 0x41) || (0x5a < uVar1)) && (0x19 < (ushort)(uVar1 - 0x61))) &&
       ((uVar1 != 0x5f && ((lVar4 < 1 || (9 < (ushort)(uVar1 - 0x30))))))) {
      local_48[lVar4] = 0x5f;
    }
    iVar7 = iVar7 + 1;
    lVar4 = lVar4 + 1;
  }
  puVar5 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar5 = local_48;
  }
  FName::FName(param_2,puVar5,1);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142875f90 GetUpdateFunctionName body=137 status=ok
// SIG undefined GetUpdateFunctionName(void)

undefined8 UTimelineTemplate::GetUpdateFunctionName(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *local_28;
  int local_20;
  undefined2 *local_18;
  int local_10;
  
  FUN_1428927f0(&local_18,*(undefined8 *)(param_1 + 0x18));
  puVar1 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(&local_28,L"%s__UpdateFunc",puVar1);
  puVar1 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar1 = local_28;
  }
  FName::FName(param_2,puVar1,1);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142876040 FUN_142876040 body=97 status=ok
// SIG undefined FUN_142876040(void)

bool FUN_142876040(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  uint local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_18;
  
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_48 = 6;
  uStack_40 = CONCAT31(uStack_40._1_3_,1);
  local_38 = (local_38 >> 8 & 0xff) << 8;
  local_28 = 6;
  uStack_24 = 0;
  uStack_20 = uStack_40;
  uStack_1c = 0x467a0000;
  local_18 = local_38;
  cVar1 = FUN_1428863d0(0x467a0000,6,&local_28,&local_58);
  return cVar1 != '\0';
}



// FUNCTION 1428760b0 FUN_1428760b0 body=71 status=ok
// SIG undefined FUN_1428760b0(void)

longlong FUN_1428760b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
  while( true ) {
    if (plVar2 == plVar1) {
      lVar3 = FUN_14286b170(DAT_146b17150,0);
      return lVar3;
    }
    if (*(longlong *)(*plVar2 + 0x238) == param_2) break;
    plVar2 = plVar2 + 1;
  }
  return *plVar2;
}



// FUNCTION 142876100 FUN_142876100 body=80 status=ok
// SIG undefined FUN_142876100(void)

longlong FUN_142876100(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
  while( true ) {
    if (plVar2 == plVar1) {
      lVar3 = FUN_14286b170(DAT_146b17150,0);
      return lVar3;
    }
    if (*(longlong *)(*plVar2 + 200) == param_2) break;
    plVar2 = plVar2 + 1;
  }
  return *plVar2;
}



// FUNCTION 142876150 FUN_142876150 body=60 status=ok
// SIG undefined FUN_142876150(void)

longlong FUN_142876150(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
  while( true ) {
    if (plVar2 == plVar1) {
      return 0;
    }
    if (*(longlong *)(*plVar2 + 0x1c8) == param_2) break;
    plVar2 = plVar2 + 1;
  }
  return *plVar2;
}



// FUNCTION 142876190 FUN_142876190 body=57 status=ok
// SIG undefined FUN_142876190(void)

longlong FUN_142876190(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar3 + *(int *)(param_1 + 0xc20);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    lVar2 = *(longlong *)(*plVar3 + 0x1c8);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) == param_2)) break;
    plVar3 = plVar3 + 1;
  }
  return *plVar3;
}



// FUNCTION 1428761d0 FUN_1428761d0 body=60 status=ok
// SIG undefined FUN_1428761d0(void)

longlong FUN_1428761d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
  while( true ) {
    if (plVar2 == plVar1) {
      return 0;
    }
    if (*(longlong *)(*plVar2 + 0x288) == param_2) break;
    plVar2 = plVar2 + 1;
  }
  return *plVar2;
}



// FUNCTION 142876210 FUN_142876210 body=71 status=ok
// SIG undefined FUN_142876210(void)

longlong FUN_142876210(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
  while( true ) {
    if (plVar2 == plVar1) {
      lVar3 = FUN_14286b170(DAT_146b17150,0);
      return lVar3;
    }
    if (*(longlong *)(*plVar2 + 0x288) == param_2) break;
    plVar2 = plVar2 + 1;
  }
  return *plVar2;
}



// FUNCTION 142876260 GetWorldFromContextObject body=270 status=ok
// SIG undefined GetWorldFromContextObject(void)

longlong UEngine::GetWorldFromContextObject(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined8 local_res10;
  undefined2 *local_28;
  int local_20;
  undefined2 *local_18;
  int local_10;
  
  if (param_2 == (longlong *)0x0) {
    if (param_3 == 1) {
      local_res10 = 0;
      FUN_141790820(L"A null object was passed as a world context object to UEngine::GetWorldFromContextObject()."
                    ,3,0);
    }
    return 0;
  }
  local_res10 = CONCAT71(local_res10._1_7_,1);
  if (param_3 == 2) {
    lVar1 = UObject::GetWorldChecked(param_2,&local_res10);
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
  }
  if ((char)local_res10 != '\0') {
    if ((lVar1 == 0) && (param_3 == 1)) {
      UObjectBaseUtility::GetPathName(param_2,&local_18,0);
      puVar2 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar2 = local_18;
      }
      FString::PrintfImpl(&local_28,&DAT_1451c9b00,puVar2);
      puVar2 = &DAT_143f3eda8;
      if (local_20 != 0) {
        puVar2 = local_28;
      }
      FUN_141790820(puVar2,3,0);
      if (local_28 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if ((char)local_res10 != '\0') {
      return lVar1;
    }
  }
  return DAT_146b19a68;
}



// FUNCTION 142876370 FUN_142876370 body=680 status=ok
// SIG undefined FUN_142876370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142876370(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined4 local_120;
  undefined4 *local_118;
  ulonglong *puStack_110;
  undefined8 local_108;
  longlong local_100;
  undefined4 *local_f8;
  ulonglong *puStack_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar6 = FText::FromString(local_80,param_4);
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_a8,L"Error \'{0}\'. Exiting.",L"Engine",L"FailedToLoadDefaultMap");
  puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar7);
  local_68[0] = 4;
  FText::FText(local_58,lVar6);
  local_108 = *puVar8;
  local_118 = local_68;
  puStack_110 = local_38;
  local_100 = puVar8[1];
  local_40 = '\x01';
  if (local_100 != 0) {
    LOCK();
    *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
    UNLOCK();
  }
  local_f8 = local_118;
  puStack_f0 = puStack_110;
  uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8,&local_f8);
  uVar7 = FText::Format(local_c0,&local_108,uVar7);
  FText::FText(local_d8,uVar7);
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b8 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b8 + 8))(local_b8,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_e8);
  if (local_40 != '\0') {
    local_40 = '\0';
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  plVar4 = (longlong *)puVar8[1];
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
  plVar4 = *(longlong **)(lVar6 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a0 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  FUN_1416786b0(0,local_d8,0);
  if (*(longlong *)(param_2 + 0x288) == 0) {
    local_120 = 4;
    local_118 = (undefined4 *)0x0;
    local_128 = 1;
    uVar7 = FUN_1428c8a00(*param_2,0,0,0);
    FUN_14288d2f0(param_2,uVar7);
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_d0 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  return;
}



// FUNCTION 142876620 HandleCrackURLCommand body=522 status=ok
// SIG undefined HandleCrackURLCommand(void)

undefined8 UEngine::HandleCrackURLCommand(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong local_88 [2];
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined4 local_58;
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  longlong *local_30;
  int local_28;
  undefined2 *local_20;
  int local_18;
  int local_10;
  
  FUN_14289aca0(&local_78,0,param_2,0);
  if (local_10 == 0) {
    FOutputDevice::LogfImpl(param_3,L"BAD URL");
  }
  else {
    puVar6 = &DAT_143f3eda8;
    puVar5 = &DAT_143f3eda8;
    if (local_70 != 0) {
      puVar5 = local_78;
    }
    FOutputDevice::LogfImpl(param_3,L"     Protocol: %s",puVar5);
    puVar5 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar5 = local_68;
    }
    FOutputDevice::LogfImpl(param_3,L"         Host: %s",puVar5);
    FOutputDevice::LogfImpl(param_3,L"         Port: %i",local_58);
    puVar5 = &DAT_143f3eda8;
    if (local_48 != 0) {
      puVar5 = local_50;
    }
    FOutputDevice::LogfImpl(param_3,L"          Map: %s",puVar5);
    FOutputDevice::LogfImpl(param_3,L"   NumOptions: %i",local_28);
    iVar3 = 0;
    if (0 < local_28) {
      lVar4 = 0;
      do {
        if (*(int *)(lVar4 + 8 + (longlong)local_30) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(lVar4 + (longlong)local_30);
        }
        FOutputDevice::LogfImpl(param_3,L"     Option %i: %s",iVar3,puVar5);
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 0x10;
      } while (iVar3 < local_28);
    }
    puVar5 = &DAT_143f3eda8;
    if (local_18 != 0) {
      puVar5 = local_20;
    }
    FOutputDevice::LogfImpl(param_3,L"       Portal: %s",puVar5);
    puVar2 = (undefined8 *)FUN_1428bd910(&local_78,local_88,0);
    if (*(int *)(puVar2 + 1) != 0) {
      puVar6 = (undefined2 *)*puVar2;
    }
    FOutputDevice::LogfImpl(param_3,L"       String: \'%s\'",puVar6);
    if (local_88[0] != 0) {
      FMemory::Free();
    }
  }
  plVar1 = local_30;
  if (local_20 != (undefined2 *)0x0) {
    FMemory::Free();
    plVar1 = local_30;
  }
  for (; local_28 != 0; local_28 = local_28 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_30 != (longlong *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_50 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142876830 FUN_142876830 body=1180 status=ok
// SIG undefined FUN_142876830(void)

void FUN_142876830(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  int local_res8;
  undefined2 *local_res20;
  undefined2 *local_178;
  undefined8 local_170;
  undefined2 *local_168;
  int local_160;
  int local_15c;
  void *local_158;
  char *local_150;
  undefined2 *local_148;
  longlong local_140 [2];
  longlong local_130 [3];
  undefined1 local_118 [112];
  undefined1 local_a8 [112];
  
  (**(code **)(*param_1 + 0x478))(param_1,param_3);
  plVar3 = (longlong *)param_1[0x183];
  plVar5 = plVar3 + (int)param_1[0x184];
  for (; plVar3 != plVar5; plVar3 = plVar3 + 1) {
    lVar4 = *plVar3;
    if (*(longlong *)(lVar4 + 0x288) == param_2) {
      FUN_1428ba050(lVar4 + 0xe8,L"Listen",0,&DAT_1468e2410);
      FUN_1428ba050(lVar4 + 0xe8,&DAT_1451cc3e8,0,&DAT_1468e2410);
      plVar3 = (longlong *)param_1[0x183];
      plVar5 = plVar3 + (int)param_1[0x184];
      goto joined_r0x000142876908;
    }
  }
  if (param_3 != (longlong *)0x0) {
    if (param_2 != 0) {
      FUN_14286cbe0(param_1,param_2,param_3[0x24]);
      return;
    }
    (**(code **)(*param_3 + 0x2c0))(param_3);
    (**(code **)(*param_3 + 0x2c8))(param_3);
    puVar8 = (undefined8 *)param_1[0x183];
    local_res20 = (undefined2 *)0x0;
    puVar10 = (undefined2 *)((longlong)(int)param_1[0x184] & 0x1fffffffffffffff);
    if (puVar8 + (int)param_1[0x184] < puVar8) {
      puVar10 = (undefined2 *)0x0;
    }
    local_148 = puVar10;
    if (puVar10 != (undefined2 *)0x0) {
      do {
        pcVar12 = (char *)*puVar8;
        if (*pcVar12 == '\x01') {
          local_150 = pcVar12;
          FURL::FURL(local_118,0);
          FURL::LoadURLConfig(local_118,L"DefaultPlayer",&DAT_1468e2410);
          plVar5 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
          lVar4 = plVar5[0x1f];
          if (lVar4 == 0) {
            (**(code **)(*plVar5 + 0x368))(plVar5);
            lVar4 = plVar5[0x1f];
            if (lVar4 != 0) goto LAB_142876aa5;
          }
          else {
LAB_142876aa5:
            puVar6 = (undefined8 *)FUN_141e0eac0(local_130);
            iVar13 = *(int *)(lVar4 + 0x48);
            iVar1 = *(int *)(puVar6 + 1);
            if (iVar1 < 2) {
              _Src = *(void **)(lVar4 + 0x40);
              local_168 = (undefined2 *)0x0;
              local_160 = iVar13;
              if (iVar13 == 0) {
                local_15c = 0;
                puVar10 = (undefined2 *)0x0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_168,iVar13,0);
                puVar10 = local_168;
                _guard_xfg_dispatch_icall_nop(local_168,_Src,(longlong)iVar13 * 2);
                iVar13 = local_160;
              }
            }
            else {
              iVar11 = iVar13 + -1;
              if (iVar13 == 0) {
                iVar11 = 0;
              }
              if ((iVar1 != 0) || (iVar13 = 1, iVar11 == 0)) {
                iVar13 = 0;
              }
              local_178 = (undefined2 *)*puVar6;
              *puVar6 = 0;
              local_170._4_4_ = *(int *)((longlong)puVar6 + 0xc);
              puVar6[1] = 0;
              if (local_170._4_4_ < iVar13 + iVar11 + iVar1) {
                local_170._0_4_ = iVar1;
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_178);
                iVar1 = (int)local_170;
              }
              local_158 = *(void **)(lVar4 + 0x40);
              puVar10 = local_178;
              iVar13 = iVar1;
              local_res8 = local_170._4_4_;
              if (iVar11 != 0) {
                local_170._0_4_ = (uint)(iVar1 == 0) + iVar11 + iVar1;
                if (local_170._4_4_ < (int)local_170) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,iVar1);
                }
                local_res8 = local_170._4_4_;
                iVar13 = (int)local_170;
                puVar10 = local_178;
                puVar9 = local_178 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0));
                _guard_xfg_dispatch_icall_nop(puVar9,local_158,(longlong)iVar11 * 2);
                puVar9[iVar11] = 0;
              }
              local_15c = local_res8;
              local_178 = (undefined2 *)0x0;
              local_170 = 0;
              pcVar12 = local_150;
            }
            puVar9 = &DAT_143f3eda8;
            if (iVar13 != 0) {
              puVar9 = puVar10;
            }
            uVar7 = FUN_14289aca0(local_a8,local_118,puVar9,1);
            FUN_1428bd910(uVar7,local_140,0);
            FString::operator=(pcVar12 + 0xd0);
            if (local_140[0] != 0) {
              FMemory::Free();
            }
            FURL::~FURL(local_a8);
            if (puVar10 != (undefined2 *)0x0) {
              FMemory::Free(puVar10);
            }
            if (local_130[0] != 0) {
              FMemory::Free();
            }
            pcVar12[0xe0] = '\x01';
            puVar10 = local_148;
          }
          FURL::~FURL(local_118);
        }
        local_res20 = (undefined2 *)((longlong)local_res20 + 1);
        puVar8 = puVar8 + 1;
      } while (local_res20 != puVar10);
    }
  }
  return;
joined_r0x000142876908:
  if (plVar3 == plVar5) {
    lVar4 = FUN_14286b170(DAT_146b17150,0);
LAB_142876936:
    plVar5 = (longlong *)(lVar4 + 0xd0);
    if ((wchar_t *)*plVar5 != L"?closed") {
      iVar13 = 0;
      *(undefined4 *)(lVar4 + 0xd8) = 0;
      if (*(int *)(lVar4 + 0xdc) != 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar5,8);
        iVar13 = *(int *)(lVar4 + 0xd8);
      }
      *(int *)(lVar4 + 0xd8) = iVar13 + 8;
      if (*(int *)(lVar4 + 0xdc) < iVar13 + 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar5,iVar13);
      }
      builtin_wcsncpy((wchar_t *)*plVar5,L"?closed",8);
    }
    *(undefined1 *)(lVar4 + 0xe0) = 0;
    cVar2 = FURL::HasOption(lVar4 + 0xe8,L"Listen");
    if (cVar2 == '\0') {
      return;
    }
    FUN_1428ba050(lVar4 + 0xe8,L"Listen",0,&DAT_1468e2410);
    return;
  }
  lVar4 = *plVar3;
  if (*(longlong *)(lVar4 + 0x288) == param_2) goto LAB_142876936;
  plVar3 = plVar3 + 1;
  goto joined_r0x000142876908;
}



// FUNCTION 142876cd0 HandleDisconnectCommand body=23 status=ok
// SIG undefined HandleDisconnectCommand(void)

undefined1
UEngine::HandleDisconnectCommand
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  FUN_142876830(param_1,param_4,*(undefined8 *)(param_4 + 0x38));
  return 1;
}



// FUNCTION 142876cf0 FUN_142876cf0 body=354 status=ok
// SIG undefined FUN_142876cf0(void)

void FUN_142876cf0(longlong *param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_3 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_3 + 0x120);
  lVar8 = 0;
  if ((lVar1 != 0x11a) && (lVar1 != 0x11b)) {
    return;
  }
  if (param_2 != 0) {
    plVar4 = (longlong *)param_1[0x183];
    plVar6 = plVar4 + (int)param_1[0x184];
    while( true ) {
      if (plVar4 == plVar6) {
        return;
      }
      lVar2 = *plVar4;
      if (*(longlong *)(lVar2 + 0x288) == param_2) break;
      plVar4 = plVar4 + 1;
    }
    if (0 < *(int *)(lVar2 + 0x250)) {
      plVar6 = *(longlong **)(lVar2 + 0x248);
      lVar7 = lVar8;
      do {
        lVar5 = *plVar6;
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x120) == lVar1)) goto LAB_142876df3;
        lVar7 = lVar7 + 1;
        plVar6 = plVar6 + 2;
      } while (lVar7 < *(int *)(lVar2 + 0x250));
    }
    if (*(int *)(lVar2 + 0x298) < 1) {
      return;
    }
    plVar6 = *(longlong **)(lVar2 + 0x290);
    while ((lVar5 = *plVar6, lVar5 == 0 || (*(longlong *)(lVar5 + 0x120) != lVar1))) {
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 2;
      if (*(int *)(lVar2 + 0x298) <= lVar8) {
        return;
      }
    }
LAB_142876df3:
    if (lVar5 == 0) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x4e0))(param_1,param_2,param_3,param_4);
  iVar3 = UNetDriver::GetNetMode(param_3);
  if ((((param_4 != 3) && (param_4 != 4)) && (1 < param_4 - 9U)) || (iVar3 == 3)) {
    FUN_1428678f0(param_2,param_3);
  }
  return;
}



// FUNCTION 142876e60 FUN_142876e60 body=226 status=ok
// SIG undefined FUN_142876e60(void)

void FUN_142876e60(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  bVar6 = true;
  if (param_3 != 0) {
    iVar2 = UNetDriver::GetNetMode(param_3);
    bVar6 = iVar2 != 3;
  }
  if ((param_2 == 0) || (*(longlong *)(param_2 + 400) == 0)) {
    plVar3 = *(longlong **)(param_1 + 0xc18);
    uVar5 = 0;
    uVar4 = (longlong)*(int *)(param_1 + 0xc20) & 0x1fffffffffffffff;
    if (plVar3 + *(int *)(param_1 + 0xc20) < plVar3) {
      uVar4 = uVar5;
    }
    if (uVar4 != 0) {
      do {
        lVar1 = *(longlong *)(*plVar3 + 0x1c8);
        if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) == param_3)) &&
           (lVar1 = *(longlong *)(*plVar3 + 0x240), lVar1 != 0)) {
          FUN_142937870(lVar1,param_4,bVar6);
        }
        plVar3 = plVar3 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar4);
    }
  }
  else {
    FUN_142937870(*(longlong *)(param_2 + 400),param_4,bVar6);
  }
  return;
}



// FUNCTION 142876f50 FUN_142876f50 body=367 status=ok
// SIG undefined FUN_142876f50(void)

undefined8 FUN_142876f50(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong local_78 [2];
  longlong local_68;
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  longlong *local_30;
  int local_28;
  longlong local_20;
  
  plVar3 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar3 + *(int *)(param_1 + 0xc20);
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar4 = *plVar3;
    if (*(longlong *)(lVar4 + 0x288) == param_4) goto LAB_142876fb6;
  }
  lVar4 = FUN_14286b170(DAT_146b17150,0);
LAB_142876fb6:
  FUN_14289aca0(local_78,lVar4 + 0xe8,param_2,0);
  cVar2 = FUN_1428b2650(local_78);
  if ((cVar2 == '\0') || (cVar2 = UEngine::MakeSureMapNameIsValid(param_1,&local_50), cVar2 != '\0')
     ) {
    FUN_14288d1c0(param_1,param_4,param_2,0);
  }
  else {
    puVar5 = &DAT_143f3eda8;
    if (local_48 != 0) {
      puVar5 = local_50;
    }
    FOutputDevice::LogfImpl(param_3,L"ERROR: The map \'%s\' does not exist.",puVar5);
  }
  plVar1 = local_30;
  if (local_20 != 0) {
    FMemory::Free();
    plVar1 = local_30;
  }
  for (; local_28 != 0; local_28 = local_28 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_30 != (longlong *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_50 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 1428770c0 FUN_1428770c0 body=323 status=ok
// SIG undefined FUN_1428770c0(void)

undefined8 FUN_1428770c0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  wint_t wVar2;
  wint_t wVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  wint_t *pwVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong local_38 [2];
  
  plVar4 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar4 + *(int *)(param_1 + 0xc20);
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    lVar5 = *plVar4;
    if (*(longlong *)(lVar5 + 0x288) == param_4) goto LAB_142877116;
  }
  lVar5 = FUN_14286b170(DAT_146b17150,0);
LAB_142877116:
  if (*(int *)(lVar5 + 0x1c0) == 0) {
    return 1;
  }
  puVar9 = &DAT_143f3eda8;
  if (*(int *)(lVar5 + 0x170) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = *(undefined2 **)(lVar5 + 0x168);
  }
  for (pwVar7 = &DAT_1451c9674;
      (wVar2 = *(wint_t *)((longlong)(puVar8 + -0xa28e4b3a) + (longlong)pwVar7), wVar2 != 0 ||
      (*pwVar7 != 0)); pwVar7 = pwVar7 + 1) {
    if (wVar2 != *pwVar7) {
      wVar2 = towlower(wVar2);
      wVar3 = towlower(*pwVar7);
      if (wVar2 != wVar3) {
        if (wVar2 != wVar3) {
          puVar6 = (undefined8 *)FUN_1428bd910(lVar5 + 0x158,local_38,0);
          if (*(int *)(puVar6 + 1) != 0) {
            puVar9 = (undefined2 *)*puVar6;
          }
          FUN_14288d1c0(param_1,param_4,puVar9,0);
          if (local_38[0] != 0) {
            FMemory::Free();
          }
        }
        return 1;
      }
    }
  }
  return 1;
}



// FUNCTION 142877210 HandleServerTravelCommand body=1146 status=ok
// SIG undefined HandleServerTravelCommand(void)

undefined8
UEngine::HandleServerTravelCommand
          (undefined8 param_1,short *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  void *pvVar12;
  void *pvVar13;
  void **ppvVar14;
  undefined2 *puVar15;
  void *pvVar16;
  int iVar17;
  undefined4 uVar18;
  undefined2 *local_70;
  undefined8 local_68;
  void *local_60;
  void *local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  ulonglong local_38;
  
  uVar18 = 0;
  cVar6 = FUN_1428cfb70(param_4);
  if (cVar6 != '\0') {
    local_58 = (void *)0x0;
    local_60 = (void *)0x0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (param_2[lVar9] != 0);
      uVar7 = (int)lVar9 + 1;
      local_58 = (void *)(ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
      }
      FGenericPlatformString::Memcpy(local_60,param_2,(longlong)(int)uVar7 * 2);
    }
    local_70 = (undefined2 *)0x0;
    local_68 = 0;
    local_40 = (void *)0x0;
    local_38 = 0;
    local_50 = (void *)0x0;
    local_48 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
    pvVar16 = local_50;
    FGenericPlatformString::Memcpy(local_50,&DAT_1451c956c,4);
    cVar6 = FUN_1404e14f0(&local_60,&local_50,&local_70,&local_40,0,0,uVar18);
    if (pvVar16 != (void *)0x0) {
      FMemory::Free(pvVar16);
    }
    pvVar16 = local_60;
    if (cVar6 == '\0') {
      lVar9 = (longlong)(int)local_58;
      local_68 = CONCAT44(local_68._4_4_,(int)local_58);
      if (((int)local_58 == 0) && (local_68._4_4_ == 0)) {
        local_68 = (ulonglong)local_58 & 0xffffffff;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_70,(ulonglong)local_58 & 0xffffffff)
        ;
        ::_guard_xfg_dispatch_icall_nop(local_70,pvVar16,lVar9 * 2);
      }
    }
    cVar6 = MakeSureMapNameIsValid(param_1,&local_70);
    uVar5 = local_38;
    pvVar16 = local_40;
    puVar15 = local_70;
    if (cVar6 != '\0') {
      iVar8 = (int)local_38;
      lVar9 = (longlong)(int)local_38;
      if ((int)local_38 < 2) {
        lVar9 = (longlong)(int)local_68;
        local_40 = (void *)0x0;
        local_38 = CONCAT44(local_38._4_4_,(int)local_68);
        if ((int)local_68 == 0) {
          local_38 = local_68 & 0xffffffff;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_68 & 0xffffffff,0);
          ::_guard_xfg_dispatch_icall_nop(local_40,puVar15,lVar9 * 2);
        }
        ppvVar14 = &local_40;
        bVar3 = true;
        bVar2 = false;
        bVar1 = false;
        pvVar12 = local_40;
      }
      else {
        lVar11 = (longlong)(int)local_68;
        local_50 = (void *)0x0;
        local_48._0_4_ = (int)local_68;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_50,(2 - (uint)((int)local_68 != 0)) + (int)local_68,0);
        pvVar13 = local_50;
        ::_guard_xfg_dispatch_icall_nop(local_50,puVar15,lVar11 * 2);
        iVar17 = (int)local_48;
        lVar11 = (longlong)(int)local_48;
        local_48._0_4_ = (2 - (uint)((int)local_48 != 0)) + (int)local_48;
        if (local_48._4_4_ < (int)local_48) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,iVar17);
          pvVar13 = local_50;
        }
        pvVar12 = (void *)0x0;
        puVar15 = (undefined2 *)((longlong)pvVar13 + (lVar11 - (ulonglong)(iVar17 != 0)) * 2);
        *puVar15 = 0x3f;
        puVar15[1] = 0;
        if ((int)local_48 < 2) {
          local_50 = (void *)0x0;
          local_48 = CONCAT44(local_48._4_4_,iVar8);
          pvVar12 = pvVar13;
          if (iVar8 == 0) {
            local_48 = uVar5 & 0xffffffff;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,uVar5 & 0xffffffff,0);
            ::_guard_xfg_dispatch_icall_nop(local_50,pvVar16,lVar9 * 2);
          }
        }
        else {
          iVar17 = 0;
          if (iVar8 != 0) {
            iVar17 = iVar8 + -1;
          }
          if (((int)local_48 != 0) || (iVar8 = 1, iVar17 == 0)) {
            iVar8 = 0;
          }
          iVar10 = (int)local_48;
          local_50 = pvVar13;
          if (local_48._4_4_ < iVar8 + (int)local_48 + iVar17) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_50);
            iVar10 = (int)local_48;
          }
          if (iVar17 != 0) {
            local_48._0_4_ = iVar17 + (uint)(iVar10 == 0) + iVar10;
            if (local_48._4_4_ < (int)local_48) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,iVar10);
            }
            iVar4 = local_48._4_4_;
            iVar8 = (int)local_48;
            pvVar16 = local_50;
            pvVar13 = (void *)(((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2 +
                              (longlong)local_50);
            ::_guard_xfg_dispatch_icall_nop(pvVar13,local_40,(longlong)iVar17 * 2);
            *(undefined2 *)((longlong)pvVar13 + (longlong)iVar17 * 2) = 0;
            local_50 = pvVar16;
            local_48._4_4_ = iVar4;
            iVar10 = iVar8;
          }
          local_48 = CONCAT44(local_48._4_4_,iVar10);
          pvVar16 = local_40;
        }
        ppvVar14 = &local_50;
        bVar3 = false;
        bVar2 = true;
        bVar1 = true;
      }
      if (local_60 != (void *)0x0) {
        FMemory::Free();
      }
      local_60 = *ppvVar14;
      *ppvVar14 = (void *)0x0;
      local_58 = ppvVar14[1];
      ppvVar14[1] = (void *)0x0;
      if ((bVar1) && (local_50 != (void *)0x0)) {
        FMemory::Free();
      }
      if ((bVar2) && (pvVar12 != (void *)0x0)) {
        FMemory::Free(pvVar12);
      }
      if ((bVar3) && (local_40 != (void *)0x0)) {
        FMemory::Free();
      }
      FUN_1428d76e0(param_4,&local_60,0,0);
      if (pvVar16 != (void *)0x0) {
        FMemory::Free(pvVar16);
      }
      if (local_70 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_60 != (void *)0x0) {
        FMemory::Free();
      }
      return 1;
    }
    puVar15 = &DAT_143f3eda8;
    if ((int)local_68 != 0) {
      puVar15 = local_70;
    }
    FOutputDevice::LogfImpl
              (param_3,L"ERROR: The map \'%s\' is either short package name or does not exist.",
               puVar15);
    if (local_40 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_70 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return 0;
}



// FUNCTION 142877690 FUN_142877690 body=842 status=ok
// SIG undefined FUN_142877690(void)

undefined8 FUN_142877690(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined8 local_res8;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_98 [2];
  longlong local_88;
  undefined2 *local_70;
  int local_68;
  longlong local_60;
  longlong *local_50;
  int local_48;
  longlong local_40;
  int local_30;
  
  plVar4 = *(longlong **)(param_1 + 0xc18);
  plVar6 = plVar4 + *(int *)(param_1 + 0xc20);
  for (; plVar4 != plVar6; plVar4 = plVar4 + 1) {
    lVar5 = *plVar4;
    if (*(longlong *)(lVar5 + 0x288) == param_4) goto LAB_142877706;
  }
  lVar5 = FUN_14286b170(DAT_146b17150,0);
LAB_142877706:
  FUN_14289aca0(local_98,lVar5 + 0xe8,param_2,1);
  cVar2 = FUN_1428b2650(local_98);
  if (cVar2 == '\0') {
    FOutputDevice::LogfImpl(param_3,L"ERROR: Can only perform streaming load for local URLs.");
  }
  else {
    cVar2 = UEngine::MakeSureMapNameIsValid(param_1,&local_70);
    if ((cVar2 == '\0') || (local_30 == 0)) {
      puVar9 = &DAT_143f3eda8;
      if (local_68 != 0) {
        puVar9 = local_70;
      }
      FOutputDevice::LogfImpl(param_3,L"ERROR: The map \'%s\' does not exist.",puVar9);
    }
    else {
      plVar6 = (longlong *)UDynamicEntryBox::GetAllEntries(param_4);
      plVar4 = (longlong *)*plVar6;
      plVar6 = plVar4 + (int)plVar6[1];
      for (; plVar4 != plVar6; plVar4 = plVar4 + 1) {
        puVar9 = &DAT_143f3eda8;
        if (local_68 != 0) {
          puVar9 = local_70;
        }
        if (*(int *)(*plVar4 + 0x60) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = *(undefined2 **)(*plVar4 + 0x58);
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
        if (iVar3 == 0) {
          puVar9 = &DAT_143f3eda8;
          if (local_68 != 0) {
            puVar9 = local_70;
          }
          FOutputDevice::LogfImpl(param_3,L"ERROR: The map \'%s\' is already loaded.",puVar9);
          goto LAB_142877921;
        }
      }
      local_a0 = 1;
      local_a8 = (undefined8 *)0x0;
      puVar9 = &DAT_143f3eda8;
      if (local_68 != 0) {
        puVar9 = local_70;
      }
      FName::FName(&local_res8,puVar9,1);
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      puVar1 = local_a8;
      *local_a8 = local_res8;
      plVar4 = *(longlong **)(param_1 + 0xc18);
      plVar6 = plVar4 + *(int *)(param_1 + 0xc20);
      for (; plVar4 != plVar6; plVar4 = plVar4 + 1) {
        lVar5 = *plVar4;
        if (*(longlong *)(lVar5 + 0x288) == param_4) goto LAB_142877836;
      }
      lVar5 = FUN_14286b170(DAT_146b17150,0);
LAB_142877836:
      FUN_142884ee0(param_1,lVar5,&local_a8);
      *(uint *)(lVar5 + 0x210) = *(uint *)(lVar5 + 0x210) | 1;
      if (0 < *(int *)(lVar5 + 0x1e8)) {
        if (*(int *)(lVar5 + 0x1e8) != *(int *)(lVar5 + 0x1f8)) {
          FUN_1416f7d70(0xffffffff);
        }
        plVar4 = *(longlong **)(param_1 + 0xc18);
        plVar6 = plVar4 + *(int *)(param_1 + 0xc20);
        for (; plVar4 != plVar6; plVar4 = plVar4 + 1) {
          lVar7 = *plVar4;
          if (*(longlong *)(lVar7 + 0x288) == *(longlong *)(lVar5 + 0x288)) goto LAB_1428778b6;
        }
        lVar7 = FUN_14286b170(DAT_146b17150,0);
LAB_1428778b6:
        FUN_142868950(param_1,lVar7);
        *(uint *)(lVar5 + 0x210) = *(uint *)(lVar5 + 0x210) & 0xfffffffe;
      }
      if (puVar1 != (undefined8 *)0x0) {
        FMemory::Free(puVar1);
      }
    }
  }
LAB_142877921:
  plVar6 = local_50;
  if (local_40 != 0) {
    FMemory::Free();
    plVar6 = local_50;
  }
  for (; local_48 != 0; local_48 = local_48 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_50 != (longlong *)0x0) {
    FMemory::Free(local_50);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_70 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 1428779e0 FUN_1428779e0 body=369 status=ok
// SIG undefined FUN_1428779e0(void)

undefined8 FUN_1428779e0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong local_78 [2];
  longlong local_68;
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  longlong *local_30;
  int local_28;
  longlong local_20;
  
  plVar3 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar3 + *(int *)(param_1 + 0xc20);
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar4 = *plVar3;
    if (*(longlong *)(lVar4 + 0x288) == param_4) goto LAB_142877a46;
  }
  lVar4 = FUN_14286b170(DAT_146b17150,0);
LAB_142877a46:
  FUN_14289aca0(local_78,lVar4 + 0xe8,param_2,1);
  cVar2 = FUN_1428b2650(local_78);
  if ((cVar2 == '\0') || (cVar2 = UEngine::MakeSureMapNameIsValid(param_1,&local_50), cVar2 != '\0')
     ) {
    FUN_14288d1c0(param_1,param_4,param_2,1);
  }
  else {
    puVar5 = &DAT_143f3eda8;
    if (local_48 != 0) {
      puVar5 = local_50;
    }
    FOutputDevice::LogfImpl(param_3,L"ERROR: The map \'%s\' does not exist.",puVar5);
  }
  plVar1 = local_30;
  if (local_20 != 0) {
    FMemory::Free();
    plVar1 = local_30;
  }
  for (; local_28 != 0; local_28 = local_28 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_30 != (longlong *)0x0) {
    FMemory::Free(local_30);
  }
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_50 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142877b60 HandleTravelFailure body=71 status=ok
// SIG undefined HandleTravelFailure(void)

void UEngine::HandleTravelFailure(longlong *param_1,longlong param_2)

{
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x4e8))();
    (**(code **)(*param_1 + 0x488))(param_1,param_2,0);
    FUN_1428678f0(param_2,*(undefined8 *)(param_2 + 0x38));
  }
  return;
}



// FUNCTION 142877bf0 HeapPush body=420 status=ok
// SIG undefined HeapPush(void)

int TArray<FTimerData,FDefaultAllocator>::HeapPush(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  int iVar24;
  
  iVar24 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar24 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar24 + 1) {
    TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_1,iVar24);
  }
  FUN_1428610d0((longlong)iVar24 * 0x90 + *param_1,param_2);
  lVar1 = *param_1;
  iVar24 = (int)param_1[1] + -1;
  if (0 < iVar24) {
    do {
      iVar21 = (iVar24 + -1) / 2;
      puVar23 = (undefined8 *)((longlong)iVar24 * 0x90 + lVar1);
      puVar22 = (undefined8 *)((longlong)iVar21 * 0x90 + lVar1);
      if ((double)puVar22[1] < (double)puVar23[1] || (double)puVar22[1] == (double)puVar23[1]) {
        return iVar24;
      }
      if (puVar23 != puVar22) {
        uVar2 = puVar22[1];
        uVar3 = *puVar23;
        uVar4 = puVar23[1];
        uVar5 = puVar23[2];
        uVar6 = puVar23[3];
        uVar7 = puVar23[4];
        uVar8 = puVar23[5];
        uVar9 = puVar23[6];
        uVar10 = puVar23[7];
        uVar11 = puVar23[8];
        uVar12 = puVar23[9];
        uVar13 = puVar23[10];
        uVar14 = puVar23[0xb];
        uVar15 = puVar23[0xc];
        uVar16 = puVar23[0xd];
        uVar17 = puVar23[0xe];
        uVar18 = puVar23[0xf];
        uVar19 = puVar23[0x10];
        uVar20 = puVar23[0x11];
        *puVar23 = *puVar22;
        puVar23[1] = uVar2;
        uVar2 = puVar22[3];
        puVar23[2] = puVar22[2];
        puVar23[3] = uVar2;
        uVar2 = puVar22[5];
        puVar23[4] = puVar22[4];
        puVar23[5] = uVar2;
        uVar2 = puVar22[7];
        puVar23[6] = puVar22[6];
        puVar23[7] = uVar2;
        uVar2 = puVar22[9];
        puVar23[8] = puVar22[8];
        puVar23[9] = uVar2;
        uVar2 = puVar22[0xb];
        puVar23[10] = puVar22[10];
        puVar23[0xb] = uVar2;
        uVar2 = puVar22[0xd];
        puVar23[0xc] = puVar22[0xc];
        puVar23[0xd] = uVar2;
        uVar2 = puVar22[0xf];
        puVar23[0xe] = puVar22[0xe];
        puVar23[0xf] = uVar2;
        uVar2 = puVar22[0x11];
        puVar23[0x10] = puVar22[0x10];
        puVar23[0x11] = uVar2;
        *puVar22 = uVar3;
        puVar22[1] = uVar4;
        puVar22[2] = uVar5;
        puVar22[3] = uVar6;
        puVar22[4] = uVar7;
        puVar22[5] = uVar8;
        puVar22[6] = uVar9;
        puVar22[7] = uVar10;
        puVar22[8] = uVar11;
        puVar22[9] = uVar12;
        puVar22[10] = uVar13;
        puVar22[0xb] = uVar14;
        puVar22[0xc] = uVar15;
        puVar22[0xd] = uVar16;
        puVar22[0xe] = uVar17;
        puVar22[0xf] = uVar18;
        puVar22[0x10] = uVar19;
        puVar22[0x11] = uVar20;
      }
      iVar24 = iVar21;
    } while (0 < iVar21);
    return iVar21;
  }
  return iVar24;
}



// FUNCTION 142877da0 FUN_142877da0 body=3120 status=ok
// SIG undefined FUN_142877da0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142877da0(longlong *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  char cVar3;
  undefined4 uVar4;
  DWORD DVar5;
  longlong *plVar6;
  int *piVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  DWORD *pDVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  int *piVar17;
  ulonglong uVar18;
  undefined2 *puVar19;
  int iVar20;
  undefined1 auStack_4a8 [32];
  int local_488;
  undefined4 local_480;
  undefined4 local_478;
  undefined4 local_468;
  ulonglong local_460;
  ulonglong local_458;
  LARGE_INTEGER local_450;
  LARGE_INTEGER local_448;
  void *local_440;
  int local_438;
  undefined4 local_434;
  void *local_430;
  int local_428;
  undefined4 local_424;
  undefined8 local_420;
  undefined4 local_418;
  undefined4 uStack_414;
  void *local_410;
  ulonglong local_408;
  undefined2 *local_400;
  int local_3f8;
  undefined2 *local_3f0;
  int local_3e8;
  undefined2 *local_3e0;
  int local_3d8;
  undefined2 *local_3d0;
  int local_3c8;
  undefined2 *local_3c0;
  int local_3b8;
  undefined2 *local_3b0;
  int local_3a8;
  undefined1 local_3a0 [8];
  longlong *local_398;
  undefined1 local_388;
  undefined8 local_380;
  undefined4 local_378;
  longlong *local_370;
  undefined1 local_360 [8];
  longlong *local_358;
  undefined1 local_350 [8];
  longlong *local_348;
  undefined1 local_338 [8];
  longlong *local_330;
  undefined1 local_318 [72];
  undefined4 local_2d0;
  undefined2 local_2cb;
  undefined1 local_2c4;
  longlong *local_268;
  int local_260;
  undefined1 local_258 [24];
  undefined1 local_240;
  undefined1 local_238 [32];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [432];
  ulonglong local_48;
  
  pvVar2 = DAT_146b17548;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4a8;
  piVar17 = (int *)0x0;
  local_430 = (void *)0x0;
  iVar20 = (int)DAT_146b17550;
  local_428 = iVar20;
  if (iVar20 == 0) {
    local_424 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_430,DAT_146b17550 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_430,pvVar2,(longlong)iVar20 * 2);
  }
  local_468 = (undefined4)param_1[0x19];
  uStack_414 = *(undefined4 *)((longlong)param_1 + 0xcc);
  local_460 = CONCAT44(local_460._4_4_,uStack_414);
  local_418 = local_468;
  plVar6 = (longlong *)operator_new(0x158);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar13 = (longlong *)param_1[10];
    FUN_142861640(plVar6,plVar13);
    plVar6[0x2a] = 0;
    *plVar6 = (longlong)&PTR_FUN_1451dd7d0;
    plVar6[2] = (longlong)&PTR_LAB_1451dd970;
    piVar7 = piVar17;
    if (plVar13 != (longlong *)0x0) {
      piVar7 = (int *)(**(code **)(*plVar13 + 0x30))(plVar13);
    }
    lVar8 = operator_new(0x1b0);
    if (lVar8 == 0) {
      plVar6[0x2a] = 0;
      _DAT_00000078 = 0;
    }
    else {
      local_488 = DAT_1464c9c14;
      if (piVar7 != (int *)0x0) {
        local_488 = piVar7[0x70];
      }
      local_478 = 0x3f800000;
      local_480 = 0;
      lVar8 = FUN_142899f20(lVar8,plVar6,0,piVar7);
      plVar6[0x2a] = lVar8;
      *(undefined4 *)(lVar8 + 0x78) = 0;
    }
  }
  iVar20 = DAT_1468c2188;
  if (DAT_1468c2188 == 0) {
    iVar20 = (int)param_1[0x19];
  }
  *(int *)(plVar6 + 0x19) = iVar20;
  iVar20 = DAT_1468c218c;
  if (DAT_1468c218c == 0) {
    iVar20 = *(int *)((longlong)param_1 + 0xcc);
  }
  *(int *)((longlong)plVar6 + 0xcc) = iVar20;
  FUN_141edf270(plVar6 + 2);
  (**(code **)(*(longlong *)param_1[10] + 0x38))();
  puVar9 = (undefined4 *)(**(code **)(*(longlong *)param_1[10] + 0x38))();
  local_420 = CONCAT44(local_420._4_4_,*puVar9);
  FUN_1424f49c0();
  (**(code **)(*(longlong *)param_1[10] + 0x38))();
  puVar10 = (uint *)(**(code **)(*(longlong *)param_1[10] + 0x38))();
  uVar18 = (ulonglong)_tls_index;
  *puVar10 = *puVar10 & 0xffefffff;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8);
  if ((*(int *)(lVar8 + 0x38) < DAT_146b18250) &&
     (_Init_thread_header(&DAT_146b18250), DAT_146b18250 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b18248 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SceneColorFormat");
    _Init_thread_footer(&DAT_146b18250);
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_146b18260) &&
     (_Init_thread_header(&DAT_146b18260), DAT_146b18260 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b18258 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.PostProcessingColorFormat");
    _Init_thread_footer(&DAT_146b18260);
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_146b18270) &&
     (_Init_thread_header(&DAT_146b18270), DAT_146b18270 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b18268 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ForceLOD");
    _Init_thread_footer(&DAT_146b18270);
  }
  local_450.s.LowPart = (**(code **)(*DAT_146b18248 + 0x68))();
  local_448.s.LowPart = (**(code **)(*DAT_146b18258 + 0x68))();
  if (DAT_146b18268 == (longlong *)0x0) {
    local_458 = CONCAT44(local_458._4_4_,0xffffffff);
  }
  else {
    uVar4 = (**(code **)(*DAT_146b18268 + 0x68))();
    local_458 = CONCAT44(local_458._4_4_,uVar4);
  }
  lVar11 = FUN_1424f49c0();
  plVar13 = DAT_146b18248;
  if (*(char *)(lVar11 + 0x42) != '\0') {
    FString::PrintfImpl(&local_400,&DAT_143f3edc0,5);
    puVar19 = &DAT_143f3eda8;
    if (local_3f8 != 0) {
      puVar19 = local_400;
    }
    (**(code **)(*plVar13 + 0x60))(plVar13,puVar19,0x8000000);
    if (local_400 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    plVar13 = DAT_146b18258;
    FString::PrintfImpl(&local_3f0,&DAT_143f3edc0,1);
    puVar19 = &DAT_143f3eda8;
    if (local_3e8 != 0) {
      puVar19 = local_3f0;
    }
    (**(code **)(*plVar13 + 0x60))(plVar13,puVar19,0x8000000);
    if (local_3f0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  plVar13 = DAT_146b18268;
  if (DAT_146b18268 != (longlong *)0x0) {
    FString::PrintfImpl(&local_3e0,&DAT_143f3edc0,0);
    puVar19 = &DAT_143f3eda8;
    if (local_3d8 != 0) {
      puVar19 = local_3e0;
    }
    (**(code **)(*plVar13 + 0x60))(plVar13,puVar19,0x8000000);
    if (local_3e0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_146b18280) &&
     (_Init_thread_header(&DAT_146b18280), DAT_146b18280 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar13 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HighResScreenshotDelay");
    if (plVar13 != (longlong *)0x0) {
      piVar17 = (int *)(**(code **)(*plVar13 + 0x38))(plVar13);
    }
    DAT_146b18278 = piVar17;
    _Init_thread_footer(&DAT_146b18280);
  }
  if (DAT_146b18278 == (int *)0x0) {
    iVar20 = 4;
  }
  else {
    iVar20 = 1;
    if (0 < *DAT_146b18278) {
      iVar20 = *DAT_146b18278;
    }
    if (iVar20 == 0) goto LAB_1428781dc;
  }
  do {
    (**(code **)(*plVar6 + 0x130))(plVar6,0);
    plVar13 = (longlong *)param_1[10];
    lVar8 = (**(code **)(*plVar13 + 0x30))(plVar13);
    uVar12 = (**(code **)(*plVar13 + 0x30))(plVar13);
    local_478 = 0x3f800000;
    local_480 = 0;
    local_488 = *(int *)(lVar8 + 0x1c0);
    FUN_142899f20(local_1f8,plVar6,0,uVar12);
    (**(code **)(*(longlong *)param_1[10] + 0x20))((longlong *)param_1[10],plVar6);
    FUN_1428aa700(local_1f8,0);
    uVar12 = (**(code **)(*plVar6 + 0x118))(plVar6);
    FUN_1428aa700(uVar12);
    FUN_141ee24f0(0);
    FUN_14289d030(local_1f8);
    iVar20 = iVar20 + -1;
  } while (iVar20 != 0);
LAB_1428781dc:
  (**(code **)(*(longlong *)param_1[10] + 0x38))();
  puVar10 = (uint *)(**(code **)(*(longlong *)param_1[10] + 0x38))();
  *puVar10 = *puVar10 ^ (*puVar10 ^ (uint)local_420) & 0x100000;
  (**(code **)(*(longlong *)param_1[10] + 0x28))((longlong *)param_1[10],plVar6);
  plVar13 = DAT_146b18248;
  FString::PrintfImpl(&local_3d0,&DAT_143f3edc0,local_450.s.LowPart);
  puVar19 = &DAT_143f3eda8;
  if (local_3c8 != 0) {
    puVar19 = local_3d0;
  }
  (**(code **)(*plVar13 + 0x60))(plVar13,puVar19,0x8000000);
  if (local_3d0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  plVar13 = DAT_146b18258;
  FString::PrintfImpl(&local_3c0,&DAT_143f3edc0,local_448.s.LowPart);
  puVar19 = &DAT_143f3eda8;
  if (local_3b8 != 0) {
    puVar19 = local_3c0;
  }
  (**(code **)(*plVar13 + 0x60))(plVar13,puVar19,0x8000000);
  if (local_3c0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  plVar13 = DAT_146b18268;
  if (DAT_146b18268 != (longlong *)0x0) {
    FString::PrintfImpl(&local_3b0,&DAT_143f3edc0,local_458 & 0xffffffff);
    puVar19 = &DAT_143f3eda8;
    if (local_3a8 != 0) {
      puVar19 = local_3b0;
    }
    (**(code **)(*plVar13 + 0x60))(plVar13,puVar19,0x8000000);
    if (local_3b0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
    uVar12 = FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_450);
    (**(code **)(*plVar6 + 0x140))(plVar6,uVar12,0,0);
    plVar13 = (longlong *)GetRendererModule();
    (**(code **)(*plVar13 + 0x80))(plVar13,local_468,local_460 & 0xffffffff);
    QueryPerformanceCounter(&local_448);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_448.s.LowPart - local_450._0_4_);
  }
  else {
    pDVar14 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar13 = TlsGetValue(*pDVar14);
    if (plVar13 == (longlong *)0x0) {
      plVar13 = (longlong *)operator_new(0x18);
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)0x0;
      }
      else {
        *plVar13 = 0;
        plVar13[1] = 0;
        *(undefined4 *)(plVar13 + 2) = 0;
      }
      TlsSetValue(*pDVar14,plVar13);
    }
    plVar15 = (longlong *)plVar13[1];
    if (plVar15 == (longlong *)0x0) {
      plVar15 = (longlong *)*plVar13;
      if (plVar15 == (longlong *)0x0) {
        plVar15 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar14 + 2);
        plVar13[1] = (longlong)plVar15;
        if (plVar15 == (longlong *)0x0) {
          puVar16 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar13[1] = (longlong)puVar16;
          lVar8 = 0x1f;
          do {
            puVar1 = puVar16 + 0x20;
            *puVar16 = puVar1;
            lVar8 = lVar8 + -1;
            puVar16 = puVar1;
          } while (lVar8 != 0);
          *puVar1 = 0;
          plVar15 = (longlong *)plVar13[1];
        }
        iVar20 = 0x20;
        *(undefined4 *)(plVar13 + 2) = 0x20;
      }
      else {
        iVar20 = 0x20;
        plVar13[1] = (longlong)plVar15;
        *(undefined4 *)(plVar13 + 2) = 0x20;
        *plVar13 = 0;
      }
    }
    else {
      iVar20 = (int)plVar13[2];
    }
    plVar13[1] = *plVar15;
    *(int *)(plVar13 + 2) = iVar20 + -1;
    *plVar15 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar15 + 1) = 0xff;
    local_420 = 0;
    local_458 = 0;
    *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
    *plVar15 = (longlong)&PTR_FUN_1451df128;
    *(undefined1 *)(plVar15 + 4) = 0;
    plVar15[5] = 0;
    plVar15[3] = CONCAT44(uStack_414,local_418);
    plVar15[2] = (longlong)plVar6;
    uVar18 = plVar15[5];
    piVar17 = (int *)(uVar18 + 0x48);
    if (uVar18 != 0) {
      LOCK();
      *piVar17 = *piVar17 + 1;
      UNLOCK();
    }
    local_460 = uVar18;
    FUN_1409421c0(plVar15,0,0xff,1);
    if (uVar18 != 0) {
      LOCK();
      iVar20 = *piVar17;
      *piVar17 = *piVar17 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        FGraphEvent::Recycle(local_460);
      }
    }
  }
  FUN_141edf360(plVar6 + 2);
  FUN_141ee24f0(0);
  (**(code **)*plVar6)(plVar6,1);
  DAT_1468c2184 = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  cVar3 = (**(code **)(*param_1 + 0xf0))(param_1);
  if ((cVar3 == '\0') && (DAT_1468c21d9 == '\0')) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_350,L"High resolution screenshot saved as",L"UnrealClient",
               L"HighResScreenshotSavedAs");
    FNotificationInfo::FNotificationInfo(local_318,local_350);
    local_2d0 = 0x40a00000;
    local_2c4 = 1;
    local_2cb = 0;
    FPaths::ConvertRelativePathToFull(&local_410,&local_430);
    pvVar2 = local_410;
    local_440 = (void *)0x0;
    iVar20 = (int)local_408;
    local_438 = iVar20;
    if (iVar20 == 0) {
      local_434 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_440,local_408 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_440,pvVar2,(longlong)iVar20 * 2);
    }
    plVar6 = (longlong *)FString::FString(local_218,&local_440);
    plVar13 = (longlong *)FMemory::Realloc(0,0x30);
    local_370 = plVar13;
    if (plVar13 != (longlong *)0x0) {
      uVar12 = FString::FString(local_208,plVar6);
      FUN_14285f370(plVar13,<lambda_9dd1cfb0aec94089e805a2682917e7d9>::<lambda_invoker_cdecl>,uVar12
                   );
    }
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    if (local_440 != (void *)0x0) {
      FMemory::Free();
    }
    if (plVar13 == (longlong *)0x0) {
      if ((local_260 != 0) && (local_268 != (longlong *)0x0)) {
        (**(code **)(*local_268 + 0x28))(local_268,0);
        if (local_268 != (longlong *)0x0) {
          local_268 = (longlong *)FMemory::Realloc(local_268,0,0);
        }
        local_260 = 0;
      }
    }
    else {
      (**(code **)(*plVar13 + 0x30))(plVar13,&local_268);
    }
    if (plVar13 != (longlong *)0x0) {
      (**(code **)(*plVar13 + 0x28))(plVar13,0);
      local_370 = (longlong *)FMemory::Realloc(plVar13,0,0);
      if (local_370 != (longlong *)0x0) {
        FMemory::Free(local_370);
      }
    }
    uVar12 = FText::FromString(local_338,&local_410);
    FText::FText(local_3a0,uVar12);
    local_388 = 1;
    local_380 = 0;
    local_378 = 0;
    FText::operator=(local_258,local_3a0);
    local_240 = local_388;
    TBaseDelegate<FSlateBrush_const_*>::operator=(local_238,&local_380);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_380);
    if (local_398 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_398 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_398)(local_398);
        LOCK();
        piVar17 = (int *)((longlong)local_398 + 0xc);
        iVar20 = *piVar17;
        *piVar17 = *piVar17 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_398 + 8))(local_398,1);
        }
      }
    }
    if (local_330 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_330 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_330)(local_330);
        LOCK();
        piVar17 = (int *)((longlong)local_330 + 0xc);
        iVar20 = *piVar17;
        *piVar17 = *piVar17 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_330 + 8))(local_330,1);
        }
      }
    }
    uVar12 = FUN_1418fca90();
    FUN_1418d8b50(uVar12,local_360,local_318);
    if (local_358 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_358 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_358)(local_358);
        LOCK();
        piVar17 = (int *)((longlong)local_358 + 0xc);
        iVar20 = *piVar17;
        *piVar17 = *piVar17 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_358 + 8))(local_358,1);
        }
      }
    }
    if (local_410 != (void *)0x0) {
      FMemory::Free();
    }
    FUN_1408bc4f0(local_318);
    if (local_348 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_348 + 1;
      lVar8 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_348)(local_348);
        LOCK();
        piVar17 = (int *)((longlong)local_348 + 0xc);
        iVar20 = *piVar17;
        *piVar17 = *piVar17 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*local_348 + 8))(local_348,1);
        }
      }
    }
  }
  if (local_430 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428789d0 FUN_1428789d0 body=341 status=ok
// SIG undefined FUN_1428789d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428789d0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  uint local_98;
  undefined8 *local_90;
  longlong local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  local_78 = 1;
  local_38 = DAT_1464c9cb0;
  local_80 = (undefined8 *)(param_1 + 0x40);
  local_48 = _DAT_1464c9ca0;
  uStack_44 = uRam00000001464c9ca4;
  uStack_40 = uRam00000001464c9ca8;
  uStack_3c = uRam00000001464c9cac;
  local_88 = param_1 + 0x10;
  local_90 = &local_58;
  local_98 = local_98 & 0xffffff00;
  local_a0 = 1;
  local_a8 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_1404a2100(param_2,param_3,2,1);
  local_80 = &local_58;
  local_a8 = *(undefined4 *)(param_1 + 0x2c);
  local_88 = CONCAT44(local_88._4_4_,0x40000);
  local_90 = (undefined8 *)CONCAT44(local_90._4_4_,1);
  uStack_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  local_38 = uRam00000001468b5d84;
  local_48 = 1;
  local_58 = 0;
  uStack_50 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_98 = 1;
  local_a0 = CONCAT31(local_a0._1_3_,2);
  (**(code **)(*DAT_146ab6358 + 0x5e0))
            (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x28));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x48,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  return;
}



// FUNCTION 142878b30 FUN_142878b30 body=6736 status=ok
// SIG undefined FUN_142878b30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142878b30(longlong *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  code *pcVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined2 *puVar15;
  uint uVar16;
  longlong lVar17;
  undefined2 *puVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  code *pcVar22;
  undefined1 auStack_718 [32];
  undefined8 *local_6f8;
  undefined8 local_6f0;
  undefined1 local_6e8;
  undefined1 local_6d8;
  char local_6d7 [15];
  code *local_6c8;
  code *pcStack_6c0;
  undefined8 local_6b8;
  int iStack_6b0;
  undefined4 uStack_6ac;
  undefined8 local_6a8;
  undefined2 *local_6a0;
  int local_698;
  int local_694;
  longlong *local_690;
  int local_688;
  longlong local_680;
  ulonglong local_678;
  longlong local_670 [23];
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  code *local_568;
  code *pcStack_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined1 local_4f8 [8];
  undefined1 local_4f0 [8];
  undefined1 local_4e8 [8];
  undefined1 local_4e0 [8];
  undefined1 local_4d8 [8];
  undefined1 local_4d0 [8];
  undefined1 local_4c8 [8];
  longlong local_4c0 [2];
  undefined8 local_4b0;
  undefined1 local_4a8 [16];
  undefined8 local_498;
  undefined1 local_490 [24];
  code *local_478;
  ulonglong uStack_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined1 local_458;
  undefined8 local_450;
  undefined1 local_448 [16];
  undefined8 local_438;
  undefined1 local_430 [24];
  code *local_418;
  ulonglong uStack_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined1 local_3f8;
  undefined8 local_3f0;
  undefined1 local_3e8 [16];
  undefined8 local_3d8;
  undefined1 local_3d0 [24];
  code *local_3b8;
  ulonglong uStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined1 local_398;
  undefined8 local_390;
  undefined1 local_388 [16];
  undefined8 local_378;
  undefined1 local_370 [24];
  code *local_358;
  ulonglong uStack_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined1 local_338;
  undefined8 local_330;
  undefined1 local_328 [16];
  undefined8 local_318;
  undefined1 local_310 [24];
  code *local_2f8;
  ulonglong uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined1 local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8 [16];
  undefined8 local_2b8;
  undefined1 local_2b0 [24];
  code *local_298;
  ulonglong uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined1 local_278;
  undefined8 local_270;
  undefined1 local_268 [16];
  undefined8 local_258;
  undefined1 local_250 [24];
  code *local_238;
  ulonglong uStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 local_218;
  undefined8 local_210;
  undefined1 local_208 [16];
  undefined8 local_1f8;
  undefined1 local_1f0 [24];
  code *local_1d8;
  ulonglong uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined1 local_190 [24];
  code *local_178;
  ulonglong uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158;
  undefined8 local_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined1 local_130 [24];
  code *local_118;
  ulonglong uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined1 local_d0 [24];
  code *local_b8;
  ulonglong uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  longlong *local_90;
  short local_78 [32];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_718;
  param_1[0xf5] = param_2;
  _dynamic_initializer_for__ModuleRegistrantAudioCapture__();
  uVar7 = UTexture2D::GetPrivateStaticClass();
  FUN_1417485b0(uVar7);
  (**(code **)(*param_1 + 0x3d0))(param_1);
  iVar21 = *(int *)((longlong)param_1 + 0xc);
  pcVar22 = (code *)0x0;
  pcVar13 = pcVar22;
  if (iVar21 < (int)DAT_1469e91c4) {
    uVar16 = iVar21 >> 0x1f & 0xffff;
    uVar5 = iVar21 + uVar16;
    pcVar13 = (code *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                      (longlong)(int)((uVar5 & 0xffff) - uVar16) * 0x18);
  }
  *(uint *)(pcVar13 + 8) = *(uint *)(pcVar13 + 8) | 0x40000000;
  plVar8 = (longlong *)FUN_14178e3a0();
  plVar9 = (longlong *)FMemory::Realloc(0,0x20);
  local_90 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar9[1] = (longlong)UEngine::PreGarbageCollect;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar9[3] = lVar10;
    *plVar9 = (longlong)&PTR_GetPoolName_143f3f090;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
    (**(code **)(*plVar9 + 0x20))(plVar9,local_4e8);
    iVar21 = (int)plVar8[1];
    *(int *)(plVar8 + 1) = iVar21 + 1;
    if (*(int *)((longlong)plVar8 + 0xc) < iVar21 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar21);
    }
    puVar11 = (undefined8 *)((longlong)iVar21 * 0x10 + *plVar8);
    *puVar11 = plVar9;
    *(undefined4 *)(puVar11 + 1) = 2;
  }
  (**(code **)(*param_1 + 0x3a8))(param_1);
  (**(code **)(*param_1 + 0x3b0))(param_1);
  iVar21 = 0;
  if ((DAT_1468c2172 != '\0') && (DAT_1468c217e == '\0')) {
    FWindowsPlatformMisc::GetEnvironmentVariable(L"UE-DisallowScreenSaverInhibitor",local_78,0x20);
    local_678 = 0;
    local_680 = 0;
    if (local_78[0] != 0) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (local_78[lVar10] != 0);
      uVar5 = (int)lVar10 + 1;
      local_678 = (ulonglong)uVar5;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_680,0);
      }
      FGenericPlatformString::Memcpy(local_680,local_78,(longlong)(int)uVar5 * 2);
    }
    cVar4 = FString::ToBool(&local_680);
    if (local_680 != 0) {
      FMemory::Free();
    }
    if ((cVar4 == '\0') && (cVar4 = FUN_1415bac00(), cVar4 != '\0')) {
      if (param_1[0x178] == 0) {
        pcVar12 = (code *)operator_new(0x10);
        pcVar13 = pcVar22;
        if (pcVar12 != (code *)0x0) {
          pcVar12[8] = (code)0x1;
          *(undefined ***)pcVar12 = &PTR_IsPromotedBuild_1451df1f8;
          pcVar13 = pcVar12;
        }
        param_1[0x179] = (longlong)pcVar13;
        local_6f8 = (undefined8 *)0xffffffffffffffff;
        plVar8 = (longlong *)FUN_1415d42a0(pcVar13,L"ScreenSaverInhibitor",0x4000,0);
        param_1[0x178] = (longlong)plVar8;
        (**(code **)(*plVar8 + 0x10))(plVar8,1);
      }
      else {
        iVar21 = *(int *)((longlong)param_1 + 0x964);
      }
      *(int *)((longlong)param_1 + 0x964) = iVar21 + 1;
      if (iVar21 + 1 == 1) {
        (**(code **)(*(longlong *)param_1[0x178] + 0x10))((longlong *)param_1[0x178],0);
      }
    }
  }
  plVar8 = DAT_1469f4590;
  if (DAT_1468b616c == '\0') {
    pcVar12 = (code *)operator_new(8);
    pcVar13 = pcVar22;
    if (pcVar12 != (code *)0x0) {
      *(undefined ***)pcVar12 = &PTR_FUN_1451df180;
      pcVar13 = pcVar12;
    }
    local_568 = pcVar13;
    pcVar12 = (code *)operator_new(0x18);
    pcStack_560 = pcVar22;
    if (pcVar12 != (code *)0x0) {
      *(undefined4 *)(pcVar12 + 8) = 1;
      *(undefined ***)pcVar12 = &PTR_FUN_144146c40;
      *(undefined4 *)(pcVar12 + 0xc) = 1;
      *(code **)(pcVar12 + 0x10) = pcVar13;
      pcStack_560 = pcVar12;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_568,pcVar13,pcVar13);
    local_6c8 = local_568;
    pcStack_6c0 = pcStack_560;
    if (pcStack_560 != (code *)0x0) {
      LOCK();
      *(int *)(pcStack_560 + 8) = *(int *)(pcStack_560 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar8 + 0x178))(plVar8,&local_6c8);
    pcVar13 = pcStack_6c0;
    if (pcStack_6c0 != (code *)0x0) {
      LOCK();
      pcVar12 = pcStack_6c0 + 8;
      iVar21 = *(int *)pcVar12;
      *(int *)pcVar12 = *(int *)pcVar12 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        (*(code *)**(undefined8 **)pcStack_6c0)(pcStack_6c0);
        LOCK();
        pcVar12 = pcVar13 + 0xc;
        iVar21 = *(int *)pcVar12;
        *(int *)pcVar12 = *(int *)pcVar12 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (**(code **)(*(longlong *)pcVar13 + 8))(pcVar13,1);
        }
      }
    }
    pcVar13 = pcStack_560;
    if (pcStack_560 != (code *)0x0) {
      LOCK();
      pcVar12 = pcStack_560 + 8;
      iVar21 = *(int *)pcVar12;
      *(int *)pcVar12 = *(int *)pcVar12 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        (*(code *)**(undefined8 **)pcStack_560)(pcStack_560);
        LOCK();
        pcVar12 = pcVar13 + 0xc;
        iVar21 = *(int *)pcVar12;
        *(int *)pcVar12 = *(int *)pcVar12 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (**(code **)(*(longlong *)pcVar13 + 8))(pcVar13,1);
        }
      }
    }
  }
  pcVar13 = (code *)operator_new(8);
  DAT_1468e28f8 = pcVar22;
  if (pcVar13 != (code *)0x0) {
    *(undefined ***)pcVar13 = &PTR_FUN_1451df1d8;
    DAT_1468e28f8 = pcVar13;
  }
  lVar10 = FUN_14292cb70();
  local_548 = *(undefined8 *)(lVar10 + 0x18);
  FName::ToString(&local_548,&local_6b8);
  puVar15 = &DAT_143f3eda8;
  if (iStack_6b0 != 0) {
    puVar15 = (undefined2 *)local_6b8;
  }
  lVar10 = FUN_14292cb70();
  uVar7 = *(undefined8 *)(lVar10 + 0x20);
  uVar14 = FUN_14171bfe0();
  local_6e8 = 1;
  local_6f0 = 0;
  local_6f8 = (undefined8 *)CONCAT44(local_6f8._4_4_,0x2002);
  FUN_141799c90(uVar14,uVar7,puVar15,0);
  if (local_6b8 != (code *)0x0) {
    FMemory::Free();
  }
  local_6f8 = (undefined8 *)0x0;
  FUN_14175be70(param_1,0,0,0);
  local_6a8 = (undefined2 *)((ulonglong)local_6a8._4_4_ << 0x20);
  if (DAT_1468b6148 != 0) {
    local_6f8 = &DAT_1468e2360;
    FConfigCacheIni::GetInt(DAT_1468b6148,L"ProcessLimits",L"VirtualMemoryLimitInKB",&local_6a8);
  }
  uVar7 = FCommandLine::Get();
  FParse::Value(uVar7,L"virtmemkb=",&local_6a8);
  *(undefined1 *)((longlong)param_1 + 0x954) = 0;
  *(undefined8 *)((longlong)param_1 + 0x914) = *(undefined8 *)((longlong)param_1 + 0x904);
  *(undefined8 *)((longlong)param_1 + 0x91c) = *(undefined8 *)((longlong)param_1 + 0x90c);
  *(undefined8 *)((longlong)param_1 + 0x924) = *(undefined8 *)((longlong)param_1 + 0x904);
  *(undefined8 *)((longlong)param_1 + 0x92c) = *(undefined8 *)((longlong)param_1 + 0x90c);
  (**(code **)(*param_1 + 0x3c0))(param_1);
  if (DAT_1468b6148 != 0) {
    local_6d7[0] = '\x01';
    local_6f8 = &DAT_1468e2360;
    FConfigCacheIni::GetBool
              (DAT_1468b6148,L"/Script/Engine.Engine",L"bEnableOnScreenDebugMessages",local_6d7);
    local_6f8 = &DAT_1468e2360;
    uVar5 = (uint)(local_6d7[0] != '\0') | *(uint *)(param_1 + 299) & 0xfffffffe;
    *(uint *)(param_1 + 299) = (uVar5 * 2 ^ uVar5) & 2 ^ uVar5;
    FConfigCacheIni::GetBool
              (DAT_1468b6148,L"DevOptions.Debug",L"ShowSelectedLightmap",&DAT_146b1716f);
  }
  FBlueprintCoreDelegates::SetScriptMaximumLoopIterations(*(undefined4 *)(DAT_146b17150 + 0x7dc));
  DAT_1464aaa4c = *(undefined4 *)((longlong)param_1 + 0x7d4);
  UTextRenderComponent::InitializeMIDCache();
  FUN_142752d90(&DAT_146b09420);
  (**(code **)(*param_1 + 0x3a0))(param_1);
  plVar8 = (longlong *)UGeneralProjectSettings::GetPrivateStaticClass();
  lVar10 = plVar8[0x1f];
  if (lVar10 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar10 = plVar8[0x1f];
  }
  if (*(int *)(lVar10 + 0xc0) == 0) {
    puVar15 = &DAT_143f3eda8;
  }
  else {
    puVar15 = *(undefined2 **)(lVar10 + 0xb8);
  }
  FNetworkVersion::SetProjectVersion(puVar15);
  lVar10 = FUN_14164b110();
  if (lVar10 != 0) {
    plVar8 = (longlong *)GetDerivedDataCacheRef();
    (**(code **)(*plVar8 + 0x68))(plVar8);
  }
  puVar11 = (undefined8 *)FPaths::ProjectLogDir(local_4c0);
  local_6a8 = (undefined2 *)*puVar11;
  iVar21 = *(int *)(puVar11 + 1);
  *puVar11 = 0;
  local_698 = *(int *)(puVar11 + 1);
  local_694 = *(int *)((longlong)puVar11 + 0xc);
  puVar11[1] = 0;
  iVar19 = local_698;
  local_6a0 = local_6a8;
  if (local_694 < (int)((0xf - (uint)(iVar21 != 0)) + local_698)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_6a0);
    iVar19 = local_698;
  }
  local_698 = (0xf - (uint)(iVar19 != 0)) + iVar19;
  if (local_694 < local_698) {
    local_6a8 = local_6a0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_6a0,iVar19);
  }
  iVar21 = local_698;
  puVar15 = local_6a0;
  lVar10 = (longlong)iVar19 - (ulonglong)(iVar19 != 0);
  pwVar1 = local_6a0 + lVar10;
  pwVar1[0] = L'C';
  pwVar1[1] = L'r';
  pwVar1[2] = L'a';
  pwVar1[3] = L's';
  pwVar1[4] = L'h';
  pwVar1[5] = L'V';
  pwVar1[6] = L'i';
  pwVar1[7] = L'd';
  *(undefined8 *)(local_6a0 + lVar10 + 8) = 0x61002e006f0065;
  *(undefined4 *)(local_6a0 + lVar10 + 0xc) = 0x690076;
  local_6a0[lVar10 + 0xe] = 0;
  local_6a8 = local_6a0;
  if (local_4c0[0] != 0) {
    FMemory::Free();
  }
  plVar8 = (longlong *)FUN_1415c3d50();
  local_6f8 = (undefined8 *)((ulonglong)local_6f8 & 0xffffffffffffff00);
  puVar18 = &DAT_143f3eda8;
  if (iVar21 != 0) {
    puVar18 = puVar15;
  }
  (**(code **)(*plVar8 + 0x30))(plVar8,puVar18,0,0);
  pcStack_6c0 = (code *)((ulonglong)pcStack_6c0 & 0xffffffff00000000);
  local_6c8 = (code *)&LAB_142863a24;
  plVar8 = param_1 + 0x13a;
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_1443190e0;
    FWeakObjectPtr::operator=(plVar9 + 1,param_1);
    plVar9[2] = (longlong)local_6c8;
    plVar9[3] = (longlong)pcStack_6c0;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar10;
    *plVar9 = (longlong)&PTR_FUN_144319128;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
    (**(code **)(*plVar9 + 0x20))(plVar9,local_4f0);
    iVar21 = (int)param_1[0x13b];
    *(int *)(param_1 + 0x13b) = iVar21 + 1;
    if (*(int *)((longlong)param_1 + 0x9dc) < iVar21 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar21);
    }
    puVar11 = (undefined8 *)((longlong)iVar21 * 0x10 + *plVar8);
    *puVar11 = plVar9;
    *(undefined4 *)(puVar11 + 1) = 3;
  }
  pcStack_6c0 = (code *)((ulonglong)pcStack_6c0 & 0xffffffff00000000);
  local_6c8 = (code *)&LAB_14099be78;
  plVar8 = param_1 + 0x13d;
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_143f77f28;
    FWeakObjectPtr::operator=(plVar9 + 1,param_1);
    plVar9[2] = (longlong)local_6c8;
    plVar9[3] = (longlong)pcStack_6c0;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar10;
    *plVar9 = (longlong)&PTR_FUN_143f77f70;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
    (**(code **)(*plVar9 + 0x20))(plVar9,local_4f8);
    iVar21 = (int)param_1[0x13e];
    *(int *)(param_1 + 0x13e) = iVar21 + 1;
    if (*(int *)((longlong)param_1 + 0x9f4) < iVar21 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar21);
    }
    puVar11 = (undefined8 *)((longlong)iVar21 * 0x10 + *plVar8);
    *puVar11 = plVar9;
    *(undefined4 *)(puVar11 + 1) = 3;
  }
  pcStack_6c0 = (code *)((ulonglong)pcStack_6c0 & 0xffffffff00000000);
  local_6c8 = (code *)&LAB_1422bf1b8;
  plVar8 = param_1 + 0x140;
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_144318c20;
    FWeakObjectPtr::operator=(plVar9 + 1,param_1);
    plVar9[2] = (longlong)local_6c8;
    plVar9[3] = (longlong)pcStack_6c0;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar10;
    *plVar9 = (longlong)&PTR_FUN_144318c68;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
    (**(code **)(*plVar9 + 0x20))(plVar9,local_4c8);
    iVar21 = (int)param_1[0x141];
    *(int *)(param_1 + 0x141) = iVar21 + 1;
    if (*(int *)((longlong)param_1 + 0xa0c) < iVar21 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar21);
    }
    puVar11 = (undefined8 *)((longlong)iVar21 * 0x10 + *plVar8);
    *puVar11 = plVar9;
    *(undefined4 *)(puVar11 + 1) = 3;
  }
  local_690 = (longlong *)0x0;
  local_688 = 0;
  local_6c8 = (code *)&LAB_142883c10;
  pcStack_6c0 = (code *)((ulonglong)pcStack_6c0 & 0xffffffff00000000);
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar8 == (longlong *)0x0) {
    if (((local_688 != 0) && (local_690 != (longlong *)0x0)) &&
       ((**(code **)(*local_690 + 0x28))(local_690,0), local_690 != (longlong *)0x0)) {
      local_690 = (longlong *)FMemory::Realloc(local_690,0,0);
    }
  }
  else {
    *plVar8 = (longlong)&PTR_FUN_143fcff50;
    FWeakObjectPtr::operator=(plVar8 + 1,param_1);
    plVar8[2] = (longlong)local_6c8;
    plVar8[3] = (longlong)pcStack_6c0;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar8[5] = lVar10;
    *plVar8 = (longlong)&PTR_FUN_143fcff98;
    FUN_140596820(plVar8,&local_690);
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    lVar10 = FMemory::Realloc(plVar8,0,0);
    if (lVar10 != 0) {
      FMemory::Free(lVar10);
    }
  }
  plVar8 = (longlong *)UOnlineEngineInterface::Get();
  (**(code **)(*plVar8 + 0x380))(plVar8,&local_690);
  lVar6 = FTestAudioComponent::GetEmpty();
  FUN_1422f41c0();
  if (DAT_1468b616c == '\0') {
    plVar8 = param_1;
    (**(code **)(*param_1 + 0x3c8))();
    lVar6 = (long)plVar8;
  }
  AK::MemoryMgr::StartProfileThreadUsage(lVar6);
  puVar11 = (undefined8 *)FName::FName(local_4d0,L"StreamingPauseRendering",1);
  uVar7 = FUN_14168dc80();
  FUN_141690010(uVar7,*puVar11);
  puVar11 = (undefined8 *)FName::FName(local_4e0,L"MovieScene",1);
  uVar7 = FUN_14168dc80();
  FUN_141690010(uVar7,*puVar11);
  puVar11 = (undefined8 *)FName::FName(local_4d8,L"MovieSceneTracks",1);
  uVar7 = FUN_14168dc80();
  FUN_141690010(uVar7,*puVar11);
  if ((longlong *)param_1[0x58] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x58] + 0x418))();
  }
  local_6d8 = 1;
  if (DAT_1468b6148 != 0) {
    local_6f8 = &DAT_1468e2360;
    FConfigCacheIni::GetBool(DAT_1468b6148,L"DevOptions.Debug",L"bEngineStatsOnRHS",&local_6d8);
  }
  iStack_6b0 = 0;
  local_6b8 = FUN_1428931a0;
  pcStack_6c0 = (code *)((ulonglong)pcStack_6c0 & 0xffffffff00000000);
  local_6c8 = UEngine::RenderStatNamedEvents;
  FName::FName(&local_540,L"STATCAT_Engine",1);
  FName::FName(local_670 + 0x16,L"STAT_NamedEvents",1);
  uVar3 = local_6d8;
  uVar7 = FUN_1404b03b0();
  local_4b0 = local_670[0x16];
  FName::ToString(local_670 + 0x16,local_4a8);
  local_498 = local_540;
  FText::FText(local_490,uVar7);
  local_458 = uVar3;
  local_478 = local_6c8;
  uStack_470 = (ulonglong)pcStack_6c0;
  local_670[0] = 0;
  local_468 = (undefined4)local_6b8;
  uStack_464 = local_6b8._4_4_;
  uStack_460 = iStack_6b0;
  uStack_45c = uStack_6ac;
  local_670[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_670,0);
  FGenericPlatformString::Memcpy(local_670[0],L"STAT_",0xc);
  FString::RemoveFromStart(local_4a8,local_670,1);
  if (local_670[0] != 0) {
    FMemory::Free();
  }
  plVar8 = param_1 + 0x186;
  iVar21 = (int)param_1[0x187];
  *(int *)(param_1 + 0x187) = iVar21 + 1;
  if (*(int *)((longlong)param_1 + 0xc3c) < iVar21 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar8,iVar21);
  }
  UEngine::FEngineStatFuncs::FEngineStatFuncs((longlong)iVar21 * 0x60 + *plVar8,&local_4b0);
  FUN_142862000(&local_4b0);
  iStack_6b0 = 0;
  local_6b8 = UEngine::ToggleStatFPS;
  pcStack_6c0 = (code *)((ulonglong)pcStack_6c0 & 0xffffffff00000000);
  local_6c8 = FUN_1428885e0;
  FName::FName(&local_538,L"STATCAT_Engine",1);
  FName::FName(&local_5b8,L"STAT_FPS",1);
  uVar3 = local_6d8;
  uVar7 = FUN_1404b03b0();
  local_450 = local_5b8;
  FName::ToString(&local_5b8,local_448);
  local_438 = local_538;
  FText::FText(local_430,uVar7);
  local_3f8 = uVar3;
  local_418 = local_6c8;
  uStack_410 = (ulonglong)pcStack_6c0;
  local_670[6] = 0;
  local_408 = (undefined4)local_6b8;
  uStack_404 = local_6b8._4_4_;
  uStack_400 = iStack_6b0;
  uStack_3fc = uStack_6ac;
  local_670[7] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_670 + 6,0);
  FGenericPlatformString::Memcpy(local_670[6],L"STAT_",0xc);
  FString::RemoveFromStart(local_448,local_670 + 6,1);
  if (local_670[6] != 0) {
    FMemory::Free();
  }
  iVar21 = (int)param_1[0x187];
  *(int *)(param_1 + 0x187) = iVar21 + 1;
  if (*(int *)((longlong)param_1 + 0xc3c) < iVar21 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar8,iVar21);
  }
  UEngine::FEngineStatFuncs::FEngineStatFuncs((longlong)iVar21 * 0x60 + *plVar8,&local_450);
  FUN_142862000(&local_450);
  local_6b8 = (code *)0x0;
  local_6c8 = FUN_142889660;
  iStack_6b0 = 0;
  pcStack_6c0 = (code *)((ulonglong)pcStack_6c0 & 0xffffffff00000000);
  FName::FName(&local_530,L"STATCAT_Engine",1);
  FName::FName(&local_5b0,L"STAT_Summary",1);
  uVar3 = local_6d8;
  uVar7 = FUN_1404b03b0();
  local_3f0 = local_5b0;
  FName::ToString(&local_5b0,local_3e8);
  local_3d8 = local_530;
  FText::FText(local_3d0,uVar7);
  local_398 = uVar3;
  local_3b8 = local_6c8;
  uStack_3b0 = (ulonglong)pcStack_6c0;
  local_670[4] = 0;
  local_3a8 = (undefined4)local_6b8;
  uStack_3a4 = local_6b8._4_4_;
  uStack_3a0 = iStack_6b0;
  uStack_39c = uStack_6ac;
  local_670[5] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_670 + 4,0);
  FGenericPlatformString::Memcpy(local_670[4],L"STAT_",0xc);
  FString::RemoveFromStart(local_3e8,local_670 + 4,1);
  if (local_670[4] != 0) {
    FMemory::Free();
  }
  iVar21 = (int)param_1[0x187];
  *(int *)(param_1 + 0x187) = iVar21 + 1;
  if (*(int *)((longlong)param_1 + 0xc3c) < iVar21 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar8,iVar21);
  }
  UEngine::FEngineStatFuncs::FEngineStatFuncs((longlong)iVar21 * 0x60 + *plVar8,&local_3f0);
  FUN_142862000(&local_3f0);
  iStack_6b0 = 0;
  local_6b8 = UEngine::ToggleStatUnit;
  pcStack_6c0 = (code *)((ulonglong)pcStack_6c0 & 0xffffffff00000000);
  local_6c8 = UEngine::RenderStatUnit;
  FName::FName(&local_528,L"STATCAT_Engine",1);
  FName::FName(&local_5a8,L"STAT_Unit",1);
  uVar3 = local_6d8;
  uVar7 = FUN_1404b03b0();
  local_390 = local_5a8;
  FName::ToString(&local_5a8,local_388);
  local_378 = local_528;
  FText::FText(local_370,uVar7);
  local_338 = uVar3;
  local_358 = local_6c8;
  uStack_350 = (ulonglong)pcStack_6c0;
  local_670[8] = 0;
  local_348 = (undefined4)local_6b8;
  uStack_344 = local_6b8._4_4_;
  uStack_340 = iStack_6b0;
  uStack_33c = uStack_6ac;
  local_670[9] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_670 + 8,0);
  FGenericPlatformString::Memcpy(local_670[8],L"STAT_",0xc);
  FString::RemoveFromStart(local_388,local_670 + 8,1);
  if (local_670[8] != 0) {
    FMemory::Free();
  }
  iVar21 = (int)param_1[0x187];
  *(int *)(param_1 + 0x187) = iVar21 + 1;
  if (*(int *)((longlong)param_1 + 0xc3c) < iVar21 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar8,iVar21);
  }
  UEngine::FEngineStatFuncs::FEngineStatFuncs((longlong)iVar21 * 0x60 + *plVar8,&local_390);
  FUN_142862000(&local_390);
  iStack_6b0 = 0;
  local_6b8 = UEngine::ToggleStatHitches;
  pcStack_6c0 = (code *)((ulonglong)pcStack_6c0 & 0xffffffff00000000);
  local_6c8 = UEngine::RenderStatHitches;
  FName::FName(&local_520,L"STATCAT_Engine",1);
  FName::FName(&local_5a0,L"STAT_Hitches",1);
  uVar3 = local_6d8;
  uVar7 = FUN_1404b03b0();
  local_330 = local_5a0;
  FName::ToString(&local_5a0,local_328);
  local_318 = local_520;
  FText::FText(local_310,uVar7);
  local_2d8 = uVar3;
  local_2f8 = local_6c8;
  uStack_2f0 = (ulonglong)pcStack_6c0;
  local_670[2] = 0;
  local_2e8 = (undefined4)local_6b8;
  uStack_2e4 = local_6b8._4_4_;
  uStack_2e0 = iStack_6b0;
  uStack_2dc = uStack_6ac;
  local_670[3] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_670 + 2,0);
  FGenericPlatformString::Memcpy(local_670[2],L"STAT_",0xc);
  FString::RemoveFromStart(local_328,local_670 + 2,1);
  if (local_670[2] != 0) {
    FMemory::Free();
  }
  iVar21 = (int)param_1[0x187];
  *(int *)(param_1 + 0x187) = iVar21 + 1;
  if (*(int *)((longlong)param_1 + 0xc3c) < iVar21 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar8,iVar21);
  }
  UEngine::FEngineStatFuncs::FEngineStatFuncs((longlong)iVar21 * 0x60 + *plVar8,&local_330);
  FUN_142862000(&local_330);
  local_6b8 = (code *)0x0;
  local_6c8 = FUN_142887a30;
  iStack_6b0 = 0;
  pcStack_6c0 = (code *)((ulonglong)pcStack_6c0 & 0xffffffff00000000);
  FName::FName(&local_518,L"STATCAT_Engine",1);
  FName::FName(&local_598,L"STAT_AI",1);
  uVar3 = local_6d8;
  uVar7 = FUN_1404b03b0();
  local_2d0 = local_598;
  FName::ToString(&local_598,local_2c8);
  local_2b8 = local_518;
  FText::FText(local_2b0,uVar7);
  local_278 = uVar3;
  local_298 = local_6c8;
  uStack_290 = (ulonglong)pcStack_6c0;
  local_670[10] = 0;
  local_288 = (undefined4)local_6b8;
  uStack_284 = local_6b8._4_4_;
  uStack_280 = iStack_6b0;
  uStack_27c = uStack_6ac;
  local_670[0xb] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_670 + 10,0);
  FGenericPlatformString::Memcpy(local_670[10],L"STAT_",0xc);
  FString::RemoveFromStart(local_2c8,local_670 + 10,1);
  if (local_670[10] != 0) {
    FMemory::Free();
  }
  iVar21 = (int)param_1[0x187];
  *(int *)(param_1 + 0x187) = iVar21 + 1;
  if (*(int *)((longlong)param_1 + 0xc3c) < iVar21 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar8,iVar21);
  }
  UEngine::FEngineStatFuncs::FEngineStatFuncs((longlong)iVar21 * 0x60 + *plVar8,&local_2d0);
  FUN_142862000(&local_2d0);
  local_6b8 = (code *)0x0;
  local_6c8 = FUN_142889780;
  iStack_6b0 = 0;
  pcStack_6c0 = (code *)((ulonglong)pcStack_6c0 & 0xffffffff00000000);
  FName::FName(&local_510,L"STATCAT_Engine",1);
  FName::FName(&local_590,L"STAT_Timecode",1);
  uVar3 = local_6d8;
  uVar7 = FUN_1404b03b0();
  local_270 = local_590;
  FName::ToString(&local_590,local_268);
  local_258 = local_510;
  FText::FText(local_250,uVar7);
  local_218 = uVar3;
  local_238 = local_6c8;
  uStack_230 = (ulonglong)pcStack_6c0;
  local_670[0xc] = 0;
  local_228 = (undefined4)local_6b8;
  uStack_224 = local_6b8._4_4_;
  uStack_220 = iStack_6b0;
  uStack_21c = uStack_6ac;
  local_670[0xd] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_670 + 0xc,0);
  FGenericPlatformString::Memcpy(local_670[0xc],L"STAT_",0xc);
  FString::RemoveFromStart(local_268,local_670 + 0xc,1);
  if (local_670[0xc] != 0) {
    FMemory::Free();
  }
  iVar21 = (int)param_1[0x187];
  *(int *)(param_1 + 0x187) = iVar21 + 1;
  if (*(int *)((longlong)param_1 + 0xc3c) < iVar21 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar8,iVar21);
  }
  UEngine::FEngineStatFuncs::FEngineStatFuncs((longlong)iVar21 * 0x60 + *plVar8,&local_270);
  FUN_142862000(&local_270);
  local_6b8 = (code *)0x0;
  local_6c8 = FUN_142888030;
  iStack_6b0 = 0;
  pcStack_6c0 = (code *)((ulonglong)pcStack_6c0 & 0xffffffff00000000);
  FName::FName(&local_508,L"STATCAT_Engine",1);
  FName::FName(&local_588,L"STAT_DNCTime",1);
  uVar3 = local_6d8;
  uVar7 = FUN_1404b03b0();
  local_210 = local_588;
  FName::ToString(&local_588,local_208);
  local_1f8 = local_508;
  FText::FText(local_1f0,uVar7);
  local_1b8 = uVar3;
  local_1d8 = local_6c8;
  uStack_1d0 = (ulonglong)pcStack_6c0;
  local_670[0xe] = 0;
  local_1c8 = (undefined4)local_6b8;
  uStack_1c4 = local_6b8._4_4_;
  uStack_1c0 = iStack_6b0;
  uStack_1bc = uStack_6ac;
  local_670[0xf] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_670 + 0xe,0);
  FGenericPlatformString::Memcpy(local_670[0xe],L"STAT_",0xc);
  FString::RemoveFromStart(local_208,local_670 + 0xe,1);
  if (local_670[0xe] != 0) {
    FMemory::Free();
  }
  iVar21 = (int)param_1[0x187];
  *(int *)(param_1 + 0x187) = iVar21 + 1;
  if (*(int *)((longlong)param_1 + 0xc3c) < iVar21 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar8,iVar21);
  }
  UEngine::FEngineStatFuncs::FEngineStatFuncs((longlong)iVar21 * 0x60 + *plVar8,&local_210);
  FUN_142862000(&local_210);
  local_6b8 = (code *)0x0;
  local_6c8 = UEngine::RenderStatColorList;
  iStack_6b0 = 0;
  pcStack_6c0 = (code *)((ulonglong)pcStack_6c0 & 0xffffffff00000000);
  FName::FName(&local_500,L"STATCAT_Engine",1);
  FName::FName(&local_580,L"STAT_ColorList",1);
  uVar7 = FUN_1404b03b0();
  local_1b0 = local_580;
  FName::ToString(&local_580,local_1a8);
  local_198 = local_500;
  FText::FText(local_190,uVar7);
  local_158 = 0;
  local_178 = local_6c8;
  uStack_170 = (ulonglong)pcStack_6c0;
  local_670[0x10] = 0;
  local_168 = (undefined4)local_6b8;
  uStack_164 = local_6b8._4_4_;
  uStack_160 = iStack_6b0;
  uStack_15c = uStack_6ac;
  local_670[0x11] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_670 + 0x10,0);
  FGenericPlatformString::Memcpy(local_670[0x10],L"STAT_",0xc);
  FString::RemoveFromStart(local_1a8,local_670 + 0x10,1);
  if (local_670[0x10] != 0) {
    FMemory::Free();
  }
  iVar21 = (int)param_1[0x187];
  *(int *)(param_1 + 0x187) = iVar21 + 1;
  if (*(int *)((longlong)param_1 + 0xc3c) < iVar21 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar8,iVar21);
  }
  UEngine::FEngineStatFuncs::FEngineStatFuncs((longlong)iVar21 * 0x60 + *plVar8,&local_1b0);
  FUN_142862000(&local_1b0);
  local_6b8 = (code *)0x0;
  local_6c8 = FUN_142888d00;
  iStack_6b0 = 0;
  pcStack_6c0 = (code *)((ulonglong)pcStack_6c0 & 0xffffffff00000000);
  FName::FName(&local_550,L"STATCAT_Engine",1);
  FName::FName(&local_578,L"STAT_Levels",1);
  uVar7 = FUN_1404b03b0();
  local_150 = local_578;
  FName::ToString(&local_578,local_148);
  local_138 = local_550;
  FText::FText(local_130,uVar7);
  local_f8 = 0;
  local_118 = local_6c8;
  uStack_110 = (ulonglong)pcStack_6c0;
  local_670[0x12] = 0;
  local_108 = (undefined4)local_6b8;
  uStack_104 = local_6b8._4_4_;
  uStack_100 = iStack_6b0;
  uStack_fc = uStack_6ac;
  local_670[0x13] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_670 + 0x12,0);
  FGenericPlatformString::Memcpy(local_670[0x12],L"STAT_",0xc);
  FString::RemoveFromStart(local_148,local_670 + 0x12,1);
  if (local_670[0x12] != 0) {
    FMemory::Free();
  }
  iVar21 = (int)param_1[0x187];
  *(int *)(param_1 + 0x187) = iVar21 + 1;
  if (*(int *)((longlong)param_1 + 0xc3c) < iVar21 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar8,iVar21);
  }
  UEngine::FEngineStatFuncs::FEngineStatFuncs((longlong)iVar21 * 0x60 + *plVar8,&local_150);
  FUN_142862000(&local_150);
  iStack_6b0 = 0;
  local_6b8 = FUN_142892bb0;
  local_6c8 = (code *)0x0;
  pcStack_6c0 = (code *)((ulonglong)pcStack_6c0 & 0xffffffff00000000);
  FName::FName(&local_558,L"STATCAT_Engine",1);
  FName::FName(&local_570,L"STAT_Detailed",1);
  uVar7 = FUN_1404b03b0();
  local_f0 = local_570;
  FName::ToString(&local_570,local_e8);
  local_d8 = local_558;
  FText::FText(local_d0,uVar7);
  local_98 = 0;
  local_b8 = local_6c8;
  uStack_b0 = (ulonglong)pcStack_6c0;
  local_670[0x14] = 0;
  local_a8 = (undefined4)local_6b8;
  uStack_a4 = local_6b8._4_4_;
  uStack_a0 = iStack_6b0;
  uStack_9c = uStack_6ac;
  local_670[0x15] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_670 + 0x14,0);
  FGenericPlatformString::Memcpy(local_670[0x14],L"STAT_",0xc);
  FString::RemoveFromStart(local_e8,local_670 + 0x14,1);
  if (local_670[0x14] != 0) {
    FMemory::Free();
  }
  iVar21 = (int)param_1[0x187];
  *(int *)(param_1 + 0x187) = iVar21 + 1;
  if (*(int *)((longlong)param_1 + 0xc3c) < iVar21 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar8,iVar21);
  }
  UEngine::FEngineStatFuncs::FEngineStatFuncs((longlong)iVar21 * 0x60 + *plVar8,&local_f0);
  FUN_142862000(&local_f0);
  if (0 < (int)param_1[0x187]) {
    do {
      bVar2 = false;
      lVar10 = (longlong)(int)pcVar22 * 0x60 + *plVar8;
      _DAT_1465351ec = _DAT_1465351ec + 1;
      lVar20 = (longlong)(DAT_1465351e0 + -1);
      if (-1 < DAT_1465351e0 + -1) {
        lVar17 = lVar20 << 4;
        bVar2 = false;
        do {
          if (((*(int *)(DAT_1465351d8 + 8 + lVar17) == 0) ||
              (plVar9 = *(longlong **)(DAT_1465351d8 + lVar17), plVar9 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar9 + 0x40))(plVar9,lVar10,lVar10 + 0x18,lVar10 + 0x20),
             cVar4 == '\0')) {
            bVar2 = true;
          }
          lVar17 = lVar17 + -0x10;
          lVar20 = lVar20 + -1;
        } while (-1 < lVar20);
      }
      _DAT_1465351ec = _DAT_1465351ec + -1;
      if (bVar2) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465351d8,0);
      }
      uVar5 = (int)pcVar22 + 1;
      pcVar22 = (code *)(ulonglong)uVar5;
      puVar15 = local_6a8;
    } while ((int)uVar5 < (int)param_1[0x187]);
  }
  uVar7 = FCommandLine::Get();
  cVar4 = FParse::Param(uVar7,L"statnamedevents");
  if (cVar4 != '\0') {
    DAT_1468c21d4 = 1;
  }
  (**(code **)(*param_1 + 0x3b8))(param_1);
  plVar8 = param_1 + 0x224;
  iVar21 = (int)param_1[0x225];
  *(int *)(param_1 + 0x225) = iVar21 + 1;
  if (*(int *)((longlong)param_1 + 0x112c) < iVar21 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar21);
  }
  puVar11 = (undefined8 *)((longlong)iVar21 * 0x10 + *plVar8);
  *puVar11 = 0;
  puVar11[1] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar11,0);
  FGenericPlatformString::Memcpy(*puVar11,&DAT_1451ccbe0,8);
  iVar21 = (int)param_1[0x225];
  *(int *)(param_1 + 0x225) = iVar21 + 1;
  if (*(int *)((longlong)param_1 + 0x112c) < iVar21 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar21);
  }
  puVar11 = (undefined8 *)((longlong)iVar21 * 0x10 + *plVar8);
  *puVar11 = 0;
  puVar11[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar11,0);
  FGenericPlatformString::Memcpy(*puVar11,L"Unit",10);
  iVar21 = (int)param_1[0x225];
  *(int *)(param_1 + 0x225) = iVar21 + 1;
  if (*(int *)((longlong)param_1 + 0x112c) < iVar21 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar21);
  }
  puVar11 = (undefined8 *)((longlong)iVar21 * 0x10 + *plVar8);
  *puVar11 = 0;
  puVar11[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar11,0);
  FGenericPlatformString::Memcpy(*puVar11,L"UnitMax",0x10);
  FUN_1428940e0(param_1);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_690);
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free(puVar15);
  }
  return;
}



// FUNCTION 14287a580 FUN_14287a580 body=23 status=ok
// SIG undefined FUN_14287a580(void)

void FUN_14287a580(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00014287a590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))();
  return;
}



// FUNCTION 14287a5c0 FUN_14287a5c0 body=93 status=ok
// SIG undefined FUN_14287a5c0(void)

void FUN_14287a5c0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                  byte param_5)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc4) = param_3;
  *(undefined1 *)((longlong)param_1 + 0xe2) = param_4;
  *(byte *)((longlong)param_1 + 0xda) = *(byte *)((longlong)param_1 + 0xda) & 0xfe;
  *(byte *)((longlong)param_1 + 0xda) = *(byte *)((longlong)param_1 + 0xda) | param_5;
  uVar1 = *(uint *)(param_1 + 0x18);
  if (0x10000 < uVar1) {
    uVar1 = 1;
  }
  *(uint *)(param_1 + 0x18) = uVar1;
  uVar1 = *(uint *)((longlong)param_1 + 0xc4);
  if (0x10000 < uVar1) {
    uVar1 = 1;
  }
  *(uint *)((longlong)param_1 + 0xc4) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00014287a616. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))();
  return;
}



// FUNCTION 14287a620 FUN_14287a620 body=190 status=ok
// SIG undefined FUN_14287a620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14287a620(longlong param_1)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 *local_90;
  longlong local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_78 = 1;
  local_88 = param_1 + -8;
  local_68[0] = 0;
  local_80 = local_68;
  local_58 = 0;
  uStack_50 = 0;
  local_90 = &local_58;
  local_98 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_a0 = 1;
  local_a8 = 0;
  local_48 = 1;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  FUN_1404a2100(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),0x12,1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  return;
}



// FUNCTION 14287a6e0 FUN_14287a6e0 body=633 status=ok
// SIG undefined FUN_14287a6e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14287a6e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  float fVar9;
  undefined1 auStack_108 [32];
  uint local_e8;
  undefined4 local_e0;
  byte local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined1 local_a8;
  char local_a7;
  char local_a6;
  undefined1 local_a5;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_88 [8];
  undefined4 local_80;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined1 local_44;
  wchar_t *local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  cVar8 = '\0';
  if ((0 < *(int *)(param_1 + 0xc4)) && (0 < *(int *)(param_1 + 200))) {
    fVar9 = (float)(**(code **)(*(longlong *)(param_1 + 0x68) + 0x28))(param_1 + 0x68);
    lVar2 = *(longlong *)(param_1 + 0xa0);
    local_b8 = 1;
    uVar6 = 0;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
    local_80 = 1;
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    if (0.0001 <= ABS(fVar9 - 1.0)) {
      uVar6 = 0x10;
    }
    local_c8 = param_1 + 0x70;
    uVar6 = (*(byte *)(lVar2 + 0xe0) & 2) << 0x17 | uVar6;
    uStack_74._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_7c._0_4_ = (undefined4)uVar4;
    uStack_7c._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_74._0_4_ = (undefined4)uVar3;
    local_48 = uStack_74._4_4_;
    local_40 = L"TextureRenderTarget2DResource";
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 1;
    uStack_54 = (undefined4)uStack_7c;
    uStack_50 = uStack_7c._4_4_;
    uStack_4c = (undefined4)uStack_74;
    local_d8 = *(byte *)(lVar2 + 0xbc) & 1;
    local_d0 = &local_68;
    local_e8 = uVar6 | 0x1000;
    if ((*(byte *)(lVar2 + 0xe0) & 4) == 0) {
      local_e8 = uVar6;
    }
    local_e0 = 1;
    local_c0 = (undefined8 *)(param_1 + 0xa8);
    uStack_7c = uVar4;
    uStack_74 = uVar3;
    FUN_1404a2100(*(undefined4 *)(lVar2 + 0xc0),*(undefined4 *)(lVar2 + 0xc4),
                  *(undefined1 *)(param_1 + 0xc0),*(undefined4 *)(lVar2 + 0xe4));
    TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,*(undefined8 *)(param_1 + 0xa8));
    FUN_141ed8ff0(&DAT_146ab6e78,*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x98),
                  *(undefined8 *)(param_1 + 0x30));
    FDeferredUpdateResource::AddToDeferredUpdateList(param_1 + 0x78,1);
  }
  lVar2 = *(longlong *)(param_1 + 0xa0);
  cVar7 = cVar8;
  if (*(char *)(lVar2 + 0xd9) != '\0') {
    cVar7 = (*(char *)(lVar2 + 0xd9) != '\x01') + '\x01';
  }
  if (*(char *)(lVar2 + 0xd8) != '\0') {
    cVar8 = (*(char *)(lVar2 + 0xd8) != '\x01') + '\x01';
  }
  uVar4 = FUN_14240d6a0(0);
  AAIController::GetPerceptionComponent(uVar4);
  lVar5 = FArchive::operator<<();
  cVar1 = *(char *)(lVar2 + 0x49);
  if (cVar1 == '\0') {
    local_a8 = 0;
  }
  else if (cVar1 == '\x01') {
    local_a8 = 1;
  }
  else if (cVar1 == '\x02') {
    local_a8 = 2;
  }
  else {
    local_a8 = *(undefined1 *)
                (*(longlong *)(lVar5 + 0x28) + 0x18 + (ulonglong)*(byte *)(lVar2 + 0x4a) * 0x50);
  }
  local_9c = 0x7f7fffff;
  local_a5 = 0;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a7 = cVar8;
  local_a6 = cVar7;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_88,&local_a8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_88);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_88);
  return;
}



// FUNCTION 14287a960 FUN_14287a960 body=825 status=ok
// SIG undefined FUN_14287a960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14287a960(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined8 *local_c0;
  undefined1 local_b8 [8];
  undefined4 local_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined1 local_98;
  undefined2 local_97;
  undefined1 local_95;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar6 = *(longlong *)(param_1 + 0xa0);
  if (0 < *(int *)(lVar6 + 0xc0)) {
    fVar8 = (float)(**(code **)(*(longlong *)(param_1 + 0x68) + 0x28))(param_1 + 0x68);
    lVar6 = *(longlong *)(param_1 + 0xa0);
    local_b0 = 1;
    uVar4 = *(undefined8 *)(lVar6 + 0xc4);
    uVar1 = *(undefined8 *)(lVar6 + 0xcc);
    local_54 = 0;
    uStack_a4._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_58 = uStack_a4._4_4_;
    uStack_ac._0_4_ = (undefined4)uVar4;
    uStack_ac._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_a4._0_4_ = (undefined4)uVar1;
    local_50 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 1;
    uStack_64 = (undefined4)uStack_ac;
    uStack_60 = uStack_ac._4_4_;
    uStack_5c = (undefined4)uStack_a4;
    local_48 = 0;
    local_40 = 0;
    cVar2 = *(char *)(lVar6 + 0xd5);
    uStack_ac = uVar4;
    uStack_a4 = uVar1;
    if (cVar2 == '\0') {
      cVar2 = FUN_14046e310(*(undefined1 *)(lVar6 + 0xd4));
    }
    local_d8 = 9;
    if (0.0001 <= ABS(fVar8 - 1.0)) {
      local_d8 = 0x19;
    }
    local_d0 = &local_78;
    local_e0 = 1;
    local_e8 = CONCAT31(local_e8._1_3_,cVar2);
    (**(code **)(*DAT_146ab6358 + 0x660))
              (DAT_146ab6358,local_b8,&DAT_146ab6e78,*(undefined4 *)(lVar6 + 0xc0));
    puVar3 = (undefined8 *)TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xa8,local_b8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xb8,*puVar3);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_b8);
    uVar7 = 1;
    if (0.0001 <= ABS(fVar8 - 1.0)) {
      uVar7 = 0x11;
    }
    TRefCountPtr<FRHITexture>::operator=(param_1 + 0x30,*(undefined8 *)(param_1 + 0xa8));
    FUN_141ed8ff0(&DAT_146ab6e78,*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x98),
                  *(undefined8 *)(param_1 + 0x30));
    lVar6 = *(longlong *)(param_1 + 0xa0);
    local_b0 = 1;
    uVar4 = *(undefined8 *)(lVar6 + 0xc4);
    uVar1 = *(undefined8 *)(lVar6 + 0xcc);
    local_54 = 0;
    local_50 = 0;
    uStack_a4._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_58 = uStack_a4._4_4_;
    uStack_ac._0_4_ = (undefined4)uVar4;
    uStack_ac._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_a4._0_4_ = (undefined4)uVar1;
    local_48 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 1;
    uStack_64 = (undefined4)uStack_ac;
    uStack_60 = uStack_ac._4_4_;
    uStack_5c = (undefined4)uStack_a4;
    local_40 = 0;
    cVar2 = *(char *)(lVar6 + 0xd5);
    uStack_ac = uVar4;
    uStack_a4 = uVar1;
    if (cVar2 == '\0') {
      cVar2 = FUN_14046e310(*(undefined1 *)(lVar6 + 0xd4));
    }
    local_c0 = &local_78;
    local_e8 = *(undefined4 *)(lVar6 + 0xc0);
    local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,1);
    local_d8 = 1;
    local_e0 = CONCAT31(local_e0._1_3_,cVar2);
    local_c8 = uVar7;
    (**(code **)(*DAT_146ab6358 + 0x5e0))(DAT_146ab6358,local_b8,&DAT_146ab6e78);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xb0,local_b8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_b8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x70,*(undefined8 *)(param_1 + 0xb0));
    FDeferredUpdateResource::AddToDeferredUpdateList(param_1 + 0x78,1);
    lVar6 = *(longlong *)(param_1 + 0xa0);
  }
  uVar4 = FUN_14240d6a0(0);
  AAIController::GetPerceptionComponent(uVar4);
  lVar5 = FArchive::operator<<();
  cVar2 = *(char *)(lVar6 + 0x49);
  if (cVar2 == '\0') {
    local_98 = 0;
  }
  else if (cVar2 == '\x01') {
    local_98 = 1;
  }
  else if (cVar2 == '\x02') {
    local_98 = 2;
  }
  else {
    local_98 = *(undefined1 *)
                (*(longlong *)(lVar5 + 0x28) + 0x18 + (ulonglong)*(byte *)(lVar6 + 0x4a) * 0x50);
  }
  local_8c = 0x7f7fffff;
  local_97 = 0x101;
  local_95 = 1;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_b8,&local_98);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_b8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_b8);
  return;
}



// FUNCTION 14287aca0 FUN_14287aca0 body=375 status=ok
// SIG undefined FUN_14287aca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14287aca0(longlong param_1)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  uint local_98;
  undefined8 *local_90;
  longlong local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FUN_1428942a0(param_1 + -0x10);
  if ((*(byte *)(param_1 + 200) & 1) != 0) {
    local_88 = param_1 + 0x58;
    local_78 = 1;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0xbc);
    local_38 = DAT_1464c9cb0;
    local_80 = (undefined8 *)(param_1 + 0x88);
    local_90 = &local_58;
    local_98 = local_98 & 0xffffff00;
    local_a0 = 1;
    local_a8 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = _DAT_1464c9ca0;
    uStack_44 = uRam00000001464c9ca4;
    uStack_40 = uRam00000001464c9ca8;
    uStack_3c = uRam00000001464c9cac;
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    FUN_1404a2100(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),
                  CONCAT71((int7)((ulonglong)local_88 >> 8),2),1);
    local_80 = &local_58;
    local_a8 = *(undefined4 *)(param_1 + 0x74);
    local_88 = CONCAT44(local_88._4_4_,0x40000);
    local_90 = (undefined8 *)CONCAT44(local_90._4_4_,1);
    uStack_44 = _DAT_1468b5d78;
    uStack_40 = uRam00000001468b5d7c;
    uStack_3c = uRam00000001468b5d80;
    local_38 = uRam00000001468b5d84;
    local_48 = 1;
    local_58 = 0;
    uStack_50 = 0;
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_98 = 1;
    local_a0 = CONCAT31(local_a0._1_3_,2);
    (**(code **)(*DAT_146ab6358 + 0x5e0))
              (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x70));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x90,local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  }
  return;
}



// FUNCTION 14287ae20 FUN_14287ae20 body=192 status=ok
// SIG undefined FUN_14287ae20(void)

void FUN_14287ae20(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0xa8);
  if (*(undefined8 **)(param_1 + 0xa8) == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(param_1 + 0x30);
  }
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xe8);
  iVar1 = *(int *)(puVar4 + 7);
  iVar2 = iVar1 + 1;
  *(int *)(puVar4 + 7) = iVar2;
  if (*(int *)((longlong)puVar4 + 0x3c) < iVar2) {
    TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
    ::ResizeGrow(puVar4 + 5);
  }
  puVar3 = (undefined8 *)puVar4[6];
  if ((undefined8 *)puVar4[6] == (undefined8 *)0x0) {
    puVar3 = puVar4 + 5;
  }
  puVar3[iVar1] = 0x200000000;
  *(undefined4 *)(puVar4 + 9) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = 5;
  *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) & 0xffe40ff7;
  *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) | 0x40000;
  *puVar4 = &PTR_PTR_146534c80;
  return;
}



// FUNCTION 14287aee0 FUN_14287aee0 body=192 status=ok
// SIG undefined FUN_14287aee0(void)

void FUN_14287aee0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0xa8);
  if (*(undefined8 **)(param_1 + 0xa8) == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(param_1 + 0x30);
  }
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xe8);
  iVar1 = *(int *)(puVar4 + 7);
  iVar2 = iVar1 + 1;
  *(int *)(puVar4 + 7) = iVar2;
  if (*(int *)((longlong)puVar4 + 0x3c) < iVar2) {
    TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
    ::ResizeGrow(puVar4 + 5);
  }
  puVar3 = (undefined8 *)puVar4[6];
  if ((undefined8 *)puVar4[6] == (undefined8 *)0x0) {
    puVar3 = puVar4 + 5;
  }
  puVar3[iVar1] = 0x100000000;
  *(undefined4 *)(puVar4 + 9) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = 2;
  *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) & 0xffe40ff7;
  *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) | 0x40010;
  *puVar4 = &PTR_PTR_146534c80;
  return;
}



// FUNCTION 14287afa0 FUN_14287afa0 body=203 status=ok
// SIG undefined FUN_14287afa0(void)

void FUN_14287afa0(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  FUN_141edc760(local_res8,1);
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    plVar1 = (longlong *)(param_1 + -0x10);
    uVar4 = (**(code **)(*(longlong *)(param_1 + -0x10) + 0xf0))(plVar1);
    uVar2 = *(undefined4 *)(param_1 + 0xbc);
    uVar3 = *(undefined4 *)(param_1 + 0xb8);
    uVar5 = (**(code **)(*plVar1 + 0x40))(plVar1);
    (**(code **)(*DAT_146ab6358 + 0x3a8))(DAT_146ab6358,local_res10,uVar5,uVar3,uVar2,uVar4,0);
    TRefCountPtr<FRHIIndexBuffer>::operator=((longlong *)(param_1 + 0xa8),local_res10);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res10);
    FUN_1428942a0(plVar1);
  }
  FUN_141edd460(local_res8);
  return;
}



// FUNCTION 14287b070 FUN_14287b070 body=7566 status=ok
// SIG undefined FUN_14287b070(void)

/* WARNING: Removing unreachable block (ram,0x00014287cbac) */
/* WARNING: Removing unreachable block (ram,0x00014287cb22) */
/* WARNING: Removing unreachable block (ram,0x00014287c9c7) */
/* WARNING: Removing unreachable block (ram,0x00014287caeb) */
/* WARNING: Removing unreachable block (ram,0x00014287cafa) */
/* WARNING: Removing unreachable block (ram,0x00014287cb07) */
/* WARNING: Removing unreachable block (ram,0x00014287c9d4) */
/* WARNING: Removing unreachable block (ram,0x00014287c9fe) */
/* WARNING: Removing unreachable block (ram,0x00014287ca64) */
/* WARNING: Removing unreachable block (ram,0x00014287c9e2) */
/* WARNING: Removing unreachable block (ram,0x00014287cb91) */
/* WARNING: Removing unreachable block (ram,0x00014287ca80) */
/* WARNING: Removing unreachable block (ram,0x00014287ca9c) */
/* WARNING: Removing unreachable block (ram,0x00014287cbc8) */
/* WARNING: Removing unreachable block (ram,0x00014287cbd7) */
/* WARNING: Removing unreachable block (ram,0x00014287caa9) */

void FUN_14287b070(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  char param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  DWORD DVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined2 *puVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ushort uStackX_a;
  ushort local_268;
  ushort local_266;
  ushort local_264;
  ushort local_262;
  ushort local_260;
  ushort local_25e;
  ushort local_25c;
  ushort local_25a;
  ushort local_258;
  ushort local_256;
  ushort local_254;
  ushort uStack_23a;
  ushort uStack_22e;
  ushort uStack_222;
  int local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  longlong local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e0;
  undefined4 local_1d4;
  undefined4 local_1c8;
  undefined4 local_1bc;
  undefined4 local_1b0;
  undefined4 local_1a4;
  undefined4 local_198;
  undefined4 local_18c;
  undefined4 local_180;
  undefined1 local_178 [8];
  undefined4 local_170;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  
  FPositionVertexBuffer::Init(*(longlong *)(param_1 + 8) + 0xe8,(int)param_3[1] * 6,1);
  FStaticMeshVertexBuffer::Init(*(undefined8 *)(param_1 + 8),(int)param_3[1] * 6,1);
  lVar18 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar18 + 0x1f8) < 1) {
    iVar22 = *(int *)(lVar18 + 0x1f8);
    *(int *)(lVar18 + 0x1f8) = iVar22 + 1;
    if (*(int *)(lVar18 + 0x1fc) < iVar22 + 1) {
      FUN_14089e280(lVar18 + 0x140,iVar22);
    }
    lVar17 = *(longlong *)(lVar18 + 0x1f0);
    if (*(longlong *)(lVar18 + 0x1f0) == 0) {
      lVar17 = lVar18 + 0x140;
    }
    FUN_14271d780(lVar17 + (longlong)iVar22 * 0x58);
    lVar18 = *(longlong *)(param_1 + 8);
  }
  lVar17 = *(longlong *)(lVar18 + 0x1f0);
  if (*(longlong *)(lVar18 + 0x1f0) == 0) {
    lVar17 = lVar18 + 0x140;
  }
  lVar18 = (longlong)*(int *)(lVar18 + 0x1f8) * 0x58 + lVar17;
  for (; lVar17 != lVar18; lVar17 = lVar17 + 0x58) {
    FColorVertexBuffer::Init(lVar17,(int)param_3[1] * 6);
  }
  local_220 = 0;
  if (0 < (int)param_3[1]) {
    local_208 = 0;
    do {
      local_200 = *param_3;
      fVar24 = *(float *)(local_200 + local_208 * 0x28);
      fVar2 = *(float *)(local_200 + 4 + local_208 * 0x28);
      fVar27 = fVar24 + *(float *)(local_200 + 8 + local_208 * 0x28);
      fVar3 = *(float *)(local_200 + 0x10 + local_208 * 0x28);
      fVar28 = fVar2 + *(float *)(local_200 + 0xc + local_208 * 0x28);
      fVar4 = *(float *)(local_200 + 0x14 + local_208 * 0x28);
      fVar25 = *(float *)(local_200 + 0x18 + local_208 * 0x28);
      fVar26 = *(float *)(local_200 + 0x1c + local_208 * 0x28);
      lVar18 = *(longlong *)(param_1 + 8);
      lVar17 = *(longlong *)(lVar18 + 0x130);
      uVar8 = (ushort)((uint)fVar3 >> 0x10);
      uStack_23a = (ushort)((uint)fVar4 >> 0x10);
      if (param_5 == '\0') {
        fVar25 = fVar25 + fVar3;
        local_198 = 0;
        local_18c = 0;
        local_180 = 0;
        local_170 = 0;
        uStack_1f0 = 0;
        uStack_210 = uStack_210 & 0xffffffff00000000;
        uVar20 = *(int *)(lVar18 + 0x138) * local_220 * 6;
        *(ulonglong *)((ulonglong)uVar20 + lVar17) = CONCAT44(fVar2,fVar27);
        *(undefined4 *)((ulonglong)uVar20 + 8 + lVar17) = 0;
        uVar20 = local_220 * 6;
        uVar23 = (ulonglong)uVar20;
        lVar18 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x130);
        uVar10 = *(int *)(*(longlong *)(param_1 + 8) + 0x138) * (uVar20 + 1);
        *(ulonglong *)((ulonglong)uVar10 + lVar18) = CONCAT44(fVar2,fVar24);
        *(undefined4 *)((ulonglong)uVar10 + 8 + lVar18) = 0;
        lVar18 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x130);
        uVar10 = *(int *)(*(longlong *)(param_1 + 8) + 0x138) * (uVar20 + 2);
        *(ulonglong *)((ulonglong)uVar10 + lVar18) = CONCAT44(fVar28,fVar27);
        *(undefined4 *)((ulonglong)uVar10 + 8 + lVar18) = 0;
        lVar18 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x130);
        uVar10 = *(int *)(*(longlong *)(param_1 + 8) + 0x138) * (uVar20 + 3);
        *(ulonglong *)((ulonglong)uVar10 + lVar18) = CONCAT44(fVar28,fVar27);
        *(undefined4 *)((ulonglong)uVar10 + 8 + lVar18) = 0;
        lVar18 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x130);
        uVar10 = *(int *)(*(longlong *)(param_1 + 8) + 0x138) * (uVar20 + 4);
        *(ulonglong *)((ulonglong)uVar10 + lVar18) = CONCAT44(fVar2,fVar24);
        *(undefined4 *)((ulonglong)uVar10 + 8 + lVar18) = 0;
        uVar10 = *(int *)(*(longlong *)(param_1 + 8) + 0x138) * (uVar20 + 5);
        lVar18 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x130);
        *(ulonglong *)((ulonglong)uVar10 + lVar18) = CONCAT44(fVar28,fVar24);
        *(undefined4 *)((ulonglong)uVar10 + 8 + lVar18) = 0;
        lVar18 = *(longlong *)(param_1 + 8);
        lVar17 = *(longlong *)(lVar18 + 200);
        lVar21 = *(uint *)(lVar18 + 0xd8) * uVar23;
        uVar7 = (ushort)((uint)fVar25 >> 0x10);
        if (*(char *)(lVar18 + 0xe0) == '\0') {
          local_25e = uVar7 & 0x8000;
          uVar10 = (uint)fVar25 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar25 & 0x7fffff | 0x800000,
               local_25e = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | local_25e,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              local_25e = local_25e + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            local_25e = ((uVar7 >> 7) - 0x10 & 0x1f) << 10 | (ushort)((uint)fVar25 >> 0xd) & 0x3ff |
                        local_25e;
          }
          else {
            local_25e = local_25e | 0x7bff;
          }
          *(ushort *)(lVar17 + lVar21 * 4) = local_25e;
          uVar9 = uStack_23a & 0x8000;
          uVar10 = (uint)fVar4 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar4 & 0x7fffff | 0x800000,
               uVar9 = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | uVar9,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              uVar9 = uVar9 + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            uVar9 = ((uStack_23a >> 7) - 0x10 & 0x1f) << 10 | (ushort)((uint)fVar4 >> 0xd) & 0x3ff |
                    uVar9;
          }
          else {
            uVar9 = uVar9 | 0x7bff;
          }
          *(ushort *)(lVar17 + 2 + lVar21 * 4) = uVar9;
        }
        else {
          *(float *)(lVar17 + lVar21 * 8) = fVar25;
          *(float *)(lVar17 + 4 + lVar21 * 8) = fVar4;
        }
        lVar18 = *(longlong *)(param_1 + 8);
        lVar17 = *(longlong *)(lVar18 + 200);
        lVar21 = (ulonglong)*(uint *)(lVar18 + 0xd8) * (ulonglong)(uVar20 + 1);
        if (*(char *)(lVar18 + 0xe0) == '\0') {
          local_25c = uVar8 & 0x8000;
          uVar10 = (uint)fVar3 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar3 & 0x7fffff | 0x800000,
               local_25c = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | local_25c,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              local_25c = local_25c + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            local_25c = ((uVar8 >> 7) - 0x10 & 0x1f) << 10 | (ushort)((uint)fVar3 >> 0xd) & 0x3ff |
                        local_25c;
          }
          else {
            local_25c = local_25c | 0x7bff;
          }
          *(ushort *)(lVar17 + lVar21 * 4) = local_25c;
          uVar9 = uStack_23a & 0x8000;
          uVar10 = (uint)fVar4 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar4 & 0x7fffff | 0x800000,
               uVar9 = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | uVar9,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              uVar9 = uVar9 + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            uVar9 = ((uStack_23a >> 7) - 0x10 & 0x1f) << 10 | (ushort)((uint)fVar4 >> 0xd) & 0x3ff |
                    uVar9;
          }
          else {
            uVar9 = uVar9 | 0x7bff;
          }
          *(ushort *)(lVar17 + 2 + lVar21 * 4) = uVar9;
        }
        else {
          *(float *)(lVar17 + lVar21 * 8) = fVar3;
          *(float *)(lVar17 + 4 + lVar21 * 8) = fVar4;
        }
        lVar18 = *(longlong *)(param_1 + 8);
        fVar26 = fVar26 + fVar4;
        lVar17 = *(longlong *)(lVar18 + 200);
        lVar21 = (ulonglong)*(uint *)(lVar18 + 0xd8) * (ulonglong)(uVar20 + 2);
        uStack_22e = (ushort)((uint)fVar26 >> 0x10);
        if (*(char *)(lVar18 + 0xe0) == '\0') {
          local_25a = uVar7 & 0x8000;
          uVar10 = (uint)fVar25 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar25 & 0x7fffff | 0x800000,
               local_25a = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | local_25a,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              local_25a = local_25a + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            local_25a = (ushort)((uint)fVar25 >> 0xd) & 0x3ff | ((uVar7 >> 7) - 0x10 & 0x1f) << 10 |
                        local_25a;
          }
          else {
            local_25a = local_25a | 0x7bff;
          }
          *(ushort *)(lVar17 + lVar21 * 4) = local_25a;
          uVar9 = uStack_22e & 0x8000;
          uVar10 = (uint)fVar26 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar26 & 0x7fffff | 0x800000,
               uVar9 = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | uVar9,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              uVar9 = uVar9 + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            uVar9 = (ushort)((uint)fVar26 >> 0xd) & 0x3ff | ((uStack_22e >> 7) - 0x10 & 0x1f) << 10
                    | uVar9;
          }
          else {
            uVar9 = uVar9 | 0x7bff;
          }
          *(ushort *)(lVar17 + 2 + lVar21 * 4) = uVar9;
        }
        else {
          *(float *)(lVar17 + lVar21 * 8) = fVar25;
          *(float *)(lVar17 + 4 + lVar21 * 8) = fVar26;
        }
        lVar18 = *(longlong *)(param_1 + 8);
        lVar17 = *(longlong *)(lVar18 + 200);
        lVar21 = (ulonglong)*(uint *)(lVar18 + 0xd8) * (ulonglong)(uVar20 + 3);
        if (*(char *)(lVar18 + 0xe0) == '\0') {
          local_258 = uVar7 & 0x8000;
          uVar10 = (uint)fVar25 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar25 & 0x7fffff | 0x800000,
               local_258 = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | local_258,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              local_258 = local_258 + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            local_258 = ((uVar7 >> 7) - 0x10 & 0x1f) << 10 | (ushort)((uint)fVar25 >> 0xd) & 0x3ff |
                        local_258;
          }
          else {
            local_258 = local_258 | 0x7bff;
          }
          *(ushort *)(lVar17 + lVar21 * 4) = local_258;
          uVar7 = uStack_22e & 0x8000;
          uVar10 = (uint)fVar26 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar26 & 0x7fffff | 0x800000,
               uVar7 = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | uVar7,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              uVar7 = uVar7 + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            uVar7 = ((uStack_22e >> 7) - 0x10 & 0x1f) << 10 | (ushort)((uint)fVar26 >> 0xd) & 0x3ff
                    | uVar7;
          }
          else {
            uVar7 = uVar7 | 0x7bff;
          }
          *(ushort *)(lVar17 + 2 + lVar21 * 4) = uVar7;
        }
        else {
          *(float *)(lVar17 + lVar21 * 8) = fVar25;
          *(float *)(lVar17 + 4 + lVar21 * 8) = fVar26;
        }
        lVar18 = *(longlong *)(param_1 + 8);
        lVar17 = *(longlong *)(lVar18 + 200);
        lVar21 = (ulonglong)*(uint *)(lVar18 + 0xd8) * (ulonglong)(uVar20 + 4);
        if (*(char *)(lVar18 + 0xe0) == '\0') {
          local_256 = uVar8 & 0x8000;
          uVar10 = (uint)fVar3 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar3 & 0x7fffff | 0x800000,
               local_256 = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | local_256,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              local_256 = local_256 + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            local_256 = ((uVar8 >> 7) - 0x10 & 0x1f) << 10 | (ushort)((uint)fVar3 >> 0xd) & 0x3ff |
                        local_256;
          }
          else {
            local_256 = local_256 | 0x7bff;
          }
          *(ushort *)(lVar17 + lVar21 * 4) = local_256;
          uVar7 = uStack_23a & 0x8000;
          uVar10 = (uint)fVar4 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar4 & 0x7fffff | 0x800000,
               uVar7 = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | uVar7,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              uVar7 = uVar7 + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            uVar7 = (ushort)((uint)fVar4 >> 0xd) & 0x3ff | ((uStack_23a >> 7) - 0x10 & 0x1f) << 10 |
                    uVar7;
          }
          else {
            uVar7 = uVar7 | 0x7bff;
          }
          *(ushort *)(lVar17 + 2 + lVar21 * 4) = uVar7;
        }
        else {
          *(float *)(lVar17 + lVar21 * 8) = fVar3;
          *(float *)(lVar17 + 4 + lVar21 * 8) = fVar4;
        }
        lVar17 = *(longlong *)(param_1 + 8);
        lVar18 = *(longlong *)(lVar17 + 200);
        lVar21 = (ulonglong)*(uint *)(lVar17 + 0xd8) * (ulonglong)(uVar20 + 5);
        if (*(char *)(lVar17 + 0xe0) == '\0') {
          local_254 = uVar8 & 0x8000;
          uVar20 = (uint)fVar3 >> 0x17 & 0xff;
          if (uVar20 < 0x71) {
            iVar22 = -uVar20 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar10 = (uint)fVar3 & 0x7fffff | 0x800000,
               local_254 = (ushort)(uVar10 >> ((byte)iVar22 & 0x1f)) & 0x3ff | local_254,
               (uVar10 >> ((char)-uVar20 + 0x7dU & 0x1f) & 1) != 0)) {
              local_254 = local_254 + 1;
            }
          }
          else if (uVar20 < 0x8f) {
            local_254 = (ushort)((uint)fVar3 >> 0xd) & 0x3ff | ((uVar8 >> 7) - 0x10 & 0x1f) << 10 |
                        local_254;
          }
          else {
            local_254 = local_254 | 0x7bff;
          }
          *(ushort *)(lVar18 + lVar21 * 4) = local_254;
          uVar8 = uStack_22e & 0x8000;
          uVar20 = (uint)fVar26 >> 0x17 & 0xff;
          if (uVar20 < 0x71) {
            iVar22 = -uVar20 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar10 = (uint)fVar26 & 0x7fffff | 0x800000,
               uVar8 = (ushort)(uVar10 >> ((byte)iVar22 & 0x1f)) & 0x3ff | uVar8,
               (uVar10 >> ((char)-uVar20 + 0x7dU & 0x1f) & 1) != 0)) {
              uVar8 = uVar8 + 1;
            }
          }
          else if (uVar20 < 0x8f) {
            uVar8 = ((uStack_22e >> 7) - 0x10 & 0x1f) << 10 | (ushort)((uint)fVar26 >> 0xd) & 0x3ff
                    | uVar8;
          }
          else {
            uVar8 = uVar8 | 0x7bff;
          }
          goto LAB_14287c97b;
        }
        *(float *)(lVar18 + lVar21 * 8) = fVar3;
        *(float *)(lVar18 + 4 + lVar21 * 8) = fVar26;
      }
      else {
        local_1e0 = 0;
        local_1d4 = 0;
        local_1c8 = 0;
        local_1bc = 0;
        local_1b0 = 0;
        uVar20 = *(int *)(lVar18 + 0x138) * local_220 * 6;
        *(ulonglong *)((ulonglong)uVar20 + lVar17) =
             CONCAT44((float)(*(int *)(param_4 + 0x374) - *(int *)(param_4 + 0x36c)) - fVar28,fVar27
                     );
        *(undefined4 *)((ulonglong)uVar20 + 8 + lVar17) = 0;
        lVar18 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x130);
        uVar20 = local_220 * 6;
        uVar23 = (ulonglong)uVar20;
        uVar10 = *(int *)(*(longlong *)(param_1 + 8) + 0x138) * (uVar20 + 1);
        *(ulonglong *)((ulonglong)uVar10 + lVar18) =
             CONCAT44((float)(*(int *)(param_4 + 0x374) - *(int *)(param_4 + 0x36c)) - fVar28,fVar24
                     );
        *(undefined4 *)((ulonglong)uVar10 + 8 + lVar18) = 0;
        lVar18 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x130);
        uVar10 = *(int *)(*(longlong *)(param_1 + 8) + 0x138) * (uVar20 + 2);
        *(ulonglong *)((ulonglong)uVar10 + lVar18) =
             CONCAT44((float)(*(int *)(param_4 + 0x374) - *(int *)(param_4 + 0x36c)) - fVar2,fVar27)
        ;
        *(undefined4 *)((ulonglong)uVar10 + 8 + lVar18) = 0;
        lVar18 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x130);
        uVar10 = *(int *)(*(longlong *)(param_1 + 8) + 0x138) * (uVar20 + 3);
        *(ulonglong *)((ulonglong)uVar10 + lVar18) =
             CONCAT44((float)(*(int *)(param_4 + 0x374) - *(int *)(param_4 + 0x36c)) - fVar2,fVar27)
        ;
        *(undefined4 *)((ulonglong)uVar10 + 8 + lVar18) = 0;
        lVar18 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x130);
        uVar10 = *(int *)(*(longlong *)(param_1 + 8) + 0x138) * (uVar20 + 4);
        local_1a4 = 0;
        fVar25 = fVar25 + fVar3;
        *(ulonglong *)((ulonglong)uVar10 + lVar18) =
             CONCAT44((float)(*(int *)(param_4 + 0x374) - *(int *)(param_4 + 0x36c)) - fVar28,fVar24
                     );
        fVar26 = fVar26 + fVar4;
        *(undefined4 *)((ulonglong)uVar10 + 8 + lVar18) = 0;
        uVar10 = *(int *)(*(longlong *)(param_1 + 8) + 0x138) * (uVar20 + 5);
        lVar18 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x130);
        *(ulonglong *)((ulonglong)uVar10 + lVar18) =
             CONCAT44((float)(*(int *)(param_4 + 0x374) - *(int *)(param_4 + 0x36c)) - fVar2,fVar24)
        ;
        *(undefined4 *)((ulonglong)uVar10 + 8 + lVar18) = 0;
        lVar18 = *(longlong *)(param_1 + 8);
        lVar17 = *(longlong *)(lVar18 + 200);
        lVar21 = *(uint *)(lVar18 + 0xd8) * uVar23;
        uStackX_a = (ushort)((uint)fVar25 >> 0x10);
        uStack_222 = (ushort)((uint)fVar26 >> 0x10);
        if (*(char *)(lVar18 + 0xe0) == '\0') {
          uVar7 = uStackX_a & 0x8000;
          uVar10 = (uint)fVar25 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar25 & 0x7fffff | 0x800000,
               uVar7 = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | uVar7,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              uVar7 = uVar7 + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            uVar7 = (ushort)((uint)fVar25 >> 0xd) & 0x3ff | ((uStackX_a >> 7) - 0x10 & 0x1f) << 10 |
                    uVar7;
          }
          else {
            uVar7 = uVar7 | 0x7bff;
          }
          *(ushort *)(lVar17 + lVar21 * 4) = uVar7;
          uVar7 = uStack_222 & 0x8000;
          uVar10 = (uint)fVar26 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar26 & 0x7fffff | 0x800000,
               uVar7 = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | uVar7,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              uVar7 = uVar7 + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            uVar7 = (ushort)((uint)fVar26 >> 0xd) & 0x3ff | ((uStack_222 >> 7) - 0x10 & 0x1f) << 10
                    | uVar7;
          }
          else {
            uVar7 = uVar7 | 0x7bff;
          }
          *(ushort *)(lVar17 + 2 + lVar21 * 4) = uVar7;
        }
        else {
          *(float *)(lVar17 + lVar21 * 8) = fVar25;
          *(float *)(lVar17 + 4 + lVar21 * 8) = fVar26;
        }
        lVar18 = *(longlong *)(param_1 + 8);
        lVar17 = *(longlong *)(lVar18 + 200);
        lVar21 = (ulonglong)*(uint *)(lVar18 + 0xd8) * (ulonglong)(uVar20 + 1);
        if (*(char *)(lVar18 + 0xe0) == '\0') {
          local_268 = uVar8 & 0x8000;
          uVar10 = (uint)fVar3 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar3 & 0x7fffff | 0x800000,
               local_268 = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | local_268,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              local_268 = local_268 + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            local_268 = (ushort)((uint)fVar3 >> 0xd) & 0x3ff | ((uVar8 >> 7) - 0x10 & 0x1f) << 10 |
                        local_268;
          }
          else {
            local_268 = local_268 | 0x7bff;
          }
          *(ushort *)(lVar17 + lVar21 * 4) = local_268;
          uVar7 = uStack_222 & 0x8000;
          uVar10 = (uint)fVar26 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar26 & 0x7fffff | 0x800000,
               uVar7 = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | uVar7,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              uVar7 = uVar7 + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            uVar7 = (ushort)((uint)fVar26 >> 0xd) & 0x3ff | ((uStack_222 >> 7) - 0x10 & 0x1f) << 10
                    | uVar7;
          }
          else {
            uVar7 = uVar7 | 0x7bff;
          }
          *(ushort *)(lVar17 + 2 + lVar21 * 4) = uVar7;
        }
        else {
          *(float *)(lVar17 + lVar21 * 8) = fVar3;
          *(float *)(lVar17 + 4 + lVar21 * 8) = fVar26;
        }
        lVar18 = *(longlong *)(param_1 + 8);
        lVar17 = *(longlong *)(lVar18 + 200);
        lVar21 = (ulonglong)*(uint *)(lVar18 + 0xd8) * (ulonglong)(uVar20 + 2);
        if (*(char *)(lVar18 + 0xe0) == '\0') {
          local_266 = uStackX_a & 0x8000;
          uVar10 = (uint)fVar25 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar25 & 0x7fffff | 0x800000,
               local_266 = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | local_266,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              local_266 = local_266 + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            local_266 = (ushort)((uint)fVar25 >> 0xd) & 0x3ff |
                        ((uStackX_a >> 7) - 0x10 & 0x1f) << 10 | local_266;
          }
          else {
            local_266 = local_266 | 0x7bff;
          }
          *(ushort *)(lVar17 + lVar21 * 4) = local_266;
          uVar7 = uStack_23a & 0x8000;
          uVar10 = (uint)fVar4 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar4 & 0x7fffff | 0x800000,
               uVar7 = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | uVar7,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              uVar7 = uVar7 + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            uVar7 = (ushort)((uint)fVar4 >> 0xd) & 0x3ff | ((uStack_23a >> 7) - 0x10 & 0x1f) << 10 |
                    uVar7;
          }
          else {
            uVar7 = uVar7 | 0x7bff;
          }
          *(ushort *)(lVar17 + 2 + lVar21 * 4) = uVar7;
        }
        else {
          *(float *)(lVar17 + lVar21 * 8) = fVar25;
          *(float *)(lVar17 + 4 + lVar21 * 8) = fVar4;
        }
        lVar18 = *(longlong *)(param_1 + 8);
        lVar17 = *(longlong *)(lVar18 + 200);
        lVar21 = (ulonglong)*(uint *)(lVar18 + 0xd8) * (ulonglong)(uVar20 + 3);
        if (*(char *)(lVar18 + 0xe0) == '\0') {
          local_264 = uStackX_a & 0x8000;
          uVar10 = (uint)fVar25 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar25 & 0x7fffff | 0x800000,
               local_264 = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | local_264,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              local_264 = local_264 + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            local_264 = (ushort)((uint)fVar25 >> 0xd) & 0x3ff |
                        ((uStackX_a >> 7) - 0x10 & 0x1f) << 10 | local_264;
          }
          else {
            local_264 = local_264 | 0x7bff;
          }
          *(ushort *)(lVar17 + lVar21 * 4) = local_264;
          uVar7 = uStack_23a & 0x8000;
          uVar10 = (uint)fVar4 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar4 & 0x7fffff | 0x800000,
               uVar7 = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | uVar7,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              uVar7 = uVar7 + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            uVar7 = (ushort)((uint)fVar4 >> 0xd) & 0x3ff | ((uStack_23a >> 7) - 0x10 & 0x1f) << 10 |
                    uVar7;
          }
          else {
            uVar7 = uVar7 | 0x7bff;
          }
          *(ushort *)(lVar17 + 2 + lVar21 * 4) = uVar7;
        }
        else {
          *(float *)(lVar17 + lVar21 * 8) = fVar25;
          *(float *)(lVar17 + 4 + lVar21 * 8) = fVar4;
        }
        lVar18 = *(longlong *)(param_1 + 8);
        lVar17 = *(longlong *)(lVar18 + 200);
        lVar21 = (ulonglong)*(uint *)(lVar18 + 0xd8) * (ulonglong)(uVar20 + 4);
        if (*(char *)(lVar18 + 0xe0) == '\0') {
          local_262 = uVar8 & 0x8000;
          uVar10 = (uint)fVar3 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar3 & 0x7fffff | 0x800000,
               local_262 = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | local_262,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              local_262 = local_262 + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            local_262 = (ushort)((uint)fVar3 >> 0xd) & 0x3ff | ((uVar8 >> 7) - 0x10 & 0x1f) << 10 |
                        local_262;
          }
          else {
            local_262 = local_262 | 0x7bff;
          }
          *(ushort *)(lVar17 + lVar21 * 4) = local_262;
          uVar7 = uStack_222 & 0x8000;
          uVar10 = (uint)fVar26 >> 0x17 & 0xff;
          if (uVar10 < 0x71) {
            iVar22 = -uVar10 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar16 = (uint)fVar26 & 0x7fffff | 0x800000,
               uVar7 = (ushort)(uVar16 >> ((byte)iVar22 & 0x1f)) & 0x3ff | uVar7,
               (uVar16 >> ((char)-uVar10 + 0x7dU & 0x1f) & 1) != 0)) {
              uVar7 = uVar7 + 1;
            }
          }
          else if (uVar10 < 0x8f) {
            uVar7 = (ushort)((uint)fVar26 >> 0xd) & 0x3ff | ((uStack_222 >> 7) - 0x10 & 0x1f) << 10
                    | uVar7;
          }
          else {
            uVar7 = uVar7 | 0x7bff;
          }
          *(ushort *)(lVar17 + 2 + lVar21 * 4) = uVar7;
        }
        else {
          *(float *)(lVar17 + lVar21 * 8) = fVar3;
          *(float *)(lVar17 + 4 + lVar21 * 8) = fVar26;
        }
        lVar17 = *(longlong *)(param_1 + 8);
        lVar18 = *(longlong *)(lVar17 + 200);
        lVar21 = (ulonglong)*(uint *)(lVar17 + 0xd8) * (ulonglong)(uVar20 + 5);
        if (*(char *)(lVar17 + 0xe0) == '\0') {
          local_260 = uVar8 & 0x8000;
          uVar20 = (uint)fVar3 >> 0x17 & 0xff;
          if (uVar20 < 0x71) {
            iVar22 = -uVar20 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar10 = (uint)fVar3 & 0x7fffff | 0x800000,
               local_260 = (ushort)(uVar10 >> ((byte)iVar22 & 0x1f)) & 0x3ff | local_260,
               (uVar10 >> ((char)-uVar20 + 0x7dU & 0x1f) & 1) != 0)) {
              local_260 = local_260 + 1;
            }
          }
          else if (uVar20 < 0x8f) {
            local_260 = (ushort)((uint)fVar3 >> 0xd) & 0x3ff | ((uVar8 >> 7) - 0x10 & 0x1f) << 10 |
                        local_260;
          }
          else {
            local_260 = local_260 | 0x7bff;
          }
          *(ushort *)(lVar18 + lVar21 * 4) = local_260;
          uVar8 = uStack_23a & 0x8000;
          uVar20 = (uint)fVar4 >> 0x17 & 0xff;
          if (uVar20 < 0x71) {
            iVar22 = -uVar20 + 0x7e;
            if ((iVar22 < 0x19) &&
               (uVar10 = (uint)fVar4 & 0x7fffff | 0x800000,
               uVar8 = (ushort)(uVar10 >> ((byte)iVar22 & 0x1f)) & 0x3ff | uVar8,
               (uVar10 >> ((char)-uVar20 + 0x7dU & 0x1f) & 1) != 0)) {
              uVar8 = uVar8 + 1;
            }
          }
          else if (uVar20 < 0x8f) {
            uVar8 = (ushort)((uint)fVar4 >> 0xd) & 0x3ff | ((uStack_23a >> 7) - 0x10 & 0x1f) << 10 |
                    uVar8;
          }
          else {
            uVar8 = uVar8 | 0x7bff;
          }
LAB_14287c97b:
          *(ushort *)(lVar18 + 2 + lVar21 * 4) = uVar8;
        }
        else {
          *(float *)(lVar18 + lVar21 * 8) = fVar3;
          *(float *)(lVar18 + 4 + lVar21 * 8) = fVar4;
        }
      }
      lVar18 = 6;
      do {
        iVar22 = (int)uVar23;
        lVar17 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xc0);
        if (*(char *)(*(longlong *)(param_1 + 8) + 0xe1) == '\0') {
          *(undefined1 *)(lVar17 + uVar23 * 8) = 0x7f;
          *(undefined1 *)(lVar17 + 1 + uVar23 * 8) = 0;
          local_118 = 0x3f800000;
          uStack_110 = 0;
          local_108 = 0x3f80000000000000;
          uStack_100 = 0;
          local_f8 = 0;
          uStack_f4 = 0;
          uStack_f0 = 0x3f800000;
          uStack_ec = 0;
          local_e8 = 0;
          uStack_e0 = 0x3f80000000000000;
          *(undefined1 *)(lVar17 + 2 + uVar23 * 8) = 0;
          *(undefined1 *)(lVar17 + 3 + uVar23 * 8) = 0x7f;
          fVar24 = (float)FMatrix::Determinant(&local_118);
          if (0.0 <= fVar24) {
            fVar24 = 254.5;
          }
          else {
            fVar24 = -253.5;
          }
          *(undefined1 *)(lVar17 + 4 + uVar23 * 8) = 0;
          *(undefined1 *)(lVar17 + 5 + uVar23 * 8) = 0;
          *(undefined1 *)(lVar17 + 6 + uVar23 * 8) = 0x7f;
          iVar11 = (int)ROUND(fVar24) >> 1;
          if (iVar11 < -0x80) {
            iVar15 = -0x80;
          }
          else {
            iVar15 = 0x7f;
            if (iVar11 < 0x7f) {
              iVar15 = iVar11;
            }
          }
          *(char *)(lVar17 + 7 + uVar23 * 8) = (char)iVar15;
        }
        else {
          puVar19 = (undefined2 *)(uVar23 * 0x10 + lVar17);
          *puVar19 = 0x7fff;
          puVar19[1] = 0;
          local_158 = 0x3f800000;
          uStack_150 = 0;
          local_148 = 0x3f80000000000000;
          uStack_140 = 0;
          local_138 = 0;
          uStack_134 = 0;
          uStack_130 = 0x3f800000;
          uStack_12c = 0;
          local_128 = 0;
          uStack_120 = 0x3f80000000000000;
          puVar19[2] = 0;
          puVar19[3] = 0x7fff;
          fVar24 = (float)FMatrix::Determinant(&local_158);
          if (0.0 <= fVar24) {
            fVar24 = 65534.5;
          }
          else {
            fVar24 = -65533.5;
          }
          puVar19[4] = 0;
          puVar19[5] = 0;
          puVar19[6] = 0x7fff;
          iVar11 = (int)ROUND(fVar24) >> 1;
          if (iVar11 < -0x8000) {
            puVar19[7] = 0x8000;
          }
          else {
            iVar15 = 0x7fff;
            if (iVar11 < 0x7fff) {
              iVar15 = iVar11;
            }
            puVar19[7] = (short)iVar15;
          }
        }
        lVar17 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1f0);
        if (lVar17 == 0) {
          lVar17 = *(longlong *)(param_1 + 8) + 0x140;
        }
        uVar23 = (ulonglong)(iVar22 + 1);
        *(undefined4 *)
         ((ulonglong)(uint)(*(int *)(lVar17 + 0x50) * iVar22) + *(longlong *)(lVar17 + 0x48)) =
             *(undefined4 *)(local_200 + 0x24 + local_208 * 0x28);
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      local_208 = local_208 + 1;
      local_220 = local_220 + 1;
    } while (local_220 < (int)param_3[1]);
  }
  uStack_210 = *(undefined8 *)(param_1 + 8);
  local_218 = param_2;
  if ((DAT_146ac3ac6 != '\0') && (cVar6 = IsInRenderingThread(), cVar6 != '\0')) {
    uVar13 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_142863620(&local_218,uVar13);
    return;
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar12 = GetCurrentThreadId(), DVar12 == DAT_1468c21c0)))) {
    local_1f8 = (undefined4)local_218;
    uStack_1f4 = local_218._4_4_;
    uStack_1f0 = (undefined4)uStack_210;
    uStack_1ec = uStack_210._4_4_;
    uVar13 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_142863620(&local_1f8,uVar13);
    return;
  }
  plVar14 = (longlong *)FUN_14286b7a0(local_178,0,0xff);
  lVar18 = *plVar14;
  *(undefined4 *)(lVar18 + 0x10) = (undefined4)local_218;
  *(undefined4 *)(lVar18 + 0x14) = local_218._4_4_;
  *(undefined4 *)(lVar18 + 0x18) = (undefined4)uStack_210;
  *(undefined4 *)(lVar18 + 0x1c) = uStack_210._4_4_;
  lVar18 = *plVar14;
  lVar5 = plVar14[2];
  lVar17 = plVar14[1];
  lVar21 = *(longlong *)(lVar18 + 0x28);
  piVar1 = (int *)(lVar21 + 0x48);
  if (lVar21 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_1409421c0(lVar18,lVar17,(int)lVar5,1);
  if (lVar21 != 0) {
    LOCK();
    iVar22 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar22 == 1) {
      FGraphEvent::Recycle(lVar21);
    }
  }
  return;
}



// FUNCTION 14287ce00 FUN_14287ce00 body=4577 status=ok
// SIG undefined FUN_14287ce00(void)

/* WARNING: Removing unreachable block (ram,0x00014287d256) */
/* WARNING: Removing unreachable block (ram,0x00014287d182) */
/* WARNING: Removing unreachable block (ram,0x00014287d33c) */
/* WARNING: Removing unreachable block (ram,0x00014287d733) */
/* WARNING: Removing unreachable block (ram,0x00014287d2bc) */
/* WARNING: Removing unreachable block (ram,0x00014287d2b0) */
/* WARNING: Removing unreachable block (ram,0x00014287d770) */
/* WARNING: Removing unreachable block (ram,0x00014287d4fb) */
/* WARNING: Removing unreachable block (ram,0x00014287d2d7) */
/* WARNING: Removing unreachable block (ram,0x00014287d2a2) */
/* WARNING: Removing unreachable block (ram,0x00014287d357) */
/* WARNING: Removing unreachable block (ram,0x00014287d5a4) */
/* WARNING: Removing unreachable block (ram,0x00014287d834) */
/* WARNING: Removing unreachable block (ram,0x00014287d499) */
/* WARNING: Removing unreachable block (ram,0x00014287d5bf) */
/* WARNING: Removing unreachable block (ram,0x00014287d372) */
/* WARNING: Removing unreachable block (ram,0x00014287d23a) */
/* WARNING: Removing unreachable block (ram,0x00014287d6f4) */
/* WARNING: Removing unreachable block (ram,0x00014287d18f) */
/* WARNING: Removing unreachable block (ram,0x00014287d5da) */
/* WARNING: Removing unreachable block (ram,0x00014287d515) */
/* WARNING: Removing unreachable block (ram,0x00014287d380) */
/* WARNING: Removing unreachable block (ram,0x00014287d7a5) */
/* WARNING: Removing unreachable block (ram,0x00014287d84f) */
/* WARNING: Removing unreachable block (ram,0x00014287d263) */
/* WARNING: Removing unreachable block (ram,0x00014287d509) */
/* WARNING: Removing unreachable block (ram,0x00014287d19d) */
/* WARNING: Removing unreachable block (ram,0x00014287d78a) */
/* WARNING: Removing unreachable block (ram,0x00014287d530) */
/* WARNING: Removing unreachable block (ram,0x00014287d1b9) */
/* WARNING: Removing unreachable block (ram,0x00014287d21e) */
/* WARNING: Removing unreachable block (ram,0x00014287d3e5) */
/* WARNING: Removing unreachable block (ram,0x00014287d5e8) */
/* WARNING: Removing unreachable block (ram,0x00014287d664) */
/* WARNING: Removing unreachable block (ram,0x00014287d3f0) */
/* WARNING: Removing unreachable block (ram,0x00014287d3fe) */
/* WARNING: Removing unreachable block (ram,0x00014287d819) */
/* WARNING: Removing unreachable block (ram,0x00014287d418) */
/* WARNING: Removing unreachable block (ram,0x00014287d4b3) */
/* WARNING: Removing unreachable block (ram,0x00014287d47f) */
/* WARNING: Removing unreachable block (ram,0x00014287d67e) */
/* WARNING: Removing unreachable block (ram,0x00014287d4be) */
/* WARNING: Removing unreachable block (ram,0x00014287d728) */
/* WARNING: Removing unreachable block (ram,0x00014287d64b) */
/* WARNING: Removing unreachable block (ram,0x00014287d77e) */
/* WARNING: Removing unreachable block (ram,0x00014287d85d) */
/* WARNING: Removing unreachable block (ram,0x00014287d70e) */
/* WARNING: Removing unreachable block (ram,0x00014287d656) */

void FUN_14287ce00(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  char param_5)

{
  int *piVar1;
  uint uVar2;
  ushort uVar3;
  longlong lVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  undefined2 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  float fVar24;
  ushort local_2b8;
  ushort local_2b6;
  ushort local_2b4;
  uint local_2a4;
  int local_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  longlong local_288;
  undefined1 local_280 [4];
  undefined1 local_27c [4];
  undefined1 local_278 [16];
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_250;
  undefined4 local_244;
  undefined4 local_238;
  undefined1 local_230 [8];
  undefined4 local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
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
  undefined8 uStack_a0;
  
  FPositionVertexBuffer::Init(*(longlong *)(param_1 + 8) + 0x148,(int)param_3[1] * 3,1);
  FStaticMeshVertexBuffer::Init(*(longlong *)(param_1 + 8) + 0x60,(int)param_3[1] * 3,1,1);
  lVar16 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar16 + 600) < 1) {
    iVar8 = *(int *)(lVar16 + 600);
    *(int *)(lVar16 + 600) = iVar8 + 1;
    if (*(int *)(lVar16 + 0x25c) < iVar8 + 1) {
      FUN_14089e280(lVar16 + 0x1a0,iVar8);
    }
    lVar14 = *(longlong *)(lVar16 + 0x250);
    if (*(longlong *)(lVar16 + 0x250) == 0) {
      lVar14 = lVar16 + 0x1a0;
    }
    FUN_14271d780(lVar14 + (longlong)iVar8 * 0x58);
    lVar16 = *(longlong *)(param_1 + 8);
  }
  lVar14 = *(longlong *)(lVar16 + 0x250);
  if (*(longlong *)(lVar16 + 0x250) == 0) {
    lVar14 = lVar16 + 0x1a0;
  }
  FColorVertexBuffer::Init(lVar14,(int)param_3[1] * 3);
  local_29c = 0;
  if (0 < (int)param_3[1]) {
    local_288 = 0;
    do {
      lVar16 = *(longlong *)(param_1 + 8);
      uVar2 = local_29c * 3;
      uVar19 = (ulonglong)uVar2;
      lVar14 = *(longlong *)(lVar16 + 400);
      puVar22 = (undefined8 *)(local_288 * 100 + *param_3);
      if (param_5 == '\0') {
        local_228 = 0;
        uStack_260 = 0;
        uStack_290 = uStack_290 & 0xffffffff00000000;
        uVar7 = *(int *)(lVar16 + 0x198) * local_29c * 3;
        *(ulonglong *)((ulonglong)uVar7 + lVar14) =
             CONCAT44(*(undefined4 *)((longlong)puVar22 + 0x24),*(undefined4 *)(puVar22 + 4));
        *(undefined4 *)((ulonglong)uVar7 + 8 + lVar14) = 0;
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 8) + 400);
        uVar7 = *(int *)(*(longlong *)(param_1 + 8) + 0x198) * (uVar2 + 1);
        *(undefined8 *)((ulonglong)uVar7 + lVar16) = *puVar22;
        *(undefined4 *)((ulonglong)uVar7 + 8 + lVar16) = 0;
        uVar7 = *(int *)(*(longlong *)(param_1 + 8) + 0x198) * (uVar2 + 2);
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 8) + 400);
        *(undefined8 *)((ulonglong)uVar7 + lVar16) = puVar22[8];
      }
      else {
        local_250 = 0;
        local_244 = 0;
        local_238 = 0;
        uVar7 = *(int *)(lVar16 + 0x198) * local_29c * 3;
        *(ulonglong *)((ulonglong)uVar7 + lVar14) =
             CONCAT44((float)(*(int *)(param_4 + 0x374) - *(int *)(param_4 + 0x36c)) -
                      *(float *)((longlong)puVar22 + 0x24),*(undefined4 *)(puVar22 + 4));
        *(undefined4 *)((ulonglong)uVar7 + 8 + lVar14) = 0;
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 8) + 400);
        uVar7 = *(int *)(*(longlong *)(param_1 + 8) + 0x198) * (uVar2 + 1);
        *(ulonglong *)((ulonglong)uVar7 + lVar16) =
             CONCAT44((float)(*(int *)(param_4 + 0x374) - *(int *)(param_4 + 0x36c)) -
                      *(float *)((longlong)puVar22 + 4),*(undefined4 *)puVar22);
        *(undefined4 *)((ulonglong)uVar7 + 8 + lVar16) = 0;
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 8) + 400);
        uVar7 = *(int *)(*(longlong *)(param_1 + 8) + 0x198) * (uVar2 + 2);
        *(ulonglong *)((ulonglong)uVar7 + lVar16) =
             CONCAT44((float)(*(int *)(param_4 + 0x374) - *(int *)(param_4 + 0x36c)) -
                      *(float *)((longlong)puVar22 + 0x44),*(undefined4 *)(puVar22 + 8));
      }
      local_2a4 = uVar2 + 2;
      uVar23 = (ulonglong)(uVar2 + 1);
      *(undefined4 *)((ulonglong)uVar7 + 8 + lVar16) = 0;
      uVar21 = (ulonglong)uVar2;
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x120);
      if (*(char *)(*(longlong *)(param_1 + 8) + 0x141) == '\0') {
        *(undefined1 *)(lVar16 + uVar19 * 8) = 0x7f;
        *(undefined1 *)(lVar16 + 1 + uVar19 * 8) = 0;
        local_1d8 = 0x3f800000;
        uStack_1d0 = 0;
        local_1c8 = 0x3f80000000000000;
        uStack_1c0 = 0;
        local_1b8 = 0;
        uStack_1b4 = 0;
        uStack_1b0 = 0x3f800000;
        uStack_1ac = 0;
        local_1a8 = 0;
        uStack_1a0 = 0x3f80000000000000;
        *(undefined1 *)(lVar16 + 2 + uVar19 * 8) = 0;
        *(undefined1 *)(lVar16 + 3 + uVar19 * 8) = 0x7f;
        fVar24 = (float)FMatrix::Determinant(&local_1d8);
        if (0.0 <= fVar24) {
          fVar24 = 254.5;
        }
        else {
          fVar24 = -253.5;
        }
        *(undefined1 *)(lVar16 + 4 + uVar21 * 8) = 0;
        *(undefined1 *)(lVar16 + 5 + uVar21 * 8) = 0;
        *(undefined1 *)(lVar16 + 6 + uVar21 * 8) = 0x7f;
        iVar8 = (int)ROUND(fVar24) >> 1;
        if (iVar8 < -0x80) {
          iVar13 = -0x80;
        }
        else {
          iVar13 = 0x7f;
          if (iVar8 < 0x7f) {
            iVar13 = iVar8;
          }
        }
        *(char *)(lVar16 + 7 + uVar21 * 8) = (char)iVar13;
      }
      else {
        puVar17 = (undefined2 *)(uVar21 * 0x10 + lVar16);
        *puVar17 = 0x7fff;
        puVar17[1] = 0;
        local_218 = 0x3f800000;
        uStack_210 = 0;
        local_208 = 0x3f80000000000000;
        uStack_200 = 0;
        local_1f8 = 0;
        uStack_1f4 = 0;
        uStack_1f0 = 0x3f800000;
        uStack_1ec = 0;
        local_1e8 = 0;
        uStack_1e0 = 0x3f80000000000000;
        puVar17[2] = 0;
        puVar17[3] = 0x7fff;
        fVar24 = (float)FMatrix::Determinant(&local_218);
        if (0.0 <= fVar24) {
          fVar24 = 65534.5;
        }
        else {
          fVar24 = -65533.5;
        }
        puVar17[4] = 0;
        puVar17[5] = 0;
        puVar17[6] = 0x7fff;
        iVar8 = (int)ROUND(fVar24) >> 1;
        if (iVar8 < -0x8000) {
          puVar17[7] = 0x8000;
        }
        else {
          iVar13 = 0x7fff;
          if (iVar8 < 0x7fff) {
            iVar13 = iVar8;
          }
          puVar17[7] = (short)iVar13;
        }
      }
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x120);
      if (*(char *)(*(longlong *)(param_1 + 8) + 0x141) == '\0') {
        *(undefined1 *)(lVar16 + uVar23 * 8) = 0x7f;
        *(undefined1 *)(lVar16 + 1 + uVar23 * 8) = 0;
        local_158 = 0x3f800000;
        uStack_150 = 0;
        local_148 = 0x3f80000000000000;
        uStack_140 = 0;
        local_138 = 0;
        uStack_134 = 0;
        uStack_130 = 0x3f800000;
        uStack_12c = 0;
        local_128 = 0;
        uStack_120 = 0x3f80000000000000;
        *(undefined1 *)(lVar16 + 2 + uVar23 * 8) = 0;
        *(undefined1 *)(lVar16 + 3 + uVar23 * 8) = 0x7f;
        fVar24 = (float)FMatrix::Determinant(&local_158);
        if (0.0 <= fVar24) {
          fVar24 = 254.5;
        }
        else {
          fVar24 = -253.5;
        }
        *(undefined1 *)(lVar16 + 4 + uVar23 * 8) = 0;
        *(undefined1 *)(lVar16 + 5 + uVar23 * 8) = 0;
        *(undefined1 *)(lVar16 + 6 + uVar23 * 8) = 0x7f;
        iVar8 = (int)ROUND(fVar24) >> 1;
        if (iVar8 < -0x80) {
          iVar13 = -0x80;
        }
        else {
          iVar13 = 0x7f;
          if (iVar8 < 0x7f) {
            iVar13 = iVar8;
          }
        }
        *(char *)(lVar16 + 7 + uVar23 * 8) = (char)iVar13;
      }
      else {
        puVar17 = (undefined2 *)(uVar23 * 0x10 + lVar16);
        *puVar17 = 0x7fff;
        puVar17[1] = 0;
        local_198 = 0x3f800000;
        uStack_190 = 0;
        local_188 = 0x3f80000000000000;
        uStack_180 = 0;
        puVar17[3] = 0x7fff;
        local_178 = 0;
        uStack_174 = 0;
        uStack_170 = 0x3f800000;
        uStack_16c = 0;
        local_168 = 0;
        uStack_160 = 0x3f80000000000000;
        puVar17[2] = 0;
        fVar24 = (float)FMatrix::Determinant(&local_198);
        if (0.0 <= fVar24) {
          fVar24 = 65534.5;
        }
        else {
          fVar24 = -65533.5;
        }
        puVar17[4] = 0;
        puVar17[5] = 0;
        puVar17[6] = 0x7fff;
        iVar8 = (int)ROUND(fVar24) >> 1;
        if (iVar8 < -0x8000) {
          puVar17[7] = 0x8000;
        }
        else {
          iVar13 = 0x7fff;
          if (iVar8 < 0x7fff) {
            iVar13 = iVar8;
          }
          puVar17[7] = (short)iVar13;
        }
      }
      uVar19 = (ulonglong)local_2a4;
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x120);
      if (*(char *)(*(longlong *)(param_1 + 8) + 0x141) == '\0') {
        *(undefined1 *)(lVar16 + uVar19 * 8) = 0x7f;
        *(undefined1 *)(lVar16 + 1 + uVar19 * 8) = 0;
        local_d8 = 0x3f800000;
        uStack_d0 = 0;
        local_c8 = 0x3f80000000000000;
        uStack_c0 = 0;
        local_b8 = 0;
        uStack_b4 = 0;
        uStack_b0 = 0x3f800000;
        uStack_ac = 0;
        local_a8 = 0;
        uStack_a0 = 0x3f80000000000000;
        *(undefined1 *)(lVar16 + 2 + uVar19 * 8) = 0;
        *(undefined1 *)(lVar16 + 3 + uVar19 * 8) = 0x7f;
        fVar24 = (float)FMatrix::Determinant(&local_d8);
        if (0.0 <= fVar24) {
          fVar24 = 254.5;
        }
        else {
          fVar24 = -253.5;
        }
        *(undefined1 *)(lVar16 + 4 + uVar19 * 8) = 0;
        *(undefined1 *)(lVar16 + 5 + uVar19 * 8) = 0;
        *(undefined1 *)(lVar16 + 6 + uVar19 * 8) = 0x7f;
        iVar8 = (int)ROUND(fVar24) >> 1;
        if (iVar8 < -0x80) {
          iVar13 = -0x80;
        }
        else {
          iVar13 = 0x7f;
          if (iVar8 < 0x7f) {
            iVar13 = iVar8;
          }
        }
        *(char *)(lVar16 + 7 + uVar19 * 8) = (char)iVar13;
      }
      else {
        puVar17 = (undefined2 *)(uVar19 * 0x10 + lVar16);
        *puVar17 = 0x7fff;
        puVar17[1] = 0;
        local_118 = 0x3f800000;
        uStack_110 = 0;
        local_108 = 0x3f80000000000000;
        uStack_100 = 0;
        puVar17[3] = 0x7fff;
        local_f8 = 0;
        uStack_f4 = 0;
        uStack_f0 = 0x3f800000;
        uStack_ec = 0;
        local_e8 = 0;
        uStack_e0 = 0x3f80000000000000;
        puVar17[2] = 0;
        fVar24 = (float)FMatrix::Determinant(&local_118);
        if (0.0 <= fVar24) {
          fVar24 = 65534.5;
        }
        else {
          fVar24 = -65533.5;
        }
        puVar17[4] = 0;
        puVar17[5] = 0;
        puVar17[6] = 0x7fff;
        iVar8 = (int)ROUND(fVar24) >> 1;
        if (iVar8 < -0x8000) {
          puVar17[7] = 0x8000;
        }
        else {
          iVar13 = 0x7fff;
          if (iVar8 < 0x7fff) {
            iVar13 = iVar8;
          }
          puVar17[7] = (short)iVar13;
        }
      }
      uVar7 = *(uint *)(puVar22 + 5);
      uVar15 = *(uint *)((longlong)puVar22 + 0x2c);
      lVar16 = *(longlong *)(param_1 + 8);
      lVar14 = *(longlong *)(lVar16 + 0x128);
      lVar20 = *(uint *)(lVar16 + 0x138) * uVar21;
      if (*(char *)(lVar16 + 0x140) == '\0') {
        uVar3 = (ushort)(uVar7 >> 0x10);
        local_2b8 = uVar3 & 0x8000;
        uVar18 = uVar7 >> 0x17 & 0xff;
        if (uVar18 < 0x71) {
          iVar8 = -uVar18 + 0x7e;
          if ((iVar8 < 0x19) &&
             (uVar7 = uVar7 & 0x7fffff | 0x800000,
             local_2b8 = (ushort)(uVar7 >> ((byte)iVar8 & 0x1f)) & 0x3ff | local_2b8,
             (uVar7 >> ((char)-uVar18 + 0x7dU & 0x1f) & 1) != 0)) {
            local_2b8 = local_2b8 + 1;
          }
        }
        else if (uVar18 < 0x8f) {
          local_2b8 = (ushort)(uVar7 >> 0xd) & 0x3ff | ((uVar3 >> 7) - 0x10 & 0x1f) << 10 |
                      local_2b8;
        }
        else {
          local_2b8 = local_2b8 | 0x7bff;
        }
        *(ushort *)(lVar14 + lVar20 * 4) = local_2b8;
        uVar3 = (ushort)(uVar15 >> 0x10);
        uVar6 = uVar3 & 0x8000;
        uVar7 = uVar15 >> 0x17 & 0xff;
        if (uVar7 < 0x71) {
          iVar8 = -uVar7 + 0x7e;
          if (iVar8 < 0x19) {
            uVar15 = uVar15 & 0x7fffff | 0x800000;
            uVar6 = (ushort)(uVar15 >> ((byte)iVar8 & 0x1f)) & 0x3ff | uVar6;
            if ((uVar15 >> ((char)-uVar7 + 0x7dU & 0x1f) & 1) != 0) {
              uVar6 = uVar6 + 1;
            }
          }
        }
        else if (uVar7 < 0x8f) {
          uVar6 = (ushort)(uVar15 >> 0xd) & 0x3ff | ((uVar3 >> 7) - 0x10 & 0x1f) << 10 | uVar6;
        }
        else {
          uVar6 = uVar6 | 0x7bff;
        }
        *(ushort *)(lVar14 + 2 + lVar20 * 4) = uVar6;
      }
      else {
        *(uint *)(lVar14 + lVar20 * 8) = uVar7;
        *(uint *)(lVar14 + 4 + lVar20 * 8) = uVar15;
      }
      lVar16 = *(longlong *)(param_1 + 8);
      uVar7 = *(uint *)(puVar22 + 1);
      uVar15 = *(uint *)((longlong)puVar22 + 0xc);
      lVar14 = *(longlong *)(lVar16 + 0x128);
      lVar20 = *(uint *)(lVar16 + 0x138) * uVar23;
      if (*(char *)(lVar16 + 0x140) == '\0') {
        uVar3 = (ushort)(uVar7 >> 0x10);
        local_2b6 = uVar3 & 0x8000;
        uVar18 = uVar7 >> 0x17 & 0xff;
        if (uVar18 < 0x71) {
          iVar8 = -uVar18 + 0x7e;
          if ((iVar8 < 0x19) &&
             (uVar7 = uVar7 & 0x7fffff | 0x800000,
             local_2b6 = (ushort)(uVar7 >> ((byte)iVar8 & 0x1f)) & 0x3ff | local_2b6,
             (uVar7 >> ((char)-uVar18 + 0x7dU & 0x1f) & 1) != 0)) {
            local_2b6 = local_2b6 + 1;
          }
        }
        else if (uVar18 < 0x8f) {
          local_2b6 = ((uVar3 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(uVar7 >> 0xd) & 0x3ff |
                      local_2b6;
        }
        else {
          local_2b6 = local_2b6 | 0x7bff;
        }
        *(ushort *)(lVar14 + lVar20 * 4) = local_2b6;
        uVar3 = (ushort)(uVar15 >> 0x10);
        uVar6 = uVar3 & 0x8000;
        uVar7 = uVar15 >> 0x17 & 0xff;
        if (uVar7 < 0x71) {
          iVar8 = -uVar7 + 0x7e;
          if (iVar8 < 0x19) {
            uVar15 = uVar15 & 0x7fffff | 0x800000;
            uVar6 = (ushort)(uVar15 >> ((byte)iVar8 & 0x1f)) & 0x3ff | uVar6;
            if ((uVar15 >> ((char)-uVar7 + 0x7dU & 0x1f) & 1) != 0) {
              uVar6 = uVar6 + 1;
            }
          }
        }
        else if (uVar7 < 0x8f) {
          uVar6 = ((uVar3 >> 7) - 0x10 & 0x1f) << 10 | (ushort)(uVar15 >> 0xd) & 0x3ff | uVar6;
        }
        else {
          uVar6 = uVar6 | 0x7bff;
        }
        *(ushort *)(lVar14 + 2 + lVar20 * 4) = uVar6;
      }
      else {
        *(uint *)(lVar14 + lVar20 * 8) = uVar7;
        *(uint *)(lVar14 + 4 + lVar20 * 8) = uVar15;
      }
      lVar16 = *(longlong *)(param_1 + 8);
      uVar7 = *(uint *)(puVar22 + 9);
      uVar15 = *(uint *)((longlong)puVar22 + 0x4c);
      lVar14 = *(longlong *)(lVar16 + 0x128);
      lVar20 = *(uint *)(lVar16 + 0x138) * uVar19;
      if (*(char *)(lVar16 + 0x140) == '\0') {
        uVar3 = (ushort)(uVar7 >> 0x10);
        local_2b4 = uVar3 & 0x8000;
        uVar18 = uVar7 >> 0x17 & 0xff;
        if (uVar18 < 0x71) {
          iVar8 = -uVar18 + 0x7e;
          if ((iVar8 < 0x19) &&
             (uVar7 = uVar7 & 0x7fffff | 0x800000,
             local_2b4 = (ushort)(uVar7 >> ((byte)iVar8 & 0x1f)) & 0x3ff | local_2b4,
             (uVar7 >> ((char)-uVar18 + 0x7dU & 0x1f) & 1) != 0)) {
            local_2b4 = local_2b4 + 1;
          }
        }
        else if (uVar18 < 0x8f) {
          local_2b4 = (ushort)(uVar7 >> 0xd) & 0x3ff | ((uVar3 >> 7) - 0x10 & 0x1f) << 10 |
                      local_2b4;
        }
        else {
          local_2b4 = local_2b4 | 0x7bff;
        }
        *(ushort *)(lVar14 + lVar20 * 4) = local_2b4;
        uVar3 = (ushort)(uVar15 >> 0x10);
        uVar6 = uVar3 & 0x8000;
        uVar7 = uVar15 >> 0x17 & 0xff;
        if (uVar7 < 0x71) {
          iVar8 = -uVar7 + 0x7e;
          if (iVar8 < 0x19) {
            uVar15 = uVar15 & 0x7fffff | 0x800000;
            uVar6 = (ushort)(uVar15 >> ((byte)iVar8 & 0x1f)) & 0x3ff | uVar6;
            if ((uVar15 >> ((char)-uVar7 + 0x7dU & 0x1f) & 1) != 0) {
              uVar6 = uVar6 + 1;
            }
          }
        }
        else if (uVar7 < 0x8f) {
          uVar6 = (ushort)(uVar15 >> 0xd) & 0x3ff | ((uVar3 >> 7) - 0x10 & 0x1f) << 10 | uVar6;
        }
        else {
          uVar6 = uVar6 | 0x7bff;
        }
        *(ushort *)(lVar14 + 2 + lVar20 * 4) = uVar6;
      }
      else {
        *(uint *)(lVar14 + lVar20 * 8) = uVar7;
        *(uint *)(lVar14 + 4 + lVar20 * 8) = uVar15;
      }
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x250);
      if (lVar16 == 0) {
        lVar16 = *(longlong *)(param_1 + 8) + 0x1a0;
      }
      iVar8 = *(int *)(lVar16 + 0x50);
      lVar16 = *(longlong *)(lVar16 + 0x48);
      puVar10 = (undefined4 *)FLinearColor::ToFColor(puVar22 + 6,local_280,1);
      *(undefined4 *)((ulonglong)(uint)(iVar8 * local_29c * 3) + lVar16) = *puVar10;
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x250);
      if (lVar16 == 0) {
        lVar16 = *(longlong *)(param_1 + 8) + 0x1a0;
      }
      iVar8 = *(int *)(lVar16 + 0x50);
      lVar16 = *(longlong *)(lVar16 + 0x48);
      puVar10 = (undefined4 *)FLinearColor::ToFColor(puVar22 + 2,local_27c,1);
      *(undefined4 *)((ulonglong)(iVar8 * (uVar2 + 1)) + lVar16) = *puVar10;
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x250);
      if (lVar16 == 0) {
        lVar16 = *(longlong *)(param_1 + 8) + 0x1a0;
      }
      iVar8 = *(int *)(lVar16 + 0x50);
      lVar16 = *(longlong *)(lVar16 + 0x48);
      puVar10 = (undefined4 *)FLinearColor::ToFColor(puVar22 + 10,local_278,1);
      local_29c = local_29c + 1;
      local_288 = local_288 + 1;
      *(undefined4 *)((ulonglong)(iVar8 * local_2a4) + lVar16) = *puVar10;
    } while (local_29c < (int)param_3[1]);
  }
  uStack_290 = *(undefined8 *)(param_1 + 8);
  local_298 = param_2;
  if ((DAT_146ac3ac6 != '\0') && (cVar5 = IsInRenderingThread(), cVar5 != '\0')) {
    uVar11 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_142863820(&local_298,uVar11);
    return;
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar9 = GetCurrentThreadId(), DVar9 == DAT_1468c21c0)))) {
    local_268 = (undefined4)local_298;
    uStack_264 = local_298._4_4_;
    uStack_260 = (undefined4)uStack_290;
    uStack_25c = uStack_290._4_4_;
    uVar11 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_142863820(&local_268,uVar11);
    return;
  }
  plVar12 = (longlong *)FUN_14286be30(local_230,0,0xff);
  lVar16 = *plVar12;
  *(undefined4 *)(lVar16 + 0x10) = (undefined4)local_298;
  *(undefined4 *)(lVar16 + 0x14) = local_298._4_4_;
  *(undefined4 *)(lVar16 + 0x18) = (undefined4)uStack_290;
  *(undefined4 *)(lVar16 + 0x1c) = uStack_290._4_4_;
  lVar16 = *plVar12;
  lVar4 = plVar12[2];
  lVar14 = plVar12[1];
  lVar20 = *(longlong *)(lVar16 + 0x28);
  piVar1 = (int *)(lVar20 + 0x48);
  if (lVar20 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_1409421c0(lVar16,lVar14,(int)lVar4,1);
  if (lVar20 != 0) {
    LOCK();
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      FGraphEvent::Recycle(lVar20);
    }
  }
  return;
}



// FUNCTION 14287dff0 FUN_14287dff0 body=552 status=ok
// SIG undefined FUN_14287dff0(void)

bool FUN_14287dff0(longlong *param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  char local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28 [4];
  
  if ((param_1[0x14b] == 0) && ((*(byte *)(param_1 + 300) & 1) != 0)) {
    uVar3 = FCommandLine::Get();
    local_res8[0] = FParse::Param(uVar3,L"AudioMixer");
    if (local_res8[0] == '\0') {
      FConfigCacheIni::GetBool(DAT_1468b6148,L"Audio",L"EnableAudioMixer",local_res8,&DAT_1468e2360)
      ;
    }
    lVar9 = 0;
    local_38 = 0;
    local_30 = 0;
    if (((local_res8[0] == '\0') ||
        (FConfigCacheIni::GetString
                   (DAT_1468b6148,L"Audio",L"AudioMixerModuleName",&local_38,&DAT_1468e2360),
        local_res8[0] == '\0')) || ((int)local_30 < 2)) {
      FConfigCacheIni::GetString
                (DAT_1468b6148,L"Audio",L"AudioDeviceModuleName",&local_38,&DAT_1468e2360);
    }
    if (((int)local_30 != 0) && (0 < (int)local_30 + -1)) {
      puVar4 = (undefined8 *)FName::FName(local_res10,local_38,1);
      uVar3 = *puVar4;
      uVar5 = FUN_14168dc80();
      plVar6 = (longlong *)FUN_141690010(uVar5,uVar3);
      if (plVar6 != (longlong *)0x0) {
        uVar1 = (**(code **)(*plVar6 + 0x40))(plVar6);
        plVar7 = (longlong *)UAudioSettings::GetPrivateStaticClass();
        lVar8 = plVar7[0x1f];
        if (lVar8 == 0) {
          (**(code **)(*plVar7 + 0x368))(plVar7);
          lVar8 = plVar7[0x1f];
        }
        FUN_1422f9890(lVar8,uVar1);
        lVar8 = operator_new(0x120);
        if (lVar8 != 0) {
          lVar9 = FUN_1422dfd60(lVar8);
        }
        param_1[0x14b] = lVar9;
        FUN_14174fc70(lVar9,plVar6);
        FAudioDeviceManager::FCreateAudioDeviceResults::FCreateAudioDeviceResults(local_28);
        cVar2 = FUN_1422e81f0(param_1[0x14b],1,local_28);
        if (cVar2 == '\0') {
          (**(code **)(*param_1 + 0x2a8))(param_1);
        }
        else {
          *(undefined4 *)(param_1 + 0x14c) = local_28[0];
          FUN_1422f97f0(param_1[0x14b]);
          FUN_1422fa5d0();
        }
      }
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  return param_1[0x14b] != 0;
}



// FUNCTION 14287e220 FUN_14287e220 body=1006 status=ok
// SIG undefined FUN_14287e220(void)

bool FUN_14287e220(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  bool bVar23;
  longlong *local_res10;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined2 *local_90;
  undefined8 local_88;
  longlong local_80 [2];
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  
  uVar16 = 0;
  if ((DAT_1468b616c == '\0') && (plVar19 = (longlong *)(param_1 + 0xae8), *plVar19 == 0)) {
    local_b0 = plVar19;
    uVar9 = FCommandLine::Get();
    cVar5 = FParse::Param(uVar9,L"noeyetracking");
    if (cVar5 == '\0') {
      plVar10 = (longlong *)FUN_141593110();
      FName::FName(&local_b8,L"EyeTracker",1);
      uVar9 = local_b8;
      local_a0 = 0;
      local_98 = 0;
      iVar7 = (**(code **)(*plVar10 + 8))(plVar10,local_b8);
      uVar20 = uVar16;
      uVar22 = uVar16;
      if (0 < iVar7) {
        do {
          lVar11 = (**(code **)(*plVar10 + 0x10))(plVar10,uVar9,uVar22);
          uVar4 = local_98;
          if (lVar11 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = lVar11 + -8;
          }
          lVar17 = (longlong)(int)local_98;
          iVar8 = (int)local_98 + 1;
          local_98 = CONCAT44(local_98._4_4_,iVar8);
          if ((int)uVar20 < iVar8) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_a0,uVar4 & 0xffffffff);
            uVar20 = local_98 >> 0x20;
            uVar16 = local_a0;
          }
          uVar21 = (int)uVar22 + 1;
          *(longlong *)(uVar16 + lVar17 * 8) = lVar11;
          plVar19 = local_b0;
          uVar22 = (ulonglong)uVar21;
        } while ((int)uVar21 < iVar7);
      }
      bVar23 = false;
      local_90 = (undefined2 *)0x0;
      local_88 = 0;
      uVar9 = FCommandLine::Get();
      cVar5 = FParse::Value(uVar9,L"eyetracking=",&local_90,1);
      local_res10 = (longlong *)0x0;
      local_b0 = (longlong *)0x0;
      local_a8 = 0;
      for (iVar7 = 0; (-1 < iVar7 && (iVar7 < (int)local_98)); iVar7 = iVar7 + 1) {
        plVar18 = *(longlong **)(uVar16 + (longlong)iVar7 * 8);
        bVar3 = bVar23;
        if (cVar5 == '\0') {
LAB_14287e3df:
          bVar23 = bVar3;
          bVar3 = false;
        }
        else {
          bVar23 = true;
          puVar12 = (undefined8 *)(**(code **)(*plVar18 + 0x40))(plVar18,local_80);
          if (*(int *)(puVar12 + 1) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = (undefined2 *)*puVar12;
          }
          puVar14 = &DAT_143f3eda8;
          if ((int)local_88 != 0) {
            puVar14 = local_90;
          }
          iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar15);
          bVar3 = true;
          if (iVar8 == 0) goto LAB_14287e3df;
          bVar3 = true;
        }
        if ((bVar23) && (bVar23 = false, local_80[0] != 0)) {
          FMemory::Free();
        }
        if (!bVar3) {
          cVar6 = (**(code **)(*plVar18 + 0x48))(plVar18);
          uVar20 = local_a8;
          if (cVar6 == '\0') {
            lVar11 = (longlong)(int)local_a8;
            iVar8 = (int)local_a8 + 1;
            local_a8 = CONCAT44(local_a8._4_4_,iVar8);
            if (local_a8._4_4_ < iVar8) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_b0,uVar20 & 0xffffffff);
            }
            local_b0[lVar11] = (longlong)plVar18;
          }
          else {
            plVar13 = (longlong *)(**(code **)(*plVar18 + 0x50))(plVar18,local_70);
            if (plVar19 != plVar13) {
              *plVar19 = *plVar13;
              *plVar13 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(plVar19 + 1,plVar13 + 1);
            }
            plVar13 = local_68;
            if (local_68 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_68 + 1;
              lVar11 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              uVar16 = local_a0;
              if ((int)lVar11 == 1) {
                (**(code **)*local_68)(local_68);
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                iVar8 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                uVar16 = local_a0;
                if (iVar8 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                  uVar16 = local_a0;
                }
              }
            }
            if (*plVar19 != 0) goto LAB_14287e56a;
          }
        }
      }
      for (iVar7 = 0;
          (uVar16 = local_a0, plVar18 = local_res10, -1 < iVar7 && (iVar7 < (int)local_a8));
          iVar7 = iVar7 + 1) {
        plVar18 = (longlong *)local_b0[iVar7];
        plVar13 = (longlong *)(**(code **)(*plVar18 + 0x50))(plVar18,local_60);
        if (plVar19 != plVar13) {
          *plVar19 = *plVar13;
          *plVar13 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(plVar19 + 1,plVar13 + 1);
        }
        plVar13 = local_58;
        if (local_58 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_58 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_58)(local_58);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
        uVar16 = local_a0;
        if (*plVar19 != 0) break;
      }
LAB_14287e56a:
      local_res10 = plVar18;
      for (iVar7 = 0; (-1 < iVar7 && (iVar7 < (int)local_98)); iVar7 = iVar7 + 1) {
        plVar19 = *(longlong **)(uVar16 + (longlong)iVar7 * 8);
        if (plVar19 != local_res10) {
          plVar18 = plVar19 + 1;
          if (plVar19 == (longlong *)0x0) {
            plVar18 = (longlong *)0x0;
          }
          (**(code **)(*plVar10 + 0x20))(plVar10,local_b8,plVar18);
        }
      }
      if (local_b0 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_90 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (uVar16 != 0) {
        FMemory::Free(uVar16);
      }
    }
  }
  return *(longlong *)(param_1 + 0xae8) != 0;
}



// FUNCTION 14287e610 FUN_14287e610 body=2178 status=ok
// SIG undefined FUN_14287e610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14287e610(ulonglong param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  int *piVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 local_res18 [8];
  int local_res20;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  undefined2 *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88 [2];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  if (DAT_1468b616c != '\0') goto LAB_14287eda9;
  plVar12 = (longlong *)0x0;
  piVar16 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar16 < DAT_146b18458) && (_Init_thread_header(&DAT_146b18458), DAT_146b18458 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b18448 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x10))
                   (DAT_1468b1f88,L"r.EnableStereoEmulation",0,L"Emulate stereo rendering",0);
    _DAT_146b18440 = &PTR_FUN_143f3ecf8;
    DAT_146b18450 = (**(code **)(*DAT_146b18448 + 0x38))(DAT_146b18448);
    atexit(FUN_143ebcae0);
    _Init_thread_footer(&DAT_146b18458);
  }
  uVar7 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar7,L"emulatestereo");
  lVar18 = DAT_146b18450;
  if (cVar2 == '\0') {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar4 = GetCurrentThreadId();
      plVar11 = (longlong *)&DAT_00000004;
      if (DVar4 == DAT_1468c21c0) goto LAB_14287e6ce;
    }
    else {
LAB_14287e6ce:
      plVar11 = plVar12;
    }
    if (*(int *)((longlong)plVar11 + lVar18) == 0) {
      plVar11 = (longlong *)(param_1 + 0xac8);
      if (*plVar11 == 0) {
        local_90 = plVar11;
        uVar7 = FCommandLine::Get();
        cVar2 = FParse::Param(uVar7,L"nohmd");
        if (cVar2 == '\0') {
          if ((*piVar16 < DAT_146850178) &&
             (_Init_thread_header(&DAT_146850178), DAT_146850178 == -1)) {
            FName::FName(&DAT_146850170,&DAT_143f3ef90,1);
            _Init_thread_footer(&DAT_146850178);
          }
          uVar7 = DAT_146850170;
          local_98 = (longlong *)FUN_141593110();
          local_f8 = 0;
          local_f0 = 0;
          iVar5 = (**(code **)(*local_98 + 8))(local_98,uVar7);
          plVar13 = local_98;
          plVar10 = plVar12;
          if (0 < iVar5) {
            do {
              lVar18 = 0;
              lVar8 = (**(code **)(*plVar13 + 0x10))(plVar13,uVar7,plVar12);
              uVar19 = local_f0;
              if (lVar8 != 0) {
                lVar18 = lVar8 + -8;
              }
              lVar8 = (longlong)(int)local_f0;
              iVar6 = (int)local_f0 + 1;
              local_f0 = CONCAT44(local_f0._4_4_,iVar6);
              if ((int)plVar10 < iVar6) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (&local_f8,uVar19 & 0xffffffff);
                plVar10 = (longlong *)(local_f0 >> 0x20);
              }
              uVar17 = (int)plVar12 + 1;
              plVar12 = (longlong *)(ulonglong)uVar17;
              *(longlong *)(local_f8 + lVar8 * 8) = lVar18;
              plVar11 = local_90;
            } while ((int)uVar17 < iVar5);
          }
          local_a8 = (undefined2 *)0x0;
          local_a0 = 0;
          uVar9 = FCommandLine::Get();
          cVar2 = FParse::Value(uVar9,L"hmd=",&local_a8,1);
          AlgoImpl::
          IntroSortInternal<IHeadMountedDisplayModule_*,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_>
                    (local_f8,(longlong)(int)local_f0,param_1 & 0xff,local_res18);
          local_d8 = (longlong *)0x0;
          local_e8 = 0;
          local_e0 = 0;
          local_res20 = 0;
LAB_14287e817:
          iVar5 = 0;
          if ((-1 < local_res20) && (local_res20 < (int)local_f0)) {
            plVar12 = *(longlong **)(local_f8 + (longlong)local_res20 * 8);
            if (cVar2 == '\0') goto LAB_14287e99b;
            local_108 = (longlong *)0x0;
            local_100 = 0;
            (**(code **)(*plVar12 + 0x48))(plVar12,&local_108);
            plVar10 = (longlong *)(**(code **)(*plVar12 + 0x40))(plVar12,local_88);
            uVar19 = local_100;
            lVar18 = (longlong)(int)local_100;
            iVar5 = (int)local_100 + 1;
            local_100 = CONCAT44(local_100._4_4_,iVar5);
            if (local_100._4_4_ < iVar5) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_108,uVar19 & 0xffffffff);
            }
            plVar13 = local_108 + lVar18 * 2;
            *plVar13 = 0;
            *plVar13 = *plVar10;
            *plVar10 = 0;
            *(int *)(plVar13 + 1) = (int)plVar10[1];
            *(undefined4 *)((longlong)plVar13 + 0xc) = *(undefined4 *)((longlong)plVar10 + 0xc);
            plVar10[1] = 0;
            if (local_88[0] != 0) {
              FMemory::Free();
            }
            uVar19 = (ulonglong)(int)local_100;
            plVar13 = local_108 + uVar19 * 2;
            plVar10 = local_108;
            if (local_108 != plVar13) {
              do {
                if ((int)plVar10[1] == 0) {
                  puVar15 = &DAT_143f3eda8;
                }
                else {
                  puVar15 = (undefined2 *)*plVar10;
                }
                puVar14 = &DAT_143f3eda8;
                if ((int)local_a0 != 0) {
                  puVar14 = local_a8;
                }
                iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar15);
                plVar1 = local_108;
                iVar5 = (int)local_100;
                if (iVar6 == 0) goto joined_r0x00014287e969;
                plVar10 = plVar10 + 2;
              } while (plVar10 != plVar13);
              uVar19 = local_100 & 0xffffffff;
            }
            uVar17 = (uint)uVar19;
            plVar12 = local_108;
            while (uVar17 != 0) {
              if (*plVar12 != 0) {
                FMemory::Free();
              }
              plVar12 = plVar12 + 2;
              uVar17 = (int)uVar19 - 1;
              uVar19 = (ulonglong)uVar17;
            }
            if (local_108 != (longlong *)0x0) goto code_r0x00014287e945;
            goto LAB_14287ea48;
          }
          goto LAB_14287ea60;
        }
      }
      goto LAB_14287eda9;
    }
  }
  lVar18 = operator_new(0x18);
  plVar11 = plVar12;
  if (lVar18 != 0) {
    plVar11 = (longlong *)FUN_14285fad0(lVar18);
  }
  local_b8 = plVar11;
  plVar10 = (longlong *)operator_new(0x18);
  if (plVar10 != (longlong *)0x0) {
    *(undefined4 *)(plVar10 + 1) = 1;
    *plVar10 = (longlong)&PTR_FUN_1451dfc50;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    plVar10[2] = (longlong)plVar11;
    plVar12 = plVar10;
  }
  plStack_b0 = plVar12;
  SharedPointerInternals::EnableSharedFromThis(&local_b8,plVar11,plVar11);
  local_c8 = local_b8;
  plStack_c0 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
    UNLOCK();
  }
  if ((longlong **)(param_1 + 0xab8) != &local_c8) {
    *(longlong **)(param_1 + 0xab8) = local_b8;
    local_c8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xac0,&plStack_c0);
  }
  plVar12 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_c0 + 1;
    lVar18 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar16 = (int *)((longlong)plVar12 + 0xc);
      iVar5 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
      }
    }
  }
  plVar12 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_b0 + 1;
    lVar18 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar16 = (int *)((longlong)plVar12 + 0xc);
      iVar5 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
LAB_14287eda9:
  return *(longlong *)(param_1 + 0xab8) != 0;
LAB_14287ea60:
  plVar12 = local_d8;
  if ((iVar5 < 0) || ((int)local_e0 <= iVar5)) goto LAB_14287eafc;
  plVar12 = *(longlong **)(local_e8 + (longlong)iVar5 * 8);
  plVar10 = (longlong *)(**(code **)(*plVar12 + 0x78))(plVar12,local_68);
  if (plVar11 != plVar10) {
    *plVar11 = *plVar10;
    *plVar10 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(plVar11 + 1,plVar10 + 1);
  }
  plVar10 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_60 + 1;
    lVar18 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar16 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar16;
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (*plVar11 != 0) goto LAB_14287eafc;
  iVar5 = iVar5 + 1;
  goto LAB_14287ea60;
joined_r0x00014287e969:
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
LAB_14287e99b:
  cVar3 = (**(code **)(*plVar12 + 0x58))(plVar12);
  uVar19 = local_e0;
  if (cVar3 == '\0') {
    lVar18 = (longlong)(int)local_e0;
    iVar5 = (int)local_e0 + 1;
    local_e0 = CONCAT44(local_e0._4_4_,iVar5);
    if (local_e0._4_4_ < iVar5) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_e8,uVar19 & 0xffffffff);
    }
    *(longlong **)(local_e8 + lVar18 * 8) = plVar12;
  }
  else {
    plVar10 = (longlong *)(**(code **)(*plVar12 + 0x78))(plVar12,local_78);
    if (plVar11 != plVar10) {
      *plVar11 = *plVar10;
      *plVar10 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(plVar11 + 1,plVar10 + 1);
    }
    plVar10 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_70 + 1;
      lVar18 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar16 = (int *)((longlong)plVar10 + 0xc);
        iVar5 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    if (*plVar11 != 0) goto LAB_14287eafc;
  }
LAB_14287ea48:
  local_res20 = local_res20 + 1;
  goto LAB_14287e817;
LAB_14287eafc:
  local_d8 = plVar12;
  plVar12 = local_98;
  plVar11 = (longlong *)0x0;
  plVar10 = local_d8;
  while ((iVar5 = (int)plVar11, -1 < iVar5 && (iVar5 < (int)local_f0))) {
    plVar11 = *(longlong **)(local_f8 + (longlong)iVar5 * 8);
    if (plVar11 != plVar10) {
      plVar10 = plVar11 + 1;
      if (plVar11 == (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
      }
      (**(code **)(*plVar12 + 0x20))(plVar12,uVar7,plVar10);
      plVar10 = local_d8;
    }
    plVar11 = (longlong *)(ulonglong)(iVar5 + 1);
  }
  plVar12 = (longlong *)*local_90;
  if (plVar12 != (longlong *)0x0) {
    plVar11 = (longlong *)(**(code **)(*plVar12 + 0xe0))(plVar12,local_58);
    plVar12 = (longlong *)(param_1 + 0xab8);
    if (plVar12 != plVar11) {
      *plVar12 = *plVar11;
      *plVar11 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xac0,plVar11 + 1);
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_50 + 1;
      lVar18 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar16 = (int *)((longlong)local_50 + 0xc);
        iVar5 = *piVar16;
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (*plVar12 != 0) {
      uVar7 = FCommandLine::Get();
      cVar2 = FParse::Param(uVar7,&DAT_1451cd4c4);
      if (cVar2 == '\0') {
        plVar11 = (longlong *)UGeneralProjectSettings::GetPrivateStaticClass();
        lVar18 = plVar11[0x1f];
        if (lVar18 == 0) {
          (**(code **)(*plVar11 + 0x368))(plVar11);
          lVar18 = plVar11[0x1f];
        }
        if (*(char *)(lVar18 + 0x10a) == '\0') goto LAB_14287ec18;
      }
      (**(code **)(*(longlong *)*plVar12 + 0x10))((longlong *)*plVar12,1);
    }
  }
LAB_14287ec18:
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  goto LAB_14287eda9;
code_r0x00014287e945:
  FMemory::Free(local_108);
  local_res20 = local_res20 + 1;
  goto LAB_14287e817;
}



// FUNCTION 14287eea0 FUN_14287eea0 body=39 status=ok
// SIG undefined FUN_14287eea0(void)

void FUN_14287eea0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1451dd390;
    return;
  }
  return;
}



// FUNCTION 14287eed0 FUN_14287eed0 body=3682 status=ok
// SIG undefined FUN_14287eed0(void)

void FUN_14287eed0(longlong param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 local_res10;
  uint local_res18;
  ulonglong in_stack_ffffffffffffff68;
  longlong local_68;
  longlong local_60 [2];
  longlong local_50 [3];
  
  local_res18 = 0;
  if (DAT_146aed668 == 0) {
    FUN_1421d75c0();
  }
  local_68 = 0;
  local_60[0] = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  lVar6 = local_68;
  FGenericPlatformString::Memcpy(local_68,L"RemoveSurfaceMaterialName",0x34);
  puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x490,local_50);
  puVar10 = &DAT_143f3eda8;
  if (*(longlong *)(param_1 + 0x488) == 0) {
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    uVar4 = ACineCameraActor::GetPrivateStaticClass();
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    uVar4 = FUN_141799c90(uVar4,0,puVar9,0,in_stack_ffffffffffffff68,0,1);
    *(undefined8 *)(param_1 + 0x488) = uVar4;
  }
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  if (lVar6 != 0) {
    FMemory::Free(lVar6);
  }
  local_68 = 0;
  local_60[0] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  lVar6 = local_68;
  FGenericPlatformString::Memcpy(local_68,L"DebugMeshMaterialName",0x2c);
  puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x3c8,local_50);
  if (*(longlong *)(param_1 + 0x3c0) == 0) {
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    uVar4 = ACineCameraActor::GetPrivateStaticClass();
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    uVar4 = FUN_141799c90(uVar4,0,puVar9,0,in_stack_ffffffffffffff68,0,1);
    *(undefined8 *)(param_1 + 0x3c0) = uVar4;
  }
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  if (lVar6 != 0) {
    FMemory::Free(lVar6);
  }
  local_68 = 0;
  local_60[0] = 0x24;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  lVar6 = local_68;
  FGenericPlatformString::Memcpy(local_68,L"InvalidLightmapSettingsMaterialName",0x48);
  puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x598,local_50);
  if (*(longlong *)(param_1 + 0x590) == 0) {
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    uVar4 = ACineCameraActor::GetPrivateStaticClass();
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    uVar4 = FUN_141799c90(uVar4,0,puVar9,0,in_stack_ffffffffffffff68,0,1);
    *(undefined8 *)(param_1 + 0x590) = uVar4;
  }
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  if (lVar6 != 0) {
    FMemory::Free(lVar6);
  }
  local_68 = 0;
  local_60[0] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  lVar6 = local_68;
  FGenericPlatformString::Memcpy(local_68,L"ArrowMaterialName",0x24);
  puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x5d8,local_50);
  if (*(longlong *)(param_1 + 0x5d0) == 0) {
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    uVar4 = ACineCameraActor::GetPrivateStaticClass();
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    uVar4 = FUN_141799c90(uVar4,0,puVar9,0,in_stack_ffffffffffffff68,0,1);
    *(undefined8 *)(param_1 + 0x5d0) = uVar4;
  }
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  if (lVar6 != 0) {
    FMemory::Free(lVar6);
  }
  if (*(longlong *)(param_1 + 0x2c8) == 0) {
    puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x2d0,local_50);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    uVar4 = UTexture2D::GetPrivateStaticClass();
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    uVar4 = FUN_141799c90(uVar4,0,puVar9,0,in_stack_ffffffffffffff68,0,1);
    *(undefined8 *)(param_1 + 0x2c8) = uVar4;
    if (local_50[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x308) == 0) {
    puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x310,local_50);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    uVar4 = UTexture2D::GetPrivateStaticClass();
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    uVar4 = FUN_141799c90(uVar4,0,puVar9,0,in_stack_ffffffffffffff68,0,1);
    *(undefined8 *)(param_1 + 0x308) = uVar4;
    if (local_50[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x348) == 0) {
    puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x350,local_50);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    uVar4 = UTexture2D::GetPrivateStaticClass();
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    uVar4 = FUN_141799c90(uVar4,0,puVar9,0,in_stack_ffffffffffffff68,0,1);
    *(undefined8 *)(param_1 + 0x348) = uVar4;
    if (local_50[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x368) == 0) {
    puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x370,local_50);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    uVar4 = UTexture2D::GetPrivateStaticClass();
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    uVar4 = FUN_141799c90(uVar4,0,puVar9,0,in_stack_ffffffffffffff68,0,1);
    *(undefined8 *)(param_1 + 0x368) = uVar4;
    if (local_50[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x388) == 0) {
    puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x390,local_50);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    uVar4 = UTexture2D::GetPrivateStaticClass();
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    uVar4 = FUN_141799c90(uVar4,0,puVar9,0,in_stack_ffffffffffffff68,0,1);
    *(undefined8 *)(param_1 + 0x388) = uVar4;
    if (local_50[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x728) == 0) {
    puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x730,local_50);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    uVar4 = UTexture2D::GetPrivateStaticClass();
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    uVar4 = FUN_141799c90(uVar4,0,puVar9,0,in_stack_ffffffffffffff68,0,1);
    *(undefined8 *)(param_1 + 0x728) = uVar4;
    if (local_50[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x748) == 0) {
    puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x750,local_50);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    uVar4 = UTexture2D::GetPrivateStaticClass();
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    uVar4 = FUN_141799c90(uVar4,0,puVar9,0,in_stack_ffffffffffffff68,0,1);
    *(undefined8 *)(param_1 + 0x748) = uVar4;
    if (local_50[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x768) == 0) {
    puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x770,local_50);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    uVar4 = UTexture2D::GetPrivateStaticClass();
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    uVar4 = FUN_141799c90(uVar4,0,puVar9,0,in_stack_ffffffffffffff68,0,1);
    *(undefined8 *)(param_1 + 0x768) = uVar4;
    if (local_50[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x788) == 0) {
    puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x790,local_50);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    uVar4 = UTexture2D::GetPrivateStaticClass();
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    uVar4 = FUN_141799c90(uVar4,0,puVar9,0,in_stack_ffffffffffffff68,0,1);
    *(undefined8 *)(param_1 + 0x788) = uVar4;
    if (local_50[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x2e8) == 0) {
    puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x2f0,local_50);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    uVar4 = UTexture2D::GetPrivateStaticClass();
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    uVar4 = FUN_141799c90(uVar4,0,puVar9,0,in_stack_ffffffffffffff68,0,1);
    *(undefined8 *)(param_1 + 0x2e8) = uVar4;
    if (local_50[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x6c8) == 0) {
    puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x6d0,local_50);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    uVar4 = UPhysicalMaterial::GetPrivateStaticClass();
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    uVar4 = FUN_141799c90(uVar4,0,puVar9,0,in_stack_ffffffffffffff68,0,1);
    *(undefined8 *)(param_1 + 0x6c8) = uVar4;
    if (local_50[0] != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x6c8) == 0) {
      uVar4 = GetTransientPackage();
      FUN_1417846f0(uVar4,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_res10 = 0;
      uVar5 = UPhysicalMaterial::GetPrivateStaticClass();
      in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
      uVar4 = FUN_1417985e0(uVar5,uVar4,0,0,in_stack_ffffffffffffff68,0,0,0,0);
      *(undefined8 *)(param_1 + 0x6c8) = uVar4;
    }
  }
  FUN_14285e890(param_1 + 0x120,param_1 + 0x118);
  FUN_14285eb90(param_1 + 0x140,param_1 + 0x138);
  FUN_14285ee90(param_1 + 0x160,param_1 + 0x158);
  FUN_14285e590(param_1 + 0x180,param_1 + 0x178);
  FUN_14285f010(param_1 + 0x198,param_1 + 0x1b0);
  FUN_14285e710(param_1 + 0x1d0,param_1 + 0x1e8);
  FUN_14285f190(param_1 + 0x1f8,param_1 + 0x1f0);
  FUN_14285ea10(param_1 + 0x210,param_1 + 0x228);
  FUN_14285e410(param_1 + 600,param_1 + 0x250);
  FUN_14285ed10(param_1 + 0x10d0,param_1 + 0x10e8);
  uVar4 = FSoftObjectPath::ToString(param_1 + 0x38,local_50);
  <lambda_17fb35fe15eba4f6e4b39a422fc5a5db>::operator()(&local_res10,param_1 + 0x30,uVar4);
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  uVar4 = FSoftObjectPath::ToString(param_1 + 0x58,local_50);
  <lambda_17fb35fe15eba4f6e4b39a422fc5a5db>::operator()(&local_res10,param_1 + 0x50,uVar4);
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  uVar4 = FSoftObjectPath::ToString(param_1 + 0x78,local_50);
  <lambda_17fb35fe15eba4f6e4b39a422fc5a5db>::operator()(&local_res10,param_1 + 0x70,uVar4);
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  uVar4 = FSoftObjectPath::ToString(param_1 + 0x98,local_50);
  <lambda_17fb35fe15eba4f6e4b39a422fc5a5db>::operator()(&local_res10,param_1 + 0x90,uVar4);
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  uVar4 = FSoftObjectPath::ToString(param_1 + 0xb8,local_50);
  <lambda_17fb35fe15eba4f6e4b39a422fc5a5db>::operator()(&local_res10,param_1 + 0xb0,uVar4);
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  uVar4 = FSoftObjectPath::ToString(param_1 + 0xd8,local_50);
  <lambda_17fb35fe15eba4f6e4b39a422fc5a5db>::operator()(&local_res10,param_1 + 0xd0,uVar4);
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  plVar7 = (longlong *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xfc) != *(int *)(param_1 + 0x110)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar7);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x108);
  puVar11 = puVar3 + (longlong)*(int *)(param_1 + 0x110) * 2;
  uVar12 = 0;
  if (puVar3 != puVar11) {
    do {
      iVar2 = *(int *)(puVar3 + 1);
      iVar8 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar8 = 0;
      }
      uVar4 = 0;
      if (0 < iVar8) {
        if (iVar2 == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar3;
        }
        uVar4 = UFont::GetPrivateStaticClass();
        in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
        uVar4 = FUN_141799c90(uVar4,0,puVar9,0,in_stack_ffffffffffffff68,0,1);
      }
      iVar2 = *(int *)(param_1 + 0xf8);
      iVar8 = iVar2 + 1;
      *(int *)(param_1 + 0xf8) = iVar8;
      if (*(int *)(param_1 + 0xfc) < iVar8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7);
      }
      puVar3 = puVar3 + 2;
      *(undefined8 *)(*plVar7 + (longlong)iVar2 * 8) = uVar4;
      uVar12 = local_res18;
    } while (puVar3 != puVar11);
  }
  local_68 = *(longlong *)(param_1 + 0x800);
  FString::FString(local_60,param_1 + 0x808);
  if ((*(longlong *)(param_1 + 0x7f8) == 0) && (local_68 != 0)) {
    puVar3 = (undefined8 *)FSoftObjectPath::ToString(&local_68,local_50);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    uVar4 = UObject::GetPrivateStaticClass();
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    lVar6 = FUN_141799830(uVar4,0,puVar9,0,in_stack_ffffffffffffff68,0);
    if (local_50[0] != 0) {
      FMemory::Free();
    }
    if (lVar6 != 0) {
      local_res10 = 0;
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
      uVar4 = FUN_1417985e0(lVar6,param_1,0,0,in_stack_ffffffffffffff68,0,0,0,0);
      FUN_14288d3b0(param_1,uVar4);
    }
  }
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  local_68 = *(longlong *)(param_1 + 0x820);
  FString::FString(local_60,param_1 + 0x828);
  if ((*(longlong *)(param_1 + 0x818) == 0) && (local_68 != 0)) {
    puVar3 = (undefined8 *)FSoftObjectPath::ToString(&local_68,local_50);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    uVar4 = UObject::GetPrivateStaticClass();
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    lVar6 = FUN_141799830(uVar4,0,puVar9,0,in_stack_ffffffffffffff68,0);
    if (local_50[0] != 0) {
      FMemory::Free();
    }
    if (lVar6 != 0) {
      local_res10 = 0;
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
      uVar4 = FUN_1417985e0(lVar6,param_1,0,0,in_stack_ffffffffffffff68,0,0,0,0);
      FUN_14288e610(param_1,uVar4);
    }
  }
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2a0) == 0) {
    lVar6 = FSoftObjectPath::ToString(param_1 + 0x288,local_50);
    uVar12 = 1;
    iVar2 = *(int *)(lVar6 + 8) + -1;
    if (*(int *)(lVar6 + 8) == 0) {
      iVar2 = 0;
    }
    if (iVar2 < 1) goto LAB_14287fac7;
    bVar1 = true;
  }
  else {
LAB_14287fac7:
    bVar1 = false;
  }
  if (((uVar12 & 1) != 0) && (uVar12 = uVar12 & 0xfffffffe, local_50[0] != 0)) {
    FMemory::Free();
  }
  if (bVar1) {
    puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x288,local_50);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    in_stack_ffffffffffffff68 = 0;
    lVar6 = LoadClass<UObject>(0,puVar9,0,0,0);
    if (local_50[0] != 0) {
      FMemory::Free();
    }
    if (lVar6 != 0) {
      local_res10 = 0;
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
      uVar4 = FUN_1417985e0(lVar6,param_1,0,0,in_stack_ffffffffffffff68,0,0,0,0);
      *(undefined8 *)(param_1 + 0x2a0) = uVar4;
    }
  }
  if (*(longlong *)(param_1 + 0x2c0) == 0) {
    uVar12 = uVar12 | 2;
    lVar6 = FSoftObjectPath::ToString(param_1 + 0x2a8,local_50);
    iVar2 = *(int *)(lVar6 + 8) + -1;
    if (*(int *)(lVar6 + 8) == 0) {
      iVar2 = 0;
    }
    if (0 < iVar2) {
      bVar1 = true;
      goto LAB_14287fbbd;
    }
  }
  bVar1 = false;
LAB_14287fbbd:
  if (((uVar12 & 2) != 0) && (local_50[0] != 0)) {
    FMemory::Free();
  }
  if (bVar1) {
    puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x2a8,local_50);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    in_stack_ffffffffffffff68 = 0;
    lVar6 = LoadClass<UObject>(0,puVar9,0,0,0);
    if (local_50[0] != 0) {
      FMemory::Free();
    }
    if (lVar6 != 0) {
      local_res10 = 0;
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
      plVar7 = (longlong *)FUN_1417985e0(lVar6,param_1,0,0,in_stack_ffffffffffffff68,0,0,0,0);
      *(longlong **)(param_1 + 0x2c0) = plVar7;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x410))(plVar7);
      }
    }
  }
  plVar7 = (longlong *)UUserInterfaceSettings::GetPrivateStaticClass();
  lVar6 = plVar7[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar6 = plVar7[0x1f];
  }
  FUN_1428aaff0(lVar6);
  UCollisionProfile::Get();
  if (*(longlong *)(param_1 + 0x10f0) == 0) {
    puVar3 = (undefined8 *)FSoftObjectPath::ToString(param_1 + 0x10f8,local_50);
    if (*(int *)(puVar3 + 1) != 0) {
      puVar10 = (undefined2 *)*puVar3;
    }
    uVar4 = UDataAsset::GetPrivateStaticClass();
    uVar4 = FUN_141799c90(uVar4,0,puVar10,0,in_stack_ffffffffffffff68 & 0xffffffff00000000,0,1);
    *(undefined8 *)(param_1 + 0x10f0) = uVar4;
    if (local_50[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14287fd40 FUN_14287fd40 body=241 status=ok
// SIG undefined FUN_14287fd40(void)

void FUN_14287fd40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *local_18;
  longlong *local_10;
  
  puVar5 = (undefined8 *)operator_new(8);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    *puVar5 = &PTR_StartProfileThreadUsage_1451df228;
  }
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_1451dfc60;
    plVar6[2] = (longlong)puVar5;
  }
  local_18 = puVar5;
  local_10 = plVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_18,puVar5,puVar5);
  if ((undefined8 **)(param_1 + 0xb40) != &local_18) {
    *(undefined8 **)(param_1 + 0xb40) = puVar5;
    local_18 = (undefined8 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb48,&local_10);
    plVar6 = local_10;
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 14287fe40 InitializeRenderingCVarsCaching body=258 status=ok
// SIG undefined InitializeRenderingCVarsCaching(void)

void InitializeRenderingCVarsCaching(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_18;
  int local_10;
  
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = DAT_1468b1f88;
  local_18 = (longlong *)0x0;
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar2[1] = (longlong)FUN_142886790;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res8,&local_18);
  DAT_146b17660 = *puVar4;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_14287ff24;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_14287ff24:
  DAT_146535474 = 3;
  FUN_1428904b0();
  FUN_14288be30();
  return;
}



// FUNCTION 14287ff60 FUN_14287ff60 body=84 status=ok
// SIG undefined FUN_14287ff60(void)

void FUN_14287ff60(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = DAT_146b17740;
  lVar2 = (longlong)DAT_146b17740;
  DAT_146b17740 = DAT_146b17740 + 1;
  if (DAT_146b17744 < DAT_146b17740) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&DAT_146b17738,iVar1);
  }
  FUN_14285fe40(DAT_146b17738 + lVar2 * 0x28,param_1);
  return;
}



// FUNCTION 14287ffc0 FUN_14287ffc0 body=230 status=ok
// SIG undefined FUN_14287ffc0(void)

void FUN_14287ffc0(longlong *param_1,longlong *param_2)

{
  void *_Src;
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 local_58 [8];
  float local_50;
  char local_43;
  undefined1 local_40 [8];
  float local_38;
  char local_2b;
  
  lVar3 = param_2[1];
  (**(code **)(*param_1 + 0x18))(param_1,local_58);
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = uVar4;
  if (0 < (int)lVar3) {
    do {
      uVar5 = (uint)uVar6;
      plVar2 = *(longlong **)(*param_2 + uVar4 * 8);
      (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
      if ((local_50 < local_38) || ((local_43 != '\0' && (local_2b == '\0')))) break;
      if (plVar2 == param_1) {
        return;
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar4 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((longlong)uVar4 < (longlong)(int)lVar3);
  }
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  _Src = (void *)(*param_2 + (longlong)(int)uVar5 * 8);
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 8),_Src,(longlong)(int)(iVar1 - uVar5) << 3);
  *(longlong **)(*param_2 + (longlong)(int)uVar5 * 8) = param_1;
  return;
}



// FUNCTION 1428800b0 FUN_1428800b0 body=1143 status=ok
// SIG undefined FUN_1428800b0(void)

void FUN_1428800b0(longlong param_1,longlong param_2)

{
  double *pdVar1;
  double dVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  char cVar27;
  int iVar28;
  undefined8 *puVar29;
  longlong lVar30;
  undefined8 *puVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  int iVar34;
  ulonglong uVar35;
  longlong lVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  
  if (param_2 != 0) {
    iVar38 = *(int *)(param_1 + 0x18);
    uVar33 = 0;
    uVar32 = uVar33;
    uVar35 = uVar33;
    iVar28 = iVar38;
    if (0 < iVar38) {
      do {
        iVar34 = (int)uVar35;
        lVar36 = *(longlong *)(param_1 + 0x10);
        if (((*(int *)(lVar36 + 0x18 + uVar32) == 0) ||
            (plVar3 = *(longlong **)(lVar36 + 0x10 + uVar32), plVar3 == (longlong *)0x0)) ||
           (cVar27 = (**(code **)(*plVar3 + 0x18))(), cVar27 == '\0')) {
          lVar36 = lVar36 + uVar32;
          if (((*(longlong *)(lVar36 + 0x28) != 0) &&
              (lVar30 = FWeakObjectPtr::Get(lVar36 + 0x20), lVar30 != 0)) &&
             ((lVar30 = UObject::FindFunction(lVar30,*(undefined8 *)(lVar36 + 0x28)), lVar30 != 0 &&
              (lVar36 = FWeakObjectPtr::Get(lVar36 + 0x20), param_2 == lVar36))))
          goto LAB_14288017d;
        }
        else if (((*(int *)(lVar36 + 0x18 + uVar32) != 0) &&
                 (plVar3 = *(longlong **)(lVar36 + 0x10 + uVar32), plVar3 != (longlong *)0x0)) &&
                (cVar27 = (**(code **)(*plVar3 + 8))(plVar3,param_2), cVar27 != '\0')) {
LAB_14288017d:
          FUN_1428875c0(param_1 + 0x10,uVar35,1);
          iVar34 = iVar34 + -1;
          uVar32 = uVar32 - 0x90;
        }
        iVar28 = *(int *)(param_1 + 0x18);
        uVar32 = uVar32 + 0x90;
        uVar35 = (ulonglong)(iVar34 + 1U);
      } while ((int)(iVar34 + 1U) < iVar28);
    }
    if (iVar38 != iVar28) {
      iVar38 = *(int *)(param_1 + 0x18);
      lVar36 = *(longlong *)(param_1 + 0x10);
      iVar28 = (iVar38 + -2) / 2;
      if (-1 < iVar28) {
        iVar34 = iVar28 * 2 + 1;
        iVar4 = iVar34;
        iVar37 = iVar28;
joined_r0x000142880205:
        do {
          if (iVar34 < iVar38) {
            iVar39 = iVar28 * 2 + 1;
            iVar34 = iVar28 * 2 + 2;
            iVar40 = iVar39;
            if ((iVar34 < iVar38) &&
               (dVar2 = *(double *)(lVar36 + 8 + (longlong)iVar34 * 0x90),
               pdVar1 = (double *)(lVar36 + 8 + (longlong)iVar39 * 0x90), iVar40 = iVar34,
               *pdVar1 <= dVar2 && dVar2 != *pdVar1)) {
              iVar40 = iVar39;
            }
            puVar31 = (undefined8 *)((longlong)iVar40 * 0x90 + lVar36);
            puVar29 = (undefined8 *)((longlong)iVar28 * 0x90 + lVar36);
            if ((double)puVar31[1] <= (double)puVar29[1] && (double)puVar29[1] != (double)puVar31[1]
               ) {
              if (puVar29 != puVar31) {
                uVar8 = puVar31[1];
                uVar9 = *puVar29;
                uVar10 = puVar29[1];
                uVar11 = puVar29[2];
                uVar12 = puVar29[3];
                uVar13 = puVar29[4];
                uVar14 = puVar29[5];
                uVar15 = puVar29[6];
                uVar16 = puVar29[7];
                uVar17 = puVar29[8];
                uVar18 = puVar29[9];
                uVar19 = puVar29[10];
                uVar20 = puVar29[0xb];
                uVar21 = puVar29[0xc];
                uVar22 = puVar29[0xd];
                uVar23 = puVar29[0xe];
                uVar24 = puVar29[0xf];
                uVar25 = puVar29[0x10];
                uVar26 = puVar29[0x11];
                *puVar29 = *puVar31;
                puVar29[1] = uVar8;
                uVar8 = puVar31[3];
                puVar29[2] = puVar31[2];
                puVar29[3] = uVar8;
                uVar8 = puVar31[5];
                puVar29[4] = puVar31[4];
                puVar29[5] = uVar8;
                uVar8 = puVar31[7];
                puVar29[6] = puVar31[6];
                puVar29[7] = uVar8;
                uVar8 = puVar31[9];
                puVar29[8] = puVar31[8];
                puVar29[9] = uVar8;
                uVar8 = puVar31[0xb];
                puVar29[10] = puVar31[10];
                puVar29[0xb] = uVar8;
                uVar8 = puVar31[0xd];
                puVar29[0xc] = puVar31[0xc];
                puVar29[0xd] = uVar8;
                uVar8 = puVar31[0xf];
                puVar29[0xe] = puVar31[0xe];
                puVar29[0xf] = uVar8;
                uVar5 = *(undefined4 *)((longlong)puVar31 + 0x84);
                uVar6 = *(undefined4 *)(puVar31 + 0x11);
                uVar7 = *(undefined4 *)((longlong)puVar31 + 0x8c);
                *(undefined4 *)(puVar29 + 0x10) = *(undefined4 *)(puVar31 + 0x10);
                *(undefined4 *)((longlong)puVar29 + 0x84) = uVar5;
                *(undefined4 *)(puVar29 + 0x11) = uVar6;
                *(undefined4 *)((longlong)puVar29 + 0x8c) = uVar7;
                *puVar31 = uVar9;
                puVar31[1] = uVar10;
                puVar31[2] = uVar11;
                puVar31[3] = uVar12;
                puVar31[4] = uVar13;
                puVar31[5] = uVar14;
                puVar31[6] = uVar15;
                puVar31[7] = uVar16;
                puVar31[8] = uVar17;
                puVar31[9] = uVar18;
                puVar31[10] = uVar19;
                puVar31[0xb] = uVar20;
                puVar31[0xc] = uVar21;
                puVar31[0xd] = uVar22;
                puVar31[0xe] = uVar23;
                puVar31[0xf] = uVar24;
                puVar31[0x10] = uVar25;
                puVar31[0x11] = uVar26;
              }
              iVar34 = iVar40 * 2 + 1;
              iVar28 = iVar40;
              goto joined_r0x000142880205;
            }
          }
          iVar34 = iVar4 + -2;
          iVar28 = iVar37 + -1;
          iVar4 = iVar34;
          iVar37 = iVar28;
        } while (-1 < iVar28);
      }
    }
    uVar32 = uVar33;
    uVar35 = uVar33;
    if (0 < *(int *)(param_1 + 0x28)) {
      do {
        iVar38 = (int)uVar35;
        lVar36 = *(longlong *)(param_1 + 0x20);
        if (((*(int *)(lVar36 + 0x18 + uVar32) == 0) ||
            (plVar3 = *(longlong **)(lVar36 + 0x10 + uVar32), plVar3 == (longlong *)0x0)) ||
           (cVar27 = (**(code **)(*plVar3 + 0x18))(), cVar27 == '\0')) {
          lVar36 = lVar36 + uVar32;
          if (((*(longlong *)(lVar36 + 0x28) != 0) &&
              (lVar30 = FWeakObjectPtr::Get(lVar36 + 0x20), lVar30 != 0)) &&
             ((lVar30 = UObject::FindFunction(lVar30,*(undefined8 *)(lVar36 + 0x28)), lVar30 != 0 &&
              (lVar36 = FWeakObjectPtr::Get(lVar36 + 0x20), param_2 == lVar36))))
          goto LAB_1428803ed;
        }
        else if (((*(int *)(lVar36 + 0x18 + uVar32) != 0) &&
                 (plVar3 = *(longlong **)(lVar36 + 0x10 + uVar32), plVar3 != (longlong *)0x0)) &&
                (cVar27 = (**(code **)(*plVar3 + 8))(plVar3,param_2), cVar27 != '\0')) {
LAB_1428803ed:
          FUN_1428875c0(param_1 + 0x20,uVar35,1);
          iVar38 = iVar38 + -1;
          uVar32 = uVar32 - 0x90;
        }
        uVar32 = uVar32 + 0x90;
        uVar35 = (ulonglong)(iVar38 + 1U);
      } while ((int)(iVar38 + 1U) < *(int *)(param_1 + 0x28));
    }
    uVar32 = uVar33;
    if (0 < *(int *)(param_1 + 0x38)) {
      do {
        iVar38 = (int)uVar32;
        lVar36 = *(longlong *)(param_1 + 0x30);
        if (((*(int *)(lVar36 + 0x18 + uVar33) == 0) ||
            (plVar3 = *(longlong **)(lVar36 + 0x10 + uVar33), plVar3 == (longlong *)0x0)) ||
           (cVar27 = (**(code **)(*plVar3 + 0x18))(), cVar27 == '\0')) {
          lVar36 = lVar36 + uVar33;
          if (((*(longlong *)(lVar36 + 0x28) != 0) &&
              (lVar30 = FWeakObjectPtr::Get(lVar36 + 0x20), lVar30 != 0)) &&
             ((lVar30 = UObject::FindFunction(lVar30,*(undefined8 *)(lVar36 + 0x28)), lVar30 != 0 &&
              (lVar36 = FWeakObjectPtr::Get(lVar36 + 0x20), param_2 == lVar36))))
          goto LAB_1428804ad;
        }
        else if (((*(int *)(lVar36 + 0x18 + uVar33) != 0) &&
                 (plVar3 = *(longlong **)(lVar36 + 0x10 + uVar33), plVar3 != (longlong *)0x0)) &&
                (cVar27 = (**(code **)(*plVar3 + 8))(plVar3,param_2), cVar27 != '\0')) {
LAB_1428804ad:
          FUN_1428875c0(param_1 + 0x30,uVar32,1);
          iVar38 = iVar38 + -1;
          uVar33 = uVar33 - 0x90;
        }
        uVar33 = uVar33 + 0x90;
        uVar32 = (ulonglong)(iVar38 + 1U);
      } while ((int)(iVar38 + 1U) < *(int *)(param_1 + 0x38));
    }
    cVar27 = FUN_142880e60(param_1 + 0x60,param_2);
    if (cVar27 != '\0') {
      FTimerData::Clear(param_1 + 0x50);
    }
  }
  return;
}



// FUNCTION 142880530 FUN_142880530 body=358 status=ok
// SIG undefined FUN_142880530(void)

void FUN_142880530(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res10 [24];
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xd0) == lVar3) {
    lVar3 = param_1 + 0x50;
    uVar6 = 0xffffffff;
  }
  else {
    uVar4 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x80);
      uVar6 = uVar4;
      uVar7 = uVar4;
      do {
        iVar5 = (int)uVar6;
        if (*plVar2 == lVar3) {
          if (iVar5 != -1) {
            lVar3 = (longlong)iVar5 * 0x90 + *(longlong *)(param_1 + 0x10);
            goto LAB_14288062a;
          }
          break;
        }
        uVar6 = (ulonglong)(iVar5 + 1);
        uVar7 = uVar7 + 1;
        plVar2 = plVar2 + 0x12;
      } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x18));
    }
    if (0 < *(int *)(param_1 + 0x28)) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x80);
      uVar6 = uVar4;
      uVar7 = uVar4;
      do {
        iVar5 = (int)uVar6;
        if (*plVar2 == lVar3) {
          if (iVar5 != -1) {
            lVar3 = (longlong)iVar5 * 0x90 + *(longlong *)(param_1 + 0x20);
            goto LAB_14288062a;
          }
          break;
        }
        uVar6 = (ulonglong)(iVar5 + 1);
        uVar7 = uVar7 + 1;
        plVar2 = plVar2 + 0x12;
      } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x28));
    }
    if (*(int *)(param_1 + 0x38) < 1) {
      return;
    }
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0x80);
    uVar6 = uVar4;
    while (iVar5 = (int)uVar6, *plVar2 != lVar3) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar4 = uVar4 + 1;
      plVar2 = plVar2 + 0x12;
      if ((longlong)*(int *)(param_1 + 0x38) <= (longlong)uVar4) {
        return;
      }
    }
    if (iVar5 == -1) {
      return;
    }
    lVar3 = (longlong)iVar5 * 0x90 + *(longlong *)(param_1 + 0x30);
  }
LAB_14288062a:
  if (lVar3 != 0) {
    cVar1 = *(char *)(lVar3 + 1);
    if (cVar1 == '\0') {
      FUN_1428875c0(param_1 + 0x30,uVar6,1);
      return;
    }
    if (cVar1 == '\x01') {
      FUN_14285e0e0(param_1 + 0x10,uVar6,local_res10,0);
      return;
    }
    if (cVar1 == '\x02') {
      FUN_1428875c0(param_1 + 0x20,uVar6,1);
      return;
    }
    if (cVar1 == '\x03') {
      FTimerData::Clear(param_1 + 0x50);
      return;
    }
  }
  return;
}



// FUNCTION 1428806a0 InternalGetTimerElapsed body=76 status=ok
// SIG undefined InternalGetTimerElapsed(void)

float FTimerManager::InternalGetTimerElapsed(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    return -1.0;
  }
  if ((*(char *)(param_2 + 1) != '\x01') && (*(char *)(param_2 + 1) != '\x03')) {
    return (float)((double)*(float *)(param_2 + 4) - *(double *)(param_2 + 8));
  }
  return (float)((double)*(float *)(param_2 + 4) -
                (*(double *)(param_2 + 8) - *(double *)(param_1 + 0x40)));
}



// FUNCTION 1428806f0 InternalGetTimerRemaining body=60 status=ok
// SIG undefined InternalGetTimerRemaining(void)

float FTimerManager::InternalGetTimerRemaining(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    return -1.0;
  }
  if (*(char *)(param_2 + 1) != '\x01') {
    if (*(char *)(param_2 + 1) != '\x03') {
      return (float)*(double *)(param_2 + 8);
    }
    return 0.0;
  }
  return (float)(*(double *)(param_2 + 8) - *(double *)(param_1 + 0x40));
}



// FUNCTION 142880730 FUN_142880730 body=284 status=ok
// SIG undefined FUN_142880730(void)

void FUN_142880730(longlong param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res10 [8];
  
  if ((param_2 != (byte *)0x0) && (bVar1 = param_2[1], bVar1 != 2)) {
    if ((bVar1 != 3) || ((*param_2 & 1) != 0)) {
      iVar2 = *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0x28) = iVar2 + 1;
      if (*(int *)(param_1 + 0x2c) < iVar2 + 1) {
        TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                  (param_1 + 0x20,iVar2);
      }
      lVar4 = (longlong)iVar2 * 0x90;
      FUN_1428610d0(*(longlong *)(param_1 + 0x20) + lVar4,param_2);
      lVar3 = *(longlong *)(param_1 + 0x20);
      *(undefined1 *)(lVar4 + 1 + lVar3) = 2;
      if (bVar1 != 0) {
        *(double *)(lVar4 + 8 + lVar3) =
             *(double *)(lVar4 + 8 + lVar3) - *(double *)(param_1 + 0x40);
      }
    }
    if (bVar1 == 0) {
      FUN_1428875c0(param_1 + 0x30,param_3,1);
    }
    else {
      if (bVar1 == 1) {
        FUN_14285e0e0(param_1 + 0x10,param_3,local_res10,0);
        return;
      }
      if (bVar1 == 3) {
        FTimerData::Clear(param_1 + 0x50);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142880850 FUN_142880850 body=669 status=ok
// SIG undefined FUN_142880850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142880850(longlong param_1,longlong *param_2,longlong param_3,float param_4,byte param_5,
                  float param_6)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined1 auStack_158 [32];
  undefined1 local_138 [80];
  byte local_e8 [4];
  float local_e4;
  double local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if (*param_2 != 0) {
    FUN_142880530();
  }
  if (0.0 < param_4) {
    if (*param_2 == 0) {
      DAT_146b17158 = DAT_146b17158 + 1;
      *param_2 = DAT_146b17158;
    }
    local_e8[0] = local_e8[0] & 0xfc;
    local_e8[1] = 1;
    local_e0 = 0.0;
    local_d8 = 0;
    local_d0 = 0;
    local_e4 = 0.0;
    FWeakObjectPtr::operator=(&local_c8,0);
    local_c0 = 0;
    local_b8[0] = AK::MemoryMgr::StartProfileThreadUsage;
    local_68 = *param_2;
    local_88 = (longlong *)0x0;
    local_78 = 0;
    local_60 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_d8,param_3);
    local_c8 = *(undefined4 *)(param_3 + 0x10);
    local_c4 = *(undefined4 *)(param_3 + 0x14);
    local_c0 = *(undefined8 *)(param_3 + 0x18);
    lVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_138,param_3 + 0x20);
    FGenericPlatformMemory::MemswapGreaterThan8(lVar3,local_b8,0x50);
    if (*(int *)(lVar3 + 0x40) != 0) {
      plVar6 = *(longlong **)(lVar3 + 0x30);
      if (*(longlong **)(lVar3 + 0x30) == (longlong *)0x0) {
        plVar6 = (longlong *)(lVar3 + 0x10);
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (*(longlong *)(lVar3 + 0x30) != 0) {
      FMemory::Free();
    }
    if ((local_68 != 0) || (cVar2 = FUN_142880dc0(&local_d8), cVar2 != '\0')) {
      local_e8[0] = local_e8[0] & 0xfe | param_5;
      local_e4 = param_4;
      cVar2 = FUN_142880dc0(&local_d8);
      local_e8[0] = cVar2 * '\x02' | local_e8[0] & 0xfd;
      if ((*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) &&
         ((lVar3 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x148))(), lVar3 != 0 &&
          (lVar4 = UWorld::GetActiveLevelCollection(lVar3), lVar4 != 0)))) {
        puVar5 = (undefined4 *)UWorld::GetActiveLevelCollection(lVar3);
        local_60 = *puVar5;
      }
      if (param_6 < 0.0) {
        param_6 = param_4;
      }
      local_e0 = (double)param_6;
      if (*(longlong *)(param_1 + 0xe0) == DAT_1468c21b0) {
        local_e0 = local_e0 + *(double *)(param_1 + 0x40);
        local_e8[1] = 1;
        TArray<FTimerData,FDefaultAllocator>::HeapPush(param_1 + 0x10,local_e8);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x38);
        local_e8[1] = 0;
        *(int *)(param_1 + 0x38) = iVar1 + 1;
        if (*(int *)(param_1 + 0x3c) < iVar1 + 1) {
          TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                    (param_1 + 0x30,iVar1);
        }
        FUN_1428610d0((longlong)iVar1 * 0x90 + *(longlong *)(param_1 + 0x30),local_e8);
      }
    }
    if (local_78 != 0) {
      plVar6 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar6 = local_88;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
    return;
  }
  return;
}



// FUNCTION 142880af0 FUN_142880af0 body=422 status=ok
// SIG undefined FUN_142880af0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142880af0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined1 auStack_128 [32];
  undefined1 local_108 [80];
  byte local_b8 [4];
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_b8[0] = local_b8[0] & 0xfc;
  local_b8[1] = 1;
  local_b4 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FWeakObjectPtr::operator=(&local_98,0);
  local_90 = 0;
  local_88[0] = AK::MemoryMgr::StartProfileThreadUsage;
  local_58 = (longlong *)0x0;
  local_b8[0] = local_b8[0] & 0xfe | 2;
  local_48 = 0;
  local_38 = 0;
  local_30 = 0;
  local_b4 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_a8,param_2);
  local_98 = *(undefined4 *)(param_2 + 0x10);
  local_94 = *(undefined4 *)(param_2 + 0x14);
  local_90 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_108,param_2 + 0x20);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar1,local_88,0x50);
  if (*(int *)(lVar1 + 0x40) != 0) {
    plVar4 = *(longlong **)(lVar1 + 0x30);
    if (*(longlong **)(lVar1 + 0x30) == (longlong *)0x0) {
      plVar4 = (longlong *)(lVar1 + 0x10);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (*(longlong *)(lVar1 + 0x30) != 0) {
    FMemory::Free();
  }
  local_b0 = *(undefined8 *)(param_1 + 0x40);
  local_b8[1] = 1;
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x148))();
    if (lVar1 != 0) {
      lVar2 = UWorld::GetActiveLevelCollection(lVar1);
      if (lVar2 != 0) {
        puVar3 = (undefined4 *)UWorld::GetActiveLevelCollection(lVar1);
        local_30 = *puVar3;
      }
    }
  }
  TArray<FTimerData,FDefaultAllocator>::HeapPush(param_1 + 0x10,local_b8);
  if (local_48 != 0) {
    plVar4 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar4 = local_58;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
  return;
}



// FUNCTION 142880ca0 FUN_142880ca0 body=205 status=ok
// SIG undefined FUN_142880ca0(void)

void FUN_142880ca0(longlong param_1,int param_2)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 != -1) {
    lVar3 = (longlong)param_2 * 0x90 + *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0xe0) == DAT_1468c21b0) {
      dVar1 = *(double *)(param_1 + 0x40);
      *(undefined1 *)(lVar3 + 1) = 1;
      *(double *)(lVar3 + 8) = dVar1 + *(double *)(lVar3 + 8);
      TArray<FTimerData,FDefaultAllocator>::HeapPush(param_1 + 0x10,lVar3);
    }
    else {
      *(undefined1 *)(lVar3 + 1) = 0;
      iVar2 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = iVar2 + 1;
      if (*(int *)(param_1 + 0x3c) < iVar2 + 1) {
        TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(param_1 + 0x30),iVar2);
      }
      FUN_1428610d0((longlong)iVar2 * 0x90 + *(longlong *)(param_1 + 0x30),lVar3);
    }
    FUN_1428875c0(param_1 + 0x20,param_2,1);
  }
  return;
}



// FUNCTION 142880d70 FUN_142880d70 body=36 status=ok
// SIG undefined FUN_142880d70(void)

void FUN_142880d70(longlong *param_1)

{
  (**(code **)(*param_1 + 0x168))();
                    /* WARNING: Could not recover jumptable at 0x000142880d8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))(param_1);
  return;
}



// FUNCTION 142880dc0 FUN_142880dc0 body=149 status=ok
// SIG undefined FUN_142880dc0(void)

undefined8 FUN_142880dc0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*(longlong *)*param_1 + 0x18))(), cVar1 != '\0')) {
    return 1;
  }
  if (((param_1[3] != 0) && (lVar2 = FWeakObjectPtr::Get(param_1 + 2), lVar2 != 0)) &&
     (lVar2 = UObject::FindFunction(lVar2,param_1[3]), lVar2 != 0)) {
    return 1;
  }
  if ((int)param_1[0xc] != 0) {
    plVar3 = (longlong *)0x0;
    if (param_1[10] == 0) {
      plVar3 = param_1 + 6;
    }
    if (plVar3 != (longlong *)0x0 || param_1[10] != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142880e60 FUN_142880e60 body=161 status=ok
// SIG undefined FUN_142880e60(void)

undefined8 FUN_142880e60(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((((int)param_1[1] == 0) || ((longlong *)*param_1 == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)*param_1 + 0x18))(), cVar1 == '\0')) {
    if (((param_1[3] != 0) && (lVar2 = FWeakObjectPtr::Get(param_1 + 2), lVar2 != 0)) &&
       ((lVar2 = UObject::FindFunction(lVar2,param_1[3]), lVar2 != 0 &&
        ((param_2 != 0 && (lVar2 = FWeakObjectPtr::Get(param_1 + 2), param_2 == lVar2)))))) {
      return 1;
    }
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if ((int)param_1[1] != 0) {
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return 0;
    }
    cVar1 = (**(code **)(*param_1 + 8))(param_1,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 142880f10 FUN_142880f10 body=10 status=ok
// SIG undefined FUN_142880f10(void)

byte FUN_142880f10(longlong param_1)

{
  return *(byte *)(param_1 + 0x179) & 1;
}



// FUNCTION 142880f20 FUN_142880f20 body=13 status=ok
// SIG undefined FUN_142880f20(void)

byte FUN_142880f20(longlong param_1)

{
  return *(byte *)(param_1 + 0x179) >> 2 & 1;
}



// FUNCTION 142880f30 IsPreparingMapChange body=11 status=ok
// SIG undefined IsPreparingMapChange(void)

bool UEngine::IsPreparingMapChange(undefined8 param_1,longlong param_2)

{
  return 0 < *(int *)(param_2 + 0x1e8);
}



// FUNCTION 142880f50 FUN_142880f50 body=15 status=ok
// SIG undefined FUN_142880f50(void)

bool FUN_142880f50(longlong param_1)

{
  return (*(byte *)(param_1 + 0x179) & 6) == 6;
}



// FUNCTION 142880f60 FUN_142880f60 body=122 status=ok
// SIG undefined FUN_142880f60(void)

bool FUN_142880f60(longlong param_1,longlong param_2)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_2 != 0) {
    lVar3 = FUN_1428749e0();
    return 1 < *(int *)(lVar3 + 8);
  }
  for (iVar4 = 0; (-1 < iVar4 && (iVar4 < *(int *)(param_1 + 0xc20))); iVar4 = iVar4 + 1) {
    pcVar1 = *(char **)(*(longlong *)(param_1 + 0xc18) + (longlong)iVar4 * 8);
    if ((*pcVar1 != '\x06') && (*(longlong *)(pcVar1 + 0x240) != 0)) {
      iVar2 = FUN_14046e5c0();
      if (1 < iVar2) {
        return true;
      }
    }
  }
  return false;
}



// FUNCTION 142881000 FUN_142881000 body=67 status=ok
// SIG undefined FUN_142881000(void)

undefined8 FUN_142881000(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x188))(param_2), cVar1 == '\0')) {
    return 0;
  }
  if ((*(undefined8 **)(param_1 + 0xab8) != (undefined8 *)0x0) &&
     (cVar1 = (**(code **)**(undefined8 **)(param_1 + 0xab8))(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 142881050 FUN_142881050 body=608 status=ok
// SIG undefined FUN_142881050(void)

ulonglong FUN_142881050(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  uint *puVar13;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  plVar11 = *(longlong **)(param_1 + 0xc18);
  plVar6 = (longlong *)(longlong)*(int *)(param_1 + 0xc20);
  plVar2 = plVar11 + (longlong)plVar6;
  do {
    if (plVar11 == plVar2) {
      return (ulonglong)plVar6 & 0xffffffffffffff00;
    }
    lVar10 = ((longlong *)*plVar11)[0x51];
    plVar6 = (longlong *)*plVar11;
    if ((lVar10 != 0) &&
       (plVar7 = (longlong *)UWorld::FindCollectionByType(lVar10,1), plVar6 = plVar7,
       plVar7 != (longlong *)0x0)) {
      uStack_94 = 1;
      plVar6 = plVar7 + 5;
      local_98 = 0;
      uVar3 = *(uint *)(plVar7 + 10);
      puVar1 = (uint *)(plVar7 + 7);
      uStack_84 = 0;
      iStack_80 = 0;
      if (uVar3 != 0) {
        puVar13 = (uint *)plVar7[9];
        if ((uint *)plVar7[9] == (uint *)0x0) {
          puVar13 = puVar1;
        }
        uVar4 = *puVar13;
        iStack_80 = 0;
        local_98 = 0;
        while (uVar4 == 0) {
          lVar10 = (longlong)local_98;
          iStack_80 = iStack_80 + 0x20;
          iVar8 = local_98 + 1;
          bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
          local_98 = iVar8;
          if (bVar5) goto LAB_14288115f;
          uVar4 = puVar13[lVar10 + 1];
        }
        uStack_94 = -uVar4 & uVar4;
        iVar8 = 0x1f;
        if (uStack_94 != 0) {
          for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uStack_94 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        uStack_84 = (iStack_80 - iVar8) + 0x1f;
        if ((int)uVar3 < (int)uStack_84) {
LAB_14288115f:
          uStack_84 = uVar3;
        }
      }
      uVar4 = *(uint *)(plVar7 + 10);
      uStack_60 = CONCAT44(uStack_84,0xffffffff);
      local_58 = CONCAT44(uStack_7c,iStack_80);
      uStack_48 = CONCAT44(uStack_94,local_98);
      uVar12 = uVar4 & 0xffffffe0;
      iStack_70 = local_98;
      uStack_6c = uStack_94;
      local_68 = puVar1;
      local_50 = plVar6;
      puStack_40 = puVar1;
      uStack_38 = uStack_60;
      uStack_30 = local_58;
      uStack_84 = uVar4;
      if (uVar4 != uVar3) {
        puVar13 = (uint *)plVar7[9];
        if ((uint *)plVar7[9] == (uint *)0x0) {
          puVar13 = puVar1;
        }
        uVar9 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
        iVar8 = (int)uVar4 >> 5;
        while (uVar9 == 0) {
          uVar12 = uVar12 + 0x20;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
          goto LAB_142881236;
          uVar9 = puVar13[(longlong)iVar8 + 1];
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
        uStack_84 = (uVar12 - iVar8) + 0x1f;
        if ((int)uVar3 < (int)uStack_84) {
LAB_142881236:
          uStack_84 = uVar3;
        }
      }
      while( true ) {
        if ((uStack_60._4_4_ == uStack_84) && (local_68 == puVar1)) break;
        if (*(longlong *)(*(longlong *)(*plVar6 + (longlong)(int)uStack_60._4_4_ * 0x10) + 0x20) ==
            param_2) {
          return CONCAT71((int7)((ulonglong)*plVar6 >> 8),1);
        }
        uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      }
    }
    plVar11 = plVar11 + 1;
  } while( true );
}



// FUNCTION 1428812b0 K2_FindDynamicTimerHandle body=258 status=ok
// SIG undefined K2_FindDynamicTimerHandle(void)

undefined8 *
FTimerManager::K2_FindDynamicTimerHandle(longlong param_1,undefined8 *param_2,int *param_3)

{
  char cVar1;
  longlong lVar2;
  int local_18;
  int local_14;
  longlong local_10;
  
  if (((*(int *)(param_1 + 0x70) == *param_3) && (*(int *)(param_1 + 0x74) == param_3[1])) ||
     ((cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x70), cVar1 == '\0' &&
      (cVar1 = FWeakObjectPtr::IsValid(param_3), cVar1 == '\0')))) {
    local_10 = *(longlong *)(param_3 + 2);
    if (*(longlong *)(param_1 + 0x78) == local_10) {
      *param_2 = *(undefined8 *)(param_1 + 0xd0);
      return param_2;
    }
  }
  else {
    local_10 = *(longlong *)(param_3 + 2);
  }
  local_18 = *param_3;
  local_14 = param_3[1];
  lVar2 = TArray<FTimerData,FDefaultAllocator>::
          FindByPredicate<<lambda_07ce35c915d65c5b242f7aafe1be5223>_>(param_1 + 0x10,&local_18);
  if (lVar2 == 0) {
    local_18 = *param_3;
    local_14 = param_3[1];
    local_10 = *(longlong *)(param_3 + 2);
    lVar2 = TArray<FTimerData,FDefaultAllocator>::
            FindByPredicate<<lambda_07ce35c915d65c5b242f7aafe1be5223>_>(param_1 + 0x20,&local_18);
    if (lVar2 == 0) {
      local_18 = *param_3;
      local_14 = param_3[1];
      local_10 = *(longlong *)(param_3 + 2);
      lVar2 = TArray<FTimerData,FDefaultAllocator>::
              FindByPredicate<<lambda_07ce35c915d65c5b242f7aafe1be5223>_>(param_1 + 0x30,&local_18);
      if (lVar2 == 0) {
        *param_2 = 0;
        return param_2;
      }
    }
  }
  *param_2 = *(undefined8 *)(lVar2 + 0x80);
  return param_2;
}



// FUNCTION 1428813c0 FUN_1428813c0 body=90 status=ok
// SIG undefined FUN_1428813c0(void)

longlong FUN_1428813c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
  while( true ) {
    if (plVar2 == plVar1) {
      lVar3 = FUN_14286b170(DAT_146b17150,0);
      return lVar3 + 0xe8;
    }
    if (*(longlong *)(*plVar2 + 0x288) == param_2) break;
    plVar2 = plVar2 + 1;
  }
  return *plVar2 + 0xe8;
}



// FUNCTION 142881420 FUN_142881420 body=6725 status=ok
// SIG undefined FUN_142881420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_142881420(longlong *param_1,byte *param_2,longlong param_3,longlong *param_4,longlong **param_5)

{
  byte *pbVar1;
  uint *puVar2;
  longlong **pplVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  void *_Src;
  double dVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  short *psVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int *piVar20;
  longlong *plVar21;
  undefined8 uVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  longlong *plVar27;
  uint uVar28;
  longlong *plVar29;
  ulonglong uVar30;
  undefined2 *puVar31;
  wchar_t *pwVar32;
  longlong lVar33;
  longlong *plVar34;
  ulonglong uVar35;
  LARGE_INTEGER LVar36;
  longlong lVar37;
  undefined2 *puVar38;
  int iVar39;
  ulonglong uVar40;
  undefined8 *puVar41;
  bool bVar42;
  undefined1 auStack_178 [32];
  LARGE_INTEGER local_158;
  longlong *local_148;
  undefined8 local_140;
  LARGE_INTEGER local_138;
  ulonglong local_130;
  longlong *local_128;
  undefined8 *local_120;
  longlong local_118;
  longlong local_110;
  longlong *local_108;
  ulonglong local_100;
  LARGE_INTEGER local_f8;
  undefined8 *local_f0;
  longlong **local_e8;
  byte *local_e0 [2];
  uint local_d0 [2];
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  int local_b0;
  char local_ac;
  int local_a8;
  longlong local_a0;
  longlong local_98;
  int local_90;
  undefined8 local_80;
  char local_78;
  ulonglong local_60;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_e8 = param_5;
  local_128 = param_1;
  local_118 = param_3;
  local_108 = param_4;
  local_e0[0] = param_2;
  lVar12 = FUN_1415d7fb0();
  AK::MemoryMgr::StartProfileThreadUsage(lVar12);
  plVar34 = (longlong *)0x0;
  if (*param_5 != (longlong *)&DAT_1451c98cc) {
    *(undefined4 *)(param_5 + 1) = 0;
    iVar14 = 0;
    plVar27 = plVar34;
    if (*(int *)((longlong)param_5 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5);
      plVar27 = (longlong *)(ulonglong)*(uint *)(param_5 + 1);
      iVar14 = *(int *)((longlong)param_5 + 0xc);
    }
    if (iVar14 < (int)plVar27) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5);
    }
  }
  lVar12 = FUN_14168db90();
  AK::MemoryMgr::StartProfileThreadUsage(lVar12);
  puVar41 = (undefined8 *)(param_3 + 0x28);
  if (*(int *)(param_3 + 0x30) == 0) {
    puVar38 = &DAT_143f3eda8;
  }
  else {
    puVar38 = (undefined2 *)*puVar41;
  }
  local_f0 = puVar41;
  FUN_1415af970(puVar38,L"LoadMap",L"PreLoad");
  if (*(longlong *)(param_2 + 0x288) != 0) {
    *(undefined1 *)(*(longlong *)(param_2 + 0x288) + 0x700) = 0;
  }
  bVar42 = false;
  DAT_1464b57cc = DAT_1464b57cc + 1;
  lVar37 = (longlong)(DAT_1464b57c0 + -1);
  if (-1 < DAT_1464b57c0 + -1) {
    lVar33 = lVar37 << 4;
    bVar42 = false;
    do {
      if (((*(int *)(lVar33 + 8 + DAT_1464b57b8) == 0) ||
          (plVar27 = *(longlong **)(lVar33 + DAT_1464b57b8), plVar27 == (longlong *)0x0)) ||
         (cVar11 = (**(code **)(*plVar27 + 0x40))(plVar27,puVar41), cVar11 == '\0')) {
        bVar42 = true;
      }
      lVar33 = lVar33 + -0x10;
      lVar37 = lVar37 + -1;
    } while (-1 < lVar37);
  }
  iVar14 = DAT_1464b57c0;
  DAT_1464b57cc = DAT_1464b57cc + -1;
  if ((bVar42) && (DAT_1464b57cc < 1)) {
    plVar27 = plVar34;
    plVar21 = plVar34;
    if (0 < DAT_1464b57c0) {
      do {
        if (((*(int *)((longlong)plVar27 + DAT_1464b57b8 + 8) == 0) ||
            (*(longlong **)((longlong)plVar27 + DAT_1464b57b8) == (longlong *)0x0)) ||
           (cVar11 = (**(code **)(**(longlong **)((longlong)plVar27 + DAT_1464b57b8) + 0x10))(),
           cVar11 != '\0')) {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464b57b8,plVar21,1,1);
        }
        else {
          plVar21 = (longlong *)(ulonglong)((int)plVar21 + 1);
          plVar27 = plVar27 + 2;
        }
      } while ((int)plVar21 < DAT_1464b57c0);
    }
    _DAT_1464b57c8 = DAT_1464b57c0 * 2;
    if (_DAT_1464b57c8 < 3) {
      _DAT_1464b57c8 = 2;
    }
    if ((_DAT_1464b57c8 < iVar14) && (DAT_1464b57c4 != DAT_1464b57c0)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464b57b8);
    }
  }
  FUN_1428501d0();
  plVar27 = local_128;
  *(uint *)(local_128 + 0x182) = *(uint *)(local_128 + 0x182) & 0xfffffffe;
  if ((*(longlong *)(param_2 + 0x288) != 0) &&
     (*(longlong *)(*(longlong *)(param_2 + 0x288) + 0x30) != 0)) {
    lVar37 = UObjectBaseUtility::GetOutermost();
    local_f8 = *(LARGE_INTEGER *)(lVar37 + 0x18);
    FName::ToString(&local_f8,&local_148);
    UEngine::CleanupPackagesToFullyLoad(plVar27,param_2,0,&local_148);
    if (local_148 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  local_148 = (longlong *)0x0;
  local_140 = 0;
  UEngine::CleanupPackagesToFullyLoad(plVar27,param_2,1,&local_148);
  local_148 = (longlong *)0x0;
  local_140 = 0;
  UEngine::CleanupPackagesToFullyLoad(plVar27,param_2,2,&local_148);
  local_148 = (longlong *)0x0;
  local_140 = 0;
  UEngine::CleanupPackagesToFullyLoad(plVar27,param_2,4,&local_148);
  FUN_1416f7d70(0xffffffff);
  param_2[0x1e8] = 0;
  param_2[0x1e9] = 0;
  param_2[0x1ea] = 0;
  param_2[0x1eb] = 0;
  if (*(int *)(param_2 + 0x1ec) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2 + 0x1e0,0);
  }
  param_2[0x1f8] = 0;
  param_2[0x1f9] = 0;
  param_2[0x1fa] = 0;
  param_2[0x1fb] = 0;
  if (*(int *)(param_2 + 0x1fc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2 + 0x1f0,0);
  }
  pbVar1 = param_2 + 0x200;
  if (*(undefined **)pbVar1 != &DAT_1451ca0b4) {
    param_2[0x208] = 0;
    param_2[0x209] = 0;
    param_2[0x20a] = 0;
    param_2[0x20b] = 0;
    iVar14 = 0;
    plVar21 = plVar34;
    if (*(int *)(param_2 + 0x20c) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(pbVar1);
      plVar21 = (longlong *)(ulonglong)*(uint *)(param_2 + 0x208);
      iVar14 = *(int *)(param_2 + 0x20c);
    }
    if (iVar14 < (int)plVar21) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(pbVar1);
    }
  }
  *(uint *)(param_2 + 0x210) = *(uint *)(param_2 + 0x210) & 0xfffffffe;
  lVar37 = *(longlong *)(param_2 + 0x288);
  if (lVar37 != 0) {
    *(undefined4 *)(lVar37 + 0x810) = 0;
    if (*(int *)(lVar37 + 0x814) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar37 + 0x808,0);
    }
  }
  FUN_1428c7030(param_2 + 8);
  QueryPerformanceCounter(&local_f8);
  lVar12 = 5;
  dVar8 = (double)local_f8.QuadPart * DAT_1468b02f8;
  AK::MemoryMgr::StartProfileThreadUsage(5);
  AK::MemoryMgr::StartProfileThreadUsage(lVar12);
  lVar37 = local_118;
  if (*(longlong *)(param_2 + 0x288) != 0) {
    puVar2 = (uint *)(*(longlong *)(param_2 + 0x288) + 0x830);
    *puVar2 = *puVar2 | 0x400;
    cVar11 = FURL::HasOption(local_118,L"quiet");
    plVar21 = plVar27;
    if (cVar11 == '\0') {
      *(undefined1 *)(plVar27 + 0x113) = 2;
      FString::operator=(plVar27 + 0x114,puVar41);
      plVar23 = plVar27 + 0x116;
      cVar11 = FURL::HasOption(lVar37,L"Game=");
      if (cVar11 == '\0') {
        if ((undefined *)*plVar23 != &DAT_1451c9c84) {
          *(undefined4 *)(plVar27 + 0x117) = 0;
          iVar14 = 0;
          plVar29 = plVar34;
          if (*(int *)((longlong)plVar27 + 0x8bc) != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar23);
            plVar29 = (longlong *)(ulonglong)*(uint *)(plVar27 + 0x117);
            iVar14 = *(int *)((longlong)plVar27 + 0x8bc);
          }
          if (iVar14 < (int)plVar29) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar23);
          }
        }
      }
      else {
        psVar16 = (short *)FURL::GetOption(lVar37,L"Game=",&DAT_1451c9bac);
        plVar21 = local_128;
        if ((short *)*plVar23 != psVar16) {
          plVar21 = plVar34;
          if ((psVar16 != (short *)0x0) && (*psVar16 != 0)) {
            lVar37 = -1;
            do {
              lVar37 = lVar37 + 1;
            } while (psVar16[lVar37] != 0);
            plVar21 = (longlong *)(ulonglong)((int)lVar37 + 1);
          }
          *(undefined4 *)(plVar27 + 0x117) = 0;
          iVar14 = (int)plVar21;
          plVar29 = plVar34;
          if (*(int *)((longlong)plVar27 + 0x8bc) != iVar14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar23,plVar21);
            plVar29 = (longlong *)(ulonglong)*(uint *)(plVar27 + 0x117);
          }
          iVar13 = iVar14 + (int)plVar29;
          *(int *)(plVar27 + 0x117) = iVar13;
          if (*(int *)((longlong)plVar27 + 0x8bc) < iVar13) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar23);
          }
          plVar21 = local_128;
          if (iVar14 != 0) {
            _guard_xfg_dispatch_icall_nop((void *)*plVar23,psVar16,(longlong)iVar14 * 2);
            plVar21 = local_128;
          }
        }
      }
      if (((DAT_1468e22c0 == 0) || (DAT_1468e22b8 == (longlong *)0x0)) ||
         (cVar11 = (**(code **)(*DAT_1468e22b8 + 0x18))(), cVar11 == '\0')) {
        bVar42 = false;
      }
      else {
        bVar42 = true;
      }
      if (bVar42) {
        plVar27 = plVar34;
        if (DAT_1468e22c0 != 0) {
          plVar27 = DAT_1468e22b8;
        }
        cVar11 = (**(code **)(*plVar27 + 0x38))();
        if (cVar11 == '\0') goto LAB_142881916;
      }
      else {
LAB_142881916:
        (**(code **)(*plVar21 + 0x468))(plVar21);
      }
      *(undefined1 *)(plVar21 + 0x113) = 0;
    }
    FUN_14288fa60(plVar21,*(undefined8 *)(param_2 + 0x288));
    FUN_1428caf60(*(undefined8 *)(param_2 + 0x288),2);
    bVar42 = false;
    DAT_14653581c = DAT_14653581c + 1;
    uVar22 = *(undefined8 *)(param_2 + 0x288);
    lVar37 = (longlong)(DAT_146535810 + -1);
    if (-1 < DAT_146535810 + -1) {
      lVar33 = lVar37 << 4;
      bVar42 = false;
      do {
        if (((*(int *)(lVar33 + 8 + DAT_146535808) == 0) ||
            (plVar27 = *(longlong **)(lVar33 + DAT_146535808), plVar27 == (longlong *)0x0)) ||
           (cVar11 = (**(code **)(*plVar27 + 0x40))(plVar27,0,uVar22), cVar11 == '\0')) {
          bVar42 = true;
        }
        lVar33 = lVar33 + -0x10;
        lVar37 = lVar37 + -1;
      } while (-1 < lVar37);
    }
    iVar14 = DAT_146535810;
    DAT_14653581c = DAT_14653581c + -1;
    if ((bVar42) && (DAT_14653581c < 1)) {
      plVar27 = plVar34;
      if (0 < DAT_146535810) {
        do {
          if (((*(int *)((longlong)plVar34 + DAT_146535808 + 8) == 0) ||
              (*(longlong **)((longlong)plVar34 + DAT_146535808) == (longlong *)0x0)) ||
             (cVar11 = (**(code **)(**(longlong **)((longlong)plVar34 + DAT_146535808) + 0x10))(),
             cVar11 != '\0')) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146535808,plVar27,1,1);
          }
          else {
            plVar27 = (longlong *)(ulonglong)((int)plVar27 + 1);
            plVar34 = plVar34 + 2;
          }
        } while ((int)plVar27 < DAT_146535810);
      }
      _DAT_146535818 = DAT_146535810 * 2;
      if (_DAT_146535818 < 3) {
        _DAT_146535818 = 2;
      }
      if ((_DAT_146535818 < iVar14) && (DAT_146535814 != DAT_146535810)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146535808);
      }
    }
    if (*(longlong *)(param_2 + 0x240) != 0) {
      UGameInstance::GetLocalPlayerIterator(*(longlong *)(param_2 + 0x240),&local_148);
      iVar14 = (int)local_140;
      while( true ) {
        if ((iVar14 < 0) || ((int)local_148[1] <= iVar14)) {
          bVar42 = false;
        }
        else {
          bVar42 = true;
        }
        if (!bVar42) break;
        lVar37 = *(longlong *)(*local_148 + (longlong)iVar14 * 8);
        if ((*(longlong **)(lVar37 + 0x30) != (longlong *)0x0) &&
           (lVar33 = *(longlong *)(param_2 + 0x288),
           lVar17 = (**(code **)(**(longlong **)(lVar37 + 0x30) + 0x148))(), lVar17 == lVar33)) {
          lVar33 = *(longlong *)(lVar37 + 0x30);
          if (*(longlong *)(lVar33 + 0x488) != 0) {
            FUN_142543860(*(undefined8 *)(param_2 + 0x288),*(longlong *)(lVar33 + 0x488),1);
            lVar33 = *(longlong *)(lVar37 + 0x30);
          }
          FUN_142543860(*(undefined8 *)(param_2 + 0x288),lVar33,1);
          *(undefined8 *)(lVar37 + 0x30) = 0;
        }
        *(uint *)(lVar37 + 0xa0) = *(uint *)(lVar37 + 0xa0) & 0xfffffffe;
        iVar14 = (int)local_140 + 1;
        local_140 = CONCAT44(local_140._4_4_,iVar14);
      }
    }
    LVar36 = *(LARGE_INTEGER *)(param_2 + 0x288);
    local_f8.QuadPart = FUN_1428dfc70();
    local_d0[0] = 5;
    local_78 = '\0';
    local_138 = LVar36;
    FUN_14044bc80(&local_c8,&local_138,&local_f8);
    FUN_14045a130(local_d0);
    if (local_ac == '\0') {
LAB_142881b70:
      FUN_14223c120(local_a0,1);
      lVar37 = local_c8;
      iVar14 = local_b0 + 1;
      if (iVar14 < local_90 + local_b8) {
        lVar33 = (longlong)iVar14 * 8;
        iVar13 = local_b8;
        iVar39 = local_90;
        do {
          if (iVar14 < iVar13) {
            lVar17 = *(longlong *)(lVar33 + local_c0);
          }
          else {
            lVar17 = *(longlong *)(local_98 + (longlong)(iVar14 - iVar13) * 8);
          }
          local_a8 = local_a8 + 1;
          if ((lVar17 != 0) &&
             (lVar18 = AActor::GetLevel(lVar17), iVar13 = local_b8, iVar39 = local_90, lVar18 != 0))
          {
            if ((local_d0[0] & 1) != 0) {
              iVar5 = *(int *)(lVar17 + 0xc);
              if (iVar5 < (int)DAT_1469e91c4) {
                uVar28 = iVar5 >> 0x1f & 0xffff;
                uVar15 = iVar5 + uVar28;
                lVar19 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar15 >> 0x10) * 8) +
                         (longlong)(int)((uVar15 & 0xffff) - uVar28) * 0x18;
              }
              else {
                lVar19 = 0;
              }
              if ((*(uint *)(lVar19 + 8) >> 0x1d & 1) != 0) goto LAB_142881d14;
            }
            if (((local_d0[0] >> 1 & 1) == 0) ||
               (cVar11 = FOutputDevice::CanBeUsedOnAnyThread(lVar17), iVar13 = local_b8,
               iVar39 = local_90, cVar11 != '\0')) {
              if ((local_d0[0] >> 2 & 1) != 0) {
                if (((*(byte *)(lVar18 + 0x204) & 0x10) == 0) &&
                   ((*(byte *)(lVar18 + 0x205) & 0x10) == 0)) {
                  bVar42 = false;
                }
                else {
                  bVar42 = true;
                }
                piVar6 = *(int **)(lVar18 + 600);
                if (((*(longlong *)(lVar18 + 0xc0) == 0) ||
                    (piVar20 = (int *)UWorld::GetActiveLevelCollection(), piVar20 == (int *)0x0)) ||
                   (piVar6 == piVar20)) {
                  bVar9 = true;
                }
                else {
                  bVar9 = false;
                }
                if ((piVar6 == (int *)0x0) || (*piVar6 == 2)) {
                  bVar10 = true;
                }
                else {
                  bVar10 = false;
                }
                if ((bVar9) || (bVar9 = false, bVar10)) {
                  bVar9 = true;
                }
                iVar13 = local_b8;
                iVar39 = local_90;
                if ((!bVar42) || (!bVar9)) goto LAB_142881d14;
              }
              lVar18 = ULevel::GetWorld(lVar18);
              iVar13 = local_b8;
              iVar39 = local_90;
              if (lVar18 == lVar37) {
                lVar18 = AActor::GetLevel(lVar17);
                if (lVar18 == *(longlong *)(lVar37 + 0x30)) goto LAB_142881d35;
                lVar18 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar18 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar18 + 0x90) * 8) != lVar18 + 0x88)) {
                  bVar42 = false;
                }
                else {
                  bVar42 = true;
                }
                iVar13 = local_b8;
                iVar39 = local_90;
                if (!bVar42) goto LAB_142881d35;
              }
            }
          }
LAB_142881d14:
          iVar14 = iVar14 + 1;
          lVar33 = lVar33 + 8;
          if (iVar39 + iVar13 <= iVar14) break;
        } while( true );
      }
      local_ac = '\x01';
      local_a0 = 0;
      param_2 = local_e0[0];
      param_5 = local_e8;
    }
LAB_142881d52:
    uVar30 = 0;
    if (local_78 != '\0') {
      local_78 = '\0';
      UWorld::RemoveOnActorSpawnedHandler(local_c8,local_80);
      if (local_98 != 0) {
        FMemory::Free();
      }
      if (local_c0 != 0) {
        FMemory::Free();
      }
    }
    FUN_1428c72b0(*(undefined8 *)(param_2 + 0x288),1,1,0);
    if (DAT_146b17150 != (longlong *)0x0) {
      if (DAT_146b17150[0xf6] != 0) {
        FUN_142868090(local_128);
      }
      (**(code **)(*DAT_146b17150 + 0x280))(DAT_146b17150,*(undefined8 *)(param_2 + 0x288));
    }
    iVar14 = *(int *)(*(longlong *)(param_2 + 0x288) + 0xc);
    if (iVar14 < (int)DAT_1469e91c4) {
      uVar28 = iVar14 >> 0x1f & 0xffff;
      uVar15 = iVar14 + uVar28;
      lVar37 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar15 >> 0x10) * 8) +
               (longlong)(int)((uVar15 & 0xffff) - uVar28) * 0x18;
    }
    else {
      lVar37 = 0;
    }
    *(uint *)(lVar37 + 8) = *(uint *)(lVar37 + 8) & 0xbfffffff;
    UWorld::GetLevelIterator(*(undefined8 *)(param_2 + 0x288),&local_148);
    plVar34 = local_148;
    iVar14 = (int)local_140;
    while( true ) {
      if ((iVar14 < 0) || ((int)plVar34[1] <= iVar14)) {
        bVar42 = false;
      }
      else {
        bVar42 = true;
      }
      if (!bVar42) break;
      lVar37 = *(longlong *)(*plVar34 + (longlong)iVar14 * 8);
      if (lVar37 != 0) {
        UWorld::MarkObjectsPendingKill(*(undefined8 *)(lVar37 + 0x20));
        plVar34 = local_148;
        iVar14 = (int)local_140;
      }
      iVar14 = iVar14 + 1;
      local_140 = CONCAT44(local_140._4_4_,iVar14);
    }
    lVar37 = *(longlong *)(param_2 + 0x288);
    plVar34 = *(longlong **)(lVar37 + 0x88);
    uVar40 = (longlong)*(int *)(lVar37 + 0x90) & 0x1fffffffffffffff;
    if (plVar34 + *(int *)(lVar37 + 0x90) < plVar34) {
      uVar40 = uVar30;
    }
    uVar35 = uVar30;
    if (uVar40 != 0) {
      do {
        plVar27 = (longlong *)*plVar34;
        if ((plVar27[0x24] != 0) &&
           ((cVar11 = (**(code **)(*plVar27 + 0x280))(plVar27), cVar11 == '\0' ||
            (cVar11 = (**(code **)(*plVar27 + 0x288))(plVar27), cVar11 == '\0')))) {
          UWorld::MarkObjectsPendingKill(*(undefined8 *)(plVar27[0x24] + 0x20));
        }
        plVar34 = plVar34 + 1;
        uVar35 = uVar35 + 1;
      } while (uVar35 != uVar40);
      lVar37 = *(longlong *)(param_2 + 0x288);
    }
    lVar37 = UWorld::GetAudioDevice(lVar37);
    if (lVar37 != 0) {
      FUN_1422c9b40(lVar37,*(undefined8 *)(param_2 + 0x288),1);
      FAudioDevice::SetTransientMasterVolume(lVar37,0x3f800000);
    }
    iVar14 = 0;
    if (0 < *(int *)(param_2 + 0x280)) {
      do {
        plVar34 = *(longlong **)(uVar30 + *(longlong *)(param_2 + 0x278));
        if ((plVar34 != (longlong *)0x0) && (*plVar34 == *(longlong *)(param_2 + 0x288))) {
          *plVar34 = 0;
        }
        iVar14 = iVar14 + 1;
        uVar30 = uVar30 + 8;
      } while (iVar14 < *(int *)(param_2 + 0x280));
    }
    plVar34 = *(longlong **)(param_2 + 0x290);
    plVar21 = plVar34 + (longlong)*(int *)(param_2 + 0x298) * 2;
    plVar27 = local_128;
    for (; local_128 = plVar27, plVar34 != plVar21; plVar34 = plVar34 + 2) {
      plVar27 = (longlong *)*plVar34;
      if (plVar27 != (longlong *)0x0) {
        (**(code **)(*plVar27 + 0x380))(plVar27,0);
      }
      plVar27 = local_128;
    }
    param_2[0x288] = 0;
    param_2[0x289] = 0;
    param_2[0x28a] = 0;
    param_2[0x28b] = 0;
    param_2[0x28c] = 0;
    param_2[0x28d] = 0;
    param_2[0x28e] = 0;
    param_2[0x28f] = 0;
  }
  plVar34 = (longlong *)0x0;
  cVar11 = FUN_141789f20(&DAT_1469e8f10);
  if (cVar11 != '\0') {
    FUN_141789b30(&DAT_1469e8f10);
  }
  FUN_1428934a0();
  cVar11 = IStreamingManager::HasShutdown();
  if (cVar11 == '\0') {
    plVar21 = (longlong *)IStreamingManager::Get();
    (**(code **)(*plVar21 + 0x28))(plVar21);
  }
  FUN_1415afb20(L"LoadMap");
  plVar21 = *(longlong **)(param_2 + 0x240);
  lVar37 = *plVar21;
  uVar22 = FURL::FURL(local_d0,local_118);
  (**(code **)(lVar37 + 0x310))(plVar21,uVar22);
  local_110 = 0;
  local_120 = (undefined8 *)0x0;
  if (1 < *(int *)(param_2 + 0x268)) {
    plVar21 = (longlong *)plVar27[0x183];
    plVar27 = plVar21 + (int)plVar27[0x184];
    puVar41 = local_f0;
    for (; local_f0 = puVar41, plVar21 != plVar27; plVar21 = plVar21 + 1) {
      lVar37 = *plVar21;
      if ((*(longlong *)(lVar37 + 0x288) != *(longlong *)(param_2 + 0x288)) &&
         (1 < *(int *)(lVar37 + 0x268))) {
        if (*(int *)(lVar37 + 0x268) == 0) {
          puVar38 = &DAT_143f3eda8;
        }
        else {
          puVar38 = *(undefined2 **)(lVar37 + 0x260);
        }
        local_158.s.LowPart = 0xffffffff;
        iVar14 = FUN_141592950(puVar41,puVar38,1);
        if (iVar14 != -1) {
          FUN_1428d4fe0(&local_138,puVar41);
          DAT_1464aaa88 = *(undefined4 *)(param_2 + 600);
          FLazyObjectPtr::ResetPIEFixups();
          local_120 = (undefined8 *)FUN_1428c9910(&local_138,0);
          if (local_120 == (undefined8 *)0x0) {
            local_120 = (undefined8 *)
                        `anonymous_namespace'::CreatePIEWorldByLoadingFromPackage
                                  (param_2,&local_138,&local_110);
            if (local_120 == (undefined8 *)0x0) {
              LVar36.QuadPart = (LONGLONG)&DAT_143f3eda8;
              if ((int)local_130 != 0) {
                LVar36 = local_138;
              }
              FString::PrintfImpl(&local_148,L"Failed to load package \'%s\' while in PIE",
                                  LVar36.QuadPart);
              if (param_5 == &local_148) {
                if (local_148 != (longlong *)0x0) {
                  FMemory::Free();
                }
              }
              else {
                if (*param_5 != (longlong *)0x0) {
                  FMemory::Free();
                }
                *param_5 = local_148;
                *(int *)(param_5 + 1) = (int)local_140;
                *(undefined4 *)((longlong)param_5 + 0xc) = local_140._4_4_;
              }
              if ((byte **)local_138.QuadPart != (byte **)0x0) {
                FMemory::Free();
              }
              TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_1464b57d0,0);
              FUN_1415a46c0();
              lVar12 = FUN_1415d7fb0();
              AK::MemoryMgr::StartProfileThreadUsage(lVar12);
              FURL::~FURL(local_118);
              return 0;
            }
          }
          else {
            local_110 = local_120[4];
          }
          plVar23 = (longlong *)
                    UWorld::BuildPIEPackagePrefix(&local_148,*(undefined4 *)(param_2 + 600));
          puVar41 = local_120;
          plVar29 = local_120 + 0x1d;
          if (plVar29 != plVar23) {
            if (*plVar29 != 0) {
              FMemory::Free();
            }
            *plVar29 = *plVar23;
            *plVar23 = 0;
            *(int *)(puVar41 + 0x1e) = (int)plVar23[1];
            *(undefined4 *)((longlong)puVar41 + 0xf4) = *(undefined4 *)((longlong)plVar23 + 0xc);
            plVar23[1] = 0;
          }
          if (local_148 != (longlong *)0x0) {
            FMemory::Free();
          }
          DAT_1468c21a8 = 1;
          if ((byte **)local_138.QuadPart != (byte **)0x0) {
            FMemory::Free();
          }
        }
      }
      puVar41 = local_f0;
    }
  }
  puVar41 = local_f0;
  if (*param_2 == 6) {
    if (*(int *)(local_f0 + 1) == 0) {
      puVar38 = &DAT_143f3eda8;
    }
    else {
      puVar38 = (undefined2 *)*local_f0;
    }
    puVar24 = (undefined8 *)FName::FName(&local_138,puVar38,1);
    FUN_142449b30(*puVar24,&local_110,&local_120);
  }
  iVar14 = *(int *)(puVar41 + 1);
  _Src = (void *)*puVar41;
  local_148 = (longlong *)0x0;
  local_140 = CONCAT44(local_140._4_4_,iVar14);
  plVar27 = plVar34;
  iVar13 = 0;
  if (iVar14 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_148,iVar14,0);
    plVar27 = local_148;
    _guard_xfg_dispatch_icall_nop(local_148,_Src,(longlong)iVar14 * 2);
    iVar13 = (int)local_140;
  }
  plVar21 = local_128;
  if (local_120 != (undefined8 *)0x0) goto LAB_14288260f;
  puVar38 = &DAT_143f3eda8;
  if (*(int *)(puVar41 + 1) == 0) {
    puVar31 = &DAT_143f3eda8;
  }
  else {
    puVar31 = (undefined2 *)*puVar41;
  }
  FName::FName(local_e0,puVar31,1);
  bVar4 = *param_2;
  if (DAT_1465356b8 != DAT_1465356e4) {
    puVar25 = DAT_1465356f0;
    if (DAT_1465356f0 == (undefined *)0x0) {
      puVar25 = &DAT_1465356e8;
    }
    iVar14 = *(int *)(puVar25 +
                     (longlong)
                     (int)((int)((ulonglong)local_e0[0] >> 0x20) + (int)local_e0[0] &
                          DAT_1465356f8 - 1U) * 4);
    while (iVar14 != -1) {
      lVar37 = (longlong)iVar14;
      if (*(byte **)(DAT_1465356b0 + lVar37 * 0x18) == local_e0[0]) {
        if ((iVar14 != -1) && (lVar37 = DAT_1465356b0 + lVar37 * 0x18, lVar37 != 0))
        goto LAB_1428823ab;
        break;
      }
      iVar14 = *(int *)(DAT_1465356b0 + (lVar37 * 3 + 2) * 8);
    }
  }
  local_138.QuadPart = (LONGLONG)local_e0;
  FUN_14253ceb0(&DAT_1465356b0,&local_f8,&local_138,0);
  lVar37 = DAT_1465356b0 + (longlong)(int)local_f8.s.LowPart * 0x18;
LAB_1428823ab:
  *(uint *)(lVar37 + 8) = (uint)bVar4;
  if (*(int *)(puVar41 + 1) == 0) {
    puVar31 = &DAT_143f3eda8;
  }
  else {
    puVar31 = (undefined2 *)*puVar41;
  }
  local_110 = FUN_14178ae20(0,puVar31);
  bVar42 = local_110 != 0;
  if (local_110 == 0) {
    if (*(int *)(puVar41 + 1) == 0) {
      puVar31 = &DAT_143f3eda8;
    }
    else {
      puVar31 = (undefined2 *)*puVar41;
    }
    plVar21 = plVar34;
    if (*param_2 == 3) {
      plVar21 = (longlong *)0x80000;
    }
    local_110 = LoadPackage(0,puVar31,plVar21,0);
  }
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::Remove
            (&DAT_1465356b0,local_e0[0]);
  if (local_110 == 0) {
    if (*(int *)(puVar41 + 1) != 0) {
      puVar38 = (undefined2 *)*puVar41;
    }
    pwVar32 = L"Failed to load package \'%s\'";
    goto LAB_142882430;
  }
  local_120 = (undefined8 *)UWorld::FindWorldInPackage();
  if (local_120 == (undefined8 *)0x0) {
    local_120 = (undefined8 *)FUN_1428cb040(local_110,0);
    if (local_120 != (undefined8 *)0x0) {
      bVar42 = true;
      local_110 = UObjectBaseUtility::GetOutermost(local_120);
      if (local_120 != (undefined8 *)0x0) goto LAB_142882511;
    }
    if (*(int *)(puVar41 + 1) != 0) {
      puVar38 = (undefined2 *)*puVar41;
    }
    pwVar32 = L"Failed to load package \'%s\'";
LAB_142882430:
    FString::PrintfImpl(&local_148,pwVar32,puVar38);
    pplVar3 = local_e8;
    if (local_e8 == &local_148) {
      if (local_148 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*local_e8 != (longlong *)0x0) {
        FMemory::Free();
      }
      *pplVar3 = local_148;
      *(int *)(pplVar3 + 1) = (int)local_140;
      *(undefined4 *)((longlong)pplVar3 + 0xc) = local_140._4_4_;
    }
    if (plVar27 != (longlong *)0x0) {
      FMemory::Free(plVar27);
    }
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_1464b57d0,0);
    FUN_1415a46c0();
    lVar12 = FUN_1415d7fb0();
    AK::MemoryMgr::StartProfileThreadUsage(lVar12);
    FURL::~FURL(local_118);
    return 0;
  }
LAB_142882511:
  FUN_14256fdc0(local_120[6]);
  plVar21 = local_128;
  if (*param_2 == 3) {
    if ((bVar42) || (*(int *)(local_120 + 0xe1) == 2)) {
      if (*(int *)(param_2 + 600) == -1) {
        param_2[600] = 0;
        param_2[0x259] = 0;
        param_2[0x25a] = 0;
        param_2[0x25b] = 0;
      }
      local_120 = (undefined8 *)
                  (**(code **)(*local_128 + 0x390))(local_128,param_2,local_120,puVar41);
      DAT_1468c21a8 = 1;
      (**(code **)(*plVar21 + 0x368))(plVar21,local_120);
    }
    else {
      if ((local_108 == (longlong *)0x0) || (local_108[7] != 0)) {
        AK::MemoryMgr::StartProfileThreadUsage((long)local_120);
      }
      plVar21 = local_128;
      (**(code **)(*local_128 + 0x368))(local_128,local_120);
    }
  }
  else if ((((*param_2 == 1) && (*(char *)(local_120 + 0xdf) != '\0')) &&
           (*(int *)(param_2 + 600) != -1)) &&
          (local_120 = (undefined8 *)
                       `anonymous_namespace'::CreatePIEWorldByLoadingFromPackage
                                 (param_2,puVar41,&local_110), plVar21 = local_128,
          local_120 == (undefined8 *)0x0)) {
    if (*(int *)(puVar41 + 1) != 0) {
      puVar38 = (undefined2 *)*puVar41;
    }
    pwVar32 = L"Failed to load package \'%s\' into a new game world.";
    local_120 = (undefined8 *)0x0;
    goto LAB_142882430;
  }
LAB_14288260f:
  local_120[0x32] = *(undefined8 *)(param_2 + 0x240);
  DAT_146b19a68 = local_120;
  FUN_14288d2f0(param_2);
  *(uint *)(*(longlong *)(param_2 + 0x288) + 0x708) = (uint)*param_2;
  if (*param_2 == 3) {
    puVar2 = (uint *)(*(longlong *)(param_2 + 0x288) + 8);
    *puVar2 = *puVar2 & 0xfffffffd;
  }
  else {
    iVar14 = *(int *)(*(longlong *)(param_2 + 0x288) + 0xc);
    plVar23 = plVar34;
    if (iVar14 < (int)DAT_1469e91c4) {
      uVar28 = iVar14 >> 0x1f & 0xffff;
      uVar15 = iVar14 + uVar28;
      plVar23 = (longlong *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar15 >> 0x10) * 8) +
                (longlong)(int)((uVar15 & 0xffff) - uVar28) * 0x18);
    }
    *(uint *)(plVar23 + 1) = *(uint *)(plVar23 + 1) | 0x40000000;
  }
  if (*(char *)(*(longlong *)(param_2 + 0x288) + 0x6f8) == '\0') {
    FUN_1428ce1e0(*(longlong *)(param_2 + 0x288),local_f8.s.LowPart & 0xffffff7f | 0x37f);
  }
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*plVar21 + 0x4c8))(plVar21,param_2);
  }
  lVar37 = local_118;
  FUN_1428d7920(*(undefined8 *)(param_2 + 0x288),local_118);
  lVar33 = UWorld::GetAudioDevice(*(undefined8 *)(param_2 + 0x288));
  if (lVar33 != 0) {
    lVar17 = UWorld::GetWorldSettings(*(undefined8 *)(param_2 + 0x288),0,1);
    FUN_1422d8040(lVar33,*(undefined8 *)(lVar17 + 0x580));
  }
  if ((local_108 == (longlong *)0x0) &&
     ((DAT_1468c2172 == '\0' || (cVar11 = FURL::HasOption(lVar37,L"Listen"), cVar11 != '\0')))) {
    FUN_1428cfbe0(*(undefined8 *)(param_2 + 0x288),lVar37);
  }
  psVar16 = (short *)FURL::GetOption(lVar37,L"Mutator=",&DAT_1451c9d9c);
  if (psVar16 != (short *)0x0) {
    local_108 = (longlong *)0x0;
    local_138.QuadPart = 0;
    local_130 = 0;
    local_100 = 0;
    if (*psVar16 != 0) {
      lVar37 = -1;
      do {
        lVar37 = lVar37 + 1;
      } while (psVar16[lVar37] != 0);
      uVar15 = (int)lVar37 + 1;
      local_100 = (ulonglong)uVar15;
      if (0 < (int)uVar15) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
      }
      FGenericPlatformString::Memcpy(local_108,psVar16,(longlong)(int)uVar15 * 2);
    }
    FUN_141594550(&local_108,&local_138,&DAT_1451c9ec4,1);
    if (local_108 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar21 = local_128;
    iVar14 = (int)local_130;
    LVar36 = local_138;
    if (0 < (int)local_130) {
      do {
        FUN_142882e70(plVar21,*(undefined8 *)(param_2 + 0x288),4,
                      (byte **)((longlong)(int)plVar34 * 0x10 + local_138.QuadPart));
        uVar15 = (int)plVar34 + 1;
        plVar34 = (longlong *)(ulonglong)uVar15;
        iVar14 = (int)local_130;
        LVar36 = local_138;
        puVar41 = local_f0;
      } while ((int)uVar15 < (int)local_130);
    }
    for (; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*(byte **)LVar36 != (byte *)0x0) {
        FMemory::Free();
      }
      LVar36.QuadPart = LVar36.QuadPart + 0x10;
    }
    if ((byte **)local_138.QuadPart != (byte **)0x0) {
      FMemory::Free(local_138.QuadPart);
    }
  }
  if (DAT_146b09470 != 0) {
    FShaderCompilingManager::ProcessAsyncResults(DAT_146b09470,0,1);
  }
  lVar37 = UObjectBaseUtility::GetOutermost(*(undefined8 *)(*(longlong *)(param_2 + 0x288) + 0x30));
  local_138 = *(LARGE_INTEGER *)(lVar37 + 0x18);
  FName::ToString(&local_138,&local_108);
  plVar34 = local_128;
  FUN_142882e70(local_128,*(undefined8 *)(param_2 + 0x288),0,&local_108);
  if (local_108 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1428caf60(*(undefined8 *)(param_2 + 0x288),2);
  if (*(int *)(puVar41 + 1) == 0) {
    puVar38 = &DAT_143f3eda8;
  }
  else {
    puVar38 = (undefined2 *)*puVar41;
  }
  uVar22 = *(undefined8 *)(param_2 + 0x288);
  puVar24 = (undefined8 *)FName::FName(&local_138,puVar38,1);
  FUN_1428c9740(uVar22,*puVar24);
  FUN_1415afb20(L"BeginPlay");
  FUN_1428c8130(*(undefined8 *)(param_2 + 0x288));
  FUN_1428ced30(*(undefined8 *)(param_2 + 0x288),local_118,1);
  FUN_142246630(*(undefined8 *)(param_2 + 0x288),1);
  FURL::operator=(param_2 + 0xe8,local_118);
  pplVar3 = (longlong **)(param_2 + 0x110);
  if (pplVar3 != &local_148) {
    *(int *)(param_2 + 0x118) = iVar13;
    if ((iVar13 == 0) && (*(int *)(param_2 + 0x11c) == 0)) {
      param_2[0x11c] = 0;
      param_2[0x11d] = 0;
      param_2[0x11e] = 0;
      param_2[0x11f] = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(pplVar3,iVar13);
      _guard_xfg_dispatch_icall_nop(*pplVar3,plVar27,(longlong)iVar13 * 2);
    }
  }
  iVar14 = FUN_1428cf800(*(undefined8 *)(param_2 + 0x288));
  lVar37 = local_118;
  if (iVar14 == 3) {
    FURL::operator=(param_2 + 0x158,local_118);
  }
  if (*(longlong *)(param_2 + 0x240) != 0) {
    UGameInstance::GetLocalPlayerIterator(*(longlong *)(param_2 + 0x240),&local_108);
    lVar33 = local_118;
    iVar14 = (int)local_100;
    while( true ) {
      if ((iVar14 < 0) || ((int)local_108[1] <= iVar14)) {
        bVar42 = false;
      }
      else {
        bVar42 = true;
      }
      lVar37 = local_118;
      plVar34 = local_128;
      puVar41 = local_f0;
      plVar27 = local_148;
      if (!bVar42) break;
      uVar22 = *(undefined8 *)(param_2 + 0x288);
      local_138.QuadPart = 0;
      local_130 = 0;
      plVar34 = *(longlong **)(*local_108 + (longlong)iVar14 * 8);
      lVar37 = *plVar34;
      uVar26 = FUN_1428bd910(lVar33,local_e0,1);
      cVar11 = (**(code **)(lVar37 + 0x2a8))(plVar34,uVar26,&local_138,uVar22);
      if (local_e0[0] != (byte *)0x0) {
        FMemory::Free();
      }
      if (cVar11 == '\0') {
        LVar36.QuadPart = (LONGLONG)&DAT_143f3eda8;
        if ((int)local_130 != 0) {
          LVar36 = local_138;
        }
        LowLevelFatalErrorHandler("Unknown",0x32f9,L"Couldn\'t spawn player: %s",LVar36.QuadPart);
        local_158.QuadPart = (LONGLONG)&DAT_143f3eda8;
        if ((int)local_130 != 0) {
          local_158 = local_138;
        }
        FDebug::AssertFailed(&DAT_1451c9927,"Unknown",0x32f9,L"Couldn\'t spawn player: %s");
      }
      if ((undefined2 *)local_138.QuadPart != (undefined2 *)0x0) {
        FMemory::Free();
      }
      iVar14 = (int)local_100 + 1;
      local_100 = CONCAT44(local_100._4_4_,iVar14);
    }
  }
  plVar21 = (longlong *)IStreamingManager::Get();
  (**(code **)(*plVar21 + 0x30))(plVar21);
  if ((DAT_146b17150 != (longlong *)0x0) &&
     (plVar21 = (longlong *)DAT_146b17150[0x159], plVar21 != (longlong *)0x0)) {
    (**(code **)(*plVar21 + 0xf8))(plVar21,param_2);
  }
  FUN_1428c5fe0(*(undefined8 *)(param_2 + 0x288));
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast
            (&DAT_1464b57d0,*(undefined8 *)(param_2 + 0x288));
  uVar30 = (ulonglong)_tls_index;
  *(uint *)(*(longlong *)(param_2 + 0x288) + 0x130) =
       *(uint *)(*(longlong *)(param_2 + 0x288) + 0x130) | 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar30 * 8) + 0x38) <
       DAT_146b18468) && (_Init_thread_header(&DAT_146b18468), DAT_146b18468 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b18460 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))
                   (DAT_1468b1f88,L"gbx.RenderCore.AllowRedrawViewportsOnFinishLoad");
    _Init_thread_footer(&DAT_146b18468);
  }
  if ((DAT_146b18460 == (longlong *)0x0) ||
     (iVar14 = (**(code **)(*DAT_146b18460 + 0x68))(), 0 < iVar14)) {
    (**(code **)(*plVar34 + 0x458))(plVar34,0);
  }
  else {
    AK::MemoryMgr::StartProfileThreadUsage(5);
  }
  uVar22 = IStreamingManager::Get();
  IStreamingManager::RemoveStreamingViews(uVar22,1);
  if ((((*(longlong **)(*(longlong *)(param_2 + 0x288) + 0x140) == (longlong *)0x0) ||
       (cVar11 = (**(code **)(**(longlong **)(*(longlong *)(param_2 + 0x288) + 0x140) + 0x868))(),
       cVar11 == '\0')) && (cVar11 = FURL::HasOption(lVar37,L"DemoRec"), cVar11 != '\0')) &&
     (*(longlong *)(param_2 + 0x240) != 0)) {
    psVar16 = (short *)FURL::GetOption(lVar37,L"DemoRec=",0);
    uVar22 = *(undefined8 *)(param_2 + 0x288);
    local_138.QuadPart = 0;
    local_130 = 0;
    if ((psVar16 != (short *)0x0) && (*psVar16 != 0)) {
      lVar37 = -1;
      do {
        lVar37 = lVar37 + 1;
      } while (psVar16[lVar37] != 0);
      uVar15 = (int)lVar37 + 1;
      local_130 = (ulonglong)uVar15;
      if (0 < (int)uVar15) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
      }
      FGenericPlatformString::Memcpy(local_138.QuadPart,psVar16,(longlong)(int)uVar15 * 2);
      lVar37 = local_118;
    }
    plVar34 = *(longlong **)(param_2 + 0x240);
    lVar33 = *plVar34;
    uVar22 = FUN_1428cc8c0(uVar22,&local_148);
    (**(code **)(lVar33 + 0x2d8))(plVar34,&local_138,uVar22,lVar37 + 0x48);
    if ((undefined2 *)local_138.QuadPart != (undefined2 *)0x0) {
      FMemory::Free();
    }
    puVar41 = local_f0;
    if (local_148 != (longlong *)0x0) {
      FMemory::Free();
      puVar41 = local_f0;
    }
  }
  QueryPerformanceCounter(&local_138);
  dVar7 = (double)local_138.QuadPart * DAT_1468b02f8;
  lVar12 = FUN_14168db90();
  AK::MemoryMgr::StartProfileThreadUsage(lVar12);
  if (*(int *)(puVar41 + 1) == 0) {
    psVar16 = &DAT_143f3eda8;
  }
  else {
    psVar16 = (short *)*puVar41;
  }
  local_138.QuadPart = 0;
  local_130 = 0;
  if ((psVar16 != (short *)0x0) && (*psVar16 != 0)) {
    lVar37 = -1;
    do {
      lVar37 = lVar37 + 1;
    } while (psVar16[lVar37] != 0);
    uVar15 = (int)lVar37 + 1;
    local_130 = (ulonglong)uVar15;
    if (0 < (int)uVar15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    }
    FGenericPlatformString::Memcpy(local_138.QuadPart,psVar16,(longlong)(int)uVar15 * 2);
  }
  (**(code **)(**(longlong **)(param_2 + 0x240) + 0x2a8))
            (*(longlong **)(param_2 + 0x240),(float)(dVar7 - dVar8),&local_138);
  if (local_138.QuadPart != 0) {
    FMemory::Free();
  }
  if (plVar27 != (longlong *)0x0) {
    FMemory::Free(plVar27);
  }
  FUN_1415a46c0();
  lVar12 = FUN_1415d7fb0();
  AK::MemoryMgr::StartProfileThreadUsage(lVar12);
  FURL::~FURL(local_118);
  return 1;
LAB_142881d35:
  param_2 = local_e0[0];
  param_5 = local_e8;
  local_b0 = iVar14;
  local_a0 = lVar17;
  if (local_ac != '\0') goto LAB_142881d52;
  goto LAB_142881b70;
}



// FUNCTION 142882e70 FUN_142882e70 body=1537 status=ok
// SIG undefined FUN_142882e70(void)

void FUN_142882e70(longlong param_1,longlong param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  wchar_t wVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  wint_t wVar6;
  wint_t wVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  undefined2 *puVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  wchar_t *pwVar21;
  wint_t *pwVar22;
  undefined2 *puVar23;
  longlong lVar24;
  byte *pbVar25;
  byte *pbVar26;
  int local_res8;
  int local_d8;
  longlong local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined8 local_b0;
  byte *local_a8;
  longlong local_a0;
  longlong local_98;
  int local_90;
  int local_8c;
  longlong local_88;
  longlong local_80;
  uint local_78;
  longlong *local_70;
  uint local_60;
  uint local_5c;
  longlong local_58;
  longlong local_48 [2];
  
  plVar10 = *(longlong **)(param_1 + 0xc18);
  plVar12 = plVar10 + *(int *)(param_1 + 0xc20);
  for (; plVar10 != plVar12; plVar10 = plVar10 + 1) {
    lVar11 = *plVar10;
    if (*(longlong *)(lVar11 + 0x288) == param_2) goto LAB_142882ede;
    local_a0 = lVar11;
  }
  lVar11 = FUN_14286b170(DAT_146b17150,0);
LAB_142882ede:
  if (*(int *)(param_4 + 1) == 0) {
    puVar23 = &DAT_143f3eda8;
  }
  else {
    puVar23 = (undefined2 *)*param_4;
  }
  pwVar21 = L"___TAILONLY___";
  local_a0 = lVar11;
  do {
    wVar2 = *(wchar_t *)((longlong)pwVar21 + (longlong)(puVar23 + -0xa28e8c64));
    local_res8 = 0;
    if ((wVar2 == L'\0') && (*pwVar21 == L'\0')) goto LAB_142882f41;
    if (wVar2 != *pwVar21) {
      wVar6 = towlower(wVar2);
      wVar7 = towlower(*pwVar21);
      if (wVar6 != wVar7) break;
    }
    pwVar21 = pwVar21 + 1;
  } while( true );
  if (wVar6 == wVar7) {
LAB_142882f41:
    iVar8 = *(int *)(lVar11 + 0x1d8);
    local_res8 = iVar8 + -1;
  }
  else {
    iVar8 = *(int *)(lVar11 + 0x1d8);
  }
  if (iVar8 <= local_res8) {
    return;
  }
  lVar24 = (longlong)local_res8 * 0x38;
LAB_142882f70:
  pbVar25 = (byte *)(*(longlong *)(lVar11 + 0x1d0) + lVar24);
  if (*pbVar25 == param_3) {
    if (*(int *)(param_4 + 1) == 0) {
      puVar23 = &DAT_143f3eda8;
    }
    else {
      puVar23 = (undefined2 *)*param_4;
    }
    if (*(int *)(pbVar25 + 0x10) == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = *(undefined2 **)(pbVar25 + 8);
    }
    local_a8 = pbVar25;
    iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar16,puVar23);
    if (iVar8 != 0) {
      if (*(int *)(param_4 + 1) == 0) {
        puVar23 = &DAT_143f3eda8;
      }
      else {
        puVar23 = (undefined2 *)*param_4;
      }
      pwVar22 = &DAT_1451ca244;
      do {
        wVar6 = *(wint_t *)((longlong)pwVar22 + (longlong)(puVar23 + -0xa28e5122));
        if ((wVar6 == 0) && (*pwVar22 == 0)) break;
        if (wVar6 != *pwVar22) {
          wVar6 = towlower(wVar6);
          wVar7 = towlower(*pwVar22);
          if (wVar6 != wVar7) goto LAB_142883014;
        }
        pwVar22 = pwVar22 + 1;
      } while( true );
    }
    goto LAB_142883085;
  }
  goto LAB_1428833ec;
LAB_142883014:
  if (wVar6 != wVar7) {
    if (*(int *)(param_4 + 1) == 0) {
      puVar23 = &DAT_143f3eda8;
    }
    else {
      puVar23 = (undefined2 *)*param_4;
    }
    pwVar21 = L"___TAILONLY___";
    do {
      wVar2 = *(wchar_t *)((longlong)pwVar21 + (longlong)(puVar23 + -0xa28e8c74));
      if ((wVar2 == L'\0') && (*pwVar21 == L'\0')) break;
      if (wVar2 != *pwVar21) {
        wVar6 = towlower(wVar2);
        wVar7 = towlower(*pwVar21);
        if (wVar6 != wVar7) goto LAB_142883070;
      }
      pwVar21 = pwVar21 + 1;
    } while( true );
  }
LAB_142883085:
  local_d8 = 0;
  if (0 < *(int *)(pbVar25 + 0x20)) {
    do {
      lVar11 = 0;
      plVar12 = (longlong *)FName::ToString(*(longlong *)(pbVar25 + 0x18) + (longlong)local_d8 * 8);
      lVar14 = plVar12[1];
      local_c8 = *plVar12;
      *plVar12 = 0;
      local_c0._0_4_ = (int)plVar12[1];
      local_c0._4_4_ = *(int *)((longlong)plVar12 + 0xc);
      plVar12[1] = 0;
      iVar8 = (int)local_c0;
      if (local_c0._4_4_ < (int)((4 - (uint)((int)lVar14 != 0)) + (int)local_c0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8);
        iVar8 = (int)local_c0;
      }
      local_c0._0_4_ = (4 - (uint)(iVar8 != 0)) + iVar8;
      lVar14 = local_c8;
      iVar3 = (int)local_c0;
      iVar4 = local_c0._4_4_;
      if (local_c0._4_4_ < (int)local_c0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,iVar8);
        lVar14 = local_c8;
        iVar3 = (int)local_c0;
        iVar4 = local_c0._4_4_;
      }
      local_8c = iVar4;
      local_c8 = 0;
      local_c0 = 0;
      puVar1 = (undefined4 *)(lVar14 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      *puVar1 = 0x53005f;
      *(undefined2 *)(puVar1 + 1) = 0x46;
      *(undefined2 *)((longlong)puVar1 + 6) = 0;
      local_98 = lVar14;
      local_90 = iVar3;
      if (local_58 != 0) {
        FMemory::Free();
      }
      local_b8 = (undefined2 *)0x0;
      local_b0 = 0;
      cVar5 = FUN_1416f0740(&local_98,0,&local_b8,1);
      if (cVar5 == '\0') {
        uVar13 = FName::ToString(*(longlong *)(pbVar25 + 0x18) + (longlong)local_d8 * 8,local_48);
        cVar5 = FUN_1416f0740(uVar13,0,&local_b8,1);
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        pbVar26 = pbVar25;
        if (cVar5 != '\0') goto LAB_1428831d4;
      }
      else {
LAB_1428831d4:
        puVar23 = &DAT_143f3eda8;
        if ((int)local_b0 != 0) {
          puVar23 = local_b8;
        }
        lVar14 = LoadPackage(0,puVar23,0,0);
        uVar15 = *(uint *)(lVar14 + 0xc);
        if ((int)uVar15 < (int)DAT_1469e91c4) {
          uVar18 = uVar15 & 0xffff;
          if ((int)uVar15 < 0) {
            uVar15 = uVar15 + 0xffff;
            uVar18 = uVar18 - 0x10000;
          }
          lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar15 >> 0x10) * 8) +
                   (longlong)(int)uVar18 * 0x18;
        }
        *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) | 0x40000000;
        iVar8 = *(int *)(pbVar25 + 0x30);
        *(int *)(pbVar25 + 0x30) = iVar8 + 1;
        local_88 = lVar14;
        if (*(int *)(pbVar25 + 0x34) < iVar8 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(pbVar25 + 0x28,iVar8);
        }
        *(longlong *)(*(longlong *)(pbVar25 + 0x28) + (longlong)iVar8 * 8) = lVar14;
        uVar13 = UObject::GetPrivateStaticClass();
        FObjectIterator::FObjectIterator(&local_80,uVar13,0,0x10,0);
        uVar18 = local_5c;
        uVar15 = local_60;
        lVar11 = local_80;
        plVar12 = local_70;
        pbVar26 = local_a8;
        if (local_70 != (longlong *)0x0) {
          do {
            uVar20 = local_78;
            if (plVar12 == (longlong *)0x0) {
              lVar17 = 0;
            }
            else {
              lVar17 = *plVar12;
            }
            cVar5 = UObjectBaseUtility::IsIn(lVar17,lVar14);
            if (cVar5 != '\0') {
              if (plVar12 == (longlong *)0x0) {
                lVar14 = 0;
              }
              else {
                lVar14 = *plVar12;
              }
              uVar9 = *(uint *)(lVar14 + 0xc);
              if ((int)uVar9 < (int)DAT_1469e91c4) {
                uVar19 = uVar9 & 0xffff;
                if ((int)uVar9 < 0) {
                  uVar9 = uVar9 + 0xffff;
                  uVar19 = uVar19 - 0x10000;
                }
                lVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                         (longlong)(int)uVar19 * 0x18;
              }
              else {
                lVar14 = 0;
              }
              *(uint *)(lVar14 + 8) = *(uint *)(lVar14 + 8) | 0x40000000;
              if (plVar12 == (longlong *)0x0) {
                lVar14 = 0;
              }
              else {
                lVar14 = *plVar12;
              }
              iVar8 = *(int *)(pbVar25 + 0x30);
              *(int *)(pbVar25 + 0x30) = iVar8 + 1;
              if (*(int *)(pbVar25 + 0x34) < iVar8 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (pbVar25 + 0x28,iVar8);
              }
              *(longlong *)(*(longlong *)(pbVar25 + 0x28) + (longlong)iVar8 * 8) = lVar14;
              lVar14 = local_88;
            }
            iVar8 = *(int *)(lVar11 + 0x24);
            do {
              do {
                uVar20 = uVar20 + 1;
                pbVar26 = local_a8;
                local_78 = uVar20;
                if (iVar8 <= (int)uVar20) goto LAB_1428833b2;
                while( true ) {
                  uVar19 = uVar20 & 0xffff;
                  uVar9 = uVar20;
                  if ((int)uVar20 < 0) {
                    uVar9 = uVar20 + 0xffff;
                    uVar19 = (uVar20 & 0xffff) - 0x10000;
                  }
                  lVar17 = *(longlong *)
                            (*(longlong *)(lVar11 + 0x10) + (longlong)((int)uVar9 >> 0x10) * 8);
                  plVar12 = (longlong *)(lVar17 + (longlong)(int)uVar19 * 0x18);
                  lVar17 = *(longlong *)(lVar17 + (longlong)(int)uVar19 * 0x18);
                  if (lVar17 != 0) break;
                  uVar20 = uVar20 + 1;
                  local_78 = uVar20;
                  if (iVar8 <= (int)uVar20) goto LAB_1428833b2;
                }
              } while ((*(uint *)(lVar17 + 8) & uVar15) != 0);
              uVar9 = *(uint *)(lVar17 + 0xc);
              if ((int)uVar9 < (int)DAT_1469e91c4) {
                uVar19 = uVar9 & 0xffff;
                if ((int)uVar9 < 0) {
                  uVar9 = uVar9 + 0xffff;
                  uVar19 = uVar19 - 0x10000;
                }
                lVar17 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                         (longlong)(int)uVar19 * 0x18;
              }
              else {
                lVar17 = 0;
              }
              local_78 = uVar20;
            } while ((*(uint *)(lVar17 + 8) & uVar18) != 0);
          } while( true );
        }
      }
LAB_1428833b2:
      if (local_b8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_98 != 0) {
        FMemory::Free();
      }
      local_d8 = local_d8 + 1;
      pbVar25 = pbVar26;
    } while (local_d8 < *(int *)(pbVar26 + 0x20));
  }
LAB_1428833ec:
  local_res8 = local_res8 + 1;
  lVar24 = lVar24 + 0x38;
  lVar11 = local_a0;
  if (*(int *)(local_a0 + 0x1d8) <= local_res8) {
    return;
  }
  goto LAB_142882f70;
LAB_142883070:
  if (wVar6 != wVar7) goto LAB_1428833ec;
  goto LAB_142883085;
}



// FUNCTION 142883480 LogAndDiscardRunawayNewlySpawned body=914 status=ok
// SIG undefined LogAndDiscardRunawayNewlySpawned(void)

void FTickTaskLevel::LogAndDiscardRunawayNewlySpawned(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint *puVar17;
  int local_98;
  uint uStack_94;
  undefined8 uStack_90;
  int iStack_84;
  int iStack_80;
  int iStack_48;
  uint uStack_44;
  uint *local_40;
  uint uStack_38;
  int iStack_34;
  int local_30;
  longlong *local_28;
  
  *(undefined4 *)(param_1 + 0x118) = param_2;
  FUN_142874100();
  plVar1 = (longlong *)(param_1 + 0xc0);
  local_98 = 0;
  uStack_94 = 1;
  iVar11 = *(int *)(param_1 + 0xe8);
  uStack_90 = (uint *)(param_1 + 0xd0);
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar11 != 0) {
    puVar17 = *(uint **)(param_1 + 0xe0);
    if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
      puVar17 = uStack_90;
    }
    uVar10 = *puVar17;
    iStack_80 = 0;
    while (uVar10 == 0) {
      lVar12 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar5 = (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar5) goto LAB_14288354f;
      uVar10 = puVar17[lVar12 + 1];
    }
    uStack_94 = -uVar10 & uVar10;
    iVar8 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_84 = (iStack_80 - iVar8) + 0x1f;
    if (iVar11 < iStack_84) {
LAB_14288354f:
      iStack_84 = iVar11;
    }
  }
  uStack_38 = 0xffffffff;
  iStack_34 = iStack_84;
  iStack_48 = local_98;
  uStack_44 = uStack_94;
  local_30 = iStack_80;
  local_40 = uStack_90;
  local_28 = plVar1;
  if (iVar11 <= iStack_84) {
LAB_1428837ec:
    ScheduleTickFunctionCooldowns(param_1);
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty(plVar1,0);
    return;
  }
LAB_1428835c0:
  uVar3 = *(ulonglong *)(*plVar1 + (longlong)iStack_34 * 0x10);
  if (0.0 < *(float *)(uVar3 + 0x40)) {
    if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
      uVar13 = (longlong)*(int *)(param_1 + 0x50) - 1;
      iVar11 = (int)(uVar3 >> 4);
      uVar14 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
      uVar10 = -(iVar11 + uVar14) ^ uVar14 >> 0xd;
      uVar16 = (iVar11 - uVar14) - uVar10 ^ uVar10 >> 0xc;
      uVar14 = (uVar14 - uVar16) - uVar10 ^ uVar16 << 0x10;
      uVar10 = (uVar10 - uVar14) - uVar16 ^ uVar14 >> 5;
      uVar16 = (uVar16 - uVar14) - uVar10 ^ uVar10 >> 3;
      uVar14 = (uVar14 - uVar16) - uVar10 ^ uVar16 << 10;
      lVar12 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar12 = param_1 + 0x40;
      }
      iVar11 = *(int *)(lVar12 + (((longlong)(int)((uVar10 - uVar14) - uVar16) ^
                                  (ulonglong)(uVar14 >> 0xf)) & uVar13) * 4);
      if (iVar11 != -1) {
        lVar4 = *(longlong *)(param_1 + 8);
        do {
          lVar15 = (longlong)iVar11;
          if (*(ulonglong *)(lVar4 + lVar15 * 0x10) == uVar3) {
            uVar13 = (longlong)*(int *)(lVar4 + 0xc + lVar15 * 0x10) & uVar13;
            piVar9 = (int *)(lVar12 + uVar13 * 4);
            iVar8 = *(int *)(lVar12 + uVar13 * 4);
            if (iVar8 != -1) goto LAB_1428836d6;
            goto LAB_1428836f7;
          }
          iVar11 = *(int *)(lVar4 + 8 + lVar15 * 0x10);
        } while (iVar11 != -1);
      }
    }
    goto LAB_142883765;
  }
  goto LAB_1428837b3;
  while( true ) {
    piVar9 = (int *)(lVar4 + 8 + (longlong)iVar8 * 0x10);
    iVar8 = *piVar9;
    if (iVar8 == -1) break;
LAB_1428836d6:
    if (iVar8 == iVar11) {
      *piVar9 = *(int *)(lVar4 + 8 + lVar15 * 0x10);
      break;
    }
  }
LAB_1428836f7:
  bVar6 = (byte)iVar11 & 0x1f;
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(int *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x38) * 0x10) = iVar11;
  }
  lVar12 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar12 + lVar15 * 0x10) = 0xffffffff;
  if (*(int *)(param_1 + 0x3c) < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x38);
  }
  *(undefined4 *)(lVar12 + 4 + lVar15 * 0x10) = uVar7;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(param_1 + 0x38) = iVar11;
  lVar12 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar12 = param_1 + 0x18;
  }
  if (iVar11 < 0) {
    iVar11 = iVar11 + 0x1f;
  }
  puVar17 = (uint *)(lVar12 + (longlong)(iVar11 >> 5) * 4);
  *puVar17 = *puVar17 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
LAB_142883765:
  iVar11 = *(int *)(param_1 + 0xb8);
  uVar7 = *(undefined4 *)(uVar3 + 0x40);
  uStack_90 = (uint *)((ulonglong)uStack_90 & 0xffffff0000000000);
  *(int *)(param_1 + 0xb8) = iVar11 + 1;
  if (*(int *)(param_1 + 0xbc) < iVar11 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xb0,iVar11);
  }
  local_98 = (int)uVar3;
  uStack_94 = (uint)(uVar3 >> 0x20);
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar11 * 0x10);
  *puVar2 = local_98;
  puVar2[1] = uStack_94;
  puVar2[2] = uVar7;
  puVar2[3] = uStack_90._4_4_;
LAB_1428837b3:
  uStack_38 = uStack_38 & ~uStack_44;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_48);
  if ((int)local_40[6] <= iStack_34) goto LAB_1428837ec;
  goto LAB_1428835c0;
}



// FUNCTION 142883820 MakeSureMapNameIsValid body=419 status=ok
// SIG undefined MakeSureMapNameIsValid(void)

char UEngine::MakeSureMapNameIsValid(undefined8 param_1,undefined2 **param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 local_res18 [16];
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  ulonglong local_20;
  
  FUN_1428d4fe0(&local_38);
  cVar2 = FPackageName::IsShortPackageName(&local_38);
  if (cVar2 == '\0') {
    puVar6 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar6 = local_38;
    }
    puVar3 = (undefined8 *)FName::FName(local_res18,puVar6,1);
    uVar1 = *puVar3;
    uVar4 = UPackage::GetPrivateStaticClass();
    lVar5 = FUN_141799680(uVar4,0,uVar1,0,0,0,0);
    if ((lVar5 == 0) && (cVar2 = FUN_1416f0740(&local_38,0,0,1), cVar2 == '\0')) {
      cVar2 = '\0';
    }
    else {
      puVar6 = local_38;
      cVar2 = '\x01';
      if (param_2 != &local_38) {
        *(int *)(param_2 + 1) = local_30;
        if ((local_30 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,local_30);
          ::_guard_xfg_dispatch_icall_nop(*param_2,puVar6,(longlong)local_30 * 2);
        }
      }
    }
  }
  else {
    local_28 = (undefined2 *)0x0;
    local_20 = 0;
    cVar2 = FUN_14170afe0(&local_38,&local_28,0);
    puVar6 = local_28;
    if ((cVar2 != '\0') && (param_2 != &local_28)) {
      lVar5 = (longlong)(int)local_20;
      *(int *)(param_2 + 1) = (int)local_20;
      if (((int)local_20 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,local_20 & 0xffffffff);
        ::_guard_xfg_dispatch_icall_nop(*param_2,puVar6,lVar5 * 2);
      }
    }
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free(local_28);
    }
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return cVar2;
}



// FUNCTION 1428839d0 MakeUniqueCurveName body=255 status=ok
// SIG undefined MakeUniqueCurveName(void)

undefined8
UTimelineTemplate::MakeUniqueCurveName(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined2 *local_18;
  int local_10;
  
  local_res10 = *(undefined8 *)(param_2 + 0x18);
  FName::ToString(&local_res10,&local_18);
  puVar3 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar3 = local_18;
  }
  FName::FName(&local_res8,puVar3,1);
  lVar1 = FUN_141799680(0,param_3,local_res8,0,0,0,0);
  while (lVar1 != 0) {
    local_res8._4_4_ = (int)((ulonglong)local_res8 >> 0x20);
    puVar3 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar3 = local_18;
    }
    iVar4 = local_res8._4_4_ + 1;
    puVar2 = (undefined8 *)FName::FName(&local_res10,puVar3,iVar4,1);
    local_res8 = *puVar2;
    lVar1 = FUN_141799680(0,param_3,local_res8,0,0,0,0);
  }
  FName::ToString(&local_res8,param_1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142883b10 FUN_142883b10 body=241 status=ok
// SIG undefined FUN_142883b10(void)

void FUN_142883b10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(undefined8 *)(*(longlong *)(param_2 + 0x288) + 0x38) =
       *(undefined8 *)(*(longlong *)(param_2 + 0x1c8) + 0x30);
  lVar2 = *(longlong *)(param_2 + 0x1c8);
  plVar1 = *(longlong **)(lVar2 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    FUN_1425d1610(plVar1,0x11a);
    (**(code **)(*plVar1 + 0x380))(plVar1,*(undefined8 *)(param_2 + 0x288));
    lVar2 = UWorld::FindOrAddCollectionByType(*(undefined8 *)(param_2 + 0x288),0);
    *(longlong **)(lVar2 + 0x10) = plVar1;
    lVar2 = UWorld::FindOrAddCollectionByType(*(undefined8 *)(param_2 + 0x288),2);
    *(longlong **)(lVar2 + 0x10) = plVar1;
    lVar2 = *(longlong *)(param_2 + 0x1c8);
  }
  plVar1 = *(longlong **)(lVar2 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x380))(plVar1,*(undefined8 *)(param_2 + 0x288));
    *(undefined8 *)(*(longlong *)(param_2 + 0x288) + 0x108) =
         *(undefined8 *)(*(longlong *)(param_2 + 0x1c8) + 0x38);
    lVar2 = UWorld::FindOrAddCollectionByType(*(undefined8 *)(param_2 + 0x288),0);
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(*(longlong *)(param_2 + 0x1c8) + 0x38);
  }
  FUN_1428d7bc0(*(undefined8 *)(param_2 + 0x288),0);
  return;
}



// FUNCTION 142883c20 OnListTimers body=280 status=ok
// SIG undefined OnListTimers(void)

void OnListTimers(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 400) == 0) {
      lVar3 = *(longlong *)(param_1 + 0x3f8);
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x90);
    }
    lVar1 = *(longlong *)(lVar3 + 0x10);
    lVar2 = (longlong)*(int *)(lVar3 + 0x18) * 0x90 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x90) {
      FUN_1428929d0(lVar1 + 0x10,local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    lVar1 = *(longlong *)(lVar3 + 0x20);
    lVar2 = (longlong)*(int *)(lVar3 + 0x28) * 0x90 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x90) {
      FUN_1428929d0(lVar1 + 0x10,local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    lVar1 = *(longlong *)(lVar3 + 0x30);
    lVar3 = (longlong)*(int *)(lVar3 + 0x38) * 0x90 + lVar1;
    for (; lVar1 != lVar3; lVar1 = lVar1 + 0x90) {
      FUN_1428929d0(lVar1 + 0x10,local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142883d40 FUN_142883d40 body=197 status=ok
// SIG undefined FUN_142883d40(void)

void FUN_142883d40(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if ((*(byte *)(param_1 + 0x8d8) & 1) != 0) {
    for (iVar5 = 0; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0xc20))); iVar5 = iVar5 + 1) {
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xc18) + (longlong)iVar5 * 8) + 0x240)
          != 0) {
        plVar3 = (longlong *)UListView::OnItemSelectionChanged();
        iVar4 = 0;
        if (0 < (int)plVar3[1]) {
          lVar6 = 0;
          do {
            lVar1 = *(longlong *)(*(longlong *)(*plVar3 + lVar6) + 0x30);
            if ((lVar1 != 0) && (plVar2 = *(longlong **)(lVar1 + 0x520), plVar2 != (longlong *)0x0))
            {
              (**(code **)(*plVar2 + 0x788))(plVar2,param_2);
            }
            iVar4 = iVar4 + 1;
            lVar6 = lVar6 + 8;
          } while (iVar4 < (int)plVar3[1]);
        }
      }
    }
  }
  return;
}



// FUNCTION 142883e10 FUN_142883e10 body=79 status=ok
// SIG undefined FUN_142883e10(void)

void FUN_142883e10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_142393b20();
  lVar2 = param_1 + 0x2d0;
  if (param_1 == 0) {
    lVar2 = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
  FUN_14287ffc0(lVar2,lVar1 + 0x720);
  return;
}



// FUNCTION 142883e90 FUN_142883e90 body=184 status=ok
// SIG undefined FUN_142883e90(void)

void FUN_142883e90(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_142394230();
  lVar2 = *(longlong *)(param_1 + 0x120);
  lVar5 = param_1 + 0x2d0;
  if (param_1 == 0) {
    lVar5 = 0;
  }
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  plVar1 = *(longlong **)(lVar2 + 0x720);
  plVar4 = plVar1;
  if (plVar1 != plVar1 + *(int *)(lVar2 + 0x728)) {
    while (*plVar4 != lVar5) {
      plVar4 = plVar4 + 1;
      if (plVar4 == plVar1 + *(int *)(lVar2 + 0x728)) {
        return;
      }
    }
    iVar3 = (int)((longlong)plVar4 - (longlong)plVar1 >> 3);
    if (iVar3 != -1) {
      _guard_xfg_dispatch_icall_nop
                (plVar1 + iVar3,plVar1 + iVar3 + 1,
                 (longlong)((*(int *)(lVar2 + 0x728) - iVar3) + -1) << 3);
      *(int *)(lVar2 + 0x728) = *(int *)(lVar2 + 0x728) + -1;
    }
  }
  return;
}



// FUNCTION 142883f60 FUN_142883f60 body=163 status=ok
// SIG undefined FUN_142883f60(void)

void FUN_142883f60(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar1,L"nosound");
  if (((cVar2 != '\0') || (DAT_1468b5a25 != '\0')) ||
     ((DAT_1468b616c != '\0' && (DAT_1468b616e == '\0')))) {
    *(uint *)(param_1 + 0x960) = *(uint *)(param_1 + 0x960) & 0xfffffffe;
  }
  uVar1 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar1,L"enablesound");
  if (cVar2 != '\0') {
    *(uint *)(param_1 + 0x960) = *(uint *)(param_1 + 0x960) | 1;
  }
  uVar1 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar1,L"noailogging");
  if (cVar2 != '\0') {
    *(uint *)(param_1 + 0x958) = *(uint *)(param_1 + 0x958) | 8;
  }
  uVar1 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar1,L"enableailogging");
  if (cVar2 != '\0') {
    *(uint *)(param_1 + 0x958) = *(uint *)(param_1 + 0x958) & 0xfffffff7;
  }
  return;
}



// FUNCTION 142884010 FUN_142884010 body=1583 status=ok
// SIG undefined FUN_142884010(void)

undefined8 FUN_142884010(short *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  wchar_t *pwVar1;
  char cVar2;
  wint_t wVar3;
  wint_t wVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  wchar_t **ppwVar8;
  wchar_t *pwVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  wint_t *pwVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  longlong lVar18;
  wchar_t *pwVar19;
  int iVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  wchar_t *local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  int local_90;
  undefined4 local_8c;
  wchar_t *local_88;
  int local_80;
  undefined4 local_7c;
  wchar_t *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68 [5];
  
  if (*param_1 != 0) {
    pwVar19 = (wchar_t *)0x0;
    lVar12 = -1;
    local_8c = 0;
    local_98 = (wchar_t *)0x0;
    lVar18 = -1;
    do {
      lVar18 = lVar18 + 1;
    } while (param_1[lVar18] != 0);
    iVar15 = (int)lVar18 + 1;
    local_90 = iVar15;
    if (0 < iVar15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    }
    FGenericPlatformString::Memcpy(local_98,param_1,(longlong)iVar15 * 2);
    uVar7 = FString::TrimStartAndEnd(&local_98,&local_88);
    ppwVar8 = (wchar_t **)FString::ToLower(uVar7,&local_78);
    if (&local_98 != ppwVar8) {
      if (local_98 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_98 = *ppwVar8;
      *ppwVar8 = (wchar_t *)0x0;
      local_90 = *(int *)(ppwVar8 + 1);
      local_8c = *(undefined4 *)((longlong)ppwVar8 + 0xc);
      ppwVar8[1] = (wchar_t *)0x0;
    }
    if (local_78 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_88 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    pwVar9 = L"";
    if (local_90 != 0) {
      pwVar9 = local_98;
    }
    dVar21 = _wtof(pwVar9);
    fVar22 = (float)dVar21;
    local_a8 = (wchar_t *)0x0;
    pwVar9 = L"";
    if (local_90 != 0) {
      pwVar9 = local_98;
    }
    local_a0 = (wchar_t *)0x0;
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar9,L'x');
    if (pwVar9 != (wchar_t *)0x0) {
      pwVar9 = L"";
      if (local_90 != 0) {
        pwVar9 = local_98;
      }
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar9,L'x');
      pwVar9 = pwVar9 + 1;
      if (local_a8 != pwVar9) {
        pwVar13 = pwVar19;
        if ((pwVar9 != (wchar_t *)0x0) && (*pwVar9 != L'\0')) {
          do {
            lVar12 = lVar12 + 1;
          } while (pwVar9[lVar12] != L'\0');
          pwVar13 = (wchar_t *)(ulonglong)((int)lVar12 + 1);
        }
        iVar20 = (int)pwVar13;
        iVar15 = local_a0._4_4_;
        if (local_a0._4_4_ != iVar20) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a8,pwVar13);
          iVar15 = local_a0._4_4_;
        }
        iVar5 = (int)local_a0 + iVar20;
        local_a0 = (wchar_t *)CONCAT44(local_a0._4_4_,iVar5);
        if (iVar15 < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
        }
        if (iVar20 != 0) {
          _guard_xfg_dispatch_icall_nop(local_a8,pwVar9,(longlong)iVar20 * 2);
        }
      }
      ppwVar8 = (wchar_t **)FString::TrimStartAndEnd(&local_a8,&local_78);
      if (&local_a8 != ppwVar8) {
        if (local_a8 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_a8 = *ppwVar8;
        *ppwVar8 = (wchar_t *)0x0;
        local_a0 = ppwVar8[1];
        ppwVar8[1] = (wchar_t *)0x0;
      }
      if (local_78 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      pwVar13 = local_a8;
      if (((pwVar9 == (wchar_t *)0x0) || ((int)local_a0 == 0)) ||
         (uVar6 = (int)local_a0 - 1, (int)uVar6 < 1)) goto LAB_142884607;
      uVar11 = (int)local_a0 + 0x7ffffffd;
      uVar16 = uVar6;
      if ((int)local_a0 - 2U < uVar6) {
        uVar16 = (int)local_a0 - 2U;
      }
      uVar10 = uVar16;
      if ((uVar16 <= uVar11) && (uVar10 = uVar6, uVar11 < uVar6)) {
        uVar10 = uVar11;
      }
      iVar15 = uVar10 - uVar16;
      local_88 = (wchar_t *)0x0;
      local_7c = 0;
      local_80 = iVar15 + 1;
      if (iVar15 == 0) {
        local_80 = 0;
      }
      if (0 < local_80) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        pwVar1 = local_88;
        if (0 < local_80) {
          wcsncpy(local_88,pwVar13 + (int)uVar16,(longlong)iVar15);
          pwVar1[iVar15] = L'\0';
        }
      }
      uVar11 = 0;
      uVar6 = (int)local_a0 - 1;
      if ((int)local_a0 == 0) {
        uVar6 = uVar11;
      }
      uVar16 = uVar6 + 0x7ffffffd;
      uVar10 = (int)local_a0 - 1;
      if ((int)local_a0 == 0) {
        uVar10 = uVar11;
      }
      if (uVar6 - 2 < uVar10) {
        uVar10 = uVar6 - 2;
      }
      uVar6 = (int)local_a0 - 1;
      if ((int)local_a0 == 0) {
        uVar6 = uVar11;
      }
      uVar11 = uVar10;
      if ((uVar10 <= uVar16) && (uVar11 = uVar6, uVar16 < uVar6)) {
        uVar11 = uVar16;
      }
      local_78 = (wchar_t *)0x0;
      pwVar13 = L"";
      if ((int)local_a0 != 0) {
        pwVar13 = local_a8;
      }
      iVar20 = 0;
      iVar5 = uVar11 - uVar10;
      local_6c = 0;
      iVar15 = iVar5 + 1;
      if (iVar5 == 0) {
        iVar15 = 0;
      }
      local_70 = iVar15;
      if ((0 < iVar15) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0), iVar15 = local_70,
         pwVar19 = local_78, 0 < local_70)) {
        wcsncpy(local_78,pwVar13 + (int)uVar10,(longlong)iVar5);
        pwVar19[iVar5] = L'\0';
      }
      uVar17 = *param_4;
      cVar2 = FString::IsNumeric(&local_88);
      if (cVar2 == '\0') {
        pwVar14 = &DAT_1451d36d4;
        pwVar13 = L"";
        if (iVar15 != 0) {
          pwVar13 = pwVar19;
        }
        do {
          wVar3 = *(wint_t *)((longlong)(pwVar13 + -0xa28e9b6a) + (longlong)pwVar14);
          if ((wVar3 == 0) && (*pwVar14 == 0)) goto LAB_1428843bf;
          if (wVar3 != *pwVar14) {
            wVar3 = towlower(wVar3);
            wVar4 = towlower(*pwVar14);
            if (wVar3 != wVar4) goto LAB_1428843b5;
          }
          pwVar14 = pwVar14 + 1;
        } while( true );
      }
      goto LAB_142884571;
    }
    goto LAB_142884607;
  }
  goto LAB_142884623;
LAB_1428843b5:
  if (wVar3 != wVar4) {
    pwVar14 = &DAT_1451ca274;
    pwVar13 = L"";
    if (local_80 != 0) {
      pwVar13 = local_88;
    }
    do {
      wVar3 = *(wint_t *)((longlong)pwVar14 + (longlong)(pwVar13 + -0xa28e513a));
      if ((wVar3 == 0) && (*pwVar14 == 0)) goto LAB_14288442c;
      if (wVar3 != *pwVar14) {
        wVar3 = towlower(wVar3);
        wVar4 = towlower(*pwVar14);
        if (wVar3 != wVar4) goto LAB_142884422;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_1428843bf:
  uVar17 = 1;
  iVar20 = 2;
  goto LAB_14288449b;
LAB_142884481:
  if (wVar3 == wVar4) {
LAB_14288448b:
    uVar17 = 2;
    iVar20 = 1;
  }
  goto LAB_14288449b;
LAB_142884422:
  if (wVar3 != wVar4) {
    pwVar14 = &DAT_1451ca28c;
    pwVar13 = L"";
    if (local_80 != 0) {
      pwVar13 = local_88;
    }
    do {
      wVar3 = *(wint_t *)((longlong)pwVar14 + (longlong)(pwVar13 + -0xa28e5146));
      if ((wVar3 == 0) && (*pwVar14 == 0)) goto LAB_14288448b;
      if (wVar3 != *pwVar14) {
        wVar3 = towlower(wVar3);
        wVar4 = towlower(*pwVar14);
        if (wVar3 != wVar4) goto LAB_142884481;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_14288442c:
  uVar17 = 0;
  iVar20 = 1;
LAB_14288449b:
  pwVar13 = L"";
  iVar5 = 0;
  iVar15 = (int)local_a0 + -1;
  if ((int)local_a0 == 0) {
    iVar15 = iVar5;
  }
  iVar15 = iVar15 - iVar20;
  if ((int)local_a0 != 0) {
    iVar5 = (int)local_a0 + -1;
    pwVar13 = local_a8;
  }
  iVar20 = 0;
  if ((-1 < iVar15) && (iVar20 = iVar5, iVar15 < iVar5)) {
    iVar20 = iVar15;
  }
  local_78 = (wchar_t *)0x0;
  local_6c = 0;
  local_70 = iVar20 + 1;
  if (iVar20 == 0) {
    local_70 = 0;
  }
  if ((0 < local_70) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0), pwVar1 = local_78, 0 < local_70))
  {
    wcsncpy(local_78,pwVar13,(longlong)iVar20);
    pwVar1[iVar20] = L'\0';
  }
  ppwVar8 = (wchar_t **)FString::TrimStartAndEnd(&local_78,local_68);
  if (&local_a8 != ppwVar8) {
    if (local_a8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_a8 = *ppwVar8;
    *ppwVar8 = (wchar_t *)0x0;
    local_a0 = ppwVar8[1];
    ppwVar8[1] = (wchar_t *)0x0;
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (local_78 != (wchar_t *)0x0) {
    FMemory::Free();
  }
LAB_142884571:
  cVar2 = FString::IsNumeric(&local_a8);
  if (cVar2 == '\0') {
    if (pwVar19 != (wchar_t *)0x0) {
      FMemory::Free(pwVar19);
    }
    if (local_88 != (wchar_t *)0x0) {
      FMemory::Free();
    }
LAB_142884607:
    if (local_a8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_98 != (wchar_t *)0x0) {
      FMemory::Free();
    }
LAB_142884623:
    uVar7 = 0;
  }
  else {
    dVar21 = _wtof(pwVar9);
    fVar23 = (float)dVar21;
    *param_2 = (int)(longlong)fVar22;
    if (fVar23 <= 0.0) {
      fVar23 = 0.0;
    }
    *param_3 = (int)(longlong)fVar23;
    *param_4 = uVar17;
    if (pwVar19 != (wchar_t *)0x0) {
      FMemory::Free(pwVar19);
    }
    if (local_88 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_a8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_98 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 142884640 FUN_142884640 body=91 status=ok
// SIG undefined FUN_142884640(void)

undefined8 FUN_142884640(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
  while( true ) {
    if (plVar2 == plVar1) {
      lVar3 = FUN_14286b170(DAT_146b17150,0);
      return *(undefined8 *)(lVar3 + 0x1c8);
    }
    if (*(longlong *)(*plVar2 + 0x288) == param_2) break;
    plVar2 = plVar2 + 1;
  }
  return *(undefined8 *)(*plVar2 + 0x1c8);
}



// FUNCTION 1428846a0 FUN_1428846a0 body=40 status=ok
// SIG undefined FUN_1428846a0(void)

void FUN_1428846a0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x280))(param_1,0);
  *(byte *)((longlong)param_1 + 0x179) = *(byte *)((longlong)param_1 + 0x179) & 0xfd;
  *(byte *)((longlong)param_1 + 0x179) = *(byte *)((longlong)param_1 + 0x179) | 4;
  return;
}



// FUNCTION 1428846d0 FUN_1428846d0 body=61 status=ok
// SIG undefined FUN_1428846d0(void)

void FUN_1428846d0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x280))(param_1,0);
  FUN_14288d7b0(param_1 + 0x2f,0,0,1);
  *(byte *)((longlong)param_1 + 0x179) = *(byte *)((longlong)param_1 + 0x179) & 0xfd;
  *(byte *)((longlong)param_1 + 0x179) = *(byte *)((longlong)param_1 + 0x179) | 4;
  return;
}



// FUNCTION 142884710 FUN_142884710 body=1248 status=ok
// SIG undefined FUN_142884710(void)

void FUN_142884710(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar4 = UObjectBaseUtility::GetOutermost();
  lVar5 = GetTransientPackage();
  if ((lVar4 == lVar5) || (DAT_1468c2177 != '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uVar12 = 0;
  uVar9 = uVar12;
  while( true ) {
    iVar11 = (int)uVar9;
    if ((iVar11 < 0) || (*(int *)(param_1 + 0x50) <= iVar11)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    uVar9 = uVar12;
    if (!bVar2) break;
    lVar4 = *(longlong *)(param_1 + 0x48) + (longlong)iVar11 * 0x18;
    if (((*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10 + (longlong)iVar11 * 0x18) != 0) &&
        (bVar3)) && (*(char *)(lVar4 + 8) == '\0')) {
      lVar6 = UPackage::GetPrivateStaticClass();
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x20) + 0x10);
      if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        puVar7 = (undefined8 *)
                 UTimelineTemplate::MakeUniqueCurveName(local_38,*(longlong *)(lVar4 + 0x10),lVar1);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar7;
        }
        puVar7 = (undefined8 *)FName::FName(local_res8,puVar10,1);
        uVar8 = FUN_1420c4be0(*(undefined8 *)(lVar4 + 0x10),lVar1,*puVar7);
        *(undefined8 *)(lVar4 + 0x10) = uVar8;
        if (local_38[0] != 0) {
          FMemory::Free();
        }
      }
    }
    uVar9 = (ulonglong)(iVar11 + 1);
  }
  while( true ) {
    iVar11 = (int)uVar9;
    if ((iVar11 < 0) || (*(int *)(param_1 + 0x40) <= iVar11)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    uVar9 = uVar12;
    if (!bVar2) break;
    lVar4 = *(longlong *)(param_1 + 0x38) + (longlong)iVar11 * 0x18;
    if (((*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10 + (longlong)iVar11 * 0x18) != 0) &&
        (bVar3)) && (*(char *)(lVar4 + 8) == '\0')) {
      lVar6 = UPackage::GetPrivateStaticClass();
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x20) + 0x10);
      if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        puVar7 = (undefined8 *)
                 UTimelineTemplate::MakeUniqueCurveName(local_38,*(longlong *)(lVar4 + 0x10),lVar1);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar7;
        }
        puVar7 = (undefined8 *)FName::FName(local_res8,puVar10,1);
        lVar5 = *(longlong *)(lVar4 + 0x10);
        uVar8 = *puVar7;
        if (lVar5 != 0) {
          lVar6 = lVar1;
          if ((lVar1 + 1U & 0xfffffffffffffffe) == 0) {
            lVar6 = GetTransientPackage(extraout_XMM0_Da,lVar1);
          }
          uVar9 = FUN_1417987a0(lVar5,lVar6,uVar8,0xefffffff,0,0,0xff800000);
        }
        *(ulonglong *)(lVar4 + 0x10) = uVar9;
        if (local_38[0] != 0) {
          FMemory::Free();
        }
      }
    }
    uVar9 = (ulonglong)(iVar11 + 1);
  }
  while( true ) {
    iVar11 = (int)uVar9;
    if ((iVar11 < 0) || (*(int *)(param_1 + 0x60) <= iVar11)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    uVar9 = uVar12;
    if (!bVar2) break;
    lVar4 = *(longlong *)(param_1 + 0x58) + (longlong)iVar11 * 0x18;
    if (((*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10 + (longlong)iVar11 * 0x18) != 0) &&
        (bVar3)) && (*(char *)(lVar4 + 8) == '\0')) {
      lVar6 = UPackage::GetPrivateStaticClass();
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x20) + 0x10);
      if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        puVar7 = (undefined8 *)
                 UTimelineTemplate::MakeUniqueCurveName(local_38,*(longlong *)(lVar4 + 0x10),lVar1);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar7;
        }
        puVar7 = (undefined8 *)FName::FName(local_res8,puVar10,1);
        lVar5 = *(longlong *)(lVar4 + 0x10);
        uVar8 = *puVar7;
        if (lVar5 != 0) {
          lVar6 = lVar1;
          if ((lVar1 + 1U & 0xfffffffffffffffe) == 0) {
            lVar6 = GetTransientPackage(extraout_XMM0_Da_00,lVar1);
          }
          uVar9 = FUN_1417987a0(lVar5,lVar6,uVar8,0xefffffff,0,0,0xff800000);
        }
        *(ulonglong *)(lVar4 + 0x10) = uVar9;
        if (local_38[0] != 0) {
          FMemory::Free();
        }
      }
    }
    uVar9 = (ulonglong)(iVar11 + 1);
  }
  while( true ) {
    iVar11 = (int)uVar9;
    if ((iVar11 < 0) || (*(int *)(param_1 + 0x70) <= iVar11)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) break;
    lVar4 = *(longlong *)(param_1 + 0x68) + (longlong)iVar11 * 0x18;
    if (((*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10 + (longlong)iVar11 * 0x18) != 0) &&
        (bVar3)) && (*(char *)(lVar4 + 8) == '\0')) {
      lVar6 = UPackage::GetPrivateStaticClass();
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x20) + 0x10);
      if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        puVar7 = (undefined8 *)
                 UTimelineTemplate::MakeUniqueCurveName(local_38,*(longlong *)(lVar4 + 0x10),lVar1);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar7;
        }
        puVar7 = (undefined8 *)FName::FName(local_res8,puVar10,1);
        lVar5 = *(longlong *)(lVar4 + 0x10);
        uVar8 = *puVar7;
        uVar9 = uVar12;
        if (lVar5 != 0) {
          lVar6 = lVar1;
          if ((lVar1 + 1U & 0xfffffffffffffffe) == 0) {
            lVar6 = GetTransientPackage(extraout_XMM0_Da_01,lVar1);
          }
          uVar9 = FUN_1417987a0(lVar5,lVar6,uVar8,0xefffffff,0,0,0xff800000);
        }
        *(ulonglong *)(lVar4 + 0x10) = uVar9;
        if (local_38[0] != 0) {
          FMemory::Free();
        }
      }
    }
    uVar9 = (ulonglong)(iVar11 + 1);
  }
  puVar7 = (undefined8 *)FGuid::NewGuid(local_38);
  uVar8 = puVar7[1];
  *(undefined8 *)(param_1 + 0x88) = *puVar7;
  *(undefined8 *)(param_1 + 0x90) = uVar8;
  return;
}



// FUNCTION 142884c80 FUN_142884c80 body=50 status=ok
// SIG undefined FUN_142884c80(void)

void FUN_142884c80(longlong *param_1)

{
  longlong lVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_14287ffc0(param_1 + 0x92,lVar1 + 0x720);
  return;
}



// FUNCTION 142884cc0 FUN_142884cc0 body=166 status=ok
// SIG undefined FUN_142884cc0(void)

void FUN_142884cc0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    puVar1 = *(undefined8 **)(lVar2 + 0x720);
    puVar4 = puVar1;
    if (puVar1 != puVar1 + *(int *)(lVar2 + 0x728)) {
      while ((longlong *)*puVar4 != param_1 + 0x92) {
        puVar4 = puVar4 + 1;
        if (puVar4 == puVar1 + *(int *)(lVar2 + 0x728)) {
          return;
        }
      }
      iVar3 = (int)((longlong)puVar4 - (longlong)puVar1 >> 3);
      if (iVar3 != -1) {
        _guard_xfg_dispatch_icall_nop
                  (puVar1 + iVar3,puVar1 + iVar3 + 1,
                   (longlong)((*(int *)(lVar2 + 0x728) - iVar3) + -1) << 3);
        *(int *)(lVar2 + 0x728) = *(int *)(lVar2 + 0x728) + -1;
      }
    }
  }
  return;
}



// FUNCTION 142884d70 FUN_142884d70 body=263 status=ok
// SIG undefined FUN_142884d70(void)

void FUN_142884d70(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,"MovieSceneCapture",1);
  plVar2 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x68))(plVar2);
  }
  FUN_1423e1800();
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x48))(DAT_1468b1f88,DAT_146b17660);
  FUN_142439de0(1);
  plVar2 = *(longlong **)(param_1 + 0xbc0);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
    plVar2 = *(longlong **)(param_1 + 0xbc0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,1);
    }
    *(undefined8 *)(param_1 + 0xbc0) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0xbc8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,1);
  }
  plVar2 = *(longlong **)(param_1 + 0x818);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x298))(plVar2,param_1);
    *(undefined8 *)(param_1 + 0x818) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x7f8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x280))(plVar2,param_1);
    *(undefined8 *)(param_1 + 0x7f8) = 0;
  }
  FUN_14288f860(param_1);
  return;
}



// FUNCTION 142884e80 PreGarbageCollect body=82 status=ok
// SIG undefined PreGarbageCollect(void)

void UEngine::PreGarbageCollect(void)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res8;
  local_res8[0] = 0;
  local_18 = UE4Function_Private::
             TFunctionRefCaller<<lambda_dabe910c6392f1e11c71dabacb424adb>_const_,void___cdecl(UObject_*)>
             ::Call;
  uVar1 = FUN_142a2f930();
  FUN_1417a43b0(uVar1,&local_18,1,0x10,0);
  return;
}



// FUNCTION 142884ee0 FUN_142884ee0 body=641 status=ok
// SIG undefined FUN_142884ee0(void)

undefined8 FUN_142884ee0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 local_res10;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38 [2];
  
  *(undefined1 *)(*(longlong *)(param_2 + 0x288) + 0x700) = 0;
  if (0 < *(int *)(param_2 + 0x1e8)) {
    plVar2 = (longlong *)(param_2 + 0x200);
    if ((wchar_t *)*plVar2 != L"Current map change still in progress") {
      iVar9 = 0;
      *(undefined4 *)(param_2 + 0x208) = 0;
      if (*(int *)(param_2 + 0x20c) != 0x25) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar2,0x25);
        iVar9 = *(int *)(param_2 + 0x208);
      }
      *(int *)(param_2 + 0x208) = iVar9 + 0x25;
      if (*(int *)(param_2 + 0x20c) < iVar9 + 0x25) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar2,iVar9);
      }
      builtin_wcsncpy((wchar_t *)*plVar2,L"Current map change still in progress",0x25);
    }
    return 0;
  }
  puVar1 = (ulonglong *)(param_2 + 0x1e0);
  uVar7 = 0;
  *(undefined4 *)(param_2 + 0x1e8) = 0;
  if (0x7fffffff < *(uint *)(param_2 + 0x1ec)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(puVar1,0);
  }
  iVar9 = *(int *)(param_3 + 1);
  if (iVar9 != 0) {
    iVar4 = *(int *)(param_2 + 0x1e8);
    if (*(int *)(param_2 + 0x1ec) < iVar4 + iVar9) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(puVar1);
      iVar4 = *(int *)(param_2 + 0x1e8);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*puVar1 + (longlong)iVar4 * 8),(void *)*param_3,(longlong)iVar9 << 3);
    *(int *)(param_2 + 0x1e8) = *(int *)(param_2 + 0x1e8) + iVar9;
  }
  lVar3 = *(longlong *)(param_2 + 0x288);
  if ((lVar3 != 0) && (puVar8 = (undefined8 *)(lVar3 + 0x808), puVar8 != param_3)) {
    iVar9 = *(int *)(param_3 + 1);
    _Src = (void *)*param_3;
    *(int *)(lVar3 + 0x810) = iVar9;
    if ((iVar9 == 0) && (*(int *)(lVar3 + 0x814) == 0)) {
      *(undefined4 *)(lVar3 + 0x814) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar8,iVar9);
      _guard_xfg_dispatch_icall_nop((void *)*puVar8,_Src,(longlong)iVar9 << 3);
    }
  }
  puVar8 = (undefined8 *)*puVar1;
  uVar10 = (longlong)*(int *)(param_2 + 0x1e8) & 0x1fffffffffffffff;
  if (puVar8 + *(int *)(param_2 + 0x1e8) < puVar8) {
    uVar10 = uVar7;
  }
  if (uVar10 != 0) {
    do {
      local_res10 = *puVar8;
      uVar6 = *(undefined8 *)(param_2 + 200);
      local_48 = 0;
      local_40 = 0;
      puVar5 = (undefined8 *)operator_new(0x20,&local_48);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_GetPoolName_1451dfbc0;
        puVar5[1] = FUN_142865dd0;
        puVar5[2] = uVar6;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[3] = uVar6;
        *puVar5 = &PTR_GetPoolName_1451dfc08;
      }
      uVar6 = FName::ToString(&local_res10,local_38);
      FUN_1416fec20(uVar6,&local_48,0,0,0xffffffff);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar10);
  }
  return 1;
}



// FUNCTION 142885180 QueueAllTicks body=702 status=ok
// SIG undefined QueueAllTicks(void)

void FTickTaskLevel::QueueAllTicks(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  float fVar13;
  float fVar14;
  int local_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  int iStack_94;
  int iStack_90;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  int iStack_44;
  int local_40;
  longlong *local_38;
  
  uVar9 = FUN_142874100();
  plVar1 = (longlong *)(param_1 + 8);
  local_a8 = 0;
  uStack_a4 = 1;
  iVar4 = *(int *)(param_1 + 0x30);
  uStack_a0 = (uint *)(param_1 + 0x18);
  iStack_94 = 0;
  iStack_90 = 0;
  if (iVar4 != 0) {
    puVar12 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar12 = uStack_a0;
    }
    uVar5 = *puVar12;
    local_a8 = 0;
    iStack_90 = 0;
    while (uVar5 == 0) {
      lVar10 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar11 = local_a8 + 1;
      bVar6 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar11;
      if (bVar6) goto LAB_14288525d;
      uVar5 = puVar12[lVar10 + 1];
    }
    uStack_a4 = -uVar5 & uVar5;
    iVar11 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    iStack_94 = (iStack_90 - iVar11) + 0x1f;
    if (iVar4 < iStack_94) {
LAB_14288525d:
      iStack_94 = iVar4;
    }
  }
  uStack_48 = 0xffffffff;
  iStack_44 = iStack_94;
  iStack_58 = local_a8;
  uStack_54 = uStack_a4;
  fVar14 = 0.0;
  local_40 = iStack_90;
  local_50 = uStack_a0;
  local_38 = plVar1;
  if (iStack_94 < iVar4) {
    do {
      plVar8 = local_38;
      iVar4 = iStack_44;
      lVar10 = *(longlong *)(*plVar1 + (longlong)iStack_44 * 0x10);
      FUN_142885800(lVar10,uVar9,param_1 + 0x110);
      if (0.0 < *(float *)(lVar10 + 0x40)) {
        TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
        ::Remove(plVar8,iVar4);
        uVar3 = *(undefined4 *)(lVar10 + 0x40);
        iVar4 = *(int *)(param_1 + 0xb8);
        uStack_a0 = (uint *)((ulonglong)uStack_a0 & 0xffffff0000000000);
        *(int *)(param_1 + 0xb8) = iVar4 + 1;
        if (*(int *)(param_1 + 0xbc) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xb0,iVar4);
        }
        local_a8 = (int)lVar10;
        uStack_a4 = (uint)((ulonglong)lVar10 >> 0x20);
        puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar4 * 0x10);
        *puVar2 = local_a8;
        puVar2[1] = uStack_a4;
        puVar2[2] = uVar3;
        puVar2[3] = uStack_a0._4_4_;
      }
      uStack_48 = uStack_48 & ~uStack_54;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
    } while (iStack_44 < (int)local_50[6]);
  }
  lVar10 = *(longlong *)(param_1 + 0x58);
  while ((lVar10 != 0 && (*(char *)(lVar10 + 0xf) == '\x01'))) {
    fVar14 = fVar14 + *(float *)(lVar10 + 0x38);
    FUN_142885800(lVar10,uVar9,param_1 + 0x110);
    iVar4 = *(int *)(param_1 + 0xb8);
    uVar5 = (uint)((ulonglong)uStack_a0 >> 0x20);
    uStack_a0._4_4_ = uVar5 & 0xffffff00;
    uVar7 = uStack_a0._4_4_;
    fVar13 = *(float *)(lVar10 + 0x40) - (*(float *)(param_1 + 0x110) - fVar14);
    *(int *)(param_1 + 0xb8) = iVar4 + 1;
    uStack_a0 = (uint *)(CONCAT44(uVar5,fVar13) & 0xffffff00ffffffff);
    if (*(int *)(param_1 + 0xbc) < iVar4 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xb0,iVar4);
    }
    local_a8 = (int)lVar10;
    uStack_a4 = (uint)((ulonglong)lVar10 >> 0x20);
    puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar4 * 0x10);
    *puVar2 = local_a8;
    puVar2[1] = uStack_a4;
    puVar2[2] = fVar13;
    puVar2[3] = uVar7;
    lVar10 = *(longlong *)(lVar10 + 0x30);
    *(longlong *)(param_1 + 0x58) = lVar10;
  }
  ScheduleTickFunctionCooldowns(param_1);
  return;
}



// FUNCTION 142885440 QueueNewlySpawned body=952 status=ok
// SIG undefined QueueNewlySpawned(void)

int FTickTaskLevel::QueueNewlySpawned(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint *puVar17;
  ulonglong uVar18;
  int iVar19;
  int local_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  int iStack_a4;
  int iStack_a0;
  int iStack_68;
  uint uStack_64;
  uint *local_60;
  uint uStack_58;
  int iStack_54;
  int local_50;
  longlong *local_48;
  
  *(undefined4 *)(param_1 + 0x118) = param_2;
  iVar19 = 0;
  uVar8 = FUN_142874100();
  plVar1 = (longlong *)(param_1 + 0xc0);
  local_b8 = 0;
  uStack_b4 = 1;
  iVar13 = *(int *)(param_1 + 0xe8);
  uStack_b0 = (uint *)(param_1 + 0xd0);
  iStack_a4 = 0;
  iStack_a0 = 0;
  if (iVar13 != 0) {
    puVar17 = *(uint **)(param_1 + 0xe0);
    if (*(uint **)(param_1 + 0xe0) == (uint *)0x0) {
      puVar17 = uStack_b0;
    }
    uVar12 = *puVar17;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar10 = local_b8 + 1;
      bVar5 = (int)((iVar13 + -1 >> 0x1f & 0x1fU) + iVar13 + -1) >> 5 <= local_b8;
      local_b8 = iVar10;
      if (bVar5) goto LAB_142885520;
      uVar12 = puVar17[lVar9 + 1];
    }
    uStack_b4 = -uVar12 & uVar12;
    iVar10 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    iStack_a4 = (iStack_a0 - iVar10) + 0x1f;
    if (iVar13 < iStack_a4) {
LAB_142885520:
      iStack_a4 = iVar13;
    }
  }
  uStack_58 = 0xffffffff;
  iStack_54 = iStack_a4;
  iStack_68 = local_b8;
  uStack_64 = uStack_b4;
  local_50 = iStack_a0;
  local_60 = uStack_b0;
  local_48 = plVar1;
  if (iVar13 <= iStack_a4) {
LAB_1428857d3:
    ScheduleTickFunctionCooldowns(param_1);
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty(plVar1,0);
    return iVar19;
  }
LAB_142885590:
  uVar3 = *(ulonglong *)(*plVar1 + (longlong)iStack_54 * 0x10);
  FUN_142885800(uVar3,uVar8,param_1 + 0x110);
  iVar19 = iVar19 + 1;
  if (0.0 < *(float *)(uVar3 + 0x40)) {
    if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
      uVar18 = (longlong)*(int *)(param_1 + 0x50) - 1;
      iVar13 = (int)(uVar3 >> 4);
      uVar14 = 0x9e3779b9U - iVar13 ^ iVar13 << 8;
      uVar12 = -(uVar14 + iVar13) ^ uVar14 >> 0xd;
      uVar16 = (iVar13 - uVar14) - uVar12 ^ uVar12 >> 0xc;
      uVar14 = (uVar14 - uVar16) - uVar12 ^ uVar16 << 0x10;
      uVar12 = (uVar12 - uVar14) - uVar16 ^ uVar14 >> 5;
      uVar16 = (uVar16 - uVar14) - uVar12 ^ uVar12 >> 3;
      uVar14 = (uVar14 - uVar16) - uVar12 ^ uVar16 << 10;
      lVar9 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar9 = param_1 + 0x40;
      }
      iVar13 = *(int *)(lVar9 + (((longlong)(int)((uVar12 - uVar14) - uVar16) ^
                                 (ulonglong)(uVar14 >> 0xf)) & uVar18) * 4);
      if (iVar13 != -1) {
        lVar4 = *(longlong *)(param_1 + 8);
        do {
          lVar15 = (longlong)iVar13;
          if (*(ulonglong *)(lVar4 + lVar15 * 0x10) == uVar3) {
            uVar18 = (longlong)*(int *)(lVar4 + 0xc + lVar15 * 0x10) & uVar18;
            piVar11 = (int *)(lVar9 + uVar18 * 4);
            iVar10 = *(int *)(lVar9 + uVar18 * 4);
            if (iVar10 != -1) goto LAB_1428856b6;
            goto LAB_1428856d7;
          }
          iVar13 = *(int *)(lVar4 + 8 + lVar15 * 0x10);
        } while (iVar13 != -1);
      }
    }
    goto LAB_142885745;
  }
  goto LAB_142885792;
  while( true ) {
    piVar11 = (int *)(lVar4 + 8 + (longlong)iVar10 * 0x10);
    iVar10 = *piVar11;
    if (iVar10 == -1) break;
LAB_1428856b6:
    if (iVar10 == iVar13) {
      *piVar11 = *(int *)(lVar4 + 8 + lVar15 * 0x10);
      break;
    }
  }
LAB_1428856d7:
  bVar6 = (byte)iVar13 & 0x1f;
  if (*(int *)(param_1 + 0x3c) != 0) {
    *(int *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x38) * 0x10) = iVar13;
  }
  lVar9 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar9 + lVar15 * 0x10) = 0xffffffff;
  if (*(int *)(param_1 + 0x3c) < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 0x38);
  }
  *(undefined4 *)(lVar9 + 4 + lVar15 * 0x10) = uVar7;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(param_1 + 0x38) = iVar13;
  lVar9 = *(longlong *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar9 = param_1 + 0x18;
  }
  if (iVar13 < 0) {
    iVar13 = iVar13 + 0x1f;
  }
  puVar17 = (uint *)(lVar9 + (longlong)(iVar13 >> 5) * 4);
  *puVar17 = *puVar17 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
LAB_142885745:
  iVar13 = *(int *)(param_1 + 0xb8);
  uVar7 = *(undefined4 *)(uVar3 + 0x40);
  uStack_b0 = (uint *)((ulonglong)uStack_b0 & 0xffffff0000000000);
  *(int *)(param_1 + 0xb8) = iVar13 + 1;
  if (*(int *)(param_1 + 0xbc) < iVar13 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xb0,iVar13);
  }
  local_b8 = (int)uVar3;
  uStack_b4 = (uint)(uVar3 >> 0x20);
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar13 * 0x10);
  *puVar2 = local_b8;
  puVar2[1] = uStack_b4;
  puVar2[2] = uVar7;
  puVar2[3] = uStack_b0._4_4_;
LAB_142885792:
  uStack_58 = uStack_58 & ~uStack_64;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_68);
  if ((int)local_60[6] <= iStack_54) goto LAB_1428857d3;
  goto LAB_142885590;
}



// FUNCTION 142885800 FUN_142885800 body=1229 status=ok
// SIG undefined FUN_142885800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142885800(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [24];
  longlong local_80 [4];
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((longlong)*(int *)(param_1 + 0x10) == CONCAT44(DAT_1468c21b0._4_4_,(undefined4)DAT_1468c21b0))
  {
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = (undefined4)DAT_1468c21b0;
  if (*(char *)(param_1 + 0xf) == '\0') goto LAB_142885ca7;
  uVar18 = 0;
  uVar15 = 0;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  uVar19 = uVar18;
  uVar20 = uVar18;
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      iVar17 = (int)uVar18;
      lVar16 = *(longlong *)(param_1 + 0x20) + uVar20;
      cVar10 = FWeakObjectPtr::IsValid(lVar16,1,0);
      if ((cVar10 == '\0') || (lVar16 = *(longlong *)(lVar16 + 8), lVar16 == 0)) {
        iVar11 = *(int *)(param_1 + 0x28);
        iVar13 = (iVar11 - iVar17) + -1;
        if (0 < iVar13) {
          iVar13 = 1;
        }
        if (iVar13 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar17 * 0x10 + *(longlong *)(param_1 + 0x20)),
                     (void *)((longlong)(iVar11 - iVar13) * 0x10 + *(longlong *)(param_1 + 0x20)),
                     (longlong)iVar13 << 4);
          iVar11 = *(int *)(param_1 + 0x28);
        }
        *(int *)(param_1 + 0x28) = iVar11 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x20);
        iVar17 = iVar17 + -1;
        uVar20 = uVar20 - 0x10;
      }
      else if (((*(char *)(lVar16 + 0xd) != '\0') &&
               (FUN_142885800(lVar16,param_2), uVar18 = local_58,
               (longlong)*(int *)(lVar16 + 0x14) ==
               CONCAT44(DAT_1468c21b0._4_4_,(undefined4)DAT_1468c21b0))) &&
              (*(longlong *)(lVar16 + 0x18) != 0)) {
        lVar8 = *(longlong *)(*(longlong *)(lVar16 + 0x18) + 0x40);
        uVar15 = (uint)*(byte *)(lVar16 + 10);
        if ((uint)*(byte *)(lVar16 + 10) <= (uint)uVar19) {
          uVar15 = (uint)uVar19;
        }
        uVar19 = (ulonglong)uVar15;
        if (lVar8 != 0) {
          LOCK();
          *(int *)(lVar8 + 0x48) = *(int *)(lVar8 + 0x48) + 1;
          UNLOCK();
        }
        lVar16 = (longlong)(int)local_58;
        iVar11 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar11);
        if (local_58._4_4_ < iVar11) {
          TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (local_80,uVar18 & 0xffffffff);
        }
        plVar12 = local_80;
        if (local_60 != (longlong *)0x0) {
          plVar12 = local_60;
        }
        plVar12[lVar16] = lVar8;
      }
      uVar15 = (uint)uVar19;
      uVar18 = (ulonglong)(iVar17 + 1U);
      uVar20 = uVar20 + 0x10;
    } while ((int)(iVar17 + 1U) < *(int *)(param_1 + 0x28));
  }
  bVar3 = *(byte *)(param_1 + 8);
  uVar14 = param_3[2];
  if ((int)param_3[2] <= (int)(uint)bVar3) {
    uVar14 = (uint)bVar3;
  }
  if ((int)uVar14 <= (int)uVar15) {
    uVar14 = uVar15;
  }
  if (uVar14 != bVar3) {
    for (; (uVar14 == 1 || (uVar14 == 3)); uVar14 = uVar14 + 1) {
    }
  }
  *(char *)(param_1 + 10) = (char)uVar14;
  *(char *)(param_1 + 0xb) = (char)uVar14;
  if ((*(byte *)(param_1 + 10) < *(byte *)(param_1 + 9)) &&
     (uVar15 = (uVar14 & 0xff) + 1, uVar15 <= *(byte *)(param_1 + 9))) {
    do {
      if ((uVar15 != 1) && (uVar15 != 3)) {
        *(char *)(param_1 + 0xb) = (char)uVar15;
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 <= (int)(uint)*(byte *)(param_1 + 9));
  }
  if (*(char *)(param_1 + 0xf) == '\x01') {
    bVar3 = *(byte *)(param_1 + 0xc);
    uVar9 = *(undefined8 *)(param_3 + 4);
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar2 = *param_3;
    if ((((bVar3 & 0x20) == 0) || (*(char *)(param_2 + 0x9b4) == '\0')) ||
       (*(char *)(param_1 + 10) != *(char *)(param_1 + 8))) {
      uVar15 = (bVar3 & 0x10) << 5 | 2;
    }
    else if ((bVar3 & 0x10) == 0) {
      iVar17 = DAT_1464a820c;
      if (((DAT_146b172f0 == 0x800) || (iVar17 = DAT_1464a8208, DAT_146b172f0 == 0x1000)) &&
         (iVar17 == 0)) {
        uVar15 = DAT_146b172f8 | 0xff;
      }
      else {
        uVar15 = DAT_146b172f4 | DAT_146b172f0 | 0xff;
      }
    }
    else if (DAT_146b17320 == 0x800) {
      if (DAT_1464a820c == 0) {
        uVar15 = DAT_146b17328 | 0xff;
      }
      else {
LAB_142885acd:
        uVar15 = DAT_146b17324 | DAT_146b17320 | 0xff;
      }
    }
    else {
      if ((DAT_146b17320 != 0x1000) || (DAT_1464a8208 != 0)) goto LAB_142885acd;
      uVar15 = DAT_146b17328 | 0xff;
    }
    local_b0 = uVar2;
    local_ac = uVar6;
    local_a8 = uVar7;
    local_a0 = uVar9;
    plVar12 = (longlong *)TGraphTask<FTickFunctionTask>::CreateTask(local_98,local_80,param_3[3]);
    uVar4 = *(undefined1 *)(param_2 + 0x9b6);
    uVar5 = *(undefined1 *)(param_2 + 0x9b5);
    lVar16 = *plVar12;
    *(longlong *)(lVar16 + 0x10) = param_1;
    *(undefined4 *)(lVar16 + 0x18) = uVar2;
    *(undefined4 *)(lVar16 + 0x1c) = uVar6;
    *(undefined4 *)(lVar16 + 0x20) = uVar7;
    *(uint *)(lVar16 + 0x24) = uVar15;
    *(undefined8 *)(lVar16 + 0x28) = uVar9;
    *(undefined1 *)(lVar16 + 0x30) = uVar5;
    *(undefined1 *)(lVar16 + 0x31) = uVar4;
    lVar8 = *plVar12;
    FUN_14288f390(lVar8,plVar12[1],(int)plVar12[2]);
    bVar3 = *(byte *)(param_1 + 0xb);
    *(longlong *)(param_1 + 0x18) = lVar8;
    lVar16 = (ulonglong)*(byte *)(param_1 + 10) + 3;
    if ((*(byte *)(param_1 + 0xc) & 0x10) == 0) {
      lVar16 = (ulonglong)*(byte *)(param_1 + 10) + 0xb;
    }
    plVar12 = (longlong *)(((ulonglong)bVar3 + lVar16 * 8) * 0x10 + param_2);
    iVar17 = (int)plVar12[1];
    *(int *)(plVar12 + 1) = iVar17 + 1;
    if (*(int *)((longlong)plVar12 + 0xc) < iVar17 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar12,iVar17);
    }
    param_2 = (ulonglong)bVar3 * 0x30 + param_2;
    *(longlong *)(*plVar12 + (longlong)iVar17 * 8) = lVar8;
    iVar17 = *(int *)(param_2 + 0x28);
    *(int *)(param_2 + 0x28) = iVar17 + 1;
    if (*(int *)(param_2 + 0x2c) < iVar17 + 1) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_2,iVar17);
    }
    lVar16 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar16 = param_2;
    }
    plVar12 = (longlong *)(lVar16 + (longlong)iVar17 * 8);
    if (plVar12 != (longlong *)0x0) {
      lVar16 = *(longlong *)(lVar8 + 0x40);
      *plVar12 = lVar16;
      if (lVar16 != 0) {
        LOCK();
        *(int *)(lVar16 + 0x48) = *(int *)(lVar16 + 0x48) + 1;
        UNLOCK();
      }
    }
  }
  plVar12 = local_80;
  iVar17 = (int)local_58;
  if (local_60 != (longlong *)0x0) {
    plVar12 = local_60;
  }
  for (; iVar17 != 0; iVar17 = iVar17 + -1) {
    if (*plVar12 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar12 + 0x48);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar12 = plVar12 + 1;
  }
  if (local_60 != (longlong *)0x0) {
    FMemory::Free(local_60);
  }
LAB_142885ca7:
  *(undefined4 *)(param_1 + 0x14) = (undefined4)DAT_1468c21b0;
  return;
}



// FUNCTION 142885cd0 FUN_142885cd0 body=788 status=ok
// SIG undefined FUN_142885cd0(void)

undefined8 FUN_142885cd0(longlong *param_1,longlong param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  char cVar5;
  DWORD DVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  DWORD *pDVar11;
  longlong *plVar12;
  longlong *plVar13;
  int *piVar14;
  undefined2 *puVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  longlong *plVar19;
  int iVar20;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [2];
  undefined1 local_res20 [8];
  longlong local_a8 [2];
  longlong *local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  plStack_90 = local_a8;
  plVar19 = (longlong *)0x0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_98 = param_1;
  lVar7 = (**(code **)(*param_1 + 0x20))(param_1,local_res20);
  local_88 = 0;
  uVar4 = *(undefined4 *)(lVar7 + 4);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x20))(param_1,local_70);
  uStack_80 = *puVar8;
  uStack_7c = uVar4;
  local_78 = param_3;
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)))) {
    uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(local_res10);
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1);
    local_48 = (undefined4)local_88;
    uStack_44 = local_88._4_4_;
    uStack_40 = uStack_80;
    uStack_3c = uStack_7c;
    (**(code **)(*DAT_146ab6358 + 0x6c8))
              (DAT_146ab6358,uVar9,*puVar10,&local_48,local_a8,param_3,0,0);
    QueryPerformanceCounter(&local_res8);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res10[0]._0_4_);
  }
  else {
    pDVar11 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar12 = TlsGetValue(*pDVar11);
    if (plVar12 == (longlong *)0x0) {
      plVar13 = (longlong *)operator_new(0x18);
      plVar12 = plVar19;
      if (plVar13 != (longlong *)0x0) {
        *plVar13 = 0;
        plVar13[1] = 0;
        *(undefined4 *)(plVar13 + 2) = 0;
        plVar12 = plVar13;
      }
      TlsSetValue(*pDVar11,plVar12);
    }
    plVar13 = (longlong *)plVar12[1];
    if (plVar13 == (longlong *)0x0) {
      plVar13 = (longlong *)*plVar12;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar11 + 2);
        plVar12[1] = (longlong)plVar13;
        if (plVar13 == (longlong *)0x0) {
          puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar12[1] = (longlong)puVar10;
          lVar7 = 0x1f;
          do {
            puVar2 = puVar10 + 0x20;
            *puVar10 = puVar2;
            lVar7 = lVar7 + -1;
            puVar10 = puVar2;
          } while (lVar7 != 0);
          *puVar2 = 0;
          plVar13 = (longlong *)plVar12[1];
        }
        iVar16 = 0x20;
        *(undefined4 *)(plVar12 + 2) = 0x20;
      }
      else {
        iVar16 = 0x20;
        plVar12[1] = (longlong)plVar13;
        *(undefined4 *)(plVar12 + 2) = 0x20;
        *plVar12 = 0;
      }
    }
    else {
      iVar16 = (int)plVar12[2];
    }
    plVar12[1] = *plVar13;
    *(int *)(plVar12 + 2) = iVar16 + -1;
    *plVar13 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar13 + 1) = 0xff;
    local_68 = 0;
    local_60 = 0;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    *plVar13 = (longlong)&PTR_FUN_1451df108;
    *(undefined1 *)(plVar13 + 7) = 0;
    plVar13[8] = 0;
    plVar13[2] = (longlong)local_98;
    plVar13[3] = (longlong)plStack_90;
    *(undefined4 *)(plVar13 + 4) = (undefined4)local_88;
    *(undefined4 *)((longlong)plVar13 + 0x24) = local_88._4_4_;
    *(undefined4 *)(plVar13 + 5) = uStack_80;
    *(undefined4 *)((longlong)plVar13 + 0x2c) = uStack_7c;
    plVar13[6] = CONCAT44(uStack_74,local_78);
    lVar7 = plVar13[8];
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + 1;
      UNLOCK();
    }
    FUN_14048a8b0(local_78,0,0xff,1);
    if (lVar7 != 0) {
      LOCK();
      piVar14 = (int *)(lVar7 + 0x48);
      iVar16 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        FGraphEvent::Recycle(lVar7);
      }
    }
  }
  FUN_141ee24f0(0);
  piVar14 = (int *)(**(code **)(*param_1 + 0x20))(param_1,local_58);
  iVar16 = *piVar14;
  lVar7 = (**(code **)(*param_1 + 0x20))(param_1,local_50);
  if (0 < (int)*(uint *)(lVar7 + 4)) {
    uVar17 = (ulonglong)*(uint *)(lVar7 + 4);
    plVar12 = plVar19;
    do {
      iVar18 = (int)plVar19;
      if (0 < iVar16) {
        puVar15 = (undefined2 *)((longlong)plVar12 + local_a8[0] + 4);
        lVar7 = (longlong)iVar16;
        do {
          iVar20 = (int)plVar19;
          plVar19 = (longlong *)(ulonglong)(iVar20 + 1);
          puVar3 = (undefined2 *)(param_2 + (longlong)iVar20 * 8);
          *puVar3 = puVar15[-2];
          puVar3[1] = puVar15[-1];
          puVar3[2] = *puVar15;
          puVar1 = puVar15 + 1;
          puVar15 = puVar15 + 4;
          puVar3[3] = *puVar1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      plVar19 = (longlong *)(ulonglong)(uint)(iVar18 + iVar16);
      plVar12 = plVar12 + iVar16;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142885ff0 ReadFloat16Pixels body=129 status=ok
// SIG undefined ReadFloat16Pixels(void)

void FRenderTarget::ReadFloat16Pixels(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  lVar2 = (**(code **)(*param_1 + 0x20))(param_1,local_res8);
  piVar3 = (int *)(**(code **)(*param_1 + 0x20))(param_1,local_res10);
  iVar1 = *piVar3 * *(int *)(lVar2 + 4) + *(int *)(param_2 + 1);
  *(int *)(param_2 + 1) = iVar1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
  }
  FUN_142885cd0(param_1,*param_2,param_3);
  return;
}



// FUNCTION 142886080 FUN_142886080 body=691 status=ok
// SIG undefined FUN_142886080(void)

undefined8 FUN_142886080(longlong *param_1,longlong param_2,longlong *param_3,int *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  longlong lVar8;
  int *piVar9;
  DWORD *pDVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int iVar15;
  int iVar16;
  undefined4 uStack_74;
  longlong *local_70;
  longlong lStack_68;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  longlong local_50;
  longlong lStack_48;
  undefined8 local_40;
  
  plVar12 = (longlong *)0x0;
  if ((((*param_4 == 0) && (param_4[1] == 0)) && (param_4[2] == 0)) && (param_4[3] == 0)) {
    lVar8 = (**(code **)(*param_1 + 0x20))(param_1,local_res8);
    iVar15 = *(int *)(lVar8 + 4);
    piVar9 = (int *)(**(code **)(*param_1 + 0x20))(param_1,local_res18);
    iVar2 = *piVar9;
    param_4[0] = 0;
    param_4[1] = 0;
    param_4[2] = iVar2;
    param_4[3] = iVar15;
  }
  *(undefined4 *)(param_2 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_2 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  iVar15 = *param_4;
  iVar2 = param_4[1];
  iVar16 = param_4[2];
  iVar4 = param_4[3];
  uVar3 = (undefined4)param_3[2];
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
    local_50 = *param_3;
    lStack_48 = param_3[1];
    local_40 = CONCAT44(uStack_74,uVar3);
    local_70 = param_1;
    lStack_68 = param_2;
    local_60 = iVar15;
    iStack_5c = iVar2;
    iStack_58 = iVar16;
    iStack_54 = iVar4;
    FUN_14286d610(&local_70,2,local_res20);
  }
  else {
    pDVar10 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar11 = TlsGetValue(*pDVar10);
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)operator_new(0x18);
      if (plVar11 != (longlong *)0x0) {
        *plVar11 = 0;
        plVar11[1] = 0;
        *(undefined4 *)(plVar11 + 2) = 0;
        plVar12 = plVar11;
      }
      TlsSetValue(*pDVar10,plVar12);
      plVar11 = plVar12;
    }
    plVar12 = (longlong *)plVar11[1];
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)*plVar11;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar10 + 2);
        plVar11[1] = (longlong)plVar12;
        if (plVar12 == (longlong *)0x0) {
          puVar13 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar11[1] = (longlong)puVar13;
          lVar8 = 0x1f;
          do {
            puVar1 = puVar13 + 0x20;
            *puVar13 = puVar1;
            lVar8 = lVar8 + -1;
            puVar13 = puVar1;
          } while (lVar8 != 0);
          *puVar1 = 0;
          plVar12 = (longlong *)plVar11[1];
        }
        iVar14 = 0x20;
        *(undefined4 *)(plVar11 + 2) = 0x20;
      }
      else {
        iVar14 = 0x20;
        plVar11[1] = (longlong)plVar12;
        *(undefined4 *)(plVar11 + 2) = 0x20;
        *plVar11 = 0;
      }
    }
    else {
      iVar14 = (int)plVar11[2];
    }
    plVar11[1] = *plVar12;
    *(int *)(plVar11 + 2) = iVar14 + -1;
    *plVar12 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar12 + 1) = 0xff;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_1451df118;
    *(undefined1 *)(plVar12 + 9) = 0;
    plVar12[10] = 0;
    plVar12[2] = (longlong)param_1;
    plVar12[3] = param_2;
    lVar8 = *param_3;
    lVar5 = param_3[1];
    *(int *)(plVar12 + 4) = iVar15;
    *(int *)((longlong)plVar12 + 0x24) = iVar2;
    *(int *)(plVar12 + 5) = iVar16;
    *(int *)((longlong)plVar12 + 0x2c) = iVar4;
    plVar12[6] = lVar8;
    plVar12[7] = lVar5;
    plVar12[8] = CONCAT44(uStack_74,uVar3);
    lVar8 = plVar12[10];
    piVar9 = (int *)(lVar8 + 0x48);
    if (lVar8 != 0) {
      LOCK();
      *piVar9 = *piVar9 + 1;
      UNLOCK();
    }
    local_res10 = lVar8;
    FUN_1408cb090(uVar3,0,0xff,1,iVar15,iVar16,0,0);
    if (lVar8 != 0) {
      LOCK();
      iVar15 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        FGraphEvent::Recycle(local_res10);
      }
    }
  }
  FUN_141ee24f0(0);
  return 1;
}



// FUNCTION 142886340 ReadLinearColorPixelsPtr body=133 status=ok
// SIG undefined ReadLinearColorPixelsPtr(void)

char FRenderTarget::ReadLinearColorPixelsPtr
               (undefined8 param_1,void *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  void *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_38 = *param_4;
  uStack_34 = param_4[1];
  uStack_30 = param_4[2];
  uStack_2c = param_4[3];
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_48 = (void *)0x0;
  local_40 = 0;
  local_18 = param_3[4];
  cVar1 = FUN_142886080(local_38,&local_48,&local_28,&local_38);
  if (cVar1 != '\0') {
    ::_guard_xfg_dispatch_icall_nop(param_2,local_48,(longlong)(int)local_40 << 4);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return cVar1;
}



// FUNCTION 1428863d0 FUN_1428863d0 body=661 status=ok
// SIG undefined FUN_1428863d0(void)

bool FUN_1428863d0(longlong *param_1,longlong param_2,longlong *param_3,int *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  longlong lVar8;
  int *piVar9;
  DWORD *pDVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  int iVar15;
  int iVar16;
  undefined4 uStack_7c;
  longlong *local_78;
  longlong lStack_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  
  plVar12 = (longlong *)0x0;
  if ((((*param_4 == 0) && (param_4[1] == 0)) && (param_4[2] == 0)) && (param_4[3] == 0)) {
    lVar8 = (**(code **)(*param_1 + 0x20))(param_1,local_res8);
    iVar15 = *(int *)(lVar8 + 4);
    piVar9 = (int *)(**(code **)(*param_1 + 0x20))(param_1,local_res10);
    iVar2 = *piVar9;
    param_4[0] = 0;
    param_4[1] = 0;
    param_4[2] = iVar2;
    param_4[3] = iVar15;
  }
  *(undefined4 *)(param_2 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_2 + 0xc)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  iVar15 = *param_4;
  iVar2 = param_4[1];
  iVar16 = param_4[2];
  iVar4 = param_4[3];
  uVar3 = (undefined4)param_3[2];
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
    local_58 = *param_3;
    lStack_50 = param_3[1];
    local_48 = CONCAT44(uStack_7c,uVar3);
    local_78 = param_1;
    lStack_70 = param_2;
    local_68 = iVar15;
    iStack_64 = iVar2;
    iStack_60 = iVar16;
    iStack_5c = iVar4;
    FUN_14286d710(&local_78,2,local_res18);
  }
  else {
    pDVar10 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar11 = TlsGetValue(*pDVar10);
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)operator_new(0x18);
      if (plVar11 != (longlong *)0x0) {
        *plVar11 = 0;
        plVar11[1] = 0;
        *(undefined4 *)(plVar11 + 2) = 0;
        plVar12 = plVar11;
      }
      TlsSetValue(*pDVar10,plVar12);
      plVar11 = plVar12;
    }
    plVar12 = (longlong *)plVar11[1];
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)*plVar11;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar10 + 2);
        plVar11[1] = (longlong)plVar12;
        if (plVar12 == (longlong *)0x0) {
          puVar13 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar11[1] = (longlong)puVar13;
          lVar8 = 0x1f;
          do {
            puVar1 = puVar13 + 0x20;
            *puVar13 = puVar1;
            lVar8 = lVar8 + -1;
            puVar13 = puVar1;
          } while (lVar8 != 0);
          *puVar1 = 0;
          plVar12 = (longlong *)plVar11[1];
        }
        iVar14 = 0x20;
        *(undefined4 *)(plVar11 + 2) = 0x20;
      }
      else {
        iVar14 = 0x20;
        plVar11[1] = (longlong)plVar12;
        *(undefined4 *)(plVar11 + 2) = 0x20;
        *plVar11 = 0;
      }
    }
    else {
      iVar14 = (int)plVar11[2];
    }
    plVar11[1] = *plVar12;
    *(int *)(plVar11 + 2) = iVar14 + -1;
    *plVar12 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar12 + 1) = 0xff;
    local_res20 = 0;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *plVar12 = (longlong)&PTR_FUN_1451df0f8;
    *(undefined1 *)(plVar12 + 9) = 0;
    plVar12[10] = 0;
    plVar12[2] = (longlong)param_1;
    plVar12[3] = param_2;
    lVar8 = *param_3;
    lVar5 = param_3[1];
    *(int *)(plVar12 + 4) = iVar15;
    *(int *)((longlong)plVar12 + 0x24) = iVar2;
    *(int *)(plVar12 + 5) = iVar16;
    *(int *)((longlong)plVar12 + 0x2c) = iVar4;
    plVar12[6] = lVar8;
    plVar12[7] = lVar5;
    plVar12[8] = CONCAT44(uStack_7c,uVar3);
    lVar8 = plVar12[10];
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 0x48) = *(int *)(lVar8 + 0x48) + 1;
      UNLOCK();
    }
    FUN_1408cb090(uVar3,0,0xff,1,iVar15,iVar16,0);
    if (lVar8 != 0) {
      LOCK();
      piVar9 = (int *)(lVar8 + 0x48);
      iVar15 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        FGraphEvent::Recycle(lVar8);
      }
    }
  }
  FUN_141ee24f0(0);
  return 0 < *(int *)(param_2 + 8);
}



// FUNCTION 142886670 ReadPixelsPtr body=133 status=ok
// SIG undefined ReadPixelsPtr(void)

char FRenderTarget::ReadPixelsPtr
               (undefined8 param_1,void *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  void *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_38 = *param_4;
  uStack_34 = param_4[1];
  uStack_30 = param_4[2];
  uStack_2c = param_4[3];
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_48 = (void *)0x0;
  local_40 = 0;
  local_18 = param_3[4];
  cVar1 = FUN_1428863d0(local_38,&local_48,&local_28,&local_38);
  if (cVar1 != '\0') {
    ::_guard_xfg_dispatch_icall_nop(param_2,local_48,(longlong)(int)local_40 << 2);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return cVar1;
}



// FUNCTION 142886700 FUN_142886700 body=133 status=ok
// SIG undefined FUN_142886700(void)

void FUN_142886700(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0xac8) != 0) {
    uVar2 = FCommandLine::Get();
    cVar1 = FParse::Param(uVar2,L"nohmd");
    if (cVar1 == '\0') {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0xac8) + 0xd8))();
      if (lVar3 != 0) {
        plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xac8) + 0xd8))();
        cVar1 = (**(code **)(*plVar4 + 0x40))(plVar4);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xac8) + 0xd8))();
                    /* WARNING: Could not recover jumptable at 0x000142886778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x180))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142886790 FUN_142886790 body=28 status=ok
// SIG undefined FUN_142886790(void)

void FUN_142886790(void)

{
  FUN_1428867b0();
  FUN_14288be30();
  FUN_142777c20();
  FUN_1428904b0();
  return;
}



// FUNCTION 1428867b0 FUN_1428867b0 body=846 status=ok
// SIG undefined FUN_1428867b0(void)

void FUN_1428867b0(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  DWORD DVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  int *piVar13;
  ulonglong uVar14;
  float fVar15;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  ulonglong local_40;
  int local_38;
  undefined1 local_30 [24];
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x38) < DAT_1468509e4) &&
     (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
    uVar10 = FCommandLine::Get();
    DAT_1468509e0 = FParse::Param(uVar10,L"nullrhi");
    _Init_thread_footer(&DAT_1468509e4);
  }
  if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
    fVar15 = (float)FUN_142853ba0();
    bVar5 = DAT_146b183bc != fVar15;
    if (bVar5) {
      DAT_146b183bc = fVar15;
    }
    piVar13 = (int *)0x0;
    if ((*(int *)(lVar2 + 0x38) < DAT_146b183c8) &&
       (_Init_thread_header(&DAT_146b183c8), DAT_146b183c8 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar12 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MaxAnisotropy");
      if (plVar12 != (longlong *)0x0) {
        piVar13 = (int *)(**(code **)(*plVar12 + 0x38))(plVar12);
      }
      DAT_146b183c0 = piVar13;
      _Init_thread_footer(&DAT_146b183c8);
    }
    iVar1 = *DAT_146b183c0;
    if ((DAT_1465354d8 != *DAT_146b183c0) || (iVar1 = DAT_1465354d8, bVar5)) {
      DAT_1465354d8 = iVar1;
      local_48 = 0;
      local_38 = -1;
      local_40 = 0;
      uVar10 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
      FUN_1417a5560(uVar10,&local_48,1,0x10,0);
      uVar14 = local_40 & 0xffffffff;
      do {
        local_38 = local_38 + 1;
        if ((int)local_40 <= local_38) break;
      } while (*(longlong *)(local_48 + (longlong)local_38 * 8) == 0);
      do {
        if ((local_38 < 0) || ((int)uVar14 <= local_38)) {
          if (local_48 != 0) {
            FMemory::Free(local_48);
          }
          plVar7 = DAT_146b09468;
          plVar12 = DAT_146b09460;
          if ((DAT_146b09460 != (longlong *)0x0) || (DAT_146b09468 != (longlong *)0x0)) {
            if (((DAT_146ac3ac6 == '\0') || (cVar8 = IsInRenderingThread(), cVar8 == '\0')) &&
               ((DAT_146ac3ac5 != '\0' ||
                (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 == '\0' && (DAT_1468c21ae != '\0'))
                 && (DVar9 = GetCurrentThreadId(), DVar9 != DAT_1468c21c0)))))) {
              plVar11 = (longlong *)FUN_14286bce0(local_30,0,0xff);
              local_58 = SUB84(plVar12,0);
              uStack_54 = (undefined4)((ulonglong)plVar12 >> 0x20);
              uStack_50 = SUB84(plVar7,0);
              uStack_4c = (undefined4)((ulonglong)plVar7 >> 0x20);
              lVar2 = *plVar11;
              *(undefined4 *)(lVar2 + 0x10) = local_58;
              *(undefined4 *)(lVar2 + 0x14) = uStack_54;
              *(undefined4 *)(lVar2 + 0x18) = uStack_50;
              *(undefined4 *)(lVar2 + 0x1c) = uStack_4c;
              lVar2 = *plVar11;
              lVar6 = plVar11[2];
              lVar3 = plVar11[1];
              lVar4 = *(longlong *)(lVar2 + 0x28);
              piVar13 = (int *)(lVar4 + 0x48);
              if (lVar4 != 0) {
                LOCK();
                *piVar13 = *piVar13 + 1;
                UNLOCK();
              }
              FUN_1409421c0(lVar2,lVar3,(int)lVar6,1);
              if (lVar4 != 0) {
                LOCK();
                iVar1 = *piVar13;
                *piVar13 = *piVar13 + -1;
                UNLOCK();
                if (iVar1 == 1) {
                  FGraphEvent::Recycle(lVar4);
                }
              }
            }
            else {
              FBaseGraphTask::GetSmallTaskAllocator();
              if (plVar12 != (longlong *)0x0) {
                (**(code **)(*plVar12 + 0x20))(plVar12);
                (**(code **)(*plVar12 + 0x18))(plVar12);
              }
              if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 0x20))(plVar7);
                (**(code **)(*plVar7 + 0x18))(plVar7);
              }
            }
          }
          FUN_14259e660();
          return;
        }
        (**(code **)(**(longlong **)(local_48 + (longlong)local_38 * 8) + 0x2f0))();
        uVar14 = local_40 & 0xffffffff;
        do {
          local_38 = local_38 + 1;
          if ((int)local_40 <= local_38) break;
        } while (*(longlong *)(local_48 + (longlong)local_38 * 8) == 0);
      } while( true );
    }
  }
  return;
}



// FUNCTION 142886b00 FUN_142886b00 body=8 status=ok
// SIG undefined FUN_142886b00(void)

void FUN_142886b00(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x9a8) = param_2;
  return;
}



// FUNCTION 142886b10 FUN_142886b10 body=8 status=ok
// SIG undefined FUN_142886b10(void)

void FUN_142886b10(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x9b0) = param_2;
  return;
}



// FUNCTION 142886b20 RegisterTickFunction body=139 status=ok
// SIG undefined RegisterTickFunction(void)

void FTickFunction::RegisterTickFunction(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  longlong local_res18 [2];
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    return;
  }
  if (param_2 != 0) {
    ULevel::GetWorld(param_2);
  }
  FUN_142873fe0();
  lVar1 = *(longlong *)(param_2 + 0x140);
  local_res18[0] = param_1;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_1421a37c0(lVar1 + 8,local_res8,local_res18,0);
    if (*(char *)(lVar1 + 0x128) == '\0') goto LAB_142886b98;
    lVar2 = lVar1 + 0xc0;
  }
  else {
    lVar2 = lVar1 + 0x60;
  }
  FUN_1421a37c0(lVar2,local_res8,local_res18,0);
LAB_142886b98:
  *(longlong *)(param_1 + 0x48) = lVar1;
  *(undefined1 *)(param_1 + 0xd) = 1;
  return;
}



// FUNCTION 142886bb0 FUN_142886bb0 body=539 status=ok
// SIG undefined FUN_142886bb0(void)

void FUN_142886bb0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
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
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar8 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar7 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar7;
        if (bVar4) goto LAB_142886cef;
        uVar8 = puVar12[lVar5 + 1];
      }
      uStack_64 = -uVar8 & uVar8;
      iVar7 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_54 = (iStack_50 - iVar7) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_142886cef:
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
        puVar13 = (undefined8 *)((longlong)iStack_2c * 0x20 + *param_1);
        uVar8 = (int)((ulonglong)*puVar13 >> 0x20) * 0x17 + (int)*puVar13 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar13 + 0x1c) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar13 + 3) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_2c;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 142886dd0 ReleaseDynamicRHI body=136 status=ok
// SIG undefined ReleaseDynamicRHI(void)

void FTextureRenderTarget2DResource::ReleaseDynamicRHI(longlong *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  FUN_141ed8ff0(&DAT_146ab6e78,*(undefined8 *)(param_1[0x14] + 0x98),0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x15,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xe,0);
  if (param_1[0x10] != 0) {
    *(longlong *)(param_1[0x10] + 8) = param_1[0x11];
  }
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    *(longlong *)param_1[0x11] = param_1[0x10];
  }
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  return;
}



// FUNCTION 142886e60 ReleaseDynamicRHI body=150 status=ok
// SIG undefined ReleaseDynamicRHI(void)

void FTextureRenderTargetCubeResource::ReleaseDynamicRHI(longlong *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  FUN_141ed8ff0(&DAT_146ab6e78,*(undefined8 *)(param_1[0x14] + 0x98),0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x16,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x17,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xe,0);
  if (param_1[0x10] != 0) {
    *(longlong *)(param_1[0x10] + 8) = param_1[0x11];
  }
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    *(longlong *)param_1[0x11] = param_1[0x10];
  }
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  return;
}



// FUNCTION 142886f00 ReleaseDynamicRHI body=64 status=ok
// SIG undefined ReleaseDynamicRHI(void)

void FViewport::ReleaseDynamicRHI(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x88,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x90,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x58,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + -8,0);
  return;
}



// FUNCTION 142886f60 ReleaseRHI body=51 status=ok
// SIG undefined ReleaseRHI(void)

void FViewport::ReleaseRHI(longlong param_1)

{
  undefined1 local_res8 [32];
  
  FUN_141edc760(local_res8,1);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xa8,0);
  FUN_141edd460(local_res8);
  return;
}



// FUNCTION 142886fa0 ReleaseTickGroup body=860 status=ok
// SIG undefined ReleaseTickGroup(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FTickTaskSequencer::ReleaseTickGroup(longlong param_1,int param_2,char param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_e8 [32];
  int local_c8;
  longlong local_c0;
  longlong local_b0;
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  longlong local_78 [4];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c8 = param_2;
  cVar4 = FUN_141636a40();
  if ((((cVar4 == '\0') || (iVar5 = FUN_1416a5660(), iVar5 < 3)) ||
      (cVar4 = FUN_1415bac00(), cVar4 == '\0')) || (*DAT_146b17250 == 0)) {
    DispatchTickGroup(param_1,2,param_2);
  }
  else {
    plVar7 = (longlong *)FUN_14286c0d0(local_a8,0,2);
    lVar13 = *plVar7;
    *(longlong *)(lVar13 + 0x10) = param_1;
    *(int *)(lVar13 + 0x18) = param_2;
    lVar13 = *plVar7;
    lVar2 = plVar7[2];
    lVar10 = plVar7[1];
    lVar9 = *(longlong *)(lVar13 + 0x28);
    piVar11 = (int *)(lVar9 + 0x48);
    if (lVar9 != 0) {
      LOCK();
      *piVar11 = *piVar11 + 1;
      UNLOCK();
    }
    local_c0 = lVar9;
    FUN_14288ee10(lVar13,lVar10,(int)lVar2,1);
    plVar8 = (longlong *)FTaskGraphInterface::Get();
    local_58 = (longlong *)0x0;
    local_50 = 1;
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_78,0)
    ;
    plVar7 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar7 = local_58;
    }
    *plVar7 = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *piVar11 = *piVar11 + 1;
      UNLOCK();
      lVar9 = local_c0;
    }
    (**(code **)(*plVar8 + 0x48))(plVar8,local_78,0xff);
    plVar7 = local_78;
    iVar5 = (int)local_50;
    if (local_58 != (longlong *)0x0) {
      plVar7 = local_58;
    }
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar7 != 0) {
        LOCK();
        piVar1 = (int *)(*plVar7 + 0x48);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          FGraphEvent::Recycle();
        }
      }
      lVar9 = local_c0;
      plVar7 = plVar7 + 1;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    param_2 = local_c8;
    if (lVar9 != 0) {
      LOCK();
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        FGraphEvent::Recycle(local_c0);
        param_2 = local_c8;
      }
    }
  }
  if (((param_3 == '\0') && (cVar4 = FUN_141636a40(), cVar4 != '\0')) &&
     ((iVar5 = FUN_1416a5660(), 2 < iVar5 && (cVar4 = FUN_1415bac00(), cVar4 != '\0')))) {
    plVar7 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar7 + 0x30))(plVar7,2);
  }
  else {
    uVar12 = (ulonglong)*(int *)(param_1 + 0x9b0);
    if ((longlong)uVar12 <= (longlong)param_2) {
      piVar11 = (int *)(param_1 + 0x28 + uVar12 * 0x30);
      lVar13 = ((longlong)param_2 - uVar12) + 1;
      do {
        iVar5 = (int)uVar12;
        if (*piVar11 != 0) {
          plVar7 = (longlong *)FTaskGraphInterface::Get();
          lVar10 = (longlong)iVar5 * 0x30 + param_1;
          (**(code **)(*plVar7 + 0x48))(plVar7,lVar10,2);
          cVar4 = FUN_141636a40();
          if (((cVar4 == '\0') || (iVar6 = FUN_1416a5660(), iVar6 < 3)) ||
             ((cVar4 = FUN_1415bac00(), cVar4 == '\0' ||
              (((iVar5 == 7 || (*DAT_146b17268 == 0)) || (*piVar11 < 0x32)))))) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::Reset
                      (lVar10,0);
          }
          else {
            plVar7 = (longlong *)FUN_14286c250(local_90,0,2);
            lVar10 = *plVar7;
            *(longlong *)(lVar10 + 0x10) = param_1;
            *(int *)(lVar10 + 0x18) = iVar5;
            lVar10 = *plVar7;
            lVar3 = plVar7[2];
            lVar9 = plVar7[1];
            lVar2 = *(longlong *)(lVar10 + 0x28);
            if (lVar2 != 0) {
              LOCK();
              *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + 1;
              UNLOCK();
            }
            local_b0 = lVar2;
            FUN_14288f0d0(lVar10,lVar9,(int)lVar3,1);
            iVar6 = *(int *)(param_1 + 0x9a8);
            *(int *)(param_1 + 0x9a8) = iVar6 + 1;
            if (*(int *)(param_1 + 0x9ac) < iVar6 + 1) {
              TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                        (param_1 + 0x980,iVar6);
            }
            lVar10 = *(longlong *)(param_1 + 0x9a0);
            if (*(longlong *)(param_1 + 0x9a0) == 0) {
              lVar10 = param_1 + 0x980;
            }
            *(longlong *)(lVar10 + (longlong)iVar6 * 8) = lVar2;
          }
        }
        uVar12 = (ulonglong)(iVar5 + 1);
        piVar11 = piVar11 + 0xc;
        lVar13 = lVar13 + -1;
        param_2 = local_c8;
      } while (lVar13 != 0);
    }
    *(uint *)(param_1 + 0x9b0) = (uint)(param_2 != 7) + param_2;
  }
  return;
}



// FUNCTION 142887300 FUN_142887300 body=321 status=ok
// SIG undefined FUN_142887300(void)

undefined8 FUN_142887300(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar4 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar4 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar6 = *(int *)((longlong)plVar4 + ((longlong)param_2 & uVar7) * 4);
  if (iVar6 != -1) {
    lVar1 = *param_1;
    do {
      lVar2 = (longlong)iVar6 * 0x20;
      if (*(int *)(lVar2 + lVar1) == param_2) {
        lVar2 = (longlong)iVar6 * 0x20;
        uVar7 = (longlong)*(int *)(lVar2 + 0x1c + lVar1) & uVar7;
        piVar3 = (int *)((longlong)plVar4 + uVar7 * 4);
        iVar5 = *(int *)((longlong)plVar4 + uVar7 * 4);
        goto joined_r0x0001428873a2;
      }
      iVar6 = *(int *)(lVar2 + 0x18 + lVar1);
    } while (iVar6 != -1);
  }
  return 0;
joined_r0x0001428873a2:
  if (iVar5 == -1) {
LAB_1428873d0:
    lVar2 = *param_1 + lVar2;
    iVar5 = *(int *)(lVar2 + 0x10);
    plVar4 = *(longlong **)(lVar2 + 8);
    if (iVar5 != 0) {
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      plVar4 = *(longlong **)(lVar2 + 8);
    }
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
    TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar6,1);
    return 1;
  }
  if (iVar5 == iVar6) {
    *piVar3 = *(int *)(lVar2 + lVar1 + 0x18);
    goto LAB_1428873d0;
  }
  piVar3 = (int *)(lVar1 + 0x18 + (longlong)iVar5 * 0x20);
  iVar5 = *piVar3;
  goto joined_r0x0001428873a2;
}



// FUNCTION 142887450 FUN_142887450 body=357 status=ok
// SIG undefined FUN_142887450(void)

undefined8 FUN_142887450(longlong *param_1,double param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  plVar3 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar3 = param_1 + 7;
  }
  iVar5 = *(int *)((longlong)plVar3 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + SUB84(param_2,0)) & uVar7)
                  * 4);
  if (iVar5 == -1) {
    return 0;
  }
  lVar1 = *param_1;
  while (lVar6 = (longlong)iVar5 * 0x20, param_2 != *(double *)(lVar6 + lVar1)) {
    iVar5 = *(int *)(lVar6 + 0x18 + lVar1);
    if (iVar5 == -1) {
      return 0;
    }
  }
  uVar7 = (longlong)*(int *)(lVar6 + 0x1c + lVar1) & uVar7;
  piVar2 = (int *)((longlong)plVar3 + uVar7 * 4);
  iVar4 = *(int *)((longlong)plVar3 + uVar7 * 4);
  do {
    if (iVar4 == -1) {
LAB_142887530:
      lVar1 = *param_1;
      iVar4 = *(int *)(lVar6 + 0x10 + lVar1);
      plVar3 = *(longlong **)(lVar6 + 8 + lVar1);
      if (iVar4 != 0) {
        do {
          if (*plVar3 != 0) {
            FMemory::Free();
          }
          plVar3 = plVar3 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar3 = *(longlong **)(lVar6 + 8 + lVar1);
      }
      if (plVar3 != (longlong *)0x0) {
        FMemory::Free(plVar3);
      }
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar5,1);
      return 1;
    }
    if (iVar4 == iVar5) {
      *piVar2 = *(int *)(lVar6 + 0x18 + lVar1);
      goto LAB_142887530;
    }
    piVar2 = (int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
    iVar4 = *piVar2;
  } while( true );
}



// FUNCTION 1428875c0 FUN_1428875c0 body=255 status=ok
// SIG undefined FUN_1428875c0(void)

void FUN_1428875c0(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_3 != 0) {
    plVar3 = (longlong *)(*param_1 + 0x60 + (longlong)param_2 * 0x90);
    iVar4 = param_3;
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
      TBaseDelegate<FText>::~TBaseDelegate<FText>();
      plVar3 = plVar3 + 0x12;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = (int)param_1[1];
    iVar2 = (iVar4 - param_2) - param_3;
    if (param_3 <= iVar2) {
      iVar2 = param_3;
    }
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x90),
                 (void *)((longlong)(iVar4 - iVar2) * 0x90 + *param_1),(longlong)iVar2 * 0x90);
      iVar4 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar4 - param_3;
    if (param_4 != '\0') {
      TArray<HAPI_ParmInfo,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1428876c0 RemovePrerequisite body=228 status=ok
// SIG undefined RemovePrerequisite(void)

void FTickFunction::RemovePrerequisite(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_18 [8];
  longlong local_10;
  
  FWeakObjectPtr::operator=(local_18);
  plVar1 = (longlong *)(param_1 + 0x20);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar7 = 0;
    local_10 = param_3;
    do {
      lVar3 = *plVar1;
      cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar3 + lVar7,local_18);
      if ((cVar4 != '\0') && (*(longlong *)(lVar3 + lVar7 + 8) == local_10)) {
        iVar2 = *(int *)(param_1 + 0x28);
        iVar5 = (iVar2 - iVar6) + -1;
        if (0 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar6 * 0x10 + *plVar1),
                     (void *)((longlong)(iVar2 - iVar5) * 0x10 + *plVar1),(longlong)iVar5 << 4);
          iVar2 = *(int *)(param_1 + 0x28);
        }
        *(int *)(param_1 + 0x28) = iVar2 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
        iVar6 = iVar6 + -1;
        lVar7 = lVar7 + -0x10;
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (iVar6 < *(int *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 1428877b0 RemoveTestTickFunctions body=272 status=ok
// SIG undefined RemoveTestTickFunctions(void)

void RemoveTestTickFunctions(void)

{
  undefined8 *puVar1;
  uint uVar2;
  char *pcVar3;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar4;
  
  if ((DAT_146b17390 != 0) || (DAT_146b173a0 != 0)) {
    if (DAT_146b17390 != 0) {
      pcVar3 = (char *)(DAT_146b17388 + 0xd);
      iVar5 = DAT_146b17390;
      do {
        *(undefined ***)(pcVar3 + -0xd) = &PTR__scalar_deleting_destructor__1451dd568;
        if (*pcVar3 != '\0') {
          FUN_142873fe0();
          FTickTaskLevel::RemoveTickFunction(*(undefined8 *)(pcVar3 + 0x3b),pcVar3 + -0xd);
          *pcVar3 = '\0';
        }
        if (*(longlong *)(pcVar3 + 0x13) != 0) {
          FMemory::Free();
        }
        pcVar3 = pcVar3 + 0x50;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar4 = 0;
    DAT_146b17390 = 0;
    if (DAT_146b17394 != 10000) {
      TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(&DAT_146b17388,10000);
    }
    uVar6 = uVar4;
    if (0 < DAT_146b173a0) {
      do {
        puVar1 = *(undefined8 **)(uVar6 + DAT_146b17398);
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        uVar2 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar2;
        uVar6 = uVar6 + 8;
      } while ((int)uVar2 < DAT_146b173a0);
    }
    DAT_146b173a0 = 0;
    if (DAT_146b173a4 != 10000) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b17398,10000);
      return;
    }
  }
  return;
}



// FUNCTION 1428878c0 RemoveTickFunction body=359 status=ok
// SIG undefined RemoveTickFunction(void)

void FTickTaskLevel::RemoveTickFunction(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  
  cVar1 = *(char *)((longlong)param_2 + 0xf);
  if (cVar1 == '\0') {
    lVar6 = param_1 + 0x60;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        plVar3 = *(longlong **)(param_1 + 0xb0);
        plVar5 = plVar3 + (longlong)*(int *)(param_1 + 0xb8) * 2;
        for (; (plVar4 = (longlong *)0x0, plVar3 != plVar5 &&
               (plVar4 = plVar3, (longlong *)*plVar3 != param_2)); plVar3 = plVar3 + 2) {
        }
        bVar7 = plVar4 != (longlong *)0x0;
        plVar5 = *(longlong **)(param_1 + 0x58);
        plVar3 = (longlong *)0x0;
        while ((plVar4 = plVar5, plVar4 != (longlong *)0x0 && (!bVar7))) {
          if (plVar4 == param_2) {
            bVar7 = true;
            if (plVar3 == (longlong *)0x0) {
              *(longlong *)(param_1 + 0x58) = param_2[6];
            }
            else {
              plVar3[6] = param_2[6];
            }
            lVar6 = param_2[6];
            plVar5 = plVar4;
            if (lVar6 != 0) {
              *(float *)(lVar6 + 0x38) = *(float *)(param_2 + 7) + *(float *)(lVar6 + 0x38);
              param_2[6] = 0;
            }
          }
          else {
            bVar7 = false;
            plVar5 = (longlong *)plVar4[6];
            plVar3 = plVar4;
          }
        }
      }
      goto LAB_142887a04;
    }
    lVar6 = param_1 + 8;
    if (0.0 < *(float *)(param_2 + 8)) {
      iVar2 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
                        (lVar6,param_2);
      if (iVar2 == 0) {
        bVar7 = false;
        plVar5 = *(longlong **)(param_1 + 0x58);
        plVar3 = (longlong *)0x0;
        while ((plVar4 = plVar5, plVar4 != (longlong *)0x0 && (!bVar7))) {
          if (plVar4 == param_2) {
            bVar7 = true;
            plVar5 = plVar4;
            if (plVar3 == (longlong *)0x0) {
              *(longlong *)(param_1 + 0x58) = param_2[6];
              param_2[6] = 0;
            }
            else {
              plVar3[6] = param_2[6];
              param_2[6] = 0;
            }
          }
          else {
            bVar7 = false;
            plVar5 = (longlong *)plVar4[6];
            plVar3 = plVar4;
          }
        }
      }
      goto LAB_142887a04;
    }
  }
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(lVar6,param_2);
LAB_142887a04:
  if (*(char *)(param_1 + 0x128) != '\0') {
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
              (param_1 + 0xc0,param_2);
  }
  return;
}



// FUNCTION 142887a30 FUN_142887a30 body=665 status=ok
// SIG undefined FUN_142887a30(void)

int FUN_142887a30(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,int param_6)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [8];
  longlong *local_68;
  int local_60;
  undefined1 local_58 [32];
  
  iVar7 = 0;
  iVar6 = 0;
  uVar1 = *(undefined8 *)(DAT_146b17150 + 0x50);
  FUN_1428cb820(param_2,&local_68);
  do {
    if ((local_60 < 0) || ((int)local_68[1] <= local_60)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      local_78 = DAT_1464aa73c;
      if (0xc < iVar7) {
        fVar9 = (float)iVar7 * 0.05;
        if (0.0 <= fVar9) {
          if (1.0 <= fVar9) {
            fVar9 = 1.0;
          }
        }
        else {
          fVar9 = 0.0;
        }
        puVar5 = (undefined4 *)FColor::MakeRedToGreenColorFromScalar(local_70,1.0 - fVar9);
        local_78 = *puVar5;
      }
      local_74 = DAT_1464aa73c;
      if (0xc < iVar6) {
        fVar8 = (float)iVar6 * 0.05;
        fVar9 = 0.0;
        if ((0.0 <= fVar8) && (fVar9 = fVar8, 1.0 <= fVar8)) {
          fVar9 = 1.0;
        }
        puVar5 = (undefined4 *)FColor::MakeRedToGreenColorFromScalar(local_70,1.0 - fVar9);
        local_74 = *puVar5;
      }
      fVar9 = (float)FUN_14244fa00(uVar1);
      FLinearColor::FLinearColor(local_58,&local_78);
      FString::PrintfImpl(&local_68,L"%i AI",iVar7);
      FUN_1428a6e00(param_4,(float)param_5);
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      FLinearColor::FLinearColor(local_58,&local_74);
      FString::PrintfImpl(&local_68,L"%i AI Rendered",iVar6);
      FUN_1428a6e00(param_4,(float)param_5);
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      return param_6 + (int)(fVar9 * 1.1) * 2;
    }
    lVar3 = FWeakObjectPtr::Get(*local_68 + (longlong)local_60 * 8);
    if (lVar3 == 0) {
LAB_142887aea:
      iVar7 = iVar7 + 1;
      if ((*(longlong **)(lVar3 + 0x488) != (longlong *)0x0) &&
         (fVar9 = *(float *)(param_2 + 0x790),
         fVar8 = (float)(**(code **)(**(longlong **)(lVar3 + 0x488) + 0x5f0))(), fVar9 - fVar8 < 0.2
         )) {
        iVar6 = iVar6 + 1;
      }
    }
    else {
      lVar4 = FUN_1429e18b0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_142887aea;
    }
    local_60 = local_60 + 1;
  } while( true );
}



// FUNCTION 142887cd0 RenderStatColorList body=850 status=ok
// SIG undefined RenderStatColorList(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int UEngine::RenderStatColorList(void)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  undefined8 in_R9;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  int in_stack_00000030;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar16;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar18;
  undefined8 uVar17;
  int local_98;
  int local_90;
  ulonglong local_78;
  undefined2 *local_70;
  int local_68;
  undefined4 local_64;
  short *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  undefined1 local_40 [24];
  
  uVar1 = *(undefined8 *)(DAT_146b17150 + 0x30);
  fVar15 = (float)FUN_14244fa00(uVar1);
  iVar14 = DAT_1464aa9c0 - _DAT_1464aa9ec;
  iVar7 = (int)fVar15 * 0x23 + in_stack_00000030 + 0x10;
  fVar15 = (float)iVar14 * 0.028571429;
  uVar3 = -((int)ROUND(-0.5 - (fVar15 + fVar15)) >> 1);
  if ((int)uVar3 < 1) {
    return iVar7;
  }
  iVar13 = 0;
  local_78 = (ulonglong)uVar3;
  local_90 = 0;
  do {
    local_98 = 0;
    iVar10 = local_90;
    do {
      uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
      uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
      if (iVar14 <= iVar10) break;
      pbVar4 = (byte *)FColorList::GetFColorByIndex(&PTR_PTR_1464aa9b0,iVar10);
      uVar17 = CONCAT44(uVar18,(uint)pbVar4[3]);
      FString::PrintfImpl(&local_50,L"(R=%i,G=%i,B=%i,A=%i)",pbVar4[2],pbVar4[1],
                          CONCAT44(uVar16,(uint)*pbVar4),uVar17);
      puVar8 = &DAT_143f3eda8;
      if (local_48 != 0) {
        puVar8 = local_50;
      }
      puVar5 = (undefined8 *)FUN_14162b5f0(&PTR_PTR_1464aa9b0,iVar10);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = (undefined2 *)*puVar5;
      }
      FString::PrintfImpl(&local_60,L"%3i %s %s",iVar10,puVar12,puVar8,uVar17);
      psVar9 = &DAT_143f3eda8;
      if (local_58 != 0) {
        psVar9 = local_60;
      }
      puVar8 = (undefined2 *)0x0;
      iVar11 = 0;
      local_70 = (undefined2 *)0x0;
      local_64 = 0;
      if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
        lVar6 = -1;
        do {
          lVar2 = lVar6 + 1;
          lVar6 = lVar6 + 1;
        } while (psVar9[lVar2] != 0);
        local_68 = (int)lVar6 + 1;
        lVar6 = (longlong)local_68;
        if (0 < local_68) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
        }
        iVar11 = local_68;
        puVar8 = local_70;
        FGenericPlatformString::Memcpy(local_70,psVar9,lVar6 * 2);
      }
      if (local_60 != (short *)0x0) {
        FMemory::Free();
      }
      if (local_50 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      puVar12 = &DAT_143f3eda8;
      if (iVar11 != 0) {
        puVar12 = puVar8;
      }
      iVar11 = UFont::GetStringSize(uVar1,puVar12);
      if (iVar11 <= local_98) {
        iVar11 = local_98;
      }
      in_stack_ffffffffffffff50 = FLinearColor::FLinearColor(local_40,pbVar4);
      in_stack_ffffffffffffff48 = uVar1;
      FUN_1428a6e00(in_R9);
      if (puVar8 != (undefined2 *)0x0) {
        FMemory::Free(puVar8);
      }
      iVar10 = iVar10 + 1;
      local_98 = iVar11;
    } while (iVar13 + iVar10 < 0x23);
    local_90 = local_90 + 0x23;
    iVar13 = iVar13 + -0x23;
    local_78 = local_78 - 1;
    if (local_78 == 0) {
      return iVar7;
    }
  } while( true );
}



// FUNCTION 142888030 FUN_142888030 body=1442 status=ok
// SIG undefined FUN_142888030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_142888030(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                 int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  undefined2 *puVar17;
  int iVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong *local_110;
  undefined4 *local_108;
  undefined4 local_f8 [2];
  longlong local_f0 [2];
  longlong local_e0 [2];
  longlong local_d0 [2];
  uint local_c0 [2];
  longlong local_b8;
  longlong local_b0;
  int local_a8;
  int local_a0;
  char local_9c;
  int local_98;
  longlong local_90;
  longlong local_88;
  int local_80;
  undefined8 local_70;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_d0[0] = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b184a4) && (_Init_thread_header(&DAT_146b184a4), DAT_146b184a4 == -1))
  {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465354e0,0);
    FGenericPlatformString::Memcpy(DAT_1465354e0,L"Matinee_DNC",0x18);
    atexit((_func_5014 *)&LAB_143ebd170);
    _Init_thread_footer(&DAT_146b184a4);
  }
  fVar21 = 0.0;
  local_e0[0] = FUN_1429ba1d0();
  if (local_e0[0] != 0) {
    lVar10 = FUN_1429ba1d0();
    lVar14 = local_e0[0];
    do {
      if (lVar14 == lVar10) goto LAB_1428880c6;
      lVar14 = *(longlong *)(lVar14 + 0x30);
    } while (lVar14 != 0);
  }
  local_e0[0] = 0;
LAB_1428880c6:
  local_c0[0] = 5;
  local_68 = '\0';
  local_f0[0] = param_2;
  FUN_14044bc80(&local_b8,local_f0,local_e0);
  FUN_14045a130(local_c0);
  iVar8 = local_a0;
  lVar14 = local_90;
joined_r0x000142888104:
  local_90 = lVar14;
  local_a0 = iVar8;
  if (local_9c == '\0') {
    local_f0[0] = *(longlong *)(local_90 + 0x18);
    FName::ToString(local_f0,local_e0);
    local_118 = CONCAT44(local_118._4_4_,0xffffffff);
    puVar17 = &DAT_143f3eda8;
    if (DAT_1465354e8 != 0) {
      puVar17 = DAT_1465354e0;
    }
    iVar8 = FUN_141592950(local_e0,puVar17,1);
    if (local_e0[0] != 0) {
      FMemory::Free();
    }
    lVar10 = local_b8;
    if ((iVar8 != -1) && (DAT_146b17150 != 0)) {
      fVar21 = 1.0;
      if (*(longlong *)(local_90 + 0x458) != 0) {
        fVar21 = *(float *)(*(longlong *)(local_90 + 0x458) + 0x28);
      }
      fVar21 = *(float *)(local_90 + 0x4bc) / fVar21;
    }
    iVar8 = local_a0 + 1;
    if (iVar8 < local_80 + local_a8) {
      lVar19 = (longlong)iVar8 * 8;
      iVar18 = local_80;
      iVar15 = local_a8;
      do {
        if (iVar8 < iVar15) {
          lVar14 = *(longlong *)(lVar19 + local_b0);
        }
        else {
          lVar14 = *(longlong *)(local_88 + (longlong)(iVar8 - iVar15) * 8);
        }
        local_98 = local_98 + 1;
        if ((lVar14 != 0) &&
           (lVar11 = AActor::GetLevel(lVar14), iVar18 = local_80, iVar15 = local_a8, lVar11 != 0)) {
          if ((local_c0[0] & 1) != 0) {
            iVar1 = *(int *)(lVar14 + 0xc);
            if (iVar1 < (int)DAT_1469e91c4) {
              uVar16 = iVar1 >> 0x1f & 0xffff;
              uVar9 = iVar1 + uVar16;
              lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                       (longlong)(int)((uVar9 & 0xffff) - uVar16) * 0x18;
            }
            else {
              lVar12 = 0;
            }
            if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) != 0) goto LAB_14288834e;
          }
          if (((local_c0[0] >> 1 & 1) == 0) ||
             (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(lVar14), iVar18 = local_80,
             iVar15 = local_a8, cVar7 != '\0')) {
            if ((local_c0[0] >> 2 & 1) != 0) {
              if (((*(byte *)(lVar11 + 0x204) & 0x10) == 0) &&
                 ((*(byte *)(lVar11 + 0x205) & 0x10) == 0)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              piVar2 = *(int **)(lVar11 + 600);
              if (((*(longlong *)(lVar11 + 0xc0) == 0) ||
                  (piVar13 = (int *)UWorld::GetActiveLevelCollection(), piVar13 == (int *)0x0)) ||
                 (piVar2 == piVar13)) {
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
              iVar18 = local_80;
              iVar15 = local_a8;
              if ((!bVar6) || (!bVar4)) goto LAB_14288834e;
            }
            lVar11 = ULevel::GetWorld(lVar11);
            iVar18 = local_80;
            iVar15 = local_a8;
            if (lVar11 == lVar10) {
              lVar11 = AActor::GetLevel(lVar14);
              if (lVar11 == *(longlong *)(lVar10 + 0x30)) goto joined_r0x000142888104;
              lVar11 = UVoipListenerSynthComponent::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              iVar18 = local_80;
              iVar15 = local_a8;
              if (!bVar6) goto joined_r0x000142888104;
            }
          }
        }
LAB_14288834e:
        iVar8 = iVar8 + 1;
        lVar19 = lVar19 + 8;
        if (iVar18 + iVar15 <= iVar8) break;
      } while( true );
    }
    local_90 = 0;
    local_9c = '\x01';
  }
  if (local_68 != '\0') {
    local_68 = '\0';
    UWorld::RemoveOnActorSpawnedHandler(local_b8,local_70);
    if (local_88 != 0) {
      FMemory::Free();
    }
    if (local_b0 != 0) {
      FMemory::Free();
    }
  }
  local_f8[0] = DAT_1464aa75c;
  uVar3 = *(undefined8 *)(DAT_146b17150 + 0x50);
  fVar20 = (float)FUN_14244fa00(uVar3);
  FLinearColor::FLinearColor(local_e0,local_f8);
  FString::PrintfImpl(local_f0,L"%f DNC Time",(double)fVar21);
  lVar14 = local_d0[0];
  local_108 = &DAT_1464aa6e0;
  local_110 = local_e0;
  local_118 = uVar3;
  FUN_1428a6e00(local_d0[0],(float)(param_5 + -100));
  if (local_f0[0] != 0) {
    FMemory::Free();
  }
  iVar18 = (int)(fVar21 * 24.0);
  fVar21 = (fVar21 * 24.0 - (float)iVar18) * 60.0;
  iVar8 = (int)fVar21;
  FLinearColor::FLinearColor(local_f0,local_f8);
  local_118 = CONCAT44(local_118._4_4_,(int)((fVar21 - (float)iVar8) * 60.0));
  FString::PrintfImpl(local_d0,L"%d:%d:%d",iVar18,iVar8);
  local_108 = &DAT_1464aa6e0;
  local_110 = local_f0;
  local_118 = uVar3;
  FUN_1428a6e00(lVar14,(float)(param_5 + -100));
  if (local_d0[0] != 0) {
    FMemory::Free();
  }
  return param_6 + (int)(fVar20 * 1.1) * 2;
}



// FUNCTION 1428885e0 FUN_1428885e0 body=1714 status=ok
// SIG undefined FUN_1428885e0(void)

int FUN_1428885e0(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                 int param_5,int param_6)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  undefined2 *puVar13;
  wchar_t *pwVar14;
  undefined *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong local_res8;
  undefined1 *puVar19;
  undefined4 local_a4;
  int local_a0;
  longlong local_98;
  undefined2 *local_90;
  undefined8 local_88;
  longlong local_80 [2];
  undefined1 local_70 [56];
  
  cVar8 = '\0';
  lVar1 = DAT_146b17150[10];
  local_res8 = param_1;
  bVar2 = false;
  if ((param_3 == (longlong *)0x0) || (bVar2 = false, param_3[10] == 0)) {
LAB_142888672:
    bVar4 = false;
  }
  else {
    local_90 = (undefined2 *)0x0;
    local_88 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
    FGenericPlatformString::Memcpy(local_90,L"unit",10);
    bVar2 = true;
    cVar7 = (**(code **)(*(longlong *)param_3[10] + 0x150))((longlong *)param_3[10],&local_90);
    bVar4 = true;
    if (cVar7 == '\0') goto LAB_142888672;
  }
  if ((bVar2) && (local_90 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  bVar2 = false;
  if ((param_3 != (longlong *)0x0) && (param_3[10] != 0)) {
    local_80[0] = 0;
    local_80[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_80,0);
    FGenericPlatformString::Memcpy(local_80[0],L"UnitMax",0x10);
    bVar2 = true;
    cVar8 = (**(code **)(*(longlong *)param_3[10] + 0x150))((longlong *)param_3[10],local_80);
  }
  if ((bVar2) && (local_80[0] != 0)) {
    FMemory::Free();
  }
  plVar5 = DAT_146b17150;
  if ((((param_3 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*param_3 + 0x188))(param_3), cVar7 != '\0')) &&
      ((undefined8 *)plVar5[0x157] != (undefined8 *)0x0)) &&
     (cVar7 = (*(code *)**(undefined8 **)plVar5[0x157])(), cVar7 != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  local_98 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(local_98 + 0x38) < DAT_146b18490) &&
     (_Init_thread_header(&DAT_146b18490), DAT_146b18490 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b18488 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.vsync");
    _Init_thread_footer(&DAT_146b18490);
  }
  if (DAT_146b18488 == (longlong *)0x0) {
LAB_14288876b:
    bVar3 = false;
  }
  else {
    iVar9 = (**(code **)(*DAT_146b18488 + 0x68))();
    bVar3 = true;
    if (iVar9 != 1) goto LAB_14288876b;
  }
  cVar7 = (**(code **)(*DAT_146b17150 + 0x2d8))();
  iVar9 = UFont::GetStringSize(lVar1,L" 0000.00 ms");
  if (bVar2) {
    fVar18 = 0.5;
  }
  else {
    fVar18 = 1.0;
  }
  iVar9 = (int)((float)param_5 * fVar18) - iVar9;
  if (cVar8 == '\0') {
    iVar9 = (int)((float)param_5 * fVar18);
  }
  local_a0 = UFont::GetStringSize(lVar1,L"Frame: ");
  fVar18 = DAT_146b171a4;
  local_a0 = iVar9 - local_a0;
  fVar16 = (float)FUN_142698f40();
  fVar17 = (float)FUN_142698f20();
  if (fVar18 <= fVar16) {
    puVar11 = &DAT_1464aa73c;
    if (fVar17 < fVar18) {
      puVar11 = &DAT_1464aa744;
    }
  }
  else {
    puVar11 = &DAT_1464aa738;
  }
  local_a4 = *puVar11;
  fVar18 = (float)FUN_14244fa00(lVar1);
  lVar6 = local_res8;
  iVar9 = (int)(fVar18 * 1.1);
  if (*(longlong **)(local_res8 + 0x7f8) == (longlong *)0x0) goto LAB_142888991;
  iVar10 = (**(code **)(**(longlong **)(local_res8 + 0x7f8) + 0x290))();
  local_res8 = *(longlong *)(*(longlong *)(lVar6 + 0x7f8) + 0x18);
  FName::ToString(&local_res8,&local_90);
  puVar13 = &DAT_143f3eda8;
  if ((int)local_88 != 0) {
    puVar13 = local_90;
  }
  UFont::GetStringSize(lVar1,puVar13);
  if (iVar10 == 0) {
    FLinearColor::FLinearColor(local_70,&DAT_1464aa738);
    pwVar14 = L"%s : Closed";
LAB_1428888f2:
    puVar13 = &DAT_143f3eda8;
    if ((int)local_88 != 0) {
      puVar13 = local_90;
    }
    FString::PrintfImpl(local_80,pwVar14,puVar13);
    FUN_1428a6e00(param_4);
    if (local_80[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    if (iVar10 == 1) {
      FLinearColor::FLinearColor(local_70,&DAT_1464aa738);
      pwVar14 = L"%s : Error";
      goto LAB_1428888f2;
    }
    if (iVar10 == 2) {
      FLinearColor::FLinearColor(local_70,&DAT_1464aa73c);
      pwVar14 = L"%s : Synchronized";
      goto LAB_1428888f2;
    }
    if (iVar10 == 3) {
      FLinearColor::FLinearColor(local_70,&DAT_1464aa744);
      pwVar14 = L"%s : Synchronizing";
      goto LAB_1428888f2;
    }
  }
  param_6 = param_6 + iVar9;
  if (local_90 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_142888991:
  if ((*(int *)(local_98 + 0x38) < DAT_146b184a0) &&
     (_Init_thread_header(&DAT_146b184a0), DAT_146b184a0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b18498 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ShowDetailedFPSUnitStat");
    _Init_thread_footer(&DAT_146b184a0);
  }
  if (((DAT_146b18498 == (longlong *)0x0) ||
      (iVar10 = (**(code **)(*DAT_146b18498 + 0x68))(), iVar10 != 1)) || (!bVar4)) {
    FLinearColor::FLinearColor(local_70,&local_a4);
    FString::PrintfImpl(local_80,L"%6.2f FPS",(double)DAT_146b171a0);
    FUN_1428a6e00(param_4);
    if (local_80[0] != 0) {
      FMemory::Free();
    }
    iVar10 = param_6 + iVar9;
    if (!bVar4) {
      FLinearColor::FLinearColor(local_70,&local_a4);
      FString::PrintfImpl(local_80,L"%6.2f ms",(double)DAT_146b171a4);
      FUN_1428a6e00(param_4);
      param_6 = iVar10;
      if (local_80[0] != 0) {
        FMemory::Free();
      }
    }
  }
  else {
    FLinearColor::FLinearColor(local_70,&local_a4);
    puVar19 = local_70;
    puVar11 = &DAT_1464aa6e0;
    FUN_1428a6e00(param_4);
    puVar12 = &DAT_1451c9264;
    if (bVar3) {
      puVar12 = &DAT_1451c924c;
    }
    puVar15 = &DAT_1451c932c;
    if (cVar7 != '\0') {
      puVar15 = &DAT_1451c92cc;
    }
    FString::PrintfImpl(local_80,L"%6.2f %s%s",(double)DAT_146b171a0,puVar15,puVar12,puVar19,puVar11
                       );
    FLinearColor::FLinearColor(local_70,&local_a4);
    FUN_1428a6e00(param_4);
    if (local_80[0] != 0) {
      FMemory::Free();
    }
  }
  return param_6 + iVar9;
}



// FUNCTION 142888ca0 RenderStatHitches body=86 status=ok
// SIG undefined RenderStatHitches(void)

ulonglong UEngine::RenderStatHitches
                    (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                    undefined4 param_5,uint param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (*(longlong **)(param_3 + 0x50) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(param_3 + 0x50) + 0x138))();
    uVar2 = FUN_14286e270(uVar1,param_3,param_4,param_5);
    return uVar2;
  }
  return (ulonglong)param_6;
}



// FUNCTION 142888d00 FUN_142888d00 body=1989 status=ok
// SIG undefined FUN_142888d00(void)

int FUN_142888d00(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  short *psVar6;
  undefined2 *puVar7;
  int iVar8;
  void *pvVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  ulonglong uVar17;
  short **ppsVar18;
  undefined4 *puVar19;
  short *local_108;
  int local_100;
  int local_fc;
  int local_f8;
  short *local_f0;
  int local_e8;
  undefined8 *local_e0;
  int local_d8;
  int local_d0;
  short *local_c8;
  int local_c0;
  undefined1 local_b8 [8];
  void *local_b0;
  int local_a8;
  void *local_a0;
  int local_98;
  void *local_90;
  int local_88;
  longlong local_80 [2];
  short *local_70 [7];
  
  iVar8 = param_6;
  local_f8 = param_6;
  FUN_142433d40(&local_e0);
  puVar19 = &DAT_1464aa6e0;
  ppsVar18 = (short **)&DAT_1464aa6c0;
  uVar17 = *(ulonglong *)(DAT_146b17150 + 0x50);
  FUN_1428a6e00(param_4);
  iVar14 = iVar8 + 0xc;
  if (local_d8 == 0) goto LAB_142888fb6;
  FName::ToString(local_e0,&local_108);
  uVar1 = *local_e0;
  uVar2 = UPackage::GetPrivateStaticClass();
  lVar3 = FUN_141799680(uVar2,0,uVar1,0,uVar17 & 0xffffffffffffff00,
                        (ulonglong)ppsVar18 & 0xffffffff00000000,
                        (ulonglong)puVar19 & 0xffffffff00000000);
  if (*(char *)((longlong)local_e0 + 0x11) == '\0') {
    psVar6 = &DAT_143f3eda8;
    if (local_100 != 0) {
      psVar6 = local_108;
    }
    FString::PrintfImpl(&local_f0,L"    %s - %4.1f sec",psVar6,(double)*(float *)(lVar3 + 0x2c));
    psVar6 = &DAT_143f3eda8;
    if (local_e8 != 0) {
      psVar6 = local_f0;
    }
    if (local_108 != psVar6) {
      if ((psVar6 == (short *)0x0) || (*psVar6 == 0)) {
        iVar14 = 0;
      }
      else {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (psVar6[lVar3] != 0);
        iVar14 = (int)lVar3 + 1;
      }
      local_100 = 0;
      iVar12 = 0;
      if (local_fc != iVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_108,iVar14);
        iVar12 = local_100;
      }
      local_100 = iVar12 + iVar14;
      goto LAB_142888f09;
    }
  }
  else {
    psVar6 = &DAT_143f3eda8;
    if (local_100 != 0) {
      psVar6 = local_108;
    }
    FString::PrintfImpl(&local_f0,L"->  %s - %4.1f sec",psVar6,(double)*(float *)(lVar3 + 0x2c));
    psVar6 = &DAT_143f3eda8;
    if (local_e8 != 0) {
      psVar6 = local_f0;
    }
    if (local_108 != psVar6) {
      if ((psVar6 == (short *)0x0) || (*psVar6 == 0)) {
        iVar14 = 0;
      }
      else {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (psVar6[lVar3] != 0);
        iVar14 = (int)lVar3 + 1;
      }
      local_100 = 0;
      iVar12 = 0;
      if (local_fc != iVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_108,iVar14);
        iVar12 = local_100;
      }
      local_100 = iVar14 + iVar12;
LAB_142888f09:
      if (local_fc < local_100) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108);
      }
      if (iVar14 != 0) {
        _guard_xfg_dispatch_icall_nop(local_108,psVar6,(longlong)iVar14 * 2);
      }
    }
  }
  if (local_f0 != (short *)0x0) {
    FMemory::Free();
  }
  param_6 = -0x808081;
  FLinearColor::FLinearColor(&local_c8,&param_6);
  uVar17 = *(ulonglong *)(DAT_146b17150 + 0x50);
  ppsVar18 = &local_c8;
  puVar19 = &DAT_1464aa6e0;
  FUN_1428a6e00(param_4);
  iVar14 = iVar8 + 0x18;
  iVar8 = local_f8;
  if (local_108 != (short *)0x0) {
    FMemory::Free();
    iVar8 = local_f8;
  }
LAB_142888fb6:
  iVar12 = 1;
  local_d0 = iVar14;
  if (1 < local_d8) {
    lVar3 = 0x18;
    do {
      puVar13 = (undefined8 *)((longlong)local_e0 + lVar3);
      lVar4 = (**(code **)(*param_3 + 0x20))(param_3,&local_f0);
      iVar15 = iVar14;
      if ((*(int *)(lVar4 + 4) + -0x1e < iVar14) &&
         (iVar15 = local_d0, local_f8 = iVar14, iVar14 <= iVar8)) {
        local_f8 = iVar8;
      }
      param_6 = DAT_1464aa730;
      switch(*(undefined4 *)(puVar13 + 1)) {
      case 0:
        param_6 = DAT_1464aa738;
        break;
      case 1:
        param_6 = DAT_1464aa740;
        break;
      case 2:
      case 6:
        param_6 = DAT_1464aa74c;
        break;
      case 3:
        param_6 = DAT_1464aa744;
        break;
      case 4:
        param_6 = DAT_1464aa938;
        break;
      case 5:
        param_6 = DAT_1464aa73c;
      }
      FName::ToString(puVar13,&local_108);
      if (*(int *)((longlong)puVar13 + 0xc) != -1) {
        FString::PrintfImpl(&local_b0,L" [LOD%d]",*(int *)((longlong)puVar13 + 0xc) + 1);
        pvVar9 = local_b0;
        iVar14 = local_100;
        if (local_a8 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = local_a8 + -1;
        }
        if (iVar8 != 0) {
          lVar4 = (longlong)local_100;
          local_100 = (uint)(local_100 == 0) + local_100 + iVar8;
          if (local_fc < local_100) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,iVar14);
          }
          psVar6 = local_108 + (lVar4 - (ulonglong)(iVar14 != 0));
          _guard_xfg_dispatch_icall_nop(psVar6,pvVar9,(longlong)iVar8 * 2);
          psVar6[iVar8] = 0;
        }
        if (local_b0 != (void *)0x0) {
          FMemory::Free(local_b0);
        }
      }
      uVar1 = *puVar13;
      uVar2 = UPackage::GetPrivateStaticClass();
      lVar4 = FUN_141799680(uVar2,0,uVar1,0,uVar17 & 0xffffffffffffff00,
                            (ulonglong)ppsVar18 & 0xffffffff00000000,
                            (ulonglong)puVar19 & 0xffffffff00000000);
      if (((lVar4 == 0) || (*(float *)(lVar4 + 0x2c) <= 0.0)) || (*(int *)(puVar13 + 1) == 0)) {
        puVar5 = (undefined8 *)FName::ToString(puVar13,local_80);
        if (*(int *)(puVar5 + 1) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = (undefined2 *)*puVar5;
        }
        FName::FName(local_b8,puVar7,1);
        fVar16 = (float)GetAsyncLoadPercentage(local_b8);
        if (local_80[0] != 0) {
          FMemory::Free();
        }
        if (0.0 <= fVar16) {
          FString::PrintfImpl(&local_90,L" - %3i %%",(int)fVar16);
          pvVar9 = local_90;
          iVar14 = local_100;
          if (local_88 == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = local_88 + -1;
          }
          if (iVar8 != 0) {
            lVar4 = (longlong)local_100;
            local_100 = (uint)(local_100 == 0) + local_100 + iVar8;
            if (local_fc < local_100) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,iVar14);
            }
            psVar6 = local_108 + (lVar4 - (ulonglong)(iVar14 != 0));
            _guard_xfg_dispatch_icall_nop(psVar6,pvVar9,(longlong)iVar8 * 2);
            psVar6[iVar8] = 0;
            pvVar9 = local_90;
          }
          goto LAB_1428892d5;
        }
      }
      else {
        FString::PrintfImpl(&local_a0,L" - %4.1f sec",(double)*(float *)(lVar4 + 0x2c));
        pvVar9 = local_a0;
        iVar14 = local_100;
        if (local_98 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = local_98 + -1;
        }
        if (iVar8 != 0) {
          lVar4 = (longlong)local_100;
          local_100 = (uint)(local_100 == 0) + local_100 + iVar8;
          if (local_fc < local_100) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,iVar14);
          }
          psVar6 = local_108 + (lVar4 - (ulonglong)(iVar14 != 0));
          _guard_xfg_dispatch_icall_nop(psVar6,pvVar9,(longlong)iVar8 * 2);
          psVar6[iVar8] = 0;
          pvVar9 = local_a0;
        }
LAB_1428892d5:
        if (pvVar9 != (void *)0x0) {
          FMemory::Free(pvVar9);
        }
      }
      psVar6 = &DAT_143f3eda8;
      if (local_100 != 0) {
        psVar6 = local_108;
      }
      puVar11 = &DAT_1451c94dc;
      puVar10 = &DAT_1451cabbc;
      if (*(char *)(puVar13 + 2) != '\0') {
        puVar11 = &DAT_1451c945c;
      }
      if (*(char *)((longlong)puVar13 + 0x11) != '\0') {
        puVar10 = &DAT_1451cabb4;
      }
      FString::PrintfImpl(&local_c8,L"%s %s %s",puVar10,puVar11,psVar6);
      psVar6 = &DAT_143f3eda8;
      if (local_c0 != 0) {
        psVar6 = local_c8;
      }
      if (local_108 != psVar6) {
        if ((psVar6 == (short *)0x0) || (*psVar6 == 0)) {
          iVar14 = 0;
        }
        else {
          lVar4 = -1;
          do {
            lVar4 = lVar4 + 1;
          } while (psVar6[lVar4] != 0);
          iVar14 = (int)lVar4 + 1;
        }
        local_100 = 0;
        iVar8 = 0;
        if (local_fc != iVar14) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_108,iVar14);
          iVar8 = local_100;
        }
        local_100 = iVar8 + iVar14;
        if (local_fc < local_100) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108);
        }
        if (iVar14 != 0) {
          _guard_xfg_dispatch_icall_nop(local_108,psVar6,(longlong)iVar14 * 2);
        }
      }
      if (local_c8 != (short *)0x0) {
        FMemory::Free();
      }
      FLinearColor::FLinearColor(local_70,&param_6);
      uVar17 = *(ulonglong *)(DAT_146b17150 + 0x50);
      puVar19 = &DAT_1464aa6e0;
      ppsVar18 = local_70;
      FUN_1428a6e00(param_4);
      iVar14 = iVar15 + 0xc;
      if (local_108 != (short *)0x0) {
        FMemory::Free();
      }
      iVar12 = iVar12 + 1;
      lVar3 = lVar3 + 0x18;
      iVar8 = local_f8;
    } while (iVar12 < local_d8);
  }
  if (iVar14 <= local_f8) {
    iVar14 = local_f8;
  }
  if (local_e0 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return iVar14;
}



// FUNCTION 1428894f0 RenderStatNamedEvents body=354 status=ok
// SIG undefined RenderStatNamedEvents(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int UEngine::RenderStatNamedEvents(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 in_R9;
  int in_stack_00000028;
  int in_stack_00000030;
  undefined1 auStack_218 [32];
  undefined *local_1f8;
  float local_1e8;
  float local_1e4;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1c8 [64];
  uint local_188;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 local_14c;
  float local_144;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  uVar4 = *(undefined8 *)(DAT_146b17150 + 0x50);
  local_1e8 = (float)(in_stack_00000028 + -0x28);
  local_1e4 = (float)in_stack_00000030;
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_1e0,L"NAMED EVENTS ENABLED",L"UnrealEngine",L"NAMEDEVENTSENABLED");
  local_1f8 = &DAT_1464aa710;
  FCanvasTextItem::FCanvasTextItem(local_1c8,&local_1e8,uVar6,uVar4);
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1d8 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_1d8)(local_1d8);
      LOCK();
      piVar2 = (int *)((longlong)local_1d8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1d8 + 8))(local_1d8,1);
      }
    }
  }
  local_188 = local_188 | 2;
  local_150 = 0x3f800000;
  local_160 = DAT_1464aa6e0;
  uStack_15c = DAT_1464aa6e4;
  uStack_158 = DAT_1464aa6e8;
  uStack_154 = DAT_1464aa6ec;
  local_14c = 0x3f800000;
  FCanvas::DrawItem(in_R9,local_1c8);
  FUN_140c64b70(local_1c8);
  return (int)((float)in_stack_00000030 + local_144);
}



// FUNCTION 142889660 FUN_142889660 body=283 status=ok
// SIG undefined FUN_142889660(void)

int FUN_142889660(void)

{
  undefined8 uVar1;
  undefined8 in_R9;
  float fVar2;
  int in_stack_00000030;
  undefined1 local_d8;
  undefined2 local_d7;
  undefined1 local_d5;
  longlong local_d0 [2];
  undefined1 local_c0 [24];
  undefined1 local_a8 [80];
  longlong local_58;
  
  uVar1 = *(undefined8 *)(DAT_146b17150 + 0x50);
  FUN_1416a13c0(local_a8);
  fVar2 = (float)local_58;
  if (local_58 < 0) {
    fVar2 = fVar2 + 1.8446744e+19;
  }
  local_d7 = 0x1e90;
  local_d8 = 0xff;
  local_d5 = 0xff;
  FLinearColor::FLinearColor(local_c0,&local_d8);
  FString::PrintfImpl(local_d0,L"%5.2f MByte",(double)(fVar2 * 9.536743e-07));
  FUN_1428a6e00(in_R9);
  if (local_d0[0] != 0) {
    FMemory::Free();
  }
  fVar2 = (float)FUN_14244fa00(uVar1);
  return (int)(fVar2 * 1.1) + in_stack_00000030;
}



// FUNCTION 142889780 FUN_142889780 body=922 status=ok
// SIG undefined FUN_142889780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_142889780(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar9;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  undefined1 local_res8 [8];
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar16;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar17;
  undefined1 local_88 [8];
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  undefined8 local_68;
  longlong local_60 [2];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  uint uVar7;
  uint uVar8;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  uVar1 = *(undefined8 *)(DAT_146b17150 + 0x50);
  fVar15 = (float)FUN_14244fa00(uVar1);
  plVar2 = *(longlong **)(param_1 + 0x818);
  if (plVar2 == (longlong *)0x0) goto LAB_142889930;
  iVar3 = (**(code **)(*plVar2 + 0x288))(plVar2);
  local_80 = (undefined2 *)plVar2[3];
  FName::ToString(&local_80,&local_70);
  FUN_14244e9c0(uVar1,0x20,local_res8,local_88);
  puVar9 = &DAT_143f3eda8;
  if ((int)local_68 != 0) {
    puVar9 = local_70;
  }
  UFont::GetStringSize(uVar1,puVar9);
  if (iVar3 == 0) {
    FLinearColor::FLinearColor(local_60,&DAT_1464aa738);
    pwVar10 = L"%s TC: Closed";
LAB_1428898ba:
    puVar9 = &DAT_143f3eda8;
    if ((int)local_68 != 0) {
      puVar9 = local_70;
    }
    FString::PrintfImpl(&local_80,pwVar10,puVar9);
    uVar17 = 1;
    uVar16 = (undefined4)((ulonglong)local_60 >> 0x20);
    FUN_1428a6e00(param_4);
    if (local_80 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (iVar3 == 1) {
      FLinearColor::FLinearColor(local_60,&DAT_1464aa738);
      pwVar10 = L"%s TC: Error";
      goto LAB_1428898ba;
    }
    if (iVar3 == 2) {
      FLinearColor::FLinearColor(local_60,&DAT_1464aa73c);
      pwVar10 = L"%s TC: Synchronized";
      goto LAB_1428898ba;
    }
    if (iVar3 == 3) {
      FLinearColor::FLinearColor(local_60,&DAT_1464aa744);
      pwVar10 = L"%s TC: Synchronizing";
      goto LAB_1428898ba;
    }
  }
  param_6 = param_6 + (int)(fVar15 * 1.1);
  if (local_70 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_142889930:
  FLinearColor::FLinearColor(local_50,&DAT_1464aa73c);
  local_30 = DAT_1468b5cd8;
  local_40 = _DAT_1468b5cc8;
  uStack_38 = DAT_1468b5cd0;
  if (((((int)_DAT_1468b5cc8 < 0) || (_DAT_1468b5cc8 < 0)) || ((int)DAT_1468b5cd0 < 0)) ||
     (DAT_1468b5cd0 < 0)) {
    local_68 = 3;
    local_70 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
    puVar9 = local_70;
    FGenericPlatformString::Convert<char,wchar_t>(local_70,3,&DAT_144147ff8,3,0x3f);
    iVar3 = (int)local_68;
  }
  else {
    puVar9 = (undefined2 *)0x0;
    iVar3 = 0;
  }
  uVar5 = (int)uStack_38._4_4_ >> 0x1f;
  uVar6 = (int)(uint)uStack_38 >> 0x1f;
  uVar7 = (int)local_40._4_4_ >> 0x1f;
  uVar8 = (int)(uint)local_40 >> 0x1f;
  if ((char)local_30 == '\0') {
    iVar14 = (uStack_38._4_4_ ^ uVar5) - uVar5;
    iVar13 = ((uint)uStack_38 ^ uVar6) - uVar6;
    iVar12 = (local_40._4_4_ ^ uVar7) - uVar7;
    iVar4 = ((uint)local_40 ^ uVar8) - uVar8;
    pwVar10 = L"%s%02d:%02d:%02d:%02d";
  }
  else {
    iVar14 = (uStack_38._4_4_ ^ uVar5) - uVar5;
    iVar13 = ((uint)uStack_38 ^ uVar6) - uVar6;
    iVar12 = (local_40._4_4_ ^ uVar7) - uVar7;
    iVar4 = ((uint)local_40 ^ uVar8) - uVar8;
    pwVar10 = L"%s%02d;%02d;%02d;%02d";
  }
  puVar11 = &DAT_143f3eda8;
  if (iVar3 != 0) {
    puVar11 = puVar9;
  }
  FString::PrintfImpl(&local_80,pwVar10,puVar11,iVar4,iVar12,CONCAT44(uVar16,iVar13),
                      CONCAT44(uVar17,iVar14));
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  puVar9 = &DAT_143f3eda8;
  if (local_78 != 0) {
    puVar9 = local_80;
  }
  FString::PrintfImpl(local_60,L"TC: %s",puVar9);
  FUN_1428a6e00(param_4);
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  if (local_80 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return (int)(fVar15 * 1.1) + param_6;
}



// FUNCTION 142889b20 RenderStatUnit body=86 status=ok
// SIG undefined RenderStatUnit(void)

ulonglong UEngine::RenderStatUnit
                    (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                    undefined4 param_5,uint param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (*(longlong **)(param_3 + 0x50) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(param_3 + 0x50) + 0x130))();
    uVar2 = FUN_14286e5c0(uVar1,param_3,param_4,param_5);
    return uVar2;
  }
  return (ulonglong)param_6;
}



// FUNCTION 142889b80 FUN_142889b80 body=406 status=ok
// SIG undefined FUN_142889b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142889b80(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_308 [32];
  undefined8 local_2e8;
  undefined8 local_2e0;
  longlong local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined2 local_2c8;
  undefined1 local_2b8 [192];
  undefined4 local_1f8;
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  local_2d0 = 0;
  local_2cc = 0xffffffff;
  local_2c8 = 0x102;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = param_3;
  FUN_140c63b80(local_2b8,1,&local_2d8,&local_2e8);
  FRHICommandListBase::CacheActiveRenderTargets(param_2,local_1f8,local_2b8,local_128);
  puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 0x54;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x2a8);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 0x54;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar4;
  *(undefined8 **)(param_2 + 8) = puVar4 + 1;
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_1444d5488;
  FUN_140c63680(puVar4 + 2,local_2b8);
  uVar1 = *(undefined4 *)(param_3 + 0x60);
  uVar2 = *(undefined4 *)(param_3 + 100);
  puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar4 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar4 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar3;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar4;
  *(undefined8 **)(param_2 + 8) = puVar4 + 1;
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_143f59420;
  puVar4[2] = 0;
  *(undefined4 *)(puVar4 + 3) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = 0x3f800000;
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2b8);
  return;
}



// FUNCTION 142889d20 FUN_142889d20 body=1159 status=ok
// SIG undefined FUN_142889d20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142889d20(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_428 [32];
  undefined1 local_408;
  undefined8 local_3f8;
  undefined4 local_3f0;
  longlong *local_3e8;
  longlong *local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  uint local_3ac;
  undefined1 local_3a8 [8];
  undefined8 local_3a0;
  longlong lStack_398;
  uint local_390;
  undefined4 uStack_38c;
  uint uStack_388;
  undefined4 uStack_384;
  undefined8 local_380;
  longlong lStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  longlong lStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_338;
  undefined4 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 local_190 [64];
  longlong local_150;
  undefined4 local_148;
  undefined1 local_140 [64];
  longlong local_100;
  undefined4 local_f8;
  char local_f0;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_428;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar14 = *(undefined4 *)(param_2 + 0x80);
    uVar15 = *(undefined4 *)(param_2 + 0x84);
    uVar16 = *(undefined4 *)(param_2 + 0x88);
  }
  plVar13 = *(longlong **)(param_2 + 0x58);
  lVar9 = operator_new(0xb0);
  uVar12 = 0;
  local_1f8 = uVar12;
  if (lVar9 != 0) {
    local_3f0 = 0xffffffff;
    local_3f8 = 0xf9ffffffffffffde;
    local_3ac = local_3ac & 0xfffffff4 | 4;
    local_3e0 = *(longlong **)(param_2 + 0x70);
    local_3d8 = 0xf9ffffffffffffde;
    local_3b4 = 0x3f800000;
    local_3d0 = 0xffffffffffffffff;
    local_3c8 = 0;
    local_3b0 = 0;
    local_3e8 = plVar13;
    if (((local_3e0 != (longlong *)0x0) &&
        (lVar10 = (**(code **)(*local_3e0 + 0x208))(), lVar10 != 0)) &&
       ((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' ||
        ((DAT_1468c21ae == '\0' || (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))))) {
      local_3ac = local_3ac | 8;
      local_3b0 = FUN_1428ccc70(lVar10);
    }
    local_3ac = local_3ac | 8;
    local_3c0 = uVar15;
    local_3bc = uVar16;
    local_3b8 = uVar14;
    local_3b4 = (**(code **)(*plVar13 + 0x28))(plVar13);
    local_1f8 = FUN_142743490(lVar9,&local_3e8);
  }
  puVar11 = (undefined8 *)(**(code **)(*plVar13 + 0x20))(plVar13,local_3a8);
  uVar3 = *puVar11;
  FUN_141d11d10(&local_338);
  local_338 = _DAT_1468b5d90;
  local_328 = _DAT_1464aa7d0;
  uStack_320 = _DAT_1464aa7d8;
  local_318 = _DAT_1464aa7e0;
  uStack_310 = _DAT_1464aa7e8;
  local_330 = DAT_1468b5d98;
  lVar9 = *(longlong *)(param_1 + 8);
  local_308 = _DAT_1464aa7f0;
  uStack_300 = _DAT_1464aa7f8;
  local_2f8 = _DAT_1464aa800;
  uStack_2f0 = uRam00000001464aa808;
  local_218 = 0;
  local_210 = (undefined4)uVar3;
  local_20c = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_208 = 0;
  local_2e8 = *(undefined8 *)(lVar9 + 0xa70);
  uStack_2e0 = *(undefined8 *)(lVar9 + 0xa78);
  local_2d8 = *(undefined8 *)(lVar9 + 0xa80);
  uStack_2d0 = *(undefined8 *)(lVar9 + 0xa88);
  local_2c8 = *(undefined8 *)(lVar9 + 0xa90);
  uStack_2c0 = *(undefined8 *)(lVar9 + 0xa98);
  local_2b8 = *(undefined8 *)(lVar9 + 0xaa0);
  uStack_2b0 = *(undefined8 *)(lVar9 + 0xaa8);
  local_1d0 = DAT_1464aa6e0;
  uStack_1cc = DAT_1464aa6e4;
  uStack_1c8 = DAT_1464aa6e8;
  uStack_1c4 = DAT_1464aa6ec;
  local_1c0 = DAT_1464aa6c0;
  uStack_1bc = DAT_1464aa6c4;
  uStack_1b8 = DAT_1464aa6c8;
  uStack_1b4 = DAT_1464aa6cc;
  local_200 = local_210;
  local_1fc = local_20c;
  lVar9 = operator_new(0x1aa0);
  if (lVar9 != 0) {
    uVar12 = FUN_142742170(lVar9,&local_338);
  }
  if ((((&DAT_1464c9c48)[*(int *)(param_2 + 0x90)] - 8 < 3) ||
      ((&DAT_1464c9c48)[*(int *)(param_2 + 0x90)] == 0x18)) &&
     (cVar7 = FUN_142753a10(), cVar7 != '\0')) {
    local_408 = 1;
  }
  else {
    local_408 = 0;
  }
  lStack_398 = *(longlong *)(param_1 + 8);
  local_390 = (uint)(*(longlong *)(param_2 + 0x60) != 0);
  uStack_38c = *(undefined4 *)(param_2 + 0x78);
  uStack_388 = *(byte *)(param_2 + 0x1a4) & 1;
  local_3a0 = uVar12;
  FUN_14287b070(param_1,lStack_398 + 0x208,lStack_398 + 0xac0,uVar12);
  lVar9 = lStack_398;
  uVar6 = local_3a0;
  uVar12 = CONCAT44(uStack_38c,local_390);
  uVar3 = CONCAT44(uStack_384,uStack_388);
  local_380 = local_3a0;
  lStack_378 = lStack_398;
  local_370 = uVar12;
  uStack_368 = uVar3;
  if ((DAT_146ac3ac6 == '\0') || (cVar7 = IsInRenderingThread(), cVar7 == '\0')) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
      local_360 = uVar6;
      lStack_358 = lVar9;
      local_350 = uVar12;
      uStack_348 = uVar3;
      uVar12 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_142862eb0(&local_360,uVar12);
    }
    else {
      plVar13 = (longlong *)FUN_14286ba40(&local_3a0,0,0xff);
      lVar10 = *plVar13;
      *(undefined8 *)(lVar10 + 0x10) = uVar6;
      *(longlong *)(lVar10 + 0x18) = lVar9;
      *(undefined8 *)(lVar10 + 0x20) = uVar12;
      *(undefined8 *)(lVar10 + 0x28) = uVar3;
      lVar9 = *plVar13;
      lVar5 = plVar13[2];
      lVar10 = plVar13[1];
      lVar4 = *(longlong *)(lVar9 + 0x38);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
        UNLOCK();
      }
      FUN_14048a640(lVar9,lVar10,(int)lVar5,1);
      if (lVar4 != 0) {
        LOCK();
        piVar1 = (int *)(lVar4 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(lVar4);
        }
      }
    }
  }
  else {
    uVar12 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_142862eb0(&local_380,uVar12);
  }
  if ((*(byte *)(param_2 + 0x78) & 2) != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (local_f0 != '\0') {
    local_f0 = '\0';
    local_f8 = 0;
    if (local_100 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_140);
  }
  local_148 = 0;
  if (local_150 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_190);
  return 1;
}



// FUNCTION 14288a1b0 FUN_14288a1b0 body=1145 status=ok
// SIG undefined FUN_14288a1b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14288a1b0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_408 [32];
  undefined1 local_3e8;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3c8;
  longlong lStack_3c0;
  undefined8 local_3b8;
  longlong *local_3b0;
  longlong *local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  uint local_374;
  undefined1 local_370 [8];
  undefined8 local_368;
  longlong lStack_360;
  undefined8 local_358;
  undefined1 local_350 [24];
  undefined8 local_338;
  undefined4 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 local_190 [64];
  longlong local_150;
  undefined4 local_148;
  undefined1 local_140 [64];
  longlong local_100;
  undefined4 local_f8;
  char local_f0;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_408;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar14 = *(undefined4 *)(param_2 + 0x80);
    uVar15 = *(undefined4 *)(param_2 + 0x84);
    uVar16 = *(undefined4 *)(param_2 + 0x88);
  }
  plVar13 = *(longlong **)(param_2 + 0x58);
  lVar9 = operator_new(0xb0);
  uVar12 = 0;
  local_1f8 = uVar12;
  if (lVar9 != 0) {
    local_3d0 = 0xffffffff;
    local_3d8 = 0xf9ffffffffffffde;
    local_374 = local_374 & 0xfffffff4 | 4;
    local_3a8 = *(longlong **)(param_2 + 0x70);
    local_3a0 = 0xf9ffffffffffffde;
    local_37c = 0x3f800000;
    local_398 = 0xffffffffffffffff;
    local_390 = 0;
    local_378 = 0;
    local_3b0 = plVar13;
    if (((local_3a8 != (longlong *)0x0) &&
        (lVar10 = (**(code **)(*local_3a8 + 0x208))(), lVar10 != 0)) &&
       ((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' ||
        ((DAT_1468c21ae == '\0' || (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))))) {
      local_374 = local_374 | 8;
      local_378 = FUN_1428ccc70(lVar10);
    }
    local_374 = local_374 | 8;
    local_388 = uVar15;
    local_384 = uVar16;
    local_380 = uVar14;
    local_37c = (**(code **)(*plVar13 + 0x28))(plVar13);
    local_1f8 = FUN_142743490(lVar9,&local_3b0);
  }
  puVar11 = (undefined8 *)(**(code **)(*plVar13 + 0x20))(plVar13,local_370);
  uVar3 = *puVar11;
  FUN_141d11d10(&local_338);
  local_338 = _DAT_1468b5d90;
  local_328 = _DAT_1464aa7d0;
  uStack_320 = _DAT_1464aa7d8;
  local_318 = _DAT_1464aa7e0;
  uStack_310 = _DAT_1464aa7e8;
  local_330 = DAT_1468b5d98;
  lVar9 = *(longlong *)(param_1 + 8);
  local_308 = _DAT_1464aa7f0;
  uStack_300 = _DAT_1464aa7f8;
  local_2f8 = _DAT_1464aa800;
  uStack_2f0 = uRam00000001464aa808;
  local_218 = 0;
  local_210 = (undefined4)uVar3;
  local_20c = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_208 = 0;
  local_2e8 = *(undefined8 *)(lVar9 + 0x10);
  uStack_2e0 = *(undefined8 *)(lVar9 + 0x18);
  local_2d8 = *(undefined8 *)(lVar9 + 0x20);
  uStack_2d0 = *(undefined8 *)(lVar9 + 0x28);
  local_2c8 = *(undefined8 *)(lVar9 + 0x30);
  uStack_2c0 = *(undefined8 *)(lVar9 + 0x38);
  local_2b8 = *(undefined8 *)(lVar9 + 0x40);
  uStack_2b0 = *(undefined8 *)(lVar9 + 0x48);
  local_1d0 = DAT_1464aa6e0;
  uStack_1cc = DAT_1464aa6e4;
  uStack_1c8 = DAT_1464aa6e8;
  uStack_1c4 = DAT_1464aa6ec;
  local_1c0 = DAT_1464aa6c0;
  uStack_1bc = DAT_1464aa6c4;
  uStack_1b8 = DAT_1464aa6c8;
  uStack_1b4 = DAT_1464aa6cc;
  local_200 = local_210;
  local_1fc = local_20c;
  lVar9 = operator_new(0x1aa0);
  if (lVar9 != 0) {
    uVar12 = FUN_142742170(lVar9,&local_338);
  }
  if ((((&DAT_1464c9c48)[*(int *)(param_2 + 0x90)] - 8 < 3) ||
      ((&DAT_1464c9c48)[*(int *)(param_2 + 0x90)] == 0x18)) &&
     (cVar6 = *(char *)(param_2 + 0x8d), cVar7 = FUN_142753a10(), cVar7 != cVar6)) {
    local_3e8 = 1;
  }
  else {
    local_3e8 = 0;
  }
  lStack_3c0 = *(longlong *)(param_1 + 8);
  local_3b8 = CONCAT44(*(undefined4 *)(param_2 + 0x78),(uint)(*(longlong *)(param_2 + 0x60) != 0));
  local_3c8 = uVar12;
  FUN_14287ce00(param_1,lStack_3c0 + 0x268,lStack_3c0 + 0xac8,uVar12);
  uVar3 = local_3b8;
  lVar9 = lStack_3c0;
  uVar12 = local_3c8;
  local_368 = local_3c8;
  lStack_360 = lStack_3c0;
  local_358 = local_3b8;
  if ((DAT_146ac3ac6 == '\0') || (cVar6 = IsInRenderingThread(), cVar6 == '\0')) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
      local_3c8 = uVar12;
      lStack_3c0 = lVar9;
      local_3b8 = uVar3;
      uVar12 = FBaseGraphTask::GetSmallTaskAllocator();
      FUN_142862c50(&local_3c8,uVar12);
    }
    else {
      plVar13 = (longlong *)FUN_14286bb90(local_350,0,0xff);
      lVar10 = *plVar13;
      *(undefined8 *)(lVar10 + 0x10) = uVar12;
      *(longlong *)(lVar10 + 0x18) = lVar9;
      *(undefined8 *)(lVar10 + 0x20) = uVar3;
      lVar9 = *plVar13;
      lVar5 = plVar13[2];
      lVar10 = plVar13[1];
      lVar4 = *(longlong *)(lVar9 + 0x30);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
        UNLOCK();
      }
      FUN_14048a160(lVar9,lVar10,(int)lVar5,1);
      if (lVar4 != 0) {
        LOCK();
        piVar1 = (int *)(lVar4 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(lVar4);
        }
      }
    }
  }
  else {
    uVar12 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_142862c50(&local_368,uVar12);
  }
  if ((*(byte *)(param_2 + 0x78) & 2) != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (local_f0 != '\0') {
    local_f0 = '\0';
    local_f8 = 0;
    if (local_100 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_140);
  }
  local_148 = 0;
  if (local_150 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_190);
  return 1;
}



// FUNCTION 14288a630 FUN_14288a630 body=1203 status=ok
// SIG undefined FUN_14288a630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14288a630(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_3e8 [32];
  longlong local_3c8;
  undefined1 local_3c0;
  longlong local_3b8;
  ulonglong local_3a8 [2];
  undefined8 local_398;
  undefined8 local_390;
  longlong *local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  uint local_34c;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 *local_208;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 local_1a0 [64];
  longlong local_160;
  undefined4 local_158;
  undefined1 local_150 [64];
  longlong local_110;
  undefined4 local_108;
  char local_100;
  ulonglong local_88;
  undefined8 *puVar12;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar13 = *(undefined4 *)(param_4 + 0x80);
    uVar14 = *(undefined4 *)(param_4 + 0x84);
    uVar15 = *(undefined4 *)(param_4 + 0x88);
  }
  plVar7 = *(longlong **)(param_4 + 0x58);
  local_398 = param_3;
  local_390 = param_2;
  lVar4 = operator_new(0xb0);
  puVar10 = (undefined8 *)0x0;
  puVar5 = puVar10;
  if (lVar4 != 0) {
    local_34c = local_34c & 0xfffffffc | 0xc;
    local_3a8[0] = 0xf9ffffffffffffde;
    local_378 = 0xf9ffffffffffffde;
    local_354 = 0x3f800000;
    local_380 = 0;
    local_370 = 0xffffffffffffffff;
    local_368 = 0;
    local_350 = 0;
    local_388 = plVar7;
    local_360 = uVar14;
    local_35c = uVar15;
    local_358 = uVar13;
    local_354 = (**(code **)(*plVar7 + 0x28))(plVar7);
    puVar5 = (undefined8 *)FUN_142743490(lVar4,&local_388);
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_3a8);
  uVar1 = *puVar6;
  FUN_141d11d10(&local_348);
  local_348 = _DAT_1468b5d90;
  local_338 = _DAT_1464aa7d0;
  uStack_330 = _DAT_1464aa7d8;
  local_328 = _DAT_1464aa7e0;
  uStack_320 = _DAT_1464aa7e8;
  local_340 = DAT_1468b5d98;
  lVar4 = *(longlong *)(param_1 + 8);
  local_318 = _DAT_1464aa7f0;
  uStack_310 = _DAT_1464aa7f8;
  local_308 = _DAT_1464aa800;
  uStack_300 = uRam00000001464aa808;
  local_228 = 0;
  local_220 = (undefined4)uVar1;
  local_21c = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_218 = 0;
  local_2f8 = *(undefined8 *)(lVar4 + 0xa70);
  uStack_2f0 = *(undefined8 *)(lVar4 + 0xa78);
  local_2e8 = *(undefined8 *)(lVar4 + 0xa80);
  uStack_2e0 = *(undefined8 *)(lVar4 + 0xa88);
  local_2d8 = *(undefined8 *)(lVar4 + 0xa90);
  uStack_2d0 = *(undefined8 *)(lVar4 + 0xa98);
  local_2c8 = *(undefined8 *)(lVar4 + 0xaa0);
  uStack_2c0 = *(undefined8 *)(lVar4 + 0xaa8);
  local_1e0 = DAT_1464aa6e0;
  uStack_1dc = DAT_1464aa6e4;
  uStack_1d8 = DAT_1464aa6e8;
  uStack_1d4 = DAT_1464aa6ec;
  local_1d0 = DAT_1464aa6c0;
  uStack_1cc = DAT_1464aa6c4;
  uStack_1c8 = DAT_1464aa6c8;
  uStack_1c4 = DAT_1464aa6cc;
  local_210 = local_220;
  local_20c = local_21c;
  local_208 = puVar5;
  lVar4 = operator_new(0x1aa0);
  puVar5 = puVar10;
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)FUN_142742170(lVar4,&local_348);
  }
  if ((((&DAT_1464c9c48)[*(int *)(param_4 + 0x90)] - 8 < 3) ||
      ((&DAT_1464c9c48)[*(int *)(param_4 + 0x90)] == 0x18)) &&
     (cVar3 = FUN_142753a10(), cVar3 != '\0')) {
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x978) + 0x28))();
  local_3c8 = CONCAT71(local_3c8._1_7_,uVar9);
  FUN_14287b070(param_1,*(longlong *)(param_1 + 8) + 0x208,*(longlong *)(param_1 + 8) + 0xac0,puVar5
               );
  lVar4 = *(longlong *)(param_1 + 8);
  if (0 < *(int *)(lVar4 + 0xac8)) {
    local_3a8[0] = local_3a8[0] & 0xffffffff00000000;
    puVar6 = puVar10;
    puVar12 = puVar10;
    do {
      lVar4 = *(longlong *)(param_1 + 8);
      lVar2 = *(longlong *)(lVar4 + 0xac0);
      *(undefined8 *)(lVar4 + 0xa50) = *(undefined8 *)(lVar4 + 0xa68);
      lVar8 = *(longlong *)(lVar4 + 0xa20);
      if (*(longlong *)(lVar4 + 0xa20) == 0) {
        lVar8 = lVar4 + 0x9a8;
      }
      *(int *)(lVar8 + 0x44) = (int)puVar6;
      plVar7 = (longlong *)GetRendererModule();
      local_3c0 = *(longlong *)(param_4 + 0x60) != 0;
      local_3b8 = lVar2 + (longlong)(int)puVar12 * 0x28 + 0x20;
      local_3c8 = lVar4 + 0x9a8;
      (**(code **)(*plVar7 + 0x90))(plVar7,local_390,local_398,puVar5);
      uVar11 = (int)puVar12 + 1;
      puVar12 = (undefined8 *)(ulonglong)uVar11;
      lVar4 = *(longlong *)(param_1 + 8);
      puVar6 = (undefined8 *)(ulonglong)((int)local_3a8[0] + 6U);
      local_3a8[0] = CONCAT44(local_3a8[0]._4_4_,(int)local_3a8[0] + 6U);
    } while ((int)uVar11 < *(int *)(lVar4 + 0xac8));
  }
  (**(code **)(*(longlong *)(lVar4 + 0xe8) + 0x30))();
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  lVar4 = *(longlong *)(param_1 + 8);
  puVar6 = puVar10;
  if (0 < *(int *)(lVar4 + 0x1f8)) {
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1f0);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(param_1 + 8) + 0x140;
      }
      (**(code **)(*(longlong *)(lVar4 + (longlong)puVar10) + 0x30))();
      lVar4 = *(longlong *)(param_1 + 8);
      uVar11 = (int)puVar6 + 1;
      puVar10 = puVar10 + 0xb;
      puVar6 = (undefined8 *)(ulonglong)uVar11;
    } while ((int)uVar11 < *(int *)(lVar4 + 0x1f8));
  }
  (**(code **)(*(longlong *)(lVar4 + 0x978) + 0x30))();
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x208) + 0x30))();
  lVar4 = puVar5[2];
  if (lVar4 != 0) {
    FUN_142745dc0(lVar4);
    FMemory::operator_delete(lVar4,0xb0);
  }
  (**(code **)*puVar5)(puVar5,1);
  if ((*(byte *)(param_4 + 0x78) & 2) != 0) {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1428647e0(*(longlong *)(param_1 + 8),1);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (local_100 != '\0') {
    local_100 = '\0';
    local_108 = 0;
    if (local_110 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_150);
  }
  local_158 = 0;
  if (local_160 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_1a0);
  return 1;
}



// FUNCTION 14288aaf0 FUN_14288aaf0 body=1183 status=ok
// SIG undefined FUN_14288aaf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14288aaf0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_3e8 [32];
  longlong local_3c8;
  undefined1 local_3c0;
  longlong local_3b8;
  ulonglong local_3a8 [2];
  undefined8 local_398;
  undefined8 local_390;
  longlong *local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  uint local_34c;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 *local_208;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 local_1a0 [64];
  longlong local_160;
  undefined4 local_158;
  undefined1 local_150 [64];
  longlong local_110;
  undefined4 local_108;
  char local_100;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar14 = *(undefined4 *)(param_4 + 0x80);
    uVar15 = *(undefined4 *)(param_4 + 0x84);
    uVar16 = *(undefined4 *)(param_4 + 0x88);
  }
  plVar8 = *(longlong **)(param_4 + 0x58);
  local_398 = param_3;
  local_390 = param_2;
  lVar5 = operator_new(0xb0);
  puVar10 = (undefined8 *)0x0;
  puVar6 = puVar10;
  if (lVar5 != 0) {
    local_34c = local_34c & 0xfffffffc | 0xc;
    local_3a8[0] = 0xf9ffffffffffffde;
    local_378 = 0xf9ffffffffffffde;
    local_354 = 0x3f800000;
    local_380 = 0;
    local_370 = 0xffffffffffffffff;
    local_368 = 0;
    local_350 = 0;
    local_388 = plVar8;
    local_360 = uVar15;
    local_35c = uVar16;
    local_358 = uVar14;
    local_354 = (**(code **)(*plVar8 + 0x28))(plVar8);
    puVar6 = (undefined8 *)FUN_142743490(lVar5,&local_388);
  }
  puVar7 = (undefined8 *)(**(code **)(*plVar8 + 0x20))(plVar8,local_3a8);
  uVar2 = *puVar7;
  FUN_141d11d10(&local_348);
  local_348 = _DAT_1468b5d90;
  local_340 = DAT_1468b5d98;
  lVar5 = *(longlong *)(param_1 + 8);
  local_338 = _DAT_1464aa7d0;
  uStack_330 = _DAT_1464aa7d8;
  local_328 = _DAT_1464aa7e0;
  uStack_320 = _DAT_1464aa7e8;
  local_318 = _DAT_1464aa7f0;
  uStack_310 = _DAT_1464aa7f8;
  local_308 = _DAT_1464aa800;
  uStack_300 = uRam00000001464aa808;
  local_228 = 0;
  local_220 = (undefined4)uVar2;
  local_21c = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_218 = 0;
  local_2f8 = *(undefined8 *)(lVar5 + 0x10);
  uStack_2f0 = *(undefined8 *)(lVar5 + 0x18);
  local_2e8 = *(undefined8 *)(lVar5 + 0x20);
  uStack_2e0 = *(undefined8 *)(lVar5 + 0x28);
  local_2d8 = *(undefined8 *)(lVar5 + 0x30);
  uStack_2d0 = *(undefined8 *)(lVar5 + 0x38);
  local_2c8 = *(undefined8 *)(lVar5 + 0x40);
  uStack_2c0 = *(undefined8 *)(lVar5 + 0x48);
  local_1e0 = DAT_1464aa6e0;
  uStack_1dc = DAT_1464aa6e4;
  uStack_1d8 = DAT_1464aa6e8;
  uStack_1d4 = DAT_1464aa6ec;
  local_1d0 = DAT_1464aa6c0;
  uStack_1cc = DAT_1464aa6c4;
  uStack_1c8 = DAT_1464aa6c8;
  uStack_1c4 = DAT_1464aa6cc;
  local_210 = local_220;
  local_20c = local_21c;
  local_208 = puVar6;
  if ((((&DAT_1464c9c48)[*(int *)(param_4 + 0x90)] - 8 < 3) ||
      ((&DAT_1464c9c48)[*(int *)(param_4 + 0x90)] == 0x18)) &&
     (cVar1 = *(char *)(param_4 + 0x8d), cVar4 = FUN_142753a10(), cVar4 != cVar1)) {
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
  lVar5 = operator_new(0x1aa0);
  puVar6 = puVar10;
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)FUN_142742170(lVar5,&local_348);
  }
  local_3c8 = CONCAT71(local_3c8._1_7_,uVar11);
  FUN_14287ce00(param_1,*(longlong *)(param_1 + 8) + 0x268,*(longlong *)(param_1 + 8) + 0xac8,puVar6
               );
  lVar5 = *(longlong *)(param_1 + 8);
  if (0 < *(int *)(lVar5 + 0xad0)) {
    local_3a8[0] = local_3a8[0] & 0xffffffff00000000;
    puVar7 = puVar10;
    do {
      lVar5 = *(longlong *)(param_1 + 8);
      lVar3 = *(longlong *)(lVar5 + 0xac8);
      *(longlong *)(lVar5 + 0xaa8) = lVar5 + 0x268;
      *(undefined8 *)(lVar5 + 0xab0) = **(undefined8 **)(param_1 + 8);
      lVar9 = *(longlong *)(lVar5 + 0xa80);
      if (*(longlong *)(lVar5 + 0xa80) == 0) {
        lVar9 = lVar5 + 0xa08;
      }
      *(int *)(lVar9 + 0x44) = (int)puVar10;
      plVar8 = (longlong *)GetRendererModule();
      local_3b8 = lVar3 + 0x60 + (longlong)(int)puVar7 * 100;
      local_3c0 = *(longlong *)(param_4 + 0x60) != 0;
      local_3c8 = lVar5 + 0xa08;
      (**(code **)(*plVar8 + 0x90))(plVar8,local_390,local_398,puVar6);
      uVar13 = (int)puVar7 + 1;
      puVar7 = (undefined8 *)(ulonglong)uVar13;
      lVar5 = *(longlong *)(param_1 + 8);
      puVar10 = (undefined8 *)(ulonglong)((int)local_3a8[0] + 3U);
      local_3a8[0] = CONCAT44(local_3a8[0]._4_4_,(int)local_3a8[0] + 3U);
    } while ((int)uVar13 < *(int *)(lVar5 + 0xad0));
  }
  (**(code **)(*(longlong *)(lVar5 + 0x148) + 0x30))();
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x60) + 0x30))();
  lVar5 = *(longlong *)(param_1 + 8);
  plVar8 = *(longlong **)(lVar5 + 0x250);
  if (*(longlong **)(lVar5 + 0x250) == (longlong *)0x0) {
    plVar8 = (longlong *)(lVar5 + 0x1a0);
  }
  plVar12 = plVar8 + (longlong)*(int *)(lVar5 + 600) * 0xb;
  if (plVar8 != plVar12) {
    do {
      (**(code **)(*plVar8 + 0x30))(plVar8);
      plVar8 = plVar8 + 0xb;
    } while (plVar8 != plVar12);
    lVar5 = *(longlong *)(param_1 + 8);
  }
  (**(code **)(*(longlong *)(lVar5 + 0x9d8) + 0x30))();
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x268) + 0x30))();
  lVar5 = puVar6[2];
  if (lVar5 != 0) {
    FUN_142745dc0(lVar5);
    FMemory::operator_delete(lVar5,0xb0);
  }
  (**(code **)*puVar6)(puVar6,1);
  if ((*(byte *)(param_4 + 0x78) & 2) != 0) {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1428648b0(*(longlong *)(param_1 + 8),1);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (local_100 != '\0') {
    local_100 = '\0';
    local_108 = 0;
    if (local_110 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_150);
  }
  local_158 = 0;
  if (local_160 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_1a0);
  return 1;
}



// FUNCTION 14288af90 RequestResolutionChange body=363 status=ok
// SIG undefined RequestResolutionChange(void)

void FSystemResolution::RequestResolutionChange(undefined4 param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined4 *local_28;
  undefined8 local_20;
  undefined2 *local_18;
  int local_10;
  
  local_28 = (undefined4 *)0x0;
  local_20 = 0;
  if (param_3 == 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,2);
    iVar3 = (int)local_20 + 2;
    local_20 = CONCAT44(local_20._4_4_,iVar3);
    if (local_20._4_4_ < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
    }
    uVar4 = 0x66;
LAB_14288b06b:
    *local_28 = uVar4;
LAB_14288b071:
    puVar6 = local_28;
    if ((int)local_20 != 0) goto LAB_14288b07d;
  }
  else {
    if (param_3 == 1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,3);
      iVar3 = (int)local_20 + 3;
      local_20 = CONCAT44(local_20._4_4_,iVar3);
      if (local_20._4_4_ < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
      }
      *local_28 = 0x660077;
      *(undefined2 *)(local_28 + 1) = 0;
      goto LAB_14288b071;
    }
    if (param_3 == 2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,2);
      iVar3 = (int)local_20 + 2;
      local_20 = CONCAT44(local_20._4_4_,iVar3);
      if (local_20._4_4_ < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
      }
      uVar4 = 0x77;
      goto LAB_14288b06b;
    }
  }
  puVar6 = (undefined4 *)&DAT_143f3eda8;
LAB_14288b07d:
  puVar2 = local_28;
  FString::PrintfImpl(&local_18,L"%dx%d%s",param_1,param_2,puVar6);
  plVar1 = DAT_146b17610;
  puVar7 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar7 = local_18;
  }
  uVar5 = (**(code **)(*DAT_146b17610 + 0x18))(DAT_146b17610);
  (**(code **)(*plVar1 + 0x60))(plVar1,puVar7,uVar5 & 0xff000000);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar2 != (undefined4 *)0x0) {
    FMemory::Free(puVar2);
  }
  return;
}



// FUNCTION 14288b100 RequestScreenshot body=588 status=ok
// SIG undefined RequestScreenshot(void)

void FScreenshotRequest::RequestScreenshot(undefined8 *param_1,char param_2,char param_3)

{
  void *pvVar1;
  int iVar2;
  void **ppvVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  longlong local_28 [2];
  
  local_30 = *(int *)(param_1 + 1);
  lVar6 = (longlong)local_30;
  pvVar1 = (void *)*param_1;
  local_38 = (void *)0x0;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    ::_guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar6 * 2);
  }
  FUN_14286c550(&local_38);
  pvVar1 = local_38;
  if (param_3 == '\0') {
    lVar6 = (longlong)local_30;
    DAT_146b17550._0_4_ = local_30;
    if ((local_30 == 0) && (DAT_146b17550._4_4_ == 0)) {
      DAT_146b17550._4_4_ = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&DAT_146b17548,local_30);
      ::_guard_xfg_dispatch_icall_nop(DAT_146b17548,pvVar1,lVar6 * 2);
    }
    lVar6 = FUN_141672300(local_28,&DAT_146b17548,0);
    iVar5 = *(int *)(lVar6 + 8) + -1;
    if (*(int *)(lVar6 + 8) == 0) {
      iVar5 = 0;
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    iVar2 = (int)DAT_146b17550;
    if (iVar5 == 0) {
      lVar6 = (longlong)(int)DAT_146b17550;
      DAT_146b17550._0_4_ = (5 - (uint)((int)DAT_146b17550 != 0)) + (int)DAT_146b17550;
      if (DAT_146b17550._4_4_ < (int)DAT_146b17550) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146b17548,iVar2);
      }
      pvVar1 = DAT_146b17548;
      lVar6 = lVar6 - (ulonglong)(iVar2 != 0);
      builtin_wcsncpy((wchar_t *)((longlong)DAT_146b17548 + lVar6 * 2),L".png",4);
      *(undefined2 *)((longlong)pvVar1 + lVar6 * 2 + 8) = 0;
    }
  }
  else {
    ppvVar3 = (void **)FUN_141671940(local_28,&local_38,0);
    if (&local_38 != ppvVar3) {
      if (local_38 != (void *)0x0) {
        FMemory::Free();
      }
      local_38 = *ppvVar3;
      *ppvVar3 = (void *)0x0;
      local_30 = *(int *)(ppvVar3 + 1);
      local_2c = *(undefined4 *)((longlong)ppvVar3 + 0xc);
      ppvVar3[1] = (void *)0x0;
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    local_28[0] = 0;
    local_28[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],&DAT_1451c9550,8);
    uVar4 = FUN_1415c3d50();
    FFileHelper::GenerateNextBitmapFilename(&local_38,local_28,&DAT_146b17548,uVar4);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if (1 < (int)DAT_146b17550) {
    DAT_146b1716d = 1;
    DAT_146b1716e = param_2;
  }
  DAT_1468c217f = DAT_1464aaa48;
  if (param_2 == '\0') {
    DAT_1464aaa48 = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14288b350 Reset body=56 status=ok
// SIG undefined Reset(void)

void FScreenshotRequest::Reset(void)

{
  DAT_146b1716d = 0;
  DAT_146b17550._0_4_ = 0;
  if (DAT_146b17550._4_4_ != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_146b17548,0);
  }
  DAT_146b1716e = 0;
  return;
}



// FUNCTION 14288b390 FUN_14288b390 body=674 status=ok
// SIG undefined FUN_14288b390(void)

void FUN_14288b390(longlong *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (((int)param_1[0x18] != param_2) || (*(int *)((longlong)param_1 + 0xc4) != param_3)) {
    lVar13 = param_1[0xc];
    *(int *)(param_1 + 0x18) = param_2;
    *(int *)((longlong)param_1 + 0xc4) = param_3;
    if (lVar13 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014288b62b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x278))();
      return;
    }
    if (DAT_146ac3ac5 == '\0') {
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
         (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)) {
        lVar13 = param_1[0xc];
        lVar9 = param_1[0x18];
        iVar11 = *(int *)((longlong)param_1 + 0xc4);
        uVar8 = FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_48);
        if ((*(int *)(lVar13 + 0xc4) != (int)lVar9) || (*(int *)(lVar13 + 200) != iVar11)) {
          *(int *)(lVar13 + 0xc4) = (int)lVar9;
          *(int *)(lVar13 + 200) = iVar11;
          FRenderResource::UpdateRHI(lVar13);
        }
        (*(code *)**(undefined8 **)(lVar13 + 0x78))(lVar13 + 0x78,uVar8,1);
        QueryPerformanceCounter(&local_res20);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_48._0_4_);
        return;
      }
      lVar13 = param_1[0xc];
    }
    pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar7 = TlsGetValue(*pDVar6);
    plVar12 = (longlong *)0x0;
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)operator_new(0x18);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = 0;
        plVar7[1] = 0;
        *(undefined4 *)(plVar7 + 2) = 0;
        plVar12 = plVar7;
      }
      TlsSetValue(*pDVar6,plVar12);
      plVar7 = plVar12;
    }
    plVar12 = (longlong *)plVar7[1];
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)*plVar7;
      if (plVar12 == (longlong *)0x0) {
        lVar9 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
        plVar7[1] = lVar9;
        if (lVar9 == 0) {
          puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar7[1] = (longlong)puVar10;
          lVar9 = 0x1f;
          do {
            puVar2 = puVar10 + 0x20;
            *puVar10 = puVar2;
            lVar9 = lVar9 + -1;
            puVar10 = puVar2;
          } while (lVar9 != 0);
          *puVar2 = 0;
        }
        plVar12 = (longlong *)plVar7[1];
        iVar11 = 0x20;
        *(undefined4 *)(plVar7 + 2) = 0x20;
      }
      else {
        iVar11 = 0x20;
        plVar7[1] = (longlong)plVar12;
        *(undefined4 *)(plVar7 + 2) = 0x20;
        *plVar7 = 0;
      }
    }
    else {
      iVar11 = (int)plVar7[2];
    }
    plVar7[1] = *plVar12;
    *(int *)(plVar7 + 2) = iVar11 + -1;
    *plVar12 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar12 + 1) = 0xff;
    local_40 = 0;
    local_38 = 0;
    *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
    *(undefined1 *)(plVar12 + 4) = 0;
    *plVar12 = (longlong)&PTR_FUN_1451de298;
    plVar12[5] = 0;
    uVar3 = *(undefined4 *)((longlong)param_1 + 0xc4);
    lVar9 = param_1[0x18];
    plVar12[2] = lVar13;
    *(int *)(plVar12 + 3) = (int)lVar9;
    *(undefined4 *)((longlong)plVar12 + 0x1c) = uVar3;
    lVar13 = plVar12[5];
    piVar1 = (int *)(lVar13 + 0x48);
    if (lVar13 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_1409421c0(plVar12,0,0xff,1);
    if (lVar13 != 0) {
      LOCK();
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        FGraphEvent::Recycle(lVar13);
      }
    }
  }
  return;
}



// FUNCTION 14288b640 FUN_14288b640 body=33 status=ok
// SIG undefined FUN_14288b640(void)

void FUN_14288b640(longlong *param_1)

{
  (**(code **)(*param_1 + 0x280))(param_1,0);
  *(byte *)((longlong)param_1 + 0x179) = *(byte *)((longlong)param_1 + 0x179) | 6;
  return;
}



// FUNCTION 14288b670 FUN_14288b670 body=66 status=ok
// SIG undefined FUN_14288b670(void)

void FUN_14288b670(longlong *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x280))(param_1,0);
  uVar1 = FTimeline::GetTimelineLength(param_1 + 0x2f);
  FUN_14288d7b0(param_1 + 0x2f,uVar1,0,1);
  *(byte *)((longlong)param_1 + 0x179) = *(byte *)((longlong)param_1 + 0x179) | 6;
  return;
}



// FUNCTION 14288b6c0 Run body=85 status=ok
// SIG undefined Run(void)

undefined8 FScreenSaverInhibitor::Run(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 8);
  do {
    if (cVar1 == '\0') {
      return 0;
    }
    iVar2 = 0;
    do {
      if (*(char *)(param_1 + 8) == '\0') break;
      FUN_1416b1760(0x3f800000);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x32);
    FWindowsPlatformApplicationMisc::PreventScreenSaver();
    cVar1 = *(char *)(param_1 + 8);
  } while( true );
}



// FUNCTION 14288b720 FUN_14288b720 body=1307 status=ok
// SIG undefined FUN_14288b720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14288b720(longlong param_1,float *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint **ppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  int iStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  ulonglong local_148 [2];
  longlong *local_138;
  undefined8 uStack_130;
  uint *local_128;
  uint uStack_120;
  int iStack_11c;
  uint local_118;
  undefined4 uStack_114;
  longlong *local_110;
  uint **local_108;
  int local_f8;
  undefined8 local_e8;
  float fStack_e0;
  uint uStack_dc;
  longlong *local_d8;
  ulonglong uStack_d0;
  uint *puStack_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  code *local_a8 [2];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_168 = FUN_142874100();
  uVar15 = 0;
  local_78 = (longlong *)0x0;
  local_a8[0] = AK::MemoryMgr::StartProfileThreadUsage;
  uStack_160 = local_a8;
  local_68 = 0;
  local_158 = SUB84(param_2,0);
  iStack_154 = (int)((ulonglong)param_2 >> 0x20);
  uStack_150 = (uint)param_1;
  uStack_14c = (undefined4)((ulonglong)param_1 >> 0x20);
  local_108 = (uint **)0x0;
  local_f8 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x28,&local_128);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_144eb6740;
    *(undefined4 *)(puVar7 + 1) = (undefined4)local_168;
    *(undefined4 *)((longlong)puVar7 + 0xc) = local_168._4_4_;
    *(float *)(puVar7 + 2) = (float)uStack_160;
    *(uint *)((longlong)puVar7 + 0x14) = uStack_160._4_4_;
    puVar7[3] = CONCAT44(iStack_154,local_158);
    puVar7[4] = CONCAT44(uStack_14c,uStack_150);
  }
  local_138 = (longlong *)&LAB_142867890;
  FGenericPlatformMemory::MemswapGreaterThan8(&local_138,local_a8,0x50);
  if (local_f8 != 0) {
    ppuVar13 = &local_128;
    if (local_108 != (uint **)0x0) {
      ppuVar13 = local_108;
    }
    if (ppuVar13 != (uint **)0x0) {
      (**(code **)(*ppuVar13 + 4))(ppuVar13,0);
    }
  }
  if (local_108 != (uint **)0x0) {
    FMemory::Free();
  }
  fVar19 = 0.0;
  uVar9 = uVar15;
  for (uVar11 = *(ulonglong *)(param_1 + 0x58); uVar11 != 0; uVar11 = *(ulonglong *)(uVar11 + 0x30))
  {
    fVar19 = fVar19 + *(float *)(uVar11 + 0x38);
    uVar8 = uVar11;
    if ((*(byte *)(uVar11 + 0xc) & 1) != 0) {
      if (*(int *)(uVar11 + 0x10) != DAT_1468c21b0) {
        *(undefined8 *)(uVar11 + 0x18) = 0;
      }
      fVar18 = *param_2;
      if (fVar18 <= fVar19) {
        iVar3 = *(int *)(param_1 + 0xb8);
        *(int *)(param_1 + 0xb8) = iVar3 + 1;
        uStack_160 = (code **)(CONCAT44((int)((ulonglong)uStack_160 >> 0x20),fVar19 - fVar18) &
                              0xffffff00ffffffff);
        local_168 = uVar11;
        if (*(int *)(param_1 + 0xbc) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xb0,iVar3);
        }
        uVar16 = (undefined4)local_168;
        uVar17 = local_168._4_4_;
        fVar18 = (float)uStack_160;
        uVar5 = uStack_160._4_4_;
      }
      else {
        uVar8 = uVar15;
        local_148[0] = uVar11;
        if (local_68 != 0) {
          plVar10 = local_98;
          if (local_78 != (longlong *)0x0) {
            plVar10 = local_78;
          }
          if (plVar10 != (longlong *)0x0) {
            uVar8 = (**(code **)(*plVar10 + 8))();
          }
        }
        (*local_a8[0])(uVar8,local_148);
        fVar18 = *param_2;
        fVar2 = *(float *)(uVar11 + 0x40);
        iVar3 = *(int *)(param_1 + 0xb8);
        local_e8 = uVar11;
        uStack_dc = uStack_dc & 0xffffff00;
        *(int *)(param_1 + 0xb8) = iVar3 + 1;
        fStack_e0 = fVar2 - (fVar18 - fVar19);
        if (*(int *)(param_1 + 0xbc) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xb0,iVar3);
        }
        uVar16 = (undefined4)local_e8;
        uVar17 = local_e8._4_4_;
        fVar18 = fStack_e0;
        uVar5 = uStack_dc;
      }
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar3 * 0x10);
      *puVar1 = uVar16;
      puVar1[1] = uVar17;
      puVar1[2] = fVar18;
      puVar1[3] = uVar5;
      if (uVar9 == 0) {
        *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(uVar11 + 0x30);
      }
      else {
        *(undefined8 *)(uVar9 + 0x30) = *(undefined8 *)(uVar11 + 0x30);
      }
      lVar4 = *(longlong *)(uVar11 + 0x30);
      uVar8 = uVar9;
      if (lVar4 != 0) {
        *(float *)(lVar4 + 0x38) = *(float *)(lVar4 + 0x38) + *(float *)(uVar11 + 0x38);
        fVar19 = fVar19 - *(float *)(uVar11 + 0x38);
      }
    }
    uVar9 = uVar8;
  }
  local_138 = (longlong *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x30);
  uStack_160 = (code **)(param_1 + 0x18);
  local_168 = 0x100000000;
  iStack_154 = 0;
  uStack_150 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar14 = (uint *)uStack_160;
    }
    uVar5 = *puVar14;
    uVar11 = uVar15;
    uVar9 = uVar15;
    while (uVar5 == 0) {
      iVar6 = (int)uVar11;
      uStack_150 = (int)uVar9 + 0x20;
      uVar9 = (ulonglong)uStack_150;
      uVar11 = (ulonglong)(iVar6 + 1U);
      local_168._4_4_ = (undefined4)(local_168 >> 0x20);
      local_168 = CONCAT44(local_168._4_4_,iVar6 + 1U);
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_14288ba64;
      uVar5 = puVar14[(longlong)iVar6 + 1];
    }
    uVar5 = -uVar5 & uVar5;
    iVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    local_168 = CONCAT44(uVar5,(undefined4)local_168);
    if (uVar5 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_154 = (uStack_150 - iVar6) + 0x1f;
    if (iVar3 < iStack_154) {
LAB_14288ba64:
      iStack_154 = iVar3;
    }
  }
  local_158 = 0xffffffff;
  local_d8 = local_138;
  local_110 = local_138;
  uStack_c0 = 0xffffffff;
  iStack_bc = iStack_154;
  uStack_b8 = uStack_150;
  uStack_b4 = uStack_14c;
  uStack_d0 = local_168;
  puStack_c8 = (uint *)uStack_160;
  uStack_130 = local_168;
  local_118 = uStack_150;
  uStack_114 = uStack_14c;
  local_128 = (uint *)uStack_160;
  uStack_120 = 0xffffffff;
  iStack_11c = iStack_154;
  if (iStack_154 < iVar3) {
    do {
      plVar10 = local_110;
      iVar3 = iStack_11c;
      uVar11 = *(ulonglong *)(*local_138 + (longlong)iStack_11c * 0x10);
      if (*(int *)(uVar11 + 0x10) != DAT_1468c21b0) {
        *(undefined8 *)(uVar11 + 0x18) = 0;
      }
      if (((*(byte *)(uVar11 + 0xc) & 1) != 0) && (*(char *)(uVar11 + 0xf) == '\x01')) {
        uVar9 = uVar15;
        local_148[0] = uVar11;
        if (local_68 != 0) {
          plVar12 = local_98;
          if (local_78 != (longlong *)0x0) {
            plVar12 = local_78;
          }
          if (plVar12 != (longlong *)0x0) {
            uVar9 = (**(code **)(*plVar12 + 8))();
          }
        }
        (*local_a8[0])(uVar9,local_148);
        if (0.0 < *(float *)(uVar11 + 0x40)) {
          TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
          ::Remove(plVar10,iVar3);
          iVar3 = *(int *)(param_1 + 0xb8);
          uStack_160._0_5_ = (uint5)*(uint *)(uVar11 + 0x40);
          *(int *)(param_1 + 0xb8) = iVar3 + 1;
          local_168 = uVar11;
          if (*(int *)(param_1 + 0xbc) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xb0,iVar3);
          }
          puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar3 * 0x10);
          *puVar1 = (undefined4)local_168;
          puVar1[1] = local_168._4_4_;
          puVar1[2] = (float)uStack_160;
          puVar1[3] = uStack_160._4_4_;
        }
      }
      uStack_120 = uStack_120 & ~uStack_130._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_130);
    } while (iStack_11c < (int)local_128[6]);
  }
  FTickTaskLevel::ScheduleTickFunctionCooldowns(param_1);
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
  return;
}



// FUNCTION 14288bc40 FUN_14288bc40 body=210 status=ok
// SIG undefined FUN_14288bc40(void)

void FUN_14288bc40(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 0x2c) = 2;
  FUN_142873a20(param_1,param_5);
  uVar1 = FUN_142874100();
  FTickTaskSequencer::StartFrame(uVar1);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar3 = 0;
    do {
      FUN_14288b720(*(undefined8 *)(lVar3 + *(longlong *)(param_1 + 0x10)),param_1 + 0x20);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  FTickTaskSequencer::ReleaseTickGroup(uVar1,*(undefined4 *)(param_1 + 0x28),1);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(uint *)(param_1 + 0x1c) < 0x80000000) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  return;
}



// FUNCTION 14288bd20 FUN_14288bd20 body=258 status=ok
// SIG undefined FUN_14288bd20(void)

void FUN_14288bd20(longlong param_1,undefined4 param_2,char param_3)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar1 = FUN_1424a1490();
  FUN_1424ae720(uVar1,param_2,param_3);
  FTickTaskSequencer::ReleaseTickGroup(*(undefined8 *)(param_1 + 8),param_2,param_3);
  uVar1 = FUN_1424a1490();
  FUN_1424ae5e0(uVar1,param_2,param_3);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  if (param_3 != '\0') {
    uVar3 = 0;
    uVar7 = uVar3;
    do {
      uVar4 = uVar3;
      uVar6 = uVar3;
      uVar9 = uVar3;
      if (*(int *)(param_1 + 0x18) < 1) {
        return;
      }
      do {
        iVar2 = FTickTaskLevel::QueueNewlySpawned
                          (*(undefined8 *)(uVar4 + *(longlong *)(param_1 + 0x10)),
                           *(undefined4 *)(param_1 + 0x28));
        uVar8 = (int)uVar9 + iVar2;
        uVar5 = (int)uVar6 + 1;
        uVar4 = uVar4 + 8;
        uVar6 = (ulonglong)uVar5;
        uVar9 = (ulonglong)uVar8;
      } while ((int)uVar5 < *(int *)(param_1 + 0x18));
      if (uVar8 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x28) != 7) {
        return;
      }
      FTickTaskSequencer::ReleaseTickGroup(*(undefined8 *)(param_1 + 8),7,1);
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
    } while ((int)uVar5 < 0x65);
    uVar7 = uVar3;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        FTickTaskLevel::LogAndDiscardRunawayNewlySpawned
                  (*(undefined8 *)(uVar7 + *(longlong *)(param_1 + 0x10)),
                   *(undefined4 *)(param_1 + 0x28));
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
        uVar7 = uVar7 + 8;
      } while ((int)uVar5 < *(int *)(param_1 + 0x18));
    }
  }
  return;
}



// FUNCTION 14288be30 FUN_14288be30 body=3080 status=ok
// SIG undefined FUN_14288be30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14288be30(void)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  char cVar14;
  float fVar15;
  DWORD DVar16;
  longlong *plVar17;
  float *pfVar18;
  longlong *plVar19;
  float *pfVar20;
  float fVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [24];
  undefined1 local_c0 [136];
  
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar17 = DAT_1468b1f88;
  uVar13 = _DAT_146535468;
  pfVar20 = (float *)0x0;
  fVar15 = 0.0;
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar9 + 0x38) < DAT_146b182d8) &&
     (_Init_thread_header(&DAT_146b182d8), DAT_146b182d8 == -1)) {
    plVar19 = (longlong *)
              (**(code **)(*plVar17 + 0x98))(plVar17,L"r.CookOutUnusedDetailModeComponents");
    pfVar18 = pfVar20;
    if (plVar19 != (longlong *)0x0) {
      pfVar18 = (float *)(**(code **)(*plVar19 + 0x38))(plVar19);
    }
    DAT_146b182d0 = pfVar18;
    _Init_thread_footer(&DAT_146b182d8);
  }
  fVar3 = *DAT_146b182d0;
  if ((*(int *)(lVar9 + 0x38) < DAT_146b182e8) &&
     (_Init_thread_header(&DAT_146b182e8), DAT_146b182e8 == -1)) {
    plVar19 = (longlong *)(**(code **)(*plVar17 + 0x98))(plVar17,L"r.DetailMode");
    pfVar18 = pfVar20;
    if (plVar19 != (longlong *)0x0) {
      pfVar18 = (float *)(**(code **)(*plVar19 + 0x38))(plVar19);
    }
    DAT_146b182e0 = pfVar18;
    _Init_thread_footer(&DAT_146b182e8);
  }
  fVar4 = *DAT_146b182e0;
  local_128 = CONCAT44(fVar4,(int)uVar13);
  if ((*(int *)(lVar9 + 0x38) < DAT_146b182f8) &&
     (_Init_thread_header(&DAT_146b182f8), DAT_146b182f8 == -1)) {
    plVar19 = (longlong *)(**(code **)(*plVar17 + 0x98))(plVar17,L"r.MaxAnisotropy");
    pfVar18 = pfVar20;
    if (plVar19 != (longlong *)0x0) {
      pfVar18 = (float *)(**(code **)(*plVar19 + 0x38))(plVar19);
    }
    DAT_146b182f0 = pfVar18;
    _Init_thread_footer(&DAT_146b182f8);
  }
  fVar5 = *DAT_146b182f0;
  if ((*(int *)(lVar9 + 0x38) < DAT_146b18308) &&
     (_Init_thread_header(&DAT_146b18308), DAT_146b18308 == -1)) {
    plVar19 = (longlong *)(**(code **)(*plVar17 + 0x98))(plVar17,L"r.Shadow.MaxResolution");
    pfVar18 = pfVar20;
    if (plVar19 != (longlong *)0x0) {
      pfVar18 = (float *)(**(code **)(*plVar19 + 0x38))(plVar19);
    }
    DAT_146b18300 = pfVar18;
    _Init_thread_footer(&DAT_146b18308);
  }
  fVar6 = *DAT_146b18300;
  if ((*(int *)(lVar9 + 0x38) < DAT_146b18318) &&
     (_Init_thread_header(&DAT_146b18318), DAT_146b18318 == -1)) {
    plVar19 = (longlong *)(**(code **)(*plVar17 + 0x98))(plVar17,L"r.Shadow.MaxCSMResolution");
    pfVar18 = pfVar20;
    if (plVar19 != (longlong *)0x0) {
      pfVar18 = (float *)(**(code **)(*plVar19 + 0x38))(plVar19);
    }
    DAT_146b18310 = pfVar18;
    _Init_thread_footer(&DAT_146b18318);
  }
  fVar7 = *DAT_146b18310;
  if ((*(int *)(lVar9 + 0x38) < DAT_146b18328) &&
     (_Init_thread_header(&DAT_146b18328), DAT_146b18328 == -1)) {
    plVar19 = (longlong *)(**(code **)(*plVar17 + 0x98))(plVar17,L"r.ViewDistanceScale");
    pfVar18 = pfVar20;
    if (plVar19 != (longlong *)0x0) {
      pfVar18 = (float *)(**(code **)(*plVar19 + 0x40))(plVar19);
    }
    DAT_146b18320 = pfVar18;
    _Init_thread_footer(&DAT_146b18328);
  }
  if ((*(int *)(lVar9 + 0x38) < DAT_146b18338) &&
     (_Init_thread_header(&DAT_146b18338), DAT_146b18338 == -1)) {
    plVar19 = (longlong *)
              (**(code **)(*plVar17 + 0x98))(plVar17,L"r.ViewDistanceScale.ApplySecondaryScale");
    pfVar18 = pfVar20;
    if (plVar19 != (longlong *)0x0) {
      pfVar18 = (float *)(**(code **)(*plVar19 + 0x38))(plVar19);
    }
    DAT_146b18330 = pfVar18;
    _Init_thread_footer(&DAT_146b18338);
  }
  if ((*(int *)(lVar9 + 0x38) < DAT_146b18348) &&
     (_Init_thread_header(&DAT_146b18348), DAT_146b18348 == -1)) {
    plVar19 = (longlong *)
              (**(code **)(*plVar17 + 0x98))(plVar17,L"r.ViewDistanceScale.SecondaryScale");
    pfVar18 = pfVar20;
    if (plVar19 != (longlong *)0x0) {
      pfVar18 = (float *)(**(code **)(*plVar19 + 0x40))(plVar19);
    }
    DAT_146b18340 = pfVar18;
    _Init_thread_footer(&DAT_146b18348);
  }
  fVar25 = *DAT_146b18320;
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  if ((int)*DAT_146b18330 < 1) {
    fVar28 = 1.0;
  }
  else {
    fVar28 = *DAT_146b18340;
    if (fVar28 <= 0.0) {
      fVar28 = 0.0;
    }
  }
  fVar28 = fVar28 * fVar25;
  uStack_110 = CONCAT44(fVar28,fVar7);
  fVar25 = fVar28 * fVar28;
  if ((*(int *)(lVar9 + 0x38) < DAT_146b18358) &&
     (_Init_thread_header(&DAT_146b18358), DAT_146b18358 == -1)) {
    plVar19 = (longlong *)
              (**(code **)(*plVar17 + 0x98))(plVar17,L"r.ViewDistanceScale.FieldOfViewMinAngle");
    pfVar18 = pfVar20;
    if (plVar19 != (longlong *)0x0) {
      pfVar18 = (float *)(**(code **)(*plVar19 + 0x40))(plVar19);
    }
    DAT_146b18350 = pfVar18;
    _Init_thread_footer(&DAT_146b18358);
  }
  if ((*(int *)(lVar9 + 0x38) < DAT_146b18368) &&
     (_Init_thread_header(&DAT_146b18368), DAT_146b18368 == -1)) {
    plVar19 = (longlong *)
              (**(code **)(*plVar17 + 0x98))
                        (plVar17,L"r.ViewDistanceScale.FieldOfViewMinAngleScale");
    pfVar18 = pfVar20;
    if (plVar19 != (longlong *)0x0) {
      pfVar18 = (float *)(**(code **)(*plVar19 + 0x40))(plVar19);
    }
    DAT_146b18360 = pfVar18;
    _Init_thread_footer(&DAT_146b18368);
  }
  if ((*(int *)(lVar9 + 0x38) < DAT_146b18378) &&
     (_Init_thread_header(&DAT_146b18378), DAT_146b18378 == -1)) {
    plVar19 = (longlong *)
              (**(code **)(*plVar17 + 0x98))(plVar17,L"r.ViewDistanceScale.FieldOfViewMaxAngle");
    pfVar18 = pfVar20;
    if (plVar19 != (longlong *)0x0) {
      pfVar18 = (float *)(**(code **)(*plVar19 + 0x40))(plVar19);
    }
    DAT_146b18370 = pfVar18;
    _Init_thread_footer(&DAT_146b18378);
  }
  if ((*(int *)(lVar9 + 0x38) < DAT_146b18388) &&
     (_Init_thread_header(&DAT_146b18388), DAT_146b18388 == -1)) {
    plVar19 = (longlong *)
              (**(code **)(*plVar17 + 0x98))
                        (plVar17,L"r.ViewDistanceScale.FieldOfViewMaxAngleScale");
    pfVar18 = pfVar20;
    if (plVar19 != (longlong *)0x0) {
      pfVar18 = (float *)(**(code **)(*plVar19 + 0x40))(plVar19);
    }
    DAT_146b18380 = pfVar18;
    _Init_thread_footer(&DAT_146b18388);
  }
  if ((*(int *)(lVar9 + 0x38) < DAT_146b18398) &&
     (_Init_thread_header(&DAT_146b18398), DAT_146b18398 == -1)) {
    plVar17 = (longlong *)
              (**(code **)(*plVar17 + 0x98))(plVar17,L"r.ViewDistanceScale.FieldOfViewAffectsHLOD");
    pfVar18 = pfVar20;
    if (plVar17 != (longlong *)0x0) {
      pfVar18 = (float *)(**(code **)(*plVar17 + 0x38))(plVar17);
    }
    DAT_146b18390 = pfVar18;
    _Init_thread_footer(&DAT_146b18398);
  }
  fVar26 = *DAT_146b18350;
  if (0.0 <= fVar26) {
    if (360.0 <= fVar26) {
      fVar26 = 360.0;
    }
  }
  else {
    fVar26 = 0.0;
  }
  fVar29 = *DAT_146b18360;
  if (fVar29 <= 0.0) {
    fVar29 = 0.0;
  }
  fVar27 = *DAT_146b18370;
  if (0.0 <= fVar27) {
    if (360.0 <= fVar27) {
      fVar27 = 360.0;
    }
  }
  else {
    fVar27 = 0.0;
  }
  local_f8 = CONCAT44(fVar27,fVar29);
  fVar30 = *DAT_146b18380;
  if (fVar30 <= 0.0) {
    fVar30 = 0.0;
  }
  uVar22 = (uint)(*DAT_146b18390 != 0.0);
  if ((*(int *)(lVar9 + 0x38) < DAT_146b183a8) &&
     (_Init_thread_header(&DAT_146b183a8), DAT_146b183a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar17 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MaterialQualityLevel");
    pfVar18 = pfVar20;
    if (plVar17 != (longlong *)0x0) {
      pfVar18 = (float *)(**(code **)(*plVar17 + 0x38))(plVar17);
    }
    DAT_146b183a0 = pfVar18;
    _Init_thread_footer(&DAT_146b183a8);
  }
  fVar8 = *DAT_146b183a0;
  fVar21 = fVar15;
  if ((-1 < (int)fVar8) && (fVar21 = 2.8026e-45, (int)fVar8 < 2)) {
    fVar21 = fVar8;
  }
  uStack_120 = CONCAT44(fVar21,fVar3);
  if ((*(int *)(lVar9 + 0x38) < DAT_146b183b8) &&
     (_Init_thread_header(&DAT_146b183b8), DAT_146b183b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar17 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))();
    if (plVar17 != (longlong *)0x0) {
      pfVar20 = (float *)(**(code **)(*plVar17 + 0x38))(plVar17);
    }
    DAT_146b183b0 = pfVar20;
    _Init_thread_footer(&DAT_146b183b8);
  }
  fVar8 = *DAT_146b183b0;
  if ((int)fVar8 < 0) {
    local_118 = (ulonglong)(uint)fVar6 << 0x20;
  }
  else {
    fVar15 = 1.4013e-45;
    if ((int)fVar8 < 1) {
      fVar15 = fVar8;
    }
    local_118 = CONCAT44(fVar6,fVar15);
  }
  local_128 = CONCAT71(local_128._1_7_,1);
  if (DAT_146535468 == '\0') {
    if (((DAT_146ac3ac6 == '\0') || (cVar14 = IsInRenderingThread(), cVar14 == '\0')) &&
       ((DAT_146ac3ac5 != '\0' ||
        (((cVar14 = FUN_1415ad720(&DAT_1468e2448), cVar14 == '\0' && (DAT_1468c21ae != '\0')) &&
         (DVar16 = GetCurrentThreadId(), DVar16 != DAT_1468c21c0)))))) {
      plVar17 = (longlong *)FUN_14286bf80(local_d8,0,0xff);
      lVar9 = *plVar17;
      *(undefined8 *)(lVar9 + 0x10) = local_128;
      *(undefined8 *)(lVar9 + 0x18) = uStack_120;
      *(longlong *)(lVar9 + 0x20) = local_118;
      *(undefined8 *)(lVar9 + 0x28) = uStack_110;
      *(float *)(lVar9 + 0x30) = fVar25;
      *(uint *)(lVar9 + 0x34) = uVar22;
      *(float *)(lVar9 + 0x38) = fVar5;
      *(float *)(lVar9 + 0x3c) = fVar26;
      *(undefined8 *)(lVar9 + 0x40) = local_f8;
      *(float *)(lVar9 + 0x48) = fVar30;
      lVar9 = *plVar17;
      lVar12 = plVar17[2];
      lVar10 = plVar17[1];
      lVar11 = *(longlong *)(lVar9 + 0x50);
      piVar1 = (int *)(lVar11 + 0x48);
      if (lVar11 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_14288eba0(lVar9,lVar10,(int)lVar12,1);
      if (lVar11 != 0) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(lVar11);
        }
      }
      FUN_141ee24f0(0);
    }
    else {
      FBaseGraphTask::GetSmallTaskAllocator();
      _DAT_146535468 = local_128;
      _DAT_146535470 = uStack_120;
      _DAT_146535478 = local_118;
      _DAT_146535480 = uStack_110;
      DAT_146535498 = local_f8;
      DAT_146535488 = fVar25;
      DAT_14653548c = uVar22;
      DAT_146535490 = fVar5;
      DAT_146535494 = fVar26;
      DAT_1465354a0 = fVar30;
      FUN_141ee24f0(0);
    }
  }
  else if ((((((DAT_14653546c != fVar4) || (DAT_146535470 != fVar3)) || (DAT_146535474 != fVar21))
            || (((DAT_146535478 != fVar15 || (DAT_14653547c != fVar6)) ||
                ((DAT_146535480 != fVar7 || ((DAT_146535484 != fVar28 || (DAT_146535488 != fVar25)))
                 ))))) || (DAT_14653548c != uVar22)) ||
          ((((DAT_146535490 != fVar5 || (DAT_146535494 != fVar26)) ||
            ((float)DAT_146535498 != fVar29)) ||
           ((DAT_146535498._4_4_ != fVar27 || (DAT_1465354a0 != fVar30)))))) {
    bVar23 = fVar4 != DAT_14653546c;
    bVar24 = fVar21 != DAT_146535474;
    if (((DAT_146ac3ac6 == '\0') || (cVar14 = IsInRenderingThread(), cVar14 == '\0')) &&
       ((DAT_146ac3ac5 != '\0' ||
        (((cVar14 = FUN_1415ad720(&DAT_1468e2448), cVar14 == '\0' && (DAT_1468c21ae != '\0')) &&
         (DVar16 = GetCurrentThreadId(), DVar16 != DAT_1468c21c0)))))) {
      plVar17 = (longlong *)FUN_14286bf80(local_c0,0,0xff);
      lVar9 = *plVar17;
      *(undefined8 *)(lVar9 + 0x10) = local_128;
      *(undefined8 *)(lVar9 + 0x18) = uStack_120;
      *(longlong *)(lVar9 + 0x20) = local_118;
      *(undefined8 *)(lVar9 + 0x28) = uStack_110;
      *(float *)(lVar9 + 0x30) = fVar25;
      *(uint *)(lVar9 + 0x34) = uVar22;
      *(float *)(lVar9 + 0x38) = fVar5;
      *(float *)(lVar9 + 0x3c) = fVar26;
      *(undefined8 *)(lVar9 + 0x40) = local_f8;
      *(float *)(lVar9 + 0x48) = fVar30;
      lVar9 = *plVar17;
      lVar12 = plVar17[2];
      lVar10 = plVar17[1];
      lVar11 = *(longlong *)(lVar9 + 0x50);
      piVar1 = (int *)(lVar11 + 0x48);
      if (lVar11 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_14288eba0(lVar9,lVar10,(int)lVar12,1);
      if (lVar11 != 0) {
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle(lVar11);
        }
      }
    }
    else {
      FBaseGraphTask::GetSmallTaskAllocator();
      _DAT_146535468 = local_128;
      _DAT_146535470 = uStack_120;
      _DAT_146535478 = local_118;
      _DAT_146535480 = uStack_110;
      DAT_146535498 = local_f8;
      DAT_146535488 = fVar25;
      DAT_14653548c = uVar22;
      DAT_146535490 = fVar5;
      DAT_146535494 = fVar26;
      DAT_1465354a0 = fVar30;
    }
    FUN_141ee24f0(0);
    if ((bVar23) || (bVar24)) {
      FUN_142325a50(local_e8,1);
      if (bVar24) {
        UMaterial::AllMaterialsCacheResourceShadersForRendering();
        UCanvas::UpdateAllCanvasSafeZoneData();
      }
      FGlobalComponentRecreateRenderStateContext::~FGlobalComponentRecreateRenderStateContext
                (local_e8);
    }
  }
  return;
}



// FUNCTION 14288ca40 ScheduleTickFunctionCooldowns body=471 status=ok
// SIG undefined ScheduleTickFunctionCooldowns(void)

void FTickTaskLevel::ScheduleTickFunctionCooldowns(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  undefined1 local_res8 [8];
  
  if (0 < *(int *)(param_1 + 0xb8)) {
    plVar1 = (longlong *)(param_1 + 0xb0);
    local_res8[0] = 0;
    AlgoImpl::
    IntroSortInternal<FAnimSyncMarker,FIdentityFunctor,TDereferenceWrapper<FAnimSyncMarker,TLess<FAnimSyncMarker>_>_>
              (*plVar1,(longlong)*(int *)(param_1 + 0xb8),0,local_res8);
    uVar8 = 0;
    uVar4 = *(ulonglong *)(param_1 + 0x58);
    fVar13 = 0.0;
    uVar10 = uVar8;
    uVar11 = uVar8;
    while ((uVar3 = uVar4, iVar6 = (int)uVar8, uVar3 != 0 && (iVar6 < *(int *)(param_1 + 0xb8)))) {
      lVar9 = *plVar1;
      fVar12 = fVar13 + *(float *)(uVar3 + 0x38);
      fVar2 = *(float *)(uVar11 + 8 + lVar9);
      if (fVar12 <= fVar2) {
        uVar4 = *(ulonglong *)(uVar3 + 0x30);
        fVar13 = fVar12;
        uVar10 = uVar3;
      }
      else {
        uVar8 = *(ulonglong *)(uVar11 + lVar9);
        if (*(char *)(uVar8 + 0xf) != '\0') {
          if (*(char *)(uVar11 + 0xc + lVar9) != '\0') {
            TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
                      (param_1 + 8,uVar8);
          }
          *(undefined1 *)(uVar8 + 0xf) = 2;
          *(float *)(uVar8 + 0x38) = fVar2 - fVar13;
          if (uVar10 == 0) {
            *(ulonglong *)(param_1 + 0x58) = uVar8;
          }
          else {
            *(ulonglong *)(uVar10 + 0x30) = uVar8;
          }
          *(ulonglong *)(uVar8 + 0x30) = uVar3;
          *(float *)(uVar3 + 0x38) = *(float *)(uVar3 + 0x38) - *(float *)(uVar8 + 0x38);
          fVar13 = fVar13 + *(float *)(uVar8 + 0x38);
          uVar10 = uVar8;
        }
        uVar8 = (ulonglong)(iVar6 + 1);
        uVar11 = uVar11 + 0x10;
        uVar4 = uVar3;
      }
    }
    if (iVar6 < *(int *)(param_1 + 0xb8)) {
      lVar9 = (longlong)iVar6 << 4;
      do {
        lVar5 = *plVar1;
        uVar11 = *(ulonglong *)(lVar9 + lVar5);
        if (*(char *)(uVar11 + 0xf) != '\0') {
          if (*(char *)(lVar9 + 0xc + lVar5) != '\0') {
            TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
                      (param_1 + 8,uVar11);
            lVar5 = *plVar1;
          }
          fVar2 = *(float *)(lVar9 + 8 + lVar5);
          *(undefined1 *)(uVar11 + 0xf) = 2;
          *(undefined8 *)(uVar11 + 0x30) = 0;
          *(float *)(uVar11 + 0x38) = fVar2 - fVar13;
          if (uVar10 == 0) {
            *(ulonglong *)(param_1 + 0x58) = uVar11;
          }
          else {
            *(ulonglong *)(uVar10 + 0x30) = uVar11;
          }
          fVar13 = fVar13 + *(float *)(uVar11 + 0x38);
          uVar10 = uVar11;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        lVar9 = lVar9 + 0x10;
      } while ((int)uVar7 < *(int *)(param_1 + 0xb8));
    }
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0xbc)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1,0);
    }
  }
  return;
}



// FUNCTION 14288cc20 FUN_14288cc20 body=85 status=ok
// SIG undefined FUN_14288cc20(void)

longlong FUN_14288cc20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
  while( true ) {
    if (plVar2 == plVar1) {
      lVar3 = FUN_14286b170(DAT_146b17150,0);
      return lVar3 + 8;
    }
    if (*(longlong *)(*plVar2 + 0x288) == param_2) break;
    plVar2 = plVar2 + 1;
  }
  return *plVar2 + 8;
}



// FUNCTION 14288cc80 FUN_14288cc80 body=141 status=ok
// SIG undefined FUN_14288cc80(void)

void FUN_14288cc80(longlong *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((((char)param_1[0x14] != '\0') || (0 < *(int *)((longlong)param_1 + 0xa4))) && (param_3 != 0)
      ) && (-1 < (char)param_1[5])) {
    lVar1 = param_1[0x12];
    lVar2 = (**(code **)(*param_1 + 0x98))();
    if (lVar2 < (longlong)(lVar1 + param_3)) {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80;
    }
    else {
      _guard_xfg_dispatch_icall_nop
                (param_2,(void *)((longlong)(int)lVar1 + *(longlong *)param_1[0x13]),param_3);
      param_1[0x12] = param_1[0x12] + param_3;
    }
  }
  return;
}



// FUNCTION 14288cd10 Serialize body=349 status=ok
// SIG undefined Serialize(void)

void FCPFUOWriter::Serialize(longlong param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong local_28 [2];
  
  if ((*(char *)(param_1 + 0xa8) != '\0') || (0 < *(int *)(param_1 + 0xac))) {
    lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x98) + 8);
    lVar5 = (*(longlong *)(param_1 + 0x90) - lVar3) + param_3;
    if (0 < lVar5) {
      if (0x7ffffffe < lVar3 + lVar5) {
        puVar2 = (undefined8 *)FName::ToString(param_1 + 0xa0,local_28);
        puVar4 = &DAT_143f3eda8;
        if (*(int *)(puVar2 + 1) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*puVar2;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x2a,
                   L"FMemoryWriter does not support data larger than 2GB. Archive name: %s.",puVar6)
        ;
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        puVar2 = (undefined8 *)FName::ToString(param_1 + 0xa0,local_28);
        if (*(int *)(puVar2 + 1) != 0) {
          puVar4 = (undefined2 *)*puVar2;
        }
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0x2a,
                   L"FMemoryWriter does not support data larger than 2GB. Archive name: %s.",puVar4)
        ;
        if (local_28[0] != 0) {
          FMemory::Free();
        }
      }
      lVar3 = *(longlong *)(param_1 + 0x98);
      iVar1 = *(int *)(lVar3 + 8) + (int)lVar5;
      *(int *)(lVar3 + 8) = iVar1;
      if (*(int *)(lVar3 + 0xc) < iVar1) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow();
      }
    }
    if (param_3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)*(int *)(param_1 + 0x90) + **(longlong **)(param_1 + 0x98)),
                 param_2,param_3);
      *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + param_3;
    }
  }
  return;
}



// FUNCTION 14288ce70 FUN_14288ce70 body=79 status=ok
// SIG undefined FUN_14288ce70(void)

void FUN_14288ce70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_141763960();
  if (((*(byte *)(param_2 + 0x2a) & 0x20) != 0) && (*(longlong *)(param_1 + 0xa58) != 0)) {
    plVar1 = (longlong *)
             FAudioDeviceManager::GetAudioDevice
                       (*(longlong *)(param_1 + 0xa58),*(undefined4 *)(param_1 + 0xa60));
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
  }
  return;
}



// FUNCTION 14288cec0 FUN_14288cec0 body=319 status=ok
// SIG undefined FUN_14288cec0(void)

void FUN_14288cec0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_14234e7d0();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    iVar2 = *(int *)(param_1 + 0x8d0);
    if (0 < (longlong)iVar2) {
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x8c8) + lVar6 * 8);
        if (lVar4 != 0) {
          iVar3 = *(int *)(param_1 + 0x8c0);
          *(int *)(param_1 + 0x8c0) = iVar3 + 1;
          if (*(int *)(param_1 + 0x8c4) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x8b8,iVar3);
          }
          uStack_10 = (undefined4)lVar4;
          uStack_c = (undefined4)((ulonglong)lVar4 >> 0x20);
          puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x8b8) + (longlong)iVar3 * 0x10);
          *puVar1 = 0x3f800000;
          puVar1[1] = uStack_14;
          puVar1[2] = uStack_10;
          puVar1[3] = uStack_c;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar2);
    }
    *(undefined4 *)(param_1 + 0x8d0) = 0;
    if (*(int *)(param_1 + 0x8d4) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x8c8,0);
    }
    uVar5 = *(uint *)(param_1 + 0x2e8) & 0x10;
    if (uVar5 != 0) {
      uVar5 = uVar5 * 2 | *(uint *)(param_1 + 0x2e8) & 0xffffffdf;
      uVar5 = (uVar5 * 4 ^ uVar5) & 0x40 ^ uVar5;
      *(uint *)(param_1 + 0x2e8) = (uVar5 * 8 ^ uVar5) & 0x80 ^ uVar5;
    }
    if (-1.0 < *(float *)(param_1 + 0x5a4)) {
      *(undefined4 *)(param_1 + 0x5b4) = *(undefined4 *)(param_1 + 0x5a8);
      *(undefined4 *)(param_1 + 0x5b8) = *(undefined4 *)(param_1 + 0x5ac);
      *(float *)(param_1 + 0x5b0) = *(float *)(param_1 + 0x5a4);
    }
  }
  return;
}



// FUNCTION 14288d000 FUN_14288d000 body=93 status=ok
// SIG undefined FUN_14288d000(void)

void FUN_14288d000(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  UTexture::Serialize();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  iVar2 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
  if (iVar2 < 0x11) {
    uVar1 = 2;
    if ((*(byte *)(param_1 + 0xe0) & 1) != 0) {
      uVar1 = 5;
    }
    *(undefined1 *)(param_1 + 0xe1) = uVar1;
  }
  return;
}



// FUNCTION 14288d060 FUN_14288d060 body=93 status=ok
// SIG undefined FUN_14288d060(void)

void FUN_14288d060(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  UTexture::Serialize();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0188);
  iVar2 = FArchive::CustomVer(param_2,&DAT_1464b0188);
  if (iVar2 < 5) {
    uVar1 = 2;
    if ((*(byte *)(param_1 + 0xd6) & 1) != 0) {
      uVar1 = 5;
    }
    *(undefined1 *)(param_1 + 0xd4) = uVar1;
  }
  return;
}



// FUNCTION 14288d0c0 SerializeSearchObject body=254 status=ok
// SIG undefined SerializeSearchObject(void)

void FArchiveReplaceObjectRef<UObject>::SerializeSearchObject(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  
  TSet<TTuple<__int64_*,FString>,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x100,0);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
              (param_1 + 0xa0,local_res8);
    if (((local_res8[0] == -1) ||
        ((longlong)local_res8[0] * 0x10 + *(longlong *)(param_1 + 0xa0) == 0)) &&
       ((0 < *(int *)(*(longlong *)(param_1 + 0x158) + 8) -
             *(int *)(*(longlong *)(param_1 + 0x158) + 0x34) || (*(char *)(param_1 + 0x150) != '\0')
        ))) {
      FUN_14058cbf0(param_1 + 0xa0,local_res8,param_1 + 0x90,0);
      FUN_14170bfc0(param_1,*(undefined8 *)(param_1 + 0x90));
      iVar1 = 0;
      if (0 < *(int *)(param_1 + 0xf8)) {
        lVar2 = 0;
        do {
          FUN_14170bfc0(param_1,*(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0xf0)));
          iVar1 = iVar1 + 1;
          lVar2 = lVar2 + 8;
        } while (iVar1 < *(int *)(param_1 + 0xf8));
      }
      *(undefined4 *)(param_1 + 0xf8) = 0;
      if (0x7fffffff < *(uint *)(param_1 + 0xfc)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xf0,0);
      }
    }
  }
  return;
}



// FUNCTION 14288d1c0 FUN_14288d1c0 body=295 status=ok
// SIG undefined FUN_14288d1c0(void)

void FUN_14288d1c0(longlong param_1,longlong param_2,short *param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  plVar4 = *(longlong **)(param_1 + 0xc18);
  plVar2 = plVar4 + *(int *)(param_1 + 0xc20);
  for (; plVar4 != plVar2; plVar4 = plVar4 + 1) {
    lVar5 = *plVar4;
    if (*(longlong *)(lVar5 + 0x288) == param_2) goto LAB_14288d218;
  }
  lVar5 = FUN_14286b170(DAT_146b17150);
LAB_14288d218:
  puVar1 = (undefined8 *)(lVar5 + 0xd0);
  if ((short *)*puVar1 != param_3) {
    iVar6 = 0;
    iVar7 = iVar6;
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (param_3[lVar8] != 0);
      iVar7 = (int)lVar8 + 1;
    }
    *(undefined4 *)(lVar5 + 0xd8) = 0;
    if (*(int *)(lVar5 + 0xdc) != iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1,iVar7);
      iVar6 = *(int *)(lVar5 + 0xd8);
    }
    *(int *)(lVar5 + 0xd8) = iVar6 + iVar7;
    if (*(int *)(lVar5 + 0xdc) < iVar6 + iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1);
    }
    if (iVar7 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,param_3,(longlong)iVar7 * 2);
    }
  }
  *(undefined1 *)(lVar5 + 0xe0) = param_4;
  cVar3 = FURL::HasOption(lVar5 + 0xe8,L"Listen");
  if (cVar3 != '\0') {
    FUN_1428ba050(lVar5 + 0xe8,L"Listen",0,&DAT_1468e2410);
    return;
  }
  return;
}



// FUNCTION 14288d2f0 FUN_14288d2f0 body=192 status=ok
// SIG undefined FUN_14288d2f0(void)

void FUN_14288d2f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    UWorld::SetAudioDeviceHandle(param_2,*(undefined4 *)(param_1 + 0x274));
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x280)) {
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x278));
      if ((plVar3 != (longlong *)0x0) && (*plVar3 == *(longlong *)(param_1 + 0x288))) {
        *plVar3 = param_2;
      }
      iVar2 = iVar2 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x280));
  }
  plVar3 = *(longlong **)(param_1 + 0x290);
  plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x298) * 2;
  for (; plVar3 != plVar4; plVar3 = plVar3 + 2) {
    plVar1 = (longlong *)*plVar3;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x380))(plVar1,param_2);
    }
  }
  *(longlong *)(param_1 + 0x288) = param_2;
  return;
}



// FUNCTION 14288d3b0 FUN_14288d3b0 body=111 status=ok
// SIG undefined FUN_14288d3b0(void)

char FUN_14288d3b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x7f8);
  if (param_2 != plVar1) {
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x280))(plVar1,param_1);
    }
    *(longlong **)(param_1 + 0x7f8) = param_2;
    if (param_2 != (longlong *)0x0) {
      cVar2 = (**(code **)(*param_2 + 0x278))(param_2,param_1);
      if (cVar2 != '\0') {
        return cVar2;
      }
      *(undefined8 *)(param_1 + 0x7f8) = 0;
      return '\0';
    }
  }
  return '\x01';
}



// FUNCTION 14288d420 FUN_14288d420 body=8 status=ok
// SIG undefined FUN_14288d420(void)

void FUN_14288d420(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x1f0) = param_2;
  return;
}



// FUNCTION 14288d430 FUN_14288d430 body=370 status=ok
// SIG undefined FUN_14288d430(void)

void FUN_14288d430(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
                  char param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  short *psVar12;
  longlong local_38;
  ulonglong local_30;
  
  puVar9 = &DAT_143f3eda8;
  uVar10 = 0;
  if ((param_3 == (longlong *)0x0) ||
     (uVar7 = uVar10, uVar11 = uVar10, *(int *)(param_1 + 0xc38) < 1)) {
LAB_14288d4bd:
    bVar1 = false;
LAB_14288d4bf:
    if ((uVar10 != 0) && (local_38 != 0)) {
      FMemory::Free();
    }
    if (bVar1) {
      if (*(int *)(param_4 + 1) != 0) {
        puVar9 = (undefined2 *)*param_4;
      }
      UEngine::ExecEngineStat(param_1,param_2,param_3,puVar9);
    }
    return;
  }
LAB_14288d480:
  if (*(int *)(param_4 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_4;
  }
  if (*(int *)(*(longlong *)(param_1 + 0xc30) + 0x10 + uVar11) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = *(undefined2 **)(*(longlong *)(param_1 + 0xc30) + 8 + uVar11);
  }
  iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
  if (iVar3 != 0) goto code_r0x00014288d4ae;
  if (*(int *)(param_4 + 1) == 0) {
    psVar12 = &DAT_143f3eda8;
  }
  else {
    psVar12 = (short *)*param_4;
  }
  local_38 = 0;
  local_30 = 0;
  if ((psVar12 != (short *)0x0) && (*psVar12 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (psVar12[lVar8] != 0);
    uVar6 = (int)lVar8 + 1;
    local_30 = (ulonglong)uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,psVar12,(longlong)(int)uVar6 * 2);
  }
  uVar10 = 1;
  cVar2 = (**(code **)(*param_3 + 0x150))(param_3,&local_38);
  if (cVar2 != param_5) {
    bVar1 = true;
    goto LAB_14288d4bf;
  }
  goto LAB_14288d4bd;
code_r0x00014288d4ae:
  uVar6 = (int)uVar7 + 1;
  uVar7 = (ulonglong)uVar6;
  uVar11 = uVar11 + 0x60;
  if (*(int *)(param_1 + 0xc38) <= (int)uVar6) goto LAB_14288d4bd;
  goto LAB_14288d480;
}



// FUNCTION 14288d5b0 FUN_14288d5b0 body=58 status=ok
// SIG undefined FUN_14288d5b0(void)

void FUN_14288d5b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x1a8);
    puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x1b0) * 8;
    if (puVar1 != puVar2) {
      while (puVar1[3] != param_3) {
        puVar1 = puVar1 + 8;
        if (puVar1 == puVar2) {
          return;
        }
      }
      *puVar1 = param_2;
    }
  }
  return;
}



// FUNCTION 14288d5f0 FUN_14288d5f0 body=13 status=ok
// SIG undefined FUN_14288d5f0(void)

void FUN_14288d5f0(undefined1 param_1,undefined4 param_2)

{
  DAT_14653517c = param_1;
  DAT_146b17170 = param_2;
  return;
}



// FUNCTION 14288d600 FUN_14288d600 body=17 status=ok
// SIG undefined FUN_14288d600(void)

void FUN_14288d600(longlong param_1,byte param_2)

{
  *(uint *)(param_1 + 0x210) = *(uint *)(param_1 + 0x210) & 0xfffffffe;
  *(uint *)(param_1 + 0x210) = *(uint *)(param_1 + 0x210) | (uint)param_2;
  return;
}



// FUNCTION 14288d620 FUN_14288d620 body=58 status=ok
// SIG undefined FUN_14288d620(void)

void FUN_14288d620(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x1b8);
    puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x1c0) * 8;
    if (puVar1 != puVar2) {
      while (puVar1[3] != param_3) {
        puVar1 = puVar1 + 8;
        if (puVar1 == puVar2) {
          return;
        }
      }
      *puVar1 = param_2;
    }
  }
  return;
}



// FUNCTION 14288d660 FUN_14288d660 body=14 status=ok
// SIG undefined FUN_14288d660(void)

void FUN_14288d660(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x179) = *(byte *)(param_1 + 0x179) & 0xfe;
  *(byte *)(param_1 + 0x179) = *(byte *)(param_1 + 0x179) | param_2;
  return;
}



// FUNCTION 14288d670 SetMaxFPS body=140 status=ok
// SIG undefined SetMaxFPS(void)

void UEngine::SetMaxFPS(undefined8 param_1,float param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *local_28;
  int local_20;
  
  plVar1 = DAT_146b176a8;
  uVar2 = (**(code **)(*DAT_146b176a8 + 0x18))(DAT_146b176a8);
  uVar2 = uVar2 & 0xff000000;
  if (uVar2 == 0) {
    uVar2 = 0x1000000;
  }
  FString::PrintfImpl(&local_28,&DAT_144050d74,(double)param_2);
  puVar3 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar3 = local_28;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,puVar3,uVar2);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14288d700 SetNearClipPlane body=90 status=ok
// SIG undefined SetNearClipPlane(void)

void SetNearClipPlane(longlong *param_1)

{
  wchar_t *_Str;
  double dVar1;
  float fVar2;
  
  fVar2 = 20.0;
  if ((int)param_1[1] != 0) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    dVar1 = _wtof(_Str);
    fVar2 = (float)dVar1;
  }
  FUN_141ee24f0(0);
  if (fVar2 <= 1.0) {
    fVar2 = 1.0;
  }
  DAT_1464aaa4c = fVar2;
  return;
}



// FUNCTION 14288d760 FUN_14288d760 body=53 status=ok
// SIG undefined FUN_14288d760(void)

void FUN_14288d760(longlong param_1,float param_2)

{
  if (param_2 < 0.0) {
    FUN_14288d7b0(param_1 + 0x178,0,0,1);
    return;
  }
  if (*(float *)(param_1 + 0x17c) <= param_2) {
    param_2 = *(float *)(param_1 + 0x17c);
  }
  FUN_14288d7b0(param_1 + 0x178,param_2,0,1);
  return;
}



// FUNCTION 14288d7a0 SetInterpolationSpeed body=9 status=ok
// SIG undefined SetInterpolationSpeed(void)

void UPhysicsHandleComponent::SetInterpolationSpeed(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x180) = param_2;
  return;
}



// FUNCTION 14288d7b0 FUN_14288d7b0 body=2410 status=ok
// SIG undefined FUN_14288d7b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14288d7b0(longlong param_1,undefined4 param_2,char param_3,char param_4)

{
  undefined4 *puVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 local_res10 [2];
  char local_res18;
  char local_res20;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  
  fVar21 = *(float *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x70);
  uVar13 = 0;
  uVar17 = uVar13;
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      lVar11 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(uVar13 + lVar11) != 0) {
        lVar15 = lVar11 + 8 + uVar13;
        if ((((*(longlong *)(lVar15 + 8) == 0) || (lVar6 = FWeakObjectPtr::Get(lVar15), lVar6 == 0))
            || (lVar6 = UObject::FindFunction(lVar6,*(undefined8 *)(lVar15 + 8)), lVar6 == 0)) &&
           (*(longlong *)(uVar13 + 0x20 + lVar11) == 0)) {
          if (((*(int *)(uVar13 + 0x38 + lVar11) == 0) ||
              (plVar8 = *(longlong **)(uVar13 + 0x30 + lVar11), plVar8 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar8 + 0x18))(), cVar4 == '\0')) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_14288d9b8;
        }
        UCurveVector::GetVectorValue
                  (*(undefined8 *)(uVar13 + lVar11),&local_c8,*(undefined4 *)(param_1 + 0xc));
        uVar18 = local_c0;
        lVar6 = local_c8;
        if (((*(longlong *)(lVar15 + 8) != 0) && (lVar7 = FWeakObjectPtr::Get(lVar15), lVar7 != 0))
           && (lVar7 = UObject::FindFunction(lVar7,*(undefined8 *)(lVar15 + 8)), lVar7 != 0)) {
          local_b8 = lVar6;
          lStack_b0 = CONCAT44(lStack_b0._4_4_,uVar18);
          plVar8 = (longlong *)FWeakObjectPtr::Get(lVar15);
          uVar9 = FUN_14178ac60(plVar8,*(undefined8 *)(lVar15 + 8));
          (**(code **)(*plVar8 + 0x208))(plVar8,uVar9,&local_b8);
        }
        if (lVar5 != 0) {
          lVar15 = *(longlong *)(uVar13 + 0x28 + lVar11);
          if (lVar15 == 0) {
            lVar15 = FindField<UStructProperty>
                               (*(undefined8 *)(lVar5 + 0x10),
                                *(undefined8 *)(uVar13 + 0x20 + lVar11));
            *(longlong *)(uVar13 + 0x28 + lVar11) = lVar15;
            if (lVar15 == 0) goto LAB_14288d959;
          }
          iVar14 = *(int *)(lVar15 + 0x44);
          *(longlong *)(iVar14 + lVar5) = local_c8;
          *(undefined4 *)((longlong)iVar14 + 8 + lVar5) = local_c0;
        }
LAB_14288d959:
        uVar18 = local_c0;
        lVar15 = local_c8;
        if (((*(int *)(uVar13 + 0x38 + lVar11) == 0) ||
            (plVar8 = *(longlong **)(uVar13 + 0x30 + lVar11), plVar8 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar8 + 0x18))(), cVar4 == '\0')) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar18);
          local_98 = lVar15;
          if (*(int *)(uVar13 + 0x38 + lVar11) == 0) {
            (**(code **)(_DAT_00000000 + 0x40))(0,&local_98);
          }
          else {
            plVar8 = *(longlong **)(uVar13 + 0x30 + lVar11);
            (**(code **)(*plVar8 + 0x40))(plVar8,&local_98);
          }
        }
      }
LAB_14288d9b8:
      uVar16 = (int)uVar17 + 1;
      uVar13 = uVar13 + 0x40;
      uVar17 = (ulonglong)uVar16;
    } while ((int)uVar16 < *(int *)(param_1 + 0x28));
  }
  uVar13 = 0;
  uVar17 = uVar13;
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      lVar11 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(uVar13 + lVar11) != 0) {
        lVar15 = lVar11 + 8 + uVar13;
        if ((((*(longlong *)(lVar15 + 8) == 0) || (lVar6 = FWeakObjectPtr::Get(lVar15), lVar6 == 0))
            || (lVar6 = UObject::FindFunction(lVar6,*(undefined8 *)(lVar15 + 8)), lVar6 == 0)) &&
           (*(longlong *)(uVar13 + 0x20 + lVar11) == 0)) {
          if (((*(int *)(uVar13 + 0x38 + lVar11) == 0) ||
              (plVar8 = *(longlong **)(uVar13 + 0x30 + lVar11), plVar8 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar8 + 0x18))(), cVar4 == '\0')) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_14288dbc6;
        }
        uVar18 = UCurveFloat::GetFloatValue
                           (*(undefined8 *)(uVar13 + lVar11),*(undefined4 *)(param_1 + 0xc));
        if (((*(longlong *)(lVar15 + 8) != 0) && (lVar6 = FWeakObjectPtr::Get(lVar15), lVar6 != 0))
           && (lVar6 = UObject::FindFunction(lVar6,*(undefined8 *)(lVar15 + 8)), lVar6 != 0)) {
          local_res10[0] = uVar18;
          plVar8 = (longlong *)FWeakObjectPtr::Get(lVar15);
          uVar9 = FUN_14178ac60(plVar8,*(undefined8 *)(lVar15 + 8));
          (**(code **)(*plVar8 + 0x208))(plVar8,uVar9,local_res10);
        }
        if (lVar5 != 0) {
          lVar15 = *(longlong *)(uVar13 + 0x28 + lVar11);
          if (lVar15 == 0) {
            lVar6 = *(longlong *)(uVar13 + 0x20 + lVar11);
            lVar15 = *(longlong *)(lVar5 + 0x10);
            if (((int)lVar6 == 0) && ((int)((ulonglong)lVar6 >> 0x20) == 0)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if (!bVar3) {
              if (lVar15 == 0) {
                uStack_90 = 0;
              }
              else {
                uStack_90 = *(longlong *)(lVar15 + 0x38);
              }
              local_88 = 0xffffffff;
              local_84 = 0x101;
              local_82 = 0;
              local_98 = lVar15;
              FUN_140cbbcb0(&local_98);
              lVar15 = uStack_90;
              while (uStack_90 = lVar15, lVar15 != 0) {
                if (*(longlong *)(lVar15 + 0x18) == lVar6) goto LAB_14288db72;
                uStack_90 = *(longlong *)(lVar15 + 0x28);
                FUN_140cbbcb0(&local_98);
                lVar15 = uStack_90;
              }
            }
            lVar15 = 0;
LAB_14288db72:
            *(longlong *)(uVar13 + 0x28 + lVar11) = lVar15;
            if (lVar15 == 0) goto LAB_14288db86;
          }
          *(undefined4 *)(*(int *)(lVar15 + 0x44) + lVar5) = uVar18;
        }
LAB_14288db86:
        if (((*(int *)(uVar13 + 0x38 + lVar11) == 0) ||
            (plVar8 = *(longlong **)(uVar13 + 0x30 + lVar11), plVar8 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar8 + 0x18))(), cVar4 == '\0')) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        plVar8 = (longlong *)0x0;
        if (bVar3) {
          if (*(int *)(uVar13 + 0x38 + lVar11) != 0) {
            plVar8 = *(longlong **)(uVar13 + 0x30 + lVar11);
          }
          (**(code **)(*plVar8 + 0x40))(plVar8,uVar18);
        }
      }
LAB_14288dbc6:
      uVar16 = (int)uVar17 + 1;
      uVar13 = uVar13 + 0x40;
      uVar17 = (ulonglong)uVar16;
    } while ((int)uVar16 < *(int *)(param_1 + 0x38));
  }
  uVar13 = 0;
  uVar17 = uVar13;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(lVar11 + uVar13) != 0) {
        lVar15 = lVar11 + 8 + uVar13;
        if ((((*(longlong *)(lVar15 + 8) == 0) || (lVar6 = FWeakObjectPtr::Get(lVar15), lVar6 == 0))
            || (lVar6 = UObject::FindFunction(lVar6,*(undefined8 *)(lVar15 + 8)), lVar6 == 0)) &&
           (*(longlong *)(lVar11 + 0x20 + uVar13) == 0)) {
          if (((*(int *)(lVar11 + 0x38 + uVar13) == 0) ||
              (plVar8 = *(longlong **)(lVar11 + 0x30 + uVar13), plVar8 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar8 + 0x18))(), cVar4 == '\0')) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_14288dde8;
        }
        plVar8 = (longlong *)(*(longlong *)(lVar11 + uVar13) + 0x28);
        (**(code **)(*plVar8 + 0x40))(plVar8,&local_98,*(undefined4 *)(param_1 + 0xc));
        lVar7 = uStack_90;
        lVar6 = local_98;
        if (((*(longlong *)(lVar15 + 8) != 0) && (lVar10 = FWeakObjectPtr::Get(lVar15), lVar10 != 0)
            ) && (lVar10 = UObject::FindFunction(lVar10,*(undefined8 *)(lVar15 + 8)), lVar10 != 0))
        {
          local_b8 = lVar6;
          lStack_b0 = lVar7;
          plVar8 = (longlong *)FWeakObjectPtr::Get(lVar15);
          uVar9 = FUN_14178ac60(plVar8,*(undefined8 *)(lVar15 + 8));
          (**(code **)(*plVar8 + 0x208))(plVar8,uVar9,&local_b8);
        }
        if (lVar5 != 0) {
          lVar15 = *(longlong *)(lVar11 + 0x28 + uVar13);
          if (lVar15 == 0) {
            lVar6 = *(longlong *)(lVar11 + 0x20 + uVar13);
            lVar15 = *(longlong *)(lVar5 + 0x10);
            if (((int)lVar6 == 0) && ((int)((ulonglong)lVar6 >> 0x20) == 0)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if (!bVar3) {
              if (lVar15 == 0) {
                lStack_b0 = 0;
              }
              else {
                lStack_b0 = *(longlong *)(lVar15 + 0x38);
              }
              local_a8 = 0xffffffff;
              local_a4 = 0x101;
              local_a2 = 0;
              local_b8 = lVar15;
              FUN_14067b390(&local_b8);
              lVar15 = lStack_b0;
              while (lStack_b0 = lVar15, lVar15 != 0) {
                if (*(longlong *)(lVar15 + 0x18) == lVar6) goto LAB_14288dd87;
                lStack_b0 = *(longlong *)(lVar15 + 0x28);
                FUN_14067b390(&local_b8);
                lVar15 = lStack_b0;
              }
            }
            lVar15 = 0;
LAB_14288dd87:
            *(longlong *)(lVar11 + 0x28 + uVar13) = lVar15;
            if (lVar15 == 0) goto LAB_14288dd9e;
          }
          puVar1 = (undefined4 *)(*(int *)(lVar15 + 0x44) + lVar5);
          *puVar1 = (undefined4)local_98;
          puVar1[1] = local_98._4_4_;
          puVar1[2] = (undefined4)uStack_90;
          puVar1[3] = uStack_90._4_4_;
        }
LAB_14288dd9e:
        lVar6 = uStack_90;
        lVar15 = local_98;
        if (((*(int *)(lVar11 + 0x38 + uVar13) == 0) ||
            (plVar8 = *(longlong **)(lVar11 + 0x30 + uVar13), plVar8 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar8 + 0x18))(), cVar4 == '\0')) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        plVar8 = (longlong *)0x0;
        if (bVar3) {
          local_b8 = lVar15;
          lStack_b0 = lVar6;
          if (*(int *)(lVar11 + 0x38 + uVar13) != 0) {
            plVar8 = *(longlong **)(lVar11 + 0x30 + uVar13);
          }
          (**(code **)(*plVar8 + 0x40))(plVar8,&local_b8);
        }
      }
LAB_14288dde8:
      uVar16 = (int)uVar17 + 1;
      uVar13 = uVar13 + 0x40;
      uVar17 = (ulonglong)uVar16;
    } while ((int)uVar16 < *(int *)(param_1 + 0x48));
  }
  lVar11 = *(longlong *)(param_1 + 0x78);
  if ((lVar11 != 0) && (lVar5 != 0)) {
    lVar15 = *(longlong *)(param_1 + 0x90);
    if (lVar15 == 0) {
      lVar15 = *(longlong *)(lVar5 + 0x10);
      if (((int)lVar11 == 0) && ((int)((ulonglong)lVar11 >> 0x20) == 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (!bVar3) {
        if (lVar15 == 0) {
          uStack_90 = 0;
        }
        else {
          uStack_90 = *(longlong *)(lVar15 + 0x38);
        }
        local_88 = 0xffffffff;
        local_84 = 0x101;
        local_82 = 0;
        local_98 = lVar15;
        FUN_14252c680(&local_98);
        lVar15 = uStack_90;
        while (uStack_90 = lVar15, lVar15 != 0) {
          if (*(longlong *)(lVar15 + 0x18) == lVar11) goto LAB_14288deb2;
          uStack_90 = *(longlong *)(lVar15 + 0x28);
          FUN_14252c680(&local_98);
          lVar15 = uStack_90;
        }
      }
      lVar15 = 0;
LAB_14288deb2:
      *(longlong *)(param_1 + 0x90) = lVar15;
      if (lVar15 == 0) {
        lVar11 = *(longlong *)(param_1 + 0x78);
        lVar15 = *(longlong *)(lVar5 + 0x10);
        if (((int)lVar11 == 0) && ((int)((ulonglong)lVar11 >> 0x20) == 0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (!bVar3) {
          if (lVar15 == 0) {
            uStack_90 = 0;
          }
          else {
            uStack_90 = *(longlong *)(lVar15 + 0x38);
          }
          local_88 = 0xffffffff;
          local_84 = 0x101;
          local_82 = 0;
          local_98 = lVar15;
          FUN_140cbbbd0(&local_98);
          lVar15 = uStack_90;
          while (uStack_90 = lVar15, lVar15 != 0) {
            if (*(longlong *)(lVar15 + 0x18) == lVar11) goto LAB_14288df44;
            uStack_90 = *(longlong *)(lVar15 + 0x28);
            FUN_140cbbbd0(&local_98);
            lVar15 = uStack_90;
          }
        }
        lVar15 = 0;
LAB_14288df44:
        *(longlong *)(param_1 + 0x90) = lVar15;
        if (lVar15 == 0) goto LAB_14288dfba;
      }
    }
    bVar12 = *(byte *)(param_1 + 1) >> 1 & 1;
    lVar11 = UByteProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      *(byte *)(*(int *)(lVar15 + 0x44) + lVar5) = bVar12;
    }
    else {
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x70);
      (**(code **)(*plVar8 + 0x388))
                (plVar8,*(int *)(*(longlong *)(param_1 + 0x90) + 0x44) + lVar5,bVar12);
    }
  }
LAB_14288dfba:
  if (local_res18 != '\0') {
    fVar2 = *(float *)(param_1 + 0xc);
    if ((*(byte *)(param_1 + 1) & 2) == 0) {
      fVar19 = (float)FTimeline::GetTimelineLength(param_1);
      fVar20 = fVar2;
      if (fVar2 == fVar19) {
        fVar20 = fVar2 + 0.0001;
      }
    }
    else {
      fVar20 = fVar21;
      fVar21 = fVar2;
      if (fVar2 == 0.0) {
        fVar21 = fVar2 + -0.0001;
      }
    }
    iVar14 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      lVar5 = 0;
      do {
        fVar2 = *(float *)(lVar5 + *(longlong *)(param_1 + 0x10));
        if ((*(byte *)(param_1 + 1) & 2) == 0) {
          if ((fVar21 <= fVar2) && (fVar2 < fVar20)) {
LAB_14288e056:
            lVar11 = lVar5 + *(longlong *)(param_1 + 0x10);
            if (((*(longlong *)(lVar11 + 0x10) != 0) &&
                (lVar15 = FWeakObjectPtr::Get(lVar11 + 8), lVar15 != 0)) &&
               (lVar15 = UObject::FindFunction(lVar15,*(undefined8 *)(lVar11 + 0x10)), lVar15 != 0))
            {
              plVar8 = (longlong *)FWeakObjectPtr::Get(lVar11 + 8);
              uVar9 = FUN_14178ac60(plVar8,*(undefined8 *)(lVar11 + 0x10));
              (**(code **)(*plVar8 + 0x208))(plVar8,uVar9,0);
            }
          }
        }
        else if ((fVar21 < fVar2) && (fVar2 <= fVar20)) goto LAB_14288e056;
        iVar14 = iVar14 + 1;
        lVar5 = lVar5 + 0x18;
      } while (iVar14 < *(int *)(param_1 + 0x18));
    }
  }
  if (local_res20 != '\0') {
    FUN_140f660a0(param_1 + 0x50);
  }
  return;
}



// FUNCTION 14288e120 FUN_14288e120 body=12 status=ok
// SIG undefined FUN_14288e120(void)

void FUN_14288e120(longlong param_1)

{
  FUN_14288d7b0(param_1 + 0x178);
  return;
}



// FUNCTION 14288e130 SetPriorityIncludingPrerequisites body=141 status=ok
// SIG undefined SetPriorityIncludingPrerequisites(void)

void FTickFunction::SetPriorityIncludingPrerequisites(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_1 + 0xc) >> 4 & 1) != param_2) {
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xef | param_2 << 4;
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar3 = (longlong)*(int *)(param_1 + 0x28) * 0x10 + lVar2;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
      lVar1 = FWeakObjectPtr::Get(lVar2);
      if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar2 + 8), lVar1 != 0)) &&
         ((*(byte *)(lVar1 + 0xc) >> 4 & 1) != param_2)) {
        SetPriorityIncludingPrerequisites(lVar1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 14288e1c0 FUN_14288e1c0 body=12 status=ok
// SIG undefined FUN_14288e1c0(void)

void FUN_14288e1c0(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1 + 0x1e8);
  return;
}



// FUNCTION 14288e1d0 FUN_14288e1d0 body=95 status=ok
// SIG undefined FUN_14288e1d0(void)

void FUN_14288e1d0(longlong param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
  for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    lVar3 = *plVar2;
    if (*(longlong *)(lVar3 + 0x288) == param_2) goto LAB_14288e217;
  }
  lVar3 = FUN_14286b170(DAT_146b17150,0);
LAB_14288e217:
  *(uint *)(lVar3 + 0x210) = *(uint *)(lVar3 + 0x210) & 0xfffffffe;
  *(uint *)(lVar3 + 0x210) = *(uint *)(lVar3 + 0x210) | (uint)param_3;
  return;
}



// FUNCTION 14288e230 FUN_14288e230 body=414 status=ok
// SIG undefined FUN_14288e230(void)

void FUN_14288e230(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  DWORD DVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong local_res18 [2];
  undefined1 local_48 [32];
  
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x140,*param_2);
  puVar12 = *(undefined8 **)(param_1 + 0x148);
  if (((DAT_146ac3ac6 == '\0') || (cVar8 = IsInRenderingThread(), cVar8 == '\0')) &&
     ((DAT_146ac3ac5 != '\0' ||
      (((cVar8 = FUN_1415ad720(&DAT_1468e2448), cVar8 == '\0' && (DAT_1468c21ae != '\0')) &&
       (DVar9 = GetCurrentThreadId(), DVar9 != DAT_1468c21c0)))))) {
    plVar10 = (longlong *)FUN_14286b8f0(local_48,0,0xff);
    *(undefined8 **)(*plVar10 + 0x10) = puVar12;
    lVar3 = *plVar10;
    lVar7 = plVar10[2];
    lVar4 = plVar10[1];
    lVar5 = *(longlong *)(lVar3 + 0x20);
    piVar1 = (int *)(lVar5 + 0x48);
    if (lVar5 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_140445100(lVar3,lVar4,(int)lVar7,1);
    if (lVar5 != 0) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(lVar5);
      }
    }
  }
  else {
    FBaseGraphTask::GetSmallTaskAllocator();
    if (puVar12 != (undefined8 *)0x0) {
      (**(code **)*puVar12)(puVar12,1);
    }
  }
  puVar12 = (undefined8 *)0x0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    puVar11 = (undefined8 *)operator_new(0x20);
    if (puVar11 != (undefined8 *)0x0) {
      local_res18[0] = *(longlong *)(param_1 + 0x140);
      uVar6 = *(undefined8 *)(param_1 + 200);
      if (local_res18[0] != 0) {
        LOCK();
        *(int *)(local_res18[0] + 8) = *(int *)(local_res18[0] + 8) + 1;
        UNLOCK();
      }
      puVar11[1] = 0;
      *puVar11 = &PTR__scalar_deleting_destructor__144dd54c8;
      puVar11[2] = local_res18[0];
      if (local_res18[0] != 0) {
        LOCK();
        *(int *)(local_res18[0] + 8) = *(int *)(local_res18[0] + 8) + 1;
        UNLOCK();
      }
      puVar11[3] = uVar6;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
      puVar12 = puVar11;
    }
    *(undefined8 **)(param_1 + 0x148) = puVar12;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_2);
  return;
}



// FUNCTION 14288e3d0 FUN_14288e3d0 body=544 status=ok
// SIG undefined FUN_14288e3d0(void)

void FUN_14288e3d0(longlong param_1,char param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong local_res8;
  undefined4 local_88;
  undefined4 uStack_84;
  longlong *plStack_80;
  longlong local_78 [2];
  longlong local_68 [2];
  code *local_58;
  undefined8 local_50;
  longlong local_40;
  char local_38;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(char *)(param_1 + 0xf) = param_2;
  }
  else {
    plStack_80 = &local_res8;
    local_88 = 0x42867870;
    uStack_84 = 1;
    local_res8 = param_1;
    FUN_1428602c0(&local_58,&local_88);
    if ((bool)param_2 == (*(char *)(param_1 + 0xf) == '\0')) {
      FTickTaskLevel::RemoveTickFunction(*(undefined8 *)(param_1 + 0x48),param_1);
      *(char *)(param_1 + 0xf) = param_2;
      FTickTaskLevel::AddTickFunction(*(undefined8 *)(param_1 + 0x48),param_1);
    }
    if ((0 < local_40) && (local_40 != DAT_146b17368)) {
      puVar4 = &DAT_143f3eda8;
      if (DAT_146b17360 != 0) {
        puVar4 = DAT_146b17358;
      }
      puVar3 = (undefined8 *)(*local_58)(local_78,local_50);
      puVar2 = (undefined2 *)*puVar3;
      *puVar3 = 0;
      iVar1 = *(int *)(puVar3 + 1);
      puVar3[1] = 0;
      if (local_78[0] != 0) {
        FMemory::Free();
      }
      puVar5 = &DAT_143f3eda8;
      if (iVar1 != 0) {
        puVar5 = puVar2;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x714,
                 L"Detected concurrent access to SetTickFunctionEnable this:[%s] last:[%s]",puVar5,
                 puVar4);
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      puVar4 = &DAT_143f3eda8;
      if (DAT_146b17360 != 0) {
        puVar4 = DAT_146b17358;
      }
      puVar3 = (undefined8 *)(*local_58)(local_68,local_50);
      puVar2 = (undefined2 *)*puVar3;
      *puVar3 = 0;
      iVar1 = *(int *)(puVar3 + 1);
      puVar3[1] = 0;
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      puVar5 = &DAT_143f3eda8;
      if (iVar1 != 0) {
        puVar5 = puVar2;
      }
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x714,
                 L"Detected concurrent access to SetTickFunctionEnable this:[%s] last:[%s]",puVar5,
                 puVar4);
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
    }
    if (local_38 != '\0') {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b17330);
    }
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0x3c) = 0xbf800000;
  }
  return;
}



// FUNCTION 14288e5f0 FUN_14288e5f0 body=21 status=ok
// SIG undefined FUN_14288e5f0(void)

void FUN_14288e5f0(longlong param_1,float param_2)

{
  *(float *)(param_1 + 0xa28) = DAT_146535184 - param_2;
  return;
}



// FUNCTION 14288e610 FUN_14288e610 body=111 status=ok
// SIG undefined FUN_14288e610(void)

char FUN_14288e610(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x818);
  if (param_2 != plVar1) {
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x298))(plVar1,param_1);
    }
    *(longlong **)(param_1 + 0x818) = param_2;
    if (param_2 != (longlong *)0x0) {
      cVar2 = (**(code **)(*param_2 + 0x290))(param_2,param_1);
      if (cVar2 != '\0') {
        return cVar2;
      }
      *(undefined8 *)(param_1 + 0x818) = 0;
      return '\0';
    }
  }
  return '\x01';
}



// FUNCTION 14288e680 FUN_14288e680 body=31 status=ok
// SIG undefined FUN_14288e680(void)

void FUN_14288e680(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *(undefined8 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0x1d8) = *param_2;
  *(undefined4 *)(param_1 + 0x1dc) = uVar1;
  *(undefined8 *)(param_1 + 0x1e0) = uVar2;
  return;
}



// FUNCTION 14288e6a0 FUN_14288e6a0 body=68 status=ok
// SIG undefined FUN_14288e6a0(void)

void FUN_14288e6a0(longlong param_1,float param_2)

{
  float fVar1;
  
  *(float *)(param_1 + 0x17c) = param_2;
  if (*(float *)(param_1 + 0x184) <= param_2) {
    return;
  }
  if (param_2 < 0.0001) {
    FUN_14288d7b0(param_1 + 0x178,0,0,1);
    return;
  }
  fVar1 = param_2 - 0.0001;
  if (param_2 <= param_2 - 0.0001) {
    fVar1 = param_2;
  }
  FUN_14288d7b0(param_1 + 0x178,fVar1,0,1);
  return;
}



// FUNCTION 14288e6f0 FUN_14288e6f0 body=7 status=ok
// SIG undefined FUN_14288e6f0(void)

void FUN_14288e6f0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x178) = param_2;
  return;
}



// FUNCTION 14288e700 FUN_14288e700 body=31 status=ok
// SIG undefined FUN_14288e700(void)

void FUN_14288e700(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *(undefined8 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0x1c8) = *param_2;
  *(undefined4 *)(param_1 + 0x1cc) = uVar1;
  *(undefined8 *)(param_1 + 0x1d0) = uVar2;
  return;
}



// FUNCTION 14288e720 FUN_14288e720 body=58 status=ok
// SIG undefined FUN_14288e720(void)

void FUN_14288e720(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x198);
    puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x1a0) * 8;
    if (puVar1 != puVar2) {
      while (puVar1[3] != param_3) {
        puVar1 = puVar1 + 8;
        if (puVar1 == puVar2) {
          return;
        }
      }
      *puVar1 = param_2;
    }
  }
  return;
}



// FUNCTION 14288e760 FUN_14288e760 body=53 status=ok
// SIG undefined FUN_14288e760(void)

void FUN_14288e760(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x00014288e791. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1,param_2,uVar1 & 0xff000000);
  return;
}



// FUNCTION 14288e7a0 SetupGroup body=361 status=ok
// SIG undefined SetupGroup(void)

void FTextureLODGroup::SetupGroup(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_1415aa300();
  if (iVar1 == 3) {
    if (0 < *(int *)(param_1 + 0x10)) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x10);
    }
LAB_14288e7dc:
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 < 1) goto LAB_14288e7e6;
  }
  else {
    if (iVar1 != 4) goto LAB_14288e7e6;
    iVar1 = *(int *)(param_1 + 0x14);
    if ((0 < iVar1) || (iVar1 = *(int *)(param_1 + 0x10), 0 < iVar1)) {
      *(int *)(param_1 + 0xc) = iVar1;
    }
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 < 1) goto LAB_14288e7dc;
  }
  *(int *)(param_1 + 0x28) = iVar1;
LAB_14288e7e6:
  uVar2 = *(uint *)(param_1 + 0x24);
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar3 = 0x20;
  iVar4 = iVar3;
  if (uVar2 != 0) {
    iVar4 = 0x1f - iVar1;
  }
  uVar2 = uVar2 - 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar5 = iVar3;
  if (uVar2 != 0) {
    iVar5 = 0x1f - iVar1;
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 4) = 0x20U - iVar5 & ~((iVar4 << 0x1a) >> 0x1f);
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (uVar2 == 0) {
    iVar1 = 0x20;
  }
  else {
    iVar1 = 0x1f - iVar1;
  }
  uVar2 = uVar2 - 1;
  iVar4 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  iVar5 = iVar3;
  if (uVar2 != 0) {
    iVar5 = 0x1f - iVar4;
  }
  uVar2 = *(uint *)(param_1 + 0x38);
  *(uint *)(param_1 + 8) = 0x20U - iVar5 & ~((iVar1 << 0x1a) >> 0x1f);
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar4 = iVar3;
  if (uVar2 != 0) {
    iVar4 = 0x1f - iVar1;
  }
  uVar2 = uVar2 - 1;
  iVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (uVar2 != 0) {
    iVar3 = 0x1f - iVar1;
  }
  *(uint *)(param_1 + 0x3c) = 0x20U - iVar3 & ~((iVar4 << 0x1a) >> 0x1f);
  if (*(longlong *)(param_1 + 0x40) != 300) {
    if (*(longlong *)(param_1 + 0x40) != 0x12d) {
      *(char *)(param_1 + 0x18) = (*(longlong *)(param_1 + 0x48) != 0x12d) + '\x03';
      return;
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
    return;
  }
  *(char *)(param_1 + 0x18) = (*(longlong *)(param_1 + 0x48) != 0x12d) + '\x01';
  return;
}



// FUNCTION 14288e910 SetupLODGroup body=23 status=ok
// SIG undefined SetupLODGroup(void)

void UTextureLODSettings::SetupLODGroup(longlong param_1,int param_2)

{
  FTextureLODGroup::SetupGroup((longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x28));
  return;
}



// FUNCTION 14288e930 FUN_14288e930 body=611 status=ok
// SIG undefined FUN_14288e930(void)

void FUN_14288e930(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x110) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14288eae7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14288eae7:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14288eba0 FUN_14288eba0 body=611 status=ok
// SIG undefined FUN_14288eba0(void)

void FUN_14288eba0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14288ed57;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14288ed57:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14288ee10 FUN_14288ee10 body=691 status=ok
// SIG undefined FUN_14288ee10(void)

void FUN_14288ee10(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0x20) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146b17290 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146b17290 != 0x1000)) ||
     (uVar3 = DAT_146b17298, iVar4 != 0)) {
    uVar3 = DAT_146b17294 | DAT_146b17290;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14288f017;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14288f017:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14288f0d0 FUN_14288f0d0 body=691 status=ok
// SIG undefined FUN_14288f0d0(void)

void FUN_14288f0d0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0x20) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146b172c0 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146b172c0 != 0x1000)) ||
     (uVar3 = DAT_146b172c8, iVar4 != 0)) {
    uVar3 = DAT_146b172c4 | DAT_146b172c0;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14288f2d7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14288f2d7:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14288f390 FUN_14288f390 body=611 status=ok
// SIG undefined FUN_14288f390(void)

void FUN_14288f390(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x24);
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_14288f547;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_14288f547:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 14288f600 FUN_14288f600 body=35 status=ok
// SIG undefined FUN_14288f600(void)

void FUN_14288f600(void)

{
  longlong *plVar1;
  
  FUN_1415b0bc0();
  FUN_141ee24f0(0);
  plVar1 = (longlong *)FUN_141672640();
                    /* WARNING: Could not recover jumptable at 0x00014288f61f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1);
  return;
}



// FUNCTION 14288f630 FUN_14288f630 body=111 status=ok
// SIG undefined FUN_14288f630(void)

bool FUN_14288f630(longlong param_1)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  do {
    if ((iVar2 < 0) || (*(int *)(param_1 + 0xc20) <= iVar2)) {
      return false;
    }
    pcVar1 = *(char **)(*(longlong *)(param_1 + 0xc18) + (longlong)iVar2 * 8);
    if (DAT_1464aaa88 == -1) {
      bVar3 = *pcVar1 == '\x01';
LAB_14288f676:
      if ((bVar3) && (*(longlong *)(pcVar1 + 0x288) != 0)) {
        iVar2 = FUN_1428cf800();
        return iVar2 == 3;
      }
    }
    else if (*pcVar1 == '\x03') {
      bVar3 = *(int *)(pcVar1 + 600) == DAT_1464aaa88;
      goto LAB_14288f676;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}



// FUNCTION 14288f6a0 FUN_14288f6a0 body=111 status=ok
// SIG undefined FUN_14288f6a0(void)

bool FUN_14288f6a0(longlong param_1)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  do {
    if ((iVar2 < 0) || (*(int *)(param_1 + 0xc20) <= iVar2)) {
      return false;
    }
    pcVar1 = *(char **)(*(longlong *)(param_1 + 0xc18) + (longlong)iVar2 * 8);
    if (DAT_1464aaa88 == -1) {
      bVar3 = *pcVar1 == '\x01';
LAB_14288f6e6:
      if ((bVar3) && (*(longlong *)(pcVar1 + 0x288) != 0)) {
        iVar2 = FUN_1428cf800();
        return iVar2 == 1;
      }
    }
    else if (*pcVar1 == '\x03') {
      bVar3 = *(int *)(pcVar1 + 600) == DAT_1464aaa88;
      goto LAB_14288f6e6;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}



// FUNCTION 14288f710 FUN_14288f710 body=67 status=ok
// SIG undefined FUN_14288f710(void)

ulonglong FUN_14288f710(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0xc18);
  plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
  while( true ) {
    if (plVar2 == plVar1) {
      return (ulonglong)plVar2 & 0xffffffffffffff00;
    }
    if (*(longlong *)(*plVar2 + 0x288) == param_2) break;
    plVar2 = plVar2 + 1;
  }
  return (ulonglong)(*(uint *)(*plVar2 + 0x210) & 1);
}



// FUNCTION 14288f760 ShowPrerequistes body=79 status=ok
// SIG undefined ShowPrerequistes(void)

void FTickFunction::ShowPrerequistes(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = (longlong)*(int *)(param_1 + 0x28) * 0x10 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x10) {
    if (*(longlong *)(lVar1 + 8) != 0) {
      ShowPrerequistes(*(longlong *)(lVar1 + 8),param_2 + 1);
    }
  }
  return;
}



// FUNCTION 14288f7b0 FUN_14288f7b0 body=161 status=ok
// SIG undefined FUN_14288f7b0(void)

void FUN_14288f7b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong local_res10;
  
  if (*(longlong *)(param_1 + 0xa58) != 0) {
    local_res10 = 0;
    FAudioCommandFence::BeginFence(&local_res10);
    FAudioCommandFence::Wait(&local_res10,0);
    FUN_1422fa970();
    FUN_1422fa240(*(undefined8 *)(param_1 + 0xa58));
    lVar3 = *(longlong *)(param_1 + 0xa58);
    if (lVar3 != 0) {
      FAudioDeviceManager::~FAudioDeviceManager(lVar3);
      FMemory::operator_delete(lVar3,0x120);
    }
    *(undefined8 *)(param_1 + 0xa58) = 0;
    if (local_res10 != 0) {
      LOCK();
      piVar1 = (int *)(local_res10 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  return;
}



// FUNCTION 14288f860 FUN_14288f860 body=511 status=ok
// SIG undefined FUN_14288f860(void)

void FUN_14288f860(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  
  plVar5 = *(longlong **)(param_1 + 0xac0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0xad0);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(param_1 + 0xae0);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  FUN_141edc760(local_res8,0);
  local_40 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xab8) != &local_48) {
    *(undefined8 *)(param_1 + 0xab8) = 0;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xac0,&local_40);
    plVar3 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  local_30 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xac8) != &local_38) {
    *(undefined8 *)(param_1 + 0xac8) = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=((longlong *)(param_1 + 0xad0),&local_30)
    ;
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  FUN_141edd460(local_res8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar7)(plVar7);
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return;
}



// FUNCTION 14288fa60 FUN_14288fa60 body=344 status=ok
// SIG undefined FUN_14288fa60(void)

void FUN_14288fa60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  if (param_2 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x38);
    uVar6 = 0;
    if (lVar3 != 0) {
      *(undefined8 *)(param_2 + 0x38) = 0;
      FUN_14286cbe0(param_1,param_2,*(undefined8 *)(lVar3 + 0x120));
    }
    FUN_1428c8ca0(param_2);
    plVar2 = *(longlong **)(DAT_146b17150 + 0xc18);
    plVar1 = plVar2 + *(int *)(DAT_146b17150 + 0xc20);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      lVar3 = *plVar2;
      if (*(longlong *)(lVar3 + 0x288) == param_2) goto LAB_14288faea;
    }
    lVar3 = FUN_14286b170(DAT_146b17150,0);
LAB_14288faea:
    lVar7 = DAT_146b17150;
    uVar8 = uVar6;
    if (0 < *(int *)(lVar3 + 0x250)) {
      do {
        iVar5 = (int)uVar6;
        lVar4 = *(longlong *)(uVar8 + *(longlong *)(lVar3 + 0x248));
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0xd0) == param_2)) {
          plVar2 = *(longlong **)(param_1 + 0xc18);
          plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
          for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
            lVar4 = *plVar2;
            if (*(longlong *)(lVar4 + 0x288) == param_2) goto LAB_14288fb72;
          }
          lVar4 = FUN_14286b170(lVar7,0);
LAB_14288fb72:
          FUN_14286cc40(lVar4);
          iVar5 = iVar5 + -1;
          uVar8 = uVar8 - 0x10;
          lVar7 = DAT_146b17150;
        }
        uVar6 = (ulonglong)(iVar5 + 1U);
        uVar8 = uVar8 + 0x10;
      } while ((int)(iVar5 + 1U) < *(int *)(lVar3 + 0x250));
    }
  }
  return;
}



// FUNCTION 14288fbc0 FUN_14288fbc0 body=892 status=ok
// SIG undefined FUN_14288fbc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14288fbc0(longlong param_1,undefined8 param_2)

{
  wchar_t _C;
  int iVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  wint_t wVar5;
  wint_t wVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  uint uVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined1 auStack_1108 [32];
  ulonglong local_10e8;
  undefined8 local_10e0;
  longlong *local_10d8;
  ulonglong local_10d0;
  ulonglong local_10c8;
  longlong local_10c0;
  longlong *local_10b8;
  undefined4 local_10b0;
  undefined2 local_10ac;
  undefined1 local_10aa;
  undefined2 *local_10a8;
  longlong *local_10a0;
  ulonglong local_1098;
  undefined8 local_1090;
  undefined2 *local_1088;
  int local_1080;
  undefined1 local_1078 [48];
  wchar_t local_1048 [2048];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1108;
  local_10c8 = local_10c8 & 0xffffffff00000000;
  local_10d8 = (longlong *)0x0;
  local_10d0 = 0;
  local_1090 = param_2;
  TArray<FString,FDefaultAllocator>::Append<FString,FDefaultAllocator>(&local_10d8,param_1 + 0xbf0);
  TArray<FString,FDefaultAllocator>::Append<FString,FDefaultAllocator>(&local_10d8,param_1 + 0xc00);
  uVar13 = local_10d0 & 0xffffffff;
  plVar14 = local_10d8;
  if (0 < (int)local_10d0) {
    do {
      if ((int)plVar14[1] == 0) {
        local_10a8 = &DAT_143f3eda8;
      }
      else {
        local_10a8 = (undefined2 *)*plVar14;
      }
      local_10a0 = plVar14;
      local_1098 = uVar13;
      cVar4 = FParse::Token(&local_10a8,local_1048,0x800,1);
      if (cVar4 != '\0') {
        uVar7 = FUN_1428dfc70();
        local_10e0 = 0;
        local_10e8 = local_10e8 & 0xffffffff00000000;
        uVar7 = FUN_141799830(uVar7,0,local_1048,0);
        local_10e8 = FActorSpawnParameters::FActorSpawnParameters(local_1078);
        uVar8 = UWorld::SpawnActor(param_2,uVar7,0,0);
        if (uVar8 != 0) {
LAB_14288fd00:
          cVar4 = FParse::Token(&local_10a8,local_1048,0x800,1);
          uVar13 = local_1098;
          plVar14 = local_10a0;
          param_2 = local_1090;
          if (cVar4 != '\0') {
            pwVar9 = _guard_xfg_dispatch_icall_nop(local_1048,L'=');
            if (pwVar9 != (wchar_t *)0x0) {
              *pwVar9 = L'\0';
              local_10c0 = *(longlong *)(uVar8 + 0x10);
              if (local_10c0 == 0) {
                local_10b8 = (longlong *)0x0;
              }
              else {
                local_10b8 = *(longlong **)(local_10c0 + 0x38);
              }
              local_10b0 = 0xffffffff;
              local_10ac = 0x101;
              local_10aa = 0;
              FUN_140472e10(&local_10c0);
              if (local_10b8 != (longlong *)0x0) {
LAB_14288fd90:
                plVar14 = local_10b8;
                local_10c8 = local_10b8[3];
                FName::ToString(&local_10c8,&local_1088);
                puVar12 = &DAT_143f3eda8;
                if (local_1080 != 0) {
                  puVar12 = local_1088;
                }
                pwVar10 = local_1048;
                do {
                  _C = *(wchar_t *)(((longlong)puVar12 - (longlong)local_1048) + (longlong)pwVar10);
                  if ((_C == L'\0') && (*pwVar10 == L'\0')) goto LAB_14288fe00;
                  if (_C != *pwVar10) {
                    wVar5 = towlower(_C);
                    wVar6 = towlower(*pwVar10);
                    if (wVar5 != wVar6) goto LAB_14288fdf6;
                  }
                  pwVar10 = pwVar10 + 1;
                } while( true );
              }
            }
            goto LAB_14288fd00;
          }
        }
      }
      local_10a0 = plVar14 + 2;
      uVar13 = uVar13 - 1;
      plVar14 = local_10a0;
    } while (uVar13 != 0);
    uVar13 = local_10d0 & 0xffffffff;
    local_1098 = 0;
  }
  plVar3 = local_10d8;
  uVar11 = (uint)uVar13;
  plVar14 = local_10d8;
  while (uVar11 != 0) {
    if (*plVar14 != 0) {
      FMemory::Free();
    }
    plVar14 = plVar14 + 2;
    uVar11 = (int)uVar13 - 1;
    uVar13 = (ulonglong)uVar11;
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  return;
LAB_14288fdf6:
  if (wVar5 == wVar6) {
LAB_14288fe00:
    if ((*(uint *)(plVar14 + 7) >> 0xe & 1) != 0) {
      bVar2 = true;
      goto LAB_14288fe11;
    }
  }
  bVar2 = false;
LAB_14288fe11:
  if (local_1088 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar7 = DAT_1468b6160;
  if (bVar2) {
    iVar1 = *(int *)((longlong)plVar14 + 0x44);
    cVar4 = FUN_141766f20(plVar14,0,DAT_1468b6160);
    if ((cVar4 != '\0') && (pwVar9 + 1 != (wchar_t *)0x0)) {
      local_10e0 = uVar7;
      local_10e8 = uVar8;
      (**(code **)(*plVar14 + 0x2e0))(plVar14,pwVar9 + 1,(longlong)iVar1 + uVar8,0);
    }
  }
  local_10b8 = (longlong *)plVar14[5];
  FUN_140472e10(&local_10c0);
  if (local_10b8 == (longlong *)0x0) goto LAB_14288fd00;
  goto LAB_14288fd90;
}



// FUNCTION 14288ff40 FUN_14288ff40 body=317 status=ok
// SIG undefined FUN_14288ff40(void)

void FUN_14288ff40(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 0x2c) = 2;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  uVar4 = FUN_1424a1490();
  FUN_1424ad920(uVar4,param_2,param_5);
  *(undefined1 *)(param_1 + 0x38) = 1;
  FTickTaskSequencer::StartFrame(*(undefined8 *)(param_1 + 8));
  FUN_142873a20(param_1,param_5);
  uVar6 = uVar7;
  uVar8 = uVar7;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      lVar1 = *(longlong *)(uVar8 + *(longlong *)(param_1 + 0x10));
      *(undefined4 *)(lVar1 + 0x118) = 0;
      *(undefined4 *)(lVar1 + 0x110) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(lVar1 + 0x114) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(lVar1 + 0x11c) = 2;
      *(undefined8 *)(lVar1 + 0x120) = *(undefined8 *)(param_1 + 0x30);
      lVar2 = *(longlong *)(lVar1 + 0x58);
      *(undefined1 *)(lVar1 + 0x128) = 1;
      fVar3 = 0.0;
      for (; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        fVar9 = *(float *)(lVar2 + 0x38) + fVar3;
        if (*(float *)(lVar1 + 0x110) <= fVar9) {
          *(float *)(lVar2 + 0x38) = *(float *)(lVar2 + 0x38) - (*(float *)(lVar1 + 0x110) - fVar3);
          break;
        }
        *(undefined1 *)(lVar2 + 0xf) = 1;
        fVar3 = fVar9;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar8 = uVar8 + 8;
    } while ((int)uVar5 < *(int *)(param_1 + 0x18));
    uVar6 = uVar7;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        FTickTaskLevel::QueueAllTicks(*(undefined8 *)(uVar7 + *(longlong *)(param_1 + 0x10)));
        uVar5 = (int)uVar6 + 1;
        uVar7 = uVar7 + 8;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < *(int *)(param_1 + 0x18));
    }
  }
  return;
}



// FUNCTION 142890080 StartFrame body=484 status=ok
// SIG undefined StartFrame(void)

void FTickTaskSequencer::StartFrame(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  *(bool *)((longlong)param_1 + 0x9b5) = *DAT_146b171d8 != 0;
  *(bool *)((longlong)param_1 + 0x9b6) = *DAT_146b17208 != 0;
  cVar2 = FUN_141636a40();
  if (((cVar2 == '\0') || (iVar3 = FUN_1416a5660(), iVar3 < 3)) ||
     (cVar2 = FUN_1415bac00(), cVar2 == '\0')) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  if (bVar10) {
    bVar10 = false;
  }
  else {
    bVar10 = *DAT_146b17220 != 0;
  }
  *(bool *)((longlong)param_1 + 0x9b4) = bVar10;
  if (0 < (int)param_1[0x135]) {
    plVar4 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar4 + 0x48))(plVar4,param_1 + 0x130,2);
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::Reset
              (param_1 + 0x130,0);
  }
  piVar5 = (int *)((longlong)param_1 + 0x58c);
  lVar9 = 8;
  plVar4 = param_1;
  do {
    iVar3 = *(int *)((longlong)plVar4 + 0x2c);
    plVar6 = (longlong *)plVar4[4];
    iVar7 = (int)plVar4[5];
    if (iVar3 < 0) {
      if (plVar6 == (longlong *)0x0) {
        plVar6 = plVar4;
      }
      if (iVar7 != 0) {
        do {
          if (*plVar6 != 0) {
            LOCK();
            piVar1 = (int *)(*plVar6 + 0x48);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              FGraphEvent::Recycle();
            }
          }
          plVar6 = plVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        iVar3 = *(int *)((longlong)plVar4 + 0x2c);
      }
      *(undefined4 *)(plVar4 + 5) = 0;
      if (iVar3 != 0) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(plVar4,0)
        ;
      }
    }
    else {
      if (plVar6 == (longlong *)0x0) {
        plVar6 = plVar4;
      }
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar6 != 0) {
          LOCK();
          piVar1 = (int *)(*plVar6 + 0x48);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            FGraphEvent::Recycle();
          }
        }
        plVar6 = plVar6 + 1;
      }
      *(undefined4 *)(plVar4 + 5) = 0;
    }
    lVar8 = 8;
    do {
      piVar5[-1] = 0;
      if ((*piVar5 < 0) && (*piVar5 != 0)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(piVar5 + -3);
      }
      piVar5[-0x101] = 0;
      if ((piVar5[-0x100] < 0) && (piVar5[-0x100] != 0)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(piVar5 + -0x103);
      }
      piVar5 = piVar5 + 4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    plVar4 = plVar4 + 6;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  *(undefined4 *)(param_1 + 0x136) = 0;
  return;
}



// FUNCTION 142890280 FUN_142890280 body=8 status=ok
// SIG undefined FUN_142890280(void)

void FUN_142890280(longlong param_1)

{
  *(byte *)(param_1 + 0x179) = *(byte *)(param_1 + 0x179) & 0xfb;
  return;
}



// FUNCTION 142890290 FUN_142890290 body=207 status=ok
// SIG undefined FUN_142890290(void)

void FUN_142890290(longlong param_1,longlong param_2,undefined4 param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = 0;
LAB_1428902b8:
  while( true ) {
    if ((iVar4 < 0) || (*(int *)(param_1 + 0xc20) <= iVar4)) {
      return;
    }
    if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xc18) + (longlong)iVar4 * 8) + 0x240)
        == 0) break;
    plVar1 = (longlong *)UListView::OnItemSelectionChanged();
    plVar2 = (longlong *)*plVar1;
    plVar1 = plVar2 + (int)plVar1[1];
    plVar3 = plVar2;
    if (plVar2 == plVar1) break;
    do {
      if (*plVar3 == param_2) goto joined_r0x000142890315;
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    iVar4 = iVar4 + 1;
  }
  goto LAB_142890331;
joined_r0x000142890315:
  for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    plVar3 = (longlong *)*plVar2;
    if ((plVar3 != (longlong *)0x0) && ((int)plVar3[0x21] == param_4)) {
      (**(code **)(*plVar3 + 0x2b8))(plVar3,param_3);
      return;
    }
  }
LAB_142890331:
  iVar4 = iVar4 + 1;
  goto LAB_1428902b8;
}



// FUNCTION 142890360 Sync body=323 status=ok
// SIG undefined Sync(void)

void FFrameEndSync::Sync(longlong param_1,char param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  float fVar6;
  
  FUN_141edede0(param_1 + (longlong)*(int *)(param_1 + 0x10) * 8,1);
  plVar4 = (longlong *)FTaskGraphInterface::Get();
  cVar1 = (**(code **)(*plVar4 + 0x20))(plVar4,2);
  if (cVar1 == '\0') {
    plVar4 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar4 + 0x30))(plVar4,2);
  }
  if (param_2 != '\0') {
    uVar3 = *(int *)(param_1 + 0x10) + 1U & 0x80000001;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
    }
    *(uint *)(param_1 + 0x10) = uVar3;
  }
  if ((DAT_146535178 != 0) &&
     (cVar2 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)(), cVar2 != '\0')) {
    iVar5 = 0;
    fVar6 = DAT_146531e94 * 0.001;
    cVar2 = FRenderCommandFence::IsFenceComplete(param_1 + (longlong)*(int *)(param_1 + 0x10) * 8);
    do {
      if (cVar2 != '\0') {
        return;
      }
      if (cVar1 == '\0') {
        plVar4 = (longlong *)FTaskGraphInterface::Get();
        (**(code **)(*plVar4 + 0x30))(plVar4,2);
        cVar2 = FRenderCommandFence::IsFenceComplete
                          (param_1 + (longlong)*(int *)(param_1 + 0x10) * 8);
        if (cVar2 != '\0') {
          return;
        }
      }
      if (iVar5 < 5) {
        iVar5 = iVar5 + 1;
        ProcessAsyncLoading(1,0,fVar6 * 0.2);
      }
      cVar2 = FRenderCommandFence::IsFenceComplete(param_1 + (longlong)*(int *)(param_1 + 0x10) * 8)
      ;
    } while( true );
  }
  FRenderCommandFence::Wait(param_1 + (longlong)*(int *)(param_1 + 0x10) * 8,cVar1 == '\0');
  return;
}



// FUNCTION 1428904b0 FUN_1428904b0 body=876 status=ok
// SIG undefined FUN_1428904b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428904b0(void)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  
  (**(code **)(*DAT_146b17610 + 0x78))(DAT_146b17610,&local_48);
  local_res8[0] = DAT_1465351f8;
  if ((DAT_146ab632a == '\0') || (cVar4 = FUN_141ee41d0(), cVar4 == '\0')) {
    cVar4 = '\0';
  }
  else {
    cVar4 = '\x01';
  }
  puVar7 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar7 = local_48;
  }
  cVar5 = FUN_142884010(puVar7,local_res18,local_res10,local_res8);
  if (cVar5 != '\0') {
    uVar8 = 0;
    iVar6 = 0;
    if (local_res8[0] != 0) {
      if (local_res8[0] == 1) {
        iVar6 = 1;
      }
      else {
        iVar6 = 2;
      }
    }
    if ((((DAT_1465351f0 != local_res18[0]) || (DAT_1465351f4 != local_res10[0])) ||
        (DAT_1465351f8 != iVar6)) || ((DAT_146b174ba != cVar4 || (DAT_1465351fc != '\0')))) {
      DAT_1464af354 = DAT_1464af354 + 1;
      bVar2 = false;
      DAT_1465351f0 = local_res18[0];
      DAT_1465351f4 = local_res10[0];
      DAT_1465351fc = '\0';
      lVar9 = (longlong)(DAT_1464af348 + -1);
      DAT_1465351f8 = iVar6;
      DAT_146b174ba = cVar4;
      if (-1 < DAT_1464af348 + -1) {
        lVar10 = lVar9 << 4;
        bVar2 = false;
        do {
          if (((*(int *)(lVar10 + 8 + DAT_1464af340) == 0) ||
              (plVar1 = *(longlong **)(lVar10 + DAT_1464af340), plVar1 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar1 + 0x40))(plVar1,local_res18[0],local_res10[0]),
             cVar4 == '\0')) {
            bVar2 = true;
          }
          lVar10 = lVar10 + -0x10;
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
      }
      iVar3 = DAT_1464af348;
      DAT_1464af354 = DAT_1464af354 + -1;
      if ((bVar2) && (DAT_1464af354 < 1)) {
        uVar11 = uVar8;
        if (0 < DAT_1464af348) {
          do {
            if (((*(int *)(uVar11 + 8 + DAT_1464af340) == 0) ||
                (*(longlong **)(uVar11 + DAT_1464af340) == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(**(longlong **)(uVar11 + DAT_1464af340) + 0x10))(),
               cVar4 != '\0')) {
              TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af340,uVar8,1,1);
            }
            else {
              uVar8 = (ulonglong)((int)uVar8 + 1);
              uVar11 = uVar11 + 0x10;
            }
          } while ((int)uVar8 < DAT_1464af348);
        }
        _DAT_1464af350 = DAT_1464af348 * 2;
        if (_DAT_1464af350 < 3) {
          _DAT_1464af350 = 2;
        }
        if ((_DAT_1464af350 < iVar3) && (DAT_1464af34c != DAT_1464af348)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af340);
        }
      }
      if (((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) &&
         (*(longlong *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0xb8) != 0)) {
        FGenericPlatformMisc::LowLevelOutputDebugStringf
                  (L"Resizing viewport due to setres change, %d x %d\n",local_res18[0],
                   local_res10[0]);
        plVar1 = *(longlong **)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0xb8);
        (**(code **)(*plVar1 + 8))(plVar1,local_res18[0],local_res10[0],iVar6);
        if ((iVar6 == 0) &&
           (cVar4 = (**(code **)(**(longlong **)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0xb8) + 0x10
                                ))(), cVar4 == '\0')) {
          DAT_1465351f8 = 1;
          plVar1 = *(longlong **)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0xb8);
          (**(code **)(*plVar1 + 8))(plVar1,local_res18[0],local_res10[0],1);
          FString::PrintfImpl(&local_58,L"%dx%dwf",local_res18[0],local_res10[0]);
          puVar7 = &DAT_143f3eda8;
          if (local_50 != 0) {
            puVar7 = local_58;
          }
          FUN_14288e760(DAT_146b17610,puVar7);
          if (local_58 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142890820 FUN_142890820 body=422 status=ok
// SIG undefined FUN_142890820(void)

undefined8 FUN_142890820(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_108 [72];
  undefined4 local_c0;
  undefined2 local_bb;
  undefined1 local_b4;
  
  if ((DAT_1468c2188 == 0) && (DAT_1468c218c == 0)) {
    lVar4 = FUN_1424f49c0();
    DAT_1468c2188 = (uint)(longlong)((float)*(uint *)(param_1 + 0x19) * *(float *)(lVar4 + 0x20));
    lVar4 = FUN_1424f49c0();
    DAT_1468c218c =
         (uint)(longlong)((float)*(uint *)((longlong)param_1 + 0xcc) * *(float *)(lVar4 + 0x20));
  }
  if ((DAT_1468c2188 <= DAT_1464c9c64) && (DAT_1468c218c <= DAT_1464c9c64)) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    (**(code **)(*param_1 + 0x168))(param_1);
    (**(code **)(*param_1 + 0x160))(param_1);
    return 1;
  }
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_128,
             L"The high resolution screenshot multiplier is too large for your system. Please try again with a smaller value!"
             ,L"UnrealClient",L"HighResScreenshotTooBig");
  FNotificationInfo::FNotificationInfo(local_108,local_128);
  local_c0 = 0x40a00000;
  local_b4 = 1;
  local_bb = 0;
  uVar5 = FUN_1418fca90();
  FUN_1418d8b50(uVar5,local_138,local_108);
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_130 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar2 = (int *)((longlong)local_130 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  DAT_1468c2184 = 0;
  FUN_1408bc4f0(local_108);
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
  return 0;
}



// FUNCTION 1428909d0 FUN_1428909d0 body=2346 status=ok
// SIG undefined FUN_1428909d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428909d0(longlong param_1,float param_2)

{
  double *pdVar1;
  double dVar2;
  byte *pbVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  char cVar23;
  undefined4 uVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  longlong lVar29;
  undefined8 *puVar30;
  longlong *plVar31;
  undefined8 *puVar32;
  longlong *plVar33;
  uint uVar34;
  ulonglong uVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  int iVar39;
  undefined1 local_90 [104];
  
  if (*(longlong *)(param_1 + 0xe0) != DAT_1468c21b0) {
    uVar35 = 0;
    *(double *)(param_1 + 0x40) = (double)param_2 + *(double *)(param_1 + 0x40);
    iVar39 = *(int *)(param_1 + 0x18);
    while ((0 < iVar39 &&
           (lVar26 = *(longlong *)(param_1 + 0x10),
           *(double *)(lVar26 + 8) < *(double *)(param_1 + 0x40)))) {
      uVar24 = 0xffffffff;
      uVar27 = uVar35;
      if ((*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) &&
         ((uVar25 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x148))(),
          *(longlong *)(param_1 + 0xe8) != 0 && (uVar27 = 0, uVar25 != 0)))) {
        uVar24 = UWorld::FindCollectionIndexByType(uVar25,*(undefined4 *)(lVar26 + 0x88));
        uVar27 = uVar25;
      }
      FScopedLevelCollectionContextSwitch::FScopedLevelCollectionContextSwitch
                (local_90,uVar24,uVar27);
      pbVar3 = *(byte **)(param_1 + 0x10);
      *(byte *)(param_1 + 0x50) =
           *(byte *)(param_1 + 0x50) ^ (*(byte *)(param_1 + 0x50) ^ *pbVar3) & 1;
      *(byte *)(param_1 + 0x50) =
           *(byte *)(param_1 + 0x50) ^ (*(byte *)(param_1 + 0x50) ^ *pbVar3) & 2;
      *(byte *)(param_1 + 0x51) = pbVar3[1];
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(pbVar3 + 4);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(pbVar3 + 8);
      FTimerUnifiedDelegate::operator=(param_1 + 0x60,pbVar3 + 0x10);
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(pbVar3 + 0x80);
      *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(pbVar3 + 0x88);
      FUN_1428875c0(param_1 + 0x10,0,1);
      iVar39 = *(int *)(param_1 + 0x18);
      lVar26 = *(longlong *)(param_1 + 0x10);
      uVar27 = uVar35;
      if (1 < iVar39) {
        do {
          iVar4 = (int)uVar27;
          iVar36 = iVar4 * 2;
          uVar37 = iVar36 + 1;
          uVar38 = iVar36 + 2;
          uVar34 = uVar37;
          if (((int)uVar38 < iVar39) &&
             (dVar2 = *(double *)(lVar26 + 8 + (longlong)(int)uVar38 * 0x90),
             pdVar1 = (double *)(lVar26 + 8 + (longlong)(int)uVar37 * 0x90), uVar34 = uVar38,
             *pdVar1 <= dVar2 && dVar2 != *pdVar1)) {
            uVar34 = uVar37;
          }
          uVar27 = (ulonglong)uVar34;
          puVar32 = (undefined8 *)((longlong)(int)uVar34 * 0x90 + lVar26);
          lVar29 = (longlong)iVar4 * 0x90;
          dVar2 = *(double *)(lVar29 + 8 + lVar26);
          puVar30 = (undefined8 *)(lVar29 + lVar26);
          if (dVar2 < (double)puVar32[1] || dVar2 == (double)puVar32[1]) break;
          if (puVar30 != puVar32) {
            uVar28 = puVar32[1];
            uVar5 = *puVar30;
            uVar6 = puVar30[1];
            uVar7 = puVar30[2];
            uVar8 = puVar30[3];
            uVar9 = puVar30[4];
            uVar10 = puVar30[5];
            uVar11 = puVar30[6];
            uVar12 = puVar30[7];
            uVar13 = puVar30[8];
            uVar14 = puVar30[9];
            uVar15 = puVar30[10];
            uVar16 = puVar30[0xb];
            uVar17 = puVar30[0xc];
            uVar18 = puVar30[0xd];
            uVar19 = puVar30[0xe];
            uVar20 = puVar30[0xf];
            uVar21 = puVar30[0x10];
            uVar22 = puVar30[0x11];
            *puVar30 = *puVar32;
            puVar30[1] = uVar28;
            uVar28 = puVar32[3];
            puVar30[2] = puVar32[2];
            puVar30[3] = uVar28;
            uVar28 = puVar32[5];
            puVar30[4] = puVar32[4];
            puVar30[5] = uVar28;
            uVar28 = puVar32[7];
            puVar30[6] = puVar32[6];
            puVar30[7] = uVar28;
            uVar28 = puVar32[9];
            puVar30[8] = puVar32[8];
            puVar30[9] = uVar28;
            uVar28 = puVar32[0xb];
            puVar30[10] = puVar32[10];
            puVar30[0xb] = uVar28;
            uVar28 = puVar32[0xd];
            puVar30[0xc] = puVar32[0xc];
            puVar30[0xd] = uVar28;
            uVar28 = puVar32[0xf];
            puVar30[0xe] = puVar32[0xe];
            puVar30[0xf] = uVar28;
            uVar28 = puVar32[0x11];
            puVar30[0x10] = puVar32[0x10];
            puVar30[0x11] = uVar28;
            *puVar32 = uVar5;
            puVar32[1] = uVar6;
            puVar32[2] = uVar7;
            puVar32[3] = uVar8;
            puVar32[4] = uVar9;
            puVar32[5] = uVar10;
            puVar32[6] = uVar11;
            puVar32[7] = uVar12;
            puVar32[8] = uVar13;
            puVar32[9] = uVar14;
            puVar32[10] = uVar15;
            puVar32[0xb] = uVar16;
            puVar32[0xc] = uVar17;
            puVar32[0xd] = uVar18;
            puVar32[0xe] = uVar19;
            puVar32[0xf] = uVar20;
            puVar32[0x10] = uVar21;
            puVar32[0x11] = uVar22;
          }
        } while ((int)(uVar34 * 2 + 1) < iVar39);
      }
      *(undefined1 *)(param_1 + 0x51) = 3;
      if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
        iVar39 = 1;
      }
      else {
        iVar39 = (int)((*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x58)) /
                      (double)*(float *)(param_1 + 0x54)) + 1;
      }
      cVar23 = '\x03';
      uVar27 = uVar35;
      if (0 < iVar39) {
        do {
          if (((*(int *)(param_1 + 0x68) == 0) ||
              (*(longlong **)(param_1 + 0x60) == (longlong *)0x0)) ||
             (cVar23 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))(), cVar23 == '\0')) {
            if (((*(longlong *)(param_1 + 0x78) == 0) ||
                (lVar26 = FWeakObjectPtr::Get(param_1 + 0x70), lVar26 == 0)) ||
               (lVar26 = UObject::FindFunction(lVar26,*(undefined8 *)(param_1 + 0x78)), lVar26 == 0)
               ) {
              if (*(int *)(param_1 + 0xc0) != 0) {
                plVar33 = *(longlong **)(param_1 + 0xb0);
                uVar25 = uVar35;
                if (plVar33 == (longlong *)0x0) {
                  uVar25 = param_1 + 0x90;
                }
                if (uVar25 != 0 || plVar33 != (longlong *)0x0) {
                  uVar25 = uVar35;
                  if (*(int *)(param_1 + 0xc0) != 0) {
                    if (plVar33 == (longlong *)0x0) {
                      plVar33 = (longlong *)(param_1 + 0x90);
                    }
                    if (plVar33 != (longlong *)0x0) {
                      uVar25 = (**(code **)(*plVar33 + 8))();
                    }
                  }
                  (**(code **)(param_1 + 0x80))(uVar25);
                }
              }
            }
            else {
              plVar33 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x70);
              uVar28 = FUN_14178ac60(plVar33,*(undefined8 *)(param_1 + 0x78));
              (**(code **)(*plVar33 + 0x208))(plVar33,uVar28,0);
            }
          }
          else if (*(int *)(param_1 + 0x68) == 0) {
            (**(code **)(_DAT_00000000 + 0x38))();
          }
          else {
            (**(code **)(**(longlong **)(param_1 + 0x60) + 0x38))();
          }
          cVar23 = *(char *)(param_1 + 0x51);
        } while ((cVar23 == '\x03') &&
                (uVar34 = (int)uVar27 + 1, uVar27 = (ulonglong)uVar34, (int)uVar34 < iVar39));
      }
      if (((*(byte *)(param_1 + 0x50) & 1) != 0) && (cVar23 == '\x03')) {
        if ((((*(byte *)(param_1 + 0x50) & 2) == 0) ||
            (((*(int *)(param_1 + 0x68) != 0 && (*(longlong **)(param_1 + 0x60) != (longlong *)0x0))
             && (cVar23 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))(), cVar23 != '\0')))
            ) || (((*(longlong *)(param_1 + 0x78) != 0 &&
                   (lVar26 = FWeakObjectPtr::Get(param_1 + 0x70), lVar26 != 0)) &&
                  (lVar26 = UObject::FindFunction(lVar26,*(undefined8 *)(param_1 + 0x78)),
                  lVar26 != 0)))) {
LAB_142890e28:
          *(undefined1 *)(param_1 + 0x51) = 1;
          *(double *)(param_1 + 0x58) =
               (double)((float)iVar39 * *(float *)(param_1 + 0x54)) + *(double *)(param_1 + 0x58);
          iVar39 = *(int *)(param_1 + 0x18);
          *(int *)(param_1 + 0x18) = iVar39 + 1;
          if (*(int *)(param_1 + 0x1c) < iVar39 + 1) {
            TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                      (param_1 + 0x10,iVar39);
          }
          FUN_1428610d0((longlong)iVar39 * 0x90 + *(longlong *)(param_1 + 0x10),param_1 + 0x50);
          lVar26 = *(longlong *)(param_1 + 0x10);
          iVar39 = *(int *)(param_1 + 0x18) + -1;
          while (0 < iVar39) {
            lVar29 = (longlong)iVar39;
            iVar39 = (iVar39 + -1) / 2;
            puVar32 = (undefined8 *)(lVar29 * 0x90 + lVar26);
            puVar30 = (undefined8 *)((longlong)iVar39 * 0x90 + lVar26);
            if ((double)puVar30[1] < (double)puVar32[1] || (double)puVar30[1] == (double)puVar32[1])
            break;
            if (puVar32 != puVar30) {
              uVar28 = puVar30[1];
              uVar5 = *puVar32;
              uVar6 = puVar32[1];
              uVar7 = puVar32[2];
              uVar8 = puVar32[3];
              uVar9 = puVar32[4];
              uVar10 = puVar32[5];
              uVar11 = puVar32[6];
              uVar12 = puVar32[7];
              uVar13 = puVar32[8];
              uVar14 = puVar32[9];
              uVar15 = puVar32[10];
              uVar16 = puVar32[0xb];
              uVar17 = puVar32[0xc];
              uVar18 = puVar32[0xd];
              uVar19 = puVar32[0xe];
              uVar20 = puVar32[0xf];
              uVar21 = puVar32[0x10];
              uVar22 = puVar32[0x11];
              *puVar32 = *puVar30;
              puVar32[1] = uVar28;
              uVar28 = puVar30[3];
              puVar32[2] = puVar30[2];
              puVar32[3] = uVar28;
              uVar28 = puVar30[5];
              puVar32[4] = puVar30[4];
              puVar32[5] = uVar28;
              uVar28 = puVar30[7];
              puVar32[6] = puVar30[6];
              puVar32[7] = uVar28;
              uVar28 = puVar30[9];
              puVar32[8] = puVar30[8];
              puVar32[9] = uVar28;
              uVar28 = puVar30[0xb];
              puVar32[10] = puVar30[10];
              puVar32[0xb] = uVar28;
              uVar28 = puVar30[0xd];
              puVar32[0xc] = puVar30[0xc];
              puVar32[0xd] = uVar28;
              uVar28 = puVar30[0xf];
              puVar32[0xe] = puVar30[0xe];
              puVar32[0xf] = uVar28;
              uVar28 = puVar30[0x11];
              puVar32[0x10] = puVar30[0x10];
              puVar32[0x11] = uVar28;
              *puVar30 = uVar5;
              puVar30[1] = uVar6;
              puVar30[2] = uVar7;
              puVar30[3] = uVar8;
              puVar30[4] = uVar9;
              puVar30[5] = uVar10;
              puVar30[6] = uVar11;
              puVar30[7] = uVar12;
              puVar30[8] = uVar13;
              puVar30[9] = uVar14;
              puVar30[10] = uVar15;
              puVar30[0xb] = uVar16;
              puVar30[0xc] = uVar17;
              puVar30[0xd] = uVar18;
              puVar30[0xe] = uVar19;
              puVar30[0xf] = uVar20;
              puVar30[0x10] = uVar21;
              puVar30[0x11] = uVar22;
            }
          }
        }
        else if (*(int *)(param_1 + 0xc0) != 0) {
          uVar27 = uVar35;
          if (*(longlong *)(param_1 + 0xb0) == 0) {
            uVar27 = param_1 + 0x90;
          }
          if (uVar27 != 0 || *(longlong *)(param_1 + 0xb0) != 0) goto LAB_142890e28;
        }
      }
      if ((*(int *)(param_1 + 0x68) != 0) &&
         (plVar33 = *(longlong **)(param_1 + 0x60), plVar33 != (longlong *)0x0)) {
        (**(code **)(*plVar33 + 0x28))(plVar33,0);
        if (*(longlong *)(param_1 + 0x60) != 0) {
          uVar28 = FMemory::Realloc(*(longlong *)(param_1 + 0x60),0,0);
          *(undefined8 *)(param_1 + 0x60) = uVar28;
        }
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
      FWeakObjectPtr::operator=(param_1 + 0x70,0);
      *(undefined8 *)(param_1 + 0x78) = 0;
      if (*(int *)(param_1 + 0xc0) != 0) {
        plVar33 = *(longlong **)(param_1 + 0xb0);
        if (*(longlong **)(param_1 + 0xb0) == (longlong *)0x0) {
          plVar33 = (longlong *)(param_1 + 0x90);
        }
        if (plVar33 != (longlong *)0x0) {
          (**(code **)(*plVar33 + 0x10))(plVar33,0);
        }
      }
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        uVar28 = FMemory::Realloc(*(longlong *)(param_1 + 0xb0),0,0);
        *(undefined8 *)(param_1 + 0xb0) = uVar28;
      }
      *(undefined4 *)(param_1 + 0xc0) = 0;
      *(code **)(param_1 + 0x80) = AK::MemoryMgr::StartProfileThreadUsage;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      FScopedLevelCollectionContextSwitch::~FScopedLevelCollectionContextSwitch(local_90);
      iVar39 = *(int *)(param_1 + 0x18);
    }
    *(longlong *)(param_1 + 0xe0) = DAT_1468c21b0;
    uVar27 = uVar35;
    if (0 < *(int *)(param_1 + 0x38)) {
      do {
        dVar2 = *(double *)(param_1 + 0x40);
        lVar26 = *(longlong *)(param_1 + 0x30) + uVar27;
        *(undefined1 *)(lVar26 + 1) = 1;
        *(double *)(lVar26 + 8) = dVar2 + *(double *)(lVar26 + 8);
        iVar39 = *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar39 + 1;
        if (*(int *)(param_1 + 0x1c) < iVar39 + 1) {
          TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                    (param_1 + 0x10,iVar39);
        }
        FUN_1428610d0((longlong)iVar39 * 0x90 + *(longlong *)(param_1 + 0x10),lVar26);
        lVar26 = *(longlong *)(param_1 + 0x10);
        iVar39 = *(int *)(param_1 + 0x18) + -1;
        while (0 < iVar39) {
          lVar29 = (longlong)iVar39;
          iVar39 = (iVar39 + -1) / 2;
          puVar32 = (undefined8 *)(lVar29 * 0x90 + lVar26);
          puVar30 = (undefined8 *)((longlong)iVar39 * 0x90 + lVar26);
          if ((double)puVar30[1] < (double)puVar32[1] || (double)puVar30[1] == (double)puVar32[1])
          break;
          if (puVar32 != puVar30) {
            uVar28 = puVar30[1];
            uVar5 = *puVar32;
            uVar6 = puVar32[1];
            uVar7 = puVar32[2];
            uVar8 = puVar32[3];
            uVar9 = puVar32[4];
            uVar10 = puVar32[5];
            uVar11 = puVar32[6];
            uVar12 = puVar32[7];
            uVar13 = puVar32[8];
            uVar14 = puVar32[9];
            uVar15 = puVar32[10];
            uVar16 = puVar32[0xb];
            uVar17 = puVar32[0xc];
            uVar18 = puVar32[0xd];
            uVar19 = puVar32[0xe];
            uVar20 = puVar32[0xf];
            uVar21 = puVar32[0x10];
            uVar22 = puVar32[0x11];
            *puVar32 = *puVar30;
            puVar32[1] = uVar28;
            uVar28 = puVar30[3];
            puVar32[2] = puVar30[2];
            puVar32[3] = uVar28;
            uVar28 = puVar30[5];
            puVar32[4] = puVar30[4];
            puVar32[5] = uVar28;
            uVar28 = puVar30[7];
            puVar32[6] = puVar30[6];
            puVar32[7] = uVar28;
            uVar28 = puVar30[9];
            puVar32[8] = puVar30[8];
            puVar32[9] = uVar28;
            uVar28 = puVar30[0xb];
            puVar32[10] = puVar30[10];
            puVar32[0xb] = uVar28;
            uVar28 = puVar30[0xd];
            puVar32[0xc] = puVar30[0xc];
            puVar32[0xd] = uVar28;
            uVar28 = puVar30[0xf];
            puVar32[0xe] = puVar30[0xe];
            puVar32[0xf] = uVar28;
            uVar28 = puVar30[0x11];
            puVar32[0x10] = puVar30[0x10];
            puVar32[0x11] = uVar28;
            *puVar30 = uVar5;
            puVar30[1] = uVar6;
            puVar30[2] = uVar7;
            puVar30[3] = uVar8;
            puVar30[4] = uVar9;
            puVar30[5] = uVar10;
            puVar30[6] = uVar11;
            puVar30[7] = uVar12;
            puVar30[8] = uVar13;
            puVar30[9] = uVar14;
            puVar30[10] = uVar15;
            puVar30[0xb] = uVar16;
            puVar30[0xc] = uVar17;
            puVar30[0xd] = uVar18;
            puVar30[0xe] = uVar19;
            puVar30[0xf] = uVar20;
            puVar30[0x10] = uVar21;
            puVar30[0x11] = uVar22;
          }
        }
        uVar34 = (int)uVar35 + 1;
        uVar35 = (ulonglong)uVar34;
        uVar27 = uVar27 + 0x90;
      } while ((int)uVar34 < *(int *)(param_1 + 0x38));
      iVar39 = *(int *)(param_1 + 0x3c);
      lVar26 = *(longlong *)(param_1 + 0x30);
      iVar36 = *(int *)(param_1 + 0x38);
      if (iVar39 < 0) {
        if (iVar36 != 0) {
          plVar33 = (longlong *)(lVar26 + 0x60);
          do {
            if ((int)plVar33[2] != 0) {
              plVar31 = (longlong *)*plVar33;
              if ((longlong *)*plVar33 == (longlong *)0x0) {
                plVar31 = plVar33 + -4;
              }
              if (plVar31 != (longlong *)0x0) {
                (**(code **)(*plVar31 + 0x10))(plVar31,0);
              }
            }
            if (*plVar33 != 0) {
              FMemory::Free();
            }
            TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar33 + -10);
            plVar33 = plVar33 + 0x12;
            iVar36 = iVar36 + -1;
          } while (iVar36 != 0);
          iVar39 = *(int *)(param_1 + 0x3c);
        }
        *(undefined4 *)(param_1 + 0x38) = 0;
        if (iVar39 != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::
          ResizeTo((longlong *)(param_1 + 0x30),0);
        }
      }
      else {
        if (iVar36 != 0) {
          plVar33 = (longlong *)(lVar26 + 0x60);
          do {
            if ((int)plVar33[2] != 0) {
              plVar31 = (longlong *)*plVar33;
              if ((longlong *)*plVar33 == (longlong *)0x0) {
                plVar31 = plVar33 + -4;
              }
              if (plVar31 != (longlong *)0x0) {
                (**(code **)(*plVar31 + 0x10))(plVar31,0);
              }
            }
            if (*plVar33 != 0) {
              FMemory::Free();
            }
            TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar33 + -10);
            plVar33 = plVar33 + 0x12;
            iVar36 = iVar36 + -1;
          } while (iVar36 != 0);
        }
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
    }
  }
  return;
}



// FUNCTION 142891300 FUN_142891300 body=185 status=ok
// SIG undefined FUN_142891300(void)

void FUN_142891300(longlong *param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  
  FUN_142357eb0();
  if ((*(byte *)(param_1 + 0x42) & 1) != 0) {
    if (param_1[0x23] == 0) {
      lVar2 = param_1[0x24];
      if ((lVar2 == 0) && (lVar2 = FUN_1423407b0(param_1), lVar2 == 0)) goto LAB_142891374;
      lVar2 = UWorld::GetWorldSettings(lVar2,0,1);
      fVar3 = *(float *)(lVar2 + 0x5e4) * *(float *)(lVar2 + 0x5e0) * *(float *)(lVar2 + 0x5e8);
    }
    else {
      fVar3 = (float)FUN_14222dcf0();
    }
    param_2 = param_2 / fVar3;
  }
LAB_142891374:
  FUN_142892100(param_1 + 0x2f,param_2);
  if (((*(byte *)(param_1 + 0x17) & 8) != 0) && (iVar1 = FUN_14233f450(param_1), iVar1 != 3)) {
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x179) & 4) == 0) {
    (**(code **)(*param_1 + 0x288))(param_1);
  }
  return;
}



// FUNCTION 1428913c0 FUN_1428913c0 body=395 status=ok
// SIG undefined FUN_1428913c0(void)

void FUN_1428913c0(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  FUN_142891550();
  QueryPerformanceCounter(&local_res8);
  local_res8.s.LowPart = *(undefined4 *)(param_1 + 0xf8);
  lVar2 = (longlong)(int)local_res8.s.LowPart;
  if (0 < (int)local_res8.s.LowPart) {
    lVar8 = 0;
    do {
      iVar7 = 0;
      while( true ) {
        if ((iVar7 < 0) || ((int)param_1[0x184] <= iVar7)) goto LAB_1428914b6;
        pcVar1 = *(char **)(param_1[0x183] + (longlong)iVar7 * 8);
        if ((*pcVar1 != '\x06') &&
           ((*(longlong *)(pcVar1 + 0x240) != 0 &&
            (lVar3 = UGameInstance::GetFirstGamePlayer(), lVar3 != 0)))) break;
        iVar7 = iVar7 + 1;
      }
      plVar4 = (longlong *)
               UGameInstance::GetFirstGamePlayer
                         (*(undefined8 *)
                           (*(longlong *)(param_1[0x183] + (longlong)iVar7 * 8) + 0x240));
      if (plVar4 != (longlong *)0x0) {
        if (*(int *)(lVar8 + 8 + param_1[0xf7]) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = *(undefined2 **)(lVar8 + param_1[0xf7]);
        }
        lVar3 = plVar4[5];
        uVar5 = FUN_141672640();
        uVar6 = (**(code **)(*plVar4 + 0x148))(plVar4);
        goto LAB_1428914ec;
      }
LAB_1428914b6:
      uVar6 = DAT_146b19a68;
      if (*(int *)(lVar8 + 8 + param_1[0xf7]) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = *(undefined2 **)(lVar8 + param_1[0xf7]);
      }
      lVar3 = param_1[5];
      uVar5 = FUN_141672640();
      plVar4 = param_1;
LAB_1428914ec:
      (**(code **)(lVar3 + 8))(plVar4 + 5,uVar6,puVar9,uVar5);
      lVar8 = lVar8 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  QueryPerformanceCounter(&local_res10);
  FUN_142698f20();
  TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
            (param_1 + 0xf7,0,local_res8.s.LowPart,1);
  return;
}



// FUNCTION 142891550 FUN_142891550 body=2979 status=ok
// SIG undefined FUN_142891550(void)

void FUN_142891550(longlong param_1)

{
  double dVar1;
  uint uVar2;
  void *pvVar3;
  double dVar4;
  int iVar5;
  uint *puVar6;
  double *pdVar7;
  short *psVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  short *psVar14;
  longlong *plVar15;
  longlong *plVar16;
  short *psVar17;
  longlong *plVar18;
  short *psVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint uVar22;
  undefined4 uVar23;
  LARGE_INTEGER LVar24;
  short *psVar25;
  bool bVar26;
  LARGE_INTEGER local_res10;
  longlong *local_res18;
  longlong *local_res20;
  longlong *plStack_110;
  undefined8 uStack_108;
  uint uStack_100;
  uint uStack_fc;
  undefined8 uStack_f8;
  uint local_f0;
  uint uStack_ec;
  uint *puStack_e8;
  undefined4 local_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  short *local_d0;
  int local_c8;
  int local_c4;
  short *local_c0;
  int local_b8;
  undefined4 local_b4;
  longlong *local_b0;
  uint local_a8;
  uint local_a4;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  uint uStack_88;
  uint uStack_84;
  uint *local_80;
  uint uStack_78;
  uint uStack_74;
  undefined8 local_70;
  
  QueryPerformanceCounter(&local_res10);
  uVar12 = (ulonglong)(int)DAT_1468b0c00;
  psVar25 = (short *)0x0;
  dVar4 = ((double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_1468e2430;
  if (0 < (int)DAT_1468b0c00) {
    LVar24.QuadPart = (LONGLONG)(DAT_1468b0bf8 + uVar12 * 2);
    local_res10.QuadPart = LVar24.QuadPart;
    if (DAT_1468b0bf8 != (longlong *)LVar24.QuadPart) {
      plVar15 = DAT_1468b0bf8;
      do {
        local_c8 = (int)plVar15[1];
        lVar13 = (longlong)local_c8;
        pvVar3 = (void *)*plVar15;
        local_d0 = (short *)0x0;
        if (local_c8 == 0) {
          local_c4 = 0;
          psVar8 = psVar25;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d0,local_c8,0);
          psVar8 = local_d0;
          _guard_xfg_dispatch_icall_nop(local_d0,pvVar3,lVar13 * 2);
        }
        iVar11 = local_c8;
        iVar9 = *(int *)(param_1 + 0x7c0);
        *(int *)(param_1 + 0x7c0) = iVar9 + 1;
        if (*(int *)(param_1 + 0x7c4) < iVar9 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x7b8),iVar9);
        }
        puVar21 = (undefined8 *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 0x7b8));
        if (puVar21 != (undefined8 *)0x0) {
          *puVar21 = 0;
          puVar21[1] = 0;
          psVar19 = &DAT_143f3eda8;
          if (iVar11 != 0) {
            psVar19 = psVar8;
          }
          LVar24 = local_res10;
          if ((psVar19 != (short *)0x0) && (*psVar19 != 0)) {
            lVar13 = -1;
            do {
              lVar13 = lVar13 + 1;
            } while (psVar19[lVar13] != 0);
            iVar9 = (int)lVar13 + 1;
            *(int *)(puVar21 + 1) = iVar9;
            if (0 < iVar9) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar21,0);
            }
            FGenericPlatformString::Memcpy(*puVar21);
            LVar24 = local_res10;
          }
        }
        if (psVar8 != (short *)0x0) {
          FMemory::Free(psVar8);
        }
        plVar15 = plVar15 + 2;
      } while (plVar15 != (longlong *)LVar24.QuadPart);
      uVar12 = (ulonglong)DAT_1468b0c00;
    }
    uVar10 = (uint)uVar12;
    plVar15 = DAT_1468b0bf8;
    while (uVar10 != 0) {
      if (*plVar15 != 0) {
        FMemory::Free();
      }
      plVar15 = plVar15 + 2;
      uVar10 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar10;
    }
    DAT_1468b0c00 = 0;
    if (DAT_1468b0c04 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1468b0bf8,0);
    }
  }
  if (0 < *(int *)(param_1 + 0x1138) - *(int *)(param_1 + 0x1164)) {
    local_a0 = (longlong *)(param_1 + 0x1130);
    local_d0 = (short *)0x0;
    uVar10 = *(uint *)(param_1 + 0x1158);
    puStack_e8 = (uint *)(param_1 + 0x1140);
    local_res10.QuadPart = local_res10.QuadPart & 0xffffffff00000000;
    local_c4 = 0;
    local_f0 = 0;
    uStack_ec = 1;
    uStack_dc = 0;
    uStack_d8 = 0;
    if (uVar10 != 0) {
      puVar6 = *(uint **)(param_1 + 0x1150);
      if (*(uint **)(param_1 + 0x1150) == (uint *)0x0) {
        puVar6 = puStack_e8;
      }
      uVar2 = *puVar6;
      psVar8 = psVar25;
      psVar19 = psVar25;
      while (uVar2 == 0) {
        iVar9 = (int)psVar8;
        uStack_d8 = (int)psVar19 + 0x20;
        psVar19 = (short *)(ulonglong)uStack_d8;
        local_f0 = iVar9 + 1;
        psVar8 = (short *)(ulonglong)local_f0;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_1428917df;
        uVar2 = puVar6[(longlong)iVar9 + 1];
      }
      uStack_ec = -uVar2 & uVar2;
      iVar9 = 0x1f;
      if (uStack_ec != 0) {
        for (; uStack_ec >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_ec == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_dc = (uStack_d8 - iVar9) + 0x1f;
      if ((int)uVar10 < (int)uStack_dc) {
LAB_1428917df:
        uStack_dc = uVar10;
      }
    }
    local_e0 = 0xffffffff;
    uVar2 = *(uint *)(param_1 + 0x1158);
    plStack_110 = (longlong *)CONCAT44(uStack_ec,local_f0);
    uStack_78 = 0xffffffff;
    uStack_74 = uStack_dc;
    uStack_f8 = CONCAT44(uStack_d4,uStack_d8);
    uVar20 = -1 << ((byte)uVar2 & 0x1f);
    uVar22 = uVar2 & 0xffffffe0;
    uStack_108 = CONCAT44(uVar2,uVar20);
    uStack_88 = local_f0;
    uStack_84 = uStack_ec;
    if (uVar2 != uVar10) {
      puVar6 = *(uint **)(param_1 + 0x1150);
      if (*(uint **)(param_1 + 0x1150) == (uint *)0x0) {
        puVar6 = puStack_e8;
      }
      uVar20 = puVar6[(int)uVar2 >> 5] & uVar20;
      iVar9 = (int)uVar2 >> 5;
      while (uVar20 == 0) {
        uVar22 = uVar22 + 0x20;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_1428918b7;
        uVar20 = puVar6[(longlong)iVar9 + 1];
        uStack_108 = 0xffffffff;
        iVar9 = iVar9 + 1;
      }
      uVar20 = -uVar20 & uVar20;
      iVar9 = 0x1f;
      if (uVar20 != 0) {
        for (; uVar20 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uVar20 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iVar9 = (uVar22 - iVar9) + 0x1f;
      uStack_108 = CONCAT44(iVar9,(int)uStack_108);
      if ((int)uVar10 < iVar9) {
LAB_1428918b7:
        uStack_108 = CONCAT44(uVar10,(int)uStack_108);
      }
    }
    local_98 = (longlong *)(uStack_108 >> 0x20);
    psVar8 = psVar25;
    local_80 = puStack_e8;
    local_70 = uStack_f8;
    local_90 = local_a0;
    uStack_100 = uStack_78;
    uStack_fc = uStack_74;
    while( true ) {
      plVar15 = local_a0;
      psVar19 = local_d0;
      if (((uStack_74 == (uint)local_98) && (local_80 == puStack_e8)) && (local_90 == local_a0)) {
        bVar26 = false;
      }
      else {
        bVar26 = true;
      }
      if (!bVar26) break;
      plStack_110 = (longlong *)0x0;
      puVar6 = (uint *)((longlong)(int)uStack_74 * 0x20 + *local_90);
      uVar10 = puVar6[4];
      uVar2 = *puVar6;
      puVar21 = *(undefined8 **)(puVar6 + 2);
      local_res18 = (longlong *)CONCAT44(local_res18._4_4_,uVar10);
      uStack_108 = CONCAT44(uStack_108._4_4_,uVar10);
      if (uVar10 == 0) {
        uStack_108 = 0;
        iVar9 = 0;
        uVar23 = (DWORD)psVar8;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&plStack_110,uVar10,0);
        lVar13 = (longlong)plStack_110 - (longlong)puVar21;
        do {
          *(undefined8 *)(lVar13 + (longlong)puVar21) = 0;
          iVar9 = *(int *)(puVar21 + 1);
          pvVar3 = (void *)*puVar21;
          *(int *)(lVar13 + 8 + (longlong)puVar21) = iVar9;
          if (iVar9 == 0) {
            *(undefined4 *)(lVar13 + 0xc + (longlong)puVar21) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                      ((undefined8 *)(lVar13 + (longlong)puVar21),iVar9,0);
            _guard_xfg_dispatch_icall_nop
                      (*(void **)(lVar13 + (longlong)puVar21),pvVar3,(longlong)iVar9 * 2);
          }
          puVar21 = puVar21 + 2;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        local_res18 = (longlong *)CONCAT44(local_res18._4_4_,(int)uStack_108);
        iVar9 = (int)uStack_108;
        uVar23 = local_res10.s.LowPart;
      }
      plVar16 = plStack_110;
      plVar15 = plStack_110;
      plVar18 = plStack_110;
      if (uVar2 <= DAT_1464aaa8c) {
        local_c8 = uVar23 + 1;
        local_res10.s.LowPart = local_c8;
        if (local_c4 < local_c8) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_d0,uVar23);
          local_res10.s.LowPart = local_c8;
        }
        local_b0 = plVar16 + (longlong)iVar9 * 2;
        *(uint *)(local_d0 + (longlong)(int)uVar23 * 2) = uVar2;
        local_res20 = plVar16;
        plVar18 = plStack_110;
        plVar15 = plStack_110;
        if (plVar16 != local_b0) {
          do {
            local_b8 = (int)plVar16[1];
            lVar13 = (longlong)local_b8;
            pvVar3 = (void *)*plVar16;
            local_c0 = (short *)0x0;
            local_res20 = plVar16;
            if (local_b8 == 0) {
              local_b4 = 0;
              psVar8 = psVar25;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c0,local_b8,0);
              psVar8 = local_c0;
              _guard_xfg_dispatch_icall_nop(local_c0,pvVar3,lVar13 * 2);
            }
            iVar11 = local_b8;
            iVar9 = *(int *)(param_1 + 0x7c0);
            *(int *)(param_1 + 0x7c0) = iVar9 + 1;
            if (*(int *)(param_1 + 0x7c4) < iVar9 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x7b8,iVar9);
            }
            puVar21 = (undefined8 *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 0x7b8));
            if (puVar21 != (undefined8 *)0x0) {
              *puVar21 = 0;
              puVar21[1] = 0;
              psVar19 = &DAT_143f3eda8;
              if (iVar11 != 0) {
                psVar19 = psVar8;
              }
              plVar16 = local_res20;
              if ((psVar19 != (short *)0x0) && (*psVar19 != 0)) {
                lVar13 = -1;
                do {
                  lVar13 = lVar13 + 1;
                } while (psVar19[lVar13] != 0);
                iVar9 = (int)lVar13 + 1;
                *(int *)(puVar21 + 1) = iVar9;
                if (0 < iVar9) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar21,0);
                }
                FGenericPlatformString::Memcpy(*puVar21);
                plVar16 = local_res20;
              }
            }
            if (psVar8 != (short *)0x0) {
              FMemory::Free(psVar8);
            }
            plVar16 = plVar16 + 2;
          } while (plVar16 != local_b0);
          iVar9 = (int)local_res18;
          local_res20 = plVar16;
          plVar18 = plStack_110;
          plVar15 = plStack_110;
        }
        for (; plVar16 = plStack_110, iVar9 != 0; iVar9 = iVar9 + -1) {
          plStack_110 = plVar15;
          if (*plVar18 != 0) {
            FMemory::Free();
          }
          plVar18 = plVar18 + 2;
          plVar15 = plStack_110;
          plStack_110 = plVar16;
        }
        uVar12 = uStack_108 >> 0x20;
        uStack_108 = uStack_108 & 0xffffffff00000000;
        iVar9 = 0;
        plVar18 = plStack_110;
        if ((int)uVar12 != 0) {
          plStack_110 = plVar15;
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&plStack_110,0);
          plVar16 = plStack_110;
          iVar9 = (int)uStack_108;
          plVar15 = plStack_110;
          plVar18 = plStack_110;
        }
      }
      for (; plStack_110 = plVar15, iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar16 != 0) {
          FMemory::Free();
        }
        plVar16 = plVar16 + 2;
        plVar15 = plStack_110;
      }
      if (plVar18 != (longlong *)0x0) {
        FMemory::Free(plVar18);
      }
      uStack_78 = uStack_78 & ~uStack_84;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_88);
      psVar8 = (short *)(local_res10.QuadPart & 0xffffffff);
    }
    psVar17 = (short *)((ulonglong)
                        ((longlong)(local_d0 + (longlong)(int)(DWORD)psVar8 * 2) +
                        (3 - (longlong)local_d0)) >> 2);
    if (local_d0 + (longlong)(int)(DWORD)psVar8 * 2 < local_d0) {
      psVar17 = psVar25;
    }
    psVar14 = psVar25;
    psVar8 = local_d0;
    if (psVar17 != (short *)0x0) {
      do {
        FUN_142887300(plVar15,*(undefined4 *)psVar8);
        psVar14 = (short *)((longlong)psVar14 + 1);
        psVar8 = psVar8 + 2;
      } while (psVar14 != psVar17);
    }
    if (psVar19 != (short *)0x0) {
      FMemory::Free(psVar19);
    }
  }
  if (0 < *(int *)(param_1 + 0x1188) - *(int *)(param_1 + 0x11b4)) {
    local_98 = (longlong *)(param_1 + 0x1180);
    local_b0 = (longlong *)0x0;
    uVar10 = *(uint *)(param_1 + 0x11a8);
    puStack_e8 = (uint *)(param_1 + 0x1190);
    local_res10.s.LowPart = 0;
    local_a4 = 0;
    local_f0 = 0;
    uStack_ec = 1;
    uStack_dc = 0;
    uStack_d8 = 0;
    if (uVar10 != 0) {
      puVar6 = *(uint **)(param_1 + 0x11a0);
      if (*(uint **)(param_1 + 0x11a0) == (uint *)0x0) {
        puVar6 = puStack_e8;
      }
      uVar2 = *puVar6;
      psVar8 = psVar25;
      psVar19 = psVar25;
      while (uVar2 == 0) {
        iVar9 = (int)psVar8;
        uStack_d8 = (int)psVar19 + 0x20;
        psVar19 = (short *)(ulonglong)uStack_d8;
        local_f0 = iVar9 + 1;
        psVar8 = (short *)(ulonglong)local_f0;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_142891ccf;
        uVar2 = puVar6[(longlong)iVar9 + 1];
      }
      uStack_ec = -uVar2 & uVar2;
      iVar9 = 0x1f;
      if (uStack_ec != 0) {
        for (; uStack_ec >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_ec == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      uStack_dc = (uStack_d8 - iVar9) + 0x1f;
      if ((int)uVar10 < (int)uStack_dc) {
LAB_142891ccf:
        uStack_dc = uVar10;
      }
    }
    local_e0 = 0xffffffff;
    uVar2 = *(uint *)(param_1 + 0x11a8);
    plStack_110 = (longlong *)CONCAT44(uStack_ec,local_f0);
    uStack_78 = 0xffffffff;
    uStack_74 = uStack_dc;
    uStack_f8 = CONCAT44(uStack_d4,uStack_d8);
    uVar20 = -1 << ((byte)uVar2 & 0x1f);
    uVar22 = uVar2 & 0xffffffe0;
    uStack_108 = CONCAT44(uVar2,uVar20);
    uStack_88 = local_f0;
    uStack_84 = uStack_ec;
    if (uVar2 != uVar10) {
      puVar6 = *(uint **)(param_1 + 0x11a0);
      if (*(uint **)(param_1 + 0x11a0) == (uint *)0x0) {
        puVar6 = puStack_e8;
      }
      uVar20 = puVar6[(int)uVar2 >> 5] & uVar20;
      iVar9 = (int)uVar2 >> 5;
      while (uVar20 == 0) {
        uVar22 = uVar22 + 0x20;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_142891da7;
        uVar20 = puVar6[(longlong)iVar9 + 1];
        uStack_108 = 0xffffffff;
        iVar9 = iVar9 + 1;
      }
      uVar20 = -uVar20 & uVar20;
      iVar9 = 0x1f;
      if (uVar20 != 0) {
        for (; uVar20 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uVar20 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iVar9 = (uVar22 - iVar9) + 0x1f;
      uStack_108 = CONCAT44(iVar9,(int)uStack_108);
      if ((int)uVar10 < iVar9) {
LAB_142891da7:
        uStack_108 = CONCAT44(uVar10,(int)uStack_108);
      }
    }
    local_a0 = (longlong *)(uStack_108 >> 0x20);
    psVar8 = psVar25;
    psVar19 = psVar25;
    local_80 = puStack_e8;
    local_70 = uStack_f8;
    local_90 = local_98;
    uStack_100 = uStack_78;
    uStack_fc = uStack_74;
    while( true ) {
      plVar16 = local_98;
      plVar15 = local_b0;
      if (((uStack_74 == (uint)local_a0) && (local_80 == puStack_e8)) && (local_90 == local_98)) {
        bVar26 = false;
      }
      else {
        bVar26 = true;
      }
      if (!bVar26) break;
      plStack_110 = (longlong *)0x0;
      pdVar7 = (double *)((longlong)(int)uStack_74 * 0x20 + *local_90);
      iVar9 = *(int *)(pdVar7 + 2);
      dVar1 = *pdVar7;
      puVar21 = (undefined8 *)pdVar7[1];
      uStack_108 = CONCAT44(uStack_108._4_4_,iVar9);
      if (iVar9 == 0) {
        uStack_108 = 0;
        iVar9 = 0;
        uVar23 = (uint)psVar8;
        uVar10 = (uint)psVar19;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&plStack_110,iVar9,0);
        lVar13 = (longlong)plStack_110 - (longlong)puVar21;
        do {
          *(undefined8 *)(lVar13 + (longlong)puVar21) = 0;
          iVar11 = *(int *)(puVar21 + 1);
          pvVar3 = (void *)*puVar21;
          *(int *)(lVar13 + 8 + (longlong)puVar21) = iVar11;
          if (iVar11 == 0) {
            *(undefined4 *)(lVar13 + 0xc + (longlong)puVar21) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                      ((undefined8 *)(lVar13 + (longlong)puVar21),iVar11,0);
            _guard_xfg_dispatch_icall_nop
                      (*(void **)(lVar13 + (longlong)puVar21),pvVar3,(longlong)iVar11 * 2);
          }
          puVar21 = puVar21 + 2;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        iVar9 = (int)uStack_108;
        uVar23 = local_res10.s.LowPart;
        uVar10 = local_a4;
      }
      plVar15 = plStack_110;
      plVar16 = plStack_110;
      if (dVar1 <= dVar4) {
        local_a8 = uVar23 + 1;
        if ((int)uVar10 < (int)local_a8) {
          local_res10.s.LowPart = local_a8;
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b0,uVar23);
        }
        local_res20 = plVar15 + (longlong)iVar9 * 2;
        local_b0[(int)uVar23] = (longlong)dVar1;
        plVar16 = plVar15;
        local_res10.s.LowPart = local_a8;
        if (plVar15 != local_res20) {
          plVar18 = (longlong *)(param_1 + 0x7b8);
          local_res18 = plVar18;
          do {
            local_b8 = (int)plVar15[1];
            lVar13 = (longlong)local_b8;
            pvVar3 = (void *)*plVar15;
            local_c0 = (short *)0x0;
            if (local_b8 == 0) {
              local_b4 = 0;
              psVar8 = psVar25;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c0,local_b8,0);
              psVar8 = local_c0;
              _guard_xfg_dispatch_icall_nop(local_c0,pvVar3,lVar13 * 2);
            }
            iVar5 = local_b8;
            iVar11 = (int)plVar18[1];
            *(int *)(plVar18 + 1) = iVar11 + 1;
            if (*(int *)((longlong)plVar18 + 0xc) < iVar11 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar18,iVar11);
            }
            puVar21 = (undefined8 *)((longlong)iVar11 * 0x10 + *plVar18);
            if (puVar21 != (undefined8 *)0x0) {
              *puVar21 = 0;
              puVar21[1] = 0;
              psVar19 = &DAT_143f3eda8;
              if (iVar5 != 0) {
                psVar19 = psVar8;
              }
              plVar18 = local_res18;
              if ((psVar19 != (short *)0x0) && (*psVar19 != 0)) {
                lVar13 = -1;
                do {
                  lVar13 = lVar13 + 1;
                } while (psVar19[lVar13] != 0);
                iVar11 = (int)lVar13 + 1;
                *(int *)(puVar21 + 1) = iVar11;
                if (0 < iVar11) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar21,0);
                }
                FGenericPlatformString::Memcpy(*puVar21);
                plVar18 = local_res18;
              }
            }
            if (psVar8 != (short *)0x0) {
              FMemory::Free(psVar8);
            }
            plVar15 = plVar15 + 2;
            plVar16 = plStack_110;
          } while (plVar15 != local_res20);
        }
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (*plVar16 != 0) {
            FMemory::Free();
          }
          plVar16 = plVar16 + 2;
        }
        uVar12 = uStack_108 >> 0x20;
        uStack_108 = uStack_108 & 0xffffffff00000000;
        iVar9 = 0;
        plVar15 = plStack_110;
        plVar16 = plStack_110;
        if ((int)uVar12 != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&plStack_110,0);
          iVar9 = (int)uStack_108;
          plVar15 = plStack_110;
          plVar16 = plStack_110;
        }
      }
      for (; plVar18 = plStack_110, iVar9 != 0; iVar9 = iVar9 + -1) {
        plStack_110 = plVar16;
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 2;
        plVar16 = plStack_110;
        plStack_110 = plVar18;
      }
      bVar26 = plStack_110 != (longlong *)0x0;
      plStack_110 = plVar16;
      if (bVar26) {
        FMemory::Free(plVar18);
      }
      uStack_78 = uStack_78 & ~uStack_84;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_88);
      psVar8 = (short *)(ulonglong)local_res10.s.LowPart;
      psVar19 = (short *)(ulonglong)local_a4;
    }
    psVar19 = (short *)((ulonglong)
                        ((longlong)(local_b0 + (int)(uint)psVar8) + (7 - (longlong)local_b0)) >> 3);
    if (local_b0 + (int)(uint)psVar8 < local_b0) {
      psVar19 = psVar25;
    }
    plVar18 = local_b0;
    if (psVar19 != (short *)0x0) {
      do {
        FUN_142887450(plVar16,(int)*plVar18);
        psVar25 = (short *)((longlong)psVar25 + 1);
        plVar18 = plVar18 + 1;
      } while (psVar25 != psVar19);
    }
    if (plVar15 != (longlong *)0x0) {
      FMemory::Free(plVar15);
    }
  }
  return;
}



// FUNCTION 142892100 FUN_142892100 body=363 status=ok
// SIG undefined FUN_142892100(void)

void FUN_142892100(longlong param_1,float param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  bVar2 = false;
  if ((*(byte *)(param_1 + 1) & 4) == 0) {
    return;
  }
  fVar6 = (float)FTimeline::GetTimelineLength();
  bVar1 = *(byte *)(param_1 + 1);
  fVar7 = *(float *)(param_1 + 8);
  if ((bVar1 & 2) != 0) {
    fVar7 = -fVar7;
  }
  fVar8 = fVar7 * param_2 + *(float *)(param_1 + 0xc);
  bVar3 = false;
  if (fVar7 * param_2 <= 0.0) {
    if (0.0 <= fVar8) goto LAB_1428921f7;
    if ((bVar1 & 1) == 0) {
      *(byte *)(param_1 + 1) = bVar1 & 0xfb;
      bVar3 = true;
    }
    else {
      FUN_14288d7b0(param_1,0,1);
      FUN_14288d7b0(param_1,fVar6,0,1);
      if (0.0 < fVar6) {
        do {
          fVar8 = fVar8 + fVar6;
        } while (fVar8 < 0.0);
        goto LAB_1428921f7;
      }
    }
  }
  else {
    if (fVar8 <= fVar6) goto LAB_1428921f7;
    if ((bVar1 & 1) == 0) {
      *(byte *)(param_1 + 1) = bVar1 & 0xfb;
      bVar2 = true;
      fVar8 = fVar6;
      goto LAB_1428921f7;
    }
    FUN_14288d7b0(param_1,fVar6,1);
    FUN_14288d7b0(param_1,0,0,1);
    if (0.0 < fVar6) {
      do {
        fVar8 = fVar8 - fVar6;
      } while (fVar6 < fVar8);
      goto LAB_1428921f7;
    }
  }
  bVar2 = bVar3;
  fVar8 = 0.0;
LAB_1428921f7:
  FUN_14288d7b0(param_1,fVar8,1);
  if ((((bVar2) && (FUN_140f660a0(param_1 + 0x60), *(int *)(param_1 + 0x88) != 0)) &&
      (*(longlong **)(param_1 + 0x80) != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x18))(), cVar4 != '\0')) {
    if (*(int *)(param_1 + 0x88) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x80);
    }
    (**(code **)(*plVar5 + 0x40))();
  }
  return;
}



// FUNCTION 142892270 FUN_142892270 body=1394 status=ok
// SIG undefined FUN_142892270(void)

void FUN_142892270(longlong *param_1,longlong param_2,float param_3)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  longlong local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  int local_c0;
  undefined1 local_b8 [128];
  
  if (*(char *)(param_2 + 8) != '\0') {
    FUN_1428d91e0(param_2 + 8);
  }
  lVar12 = *(longlong *)(param_2 + 0x288);
  if (lVar12 == 0) {
    FUN_1428670d0(param_1,param_2);
    local_d0 = 0x4d;
    local_d8 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy
              (local_d8,
               L"UEngine::TickWorldTravel has no world after ticking seamless travel handler.",0x9a)
    ;
    FUN_1428661b0(param_1,*(undefined8 *)(param_2 + 0x288),10,&local_d8);
    if (local_d8 == 0) {
      return;
    }
    FMemory::Free();
    return;
  }
  if (1 < *(int *)(lVar12 + 0x7f8)) {
    *(float *)(lVar12 + 0x800) = *(float *)(lVar12 + 0x800) - param_3;
    lVar12 = *(longlong *)(param_2 + 0x288);
    if (*(float *)(lVar12 + 0x800) <= 0.0) {
      if (*(longlong **)(lVar12 + 0x140) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar12 + 0x140) + 0x7e0))();
        lVar12 = *(longlong *)(param_2 + 0x288);
      }
      puVar15 = (undefined2 *)0x0;
      local_d8 = 0;
      local_d0 = 0;
      local_c0 = *(int *)(lVar12 + 0x7f8);
      lVar10 = (longlong)local_c0;
      pvVar1 = *(void **)(lVar12 + 0x7f0);
      local_c8 = (undefined2 *)0x0;
      puVar16 = puVar15;
      if (local_c0 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,local_c0,0);
        puVar16 = local_c8;
        _guard_xfg_dispatch_icall_nop(local_c8,pvVar1,lVar10 * 2);
        lVar12 = *(longlong *)(param_2 + 0x288);
      }
      puVar14 = puVar16;
      if (local_c0 == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      lVar10 = *param_1;
      uVar9 = FUN_14289aca0(local_b8,param_2 + 0xe8,puVar14,*(undefined4 *)(lVar12 + 0x7ec));
      iVar7 = (**(code **)(lVar10 + 0x440))(param_1,param_2,uVar9,&local_d8);
      if (iVar7 != 0) {
        lVar12 = *(longlong *)(param_2 + 0x288);
        if (lVar12 == 0) {
          FUN_1428670d0(param_1,param_2);
        }
        else {
          puVar11 = (undefined8 *)(lVar12 + 0x7f0);
          if ((undefined *)*puVar11 != &DAT_1451c975c) {
            *(undefined4 *)(lVar12 + 0x7f8) = 0;
            if (*(int *)(lVar12 + 0x7fc) != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar11,0);
              puVar15 = (undefined2 *)(ulonglong)*(uint *)(lVar12 + 0x7f8);
            }
            *(int *)(lVar12 + 0x7f8) = (int)puVar15;
            if (*(int *)(lVar12 + 0x7fc) < (int)puVar15) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar11,puVar15);
            }
          }
        }
        FUN_1428661b0(param_1,*(undefined8 *)(param_2 + 0x288),10,&local_d8);
      }
      goto joined_r0x00014289258e;
    }
  }
  if (*(int *)(param_2 + 0xd8) < 2) {
    plVar2 = *(longlong **)(param_2 + 0x1c8);
    if (plVar2 == (longlong *)0x0) {
      if ((char)param_1[0x113] != '\x06') {
        return;
      }
      *(undefined1 *)(param_1 + 0x113) = 0;
      return;
    }
    (**(code **)(*plVar2 + 0x278))(plVar2,param_3);
    lVar12 = *(longlong *)(param_2 + 0x1c8);
    if (lVar12 == 0) {
      return;
    }
    if ((*(int *)(lVar12 + 0xc0) != 0) && (0 < *(int *)(lVar12 + 0xc0) + -1)) {
      uVar9 = *(undefined8 *)(lVar12 + 0x30);
      *(int *)((longlong)param_1 + 0x9fc) = *(int *)((longlong)param_1 + 0x9fc) + 1;
      bVar4 = false;
      iVar7 = *(int *)((longlong)param_1 + 0x9fc);
      iVar8 = (int)param_1[0x13e] + -1;
      lVar10 = (longlong)iVar8;
      if (-1 < iVar8) {
        lVar13 = lVar10 << 4;
        bVar4 = false;
        do {
          lVar3 = param_1[0x13d];
          if (((*(int *)(lVar13 + 8 + lVar3) == 0) ||
              (plVar2 = *(longlong **)(lVar13 + lVar3), plVar2 == (longlong *)0x0)) ||
             (cVar5 = (**(code **)(*plVar2 + 0x40))(plVar2,0,uVar9,8,lVar12 + 0xb8), cVar5 == '\0'))
          {
            bVar4 = true;
          }
          lVar13 = lVar13 + -0x10;
          lVar10 = lVar10 + -1;
        } while (-1 < lVar10);
        iVar7 = *(int *)((longlong)param_1 + 0x9fc);
      }
      *(int *)((longlong)param_1 + 0x9fc) = iVar7 + -1;
      if (bVar4) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x13d,0);
      }
      (**(code **)(*param_1 + 0x480))(param_1,param_2);
      return;
    }
    if (*(char *)(lVar12 + 0xb0) == '\0') {
      return;
    }
    if (*(char *)(lVar12 + 0xb1) != '\0') {
      return;
    }
    if ((*(longlong **)(param_2 + 0x240) != (longlong *)0x0) &&
       (cVar5 = (**(code **)(**(longlong **)(param_2 + 0x240) + 0x328))(), cVar5 != '\0')) {
      return;
    }
    cVar5 = UEngine::MakeSureMapNameIsValid(param_1,*(longlong *)(param_2 + 0x1c8) + 0x68);
    if (cVar5 == '\0') {
      FUN_1428670d0(param_1,param_2);
      FUN_1428661b0(param_1,*(undefined8 *)(param_2 + 0x288),3,*(longlong *)(param_2 + 0x1c8) + 0x78
                   );
      return;
    }
    lVar12 = *(longlong *)(param_2 + 0x1c8);
    lVar10 = *param_1;
    local_d8 = 0;
    local_d0 = 0;
    uVar9 = FURL::FURL(local_b8,lVar12 + 0x40);
    uVar6 = (**(code **)(lVar10 + 0x450))(param_1,param_2,uVar9,lVar12,&local_d8);
    (**(code **)(**(longlong **)(param_2 + 0x1c8) + 0x290))
              (*(longlong **)(param_2 + 0x1c8),param_1,param_2,uVar6,&local_d8);
    *(undefined8 *)(param_2 + 0x1c8) = 0;
    if (local_d8 == 0) {
      return;
    }
    FMemory::Free();
    return;
  }
  if (*(longlong **)(lVar12 + 0x140) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar12 + 0x140) + 0x7e0))();
  }
  local_c0 = *(int *)(param_2 + 0xd8);
  lVar12 = (longlong)local_c0;
  puVar16 = (undefined2 *)0x0;
  pvVar1 = *(void **)(param_2 + 0xd0);
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = (undefined2 *)0x0;
  if (local_c0 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,local_c0,0);
    puVar16 = local_c8;
    _guard_xfg_dispatch_icall_nop(local_c8,pvVar1,lVar12 * 2);
  }
  lVar12 = *param_1;
  puVar15 = &DAT_143f3eda8;
  if (local_c0 != 0) {
    puVar15 = puVar16;
  }
  uVar9 = FUN_14289aca0(local_b8,param_2 + 0xe8,puVar15,*(undefined1 *)(param_2 + 0xe0));
  iVar7 = (**(code **)(lVar12 + 0x440))(param_1,param_2,uVar9,&local_d8);
  if (iVar7 == 1) {
    lVar12 = *(longlong *)(param_2 + 0x288);
    if (lVar12 == 0) {
      FUN_1428670d0(param_1,param_2);
      lVar12 = *(longlong *)(param_2 + 0x288);
    }
    FUN_1428661b0(param_1,lVar12,0xb,&local_d8);
  }
joined_r0x00014289258e:
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1428927f0 FUN_1428927f0 body=466 status=ok
// SIG undefined FUN_1428927f0(void)

wchar_t ** FUN_1428927f0(wchar_t **param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *_Source;
  int iVar5;
  undefined8 local_res10;
  wchar_t *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_res10 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b18204) && (_Init_thread_header(&DAT_146b18204), DAT_146b18204 == -1))
  {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1465354c8,0);
    FGenericPlatformString::Memcpy(DAT_1465354c8,L"_Template",0x14);
    atexit((_func_5014 *)&LAB_143ebd5e0);
    _Init_thread_footer(&DAT_146b18204);
  }
  FName::ToString(&local_res10,param_1);
  cVar1 = FString::EndsWith(param_1,&DAT_1465354c8,1);
  if (cVar1 != '\0') {
    pwVar4 = (wchar_t *)0x0;
    iVar5 = 0;
    iVar2 = (int)DAT_1465354d0 + -1;
    if ((int)DAT_1465354d0 == 0) {
      iVar2 = iVar5;
    }
    if (*(int *)(param_1 + 1) == 0) {
      _Source = L"";
      iVar3 = iVar5;
    }
    else {
      _Source = *param_1;
      iVar3 = *(int *)(param_1 + 1) + -1;
    }
    iVar2 = iVar3 - iVar2;
    if ((-1 < iVar2) && (iVar5 = iVar3, iVar2 < iVar3)) {
      iVar5 = iVar2;
    }
    local_28 = (wchar_t *)0x0;
    local_1c = 0;
    iVar2 = iVar5 + 1;
    if (iVar5 == 0) {
      iVar2 = 0;
    }
    local_20 = iVar2;
    if ((0 < iVar2) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0), iVar2 = local_20,
       pwVar4 = local_28, 0 < local_20)) {
      wcsncpy(local_28,_Source,(longlong)iVar5);
      pwVar4[iVar5] = L'\0';
    }
    if (param_1 != &local_28) {
      if (*param_1 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      *param_1 = pwVar4;
      *(int *)(param_1 + 1) = iVar2;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
      return param_1;
    }
    if (pwVar4 != (wchar_t *)0x0) {
      FMemory::Free(pwVar4);
    }
  }
  return param_1;
}



// FUNCTION 1428929d0 FUN_1428929d0 body=473 status=ok
// SIG undefined FUN_1428929d0(void)

undefined8 FUN_1428929d0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  bool bVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined2 *puVar9;
  longlong local_res8 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  
  bVar6 = false;
  puVar9 = &DAT_143f3eda8;
  local_res8[0] = 0;
  bVar2 = false;
  if (((int)param_1[1] == 0) || ((longlong *)*param_1 == (longlong *)0x0)) {
LAB_142892a24:
    local_res8[1] = 0;
    if (param_1[3] != 0) {
      lVar4 = FWeakObjectPtr::Get(param_1 + 2);
      if (lVar4 != 0) {
        lVar4 = UObject::FindFunction(lVar4,param_1[3]);
        if (lVar4 != 0) {
          lVar4 = FWeakObjectPtr::Get(param_1 + 2);
          local_res8[0] = param_1[3];
          bVar1 = true;
          bVar2 = true;
          if (lVar4 != 0) {
            puVar5 = (undefined8 *)UObjectBaseUtility::GetPathName(lVar4,local_38,0);
            if (*(int *)(puVar5 + 1) == 0) {
              pwVar7 = L"";
              bVar6 = true;
            }
            else {
              pwVar7 = (wchar_t *)*puVar5;
              bVar6 = true;
            }
            goto LAB_142892ad7;
          }
          goto LAB_142892ad0;
        }
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b18210) {
      _Init_thread_header(&DAT_146b18210);
      if (DAT_146b18210 == -1) {
        FName::FName(&DAT_146b18208,L"NotBound!",1);
        _Init_thread_footer(&DAT_146b18210);
      }
    }
    local_res8[0] = DAT_146b18208;
  }
  else {
    cVar3 = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if (cVar3 == '\0') goto LAB_142892a24;
  }
LAB_142892ad0:
  bVar1 = bVar2;
  pwVar7 = L"NO OBJ";
LAB_142892ad7:
  puVar5 = (undefined8 *)FName::ToString(local_res8,local_48);
  if (*(int *)(puVar5 + 1) != 0) {
    puVar9 = (undefined2 *)*puVar5;
  }
  pwVar8 = L"DYN DELEGATE";
  if (bVar1) {
    pwVar8 = L"DELEGATE";
  }
  FString::PrintfImpl(param_2,L"%s,%s,%s",pwVar8,pwVar7,puVar9);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if ((bVar6) && (local_38[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142892bb0 FUN_142892bb0 body=1203 status=ok
// SIG undefined FUN_142892bb0(void)

undefined8 FUN_142892bb0(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  short *psVar7;
  uint uVar8;
  int iVar9;
  longlong local_38;
  undefined8 local_30;
  
  if (param_3 == (longlong *)0x0) {
    return 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b18480) && (_Init_thread_header(&DAT_146b18480), DAT_146b18480 == -1))
  {
    atexit(FUN_143ebd190);
    _Init_thread_footer(&DAT_146b18480);
  }
  iVar9 = 0;
  if (DAT_146b1846c == '\0') {
    DAT_146b1846c = '\x01';
    local_38 = 0;
    local_30 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    lVar2 = local_38;
    FGenericPlatformString::Memcpy(local_38,&DAT_1451c91e0,8);
    iVar3 = DAT_146b18478;
    lVar5 = (longlong)DAT_146b18478;
    DAT_146b18478 = DAT_146b18478 + 1;
    if (DAT_146b1847c < DAT_146b18478) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146b18470,iVar3);
    }
    plVar4 = (longlong *)(lVar5 * 0x10 + DAT_146b18470);
    local_38 = 0;
    *plVar4 = lVar2;
    *(undefined4 *)(plVar4 + 1) = (undefined4)local_30;
    *(undefined4 *)((longlong)plVar4 + 0xc) = local_30._4_4_;
    local_30 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    lVar2 = local_38;
    FGenericPlatformString::Memcpy(local_38,L"Unit",10);
    iVar3 = DAT_146b18478;
    lVar5 = (longlong)DAT_146b18478;
    DAT_146b18478 = DAT_146b18478 + 1;
    if (DAT_146b1847c < DAT_146b18478) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146b18470,iVar3);
    }
    plVar4 = (longlong *)(lVar5 * 0x10 + DAT_146b18470);
    local_38 = 0;
    *plVar4 = lVar2;
    *(undefined4 *)(plVar4 + 1) = (undefined4)local_30;
    *(undefined4 *)((longlong)plVar4 + 0xc) = local_30._4_4_;
    local_30 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    lVar2 = local_38;
    FGenericPlatformString::Memcpy(local_38,L"UnitMax",0x10);
    iVar3 = DAT_146b18478;
    lVar5 = (longlong)DAT_146b18478;
    DAT_146b18478 = DAT_146b18478 + 1;
    if (DAT_146b1847c < DAT_146b18478) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146b18470,iVar3);
    }
    plVar4 = (longlong *)(lVar5 * 0x10 + DAT_146b18470);
    local_38 = 0;
    *plVar4 = lVar2;
    *(undefined4 *)(plVar4 + 1) = (undefined4)local_30;
    *(undefined4 *)((longlong)plVar4 + 0xc) = local_30._4_4_;
    local_30 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    lVar2 = local_38;
    FGenericPlatformString::Memcpy(local_38,L"UnitGraph",0x14);
    iVar3 = DAT_146b18478;
    lVar5 = (longlong)DAT_146b18478;
    DAT_146b18478 = DAT_146b18478 + 1;
    if (DAT_146b1847c < DAT_146b18478) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146b18470,iVar3);
    }
    plVar4 = (longlong *)(lVar5 * 0x10 + DAT_146b18470);
    local_38 = 0;
    *plVar4 = lVar2;
    *(undefined4 *)(plVar4 + 1) = (undefined4)local_30;
    *(undefined4 *)((longlong)plVar4 + 0xc) = local_30._4_4_;
    local_30 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    lVar2 = local_38;
    FGenericPlatformString::Memcpy(local_38,&DAT_1451c9220,8);
    iVar3 = DAT_146b18478;
    lVar5 = (longlong)DAT_146b18478;
    DAT_146b18478 = DAT_146b18478 + 1;
    if (DAT_146b1847c < DAT_146b18478) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146b18470,iVar3);
    }
    plVar4 = (longlong *)(lVar5 * 0x10 + DAT_146b18470);
    *plVar4 = lVar2;
    *(undefined4 *)(plVar4 + 1) = (undefined4)local_30;
    *(undefined4 *)((longlong)plVar4 + 0xc) = local_30._4_4_;
  }
  if ((param_4 != 0) && (cVar1 = FParse::Param(param_4,L"Skip"), cVar1 != '\0')) {
    return 1;
  }
  local_38 = 0;
  local_30 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"Detailed",0x12);
  cVar1 = (**(code **)(*param_3 + 0x150))(param_3,&local_38);
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (0 < DAT_146b18478) {
    do {
      iVar3 = (DAT_146b18478 - iVar9) + -1;
      if (cVar1 != '\0') {
        iVar3 = iVar9;
      }
      puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + DAT_146b18470);
      if (*(int *)(puVar6 + 1) == 0) {
        psVar7 = &DAT_143f3eda8;
      }
      else {
        psVar7 = (short *)*puVar6;
      }
      local_38 = 0;
      local_30 = 0;
      lVar2 = 0;
      if ((psVar7 != (short *)0x0) && (lVar2 = 0, *psVar7 != 0)) {
        lVar2 = -1;
        do {
          lVar5 = lVar2 + 1;
          lVar2 = lVar2 + 1;
        } while (psVar7[lVar5] != 0);
        uVar8 = (int)lVar2 + 1;
        local_30 = (ulonglong)uVar8;
        if (0 < (int)uVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        }
        lVar2 = local_38;
        FGenericPlatformString::Memcpy(local_38,psVar7,(longlong)(int)uVar8 * 2);
      }
      FUN_14288d430(param_1,param_2,param_3,&local_38,cVar1);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < DAT_146b18478);
  }
  local_30 = 9;
  local_38 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  lVar2 = local_38;
  FGenericPlatformString::Memcpy(local_38,L"UnitTime",0x12);
  FUN_14288d430(param_1,param_2,param_3,&local_38,cVar1 == '\0');
  if (lVar2 != 0) {
    FMemory::Free(lVar2);
  }
  return 1;
}



// FUNCTION 142893070 ToggleStatFPS body=259 status=ok
// SIG undefined ToggleStatFPS(void)

undefined8 UEngine::ToggleStatFPS(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  char cVar2;
  longlong local_18 [2];
  
  local_18[1] = 4;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],&DAT_1451c9338,8);
  cVar1 = (**(code **)(*param_3 + 0x150))(param_3,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Detailed",0x12);
  cVar2 = (**(code **)(*param_3 + 0x150))(param_3,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if ((cVar1 == '\0') && (cVar2 != '\0')) {
    ExecEngineStat(param_1,param_2,param_3,L"Detailed -Skip");
  }
  return 1;
}



// FUNCTION 142893180 ToggleStatHitches body=24 status=ok
// SIG undefined ToggleStatHitches(void)

undefined1 UEngine::ToggleStatHitches(void)

{
  FUN_1416b1760(0x3de147ae);
  return 0;
}



// FUNCTION 1428931a0 FUN_1428931a0 body=286 status=ok
// SIG undefined FUN_1428931a0(void)

ulonglong FUN_1428931a0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  ulonglong in_RAX;
  undefined4 extraout_var;
  ulonglong uVar3;
  wchar_t *_Str;
  undefined8 local_res20;
  wchar_t *local_18;
  undefined8 local_10;
  
  if (param_3 != (longlong *)0x0) {
    local_10 = 0xc;
    local_18 = (wchar_t *)0x0;
    local_res20 = param_4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"NamedEvents",0x18);
    in_RAX = (**(code **)(*param_3 + 0x150))(param_3,&local_18);
    cVar1 = (char)in_RAX;
    if (local_18 != (wchar_t *)0x0) {
      in_RAX = FMemory::Free();
    }
    if (cVar1 == '\0') {
      DAT_1468c21d4 = 0;
    }
    else {
      local_18 = (wchar_t *)0x0;
      local_10 = 0;
      cVar1 = FParse::Token(&local_res20,&local_18,0);
      if ((((cVar1 == '\0') || ((int)local_10 == 0)) || ((int)local_10 + -1 < 1)) ||
         (cVar1 = FString::IsNumeric(&local_18), cVar1 == '\0')) {
        in_RAX = 0x7fffffff;
        if (0 < (int)*DAT_146b175e8) {
          in_RAX = (ulonglong)*DAT_146b175e8;
        }
      }
      else {
        _Str = L"";
        if ((int)local_10 != 0) {
          _Str = local_18;
        }
        iVar2 = _wtoi(_Str);
        in_RAX = CONCAT44(extraout_var,iVar2);
        if (iVar2 < 2) {
          in_RAX = 0x7fffffff;
        }
      }
      DAT_1468c21d4 = (undefined4)in_RAX;
      if (local_18 != (wchar_t *)0x0) {
        uVar3 = FMemory::Free();
        return uVar3 & 0xffffffffffffff00;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1428932c0 ToggleStatUnit body=469 status=ok
// SIG undefined ToggleStatUnit(void)

undefined8 UEngine::ToggleStatUnit(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  longlong local_28 [2];
  
  if (param_3 == (longlong *)0x0) {
    return 0;
  }
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"UnitMax",0x10);
  cVar2 = (**(code **)(*param_3 + 0x150))(param_3,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (cVar2 != '\0') {
    ExecEngineStat(param_1,param_2,param_3,L"UnitMax");
    local_28[0] = 0;
    local_28[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    lVar1 = local_28[0];
    FGenericPlatformString::Memcpy(local_28[0],L"Unit",10);
    FUN_14288d430(param_1,param_2,param_3,local_28,1);
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
  }
  local_28[0] = 0;
  local_28[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"Unit",10);
  cVar2 = (**(code **)(*param_3 + 0x150))(param_3,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"Detailed",0x12);
  cVar3 = (**(code **)(*param_3 + 0x150))(param_3,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if ((cVar2 == '\0') && (cVar3 != '\0')) {
    ExecEngineStat(param_1,param_2,param_3,L"Detailed -Skip");
  }
  return 1;
}



// FUNCTION 1428934a0 FUN_1428934a0 body=415 status=ok
// SIG undefined FUN_1428934a0(void)

void FUN_1428934a0(void)

{
  undefined8 *puVar1;
  char cVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  
  FUN_14172d470(0,1);
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar2 = FUN_1415ad720(&DAT_1468e2448), cVar2 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)))) {
    FUN_14286d4e0(local_res8,2,local_res10);
  }
  else {
    pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar5 = TlsGetValue(*pDVar4);
    plVar9 = (longlong *)0x0;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)operator_new(0x18);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = 0;
        plVar5[1] = 0;
        *(undefined4 *)(plVar5 + 2) = 0;
        plVar9 = plVar5;
      }
      TlsSetValue(*pDVar4,plVar9);
      plVar5 = plVar9;
    }
    plVar9 = (longlong *)plVar5[1];
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar5;
      if (plVar9 == (longlong *)0x0) {
        lVar6 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar4 + 2);
        plVar5[1] = lVar6;
        if (lVar6 == 0) {
          puVar7 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar5[1] = (longlong)puVar7;
          lVar6 = 0x1f;
          do {
            puVar1 = puVar7 + 0x20;
            *puVar7 = puVar1;
            lVar6 = lVar6 + -1;
            puVar7 = puVar1;
          } while (lVar6 != 0);
          *puVar1 = 0;
        }
        plVar9 = (longlong *)plVar5[1];
        iVar10 = 0x20;
        *(undefined4 *)(plVar5 + 2) = 0x20;
      }
      else {
        iVar10 = 0x20;
        plVar5[1] = (longlong)plVar9;
        *(undefined4 *)(plVar5 + 2) = 0x20;
        *plVar5 = 0;
      }
    }
    else {
      iVar10 = (int)plVar5[2];
    }
    plVar5[1] = *plVar9;
    local_res18 = 0;
    *(int *)(plVar5 + 2) = iVar10 + -1;
    *(undefined4 *)(plVar9 + 1) = 0xff;
    *plVar9 = (longlong)&PTR_FUN_143f3edd8;
    local_res20 = 0;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_1451df4b8;
    *(undefined1 *)((longlong)plVar9 + 0x11) = 0;
    plVar9[3] = 0;
    FUN_140445370(plVar9,0,0xff,1);
  }
  FUN_141ee24f0(0);
  uVar8 = FUN_14164bd40();
  TBaseMulticastDelegate<void>::Broadcast(uVar8);
  return;
}



// FUNCTION 142893640 UnRegisterTickFunction body=42 status=ok
// SIG undefined UnRegisterTickFunction(void)

void FTickFunction::UnRegisterTickFunction(longlong param_1)

{
  if (*(char *)(param_1 + 0xd) != '\0') {
    FUN_142873fe0();
    FTickTaskLevel::RemoveTickFunction(*(undefined8 *)(param_1 + 0x48),param_1);
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  return;
}



// FUNCTION 142893670 FUN_142893670 body=679 status=ok
// SIG undefined FUN_142893670(void)

void FUN_142893670(longlong param_1,longlong param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = *(undefined8 *)(param_1 + 0x10);
  }
  if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (param_3 != '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    local_res8 = 0;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59420;
    puVar7[2] = 0;
    *(undefined4 *)(puVar7 + 3) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar2;
    *(undefined4 *)(puVar7 + 4) = uVar1;
    *(undefined4 *)((longlong)puVar7 + 0x24) = 0x3f800000;
    FUN_141ad74f0(param_2,*(undefined8 *)(param_1 + -8),0,4,0x22,1);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0xe0) & 4) != 0) {
    uVar3 = *(undefined8 *)(param_1 + -8);
    if (*(int *)(param_2 + 0x14) != 0) {
      FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,param_2);
    }
    FUN_141ed93a0(param_2);
    if (DAT_146ab6383 != '\0') {
      FRHICommandListBase::WaitForRHIThreadTasks(param_2);
    }
    FRHICommandListBase::WaitForTasks(param_2,1);
    (**(code **)(*DAT_146ab6358 + 600))(DAT_146ab6358,uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + -0x48);
  plVar4 = *(longlong **)(param_1 + -8);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 10;
  if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar7 + 10;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar5;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar7;
  *(undefined8 **)(param_2 + 8) = puVar7 + 1;
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_143f489f0;
  *(undefined4 *)(puVar7 + 2) = 0;
  *(undefined4 *)((longlong)puVar7 + 0x14) = 0xffffffff;
  *(undefined4 *)(puVar7 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = 0xffffffff;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined4 *)((longlong)puVar7 + 0x24) = 0xffffffff;
  *(undefined4 *)(puVar7 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)puVar7 + 0x2c) = 0xffffffff;
  *(undefined4 *)(puVar7 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)puVar7 + 0x34) = 0;
  *(undefined4 *)(puVar7 + 7) = 0;
  *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
  puVar7[8] = plVar4;
  puVar7[9] = uVar3;
  lVar6 = (**(code **)(*plVar4 + 8))(plVar4);
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*(longlong *)puVar7[8] + 0x18))();
    if (lVar6 == 0) {
      (**(code **)(*(longlong *)puVar7[8] + 0x20))();
    }
  }
  lVar6 = (**(code **)(*(longlong *)puVar7[9] + 8))();
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*(longlong *)puVar7[9] + 0x18))();
    if (lVar6 == 0) {
      (**(code **)(*(longlong *)puVar7[9] + 0x20))();
    }
  }
  return;
}



// FUNCTION 142893920 FUN_142893920 body=1851 status=ok
// SIG undefined FUN_142893920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142893920(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong *puVar16;
  int iVar17;
  undefined4 *puVar18;
  bool bVar19;
  undefined1 auStack_388 [32];
  char local_368;
  undefined4 local_360;
  undefined4 local_35c;
  undefined8 local_358;
  undefined8 uStack_350;
  int local_348;
  undefined8 local_344;
  undefined8 uStack_33c;
  undefined8 local_334;
  undefined8 uStack_32c;
  undefined8 local_324;
  undefined4 local_31c;
  undefined8 local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined2 local_308;
  undefined6 uStack_306;
  longlong local_2f8;
  longlong local_2f0 [4];
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined2 local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined2 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 local_284;
  undefined2 local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined2 local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 local_254;
  undefined2 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined2 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_224;
  undefined2 local_220;
  undefined4 local_218;
  undefined1 local_214;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined2 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined2 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined2 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined2 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined2 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined2 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined2 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined2 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined2 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined4 local_f0 [3];
  undefined8 local_e4 [19];
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  local_368 = param_3;
  local_2f8 = param_1;
  (**(code **)(*(longlong *)(param_1 + -0x10) + 0x20))(param_1 + -0x10,&local_360);
  iVar17 = 0;
  do {
    puVar16 = (ulonglong *)(param_2 + 0x30);
    lVar11 = *(longlong *)(param_1 + -8);
    if (param_3 == '\0') {
      FUN_141a19150(param_2,lVar11,0,1);
      uVar6 = local_35c;
      uVar5 = local_360;
      puVar12 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar12 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
        FMemStackBase::AllocateNewChunk(puVar16,0x30);
        puVar12 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
        puVar15 = puVar12 + 5;
      }
      *puVar16 = (ulonglong)puVar15;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar12;
      *(undefined8 **)(param_2 + 8) = puVar12 + 1;
      puVar12[1] = 0;
      *puVar12 = &PTR_LAB_143f59420;
      puVar12[2] = 0;
      *(undefined4 *)(puVar12 + 3) = 0;
      *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar5;
      *(undefined4 *)(puVar12 + 4) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
    }
    else {
      bVar19 = lVar11 != 0;
      if (bVar19) {
        local_2f0[0] = lVar11;
      }
      uVar14 = (ulonglong)bVar19;
      puVar15 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
      uVar13 = (uint)bVar19 * 8;
      uVar8 = (ulonglong)uVar13 + (longlong)puVar15;
      if (*(ulonglong *)(param_2 + 0x38) < uVar8) {
        FMemStackBase::AllocateNewChunk(puVar16,uVar13 + 8);
        puVar15 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
        uVar8 = (ulonglong)uVar13 + (longlong)puVar15;
      }
      *puVar16 = uVar8;
      if (bVar19 != 0) {
        puVar12 = puVar15;
        do {
          *puVar12 = *(undefined8 *)((longlong)puVar12 + ((longlong)local_2f0 - (longlong)puVar15));
          puVar12 = puVar12 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar10 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar12) {
        FMemStackBase::AllocateNewChunk(puVar16,0x30);
        puVar10 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar10 + 5;
      }
      *puVar16 = (ulonglong)puVar12;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      uStack_30c = 0xffffffff;
      local_308 = 0x102;
      **(undefined8 **)(param_2 + 8) = puVar10;
      *(undefined8 **)(param_2 + 8) = puVar10 + 1;
      puVar10[1] = 0;
      *(uint *)(puVar10 + 2) = (uint)bVar19;
      *puVar10 = &PTR_LAB_143f59470;
      puVar10[3] = puVar15;
      *(undefined4 *)(puVar10 + 4) = 1;
      *(undefined1 *)((longlong)puVar10 + 0x24) = 0;
      local_318 = *(undefined8 *)(param_1 + -8);
      uStack_310 = 0;
      local_358 = 0;
      uStack_350 = 0;
      local_2c0 = 0;
      local_2b8 = 0;
      local_2b4 = 0xffffffff;
      local_2b0 = 0;
      local_2a8 = 0;
      local_2a0 = 0;
      local_29c = 0xffffffff;
      local_298 = 0;
      local_290 = 0;
      local_288 = 0;
      local_284 = 0xffffffff;
      local_280 = 0;
      local_278 = 0;
      local_270 = 0;
      local_26c = 0xffffffff;
      local_268 = 0;
      local_260 = 0;
      local_258 = 0;
      local_254 = 0xffffffff;
      local_250 = 0;
      local_248 = 0;
      local_240 = 0;
      local_23c = 0xffffffff;
      local_238 = 0;
      local_230 = 0;
      local_228 = 0;
      local_224 = 0xffffffff;
      local_220 = 0;
      local_218 = 1;
      local_214 = 1;
      local_210 = 0;
      local_208 = 0;
      local_204 = 0xffffffff;
      local_200 = 0;
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 0xffffffff;
      local_1e8 = 0;
      local_1e0 = 0;
      local_1d8 = 0;
      local_1d4 = 0xffffffff;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1bc = 0xffffffff;
      local_1b8 = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      local_1a4 = 0xffffffff;
      local_1a0 = 0;
      local_198 = 0;
      local_190 = 0;
      local_18c = 0xffffffff;
      local_188 = 0;
      local_180 = 0;
      local_178 = 0;
      local_174 = 0xffffffff;
      local_170 = 0;
      local_168 = 0;
      local_160 = 0;
      lVar11 = 8;
      local_15c = 0xffffffff;
      local_148 = 0;
      uStack_140 = 0;
      puVar15 = local_e4;
      local_158 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_150 = 0;
      local_138 = 0;
      local_130 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_f8 = 0;
      local_f0[0] = 0;
      do {
        puVar15[-1] = 1;
        *puVar15 = 0;
        *(undefined4 *)(puVar15 + 1) = 0;
        puVar15 = (undefined8 *)((longlong)puVar15 + 0x14);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      uStack_2d0 = 0xffffffff00000000;
      local_2c8 = CONCAT62(uStack_306,0x102);
      local_4c = 0;
      local_2f0[3] = local_318;
      FRHICommandListBase::CacheActiveRenderTargets(param_2,1,local_2f0 + 3,&local_148);
      puVar12 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar12 + 0x54;
      if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
        FMemStackBase::AllocateNewChunk(puVar16,0x2a8);
        puVar12 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
        puVar15 = puVar12 + 0x54;
      }
      *puVar16 = (ulonglong)puVar15;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar12;
      *(undefined8 **)(param_2 + 8) = puVar12 + 1;
      puVar12[1] = 0;
      *puVar12 = &PTR_FUN_1444d5488;
      FUN_140c63680(puVar12 + 2,local_2f0 + 3);
      uVar6 = local_35c;
      uVar5 = local_360;
      puVar12 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar12 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
        FMemStackBase::AllocateNewChunk(puVar16,0x30);
        puVar12 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
        puVar15 = puVar12 + 5;
      }
      *puVar16 = (ulonglong)puVar15;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar12;
      *(undefined8 **)(param_2 + 8) = puVar12 + 1;
      puVar12[1] = 0;
      *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar5;
      lVar11 = 8;
      puVar12[2] = 0;
      *(undefined4 *)(puVar12 + 3) = 0;
      puVar18 = local_f0;
      *puVar12 = &PTR_LAB_143f59420;
      *(undefined4 *)(puVar12 + 4) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
      do {
        puVar15 = *(undefined8 **)(puVar18 + -2);
        puVar18 = puVar18 + -2;
        lVar11 = lVar11 + -1;
        if (puVar15 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            if ((*(char *)(puVar15 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
              LOCK();
              bVar19 = *(int *)((longlong)puVar15 + 0xc) == 0;
              if (bVar19) {
                *(int *)((longlong)puVar15 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar19) {
                uVar13 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar13 == 0) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = (&DAT_1468a81f8)[uVar13 >> 0xe] + (ulonglong)(uVar13 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar9 + 8) = puVar15;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar15)(puVar15,1);
            }
          }
        }
        param_1 = local_2f8;
      } while (lVar11 != 0);
    }
    puVar16 = (ulonglong *)(param_2 + 0x30);
    plVar3 = *(longlong **)(param_1 + -8);
    puVar12 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
    local_31c = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    local_344 = 0xffffffffffffffff;
    uStack_33c = 0xffffffffffffffff;
    local_324 = 0;
    puVar15 = puVar12 + 10;
    local_334 = 0xffffffffffffffff;
    uStack_32c = 0xffffffffffffffff;
    local_348 = iVar17;
    if (*(undefined8 **)(param_2 + 0x38) < puVar15) {
      FMemStackBase::AllocateNewChunk(puVar16,0x58);
      puVar12 = (undefined8 *)(*puVar16 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar12 + 10;
    }
    *puVar16 = (ulonglong)puVar15;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar12;
    *(undefined8 **)(param_2 + 8) = puVar12 + 1;
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_143f489f0;
    *(int *)(puVar12 + 2) = local_348;
    *(undefined4 *)((longlong)puVar12 + 0x14) = (undefined4)local_344;
    *(undefined4 *)(puVar12 + 3) = local_344._4_4_;
    *(undefined4 *)((longlong)puVar12 + 0x1c) = (undefined4)uStack_33c;
    *(undefined4 *)(puVar12 + 4) = uStack_33c._4_4_;
    *(undefined4 *)((longlong)puVar12 + 0x24) = (undefined4)local_334;
    *(undefined4 *)(puVar12 + 5) = local_334._4_4_;
    *(undefined4 *)((longlong)puVar12 + 0x2c) = (undefined4)uStack_32c;
    *(undefined4 *)(puVar12 + 6) = uStack_32c._4_4_;
    *(undefined4 *)((longlong)puVar12 + 0x34) = (undefined4)local_324;
    *(undefined4 *)(puVar12 + 7) = local_324._4_4_;
    *(undefined4 *)((longlong)puVar12 + 0x3c) = local_31c;
    puVar12[8] = plVar3;
    puVar12[9] = uVar4;
    lVar11 = (**(code **)(*plVar3 + 8))(plVar3);
    if ((lVar11 == 0) && (lVar11 = (**(code **)(*(longlong *)puVar12[8] + 0x18))(), lVar11 == 0)) {
      (**(code **)(*(longlong *)puVar12[8] + 0x20))();
    }
    lVar11 = (**(code **)(*(longlong *)puVar12[9] + 8))();
    if ((lVar11 == 0) && (lVar11 = (**(code **)(*(longlong *)puVar12[9] + 0x18))(), lVar11 == 0)) {
      (**(code **)(*(longlong *)puVar12[9] + 0x20))();
    }
    iVar17 = iVar17 + 1;
    param_3 = local_368;
  } while (iVar17 < 6);
  return;
}



// FUNCTION 142894060 FUN_142894060 body=113 status=ok
// SIG undefined FUN_142894060(void)

void FUN_142894060(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_1 + 0xa30);
  if (plVar1 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0xa50) == '\0') {
      if ((*DAT_146b17628 == 2) || ((*DAT_146b17628 == 1 && (*(char *)(param_1 + 0xa51) != '\0'))))
      {
        cVar3 = '\x01';
      }
      else {
        cVar3 = '\0';
      }
    }
    else {
      cVar3 = '\0';
    }
    cVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
    if (cVar3 != cVar2) {
      (**(code **)(**(longlong **)(param_1 + 0xa30) + 0x30))(*(longlong **)(param_1 + 0xa30),cVar3);
    }
  }
  return;
}



// FUNCTION 1428940e0 FUN_1428940e0 body=441 status=ok
// SIG undefined FUN_1428940e0(void)

void FUN_1428940e0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  
  uVar7 = (ulonglong)(int)DAT_146b17740;
  plVar9 = DAT_146b17738 + uVar7 * 5;
  if (DAT_146b17738 != plVar9) {
    plVar1 = (longlong *)(param_1 + 0xbd0);
    plVar8 = DAT_146b17738;
    do {
      plVar2 = (longlong *)*plVar1;
      if (plVar2 != plVar2 + (longlong)*(int *)(param_1 + 0xbd8) * 5) {
        plVar5 = plVar2;
        do {
          if (*plVar5 == *plVar8) {
            iVar10 = (int)(((longlong)plVar5 - (longlong)plVar2) / 0x28);
            if (iVar10 != -1) {
              if (plVar2[(longlong)iVar10 * 5 + 3] != 0) {
                FMemory::Free();
              }
              iVar4 = *(int *)(param_1 + 0xbd8);
              iVar3 = (iVar4 - iVar10) + -1;
              if (iVar3 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar10 * 0x28 + *plVar1),
                           (void *)(*plVar1 + (longlong)(iVar10 + 1) * 0x28),(longlong)iVar3 * 0x28)
                ;
                iVar4 = *(int *)(param_1 + 0xbd8);
              }
              *(int *)(param_1 + 0xbd8) = iVar4 + -1;
              TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(plVar1);
            }
            break;
          }
          plVar5 = plVar5 + 5;
        } while (plVar5 != plVar2 + (longlong)*(int *)(param_1 + 0xbd8) * 5);
      }
      iVar10 = *(int *)(param_1 + 0xbd8);
      *(int *)(param_1 + 0xbd8) = iVar10 + 1;
      if (*(int *)(param_1 + 0xbdc) < iVar10 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
      }
      FUN_14285fe40(*plVar1 + (longlong)iVar10 * 0x28,plVar8);
      plVar8 = plVar8 + 5;
    } while (plVar8 != plVar9);
    uVar7 = (ulonglong)DAT_146b17740;
  }
  if ((int)uVar7 != 0) {
    plVar9 = DAT_146b17738 + 3;
    do {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 5;
      uVar6 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 != 0);
  }
  DAT_146b17740 = 0;
  if (DAT_146b17744 != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (&DAT_146b17738,0);
  }
  return;
}



// FUNCTION 1428942a0 FUN_1428942a0 body=127 status=ok
// SIG undefined FUN_1428942a0(void)

void FUN_1428942a0(longlong param_1)

{
  undefined1 local_res8 [32];
  
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    (**(code **)(*DAT_146ab6358 + 0x348))(DAT_146ab6358,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 8,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    (**(code **)(*DAT_146ab6358 + 0x350))(DAT_146ab6358,local_res8,*(undefined8 *)(param_1 + 0xb8));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x138,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  }
  return;
}



// FUNCTION 142894320 FUN_142894320 body=521 status=ok
// SIG undefined FUN_142894320(void)

void FUN_142894320(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  LARGE_INTEGER local_res8 [2];
  longlong local_res18;
  LARGE_INTEGER local_res20;
  
  lVar12 = *(longlong *)(param_1 + 0x60);
  if (lVar12 != 0) {
    if (DAT_146ac3ac5 == '\0') {
      cVar3 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
         (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
        lVar12 = *(longlong *)(param_1 + 0x60);
        uVar7 = FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_res20);
        (*(code *)**(undefined8 **)(lVar12 + 0x78))(lVar12 + 0x78,uVar7,param_2);
        QueryPerformanceCounter(local_res8);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
        return;
      }
      lVar12 = *(longlong *)(param_1 + 0x60);
    }
    pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar6 = TlsGetValue(*pDVar5);
    plVar10 = (longlong *)0x0;
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)operator_new(0x18);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = 0;
        plVar6[1] = 0;
        *(undefined4 *)(plVar6 + 2) = 0;
        plVar10 = plVar6;
      }
      TlsSetValue(*pDVar5,plVar10);
      plVar6 = plVar10;
    }
    plVar10 = (longlong *)plVar6[1];
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)*plVar6;
      if (plVar10 == (longlong *)0x0) {
        lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
        plVar6[1] = lVar8;
        if (lVar8 == 0) {
          puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar6[1] = (longlong)puVar9;
          lVar8 = 0x1f;
          do {
            puVar2 = puVar9 + 0x20;
            *puVar9 = puVar2;
            lVar8 = lVar8 + -1;
            puVar9 = puVar2;
          } while (lVar8 != 0);
          *puVar2 = 0;
        }
        plVar10 = (longlong *)plVar6[1];
        iVar11 = 0x20;
        *(undefined4 *)(plVar6 + 2) = 0x20;
      }
      else {
        iVar11 = 0x20;
        plVar6[1] = (longlong)plVar10;
        *(undefined4 *)(plVar6 + 2) = 0x20;
        *plVar6 = 0;
      }
    }
    else {
      iVar11 = (int)plVar6[2];
    }
    plVar6[1] = *plVar10;
    *(int *)(plVar6 + 2) = iVar11 + -1;
    *plVar10 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar10 + 1) = 0xff;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *(undefined1 *)(plVar10 + 4) = 0;
    *plVar10 = (longlong)&PTR_FUN_1451de2a8;
    plVar10[5] = 0;
    plVar10[2] = lVar12;
    *(undefined1 *)(plVar10 + 3) = param_2;
    lVar12 = plVar10[5];
    piVar1 = (int *)(lVar12 + 0x48);
    if (lVar12 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_res18 = lVar12;
    FUN_1409421c0(plVar10,0,0xff,1,0,0);
    if (lVar12 != 0) {
      LOCK();
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        FGraphEvent::Recycle(local_res18);
      }
    }
  }
  return;
}



// FUNCTION 142894530 UpdateResources body=157 status=ok
// SIG undefined UpdateResources(void)

void FDeferredUpdateResource::UpdateResources(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_146b177d0;
  if (DAT_14653517d != '\0') {
    while (puVar2 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)puVar2[2];
      puVar2 = (undefined8 *)*puVar2;
      if ((puVar1 != (undefined8 *)0x0) &&
         ((**(code **)*puVar1)(puVar1,param_1,1), *(char *)(puVar1 + 4) != '\0')) {
        if (puVar1[1] != 0) {
          *(undefined8 *)(puVar1[1] + 8) = puVar1[2];
        }
        if ((undefined8 *)puVar1[2] != (undefined8 *)0x0) {
          *(undefined8 *)puVar1[2] = puVar1[1];
        }
        puVar1[1] = 0;
        puVar1[2] = 0;
      }
    }
    DAT_14653517d = '\0';
  }
  return;
}



// FUNCTION 1428945d0 FUN_1428945d0 body=153 status=ok
// SIG undefined FUN_1428945d0(void)

void FUN_1428945d0(longlong *param_1,float param_2,char param_3)

{
  char cVar1;
  
  if ((param_3 != '\0') && (cVar1 = (**(code **)(*param_1 + 0x2d8))(), cVar1 != '\0')) {
    if (param_2 < 0.0) {
      LowLevelFatalErrorHandler
                ("Unknown",0x22ec,
                 L"Negative delta time! Please see https://udn.epicgames.com/lists/showpost.php?list=ue3bugs&id=4364"
                );
      FDebug::AssertFailed
                (&DAT_1451c9d2a,"Unknown",0x22ec,
                 L"Negative delta time! Please see https://udn.epicgames.com/lists/showpost.php?list=ue3bugs&id=4364"
                );
    }
    if (0.2 <= param_2) {
      param_2 = 0.2;
    }
    *(float *)(param_1 + 0x16e) =
         (param_2 - *(float *)(param_1 + 0x16e)) * 0.0033333334 + *(float *)(param_1 + 0x16e);
  }
  return;
}



// FUNCTION 142894670 FUN_142894670 body=1622 status=ok
// SIG undefined FUN_142894670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142894670(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar15;
  code *local_98;
  LARGE_INTEGER *pLStack_90;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  plVar1 = (longlong *)param_1[0xff];
  if ((plVar1 == (longlong *)0x0) ||
     (cVar6 = (**(code **)(*plVar1 + 0x288))(plVar1,param_1), dVar4 = DAT_1464a97d0, cVar6 != '\0'))
  {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b183d8) &&
       (_Init_thread_header(&DAT_146b183d8), DAT_146b183d8 == -1)) {
      QueryPerformanceCounter(&local_res8);
      DAT_146b183d0 =
           (double)CONCAT71(local_res8.QuadPart._1_7_,local_res8.s.LowPart._0_1_) * DAT_1468b02f8 +
           16777215.9999;
      _Init_thread_footer(&DAT_146b183d8);
    }
    cVar6 = DAT_146b183dc;
    if ((DAT_1468b5a25 == '\0') && (DAT_1468b5a26 == '\0')) {
      _DAT_1468b5a80 = DAT_1468b5a78;
      QueryPerformanceCounter(&local_res8);
      dVar4 = (double)CONCAT71(local_res8.QuadPart._1_7_,local_res8.s.LowPart._0_1_) * DAT_1468b02f8
              + 16777216.0;
      if ((DAT_146b183dc != '\0') && ((*(byte *)(param_1 + 0xfc) & 0x40) == 0)) {
        DAT_146b183dc = '\0';
        DAT_146b183d0 = dVar4 - DAT_1464a97d0;
      }
      fVar14 = (float)(dVar4 - DAT_146b183d0);
      DAT_1468b5a78 = dVar4;
      if (fVar14 < 0.0) {
        LowLevelFatalErrorHandler
                  ("Unknown",0x83c,
                   L"Detected negative delta time - on AMD systems please install http://files.aoaforums.com/I3199-setup.zip.html - DeltaTime:%f, bUseFixedFrameRate:%d, bTimeWasManipulatedDebug:%d, FixedFrameRate:%f"
                   ,(double)fVar14,
                   CONCAT44(uVar15,*(uint *)(param_1 + 0xfc) >> 6) & 0xffffffff00000001,cVar6,
                   (double)*(float *)((longlong)param_1 + 0x7e4));
        FDebug::AssertFailed
                  (&DAT_1451c969b,"Unknown",0x83c,
                   L"Detected negative delta time - on AMD systems please install http://files.aoaforums.com/I3199-setup.zip.html - DeltaTime:%f, bUseFixedFrameRate:%d, bTimeWasManipulatedDebug:%d, FixedFrameRate:%f"
                   ,(double)fVar14,*(uint *)(param_1 + 0xfc) >> 6 & 1,cVar6,
                   (double)*(float *)((longlong)param_1 + 0x7e4));
        fVar14 = 0.01;
      }
      (**(code **)(*param_1 + 0x2d0))(param_1,fVar14,1);
      fVar11 = (float)(**(code **)(*param_1 + 0x2b8))(param_1,fVar14,1);
      if ((*(uint *)(param_1 + 0xfc) & 0x40) != 0) {
        fVar11 = *(float *)((longlong)param_1 + 0x7e4);
      }
      fVar13 = 0.0;
      if ((0.0 < fVar11) && (fVar13 = 1.0 / fVar11 - fVar14, fVar13 <= 0.0)) {
        fVar13 = 0.0;
      }
      if (fVar13 <= 0.0) {
        dVar12 = 0.0;
        if (((*(uint *)(param_1 + 0xfc) & 0x40) != 0) &&
           (fVar11 == *(float *)((longlong)param_1 + 0x7e4))) {
          DAT_146b183dc = '\x01';
          DAT_1468b5a78 = DAT_146b183d0 + 1.0 / (double)*(float *)((longlong)param_1 + 0x7e4);
          dVar12 = 0.0;
        }
      }
      else {
        QueryPerformanceCounter(&local_res18);
        QueryPerformanceCounter(&local_res8);
        dVar12 = (double)CONCAT71(local_res8.QuadPart._1_7_,local_res8.s.LowPart._0_1_) *
                 DAT_1468b02f8;
        if (0.005 < fVar13) {
          FUN_1416b1760(fVar13 - 0.002);
        }
        QueryPerformanceCounter(&local_res8);
        dVar3 = (double)CONCAT71(local_res8.QuadPart._1_7_,local_res8.s.LowPart._0_1_) *
                DAT_1468b02f8;
        while (dVar3 + 16777216.0 < (double)fVar13 + dVar4) {
          FUN_1416b1760(0);
          QueryPerformanceCounter(&local_res8);
          dVar3 = (double)CONCAT71(local_res8.QuadPart._1_7_,local_res8.s.LowPart._0_1_) *
                  DAT_1468b02f8;
        }
        QueryPerformanceCounter(&local_res8);
        dVar4 = (double)CONCAT71(local_res8.QuadPart._1_7_,local_res8.s.LowPart._0_1_) *
                DAT_1468b02f8 + 16777216.0;
        DAT_1468b5a78 = dVar4;
        if ((*(byte *)(param_1 + 0xfc) & 0x40) != 0) {
          DAT_146b183dc = '\x01';
          DAT_1468b5a78 = DAT_146b183d0 + 1.0 / (double)*(float *)((longlong)param_1 + 0x7e4);
        }
        QueryPerformanceCounter(&local_res8);
        pLStack_90 = &local_res8;
        lVar9 = CONCAT71(local_res8.QuadPart._1_7_,local_res8.s.LowPart._0_1_);
        local_res8.s.LowPart._0_1_ = 0;
        local_98 = FUN_1415a3f40;
        dVar12 = (double)lVar9 * DAT_1468b02f8 - dVar12;
        lVar9 = FUN_1415d8310(&local_98,&DAT_1464a8c00);
        QueryPerformanceCounter(&local_res10);
        *(int *)(lVar9 + 0x18) =
             *(int *)(lVar9 + 0x18) + (local_res10.s.LowPart - local_res18._0_4_);
      }
      DAT_1464a97d0 = DAT_1468b5a78 - DAT_146b183d0;
      DAT_1468b5a90 = dVar12 - (double)fVar13;
      if (DAT_1468b5a90 <= 0.0) {
        DAT_1468b5a90 = 0.0;
      }
      DAT_1468b5a88 = dVar12;
      if (DAT_1464a97d0 < 0.0) {
        LowLevelFatalErrorHandler
                  ("Unknown",0x8a2,
                   L"Detected negative delta time - on AMD systems please install http://files.aoaforums.com/I3199-setup.zip.html"
                  );
        FDebug::AssertFailed
                  (&DAT_1451c969e,"Unknown",0x8a2,
                   L"Detected negative delta time - on AMD systems please install http://files.aoaforums.com/I3199-setup.zip.html"
                  );
        DAT_1464a97d0 = 0.01;
      }
      DAT_146b183d0 = dVar4;
      lVar9 = FUN_142937670();
      if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      dVar4 = DAT_1464a97d0;
      if ((bVar5) && (fVar14 = *(float *)(param_1 + 0x23a), 0.0 < fVar14)) {
        iVar7 = 0;
        if (0 < (int)param_1[0x184]) {
          puVar10 = (undefined8 *)param_1[0x183];
          do {
            if ((*(char *)*puVar10 == '\x01') && (*(longlong *)((char *)*puVar10 + 0x240) != 0)) {
              lVar9 = ((undefined8 *)param_1[0x183])[iVar7];
              lVar2 = *(longlong *)(lVar9 + 0x288);
              iVar7 = FUN_14046e5c0(*(undefined8 *)(lVar9 + 0x240));
              dVar4 = DAT_1464a97d0;
              if ((lVar2 != 0) &&
                 (((plVar1 = *(longlong **)(lVar2 + 0x140), plVar1 != (longlong *)0x0 &&
                   (iVar8 = (**(code **)(*plVar1 + 0x760))(), dVar4 = DAT_1464a97d0, iVar8 == iVar7)
                   ) && (dVar4 = (double)fVar14, DAT_1464a97d0 <= dVar4)))) {
                dVar4 = DAT_1464a97d0;
              }
              break;
            }
            iVar7 = iVar7 + 1;
            puVar10 = puVar10 + 1;
          } while (iVar7 < (int)param_1[0x184]);
        }
      }
    }
    else {
      DAT_146b183dc = '\x01';
      _DAT_1468b5a80 = DAT_1468b5a78;
      DAT_146b183d0 = DAT_1468b5a78;
      DAT_1468b5a78 = DAT_1468b5a78 + (double)(float)DAT_1464a97c8;
      dVar4 = (double)(float)DAT_1464a97c8;
    }
  }
  DAT_1464a97d0 = dVar4;
  FUN_142894cd0(param_1);
  return;
}



// FUNCTION 142894cd0 FUN_142894cd0 body=131 status=ok
// SIG undefined FUN_142894cd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142894cd0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 local_28 [16];
  uint local_18;
  
  if (*(longlong **)(param_1 + 0x818) == (longlong *)0x0) {
    puVar2 = (undefined8 *)FUN_142434340(local_28,param_1 + 0x838);
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x818) + 0x288))();
    if (iVar1 != 2) {
      local_18 = local_18 & 0xffffff00;
      _DAT_1468b5cc8 = 0;
      DAT_1468b5cd0 = 0;
      DAT_1468b5cd8 = local_18;
      return;
    }
    puVar2 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 0x818) + 0x278))
                       (*(longlong **)(param_1 + 0x818),local_28);
  }
  _DAT_1468b5cc8 = *puVar2;
  DAT_1468b5cd0 = puVar2[1];
  DAT_1468b5cd8 = *(undefined4 *)(puVar2 + 2);
  return;
}



// FUNCTION 142894d60 FUN_142894d60 body=221 status=ok
// SIG undefined FUN_142894d60(void)

void FUN_142894d60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *local_18;
  int local_10;
  
  if (*(byte *)(param_1 + 0x898) == 4) {
    *(undefined1 *)(param_1 + 0x898) = 0;
    plVar2 = *(longlong **)(param_1 + 0xc18);
    plVar1 = plVar2 + *(int *)(param_1 + 0xc20);
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      lVar3 = *plVar2;
      if (*(longlong *)(lVar3 + 0x288) == param_2) goto LAB_142894dc6;
    }
    lVar3 = FUN_14286b170(DAT_146b17150,0);
LAB_142894dc6:
    if (*(longlong *)(lVar3 + 0x240) != 0) {
      UGameInstance::GetLocalPlayerIterator(*(longlong *)(lVar3 + 0x240),&local_18);
      for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
        if (*(longlong *)(*(longlong *)(*local_18 + (longlong)local_10 * 8) + 0x30) == 0) {
          *(undefined1 *)(param_1 + 0x898) = 4;
          return;
        }
      }
    }
  }
  else if (*(byte *)(param_1 + 0x898) < 2) {
    lVar3 = UWorld::GetWorldSettings(param_2,0,1);
    *(bool *)(param_1 + 0x898) = *(longlong *)(lVar3 + 0x600) != 0;
  }
  return;
}



// FUNCTION 142894e40 FUN_142894e40 body=644 status=ok
// SIG undefined FUN_142894e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142894e40(longlong *param_1,char param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  undefined1 uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  (*(code *)PTR_StartProfileThreadUsage_1464aaa40)();
  FUN_141edc760(local_res10,1);
  *(undefined4 *)((longlong)param_1 + 0xd4) = param_5;
  *(undefined4 *)(param_1 + 0x19) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xcc) = param_4;
  FUN_141edf360(param_1 + 2);
  lVar8 = param_1[0x17];
  uVar9 = 0;
  if (param_2 == '\0') {
    uVar5 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (lVar8 == 0) {
      uVar1 = *(undefined4 *)((longlong)param_1 + 0xcc);
      lVar8 = param_1[0x19];
      uVar7 = (**(code **)(*param_1 + 0x40))(param_1);
      (**(code **)(*DAT_146ab6358 + 0x3a8))(DAT_146ab6358,local_res8,uVar7,(int)lVar8,uVar1,uVar5,0)
      ;
      TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x17,local_res8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    }
    else {
      (**(code **)(*DAT_146ab6358 + 0x3b0))
                (DAT_146ab6358,lVar8,(int)param_1[0x19],*(undefined4 *)((longlong)param_1 + 0xcc),
                 uVar5,param_6);
    }
    FUN_141edf270(param_1 + 2);
  }
  else if (lVar8 != 0) {
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x17,0);
  }
  FUN_141edd460(local_res10);
  if (param_2 == '\0') {
    bVar3 = false;
    DAT_1465351bc = DAT_1465351bc + 1;
    lVar8 = (longlong)(DAT_1465351b0 + -1);
    if (-1 < DAT_1465351b0 + -1) {
      lVar11 = lVar8 << 4;
      bVar3 = false;
      do {
        if (((*(int *)(lVar11 + 8 + DAT_1465351a8) == 0) ||
            (plVar2 = *(longlong **)(lVar11 + DAT_1465351a8), plVar2 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1,0), cVar6 == '\0')) {
          bVar3 = true;
        }
        lVar11 = lVar11 + -0x10;
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
    }
    iVar4 = DAT_1465351b0;
    DAT_1465351bc = DAT_1465351bc + -1;
    if ((bVar3) && (DAT_1465351bc < 1)) {
      uVar10 = uVar9;
      if (0 < DAT_1465351b0) {
        do {
          if (((*(int *)(uVar9 + 8 + DAT_1465351a8) == 0) ||
              (*(longlong **)(uVar9 + DAT_1465351a8) == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(**(longlong **)(uVar9 + DAT_1465351a8) + 0x10))(), cVar6 != '\0')
             ) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1465351a8,uVar10,1,1);
          }
          else {
            uVar10 = (ulonglong)((int)uVar10 + 1);
            uVar9 = uVar9 + 0x10;
          }
        } while ((int)uVar10 < DAT_1465351b0);
      }
      _DAT_1465351b8 = DAT_1465351b0 * 2;
      if (_DAT_1465351b8 < 3) {
        _DAT_1465351b8 = 2;
      }
      if ((_DAT_1465351b8 < iVar4) && (DAT_1465351b4 != DAT_1465351b0)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1465351a8);
      }
    }
  }
  return;
}



// FUNCTION 1428950f0 FUN_1428950f0 body=868 status=ok
// SIG undefined FUN_1428950f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428950f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined2 *local_f0;
  longlong local_e8;
  undefined8 local_e0;
  int local_d8;
  undefined2 *local_d0;
  int local_c8;
  undefined2 *local_c0;
  int local_b8;
  longlong local_b0 [2];
  longlong local_a0 [2];
  longlong local_90 [3];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = -1;
  uVar4 = FUN_142a2f930();
  local_f8 = (undefined2 *)((ulonglong)local_f8._4_4_ << 0x20);
  FUN_1417a5560(uVar4,&local_e8,1,0x10);
  do {
    local_d8 = local_d8 + 1;
    lVar11 = local_e8;
    iVar10 = (int)local_e0;
    if ((int)local_e0 <= local_d8) break;
  } while (*(longlong *)(local_e8 + (longlong)local_d8 * 8) == 0);
  do {
    do {
      if ((local_d8 < 0) || (iVar10 <= local_d8)) {
        if (lVar11 != 0) {
          FMemory::Free(lVar11);
        }
        return;
      }
      lVar2 = *(longlong *)(lVar11 + (longlong)local_d8 * 8);
      if ((*(int *)(lVar2 + 0x708) != 7) && (*(int *)(lVar2 + 0x708) != 4)) {
        plVar5 = *(longlong **)(param_1 + 0xc18);
        plVar1 = plVar5 + *(int *)(param_1 + 0xc20);
        for (plVar7 = plVar5; plVar7 != plVar1; plVar7 = plVar7 + 1) {
          if (*(longlong *)(*plVar7 + 0x288) == lVar2) goto LAB_1428953d9;
        }
        if (*(longlong *)(lVar2 + 0x30) != 0) {
          for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
            if (*(longlong *)(*plVar5 + 0x288) == *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0xc0))
            goto LAB_1428953d9;
          }
        }
        cVar3 = FUN_142881050(param_1,lVar2);
        if (cVar3 == '\0') {
          puVar6 = (undefined8 *)UObjectBaseUtility::GetPathName(lVar2,local_b0,0);
          if (*(int *)(puVar6 + 1) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*puVar6;
          }
          FString::PrintfImpl(&local_c0,L"OBJ REFS CLASS=WORLD NAME=%s",puVar8);
          puVar8 = &DAT_143f3eda8;
          if (local_b8 != 0) {
            puVar8 = local_c0;
          }
          uVar4 = FUN_141672640();
          FUN_141764d70(lVar2,puVar8,uVar4);
          if (local_c0 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_b0[0] != 0) {
            FMemory::Free();
          }
          FArchiveTraceRoute::FindShortestRootPath(local_78,lVar2,1,0);
          FArchiveTraceRoute::PrintRootPath(&local_d0,local_78,lVar2);
          puVar8 = &DAT_143f3eda8;
          if (local_c8 != 0) {
            puVar8 = local_d0;
          }
          puVar6 = (undefined8 *)UObjectBaseUtility::GetFullName(lVar2,local_a0,0);
          if (*(int *)(puVar6 + 1) == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = (undefined2 *)*puVar6;
          }
          local_f8 = puVar8;
          LowLevelFatalErrorHandler
                    ("Unknown",0x35b7,L"%s not cleaned up by garbage collection!\r\n%s",puVar9);
          if (local_a0[0] != 0) {
            FMemory::Free();
          }
          puVar8 = &DAT_143f3eda8;
          if (local_c8 != 0) {
            puVar8 = local_d0;
          }
          puVar6 = (undefined8 *)UObjectBaseUtility::GetFullName(lVar2,local_90,0);
          if (*(int *)(puVar6 + 1) == 0) {
            local_f8 = &DAT_143f3eda8;
          }
          else {
            local_f8 = (undefined2 *)*puVar6;
          }
          local_f0 = puVar8;
          FDebug::AssertFailed(&DAT_1451c9ec2,"Unknown",0x35b7,&DAT_1451d7ef0);
          if (local_90[0] != 0) {
            FMemory::Free();
          }
          if (local_d0 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          local_30 = 0;
          if (local_38 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (local_78);
        }
        lVar11 = local_e8;
        iVar10 = (int)local_e0;
      }
LAB_1428953d9:
      local_d8 = local_d8 + 1;
    } while (iVar10 <= local_d8);
    do {
      if (*(longlong *)(lVar11 + (longlong)local_d8 * 8) != 0) break;
      local_d8 = local_d8 + 1;
    } while (local_d8 < iVar10);
  } while( true );
}



// FUNCTION 142895480 FUN_142895480 body=975 status=ok
// SIG undefined FUN_142895480(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142895480(undefined8 param_1)

{
  short sVar1;
  void *pvVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  short *psVar8;
  longlong lVar9;
  short *psVar10;
  int iVar11;
  undefined1 auStack_2168 [32];
  short *local_2148;
  int local_2140;
  int local_213c;
  undefined *local_2138;
  undefined8 local_2130;
  longlong local_2128 [2];
  longlong local_2118 [2];
  longlong local_2108;
  longlong local_20f0;
  longlong local_20e0;
  longlong *local_20d0;
  int local_20c8;
  longlong local_20c0;
  longlong local_20a8 [2];
  longlong local_2098;
  longlong local_2080 [2];
  longlong local_2070;
  longlong *local_2060;
  int local_2058;
  longlong local_2050;
  short local_2038 [4096];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2168;
  local_2130 = param_1;
  FURL::FURL(local_2118,0);
  FURL::LoadURLConfig(local_2118,L"DefaultPlayer",&DAT_1468e2410);
  _guard_xfg_dispatch_icall_nop(local_2038,0,0x2000);
  local_2138 = &DAT_1451c9234;
  cVar4 = FParse::Token(&local_2138,local_2038,0x1000,0);
  if ((cVar4 == '\0') || (local_2038[0] == 0x2d)) {
    plVar5 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
    lVar9 = plVar5[0x1f];
    if (lVar9 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar9 = plVar5[0x1f];
    }
    puVar6 = (undefined8 *)FUN_141e0eac0(local_2128);
    iVar7 = *(int *)(lVar9 + 0x48);
    psVar10 = (short *)0x0;
    local_2140 = *(int *)(puVar6 + 1);
    if (local_2140 < 2) {
      pvVar2 = *(void **)(lVar9 + 0x40);
      local_2148 = (short *)0x0;
      local_2140 = iVar7;
      if (iVar7 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_2148,iVar7,0);
        psVar10 = local_2148;
        _guard_xfg_dispatch_icall_nop(local_2148,pvVar2,(longlong)iVar7 * 2);
        iVar7 = local_2140;
      }
    }
    else {
      iVar11 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar11 = 0;
      }
      if ((local_2140 != 0) || (iVar7 = 1, iVar11 == 0)) {
        iVar7 = 0;
      }
      local_2148 = (short *)*puVar6;
      *puVar6 = 0;
      local_213c = *(int *)((longlong)puVar6 + 0xc);
      puVar6[1] = 0;
      if (local_213c < iVar7 + iVar11 + local_2140) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2148);
      }
      iVar3 = local_2140;
      pvVar2 = *(void **)(lVar9 + 0x40);
      param_1 = local_2130;
      psVar10 = local_2148;
      iVar7 = local_2140;
      if (iVar11 != 0) {
        lVar9 = (longlong)local_2140;
        local_2140 = local_2140 + (uint)(local_2140 == 0) + iVar11;
        if (local_213c < local_2140) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2148,iVar3);
        }
        iVar7 = local_2140;
        psVar10 = local_2148;
        psVar8 = local_2148 + (lVar9 - (ulonglong)(iVar3 != 0));
        _guard_xfg_dispatch_icall_nop(psVar8,pvVar2,(longlong)iVar11 * 2);
        psVar8[iVar11] = 0;
        param_1 = local_2130;
      }
    }
    psVar8 = &DAT_143f3eda8;
    if (iVar7 != 0) {
      psVar8 = psVar10;
    }
    lVar9 = (longlong)local_2038 - (longlong)psVar8;
    do {
      sVar1 = *psVar8;
      *(short *)((longlong)psVar8 + lVar9) = sVar1;
      psVar8 = psVar8 + 1;
    } while (sVar1 != 0);
    if (psVar10 != (short *)0x0) {
      FMemory::Free(psVar10);
    }
    if (local_2128[0] != 0) {
      FMemory::Free();
    }
  }
  FUN_14289aca0(local_20a8,local_2118,local_2038,1);
  FUN_141671940(param_1,local_2080,1);
  plVar5 = local_2060;
  iVar7 = local_2058;
  if (local_2050 != 0) {
    FMemory::Free();
    plVar5 = local_2060;
    iVar7 = local_2058;
  }
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_2060 != (longlong *)0x0) {
    FMemory::Free(local_2060);
  }
  if (local_2070 != 0) {
    FMemory::Free();
  }
  if (local_2080[0] != 0) {
    FMemory::Free();
  }
  if (local_2098 != 0) {
    FMemory::Free();
  }
  if (local_20a8[0] != 0) {
    FMemory::Free();
  }
  plVar5 = local_20d0;
  if (local_20c0 != 0) {
    FMemory::Free();
    plVar5 = local_20d0;
  }
  for (; local_20c8 != 0; local_20c8 = local_20c8 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_20d0 != (longlong *)0x0) {
    FMemory::Free(local_20d0);
  }
  if (local_20e0 != 0) {
    FMemory::Free();
  }
  if (local_20f0 != 0) {
    FMemory::Free();
  }
  if (local_2108 != 0) {
    FMemory::Free();
  }
  if (local_2118[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142895850 Serialize body=105 status=ok
// SIG undefined Serialize(void)

ulonglong FUpdateTexture2DSubresouceCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc6);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xca);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0xd0);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1428958c0 Serialize body=163 status=ok
// SIG undefined Serialize(void)

ulonglong FUpdateTexture3DSubresouceCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0a40(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xc6);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xcc);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xd0);
  uVar1 = FUN_1419e0a40(uVar1,param_1 + 0xd6);
  uVar2 = FUN_1419e0b60(uVar1,param_1 + 0xdc);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 142895970 Serialize body=77 status=ok
// SIG undefined Serialize(void)

ulonglong FCopyTexture2DCS::Serialize(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1419e0b60(param_2,param_1 + 0xc0);
  uVar1 = FUN_1419e0b60(uVar1,param_1 + 0xc4);
  uVar2 = FUN_1419e0a40(uVar1,param_1 + 200);
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1428959c0 FUN_1428959c0 body=324 status=ok
// SIG undefined FUN_1428959c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1428959c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_158 [32];
  longlong local_138 [2];
  undefined2 local_128;
  undefined4 local_126;
  undefined2 local_122;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_28 = 1;
  lVar7 = 0;
  TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_128,0);
  local_128 = 0;
  local_126 = 0x100004;
  local_122 = 0;
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_138,&DAT_146ab6e78,&local_128);
  plVar1 = (longlong *)(param_1 + 0x30);
  if (plVar1 != local_138) {
    puVar4 = (undefined8 *)*plVar1;
    *plVar1 = local_138[0];
    local_138[0] = 0;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar4 + 1);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if ((*(char *)(puVar4 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
          LOCK();
          bVar8 = *(int *)((longlong)puVar4 + 0xc) == 0;
          if (bVar8) {
            *(int *)((longlong)puVar4 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar8) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar6 != 0) {
              lVar7 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar7 + 8) = puVar4;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_138);
  return;
}



// FUNCTION 142895b10 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1451e2120;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142895b60 FUN_142895b60 body=239 status=ok
// SIG undefined FUN_142895b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142895b60(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 **local_78;
  undefined1 local_68 [8];
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_48 = 1;
  local_34 = 0;
  local_78 = &local_60;
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_80 = &local_58;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_88 = 1;
  (**(code **)(*DAT_146ab6358 + 0x480))(DAT_146ab6358,local_68,&DAT_146ab6e78,0x20);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  *local_60 = 0;
  local_60[1] = 0;
  *(undefined4 *)(local_60 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)local_60 + 0x14) = 0x3f800000;
  *(undefined4 *)(local_60 + 3) = 0x3f800000;
  *(undefined4 *)((longlong)local_60 + 0x1c) = 0x3f800000;
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 142895c50 FUN_142895c50 body=89 status=ok
// SIG undefined FUN_142895c50(void)

undefined8 * FUN_142895c50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1451e2160;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142895cb0 FUN_142895cb0 body=545 status=ok
// SIG undefined FUN_142895cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142895cb0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_118 [20];
  undefined8 uStack_104;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  byte local_dc;
  undefined1 local_db;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98 [13];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  puVar2 = (undefined8 *)*param_1;
  local_dc = local_dc & 0xf8;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  lVar4 = puVar2[2];
  local_e0 = 0;
  local_db = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[8] = 0;
  local_98[9] = 0;
  local_98[10] = 0;
  local_98[0xb] = 0;
  local_98[0xc] = 0;
  local_30 = 0;
  param_2[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  puVar2 = param_2 + 3;
  *(byte *)((longlong)param_2 + 0x34) = *(byte *)((longlong)param_2 + 0x34) & 0xf8;
  *puVar2 = 0;
  puVar3 = (undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_2 + 4) = 0;
  lVar6 = 5;
  lVar4 = (longlong)&local_f8 - (longlong)puVar2;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  lVar7 = 5;
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined1 *)((longlong)param_2 + 0x35) = 0;
  do {
    *(undefined8 *)(puVar3 + -3) =
         *(undefined8 *)((longlong)puVar3 + (longlong)&local_d8 + (-0x2c - (longlong)puVar2));
    *(undefined8 *)((longlong)puVar3 + (longlong)&local_d8 + (-0x2c - (longlong)puVar2)) = 0;
    puVar3[-1] = *(undefined4 *)((longlong)&uStack_fc + -(longlong)puVar2 + (longlong)puVar3);
    *puVar3 = *(undefined4 *)(lVar4 + (longlong)puVar3);
    *(undefined4 *)(lVar4 + (longlong)puVar3) = 0;
    *(undefined4 *)((longlong)&uStack_fc + -(longlong)puVar2 + (longlong)puVar3) = 0;
    puVar3 = puVar3 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar7 = 5;
  puVar3 = (undefined4 *)((longlong)param_2 + 0x94);
  do {
    *(undefined8 *)(puVar3 + -3) =
         *(undefined8 *)((longlong)&uStack_104 + -(longlong)puVar2 + (longlong)puVar3);
    *(undefined8 *)((longlong)&uStack_104 + -(longlong)puVar2 + (longlong)puVar3) = 0;
    puVar3[-1] = *(undefined4 *)((longlong)&uStack_fc + -(longlong)puVar2 + (longlong)puVar3);
    *puVar3 = *(undefined4 *)(lVar4 + (longlong)puVar3);
    *(undefined4 *)(lVar4 + (longlong)puVar3) = 0;
    *(undefined4 *)((longlong)&uStack_fc + -(longlong)puVar2 + (longlong)puVar3) = 0;
    puVar3 = puVar3 + 4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  plVar5 = local_98 + 0xc;
  lVar4 = 5;
  param_2[0x1b] = local_98[0xc];
  *(undefined4 *)(param_2 + 0x1c) = local_30;
  do {
    plVar1 = plVar5 + -2;
    plVar5 = plVar5 + -2;
    lVar4 = lVar4 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar4 != 0);
  plVar5 = local_98 + 2;
  do {
    plVar1 = plVar5 + -2;
    plVar5 = plVar5 + -2;
    lVar6 = lVar6 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar6 != 0);
  return param_2;
}



// FUNCTION 142895ee0 FUN_142895ee0 body=213 status=ok
// SIG undefined FUN_142895ee0(void)

undefined8 * FUN_142895ee0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  plVar7 = DAT_1469eae38;
  uVar6 = DAT_1469eae30;
  uVar5 = DAT_1469eae28;
  local_28 = DAT_1469eae28;
  local_20 = DAT_1469eae30;
  local_18 = DAT_1469eae38;
  if (DAT_1469eae38 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469eae38 + 1) = (int)DAT_1469eae38[1] + 1;
    UNLOCK();
  }
  local_10 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = uVar5;
  param_2[4] = uVar6;
  param_2[5] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  *(uint *)(param_2 + 6) = *(uint *)(param_2 + 6) & 0xfffffff0;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>::
  ~TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>(&local_38);
  return param_2;
}



// FUNCTION 142895fc0 AddUniqueImpl<FInputAxisKeyMapping_const_&> body=132 status=ok
// SIG undefined AddUniqueImpl<FInputAxisKeyMapping_const_&>(void)

ulonglong TArray<FInputAxisKeyMapping,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<FInputAxisKeyMapping_const_&>(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = Find();
  if ((int)uVar4 == -1) {
    uVar1 = *(uint *)(param_1 + 1);
    lVar5 = (longlong)(int)uVar1;
    *(uint *)(param_1 + 1) = uVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar1 + 1)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,uVar1);
    }
    lVar2 = *param_1;
    *(undefined8 *)(lVar2 + lVar5 * 0x28) = *param_2;
    *(undefined4 *)(lVar2 + 8 + lVar5 * 0x28) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(lVar2 + 0x10 + lVar5 * 0x28) = param_2[2];
    *(undefined8 *)(lVar2 + 0x18 + lVar5 * 0x28) = param_2[3];
    lVar3 = param_2[4];
    *(longlong *)(lVar2 + 0x20 + lVar5 * 0x28) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    uVar4 = (ulonglong)uVar1;
  }
  return uVar4;
}



// FUNCTION 142896050 FUN_142896050 body=732 status=ok
// SIG undefined FUN_142896050(void)

int * FUN_142896050(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  void *_Dst;
  bool local_res8;
  
  uVar12 = 0xffffffff;
  iVar11 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar15 + 1) {
      TArray<FSlateRenderBatch,FDefaultAllocator>::ResizeGrow(param_1,iVar15);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar15 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)((longlong)iVar15 * 0xf0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar10 * 0xf0 + *param_1) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar15;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar13 +
                   (longlong)((int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar15 & 0x1f);
  plVar13 = (longlong *)((longlong)iVar15 * 0xf0 + *param_1);
  FUN_142895cb0(param_3,plVar13);
  *(undefined4 *)(plVar13 + 0x1d) = 0xffffffff;
  iVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (iVar15 != 1) {
    iVar10 = iVar11;
    if (iVar15 != 0) {
      lVar4 = *plVar13;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar9 +
                      ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          iVar10 = iVar7;
          if (*(longlong *)((longlong)iVar7 * 0xf0 + *param_1) == lVar4) break;
          iVar7 = *(int *)((longlong)iVar7 * 0xf0 + 0xe8 + *param_1);
          iVar10 = iVar11;
        } while (iVar7 != -1);
      }
    }
    local_res8 = iVar10 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar10 * 0xf0 + *param_1);
      FKeyState::~FKeyState((longlong)_Dst + 0x18);
      plVar9 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar13,0xe8);
      iVar11 = *param_2;
      bVar5 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xf0 + *param_1) = iVar11;
      }
      puVar8 = (undefined4 *)((longlong)iVar11 * 0xf0 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar8[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar13 +
                       (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_14289630b;
    }
  }
  cVar6 = TSet<TTuple<FName,FDiskCachedAssetData>,TDefaultMapHashableKeyFuncs<FName,FDiskCachedAssetData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar15,0);
  if (cVar6 == '\0') {
    uVar14 = (int)((ulonglong)*plVar13 >> 0x20) + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0xec) = uVar14;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 0x1d) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         *param_2;
  }
LAB_14289630b:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142896330 FUN_142896330 body=733 status=ok
// SIG undefined FUN_142896330(void)

int * FUN_142896330(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  char cVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  bool local_res8;
  
  iVar7 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar9 * 0x40 + 4 + *param_1);
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar13 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  plVar13 = (longlong *)((longlong)iVar9 * 0x40 + *param_1);
  FUN_142895ee0(param_3,plVar13);
  *(undefined4 *)(plVar13 + 7) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar12 != 1) {
    lVar3 = *plVar13;
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar6 +
                       ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar10 != -1) {
        do {
          iVar9 = iVar10;
          if (*(longlong *)((longlong)iVar10 * 0x40 + *param_1) == lVar3) break;
          iVar10 = *(int *)((longlong)iVar10 * 0x40 + 0x38 + *param_1);
          iVar9 = iVar14;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar9 * 0x40 + *param_1);
      UPlayerInput::FActionKeyDetails::~FActionKeyDetails((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,plVar13,0x38);
      iVar7 = *param_2;
      bVar4 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x40 + *param_1) = iVar7;
      }
      puVar8 = (undefined4 *)((longlong)iVar7 * 0x40 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar8[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar7;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar13 +
                       (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1428965e4;
    }
  }
  if (3 < uVar12) {
    uVar5 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar11 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar14;
    }
    uVar5 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar13 >> 0x20) + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x3c) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 7) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    FUN_140d48340(param_1);
  }
LAB_1428965e4:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142896610 FUN_142896610 body=794 status=ok
// SIG undefined FUN_142896610(void)

int * FUN_142896610(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  void *_Dst;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  bool local_res8;
  undefined8 local_58;
  undefined8 local_50;
  byte local_48;
  
  iVar10 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x28);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x28) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar8;
  local_58 = 0;
  local_50 = 0;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  local_48 = local_48 & 0xfe;
  puVar1 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  plVar11 = (longlong *)(*param_1 + (longlong)iVar8 * 0x28);
  *plVar11 = *(longlong *)*param_3;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *(byte *)(plVar11 + 3) = *(byte *)(plVar11 + 3) & 0xfe;
  TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>::
  ~TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>(&local_58);
  *(undefined4 *)(plVar11 + 4) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar12 != 1) {
    lVar2 = *plVar11;
    iVar8 = iVar13;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar9 != -1) {
        do {
          iVar8 = iVar9;
          if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x28) == lVar2) break;
          iVar9 = *(int *)(*param_1 + 0x20 + (longlong)iVar9 * 0x28);
          iVar8 = iVar13;
        } while (iVar9 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      _Dst = (void *)(*param_1 + (longlong)iVar8 * 0x28);
      TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>::
      ~TArray<FAddressInfoResultData,TSizedDefaultAllocator<32>_>((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,plVar11,0x20);
      iVar10 = *param_2;
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar10;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + (longlong)iVar10 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      *(int *)(lVar2 + 4 + (longlong)iVar10 * 0x28) = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar11 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142896900;
    }
  }
  if (3 < uVar12) {
    uVar5 = (uVar12 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar7 = '\0';
    if (uVar5 != 0) {
      iVar10 = 0x1f - iVar13;
    }
    uVar5 = (uVar12 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar7 = '\x1f' - (char)iVar13;
    }
    iVar10 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar7 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar11 >> 0x20) + (int)*plVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 0x24) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 4) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142896900:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142896930 FUN_142896930 body=736 status=ok
// SIG undefined FUN_142896930(void)

int * FUN_142896930(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  byte *_Src;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  bool local_res8;
  
  iVar12 = 1;
  iVar11 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x28);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x28) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  _Src = (byte *)(*param_1 + (longlong)iVar9 * 0x28);
  puVar2 = (undefined8 *)param_3[1];
  *_Src = *(byte *)*param_3;
  *(undefined8 *)(_Src + 8) = *puVar2;
  FString::FString(_Src + 0x10,puVar2 + 1);
  _Src[0x20] = 0xff;
  _Src[0x21] = 0xff;
  _Src[0x22] = 0xff;
  _Src[0x23] = 0xff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar13 != 1) {
    iVar9 = iVar11;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)*_Src) * 4);
      if (iVar10 != -1) {
        do {
          iVar9 = iVar10;
          if (*(byte *)(*param_1 + (longlong)iVar10 * 0x28) == *_Src) break;
          iVar10 = *(int *)(*param_1 + 0x20 + (longlong)iVar10 * 0x28);
          iVar9 = iVar11;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      lVar3 = *param_1;
      if (*(longlong *)(lVar3 + 0x10 + (longlong)iVar9 * 0x28) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar3 + (longlong)iVar9 * 0x28),_Src,0x20);
      iVar12 = *param_2;
      bVar4 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar12;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar3 + (longlong)iVar12 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar11 = (int)param_1[6];
      }
      *(int *)(lVar3 + 4 + (longlong)iVar12 * 0x28) = iVar11;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_142896be7;
    }
  }
  if (3 < uVar13) {
    uVar6 = (uVar13 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar12 = 0x20;
    cVar8 = '\0';
    if (uVar6 != 0) {
      iVar12 = 0x1f - iVar11;
    }
    uVar6 = (uVar13 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar8 = '\x1f' - (char)iVar11;
    }
    iVar12 = 1 << (~(byte)((iVar12 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    uVar13 = (int)param_1[9] - 1U & (uint)*_Src;
    *(uint *)(_Src + 0x24) = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x20) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar13) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar13) * 4) = *param_2
    ;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<TTuple<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath>,TDefaultMapHashableKeyFuncs<TEnumAsByte<enum_EMouseCursor::Type>,FSoftClassPath,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142896be7:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142896c10 FUN_142896c10 body=709 status=ok
// SIG undefined FUN_142896c10(void)

int * FUN_142896c10(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar8 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar11;
  lVar6 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  bVar16 = false;
  puVar14 = (uint *)((longlong)plVar7 + lVar6);
  *puVar14 = *puVar14 | 1 << ((byte)iVar11 & 0x1f);
  puVar2 = (undefined8 *)param_3[1];
  lVar1 = (longlong)iVar11 * 0x18;
  puVar14 = (uint *)(*param_1 + lVar1);
  *puVar14 = *(uint *)*param_3;
  *(undefined8 *)(puVar14 + 1) = *puVar2;
  puVar14[3] = *(uint *)(puVar2 + 1);
  puVar14[4] = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar15;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar14) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(uint *)(*param_1 + (longlong)iVar9 * 0x18) == *puVar14) break;
          iVar9 = *(int *)(*param_1 + 0x10 + (longlong)iVar9 * 0x18);
          iVar10 = iVar15;
        } while (iVar9 != -1);
      }
    }
    bVar16 = iVar10 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar10 * 0x18),puVar14,0x10);
      bVar4 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar11;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar1 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar3) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar7 + lVar6);
      *puVar14 = *puVar14 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_142896eb0;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar15;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar15;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar13 = (int)param_1[9] - 1U & *puVar14;
    puVar14[5] = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    puVar14[4] = *(uint *)((longlong)plVar7 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<int,UTexture2D_*>,TDefaultMapHashableKeyFuncs<int,UTexture2D_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142896eb0:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 142896ee0 FUN_142896ee0 body=823 status=ok
// SIG undefined FUN_142896ee0(void)

int * FUN_142896ee0(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char cVar17;
  uint uVar18;
  longlong *_Src;
  void *_Dst;
  bool local_res8;
  
  iVar13 = 1;
  iVar16 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar15 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar14 * 0x30);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar15;
    if (iVar15 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x30) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar14;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar12 +
                   (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar14 & 0x1f);
  plVar12 = (longlong *)*param_3;
  puVar11 = (undefined4 *)param_3[1];
  _Src = (longlong *)((longlong)iVar14 * 0x30 + *param_1);
  *_Src = *plVar12;
  _Src[1] = plVar12[1];
  lVar5 = plVar12[2];
  _Src[2] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  uVar7 = puVar11[1];
  uVar8 = puVar11[2];
  uVar9 = puVar11[3];
  local_res8 = false;
  *(undefined4 *)(_Src + 3) = *puVar11;
  *(undefined4 *)((longlong)_Src + 0x1c) = uVar7;
  *(undefined4 *)(_Src + 4) = uVar8;
  *(undefined4 *)((longlong)_Src + 0x24) = uVar9;
  *(undefined4 *)(_Src + 5) = 0xffffffff;
  uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar18 != 1) {
    iVar14 = iVar16;
    if (uVar18 != 0) {
      lVar5 = *_Src;
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      iVar15 = *(int *)((longlong)plVar12 +
                       ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar15 != -1) {
        do {
          iVar14 = iVar15;
          if (*(longlong *)(*param_1 + (longlong)iVar15 * 0x30) == lVar5) break;
          iVar15 = *(int *)(*param_1 + 0x28 + (longlong)iVar15 * 0x30);
          iVar14 = iVar16;
        } while (iVar15 != -1);
      }
    }
    local_res8 = iVar14 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar14 * 0x30 + *param_1);
      plVar12 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar12 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x28);
      iVar13 = *param_2;
      bVar6 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar13;
      }
      puVar11 = (undefined4 *)((longlong)iVar13 * 0x30 + *param_1);
      *puVar11 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar16 = (int)param_1[6];
      }
      puVar11[1] = iVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar14;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_1428971ee;
    }
  }
  if (3 < uVar18) {
    uVar10 = (uVar18 >> 1) + 8;
    iVar16 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    iVar13 = 0x20;
    if (uVar10 != 0) {
      iVar13 = 0x1f - iVar16;
    }
    uVar10 = (uVar18 >> 1) + 7;
    iVar16 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uVar10 == 0) {
      cVar17 = '\0';
    }
    else {
      cVar17 = '\x1f' - (char)iVar16;
    }
    iVar13 = 1 << (~(byte)((iVar13 << 0x1a) >> 0x1f) & 0x20U - cVar17 & 0x1f);
  }
  if (((int)uVar18 < 1) || (((int)param_1[9] != 0 && (iVar13 <= (int)param_1[9])))) {
    uVar18 = (int)((ulonglong)*_Src >> 0x20) + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x2c) = uVar18;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 5) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar13;
    TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1428971ee:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142897220 HeapSortInternal<FAutoCompleteCommand,FIdentityFunctor,TDereferenceWrapper<FAutoCompleteCommand,TLess<FAutoCompleteCommand>_>_> body=687 status=ok
// SIG undefined HeapSortInternal<FAutoCompleteCommand,FIdentityFunctor,TDereferenceWrapper<FAutoCompleteCommand,TLess<FAutoCompleteCommand>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FAutoCompleteCommand,FIdentityFunctor,TDereferenceWrapper<FAutoCompleteCommand,TLess<FAutoCompleteCommand>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  
  iVar10 = (param_2 + -2) / 2;
  if (-1 < iVar10) {
    iVar12 = iVar10 * 2 + 1;
    iVar4 = iVar12;
    iVar13 = iVar10;
joined_r0x000142897259:
    do {
      if (iVar12 < param_2) {
        iVar12 = iVar10 * 2;
        iVar16 = iVar12 + 1;
        if (iVar12 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar16 * 5 + 1) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = (undefined2 *)param_1[(longlong)iVar16 * 5];
          }
          if (*(int *)(param_1 + ((longlong)iVar12 + 2) * 5 + 1) == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = (undefined2 *)param_1[((longlong)iVar12 + 2) * 5];
          }
          iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar15);
          if (iVar11 < 0) {
            iVar16 = iVar12;
          }
          iVar16 = iVar16 + 1;
        }
        puVar17 = param_1 + (longlong)iVar16 * 5;
        puVar1 = param_1 + (longlong)iVar10 * 5;
        if (*(int *)(param_1 + (longlong)iVar16 * 5 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*puVar17;
        }
        if (*(int *)(puVar1 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar1;
        }
        iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar15);
        if (iVar10 < 0) {
          if (puVar1 != puVar17) {
            uVar5 = puVar17[1];
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            uVar3 = puVar1[4];
            *puVar1 = *puVar17;
            puVar1[1] = uVar5;
            uVar5 = puVar17[3];
            puVar1[2] = puVar17[2];
            puVar1[3] = uVar5;
            puVar1[4] = puVar17[4];
            *puVar17 = uVar6;
            puVar17[1] = uVar7;
            puVar17[2] = uVar8;
            puVar17[3] = uVar9;
            puVar17[4] = uVar3;
          }
          iVar12 = iVar16 * 2 + 1;
          iVar10 = iVar16;
          goto joined_r0x000142897259;
        }
      }
      iVar12 = iVar4 + -2;
      iVar10 = iVar13 + -1;
      iVar4 = iVar12;
      iVar13 = iVar10;
    } while (-1 < iVar10);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar17 = param_1 + (longlong)param_2 * 5;
    do {
      if (param_1 != puVar17) {
        uVar5 = puVar17[1];
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar8 = param_1[2];
        uVar9 = param_1[3];
        uVar3 = param_1[4];
        *param_1 = *puVar17;
        param_1[1] = uVar5;
        uVar5 = puVar17[3];
        param_1[2] = puVar17[2];
        param_1[3] = uVar5;
        param_1[4] = puVar17[4];
        *puVar17 = uVar6;
        puVar17[1] = uVar7;
        puVar17[2] = uVar8;
        puVar17[3] = uVar9;
        puVar17[4] = uVar3;
      }
      iVar10 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar10 * 2;
          iVar12 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if (*(int *)(param_1 + (longlong)iVar12 * 5 + 1) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)param_1[(longlong)iVar12 * 5];
            }
            if (*(int *)(param_1 + ((longlong)iVar4 + 2) * 5 + 1) == 0) {
              puVar14 = &DAT_143f3eda8;
            }
            else {
              puVar14 = (undefined2 *)param_1[((longlong)iVar4 + 2) * 5];
            }
            iVar13 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar15);
            if (iVar13 < 0) {
              iVar12 = iVar4;
            }
            iVar12 = iVar12 + 1;
          }
          puVar1 = param_1 + (longlong)iVar12 * 5;
          puVar2 = param_1 + (longlong)iVar10 * 5;
          if (*(int *)(param_1 + (longlong)iVar12 * 5 + 1) == 0) {
            puVar15 = &DAT_143f3eda8;
          }
          else {
            puVar15 = (undefined2 *)*puVar1;
          }
          if (*(int *)(puVar2 + 1) == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = (undefined2 *)*puVar2;
          }
          iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar15);
          if (-1 < iVar10) break;
          if (puVar2 != puVar1) {
            uVar5 = puVar1[1];
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            uVar8 = puVar2[2];
            uVar9 = puVar2[3];
            uVar3 = puVar2[4];
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            uVar5 = puVar1[3];
            puVar2[2] = puVar1[2];
            puVar2[3] = uVar5;
            puVar2[4] = puVar1[4];
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1[2] = uVar8;
            puVar1[3] = uVar9;
            puVar1[4] = uVar3;
          }
          iVar10 = iVar12;
        } while (iVar12 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar17 = puVar17 + -5;
    } while (0 < param_2);
  }
  return;
}


