// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142008050 Copy body=214 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneBytePropertySectionTemplate>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x38);
    do {
      *(undefined1 *)(puVar1 + -6) = *(undefined1 *)(param_3 + -0x30 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + -5) = *(undefined1 *)(param_3 + -0x28 + (longlong)puVar1);
      puVar1[-4] = *(undefined8 *)(param_3 + -0x20 + (longlong)puVar1);
      puVar1[-3] = *(undefined8 *)(param_3 + -0x18 + (longlong)puVar1);
      FString::operator=(puVar1 + -2,param_3 + -0x10 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      TArray<int,FDefaultAllocator>::operator=(puVar1 + 3,param_3 + 0x18 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(param_3 + 0x28 + (longlong)puVar1);
      *(undefined1 *)((longlong)puVar1 + 0x29) = *(undefined1 *)(param_3 + 0x29 + (longlong)puVar1);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                (puVar1 + 6,param_3 + 0x30 + (longlong)puVar1);
      puVar1[8] = *(undefined8 *)(param_3 + 0x40 + (longlong)puVar1);
      FKeyHandleLookupTable::Reset(puVar1 + 9);
      puVar1 = puVar1 + 0x1c;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142008130 Copy body=346 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneColorSectionTemplate>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    *(undefined1 *)(param_2 + 8) = *(undefined1 *)(param_3 + 8);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    FString::operator=(param_2 + 0x28,param_3 + 0x28);
    puVar3 = (undefined4 *)(param_3 + 0x70);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
    lVar5 = param_2 - param_3;
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_3 + 0x40);
    lVar4 = 4;
    do {
      *(undefined1 *)(lVar5 + -0x20 + (longlong)puVar3) = *(undefined1 *)(puVar3 + -8);
      *(undefined1 *)(lVar5 + -0x1f + (longlong)puVar3) = *(undefined1 *)((longlong)puVar3 + -0x1f);
      TArray<int,FDefaultAllocator>::operator=((longlong)puVar3 + lVar5 + -0x18,puVar3 + -6);
      puVar2 = (undefined8 *)((longlong)puVar3 + lVar5 + -8);
      if (puVar2 != (undefined8 *)(puVar3 + -2)) {
        TArray<FMovieSceneFloatValue,FDefaultAllocator>::CopyToEmpty<FMovieSceneFloatValue>
                  (puVar2,*(undefined8 *)(puVar3 + -2),*puVar3,
                   *(undefined4 *)(lVar5 + 4 + (longlong)puVar3),0);
      }
      *(undefined4 *)(lVar5 + 8 + (longlong)puVar3) = puVar3[2];
      *(undefined1 *)((longlong)puVar3 + lVar5 + 0xc) = *(undefined1 *)(puVar3 + 3);
      FKeyHandleLookupTable::Reset(lVar5 + 0x10 + (longlong)puVar3);
      *(undefined8 *)((longlong)puVar3 + lVar5 + 0x70) = *(undefined8 *)(puVar3 + 0x1c);
      puVar3 = puVar3 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar1 = (undefined1 *)(param_3 + 0x2c8);
    param_3 = param_3 + 0x2d0;
    *(undefined1 *)(param_2 + 0x2c8) = *puVar1;
    param_2 = param_2 + 0x2d0;
  }
  return 1;
}



// FUNCTION 142008290 Copy body=78 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAkCommonInitializationSettingsWithSampleRate>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FUN_142007210(param_2,param_3 + param_2);
      *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_3 + 0x60 + param_2);
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1420082e0 Copy body=160 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneEulerTransformPropertySectionTemplate>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x38);
    do {
      *(undefined1 *)(puVar1 + -6) = *(undefined1 *)(param_3 + -0x30 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + -5) = *(undefined1 *)(param_3 + -0x28 + (longlong)puVar1);
      puVar1[-4] = *(undefined8 *)(param_3 + -0x20 + (longlong)puVar1);
      puVar1[-3] = *(undefined8 *)(param_3 + -0x18 + (longlong)puVar1);
      FString::operator=(puVar1 + -2,param_3 + -0x10 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      FMovieScene3DTransformTemplateData::operator=(puVar1 + 2,param_3 + 0x10 + (longlong)puVar1);
      puVar1 = puVar1 + 0xd3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142008380 Copy body=114 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneEventParameters>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 local_28;
  undefined1 local_20 [24];
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      local_28 = *(undefined8 *)(param_3 + param_2);
      FString::FString(local_20,param_3 + 8 + param_2);
      FSoftObjectPath::operator=(param_2,&local_28);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                (param_2 + 0x18,param_3 + 0x18 + param_2);
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142008400 Copy body=413 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneEventSectionData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (param_4 != 0) {
    plVar8 = (longlong *)(param_3 + 0x18);
    do {
      TArray<int,FDefaultAllocator>::operator=(param_2 + 8,plVar8 + -2);
      plVar1 = (longlong *)(param_2 + 0x18);
      if (plVar1 != plVar8) {
        iVar6 = *(int *)(param_2 + 0x20);
        if (iVar6 != 0) {
          plVar3 = (longlong *)(*plVar1 + 0x10);
          do {
            if (plVar3[2] != 0) {
              FMemory::Free();
            }
            if (*plVar3 != 0) {
              FMemory::Free();
            }
            plVar3 = plVar3 + 6;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        iVar6 = (int)plVar8[1];
        lVar7 = *plVar8;
        *(int *)(param_2 + 0x20) = iVar6;
        if ((iVar6 == 0) && (*(int *)(param_2 + 0x24) == 0)) {
          *(undefined4 *)(param_2 + 0x24) = 0;
        }
        else {
          TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(plVar1,iVar6);
          puVar5 = (undefined8 *)*plVar1;
          if (iVar6 != 0) {
            puVar4 = puVar5 + 4;
            lVar7 = lVar7 + 0x10;
            do {
              *puVar5 = *(undefined8 *)(lVar7 + -0x10);
              puVar4[-3] = *(undefined8 *)(lVar7 + -8);
              FString::FString(puVar4 + -2,lVar7);
              *puVar4 = 0;
              iVar2 = *(int *)(lVar7 + 0x18);
              _Src = *(void **)(lVar7 + 0x10);
              *(int *)(puVar4 + 1) = iVar2;
              if (iVar2 == 0) {
                *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
              }
              else {
                TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar4,iVar2,0);
                ::_guard_xfg_dispatch_icall_nop((void *)*puVar4,_Src,(longlong)iVar2);
              }
              puVar5 = puVar5 + 6;
              puVar4 = puVar4 + 6;
              lVar7 = lVar7 + 0x30;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
      }
      FKeyHandleLookupTable::Reset(param_2 + 0x28);
      plVar8 = plVar8 + 0x11;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x88;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1420085a0 FUN_1420085a0 body=299 status=ok
// SIG undefined FUN_1420085a0(void)

undefined8 FUN_1420085a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  void *_Src;
  undefined1 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined1 *)(param_3 + 8);
    do {
      *(undefined1 *)(param_2 + 8) = *puVar4;
      *(undefined1 *)(param_2 + 0x10) = puVar4[8];
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(puVar4 + 0x10);
      FMovieSceneEventSectionData::operator=(param_2 + 0x20,puVar4 + 0x18);
      puVar1 = (undefined8 *)(param_2 + 0xa8);
      if (puVar1 != (undefined8 *)(puVar4 + 0xa0)) {
        iVar3 = *(int *)(puVar4 + 0xa8);
        _Src = *(void **)(puVar4 + 0xa0);
        *(int *)(param_2 + 0xb0) = iVar3;
        if ((iVar3 == 0) && (*(int *)(param_2 + 0xb4) == 0)) {
          *(undefined4 *)(param_2 + 0xb4) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar3 * 0x18);
        }
      }
      *(uint *)(param_2 + 0xb8) =
           *(uint *)(param_2 + 0xb8) ^ (*(uint *)(param_2 + 0xb8) ^ *(uint *)(puVar4 + 0xb0)) & 1;
      puVar2 = (uint *)(puVar4 + 0xb0);
      puVar4 = puVar4 + 0xc0;
      *(uint *)(param_2 + 0xb8) =
           (*(uint *)(param_2 + 0xb8) ^ *puVar2) & 2 ^ *(uint *)(param_2 + 0xb8);
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xc0;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1420086d0 Copy body=154 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneFadeSectionTemplate>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar5 = (undefined1 *)(param_2 + 0x10);
    do {
      puVar5[-8] = puVar5[param_3 + -8];
      *puVar5 = puVar5[param_3];
      *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar5 + param_3 + 8);
      FMovieSceneFloatChannel::operator=(puVar5 + 0x10,puVar5 + param_3 + 0x10);
      puVar1 = (undefined4 *)(puVar5 + param_3 + 0xb0);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar5 + 0xb0) = *puVar1;
      *(undefined4 *)(puVar5 + 0xb4) = uVar2;
      *(undefined4 *)(puVar5 + 0xb8) = uVar3;
      *(undefined4 *)(puVar5 + 0xbc) = uVar4;
      *(uint *)(puVar5 + 0xc0) =
           *(uint *)(puVar5 + 0xc0) ^
           (*(uint *)(puVar5 + param_3 + 0xc0) ^ *(uint *)(puVar5 + 0xc0)) & 1;
      puVar5 = puVar5 + 0xd8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142008770 FUN_142008770 body=173 status=ok
// SIG undefined FUN_142008770(void)

undefined8 FUN_142008770(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x10);
    do {
      puVar1[-8] = puVar1[param_3 + -8];
      *puVar1 = puVar1[param_3];
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar1 + param_3 + 8);
      FMovieSceneFloatChannel::operator=(puVar1 + 0x10,puVar1 + param_3 + 0x10);
      puVar1[0xb0] = puVar1[param_3 + 0xb0];
      puVar1[0xb1] = puVar1[param_3 + 0xb1];
      puVar1[0xb2] = puVar1[param_3 + 0xb2];
      puVar1[0xb3] = puVar1[param_3 + 0xb3];
      puVar1 = puVar1 + 200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142008820 Copy body=174 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneFloatPropertySectionTemplate>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x38);
    do {
      *(undefined1 *)(puVar1 + -6) = *(undefined1 *)(param_3 + -0x30 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + -5) = *(undefined1 *)(param_3 + -0x28 + (longlong)puVar1);
      puVar1[-4] = *(undefined8 *)(param_3 + -0x20 + (longlong)puVar1);
      puVar1[-3] = *(undefined8 *)(param_3 + -0x18 + (longlong)puVar1);
      FString::operator=(puVar1 + -2,param_3 + -0x10 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      FMovieSceneFloatChannel::operator=(puVar1 + 2,param_3 + 0x10 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 0x16) = *(undefined1 *)(param_3 + 0xb0 + (longlong)puVar1);
      puVar1 = puVar1 + 0x1e;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1420088d0 FUN_1420088d0 body=139 status=ok
// SIG undefined FUN_1420088d0(void)

undefined8 FUN_1420088d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x10);
    do {
      puVar1[-8] = puVar1[param_3 + -8];
      *puVar1 = puVar1[param_3];
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar1 + param_3 + 8);
      FMovieSceneFloatChannel::operator=(puVar1 + 0x10,puVar1 + param_3 + 0x10);
      FMovieSceneBoolChannel::operator=(puVar1 + 0xb0,puVar1 + param_3 + 0xb0);
      puVar1 = puVar1 + 0x150;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142008960 Copy body=314 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneIntegerPropertySectionTemplate>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 0x38);
    do {
      *(undefined1 *)(param_2 + 8) = *(undefined1 *)(puVar3 + -6);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(puVar3 + -5);
      *(undefined8 *)(param_2 + 0x18) = puVar3[-4];
      *(undefined8 *)(param_2 + 0x20) = puVar3[-3];
      FString::operator=(param_2 + 0x28,puVar3 + -2);
      *(undefined8 *)(param_2 + 0x38) = *puVar3;
      *(undefined8 *)(param_2 + 0x40) = puVar3[1];
      TArray<int,FDefaultAllocator>::operator=(param_2 + 0x50,puVar3 + 3);
      puVar1 = (undefined8 *)(param_2 + 0x68);
      *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(puVar3 + 5);
      *(undefined1 *)(param_2 + 100) = *(undefined1 *)((longlong)puVar3 + 0x2c);
      if (puVar1 != puVar3 + 6) {
        iVar2 = *(int *)(puVar3 + 7);
        _Src = (void *)puVar3[6];
        *(int *)(param_2 + 0x70) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x74) == 0)) {
          *(undefined4 *)(param_2 + 0x74) = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 2);
        }
      }
      FKeyHandleLookupTable::Reset(param_2 + 0x78);
      puVar1 = puVar3 + 0x14;
      puVar3 = puVar3 + 0x1c;
      *(undefined1 *)(param_2 + 0xd8) = *(undefined1 *)puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xe0;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142008aa0 FUN_142008aa0 body=213 status=ok
// SIG undefined FUN_142008aa0(void)

undefined8 FUN_142008aa0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined1 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined1 *)(param_3 + 8);
    do {
      *(undefined1 *)(param_2 + 8) = *puVar3;
      puVar1 = (undefined8 *)(param_2 + 0x28);
      *(undefined1 *)(param_2 + 0x10) = puVar3[8];
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(puVar3 + 0x10);
      *(undefined1 *)(param_2 + 0x20) = puVar3[0x18];
      if (puVar1 != (undefined8 *)(puVar3 + 0x20)) {
        iVar2 = *(int *)(puVar3 + 0x28);
        _Src = *(void **)(puVar3 + 0x20);
        *(int *)(param_2 + 0x30) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x34) == 0)) {
          *(undefined4 *)(param_2 + 0x34) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
        }
      }
      puVar3 = puVar3 + 0x38;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x38;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142008b80 FUN_142008b80 body=80 status=ok
