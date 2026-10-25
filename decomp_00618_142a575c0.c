// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142a575c0 Copy body=309 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FStructSerializerArrayTestStruct>::Copy
          (undefined8 param_1,int *param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_4 != 0) {
    piVar4 = (int *)(param_3 + 8);
    do {
      if (param_2 != piVar4 + -2) {
        iVar1 = *piVar4;
        pvVar2 = *(void **)(piVar4 + -2);
        param_2[2] = iVar1;
        if ((iVar1 == 0) && (param_2[3] == 0)) {
          param_2[3] = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(param_2,iVar1);
          ::_guard_xfg_dispatch_icall_nop(*(void **)param_2,pvVar2,(longlong)iVar1 << 2);
        }
      }
      param_2[4] = piVar4[2];
      param_2[5] = piVar4[3];
      param_2[6] = piVar4[4];
      param_2[7] = piVar4[5];
      param_2[8] = piVar4[6];
      param_2[9] = piVar4[7];
      param_2[10] = piVar4[8];
      piVar3 = param_2 + 0xc;
      if (piVar3 != piVar4 + 10) {
        iVar1 = piVar4[0xc];
        pvVar2 = *(void **)(piVar4 + 10);
        param_2[0xe] = iVar1;
        if ((iVar1 == 0) && (param_2[0xf] == 0)) {
          param_2[0xf] = 0;
        }
        else {
          TArray<FVector,FDefaultAllocator>::ResizeForCopy(piVar3,iVar1);
          ::_guard_xfg_dispatch_icall_nop(*(void **)piVar3,pvVar2,(longlong)iVar1 * 0xc);
        }
      }
      piVar4 = piVar4 + 0x10;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x10;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a57700 Copy body=157 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FStructSerializerBuiltinTestStruct>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x18;
    do {
      puVar1 = (undefined4 *)(param_3 + -0x18 + param_2);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(param_2 + -0x18) = *puVar1;
      *(undefined4 *)(param_2 + -0x14) = uVar2;
      *(undefined4 *)(param_2 + -0x10) = uVar3;
      *(undefined4 *)(param_2 + -0xc) = uVar4;
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8 + param_2);
      FString::operator=(param_2,param_3 + param_2);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10 + param_2);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18 + param_2);
      FText::operator=(param_2 + 0x20,param_3 + 0x20 + param_2);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38 + param_2);
      *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 0x40 + param_2);
      param_2 = param_2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a577a0 Copy body=116 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FStructSerializerMapTestStruct>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0xa0;
    do {
      TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
      operator=(param_2 + -0xa0,param_3 + -0xa0 + param_2);
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=(param_2 + -0x50,param_3 + -0x50 + param_2);
      TSet<TTuple<FString,FVector>,TDefaultMapHashableKeyFuncs<FString,FVector,0>,FDefaultSetAllocator>
      ::operator=(param_2,param_3 + param_2);
      param_2 = param_2 + 0xf0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a57820 Copy body=291 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FStructSerializerTestStruct>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x60;
    do {
      puVar1 = (undefined8 *)(param_3 + -0x60 + param_2);
      uVar6 = puVar1[1];
      *(undefined8 *)(param_2 + -0x60) = *puVar1;
      *(undefined8 *)(param_2 + -0x58) = uVar6;
      puVar2 = (undefined4 *)(param_3 + -0x50 + param_2);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(param_2 + -0x50) = *puVar2;
      *(undefined4 *)(param_2 + -0x4c) = uVar3;
      *(undefined4 *)(param_2 + -0x48) = uVar4;
      *(undefined4 *)(param_2 + -0x44) = uVar5;
      puVar1 = (undefined8 *)(param_3 + -0x40 + param_2);
      uVar6 = puVar1[1];
      *(undefined8 *)(param_2 + -0x40) = *puVar1;
      *(undefined8 *)(param_2 + -0x38) = uVar6;
      *(undefined8 *)(param_2 + -0x30) = *(undefined8 *)(param_3 + -0x30 + param_2);
      puVar1 = (undefined8 *)(param_3 + -0x28 + param_2);
      uVar6 = puVar1[1];
      *(undefined8 *)(param_2 + -0x28) = *puVar1;
      *(undefined8 *)(param_2 + -0x20) = uVar6;
      puVar2 = (undefined4 *)(param_3 + -0x18 + param_2);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(param_2 + -0x18) = *puVar2;
      *(undefined4 *)(param_2 + -0x14) = uVar3;
      *(undefined4 *)(param_2 + -0x10) = uVar4;
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8 + param_2);
      FString::operator=(param_2,param_3 + param_2);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10 + param_2);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18 + param_2);
      FText::operator=(param_2 + 0x20,param_3 + 0x20 + param_2);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38 + param_2);
      *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 0x40 + param_2);
      FStructSerializerArrayTestStruct::operator=(param_2 + 0x48,param_3 + 0x48 + param_2);
      TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
      operator=(param_2 + 0x88,param_3 + 0x88 + param_2);
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=(param_2 + 0xd8,param_3 + 0xd8 + param_2);
      TSet<TTuple<FString,FVector>,TDefaultMapHashableKeyFuncs<FString,FVector,0>,FDefaultSetAllocator>
      ::operator=(param_2 + 0x128,param_3 + 0x128 + param_2);
      param_2 = param_2 + 0x1d8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a57950 FUN_142a57950 body=47 status=ok
// SIG undefined FUN_142a57950(void)

void FUN_142a57950(undefined8 param_1,longlong *param_2)

{
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142a579a0 Destruct body=69 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FStructSerializerTestStruct>::Destruct
               (undefined8 param_1,longlong param_2)

{
  FStructSerializerMapTestStruct::~FStructSerializerMapTestStruct(param_2 + 0xe8);
  if (*(longlong *)(param_2 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    FMemory::Free();
  }
  FStructSerializerBuiltinTestStruct::~FStructSerializerBuiltinTestStruct(param_2 + 0x48);
  return;
}



// FUNCTION 142a579f0 Empty body=405 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,FVector>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_142a57ac1;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_142a57ac1:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      if (*(longlong *)(*param_1 + (longlong)iStack_1c * 0x28) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 142a57b90 FindId body=234 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    iVar2 = FUN_140438070(puVar5);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar7 = *param_1;
      do {
        lVar1 = (longlong)iVar2 * 0x28;
        if (*(int *)(param_3 + 1) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)*param_3;
        }
        if (*(int *)(lVar1 + 8 + lVar7) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = *(undefined2 **)(lVar1 + lVar7);
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar5);
        if (iVar3 == 0) {
          *param_2 = iVar2;
          return param_2;
        }
        lVar7 = *param_1;
        iVar2 = *(int *)(lVar1 + 0x20 + lVar7);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142a57c80 Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_CRC(void)

{
  return 0xe2c1cd49;
}



// FUNCTION 142a57c90 Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_CRC(void)

{
  return 0xd6e02adb;
}



// FUNCTION 142a57ca0 FUN_142a57ca0 body=6 status=ok
// SIG undefined FUN_142a57ca0(void)

undefined8 FUN_142a57ca0(void)

{
  return 0x1045ed99;
}



// FUNCTION 142a57cb0 Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_CRC(void)

{
  return 0x1acf4977;
}



// FUNCTION 142a57cc0 Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_CRC(void)

{
  return 0x45c61edf;
}



// FUNCTION 142a57cd0 Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_CRC(void)

{
  return 0x82f15345;
}



// FUNCTION 142a57ce0 FUN_142a57ce0 body=6 status=ok
// SIG undefined FUN_142a57ce0(void)

undefined8 FUN_142a57ce0(void)

{
  return 0x27cdbc9;
}



// FUNCTION 142a57cf0 Rehash body=544 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
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
    lVar7 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar7;
  }
  uVar6 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar6 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar6) {
      uVar12 = 0;
      uVar13 = (ulonglong)uVar6;
      do {
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar12;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar11 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar6 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        lVar7 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar9 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar9;
        if (bVar5) goto LAB_142a57e2f;
        uVar6 = puVar14[lVar7 + 1];
      }
      uStack_54 = -uVar6 & uVar6;
      iVar9 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_44 = (iStack_40 - iVar9) + 0x1f;
      if (iVar4 < iStack_44) {
LAB_142a57e2f:
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
        iVar4 = iStack_1c;
        puVar3 = (undefined8 *)(*param_1 + (longlong)iStack_1c * 0x28);
        if (*(int *)(*param_1 + 8 + (longlong)iStack_1c * 0x28) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar3;
        }
        uVar6 = FUN_140438070(puVar10);
        uVar6 = (int)*plVar2 - 1U & uVar6;
        *(uint *)((longlong)puVar3 + 0x24) = uVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(puVar3 + 4) =
             *(undefined4 *)
              ((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4) =
             iVar4;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 142a57f10 RemoveAtUninitialized body=178 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAtUninitialized(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar9 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar10 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar11 = uVar9 << 5;
    do {
      iVar8 = (int)uVar9;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar8;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar11) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar11) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar8;
      if (iVar8 < 0) {
        iVar5 = iVar8 + 0x1f;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      lVar11 = lVar11 + 0x20;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar10;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 142a57fd0 RemoveAtUninitialized body=176 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAtUninitialized(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = uVar10 * 0x28;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar8) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      lVar8 = lVar8 + 0x28;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 142a58080 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FStructSerializerArrayTestStruct::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b299b0 == 0) {
    if (DAT_146b29978 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b29978,&PTR_s__Script_Serialization_145363248);
    }
    lVar1 = DAT_146b29978;
    uVar2 = Get_Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_CRC();
    DAT_146b299b0 =
         GetStaticStruct(FUN_142a58400,lVar1,L"StructSerializerArrayTestStruct",0x40,uVar2);
  }
  return;
}



// FUNCTION 142a58100 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FStructSerializerBooleanTestStruct::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b299e0 == 0) {
    if (DAT_146b29978 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b29978,&PTR_s__Script_Serialization_145363248);
    }
    lVar1 = DAT_146b29978;
    uVar2 = Get_Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_CRC();
    DAT_146b299e0 =
         GetStaticStruct(FUN_142a58430,lVar1,L"StructSerializerBooleanTestStruct",8,uVar2);
  }
  return;
}



// FUNCTION 142a58180 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FStructSerializerBuiltinTestStruct::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b299c0 == 0) {
    if (DAT_146b29978 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b29978,&PTR_s__Script_Serialization_145363248);
    }
    lVar1 = DAT_146b29978;
    uVar2 = FUN_142a57ca0();
    DAT_146b299c0 =
         GetStaticStruct(FUN_142a58460,lVar1,L"StructSerializerBuiltinTestStruct",0x60,uVar2);
  }
  return;
}



// FUNCTION 142a58200 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FStructSerializerMapTestStruct::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b299a0 == 0) {
    if (DAT_146b29978 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b29978,&PTR_s__Script_Serialization_145363248);
    }
    lVar1 = DAT_146b29978;
    uVar2 = Get_Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_CRC();
    DAT_146b299a0 = GetStaticStruct(FUN_142a58490,lVar1,L"StructSerializerMapTestStruct",0xf0,uVar2)
    ;
  }
  return;
}



// FUNCTION 142a58280 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FStructSerializerNumericTestStruct::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b299f0 == 0) {
    if (DAT_146b29978 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b29978,&PTR_s__Script_Serialization_145363248);
    }
    lVar1 = DAT_146b29978;
    uVar2 = Get_Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_CRC();
    DAT_146b299f0 =
         GetStaticStruct(FUN_142a584c0,lVar1,L"StructSerializerNumericTestStruct",0x30,uVar2);
  }
  return;
}



// FUNCTION 142a58300 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FStructSerializerObjectTestStruct::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b299d0 == 0) {
    if (DAT_146b29978 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b29978,&PTR_s__Script_Serialization_145363248);
    }
    lVar1 = DAT_146b29978;
    uVar2 = Get_Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_CRC();
    DAT_146b299d0 =
         GetStaticStruct(FUN_142a584f0,lVar1,L"StructSerializerObjectTestStruct",0x10,uVar2);
  }
  return;
}



// FUNCTION 142a58380 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FStructSerializerTestStruct::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b29980 == 0) {
    if (DAT_146b29978 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b29978,&PTR_s__Script_Serialization_145363248);
    }
    lVar1 = DAT_146b29978;
    uVar2 = FUN_142a57ce0();
    DAT_146b29980 = GetStaticStruct(FUN_142a58520,lVar1,L"StructSerializerTestStruct",0x1d8,uVar2);
  }
  return;
}



// FUNCTION 142a58400 FUN_142a58400 body=47 status=ok
// SIG undefined FUN_142a58400(void)

longlong FUN_142a58400(void)

{
  if (DAT_146b299b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b299b8,&PTR_FUN_14667b640);
  }
  return DAT_146b299b8;
}



// FUNCTION 142a58430 FUN_142a58430 body=47 status=ok
// SIG undefined FUN_142a58430(void)

longlong FUN_142a58430(void)

{
  if (DAT_146b299e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b299e8,&PTR_FUN_14667bab0);
  }
  return DAT_146b299e8;
}



// FUNCTION 142a58460 FUN_142a58460 body=47 status=ok
// SIG undefined FUN_142a58460(void)

longlong FUN_142a58460(void)

{
  if (DAT_146b299c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b299c8,&PTR_FUN_14667b7f0);
  }
  return DAT_146b299c8;
}



// FUNCTION 142a58490 FUN_142a58490 body=47 status=ok
// SIG undefined FUN_142a58490(void)

longlong FUN_142a58490(void)

{
  if (DAT_146b299a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b299a8,&PTR_FUN_14667b4a0);
  }
  return DAT_146b299a8;
}



// FUNCTION 142a584c0 FUN_142a584c0 body=47 status=ok
// SIG undefined FUN_142a584c0(void)

longlong FUN_142a584c0(void)

{
  if (DAT_146b299f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b299f8,&PTR_FUN_14667bc50);
  }
  return DAT_146b299f8;
}



// FUNCTION 142a584f0 FUN_142a584f0 body=47 status=ok
// SIG undefined FUN_142a584f0(void)

longlong FUN_142a584f0(void)

{
  if (DAT_146b299d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b299d8,&PTR_FUN_14667b930);
  }
  return DAT_146b299d8;
}



// FUNCTION 142a58520 FUN_142a58520 body=47 status=ok
// SIG undefined FUN_142a58520(void)

longlong FUN_142a58520(void)

{
  if (DAT_146b29998 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b29998,&PTR_FUN_14667b220);
  }
  return DAT_146b29998;
}



// FUNCTION 142a58550 GetAllOverlays body=170 status=ok
// SIG undefined GetAllOverlays(void)

undefined8 * UBasicOverlays::GetAllOverlays(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  *param_2 = 0;
  iVar3 = *(int *)(param_1 + 0x30);
  lVar4 = *(longlong *)(param_1 + 0x28);
  *(int *)(param_2 + 1) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(param_2,iVar3,0);
  puVar2 = (undefined8 *)*param_2;
  lVar4 = lVar4 + 0x10;
  do {
    *puVar2 = *(undefined8 *)(lVar4 + -0x10);
    puVar2[1] = *(undefined8 *)(lVar4 + -8);
    FString::FString(puVar2 + 2,lVar4);
    puVar1 = (undefined8 *)(lVar4 + 0x10);
    lVar4 = lVar4 + 0x28;
    puVar2[4] = *puVar1;
    puVar2 = puVar2 + 5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_2;
}



// FUNCTION 142a58600 GetAllOverlays body=265 status=ok
// SIG undefined GetAllOverlays(void)

longlong * ULocalizedOverlays::GetAllOverlays(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  int local_20;
  
  plVar2 = (longlong *)GetCurrentLocaleOverlays();
  bVar4 = plVar2 == (longlong *)0x0;
  if (bVar4) {
    local_38 = 0;
    plVar2 = &local_38;
    local_30 = 0;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x278))(plVar2,&local_28);
  }
  *param_2 = 0;
  *param_2 = *plVar2;
  *plVar2 = 0;
  lVar1 = local_38;
  *(int *)(param_2 + 1) = (int)plVar2[1];
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  if (bVar4) {
    if ((int)local_30 != 0) {
      plVar2 = (longlong *)(local_38 + 0x10);
      iVar3 = (int)local_30;
      do {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 5;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
  }
  if (!bVar4) {
    if (local_20 != 0) {
      plVar2 = (longlong *)(local_28 + 0x10);
      iVar3 = local_20;
      do {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 5;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 142a58710 GetCurrentLocaleOverlays body=318 status=ok
// SIG undefined GetCurrentLocaleOverlays(void)

undefined8 ULocalizedOverlays::GetCurrentLocaleOverlays(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int local_res8 [2];
  undefined1 local_res10 [8];
  longlong *local_28;
  int local_20;
  
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = FInternationalization::Get();
  plVar8 = *(longlong **)(lVar3 + 0x30);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  uVar4 = FCulture::GetName(uVar4);
  FInternationalization::GetPrioritizedCultureNames(lVar3,&local_28,uVar4);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    lVar3 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar5 = (int *)((longlong)plVar8 + 0xc);
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar10 = local_28 + (longlong)local_20 * 2;
  plVar8 = local_28;
  do {
    plVar2 = local_28;
    iVar1 = local_20;
    if (plVar8 == plVar10) {
joined_r0x000142a58807:
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 2;
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
      return uVar9;
    }
    piVar5 = (int *)TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                    ::FindId(param_1 + 0x30,local_res10,plVar8);
    if (*piVar5 != -1) {
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x30,local_res8,plVar8);
      puVar7 = (undefined8 *)0x0;
      if (local_res8[0] != -1) {
        puVar7 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x30));
      }
      puVar6 = puVar7 + 2;
      if (puVar7 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      uVar9 = *puVar6;
      plVar2 = local_28;
      iVar1 = local_20;
      goto joined_r0x000142a58807;
    }
    plVar8 = plVar8 + 2;
  } while( true );
}



// FUNCTION 142a58850 GetOverlaysForTime body=239 status=ok
// SIG undefined GetOverlaysForTime(void)

void UBasicOverlays::GetOverlaysForTime(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = (int)param_3[1];
  if (iVar4 != 0) {
    plVar2 = (longlong *)(*param_3 + 0x10);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_3,0);
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
  plVar2 = plVar3 + (longlong)*(int *)(param_1 + 0x30) * 5;
  for (; plVar3 != plVar2; plVar3 = plVar3 + 5) {
    if ((*plVar3 <= *param_2) && (*param_2 < plVar3[1])) {
      iVar4 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar4 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_3,iVar4);
      }
      plVar1 = (longlong *)(*param_3 + (longlong)iVar4 * 0x28);
      *plVar1 = *plVar3;
      plVar1[1] = plVar3[1];
      FString::FString(plVar1 + 2,plVar3 + 2);
      plVar1[4] = plVar3[4];
    }
  }
  return;
}



// FUNCTION 142a58940 GetOverlaysForTime body=154 status=ok
// SIG undefined GetOverlaysForTime(void)

void ULocalizedOverlays::GetOverlaysForTime(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_3[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_3 + 0x10);
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_3,0);
  }
  plVar1 = (longlong *)GetCurrentLocaleOverlays(param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x280))(plVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 142a589e0 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UOverlays::StaticClass(void)

{
  if (DAT_146b29a50 == 0) {
    FUN_14171ccd0(L"/Script/Overlay",L"Overlays",&DAT_146b29a50,FUN_140447710,0x28,0x10000001,0,
                  L"Engine",FUN_142a58d50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b29a50;
}



// FUNCTION 142a58a80 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UBasicOverlays::StaticClass(void)

{
  if (DAT_146b29a10 == 0) {
    FUN_14171ccd0(L"/Script/Overlay",L"BasicOverlays",&DAT_146b29a10,FUN_140447710,0x38,0x10000000,0
                  ,L"Engine",FUN_142a58cc0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UOverlays::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b29a10;
}



// FUNCTION 142a58b30 FUN_142a58b30 body=47 status=ok
// SIG undefined FUN_142a58b30(void)

longlong FUN_142a58b30(void)

{
  if (DAT_146b29a48 == 0) {
    FUN_141786440(&DAT_146b29a48,&PTR_StaticClass_145363d50);
  }
  return DAT_146b29a48;
}



// FUNCTION 142a58b60 FUN_142a58b60 body=47 status=ok
// SIG undefined FUN_142a58b60(void)

longlong FUN_142a58b60(void)

{
  if (DAT_146b29a30 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b29a30,&PTR_s__Script_Overlay_145364688);
  }
  return DAT_146b29a30;
}



// FUNCTION 142a58bb0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong ULocalizedOverlays::StaticClass(void)

{
  if (DAT_146b29a28 == 0) {
    FUN_14171ccd0(L"/Script/Overlay",L"LocalizedOverlays",&DAT_146b29a28,FUN_140447710,0x80,
                  0x10000000,0,L"Engine",InternalConstructor<ULocalizedOverlays>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UOverlays::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b29a28;
}



// FUNCTION 142a58c70 FUN_142a58c70 body=53 status=ok
// SIG undefined FUN_142a58c70(void)

void FUN_142a58c70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1453646b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a58cc0 FUN_142a58cc0 body=51 status=ok
// SIG undefined FUN_142a58cc0(void)

void FUN_142a58cc0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__145364178;
    puVar1[5] = 0;
    puVar1[6] = 0;
  }
  return;
}



// FUNCTION 142a58d00 InternalConstructor<ULocalizedOverlays> body=76 status=ok
// SIG undefined InternalConstructor<ULocalizedOverlays>(void)

void InternalConstructor<ULocalizedOverlays>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__145364400;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 100) = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0;
  }
  return;
}



// FUNCTION 142a58d50 FUN_142a58d50 body=41 status=ok
// SIG undefined FUN_142a58d50(void)

void FUN_142a58d50(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_145363e58;
  }
  return;
}



// FUNCTION 142a58d80 FUN_142a58d80 body=95 status=ok
// SIG undefined FUN_142a58d80(void)

void FUN_142a58d80(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x10);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 5;
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



// FUNCTION 142a58de0 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UBasicOverlays::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_142a58d80(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142a58e20 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ULocalizedOverlays::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142a58e80 Copy body=212 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FOverlayItem>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 0x10);
    do {
      *param_2 = puVar3[-2];
      puVar1 = param_2 + 2;
      param_2[1] = puVar3[-1];
      if (puVar1 != puVar3) {
        iVar2 = *(int *)(puVar3 + 1);
        _Src = (void *)*puVar3;
        *(int *)(param_2 + 3) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x1c) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 2);
        }
      }
      puVar1 = puVar3 + 2;
      puVar3 = puVar3 + 5;
      param_2[4] = *puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 5;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a58f60 GetDisplayName body=107 status=ok
// SIG undefined GetDisplayName(void)

undefined8 * UTimeSynchronizationSource::GetDisplayName(undefined8 param_1,undefined8 *param_2)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\overlay\\public\\Overlays.h",0x39,
             L"Pure virtual not implemented (%s)",L"UOverlays::GetAllOverlays");
  FDebug::AssertFailed
            (&DAT_143f3f584,"d:\\oak\\main\\engine\\source\\runtime\\overlay\\public\\Overlays.h",
             0x39,L"Pure virtual not implemented (%s)",L"UOverlays::GetAllOverlays");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 142a58fd0 DoReduction body=83 status=ok
// SIG undefined DoReduction(void)

void UAnimCompress::DoReduction(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\overlay\\public\\Overlays.h",0x41,
             L"Pure virtual not implemented (%s)",L"UOverlays::GetAllOverlays");
  FDebug::AssertFailed
            (&DAT_143f3f584,"d:\\oak\\main\\engine\\source\\runtime\\overlay\\public\\Overlays.h",
             0x41,L"Pure virtual not implemented (%s)",L"UOverlays::GetAllOverlays");
  return;
}



// FUNCTION 142a59030 Get_Z_Construct_UScriptStruct_FOverlayItem_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FOverlayItem_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FOverlayItem_CRC(void)

{
  return 0x45db394f;
}



// FUNCTION 142a59040 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FOverlayItem::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b29a38 == 0) {
    if (DAT_146b29a30 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146b29a30,&PTR_s__Script_Overlay_145364688);
    }
    lVar1 = DAT_146b29a30;
    uVar2 = Get_Z_Construct_UScriptStruct_FOverlayItem_CRC();
    DAT_146b29a38 = GetStaticStruct(FUN_142a59120,lVar1,L"OverlayItem",0x28,uVar2);
  }
  return;
}



// FUNCTION 142a590c0 FUN_142a590c0 body=47 status=ok
// SIG undefined FUN_142a590c0(void)

longlong FUN_142a590c0(void)

{
  if (DAT_146b29a08 == 0) {
    FUN_141786440(&DAT_146b29a08,&PTR_StaticClass_145363a10);
  }
  return DAT_146b29a08;
}



// FUNCTION 142a590f0 FUN_142a590f0 body=47 status=ok
// SIG undefined FUN_142a590f0(void)

longlong FUN_142a590f0(void)

{
  if (DAT_146b29a20 == 0) {
    FUN_141786440(&DAT_146b29a20,&PTR_StaticClass_145363b50);
  }
  return DAT_146b29a20;
}



// FUNCTION 142a59120 FUN_142a59120 body=47 status=ok
// SIG undefined FUN_142a59120(void)

longlong FUN_142a59120(void)

{
  if (DAT_146b29a40 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b29a40,&PTR_FUN_14667bf50);
  }
  return DAT_146b29a40;
}



// FUNCTION 142a59150 FetchSample<IMediaOverlaySample> body=162 status=ok
// SIG undefined FetchSample<IMediaOverlaySample>(void)

undefined8 FetchSample<IMediaOverlaySample>(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong local_res8;
  undefined1 local_res20 [8];
  undefined1 local_28 [8];
  longlong local_20;
  undefined1 local_18;
  longlong local_10;
  
  plVar1 = (longlong *)(param_1 + 8);
  cVar2 = (**(code **)(*(longlong *)(param_1 + 8) + 8))(plVar1,param_3);
  if (cVar2 != '\0') {
    (**(code **)(*(longlong *)*param_3 + 0x18))((longlong *)*param_3,&local_res8);
    plVar3 = (longlong *)(*(code *)**(undefined8 **)*param_3)((undefined8 *)*param_3,local_res20);
    local_20 = local_res8;
    local_28[0] = 1;
    local_10 = *plVar3 + local_res8;
    local_18 = 0;
    cVar2 = TRange<FTimespan>::Overlaps(param_2,local_28);
    if (cVar2 != '\0') {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a59200 FMediaAudioResampler body=58 status=ok
// SIG undefined FMediaAudioResampler(void)

longlong FMediaAudioResampler::FMediaAudioResampler(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x48) = 0xffffffff80000000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0xffffffff80000000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return param_1;
}



// FUNCTION 142a59240 FUN_142a59240 body=573 status=ok
// SIG undefined FUN_142a59240(void)

undefined8 * FUN_142a59240(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_145365eb0;
  param_1[1] = &PTR_TickTickable_145365ed8;
  param_1[2] = &PTR_ReceiveMediaEvent_145365ee8;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x8000000000000000;
  puVar1 = (undefined8 *)operator_new(0x178);
  puVar2 = puVar3;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x84) = 0;
    puVar1[0x12] = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined4 *)(puVar1 + 0x1a) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
    puVar1[0x1c] = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    *(undefined4 *)(puVar1 + 0x24) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x124) = 0;
    puVar1[0x26] = 0;
    *(undefined4 *)(puVar1 + 0x27) = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 0x2a));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 0x2a),4000);
    puVar2 = puVar1;
  }
  param_1[0x10] = puVar2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x11),4000);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 2;
  param_1[0x1c] = 0x8000000000000000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  puVar2 = (undefined8 *)operator_new(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar3 = puVar2;
  }
  param_1[0x23] = puVar3;
  param_1[0x22] = puVar3;
  return param_1;
}



// FUNCTION 142a59480 ~FMediaPlayerFacade body=795 status=ok
// SIG undefined ~FMediaPlayerFacade(void)

void FMediaPlayerFacade::~FMediaPlayerFacade(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  BOOL BVar7;
  longlong local_18;
  longlong *local_10;
  
  *param_1 = &PTR_FUN_145365eb0;
  plVar4 = param_1 + 0x1d;
  param_1[1] = &PTR_TickTickable_145365ed8;
  param_1[2] = &PTR_ReceiveMediaEvent_145365ee8;
  if (*plVar4 != 0) {
    BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
    if (BVar7 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
    }
    (*(code *)**(undefined8 **)*plVar4)();
    local_10 = (longlong *)0x0;
    if (plVar4 != &local_18) {
      *plVar4 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1e,&local_10);
      plVar4 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
  }
  plVar4 = (longlong *)param_1[0x10];
  if (plVar4 != (longlong *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)(plVar4 + 0x2a));
    *(undefined4 *)(plVar4 + 0x27) = 0;
    if (plVar4[0x26] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(plVar4 + 0x1e,0);
    if (plVar4[0x22] != 0) {
      FMemory::Free();
    }
    if (plVar4[0x1e] != 0) {
      FMemory::Free();
    }
    *(undefined4 *)(plVar4 + 0x1d) = 0;
    if (plVar4[0x1c] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(plVar4 + 0x14,0);
    if (plVar4[0x18] != 0) {
      FMemory::Free();
    }
    if (plVar4[0x14] != 0) {
      FMemory::Free();
    }
    *(undefined4 *)(plVar4 + 0x13) = 0;
    if (plVar4[0x12] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(plVar4 + 10,0);
    if (plVar4[0xe] != 0) {
      FMemory::Free();
    }
    if (plVar4[10] != 0) {
      FMemory::Free();
    }
    *(undefined4 *)(plVar4 + 9) = 0;
    if (plVar4[8] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(plVar4,0);
    if (plVar4[4] != 0) {
      FMemory::Free();
    }
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar4,0x178);
  }
  param_1[0x10] = 0;
  lVar6 = param_1[0x23];
  while (lVar6 != 0) {
    puVar5 = (undefined8 *)param_1[0x23];
    param_1[0x23] = *puVar5;
    FMemory::operator_delete(puVar5,0x10);
    lVar6 = param_1[0x23];
  }
  plVar4 = (longlong *)param_1[0x1e];
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
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x19);
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 0xd);
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 0xb);
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 9);
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 7);
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 5);
  param_1[2] = &PTR__purecall_143f3ef70;
  param_1[1] = &PTR__purecall_143f3ef70;
  *param_1 = &PTR_StartProfileThreadUsage_144146a38;
  return;
}



// FUNCTION 142a597c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FMediaPlayerFacade::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FMediaPlayerFacade();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 142a59800 AddAudioSampleSink body=232 status=ok
// SIG undefined AddAudioSampleSink(void)

void FMediaPlayerFacade::AddAudioSampleSink(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  BOOL BVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 local_18;
  longlong *local_10;
  
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  }
  uVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_18 = uVar2;
  local_10 = plVar3;
  iVar5 = TArray<TWeakPtr<FImgMediaLoader,1>,FDefaultAllocator>::Find(param_1 + 0x28,&local_18);
  if (iVar5 == -1) {
    iVar5 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar5 + 1;
    if (*(int *)(param_1 + 0x34) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x28,iVar5);
    }
    puVar6 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x28));
    *puVar6 = uVar2;
    puVar6[1] = plVar3;
  }
  else if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142a598e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  return;
}



// FUNCTION 142a598f0 AddVideoSampleSink body=172 status=ok
// SIG undefined AddVideoSampleSink(void)

void FMediaPlayerFacade::AddVideoSampleSink(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 local_18;
  longlong *local_10;
  
  plVar3 = (longlong *)param_2[1];
  uVar4 = *param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar1 = (longlong *)(param_1 + 0x68);
  local_18 = uVar4;
  local_10 = plVar3;
  iVar5 = TArray<TWeakPtr<FImgMediaLoader,1>,FDefaultAllocator>::Find(plVar1,&local_18);
  if (iVar5 == -1) {
    iVar5 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0x70) = iVar5 + 1;
    if (*(int *)(param_1 + 0x74) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar5);
    }
    puVar6 = (undefined8 *)((longlong)iVar5 * 0x10 + *plVar1);
    *puVar6 = uVar4;
    puVar6[1] = plVar3;
  }
  else if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}



// FUNCTION 142a599a0 CanPause body=54 status=ok
// SIG undefined CanPause(void)

undefined8 FMediaPlayerFacade::CanPause(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    cVar1 = (**(code **)*puVar2)(puVar2,1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a599e0 CanPlayUrl body=400 status=ok
// SIG undefined CanPlayUrl(void)

undefined8 FMediaPlayerFacade::CanPlayUrl(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 local_res20 [8];
  undefined2 *local_48;
  undefined8 local_40;
  
  puVar5 = (undefined8 *)FName::FName(local_res20,"Media",1);
  uVar12 = *puVar5;
  uVar6 = FUN_14168dc80();
  plVar7 = (longlong *)FUN_141690010(uVar6,uVar12);
  if (plVar7 == (longlong *)0x0) {
    return 0;
  }
  local_48 = (undefined2 *)0x0;
  local_40 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  puVar1 = local_48;
  FGenericPlatformString::Convert<char,wchar_t>(local_48,8,"Windows",8,0x3f);
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x58))(plVar7);
  puVar13 = (undefined8 *)*plVar7;
  puVar5 = puVar13 + (int)plVar7[1];
  if (puVar13 != puVar5) {
    iVar2 = (int)local_40;
    do {
      plVar7 = (longlong *)*puVar13;
      puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7);
      puVar11 = (undefined8 *)*puVar8;
      puVar8 = puVar11 + (longlong)*(int *)(puVar8 + 1) * 2;
      for (; puVar11 != puVar8; puVar11 = puVar11 + 2) {
        puVar10 = &DAT_143f3eda8;
        if (iVar2 != 0) {
          puVar10 = puVar1;
        }
        if (*(int *)(puVar11 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar11;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
        if (iVar4 == 0) {
          cVar3 = (**(code **)*plVar7)(plVar7,param_2,param_3,0,0);
          if (cVar3 != '\0') {
            uVar12 = 1;
            goto LAB_142a59b33;
          }
          break;
        }
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar5);
  }
  uVar12 = 0;
LAB_142a59b33:
  if (puVar1 != (undefined2 *)0x0) {
    FMemory::Free(puVar1);
  }
  return uVar12;
}



// FUNCTION 142a59b70 CanScrub body=54 status=ok
// SIG undefined CanScrub(void)

undefined8 FMediaPlayerFacade::CanScrub(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    cVar1 = (**(code **)*puVar2)(puVar2,3);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a59bb0 CanSeek body=54 status=ok
// SIG undefined CanSeek(void)

undefined8 FMediaPlayerFacade::CanSeek(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    cVar1 = (**(code **)*puVar2)(puVar2,4);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a59bf0 Close body=167 status=ok
// SIG undefined Close(void)

void FMediaPlayerFacade::Close(longlong param_1)

{
  BOOL BVar1;
  
  if (1 < *(int *)(param_1 + 0xb8)) {
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
      if (BVar1 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
      }
      (**(code **)**(undefined8 **)(param_1 + 0xe8))();
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
    }
    *(undefined8 *)(param_1 + 0x78) = 0x8000000000000000;
    FMediaSampleCache::Empty(*(undefined8 *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (*(int *)(param_1 + 0xbc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb0,0);
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
    FUN_142a5a580(param_1);
  }
  return;
}



// FUNCTION 142a59ca0 Downmix body=381 status=ok
// SIG undefined Downmix(void)

ulonglong MediaAudioResampler::Downmix
                    (longlong param_1,uint param_2,int param_3,float *param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  uint uVar5;
  undefined *puVar6;
  float *pfVar7;
  float *pfVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  
  puVar6 = (undefined *)(ulonglong)(param_2 - 1);
  if (param_2 - 1 < 8) {
    puVar6 = (undefined *)(ulonglong)(param_5 - 1);
    if (param_5 - 1 < 8) {
      puVar6 = (&PTR_PTR_14667c080)[param_5 - 1];
      pfVar4 = *(float **)(puVar6 + (ulonglong)(param_2 - 1) * 8);
      if (pfVar4 != (float *)0x0) {
        if (param_3 != 0) {
          do {
            param_3 = param_3 + -1;
            pfVar7 = pfVar4;
            uVar9 = (ulonglong)param_5;
            if (param_5 != 0) {
              do {
                *param_4 = 0.0;
                uVar5 = 0;
                if (3 < param_2) {
                  fVar11 = 0.0;
                  pfVar8 = (float *)(param_1 + 8);
                  uVar5 = (param_2 - 4 >> 2) + 1;
                  puVar6 = (undefined *)(ulonglong)uVar5;
                  uVar10 = (ulonglong)uVar5;
                  uVar5 = uVar5 * 4;
                  do {
                    fVar11 = pfVar8[-2] * *pfVar7 + fVar11;
                    *param_4 = fVar11;
                    fVar11 = pfVar8[-1] * pfVar7[1] + fVar11;
                    *param_4 = fVar11;
                    fVar11 = pfVar7[2] * *pfVar8 + fVar11;
                    *param_4 = fVar11;
                    pfVar1 = pfVar8 + 1;
                    pfVar8 = pfVar8 + 4;
                    pfVar2 = pfVar7 + 3;
                    pfVar7 = pfVar7 + 4;
                    fVar11 = *pfVar1 * *pfVar2 + fVar11;
                    *param_4 = fVar11;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                if (uVar5 < param_2) {
                  pfVar8 = (float *)(param_1 + (ulonglong)uVar5 * 4);
                  puVar6 = (undefined *)(ulonglong)(param_2 - uVar5);
                  uVar10 = (ulonglong)(param_2 - uVar5);
                  do {
                    fVar11 = *pfVar7;
                    pfVar7 = pfVar7 + 1;
                    fVar3 = *pfVar8;
                    pfVar8 = pfVar8 + 1;
                    *param_4 = fVar11 * fVar3 + *param_4;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                param_4 = param_4 + 1;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            param_1 = param_1 + (ulonglong)param_2 * 4;
          } while (param_3 != 0);
        }
        return CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
      }
    }
  }
  return (ulonglong)puVar6 & 0xffffffffffffff00;
}



// FUNCTION 142a59e20 Empty body=426 status=ok
// SIG undefined Empty(void)

void FMediaSampleCache::Empty(longlong param_1)

{
  BOOL BVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x150));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x150));
  }
  TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1);
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  if (0 < (int)*(uint *)(param_1 + 0x98)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x98);
    do {
      lVar2 = *(longlong *)(param_1 + 0x90);
      if (*(longlong *)(param_1 + 0x90) == 0) {
        lVar2 = param_1 + 0x88;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x98) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  if (0 < (int)*(uint *)(param_1 + 0xe8)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0xe8);
    do {
      lVar2 = *(longlong *)(param_1 + 0xe0);
      if (*(longlong *)(param_1 + 0xe0) == 0) {
        lVar2 = param_1 + 0xd8;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0xe8) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  if (0 < (int)*(uint *)(param_1 + 0x138)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x138);
    do {
      lVar2 = *(longlong *)(param_1 + 0x130);
      if (*(longlong *)(param_1 + 0x130) == 0) {
        lVar2 = param_1 + 0x128;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x138) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x000142a59fc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x150));
  return;
}



// FUNCTION 142a59fd0 EnumerateAudioCaptureDevices body=160 status=ok
// SIG undefined EnumerateAudioCaptureDevices(void)

void MediaCaptureSupport::EnumerateAudioCaptureDevices(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res10 [8];
  
  puVar2 = (undefined8 *)FName::FName(local_res10,"Media",1);
  uVar1 = *puVar2;
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FUN_141690010(uVar3,uVar1);
  if (plVar4 != (longlong *)0x0) {
    puVar5 = (ulonglong *)(**(code **)(*plVar4 + 0x40))(plVar4);
    uVar7 = 0;
    puVar2 = (undefined8 *)*puVar5;
    uVar6 = (longlong)(int)puVar5[1] & 0x1fffffffffffffff;
    if (puVar2 + (int)puVar5[1] < puVar2) {
      uVar6 = uVar7;
    }
    if (uVar6 != 0) {
      do {
        (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,param_1);
        uVar7 = uVar7 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar7 != uVar6);
    }
  }
  return;
}



// FUNCTION 142a5a070 EnumerateVideoCaptureDevices body=161 status=ok
// SIG undefined EnumerateVideoCaptureDevices(void)

void MediaCaptureSupport::EnumerateVideoCaptureDevices(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res10 [8];
  
  puVar2 = (undefined8 *)FName::FName(local_res10,"Media",1);
  uVar1 = *puVar2;
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FUN_141690010(uVar3,uVar1);
  if (plVar4 != (longlong *)0x0) {
    puVar5 = (ulonglong *)(**(code **)(*plVar4 + 0x40))(plVar4);
    uVar7 = 0;
    puVar2 = (undefined8 *)*puVar5;
    uVar6 = (longlong)(int)puVar5[1] & 0x1fffffffffffffff;
    if (puVar2 + (int)puVar5[1] < puVar2) {
      uVar6 = uVar7;
    }
    if (uVar6 != 0) {
      do {
        (**(code **)(*(longlong *)*puVar2 + 8))((longlong *)*puVar2,param_1);
        uVar7 = uVar7 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar7 != uVar6);
    }
  }
  return;
}



// FUNCTION 142a5a120 FetchAudio body=185 status=ok
// SIG undefined FetchAudio(void)

undefined8 FMediaSamples::FetchAudio(longlong param_1,undefined1 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong local_res8;
  undefined1 local_res10 [8];
  undefined1 local_48 [8];
  longlong local_40;
  undefined1 local_38;
  longlong local_30;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28[0] = *param_2;
  plVar1 = (longlong *)(param_1 + 0x18);
  local_20 = *(undefined8 *)(param_2 + 8);
  local_18 = param_2[0x10];
  local_10 = *(undefined8 *)(param_2 + 0x18);
  cVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_3);
  if (cVar2 != '\0') {
    (**(code **)(*(longlong *)*param_3 + 0x30))((longlong *)*param_3,&local_res8);
    plVar3 = (longlong *)
             (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,local_res10);
    local_40 = local_res8;
    local_48[0] = 1;
    local_30 = *plVar3 + local_res8;
    local_38 = 0;
    cVar2 = TRange<FTimespan>::Overlaps(local_28,local_48);
    if (cVar2 != '\0') {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a5a1e0 FetchCaption body=56 status=ok
// SIG undefined FetchCaption(void)

void FMediaSamples::FetchCaption(longlong param_1,undefined1 *param_2)

{
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28[0] = *param_2;
  local_20 = *(undefined8 *)(param_2 + 8);
  local_18 = param_2[0x10];
  local_10 = *(undefined8 *)(param_2 + 0x18);
  FetchSample<IMediaOverlaySample>(param_1 + 0x40,local_28);
  return;
}



// FUNCTION 142a5a220 FetchMetadata body=185 status=ok
// SIG undefined FetchMetadata(void)

undefined8 FMediaSamples::FetchMetadata(longlong param_1,undefined1 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong local_res8;
  undefined1 local_res10 [8];
  undefined1 local_48 [8];
  longlong local_40;
  undefined1 local_38;
  longlong local_30;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28[0] = *param_2;
  plVar1 = (longlong *)(param_1 + 0x78);
  local_20 = *(undefined8 *)(param_2 + 8);
  local_18 = param_2[0x10];
  local_10 = *(undefined8 *)(param_2 + 0x18);
  cVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_3);
  if (cVar2 != '\0') {
    (**(code **)(*(longlong *)*param_3 + 0x18))((longlong *)*param_3,&local_res8);
    plVar3 = (longlong *)(**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,local_res10);
    local_40 = local_res8;
    local_48[0] = 1;
    local_30 = *plVar3 + local_res8;
    local_38 = 0;
    cVar2 = TRange<FTimespan>::Overlaps(local_28,local_48);
    if (cVar2 != '\0') {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a5a2e0 FetchSubtitle body=59 status=ok
// SIG undefined FetchSubtitle(void)

void FMediaSamples::FetchSubtitle(longlong param_1,undefined1 *param_2)

{
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28[0] = *param_2;
  local_20 = *(undefined8 *)(param_2 + 8);
  local_18 = param_2[0x10];
  local_10 = *(undefined8 *)(param_2 + 0x18);
  FetchSample<IMediaOverlaySample>(param_1 + 0xa0,local_28);
  return;
}



// FUNCTION 142a5a320 FetchVideo body=188 status=ok
// SIG undefined FetchVideo(void)

undefined8 FMediaSamples::FetchVideo(longlong param_1,undefined1 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong local_res8;
  undefined1 local_res10 [8];
  undefined1 local_48 [8];
  longlong local_40;
  undefined1 local_38;
  longlong local_30;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28[0] = *param_2;
  plVar1 = (longlong *)(param_1 + 0xd8);
  local_20 = *(undefined8 *)(param_2 + 8);
  local_18 = param_2[0x10];
  local_10 = *(undefined8 *)(param_2 + 0x18);
  cVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_3);
  if (cVar2 != '\0') {
    (**(code **)(*(longlong *)*param_3 + 0x38))((longlong *)*param_3,&local_res8);
    plVar3 = (longlong *)
             (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,local_res10);
    local_40 = local_res8;
    local_48[0] = 1;
    local_30 = *plVar3 + local_res8;
    local_38 = 0;
    cVar2 = TRange<FTimespan>::Overlaps(local_28,local_48);
    if (cVar2 != '\0') {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a5a3e0 Flush body=226 status=ok
// SIG undefined Flush(void)

void TMediaSampleSinks<IMediaOverlaySample>::Flush(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  
  iVar8 = (int)param_1[1] + -1;
  if (-1 < iVar8) {
    lVar7 = (longlong)iVar8 << 4;
    do {
      lVar2 = *param_1;
      plVar6 = *(longlong **)(lVar2 + 8 + lVar7);
      plVar5 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar9 = iVar4 == 0;
        if (bVar9) {
          *(int *)(plVar6 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar5 = (longlong *)0x0, !bVar9) {
          LOCK();
          bVar9 = iVar4 == (int)plVar6[1];
          if (bVar9) {
            *(int *)(plVar6 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar9) {
            plVar5 = plVar6;
            if ((plVar6 != (longlong *)0x0) &&
               (plVar3 = *(longlong **)(lVar2 + lVar7), plVar3 != (longlong *)0x0)) {
              (**(code **)(*plVar3 + 0x10))();
              goto LAB_142a5a44f;
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar6[1];
          bVar9 = iVar4 == 0;
          if (bVar9) {
            *(int *)(plVar6 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      TArray<TWeakPtr<IMediaClockSink,1>,FDefaultAllocator>::RemoveAtSwapImpl(param_1,iVar8,1,1);
      plVar6 = plVar5;
LAB_142a5a44f:
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar6 + 1;
        lVar2 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
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
      lVar7 = lVar7 + -0x10;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  return;
}



// FUNCTION 142a5a4d0 Flush body=83 status=ok
// SIG undefined Flush(void)

void FMediaAudioResampler::Flush(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x6c)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x60,0);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0xffffffff80000000;
  *(undefined8 *)(param_1 + 0x50) = 0xffffffff80000000;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 142a5a530 FlushSamples body=74 status=ok
// SIG undefined FlushSamples(void)

void FMediaSamples::FlushSamples(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x10))(param_1 + 0x10);
  (**(code **)(*(longlong *)(param_1 + 0x70) + 0x10))(param_1 + 0x70);
  (**(code **)(*(longlong *)(param_1 + 0x40) + 0x10))(param_1 + 0x40);
  (**(code **)(*(longlong *)(param_1 + 0xa0) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000142a5a576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0xd0) + 0x10))();
  return;
}



// FUNCTION 142a5a580 FUN_142a5a580 body=785 status=ok
// SIG undefined FUN_142a5a580(void)

void FUN_142a5a580(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  BOOL BVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  }
  plVar6 = (longlong *)0x0;
  iVar7 = *(int *)(param_1 + 0x30) + -1;
  if (-1 < iVar7) {
    lVar10 = (longlong)iVar7 << 4;
    do {
      lVar2 = *(longlong *)(param_1 + 0x28);
      plVar9 = *(longlong **)(lVar2 + 8 + lVar10);
      plVar8 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar9[1];
        bVar11 = iVar5 == 0;
        if (bVar11) {
          *(int *)(plVar9 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar8 = plVar6, !bVar11) {
          LOCK();
          bVar11 = iVar5 == (int)plVar9[1];
          if (bVar11) {
            *(int *)(plVar9 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar11) {
            plVar8 = plVar9;
            if ((plVar9 != (longlong *)0x0) &&
               (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 != (longlong *)0x0)) {
              (**(code **)(*plVar3 + 0x10))();
              goto LAB_142a5a62f;
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar11 = iVar5 == 0;
          if (bVar11) {
            *(int *)(plVar9 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      TArray<TWeakPtr<IMediaClockSink,1>,FDefaultAllocator>::RemoveAtSwapImpl
                (param_1 + 0x28,iVar7,1,1);
      plVar9 = plVar8;
LAB_142a5a62f:
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        lVar2 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      lVar10 = lVar10 + -0x10;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  TMediaSampleSinks<IMediaOverlaySample>::Flush(param_1 + 0x38);
  iVar7 = *(int *)(param_1 + 0x50) + -1;
  if (-1 < iVar7) {
    lVar10 = (longlong)iVar7 << 4;
    do {
      lVar2 = *(longlong *)(param_1 + 0x48);
      plVar9 = *(longlong **)(lVar2 + 8 + lVar10);
      plVar8 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar9[1];
        bVar11 = iVar5 == 0;
        if (bVar11) {
          *(int *)(plVar9 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar8 = plVar6, !bVar11) {
          LOCK();
          bVar11 = iVar5 == (int)plVar9[1];
          if (bVar11) {
            *(int *)(plVar9 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar11) {
            plVar8 = plVar9;
            if ((plVar9 != (longlong *)0x0) &&
               (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 != (longlong *)0x0)) {
              (**(code **)(*plVar3 + 0x10))();
              goto LAB_142a5a6df;
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar11 = iVar5 == 0;
          if (bVar11) {
            *(int *)(plVar9 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      TArray<TWeakPtr<IMediaClockSink,1>,FDefaultAllocator>::RemoveAtSwapImpl
                (param_1 + 0x48,iVar7,1,1);
      plVar9 = plVar8;
LAB_142a5a6df:
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        lVar2 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      lVar10 = lVar10 + -0x10;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  TMediaSampleSinks<IMediaOverlaySample>::Flush(param_1 + 0x58);
  iVar7 = *(int *)(param_1 + 0x70) + -1;
  if (-1 < iVar7) {
    lVar10 = (longlong)iVar7 << 4;
    do {
      lVar2 = *(longlong *)(param_1 + 0x68);
      plVar9 = *(longlong **)(lVar2 + 8 + lVar10);
      plVar8 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar9[1];
        bVar11 = iVar5 == 0;
        if (bVar11) {
          *(int *)(plVar9 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar8 = plVar6, !bVar11) {
          LOCK();
          bVar11 = iVar5 == (int)plVar9[1];
          if (bVar11) {
            *(int *)(plVar9 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar11) {
            plVar8 = plVar9;
            if ((plVar9 != (longlong *)0x0) &&
               (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 != (longlong *)0x0)) {
              (**(code **)(*plVar3 + 0x10))();
              goto LAB_142a5a78f;
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar11 = iVar5 == 0;
          if (bVar11) {
            *(int *)(plVar9 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      TArray<TWeakPtr<IMediaClockSink,1>,FDefaultAllocator>::RemoveAtSwapImpl
                (param_1 + 0x68,iVar7,1,1);
      plVar9 = plVar8;
LAB_142a5a78f:
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        lVar2 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      lVar10 = lVar10 + -0x10;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x28))();
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  *(undefined8 *)(param_1 + 0xe0) = 0x8000000000000000;
                    /* WARNING: Could not recover jumptable at 0x000142a5a827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  return;
}



// FUNCTION 142a5a8a0 FUN_142a5a8a0 body=1094 status=ok
// SIG undefined FUN_142a5a8a0(void)

uint FUN_142a5a8a0(longlong param_1,float *param_2,longlong *param_3,uint param_4,float param_5,
                  undefined8 param_6,undefined8 *param_7)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 *puVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  float fVar18;
  undefined8 local_78;
  longlong *plStack_70;
  
  if (((param_4 == 0) || (param_2 == (float *)0x0)) || (*(int *)(param_1 + 0x8c) == 0)) {
    return 0;
  }
  uVar17 = 0;
  if (param_4 != 0) {
    do {
      if (*(longlong *)(param_1 + 0x50) == -0x80000000) {
        local_78 = 0;
        plStack_70 = (longlong *)0x0;
        (**(code **)*param_7)(param_7,&local_78);
        cVar6 = FMediaAudioResampler::SetInput(param_1,&local_78);
        plVar5 = plStack_70;
        if (cVar6 == '\0') {
          if (plStack_70 == (longlong *)0x0) {
            return uVar17;
          }
          LOCK();
          plVar1 = plStack_70 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 != 1) {
            return uVar17;
          }
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar13 != 1) {
            return uVar17;
          }
          (**(code **)(*plVar5 + 8))(plVar5,1);
          return uVar17;
        }
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_70 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_70)();
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar13 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
      lVar7 = *(longlong *)(param_1 + 0x48);
      if ((lVar7 < 0) || (lVar7 < (longlong)(ulonglong)*(uint *)(param_1 + 0x78))) {
        *param_3 = (longlong)
                   ((((float)lVar7 + *(float *)(param_1 + 0x40)) / (float)*(uint *)(param_1 + 0x78))
                   * (float)*(longlong *)(param_1 + 0x70)) + *(longlong *)(param_1 + 0x80);
        if (0.0 <= param_5 * *(float *)(param_1 + 0x58)) {
          uVar12 = *(ulonglong *)(param_1 + 0x48);
        }
        else {
          lVar7 = 0;
          lVar4 = *(longlong *)(param_1 + 0x60);
          iVar13 = *(int *)(param_1 + 0x68) + -1;
          lVar15 = (longlong)(*(int *)(param_1 + 0x68) / 2);
          if (3 < lVar15) {
            lVar10 = (longlong)iVar13;
            lVar16 = (lVar15 - 4U >> 2) + 1;
            lVar7 = lVar16 * 4;
            iVar13 = iVar13 + (int)lVar16 * -4;
            puVar11 = (undefined4 *)(lVar4 + (lVar10 + -2) * 4);
            puVar14 = (undefined4 *)(lVar4 + 8);
            do {
              uVar3 = puVar14[-2];
              puVar14[-2] = puVar11[2];
              puVar11[2] = uVar3;
              uVar3 = puVar14[-1];
              puVar14[-1] = puVar11[1];
              puVar11[1] = uVar3;
              uVar3 = *puVar14;
              *puVar14 = *puVar11;
              *puVar11 = uVar3;
              uVar3 = puVar14[1];
              puVar14[1] = puVar11[-1];
              puVar11[-1] = uVar3;
              lVar16 = lVar16 + -1;
              puVar11 = puVar11 + -4;
              puVar14 = puVar14 + 4;
            } while (lVar16 != 0);
          }
          if (lVar7 < lVar15) {
            puVar11 = (undefined4 *)(lVar4 + (longlong)iVar13 * 4);
            do {
              uVar3 = *(undefined4 *)(lVar4 + lVar7 * 4);
              *(undefined4 *)(lVar4 + lVar7 * 4) = *puVar11;
              lVar7 = lVar7 + 1;
              *puVar11 = uVar3;
              puVar11 = puVar11 + -1;
            } while (lVar7 < lVar15);
          }
          uVar12 = ((ulonglong)*(uint *)(param_1 + 0x78) - *(longlong *)(param_1 + 0x48)) - 1;
          *(float *)(param_1 + 0x58) = param_5;
          *(ulonglong *)(param_1 + 0x48) = uVar12;
          *(float *)(param_1 + 0x40) = 1.0 - *(float *)(param_1 + 0x40);
        }
        if (uVar12 != *(ulonglong *)(param_1 + 0x50)) {
          lVar7 = *(longlong *)(param_1 + 0x60);
          uVar9 = *(uint *)(param_1 + 0x88);
          uVar8 = (ulonglong)uVar9;
          if (uVar12 == 0xffffffffffffffff) {
            uVar12 = 0;
            if (uVar9 != 0) {
              do {
                *(undefined4 *)(param_1 + 0x20 + uVar12 * 4) = *(undefined4 *)(lVar7 + uVar12 * 4);
                uVar9 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar9;
              } while (uVar9 < *(uint *)(param_1 + 0x88));
            }
          }
          else {
            lVar7 = lVar7 + uVar8 * uVar12 * 4;
            if (uVar12 == *(int *)(param_1 + 0x78) - 1) {
              uVar12 = 0;
              if (uVar9 != 0) {
                do {
                  *(undefined4 *)(param_1 + uVar12 * 4) = *(undefined4 *)(lVar7 + uVar12 * 4);
                  uVar9 = (int)uVar12 + 1;
                  uVar12 = (ulonglong)uVar9;
                } while (uVar9 < *(uint *)(param_1 + 0x88));
              }
              *(undefined8 *)(param_1 + 0x50) = 0xffffffff80000000;
              lVar7 = -1;
              goto LAB_142a5ac54;
            }
            uVar12 = 0;
            if (uVar9 != 0) {
              do {
                *(undefined4 *)(param_1 + uVar12 * 4) = *(undefined4 *)(lVar7 + uVar12 * 4);
                uVar9 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar9;
                uVar8 = (ulonglong)*(uint *)(param_1 + 0x88);
              } while (uVar9 < *(uint *)(param_1 + 0x88));
            }
            uVar12 = 0;
            if ((int)uVar8 != 0) {
              do {
                *(undefined4 *)(param_1 + 0x20 + uVar12 * 4) =
                     *(undefined4 *)(lVar7 + uVar8 * 4 + uVar12 * 4);
                uVar9 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar9;
              } while (uVar9 < *(uint *)(param_1 + 0x88));
            }
          }
          uVar12 = *(ulonglong *)(param_1 + 0x48);
          *(ulonglong *)(param_1 + 0x50) = uVar12;
        }
        uVar8 = 0;
        if (*(int *)(param_1 + 0x88) != 0) {
          do {
            lVar15 = uVar8 * 4;
            lVar7 = uVar8 * 4;
            lVar4 = uVar8 * 4;
            uVar9 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar9;
            *param_2 = (*(float *)(param_1 + 0x20 + lVar15) - *(float *)(param_1 + lVar7)) *
                       *(float *)(param_1 + 0x40) + *(float *)(param_1 + lVar4);
            param_2 = param_2 + 1;
          } while (uVar9 < *(uint *)(param_1 + 0x88));
          uVar12 = *(ulonglong *)(param_1 + 0x48);
        }
        uVar17 = uVar17 + 1;
        fVar18 = (ABS(param_5) * (float)*(uint *)(param_1 + 0x7c)) /
                 (float)*(uint *)(param_1 + 0x8c) + *(float *)(param_1 + 0x40);
        iVar13 = (int)fVar18;
        *(float *)(param_1 + 0x40) = fVar18 - (float)iVar13;
        lVar7 = (longlong)iVar13 + uVar12;
      }
      else {
        *(undefined8 *)(param_1 + 0x50) = 0xffffffff80000000;
        lVar7 = lVar7 - (ulonglong)*(uint *)(param_1 + 0x78);
      }
LAB_142a5ac54:
      *(longlong *)(param_1 + 0x48) = lVar7;
    } while (uVar17 < param_4);
  }
  return uVar17;
}



// FUNCTION 142a5acf0 GetAudioTrackChannels body=58 status=ok
// SIG undefined GetAudioTrackChannels(void)

/* WARNING: Removing unreachable block (ram,0x000142a5ad1d) */

undefined4 FMediaPlayerFacade::GetAudioTrackChannels(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_24;
  
  cVar1 = GetAudioTrackFormat();
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = local_24;
  }
  return uVar2;
}



// FUNCTION 142a5ad30 GetAudioTrackFormat body=188 status=ok
// SIG undefined GetAudioTrackFormat(void)

undefined8
FMediaPlayerFacade::GetAudioTrackFormat(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (param_2 == -1) {
    if (*(longlong **)(param_1 + 0xe8) == (longlong *)0x0) {
      param_2 = -1;
    }
    else {
      plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))();
      param_2 = (**(code **)(*plVar2 + 0x18))(plVar2,0);
    }
  }
  if (param_3 == -1) {
    if (*(longlong **)(param_1 + 0xe8) == (longlong *)0x0) {
      param_3 = -1;
    }
    else {
      plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))();
      param_3 = (**(code **)(*plVar2 + 0x28))(plVar2,0,param_2);
    }
  }
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))();
    cVar1 = (**(code **)*puVar3)(puVar3,param_2,param_3,param_4);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a5adf0 GetAudioTrackSampleRate body=58 status=ok
// SIG undefined GetAudioTrackSampleRate(void)

/* WARNING: Removing unreachable block (ram,0x000142a5ae1d) */

undefined4 FMediaPlayerFacade::GetAudioTrackSampleRate(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_20;
  
  cVar1 = GetAudioTrackFormat();
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = local_20;
  }
  return uVar2;
}



// FUNCTION 142a5ae30 GetAudioTrackType body=287 status=ok
// SIG undefined GetAudioTrackType(void)

undefined8 *
FMediaPlayerFacade::GetAudioTrackType
          (undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  void *_Src;
  char cVar4;
  void **ppvVar5;
  longlong lVar6;
  void *pvVar7;
  void *local_58;
  int local_50;
  undefined4 uStack_4c;
  void *local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  void *local_28;
  ulonglong local_20;
  
  pvVar7 = (void *)0x0;
  local_28 = (void *)0x0;
  local_20 = 0;
  cVar4 = GetAudioTrackFormat(param_1,param_3,param_4,local_38);
  _Src = local_28;
  if (cVar4 == '\0') {
    local_40 = 0;
    ppvVar5 = &local_48;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    lVar6 = (longlong)(int)local_20;
    local_58 = (void *)0x0;
    local_50 = (int)local_20;
    if ((int)local_20 == 0) {
      uStack_4c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_20 & 0xffffffff,0);
      pvVar7 = local_58;
      ::_guard_xfg_dispatch_icall_nop(local_58,_Src,lVar6 * 2);
    }
    ppvVar5 = &local_58;
    bVar3 = true;
    bVar2 = false;
  }
  *ppvVar5 = (void *)0x0;
  uVar1 = *(undefined4 *)(ppvVar5 + 1);
  *param_2 = pvVar7;
  *(undefined4 *)(param_2 + 1) = uVar1;
  ppvVar5[1] = (void *)0x0;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)ppvVar5 + 0xc);
  if (bVar2) {
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar3) && (local_58 != (void *)0x0)) {
    FMemory::Free();
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142a5af50 GetDuration body=73 status=ok
// SIG undefined GetDuration(void)

undefined8 * FMediaPlayerFacade::GetDuration(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,local_res8);
    *param_2 = *puVar2;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142a5afa0 FUN_142a5afa0 body=244 status=ok
// SIG undefined FUN_142a5afa0(void)

undefined8 FUN_142a5afa0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  plVar3 = *(longlong **)(param_1 + 0xe8);
  bVar6 = plVar3 == (longlong *)0x0;
  if (bVar6) {
    uVar5 = FUN_1404b03b0();
    uVar5 = FText::FText(local_38,uVar5);
  }
  else {
    uVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,local_20);
  }
  FText::FText(param_2,uVar5);
  if (bVar6) {
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  if ((!bVar6) && (local_18 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_18 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar1 = (int *)((longlong)local_18 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142a5b0a0 GetNumTrackFormats body=71 status=ok
// SIG undefined GetNumTrackFormats(void)

undefined8
FMediaPlayerFacade::GetNumTrackFormats(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x000142a5b0d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



// FUNCTION 142a5b0f0 GetNumTracks body=51 status=ok
// SIG undefined GetNumTracks(void)

undefined8 FMediaPlayerFacade::GetNumTracks(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x000142a5b117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 142a5b130 FUN_142a5b130 body=1108 status=ok
// SIG undefined FUN_142a5b130(void)

longlong * FUN_142a5b130(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  int iVar17;
  longlong local_b8;
  undefined8 *local_b0;
  undefined2 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 *local_88;
  ulonglong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  
  local_b8 = 0;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if ((*(longlong *)(param_1 + 0x18) == 0) && (lVar3 = 0, param_4 != (undefined8 *)0x0)) {
    plVar6 = (longlong *)(**(code **)*param_4)(param_4,local_68);
    lVar3 = *plVar6;
  }
  local_b8 = lVar3;
  plVar6 = *(longlong **)(param_1 + 0xe8);
  if ((plVar6 == (longlong *)0x0) ||
     (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_60), local_b8 != *plVar6)) {
    puVar7 = (undefined8 *)FName::FName(local_58,"Media",1);
    uVar9 = *puVar7;
    uVar8 = FUN_14168dc80();
    plVar6 = (longlong *)FUN_141690010(uVar8,uVar9);
    if (plVar6 != (longlong *)0x0) {
      local_b0 = (undefined8 *)0x0;
      if (local_b8 == 0) {
        plVar2 = *(longlong **)(param_1 + 0xe8);
        if (plVar2 == (longlong *)0x0) {
LAB_142a5b319:
          local_a8 = (undefined2 *)0x0;
          local_a0 = 8;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
          puVar15 = local_a8;
          FGenericPlatformString::Convert<char,wchar_t>(local_a8,8,"Windows",8,0x3f);
          local_80 = (ulonglong *)(**(code **)(*plVar6 + 0x58))(plVar6);
          local_b0 = (undefined8 *)*local_80;
          iVar5 = (int)local_80[1];
          local_88 = local_b0 + iVar5;
          iVar17 = (int)local_a0;
          if (local_b0 != local_88) {
            do {
              plVar6 = (longlong *)*local_b0;
              puVar10 = (undefined8 *)(**(code **)(*plVar6 + 0x20))();
              puVar7 = (undefined8 *)*puVar10;
              puVar10 = puVar7 + (longlong)*(int *)(puVar10 + 1) * 2;
              for (; puVar7 != puVar10; puVar7 = puVar7 + 2) {
                puVar14 = &DAT_143f3eda8;
                if (iVar17 != 0) {
                  puVar14 = puVar15;
                }
                if (*(int *)(puVar7 + 1) == 0) {
                  puVar13 = &DAT_143f3eda8;
                }
                else {
                  puVar13 = (undefined2 *)*puVar7;
                }
                iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar14);
                if (iVar5 == 0) {
                  cVar4 = (**(code **)*plVar6)(plVar6,param_3,param_4,0,0);
                  if (cVar4 != '\0') {
                    (**(code **)(*plVar6 + 8))(plVar6,&local_98,param_1 + 0x10);
                    plVar6 = local_90;
                    if (local_98 != 0) {
                      *param_2 = local_98;
                      param_2[1] = (longlong)local_90;
                      local_90 = (longlong *)0x0;
                      local_98 = 0;
                      goto LAB_142a5b552;
                    }
                    if (local_90 != (longlong *)0x0) {
                      LOCK();
                      plVar2 = local_90 + 1;
                      lVar3 = *plVar2;
                      *(int *)plVar2 = (int)*plVar2 + -1;
                      UNLOCK();
                      if ((int)lVar3 == 1) {
                        (**(code **)*local_90)();
                        LOCK();
                        piVar1 = (int *)((longlong)plVar6 + 0xc);
                        iVar5 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar5 == 1) {
                          (**(code **)(*plVar6 + 8))(plVar6,1);
                        }
                      }
                      puVar15 = local_a8;
                      iVar17 = (int)local_a0;
                    }
                  }
                  break;
                }
              }
              local_b0 = local_b0 + 1;
            } while (local_b0 != local_88);
            iVar5 = (int)local_80[1];
          }
          uVar16 = 0;
          if (0 < iVar5) {
            puVar7 = (undefined8 *)*local_80;
            uVar12 = (longlong)iVar5 & 0x1fffffffffffffff;
            if (puVar7 + iVar5 < puVar7) {
              uVar12 = 0;
            }
            if (uVar12 != 0) {
              do {
                puVar11 = (undefined8 *)(**(code **)(*(longlong *)*puVar7 + 0x20))();
                puVar10 = (undefined8 *)*puVar11;
                puVar11 = puVar10 + (longlong)*(int *)(puVar11 + 1) * 2;
                for (; puVar10 != puVar11; puVar10 = puVar10 + 2) {
                  puVar14 = &DAT_143f3eda8;
                  if (iVar17 != 0) {
                    puVar14 = puVar15;
                  }
                  if (*(int *)(puVar10 + 1) == 0) {
                    puVar13 = &DAT_143f3eda8;
                  }
                  else {
                    puVar13 = (undefined2 *)*puVar10;
                  }
                  iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar14);
                  if (iVar5 == 0) break;
                }
                puVar7 = puVar7 + 1;
                uVar16 = uVar16 + 1;
              } while (uVar16 != uVar12);
            }
          }
          *param_2 = 0;
          param_2[1] = 0;
LAB_142a5b552:
          if (puVar15 == (undefined2 *)0x0) {
            return param_2;
          }
          FMemory::Free(puVar15);
          return param_2;
        }
        lVar3 = *plVar6;
        uVar9 = (**(code **)(*plVar2 + 0x20))(plVar2,local_50);
        puVar7 = (undefined8 *)(**(code **)(lVar3 + 0x60))(plVar6,uVar9);
        if ((puVar7 == (undefined8 *)0x0) ||
           (cVar4 = (**(code **)*puVar7)(puVar7,param_3,param_4,0,0), cVar4 == '\0'))
        goto LAB_142a5b319;
        goto LAB_142a5b2f1;
      }
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x60))(plVar6,&local_b8);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 8))(plVar6,&local_78,param_1 + 0x10);
        if (local_78 != 0) {
          *param_2 = local_78;
          param_2[1] = (longlong)local_70;
          return param_2;
        }
        *param_2 = 0;
        param_2[1] = 0;
        if (local_70 == (longlong *)0x0) {
          return param_2;
        }
        LOCK();
        plVar6 = local_70 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 != 1) {
          return param_2;
        }
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 != 1) {
          return param_2;
        }
        (**(code **)(*local_70 + 8))(local_70,1);
        return param_2;
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
LAB_142a5b2f1:
    *param_2 = *(longlong *)(param_1 + 0xe8);
    lVar3 = *(longlong *)(param_1 + 0xf0);
    param_2[1] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 142a5b590 GetPlayerName body=74 status=ok
// SIG undefined GetPlayerName(void)

undefined8 * FMediaPlayerFacade::GetPlayerName(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  plVar1 = *(longlong **)(param_1 + 0xe8);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar2;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142a5b5e0 GetRate body=44 status=ok
// SIG undefined GetRate(void)

undefined8 FMediaPlayerFacade::GetRate(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000142a5b600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 142a5b610 GetSelectedTrack body=54 status=ok
// SIG undefined GetSelectedTrack(void)

undefined8 FMediaPlayerFacade::GetSelectedTrack(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x000142a5b637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    return uVar2;
  }
  return 0xffffffff;
}



// FUNCTION 142a5b650 GetSupportedRates body=279 status=ok
// SIG undefined GetSupportedRates(void)

undefined8 *
FMediaPlayerFacade::GetSupportedRates(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  longlong local_28 [2];
  
  bVar7 = *(longlong **)(param_1 + 0xe8) == (longlong *)0x0;
  if (bVar7) {
    local_28[0] = 0;
    local_28[1] = 0;
    plVar3 = local_28;
  }
  else {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,local_28,param_3);
  }
  lVar2 = local_28[0];
  *param_2 = 0;
  iVar5 = (int)plVar3[1];
  lVar1 = *plVar3;
  *(int *)(param_2 + 1) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar5,0);
    puVar4 = (undefined1 *)*param_2;
    puVar6 = (undefined4 *)(lVar1 + 4);
    do {
      *puVar4 = *(undefined1 *)(puVar6 + -1);
      *(undefined4 *)(puVar4 + 4) = *puVar6;
      puVar4[8] = *(undefined1 *)(puVar6 + 1);
      *(undefined4 *)(puVar4 + 0xc) = puVar6[2];
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + 0x10;
      puVar6 = puVar6 + 4;
    } while (iVar5 != 0);
  }
  if ((bVar7) && (lVar2 != 0)) {
    FMemory::Free(lVar2);
  }
  if ((!bVar7) && (local_28[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142a5b770 GetTime body=101 status=ok
// SIG undefined GetTime(void)

longlong * FMediaPlayerFacade::GetTime(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  if (*(longlong **)(param_1 + 0xe8) == (longlong *)0x0) {
    *param_2 = 0;
    return param_2;
  }
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x30))(plVar1,local_res8);
  lVar3 = *plVar1 - *(longlong *)(param_1 + 0x20);
  lVar2 = 0;
  if (-1 < lVar3) {
    lVar2 = lVar3;
  }
  *param_2 = lVar2;
  return param_2;
}



// FUNCTION 142a5b7e0 GetTimecode body=34 status=ok
// SIG undefined GetTimecode(void)

undefined8 FAppMediaTimeSource::GetTimecode(undefined8 param_1,undefined8 param_2)

{
  FTimespan::FromSeconds(param_2,DAT_1468b5a78);
  return param_2;
}



// FUNCTION 142a5b810 GetTrackDisplayName body=266 status=ok
// SIG undefined GetTrackDisplayName(void)

undefined8
FMediaPlayerFacade::GetTrackDisplayName
          (longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  bVar6 = *(longlong **)(param_1 + 0xe8) == (longlong *)0x0;
  if (bVar6) {
    uVar5 = FUN_1404b03b0();
    uVar5 = FText::FText(local_38,uVar5);
  }
  else {
    plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))();
    uVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,local_20,param_3,param_4);
  }
  FText::FText(param_2,uVar5);
  if (bVar6) {
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  if ((!bVar6) && (local_18 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_18 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar1 = (int *)((longlong)local_18 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142a5b920 GetTrackFormat body=74 status=ok
// SIG undefined GetTrackFormat(void)

undefined8
FMediaPlayerFacade::GetTrackFormat(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x000142a5b956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3);
    return uVar2;
  }
  return 0xffffffff;
}



// FUNCTION 142a5b970 GetTrackLanguage body=199 status=ok
// SIG undefined GetTrackLanguage(void)

longlong *
FMediaPlayerFacade::GetTrackLanguage
          (longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  bool bVar2;
  longlong local_28 [4];
  
  bVar2 = *(longlong **)(param_1 + 0xe8) == (longlong *)0x0;
  if (bVar2) {
    local_28[0] = 0;
    plVar1 = local_28;
    local_28[1] = 0;
  }
  else {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x30))(plVar1,local_28 + 2,param_3,param_4);
  }
  *param_2 = 0;
  *param_2 = *plVar1;
  *plVar1 = 0;
  *(int *)(param_2 + 1) = (int)plVar1[1];
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  if (bVar2) {
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if ((!bVar2) && (local_28[2] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142a5ba40 GetVideoTrackAspectRatio body=120 status=ok
// SIG undefined GetVideoTrackAspectRatio(void)

void FMediaPlayerFacade::GetVideoTrackAspectRatio
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_48 [12];
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_3c = 2;
  local_38 = 0;
  local_34 = 2;
  local_30 = 0;
  GetVideoTrackFormat(param_1,param_2,param_3,local_48);
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a5bac0 GetVideoTrackDimensions body=111 status=ok
// SIG undefined GetVideoTrackDimensions(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FMediaPlayerFacade::GetVideoTrackDimensions
          (undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined1 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_2c = 2;
  local_28 = 0;
  local_18 = 0;
  local_10 = 0;
  local_24 = 2;
  local_20 = 0;
  cVar1 = GetVideoTrackFormat(param_1,param_3,param_4,&local_38);
  uVar2 = _DAT_1468b5ca0;
  if (cVar1 != '\0') {
    uVar2 = local_38;
  }
  *param_2 = uVar2;
  if (local_18 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142a5bb30 GetVideoTrackFormat body=191 status=ok
// SIG undefined GetVideoTrackFormat(void)

undefined8
FMediaPlayerFacade::GetVideoTrackFormat(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  if (param_2 == -1) {
    if (*(longlong **)(param_1 + 0xe8) == (longlong *)0x0) {
      param_2 = -1;
    }
    else {
      plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))();
      param_2 = (**(code **)(*plVar2 + 0x18))(plVar2,6);
    }
  }
  if (param_3 == -1) {
    if (*(longlong **)(param_1 + 0xe8) == (longlong *)0x0) {
      param_3 = -1;
    }
    else {
      plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))();
      param_3 = (**(code **)(*plVar2 + 0x28))(plVar2,6,param_2);
    }
  }
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))();
    cVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a5bbf0 GetVideoTrackFrameRate body=98 status=ok
// SIG undefined GetVideoTrackFrameRate(void)

undefined4
FMediaPlayerFacade::GetVideoTrackFrameRate(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_3c = 2;
  local_38 = 0;
  local_34 = 2;
  local_30 = 0;
  cVar1 = GetVideoTrackFormat(param_1,param_2,param_3,local_48);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = local_40;
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 142a5bc60 GetVideoTrackFrameRates body=198 status=ok
// SIG undefined GetVideoTrackFrameRates(void)

undefined1 *
FMediaPlayerFacade::GetVideoTrackFrameRates
          (undefined8 param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 local_50;
  undefined4 local_4c;
  undefined1 local_48 [12];
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_3c = 2;
  local_28 = 0;
  local_20 = 0;
  local_38 = 0;
  local_34 = 2;
  local_30 = 0;
  uVar3 = 0;
  cVar1 = GetVideoTrackFormat(param_1,param_3,param_4,local_48);
  if (cVar1 == '\0') {
    uVar2 = 0;
    local_50 = 0;
    local_4c = 0;
  }
  else {
    local_4c = local_30;
    local_50 = local_34;
    uVar3 = local_38;
    uVar2 = local_3c;
  }
  *param_2 = uVar2;
  *(undefined4 *)(param_2 + 4) = uVar3;
  param_2[8] = local_50;
  *(undefined4 *)(param_2 + 0xc) = local_4c;
  if (local_28 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142a5bd30 GetVideoTrackType body=311 status=ok
// SIG undefined GetVideoTrackType(void)

undefined8 *
FMediaPlayerFacade::GetVideoTrackType
          (undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  void *_Src;
  char cVar4;
  void **ppvVar5;
  longlong lVar6;
  void *pvVar7;
  void *local_68;
  int local_60;
  undefined4 uStack_5c;
  void *local_58;
  undefined8 local_50;
  undefined1 local_48 [12];
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  void *local_28;
  ulonglong local_20;
  
  local_3c = 2;
  pvVar7 = (void *)0x0;
  local_38 = 0;
  local_34 = 2;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  cVar4 = GetVideoTrackFormat(param_1,param_3,param_4,local_48);
  _Src = local_28;
  if (cVar4 == '\0') {
    local_50 = 0;
    ppvVar5 = &local_58;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    lVar6 = (longlong)(int)local_20;
    local_68 = (void *)0x0;
    local_60 = (int)local_20;
    if ((int)local_20 == 0) {
      uStack_5c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_20 & 0xffffffff,0);
      pvVar7 = local_68;
      ::_guard_xfg_dispatch_icall_nop(local_68,_Src,lVar6 * 2);
    }
    ppvVar5 = &local_68;
    bVar3 = true;
    bVar2 = false;
  }
  *ppvVar5 = (void *)0x0;
  uVar1 = *(undefined4 *)(ppvVar5 + 1);
  *param_2 = pvVar7;
  *(undefined4 *)(param_2 + 1) = uVar1;
  ppvVar5[1] = (void *)0x0;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)ppvVar5 + 0xc);
  if (bVar2) {
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar3) && (local_68 != (void *)0x0)) {
    FMemory::Free();
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142a5be70 GetViewField body=72 status=ok
// SIG undefined GetViewField(void)

ulonglong FMediaPlayerFacade::GetViewField(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  undefined8 *puVar1;
  ulonglong uVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x000142a5bea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)*puVar1)(puVar1,param_2,param_3);
    return uVar2;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142a5bec0 GetViewOrientation body=53 status=ok
// SIG undefined GetViewOrientation(void)

ulonglong FMediaPlayerFacade::GetViewOrientation(longlong param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  longlong *plVar1;
  ulonglong uVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x000142a5bee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_2);
    return uVar2;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142a5bf00 HasError body=48 status=ok
// SIG undefined HasError(void)

ulonglong FMediaPlayerFacade::HasError(longlong param_1)

{
  ulonglong in_RAX;
  longlong *plVar1;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    in_RAX = (**(code **)(*plVar1 + 0x18))(plVar1);
    if ((int)in_RAX == 1) {
      return in_RAX;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142a5bf30 Initialize body=21 status=ok
// SIG undefined Initialize(void)

void FMediaAudioResampler::Initialize(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x88) = param_2;
  *(undefined4 *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 142a5bf50 IsBuffering body=49 status=ok
// SIG undefined IsBuffering(void)

undefined8 FMediaPlayerFacade::IsBuffering(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a5bf90 IsConnecting body=51 status=ok
// SIG undefined IsConnecting(void)

ulonglong FMediaPlayerFacade::IsConnecting(longlong param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    uVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
    in_RAX = (ulonglong)(uVar1 >> 1);
    if ((uVar1 >> 1 & 1) != 0) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 9),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142a5bfd0 IsLooping body=49 status=ok
// SIG undefined IsLooping(void)

undefined8 FMediaPlayerFacade::IsLooping(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    cVar1 = (**(code **)(*plVar2 + 0x38))(plVar2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a5c010 IsPaused body=50 status=ok
// SIG undefined IsPaused(void)

undefined8 FMediaPlayerFacade::IsPaused(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
    if (iVar1 == 2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a5c050 IsPlaying body=50 status=ok
// SIG undefined IsPlaying(void)

undefined8 FMediaPlayerFacade::IsPlaying(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
    if (iVar1 == 3) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a5c090 IsPreparing body=50 status=ok
// SIG undefined IsPreparing(void)

undefined8 FMediaPlayerFacade::IsPreparing(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
    if (iVar1 == 4) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a5c0d0 IsReady body=110 status=ok
// SIG undefined IsReady(void)

undefined8 FMediaPlayerFacade::IsReady(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
    if (iVar1 != 0) {
      plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
      iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
      if (iVar1 != 1) {
        plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
        iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
        if (iVar1 != 4) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142a5c140 FUN_142a5c140 body=697 status=ok
// SIG undefined FUN_142a5c140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142a5c140(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  BOOL BVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *plStack_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  uVar10 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_48 = uVar10;
  if (1 < *(int *)(param_1 + 0xb8)) {
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
      if (BVar9 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
      }
      (**(code **)**(undefined8 **)(param_1 + 0xe8))();
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
    }
    *(undefined8 *)(param_1 + 0x78) = 0x8000000000000000;
    FMediaSampleCache::Empty(*(undefined8 *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (*(int *)(param_1 + 0xbc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb0,0);
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
    uVar10 = FUN_142a5a580(param_1);
  }
  if (*(int *)(param_2 + 1) < 2) {
    return uVar10 & 0xffffffffffffff00;
  }
  FUN_142a5b130(param_1,&local_78,param_2,param_3);
  pauVar2 = (undefined1 (*) [16])(param_1 + 0xe8);
  plVar11 = *(longlong **)*pauVar2;
  plVar13 = plStack_70;
  if (local_78 != plVar11) {
    BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
    if (BVar9 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
    }
    local_68._8_8_ = plStack_70;
    local_68._0_8_ = local_78;
    uVar4 = (undefined4)((ulonglong)local_78 >> 0x20);
    uVar5 = (undefined4)((ulonglong)plStack_70 >> 0x20);
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
    }
    if (&local_68 != pauVar2) {
      local_68 = *pauVar2;
      *(int *)*pauVar2 = (int)local_78;
      *(undefined4 *)(param_1 + 0xec) = uVar4;
      *(int *)(param_1 + 0xf0) = (int)plStack_70;
      *(undefined4 *)(param_1 + 0xf4) = uVar5;
      local_58 = (int)local_78;
      uStack_54 = uVar4;
      uStack_50 = (int)plStack_70;
      uStack_4c = uVar5;
    }
    uVar7 = local_68._8_8_;
    if ((undefined8 *)local_68._8_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_68._8_8_ + 8);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)local_68._8_8_)(local_68._8_8_);
        LOCK();
        piVar1 = (int *)(uVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*(longlong *)local_68._8_8_ + 8))(local_68._8_8_,1);
        }
      }
    }
    plVar13 = plStack_70;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
    plVar11 = *(longlong **)(param_1 + 0xe8);
  }
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x68))(plVar11,param_1 + 0xf8);
    puVar12 = (undefined8 *)(param_1 + 0xb0);
    if (puVar12 != param_2) {
      iVar3 = *(int *)(param_2 + 1);
      _Src = (void *)*param_2;
      *(int *)(param_1 + 0xb8) = iVar3;
      if ((iVar3 == 0) && (*(int *)(param_1 + 0xbc) == 0)) {
        *(undefined4 *)(param_1 + 0xbc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar12,iVar3);
        _guard_xfg_dispatch_icall_nop((void *)*puVar12,_Src,(longlong)iVar3 * 2);
      }
    }
    cVar8 = (**(code **)(**(longlong **)*pauVar2 + 0x58))(*(longlong **)*pauVar2,param_2,param_3);
    if (cVar8 != '\0') {
      uVar10 = 1;
      goto LAB_142a5c38d;
    }
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (*(int *)(param_1 + 0xbc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar12,0);
    }
  }
  uVar10 = 0;
LAB_142a5c38d:
  plVar11 = plStack_70;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar13 + 1;
    lVar6 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  return uVar10;
}



// FUNCTION 142a5c400 ProcessAudioSamples body=666 status=ok
// SIG undefined ProcessAudioSamples(void)

void FMediaPlayerFacade::ProcessAudioSamples
               (longlong param_1,undefined8 *param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  
  local_58[0] = *param_3;
  local_50 = *(undefined8 *)(param_3 + 8);
  local_48 = param_3[0x10];
  local_40 = *(undefined8 *)(param_3 + 0x18);
  bVar9 = false;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  cVar4 = (**(code **)*param_2)(param_2,local_58,&local_78);
  plVar7 = plStack_70;
  do {
    plStack_70 = plVar7;
    if (cVar4 == '\0') {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        lVar10 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      return;
    }
    if (local_78 != 0) {
      bVar9 = true;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      iVar8 = *(int *)(param_1 + 0x30) + -1;
      local_68 = local_78;
      plStack_60 = plVar7;
      if (-1 < iVar8) {
        lVar10 = (longlong)iVar8 << 4;
        do {
          lVar2 = *(longlong *)(param_1 + 0x28);
          plVar7 = *(longlong **)(lVar2 + 8 + lVar10);
          plVar6 = plVar7;
          if (plVar7 != (longlong *)0x0) {
            plVar6 = (longlong *)0x0;
            LOCK();
            iVar5 = (int)plVar7[1];
            bVar11 = iVar5 == 0;
            if (bVar11) {
              *(int *)(plVar7 + 1) = 0;
              iVar5 = 0;
            }
            UNLOCK();
            while (!bVar11) {
              LOCK();
              bVar11 = iVar5 == (int)plVar7[1];
              if (bVar11) {
                *(int *)(plVar7 + 1) = iVar5 + 1;
              }
              UNLOCK();
              if (bVar11) {
                plVar6 = plVar7;
                if ((plVar7 != (longlong *)0x0) &&
                   (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 != (longlong *)0x0)) {
                  iVar5 = (**(code **)(*plVar3 + 8))(plVar3);
                  if (iVar5 < 0x200) {
                    (**(code **)*plVar3)(plVar3);
                  }
                  goto LAB_142a5c52d;
                }
                break;
              }
              LOCK();
              iVar5 = (int)plVar7[1];
              bVar11 = iVar5 == 0;
              if (bVar11) {
                *(int *)(plVar7 + 1) = 0;
                iVar5 = 0;
              }
              UNLOCK();
            }
          }
          TArray<TWeakPtr<IMediaClockSink,1>,FDefaultAllocator>::RemoveAtSwapImpl
                    ((longlong *)(param_1 + 0x28),iVar8,1,1);
          plVar7 = plVar6;
LAB_142a5c52d:
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar7 + 1;
            lVar2 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7);
              }
            }
          }
          lVar10 = lVar10 + -0x10;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
    }
    plVar7 = plStack_60;
    if ((bVar9) && (bVar9 = false, plStack_60 != (longlong *)0x0)) {
      LOCK();
      plVar6 = plStack_60 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    local_58[0] = *param_3;
    local_50 = *(undefined8 *)(param_3 + 8);
    local_48 = param_3[0x10];
    local_40 = *(undefined8 *)(param_3 + 0x18);
    cVar4 = (**(code **)*param_2)(param_2,local_58,&local_78);
    plVar7 = plStack_70;
  } while( true );
}



// FUNCTION 142a5c6a0 ProcessCaptionSamples body=667 status=ok
// SIG undefined ProcessCaptionSamples(void)

void FMediaPlayerFacade::ProcessCaptionSamples
               (longlong param_1,longlong *param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  
  local_58[0] = *param_3;
  local_50 = *(undefined8 *)(param_3 + 8);
  local_48 = param_3[0x10];
  local_40 = *(undefined8 *)(param_3 + 0x18);
  bVar9 = false;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  cVar4 = (**(code **)(*param_2 + 8))(param_2,local_58,&local_78);
  plVar7 = plStack_70;
  do {
    plStack_70 = plVar7;
    if (cVar4 == '\0') {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        lVar10 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      return;
    }
    if (local_78 != 0) {
      bVar9 = true;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      iVar8 = *(int *)(param_1 + 0x40) + -1;
      local_68 = local_78;
      plStack_60 = plVar7;
      if (-1 < iVar8) {
        lVar10 = (longlong)iVar8 << 4;
        do {
          lVar2 = *(longlong *)(param_1 + 0x38);
          plVar7 = *(longlong **)(lVar2 + 8 + lVar10);
          plVar6 = plVar7;
          if (plVar7 != (longlong *)0x0) {
            plVar6 = (longlong *)0x0;
            LOCK();
            iVar5 = (int)plVar7[1];
            bVar11 = iVar5 == 0;
            if (bVar11) {
              *(int *)(plVar7 + 1) = 0;
              iVar5 = 0;
            }
            UNLOCK();
            while (!bVar11) {
              LOCK();
              bVar11 = iVar5 == (int)plVar7[1];
              if (bVar11) {
                *(int *)(plVar7 + 1) = iVar5 + 1;
              }
              UNLOCK();
              if (bVar11) {
                plVar6 = plVar7;
                if ((plVar7 != (longlong *)0x0) &&
                   (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 != (longlong *)0x0)) {
                  iVar5 = (**(code **)(*plVar3 + 8))(plVar3);
                  if (iVar5 < 0x100) {
                    (**(code **)*plVar3)(plVar3);
                  }
                  goto LAB_142a5c7cd;
                }
                break;
              }
              LOCK();
              iVar5 = (int)plVar7[1];
              bVar11 = iVar5 == 0;
              if (bVar11) {
                *(int *)(plVar7 + 1) = 0;
                iVar5 = 0;
              }
              UNLOCK();
            }
          }
          TArray<TWeakPtr<IMediaClockSink,1>,FDefaultAllocator>::RemoveAtSwapImpl
                    ((longlong *)(param_1 + 0x38),iVar8,1,1);
          plVar7 = plVar6;
LAB_142a5c7cd:
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar7 + 1;
            lVar2 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7);
              }
            }
          }
          lVar10 = lVar10 + -0x10;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
    }
    plVar7 = plStack_60;
    if ((bVar9) && (bVar9 = false, plStack_60 != (longlong *)0x0)) {
      LOCK();
      plVar6 = plStack_60 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    local_58[0] = *param_3;
    local_50 = *(undefined8 *)(param_3 + 8);
    local_48 = param_3[0x10];
    local_40 = *(undefined8 *)(param_3 + 0x18);
    cVar4 = (**(code **)(*param_2 + 8))(param_2,local_58,&local_78);
    plVar7 = plStack_70;
  } while( true );
}



// FUNCTION 142a5c940 FUN_142a5c940 body=476 status=ok
// SIG undefined FUN_142a5c940(void)

void FUN_142a5c940(longlong param_1,int param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong local_28 [2];
  
  uVar10 = 0;
  if (param_2 == 9) {
    if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))();
      (**(code **)(*plVar6 + 0x48))(plVar6,0,0);
      (**(code **)(*plVar6 + 0x48))(plVar6,1,0xffffffff);
      (**(code **)(*plVar6 + 0x48))(plVar6,2,0xffffffff);
      (**(code **)(*plVar6 + 0x48))(plVar6,4,0xffffffff);
      (**(code **)(*plVar6 + 0x48))(plVar6,6,0);
    }
  }
  else {
    if (param_2 == 3) {
LAB_142a5c9fc:
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x18))(*(longlong **)(param_1 + 0xe8),local_28)
      ;
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
    else if (param_2 == 4) {
      *(undefined4 *)(param_1 + 0xb8) = 0;
      if (*(int *)(param_1 + 0xbc) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb0,0);
      }
      goto LAB_142a5c9fc;
    }
    if ((param_2 != 5) && (param_2 != 8)) goto LAB_142a5ca31;
  }
  FUN_142a5a580(param_1);
LAB_142a5ca31:
  plVar6 = (longlong *)(param_1 + 200);
  bVar2 = false;
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  iVar7 = *(int *)(param_1 + 0xdc);
  iVar4 = *(int *)(param_1 + 0xd0) + -1;
  lVar8 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar9 = lVar8 << 4;
    bVar2 = false;
    do {
      if (((*(int *)(lVar9 + 8 + *plVar6) == 0) ||
          (plVar1 = *(longlong **)(lVar9 + *plVar6), plVar1 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2), cVar3 == '\0')) {
        bVar2 = true;
      }
      lVar9 = lVar9 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar7 = *(int *)(param_1 + 0xdc);
  }
  *(int *)(param_1 + 0xdc) = iVar7 + -1;
  if ((bVar2) && (iVar7 + -1 < 1)) {
    iVar7 = *(int *)(param_1 + 0xd0);
    uVar11 = uVar10;
    iVar4 = iVar7;
    if (0 < iVar7) {
      do {
        if (((*(int *)(uVar10 + 8 + *plVar6) == 0) ||
            (plVar1 = *(longlong **)(uVar10 + *plVar6), plVar1 == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(*plVar1 + 0x10))(), cVar3 != '\0')) {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(plVar6,uVar11,1,1);
        }
        else {
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar10 = uVar10 + 0x10;
        }
        iVar4 = *(int *)(param_1 + 0xd0);
      } while ((int)uVar11 < iVar4);
    }
    iVar5 = iVar4 * 2;
    if (iVar4 * 2 < 3) {
      iVar5 = 2;
    }
    *(int *)(param_1 + 0xd8) = iVar5;
    if ((iVar5 < iVar7) && (*(int *)(param_1 + 0xd4) != iVar4)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar6);
    }
  }
  return;
}



// FUNCTION 142a5cb20 ProcessMetadataSamples body=667 status=ok
// SIG undefined ProcessMetadataSamples(void)

void FMediaPlayerFacade::ProcessMetadataSamples
               (longlong param_1,longlong *param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  
  local_58[0] = *param_3;
  local_50 = *(undefined8 *)(param_3 + 8);
  local_48 = param_3[0x10];
  local_40 = *(undefined8 *)(param_3 + 0x18);
  bVar9 = false;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  cVar4 = (**(code **)(*param_2 + 0x10))(param_2,local_58,&local_78);
  plVar7 = plStack_70;
  do {
    plStack_70 = plVar7;
    if (cVar4 == '\0') {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        lVar10 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      return;
    }
    if (local_78 != 0) {
      bVar9 = true;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      iVar8 = *(int *)(param_1 + 0x50) + -1;
      local_68 = local_78;
      plStack_60 = plVar7;
      if (-1 < iVar8) {
        lVar10 = (longlong)iVar8 << 4;
        do {
          lVar2 = *(longlong *)(param_1 + 0x48);
          plVar7 = *(longlong **)(lVar2 + 8 + lVar10);
          plVar6 = plVar7;
          if (plVar7 != (longlong *)0x0) {
            plVar6 = (longlong *)0x0;
            LOCK();
            iVar5 = (int)plVar7[1];
            bVar11 = iVar5 == 0;
            if (bVar11) {
              *(int *)(plVar7 + 1) = 0;
              iVar5 = 0;
            }
            UNLOCK();
            while (!bVar11) {
              LOCK();
              bVar11 = iVar5 == (int)plVar7[1];
              if (bVar11) {
                *(int *)(plVar7 + 1) = iVar5 + 1;
              }
              UNLOCK();
              if (bVar11) {
                plVar6 = plVar7;
                if ((plVar7 != (longlong *)0x0) &&
                   (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 != (longlong *)0x0)) {
                  iVar5 = (**(code **)(*plVar3 + 8))(plVar3);
                  if (iVar5 < 0x100) {
                    (**(code **)*plVar3)(plVar3);
                  }
                  goto LAB_142a5cc4d;
                }
                break;
              }
              LOCK();
              iVar5 = (int)plVar7[1];
              bVar11 = iVar5 == 0;
              if (bVar11) {
                *(int *)(plVar7 + 1) = 0;
                iVar5 = 0;
              }
              UNLOCK();
            }
          }
          TArray<TWeakPtr<IMediaClockSink,1>,FDefaultAllocator>::RemoveAtSwapImpl
                    ((longlong *)(param_1 + 0x48),iVar8,1,1);
          plVar7 = plVar6;
LAB_142a5cc4d:
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar7 + 1;
            lVar2 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7);
              }
            }
          }
          lVar10 = lVar10 + -0x10;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
    }
    plVar7 = plStack_60;
    if ((bVar9) && (bVar9 = false, plStack_60 != (longlong *)0x0)) {
      LOCK();
      plVar6 = plStack_60 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    local_58[0] = *param_3;
    local_50 = *(undefined8 *)(param_3 + 8);
    local_48 = param_3[0x10];
    local_40 = *(undefined8 *)(param_3 + 0x18);
    cVar4 = (**(code **)(*param_2 + 0x10))(param_2,local_58,&local_78);
    plVar7 = plStack_70;
  } while( true );
}



// FUNCTION 142a5cdc0 ProcessSubtitleSamples body=667 status=ok
// SIG undefined ProcessSubtitleSamples(void)

void FMediaPlayerFacade::ProcessSubtitleSamples
               (longlong param_1,longlong *param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  
  local_58[0] = *param_3;
  local_50 = *(undefined8 *)(param_3 + 8);
  local_48 = param_3[0x10];
  local_40 = *(undefined8 *)(param_3 + 0x18);
  bVar9 = false;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  cVar4 = (**(code **)(*param_2 + 0x18))(param_2,local_58,&local_78);
  plVar7 = plStack_70;
  do {
    plStack_70 = plVar7;
    if (cVar4 == '\0') {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        lVar10 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      return;
    }
    if (local_78 != 0) {
      bVar9 = true;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      iVar8 = *(int *)(param_1 + 0x60) + -1;
      local_68 = local_78;
      plStack_60 = plVar7;
      if (-1 < iVar8) {
        lVar10 = (longlong)iVar8 << 4;
        do {
          lVar2 = *(longlong *)(param_1 + 0x58);
          plVar7 = *(longlong **)(lVar2 + 8 + lVar10);
          plVar6 = plVar7;
          if (plVar7 != (longlong *)0x0) {
            plVar6 = (longlong *)0x0;
            LOCK();
            iVar5 = (int)plVar7[1];
            bVar11 = iVar5 == 0;
            if (bVar11) {
              *(int *)(plVar7 + 1) = 0;
              iVar5 = 0;
            }
            UNLOCK();
            while (!bVar11) {
              LOCK();
              bVar11 = iVar5 == (int)plVar7[1];
              if (bVar11) {
                *(int *)(plVar7 + 1) = iVar5 + 1;
              }
              UNLOCK();
              if (bVar11) {
                plVar6 = plVar7;
                if ((plVar7 != (longlong *)0x0) &&
                   (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 != (longlong *)0x0)) {
                  iVar5 = (**(code **)(*plVar3 + 8))(plVar3);
                  if (iVar5 < 0x100) {
                    (**(code **)*plVar3)(plVar3);
                  }
                  goto LAB_142a5ceed;
                }
                break;
              }
              LOCK();
              iVar5 = (int)plVar7[1];
              bVar11 = iVar5 == 0;
              if (bVar11) {
                *(int *)(plVar7 + 1) = 0;
                iVar5 = 0;
              }
              UNLOCK();
            }
          }
          TArray<TWeakPtr<IMediaClockSink,1>,FDefaultAllocator>::RemoveAtSwapImpl
                    ((longlong *)(param_1 + 0x58),iVar8,1,1);
          plVar7 = plVar6;
LAB_142a5ceed:
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar7 + 1;
            lVar2 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7);
              }
            }
          }
          lVar10 = lVar10 + -0x10;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
    }
    plVar7 = plStack_60;
    if ((bVar9) && (bVar9 = false, plStack_60 != (longlong *)0x0)) {
      LOCK();
      plVar6 = plStack_60 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    local_58[0] = *param_3;
    local_50 = *(undefined8 *)(param_3 + 8);
    local_48 = param_3[0x10];
    local_40 = *(undefined8 *)(param_3 + 0x18);
    cVar4 = (**(code **)(*param_2 + 0x18))(param_2,local_58,&local_78);
    plVar7 = plStack_70;
  } while( true );
}



// FUNCTION 142a5d060 FUN_142a5d060 body=784 status=ok
// SIG undefined FUN_142a5d060(void)

void FUN_142a5d060(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  undefined1 local_res20 [8];
  undefined1 local_a8 [16];
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *plStack_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  
  local_78[0] = *param_3;
  local_70 = *(undefined8 *)(param_3 + 8);
  local_68 = param_3[0x10];
  local_60 = *(undefined8 *)(param_3 + 0x18);
  local_98 = (longlong *)0x0;
  plStack_90 = (longlong *)0x0;
  cVar5 = (**(code **)(*param_2 + 0x20))(param_2,local_78,&local_98);
  plVar7 = plStack_90;
  do {
    plStack_90 = plVar7;
    if (cVar5 == '\0') {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar7 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      return;
    }
    if (local_98 != (longlong *)0x0) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      bVar4 = false;
      iVar9 = *(int *)(param_1 + 0x70) + -1;
      local_88 = local_98;
      plStack_80 = plVar7;
      if (-1 < iVar9) {
        lVar10 = (longlong)iVar9 << 4;
        do {
          lVar2 = *(longlong *)(param_1 + 0x68);
          plVar7 = *(longlong **)(lVar10 + 8 + lVar2);
          plVar8 = plVar7;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            iVar6 = (int)plVar7[1];
            bVar11 = iVar6 == 0;
            if (bVar11) {
              *(int *)(plVar7 + 1) = 0;
              iVar6 = 0;
            }
            UNLOCK();
            while (plVar8 = (longlong *)0x0, !bVar11) {
              LOCK();
              bVar11 = iVar6 == (int)plVar7[1];
              if (bVar11) {
                *(int *)(plVar7 + 1) = iVar6 + 1;
              }
              UNLOCK();
              if (bVar11) {
                plVar8 = plVar7;
                if ((plVar7 != (longlong *)0x0) &&
                   (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 != (longlong *)0x0)) {
                  iVar6 = (**(code **)(*plVar3 + 8))(plVar3);
                  if (iVar6 < 8) {
                    (**(code **)*plVar3)(plVar3,&local_88);
                  }
                  else {
                    bVar4 = true;
                  }
                  goto LAB_142a5d18d;
                }
                break;
              }
              LOCK();
              iVar6 = (int)plVar7[1];
              bVar11 = iVar6 == 0;
              if (bVar11) {
                *(int *)(plVar7 + 1) = 0;
                iVar6 = 0;
              }
              UNLOCK();
            }
          }
          TArray<TWeakPtr<IMediaClockSink,1>,FDefaultAllocator>::RemoveAtSwapImpl
                    ((longlong *)(param_1 + 0x68),iVar9,1,1);
          plVar7 = plVar8;
LAB_142a5d18d:
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar7 + 1;
            lVar2 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          lVar10 = lVar10 + -0x10;
          iVar9 = iVar9 + -1;
        } while (-1 < iVar9);
      }
      plVar7 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_80 + 1;
        lVar10 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      if (!bVar4) {
        if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
          plVar7 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
          fVar12 = (float)(**(code **)(*plVar7 + 0x10))(plVar7);
          if (fVar12 < 0.0) goto LAB_142a5d27c;
        }
        plVar7 = local_98;
        plVar8 = (longlong *)(**(code **)(*local_98 + 0x10))(local_98,local_res20);
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x38))(plVar7,local_a8);
        *(longlong *)(param_1 + 0xe0) = *plVar8 + *plVar7;
      }
    }
LAB_142a5d27c:
    local_78[0] = *param_3;
    local_70 = *(undefined8 *)(param_3 + 8);
    local_68 = param_3[0x10];
    local_60 = *(undefined8 *)(param_3 + 0x18);
    cVar5 = (**(code **)(*param_2 + 0x20))(param_2,local_78,&local_98);
    plVar7 = plStack_90;
  } while( true );
}



// FUNCTION 142a5d370 ReceiveMediaEvent body=64 status=ok
// SIG undefined ReceiveMediaEvent(void)

undefined8 FMediaPlayerFacade::ReceiveMediaEvent(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar3 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = param_2;
    LOCK();
    puVar1 = *(undefined8 **)(param_1 + 0x100);
    *(undefined8 **)(param_1 + 0x100) = puVar2;
    UNLOCK();
    LOCK();
    uVar3 = *puVar1;
    *puVar1 = puVar2;
    UNLOCK();
  }
  return uVar3;
}



// FUNCTION 142a5d3b0 Seek body=60 status=ok
// SIG undefined Seek(void)

undefined8 FMediaPlayerFacade::Seek(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    cVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a5d3f0 SelectTrack body=104 status=ok
// SIG undefined SelectTrack(void)

undefined8 FMediaPlayerFacade::SelectTrack(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))();
    cVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,param_2,param_3);
    if (cVar1 != '\0') {
      FUN_142a5a580(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a5d460 FUN_142a5d460 body=8 status=ok
// SIG undefined FUN_142a5d460(void)

void FUN_142a5d460(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x78) = *param_2;
  return;
}



// FUNCTION 142a5d470 FUN_142a5d470 body=22 status=ok
// SIG undefined FUN_142a5d470(void)

void FUN_142a5d470(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  *(undefined8 *)(lVar1 + 0x140) = param_2;
  *(undefined8 *)(lVar1 + 0x148) = param_3;
  return;
}



// FUNCTION 142a5d490 SetGuid body=11 status=ok
// SIG undefined SetGuid(void)

void FMediaPlayerFacade::SetGuid(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0xf8) = *param_2;
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  return;
}



// FUNCTION 142a5d4a0 SetInput body=2284 status=ok
// SIG undefined SetInput(void)

undefined8 FMediaAudioResampler::SetInput(longlong param_1,longlong *param_2)

{
  int *piVar1;
  short *psVar2;
  char *pcVar3;
  double dVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined6 uVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  double *_Src;
  char cVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  double *_Src_00;
  undefined8 *puVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  int iVar34;
  double *pdVar35;
  uint uVar36;
  double *pdVar38;
  short sVar39;
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  undefined1 auVar46 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined1 auVar55 [16];
  undefined1 auVar58 [16];
  undefined1 auVar61 [16];
  float fVar66;
  int local_res8 [2];
  uint local_res10;
  int local_res18;
  double *local_48;
  uint local_40;
  undefined4 local_3c;
  ulonglong uVar37;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 uVar64;
  undefined2 uVar65;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x6c)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x60,0);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((undefined8 *)*param_2 != (undefined8 *)0x0) {
    _Src_00 = (double *)(*(code *)**(undefined8 **)*param_2)();
    iVar25 = (**(code **)(*(longlong *)*param_2 + 8))();
    local_res18 = iVar25;
    iVar26 = (**(code **)(*(longlong *)*param_2 + 0x20))();
    local_res8[0] = iVar26;
    uVar27 = (**(code **)(*(longlong *)*param_2 + 0x28))();
    if ((((_Src_00 != (double *)0x0) && (iVar25 != 0)) && (iVar26 != 0)) && (uVar27 != 0)) {
      uVar36 = iVar26 * iVar25;
      uVar37 = (ulonglong)uVar36;
      local_res10 = uVar27;
      iVar28 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      if (iVar28 == 2) {
        if (iVar25 == *(int *)(param_1 + 0x88)) {
          iVar25 = *(int *)(param_1 + 0x68);
          *(uint *)(param_1 + 0x68) = iVar25 + uVar36;
          if (*(int *)(param_1 + 0x6c) < (int)(iVar25 + uVar36)) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x60,iVar25);
          }
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar25 * 4),_Src_00,
                     (longlong)(int)uVar36 << 2);
        }
        else {
          iVar28 = *(int *)(param_1 + 0x68) + uVar36;
          *(int *)(param_1 + 0x68) = iVar28;
          if (*(int *)(param_1 + 0x6c) < iVar28) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x60);
          }
          cVar24 = MediaAudioResampler::Downmix
                             (_Src_00,iVar25,iVar26,*(undefined8 *)(param_1 + 0x60),
                              *(undefined4 *)(param_1 + 0x88));
          if (cVar24 == '\0') {
            *(undefined4 *)(param_1 + 0x68) = 0;
            if ((*(int *)(param_1 + 0x6c) < 0) && (*(int *)(param_1 + 0x6c) != 0)) {
              TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x60,0);
            }
          }
        }
      }
      else {
        local_48 = (double *)0x0;
        local_3c = 0;
        local_40 = uVar36;
        if (0 < (int)uVar36) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_48);
        }
        _Src = local_48;
        pdVar38 = (double *)((longlong)local_48 + uVar37 * 4);
        iVar28 = (**(code **)(*(longlong *)*param_2 + 0x18))();
        uVar27 = local_40;
        iVar25 = local_res18;
        iVar26 = local_res8[0];
        if (iVar28 == 1) {
          uVar32 = 0;
          if (pdVar38 < _Src) {
            uVar37 = 0;
          }
          if (uVar37 != 0) {
            pdVar38 = _Src;
            if ((7 < uVar37) &&
               ((_Src_00 + (uVar37 - 1) < _Src ||
                ((double *)((longlong)_Src + (uVar37 - 1) * 4) < _Src_00)))) {
              do {
                uVar32 = uVar32 + 8;
                dVar4 = _Src_00[2];
                dVar12 = _Src_00[3];
                *pdVar38 = (double)CONCAT44((float)_Src_00[1],(float)*_Src_00);
                dVar13 = _Src_00[4];
                dVar14 = _Src_00[5];
                pdVar38[1] = (double)CONCAT44((float)dVar12,(float)dVar4);
                dVar4 = _Src_00[6];
                dVar12 = _Src_00[7];
                _Src_00 = _Src_00 + 8;
                pdVar38[2] = (double)CONCAT44((float)dVar14,(float)dVar13);
                pdVar38[3] = (double)CONCAT44((float)dVar12,(float)dVar4);
                pdVar38 = pdVar38 + 4;
              } while (uVar32 < (uVar37 & 0xfffffffffffffff8));
            }
            if (uVar32 < uVar37) {
              if (3 < uVar37 - uVar32) {
                lVar33 = ((uVar37 - uVar32) - 4 >> 2) + 1;
                uVar32 = uVar32 + lVar33 * 4;
                do {
                  *(float *)pdVar38 = (float)*_Src_00;
                  *(float *)((longlong)pdVar38 + 4) = (float)_Src_00[1];
                  *(float *)(pdVar38 + 1) = (float)_Src_00[2];
                  pdVar35 = _Src_00 + 3;
                  _Src_00 = _Src_00 + 4;
                  *(float *)((longlong)pdVar38 + 0xc) = (float)*pdVar35;
                  pdVar38 = pdVar38 + 2;
                  lVar33 = lVar33 + -1;
                } while (lVar33 != 0);
              }
              for (; uVar32 < uVar37; uVar32 = uVar32 + 1) {
                dVar4 = *_Src_00;
                _Src_00 = _Src_00 + 1;
                *(float *)pdVar38 = (float)dVar4;
                pdVar38 = (double *)((longlong)pdVar38 + 4);
              }
            }
          }
        }
        else if (iVar28 == 3) {
          uVar32 = 0;
          if (pdVar38 < _Src) {
            uVar37 = uVar32;
          }
          if (uVar37 != 0) {
            uVar31 = uVar32;
            pdVar38 = _Src;
            if ((0xf < uVar37) &&
               (((double *)((longlong)_Src_00 + (uVar37 - 1)) < _Src ||
                (uVar31 = 0, (double *)((longlong)_Src + (uVar37 - 1) * 4) < _Src_00)))) {
              uVar31 = uVar32;
              do {
                uVar5 = *(undefined4 *)_Src_00;
                uVar31 = uVar31 + 0x10;
                uVar64 = (undefined1)((uint)uVar5 >> 0x18);
                uVar65 = CONCAT11(uVar64,uVar64);
                uVar64 = (undefined1)((uint)uVar5 >> 0x10);
                uVar6 = CONCAT35(CONCAT21(uVar65,uVar64),CONCAT14(uVar64,uVar5));
                uVar64 = (undefined1)((uint)uVar5 >> 8);
                uVar19 = CONCAT51(CONCAT41((int)((ulonglong)uVar6 >> 0x20),uVar64),uVar64);
                sVar39 = CONCAT11((char)uVar5,(char)uVar5);
                uVar32 = CONCAT62(uVar19,sVar39);
                auVar54._8_4_ = 0;
                auVar54._0_8_ = uVar32;
                auVar54._12_2_ = uVar65;
                auVar54._14_2_ = uVar65;
                uVar65 = (undefined2)((ulonglong)uVar6 >> 0x20);
                auVar53._12_4_ = auVar54._12_4_;
                auVar53._8_2_ = 0;
                auVar53._0_8_ = uVar32;
                auVar53._10_2_ = uVar65;
                auVar52._10_6_ = auVar53._10_6_;
                auVar52._8_2_ = uVar65;
                auVar52._0_8_ = uVar32;
                uVar65 = (undefined2)uVar19;
                auVar20._4_8_ = auVar52._8_8_;
                auVar20._2_2_ = uVar65;
                auVar20._0_2_ = uVar65;
                *(float *)pdVar38 = (float)((int)sVar39 >> 8) * 0.0078125;
                *(float *)((longlong)pdVar38 + 4) = (float)(auVar20._0_4_ >> 0x18) * 0.0078125;
                *(float *)(pdVar38 + 1) = (float)(auVar52._8_4_ >> 0x18) * 0.0078125;
                *(float *)((longlong)pdVar38 + 0xc) = (float)(auVar53._12_4_ >> 0x18) * 0.0078125;
                uVar5 = *(undefined4 *)((longlong)_Src_00 + 4);
                uVar64 = (undefined1)((uint)uVar5 >> 0x18);
                uVar65 = CONCAT11(uVar64,uVar64);
                uVar64 = (undefined1)((uint)uVar5 >> 0x10);
                uVar6 = CONCAT35(CONCAT21(uVar65,uVar64),CONCAT14(uVar64,uVar5));
                uVar64 = (undefined1)((uint)uVar5 >> 8);
                uVar19 = CONCAT51(CONCAT41((int)((ulonglong)uVar6 >> 0x20),uVar64),uVar64);
                sVar39 = CONCAT11((char)uVar5,(char)uVar5);
                uVar32 = CONCAT62(uVar19,sVar39);
                auVar57._8_4_ = 0;
                auVar57._0_8_ = uVar32;
                auVar57._12_2_ = uVar65;
                auVar57._14_2_ = uVar65;
                uVar65 = (undefined2)((ulonglong)uVar6 >> 0x20);
                auVar56._12_4_ = auVar57._12_4_;
                auVar56._8_2_ = 0;
                auVar56._0_8_ = uVar32;
                auVar56._10_2_ = uVar65;
                auVar55._10_6_ = auVar56._10_6_;
                auVar55._8_2_ = uVar65;
                auVar55._0_8_ = uVar32;
                uVar65 = (undefined2)uVar19;
                auVar21._4_8_ = auVar55._8_8_;
                auVar21._2_2_ = uVar65;
                auVar21._0_2_ = uVar65;
                *(float *)(pdVar38 + 2) = (float)((int)sVar39 >> 8) * 0.0078125;
                *(float *)((longlong)pdVar38 + 0x14) = (float)(auVar21._0_4_ >> 0x18) * 0.0078125;
                *(float *)(pdVar38 + 3) = (float)(auVar55._8_4_ >> 0x18) * 0.0078125;
                *(float *)((longlong)pdVar38 + 0x1c) = (float)(auVar56._12_4_ >> 0x18) * 0.0078125;
                uVar5 = *(undefined4 *)(_Src_00 + 1);
                uVar64 = (undefined1)((uint)uVar5 >> 0x18);
                uVar65 = CONCAT11(uVar64,uVar64);
                uVar64 = (undefined1)((uint)uVar5 >> 0x10);
                uVar6 = CONCAT35(CONCAT21(uVar65,uVar64),CONCAT14(uVar64,uVar5));
                uVar64 = (undefined1)((uint)uVar5 >> 8);
                uVar19 = CONCAT51(CONCAT41((int)((ulonglong)uVar6 >> 0x20),uVar64),uVar64);
                sVar39 = CONCAT11((char)uVar5,(char)uVar5);
                uVar32 = CONCAT62(uVar19,sVar39);
                auVar60._8_4_ = 0;
                auVar60._0_8_ = uVar32;
                auVar60._12_2_ = uVar65;
                auVar60._14_2_ = uVar65;
                uVar65 = (undefined2)((ulonglong)uVar6 >> 0x20);
                auVar59._12_4_ = auVar60._12_4_;
                auVar59._8_2_ = 0;
                auVar59._0_8_ = uVar32;
                auVar59._10_2_ = uVar65;
                auVar58._10_6_ = auVar59._10_6_;
                auVar58._8_2_ = uVar65;
                auVar58._0_8_ = uVar32;
                uVar65 = (undefined2)uVar19;
                auVar22._4_8_ = auVar58._8_8_;
                auVar22._2_2_ = uVar65;
                auVar22._0_2_ = uVar65;
                *(float *)(pdVar38 + 4) = (float)((int)sVar39 >> 8) * 0.0078125;
                *(float *)((longlong)pdVar38 + 0x24) = (float)(auVar22._0_4_ >> 0x18) * 0.0078125;
                *(float *)(pdVar38 + 5) = (float)(auVar58._8_4_ >> 0x18) * 0.0078125;
                *(float *)((longlong)pdVar38 + 0x2c) = (float)(auVar59._12_4_ >> 0x18) * 0.0078125;
                uVar5 = *(undefined4 *)((longlong)_Src_00 + 0xc);
                _Src_00 = _Src_00 + 2;
                uVar64 = (undefined1)((uint)uVar5 >> 0x18);
                uVar65 = CONCAT11(uVar64,uVar64);
                uVar64 = (undefined1)((uint)uVar5 >> 0x10);
                uVar6 = CONCAT35(CONCAT21(uVar65,uVar64),CONCAT14(uVar64,uVar5));
                uVar64 = (undefined1)((uint)uVar5 >> 8);
                uVar19 = CONCAT51(CONCAT41((int)((ulonglong)uVar6 >> 0x20),uVar64),uVar64);
                sVar39 = CONCAT11((char)uVar5,(char)uVar5);
                uVar32 = CONCAT62(uVar19,sVar39);
                auVar63._8_4_ = 0;
                auVar63._0_8_ = uVar32;
                auVar63._12_2_ = uVar65;
                auVar63._14_2_ = uVar65;
                uVar65 = (undefined2)((ulonglong)uVar6 >> 0x20);
                auVar62._12_4_ = auVar63._12_4_;
                auVar62._8_2_ = 0;
                auVar62._0_8_ = uVar32;
                auVar62._10_2_ = uVar65;
                auVar61._10_6_ = auVar62._10_6_;
                auVar61._8_2_ = uVar65;
                auVar61._0_8_ = uVar32;
                uVar65 = (undefined2)uVar19;
                auVar23._4_8_ = auVar61._8_8_;
                auVar23._2_2_ = uVar65;
                auVar23._0_2_ = uVar65;
                *(float *)(pdVar38 + 6) = (float)((int)sVar39 >> 8) * 0.0078125;
                *(float *)((longlong)pdVar38 + 0x34) = (float)(auVar23._0_4_ >> 0x18) * 0.0078125;
                *(float *)(pdVar38 + 7) = (float)(auVar61._8_4_ >> 0x18) * 0.0078125;
                *(float *)((longlong)pdVar38 + 0x3c) = (float)(auVar62._12_4_ >> 0x18) * 0.0078125;
                pdVar38 = pdVar38 + 8;
              } while (uVar31 < (uVar37 & 0xfffffffffffffff0));
            }
            if (uVar31 < uVar37) {
              if (3 < uVar37 - uVar31) {
                lVar33 = ((uVar37 - uVar31) - 4 >> 2) + 1;
                uVar31 = uVar31 + lVar33 * 4;
                do {
                  *(float *)pdVar38 = (float)(int)*(char *)_Src_00 * 0.0078125;
                  *(float *)((longlong)pdVar38 + 4) =
                       (float)(int)*(char *)((longlong)_Src_00 + 1) * 0.0078125;
                  *(float *)(pdVar38 + 1) = (float)(int)*(char *)((longlong)_Src_00 + 2) * 0.0078125
                  ;
                  pcVar3 = (char *)((longlong)_Src_00 + 3);
                  _Src_00 = (double *)((longlong)_Src_00 + 4);
                  *(float *)((longlong)pdVar38 + 0xc) = (float)(int)*pcVar3 * 0.0078125;
                  pdVar38 = pdVar38 + 2;
                  lVar33 = lVar33 + -1;
                } while (lVar33 != 0);
              }
              for (; uVar31 < uVar37; uVar31 = uVar31 + 1) {
                cVar24 = *(char *)_Src_00;
                _Src_00 = (double *)((longlong)_Src_00 + 1);
                *(float *)pdVar38 = (float)(int)cVar24 * 0.0078125;
                pdVar38 = (double *)((longlong)pdVar38 + 4);
              }
            }
          }
        }
        else if (iVar28 == 4) {
          uVar32 = 0;
          if (pdVar38 < _Src) {
            uVar37 = uVar32;
          }
          if (uVar37 != 0) {
            uVar31 = uVar32;
            pdVar38 = _Src;
            if ((0xf < uVar37) &&
               (((double *)((longlong)_Src_00 + uVar37 * 2 + -2) < _Src ||
                (uVar31 = 0, (double *)((longlong)_Src + (uVar37 - 1) * 4) < _Src_00)))) {
              uVar31 = uVar32;
              do {
                dVar4 = *_Src_00;
                uVar31 = uVar31 + 0x10;
                uVar65 = (undefined2)((ulonglong)dVar4 >> 0x30);
                auVar42._8_4_ = 0;
                auVar42._0_8_ = dVar4;
                auVar42._12_2_ = uVar65;
                auVar42._14_2_ = uVar65;
                uVar65 = (undefined2)((ulonglong)dVar4 >> 0x20);
                auVar41._12_4_ = auVar42._12_4_;
                auVar41._8_2_ = 0;
                auVar41._0_8_ = dVar4;
                auVar41._10_2_ = uVar65;
                auVar40._10_6_ = auVar41._10_6_;
                auVar40._8_2_ = uVar65;
                auVar40._0_8_ = dVar4;
                uVar65 = (undefined2)((ulonglong)dVar4 >> 0x10);
                auVar15._4_8_ = auVar40._8_8_;
                auVar15._2_2_ = uVar65;
                auVar15._0_2_ = uVar65;
                *(float *)pdVar38 = (float)(int)SUB82(dVar4,0) * 3.0517578e-05;
                *(float *)((longlong)pdVar38 + 4) = (float)(auVar15._0_4_ >> 0x10) * 3.0517578e-05;
                *(float *)(pdVar38 + 1) = (float)(auVar40._8_4_ >> 0x10) * 3.0517578e-05;
                *(float *)((longlong)pdVar38 + 0xc) =
                     (float)(auVar41._12_4_ >> 0x10) * 3.0517578e-05;
                dVar4 = _Src_00[1];
                uVar65 = (undefined2)((ulonglong)dVar4 >> 0x30);
                auVar45._8_4_ = 0;
                auVar45._0_8_ = dVar4;
                auVar45._12_2_ = uVar65;
                auVar45._14_2_ = uVar65;
                uVar65 = (undefined2)((ulonglong)dVar4 >> 0x20);
                auVar44._12_4_ = auVar45._12_4_;
                auVar44._8_2_ = 0;
                auVar44._0_8_ = dVar4;
                auVar44._10_2_ = uVar65;
                auVar43._10_6_ = auVar44._10_6_;
                auVar43._8_2_ = uVar65;
                auVar43._0_8_ = dVar4;
                uVar65 = (undefined2)((ulonglong)dVar4 >> 0x10);
                auVar16._4_8_ = auVar43._8_8_;
                auVar16._2_2_ = uVar65;
                auVar16._0_2_ = uVar65;
                *(float *)(pdVar38 + 2) = (float)(int)SUB82(dVar4,0) * 3.0517578e-05;
                *(float *)((longlong)pdVar38 + 0x14) =
                     (float)(auVar16._0_4_ >> 0x10) * 3.0517578e-05;
                *(float *)(pdVar38 + 3) = (float)(auVar43._8_4_ >> 0x10) * 3.0517578e-05;
                *(float *)((longlong)pdVar38 + 0x1c) =
                     (float)(auVar44._12_4_ >> 0x10) * 3.0517578e-05;
                dVar4 = _Src_00[2];
                uVar65 = (undefined2)((ulonglong)dVar4 >> 0x30);
                auVar48._8_4_ = 0;
                auVar48._0_8_ = dVar4;
                auVar48._12_2_ = uVar65;
                auVar48._14_2_ = uVar65;
                uVar65 = (undefined2)((ulonglong)dVar4 >> 0x20);
                auVar47._12_4_ = auVar48._12_4_;
                auVar47._8_2_ = 0;
                auVar47._0_8_ = dVar4;
                auVar47._10_2_ = uVar65;
                auVar46._10_6_ = auVar47._10_6_;
                auVar46._8_2_ = uVar65;
                auVar46._0_8_ = dVar4;
                uVar65 = (undefined2)((ulonglong)dVar4 >> 0x10);
                auVar17._4_8_ = auVar46._8_8_;
                auVar17._2_2_ = uVar65;
                auVar17._0_2_ = uVar65;
                *(float *)(pdVar38 + 4) = (float)(int)SUB82(dVar4,0) * 3.0517578e-05;
                *(float *)((longlong)pdVar38 + 0x24) =
                     (float)(auVar17._0_4_ >> 0x10) * 3.0517578e-05;
                *(float *)(pdVar38 + 5) = (float)(auVar46._8_4_ >> 0x10) * 3.0517578e-05;
                *(float *)((longlong)pdVar38 + 0x2c) =
                     (float)(auVar47._12_4_ >> 0x10) * 3.0517578e-05;
                dVar4 = _Src_00[3];
                _Src_00 = _Src_00 + 4;
                uVar65 = (undefined2)((ulonglong)dVar4 >> 0x30);
                auVar51._8_4_ = 0;
                auVar51._0_8_ = dVar4;
                auVar51._12_2_ = uVar65;
                auVar51._14_2_ = uVar65;
                uVar65 = (undefined2)((ulonglong)dVar4 >> 0x20);
                auVar50._12_4_ = auVar51._12_4_;
                auVar50._8_2_ = 0;
                auVar50._0_8_ = dVar4;
                auVar50._10_2_ = uVar65;
                auVar49._10_6_ = auVar50._10_6_;
                auVar49._8_2_ = uVar65;
                auVar49._0_8_ = dVar4;
                uVar65 = (undefined2)((ulonglong)dVar4 >> 0x10);
                auVar18._4_8_ = auVar49._8_8_;
                auVar18._2_2_ = uVar65;
                auVar18._0_2_ = uVar65;
                *(float *)(pdVar38 + 6) = (float)(int)SUB82(dVar4,0) * 3.0517578e-05;
                *(float *)((longlong)pdVar38 + 0x34) =
                     (float)(auVar18._0_4_ >> 0x10) * 3.0517578e-05;
                *(float *)(pdVar38 + 7) = (float)(auVar49._8_4_ >> 0x10) * 3.0517578e-05;
                *(float *)((longlong)pdVar38 + 0x3c) =
                     (float)(auVar50._12_4_ >> 0x10) * 3.0517578e-05;
                pdVar38 = pdVar38 + 8;
              } while (uVar31 < (uVar37 & 0xfffffffffffffff0));
            }
            if (uVar31 < uVar37) {
              if (3 < uVar37 - uVar31) {
                lVar33 = ((uVar37 - uVar31) - 4 >> 2) + 1;
                uVar31 = uVar31 + lVar33 * 4;
                do {
                  *(float *)pdVar38 = (float)(int)*(short *)_Src_00 * 3.0517578e-05;
                  *(float *)((longlong)pdVar38 + 4) =
                       (float)(int)*(short *)((longlong)_Src_00 + 2) * 3.0517578e-05;
                  *(float *)(pdVar38 + 1) =
                       (float)(int)*(short *)((longlong)_Src_00 + 4) * 3.0517578e-05;
                  psVar2 = (short *)((longlong)_Src_00 + 6);
                  _Src_00 = _Src_00 + 1;
                  *(float *)((longlong)pdVar38 + 0xc) = (float)(int)*psVar2 * 3.0517578e-05;
                  pdVar38 = pdVar38 + 2;
                  lVar33 = lVar33 + -1;
                } while (lVar33 != 0);
              }
              for (; uVar31 < uVar37; uVar31 = uVar31 + 1) {
                sVar39 = *(short *)_Src_00;
                _Src_00 = (double *)((longlong)_Src_00 + 2);
                *(float *)pdVar38 = (float)(int)sVar39 * 3.0517578e-05;
                pdVar38 = (double *)((longlong)pdVar38 + 4);
              }
            }
          }
        }
        else {
          if (iVar28 != 5) {
            if (_Src == (double *)0x0) {
              return 0;
            }
            FMemory::Free(_Src);
            return 0;
          }
          uVar32 = 0;
          if (pdVar38 < _Src) {
            uVar37 = uVar32;
          }
          if (uVar37 != 0) {
            uVar31 = uVar32;
            pdVar38 = _Src;
            if ((0xf < uVar37) &&
               (((double *)((longlong)_Src_00 + uVar37 * 4 + -4) < _Src ||
                (uVar31 = 0, (double *)((longlong)_Src + (uVar37 - 1) * 4) < _Src_00)))) {
              uVar31 = uVar32;
              do {
                iVar28 = *(int *)((longlong)_Src_00 + 4);
                iVar29 = *(int *)(_Src_00 + 1);
                iVar34 = *(int *)((longlong)_Src_00 + 0xc);
                uVar31 = uVar31 + 0x10;
                iVar7 = *(int *)(_Src_00 + 2);
                iVar8 = *(int *)((longlong)_Src_00 + 0x14);
                iVar9 = *(int *)(_Src_00 + 3);
                iVar10 = *(int *)((longlong)_Src_00 + 0x1c);
                *(float *)pdVar38 = (float)*(int *)_Src_00 * 4.656613e-10;
                *(float *)((longlong)pdVar38 + 4) = (float)iVar28 * 4.656613e-10;
                *(float *)(pdVar38 + 1) = (float)iVar29 * 4.656613e-10;
                *(float *)((longlong)pdVar38 + 0xc) = (float)iVar34 * 4.656613e-10;
                iVar28 = *(int *)(_Src_00 + 4);
                iVar29 = *(int *)((longlong)_Src_00 + 0x24);
                iVar34 = *(int *)(_Src_00 + 5);
                iVar11 = *(int *)((longlong)_Src_00 + 0x2c);
                *(float *)(pdVar38 + 2) = (float)iVar7 * 4.656613e-10;
                *(float *)((longlong)pdVar38 + 0x14) = (float)iVar8 * 4.656613e-10;
                *(float *)(pdVar38 + 3) = (float)iVar9 * 4.656613e-10;
                *(float *)((longlong)pdVar38 + 0x1c) = (float)iVar10 * 4.656613e-10;
                iVar7 = *(int *)(_Src_00 + 6);
                iVar8 = *(int *)((longlong)_Src_00 + 0x34);
                iVar9 = *(int *)(_Src_00 + 7);
                iVar10 = *(int *)((longlong)_Src_00 + 0x3c);
                _Src_00 = _Src_00 + 8;
                *(float *)(pdVar38 + 4) = (float)iVar28 * 4.656613e-10;
                *(float *)((longlong)pdVar38 + 0x24) = (float)iVar29 * 4.656613e-10;
                *(float *)(pdVar38 + 5) = (float)iVar34 * 4.656613e-10;
                *(float *)((longlong)pdVar38 + 0x2c) = (float)iVar11 * 4.656613e-10;
                *(float *)(pdVar38 + 6) = (float)iVar7 * 4.656613e-10;
                *(float *)((longlong)pdVar38 + 0x34) = (float)iVar8 * 4.656613e-10;
                *(float *)(pdVar38 + 7) = (float)iVar9 * 4.656613e-10;
                *(float *)((longlong)pdVar38 + 0x3c) = (float)iVar10 * 4.656613e-10;
                pdVar38 = pdVar38 + 8;
              } while (uVar31 < (uVar37 & 0xfffffffffffffff0));
            }
            if (uVar31 < uVar37) {
              if (3 < uVar37 - uVar31) {
                lVar33 = ((uVar37 - uVar31) - 4 >> 2) + 1;
                uVar31 = uVar31 + lVar33 * 4;
                do {
                  *(float *)pdVar38 = (float)*(int *)_Src_00 * 4.656613e-10;
                  *(float *)((longlong)pdVar38 + 4) =
                       (float)*(int *)((longlong)_Src_00 + 4) * 4.656613e-10;
                  *(float *)(pdVar38 + 1) = (float)*(int *)(_Src_00 + 1) * 4.656613e-10;
                  piVar1 = (int *)((longlong)_Src_00 + 0xc);
                  _Src_00 = _Src_00 + 2;
                  *(float *)((longlong)pdVar38 + 0xc) = (float)*piVar1 * 4.656613e-10;
                  pdVar38 = pdVar38 + 2;
                  lVar33 = lVar33 + -1;
                } while (lVar33 != 0);
              }
              if (uVar31 < uVar37) {
                pdVar35 = _Src_00;
                do {
                  iVar28 = *(int *)pdVar35;
                  pdVar35 = (double *)((longlong)pdVar35 + 4);
                  uVar31 = uVar31 + 1;
                  *(float *)((longlong)pdVar38 + (-4 - (longlong)_Src_00) + (longlong)pdVar35) =
                       (float)iVar28 * 4.656613e-10;
                } while (uVar31 < uVar37);
              }
            }
          }
        }
        if (local_res18 == *(int *)(param_1 + 0x88)) {
          lVar33 = (longlong)(int)local_40;
          if (local_40 != 0) {
            iVar26 = *(int *)(param_1 + 0x68);
            if (*(int *)(param_1 + 0x6c) < (int)(iVar26 + local_40)) {
              TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x60);
              iVar26 = *(int *)(param_1 + 0x68);
            }
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar26 * 4),_Src,
                       lVar33 << 2);
            *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + uVar27;
            iVar26 = local_res8[0];
          }
        }
        else {
          iVar28 = *(int *)(param_1 + 0x68);
          iVar34 = *(int *)(param_1 + 0x88) * local_res8[0];
          iVar29 = iVar28 + iVar34;
          *(int *)(param_1 + 0x68) = iVar29;
          if (*(int *)(param_1 + 0x6c) < iVar29) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x60);
          }
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar28 * 4),0,
                     (longlong)iVar34 << 2);
          cVar24 = MediaAudioResampler::Downmix
                             (_Src,iVar25,iVar26,*(undefined8 *)(param_1 + 0x60),
                              *(undefined4 *)(param_1 + 0x88));
          if (cVar24 == '\0') {
            *(undefined4 *)(param_1 + 0x68) = 0;
            if ((*(int *)(param_1 + 0x6c) < 0) && (*(int *)(param_1 + 0x6c) != 0)) {
              TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x60,0);
            }
          }
        }
        uVar27 = local_res10;
        if (_Src != (double *)0x0) {
          FMemory::Free(_Src);
          uVar27 = local_res10;
        }
      }
      if (*(longlong *)(param_1 + 0x48) == -0x80000000) {
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
      else if (*(uint *)(param_1 + 0x7c) != 0) {
        fVar66 = ((float)*(uint *)(param_1 + 0x7c) / (float)uVar27) * *(float *)(param_1 + 0x40);
        lVar33 = (longlong)(int)fVar66;
        *(longlong *)(param_1 + 0x48) = lVar33;
        *(float *)(param_1 + 0x40) = fVar66 - (float)lVar33;
      }
      puVar30 = (undefined8 *)
                (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,local_res8);
      *(undefined8 *)(param_1 + 0x70) = *puVar30;
      *(int *)(param_1 + 0x78) = iVar26;
      *(uint *)(param_1 + 0x7c) = uVar27;
      puVar30 = (undefined8 *)
                (**(code **)(*(longlong *)*param_2 + 0x30))((longlong *)*param_2,local_res8);
      *(undefined8 *)(param_1 + 0x80) = *puVar30;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a5dd90 SetLooping body=60 status=ok
// SIG undefined SetLooping(void)

undefined8 FMediaPlayerFacade::SetLooping(longlong param_1,undefined1 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    cVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a5ddd0 FUN_142a5ddd0 body=22 status=ok
// SIG undefined FUN_142a5ddd0(void)

ulonglong FUN_142a5ddd0(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (*(longlong **)(param_1 + 0xe8) == (longlong *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x000142a5dde2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x70))();
  return uVar1;
}



// FUNCTION 142a5ddf0 SetRate body=101 status=ok
// SIG undefined SetRate(void)

undefined8 FMediaPlayerFacade::SetRate(longlong param_1,float param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    cVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,param_2);
    if (cVar1 != '\0') {
      if (param_2 * *(float *)(param_1 + 0xc0) < 0.0) {
        FUN_142a5a580(param_1);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a5de60 SetTrackFormat body=92 status=ok
// SIG undefined SetTrackFormat(void)

ulonglong FMediaPlayerFacade::SetTrackFormat
                    (longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong in_RAX;
  longlong *plVar1;
  ulonglong uVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x000142a5dea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,param_2,param_3,param_4);
    return uVar2;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142a5dec0 SetVideoTrackFrameRate body=92 status=ok
// SIG undefined SetVideoTrackFrameRate(void)

ulonglong FMediaPlayerFacade::SetVideoTrackFrameRate
                    (longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong in_RAX;
  longlong *plVar1;
  ulonglong uVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x000142a5df06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,param_2,param_3,param_4);
    return uVar2;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142a5df20 SetViewField body=103 status=ok
// SIG undefined SetViewField(void)

undefined8
FMediaPlayerFacade::SetViewField
          (longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x48))();
    cVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3,param_4);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a5df90 SetViewOrientation body=82 status=ok
// SIG undefined SetViewOrientation(void)

undefined8
FMediaPlayerFacade::SetViewOrientation(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x48))();
    cVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142a5dff0 SupportsRate body=292 status=ok
// SIG undefined SupportsRate(void)

undefined1 FMediaPlayerFacade::SupportsRate(longlong param_1,float param_2,undefined1 param_3)

{
  float fVar1;
  char cVar2;
  longlong *plVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  undefined1 uVar7;
  char local_res8 [4];
  float local_resc;
  char local_res20 [4];
  float local_res24;
  longlong local_28 [4];
  
  iVar6 = 0;
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,local_28,param_3);
    for (; (-1 < iVar6 && (iVar6 < (int)plVar3[1])); iVar6 = iVar6 + 1) {
      pcVar5 = (char *)((longlong)iVar6 * 0x10 + *plVar3);
      local_resc = param_2;
      local_res8[0] = '\x01';
      cVar2 = *pcVar5;
      if (cVar2 == '\x02') {
LAB_142a5e092:
        cVar2 = pcVar5[8];
        pcVar4 = pcVar5 + 8;
        local_res24 = param_2;
        local_res20[0] = '\x01';
        if (cVar2 != '\x02') {
          if ((*(float *)(pcVar5 + 0xc) <= param_2) &&
             ((*(float *)(pcVar5 + 0xc) < param_2 || (cVar2 != '\x01')))) {
            if (cVar2 != '\x01') goto LAB_142a5e0d3;
            pcVar4 = local_res20;
          }
          if (*(float *)(pcVar5 + 0xc) != *(float *)(pcVar4 + 4)) goto LAB_142a5e0d3;
        }
        uVar7 = 1;
        iVar6 = 1;
        goto LAB_142a5e0ec;
      }
      fVar1 = *(float *)(pcVar5 + 4);
      pcVar4 = pcVar5;
      if (param_2 <= fVar1) {
        if (param_2 < fVar1) {
          if (cVar2 == '\x01') {
            pcVar4 = local_res8;
            goto LAB_142a5e08c;
          }
        }
        else if (cVar2 == '\x01') goto LAB_142a5e08c;
      }
      else {
LAB_142a5e08c:
        if (fVar1 == *(float *)(pcVar4 + 4)) goto LAB_142a5e092;
      }
LAB_142a5e0d3:
    }
    iVar6 = 1;
  }
  uVar7 = 0;
LAB_142a5e0ec:
  if ((iVar6 != 0) && (local_28[0] != 0)) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 142a5e120 FUN_142a5e120 body=746 status=ok
// SIG undefined FUN_142a5e120(void)

void FUN_142a5e120(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  float fVar13;
  longlong local_res8;
  undefined1 local_res20 [8];
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d8;
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8;
  longlong *local_b0;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_98;
  longlong *local_90;
  undefined1 local_88 [16];
  longlong *local_78;
  longlong *local_68;
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x80))();
  }
  plVar9 = (longlong *)0x0;
  while (lVar7 = **(longlong **)(param_1 + 0x118), lVar7 != 0) {
    uVar1 = *(undefined4 *)(lVar7 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x118);
    *(longlong *)(param_1 + 0x118) = lVar7;
    *(undefined4 *)(lVar7 + 8) = 0;
    FMemory::operator_delete(uVar2,0x10);
    FUN_142a5c940(param_1,uVar1);
  }
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    fVar13 = (float)(**(code **)(*plVar6 + 0x10))(plVar6);
    if (fVar13 == 0.0) {
      fVar13 = *(float *)(param_1 + 0xc0);
    }
    else {
      *(float *)(param_1 + 0xc0) = fVar13;
    }
    plVar6 = plVar9;
    if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
      plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x30))(plVar9,&local_res8);
      plVar9 = (longlong *)(*plVar9 - *(longlong *)(param_1 + 0x20));
      if (-1 < (longlong)plVar9) {
        plVar6 = plVar9;
      }
      plVar9 = *(longlong **)(param_1 + 0xe8);
    }
    plVar10 = plVar6;
    if (fVar13 <= 0.0) {
      uVar11 = 1;
      if (0.0 <= fVar13) {
        uVar12 = 1;
      }
      else {
        uVar12 = 2;
        plVar10 = local_68;
      }
    }
    else {
      uVar11 = 2;
      uVar12 = 1;
      plVar6 = local_78;
    }
    lVar7 = (**(code **)(*plVar9 + 0x28))();
    bVar3 = false;
    local_res8 = lVar7;
    while( true ) {
      local_e8[0] = uVar11;
      local_e0 = plVar6;
      local_d8 = uVar12;
      local_d0 = plVar10;
      FMediaPlayerFacade::ProcessCaptionSamples(param_1,local_res8,local_e8);
      local_c8[0] = uVar11;
      local_c0 = plVar6;
      local_b8 = uVar12;
      local_b0 = plVar10;
      FMediaPlayerFacade::ProcessSubtitleSamples(param_1,local_res8,local_c8);
      local_a8[0] = uVar11;
      local_a0 = plVar6;
      local_98 = uVar12;
      local_90 = plVar10;
      FUN_142a5d060(param_1,local_res8,local_a8);
      if (*(longlong *)(param_1 + 0x78) == -0x8000000000000000) break;
      puVar8 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
      cVar4 = (**(code **)*puVar8)(puVar8,0);
      if (cVar4 == '\0') {
        return;
      }
      if (*(longlong **)(param_1 + 0xe8) == (longlong *)0x0) {
LAB_142a5e336:
        if (*(longlong **)(param_1 + 0xe8) == (longlong *)0x0) {
          return;
        }
        plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
        iVar5 = (**(code **)(*plVar9 + 0x18))(plVar9);
        if (iVar5 != 3) {
          return;
        }
        if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
          plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
          fVar13 = (float)(**(code **)(*plVar9 + 0x10))(plVar9);
          if (fVar13 < 0.0) {
            return;
          }
        }
        if (*(int *)(param_1 + 0x70) == 0) {
          return;
        }
        if (*(longlong *)(param_1 + 0x78) < *(longlong *)(param_1 + 0xe0)) {
          return;
        }
      }
      else {
        plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
        iVar5 = (**(code **)(*plVar9 + 0x18))(plVar9);
        if (iVar5 != 4) goto LAB_142a5e336;
      }
      if (bVar3) {
        plVar9 = (longlong *)FDateTime::UtcNow(local_res20);
        if (49999999 < *plVar9 - lVar7) {
          return;
        }
      }
      else {
        bVar3 = true;
        plVar9 = (longlong *)FDateTime::UtcNow(local_88);
        lVar7 = *plVar9;
      }
      FUN_1416b1760(0);
    }
  }
  return;
}



// FUNCTION 142a5e430 TickOutput body=88 status=ok
// SIG undefined TickOutput(void)

void FMediaPlayerFacade::TickOutput(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
    if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
      (**(code **)(*plVar2 + 0x30))(plVar2,local_res8);
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}



// FUNCTION 142a5e490 TickTickable body=404 status=ok
// SIG undefined TickTickable(void)

void FMediaPlayerFacade::TickTickable(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  longlong local_50;
  undefined1 local_48;
  longlong local_40;
  
  if (*(float *)(param_1 + 0xb8) != 0.0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x80);
    BVar1 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar1 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x78))();
      plVar2 = *(longlong **)(param_1 + 0xe0);
      if (plVar2 == (longlong *)0x0) {
        plVar2 = (longlong *)0x0;
        lVar8 = 0;
      }
      else {
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2);
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x30))(plVar2,local_res8);
        plVar2 = *(longlong **)(param_1 + 0xe0);
        lVar5 = *plVar3 - *(longlong *)(param_1 + 0x18);
        lVar8 = 0;
        if (-1 < lVar5) {
          lVar8 = lVar5;
        }
      }
      if (*(float *)(param_1 + 0xb8) <= 0.0) {
        lVar7 = 0x7fffffffffffffff;
        lVar6 = lVar8 - DAT_146b29a58;
        lVar5 = lVar8 - DAT_146b29a60;
        lVar8 = 0x7fffffffffffffff;
      }
      else {
        lVar6 = -0x8000000000000000;
        lVar7 = DAT_146b29a58 + lVar8;
        lVar8 = DAT_146b29a60 + lVar8;
        lVar5 = -0x8000000000000000;
      }
      uVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
      local_58[0] = 1;
      local_48 = 1;
      local_50 = lVar6;
      local_40 = lVar7;
      ProcessAudioSamples(param_1 + -8,uVar4,local_58);
      local_58[0] = 1;
      local_48 = 1;
      local_50 = lVar5;
      local_40 = lVar8;
      ProcessMetadataSamples(param_1 + -8,uVar4,local_58);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 142a5e630 FUN_142a5e630 body=853 status=ok
// SIG undefined FUN_142a5e630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_142a5e630(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *_Dst;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool local_res8;
  
  iVar5 = 1;
  iVar11 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)((longlong)iVar7 * 0xa0 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar6 * 0xa0 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar7;
  local_res8 = false;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar10 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar10 = *puVar10 | 1 << ((byte)iVar7 & 0x1f);
  uVar9 = uRam0000000146b29acc;
  uVar12 = _DAT_146b29ac0 & _DAT_146b29ad0;
  uVar13 = uRam0000000146b29ac4 & uRam0000000146b29ad4;
  uVar14 = uRam0000000146b29ac8 & uRam0000000146b29ad8;
  uVar15 = uRam0000000146b29acc & uRam0000000146b29adc;
  puVar10 = (uint *)((longlong)iVar7 * 0xa0 + *param_1);
  *puVar10 = *(uint *)*param_3;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  puVar10[8] = 0;
  puVar10[9] = 0;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  puVar10[0xe] = 0;
  puVar10[0xf] = uVar9;
  puVar10[0x10] = 0;
  puVar10[0x11] = 0;
  puVar10[0x12] = 0;
  puVar10[0x13] = 0;
  puVar10[0x14] = uVar12;
  puVar10[0x15] = uVar13;
  puVar10[0x16] = uVar14;
  puVar10[0x17] = uVar15;
  puVar10[0x18] = 0;
  puVar10[0x19] = 0;
  puVar10[0x1a] = 0;
  puVar10[0x1b] = uVar9;
  puVar10[0x1c] = 0;
  puVar10[0x1d] = 0;
  puVar10[0x1e] = 0;
  puVar10[0x1f] = 0;
  puVar10[0x20] = uVar12;
  puVar10[0x21] = uVar13;
  puVar10[0x22] = uVar14;
  puVar10[0x23] = uVar15;
  puVar10[0x24] = 0xffffffff;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar9 != 1) {
    iVar6 = iVar11;
    if (uVar9 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar2 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar10) * 4);
      if (iVar2 != -1) {
        do {
          iVar6 = iVar2;
          if (*(uint *)((longlong)iVar2 * 0xa0 + *param_1) == *puVar10) break;
          iVar2 = *(int *)((longlong)iVar2 * 0xa0 + 0x90 + *param_1);
          iVar6 = iVar11;
        } while (iVar2 != -1);
      }
    }
    local_res8 = iVar6 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar6 * 0xa0 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 0x10) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar10,0x90);
      iVar5 = *param_2;
      bVar1 = (byte)iVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0xa0 + *param_1) = iVar5;
      }
      puVar3 = (undefined4 *)((longlong)iVar5 * 0xa0 + *param_1);
      *puVar3 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar11 = (int)param_1[6];
      }
      puVar3[1] = iVar11;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar5;
      plVar4 = (longlong *)param_1[4];
      *param_2 = iVar6;
      if (plVar4 == (longlong *)0x0) {
        plVar4 = param_1 + 2;
      }
      puVar10 = (uint *)((longlong)plVar4 +
                        (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar10 = *puVar10 & ~(1 << bVar1 | 1U >> 0x20 - bVar1);
      goto LAB_142a5e95c;
    }
  }
  if (3 < uVar9) {
    uVar12 = (uVar9 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar5 = 0x20;
    if (uVar12 != 0) {
      iVar5 = 0x1f - iVar11;
    }
    uVar12 = (uVar9 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar12 == 0) {
      cVar8 = '\0';
    }
    else {
      cVar8 = '\x1f' - (char)iVar11;
    }
    iVar5 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar9 < 1) || (((int)param_1[9] != 0 && (iVar5 <= (int)param_1[9])))) {
    uVar9 = (int)param_1[9] - 1U & *puVar10;
    puVar10[0x25] = uVar9;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar10[0x24] =
         *(uint *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) = iVar7
    ;
  }
  else {
    *(int *)(param_1 + 9) = iVar5;
    TSet<TTuple<int,FClothSimulData>,TDefaultMapHashableKeyFuncs<int,FClothSimulData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142a5e95c:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142a5e990 FUN_142a5e990 body=388 status=ok
// SIG undefined FUN_142a5e990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_142a5e990(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x28) = DAT_1468b5d98;
  uVar1 = uRam00000001468b5b78;
  *(undefined8 *)(param_1 + 0x30) = _DAT_1468b5b70;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = uRam00000001468b5b88;
  *(undefined8 *)(param_1 + 0x40) = _DAT_1468b5b80;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = uRam00000001468b5b98;
  *(undefined8 *)(param_1 + 0x50) = _DAT_1468b5b90;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 1;
  *(undefined4 *)(param_1 + 0xfc) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  return param_1;
}



// FUNCTION 142a5eb20 FUN_142a5eb20 body=557 status=ok
// SIG undefined FUN_142a5eb20(void)

undefined8 * FUN_142a5eb20(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145367018;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  param_1[0x12] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x15) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x16) = 0x3951b717;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3951b717;
  *(undefined4 *)(param_1 + 0x17) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x18) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x19) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x42f00000;
  *(undefined4 *)(param_1 + 0x1f) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  return param_1;
}



// FUNCTION 142a5ed50 FUN_142a5ed50 body=123 status=ok
// SIG undefined FUN_142a5ed50(void)

void FUN_142a5ed50(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x20);
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
      plVar2 = plVar2 + 8;
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



// FUNCTION 142a5edd0 FUN_142a5edd0 body=361 status=ok
// SIG undefined FUN_142a5edd0(void)

void FUN_142a5edd0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      iVar3 = (int)plVar1[0x20];
      plVar4 = (longlong *)plVar1[0x1f];
      if (iVar3 != 0) {
        do {
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          plVar4 = plVar4 + 2;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        plVar4 = (longlong *)plVar1[0x1f];
      }
      if (plVar4 != (longlong *)0x0) {
        FMemory::Free(plVar4);
      }
      if (plVar1[0x1d] != 0) {
        FMemory::Free();
      }
      if (plVar1[0x1b] != 0) {
        FMemory::Free();
      }
      FClothCollisionData::~FClothCollisionData(plVar1 + 0x15);
      if (plVar1[0x13] != 0) {
        FMemory::Free();
      }
      if (plVar1[0x10] != 0) {
        FMemory::Free();
      }
      if (plVar1[0xe] != 0) {
        FMemory::Free();
      }
      if (plVar1[0xc] != 0) {
        FMemory::Free();
      }
      if (plVar1[10] != 0) {
        FMemory::Free();
      }
      if (plVar1[8] != 0) {
        FMemory::Free();
      }
      if (plVar1[6] != 0) {
        FMemory::Free();
      }
      if (plVar1[4] != 0) {
        FMemory::Free();
      }
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x21;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar1);
  return;
}



// FUNCTION 142a5ef40 FUN_142a5ef40 body=313 status=ok
// SIG undefined FUN_142a5ef40(void)

void FUN_142a5ef40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar2 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar4 = (longlong *)(lVar2 + 0x198);
    do {
      if (plVar4[4] != 0) {
        FMemory::Free();
      }
      if (plVar4[2] != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      if (plVar4[-2] != 0) {
        FMemory::Free();
      }
      if (plVar4[-4] != 0) {
        FMemory::Free();
      }
      if (plVar4[-6] != 0) {
        FMemory::Free();
      }
      if (plVar4[-9] != 0) {
        FMemory::Free();
      }
      plVar5 = plVar4 + -0xb;
      if (plVar4[-0xb] != 0) {
        FMemory::Free();
      }
      lVar2 = 2;
      do {
        plVar1 = plVar5 + -2;
        plVar5 = plVar5 + -2;
        lVar2 = lVar2 + -1;
        if (*plVar1 != 0) {
          FMemory::Free();
        }
      } while (lVar2 != 0);
      FUN_142a5ed50(plVar4 + -0x13);
      FClothCollisionData::~FClothCollisionData(plVar4 + -0x1a);
      FClothCollisionData::~FClothCollisionData(plVar4 + -0x20);
      FClothCollisionData::~FClothCollisionData(plVar4 + -0x26);
      plVar4 = plVar4 + 0x3a;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar2 = *param_1;
  }
  if (lVar2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142a5f080 ~FClothCollisionData body=114 status=ok
// SIG undefined ~FClothCollisionData(void)

void FClothCollisionData::~FClothCollisionData(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[5];
  plVar1 = (longlong *)param_1[4];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[4];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a5f100 operator= body=113 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FMeshToMeshVertData,FDefaultAllocator>::operator=(undefined8 *param_1,undefined8 *param_2)

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
    TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 6);
  }
  return param_1;
}



// FUNCTION 142a5f180 FUN_142a5f180 body=372 status=ok
// SIG undefined FUN_142a5f180(void)

longlong * FUN_142a5f180(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar6 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x100000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_14271fa70(param_1,(longlong)(int)puVar6 * 0x10 + *param_2);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  TArray<FString,FDefaultAllocator>::Empty(param_2,local_res8[0]);
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
    puVar5 = puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar5 = puVar4;
    }
    FUN_14271fa70(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 142a5f300 FUN_142a5f300 body=43 status=ok
// SIG undefined FUN_142a5f300(void)

undefined8 * FUN_142a5f300(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1453672f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 142a5f330 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FClothingSimulationContextBase::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142a5f380 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FClothingSimulationContextNv::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 142a5f3e0 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FClothingSimulationNv::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145367458;
  FUN_142a5ef40(param_1 + 4);
  *param_1 = &PTR_FUN_1453672f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142a5f430 FUN_142a5f430 body=43 status=ok
// SIG undefined FUN_142a5f430(void)

undefined8 * FUN_142a5f430(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1453672f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142a5f460 `scalar_deleting_destructor' body=133 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UClothingAsset::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  FUN_142a5edd0(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 142a5f4f0 FUN_142a5f4f0 body=98 status=ok
// SIG undefined FUN_142a5f4f0(void)

void FUN_142a5f4f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = (longlong)*(int *)(param_1 + 0x28) * 0x1d0 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x1d0) {
    FClothCollisionData::Append(lVar1 + 0x98,param_2);
    *(undefined1 *)(lVar1 + 0xf8) = 1;
  }
  return;
}



// FUNCTION 142a5f560 FUN_142a5f560 body=2311 status=ok
// SIG undefined FUN_142a5f560(void)

void FUN_142a5f560(undefined8 param_1,char *param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_108;
  undefined4 uStack_104;
  longlong lStack_100;
  undefined8 local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  longlong lStack_e0;
  
  fVar22 = 10.0 / *(float *)(param_2 + 0xa8);
  fVar20 = *(float *)(param_2 + 0x50);
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar11 + 0x38) < DAT_1468509dc) {
    _Init_thread_header(&DAT_1468509dc);
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
  }
  iVar6 = DAT_1468509dc;
  fVar12 = _guard_xfg_dispatch_icall_nop(1.0 - fVar20);
  fVar12 = fVar12 * DAT_1468509d8;
  fVar20 = *(float *)(param_2 + 0x54);
  if (*(int *)(lVar11 + 0x38) < iVar6) {
    _Init_thread_header(&DAT_1468509dc);
    iVar6 = DAT_1468509dc;
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
      iVar6 = DAT_1468509dc;
    }
  }
  fVar13 = _guard_xfg_dispatch_icall_nop(1.0 - fVar20);
  fVar13 = fVar13 * DAT_1468509d8;
  fVar20 = *(float *)(param_2 + 0x58);
  if (*(int *)(lVar11 + 0x38) < iVar6) {
    _Init_thread_header(&DAT_1468509dc);
    iVar6 = DAT_1468509dc;
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
      iVar6 = DAT_1468509dc;
    }
  }
  fVar14 = _guard_xfg_dispatch_icall_nop(1.0 - fVar20);
  fVar14 = fVar14 * DAT_1468509d8;
  fVar20 = *(float *)(param_2 + 0x68);
  if (*(int *)(lVar11 + 0x38) < iVar6) {
    _Init_thread_header(&DAT_1468509dc);
    iVar6 = DAT_1468509dc;
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
      iVar6 = DAT_1468509dc;
    }
  }
  fVar15 = _guard_xfg_dispatch_icall_nop(1.0 - fVar20);
  fVar15 = fVar15 * DAT_1468509d8;
  fVar20 = *(float *)(param_2 + 0x6c);
  if (*(int *)(lVar11 + 0x38) < iVar6) {
    _Init_thread_header(&DAT_1468509dc);
    iVar6 = DAT_1468509dc;
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
      iVar6 = DAT_1468509dc;
    }
  }
  fVar16 = _guard_xfg_dispatch_icall_nop(1.0 - fVar20);
  fVar16 = fVar16 * DAT_1468509d8;
  fVar20 = *(float *)(param_2 + 0x70);
  if (*(int *)(lVar11 + 0x38) < iVar6) {
    _Init_thread_header(&DAT_1468509dc);
    iVar6 = DAT_1468509dc;
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
      iVar6 = DAT_1468509dc;
    }
  }
  fVar17 = _guard_xfg_dispatch_icall_nop(1.0 - fVar20);
  fVar17 = fVar17 * DAT_1468509d8;
  fVar20 = *(float *)(param_2 + 0x74);
  if (*(int *)(lVar11 + 0x38) < iVar6) {
    _Init_thread_header(&DAT_1468509dc);
    iVar6 = DAT_1468509dc;
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
      iVar6 = DAT_1468509dc;
    }
  }
  fVar18 = _guard_xfg_dispatch_icall_nop(1.0 - fVar20);
  fVar18 = fVar18 * DAT_1468509d8;
  fVar20 = *(float *)(param_2 + 0x78);
  if (*(int *)(lVar11 + 0x38) < iVar6) {
    _Init_thread_header(&DAT_1468509dc);
    iVar6 = DAT_1468509dc;
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
      iVar6 = DAT_1468509dc;
    }
  }
  fVar19 = _guard_xfg_dispatch_icall_nop(1.0 - fVar20);
  fVar20 = *(float *)(param_2 + 0x7c);
  fVar19 = fVar19 * DAT_1468509d8;
  if (*(int *)(lVar11 + 0x38) < iVar6) {
    _Init_thread_header(&DAT_1468509dc);
    if (DAT_1468509dc == -1) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
  }
  fVar12 = _guard_xfg_dispatch_icall_nop(fVar12 * fVar22 * 0.6931472);
  fVar13 = _guard_xfg_dispatch_icall_nop(fVar13 * fVar22 * 0.6931472);
  fVar14 = _guard_xfg_dispatch_icall_nop(fVar14 * fVar22 * 0.6931472);
  fVar15 = _guard_xfg_dispatch_icall_nop(fVar15 * fVar22 * 0.6931472);
  fVar16 = _guard_xfg_dispatch_icall_nop(fVar16 * fVar22 * 0.6931472);
  fVar17 = _guard_xfg_dispatch_icall_nop(fVar17 * fVar22 * 0.6931472);
  fVar18 = _guard_xfg_dispatch_icall_nop(fVar18 * fVar22 * 0.6931472);
  fVar19 = _guard_xfg_dispatch_icall_nop(fVar19 * fVar22 * 0.6931472);
  fVar20 = _guard_xfg_dispatch_icall_nop(1.0 - fVar20);
  fVar20 = _guard_xfg_dispatch_icall_nop(fVar20 * DAT_1468509d8 * fVar22 * 0.6931472);
  lVar11 = *(longlong *)(param_3 + 0x100);
  lVar10 = (longlong)*(int *)(param_3 + 0x108) * 0x40 + lVar11;
  if (lVar11 != lVar10) {
    piVar5 = (int *)(lVar11 + 0x18);
    do {
      iVar6 = piVar5[4];
      lVar9 = 0;
      plVar2 = *(longlong **)(piVar5 + -4);
      if (0 < iVar6) {
        lVar8 = 0;
        do {
          pcVar7 = (char *)0x0;
          lVar3 = *(longlong *)(piVar5 + 2);
          iVar1 = *(int *)(*(longlong *)(piVar5 + 6) + lVar9 * 4);
          if (iVar1 == 1) {
            pcVar7 = param_2 + 4;
          }
          else if (iVar1 == 2) {
            pcVar7 = param_2 + 0x14;
          }
          else if (iVar1 == 3) {
            pcVar7 = param_2 + 0x24;
          }
          else if (iVar1 == 4) {
            pcVar7 = param_2 + 0x34;
          }
          lVar9 = lVar9 + 1;
          *(undefined4 *)(lVar8 + lVar3) = *(undefined4 *)pcVar7;
          *(undefined4 *)(lVar8 + 4 + lVar3) = *(undefined4 *)(pcVar7 + 4);
          *(undefined4 *)(lVar8 + 8 + lVar3) = *(undefined4 *)(pcVar7 + 0xc);
          *(undefined4 *)(lVar8 + 0xc + lVar3) = *(undefined4 *)(pcVar7 + 8);
          lVar8 = lVar8 + 0x14;
        } while (lVar9 < iVar6);
        iVar6 = piVar5[4];
      }
      lVar9 = *(longlong *)(piVar5 + 2);
      lStack_f0 = lVar9 + (longlong)iVar6 * 0x14;
      local_f8._0_4_ = (undefined4)lVar9;
      local_f8._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
      local_108 = (undefined4)local_f8;
      uStack_104 = local_f8._4_4_;
      local_f8 = lVar9;
      lStack_100 = lStack_f0;
      (**(code **)(*plVar2 + 0x148))(plVar2,&local_108);
      if (*param_2 == '\x01') {
        (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined4 *)(param_2 + 0x60));
        uVar21 = *(undefined4 *)(param_2 + 100);
      }
      else {
        (**(code **)(*plVar2 + 0x298))(plVar2,0);
        uVar21 = 0;
      }
      (**(code **)(*plVar2 + 0x2a8))(plVar2,uVar21);
      if ((*(char *)(param_3 + 0x110) == '\0') && (*param_2 == '\x01')) {
        (**(code **)(*plVar2 + 0x278))(plVar2);
      }
      (**(code **)(*plVar2 + 0x118))(plVar2,*(undefined4 *)(param_2 + 0xa4));
      (**(code **)(*plVar2 + 0x128))(plVar2,*(undefined4 *)(param_2 + 0xa8));
      (**(code **)(*plVar2 + 0x138))
                (plVar2,(longlong)
                        ((float)((longlong)*(float *)(param_2 + 0xa4) & 0xffffffff) +
                        (float)((longlong)*(float *)(param_2 + 0xa4) & 0xffffffff)));
      (**(code **)(*plVar2 + 0x2c8))(plVar2,*(undefined4 *)(param_2 + 0x44));
      (**(code **)(*plVar2 + 0x2d8))(plVar2,*(undefined4 *)(param_2 + 0x48));
      cVar4 = FClothConfig::HasSelfCollision(param_2);
      if (cVar4 != '\0') {
        lVar9 = *(longlong *)(piVar5 + -2);
        lStack_e0 = (longlong)*piVar5 * 0x10 + lVar9;
        local_e8._0_4_ = (undefined4)lVar9;
        local_e8._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
        local_108 = (undefined4)local_e8;
        uStack_104 = local_e8._4_4_;
        local_e8 = lVar9;
        lStack_100 = lStack_e0;
        (**(code **)(*plVar2 + 0x2f8))(plVar2,&local_108);
      }
      local_158 = 1.0 - fVar12;
      local_154 = 1.0 - fVar13;
      local_150 = 1.0 - fVar14;
      (**(code **)(*plVar2 + 0xb8))(plVar2,&local_158);
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined4 *)(param_2 + 0x5c));
      local_14c = 1.0 - fVar18;
      local_148 = 1.0 - fVar19;
      local_144 = 1.0 - fVar20;
      (**(code **)(*plVar2 + 200))(plVar2,&local_14c);
      local_140 = 1.0 - fVar15;
      local_13c = 1.0 - fVar16;
      local_138 = 1.0 - fVar17;
      (**(code **)(*plVar2 + 0xd8))(plVar2,&local_140);
      local_134 = *(undefined4 *)(param_2 + 0x80);
      local_130 = *(undefined4 *)(param_2 + 0x84);
      local_12c = *(undefined4 *)(param_2 + 0x88);
      (**(code **)(*plVar2 + 0xe8))(plVar2,&local_134);
      local_128 = *(undefined4 *)(param_2 + 0x8c);
      local_124 = *(undefined4 *)(param_2 + 0x90);
      local_120 = *(undefined4 *)(param_2 + 0x94);
      (**(code **)(*plVar2 + 0xf8))(plVar2,&local_128);
      local_11c = *(undefined4 *)(param_2 + 0x98);
      local_118 = *(undefined4 *)(param_2 + 0x9c);
      local_114 = *(undefined4 *)(param_2 + 0xa0);
      (**(code **)(*plVar2 + 0x108))(plVar2,&local_11c);
      (**(code **)(*plVar2 + 0x1f0))(plVar2,*(undefined4 *)(param_2 + 0xb4));
      (**(code **)(*plVar2 + 0x200))(plVar2);
      lVar11 = lVar11 + 0x40;
      piVar5 = piVar5 + 0x10;
    } while (lVar11 != lVar10);
  }
  *(undefined4 *)(param_3 + 0x114) = *(undefined4 *)(param_2 + 0xb8);
  *(char *)(param_3 + 0x110) = *param_2;
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0xc0);
  return;
}



// FUNCTION 142a5fe70 FUN_142a5fe70 body=742 status=ok
// SIG undefined FUN_142a5fe70(void)

void FUN_142a5fe70(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int *_Dst;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong local_res10;
  
  if ((0.0 < *(float *)(param_1 + 0x94)) && (0.0 < *(float *)(param_1 + 0x98))) {
    fVar19 = *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0x9c);
    plVar12 = *(longlong **)(param_1 + 0x118);
    plVar7 = plVar12 + (longlong)*(int *)(param_1 + 0x120) * 0x21;
    if (plVar12 != plVar7) {
      plVar9 = plVar12 + 0x14;
      do {
        lVar4 = plVar9[-0x13];
        *(int *)plVar9 = 0;
        if (0x7fffffff < *(uint *)((longlong)plVar9 + 4)) {
          TArray<float,FDefaultAllocator>::ResizeTo(plVar9 + -1,0);
        }
        iVar13 = 0;
        if (0 < (int)lVar4) {
          do {
            lVar8 = *plVar9;
            iVar5 = (int)lVar8 + 1;
            *(int *)plVar9 = iVar5;
            if (*(int *)((longlong)plVar9 + 4) < iVar5) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar9 + -1);
            }
            *(int *)(plVar9[-1] + (longlong)(int)lVar8 * 4) = iVar13;
            iVar13 = iVar13 + 1;
          } while (iVar13 < (int)lVar4);
        }
        _Dst = (int *)plVar9[-1];
        pfVar1 = (float *)(plVar9[-0xe] + (longlong)*_Dst * 4);
        if (*pfVar1 <= 1e-08 && *pfVar1 != 1e-08) {
          iVar13 = (int)*plVar9;
          do {
            if (iVar13 + -1 != 0) {
              _guard_xfg_dispatch_icall_nop(_Dst,_Dst + 1,(longlong)(iVar13 + -1) << 2);
              iVar13 = (int)*plVar9;
            }
            *(int *)plVar9 = iVar13 + -1;
            TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar9 + -1);
            iVar13 = (int)*plVar9;
          } while ((0 < iVar13) &&
                  (_Dst = (int *)plVar9[-1], pfVar1 = (float *)(plVar9[-0xe] + (longlong)*_Dst * 4),
                  *pfVar1 <= 1e-08 && *pfVar1 != 1e-08));
        }
        iVar13 = (int)*plVar9;
        if (0 < iVar13) {
          iVar5 = 1;
          local_res10 = 0;
          do {
            lVar4 = *plVar12;
            lVar8 = (longlong)*(int *)(plVar9[-1] + local_res10);
            if (iVar5 < iVar13) {
              iVar13 = (int)*plVar9;
              lVar10 = local_res10 + 4;
              iVar11 = iVar5 + 1;
              iVar14 = iVar5;
              do {
                lVar2 = *plVar12;
                lVar3 = plVar9[-1];
                lVar15 = (longlong)*(int *)(lVar3 + lVar10);
                fVar18 = *(float *)(lVar2 + 4 + lVar15 * 0xc) - *(float *)(lVar4 + 4 + lVar8 * 0xc);
                fVar17 = *(float *)(lVar2 + lVar15 * 0xc) - *(float *)(lVar4 + lVar8 * 0xc);
                fVar16 = *(float *)(lVar2 + 8 + lVar15 * 0xc) - *(float *)(lVar4 + 8 + lVar8 * 0xc);
                if ((fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16 < fVar19 * fVar19) ||
                   (pfVar1 = (float *)(plVar9[-0xe] + lVar15 * 4),
                   *pfVar1 <= 1e-08 && *pfVar1 != 1e-08)) {
                  iVar6 = (iVar13 - iVar14) + -1;
                  if (iVar6 != 0) {
                    _guard_xfg_dispatch_icall_nop
                              ((void *)(lVar3 + (longlong)iVar14 * 4),
                               (void *)(lVar3 + (longlong)iVar11 * 4),(longlong)iVar6 << 2);
                    iVar13 = (int)*plVar9;
                  }
                  *(int *)plVar9 = iVar13 + -1;
                  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar9 + -1);
                  iVar13 = (int)*plVar9;
                }
                else {
                  iVar14 = iVar14 + 1;
                  iVar11 = iVar11 + 1;
                  lVar10 = lVar10 + 4;
                }
              } while (iVar14 < iVar13);
            }
            local_res10 = local_res10 + 4;
            iVar5 = iVar5 + 1;
          } while (iVar5 <= iVar13);
        }
        plVar12 = plVar12 + 0x21;
        plVar9 = plVar9 + 0x21;
      } while (plVar12 != plVar7);
    }
  }
  return;
}



// FUNCTION 142a60160 CalculateParticleVelocities body=801 status=ok
// SIG undefined CalculateParticleVelocities(void)

void FClothingActorNv::CalculateParticleVelocities(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  float *pfVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  undefined1 local_88 [16];
  longlong local_78;
  code *local_60;
  int local_58;
  undefined1 local_50 [16];
  longlong local_40;
  code *local_28;
  int local_20;
  
  fVar19 = 0.0;
  if (*(float *)(param_1 + 0x160) != 0.0) {
    fVar19 = 1.0 / *(float *)(param_1 + 0x160);
  }
  iVar9 = (**(code **)(**(longlong **)
                         ((longlong)*(int *)(param_1 + 0x60) * 0x40 + 8 +
                         *(longlong *)(param_1 + 0x100)) + 0x20))();
  lVar15 = (longlong)iVar9;
  plVar10 = *(longlong **)
             ((longlong)*(int *)(param_1 + 0x60) * 0x40 + 8 + *(longlong *)(param_1 + 0x100));
  plVar10 = (longlong *)(**(code **)(*plVar10 + 0x50))(plVar10,local_88);
  lVar8 = *plVar10;
  (*local_60)(local_58 + local_78);
  plVar10 = *(longlong **)
             ((longlong)*(int *)(param_1 + 0x60) * 0x40 + 8 + *(longlong *)(param_1 + 0x100));
  plVar10 = (longlong *)(**(code **)(*plVar10 + 0x40))(plVar10,local_50);
  lVar17 = *plVar10;
  (*local_28)(local_20 + local_40);
  uVar14 = 0;
  if ((int)param_2[1] != iVar9) {
    iVar11 = *(int *)((longlong)param_2 + 0xc);
    *(undefined4 *)(param_2 + 1) = 0;
    uVar12 = uVar14;
    if ((iVar11 < 0) && (uVar12 = 0, iVar11 != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (param_2);
      uVar12 = (ulonglong)*(uint *)(param_2 + 1);
      iVar11 = *(int *)((longlong)param_2 + 0xc);
    }
    iVar9 = (int)uVar12 + iVar9;
    *(int *)(param_2 + 1) = iVar9;
    if (iVar11 < iVar9) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2);
    }
  }
  uVar12 = uVar14;
  if (3 < lVar15) {
    lVar18 = lVar17 - lVar8;
    pfVar13 = (float *)(lVar8 + 0x18);
    lVar16 = (lVar15 - 4U >> 2) + 1;
    uVar12 = lVar16 * 4;
    do {
      fVar5 = *(float *)(lVar18 + -0x10 + (longlong)pfVar13);
      fVar6 = pfVar13[-4];
      lVar7 = *param_2;
      *(ulonglong *)(lVar7 + uVar14) =
           CONCAT44((*(float *)(lVar18 + -0x14 + (longlong)pfVar13) - pfVar13[-5]) * fVar19,
                    (*(float *)(lVar18 + -0x18 + (longlong)pfVar13) - pfVar13[-6]) * fVar19);
      *(float *)(lVar7 + 8 + uVar14) = (fVar5 - fVar6) * fVar19;
      fVar5 = *(float *)(lVar18 + (longlong)pfVar13);
      fVar6 = *pfVar13;
      lVar7 = *param_2;
      *(ulonglong *)(lVar7 + 0xc + uVar14) =
           CONCAT44((*(float *)(lVar18 + -4 + (longlong)pfVar13) - pfVar13[-1]) * fVar19,
                    (*(float *)(lVar18 + -8 + (longlong)pfVar13) - pfVar13[-2]) * fVar19);
      *(float *)(lVar7 + 0x14 + uVar14) = (fVar5 - fVar6) * fVar19;
      fVar5 = *(float *)(lVar18 + 0x10 + (longlong)pfVar13);
      fVar6 = pfVar13[4];
      lVar7 = *param_2;
      *(ulonglong *)(lVar7 + 0x18 + uVar14) =
           CONCAT44((*(float *)(lVar18 + 0xc + (longlong)pfVar13) - pfVar13[3]) * fVar19,
                    (*(float *)(lVar18 + 8 + (longlong)pfVar13) - pfVar13[2]) * fVar19);
      *(float *)(lVar7 + 0x20 + uVar14) = (fVar5 - fVar6) * fVar19;
      fVar5 = *(float *)(lVar18 + 0x20 + (longlong)pfVar13);
      fVar6 = pfVar13[8];
      pfVar3 = (float *)(lVar18 + 0x18 + (longlong)pfVar13);
      pfVar1 = pfVar13 + 6;
      pfVar4 = (float *)(lVar18 + 0x1c + (longlong)pfVar13);
      pfVar2 = pfVar13 + 7;
      lVar7 = *param_2;
      pfVar13 = pfVar13 + 0x10;
      *(ulonglong *)(lVar7 + 0x24 + uVar14) =
           CONCAT44((*pfVar4 - *pfVar2) * fVar19,(*pfVar3 - *pfVar1) * fVar19);
      *(float *)(lVar7 + 0x2c + uVar14) = (fVar5 - fVar6) * fVar19;
      uVar14 = uVar14 + 0x30;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  if ((longlong)uVar12 < lVar15) {
    pfVar13 = (float *)(lVar8 + 8 + uVar12 * 0x10);
    lVar16 = uVar12 * 0xc;
    lVar17 = lVar17 - lVar8;
    lVar15 = lVar15 - uVar12;
    do {
      fVar5 = *(float *)(lVar17 + (longlong)pfVar13);
      fVar6 = *pfVar13;
      pfVar3 = (float *)(lVar17 + -8 + (longlong)pfVar13);
      pfVar1 = pfVar13 + -2;
      pfVar4 = (float *)(lVar17 + -4 + (longlong)pfVar13);
      pfVar2 = pfVar13 + -1;
      lVar8 = *param_2;
      pfVar13 = pfVar13 + 4;
      *(ulonglong *)(lVar8 + lVar16) =
           CONCAT44((*pfVar4 - *pfVar2) * fVar19,(*pfVar3 - *pfVar1) * fVar19);
      *(float *)(lVar8 + 8 + lVar16) = (fVar5 - fVar6) * fVar19;
      lVar16 = lVar16 + 0xc;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}



// FUNCTION 142a60490 FUN_142a60490 body=75 status=ok
// SIG undefined FUN_142a60490(void)

void FUN_142a60490(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = (longlong)*(int *)(param_1 + 0x28) * 0x1d0 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x1d0) {
    FClothCollisionData::Reset(lVar1 + 0x98);
    *(undefined1 *)(lVar1 + 0xf8) = 1;
  }
  return;
}



// FUNCTION 142a604e0 FUN_142a604e0 body=172 status=ok
// SIG undefined FUN_142a604e0(void)

void FUN_142a604e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x118);
  lVar2 = (longlong)*(int *)(param_1 + 0x120) * 0x108 + lVar3;
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x108) {
    plVar1 = *(longlong **)(lVar3 + 0xf8);
    for (iVar4 = *(int *)(lVar3 + 0x100); iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
    }
    *(undefined4 *)(lVar3 + 0x100) = 0;
    if (*(int *)(lVar3 + 0x104) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar3 + 0xf8,0);
    }
  }
  return;
}



// FUNCTION 142a60590 FUN_142a60590 body=210 status=ok
// SIG undefined FUN_142a60590(void)

void FUN_142a60590(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_18 [2];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_1453675c0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[2] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_145367608;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar1 + 1;
  if (*(int *)(param_1 + 0x3c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x30,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x30));
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 1) = 0;
  if (local_18 != puVar4) {
    if (plVar2 == (longlong *)0x0) goto LAB_142a60649;
    (**(code **)(*plVar2 + 0x30))(plVar2);
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
LAB_142a60649:
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 142a60670 FUN_142a60670 body=861 status=ok
// SIG undefined FUN_142a60670(void)

void FUN_142a60670(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  longlong local_a8 [2];
  longlong local_98;
  code *local_80;
  int local_78;
  
  _guard_xfg_dispatch_icall_nop((void *)param_2[0x2a],0,(longlong)(int)param_2[0x2b] * 0xc);
  lVar9 = (longlong)(int)param_2[0xc];
  uVar6 = (**(code **)(**(longlong **)(lVar9 * 0x40 + 8 + param_2[0x20]) + 0x20))();
  plVar3 = *(longlong **)(lVar9 * 0x40 + 8 + param_2[0x20]);
  (**(code **)(*plVar3 + 0x40))(plVar3,local_a8);
  uVar12 = 0;
  lVar9 = lVar9 * 0x108;
  lVar4 = *(longlong *)(*param_2 + 0x118);
  uVar13 = 0;
  uVar1 = *(uint *)(lVar9 + 0x28 + lVar4);
  if (uVar1 != 0) {
    do {
      lVar5 = *(longlong *)(lVar9 + 0x20 + lVar4);
      lVar11 = (longlong)(int)uVar13;
      uVar13 = uVar13 + 3;
      uVar2 = *(uint *)(lVar5 + lVar11 * 4);
      uVar10 = (ulonglong)*(uint *)(lVar5 + 8 + lVar11 * 4);
      uVar7 = (ulonglong)uVar2;
      fVar20 = *(float *)(local_a8[0] + uVar7 * 0x10);
      fVar18 = *(float *)(local_a8[0] + 4 + uVar7 * 0x10);
      fVar14 = *(float *)(local_a8[0] + 8 + uVar7 * 0x10);
      fVar21 = *(float *)(local_a8[0] + 4 + uVar10 * 0x10) - fVar18;
      uVar7 = (ulonglong)*(uint *)(lVar5 + 4 + lVar11 * 4);
      fVar17 = *(float *)(local_a8[0] + uVar10 * 0x10) - fVar20;
      fVar18 = *(float *)(local_a8[0] + 4 + uVar7 * 0x10) - fVar18;
      fVar15 = *(float *)(local_a8[0] + 8 + uVar7 * 0x10) - fVar14;
      fVar20 = *(float *)(local_a8[0] + uVar7 * 0x10) - fVar20;
      lVar8 = (longlong)(int)uVar2;
      fVar14 = *(float *)(local_a8[0] + 8 + uVar10 * 0x10) - fVar14;
      lVar5 = param_2[0x2a];
      fVar16 = fVar17 * fVar15 - fVar14 * fVar20;
      fVar14 = fVar14 * fVar18 - fVar21 * fVar15;
      fVar20 = fVar21 * fVar20 - fVar17 * fVar18;
      *(float *)(lVar5 + 4 + lVar8 * 0xc) = fVar16 + *(float *)(lVar5 + 4 + lVar8 * 0xc);
      *(float *)(lVar5 + lVar8 * 0xc) = fVar14 + *(float *)(lVar5 + lVar8 * 0xc);
      *(float *)(lVar5 + 8 + lVar8 * 0xc) = fVar20 + *(float *)(lVar5 + 8 + lVar8 * 0xc);
      lVar8 = (longlong)*(int *)(*(longlong *)(lVar9 + 0x20 + lVar4) + 4 + lVar11 * 4);
      lVar5 = param_2[0x2a];
      *(float *)(lVar5 + lVar8 * 0xc) = fVar14 + *(float *)(lVar5 + lVar8 * 0xc);
      *(float *)(lVar5 + 4 + lVar8 * 0xc) = fVar16 + *(float *)(lVar5 + 4 + lVar8 * 0xc);
      *(float *)(lVar5 + 8 + lVar8 * 0xc) = fVar20 + *(float *)(lVar5 + 8 + lVar8 * 0xc);
      lVar8 = (longlong)*(int *)(*(longlong *)(lVar9 + 0x20 + lVar4) + 8 + lVar11 * 4);
      lVar5 = param_2[0x2a];
      *(float *)(lVar5 + lVar8 * 0xc) = fVar14 + *(float *)(lVar5 + lVar8 * 0xc);
      *(float *)(lVar5 + 4 + lVar8 * 0xc) = fVar16 + *(float *)(lVar5 + 4 + lVar8 * 0xc);
      *(float *)(lVar5 + 8 + lVar8 * 0xc) = fVar20 + *(float *)(lVar5 + 8 + lVar8 * 0xc);
    } while (uVar13 < uVar1);
  }
  if (uVar6 != 0) {
    do {
      lVar9 = (longlong)(int)uVar12;
      lVar4 = param_2[0x2a];
      fVar20 = *(float *)(lVar4 + 4 + lVar9 * 0xc);
      fVar18 = *(float *)(lVar4 + lVar9 * 0xc);
      fVar14 = *(float *)(lVar4 + 8 + lVar9 * 0xc);
      fVar15 = fVar18 * fVar18 + fVar20 * fVar20 + fVar14 * fVar14;
      if (1e-08 < fVar15) {
        auVar19 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
        fVar16 = auVar19._0_4_;
        fVar16 = fVar16 + fVar16 * (0.5 - fVar15 * 0.5 * fVar16 * fVar16);
        fVar16 = fVar16 + fVar16 * (0.5 - fVar15 * 0.5 * fVar16 * fVar16);
        *(float *)(lVar4 + lVar9 * 0xc) = fVar18 * fVar16;
        *(float *)(lVar4 + 4 + lVar9 * 0xc) = fVar20 * fVar16;
        *(float *)(lVar4 + 8 + lVar9 * 0xc) = fVar14 * fVar16;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar6);
  }
  (*local_80)(local_78 + local_98);
  return;
}



// FUNCTION 142a609d0 FUN_142a609d0 body=3335 status=ok
// SIG undefined FUN_142a609d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142a609d0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  void *_Src;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  float *pfVar17;
  longlong lVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  longlong lVar21;
  void **ppvVar22;
  int iVar23;
  ulonglong uVar24;
  undefined4 *puVar25;
  ulonglong uVar26;
  longlong *plVar27;
  longlong lVar28;
  undefined1 auStack_328 [32];
  longlong *local_308;
  void **local_300;
  void **local_2f8;
  int local_2e8;
  int local_2e4;
  longlong local_2e0;
  void *local_2d8;
  ulonglong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  float *local_2b0;
  int local_2a8;
  undefined4 local_2a4;
  longlong local_2a0;
  uint local_298;
  undefined4 local_294;
  void *local_290;
  undefined8 local_288;
  longlong local_280;
  undefined8 local_278;
  void *local_270;
  ulonglong local_268;
  longlong local_260;
  ulonglong local_258;
  longlong local_250;
  longlong local_248;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  longlong *local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined8 local_1f8;
  longlong lStack_1f0;
  undefined8 local_1e8;
  void *pvStack_1e0;
  undefined4 local_1d8 [2];
  void *local_1d0;
  int local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  float *local_1a0;
  int local_198;
  undefined4 local_190;
  longlong local_188;
  uint local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined1 local_158 [8];
  undefined1 local_150 [136];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 local_98 [48];
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  local_2c0 = param_2;
  local_2b8 = param_1;
  if (param_3 != 0) {
    local_2c8 = param_3;
    lVar11 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_142a60a5b;
  }
  local_2c8 = 0;
  param_3 = 0;
LAB_142a60a5b:
  lVar11 = *(longlong *)(param_2 + 0x120);
  if ((((lVar11 != 0) || (lVar11 = FUN_1423407b0(param_2), lVar11 != 0)) &&
      (*(longlong *)(lVar11 + 0x218) != 0)) && (*(char *)(lVar11 + 0x70e) != '\0')) {
    iVar23 = *(int *)(param_3 + 0x120) + -1;
    local_280 = 0;
    if (*(int *)(param_2 + 0x83c) <= iVar23) {
      iVar23 = *(int *)(param_2 + 0x83c);
    }
    local_278 = 0;
    FUN_1423add80(param_2,&local_280,iVar23);
    iVar23 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar23 + 1;
    if (*(int *)(param_1 + 0x2c) < iVar23 + 1) {
      TArray<FShaderPipelineCache::CompileJob,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar23);
    }
    FUN_142a5e990((longlong)iVar23 * 0x1d0 + *(longlong *)(param_1 + 0x20));
    local_2e4 = 0;
    plVar27 = (longlong *)
              (*(longlong *)(param_1 + 0x20) + -0x1d0 + (longlong)*(int *)(param_1 + 0x28) * 0x1d0);
    *(undefined4 *)((longlong)plVar27 + 0xfc) = param_4;
    local_210 = plVar27;
    if (0 < *(int *)(param_3 + 0x120)) {
      local_2e0 = 0;
      do {
        plVar16 = plVar27 + 0x20;
        iVar23 = (int)plVar27[0x21];
        ppvVar22 = (void **)(local_2e0 * 0x108 + *(longlong *)(param_3 + 0x118));
        *(int *)(plVar27 + 0x21) = iVar23 + 1;
        if (*(int *)((longlong)plVar27 + 0x10c) < iVar23 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar16,iVar23);
        }
        local_290 = (void *)0x0;
        lVar11 = (longlong)iVar23 * 0x40 + *plVar16;
        local_288 = 0;
        local_2d8 = (void *)0x0;
        local_2d0 = 0;
        *(undefined8 *)(lVar11 + 0x10) = 0;
        *(undefined8 *)(lVar11 + 0x18) = 0;
        *(undefined8 *)(lVar11 + 0x20) = 0;
        *(undefined8 *)(lVar11 + 0x28) = 0;
        *(undefined8 *)(lVar11 + 0x30) = 0;
        *(undefined8 *)(lVar11 + 0x38) = 0;
        lVar11 = *plVar16;
        local_2a8 = *(int *)(ppvVar22 + 0xf);
        lVar21 = (longlong)local_2a8;
        pvVar4 = ppvVar22[0xe];
        lVar28 = (longlong)(int)plVar27[0x21] * 0x40;
        local_270 = (void *)0x0;
        local_268 = 0;
        local_2a0 = 0;
        local_294 = 0;
        local_2b0 = (float *)0x0;
        local_250 = lVar11;
        if (local_2a8 == 0) {
          local_2a4 = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(&local_2b0,local_2a8,0);
          _guard_xfg_dispatch_icall_nop(local_2b0,pvVar4,lVar21 << 2);
        }
        iVar23 = local_2a8;
        local_2e8 = *(int *)(ppvVar22 + 1);
        lVar21 = (longlong)local_2e8;
        uVar5 = *(int *)(ppvVar22 + 5) / 3;
        if (&local_290 != ppvVar22) {
          pvVar4 = *ppvVar22;
          local_288 = CONCAT44(local_288._4_4_,local_2e8);
          if (local_2e8 != 0) {
            TArray<FVector,FDefaultAllocator>::ResizeForCopy(&local_290,local_2e8,0);
            _guard_xfg_dispatch_icall_nop(local_290,pvVar4,lVar21 * 0xc);
          }
        }
        lVar21 = local_2c8;
        FUN_1423ad020(local_2c0,local_98,*(undefined4 *)(local_2c8 + 0x158),&DAT_1468b5b70);
        local_2f8 = &local_270;
        local_300 = &local_2d8;
        local_308 = (longlong *)CONCAT44(local_308._4_4_,(undefined4)local_278);
        FUN_142a67020(lVar21,ppvVar22,local_98);
        local_298 = uVar5;
        if (0 < (int)uVar5) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_2a0);
          uVar24 = (ulonglong)uVar5;
          lVar21 = 0;
          puVar19 = (undefined4 *)(local_2a0 + 8);
          do {
            puVar19[-2] = *(undefined4 *)(lVar21 + (longlong)ppvVar22[4]);
            puVar19[-1] = *(undefined4 *)((longlong)ppvVar22[4] + lVar21 + 4);
            *puVar19 = *(undefined4 *)((longlong)ppvVar22[4] + lVar21 + 8);
            uVar24 = uVar24 - 1;
            lVar21 = lVar21 + 0xc;
            puVar19 = puVar19 + 3;
          } while (uVar24 != 0);
        }
        uVar24 = local_2d0;
        pvVar4 = local_2d8;
        local_1a0 = local_2b0;
        iVar7 = (int)local_2d0;
        lVar21 = (longlong)(int)local_2d0;
        local_1c0 = 0;
        local_1b8 = 0;
        local_1b0 = 0;
        local_178 = 0;
        local_170 = 0;
        local_168 = 0;
        local_160 = 0;
        local_1d0 = local_2d8;
        local_1c8 = (int)local_2d0;
        local_1d8[0] = 0xc;
        local_188 = local_2a0;
        local_190 = 0xc;
        for (pfVar17 = local_2b0; pfVar17 != local_2b0 + iVar23; pfVar17 = pfVar17 + 1) {
          if (0.0 < *pfVar17) {
            local_1a8 = 4;
            local_198 = iVar23;
            goto LAB_142a60df7;
          }
        }
        local_1a0 = (float *)0x0;
        local_198 = 0;
        local_1a8 = 0;
LAB_142a60df7:
        local_180 = local_298;
        FUN_14168dc80();
        puVar12 = (undefined8 *)FName::FName(local_158,"ClothingSystemRuntime",1);
        uVar15 = *puVar12;
        uVar13 = FUN_14168dc80();
        lVar14 = FUN_141690010(uVar13,uVar15);
        plVar27 = *(longlong **)(lVar14 + 0x18);
        (**(code **)(*plVar27 + 8))(plVar27,local_1d8);
        local_230 = 0xc4754000;
        local_260 = 0;
        local_258 = 0;
        local_238 = 0;
        uVar15 = (**(code **)(*plVar27 + 0x10))(plVar27,local_150);
        local_308 = (longlong *)CONCAT71(local_308._1_7_,1);
        plVar27 = (longlong *)
                  NvClothCookFabricFromMesh(*(undefined8 *)(local_2b8 + 0x10),uVar15,&local_238);
        lVar14 = lVar28 + lVar11;
        iVar23 = 0;
        *(undefined4 *)(lVar14 + -0x28) = 0;
        if (*(int *)(lVar14 + -0x24) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
          iVar23 = *(int *)(lVar28 + -0x28 + lVar11);
        }
        lVar11 = (longlong)local_2e8;
        *(int *)(lVar14 + -0x28) = iVar23 + local_2e8;
        if (*(int *)(lVar14 + -0x24) < iVar23 + local_2e8) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
        }
        lVar18 = 0;
        if (3 < lVar11) {
          puVar19 = (undefined4 *)((longlong)pvVar4 + 0x14);
          puVar20 = (undefined4 *)(*(longlong *)(lVar14 + -0x30) + 0x18);
          puVar25 = (undefined4 *)(*(longlong *)(lVar14 + -0x30) + 8);
          do {
            uVar1 = puVar19[-4];
            uVar2 = puVar19[-3];
            uVar3 = *(undefined4 *)((longlong)ppvVar22[0xe] + lVar18 * 4);
            puVar25[-2] = puVar19[-5];
            puVar25[-1] = uVar1;
            *puVar25 = uVar2;
            puVar25[1] = uVar3;
            uVar1 = puVar19[-1];
            uVar2 = *puVar19;
            uVar3 = *(undefined4 *)((longlong)ppvVar22[0xe] + lVar18 * 4 + 4);
            puVar25[2] = puVar19[-2];
            puVar20[-1] = uVar1;
            *puVar20 = uVar2;
            puVar20[1] = uVar3;
            uVar1 = puVar19[2];
            uVar2 = puVar19[3];
            uVar3 = *(undefined4 *)((longlong)ppvVar22[0xe] + lVar18 * 4 + 8);
            puVar25[6] = puVar19[1];
            puVar20[3] = uVar1;
            puVar20[4] = uVar2;
            puVar20[5] = uVar3;
            uVar1 = puVar19[5];
            uVar2 = puVar19[6];
            uVar3 = *(undefined4 *)((longlong)ppvVar22[0xe] + lVar18 * 4 + 0xc);
            lVar18 = lVar18 + 4;
            puVar25[10] = puVar19[4];
            puVar20[7] = uVar1;
            puVar20[8] = uVar2;
            puVar20[9] = uVar3;
            puVar19 = puVar19 + 0xc;
            puVar20 = puVar20 + 0x10;
            puVar25 = puVar25 + 0x10;
          } while (lVar18 < lVar11 + -3);
        }
        if (lVar18 < lVar11) {
          puVar19 = (undefined4 *)((longlong)pvVar4 + lVar18 * 0xc + 8);
          puVar20 = (undefined4 *)(lVar18 * 0x10 + *(longlong *)(lVar14 + -0x30));
          do {
            puVar25 = puVar19 + -2;
            uVar1 = puVar19[-1];
            uVar2 = *puVar19;
            puVar19 = puVar19 + 3;
            uVar3 = *(undefined4 *)((longlong)ppvVar22[0xe] + lVar18 * 4);
            lVar18 = lVar18 + 1;
            *puVar20 = *puVar25;
            puVar20[1] = uVar1;
            puVar20[2] = uVar2;
            puVar20[3] = uVar3;
            puVar20 = puVar20 + 4;
          } while (lVar18 < lVar11);
        }
        lVar11 = *(longlong *)(lVar14 + -0x30);
        lStack_1f0 = (longlong)*(int *)(lVar14 + -0x28) * 0x10 + lVar11;
        local_1f8._0_4_ = (undefined4)lVar11;
        local_1f8._4_4_ = (undefined4)((ulonglong)lVar11 >> 0x20);
        local_208 = (undefined4)local_1f8;
        uStack_204 = local_1f8._4_4_;
        local_1f8 = lVar11;
        uStack_200 = (void *)lStack_1f0;
        plVar16 = (longlong *)
                  (**(code **)(**(longlong **)(local_2b8 + 0x10) + 0x18))
                            (*(longlong **)(local_2b8 + 0x10),&local_208,plVar27);
        lVar11 = local_250;
        *(longlong **)(lVar28 + -0x38 + local_250) = plVar16;
        *(longlong **)(lVar28 + -0x40 + local_250) = plVar27;
        iVar9 = (**(code **)(*plVar27 + 0x10))(plVar27);
        lVar11 = lVar28 + lVar11;
        iVar23 = *(int *)(lVar11 + -0x18);
        *(int *)(lVar11 + -0x18) = iVar23 + iVar9;
        if (*(int *)(lVar11 + -0x14) < iVar23 + iVar9) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
          ResizeGrow(lVar11 + -0x20,iVar23);
        }
        puVar19 = (undefined4 *)(*(longlong *)(lVar11 + -0x20) + (longlong)iVar23 * 0x14);
        for (iVar23 = iVar9; iVar23 != 0; iVar23 = iVar23 + -1) {
          *puVar19 = 0x3f800000;
          puVar19[1] = 0x3f800000;
          puVar19[2] = 0x3f800000;
          puVar19[3] = 0x3f800000;
          puVar19[4] = 0xffffffff;
          puVar19 = puVar19 + 5;
        }
        lVar28 = local_250 + lVar28;
        iVar23 = *(int *)(lVar28 + -8);
        iVar10 = iVar23 + iVar9;
        *(int *)(lVar28 + -8) = iVar10;
        if (*(int *)(lVar28 + -4) < iVar10) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar28 + -0x10);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(lVar28 + -0x10) + (longlong)iVar23 * 4),0,
                   (longlong)iVar9 << 2);
        uVar26 = 0;
        if (0 < iVar9) {
          do {
            iVar23 = (int)uVar26;
            *(undefined4 *)(*(longlong *)(lVar28 + -0x10) + (longlong)iVar23 * 4) =
                 *(undefined4 *)(local_260 + uVar26 * 4);
            *(short *)(*(longlong *)(lVar11 + -0x20) + 0x10 + (longlong)iVar23 * 0x14) =
                 (short)uVar26;
            uVar26 = (ulonglong)(iVar23 + 1U);
          } while ((int)(iVar23 + 1U) < iVar9);
        }
        pvVar4 = ppvVar22[0x13];
        pvStack_1e0 = (void *)((longlong)pvVar4 + (longlong)*(int *)(ppvVar22 + 0x14) * 4);
        local_1e8._0_4_ = SUB84(pvVar4,0);
        local_1e8._4_4_ = (undefined4)((ulonglong)pvVar4 >> 0x20);
        local_208 = (undefined4)local_1e8;
        uStack_204 = local_1e8._4_4_;
        local_1e8 = pvVar4;
        uStack_200 = pvStack_1e0;
        (**(code **)(*plVar16 + 0x2e8))(plVar16,&local_208);
        (**(code **)(*plVar16 + 0x210))(plVar16);
        lVar11 = 0;
        iVar23 = (**(code **)(*plVar16 + 0x220))(plVar16);
        param_3 = local_2c8;
        pvVar4 = local_2d8;
        lVar28 = (longlong)iVar23;
        if (3 < lVar28) {
          lVar14 = 0;
          puVar19 = (undefined4 *)((longlong)local_2d8 + 0x14);
          do {
            lVar18 = lVar14 + 0x40;
            uVar1 = puVar19[-4];
            uVar2 = puVar19[-3];
            uVar3 = *(undefined4 *)((longlong)ppvVar22[6] + lVar11 * 4);
            *(undefined4 *)(local_248 + -0x40 + lVar18) = puVar19[-5];
            *(undefined4 *)(local_248 + -0x3c + lVar18) = uVar1;
            *(undefined4 *)(local_248 + -0x38 + lVar18) = uVar2;
            *(undefined4 *)(local_248 + -0x34 + lVar18) = uVar3;
            uVar1 = puVar19[-1];
            uVar2 = *puVar19;
            uVar3 = *(undefined4 *)((longlong)ppvVar22[6] + lVar11 * 4 + 4);
            *(undefined4 *)(local_248 + -0x30 + lVar18) = puVar19[-2];
            *(undefined4 *)(local_248 + -0x2c + lVar18) = uVar1;
            *(undefined4 *)(local_248 + -0x28 + lVar18) = uVar2;
            *(undefined4 *)(local_248 + -0x24 + lVar18) = uVar3;
            uVar1 = puVar19[2];
            uVar2 = puVar19[3];
            uVar3 = *(undefined4 *)((longlong)ppvVar22[6] + lVar11 * 4 + 8);
            *(undefined4 *)(lVar14 + 0x20 + local_248) = puVar19[1];
            *(undefined4 *)(lVar14 + 0x24 + local_248) = uVar1;
            *(undefined4 *)(lVar14 + 0x28 + local_248) = uVar2;
            *(undefined4 *)(lVar14 + 0x2c + local_248) = uVar3;
            uVar1 = puVar19[5];
            uVar2 = puVar19[6];
            uVar3 = *(undefined4 *)((longlong)ppvVar22[6] + lVar11 * 4 + 0xc);
            lVar11 = lVar11 + 4;
            *(undefined4 *)(lVar14 + 0x30 + local_248) = puVar19[4];
            *(undefined4 *)(lVar14 + 0x34 + local_248) = uVar1;
            *(undefined4 *)(lVar14 + 0x38 + local_248) = uVar2;
            *(undefined4 *)(lVar14 + 0x3c + local_248) = uVar3;
            lVar14 = lVar18;
            puVar19 = puVar19 + 0xc;
          } while (lVar11 < lVar28 + -3);
        }
        if (lVar11 < lVar28) {
          lVar14 = lVar11 << 4;
          puVar19 = (undefined4 *)((longlong)local_2d8 + lVar11 * 0xc + 8);
          do {
            lVar14 = lVar14 + 0x10;
            puVar20 = puVar19 + -2;
            uVar1 = puVar19[-1];
            uVar2 = *puVar19;
            puVar19 = puVar19 + 3;
            uVar3 = *(undefined4 *)((longlong)ppvVar22[6] + lVar11 * 4);
            lVar11 = lVar11 + 1;
            *(undefined4 *)(local_248 + -0x10 + lVar14) = *puVar20;
            *(undefined4 *)(local_248 + -0xc + lVar14) = uVar1;
            *(undefined4 *)(local_248 + -8 + lVar14) = uVar2;
            *(undefined4 *)(local_248 + -4 + lVar14) = uVar3;
          } while (lVar11 < lVar28);
        }
        FUN_1423acfd0(local_2c0,&local_c8);
        local_22c = local_b8;
        local_224 = uStack_b0;
        local_228 = uStack_b4;
        (**(code **)(*plVar16 + 0x60))(plVar16,&local_22c);
        local_220 = local_c8;
        local_214 = uStack_bc;
        local_21c = uStack_c4;
        local_218 = uStack_c0;
        (**(code **)(*plVar16 + 0x68))(plVar16,&local_220);
        (**(code **)(*plVar16 + 0x80))(plVar16);
        (**(code **)(*plVar16 + 0x2b8))(plVar16,0x358637bd);
        plVar27 = local_210;
        _Src = local_270;
        lVar11 = local_2e0;
        *local_210 = param_3;
        if (local_2e0 == 0) {
          iVar23 = local_2e8 + (int)local_210[0x2b];
          *(int *)(local_210 + 0x2b) = iVar23;
          if (*(int *)((longlong)local_210 + 0x15c) < iVar23) {
            TArray<FRotator,FDefaultAllocator>::ResizeGrow();
          }
          ppvVar22 = (void **)(plVar27 + 0x24);
          if (ppvVar22 != &local_2d8) {
            *(int *)(plVar27 + 0x25) = iVar7;
            if ((iVar7 == 0) && (*(int *)((longlong)plVar27 + 300) == 0)) {
              *(undefined4 *)((longlong)plVar27 + 300) = 0;
            }
            else {
              TArray<FVector,FDefaultAllocator>::ResizeForCopy(ppvVar22,uVar24 & 0xffffffff);
              _guard_xfg_dispatch_icall_nop(*ppvVar22,pvVar4,lVar21 * 0xc);
            }
          }
          ppvVar22 = (void **)(plVar27 + 0x26);
          if (ppvVar22 != &local_2d8) {
            *(int *)(plVar27 + 0x27) = iVar7;
            if ((iVar7 == 0) && (*(int *)((longlong)plVar27 + 0x13c) == 0)) {
              *(undefined4 *)((longlong)plVar27 + 0x13c) = 0;
            }
            else {
              TArray<FVector,FDefaultAllocator>::ResizeForCopy(ppvVar22,uVar24 & 0xffffffff);
              _guard_xfg_dispatch_icall_nop(*ppvVar22,pvVar4,lVar21 * 0xc);
            }
          }
          ppvVar22 = (void **)(plVar27 + 0x28);
          if (ppvVar22 != &local_270) {
            lVar11 = (longlong)(int)local_268;
            *(int *)(plVar27 + 0x29) = (int)local_268;
            if (((int)local_268 == 0) && (*(int *)((longlong)plVar27 + 0x14c) == 0)) {
              *(undefined4 *)((longlong)plVar27 + 0x14c) = 0;
              lVar11 = local_2e0;
            }
            else {
              TArray<FVector,FDefaultAllocator>::ResizeForCopy(ppvVar22,local_268 & 0xffffffff);
              _guard_xfg_dispatch_icall_nop(*ppvVar22,_Src,lVar11 * 0xc);
              lVar11 = local_2e0;
            }
          }
        }
        lVar28 = local_260;
        if ((((local_258 & 0x7fffffff00000000) != 0) && (-1 < (longlong)local_258)) &&
           (local_260 != 0)) {
          plVar16 = (longlong *)GetNvClothAllocator();
          (**(code **)(*plVar16 + 0x10))(plVar16,lVar28);
        }
        if (local_2b0 != (float *)0x0) {
          FMemory::Free(local_2b0);
        }
        if (local_2a0 != 0) {
          FMemory::Free(local_2a0);
        }
        if (_Src != (void *)0x0) {
          FMemory::Free(_Src);
        }
        if (pvVar4 != (void *)0x0) {
          FMemory::Free(pvVar4);
        }
        if (local_290 != (void *)0x0) {
          FMemory::Free(local_290);
        }
        local_2e4 = local_2e4 + 1;
        local_2e0 = lVar11 + 1;
        param_1 = local_2b8;
        param_2 = local_2c0;
      } while (local_2e4 < *(int *)(param_3 + 0x120));
    }
    FUN_142a5f560(param_1,param_3 + 0x50,plVar27);
    plVar16 = plVar27 + 0x37;
    if (plVar16 != (longlong *)(param_2 + 0x920)) {
      iVar23 = *(int *)(param_2 + 0x928);
      pvVar4 = *(void **)(param_2 + 0x920);
      *(int *)(plVar27 + 0x38) = iVar23;
      if ((iVar23 == 0) && (*(int *)((longlong)plVar27 + 0x1c4) == 0)) {
        *(undefined4 *)((longlong)plVar27 + 0x1c4) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar16,iVar23);
        _guard_xfg_dispatch_icall_nop((void *)*plVar16,pvVar4,(longlong)iVar23 << 3);
      }
    }
    FUN_142a62770(param_1,param_3,plVar27);
    *(undefined4 *)(plVar27 + 0xc) = 0xffffffff;
    cVar8 = FWeakObjectPtr::IsValid(param_2 + 0x720);
    lVar11 = param_2;
    if (cVar8 != '\0') {
      lVar11 = FWeakObjectPtr::Get(param_2 + 0x720);
    }
    local_2f8 = (void **)CONCAT71(local_2f8._1_7_,1);
    local_308 = &local_280;
    local_300 = (void **)CONCAT71(local_300._1_7_,1);
    FUN_142a687a0(param_1,*(undefined4 *)(param_2 + 0x83c),param_2 + 0x210,
                  lVar11 + 0x728 + (longlong)*(int *)(lVar11 + 0x770) * 0x10);
    lVar11 = *(longlong *)(param_1 + 0x20);
    lVar28 = (longlong)*(int *)(param_1 + 0x28) * 0x1d0 + lVar11;
    for (; lVar11 != lVar28; lVar11 = lVar11 + 0x1d0) {
      if (*(int *)(lVar11 + 0x60) != -1) {
        FUN_142a60670(param_1,lVar11);
      }
    }
    if (local_280 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142a616f0 CreateContext body=188 status=ok
// SIG undefined CreateContext(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FClothingSimulationNv::CreateContext(void)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (undefined8 *)operator_new(0x90);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    ::_guard_xfg_dispatch_icall_nop(puVar1 + 3,0,0x78);
    *puVar1 = &PTR__scalar_deleting_destructor__145367378;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    uVar2 = uRam0000000146b29acc;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x24) = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    *(uint *)((longlong)puVar1 + 0x2c) = uVar2;
    uVar2 = uRam0000000146b29ac4 & uRam0000000146b29ad4;
    uVar3 = uRam0000000146b29ac8 & uRam0000000146b29ad8;
    uVar4 = uRam0000000146b29acc & uRam0000000146b29adc;
    *(uint *)(puVar1 + 8) = _DAT_146b29ac0 & _DAT_146b29ad0;
    *(uint *)((longlong)puVar1 + 0x44) = uVar2;
    *(uint *)(puVar1 + 9) = uVar3;
    *(uint *)((longlong)puVar1 + 0x4c) = uVar4;
    *(undefined4 *)(puVar1 + 10) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x54) = _DAT_1468b5d90;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = DAT_1468b5d98;
    *puVar1 = &PTR__scalar_deleting_destructor__145367450;
    *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
    *(undefined1 *)(puVar1 + 0xe) = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142a617b0 FUN_142a617b0 body=68 status=ok
// SIG undefined FUN_142a617b0(void)

void FUN_142a617b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145367650;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_145367698;
  }
  return;
}



// FUNCTION 142a61800 FUN_142a61800 body=74 status=ok
// SIG undefined FUN_142a61800(void)

void FUN_142a61800(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145367770;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1453677b8;
  }
  return;
}



// FUNCTION 142a61850 FUN_142a61850 body=58 status=ok
// SIG undefined FUN_142a61850(void)

void FUN_142a61850(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1453675c0;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_145367608;
  }
  return;
}



// FUNCTION 142a61890 FUN_142a61890 body=68 status=ok
// SIG undefined FUN_142a61890(void)

void FUN_142a61890(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1453676e0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_145367728;
  }
  return;
}



// FUNCTION 142a618e0 FUN_142a618e0 body=58 status=ok
// SIG undefined FUN_142a618e0(void)

void FUN_142a618e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145367530;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_145367578;
  }
  return;
}



// FUNCTION 142a61920 FUN_142a61920 body=58 status=ok
// SIG undefined FUN_142a61920(void)

void FUN_142a61920(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145367800;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_145367848;
  }
  return;
}



// FUNCTION 142a61960 CreateInteractor body=97 status=ok
// SIG undefined CreateInteractor(void)

void UClothingSimulationFactoryNv::CreateInteractor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = GetTransientPackage();
  FUN_1417846f0(uVar1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = UClothingSimulationInteractorNv::GetPrivateStaticClass();
  FUN_1417985e0(uVar2,uVar1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 142a619d0 FUN_142a619d0 body=127 status=ok
// SIG undefined FUN_142a619d0(void)

undefined8 * FUN_142a619d0(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145367380;
    plVar3 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar4 = plVar3[0x1f];
    }
    uVar1 = *(undefined4 *)(lVar4 + 0xb4);
    *puVar2 = &PTR__scalar_deleting_destructor__145367458;
    *(undefined4 *)(puVar2 + 1) = uVar1;
    puVar2[4] = 0;
    puVar2[5] = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142a61a50 DelayLoadNvCloth_Windows body=1324 status=ok
// SIG undefined DelayLoadNvCloth_Windows(void)

void FClothingSystemRuntimeModule::DelayLoadNvCloth_Windows(longlong param_1)

{
  void *_Src;
  void *_Src_00;
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *_Src_01;
  int iVar11;
  undefined2 *local_68;
  int local_60;
  int local_5c;
  void *local_58;
  int local_50;
  int local_4c;
  void *local_48;
  ulonglong local_40;
  undefined2 *local_38;
  undefined8 local_30;
  
  puVar2 = (undefined8 *)FPaths::EngineDir(&local_38);
  puVar7 = (undefined2 *)0x0;
  local_58 = (void *)*puVar2;
  iVar6 = *(int *)(puVar2 + 1);
  *puVar2 = 0;
  local_50 = *(int *)(puVar2 + 1);
  local_4c = *(int *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  iVar5 = (0x1d - (uint)(iVar6 != 0)) + local_50;
  if (local_4c < iVar5) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,iVar5,-iVar6);
  }
  FString::PathAppend(&local_58,L"Binaries/ThirdParty/PhysX3/",0x1b);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_48 = (void *)0x0;
  local_40 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  _Src_00 = local_48;
  FGenericPlatformString::Memcpy(local_48,L"VS2015/",0x10);
  _Src = local_58;
  lVar8 = (longlong)local_50;
  local_68 = (undefined2 *)0x0;
  local_60 = local_50;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_68,(7 - (uint)(local_50 != 0)) + local_50,0);
  puVar9 = local_68;
  ::_guard_xfg_dispatch_icall_nop(local_68,_Src,lVar8 * 2);
  iVar6 = local_60;
  lVar8 = (longlong)local_60;
  local_60 = (7 - (uint)(local_60 != 0)) + local_60;
  if (local_5c < local_60) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar6);
    puVar9 = local_68;
  }
  lVar8 = lVar8 - (ulonglong)(iVar6 != 0);
  *(undefined8 *)(puVar9 + lVar8) = 0x36006e00690057;
  *(undefined4 *)(puVar9 + lVar8 + 4) = 0x2f0034;
  puVar9[lVar8 + 6] = 0;
  iVar6 = 0;
  if (local_60 < 2) {
    lVar8 = (longlong)(int)local_40;
    local_38 = (undefined2 *)0x0;
    local_30 = CONCAT44(local_30._4_4_,(int)local_40);
    _Src_01 = puVar7;
    iVar11 = 0;
    if ((int)local_40 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_40 & 0xffffffff,0);
      _Src_01 = local_38;
      ::_guard_xfg_dispatch_icall_nop(local_38,_Src_00,lVar8 * 2);
      iVar11 = (int)local_30;
    }
    if (puVar9 != (undefined2 *)0x0) {
      FMemory::Free(puVar9);
    }
  }
  else {
    iVar5 = iVar6;
    if ((int)local_40 != 0) {
      iVar5 = (int)local_40 + -1;
    }
    if ((local_60 != 0) || (iVar1 = 1, iVar5 == 0)) {
      iVar1 = iVar6;
    }
    iVar1 = iVar1 + local_60 + iVar5;
    local_68 = puVar9;
    if (local_5c < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68,iVar1);
    }
    iVar1 = local_60;
    _Src_01 = local_68;
    iVar11 = local_60;
    if (iVar5 != 0) {
      lVar8 = (longlong)local_60;
      local_60 = iVar5 + (uint)(local_60 == 0) + local_60;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar1);
      }
      iVar11 = local_60;
      _Src_01 = local_68;
      puVar9 = local_68 + (lVar8 - (ulonglong)(iVar1 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar9,_Src_00,(longlong)iVar5 * 2);
      puVar9[iVar5] = 0;
    }
  }
  local_38 = (undefined2 *)0x0;
  local_30 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  puVar10 = local_38;
  FGenericPlatformString::Memcpy(local_38,L"_x64",10);
  lVar8 = (longlong)(int)local_30;
  local_68 = (undefined2 *)0x0;
  local_60 = (int)local_30;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_68,(5 - (uint)((int)local_30 != 0)) + (int)local_30,0);
  puVar9 = local_68;
  ::_guard_xfg_dispatch_icall_nop(local_68,puVar10,lVar8 * 2);
  iVar5 = local_60;
  lVar8 = (longlong)local_60;
  local_60 = (5 - (uint)(local_60 != 0)) + local_60;
  iVar1 = local_60;
  if (local_5c < local_60) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar5);
    puVar9 = local_68;
    iVar1 = local_60;
  }
  local_68 = (undefined2 *)0x0;
  builtin_wcsncpy(puVar9 + (lVar8 - (ulonglong)(iVar5 != 0)),L".dll",5);
  local_60 = iVar11;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,(8 - (uint)(iVar11 != 0)) + iVar11,0);
  puVar4 = local_68;
  ::_guard_xfg_dispatch_icall_nop(local_68,_Src_01,(longlong)iVar11 * 2);
  iVar5 = local_60;
  lVar8 = (longlong)local_60;
  local_60 = (8 - (uint)(local_60 != 0)) + local_60;
  if (local_5c < local_60) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar5);
    puVar4 = local_68;
  }
  lVar8 = lVar8 - (ulonglong)(iVar5 != 0);
  *(undefined8 *)(puVar4 + lVar8) = 0x6c00430076004e;
  *(undefined4 *)(puVar4 + lVar8 + 4) = 0x74006f;
  puVar4[lVar8 + 6] = 0x68;
  puVar4[lVar8 + 7] = 0;
  if (local_60 < 2) {
    local_38 = (undefined2 *)0x0;
    local_30 = CONCAT44(local_30._4_4_,iVar1);
    iVar11 = 0;
    if (iVar1 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar1,0);
      puVar7 = local_38;
      ::_guard_xfg_dispatch_icall_nop(local_38,puVar9,(longlong)iVar1 * 2);
      iVar11 = (int)local_30;
    }
    if (puVar4 != (undefined2 *)0x0) {
      FMemory::Free(puVar4);
    }
  }
  else {
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = iVar6;
    }
    if ((local_60 != 0) || (iVar1 = 1, iVar5 == 0)) {
      iVar1 = iVar6;
    }
    local_68 = puVar4;
    if (local_5c < local_60 + iVar5 + iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
    }
    iVar6 = local_60;
    puVar7 = local_68;
    iVar11 = local_60;
    if (iVar5 != 0) {
      lVar8 = (longlong)local_60;
      local_60 = local_60 + (uint)(local_60 == 0) + iVar5;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar6);
      }
      iVar11 = local_60;
      puVar7 = local_68;
      puVar10 = local_68 + (lVar8 - (ulonglong)(iVar6 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar10,puVar9,(longlong)iVar5 * 2);
      puVar10[iVar5] = 0;
      puVar10 = local_38;
    }
  }
  puVar4 = &DAT_143f3eda8;
  if (iVar11 != 0) {
    puVar4 = puVar7;
  }
  uVar3 = FWindowsPlatformProcess::GetDllHandle(puVar4);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  if (_Src_01 != (undefined2 *)0x0) {
    FMemory::Free(_Src_01);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a61f80 FUN_142a61f80 body=527 status=ok
// SIG undefined FUN_142a61f80(void)

void FUN_142a61f80(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar5 = *(longlong *)(param_1 + 0x20);
  uVar9 = (ulonglong)*(int *)(param_1 + 0x28);
  lVar7 = uVar9 * 0x1d0 + lVar5;
  if (lVar5 != lVar7) {
    do {
      plVar6 = *(longlong **)(lVar5 + 0x100);
      plVar4 = plVar6 + (longlong)*(int *)(lVar5 + 0x108) * 8;
      for (; plVar6 != plVar4; plVar6 = plVar6 + 8) {
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
                  (*(longlong **)(param_1 + 0x18),plVar6[1]);
        puVar2 = (undefined8 *)*plVar6;
        iVar3 = physx::shdfnd::atomicDecrement((int *)(puVar2 + 1));
        if ((iVar3 == 0) && (puVar2 != (undefined8 *)0x0)) {
          (**(code **)*puVar2)(puVar2,1);
        }
        puVar2 = (undefined8 *)plVar6[1];
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        plVar6[1] = 0;
        *plVar6 = 0;
      }
      lVar5 = lVar5 + 0x1d0;
    } while (lVar5 != lVar7);
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x28);
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if ((int)uVar9 != 0) {
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x198);
    do {
      if (plVar6[4] != 0) {
        FMemory::Free();
      }
      if (plVar6[2] != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      if (plVar6[-2] != 0) {
        FMemory::Free();
      }
      if (plVar6[-4] != 0) {
        FMemory::Free();
      }
      if (plVar6[-6] != 0) {
        FMemory::Free();
      }
      if (plVar6[-9] != 0) {
        FMemory::Free();
      }
      plVar4 = plVar6 + -0xb;
      if (plVar6[-0xb] != 0) {
        FMemory::Free();
      }
      lVar5 = 2;
      do {
        plVar1 = plVar4 + -2;
        plVar4 = plVar4 + -2;
        lVar5 = lVar5 + -1;
        if (*plVar1 != 0) {
          FMemory::Free();
        }
      } while (lVar5 != 0);
      FUN_142a5ed50(plVar6 + -0x13);
      FClothCollisionData::~FClothCollisionData(plVar6 + -0x1a);
      FClothCollisionData::~FClothCollisionData(plVar6 + -0x20);
      FClothCollisionData::~FClothCollisionData(plVar6 + -0x26);
      plVar6 = plVar6 + 0x3a;
      uVar8 = (int)uVar9 - 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 != 0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != iVar3) {
    TArray<FShaderPipelineCache::CompileJob,FDefaultAllocator>::ResizeTo
              ((longlong *)(param_1 + 0x20),iVar3);
  }
  return;
}



// FUNCTION 142a62190 FUN_142a62190 body=210 status=ok
// SIG undefined FUN_142a62190(void)

void FUN_142a62190(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_18 [2];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_145367800;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[2] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_145367848;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar1 + 1;
  if (*(int *)(param_1 + 0x3c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x30,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x30));
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 1) = 0;
  if (local_18 != puVar4) {
    if (plVar2 == (longlong *)0x0) goto LAB_142a62249;
    (**(code **)(*plVar2 + 0x30))(plVar2);
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
LAB_142a62249:
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 142a62270 EnableGravityOverride body=237 status=ok
// SIG undefined EnableGravityOverride(void)

void UClothingSimulationInteractorNv::EnableGravityOverride(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_18 [2];
  
  lVar4 = *param_2;
  lVar2 = param_2[1];
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = lVar4;
    *(int *)(plVar3 + 2) = (int)lVar2;
    *plVar3 = (longlong)&PTR_GetPoolName_145367770;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_1453677b8;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar1 + 1;
  if (*(int *)(param_1 + 0x3c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x30,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x30));
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 1) = 0;
  if (local_18 != puVar5) {
    if (plVar3 == (longlong *)0x0) goto LAB_142a62344;
    (**(code **)(*plVar3 + 0x30))(plVar3);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
LAB_142a62344:
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 142a623f0 FUN_142a623f0 body=94 status=ok
// SIG undefined FUN_142a623f0(void)

void FUN_142a623f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x20);
  plVar2 = plVar1 + (longlong)*(int *)(param_2 + 0x28) * 0x3a;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 0x3a) {
    FUN_142a5f560(param_2,*plVar1 + 0x50,plVar1);
  }
  return;
}



// FUNCTION 142a62490 FUN_142a62490 body=90 status=ok
// SIG undefined FUN_142a62490(void)

void FUN_142a62490(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  puVar2 = puVar1 + (longlong)*(int *)(param_2 + 0x28) * 0x3a;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 0x3a) {
    FUN_142a62770(param_2,*puVar1,puVar1);
  }
  return;
}



// FUNCTION 142a624f0 FUN_142a624f0 body=100 status=ok
// SIG undefined FUN_142a624f0(void)

void FUN_142a624f0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x20);
  lVar3 = (longlong)*(int *)(param_2 + 0x28) * 0x1d0 + lVar2;
  if (lVar2 != lVar3) {
    puVar1 = (undefined8 *)(lVar2 + 0x14);
    do {
      *puVar1 = 0;
      lVar2 = lVar2 + 0x1d0;
      *(undefined1 *)((longlong)puVar1 + -4) = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      puVar1 = puVar1 + 0x3a;
    } while (lVar2 != lVar3);
  }
  return;
}



// FUNCTION 142a62600 FUN_142a62600 body=96 status=ok
// SIG undefined FUN_142a62600(void)

undefined8 FUN_142a62600(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x20);
  plVar2 = plVar1 + (longlong)*(int *)(param_2 + 0x28) * 0x3a;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 0x3a) {
    FUN_142a5f560(param_2,*plVar1 + 0x50,plVar1);
  }
  return 1;
}



// FUNCTION 142a626a0 FUN_142a626a0 body=92 status=ok
// SIG undefined FUN_142a626a0(void)

undefined8 FUN_142a626a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  puVar2 = puVar1 + (longlong)*(int *)(param_2 + 0x28) * 0x3a;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 0x3a) {
    FUN_142a62770(param_2,*puVar1,puVar1);
  }
  return 1;
}



// FUNCTION 142a62700 FUN_142a62700 body=101 status=ok
// SIG undefined FUN_142a62700(void)

undefined8 FUN_142a62700(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)(longlong)*(int *)(param_2 + 0x28);
  lVar3 = (longlong)puVar1 * 0x1d0 + lVar2;
  if (lVar2 != lVar3) {
    puVar1 = (undefined8 *)(lVar2 + 0x14);
    do {
      *puVar1 = 0;
      lVar2 = lVar2 + 0x1d0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined1 *)((longlong)puVar1 + -4) = 0;
      puVar1 = puVar1 + 0x3a;
    } while (lVar2 != lVar3);
  }
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}



// FUNCTION 142a62770 FUN_142a62770 body=1831 status=ok
// SIG undefined FUN_142a62770(void)

void FUN_142a62770(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int *piVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  int *piVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  byte bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  byte local_res20;
  undefined4 local_178;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_100;
  undefined4 local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  longlong *local_b8;
  float local_a8;
  float local_9c;
  float local_90;
  float local_84;
  
  lVar8 = param_2[4];
  plVar1 = (longlong *)(param_3 + 200);
  FClothCollisionData::Reset(plVar1);
  lVar21 = param_2[9];
  if (lVar21 != 0) {
    plVar14 = *(longlong **)(lVar21 + 0x40);
    local_res20 = 0;
    local_b8 = plVar14 + *(int *)(lVar21 + 0x48);
    bVar23 = 0;
    if (plVar14 != local_b8) {
      do {
        lVar21 = *plVar14;
        iVar19 = -1;
        lVar17 = *(longlong *)(lVar21 + 0x90);
        if (lVar17 != 0) {
          if (*(int *)(lVar8 + 0x1d0) != *(int *)(lVar8 + 0x1fc)) {
            lVar20 = *(longlong *)(lVar8 + 0x208);
            if (*(longlong *)(lVar8 + 0x208) == 0) {
              lVar20 = lVar8 + 0x200;
            }
            iVar11 = *(int *)(lVar20 + ((longlong)((int)((ulonglong)lVar17 >> 0x20) + (int)lVar17) &
                                       (longlong)*(int *)(lVar8 + 0x210) - 1U) * 4);
            if (iVar11 != -1) {
              do {
                piVar16 = (int *)(*(longlong *)(lVar8 + 0x1c8) + (longlong)iVar11 * 0x18);
                if (*(longlong *)(*(longlong *)(lVar8 + 0x1c8) + (longlong)iVar11 * 0x18) == lVar17)
                {
                  if (iVar11 != -1) goto LAB_142a628c3;
                  break;
                }
                iVar11 = piVar16[4];
              } while (iVar11 != -1);
            }
          }
          piVar16 = (int *)0x0;
LAB_142a628c3:
          piVar12 = piVar16 + 2;
          if (piVar16 == (int *)0x0) {
            piVar12 = (int *)0x0;
          }
          if (piVar12 != (int *)0x0) {
            iVar19 = *piVar12;
          }
        }
        local_178 = 0xffffffff;
        if (iVar19 != -1) {
          local_178 = TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
                      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2 + 0x27,lVar21 + 0x90)
          ;
        }
        lVar17 = *(longlong *)(lVar21 + 0x28);
        lVar20 = (longlong)*(int *)(lVar21 + 0x30) * 0xb0 + lVar17;
        for (; lVar17 != lVar20; lVar17 = lVar17 + 0xb0) {
          plVar9 = *(longlong **)(lVar17 + 0x50);
          plVar15 = plVar9;
joined_r0x000142a62932:
          if (plVar15 == plVar9 + *(int *)(lVar17 + 0x58)) {
LAB_142a62952:
            uVar6 = *(undefined8 *)(lVar17 + 0xa0);
            iVar19 = *(int *)(param_3 + 0xd0);
            uVar7 = *(undefined4 *)(lVar17 + 0xa8);
            uVar3 = *(undefined4 *)(lVar17 + 0xac);
            *(int *)(param_3 + 0xd0) = iVar19 + 1;
            if (*(int *)(param_3 + 0xd4) < iVar19 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
              ResizeGrow(plVar1,iVar19);
            }
            lVar10 = *plVar1;
            uStack_160 = (undefined4)uVar6;
            uStack_15c = (undefined4)((ulonglong)uVar6 >> 0x20);
            local_res20 = 1;
            puVar2 = (undefined4 *)(lVar10 + (longlong)iVar19 * 0x14);
            *puVar2 = local_178;
            puVar2[1] = uVar3;
            puVar2[2] = uStack_160;
            puVar2[3] = uStack_15c;
            *(undefined4 *)(lVar10 + 0x10 + (longlong)iVar19 * 0x14) = uVar7;
          }
          else {
            if (*plVar15 == 0) goto code_r0x000142a62949;
            plVar18 = *(longlong **)(param_3 + 0x1b8);
            plVar15 = plVar18 + *(int *)(param_3 + 0x1c0);
            for (; plVar18 != plVar15; plVar18 = plVar18 + 1) {
              plVar13 = plVar9;
              do {
                if (*plVar13 == *plVar18) goto LAB_142a62952;
                plVar13 = plVar13 + 1;
              } while (plVar13 != plVar9 + *(int *)(lVar17 + 0x58));
            }
          }
        }
        lVar17 = *(longlong *)(lVar21 + 0x48);
        lVar20 = (longlong)*(int *)(lVar21 + 0x50) * 0xd0 + lVar17;
        if (lVar17 != lVar20) {
          pfVar22 = (float *)(lVar17 + 0xb4);
          do {
            plVar9 = *(longlong **)(pfVar22 + -0x19);
            plVar15 = plVar9;
joined_r0x000142a62a12:
            if (plVar15 == plVar9 + (int)pfVar22[-0x17]) {
LAB_142a62a32:
              local_100 = 0;
              local_f8 = 0x3f800000;
              FRotator::RotateVector(pfVar22 + 2,&local_f0,&local_100);
              fVar4 = pfVar22[-1];
              fVar5 = *pfVar22;
              iVar19 = *(int *)(param_3 + 0xd0);
              fVar24 = pfVar22[6] * 0.5;
              fVar27 = local_f0 * fVar24;
              fVar28 = local_ec * fVar24;
              fVar25 = pfVar22[1] - local_e8 * fVar24;
              fVar26 = pfVar22[1] + local_e8 * fVar24;
              fVar24 = pfVar22[5];
              *(int *)(param_3 + 0xd0) = iVar19 + 1;
              local_a8 = fVar25;
              local_9c = fVar26;
              if (*(int *)(param_3 + 0xd4) < iVar19 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
                ResizeGrow(plVar1,iVar19);
              }
              lVar10 = *plVar1;
              puVar2 = (undefined4 *)(lVar10 + (longlong)iVar19 * 0x14);
              *puVar2 = local_178;
              puVar2[1] = fVar24;
              puVar2[2] = fVar4 - fVar27;
              puVar2[3] = fVar5 - fVar28;
              *(float *)(lVar10 + 0x10 + (longlong)iVar19 * 0x14) = fVar25;
              iVar19 = *(int *)(param_3 + 0xd0);
              *(int *)(param_3 + 0xd0) = iVar19 + 1;
              if (*(int *)(param_3 + 0xd4) < iVar19 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
                ResizeGrow(plVar1,iVar19);
              }
              lVar10 = *plVar1;
              puVar2 = (undefined4 *)(lVar10 + (longlong)iVar19 * 0x14);
              *puVar2 = local_178;
              puVar2[1] = fVar24;
              puVar2[2] = fVar4 + fVar27;
              puVar2[3] = fVar5 + fVar28;
              *(float *)(lVar10 + 0x10 + (longlong)iVar19 * 0x14) = fVar26;
              iVar19 = *(int *)(param_3 + 0xd0);
              iVar11 = *(int *)(param_3 + 0xe0);
              *(int *)(param_3 + 0xe0) = iVar11 + 1;
              if (*(int *)(param_3 + 0xe4) < iVar11 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          ((longlong *)(param_3 + 0xd8),iVar11);
              }
              local_res20 = 1;
              *(ulonglong *)(*(longlong *)(param_3 + 0xd8) + (longlong)iVar11 * 8) =
                   CONCAT44(iVar19 + -1,iVar19 + -2);
            }
            else {
              if (*plVar15 == 0) goto code_r0x000142a62a29;
              plVar18 = *(longlong **)(param_3 + 0x1b8);
              plVar15 = plVar18 + *(int *)(param_3 + 0x1c0);
              for (; plVar18 != plVar15; plVar18 = plVar18 + 1) {
                plVar13 = plVar9;
                do {
                  if (*plVar13 == *plVar18) goto LAB_142a62a32;
                  plVar13 = plVar13 + 1;
                } while (plVar13 != plVar9 + (int)pfVar22[-0x17]);
              }
            }
            lVar17 = lVar17 + 0xd0;
            pfVar22 = pfVar22 + 0x34;
          } while (lVar17 != lVar20);
        }
        lVar17 = *(longlong *)(lVar21 + 0x68);
        lVar21 = (longlong)*(int *)(lVar21 + 0x70) * 0x88 + lVar17;
        if (lVar17 != lVar21) {
          local_res20 = 1;
          pfVar22 = (float *)(lVar17 + 0x68);
          do {
            local_e0 = 0;
            local_d8 = 0x3f800000;
            FRotator::RotateVector(pfVar22 + 1,&local_d0,&local_e0);
            fVar4 = pfVar22[-2];
            fVar5 = pfVar22[-1];
            iVar19 = *(int *)(param_3 + 0xd0);
            fVar24 = pfVar22[6] * 0.5;
            fVar26 = local_d0 * fVar24;
            fVar27 = local_cc * fVar24;
            local_90 = *pfVar22 + local_c8 * fVar24;
            local_84 = *pfVar22 - local_c8 * fVar24;
            fVar24 = pfVar22[4];
            fVar25 = pfVar22[5];
            *(int *)(param_3 + 0xd0) = iVar19 + 1;
            if (*(int *)(param_3 + 0xd4) < iVar19 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
              ResizeGrow(plVar1,iVar19);
            }
            lVar20 = *plVar1;
            puVar2 = (undefined4 *)(lVar20 + (longlong)iVar19 * 0x14);
            *puVar2 = local_178;
            puVar2[1] = fVar24;
            puVar2[2] = fVar4 + fVar26;
            puVar2[3] = fVar5 + fVar27;
            *(float *)(lVar20 + 0x10 + (longlong)iVar19 * 0x14) = local_90;
            iVar19 = *(int *)(param_3 + 0xd0);
            *(int *)(param_3 + 0xd0) = iVar19 + 1;
            if (*(int *)(param_3 + 0xd4) < iVar19 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
              ResizeGrow(plVar1,iVar19);
            }
            lVar20 = *plVar1;
            puVar2 = (undefined4 *)(lVar20 + (longlong)iVar19 * 0x14);
            *puVar2 = local_178;
            puVar2[1] = fVar25;
            puVar2[2] = fVar4 - fVar26;
            puVar2[3] = fVar5 - fVar27;
            *(float *)(lVar20 + 0x10 + (longlong)iVar19 * 0x14) = local_84;
            iVar19 = *(int *)(param_3 + 0xd0);
            iVar11 = *(int *)(param_3 + 0xe0);
            *(int *)(param_3 + 0xe0) = iVar11 + 1;
            if (*(int *)(param_3 + 0xe4) < iVar11 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        ((longlong *)(param_3 + 0xd8),iVar11);
            }
            lVar17 = lVar17 + 0x88;
            pfVar22 = pfVar22 + 0x22;
            *(ulonglong *)(*(longlong *)(param_3 + 0xd8) + (longlong)iVar11 * 8) =
                 CONCAT44(iVar19 + -1,iVar19 + -2);
          } while (lVar17 != lVar21);
        }
        plVar14 = plVar14 + 1;
        bVar23 = local_res20;
      } while (plVar14 != local_b8);
    }
    *(byte *)(param_3 + 0xf8) = *(byte *)(param_3 + 0xf8) | bVar23;
    (**(code **)(*param_2 + 0x290))(param_2,lVar8);
  }
  return;
code_r0x000142a62949:
  plVar15 = plVar15 + 1;
  goto joined_r0x000142a62932;
code_r0x000142a62a29:
  plVar15 = plVar15 + 1;
  goto joined_r0x000142a62a12;
}



// FUNCTION 142a62ea0 FUN_142a62ea0 body=2413 status=ok
// SIG undefined FUN_142a62ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a62ea0(longlong param_1,longlong param_2,float param_3,longlong param_4)

{
  longlong *plVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Src;
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
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 uVar23;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  uint uVar30;
  float *pfVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  int iVar35;
  float fVar36;
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar42 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
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
  longlong local_118;
  longlong local_110;
  undefined4 local_108;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  uVar19 = *(undefined8 *)(param_2 + 0x218);
  *(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_4 + 0x28) = uVar19;
  uVar37 = *(undefined4 *)(param_2 + 0x224);
  uVar17 = *(undefined4 *)(param_2 + 0x228);
  uVar18 = *(undefined4 *)(param_2 + 0x22c);
  *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(param_2 + 0x220);
  *(undefined4 *)(param_4 + 0x34) = uVar37;
  *(undefined4 *)(param_4 + 0x38) = uVar17;
  *(undefined4 *)(param_4 + 0x3c) = uVar18;
  uVar19 = *(undefined8 *)(param_2 + 0x238);
  *(undefined8 *)(param_4 + 0x40) = *(undefined8 *)(param_2 + 0x230);
  *(undefined8 *)(param_4 + 0x48) = uVar19;
  *(undefined4 *)(param_4 + 0x50) = *(undefined4 *)(param_2 + 0x83c);
  FUN_1427dd660(param_2,param_4 + 0x54,param_4 + 0x6c);
  lVar27 = *(longlong *)(param_2 + 0x718);
  lVar26 = FWeakObjectPtr::Get(param_2 + 0x720);
  iVar35 = 0;
  if (lVar26 == 0) {
    puVar28 = (undefined8 *)(param_4 + 0x10);
    puVar29 = (undefined8 *)(param_2 + 0x728 + (longlong)*(int *)(param_2 + 0x770) * 0x10);
    if (puVar28 != puVar29) {
      iVar35 = *(int *)(puVar29 + 1);
      _Src = (void *)*puVar29;
      *(int *)(param_4 + 0x18) = iVar35;
      if ((iVar35 == 0) && (*(int *)(param_4 + 0x1c) == 0)) {
        *(undefined4 *)(param_4 + 0x1c) = 0;
      }
      else {
        TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(puVar28,iVar35);
        _guard_xfg_dispatch_icall_nop((void *)*puVar28,_Src,(longlong)iVar35 * 0x30);
      }
    }
  }
  else {
    iVar24 = *(int *)(param_2 + 0x790);
    lVar32 = (longlong)iVar24;
    if (iVar24 == 0) {
      if (*(longlong *)(param_2 + 0x718) != 0) {
        iVar35 = *(int *)(*(longlong *)(param_2 + 0x718) + 0x160);
        *(undefined4 *)(param_4 + 0x18) = 0;
        if (*(int *)(param_4 + 0x1c) != iVar35) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(param_4 + 0x10,iVar35);
        }
        TArray<FTransform,FDefaultAllocator>::AddDefaulted(param_4 + 0x10,iVar35);
      }
    }
    else {
      plVar1 = (longlong *)(param_4 + 0x10);
      *(undefined4 *)(param_4 + 0x18) = 0;
      if (*(int *)(param_4 + 0x1c) < iVar24) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(plVar1,iVar24);
      }
      TArray<FTransform,FDefaultAllocator>::AddDefaulted(plVar1,iVar24);
      fVar22 = fRam0000000146b29b0c;
      fVar21 = fRam0000000146b29b08;
      fVar20 = fRam0000000146b29b04;
      fVar36 = _DAT_146b29b00;
      local_110 = lVar32;
      if (0 < iVar24) {
        lVar34 = 0;
        lVar33 = 0;
        local_118 = 0;
        do {
          fVar55 = fRam0000000146b29b28;
          fVar54 = fRam0000000146b29b24;
          fVar47 = _DAT_146b29b20;
          fVar71 = fRam0000000146b29ac8;
          fVar70 = fRam0000000146b29ac4;
          fVar69 = _DAT_146b29ac0;
          if ((lVar34 < 0) || (*(int *)(param_2 + 0x790) <= iVar35)) {
LAB_142a630a7:
            if (lVar27 != 0) {
              lVar5 = *plVar1;
              lVar6 = *(longlong *)(lVar27 + 0x168);
              iVar24 = *(int *)(*(longlong *)(lVar27 + 0x158) + 8 + local_118);
              if (iVar24 == -1) {
                uVar19 = ((undefined8 *)(lVar33 + lVar6))[1];
                *(undefined8 *)(lVar5 + lVar33) = *(undefined8 *)(lVar33 + lVar6);
                ((undefined8 *)(lVar5 + lVar33))[1] = uVar19;
                puVar3 = (undefined4 *)(lVar33 + 0x10 + lVar6);
                uVar37 = puVar3[1];
                uVar17 = puVar3[2];
                uVar18 = puVar3[3];
                puVar4 = (undefined4 *)(lVar5 + 0x10 + lVar33);
                *puVar4 = *puVar3;
                puVar4[1] = uVar37;
                puVar4[2] = uVar17;
                puVar4[3] = uVar18;
                puVar3 = (undefined4 *)(lVar33 + 0x20 + lVar6);
                uVar37 = puVar3[1];
                uVar17 = puVar3[2];
                uVar18 = puVar3[3];
                puVar4 = (undefined4 *)(lVar5 + 0x20 + lVar33);
                *puVar4 = *puVar3;
                puVar4[1] = uVar37;
                puVar4[2] = uVar17;
                puVar4[3] = uVar18;
              }
              else {
                auVar38 = *(undefined1 (*) [16])(lVar33 + 0x20 + lVar6);
                fVar7 = auVar38._0_4_;
                fVar9 = auVar38._4_4_;
                fVar11 = auVar38._8_4_;
                fVar13 = auVar38._12_4_;
                pfVar31 = (float *)((longlong)iVar24 * 0x30 + lVar5);
                auVar39 = *(undefined1 (*) [16])(pfVar31 + 8);
                fVar8 = auVar39._0_4_;
                fVar10 = auVar39._4_4_;
                fVar12 = auVar39._8_4_;
                fVar14 = auVar39._12_4_;
                auVar38 = minps(auVar39,auVar38);
                auVar39._4_4_ = -(uint)(auVar38._4_4_ < fRam0000000146b29b24);
                auVar39._0_4_ = -(uint)(auVar38._0_4_ < _DAT_146b29b20);
                auVar39._8_4_ = -(uint)(auVar38._8_4_ < fRam0000000146b29b28);
                auVar39._12_4_ = -(uint)(auVar38._12_4_ < fRam0000000146b29b2c);
                iVar24 = movmskps((int)*(longlong *)(lVar27 + 0x158),auVar39);
                if (iVar24 == 0) {
                  pfVar2 = (float *)(lVar33 + lVar6);
                  fVar69 = *pfVar2;
                  fVar70 = pfVar2[1];
                  fVar71 = pfVar2[2];
                  fVar47 = pfVar2[3];
                  fVar54 = *pfVar31;
                  fVar55 = pfVar31[1];
                  fVar56 = pfVar31[2];
                  fVar43 = pfVar31[3];
                  fVar58 = pfVar31[4] * fVar7;
                  fVar59 = pfVar31[5] * fVar9;
                  fVar60 = pfVar31[6] * fVar11;
                  fVar61 = pfVar31[7] * fVar13;
                  fVar40 = fVar70 * fVar43 * fRam0000000146b29af4;
                  fVar51 = fVar70 * fVar54 * fRam0000000146b29af8;
                  fVar48 = fVar70 * fVar55 * fRam0000000146b29afc;
                  fVar44 = fVar71 * fVar54 * fRam0000000146b29ae4;
                  fVar41 = fVar71 * fVar43 * fRam0000000146b29ae8;
                  fVar49 = fVar71 * fVar56 * fRam0000000146b29aec;
                  fVar52 = fVar60 * fVar70 - fVar59 * fVar71;
                  fVar50 = fVar58 * fVar71 - fVar60 * fVar69;
                  fVar53 = fVar59 * fVar69 - fVar58 * fVar70;
                  fVar57 = fVar61 * fVar47 - fVar61 * fVar47;
                  fVar52 = fVar52 + fVar52;
                  fVar50 = fVar50 + fVar50;
                  fVar53 = fVar53 + fVar53;
                  fVar57 = fVar57 + fVar57;
                  pfVar31 = (float *)(lVar33 + 0x10 + lVar6);
                  fVar45 = *pfVar31;
                  fVar15 = pfVar31[1];
                  fVar16 = pfVar31[2];
                  fVar46 = pfVar31[3];
                  pfVar31 = (float *)(lVar5 + lVar33);
                  *pfVar31 = fVar43 * fVar69 * fVar36 + fVar47 * fVar54 +
                             fVar70 * fVar56 * _DAT_146b29af0 + fVar71 * fVar55 * _DAT_146b29ae0;
                  pfVar31[1] = fVar56 * fVar69 * fVar20 + fVar47 * fVar55 + fVar40 + fVar44;
                  pfVar31[2] = fVar55 * fVar69 * fVar21 + fVar47 * fVar56 + fVar51 + fVar41;
                  pfVar31[3] = fVar54 * fVar69 * fVar22 + fVar47 * fVar43 + fVar48 + fVar49;
                  pfVar31 = (float *)(lVar5 + 0x20 + lVar33);
                  *pfVar31 = fVar8 * fVar7;
                  pfVar31[1] = fVar10 * fVar9;
                  pfVar31[2] = fVar12 * fVar11;
                  pfVar31[3] = fVar14 * fVar13;
                  pfVar31 = (float *)(lVar5 + 0x10 + lVar33);
                  *pfVar31 = (fVar53 * fVar70 - fVar50 * fVar71) + fVar52 * fVar47 + fVar58 + fVar45
                  ;
                  pfVar31[1] = (fVar52 * fVar71 - fVar53 * fVar69) + fVar50 * fVar47 + fVar59 +
                               fVar15;
                  pfVar31[2] = (fVar50 * fVar69 - fVar52 * fVar70) + fVar53 * fVar47 + fVar60 +
                               fVar16;
                  pfVar31[3] = (fVar57 * fVar47 - fVar57 * fVar47) + fVar57 * fVar47 + fVar61 +
                               fVar46;
                }
                else {
                  pfVar2 = (float *)(lVar33 + lVar6);
                  fVar56 = *pfVar2;
                  fVar43 = pfVar2[1];
                  fVar45 = pfVar2[2];
                  fVar15 = pfVar2[3];
                  fVar48 = fVar43 + fVar43;
                  fVar51 = fVar45 + fVar45;
                  fVar52 = (fVar56 + fVar56) * fVar56;
                  fVar49 = (fVar56 + fVar56) * fVar15;
                  fVar16 = *pfVar31;
                  fVar46 = pfVar31[1];
                  fVar44 = pfVar31[2];
                  fVar41 = pfVar31[3];
                  fVar66 = (fVar51 * fVar15 + fVar48 * fVar56) * fVar7;
                  fVar67 = (fVar49 + fVar51 * fVar43) * fVar9;
                  fVar68 = (fVar48 * fVar15 + fVar51 * fVar56) * fVar11;
                  fVar57 = fVar9 * (fVar48 * fVar56 - fVar51 * fVar15);
                  fVar59 = fVar11 * (fVar51 * fVar43 - fVar49);
                  fVar61 = fVar7 * (fVar51 * fVar56 - fVar48 * fVar15);
                  pfVar2 = (float *)(lVar33 + 0x10 + lVar6);
                  fVar56 = *pfVar2;
                  fVar15 = pfVar2[1];
                  fVar49 = pfVar2[2];
                  fVar40 = (float)((uint)((_DAT_146b29ac0 - (fVar51 * fVar45 + fVar48 * fVar43)) *
                                         fVar7) & _DAT_146b29ad0);
                  fVar51 = (float)((uint)((fRam0000000146b29ac4 - (fVar51 * fVar45 + fVar52)) *
                                         fVar9) & uRam0000000146b29ad4);
                  fVar48 = (float)((uint)((fRam0000000146b29ac8 - (fVar48 * fVar43 + fVar52)) *
                                         fVar11) & uRam0000000146b29ad8);
                  fVar52 = (float)((uint)((fRam0000000146b29acc - (fVar52 + fVar52)) * fVar13) &
                                  uRam0000000146b29adc);
                  fVar43 = fVar46 + fVar46;
                  fVar45 = fVar44 + fVar44;
                  fVar53 = (fVar16 + fVar16) * fVar16;
                  fVar50 = fVar41 * (fVar16 + fVar16);
                  fVar63 = (fVar41 * fVar45 + fVar16 * fVar43) * fVar8;
                  fVar64 = (fVar50 + fVar46 * fVar45) * fVar10;
                  fVar65 = (fVar41 * fVar43 + fVar16 * fVar45) * fVar12;
                  fVar58 = fVar10 * (fVar16 * fVar43 - fVar41 * fVar45);
                  fVar60 = fVar12 * (fVar46 * fVar45 - fVar50);
                  fVar62 = fVar8 * (fVar16 * fVar45 - fVar41 * fVar43);
                  fVar41 = (float)((uint)((_DAT_146b29ac0 - (fVar45 * fVar44 + fVar43 * fVar46)) *
                                         fVar8) & _DAT_146b29ad0);
                  fVar44 = (float)((uint)((fRam0000000146b29ac4 - (fVar45 * fVar44 + fVar53)) *
                                         fVar10) & uRam0000000146b29ad4);
                  fVar46 = (float)((uint)((fRam0000000146b29ac8 - (fVar43 * fVar46 + fVar53)) *
                                         fVar12) & uRam0000000146b29ad8);
                  fVar50 = (float)((uint)((fRam0000000146b29acc - (fVar53 + fVar53)) * fVar14) &
                                  uRam0000000146b29adc);
                  fVar43 = pfVar31[4];
                  fVar45 = pfVar31[5];
                  fVar16 = pfVar31[6];
                  local_158 = fVar63 * fVar57 + fVar41 * fVar40 + fVar62 * fVar68 + fVar50 * fVar56;
                  fStack_154 = fVar63 * fVar51 + fVar41 * fVar66 + fVar62 * fVar59 + fVar50 * fVar15
                  ;
                  fStack_150 = fVar63 * fVar67 + fVar41 * fVar61 + fVar62 * fVar48 + fVar50 * fVar49
                  ;
                  fStack_14c = fVar63 * fVar52 + fVar41 * fVar52 + fVar62 * fVar52 +
                               fVar50 * fRam0000000146b29acc;
                  local_148 = fVar44 * fVar57 + fVar58 * fVar40 + fVar64 * fVar68 + fVar50 * fVar56;
                  fStack_144 = fVar44 * fVar51 + fVar58 * fVar66 + fVar64 * fVar59 + fVar50 * fVar15
                  ;
                  fStack_140 = fVar44 * fVar67 + fVar58 * fVar61 + fVar64 * fVar48 + fVar50 * fVar49
                  ;
                  fStack_13c = fVar44 * fVar52 + fVar58 * fVar52 + fVar64 * fVar52 +
                               fVar50 * fRam0000000146b29acc;
                  local_138 = fVar60 * fVar57 + fVar65 * fVar40 + fVar46 * fVar68 + fVar50 * fVar56;
                  fStack_134 = fVar60 * fVar51 + fVar65 * fVar66 + fVar46 * fVar59 + fVar50 * fVar15
                  ;
                  fStack_130 = fVar60 * fVar67 + fVar65 * fVar61 + fVar46 * fVar48 + fVar50 * fVar49
                  ;
                  fStack_12c = fVar60 * fVar52 + fVar65 * fVar52 + fVar46 * fVar52 +
                               fVar50 * fRam0000000146b29acc;
                  local_128 = fVar45 * fVar57 + fVar43 * fVar40 + fVar16 * fVar68 +
                              fRam0000000146b29acc * fVar56;
                  fStack_124 = fVar45 * fVar51 + fVar43 * fVar66 + fVar16 * fVar59 +
                               fRam0000000146b29acc * fVar15;
                  fStack_120 = fVar45 * fVar67 + fVar43 * fVar61 + fVar16 * fVar48 +
                               fRam0000000146b29acc * fVar49;
                  fStack_11c = fVar45 * fVar52 + fVar43 * fVar52 + fVar16 * fVar52 +
                               fRam0000000146b29acc * fRam0000000146b29acc;
                  FMatrix::RemoveScaling(&local_158);
                  fVar69 = (float)(-(uint)(fVar47 <= fVar8 * fVar7) &
                                   (_DAT_146b29b10 ^ (uint)fVar69) ^ _DAT_146b29b10);
                  fVar70 = (float)(-(uint)(fVar54 <= fVar10 * fVar9) &
                                   (uRam0000000146b29b14 ^ (uint)fVar70) ^ uRam0000000146b29b14);
                  fVar71 = (float)(-(uint)(fVar55 <= fVar12 * fVar11) &
                                   (uRam0000000146b29b18 ^ (uint)fVar71) ^ uRam0000000146b29b18);
                  local_158 = local_158 * fVar69;
                  fStack_150 = fStack_150 * fVar69;
                  fStack_154 = fStack_154 * fVar69;
                  fStack_140 = fStack_140 * fVar70;
                  fStack_144 = fStack_144 * fVar70;
                  local_148 = local_148 * fVar70;
                  fStack_130 = fStack_130 * fVar71;
                  local_138 = local_138 * fVar71;
                  fStack_134 = fStack_134 * fVar71;
                  FQuat::FQuat(&local_f8,&local_158);
                  lVar32 = *plVar1;
                  auVar42._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
                  auVar42._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
                  auVar42._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
                  auVar42._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
                  fVar54 = auVar42._4_4_ + auVar42._0_4_;
                  fVar55 = auVar42._8_4_ + auVar42._4_4_;
                  fVar56 = auVar42._12_4_ + auVar42._8_4_;
                  fVar43 = auVar42._0_4_ + auVar42._12_4_;
                  auVar38._4_4_ = fVar55;
                  auVar38._0_4_ = fVar54;
                  auVar38._8_4_ = fVar56;
                  auVar38._12_4_ = fVar43;
                  auVar38 = rsqrtps(auVar42,auVar38);
                  fVar69 = auVar38._0_4_;
                  fVar70 = auVar38._4_4_;
                  fVar71 = auVar38._8_4_;
                  fVar47 = auVar38._12_4_;
                  fVar69 = (_DAT_146b29ab0 - fVar69 * fVar69 * fVar54 * _DAT_146b29ab0) * fVar69 +
                           fVar69;
                  fVar70 = (fRam0000000146b29ab4 - fVar70 * fVar70 * fVar55 * fRam0000000146b29ab4)
                           * fVar70 + fVar70;
                  fVar71 = (fRam0000000146b29ab8 - fVar71 * fVar71 * fVar56 * fRam0000000146b29ab8)
                           * fVar71 + fVar71;
                  fVar47 = (fRam0000000146b29abc - fVar47 * fVar47 * fVar43 * fRam0000000146b29abc)
                           * fVar47 + fVar47;
                  local_f8 = (float)(((uint)(((_DAT_146b29ab0 -
                                              fVar69 * fVar69 * fVar54 * _DAT_146b29ab0) * fVar69 +
                                             fVar69) * local_f8) ^ _DAT_146b29aa0) &
                                     -(uint)(1e-08 <= fVar54) ^ _DAT_146b29aa0);
                  fStack_f4 = (float)(((uint)(((fRam0000000146b29ab4 -
                                               fVar70 * fVar70 * fVar55 * fRam0000000146b29ab4) *
                                               fVar70 + fVar70) * fStack_f4) ^ uRam0000000146b29aa4)
                                      & -(uint)(1e-08 <= fVar55) ^ uRam0000000146b29aa4);
                  fStack_f0 = (float)(((uint)(((fRam0000000146b29ab8 -
                                               fVar71 * fVar71 * fVar56 * fRam0000000146b29ab8) *
                                               fVar71 + fVar71) * fStack_f0) ^ uRam0000000146b29aa8)
                                      & -(uint)(1e-08 <= fVar56) ^ uRam0000000146b29aa8);
                  fStack_ec = (float)(((uint)(((fRam0000000146b29abc -
                                               fVar47 * fVar47 * fVar43 * fRam0000000146b29abc) *
                                               fVar47 + fVar47) * fStack_ec) ^ uRam0000000146b29aac)
                                      & -(uint)(1e-08 <= fVar43) ^ uRam0000000146b29aac);
                  pfVar31 = (float *)(lVar32 + 0x10 + lVar33);
                  *pfVar31 = local_128;
                  pfVar31[1] = fStack_124;
                  pfVar31[2] = fStack_120;
                  pfVar31[3] = 0.0;
                  pfVar31 = (float *)(lVar32 + lVar33);
                  *pfVar31 = local_f8;
                  pfVar31[1] = fStack_f4;
                  pfVar31[2] = fStack_f0;
                  pfVar31[3] = fStack_ec;
                  pfVar31 = (float *)(lVar32 + 0x20 + lVar33);
                  *pfVar31 = fVar8 * fVar7;
                  pfVar31[1] = fVar10 * fVar9;
                  pfVar31[2] = fVar12 * fVar11;
                  pfVar31[3] = fVar14 * fVar13;
                  lVar32 = local_110;
                }
              }
            }
          }
          else {
            iVar24 = *(int *)(*(longlong *)(param_2 + 0x788) + lVar34 * 4);
            if ((iVar24 == -1) ||
               (*(int *)(lVar26 + ((longlong)*(int *)(lVar26 + 0x770) + 0x73) * 0x10) <= iVar24))
            goto LAB_142a630a7;
            lVar5 = *plVar1;
            puVar28 = (undefined8 *)
                      ((longlong)iVar24 * 0x30 +
                      *(longlong *)(lVar26 + 0x728 + (longlong)*(int *)(lVar26 + 0x770) * 0x10));
            uVar19 = puVar28[1];
            *(undefined8 *)(lVar33 + lVar5) = *puVar28;
            ((undefined8 *)(lVar33 + lVar5))[1] = uVar19;
            uVar37 = *(undefined4 *)((longlong)puVar28 + 0x14);
            uVar17 = *(undefined4 *)(puVar28 + 3);
            uVar18 = *(undefined4 *)((longlong)puVar28 + 0x1c);
            puVar3 = (undefined4 *)(lVar33 + 0x10 + lVar5);
            *puVar3 = *(undefined4 *)(puVar28 + 2);
            puVar3[1] = uVar37;
            puVar3[2] = uVar17;
            puVar3[3] = uVar18;
            uVar37 = *(undefined4 *)((longlong)puVar28 + 0x24);
            uVar17 = *(undefined4 *)(puVar28 + 5);
            uVar18 = *(undefined4 *)((longlong)puVar28 + 0x2c);
            puVar3 = (undefined4 *)(lVar33 + 0x20 + lVar5);
            *puVar3 = *(undefined4 *)(puVar28 + 4);
            puVar3[1] = uVar37;
            puVar3[2] = uVar17;
            puVar3[3] = uVar18;
          }
          local_118 = local_118 + 0x10;
          iVar35 = iVar35 + 1;
          lVar34 = lVar34 + 1;
          lVar33 = lVar33 + 0x30;
        } while (lVar34 < lVar32);
      }
    }
  }
  lVar27 = 0;
  if (*(longlong *)(param_2 + 0x120) == 0) {
    FUN_1423407b0(param_2);
  }
  fVar36 = param_3;
  if (*(float *)(param_1 + 8) <= param_3) {
    fVar36 = *(float *)(param_1 + 8);
  }
  *(float *)(param_4 + 8) = fVar36;
  uVar23 = 1;
  if (param_3 <= *DAT_146b29bb0 * *(float *)(param_1 + 8)) {
    uVar23 = *(undefined1 *)(param_2 + 0xb17);
  }
  *(undefined1 *)(param_4 + 0x70) = uVar23;
  uVar37 = FUN_1427db9c0(param_2);
  local_108 = 0x44754000;
  *(undefined4 *)(param_4 + 0x74) = uVar37;
  lVar26 = *(longlong *)(param_2 + 0x120);
  if ((lVar26 != 0) || (lVar26 = FUN_1423407b0(param_2), lVar26 != 0)) {
    local_108 = FUN_1428cc5b0(lVar26);
  }
  *(undefined8 *)(param_4 + 0x60) = 0;
  *(undefined4 *)(param_4 + 0x68) = local_108;
  iVar35 = *(int *)(param_2 + 0xc);
  if (iVar35 < (int)DAT_1469e91c4) {
    uVar30 = iVar35 >> 0x1f & 0xffff;
    uVar25 = iVar35 + uVar30;
    lVar27 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar25 >> 0x10) * 8) +
             (longlong)(int)((uVar25 & 0xffff) - uVar30) * 0x18;
  }
  if ((*(uint *)(lVar27 + 8) >> 0x1d & 1) != 0) {
    *(undefined4 *)(param_4 + 0x18) = 0;
    if ((*(int *)(param_4 + 0x1c) < 0) && (*(int *)(param_4 + 0x1c) != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_4 + 0x10,0);
    }
  }
  if (*(int *)(param_4 + 0x18) == 0) {
    FWeakObjectPtr::Get(param_2 + 0x720);
    *(undefined4 *)(param_4 + 0x18) = 0;
    if ((*(int *)(param_4 + 0x1c) < 0) && (*(int *)(param_4 + 0x1c) != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_4 + 0x10,0);
    }
  }
  return;
}



// FUNCTION 142a63810 FUN_142a63810 body=80 status=ok
// SIG undefined FUN_142a63810(void)

void FUN_142a63810(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  FUN_142a62ea0();
  *(undefined4 *)(param_4 + 0x80) = 0;
  if (0x7fffffff < *(uint *)(param_4 + 0x84)) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_4 + 0x78,0);
  }
  FUN_1423add80(param_2,param_4 + 0x78,*(undefined4 *)(param_2 + 0x83c));
  return;
}



// FUNCTION 142a63860 FUN_142a63860 body=77 status=ok
// SIG undefined FUN_142a63860(void)

void FUN_142a63860(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FArchive::UsingCustomVersion(param_2,&DAT_14667c170);
  iVar1 = FArchive::CustomVer(param_2,&DAT_14667c170);
  if (0 < iVar1) {
    FUN_142a5f180(param_2,param_1 + 0xf8);
  }
  return;
}



// FUNCTION 142a638b0 FUN_142a638b0 body=2161 status=ok
// SIG undefined FUN_142a638b0(void)

undefined8 * FUN_142a638b0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulonglong local_res18;
  float local_res20;
  undefined8 local_178;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float local_160;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  longlong local_128;
  undefined8 local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_f4;
  float local_e8;
  
  local_res18 = local_res18 & 0xffffffff00000000;
  local_e8 = 0.0;
  local_f4 = 0.0;
  local_178 = 0;
  fStack_170 = 0.0;
  fStack_16c = 0.0;
  fStack_168 = 0.0;
  fStack_164 = 0.0;
  local_160 = 0.0;
  cVar2 = FWeakObjectPtr::IsValid(param_3 + 0x720);
  lVar3 = param_3;
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_3 + 0x720);
  }
  if (*(int *)(lVar3 + ((longlong)*(int *)(lVar3 + 0x770) + 0x73) * 0x10) == 0) {
    local_res18 = *(ulonglong *)(lVar3 + 0x18);
    FName::ToString(&local_res18,&local_118);
    bVar9 = *(longlong *)(lVar3 + 0x718) == 0;
    if (bVar9) {
      local_128 = 0;
      local_120 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
      FGenericPlatformString::Memcpy(local_128,L"No Mesh",0x10);
      pfVar4 = (float *)&local_128;
    }
    else {
      local_res18 = *(ulonglong *)(*(longlong *)(lVar3 + 0x718) + 0x18);
      FName::ToString(&local_res18,&local_138);
      pfVar4 = &local_138;
    }
    lVar3 = *(longlong *)pfVar4;
    pfVar4[0] = 0.0;
    pfVar4[1] = 0.0;
    pfVar4[2] = 0.0;
    pfVar4[3] = 0.0;
    if ((bVar9) && (local_128 != 0)) {
      FMemory::Free();
    }
    if ((!bVar9) && (CONCAT44(fStack_134,local_138) != 0)) {
      FMemory::Free();
    }
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((longlong)param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
    if (CONCAT44(fStack_114,local_118) != 0) {
      FMemory::Free();
    }
  }
  else {
    plVar6 = *(longlong **)(param_1 + 0x20);
    plVar8 = plVar6 + (longlong)*(int *)(param_1 + 0x28) * 0x3a;
    if (plVar6 != plVar8) {
      bVar9 = true;
      do {
        if ((int)plVar6[0xc] != -1) {
          iVar1 = *(int *)(*plVar6 + 0x158);
          iVar7 = iVar1;
          if (cVar2 == '\0') {
LAB_142a63b1e:
            if (iVar7 == -1) goto LAB_142a63b43;
            pfVar4 = (float *)((longlong)iVar7 * 0x30 +
                              *(longlong *)
                               (lVar3 + 0x728 + (longlong)*(int *)(lVar3 + 0x770) * 0x10));
          }
          else {
            if (iVar1 < *(int *)(param_3 + 0x790)) {
              iVar7 = 0;
              if (*(int *)(*(longlong *)(param_3 + 0x788) + (longlong)iVar1 * 4) != -1) {
                iVar7 = *(int *)(*(longlong *)(param_3 + 0x788) + (longlong)iVar1 * 4);
              }
              goto LAB_142a63b1e;
            }
LAB_142a63b43:
            pfVar4 = (float *)&DAT_1468b5b70;
          }
          fVar26 = *pfVar4;
          fVar28 = pfVar4[1];
          fVar29 = pfVar4[2];
          fVar27 = pfVar4[3];
          fVar10 = pfVar4[4];
          fVar11 = pfVar4[5];
          fVar12 = pfVar4[6];
          fVar13 = pfVar4[7];
          fVar15 = pfVar4[8];
          fVar17 = pfVar4[9];
          fVar19 = pfVar4[10];
          fVar21 = pfVar4[0xb];
          lVar5 = (longlong)(int)plVar6[0xc] * 0x40 + plVar6[0x20];
          pfVar4 = (float *)(**(code **)(**(longlong **)(lVar5 + 8) + 0x308))();
          fVar22 = *pfVar4 * fVar15;
          fVar23 = pfVar4[1] * fVar17;
          fVar24 = pfVar4[2] * fVar19;
          fVar25 = fVar21 * 0.0;
          fVar14 = fVar24 * fVar28 - fVar23 * fVar29;
          fVar16 = fVar22 * fVar29 - fVar24 * fVar26;
          fVar18 = fVar23 * fVar26 - fVar22 * fVar28;
          fVar20 = fVar25 * fVar27 - fVar25 * fVar27;
          fVar14 = fVar14 + fVar14;
          fVar16 = fVar16 + fVar16;
          fVar18 = fVar18 + fVar18;
          fVar20 = fVar20 + fVar20;
          local_118 = (fVar18 * fVar28 - fVar16 * fVar29) + fVar27 * fVar14 + fVar22 + fVar10;
          fStack_114 = (fVar14 * fVar29 - fVar18 * fVar26) + fVar27 * fVar16 + fVar23 + fVar11;
          fStack_110 = (fVar16 * fVar26 - fVar14 * fVar28) + fVar27 * fVar18 + fVar24 + fVar12;
          fStack_10c = (fVar20 * fVar27 - fVar20 * fVar27) + fVar27 * fVar20 + fVar25 + fVar13;
          pfVar4 = (float *)(**(code **)(**(longlong **)(lVar5 + 8) + 0x310))();
          fVar15 = *pfVar4 * fVar15;
          fVar17 = pfVar4[1] * fVar17;
          fVar19 = pfVar4[2] * fVar19;
          fVar21 = fVar21 * 0.0;
          fVar10 = fVar19 * fVar28 - fVar17 * fVar29;
          fVar11 = fVar15 * fVar29 - fVar19 * fVar26;
          fVar12 = fVar17 * fVar26 - fVar15 * fVar28;
          fVar13 = fVar21 * fVar27 - fVar21 * fVar27;
          fVar10 = fVar10 + fVar10;
          fVar11 = fVar11 + fVar11;
          fVar12 = fVar12 + fVar12;
          fVar13 = fVar13 + fVar13;
          local_138 = (fVar12 * fVar28 - fVar11 * fVar29) + fVar27 * fVar10 + fVar15;
          fStack_134 = (fVar10 * fVar29 - fVar12 * fVar26) + fVar27 * fVar11 + fVar17;
          fStack_130 = (fVar11 * fVar26 - fVar10 * fVar28) + fVar27 * fVar12 + fVar19;
          fStack_12c = (fVar13 * fVar27 - fVar13 * fVar27) + fVar27 * fVar13 + fVar21;
          if (bVar9) {
            bVar9 = false;
            fVar29 = (local_138 + local_118) - (local_118 - local_138);
            fVar28 = (fStack_134 + fStack_114) - (fStack_114 - fStack_134);
            fVar26 = (fStack_130 + fStack_110) - (fStack_110 - fStack_130);
            fStack_14c = fVar29 * 0.5;
            fStack_148 = fVar28 * 0.5;
            fStack_144 = fVar26 * 0.5;
            fStack_150 = fStack_144 + (fStack_110 - fStack_130);
            local_140 = SQRT((fVar29 * fVar29 + fVar28 * fVar28 + fVar26 * fVar26) * 0.25);
            local_178 = CONCAT44(fStack_148 + (fStack_114 - fStack_134),
                                 fStack_14c + (local_118 - local_138));
            local_f4 = fStack_150;
            local_e8 = fStack_144;
          }
          else {
            fVar27 = (local_138 + local_118) - (local_118 - local_138);
            fVar12 = (fStack_134 + fStack_114) - (fStack_114 - fStack_134);
            fVar26 = (fStack_130 + fStack_110) - (fStack_110 - fStack_130);
            fVar11 = fVar27 * 0.5;
            local_res20 = fVar12 * 0.5;
            fVar15 = fVar11 + (local_118 - local_138);
            fVar10 = fVar26 * 0.5;
            fVar13 = local_res20 + (fStack_114 - fStack_134);
            local_res18 = CONCAT44(local_res18._4_4_,fVar10);
            local_104 = fStack_170;
            fVar17 = fVar10 + (fStack_110 - fStack_130);
            fVar28 = fStack_170 - fStack_164;
            fStack_164 = fStack_164 + fStack_170;
            fVar29 = (float)local_178 - fStack_16c;
            local_108 = (float)local_178;
            local_100 = SQRT((fVar12 * fVar12 + fVar27 * fVar27 + fVar26 * fVar26) * 0.25);
            fStack_16c = fStack_16c + (float)local_178;
            fVar26 = local_178._4_4_ - fStack_168;
            fStack_168 = fStack_168 + local_178._4_4_;
            fVar27 = fVar29;
            if (fStack_16c < fVar29) {
              fVar27 = fStack_16c;
            }
            fVar12 = fVar26;
            if (fStack_168 < fVar26) {
              fVar12 = fStack_168;
            }
            fStack_150 = fVar28;
            if (fStack_164 < fVar28) {
              fStack_150 = fStack_164;
            }
            if (fVar29 < fStack_16c) {
              fVar29 = fStack_16c;
            }
            if (fVar26 < fStack_168) {
              fVar26 = fStack_168;
            }
            if (fVar28 < fStack_164) {
              fVar28 = fStack_164;
            }
            fVar21 = fVar15 - fVar11;
            fVar19 = fVar13 - local_res20;
            fVar14 = fVar17 - fVar10;
            if (fVar21 < fVar27) {
              fVar27 = fVar21;
            }
            if (fVar19 < fVar12) {
              fVar12 = fVar19;
            }
            if (fVar14 < fStack_150) {
              fStack_150 = fVar14;
            }
            if (fVar29 < fVar21) {
              fVar29 = fVar21;
            }
            if (fVar26 < fVar19) {
              fVar26 = fVar19;
            }
            if (fVar28 < fVar14) {
              fVar28 = fVar14;
            }
            fVar11 = fVar15 + fVar11;
            fVar10 = fVar17 + fVar10;
            fVar19 = fVar13 + local_res20;
            if (fVar11 < fVar27) {
              fVar27 = fVar11;
            }
            if (fVar19 < fVar12) {
              fVar12 = fVar19;
            }
            if (fVar10 < fStack_150) {
              fStack_150 = fVar10;
            }
            if (fVar29 < fVar11) {
              fVar29 = fVar11;
            }
            if (fVar26 < fVar19) {
              fVar26 = fVar19;
            }
            if (fVar28 < fVar10) {
              fVar28 = fVar10;
            }
            fVar26 = fVar26 - fVar12;
            fVar29 = fVar29 - fVar27;
            fVar28 = fVar28 - fStack_150;
            fStack_148 = fVar26 * 0.5;
            fStack_14c = fVar29 * 0.5;
            fVar12 = fVar12 + fStack_148;
            fStack_144 = fVar28 * 0.5;
            fVar27 = fVar27 + fStack_14c;
            fStack_150 = fStack_150 + fStack_144;
            local_120 = CONCAT44(local_120._4_4_,fStack_144);
            fVar28 = SQRT((fVar26 * fVar26 + fVar29 * fVar29 + fVar28 * fVar28) * 0.25);
            local_140 = SQRT((local_178._4_4_ - fVar12) * (local_178._4_4_ - fVar12) +
                             ((float)local_178 - fVar27) * ((float)local_178 - fVar27) +
                             (fStack_170 - fStack_150) * (fStack_170 - fStack_150)) + local_160;
            fVar26 = SQRT((fVar13 - fVar12) * (fVar13 - fVar12) +
                          (fVar15 - fVar27) * (fVar15 - fVar27) +
                          (fVar17 - fStack_150) * (fVar17 - fStack_150)) + local_100;
            if (local_140 <= fVar26) {
              local_140 = fVar26;
            }
            if (fVar28 <= local_140) {
              local_140 = fVar28;
            }
            local_178 = CONCAT44(fVar12,fVar27);
          }
          local_160 = local_140;
          fStack_170 = fStack_150;
          fStack_16c = fStack_14c;
          fStack_168 = fStack_148;
          fStack_164 = fStack_144;
        }
        plVar6 = plVar6 + 0x3a;
      } while (plVar6 != plVar8);
    }
    *param_2 = local_178;
    param_2[1] = CONCAT44(fStack_16c,fStack_170);
    param_2[2] = CONCAT44(fStack_164,fStack_168);
    *(float *)(param_2 + 3) = local_160;
  }
  return param_2;
}



// FUNCTION 142a64160 FUN_142a64160 body=169 status=ok
// SIG undefined FUN_142a64160(void)

void FUN_142a64160(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FClothCollisionData::Reset(param_2);
  plVar1 = *(longlong **)(param_1 + 0x20);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x28) * 0x3a;
  if (plVar1 != plVar2) {
    if (param_3 == '\0') {
      for (; plVar1 != plVar2; plVar1 = plVar1 + 0x3a) {
        FClothCollisionData::Append
                  (param_2,(longlong)(int)plVar1[0xc] * 0x108 +
                           *(longlong *)(*plVar1 + 0x118) + 0xa8);
      }
    }
    else {
      do {
        FClothCollisionData::Append(param_2,plVar1 + 0xd);
        plVar1 = plVar1 + 0x3a;
      } while (plVar1 != plVar2);
    }
  }
  return;
}



// FUNCTION 142a64220 FUN_142a64220 body=2505 status=ok
// SIG undefined FUN_142a64220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a64220(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  int *piVar18;
  longlong *plVar19;
  ulonglong uVar20;
  int *piVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
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
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auStack_248 [32];
  int *local_228;
  int local_220 [2];
  longlong local_218;
  longlong local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 local_200;
  longlong local_1f8;
  undefined8 local_1e8;
  float fStack_1e0;
  float fStack_1dc;
  float *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  longlong local_198 [2];
  longlong local_188;
  code *local_170;
  int local_168;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
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
  undefined1 local_108 [8];
  undefined8 uStack_100;
  undefined1 local_f8 [8];
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  iVar11 = *(int *)(param_1 + 0x28);
  local_218 = param_1;
  local_1c8 = param_2;
  local_1c0 = param_4;
  local_1b8 = param_3;
  if ((iVar11 == 0) || (param_3 == 0)) {
    TSparseArray<TSetElement<TTuple<int,FClothSimulData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Reset();
    if (0 < (int)*(uint *)(param_2 + 9)) {
      uVar17 = 0;
      uVar20 = (ulonglong)*(uint *)(param_2 + 9);
      do {
        plVar13 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar13 = param_2 + 7;
        }
        uVar12 = (longlong)(int)param_2[9] - 1U & uVar17;
        uVar17 = uVar17 + 1;
        *(undefined4 *)((longlong)plVar13 + uVar12 * 4) = 0xffffffff;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  }
  else {
    if ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34) != iVar11) {
      TSparseArray<TSetElement<TTuple<int,FClothSimulData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Reset();
      if (0 < (int)*(uint *)(param_2 + 9)) {
        uVar17 = 0;
        uVar20 = (ulonglong)*(uint *)(param_2 + 9);
        do {
          plVar13 = (longlong *)param_2[8];
          if ((longlong *)param_2[8] == (longlong *)0x0) {
            plVar13 = param_2 + 7;
          }
          uVar12 = (longlong)(int)param_2[9] - 1U & uVar17;
          uVar17 = uVar17 + 1;
          *(undefined4 *)((longlong)plVar13 + uVar12 * 4) = 0xffffffff;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
    }
    local_1d8 = (float *)(param_3 + 0x210);
    if (0 < iVar11) {
      local_1f8 = 0;
      lVar22 = 0;
      local_1b0 = (longlong)iVar11;
      do {
        lVar3 = *(longlong *)(local_218 + 0x20);
        local_1e8 = *(longlong *)(lVar22 + lVar3);
        if (*(int *)(lVar22 + 0x60 + lVar3) != -1) {
          piVar21 = (int *)(lVar3 + 0xfc + lVar22);
          if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
            iVar11 = *piVar21;
            plVar13 = (longlong *)param_2[8];
            if ((longlong *)param_2[8] == (longlong *)0x0) {
              plVar13 = param_2 + 7;
            }
            iVar10 = *(int *)((longlong)plVar13 +
                             ((longlong)(int)param_2[9] - 1U & (longlong)iVar11) * 4);
            if (iVar10 != -1) {
              do {
                piVar18 = (int *)((longlong)iVar10 * 0xa0 + *param_2);
                if (*piVar18 == iVar11) {
                  if ((iVar10 != -1) && (piVar18 != (int *)0x0)) goto LAB_142a643f4;
                  break;
                }
                iVar10 = piVar18[0x24];
              } while (iVar10 != -1);
            }
          }
          local_228 = piVar21;
          FUN_142a5e630(param_2,local_220,&local_228,0);
          piVar18 = (int *)((longlong)local_220[0] * 0xa0 + *param_2);
LAB_142a643f4:
          plVar19 = (longlong *)(piVar18 + 4);
          lVar23 = (longlong)*(int *)(lVar22 + 0x60 + lVar3) * 0x40;
          plVar13 = *(longlong **)(lVar23 + 8 + *(longlong *)(lVar22 + 0x100 + lVar3));
          local_1d0 = plVar13;
          (**(code **)(*plVar13 + 0x28))(plVar13);
          pfVar9 = local_1d8;
          fVar50 = fRam0000000146b29ac8;
          fVar45 = fRam0000000146b29ac4;
          fVar40 = _DAT_146b29ac0;
          if (param_4 == 0) {
            lVar14 = (longlong)*(int *)(param_3 + 0x770) * 0x10 + param_3;
          }
          else {
            lVar14 = (longlong)*(int *)(param_4 + 0x770) * 0x10 + param_4;
          }
          iVar11 = *(int *)(local_1e8 + 0x158);
          if ((iVar11 < 0) || (*(int *)(lVar14 + 0x730) <= iVar11)) {
            piVar18[6] = 0;
            if ((piVar18[7] < 0) && (piVar18[7] != 0)) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
              ResizeTo(plVar19,0);
            }
            piVar18[10] = 0;
            if ((piVar18[0xb] < 0) && (piVar18[0xb] != 0)) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
              ResizeTo(piVar18 + 8,0);
            }
            (**(code **)(*plVar13 + 0x30))(plVar13);
            return;
          }
          if (param_4 == 0) {
            iVar10 = *(int *)(param_3 + 0x770);
            lVar14 = *(longlong *)(param_3 + 0x728 + (longlong)iVar10 * 0x10);
          }
          else {
            iVar10 = *(int *)(param_4 + 0x770);
            lVar14 = *(longlong *)(param_4 + 0x728 + (longlong)iVar10 * 0x10);
          }
          pfVar1 = (float *)(lVar14 + (longlong)iVar11 * 0x30);
          local_118 = *pfVar1;
          fStack_114 = pfVar1[1];
          fStack_110 = pfVar1[2];
          fStack_10c = pfVar1[3];
          fVar34 = (float)DAT_14401b160;
          fVar41 = DAT_14401b160._4_4_;
          fVar46 = DAT_14401b160._8_4_;
          fVar51 = DAT_14401b160._12_4_;
          auVar25 = *(undefined1 (*) [16])(local_1d8 + 8);
          fVar53 = auVar25._0_4_;
          fVar5 = auVar25._4_4_;
          fVar6 = auVar25._8_4_;
          fVar7 = auVar25._12_4_;
          pauVar2 = (undefined1 (*) [16])(lVar14 + 0x10 + (longlong)iVar11 * 0x30);
          fVar42 = *(float *)*pauVar2;
          fVar47 = *(float *)(*pauVar2 + 4);
          fVar52 = *(float *)(*pauVar2 + 8);
          _local_108 = *pauVar2;
          fVar27 = *local_1d8;
          fVar32 = local_1d8[1];
          fVar30 = local_1d8[2];
          fVar33 = local_1d8[3];
          auVar25 = minps(_DAT_14401b160,auVar25);
          auVar26._4_4_ = -(uint)(auVar25._4_4_ < fRam0000000146b29b24);
          auVar26._0_4_ = -(uint)(auVar25._0_4_ < _DAT_146b29b20);
          auVar26._8_4_ = -(uint)(auVar25._8_4_ < fRam0000000146b29b28);
          auVar26._12_4_ = -(uint)(auVar25._12_4_ < fRam0000000146b29b2c);
          iVar11 = movmskps(iVar10 * 2,auVar26);
          _local_f8 = _DAT_14401b160;
          local_1e8._0_4_ = _DAT_146b29b20;
          local_1e8._0_4_ = _DAT_146b29b20;
          local_1e8._4_4_ = fRam0000000146b29b24;
          fStack_1e0 = fRam0000000146b29b28;
          fStack_1dc = fRam0000000146b29b2c;
          if (iVar11 == 0) {
            fVar42 = fVar53 * fVar42;
            fVar47 = fVar5 * fVar47;
            fVar52 = fVar6 * fVar52;
            fVar54 = fVar7 * *(float *)(*pauVar2 + 0xc);
            fVar50 = fStack_114 * fVar27;
            fVar35 = local_118 * fVar27;
            fVar40 = local_118 * fVar32;
            fVar45 = fStack_114 * fVar32;
            fVar62 = local_118 * fVar30;
            fVar29 = fStack_110 * fVar30;
            local_f8._4_4_ = fVar41 * fVar5;
            local_f8._0_4_ = fVar34 * fVar53;
            uStack_f0._0_4_ = fVar46 * fVar6;
            uStack_f0._4_4_ = fVar51 * fVar7;
            local_118 = fStack_10c * fVar27 * _DAT_146b29b00 + fVar33 * local_118 +
                        fStack_110 * fVar32 * _DAT_146b29af0 + fStack_114 * fVar30 * _DAT_146b29ae0;
            fStack_114 = fStack_110 * fVar27 * fRam0000000146b29b04 + fVar33 * fStack_114 +
                         fStack_10c * fVar32 * fRam0000000146b29af4 + fVar62 * fRam0000000146b29ae4;
            fStack_110 = fVar50 * fRam0000000146b29b08 + fVar33 * fStack_110 +
                         fVar40 * fRam0000000146b29af8 + fStack_10c * fVar30 * fRam0000000146b29ae8;
            fStack_10c = fVar35 * fRam0000000146b29b0c + fVar33 * fStack_10c +
                         fVar45 * fRam0000000146b29afc + fVar29 * fRam0000000146b29aec;
            fVar40 = fVar52 * fVar32 - fVar47 * fVar30;
            fVar45 = fVar42 * fVar30 - fVar52 * fVar27;
            fVar50 = fVar47 * fVar27 - fVar42 * fVar32;
            fVar34 = fVar54 * fVar33 - fVar54 * fVar33;
            fVar40 = fVar40 + fVar40;
            fVar45 = fVar45 + fVar45;
            fVar50 = fVar50 + fVar50;
            fVar34 = fVar34 + fVar34;
            local_108._4_4_ =
                 (fVar40 * fVar30 - fVar50 * fVar27) + fVar33 * fVar45 + fVar47 + local_1d8[5];
            local_108._0_4_ =
                 (fVar50 * fVar32 - fVar45 * fVar30) + fVar33 * fVar40 + fVar42 + local_1d8[4];
            uStack_100._0_4_ =
                 (fVar45 * fVar27 - fVar40 * fVar32) + fVar33 * fVar50 + fVar52 + local_1d8[6];
            uStack_100._4_4_ =
                 (fVar34 * fVar33 - fVar34 * fVar33) + fVar33 * fVar34 + fVar54 + local_1d8[7];
          }
          else {
            fVar35 = local_1d8[4];
            fVar54 = local_1d8[5];
            fVar62 = local_1d8[6];
            fVar29 = fVar32 + fVar32;
            fVar31 = fVar30 + fVar30;
            fVar36 = fVar27 * (fVar27 + fVar27);
            fVar56 = fVar33 * (fVar27 + fVar27);
            fVar59 = (fVar33 * fVar31 + fVar27 * fVar29) * fVar53;
            fVar60 = (fVar56 + fVar32 * fVar31) * fVar5;
            fVar61 = (fVar33 * fVar29 + fVar27 * fVar31) * fVar6;
            fVar38 = fVar5 * (fVar27 * fVar29 - fVar33 * fVar31);
            fVar43 = fVar6 * (fVar32 * fVar31 - fVar56);
            fVar48 = fVar53 * (fVar27 * fVar31 - fVar33 * fVar29);
            fVar56 = fStack_114 + fStack_114;
            fVar33 = fStack_110 + fStack_110;
            fVar27 = (float)((uint)((_DAT_146b29ac0 - (fVar30 * fVar31 + fVar32 * fVar29)) * fVar53)
                            & _DAT_146b29ad0);
            fVar30 = (float)((uint)((fRam0000000146b29ac4 - (fVar30 * fVar31 + fVar36)) * fVar5) &
                            uRam0000000146b29ad4);
            fVar29 = (float)((uint)((fRam0000000146b29ac8 - (fVar32 * fVar29 + fVar36)) * fVar6) &
                            uRam0000000146b29ad8);
            fVar36 = (float)((uint)((fRam0000000146b29acc - (fVar36 + fVar36)) * fVar7) &
                            uRam0000000146b29adc);
            fVar37 = (local_118 + local_118) * local_118;
            fVar32 = (local_118 + local_118) * fStack_10c;
            fVar55 = (fVar33 * fStack_10c + fVar56 * local_118) * fVar34;
            fVar57 = (fVar32 + fVar33 * fStack_114) * fVar41;
            fVar58 = (fVar56 * fStack_10c + fVar33 * local_118) * fVar46;
            fVar39 = fVar41 * (fVar56 * local_118 - fVar33 * fStack_10c);
            fVar44 = fVar46 * (fVar33 * fStack_114 - fVar32);
            fVar49 = fVar34 * (fVar33 * local_118 - fVar56 * fStack_10c);
            fVar32 = (float)((uint)((_DAT_146b29ac0 - (fVar33 * fStack_110 + fVar56 * fStack_114)) *
                                   fVar34) & _DAT_146b29ad0);
            fVar33 = (float)((uint)((fRam0000000146b29ac4 - (fVar33 * fStack_110 + fVar37)) * fVar41
                                   ) & uRam0000000146b29ad4);
            fVar31 = (float)((uint)((fRam0000000146b29ac8 - (fVar56 * fStack_114 + fVar37)) * fVar46
                                   ) & uRam0000000146b29ad8);
            fVar56 = (float)((uint)((fRam0000000146b29acc - (fVar37 + fVar37)) * fVar51) &
                            uRam0000000146b29adc);
            local_158 = fVar55 * fVar38 + fVar32 * fVar27 + fVar49 * fVar61 + fVar56 * fVar35;
            fStack_154 = fVar55 * fVar30 + fVar32 * fVar59 + fVar49 * fVar43 + fVar56 * fVar54;
            fStack_150 = fVar55 * fVar60 + fVar32 * fVar48 + fVar49 * fVar29 + fVar56 * fVar62;
            fStack_14c = fVar55 * fVar36 + fVar32 * fVar36 + fVar49 * fVar36 +
                         fVar56 * fRam0000000146b29acc;
            local_148 = fVar33 * fVar38 + fVar39 * fVar27 + fVar57 * fVar61 + fVar56 * fVar35;
            fStack_144 = fVar33 * fVar30 + fVar39 * fVar59 + fVar57 * fVar43 + fVar56 * fVar54;
            fStack_140 = fVar33 * fVar60 + fVar39 * fVar48 + fVar57 * fVar29 + fVar56 * fVar62;
            fStack_13c = fVar33 * fVar36 + fVar39 * fVar36 + fVar57 * fVar36 +
                         fVar56 * fRam0000000146b29acc;
            local_138 = fVar44 * fVar38 + fVar58 * fVar27 + fVar31 * fVar61 + fVar56 * fVar35;
            fStack_134 = fVar44 * fVar30 + fVar58 * fVar59 + fVar31 * fVar43 + fVar56 * fVar54;
            fStack_130 = fVar44 * fVar60 + fVar58 * fVar48 + fVar31 * fVar29 + fVar56 * fVar62;
            fStack_12c = fVar44 * fVar36 + fVar58 * fVar36 + fVar31 * fVar36 +
                         fVar56 * fRam0000000146b29acc;
            local_128 = fVar47 * fVar38 + fVar42 * fVar27 + fVar52 * fVar61 +
                        fRam0000000146b29acc * fVar35;
            fStack_124 = fVar47 * fVar30 + fVar42 * fVar59 + fVar52 * fVar43 +
                         fRam0000000146b29acc * fVar54;
            fStack_120 = fVar47 * fVar60 + fVar42 * fVar48 + fVar52 * fVar29 +
                         fRam0000000146b29acc * fVar62;
            fStack_11c = fVar47 * fVar36 + fVar42 * fVar36 + fVar52 * fVar36 +
                         fRam0000000146b29acc * fRam0000000146b29acc;
            FMatrix::RemoveScaling(&local_158);
            fVar40 = (float)(-(uint)((float)local_1e8 <= fVar53 * fVar34) &
                             (_DAT_146b29b10 ^ (uint)fVar40) ^ _DAT_146b29b10);
            fVar45 = (float)(-(uint)(local_1e8._4_4_ <= fVar5 * fVar41) &
                             (uRam0000000146b29b14 ^ (uint)fVar45) ^ uRam0000000146b29b14);
            fVar50 = (float)(-(uint)(fStack_1e0 <= fVar6 * fVar46) &
                             (uRam0000000146b29b18 ^ (uint)fVar50) ^ uRam0000000146b29b18);
            local_158 = local_158 * fVar40;
            fStack_154 = fStack_154 * fVar40;
            fStack_150 = fStack_150 * fVar40;
            fStack_144 = fStack_144 * fVar45;
            fStack_140 = fStack_140 * fVar45;
            local_148 = local_148 * fVar45;
            fStack_134 = fStack_134 * fVar50;
            fStack_130 = fStack_130 * fVar50;
            local_138 = local_138 * fVar50;
            FQuat::FQuat(&local_1a8,&local_158);
            local_228 = (int *)CONCAT44(local_228._4_4_,0x322bcc77);
            local_f8._4_4_ = fVar5 * fVar41;
            local_f8._0_4_ = fVar53 * fVar34;
            uStack_f0._0_4_ = fVar6 * fVar46;
            uStack_f0._4_4_ = fVar7 * fVar51;
            auVar28._0_4_ = local_1a8 * local_1a8 + fStack_1a0 * fStack_1a0;
            auVar28._4_4_ = fStack_1a4 * fStack_1a4 + fStack_19c * fStack_19c;
            auVar28._8_4_ = fStack_1a0 * fStack_1a0 + local_1a8 * local_1a8;
            auVar28._12_4_ = fStack_19c * fStack_19c + fStack_1a4 * fStack_1a4;
            fVar41 = auVar28._4_4_ + auVar28._0_4_;
            fVar46 = auVar28._8_4_ + auVar28._4_4_;
            fVar51 = auVar28._12_4_ + auVar28._8_4_;
            fVar53 = auVar28._0_4_ + auVar28._12_4_;
            auVar25._4_4_ = fVar46;
            auVar25._0_4_ = fVar41;
            auVar25._8_4_ = fVar51;
            auVar25._12_4_ = fVar53;
            auVar25 = rsqrtps(auVar28,auVar25);
            fVar40 = auVar25._0_4_;
            fVar45 = auVar25._4_4_;
            fVar50 = auVar25._8_4_;
            fVar34 = auVar25._12_4_;
            fVar40 = (_DAT_146b29ab0 - fVar40 * fVar40 * fVar41 * _DAT_146b29ab0) * fVar40 + fVar40;
            fVar45 = (fRam0000000146b29ab4 - fVar45 * fVar45 * fVar46 * fRam0000000146b29ab4) *
                     fVar45 + fVar45;
            fVar50 = (fRam0000000146b29ab8 - fVar50 * fVar50 * fVar51 * fRam0000000146b29ab8) *
                     fVar50 + fVar50;
            fVar34 = (fRam0000000146b29abc - fVar34 * fVar34 * fVar53 * fRam0000000146b29abc) *
                     fVar34 + fVar34;
            local_108._4_4_ = fStack_124;
            local_108._0_4_ = local_128;
            uStack_100._0_4_ = fStack_120;
            local_1a8 = (float)(((uint)(((_DAT_146b29ab0 - fVar40 * fVar40 * fVar41 * _DAT_146b29ab0
                                         ) * fVar40 + fVar40) * local_1a8) ^ _DAT_146b29aa0) &
                                -(uint)(1e-08 <= fVar41) ^ _DAT_146b29aa0);
            fStack_1a4 = (float)(((uint)(((fRam0000000146b29ab4 -
                                          fVar45 * fVar45 * fVar46 * fRam0000000146b29ab4) * fVar45
                                         + fVar45) * fStack_1a4) ^ uRam0000000146b29aa4) &
                                 -(uint)(1e-08 <= fVar46) ^ uRam0000000146b29aa4);
            fStack_1a0 = (float)(((uint)(((fRam0000000146b29ab8 -
                                          fVar50 * fVar50 * fVar51 * fRam0000000146b29ab8) * fVar50
                                         + fVar50) * fStack_1a0) ^ uRam0000000146b29aa8) &
                                 -(uint)(1e-08 <= fVar51) ^ uRam0000000146b29aa8);
            fStack_19c = (float)(((uint)(((fRam0000000146b29abc -
                                          fVar34 * fVar34 * fVar53 * fRam0000000146b29abc) * fVar34
                                         + fVar34) * fStack_19c) ^ uRam0000000146b29aac) &
                                 -(uint)(1e-08 <= fVar53) ^ uRam0000000146b29aac);
            uStack_100._4_4_ = 0;
            local_118 = local_1a8;
            fStack_114 = fStack_1a4;
            fStack_110 = fStack_1a0;
            fStack_10c = fStack_19c;
          }
          iVar11 = (**(code **)(**(longlong **)(lVar23 + 8 + *(longlong *)(lVar22 + 0x100 + lVar3))
                               + 0x20))();
          local_228 = (int *)CONCAT44(local_228._4_4_,iVar11);
          FClothSimulData::Reset(plVar19);
          *(ulonglong *)(piVar18 + 0xc) = CONCAT44(fStack_114,local_118);
          *(ulonglong *)(piVar18 + 0xe) = CONCAT44(fStack_10c,fStack_110);
          *(undefined1 (*) [8])(piVar18 + 0x14) = local_f8;
          *(undefined8 *)(piVar18 + 0x16) = uStack_f0;
          *(undefined1 (*) [8])(piVar18 + 0x10) = local_108;
          *(undefined8 *)(piVar18 + 0x12) = uStack_100;
          puVar15 = (undefined8 *)FUN_14162bcf0(&local_118,&local_158,pfVar9);
          uVar8 = puVar15[1];
          *(undefined8 *)(piVar18 + 0x18) = *puVar15;
          *(undefined8 *)(piVar18 + 0x1a) = uVar8;
          *(undefined1 (*) [16])(piVar18 + 0x1c) = *(undefined1 (*) [16])(puVar15 + 2);
          uVar8 = puVar15[5];
          *(undefined8 *)(piVar18 + 0x20) = puVar15[4];
          *(undefined8 *)(piVar18 + 0x22) = uVar8;
          plVar4 = *(longlong **)(lVar23 + 8 + *(longlong *)(lVar22 + 0x100 + lVar3));
          (**(code **)(*plVar4 + 0x40))(plVar4,local_198);
          uVar24 = 0;
          if (iVar11 != 0) {
            lVar23 = 0;
            do {
              iVar11 = piVar18[6];
              local_208 = *(undefined4 *)(lVar23 + local_198[0]);
              uStack_204 = *(undefined4 *)(lVar23 + 4 + local_198[0]);
              local_200 = *(undefined4 *)(lVar23 + 8 + local_198[0]);
              piVar18[6] = iVar11 + 1;
              if (piVar18[7] < iVar11 + 1) {
                TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar19,iVar11);
              }
              lVar14 = *plVar19;
              *(ulonglong *)(lVar14 + (longlong)iVar11 * 0xc) = CONCAT44(uStack_204,local_208);
              *(undefined4 *)(lVar14 + 8 + (longlong)iVar11 * 0xc) = local_200;
              iVar11 = piVar18[10];
              local_210 = *(longlong *)(lVar22 + 0x150 + lVar3);
              piVar18[10] = iVar11 + 1;
              if (piVar18[0xb] < iVar11 + 1) {
                TArray<FRotator,FDefaultAllocator>::ResizeGrow(piVar18 + 8,iVar11);
              }
              lVar14 = *(longlong *)(piVar18 + 8);
              lVar16 = (longlong)(int)uVar24;
              uVar24 = uVar24 + 1;
              lVar23 = lVar23 + 0x10;
              *(undefined8 *)(lVar14 + (longlong)iVar11 * 0xc) =
                   *(undefined8 *)(local_210 + lVar16 * 0xc);
              *(undefined4 *)(lVar14 + 8 + (longlong)iVar11 * 0xc) =
                   *(undefined4 *)(local_210 + 8 + lVar16 * 0xc);
              plVar13 = local_1d0;
            } while (uVar24 < (uint)local_228);
          }
          (*local_170)(local_168 + local_188);
          (**(code **)(*plVar13 + 0x30))(plVar13);
          param_2 = local_1c8;
          param_3 = local_1b8;
          param_4 = local_1c0;
        }
        local_1f8 = local_1f8 + 1;
        lVar22 = lVar22 + 0x1d0;
      } while (local_1f8 < local_1b0);
    }
  }
                    /* WARNING: Read-only address (ram,0x00014401b160) is written */
  return;
}



// FUNCTION 142a64bf0 HasSelfCollision body=21 status=ok
// SIG undefined HasSelfCollision(void)

undefined1 FClothConfig::HasSelfCollision(longlong param_1)

{
  if ((0.0 < *(float *)(param_1 + 0x44)) && (0.0 < *(float *)(param_1 + 0x48))) {
    return 1;
  }
  return 0;
}



// FUNCTION 142a64c10 Initialize body=96 status=ok
// SIG undefined Initialize(void)

void FClothingSimulationNv::Initialize(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  
  FUN_14168dc80();
  puVar2 = (undefined8 *)FName::FName(local_res8,"ClothingSystemRuntime",1);
  uVar5 = *puVar2;
  uVar3 = FUN_14168dc80();
  lVar4 = FUN_141690010(uVar3,uVar5);
  plVar1 = *(longlong **)(lVar4 + 0x10);
  *(longlong **)(param_1 + 0x10) = plVar1;
  uVar5 = (**(code **)(*plVar1 + 0x20))();
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}



// FUNCTION 142a64c70 FUN_142a64c70 body=68 status=ok
// SIG undefined FUN_142a64c70(void)

undefined8 * FUN_142a64c70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145367408;
    puVar1[1] = &PTR_LAB_145367448;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142a64cc0 FUN_142a64cc0 body=647 status=ok
// SIG undefined FUN_142a64cc0(void)

void FUN_142a64cc0(longlong param_1,int param_2)

{
  int *_Dst;
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x130) <= param_2) {
    return;
  }
  lVar8 = *(longlong *)(param_1 + 0x128);
  iVar7 = *(int *)(param_1 + 0x130);
  _Dst = (int *)(lVar8 + (longlong)param_2 * 4);
  iVar1 = *_Dst;
  lVar4 = (longlong)iVar1;
  iVar2 = (iVar7 - param_2) + -1;
  if (iVar2 != 0) {
    _guard_xfg_dispatch_icall_nop
              (_Dst,(void *)(lVar8 + (longlong)(param_2 + 1) * 4),(longlong)iVar2 << 2);
    iVar7 = *(int *)(param_1 + 0x130);
  }
  *(int *)(param_1 + 0x130) = iVar7 + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x128));
  if (iVar1 == -1) {
    return;
  }
  uVar3 = 0;
  iVar7 = iVar1 + -1;
  if ((-1 < iVar7) && (iVar7 < *(int *)(param_1 + 0x120))) {
    lVar8 = *(longlong *)(param_1 + 0x118) + -0x108 + lVar4 * 0x108;
    *(undefined4 *)(lVar8 + 0xf0) = 0;
    if (*(int *)(lVar8 + 0xf4) != 0) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(lVar8 + 0xe8,0);
    }
    iVar2 = iVar1 + 1;
    if (iVar2 < 0) goto LAB_142a64e39;
    if (iVar2 < *(int *)(lVar8 + 0x100)) {
      TArray<FMeshToMeshVertData,FDefaultAllocator>::operator=
                (lVar8 + 0xe8,(longlong)iVar2 * 0x10 + *(longlong *)(lVar8 + 0xf8));
    }
  }
  if ((-1 < iVar1 + 1) && (iVar1 + 1 < *(int *)(param_1 + 0x120))) {
    lVar8 = (lVar4 + 1) * 0x108 + *(longlong *)(param_1 + 0x118);
    *(undefined4 *)(lVar8 + 0xe0) = 0;
    if (*(int *)(lVar8 + 0xe4) != 0) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(lVar8 + 0xd8,0);
    }
    if ((-1 < iVar7) && (iVar7 < *(int *)(lVar8 + 0x100))) {
      TArray<FMeshToMeshVertData,FDefaultAllocator>::operator=
                (lVar8 + 0xd8,(longlong)iVar7 * 0x10 + *(longlong *)(lVar8 + 0xf8));
    }
  }
LAB_142a64e39:
  FUN_142a65210(param_1 + 0x118,iVar1,1,1);
  lVar8 = *(longlong *)(param_1 + 0x118);
  lVar9 = (longlong)*(int *)(param_1 + 0x120) * 0x108 + lVar8;
  for (; lVar8 != lVar9; lVar8 = lVar8 + 0x108) {
    if (*(longlong *)(*(longlong *)(lVar8 + 0xf8) + lVar4 * 0x10) != 0) {
      FMemory::Free();
    }
    iVar7 = *(int *)(lVar8 + 0x100);
    iVar2 = (iVar7 - iVar1) + -1;
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(lVar8 + 0xf8) + lVar4 * 0x10),
                 (void *)((longlong)(iVar1 + 1) * 0x10 + *(longlong *)(lVar8 + 0xf8)),
                 (longlong)iVar2 << 4);
      iVar7 = *(int *)(lVar8 + 0x100);
    }
    *(int *)(lVar8 + 0x100) = iVar7 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(lVar8 + 0xf8);
  }
  uVar6 = uVar3;
  if (0 < *(int *)(param_1 + 0x130)) {
    do {
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x128) + uVar3);
      if (iVar1 < iVar7) {
        *(int *)(*(longlong *)(param_1 + 0x128) + uVar3) = iVar7 + -1;
      }
      uVar5 = (int)uVar6 + 1;
      uVar3 = uVar3 + 4;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < *(int *)(param_1 + 0x130));
  }
  return;
}



// FUNCTION 142a64f50 FUN_142a64f50 body=210 status=ok
// SIG undefined FUN_142a64f50(void)

void FUN_142a64f50(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_18 [2];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_145367530;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[2] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_145367578;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar1 + 1;
  if (*(int *)(param_1 + 0x3c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x30,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x30));
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 1) = 0;
  if (local_18 != puVar4) {
    if (plVar2 == (longlong *)0x0) goto LAB_142a65009;
    (**(code **)(*plVar2 + 0x30))(plVar2);
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
LAB_142a65009:
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 142a65030 PostLoad body=62 status=ok
// SIG undefined PostLoad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UClothingAsset::PostLoad(longlong param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  UObject::PostLoad();
  FUN_142a5fe70(param_1);
  local_18 = _DAT_1464b0138;
  uStack_14 = uRam00000001464b013c;
  uStack_10 = uRam00000001464b0140;
  uStack_c = uRam00000001464b0144;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_18);
  if (iVar1 < 4) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  }
  return;
}



// FUNCTION 142a65070 FUN_142a65070 body=402 status=ok
// SIG undefined FUN_142a65070(void)

void FUN_142a65070(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  
  if (param_2 != 0) {
    iVar5 = *(int *)(param_1 + 0x140);
    puVar14 = (undefined4 *)0x0;
    if (iVar5 != *(int *)(param_1 + 0x150)) {
      plVar1 = (longlong *)(param_1 + 0x148);
      *(undefined4 *)(param_1 + 0x150) = 0;
      if (0x7fffffff < *(uint *)(param_1 + 0x154)) {
        TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
      }
      iVar5 = *(int *)(param_1 + 0x140);
      iVar2 = *(int *)(param_1 + 0x150);
      iVar4 = iVar2 + iVar5;
      *(int *)(param_1 + 0x150) = iVar4;
      if (*(int *)(param_1 + 0x154) < iVar4) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar2 * 4),0,(longlong)iVar5 << 2);
      iVar5 = *(int *)(param_1 + 0x140);
    }
    puVar8 = puVar14;
    puVar12 = puVar14;
    puVar13 = puVar14;
    if (0 < iVar5) {
      do {
        uVar9 = 0xffffffff;
        lVar3 = *(longlong *)((longlong)puVar8 + *(longlong *)(param_1 + 0x138));
        if (lVar3 != 0) {
          if (*(int *)(param_2 + 0x1d0) != *(int *)(param_2 + 0x1fc)) {
            lVar6 = *(longlong *)(param_2 + 0x208);
            if (*(longlong *)(param_2 + 0x208) == 0) {
              lVar6 = param_2 + 0x200;
            }
            iVar5 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                                     (longlong)*(int *)(param_2 + 0x210) - 1U) * 4);
            if (iVar5 != -1) {
              do {
                puVar10 = (undefined4 *)(*(longlong *)(param_2 + 0x1c8) + (longlong)iVar5 * 0x18);
                if (*(longlong *)(*(longlong *)(param_2 + 0x1c8) + (longlong)iVar5 * 0x18) == lVar3)
                {
                  if (iVar5 != -1) goto LAB_142a651b2;
                  break;
                }
                iVar5 = puVar10[4];
              } while (iVar5 != -1);
            }
          }
          puVar10 = puVar14;
LAB_142a651b2:
          puVar7 = puVar10 + 2;
          if (puVar10 == (undefined4 *)0x0) {
            puVar7 = puVar14;
          }
          if (puVar7 != (undefined4 *)0x0) {
            uVar9 = *puVar7;
          }
        }
        uVar11 = (int)puVar12 + 1;
        *(undefined4 *)((longlong)puVar13 + *(longlong *)(param_1 + 0x148)) = uVar9;
        puVar8 = puVar8 + 2;
        puVar12 = (undefined4 *)(ulonglong)uVar11;
        puVar13 = puVar13 + 1;
      } while ((int)uVar11 < *(int *)(param_1 + 0x140));
    }
  }
  return;
}



// FUNCTION 142a65210 FUN_142a65210 body=461 status=ok
// SIG undefined FUN_142a65210(void)

void FUN_142a65210(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_3 != 0) {
    plVar1 = (longlong *)(*param_1 + (longlong)param_2 * 0x108);
    iVar2 = param_3;
    do {
      iVar3 = (int)plVar1[0x20];
      plVar4 = (longlong *)plVar1[0x1f];
      if (iVar3 != 0) {
        do {
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          plVar4 = plVar4 + 2;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        plVar4 = (longlong *)plVar1[0x1f];
      }
      if (plVar4 != (longlong *)0x0) {
        FMemory::Free(plVar4);
      }
      if (plVar1[0x1d] != 0) {
        FMemory::Free();
      }
      if (plVar1[0x1b] != 0) {
        FMemory::Free();
      }
      FClothCollisionData::~FClothCollisionData(plVar1 + 0x15);
      if (plVar1[0x13] != 0) {
        FMemory::Free();
      }
      if (plVar1[0x10] != 0) {
        FMemory::Free();
      }
      if (plVar1[0xe] != 0) {
        FMemory::Free();
      }
      if (plVar1[0xc] != 0) {
        FMemory::Free();
      }
      if (plVar1[10] != 0) {
        FMemory::Free();
      }
      if (plVar1[8] != 0) {
        FMemory::Free();
      }
      if (plVar1[6] != 0) {
        FMemory::Free();
      }
      if (plVar1[4] != 0) {
        FMemory::Free();
      }
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x21;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = (int)param_1[1];
    iVar3 = (iVar2 - param_2) - param_3;
    if (iVar3 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x108),
                 (void *)((longlong)(param_2 + param_3) * 0x108 + *param_1),(longlong)iVar3 * 0x108)
      ;
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - param_3;
    if (param_4 != '\0') {
      FUN_142a655f0(param_1);
    }
  }
  return;
}



// FUNCTION 142a653e0 Reset body=444 status=ok
// SIG undefined Reset(void)

void TSparseArray<TSetElement<TTuple<int,FClothSimulData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Reset(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  int iVar7;
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
  
  iVar4 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar4 != 0) {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar2 = *puVar6;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar7 = local_58 + 1;
      bVar3 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar7;
      if (bVar3) goto LAB_142a654a1;
      uVar2 = puVar6[lVar5 + 1];
    }
    uStack_54 = -uVar2 & uVar2;
    iVar7 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_44 = (iStack_40 - iVar7) + 0x1f;
    if (iVar4 < iStack_44) {
LAB_142a654a1:
      iStack_44 = iVar4;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar4) {
    do {
      lVar5 = (longlong)iStack_1c * 0xa0 + *param_1;
      if (*(longlong *)(lVar5 + 0x20) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x10) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  iVar4 = (int)param_1[5] + 0x1f;
  puVar6 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar6 = puVar1;
  }
  ::_guard_xfg_dispatch_icall_nop
            (puVar6,0,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 142a655a0 Reset body=70 status=ok
// SIG undefined Reset(void)

void FClothSimulData::Reset(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((*(int *)(param_1 + 0x1c) < 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 142a655f0 FUN_142a655f0 body=165 status=ok
// SIG undefined FUN_142a655f0(void)

ulonglong FUN_142a655f0(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x108) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x108,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xf83e0f83e0f83e1) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x108);
      }
      goto LAB_142a65664;
    }
    if (iVar4 == 0) goto LAB_142a65664;
  }
  iVar4 = iVar5;
LAB_142a65664:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x108,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 142a656a0 ResizeTo body=130 status=ok
// SIG undefined ResizeTo(void)

void TArray<FShaderPipelineCache::CompileJob,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x1d0,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x1a7b9611a7b9611b) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 8);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x1d0,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 142a65730 FUN_142a65730 body=64 status=ok
// SIG undefined FUN_142a65730(void)

void FUN_142a65730(undefined8 param_1,undefined8 param_2)

{
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0138);
  FArchive::UsingCustomVersion(param_2,&DAT_14667c160);
  FArchive::UsingCustomVersion(param_2,&DAT_14667c170);
  return;
}



// FUNCTION 142a65770 FUN_142a65770 body=228 status=ok
// SIG undefined FUN_142a65770(void)

void FUN_142a65770(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_28 [4];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *(undefined4 *)(plVar2 + 1) = param_2;
    *plVar2 = (longlong)&PTR_GetPoolName_1453676e0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[2] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_145367728;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar1 + 1;
  if (*(int *)(param_1 + 0x3c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x30,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x30));
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 1) = 0;
  if (local_28 != puVar4) {
    if (plVar2 == (longlong *)0x0) goto LAB_142a65836;
    (**(code **)(*plVar2 + 0x30))(plVar2);
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
LAB_142a65836:
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 142a65860 FUN_142a65860 body=228 status=ok
// SIG undefined FUN_142a65860(void)

void FUN_142a65860(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_28 [4];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *(undefined4 *)(plVar2 + 1) = param_2;
    *plVar2 = (longlong)&PTR_GetPoolName_145367650;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[2] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_145367698;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar1 + 1;
  if (*(int *)(param_1 + 0x3c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x30,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x30));
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 1) = 0;
  if (local_28 != puVar4) {
    if (plVar2 == (longlong *)0x0) goto LAB_142a65926;
    (**(code **)(*plVar2 + 0x30))(plVar2);
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
LAB_142a65926:
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 142a65980 Shutdown body=47 status=ok
// SIG undefined Shutdown(void)

void FClothingSimulationNv::Shutdown(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_142a61f80();
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 142a659b0 FUN_142a659b0 body=114 status=ok
// SIG undefined FUN_142a659b0(void)

void FUN_142a659b0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_141593110();
  lVar3 = param_1 + 0x10;
  if (param_1 == 0) {
    lVar3 = 0;
  }
  (**(code **)(*plVar2 + 0x20))(plVar2,DAT_146aedc70,lVar3);
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  NvClothDestroyFactory(*(undefined8 *)(param_1 + 0x10));
  if (*(HMODULE *)(param_1 + 0x20) != (HMODULE)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(*(HMODULE *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 142a65a30 FUN_142a65a30 body=5602 status=ok
// SIG undefined FUN_142a65a30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a65a30(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  float *pfVar18;
  float *pfVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined1 (*pauVar22) [16];
  longlong lVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong *plVar26;
  int *piVar27;
  undefined4 *puVar28;
  longlong lVar29;
  longlong lVar30;
  longlong *plVar31;
  longlong *plVar32;
  longlong lVar33;
  longlong *plVar34;
  float fVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
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
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar55;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  ulonglong in_stack_fffffffffffffd10;
  ulonglong in_stack_fffffffffffffd18;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  longlong *local_298;
  longlong *local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  float local_270;
  longlong local_268;
  longlong lStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float fStack_214;
  float local_210;
  undefined8 local_20c;
  undefined4 local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  uint local_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  longlong lStack_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  longlong lStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [16];
  int local_108;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  if (*(int *)(param_2 + 0x18) != 0) {
    local_1a8 = (longlong *)(param_2 + 0x10);
    FUN_142a687a0(param_1,*(undefined4 *)(param_2 + 0x50),param_2 + 0x20,local_1a8,param_2 + 0x78,
                  in_stack_fffffffffffffd10 & 0xffffffffffffff00,
                  in_stack_fffffffffffffd18 & 0xffffffffffffff00);
    plVar34 = *(longlong **)(param_1 + 0x20);
    plVar24 = plVar34 + (longlong)*(int *)(param_1 + 0x28) * 0x3a;
    local_290 = plVar34;
    if (plVar34 != plVar24) {
      plVar32 = plVar34 + 0x12;
      do {
        fVar37 = 0.0;
        if ((int)plVar32[-6] != -1) {
          *(int *)(plVar32 + 0x1c) = 0;
          local_290 = plVar34;
          if (0x7fffffff < *(uint *)((longlong)plVar32 + 0xe4)) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar32 + 0x1b,0);
          }
          *(int *)(plVar32 + 0x1e) = 0;
          if ((*(int *)((longlong)plVar32 + 0xf4) < 0) && (*(int *)((longlong)plVar32 + 0xf4) != 0))
          {
            TArray<float,FDefaultAllocator>::ResizeTo(plVar32 + 0x1d,0);
          }
          *(int *)(plVar32 + 0x20) = 0;
          if ((*(int *)((longlong)plVar32 + 0x104) < 0) &&
             (*(int *)((longlong)plVar32 + 0x104) != 0)) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar32 + 0x1f,0);
          }
          *(int *)(plVar32 + 0x22) = 0;
          if ((*(int *)((longlong)plVar32 + 0x114) < 0) &&
             (*(int *)((longlong)plVar32 + 0x114) != 0)) {
            TArray<float,FDefaultAllocator>::ResizeTo(plVar32 + 0x21,0);
          }
          *(int *)(plVar32 + 0x24) = 0;
          if ((*(int *)((longlong)plVar32 + 0x124) < 0) &&
             (*(int *)((longlong)plVar32 + 0x124) != 0)) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
            ResizeTo(plVar32 + 0x23,0);
          }
          if (((char)plVar32[0xd] != '\0') && ((int)plVar32[-6] != -1)) {
            FClothCollisionData::Reset(plVar32 + -5);
            FClothCollisionData::Append
                      (plVar32 + -5,
                       *(longlong *)(*plVar34 + 0x118) + (longlong)(int)plVar32[-6] * 0x108 + 0xa8);
            FClothCollisionData::Append(plVar32 + -5,plVar32 + 7);
            FClothCollisionData::Append(plVar32 + -5,plVar32 + 1);
            *(undefined1 *)(plVar32 + 0xd) = 0;
          }
          lVar33 = 0;
          lVar17 = *plVar34;
          pfVar19 = (float *)((longlong)*(int *)(lVar17 + 0x158) * 0x30 +
                             *(longlong *)(param_2 + 0x10));
          fVar70 = *pfVar19;
          fVar71 = pfVar19[1];
          local_258 = *(longlong *)pfVar19;
          fVar72 = pfVar19[2];
          fVar73 = pfVar19[3];
          uStack_250 = *(longlong *)(pfVar19 + 2);
          fVar67 = pfVar19[4];
          fVar68 = pfVar19[5];
          fVar69 = pfVar19[6];
          fVar44 = pfVar19[7];
          auVar7 = *(undefined1 (*) [16])(pfVar19 + 8);
          fVar50 = auVar7._0_4_;
          fVar8 = auVar7._4_4_;
          fVar9 = auVar7._8_4_;
          fVar10 = auVar7._12_4_;
          local_1c8 = fVar67;
          fStack_1c4 = fVar68;
          fStack_1c0 = fVar69;
          fStack_1bc = fVar44;
          local_138 = fVar70;
          fStack_134 = fVar71;
          fStack_130 = fVar72;
          fStack_12c = fVar73;
          local_128 = fVar67;
          fStack_124 = fVar68;
          fStack_120 = fVar69;
          fStack_11c = fVar44;
          local_118 = auVar7;
          FUN_142a67020(lVar17,(longlong)(int)plVar32[-6] * 0x108 + *(longlong *)(lVar17 + 0x118),
                        &local_138,*(undefined8 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x80),
                        plVar34 + ((longlong)(int)plVar32[0x11] + 0x12) * 2,plVar32 + 0x16);
          cVar11 = *(char *)(param_2 + 0x70);
          lVar17 = plVar32[0xe];
          plVar31 = *(longlong **)((longlong)(int)plVar32[-6] * 0x40 + 8 + lVar17);
          local_298 = plVar31;
          if (cVar11 == '\x02') {
            lVar17 = plVar32[0x11];
            plVar16 = (longlong *)(**(code **)(*plVar31 + 0x40))(plVar31,&local_138);
            local_288 = *plVar16;
            uStack_280 = plVar16[1];
            (*(code *)local_118._8_8_)((longlong)local_108 + CONCAT44(fStack_124,local_128));
            plVar16 = (longlong *)(**(code **)(*plVar31 + 0x50))(plVar31,&local_2d8);
            local_1b8 = *plVar16;
            uStack_1b0 = plVar16[1];
            (*(code *)CONCAT44(fStack_2ac,fStack_2b0))
                      ((longlong)(int)(float)local_2a8 + CONCAT44(fStack_2c4,local_2c8));
            iVar12 = (**(code **)(*plVar31 + 0x20))(plVar31);
            lVar30 = (longlong)iVar12;
            if (3 < lVar30) {
              lVar29 = plVar34[((longlong)(int)lVar17 + 0x12) * 2];
              lVar23 = local_1b8 - local_288;
              lVar25 = (lVar30 - 4U >> 2) + 1;
              lVar33 = lVar25 * 4;
              puVar20 = (undefined4 *)(local_288 + 0x14);
              puVar21 = (undefined4 *)(lVar29 + 8);
              puVar28 = (undefined4 *)(lVar29 + 0x14);
              do {
                uVar13 = puVar21[-1];
                uVar4 = *puVar21;
                puVar1 = puVar20 + 0x10;
                puVar20[-5] = puVar21[-2];
                puVar20[-4] = uVar13;
                puVar20[-3] = uVar4;
                puVar20[-2] = puVar20[-2];
                *(undefined4 *)(lVar23 + -0x54 + (longlong)puVar1) = puVar20[-5];
                *(undefined4 *)(lVar23 + -0x50 + (longlong)puVar1) = puVar20[-4];
                *(undefined4 *)(lVar23 + -0x4c + (longlong)puVar1) = puVar20[-3];
                *(undefined4 *)(lVar23 + -0x48 + (longlong)puVar1) = puVar20[-2];
                uVar13 = puVar28[-1];
                uVar4 = *puVar28;
                puVar20[-1] = puVar21[1];
                *puVar20 = uVar13;
                puVar20[1] = uVar4;
                puVar20[2] = puVar20[2];
                *(undefined4 *)(lVar23 + -0x44 + (longlong)puVar1) = puVar20[-1];
                *(undefined4 *)(lVar23 + -0x40 + (longlong)puVar1) = *puVar20;
                *(undefined4 *)(lVar23 + -0x3c + (longlong)puVar1) = puVar20[1];
                *(undefined4 *)(lVar23 + -0x38 + (longlong)puVar1) = puVar20[2];
                uVar13 = puVar28[2];
                uVar4 = puVar28[3];
                puVar20[3] = puVar21[4];
                puVar20[4] = uVar13;
                puVar20[5] = uVar4;
                puVar20[6] = puVar20[6];
                *(undefined4 *)(lVar23 + -0x34 + (longlong)puVar1) = puVar20[3];
                *(undefined4 *)(lVar23 + -0x30 + (longlong)puVar1) = puVar20[4];
                *(undefined4 *)(lVar23 + -0x2c + (longlong)puVar1) = puVar20[5];
                *(undefined4 *)(lVar23 + -0x28 + (longlong)puVar1) = puVar20[6];
                uVar13 = puVar28[5];
                uVar4 = puVar28[6];
                puVar20[7] = puVar21[7];
                puVar20[8] = uVar13;
                puVar20[9] = uVar4;
                puVar20[10] = puVar20[10];
                *(undefined4 *)(lVar23 + -0x24 + (longlong)puVar1) = puVar20[7];
                *(undefined4 *)(lVar23 + -0x20 + (longlong)puVar1) = puVar20[8];
                *(undefined4 *)(lVar23 + -0x1c + (longlong)puVar1) = puVar20[9];
                *(undefined4 *)(lVar23 + -0x18 + (longlong)puVar1) = puVar20[10];
                lVar25 = lVar25 + -1;
                puVar20 = puVar1;
                puVar21 = puVar21 + 0xc;
                puVar28 = puVar28 + 0xc;
              } while (lVar25 != 0);
            }
            if (lVar33 < lVar30) {
              lVar29 = local_1b8 - local_288;
              puVar20 = (undefined4 *)(plVar34[((longlong)(int)lVar17 + 0x12) * 2] + lVar33 * 0xc);
              puVar21 = (undefined4 *)(local_288 + 4 + lVar33 * 0x10);
              lVar30 = lVar30 - lVar33;
              do {
                uVar13 = *puVar20;
                uVar4 = puVar20[1];
                uVar5 = puVar20[2];
                puVar20 = puVar20 + 3;
                puVar21[-1] = uVar13;
                *puVar21 = uVar4;
                puVar21[1] = uVar5;
                puVar21[2] = puVar21[2];
                *(undefined4 *)((longlong)puVar21 + lVar29 + -4) = uVar13;
                *(undefined4 *)((longlong)puVar21 + lVar29) = *puVar21;
                *(undefined4 *)((longlong)puVar21 + lVar29 + 4) = puVar21[1];
                *(undefined4 *)((longlong)puVar21 + lVar29 + 8) = puVar21[2];
                puVar21 = puVar21 + 4;
                lVar30 = lVar30 + -1;
              } while (lVar30 != 0);
            }
            lVar17 = (**(code **)(*plVar31 + 0x278))(plVar31);
          }
          fVar56 = fRam0000000146b29b28;
          fVar47 = fRam0000000146b29b24;
          fVar63 = _DAT_146b29b20;
          fVar62 = fRam0000000146b29ac8;
          fVar61 = fRam0000000146b29ac4;
          fVar60 = _DAT_146b29ac0;
          auVar35 = *(undefined1 (*) [16])(param_2 + 0x40);
          fVar38 = auVar35._0_4_;
          fVar39 = auVar35._4_4_;
          fVar40 = auVar35._8_4_;
          fVar42 = auVar35._12_4_;
          fVar41 = *(float *)(param_2 + 0x20);
          fVar43 = *(float *)(param_2 + 0x24);
          fVar49 = *(float *)(param_2 + 0x28);
          fVar52 = *(float *)(param_2 + 0x2c);
          auVar35 = minps(auVar7,auVar35);
          auVar36._4_4_ = -(uint)(auVar35._4_4_ < fRam0000000146b29b24);
          auVar36._0_4_ = -(uint)(auVar35._0_4_ < _DAT_146b29b20);
          auVar36._8_4_ = -(uint)(auVar35._8_4_ < fRam0000000146b29b28);
          auVar36._12_4_ = -(uint)(auVar35._12_4_ < fRam0000000146b29b2c);
          iVar12 = movmskps((int)lVar17,auVar36);
          if (iVar12 == 0) {
            fVar46 = fVar67 * fVar38;
            fVar48 = fVar68 * fVar39;
            fVar51 = fVar69 * fVar40;
            fVar44 = fVar44 * fVar42;
            fVar60 = fVar73 * fVar41 * _DAT_146b29b00 + fVar70 * fVar52 +
                     fVar72 * fVar43 * _DAT_146b29af0 + fVar71 * fVar49 * _DAT_146b29ae0;
            fVar61 = fVar72 * fVar41 * fRam0000000146b29b04 + fVar71 * fVar52 +
                     fVar73 * fVar43 * fRam0000000146b29af4 + fVar70 * fVar49 * fRam0000000146b29ae4
            ;
            fVar62 = fVar71 * fVar41 * fRam0000000146b29b08 + fVar72 * fVar52 +
                     fVar70 * fVar43 * fRam0000000146b29af8 + fVar73 * fVar49 * fRam0000000146b29ae8
            ;
            fVar63 = fVar70 * fVar41 * fRam0000000146b29b0c + fVar73 * fVar52 +
                     fVar71 * fVar43 * fRam0000000146b29afc + fVar72 * fVar49 * fRam0000000146b29aec
            ;
            fVar37 = fVar51 * fVar43 - fVar48 * fVar49;
            fVar47 = fVar46 * fVar49 - fVar51 * fVar41;
            fVar56 = fVar48 * fVar41 - fVar46 * fVar43;
            fVar45 = fVar44 * fVar52 - fVar44 * fVar52;
            fVar37 = fVar37 + fVar37;
            fVar47 = fVar47 + fVar47;
            fVar56 = fVar56 + fVar56;
            fVar45 = fVar45 + fVar45;
            local_288 = CONCAT44(fVar8 * fVar39,fVar50 * fVar38);
            uStack_280 = CONCAT44(fVar10 * fVar42,fVar9 * fVar40);
            fVar38 = (fVar56 * fVar43 - fVar47 * fVar49) + fVar52 * fVar37 + fVar46 +
                     *(float *)(param_2 + 0x30);
            fVar39 = (fVar37 * fVar49 - fVar56 * fVar41) + fVar52 * fVar47 + fVar48 +
                     *(float *)(param_2 + 0x34);
            fVar40 = (fVar47 * fVar41 - fVar37 * fVar43) + fVar52 * fVar56 + fVar51 +
                     *(float *)(param_2 + 0x38);
            fVar37 = (fVar45 * fVar52 - fVar45 * fVar52) + fVar52 * fVar45 + fVar44 +
                     *(float *)(param_2 + 0x3c);
          }
          else {
            fVar67 = *(float *)(param_2 + 0x30);
            fVar68 = *(float *)(param_2 + 0x34);
            fVar69 = *(float *)(param_2 + 0x38);
            fVar44 = fVar43 + fVar43;
            fVar46 = fVar49 + fVar49;
            local_288 = CONCAT44(fVar8 * fVar39,fVar50 * fVar38);
            uStack_280 = CONCAT44(fVar10 * fVar42,fVar9 * fVar40);
            fVar48 = (fVar41 + fVar41) * fVar41;
            fVar45 = (fVar41 + fVar41) * fVar52;
            fVar64 = (fVar46 * fVar52 + fVar44 * fVar41) * fVar38;
            fVar65 = (fVar45 + fVar46 * fVar43) * fVar39;
            fVar66 = (fVar44 * fVar52 + fVar46 * fVar41) * fVar40;
            fVar51 = fVar39 * (fVar44 * fVar41 - fVar46 * fVar52);
            fVar45 = fVar40 * (fVar46 * fVar43 - fVar45);
            fVar55 = fVar38 * (fVar46 * fVar41 - fVar44 * fVar52);
            fVar38 = (float)((uint)((_DAT_146b29ac0 - (fVar46 * fVar49 + fVar44 * fVar43)) * fVar38)
                            & _DAT_146b29ad0);
            fVar39 = (float)((uint)((fRam0000000146b29ac4 - (fVar46 * fVar49 + fVar48)) * fVar39) &
                            uRam0000000146b29ad4);
            fVar41 = (float)((uint)((fRam0000000146b29ac8 - (fVar44 * fVar43 + fVar48)) * fVar40) &
                            uRam0000000146b29ad8);
            fVar43 = (float)((uint)((fRam0000000146b29acc - (fVar48 + fVar48)) * fVar42) &
                            uRam0000000146b29adc);
            fVar40 = fVar71 + fVar71;
            fVar42 = fVar72 + fVar72;
            fVar49 = fVar70 * (fVar70 + fVar70);
            fVar44 = fVar73 * (fVar70 + fVar70);
            fVar57 = (fVar73 * fVar42 + fVar70 * fVar40) * fVar50;
            fVar58 = (fVar44 + fVar71 * fVar42) * fVar8;
            fVar59 = (fVar73 * fVar40 + fVar70 * fVar42) * fVar9;
            fVar52 = fVar8 * (fVar70 * fVar40 - fVar73 * fVar42);
            fVar46 = fVar9 * (fVar71 * fVar42 - fVar44);
            fVar48 = fVar50 * (fVar70 * fVar42 - fVar73 * fVar40);
            fVar44 = (float)((uint)((_DAT_146b29ac0 - (fVar72 * fVar42 + fVar71 * fVar40)) * fVar50)
                            & _DAT_146b29ad0);
            fVar42 = (float)((uint)((fRam0000000146b29ac4 - (fVar72 * fVar42 + fVar49)) * fVar8) &
                            uRam0000000146b29ad4);
            fVar40 = (float)((uint)((fRam0000000146b29ac8 - (fVar71 * fVar40 + fVar49)) * fVar9) &
                            uRam0000000146b29ad8);
            fVar49 = (float)((uint)((fRam0000000146b29acc - (fVar49 + fVar49)) * fVar10) &
                            uRam0000000146b29adc);
            local_2d8 = fVar57 * fVar51 + fVar44 * fVar38 + fVar48 * fVar66 + fVar49 * fVar67;
            fStack_2d4 = fVar57 * fVar39 + fVar44 * fVar64 + fVar48 * fVar45 + fVar49 * fVar68;
            fStack_2d0 = fVar57 * fVar65 + fVar44 * fVar55 + fVar48 * fVar41 + fVar49 * fVar69;
            fStack_2cc = fVar57 * fVar43 + fVar44 * fVar43 + fVar48 * fVar43 +
                         fVar49 * fRam0000000146b29acc;
            local_2c8 = fVar42 * fVar51 + fVar52 * fVar38 + fVar58 * fVar66 + fVar49 * fVar67;
            fStack_2c4 = fVar42 * fVar39 + fVar52 * fVar64 + fVar58 * fVar45 + fVar49 * fVar68;
            fStack_2c0 = fVar42 * fVar65 + fVar52 * fVar55 + fVar58 * fVar41 + fVar49 * fVar69;
            fStack_2bc = fVar42 * fVar43 + fVar52 * fVar43 + fVar58 * fVar43 +
                         fVar49 * fRam0000000146b29acc;
            local_2b8 = fVar46 * fVar51 + fVar59 * fVar38 + fVar40 * fVar66 + fVar49 * fVar67;
            fStack_2b4 = fVar46 * fVar39 + fVar59 * fVar64 + fVar40 * fVar45 + fVar49 * fVar68;
            fStack_2b0 = fVar46 * fVar65 + fVar59 * fVar55 + fVar40 * fVar41 + fVar49 * fVar69;
            fStack_2ac = fVar46 * fVar43 + fVar59 * fVar43 + fVar40 * fVar43 +
                         fVar49 * fRam0000000146b29acc;
            local_2a8 = CONCAT44(fStack_1c4 * fVar39 + local_1c8 * fVar64 + fStack_1c0 * fVar45 +
                                 fRam0000000146b29acc * fVar68,
                                 fStack_1c4 * fVar51 + local_1c8 * fVar38 + fStack_1c0 * fVar66 +
                                 fRam0000000146b29acc * fVar67);
            uStack_2a0 = CONCAT44(fStack_1c4 * fVar43 + local_1c8 * fVar43 + fStack_1c0 * fVar43 +
                                  fRam0000000146b29acc * fRam0000000146b29acc,
                                  fStack_1c4 * fVar65 + local_1c8 * fVar55 + fStack_1c0 * fVar41 +
                                  fRam0000000146b29acc * fVar69);
            FMatrix::RemoveScaling(&local_2d8);
            fVar67 = (float)(-(uint)(fVar63 <= (float)local_288) & (_DAT_146b29b10 ^ (uint)fVar60) ^
                            _DAT_146b29b10);
            fVar68 = (float)(-(uint)(fVar47 <= local_288._4_4_) &
                             (uRam0000000146b29b14 ^ (uint)fVar61) ^ uRam0000000146b29b14);
            fVar69 = (float)(-(uint)(fVar56 <= (float)uStack_280) &
                             (uRam0000000146b29b18 ^ (uint)fVar62) ^ uRam0000000146b29b18);
            local_2d8 = local_2d8 * fVar67;
            fStack_2d0 = fStack_2d0 * fVar67;
            fStack_2d4 = fStack_2d4 * fVar67;
            fStack_2c0 = fStack_2c0 * fVar68;
            fStack_2c4 = fStack_2c4 * fVar68;
            local_2c8 = local_2c8 * fVar68;
            fStack_2b0 = fStack_2b0 * fVar69;
            local_2b8 = local_2b8 * fVar69;
            fStack_2b4 = fStack_2b4 * fVar69;
            FQuat::FQuat(&local_198,&local_2d8);
            auVar35._0_4_ = local_198 * local_198 + fStack_190 * fStack_190;
            auVar35._4_4_ = fStack_194 * fStack_194 + fStack_18c * fStack_18c;
            auVar35._8_4_ = fStack_190 * fStack_190 + local_198 * local_198;
            auVar35._12_4_ = fStack_18c * fStack_18c + fStack_194 * fStack_194;
            auVar53._0_4_ = auVar35._4_4_ + auVar35._0_4_;
            auVar53._4_4_ = auVar35._8_4_ + auVar35._4_4_;
            auVar53._8_4_ = auVar35._12_4_ + auVar35._8_4_;
            auVar53._12_4_ = auVar35._0_4_ + auVar35._12_4_;
            auVar35 = rsqrtps(auVar35,auVar53);
            fVar67 = auVar35._0_4_;
            fVar68 = auVar35._4_4_;
            fVar69 = auVar35._8_4_;
            fVar44 = auVar35._12_4_;
            fVar67 = (_DAT_146b29ab0 - fVar67 * fVar67 * auVar53._0_4_ * _DAT_146b29ab0) * fVar67 +
                     fVar67;
            fVar68 = (fRam0000000146b29ab4 - fVar68 * fVar68 * auVar53._4_4_ * fRam0000000146b29ab4)
                     * fVar68 + fVar68;
            fVar69 = (fRam0000000146b29ab8 - fVar69 * fVar69 * auVar53._8_4_ * fRam0000000146b29ab8)
                     * fVar69 + fVar69;
            fVar44 = (fRam0000000146b29abc - fVar44 * fVar44 * auVar53._12_4_ * fRam0000000146b29abc
                     ) * fVar44 + fVar44;
            fVar60 = (float)(((uint)(((_DAT_146b29ab0 -
                                      fVar67 * fVar67 * auVar53._0_4_ * _DAT_146b29ab0) * fVar67 +
                                     fVar67) * local_198) ^ _DAT_146b29aa0) &
                             -(uint)(1e-08 <= auVar53._0_4_) ^ _DAT_146b29aa0);
            fVar61 = (float)(((uint)(((fRam0000000146b29ab4 -
                                      fVar68 * fVar68 * auVar53._4_4_ * fRam0000000146b29ab4) *
                                      fVar68 + fVar68) * fStack_194) ^ uRam0000000146b29aa4) &
                             -(uint)(1e-08 <= auVar53._4_4_) ^ uRam0000000146b29aa4);
            fVar62 = (float)(((uint)(((fRam0000000146b29ab8 -
                                      fVar69 * fVar69 * auVar53._8_4_ * fRam0000000146b29ab8) *
                                      fVar69 + fVar69) * fStack_190) ^ uRam0000000146b29aa8) &
                             -(uint)(1e-08 <= auVar53._8_4_) ^ uRam0000000146b29aa8);
            fVar63 = (float)(((uint)(((fRam0000000146b29abc -
                                      fVar44 * fVar44 * auVar53._12_4_ * fRam0000000146b29abc) *
                                      fVar44 + fVar44) * fStack_18c) ^ uRam0000000146b29aac) &
                             -(uint)(1e-08 <= auVar53._12_4_) ^ uRam0000000146b29aac);
            fVar67 = local_1c8;
            fVar68 = fStack_1c4;
            fVar69 = fStack_1c0;
            fVar38 = (float)local_2a8;
            fVar39 = local_2a8._4_4_;
            fVar40 = (float)uStack_2a0;
            local_198 = fVar60;
            fStack_194 = fVar61;
            fStack_190 = fVar62;
            fStack_18c = fVar63;
          }
          local_1b8 = CONCAT44(fVar39,fVar38);
          uStack_1b0 = CONCAT44(fVar37,fVar40);
          local_168 = fVar60;
          fStack_164 = fVar61;
          fStack_160 = fVar62;
          fStack_15c = fVar63;
          if (cVar11 != '\0') {
            local_248 = fVar38;
            local_244 = fVar39;
            local_240 = fVar40;
            local_200 = fVar60;
            local_1fc = fVar61;
            local_1f8 = fVar62;
            local_1f4 = fVar63;
            (**(code **)(*plVar31 + 0x90))(plVar31,&local_248);
            (**(code **)(*plVar31 + 0x98))(plVar31);
          }
          local_23c = fVar38;
          local_238 = fVar39;
          local_234 = fVar40;
          (**(code **)(*plVar31 + 0x60))(plVar31,&local_23c);
          local_1f0 = fVar60;
          local_1ec = fVar61;
          local_1e8 = fVar62;
          local_1e4 = fVar63;
          (**(code **)(*plVar31 + 0x68))(plVar31,&local_1f0);
          fVar44 = *(float *)(*plVar34 + 0xfc);
          if ((char)plVar32[-0x10] == '\0') {
            local_224 = fVar44 * *(float *)(param_2 + 0x60);
            pfVar19 = &local_224;
            local_220 = fVar44 * *(float *)(param_2 + 100);
            local_21c = fVar44 * *(float *)(param_2 + 0x68);
          }
          else {
            local_230 = fVar44 * *(float *)((longlong)plVar32 + -0x7c);
            pfVar19 = &local_230;
            local_22c = fVar44 * *(float *)(plVar32 + -0xf);
            local_228 = fVar44 * *(float *)((longlong)plVar32 + -0x74);
          }
          (**(code **)(*plVar31 + 0xa8))(plVar31,pfVar19);
          FUN_142a6a1d0(plVar34,param_2);
          plVar16 = local_1a8;
          piVar27 = (int *)plVar32[-5];
          piVar2 = piVar27 + (longlong)(int)plVar32[-4] * 5;
          if (piVar27 != piVar2) {
            pfVar19 = (float *)(piVar27 + 2);
            do {
              local_270 = pfVar19[2];
              uVar6 = *(undefined8 *)pfVar19;
              if ((*piVar27 == -1) ||
                 (iVar12 = *(int *)(*(longlong *)(*plVar34 + 0x148) + (longlong)*piVar27 * 4),
                 iVar12 == -1)) {
                local_278._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
                local_278._0_4_ = (float)uVar6;
                fVar44 = (float)local_278;
                fVar42 = local_278._4_4_;
                fVar41 = local_270;
              }
              else {
                pauVar22 = (undefined1 (*) [16])((longlong)iVar12 * 0x30 + *plVar16);
                fVar51 = *pfVar19 * *(float *)pauVar22[2];
                fVar55 = pfVar19[1] * *(float *)(pauVar22[2] + 4);
                fVar57 = pfVar19[2] * *(float *)(pauVar22[2] + 8);
                auVar35 = *pauVar22;
                fVar44 = auVar35._0_4_;
                fVar42 = auVar35._4_4_;
                fVar41 = auVar35._8_4_;
                fVar43 = auVar35._12_4_;
                auVar54._0_8_ = auVar35._4_8_;
                auVar54._8_4_ = fVar44;
                auVar54._12_4_ = fVar43;
                fVar49 = fVar57 * fVar42 - fVar55 * fVar41;
                fVar52 = fVar51 * fVar41 - fVar57 * fVar44;
                fVar47 = fVar55 * fVar44 - fVar51 * fVar42;
                fVar49 = fVar49 + fVar49;
                fVar52 = fVar52 + fVar52;
                fVar47 = fVar47 + fVar47;
                auVar35 = rcpps(auVar54,auVar7);
                fVar56 = fVar70 * _DAT_146b29bd0;
                fVar45 = fVar71 * fRam0000000146b29bd4;
                fVar46 = fVar72 * fRam0000000146b29bd8;
                fVar48 = fVar73 * fRam0000000146b29bdc;
                fVar51 = (float)((uint)(((fVar47 * fVar42 - fVar52 * fVar41) +
                                         fVar43 * fVar49 + fVar51 + *(float *)pauVar22[1]) - fVar67)
                                & _DAT_146b29ad0);
                fVar55 = (float)((uint)(((fVar49 * fVar41 - fVar47 * fVar44) +
                                         fVar43 * fVar52 + fVar55 + *(float *)(pauVar22[1] + 4)) -
                                       fVar68) & uRam0000000146b29ad4);
                fVar47 = (float)((uint)(((fVar52 * fVar44 - fVar49 * fVar42) +
                                         fVar43 * fVar47 + fVar57 + *(float *)(pauVar22[1] + 8)) -
                                       fVar69) & uRam0000000146b29ad8);
                fVar41 = fVar47 * fVar45 - fVar55 * fVar46;
                fVar43 = fVar51 * fVar46 - fVar47 * fVar56;
                fVar49 = fVar55 * fVar56 - fVar51 * fVar45;
                fVar44 = auVar35._0_4_;
                fVar42 = auVar35._4_4_;
                fVar52 = auVar35._8_4_;
                fVar41 = fVar41 + fVar41;
                fVar43 = fVar43 + fVar43;
                fVar49 = fVar49 + fVar49;
                fVar44 = (fVar44 + fVar44) - fVar44 * fVar44 * fVar50;
                fVar42 = (fVar42 + fVar42) - fVar42 * fVar42 * fVar8;
                fVar52 = (fVar52 + fVar52) - fVar52 * fVar52 * fVar9;
                fVar44 = (fVar44 + fVar44) - fVar44 * fVar44 * fVar50;
                fVar42 = (fVar42 + fVar42) - fVar42 * fVar42 * fVar8;
                fVar52 = (fVar52 + fVar52) - fVar52 * fVar52 * fVar9;
                fVar44 = ((fVar49 * fVar45 - fVar43 * fVar46) + fVar48 * fVar41 + fVar51) *
                         (float)(-(uint)((float)((uint)fVar50 & _DAT_146b29b50) <= _DAT_146b29bc0) &
                                 (uint)fVar44 ^ (uint)fVar44);
                fVar42 = ((fVar41 * fVar46 - fVar49 * fVar56) + fVar48 * fVar43 + fVar55) *
                         (float)(-(uint)((float)((uint)fVar8 & uRam0000000146b29b54) <=
                                        fRam0000000146b29bc4) & (uint)fVar42 ^ (uint)fVar42);
                fVar41 = ((fVar43 * fVar56 - fVar41 * fVar45) + fVar48 * fVar49 + fVar47) *
                         (float)(-(uint)((float)((uint)fVar9 & uRam0000000146b29b58) <=
                                        fRam0000000146b29bc8) & (uint)fVar52 ^ (uint)fVar52);
              }
              iVar12 = (int)plVar32[0x1c];
              fVar43 = *(float *)((longlong)plVar32 + 0x84);
              fVar49 = pfVar19[-1];
              *(int *)(plVar32 + 0x1c) = iVar12 + 1;
              local_278 = uVar6;
              if (*(int *)((longlong)plVar32 + 0xe4) < iVar12 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar32 + 0x1b,iVar12);
              }
              piVar27 = piVar27 + 5;
              pfVar19 = pfVar19 + 5;
              pfVar18 = (float *)((longlong)iVar12 * 0x10 + plVar32[0x1b]);
              *pfVar18 = fVar44;
              pfVar18[1] = fVar42;
              pfVar18[2] = fVar41;
              pfVar18[3] = fVar43 + fVar49;
              plVar31 = local_298;
            } while (piVar27 != piVar2);
          }
          local_268 = plVar32[0x1b];
          lVar33 = *plVar31;
          lStack_260 = (longlong)(int)plVar32[0x1c] * 0x10 + local_268;
          local_188 = local_268;
          lStack_180 = lStack_260;
          uVar13 = (**(code **)(lVar33 + 0x158))(plVar31);
          (**(code **)(lVar33 + 0x150))(plVar31,&local_268,0,uVar13);
          puVar21 = (undefined4 *)plVar32[-3];
          puVar20 = puVar21 + (longlong)(int)plVar32[-2] * 2;
          for (; puVar21 != puVar20; puVar21 = puVar21 + 2) {
            iVar12 = (int)plVar32[0x1e];
            uVar13 = *puVar21;
            *(int *)(plVar32 + 0x1e) = iVar12 + 1;
            if (*(int *)((longlong)plVar32 + 0xf4) < iVar12 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar32 + 0x1d,iVar12);
            }
            *(undefined4 *)(plVar32[0x1d] + (longlong)iVar12 * 4) = uVar13;
            iVar12 = (int)plVar32[0x1e];
            uVar13 = puVar21[1];
            *(int *)(plVar32 + 0x1e) = iVar12 + 1;
            if (*(int *)((longlong)plVar32 + 0xf4) < iVar12 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar32 + 0x1d,iVar12);
            }
            *(undefined4 *)(plVar32[0x1d] + (longlong)iVar12 * 4) = uVar13;
            plVar34 = local_290;
          }
          local_268 = plVar32[0x1d];
          lVar33 = *plVar31;
          lStack_260 = local_268 + (longlong)(int)plVar32[0x1e] * 4;
          local_178 = local_268;
          lStack_170 = lStack_260;
          uVar13 = (**(code **)(lVar33 + 0x168))(plVar31);
          (**(code **)(lVar33 + 0x160))(plVar31,&local_268,0,uVar13);
          plVar26 = (longlong *)plVar32[-1];
          plVar16 = plVar26 + (longlong)(int)*plVar32 * 3;
          local_298 = plVar26;
          if (plVar26 != plVar16) {
            do {
              if ((int)plVar32[0x20] < 0x20) {
                iVar12 = (int)plVar32[0x22];
                *(int *)(plVar32 + 0x22) = iVar12 + 1;
                local_298 = plVar26;
                if (*(int *)((longlong)plVar32 + 0x114) < iVar12 + 1) {
                  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar32 + 0x21,iVar12);
                }
                *(undefined4 *)(plVar32[0x21] + (longlong)iVar12 * 4) = 0;
                lVar33 = *plVar26;
                local_1a0 = (longlong)(int)plVar32[0x22];
                local_268 = plVar32[0x21];
                lVar17 = (longlong)(int)plVar26[1] * 0x10 + lVar33;
                if (lVar33 != lVar17) {
                  iVar12 = (int)plVar32[0x20];
                  fVar44 = fVar71 + fVar71;
                  fVar38 = fVar72 + fVar72;
                  fVar39 = fVar70 * (fVar70 + fVar70);
                  fVar37 = fVar73 * (fVar70 + fVar70);
                  fVar40 = (fVar73 * fVar38 + fVar70 * fVar44) * fVar50;
                  local_f8 = (fVar73 * fVar44 + fVar70 * fVar38) * fVar9;
                  fVar42 = fVar8 * (fVar70 * fVar44 - fVar73 * fVar38);
                  fStack_f0 = fVar9 * (fVar71 * fVar38 - fVar37);
                  fStack_f4 = fVar40;
                  fStack_ec = fVar42;
                  do {
                    fVar43 = fStack_f0;
                    fVar41 = local_f8;
                    iVar12 = iVar12 + 1;
                    *(int *)(plVar32 + 0x20) = iVar12;
                    if (*(int *)((longlong)plVar32 + 0x104) < iVar12) {
                      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar32 + 0x1f);
                      iVar12 = (int)plVar32[0x20];
                    }
                    lVar30 = plVar32[0x1f];
                    lVar29 = (longlong)iVar12;
                    local_2d8 = (float)((uint)((_DAT_146b29ac0 - (fVar72 * fVar38 + fVar71 * fVar44)
                                               ) * fVar50) & _DAT_146b29ad0);
                    fStack_2c4 = (float)((uint)((fRam0000000146b29ac4 - (fVar72 * fVar38 + fVar39))
                                               * fVar8) & uRam0000000146b29ad4);
                    fStack_2b0 = (float)((uint)((fRam0000000146b29ac8 - (fVar71 * fVar44 + fVar39))
                                               * fVar9) & uRam0000000146b29ad8);
                    fStack_2cc = (float)((uint)((fRam0000000146b29acc - (fVar39 + fVar39)) * fVar10)
                                        & uRam0000000146b29adc);
                    local_2a8 = CONCAT44(fVar68,fVar67);
                    uStack_2a0 = CONCAT44(fRam0000000146b29acc,fVar69);
                    fStack_2d4 = fVar40;
                    fStack_2d0 = fVar50 * (fVar70 * fVar38 - fVar73 * fVar44);
                    local_2c8 = fVar42;
                    fStack_2c0 = (fVar37 + fVar71 * fVar38) * fVar8;
                    fStack_2bc = fStack_2cc;
                    local_2b8 = fVar41;
                    fStack_2b4 = fVar43;
                    fStack_2ac = fStack_2cc;
                    pfVar19 = (float *)FMatrix::Inverse(&local_2d8,&local_138);
                    fStack_2cc = 0.0;
                    fStack_2bc = 0.0;
                    fVar67 = pfVar19[10];
                    fVar68 = pfVar19[9];
                    fVar69 = pfVar19[8];
                    fVar41 = pfVar19[6];
                    fVar43 = pfVar19[2];
                    fVar49 = pfVar19[1];
                    fVar52 = pfVar19[5];
                    fVar60 = pfVar19[4];
                    fVar61 = *pfVar19;
                    local_2d8 = fVar52 * fVar67 - fVar41 * fVar68;
                    fStack_2d4 = fVar69 * fVar41 - fVar60 * fVar67;
                    fStack_2d0 = fVar60 * fVar68 - fVar69 * fVar52;
                    local_2c8 = fVar43 * fVar68 - fVar49 * fVar67;
                    fStack_2c4 = fVar61 * fVar67 - fVar43 * fVar69;
                    fStack_2c0 = fVar49 * fVar69 - fVar61 * fVar68;
                    fStack_2ac = 0.0;
                    local_2b8 = fVar49 * fVar41 - fVar43 * fVar52;
                    fStack_2b0 = fVar61 * fVar52 - fVar49 * fVar60;
                    fStack_2b4 = fVar43 * fVar60 - fVar61 * fVar41;
                    local_2a8 = 0;
                    uStack_2a0 = 0x3f80000000000000;
                    uVar13 = FMatrix::Determinant(pfVar19);
                    FPlane::TransformByUsingAdjointT(lVar33,&local_1d8,pfVar19,uVar13,&local_2d8);
                    *(undefined4 *)(lVar30 + -0xc + lVar29 * 0x10) = local_1d4;
                    *(undefined4 *)(lVar30 + -0x10 + lVar29 * 0x10) = local_1d8;
                    *(uint *)(lVar30 + -4 + lVar29 * 0x10) = local_1cc ^ 0x80000000;
                    *(undefined4 *)(lVar30 + -8 + lVar29 * 0x10) = local_1d0;
                    puVar3 = (uint *)(local_268 + -4 + local_1a0 * 4);
                    *puVar3 = *puVar3 | 1 << ((char)(int)plVar32[0x20] - 1U & 0x1f);
                    iVar12 = (int)plVar32[0x20];
                  } while ((iVar12 < 0x20) &&
                          (lVar33 = lVar33 + 0x10, fVar67 = local_1c8, fVar68 = fStack_1c4,
                          fVar69 = fStack_1c0, lVar33 != lVar17));
                  plVar26 = local_298;
                  fVar70 = (float)local_258;
                  fVar71 = local_258._4_4_;
                  fVar72 = (float)uStack_250;
                  fVar73 = uStack_250._4_4_;
                }
              }
              plVar26 = plVar26 + 3;
              fVar67 = local_1c8;
              fVar68 = fStack_1c4;
              fVar69 = fStack_1c0;
            } while (plVar26 != plVar16);
            plVar34 = local_290;
            fVar60 = local_168;
            fVar61 = fStack_164;
            fVar62 = fStack_160;
            fVar63 = fStack_15c;
            fVar38 = (float)local_1b8;
            fVar39 = local_1b8._4_4_;
            fVar40 = (float)uStack_1b0;
            fVar37 = uStack_1b0._4_4_;
            local_298 = plVar26;
          }
          local_258 = plVar32[0x1f];
          lVar33 = *plVar31;
          uStack_250 = (longlong)(int)plVar32[0x20] * 0x10 + local_258;
          local_158 = local_258;
          lStack_150 = uStack_250;
          uVar13 = (**(code **)(lVar33 + 0x178))(plVar31);
          (**(code **)(lVar33 + 0x170))(plVar31,&local_258,0,uVar13);
          local_258 = plVar32[0x21];
          lVar33 = *plVar31;
          uStack_250 = local_258 + (longlong)(int)plVar32[0x22] * 4;
          local_148 = local_258;
          lStack_140 = uStack_250;
          uVar13 = (**(code **)(lVar33 + 0x188))(plVar31);
          (**(code **)(lVar33 + 0x180))(plVar31,&local_258,0,uVar13);
          FUN_142a6a750(plVar34,param_2,param_2 + 0x54);
          FUN_142a683c0(plVar34,param_2);
          if (*(float *)(param_2 + 8) <= 0.0) {
            local_20c = 0;
            pfVar19 = (float *)&local_20c;
            local_204 = 0;
          }
          else {
            fVar50 = 1.0 / *(float *)(param_2 + 8);
            local_218 = (fVar38 - *(float *)(plVar32 + -10)) * fVar50;
            fStack_214 = (fVar39 - *(float *)((longlong)plVar32 + -0x4c)) * fVar50;
            local_210 = (fVar40 - *(float *)(plVar32 + -9)) * fVar50;
            pfVar19 = &local_218;
          }
          fVar50 = pfVar19[2];
          plVar32[-0xe] = *(longlong *)pfVar19;
          *(float *)(plVar32 + -0xd) = fVar50;
          plVar32[-8] = local_288;
          plVar32[-7] = uStack_280;
          *(float *)(plVar32 + -0xc) = fVar60;
          *(float *)((longlong)plVar32 + -0x5c) = fVar61;
          *(float *)(plVar32 + -0xb) = fVar62;
          *(float *)((longlong)plVar32 + -0x54) = fVar63;
          *(float *)(plVar32 + -10) = fVar38;
          *(float *)((longlong)plVar32 + -0x4c) = fVar39;
          *(float *)(plVar32 + -9) = fVar40;
          *(float *)((longlong)plVar32 + -0x44) = fVar37;
          iVar12 = (int)plVar32[0x19];
          iVar14 = *(int *)((longlong)(int)plVar32[-6] * 0x108 + 0x18 +
                           *(longlong *)(*plVar34 + 0x118));
          if (iVar12 < iVar14) {
            *(int *)(plVar32 + 0x19) = iVar14;
            if (*(int *)((longlong)plVar32 + 0xcc) < iVar14) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar32 + 0x18);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(plVar32[0x18] + (longlong)iVar12 * 0xc),0,
                       (longlong)(iVar14 - iVar12) * 0xc);
          }
        }
        plVar34 = plVar34 + 0x3a;
        plVar32 = plVar32 + 0x3a;
        local_290 = plVar34;
      } while (plVar34 != plVar24);
    }
    iVar12 = 0;
    cVar11 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
    if (cVar11 != '\0') {
      iVar14 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
      if (0 < iVar14) {
        do {
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
                    (*(longlong **)(param_1 + 0x18),iVar12);
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar14);
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
    }
    lVar33 = *(longlong *)(param_1 + 0x20);
    lVar17 = (longlong)*(int *)(param_1 + 0x28) * 0x1d0 + lVar33;
    for (; lVar33 != lVar17; lVar33 = lVar33 + 0x1d0) {
      if (*(int *)(lVar33 + 0x60) != -1) {
        FUN_142a60670(param_1,lVar33);
        *(undefined4 *)(lVar33 + 0x160) = *(undefined4 *)(param_2 + 8);
        uVar15 = *(int *)(lVar33 + 0x118) + 1U & 0x80000001;
        if ((int)uVar15 < 0) {
          uVar15 = (uVar15 - 1 | 0xfffffffe) + 1;
        }
        *(uint *)(lVar33 + 0x118) = uVar15;
      }
    }
  }
  return;
}



// FUNCTION 142a67020 FUN_142a67020 body=4586 status=ok
// SIG undefined FUN_142a67020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a67020(longlong param_1,longlong *param_2,float *param_3,longlong param_4,
                  undefined8 param_5,longlong *param_6,longlong *param_7)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
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
  float fVar42;
  float fVar43;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar41 [16];
  
  plVar16 = param_6;
  auVar41 = _DAT_14401b160;
  uVar1 = *(uint *)(param_2 + 1);
  fVar9 = param_3[4];
  fVar10 = param_3[5];
  fVar11 = param_3[6];
  fVar36 = *param_3;
  fVar37 = param_3[1];
  fVar38 = param_3[2];
  fVar39 = param_3[3];
  fVar6 = (float)DAT_14401b160;
  fVar7 = DAT_14401b160._4_4_;
  fVar8 = DAT_14401b160._8_4_;
  *(undefined4 *)(param_6 + 1) = 0;
  param_6._0_4_ = 0;
  if (*(int *)((longlong)plVar16 + 0xc) < (int)uVar1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (plVar16);
  }
  *(undefined4 *)(param_7 + 1) = 0;
  if (*(int *)((longlong)param_7 + 0xc) < (int)uVar1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_7);
  }
  lVar15 = plVar16[1];
  iVar17 = (int)lVar15 + uVar1;
  *(int *)(plVar16 + 1) = iVar17;
  if (*(int *)((longlong)plVar16 + 0xc) < iVar17) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar16);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*plVar16 + (longlong)(int)lVar15 * 0xc),0,(longlong)(int)uVar1 * 0xc);
  lVar15 = param_7[1];
  iVar17 = (int)lVar15 + uVar1;
  *(int *)(param_7 + 1) = iVar17;
  if (*(int *)((longlong)param_7 + 0xc) < iVar17) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_7);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(*param_7 + (longlong)(int)lVar15 * 0xc),0,(longlong)(int)uVar1 * 0xc);
  if (uVar1 != 0) {
    fVar36 = fVar36 * _DAT_146b29bd0;
    fVar37 = fVar37 * fRam0000000146b29bd4;
    fVar38 = fVar38 * fRam0000000146b29bd8;
    fVar39 = fVar39 * fRam0000000146b29bdc;
    uVar21 = -(uint)((float)((uint)fVar6 & _DAT_146b29b50) <= _DAT_146b29bc0);
    uVar22 = -(uint)((float)((uint)fVar7 & uRam0000000146b29b54) <= fRam0000000146b29bc4);
    uVar23 = -(uint)((float)((uint)fVar8 & uRam0000000146b29b58) <= fRam0000000146b29bc8);
    auVar41 = rcpps(unaff_XMM9,auVar41);
    fVar40 = auVar41._0_4_;
    fVar42 = auVar41._4_4_;
    fVar43 = auVar41._8_4_;
    fVar24 = (fVar40 + fVar40) - fVar6 * fVar40 * fVar40;
    fVar25 = (fVar42 + fVar42) - fVar7 * fVar42 * fVar42;
    fVar26 = (fVar43 + fVar43) - fVar8 * fVar43 * fVar43;
    fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * fVar6;
    fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * fVar7;
    fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * fVar8;
    do {
      lVar15 = *param_2;
      lVar2 = param_2[2];
      lVar3 = *plVar16;
      lVar4 = *param_7;
      lVar18 = (longlong)(int)(uint)param_6;
      lVar5 = param_2[0x10];
      lVar20 = lVar18 * 0x34;
      switch(*(undefined4 *)(lVar20 + lVar5)) {
      case 8:
        fVar27 = *(float *)(lVar20 + 0x30 + lVar5);
        fVar28 = *(float *)(lVar15 + lVar18 * 0xc);
        fVar29 = *(float *)(lVar15 + 4 + lVar18 * 0xc);
        fVar30 = *(float *)(lVar15 + 8 + lVar18 * 0xc);
        pfVar19 = (float *)((longlong)
                            *(int *)(*(longlong *)(param_1 + 0x148) +
                                    (ulonglong)*(ushort *)(lVar20 + 0x12 + lVar5) * 4) * 0x40 +
                           param_4);
        fVar31 = pfVar19[0xd];
        fVar32 = pfVar19[0xe];
        fVar33 = pfVar19[9];
        fVar34 = pfVar19[10];
        fVar35 = pfVar19[5];
        fVar12 = pfVar19[6];
        fVar13 = pfVar19[1];
        fVar14 = pfVar19[2];
        *(float *)(lVar3 + lVar18 * 0xc) =
             (pfVar19[0xc] * 1.0 + fVar30 * pfVar19[8] + fVar29 * pfVar19[4] + fVar28 * *pfVar19) *
             fVar27 + *(float *)(lVar3 + lVar18 * 0xc);
        *(float *)(lVar3 + 8 + lVar18 * 0xc) =
             (fVar32 * 1.0 + fVar30 * fVar34 + fVar29 * fVar12 + fVar28 * fVar14) * fVar27 +
             *(float *)(lVar3 + 8 + lVar18 * 0xc);
        *(float *)(lVar3 + 4 + lVar18 * 0xc) =
             (fVar31 * 1.0 + fVar30 * fVar33 + fVar29 * fVar35 + fVar28 * fVar13) * fVar27 +
             *(float *)(lVar3 + 4 + lVar18 * 0xc);
        fVar28 = *(float *)(lVar2 + lVar18 * 0xc);
        fVar29 = *(float *)(lVar2 + 4 + lVar18 * 0xc);
        fVar30 = *(float *)(lVar2 + 8 + lVar18 * 0xc);
        fVar31 = pfVar19[0xd];
        fVar32 = pfVar19[0xe];
        fVar33 = pfVar19[9];
        fVar34 = pfVar19[10];
        fVar35 = pfVar19[5];
        fVar12 = pfVar19[6];
        fVar13 = pfVar19[1];
        fVar14 = pfVar19[2];
        *(float *)(lVar4 + lVar18 * 0xc) =
             (pfVar19[0xc] * 0.0 + fVar30 * pfVar19[8] + fVar29 * pfVar19[4] + fVar28 * *pfVar19) *
             fVar27 + *(float *)(lVar4 + lVar18 * 0xc);
        *(float *)(lVar4 + 8 + lVar18 * 0xc) =
             (fVar32 * 0.0 + fVar30 * fVar34 + fVar29 * fVar12 + fVar28 * fVar14) * fVar27 +
             *(float *)(lVar4 + 8 + lVar18 * 0xc);
        *(float *)(lVar4 + 4 + lVar18 * 0xc) =
             (fVar31 * 0.0 + fVar30 * fVar33 + fVar29 * fVar35 + fVar28 * fVar13) * fVar27 +
             *(float *)(lVar4 + 4 + lVar18 * 0xc);
      case 7:
        fVar27 = *(float *)(lVar20 + 0x2c + lVar5);
        fVar28 = *(float *)(lVar15 + lVar18 * 0xc);
        fVar29 = *(float *)(lVar15 + 4 + lVar18 * 0xc);
        fVar30 = *(float *)(lVar15 + 8 + lVar18 * 0xc);
        pfVar19 = (float *)((longlong)
                            *(int *)(*(longlong *)(param_1 + 0x148) +
                                    (ulonglong)*(ushort *)(lVar20 + 0x10 + lVar5) * 4) * 0x40 +
                           param_4);
        fVar31 = pfVar19[9];
        fVar32 = pfVar19[10];
        fVar33 = pfVar19[0xd];
        fVar34 = pfVar19[0xe];
        fVar35 = pfVar19[5];
        fVar12 = pfVar19[6];
        fVar13 = pfVar19[1];
        fVar14 = pfVar19[2];
        *(float *)(lVar3 + lVar18 * 0xc) =
             (fVar30 * pfVar19[8] + pfVar19[0xc] * 1.0 + fVar29 * pfVar19[4] + fVar28 * *pfVar19) *
             fVar27 + *(float *)(lVar3 + lVar18 * 0xc);
        *(float *)(lVar3 + 8 + lVar18 * 0xc) =
             (fVar30 * fVar32 + fVar34 * 1.0 + fVar29 * fVar12 + fVar28 * fVar14) * fVar27 +
             *(float *)(lVar3 + 8 + lVar18 * 0xc);
        *(float *)(lVar3 + 4 + lVar18 * 0xc) =
             (fVar30 * fVar31 + fVar33 * 1.0 + fVar29 * fVar35 + fVar28 * fVar13) * fVar27 +
             *(float *)(lVar3 + 4 + lVar18 * 0xc);
        fVar28 = *(float *)(lVar2 + lVar18 * 0xc);
        fVar29 = *(float *)(lVar2 + 4 + lVar18 * 0xc);
        fVar30 = *(float *)(lVar2 + 8 + lVar18 * 0xc);
        fVar31 = pfVar19[0xd];
        fVar32 = pfVar19[0xe];
        fVar33 = pfVar19[9];
        fVar34 = pfVar19[10];
        fVar35 = pfVar19[5];
        fVar12 = pfVar19[6];
        fVar13 = pfVar19[1];
        fVar14 = pfVar19[2];
        *(float *)(lVar4 + lVar18 * 0xc) =
             (pfVar19[0xc] * 0.0 + fVar30 * pfVar19[8] + fVar29 * pfVar19[4] + fVar28 * *pfVar19) *
             fVar27 + *(float *)(lVar4 + lVar18 * 0xc);
        *(float *)(lVar4 + 8 + lVar18 * 0xc) =
             (fVar32 * 0.0 + fVar30 * fVar34 + fVar29 * fVar12 + fVar28 * fVar14) * fVar27 +
             *(float *)(lVar4 + 8 + lVar18 * 0xc);
        *(float *)(lVar4 + 4 + lVar18 * 0xc) =
             (fVar31 * 0.0 + fVar30 * fVar33 + fVar29 * fVar35 + fVar28 * fVar13) * fVar27 +
             *(float *)(lVar4 + 4 + lVar18 * 0xc);
      case 6:
        fVar27 = *(float *)(lVar20 + 0x28 + lVar5);
        fVar28 = *(float *)(lVar15 + lVar18 * 0xc);
        fVar29 = *(float *)(lVar15 + 4 + lVar18 * 0xc);
        fVar30 = *(float *)(lVar15 + 8 + lVar18 * 0xc);
        pfVar19 = (float *)((longlong)
                            *(int *)(*(longlong *)(param_1 + 0x148) +
                                    (ulonglong)*(ushort *)(lVar20 + 0xe + lVar5) * 4) * 0x40 +
                           param_4);
        fVar31 = pfVar19[5];
        fVar32 = pfVar19[6];
        fVar33 = pfVar19[1];
        fVar34 = pfVar19[2];
        fVar35 = pfVar19[9];
        fVar12 = pfVar19[10];
        fVar13 = pfVar19[0xd];
        fVar14 = pfVar19[0xe];
        *(float *)(lVar3 + lVar18 * 0xc) =
             (fVar29 * pfVar19[4] + fVar28 * *pfVar19 + fVar30 * pfVar19[8] + pfVar19[0xc] * 1.0) *
             fVar27 + *(float *)(lVar3 + lVar18 * 0xc);
        *(float *)(lVar3 + 8 + lVar18 * 0xc) =
             (fVar29 * fVar32 + fVar28 * fVar34 + fVar30 * fVar12 + fVar14 * 1.0) * fVar27 +
             *(float *)(lVar3 + 8 + lVar18 * 0xc);
        *(float *)(lVar3 + 4 + lVar18 * 0xc) =
             (fVar29 * fVar31 + fVar28 * fVar33 + fVar30 * fVar35 + fVar13 * 1.0) * fVar27 +
             *(float *)(lVar3 + 4 + lVar18 * 0xc);
        fVar28 = *(float *)(lVar2 + lVar18 * 0xc);
        fVar29 = *(float *)(lVar2 + 4 + lVar18 * 0xc);
        fVar30 = *(float *)(lVar2 + 8 + lVar18 * 0xc);
        fVar31 = pfVar19[5];
        fVar32 = pfVar19[6];
        fVar33 = pfVar19[1];
        fVar34 = pfVar19[2];
        fVar35 = pfVar19[9];
        fVar12 = pfVar19[10];
        fVar13 = pfVar19[0xd];
        fVar14 = pfVar19[0xe];
        *(float *)(lVar4 + lVar18 * 0xc) =
             (fVar29 * pfVar19[4] + fVar28 * *pfVar19 + fVar30 * pfVar19[8] + pfVar19[0xc] * 0.0) *
             fVar27 + *(float *)(lVar4 + lVar18 * 0xc);
        *(float *)(lVar4 + 8 + lVar18 * 0xc) =
             (fVar29 * fVar32 + fVar28 * fVar34 + fVar30 * fVar12 + fVar14 * 0.0) * fVar27 +
             *(float *)(lVar4 + 8 + lVar18 * 0xc);
        *(float *)(lVar4 + 4 + lVar18 * 0xc) =
             (fVar29 * fVar31 + fVar28 * fVar33 + fVar30 * fVar35 + fVar13 * 0.0) * fVar27 +
             *(float *)(lVar4 + 4 + lVar18 * 0xc);
      case 5:
        fVar27 = *(float *)(lVar20 + 0x24 + lVar5);
        fVar28 = *(float *)(lVar15 + lVar18 * 0xc);
        fVar29 = *(float *)(lVar15 + 4 + lVar18 * 0xc);
        fVar30 = *(float *)(lVar15 + 8 + lVar18 * 0xc);
        pfVar19 = (float *)((longlong)
                            *(int *)(*(longlong *)(param_1 + 0x148) +
                                    (ulonglong)*(ushort *)(lVar20 + 0xc + lVar5) * 4) * 0x40 +
                           param_4);
        fVar31 = pfVar19[0xd];
        fVar32 = pfVar19[0xe];
        fVar33 = pfVar19[9];
        fVar34 = pfVar19[10];
        fVar35 = pfVar19[5];
        fVar12 = pfVar19[6];
        fVar13 = pfVar19[1];
        fVar14 = pfVar19[2];
        *(float *)(lVar3 + lVar18 * 0xc) =
             (pfVar19[0xc] * 1.0 + fVar30 * pfVar19[8] + fVar29 * pfVar19[4] + fVar28 * *pfVar19) *
             fVar27 + *(float *)(lVar3 + lVar18 * 0xc);
        *(float *)(lVar3 + 8 + lVar18 * 0xc) =
             (fVar32 * 1.0 + fVar30 * fVar34 + fVar29 * fVar12 + fVar28 * fVar14) * fVar27 +
             *(float *)(lVar3 + 8 + lVar18 * 0xc);
        *(float *)(lVar3 + 4 + lVar18 * 0xc) =
             (fVar31 * 1.0 + fVar30 * fVar33 + fVar29 * fVar35 + fVar28 * fVar13) * fVar27 +
             *(float *)(lVar3 + 4 + lVar18 * 0xc);
        fVar28 = *(float *)(lVar2 + lVar18 * 0xc);
        fVar29 = *(float *)(lVar2 + 4 + lVar18 * 0xc);
        fVar30 = *(float *)(lVar2 + 8 + lVar18 * 0xc);
        fVar31 = pfVar19[5];
        fVar32 = pfVar19[6];
        fVar33 = pfVar19[1];
        fVar34 = pfVar19[2];
        fVar35 = pfVar19[9];
        fVar12 = pfVar19[10];
        fVar13 = pfVar19[0xd];
        fVar14 = pfVar19[0xe];
        *(float *)(lVar4 + lVar18 * 0xc) =
             (fVar29 * pfVar19[4] + fVar28 * *pfVar19 + fVar30 * pfVar19[8] + pfVar19[0xc] * 0.0) *
             fVar27 + *(float *)(lVar4 + lVar18 * 0xc);
        *(float *)(lVar4 + 8 + lVar18 * 0xc) =
             (fVar29 * fVar32 + fVar28 * fVar34 + fVar30 * fVar12 + fVar14 * 0.0) * fVar27 +
             *(float *)(lVar4 + 8 + lVar18 * 0xc);
        *(float *)(lVar4 + 4 + lVar18 * 0xc) =
             (fVar29 * fVar31 + fVar28 * fVar33 + fVar30 * fVar35 + fVar13 * 0.0) * fVar27 +
             *(float *)(lVar4 + 4 + lVar18 * 0xc);
      case 4:
        fVar27 = *(float *)(lVar20 + 0x20 + lVar5);
        fVar28 = *(float *)(lVar15 + lVar18 * 0xc);
        fVar29 = *(float *)(lVar15 + 4 + lVar18 * 0xc);
        fVar30 = *(float *)(lVar15 + 8 + lVar18 * 0xc);
        pfVar19 = (float *)((longlong)
                            *(int *)(*(longlong *)(param_1 + 0x148) +
                                    (ulonglong)*(ushort *)(lVar20 + 10 + lVar5) * 4) * 0x40 +
                           param_4);
        fVar31 = pfVar19[0xd];
        fVar32 = pfVar19[0xe];
        fVar33 = pfVar19[9];
        fVar34 = pfVar19[10];
        fVar35 = pfVar19[5];
        fVar12 = pfVar19[6];
        fVar13 = pfVar19[1];
        fVar14 = pfVar19[2];
        *(float *)(lVar3 + lVar18 * 0xc) =
             (pfVar19[0xc] * 1.0 + fVar30 * pfVar19[8] + fVar29 * pfVar19[4] + fVar28 * *pfVar19) *
             fVar27 + *(float *)(lVar3 + lVar18 * 0xc);
        *(float *)(lVar3 + 8 + lVar18 * 0xc) =
             (fVar32 * 1.0 + fVar30 * fVar34 + fVar29 * fVar12 + fVar28 * fVar14) * fVar27 +
             *(float *)(lVar3 + 8 + lVar18 * 0xc);
        *(float *)(lVar3 + 4 + lVar18 * 0xc) =
             (fVar31 * 1.0 + fVar30 * fVar33 + fVar29 * fVar35 + fVar28 * fVar13) * fVar27 +
             *(float *)(lVar3 + 4 + lVar18 * 0xc);
        fVar28 = *(float *)(lVar2 + lVar18 * 0xc);
        fVar29 = *(float *)(lVar2 + 4 + lVar18 * 0xc);
        fVar30 = *(float *)(lVar2 + 8 + lVar18 * 0xc);
        fVar31 = pfVar19[0xd];
        fVar32 = pfVar19[0xe];
        fVar33 = pfVar19[9];
        fVar34 = pfVar19[10];
        fVar35 = pfVar19[5];
        fVar12 = pfVar19[6];
        fVar13 = pfVar19[1];
        fVar14 = pfVar19[2];
        *(float *)(lVar4 + lVar18 * 0xc) =
             (pfVar19[0xc] * 0.0 + fVar30 * pfVar19[8] + fVar29 * pfVar19[4] + fVar28 * *pfVar19) *
             fVar27 + *(float *)(lVar4 + lVar18 * 0xc);
        *(float *)(lVar4 + 8 + lVar18 * 0xc) =
             (fVar32 * 0.0 + fVar30 * fVar34 + fVar29 * fVar12 + fVar28 * fVar14) * fVar27 +
             *(float *)(lVar4 + 8 + lVar18 * 0xc);
        *(float *)(lVar4 + 4 + lVar18 * 0xc) =
             (fVar31 * 0.0 + fVar30 * fVar33 + fVar29 * fVar35 + fVar28 * fVar13) * fVar27 +
             *(float *)(lVar4 + 4 + lVar18 * 0xc);
      case 3:
        fVar27 = *(float *)(lVar20 + 0x1c + lVar5);
        fVar28 = *(float *)(lVar15 + lVar18 * 0xc);
        fVar29 = *(float *)(lVar15 + 4 + lVar18 * 0xc);
        fVar30 = *(float *)(lVar15 + 8 + lVar18 * 0xc);
        pfVar19 = (float *)((longlong)
                            *(int *)(*(longlong *)(param_1 + 0x148) +
                                    (ulonglong)*(ushort *)(lVar20 + 8 + lVar5) * 4) * 0x40 + param_4
                           );
        fVar31 = pfVar19[5];
        fVar32 = pfVar19[6];
        fVar33 = pfVar19[1];
        fVar34 = pfVar19[2];
        fVar35 = pfVar19[0xd];
        fVar12 = pfVar19[0xe];
        fVar13 = pfVar19[9];
        fVar14 = pfVar19[10];
        *(float *)(lVar3 + lVar18 * 0xc) =
             (fVar29 * pfVar19[4] + fVar28 * *pfVar19 + pfVar19[0xc] * 1.0 + fVar30 * pfVar19[8]) *
             fVar27 + *(float *)(lVar3 + lVar18 * 0xc);
        *(float *)(lVar3 + 8 + lVar18 * 0xc) =
             (fVar29 * fVar32 + fVar28 * fVar34 + fVar12 * 1.0 + fVar30 * fVar14) * fVar27 +
             *(float *)(lVar3 + 8 + lVar18 * 0xc);
        *(float *)(lVar3 + 4 + lVar18 * 0xc) =
             (fVar29 * fVar31 + fVar28 * fVar33 + fVar35 * 1.0 + fVar30 * fVar13) * fVar27 +
             *(float *)(lVar3 + 4 + lVar18 * 0xc);
        fVar28 = *(float *)(lVar2 + lVar18 * 0xc);
        fVar29 = *(float *)(lVar2 + 4 + lVar18 * 0xc);
        fVar30 = *(float *)(lVar2 + 8 + lVar18 * 0xc);
        fVar31 = pfVar19[0xd];
        fVar32 = pfVar19[0xe];
        fVar33 = pfVar19[9];
        fVar34 = pfVar19[10];
        fVar35 = pfVar19[5];
        fVar12 = pfVar19[6];
        fVar13 = pfVar19[1];
        fVar14 = pfVar19[2];
        *(float *)(lVar4 + lVar18 * 0xc) =
             (pfVar19[0xc] * 0.0 + fVar30 * pfVar19[8] + fVar29 * pfVar19[4] + fVar28 * *pfVar19) *
             fVar27 + *(float *)(lVar4 + lVar18 * 0xc);
        *(float *)(lVar4 + 8 + lVar18 * 0xc) =
             (fVar32 * 0.0 + fVar30 * fVar34 + fVar29 * fVar12 + fVar28 * fVar14) * fVar27 +
             *(float *)(lVar4 + 8 + lVar18 * 0xc);
        *(float *)(lVar4 + 4 + lVar18 * 0xc) =
             (fVar31 * 0.0 + fVar30 * fVar33 + fVar29 * fVar35 + fVar28 * fVar13) * fVar27 +
             *(float *)(lVar4 + 4 + lVar18 * 0xc);
      case 2:
        fVar27 = *(float *)(lVar20 + 0x18 + lVar5);
        fVar28 = *(float *)(lVar15 + lVar18 * 0xc);
        fVar29 = *(float *)(lVar15 + 4 + lVar18 * 0xc);
        fVar30 = *(float *)(lVar15 + 8 + lVar18 * 0xc);
        pfVar19 = (float *)((longlong)
                            *(int *)(*(longlong *)(param_1 + 0x148) +
                                    (ulonglong)*(ushort *)(lVar20 + 6 + lVar5) * 4) * 0x40 + param_4
                           );
        fVar31 = pfVar19[0xd];
        fVar32 = pfVar19[0xe];
        fVar33 = pfVar19[9];
        fVar34 = pfVar19[10];
        fVar35 = pfVar19[5];
        fVar12 = pfVar19[6];
        fVar13 = pfVar19[1];
        fVar14 = pfVar19[2];
        *(float *)(lVar3 + lVar18 * 0xc) =
             (pfVar19[0xc] * 1.0 + fVar30 * pfVar19[8] + fVar29 * pfVar19[4] + fVar28 * *pfVar19) *
             fVar27 + *(float *)(lVar3 + lVar18 * 0xc);
        *(float *)(lVar3 + 8 + lVar18 * 0xc) =
             (fVar32 * 1.0 + fVar30 * fVar34 + fVar29 * fVar12 + fVar28 * fVar14) * fVar27 +
             *(float *)(lVar3 + 8 + lVar18 * 0xc);
        *(float *)(lVar3 + 4 + lVar18 * 0xc) =
             (fVar31 * 1.0 + fVar30 * fVar33 + fVar29 * fVar35 + fVar28 * fVar13) * fVar27 +
             *(float *)(lVar3 + 4 + lVar18 * 0xc);
        fVar28 = *(float *)(lVar2 + lVar18 * 0xc);
        fVar29 = *(float *)(lVar2 + 4 + lVar18 * 0xc);
        fVar30 = *(float *)(lVar2 + 8 + lVar18 * 0xc);
        fVar31 = pfVar19[0xd];
        fVar32 = pfVar19[0xe];
        fVar33 = pfVar19[9];
        fVar34 = pfVar19[10];
        fVar35 = pfVar19[5];
        fVar12 = pfVar19[6];
        fVar13 = pfVar19[1];
        fVar14 = pfVar19[2];
        *(float *)(lVar4 + lVar18 * 0xc) =
             (pfVar19[0xc] * 0.0 + fVar30 * pfVar19[8] + fVar29 * pfVar19[4] + fVar28 * *pfVar19) *
             fVar27 + *(float *)(lVar4 + lVar18 * 0xc);
        *(float *)(lVar4 + 8 + lVar18 * 0xc) =
             (fVar32 * 0.0 + fVar30 * fVar34 + fVar29 * fVar12 + fVar28 * fVar14) * fVar27 +
             *(float *)(lVar4 + 8 + lVar18 * 0xc);
        *(float *)(lVar4 + 4 + lVar18 * 0xc) =
             (fVar31 * 0.0 + fVar30 * fVar33 + fVar29 * fVar35 + fVar28 * fVar13) * fVar27 +
             *(float *)(lVar4 + 4 + lVar18 * 0xc);
      case 1:
        fVar27 = *(float *)(lVar20 + 0x14 + lVar5);
        fVar28 = *(float *)(lVar15 + lVar18 * 0xc);
        fVar29 = *(float *)(lVar15 + 4 + lVar18 * 0xc);
        fVar30 = *(float *)(lVar15 + 8 + lVar18 * 0xc);
        pfVar19 = (float *)((longlong)
                            *(int *)(*(longlong *)(param_1 + 0x148) +
                                    (ulonglong)*(ushort *)(lVar20 + 4 + lVar5) * 4) * 0x40 + param_4
                           );
        fVar31 = pfVar19[9];
        fVar32 = pfVar19[10];
        fVar33 = pfVar19[0xd];
        fVar34 = pfVar19[0xe];
        fVar35 = pfVar19[5];
        fVar12 = pfVar19[6];
        fVar13 = pfVar19[1];
        fVar14 = pfVar19[2];
        *(float *)(lVar3 + lVar18 * 0xc) =
             (fVar30 * pfVar19[8] + pfVar19[0xc] * 1.0 + fVar29 * pfVar19[4] + fVar28 * *pfVar19) *
             fVar27 + *(float *)(lVar3 + lVar18 * 0xc);
        *(float *)(lVar3 + 8 + lVar18 * 0xc) =
             (fVar30 * fVar32 + fVar34 * 1.0 + fVar29 * fVar12 + fVar28 * fVar14) * fVar27 +
             *(float *)(lVar3 + 8 + lVar18 * 0xc);
        *(float *)(lVar3 + 4 + lVar18 * 0xc) =
             (fVar30 * fVar31 + fVar33 * 1.0 + fVar29 * fVar35 + fVar28 * fVar13) * fVar27 +
             *(float *)(lVar3 + 4 + lVar18 * 0xc);
        fVar28 = *(float *)(lVar2 + lVar18 * 0xc);
        fVar29 = *(float *)(lVar2 + 4 + lVar18 * 0xc);
        fVar30 = *(float *)(lVar2 + 8 + lVar18 * 0xc);
        fVar31 = pfVar19[0xd];
        fVar32 = pfVar19[0xe];
        fVar33 = pfVar19[9];
        fVar34 = pfVar19[10];
        fVar35 = pfVar19[5];
        fVar12 = pfVar19[6];
        fVar13 = pfVar19[1];
        fVar14 = pfVar19[2];
        *(float *)(lVar4 + lVar18 * 0xc) =
             (pfVar19[0xc] * 0.0 + fVar30 * pfVar19[8] + fVar29 * pfVar19[4] + fVar28 * *pfVar19) *
             fVar27 + *(float *)(lVar4 + lVar18 * 0xc);
        *(float *)(lVar4 + 8 + lVar18 * 0xc) =
             (fVar32 * 0.0 + fVar30 * fVar34 + fVar29 * fVar12 + fVar28 * fVar14) * fVar27 +
             *(float *)(lVar4 + 8 + lVar18 * 0xc);
        *(float *)(lVar4 + 4 + lVar18 * 0xc) =
             (fVar31 * 0.0 + fVar30 * fVar33 + fVar29 * fVar35 + fVar28 * fVar13) * fVar27 +
             *(float *)(lVar4 + 4 + lVar18 * 0xc);
      }
      fVar33 = (float)((uint)(*(float *)(lVar3 + lVar18 * 0xc) - fVar9) & _DAT_146b29ad0);
      fVar34 = (float)((uint)(*(float *)(lVar3 + 4 + lVar18 * 0xc) - fVar10) & uRam0000000146b29ad4)
      ;
      fVar35 = (float)((uint)(*(float *)(lVar3 + 8 + lVar18 * 0xc) - fVar11) & uRam0000000146b29ad8)
      ;
      fVar30 = fVar35 * fVar37 - fVar34 * fVar38;
      fVar31 = fVar33 * fVar38 - fVar35 * fVar36;
      fVar32 = fVar34 * fVar36 - fVar33 * fVar37;
      fVar30 = fVar30 + fVar30;
      fVar31 = fVar31 + fVar31;
      fVar32 = fVar32 + fVar32;
      fVar27 = (fVar40 + fVar40) - fVar40 * fVar40 * fVar6;
      fVar28 = (fVar42 + fVar42) - fVar42 * fVar42 * fVar7;
      fVar29 = (fVar43 + fVar43) - fVar43 * fVar43 * fVar8;
      fVar27 = (fVar27 + fVar27) - fVar27 * fVar27 * fVar6;
      fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * fVar7;
      fVar29 = (fVar29 + fVar29) - fVar29 * fVar29 * fVar8;
      *(ulonglong *)(lVar3 + lVar18 * 0xc) =
           CONCAT44(((fVar30 * fVar38 - fVar32 * fVar36) + fVar39 * fVar31 + fVar34) *
                    (float)((uint)fVar28 & uVar22 ^ (uint)fVar28),
                    ((fVar32 * fVar37 - fVar31 * fVar38) + fVar39 * fVar30 + fVar33) *
                    (float)((uint)fVar27 & uVar21 ^ (uint)fVar27));
      *(float *)(lVar3 + 8 + lVar18 * 0xc) =
           ((fVar31 * fVar36 - fVar30 * fVar37) + fVar39 * fVar32 + fVar35) *
           (float)((uint)fVar29 & uVar23 ^ (uint)fVar29);
      fVar27 = *(float *)(lVar4 + 8 + lVar18 * 0xc);
      fVar28 = *(float *)(lVar4 + 4 + lVar18 * 0xc);
      fVar29 = *(float *)(lVar4 + lVar18 * 0xc);
      fVar30 = fVar27 * fVar37 - fVar28 * fVar38;
      fVar31 = fVar29 * fVar38 - fVar27 * fVar36;
      fVar32 = fVar28 * fVar36 - fVar29 * fVar37;
      fVar30 = fVar30 + fVar30;
      fVar31 = fVar31 + fVar31;
      fVar32 = fVar32 + fVar32;
      param_6._0_4_ = (uint)param_6 + 1;
      *(ulonglong *)(lVar4 + lVar18 * 0xc) =
           CONCAT44(((fVar30 * fVar38 - fVar32 * fVar36) + fVar31 * fVar39 + fVar28) *
                    (float)((uint)fVar25 & uVar22 ^ (uint)fVar25),
                    ((fVar32 * fVar37 - fVar31 * fVar38) + fVar30 * fVar39 + fVar29) *
                    (float)((uint)fVar24 & uVar21 ^ (uint)fVar24));
      *(float *)(lVar4 + 8 + lVar18 * 0xc) =
           ((fVar31 * fVar36 - fVar30 * fVar37) + fVar32 * fVar39 + fVar27) *
           (float)((uint)fVar26 & uVar23 ^ (uint)fVar26);
      fVar27 = *(float *)(lVar4 + lVar18 * 0xc);
      fVar28 = *(float *)(lVar4 + 4 + lVar18 * 0xc);
      fVar29 = *(float *)(lVar4 + 8 + lVar18 * 0xc);
      fVar30 = fVar28 * fVar28 + fVar27 * fVar27 + fVar29 * fVar29;
      auVar41 = rsqrtss(ZEXT416((uint)fVar30),ZEXT416((uint)fVar30));
      fVar31 = auVar41._0_4_;
      fVar31 = fVar31 + fVar31 * (0.5 - fVar30 * 0.5 * fVar31 * fVar31);
      fVar31 = fVar31 + fVar31 * (0.5 - fVar30 * 0.5 * fVar31 * fVar31);
      *(ulonglong *)(lVar4 + lVar18 * 0xc) = CONCAT44(fVar28 * fVar31,fVar27 * fVar31);
      *(float *)(lVar4 + 8 + lVar18 * 0xc) = fVar29 * fVar31;
    } while ((uint)param_6 < uVar1);
  }
  return;
}



// FUNCTION 142a68230 StartupModule body=172 status=ok
// SIG undefined StartupModule(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FClothingSystemRuntimeModule::StartupModule(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  DelayLoadNvCloth_Windows();
  DAT_146b29a70 = (undefined8 *)operator_new(8);
  if (DAT_146b29a70 != (undefined8 *)0x0) {
    *DAT_146b29a70 = &PTR_FUN_1453674e0;
  }
  _DAT_146b29a78 = (undefined8 *)operator_new(8);
  if (_DAT_146b29a78 != (undefined8 *)0x0) {
    *_DAT_146b29a78 = &PTR_FUN_145367520;
  }
  InitializeNvCloth(DAT_146b08408,DAT_146b29a70,_DAT_146b29a78,0,2);
  uVar1 = NvClothCreateFactoryCPU();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = NvClothCreateMeshQuadifier();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  plVar2 = (longlong *)FUN_141593110();
                    /* WARNING: Could not recover jumptable at 0x000142a682d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,DAT_146aedc70,param_1 + 0x10);
  return;
}



// FUNCTION 142a682e0 FUN_142a682e0 body=211 status=ok
// SIG undefined FUN_142a682e0(void)

void FUN_142a682e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  uVar7 = (ulonglong)*(int *)(param_1 + 0x38);
  puVar5 = puVar3 + uVar7 * 2;
  if (puVar3 != puVar5) {
    do {
      if (*(int *)(puVar3 + 1) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)*puVar3;
      }
      (**(code **)(*plVar2 + 0x38))(plVar2,param_2,param_3);
      puVar3 = puVar3 + 2;
    } while (puVar3 != puVar5);
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x38);
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  lVar4 = *(longlong *)(param_1 + 0x30);
  uVar6 = (uint)uVar7;
  if (iVar1 < 0) {
    if (uVar6 != 0) {
      do {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4);
        lVar4 = lVar4 + 0x10;
        uVar6 = (int)uVar7 - 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 != 0);
      iVar1 = *(int *)(param_1 + 0x3c);
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (iVar1 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong *)(param_1 + 0x30),0);
    }
  }
  else {
    while (uVar6 != 0) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4);
      lVar4 = lVar4 + 0x10;
      uVar6 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar6;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 142a683c0 FUN_142a683c0 body=989 status=ok
// SIG undefined FUN_142a683c0(void)

void FUN_142a683c0(longlong *param_1)

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
  void *pvVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  float *pfVar14;
  float *pfVar15;
  longlong lVar16;
  longlong lVar17;
  void *pvVar18;
  void *pvVar19;
  float *pfVar20;
  longlong lVar21;
  longlong lVar22;
  void *pvVar23;
  float fVar24;
  float fVar25;
  void *local_158;
  int local_150;
  longlong local_148 [2];
  undefined1 local_138 [16];
  longlong local_128;
  code *local_110;
  int local_108;
  undefined1 local_100 [16];
  longlong local_f0;
  code *local_d8;
  int local_d0;
  
  lVar22 = (longlong)(int)param_1[0xc] * 0x108 + *(longlong *)(*param_1 + 0x118);
  if (0 < *(int *)(lVar22 + 0x68)) {
    iVar12 = (int)param_1[0x23];
    pvVar19 = (void *)0x0;
    local_158 = (void *)0x0;
    local_150 = (int)param_1[((longlong)iVar12 + 0x12) * 2 + 1];
    lVar16 = (longlong)local_150;
    pvVar10 = (void *)param_1[((longlong)iVar12 + 0x12) * 2];
    pvVar18 = pvVar19;
    if (local_150 != 0) {
      TArray<FVector,FDefaultAllocator>::ResizeForCopy(&local_158,local_150,0);
      pvVar18 = local_158;
      _guard_xfg_dispatch_icall_nop(local_158,pvVar10,lVar16 * 0xc);
      iVar12 = (int)param_1[0x23];
    }
    uVar11 = iVar12 + 1U & 0x80000001;
    if ((int)uVar11 < 0) {
      uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
    }
    local_158 = (void *)0x0;
    local_150 = (int)param_1[((longlong)(int)uVar11 + 0x12) * 2 + 1];
    lVar16 = (longlong)local_150;
    pvVar10 = (void *)param_1[((longlong)(int)uVar11 + 0x12) * 2];
    pvVar23 = pvVar19;
    if (local_150 != 0) {
      TArray<FVector,FDefaultAllocator>::ResizeForCopy(&local_158,local_150,0);
      pvVar23 = local_158;
      _guard_xfg_dispatch_icall_nop(local_158,pvVar10,lVar16 * 0xc);
    }
    lVar17 = (longlong)(int)param_1[0xc] * 0x40 + param_1[0x20];
    iVar12 = (**(code **)(**(longlong **)(lVar17 + 8) + 0x280))();
    (**(code **)(**(longlong **)(lVar17 + 8) + 0x270))(*(longlong **)(lVar17 + 8),local_148);
    plVar13 = (longlong *)
              (**(code **)(**(longlong **)(lVar17 + 8) + 0x40))
                        (*(longlong **)(lVar17 + 8),local_138);
    lVar16 = *plVar13;
    (*local_110)(local_108 + local_128);
    plVar13 = (longlong *)
              (**(code **)(**(longlong **)(lVar17 + 8) + 0x50))
                        (*(longlong **)(lVar17 + 8),local_100);
    lVar17 = *plVar13;
    (*local_d8)(local_d0 + local_f0);
    if (0 < (longlong)iVar12) {
      pfVar20 = (float *)((longlong)pvVar18 + 4);
      pfVar15 = (float *)(lVar16 + 8);
      lVar17 = lVar17 - lVar16;
      lVar21 = (longlong)pvVar23 - (longlong)pvVar18;
      do {
        fVar1 = pfVar15[-1];
        fVar2 = *pfVar15;
        if (pfVar15[1] != 0.0) {
          fVar3 = *(float *)((longlong)param_1 + 0xc);
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          fVar6 = *(float *)(lVar17 + -4 + (longlong)pfVar15);
          fVar7 = *(float *)(lVar21 + (longlong)pfVar20);
          fVar8 = *(float *)(lVar17 + (longlong)pfVar15);
          fVar9 = *(float *)(lVar21 + 4 + (longlong)pfVar20);
          fVar24 = *(float *)(*(longlong *)(lVar22 + 0x60) + (longlong)pvVar19 * 4) *
                   *(float *)(param_1 + 1);
          pfVar14 = (float *)((longlong)pfVar15 + local_148[0] + (-8 - lVar16));
          fVar25 = 1.0 / (1.0 / pfVar15[1]);
          *pfVar14 = ((pfVar20[-1] - pfVar15[-2]) * fVar24 -
                     ((pfVar15[-2] - *(float *)(lVar17 + -8 + (longlong)pfVar15)) -
                     (pfVar20[-1] - *(float *)(lVar21 + -4 + (longlong)pfVar20))) * fVar3) * fVar25
                     + *pfVar14;
          pfVar14[1] = ((fVar4 - fVar1) * fVar24 - ((fVar1 - fVar6) - (fVar4 - fVar7)) * fVar3) *
                       fVar25 + pfVar14[1];
          pfVar14[2] = ((fVar5 - fVar2) * fVar24 - ((fVar2 - fVar8) - (fVar5 - fVar9)) * fVar3) *
                       fVar25 + pfVar14[2];
        }
        pvVar19 = (void *)((longlong)pvVar19 + 1);
        pfVar20 = pfVar20 + 3;
        pfVar15 = pfVar15 + 4;
      } while ((longlong)pvVar19 < (longlong)iVar12);
    }
    if (pvVar23 != (void *)0x0) {
      FMemory::Free(pvVar23);
    }
    if (pvVar18 != (void *)0x0) {
      FMemory::Free(pvVar18);
    }
  }
  return;
}



// FUNCTION 142a687a0 FUN_142a687a0 body=6692 status=ok
// SIG undefined FUN_142a687a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a687a0(longlong param_1,int param_2,float *param_3,longlong *param_4,undefined8 *param_5
                  ,char param_6,char param_7)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  void *_Src;
  float fVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  float *pfVar18;
  undefined4 *puVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  void *pvVar28;
  longlong lVar29;
  longlong lVar30;
  longlong *plVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar38;
  float fVar39;
  float fVar41;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar40;
  undefined1 auVar37 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  longlong local_2b8;
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
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  longlong local_258;
  longlong local_248;
  undefined8 uStack_240;
  longlong *local_238;
  longlong local_230;
  longlong lStack_228;
  longlong local_220 [2];
  void *local_210;
  void *local_208;
  int local_200;
  undefined4 local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  longlong local_1d0 [3];
  longlong lStack_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  longlong local_1a0;
  longlong *local_198;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  longlong local_168 [2];
  longlong local_158;
  undefined8 uStack_150;
  longlong local_148;
  code *local_130;
  int local_128;
  undefined1 local_120 [16];
  longlong local_110;
  code *local_f8;
  int local_f0;
  
  if ((param_2 != *(int *)(param_1 + 0x30)) || (param_7 != '\0')) {
    plVar31 = *(longlong **)(param_1 + 0x20);
    local_198 = plVar31 + (longlong)*(int *)(param_1 + 0x28) * 0x3a;
    if (plVar31 != local_198) {
      do {
        pvVar28 = (void *)0x0;
        local_210 = (void *)0x0;
        local_208 = (void *)0x0;
        local_200 = *(int *)(*plVar31 + 0x130);
        lVar20 = (longlong)local_200;
        _Src = *(void **)(*plVar31 + 0x128);
        local_238 = plVar31;
        if (local_200 == 0) {
          local_1fc = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(&local_208,local_200,0);
          pvVar28 = local_208;
          local_210 = local_208;
          _guard_xfg_dispatch_icall_nop(local_208,_Src,lVar20 << 2);
        }
        if ((param_2 < 0) || (local_200 <= param_2)) {
          iVar7 = (int)plVar31[0xc];
LAB_142a6a197:
          if (iVar7 != -1) {
            (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
          }
          *(undefined4 *)(plVar31 + 0xc) = 0xffffffff;
LAB_142a68933:
          if (pvVar28 != (void *)0x0) {
            FMemory::Free(pvVar28);
          }
        }
        else {
          iVar7 = *(int *)(param_1 + 0x30);
          if (((iVar7 < 0) || (local_200 <= iVar7)) ||
             (*(int *)((longlong)pvVar28 + (longlong)iVar7 * 4) == -1)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          iVar9 = *(int *)((longlong)pvVar28 + (longlong)param_2 * 4);
          if (bVar6) {
            iVar4 = *(int *)((longlong)pvVar28 + (longlong)iVar7 * 4);
          }
          else {
            iVar4 = -1;
          }
          iVar7 = (int)plVar31[0xc];
          if (iVar9 == iVar7) goto LAB_142a68933;
          if ((iVar9 < 0) || ((int)plVar31[0x21] <= iVar9)) goto LAB_142a6a197;
          lVar20 = plVar31[0x20];
          lVar29 = (longlong)iVar9 * 0x40;
          local_258 = lVar20;
          local_1a0 = lVar29;
          iVar7 = (**(code **)(**(longlong **)(lVar29 + 8 + lVar20) + 0x20))();
          plVar10 = *(longlong **)(lVar29 + 8 + lVar20);
          lVar21 = (longlong)iVar7;
          plVar10 = (longlong *)(**(code **)(*plVar10 + 0x40))(plVar10,local_120);
          local_230 = *plVar10;
          lStack_228 = plVar10[1];
          (*local_f8)(local_f0 + local_110);
          plVar10 = *(longlong **)(lVar29 + 8 + lVar20);
          plVar10 = (longlong *)(**(code **)(*plVar10 + 0x50))(plVar10,&local_298);
          local_1d0[2] = *plVar10;
          lStack_1b8 = plVar10[1];
          (*(code *)CONCAT44(fStack_26c,fStack_270))
                    ((longlong)(int)local_268 + CONCAT44(fStack_284,local_288));
          (**(code **)(**(longlong **)(lVar29 + 8 + lVar20) + 0x270))();
          if ((bVar6) && (param_6 == '\0')) {
            lVar14 = plVar31[0x20];
            lVar23 = (longlong)iVar4 * 0x40;
            (**(code **)(**(longlong **)(lVar23 + 8 + lVar14) + 0x20))();
            plVar10 = *(longlong **)(lVar23 + 8 + lVar14);
            (**(code **)(*plVar10 + 0x38))(plVar10,&local_158);
            local_248 = local_158;
            uStack_240 = uStack_150;
            (*local_130)(local_128 + local_148);
            (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
                      (*(longlong **)(param_1 + 0x18),*(undefined8 *)(lVar23 + 8 + plVar31[0x20]));
            plVar10 = *(longlong **)(lVar23 + 8 + lVar14);
            (**(code **)(*plVar10 + 0x270))(plVar10,local_168);
            (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
                      (*(longlong **)(param_1 + 0x18),*(undefined8 *)(lVar29 + 8 + plVar31[0x20]));
            uVar15 = iVar4 - iVar9 >> 0x1f;
            if ((iVar4 - iVar9 ^ uVar15) - uVar15 == 1) {
              if (0 < lVar21) {
                lVar20 = 0xd8;
                if (iVar9 <= iVar4) {
                  lVar20 = 0xe8;
                }
                lVar30 = 0;
                lVar14 = *(longlong *)
                          (lVar20 + (longlong)iVar9 * 0x108 + *(longlong *)(*plVar31 + 0x118));
                lVar23 = local_1d0[2] - local_230;
                puVar17 = (undefined4 *)(local_230 + 0xc);
                local_230 = -local_230;
                do {
                  lVar20 = local_238[0x2a];
                  fVar73 = *(float *)(lVar30 + lVar14);
                  fVar74 = *(float *)(lVar30 + 4 + lVar14);
                  fVar75 = *(float *)(lVar30 + 8 + lVar14);
                  fVar42 = *(float *)(lVar30 + 0xc + lVar14);
                  uVar2 = *(ushort *)(lVar30 + 0x30 + lVar14);
                  uVar16 = (ulonglong)uVar2;
                  uVar3 = *(ushort *)(lVar30 + 0x32 + lVar14);
                  uVar13 = (ulonglong)uVar3;
                  uVar22 = (ulonglong)uVar2;
                  uVar2 = *(ushort *)(lVar30 + 0x34 + lVar14);
                  uVar11 = (ulonglong)uVar2;
                  uVar26 = (ulonglong)uVar3;
                  uVar25 = (ulonglong)uVar2;
                  fVar50 = *(float *)(local_168[0] + uVar26 * 0x10);
                  fVar51 = *(float *)(local_168[0] + 4 + uVar26 * 0x10);
                  fVar52 = *(float *)(local_168[0] + 8 + uVar26 * 0x10);
                  fVar53 = *(float *)(local_168[0] + uVar25 * 0x10);
                  fVar38 = *(float *)(local_168[0] + 4 + uVar25 * 0x10);
                  fVar40 = *(float *)(local_168[0] + 8 + uVar25 * 0x10);
                  fVar63 = *(float *)(local_168[0] + 8 + uVar22 * 0x10);
                  fVar72 = (*(float *)(lVar20 + uVar11 * 0xc) + *(float *)(lVar20 + uVar13 * 0xc) +
                           *(float *)(lVar20 + uVar16 * 0xc)) * fVar42 +
                           fVar73 * *(float *)(local_248 + uVar22 * 0x10) +
                           fVar74 * *(float *)(local_248 + uVar26 * 0x10) +
                           fVar75 * *(float *)(local_248 + uVar25 * 0x10);
                  fVar60 = *(float *)(local_168[0] + 0xc + uVar26 * 0x10);
                  fVar68 = (*(float *)(lVar20 + 4 + uVar11 * 0xc) +
                            *(float *)(lVar20 + 4 + uVar13 * 0xc) +
                           *(float *)(lVar20 + 4 + uVar16 * 0xc)) * fVar42 +
                           fVar73 * *(float *)(local_248 + 4 + uVar22 * 0x10) +
                           fVar74 * *(float *)(local_248 + 4 + uVar26 * 0x10) +
                           fVar75 * *(float *)(local_248 + 4 + uVar25 * 0x10);
                  fVar61 = *(float *)(local_168[0] + 0xc + uVar25 * 0x10);
                  fVar62 = *(float *)(local_168[0] + 4 + uVar22 * 0x10);
                  fVar67 = (*(float *)(lVar20 + 8 + uVar11 * 0xc) +
                            *(float *)(lVar20 + 8 + uVar13 * 0xc) +
                           *(float *)(lVar20 + 8 + uVar16 * 0xc)) * fVar42 +
                           fVar73 * *(float *)(local_248 + 8 + uVar22 * 0x10) +
                           fVar74 * *(float *)(local_248 + 8 + uVar26 * 0x10) +
                           fVar75 * *(float *)(local_248 + 8 + uVar25 * 0x10);
                  fVar42 = *(float *)(local_168[0] + uVar22 * 0x10);
                  fVar45 = *(float *)(local_168[0] + 0xc + uVar22 * 0x10);
                  uVar8 = *puVar17;
                  puVar17[-3] = fVar72;
                  puVar17[-2] = fVar68;
                  lVar30 = lVar30 + 0x40;
                  puVar17[-1] = fVar67;
                  *puVar17 = uVar8;
                  *(float *)(lVar23 + -0xc + (longlong)puVar17) = fVar72;
                  *(float *)(lVar23 + -8 + (longlong)puVar17) = fVar68;
                  *(float *)(lVar23 + -4 + (longlong)puVar17) = fVar67;
                  *(undefined4 *)(lVar23 + (longlong)puVar17) = uVar8;
                  lVar20 = local_230 + local_2b8;
                  *(float *)(lVar20 + (longlong)puVar17) =
                       fVar75 * fVar61 + fVar73 * fVar45 + fVar74 * fVar60;
                  *(float *)(lVar20 + -0xc + (longlong)puVar17) =
                       fVar75 * fVar53 + fVar73 * fVar42 + fVar74 * fVar50;
                  *(float *)(lVar20 + -8 + (longlong)puVar17) =
                       fVar75 * fVar38 + fVar73 * fVar62 + fVar74 * fVar51;
                  *(float *)(lVar20 + -4 + (longlong)puVar17) =
                       fVar75 * fVar40 + fVar73 * fVar63 + fVar74 * fVar52;
                  puVar17 = puVar17 + 4;
                  lVar21 = lVar21 + -1;
                  pvVar28 = local_210;
                  lVar20 = local_258;
                  lVar29 = local_1a0;
                  plVar31 = local_238;
                } while (lVar21 != 0);
              }
            }
            else {
              lVar14 = 0;
              if (3 < lVar21) {
                puVar17 = (undefined4 *)(local_230 + 0x18);
                lVar30 = *(longlong *)(lVar29 + 0x10 + lVar20) - local_230;
                lVar24 = local_1d0[2] - local_230;
                lVar27 = -local_230;
                lVar23 = (lVar21 - 4U >> 2) + 1;
                lVar14 = lVar23 * 4;
                do {
                  puVar17[-6] = *(undefined4 *)((longlong)puVar17 + lVar30 + -0x18);
                  puVar17[-5] = *(undefined4 *)((longlong)puVar17 + lVar30 + -0x14);
                  puVar17[-4] = *(undefined4 *)((longlong)puVar17 + lVar30 + -0x10);
                  puVar17[-3] = *(undefined4 *)((longlong)puVar17 + lVar30 + -0xc);
                  *(undefined4 *)((longlong)puVar17 + lVar24 + -0x18) =
                       *(undefined4 *)((longlong)puVar17 + lVar30 + -0x18);
                  *(undefined4 *)((longlong)puVar17 + lVar24 + -0x14) =
                       *(undefined4 *)((longlong)puVar17 + lVar30 + -0x14);
                  *(undefined4 *)((longlong)puVar17 + lVar24 + -0x10) =
                       *(undefined4 *)((longlong)puVar17 + lVar30 + -0x10);
                  *(undefined4 *)((longlong)puVar17 + lVar24 + -0xc) =
                       *(undefined4 *)((longlong)puVar17 + lVar30 + -0xc);
                  *(undefined8 *)((longlong)puVar17 + local_2b8 + lVar27 + -0x18) = 0;
                  *(undefined8 *)((longlong)puVar17 + local_2b8 + lVar27 + -0x10) = 0;
                  puVar17[-2] = *(undefined4 *)((longlong)puVar17 + lVar30 + -8);
                  puVar17[-1] = *(undefined4 *)((longlong)puVar17 + lVar30 + -4);
                  *puVar17 = *(undefined4 *)((longlong)puVar17 + lVar30);
                  puVar17[1] = *(undefined4 *)((longlong)puVar17 + lVar30 + 4);
                  *(undefined4 *)((longlong)puVar17 + lVar24 + -8) =
                       *(undefined4 *)((longlong)puVar17 + lVar30 + -8);
                  *(undefined4 *)((longlong)puVar17 + lVar24 + -4) =
                       *(undefined4 *)((longlong)puVar17 + lVar30 + -4);
                  *(undefined4 *)((longlong)puVar17 + lVar24) =
                       *(undefined4 *)((longlong)puVar17 + lVar30);
                  *(undefined4 *)(lVar24 + 4 + (longlong)puVar17) =
                       *(undefined4 *)((longlong)puVar17 + lVar30 + 4);
                  *(undefined8 *)((longlong)puVar17 + local_2b8 + lVar27 + -8) = 0;
                  *(undefined8 *)((longlong)puVar17 + local_2b8 + lVar27) = 0;
                  puVar17[2] = *(undefined4 *)(lVar30 + 8 + (longlong)puVar17);
                  puVar17[3] = *(undefined4 *)(lVar30 + 0xc + (longlong)puVar17);
                  puVar17[4] = *(undefined4 *)(lVar30 + 0x10 + (longlong)puVar17);
                  puVar17[5] = *(undefined4 *)(lVar30 + 0x14 + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + 8 + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + 8 + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + 0xc + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + 0xc + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + 0x10 + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + 0x10 + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + 0x14 + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + 0x14 + (longlong)puVar17);
                  *(undefined8 *)(local_2b8 + lVar27 + 8 + (longlong)puVar17) = 0;
                  *(undefined8 *)(local_2b8 + lVar27 + 0x10 + (longlong)puVar17) = 0;
                  puVar17[6] = *(undefined4 *)(lVar30 + 0x18 + (longlong)puVar17);
                  puVar17[7] = *(undefined4 *)(lVar30 + 0x1c + (longlong)puVar17);
                  puVar17[8] = *(undefined4 *)(lVar30 + 0x20 + (longlong)puVar17);
                  puVar17[9] = *(undefined4 *)(lVar30 + 0x24 + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + 0x18 + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + 0x18 + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + 0x1c + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + 0x1c + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + 0x20 + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + 0x20 + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + 0x24 + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + 0x24 + (longlong)puVar17);
                  *(undefined8 *)(local_2b8 + lVar27 + 0x18 + (longlong)puVar17) = 0;
                  *(undefined8 *)(local_2b8 + lVar27 + 0x20 + (longlong)puVar17) = 0;
                  puVar17 = puVar17 + 0x10;
                  lVar23 = lVar23 + -1;
                  local_258 = lVar14;
                } while (lVar23 != 0);
              }
              if (lVar14 < lVar21) {
                lVar23 = *(longlong *)(lVar29 + 0x10 + lVar20) - local_230;
                puVar17 = (undefined4 *)(local_230 + 8 + lVar14 * 0x10);
                lVar30 = local_1d0[2] - local_230;
                lVar21 = lVar21 - lVar14;
                do {
                  puVar17[-2] = *(undefined4 *)((longlong)puVar17 + lVar23 + -8);
                  puVar17[-1] = *(undefined4 *)((longlong)puVar17 + lVar23 + -4);
                  *puVar17 = *(undefined4 *)((longlong)puVar17 + lVar23);
                  puVar17[1] = *(undefined4 *)((longlong)puVar17 + lVar23 + 4);
                  *(undefined4 *)(lVar30 + -8 + (longlong)puVar17) =
                       *(undefined4 *)((longlong)puVar17 + lVar23 + -8);
                  *(undefined4 *)(lVar30 + -4 + (longlong)puVar17) =
                       *(undefined4 *)((longlong)puVar17 + lVar23 + -4);
                  *(undefined4 *)(lVar30 + (longlong)puVar17) =
                       *(undefined4 *)((longlong)puVar17 + lVar23);
                  *(undefined4 *)((longlong)puVar17 + lVar30 + 4) =
                       *(undefined4 *)((longlong)puVar17 + lVar23 + 4);
                  puVar17 = puVar17 + 4;
                  lVar14 = local_2b8 + (-8 - local_230);
                  *(undefined8 *)(lVar14 + -0x10 + (longlong)puVar17) = 0;
                  *(undefined8 *)(lVar14 + -8 + (longlong)puVar17) = 0;
                  lVar21 = lVar21 + -1;
                } while (lVar21 != 0);
              }
            }
            fVar60 = fRam0000000146b29b28;
            fVar63 = fRam0000000146b29b24;
            fVar40 = _DAT_146b29b20;
            fVar38 = fRam0000000146b29ac8;
            fVar53 = fRam0000000146b29ac4;
            fVar52 = _DAT_146b29ac0;
            auVar36 = *(undefined1 (*) [16])(param_3 + 8);
            fVar73 = auVar36._0_4_;
            fVar75 = auVar36._4_4_;
            fVar50 = auVar36._8_4_;
            pfVar18 = (float *)((longlong)*(int *)(*plVar31 + 0x158) * 0x30 + *param_4);
            auVar37 = *(undefined1 (*) [16])(pfVar18 + 8);
            fVar74 = auVar37._0_4_;
            fVar42 = auVar37._4_4_;
            fVar51 = auVar37._8_4_;
            auVar32 = minps(auVar37,auVar36);
            auVar33._4_4_ = -(uint)(auVar32._4_4_ < fRam0000000146b29b24);
            auVar33._0_4_ = -(uint)(auVar32._0_4_ < _DAT_146b29b20);
            auVar33._8_4_ = -(uint)(auVar32._8_4_ < fRam0000000146b29b28);
            auVar33._12_4_ = -(uint)(auVar32._12_4_ < fRam0000000146b29b2c);
            iVar7 = movmskps((int)param_4,auVar33);
            if (iVar7 == 0) {
              fVar74 = *param_3;
              fVar42 = param_3[1];
              fVar51 = param_3[2];
              fVar52 = param_3[3];
              fVar53 = *pfVar18;
              fVar38 = pfVar18[1];
              fVar40 = pfVar18[2];
              fVar63 = pfVar18[3];
              fVar73 = pfVar18[4] * fVar73;
              fVar75 = pfVar18[5] * fVar75;
              fVar50 = pfVar18[6] * fVar50;
              fVar60 = fVar63 * fVar74 * _DAT_146b29b00 + fVar52 * fVar53 +
                       fVar42 * fVar40 * _DAT_146b29af0 + fVar51 * fVar38 * _DAT_146b29ae0;
              fVar61 = fVar40 * fVar74 * fRam0000000146b29b04 + fVar52 * fVar38 +
                       fVar42 * fVar63 * fRam0000000146b29af4 +
                       fVar51 * fVar53 * fRam0000000146b29ae4;
              fVar62 = fVar38 * fVar74 * fRam0000000146b29b08 + fVar52 * fVar40 +
                       fVar42 * fVar53 * fRam0000000146b29af8 +
                       fVar51 * fVar63 * fRam0000000146b29ae8;
              fVar63 = fVar53 * fVar74 * fRam0000000146b29b0c + fVar52 * fVar63 +
                       fVar42 * fVar38 * fRam0000000146b29afc +
                       fVar51 * fVar40 * fRam0000000146b29aec;
              fVar53 = fVar50 * fVar42 - fVar75 * fVar51;
              fVar38 = fVar73 * fVar51 - fVar50 * fVar74;
              fVar40 = fVar75 * fVar74 - fVar73 * fVar42;
              fVar53 = fVar53 + fVar53;
              fVar38 = fVar38 + fVar38;
              fVar40 = fVar40 + fVar40;
              local_1f8 = (fVar40 * fVar42 - fVar38 * fVar51) + fVar52 * fVar53 + fVar73 +
                          param_3[4];
              local_1f4 = (fVar53 * fVar51 - fVar40 * fVar74) + fVar52 * fVar38 + fVar75 +
                          param_3[5];
              local_1f0 = (fVar38 * fVar74 - fVar53 * fVar42) + fVar52 * fVar40 + fVar50 +
                          param_3[6];
            }
            else {
              fVar61 = *param_3;
              fVar62 = param_3[1];
              fVar45 = param_3[2];
              fVar67 = param_3[3];
              fVar68 = param_3[4];
              fVar72 = param_3[5];
              fVar5 = param_3[6];
              fVar43 = fVar62 + fVar62;
              fVar46 = fVar45 + fVar45;
              fVar48 = (fVar61 + fVar61) * fVar61;
              fVar44 = (fVar61 + fVar61) * fVar67;
              fVar69 = (fVar46 * fVar67 + fVar43 * fVar61) * fVar73;
              fVar70 = (fVar44 + fVar46 * fVar62) * fVar75;
              fVar71 = (fVar43 * fVar67 + fVar46 * fVar61) * fVar50;
              fVar54 = fVar75 * (fVar43 * fVar61 - fVar46 * fVar67);
              fVar56 = fVar50 * (fVar46 * fVar62 - fVar44);
              fVar58 = fVar73 * (fVar46 * fVar61 - fVar43 * fVar67);
              fVar44 = (float)((uint)((_DAT_146b29ac0 - (fVar46 * fVar45 + fVar43 * fVar62)) *
                                     fVar73) & _DAT_146b29ad0);
              fVar46 = (float)((uint)((fRam0000000146b29ac4 - (fVar46 * fVar45 + fVar48)) * fVar75)
                              & uRam0000000146b29ad4);
              fVar39 = (float)((uint)((fRam0000000146b29ac8 - (fVar43 * fVar62 + fVar48)) * fVar50)
                              & uRam0000000146b29ad8);
              fVar41 = (float)((uint)((fRam0000000146b29acc - (fVar48 + fVar48)) * auVar36._12_4_) &
                              uRam0000000146b29adc);
              fVar61 = *pfVar18;
              fVar62 = pfVar18[1];
              fVar45 = pfVar18[2];
              fVar67 = pfVar18[3];
              fVar48 = fVar62 + fVar62;
              fVar47 = fVar45 + fVar45;
              fVar49 = (fVar61 + fVar61) * fVar61;
              fVar43 = (fVar61 + fVar61) * fVar67;
              fVar64 = (fVar47 * fVar67 + fVar48 * fVar61) * fVar74;
              fVar65 = (fVar43 + fVar47 * fVar62) * fVar42;
              fVar66 = (fVar48 * fVar67 + fVar47 * fVar61) * fVar51;
              fVar55 = fVar42 * (fVar48 * fVar61 - fVar47 * fVar67);
              fVar57 = fVar51 * (fVar47 * fVar62 - fVar43);
              fVar59 = fVar74 * (fVar47 * fVar61 - fVar48 * fVar67);
              fVar67 = (float)((uint)((_DAT_146b29ac0 - (fVar47 * fVar45 + fVar48 * fVar62)) *
                                     fVar74) & _DAT_146b29ad0);
              fVar43 = (float)((uint)((fRam0000000146b29ac4 - (fVar47 * fVar45 + fVar49)) * fVar42)
                              & uRam0000000146b29ad4);
              fVar48 = (float)((uint)((fRam0000000146b29ac8 - (fVar48 * fVar62 + fVar49)) * fVar51)
                              & uRam0000000146b29ad8);
              fVar47 = (float)((uint)((fRam0000000146b29acc - (fVar49 + fVar49)) * auVar37._12_4_) &
                              uRam0000000146b29adc);
              fVar61 = pfVar18[4];
              fVar62 = pfVar18[5];
              fVar45 = pfVar18[6];
              local_298 = fVar64 * fVar54 + fVar67 * fVar44 + fVar59 * fVar71 + fVar47 * fVar68;
              fStack_294 = fVar64 * fVar46 + fVar67 * fVar69 + fVar59 * fVar56 + fVar47 * fVar72;
              fStack_290 = fVar64 * fVar70 + fVar67 * fVar58 + fVar59 * fVar39 + fVar47 * fVar5;
              fStack_28c = fVar64 * fVar41 + fVar67 * fVar41 + fVar59 * fVar41 +
                           fVar47 * fRam0000000146b29acc;
              local_288 = fVar43 * fVar54 + fVar55 * fVar44 + fVar65 * fVar71 + fVar47 * fVar68;
              fStack_284 = fVar43 * fVar46 + fVar55 * fVar69 + fVar65 * fVar56 + fVar47 * fVar72;
              fStack_280 = fVar43 * fVar70 + fVar55 * fVar58 + fVar65 * fVar39 + fVar47 * fVar5;
              fStack_27c = fVar43 * fVar41 + fVar55 * fVar41 + fVar65 * fVar41 +
                           fVar47 * fRam0000000146b29acc;
              local_278 = fVar57 * fVar54 + fVar66 * fVar44 + fVar48 * fVar71 + fVar47 * fVar68;
              fStack_274 = fVar57 * fVar46 + fVar66 * fVar69 + fVar48 * fVar56 + fVar47 * fVar72;
              fStack_270 = fVar57 * fVar70 + fVar66 * fVar58 + fVar48 * fVar39 + fVar47 * fVar5;
              fStack_26c = fVar57 * fVar41 + fVar66 * fVar41 + fVar48 * fVar41 +
                           fVar47 * fRam0000000146b29acc;
              local_268 = fVar62 * fVar54 + fVar61 * fVar44 + fVar45 * fVar71 +
                          fRam0000000146b29acc * fVar68;
              fStack_264 = fVar62 * fVar46 + fVar61 * fVar69 + fVar45 * fVar56 +
                           fRam0000000146b29acc * fVar72;
              fStack_260 = fVar62 * fVar70 + fVar61 * fVar58 + fVar45 * fVar39 +
                           fRam0000000146b29acc * fVar5;
              fStack_25c = fVar62 * fVar41 + fVar61 * fVar41 + fVar45 * fVar41 +
                           fRam0000000146b29acc * fRam0000000146b29acc;
              FMatrix::RemoveScaling(&local_298);
              fVar73 = (float)(-(uint)(fVar40 <= fVar73 * fVar74) & (_DAT_146b29b10 ^ (uint)fVar52)
                              ^ _DAT_146b29b10);
              fVar74 = (float)(-(uint)(fVar63 <= fVar75 * fVar42) &
                               (uRam0000000146b29b14 ^ (uint)fVar53) ^ uRam0000000146b29b14);
              fVar75 = (float)(-(uint)(fVar60 <= fVar50 * fVar51) &
                               (uRam0000000146b29b18 ^ (uint)fVar38) ^ uRam0000000146b29b18);
              local_298 = local_298 * fVar73;
              fStack_294 = fStack_294 * fVar73;
              fStack_290 = fStack_290 * fVar73;
              fStack_280 = fStack_280 * fVar74;
              fStack_284 = fStack_284 * fVar74;
              local_288 = local_288 * fVar74;
              fStack_270 = fStack_270 * fVar75;
              local_278 = local_278 * fVar75;
              fStack_274 = fStack_274 * fVar75;
              FQuat::FQuat(&local_188,&local_298);
              auVar35._0_4_ = local_188 * local_188 + fStack_180 * fStack_180;
              auVar35._4_4_ = fStack_184 * fStack_184 + fStack_17c * fStack_17c;
              auVar35._8_4_ = fStack_180 * fStack_180 + local_188 * local_188;
              auVar35._12_4_ = fStack_17c * fStack_17c + fStack_184 * fStack_184;
              fVar50 = auVar35._4_4_ + auVar35._0_4_;
              fVar51 = auVar35._8_4_ + auVar35._4_4_;
              fVar52 = auVar35._12_4_ + auVar35._8_4_;
              fVar53 = auVar35._0_4_ + auVar35._12_4_;
              auVar32._4_4_ = fVar51;
              auVar32._0_4_ = fVar50;
              auVar32._8_4_ = fVar52;
              auVar32._12_4_ = fVar53;
              auVar36 = rsqrtps(auVar35,auVar32);
              fVar73 = auVar36._0_4_;
              fVar74 = auVar36._4_4_;
              fVar75 = auVar36._8_4_;
              fVar42 = auVar36._12_4_;
              fVar73 = (_DAT_146b29ab0 - fVar73 * fVar73 * fVar50 * _DAT_146b29ab0) * fVar73 +
                       fVar73;
              fVar74 = (fRam0000000146b29ab4 - fVar74 * fVar74 * fVar51 * fRam0000000146b29ab4) *
                       fVar74 + fVar74;
              fVar75 = (fRam0000000146b29ab8 - fVar75 * fVar75 * fVar52 * fRam0000000146b29ab8) *
                       fVar75 + fVar75;
              fVar42 = (fRam0000000146b29abc - fVar42 * fVar42 * fVar53 * fRam0000000146b29abc) *
                       fVar42 + fVar42;
              fVar60 = (float)(((uint)(((_DAT_146b29ab0 - fVar73 * fVar73 * fVar50 * _DAT_146b29ab0)
                                        * fVar73 + fVar73) * local_188) ^ _DAT_146b29aa0) &
                               -(uint)(1e-08 <= fVar50) ^ _DAT_146b29aa0);
              fVar61 = (float)(((uint)(((fRam0000000146b29ab4 -
                                        fVar74 * fVar74 * fVar51 * fRam0000000146b29ab4) * fVar74 +
                                       fVar74) * fStack_184) ^ uRam0000000146b29aa4) &
                               -(uint)(1e-08 <= fVar51) ^ uRam0000000146b29aa4);
              fVar62 = (float)(((uint)(((fRam0000000146b29ab8 -
                                        fVar75 * fVar75 * fVar52 * fRam0000000146b29ab8) * fVar75 +
                                       fVar75) * fStack_180) ^ uRam0000000146b29aa8) &
                               -(uint)(1e-08 <= fVar52) ^ uRam0000000146b29aa8);
              fVar63 = (float)(((uint)(((fRam0000000146b29abc -
                                        fVar42 * fVar42 * fVar53 * fRam0000000146b29abc) * fVar42 +
                                       fVar42) * fStack_17c) ^ uRam0000000146b29aac) &
                               -(uint)(1e-08 <= fVar53) ^ uRam0000000146b29aac);
              local_1f8 = local_268;
              local_1f4 = fStack_264;
              local_1f0 = fStack_260;
              local_188 = fVar60;
              fStack_184 = fVar61;
              fStack_180 = fVar62;
              fStack_17c = fVar63;
            }
            plVar10 = *(longlong **)(lVar29 + 8 + lVar20);
            (**(code **)(*plVar10 + 0x60))(plVar10,&local_1f8);
            plVar10 = *(longlong **)(lVar29 + 8 + lVar20);
            local_1e0 = fVar60;
            local_1dc = fVar61;
            local_1d8 = fVar62;
            local_1d4 = fVar63;
            (**(code **)(*plVar10 + 0x68))(plVar10,&local_1e0);
            (**(code **)(**(longlong **)(lVar29 + 8 + lVar20) + 0x80))();
            plVar10 = *(longlong **)(lVar29 + 8 + lVar20);
            local_248 = 0;
            uStack_240 = 0;
            lVar21 = *plVar10;
            uVar8 = (**(code **)(lVar21 + 0x158))();
            (**(code **)(lVar21 + 0x150))(plVar10,&local_248,0,uVar8);
            plVar10 = *(longlong **)(lVar29 + 8 + lVar20);
            local_248 = 0;
            uStack_240 = 0;
            lVar21 = *plVar10;
            uVar8 = (**(code **)(lVar21 + 0x178))();
            (**(code **)(lVar21 + 0x170))(plVar10,&local_248,0,uVar8);
            (**(code **)(**(longlong **)(lVar29 + 8 + lVar20) + 0x218))();
            (**(code **)(**(longlong **)(lVar29 + 8 + lVar20) + 600))();
          }
          else if (iVar9 < (int)plVar31[0x21]) {
            (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
                      (*(longlong **)(param_1 + 0x18),*(undefined8 *)(lVar29 + 8 + lVar20));
            lVar14 = *plVar31;
            if (*(int *)(lVar14 + 0x158) < (int)param_4[1]) {
              local_220[0] = 0;
              local_220[1] = 0;
              local_1d0[0] = 0;
              local_1d0[1] = 0;
              FUN_142a67020(lVar14,(longlong)iVar9 * 0x108 + *(longlong *)(lVar14 + 0x118),
                            (longlong)*(int *)(lVar14 + 0x158) * 0x30 + *param_4,*param_5,
                            *(undefined4 *)(param_5 + 1),local_220,local_1d0);
              lVar23 = local_220[0];
              lVar14 = 0;
              if (3 < lVar21) {
                lVar27 = -local_230;
                lVar24 = local_1d0[2] - local_230;
                puVar17 = (undefined4 *)(local_230 + 0x18);
                lVar30 = (lVar21 - 4U >> 2) + 1;
                lVar14 = lVar30 * 4;
                puVar19 = (undefined4 *)(local_220[0] + 0x14);
                do {
                  uVar8 = puVar19[-4];
                  uVar1 = puVar19[-3];
                  puVar17[-6] = puVar19[-5];
                  puVar17[-5] = uVar8;
                  puVar17[-4] = uVar1;
                  puVar17[-3] = puVar17[-3];
                  uVar8 = puVar19[-4];
                  uVar1 = puVar19[-3];
                  *(undefined4 *)((longlong)puVar17 + lVar24 + -0x18) = puVar19[-5];
                  *(undefined4 *)((longlong)puVar17 + lVar24 + -0x14) = uVar8;
                  *(undefined4 *)((longlong)puVar17 + lVar24 + -0x10) = uVar1;
                  *(undefined4 *)(lVar24 + -0xc + (longlong)puVar17) =
                       *(undefined4 *)(lVar24 + -0xc + (longlong)puVar17);
                  *(undefined8 *)((longlong)puVar17 + local_2b8 + -0x18 + lVar27) = 0;
                  *(undefined8 *)((longlong)puVar17 + local_2b8 + -0x10 + lVar27) = 0;
                  uVar8 = puVar19[-1];
                  uVar1 = *puVar19;
                  puVar17[-2] = puVar19[-2];
                  puVar17[-1] = uVar8;
                  *puVar17 = uVar1;
                  puVar17[1] = puVar17[1];
                  uVar8 = puVar19[-1];
                  uVar1 = *puVar19;
                  *(undefined4 *)(lVar24 + -8 + (longlong)puVar17) = puVar19[-2];
                  *(undefined4 *)(lVar24 + -4 + (longlong)puVar17) = uVar8;
                  *(undefined4 *)(lVar24 + (longlong)puVar17) = uVar1;
                  *(undefined4 *)(lVar24 + 4 + (longlong)puVar17) =
                       *(undefined4 *)(lVar24 + 4 + (longlong)puVar17);
                  *(undefined8 *)((longlong)puVar17 + local_2b8 + -8 + lVar27) = 0;
                  *(undefined8 *)((longlong)puVar17 + local_2b8 + lVar27) = 0;
                  uVar8 = puVar19[2];
                  uVar1 = puVar19[3];
                  puVar17[2] = puVar19[1];
                  puVar17[3] = uVar8;
                  puVar17[4] = uVar1;
                  puVar17[5] = puVar17[5];
                  uVar8 = puVar19[2];
                  uVar1 = puVar19[3];
                  *(undefined4 *)(lVar24 + 8 + (longlong)puVar17) = puVar19[1];
                  *(undefined4 *)(lVar24 + 0xc + (longlong)puVar17) = uVar8;
                  *(undefined4 *)(lVar24 + 0x10 + (longlong)puVar17) = uVar1;
                  *(undefined4 *)(lVar24 + 0x14 + (longlong)puVar17) =
                       *(undefined4 *)(lVar24 + 0x14 + (longlong)puVar17);
                  *(undefined8 *)(local_2b8 + lVar27 + 8 + (longlong)puVar17) = 0;
                  *(undefined8 *)(local_2b8 + lVar27 + 0x10 + (longlong)puVar17) = 0;
                  uVar8 = puVar19[5];
                  uVar1 = puVar19[6];
                  puVar17[6] = puVar19[4];
                  puVar17[7] = uVar8;
                  puVar17[8] = uVar1;
                  puVar17[9] = puVar17[9];
                  uVar8 = puVar19[5];
                  uVar1 = puVar19[6];
                  *(undefined4 *)(lVar24 + 0x18 + (longlong)puVar17) = puVar19[4];
                  *(undefined4 *)(lVar24 + 0x1c + (longlong)puVar17) = uVar8;
                  *(undefined4 *)(lVar24 + 0x20 + (longlong)puVar17) = uVar1;
                  *(undefined4 *)(lVar24 + 0x24 + (longlong)puVar17) =
                       *(undefined4 *)(lVar24 + 0x24 + (longlong)puVar17);
                  *(undefined8 *)(local_2b8 + lVar27 + 0x18 + (longlong)puVar17) = 0;
                  *(undefined8 *)(local_2b8 + lVar27 + 0x20 + (longlong)puVar17) = 0;
                  puVar17 = puVar17 + 0x10;
                  lVar30 = lVar30 + -1;
                  puVar19 = puVar19 + 0xc;
                } while (lVar30 != 0);
              }
              if (lVar14 < lVar21) {
                lVar30 = local_1d0[2] - local_230;
                lVar21 = lVar21 - lVar14;
                puVar17 = (undefined4 *)(local_230 + 0xc + lVar14 * 0x10);
                puVar19 = (undefined4 *)(local_220[0] + lVar14 * 0xc + 8);
                do {
                  uVar8 = puVar19[-1];
                  uVar1 = *puVar19;
                  puVar17[-3] = puVar19[-2];
                  puVar17[-2] = uVar8;
                  puVar17[-1] = uVar1;
                  *puVar17 = *puVar17;
                  uVar8 = puVar19[-1];
                  uVar1 = *puVar19;
                  *(undefined4 *)(lVar30 + -0xc + (longlong)puVar17) = puVar19[-2];
                  *(undefined4 *)(lVar30 + -8 + (longlong)puVar17) = uVar8;
                  *(undefined4 *)(lVar30 + -4 + (longlong)puVar17) = uVar1;
                  *(undefined4 *)(lVar30 + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + (longlong)puVar17);
                  puVar12 = (undefined8 *)((longlong)puVar17 + local_2b8 + (-0xc - local_230));
                  *puVar12 = 0;
                  puVar12[1] = 0;
                  lVar21 = lVar21 + -1;
                  puVar17 = puVar17 + 4;
                  puVar19 = puVar19 + 3;
                } while (lVar21 != 0);
              }
              if (local_1d0[0] != 0) {
                FMemory::Free();
              }
              if (lVar23 != 0) {
                FMemory::Free(lVar23);
              }
            }
            else {
              lVar14 = 0;
              if (3 < lVar21) {
                puVar17 = (undefined4 *)(local_230 + 0x18);
                lVar30 = *(longlong *)(lVar29 + 0x10 + lVar20) - local_230;
                lVar24 = local_1d0[2] - local_230;
                lVar27 = -local_230;
                lVar23 = (lVar21 - 4U >> 2) + 1;
                lVar14 = lVar23 * 4;
                do {
                  puVar17[-6] = *(undefined4 *)((longlong)puVar17 + lVar30 + -0x18);
                  puVar17[-5] = *(undefined4 *)(lVar30 + -0x14 + (longlong)puVar17);
                  puVar17[-4] = *(undefined4 *)(lVar30 + -0x10 + (longlong)puVar17);
                  puVar17[-3] = *(undefined4 *)(lVar30 + -0xc + (longlong)puVar17);
                  *(undefined4 *)((longlong)puVar17 + lVar24 + -0x18) =
                       *(undefined4 *)((longlong)puVar17 + lVar30 + -0x18);
                  *(undefined4 *)((longlong)puVar17 + lVar24 + -0x14) =
                       *(undefined4 *)(lVar30 + -0x14 + (longlong)puVar17);
                  *(undefined4 *)((longlong)puVar17 + lVar24 + -0x10) =
                       *(undefined4 *)(lVar30 + -0x10 + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + -0xc + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + -0xc + (longlong)puVar17);
                  *(undefined8 *)((longlong)puVar17 + local_2b8 + -0x18 + lVar27) = 0;
                  *(undefined8 *)((longlong)puVar17 + local_2b8 + -0x10 + lVar27) = 0;
                  puVar17[-2] = *(undefined4 *)((longlong)puVar17 + lVar30 + -8);
                  puVar17[-1] = *(undefined4 *)(lVar30 + -4 + (longlong)puVar17);
                  *puVar17 = *(undefined4 *)(lVar30 + (longlong)puVar17);
                  puVar17[1] = *(undefined4 *)(lVar30 + 4 + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + -8 + (longlong)puVar17) =
                       *(undefined4 *)((longlong)puVar17 + lVar30 + -8);
                  *(undefined4 *)(lVar24 + -4 + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + -4 + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + 4 + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + 4 + (longlong)puVar17);
                  *(undefined8 *)((longlong)puVar17 + local_2b8 + -8 + lVar27) = 0;
                  *(undefined8 *)((longlong)puVar17 + local_2b8 + lVar27) = 0;
                  puVar17[2] = *(undefined4 *)(lVar30 + 8 + (longlong)puVar17);
                  puVar17[3] = *(undefined4 *)(lVar30 + 0xc + (longlong)puVar17);
                  puVar17[4] = *(undefined4 *)(lVar30 + 0x10 + (longlong)puVar17);
                  puVar17[5] = *(undefined4 *)(lVar30 + 0x14 + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + 8 + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + 8 + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + 0xc + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + 0xc + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + 0x10 + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + 0x10 + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + 0x14 + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + 0x14 + (longlong)puVar17);
                  *(undefined8 *)(local_2b8 + lVar27 + 8 + (longlong)puVar17) = 0;
                  *(undefined8 *)(local_2b8 + lVar27 + 0x10 + (longlong)puVar17) = 0;
                  puVar17[6] = *(undefined4 *)(lVar30 + 0x18 + (longlong)puVar17);
                  puVar17[7] = *(undefined4 *)(lVar30 + 0x1c + (longlong)puVar17);
                  puVar17[8] = *(undefined4 *)(lVar30 + 0x20 + (longlong)puVar17);
                  puVar17[9] = *(undefined4 *)(lVar30 + 0x24 + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + 0x18 + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + 0x18 + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + 0x1c + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + 0x1c + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + 0x20 + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + 0x20 + (longlong)puVar17);
                  *(undefined4 *)(lVar24 + 0x24 + (longlong)puVar17) =
                       *(undefined4 *)(lVar30 + 0x24 + (longlong)puVar17);
                  *(undefined8 *)(local_2b8 + lVar27 + 0x18 + (longlong)puVar17) = 0;
                  *(undefined8 *)(local_2b8 + lVar27 + 0x20 + (longlong)puVar17) = 0;
                  puVar17 = puVar17 + 0x10;
                  lVar23 = lVar23 + -1;
                  local_258 = lVar14;
                } while (lVar23 != 0);
              }
              if (lVar14 < lVar21) {
                lVar23 = *(longlong *)(lVar29 + 0x10 + lVar20) - local_230;
                puVar17 = (undefined4 *)(local_230 + 8 + lVar14 * 0x10);
                lVar30 = local_1d0[2] - local_230;
                lVar21 = lVar21 - lVar14;
                do {
                  puVar17[-2] = *(undefined4 *)((longlong)puVar17 + lVar23 + -8);
                  puVar17[-1] = *(undefined4 *)(lVar23 + -4 + (longlong)puVar17);
                  *puVar17 = *(undefined4 *)(lVar23 + (longlong)puVar17);
                  puVar17[1] = *(undefined4 *)(lVar23 + 4 + (longlong)puVar17);
                  *(undefined4 *)((longlong)puVar17 + lVar30 + -8) =
                       *(undefined4 *)((longlong)puVar17 + lVar23 + -8);
                  *(undefined4 *)((longlong)puVar17 + lVar30 + -4) =
                       *(undefined4 *)(lVar23 + -4 + (longlong)puVar17);
                  *(undefined4 *)((longlong)puVar17 + lVar30) =
                       *(undefined4 *)(lVar23 + (longlong)puVar17);
                  *(undefined4 *)((longlong)puVar17 + lVar30 + 4) =
                       *(undefined4 *)(lVar23 + 4 + (longlong)puVar17);
                  puVar12 = (undefined8 *)((longlong)puVar17 + local_2b8 + (-8 - local_230));
                  puVar17 = puVar17 + 4;
                  *puVar12 = 0;
                  puVar12[1] = 0;
                  lVar21 = lVar21 + -1;
                } while (lVar21 != 0);
              }
            }
            fVar60 = fRam0000000146b29b28;
            fVar63 = fRam0000000146b29b24;
            fVar40 = _DAT_146b29b20;
            fVar38 = fRam0000000146b29ac8;
            fVar53 = fRam0000000146b29ac4;
            fVar52 = _DAT_146b29ac0;
            auVar36 = *(undefined1 (*) [16])(param_3 + 8);
            fVar73 = auVar36._0_4_;
            fVar75 = auVar36._4_4_;
            fVar50 = auVar36._8_4_;
            pfVar18 = (float *)((longlong)*(int *)(*plVar31 + 0x158) * 0x30 + *param_4);
            auVar37 = *(undefined1 (*) [16])(pfVar18 + 8);
            fVar74 = auVar37._0_4_;
            fVar42 = auVar37._4_4_;
            fVar51 = auVar37._8_4_;
            auVar32 = minps(auVar37,auVar36);
            auVar34._4_4_ = -(uint)(auVar32._4_4_ < fRam0000000146b29b24);
            auVar34._0_4_ = -(uint)(auVar32._0_4_ < _DAT_146b29b20);
            auVar34._8_4_ = -(uint)(auVar32._8_4_ < fRam0000000146b29b28);
            auVar34._12_4_ = -(uint)(auVar32._12_4_ < fRam0000000146b29b2c);
            iVar7 = movmskps((int)param_4,auVar34);
            if (iVar7 == 0) {
              fVar74 = *param_3;
              fVar42 = param_3[1];
              fVar51 = param_3[2];
              fVar52 = param_3[3];
              fVar53 = *pfVar18;
              fVar38 = pfVar18[1];
              fVar40 = pfVar18[2];
              fVar63 = pfVar18[3];
              fVar73 = pfVar18[4] * fVar73;
              fVar75 = pfVar18[5] * fVar75;
              fVar50 = pfVar18[6] * fVar50;
              fVar60 = fVar63 * fVar74 * _DAT_146b29b00 + fVar53 * fVar52 +
                       fVar42 * fVar40 * _DAT_146b29af0 + fVar51 * fVar38 * _DAT_146b29ae0;
              fVar61 = fVar40 * fVar74 * fRam0000000146b29b04 + fVar38 * fVar52 +
                       fVar42 * fVar63 * fRam0000000146b29af4 +
                       fVar51 * fVar53 * fRam0000000146b29ae4;
              fVar62 = fVar38 * fVar74 * fRam0000000146b29b08 + fVar40 * fVar52 +
                       fVar42 * fVar53 * fRam0000000146b29af8 +
                       fVar51 * fVar63 * fRam0000000146b29ae8;
              fVar63 = fVar53 * fVar74 * fRam0000000146b29b0c + fVar63 * fVar52 +
                       fVar42 * fVar38 * fRam0000000146b29afc +
                       fVar51 * fVar40 * fRam0000000146b29aec;
              fVar53 = fVar50 * fVar42 - fVar75 * fVar51;
              fVar38 = fVar73 * fVar51 - fVar50 * fVar74;
              fVar40 = fVar75 * fVar74 - fVar73 * fVar42;
              fVar53 = fVar53 + fVar53;
              fVar38 = fVar38 + fVar38;
              fVar40 = fVar40 + fVar40;
              local_1ec = (fVar40 * fVar42 - fVar38 * fVar51) + fVar52 * fVar53 + fVar73 +
                          param_3[4];
              local_1e8 = (fVar53 * fVar51 - fVar40 * fVar74) + fVar52 * fVar38 + fVar75 +
                          param_3[5];
              local_1e4 = (fVar38 * fVar74 - fVar53 * fVar42) + fVar52 * fVar40 + fVar50 +
                          param_3[6];
            }
            else {
              fVar61 = *param_3;
              fVar62 = param_3[1];
              fVar45 = param_3[2];
              fVar67 = param_3[3];
              fVar68 = param_3[4];
              fVar72 = param_3[5];
              fVar5 = param_3[6];
              fVar48 = fVar62 + fVar62;
              fVar41 = fVar45 + fVar45;
              fVar49 = (fVar61 + fVar61) * fVar61;
              fVar47 = fVar67 * (fVar61 + fVar61);
              fVar44 = *pfVar18;
              fVar46 = pfVar18[1];
              fVar43 = pfVar18[2];
              fVar39 = pfVar18[3];
              fVar69 = (fVar67 * fVar41 + fVar61 * fVar48) * fVar73;
              fVar70 = (fVar47 + fVar62 * fVar41) * fVar75;
              fVar71 = (fVar67 * fVar48 + fVar61 * fVar41) * fVar50;
              fVar54 = fVar75 * (fVar61 * fVar48 - fVar67 * fVar41);
              fVar56 = fVar50 * (fVar62 * fVar41 - fVar47);
              fVar58 = fVar73 * (fVar61 * fVar41 - fVar67 * fVar48);
              fVar67 = (float)((uint)((_DAT_146b29ac0 - (fVar41 * fVar45 + fVar48 * fVar62)) *
                                     fVar73) & _DAT_146b29ad0);
              fVar41 = (float)((uint)((fRam0000000146b29ac4 - (fVar41 * fVar45 + fVar49)) * fVar75)
                              & uRam0000000146b29ad4);
              fVar48 = (float)((uint)((fRam0000000146b29ac8 - (fVar48 * fVar62 + fVar49)) * fVar50)
                              & uRam0000000146b29ad8);
              fVar47 = (float)((uint)((fRam0000000146b29acc - (fVar49 + fVar49)) * auVar36._12_4_) &
                              uRam0000000146b29adc);
              fVar61 = fVar46 + fVar46;
              fVar62 = fVar43 + fVar43;
              fVar49 = (fVar44 + fVar44) * fVar44;
              fVar45 = fVar39 * (fVar44 + fVar44);
              fVar64 = (fVar39 * fVar62 + fVar44 * fVar61) * fVar74;
              fVar65 = (fVar45 + fVar46 * fVar62) * fVar42;
              fVar66 = (fVar39 * fVar61 + fVar44 * fVar62) * fVar51;
              fVar55 = fVar42 * (fVar44 * fVar61 - fVar39 * fVar62);
              fVar57 = fVar51 * (fVar46 * fVar62 - fVar45);
              fVar59 = fVar74 * (fVar44 * fVar62 - fVar39 * fVar61);
              fVar44 = (float)((uint)((_DAT_146b29ac0 - (fVar62 * fVar43 + fVar61 * fVar46)) *
                                     fVar74) & _DAT_146b29ad0);
              fVar43 = (float)((uint)((fRam0000000146b29ac4 - (fVar62 * fVar43 + fVar49)) * fVar42)
                              & uRam0000000146b29ad4);
              fVar46 = (float)((uint)((fRam0000000146b29ac8 - (fVar61 * fVar46 + fVar49)) * fVar51)
                              & uRam0000000146b29ad8);
              fVar39 = (float)((uint)((fRam0000000146b29acc - (fVar49 + fVar49)) * auVar37._12_4_) &
                              uRam0000000146b29adc);
              fVar61 = pfVar18[4];
              fVar62 = pfVar18[5];
              fVar45 = pfVar18[6];
              local_298 = fVar64 * fVar54 + fVar44 * fVar67 + fVar59 * fVar71 + fVar39 * fVar68;
              fStack_294 = fVar64 * fVar41 + fVar44 * fVar69 + fVar59 * fVar56 + fVar39 * fVar72;
              fStack_290 = fVar64 * fVar70 + fVar44 * fVar58 + fVar59 * fVar48 + fVar39 * fVar5;
              fStack_28c = fVar64 * fVar47 + fVar44 * fVar47 + fVar59 * fVar47 +
                           fVar39 * fRam0000000146b29acc;
              local_288 = fVar43 * fVar54 + fVar55 * fVar67 + fVar65 * fVar71 + fVar39 * fVar68;
              fStack_284 = fVar43 * fVar41 + fVar55 * fVar69 + fVar65 * fVar56 + fVar39 * fVar72;
              fStack_280 = fVar43 * fVar70 + fVar55 * fVar58 + fVar65 * fVar48 + fVar39 * fVar5;
              fStack_27c = fVar43 * fVar47 + fVar55 * fVar47 + fVar65 * fVar47 +
                           fVar39 * fRam0000000146b29acc;
              local_278 = fVar57 * fVar54 + fVar66 * fVar67 + fVar46 * fVar71 + fVar39 * fVar68;
              fStack_274 = fVar57 * fVar41 + fVar66 * fVar69 + fVar46 * fVar56 + fVar39 * fVar72;
              fStack_270 = fVar57 * fVar70 + fVar66 * fVar58 + fVar46 * fVar48 + fVar39 * fVar5;
              fStack_26c = fVar57 * fVar47 + fVar66 * fVar47 + fVar46 * fVar47 +
                           fVar39 * fRam0000000146b29acc;
              local_268 = fVar62 * fVar54 + fVar61 * fVar67 + fVar45 * fVar71 +
                          fRam0000000146b29acc * fVar68;
              fStack_264 = fVar62 * fVar41 + fVar61 * fVar69 + fVar45 * fVar56 +
                           fRam0000000146b29acc * fVar72;
              fStack_260 = fVar62 * fVar70 + fVar61 * fVar58 + fVar45 * fVar48 +
                           fRam0000000146b29acc * fVar5;
              fStack_25c = fVar62 * fVar47 + fVar61 * fVar47 + fVar45 * fVar47 +
                           fRam0000000146b29acc * fRam0000000146b29acc;
              FMatrix::RemoveScaling(&local_298);
              fVar73 = (float)(-(uint)(fVar40 <= fVar73 * fVar74) & (_DAT_146b29b10 ^ (uint)fVar52)
                              ^ _DAT_146b29b10);
              fVar74 = (float)(-(uint)(fVar63 <= fVar75 * fVar42) &
                               (uRam0000000146b29b14 ^ (uint)fVar53) ^ uRam0000000146b29b14);
              fVar75 = (float)(-(uint)(fVar60 <= fVar50 * fVar51) &
                               (uRam0000000146b29b18 ^ (uint)fVar38) ^ uRam0000000146b29b18);
              local_298 = local_298 * fVar73;
              fStack_294 = fStack_294 * fVar73;
              fStack_290 = fStack_290 * fVar73;
              fStack_280 = fStack_280 * fVar74;
              fStack_284 = fStack_284 * fVar74;
              local_288 = local_288 * fVar74;
              fStack_270 = fStack_270 * fVar75;
              local_278 = local_278 * fVar75;
              fStack_274 = fStack_274 * fVar75;
              FQuat::FQuat(&local_178,&local_298);
              auVar37._0_4_ = local_178 * local_178 + fStack_170 * fStack_170;
              auVar37._4_4_ = fStack_174 * fStack_174 + fStack_16c * fStack_16c;
              auVar37._8_4_ = fStack_170 * fStack_170 + local_178 * local_178;
              auVar37._12_4_ = fStack_16c * fStack_16c + fStack_174 * fStack_174;
              fVar50 = auVar37._4_4_ + auVar37._0_4_;
              fVar51 = auVar37._8_4_ + auVar37._4_4_;
              fVar52 = auVar37._12_4_ + auVar37._8_4_;
              fVar53 = auVar37._0_4_ + auVar37._12_4_;
              auVar36._4_4_ = fVar51;
              auVar36._0_4_ = fVar50;
              auVar36._8_4_ = fVar52;
              auVar36._12_4_ = fVar53;
              auVar36 = rsqrtps(auVar37,auVar36);
              fVar73 = auVar36._0_4_;
              fVar74 = auVar36._4_4_;
              fVar75 = auVar36._8_4_;
              fVar42 = auVar36._12_4_;
              fVar73 = (_DAT_146b29ab0 - fVar73 * fVar73 * fVar50 * _DAT_146b29ab0) * fVar73 +
                       fVar73;
              fVar74 = (fRam0000000146b29ab4 - fVar74 * fVar74 * fVar51 * fRam0000000146b29ab4) *
                       fVar74 + fVar74;
              fVar75 = (fRam0000000146b29ab8 - fVar75 * fVar75 * fVar52 * fRam0000000146b29ab8) *
                       fVar75 + fVar75;
              fVar42 = (fRam0000000146b29abc - fVar42 * fVar42 * fVar53 * fRam0000000146b29abc) *
                       fVar42 + fVar42;
              fVar60 = (float)(((uint)(((_DAT_146b29ab0 - fVar73 * fVar73 * fVar50 * _DAT_146b29ab0)
                                        * fVar73 + fVar73) * local_178) ^ _DAT_146b29aa0) &
                               -(uint)(1e-08 <= fVar50) ^ _DAT_146b29aa0);
              fVar61 = (float)(((uint)(((fRam0000000146b29ab4 -
                                        fVar74 * fVar74 * fVar51 * fRam0000000146b29ab4) * fVar74 +
                                       fVar74) * fStack_174) ^ uRam0000000146b29aa4) &
                               -(uint)(1e-08 <= fVar51) ^ uRam0000000146b29aa4);
              fVar62 = (float)(((uint)(((fRam0000000146b29ab8 -
                                        fVar75 * fVar75 * fVar52 * fRam0000000146b29ab8) * fVar75 +
                                       fVar75) * fStack_170) ^ uRam0000000146b29aa8) &
                               -(uint)(1e-08 <= fVar52) ^ uRam0000000146b29aa8);
              fVar63 = (float)(((uint)(((fRam0000000146b29abc -
                                        fVar42 * fVar42 * fVar53 * fRam0000000146b29abc) * fVar42 +
                                       fVar42) * fStack_16c) ^ uRam0000000146b29aac) &
                               -(uint)(1e-08 <= fVar53) ^ uRam0000000146b29aac);
              local_1ec = local_268;
              local_1e8 = fStack_264;
              local_1e4 = fStack_260;
              local_178 = fVar60;
              fStack_174 = fVar61;
              fStack_170 = fVar62;
              fStack_16c = fVar63;
            }
            plVar10 = *(longlong **)(lVar29 + 8 + lVar20);
            (**(code **)(*plVar10 + 0x60))(plVar10,&local_1ec);
            plVar10 = *(longlong **)(lVar29 + 8 + lVar20);
            local_1b0 = fVar60;
            local_1ac = fVar61;
            local_1a8 = fVar62;
            local_1a4 = fVar63;
            (**(code **)(*plVar10 + 0x68))(plVar10,&local_1b0);
            (**(code **)(**(longlong **)(lVar29 + 8 + lVar20) + 0x80))();
            plVar10 = *(longlong **)(lVar29 + 8 + lVar20);
            local_248 = 0;
            uStack_240 = 0;
            lVar21 = *plVar10;
            uVar8 = (**(code **)(lVar21 + 0x158))();
            (**(code **)(lVar21 + 0x150))(plVar10,&local_248,0,uVar8);
            plVar10 = *(longlong **)(lVar29 + 8 + lVar20);
            local_248 = 0;
            uStack_240 = 0;
            lVar21 = *plVar10;
            uVar8 = (**(code **)(lVar21 + 0x178))();
            (**(code **)(lVar21 + 0x170))(plVar10,&local_248,0,uVar8);
            (**(code **)(**(longlong **)(lVar29 + 8 + lVar20) + 0x218))();
            (**(code **)(**(longlong **)(lVar29 + 8 + lVar20) + 600))();
          }
          else {
            iVar9 = -1;
          }
          *(int *)(plVar31 + 0xc) = iVar9;
          if (pvVar28 != (void *)0x0) {
            FMemory::Free(pvVar28);
          }
        }
        plVar31 = plVar31 + 0x3a;
      } while (plVar31 != local_198);
    }
    *(int *)(param_1 + 0x30) = param_2;
  }
  return;
}



// FUNCTION 142a6a1d0 FUN_142a6a1d0 body=1404 status=ok
// SIG undefined FUN_142a6a1d0(void)

void FUN_142a6a1d0(longlong *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 *puVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong *plVar26;
  float *pfVar27;
  longlong local_48 [2];
  longlong local_38 [2];
  
  iVar11 = (int)param_1[0xc];
  if (iVar11 != -1) {
    plVar9 = *(longlong **)((longlong)iVar11 * 0x40 + 8 + param_1[0x20]);
    plVar26 = param_1 + ((longlong)(int)param_1[0x23] + 0x12) * 2;
    lVar16 = (longlong)iVar11 * 0x108 + *(longlong *)(*param_1 + 0x118);
    (**(code **)(*plVar9 + 0x210))(plVar9,local_48);
    iVar11 = (**(code **)(*plVar9 + 0x220))(plVar9);
    lVar18 = 0;
    lVar22 = (longlong)iVar11;
    lVar24 = lVar18;
    if (3 < lVar22) {
      lVar17 = (lVar22 - 4U >> 2) + 1;
      lVar24 = lVar17 * 4;
      lVar13 = lVar18;
      puVar15 = (undefined4 *)(*plVar26 + 8);
      puVar19 = (undefined4 *)(*plVar26 + 0x14);
      pfVar21 = (float *)(*(longlong *)(lVar16 + 0x30) + 8);
      do {
        fVar1 = pfVar21[-2];
        fVar2 = *(float *)(param_2 + 0x74);
        uVar3 = puVar15[-1];
        uVar4 = *puVar15;
        *(undefined4 *)(lVar13 + local_48[0]) = puVar15[-2];
        *(undefined4 *)(lVar13 + 4 + local_48[0]) = uVar3;
        *(undefined4 *)(lVar13 + 8 + local_48[0]) = uVar4;
        *(float *)(lVar13 + 0xc + local_48[0]) = fVar1 * fVar2;
        fVar1 = pfVar21[-1];
        fVar2 = *(float *)(param_2 + 0x74);
        uVar3 = puVar19[-1];
        uVar4 = *puVar19;
        *(undefined4 *)(lVar13 + 0x10 + local_48[0]) = puVar15[1];
        *(undefined4 *)(lVar13 + 0x14 + local_48[0]) = uVar3;
        *(undefined4 *)(lVar13 + 0x18 + local_48[0]) = uVar4;
        *(float *)(lVar13 + 0x1c + local_48[0]) = fVar1 * fVar2;
        fVar1 = *pfVar21;
        fVar2 = *(float *)(param_2 + 0x74);
        uVar3 = puVar19[2];
        uVar4 = puVar19[3];
        *(undefined4 *)(lVar13 + 0x20 + local_48[0]) = puVar15[4];
        *(undefined4 *)(lVar13 + 0x24 + local_48[0]) = uVar3;
        *(undefined4 *)(lVar13 + 0x28 + local_48[0]) = uVar4;
        *(float *)(lVar13 + 0x2c + local_48[0]) = fVar1 * fVar2;
        fVar1 = pfVar21[1];
        uVar3 = puVar19[5];
        uVar4 = puVar19[6];
        fVar2 = *(float *)(param_2 + 0x74);
        *(undefined4 *)(lVar13 + 0x30 + local_48[0]) = puVar15[7];
        *(undefined4 *)(lVar13 + 0x34 + local_48[0]) = uVar3;
        *(undefined4 *)(lVar13 + 0x38 + local_48[0]) = uVar4;
        *(float *)(lVar13 + 0x3c + local_48[0]) = fVar1 * fVar2;
        lVar17 = lVar17 + -1;
        lVar13 = lVar13 + 0x40;
        puVar15 = puVar15 + 0xc;
        puVar19 = puVar19 + 0xc;
        pfVar21 = pfVar21 + 4;
      } while (lVar17 != 0);
    }
    if (lVar24 < lVar22) {
      lVar13 = lVar24 << 4;
      lVar22 = lVar22 - lVar24;
      pfVar21 = (float *)(*(longlong *)(lVar16 + 0x30) + lVar24 * 4);
      puVar15 = (undefined4 *)(*plVar26 + lVar24 * 0xc);
      do {
        lVar13 = lVar13 + 0x10;
        fVar1 = *pfVar21;
        pfVar21 = pfVar21 + 1;
        uVar8 = *puVar15;
        uVar3 = puVar15[1];
        uVar4 = puVar15[2];
        puVar15 = puVar15 + 3;
        *(float *)(local_48[0] + -4 + lVar13) = *(float *)(param_2 + 0x74) * fVar1;
        *(undefined4 *)(local_48[0] + -0xc + lVar13) = uVar3;
        *(undefined4 *)(local_48[0] + -8 + lVar13) = uVar4;
        *(undefined4 *)(local_48[0] + -0x10 + lVar13) = uVar8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    if ((0 < *(int *)(lVar16 + 0x48)) && (*(int *)(lVar16 + 0x48) == *(int *)(lVar16 + 0x58))) {
      (**(code **)(*plVar9 + 0x250))(plVar9,local_38);
      iVar11 = (**(code **)(*plVar9 + 0x260))(plVar9);
      lVar22 = (longlong)iVar11;
      lVar24 = lVar18;
      if (3 < lVar22) {
        lVar13 = *plVar26;
        pfVar21 = (float *)(lVar13 + 8);
        lVar23 = 0x1c - lVar13;
        puVar15 = (undefined4 *)(*(longlong *)(lVar16 + 0x50) + 4);
        lVar17 = -lVar13;
        lVar25 = lVar17 + -8;
        pfVar27 = (float *)(lVar13 + 0x14);
        lVar20 = *(longlong *)(lVar16 + 0x40) - *(longlong *)(lVar16 + 0x50);
        lVar14 = (lVar22 - 4U >> 2) + 1;
        lVar24 = lVar14 * 4;
        do {
          lVar10 = param_1[0x28];
          fVar1 = *(float *)((longlong)puVar15 + lVar20 + -4);
          fVar2 = *pfVar21;
          fVar5 = *(float *)((longlong)pfVar21 + lVar10 + lVar17 + -4);
          fVar6 = *(float *)((longlong)pfVar21 + lVar10 + lVar17);
          fVar7 = pfVar21[-1];
          uVar3 = puVar15[-1];
          *(float *)(lVar18 + local_38[0]) =
               pfVar21[-2] - fVar1 * *(float *)((longlong)pfVar21 + lVar10 + lVar25);
          *(float *)(lVar18 + 4 + local_38[0]) = fVar7 - fVar1 * fVar5;
          *(float *)(lVar18 + 8 + local_38[0]) = fVar2 - fVar6 * fVar1;
          *(undefined4 *)(lVar18 + 0xc + local_38[0]) = uVar3;
          lVar10 = param_1[0x28];
          fVar1 = *(float *)((longlong)puVar15 + lVar20);
          fVar2 = *pfVar27;
          fVar5 = *(float *)((longlong)pfVar21 + lVar10 + 0x10 + lVar25);
          fVar6 = *(float *)((longlong)pfVar21 + lVar10 + 0x14 + lVar25);
          fVar7 = pfVar27[-1];
          uVar3 = *puVar15;
          *(float *)(lVar18 + 0x10 + local_38[0]) =
               pfVar21[1] - fVar1 * *(float *)((longlong)pfVar21 + lVar10 + 0xc + lVar25);
          *(float *)(lVar18 + 0x14 + local_38[0]) = fVar7 - fVar1 * fVar5;
          *(float *)(lVar18 + 0x18 + local_38[0]) = fVar2 - fVar6 * fVar1;
          *(undefined4 *)(lVar18 + 0x1c + local_38[0]) = uVar3;
          pfVar12 = (float *)((longlong)pfVar21 + param_1[0x28] + (0x10 - lVar13));
          fVar1 = *(float *)(lVar20 + 4 + (longlong)puVar15);
          fVar2 = pfVar27[3];
          fVar5 = pfVar12[1];
          fVar6 = pfVar12[2];
          fVar7 = pfVar27[2];
          uVar3 = puVar15[1];
          *(float *)(lVar18 + 0x20 + local_38[0]) = pfVar21[4] - fVar1 * *pfVar12;
          *(float *)(lVar18 + 0x24 + local_38[0]) = fVar7 - fVar1 * fVar5;
          *(float *)(lVar18 + 0x28 + local_38[0]) = fVar2 - fVar6 * fVar1;
          *(undefined4 *)(lVar18 + 0x2c + local_38[0]) = uVar3;
          fVar1 = *(float *)(lVar20 + 8 + (longlong)puVar15);
          lVar10 = param_1[0x28];
          fVar2 = pfVar27[6];
          fVar5 = *(float *)((longlong)pfVar21 + lVar23 + lVar10 + 4);
          fVar6 = *(float *)((longlong)pfVar21 + lVar23 + lVar10 + 8);
          fVar7 = pfVar27[5];
          uVar3 = puVar15[2];
          *(float *)(lVar18 + 0x30 + local_38[0]) =
               pfVar21[7] - fVar1 * *(float *)((longlong)pfVar21 + lVar23 + lVar10);
          *(float *)(lVar18 + 0x34 + local_38[0]) = fVar7 - fVar1 * fVar5;
          *(float *)(lVar18 + 0x38 + local_38[0]) = fVar2 - fVar6 * fVar1;
          pfVar21 = pfVar21 + 0xc;
          *(undefined4 *)(lVar18 + 0x3c + local_38[0]) = uVar3;
          pfVar27 = pfVar27 + 0xc;
          lVar18 = lVar18 + 0x40;
          puVar15 = puVar15 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (lVar24 < lVar22) {
        lVar13 = *(longlong *)(lVar16 + 0x50);
        lVar17 = *plVar26;
        lVar18 = lVar24 * 0xc;
        lVar16 = *(longlong *)(lVar16 + 0x40);
        lVar14 = lVar24 << 4;
        puVar15 = (undefined4 *)(lVar13 + lVar24 * 4);
        pfVar21 = (float *)(lVar17 + 8 + lVar18);
        lVar22 = lVar22 - lVar24;
        do {
          lVar24 = param_1[0x28];
          fVar1 = *(float *)((longlong)puVar15 + (lVar16 - lVar13));
          pfVar27 = (float *)(lVar18 + lVar17);
          fVar2 = *pfVar21;
          pfVar12 = (float *)(lVar18 + lVar24);
          fVar5 = *(float *)(lVar18 + 4 + lVar24);
          fVar6 = *(float *)(lVar18 + 8 + lVar24);
          fVar7 = pfVar21[-1];
          lVar18 = lVar18 + 0xc;
          uVar3 = *puVar15;
          pfVar21 = pfVar21 + 3;
          puVar15 = puVar15 + 1;
          *(float *)(lVar14 + local_38[0]) = *pfVar27 - fVar1 * *pfVar12;
          *(float *)(lVar14 + 4 + local_38[0]) = fVar7 - fVar1 * fVar5;
          *(undefined4 *)(lVar14 + 0xc + local_38[0]) = uVar3;
          *(float *)(lVar14 + 8 + local_38[0]) = fVar2 - fVar6 * fVar1;
          lVar14 = lVar14 + 0x10;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
    }
  }
  return;
}



// FUNCTION 142a6a750 FUN_142a6a750 body=2185 status=ok
// SIG undefined FUN_142a6a750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a6a750(longlong *param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 in_XMM5 [16];
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
  float fVar48;
  float fVar49;
  float fVar50;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  longlong local_118 [2];
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
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  fVar29 = fRam0000000146b29b28;
  fVar28 = fRam0000000146b29b24;
  fVar22 = _DAT_146b29b20;
  fVar50 = fRam0000000146b29ac8;
  fVar49 = fRam0000000146b29ac4;
  fVar48 = _DAT_146b29ac0;
  if ((char)param_1[0x22] == '\0') {
    auVar16 = *(undefined1 (*) [16])(param_2 + 0x40);
    fVar30 = auVar16._0_4_;
    fVar38 = auVar16._4_4_;
    fVar20 = auVar16._8_4_;
    pfVar8 = (float *)((longlong)*(int *)(*param_1 + 0x158) * 0x30 + *(longlong *)(param_2 + 0x10));
    auVar15 = *(undefined1 (*) [16])(pfVar8 + 8);
    fVar31 = auVar15._0_4_;
    fVar18 = auVar15._4_4_;
    fVar21 = auVar15._8_4_;
    auVar11 = minps(auVar15,auVar16);
    fVar44 = fVar31 * fVar30;
    fVar45 = fVar18 * fVar38;
    fVar46 = fVar21 * fVar20;
    fVar47 = auVar15._12_4_ * auVar16._12_4_;
    auVar12._4_4_ = -(uint)(auVar11._4_4_ < fRam0000000146b29b24);
    auVar12._0_4_ = -(uint)(auVar11._0_4_ < _DAT_146b29b20);
    auVar12._8_4_ = -(uint)(auVar11._8_4_ < fRam0000000146b29b28);
    auVar12._12_4_ = -(uint)(auVar11._12_4_ < fRam0000000146b29b2c);
    iVar6 = movmskps((int)*param_1,auVar12);
    if (iVar6 == 0) {
      fVar48 = *(float *)(param_2 + 0x20);
      fVar49 = *(float *)(param_2 + 0x24);
      fVar50 = *(float *)(param_2 + 0x28);
      fVar22 = *(float *)(param_2 + 0x2c);
      fVar28 = *pfVar8;
      fVar29 = pfVar8[1];
      fVar30 = pfVar8[2];
      fVar31 = pfVar8[3];
      fVar38 = fVar31 * fVar48 * _DAT_146b29b00 + fVar22 * fVar28 + fVar49 * fVar30 * _DAT_146b29af0
               + fVar50 * fVar29 * _DAT_146b29ae0;
      fVar18 = fVar30 * fVar48 * fRam0000000146b29b04 + fVar22 * fVar29 +
               fVar49 * fVar31 * fRam0000000146b29af4 + fVar50 * fVar28 * fRam0000000146b29ae4;
      fVar20 = fVar29 * fVar48 * fRam0000000146b29b08 + fVar22 * fVar30 +
               fVar49 * fVar28 * fRam0000000146b29af8 + fVar50 * fVar31 * fRam0000000146b29ae8;
      fVar48 = fVar28 * fVar48 * fRam0000000146b29b0c + fVar22 * fVar31 +
               fVar49 * fVar29 * fRam0000000146b29afc + fVar50 * fVar30 * fRam0000000146b29aec;
    }
    else {
      fVar14 = *(float *)(param_2 + 0x20);
      fVar19 = *(float *)(param_2 + 0x24);
      fVar17 = *(float *)(param_2 + 0x28);
      fVar13 = *(float *)(param_2 + 0x2c);
      fVar2 = *(float *)(param_2 + 0x30);
      fVar3 = *(float *)(param_2 + 0x34);
      fVar4 = *(float *)(param_2 + 0x38);
      fVar23 = fVar19 + fVar19;
      fVar25 = fVar17 + fVar17;
      fVar26 = fVar14 * (fVar14 + fVar14);
      fVar24 = (fVar14 + fVar14) * fVar13;
      fVar41 = (fVar25 * fVar13 + fVar23 * fVar14) * fVar30;
      fVar42 = (fVar24 + fVar25 * fVar19) * fVar38;
      fVar43 = (fVar23 * fVar13 + fVar25 * fVar14) * fVar20;
      fVar32 = fVar38 * (fVar23 * fVar14 - fVar25 * fVar13);
      fVar34 = fVar20 * (fVar25 * fVar19 - fVar24);
      fVar35 = fVar30 * (fVar25 * fVar14 - fVar23 * fVar13);
      fVar13 = (float)((uint)((_DAT_146b29ac0 - (fVar17 * fVar25 + fVar19 * fVar23)) * fVar30) &
                      _DAT_146b29ad0);
      fVar17 = (float)((uint)((fRam0000000146b29ac4 - (fVar17 * fVar25 + fVar26)) * fVar38) &
                      uRam0000000146b29ad4);
      fVar19 = (float)((uint)((fRam0000000146b29ac8 - (fVar19 * fVar23 + fVar26)) * fVar20) &
                      uRam0000000146b29ad8);
      fVar23 = (float)((uint)((fRam0000000146b29acc - (fVar26 + fVar26)) * auVar16._12_4_) &
                      uRam0000000146b29adc);
      fVar30 = *pfVar8;
      fVar38 = pfVar8[1];
      fVar20 = pfVar8[2];
      fVar14 = pfVar8[3];
      fVar24 = fVar38 + fVar38;
      fVar26 = fVar20 + fVar20;
      fVar27 = fVar30 * (fVar30 + fVar30);
      fVar25 = (fVar30 + fVar30) * fVar14;
      fVar37 = (fVar26 * fVar14 + fVar24 * fVar30) * fVar31;
      fVar39 = (fVar25 + fVar26 * fVar38) * fVar18;
      fVar40 = (fVar24 * fVar14 + fVar26 * fVar30) * fVar21;
      fVar33 = fVar18 * (fVar24 * fVar30 - fVar26 * fVar14);
      fVar25 = fVar21 * (fVar26 * fVar38 - fVar25);
      fVar36 = fVar31 * (fVar26 * fVar30 - fVar24 * fVar14);
      fVar14 = (float)((uint)((_DAT_146b29ac0 - (fVar20 * fVar26 + fVar38 * fVar24)) * fVar31) &
                      _DAT_146b29ad0);
      fVar18 = (float)((uint)((fRam0000000146b29ac4 - (fVar20 * fVar26 + fVar27)) * fVar18) &
                      uRam0000000146b29ad4);
      fVar20 = (float)((uint)((fRam0000000146b29ac8 - (fVar38 * fVar24 + fVar27)) * fVar21) &
                      uRam0000000146b29ad8);
      fVar21 = (float)((uint)((fRam0000000146b29acc - (fVar27 + fVar27)) * auVar15._12_4_) &
                      uRam0000000146b29adc);
      fVar30 = pfVar8[4];
      fVar31 = pfVar8[5];
      fVar38 = pfVar8[6];
      local_108 = fVar37 * fVar32 + fVar14 * fVar13 + fVar36 * fVar43 + fVar21 * fVar2;
      fStack_104 = fVar37 * fVar17 + fVar14 * fVar41 + fVar36 * fVar34 + fVar21 * fVar3;
      fStack_100 = fVar37 * fVar42 + fVar14 * fVar35 + fVar36 * fVar19 + fVar21 * fVar4;
      fStack_fc = fVar37 * fVar23 + fVar14 * fVar23 + fVar36 * fVar23 +
                  fVar21 * fRam0000000146b29acc;
      local_f8 = fVar18 * fVar32 + fVar33 * fVar13 + fVar39 * fVar43 + fVar21 * fVar2;
      fStack_f4 = fVar18 * fVar17 + fVar33 * fVar41 + fVar39 * fVar34 + fVar21 * fVar3;
      fStack_f0 = fVar18 * fVar42 + fVar33 * fVar35 + fVar39 * fVar19 + fVar21 * fVar4;
      fStack_ec = fVar18 * fVar23 + fVar33 * fVar23 + fVar39 * fVar23 +
                  fVar21 * fRam0000000146b29acc;
      local_e8 = fVar25 * fVar32 + fVar40 * fVar13 + fVar20 * fVar43 + fVar21 * fVar2;
      fStack_e4 = fVar25 * fVar17 + fVar40 * fVar41 + fVar20 * fVar34 + fVar21 * fVar3;
      fStack_e0 = fVar25 * fVar42 + fVar40 * fVar35 + fVar20 * fVar19 + fVar21 * fVar4;
      fStack_dc = fVar25 * fVar23 + fVar40 * fVar23 + fVar20 * fVar23 +
                  fVar21 * fRam0000000146b29acc;
      local_d8 = fVar31 * fVar32 + fVar30 * fVar13 + fVar38 * fVar43 + fRam0000000146b29acc * fVar2;
      fStack_d4 = fVar31 * fVar17 + fVar30 * fVar41 + fVar38 * fVar34 + fRam0000000146b29acc * fVar3
      ;
      fStack_d0 = fVar31 * fVar42 + fVar30 * fVar35 + fVar38 * fVar19 + fRam0000000146b29acc * fVar4
      ;
      fStack_cc = fVar31 * fVar23 + fVar30 * fVar23 + fVar38 * fVar23 +
                  fRam0000000146b29acc * fRam0000000146b29acc;
      FMatrix::RemoveScaling(&local_108);
      fVar48 = (float)(-(uint)(fVar22 <= fVar44) & (_DAT_146b29b10 ^ (uint)fVar48) ^ _DAT_146b29b10)
      ;
      fVar49 = (float)(-(uint)(fVar28 <= fVar45) & (uRam0000000146b29b14 ^ (uint)fVar49) ^
                      uRam0000000146b29b14);
      fVar50 = (float)(-(uint)(fVar29 <= fVar46) & (uRam0000000146b29b18 ^ (uint)fVar50) ^
                      uRam0000000146b29b18);
      local_108 = local_108 * fVar48;
      fStack_104 = fStack_104 * fVar48;
      fStack_100 = fStack_100 * fVar48;
      fStack_f0 = fStack_f0 * fVar49;
      fStack_f4 = fStack_f4 * fVar49;
      local_f8 = local_f8 * fVar49;
      fStack_e0 = fStack_e0 * fVar50;
      local_e8 = local_e8 * fVar50;
      fStack_e4 = fStack_e4 * fVar50;
      FQuat::FQuat(&local_128,&local_108);
      in_XMM5._4_4_ = fStack_124;
      in_XMM5._0_4_ = local_128;
      in_XMM5._8_4_ = fStack_120;
      in_XMM5._12_4_ = fStack_11c;
      auVar15._0_4_ = local_128 * local_128 + fStack_120 * fStack_120;
      auVar15._4_4_ = fStack_124 * fStack_124 + fStack_11c * fStack_11c;
      auVar15._8_4_ = fStack_120 * fStack_120 + local_128 * local_128;
      auVar15._12_4_ = fStack_11c * fStack_11c + fStack_124 * fStack_124;
      fVar28 = auVar15._4_4_ + auVar15._0_4_;
      fVar29 = auVar15._8_4_ + auVar15._4_4_;
      fVar30 = auVar15._12_4_ + auVar15._8_4_;
      fVar31 = auVar15._0_4_ + auVar15._12_4_;
      auVar16._4_4_ = fVar29;
      auVar16._0_4_ = fVar28;
      auVar16._8_4_ = fVar30;
      auVar16._12_4_ = fVar31;
      auVar16 = rsqrtps(auVar15,auVar16);
      fVar48 = auVar16._0_4_;
      fVar49 = auVar16._4_4_;
      fVar50 = auVar16._8_4_;
      fVar22 = auVar16._12_4_;
      fVar48 = (_DAT_146b29ab0 - fVar48 * fVar48 * fVar28 * _DAT_146b29ab0) * fVar48 + fVar48;
      fVar49 = (fRam0000000146b29ab4 - fVar49 * fVar49 * fVar29 * fRam0000000146b29ab4) * fVar49 +
               fVar49;
      fVar50 = (fRam0000000146b29ab8 - fVar50 * fVar50 * fVar30 * fRam0000000146b29ab8) * fVar50 +
               fVar50;
      fVar22 = (fRam0000000146b29abc - fVar22 * fVar22 * fVar31 * fRam0000000146b29abc) * fVar22 +
               fVar22;
      fVar38 = (float)(((uint)(((_DAT_146b29ab0 - fVar48 * fVar48 * fVar28 * _DAT_146b29ab0) *
                                fVar48 + fVar48) * local_128) ^ _DAT_146b29aa0) &
                       -(uint)(1e-08 <= fVar28) ^ _DAT_146b29aa0);
      fVar18 = (float)(((uint)(((fRam0000000146b29ab4 -
                                fVar49 * fVar49 * fVar29 * fRam0000000146b29ab4) * fVar49 + fVar49)
                              * fStack_124) ^ uRam0000000146b29aa4) & -(uint)(1e-08 <= fVar29) ^
                      uRam0000000146b29aa4);
      fVar20 = (float)(((uint)(((fRam0000000146b29ab8 -
                                fVar50 * fVar50 * fVar30 * fRam0000000146b29ab8) * fVar50 + fVar50)
                              * fStack_120) ^ uRam0000000146b29aa8) & -(uint)(1e-08 <= fVar30) ^
                      uRam0000000146b29aa8);
      fVar48 = (float)(((uint)(((fRam0000000146b29abc -
                                fVar22 * fVar22 * fVar31 * fRam0000000146b29abc) * fVar22 + fVar22)
                              * fStack_11c) ^ uRam0000000146b29aac) & -(uint)(1e-08 <= fVar31) ^
                      uRam0000000146b29aac);
    }
    fVar38 = fVar38 * _DAT_146b29bd0;
    fVar18 = fVar18 * fRam0000000146b29bd4;
    fVar20 = fVar20 * fRam0000000146b29bd8;
    fVar48 = fVar48 * fRam0000000146b29bdc;
    fVar49 = param_3[2];
    fVar50 = *param_3;
    auVar11._4_4_ = fVar45;
    auVar11._0_4_ = fVar44;
    auVar11._8_4_ = fVar46;
    auVar11._12_4_ = fVar47;
    auVar16 = rcpps(in_XMM5,auVar11);
    fVar22 = fVar49 * fVar18 - (float)((ulonglong)*(undefined8 *)param_3 >> 0x20) * fVar20;
    fVar28 = fVar50 * fVar20 - fVar49 * fVar38;
    fVar29 = param_3[1] * fVar38 - fVar50 * fVar18;
    fVar30 = fVar48 * 0.0 - fVar48 * 0.0;
    fVar31 = auVar16._0_4_;
    fVar21 = auVar16._4_4_;
    fVar14 = auVar16._8_4_;
    fVar19 = auVar16._12_4_;
    fVar22 = fVar22 + fVar22;
    fVar28 = fVar28 + fVar28;
    fVar29 = fVar29 + fVar29;
    fVar30 = fVar30 + fVar30;
    fVar31 = (fVar31 + fVar31) - fVar31 * fVar31 * fVar44;
    fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar45;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar46;
    fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * fVar47;
    fVar31 = (fVar31 + fVar31) - fVar31 * fVar31 * fVar44;
    fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar45;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar46;
    fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * fVar47;
    local_128 = ((fVar29 * fVar18 - fVar28 * fVar20) + fVar48 * fVar22 + fVar50) *
                (float)(-(uint)((float)((uint)fVar44 & _DAT_146b29b50) <= _DAT_146b29bc0) &
                        (uint)fVar31 ^ (uint)fVar31);
    fStack_124 = ((fVar22 * fVar20 - fVar29 * fVar38) + fVar48 * fVar28 + param_3[1]) *
                 (float)(-(uint)((float)((uint)fVar45 & uRam0000000146b29b54) <=
                                fRam0000000146b29bc4) & (uint)fVar21 ^ (uint)fVar21);
    fStack_120 = ((fVar28 * fVar38 - fVar22 * fVar18) + fVar48 * fVar29 + fVar49) *
                 (float)(-(uint)((float)((uint)fVar46 & uRam0000000146b29b58) <=
                                fRam0000000146b29bc8) & (uint)fVar14 ^ (uint)fVar14);
    fStack_11c = ((fVar30 * fVar48 - fVar30 * fVar48) + fVar48 * fVar30 + 0.0) *
                 (float)(-(uint)((float)((uint)fVar47 & uRam0000000146b29b5c) <=
                                fRam0000000146b29bcc) & (uint)fVar19 ^ (uint)fVar19);
    FClothingActorNv::CalculateParticleVelocities(param_1,param_1 + 0x35);
    lVar5 = param_1[0xc];
    lVar9 = *(longlong *)(*param_1 + 0x118);
    iVar6 = (**(code **)(**(longlong **)((longlong)(int)lVar5 * 0x40 + 8 + param_1[0x20]) + 0x280))
                      ();
    lVar10 = (longlong)iVar6;
    plVar1 = *(longlong **)((longlong)(int)param_1[0xc] * 0x40 + 8 + param_1[0x20]);
    (**(code **)(*plVar1 + 0x270))(plVar1,local_118);
    if (0 < iVar6) {
      lVar7 = 0;
      pfVar8 = *(float **)((longlong)(int)lVar5 * 0x108 + 0x30 + lVar9);
      lVar9 = lVar7;
      do {
        lVar5 = param_1[0x35];
        fVar50 = local_128 * 2500.0 - *(float *)(lVar9 + lVar5);
        fVar48 = fStack_124 * 2500.0 - *(float *)(lVar9 + 4 + lVar5);
        fVar49 = fStack_120 * 2500.0 - *(float *)(lVar9 + 8 + lVar5);
        if ((*pfVar8 <= 0.0) || (((fVar50 == 0.0 && (fVar48 == 0.0)) && (fVar49 == 0.0)))) {
          *(undefined8 *)(lVar7 + 8 + local_118[0]) = 0;
          *(undefined8 *)(lVar7 + local_118[0]) = 0;
        }
        else {
          lVar5 = param_1[0x2a];
          fVar22 = fVar50 * fVar50 + fVar48 * fVar48 + fVar49 * fVar49;
          auVar16 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
          fVar28 = auVar16._0_4_;
          fVar28 = fVar28 + fVar28 * (0.5 - fVar22 * 0.5 * fVar28 * fVar28);
          fVar28 = fVar28 + fVar28 * (0.5 - fVar22 * 0.5 * fVar28 * fVar28);
          fVar22 = ABS(fVar48 * fVar28 * *(float *)(lVar9 + 4 + lVar5) +
                       fVar50 * fVar28 * *(float *)(lVar9 + lVar5) +
                       fVar28 * fVar49 * *(float *)(lVar9 + 8 + lVar5)) * *(float *)(param_2 + 0x6c)
          ;
          *(undefined4 *)(lVar7 + 0xc + local_118[0]) = 0;
          if (1.0 <= fVar22) {
            fVar22 = 1.0;
          }
          *(float *)(lVar7 + local_118[0]) = fVar22 * fVar50;
          *(float *)(lVar7 + 4 + local_118[0]) = fVar48 * fVar22;
          *(float *)(lVar7 + 8 + local_118[0]) = fVar22 * fVar49;
        }
        pfVar8 = pfVar8 + 1;
        lVar9 = lVar9 + 0xc;
        lVar7 = lVar7 + 0x10;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  else if ((char)param_1[0x22] == '\x01') {
    local_128 = *param_3 * 100.0;
    fStack_120 = param_3[2] * 100.0;
    plVar1 = *(longlong **)((longlong)(int)param_1[0xc] * 0x40 + 8 + param_1[0x20]);
    fStack_124 = param_3[1] * 100.0;
    (**(code **)(*plVar1 + 0x288))(plVar1,&local_128);
    return;
  }
  return;
}



// FUNCTION 142a6afe0 FUN_142a6afe0 body=139 status=ok
// SIG undefined FUN_142a6afe0(void)

void FUN_142a6afe0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    switch(param_2) {
    case 1:
      uVar2 = 4;
      break;
    case 2:
    case 4:
    case 0x80:
      uVar2 = 3;
      break;
    default:
      uVar2 = 5;
      break;
    case 8:
    case 0x20:
      uVar2 = 2;
      break;
    case 0x10:
    case 0x40:
      uVar2 = 1;
    }
    uVar1 = FUN_141672640();
    FOutputDevice::LogfImpl(uVar1,uVar2,L"NvCloth: %s, [%s:%d]",param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 142a6b100 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UClothingAssetCustomData::StaticClass(void)

{
  if (DAT_146b29d48 == 0) {
    FUN_14171ccd0(L"/Script/ClothingSystemRuntime",L"ClothingAssetCustomData",&DAT_146b29d48,
                  FUN_140447710,0x28,0x10000001,0,L"Engine",FUN_142a6b6c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b29d48;
}



// FUNCTION 142a6b1a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UParticleModuleTypeDataBeam2::GetPrivateStaticClass(void)

{
  if (DAT_146b29d58 == 0) {
    FUN_14171ccd0(L"/Script/ClothingSystemRuntime",L"ClothingAsset",&DAT_146b29d58,FUN_140447710,
                  0x168,0x10000000,0,L"Engine",&LAB_142a6b6a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UClothingAssetBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b29d58;
}



// FUNCTION 142a6b250 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UClothingSimulationInteractorNv::GetPrivateStaticClass(void)

{
  if (DAT_146b29d98 == 0) {
    FUN_14171ccd0(L"/Script/ClothingSystemRuntime",L"ClothingSimulationInteractorNv",&DAT_146b29d98,
                  StaticRegisterNativesUClothingSimulationInteractorNv,0x40,0x10000000,0,L"Engine",
                  FUN_142a6b720,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UClothingSimulationInteractor::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b29d98;
}



// FUNCTION 142a6b300 FUN_142a6b300 body=47 status=ok
// SIG undefined FUN_142a6b300(void)

longlong FUN_142a6b300(void)

{
  if (DAT_146b29d90 == 0) {
    FUN_141786440(&DAT_146b29d90,&PTR_GetPrivateStaticClass_145367a20);
  }
  return DAT_146b29d90;
}



// FUNCTION 142a6b330 FUN_142a6b330 body=47 status=ok
// SIG undefined FUN_142a6b330(void)

longlong FUN_142a6b330(void)

{
  if (DAT_146b29d70 == 0) {
    FUN_141786a30(&DAT_146b29d70,&PTR_FUN_14667d620);
  }
  return DAT_146b29d70;
}



// FUNCTION 142a6b360 FUN_142a6b360 body=47 status=ok
// SIG undefined FUN_142a6b360(void)

longlong FUN_142a6b360(void)

{
  if (DAT_146b29d78 == 0) {
    FUN_141786a30(&DAT_146b29d78,&PTR_FUN_14667d6a0);
  }
  return DAT_146b29d78;
}



// FUNCTION 142a6b390 FUN_142a6b390 body=47 status=ok
// SIG undefined FUN_142a6b390(void)

longlong FUN_142a6b390(void)

{
  if (DAT_146b29d80 == 0) {
    FUN_141786a30(&DAT_146b29d80,&PTR_FUN_14667d720);
  }
  return DAT_146b29d80;
}



// FUNCTION 142a6b3c0 FUN_142a6b3c0 body=47 status=ok
// SIG undefined FUN_142a6b3c0(void)

longlong FUN_142a6b3c0(void)

{
  if (DAT_146b29d88 == 0) {
    FUN_141786a30(&DAT_146b29d88,&PTR_FUN_14667d7a0);
  }
  return DAT_146b29d88;
}



// FUNCTION 142a6b410 FUN_142a6b410 body=47 status=ok
// SIG undefined FUN_142a6b410(void)

longlong FUN_142a6b410(void)

{
  if (DAT_146b29da0 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_146b29da0,&PTR_s__Script_ClothingSystemRuntime_145369e90);
  }
  return DAT_146b29da0;
}



// FUNCTION 142a6b440 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FPL_SpecializeFootIk_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc4;
    *puVar1 = &PTR_FUN_145369290;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142a6b480 FUN_142a6b480 body=53 status=ok
// SIG undefined FUN_142a6b480(void)

void FUN_142a6b480(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1453693a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142a6b4c0 FUN_142a6b4c0 body=53 status=ok
// SIG undefined FUN_142a6b4c0(void)

void FUN_142a6b4c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x108;
    *puVar1 = &PTR_FUN_1453694c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a6b500 FUN_142a6b500 body=53 status=ok
// SIG undefined FUN_142a6b500(void)

void FUN_142a6b500(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &PTR_FUN_1453695d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a6b540 FUN_142a6b540 body=53 status=ok
// SIG undefined FUN_142a6b540(void)

void FUN_142a6b540(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x34;
    *puVar1 = &PTR_FUN_1453696f0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142a6b580 FUN_142a6b580 body=53 status=ok
// SIG undefined FUN_142a6b580(void)

void FUN_142a6b580(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_145369808;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a6b5e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UClothingSimulationFactoryNv::GetPrivateStaticClass(void)

{
  if (DAT_146b29d68 == 0) {
    FUN_14171ccd0(L"/Script/ClothingSystemRuntime",L"ClothingSimulationFactoryNv",&DAT_146b29d68,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",FUN_142a6b6f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UClothingSimulationFactory::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b29d68;
}



// FUNCTION 142a6b6c0 FUN_142a6b6c0 body=41 status=ok
// SIG undefined FUN_142a6b6c0(void)

void FUN_142a6b6c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_145368f60;
  }
  return;
}



// FUNCTION 142a6b6f0 FUN_142a6b6f0 body=41 status=ok
// SIG undefined FUN_142a6b6f0(void)

void FUN_142a6b6f0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_145369920;
  }
  return;
}



// FUNCTION 142a6b720 FUN_142a6b720 body=51 status=ok
// SIG undefined FUN_142a6b720(void)

void FUN_142a6b720(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_145369bc0;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 142a6b8f0 FUN_142a6b8f0 body=181 status=ok
// SIG undefined FUN_142a6b8f0(void)

undefined8 * FUN_142a6b8f0(undefined8 *param_1)

{
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
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return param_1;
}



// FUNCTION 142a6b9b0 FUN_142a6b9b0 body=175 status=ok
// SIG undefined FUN_142a6b9b0(void)

void FUN_142a6b9b0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  
  plVar4 = (longlong *)*param_1;
  iVar5 = *(int *)(param_1 + 1);
  if (iVar5 != 0) {
    do {
      if ((int)plVar4[1] == 0) {
        plVar3 = (longlong *)*plVar4;
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)*plVar4;
        plVar2 = plVar3;
      }
      if (plVar2 == (longlong *)0x0) {
        if (((int)plVar4[1] != 0) && (plVar3 != (longlong *)0x0)) {
          lVar1 = *plVar3;
          goto LAB_142a6ba02;
        }
      }
      else {
        lVar1 = *plVar2;
        plVar3 = plVar2;
LAB_142a6ba02:
        (**(code **)(lVar1 + 0x28))(plVar3,0);
        if (*plVar4 != 0) {
          lVar1 = FMemory::Realloc(*plVar4,0,0);
          *plVar4 = lVar1;
        }
        *(undefined4 *)(plVar4 + 1) = 0;
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
    return;
  }
  return;
}



// FUNCTION 142a6ba60 FUN_142a6ba60 body=146 status=ok
// SIG undefined FUN_142a6ba60(void)

void FUN_142a6ba60(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x100);
  plVar1 = *(longlong **)(param_1 + 0xf8);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0xf8);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  FClothCollisionData::~FClothCollisionData(param_1 + 0xa8);
  FClothPhysicalMeshData::~FClothPhysicalMeshData(param_1);
  return;
}



// FUNCTION 142a6bb00 ~FClothPhysicalMeshData body=165 status=ok
// SIG undefined ~FClothPhysicalMeshData(void)

void FClothPhysicalMeshData::~FClothPhysicalMeshData(longlong *param_1)

{
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
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



// FUNCTION 142a6bbb0 operator= body=379 status=ok
// SIG undefined operator=(void)

undefined8 * FClothCollisionData::operator=(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  if (param_1 != param_2) {
    iVar8 = *(int *)(param_2 + 1);
    pvVar4 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1405d62d0(param_1,iVar8);
      ::_guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar4,(longlong)iVar8 * 0x14);
    }
  }
  puVar7 = param_1 + 2;
  if (puVar7 != param_2 + 2) {
    iVar8 = *(int *)(param_2 + 3);
    pvVar4 = (void *)param_2[2];
    *(int *)(param_1 + 3) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0x1c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar7,iVar8);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar7,pvVar4,(longlong)iVar8 << 3);
    }
  }
  plVar1 = param_1 + 4;
  if (plVar1 != param_2 + 4) {
    plVar6 = (longlong *)*plVar1;
    for (iVar8 = *(int *)(param_1 + 5); iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 3;
    }
    iVar8 = *(int *)(param_2 + 5);
    lVar5 = param_2[4];
    *(int *)(param_1 + 5) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0x2c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar8);
      puVar7 = (undefined8 *)*plVar1;
      if (iVar8 != 0) {
        puVar9 = (undefined4 *)(lVar5 + 0x10);
        do {
          *puVar7 = 0;
          iVar2 = puVar9[-2];
          pvVar4 = *(void **)(puVar9 + -4);
          *(int *)(puVar7 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
          }
          else {
            TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar7,iVar2,0);
            ::_guard_xfg_dispatch_icall_nop((void *)*puVar7,pvVar4,(longlong)iVar2 << 4);
          }
          uVar3 = *puVar9;
          puVar9 = puVar9 + 6;
          *(undefined4 *)(puVar7 + 2) = uVar3;
          puVar7 = puVar7 + 3;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 142a6bd30 operator= body=271 status=ok
// SIG undefined operator=(void)

longlong FClothPhysicalMeshData::operator=(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  TArray<FVector,FDefaultAllocator>::operator=();
  TArray<FVector,FDefaultAllocator>::operator=(param_1 + 0x10,param_2 + 0x10);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x20,param_2 + 0x20);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x30,param_2 + 0x30);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x40,param_2 + 0x40);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x50,param_2 + 0x50);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x60,param_2 + 0x60);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x70,param_2 + 0x70);
  puVar1 = (undefined8 *)(param_1 + 0x80);
  if (puVar1 != (undefined8 *)(param_2 + 0x80)) {
    iVar2 = *(int *)(param_2 + 0x88);
    _Src = *(void **)(param_2 + 0x80);
    *(int *)(param_1 + 0x88) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x8c) == 0)) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
    else {
      TArray<FBatchedLine,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x34);
    }
  }
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 142a6be40 FUN_142a6be40 body=64 status=ok
// SIG undefined FUN_142a6be40(void)

longlong FUN_142a6be40(longlong param_1,ulonglong param_2)

{
  FUN_142a6b9b0(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142a6beb0 FUN_142a6beb0 body=38 status=ok
// SIG undefined FUN_142a6beb0(void)

void FUN_142a6beb0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x108);
  FUN_142a6b8f0(param_2);
  return;
}



// FUNCTION 142a6bf10 Construct body=113 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FClothPhysicalMeshData>::Construct
               (undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0xa8);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  return;
}



// FUNCTION 142a6c070 FUN_142a6c070 body=366 status=ok
// SIG undefined FUN_142a6c070(void)

undefined8 FUN_142a6c070(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0xd8;
    do {
      FClothPhysicalMeshData::operator=(param_2,param_3 + -0xd8);
      FClothCollisionData::operator=(param_2 + 0xa8,param_3 + -0x30);
      TArray<FMeshToMeshVertData,FDefaultAllocator>::operator=(param_2 + 0xd8,param_3);
      TArray<FMeshToMeshVertData,FDefaultAllocator>::operator=(param_2 + 0xe8,param_3 + 0x10);
      puVar3 = (undefined8 *)(param_2 + 0xf8);
      if (puVar3 != (undefined8 *)(param_3 + 0x20)) {
        plVar2 = (longlong *)*puVar3;
        for (iVar4 = *(int *)(param_2 + 0x100); iVar4 != 0; iVar4 = iVar4 + -1) {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
        }
        iVar4 = *(int *)(param_3 + 0x28);
        puVar5 = *(undefined8 **)(param_3 + 0x20);
        *(int *)(param_2 + 0x100) = iVar4;
        if ((iVar4 == 0) && (*(int *)(param_2 + 0x104) == 0)) {
          *(undefined4 *)(param_2 + 0x104) = 0;
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
              TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 << 6);
            }
            puVar3 = puVar3 + 2;
            puVar5 = puVar5 + 2;
          }
        }
      }
      param_3 = param_3 + 0x108;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x108;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a6c1e0 Copy body=113 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FClothParameterMask_PhysMesh>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0xc);
    do {
      *(undefined8 *)(puVar1 + -3) = *(undefined8 *)(param_3 + -0xc + (longlong)puVar1);
      *(undefined1 *)(puVar1 + -1) = *(undefined1 *)(param_3 + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined4 *)(param_3 + 4 + (longlong)puVar1);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=
                (puVar1 + 3,param_3 + 0xc + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(param_3 + 0x1c + (longlong)puVar1);
      puVar1 = puVar1 + 0xc;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142a6c260 Copy body=347 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FClothPhysicalMeshData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    do {
      TArray<FVector,FDefaultAllocator>::operator=(param_2,param_3 + -0x10);
      TArray<FVector,FDefaultAllocator>::operator=(param_2 + 0x10,param_3);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 0x20,param_3 + 0x10);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 0x30,param_3 + 0x20);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 0x40,param_3 + 0x30);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 0x50,param_3 + 0x40);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 0x60,param_3 + 0x50);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 0x70,param_3 + 0x60);
      puVar1 = (undefined8 *)(param_2 + 0x80);
      if (puVar1 != (undefined8 *)(param_3 + 0x70)) {
        iVar2 = *(int *)(param_3 + 0x78);
        _Src = *(void **)(param_3 + 0x70);
        *(int *)(param_2 + 0x88) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_2 + 0x8c) == 0)) {
          *(undefined4 *)(param_2 + 0x8c) = 0;
        }
        else {
          TArray<FBatchedLine,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x34);
        }
      }
      *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_3 + 0x80);
      *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_3 + 0x84);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 0x98,param_3 + 0x88);
      param_3 = param_3 + 0xa8;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xa8;
    } while (param_4 != 0);
  }
  return 1;
}


