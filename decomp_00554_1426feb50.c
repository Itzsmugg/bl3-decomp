// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1426feb50 FUN_1426feb50 body=294 status=ok
// SIG undefined FUN_1426feb50(void)

void FUN_1426feb50(longlong param_1,longlong param_2,undefined1 param_3,float *param_4,float param_5
                  )

{
  undefined8 uVar1;
  float *pfVar2;
  float fVar3;
  undefined1 local_38 [48];
  
  FUN_142498190(param_2);
  if ((0.0 < param_5) && (*(longlong *)(param_1 + 0x528) != 0)) {
    pfVar2 = (float *)FUN_1426e1ca0(*(longlong *)(param_1 + 0x528),local_38);
    fVar3 = SQRT((param_4[1] - pfVar2[1]) * (param_4[1] - pfVar2[1]) +
                 (*param_4 - *pfVar2) * (*param_4 - *pfVar2) +
                 (param_4[2] - pfVar2[2]) * (param_4[2] - pfVar2[2]));
    if (param_5 <= fVar3) {
      return;
    }
    *(float *)(param_2 + 8) = (1.0 - fVar3 / param_5) * *(float *)(param_2 + 8);
  }
  if ((*(float *)(param_1 + 0x80c) <= 0.0) ||
     (*(float *)(param_1 + 0x814) <= *(float *)(param_2 + 8))) {
    uVar1 = *(undefined8 *)param_4;
    *(undefined4 *)(param_1 + 0x808) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x80c) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x810) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x814) = *(undefined4 *)(param_2 + 8);
    fVar3 = param_4[2];
    *(undefined8 *)(param_1 + 0x81c) = uVar1;
    *(float *)(param_1 + 0x824) = fVar3;
    *(undefined1 *)(param_1 + 0x818) = param_3;
  }
  return;
}



// FUNCTION 1426fec80 ClientPlaySoundAtLocation_Implementation body=114 status=ok
// SIG undefined ClientPlaySoundAtLocation_Implementation(void)

void APlayerController::ClientPlaySoundAtLocation_Implementation
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_20 = DAT_1468b5da8;
  local_10 = *(undefined4 *)(param_3 + 1);
  local_28 = DAT_1468b5da0;
  local_18 = *param_3;
  FUN_142458510(0,param_5,&local_18,&local_28,param_4,param_5,0,0,0,0);
  return;
}



// FUNCTION 1426fed00 FUN_1426fed00 body=179 status=ok
// SIG undefined FUN_1426fed00(void)

void FUN_1426fed00(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  (**(code **)(*param_1 + 0xe40))(param_1,&local_58);
  local_40 = DAT_1468b5da8;
  local_48 = DAT_1468b5da0;
  local_30 = local_50;
  local_38 = local_58;
  FUN_142458510(param_1,param_2,&local_38,&local_48,param_3,param_4,0,0,0,0);
  return;
}



// FUNCTION 1426fedc0 FUN_1426fedc0 body=233 status=ok
// SIG undefined FUN_1426fedc0(void)

void FUN_1426fedc0(longlong *param_1,undefined8 param_2,char param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1422312c0();
  if (lVar2 != 0) {
    uVar3 = FUN_1422312c0(param_1);
    plVar4 = (longlong *)FUN_14244f490(uVar3,0);
    if (plVar4 == param_1) {
      if (param_3 != '\0') {
        *(undefined4 *)(param_1 + 199) = 0;
        if (*(int *)((longlong)param_1 + 0x63c) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xc6,0);
        }
        uVar3 = AActor::GetWorldTimerManager(param_1);
        FUN_142880530(uVar3,param_1 + 0xee);
        param_1[0xee] = 0;
      }
      iVar1 = (int)param_1[199];
      *(int *)(param_1 + 199) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0x63c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xc6,iVar1);
      }
      *(undefined8 *)(param_1[0xc6] + (longlong)iVar1 * 8) = param_2;
      if (param_4 != '\0') {
        (**(code **)(*param_1 + 0xbe0))(param_1);
      }
    }
  }
  return;
}



// FUNCTION 1426feeb0 ClientPrestreamTextures_Implementation body=91 status=ok
// SIG undefined ClientPrestreamTextures_Implementation(void)

void APlayerController::ClientPrestreamTextures_Implementation
               (undefined8 param_1,longlong *param_2,undefined4 param_3,undefined1 param_4,
               undefined4 param_5)

{
  char cVar1;
  int local_res10 [6];
  
  if ((param_2 != (longlong *)0x0) &&
     ((cVar1 = FUN_142710360(param_1,local_res10), cVar1 == '\0' || (local_res10[0] == 0)))) {
    (**(code **)(*param_2 + 0x608))(param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 1426fef10 FUN_1426fef10 body=276 status=ok
// SIG undefined FUN_1426fef10(void)

void FUN_1426fef10(longlong *param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *local_48 [2];
  undefined4 local_38;
  longlong local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  iVar1 = FUN_142235230();
  if (iVar1 == 1) {
    return;
  }
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (*(longlong *)(lVar2 + 0x148) == 0) {
    return;
  }
  if (param_2 == (longlong *)0x0) {
    return;
  }
  plVar3 = (longlong *)ULocalMessage::GetPrivateStaticClass();
  plVar4 = param_2;
  while (plVar4 != plVar3) {
    plVar4 = (longlong *)plVar4[6];
    if (plVar4 == (longlong *)0x0) {
      return;
    }
  }
  FClientReceiveData::FClientReceiveData(local_48);
  local_18 = param_5;
  local_10 = param_6;
  local_48[0] = param_1;
  local_38 = param_3;
  local_20 = param_4;
  plVar3 = (longlong *)ULocalMessage::GetPrivateStaticClass();
  plVar4 = param_2;
  do {
    if (plVar4 == plVar3) goto LAB_1426fefd0;
    plVar4 = (longlong *)plVar4[6];
  } while (plVar4 != (longlong *)0x0);
  param_2 = (longlong *)0x0;
LAB_1426fefd0:
  plVar4 = (longlong *)param_2[0x1f];
  if (plVar4 == (longlong *)0x0) {
    (**(code **)(*param_2 + 0x368))(param_2);
    plVar4 = (longlong *)param_2[0x1f];
  }
  (**(code **)(*plVar4 + 0x278))(plVar4,local_48);
  if (local_30 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426ff030 FUN_1426ff030 body=146 status=ok
// SIG undefined FUN_1426ff030(void)

void FUN_1426ff030(longlong *param_1)

{
  uint uVar1;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  (**(code **)(*param_1 + 0xea0))();
  local_c = local_c & 0xfffffffe;
  local_18 = 0;
  local_10 = 0x40000000;
  local_14 = 1;
  (**(code **)(*param_1 + 0xe18))(param_1,param_1,&local_18);
  if ((param_1[0x8c] == 0) || ((*(byte *)(param_1[0x8c] + 0x484) & 2) == 0)) {
    uVar1 = 0x10;
  }
  else {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) & 0xffffffef;
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) | uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001426ff0bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x718))(param_1,0x142);
  return;
}



// FUNCTION 1426ff0d0 FUN_1426ff0d0 body=383 status=ok
// SIG undefined FUN_1426ff0d0(void)

void FUN_1426ff0d0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  (**(code **)(*param_1 + 0x7f0))();
  plVar1 = (longlong *)param_1[0x91];
  param_1[0xa2] = 0;
  (**(code **)(*param_1 + 0x750))(param_1,param_2);
  plVar2 = (longlong *)param_1[0x91];
  if (plVar2 == (longlong *)0x0) {
    FUN_1429e1cd0(param_1);
  }
  else {
    if ((*(byte *)(plVar2 + 0x12) & 0x20) != 0) {
      (**(code **)(*param_1 + 0x780))(param_1);
      (**(code **)(*param_1 + 0x750))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001426ff15e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xdb8))(param_1,param_1[0x91]);
      return;
    }
    if (((plVar1 != (longlong *)0x0) && (plVar2 != plVar1)) && ((longlong *)plVar1[0x92] == param_1)
       ) {
      plVar1[0x92] = 0;
      (**(code **)(*plVar1 + 0x740))(plVar1,plVar2);
      plVar2 = (longlong *)param_1[0x91];
    }
    (**(code **)(*param_1 + 0xdb8))(param_1,plVar2);
    plVar1 = (longlong *)param_1[0x91];
    if ((longlong *)plVar1[0x92] != param_1) {
      plVar1[0x92] = (longlong)param_1;
      (**(code **)(*(longlong *)param_1[0x91] + 0x740))();
      plVar1 = (longlong *)param_1[0x91];
    }
    (**(code **)(*plVar1 + 0x7a8))();
    if (*(byte *)(param_1 + 0x25) < 3) {
      (**(code **)(*param_1 + 0x718))(param_1,0x140);
      if ((char)param_1[0xa7] != '\0') {
        (**(code **)(*param_1 + 0xe20))(param_1,param_1[0x91]);
                    /* WARNING: Could not recover jumptable at 0x0001426ff230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xea0))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1426ff250 FUN_1426ff250 body=102 status=ok
// SIG undefined FUN_1426ff250(void)

void FUN_1426ff250(longlong *param_1,longlong *param_2)

{
  if ((param_2 != (longlong *)0x0) &&
     ((((longlong *)param_1[0x91] != param_2 || ((longlong *)param_2[0x92] != param_1)) ||
      (param_2 != (longlong *)param_1[0xa2])))) {
    (**(code **)(*param_1 + 0x750))();
    param_2[0x92] = (longlong)param_1;
    (**(code **)(*param_2 + 0x740))(param_2);
    FUN_1429e0e30(param_1,param_1[0x91]);
  }
  return;
}



// FUNCTION 1426ff2c0 FUN_1426ff2c0 body=73 status=ok
// SIG undefined FUN_1426ff2c0(void)

void FUN_1426ff2c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1422312c0();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001426ff2de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x348))(plVar1);
    return;
  }
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_142876830(DAT_146b17150,lVar2,*(undefined8 *)(lVar2 + 0x38));
  return;
}



// FUNCTION 1426ff310 ClientReturnToMainMenu_Implementation body=105 status=ok
// SIG undefined ClientReturnToMainMenu_Implementation(void)

void APlayerController::ClientReturnToMainMenu_Implementation(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar4 = *param_1;
  uVar5 = FText::FromString(local_28);
  (**(code **)(lVar4 + 0xb00))(param_1,uVar5);
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
  return;
}



// FUNCTION 1426ff380 FUN_1426ff380 body=25 status=ok
// SIG undefined FUN_1426ff380(void)

void FUN_1426ff380(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  *(uint *)(lVar1 + 0x830) = *(uint *)(lVar1 + 0x830) | 8;
  return;
}



// FUNCTION 1426ff3a0 FUN_1426ff3a0 body=217 status=ok
// SIG undefined FUN_1426ff3a0(void)

void FUN_1426ff3a0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  longlong *plVar1;
  uint uVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  plVar1 = *(longlong **)(param_1 + 0x528);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (param_2 != '\0') {
    uVar2 = (uint)param_3 >> 0x18;
    local_14 = (float)((uint)((ulonglong)param_3 >> 8) & 0xff) * 0.003921569;
    local_18 = (float)((uint)((ulonglong)param_3 >> 0x10) & 0xff) * 0.003921569;
    local_10 = (float)((uint)param_3 & 0xff) * 0.003921569;
    local_c = (float)uVar2 * 0.003921569;
    (**(code **)(*plVar1 + 0x850))(plVar1,*plVar1,uVar2,param_5,&local_18,param_6,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001426ff46d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x858))();
  return;
}



// FUNCTION 1426ff4a0 FUN_1426ff4a0 body=179 status=ok
// SIG undefined FUN_1426ff4a0(void)

void FUN_1426ff4a0(longlong *param_1,byte param_2,undefined1 param_3,undefined1 param_4,char param_5
                  )

{
  longlong *plVar1;
  
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) & 0xfffffffd;
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) | (uint)param_2 * 2;
  plVar1 = (longlong *)param_1[0xa4];
  if ((plVar1 != (longlong *)0x0) && (param_5 != '\0')) {
    (**(code **)(*plVar1 + 0x6e8))(plVar1,param_2 ^ 1);
    if (param_1[0xa1] != 0) {
      ULocalPlayer::GetPrivateStaticClass();
    }
    if (param_1[0xea] != 0) {
      SVirtualJoystick::SetJoystickVisibility
                (param_1[0xea],*(byte *)(param_1[0xa4] + 0x460) >> 1 & 1,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001426ff54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xbb0))
            (param_1,CONCAT31((uint3)(*(uint *)(param_1 + 200) >> 9),
                              (char)(*(uint *)(param_1 + 200) >> 1)) & 0xffffff01,param_3,param_4);
  return;
}



// FUNCTION 1426ff560 FUN_1426ff560 body=90 status=ok
// SIG undefined FUN_1426ff560(void)

void FUN_1426ff560(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int local_res10 [6];
  
  if ((param_2 != (longlong *)0x0) &&
     ((cVar1 = FUN_142710360(param_1,local_res10), cVar1 == '\0' || (local_res10[0] == 0)))) {
    (**(code **)(*param_2 + 0x4d0))(param_2,0,0,param_3,param_4);
  }
  return;
}



// FUNCTION 1426ff5c0 FUN_1426ff5c0 body=169 status=ok
// SIG undefined FUN_1426ff5c0(void)

void FUN_1426ff5c0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_38 [16];
  longlong *local_28;
  longlong local_20;
  uint local_c;
  
  if (param_1[0xa4] != 0) {
    FUN_142227350(param_1[0xa4],0,1);
    param_1[0xa4] = 0;
  }
  FActorSpawnParameters::FActorSpawnParameters(local_38);
  local_c = local_c | 0x40;
  local_20 = param_1[0x2a];
  local_28 = param_1;
  if (param_2 != 0) {
    lVar1 = FUN_142950fd0();
    lVar3 = param_2;
    do {
      if (lVar3 == lVar1) goto LAB_1426ff630;
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  param_2 = 0;
LAB_1426ff630:
  uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar3 = UWorld::SpawnActor(uVar2,param_2,0,0,local_38);
  param_1[0xa4] = lVar3;
  return;
}



// FUNCTION 1426ff670 FUN_1426ff670 body=45 status=ok
// SIG undefined FUN_1426ff670(void)

void FUN_1426ff670(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1423d94f0(param_1,0x142);
  if (cVar1 != '\0') {
    *(uint *)(param_1 + 0x640) = *(uint *)(param_1 + 0x640) | 0x10;
  }
  return;
}



// FUNCTION 1426ff6a0 FUN_1426ff6a0 body=185 status=ok
// SIG undefined FUN_1426ff6a0(void)

void FUN_1426ff6a0(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  if ((param_1[0xa5] != 0) && ((*(byte *)(param_1[0xa5] + 0x2c40) & 0x40) == 0)) {
    if (param_2 == (longlong *)0x0) {
      FUN_1429e21d0();
      return;
    }
    cVar1 = FUN_1423d94f0(param_1,0x145);
    if ((cVar1 == '\0') || (param_2 != param_1)) {
      local_14 = *(undefined1 *)(param_3 + 1);
      local_18 = *param_3;
      local_10 = param_3[2];
      local_c = local_c ^ (param_3[3] ^ local_c) & 1;
      (**(code **)(*param_1 + 0xe18))(param_1,param_2,&local_18);
    }
  }
  return;
}



// FUNCTION 1426ff780 FUN_1426ff780 body=115 status=ok
// SIG undefined FUN_1426ff780(void)

void FUN_1426ff780(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int local_res10 [6];
  
  cVar1 = FUN_142710360(param_1,local_res10);
  if (((cVar1 == '\0') || (local_res10[0] == 0)) && (*(longlong *)(param_1 + 0x460) != 0)) {
    lVar2 = FUN_1422312c0(param_1);
    if (lVar2 != 0) {
      lVar2 = FUN_1422312c0(param_1);
      if (*(longlong *)(lVar2 + 0x48) != 0) {
        lVar2 = FUN_1422312c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001426ff7e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x290))
                  (*(longlong **)(lVar2 + 0x48),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x460) + 0x4d8));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1426ff840 FUN_1426ff840 body=291 status=ok
// SIG undefined FUN_1426ff840(void)

void FUN_1426ff840(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_2 == 0) && (param_3 == 0)) {
    *(undefined4 *)(param_1 + 0x5c8) = 0;
    if (*(int *)(param_1 + 0x5cc) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo();
      return;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x5c8) + -1;
    if (-1 < iVar4) {
      plVar1 = (longlong *)(param_1 + 0x5c0);
      lVar5 = (longlong)iVar4 * 0x18;
      lVar6 = lVar5;
      do {
        if (((param_2 == 0) || (*(longlong *)(lVar5 + *plVar1) == param_2)) &&
           ((param_3 == 0 || (*(longlong *)(*plVar1 + 8 + lVar5) == param_3)))) {
          iVar2 = *(int *)(param_1 + 0x5c8);
          iVar3 = (iVar2 - iVar4) + -1;
          if (0 < iVar3) {
            iVar3 = 1;
          }
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar6 + *plVar1),
                       (void *)(*plVar1 + (longlong)(iVar2 - iVar3) * 0x18),(longlong)iVar3 * 0x18);
            iVar2 = *(int *)(param_1 + 0x5c8);
          }
          *(int *)(param_1 + 0x5c8) = iVar2 + -1;
          TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar1);
        }
        lVar6 = lVar6 + -0x18;
        lVar5 = lVar5 + -0x18;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  return;
}



// FUNCTION 1426ff970 FUN_1426ff970 body=326 status=ok
// SIG undefined FUN_1426ff970(void)

void FUN_1426ff970(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = *(int *)(param_1 + 0x804);
    plVar3 = *(longlong **)(param_1 + 0x7f8);
    iVar2 = *(int *)(param_1 + 0x800);
    if (iVar4 < 0) {
      if (iVar2 != 0) {
        do {
          iVar4 = (int)plVar3[1];
          lVar1 = *plVar3;
          if (iVar4 != 0) {
            lVar1 = lVar1 + 8;
            do {
              FRichCurve::~FRichCurve(lVar1);
              lVar1 = lVar1 + 0x80;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            lVar1 = *plVar3;
          }
          if (lVar1 != 0) {
            FMemory::Free();
          }
          plVar3 = plVar3 + 5;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        iVar4 = *(int *)(param_1 + 0x804);
      }
      *(undefined4 *)(param_1 + 0x800) = 0;
      if (iVar4 != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                  ((undefined8 *)(param_1 + 0x7f8),0);
      }
    }
    else {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        iVar4 = (int)plVar3[1];
        lVar1 = *plVar3;
        if (iVar4 != 0) {
          lVar1 = lVar1 + 8;
          do {
            FRichCurve::~FRichCurve(lVar1);
            lVar1 = lVar1 + 0x80;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          lVar1 = *plVar3;
        }
        if (lVar1 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 5;
      }
      *(undefined4 *)(param_1 + 0x800) = 0;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x800) + -1;
    if (-1 < iVar4) {
      lVar1 = (longlong)iVar4 * 0x28;
      do {
        if ((param_2 == 0) ||
           (*(longlong *)(*(longlong *)(param_1 + 0x7f8) + 0x18 + lVar1) == param_2)) {
          FUN_142714090((longlong *)(param_1 + 0x7f8),iVar4,1);
        }
        lVar1 = lVar1 + -0x28;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  return;
}



// FUNCTION 1426ffac0 FUN_1426ffac0 body=444 status=ok
// SIG undefined FUN_1426ffac0(void)

void FUN_1426ffac0(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4)

{
  void *_Src;
  longlong *plVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  local_40 = *(int *)(param_3 + 1);
  lVar4 = (longlong)local_40;
  _Src = (void *)*param_3;
  local_48 = (undefined2 *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
    _guard_xfg_dispatch_icall_nop(local_48,_Src,lVar4 * 2);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b08d80) {
    _Init_thread_header(&DAT_146b08d80);
    if (DAT_146b08d80 == -1) {
      FName::FName(&DAT_146b08d78,&DAT_145173f80,1);
      _Init_thread_footer(&DAT_146b08d80);
    }
  }
  if ((param_4 == DAT_146b08d78) && (param_2 != 0)) {
    puVar3 = &DAT_143f3eda8;
    puVar5 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar5 = local_48;
    }
    puVar2 = (undefined8 *)FUN_14270d290(param_2,local_28);
    if (*(int *)(puVar2 + 1) != 0) {
      puVar3 = (undefined2 *)*puVar2;
    }
    FString::PrintfImpl(&local_38,L"%s: %s",puVar3,puVar5);
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_48 = local_38;
    local_40 = (int)local_30;
    local_3c = local_30._4_4_;
    local_30 = 0;
    local_38 = (undefined2 *)0x0;
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if (((*(longlong *)(param_1 + 0x508) != 0) &&
      (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x70), lVar4 != 0)) &&
     (plVar1 = *(longlong **)(lVar4 + 0x50), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x298))(plVar1,&local_48);
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426ffc80 FUN_1426ffc80 body=55 status=ok
// SIG undefined FUN_1426ffc80(void)

void FUN_1426ffc80(longlong param_1,undefined8 param_2,int param_3,char param_4)

{
  if ((param_4 != '\0') && (param_3 == 2)) {
    *(short *)(param_1 + 0x6c8) = *(short *)(param_1 + 0x6c8) + 1;
  }
  FUN_1429e1320();
  return;
}



// FUNCTION 1426ffcc0 FUN_1426ffcc0 body=508 status=ok
// SIG undefined FUN_1426ffcc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426ffcc0(longlong *param_1,undefined8 *param_2,int param_3,char param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8 [2];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar1 = (**(code **)(*param_1 + 0x148))();
  (**(code **)(*param_1 + 0xe90))(param_1,param_2,param_3,param_4);
  if ((param_4 == '\0') || (param_3 != 2)) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    FUN_14288d1c0(DAT_146b17150,uVar1,puVar5,param_3);
  }
  else {
    FWeakObjectPtr::operator=(&local_d8,uVar1);
    local_d0 = local_d8;
    local_cc = local_d4;
    FString::FString(local_c8,param_2);
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_GetPoolName_1451797a8;
      *(undefined4 *)(plVar2 + 1) = local_d0;
      *(undefined4 *)((longlong)plVar2 + 0xc) = local_cc;
      FString::FString(plVar2 + 2,local_c8);
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_1451797f0;
    }
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar1 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    local_b8 = 0;
    local_b0 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_b8);
    }
    FWeakObjectPtr::operator=(local_a8,0);
    local_a0 = 0;
    local_98 = AK::MemoryMgr::StartProfileThreadUsage;
    local_68 = (longlong *)0x0;
    local_58 = 0;
    FUN_142880af0(uVar1,&local_b8);
    if (local_58 != 0) {
      plVar4 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar4 = local_68;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar3 = FMemory::Realloc(plVar2,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
    if (local_c8[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1426ffec0 FUN_1426ffec0 body=191 status=ok
// SIG undefined FUN_1426ffec0(void)

void FUN_1426ffec0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  FUN_142714410(param_1 + 0xcd,param_2 + 8);
  lVar1 = param_1[0xa1];
  if (lVar1 != 0) {
    lVar3 = ULocalPlayer::GetPrivateStaticClass();
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
      plVar5 = (longlong *)UOnlineEngineInterface::Get();
      (**(code **)(*plVar5 + 0x360))
                (plVar5,uVar4,*(undefined1 *)(lVar1 + 0x108),*(undefined8 *)(param_2 + 8),0);
    }
  }
  FUN_1404bf980(param_2);
  return;
}



// FUNCTION 1426fff80 FUN_1426fff80 body=505 status=ok
// SIG undefined FUN_1426fff80(void)

void FUN_1426fff80(longlong *param_1,undefined8 param_2,char param_3,undefined1 param_4,char param_5
                  ,undefined4 param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  undefined8 local_res8;
  longlong local_res10;
  longlong local_38;
  undefined2 *local_30;
  int local_28;
  
  local_res8 = param_2;
  local_res10 = param_2;
  FName::ToString(&local_res8,&local_30);
  lVar5 = *DAT_146b17150;
  uVar4 = FUN_1422325e0(param_1);
  (**(code **)(lVar5 + 0x400))(DAT_146b17150,uVar4,&local_30,1);
  puVar7 = &DAT_143f3eda8;
  if (local_28 != 0) {
    puVar7 = local_30;
  }
  FName::FName(&local_38,puVar7,1);
  if (local_30 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_res10 = local_38;
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar5 == 0) || (*(longlong *)(lVar5 + 0x7e0) == 0)) ||
     (cVar3 = UWorldComposition::IsDistanceDependentLevel(*(longlong *)(lVar5 + 0x7e0),local_res10),
     cVar3 == '\0')) {
    cVar3 = FUN_14288f710(DAT_146b17150,lVar5);
    if (cVar3 != '\0') {
      FUN_1428655a0(DAT_146b17150,lVar5,local_res10,param_3,param_4,param_6);
      return;
    }
    if ((lVar5 != 0) && (local_res8 = 0, local_res10 != 0)) {
      plVar8 = *(longlong **)(lVar5 + 0x88);
      plVar1 = plVar8 + *(int *)(lVar5 + 0x90);
      for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
        plVar2 = (longlong *)*plVar8;
        if ((plVar2 != (longlong *)0x0) &&
           (plVar6 = (longlong *)ULevelStreaming::GetWorldAssetPackageFName(plVar2,&local_res8),
           *plVar6 == local_res10)) {
          cVar3 = (**(code **)(*plVar2 + 0x280))(plVar2);
          if ((cVar3 != '\0') && (param_3 == '\0')) {
            Z_Construct_UClass_UHoudiniAssetBlueprintComponent_Statics::
            NewProp_bHasRegisteredComponentTemplate_SetBit(DAT_146b17150);
          }
          (**(code **)(*plVar2 + 0x278))(plVar2,param_3);
          ULevelStreaming::SetShouldBeVisible(plVar2,param_4);
          *(byte *)((longlong)plVar2 + 0xb6) = *(byte *)((longlong)plVar2 + 0xb6) & 0xbf;
          *(byte *)((longlong)plVar2 + 0xb6) = *(byte *)((longlong)plVar2 + 0xb6) | param_5 << 6;
          ULevelStreaming::SetLevelLODIndex(plVar2,param_6);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142700180 FUN_142700180 body=127 status=ok
// SIG undefined FUN_142700180(void)

void FUN_142700180(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_2;
  puVar3 = puVar2 + (longlong)(int)param_2[1] * 2;
  for (; puVar2 != puVar3; puVar2 = puVar2 + 2) {
    uVar1 = *(uint *)((longlong)puVar2 + 0xc);
    (**(code **)(*param_1 + 0x9b8))
              (param_1,*puVar2,uVar1 & 0xffffff01,
               CONCAT31((uint3)(uVar1 >> 9),(char)(uVar1 >> 1)) & 0xffffff01,(byte)(uVar1 >> 2) & 1,
               *(undefined4 *)(puVar2 + 1));
  }
  return;
}



// FUNCTION 142700200 FUN_142700200 body=316 status=ok
// SIG undefined FUN_142700200(void)

ulonglong FUN_142700200(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                       float param_5)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  float local_res8 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_res8[0] = -1.0;
  local_48 = 0;
  lVar2 = (**(code **)(*param_1 + 0x6d0))(0xbf800000,0,1);
  uVar3 = 0;
  if (((lVar2 != 0) &&
      (uVar3 = FUN_142698df0(lVar2,param_3,local_res8,&local_48,0), (char)uVar3 != '\0')) &&
     ((param_5 <= 0.0 || (local_res8[0] <= param_5 * param_5)))) {
    local_30 = local_40;
    local_28 = 0xffffffff;
    uStack_24 = 0;
    local_20 = 0;
    uStack_1c = 0;
    local_38 = local_48;
    if (local_res8[0] <= 0.0) {
      local_2c = 0.0;
    }
    else {
      local_2c = SQRT(local_res8[0]);
    }
    FWeakObjectPtr::operator=(&local_28,param_1);
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_2,iVar1);
    }
    puVar4 = (undefined8 *)((longlong)iVar1 * 0x20 + *param_2);
    *puVar4 = local_38;
    *(undefined4 *)(puVar4 + 1) = local_30;
    *(float *)((longlong)puVar4 + 0xc) = local_2c;
    *(undefined4 *)(puVar4 + 2) = local_28;
    *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_24;
    puVar4[3] = CONCAT44(uStack_1c,local_20);
    return CONCAT71((int7)(CONCAT44(uStack_1c,local_20) >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142700340 ComputeBrickTextureCoordinate body=330 status=ok
// SIG undefined ComputeBrickTextureCoordinate(void)

float * ComputeBrickTextureCoordinate
                  (float *param_1,float *param_2,undefined8 *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_18;
  int iStack_14;
  
  iVar1 = param_5 + 1;
  fVar10 = 1.0 / (float)param_4;
  fVar12 = fVar10 * *param_2;
  iStack_14 = (int)((ulonglong)*param_3 >> 0x20);
  fVar11 = fVar10 * param_2[1];
  fVar10 = fVar10 * param_2[2];
  iVar2 = *(int *)(param_3 + 1);
  local_18 = (int)*param_3;
  uVar3 = iStack_14 * iVar1;
  iVar5 = (int)fVar12;
  fVar13 = (float)param_5;
  uVar4 = uVar3;
  fVar6 = fVar12;
  if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar12)) {
    auVar7._4_4_ = fVar12;
    auVar7._0_4_ = fVar12;
    auVar7._8_8_ = 0;
    uVar4 = movmskps(uVar3,auVar7);
    uVar4 = uVar4 & 1;
    fVar6 = (float)(int)(iVar5 - uVar4);
  }
  iVar5 = (int)fVar11;
  *param_1 = (fVar12 - fVar6) * fVar13 + (float)(local_18 * iVar1);
  fVar6 = fVar11;
  if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar11)) {
    auVar8._4_4_ = fVar11;
    auVar8._0_4_ = fVar11;
    auVar8._8_8_ = 0;
    uVar4 = movmskps(uVar4,auVar8);
    fVar6 = (float)(int)(iVar5 - (uVar4 & 1));
  }
  iVar5 = (int)fVar10;
  param_1[1] = (fVar11 - fVar6) * fVar13 + (float)(int)uVar3;
  fVar6 = fVar10;
  if ((iVar5 != -0x80000000) && ((float)iVar5 != fVar10)) {
    auVar9._4_4_ = fVar10;
    auVar9._0_4_ = fVar10;
    auVar9._8_8_ = 0;
    uVar4 = movmskps(uVar3,auVar9);
    fVar6 = (float)(int)(iVar5 - (uVar4 & 1));
  }
  param_1[2] = (fVar10 - fVar6) * fVar13 + (float)(iVar2 * iVar1);
  return param_1;
}



// FUNCTION 142700490 ComputeIndirectionCoordinate body=328 status=ok
// SIG undefined ComputeIndirectionCoordinate(void)

float * ComputeIndirectionCoordinate(float *param_1,float *param_2,float *param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int local_38;
  
  fVar3 = 1.0 / (param_3[3] - *param_3);
  fVar2 = 1.0 / (param_3[5] - param_3[2]);
  fVar1 = 1.0 / (param_3[4] - param_3[1]);
  fVar4 = (fVar1 * param_2[1] - fVar1 * param_3[1]) *
          (float)(int)((ulonglong)*(undefined8 *)param_4 >> 0x20);
  fVar1 = (fVar2 * param_2[2] - fVar2 * param_3[2]) * (float)param_4[2];
  local_38 = (int)*(undefined8 *)param_4;
  fVar2 = (fVar3 * *param_2 - fVar3 * *param_3) * (float)local_38;
  if (0.0 <= fVar2) {
    fVar3 = (float)*param_4 - 0.01;
    if (fVar2 <= (float)*param_4 - 0.01) {
      fVar3 = fVar2;
    }
  }
  else {
    fVar3 = 0.0;
  }
  *param_1 = fVar3;
  if (0.0 <= fVar4) {
    fVar2 = (float)param_4[1] - 0.01;
    if (fVar4 <= (float)param_4[1] - 0.01) {
      fVar2 = fVar4;
    }
  }
  else {
    fVar2 = 0.0;
  }
  param_1[1] = fVar2;
  if (fVar1 < 0.0) {
    param_1[2] = 0.0;
    return param_1;
  }
  fVar2 = (float)param_4[2] - 0.01;
  if (fVar1 <= (float)param_4[2] - 0.01) {
    fVar2 = fVar1;
  }
  param_1[2] = fVar2;
  return param_1;
}



// FUNCTION 1427005e0 FUN_1427005e0 body=53 status=ok
// SIG undefined FUN_1427005e0(void)

undefined8 * FUN_1427005e0(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x508) != 0) {
    FUN_1426dad90();
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 142700620 FUN_142700620 body=204 status=ok
// SIG undefined FUN_142700620(void)

void FUN_142700620(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  *(undefined4 *)(param_2 + 0x8b) = *(undefined4 *)(param_1 + 0x458);
  *(undefined1 *)((longlong)param_2 + 0x45c) = *(undefined1 *)(param_1 + 0x45c);
  *(undefined4 *)(param_2 + 0x93) = *(undefined4 *)(param_1 + 0x498);
  *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x480);
  *(undefined4 *)((longlong)param_2 + 0x51c) = *(undefined4 *)(param_1 + 0x51c);
  (**(code **)(*param_2 + 0x758))(param_2,param_1 + 0x4b8);
  lVar1 = *param_2;
  uVar2 = FUN_14270d290(param_1,local_18);
  (**(code **)(lVar1 + 0x738))(param_2,uVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_2 + 0x91) = *(undefined4 *)(param_1 + 0x488);
  FString::operator=(param_2 + 0x94,param_1 + 0x4a0);
  *(undefined1 *)(param_2 + 0xa4) = *(undefined1 *)(param_1 + 0x520);
  return;
}



// FUNCTION 1427006f0 FUN_1427006f0 body=95 status=ok
// SIG undefined FUN_1427006f0(void)

void FUN_1427006f0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1451797a8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    FString::FString(puVar1 + 2,param_1 + 0x10);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar1 = &PTR_GetPoolName_1451797f0;
  }
  return;
}



// FUNCTION 142700750 FUN_142700750 body=56 status=ok
// SIG undefined FUN_142700750(void)

void FUN_142700750(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145179768;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 142700790 FUN_142700790 body=332 status=ok
// SIG undefined FUN_142700790(void)

undefined8 * FUN_142700790(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_145179838;
  *(undefined1 *)(plVar6 + 5) = 0;
  plVar6[6] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 1427008e0 FUN_1427008e0 body=332 status=ok
// SIG undefined FUN_1427008e0(void)

undefined8 * FUN_1427008e0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_145179848;
  *(undefined1 *)(plVar6 + 5) = 0;
  plVar6[6] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 142700a30 FUN_142700a30 body=488 status=ok
// SIG undefined FUN_142700a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142700a30(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  DWORD DVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined4 local_88;
  longlong *local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  wchar_t *local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  local_68[1] = 0;
  local_58 = 1;
  local_54 = _DAT_1468b5d78;
  uStack_50 = uRam00000001468b5d7c;
  uStack_4c = uRam00000001468b5d80;
  uStack_48 = uRam00000001468b5d84;
  local_40 = L"VolumetricLightmap";
  local_80 = local_68;
  local_98 = *(undefined1 *)(param_1 + 0x1c);
  local_88 = 0x408;
  local_90 = 1;
  local_a0 = param_2[2];
  local_a8 = param_2[1];
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_68[0] = param_1;
  (**(code **)(*DAT_146ab6358 + 0x5f8))(DAT_146ab6358,local_78,&DAT_146ab6e78,*param_2);
  plVar1 = (longlong *)(param_1 + 0x20);
  if (plVar1 != local_78) {
    puVar4 = (undefined8 *)*plVar1;
    *plVar1 = local_78[0];
    local_78[0] = 0;
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
          bVar10 = *(int *)((longlong)puVar4 + 0xc) == 0;
          if (bVar10) {
            *(int *)((longlong)puVar4 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar10) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            lVar8 = 0;
            if (uVar6 != 0) {
              lVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar8 + 8) = puVar4;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_78);
  lVar8 = DAT_146b08cc8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    lVar9 = 4;
    if (DVar7 != DAT_1468c21c0) goto LAB_142700bd7;
  }
  lVar9 = 0;
LAB_142700bd7:
  if (0 < *(int *)(lVar9 + lVar8)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
    }
  }
  return;
}



// FUNCTION 142700c20 FUN_142700c20 body=1302 status=ok
// SIG undefined FUN_142700c20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142700c20(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  longlong local_240;
  undefined4 local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  undefined1 local_218;
  undefined1 local_210;
  longlong local_208;
  longlong *local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8 [2];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong local_188 [2];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  longlong *local_160;
  undefined1 local_148 [272];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  lVar9 = param_1[0xa1];
  if (lVar9 == 0) {
    return;
  }
  local_1b8 = lVar9;
  lVar8 = ULocalPlayer::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return;
  }
  if (*(longlong *)(lVar9 + 0x70) == 0) {
    return;
  }
  cVar6 = SVirtualJoystick::ShouldDisplayTouchInterface();
  if (cVar6 == '\0') {
    return;
  }
  if (param_1[0xea] == 0) goto LAB_142700d96;
  lVar9 = param_1[0xa1];
  if (lVar9 == 0) {
LAB_142700d15:
    lVar9 = 0;
  }
  else {
    lVar8 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_142700d15;
  }
  plVar12 = *(longlong **)(lVar9 + 0x70);
  plVar4 = (longlong *)param_1[0xeb];
  lVar9 = param_1[0xea];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_1d8._0_4_ = (undefined4)lVar9;
  local_1d8._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
  uStack_1d0._0_4_ = SUB84(plVar4,0);
  uStack_1d0._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
  local_198 = (undefined4)local_1d8;
  uStack_194 = local_1d8._4_4_;
  uStack_190 = (undefined4)uStack_1d0;
  uStack_18c = uStack_1d0._4_4_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_1d8 = lVar9;
  uStack_1d0 = plVar4;
  (**(code **)(*plVar12 + 0x2a8))(plVar12,&local_198);
  plVar12 = uStack_1d0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar4 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*uStack_1d0)(uStack_1d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_1d0 + 8))(uStack_1d0,1);
      }
    }
  }
LAB_142700d96:
  if (param_1[0xec] == 0) {
    lVar9 = GetDefault<UInputSettings>();
    local_1b0 = *(longlong *)(lVar9 + 0xa0);
    FString::FString(local_1a8,lVar9 + 0xa8);
    local_1e8 = 0;
    if (local_1b0 != 0) {
      puVar10 = (undefined8 *)FSoftObjectPath::ToString(&local_1b0,local_188);
      if (*(int *)(puVar10 + 1) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*puVar10;
      }
      uVar11 = UTouchInterface::GetPrivateStaticClass();
      local_238 = CONCAT31(local_238._1_3_,1);
      local_240 = 0;
      local_248 = (ulonglong)local_248._4_4_ << 0x20;
      lVar9 = FUN_141799c90(uVar11,0,puVar13,0);
      param_1[0xec] = lVar9;
      if (local_188[0] != 0) {
        FMemory::Free();
      }
    }
    if (local_1a8[0] != 0) {
      FMemory::Free();
    }
    if (param_1[0xec] == 0) {
      return;
    }
  }
  plVar12 = (longlong *)FUN_1426f4c20();
  plVar4 = plVar12 + 2;
  local_168 = plVar4;
  local_160 = plVar12;
  FUN_14044f790(&local_168,plVar4);
  local_248 = 0x240;
  SWidget::SetDebugInfo
            (plVar4,"SVirtualJoystick",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PlayerController.cpp",0x4a9);
  lVar9 = STSDRichInlineImage::FArguments::FArguments(local_148);
  local_238 = *(undefined4 *)(lVar9 + 0x90);
  local_208 = lVar9 + 0xf8;
  local_220 = lVar9 + 0xe8;
  local_210 = *(undefined1 *)(lVar9 + 0xf1);
  local_228 = lVar9 + 200;
  local_230 = lVar9 + 0x98;
  local_218 = *(undefined1 *)(lVar9 + 0xf0);
  local_240 = lVar9 + 0x78;
  local_248 = lVar9 + 0x60;
  SWidget::SWidgetConstruct(plVar4,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_141978ea0(plVar4,lVar9);
  if (((char)plVar12[5] < '\0') || (cVar6 = (**(code **)(*plVar4 + 0x1e8))(plVar4), cVar6 != '\0'))
  {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar12 + 0x29) = *(byte *)((longlong)plVar12 + 0x29) | bVar7;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_1f8 = plVar4;
  local_1f0 = plVar12;
  if ((longlong **)(param_1 + 0xea) != &local_1f8) {
    param_1[0xea] = (longlong)plVar4;
    local_1f8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xeb,&local_1f0);
  }
  plVar4 = local_1f0;
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1f0 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1f0 + 8))(local_1f0,1);
      }
    }
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
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
    LOCK();
    plVar4 = plVar12 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  FUN_140456c70(local_148);
  lVar9 = param_1[0xea];
  plVar4 = (longlong *)param_1[0xeb];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_1c8._0_4_ = (undefined4)lVar9;
  local_1c8._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
  uStack_1c0._0_4_ = SUB84(plVar4,0);
  uStack_1c0._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
  local_178 = (undefined4)local_1c8;
  uStack_174 = local_1c8._4_4_;
  uStack_170 = (undefined4)uStack_1c0;
  uStack_16c = uStack_1c0._4_4_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_1c8 = lVar9;
  uStack_1c0 = plVar4;
  (**(code **)(**(longlong **)(local_1b8 + 0x70) + 0x2a0))
            (*(longlong **)(local_1b8 + 0x70),&local_178,0);
  plVar12 = uStack_1c0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar4 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*uStack_1c0)(uStack_1c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_1c0 + 8))(uStack_1c0,1);
      }
    }
  }
  (**(code **)(*param_1 + 0xcb0))(param_1,param_1[0xec]);
  return;
}



// FUNCTION 142701140 FUN_142701140 body=1674 status=ok
// SIG undefined FUN_142701140(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142701140(longlong param_1,longlong *param_2,float *param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_1aa8 [32];
  undefined1 local_1a88;
  undefined8 local_1a78;
  undefined8 uStack_1a70;
  float local_1a68;
  float local_1a64;
  float local_1a60;
  float local_1a58;
  float local_1a54;
  float local_1a50;
  float local_1a44;
  float local_1a40;
  float local_1a3c;
  longlong local_1a28;
  longlong lStack_1a20;
  longlong local_1a18;
  longlong lStack_1a10;
  longlong *local_1a08;
  longlong local_19f8;
  longlong lStack_19f0;
  undefined4 local_19e8;
  undefined4 uStack_19e4;
  undefined4 uStack_19e0;
  undefined4 uStack_19dc;
  undefined4 local_19d8;
  undefined4 uStack_19d4;
  undefined4 uStack_19d0;
  undefined4 uStack_19cc;
  longlong local_108;
  undefined8 local_f8;
  longlong *local_e8;
  int local_e0;
  ulonglong local_d8;
  undefined8 uStack_30;
  
  if (param_4 != 0) {
    uStack_30 = 0x142701162;
    local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1aa8;
    local_1a08 = *(longlong **)(param_1 + 0x20);
    local_1a28 = *(longlong *)((longlong)local_1a08 + 0x60);
    lStack_1a20 = *(undefined8 *)((longlong)local_1a08 + 0x68);
    iVar1 = 0;
    local_1a18 = *(undefined8 *)((longlong)local_1a08 + 0x70);
    lStack_1a10 = *(undefined8 *)((longlong)local_1a08 + 0x78);
    local_19f8 = *(undefined8 *)((longlong)local_1a08 + 0x60);
    lStack_19f0 = *(undefined8 *)((longlong)local_1a08 + 0x68);
    local_19e8 = *(undefined4 *)((longlong)local_1a08 + 0x70);
    uStack_19e4 = *(undefined4 *)((longlong)local_1a08 + 0x74);
    uStack_19e0 = *(undefined4 *)((longlong)local_1a08 + 0x78);
    uStack_19dc = *(undefined4 *)((longlong)local_1a08 + 0x7c);
    local_19d8 = *(undefined4 *)((longlong)local_1a08 + 0x80);
    uStack_19d4 = *(undefined4 *)((longlong)local_1a08 + 0x84);
    uStack_19d0 = *(undefined4 *)((longlong)local_1a08 + 0x88);
    uStack_19cc = *(undefined4 *)((longlong)local_1a08 + 0x8c);
    local_108 = 0;
    local_f8 = 0;
    local_e0 = 0;
    local_e8 = local_1a08;
    TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
    TConstElementBoxIterator<TInlineAllocator<99,FDefaultAllocator>_>::ProcessChildren(&local_1a28);
    FUN_1426fa670(&local_1a28);
    while (local_1a08 != (longlong *)0x0) {
      local_e0 = local_e0 + 1;
      iVar1 = iVar1 + 1;
      FUN_1426fa670(&local_1a28);
    }
    if (local_108 != 0) {
      FMemory::Free();
    }
    (**(code **)(*param_2 + 0x28))(param_2,0,iVar1);
    local_1a08 = *(longlong **)(param_1 + 0x20);
    local_1a28 = local_1a08[0xc];
    lStack_1a20 = local_1a08[0xd];
    local_1a18 = local_1a08[0xe];
    lStack_1a10 = local_1a08[0xf];
    local_19f8 = local_1a08[0xc];
    lStack_19f0 = local_1a08[0xd];
    local_19e8 = (undefined4)local_1a08[0xe];
    uStack_19e4 = *(undefined4 *)((longlong)local_1a08 + 0x74);
    uStack_19e0 = (undefined4)local_1a08[0xf];
    uStack_19dc = *(undefined4 *)((longlong)local_1a08 + 0x7c);
    local_19d8 = (undefined4)local_1a08[0x10];
    uStack_19d4 = *(undefined4 *)((longlong)local_1a08 + 0x84);
    uStack_19d0 = (undefined4)local_1a08[0x11];
    uStack_19cc = *(undefined4 *)((longlong)local_1a08 + 0x8c);
    local_108 = 0;
    local_f8 = 0;
    local_e0 = 0;
    local_e8 = local_1a08;
    TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
    TConstElementBoxIterator<TInlineAllocator<99,FDefaultAllocator>_>::ProcessChildren(&local_1a28);
    FUN_1426fa670(&local_1a28);
    if (local_1a08 != (longlong *)0x0) {
      uStack_30 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
      do {
        uVar8 = 0x41200000;
        pfVar2 = (float *)((longlong)local_e0 * 0x140 + *local_e8);
        local_1a78 = 0;
        uStack_1a70 = 0;
        switch(param_4) {
        case 2:
          local_1a78 = CONCAT44(pfVar2[0x34] * 0.31830987 * param_3[1] + pfVar2[0x10] * 0.31830987,
                                pfVar2[0x28] * 0.31830987 * *param_3 + pfVar2[4] * 0.31830987);
          uStack_1a70._0_4_ = pfVar2[0x40] * 0.31830987 * param_3[2] + pfVar2[0x1c] * 0.31830987;
          break;
        case 3:
          uStack_1a70._0_4_ = pfVar2[0x1c] * 0.31830987;
          local_1a78 = CONCAT44(pfVar2[0x10] * 0.31830987,pfVar2[4] * 0.31830987);
          break;
        case 4:
          local_1a78 = CONCAT44(pfVar2[0x34] * 0.31830987 * param_3[1],
                                pfVar2[0x28] * 0.31830987 * *param_3);
          uStack_1a70._0_4_ = pfVar2[0x40] * 0.31830987 * param_3[2];
          break;
        case 5:
          uStack_1a70._0_4_ = pfVar2[0x4d];
          goto LAB_14270149e;
        case 6:
          fVar4 = (float)*(byte *)((longlong)pfVar2 + 0x131) * 0.003921569;
          fVar3 = (float)*(byte *)((longlong)pfVar2 + 0x132) * 0.003921569;
          fVar10 = (fVar4 + fVar4) - 1.0;
          fVar9 = (fVar3 + fVar3) - 1.0;
          fVar11 = ((float)*(byte *)(pfVar2 + 0x4c) * 0.003921569 +
                   (float)*(byte *)(pfVar2 + 0x4c) * 0.003921569) - 1.0;
          fVar5 = fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11;
          fVar3 = fVar9;
          fVar4 = fVar10;
          fVar6 = fVar11;
          if ((fVar5 != 1.0) &&
             (fVar3 = DAT_1468b5d90, fVar4 = DAT_1468b5d94, fVar6 = DAT_1468b5d98, 1e-08 <= fVar5))
          {
            auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
            fVar6 = auVar7._0_4_;
            fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
            fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
            fVar3 = fVar9 * fVar6;
            fVar4 = fVar10 * fVar6;
            fVar6 = fVar11 * fVar6;
          }
          local_1a68 = (fVar3 + 1.0) * 0.5;
          local_1a64 = (fVar4 + 1.0) * 0.5;
          local_1a60 = (fVar6 + 1.0) * 0.5;
          FLinearColor::FLinearColor(&local_1a44,&local_1a68);
          uStack_1a70._0_4_ = (float)uStack_1a70 + local_1a3c;
          local_1a78 = CONCAT44(local_1a78._4_4_ + local_1a40,(float)local_1a78 + local_1a44);
          break;
        case 7:
          fVar3 = (float)*(byte *)((longlong)pfVar2 + 0x131) * 0.003921569;
          fVar6 = (float)*(byte *)((longlong)pfVar2 + 0x132) * 0.003921569;
          fVar4 = (fVar3 + fVar3) - 1.0;
          fVar3 = ((float)*(byte *)(pfVar2 + 0x4c) * 0.003921569 +
                  (float)*(byte *)(pfVar2 + 0x4c) * 0.003921569) - 1.0;
          fVar6 = (fVar6 + fVar6) - 1.0;
          uStack_1a70._0_4_ = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar3 * fVar3);
LAB_14270149e:
          local_1a78 = CONCAT44((float)uStack_1a70,(float)uStack_1a70);
          break;
        default:
          local_1a78 = 0x3f800000;
          uVar8 = 0x40a00000;
          uStack_1a70._0_4_ = 1.0;
        }
        uStack_1a70 = CONCAT44(0x3f800000,(float)uStack_1a70);
        local_1a50 = pfVar2[2] + *(float *)(param_1 + 0x30);
        local_1a54 = pfVar2[1] + *(float *)(param_1 + 0x2c);
        local_1a58 = *pfVar2 + *(float *)(param_1 + 0x28);
        local_1a88 = 0;
        (**(code **)(*param_2 + 0x40))(param_2,&local_1a58,&local_1a78,uVar8);
        local_e0 = local_e0 + 1;
        FUN_1426fa670(&local_1a28);
      } while (local_1a08 != (longlong *)0x0);
    }
    if (local_108 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1427017f0 FUN_1427017f0 body=59 status=ok
// SIG undefined FUN_1427017f0(void)

undefined1 FUN_1427017f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = AActor::GetWorldSettings();
  if (lVar1 != 0) {
    lVar1 = AActor::GetWorldSettings(param_1);
    if (*(longlong *)(lVar1 + 0x600) == *(longlong *)(param_1 + 0x460)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142701830 FUN_142701830 body=478 status=ok
// SIG undefined FUN_142701830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142701830(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
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
  uVar2 = (**(code **)(*param_1 + 0x148))();
  cVar1 = FUN_1428cfae0(uVar2);
  if (cVar1 == '\0') {
    UWorld::PrepareMapChange(uVar2,param_1 + 0xc6);
  }
  else {
    uStack_90 = 0;
    local_98 = &LAB_1426f894c;
    uVar2 = AActor::GetWorldTimerManager(param_1);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_8c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_a0 = 0xbf800000;
    local_a8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar2,param_1 + 0xee,&local_88,0x3c23d70a);
    if (local_28 != 0) {
      plVar5 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar5 = local_38;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
  }
  return;
}



// FUNCTION 142701a10 FUN_142701a10 body=173 status=ok
// SIG undefined FUN_142701a10(void)

ulonglong FUN_142701a10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  
  lVar2 = *(longlong *)(param_1 + 0x508);
  if (lVar2 != 0) {
    lVar3 = ULocalPlayer::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((((char)in_RAX != '\0') && (*(longlong *)(lVar2 + 0x70) != 0)) &&
       (in_RAX = FUN_142480f40(*(longlong *)(lVar2 + 0x70),local_res8), (char)in_RAX != '\0')) {
      uVar4 = FUN_14244a240(param_1,local_res8,param_2,param_3,0,1);
      return uVar4;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142701ac0 FUN_142701ac0 body=60 status=ok
// SIG undefined FUN_142701ac0(void)

void FUN_142701ac0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_2;
  local_14 = param_3;
  FUN_14244a240(param_1,&local_18,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 142701b00 Destroy body=106 status=ok
// SIG undefined Destroy(void)

void TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::Destroy(undefined8 *param_1)

{
  uint uVar1;
  
  FNode::~FNode();
  *param_1 = 0;
  uVar1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x80000000;
  do {
    param_1[(ulonglong)(uVar1 & 7) + 3] = 0;
    if (((byte)uVar1 & 7) < 7) {
      uVar1 = uVar1 ^ (uVar1 + 1 ^ uVar1) & 7;
    }
    else {
      uVar1 = uVar1 | 8;
    }
  } while (uVar1 >> 3 == 0);
  param_1[0x13] = 0;
  return;
}



// FUNCTION 142701b70 FUN_142701b70 body=129 status=ok
// SIG undefined FUN_142701b70(void)

undefined8 FUN_142701b70(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x508);
  if (lVar1 != 0) {
    lVar3 = FUN_1429c30a0();
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
      if ((**(longlong **)(lVar1 + 0x1580) != 0) && (*(int *)(lVar1 + 300) != 1)) {
        *(uint *)(lVar1 + 0x130) = *(uint *)(lVar1 + 0x130) | 1;
        (**(code **)(*(longlong *)**(longlong **)(lVar1 + 0x1580) + 0x288))();
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142701c00 FUN_142701c00 body=35 status=ok
// SIG undefined FUN_142701c00(void)

void FUN_142701c00(longlong param_1)

{
  FUN_14243ef60(param_1 + 0x218);
  FUN_1417f85e0(param_1 + 0x10);
  return;
}



// FUNCTION 142701c30 FUN_142701c30 body=173 status=ok
// SIG undefined FUN_142701c30(void)

void FUN_142701c30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  lVar1 = param_1[0xf7];
  if (lVar1 != 0) {
    lVar2 = (**(code **)(*param_1 + 0x758))();
    if (lVar2 == lVar1) {
      local_c = local_c & 0xfffffffe;
      local_18 = 0;
      local_10 = 0x40000000;
      local_14 = 1;
      (**(code **)(*param_1 + 0xe18))(param_1,param_1,&local_18);
    }
    (**(code **)(*(longlong *)param_1[0xf7] + 0x718))();
    lVar1 = param_1[0xf7];
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    FUN_142543860(uVar3,lVar1,0,1);
    (**(code **)(*param_1 + 0xe58))(param_1,0);
  }
  return;
}



// FUNCTION 142701ce0 FUN_142701ce0 body=208 status=ok
// SIG undefined FUN_142701ce0(void)

void FUN_142701ce0(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1[0x91] != 0) {
    if ((param_1[0xa1] == 0) && ((char)param_1[0x25] == '\x03')) {
      (**(code **)(*param_1 + 0xdc0))();
    }
    else {
      (**(code **)(*param_1 + 0x780))();
    }
  }
  if (param_1[0xf7] != 0) {
    (**(code **)(*param_1 + 0xe68))(param_1);
  }
  if (param_1[0xa4] != 0) {
    FUN_142227350(param_1[0xa4],0,1);
    param_1[0xa4] = 0;
  }
  if (param_1[0xa5] != 0) {
    FUN_142227350(param_1[0xa5],0,1);
    param_1[0xa5] = 0;
  }
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  if (*(longlong *)(lVar1 + 0x140) != 0) {
    FUN_14244cd30(*(longlong *)(lVar1 + 0x140),param_1);
  }
  param_1[0xb7] = 0;
  param_1[0xb5] = 0;
  FUN_1423cd8a0(param_1);
  return;
}



// FUNCTION 142701db0 FUN_142701db0 body=198 status=ok
// SIG undefined FUN_142701db0(void)

void FUN_142701db0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *local_18;
  int local_10;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  plVar1 = *(longlong **)(lVar3 + 0x148);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x738))(plVar1,param_1);
  }
  cVar2 = (**(code **)(*param_1 + 0x728))(param_1,1);
  if (cVar2 != '\0') {
    UWorld::GetPlayerControllerIterator(lVar3,&local_18);
    for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
      lVar3 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
      if (lVar3 != 0) {
        FUN_1429e0d40(lVar3,param_1[0x92],4,param_1,0,0);
      }
    }
  }
  (**(code **)(*param_1 + 0x768))(param_1);
  FUN_142227880(param_1);
  return;
}



// FUNCTION 142701e80 FUN_142701e80 body=18 status=ok
// SIG undefined FUN_142701e80(void)

void FUN_142701e80(longlong param_1,longlong param_2)

{
  if ((param_2 == param_1) || (param_2 == 0)) {
    *(uint *)(param_1 + 0x748) = *(uint *)(param_1 + 0x748) & 0xfffffff7;
  }
  return;
}



// FUNCTION 142701ec0 FUN_142701ec0 body=46 status=ok
// SIG undefined FUN_142701ec0(void)

void FUN_142701ec0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x798))();
  FUN_1429ed460(param_1,param_2);
  return;
}



// FUNCTION 142701ef0 FUN_142701ef0 body=2016 status=ok
// SIG undefined FUN_142701ef0(void)

void FUN_142701ef0(longlong *param_1,ulonglong param_2,longlong *param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  ulonglong uVar15;
  bool bVar16;
  ulonglong local_res10;
  ulonglong local_res18;
  undefined8 local_res20;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  longlong local_b8 [2];
  undefined2 *local_a8;
  int local_a0;
  longlong local_98 [2];
  longlong local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  
  puVar10 = param_5;
  bVar16 = false;
  local_res18 = local_res18 & 0xffffffff00000000;
  local_res10 = param_2;
  local_res20 = param_4;
  FUN_1423cd9e0(param_1,param_2,param_3,param_4,param_5);
  plVar1 = (longlong *)(param_2 + 0x98);
  local_b8[0] = 0x3f8000003f800000;
  local_b8[1] = 0x3f80000000000000;
  (**(code **)(*plVar1 + 0x20))(plVar1,local_b8);
  local_res18 = local_res18 & 0xffffffff00000000;
  uVar5 = FUN_1423d5960(param_1,&local_d8);
  puVar6 = (undefined8 *)FName::ToString(uVar5,local_b8);
  pwVar14 = L"";
  if (*(int *)(puVar6 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*puVar6;
  }
  FString::PrintfImpl(local_b8 + 2,L"STATE %s",puVar11);
  FUN_1428a6fb0(plVar1,local_b8 + 2,&local_res18);
  if (local_a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
  plVar8 = (longlong *)*param_3;
  local_res18 = 0x65;
  plVar4 = plVar8 + (int)param_3[1];
  for (; plVar8 != plVar4; plVar8 = plVar8 + 1) {
    if (*plVar8 == 0x65) {
      if (param_1[0xa5] == 0) {
        local_e8 = CONCAT44((float)DAT_1464aa738._1_1_ * 0.003921569,
                            (float)DAT_1464aa738._2_1_ * 0.003921569);
        local_e0 = CONCAT44((float)DAT_1464aa738._3_1_ * 0.003921569,
                            (float)(byte)DAT_1464aa738 * 0.003921569);
        (**(code **)(*plVar1 + 0x20))(plVar1,&local_e8);
        local_res18 = local_res18 & 0xffffffff00000000;
        local_e8 = 0;
        local_e0 = 0x14;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
        FGenericPlatformString::Memcpy(local_e8,L"<<<< NO CAMERA >>>>",0x28);
        FUN_1428a6fb0(plVar1,&local_e8,&local_res18);
        if (local_e8 != 0) {
          FMemory::Free();
        }
      }
      else {
        local_res18 = 0;
        local_e8 = 0;
        local_e0 = 0x11;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
        FGenericPlatformString::Memcpy(local_e8,L"<<<< CAMERA >>>>",0x22);
        FUN_1428a6fb0(plVar1,&local_e8,&local_res18);
        if (local_e8 != 0) {
          FMemory::Free();
        }
        (**(code **)(*(longlong *)param_1[0xa5] + 0x640))
                  ((longlong *)param_1[0xa5],param_2,param_3,local_res20,puVar10);
      }
      break;
    }
  }
  plVar8 = (longlong *)*param_3;
  local_res18 = 0xce;
  plVar4 = plVar8 + (int)param_3[1];
  if (plVar8 != plVar4) {
LAB_142702170:
    if (*plVar8 != 0xce) goto code_r0x000142702175;
    local_e8 = 0;
    local_e0 = 0;
    (**(code **)(*param_1 + 0xd68))(param_1,&local_e8);
    local_d8 = CONCAT44((float)DAT_1464aa730._1_1_ * 0.003921569,
                        (float)DAT_1464aa730._2_1_ * 0.003921569);
    local_d0 = CONCAT44((float)DAT_1464aa730._3_1_ * 0.003921569,
                        (float)(byte)DAT_1464aa730 * 0.003921569);
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_d8);
    local_res18 = local_res18 & 0xffffffff00000000;
    local_d8 = 0;
    local_d0 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"<<<< INPUT STACK >>>",0x2a);
    FUN_1428a6fb0(plVar1,&local_d8,&local_res18);
    if (local_d8 != 0) {
      FMemory::Free();
    }
    lVar9 = (longlong)((int)local_e0 + -1);
    uVar15 = param_2;
    if (-1 < (int)local_e0 + -1) {
      do {
        lVar2 = *(longlong *)(*(longlong *)(local_e8 + lVar9 * 8) + 0x118);
        local_c8 = (float)DAT_1464aa730._2_1_ * 0.003921569;
        local_c4 = (float)DAT_1464aa730._1_1_ * 0.003921569;
        local_c0 = (float)(byte)DAT_1464aa730 * 0.003921569;
        local_bc = (float)DAT_1464aa730._3_1_ * 0.003921569;
        (**(code **)(*plVar1 + 0x20))(plVar1,&local_c8);
        local_res18 = local_res18 & 0xffffffff00000000;
        lVar3 = *(longlong *)(*(longlong *)(local_e8 + lVar9 * 8) + 0x18);
        if (lVar2 == 0) {
          local_d8 = lVar3;
          FName::ToString(&local_d8,local_b8 + 2);
          puVar11 = &DAT_143f3eda8;
          if (local_a0 != 0) {
            puVar11 = local_a8;
          }
          FString::PrintfImpl(local_b8,&DAT_145174c80,puVar11);
          FUN_1428a6fb0(plVar1,local_b8,&local_res18);
          puVar11 = local_a8;
          if (local_b8[0] != 0) {
            FMemory::Free();
            puVar11 = local_a8;
          }
        }
        else {
          local_88 = lVar3;
          FName::ToString(&local_88,&local_70);
          local_d8 = *(longlong *)(lVar2 + 0x18);
          puVar11 = &DAT_143f3eda8;
          if (local_68 != 0) {
            puVar11 = local_70;
          }
          FName::ToString(&local_d8,&local_80);
          puVar12 = &DAT_143f3eda8;
          if (local_78 != 0) {
            puVar12 = local_80;
          }
          FString::PrintfImpl(local_98,L" %s.%s",puVar12,puVar11);
          FUN_1428a6fb0(plVar1,local_98,&local_res18);
          if (local_98[0] != 0) {
            FMemory::Free();
          }
          puVar11 = local_70;
          if (local_80 != (undefined2 *)0x0) {
            FMemory::Free();
            puVar11 = local_70;
          }
        }
        if (puVar11 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        lVar9 = lVar9 + -1;
        uVar15 = local_res10;
      } while (-1 < lVar9);
    }
    plVar4 = (longlong *)param_1[0xb7];
    if (plVar4 == (longlong *)0x0) {
      local_c8 = (float)DAT_1464aa738._2_1_ * 0.003921569;
      local_c4 = (float)DAT_1464aa738._1_1_ * 0.003921569;
      local_c0 = (float)(byte)DAT_1464aa738 * 0.003921569;
      local_bc = (float)DAT_1464aa738._3_1_ * 0.003921569;
      (**(code **)(*plVar1 + 0x20))(plVar1,&local_c8);
      local_res10 = local_res10 & 0xffffffff00000000;
      local_d8 = 0;
      local_d0 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
      FGenericPlatformString::Memcpy(local_d8,L"NO INPUT",0x12);
      FUN_1428a6fb0(plVar1,&local_d8,&local_res10);
      if (local_d8 != 0) {
        FMemory::Free();
      }
      puVar10 = (undefined4 *)CONCAT44(param_5._4_4_,param_5._0_4_);
    }
    else {
      puVar10 = (undefined4 *)CONCAT44(param_5._4_4_,param_5._0_4_);
      (**(code **)(*plVar4 + 0x288))(plVar4,uVar15,param_3,local_res20,puVar10);
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
  }
LAB_1427024f2:
  plVar7 = (longlong *)FName::FName(&param_5,"ForceFeedback",1);
  plVar8 = (longlong *)*param_3;
  plVar4 = plVar8 + (int)param_3[1];
  do {
    if (plVar8 == plVar4) {
LAB_1427026ac:
      *puVar10 = *(undefined4 *)(param_2 + 0x244);
      return;
    }
    if (*plVar8 == *plVar7) {
      local_c8 = (float)DAT_1464aa730._2_1_ * 0.003921569;
      local_c4 = (float)DAT_1464aa730._1_1_ * 0.003921569;
      local_c0 = (float)(byte)DAT_1464aa730 * 0.003921569;
      local_bc = (float)DAT_1464aa730._3_1_ * 0.003921569;
      (**(code **)(*plVar1 + 0x20))(plVar1,&local_c8);
      pwVar13 = L"false";
      if ((*(byte *)(param_1 + 0xd5) & 0x20) != 0) {
        pwVar13 = L"true";
      }
      param_5._0_4_ = 0;
      FString::PrintfImpl(local_b8,
                          L"Force Feedback - Enabled: %s LL: %.2f LS: %.2f RL: %.2f RS: %.2f",
                          pwVar13,(double)*(float *)(param_1 + 0xc4),
                          (double)*(float *)((longlong)param_1 + 0x624),
                          (double)*(float *)(param_1 + 0xc5),
                          (double)*(float *)((longlong)param_1 + 0x62c));
      FUN_1428a6fb0(plVar1,local_b8,&param_5);
      if (local_b8[0] != 0) {
        FMemory::Free();
      }
      param_5._0_4_ = 0;
      if (param_1[0xa2] == 0) {
        pwVar14 = L"none";
      }
      else {
        local_res10 = *(ulonglong *)(param_1[0xa2] + 0x18);
        puVar6 = (undefined8 *)FName::ToString(&local_res10,local_98);
        if (*(int *)(puVar6 + 1) != 0) {
          pwVar14 = (wchar_t *)*puVar6;
        }
        bVar16 = true;
      }
      FString::PrintfImpl(local_b8,L"Pawn: %s",pwVar14);
      FUN_1428a6fb0(plVar1,local_b8,&param_5);
      if (local_b8[0] != 0) {
        FMemory::Free();
      }
      if ((bVar16) && (local_98[0] != 0)) {
        FMemory::Free();
      }
      goto LAB_1427026ac;
    }
    plVar8 = plVar8 + 1;
  } while( true );
code_r0x000142702175:
  plVar8 = plVar8 + 1;
  if (plVar8 == plVar4) goto LAB_1427024f2;
  goto LAB_142702170;
}



// FUNCTION 1427026d0 DrawArc body=657 status=ok
// SIG undefined DrawArc(void)

void DrawArc(longlong *param_1,float *param_2,float *param_3,float *param_4,float param_5,
            float param_6,float param_7,uint param_8,undefined8 param_9,undefined1 param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar9;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined8 uVar8;
  
  param_6 = param_6 - param_5;
  uVar8 = __libm_sse2_sincosf_(param_5 * 0.017453292);
  fVar9 = (float)((ulonglong)uVar8 >> 0x20);
  fVar7 = (float)uVar8;
  fVar1 = *param_4;
  fVar2 = *param_3;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar5 = param_3[1];
  local_c8 = (fVar9 * fVar2 + fVar7 * fVar1) * param_7 + *param_2;
  local_c0 = (fVar9 * param_3[2] + fVar7 * fVar4) * param_7 + param_2[2];
  local_c4 = (fVar9 * fVar5 + fVar7 * fVar3) * param_7 + param_2[1];
  if (0 < (int)param_8) {
    uVar6 = (ulonglong)param_8;
    do {
      param_5 = param_6 / (float)(int)param_8 + param_5;
      uVar8 = __libm_sse2_sincosf_(param_5 * 0.017453292);
      fVar9 = (float)((ulonglong)uVar8 >> 0x20);
      fVar7 = (float)uVar8;
      local_d8 = (fVar9 * fVar2 + fVar7 * fVar1) * param_7 + *param_2;
      local_d0 = (fVar9 * param_3[2] + fVar7 * fVar4) * param_7 + param_2[2];
      local_d4 = (fVar9 * fVar5 + fVar7 * fVar3) * param_7 + param_2[1];
      (**(code **)(*param_1 + 0x38))(param_1,&local_c8,&local_d8,param_9,param_10,0,0,0);
      local_c8 = local_d8;
      local_c0 = local_d0;
      local_c4 = local_d4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 142702970 FUN_142702970 body=1793 status=ok
// SIG undefined FUN_142702970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142702970(longlong param_1,float *param_2,float *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
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
  undefined4 uVar19;
  float *pfVar20;
  float *pfVar21;
  undefined8 *puVar22;
  undefined4 *puVar23;
  longlong lVar24;
  longlong lVar25;
  undefined8 *puVar26;
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
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auStack_358 [32];
  float *local_338;
  float *local_330;
  undefined4 *local_328;
  undefined4 local_320;
  float local_318;
  float local_314;
  float local_310;
  undefined8 local_308;
  undefined4 local_300;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float *local_2b8;
  float *local_2b0;
  undefined8 local_2a8;
  longlong local_2a0;
  undefined1 local_298 [32];
  float local_278;
  float fStack_274;
  float fStack_270;
  undefined4 uStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  undefined4 uStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  undefined4 uStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  undefined4 uStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  undefined4 uStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  undefined4 uStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  undefined4 uStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
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
  undefined4 local_1a8 [4];
  undefined4 local_198;
  undefined8 uStack_194;
  undefined8 uStack_18c;
  undefined4 uStack_184;
  longlong lStack_180;
  longlong local_178;
  ulonglong uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  local_198 = 0xbf800000;
  uStack_194._0_4_ = 0xbf800000;
  uStack_194._4_4_ = 0x3f800000;
  uStack_18c._0_4_ = 0xbf800000;
  local_178 = 0x3f8000003f800000;
  uStack_170 = 0x3f800000bf800000;
  local_150 = 0;
  local_f8 = 0x3f8000003f800000;
  uStack_f0 = 0x3f800000;
  local_144 = 0;
  uStack_18c._4_4_ = 0x3f800000;
  uStack_184 = 0x3f800000;
  lStack_180 = 0x3f8000003f800000;
  local_138 = 0;
  local_108 = 0;
  uStack_100 = 0x3f80000000000000;
  local_158 = 0;
  local_14c = 0x42b40000;
  local_140 = 0xc2b40000;
  local_134 = 0;
  local_12c = 0x42b40000;
  local_128 = 0;
  local_120 = 0xc2b40000;
  local_310 = 0.0;
  local_114 = 0;
  local_11c = 0x43340000;
  local_338 = (float *)((ulonglong)local_338 & 0xffffffffffffff00);
  local_2b8 = param_3;
  local_2b0 = param_2;
  local_2a8 = param_4;
  local_2a0 = param_1;
  FUN_1424290d0(local_298,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1a38),1);
  local_278 = 0.0;
  fStack_274 = 0.0;
  fStack_270 = 0.0;
  uStack_26c = 0;
  local_248 = 0.0;
  fStack_244 = 0.0;
  fStack_240 = 0.0;
  uStack_23c = 0;
  local_258 = 0.0;
  fStack_254 = 0.0;
  fStack_250 = 0.0;
  uStack_24c = 0;
  local_268 = 1.0;
  fStack_264 = 1.0;
  fStack_260 = 1.0;
  uStack_25c = 0x3f800000;
  local_208 = 0.0;
  fStack_204 = 0.0;
  fStack_200 = 0.0;
  uStack_1fc = 0;
  local_1f8 = 1.0;
  fStack_1f4 = 1.0;
  fStack_1f0 = 1.0;
  uStack_1ec = 0x3f800000;
  puVar26 = &local_158;
  local_218 = 0.0;
  fStack_214 = 0.0;
  fStack_210 = 0.0;
  uStack_20c = 0;
  lVar24 = 6;
  local_228 = 0.0;
  fStack_224 = 0.0;
  fStack_220 = 0.0;
  uStack_21c = 0;
  local_238 = 0.0;
  fStack_234 = 0.0;
  fStack_230 = 0.0;
  uStack_22c = 0;
  fStack_2bc = 1.0;
  do {
    fVar18 = fStack_1f0;
    fVar17 = fStack_1f4;
    fVar16 = local_1f8;
    fVar15 = fStack_200;
    fVar14 = fStack_204;
    fVar13 = local_208;
    pfVar20 = (float *)FRotationMatrix::FRotationMatrix(&local_1e8,puVar26);
    puVar23 = local_1a8;
    lVar25 = 4;
    puVar22 = &local_108;
    pfVar21 = (float *)((longlong)&uStack_194 + 4);
    fVar1 = *pfVar20;
    fVar2 = pfVar20[1];
    fVar3 = pfVar20[2];
    fVar4 = pfVar20[4];
    fVar5 = pfVar20[5];
    fVar6 = pfVar20[6];
    fVar7 = pfVar20[8];
    fVar8 = pfVar20[9];
    fVar9 = pfVar20[10];
    fVar10 = pfVar20[0xc];
    fVar11 = pfVar20[0xd];
    fVar12 = pfVar20[0xe];
    fVar27 = fVar4 * local_278;
    fVar32 = fVar5 * fStack_274;
    fVar37 = fVar6 * fStack_270;
    fVar28 = fVar4 * local_268;
    fVar33 = fVar5 * fStack_264;
    fVar38 = fVar6 * fStack_260;
    fVar42 = fVar7 * local_258;
    fVar44 = fVar8 * fStack_254;
    fVar46 = fVar9 * fStack_250;
    fVar29 = fVar10 * local_248;
    fVar34 = fVar11 * fStack_244;
    fVar39 = fVar12 * fStack_240;
    fVar30 = fVar4 * local_238;
    fVar35 = fVar5 * fStack_234;
    fVar40 = fVar6 * fStack_230;
    fVar43 = fVar7 * local_228;
    fVar45 = fVar8 * fStack_224;
    fVar47 = fVar9 * fStack_220;
    fVar31 = fVar10 * local_218;
    fVar36 = fVar11 * fStack_214;
    fVar41 = fVar12 * fStack_210;
    do {
      local_330 = &local_2f8;
      fStack_2c4 = pfVar21[-1];
      local_328 = &DAT_1464aa730;
      local_338 = &local_2ec;
      local_2c8 = pfVar21[-2];
      fStack_2c0 = *pfVar21;
      local_308 = 0;
      local_300 = 0;
      local_318 = fStack_2bc * fVar10 + fStack_2c0 * fVar7 + fStack_2c4 * fVar4 + local_2c8 * fVar1;
      local_314 = fStack_2bc * fVar11 + fStack_2c0 * fVar8 + fStack_2c4 * fVar5 + local_2c8 * fVar2;
      local_310 = fStack_2bc * fVar12 + fStack_2c0 * fVar9 + fStack_2c4 * fVar6 + local_2c8 * fVar3;
      local_2f8 = fVar1 * 0.0 + fVar27 + fVar7 * fVar16 + fVar10 * fVar13;
      local_2f4 = fVar2 * 0.0 + fVar32 + fVar8 * fVar17 + fVar11 * fVar14;
      local_2f0 = fVar3 * 0.0 + fVar37 + fVar9 * fVar18 + fVar12 * fVar15;
      local_2ec = fVar1 * 0.0 + fVar28 + fVar42 + fVar29;
      local_2e8 = fVar2 * 0.0 + fVar33 + fVar44 + fVar34;
      local_2e4 = fVar3 * 0.0 + fVar38 + fVar46 + fVar39;
      local_2e0 = fVar1 * 1.0 + fVar30 + fVar43 + fVar31;
      local_2dc = fVar2 * 1.0 + fVar35 + fVar45 + fVar36;
      local_2d8 = fVar3 * 1.0 + fVar40 + fVar47 + fVar41;
      uVar19 = FUN_14242c0d0(local_298,&local_318,puVar22,&local_2e0);
      *puVar23 = uVar19;
      puVar22 = puVar22 + 1;
      puVar23 = puVar23 + 1;
      pfVar21 = pfVar21 + 3;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    FUN_14242bf10(local_298,local_1a8[0],local_1a8[1],local_1a8[2]);
    FUN_14242bf10(local_298,local_1a8[0],local_1a8[2],local_1a8[3]);
    puVar26 = (undefined8 *)((longlong)puVar26 + 0xc);
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  fVar4 = local_2b0[4];
  fVar5 = local_2b0[5];
  fVar6 = local_2b0[6];
  fVar7 = local_2b0[7];
  fVar8 = *local_2b0;
  fVar9 = local_2b0[1];
  fVar10 = local_2b0[2];
  fVar11 = local_2b0[3];
  fVar12 = local_2b0[8];
  fVar13 = local_2b0[9];
  fVar14 = local_2b0[10];
  fVar15 = local_2b0[0xb];
  fVar16 = local_2b0[0xc];
  fVar17 = local_2b0[0xd];
  fVar18 = local_2b0[0xe];
  fVar27 = local_2b0[0xf];
  fVar1 = *local_2b8;
  fVar2 = local_2b8[1];
  fVar3 = local_2b8[2];
  uStack_170 = uStack_170 & 0xffffffff;
  local_1e8 = fVar1 * fVar8 + fVar4 * 0.0 + fVar12 * 0.0 + fVar16 * 0.0;
  fStack_1e4 = fVar1 * fVar9 + fVar5 * 0.0 + fVar13 * 0.0 + fVar17 * 0.0;
  fStack_1e0 = fVar1 * fVar10 + fVar6 * 0.0 + fVar14 * 0.0 + fVar18 * 0.0;
  fStack_1dc = fVar1 * fVar11 + fVar7 * 0.0 + fVar15 * 0.0 + fVar27 * 0.0;
  local_1d8 = fVar8 * 0.0 + fVar2 * fVar4 + fVar12 * 0.0 + fVar16 * 0.0;
  fStack_1d4 = fVar9 * 0.0 + fVar2 * fVar5 + fVar13 * 0.0 + fVar17 * 0.0;
  fStack_1d0 = fVar10 * 0.0 + fVar2 * fVar6 + fVar14 * 0.0 + fVar18 * 0.0;
  fStack_1cc = fVar11 * 0.0 + fVar2 * fVar7 + fVar15 * 0.0 + fVar27 * 0.0;
  local_1c8 = fVar8 * 0.0 + fVar4 * 0.0 + fVar3 * fVar12 + fVar16 * 0.0;
  fStack_1c4 = fVar9 * 0.0 + fVar5 * 0.0 + fVar3 * fVar13 + fVar17 * 0.0;
  fStack_1c0 = fVar10 * 0.0 + fVar6 * 0.0 + fVar3 * fVar14 + fVar18 * 0.0;
  fStack_1bc = fVar11 * 0.0 + fVar7 * 0.0 + fVar3 * fVar15 + fVar27 * 0.0;
  local_320 = 0xffffffff;
  local_328 = (undefined4 *)CONCAT71(local_328._1_7_,1);
  local_330 = (float *)((ulonglong)local_330 & 0xffffffffffffff00);
  local_338 = (float *)CONCAT71(local_338._1_7_,param_5);
  local_1b8 = fVar8 * 0.0 + fVar4 * 0.0 + fVar12 * 0.0 + fVar16 * 1.0;
  fStack_1b4 = fVar9 * 0.0 + fVar5 * 0.0 + fVar13 * 0.0 + fVar17 * 1.0;
  fStack_1b0 = fVar10 * 0.0 + fVar6 * 0.0 + fVar14 * 0.0 + fVar18 * 1.0;
  fStack_1ac = fVar11 * 0.0 + fVar7 * 0.0 + fVar15 * 0.0 + fVar27 * 1.0;
  lStack_180 = lVar25;
  local_178 = lVar25;
  uStack_18c = lVar25;
  uStack_194 = lVar25;
  FUN_14242f9d0(local_298,local_2a0,&local_1e8,local_2a8);
  FDynamicMeshBuilder::~FDynamicMeshBuilder(local_298);
  return;
}



// FUNCTION 142703080 DrawCircle body=494 status=ok
// SIG undefined DrawCircle(void)

void DrawCircle(longlong *param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5,
               float param_6,int param_7,undefined1 param_8,undefined4 param_9,undefined4 param_10,
               undefined1 param_11)

{
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  
  iVar1 = 0;
  local_74 = param_6 * param_3[1] + param_2[1];
  local_78 = param_6 * *param_3 + *param_2;
  local_70 = param_6 * param_3[2] + param_2[2];
  if (0 < param_7) {
    do {
      iVar1 = iVar1 + 1;
      uVar3 = __libm_sse2_sincosf_();
      fVar2 = (float)uVar3;
      fVar4 = (float)((ulonglong)uVar3 >> 0x20);
      local_88 = (fVar4 * *param_3 + fVar2 * *param_4) * param_6 + *param_2;
      local_84 = (fVar2 * param_4[1] + fVar4 * param_3[1]) * param_6 + param_2[1];
      local_80 = (fVar2 * param_4[2] + fVar4 * param_3[2]) * param_6 + param_2[2];
      (**(code **)(*param_1 + 0x38))
                (param_1,&local_78,&local_88,param_5,param_8,param_9,param_10,param_11);
      local_78 = local_88;
      local_70 = local_80;
      local_74 = local_84;
    } while (iVar1 < param_7);
  }
  return;
}



// FUNCTION 142703270 FUN_142703270 body=308 status=ok
// SIG undefined FUN_142703270(void)

void FUN_142703270(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,uint param_8,undefined4 param_9
                  ,undefined8 param_10,undefined1 param_11)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong local_48 [4];
  undefined1 local_28 [32];
  
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  plVar1 = local_48 + 2;
  FUN_1426fc580(param_3,param_4,param_5,param_6,param_7,param_8,param_9,plVar1,local_48);
  uVar2 = (undefined4)((ulonglong)plVar1 >> 0x20);
  FUN_1424290d0(local_28,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1a38),1,0,
                param_7 & 0xffffff00);
  FUN_14242c440(local_28,local_48 + 2);
  FUN_14242bfc0(local_28,local_48);
  FUN_14242f9d0(local_28,param_1,param_2,param_10,param_11,param_8 & 0xffffff00,1,
                CONCAT44(uVar2,0xffffffff));
  FDynamicMeshBuilder::~FDynamicMeshBuilder(local_28);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1427033b0 DrawCylinder body=111 status=ok
// SIG undefined DrawCylinder(void)

void DrawCylinder(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined8 param_9,undefined1 param_10)

{
  FUN_142703270(param_7,&DAT_1464aa7d0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                param_9,param_10);
  return;
}



// FUNCTION 142703420 FUN_142703420 body=654 status=ok
// SIG undefined FUN_142703420(void)

void FUN_142703420(longlong *param_1,float *param_2,float *param_3,undefined8 param_4,float param_5,
                  undefined1 param_6,float param_7)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  
  fVar3 = *param_3 - *param_2;
  fVar4 = param_3[1] - param_2[1];
  fVar5 = param_3[2] - param_2[2];
  fVar6 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
  if (fVar6 != 0.0) {
    fVar2 = 1.0 / fVar6;
    fVar3 = fVar2 * fVar3;
    fVar4 = fVar2 * fVar4;
    fVar5 = fVar2 * fVar5;
  }
  fVar2 = fVar6 / (param_5 + param_5);
  fVar2 = -0.5 - (fVar2 + fVar2);
  (**(code **)(*param_1 + 0x20))(fVar2,param_6,-((int)ROUND(fVar2) >> 1),param_7 != 0.0,0);
  local_a0 = param_2[2];
  uVar1 = *(undefined8 *)param_2;
  local_a8 = uVar1;
  if (param_5 < fVar6) {
    local_a8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_a8._0_4_ = (float)uVar1;
    local_98._0_4_ = (float)local_a8;
    local_98._4_4_ = local_a8._4_4_;
    do {
      local_98._0_4_ = fVar3 * param_5 + (float)local_98;
      local_98._4_4_ = fVar4 * param_5 + local_98._4_4_;
      local_90 = fVar5 * param_5 + local_a0;
      (**(code **)(*param_1 + 0x38))(param_1,&local_a8,&local_98,param_4,param_6,0,param_7,0);
      fVar6 = fVar6 - (param_5 + param_5);
      local_98._0_4_ = fVar3 * param_5 + (float)local_98;
      local_98._4_4_ = fVar4 * param_5 + local_98._4_4_;
      local_a0 = fVar5 * param_5 + local_90;
      local_a8 = CONCAT44(local_98._4_4_,(float)local_98);
    } while (param_5 < fVar6);
  }
  if (0.0 < fVar6) {
    local_90 = param_3[2];
    local_98 = *(undefined8 *)param_3;
    (**(code **)(*param_1 + 0x38))(param_1,&local_a8,&local_98,param_4,param_6,0,param_7,0);
  }
  return;
}



// FUNCTION 1427036b0 FUN_1427036b0 body=1676 status=ok
// SIG undefined FUN_1427036b0(void)

void FUN_1427036b0(longlong *param_1,float *param_2,undefined8 param_3,float param_4,float param_5,
                  undefined1 param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  
  local_98 = 0;
  local_90 = 0;
  local_b8 = DAT_1468b5d90 * *param_2 + DAT_1468b5d94 * param_2[4] +
             DAT_1468b5d98 * param_2[8] + param_2[0xc] * 1.0;
  fStack_b4 = DAT_1468b5d90 * param_2[1] + DAT_1468b5d94 * param_2[5] +
              DAT_1468b5d98 * param_2[9] + param_2[0xd] * 1.0;
  fStack_b0 = DAT_1468b5d90 * param_2[2] + DAT_1468b5d94 * param_2[6] +
              DAT_1468b5d98 * param_2[10] + param_2[0xe] * 1.0;
  uStack_9c = 0x3f800000;
  local_a8 = param_2[8] * 0.0 + param_2[0xc] * 1.0 + param_4 * *param_2 + param_2[4] * 0.0;
  fVar1 = param_2[9] * 0.0 + param_2[0xd] * 1.0 + param_4 * param_2[1] + param_2[5] * 0.0;
  _fStack_a4 = CONCAT44(param_2[10] * 0.0 + param_2[0xe] * 1.0 +
                        param_4 * param_2[2] + param_2[6] * 0.0,fVar1);
  (**(code **)(*param_1 + 0x38))(fVar1,&local_a8,&local_b8,param_3,param_6,param_7,0,0);
  fVar2 = param_4 - param_5;
  uStack_9c = 0x3f800000;
  local_98 = 0;
  local_90 = 0;
  local_a8 = fVar2 * *param_2 + param_5 * param_2[4] + param_5 * param_2[8] + param_2[0xc] * 1.0;
  _fStack_a4 = CONCAT44(fVar2 * param_2[2] + param_5 * param_2[6] +
                        param_5 * param_2[10] + param_2[0xe] * 1.0,
                        fVar2 * param_2[1] + param_5 * param_2[5] +
                        param_5 * param_2[9] + param_2[0xd] * 1.0);
  uStack_ac = 0x3f800000;
  local_b8 = param_4 * *param_2 + param_2[4] * 0.0 + param_2[8] * 0.0 + param_2[0xc] * 1.0;
  fStack_b4 = param_4 * param_2[1] + param_2[5] * 0.0 + param_2[9] * 0.0 + param_2[0xd] * 1.0;
  fStack_b0 = param_4 * param_2[2] + param_2[6] * 0.0 + param_2[10] * 0.0 + param_2[0xe] * 1.0;
  (**(code **)(*param_1 + 0x38))(param_1,&local_b8,&local_a8,param_3,param_6,param_7,0,0);
  fVar1 = -param_5;
  uStack_9c = 0x3f800000;
  local_98 = 0;
  local_90 = 0;
  local_a8 = fVar1 * param_2[8] + param_2[0xc] * 1.0 + fVar2 * *param_2 + param_5 * param_2[4];
  _fStack_a4 = CONCAT44(fVar1 * param_2[10] + param_2[0xe] * 1.0 +
                        fVar2 * param_2[2] + param_5 * param_2[6],
                        fVar1 * param_2[9] + param_2[0xd] * 1.0 +
                        fVar2 * param_2[1] + param_5 * param_2[5]);
  uStack_ac = 0x3f800000;
  local_b8 = param_4 * *param_2 + param_2[4] * 0.0 + param_2[8] * 0.0 + param_2[0xc] * 1.0;
  fStack_b4 = param_4 * param_2[1] + param_2[5] * 0.0 + param_2[9] * 0.0 + param_2[0xd] * 1.0;
  fStack_b0 = param_4 * param_2[2] + param_2[6] * 0.0 + param_2[10] * 0.0 + param_2[0xe] * 1.0;
  (**(code **)(*param_1 + 0x38))(param_1,&local_b8,&local_a8,param_3,param_6,param_7,0,0);
  uStack_9c = 0x3f800000;
  local_98 = 0;
  local_90 = 0;
  local_a8 = fVar2 * *param_2 + fVar1 * param_2[4] + param_5 * param_2[8] + param_2[0xc] * 1.0;
  _fStack_a4 = CONCAT44(fVar2 * param_2[2] + fVar1 * param_2[6] +
                        param_5 * param_2[10] + param_2[0xe] * 1.0,
                        fVar2 * param_2[1] + fVar1 * param_2[5] +
                        param_5 * param_2[9] + param_2[0xd] * 1.0);
  uStack_ac = 0x3f800000;
  local_b8 = param_4 * *param_2 + param_2[4] * 0.0 + param_2[8] * 0.0 + param_2[0xc] * 1.0;
  fStack_b4 = param_4 * param_2[1] + param_2[5] * 0.0 + param_2[9] * 0.0 + param_2[0xd] * 1.0;
  fStack_b0 = param_4 * param_2[2] + param_2[6] * 0.0 + param_2[10] * 0.0 + param_2[0xe] * 1.0;
  (**(code **)(*param_1 + 0x38))(param_1,&local_b8,&local_a8,param_3,param_6,param_7,0,0);
  uStack_9c = 0x3f800000;
  local_a8 = fVar2 * *param_2 + fVar1 * param_2[4] + fVar1 * param_2[8] + param_2[0xc] * 1.0;
  _fStack_a4 = CONCAT44(fVar2 * param_2[2] + fVar1 * param_2[6] +
                        fVar1 * param_2[10] + param_2[0xe] * 1.0,
                        fVar2 * param_2[1] + fVar1 * param_2[5] +
                        fVar1 * param_2[9] + param_2[0xd] * 1.0);
  uStack_ac = 0x3f800000;
  local_98 = 0;
  local_90 = 0;
  local_b8 = param_2[8] * 0.0 + param_2[0xc] * 1.0 + param_2[4] * 0.0 + param_4 * *param_2;
  fStack_b4 = param_2[9] * 0.0 + param_2[0xd] * 1.0 + param_2[5] * 0.0 + param_4 * param_2[1];
  fStack_b0 = param_2[10] * 0.0 + param_2[0xe] * 1.0 + param_2[6] * 0.0 + param_4 * param_2[2];
  (**(code **)(*param_1 + 0x38))(param_1,&local_b8,&local_a8,param_3,param_6,param_7,0,0);
  return;
}



// FUNCTION 142703d40 FUN_142703d40 body=489 status=ok
// SIG undefined FUN_142703d40(void)

void FUN_142703d40(longlong *param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5
                  ,float param_6,int param_7,undefined4 param_8,undefined4 param_9,
                  undefined1 param_10)

{
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  
  iVar1 = 0;
  local_74 = param_6 * param_3[1] + param_2[1];
  local_78 = param_6 * *param_3 + *param_2;
  local_70 = param_6 * param_3[2] + param_2[2];
  if (0 < param_7) {
    do {
      iVar1 = iVar1 + 1;
      uVar3 = __libm_sse2_sincosf_();
      fVar2 = (float)uVar3;
      fVar4 = (float)((ulonglong)uVar3 >> 0x20);
      local_88 = (fVar2 * *param_4 + fVar4 * *param_3) * param_6 + *param_2;
      local_84 = (fVar2 * param_4[1] + fVar4 * param_3[1]) * param_6 + param_2[1];
      local_80 = (fVar2 * param_4[2] + fVar4 * param_3[2]) * param_6 + param_2[2];
      (**(code **)(*param_1 + 0x38))(param_1,&local_78,&local_88,param_5,0,param_8,param_9,param_10)
      ;
      local_78 = local_88;
      local_70 = local_80;
      local_74 = local_84;
    } while (iVar1 < param_7);
  }
  return;
}



// FUNCTION 142703f30 FUN_142703f30 body=1453 status=ok
// SIG undefined FUN_142703f30(void)

void FUN_142703f30(longlong *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,undefined8 param_7,undefined1 param_8,undefined4 param_9,
                  undefined4 param_10,undefined1 param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  float local_178;
  float local_174;
  float local_170;
  undefined8 local_168;
  undefined4 local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8;
  float local_a0;
  ulonglong local_9c;
  float local_94;
  
  fVar1 = *param_3;
  pfVar13 = &local_a0;
  fVar2 = param_3[1];
  lVar15 = 2;
  local_9c = *(ulonglong *)param_6;
  local_118 = (float)local_9c;
  fStack_f4 = (float)(local_9c >> 0x20);
  fVar3 = param_3[2];
  fVar4 = param_4[1];
  fVar5 = *param_4;
  fVar6 = param_4[2];
  fVar7 = *param_5;
  fVar8 = param_5[2];
  fVar9 = param_2[1];
  local_128 = -*param_6;
  fVar10 = param_5[1];
  fStack_104 = -param_6[1];
  fVar11 = *param_2;
  fVar12 = param_2[2];
  fStack_140 = -param_6[2];
  uStack_dc = 0;
  local_a8 = *(ulonglong *)param_6 ^ 0x8000000080000000;
  local_a0 = fStack_140;
  fStack_130 = param_6[2];
  local_94 = fStack_130;
  uStack_cc = 0;
  uStack_bc = 0;
  uStack_ac = 0x3f800000;
  fStack_13c = 1.0;
  fStack_12c = 1.0;
  fStack_11c = 1.0;
  fStack_10c = 1.0;
  fStack_fc = 1.0;
  fStack_ec = 1.0;
  local_e8 = fVar1;
  fStack_e4 = fVar2;
  fStack_e0 = fVar3;
  local_d8 = fVar5;
  fStack_d4 = fVar4;
  fStack_d0 = fVar6;
  local_c8 = fVar7;
  fStack_c4 = fVar10;
  fStack_c0 = fVar8;
  local_b8 = fVar11;
  fStack_b4 = fVar9;
  fStack_b0 = fVar12;
  do {
    local_148 = pfVar13[-2];
    pfVar14 = &local_a0;
    fStack_124 = pfVar13[-1];
    lVar16 = 2;
    fStack_100 = *pfVar13;
    local_138 = local_148;
    fStack_114 = fStack_124;
    fStack_f0 = fStack_100;
    do {
      fStack_144 = pfVar14[-1];
      local_168 = 0;
      local_160 = 0;
      local_178 = fStack_13c * fVar11 + fStack_140 * fVar7 + fStack_144 * fVar5 + local_148 * fVar1;
      local_174 = fStack_13c * fVar9 + fStack_140 * fVar10 + fStack_144 * fVar4 + local_148 * fVar2;
      local_170 = fStack_13c * fVar12 + fStack_140 * fVar8 + fStack_144 * fVar6 + local_148 * fVar3;
      local_158 = fStack_144 * fVar5 + local_138 * fVar1 + fStack_12c * fVar11 + fStack_130 * fVar7;
      local_154 = fStack_144 * fVar4 + local_138 * fVar2 + fStack_12c * fVar9 + fStack_130 * fVar10;
      local_150 = fStack_144 * fVar6 + local_138 * fVar3 + fStack_12c * fVar12 + fStack_130 * fVar8;
      fStack_134 = fStack_144;
      (**(code **)(*param_1 + 0x38))
                (param_1,&local_178,&local_158,param_7,param_8,param_9,param_10,param_11);
      fStack_120 = *pfVar14;
      local_168 = 0;
      local_160 = 0;
      local_178 = fStack_11c * fVar11 + fStack_120 * fVar7 + fStack_124 * fVar5 + local_128 * fVar1;
      local_174 = fStack_11c * fVar9 + fStack_120 * fVar10 + fStack_124 * fVar4 + local_128 * fVar2;
      local_170 = fStack_11c * fVar12 + fStack_120 * fVar8 + fStack_124 * fVar6 + local_128 * fVar3;
      local_158 = fStack_10c * fVar11 + fStack_120 * fVar7 + fStack_114 * fVar5 + local_118 * fVar1;
      local_154 = fStack_10c * fVar9 + fStack_120 * fVar10 + fStack_114 * fVar4 + local_118 * fVar2;
      local_150 = fStack_10c * fVar12 + fStack_120 * fVar8 + fStack_114 * fVar6 + local_118 * fVar3;
      fStack_110 = fStack_120;
      (**(code **)(*param_1 + 0x38))
                (param_1,&local_178,&local_158,param_7,param_8,param_9,param_10,param_11);
      local_108 = pfVar14[-2];
      local_168 = 0;
      local_160 = 0;
      local_178 = fStack_fc * fVar11 + fStack_100 * fVar7 + fStack_104 * fVar5 + local_108 * fVar1;
      local_174 = fStack_fc * fVar9 + fStack_100 * fVar10 + fStack_104 * fVar4 + local_108 * fVar2;
      local_170 = fStack_fc * fVar12 + fStack_100 * fVar8 + fStack_104 * fVar6 + local_108 * fVar3;
      local_158 = fStack_ec * fVar11 + fStack_f0 * fVar7 + fStack_f4 * fVar5 + local_108 * fVar1;
      local_154 = fStack_ec * fVar9 + fStack_f0 * fVar10 + fStack_f4 * fVar4 + local_108 * fVar2;
      local_150 = fStack_ec * fVar12 + fStack_f0 * fVar8 + fStack_f4 * fVar6 + local_108 * fVar3;
      local_f8 = local_108;
      (**(code **)(*param_1 + 0x38))
                (param_1,&local_178,&local_158,param_7,param_8,param_9,param_10,param_11);
      pfVar14 = pfVar14 + 3;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    pfVar13 = pfVar13 + 3;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  return;
}



// FUNCTION 1427044e0 FUN_1427044e0 body=4288 status=ok
// SIG undefined FUN_1427044e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427044e0(longlong param_1,float *param_2,undefined8 param_3,float *param_4,int param_5,
                  uint param_6,undefined8 param_7,undefined1 param_8,undefined1 param_9)

{
  float *pfVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [14];
  unkbyte10 Var13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [14];
  undefined1 auVar16 [12];
  undefined1 auVar17 [14];
  undefined1 auVar18 [12];
  undefined1 auVar19 [14];
  undefined1 auVar20 [12];
  undefined1 auVar21 [14];
  undefined1 auVar22 [12];
  undefined1 uVar23;
  int iVar24;
  longlong lVar25;
  float *pfVar26;
  uint uVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar31;
  undefined4 *puVar32;
  ulonglong uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  ulonglong uVar38;
  int iVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  undefined8 uVar44;
  undefined4 uVar53;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined2 uVar152;
  undefined2 uVar153;
  undefined2 uVar154;
  undefined2 uVar155;
  float fVar54;
  float fVar55;
  char cVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar65 [16];
  undefined1 auVar77 [16];
  undefined1 auVar89 [16];
  undefined1 auVar101 [16];
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar117;
  float fVar118;
  undefined1 auVar116 [16];
  float fVar119;
  float fVar120;
  float fVar123;
  float fVar124;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined2 uVar156;
  undefined1 auVar134 [16];
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  undefined1 uVar141;
  undefined1 uVar142;
  undefined1 uVar143;
  undefined1 uVar144;
  undefined1 uVar145;
  undefined1 uVar146;
  undefined1 uVar147;
  undefined1 uVar148;
  uint uVar149;
  float fVar150;
  float fVar151;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  int local_354;
  int local_350;
  ulonglong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  float local_2d8;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  longlong local_2a8;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
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
  longlong local_218;
  undefined1 local_210 [40];
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined4 uStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  undefined4 uStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [232];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar66 [16];
  undefined1 auVar78 [16];
  undefined1 auVar90 [16];
  undefined1 auVar102 [16];
  undefined1 auVar67 [16];
  undefined1 auVar79 [16];
  undefined1 auVar91 [16];
  undefined1 auVar103 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar64 [16];
  undefined1 auVar76 [16];
  undefined1 auVar88 [16];
  undefined1 auVar100 [16];
  undefined1 auVar56 [16];
  undefined1 auVar68 [16];
  undefined1 auVar80 [16];
  undefined1 auVar92 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar125 [16];
  
  FUN_1424290d0(local_210,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1a38),1,0,0);
  uVar38 = (ulonglong)(int)param_6;
  iVar40 = param_6 + 1;
  uVar27 = iVar40 * (param_5 + 1);
  lVar25 = FMemory::Malloc((longlong)(int)uVar27 * 0x5c,0);
  local_218 = lVar25;
  local_2a8 = FMemory::Malloc((uVar38 + 1) * 0x5c,0);
  iVar39 = 0;
  if (0 < iVar40) {
    puVar32 = (undefined4 *)(local_2a8 + 8);
    local_2f0 = local_2f0 & 0xffffffff00000000;
    local_2e0 = 0x3f800000;
    local_2d8 = 0.0;
    do {
      fVar113 = (float)iVar39;
      puVar32[-2] = 0;
      uVar44 = __libm_sse2_sincosf_();
      local_2e8 = (undefined4)uVar44;
      uVar53 = (undefined4)((ulonglong)uVar44 >> 0x20);
      puVar32[-1] = local_2e8;
      *puVar32 = uVar53;
      local_2f0 = CONCAT44(uVar53,(undefined4)local_2f0) ^ 0x8000000000000000;
      FDynamicMeshVertex::SetTangents(puVar32 + -2,&local_2e0,&local_2f0,puVar32 + -2);
      iVar39 = iVar39 + 1;
      puVar32[2] = fVar113 * (1.0 / (float)(int)param_6);
      puVar32[1] = 0;
      puVar32 = puVar32 + 0x17;
    } while (iVar39 < iVar40);
  }
  lVar30 = local_2a8;
  local_354 = 0;
  if (0 < param_5 + 1) {
    uVar38 = uVar38 + 1;
    fVar113 = 2.4760495e-05;
    uVar141 = DAT_146b08ba0;
    uVar142 = DAT_146b08ba0._1_1_;
    uVar143 = DAT_146b08ba0._2_1_;
    uVar144 = DAT_146b08ba0._3_1_;
    uVar145 = DAT_146b08ba0._4_1_;
    uVar146 = DAT_146b08ba0._5_1_;
    uVar147 = DAT_146b08ba0._6_1_;
    uVar148 = DAT_146b08ba0._7_1_;
    uVar149 = DAT_146b08ba0._8_4_;
    local_138 = -0.00019840874;
    fStack_134 = -0.00019840874;
    fStack_130 = -0.00019840874;
    uStack_12c = 0xb9500bf1;
    local_1e8 = 0.008333331;
    fStack_1e4 = 0.008333331;
    fStack_1e0 = 0.008333331;
    uStack_1dc = 0x3c088886;
    local_1d8 = -0.16666667;
    fStack_1d4 = -0.16666667;
    fStack_1d0 = -0.16666667;
    uStack_1cc = 0xbe2aaaab;
    local_1c8 = -2.6051615e-07;
    fStack_1c4 = -2.6051615e-07;
    fStack_1c0 = -2.6051615e-07;
    uStack_1bc = 0xb48bdd11;
    local_1b8 = -0.0013888378;
    fStack_1b4 = -0.0013888378;
    fStack_1b0 = -0.0013888378;
    uStack_1ac = 0xbab609aa;
    local_1a8 = 0.041666638;
    fStack_1a4 = 0.041666638;
    fStack_1a0 = 0.041666638;
    uStack_19c = 0x3d2aaaa3;
    local_198 = -0.5;
    fStack_194 = -0.5;
    fStack_190 = -0.5;
    uStack_18c = 0xbf000000;
    local_350 = 0;
    local_148 = -2.3889859e-08;
    fStack_144 = -2.3889859e-08;
    fStack_140 = -2.3889859e-08;
    uStack_13c = 0xb2cd365b;
    local_158 = 2.7525562e-06;
    fStack_154 = 2.7525562e-06;
    fStack_150 = 2.7525562e-06;
    uStack_14c = 0x3638b88e;
    local_178 = 1.0;
    fStack_174 = 1.0;
    fStack_170 = 1.0;
    uStack_16c = 0x3f800000;
    local_188 = 2.4760495e-05;
    fStack_184 = 2.4760495e-05;
    fStack_180 = 2.4760495e-05;
    uStack_17c = 0x37cfb4c2;
    local_168 = 1.0;
    fStack_164 = 1.0;
    fStack_160 = 1.0;
    uStack_15c = 0x3f800000;
    fVar112 = fVar113;
    fVar109 = fVar113;
    local_2f0 = uVar38;
    do {
      fVar117 = DAT_1468b5d98;
      fVar115 = DAT_1468b5d94;
      fVar119 = DAT_1468b5d90;
      fVar110 = (float)local_354 * 360.0 * (1.0 / (float)param_5) * fRam0000000146b08c34;
      fVar107 = _DAT_146b08c30 * 0.0 -
                (float)(int)(_DAT_146b08c30 * 0.0 * _DAT_146b08c20) * _DAT_146b08c10;
      fVar110 = fVar110 - (float)(int)(fVar110 * fRam0000000146b08c24) * fRam0000000146b08c14;
      fVar111 = fRam0000000146b08c38 * 0.0 -
                (float)(int)(fRam0000000146b08c38 * 0.0 * fRam0000000146b08c28) *
                fRam0000000146b08c18;
      uVar41 = -(uint)(_DAT_146b08bd0 < (float)((uint)fVar107 & _DAT_146b08be0));
      uVar42 = -(uint)(fRam0000000146b08bd4 < (float)((uint)fVar110 & uRam0000000146b08be4));
      uVar43 = -(uint)(fRam0000000146b08bd8 < (float)((uint)fVar111 & uRam0000000146b08be8));
      fVar107 = (float)(((uint)((float)((uint)fVar107 & _DAT_146b08c00 | _DAT_146b08bf0) - fVar107)
                        ^ (uint)fVar107) & uVar41 ^ (uint)fVar107);
      fVar110 = (float)(((uint)((float)((uint)fVar110 & uRam0000000146b08c04 | uRam0000000146b08bf4)
                               - fVar110) ^ (uint)fVar110) & uVar42 ^ (uint)fVar110);
      fVar111 = (float)(((uint)((float)((uint)fVar111 & uRam0000000146b08c08 | uRam0000000146b08bf8)
                               - fVar111) ^ (uint)fVar111) & uVar43 ^ (uint)fVar111);
      fVar54 = fVar107 * fVar107;
      fVar105 = fVar110 * fVar110;
      fVar106 = fVar111 * fVar111;
      fVar107 = (((((local_148 * fVar54 + local_158) * fVar54 + local_138) * fVar54 + local_1e8) *
                  fVar54 + local_1d8) * fVar54 + local_178) * fVar107;
      fVar110 = (((((fStack_144 * fVar105 + fStack_154) * fVar105 + fStack_134) * fVar105 +
                  fStack_1e4) * fVar105 + fStack_1d4) * fVar105 + fStack_174) * fVar110;
      fVar111 = (((((fStack_140 * fVar106 + fStack_150) * fVar106 + fStack_130) * fVar106 +
                  fStack_1e0) * fVar106 + fStack_1d0) * fVar106 + fStack_170) * fVar111;
      fVar120 = (((((local_1c8 * fVar54 + fVar113) * fVar54 + local_1b8) * fVar54 + local_1a8) *
                  fVar54 + local_198) * fVar54 + local_168) *
                (float)((_DAT_146b08bc0 ^
                        CONCAT13(uVar144,CONCAT12(uVar143,CONCAT11(uVar142,uVar141)))) & uVar41 ^
                       CONCAT13(uVar144,CONCAT12(uVar143,CONCAT11(uVar142,uVar141))));
      fVar123 = (((((fStack_1c4 * fVar105 + fVar112) * fVar105 + fStack_1b4) * fVar105 + fStack_1a4)
                  * fVar105 + fStack_194) * fVar105 + fStack_164) *
                (float)((uRam0000000146b08bc4 ^
                        CONCAT13(uVar148,CONCAT12(uVar147,CONCAT11(uVar146,uVar145)))) & uVar42 ^
                       CONCAT13(uVar148,CONCAT12(uVar147,CONCAT11(uVar146,uVar145))));
      fVar124 = (((((fStack_1c0 * fVar106 + fVar109) * fVar106 + fStack_1b0) * fVar106 + fStack_1a0)
                  * fVar106 + fStack_190) * fVar106 + fStack_160) *
                (float)((uRam0000000146b08bc8 ^ uVar149) & uVar43 ^ uVar149);
      fVar105 = fVar120 * fVar110;
      fVar54 = fVar123 * fVar120;
      fVar106 = fVar111 * fVar107 * fVar123 - fVar124 * fVar110;
      fVar108 = fVar111 * fVar107 * fVar110 + fVar124 * fVar123;
      fVar55 = -(fVar120 * fVar111);
      fVar120 = fVar124 * fVar120;
      fVar114 = fVar123 * fVar111 - fVar124 * fVar107 * fVar110;
      fVar110 = -(fVar124 * fVar107 * fVar123 + fVar111 * fVar110);
      if (0 < (longlong)uVar38) {
        pfVar26 = (float *)(lVar30 + 8);
        uVar149 = CONCAT13(uVar144,CONCAT12(uVar143,CONCAT11(uVar142,uVar141))) ^
                  CONCAT13(uVar144,CONCAT12(uVar143,CONCAT11(uVar142,uVar141)));
        uVar141 = (undefined1)uVar149;
        uVar142 = (undefined1)(uVar149 >> 8);
        uVar143 = (undefined1)(uVar149 >> 0x10);
        uVar144 = (undefined1)(uVar149 >> 0x18);
        uVar41 = CONCAT13(uVar148,CONCAT12(uVar147,CONCAT11(uVar146,uVar145))) ^
                 CONCAT13(uVar148,CONCAT12(uVar147,CONCAT11(uVar146,uVar145)));
        uVar145 = (undefined1)uVar41;
        uVar146 = (undefined1)(uVar41 >> 8);
        uVar147 = (undefined1)(uVar41 >> 0x10);
        uVar148 = (undefined1)(uVar41 >> 0x18);
        fStack_21c = 1.0;
        fStack_24c = 0.0;
        fStack_23c = 0.0;
        fStack_22c = 0.0;
        local_368 = 0x7f000000;
        local_364 = 0x7f000000;
        local_360 = 0x7f000000;
        auVar116 = _DAT_144101760;
        iVar39 = local_350;
        do {
          fVar113 = pfVar26[-2];
          fVar112 = pfVar26[-1];
          local_228 = pfVar26[-2];
          fStack_224 = pfVar26[-1];
          fStack_220 = *pfVar26;
          lVar29 = (longlong)iVar39 * 0x5c;
          local_2d8 = fStack_21c * fVar117 + fStack_220 * fVar120 +
                      fVar112 * fVar55 + fVar113 * fVar107;
          *(ulonglong *)(lVar29 + lVar25) =
               CONCAT44(fStack_21c * fVar115 + fStack_220 * fVar114 +
                        fVar112 * fVar108 + fVar113 * fVar105,
                        fStack_21c * fVar119 + fStack_220 * fVar110 +
                        fVar112 * fVar106 + fVar113 * fVar54);
          *(float *)(lVar29 + 8 + lVar25) = local_2d8;
          fVar113 = pfVar26[0x12];
          auVar64._0_15_ = ZEXT415((uint)fVar113);
          auVar64[0xf] = uVar148;
          auVar63._14_2_ = auVar64._14_2_;
          auVar63._0_13_ = ZEXT413((uint)fVar113);
          auVar63[0xd] = uVar147;
          auVar62._13_3_ = auVar63._13_3_;
          auVar62._0_13_ = ZEXT413((uint)fVar113);
          auVar61._12_4_ = auVar62._12_4_;
          auVar61._4_7_ = 0;
          auVar61._0_4_ = fVar113;
          auVar61[0xb] = uVar146;
          auVar60._11_5_ = auVar61._11_5_;
          auVar60._4_7_ = 0;
          auVar60._0_4_ = fVar113;
          auVar59._10_6_ = auVar60._10_6_;
          auVar59._4_5_ = 0;
          auVar59._0_4_ = fVar113;
          auVar59[9] = uVar145;
          auVar58._9_7_ = auVar59._9_7_;
          auVar58._4_5_ = 0;
          auVar58._0_4_ = fVar113;
          cVar104 = (char)((uint)fVar113 >> 0x18);
          Var13 = CONCAT91(CONCAT81(auVar58._8_8_,uVar144),cVar104);
          auVar57._6_10_ = Var13;
          auVar57[5] = uVar143;
          auVar57[4] = (char)((uint)fVar113 >> 0x10);
          auVar57._0_4_ = fVar113;
          auVar12._2_12_ = auVar57._4_12_;
          auVar12[1] = uVar142;
          auVar12[0] = (char)((uint)fVar113 >> 8);
          uVar152 = CONCAT11(uVar141,SUB41(fVar113,0));
          auVar56._2_14_ = auVar12;
          uVar5 = (undefined2)(uVar41 >> 0x10);
          auVar67._0_12_ = auVar56._0_12_;
          auVar67._12_2_ = (short)Var13;
          auVar67._14_2_ = uVar5;
          auVar66._12_4_ = auVar67._12_4_;
          auVar66._0_10_ = auVar56._0_10_;
          uVar4 = (undefined2)uVar41;
          auVar66._10_2_ = uVar4;
          auVar65._10_6_ = auVar66._10_6_;
          auVar65._0_8_ = auVar56._0_8_;
          auVar65._8_2_ = auVar57._4_2_;
          uVar3 = (undefined2)(uVar149 >> 0x10);
          auVar14._4_8_ = auVar65._8_8_;
          auVar14._2_2_ = uVar3;
          auVar14._0_2_ = auVar12._0_2_;
          uVar2 = (undefined2)uVar149;
          auVar45._0_4_ = CONCAT22(uVar2,uVar152);
          auVar45._4_12_ = auVar14;
          auVar46._0_4_ = -(uint)(0x7f < auVar45._0_4_);
          auVar46._4_4_ = -(uint)(0x7f < auVar14._0_4_);
          auVar46._8_4_ = -(uint)(0x7f < auVar65._8_4_);
          auVar46._12_4_ = -(uint)(0x7f < auVar66._12_4_);
          auVar45 = auVar46 & auVar116 | auVar45;
          local_258 = (float)auVar45._0_4_ * 0.007874016;
          fStack_254 = (float)auVar45._4_4_ * 0.007874016;
          fStack_250 = (float)auVar45._8_4_ * 0.007874016;
          fVar113 = pfVar26[0x11];
          auVar133._0_15_ = ZEXT415((uint)fVar113);
          auVar133[0xf] = uVar148;
          auVar132._14_2_ = auVar133._14_2_;
          auVar132._0_13_ = ZEXT413((uint)fVar113);
          auVar132[0xd] = uVar147;
          auVar131._13_3_ = auVar132._13_3_;
          auVar131._0_13_ = ZEXT413((uint)fVar113);
          auVar130._12_4_ = auVar131._12_4_;
          auVar130._4_7_ = 0;
          auVar130._0_4_ = fVar113;
          auVar130[0xb] = uVar146;
          auVar129._11_5_ = auVar130._11_5_;
          auVar129._4_7_ = 0;
          auVar129._0_4_ = fVar113;
          auVar128._10_6_ = auVar129._10_6_;
          auVar128._4_5_ = 0;
          auVar128._0_4_ = fVar113;
          auVar128[9] = uVar145;
          auVar127._9_7_ = auVar128._9_7_;
          auVar127._4_5_ = 0;
          auVar127._0_4_ = fVar113;
          Var13 = CONCAT91(CONCAT81(auVar127._8_8_,uVar144),(char)((uint)fVar113 >> 0x18));
          auVar126._6_10_ = Var13;
          auVar126[5] = uVar143;
          auVar126[4] = (char)((uint)fVar113 >> 0x10);
          auVar126._0_4_ = fVar113;
          auVar15._2_12_ = auVar126._4_12_;
          auVar15[1] = uVar142;
          auVar15[0] = (char)((uint)fVar113 >> 8);
          uVar156 = CONCAT11(uVar141,SUB41(fVar113,0));
          auVar125._2_14_ = auVar15;
          auVar136._0_12_ = auVar125._0_12_;
          auVar136._12_2_ = (short)Var13;
          auVar136._14_2_ = uVar5;
          auVar135._12_4_ = auVar136._12_4_;
          auVar135._0_10_ = auVar125._0_10_;
          auVar135._10_2_ = uVar4;
          auVar134._10_6_ = auVar135._10_6_;
          auVar134._0_8_ = auVar125._0_8_;
          auVar134._8_2_ = auVar126._4_2_;
          auVar16._4_8_ = auVar134._8_8_;
          auVar16._2_2_ = uVar3;
          auVar16._0_2_ = auVar15._0_2_;
          auVar122._0_4_ = CONCAT22(uVar2,uVar156);
          auVar122._4_12_ = auVar16;
          fVar109 = fStack_24c * fVar119 + fStack_250 * fVar110 +
                    fStack_254 * fVar106 + local_258 * fVar54;
          fVar123 = fStack_24c * fVar115 + fStack_250 * fVar114 +
                    fStack_254 * fVar108 + local_258 * fVar105;
          fStack_2c0 = fStack_24c * fVar117 + fStack_250 * fVar120 +
                       fStack_254 * fVar55 + local_258 * fVar107;
          fStack_2bc = fStack_24c * 1.0 + fStack_250 * 0.0 + fStack_254 * 0.0 + local_258 * 0.0;
          _local_2c8 = CONCAT44(fVar123,fVar109);
          auVar121._0_4_ = -(uint)(0x7f < auVar122._0_4_);
          auVar121._4_4_ = -(uint)(0x7f < auVar16._0_4_);
          auVar121._8_4_ = -(uint)(0x7f < auVar134._8_4_);
          auVar121._12_4_ = -(uint)(0x7f < auVar135._12_4_);
          auVar46 = auVar121 & auVar116 | auVar122;
          auVar122 = auVar121 & auVar116 | auVar122;
          fVar113 = (float)auVar46._0_4_ * 0.007874016;
          fVar112 = (float)auVar46._4_4_ * 0.007874016;
          fVar111 = (float)auVar46._8_4_ * 0.007874016;
          fStack_240 = (float)(int)cVar104 * 0.007843138 - 1.0;
          local_248 = (fStack_254 * fVar111 - fStack_250 * fVar112) * fStack_240;
          fStack_244 = (fStack_250 * fVar113 - local_258 * fVar111) * fStack_240;
          fStack_240 = (local_258 * fVar112 - fStack_254 * fVar113) * fStack_240;
          fVar113 = fStack_23c * fVar119 + fStack_240 * fVar110 +
                    fStack_244 * fVar106 + local_248 * fVar54;
          fVar112 = fStack_23c * fVar115 + fStack_240 * fVar114 +
                    fStack_244 * fVar108 + local_248 * fVar105;
          fStack_2b0 = fStack_23c * fVar117 + fStack_240 * fVar120 +
                       fStack_244 * fVar55 + local_248 * fVar107;
          fStack_2ac = fStack_23c * 1.0 + fStack_240 * 0.0 + fStack_244 * 0.0 + local_248 * 0.0;
          _local_2b8 = CONCAT44(fVar112,fVar113);
          local_238 = (float)auVar122._0_4_ * 0.007874016;
          fStack_234 = (float)auVar122._4_4_ * 0.007874016;
          fStack_230 = (float)auVar122._8_4_ * 0.007874016;
          fVar111 = (fStack_22c * fVar119 + fStack_230 * fVar110 +
                    fStack_234 * fVar106 + local_238 * fVar54) * 127.0;
          iVar31 = (int)ROUND(fVar111 + fVar111 + 0.5) >> 1;
          if (iVar31 < -0x80) {
            iVar36 = -0x80;
          }
          else {
            iVar36 = 0x7f;
            if (iVar31 < 0x7f) {
              iVar36 = iVar31;
            }
          }
          fVar111 = (fStack_22c * fVar115 + fStack_230 * fVar114 +
                    fStack_234 * fVar108 + local_238 * fVar105) * 127.0;
          *(char *)(lVar29 + 0x4c + lVar25) = (char)iVar36;
          iVar36 = (int)ROUND(fVar111 + fVar111 + 0.5) >> 1;
          if (iVar36 < -0x80) {
            iVar37 = -0x80;
          }
          else {
            iVar37 = 0x7f;
            if (iVar36 < 0x7f) {
              iVar37 = iVar36;
            }
          }
          fVar111 = (fStack_22c * fVar117 + fStack_230 * fVar120 +
                    fStack_234 * fVar55 + local_238 * fVar107) * 127.0;
          *(char *)(lVar29 + 0x4d + lVar25) = (char)iVar37;
          iVar37 = (int)ROUND(fVar111 + fVar111 + 0.5) >> 1;
          if (iVar37 < -0x80) {
            iVar35 = -0x80;
          }
          else {
            iVar35 = 0x7f;
            if (iVar37 < 0x7f) {
              iVar35 = iVar37;
            }
          }
          *(char *)(lVar29 + 0x4e + lVar25) = (char)iVar35;
          *(undefined1 *)(lVar29 + 0x4f + lVar25) = 0x7f;
          iVar35 = (int)ROUND(fVar109 * 254.0 + 0.5) >> 1;
          if (iVar35 < -0x80) {
            iVar28 = -0x80;
          }
          else {
            iVar28 = 0x7f;
            if (iVar35 < 0x7f) {
              iVar28 = iVar35;
            }
          }
          *(char *)(lVar29 + 0x50 + lVar25) = (char)iVar28;
          iVar28 = (int)ROUND(fVar123 * 254.0 + 0.5) >> 1;
          if (iVar28 < -0x80) {
            iVar34 = -0x80;
          }
          else {
            iVar34 = 0x7f;
            if (iVar28 < 0x7f) {
              iVar34 = iVar28;
            }
          }
          *(char *)(lVar29 + 0x51 + lVar25) = (char)iVar34;
          iVar34 = (int)ROUND(fStack_2c0 * 254.0 + 0.5) >> 1;
          if (iVar34 < -0x80) {
            iVar24 = -0x80;
          }
          else {
            iVar24 = 0x7f;
            if (iVar34 < 0x7f) {
              iVar24 = iVar34;
            }
          }
          *(char *)(lVar29 + 0x52 + lVar25) = (char)iVar24;
          *(undefined1 *)(lVar29 + 0x53 + lVar25) = 0x7f;
          auVar116 = _DAT_144101760;
          if (iVar35 < -0x80) {
            local_368 = CONCAT31(local_368._1_3_,0x80);
          }
          else {
            uVar23 = 0x7f;
            if (iVar35 < 0x7f) {
              uVar23 = (char)iVar35;
            }
            local_368 = CONCAT31(local_368._1_3_,uVar23);
          }
          uVar53 = local_368;
          if (iVar28 < -0x80) {
            local_368._0_2_ = CONCAT11(0x80,(undefined1)local_368);
          }
          else {
            uVar23 = 0x7f;
            if (iVar28 < 0x7f) {
              uVar23 = (char)iVar28;
            }
            local_368._0_2_ = CONCAT11(uVar23,(undefined1)local_368);
          }
          local_368._3_1_ = SUB41(uVar53,3);
          if (iVar34 < -0x80) {
            local_368._0_3_ = CONCAT12(0x80,(undefined2)local_368);
          }
          else {
            uVar23 = 0x7f;
            if (iVar34 < 0x7f) {
              uVar23 = (char)iVar34;
            }
            local_368._0_3_ = CONCAT12(uVar23,(undefined2)local_368);
          }
          fVar113 = fVar113 * 127.0;
          iVar35 = (int)ROUND(fVar113 + fVar113 + 0.5) >> 1;
          if (iVar35 < -0x80) {
            local_364 = CONCAT31(local_364._1_3_,0x80);
          }
          else {
            uVar23 = 0x7f;
            if (iVar35 < 0x7f) {
              uVar23 = (char)iVar35;
            }
            local_364 = CONCAT31(local_364._1_3_,uVar23);
          }
          uVar53 = local_364;
          fVar112 = fVar112 * 127.0;
          iVar35 = (int)ROUND(fVar112 + fVar112 + 0.5) >> 1;
          if (iVar35 < -0x80) {
            local_364._0_2_ = CONCAT11(0x80,(undefined1)local_364);
          }
          else {
            uVar23 = 0x7f;
            if (iVar35 < 0x7f) {
              uVar23 = (char)iVar35;
            }
            local_364._0_2_ = CONCAT11(uVar23,(undefined1)local_364);
          }
          iVar35 = (int)ROUND(fStack_2b0 * 127.0 + fStack_2b0 * 127.0 + 0.5) >> 1;
          local_364._3_1_ = SUB41(uVar53,3);
          if (iVar35 < -0x80) {
            local_364._0_3_ = CONCAT12(0x80,(undefined2)local_364);
          }
          else {
            uVar23 = 0x7f;
            if (iVar35 < 0x7f) {
              uVar23 = (char)iVar35;
            }
            local_364._0_3_ = CONCAT12(uVar23,(undefined2)local_364);
          }
          if (iVar31 < -0x80) {
            local_360 = CONCAT31(local_360._1_3_,0x80);
          }
          else {
            uVar23 = 0x7f;
            if (iVar31 < 0x7f) {
              uVar23 = (char)iVar31;
            }
            local_360 = CONCAT31(local_360._1_3_,uVar23);
          }
          uVar53 = local_360;
          if (iVar36 < -0x80) {
            local_360._0_2_ = CONCAT11(0x80,(undefined1)local_360);
          }
          else {
            uVar23 = 0x7f;
            if (iVar36 < 0x7f) {
              uVar23 = (char)iVar36;
            }
            local_360._0_2_ = CONCAT11(uVar23,(undefined1)local_360);
          }
          local_360._3_1_ = SUB41(uVar53,3);
          if (iVar37 < -0x80) {
            local_360._0_3_ = CONCAT12(0x80,(undefined2)local_360);
          }
          else {
            uVar23 = 0x7f;
            if (iVar37 < 0x7f) {
              uVar23 = (char)iVar37;
            }
            local_360._0_3_ = CONCAT12(uVar23,(undefined2)local_360);
          }
          auVar76._0_15_ = ZEXT415(local_368);
          auVar76[0xf] = uVar148;
          auVar75._14_2_ = auVar76._14_2_;
          auVar75._0_13_ = ZEXT413(local_368);
          auVar75[0xd] = uVar147;
          auVar74._13_3_ = auVar75._13_3_;
          auVar74._0_13_ = ZEXT413(local_368);
          auVar73._12_4_ = auVar74._12_4_;
          auVar73._4_7_ = 0;
          auVar73._0_4_ = local_368;
          auVar73[0xb] = uVar146;
          auVar72._11_5_ = auVar73._11_5_;
          auVar72._4_7_ = 0;
          auVar72._0_4_ = local_368;
          auVar71._10_6_ = auVar72._10_6_;
          auVar71._4_5_ = 0;
          auVar71._0_4_ = local_368;
          auVar71[9] = uVar145;
          auVar70._9_7_ = auVar71._9_7_;
          auVar70._4_5_ = 0;
          auVar70._0_4_ = local_368;
          Var13 = CONCAT91(CONCAT81(auVar70._8_8_,uVar144),local_368._3_1_);
          auVar69._6_10_ = Var13;
          auVar69[5] = uVar143;
          auVar69[4] = (char)((uint3)(undefined3)local_368 >> 0x10);
          auVar69._0_4_ = local_368;
          auVar17._2_12_ = auVar69._4_12_;
          auVar17[1] = uVar142;
          auVar17[0] = (char)((uint3)(undefined3)local_368 >> 8);
          uVar153 = CONCAT11(uVar141,(char)(undefined3)local_368);
          auVar68._2_14_ = auVar17;
          auVar79._0_12_ = auVar68._0_12_;
          auVar79._12_2_ = (short)Var13;
          auVar79._14_2_ = uVar5;
          auVar78._12_4_ = auVar79._12_4_;
          auVar78._0_10_ = auVar68._0_10_;
          auVar78._10_2_ = uVar4;
          auVar77._10_6_ = auVar78._10_6_;
          auVar77._0_8_ = auVar68._0_8_;
          auVar77._8_2_ = auVar69._4_2_;
          auVar18._4_8_ = auVar77._8_8_;
          auVar18._2_2_ = uVar3;
          auVar18._0_2_ = auVar17._0_2_;
          auVar48._0_4_ = CONCAT22(uVar2,uVar153);
          auVar48._4_12_ = auVar18;
          fStack_28c = 0.0;
          auVar47._0_4_ = -(uint)(0x7f < auVar48._0_4_);
          auVar47._4_4_ = -(uint)(0x7f < auVar18._0_4_);
          auVar47._8_4_ = -(uint)(0x7f < auVar77._8_4_);
          auVar47._12_4_ = -(uint)(0x7f < auVar78._12_4_);
          fStack_27c = 0.0;
          fStack_26c = 0.0;
          auVar48 = auVar47 & _DAT_144101760 | auVar48;
          auVar88._0_15_ = ZEXT415(local_364);
          auVar88[0xf] = uVar148;
          auVar87._14_2_ = auVar88._14_2_;
          auVar87._0_13_ = ZEXT413(local_364);
          auVar87[0xd] = uVar147;
          auVar86._13_3_ = auVar87._13_3_;
          auVar86._0_13_ = ZEXT413(local_364);
          auVar85._12_4_ = auVar86._12_4_;
          auVar85._4_7_ = 0;
          auVar85._0_4_ = local_364;
          auVar85[0xb] = uVar146;
          auVar84._11_5_ = auVar85._11_5_;
          auVar84._4_7_ = 0;
          auVar84._0_4_ = local_364;
          auVar83._10_6_ = auVar84._10_6_;
          auVar83._4_5_ = 0;
          auVar83._0_4_ = local_364;
          auVar83[9] = uVar145;
          auVar82._9_7_ = auVar83._9_7_;
          auVar82._4_5_ = 0;
          auVar82._0_4_ = local_364;
          Var13 = CONCAT91(CONCAT81(auVar82._8_8_,uVar144),local_364._3_1_);
          auVar81._6_10_ = Var13;
          auVar81[5] = uVar143;
          auVar81[4] = (char)((uint3)(undefined3)local_364 >> 0x10);
          auVar81._0_4_ = local_364;
          auVar19._2_12_ = auVar81._4_12_;
          auVar19[1] = uVar142;
          auVar19[0] = (char)((uint3)(undefined3)local_364 >> 8);
          uVar154 = CONCAT11(uVar141,(char)(undefined3)local_364);
          auVar80._2_14_ = auVar19;
          auVar91._0_12_ = auVar80._0_12_;
          auVar91._12_2_ = (short)Var13;
          auVar91._14_2_ = uVar5;
          auVar90._12_4_ = auVar91._12_4_;
          auVar90._0_10_ = auVar80._0_10_;
          auVar90._10_2_ = uVar4;
          auVar89._10_6_ = auVar90._10_6_;
          auVar89._0_8_ = auVar80._0_8_;
          auVar89._8_2_ = auVar81._4_2_;
          auVar20._4_8_ = auVar89._8_8_;
          auVar20._2_2_ = uVar3;
          auVar20._0_2_ = auVar19._0_2_;
          auVar50._0_4_ = CONCAT22(uVar2,uVar154);
          auVar50._4_12_ = auVar20;
          local_278 = (float)auVar48._0_4_ * 0.007874016;
          fStack_274 = (float)auVar48._4_4_ * 0.007874016;
          fStack_270 = (float)auVar48._8_4_ * 0.007874016;
          auVar49._0_4_ = -(uint)(0x7f < auVar50._0_4_);
          auVar49._4_4_ = -(uint)(0x7f < auVar20._0_4_);
          auVar49._8_4_ = -(uint)(0x7f < auVar89._8_4_);
          auVar49._12_4_ = -(uint)(0x7f < auVar90._12_4_);
          auVar50 = auVar49 & _DAT_144101760 | auVar50;
          auVar100._0_15_ = ZEXT415(local_360);
          auVar100[0xf] = uVar148;
          auVar99._14_2_ = auVar100._14_2_;
          auVar99._0_13_ = ZEXT413(local_360);
          auVar99[0xd] = uVar147;
          auVar98._13_3_ = auVar99._13_3_;
          auVar98._0_13_ = ZEXT413(local_360);
          auVar97._12_4_ = auVar98._12_4_;
          auVar97._4_7_ = 0;
          auVar97._0_4_ = local_360;
          auVar97[0xb] = uVar146;
          auVar96._11_5_ = auVar97._11_5_;
          auVar96._4_7_ = 0;
          auVar96._0_4_ = local_360;
          auVar95._10_6_ = auVar96._10_6_;
          auVar95._4_5_ = 0;
          auVar95._0_4_ = local_360;
          auVar95[9] = uVar145;
          auVar94._9_7_ = auVar95._9_7_;
          auVar94._4_5_ = 0;
          auVar94._0_4_ = local_360;
          Var13 = CONCAT91(CONCAT81(auVar94._8_8_,uVar144),local_360._3_1_);
          auVar93._6_10_ = Var13;
          auVar93[5] = uVar143;
          auVar93[4] = (char)((uint3)(undefined3)local_360 >> 0x10);
          auVar93._0_4_ = local_360;
          auVar21._2_12_ = auVar93._4_12_;
          auVar21[1] = uVar142;
          auVar21[0] = (char)((uint3)(undefined3)local_360 >> 8);
          uVar155 = CONCAT11(uVar141,(char)(undefined3)local_360);
          auVar92._2_14_ = auVar21;
          local_288 = (float)auVar50._0_4_ * 0.007874016;
          fStack_284 = (float)auVar50._4_4_ * 0.007874016;
          fStack_280 = (float)auVar50._8_4_ * 0.007874016;
          auVar103._0_12_ = auVar92._0_12_;
          auVar103._12_2_ = (short)Var13;
          auVar103._14_2_ = uVar5;
          auVar102._12_4_ = auVar103._12_4_;
          auVar102._0_10_ = auVar92._0_10_;
          auVar102._10_2_ = uVar4;
          auVar101._10_6_ = auVar102._10_6_;
          auVar101._0_8_ = auVar92._0_8_;
          auVar101._8_2_ = auVar93._4_2_;
          auVar22._4_8_ = auVar101._8_8_;
          auVar22._2_2_ = uVar3;
          auVar22._0_2_ = auVar21._0_2_;
          auVar52._0_4_ = CONCAT22(uVar2,uVar155);
          auVar52._4_12_ = auVar22;
          auVar51._0_4_ = -(uint)(0x7f < auVar52._0_4_);
          auVar51._4_4_ = -(uint)(0x7f < auVar22._0_4_);
          auVar51._8_4_ = -(uint)(0x7f < auVar101._8_4_);
          auVar51._12_4_ = -(uint)(0x7f < auVar102._12_4_);
          auVar52 = auVar51 & _DAT_144101760 | auVar52;
          local_298 = (float)auVar52._0_4_ * 0.007874016;
          fStack_294 = (float)auVar52._4_4_ * 0.007874016;
          fStack_290 = (float)auVar52._8_4_ * 0.007874016;
          local_268 = 0;
          uStack_260 = 0x3f80000000000000;
          fVar113 = (float)FMatrix::Determinant(&local_298);
          if (0.0 <= fVar113) {
            fVar113 = 1.0;
          }
          else {
            fVar113 = -1.0;
          }
          uVar23 = 0x7f;
          if (fVar113 < 0.0) {
            uVar23 = 0x81;
          }
          iVar39 = iVar39 + 1;
          *(undefined1 *)(lVar29 + 0x53 + lVar25) = uVar23;
          *(float *)(lVar29 + 0xc + lVar25) = (1.0 / (float)param_5) * (float)local_354;
          pfVar1 = pfVar26 + 2;
          pfVar26 = pfVar26 + 0x17;
          *(float *)(lVar29 + 0x10 + lVar25) = *pfVar1;
          uVar38 = uVar38 - 1;
        } while (uVar38 != 0);
        uVar141 = DAT_146b08ba0;
        uVar142 = DAT_146b08ba0._1_1_;
        uVar143 = DAT_146b08ba0._2_1_;
        uVar144 = DAT_146b08ba0._3_1_;
        uVar145 = DAT_146b08ba0._4_1_;
        uVar146 = DAT_146b08ba0._5_1_;
        uVar147 = DAT_146b08ba0._6_1_;
        uVar148 = DAT_146b08ba0._7_1_;
        uVar149 = DAT_146b08ba0._8_4_;
        uVar38 = local_2f0;
        fVar113 = local_188;
        fVar112 = fStack_184;
        fVar109 = fStack_180;
      }
      local_354 = local_354 + 1;
      local_350 = local_350 + iVar40;
    } while (local_354 < param_5 + 1);
    uVar38 = (ulonglong)param_6;
  }
  iVar39 = 0;
  if (0 < (int)uVar27) {
    uVar33 = (ulonglong)uVar27;
    lVar30 = lVar25;
    do {
      FUN_14242c030(local_210,lVar30);
      lVar30 = lVar30 + 0x5c;
      uVar33 = uVar33 - 1;
    } while (uVar33 != 0);
  }
  if (0 < param_5) {
    do {
      iVar31 = iVar40 * iVar39;
      iVar39 = iVar39 + 1;
      if (0 < (int)uVar38) {
        uVar38 = (ulonglong)param_6;
        iVar36 = iVar40 * iVar39 - iVar31;
        do {
          iVar37 = iVar31 + 1;
          iVar35 = iVar36 + -1 + iVar37;
          FUN_14242bf10(local_210,iVar31,iVar35,iVar37);
          FUN_14242bf10(local_210,iVar35,iVar36 + iVar37,iVar37);
          uVar38 = uVar38 - 1;
          iVar31 = iVar37;
        } while (uVar38 != 0);
        uVar38 = (ulonglong)param_6;
      }
      lVar25 = local_218;
    } while (iVar39 < param_5);
  }
  FMemory::Free(lVar25);
  FMemory::Free(local_2a8);
  uStack_260._4_4_ = 1.0;
  fVar113 = *param_2;
  fVar112 = param_2[1];
  fVar109 = param_2[2];
  fVar119 = param_4[2];
  fVar115 = param_4[1];
  fVar117 = *param_4;
  pfVar26 = (float *)FRotationMatrix::FRotationMatrix(local_128,param_3);
  fVar110 = *pfVar26;
  fVar111 = pfVar26[1];
  fVar105 = pfVar26[2];
  fVar106 = pfVar26[3];
  fVar55 = pfVar26[4];
  fVar108 = pfVar26[5];
  fVar120 = pfVar26[6];
  fVar114 = pfVar26[7];
  fVar123 = pfVar26[8];
  fVar124 = pfVar26[9];
  fVar6 = pfVar26[10];
  fVar7 = pfVar26[0xb];
  fVar8 = pfVar26[0xc];
  fVar9 = pfVar26[0xd];
  fVar10 = pfVar26[0xe];
  fVar11 = pfVar26[0xf];
  fVar107 = fVar117 * fVar110 + fVar55 * 0.0 + fVar123 * 0.0 + fVar8 * 0.0;
  fVar54 = fVar117 * fVar111 + fVar108 * 0.0 + fVar124 * 0.0 + fVar9 * 0.0;
  fVar150 = fVar117 * fVar105 + fVar120 * 0.0 + fVar6 * 0.0 + fVar10 * 0.0;
  fVar151 = fVar117 * fVar106 + fVar114 * 0.0 + fVar7 * 0.0 + fVar11 * 0.0;
  fVar137 = fVar110 * 0.0 + fVar115 * fVar55 + fVar123 * 0.0 + fVar8 * 0.0;
  fVar138 = fVar111 * 0.0 + fVar115 * fVar108 + fVar124 * 0.0 + fVar9 * 0.0;
  fVar139 = fVar105 * 0.0 + fVar115 * fVar120 + fVar6 * 0.0 + fVar10 * 0.0;
  fVar140 = fVar106 * 0.0 + fVar115 * fVar114 + fVar7 * 0.0 + fVar11 * 0.0;
  fVar115 = fVar110 * 0.0 + fVar55 * 0.0 + fVar119 * fVar123 + fVar8 * 0.0;
  fVar117 = fVar111 * 0.0 + fVar108 * 0.0 + fVar119 * fVar124 + fVar9 * 0.0;
  fVar118 = fVar105 * 0.0 + fVar120 * 0.0 + fVar119 * fVar6 + fVar10 * 0.0;
  fVar119 = fVar106 * 0.0 + fVar114 * 0.0 + fVar119 * fVar7 + fVar11 * 0.0;
  fVar110 = fVar110 * 0.0 + fVar55 * 0.0 + fVar123 * 0.0 + fVar8 * 1.0;
  fVar111 = fVar111 * 0.0 + fVar108 * 0.0 + fVar124 * 0.0 + fVar9 * 1.0;
  fVar105 = fVar105 * 0.0 + fVar120 * 0.0 + fVar6 * 0.0 + fVar10 * 1.0;
  fVar106 = fVar106 * 0.0 + fVar114 * 0.0 + fVar7 * 0.0 + fVar11 * 1.0;
  local_298 = fVar54 * 0.0 + fVar107 * 1.0 + fVar150 * 0.0 + fVar151 * fVar113;
  fStack_294 = fVar54 * 1.0 + fVar107 * 0.0 + fVar150 * 0.0 + fVar151 * fVar112;
  fStack_290 = fVar54 * 0.0 + fVar107 * 0.0 + fVar150 * 1.0 + fVar151 * fVar109;
  fStack_28c = fVar54 * 0.0 + fVar107 * 0.0 + fVar150 * 0.0 + fVar151 * uStack_260._4_4_;
  local_288 = fVar138 * 0.0 + fVar137 * 1.0 + fVar139 * 0.0 + fVar140 * fVar113;
  fStack_284 = fVar138 * 1.0 + fVar137 * 0.0 + fVar139 * 0.0 + fVar140 * fVar112;
  fStack_280 = fVar138 * 0.0 + fVar137 * 0.0 + fVar139 * 1.0 + fVar140 * fVar109;
  fStack_27c = fVar138 * 0.0 + fVar137 * 0.0 + fVar139 * 0.0 + fVar140 * uStack_260._4_4_;
  local_278 = fVar117 * 0.0 + fVar115 * 1.0 + fVar118 * 0.0 + fVar119 * fVar113;
  fStack_274 = fVar117 * 1.0 + fVar115 * 0.0 + fVar118 * 0.0 + fVar119 * fVar112;
  fStack_270 = fVar117 * 0.0 + fVar115 * 0.0 + fVar118 * 1.0 + fVar119 * fVar109;
  fStack_26c = fVar117 * 0.0 + fVar115 * 0.0 + fVar118 * 0.0 + fVar119 * uStack_260._4_4_;
  local_268 = CONCAT44(fVar111 * 1.0 + fVar110 * 0.0 + fVar105 * 0.0 + fVar106 * fVar112,
                       fVar111 * 0.0 + fVar110 * 1.0 + fVar105 * 0.0 + fVar106 * fVar113);
  uStack_260 = CONCAT44(fVar111 * 0.0 + fVar110 * 0.0 + fVar105 * 0.0 + fVar106 * uStack_260._4_4_,
                        fVar111 * 0.0 + fVar110 * 0.0 + fVar105 * 1.0 + fVar106 * fVar109);
  FUN_14242f9d0(local_210,param_1,&local_298,param_7,param_8,param_9,1,0xffffffff);
  FDynamicMeshBuilder::~FDynamicMeshBuilder(local_210);
  return;
}



// FUNCTION 1427055a0 FUN_1427055a0 body=647 status=ok
// SIG undefined FUN_1427055a0(void)

void FUN_1427055a0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong local_res10;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  
  puVar11 = &local_e0;
  uVar5 = *(undefined4 *)(param_2 + 1);
  local_e8 = *param_2;
  uVar7 = local_e8;
  uVar4 = *(undefined8 *)((longlong)param_2 + 0xc);
  local_e8._4_4_ = (undefined4)((ulonglong)*param_2 >> 0x20);
  uVar8 = local_e8._4_4_;
  local_e0 = uVar5;
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_dc = uVar4;
  uVar4 = local_dc;
  local_dc._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar10 = local_dc._4_4_;
  local_dc._0_4_ = (undefined4)uVar4;
  uVar9 = (undefined4)local_dc;
  local_d4 = uVar6;
  local_res10 = 2;
  local_e8 = uVar7;
  local_dc = uVar4;
  do {
    uVar1 = puVar11[-2];
    puVar12 = &local_e0;
    uVar2 = puVar11[-1];
    lVar13 = 2;
    uVar3 = *puVar11;
    do {
      local_104 = puVar12[-1];
      local_108 = uVar1;
      local_100 = uVar6;
      local_f8 = uVar1;
      local_f4 = local_104;
      local_f0 = uVar5;
      (**(code **)(*param_1 + 0x38))
                (param_1,&local_f8,&local_108,param_3,param_4,param_5,param_6,param_7);
      local_100 = *puVar12;
      local_f8 = (undefined4)local_e8;
      local_108 = uVar9;
      local_104 = uVar2;
      local_f4 = uVar2;
      local_f0 = local_100;
      (**(code **)(*param_1 + 0x38))
                (param_1,&local_f8,&local_108,param_3,param_4,param_5,param_6,param_7);
      local_108 = puVar12[-2];
      local_f4 = uVar8;
      local_104 = uVar10;
      local_100 = uVar3;
      local_f8 = local_108;
      local_f0 = uVar3;
      (**(code **)(*param_1 + 0x38))
                (param_1,&local_f8,&local_108,param_3,param_4,param_5,param_6,param_7);
      puVar12 = puVar12 + 3;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    puVar11 = puVar11 + 3;
    local_res10 = local_res10 + -1;
  } while (local_res10 != 0);
  return;
}



// FUNCTION 142705830 FUN_142705830 body=1280 status=ok
// SIG undefined FUN_142705830(void)

void FUN_142705830(longlong *param_1,float *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  longlong local_f8;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e4;
  float local_dc;
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
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  local_f0 = *param_3;
  pfVar1 = &local_e8;
  local_e4 = *(undefined8 *)((longlong)param_3 + 0xc);
  local_e8 = *(float *)(param_3 + 1);
  fStack_d0 = *(float *)(param_3 + 1);
  local_dc = *(float *)((longlong)param_3 + 0x14);
  fStack_c0 = *(float *)((longlong)param_3 + 0x14);
  fStack_84 = (float)((ulonglong)local_e4 >> 0x20);
  local_b8 = (float)local_f0;
  local_a8 = (float)local_e4;
  fStack_94 = (float)((ulonglong)local_f0 >> 0x20);
  fStack_cc = 1.0;
  fStack_bc = 1.0;
  fStack_ac = 1.0;
  fStack_9c = 1.0;
  fStack_8c = 1.0;
  fStack_7c = 1.0;
  local_f8 = 2;
  do {
    pfVar2 = &local_e8;
    lVar3 = 2;
    local_d8 = pfVar1[-2];
    local_c8 = pfVar1[-2];
    fStack_b4 = pfVar1[-1];
    fStack_a4 = pfVar1[-1];
    fStack_90 = *pfVar1;
    fStack_80 = *pfVar1;
    do {
      fStack_d4 = pfVar2[-1];
      local_108 = local_d8 * *param_2 + fStack_d4 * param_2[4] +
                  fStack_d0 * param_2[8] + fStack_cc * param_2[0xc];
      local_104 = local_d8 * param_2[1] + fStack_d4 * param_2[5] +
                  fStack_d0 * param_2[9] + fStack_cc * param_2[0xd];
      local_100 = local_d8 * param_2[2] + fStack_d4 * param_2[6] +
                  fStack_d0 * param_2[10] + fStack_cc * param_2[0xe];
      local_118 = local_c8 * *param_2 + fStack_d4 * param_2[4] +
                  fStack_c0 * param_2[8] + fStack_bc * param_2[0xc];
      local_114 = local_c8 * param_2[1] + fStack_d4 * param_2[5] +
                  fStack_c0 * param_2[9] + fStack_bc * param_2[0xd];
      local_110 = local_c8 * param_2[2] + fStack_d4 * param_2[6] +
                  fStack_c0 * param_2[10] + fStack_bc * param_2[0xe];
      fStack_c4 = fStack_d4;
      (**(code **)(*param_1 + 0x38))
                (param_1,&local_108,&local_118,param_4,param_5,param_6,param_7,param_8,0,0);
      fStack_b0 = *pfVar2;
      local_108 = local_b8 * *param_2 + fStack_b4 * param_2[4] +
                  fStack_b0 * param_2[8] + fStack_ac * param_2[0xc];
      local_104 = local_b8 * param_2[1] + fStack_b4 * param_2[5] +
                  fStack_b0 * param_2[9] + fStack_ac * param_2[0xd];
      local_100 = local_b8 * param_2[2] + fStack_b4 * param_2[6] +
                  fStack_b0 * param_2[10] + fStack_ac * param_2[0xe];
      local_118 = local_a8 * *param_2 + fStack_a4 * param_2[4] +
                  fStack_b0 * param_2[8] + fStack_9c * param_2[0xc];
      local_114 = local_a8 * param_2[1] + fStack_a4 * param_2[5] +
                  fStack_b0 * param_2[9] + fStack_9c * param_2[0xd];
      local_110 = local_a8 * param_2[2] + fStack_a4 * param_2[6] +
                  fStack_b0 * param_2[10] + fStack_9c * param_2[0xe];
      fStack_a0 = fStack_b0;
      (**(code **)(*param_1 + 0x38))
                (param_1,&local_108,&local_118,param_4,param_5,param_6,param_7,param_8,0,0);
      local_98 = pfVar2[-2];
      local_108 = local_98 * *param_2 + fStack_94 * param_2[4] +
                  fStack_90 * param_2[8] + fStack_8c * param_2[0xc];
      local_104 = local_98 * param_2[1] + fStack_94 * param_2[5] +
                  fStack_90 * param_2[9] + fStack_8c * param_2[0xd];
      local_100 = local_98 * param_2[2] + fStack_94 * param_2[6] +
                  fStack_90 * param_2[10] + fStack_8c * param_2[0xe];
      local_118 = local_98 * *param_2 + fStack_84 * param_2[4] +
                  fStack_80 * param_2[8] + fStack_7c * param_2[0xc];
      local_114 = local_98 * param_2[1] + fStack_84 * param_2[5] +
                  fStack_80 * param_2[9] + fStack_7c * param_2[0xd];
      local_110 = local_98 * param_2[2] + fStack_84 * param_2[6] +
                  fStack_80 * param_2[10] + fStack_7c * param_2[0xe];
      local_88 = local_98;
      (**(code **)(*param_1 + 0x38))
                (param_1,&local_108,&local_118,param_4,param_5,param_6,param_7,param_8,0,0);
      pfVar2 = pfVar2 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    pfVar1 = pfVar1 + 3;
    local_f8 = local_f8 + -1;
  } while (local_f8 != 0);
  return;
}



// FUNCTION 142705d30 FUN_142705d30 body=2177 status=ok
// SIG undefined FUN_142705d30(void)

void FUN_142705d30(longlong *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  undefined8 param_6,float param_7,float param_8,int param_9,undefined1 param_10,
                  undefined4 param_11,undefined4 param_12,undefined1 param_13)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_res20;
  undefined8 local_130;
  float local_128;
  undefined8 local_120;
  float local_118;
  undefined8 local_110;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  
  fVar11 = param_3[1];
  fVar16 = *param_3;
  local_118 = param_3[2];
  fVar15 = fVar16 * fVar16 + fVar11 * fVar11 + local_118 * local_118;
  if (fVar15 == 1.0) {
    local_120 = *(undefined8 *)param_3;
    local_118 = param_3[2];
    fVar11 = (float)((ulonglong)local_120 >> 0x20);
    fVar16 = (float)local_120;
  }
  else if (1e-08 <= fVar15) {
    auVar10 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
    fVar13 = auVar10._0_4_;
    fVar13 = fVar13 + fVar13 * (0.5 - fVar15 * 0.5 * fVar13 * fVar13);
    fVar13 = fVar13 + fVar13 * (0.5 - fVar15 * 0.5 * fVar13 * fVar13);
    fVar11 = fVar11 * fVar13;
    fVar16 = fVar16 * fVar13;
    local_118 = local_118 * fVar13;
    local_120 = CONCAT44(fVar11,fVar16);
  }
  else {
    local_120 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_118 = DAT_1468b5d98;
    fVar16 = DAT_1468b5d90;
    fVar11 = DAT_1468b5d94;
  }
  fVar4 = local_118;
  fVar13 = param_4[1];
  local_res20 = *param_4;
  local_128 = param_4[2];
  fVar12 = local_res20 * local_res20 + fVar13 * fVar13 + local_128 * local_128;
  if (fVar12 == 1.0) {
    local_130 = *(undefined8 *)param_4;
    local_128 = param_4[2];
    fVar13 = (float)((ulonglong)local_130 >> 0x20);
    local_res20 = (float)local_130;
  }
  else if (fVar12 < 1e-08) {
    local_res20 = DAT_1468b5d90;
    local_130 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_128 = DAT_1468b5d98;
    fVar13 = DAT_1468b5d94;
  }
  else {
    auVar10 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar19 = auVar10._0_4_;
    fVar19 = fVar19 + fVar19 * (0.5 - fVar12 * 0.5 * fVar19 * fVar19);
    fVar19 = fVar19 + fVar19 * (0.5 - fVar12 * 0.5 * fVar19 * fVar19);
    local_res20 = local_res20 * fVar19;
    fVar13 = fVar13 * fVar19;
    local_128 = local_128 * fVar19;
    local_130 = CONCAT44(fVar13,local_res20);
  }
  fVar3 = local_128;
  fVar19 = param_5[1];
  fVar14 = *param_5 * *param_5 + fVar19 * fVar19 + param_5[2] * param_5[2];
  if (fVar14 == 1.0) {
    local_110 = *(undefined8 *)param_5;
    fVar17 = param_5[2];
    fVar18 = (float)((ulonglong)local_110 >> 0x20);
    fVar9 = (float)local_110;
  }
  else {
    fVar17 = DAT_1468b5d98;
    fVar18 = DAT_1468b5d94;
    fVar9 = DAT_1468b5d90;
    if (1e-08 <= fVar14) {
      auVar10 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      fVar9 = auVar10._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar14 * 0.5 * fVar9 * fVar9);
      fVar9 = fVar9 + fVar9 * (0.5 - fVar14 * 0.5 * fVar9 * fVar9);
      fVar17 = fVar9 * param_5[2];
      fVar18 = fVar9 * fVar19;
      fVar9 = fVar9 * *param_5;
    }
    local_110 = CONCAT44(fVar18,fVar9);
  }
  fVar19 = SQRT(fVar12);
  if (SQRT(fVar12) <= SQRT(fVar15)) {
    fVar19 = SQRT(fVar15);
  }
  fVar19 = fVar19 * param_7;
  param_8 = param_8 * SQRT(fVar14);
  if (0.0 <= fVar19) {
    if (param_8 <= fVar19) {
      fVar19 = param_8;
    }
  }
  else {
    fVar19 = 0.0;
  }
  local_f0 = (float)*(undefined8 *)param_2;
  param_8 = param_8 - fVar19;
  fStack_ec = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
  if (param_8 <= 0.0) {
    param_8 = 0.0;
  }
  fVar12 = fVar17 * param_8;
  fVar15 = fVar9 * param_8;
  param_8 = fVar18 * param_8;
  local_100 = local_f0 + fVar15;
  local_fc = fStack_ec + param_8;
  local_f8 = param_2[2] + fVar12;
  local_e8 = param_2[2] - fVar12;
  _local_f0 = CONCAT44(fStack_ec - param_8,local_f0 - fVar15);
  local_108 = fVar17;
  DrawCircle(local_f8,&local_100,&local_120,&local_130,param_6,fVar19,param_9,param_10,param_11,
             param_12,param_13);
  DrawCircle(param_1,&local_f0,&local_120,&local_130,param_6,fVar19,param_9,param_10,param_11,
             param_12,param_13);
  param_9 = param_9 / 2;
  FUN_142703d40(param_1,&local_100,&local_130,&local_110,param_6,fVar19,param_9,param_11,param_12,
                param_13);
  FUN_142703d40(param_1,&local_100,&local_120,&local_110,param_6,fVar19,param_9,param_11,param_12,
                param_13);
  local_100 = -fVar9;
  local_fc = -fVar18;
  local_f8 = -fVar17;
  FUN_142703d40(param_1,&local_f0,&local_130,&local_100,param_6,fVar19,param_9,param_11,param_12,
                param_13);
  FUN_142703d40(param_1,&local_f0,&local_120,&local_100,param_6,fVar19,param_9,param_11,param_12,
                param_13);
  iVar5 = 0;
  fVar14 = fVar16 * fVar19 + *param_2;
  fVar18 = fVar4 * fVar19 + param_2[2];
  fVar17 = fVar11 * fVar19 + param_2[1];
  do {
    iVar5 = iVar5 + 1;
    uVar7 = __libm_sse2_sincosf_((float)iVar5 * 1.5707964);
    fVar9 = *param_2;
    fVar1 = param_2[1];
    fVar6 = (float)uVar7;
    fVar8 = (float)((ulonglong)uVar7 >> 0x20);
    fVar2 = param_2[2];
    local_100 = fVar14 - fVar15;
    local_e8 = fVar18 + fVar12;
    local_f8 = fVar18 - fVar12;
    local_fc = fVar17 - param_8;
    _local_f0 = CONCAT44(fVar17 + param_8,fVar14 + fVar15);
    (**(code **)(*param_1 + 0x38))
              (param_1,&local_100,&local_f0,param_6,param_10,param_11,param_12,param_13);
    fVar14 = (fVar8 * fVar16 + fVar6 * local_res20) * fVar19 + fVar9;
    fVar18 = (fVar8 * fVar4 + fVar6 * fVar3) * fVar19 + fVar2;
    fVar17 = (fVar6 * fVar13 + fVar8 * fVar11) * fVar19 + fVar1;
  } while (iVar5 < 4);
  return;
}



// FUNCTION 1427065c0 DrawWireCone body=180 status=ok
// SIG undefined DrawWireCone(void)

void DrawWireCone(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8,
                 undefined4 param_9,undefined4 param_10,undefined1 param_11)

{
  undefined1 local_48 [64];
  
  FUN_140487e30(local_48,param_3);
  FUN_142706680(param_1,param_2,local_48,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                param_11);
  return;
}



// FUNCTION 142706680 FUN_142706680 body=842 status=ok
// SIG undefined FUN_142706680(void)

void FUN_142706680(longlong *param_1,longlong *param_2,float *param_3,float param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10,undefined1 param_11)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_68;
  float local_64;
  float local_60;
  
  uVar9 = __libm_sse2_sincosf_();
  param_6 = param_6 + (int)param_2[1];
  *(int *)(param_2 + 1) = param_6;
  if (*(int *)((longlong)param_2 + 0xc) < param_6) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2);
    param_6 = (int)param_2[1];
  }
  uVar8 = 0;
  if (0 < param_6) {
    fVar14 = (float)uVar9 * param_4;
    uVar5 = uVar8;
    uVar7 = uVar8;
    do {
      uVar10 = __libm_sse2_sincosf_
                         (param_6,((float)(int)uVar5 * 6.2831855) / (float)(int)param_2[1]);
      lVar1 = *param_2;
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
      local_60 = (float)uVar10 * fVar14;
      *(ulonglong *)(lVar1 + uVar7) =
           CONCAT44((float)((ulonglong)uVar10 >> 0x20) * fVar14,
                    (float)((ulonglong)uVar9 >> 0x20) * param_4);
      *(float *)(lVar1 + 8 + uVar7) = local_60;
      uVar7 = uVar7 + 0xc;
      param_6 = (int)param_2[1];
    } while ((int)uVar6 < param_6);
  }
  uVar5 = uVar8;
  uVar7 = uVar8;
  if (0 < param_6) {
    do {
      fVar14 = *param_3;
      fVar2 = param_3[1];
      fVar3 = param_3[2];
      fVar4 = param_3[3];
      lVar1 = *param_2;
      uVar6 = (int)uVar7 + 1;
      fVar15 = *(float *)(lVar1 + uVar5) * param_3[8];
      fVar16 = *(float *)(lVar1 + 4 + uVar5) * param_3[9];
      fVar17 = *(float *)(lVar1 + 8 + uVar5) * param_3[10];
      fVar11 = fVar17 * fVar2 - fVar16 * fVar3;
      fVar12 = fVar15 * fVar3 - fVar17 * fVar14;
      fVar13 = fVar16 * fVar14 - fVar15 * fVar2;
      fVar11 = fVar11 + fVar11;
      fVar12 = fVar12 + fVar12;
      fVar13 = fVar13 + fVar13;
      local_60 = (fVar12 * fVar14 - fVar11 * fVar2) + fVar4 * fVar13 + fVar17 + param_3[6];
      *(ulonglong *)(lVar1 + uVar5) =
           CONCAT44((fVar11 * fVar3 - fVar13 * fVar14) + fVar4 * fVar12 + fVar16 + param_3[5],
                    (fVar13 * fVar2 - fVar12 * fVar3) + fVar4 * fVar11 + fVar15 + param_3[4]);
      *(float *)(lVar1 + 8 + uVar5) = local_60;
      param_6 = (int)param_2[1];
      uVar5 = uVar5 + 0xc;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < param_6);
  }
  uVar5 = uVar8;
  if (0 < param_6) {
    do {
      local_68 = param_3[4];
      local_64 = param_3[5];
      local_60 = param_3[6];
      (**(code **)(*param_1 + 0x38))
                (param_1,&local_68,*param_2 + (longlong)(int)uVar5 * 0xc,param_7,param_8,param_9,
                 param_10,param_11);
      param_6 = (int)param_2[1];
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
    } while ((int)uVar6 < param_6);
  }
  if (0 < param_6 + -1) {
    do {
      uVar6 = (int)uVar8 + 1;
      (**(code **)(*param_1 + 0x38))
                (param_1,*param_2 + (longlong)(int)uVar8 * 0xc,*param_2 + (longlong)(int)uVar6 * 0xc
                 ,param_7,param_8,param_9,param_10,param_11);
      param_6 = (int)param_2[1];
      uVar8 = (ulonglong)uVar6;
    } while ((int)uVar6 < param_6 + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001427069c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,*param_2 + (longlong)(param_6 + -1) * 0xc,*param_2,param_7)
  ;
  return;
}



// FUNCTION 1427069d0 FUN_1427069d0 body=1004 status=ok
// SIG undefined FUN_1427069d0(void)

void FUN_1427069d0(longlong *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  undefined8 param_6,float param_7,float param_8,int param_9,undefined1 param_10,
                  undefined4 param_11,undefined4 param_12,undefined1 param_13)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  
  iVar1 = 0;
  fVar7 = param_7 * *param_3 + *param_2;
  fVar8 = param_7 * param_3[1] + param_2[1];
  fVar9 = param_7 * param_3[2] + param_2[2];
  if (0 < param_9) {
    do {
      iVar1 = iVar1 + 1;
      uVar2 = __libm_sse2_sincosf_();
      fVar6 = (float)uVar2;
      fVar3 = (float)((ulonglong)uVar2 >> 0x20);
      fVar5 = (fVar3 * *param_3 + fVar6 * *param_4) * param_7 + *param_2;
      fVar4 = (fVar3 * param_3[1] + fVar6 * param_4[1]) * param_7 + param_2[1];
      fVar6 = (fVar3 * param_3[2] + fVar6 * param_4[2]) * param_7 + param_2[2];
      local_118 = fVar5 - param_8 * *param_5;
      local_114 = fVar4 - param_8 * param_5[1];
      local_110 = fVar6 - param_8 * param_5[2];
      local_10c = fVar7 - param_8 * *param_5;
      local_108 = fVar8 - param_8 * param_5[1];
      local_104 = fVar9 - param_8 * param_5[2];
      (**(code **)(*param_1 + 0x38))
                (param_1,&local_10c,&local_118,param_6,param_10,param_11,param_12,param_13);
      local_100 = param_8 * *param_5 + fVar5;
      local_fc = param_8 * param_5[1] + fVar4;
      local_f8 = param_8 * param_5[2] + fVar6;
      local_f4 = fVar7 + param_8 * *param_5;
      local_ec = param_8 * param_5[2] + fVar9;
      local_f0 = fVar8 + param_8 * param_5[1];
      (**(code **)(*param_1 + 0x38))
                (param_1,&local_f4,&local_100,param_6,param_10,param_11,param_12,param_13);
      local_e4 = param_8 * param_5[1] + fVar8;
      local_e8 = fVar7 + param_8 * *param_5;
      local_dc = fVar7 - param_8 * *param_5;
      local_d8 = fVar8 - param_8 * param_5[1];
      local_e0 = param_8 * param_5[2] + fVar9;
      local_d4 = fVar9 - param_8 * param_5[2];
      (**(code **)(*param_1 + 0x38))
                (param_1,&local_dc,&local_e8,param_6,param_10,param_11,param_12,param_13);
      fVar7 = fVar5;
      fVar8 = fVar4;
      fVar9 = fVar6;
    } while (iVar1 < param_9);
  }
  return;
}



// FUNCTION 142706dc0 FUN_142706dc0 body=1135 status=ok
// SIG undefined FUN_142706dc0(void)

void FUN_142706dc0(undefined8 param_1,float *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                  undefined1 param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar11 = param_2[8] * 0.0;
  fVar12 = param_2[9] * 1.0;
  fVar13 = param_2[10] * 0.0;
  fVar8 = param_2[8] * 1.0;
  fVar9 = param_2[9] * 0.0;
  fVar10 = param_2[10] * 0.0;
  fVar5 = fVar13 * fVar2 - fVar12 * fVar3;
  fVar6 = fVar11 * fVar3 - fVar13 * fVar1;
  fVar7 = fVar12 * fVar1 - fVar11 * fVar2;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  local_c8 = (fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5 + fVar11;
  local_c4 = (fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6 + fVar12;
  local_c0 = (fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7 + fVar13;
  fVar5 = fVar10 * fVar2 - fVar9 * fVar3;
  fVar6 = fVar8 * fVar3 - fVar10 * fVar1;
  fVar7 = fVar9 * fVar1 - fVar8 * fVar2;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  local_bc = (fVar7 * fVar2 - fVar6 * fVar3) + fVar5 * fVar4 + fVar8;
  local_b8 = (fVar5 * fVar3 - fVar7 * fVar1) + fVar6 * fVar4 + fVar9;
  local_b4 = (fVar6 * fVar1 - fVar5 * fVar2) + fVar7 * fVar4 + fVar10;
  local_b0 = param_2[4];
  local_ac = param_2[5];
  local_a8 = param_2[6];
  DrawCircle(local_ac,&local_b0,&local_bc,&local_c8,param_3,param_4,param_5,0,param_7,param_8,
             param_9);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar11 = param_2[8] * 1.0;
  fVar12 = param_2[9] * 0.0;
  fVar13 = param_2[10] * 0.0;
  fVar8 = param_2[8] * 0.0;
  fVar9 = param_2[9] * 0.0;
  fVar10 = param_2[10] * 1.0;
  fVar5 = fVar10 * fVar2 - fVar9 * fVar3;
  fVar6 = fVar8 * fVar3 - fVar10 * fVar1;
  fVar7 = fVar9 * fVar1 - fVar8 * fVar2;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  local_b0 = (fVar7 * fVar2 - fVar6 * fVar3) + fVar5 * fVar4 + fVar8;
  local_ac = (fVar5 * fVar3 - fVar7 * fVar1) + fVar6 * fVar4 + fVar9;
  local_a8 = (fVar6 * fVar1 - fVar5 * fVar2) + fVar7 * fVar4 + fVar10;
  fVar5 = fVar13 * fVar2 - fVar12 * fVar3;
  fVar6 = fVar11 * fVar3 - fVar13 * fVar1;
  fVar7 = fVar12 * fVar1 - fVar11 * fVar2;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  local_bc = (fVar7 * fVar2 - fVar6 * fVar3) + fVar5 * fVar4 + fVar11;
  local_b8 = (fVar5 * fVar3 - fVar7 * fVar1) + fVar6 * fVar4 + fVar12;
  local_b4 = (fVar6 * fVar1 - fVar5 * fVar2) + fVar7 * fVar4 + fVar13;
  local_c8 = param_2[4];
  local_c4 = param_2[5];
  local_c0 = param_2[6];
  DrawCircle(param_1,&local_c8,&local_bc,&local_b0,param_3,param_4,param_5,0,param_7,param_8,param_9
            );
  fVar8 = param_2[8] * 0.0;
  fVar9 = param_2[9] * 0.0;
  fVar10 = param_2[10] * 1.0;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar11 = param_2[8] * 0.0;
  fVar12 = param_2[9] * 1.0;
  fVar13 = param_2[10] * 0.0;
  fVar5 = fVar10 * fVar2 - fVar9 * fVar3;
  fVar6 = fVar8 * fVar3 - fVar10 * fVar1;
  fVar7 = fVar9 * fVar1 - fVar8 * fVar2;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  local_b0 = (fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5 + fVar8;
  local_ac = (fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6 + fVar9;
  local_a8 = (fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7 + fVar10;
  fVar5 = fVar13 * fVar2 - fVar12 * fVar3;
  fVar6 = fVar11 * fVar3 - fVar13 * fVar1;
  fVar7 = fVar12 * fVar1 - fVar11 * fVar2;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  local_bc = (fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5 + fVar11;
  local_b8 = (fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6 + fVar12;
  local_b4 = (fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7 + fVar13;
  local_c8 = param_2[4];
  local_c4 = param_2[5];
  local_c0 = param_2[6];
  DrawCircle(param_1,&local_c8,&local_bc,&local_b0,param_3,param_4,param_5,0,param_7,param_8,param_9
            );
  return;
}



// FUNCTION 142707230 DrawWireSphere body=383 status=ok
// SIG undefined DrawWireSphere(void)

void DrawWireSphere(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                   undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
                   undefined1 param_9)

{
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 local_5c;
  undefined4 local_54;
  
  local_68 = 0;
  uStack_64 = 0x3f800000;
  uStack_60 = 0;
  local_5c = 0x3f800000;
  local_54 = 0;
  DrawCircle(param_1,param_2,&local_5c,&local_68,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9);
  local_5c = 0;
  local_54 = 0x3f800000;
  local_68 = 0x3f800000;
  uStack_64 = 0;
  uStack_60 = 0;
  DrawCircle(param_1,param_2,&local_68,&local_5c,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9);
  local_5c = 0;
  local_54 = 0x3f800000;
  local_68 = 0;
  uStack_64 = 0x3f800000;
  uStack_60 = 0;
  DrawCircle(param_1,param_2,&local_68,&local_5c,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9);
  return;
}



// FUNCTION 1427073b0 FUN_1427073b0 body=381 status=ok
// SIG undefined FUN_1427073b0(void)

void FUN_1427073b0(longlong *param_1,float *param_2,float param_3,undefined8 param_4,
                  undefined1 param_5)

{
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  local_44 = param_2[1];
  local_48 = *param_2 - param_3;
  local_3c = *param_2 + param_3;
  local_40 = param_2[2];
  local_38 = local_44;
  local_34 = local_40;
  (**(code **)(*param_1 + 0x38))(local_40,&local_3c,&local_48,local_3c,param_5,0,0,0);
  local_48 = *param_2;
  local_40 = param_2[2];
  local_38 = param_2[1] - param_3;
  local_44 = param_2[1] + param_3;
  local_3c = local_48;
  local_34 = local_40;
  (**(code **)(*param_1 + 0x38))(param_1,&local_48,&local_3c,param_4,param_5,0,0,0);
  local_48 = *param_2;
  local_44 = param_2[1];
  local_34 = param_2[2] - param_3;
  local_40 = param_2[2] + param_3;
  local_3c = local_48;
  local_38 = local_44;
  (**(code **)(*param_1 + 0x38))(param_1,&local_48,&local_3c,param_4,param_5,0,0,0);
  return;
}



// FUNCTION 142707530 FUN_142707530 body=137 status=ok
// SIG undefined FUN_142707530(void)

longlong FUN_142707530(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_38 [24];
  longlong local_20;
  undefined1 local_10;
  uint local_c;
  
  FActorSpawnParameters::FActorSpawnParameters(local_38);
  local_20 = param_1[0x2a];
  local_c = local_c | 0x40;
  lVar2 = param_1[2];
  local_10 = 1;
  uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = UWorld::SpawnActor(uVar1,lVar2,0,0,local_38);
  if (lVar2 != 0) {
    (**(code **)(*param_1 + 0x7a0))(param_1,lVar2);
    FUN_1429ed420(param_1,lVar2);
  }
  return lVar2;
}



// FUNCTION 1427075c0 Empty body=116 status=ok
// SIG undefined Empty(void)

void TArray<FPoly,FDefaultAllocator>::Empty(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 0xf0);
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x2b;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 142707680 FUN_142707680 body=43 status=ok
// SIG undefined FUN_142707680(void)

void FUN_142707680(longlong param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  FUN_1428ca150(param_1 + -0x490,&local_18);
  return;
}



// FUNCTION 1427076b0 FUN_1427076b0 body=217 status=ok
// SIG undefined FUN_1427076b0(void)

void FUN_1427076b0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = param_1[0xa1];
  if (lVar1 != 0) {
    lVar3 = ULocalPlayer::GetPrivateStaticClass();
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
      if (param_1[0xea] != 0) {
        (**(code **)(*param_1 + 0xcb0))(param_1,0);
      }
      if (DAT_1469f4590 != 0) {
        plVar4 = (longlong *)(**(code **)(*DAT_1469eaf48 + 0xd0))();
        if (plVar4 != (longlong *)0x0) {
          local_18 = 0;
          uStack_10 = 0;
          (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined4 *)(lVar1 + 0x108),&local_18);
        }
      }
    }
  }
  if (param_1[0xb5] != 0) {
    FUN_14291d120();
  }
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 1427077e0 FUN_1427077e0 body=89 status=ok
// SIG undefined FUN_1427077e0(void)

void FUN_1427077e0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar1 != '\0') {
    local_18 = 0;
    uStack_10 = 0;
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    UWorld::SeamlessTravel(uVar2,param_1 + 0x10,0,&local_18);
  }
  return;
}



// FUNCTION 142707840 FUN_142707840 body=101 status=ok
// SIG undefined FUN_142707840(void)

undefined1
FUN_142707840(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 local_18 [16];
  
  uVar2 = FString::FString(local_18);
  uVar1 = (**(code **)(param_1 + 8))(uVar2,param_3,param_4,param_5);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1427078b0 FUN_1427078b0 body=91 status=ok
// SIG undefined FUN_1427078b0(void)

undefined8 FUN_1427078b0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar1 != '\0') {
    local_18 = 0;
    uStack_10 = 0;
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    UWorld::SeamlessTravel(uVar2,param_1 + 0x10,0,&local_18);
  }
  return 1;
}



// FUNCTION 142707910 FUN_142707910 body=277 status=ok
// SIG undefined FUN_142707910(void)

void FUN_142707910(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  DWORD *pDVar5;
  longlong *lpTlsValue;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  lVar7 = param_1[4];
  lVar3 = param_1[2];
  *(undefined8 *)(lVar3 + 0x10) = param_1[3];
  cVar4 = FUN_142865d40(*(undefined4 *)(lVar7 + 8));
  lVar7 = 0xc0;
  if (cVar4 != '\0') {
    lVar7 = 0x20;
  }
  *(longlong *)(lVar3 + 0x20) = *(longlong *)(lVar3 + 0x10) + lVar7;
  *param_1 = &PTR_FUN_145179838;
  *(undefined1 *)(param_1 + 5) = 0;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar5);
  plVar8 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar8;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      lpTlsValue = plVar6;
    }
    TlsSetValue(*pDVar5,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar8 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar5 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar8;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142707a30 FUN_142707a30 body=258 status=ok
// SIG undefined FUN_142707a30(void)

void FUN_142707a30(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  plVar6 = (longlong *)param_1[3];
  lVar3 = param_1[4];
  *(longlong **)param_1[2] = plVar6;
  if ((plVar6 != (longlong *)0x0) && (1 < *(int *)(lVar3 + 8))) {
    (**(code **)(*plVar6 + 0x28))();
  }
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_145179848;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142707b60 FUN_142707b60 body=67 status=ok
// SIG undefined FUN_142707b60(void)

void FUN_142707b60(longlong *param_1)

{
  FUN_1423cff80();
  (**(code **)(*param_1 + 0x718))(param_1,0x145);
  FUN_1429e09e0(param_1,0x145);
  return;
}



// FUNCTION 142707bb0 FUN_142707bb0 body=262 status=ok
// SIG undefined FUN_142707bb0(void)

wchar_t * FUN_142707bb0(wchar_t *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = (**(code **)(*(longlong *)param_1 + 0x668))();
  lVar6 = 0;
  if ((lVar3 != 0) && (pwVar1 = *(wchar_t **)(lVar3 + 0x488), pwVar1 != (wchar_t *)0x0)) {
    lVar3 = lVar6;
    if (param_2 != 0) {
      lVar4 = FUN_1428dfc70();
      lVar5 = param_2;
      do {
        lVar3 = param_2;
        if (lVar5 == lVar4) break;
        lVar5 = *(longlong *)(lVar5 + 0x30);
        lVar3 = lVar6;
      } while (lVar5 != 0);
    }
    if ((*(int *)(*(longlong *)(pwVar1 + 8) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar1 + 8) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return pwVar1;
    }
  }
  lVar3 = lVar6;
  if (param_2 != 0) {
    lVar4 = FUN_1428dfc70();
    lVar5 = param_2;
    do {
      lVar3 = param_2;
      if (lVar5 == lVar4) break;
      lVar5 = *(longlong *)(lVar5 + 0x30);
      lVar3 = lVar6;
    } while (lVar5 != 0);
  }
  if ((*(int *)(*(longlong *)(param_1 + 8) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 8) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    param_1 = AK::MemoryMgr::GetPoolName((long)param_1);
  }
  return param_1;
}



// FUNCTION 142707ce0 FUN_142707ce0 body=452 status=ok
// SIG undefined FUN_142707ce0(void)

void FUN_142707ce0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  uint local_res10;
  uint uStackX_14;
  
  if (param_2 == 0) {
    return;
  }
  iVar3 = FUN_142235230();
  if (iVar3 == 3) {
    return;
  }
  lVar5 = 0;
  if ((*(byte *)(param_2 + 0x94) & 2) == 0) {
    iVar3 = *(int *)(param_2 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar6 = iVar3 >> 0x1f & 0xffff;
      uVar4 = iVar3 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
      bVar2 = false;
      goto LAB_142707d5f;
    }
  }
  bVar2 = true;
LAB_142707d5f:
  if ((!bVar2) && (plVar7 = *(longlong **)(param_1 + 0x508), plVar7 != (longlong *)0x0)) {
    lVar5 = FUN_1429c30a0();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = (**(code **)(*plVar7 + 0x280))(plVar7);
      if (lVar5 != 0) {
        plVar7 = (longlong *)plVar7[0x32e];
      }
      FWeakObjectPtr::operator=(&local_res10,param_2);
      if ((int)plVar7[0x2c1] != *(int *)((longlong)plVar7 + 0x1634)) {
        plVar8 = (longlong *)plVar7[0x2c8];
        if ((longlong *)plVar7[0x2c8] == (longlong *)0x0) {
          plVar8 = plVar7 + 0x2c7;
        }
        iVar3 = *(int *)((longlong)plVar8 +
                        ((longlong)(int)(uStackX_14 ^ local_res10) &
                        (longlong)(int)plVar7[0x2c9] - 1U) * 4);
        if (iVar3 != -1) {
          lVar5 = plVar7[0x2c0];
          while( true ) {
            lVar9 = (longlong)iVar3;
            lVar1 = lVar5 + lVar9 * 0x18;
            if ((*(uint *)(lVar5 + lVar9 * 0x18) == local_res10) &&
               (*(uint *)(lVar1 + 4) == uStackX_14)) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if (bVar2) break;
            iVar3 = *(int *)(lVar1 + 0x10);
            if (iVar3 == -1) {
              return;
            }
          }
          if ((((iVar3 != -1) && (lVar5 = lVar5 + lVar9 * 0x18, lVar5 != 0)) &&
              (*(longlong *)(lVar5 + 8) != 0)) &&
             (lVar5 = AActor::FindOrAddNetworkObjectInfo(param_2), lVar5 != 0)) {
            *(uint *)(lVar5 + 0x28) = *(uint *)(lVar5 + 0x28) | 1;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142707eb0 FUN_142707eb0 body=102 status=ok
// SIG undefined FUN_142707eb0(void)

void FUN_142707eb0(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  local_c = local_c & 0xfffffffe;
  local_18 = 0;
  local_10 = 0x40000000;
  local_14 = 1;
  (**(code **)(*param_1 + 0xe18))(0,0x40000000,&local_18);
  FUN_1429e0990(param_1,param_2,param_3);
  return;
}



// FUNCTION 142707f20 FUN_142707f20 body=202 status=ok
// SIG undefined FUN_142707f20(void)

void FUN_142707f20(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong local_18;
  undefined4 local_10;
  
  plVar2 = (longlong *)param_1[0x91];
  plVar1 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    plVar1 = (longlong *)param_1[0xf7];
  }
  if (plVar1 != (longlong *)0x0) {
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0xf7];
    }
                    /* WARNING: Could not recover jumptable at 0x000142707f71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x610))();
    return;
  }
  if (param_1[0xa5] == 0) {
    local_10 = (int)param_1[0xfa];
    plVar2 = &local_18;
    local_18 = param_1[0xf9];
  }
  else {
    plVar2 = (longlong *)FUN_1426e1ca0(param_1[0xa5],&local_18);
  }
  *param_2 = *plVar2;
  *(int *)(param_2 + 1) = (int)plVar2[1];
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x720))(param_1,&local_18);
  *param_3 = *puVar3;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar3 + 1);
  return;
}



// FUNCTION 142707ff0 FUN_142707ff0 body=1564 status=ok
// SIG undefined FUN_142707ff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142707ff0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined1 auStack_19e8 [32];
  undefined8 *local_19c8;
  undefined8 local_19b8;
  longlong lStack_19b0;
  undefined4 local_1988;
  undefined4 uStack_1984;
  undefined4 uStack_1980;
  undefined4 uStack_197c;
  longlong local_1978;
  longlong lStack_1970;
  undefined8 local_1968;
  undefined8 uStack_1960;
  undefined8 local_1958;
  undefined8 uStack_1950;
  undefined8 local_1948;
  undefined8 uStack_1940;
  undefined8 local_1938 [792];
  undefined8 *local_78;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_19e8;
  local_1978 = param_1 + 0x20;
  local_1968 = *(undefined8 *)(param_1 + 0x80);
  uStack_1960 = *(undefined8 *)(param_1 + 0x88);
  local_1958 = *(undefined8 *)(param_1 + 0x90);
  uStack_1950 = *(undefined8 *)(param_1 + 0x98);
  puVar10 = (undefined8 *)0x0;
  local_1948 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1940 = *(undefined8 *)(param_1 + 0xa8);
  local_78 = (undefined8 *)0x0;
  local_68 = 0;
  puVar8 = puVar10;
  puVar11 = puVar10;
  local_19c8 = (undefined8 *)param_1;
  do {
    lVar4 = local_1978;
    puVar11 = (undefined8 *)
              ((longlong)puVar11 + (ulonglong)(uint)(*(int *)(local_1978 + 0xc) * 0x140) + 0x60);
    uVar9 = 0;
    do {
      lVar1 = *(longlong *)(lVar4 + 0x18 + (ulonglong)(uVar9 & 7) * 8);
      if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x58) & 0x7fffffff) != 0)) {
        iVar2 = (int)puVar10 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar2);
        if (local_68._4_4_ < iVar2) {
          TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
          ::ResizeGrow(local_1938,puVar10);
          puVar8 = local_78;
        }
        puVar7 = (undefined8 *)0x0;
        puVar6 = local_1938;
        if (puVar8 != (undefined8 *)0x0) {
          puVar6 = puVar8;
        }
        puVar6 = puVar6 + (longlong)(int)puVar10 * 8;
        if (puVar6 != (undefined8 *)0x0) {
          puVar6[2] = 0;
          *(undefined4 *)(puVar6 + 3) = 0;
          *(undefined8 *)((longlong)puVar6 + 0x1c) = 0x3f800000;
          *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
          *(undefined4 *)((longlong)puVar6 + 0x2c) = 0x3f800000;
          *puVar6 = 0;
          puVar7 = puVar6;
        }
        *puVar7 = *(undefined8 *)(local_1978 + 0x18 + (ulonglong)(uVar9 & 7) * 8);
        *(float *)(puVar7 + 2) =
             local_1948._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)(uVar9 & 1) * 4) +
             (float)local_1968;
        *(float *)((longlong)puVar7 + 0x14) =
             local_1948._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)(uVar9 >> 1 & 1) * 4) +
             local_1968._4_4_;
        fVar12 = *(float *)(&DAT_146534f00 + (ulonglong)(uVar9 >> 2 & 1) * 4);
        *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
        *(float *)(puVar7 + 3) = local_1948._4_4_ * fVar12 + (float)uStack_1960;
        *(float *)(puVar7 + 4) = (float)local_1948;
        *(float *)((longlong)puVar7 + 0x24) = (float)local_1948;
        *(float *)(puVar7 + 5) = (float)local_1948;
        *(undefined4 *)((longlong)puVar7 + 0x2c) = 0;
        fVar12 = (float)local_1948 * 0.5 * 1.0625;
        *(float *)(puVar7 + 6) = fVar12;
        *(float *)((longlong)puVar7 + 0x34) = (float)local_1948 - fVar12;
        puVar10 = (undefined8 *)(local_68 & 0xffffffff);
        puVar8 = local_78;
      }
      iVar2 = (int)puVar10;
      if (((byte)uVar9 & 7) < 7) {
        uVar9 = uVar9 ^ (uVar9 + 1 ^ uVar9) & 7;
      }
      else {
        uVar9 = uVar9 | 8;
      }
    } while (uVar9 >> 3 == 0);
    if (iVar2 == 0) {
      local_19b8 = 0;
      local_1978 = 0;
      lStack_1970 = lStack_19b0;
      local_1948 = CONCAT44(uStack_1984,local_1988);
      uStack_1940 = CONCAT44(uStack_197c,uStack_1980);
      local_1968 = 0;
      uStack_1960 = 0x3f80000000000000;
      local_1958 = 0;
      uStack_1950 = 0x3f80000000000000;
    }
    else {
      iVar5 = iVar2 + -1;
      lVar4 = (longlong)iVar5;
      puVar10 = local_1938;
      if (puVar8 != (undefined8 *)0x0) {
        puVar10 = puVar8;
      }
      local_1978 = puVar10[lVar4 * 8];
      lStack_1970 = (puVar10 + lVar4 * 8)[1];
      local_1968 = puVar10[lVar4 * 8 + 2];
      uStack_1960 = (puVar10 + lVar4 * 8 + 2)[1];
      local_1958 = puVar10[lVar4 * 8 + 4];
      uStack_1950 = (puVar10 + lVar4 * 8 + 4)[1];
      local_1948 = puVar10[lVar4 * 8 + 6];
      uStack_1940 = (puVar10 + lVar4 * 8 + 6)[1];
      iVar3 = (iVar2 - iVar5) + -1;
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (puVar10 + (longlong)iVar5 * 8,puVar10 + (longlong)iVar2 * 8,(longlong)iVar3 << 6)
        ;
        iVar2 = (int)local_68;
      }
      local_68 = CONCAT44(local_68._4_4_,iVar2 + -1);
      TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
      ::ResizeShrink(local_1938);
      puVar10 = (undefined8 *)(local_68 & 0xffffffff);
      puVar8 = local_78;
    }
    puVar7 = local_19c8;
  } while (local_1978 != 0);
  if (puVar8 != (undefined8 *)0x0) {
    FMemory::Free(puVar8);
  }
  local_1978 = (longlong)puVar7 + 0xc0;
  local_1968 = *(undefined8 *)((longlong)puVar7 + 0x120);
  uStack_1960 = *(undefined8 *)((longlong)puVar7 + 0x128);
  puVar6 = (undefined8 *)0x0;
  local_1958 = *(undefined8 *)((longlong)puVar7 + 0x130);
  uStack_1950 = *(undefined8 *)((longlong)puVar7 + 0x138);
  local_1948 = *(undefined8 *)((longlong)puVar7 + 0x140);
  uStack_1940 = *(undefined8 *)((longlong)puVar7 + 0x148);
  local_78 = (undefined8 *)0x0;
  local_68 = 0;
  puVar8 = puVar6;
  puVar10 = puVar6;
  local_19c8 = puVar11;
  do {
    lVar4 = local_1978;
    local_19c8 = (undefined8 *)
                 ((longlong)local_19c8 +
                 (ulonglong)(uint)(*(int *)(local_1978 + 0xc) * 0x140) + 0x60);
    uVar9 = 0;
    do {
      lVar1 = *(longlong *)(lVar4 + 0x18 + (ulonglong)(uVar9 & 7) * 8);
      if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x58) & 0x7fffffff) != 0)) {
        iVar2 = (int)puVar8 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar2);
        if (local_68._4_4_ < iVar2) {
          TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
          ::ResizeGrow(local_1938,puVar8);
          puVar10 = local_78;
        }
        puVar11 = local_1938;
        if (puVar10 != (undefined8 *)0x0) {
          puVar11 = puVar10;
        }
        puVar11 = puVar11 + (longlong)(int)puVar8 * 8;
        puVar8 = puVar6;
        if (puVar11 != (undefined8 *)0x0) {
          puVar11[2] = 0;
          *(undefined4 *)(puVar11 + 3) = 0;
          *(undefined8 *)((longlong)puVar11 + 0x1c) = 0x3f800000;
          *(undefined8 *)((longlong)puVar11 + 0x24) = 0;
          *(undefined4 *)((longlong)puVar11 + 0x2c) = 0x3f800000;
          *puVar11 = 0;
          puVar8 = puVar11;
        }
        *puVar8 = *(undefined8 *)(local_1978 + 0x18 + (ulonglong)(uVar9 & 7) * 8);
        *(float *)(puVar8 + 2) =
             local_1948._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)(uVar9 & 1) * 4) +
             (float)local_1968;
        *(float *)((longlong)puVar8 + 0x14) =
             local_1948._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)(uVar9 >> 1 & 1) * 4) +
             local_1968._4_4_;
        fVar12 = *(float *)(&DAT_146534f00 + (ulonglong)(uVar9 >> 2 & 1) * 4);
        *(undefined4 *)((longlong)puVar8 + 0x1c) = 0;
        *(float *)(puVar8 + 3) = local_1948._4_4_ * fVar12 + (float)uStack_1960;
        *(float *)(puVar8 + 4) = (float)local_1948;
        *(float *)((longlong)puVar8 + 0x24) = (float)local_1948;
        *(float *)(puVar8 + 5) = (float)local_1948;
        *(undefined4 *)((longlong)puVar8 + 0x2c) = 0;
        fVar12 = (float)local_1948 * 0.5 * 1.0625;
        *(float *)(puVar8 + 6) = fVar12;
        *(float *)((longlong)puVar8 + 0x34) = (float)local_1948 - fVar12;
        puVar8 = (undefined8 *)(local_68 & 0xffffffff);
        puVar10 = local_78;
      }
      iVar2 = (int)puVar8;
      if (((byte)uVar9 & 7) < 7) {
        uVar9 = uVar9 ^ (uVar9 + 1 ^ uVar9) & 7;
      }
      else {
        uVar9 = uVar9 | 8;
      }
    } while (uVar9 >> 3 == 0);
    if (iVar2 == 0) {
      local_19b8 = 0;
      local_1978 = 0;
      lStack_1970 = lStack_19b0;
      local_1948 = CONCAT44(uStack_1984,local_1988);
      uStack_1940 = CONCAT44(uStack_197c,uStack_1980);
      local_1968 = 0;
      uStack_1960 = 0x3f80000000000000;
      local_1958 = 0;
      uStack_1950 = 0x3f80000000000000;
    }
    else {
      iVar5 = iVar2 + -1;
      lVar4 = (longlong)iVar5;
      puVar8 = local_1938;
      if (puVar10 != (undefined8 *)0x0) {
        puVar8 = puVar10;
      }
      local_1978 = puVar8[lVar4 * 8];
      lStack_1970 = (puVar8 + lVar4 * 8)[1];
      local_1968 = puVar8[lVar4 * 8 + 2];
      uStack_1960 = (puVar8 + lVar4 * 8 + 2)[1];
      local_1958 = puVar8[lVar4 * 8 + 4];
      uStack_1950 = (puVar8 + lVar4 * 8 + 4)[1];
      local_1948 = puVar8[lVar4 * 8 + 6];
      uStack_1940 = (puVar8 + lVar4 * 8 + 6)[1];
      iVar3 = (iVar2 - iVar5) + -1;
      if (iVar3 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + (longlong)iVar5 * 8,puVar8 + (longlong)iVar2 * 8,(longlong)iVar3 << 6);
        iVar2 = (int)local_68;
      }
      local_68 = CONCAT44(local_68._4_4_,iVar2 + -1);
      TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
      ::ResizeShrink(local_1938);
      puVar8 = (undefined8 *)(local_68 & 0xffffffff);
      puVar10 = local_78;
    }
    puVar11 = local_19c8;
  } while (local_1978 != 0);
  if (puVar10 != (undefined8 *)0x0) {
    FMemory::Free(puVar10);
  }
  return puVar11;
}



// FUNCTION 142708610 FUN_142708610 body=51 status=ok
// SIG undefined FUN_142708610(void)

undefined4 FUN_142708610(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x6c);
  }
  return 0;
}



// FUNCTION 142708650 FUN_142708650 body=153 status=ok
// SIG undefined FUN_142708650(void)

undefined1 FUN_142708650(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x508);
  if (lVar4 != 0) {
    lVar2 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return *(undefined1 *)(lVar4 + 0x94);
    }
  }
  plVar3 = (longlong *)ULocalPlayer::GetPrivateStaticClass();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      return 2;
    }
  }
  return *(undefined1 *)(lVar4 + 0x94);
}



// FUNCTION 1427086f0 FUN_1427086f0 body=40 status=ok
// SIG undefined FUN_1427086f0(void)

void FUN_1427086f0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x668))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014270870c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x678))(plVar1);
    return;
  }
  return;
}



// FUNCTION 142708720 FUN_142708720 body=40 status=ok
// SIG undefined FUN_142708720(void)

void FUN_142708720(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x668))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014270873c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x688))(plVar1);
    return;
  }
  return;
}



// FUNCTION 142708750 FUN_142708750 body=89 status=ok
// SIG undefined FUN_142708750(void)

longlong FUN_142708750(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_1429e18b0();
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



// FUNCTION 1427087b0 FUN_1427087b0 body=171 status=ok
// SIG undefined FUN_1427087b0(void)

ulonglong FUN_1427087b0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  float fVar3;
  
  if ((*(byte *)(param_1 + 0x780) & 2) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x78c);
  if (lVar2 != 0) {
    fVar3 = *(float *)(lVar2 + 0x228) + *(float *)(param_1 + 0x7b4);
    *param_2 = CONCAT44(*(float *)(lVar2 + 0x224) + *(float *)(param_1 + 0x7b0),
                        *(float *)(lVar2 + 0x220) + *(float *)(param_1 + 0x7ac));
    *(float *)(param_2 + 1) = fVar3;
    return CONCAT71((uint7)(uint3)((uint)fVar3 >> 8),1);
  }
  *param_2 = *(undefined8 *)(param_1 + 0x7ac);
  uVar1 = *(undefined4 *)(param_1 + 0x7b4);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 142708860 FUN_142708860 body=1117 status=ok
// SIG undefined FUN_142708860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142708860(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined8 *puVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  undefined4 local_5c;
  
  if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
    (**(code **)(*param_1 + 0x7a8))(param_1,&local_d8,&local_c8);
  }
  else {
    iVar5 = (int)param_1 + 0x784;
    lVar2 = FWeakObjectPtr::Get();
    if (lVar2 == 0) {
      local_d8 = *(undefined8 *)((longlong)param_1 + 0x794);
      local_d0 = *(float *)((longlong)param_1 + 0x79c);
      local_c8 = param_1[0xf4];
      local_c0 = *(float *)(param_1 + 0xf5);
    }
    else {
      local_a8 = *(float *)(lVar2 + 0x210);
      fStack_a4 = *(float *)(lVar2 + 0x214);
      fStack_a0 = *(float *)(lVar2 + 0x218);
      fStack_9c = *(float *)(lVar2 + 0x21c);
      auVar1._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != fStack_a4);
      auVar1._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != local_a8);
      auVar1._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fStack_a0);
      auVar1._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != fStack_9c);
      iVar5 = movmskps(iVar5,auVar1);
      if (iVar5 != 0) {
        *(float *)(lVar2 + 0x250) = local_a8;
        *(float *)(lVar2 + 0x254) = fStack_a4;
        *(float *)(lVar2 + 600) = fStack_a0;
        *(float *)(lVar2 + 0x25c) = fStack_9c;
        puVar3 = (undefined8 *)FQuat::Rotator(&local_a8,&local_b8);
        *(undefined8 *)(lVar2 + 0x260) = *puVar3;
        *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar3 + 1);
      }
      local_b8 = *(undefined8 *)(lVar2 + 0x260);
      local_b0 = *(float *)(lVar2 + 0x268);
      local_c0 = local_b0 + *(float *)(param_1 + 0xf5);
      local_c8 = CONCAT44((float)((ulonglong)local_b8 >> 0x20) +
                          *(float *)((longlong)param_1 + 0x7a4),
                          (float)local_b8 + *(float *)(param_1 + 0xf4));
      fVar10 = *(float *)(lVar2 + 0x220);
      fVar12 = *(float *)(lVar2 + 0x224);
      fVar9 = *(float *)(lVar2 + 0x228);
      pfVar4 = (float *)FRotator::RotateVector(&local_c8,&local_b8,(longlong)param_1 + 0x794);
      local_d0 = fVar9 + pfVar4[2];
      local_d8 = CONCAT44(fVar12 + pfVar4[1],fVar10 + *pfVar4);
    }
  }
  local_90 = (float)local_c8 * _DAT_146b08c30 -
             (float)(int)((float)local_c8 * _DAT_146b08c30 * _DAT_146b08c20) * _DAT_146b08c10;
  fVar10 = local_c8._4_4_ * fRam0000000146b08c34 -
           (float)(int)(local_c8._4_4_ * fRam0000000146b08c34 * fRam0000000146b08c24) *
           fRam0000000146b08c14;
  fVar12 = local_c0 * fRam0000000146b08c38 -
           (float)(int)(local_c0 * fRam0000000146b08c38 * fRam0000000146b08c28) *
           fRam0000000146b08c18;
  uVar6 = -(uint)(_DAT_146b08bd0 < (float)((uint)local_90 & _DAT_146b08be0));
  uVar7 = -(uint)(fRam0000000146b08bd4 < (float)((uint)fVar10 & uRam0000000146b08be4));
  uVar8 = -(uint)(fRam0000000146b08bd8 < (float)((uint)fVar12 & uRam0000000146b08be8));
  local_90 = (float)(((uint)((float)((uint)local_90 & _DAT_146b08c00 | _DAT_146b08bf0) - local_90) ^
                     (uint)local_90) & uVar6 ^ (uint)local_90);
  fVar10 = (float)(((uint)((float)((uint)fVar10 & uRam0000000146b08c04 | uRam0000000146b08bf4) -
                          fVar10) ^ (uint)fVar10) & uVar7 ^ (uint)fVar10);
  fVar12 = (float)(((uint)((float)((uint)fVar12 & uRam0000000146b08c08 | uRam0000000146b08bf8) -
                          fVar12) ^ (uint)fVar12) & uVar8 ^ (uint)fVar12);
  fVar9 = local_90 * local_90;
  fVar11 = fVar10 * fVar10;
  fVar13 = fVar12 * fVar12;
  local_90 = (((((fVar9 * -2.3889859e-08 + 2.7525562e-06) * fVar9 + -0.00019840874) * fVar9 +
               0.008333331) * fVar9 + -0.16666667) * fVar9 + 1.0) * local_90;
  fVar10 = (((((fVar11 * -2.3889859e-08 + 2.7525562e-06) * fVar11 + -0.00019840874) * fVar11 +
             0.008333331) * fVar11 + -0.16666667) * fVar11 + 1.0) * fVar10;
  fVar12 = (((((fVar13 * -2.3889859e-08 + 2.7525562e-06) * fVar13 + -0.00019840874) * fVar13 +
             0.008333331) * fVar13 + -0.16666667) * fVar13 + 1.0) * fVar12;
  fVar9 = (((((fVar9 * -2.6051615e-07 + 2.4760495e-05) * fVar9 + -0.0013888378) * fVar9 +
            0.041666638) * fVar9 + -0.5) * fVar9 + 1.0) *
          (float)((_DAT_146b08bc0 ^ _DAT_146b08ba0) & uVar6 ^ _DAT_146b08ba0);
  fVar11 = (((((fVar11 * -2.6051615e-07 + 2.4760495e-05) * fVar11 + -0.0013888378) * fVar11 +
             0.041666638) * fVar11 + -0.5) * fVar11 + 1.0) *
           (float)((uRam0000000146b08bc4 ^ uRam0000000146b08ba4) & uVar7 ^ uRam0000000146b08ba4);
  fVar13 = (((((fVar13 * -2.6051615e-07 + 2.4760495e-05) * fVar13 + -0.0013888378) * fVar13 +
             0.041666638) * fVar13 + -0.5) * fVar13 + 1.0) *
           (float)((uRam0000000146b08bc8 ^ uRam0000000146b08ba8) & uVar8 ^ uRam0000000146b08ba8);
  local_98 = fVar11 * fVar9;
  local_8c = 0;
  local_7c = 0;
  local_6c = 0;
  local_94 = fVar9 * fVar10;
  local_88 = fVar11 * fVar12 * local_90 - fVar13 * fVar10;
  local_70 = fVar13 * fVar9;
  local_84 = fVar10 * fVar12 * local_90 + fVar13 * fVar11;
  local_80 = -(fVar9 * fVar12);
  local_68 = (undefined4)local_d8;
  local_74 = fVar11 * fVar12 - fVar10 * fVar13 * local_90;
  local_60 = local_d0;
  local_78 = -(fVar11 * fVar13 * local_90 + fVar12 * fVar10);
  local_64 = local_d8._4_4_;
  *param_2 = local_d8;
  local_5c = 0x3f800000;
  *(float *)(param_2 + 1) = local_d0;
  puVar3 = (undefined8 *)FMatrix::GetUnitAxis(&local_98,&local_b8,1);
  *param_3 = *puVar3;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar3 + 1);
  puVar3 = (undefined8 *)FMatrix::GetUnitAxis(&local_98,&local_b8,2);
  *param_4 = *puVar3;
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar3 + 1);
  return;
}



// FUNCTION 142708cc0 GetAutoActivateCameraForPlayer body=277 status=ok
// SIG undefined GetAutoActivateCameraForPlayer(void)

longlong APlayerController::GetAutoActivateCameraForPlayer(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *local_28;
  int local_20;
  longlong *local_18;
  int local_10;
  
  iVar1 = FUN_142235230();
  if ((((iVar1 != 3) && (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), lVar3 != 0)) &&
      (FUN_1428cb640(lVar3,&local_28), -1 < local_20)) && (local_20 < (int)local_28[1])) {
    iVar1 = 0;
    UWorld::GetPlayerControllerIterator(lVar3,&local_18);
    while( true ) {
      if (local_10 < 0) {
        return 0;
      }
      if ((int)local_18[1] <= local_10) {
        return 0;
      }
      plVar4 = (longlong *)FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
      if (plVar4 == param_1) break;
      local_10 = local_10 + 1;
      iVar1 = iVar1 + 1;
    }
    if (iVar1 != -1) {
      for (; (-1 < local_20 && (local_20 < (int)local_28[1])); local_20 = local_20 + 1) {
        lVar3 = FWeakObjectPtr::Get(*local_28 + (longlong)local_20 * 8);
        if ((lVar3 != 0) && (iVar2 = FUN_1422f00e0(lVar3), iVar2 == iVar1)) {
          return lVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142708de0 GetBackgroundColor body=48 status=ok
// SIG undefined GetBackgroundColor(void)

undefined8 FPreviewScene::GetBackgroundColor(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res10;
  undefined2 local_res11;
  undefined1 local_res13;
  
  local_res11 = 0x3737;
  local_res10 = 0x37;
  local_res13 = 0xff;
  FLinearColor::FLinearColor(param_2,&local_res10);
  return param_2;
}



// FUNCTION 142708e10 FUN_142708e10 body=25 status=ok
// SIG undefined FUN_142708e10(void)

longlong FUN_142708e10(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  
  if ((param_3 == '\0') || (lVar1 = *(longlong *)(param_1 + 0x478), lVar1 == 0)) {
    lVar1 = param_1 + 0x3b0;
  }
  return lVar1;
}



// FUNCTION 142708e30 FUN_142708e30 body=1795 status=ok
// SIG undefined FUN_142708e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142708e30(float *param_1,float *param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5,longlong param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
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
  undefined4 uVar19;
  float *pfVar20;
  float *pfVar21;
  undefined8 *puVar22;
  undefined4 *puVar23;
  longlong lVar24;
  longlong lVar25;
  undefined8 *puVar26;
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
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auStack_358 [32];
  float *local_338;
  float *local_330;
  undefined4 *local_328;
  longlong local_320;
  undefined1 local_318;
  float local_314;
  float local_310;
  float local_30c;
  undefined8 local_308;
  undefined4 local_300;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float *local_2b8;
  float *local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  undefined1 local_298 [32];
  float local_278;
  float fStack_274;
  float fStack_270;
  undefined4 uStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  undefined4 uStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  undefined4 uStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  undefined4 uStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  undefined4 uStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  undefined4 uStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  undefined4 uStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
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
  undefined4 local_1a8 [4];
  undefined4 local_198;
  undefined8 uStack_194;
  undefined8 uStack_18c;
  undefined4 uStack_184;
  longlong lStack_180;
  longlong local_178;
  ulonglong uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  local_198 = 0xbf800000;
  uStack_194._0_4_ = 0xbf800000;
  uStack_194._4_4_ = 0x3f800000;
  uStack_18c._0_4_ = 0xbf800000;
  local_178 = 0x3f8000003f800000;
  uStack_170 = 0x3f800000bf800000;
  local_f8 = 0x3f8000003f800000;
  uStack_f0 = 0x3f800000;
  local_150 = 0;
  local_144 = 0;
  uStack_18c._4_4_ = 0x3f800000;
  uStack_184 = 0x3f800000;
  lStack_180 = 0x3f8000003f800000;
  local_138 = 0;
  local_108 = 0;
  uStack_100 = 0x3f80000000000000;
  local_158 = 0;
  local_14c = 0x42b40000;
  local_140 = 0xc2b40000;
  local_134 = 0;
  local_128 = 0;
  local_12c = 0x42b40000;
  local_2a8 = param_6;
  local_120 = 0xc2b40000;
  local_30c = 0.0;
  local_11c = 0x43340000;
  local_114 = 0;
  local_338 = (float *)((ulonglong)local_338 & 0xffffffffffffff00);
  local_318 = param_4;
  local_2b8 = param_2;
  local_2b0 = param_1;
  local_2a0 = param_3;
  FUN_1424290d0(local_298,*(undefined4 *)(param_6 + 0xe0),1);
  local_278 = 0.0;
  fStack_274 = 0.0;
  fStack_270 = 0.0;
  uStack_26c = 0;
  local_248 = 0.0;
  fStack_244 = 0.0;
  fStack_240 = 0.0;
  uStack_23c = 0;
  local_258 = 0.0;
  fStack_254 = 0.0;
  fStack_250 = 0.0;
  uStack_24c = 0;
  local_268 = 1.0;
  fStack_264 = 1.0;
  fStack_260 = 1.0;
  uStack_25c = 0x3f800000;
  local_208 = 0.0;
  fStack_204 = 0.0;
  fStack_200 = 0.0;
  uStack_1fc = 0;
  local_1f8 = 1.0;
  fStack_1f4 = 1.0;
  fStack_1f0 = 1.0;
  uStack_1ec = 0x3f800000;
  puVar26 = &local_158;
  lVar24 = 6;
  local_218 = 0.0;
  fStack_214 = 0.0;
  fStack_210 = 0.0;
  uStack_20c = 0;
  local_228 = 0.0;
  fStack_224 = 0.0;
  fStack_220 = 0.0;
  uStack_21c = 0;
  local_238 = 0.0;
  fStack_234 = 0.0;
  fStack_230 = 0.0;
  uStack_22c = 0;
  fStack_2bc = 1.0;
  do {
    fVar18 = fStack_1f0;
    fVar17 = fStack_1f4;
    fVar16 = local_1f8;
    fVar15 = fStack_200;
    fVar14 = fStack_204;
    fVar13 = local_208;
    pfVar20 = (float *)FRotationMatrix::FRotationMatrix(&local_1e8,puVar26);
    puVar23 = local_1a8;
    lVar25 = 4;
    puVar22 = &local_108;
    pfVar21 = (float *)((longlong)&uStack_194 + 4);
    fVar1 = *pfVar20;
    fVar2 = pfVar20[1];
    fVar3 = pfVar20[2];
    fVar4 = pfVar20[4];
    fVar5 = pfVar20[5];
    fVar6 = pfVar20[6];
    fVar7 = pfVar20[8];
    fVar8 = pfVar20[9];
    fVar9 = pfVar20[10];
    fVar10 = pfVar20[0xc];
    fVar11 = pfVar20[0xd];
    fVar12 = pfVar20[0xe];
    fVar27 = fVar4 * local_278;
    fVar32 = fVar5 * fStack_274;
    fVar37 = fVar6 * fStack_270;
    fVar28 = fVar4 * local_268;
    fVar33 = fVar5 * fStack_264;
    fVar38 = fVar6 * fStack_260;
    fVar42 = fVar7 * local_258;
    fVar44 = fVar8 * fStack_254;
    fVar46 = fVar9 * fStack_250;
    fVar29 = fVar10 * local_248;
    fVar34 = fVar11 * fStack_244;
    fVar39 = fVar12 * fStack_240;
    fVar30 = fVar4 * local_238;
    fVar35 = fVar5 * fStack_234;
    fVar40 = fVar6 * fStack_230;
    fVar43 = fVar7 * local_228;
    fVar45 = fVar8 * fStack_224;
    fVar47 = fVar9 * fStack_220;
    fVar31 = fVar10 * local_218;
    fVar36 = fVar11 * fStack_214;
    fVar41 = fVar12 * fStack_210;
    do {
      local_330 = &local_2f8;
      fStack_2c4 = pfVar21[-1];
      local_328 = &DAT_1464aa730;
      local_338 = &local_2ec;
      local_2c8 = pfVar21[-2];
      fStack_2c0 = *pfVar21;
      local_308 = 0;
      local_300 = 0;
      local_314 = fStack_2bc * fVar10 + fStack_2c0 * fVar7 + fStack_2c4 * fVar4 + local_2c8 * fVar1;
      local_310 = fStack_2bc * fVar11 + fStack_2c0 * fVar8 + fStack_2c4 * fVar5 + local_2c8 * fVar2;
      local_30c = fStack_2bc * fVar12 + fStack_2c0 * fVar9 + fStack_2c4 * fVar6 + local_2c8 * fVar3;
      local_2f8 = fVar1 * 0.0 + fVar27 + fVar7 * fVar16 + fVar10 * fVar13;
      local_2f4 = fVar2 * 0.0 + fVar32 + fVar8 * fVar17 + fVar11 * fVar14;
      local_2f0 = fVar3 * 0.0 + fVar37 + fVar9 * fVar18 + fVar12 * fVar15;
      local_2ec = fVar1 * 0.0 + fVar28 + fVar42 + fVar29;
      local_2e8 = fVar2 * 0.0 + fVar33 + fVar44 + fVar34;
      local_2e4 = fVar3 * 0.0 + fVar38 + fVar46 + fVar39;
      local_2e0 = fVar1 * 1.0 + fVar30 + fVar43 + fVar31;
      local_2dc = fVar2 * 1.0 + fVar35 + fVar45 + fVar36;
      local_2d8 = fVar3 * 1.0 + fVar40 + fVar47 + fVar41;
      uVar19 = FUN_14242c0d0(local_298,&local_314,puVar22,&local_2e0);
      *puVar23 = uVar19;
      puVar22 = puVar22 + 1;
      puVar23 = puVar23 + 1;
      pfVar21 = pfVar21 + 3;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    FUN_14242bf10(local_298,local_1a8[0],local_1a8[1],local_1a8[2]);
    FUN_14242bf10(local_298,local_1a8[0],local_1a8[2],local_1a8[3]);
    puVar26 = (undefined8 *)((longlong)puVar26 + 0xc);
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  fVar4 = local_2b0[4];
  fVar5 = local_2b0[5];
  fVar6 = local_2b0[6];
  fVar7 = local_2b0[7];
  fVar8 = *local_2b0;
  fVar9 = local_2b0[1];
  fVar10 = local_2b0[2];
  fVar11 = local_2b0[3];
  fVar12 = local_2b0[8];
  fVar13 = local_2b0[9];
  fVar14 = local_2b0[10];
  fVar15 = local_2b0[0xb];
  fVar16 = local_2b0[0xc];
  fVar17 = local_2b0[0xd];
  fVar18 = local_2b0[0xe];
  fVar27 = local_2b0[0xf];
  fVar1 = *local_2b8;
  fVar2 = local_2b8[1];
  fVar3 = local_2b8[2];
  uStack_170 = uStack_170 & 0xffffffff;
  local_1e8 = fVar1 * fVar8 + fVar4 * 0.0 + fVar12 * 0.0 + fVar16 * 0.0;
  fStack_1e4 = fVar1 * fVar9 + fVar5 * 0.0 + fVar13 * 0.0 + fVar17 * 0.0;
  fStack_1e0 = fVar1 * fVar10 + fVar6 * 0.0 + fVar14 * 0.0 + fVar18 * 0.0;
  fStack_1dc = fVar1 * fVar11 + fVar7 * 0.0 + fVar15 * 0.0 + fVar27 * 0.0;
  local_1d8 = fVar8 * 0.0 + fVar2 * fVar4 + fVar12 * 0.0 + fVar16 * 0.0;
  fStack_1d4 = fVar9 * 0.0 + fVar2 * fVar5 + fVar13 * 0.0 + fVar17 * 0.0;
  fStack_1d0 = fVar10 * 0.0 + fVar2 * fVar6 + fVar14 * 0.0 + fVar18 * 0.0;
  fStack_1cc = fVar11 * 0.0 + fVar2 * fVar7 + fVar15 * 0.0 + fVar27 * 0.0;
  local_1c8 = fVar8 * 0.0 + fVar4 * 0.0 + fVar3 * fVar12 + fVar16 * 0.0;
  fStack_1c4 = fVar9 * 0.0 + fVar5 * 0.0 + fVar3 * fVar13 + fVar17 * 0.0;
  fStack_1c0 = fVar10 * 0.0 + fVar6 * 0.0 + fVar3 * fVar14 + fVar18 * 0.0;
  fStack_1bc = fVar11 * 0.0 + fVar7 * 0.0 + fVar3 * fVar15 + fVar27 * 0.0;
  local_320 = local_2a8;
  local_328 = (undefined4 *)CONCAT44(local_328._4_4_,param_5);
  local_330 = (float *)((ulonglong)local_330 & 0xffffffffffffff00);
  local_338 = (float *)((ulonglong)local_338 & 0xffffffffffffff00);
  local_1b8 = fVar8 * 0.0 + fVar4 * 0.0 + fVar12 * 0.0 + fVar16 * 1.0;
  fStack_1b4 = fVar9 * 0.0 + fVar5 * 0.0 + fVar13 * 0.0 + fVar17 * 1.0;
  fStack_1b0 = fVar10 * 0.0 + fVar6 * 0.0 + fVar14 * 0.0 + fVar18 * 1.0;
  fStack_1ac = fVar11 * 0.0 + fVar7 * 0.0 + fVar15 * 0.0 + fVar27 * 1.0;
  lStack_180 = lVar25;
  local_178 = lVar25;
  uStack_18c = lVar25;
  uStack_194 = lVar25;
  FDynamicMeshBuilder::GetMesh(local_298,&local_1e8,local_2a0,local_318);
  FDynamicMeshBuilder::~FDynamicMeshBuilder(local_298);
  return;
}



// FUNCTION 142709540 GetCapsuleMesh body=766 status=ok
// SIG undefined GetCapsuleMesh(void)

void GetCapsuleMesh(float *param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                   undefined8 param_5,float param_6,float param_7,undefined4 param_8,
                   undefined8 param_9,undefined1 param_10,undefined1 param_11,undefined4 param_12,
                   undefined8 param_13)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 in_stack_fffffffffffffe88;
  undefined4 uVar6;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [160];
  
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  param_7 = param_7 - param_6;
  local_f4 = fVar2 * param_6 + param_1[1];
  if (param_7 <= 1.0) {
    param_7 = 1.0;
  }
  local_f0 = fVar3 * param_6 + param_1[2];
  param_7 = param_7 + param_7;
  local_118 = param_6;
  local_f8 = fVar1 * param_6 + *param_1;
  local_114 = param_6;
  local_110 = param_6;
  local_104 = fVar2 * param_7 + local_f4;
  local_108 = fVar1 * param_7 + local_f8;
  local_100 = fVar3 * param_7 + local_f0;
  fVar5 = SQRT((local_104 - local_f4) * (local_104 - local_f4) +
               (local_108 - local_f8) * (local_108 - local_f8) +
               (local_100 - local_f0) * (local_100 - local_f0)) * 0.5;
  local_128 = fVar1 * fVar5 + local_f8;
  local_124 = fVar2 * fVar5 + local_f4;
  local_120 = fVar3 * fVar5 + local_f0;
  uVar4 = FRotationMatrix::MakeFromXY(local_d8);
  uVar4 = FMatrix::Rotator(uVar4,local_e8);
  FUN_14270bf60(&local_108,uVar4,&local_118,param_8,CONCAT44(uVar6,param_8),0,0x3fc90fdb,param_9,
                param_10,param_11,param_12,param_13,0,0);
  FUN_142709b80(&DAT_1464aa7d0,&local_128,param_2,param_3,param_4,param_6,fVar5,param_8,param_9,
                param_10,param_12,param_13);
  uVar6 = (undefined4)((ulonglong)param_4 >> 0x20);
  local_128 = param_6;
  local_124 = param_6;
  local_120 = param_6;
  uVar4 = FRotationMatrix::MakeFromXY(local_d8,param_2,param_3);
  uVar4 = FMatrix::Rotator(uVar4,local_e8);
  FUN_14270bf60(&local_f8,uVar4,&local_128,param_8,CONCAT44(uVar6,param_8),0x3fc90fdb,0x40490fdb,
                param_9,param_10,param_11,param_12,param_13,0,0);
  return;
}



// FUNCTION 142709840 GetCenterOfMass body=135 status=ok
// SIG undefined GetCenterOfMass(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
UPrimitiveComponent::GetCenterOfMass(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  lVar3 = (**(code **)(*param_1 + 0x6d0))(param_1,param_3,1);
  if (lVar3 == 0) {
    *param_2 = _DAT_1468b5d90;
    *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  }
  else {
    lVar3 = FUN_142697310(lVar3,local_48);
    uVar1 = *(undefined4 *)(lVar3 + 0x14);
    uVar2 = *(undefined4 *)(lVar3 + 0x18);
    *(undefined4 *)param_2 = *(undefined4 *)(lVar3 + 0x10);
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
  }
  return param_2;
}



// FUNCTION 1427098d0 FUN_1427098d0 body=98 status=ok
// SIG undefined FUN_1427098d0(void)

undefined8
FUN_1427098d0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_3 = uVar2;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 1);
  lVar1 = (**(code **)(*param_1 + 0x6d0))(uVar2,param_4,0);
  if (lVar1 != 0) {
    uVar2 = FUN_1426966d0(lVar1,param_2,param_3,0);
    return uVar2;
  }
  return 0xbf800000;
}



// FUNCTION 142709960 AddOnActorSpawnedHandler body=30 status=ok
// SIG undefined AddOnActorSpawnedHandler(void)

undefined8 UWorld::AddOnActorSpawnedHandler(longlong param_1,undefined8 param_2)

{
  FUN_142696390(param_1 + 0x3b0);
  return param_2;
}



// FUNCTION 1427099a0 GetComponentTransformFromBodyInstance body=32 status=ok
// SIG undefined GetComponentTransformFromBodyInstance(void)

undefined8
UPrimitiveComponent::GetComponentTransformFromBodyInstance
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142699110(param_3,param_2,1,0);
  return param_2;
}



// FUNCTION 1427099c0 FUN_1427099c0 body=130 status=ok
// SIG undefined FUN_1427099c0(void)

undefined8 FUN_1427099c0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x400))(param_1,0);
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
    if (lVar2 != 0) {
      FUN_142699400(lVar2,param_2);
      return param_2;
    }
  }
  FUN_14238b700(param_1,param_2);
  return param_2;
}



// FUNCTION 142709a50 FUN_142709a50 body=279 status=ok
// SIG undefined FUN_142709a50(void)

void FUN_142709a50(undefined8 param_1,float param_2,float param_3,uint param_4,undefined8 param_5,
                  undefined1 param_6,undefined4 param_7,longlong param_8)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong local_48 [4];
  undefined1 local_28 [32];
  
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  plVar2 = local_48;
  plVar1 = local_48 + 2;
  FUN_1426fb840(param_2 * 0.017453292,param_3 * 0.017453292,0x3f800000,0,param_4,plVar1,plVar2);
  uVar3 = (undefined4)((ulonglong)plVar2 >> 0x20);
  param_4 = param_4 & 0xffffff00;
  FUN_1424290d0(local_28,*(undefined4 *)(param_8 + 0xe0),1,0,param_4);
  FUN_14242c440(local_28,local_48 + 2);
  FUN_14242bfc0(local_28,local_48);
  FDynamicMeshBuilder::GetMesh
            (local_28,param_1,param_5,param_6,param_4 & 0xffffff00,
             (ulonglong)plVar1 & 0xffffffffffffff00,CONCAT44(uVar3,param_7),param_8);
  FDynamicMeshBuilder::~FDynamicMeshBuilder(local_28);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142709b70 GetLODParentPrimitive body=8 status=ok
// SIG undefined GetLODParentPrimitive(void)

undefined8 UPrimitiveComponent::GetLODParentPrimitive(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x518);
}



// FUNCTION 142709b80 FUN_142709b80 body=309 status=ok
// SIG undefined FUN_142709b80(void)

void FUN_142709b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,uint param_7,undefined4 param_8,undefined8 param_9
                  ,undefined1 param_10,undefined4 param_11,longlong param_12)

{
  longlong local_48 [4];
  undefined1 local_28 [32];
  
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_1426fc580(param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_48 + 2,local_48);
  param_6 = param_6 & 0xffffff00;
  FUN_1424290d0(local_28,*(undefined4 *)(param_12 + 0xe0),1,0,param_6);
  FUN_14242c440(local_28,local_48 + 2);
  FUN_14242bfc0(local_28,local_48);
  FDynamicMeshBuilder::GetMesh
            (local_28,param_1,param_9,param_10,param_6 & 0xffffff00,param_7 & 0xffffff00,param_11,
             param_12);
  FDynamicMeshBuilder::~FDynamicMeshBuilder(local_28);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142709cc0 GetCylinderMesh body=125 status=ok
// SIG undefined GetCylinderMesh(void)

void GetCylinderMesh(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                    undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  FUN_142709b80(&DAT_1464aa7d0,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                param_9,param_10,param_11);
  return;
}



// FUNCTION 142709d40 FUN_142709d40 body=198 status=ok
// SIG undefined FUN_142709d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142709d40(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = DAT_1468b5d98;
  lVar2 = *(longlong *)(param_1 + 0x488);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x7b8);
  }
  if (lVar3 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 2000);
    *param_2 = *(undefined8 *)(param_1 + 0x7c8);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  }
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x7b8);
  }
  lVar2 = *(longlong *)(lVar2 + 0x168);
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 0x228);
    *param_2 = *(undefined8 *)(lVar2 + 0x220);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 142709e10 GetFriendlyName body=62 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 * FPositionVertexBuffer::GetFriendlyName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x22;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"PositionOnly Static-mesh vertices",0x44);
  return param_2;
}



// FUNCTION 142709e50 GetRenderTarget body=8 status=ok
// SIG undefined GetRenderTarget(void)

undefined8 UWidgetComponent::GetRenderTarget(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x520);
}



// FUNCTION 142709e60 FUN_142709e60 body=41 status=ok
// SIG undefined FUN_142709e60(void)

undefined8 * FUN_142709e60(longlong param_1,undefined8 *param_2)

{
  if (*(byte *)(param_1 + 0x520) < 0xc) {
    *param_2 = (&DAT_146b08c40)[*(byte *)(param_1 + 0x520)];
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142709e90 FUN_142709e90 body=527 status=ok
// SIG undefined FUN_142709e90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142709e90(longlong *param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
                       undefined8 param_5)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_138 [32];
  uint *local_118;
  undefined8 local_110;
  undefined1 local_108 [8];
  uint local_100;
  undefined1 local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined8 local_c8 [2];
  undefined1 local_b8 [72];
  longlong local_70;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_c8[0] = param_2;
  if ((param_1[0xa4] == 0) || (uVar4 = FUN_1424f4a60(param_1[0xa4],param_2,1), uVar4 == 0)) {
    local_110 = CONCAT71(local_110._1_7_,1);
    local_118 = (uint *)((ulonglong)local_118 & 0xffffffffffffff00);
    uVar4 = FUN_14244a240(param_1,local_c8,&local_f8,&local_e8);
    if ((char)uVar4 == '\x01') {
      local_100 = 0;
      for (iVar7 = 0; (-1 < iVar7 && (iVar7 < (int)param_3[1])); iVar7 = iVar7 + 1) {
        uVar3 = UEngineTypes::ConvertToCollisionChannel(*(undefined1 *)((longlong)iVar7 + *param_3))
        ;
        local_100 = local_100 | 1 << (uVar3 & 0x1f);
      }
      local_fc = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b08da0) &&
         (_Init_thread_header(&DAT_146b08da0), DAT_146b08da0 == -1)) {
        FName::FName(&DAT_146b08d98,"ClickableTrace",1);
        _Init_thread_footer(&DAT_146b08da0);
      }
      fVar1 = *(float *)((longlong)param_1 + 0x6c4);
      local_118 = (uint *)0x0;
      local_d8 = local_e8 * fVar1 + local_f8;
      local_d4 = local_e4 * fVar1 + local_f4;
      local_d0 = local_e0 * fVar1 + local_f0;
      uVar5 = FUN_1422ffb20(local_b8,DAT_146b08d98,local_108,param_4);
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      local_118 = &local_100;
      local_110 = uVar5;
      bVar2 = UWorld::LineTraceSingleByObjectType(uVar6,param_5,&local_f8,&local_d8);
      if (local_50 != 0) {
        FMemory::Free();
      }
      if (local_70 != 0) {
        FMemory::Free();
      }
      return (ulonglong)bVar2;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14270a0a0 FUN_14270a0a0 body=514 status=ok
// SIG undefined FUN_14270a0a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14270a0a0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
             undefined8 param_5)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  undefined1 *local_110;
  undefined *local_108;
  undefined1 local_f8 [8];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [72];
  longlong local_70;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b08d90) {
    _Init_thread_header(&DAT_146b08d90);
    if (DAT_146b08d90 == -1) {
      FName::FName(&DAT_146b08d88,"ClickableTrace",1);
      _Init_thread_footer(&DAT_146b08d90);
    }
  }
  local_118 = 0;
  FUN_1422ffb20(local_b8,DAT_146b08d88,local_f8,param_4);
  local_c0 = param_2;
  if (param_1[0xa4] == 0) {
LAB_14270a155:
    local_110 = (undefined1 *)CONCAT71(local_110._1_7_,1);
    local_118 = local_118 & 0xffffffffffffff00;
    cVar2 = FUN_14244a240(param_1,&local_c0,&local_f0,&local_e0);
    if (cVar2 == '\x01') {
      fVar1 = *(float *)((longlong)param_1 + 0x6c4);
      local_d0 = local_e0 * fVar1 + local_f0;
      local_cc = local_dc * fVar1 + local_ec;
      local_c8 = local_d8 * fVar1 + local_e8;
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      local_108 = &DAT_146aefe68;
      local_110 = local_b8;
      local_118 = CONCAT44(local_118._4_4_,param_3);
      uVar3 = UWorld::LineTraceSingleByChannel(uVar5,param_5,&local_f0,&local_d0);
      goto LAB_14270a20d;
    }
  }
  else {
    lVar4 = FUN_1424f4a60(param_1[0xa4],param_2,1);
    if (lVar4 == 0) goto LAB_14270a155;
  }
  uVar3 = 0;
LAB_14270a20d:
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 14270a2b0 FUN_14270a2b0 body=256 status=ok
// SIG undefined FUN_14270a2b0(void)

char FUN_14270a2b0(longlong param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined1 local_a8 [12];
  undefined4 local_9c;
  
  lVar4 = *(longlong *)(param_1 + 0x508);
  if (lVar4 != 0) {
    lVar3 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14270a31d;
  }
  lVar4 = 0;
LAB_14270a31d:
  if ((((lVar4 != 0) && (*(longlong *)(lVar4 + 0x70) != 0)) &&
      (cVar2 = FUN_142480f40(), cVar2 != '\0')) &&
     (cVar2 = FUN_14270a0a0(param_1,local_res8,param_2,param_3,param_4), cVar2 != '\0')) {
    return cVar2;
  }
  _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
  local_9c = 0x3f800000;
  FUN_140729f20(param_4,local_a8);
  return '\0';
}



// FUNCTION 14270a3b0 FUN_14270a3b0 body=286 status=ok
// SIG undefined FUN_14270a3b0(void)

char FUN_14270a3b0(longlong param_1,undefined4 param_2,undefined1 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res8;
  undefined1 local_b8 [12];
  undefined4 local_ac;
  
  lVar5 = *(longlong *)(param_1 + 0x508);
  if (lVar5 != 0) {
    lVar4 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14270a41d;
  }
  lVar5 = 0;
LAB_14270a41d:
  if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x70) != 0)) &&
     (cVar2 = FUN_142480f40(), cVar2 != '\0')) {
    uVar3 = UEngineTypes::ConvertToCollisionChannel(param_2);
    cVar2 = FUN_14270a0a0(param_1,local_res8,uVar3,param_3,param_4);
    if (cVar2 != '\0') {
      return cVar2;
    }
  }
  _guard_xfg_dispatch_icall_nop(local_b8,0,0x90);
  local_ac = 0x3f800000;
  FUN_140729f20(param_4,local_b8);
  return '\0';
}



// FUNCTION 14270a4d0 FUN_14270a4d0 body=256 status=ok
// SIG undefined FUN_14270a4d0(void)

char FUN_14270a4d0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined1 local_a8 [12];
  undefined4 local_9c;
  
  lVar4 = *(longlong *)(param_1 + 0x508);
  if (lVar4 != 0) {
    lVar3 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14270a53d;
  }
  lVar4 = 0;
LAB_14270a53d:
  if ((((lVar4 != 0) && (*(longlong *)(lVar4 + 0x70) != 0)) &&
      (cVar2 = FUN_142480f40(), cVar2 != '\0')) &&
     (cVar2 = FUN_142709e90(param_1,local_res8,param_2,param_3,param_4), cVar2 != '\0')) {
    return cVar2;
  }
  _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
  local_9c = 0x3f800000;
  FUN_140729f20(param_4,local_a8);
  return '\0';
}



// FUNCTION 14270a5d0 FUN_14270a5d0 body=179 status=ok
// SIG undefined FUN_14270a5d0(void)

char FUN_14270a5d0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  if ((((*(longlong *)(param_1 + 0x5b8) != 0) && (param_2 < 0xb)) &&
      (*(float *)(*(longlong *)(param_1 + 0x5b8) + ((longlong)param_2 + 4) * 0xc) != 0.0)) &&
     (cVar1 = FUN_14270a0a0(), cVar1 != '\0')) {
    return cVar1;
  }
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_8c = 0x3f800000;
  FUN_140729f20(param_5,local_98);
  return '\0';
}



// FUNCTION 14270a690 FUN_14270a690 body=233 status=ok
// SIG undefined FUN_14270a690(void)

char FUN_14270a690(longlong param_1,int param_2,undefined4 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 local_b8 [12];
  undefined4 local_ac;
  
  lVar3 = *(longlong *)(param_1 + 0x5b8);
  if ((lVar3 != 0) && (param_2 < 0xb)) {
    lVar6 = (longlong)param_2;
    uVar1 = *(undefined4 *)(lVar3 + 0x28 + lVar6 * 0xc);
    uVar2 = *(undefined4 *)(lVar3 + 0x2c + lVar6 * 0xc);
    if (*(float *)(lVar3 + (lVar6 + 4) * 0xc) != 0.0) {
      uVar5 = UEngineTypes::ConvertToCollisionChannel(param_3);
      cVar4 = FUN_14270a0a0(param_1,CONCAT44(uVar2,uVar1),uVar5,param_4,param_5);
      if (cVar4 != '\0') {
        return cVar4;
      }
    }
  }
  _guard_xfg_dispatch_icall_nop(local_b8,0,0x90);
  local_ac = 0x3f800000;
  FUN_140729f20(param_5,local_b8);
  return '\0';
}



// FUNCTION 14270a780 FUN_14270a780 body=179 status=ok
// SIG undefined FUN_14270a780(void)

char FUN_14270a780(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined1 local_98 [12];
  undefined4 local_8c;
  
  if ((((*(longlong *)(param_1 + 0x5b8) != 0) && (param_2 < 0xb)) &&
      (*(float *)(*(longlong *)(param_1 + 0x5b8) + ((longlong)param_2 + 4) * 0xc) != 0.0)) &&
     (cVar1 = FUN_142709e90(), cVar1 != '\0')) {
    return cVar1;
  }
  _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
  local_8c = 0x3f800000;
  FUN_140729f20(param_5,local_98);
  return '\0';
}



// FUNCTION 14270a840 FUN_14270a840 body=23 status=ok
// SIG undefined FUN_14270a840(void)

undefined8 FUN_14270a840(undefined8 param_1,undefined8 param_2)

{
  FUN_14270d290();
  return param_2;
}



// FUNCTION 14270a860 GetInertiaTensor body=83 status=ok
// SIG undefined GetInertiaTensor(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
UPrimitiveComponent::GetInertiaTensor(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_3,1);
  if (lVar1 != 0) {
    FUN_142696110(lVar1,param_2);
    return param_2;
  }
  *param_2 = _DAT_1468b5d90;
  *(undefined4 *)(param_2 + 1) = DAT_1468b5d98;
  return param_2;
}



// FUNCTION 14270a8c0 FUN_14270a8c0 body=182 status=ok
// SIG undefined FUN_14270a8c0(void)

undefined8 FUN_14270a8c0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  lVar5 = *(longlong *)(param_1 + 0x5b8);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    local_38 = *param_2;
    local_30 = param_2[1];
    local_28 = param_2[2];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      lVar5 = *(longlong *)(param_1 + 0x5b8);
    }
    uVar6 = FUN_1428ad940(lVar5,&local_38);
  }
  plVar4 = (longlong *)param_2[2];
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 14270a980 FUN_14270a980 body=355 status=ok
// SIG undefined FUN_14270a980(void)

void FUN_14270a980(longlong param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x5b8);
  if (lVar1 == 0) {
    *param_4 = 0;
    *param_3 = 0;
  }
  else {
    if (param_2 == 0) {
      local_38 = DAT_1469ea3d8;
      local_30 = DAT_1469ea3e0;
      local_28 = DAT_1469ea3e8;
      if (DAT_1469ea3e8 != 0) {
        LOCK();
        *(int *)(DAT_1469ea3e8 + 8) = *(int *)(DAT_1469ea3e8 + 8) + 1;
        UNLOCK();
        lVar1 = *(longlong *)(param_1 + 0x5b8);
      }
      uVar3 = FUN_1428ad940(lVar1,&local_38);
      *param_3 = uVar3;
      local_20 = DAT_1469ea3f0;
      local_18 = DAT_1469ea3f8;
      local_10 = DAT_1469ea400;
      if (DAT_1469ea400 != 0) {
        LOCK();
        *(int *)(DAT_1469ea400 + 8) = *(int *)(DAT_1469ea400 + 8) + 1;
        UNLOCK();
      }
      puVar2 = &local_20;
    }
    else {
      if (param_2 != 1) {
        *param_3 = 0;
        *param_4 = 0;
        return;
      }
      local_68 = DAT_1469ea408;
      local_60 = DAT_1469ea410;
      local_58 = DAT_1469ea418;
      if (DAT_1469ea418 != 0) {
        LOCK();
        *(int *)(DAT_1469ea418 + 8) = *(int *)(DAT_1469ea418 + 8) + 1;
        UNLOCK();
        lVar1 = *(longlong *)(param_1 + 0x5b8);
      }
      uVar3 = FUN_1428ad940(lVar1,&local_68);
      *param_3 = uVar3;
      local_50 = DAT_1469ea420;
      local_48 = DAT_1469ea428;
      local_40 = DAT_1469ea430;
      if (DAT_1469ea430 != 0) {
        LOCK();
        *(int *)(DAT_1469ea430 + 8) = *(int *)(DAT_1469ea430 + 8) + 1;
        UNLOCK();
      }
      puVar2 = &local_50;
    }
    uVar3 = FUN_1428ad940(*(undefined8 *)(param_1 + 0x5b8),puVar2);
    *param_4 = uVar3;
  }
  return;
}



// FUNCTION 14270aaf0 FUN_14270aaf0 body=95 status=ok
// SIG undefined FUN_14270aaf0(void)

undefined4 FUN_14270aaf0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x508);
  if (lVar1 != 0) {
    lVar3 = ULocalPlayer::GetPrivateStaticClass();
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
      return *(undefined4 *)(lVar1 + 0x108);
    }
  }
  return 0xff;
}



// FUNCTION 14270ab50 FUN_14270ab50 body=182 status=ok
// SIG undefined FUN_14270ab50(void)

undefined8 FUN_14270ab50(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  lVar5 = *(longlong *)(param_1 + 0x5b8);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    local_38 = *param_2;
    local_30 = param_2[1];
    local_28 = param_2[2];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      lVar5 = *(longlong *)(param_1 + 0x5b8);
    }
    uVar6 = FUN_1428aeb30(lVar5,&local_38);
  }
  plVar4 = (longlong *)param_2[2];
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 14270ac10 GetInputMotionState body=386 status=ok
// SIG undefined GetInputMotionState(void)

void APlayerController::GetInputMotionState
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  
  local_98 = DAT_1469ea6d8;
  local_90 = DAT_1469ea6e0;
  local_88 = DAT_1469ea6e8;
  if (DAT_1469ea6e8 != 0) {
    LOCK();
    *(int *)(DAT_1469ea6e8 + 8) = *(int *)(DAT_1469ea6e8 + 8) + 1;
    UNLOCK();
  }
  puVar1 = (undefined8 *)FUN_14270af00(param_1,local_38,&local_98);
  *param_2 = *puVar1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  local_80 = DAT_1469ea6f0;
  local_78 = DAT_1469ea6f8;
  local_70 = DAT_1469ea700;
  if (DAT_1469ea700 != 0) {
    LOCK();
    *(int *)(DAT_1469ea700 + 8) = *(int *)(DAT_1469ea700 + 8) + 1;
    UNLOCK();
  }
  puVar1 = (undefined8 *)FUN_14270af00(param_1,local_2c,&local_80);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  local_68 = DAT_1469ea708;
  local_60 = DAT_1469ea710;
  local_58 = DAT_1469ea718;
  if (DAT_1469ea718 != 0) {
    LOCK();
    *(int *)(DAT_1469ea718 + 8) = *(int *)(DAT_1469ea718 + 8) + 1;
    UNLOCK();
  }
  puVar1 = (undefined8 *)FUN_14270af00(param_1,local_20,&local_68);
  *param_4 = *puVar1;
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar1 + 1);
  local_50 = DAT_1469ea720;
  local_48 = DAT_1469ea728;
  local_40 = DAT_1469ea730;
  if (DAT_1469ea730 != 0) {
    LOCK();
    *(int *)(DAT_1469ea730 + 8) = *(int *)(DAT_1469ea730 + 8) + 1;
    UNLOCK();
  }
  puVar1 = (undefined8 *)FUN_14270af00(param_1,local_14,&local_50);
  *param_5 = *puVar1;
  *(undefined4 *)(param_5 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 14270ada0 FUN_14270ada0 body=211 status=ok
// SIG undefined FUN_14270ada0(void)

void FUN_14270ada0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x5b8);
  if (lVar1 != 0) {
    local_38 = DAT_1469e97f0;
    local_30 = DAT_1469e97f8;
    local_28 = DAT_1469e9800;
    if (DAT_1469e9800 != 0) {
      LOCK();
      *(int *)(DAT_1469e9800 + 8) = *(int *)(DAT_1469e9800 + 8) + 1;
      UNLOCK();
      lVar1 = *(longlong *)(param_1 + 0x5b8);
    }
    uVar2 = FUN_1428ad940(lVar1,&local_38);
    *param_2 = uVar2;
    local_20 = DAT_1469e9808;
    local_18 = DAT_1469e9810;
    local_10 = DAT_1469e9818;
    if (DAT_1469e9818 != 0) {
      LOCK();
      *(int *)(DAT_1469e9818 + 8) = *(int *)(DAT_1469e9818 + 8) + 1;
      UNLOCK();
    }
    uVar2 = FUN_1428ad940(*(undefined8 *)(param_1 + 0x5b8),&local_20);
    *param_3 = uVar2;
    return;
  }
  *param_3 = 0;
  *param_2 = 0;
  return;
}



// FUNCTION 14270ae80 FUN_14270ae80 body=116 status=ok
// SIG undefined FUN_14270ae80(void)

void FUN_14270ae80(longlong param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined1 *param_5)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x5b8) == 0) {
    *param_4 = 0;
    *param_3 = 0;
    *param_5 = 0;
    return;
  }
  if (param_2 < 0xb) {
    lVar1 = (longlong)param_2;
    *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0x5b8) + 0x28 + lVar1 * 0xc);
    *param_4 = *(undefined4 *)(*(longlong *)(param_1 + 0x5b8) + 0x2c + lVar1 * 0xc);
    if (*(float *)(*(longlong *)(param_1 + 0x5b8) + 0x30 + lVar1 * 0xc) != 0.0) {
      *param_5 = 1;
      return;
    }
  }
  *param_5 = 0;
  return;
}



// FUNCTION 14270af00 FUN_14270af00 body=202 status=ok
// SIG undefined FUN_14270af00(void)

undefined8 * FUN_14270af00(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 local_38 [12];
  undefined8 local_2c;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  lVar7 = *(longlong *)(param_1 + 0x5b8);
  if (lVar7 == 0) {
    puVar6 = &local_2c;
  }
  else {
    local_20 = *param_3;
    local_18 = param_3[1];
    local_10 = param_3[2];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
      lVar7 = *(longlong *)(param_1 + 0x5b8);
    }
    puVar6 = (undefined8 *)FUN_1428af270(lVar7,local_38,&local_20);
  }
  plVar5 = (longlong *)param_3[2];
  uVar4 = *(undefined4 *)(puVar6 + 1);
  *param_2 = *puVar6;
  *(undefined4 *)(param_2 + 1) = uVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 14270aff0 FUN_14270aff0 body=421 status=ok
// SIG undefined FUN_14270aff0(void)

void FUN_14270aff0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_1423d20e0();
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar4 < DAT_146b08dc8) {
    _Init_thread_header(&DAT_146b08dc8);
    if (DAT_146b08dc8 == -1) {
      uVar1 = FUN_1429e18b0();
      FUN_1429e18b0();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"TargetViewRotation",1);
      DAT_146b08dc0 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146b08dc8);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b08dc0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b08dc0 + 0x40) + (short)iVar3;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b08dc0 + 0x30));
  }
  if (*piVar4 < DAT_146b08dd8) {
    _Init_thread_header(&DAT_146b08dd8);
    if (DAT_146b08dd8 == -1) {
      uVar1 = FUN_1429e18b0();
      FUN_1429e18b0();
      puVar2 = (undefined8 *)FName::FName(local_res18,L"SpawnLocation",1);
      DAT_146b08dd0 = FUN_1405dfb00(uVar1,*puVar2);
      _Init_thread_footer(&DAT_146b08dd8);
    }
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b08dd0 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b08dd0 + 0x40) + (short)iVar3;
      local_14 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b08dd0 + 0x30));
  }
  return;
}



// FUNCTION 14270b1a0 FUN_14270b1a0 body=2339 status=ok
// SIG undefined FUN_14270b1a0(void)

void FUN_14270b1a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_142231c90();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b08df8) && (_Init_thread_header(&DAT_146b08df8), DAT_146b08df8 == -1)) {
    uVar1 = AFGRailroadVehicle::GetPrivateStaticClass();
    AFGRailroadVehicle::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Score",1);
    DAT_146b08df0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b08df8);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b08df0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b08df0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b08df0 + 0x30));
  }
  if ((*piVar5 < DAT_146b08e08) && (_Init_thread_header(&DAT_146b08e08), DAT_146b08e08 == -1)) {
    uVar1 = AFGRailroadVehicle::GetPrivateStaticClass();
    AFGRailroadVehicle::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsSpectator",1);
    DAT_146b08e00 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b08e08);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b08e00 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b08e00 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b08e00 + 0x30));
  }
  if ((*piVar5 < DAT_146b08e18) && (_Init_thread_header(&DAT_146b08e18), DAT_146b08e18 == -1)) {
    uVar1 = AFGRailroadVehicle::GetPrivateStaticClass();
    AFGRailroadVehicle::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bOnlySpectator",1);
    DAT_146b08e10 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b08e18);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b08e10 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b08e10 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b08e10 + 0x30));
  }
  if ((*piVar5 < DAT_146b08e28) && (_Init_thread_header(&DAT_146b08e28), DAT_146b08e28 == -1)) {
    uVar1 = AFGRailroadVehicle::GetPrivateStaticClass();
    AFGRailroadVehicle::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bFromPreviousLevel",1);
    DAT_146b08e20 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b08e28);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b08e20 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b08e20 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b08e20 + 0x30));
  }
  if ((*piVar5 < DAT_146b08e38) && (_Init_thread_header(&DAT_146b08e38), DAT_146b08e38 == -1)) {
    uVar1 = AFGRailroadVehicle::GetPrivateStaticClass();
    AFGRailroadVehicle::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"StartTime",1);
    DAT_146b08e30 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b08e38);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b08e30 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b08e30 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b08e30 + 0x30));
  }
  if ((*piVar5 < DAT_146b08e48) && (_Init_thread_header(&DAT_146b08e48), DAT_146b08e48 == -1)) {
    uVar1 = AFGRailroadVehicle::GetPrivateStaticClass();
    AFGRailroadVehicle::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Ping",1);
    DAT_146b08e40 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b08e48);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b08e40 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b08e40 + 0x40) + (short)iVar3;
      local_24 = 3;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b08e40 + 0x30));
  }
  if ((*piVar5 < DAT_146b08e58) && (_Init_thread_header(&DAT_146b08e58), DAT_146b08e58 == -1)) {
    uVar1 = AFGRailroadVehicle::GetPrivateStaticClass();
    AFGRailroadVehicle::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PlayerId",1);
    DAT_146b08e50 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b08e58);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b08e50 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b08e50 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b08e50 + 0x30));
  }
  if ((*piVar5 < DAT_146b08e68) && (_Init_thread_header(&DAT_146b08e68), DAT_146b08e68 == -1)) {
    uVar1 = AFGRailroadVehicle::GetPrivateStaticClass();
    AFGRailroadVehicle::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ParentPlayerId",1);
    DAT_146b08e60 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b08e68);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b08e60 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b08e60 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b08e60 + 0x30));
  }
  if ((*piVar5 < DAT_146b08e78) && (_Init_thread_header(&DAT_146b08e78), DAT_146b08e78 == -1)) {
    uVar1 = AFGRailroadVehicle::GetPrivateStaticClass();
    AFGRailroadVehicle::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsABot",1);
    DAT_146b08e70 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b08e78);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b08e70 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b08e70 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b08e70 + 0x30));
  }
  if ((*piVar5 < DAT_146b08e88) && (_Init_thread_header(&DAT_146b08e88), DAT_146b08e88 == -1)) {
    uVar1 = AFGRailroadVehicle::GetPrivateStaticClass();
    AFGRailroadVehicle::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsInactive",1);
    DAT_146b08e80 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b08e88);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b08e80 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b08e80 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b08e80 + 0x30));
  }
  if ((*piVar5 < DAT_146b08e98) && (_Init_thread_header(&DAT_146b08e98), DAT_146b08e98 == -1)) {
    uVar1 = AFGRailroadVehicle::GetPrivateStaticClass();
    AFGRailroadVehicle::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"UniqueId",1);
    DAT_146b08e90 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b08e98);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b08e90 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b08e90 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b08e90 + 0x30));
  }
  if ((*piVar5 < DAT_146b08ea8) && (_Init_thread_header(&DAT_146b08ea8), DAT_146b08ea8 == -1)) {
    uVar1 = AFGRailroadVehicle::GetPrivateStaticClass();
    AFGRailroadVehicle::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PlayerNamePrivate",1);
    DAT_146b08ea0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b08ea8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b08ea0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b08ea0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b08ea0 + 0x30));
  }
  if ((*piVar5 < DAT_146b08eb8) && (_Init_thread_header(&DAT_146b08eb8), DAT_146b08eb8 == -1)) {
    uVar1 = AFGRailroadVehicle::GetPrivateStaticClass();
    AFGRailroadVehicle::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"HardwareIdentifier",1);
    DAT_146b08eb0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b08eb8);
  }
  if (0 < *(int *)(DAT_146b08eb0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b08eb0 + 0x40) + (short)iVar4;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b08eb0 + 0x30));
  }
  return;
}



// FUNCTION 14270bad0 FUN_14270bad0 body=51 status=ok
// SIG undefined FUN_14270bad0(void)

undefined4 FUN_14270bad0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x68);
  }
  return 0;
}



// FUNCTION 14270bb10 FUN_14270bb10 body=89 status=ok
// SIG undefined FUN_14270bb10(void)

longlong FUN_14270bb10(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x508);
  if (lVar1 != 0) {
    lVar3 = ULocalPlayer::GetPrivateStaticClass();
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



// FUNCTION 14270bb70 FUN_14270bb70 body=53 status=ok
// SIG undefined FUN_14270bb70(void)

undefined8 FUN_14270bb70(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
  if (lVar1 != 0) {
    uVar2 = FUN_142696270(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14270bbb0 FUN_14270bbb0 body=42 status=ok
// SIG undefined FUN_14270bbb0(void)

undefined4 FUN_14270bbb0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_2,1);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x88);
  }
  return 0;
}



// FUNCTION 14270bbe0 FUN_14270bbe0 body=62 status=ok
// SIG undefined FUN_14270bbe0(void)

undefined8 FUN_14270bbe0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  plVar1 = *(longlong **)(lVar2 + 0x148);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014270bc09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0x710))(plVar1,param_1);
    return uVar3;
  }
  return 0x3f800000;
}



// FUNCTION 14270bc20 FUN_14270bc20 body=43 status=ok
// SIG undefined FUN_14270bc20(void)

undefined1 FUN_14270bc20(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xe28))();
  if (cVar1 != '\0') {
    return *(undefined1 *)((longlong)param_1 + 0x6c1);
  }
  return 0;
}



// FUNCTION 14270bc50 FUN_14270bc50 body=165 status=ok
// SIG undefined FUN_14270bc50(void)

ulonglong FUN_14270bc50(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar2 = *(longlong *)(param_1 + 0x508);
  if (lVar2 != 0) {
    lVar3 = ULocalPlayer::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if (((char)in_RAX != '\0') && (*(longlong *)(lVar2 + 0x70) != 0)) {
      uVar4 = FUN_142480f40(*(longlong *)(lVar2 + 0x70),&local_res8);
      if ((char)uVar4 == '\0') {
        return uVar4;
      }
      *param_2 = local_res8;
      *param_3 = local_resc;
      return uVar4;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14270bd20 GetRefPoseOverride body=8 status=ok
// SIG undefined GetRefPoseOverride(void)

undefined8 USkinnedMeshComponent::GetRefPoseOverride(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x508);
}



// FUNCTION 14270bd50 FUN_14270bd50 body=473 status=ok
// SIG undefined FUN_14270bd50(void)

longlong FUN_14270bd50(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar10 = -1;
  lVar7 = (**(code **)(*param_1 + 0x148))();
  uVar1 = *(undefined8 *)(lVar7 + 0x140);
  lVar7 = *(longlong *)(lVar7 + 0x148);
  iVar11 = -1;
  if ((*(longlong *)(param_1[0xa5] + 0x17f0) != 0) &&
     (iVar6 = 0, iVar11 = -1, 0 < *(int *)(lVar7 + 0x478))) {
    plVar9 = *(longlong **)(lVar7 + 0x470);
    do {
      iVar11 = iVar6;
      if (*(longlong *)(param_1[0xa5] + 0x17f0) == *plVar9) break;
      iVar6 = iVar6 + 1;
      plVar9 = plVar9 + 1;
      iVar11 = -1;
    } while (iVar6 < *(int *)(lVar7 + 0x478));
  }
  iVar11 = iVar11 + param_2;
  lVar12 = (longlong)iVar11;
  if (-1 < iVar11) {
    do {
      if (*(int *)(lVar7 + 0x478) <= iVar11) break;
      lVar2 = *(longlong *)(*(longlong *)(lVar7 + 0x470) + lVar12 * 8);
      if ((lVar2 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x118), lVar3 != 0)) {
        lVar8 = FUN_14291fb80();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (((bVar4) && (*(longlong *)(lVar3 + 0x488) != 0)) &&
           (cVar5 = FUN_14293b980(uVar1,param_1,lVar2), cVar5 != '\0')) {
          return lVar2;
        }
      }
      iVar11 = iVar11 + param_2;
      lVar12 = lVar12 + param_2;
    } while (-1 < lVar12);
    if (-1 < iVar11) goto LAB_14270be74;
  }
  iVar10 = *(int *)(lVar7 + 0x478);
LAB_14270be74:
  iVar10 = param_2 + iVar10;
  lVar12 = (longlong)iVar10;
  if (-1 < iVar10) {
    do {
      if (*(int *)(lVar7 + 0x478) <= iVar10) {
        return 0;
      }
      lVar2 = *(longlong *)(*(longlong *)(lVar7 + 0x470) + lVar12 * 8);
      if ((lVar2 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x118), lVar3 != 0)) {
        lVar8 = FUN_14291fb80();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (((bVar4) && (*(longlong *)(lVar3 + 0x488) != 0)) &&
           (cVar5 = FUN_14293b980(uVar1,param_1,lVar2), cVar5 != '\0')) {
          return lVar2;
        }
      }
      iVar10 = iVar10 + param_2;
      lVar12 = lVar12 + param_2;
    } while (-1 < lVar12);
  }
  return 0;
}



// FUNCTION 14270bf30 FUN_14270bf30 body=33 status=ok
// SIG undefined FUN_14270bf30(void)

undefined8 FUN_14270bf30(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0x508);
  return param_2;
}



// FUNCTION 14270bf60 FUN_14270bf60 body=4329 status=ok
// SIG undefined FUN_14270bf60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14270bf60(float *param_1,undefined8 param_2,float *param_3,int param_4,uint param_5,
                  float param_6,float param_7,undefined8 param_8,undefined1 param_9,
                  undefined1 param_10,undefined4 param_11,longlong param_12,undefined1 param_13,
                  undefined8 param_14)

{
  float *pfVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [14];
  unkbyte10 Var13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [14];
  undefined1 auVar16 [12];
  undefined1 auVar17 [14];
  undefined1 auVar18 [12];
  undefined1 auVar19 [14];
  undefined1 auVar20 [12];
  undefined1 auVar21 [14];
  undefined1 auVar22 [12];
  undefined1 uVar23;
  int iVar24;
  longlong lVar25;
  float *pfVar26;
  uint uVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar31;
  undefined4 *puVar32;
  ulonglong uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  ulonglong uVar38;
  int iVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  undefined8 uVar44;
  undefined4 uVar53;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined2 uVar152;
  undefined2 uVar153;
  undefined2 uVar154;
  undefined2 uVar155;
  float fVar54;
  float fVar55;
  char cVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar65 [16];
  undefined1 auVar77 [16];
  undefined1 auVar89 [16];
  undefined1 auVar101 [16];
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar117;
  float fVar118;
  undefined1 auVar116 [16];
  float fVar119;
  float fVar120;
  float fVar123;
  float fVar124;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined2 uVar156;
  undefined1 auVar134 [16];
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  undefined1 uVar141;
  undefined1 uVar142;
  undefined1 uVar143;
  undefined1 uVar144;
  undefined1 uVar145;
  undefined1 uVar146;
  undefined1 uVar147;
  undefined1 uVar148;
  uint uVar149;
  float fVar150;
  float fVar151;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  int local_354;
  int local_350;
  ulonglong local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  float local_2d8;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  longlong local_2a8;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
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
  longlong local_218;
  undefined1 local_210 [40];
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined4 uStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  undefined4 uStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [232];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar66 [16];
  undefined1 auVar78 [16];
  undefined1 auVar90 [16];
  undefined1 auVar102 [16];
  undefined1 auVar67 [16];
  undefined1 auVar79 [16];
  undefined1 auVar91 [16];
  undefined1 auVar103 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar64 [16];
  undefined1 auVar76 [16];
  undefined1 auVar88 [16];
  undefined1 auVar100 [16];
  undefined1 auVar56 [16];
  undefined1 auVar68 [16];
  undefined1 auVar80 [16];
  undefined1 auVar92 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar125 [16];
  
  FUN_1424290d0(local_210,*(undefined4 *)(param_12 + 0xe0),1,0,0);
  uVar38 = (ulonglong)(int)param_5;
  iVar40 = param_5 + 1;
  uVar27 = iVar40 * (param_4 + 1);
  lVar25 = FMemory::Malloc((longlong)(int)uVar27 * 0x5c,0);
  local_218 = lVar25;
  local_2a8 = FMemory::Malloc((uVar38 + 1) * 0x5c,0);
  iVar39 = 0;
  if (0 < iVar40) {
    puVar32 = (undefined4 *)(local_2a8 + 8);
    local_2f0 = local_2f0 & 0xffffffff00000000;
    local_2e0 = 0x3f800000;
    local_2d8 = 0.0;
    do {
      puVar32[-2] = 0;
      fVar113 = (float)iVar39 * (1.0 / (float)(int)param_5);
      uVar44 = __libm_sse2_sincosf_((param_7 - param_6) * fVar113 + param_6);
      local_2e8 = (undefined4)uVar44;
      uVar53 = (undefined4)((ulonglong)uVar44 >> 0x20);
      puVar32[-1] = local_2e8;
      *puVar32 = uVar53;
      local_2f0 = CONCAT44(uVar53,(undefined4)local_2f0) ^ 0x8000000000000000;
      FDynamicMeshVertex::SetTangents(puVar32 + -2,&local_2e0,&local_2f0,puVar32 + -2);
      puVar32[2] = fVar113;
      iVar39 = iVar39 + 1;
      puVar32[1] = 0;
      puVar32 = puVar32 + 0x17;
    } while (iVar39 < iVar40);
  }
  lVar30 = local_2a8;
  local_354 = 0;
  if (0 < param_4 + 1) {
    uVar38 = uVar38 + 1;
    fVar113 = 2.4760495e-05;
    uVar141 = DAT_146b08ba0;
    uVar142 = DAT_146b08ba0._1_1_;
    uVar143 = DAT_146b08ba0._2_1_;
    uVar144 = DAT_146b08ba0._3_1_;
    uVar145 = DAT_146b08ba0._4_1_;
    uVar146 = DAT_146b08ba0._5_1_;
    uVar147 = DAT_146b08ba0._6_1_;
    uVar148 = DAT_146b08ba0._7_1_;
    uVar149 = DAT_146b08ba0._8_4_;
    local_138 = -0.00019840874;
    fStack_134 = -0.00019840874;
    fStack_130 = -0.00019840874;
    uStack_12c = 0xb9500bf1;
    local_1e8 = 0.008333331;
    fStack_1e4 = 0.008333331;
    fStack_1e0 = 0.008333331;
    uStack_1dc = 0x3c088886;
    local_1d8 = -0.16666667;
    fStack_1d4 = -0.16666667;
    fStack_1d0 = -0.16666667;
    uStack_1cc = 0xbe2aaaab;
    local_1c8 = -2.6051615e-07;
    fStack_1c4 = -2.6051615e-07;
    fStack_1c0 = -2.6051615e-07;
    uStack_1bc = 0xb48bdd11;
    local_1b8 = -0.0013888378;
    fStack_1b4 = -0.0013888378;
    fStack_1b0 = -0.0013888378;
    uStack_1ac = 0xbab609aa;
    local_1a8 = 0.041666638;
    fStack_1a4 = 0.041666638;
    fStack_1a0 = 0.041666638;
    uStack_19c = 0x3d2aaaa3;
    local_198 = -0.5;
    fStack_194 = -0.5;
    fStack_190 = -0.5;
    uStack_18c = 0xbf000000;
    local_350 = 0;
    local_148 = -2.3889859e-08;
    fStack_144 = -2.3889859e-08;
    fStack_140 = -2.3889859e-08;
    uStack_13c = 0xb2cd365b;
    local_158 = 2.7525562e-06;
    fStack_154 = 2.7525562e-06;
    fStack_150 = 2.7525562e-06;
    uStack_14c = 0x3638b88e;
    local_178 = 1.0;
    fStack_174 = 1.0;
    fStack_170 = 1.0;
    uStack_16c = 0x3f800000;
    local_188 = 2.4760495e-05;
    fStack_184 = 2.4760495e-05;
    fStack_180 = 2.4760495e-05;
    uStack_17c = 0x37cfb4c2;
    local_168 = 1.0;
    fStack_164 = 1.0;
    fStack_160 = 1.0;
    uStack_15c = 0x3f800000;
    fVar112 = fVar113;
    fVar109 = fVar113;
    local_2f0 = uVar38;
    do {
      fVar117 = DAT_1468b5d98;
      fVar115 = DAT_1468b5d94;
      fVar119 = DAT_1468b5d90;
      fVar110 = (float)local_354 * 360.0 * (1.0 / (float)param_4) * fRam0000000146b08c34;
      fVar107 = _DAT_146b08c30 * 0.0 -
                (float)(int)(_DAT_146b08c30 * 0.0 * _DAT_146b08c20) * _DAT_146b08c10;
      fVar110 = fVar110 - (float)(int)(fVar110 * fRam0000000146b08c24) * fRam0000000146b08c14;
      fVar111 = fRam0000000146b08c38 * 0.0 -
                (float)(int)(fRam0000000146b08c38 * 0.0 * fRam0000000146b08c28) *
                fRam0000000146b08c18;
      uVar41 = -(uint)(_DAT_146b08bd0 < (float)((uint)fVar107 & _DAT_146b08be0));
      uVar42 = -(uint)(fRam0000000146b08bd4 < (float)((uint)fVar110 & uRam0000000146b08be4));
      uVar43 = -(uint)(fRam0000000146b08bd8 < (float)((uint)fVar111 & uRam0000000146b08be8));
      fVar107 = (float)(((uint)((float)((uint)fVar107 & _DAT_146b08c00 | _DAT_146b08bf0) - fVar107)
                        ^ (uint)fVar107) & uVar41 ^ (uint)fVar107);
      fVar110 = (float)(((uint)((float)((uint)fVar110 & uRam0000000146b08c04 | uRam0000000146b08bf4)
                               - fVar110) ^ (uint)fVar110) & uVar42 ^ (uint)fVar110);
      fVar111 = (float)(((uint)((float)((uint)fVar111 & uRam0000000146b08c08 | uRam0000000146b08bf8)
                               - fVar111) ^ (uint)fVar111) & uVar43 ^ (uint)fVar111);
      fVar54 = fVar107 * fVar107;
      fVar105 = fVar110 * fVar110;
      fVar106 = fVar111 * fVar111;
      fVar107 = (((((local_148 * fVar54 + local_158) * fVar54 + local_138) * fVar54 + local_1e8) *
                  fVar54 + local_1d8) * fVar54 + local_178) * fVar107;
      fVar110 = (((((fStack_144 * fVar105 + fStack_154) * fVar105 + fStack_134) * fVar105 +
                  fStack_1e4) * fVar105 + fStack_1d4) * fVar105 + fStack_174) * fVar110;
      fVar111 = (((((fStack_140 * fVar106 + fStack_150) * fVar106 + fStack_130) * fVar106 +
                  fStack_1e0) * fVar106 + fStack_1d0) * fVar106 + fStack_170) * fVar111;
      fVar120 = (((((local_1c8 * fVar54 + fVar113) * fVar54 + local_1b8) * fVar54 + local_1a8) *
                  fVar54 + local_198) * fVar54 + local_168) *
                (float)((_DAT_146b08bc0 ^
                        CONCAT13(uVar144,CONCAT12(uVar143,CONCAT11(uVar142,uVar141)))) & uVar41 ^
                       CONCAT13(uVar144,CONCAT12(uVar143,CONCAT11(uVar142,uVar141))));
      fVar123 = (((((fStack_1c4 * fVar105 + fVar112) * fVar105 + fStack_1b4) * fVar105 + fStack_1a4)
                  * fVar105 + fStack_194) * fVar105 + fStack_164) *
                (float)((uRam0000000146b08bc4 ^
                        CONCAT13(uVar148,CONCAT12(uVar147,CONCAT11(uVar146,uVar145)))) & uVar42 ^
                       CONCAT13(uVar148,CONCAT12(uVar147,CONCAT11(uVar146,uVar145))));
      fVar124 = (((((fStack_1c0 * fVar106 + fVar109) * fVar106 + fStack_1b0) * fVar106 + fStack_1a0)
                  * fVar106 + fStack_190) * fVar106 + fStack_160) *
                (float)((uRam0000000146b08bc8 ^ uVar149) & uVar43 ^ uVar149);
      fVar105 = fVar120 * fVar110;
      fVar54 = fVar123 * fVar120;
      fVar106 = fVar111 * fVar107 * fVar123 - fVar124 * fVar110;
      fVar108 = fVar111 * fVar107 * fVar110 + fVar124 * fVar123;
      fVar55 = -(fVar120 * fVar111);
      fVar120 = fVar124 * fVar120;
      fVar114 = fVar123 * fVar111 - fVar124 * fVar107 * fVar110;
      fVar110 = -(fVar124 * fVar107 * fVar123 + fVar111 * fVar110);
      if (0 < (longlong)uVar38) {
        pfVar26 = (float *)(lVar30 + 8);
        uVar149 = CONCAT13(uVar144,CONCAT12(uVar143,CONCAT11(uVar142,uVar141))) ^
                  CONCAT13(uVar144,CONCAT12(uVar143,CONCAT11(uVar142,uVar141)));
        uVar141 = (undefined1)uVar149;
        uVar142 = (undefined1)(uVar149 >> 8);
        uVar143 = (undefined1)(uVar149 >> 0x10);
        uVar144 = (undefined1)(uVar149 >> 0x18);
        uVar41 = CONCAT13(uVar148,CONCAT12(uVar147,CONCAT11(uVar146,uVar145))) ^
                 CONCAT13(uVar148,CONCAT12(uVar147,CONCAT11(uVar146,uVar145)));
        uVar145 = (undefined1)uVar41;
        uVar146 = (undefined1)(uVar41 >> 8);
        uVar147 = (undefined1)(uVar41 >> 0x10);
        uVar148 = (undefined1)(uVar41 >> 0x18);
        fStack_21c = 1.0;
        fStack_24c = 0.0;
        fStack_23c = 0.0;
        fStack_22c = 0.0;
        local_368 = 0x7f000000;
        local_364 = 0x7f000000;
        local_360 = 0x7f000000;
        auVar116 = _DAT_144101760;
        iVar39 = local_350;
        do {
          fVar113 = pfVar26[-2];
          fVar112 = pfVar26[-1];
          local_228 = pfVar26[-2];
          fStack_224 = pfVar26[-1];
          fStack_220 = *pfVar26;
          lVar29 = (longlong)iVar39 * 0x5c;
          local_2d8 = fVar112 * fVar55 + fVar113 * fVar107 +
                      fStack_21c * fVar117 + fStack_220 * fVar120;
          *(ulonglong *)(lVar29 + lVar25) =
               CONCAT44(fVar112 * fVar108 + fVar113 * fVar105 +
                        fStack_21c * fVar115 + fStack_220 * fVar114,
                        fVar112 * fVar106 + fVar113 * fVar54 +
                        fStack_21c * fVar119 + fStack_220 * fVar110);
          *(float *)(lVar29 + 8 + lVar25) = local_2d8;
          fVar113 = pfVar26[0x12];
          auVar64._0_15_ = ZEXT415((uint)fVar113);
          auVar64[0xf] = uVar148;
          auVar63._14_2_ = auVar64._14_2_;
          auVar63._0_13_ = ZEXT413((uint)fVar113);
          auVar63[0xd] = uVar147;
          auVar62._13_3_ = auVar63._13_3_;
          auVar62._0_13_ = ZEXT413((uint)fVar113);
          auVar61._12_4_ = auVar62._12_4_;
          auVar61._4_7_ = 0;
          auVar61._0_4_ = fVar113;
          auVar61[0xb] = uVar146;
          auVar60._11_5_ = auVar61._11_5_;
          auVar60._4_7_ = 0;
          auVar60._0_4_ = fVar113;
          auVar59._10_6_ = auVar60._10_6_;
          auVar59._4_5_ = 0;
          auVar59._0_4_ = fVar113;
          auVar59[9] = uVar145;
          auVar58._9_7_ = auVar59._9_7_;
          auVar58._4_5_ = 0;
          auVar58._0_4_ = fVar113;
          cVar104 = (char)((uint)fVar113 >> 0x18);
          Var13 = CONCAT91(CONCAT81(auVar58._8_8_,uVar144),cVar104);
          auVar57._6_10_ = Var13;
          auVar57[5] = uVar143;
          auVar57[4] = (char)((uint)fVar113 >> 0x10);
          auVar57._0_4_ = fVar113;
          auVar12._2_12_ = auVar57._4_12_;
          auVar12[1] = uVar142;
          auVar12[0] = (char)((uint)fVar113 >> 8);
          uVar152 = CONCAT11(uVar141,SUB41(fVar113,0));
          auVar56._2_14_ = auVar12;
          uVar5 = (undefined2)(uVar41 >> 0x10);
          auVar67._0_12_ = auVar56._0_12_;
          auVar67._12_2_ = (short)Var13;
          auVar67._14_2_ = uVar5;
          auVar66._12_4_ = auVar67._12_4_;
          auVar66._0_10_ = auVar56._0_10_;
          uVar4 = (undefined2)uVar41;
          auVar66._10_2_ = uVar4;
          auVar65._10_6_ = auVar66._10_6_;
          auVar65._0_8_ = auVar56._0_8_;
          auVar65._8_2_ = auVar57._4_2_;
          uVar3 = (undefined2)(uVar149 >> 0x10);
          auVar14._4_8_ = auVar65._8_8_;
          auVar14._2_2_ = uVar3;
          auVar14._0_2_ = auVar12._0_2_;
          uVar2 = (undefined2)uVar149;
          auVar45._0_4_ = CONCAT22(uVar2,uVar152);
          auVar45._4_12_ = auVar14;
          auVar46._0_4_ = -(uint)(0x7f < auVar45._0_4_);
          auVar46._4_4_ = -(uint)(0x7f < auVar14._0_4_);
          auVar46._8_4_ = -(uint)(0x7f < auVar65._8_4_);
          auVar46._12_4_ = -(uint)(0x7f < auVar66._12_4_);
          auVar45 = auVar46 & auVar116 | auVar45;
          local_258 = (float)auVar45._0_4_ * 0.007874016;
          fStack_254 = (float)auVar45._4_4_ * 0.007874016;
          fStack_250 = (float)auVar45._8_4_ * 0.007874016;
          fVar113 = pfVar26[0x11];
          auVar133._0_15_ = ZEXT415((uint)fVar113);
          auVar133[0xf] = uVar148;
          auVar132._14_2_ = auVar133._14_2_;
          auVar132._0_13_ = ZEXT413((uint)fVar113);
          auVar132[0xd] = uVar147;
          auVar131._13_3_ = auVar132._13_3_;
          auVar131._0_13_ = ZEXT413((uint)fVar113);
          auVar130._12_4_ = auVar131._12_4_;
          auVar130._4_7_ = 0;
          auVar130._0_4_ = fVar113;
          auVar130[0xb] = uVar146;
          auVar129._11_5_ = auVar130._11_5_;
          auVar129._4_7_ = 0;
          auVar129._0_4_ = fVar113;
          auVar128._10_6_ = auVar129._10_6_;
          auVar128._4_5_ = 0;
          auVar128._0_4_ = fVar113;
          auVar128[9] = uVar145;
          auVar127._9_7_ = auVar128._9_7_;
          auVar127._4_5_ = 0;
          auVar127._0_4_ = fVar113;
          Var13 = CONCAT91(CONCAT81(auVar127._8_8_,uVar144),(char)((uint)fVar113 >> 0x18));
          auVar126._6_10_ = Var13;
          auVar126[5] = uVar143;
          auVar126[4] = (char)((uint)fVar113 >> 0x10);
          auVar126._0_4_ = fVar113;
          auVar15._2_12_ = auVar126._4_12_;
          auVar15[1] = uVar142;
          auVar15[0] = (char)((uint)fVar113 >> 8);
          uVar156 = CONCAT11(uVar141,SUB41(fVar113,0));
          auVar125._2_14_ = auVar15;
          auVar136._0_12_ = auVar125._0_12_;
          auVar136._12_2_ = (short)Var13;
          auVar136._14_2_ = uVar5;
          auVar135._12_4_ = auVar136._12_4_;
          auVar135._0_10_ = auVar125._0_10_;
          auVar135._10_2_ = uVar4;
          auVar134._10_6_ = auVar135._10_6_;
          auVar134._0_8_ = auVar125._0_8_;
          auVar134._8_2_ = auVar126._4_2_;
          auVar16._4_8_ = auVar134._8_8_;
          auVar16._2_2_ = uVar3;
          auVar16._0_2_ = auVar15._0_2_;
          auVar122._0_4_ = CONCAT22(uVar2,uVar156);
          auVar122._4_12_ = auVar16;
          fVar109 = fStack_24c * fVar119 + fStack_250 * fVar110 +
                    fStack_254 * fVar106 + local_258 * fVar54;
          fVar123 = fStack_24c * fVar115 + fStack_250 * fVar114 +
                    fStack_254 * fVar108 + local_258 * fVar105;
          fStack_2c0 = fStack_24c * fVar117 + fStack_250 * fVar120 +
                       fStack_254 * fVar55 + local_258 * fVar107;
          fStack_2bc = fStack_24c * 1.0 + fStack_250 * 0.0 + fStack_254 * 0.0 + local_258 * 0.0;
          _local_2c8 = CONCAT44(fVar123,fVar109);
          auVar121._0_4_ = -(uint)(0x7f < auVar122._0_4_);
          auVar121._4_4_ = -(uint)(0x7f < auVar16._0_4_);
          auVar121._8_4_ = -(uint)(0x7f < auVar134._8_4_);
          auVar121._12_4_ = -(uint)(0x7f < auVar135._12_4_);
          auVar46 = auVar121 & auVar116 | auVar122;
          auVar122 = auVar121 & auVar116 | auVar122;
          fVar113 = (float)auVar46._0_4_ * 0.007874016;
          fVar112 = (float)auVar46._4_4_ * 0.007874016;
          fVar111 = (float)auVar46._8_4_ * 0.007874016;
          fStack_240 = (float)(int)cVar104 * 0.007843138 - 1.0;
          local_248 = (fStack_254 * fVar111 - fStack_250 * fVar112) * fStack_240;
          fStack_244 = (fStack_250 * fVar113 - local_258 * fVar111) * fStack_240;
          fStack_240 = (local_258 * fVar112 - fStack_254 * fVar113) * fStack_240;
          fVar113 = fStack_23c * fVar119 + fStack_240 * fVar110 +
                    fStack_244 * fVar106 + local_248 * fVar54;
          fVar112 = fStack_23c * fVar115 + fStack_240 * fVar114 +
                    fStack_244 * fVar108 + local_248 * fVar105;
          fStack_2b0 = fStack_23c * fVar117 + fStack_240 * fVar120 +
                       fStack_244 * fVar55 + local_248 * fVar107;
          fStack_2ac = fStack_23c * 1.0 + fStack_240 * 0.0 + fStack_244 * 0.0 + local_248 * 0.0;
          _local_2b8 = CONCAT44(fVar112,fVar113);
          local_238 = (float)auVar122._0_4_ * 0.007874016;
          fStack_234 = (float)auVar122._4_4_ * 0.007874016;
          fStack_230 = (float)auVar122._8_4_ * 0.007874016;
          fVar111 = (fStack_22c * fVar119 + fStack_230 * fVar110 +
                    fStack_234 * fVar106 + local_238 * fVar54) * 127.0;
          iVar31 = (int)ROUND(fVar111 + fVar111 + 0.5) >> 1;
          if (iVar31 < -0x80) {
            iVar36 = -0x80;
          }
          else {
            iVar36 = 0x7f;
            if (iVar31 < 0x7f) {
              iVar36 = iVar31;
            }
          }
          fVar111 = (fStack_22c * fVar115 + fStack_230 * fVar114 +
                    fStack_234 * fVar108 + local_238 * fVar105) * 127.0;
          *(char *)(lVar29 + 0x4c + lVar25) = (char)iVar36;
          iVar36 = (int)ROUND(fVar111 + fVar111 + 0.5) >> 1;
          if (iVar36 < -0x80) {
            iVar37 = -0x80;
          }
          else {
            iVar37 = 0x7f;
            if (iVar36 < 0x7f) {
              iVar37 = iVar36;
            }
          }
          fVar111 = (fStack_22c * fVar117 + fStack_230 * fVar120 +
                    fStack_234 * fVar55 + local_238 * fVar107) * 127.0;
          *(char *)(lVar29 + 0x4d + lVar25) = (char)iVar37;
          iVar37 = (int)ROUND(fVar111 + fVar111 + 0.5) >> 1;
          if (iVar37 < -0x80) {
            iVar35 = -0x80;
          }
          else {
            iVar35 = 0x7f;
            if (iVar37 < 0x7f) {
              iVar35 = iVar37;
            }
          }
          *(char *)(lVar29 + 0x4e + lVar25) = (char)iVar35;
          *(undefined1 *)(lVar29 + 0x4f + lVar25) = 0x7f;
          iVar35 = (int)ROUND(fVar109 * 254.0 + 0.5) >> 1;
          if (iVar35 < -0x80) {
            iVar28 = -0x80;
          }
          else {
            iVar28 = 0x7f;
            if (iVar35 < 0x7f) {
              iVar28 = iVar35;
            }
          }
          *(char *)(lVar29 + 0x50 + lVar25) = (char)iVar28;
          iVar28 = (int)ROUND(fVar123 * 254.0 + 0.5) >> 1;
          if (iVar28 < -0x80) {
            iVar34 = -0x80;
          }
          else {
            iVar34 = 0x7f;
            if (iVar28 < 0x7f) {
              iVar34 = iVar28;
            }
          }
          *(char *)(lVar29 + 0x51 + lVar25) = (char)iVar34;
          iVar34 = (int)ROUND(fStack_2c0 * 254.0 + 0.5) >> 1;
          if (iVar34 < -0x80) {
            iVar24 = -0x80;
          }
          else {
            iVar24 = 0x7f;
            if (iVar34 < 0x7f) {
              iVar24 = iVar34;
            }
          }
          *(char *)(lVar29 + 0x52 + lVar25) = (char)iVar24;
          *(undefined1 *)(lVar29 + 0x53 + lVar25) = 0x7f;
          auVar116 = _DAT_144101760;
          if (iVar35 < -0x80) {
            local_368 = CONCAT31(local_368._1_3_,0x80);
          }
          else {
            uVar23 = 0x7f;
            if (iVar35 < 0x7f) {
              uVar23 = (char)iVar35;
            }
            local_368 = CONCAT31(local_368._1_3_,uVar23);
          }
          uVar53 = local_368;
          if (iVar28 < -0x80) {
            local_368._0_2_ = CONCAT11(0x80,(undefined1)local_368);
          }
          else {
            uVar23 = 0x7f;
            if (iVar28 < 0x7f) {
              uVar23 = (char)iVar28;
            }
            local_368._0_2_ = CONCAT11(uVar23,(undefined1)local_368);
          }
          local_368._3_1_ = SUB41(uVar53,3);
          if (iVar34 < -0x80) {
            local_368._0_3_ = CONCAT12(0x80,(undefined2)local_368);
          }
          else {
            uVar23 = 0x7f;
            if (iVar34 < 0x7f) {
              uVar23 = (char)iVar34;
            }
            local_368._0_3_ = CONCAT12(uVar23,(undefined2)local_368);
          }
          fVar113 = fVar113 * 127.0;
          iVar35 = (int)ROUND(fVar113 + fVar113 + 0.5) >> 1;
          if (iVar35 < -0x80) {
            local_364 = CONCAT31(local_364._1_3_,0x80);
          }
          else {
            uVar23 = 0x7f;
            if (iVar35 < 0x7f) {
              uVar23 = (char)iVar35;
            }
            local_364 = CONCAT31(local_364._1_3_,uVar23);
          }
          uVar53 = local_364;
          fVar112 = fVar112 * 127.0;
          iVar35 = (int)ROUND(fVar112 + fVar112 + 0.5) >> 1;
          if (iVar35 < -0x80) {
            local_364._0_2_ = CONCAT11(0x80,(undefined1)local_364);
          }
          else {
            uVar23 = 0x7f;
            if (iVar35 < 0x7f) {
              uVar23 = (char)iVar35;
            }
            local_364._0_2_ = CONCAT11(uVar23,(undefined1)local_364);
          }
          iVar35 = (int)ROUND(fStack_2b0 * 127.0 + fStack_2b0 * 127.0 + 0.5) >> 1;
          local_364._3_1_ = SUB41(uVar53,3);
          if (iVar35 < -0x80) {
            local_364._0_3_ = CONCAT12(0x80,(undefined2)local_364);
          }
          else {
            uVar23 = 0x7f;
            if (iVar35 < 0x7f) {
              uVar23 = (char)iVar35;
            }
            local_364._0_3_ = CONCAT12(uVar23,(undefined2)local_364);
          }
          if (iVar31 < -0x80) {
            local_360 = CONCAT31(local_360._1_3_,0x80);
          }
          else {
            uVar23 = 0x7f;
            if (iVar31 < 0x7f) {
              uVar23 = (char)iVar31;
            }
            local_360 = CONCAT31(local_360._1_3_,uVar23);
          }
          uVar53 = local_360;
          if (iVar36 < -0x80) {
            local_360._0_2_ = CONCAT11(0x80,(undefined1)local_360);
          }
          else {
            uVar23 = 0x7f;
            if (iVar36 < 0x7f) {
              uVar23 = (char)iVar36;
            }
            local_360._0_2_ = CONCAT11(uVar23,(undefined1)local_360);
          }
          local_360._3_1_ = SUB41(uVar53,3);
          if (iVar37 < -0x80) {
            local_360._0_3_ = CONCAT12(0x80,(undefined2)local_360);
          }
          else {
            uVar23 = 0x7f;
            if (iVar37 < 0x7f) {
              uVar23 = (char)iVar37;
            }
            local_360._0_3_ = CONCAT12(uVar23,(undefined2)local_360);
          }
          auVar76._0_15_ = ZEXT415(local_368);
          auVar76[0xf] = uVar148;
          auVar75._14_2_ = auVar76._14_2_;
          auVar75._0_13_ = ZEXT413(local_368);
          auVar75[0xd] = uVar147;
          auVar74._13_3_ = auVar75._13_3_;
          auVar74._0_13_ = ZEXT413(local_368);
          auVar73._12_4_ = auVar74._12_4_;
          auVar73._4_7_ = 0;
          auVar73._0_4_ = local_368;
          auVar73[0xb] = uVar146;
          auVar72._11_5_ = auVar73._11_5_;
          auVar72._4_7_ = 0;
          auVar72._0_4_ = local_368;
          auVar71._10_6_ = auVar72._10_6_;
          auVar71._4_5_ = 0;
          auVar71._0_4_ = local_368;
          auVar71[9] = uVar145;
          auVar70._9_7_ = auVar71._9_7_;
          auVar70._4_5_ = 0;
          auVar70._0_4_ = local_368;
          Var13 = CONCAT91(CONCAT81(auVar70._8_8_,uVar144),local_368._3_1_);
          auVar69._6_10_ = Var13;
          auVar69[5] = uVar143;
          auVar69[4] = (char)((uint3)(undefined3)local_368 >> 0x10);
          auVar69._0_4_ = local_368;
          auVar17._2_12_ = auVar69._4_12_;
          auVar17[1] = uVar142;
          auVar17[0] = (char)((uint3)(undefined3)local_368 >> 8);
          uVar153 = CONCAT11(uVar141,(char)(undefined3)local_368);
          auVar68._2_14_ = auVar17;
          auVar79._0_12_ = auVar68._0_12_;
          auVar79._12_2_ = (short)Var13;
          auVar79._14_2_ = uVar5;
          auVar78._12_4_ = auVar79._12_4_;
          auVar78._0_10_ = auVar68._0_10_;
          auVar78._10_2_ = uVar4;
          auVar77._10_6_ = auVar78._10_6_;
          auVar77._0_8_ = auVar68._0_8_;
          auVar77._8_2_ = auVar69._4_2_;
          auVar18._4_8_ = auVar77._8_8_;
          auVar18._2_2_ = uVar3;
          auVar18._0_2_ = auVar17._0_2_;
          auVar48._0_4_ = CONCAT22(uVar2,uVar153);
          auVar48._4_12_ = auVar18;
          fStack_28c = 0.0;
          auVar47._0_4_ = -(uint)(0x7f < auVar48._0_4_);
          auVar47._4_4_ = -(uint)(0x7f < auVar18._0_4_);
          auVar47._8_4_ = -(uint)(0x7f < auVar77._8_4_);
          auVar47._12_4_ = -(uint)(0x7f < auVar78._12_4_);
          fStack_27c = 0.0;
          fStack_26c = 0.0;
          auVar48 = auVar47 & _DAT_144101760 | auVar48;
          auVar88._0_15_ = ZEXT415(local_364);
          auVar88[0xf] = uVar148;
          auVar87._14_2_ = auVar88._14_2_;
          auVar87._0_13_ = ZEXT413(local_364);
          auVar87[0xd] = uVar147;
          auVar86._13_3_ = auVar87._13_3_;
          auVar86._0_13_ = ZEXT413(local_364);
          auVar85._12_4_ = auVar86._12_4_;
          auVar85._4_7_ = 0;
          auVar85._0_4_ = local_364;
          auVar85[0xb] = uVar146;
          auVar84._11_5_ = auVar85._11_5_;
          auVar84._4_7_ = 0;
          auVar84._0_4_ = local_364;
          auVar83._10_6_ = auVar84._10_6_;
          auVar83._4_5_ = 0;
          auVar83._0_4_ = local_364;
          auVar83[9] = uVar145;
          auVar82._9_7_ = auVar83._9_7_;
          auVar82._4_5_ = 0;
          auVar82._0_4_ = local_364;
          Var13 = CONCAT91(CONCAT81(auVar82._8_8_,uVar144),local_364._3_1_);
          auVar81._6_10_ = Var13;
          auVar81[5] = uVar143;
          auVar81[4] = (char)((uint3)(undefined3)local_364 >> 0x10);
          auVar81._0_4_ = local_364;
          auVar19._2_12_ = auVar81._4_12_;
          auVar19[1] = uVar142;
          auVar19[0] = (char)((uint3)(undefined3)local_364 >> 8);
          uVar154 = CONCAT11(uVar141,(char)(undefined3)local_364);
          auVar80._2_14_ = auVar19;
          auVar91._0_12_ = auVar80._0_12_;
          auVar91._12_2_ = (short)Var13;
          auVar91._14_2_ = uVar5;
          auVar90._12_4_ = auVar91._12_4_;
          auVar90._0_10_ = auVar80._0_10_;
          auVar90._10_2_ = uVar4;
          auVar89._10_6_ = auVar90._10_6_;
          auVar89._0_8_ = auVar80._0_8_;
          auVar89._8_2_ = auVar81._4_2_;
          auVar20._4_8_ = auVar89._8_8_;
          auVar20._2_2_ = uVar3;
          auVar20._0_2_ = auVar19._0_2_;
          auVar50._0_4_ = CONCAT22(uVar2,uVar154);
          auVar50._4_12_ = auVar20;
          local_278 = (float)auVar48._0_4_ * 0.007874016;
          fStack_274 = (float)auVar48._4_4_ * 0.007874016;
          fStack_270 = (float)auVar48._8_4_ * 0.007874016;
          auVar49._0_4_ = -(uint)(0x7f < auVar50._0_4_);
          auVar49._4_4_ = -(uint)(0x7f < auVar20._0_4_);
          auVar49._8_4_ = -(uint)(0x7f < auVar89._8_4_);
          auVar49._12_4_ = -(uint)(0x7f < auVar90._12_4_);
          auVar50 = auVar49 & _DAT_144101760 | auVar50;
          auVar100._0_15_ = ZEXT415(local_360);
          auVar100[0xf] = uVar148;
          auVar99._14_2_ = auVar100._14_2_;
          auVar99._0_13_ = ZEXT413(local_360);
          auVar99[0xd] = uVar147;
          auVar98._13_3_ = auVar99._13_3_;
          auVar98._0_13_ = ZEXT413(local_360);
          auVar97._12_4_ = auVar98._12_4_;
          auVar97._4_7_ = 0;
          auVar97._0_4_ = local_360;
          auVar97[0xb] = uVar146;
          auVar96._11_5_ = auVar97._11_5_;
          auVar96._4_7_ = 0;
          auVar96._0_4_ = local_360;
          auVar95._10_6_ = auVar96._10_6_;
          auVar95._4_5_ = 0;
          auVar95._0_4_ = local_360;
          auVar95[9] = uVar145;
          auVar94._9_7_ = auVar95._9_7_;
          auVar94._4_5_ = 0;
          auVar94._0_4_ = local_360;
          Var13 = CONCAT91(CONCAT81(auVar94._8_8_,uVar144),local_360._3_1_);
          auVar93._6_10_ = Var13;
          auVar93[5] = uVar143;
          auVar93[4] = (char)((uint3)(undefined3)local_360 >> 0x10);
          auVar93._0_4_ = local_360;
          auVar21._2_12_ = auVar93._4_12_;
          auVar21[1] = uVar142;
          auVar21[0] = (char)((uint3)(undefined3)local_360 >> 8);
          uVar155 = CONCAT11(uVar141,(char)(undefined3)local_360);
          auVar92._2_14_ = auVar21;
          local_288 = (float)auVar50._0_4_ * 0.007874016;
          fStack_284 = (float)auVar50._4_4_ * 0.007874016;
          fStack_280 = (float)auVar50._8_4_ * 0.007874016;
          auVar103._0_12_ = auVar92._0_12_;
          auVar103._12_2_ = (short)Var13;
          auVar103._14_2_ = uVar5;
          auVar102._12_4_ = auVar103._12_4_;
          auVar102._0_10_ = auVar92._0_10_;
          auVar102._10_2_ = uVar4;
          auVar101._10_6_ = auVar102._10_6_;
          auVar101._0_8_ = auVar92._0_8_;
          auVar101._8_2_ = auVar93._4_2_;
          auVar22._4_8_ = auVar101._8_8_;
          auVar22._2_2_ = uVar3;
          auVar22._0_2_ = auVar21._0_2_;
          auVar52._0_4_ = CONCAT22(uVar2,uVar155);
          auVar52._4_12_ = auVar22;
          auVar51._0_4_ = -(uint)(0x7f < auVar52._0_4_);
          auVar51._4_4_ = -(uint)(0x7f < auVar22._0_4_);
          auVar51._8_4_ = -(uint)(0x7f < auVar101._8_4_);
          auVar51._12_4_ = -(uint)(0x7f < auVar102._12_4_);
          auVar52 = auVar51 & _DAT_144101760 | auVar52;
          local_298 = (float)auVar52._0_4_ * 0.007874016;
          fStack_294 = (float)auVar52._4_4_ * 0.007874016;
          fStack_290 = (float)auVar52._8_4_ * 0.007874016;
          local_268 = 0;
          uStack_260 = 0x3f80000000000000;
          fVar113 = (float)FMatrix::Determinant(&local_298);
          if (0.0 <= fVar113) {
            fVar113 = 1.0;
          }
          else {
            fVar113 = -1.0;
          }
          uVar23 = 0x7f;
          if (fVar113 < 0.0) {
            uVar23 = 0x81;
          }
          iVar39 = iVar39 + 1;
          *(undefined1 *)(lVar29 + 0x53 + lVar25) = uVar23;
          *(float *)(lVar29 + 0xc + lVar25) = (1.0 / (float)param_4) * (float)local_354;
          pfVar1 = pfVar26 + 2;
          pfVar26 = pfVar26 + 0x17;
          *(float *)(lVar29 + 0x10 + lVar25) = *pfVar1;
          uVar38 = uVar38 - 1;
        } while (uVar38 != 0);
        uVar141 = DAT_146b08ba0;
        uVar142 = DAT_146b08ba0._1_1_;
        uVar143 = DAT_146b08ba0._2_1_;
        uVar144 = DAT_146b08ba0._3_1_;
        uVar145 = DAT_146b08ba0._4_1_;
        uVar146 = DAT_146b08ba0._5_1_;
        uVar147 = DAT_146b08ba0._6_1_;
        uVar148 = DAT_146b08ba0._7_1_;
        uVar149 = DAT_146b08ba0._8_4_;
        uVar38 = local_2f0;
        fVar113 = local_188;
        fVar112 = fStack_184;
        fVar109 = fStack_180;
      }
      local_354 = local_354 + 1;
      local_350 = local_350 + iVar40;
    } while (local_354 < param_4 + 1);
    uVar38 = (ulonglong)param_5;
  }
  iVar39 = 0;
  if (0 < (int)uVar27) {
    uVar33 = (ulonglong)uVar27;
    lVar30 = lVar25;
    do {
      FUN_14242c030(local_210,lVar30);
      lVar30 = lVar30 + 0x5c;
      uVar33 = uVar33 - 1;
    } while (uVar33 != 0);
  }
  if (0 < param_4) {
    do {
      iVar31 = iVar40 * iVar39;
      iVar39 = iVar39 + 1;
      if (0 < (int)uVar38) {
        uVar38 = (ulonglong)param_5;
        iVar36 = iVar40 * iVar39 - iVar31;
        do {
          iVar37 = iVar31 + 1;
          iVar35 = iVar36 + -1 + iVar37;
          FUN_14242bf10(local_210,iVar31,iVar35,iVar37);
          FUN_14242bf10(local_210,iVar35,iVar36 + iVar37,iVar37);
          uVar38 = uVar38 - 1;
          iVar31 = iVar37;
        } while (uVar38 != 0);
        uVar38 = (ulonglong)param_5;
      }
      lVar25 = local_218;
    } while (iVar39 < param_4);
  }
  FMemory::Free(lVar25);
  FMemory::Free(local_2a8);
  uStack_260._4_4_ = 1.0;
  fVar113 = *param_1;
  fVar112 = param_1[1];
  fVar109 = param_1[2];
  fVar119 = param_3[2];
  fVar115 = param_3[1];
  fVar117 = *param_3;
  pfVar26 = (float *)FRotationMatrix::FRotationMatrix(local_128,param_2);
  fVar110 = *pfVar26;
  fVar111 = pfVar26[1];
  fVar105 = pfVar26[2];
  fVar106 = pfVar26[3];
  fVar55 = pfVar26[4];
  fVar108 = pfVar26[5];
  fVar120 = pfVar26[6];
  fVar114 = pfVar26[7];
  fVar123 = pfVar26[8];
  fVar124 = pfVar26[9];
  fVar6 = pfVar26[10];
  fVar7 = pfVar26[0xb];
  fVar8 = pfVar26[0xc];
  fVar9 = pfVar26[0xd];
  fVar10 = pfVar26[0xe];
  fVar11 = pfVar26[0xf];
  fVar107 = fVar117 * fVar110 + fVar55 * 0.0 + fVar123 * 0.0 + fVar8 * 0.0;
  fVar54 = fVar117 * fVar111 + fVar108 * 0.0 + fVar124 * 0.0 + fVar9 * 0.0;
  fVar150 = fVar117 * fVar105 + fVar120 * 0.0 + fVar6 * 0.0 + fVar10 * 0.0;
  fVar151 = fVar117 * fVar106 + fVar114 * 0.0 + fVar7 * 0.0 + fVar11 * 0.0;
  fVar137 = fVar110 * 0.0 + fVar115 * fVar55 + fVar123 * 0.0 + fVar8 * 0.0;
  fVar138 = fVar111 * 0.0 + fVar115 * fVar108 + fVar124 * 0.0 + fVar9 * 0.0;
  fVar139 = fVar105 * 0.0 + fVar115 * fVar120 + fVar6 * 0.0 + fVar10 * 0.0;
  fVar140 = fVar106 * 0.0 + fVar115 * fVar114 + fVar7 * 0.0 + fVar11 * 0.0;
  fVar115 = fVar110 * 0.0 + fVar55 * 0.0 + fVar119 * fVar123 + fVar8 * 0.0;
  fVar117 = fVar111 * 0.0 + fVar108 * 0.0 + fVar119 * fVar124 + fVar9 * 0.0;
  fVar118 = fVar105 * 0.0 + fVar120 * 0.0 + fVar119 * fVar6 + fVar10 * 0.0;
  fVar119 = fVar106 * 0.0 + fVar114 * 0.0 + fVar119 * fVar7 + fVar11 * 0.0;
  fVar110 = fVar110 * 0.0 + fVar55 * 0.0 + fVar123 * 0.0 + fVar8 * 1.0;
  fVar111 = fVar111 * 0.0 + fVar108 * 0.0 + fVar124 * 0.0 + fVar9 * 1.0;
  fVar105 = fVar105 * 0.0 + fVar120 * 0.0 + fVar6 * 0.0 + fVar10 * 1.0;
  fVar106 = fVar106 * 0.0 + fVar114 * 0.0 + fVar7 * 0.0 + fVar11 * 1.0;
  local_298 = fVar54 * 0.0 + fVar107 * 1.0 + fVar150 * 0.0 + fVar151 * fVar113;
  fStack_294 = fVar54 * 1.0 + fVar107 * 0.0 + fVar150 * 0.0 + fVar151 * fVar112;
  fStack_290 = fVar54 * 0.0 + fVar107 * 0.0 + fVar150 * 1.0 + fVar151 * fVar109;
  fStack_28c = fVar54 * 0.0 + fVar107 * 0.0 + fVar150 * 0.0 + fVar151 * uStack_260._4_4_;
  local_288 = fVar138 * 0.0 + fVar137 * 1.0 + fVar139 * 0.0 + fVar140 * fVar113;
  fStack_284 = fVar138 * 1.0 + fVar137 * 0.0 + fVar139 * 0.0 + fVar140 * fVar112;
  fStack_280 = fVar138 * 0.0 + fVar137 * 0.0 + fVar139 * 1.0 + fVar140 * fVar109;
  fStack_27c = fVar138 * 0.0 + fVar137 * 0.0 + fVar139 * 0.0 + fVar140 * uStack_260._4_4_;
  local_278 = fVar117 * 0.0 + fVar115 * 1.0 + fVar118 * 0.0 + fVar119 * fVar113;
  fStack_274 = fVar117 * 1.0 + fVar115 * 0.0 + fVar118 * 0.0 + fVar119 * fVar112;
  fStack_270 = fVar117 * 0.0 + fVar115 * 0.0 + fVar118 * 1.0 + fVar119 * fVar109;
  fStack_26c = fVar117 * 0.0 + fVar115 * 0.0 + fVar118 * 0.0 + fVar119 * uStack_260._4_4_;
  local_268 = CONCAT44(fVar111 * 1.0 + fVar110 * 0.0 + fVar105 * 0.0 + fVar106 * fVar112,
                       fVar111 * 0.0 + fVar110 * 1.0 + fVar105 * 0.0 + fVar106 * fVar113);
  uStack_260 = CONCAT44(fVar111 * 0.0 + fVar110 * 0.0 + fVar105 * 0.0 + fVar106 * uStack_260._4_4_,
                        fVar111 * 0.0 + fVar110 * 0.0 + fVar105 * 1.0 + fVar106 * fVar109);
  FDynamicMeshBuilder::GetMesh
            (local_210,&local_298,param_8,param_9,param_10,0,param_13,param_11,param_12,param_14);
  FDynamicMeshBuilder::~FDynamicMeshBuilder(local_210);
  return;
}



// FUNCTION 14270d050 FUN_14270d050 body=217 status=ok
// SIG undefined FUN_14270d050(void)

undefined8 * FUN_14270d050(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  if (0 < *(int *)((longlong)param_1 + 0x51c)) {
    lVar2 = (**(code **)(*param_1 + 0x148))();
    lVar2 = *(longlong *)(lVar2 + 0x148);
    if (lVar2 != 0) {
      plVar1 = *(longlong **)(lVar2 + 0x470);
      for (plVar4 = plVar1; plVar4 != plVar1 + *(int *)(lVar2 + 0x478); plVar4 = plVar4 + 1) {
        if ((*plVar4 != 0) && (*(int *)(*plVar4 + 0x480) == *(int *)((longlong)param_1 + 0x51c))) {
          iVar3 = (int)((longlong)plVar4 - (longlong)plVar1 >> 3);
          if ((-1 < iVar3) && (iVar3 < *(int *)(lVar2 + 0x478))) {
            lVar2 = plVar1[iVar3];
            *param_2 = &PTR_FUN_143f73d18;
            param_2[1] = *(undefined8 *)(lVar2 + 0x4b8);
            lVar2 = *(longlong *)(lVar2 + 0x4c0);
            param_2[2] = lVar2;
            if (lVar2 != 0) {
              LOCK();
              *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
              UNLOCK();
            }
            goto LAB_14270d0c1;
          }
          break;
        }
      }
    }
  }
  param_2[1] = 0;
  param_2[2] = 0;
LAB_14270d0c1:
  *param_2 = &PTR_FUN_143f740c8;
  param_2[3] = 0;
  param_2[4] = 0;
  return param_2;
}



// FUNCTION 14270d130 FUN_14270d130 body=20 status=ok
// SIG undefined FUN_14270d130(void)

longlong FUN_14270d130(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x488);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x7b8);
  }
  return lVar1;
}



// FUNCTION 14270d150 FUN_14270d150 body=12 status=ok
// SIG undefined FUN_14270d150(void)

void FUN_14270d150(longlong param_1)

{
  UWeapon::GetStatusEffectOriginStats(param_1 + 0x3b0);
  return;
}



// FUNCTION 14270d160 GetPhysicsAngularVelocityInRadians body=68 status=ok
// SIG undefined GetPhysicsAngularVelocityInRadians(void)

undefined8 *
UPrimitiveComponent::GetPhysicsAngularVelocityInRadians
          (longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_3,1);
  if (lVar1 != 0) {
    FUN_142698f50(lVar1,param_2);
    return param_2;
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 14270d1b0 GetPhysicsAngularVelocityInRadians body=68 status=ok
// SIG undefined GetPhysicsAngularVelocityInRadians(void)

undefined8 *
UPrimitiveComponent::GetPhysicsAngularVelocityInRadians
          (longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_3,1);
  if (lVar1 != 0) {
    FUN_142699400(lVar1,param_2);
    return param_2;
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 14270d200 GetPhysicsLinearVelocityAtPoint body=84 status=ok
// SIG undefined GetPhysicsLinearVelocityAtPoint(void)

undefined8 *
UPrimitiveComponent::GetPhysicsLinearVelocityAtPoint
          (longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_4,1);
  if (lVar1 != 0) {
    FUN_142699510(lVar1,param_2,param_3);
    return param_2;
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 14270d260 FUN_14270d260 body=35 status=ok
// SIG undefined FUN_14270d260(void)

void FUN_14270d260(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = (**(code **)(*param_1 + 0x148))();
  FUN_142481360(uVar2,uVar1);
  return;
}



// FUNCTION 14270d290 FUN_14270d290 body=205 status=ok
// SIG undefined FUN_14270d290(void)

undefined8 FUN_14270d290(longlong *param_1,undefined8 param_2)

{
  void *_Src;
  bool bVar1;
  bool bVar2;
  void **ppvVar3;
  longlong lVar4;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  longlong local_18 [2];
  
  if ((*(byte *)((longlong)param_1 + 0x484) & 0x40) == 0) {
    local_20 = (int)param_1[0xa0];
    lVar4 = (longlong)local_20;
    _Src = (void *)param_1[0x9f];
    local_28 = (void *)0x0;
    if (local_20 == 0) {
      local_1c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
      _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar4 * 2);
    }
    ppvVar3 = &local_28;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    ppvVar3 = (void **)(**(code **)(*param_1 + 0x740))(param_1,local_18);
    bVar2 = true;
    bVar1 = false;
  }
  FString::FString(param_2,ppvVar3);
  if (bVar1) {
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar2) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14270d360 FUN_14270d360 body=33 status=ok
// SIG undefined FUN_14270d360(void)

undefined8 FUN_14270d360(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0x4f8);
  return param_2;
}



// FUNCTION 14270d390 FUN_14270d390 body=209 status=ok
// SIG undefined FUN_14270d390(void)

undefined8 * FUN_14270d390(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x508) == 0) {
LAB_14270d44a:
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  lVar2 = FUN_1429c30a0();
  plVar3 = *(longlong **)(param_1 + 0x508);
  if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_14270d44a;
  if (plVar3 != (longlong *)0x0) {
    lVar2 = FUN_1429c30a0();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14270d42a;
  }
  plVar3 = (longlong *)0x0;
LAB_14270d42a:
  (**(code **)(*plVar3 + 0x288))(plVar3,param_2,0);
  return param_2;
}



// FUNCTION 14270d470 FUN_14270d470 body=722 status=ok
// SIG undefined FUN_14270d470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14270d470(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_res20;
  undefined2 *local_38;
  undefined8 local_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  local_res20 = 0x142;
  cVar3 = FUN_1423d94f0(param_1,0x142);
  if (((cVar3 != '\0') && ((char)param_1[0x25] == '\x03')) &&
     (cVar3 = (**(code **)(*param_1 + 0x768))(param_1), cVar3 == '\0')) {
    *param_2 = param_1[0xb1];
    *(int *)(param_2 + 1) = (int)param_1[0xb2];
    *param_3 = *(undefined8 *)((longlong)param_1 + 0x594);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)((longlong)param_1 + 0x59c);
    return;
  }
  lVar6 = param_1[0xa5];
  if ((lVar6 == 0) || (*(float *)(lVar6 + 0x1e90) <= 0.0)) {
    lVar6 = (**(code **)(*param_1 + 0x758))(param_1);
    if (lVar6 == 0) {
      FUN_14046cc20(param_1,param_2,param_3);
      local_38 = (undefined2 *)0x0;
      local_30 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      FGenericPlatformString::Memcpy(local_38,&DAT_143f3edc8,10);
    }
    else {
      lVar1 = *(longlong *)(lVar6 + 0x168);
      if (lVar1 == 0) {
        local_38 = _DAT_1468b5d90;
        local_30._0_4_ = DAT_1468b5d98;
      }
      else {
        local_38 = *(undefined2 **)(lVar1 + 0x220);
        local_30._0_4_ = *(undefined4 *)(lVar1 + 0x228);
      }
      *param_2 = (longlong)local_38;
      *(int *)(param_2 + 1) = (int)local_30;
      lVar1 = *(longlong *)(lVar6 + 0x168);
      if (lVar1 == 0) {
        uVar9 = (undefined4)DAT_1468b5da0;
        uVar10 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        uVar5 = DAT_1468b5da8;
      }
      else {
        local_28 = *(float *)(lVar1 + 0x210);
        fStack_24 = *(float *)(lVar1 + 0x214);
        fStack_20 = *(float *)(lVar1 + 0x218);
        fStack_1c = *(float *)(lVar1 + 0x21c);
        auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_24);
        auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_28);
        auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_20);
        auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_1c);
        iVar4 = movmskps((int)local_30,auVar2);
        if (iVar4 != 0) {
          *(float *)(lVar1 + 0x250) = local_28;
          *(float *)(lVar1 + 0x254) = fStack_24;
          *(float *)(lVar1 + 600) = fStack_20;
          *(float *)(lVar1 + 0x25c) = fStack_1c;
          puVar7 = (undefined8 *)FQuat::Rotator(&local_28,&local_38);
          *(undefined8 *)(lVar1 + 0x260) = *puVar7;
          *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar7 + 1);
        }
        uVar9 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
        uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
        uVar5 = *(undefined4 *)(lVar1 + 0x268);
      }
      local_30 = CONCAT44(local_30._4_4_,uVar5);
      local_38 = (undefined2 *)CONCAT44(uVar10,uVar9);
      *param_3 = local_38;
      *(undefined4 *)(param_3 + 1) = uVar5;
      local_res20 = *(undefined8 *)(lVar6 + 0x18);
      FName::ToString(&local_res20,&local_38);
    }
    puVar8 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar8 = local_38;
    }
    FString::PrintfImpl(&local_28,
                        L"APlayerController::GetPlayerViewPoint: out_Location, ViewTarget=%s",puVar8
                       );
    if (CONCAT44(fStack_24,local_28) != 0) {
      FMemory::Free();
    }
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (lVar6 == 0) {
      local_38 = (undefined2 *)0x0;
      local_30 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      FGenericPlatformString::Memcpy(local_38,&DAT_143f3edc8,10);
    }
    else {
      local_res20 = *(undefined8 *)(lVar6 + 0x18);
      FName::ToString(&local_res20,&local_38);
    }
    puVar8 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar8 = local_38;
    }
    FString::PrintfImpl(&local_28,
                        L"APlayerController::GetPlayerViewPoint: out_Rotation, ViewTarget=%s",puVar8
                       );
    if (CONCAT44(fStack_24,local_28) != 0) {
      FMemory::Free();
    }
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    FUN_1426e1da0(lVar6,param_2,param_3);
  }
  return;
}



// FUNCTION 14270d7a0 GetRigidBodyState body=55 status=ok
// SIG undefined GetRigidBodyState(void)

void UPrimitiveComponent::GetRigidBodyState(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_3,1);
  if (lVar1 != 0) {
    FUN_142697f40(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 14270d7e0 FUN_14270d7e0 body=331 status=ok
// SIG undefined FUN_14270d7e0(void)

longlong * FUN_14270d7e0(longlong *param_1,longlong param_2,longlong *param_3,char param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)param_1[0x32];
  plVar4 = (longlong *)0x0;
  if (plVar5 != (longlong *)0x0) {
    lVar2 = FUN_1429f11d0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14270d84c;
  }
  plVar5 = (longlong *)0x0;
LAB_14270d84c:
  lVar2 = (**(code **)(*param_1 + 0x6d0))(param_1,param_2,0);
  if ((((lVar2 == 0) || (param_4 != '\0')) || (*(longlong *)(lVar2 + 200) != 0)) ||
     ((*(byte *)(lVar2 + 0x10) & 0x40) != 0)) {
    if (plVar5 == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      do {
        lVar2 = param_2;
        plVar4 = plVar5;
        param_2 = plVar4[0x33];
        lVar3 = (**(code **)(*plVar4 + 0x6d0))(plVar4,lVar2,0);
        if (((lVar3 == 0) || (*(longlong *)(lVar3 + 200) == 0)) ||
           (plVar5 = (longlong *)plVar4[0x32], plVar5 == (longlong *)0x0)) break;
        lVar3 = FUN_1429f11d0();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      } while (bVar1);
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = lVar2;
    }
  }
  else {
    plVar4 = (longlong *)0x0;
  }
  return plVar4;
}



// FUNCTION 14270d930 FUN_14270d930 body=132 status=ok
// SIG undefined FUN_14270d930(void)

void FUN_14270d930(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x520);
  if (lVar2 != 0) {
    iVar1 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
    }
    *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
  }
  iVar1 = (int)param_3[1];
  uVar3 = *(undefined8 *)(param_1 + 0x528);
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
  }
  *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = uVar3;
  return;
}



// FUNCTION 14270d9c0 FUN_14270d9c0 body=200 status=ok
// SIG undefined FUN_14270d9c0(void)

float * FUN_14270d9c0(float *param_1,undefined8 *param_2,char param_3,char param_4,char param_5)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = *param_2;
  uStack_10 = param_2[1];
  if (param_3 != '\0') {
    puVar1 = (undefined8 *)(DAT_146b17150 + 0x944);
    if (*(char *)(DAT_146b17150 + 0x954) == '\0') {
      puVar1 = (undefined8 *)(DAT_146b17150 + 0x914);
    }
    local_18 = *puVar1;
    uStack_10 = puVar1[1];
  }
  if (param_5 == '\0') {
    fVar3 = 1.0;
  }
  else {
    fVar3 = *(float *)(DAT_146b17150 + 0x990);
  }
  if (param_3 == '\0') {
    if (param_4 == '\0') {
      fVar2 = 0.0;
    }
    else {
      fVar2 = 0.15;
    }
  }
  else {
    fVar2 = 0.5;
  }
  fVar3 = _guard_xfg_dispatch_icall_nop(fVar2 * fVar3 + 0.5,2.2);
  *param_1 = fVar3 * (float)local_18;
  param_1[1] = fVar3 * local_18._4_4_;
  param_1[2] = fVar3 * (float)uStack_10;
  param_1[3] = uStack_10._4_4_;
  return param_1;
}



// FUNCTION 14270da90 GetSphereMesh body=130 status=ok
// SIG undefined GetSphereMesh(void)

void GetSphereMesh(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
                  undefined8 param_9)

{
  FUN_14270bf60(0x40490fdb,&DAT_1468b5da0,param_2,param_3,param_4,0,0x40490fdb,param_5,param_6,
                param_7,param_8,param_9,1,0);
  return;
}



// FUNCTION 14270db20 FUN_14270db20 body=123 status=ok
// SIG undefined FUN_14270db20(void)

void FUN_14270db20(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *param_2;
  *param_4 = uVar1;
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_2 + 1);
  lVar2 = (**(code **)(*param_1 + 0x6d0))(uVar1,0,1);
  if (lVar2 != 0) {
    FUN_142698df0(lVar2,param_2,param_3,param_4,0);
    return;
  }
  return;
}



// FUNCTION 14270dba0 GetViewSelectionColor body=166 status=ok
// SIG undefined GetViewSelectionColor(void)

float * GetViewSelectionColor
                  (float *param_1,undefined8 *param_2,undefined8 param_3,char param_4,char param_5,
                  char param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if (param_6 == '\0') {
    fVar4 = 1.0;
  }
  else {
    fVar4 = *(float *)(DAT_146b17150 + 0x990);
  }
  if (param_4 == '\0') {
    if (param_5 == '\0') {
      fVar3 = 0.0;
    }
    else {
      fVar3 = 0.15;
    }
  }
  else {
    fVar3 = 0.5;
  }
  fVar4 = _guard_xfg_dispatch_icall_nop(fVar3 * fVar4 + 0.5,2.2);
  fStack_10 = (float)uVar2;
  local_18 = (float)uVar1;
  fStack_14 = (float)((ulonglong)uVar1 >> 0x20);
  *param_1 = fVar4 * local_18;
  param_1[1] = fVar4 * fStack_14;
  param_1[2] = fVar4 * fStack_10;
  fStack_c = (float)((ulonglong)uVar2 >> 0x20);
  param_1[3] = fStack_c;
  return param_1;
}



// FUNCTION 14270dc70 FUN_14270dc70 body=146 status=ok
// SIG undefined FUN_14270dc70(void)

void FUN_14270dc70(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  float local_res8;
  float local_resc;
  
  *param_2 = 0;
  *param_3 = 0;
  lVar1 = *(longlong *)(param_1 + 0x508);
  if (lVar1 != 0) {
    lVar3 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(lVar1 + 0x70) != 0)) {
      FUN_142481d50(*(longlong *)(lVar1 + 0x70),&local_res8);
      *param_2 = (int)local_res8;
      *param_3 = (int)local_resc;
    }
  }
  return;
}



// FUNCTION 14270dd10 FUN_14270dd10 body=12 status=ok
// SIG undefined FUN_14270dd10(void)

void FUN_14270dd10(longlong param_1)

{
  FUN_1426999d0(param_1 + 0x3b0);
  return;
}



// FUNCTION 14270dd20 FUN_14270dd20 body=320 status=ok
// SIG undefined FUN_14270dd20(void)

void FUN_14270dd20(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
  }
  *(longlong *)(*param_2 + (longlong)iVar2 * 8) = param_1 + 0x3b0;
  iVar2 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar2);
  }
  *(undefined8 *)(*param_3 + (longlong)iVar2 * 8) = 0;
  plVar6 = *(longlong **)(param_1 + 0x1a0);
  plVar1 = plVar6 + *(int *)(param_1 + 0x1a8);
  for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
    plVar3 = (longlong *)*plVar6;
    if (plVar3 != (longlong *)0x0) {
      lVar5 = FUN_1429f11d0();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((bVar4) && (lVar5 = (**(code **)(*plVar3 + 0x6d0))(plVar3,0,0), lVar5 != 0)) &&
         ((*(longlong *)(lVar5 + 200) != 0 ||
          ((param_4 != '\0' && ((*(byte *)(lVar5 + 0x10) & 0x40) != 0)))))) {
        (**(code **)(*plVar3 + 0x720))(plVar3,param_2,param_3,param_4);
      }
    }
  }
  return;
}



// FUNCTION 14270de60 FUN_14270de60 body=371 status=ok
// SIG undefined FUN_14270de60(void)

void FUN_14270de60(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *local_18;
  int local_10;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if ((lVar4 != 0) && (2.0 < *(float *)(lVar4 + 0x790) || *(float *)(lVar4 + 0x790) == 2.0)) {
    uVar1 = *(uint *)((longlong)param_1 + 0x484);
    pcVar2 = *(code **)(*param_1 + 0x728);
    if ((uVar1 & 8) == 0) {
      uVar5 = 1;
      if ((uVar1 & 2) != 0) {
        uVar5 = 0x10;
      }
      *(uint *)((longlong)param_1 + 0x484) = uVar1 | 8;
      cVar3 = (*pcVar2)(param_1,0);
      if (cVar3 != '\0') {
        UWorld::GetPlayerControllerIterator(lVar4,&local_18);
        for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
          lVar4 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
          if (lVar4 != 0) {
            FUN_1429e0d40(lVar4,param_1[0x92],uVar5,param_1,0,0);
          }
        }
      }
    }
    else {
      cVar3 = (*pcVar2)(param_1,0);
      if (cVar3 != '\0') {
        UWorld::GetPlayerControllerIterator(lVar4,&local_18);
        for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
          lVar4 = FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
          if (lVar4 != 0) {
            FUN_1429e0d40(lVar4,param_1[0x92],2,param_1,0,0);
          }
        }
      }
    }
    return;
  }
  *(uint *)((longlong)param_1 + 0x484) = *(uint *)((longlong)param_1 + 0x484) | 8;
  return;
}



// FUNCTION 14270dfe0 FUN_14270dfe0 body=160 status=ok
// SIG undefined FUN_14270dfe0(void)

bool FUN_14270dfe0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = param_1[0xa1];
  if (lVar4 != 0) {
    lVar2 = FUN_1429c30a0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14270e046;
  }
  if (((DAT_146afeff8 == 0) || (*(longlong **)(DAT_146afeff8 + 0x30) != param_1)) ||
     (lVar4 = DAT_146afeff8, DAT_146afeff8 == 0)) {
    return true;
  }
LAB_14270e046:
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = UObjectBaseUtility::GetOutermost(uVar3);
  return *(longlong *)(lVar4 + 0x1888) == *(longlong *)(lVar2 + 0x18);
}



// FUNCTION 14270e080 Init body=285 status=ok
// SIG undefined Init(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FPoly::Init(undefined8 *param_1)

{
  undefined4 local_28;
  
  *param_1 = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 1) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0xc) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_1468b5d98;
  param_1[3] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 4) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x24) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x2c) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (*(int *)((longlong)param_1 + 0xfc) != 0) {
    FUN_14231bc50(param_1 + 6,0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  *(ulonglong *)((longlong)param_1 + 0x13c) = CONCAT44(0x41000000,local_28) & 0xfffffffffffffff0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0x3f80000000000000;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x3f8000003f800000;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x42000000;
  return;
}



// FUNCTION 14270e1a0 FUN_14270e1a0 body=109 status=ok
// SIG undefined FUN_14270e1a0(void)

void FUN_14270e1a0(longlong param_1,longlong param_2)

{
  void *_Dst;
  int iVar1;
  
  if (*(int *)(param_2 + 0x54) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_2 + 0x54);
    FPositionVertexBuffer::AllocateData(param_1,1);
    (**(code **)(**(longlong **)(param_1 + 0x40) + 8))
              (*(longlong **)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x54),0);
    if (*(int *)(param_1 + 0x54) == 0) {
      _Dst = (void *)0x0;
      iVar1 = 0;
    }
    else {
      _Dst = (void *)(**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))();
      iVar1 = *(int *)(param_1 + 0x54);
    }
    *(void **)(param_1 + 0x48) = _Dst;
    _guard_xfg_dispatch_icall_nop
              (_Dst,*(void **)(param_2 + 0x48),(ulonglong)(uint)(*(int *)(param_1 + 0x50) * iVar1));
  }
  return;
}



// FUNCTION 14270e210 FUN_14270e210 body=155 status=ok
// SIG undefined FUN_14270e210(void)

void FUN_14270e210(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  *(int *)(param_1 + 0x54) = (int)param_2[1];
  FPositionVertexBuffer::AllocateData(param_1,1);
  (**(code **)(**(longlong **)(param_1 + 0x40) + 8))
            (*(longlong **)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x54),0);
  uVar6 = 0;
  uVar2 = uVar6;
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))();
  }
  *(ulonglong *)(param_1 + 0x48) = uVar2;
  uVar2 = uVar6;
  if (0 < (int)param_2[1]) {
    do {
      lVar1 = *param_2;
      iVar4 = (int)uVar6;
      uVar5 = iVar4 + 1;
      uVar6 = (ulonglong)uVar5;
      puVar3 = (undefined8 *)
               ((ulonglong)(uint)(*(int *)(param_1 + 0x50) * iVar4) + *(longlong *)(param_1 + 0x48))
      ;
      *puVar3 = *(undefined8 *)(uVar2 + lVar1);
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(uVar2 + 8 + lVar1);
      uVar2 = uVar2 + 0x78;
    } while ((int)uVar5 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14270e2b0 Init body=77 status=ok
// SIG undefined Init(void)

void FPositionVertexBuffer::Init(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x54) = param_2;
  AllocateData(param_1,param_3);
  (**(code **)(**(longlong **)(param_1 + 0x40) + 8))
            (*(longlong **)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x54),0);
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))();
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    return;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 14270e300 FUN_14270e300 body=283 status=ok
// SIG undefined FUN_14270e300(void)

void FUN_14270e300(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong local_18;
  undefined8 local_10;
  
  uVar4 = 0;
  if (param_1[0xb7] == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar1 = FUN_1429ecea0();
    lVar2 = FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
    param_1[0xb7] = lVar2;
  }
  (**(code **)(*param_1 + 0xd90))(param_1);
  *(char *)((longlong)param_1 + 0x6c1) = (char)param_1[0xd8];
  *(undefined1 *)((longlong)param_1 + 0x6c3) = *(undefined1 *)((longlong)param_1 + 0x6c2);
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_142533210(*(undefined8 *)(lVar2 + 0x30),param_1);
  if (*(byte *)(param_1 + 0x25) < 3) {
    local_18 = 0;
    local_10 = 0;
    UWorld::GetMatineeActors(lVar2,&local_18);
    uVar5 = uVar4;
    if (0 < (int)local_10) {
      do {
        FUN_1424e45b0(*(undefined8 *)(uVar5 + local_18),param_1);
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        uVar5 = uVar5 + 8;
      } while ((int)uVar3 < (int)local_10);
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014270e414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xda8))(param_1);
  return;
}



// FUNCTION 14270e420 FUN_14270e420 body=354 status=ok
// SIG undefined FUN_14270e420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14270e420(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  longlong *local_50;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x40) + 0x38))();
  iVar2 = (**(code **)(*plVar5 + 8))(plVar5);
  if (iVar2 == 0) {
    return;
  }
  local_58 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_48 = 1;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_50 = plVar5;
  uVar3 = (**(code **)(*plVar5 + 8))(plVar5);
  local_70 = &local_58;
  local_78 = 0x201;
  (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_68,&DAT_146ab6e78,uVar3);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  if ((((DAT_146ab62cc < 0x1e) && ((0x25e2efcaU >> (DAT_146ab62cc & 0x1f) & 1) != 0)) ||
      ((DAT_146ab62cc < 0x1c &&
       (((0x8051000U >> (DAT_146ab62cc & 0x1f) & 1) != 0 &&
        (uVar4 = RHIGetShaderLanguageVersion(), uVar4 < 2)))))) &&
     (cVar1 = DoSkeletalMeshIndexBuffersNeedSRV(), cVar1 == '\0')) {
    return;
  }
  local_70 = (undefined8 *)CONCAT71(local_70._1_7_,0xd);
  local_78 = 4;
  (**(code **)(*DAT_146ab6358 + 0x4a8))
            (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  return;
}



// FUNCTION 14270e590 FUN_14270e590 body=859 status=ok
// SIG undefined FUN_14270e590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14270e590(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  DWORD DVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined1 local_118;
  undefined4 local_110;
  undefined4 local_108;
  int **local_100;
  longlong local_f8 [2];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ulonglong local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  int *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  wchar_t *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_e8 = *(undefined8 *)(param_1 + 0x4c);
  local_e0 = *(undefined4 *)(param_1 + 0x54);
  FUN_142700a30(param_1 + 0x58,&local_e8);
  local_d8 = *(undefined8 *)(param_1 + 0x84);
  local_d0 = *(undefined4 *)(param_1 + 0x8c);
  FUN_142700a30(param_1 + 0x90,&local_d8);
  uVar10 = 0;
  piVar11 = (int *)(param_1 + 0xcc);
  uVar12 = uVar10;
  do {
    local_c8 = *(ulonglong *)(param_1 + 0x84);
    if (piVar11[-1] != 0) {
      local_78 = piVar11 + -5;
      local_100 = &local_78;
      local_118 = (undefined1)piVar11[2];
      local_108 = 0x408;
      local_50 = L"VolumetricLightmap";
      local_110 = 1;
      local_70 = 0;
      local_68 = 1;
      local_64 = _DAT_1468b5d78;
      uStack_60 = uRam00000001468b5d7c;
      uStack_5c = uRam00000001468b5d80;
      uStack_58 = uRam00000001468b5d84;
      local_54 = 0;
      local_48 = 0;
      local_40 = 0;
      local_128 = (undefined4)(local_c8 >> 0x20);
      local_120 = *(undefined4 *)(param_1 + 0x8c);
      (**(code **)(*DAT_146ab6358 + 0x5f8))
                (DAT_146ab6358,local_f8,&DAT_146ab6e78,local_c8 & 0xffffffff);
      plVar1 = (longlong *)(piVar11 + 3);
      if (plVar1 != local_f8) {
        puVar4 = (undefined8 *)*plVar1;
        *plVar1 = local_f8[0];
        local_f8[0] = 0;
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar4 + 1);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            if ((*(char *)(puVar4 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(), cVar6 == '\0')))) {
              LOCK();
              bVar13 = *(int *)((longlong)puVar4 + 0xc) == 0;
              if (bVar13) {
                *(int *)((longlong)puVar4 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar13) {
                uVar7 = FLockFreeLinkPolicy::AllocLockFreeLink();
                uVar9 = uVar10;
                if (uVar7 != 0) {
                  uVar9 = (&DAT_1468a81f8)[uVar7 >> 0xe] + (ulonglong)(uVar7 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(uVar9 + 8) = puVar4;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar4)(puVar4,1);
            }
          }
        }
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_f8);
      lVar5 = DAT_146b08cc8;
      cVar6 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar8 = GetCurrentThreadId();
        uVar9 = 4;
        if (DVar8 == DAT_1468c21c0) goto LAB_14270e7bd;
      }
      else {
LAB_14270e7bd:
        uVar9 = uVar10;
      }
      if ((0 < *(int *)(uVar9 + lVar5)) && (piVar11[-1] = 0, *piVar11 != 0)) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(piVar11 + -3,0);
      }
    }
    uVar7 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar7;
    piVar11 = piVar11 + 10;
    if (5 < uVar7) {
      local_b8 = *(undefined8 *)(param_1 + 0x84);
      local_b0 = *(undefined4 *)(param_1 + 0x8c);
      FUN_142700a30(param_1 + 0x1a8,&local_b8);
      do {
        local_a0 = *(undefined4 *)(param_1 + 0x8c);
        local_a8 = *(undefined8 *)(param_1 + 0x84);
        FUN_142700a30(param_1 + ((longlong)(int)uVar10 * 5 + 0x3a) * 8,&local_a8);
        uVar7 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar7;
      } while (uVar7 < 6);
      if (0 < *(int *)(param_1 + 0x2d0)) {
        local_98 = *(undefined8 *)(param_1 + 0x84);
        local_90 = *(undefined4 *)(param_1 + 0x8c);
        FUN_142700a30(param_1 + 0x2c0,&local_98);
      }
      local_88 = *(undefined8 *)(param_1 + 0x84);
      local_80 = *(undefined4 *)(param_1 + 0x8c);
      FUN_142700a30(param_1 + 0x2e8,&local_88);
      return;
    }
  } while( true );
}



// FUNCTION 14270e8f0 FUN_14270e8f0 body=204 status=ok
// SIG undefined FUN_14270e8f0(void)

undefined1
FUN_14270e8f0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  uVar5 = 0;
  lVar6 = *(longlong *)(param_1 + 0x5b8);
  if (lVar6 != 0) {
    local_28 = *param_2;
    local_20 = param_2[1];
    local_18 = param_2[2];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
      lVar6 = *(longlong *)(param_1 + 0x5b8);
    }
    uVar5 = FUN_1428afd00(lVar6,&local_28,param_3,param_4,param_5,param_6);
  }
  plVar4 = (longlong *)param_2[2];
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
    return uVar5;
  }
  return uVar5;
}



// FUNCTION 14270e9c0 FUN_14270e9c0 body=746 status=ok
// SIG undefined FUN_14270e9c0(void)

undefined1
FUN_14270e9c0(longlong param_1,longlong *param_2,int param_3,undefined4 param_4,undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar11;
  undefined8 local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [12];
  undefined4 local_9c;
  undefined1 local_34 [44];
  
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  if (((*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0) &&
      (puVar5 = (undefined8 *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xe8))(),
      puVar5 != (undefined8 *)0x0)) &&
     (cVar3 = (**(code **)*puVar5)
                        (puVar5,*(undefined8 *)(param_1 + 0x5b8),param_2,param_3,
                         CONCAT44(uVar11,param_4),param_5), cVar3 != '\0')) {
    FKey::~FKey(param_2);
    return 1;
  }
  plVar7 = *(longlong **)(param_1 + 0x5b8);
  uVar4 = 0;
  if (plVar7 != (longlong *)0x0) {
    local_f0 = *param_2;
    local_e8 = param_2[1];
    local_e0 = param_2[2];
    if (local_e0 != 0) {
      LOCK();
      *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(param_1 + 0x5b8);
    }
    uVar4 = (**(code **)(*plVar7 + 0x278))(plVar7,&local_f0,param_3,param_4,param_5);
    if ((*(byte *)(param_1 + 0x6a8) & 2) != 0) {
      plVar9 = *(longlong **)(param_1 + 0x6b0);
      plVar7 = plVar9 + (longlong)*(int *)(param_1 + 0x6b8) * 3;
      if (plVar9 != plVar7) {
        plVar10 = plVar9;
        do {
          if (*plVar10 == *param_2) goto LAB_14270eb13;
          plVar10 = plVar10 + 3;
        } while (plVar10 != plVar7);
        for (; plVar9 != plVar7; plVar9 = plVar9 + 3) {
          if (*plVar9 == DAT_1469e97d8) goto LAB_14270eb13;
        }
      }
    }
  }
  goto LAB_14270ec13;
LAB_14270eb13:
  if ((*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x70) == 0) ||
     (cVar3 = FUN_142480f40(), cVar3 == '\0')) goto LAB_14270ec13;
  lVar6 = 0;
  if ((*(byte *)(param_1 + 0x6a8) & 8) == 0) {
    _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
    local_9c = 0x3f800000;
    cVar3 = FUN_14270a0a0(param_1,local_f8,*(undefined1 *)(param_1 + 0x6c3),1,local_a8);
    if (cVar3 != '\0') {
      puVar8 = local_34;
      goto LAB_14270eba4;
    }
  }
  else {
    puVar8 = (undefined1 *)(param_1 + 0x6d0);
LAB_14270eba4:
    lVar6 = FWeakObjectPtr::Get(puVar8);
  }
  if (((*(longlong *)(param_1 + 0x520) == 0) ||
      (cVar3 = FUN_14250b500(*(longlong *)(param_1 + 0x520),local_f8,param_3), cVar3 == '\0')) &&
     (lVar6 != 0)) {
    if (param_3 == 0) {
LAB_14270ebe0:
      local_c0 = *param_2;
      local_b8 = param_2[1];
      local_b0 = param_2[2];
      if (local_b0 != 0) {
        LOCK();
        *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
        UNLOCK();
      }
      FUN_142389190(lVar6,&local_c0);
    }
    else if (param_3 == 1) {
      local_d8 = *param_2;
      local_d0 = param_2[1];
      local_c8 = param_2[2];
      if (local_c8 != 0) {
        LOCK();
        *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
        UNLOCK();
      }
      FUN_142389670(lVar6,&local_d8);
    }
    else if (param_3 == 3) goto LAB_14270ebe0;
  }
  uVar4 = 1;
LAB_14270ec13:
  plVar7 = (longlong *)param_2[2];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar7 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return uVar4;
}



// FUNCTION 14270ecd0 FUN_14270ecd0 body=565 status=ok
// SIG undefined FUN_14270ecd0(void)

undefined1
FUN_14270ecd0(longlong param_1,uint param_2,int param_3,undefined8 *param_4,undefined4 param_5,
             undefined8 param_6,undefined4 param_7)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 in_stack_ffffffffffffff30;
  undefined4 uVar9;
  undefined1 local_b8 [12];
  undefined4 local_ac;
  undefined1 local_44 [28];
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  uVar8 = (ulonglong)param_2;
  if (((*(longlong **)(DAT_146b17150 + 0xac8) == (longlong *)0x0) ||
      (plVar5 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xe8))(),
      plVar5 == (longlong *)0x0)) ||
     (cVar2 = (**(code **)(*plVar5 + 8))
                        (plVar5,uVar8,param_3,param_4,param_6,CONCAT44(uVar9,param_7)),
     cVar2 == '\0')) {
    uVar3 = 0;
    if ((*(longlong *)(param_1 + 0x5b8) != 0) &&
       (uVar3 = FUN_1428b1950(*(longlong *)(param_1 + 0x5b8),uVar8,param_3,param_4,param_5,param_6,
                              param_7), (*(byte *)(param_1 + 0x6a8) & 0x14) != 0)) {
      _guard_xfg_dispatch_icall_nop(local_b8,0,0x90);
      local_ac = 0x3f800000;
      cVar2 = FUN_14270a0a0(param_1,*param_4,*(undefined1 *)(param_1 + 0x6c3),1,local_b8);
      lVar1 = param_1 + (uVar8 + 0xdb) * 8;
      lVar6 = FWeakObjectPtr::Get(lVar1);
      lVar7 = 0;
      if (cVar2 != '\0') {
        lVar7 = FWeakObjectPtr::Get(local_44);
      }
      if (((*(longlong *)(param_1 + 0x520) != 0) && ((param_3 == 0 || (param_3 == 3)))) &&
         (cVar2 = FUN_14250b500(*(longlong *)(param_1 + 0x520),*param_4,param_3 != 0), cVar2 != '\0'
         )) {
        lVar7 = 0;
      }
      if (param_3 == 0) {
        uVar4 = *(uint *)(param_1 + 0x6a8);
        if (((uVar4 & 4) != 0) && (lVar7 != 0)) {
          FUN_1423894d0(lVar7,uVar8);
          uVar4 = *(uint *)(param_1 + 0x6a8);
        }
        if ((uVar4 & 0x10) == 0) {
          return uVar3;
        }
        FUN_1423899b0(uVar8,lVar6,lVar7);
      }
      else {
        if (param_3 != 3) {
          return uVar3;
        }
        uVar4 = *(uint *)(param_1 + 0x6a8);
        if (((uVar4 & 4) != 0) && (lVar7 != 0)) {
          FUN_1423895a0(lVar7,param_2);
          uVar4 = *(uint *)(param_1 + 0x6a8);
        }
        if ((uVar4 & 0x10) == 0) {
          return uVar3;
        }
        if ((lVar6 != lVar7) && (lVar6 != 0)) {
          FUN_1423899b0(param_2,lVar6,lVar7);
        }
        FUN_1423899b0(uVar8,lVar7,0);
        lVar7 = 0;
      }
      FWeakObjectPtr::operator=(lVar1,lVar7);
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 14270ef10 FUN_14270ef10 body=186 status=ok
// SIG undefined FUN_14270ef10(void)

void FUN_14270ef10(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  lVar1 = param_1 + 0x30;
  iVar3 = *(int *)(param_1 + 0xf8);
  *(int *)(param_1 + 0xf8) = iVar3 + 1;
  if (*(int *)(param_1 + 0xfc) < iVar3 + 1) {
    TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(lVar1,iVar3);
  }
  lVar2 = (longlong)param_2 * 0xc;
  lVar5 = *(longlong *)(param_1 + 0xf0);
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    lVar5 = lVar1;
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(lVar5 + lVar2 + 0xc),(void *)(lVar5 + lVar2),(longlong)(iVar3 - param_2) * 0xc
            );
  lVar5 = *(longlong *)(param_1 + 0xf0);
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    lVar5 = lVar1;
  }
  uVar4 = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(lVar5 + lVar2) = *param_3;
  *(undefined4 *)(lVar5 + 8 + lVar2) = uVar4;
  return;
}



// FUNCTION 14270efd0 FUN_14270efd0 body=1546 status=ok
// SIG undefined FUN_14270efd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14270efd0(longlong param_1,float *param_2,int *param_3,int *param_4,int *param_5,
                  longlong *param_6,longlong *param_7,longlong *param_8)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
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
  undefined1 auStack_1b18 [32];
  int local_1af8;
  longlong *local_1af0;
  longlong *local_1ad8;
  float local_1ac8;
  float fStack_1ac4;
  float fStack_1ac0;
  float fStack_1abc;
  undefined8 local_1ab8;
  undefined8 uStack_1ab0;
  int local_1aa8;
  undefined8 local_1a28;
  undefined8 uStack_1a20;
  undefined8 local_1a18;
  undefined8 uStack_1a10;
  longlong *local_1a08;
  longlong local_19f8;
  longlong lStack_19f0;
  longlong local_19e8;
  longlong lStack_19e0;
  longlong local_19d8;
  longlong lStack_19d0;
  longlong local_108;
  undefined8 local_f8;
  longlong *local_e8;
  int local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1b18;
  local_1ad8 = param_8;
  local_1af0 = param_7;
  if (**(char **)(param_1 + 0x10) != '\0') {
    uVar26 = *(undefined8 *)(param_2 + 4);
    uVar27 = *(undefined8 *)(param_2 + 6);
    fStack_1abc = param_2[3];
    fVar37 = param_2[2] - *(float *)(param_1 + 0x30);
    fVar39 = param_2[1] - *(float *)(param_1 + 0x2c);
    fVar36 = *param_2 - *(float *)(param_1 + 0x28);
    local_1ac8 = fVar36;
    fStack_1ac4 = fVar39;
    fStack_1ac0 = fVar37;
    local_1ab8 = uVar26;
    uStack_1ab0 = uVar27;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b08ef0) &&
       (_Init_thread_header(&DAT_146b08ef0), DAT_146b08ef0 == -1)) {
      atexit((_func_5014 *)&LAB_143eb7c90);
      _Init_thread_footer(&DAT_146b08ef0);
    }
    iVar29 = 0;
    DAT_146b08ee8 = 0;
    if (DAT_146b08eec < 100) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b08ee0,100);
    }
    local_1a08 = *(longlong **)(param_1 + 0x20);
    local_1a28 = CONCAT44(fStack_1ac4,local_1ac8);
    uStack_1a20 = CONCAT44(fStack_1abc,fStack_1ac0);
    local_19f8 = local_1a08[0xc];
    lStack_19f0 = local_1a08[0xd];
    local_19e8 = local_1a08[0xe];
    lStack_19e0 = local_1a08[0xf];
    local_19d8 = local_1a08[0x10];
    lStack_19d0 = local_1a08[0x11];
    local_108 = 0;
    local_f8 = 0;
    local_e0 = 0;
    local_1a18 = uVar26;
    uStack_1a10 = uVar27;
    local_e8 = local_1a08;
    TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
    TConstElementBoxIterator<TInlineAllocator<99,FDefaultAllocator>_>::ProcessChildren(&local_1a28);
    FUN_1426fa670(&local_1a28);
    iVar5 = DAT_146b08ee8;
    while (local_1a08 != (longlong *)0x0) {
      lVar28 = (longlong)local_e0;
      lVar11 = *local_e8;
      DAT_146b08ee8 = iVar5 + 1;
      if (DAT_146b08eec < DAT_146b08ee8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b08ee0,iVar5);
      }
      *(longlong *)(DAT_146b08ee0 + (longlong)iVar5 * 8) = lVar28 * 0x140 + lVar11;
      local_e0 = local_e0 + 1;
      FUN_1426fa670(&local_1a28);
      iVar5 = DAT_146b08ee8;
      param_7 = local_1af0;
    }
    DAT_146b08ee8 = iVar5;
    if (local_108 != 0) {
      FMemory::Free();
    }
    iVar5 = param_5[2];
    iVar6 = param_4[1];
    local_1af8 = 0;
    iVar7 = param_5[1];
    iVar8 = *param_4;
    iVar9 = *param_5;
    if (0 < DAT_146b08ee8) {
      local_1af0 = (longlong *)0x0;
      iVar31 = DAT_146b08ee8;
      do {
        pfVar12 = *(float **)((longlong)local_1af0 + DAT_146b08ee0);
        fVar3 = *pfVar12;
        fVar41 = (fVar37 - (float)uStack_1ab0) - pfVar12[2];
        fVar38 = pfVar12[3] * pfVar12[3];
        local_1aa8 = (int)*(undefined8 *)param_3;
        iVar10 = param_3[2];
        fVar42 = local_1ab8._4_4_ / (float)(int)((ulonglong)*(undefined8 *)param_3 >> 0x20);
        fVar4 = pfVar12[1];
        iVar32 = iVar29;
        if (0 < param_3[2]) {
          do {
            fVar40 = (fVar39 - local_1ab8._4_4_) - fVar4;
            iVar31 = iVar29;
            if (0 < param_3[1]) {
              do {
                if (0 < *param_3) {
                  fVar35 = (fVar36 - (float)local_1ab8) - fVar3;
                  iVar30 = iVar29;
                  do {
                    fVar33 = fVar35 * fVar35 + fVar40 * fVar40 + fVar41 * fVar41;
                    if (fVar33 < fVar38) {
                      fVar13 = pfVar12[5];
                      fVar14 = pfVar12[6];
                      fVar15 = pfVar12[7];
                      fVar16 = pfVar12[0x10];
                      fVar17 = pfVar12[0x11];
                      fVar18 = pfVar12[0x12];
                      fVar19 = pfVar12[0x13];
                      fVar20 = pfVar12[0x1c];
                      fVar21 = pfVar12[0x1d];
                      fVar22 = pfVar12[0x1e];
                      fVar23 = pfVar12[0x1f];
                      fVar34 = fVar33 * (-1.0 / (fVar38 * fVar38)) + 1.0 / fVar38;
                      lVar28 = (longlong)
                               ((param_4[1] * iVar32 + iVar31) * *param_4 + iVar30 +
                               (iVar5 * iVar6 + iVar7) * iVar8 + iVar9);
                      lVar11 = *param_7;
                      pfVar1 = (float *)(lVar11 + lVar28 * 0x30);
                      fVar33 = pfVar1[1];
                      fVar24 = pfVar1[2];
                      fVar25 = pfVar1[3];
                      pfVar2 = (float *)(lVar11 + lVar28 * 0x30);
                      *pfVar2 = *pfVar1 + pfVar12[4] * fVar34;
                      pfVar2[1] = fVar33 + fVar13 * fVar34;
                      pfVar2[2] = fVar24 + fVar14 * fVar34;
                      pfVar2[3] = fVar25 + fVar15 * fVar34;
                      pfVar1 = (float *)(lVar11 + 0x10 + lVar28 * 0x30);
                      fVar33 = pfVar1[1];
                      fVar13 = pfVar1[2];
                      fVar14 = pfVar1[3];
                      pfVar2 = (float *)(lVar11 + 0x10 + lVar28 * 0x30);
                      *pfVar2 = *pfVar1 + fVar16 * fVar34;
                      pfVar2[1] = fVar33 + fVar17 * fVar34;
                      pfVar2[2] = fVar13 + fVar18 * fVar34;
                      pfVar2[3] = fVar14 + fVar19 * fVar34;
                      pfVar1 = (float *)(lVar11 + 0x20 + lVar28 * 0x30);
                      fVar33 = pfVar1[1];
                      fVar13 = pfVar1[2];
                      fVar14 = pfVar1[3];
                      pfVar2 = (float *)(lVar11 + 0x20 + lVar28 * 0x30);
                      *pfVar2 = *pfVar1 + fVar20 * fVar34;
                      pfVar2[1] = fVar33 + fVar21 * fVar34;
                      pfVar2[2] = fVar13 + fVar22 * fVar34;
                      pfVar2[3] = fVar14 + fVar23 * fVar34;
                      lVar11 = *local_1ad8;
                      fVar33 = pfVar12[0x29];
                      fVar13 = pfVar12[0x2a];
                      fVar14 = pfVar12[0x2b];
                      fVar15 = pfVar12[0x34];
                      fVar16 = pfVar12[0x35];
                      fVar17 = pfVar12[0x36];
                      fVar18 = pfVar12[0x37];
                      pfVar1 = (float *)(lVar11 + lVar28 * 0x30);
                      fVar19 = pfVar1[1];
                      fVar20 = pfVar1[2];
                      fVar21 = pfVar1[3];
                      fVar22 = pfVar12[0x40];
                      fVar23 = pfVar12[0x41];
                      fVar24 = pfVar12[0x42];
                      fVar25 = pfVar12[0x43];
                      pfVar2 = (float *)(lVar11 + lVar28 * 0x30);
                      *pfVar2 = *pfVar1 + pfVar12[0x28] * fVar34;
                      pfVar2[1] = fVar19 + fVar33 * fVar34;
                      pfVar2[2] = fVar20 + fVar13 * fVar34;
                      pfVar2[3] = fVar21 + fVar14 * fVar34;
                      pfVar1 = (float *)(lVar11 + 0x10 + lVar28 * 0x30);
                      fVar33 = pfVar1[1];
                      fVar13 = pfVar1[2];
                      fVar14 = pfVar1[3];
                      pfVar2 = (float *)(lVar11 + 0x10 + lVar28 * 0x30);
                      *pfVar2 = *pfVar1 + fVar15 * fVar34;
                      pfVar2[1] = fVar33 + fVar16 * fVar34;
                      pfVar2[2] = fVar13 + fVar17 * fVar34;
                      pfVar2[3] = fVar14 + fVar18 * fVar34;
                      pfVar1 = (float *)(lVar11 + 0x20 + lVar28 * 0x30);
                      fVar33 = pfVar1[1];
                      fVar13 = pfVar1[2];
                      fVar14 = pfVar1[3];
                      pfVar2 = (float *)(lVar11 + 0x20 + lVar28 * 0x30);
                      *pfVar2 = *pfVar1 + fVar22 * fVar34;
                      pfVar2[1] = fVar33 + fVar23 * fVar34;
                      pfVar2[2] = fVar13 + fVar24 * fVar34;
                      pfVar2[3] = fVar14 + fVar25 * fVar34;
                      *(float *)(*param_6 + lVar28 * 4) = fVar34 + *(float *)(*param_6 + lVar28 * 4)
                      ;
                    }
                    iVar30 = iVar30 + 1;
                    fVar35 = fVar35 + (float)local_1ab8 / (float)local_1aa8 +
                                      (float)local_1ab8 / (float)local_1aa8;
                  } while (iVar30 < *param_3);
                }
                iVar31 = iVar31 + 1;
                fVar40 = fVar40 + fVar42 + fVar42;
              } while (iVar31 < param_3[1]);
            }
            iVar32 = iVar32 + 1;
            fVar41 = fVar41 + (float)uStack_1ab0 / (float)iVar10 +
                              (float)uStack_1ab0 / (float)iVar10;
            iVar31 = DAT_146b08ee8;
          } while (iVar32 < param_3[2]);
        }
        local_1af8 = local_1af8 + 1;
        local_1af0 = (longlong *)((longlong)local_1af0 + 8);
      } while (local_1af8 < iVar31);
    }
  }
  return;
}



// FUNCTION 14270f5e0 FUN_14270f5e0 body=1928 status=ok
// SIG undefined FUN_14270f5e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14270f5e0(longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7)

{
  float *pfVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_1be8 [32];
  float local_1bc8;
  float *local_1bc0;
  undefined8 local_1bb8;
  undefined8 uStack_1bb0;
  undefined8 local_1ba8;
  ulonglong uStack_1ba0;
  undefined8 local_1b98;
  undefined8 uStack_1b90;
  undefined8 local_1b88;
  undefined8 uStack_1b80;
  undefined8 local_1b78;
  undefined8 uStack_1b70;
  undefined8 local_1b68;
  undefined8 uStack_1b60;
  undefined8 local_1b58;
  undefined8 uStack_1b50;
  undefined8 local_1b48;
  undefined8 uStack_1b40;
  undefined8 local_1b38;
  undefined8 uStack_1b30;
  undefined8 local_1b28;
  undefined8 uStack_1b20;
  undefined8 local_1b18;
  undefined8 uStack_1b10;
  undefined8 local_1b08;
  undefined8 uStack_1b00;
  undefined8 local_1af8;
  undefined8 uStack_1af0;
  undefined8 local_1ae8;
  undefined8 uStack_1ae0;
  undefined8 local_1ad8;
  undefined8 uStack_1ad0;
  undefined8 local_1ac8;
  undefined8 uStack_1ac0;
  undefined8 local_1ab8;
  undefined8 uStack_1ab0;
  undefined8 local_1aa8;
  undefined8 uStack_1aa0;
  undefined8 local_1a98;
  undefined8 uStack_1a90;
  undefined8 local_1a88;
  undefined8 uStack_1a80;
  undefined8 local_1a78;
  undefined8 uStack_1a70;
  undefined8 local_1a68;
  undefined8 uStack_1a60;
  undefined8 local_1a58;
  ulonglong uStack_1a50;
  undefined8 local_1a48;
  undefined8 uStack_1a40;
  undefined8 local_1a38;
  undefined8 uStack_1a30;
  undefined8 local_1a28;
  undefined8 uStack_1a20;
  undefined8 local_1a18;
  undefined8 uStack_1a10;
  float local_1a08;
  float fStack_1a04;
  float fStack_1a00;
  undefined4 uStack_19fc;
  undefined4 local_19f8;
  undefined4 uStack_19f4;
  uint uStack_19f0;
  undefined4 uStack_19ec;
  longlong *local_19e8;
  longlong local_19d8;
  longlong lStack_19d0;
  undefined4 local_19c8;
  undefined4 uStack_19c4;
  undefined4 uStack_19c0;
  undefined4 uStack_19bc;
  undefined4 local_19b8;
  undefined4 uStack_19b4;
  undefined4 uStack_19b0;
  undefined4 uStack_19ac;
  longlong local_e8;
  undefined8 local_d8;
  longlong *local_c8;
  int local_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_1be8;
  if (**(char **)(param_1 + 0x10) != '\0') {
    local_19e8 = *(longlong **)(param_1 + 0x20);
    fVar15 = *param_2 - *(float *)(param_1 + 0x28);
    fVar16 = param_2[1] - *(float *)(param_1 + 0x2c);
    fVar17 = param_2[2] - *(float *)(param_1 + 0x30);
    local_19f8 = DAT_1468b5d90;
    uStack_19f4 = DAT_1468b5d94;
    uStack_19f0 = DAT_1468b5d98;
    uStack_19ec = 0;
    local_1ba8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    uStack_1ba0 = (ulonglong)DAT_1468b5d98;
    uStack_19fc = 0;
    local_1bb8 = CONCAT44(fVar16,fVar15);
    uStack_1bb0 = (ulonglong)(uint)fVar17;
    local_19d8 = local_19e8[0xc];
    lStack_19d0 = local_19e8[0xd];
    local_19c8 = (undefined4)local_19e8[0xe];
    uStack_19c4 = *(undefined4 *)((longlong)local_19e8 + 0x74);
    uStack_19c0 = (undefined4)local_19e8[0xf];
    uStack_19bc = *(undefined4 *)((longlong)local_19e8 + 0x7c);
    local_19b8 = (undefined4)local_19e8[0x10];
    uStack_19b4 = *(undefined4 *)((longlong)local_19e8 + 0x84);
    uStack_19b0 = (undefined4)local_19e8[0x11];
    uStack_19ac = *(undefined4 *)((longlong)local_19e8 + 0x8c);
    local_e8 = 0;
    local_d8 = 0;
    local_c0 = 0;
    local_1bc0 = param_4;
    local_1a08 = fVar15;
    fStack_1a04 = fVar16;
    fStack_1a00 = fVar17;
    local_c8 = local_19e8;
    TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
    TConstElementBoxIterator<TInlineAllocator<99,FDefaultAllocator>_>::ProcessChildren(&local_1a08);
    FUN_1426fa670(&local_1a08);
    iVar6 = local_c0;
    while (local_c0 = iVar6, local_19e8 != (longlong *)0x0) {
      pfVar11 = (float *)((longlong)iVar6 * 0x140 + *local_c8);
      fVar14 = pfVar11[3] * pfVar11[3];
      fVar13 = (pfVar11[1] - fVar16) * (pfVar11[1] - fVar16) +
               (*pfVar11 - fVar15) * (*pfVar11 - fVar15) +
               (pfVar11[2] - fVar17) * (pfVar11[2] - fVar17);
      if (fVar13 < fVar14) {
        fVar14 = 1.0 / fVar14;
        pfVar8 = pfVar11 + 4;
        fVar14 = (1.0 - fVar14 * fVar13) * fVar14;
        local_1bc8 = fVar14;
        _guard_xfg_dispatch_icall_nop(&local_1a98,0,0x90);
        fVar13 = local_1bc8;
        local_1af8 = 0;
        uStack_1af0 = 0;
        lVar9 = 3;
        local_1ae8 = 0;
        uStack_1ae0 = 0;
        local_1ad8 = 0;
        uStack_1ad0 = 0;
        pfVar7 = pfVar8;
        do {
          fVar12 = pfVar7[1];
          fVar3 = pfVar7[2];
          fVar4 = pfVar7[3];
          pfVar1 = (float *)((longlong)pfVar7 + ((longlong)&local_1af8 - (longlong)pfVar8));
          *pfVar1 = *pfVar7 * local_1bc8;
          pfVar1[1] = fVar12 * local_1bc8;
          pfVar1[2] = fVar3 * local_1bc8;
          pfVar1[3] = fVar4 * local_1bc8;
          lVar9 = lVar9 + -1;
          pfVar7 = pfVar7 + 4;
        } while (lVar9 != 0);
        local_1a98 = local_1af8;
        uStack_1a90 = uStack_1af0;
        local_1bb8 = 0;
        lVar9 = 3;
        uStack_1bb0 = 0;
        local_1ba8 = 0;
        uStack_1ba0 = 0;
        local_1b98 = 0;
        uStack_1b90 = 0;
        local_1a78 = local_1ad8;
        uStack_1a70 = uStack_1ad0;
        local_1a88 = local_1ae8;
        uStack_1a80 = uStack_1ae0;
        pfVar7 = (float *)&local_1bb8;
        do {
          pfVar1 = (float *)((longlong)pfVar8 + (0x30 - (longlong)&local_1bb8) + (longlong)pfVar7);
          fVar12 = pfVar1[1];
          fVar3 = pfVar1[2];
          fVar4 = pfVar1[3];
          *pfVar7 = *pfVar1 * local_1bc8;
          pfVar7[1] = fVar12 * local_1bc8;
          pfVar7[2] = fVar3 * local_1bc8;
          pfVar7[3] = fVar4 * local_1bc8;
          lVar9 = lVar9 + -1;
          pfVar7 = pfVar7 + 4;
        } while (lVar9 != 0);
        local_1a68 = local_1bb8;
        uStack_1a60 = uStack_1bb0;
        lVar9 = 3;
        local_1b88 = 0;
        uStack_1b80 = 0;
        local_1b78 = 0;
        uStack_1b70 = 0;
        local_1b68 = 0;
        uStack_1b60 = 0;
        local_1a48 = local_1b98;
        uStack_1a40 = uStack_1b90;
        local_1a58 = local_1ba8;
        uStack_1a50 = uStack_1ba0;
        pfVar7 = (float *)&local_1b88;
        do {
          pfVar1 = (float *)((longlong)pfVar7 + (longlong)pfVar8 + (0x60 - (longlong)&local_1b88));
          fVar12 = pfVar1[1];
          fVar3 = pfVar1[2];
          fVar4 = pfVar1[3];
          *pfVar7 = *pfVar1 * local_1bc8;
          pfVar7[1] = fVar12 * local_1bc8;
          pfVar7[2] = fVar3 * local_1bc8;
          pfVar7[3] = fVar4 * local_1bc8;
          lVar9 = lVar9 + -1;
          pfVar7 = pfVar7 + 4;
        } while (lVar9 != 0);
        local_1a38 = local_1b88;
        uStack_1a30 = uStack_1b80;
        lVar9 = 3;
        local_1a18 = local_1b68;
        uStack_1a10 = uStack_1b60;
        local_1a28 = local_1b78;
        uStack_1a20 = uStack_1b70;
        pfVar8 = param_5;
        do {
          pfVar7 = (float *)(((longlong)&local_1a98 - (longlong)param_5) + (longlong)pfVar8);
          fVar12 = pfVar7[1];
          fVar3 = pfVar7[2];
          fVar4 = pfVar7[3];
          *pfVar8 = *pfVar7 + *pfVar8;
          pfVar8[1] = fVar12 + pfVar8[1];
          pfVar8[2] = fVar3 + pfVar8[2];
          pfVar8[3] = fVar4 + pfVar8[3];
          pfVar8 = pfVar8 + 4;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        pfVar8 = param_5 + 0xc;
        lVar9 = 3;
        lVar10 = (longlong)&local_1a68 - (longlong)pfVar8;
        do {
          pfVar7 = (float *)(lVar10 + (longlong)pfVar8);
          fVar12 = pfVar7[1];
          fVar3 = pfVar7[2];
          fVar4 = pfVar7[3];
          *pfVar8 = *pfVar7 + *pfVar8;
          pfVar8[1] = fVar12 + pfVar8[1];
          pfVar8[2] = fVar3 + pfVar8[2];
          pfVar8[3] = fVar4 + pfVar8[3];
          pfVar8 = pfVar8 + 4;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        pfVar8 = param_5 + 0x18;
        lVar9 = 3;
        lVar10 = (longlong)&local_1a38 - (longlong)pfVar8;
        do {
          pfVar7 = (float *)(lVar10 + (longlong)pfVar8);
          fVar12 = pfVar7[1];
          fVar3 = pfVar7[2];
          fVar4 = pfVar7[3];
          *pfVar8 = *pfVar7 + *pfVar8;
          pfVar8[1] = fVar12 + pfVar8[1];
          pfVar8[2] = fVar3 + pfVar8[2];
          pfVar8[3] = fVar4 + pfVar8[3];
          pfVar8 = pfVar8 + 4;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        pfVar7 = pfVar11 + 0x28;
        _guard_xfg_dispatch_icall_nop(&local_1a98,0,0x90);
        local_1ac8 = 0;
        uStack_1ac0 = 0;
        lVar9 = 3;
        local_1ab8 = 0;
        uStack_1ab0 = 0;
        local_1aa8 = 0;
        uStack_1aa0 = 0;
        pfVar8 = pfVar7;
        do {
          fVar12 = *pfVar8;
          fVar3 = pfVar8[1];
          fVar4 = pfVar8[2];
          fVar5 = pfVar8[3];
          pfVar8 = pfVar8 + 4;
          pfVar1 = (float *)(((longlong)&local_1ad8 - (longlong)pfVar7) + (longlong)pfVar8);
          *pfVar1 = fVar12 * fVar13;
          pfVar1[1] = fVar3 * fVar13;
          pfVar1[2] = fVar4 * fVar13;
          pfVar1[3] = fVar5 * fVar13;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        local_1a98 = local_1ac8;
        uStack_1a90 = uStack_1ac0;
        local_1b58 = 0;
        lVar9 = 3;
        uStack_1b50 = 0;
        local_1b48 = 0;
        uStack_1b40 = 0;
        local_1b38 = 0;
        uStack_1b30 = 0;
        local_1a78 = local_1aa8;
        uStack_1a70 = uStack_1aa0;
        local_1a88 = local_1ab8;
        uStack_1a80 = uStack_1ab0;
        pfVar8 = (float *)&local_1b58;
        do {
          pfVar1 = (float *)((longlong)pfVar7 + (0x30 - (longlong)&local_1b58) + (longlong)pfVar8);
          fVar12 = pfVar1[1];
          fVar3 = pfVar1[2];
          fVar4 = pfVar1[3];
          *pfVar8 = *pfVar1 * fVar13;
          pfVar8[1] = fVar12 * fVar13;
          pfVar8[2] = fVar3 * fVar13;
          pfVar8[3] = fVar4 * fVar13;
          lVar9 = lVar9 + -1;
          pfVar8 = pfVar8 + 4;
        } while (lVar9 != 0);
        local_1a68 = local_1b58;
        uStack_1a60 = uStack_1b50;
        lVar9 = 3;
        local_1b28 = 0;
        uStack_1b20 = 0;
        local_1b18 = 0;
        uStack_1b10 = 0;
        local_1b08 = 0;
        uStack_1b00 = 0;
        local_1a48 = local_1b38;
        uStack_1a40 = uStack_1b30;
        local_1a58 = local_1b48;
        uStack_1a50 = uStack_1b40;
        pfVar8 = (float *)&local_1b28;
        do {
          pfVar1 = (float *)((longlong)pfVar7 + (0x60 - (longlong)&local_1b28) + (longlong)pfVar8);
          fVar12 = pfVar1[1];
          fVar3 = pfVar1[2];
          fVar4 = pfVar1[3];
          *pfVar8 = *pfVar1 * fVar13;
          pfVar8[1] = fVar12 * fVar13;
          pfVar8[2] = fVar3 * fVar13;
          pfVar8[3] = fVar4 * fVar13;
          lVar9 = lVar9 + -1;
          pfVar8 = pfVar8 + 4;
        } while (lVar9 != 0);
        local_1a38 = local_1b28;
        uStack_1a30 = uStack_1b20;
        lVar9 = 3;
        local_1a18 = local_1b08;
        uStack_1a10 = uStack_1b00;
        local_1a28 = local_1b18;
        uStack_1a20 = uStack_1b10;
        pfVar8 = param_6;
        do {
          pfVar7 = (float *)(((longlong)&local_1a98 - (longlong)param_6) + (longlong)pfVar8);
          fVar13 = pfVar7[1];
          fVar12 = pfVar7[2];
          fVar3 = pfVar7[3];
          *pfVar8 = *pfVar7 + *pfVar8;
          pfVar8[1] = fVar13 + pfVar8[1];
          pfVar8[2] = fVar12 + pfVar8[2];
          pfVar8[3] = fVar3 + pfVar8[3];
          pfVar8 = pfVar8 + 4;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        pfVar8 = param_6 + 0xc;
        lVar9 = 3;
        lVar10 = (longlong)&local_1a68 - (longlong)pfVar8;
        do {
          pfVar7 = (float *)(lVar10 + (longlong)pfVar8);
          fVar13 = pfVar7[1];
          fVar12 = pfVar7[2];
          fVar3 = pfVar7[3];
          *pfVar8 = *pfVar7 + *pfVar8;
          pfVar8[1] = fVar13 + pfVar8[1];
          pfVar8[2] = fVar12 + pfVar8[2];
          pfVar8[3] = fVar3 + pfVar8[3];
          pfVar8 = pfVar8 + 4;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        pfVar8 = param_6 + 0x18;
        lVar9 = 3;
        lVar10 = (longlong)&local_1a38 - (longlong)pfVar8;
        do {
          pfVar7 = (float *)((longlong)pfVar8 + lVar10);
          fVar13 = pfVar7[1];
          fVar12 = pfVar7[2];
          fVar3 = pfVar7[3];
          *pfVar8 = *pfVar7 + *pfVar8;
          pfVar8[1] = fVar13 + pfVar8[1];
          pfVar8[2] = fVar12 + pfVar8[2];
          pfVar8[3] = fVar3 + pfVar8[3];
          pfVar8 = pfVar8 + 4;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        bVar2 = *(byte *)(pfVar11 + 0x4c);
        fVar13 = (float)*(byte *)((longlong)pfVar11 + 0x132) * 0.003921569;
        fVar12 = (float)*(byte *)((longlong)pfVar11 + 0x131) * 0.003921569;
        *param_7 = ((fVar13 + fVar13) - 1.0) * fVar14 + *param_7;
        param_7[1] = ((fVar12 + fVar12) - 1.0) * fVar14 + param_7[1];
        param_7[2] = (((float)bVar2 * 0.003921569 + (float)bVar2 * 0.003921569) - 1.0) * fVar14 +
                     param_7[2];
        *local_1bc0 = fVar14 * pfVar11[0x4d] + *local_1bc0;
        *param_3 = fVar14 + *param_3;
      }
      local_c0 = iVar6 + 1;
      FUN_1426fa670(&local_1a08);
      iVar6 = local_c0;
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14270fd70 FUN_14270fd70 body=316 status=ok
// SIG undefined FUN_14270fd70(void)

longlong FUN_14270fd70(longlong param_1,float *param_2)

{
  uint7 uVar2;
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    uVar2 = (uint7)((ulonglong)lVar1 >> 8);
    if ((((*(float *)(lVar1 + 0x60) + *(float *)(lVar1 + 0x70) < *param_2 - param_2[3]) ||
         (*param_2 + param_2[3] < *(float *)(lVar1 + 0x60) - *(float *)(lVar1 + 0x70))) ||
        (*(float *)(lVar1 + 100) + *(float *)(lVar1 + 0x74) < param_2[1] - param_2[4])) ||
       (((param_2[1] + param_2[4] < *(float *)(lVar1 + 100) - *(float *)(lVar1 + 0x74) ||
         (*(float *)(lVar1 + 0x68) + *(float *)(lVar1 + 0x78) < param_2[2] - param_2[5])) ||
        (param_2[2] + param_2[5] < *(float *)(lVar1 + 0x68) - *(float *)(lVar1 + 0x78))))) {
      lVar1 = (ulonglong)uVar2 << 8;
    }
    else {
      lVar1 = CONCAT71(uVar2,1);
    }
    return lVar1;
  }
  return 0;
}



// FUNCTION 14270feb0 FUN_14270feb0 body=50 status=ok
// SIG undefined FUN_14270feb0(void)

void FUN_14270feb0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
  if (lVar1 != 0) {
    FUN_14269c970(lVar1);
    return;
  }
  return;
}



// FUNCTION 14270ff10 FUN_14270ff10 body=62 status=ok
// SIG undefined FUN_14270ff10(void)

undefined8 FUN_14270ff10(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = *(undefined8 *)(param_1 + 0x768);
  uVar1 = AActor::GetWorldTimerManager();
  lVar2 = FTimerManager::FindTimer(uVar1,local_res8,0);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 1) != '\x02')) {
    return 1;
  }
  return 0;
}



// FUNCTION 14270ff50 FUN_14270ff50 body=52 status=ok
// SIG undefined FUN_14270ff50(void)

byte FUN_14270ff50(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
  if (lVar1 != 0) {
    return *(byte *)(lVar1 + 0x10) >> 5 & 1;
  }
  return 0;
}



// FUNCTION 14270ff90 FUN_14270ff90 body=250 status=ok
// SIG undefined FUN_14270ff90(void)

undefined8 FUN_14270ff90(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  bVar4 = false;
  bVar3 = false;
  if (param_2 != 0) {
    plVar7 = (longlong *)FUN_14247fef0(param_2,local_18);
    bVar4 = true;
    bVar3 = false;
    if (*plVar7 != 0) {
      puVar8 = (undefined8 *)FUN_14247fef0(param_2,local_28);
      bVar4 = true;
      bVar3 = true;
      cVar6 = (**(code **)(*(longlong *)*puVar8 + 0x1b0))();
      if (cVar6 != '\0') {
        uVar9 = 1;
        goto LAB_14270fff4;
      }
    }
  }
  uVar9 = 0;
LAB_14270fff4:
  if (bVar3) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_20 + 1;
      lVar5 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  }
  if ((bVar4) && (local_10 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_10 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  return uVar9;
}



// FUNCTION 142710090 FUN_142710090 body=183 status=ok
// SIG undefined FUN_142710090(void)

undefined1 FUN_142710090(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 uVar5;
  longlong lVar6;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  lVar6 = *(longlong *)(param_1 + 0x5b8);
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    local_28 = *param_2;
    local_20 = param_2[1];
    local_18 = param_2[2];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
      lVar6 = *(longlong *)(param_1 + 0x5b8);
    }
    uVar5 = FUN_1428b2680(lVar6,&local_28);
  }
  plVar4 = (longlong *)param_2[2];
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
    return uVar5;
  }
  return uVar5;
}



// FUNCTION 142710150 FUN_142710150 body=73 status=ok
// SIG undefined FUN_142710150(void)

undefined1 FUN_142710150(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x7c4) == '\0') {
    iVar1 = FUN_142235230();
    if (iVar1 == 1) {
      return 0;
    }
    if ((iVar1 != 3) && (iVar1 != 0)) {
      return *(undefined1 *)(param_1 + 0x7c4);
    }
    *(undefined1 *)(param_1 + 0x7c4) = 1;
  }
  return 1;
}



// FUNCTION 1427101a0 FUN_1427101a0 body=60 status=ok
// SIG undefined FUN_1427101a0(void)

byte FUN_1427101a0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)UInputSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return *(byte *)(lVar2 + 0x38) >> 3 & 1;
}



// FUNCTION 1427101e0 FUN_1427101e0 body=25 status=ok
// SIG undefined FUN_1427101e0(void)

bool FUN_1427101e0(void)

{
  longlong lVar1;
  
  lVar1 = AActor::GetWorldSettings();
  return *(longlong *)(lVar1 + 0x600) != 0;
}



// FUNCTION 142710200 FUN_142710200 body=211 status=ok
// SIG undefined FUN_142710200(void)

bool FUN_142710200(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  
  puVar4 = *(undefined8 **)(param_1 + 0x668);
  iVar9 = *(int *)(param_1 + 0x670);
  puVar10 = puVar4;
  do {
    if (puVar10 == puVar4 + (longlong)iVar9 * 2) {
      iVar9 = -1;
LAB_1427102a5:
      return iVar9 != -1;
    }
    plVar5 = (longlong *)puVar10[1];
    puVar6 = (undefined8 *)*puVar10;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    cVar8 = (**(code **)*puVar6)(puVar6,param_2);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if (cVar8 != '\0') {
      iVar9 = (int)((longlong)puVar10 - (longlong)puVar4 >> 4);
      goto LAB_1427102a5;
    }
    puVar10 = puVar10 + 2;
  } while( true );
}



// FUNCTION 1427102e0 IsPrimaryPlayer body=39 status=ok
// SIG undefined IsPrimaryPlayer(void)

undefined1 APlayerController::IsPrimaryPlayer(undefined8 param_1)

{
  char cVar1;
  int local_res10 [6];
  
  cVar1 = FUN_142710360(param_1,local_res10);
  if ((cVar1 != '\0') && (local_res10[0] != 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 142710310 IsSimulatingPhysics body=66 status=ok
// SIG undefined IsSimulatingPhysics(void)

undefined8 UPrimitiveComponent::IsSimulatingPhysics(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x6d0))(param_1,param_2,1);
  if (lVar2 != 0) {
    cVar1 = FUN_1426aaac0(lVar2);
    if (cVar1 != '\0') {
      cVar1 = FBodyInstance::IsValidBodyInstance(lVar2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142710360 FUN_142710360 body=504 status=ok
// SIG undefined FUN_142710360(void)

undefined8 FUN_142710360(longlong *param_1,uint *param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  
  if (param_2 != (uint *)0x0) {
    *param_2 = (uint)*(byte *)((longlong)param_1 + 0x644);
  }
  lVar8 = param_1[0xa1];
  if (lVar8 == 0) {
    return 0;
  }
  lVar2 = ULocalPlayer::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    if ((*(uint *)(lVar8 + 8) >> 4 & 1) == 0) {
      uVar9 = *(undefined8 *)(lVar8 + 0x20);
    }
    else {
      uVar9 = 0;
    }
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar4 = (longlong *)FUN_1428749e0(uVar9,uVar3);
    if ((int)plVar4[1] < 2) {
      return 0;
    }
    if (param_2 == (uint *)0x0) {
      return 1;
    }
    plVar7 = (longlong *)*plVar4;
    plVar6 = plVar7;
    do {
      if (plVar6 == plVar7 + (int)plVar4[1]) {
        uVar5 = 0xffffffff;
LAB_142710433:
        *param_2 = uVar5;
        return 1;
      }
      if (*plVar6 == lVar8) {
        uVar5 = (uint)((longlong)plVar6 - (longlong)plVar7 >> 3);
        goto LAB_142710433;
      }
      plVar6 = plVar6 + 1;
    } while( true );
  }
  lVar8 = param_1[0xa1];
  if (lVar8 != 0) {
    lVar2 = FUN_1429c30a0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14271049d;
  }
  lVar8 = 0;
LAB_14271049d:
  if (*(int *)(lVar8 + 0x50) < 1) {
    lVar2 = UIpConnection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
    if ((param_2 != (uint *)0x0) && (lVar2 = *(longlong *)(lVar8 + 0x1970), lVar2 != 0)) {
      plVar4 = *(longlong **)(lVar2 + 0x48);
      for (plVar7 = plVar4; plVar7 != plVar4 + *(int *)(lVar2 + 0x50); plVar7 = plVar7 + 1) {
        if (*plVar7 == lVar8) {
          *param_2 = (int)((longlong)plVar7 - (longlong)plVar4 >> 3) + 1;
          return 1;
        }
      }
      *param_2 = 0;
    }
  }
  else if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  return 1;
}



// FUNCTION 142710590 FUN_142710590 body=759 status=ok
// SIG undefined FUN_142710590(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_142710590(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
                  char param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  longlong param_9)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [72];
  longlong local_b0;
  longlong local_90;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b08f10) && (_Init_thread_header(&DAT_146b08f10), DAT_146b08f10 == -1))
  {
    FName::FName(&DAT_146b08f08,"KismetTraceComponent",1);
    _Init_thread_footer(&DAT_146b08f10);
  }
  local_148 = (undefined1 *)0x0;
  FUN_1422ffb20(local_f8,DAT_146b08f08,local_128,param_4);
  local_110 = *(undefined4 *)(param_3 + 1);
  local_148 = local_f8;
  local_118 = *param_3;
  uStack_100 = *(undefined4 *)(param_2 + 1);
  local_108 = *param_2;
  cVar1 = (**(code **)(*param_1 + 0x858))(param_1,param_9,&local_108,&local_118);
  if (cVar1 == '\0') {
    *param_6 = _DAT_1468b5d90;
    *(undefined4 *)(param_6 + 1) = DAT_1468b5d98;
    *param_7 = _DAT_1468b5d90;
    *(undefined4 *)(param_7 + 1) = DAT_1468b5d98;
    uVar2 = 0;
    local_118 = 0;
  }
  else {
    *param_6 = *(undefined8 *)(param_9 + 0x14);
    *(undefined4 *)(param_6 + 1) = *(undefined4 *)(param_9 + 0x1c);
    *param_7 = *(undefined8 *)(param_9 + 0x2c);
    *(undefined4 *)(param_7 + 1) = *(undefined4 *)(param_9 + 0x34);
    uVar2 = *(undefined8 *)(param_9 + 0x80);
  }
  *param_8 = uVar2;
  if (param_5 != '\0') {
    lVar3 = param_1[0x24];
    puVar4 = param_3;
    if (cVar1 != '\0') {
      puVar4 = param_6;
    }
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    local_108 = 0x3f0000003f800000;
    uStack_100 = 0;
    uStack_fc = 0x3f800000;
    local_138 = 0;
    local_140 = 0x40000000;
    local_148 = (undefined1 *)((ulonglong)local_148 & 0xffffffffffffff00);
    (**(code **)(**(longlong **)(lVar3 + 0x40) + 0x8e8))
              (*(longlong **)(lVar3 + 0x40),param_2,puVar4,&local_108);
    if (cVar1 != '\0') {
      lVar3 = param_1[0x24];
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      local_108 = 0x3f00000000000000;
      uStack_100 = 0x3f800000;
      uStack_fc = 0x3f800000;
      local_138 = 0;
      local_140 = 0x40000000;
      local_148 = (undefined1 *)((ulonglong)local_148 & 0xffffffffffffff00);
      (**(code **)(**(longlong **)(lVar3 + 0x40) + 0x8e8))
                (*(longlong **)(lVar3 + 0x40),param_6,param_3,&local_108);
    }
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  return cVar1;
}



// FUNCTION 142710890 LevelStreamingStatusChanged body=229 status=ok
// SIG undefined LevelStreamingStatusChanged(void)

void APlayerController::LevelStreamingStatusChanged
               (undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
               undefined1 param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined2 *local_20;
  int local_18;
  
  puVar2 = (undefined8 *)ULevelStreaming::GetWorldAssetPackageFName(param_2,local_28);
  local_38 = *puVar2;
  FName::ToString(&local_38,&local_20);
  lVar1 = *DAT_146b17150;
  uVar3 = FUN_1422325e0(param_1);
  (**(code **)(lVar1 + 0x400))(DAT_146b17150,uVar3,&local_20,0);
  puVar4 = &DAT_143f3eda8;
  if (local_18 != 0) {
    puVar4 = local_20;
  }
  FName::FName(&local_30,puVar4,1);
  if (local_20 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_1429e1490(param_1,local_30,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 142710980 FUN_142710980 body=727 status=ok
// SIG undefined FUN_142710980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142710980(undefined8 param_1,int param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if (param_2 == 9) {
    FUN_1426f6f20(param_1,param_3);
  }
  else {
    local_188 = (undefined4 *)0x0;
    local_180 = 0;
    FUN_1426f6d40();
    puVar3 = local_188;
    puVar5 = local_188 + (longlong)(int)local_180 * 0x20;
    if (local_188 != puVar5) {
      puVar4 = local_188 + 0x1c;
      do {
        _guard_xfg_dispatch_icall_nop(&local_168,0,0x120);
        local_178 = *(undefined8 *)(puVar4 + -0x1c);
        local_168 = puVar4[-0x18];
        local_170 = puVar4[-0x1a];
        iVar2 = (int)param_3[1];
        local_16c = puVar4[-0x19];
        local_44 = puVar4[1];
        local_138 = puVar4[-0x14];
        local_d8 = puVar4[-0xc];
        local_108 = puVar4[-0x10];
        local_78 = puVar4[-4];
        local_a8 = puVar4[-8];
        local_134 = puVar4[-0x13];
        local_164 = puVar4[-0x17];
        local_d4 = puVar4[-0xb];
        local_104 = puVar4[-0xf];
        local_74 = puVar4[-3];
        local_a4 = puVar4[-7];
        local_130 = puVar4[-0x12];
        local_160 = puVar4[-0x16];
        local_d0 = puVar4[-10];
        local_100 = puVar4[-0xe];
        local_70 = puVar4[-2];
        local_a0 = puVar4[-6];
        local_12c = puVar4[-0x11];
        local_15c = puVar4[-0x15];
        local_cc = puVar4[-9];
        local_fc = puVar4[-0xd];
        local_6c = puVar4[-1];
        local_9c = puVar4[-5];
        local_48 = *puVar4;
        local_158 = 0;
        local_128 = 0;
        local_f8 = 0;
        local_c8 = 0;
        local_98 = 0;
        local_68 = 0;
        local_150 = 0;
        local_120 = 0;
        local_f0 = 0;
        local_c0 = 0;
        local_90 = 0;
        local_60 = 0;
        local_148 = 0;
        local_118 = 0;
        local_e8 = 0;
        local_b8 = 0;
        local_88 = 0;
        local_58 = 0;
        *(int *)(param_3 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar2 + 1) {
          FUN_1407d8cb0(param_3,iVar2);
        }
        FUN_1426f4e20((longlong)iVar2 * 0x140 + *param_3);
        puVar1 = puVar4 + 4;
        puVar4 = puVar4 + 0x20;
      } while (puVar1 != puVar5);
    }
    if (puVar3 != (undefined4 *)0x0) {
      FMemory::Free(puVar3);
    }
  }
  return;
}



// FUNCTION 142710c60 LocalTravel body=85 status=ok
// SIG undefined LocalTravel(void)

void APlayerController::LocalTravel(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = FUN_142235230();
  if ((int)local_18 == 0) {
    uStack_10 = local_18;
    FUN_1429e1320(param_1,param_2,2,0,&local_18);
  }
  return;
}



// FUNCTION 142710cc0 FUN_142710cc0 body=246 status=ok
// SIG undefined FUN_142710cc0(void)

longlong FUN_142710cc0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_18 = *param_2;
  local_10 = (longlong *)param_2[1];
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x58) != &local_18) {
    *(undefined8 *)(param_1 + 0x58) = local_18;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x60,&local_10);
  }
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xffffffef;
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 142710dc0 Modify body=25 status=ok
// SIG undefined Modify(void)

bool UPolys::Modify(void)

{
  FUN_14175d020();
  return DAT_1468b6150 != 0;
}



// FUNCTION 142710de0 NetworkRemapPath body=164 status=ok
// SIG undefined NetworkRemapPath(void)

undefined8
APlayerController::NetworkRemapPath
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined8 local_res18;
  undefined2 *local_18;
  int local_10;
  
  local_res18 = param_3;
  FName::ToString(&local_res18,&local_18);
  lVar1 = *DAT_146b17150;
  uVar2 = FUN_1422325e0(param_1);
  (**(code **)(lVar1 + 0x400))(DAT_146b17150,uVar2,&local_18,param_4);
  puVar3 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar3 = local_18;
  }
  FName::FName(param_2,puVar3,1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142710e90 FUN_142710e90 body=220 status=ok
// SIG undefined FUN_142710e90(void)

void FUN_142710e90(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x14);
  if (lVar3 != 0) {
    lVar7 = 0;
    iVar8 = *(int *)(lVar3 + 0x5e8);
    lVar1 = *(longlong *)(lVar3 + 0x5e0);
    uVar4 = (longlong)iVar8;
    if (iVar8 != 0) {
      do {
        uVar5 = uVar4 >> 1;
        if (*(int *)(lVar1 + (uVar5 + lVar7) * 0x10) < *(int *)(param_1 + 0x34)) {
          lVar7 = (ulonglong)((uint)uVar4 & 1) + uVar5 + lVar7;
        }
        uVar4 = uVar5;
      } while (uVar5 != 0);
    }
    iVar6 = (int)lVar7;
    uVar4 = (ulonglong)iVar6;
    if (((uVar4 < (ulonglong)(longlong)iVar8) &&
        (*(int *)(lVar1 + uVar4 * 0x10) <= *(int *)(param_1 + 0x34))) && (iVar6 != -1)) {
      iVar2 = (iVar8 - iVar6) + -1;
      if (iVar2 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar1 + uVar4 * 0x10),(void *)((longlong)(iVar6 + 1) * 0x10 + lVar1),
                   (longlong)iVar2 << 4);
        iVar8 = *(int *)(lVar3 + 0x5e8);
      }
      *(int *)(lVar3 + 0x5e8) = iVar8 + -1;
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink((longlong *)(lVar3 + 0x5e0));
    }
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  }
  return;
}



// FUNCTION 142710f70 FUN_142710f70 body=57 status=ok
// SIG undefined FUN_142710f70(void)

void FUN_142710f70(longlong param_1,char param_2)

{
  int iVar1;
  
  if ((((param_2 == '\0') && (iVar1 = FUN_142235230(), iVar1 == 3)) &&
      (*(longlong *)(param_1 + 0x528) != 0)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x528) + 0x2c40) & 0x40) != 0)) {
    FUN_1429e21d0(param_1);
  }
  return;
}



// FUNCTION 142710fb0 FUN_142710fb0 body=564 status=ok
// SIG undefined FUN_142710fb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142710fb0(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  longlong local_68;
  char local_54;
  longlong local_48;
  longlong local_40;
  undefined8 local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_8c = local_8c & 0xfffffffe;
  local_90 = 0x40000000;
  local_98 = CONCAT35((int3)((ulonglong)local_98 >> 0x28),0x100000000);
  (**(code **)(*param_1 + 0xe18))(param_1,param_1,&local_98);
  uVar6 = UUGRichTextBlock::GetPrivateStaticClass();
  local_a8 = (**(code **)(*param_1 + 0x148))(param_1);
  if (uVar6 != 0) {
    uVar7 = UUGRichTextBlock::GetPrivateStaticClass();
    uVar9 = uVar6;
    do {
      if (uVar9 == uVar7) goto LAB_142711040;
      uVar9 = *(ulonglong *)(uVar9 + 0x30);
    } while (uVar9 != 0);
  }
  uVar6 = 0;
LAB_142711040:
  local_78[0] = 5;
  local_20 = '\0';
  local_88 = uVar6;
  FUN_14044bc80(&local_70,&local_a8,&local_88);
  uVar4 = FUN_14045a130(local_78);
  if (local_54 == '\0') {
    local_88 = local_88 & 0xffffffff00000000;
    local_80 = 0;
    lVar1 = *(longlong *)(local_48 + 0x168);
    if (lVar1 == 0) {
      uVar4 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    }
    else {
      fVar3 = *(float *)(lVar1 + 0x210);
      local_a8 = *(undefined8 *)(lVar1 + 0x210);
      fStack_a0 = *(float *)(lVar1 + 0x218);
      fStack_9c = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != *(float *)(lVar1 + 0x214));
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != fVar3);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_a0);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_9c);
      iVar5 = movmskps(uVar4,auVar2);
      if (iVar5 != 0) {
        *(float *)(lVar1 + 0x250) = fVar3;
        *(float *)(lVar1 + 0x254) = *(float *)(lVar1 + 0x214);
        *(float *)(lVar1 + 600) = fStack_a0;
        *(float *)(lVar1 + 0x25c) = fStack_9c;
        puVar8 = (undefined8 *)FQuat::Rotator(&local_a8,&local_98);
        *(undefined8 *)(lVar1 + 0x260) = *puVar8;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar8 + 1);
      }
      uVar4 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
    }
    local_88 = CONCAT44(uVar4,(undefined4)local_88);
    lVar1 = *(longlong *)(local_48 + 0x168);
    if (lVar1 == 0) {
      local_a8 = _DAT_1468b5d90;
      fStack_a0 = (float)DAT_1468b5d98;
    }
    else {
      local_a8 = *(undefined8 *)(lVar1 + 0x220);
      fStack_a0 = *(float *)(lVar1 + 0x228);
    }
    local_90 = fStack_a0;
    local_98 = local_a8;
    (**(code **)(*param_1 + 0x730))(param_1,&local_98,&local_88);
  }
  if (local_20 != '\0') {
    local_20 = 0;
    UWorld::RemoveOnActorSpawnedHandler(local_70,local_28);
    if (local_40 != 0) {
      FMemory::Free();
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1427111f0 FUN_1427111f0 body=72 status=ok
// SIG undefined FUN_1427111f0(void)

ulonglong FUN_1427111f0(longlong *param_1,longlong param_2)

{
  ulonglong in_RAX;
  
  if (param_1[0x91] == param_2) {
    in_RAX = FUN_142235230();
    if ((int)in_RAX != 3) {
      if (param_1[0xa2] == param_1[0x91]) {
        return CONCAT71((int7)((ulonglong)param_1[0x91] >> 8),1);
      }
      in_RAX = (**(code **)(*param_1 + 0xc80))(param_1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142711240 FUN_142711240 body=261 status=ok
// SIG undefined FUN_142711240(void)

void FUN_142711240(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  
  *(undefined1 *)(param_1 + 0x7c4) = 1;
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x644,1);
  }
  else {
    *(undefined1 *)(param_1 + 0x644) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  plVar3 = (longlong *)param_3[0xb];
  if ((plVar3 != (longlong *)0x0) && (param_3 == (longlong *)plVar3[0x12])) {
    bVar1 = *(byte *)(param_1 + 0x644);
    if (bVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001427112d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x2e0))(param_3,param_1,param_3);
      return;
    }
    if ((-1 < (int)(bVar1 - 1)) && ((int)(bVar1 - 1) < (int)param_3[10])) {
      plVar3 = *(longlong **)(param_3[9] + -8 + (ulonglong)bVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x00014271130f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x2e0))(plVar3,param_1,param_3);
      return;
    }
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x360))(plVar3,param_3);
    (**(code **)(*plVar3 + 0x2e0))(plVar3,param_1,param_3);
  }
  return;
}



// FUNCTION 142711350 FUN_142711350 body=39 status=ok
// SIG undefined FUN_142711350(void)

void FUN_142711350(longlong *param_1)

{
  FUN_1426b0480(param_1 + 0x76);
                    /* WARNING: Could not recover jumptable at 0x000142711370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x848))(param_1);
  return;
}



// FUNCTION 142711380 FUN_142711380 body=168 status=ok
// SIG undefined FUN_142711380(void)

void FUN_142711380(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong *local_res8 [4];
  
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
    if (cVar2 == '\0') {
      iVar4 = (**(code **)(*param_1 + 0x4e8))(param_1);
      if ((iVar4 - 1U & 0xfffffffd) == 0) {
        FUN_142386620(param_1);
      }
      (**(code **)(*param_1 + 0x488))(param_1,0,1,0);
      bVar3 = (**(code **)(*param_1 + 0x3f0))(param_1);
      bVar1 = *(byte *)((longlong)param_1 + 0xba);
      if ((bVar1 >> 4 & 1) != bVar3) {
        *(byte *)((longlong)param_1 + 0xba) = (bVar3 << 4 ^ bVar1) & 0x10 ^ bVar1;
        FUN_142252d00(param_1);
      }
      local_res8[0] = param_1;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0xb6,local_res8);
    }
  }
  return;
}



// FUNCTION 142711430 FUN_142711430 body=97 status=ok
// SIG undefined FUN_142711430(void)

void FUN_142711430(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    FUN_1428c8d40(lVar1,param_2);
  }
  DAT_146afeff8 = param_2;
  param_1[0xa1] = 0;
  param_1[0xd1] = 0;
  FUN_142227350(param_1,1);
  DAT_146afeff8 = 0;
  return;
}



// FUNCTION 1427114a0 FUN_1427114a0 body=141 status=ok
// SIG undefined FUN_1427114a0(void)

void FUN_1427114a0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FUN_14270d290(param_1,local_18);
  plVar1 = param_1 + 0xa1;
  if (plVar1 != plVar2) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_1 + 0xa2) = (int)plVar2[1];
    *(undefined4 *)((longlong)param_1 + 0x514) = *(undefined4 *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  FString::operator=(param_1 + 0x8e,plVar1);
                    /* WARNING: Could not recover jumptable at 0x000142711526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x7a8))(param_1);
  return;
}



// FUNCTION 142711530 FUN_142711530 body=12 status=ok
// SIG undefined FUN_142711530(void)

void FUN_142711530(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142711535. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x760))(param_1,0);
  return;
}



// FUNCTION 142711540 FUN_142711540 body=85 status=ok
// SIG undefined FUN_142711540(void)

void FUN_142711540(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x148), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x738))(plVar1,param_1);
    (**(code **)(**(longlong **)(lVar2 + 0x148) + 0x730))(*(longlong **)(lVar2 + 0x148),param_1);
  }
  return;
}



// FUNCTION 1427115e0 FUN_1427115e0 body=147 status=ok
// SIG undefined FUN_1427115e0(void)

void FUN_1427115e0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  *(uint *)((longlong)param_1 + 0x484) =
       *(uint *)((longlong)param_1 + 0x484) ^
       (*(uint *)((longlong)param_1 + 0x484) ^ *(uint *)(param_2 + 0x484)) & 1;
  *(uint *)((longlong)param_1 + 0x484) =
       (*(uint *)((longlong)param_1 + 0x484) ^ *(uint *)(param_2 + 0x484)) & 2 ^
       *(uint *)((longlong)param_1 + 0x484);
  (**(code **)(*param_1 + 0x758))(param_1,param_2 + 0x4b8);
  lVar1 = *param_1;
  uVar2 = FUN_14270d290(param_2,local_18);
  (**(code **)(lVar1 + 0x738))(param_1,uVar2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142711690 FUN_142711690 body=57 status=ok
// SIG undefined FUN_142711690(void)

void FUN_142711690(longlong *param_1)

{
  if (param_1[0x91] != 0) {
    FUN_142227350(param_1[0x91],0,1);
                    /* WARNING: Could not recover jumptable at 0x0001427116bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x750))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1427116d0 FUN_1427116d0 body=163 status=ok
// SIG undefined FUN_1427116d0(void)

void FUN_1427116d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined1 param_6)

{
  undefined8 local_188;
  undefined4 local_180;
  undefined1 local_178 [368];
  
  if (*(longlong *)(param_1 + 0x528) != 0) {
    FUN_1422ffaa0(local_178);
    local_188 = *param_5;
    local_180 = *(undefined4 *)(param_5 + 1);
    (**(code **)(**(longlong **)(param_1 + 0x528) + 0x830))
              (*(longlong **)(param_1 + 0x528),param_2,local_178,param_3,param_4,&local_188,param_6)
    ;
  }
  return;
}



// FUNCTION 142711780 FUN_142711780 body=481 status=ok
// SIG undefined FUN_142711780(void)

void FUN_142711780(longlong *param_1,undefined4 param_2,undefined4 param_3,byte param_4,byte param_5
                  ,byte param_6,byte param_7,char *param_8,undefined4 *param_9)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  puVar5 = param_9;
  if (*(longlong *)(lVar6 + 400) == 0) {
    lVar6 = lVar6 + 0x400;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(lVar6 + 400) + 0x98);
  }
  uVar2 = param_9[1];
  lVar7 = FLatentActionManager::
          FindExistingActionWithPredicate<FStreamLevelAction,_FLatentActionManager::FindExistingAction<FStreamLevelAction>_::_2_::FFirstItemPredicate>
                    (lVar6,*(undefined8 *)(param_9 + 4),uVar2,&param_9);
  cVar1 = *param_8;
  if (lVar7 == 0) {
    if (cVar1 == '\0') {
      puVar8 = (undefined8 *)operator_new(0x40);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar8 + 1) = param_3;
        *puVar8 = &PTR_FUN_1451782f0;
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        *(byte *)(puVar8 + 2) = *(byte *)(puVar8 + 2) & 0xfd | 1;
        FWeakObjectPtr::operator=((longlong)puVar8 + 0x14,param_1);
        *(uint *)((longlong)puVar8 + 0x1c) = *(uint *)((longlong)puVar8 + 0x1c) | 0xf;
        uVar3 = *(undefined8 *)(puVar5 + 2);
        uVar4 = *(undefined8 *)(puVar5 + 4);
        *(undefined4 *)(puVar8 + 4) = 0;
        puVar8[5] = uVar3;
        *(undefined4 *)(puVar8 + 6) = *puVar5;
        *(undefined4 *)((longlong)puVar8 + 0x34) = uVar2;
        FWeakObjectPtr::operator=(puVar8 + 7,uVar4);
      }
      *(uint *)((longlong)puVar8 + 0x1c) = *(uint *)((longlong)puVar8 + 0x1c) & 0xfffffffe;
      uVar3 = *(undefined8 *)(puVar5 + 4);
      *(undefined4 *)(puVar8 + 4) = param_2;
      *(uint *)((longlong)puVar8 + 0x1c) =
           ((param_6 & 0xfffffffd | (uint)param_7 * 2) * 2 | param_5 & 0xfffffff9) * 2 |
           ((uint)param_4 | *(uint *)((longlong)puVar8 + 0x1c)) & 0xfffffff1;
      FUN_142514cf0(lVar6,uVar3,uVar2,puVar8);
    }
  }
  else if (cVar1 == '\x02') {
    *(byte *)(lVar7 + 0x10) = *(byte *)(lVar7 + 0x10) & 0xfe;
  }
  else {
    if (cVar1 == '\0') {
      *(byte *)(lVar7 + 0x10) = *(byte *)(lVar7 + 0x10) | 1;
      *(undefined4 *)(lVar7 + 8) = param_3;
      *(undefined4 *)(lVar7 + 0xc) = 0;
    }
    *(uint *)(lVar7 + 0x1c) = *(uint *)(lVar7 + 0x1c) & 0xfffffffe;
    *(undefined4 *)(lVar7 + 0x20) = param_2;
    *(uint *)(lVar7 + 0x1c) =
         ((param_6 & 0xfffffffd | (uint)param_7 * 2) * 2 | param_5 & 0xfffffff9) * 2 |
         ((uint)param_4 | *(uint *)(lVar7 + 0x1c)) & 0xfffffff1;
  }
  return;
}



// FUNCTION 142711970 FUN_142711970 body=234 status=ok
// SIG undefined FUN_142711970(void)

void FUN_142711970(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  longlong param_5)

{
  longlong lVar1;
  int iVar2;
  
  if ((param_5 != 0) && (iVar2 = *(int *)(param_1 + 0x800) + -1, -1 < iVar2)) {
    lVar1 = (longlong)iVar2 * 0x28;
    do {
      if (*(longlong *)(lVar1 + 0x18 + *(longlong *)(param_1 + 0x7f8)) == param_5) {
        FUN_142714090(param_1 + 0x7f8,iVar2,1);
      }
      lVar1 = lVar1 + -0x28;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x800);
  *(int *)(param_1 + 0x800) = iVar2 + 1;
  if (*(int *)(param_1 + 0x804) < iVar2 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x7f8),iVar2);
  }
  FUN_1426f5790(*(longlong *)(param_1 + 0x7f8) + (longlong)iVar2 * 0x28,param_2,param_3,param_4);
  return;
}



// FUNCTION 142711a60 FUN_142711a60 body=956 status=ok
// SIG undefined FUN_142711a60(void)

void FUN_142711a60(longlong param_1,longlong param_2,char param_3,undefined4 param_4,
                  undefined1 param_5)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30 [3];
  
  if (param_2 != 0) {
    if (param_3 == '\0') {
      plVar7 = (longlong *)0x0;
      pplVar2 = (longlong **)(param_1 + 0x5f0);
      local_40 = (longlong *)0x0;
      if (pplVar2 != &local_48) {
        *pplVar2 = (longlong *)0x0;
        local_48 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x5f8,&local_40);
        plVar5 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_40 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_40 + 8))(local_40,1);
            }
          }
        }
      }
      lVar4 = operator_new(0x18);
      plVar5 = plVar7;
      if (lVar4 != 0) {
        plVar5 = (longlong *)
                 FActiveHapticFeedbackEffect::FActiveHapticFeedbackEffect
                           (lVar4,param_2,param_4,param_5);
      }
      plVar6 = (longlong *)operator_new(0x18);
      if (plVar6 != (longlong *)0x0) {
        *(undefined4 *)(plVar6 + 1) = 1;
        *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
        *plVar6 = (longlong)&PTR_FUN_1450bcdd0;
        plVar6[2] = (longlong)plVar5;
        plVar7 = plVar6;
      }
      local_38 = plVar5;
      local_30[0] = plVar7;
      SharedPointerInternals::EnableSharedFromThis(&local_38,plVar5,plVar5);
      if (pplVar2 != &local_38) {
        *pplVar2 = plVar5;
        local_38 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x5f8,local_30);
        plVar7 = local_30[0];
      }
    }
    else if (param_3 == '\x01') {
      plVar7 = (longlong *)0x0;
      pplVar2 = (longlong **)(param_1 + 0x600);
      local_60 = (longlong *)0x0;
      if (pplVar2 != &local_68) {
        *pplVar2 = (longlong *)0x0;
        local_68 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x608,&local_60);
        plVar5 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_60 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
      }
      lVar4 = operator_new(0x18);
      plVar5 = plVar7;
      if (lVar4 != 0) {
        plVar5 = (longlong *)
                 FActiveHapticFeedbackEffect::FActiveHapticFeedbackEffect
                           (lVar4,param_2,param_4,param_5);
      }
      plVar6 = (longlong *)operator_new(0x18);
      if (plVar6 != (longlong *)0x0) {
        *(undefined4 *)(plVar6 + 1) = 1;
        *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
        *plVar6 = (longlong)&PTR_FUN_1450bcdd0;
        plVar6[2] = (longlong)plVar5;
        plVar7 = plVar6;
      }
      local_58 = plVar5;
      local_50 = plVar7;
      SharedPointerInternals::EnableSharedFromThis(&local_58,plVar5,plVar5);
      if (pplVar2 != &local_58) {
        *pplVar2 = plVar5;
        local_58 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x608,&local_50);
        plVar7 = local_50;
      }
    }
    else {
      if (param_3 != '\x05') {
        return;
      }
      plVar7 = (longlong *)0x0;
      pplVar2 = (longlong **)(param_1 + 0x610);
      local_80 = (longlong *)0x0;
      if (pplVar2 != &local_88) {
        *pplVar2 = (longlong *)0x0;
        local_88 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x618,&local_80);
        plVar5 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_80 + 1;
          lVar4 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
            }
          }
        }
      }
      lVar4 = operator_new(0x18);
      plVar5 = plVar7;
      if (lVar4 != 0) {
        plVar5 = (longlong *)
                 FActiveHapticFeedbackEffect::FActiveHapticFeedbackEffect
                           (lVar4,param_2,param_4,param_5);
      }
      plVar6 = (longlong *)operator_new(0x18);
      if (plVar6 != (longlong *)0x0) {
        *(undefined4 *)(plVar6 + 1) = 1;
        *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
        *plVar6 = (longlong)&PTR_FUN_1450bcdd0;
        plVar6[2] = (longlong)plVar5;
        plVar7 = plVar6;
      }
      local_78 = plVar5;
      local_70 = plVar7;
      SharedPointerInternals::EnableSharedFromThis(&local_78,plVar5,plVar5);
      if (pplVar2 != &local_78) {
        *pplVar2 = plVar5;
        local_78 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x618,&local_70);
        plVar7 = local_70;
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar7 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 142711e20 FUN_142711e20 body=559 status=ok
// SIG undefined FUN_142711e20(void)

void FUN_142711e20(longlong *param_1,float param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [12];
  undefined1 local_2c [36];
  
  if ((*(uint *)(param_1 + 200) & 1) == 0) {
    *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) | 1;
    FUN_1429e1f90();
  }
  FUN_14271a180(param_1,param_2,param_2 == 0.0);
  if (param_1[0xa1] == 0) {
    return;
  }
  if (*(longlong **)(param_1[0xa1] + 0x30) != param_1) {
    return;
  }
  bVar4 = false;
  cVar1 = FUN_1423d94f0(param_1,0x140);
  if (cVar1 != '\0') {
    if (param_1[0x91] == 0) {
      (**(code **)(*param_1 + 0x718))(param_1,0x145);
    }
    else if (param_1[0xa1] != 0) {
      bVar4 = false;
      if (param_1[0x91] == param_1[0xa2]) {
        bVar4 = true;
      }
    }
  }
  cVar1 = FUN_1423d94f0(param_1,0x145);
  if (cVar1 == '\0') {
    cVar1 = FUN_1423d94f0(param_1,0x142);
    if (cVar1 != '\0') {
      if (((*(byte *)(param_1 + 0x25) < 3) && (cVar1 = FUN_1423d94f0(param_1,0x142), cVar1 != '\0'))
         && (lVar2 = (**(code **)(*param_1 + 0x148))(param_1),
            0.25 < *(float *)(lVar2 + 0x790) - *(float *)((longlong)param_1 + 0x584))) {
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x720))(param_1,local_38);
        local_58 = *puVar3;
        local_50 = *(undefined4 *)(puVar3 + 1);
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 0xe40))(param_1,local_2c);
        local_48 = *puVar3;
        local_40 = *(undefined4 *)(puVar3 + 1);
        FUN_1429e1f30(param_1,&local_48,&local_58);
        *(undefined4 *)((longlong)param_1 + 0x584) = *(undefined4 *)(lVar2 + 0x790);
      }
      goto LAB_142711f48;
    }
  }
  else {
    if (*(byte *)(param_1 + 0x25) < 3) {
      (**(code **)(*param_1 + 0xc90))(param_1);
    }
    cVar1 = (**(code **)(*param_1 + 0xe88))(param_1);
    bVar4 = cVar1 == '\0';
  }
  if (!bVar4) {
    return;
  }
LAB_142711f48:
  (**(code **)(*param_1 + 0xbc0))(param_1,param_2);
  return;
}



// FUNCTION 142712050 FUN_142712050 body=86 status=ok
// SIG undefined FUN_142712050(void)

undefined4 FUN_142712050(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 local_res10 [24];
  
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(local_res10);
    iVar1 = TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
            RemoveSingle(param_1 + 0x730,local_res10);
    if (0 < iVar1) {
      FUN_142362cc0(param_2);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1427120b0 FUN_1427120b0 body=1304 status=ok
// SIG undefined FUN_1427120b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1427120b0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong local_180;
  undefined1 local_178 [8];
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 *local_148;
  ulonglong *puStack_140;
  undefined8 local_138;
  longlong local_130;
  undefined4 *local_128;
  ulonglong *puStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  longlong *local_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [16];
  undefined1 local_90 [40];
  undefined1 local_68 [24];
  undefined4 local_50 [4];
  undefined1 local_40 [8];
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if ((char)param_1[0x25] == '\x03') {
    if (param_2 == (longlong *)0x0) {
      return;
    }
    if ((param_1[0x8c] != 0) && ((*(byte *)(param_1[0x8c] + 0x484) & 2) != 0)) {
      return;
    }
    if (((longlong *)param_1[0x91] != (longlong *)0x0) && ((longlong *)param_1[0x91] != param_2)) {
      (**(code **)(*param_1 + 0x780))();
    }
    if ((longlong *)param_2[0x92] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[0x92] + 0x780))();
    }
    uVar6 = (**(code **)(*param_2 + 0x770))(param_2,param_1);
    lVar8 = param_2[0x2d];
    if (lVar8 == 0) {
      local_15c = DAT_1468b5da8;
      puVar10 = &local_164;
      local_164 = DAT_1468b5da0;
    }
    else {
      local_f8 = *(float *)(lVar8 + 0x210);
      fStack_f4 = *(float *)(lVar8 + 0x214);
      fStack_f0 = *(float *)(lVar8 + 0x218);
      fStack_ec = *(float *)(lVar8 + 0x21c);
      auVar3._4_4_ = -(uint)(*(float *)(lVar8 + 0x254) != fStack_f4);
      auVar3._0_4_ = -(uint)(*(float *)(lVar8 + 0x250) != local_f8);
      auVar3._8_4_ = -(uint)(*(float *)(lVar8 + 600) != fStack_f0);
      auVar3._12_4_ = -(uint)(*(float *)(lVar8 + 0x25c) != fStack_ec);
      iVar7 = movmskps(uVar6,auVar3);
      if (iVar7 != 0) {
        *(float *)(lVar8 + 0x250) = local_f8;
        *(float *)(lVar8 + 0x254) = fStack_f4;
        *(float *)(lVar8 + 600) = fStack_f0;
        *(float *)(lVar8 + 0x25c) = fStack_ec;
        puVar10 = (undefined8 *)FQuat::Rotator(&local_f8,&local_148);
        *(undefined8 *)(lVar8 + 0x260) = *puVar10;
        *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(puVar10 + 1);
      }
      local_168 = *(undefined4 *)(lVar8 + 0x268);
      puVar10 = &local_170;
      local_170 = *(undefined8 *)(lVar8 + 0x260);
    }
    local_158 = *puVar10;
    local_150 = *(undefined4 *)(puVar10 + 1);
    (**(code **)(*param_1 + 0x728))(param_1,&local_158,1);
    (**(code **)(*param_1 + 0x750))(param_1,param_2);
    plVar11 = (longlong *)param_1[0x91];
    if ((plVar11 != (longlong *)0x0) && ((*(byte *)((longlong)plVar11 + 0x34) & 4) != 0)) {
      AActor::SetActorTickEnabled(plVar11,1);
      plVar11 = (longlong *)param_1[0x91];
    }
    if ((plVar11 != (longlong *)0x0) && (lVar8 = (**(code **)(*plVar11 + 0x6e8))(), lVar8 != 0)) {
      uVar9 = UNetworkPredictionInterface::GetPrivateStaticClass();
      plVar11 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar9);
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
    }
    param_1[0xa2] = 0;
    if (((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) ||
       (cVar5 = (**(code **)(*param_1 + 0x768))(param_1), cVar5 == '\0')) {
      (**(code **)(*(longlong *)param_1[0x91] + 0x708))();
    }
    FUN_1429e0e30(param_1,param_1[0x91]);
    local_188 = 0x140;
    (**(code **)(*param_1 + 0x718))(param_1,0x140);
    if ((char)param_1[0xa7] != '\0') {
      (**(code **)(*param_1 + 0xe20))(param_1,param_1[0x91]);
      (**(code **)(*param_1 + 0xea0))(param_1);
    }
    return;
  }
  FName::FName(local_178,&DAT_145171a14,1);
  local_180 = param_1[3];
  lVar8 = FText::FromName(local_68,&local_180);
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_b8,
                     L"Possess function should only be used by the network authority for {0}",
                     L"PlayerController",L"PlayerControllerPossessAuthorityOnly");
  puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_a0,uVar9);
  local_50[0] = 4;
  FText::FText(local_40,lVar8);
  local_138 = *puVar10;
  local_148 = local_50;
  puStack_140 = &local_20;
  local_130 = puVar10[1];
  local_28 = '\x01';
  if (local_130 != 0) {
    LOCK();
    *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
    UNLOCK();
  }
  local_128 = local_148;
  puStack_120 = puStack_140;
  uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_118,&local_128);
  uVar9 = FText::Format(local_d0,&local_138,uVar9);
  FText::FText(local_e8,uVar9);
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_c8 + 1;
    lVar4 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar1 = (int *)((longlong)local_c8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_c8 + 8))(local_c8,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_118);
  if ((local_28 != '\0') && (local_28 = '\0', local_38 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_38 + 1;
    lVar4 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  plVar11 = (longlong *)puVar10[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  plVar11 = *(longlong **)(lVar8 + 8);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  uVar9 = FUN_14161fb50(local_90,local_178);
  FMessageLog::Warning(uVar9,local_108,local_e8);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_100 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  FMessageLog::~FMessageLog(local_90);
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_e0 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  if (local_b0 == (longlong *)0x0) {
    return;
  }
  LOCK();
  plVar11 = local_b0 + 1;
  lVar8 = *plVar11;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)lVar8 != 1) {
    return;
  }
  (**(code **)*local_b0)(local_b0);
  LOCK();
  piVar1 = (int *)((longlong)local_b0 + 0xc);
  iVar7 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar7 != 1) {
    return;
  }
  (**(code **)(*local_b0 + 8))(local_b0,1);
  return;
}



// FUNCTION 1427125d0 FUN_1427125d0 body=189 status=ok
// SIG undefined FUN_1427125d0(void)

void FUN_1427125d0(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  FUN_1423da990();
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar4 = iVar2 >> 0x1f & 0xffff;
    uVar1 = iVar2 + uVar4;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
            (longlong)(int)((uVar1 & 0xffff) - uVar4) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    iVar2 = FUN_142235230(param_1);
    if (iVar2 != 3) {
      (**(code **)(*param_1 + 0x798))(param_1);
    }
  }
  (**(code **)(*param_1 + 0xd48))(param_1);
  (**(code **)(*param_1 + 0xea0))(param_1);
  iVar2 = FUN_142235230(param_1);
  if (iVar2 == 3) {
    (**(code **)(*param_1 + 0xda0))(param_1);
  }
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) | 0x10;
  param_1[0x90] = 0x142;
  return;
}



// FUNCTION 142712690 FUN_142712690 body=282 status=ok
// SIG undefined FUN_142712690(void)

void FUN_142712690(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  
  FUN_142238430();
  lVar3 = (**(code **)(*param_1 + 0x148))();
  plVar1 = *(longlong **)(lVar3 + 0x148);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x730))(plVar1,param_1);
  }
  if (*(byte *)(param_1 + 0x25) < 3) {
    return;
  }
  lVar3 = param_1[0x23];
  if (lVar3 != 0) {
    lVar4 = FUN_14291fb80();
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
      *(uint *)((longlong)param_1 + 0x484) = *(uint *)((longlong)param_1 + 0x484) & 0xfffffffb;
      lVar4 = lVar3;
      if (!bVar2) {
        lVar4 = 0;
      }
      uVar5 = 0;
      if (lVar4 == 0) {
        uVar5 = 4;
      }
      *(uint *)((longlong)param_1 + 0x484) = *(uint *)((longlong)param_1 + 0x484) | uVar5;
      goto LAB_14271277c;
    }
  }
  lVar3 = 0;
LAB_14271277c:
  if (plVar1 != (longlong *)0x0) {
    fVar6 = (float)(**(code **)(*plVar1 + 0x708))(plVar1,lVar3);
    *(int *)(param_1 + 0x91) = (int)fVar6;
  }
  return;
}



// FUNCTION 1427127b0 FUN_1427127b0 body=57 status=ok
// SIG undefined FUN_1427127b0(void)

void FUN_1427127b0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_1422384a0();
  iVar2 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar2 < 0x129) {
    uVar1 = *(uint *)(param_1 + 0x6a8);
    *(uint *)(param_1 + 0x6a8) = (uVar1 * 2 ^ uVar1) & 4 ^ uVar1;
  }
  return;
}



// FUNCTION 1427127f0 FUN_1427127f0 body=56 status=ok
// SIG undefined FUN_1427127f0(void)

void FUN_1427127f0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x7e8))();
  if (cVar1 != '\0') {
    param_1[0xd2] = DAT_1468b5da0;
    *(undefined4 *)(param_1 + 0xd3) = DAT_1468b5da8;
  }
  return;
}



// FUNCTION 142712830 FUN_142712830 body=66 status=ok
// SIG undefined FUN_142712830(void)

void FUN_142712830(longlong *param_1)

{
  *(short *)((longlong)param_1 + 0x6ca) = (short)param_1[0xd9];
  (**(code **)(*param_1 + 0xd98))();
  if (param_1[0xa5] == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142712865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xd48))(param_1);
    return;
  }
  return;
}



// FUNCTION 142712880 FUN_142712880 body=131 status=ok
// SIG undefined FUN_142712880(void)

void FUN_142712880(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 uVar3;
  int local_18 [4];
  
  lVar2 = FUN_1422312c0();
  if (lVar2 != 0) {
    cVar1 = FUN_142710360(param_1,local_18);
    if ((cVar1 == '\0') || (local_18[0] == 0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    FUN_142457560(lVar2,param_2,param_3,param_4,uVar3);
  }
  return;
}



// FUNCTION 142712910 ProcessChildren body=726 status=ok
// SIG undefined ProcessChildren(void)

void TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
     TConstElementBoxIterator<TInlineAllocator<99,FDefaultAllocator>_>::ProcessChildren
               (float *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 in_EAX;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  float *pfVar17;
  float *pfVar18;
  uint uVar19;
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
  float fVar31;
  
  fVar1 = param_1[0x15];
  fVar22 = param_1[0x14];
  lVar2 = *(longlong *)(param_1 + 8);
  fVar29 = param_1[4] + *param_1;
  fVar30 = param_1[5] + param_1[1];
  fVar31 = param_1[6] + param_1[2];
  fVar23 = *param_1 - param_1[4];
  fVar24 = param_1[1] - param_1[5];
  fVar25 = param_1[2] - param_1[6];
  fVar26 = (fVar1 + param_1[0xc]) - fVar22;
  fVar27 = (fVar1 + param_1[0xd]) - fVar22;
  fVar28 = (fVar1 + param_1[0xe]) - fVar22;
  fVar20 = (param_1[0xc] - fVar1) + fVar22;
  fVar21 = (param_1[0xd] - fVar1) + fVar22;
  fVar22 = (param_1[0xe] - fVar1) + fVar22;
  auVar4._4_4_ = -(uint)(fVar22 < fVar25);
  auVar4._0_4_ = -(uint)(fVar22 < fVar25);
  auVar4._8_4_ = -(uint)(fVar22 < fVar25);
  auVar4._12_4_ = -(uint)(fVar22 < fVar25);
  iVar10 = movmskps(in_EAX,auVar4);
  auVar5._4_4_ = -(uint)(fVar21 < fVar24);
  auVar5._0_4_ = -(uint)(fVar21 < fVar24);
  auVar5._8_4_ = -(uint)(fVar21 < fVar24);
  auVar5._12_4_ = -(uint)(fVar21 < fVar24);
  iVar11 = movmskps(iVar10,auVar5);
  auVar8._4_4_ = -(uint)(fVar20 < fVar23);
  auVar8._0_4_ = -(uint)(fVar20 < fVar23);
  auVar8._8_4_ = -(uint)(fVar20 < fVar23);
  auVar8._12_4_ = -(uint)(fVar20 < fVar23);
  iVar12 = movmskps(iVar11,auVar8);
  auVar6._4_4_ = -(uint)(fVar28 < fVar31);
  auVar6._0_4_ = -(uint)(fVar28 < fVar31);
  auVar6._8_4_ = -(uint)(fVar28 < fVar31);
  auVar6._12_4_ = -(uint)(fVar28 < fVar31);
  iVar13 = movmskps(iVar12,auVar6);
  auVar7._4_4_ = -(uint)(fVar27 < fVar30);
  auVar7._0_4_ = -(uint)(fVar27 < fVar30);
  auVar7._8_4_ = -(uint)(fVar27 < fVar30);
  auVar7._12_4_ = -(uint)(fVar27 < fVar30);
  iVar14 = movmskps(iVar13,auVar7);
  auVar9._4_4_ = -(uint)(fVar26 < fVar29);
  auVar9._0_4_ = -(uint)(fVar26 < fVar29);
  auVar9._8_4_ = -(uint)(fVar26 < fVar29);
  auVar9._12_4_ = -(uint)(fVar26 < fVar29);
  iVar15 = movmskps(iVar14,auVar9);
  uVar19 = 0;
  do {
    uVar16 = (~uVar19 & 7) << 3 | uVar19 & 7;
    if ((uVar16 & ((((((uint)(iVar10 == 0) * 2 | (uint)(iVar11 == 0)) * 2 | (uint)(iVar12 == 0)) * 2
                    | (uint)(iVar13 != 0)) * 2 | (uint)(iVar14 != 0)) * 2 | (uint)(iVar15 != 0))) ==
        uVar16) {
      lVar3 = *(longlong *)(lVar2 + 0x18 + (ulonglong)(uVar19 & 7) * 8);
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0x58) & 0x7fffffff) != 0)) {
        fVar1 = param_1[0x64c];
        param_1[0x64c] = (float)((int)fVar1 + 1);
        if ((int)param_1[0x64d] < (int)fVar1 + 1) {
          TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
          ::ResizeGrow(param_1 + 0x18,fVar1);
        }
        pfVar18 = (float *)0x0;
        pfVar17 = *(float **)(param_1 + 0x648);
        if (*(float **)(param_1 + 0x648) == (float *)0x0) {
          pfVar17 = param_1 + 0x18;
        }
        pfVar17 = pfVar17 + (longlong)(int)fVar1 * 0x10;
        if (pfVar17 != (float *)0x0) {
          pfVar17[4] = 0.0;
          pfVar17[5] = 0.0;
          pfVar17[6] = 0.0;
          pfVar17[7] = 1.0;
          pfVar17[8] = 0.0;
          pfVar17[9] = 0.0;
          pfVar17[10] = 0.0;
          pfVar17[0xb] = 1.0;
          pfVar17[0] = 0.0;
          pfVar17[1] = 0.0;
          pfVar18 = pfVar17;
        }
        *(undefined8 *)pfVar18 =
             *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18 + (ulonglong)(uVar19 & 7) * 8);
        pfVar18[4] = *(float *)(&DAT_146534f00 + (ulonglong)(uVar19 & 1) * 4) * param_1[0x15] +
                     param_1[0xc];
        pfVar18[5] = *(float *)(&DAT_146534f00 + (ulonglong)(uVar19 >> 1 & 1) * 4) * param_1[0x15] +
                     param_1[0xd];
        fVar1 = *(float *)(&DAT_146534f00 + (ulonglong)(uVar19 >> 2 & 1) * 4);
        fVar22 = param_1[0x15];
        fVar20 = param_1[0xe];
        pfVar18[7] = 0.0;
        pfVar18[6] = fVar1 * fVar22 + fVar20;
        pfVar18[8] = param_1[0x14];
        pfVar18[9] = param_1[0x14];
        pfVar18[10] = param_1[0x14];
        pfVar18[0xb] = 0.0;
        fVar1 = param_1[0x14];
        pfVar18[0xc] = fVar1 * 0.53125;
        pfVar18[0xd] = param_1[0x14] - fVar1 * 0.53125;
      }
    }
    if ((uVar19 & 7) < 7) {
      uVar19 = uVar19 ^ (uVar19 + 1 ^ uVar19) & 7;
    }
    else {
      uVar19 = uVar19 | 8;
    }
  } while (uVar19 >> 3 == 0);
  return;
}



// FUNCTION 142712bf0 FUN_142712bf0 body=2272 status=ok
// SIG undefined FUN_142712bf0(void)

void FUN_142712bf0(longlong *param_1,float param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  float *pfVar14;
  longlong *plVar15;
  int iVar16;
  void *_Dst;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  longlong local_128;
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  longlong *local_100;
  longlong *local_f8;
  int iStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  float local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float local_98 [4];
  undefined1 local_88 [12];
  undefined1 local_7c [68];
  
  if (param_1[0xa1] == 0) {
    return;
  }
  pfVar19 = (float *)(param_1 + 0xc4);
  bVar5 = false;
  bVar4 = false;
  param_1[0xc5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x624) = 0;
  *pfVar19 = 0.0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  bVar6 = false;
  lVar11 = (**(code **)(*param_1 + 0x148))();
  if (param_3 == '\0') {
    if ((char)param_1[0xfe] == '\0') {
      iVar20 = (int)param_1[0xb9] + -1;
      if (-1 < iVar20) {
        plVar13 = param_1 + 0xb8;
        lVar17 = (longlong)iVar20 * 0x18;
        do {
          cVar7 = (**(code **)(*param_1 + 0xef0))(param_1,*plVar13 + lVar17);
          if ((cVar7 != '\0') &&
             (cVar7 = FActiveForceFeedbackEffect::Update(*plVar13 + lVar17,param_2,pfVar19),
             cVar7 == '\0')) {
            iVar10 = (int)param_1[0xb9];
            iVar16 = (iVar10 - iVar20) + -1;
            if (0 < iVar16) {
              iVar16 = 1;
            }
            if (iVar16 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar17 + *plVar13),
                         (void *)(*plVar13 + (longlong)(iVar10 - iVar16) * 0x18),
                         (longlong)iVar16 * 0x18);
              iVar10 = (int)param_1[0xb9];
            }
            *(int *)(param_1 + 0xb9) = iVar10 + -1;
            TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(plVar13);
          }
          lVar17 = lVar17 + -0x18;
          iVar20 = iVar20 + -1;
        } while (-1 < iVar20);
      }
      iVar20 = (int)param_1[0x100] + -1;
      if (-1 < iVar20) {
        lVar17 = (longlong)iVar20 * 0x28;
        do {
          cVar7 = (**(code **)(*param_1 + 0xee8))(param_1,param_1[0xff] + lVar17);
          if ((cVar7 != '\0') &&
             (cVar7 = FUN_142464c20(param_1[0xff] + lVar17,param_2,pfVar19), cVar7 == '\0')) {
            FUN_142714090(param_1 + 0xff,iVar20,1,0);
          }
          lVar17 = lVar17 + -0x28;
          iVar20 = iVar20 + -1;
        } while (-1 < iVar20);
      }
      (**(code **)(*param_1 + 0xf08))(param_1,param_2,pfVar19);
    }
    else {
      fVar21 = *(float *)(param_1 + 0xfc);
      param_1[0xfc] = 0;
      *(undefined1 *)(param_1 + 0xfe) = 0;
      *pfVar19 = fVar21 + *pfVar19;
      *(float *)((longlong)param_1 + 0x624) =
           *(float *)((longlong)param_1 + 0x7e4) + *(float *)((longlong)param_1 + 0x624);
      fVar21 = *(float *)(param_1 + 0xfd);
      param_1[0xfd] = 0;
      *(float *)((longlong)param_1 + 0x62c) =
           *(float *)((longlong)param_1 + 0x7ec) + *(float *)((longlong)param_1 + 0x62c);
      *(float *)(param_1 + 0xc5) = fVar21 + *(float *)(param_1 + 0xc5);
    }
    bVar5 = false;
    bVar4 = false;
    plVar13 = param_1 + 0xba;
    iVar20 = 1;
    iStack_f0 = 0;
    local_f8 = plVar13;
    while ((iVar10 = iStack_f0, -1 < iStack_f0 && (iStack_f0 < (int)param_1[0xbb]))) {
      lVar17 = *plVar13;
      _Dst = (void *)((longlong)iStack_f0 * 0x20 + lVar17);
      fVar21 = param_2 + *(float *)((longlong)_Dst + 0xc);
      *(float *)((longlong)_Dst + 0xc) = fVar21;
      if ((*(float *)((longlong)_Dst + 8) < 0.0) || (fVar21 < *(float *)((longlong)_Dst + 8))) {
        uVar9 = *(uint *)((longlong)_Dst + 0x10);
        if ((uVar9 & 1) != 0) {
          fVar21 = *(float *)((longlong)_Dst + 0x14);
          fVar22 = *pfVar19;
          if ((*pfVar19 <= fVar21) && (fVar22 = fVar21, 1.0 <= fVar21)) {
            fVar22 = 1.0;
          }
          *pfVar19 = fVar22;
          uVar9 = *(uint *)((longlong)_Dst + 0x10);
        }
        if ((uVar9 & 2) != 0) {
          fVar21 = *(float *)((longlong)_Dst + 0x14);
          fVar22 = *(float *)((longlong)param_1 + 0x624);
          if ((*(float *)((longlong)param_1 + 0x624) <= fVar21) && (fVar22 = fVar21, 1.0 <= fVar21))
          {
            fVar22 = 1.0;
          }
          *(float *)((longlong)param_1 + 0x624) = fVar22;
          uVar9 = *(uint *)((longlong)_Dst + 0x10);
        }
        if ((uVar9 & 4) != 0) {
          fVar21 = *(float *)((longlong)_Dst + 0x14);
          fVar22 = *(float *)(param_1 + 0xc5);
          if ((*(float *)(param_1 + 0xc5) <= fVar21) && (fVar22 = fVar21, 1.0 <= fVar21)) {
            fVar22 = 1.0;
          }
          *(float *)(param_1 + 0xc5) = fVar22;
          uVar9 = *(uint *)((longlong)_Dst + 0x10);
        }
        if ((uVar9 & 8) != 0) {
          fVar21 = *(float *)((longlong)_Dst + 0x14);
          fVar22 = *(float *)((longlong)param_1 + 0x62c);
          if ((*(float *)((longlong)param_1 + 0x62c) <= fVar21) && (fVar22 = fVar21, 1.0 <= fVar21))
          {
            fVar22 = 1.0;
          }
          *(float *)((longlong)param_1 + 0x62c) = fVar22;
        }
        iStack_f0 = iStack_f0 + 1;
        iVar20 = iVar20 + 1;
      }
      else {
        iVar16 = (int)param_1[0xbb];
        iVar8 = (iVar16 - iStack_f0) + -1;
        if (iVar8 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (_Dst,(void *)((longlong)iVar20 * 0x20 + lVar17),(longlong)iVar8 << 5);
          iVar16 = (int)param_1[0xbb];
        }
        *(int *)(param_1 + 0xbb) = iVar16 + -1;
        TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar13);
        iStack_f0 = iVar10;
      }
    }
    lVar17 = param_1[0xbc];
    lVar18 = (longlong)(int)param_1[0xbd] * 0x10 + lVar17;
    for (; lVar17 != lVar18; lVar17 = lVar17 + 0x10) {
      puVar2 = *(uint **)(lVar17 + 8);
      uVar9 = *puVar2;
      if ((uVar9 & 1) != 0) {
        fVar21 = (float)puVar2[1];
        fVar22 = *pfVar19;
        if ((*pfVar19 <= fVar21) && (fVar22 = fVar21, 1.0 <= fVar21)) {
          fVar22 = 1.0;
        }
        *pfVar19 = fVar22;
        uVar9 = *puVar2;
      }
      if ((uVar9 & 2) != 0) {
        fVar21 = (float)puVar2[1];
        fVar22 = *(float *)((longlong)param_1 + 0x624);
        if ((*(float *)((longlong)param_1 + 0x624) <= fVar21) && (fVar22 = fVar21, 1.0 <= fVar21)) {
          fVar22 = 1.0;
        }
        *(float *)((longlong)param_1 + 0x624) = fVar22;
        uVar9 = *puVar2;
      }
      if ((uVar9 & 4) != 0) {
        fVar21 = (float)puVar2[1];
        fVar22 = *(float *)(param_1 + 0xc5);
        if ((*(float *)(param_1 + 0xc5) <= fVar21) && (fVar22 = fVar21, 1.0 <= fVar21)) {
          fVar22 = 1.0;
        }
        *(float *)(param_1 + 0xc5) = fVar22;
        uVar9 = *puVar2;
      }
      if ((uVar9 & 8) != 0) {
        fVar21 = (float)puVar2[1];
        fVar22 = *(float *)((longlong)param_1 + 0x62c);
        if ((*(float *)((longlong)param_1 + 0x62c) <= fVar21) && (fVar22 = fVar21, 1.0 <= fVar21)) {
          fVar22 = 1.0;
        }
        *(float *)((longlong)param_1 + 0x62c) = fVar22;
      }
    }
    lVar17 = FUN_142368dc0(lVar11,0);
    if (lVar17 != 0) {
      puVar12 = (undefined8 *)(**(code **)(*param_1 + 0xe40))(param_1,local_88);
      local_b0 = *(undefined4 *)(puVar12 + 1);
      local_b8 = *puVar12;
      FUN_14237b290(lVar17,&local_b8,pfVar19);
    }
    fVar21 = *(float *)((longlong)param_1 + 0x6ac);
    fVar22 = fVar21 * *pfVar19;
    if (0.0 <= fVar22) {
      if (1.0 <= fVar22) {
        fVar22 = 1.0;
      }
    }
    else {
      fVar22 = 0.0;
    }
    *pfVar19 = fVar22;
    fVar22 = fVar21 * *(float *)(param_1 + 0xc5);
    if (0.0 <= fVar22) {
      if (1.0 <= fVar22) {
        fVar22 = 1.0;
      }
    }
    else {
      fVar22 = 0.0;
    }
    *(float *)(param_1 + 0xc5) = fVar22;
    fVar22 = fVar21 * *(float *)((longlong)param_1 + 0x624);
    if (0.0 <= fVar22) {
      if (1.0 <= fVar22) {
        fVar22 = 1.0;
      }
    }
    else {
      fVar22 = 0.0;
    }
    fVar21 = fVar21 * *(float *)((longlong)param_1 + 0x62c);
    *(float *)((longlong)param_1 + 0x624) = fVar22;
    fVar22 = 0.0;
    if ((0.0 <= fVar21) && (fVar22 = fVar21, 1.0 <= fVar21)) {
      fVar22 = 1.0;
    }
    plVar13 = param_1 + 0xbe;
    *(float *)((longlong)param_1 + 0x62c) = fVar22;
    if (*plVar13 != 0) {
      cVar7 = FActiveHapticFeedbackEffect::Update(*plVar13,param_2,&local_e8);
      if (cVar7 == '\0') {
        puVar12 = (undefined8 *)*plVar13;
        if (*(char *)(puVar12 + 1) == '\0') {
          local_120 = (longlong *)0x0;
          if (plVar13 != &local_128) {
            *plVar13 = 0;
            local_128 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xbf,&local_120);
            plVar13 = local_120;
            if (local_120 != (longlong *)0x0) {
              LOCK();
              plVar15 = local_120 + 1;
              lVar17 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar17 == 1) {
                (**(code **)*local_120)(local_120);
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                iVar20 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar20 == 1) {
                  (**(code **)(*local_120 + 8))(local_120,1);
                }
              }
            }
          }
        }
        else {
          *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
          (**(code **)(*(longlong *)*puVar12 + 0x278))();
        }
      }
      bVar4 = true;
    }
    plVar13 = param_1 + 0xc0;
    if (*plVar13 != 0) {
      cVar7 = FActiveHapticFeedbackEffect::Update(*plVar13,param_2,&local_d8);
      if (cVar7 == '\0') {
        puVar12 = (undefined8 *)*plVar13;
        if (*(char *)(puVar12 + 1) == '\0') {
          local_110 = (longlong *)0x0;
          if (plVar13 != &local_118) {
            *plVar13 = 0;
            local_118 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xc1,&local_110);
            plVar13 = local_110;
            if (local_110 != (longlong *)0x0) {
              LOCK();
              plVar15 = local_110 + 1;
              lVar17 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar17 == 1) {
                (**(code **)*local_110)(local_110);
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                iVar20 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar20 == 1) {
                  (**(code **)(*local_110 + 8))(local_110,1);
                }
              }
            }
          }
        }
        else {
          *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
          (**(code **)(*(longlong *)*puVar12 + 0x278))();
        }
      }
      bVar6 = true;
    }
    plVar13 = param_1 + 0xc2;
    if (*plVar13 != 0) {
      cVar7 = FActiveHapticFeedbackEffect::Update(*plVar13,param_2,&local_c8);
      if (cVar7 == '\0') {
        puVar12 = (undefined8 *)*plVar13;
        if (*(char *)(puVar12 + 1) != '\0') {
          *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
          (**(code **)(*(longlong *)*puVar12 + 0x278))();
          bVar5 = true;
          goto LAB_14271334d;
        }
        local_100 = (longlong *)0x0;
        if (plVar13 != &local_108) {
          *plVar13 = 0;
          local_108 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xc3,&local_100);
          plVar13 = local_100;
          if (local_100 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_100 + 1;
            lVar17 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*local_100)(local_100);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar20 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar20 == 1) {
                (**(code **)(*local_100 + 8))(local_100,1);
              }
            }
          }
        }
      }
      bVar5 = true;
    }
  }
LAB_14271334d:
  if ((((*(char *)((longlong)param_1 + 0x6cc) != '\0') && (DAT_1469f4590 != 0)) &&
      (iVar20 = (**(code **)(*param_1 + 0xd80))(param_1), iVar20 != 0xff)) &&
     (plVar13 = (longlong *)(**(code **)(*DAT_1469eaf48 + 0xd0))(), plVar13 != (longlong *)0x0)) {
    pfVar14 = (float *)(**(code **)(*param_1 + 0xee0))(param_1,local_7c,pfVar19);
    fVar21 = pfVar14[1];
    fVar22 = pfVar14[2];
    fVar3 = pfVar14[3];
    *pfVar19 = *pfVar14;
    *(float *)((longlong)param_1 + 0x624) = fVar21;
    *(float *)(param_1 + 0xc5) = fVar22;
    *(float *)((longlong)param_1 + 0x62c) = fVar3;
    iVar10 = FUN_14046e5c0(*(undefined8 *)(lVar11 + 400));
    if (1 < iVar10) {
      plVar15 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
      lVar11 = plVar15[0x1f];
      if (lVar11 == 0) {
        (**(code **)(*plVar15 + 0x368))(plVar15);
        lVar11 = plVar15[0x1f];
      }
      if (*(char *)(lVar11 + 0x6b) != '\0') {
        iVar20 = iVar20 + -1;
      }
    }
    if ((*(byte *)(param_1 + 0xd5) & 0x20) == 0) {
      pfVar19 = local_98;
      local_98[0] = 0.0;
      local_98[1] = 0.0;
      local_98[2] = 0.0;
      local_98[3] = 0.0;
    }
    else {
      local_a8 = *pfVar19;
      uStack_a4 = *(undefined4 *)((longlong)param_1 + 0x624);
      uStack_a0 = (undefined4)param_1[0xc5];
      uStack_9c = *(undefined4 *)((longlong)param_1 + 0x62c);
      pfVar19 = &local_a8;
    }
    (**(code **)(*plVar13 + 0x10))(plVar13,iVar20,pfVar19);
    if ((*DAT_146b08b98 < 1) && ((*(byte *)((longlong)param_1 + 0x7d4) & 1) == 0)) {
      if (bVar4) {
        (**(code **)(*plVar13 + 0x18))(plVar13,iVar20,0,&local_e8);
      }
      if (bVar6) {
        (**(code **)(*plVar13 + 0x18))(plVar13,iVar20,1,&local_d8);
      }
      if (bVar5) {
        (**(code **)(*plVar13 + 0x18))(plVar13,iVar20,5,&local_c8);
      }
    }
  }
  return;
}



// FUNCTION 1427134d0 FUN_1427134d0 body=207 status=ok
// SIG undefined FUN_1427134d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427134d0(longlong *param_1,undefined4 param_2,undefined1 param_3)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b08db8) {
    _Init_thread_header(&DAT_146b08db8);
    if (DAT_146b08db8 == -1) {
      atexit((_func_5014 *)&LAB_143eb7c70);
      _Init_thread_footer(&DAT_146b08db8);
    }
  }
  (**(code **)(*param_1 + 0xd68))(param_1,&DAT_146b08da8);
  FUN_1428b69b0(param_1[0xb7],&DAT_146b08da8,param_2,param_3);
  _DAT_146b08db0 = 0;
  if ((DAT_146b08db4 < 0) && (DAT_146b08db4 != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b08da8,0);
  }
  return;
}



// FUNCTION 1427135a0 K2_AttachTo body=23 status=ok
// SIG undefined K2_AttachTo(void)

void USceneComponent::K2_AttachTo(void)

{
  FUN_14245ba60();
  return;
}



// FUNCTION 1427135c0 FUN_1427135c0 body=423 status=ok
// SIG undefined FUN_1427135c0(void)

ulonglong FUN_1427135c0(longlong param_1,float *param_2,undefined8 *param_3,char param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong in_RAX;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float local_res8;
  float local_resc;
  float local_188;
  float local_184;
  float local_180;
  undefined4 local_b8;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [64];
  
  plVar4 = *(longlong **)(param_1 + 0x508);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = ULocalPlayer::GetPrivateStaticClass();
    iVar3 = *(int *)(lVar5 + 0x90);
    uVar6 = (longlong)iVar3;
    if ((*(int *)(plVar4[2] + 0x90) < iVar3) ||
       (uVar6 = *(ulonglong *)(plVar4[2] + 0x88),
       *(longlong *)(uVar6 + (longlong)iVar3 * 8) != lVar5 + 0x88)) {
      in_RAX = uVar6 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar6 >> 8),1);
    }
    if (((char)in_RAX != '\0') && (plVar4[0xe] != 0)) {
      local_b8 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      in_RAX = (**(code **)(*plVar4 + 0x2d0))
                         (plVar4,*(undefined8 *)(plVar4[0xe] + 0xb0),0,&local_188);
      if ((char)in_RAX != '\0') {
        FSceneViewProjectionData::ComputeViewProjectionMatrix(&local_188,local_48);
        in_RAX = FSceneView::ProjectWorldToScreen(param_2,&local_58,local_48,&local_res8);
        if ((char)in_RAX != '\0') {
          if (param_4 != '\0') {
            local_res8 = local_res8 - (float)(int)local_58;
            local_resc = local_resc - (float)(int)((ulonglong)local_58 >> 0x20);
          }
          fVar7 = *param_2;
          fVar1 = param_2[2];
          fVar2 = param_2[1];
          *param_3 = CONCAT44(local_resc,local_res8);
          fVar7 = SQRT((fVar2 - local_184) * (fVar2 - local_184) +
                       (fVar7 - local_188) * (fVar7 - local_188) +
                       (fVar1 - local_180) * (fVar1 - local_180));
          *(float *)(param_3 + 1) = fVar7;
          return CONCAT71((uint7)(uint3)((uint)fVar7 >> 8),1);
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142713770 FUN_142713770 body=666 status=ok
// SIG undefined FUN_142713770(void)

undefined8 * FUN_142713770(longlong *param_1,undefined8 *param_2,float *param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  
  if ((longlong *)param_1[0xa5] != (longlong *)0x0) {
    fVar2 = (float)(**(code **)(*(longlong *)param_1[0xa5] + 0x778))();
    fVar3 = (float)(**(code **)(*(longlong *)param_1[0xa5] + 0x8b8))();
    if (1e-08 < ABS(fVar3 - fVar2)) {
      fVar2 = (float)(**(code **)(*(longlong *)param_1[0xa5] + 0x8b8))();
      if (1e-08 < ABS(fVar2)) {
        (**(code **)(*param_1 + 0x7a8))(param_1,&local_e8,local_c8);
        FRotationMatrix::FRotationMatrix(&local_b8,local_c8);
        fVar6 = *param_3 - local_e8;
        fVar7 = param_3[1] - local_e4;
        fVar8 = param_3[2] - local_e0;
        FMatrix::InverseFast(&local_b8,&local_78);
        local_d8 = 0;
        local_d0 = 0;
        fVar9 = local_48 * 0.0 + fVar8 * local_58 + fVar7 * local_68 + fVar6 * local_78;
        fVar2 = (float)(**(code **)(*(longlong *)param_1[0xa5] + 0x778))();
        plVar1 = (longlong *)param_1[0xa5];
        fVar2 = _guard_xfg_dispatch_icall_nop(fVar2 * 0.008726646);
        fVar3 = (float)(**(code **)(*plVar1 + 0x8b8))(plVar1);
        fVar3 = _guard_xfg_dispatch_icall_nop(fVar3 * 0.008726646);
        fVar4 = (fStack_40 * 0.0 + fVar8 * fStack_50 + fVar7 * fStack_60 + fVar6 * fStack_70) *
                (fVar2 / fVar3);
        fVar2 = (fStack_44 * 0.0 + fVar8 * fStack_54 + fVar7 * fStack_64 + fVar6 * fStack_74) *
                (fVar2 / fVar3);
        local_e0 = fStack_80 * 0.0 + fVar4 * fStack_90 + fVar2 * fStack_a0 + fVar9 * fStack_b0 +
                   local_e0;
        uVar5 = CONCAT44(fStack_84 * 0.0 + fVar4 * fStack_94 + fVar2 * fStack_a4 + fVar9 * fStack_b4
                         + local_e4,
                         local_88 * 0.0 + fVar4 * local_98 + fVar2 * local_a8 + fVar9 * local_b8 +
                         local_e8);
        goto LAB_1427139dd;
      }
    }
  }
  uVar5 = *(undefined8 *)param_3;
  local_e0 = param_3[2];
LAB_1427139dd:
  *param_2 = uVar5;
  *(float *)(param_2 + 1) = local_e0;
  return param_2;
}



// FUNCTION 142713a10 PushChild body=343 status=ok
// SIG undefined PushChild(void)

void TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
     TConstIterator<TInlineAllocator<99,FDefaultAllocator>_>::PushChild
               (longlong *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  iVar4 = (int)param_1[0x322];
  *(int *)(param_1 + 0x322) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x1914) < iVar4 + 1) {
    TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
    ::ResizeGrow(param_1 + 8,iVar4);
  }
  plVar6 = (longlong *)0x0;
  plVar5 = (longlong *)param_1[800];
  if ((longlong *)param_1[800] == (longlong *)0x0) {
    plVar5 = param_1 + 8;
  }
  plVar5 = plVar5 + (longlong)iVar4 * 8;
  if (plVar5 != (longlong *)0x0) {
    plVar5[2] = 0;
    *(undefined4 *)(plVar5 + 3) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x1c) = 0x3f800000;
    *(undefined8 *)((longlong)plVar5 + 0x24) = 0;
    *(undefined4 *)((longlong)plVar5 + 0x2c) = 0x3f800000;
    *plVar5 = 0;
    plVar6 = plVar5;
  }
  *plVar6 = *(longlong *)(*param_1 + 0x18 + (ulonglong)(param_2 & 7) * 8);
  *(float *)(plVar6 + 2) =
       *(float *)(&DAT_146534f00 + (ulonglong)(param_2 & 1) * 4) *
       *(float *)((longlong)param_1 + 0x34) + *(float *)(param_1 + 2);
  *(float *)((longlong)plVar6 + 0x14) =
       *(float *)(&DAT_146534f00 + (ulonglong)(param_2 >> 1 & 1) * 4) *
       *(float *)((longlong)param_1 + 0x34) + *(float *)((longlong)param_1 + 0x14);
  fVar1 = *(float *)(&DAT_146534f00 + (ulonglong)(param_2 >> 2 & 1) * 4);
  fVar2 = *(float *)((longlong)param_1 + 0x34);
  fVar3 = *(float *)(param_1 + 3);
  *(undefined4 *)((longlong)plVar6 + 0x1c) = 0;
  *(float *)(plVar6 + 3) = fVar1 * fVar2 + fVar3;
  *(int *)(plVar6 + 4) = (int)param_1[6];
  *(int *)((longlong)plVar6 + 0x24) = (int)param_1[6];
  *(int *)(plVar6 + 5) = (int)param_1[6];
  *(undefined4 *)((longlong)plVar6 + 0x2c) = 0;
  fVar1 = *(float *)(param_1 + 6);
  *(float *)(plVar6 + 6) = fVar1 * 0.53125;
  *(float *)((longlong)plVar6 + 0x34) = *(float *)(param_1 + 6) - fVar1 * 0.53125;
  return;
}



// FUNCTION 142713b70 FUN_142713b70 body=368 status=ok
// SIG undefined FUN_142713b70(void)

void FUN_142713b70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  void *_Src;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined4 local_res10;
  undefined4 local_res14;
  
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(&local_res10);
    plVar1 = (longlong *)(param_1 + 0x730);
    TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::RemoveSingle
              (plVar1,&local_res10);
    iVar7 = *(int *)(param_1 + 0x738);
    iVar6 = iVar7;
    while (iVar3 = iVar6 + -1, -1 < iVar3) {
      lVar8 = (longlong)iVar3;
      lVar5 = FWeakObjectPtr::Get(*plVar1 + lVar8 * 8);
      if (lVar5 == 0) {
        iVar6 = *(int *)(param_1 + 0x738);
        iVar4 = (iVar6 - iVar3) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + lVar8 * 8),(void *)(*plVar1 + (longlong)iVar7 * 8),
                     (longlong)iVar4 << 3);
          iVar6 = *(int *)(param_1 + 0x738);
        }
        *(int *)(param_1 + 0x738) = iVar6 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
      }
      else if (*(int *)(lVar5 + 0x1f8) <= *(int *)(param_2 + 0x1f8)) {
        FWeakObjectPtr::operator=(&local_res10,param_2);
        iVar7 = *(int *)(param_1 + 0x738);
        *(int *)(param_1 + 0x738) = iVar7 + 1;
        if (*(int *)(param_1 + 0x73c) < iVar7 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar7);
        }
        _Src = (void *)(*plVar1 + 8 + lVar8 * 8);
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)_Src + 8),_Src,(longlong)(iVar7 - iVar6) << 3);
        lVar5 = *plVar1 + lVar8 * 8;
        *(undefined4 *)(lVar5 + 8) = local_res10;
        *(undefined4 *)(lVar5 + 0xc) = local_res14;
        return;
      }
      iVar7 = iVar7 + -1;
      iVar6 = iVar3;
    }
    FWeakObjectPtr::operator=(&local_res10,param_2);
    iVar7 = *(int *)(param_1 + 0x738);
    *(int *)(param_1 + 0x738) = iVar7 + 1;
    if (*(int *)(param_1 + 0x73c) < iVar7 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar7);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + 8),(void *)*plVar1,(longlong)iVar7 << 3);
    puVar2 = (undefined4 *)*plVar1;
    *puVar2 = local_res10;
    puVar2[1] = local_res14;
  }
  return;
}



// FUNCTION 142713ce0 FUN_142713ce0 body=50 status=ok
// SIG undefined FUN_142713ce0(void)

void FUN_142713ce0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
  if (lVar1 != 0) {
    FUN_1426a4f30(lVar1);
    return;
  }
  return;
}



// FUNCTION 142713d20 FUN_142713d20 body=38 status=ok
// SIG undefined FUN_142713d20(void)

void FUN_142713d20(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_2,1);
  if (lVar1 != 0) {
    FUN_1426a4f30(lVar1);
    return;
  }
  return;
}



// FUNCTION 142713df0 FUN_142713df0 body=66 status=ok
// SIG undefined FUN_142713df0(void)

void FUN_142713df0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_1423d94f0(param_1,0x142);
  if ((cVar1 != '\0') && (param_1[0xf7] == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000142713e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe48))(param_1);
    return;
  }
  return;
}



// FUNCTION 142713e40 FUN_142713e40 body=66 status=ok
// SIG undefined FUN_142713e40(void)

void FUN_142713e40(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_1423d94f0(param_1,0x142);
  if ((cVar1 != '\0') && (param_1[0xf7] == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000142713e75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe48))(param_1);
    return;
  }
  return;
}



// FUNCTION 142713e90 FUN_142713e90 body=203 status=ok
// SIG undefined FUN_142713e90(void)

void FUN_142713e90(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  iVar4 = FUN_142235230();
  if ((iVar4 != 0) && ((longlong *)param_1[0x97] != (longlong *)0x0)) {
    cVar3 = (**(code **)(*(longlong *)param_1[0x97] + 0x20))();
    if (cVar3 != '\0') {
      plVar5 = (longlong *)AFGRailroadVehicle::GetPrivateStaticClass();
      lVar7 = plVar5[0x1f];
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x368))(plVar5);
        lVar7 = plVar5[0x1f];
      }
      plVar5 = (longlong *)UOnlineEngineInterface::Get();
      lVar1 = param_1[0x97];
      lVar2 = *plVar5;
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      (**(code **)(lVar2 + 0x310))(plVar5,uVar6,*(undefined8 *)(lVar7 + 0x4d8),lVar1,param_2);
    }
  }
  return;
}



// FUNCTION 142713f60 FUN_142713f60 body=171 status=ok
// SIG undefined FUN_142713f60(void)

void FUN_142713f60(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x78,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xb0,0);
  uVar1 = 0;
  uVar2 = 0;
  do {
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + ((longlong)(int)uVar2 * 5 + 0x1b) * 8,0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 6);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x1c8,0);
  do {
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + ((longlong)(int)uVar1 * 5 + 0x3e) * 8,0);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 6);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x2e0,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x308,0);
  return;
}



// FUNCTION 142714010 RemoveAtImpl body=125 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FGameplayTag,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = (int)param_1[1];
    iVar2 = (iVar1 - param_2) - param_3;
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0xc),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 0xc),(longlong)iVar2 * 0xc);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 - param_3;
    if (param_4 != '\0') {
      TArray<FVector,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 142714090 FUN_142714090 body=255 status=ok
// SIG undefined FUN_142714090(void)

void FUN_142714090(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_3 != 0) {
    plVar3 = (longlong *)(*param_1 + (longlong)param_2 * 0x28);
    iVar2 = param_3;
    do {
      iVar4 = (int)plVar3[1];
      lVar1 = *plVar3;
      if (iVar4 != 0) {
        lVar1 = lVar1 + 8;
        do {
          FRichCurve::~FRichCurve(lVar1);
          lVar1 = lVar1 + 0x80;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar1 = *plVar3;
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = (int)param_1[1];
    iVar4 = (iVar2 - param_2) - param_3;
    if (param_3 <= iVar4) {
      iVar4 = param_3;
    }
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x28 + *param_1),
                 (void *)(*param_1 + (longlong)(iVar2 - iVar4) * 0x28),(longlong)iVar4 * 0x28);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - param_3;
    if (param_4 != '\0') {
      TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 142714190 FUN_142714190 body=339 status=ok
// SIG undefined FUN_142714190(void)

void FUN_142714190(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  FUN_142359580(param_2);
  lVar1 = (longlong)*(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar5 = 0;
    bVar6 = (longlong *)**(longlong **)(param_1 + 0x20) != param_2;
    lVar2 = 0;
    iVar3 = 0;
    do {
      lVar2 = lVar2 + 1;
      iVar4 = iVar3 + 1;
      if (lVar2 < lVar1) {
        do {
          if (bVar6 != (*(longlong **)(*(longlong *)(param_1 + 0x20) + lVar2 * 8) != param_2))
          break;
          iVar4 = iVar4 + 1;
          lVar2 = lVar2 + 1;
        } while (lVar2 < lVar1);
      }
      if (bVar6 != false) {
        if (iVar5 != iVar3) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar5 * 8),
                     (void *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 8),
                     (longlong)(iVar4 - iVar3) << 3);
        }
        iVar5 = iVar5 + (iVar4 - iVar3);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar3 = iVar4;
    } while (lVar2 < lVar1);
    *(int *)(param_1 + 0x28) = iVar5;
  }
  if ((*(char *)(param_1 + 0x40) != '\0') && (param_2 != (longlong *)0x0)) {
    lVar1 = FUN_1429bed90();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar1 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar1 + 0x90) * 8) !=
        lVar1 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
                    /* WARNING: Could not recover jumptable at 0x0001427142d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x910))(param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 1427142f0 FUN_1427142f0 body=197 status=ok
// SIG undefined FUN_1427142f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427142f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_28;
  longlong local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    if (param_2 != (longlong *)0x0) {
      puVar5 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,local_18);
      local_28 = *puVar5;
      local_20 = puVar5[1];
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*param_2 + 0x118))(param_2,&local_28);
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
  }
  *(undefined8 *)(param_1 + 0x28) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x30) = DAT_1468b5d98;
  return;
}



// FUNCTION 1427143c0 FUN_1427143c0 body=70 status=ok
// SIG undefined FUN_1427143c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427143c0(longlong param_1,longlong *param_2)

{
  if ((*(char *)(param_1 + 8) != '\0') &&
     (*(undefined1 *)(param_1 + 8) = 0, param_2 != (longlong *)0x0)) {
    (**(code **)(*param_2 + 0x138))(param_2,param_1);
  }
  *(undefined8 *)(param_1 + 0xc) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x14) = DAT_1468b5d98;
  return;
}



// FUNCTION 142714410 FUN_142714410 body=268 status=ok
// SIG undefined FUN_142714410(void)

void FUN_142714410(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  
  puVar4 = (undefined8 *)*param_1;
  lVar8 = param_1[1];
  puVar11 = puVar4;
  while( true ) {
    if (puVar11 == puVar4 + (longlong)(int)lVar8 * 2) {
      return;
    }
    plVar5 = (longlong *)puVar11[1];
    puVar6 = (undefined8 *)*puVar11;
    plVar1 = plVar5 + 1;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar1 = (int)*plVar1 + 1;
      UNLOCK();
    }
    if ((*param_2 == 0) || (cVar10 = (**(code **)*puVar6)(), cVar10 == '\0')) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    if (bVar7) break;
    puVar11 = puVar11 + 2;
  }
  uVar12 = (longlong)puVar11 - (longlong)puVar4 >> 4;
  if ((int)uVar12 == -1) {
    return;
  }
  TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
            (param_1,uVar12 & 0xffffffff,1,1);
  return;
}



// FUNCTION 142714520 RemoveSingle body=161 status=ok
// SIG undefined RemoveSingle(void)

undefined8
TArray<TWeakObjectPtr<UInputComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::RemoveSingle
          (longlong *param_1,undefined8 param_2)

{
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar5 = lVar1;
  while( true ) {
    if (lVar5 == lVar1 + (longlong)(int)lVar2 * 8) {
      return 0;
    }
    cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar5,param_2);
    if (cVar3 != '\0') break;
    lVar5 = lVar5 + 8;
  }
  iVar4 = (int)(lVar5 - lVar1 >> 3);
  if (iVar4 == -1) {
    return 0;
  }
  _Dst = (void *)(*param_1 + (longlong)iVar4 * 8);
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,(void *)((longlong)_Dst + 8),(longlong)(((int)param_1[1] - iVar4) + -1) << 3);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return 1;
}



// FUNCTION 1427145d0 FUN_1427145d0 body=180 status=ok
// SIG undefined FUN_1427145d0(void)

void FUN_1427145d0(longlong *param_1)

{
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  if (param_1[0x91] != 0) {
    (**(code **)(*param_1 + 0x788))();
    (**(code **)(*param_1 + 0x780))(param_1);
  }
  FUN_1423de3a0(param_1);
  local_c = local_c & 0xfffffffe;
  local_18 = 0;
  local_10 = 0x40000000;
  local_14 = 1;
  (**(code **)(*param_1 + 0xe18))(param_1,param_1,&local_18);
  (**(code **)(*param_1 + 0xea0))(param_1);
  *(uint *)(param_1 + 200) =
       *(uint *)(param_1 + 200) ^
       (~(*(int *)(param_1[0x8c] + 0x484) << 3) ^ *(uint *)(param_1 + 200)) & 0x10;
                    /* WARNING: Could not recover jumptable at 0x00014271467d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x718))(param_1,0x142);
  return;
}



// FUNCTION 142714690 FUN_142714690 body=42 status=ok
// SIG undefined FUN_142714690(void)

void FUN_142714690(longlong *param_1)

{
  thunk_FUN_1428dfda0();
  *(undefined4 *)(param_1 + 0x8b) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001427146b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x600))(param_1);
  return;
}



// FUNCTION 142714700 FUN_142714700 body=74 status=ok
// SIG undefined FUN_142714700(void)

void FUN_142714700(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x508) != 0) {
    plVar1 = (longlong *)(**(code **)(*DAT_1469eaf48 + 0xd0))();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142714740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))(plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x108));
      return;
    }
  }
  return;
}



// FUNCTION 142714750 FUN_142714750 body=148 status=ok
// SIG undefined FUN_142714750(void)

void FUN_142714750(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x748);
  if ((uVar1 & 1) == 0) {
    plVar2 = (longlong *)FUN_1429e18b0();
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar3 = plVar2[0x1f];
    }
    *(undefined1 *)(param_1 + 0x4d0) = *(undefined1 *)(lVar3 + 0x4d0);
    uVar1 = *(uint *)(param_1 + 0x748);
  }
  if ((uVar1 & 2) == 0) {
    plVar2 = (longlong *)FUN_1429e18b0();
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar3 = plVar2[0x1f];
    }
    *(undefined1 *)(param_1 + 0x4d1) = *(undefined1 *)(lVar3 + 0x4d1);
  }
  return;
}



// FUNCTION 1427147f0 FUN_1427147f0 body=83 status=ok
// SIG undefined FUN_1427147f0(void)

void FUN_1427147f0(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != param_2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 8,param_2);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + param_2;
  if (*(int *)(param_1 + 0x14) < iVar1 + param_2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 8);
  }
  *(int *)(param_1 + 0x18) = param_2;
  return;
}