// SIG undefined FUN_142008b80(void)

undefined8 FUN_142008b80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FUN_142007210(param_2,param_3 + param_2);
      *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_3 + 0x60 + param_2);
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142008bd0 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FLiveLinkMetaData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_142007210(param_2 + param_3,param_3);
      param_3 = param_3 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142008c20 Copy body=142 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneParticleChannel>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x18);
    do {
      TArray<int,FDefaultAllocator>::operator=(puVar1 + -0x10,puVar1 + param_3 + -0x10);
      *puVar1 = puVar1[param_3];
      puVar1[1] = puVar1[param_3 + 1];
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                (puVar1 + 8,puVar1 + param_3 + 8);
      *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(puVar1 + param_3 + 0x18);
      FKeyHandleLookupTable::Reset(puVar1 + 0x20);
      puVar1 = puVar1 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142008cb0 Copy body=167 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneParticleSectionTemplate>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x10);
    do {
      puVar1[-8] = puVar1[param_3 + -8];
      *puVar1 = puVar1[param_3];
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar1 + param_3 + 8);
      TArray<int,FDefaultAllocator>::operator=(puVar1 + 0x18,puVar1 + param_3 + 0x18);
      puVar1[0x28] = puVar1[param_3 + 0x28];
      puVar1[0x29] = puVar1[param_3 + 0x29];
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=
                (puVar1 + 0x30,puVar1 + param_3 + 0x30);
      *(undefined8 *)(puVar1 + 0x40) = *(undefined8 *)(puVar1 + param_3 + 0x40);
      FKeyHandleLookupTable::Reset(puVar1 + 0x48);
      puVar1 = puVar1 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142008d60 Copy body=426 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneStringPropertySectionTemplate>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    puVar6 = (undefined8 *)(param_3 + 0x38);
    do {
      *(undefined1 *)(param_2 + 8) = *(undefined1 *)(puVar6 + -6);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(puVar6 + -5);
      *(undefined8 *)(param_2 + 0x18) = puVar6[-4];
      *(undefined8 *)(param_2 + 0x20) = puVar6[-3];
      FString::operator=(param_2 + 0x28,puVar6 + -2);
      *(undefined8 *)(param_2 + 0x38) = *puVar6;
      *(undefined8 *)(param_2 + 0x40) = puVar6[1];
      TArray<int,FDefaultAllocator>::operator=(param_2 + 0x50,puVar6 + 3);
      puVar3 = (undefined8 *)(param_2 + 0x60);
      if (puVar3 != puVar6 + 5) {
        plVar2 = (longlong *)*puVar3;
        for (iVar4 = *(int *)(param_2 + 0x68); iVar4 != 0; iVar4 = iVar4 + -1) {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
        }
        iVar4 = *(int *)(puVar6 + 6);
        puVar5 = (undefined8 *)puVar6[5];
        *(int *)(param_2 + 0x68) = iVar4;
        if ((iVar4 == 0) && (*(int *)(param_2 + 0x6c) == 0)) {
          *(undefined4 *)(param_2 + 0x6c) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar3,iVar4);
          puVar3 = (undefined8 *)*puVar3;
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar3 = 0;
            iVar1 = *(int *)(puVar5 + 1);
            _Src = (void *)*puVar5;
            *(int *)(puVar3 + 1) = iVar1;
            if (iVar1 == 0) {
              *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
              ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 * 2);
            }
            puVar3 = puVar3 + 2;
            puVar5 = puVar5 + 2;
          }
        }
      }
      FString::operator=(param_2 + 0x70,puVar6 + 7);
      *(undefined1 *)(param_2 + 0x80) = *(undefined1 *)(puVar6 + 9);
      FKeyHandleLookupTable::Reset(param_2 + 0x88);
      puVar6 = puVar6 + 0x1d;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xe8;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142008f10 Copy body=366 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneVectorPropertySectionTemplate>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    puVar5 = (undefined8 *)(param_3 + 0x38);
    do {
      *(undefined1 *)(param_2 + 8) = *(undefined1 *)(puVar5 + -6);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(puVar5 + -5);
      *(undefined8 *)(param_2 + 0x18) = puVar5[-4];
      *(undefined8 *)(param_2 + 0x20) = puVar5[-3];
      FString::operator=(param_2 + 0x28,puVar5 + -2);
      puVar3 = puVar5 + 7;
      *(undefined8 *)(param_2 + 0x38) = *puVar5;
      lVar6 = param_2 - (longlong)puVar5;
      *(undefined8 *)(param_2 + 0x40) = puVar5[1];
      lVar4 = 4;
      do {
        *(undefined1 *)((longlong)puVar3 + lVar6 + 0x18) = *(undefined1 *)(puVar3 + -4);
        *(undefined1 *)((longlong)puVar3 + lVar6 + 0x19) = *(undefined1 *)((longlong)puVar3 + -0x1f)
        ;
        TArray<int,FDefaultAllocator>::operator=(lVar6 + 0x20 + (longlong)puVar3,puVar3 + -3);
        puVar2 = (undefined8 *)(lVar6 + 0x30 + (longlong)puVar3);
        if (puVar2 != puVar3 + -1) {
          TArray<FMovieSceneFloatValue,FDefaultAllocator>::CopyToEmpty<FMovieSceneFloatValue>
                    (puVar2,puVar3[-1],*(undefined4 *)puVar3,
                     *(undefined4 *)((longlong)puVar3 + lVar6 + 0x3c),0);
        }
        *(undefined4 *)((longlong)puVar3 + lVar6 + 0x40) = *(undefined4 *)(puVar3 + 1);
        *(undefined1 *)((longlong)puVar3 + lVar6 + 0x44) = *(undefined1 *)((longlong)puVar3 + 0xc);
        FKeyHandleLookupTable::Reset(lVar6 + 0x48 + (longlong)puVar3);
        *(undefined8 *)((longlong)puVar3 + lVar6 + 0xa8) = puVar3[0xe];
        puVar3 = puVar3 + 0x14;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      *(undefined4 *)(param_2 + 0x2c8) = *(undefined4 *)(puVar5 + 0x52);
      puVar1 = (undefined1 *)((longlong)puVar5 + 0x294);
      puVar5 = puVar5 + 0x5a;
      *(undefined1 *)(param_2 + 0x2cc) = *puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x2d0;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142009080 Copy body=85 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FScalarParameterNameAndCurve>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - (longlong)param_2;
    do {
      *param_2 = *(undefined8 *)(param_3 + (longlong)param_2);
      FMovieSceneFloatChannel::operator=(param_2 + 1,param_3 + 8 + (longlong)param_2);
      param_2 = param_2 + 0x15;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1420090e0 Copy body=149 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FVectorParameterNameAndCurves>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0xa8;
    do {
      *(undefined8 *)(param_2 + -0xa8) = *(undefined8 *)(param_3 + -0xa8 + param_2);
      FMovieSceneFloatChannel::operator=(param_2 + -0xa0,param_3 + -0xa0 + param_2);
      FMovieSceneFloatChannel::operator=(param_2,param_3 + param_2);
      FMovieSceneFloatChannel::operator=(param_2 + 0xa0,param_3 + 0xa0 + param_2);
      param_2 = param_2 + 0x1e8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142009180 FUN_142009180 body=63 status=ok
// SIG undefined FUN_142009180(void)

void FUN_142009180(undefined8 param_1,longlong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_2 + 0x48);
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_2 + 8) = &PTR_FUN_144f215f0;
  return;
}



// FUNCTION 1420091d0 Destruct body=63 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FScalarParameterNameAndCurve>::Destruct
               (undefined8 param_1,longlong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_2 + 0x40);
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_2 + 8) = &PTR_FUN_144f215f0;
  return;
}



// FUNCTION 142009220 EFireEventsAtPosition_StaticEnum body=55 status=ok
// SIG undefined EFireEventsAtPosition_StaticEnum(void)

void EFireEventsAtPosition_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146acbef0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acbef0 = GetStaticEnum(FUN_14200a5e0,uVar1,L"EFireEventsAtPosition");
  }
  return;
}



// FUNCTION 142009260 ELevelVisibility_StaticEnum body=55 status=ok
// SIG undefined ELevelVisibility_StaticEnum(void)

void ELevelVisibility_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146acbee0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acbee0 = GetStaticEnum(FUN_14200a610,uVar1,L"ELevelVisibility");
  }
  return;
}



// FUNCTION 1420092a0 FUN_1420092a0 body=55 status=ok
// SIG undefined FUN_1420092a0(void)

void FUN_1420092a0(void)

{
  undefined8 uVar1;
  
  if (DAT_146acbee8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acbee8 = GetStaticEnum(FUN_14200a640,uVar1,L"EParticleKey");
  }
  return;
}



// FUNCTION 1420092e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieScenePropertyTrack::GetPrivateStaticClass(void)

{
  if (DAT_146acc310 == 0) {
    FUN_14171ccd0(L"/Script/MovieSceneTracks",L"MovieScenePropertyTrack",&DAT_146acc310,
                  FUN_140447710,0x80,0x10000001,0,L"Engine",&LAB_142006420,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405b7830,&LAB_140447700,0);
  }
  return DAT_146acc310;
}



// FUNCTION 142009390 FUN_142009390 body=6 status=ok
// SIG undefined FUN_142009390(void)

undefined8 FUN_142009390(void)

{
  return 0xb33437f3;
}



// FUNCTION 1420093a0 Get_Z_Construct_UScriptStruct_FColorParameterNameAndCurves_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FColorParameterNameAndCurves_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FColorParameterNameAndCurves_CRC(void)

{
  return 0xd85220dc;
}



// FUNCTION 1420093b0 FUN_1420093b0 body=6 status=ok
// SIG undefined FUN_1420093b0(void)

undefined8 FUN_1420093b0(void)

{
  return 0x61d11165;
}



// FUNCTION 1420093c0 Get_Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_CRC(void)

{
  return 0xfadb650f;
}



// FUNCTION 1420093d0 Get_Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_CRC(void)

{
  return 0x564f0bb9;
}



// FUNCTION 1420093e0 Get_Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_CRC(void)

{
  return 0xf1d2f305;
}



// FUNCTION 1420093f0 Get_Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_CRC(void)

{
  return 0xae466b9;
}



// FUNCTION 142009400 Get_Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_CRC(void)

{
  return 0x998fb529;
}



// FUNCTION 142009410 Get_Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_CRC(void)

{
  return 0xadaa71e1;
}



// FUNCTION 142009420 Get_Z_Construct_UScriptStruct_FMovieSceneEulerTransformPropertySectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneEulerTransformPropertySectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneEulerTransformPropertySectionTemplate_CRC(void)

{
  return 0x3b029ca5;
}



// FUNCTION 142009430 FUN_142009430 body=6 status=ok
// SIG undefined FUN_142009430(void)

undefined8 FUN_142009430(void)

{
  return 0x3f61bacc;
}



// FUNCTION 142009440 FUN_142009440 body=6 status=ok
// SIG undefined FUN_142009440(void)

undefined8 FUN_142009440(void)

{
  return 0x5ee2d26;
}



// FUNCTION 142009450 FUN_142009450 body=6 status=ok
// SIG undefined FUN_142009450(void)

undefined8 FUN_142009450(void)

{
  return 0x7bb1eb6a;
}



// FUNCTION 142009460 Get_Z_Construct_UScriptStruct_FMovieSceneFadeSectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneFadeSectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneFadeSectionTemplate_CRC(void)

{
  return 0x820eeec5;
}



// FUNCTION 142009470 FUN_142009470 body=6 status=ok
// SIG undefined FUN_142009470(void)

undefined8 FUN_142009470(void)

{
  return 0x84bd3ad2;
}



// FUNCTION 142009480 Get_Z_Construct_UScriptStruct_FMovieSceneFloatPropertySectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneFloatPropertySectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneFloatPropertySectionTemplate_CRC(void)

{
  return 0x497b0113;
}



// FUNCTION 142009490 FUN_142009490 body=6 status=ok
// SIG undefined FUN_142009490(void)

undefined8 FUN_142009490(void)

{
  return 0xbf4d7f29;
}



// FUNCTION 1420094a0 Get_Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_CRC(void)

{
  return 0x91516f92;
}



// FUNCTION 1420094b0 Get_Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_CRC(void)

{
  return 0x6e1f1b6d;
}



// FUNCTION 1420094c0 Get_Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_CRC(void)

{
  return 0x424277c4;
}



// FUNCTION 1420094d0 FUN_1420094d0 body=6 status=ok
// SIG undefined FUN_1420094d0(void)

undefined8 FUN_1420094d0(void)

{
  return 0x4f37ca1d;
}



// FUNCTION 1420094e0 Get_Z_Construct_UScriptStruct_FMovieSceneParticleChannel_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneParticleChannel_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneParticleChannel_CRC(void)

{
  return 0xa76dd604;
}



// FUNCTION 1420094f0 Get_Z_Construct_UScriptStruct_FMovieSceneParticleParameterSectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneParticleParameterSectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneParticleParameterSectionTemplate_CRC(void)

{
  return 0x4c8bfac6;
}



// FUNCTION 142009500 Get_Z_Construct_UScriptStruct_FMovieSceneParticleSectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneParticleSectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneParticleSectionTemplate_CRC(void)

{
  return 0x442abc0;
}



// FUNCTION 142009510 Get_Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_CRC(void)

{
  return 0x20030f14;
}



// FUNCTION 142009520 Get_Z_Construct_UScriptStruct_FMovieSceneTransformPropertySectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneTransformPropertySectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneTransformPropertySectionTemplate_CRC(void)

{
  return 0x53ae6323;
}



// FUNCTION 142009530 Get_Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_CRC(void)

{
  return 0xb06f9e96;
}



// FUNCTION 142009540 Get_Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_CRC(void)

{
  return 0xb4bf67c3;
}



// FUNCTION 142009550 Get_Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_CRC(void)

{
  return 0x62673629;
}



// FUNCTION 1420095d0 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_141ffd050(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142009640 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_141ffd080(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1420096b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FScalarParameterNameAndCurve::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc1a0 == 0) {
    uVar1 = FUN_142009390();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc1a0 = GetStaticStruct(FUN_14200a670,uVar2,L"ActorParameterNameAndChannel",0xa8,uVar1);
  }
  return;
}



// FUNCTION 142009710 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FColorParameterNameAndCurves::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc1b0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FColorParameterNameAndCurves_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc1b0 = GetStaticStruct(FUN_14200a6a0,uVar2,L"ColorParameterNameAndCurves",0x288,uVar1);
  }
  return;
}



// FUNCTION 142009770 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FEventPayload::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc000 == 0) {
    uVar1 = FUN_1420093b0();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc000 = GetStaticStruct(FUN_14200a6d0,uVar2,L"EventPayload",0x30,uVar1);
  }
  return;
}



// FUNCTION 1420097d0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneBoolPropertySectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc2f8 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc2f8 =
         GetStaticStruct(FUN_14200a700,uVar2,L"MovieSceneBoolPropertySectionTemplate",0xd8,uVar1);
  }
  return;
}



// FUNCTION 142009830 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneBytePropertySectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc2d8 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneBytePropertySectionTemplate_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc2d8 =
         GetStaticStruct(FUN_14200a730,uVar2,L"MovieSceneBytePropertySectionTemplate",0xe0,uVar1);
  }
  return;
}



// FUNCTION 142009890 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneColorKeyStruct::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acbf80 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acbf80 = GetStaticStruct(FUN_14200a760,uVar2,L"MovieSceneColorKeyStruct",0x38,uVar1);
  }
  return;
}



// FUNCTION 1420098f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneColorSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acbfa0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acbfa0 =
         GetStaticStruct(FUN_14200a790,uVar2,L"MovieSceneColorSectionTemplate",0x2d0,uVar1);
  }
  return;
}



// FUNCTION 142009950 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneComponentMaterialSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc1f0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneComponentMaterialSectionTemplate_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc1f0 =
         GetStaticStruct(FUN_14200a7c0,uVar2,L"MovieSceneComponentMaterialSectionTemplate",0x68,
                         uVar1);
  }
  return;
}



// FUNCTION 1420099b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEnumPropertySectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc2c8 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneEnumPropertySectionTemplate_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc2c8 =
         GetStaticStruct(FUN_14200a7f0,uVar2,L"MovieSceneEnumPropertySectionTemplate",0xe0,uVar1);
  }
  return;
}



// FUNCTION 142009a10 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEulerTransformPropertySectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc278 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneEulerTransformPropertySectionTemplate_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc278 =
         GetStaticStruct(FUN_14200a820,uVar2,L"MovieSceneEulerTransformPropertySectionTemplate",
                         0x698,uVar1);
  }
  return;
}



// FUNCTION 142009a70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventParameters::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc010 == 0) {
    uVar1 = FUN_142009430();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc010 = GetStaticStruct(FUN_14200a850,uVar2,L"MovieSceneEventParameters",0x28,uVar1);
  }
  return;
}



// FUNCTION 142009ad0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventSectionData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acbff0 == 0) {
    uVar1 = FUN_142009440();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acbff0 = GetStaticStruct(FUN_14200a880,uVar2,L"MovieSceneEventSectionData",0x88,uVar1);
  }
  return;
}



// FUNCTION 142009b30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc030 == 0) {
    uVar1 = FUN_142009450();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc030 =
         GetStaticStruct(FUN_14200a8b0,uVar2,L"MovieSceneEventSectionTemplate",0xc0,uVar1);
  }
  return;
}



// FUNCTION 142009b90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneFadeSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc068 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneFadeSectionTemplate_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc068 = GetStaticStruct(FUN_14200a8e0,uVar2,L"MovieSceneFadeSectionTemplate",0xd8,uVar1)
    ;
  }
  return;
}



// FUNCTION 142009bf0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneSkeletalAnimationParams::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc098 == 0) {
    uVar1 = FUN_142009470();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc098 =
         GetStaticStruct(FUN_14200a910,uVar2,L"MovieSceneFeedbackSectionTemplate",200,uVar1);
  }
  return;
}



// FUNCTION 142009c50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneFloatPropertySectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc2e8 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneFloatPropertySectionTemplate_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc2e8 =
         GetStaticStruct(FUN_14200a940,uVar2,L"MovieSceneFloatPropertySectionTemplate",0xf0,uVar1);
  }
  return;
}



// FUNCTION 142009cb0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FVector2DParameterNameAndCurves::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc0e8 == 0) {
    uVar1 = FUN_142009490();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc0e8 =
         GetStaticStruct(FUN_14200a970,uVar2,L"MovieSceneGbxPlayRateSectionTemplate",0x150,uVar1);
  }
  return;
}



// FUNCTION 142009d10 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneIntegerPropertySectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc2b8 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneIntegerPropertySectionTemplate_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc2b8 =
         GetStaticStruct(FUN_14200a9a0,uVar2,L"MovieSceneIntegerPropertySectionTemplate",0xe0,uVar1)
    ;
  }
  return;
}



// FUNCTION 142009d70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneLevelVisibilitySectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc140 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneLevelVisibilitySectionTemplate_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc140 =
         GetStaticStruct(FUN_14200a9d0,uVar2,L"MovieSceneLevelVisibilitySectionTemplate",0x38,uVar1)
    ;
  }
  return;
}



// FUNCTION 142009dd0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneMaterialParameterCollectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc160 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneMaterialParameterCollectionTemplate_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc160 =
         GetStaticStruct(FUN_14200aa00,uVar2,L"MovieSceneMaterialParameterCollectionTemplate",0x68,
                         uVar1);
  }
  return;
}



// FUNCTION 142009e30 FUN_142009e30 body=82 status=ok
// SIG undefined FUN_142009e30(void)

void FUN_142009e30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc200 == 0) {
    uVar1 = FUN_1420094d0();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc200 =
         GetStaticStruct(FUN_1420049a0,uVar2,L"MovieSceneParameterSectionTemplate",0x60,uVar1);
  }
  return;
}



// FUNCTION 142009e90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneParticleChannel::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc238 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneParticleChannel_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc238 = GetStaticStruct(FUN_14200aa30,uVar2,L"MovieSceneParticleChannel",0x98,uVar1);
  }
  return;
}



// FUNCTION 142009ef0 FUN_142009ef0 body=82 status=ok
// SIG undefined FUN_142009ef0(void)

void FUN_142009ef0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc210 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneParticleParameterSectionTemplate_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc210 =
         GetStaticStruct(FUN_14200aa60,uVar2,L"MovieSceneParticleParameterSectionTemplate",0x60,
                         uVar1);
  }
  return;
}



// FUNCTION 142009f50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneParticleSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc258 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneParticleSectionTemplate_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc258 =
         GetStaticStruct(FUN_14200aa90,uVar2,L"MovieSceneParticleSectionTemplate",0xb8,uVar1);
  }
  return;
}



// FUNCTION 142009fb0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneStringPropertySectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc2a8 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneStringPropertySectionTemplate_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc2a8 =
         GetStaticStruct(FUN_14200aac0,uVar2,L"MovieSceneStringPropertySectionTemplate",0xe8,uVar1);
  }
  return;
}



// FUNCTION 14200a010 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneTransformPropertySectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc288 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneTransformPropertySectionTemplate_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc288 =
         GetStaticStruct(FUN_14200aaf0,uVar2,L"MovieSceneTransformPropertySectionTemplate",0x698,
                         uVar1);
  }
  return;
}



// FUNCTION 14200a070 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneVectorPropertySectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc298 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneVectorPropertySectionTemplate_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc298 =
         GetStaticStruct(FUN_14200ab20,uVar2,L"MovieSceneVectorPropertySectionTemplate",0x2d0,uVar1)
    ;
  }
  return;
}



// FUNCTION 14200a0d0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FScalarParameterNameAndCurve::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc1d0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FScalarParameterNameAndCurve_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc1d0 = GetStaticStruct(FUN_14200ab50,uVar2,L"ScalarParameterNameAndCurve",0xa8,uVar1);
  }
  return;
}



// FUNCTION 14200a130 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FVectorParameterNameAndCurves::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acc1c0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FVectorParameterNameAndCurves_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    DAT_146acc1c0 = GetStaticStruct(FUN_14200ab80,uVar2,L"VectorParameterNameAndCurves",0x1e8,uVar1)
    ;
  }
  return;
}



// FUNCTION 14200a190 FUN_14200a190 body=47 status=ok
// SIG undefined FUN_14200a190(void)

longlong FUN_14200a190(void)

{
  if (DAT_146acbf90 == 0) {
    FUN_141786440(&DAT_146acbf90,&PTR_GetPrivateStaticClass_144f5cd50);
  }
  return DAT_146acbf90;
}



// FUNCTION 14200a1c0 FUN_14200a1c0 body=47 status=ok
// SIG undefined FUN_14200a1c0(void)

longlong FUN_14200a1c0(void)

{
  if (DAT_146acbfb0 == 0) {
    FUN_141786440(&DAT_146acbfb0,&PTR_StaticClass_144f5d240);
  }
  return DAT_146acbfb0;
}



// FUNCTION 14200a1f0 FUN_14200a1f0 body=47 status=ok
// SIG undefined FUN_14200a1f0(void)

longlong FUN_14200a1f0(void)

{
  if (DAT_146acc190 == 0) {
    FUN_141786440(&DAT_146acc190,&PTR_StaticClass_144f59b30);
  }
  return DAT_146acc190;
}



// FUNCTION 14200a220 FUN_14200a220 body=47 status=ok
// SIG undefined FUN_14200a220(void)

longlong FUN_14200a220(void)

{
  if (DAT_146acbfc0 == 0) {
    FUN_141786440(&DAT_146acbfc0,&PTR_GetPrivateStaticClass_144f58d80);
  }
  return DAT_146acbfc0;
}



// FUNCTION 14200a250 FUN_14200a250 body=47 status=ok
// SIG undefined FUN_14200a250(void)

longlong FUN_14200a250(void)

{
  if (DAT_146acbfd0 == 0) {
    FUN_141786440(&DAT_146acbfd0,&PTR_StaticClass_144f590f0);
  }
  return DAT_146acbfd0;
}



// FUNCTION 14200a280 FUN_14200a280 body=47 status=ok
// SIG undefined FUN_14200a280(void)

longlong FUN_14200a280(void)

{
  if (DAT_146acbfe0 == 0) {
    FUN_141786440(&DAT_146acbfe0,&PTR_StaticClass_144f59370);
  }
  return DAT_146acbfe0;
}



// FUNCTION 14200a2b0 FUN_14200a2b0 body=47 status=ok
// SIG undefined FUN_14200a2b0(void)

longlong FUN_14200a2b0(void)

{
  if (DAT_146acc020 == 0) {
    FUN_141786440(&DAT_146acc020,&PTR_GetPrivateStaticClass_144f5b560);
  }
  return DAT_146acc020;
}



// FUNCTION 14200a2e0 FUN_14200a2e0 body=47 status=ok
// SIG undefined FUN_14200a2e0(void)

longlong FUN_14200a2e0(void)

{
  if (DAT_146acc048 == 0) {
    FUN_141786440(&DAT_146acc048,&PTR_StaticClass_144f5c160);
  }
  return DAT_146acc048;
}



// FUNCTION 14200a310 FUN_14200a310 body=47 status=ok
// SIG undefined FUN_14200a310(void)

longlong FUN_14200a310(void)

{
  if (DAT_146acc058 == 0) {
    FUN_141786440(&DAT_146acc058,&PTR_GetPrivateStaticClass_144f5c3e0);
  }
  return DAT_146acc058;
}



// FUNCTION 14200a340 FUN_14200a340 body=47 status=ok
// SIG undefined FUN_14200a340(void)

longlong FUN_14200a340(void)

{
  if (DAT_146acc078 == 0) {
    FUN_141786440(&DAT_146acc078,&PTR_StaticClass_144f5c650);
  }
  return DAT_146acc078;
}



// FUNCTION 14200a370 FUN_14200a370 body=47 status=ok
// SIG undefined FUN_14200a370(void)

longlong FUN_14200a370(void)

{
  if (DAT_146acc088 == 0) {
    FUN_141786440(&DAT_146acc088,&PTR_FUN_144f5c7a0);
  }
  return DAT_146acc088;
}



// FUNCTION 14200a3a0 FUN_14200a3a0 body=47 status=ok
// SIG undefined FUN_14200a3a0(void)

longlong FUN_14200a3a0(void)

{
  if (DAT_146acc0a8 == 0) {
    FUN_141786440(&DAT_146acc0a8,&PTR_FUN_144f5cbd0);
  }
  return DAT_146acc0a8;
}



// FUNCTION 14200a3d0 FUN_14200a3d0 body=47 status=ok
// SIG undefined FUN_14200a3d0(void)

longlong FUN_14200a3d0(void)

{
  if (DAT_146acc0d8 == 0) {
    FUN_141786440(&DAT_146acc0d8,&PTR_GetPrivateStaticClass_144f59bf0);
  }
  return DAT_146acc0d8;
}



// FUNCTION 14200a400 FUN_14200a400 body=47 status=ok
// SIG undefined FUN_14200a400(void)

longlong FUN_14200a400(void)

{
  if (DAT_146acc0f8 == 0) {
    FUN_141786440(&DAT_146acc0f8,&PTR_FUN_144f5a1c0);
  }
  return DAT_146acc0f8;
}



// FUNCTION 14200a430 FUN_14200a430 body=47 status=ok
// SIG undefined FUN_14200a430(void)

longlong FUN_14200a430(void)

{
  if (DAT_146acc108 == 0) {
    FUN_141786440(&DAT_146acc108,&PTR_GetPrivateStaticClass_144f5a9d0);
  }
  return DAT_146acc108;
}



// FUNCTION 14200a460 FUN_14200a460 body=47 status=ok
// SIG undefined FUN_14200a460(void)

longlong FUN_14200a460(void)

{
  if (DAT_146acc118 == 0) {
    FUN_141786440(&DAT_146acc118,&PTR_StaticClass_144f5ad50);
  }
  return DAT_146acc118;
}



// FUNCTION 14200a490 FUN_14200a490 body=47 status=ok
// SIG undefined FUN_14200a490(void)

longlong FUN_14200a490(void)

{
  if (DAT_146acc130 == 0) {
    FUN_141786440(&DAT_146acc130,&PTR_GetPrivateStaticClass_144f5b100);
  }
  return DAT_146acc130;
}



// FUNCTION 14200a4c0 FUN_14200a4c0 body=47 status=ok
// SIG undefined FUN_14200a4c0(void)

longlong FUN_14200a4c0(void)

{
  if (DAT_146acc150 == 0) {
    FUN_141786440(&DAT_146acc150,&PTR_StaticClass_144f5b840);
  }
  return DAT_146acc150;
}



// FUNCTION 14200a4f0 FUN_14200a4f0 body=47 status=ok
// SIG undefined FUN_14200a4f0(void)

longlong FUN_14200a4f0(void)

{
  if (DAT_146acc170 == 0) {
    FUN_141786440(&DAT_146acc170,&PTR_StaticClass_144f597f0);
  }
  return DAT_146acc170;
}



// FUNCTION 14200a520 FUN_14200a520 body=47 status=ok
// SIG undefined FUN_14200a520(void)

longlong FUN_14200a520(void)

{
  if (DAT_146acc1e0 == 0) {
    FUN_141786440(&DAT_146acc1e0,&PTR_FUN_144f5a550);
  }
  return DAT_146acc1e0;
}



// FUNCTION 14200a550 FUN_14200a550 body=47 status=ok
// SIG undefined FUN_14200a550(void)

longlong FUN_14200a550(void)

{
  if (DAT_146acc220 == 0) {
    FUN_141786440(&DAT_146acc220,&PTR_StaticClass_144f5b220);
  }
  return DAT_146acc220;
}



// FUNCTION 14200a580 FUN_14200a580 body=47 status=ok
// SIG undefined FUN_14200a580(void)

longlong FUN_14200a580(void)

{
  if (DAT_146acc248 == 0) {
    FUN_141786440(&DAT_146acc248,&PTR_GetPrivateStaticClass_144f5bb60);
  }
  return DAT_146acc248;
}



// FUNCTION 14200a5b0 FUN_14200a5b0 body=47 status=ok
// SIG undefined FUN_14200a5b0(void)

longlong FUN_14200a5b0(void)

{
  if (DAT_146acc268 == 0) {
    FUN_141786440(&DAT_146acc268,&PTR_StaticClass_144f5bf00);
  }
  return DAT_146acc268;
}



// FUNCTION 14200a5e0 FUN_14200a5e0 body=47 status=ok
// SIG undefined FUN_14200a5e0(void)

longlong FUN_14200a5e0(void)

{
  if (DAT_146acc040 == 0) {
    FUN_1417866a0(&DAT_146acc040,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ee620);
  }
  return DAT_146acc040;
}



// FUNCTION 14200a610 FUN_14200a610 body=47 status=ok
// SIG undefined FUN_14200a610(void)

longlong FUN_14200a610(void)

{
  if (DAT_146acc128 == 0) {
    FUN_1417866a0(&DAT_146acc128,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ee670);
  }
  return DAT_146acc128;
}



// FUNCTION 14200a640 FUN_14200a640 body=47 status=ok
// SIG undefined FUN_14200a640(void)

longlong FUN_14200a640(void)

{
  if (DAT_146acc230 == 0) {
    FUN_1417866a0(&DAT_146acc230,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ee6c0);
  }
  return DAT_146acc230;
}



// FUNCTION 14200a670 FUN_14200a670 body=47 status=ok
// SIG undefined FUN_14200a670(void)

longlong FUN_14200a670(void)

{
  if (DAT_146acc1a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc1a8,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ed280);
  }
  return DAT_146acc1a8;
}



// FUNCTION 14200a6a0 FUN_14200a6a0 body=47 status=ok
// SIG undefined FUN_14200a6a0(void)

longlong FUN_14200a6a0(void)

{
  if (DAT_146acc1b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc1b8,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ed410);
  }
  return DAT_146acc1b8;
}



// FUNCTION 14200a6d0 FUN_14200a6d0 body=47 status=ok
// SIG undefined FUN_14200a6d0(void)

longlong FUN_14200a6d0(void)

{
  if (DAT_146acc008 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc008,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ebf50);
  }
  return DAT_146acc008;
}



// FUNCTION 14200a700 FUN_14200a700 body=47 status=ok
// SIG undefined FUN_14200a700(void)

longlong FUN_14200a700(void)

{
  if (DAT_146acc300 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc300,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ee4c0);
  }
  return DAT_146acc300;
}



// FUNCTION 14200a730 FUN_14200a730 body=47 status=ok
// SIG undefined FUN_14200a730(void)

longlong FUN_14200a730(void)

{
  if (DAT_146acc2e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc2e0,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ee320);
  }
  return DAT_146acc2e0;
}



// FUNCTION 14200a760 FUN_14200a760 body=47 status=ok
// SIG undefined FUN_14200a760(void)

longlong FUN_14200a760(void)

{
  if (DAT_146acbf88 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acbf88,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464eb980);
  }
  return DAT_146acbf88;
}



// FUNCTION 14200a790 FUN_14200a790 body=47 status=ok
// SIG undefined FUN_14200a790(void)

longlong FUN_14200a790(void)

{
  if (DAT_146acbfa8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acbfa8,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ebbc0);
  }
  return DAT_146acbfa8;
}



// FUNCTION 14200a7c0 FUN_14200a7c0 body=47 status=ok
// SIG undefined FUN_14200a7c0(void)

longlong FUN_14200a7c0(void)

{
  if (DAT_146acc1f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc1f8,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ed8d0);
  }
  return DAT_146acc1f8;
}



// FUNCTION 14200a7f0 FUN_14200a7f0 body=47 status=ok
// SIG undefined FUN_14200a7f0(void)

longlong FUN_14200a7f0(void)

{
  if (DAT_146acc2d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc2d0,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ee290);
  }
  return DAT_146acc2d0;
}



// FUNCTION 14200a820 FUN_14200a820 body=47 status=ok
// SIG undefined FUN_14200a820(void)

longlong FUN_14200a820(void)

{
  if (DAT_146acc280 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc280,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ede80);
  }
  return DAT_146acc280;
}



// FUNCTION 14200a850 FUN_14200a850 body=47 status=ok
// SIG undefined FUN_14200a850(void)

longlong FUN_14200a850(void)

{
  if (DAT_146acc018 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc018,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ebfa0);
  }
  return DAT_146acc018;
}



// FUNCTION 14200a880 FUN_14200a880 body=47 status=ok
// SIG undefined FUN_14200a880(void)

longlong FUN_14200a880(void)

{
  if (DAT_146acbff8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acbff8,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ebe80);
  }
  return DAT_146acbff8;
}



// FUNCTION 14200a8b0 FUN_14200a8b0 body=47 status=ok
// SIG undefined FUN_14200a8b0(void)

longlong FUN_14200a8b0(void)

{
  if (DAT_146acc038 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc038,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ec1f0);
  }
  return DAT_146acc038;
}



// FUNCTION 14200a8e0 FUN_14200a8e0 body=47 status=ok
// SIG undefined FUN_14200a8e0(void)

longlong FUN_14200a8e0(void)

{
  if (DAT_146acc070 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc070,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ec600);
  }
  return DAT_146acc070;
}



// FUNCTION 14200a910 FUN_14200a910 body=47 status=ok
// SIG undefined FUN_14200a910(void)

longlong FUN_14200a910(void)

{
  if (DAT_146acc0a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc0a0,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ec950);
  }
  return DAT_146acc0a0;
}



// FUNCTION 14200a940 FUN_14200a940 body=47 status=ok
// SIG undefined FUN_14200a940(void)

longlong FUN_14200a940(void)

{
  if (DAT_146acc2f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc2f0,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ee430);
  }
  return DAT_146acc2f0;
}



// FUNCTION 14200a970 FUN_14200a970 body=47 status=ok
// SIG undefined FUN_14200a970(void)

longlong FUN_14200a970(void)

{
  if (DAT_146acc0f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc0f0,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ecc00);
  }
  return DAT_146acc0f0;
}



// FUNCTION 14200a9a0 FUN_14200a9a0 body=47 status=ok
// SIG undefined FUN_14200a9a0(void)

longlong FUN_14200a9a0(void)

{
  if (DAT_146acc2c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc2c0,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ee200);
  }
  return DAT_146acc2c0;
}



// FUNCTION 14200a9d0 FUN_14200a9d0 body=47 status=ok
// SIG undefined FUN_14200a9d0(void)

longlong FUN_14200a9d0(void)

{
  if (DAT_146acc148 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc148,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ecf10);
  }
  return DAT_146acc148;
}



// FUNCTION 14200aa00 FUN_14200aa00 body=47 status=ok
// SIG undefined FUN_14200aa00(void)

longlong FUN_14200aa00(void)

{
  if (DAT_146acc168 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc168,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ed040);
  }
  return DAT_146acc168;
}



// FUNCTION 14200aa30 FUN_14200aa30 body=47 status=ok
// SIG undefined FUN_14200aa30(void)

longlong FUN_14200aa30(void)

{
  if (DAT_146acc240 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc240,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464edc50);
  }
  return DAT_146acc240;
}



// FUNCTION 14200aa60 FUN_14200aa60 body=47 status=ok
// SIG undefined FUN_14200aa60(void)

longlong FUN_14200aa60(void)

{
  if (DAT_146acc218 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc218,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464edb60);
  }
  return DAT_146acc218;
}



// FUNCTION 14200aa90 FUN_14200aa90 body=47 status=ok
// SIG undefined FUN_14200aa90(void)

longlong FUN_14200aa90(void)

{
  if (DAT_146acc260 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc260,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464edd50);
  }
  return DAT_146acc260;
}



// FUNCTION 14200aac0 FUN_14200aac0 body=47 status=ok
// SIG undefined FUN_14200aac0(void)

longlong FUN_14200aac0(void)

{
  if (DAT_146acc2b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc2b0,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ee0f0);
  }
  return DAT_146acc2b0;
}



// FUNCTION 14200aaf0 FUN_14200aaf0 body=47 status=ok
// SIG undefined FUN_14200aaf0(void)

longlong FUN_14200aaf0(void)

{
  if (DAT_146acc290 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc290,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464edf10);
  }
  return DAT_146acc290;
}



// FUNCTION 14200ab20 FUN_14200ab20 body=47 status=ok
// SIG undefined FUN_14200ab20(void)

longlong FUN_14200ab20(void)

{
  if (DAT_146acc2a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc2a0,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ee060);
  }
  return DAT_146acc2a0;
}



// FUNCTION 14200ab50 FUN_14200ab50 body=47 status=ok
// SIG undefined FUN_14200ab50(void)

longlong FUN_14200ab50(void)

{
  if (DAT_146acc1d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc1d8,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ed630);
  }
  return DAT_146acc1d8;
}



// FUNCTION 14200ab80 FUN_14200ab80 body=47 status=ok
// SIG undefined FUN_14200ab80(void)

longlong FUN_14200ab80(void)

{
  if (DAT_146acc1c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc1c8,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ed560);
  }
  return DAT_146acc1c8;
}



// FUNCTION 14200abb0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UMovieSceneSkeletalAnimationTrack::StaticClass(void)

{
  if (DAT_146acc3b8 == 0) {
    FUN_14171ccd0(L"/Script/MovieSceneTracks",L"MovieSceneSkeletalAnimationTrack",&DAT_146acc3b8,
                  FUN_140447710,0x70,0x10000000,0,L"Engine",&LAB_14200b880,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405b7830,&LAB_140447700,0);
  }
  return DAT_146acc3b8;
}



// FUNCTION 14200ac80 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneSlomoSection::GetPrivateStaticClass(void)

{
  if (DAT_146acc3c8 == 0) {
    FUN_14171ccd0(L"/Script/MovieSceneTracks",L"MovieSceneSlomoSection",&DAT_146acc3c8,FUN_140447710
                  ,0x180,0x10000000,0,L"Engine",&LAB_14200b8a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMovieSceneFloatSection::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146acc3c8;
}



// FUNCTION 14200ad40 FUN_14200ad40 body=53 status=ok
// SIG undefined FUN_14200ad40(void)

void FUN_14200ad40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &PTR_FUN_144f62670;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14200ad80 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UMovieSceneSlomoTrack::StaticClass(void)

{
  if (DAT_146acc3e8 == 0) {
    FUN_14171ccd0(L"/Script/MovieSceneTracks",L"MovieSceneSlomoTrack",&DAT_146acc3e8,FUN_140447710,
                  0x80,0x10000000,0,L"Engine",&LAB_14200b8b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMovieSceneFloatTrack::StaticClass,&LAB_140447700,0);
  }
  return DAT_146acc3e8;
}



// FUNCTION 14200ae40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneSpawnSection::GetPrivateStaticClass(void)

{
  if (DAT_146acc3f8 == 0) {
    FUN_14171ccd0(L"/Script/MovieSceneTracks",L"MovieSceneSpawnSection",&DAT_146acc3f8,FUN_140447710
                  ,0x178,0x10000000,0,L"Engine",&LAB_14200b8d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMovieSceneBoolSection::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146acc3f8;
}



// FUNCTION 14200af00 FUN_14200af00 body=53 status=ok
// SIG undefined FUN_14200af00(void)

void FUN_14200af00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &PTR_FUN_144f62788;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14200af40 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UMovieSceneSpawnTrack::StaticClass(void)

{
  if (DAT_146acc418 == 0) {
    FUN_14171ccd0(L"/Script/MovieSceneTracks",L"MovieSceneSpawnTrack",&DAT_146acc418,FUN_140447710,
                  0x78,0x10000000,0,L"Engine",&LAB_14200b8f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141f75590,&LAB_140447700,0);
  }
  return DAT_146acc418;
}



// FUNCTION 14200aff0 FUN_14200aff0 body=53 status=ok
// SIG undefined FUN_14200aff0(void)

void FUN_14200aff0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd8;
    *puVar1 = &PTR_FUN_144f63280;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14200b040 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UMovieSceneVisibilityTrack::StaticClass(void)

{
  if (DAT_146acc4e0 == 0) {
    FUN_14171ccd0(L"/Script/MovieSceneTracks",L"MovieSceneVisibilityTrack",&DAT_146acc4e0,
                  FUN_140447710,0x80,0x10000000,0,L"Engine",&LAB_14200b9c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMovieSceneBoolTrack::StaticClass,&LAB_140447700,0);
  }
  return DAT_146acc4e0;
}



// FUNCTION 14200b100 FUN_14200b100 body=53 status=ok
// SIG undefined FUN_14200b100(void)

void FUN_14200b100(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &PTR_FUN_144f628a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14200b140 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneStringSection::GetPrivateStaticClass(void)

{
  if (DAT_146acc438 == 0) {
    FUN_14171ccd0(L"/Script/MovieSceneTracks",L"MovieSceneStringSection",&DAT_146acc438,
                  FUN_140447710,0x180,0x10000000,0,L"Engine",&LAB_14200b910,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405b7840,&LAB_140447700,0);
  }
  return DAT_146acc438;
}



// FUNCTION 14200b200 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UMovieSceneStringTrack::StaticClass(void)

{
  if (DAT_146acc448 == 0) {
    FUN_14171ccd0(L"/Script/MovieSceneTracks",L"MovieSceneStringTrack",&DAT_146acc448,FUN_140447710,
                  0x80,0x10000000,0,L"Engine",InternalConstructor<UMovieSceneStringTrack>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1420035e0,&LAB_140447700,0);
  }
  return DAT_146acc448;
}



// FUNCTION 14200b2c0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UMovieSceneTransformTrack::StaticClass(void)

{
  if (DAT_146acc460 == 0) {
    FUN_14171ccd0(L"/Script/MovieSceneTracks",L"MovieSceneTransformTrack",&DAT_146acc460,
                  FUN_140447710,0x80,0x10000000,0,L"Engine",&LAB_14200b960,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1420035e0,&LAB_140447700,0);
  }
  return DAT_146acc460;
}



// FUNCTION 14200b380 FUN_14200b380 body=53 status=ok
// SIG undefined FUN_14200b380(void)

void FUN_14200b380(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf8;
    *puVar1 = &PTR_FUN_144f62440;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14200b3c0 FUN_14200b3c0 body=53 status=ok
// SIG undefined FUN_14200b3c0(void)

void FUN_14200b3c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd8;
    *puVar1 = &PTR_FUN_144f62558;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14200b400 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneSkeletalAnimationSection::GetPrivateStaticClass(void)

{
  if (DAT_146acc388 == 0) {
    FUN_14171ccd0(L"/Script/MovieSceneTracks",L"MovieSceneSkeletalAnimationSection",&DAT_146acc388,
                  UAnimMontage::StaticRegisterNativesUAnimMontage,0x1d8,0x10000000,0,L"Engine",
                  &LAB_14200b860,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405b7840,&LAB_140447700,0);
  }
  return DAT_146acc388;
}



// FUNCTION 14200b4b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneVectorSection::GetPrivateStaticClass(void)

{
  if (DAT_146acc4b0 == 0) {
    FUN_14171ccd0(L"/Script/MovieSceneTracks",L"MovieSceneVectorSection",&DAT_146acc4b0,
                  FUN_140447710,0x368,0x10000000,0,L"Engine",&LAB_14200b980,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405b7840,&LAB_140447700,0);
  }
  return DAT_146acc4b0;
}



// FUNCTION 14200b560 FUN_14200b560 body=47 status=ok
// SIG undefined FUN_14200b560(void)

longlong FUN_14200b560(void)

{
  if (DAT_146acc4a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc4a0,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ef5c0);
  }
  return DAT_146acc4a0;
}



// FUNCTION 14200b590 FUN_14200b590 body=53 status=ok
// SIG undefined FUN_14200b590(void)

void FUN_14200b590(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144f62e20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 14200b5d0 FUN_14200b5d0 body=53 status=ok
// SIG undefined FUN_14200b5d0(void)

void FUN_14200b5d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144f62f38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14200b610 FUN_14200b610 body=53 status=ok
// SIG undefined FUN_14200b610(void)

void FUN_14200b610(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144f63050;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14200b650 FUN_14200b650 body=53 status=ok
// SIG undefined FUN_14200b650(void)

void FUN_14200b650(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144f63168;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14200b6a0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UMovieSceneVectorTrack::StaticClass(void)

{
  if (DAT_146acc4c0 == 0) {
    FUN_14171ccd0(L"/Script/MovieSceneTracks",L"MovieSceneVectorTrack",&DAT_146acc4c0,FUN_140447710,
                  0x88,0x10000000,0,L"Engine",&LAB_14200b9a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1420035e0,&LAB_140447700,0);
  }
  return DAT_146acc4c0;
}



// FUNCTION 14200b760 FUN_14200b760 body=47 status=ok
// SIG undefined FUN_14200b760(void)

longlong FUN_14200b760(void)

{
  if (DAT_146acc370 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc370,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ee960);
  }
  return DAT_146acc370;
}



// FUNCTION 14200b790 Z_Construct_UPackage__Script_MovieSceneTracks body=47 status=ok
// SIG undefined Z_Construct_UPackage__Script_MovieSceneTracks(void)

longlong Z_Construct_UPackage__Script_MovieSceneTracks(void)

{
  if (DAT_146acc450 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146acc450,&PTR_s__Script_MovieSceneTracks_144f62cd0);
  }
  return DAT_146acc450;
}



// FUNCTION 14200b7c0 FUN_14200b7c0 body=47 status=ok
// SIG undefined FUN_14200b7c0(void)

longlong FUN_14200b7c0(void)

{
  if (DAT_146acc380 == 0) {
    FUN_141786440(&DAT_146acc380,&PTR_GetPrivateStaticClass_144f60330);
  }
  return DAT_146acc380;
}



// FUNCTION 14200b7f0 FUN_14200b7f0 body=47 status=ok
// SIG undefined FUN_14200b7f0(void)

longlong FUN_14200b7f0(void)

{
  if (DAT_146acc378 == 0) {
    FUN_141786a30(&DAT_146acc378,&PTR_FUN_1464eea20);
  }
  return DAT_146acc378;
}



// FUNCTION 14200b820 FUN_14200b820 body=53 status=ok
// SIG undefined FUN_14200b820(void)

void FUN_14200b820(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd0;
    *puVar1 = &PTR_FUN_144f62318;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14200b930 InternalConstructor<UMovieSceneStringTrack> body=46 status=ok
// SIG undefined InternalConstructor<UMovieSceneStringTrack>(void)

void InternalConstructor<UMovieSceneStringTrack>(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = FUN_14178c940();
    UMovieScenePropertyTrack::UMovieScenePropertyTrack(puVar1,uVar2);
    *puVar1 = &PTR__scalar_deleting_destructor__144f629b8;
  }
  return;
}



// FUNCTION 14200b9e0 FUN_14200b9e0 body=107 status=ok
// SIG undefined FUN_14200b9e0(void)

undefined8 * FUN_14200b9e0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(uint *)((longlong)param_1 + 0x14) =
       *(uint *)((longlong)param_1 + 0x14) ^
       (*(uint *)((longlong)param_2 + 0x14) ^ *(uint *)((longlong)param_1 + 0x14)) & 1;
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  FMovieSceneFloatChannel::operator=(param_1 + 5,param_2 + 5);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  return param_1;
}



// FUNCTION 14200ba50 `scalar_deleting_destructor' body=77 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneVector2DKeyStruct::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TArray<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,64,8>,FDefaultAllocator>::
  ~TArray<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,64,8>,FDefaultAllocator>
            (param_1 + 3);
  if (*(char *)((longlong)param_1 + 0x14) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  *param_1 = &PTR_FUN_144f27be0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14200baa0 `scalar_deleting_destructor' body=77 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneVector4KeyStruct::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TArray<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,64,8>,FDefaultAllocator>::
  ~TArray<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,64,8>,FDefaultAllocator>
            (param_1 + 3);
  if (*(char *)((longlong)param_1 + 0x14) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  *param_1 = &PTR_FUN_144f27be0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14200baf0 `scalar_deleting_destructor' body=77 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneVectorKeyStruct::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TArray<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,64,8>,FDefaultAllocator>::
  ~TArray<TInlineValue<FMovieSceneAccumulatedBlendState::FTokenEntry,64,8>,FDefaultAllocator>
            (param_1 + 3);
  if (*(char *)((longlong)param_1 + 0x14) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  *param_1 = &PTR_FUN_144f27be0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14200bb50 FUN_14200bb50 body=61 status=ok
// SIG undefined FUN_14200bb50(void)

void FUN_14200bb50(undefined8 param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  param_2[3] = 0;
  *param_2 = &PTR_FUN_144f4cc18;
  FUN_141fcf2d0(param_2 + 4);
  param_2[0x1e] = 0;
  return;
}



// FUNCTION 14200bb90 Construct body=32 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FMovieSceneSkeletalAnimationSectionTemplateParameters>::Construct
               (undefined8 param_1,longlong param_2)

{
  FUN_141fcf2d0(param_2);
  *(undefined8 *)(param_2 + 0xd0) = 0;
  return;
}



// FUNCTION 14200be80 FUN_14200be80 body=151 status=ok
// SIG undefined FUN_14200be80(void)

undefined8 FUN_14200be80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0xc);
    do {
      *(undefined8 *)(puVar1 + -3) = *(undefined8 *)(param_3 + -0xc + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined4 *)(param_3 + 4 + (longlong)puVar1);
      puVar1[2] = puVar1[2] ^ (*(uint *)(param_3 + 8 + (longlong)puVar1) ^ puVar1[2]) & 1;
      *(undefined8 *)(puVar1 + 3) = *(undefined8 *)(param_3 + 0xc + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(param_3 + 0x14 + (longlong)puVar1);
      FMovieSceneFloatChannel::operator=(puVar1 + 7,param_3 + 0x1c + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 0x2f) = *(undefined1 *)(param_3 + 0xbc + (longlong)puVar1);
      puVar1 = puVar1 + 0x34;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14200bf20 FUN_14200bf20 body=155 status=ok
// SIG undefined FUN_14200bf20(void)

undefined8 FUN_14200bf20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0xf4);
    do {
      *(undefined1 *)(puVar1 + -0x3b) = *(undefined1 *)(param_3 + -0xec + (longlong)puVar1);
      *(undefined1 *)(puVar1 + -0x39) = *(undefined1 *)(param_3 + -0xe4 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + -0x37) = *(undefined8 *)(param_3 + -0xdc + (longlong)puVar1);
      FUN_14200b9e0(puVar1 + -0x35,param_3 + -0xd4 + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      puVar1 = puVar1 + 0x3e;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14200bfc0 Copy body=100 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneSkeletalAnimationSectionTemplateParameters>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0xd4);
    do {
      FUN_14200b9e0(puVar1 + -0x35,param_3 + -0xd4 + (longlong)puVar1);
      puVar1[-1] = *(undefined4 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      puVar1 = puVar1 + 0x36;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14200c030 Copy body=117 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneSlomoSectionTemplate>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x10);
    do {
      puVar1[-8] = puVar1[param_3 + -8];
      *puVar1 = puVar1[param_3];
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar1 + param_3 + 8);
      FMovieSceneFloatChannel::operator=(puVar1 + 0x10,puVar1 + param_3 + 0x10);
      puVar1 = puVar1 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14200c0b0 Copy body=117 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneSpawnSectionTemplate>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x10);
    do {
      puVar1[-8] = puVar1[param_3 + -8];
      *puVar1 = puVar1[param_3];
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar1 + param_3 + 8);
      FMovieSceneBoolChannel::operator=(puVar1 + 0x10,puVar1 + param_3 + 0x10);
      puVar1 = puVar1 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14200c130 Copy body=358 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneStringChannel>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    puVar6 = (undefined8 *)(param_3 + 0x18);
    do {
      TArray<int,FDefaultAllocator>::operator=(param_2 + 8,puVar6 + -2);
      puVar3 = (undefined8 *)(param_2 + 0x18);
      if (puVar3 != puVar6) {
        plVar2 = (longlong *)*puVar3;
        for (iVar4 = *(int *)(param_2 + 0x20); iVar4 != 0; iVar4 = iVar4 + -1) {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
        }
        iVar4 = *(int *)(puVar6 + 1);
        puVar5 = (undefined8 *)*puVar6;
        *(int *)(param_2 + 0x20) = iVar4;
        if ((iVar4 == 0) && (*(int *)(param_2 + 0x24) == 0)) {
          *(undefined4 *)(param_2 + 0x24) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar3,iVar4);
          puVar3 = (undefined8 *)*puVar3;
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar3 = 0;
            iVar1 = *(int *)(puVar5 + 1);
            _Src = (void *)*puVar5;
            *(int *)(puVar3 + 1) = iVar1;
            if (iVar1 == 0) {
              *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
              ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 * 2);
            }
            puVar3 = puVar3 + 2;
            puVar5 = puVar5 + 2;
          }
        }
      }
      FString::operator=(param_2 + 0x28,puVar6 + 2);
      *(undefined1 *)(param_2 + 0x38) = *(undefined1 *)(puVar6 + 4);
      FKeyHandleLookupTable::Reset(param_2 + 0x40);
      puVar6 = puVar6 + 0x14;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xa0;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14200c2a0 FUN_14200c2a0 body=63 status=ok
// SIG undefined FUN_14200c2a0(void)

void FUN_14200c2a0(undefined8 param_1,longlong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_2 + 0x60);
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_2 + 0x28) = &PTR_FUN_144f215f0;
  return;
}



// FUNCTION 14200c330 GetPropertyChannelByIndex body=85 status=ok
// SIG undefined GetPropertyChannelByIndex(void)

undefined8 FMovieSceneVectorKeyStructBase::GetPropertyChannelByIndex(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\MovieSceneTracks/Public/Sections/MovieSceneVectorSection.h",0x23,
             L"Pure virtual not implemented (%s)",
             L"FMovieSceneVectorKeyStructBase::GetPropertyChannelByIndex");
  FDebug::AssertFailed
            (&DAT_143f3f584,"Runtime\\MovieSceneTracks/Public/Sections/MovieSceneVectorSection.h",
             0x23,L"Pure virtual not implemented (%s)",
             L"FMovieSceneVectorKeyStructBase::GetPropertyChannelByIndex");
  return 0;
}



// FUNCTION 14200c390 FUN_14200c390 body=6 status=ok
// SIG undefined FUN_14200c390(void)

undefined8 FUN_14200c390(void)

{
  return 0x5874dc3;
}



// FUNCTION 14200c3a0 Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplateParameters_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplateParameters_CRC(void)

undefined8
Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplateParameters_CRC(void)

{
  return 0xc994c5dc;
}



// FUNCTION 14200c3b0 Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplate_CRC(void)

{
  return 0xa7e5af7f;
}



// FUNCTION 14200c3c0 Get_Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_CRC(void)

{
  return 0xd03e3985;
}



// FUNCTION 14200c3d0 Get_Z_Construct_UScriptStruct_FMovieSceneSpawnSectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneSpawnSectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneSpawnSectionTemplate_CRC(void)

{
  return 0xe8fdcd3c;
}



// FUNCTION 14200c3e0 FUN_14200c3e0 body=6 status=ok
// SIG undefined FUN_14200c3e0(void)

undefined8 FUN_14200c3e0(void)

{
  return 0x2250a707;
}



// FUNCTION 14200c3f0 Get_Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_CRC(void)

{
  return 0x244cac40;
}



// FUNCTION 14200c400 Get_Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_CRC(void)

{
  return 0xc38a7a5d;
}



// FUNCTION 14200c410 Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_CRC(void)

{
  return 0xa224fa0c;
}



// FUNCTION 14200c420 Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_CRC(void)

{
  return 0x8a72a824;
}



// FUNCTION 14200c430 Get_Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate_CRC(void)

{
  return 0x2b5517f8;
}



// FUNCTION 14200c460 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_141ffd0b0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 14200c4e0 StaticRegisterNativesUAnimMontage body=34 status=ok
// SIG undefined StaticRegisterNativesUAnimMontage(void)

void UAnimMontage::StaticRegisterNativesUAnimMontage(void)

{
  undefined8 uVar1;
  
  uVar1 = UMovieSceneSkeletalAnimationSection::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetAvailableSlotNames_144f62430,1);
  return;
}



// FUNCTION 14200c510 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneSkeletalAnimationParams::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acc368 == 0) {
    if (DAT_146acc450 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acc450,&PTR_s__Script_MovieSceneTracks_144f62cd0);
    }
    lVar1 = DAT_146acc450;
    uVar2 = FUN_14200c390();
    DAT_146acc368 =
         GetStaticStruct(FUN_14200b760,lVar1,L"MovieSceneSkeletalAnimationParams",0xd0,uVar2);
  }
  return;
}



// FUNCTION 14200c590 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneSkeletalAnimationSectionTemplate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acc390 == 0) {
    if (DAT_146acc450 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acc450,&PTR_s__Script_MovieSceneTracks_144f62cd0);
    }
    lVar1 = DAT_146acc450;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplate_CRC();
    DAT_146acc390 =
         GetStaticStruct(FUN_14200cca0,lVar1,L"MovieSceneSkeletalAnimationSectionTemplate",0xf8,
                         uVar2);
  }
  return;
}



// FUNCTION 14200c610 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneVisibilitySectionTemplate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acc3a0 == 0) {
    if (DAT_146acc450 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acc450,&PTR_s__Script_MovieSceneTracks_144f62cd0);
    }
    lVar1 = DAT_146acc450;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationSectionTemplateParameters_CRC
                      ();
    DAT_146acc3a0 =
         GetStaticStruct(FUN_14200ccd0,lVar1,L"MovieSceneSkeletalAnimationSectionTemplateParameters"
                         ,0xd8,uVar2);
  }
  return;
}



// FUNCTION 14200c690 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneSlomoSectionTemplate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acc3d0 == 0) {
    if (DAT_146acc450 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acc450,&PTR_s__Script_MovieSceneTracks_144f62cd0);
    }
    lVar1 = DAT_146acc450;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_CRC();
    DAT_146acc3d0 =
         GetStaticStruct(FUN_14200cd00,lVar1,L"MovieSceneSlomoSectionTemplate",0xc0,uVar2);
  }
  return;
}



// FUNCTION 14200c710 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneSpawnSectionTemplate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acc400 == 0) {
    if (DAT_146acc450 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acc450,&PTR_s__Script_MovieSceneTracks_144f62cd0);
    }
    lVar1 = DAT_146acc450;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneSpawnSectionTemplate_CRC();
    DAT_146acc400 =
         GetStaticStruct(FUN_14200cd30,lVar1,L"MovieSceneSpawnSectionTemplate",0xb0,uVar2);
  }
  return;
}



// FUNCTION 14200c790 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneStringChannel::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acc420 == 0) {
    if (DAT_146acc450 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acc450,&PTR_s__Script_MovieSceneTracks_144f62cd0);
    }
    lVar1 = DAT_146acc450;
    uVar2 = FUN_14200c3e0();
    DAT_146acc420 = GetStaticStruct(FUN_14200cd60,lVar1,L"MovieSceneStringChannel",0xa0,uVar2);
  }
  return;
}



// FUNCTION 14200c810 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneVector2DKeyStruct::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acc488 == 0) {
    if (DAT_146acc450 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acc450,&PTR_s__Script_MovieSceneTracks_144f62cd0);
    }
    lVar1 = DAT_146acc450;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneVector2DKeyStruct_CRC();
    DAT_146acc488 = GetStaticStruct(FUN_14200cd90,lVar1,L"MovieSceneVector2DKeyStruct",0x30,uVar2);
  }
  return;
}



// FUNCTION 14200c890 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneVector4KeyStruct::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acc468 == 0) {
    if (DAT_146acc450 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acc450,&PTR_s__Script_MovieSceneTracks_144f62cd0);
    }
    lVar1 = DAT_146acc450;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneVector4KeyStruct_CRC();
    DAT_146acc468 = GetStaticStruct(FUN_14200cdc0,lVar1,L"MovieSceneVector4KeyStruct",0x40,uVar2);
  }
  return;
}



// FUNCTION 14200c910 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneVectorKeyStruct::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acc478 == 0) {
    if (DAT_146acc450 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acc450,&PTR_s__Script_MovieSceneTracks_144f62cd0);
    }
    lVar1 = DAT_146acc450;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStruct_CRC();
    DAT_146acc478 = GetStaticStruct(FUN_14200cdf0,lVar1,L"MovieSceneVectorKeyStruct",0x38,uVar2);
  }
  return;
}



// FUNCTION 14200c990 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneVectorKeyStructBase::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acc498 == 0) {
    if (DAT_146acc450 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acc450,&PTR_s__Script_MovieSceneTracks_144f62cd0);
    }
    lVar1 = DAT_146acc450;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneVectorKeyStructBase_CRC();
    DAT_146acc498 = GetStaticStruct(FUN_14200b560,lVar1,L"MovieSceneVectorKeyStructBase",0x28,uVar2)
    ;
  }
  return;
}



// FUNCTION 14200ca10 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneVisibilitySectionTemplate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acc4c8 == 0) {
    if (DAT_146acc450 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146acc450,&PTR_s__Script_MovieSceneTracks_144f62cd0);
    }
    lVar1 = DAT_146acc450;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate_CRC();
    DAT_146acc4c8 =
         GetStaticStruct(FUN_14200ce20,lVar1,L"MovieSceneVisibilitySectionTemplate",0xd8,uVar2);
  }
  return;
}



// FUNCTION 14200ca90 FUN_14200ca90 body=47 status=ok
// SIG undefined FUN_14200ca90(void)

longlong FUN_14200ca90(void)

{
  if (DAT_146acc3b0 == 0) {
    FUN_141786440(&DAT_146acc3b0,&PTR_StaticClass_144f60440);
  }
  return DAT_146acc3b0;
}



// FUNCTION 14200cac0 FUN_14200cac0 body=47 status=ok
// SIG undefined FUN_14200cac0(void)

longlong FUN_14200cac0(void)

{
  if (DAT_146acc3c0 == 0) {
    FUN_141786440(&DAT_146acc3c0,&PTR_GetPrivateStaticClass_144f60750);
  }
  return DAT_146acc3c0;
}



// FUNCTION 14200caf0 FUN_14200caf0 body=47 status=ok
// SIG undefined FUN_14200caf0(void)

longlong FUN_14200caf0(void)

{
  if (DAT_146acc3e0 == 0) {
    FUN_141786440(&DAT_146acc3e0,&PTR_StaticClass_144f60970);
  }
  return DAT_146acc3e0;
}



// FUNCTION 14200cb20 FUN_14200cb20 body=47 status=ok
// SIG undefined FUN_14200cb20(void)

longlong FUN_14200cb20(void)

{
  if (DAT_146acc3f0 == 0) {
    FUN_141786440(&DAT_146acc3f0,&PTR_GetPrivateStaticClass_144f60aa0);
  }
  return DAT_146acc3f0;
}



// FUNCTION 14200cb50 FUN_14200cb50 body=47 status=ok
// SIG undefined FUN_14200cb50(void)

longlong FUN_14200cb50(void)

{
  if (DAT_146acc410 == 0) {
    FUN_141786440(&DAT_146acc410,&PTR_StaticClass_144f60d80);
  }
  return DAT_146acc410;
}



// FUNCTION 14200cb80 FUN_14200cb80 body=47 status=ok
// SIG undefined FUN_14200cb80(void)

longlong FUN_14200cb80(void)

{
  if (DAT_146acc430 == 0) {
    FUN_141786440(&DAT_146acc430,&PTR_GetPrivateStaticClass_144f61180);
  }
  return DAT_146acc430;
}



// FUNCTION 14200cbb0 FUN_14200cbb0 body=47 status=ok
// SIG undefined FUN_14200cbb0(void)

longlong FUN_14200cbb0(void)

{
  if (DAT_146acc440 == 0) {
    FUN_141786440(&DAT_146acc440,&PTR_StaticClass_144f612a0);
  }
  return DAT_146acc440;
}



// FUNCTION 14200cbe0 FUN_14200cbe0 body=47 status=ok
// SIG undefined FUN_14200cbe0(void)

longlong FUN_14200cbe0(void)

{
  if (DAT_146acc458 == 0) {
    FUN_141786440(&DAT_146acc458,&PTR_StaticClass_144f613f0);
  }
  return DAT_146acc458;
}



// FUNCTION 14200cc10 FUN_14200cc10 body=47 status=ok
// SIG undefined FUN_14200cc10(void)

longlong FUN_14200cc10(void)

{
  if (DAT_146acc4a8 == 0) {
    FUN_141786440(&DAT_146acc4a8,&PTR_GetPrivateStaticClass_144f61b70);
  }
  return DAT_146acc4a8;
}



// FUNCTION 14200cc40 FUN_14200cc40 body=47 status=ok
// SIG undefined FUN_14200cc40(void)

longlong FUN_14200cc40(void)

{
  if (DAT_146acc4b8 == 0) {
    FUN_141786440(&DAT_146acc4b8,&PTR_StaticClass_144f61cd0);
  }
  return DAT_146acc4b8;
}



// FUNCTION 14200cc70 FUN_14200cc70 body=47 status=ok
// SIG undefined FUN_14200cc70(void)

longlong FUN_14200cc70(void)

{
  if (DAT_146acc4d8 == 0) {
    FUN_141786440(&DAT_146acc4d8,&PTR_StaticClass_144f60ee0);
  }
  return DAT_146acc4d8;
}



// FUNCTION 14200cca0 FUN_14200cca0 body=47 status=ok
// SIG undefined FUN_14200cca0(void)

longlong FUN_14200cca0(void)

{
  if (DAT_146acc398 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc398,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464eecc0);
  }
  return DAT_146acc398;
}



// FUNCTION 14200ccd0 FUN_14200ccd0 body=47 status=ok
// SIG undefined FUN_14200ccd0(void)

longlong FUN_14200ccd0(void)

{
  if (DAT_146acc3a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc3a8,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464eed90);
  }
  return DAT_146acc3a8;
}



// FUNCTION 14200cd00 FUN_14200cd00 body=47 status=ok
// SIG undefined FUN_14200cd00(void)

longlong FUN_14200cd00(void)

{
  if (DAT_146acc3d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc3d8,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464eef30);
  }
  return DAT_146acc3d8;
}



// FUNCTION 14200cd30 FUN_14200cd30 body=47 status=ok
// SIG undefined FUN_14200cd30(void)

longlong FUN_14200cd30(void)

{
  if (DAT_146acc408 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc408,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ef010);
  }
  return DAT_146acc408;
}



// FUNCTION 14200cd60 FUN_14200cd60 body=47 status=ok
// SIG undefined FUN_14200cd60(void)

longlong FUN_14200cd60(void)

{
  if (DAT_146acc428 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc428,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ef2c0);
  }
  return DAT_146acc428;
}



// FUNCTION 14200cd90 FUN_14200cd90 body=47 status=ok
// SIG undefined FUN_14200cd90(void)

longlong FUN_14200cd90(void)

{
  if (DAT_146acc490 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc490,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ef530);
  }
  return DAT_146acc490;
}



// FUNCTION 14200cdc0 FUN_14200cdc0 body=47 status=ok
// SIG undefined FUN_14200cdc0(void)

longlong FUN_14200cdc0(void)

{
  if (DAT_146acc470 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc470,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ef410);
  }
  return DAT_146acc470;
}



// FUNCTION 14200cdf0 FUN_14200cdf0 body=47 status=ok
// SIG undefined FUN_14200cdf0(void)

longlong FUN_14200cdf0(void)

{
  if (DAT_146acc480 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc480,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ef4a0);
  }
  return DAT_146acc480;
}



// FUNCTION 14200ce20 FUN_14200ce20 body=47 status=ok
// SIG undefined FUN_14200ce20(void)

longlong FUN_14200ce20(void)

{
  if (DAT_146acc4d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acc4d0,&PTR_Z_Construct_UPackage__Script_MovieSceneTracks_1464ef710);
  }
  return DAT_146acc4d0;
}



// FUNCTION 14200ce50 FUN_14200ce50 body=163 status=ok
// SIG undefined FUN_14200ce50(void)

void FUN_14200ce50(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141ff24c0(param_1,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14200cf00 IteratePropertyPathRecursive<UObject> body=1214 status=ok
// SIG undefined IteratePropertyPathRecursive<UObject>(void)

ulonglong PropertyPathHelpersInternal::IteratePropertyPathRecursive<UObject>
                    (undefined8 param_1,longlong param_2,int param_3,longlong *param_4,
                    longlong *param_5)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint7 uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined8 local_res20;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  uint uStack_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  
  uVar12 = (ulonglong)param_3;
  uVar13 = 0;
  uVar14 = uVar12;
  do {
    lVar9 = uVar14 * 0x20 + *param_4;
    iVar15 = 0;
    if (*(int *)(lVar9 + 8) != -1) {
      iVar15 = *(int *)(lVar9 + 8);
    }
    if (uVar14 == 0) {
      *(undefined1 *)(param_4 + 4) = 1;
    }
    lVar9 = FPropertyPathSegment::Resolve(lVar9,param_1);
    uVar6 = 0;
    if (lVar9 == 0) goto LAB_14200d39b;
    lVar5 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    uVar11 = (uint)uVar12;
    if (!bVar2) {
      uVar4 = (int)param_4[1] - 1;
      uVar6 = (ulonglong)uVar4;
      if (uVar11 == uVar4) {
LAB_14200d383:
        uVar14 = (**(code **)(*param_5 + 8))(param_5,param_2,param_4);
        return uVar14;
      }
      goto LAB_14200d39b;
    }
    if ((int)param_4[1] + -1 <= (int)uVar11) goto LAB_14200d383;
    lVar5 = UObjectProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) break;
    *(undefined1 *)(param_4 + 4) = 0;
    lVar5 = *(longlong *)
             ((longlong)*(int *)(lVar9 + 0x44) + *(int *)(lVar9 + 0x34) * iVar15 + param_2);
    if (lVar5 == 0) break;
    param_1 = *(undefined8 *)(lVar5 + 0x10);
    uVar12 = (ulonglong)(uVar11 + 1);
    uVar14 = uVar14 + 1;
    param_2 = lVar5;
  } while( true );
  lVar5 = UWeakObjectProperty::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    *(undefined1 *)(param_4 + 4) = 0;
    local_res20 = *(undefined8 *)
                   ((longlong)*(int *)(lVar9 + 0x44) + *(int *)(lVar9 + 0x34) * iVar15 + param_2);
    lVar9 = FWeakObjectPtr::Get(&local_res20);
    uVar6 = 0;
    if (lVar9 != 0) {
      uVar14 = IteratePropertyPathRecursive<UObject>
                         (*(undefined8 *)(lVar9 + 0x10),lVar9,uVar11 + 1,param_4,param_5);
      return uVar14;
    }
  }
  else {
    lVar5 = USoftObjectProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined1 *)(param_4 + 4) = 0;
      local_40 = 0;
      local_38 = 0;
      local_res20 = 0;
      puVar10 = (undefined4 *)
                ((longlong)*(int *)(lVar9 + 0x44) + *(int *)(lVar9 + 0x34) * iVar15 + param_2);
      local_48 = 0;
      local_58 = *puVar10;
      local_54 = puVar10[1];
      uStack_50 = puVar10[2];
      local_70 = *(undefined8 *)(puVar10 + 4);
      FString::FString(local_68,puVar10 + 6);
      FSoftObjectPath::operator=(&local_48,&local_70);
      lVar9 = FWeakObjectPtr::Get(&local_58);
      if (lVar9 != 0) {
LAB_14200d1d0:
        bVar3 = IteratePropertyPathRecursive<UObject>
                          (*(undefined8 *)(lVar9 + 0x10),lVar9,uVar11 + 1,param_4,param_5);
        if (local_40 != 0) {
          FMemory::Free();
        }
        return (ulonglong)bVar3;
      }
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
        uVar6 = 0;
      }
      else {
        uVar6 = (ulonglong)DAT_1464b56f4;
      }
      UNLOCK();
      if (((uint)uVar6 != uStack_50) && (uVar6 = uVar13, local_48 != 0)) {
        lVar9 = FUN_141796df0(&local_48);
        FWeakObjectPtr::operator=(&local_58,lVar9);
        if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          uStack_50 = DAT_1464b56f4;
        }
        lVar9 = FWeakObjectPtr::Get(&local_58);
        uVar6 = 0;
        if (lVar9 != 0) goto LAB_14200d1d0;
      }
      if (local_40 != 0) {
        uVar6 = FMemory::Free();
      }
    }
    else {
      lVar5 = UStructProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar14 = IteratePropertyPathRecursive<void>
                           (*(undefined8 *)(lVar9 + 0x70),
                            (longlong)*(int *)(lVar9 + 0x44) +
                            *(int *)(lVar9 + 0x34) * iVar15 + param_2,uVar11 + 1,param_4,param_5);
        return uVar14;
      }
      lVar5 = UArrayProperty::GetPrivateStaticClass();
      iVar1 = *(int *)(lVar5 + 0x90);
      uVar6 = (longlong)iVar1;
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < iVar1) ||
         (uVar6 = *(ulonglong *)(*(longlong *)(lVar9 + 0x10) + 0x88),
         *(longlong *)(uVar6 + (longlong)iVar1 * 8) != lVar5 + 0x88)) {
        uVar6 = uVar6 & 0xffffffffffffff00;
      }
      else {
        uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
      }
      if ((char)uVar6 == '\0') {
        lVar5 = USetProperty::GetPrivateStaticClass();
        iVar15 = *(int *)(lVar5 + 0x90);
        uVar6 = (longlong)iVar15;
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < iVar15) ||
           (uVar6 = *(ulonglong *)(*(longlong *)(lVar9 + 0x10) + 0x88),
           *(longlong *)(uVar6 + (longlong)iVar15 * 8) != lVar5 + 0x88)) {
          uVar6 = uVar6 & 0xffffffffffffff00;
        }
        else {
          uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
        }
        if ((char)uVar6 == '\0') {
          uVar6 = UMapProperty::GetPrivateStaticClass();
        }
      }
      else {
        *(undefined1 *)(param_4 + 4) = 0;
        lVar5 = *(longlong *)(lVar9 + 0x70);
        if (lVar5 != 0) {
          lVar7 = UStructProperty::GetPrivateStaticClass();
          iVar1 = *(int *)(lVar7 + 0x90);
          uVar6 = (longlong)iVar1;
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar1) ||
             (uVar6 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0x88),
             *(longlong *)(uVar6 + (longlong)iVar1 * 8) != lVar7 + 0x88)) {
            uVar6 = uVar6 & 0xffffffffffffff00;
          }
          else {
            uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
          }
          if ((char)uVar6 != '\0') {
            lVar7 = (longlong)*(int *)(lVar9 + 0x44);
            uVar8 = (uint7)((ulonglong)*(longlong *)(lVar9 + 0x70) >> 8);
            if ((iVar15 < 0) || (*(int *)(lVar7 + 8 + param_2) <= iVar15)) {
              uVar6 = (ulonglong)uVar8 << 8;
            }
            else {
              uVar6 = CONCAT71(uVar8,1);
            }
            if ((char)uVar6 != '\0') {
              if (*(int *)(lVar7 + 8 + param_2) != 0) {
                uVar13 = (longlong)(*(int *)(*(longlong *)(lVar9 + 0x70) + 0x34) * iVar15) +
                         *(longlong *)(lVar7 + param_2);
              }
              uVar14 = IteratePropertyPathRecursive<void>
                                 (*(undefined8 *)(lVar5 + 0x70),uVar13,uVar11 + 1,param_4,param_5);
              return uVar14;
            }
          }
        }
      }
    }
  }
LAB_14200d39b:
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 14200d3c0 IteratePropertyPathRecursive<void> body=1211 status=ok
// SIG undefined IteratePropertyPathRecursive<void>(void)

ulonglong PropertyPathHelpersInternal::IteratePropertyPathRecursive<void>
                    (undefined8 param_1,longlong param_2,int param_3,longlong *param_4,
                    longlong *param_5)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint7 uVar9;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  uint uStack_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  
  uVar15 = (ulonglong)param_3;
  uVar8 = uVar15;
LAB_14200d3f1:
  do {
    lVar10 = uVar15 * 0x20 + *param_4;
    iVar13 = 0;
    if (*(int *)(lVar10 + 8) != -1) {
      iVar13 = *(int *)(lVar10 + 8);
    }
    if (uVar15 == 0) {
      *(undefined1 *)(param_4 + 4) = 1;
    }
    lVar10 = FPropertyPathSegment::Resolve(lVar10,param_1);
    uVar7 = 0;
    if (lVar10 == 0) goto LAB_14200d858;
    lVar5 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    uVar14 = (uint)uVar8;
    if (!bVar2) {
      uVar4 = (int)param_4[1] - 1;
      uVar7 = (ulonglong)uVar4;
      if (uVar14 == uVar4) {
LAB_14200d83f:
        uVar8 = (**(code **)(*param_5 + 0x10))(param_5,param_2,param_4);
        return uVar8;
      }
      goto LAB_14200d858;
    }
    if ((int)param_4[1] + -1 <= (int)uVar14) goto LAB_14200d83f;
    lVar5 = UObjectProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined1 *)(param_4 + 4) = 0;
      lVar5 = *(longlong *)
               ((longlong)*(int *)(lVar10 + 0x44) + *(int *)(lVar10 + 0x34) * iVar13 + param_2);
      if (lVar5 != 0) {
        uVar8 = IteratePropertyPathRecursive<UObject>
                          (*(undefined8 *)(lVar5 + 0x10),lVar5,uVar14 + 1,param_4,param_5);
        return uVar8;
      }
    }
    lVar5 = UWeakObjectProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined1 *)(param_4 + 4) = 0;
      puVar12 = (undefined4 *)
                ((longlong)*(int *)(lVar10 + 0x44) + *(int *)(lVar10 + 0x34) * iVar13 + param_2);
      local_78 = *puVar12;
      local_74 = puVar12[1];
      lVar10 = FWeakObjectPtr::Get(&local_78);
      uVar7 = 0;
      if (lVar10 != 0) {
        uVar8 = IteratePropertyPathRecursive<UObject>
                          (*(undefined8 *)(lVar10 + 0x10),lVar10,uVar14 + 1,param_4,param_5);
        return uVar8;
      }
      goto LAB_14200d858;
    }
    lVar5 = USoftObjectProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar5 = 0;
    if (bVar2) {
      lVar5 = lVar10;
    }
    if (lVar5 != 0) {
      *(undefined1 *)(param_4 + 4) = 0;
      local_40 = 0;
      local_38 = 0;
      puVar12 = (undefined4 *)
                ((longlong)*(int *)(lVar5 + 0x44) + *(int *)(lVar5 + 0x34) * iVar13 + param_2);
      local_48 = 0;
      local_58 = *puVar12;
      local_54 = puVar12[1];
      uStack_50 = puVar12[2];
      local_70 = *(undefined8 *)(puVar12 + 4);
      FString::FString(local_68,puVar12 + 6);
      FSoftObjectPath::operator=(&local_48,&local_70);
      lVar10 = FWeakObjectPtr::Get(&local_58);
      if (lVar10 != 0) {
LAB_14200d7bf:
        bVar3 = IteratePropertyPathRecursive<UObject>
                          (*(undefined8 *)(lVar10 + 0x10),lVar10,uVar14 + 1,param_4,param_5);
        if (local_40 != 0) {
          FMemory::Free();
        }
        return (ulonglong)bVar3;
      }
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
        uVar7 = 0;
      }
      else {
        uVar7 = (ulonglong)DAT_1464b56f4;
      }
      UNLOCK();
      if (((uint)uVar7 != uStack_50) && (uVar7 = 0, local_48 != 0)) {
        lVar10 = FUN_141796df0(&local_48);
        FWeakObjectPtr::operator=(&local_58,lVar10);
        if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          uStack_50 = DAT_1464b56f4;
        }
        lVar10 = FWeakObjectPtr::Get(&local_58);
        uVar7 = 0;
        if (lVar10 != 0) goto LAB_14200d7bf;
      }
      if (local_40 != 0) {
        uVar7 = FMemory::Free();
      }
      goto LAB_14200d858;
    }
    lVar5 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) break;
    uVar8 = (ulonglong)(uVar14 + 1);
    param_1 = *(undefined8 *)(lVar10 + 0x70);
    uVar15 = uVar15 + 1;
    param_2 = param_2 + *(int *)(lVar10 + 0x44) + (longlong)(*(int *)(lVar10 + 0x34) * iVar13);
  } while( true );
  lVar5 = UArrayProperty::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar5 + 0x90);
  uVar7 = (longlong)iVar1;
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < iVar1) ||
     (uVar7 = *(ulonglong *)(*(longlong *)(lVar10 + 0x10) + 0x88),
     *(longlong *)(uVar7 + (longlong)iVar1 * 8) != lVar5 + 0x88)) {
    uVar7 = uVar7 & 0xffffffffffffff00;
  }
  else {
    uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
  }
  if ((char)uVar7 == '\0') {
    uVar7 = UObjectBaseUtility::IsA<USetProperty>(lVar10);
    if ((char)uVar7 == '\0') {
      uVar7 = UObjectBaseUtility::IsA<UMapProperty>(lVar10);
    }
LAB_14200d858:
    return uVar7 & 0xffffffffffffff00;
  }
  *(undefined1 *)(param_4 + 4) = 0;
  lVar5 = *(longlong *)(lVar10 + 0x70);
  if (lVar5 == 0) goto LAB_14200d858;
  lVar6 = UStructProperty::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar6 + 0x90);
  uVar7 = (longlong)iVar1;
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < iVar1) ||
     (uVar7 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0x88),
     *(longlong *)(uVar7 + (longlong)iVar1 * 8) != lVar6 + 0x88)) {
    uVar7 = uVar7 & 0xffffffffffffff00;
  }
  else {
    uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
  }
  if ((char)uVar7 == '\0') goto LAB_14200d858;
  plVar11 = (longlong *)(*(int *)(lVar10 + 0x44) + param_2);
  uVar9 = (uint7)((ulonglong)*(longlong *)(lVar10 + 0x70) >> 8);
  if ((iVar13 < 0) || ((int)plVar11[1] <= iVar13)) {
    uVar7 = (ulonglong)uVar9 << 8;
  }
  else {
    uVar7 = CONCAT71(uVar9,1);
  }
  if ((char)uVar7 == '\0') goto LAB_14200d858;
  if ((int)plVar11[1] == 0) {
    param_1 = *(undefined8 *)(lVar5 + 0x70);
    param_2 = 0;
    uVar8 = (ulonglong)(uVar14 + 1);
    uVar15 = uVar15 + 1;
  }
  else {
    uVar8 = (ulonglong)(uVar14 + 1);
    param_2 = (longlong)(*(int *)(*(longlong *)(lVar10 + 0x70) + 0x34) * iVar13) + *plVar11;
    param_1 = *(undefined8 *)(lVar5 + 0x70);
    uVar15 = uVar15 + 1;
  }
  goto LAB_14200d3f1;
}



// FUNCTION 14200d8a0 GetLastSegment body=15 status=ok
// SIG undefined GetLastSegment(void)

longlong FCachedPropertyPath::GetLastSegment(longlong *param_1)

{
  return (longlong)((int)param_1[1] + -1) * 0x20 + *param_1;
}



// FUNCTION 14200d8b0 IsFullyResolved body=26 status=ok
// SIG undefined IsFullyResolved(void)

undefined1 FCachedPropertyPath::IsFullyResolved(longlong param_1)

{
  if ((*(char *)(param_1 + 0x20) != '\0') &&
     ((*(longlong *)(param_1 + 0x18) != 0 || (*(longlong *)(param_1 + 0x10) != 0)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 14200d8d0 Resolve body=182 status=ok
// SIG undefined Resolve(void)

longlong FPropertyPathSegment::Resolve(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 == param_1[2]) {
    return param_1[3];
  }
  lVar1 = *param_1;
  param_1[2] = param_2;
  if (((int)lVar1 != 0) || ((int)((ulonglong)lVar1 >> 0x20) != 0)) {
    local_20 = *(longlong *)(param_2 + 0x38);
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    local_28 = param_2;
    FUN_1416fd4e0(&local_28);
    while (local_20 != 0) {
      if (*(longlong *)(local_20 + 0x18) == lVar1) goto LAB_14200d965;
      local_20 = *(longlong *)(local_20 + 0x28);
      FUN_1416fd4e0(&local_28);
    }
  }
  local_20 = 0;
LAB_14200d965:
  param_1[3] = local_20;
  return local_20;
}



// FUNCTION 14200d990 ResolvePropertyPath body=32 status=ok
// SIG undefined ResolvePropertyPath(void)

void PropertyPathHelpersInternal::ResolvePropertyPath
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  IteratePropertyPathRecursive<UObject>(*(undefined8 *)(param_1 + 0x10),param_1,0,param_2,param_3);
  return;
}



// FUNCTION 14200d9b0 FUN_14200d9b0 body=53 status=ok
// SIG undefined FUN_14200d9b0(void)

void FUN_14200d9b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144f63610;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14200d9f0 FUN_14200d9f0 body=53 status=ok
// SIG undefined FUN_14200d9f0(void)

void FUN_14200d9f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144f63728;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14200da30 FUN_14200da30 body=47 status=ok
// SIG undefined FUN_14200da30(void)

longlong FUN_14200da30(void)

{
  if (DAT_146acc4f0 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146acc4f0,&PTR_s__Script_PropertyPath_144f635e8);
  }
  return DAT_146acc4f0;
}



// FUNCTION 14200da70 Copy body=204 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FCachedPropertyPath>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 0x10);
    do {
      if (param_2 != puVar3 + -2) {
        iVar2 = *(int *)(puVar3 + -1);
        _Src = (void *)puVar3[-2];
        *(int *)(param_2 + 1) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(param_2,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 << 5);
        }
      }
      param_2[2] = *puVar3;
      param_2[3] = puVar3[1];
      puVar1 = puVar3 + 2;
      puVar3 = puVar3 + 5;
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 5;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14200db40 FUN_14200db40 body=6 status=ok
// SIG undefined FUN_14200db40(void)

undefined8 FUN_14200db40(void)

{
  return 0xb89d3fad;
}



// FUNCTION 14200db50 Get_Z_Construct_UScriptStruct_FPropertyPathSegment_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPropertyPathSegment_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPropertyPathSegment_CRC(void)

{
  return 0x921f505a;
}



// FUNCTION 14200db60 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FCachedPropertyPath::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acc4f8 == 0) {
    if (DAT_146acc4f0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acc4f0,&PTR_s__Script_PropertyPath_144f635e8);
    }
    lVar1 = DAT_146acc4f0;
    uVar2 = FUN_14200db40();
    DAT_146acc4f8 = GetStaticStruct(FUN_14200dc60,lVar1,L"CachedPropertyPath",0x28,uVar2);
  }
  return;
}



// FUNCTION 14200dbe0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FPropertyPathSegment::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acc510 == 0) {
    if (DAT_146acc4f0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acc4f0,&PTR_s__Script_PropertyPath_144f635e8);
    }
    lVar1 = DAT_146acc4f0;
    uVar2 = Get_Z_Construct_UScriptStruct_FPropertyPathSegment_CRC();
    DAT_146acc510 = GetStaticStruct(FUN_14200dc90,lVar1,L"PropertyPathSegment",0x20,uVar2);
  }
  return;
}



// FUNCTION 14200dc60 FUN_14200dc60 body=47 status=ok
// SIG undefined FUN_14200dc60(void)

longlong FUN_14200dc60(void)

{
  if (DAT_146acc508 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146acc508,&PTR_FUN_1464ef870);
  }
  return DAT_146acc508;
}



// FUNCTION 14200dc90 FUN_14200dc90 body=47 status=ok
// SIG undefined FUN_14200dc90(void)

longlong FUN_14200dc90(void)

{
  if (DAT_146acc518 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146acc518,&PTR_FUN_1464ef970);
  }
  return DAT_146acc518;
}



// FUNCTION 14200dcc0 FUN_14200dcc0 body=338 status=ok
// SIG undefined FUN_14200dcc0(void)

undefined8 * FUN_14200dcc0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)
            TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x20,local_18);
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d50130;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_1;
}



// FUNCTION 14200de20 FUN_14200de20 body=338 status=ok
// SIG undefined FUN_14200de20(void)

undefined8 * FUN_14200de20(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)
            TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x20,local_18);
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144f65ab0;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_1;
}



// FUNCTION 14200df80 FUN_14200df80 body=338 status=ok
// SIG undefined FUN_14200df80(void)

undefined8 * FUN_14200df80(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)
            TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x20,local_18);
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d67f08;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_1;
}



// FUNCTION 14200e0e0 NewIntrusiveReferenceController<SDefaultMovieBorder> body=137 status=ok
// SIG undefined NewIntrusiveReferenceController<SDefaultMovieBorder>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SDefaultMovieBorder>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x3a8);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_DestroyObject_144f65c60;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x398);
      SBorder::SBorder(_Dst);
      *_Dst = &PTR__scalar_deleting_destructor__144f65868;
      puVar1[0x73] = 0;
      *(undefined4 *)(puVar1 + 0x74) = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14200e170 FUN_14200e170 body=77 status=ok
// SIG undefined FUN_14200e170(void)

undefined8 * FUN_14200e170(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x370);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144f65c70;
    if (puVar1 != (undefined8 *)0xfffffffffffffff0) {
      SViewport::SViewport();
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}


