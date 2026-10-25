// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141aa7ef0 FUN_141aa7ef0 body=1131 status=ok
// SIG undefined FUN_141aa7ef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141aa7ef0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  
  SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
            (param_2,param_3,param_1 + 0x110,param_8);
  uVar3 = 0;
  uVar11 = (ulonglong)_tls_index;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar9 = uVar3;
    do {
      iVar8 = (int)uVar9;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar3 * 8) == &DAT_146b096e0) {
        if (iVar8 != -1) {
          puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
          *puVar10 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141aa7f88;
        }
        break;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x38) <
       DAT_146a0e8b8) && (_Init_thread_header(&DAT_146a0e8b8), DAT_146a0e8b8 == -1)) {
    _DAT_146a0e8b0 = 0;
    DAT_146a0e8b4 = 0;
    DAT_146a0e8b6 = 0;
    _Init_thread_footer(&DAT_146a0e8b8);
  }
  puVar10 = (undefined4 *)&DAT_146a0e8b0;
LAB_141aa7f88:
  FUN_141aad2e0(param_2,param_3,puVar10,param_7);
  lVar2 = param_6;
  if (*(short *)(param_1 + 0xd2) != 0) {
    puVar4 = (undefined8 *)FUN_141d9d800(param_1,&param_6,param_2,param_6);
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar6 = *puVar4;
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d8e690;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_6);
  }
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar6 = *(undefined8 *)(lVar2 + 0x60);
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d8e690;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
    uVar6 = *(undefined8 *)(lVar2 + 0x70);
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d8e690;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
  }
  if ((*(char *)(lVar2 + 0x120d) != '\0') && (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))) {
    lVar5 = FSceneViewFamily::GetStereoEyeView
                      (*(longlong *)(lVar2 + 0x10),-(*(int *)(lVar2 + 0xf60) != 0) & 2);
    uVar3 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      uVar9 = uVar3;
      do {
        iVar8 = (int)uVar9;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar3 * 8) == &DAT_146b09780) {
          if (iVar8 != -1) {
            puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
            *puVar10 = *(undefined4 *)(param_1 + 0xb8);
            SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
                      (param_2,param_3,puVar10,*(undefined8 *)(lVar5 + 0x20));
            goto LAB_141aa8228;
          }
          break;
        }
        uVar9 = (ulonglong)(iVar8 + 1);
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x10));
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x38) <
         DAT_146a0e8c8) && (_Init_thread_header(&DAT_146a0e8c8), DAT_146a0e8c8 == -1)) {
      _DAT_146a0e8c0 = 0;
      _DAT_146a0e8c4 = 0;
      DAT_146a0e8c6 = 0;
      _Init_thread_footer(&DAT_146a0e8c8);
    }
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,param_3,&DAT_146a0e8c0,*(undefined8 *)(lVar5 + 0x20));
  }
LAB_141aa8228:
  FUN_141d86700(param_1,param_2,param_3,param_4,param_5,lVar2);
  uVar6 = FUN_141a156e0();
  if (*(short *)(param_1 + 0x148) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x146);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d8e670;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
  }
  return;
}



// FUNCTION 141aa8360 FUN_141aa8360 body=1131 status=ok
// SIG undefined FUN_141aa8360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141aa8360(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  
  SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
            (param_2,param_3,param_1 + 0x110,param_8);
  uVar3 = 0;
  uVar11 = (ulonglong)_tls_index;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar9 = uVar3;
    do {
      iVar8 = (int)uVar9;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar3 * 8) == &DAT_146b096e0) {
        if (iVar8 != -1) {
          puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
          *puVar10 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141aa83f8;
        }
        break;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x38) <
       DAT_146a0e8b8) && (_Init_thread_header(&DAT_146a0e8b8), DAT_146a0e8b8 == -1)) {
    _DAT_146a0e8b0 = 0;
    DAT_146a0e8b4 = 0;
    DAT_146a0e8b6 = 0;
    _Init_thread_footer(&DAT_146a0e8b8);
  }
  puVar10 = (undefined4 *)&DAT_146a0e8b0;
LAB_141aa83f8:
  FUN_141aad450(param_2,param_3,puVar10,param_7);
  lVar2 = param_6;
  if (*(short *)(param_1 + 0xd2) != 0) {
    puVar4 = (undefined8 *)FUN_141d9d800(param_1,&param_6,param_2,param_6);
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar6 = *puVar4;
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d8e660;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_6);
  }
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar6 = *(undefined8 *)(lVar2 + 0x60);
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d8e660;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
    uVar6 = *(undefined8 *)(lVar2 + 0x70);
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d8e660;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
  }
  if ((*(char *)(lVar2 + 0x120d) != '\0') && (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))) {
    lVar5 = FSceneViewFamily::GetStereoEyeView
                      (*(longlong *)(lVar2 + 0x10),-(*(int *)(lVar2 + 0xf60) != 0) & 2);
    uVar3 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      uVar9 = uVar3;
      do {
        iVar8 = (int)uVar9;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar3 * 8) == &DAT_146b09780) {
          if (iVar8 != -1) {
            puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
            *puVar10 = *(undefined4 *)(param_1 + 0xb8);
            SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
                      (param_2,param_3,puVar10,*(undefined8 *)(lVar5 + 0x20));
            goto LAB_141aa8698;
          }
          break;
        }
        uVar9 = (ulonglong)(iVar8 + 1);
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x10));
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x38) <
         DAT_146a0e8c8) && (_Init_thread_header(&DAT_146a0e8c8), DAT_146a0e8c8 == -1)) {
      _DAT_146a0e8c0 = 0;
      _DAT_146a0e8c4 = 0;
      DAT_146a0e8c6 = 0;
      _Init_thread_footer(&DAT_146a0e8c8);
    }
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,param_3,&DAT_146a0e8c0,*(undefined8 *)(lVar5 + 0x20));
  }
LAB_141aa8698:
  FUN_141d87500(param_1,param_2,param_3,param_4,param_5,lVar2);
  uVar6 = FUN_141a156e0();
  if (*(short *)(param_1 + 0x148) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x146);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d8e640;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
  }
  return;
}



// FUNCTION 141aa87d0 FUN_141aa87d0 body=1131 status=ok
// SIG undefined FUN_141aa87d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141aa87d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  
  SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
            (param_2,param_3,param_1 + 0x110,param_8);
  uVar3 = 0;
  uVar11 = (ulonglong)_tls_index;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar9 = uVar3;
    do {
      iVar8 = (int)uVar9;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar3 * 8) == &DAT_146b096e0) {
        if (iVar8 != -1) {
          puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
          *puVar10 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141aa8868;
        }
        break;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x38) <
       DAT_146a0e8b8) && (_Init_thread_header(&DAT_146a0e8b8), DAT_146a0e8b8 == -1)) {
    _DAT_146a0e8b0 = 0;
    DAT_146a0e8b4 = 0;
    DAT_146a0e8b6 = 0;
    _Init_thread_footer(&DAT_146a0e8b8);
  }
  puVar10 = (undefined4 *)&DAT_146a0e8b0;
LAB_141aa8868:
  FUN_141aad5c0(param_2,param_3,puVar10,param_7);
  lVar2 = param_6;
  if (*(short *)(param_1 + 0xd2) != 0) {
    puVar4 = (undefined8 *)FUN_141d9d800(param_1,&param_6,param_2,param_6);
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar6 = *puVar4;
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d8e600;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_6);
  }
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar6 = *(undefined8 *)(lVar2 + 0x60);
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d8e600;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
    uVar6 = *(undefined8 *)(lVar2 + 0x70);
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144d8e600;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
  }
  if ((*(char *)(lVar2 + 0x120d) != '\0') && (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))) {
    lVar5 = FSceneViewFamily::GetStereoEyeView
                      (*(longlong *)(lVar2 + 0x10),-(*(int *)(lVar2 + 0xf60) != 0) & 2);
    uVar3 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      uVar9 = uVar3;
      do {
        iVar8 = (int)uVar9;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar3 * 8) == &DAT_146b09780) {
          if (iVar8 != -1) {
            puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
            *puVar10 = *(undefined4 *)(param_1 + 0xb8);
            SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
                      (param_2,param_3,puVar10,*(undefined8 *)(lVar5 + 0x20));
            goto LAB_141aa8b08;
          }
          break;
        }
        uVar9 = (ulonglong)(iVar8 + 1);
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x10));
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x38) <
         DAT_146a0e8c8) && (_Init_thread_header(&DAT_146a0e8c8), DAT_146a0e8c8 == -1)) {
      _DAT_146a0e8c0 = 0;
      _DAT_146a0e8c4 = 0;
      DAT_146a0e8c6 = 0;
      _Init_thread_footer(&DAT_146a0e8c8);
    }
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,param_3,&DAT_146a0e8c0,*(undefined8 *)(lVar5 + 0x20));
  }
LAB_141aa8b08:
  FUN_141d87c00(param_1,param_2,param_3,param_4,param_5,lVar2);
  uVar6 = FUN_141a156e0();
  if (*(short *)(param_1 + 0x148) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x146);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
  }
  return;
}



// FUNCTION 141aa8c40 FUN_141aa8c40 body=1131 status=ok
// SIG undefined FUN_141aa8c40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141aa8c40(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  
  SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
            (param_2,param_3,param_1 + 0x110,param_8);
  uVar3 = 0;
  uVar11 = (ulonglong)_tls_index;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar9 = uVar3;
    do {
      iVar8 = (int)uVar9;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar3 * 8) == &DAT_146b096e0) {
        if (iVar8 != -1) {
          puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
          *puVar10 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141aa8cd8;
        }
        break;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x38) <
       DAT_146a0e8b8) && (_Init_thread_header(&DAT_146a0e8b8), DAT_146a0e8b8 == -1)) {
    _DAT_146a0e8b0 = 0;
    DAT_146a0e8b4 = 0;
    DAT_146a0e8b6 = 0;
    _Init_thread_footer(&DAT_146a0e8b8);
  }
  puVar10 = (undefined4 *)&DAT_146a0e8b0;
LAB_141aa8cd8:
  FUN_141aad730(param_2,param_3,puVar10,param_7);
  lVar2 = param_6;
  if (*(short *)(param_1 + 0xd2) != 0) {
    puVar4 = (undefined8 *)FUN_141d9d800(param_1,&param_6,param_2,param_6);
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar6 = *puVar4;
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144165218;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&param_6);
  }
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar6 = *(undefined8 *)(lVar2 + 0x60);
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144165218;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
    uVar6 = *(undefined8 *)(lVar2 + 0x70);
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_144165218;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
  }
  if ((*(char *)(lVar2 + 0x120d) != '\0') && (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))) {
    lVar5 = FSceneViewFamily::GetStereoEyeView
                      (*(longlong *)(lVar2 + 0x10),-(*(int *)(lVar2 + 0xf60) != 0) & 2);
    uVar3 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      uVar9 = uVar3;
      do {
        iVar8 = (int)uVar9;
        if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar3 * 8) == &DAT_146b09780) {
          if (iVar8 != -1) {
            puVar10 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 8);
            *puVar10 = *(undefined4 *)(param_1 + 0xb8);
            SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
                      (param_2,param_3,puVar10,*(undefined8 *)(lVar5 + 0x20));
            goto LAB_141aa8f78;
          }
          break;
        }
        uVar9 = (ulonglong)(iVar8 + 1);
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x10));
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x38) <
         DAT_146a0e8c8) && (_Init_thread_header(&DAT_146a0e8c8), DAT_146a0e8c8 == -1)) {
      _DAT_146a0e8c0 = 0;
      _DAT_146a0e8c4 = 0;
      DAT_146a0e8c6 = 0;
      _Init_thread_footer(&DAT_146a0e8c8);
    }
    SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
              (param_2,param_3,&DAT_146a0e8c0,*(undefined8 *)(lVar5 + 0x20));
  }
LAB_141aa8f78:
  FUN_141d88300(param_1,param_2,param_3,param_4,param_5,lVar2);
  uVar6 = FUN_141a156e0();
  if (*(short *)(param_1 + 0x148) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x146);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar4;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c60;
    puVar7[2] = param_3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar6;
  }
  return;
}



// FUNCTION 141aa90b0 FUN_141aa90b0 body=497 status=ok
// SIG undefined FUN_141aa90b0(void)

void FUN_141aa90b0(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  local_res8 = *(undefined8 *)(lVar2 + 0x40);
  FUN_141aa9690(param_1,param_2,local_res8,*(undefined8 *)(*param_3 + 0x20));
  uVar4 = FUN_141a156e0();
  thunk_FUN_141ca99a0(param_1 + 0xc0,param_2,&local_res8,param_3,uVar4,0,0);
  FUN_141aa6fa0(param_1 + 0x1d8,param_2,&local_res8,*(undefined4 *)(*param_3 + 0x1a38),0xf);
  local_res18[0] = local_res8;
  FUN_141aa9f60(param_1 + 0x1bc,param_2,local_res18,*param_3,param_4);
  uVar4 = *(undefined8 *)(DAT_1464c3348 + 0x10);
  uVar5 = FUN_141a156e0();
  uVar3 = local_res8;
  if (*(short *)(param_1 + 0x1ea) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1e8);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar4;
  }
  if (*(short *)(param_1 + 0x1ee) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1ec);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  return;
}



// FUNCTION 141aa92b0 FUN_141aa92b0 body=365 status=ok
// SIG undefined FUN_141aa92b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141aa92b0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar7 = uVar2;
    do {
      iVar6 = (int)uVar7;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar2 * 8) == &DAT_146b096e0) {
        if (iVar6 != -1) {
          puVar5 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *puVar5 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141aa9336;
        }
        break;
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a0e8b8) {
    _Init_thread_header(&DAT_146a0e8b8);
    if (DAT_146a0e8b8 == -1) {
      _DAT_146a0e8b0 = 0;
      DAT_146a0e8b4 = 0;
      DAT_146a0e8b6 = 0;
      _Init_thread_footer(&DAT_146a0e8b8);
    }
  }
  puVar5 = (undefined4 *)&DAT_146a0e8b0;
LAB_141aa9336:
  if (*(char *)((longlong)puVar5 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar5 + 1);
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
    *puVar4 = &PTR_LAB_144dc9c90;
    puVar4[2] = param_3;
    *(uint *)(puVar4 + 3) = (uint)uVar1;
    puVar4[4] = param_4;
  }
  return;
}



// FUNCTION 141aa9420 FUN_141aa9420 body=365 status=ok
// SIG undefined FUN_141aa9420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141aa9420(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar7 = uVar2;
    do {
      iVar6 = (int)uVar7;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar2 * 8) == &DAT_146b096e0) {
        if (iVar6 != -1) {
          puVar5 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *puVar5 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141aa94a6;
        }
        break;
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a0e8b8) {
    _Init_thread_header(&DAT_146a0e8b8);
    if (DAT_146a0e8b8 == -1) {
      _DAT_146a0e8b0 = 0;
      DAT_146a0e8b4 = 0;
      DAT_146a0e8b6 = 0;
      _Init_thread_footer(&DAT_146a0e8b8);
    }
  }
  puVar5 = (undefined4 *)&DAT_146a0e8b0;
LAB_141aa94a6:
  if (*(char *)((longlong)puVar5 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar5 + 1);
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
    *puVar4 = &PTR_LAB_144dcb3c8;
    puVar4[2] = param_3;
    *(uint *)(puVar4 + 3) = (uint)uVar1;
    puVar4[4] = param_4;
  }
  return;
}



// FUNCTION 141aa9590 FUN_141aa9590 body=252 status=ok
// SIG undefined FUN_141aa9590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141aa9590(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar1 = 0;
    do {
      if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar1 * 8) == &DAT_146b096e0) {
        if (iVar3 != -1) {
          puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 8);
          *puVar2 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141aa960e;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a0e8b8) {
    _Init_thread_header(&DAT_146a0e8b8);
    if (DAT_146a0e8b8 == -1) {
      _DAT_146a0e8b0 = 0;
      DAT_146a0e8b4 = 0;
      DAT_146a0e8b6 = 0;
      _Init_thread_footer(&DAT_146a0e8b8);
    }
  }
  puVar2 = (undefined4 *)&DAT_146a0e8b0;
LAB_141aa960e:
  SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(param_2,param_3,puVar2,param_4);
  return;
}



// FUNCTION 141aa9690 FUN_141aa9690 body=365 status=ok
// SIG undefined FUN_141aa9690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141aa9690(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar7 = uVar2;
    do {
      iVar6 = (int)uVar7;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar2 * 8) == &DAT_146b096e0) {
        if (iVar6 != -1) {
          puVar5 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *puVar5 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141aa9716;
        }
        break;
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a0e8b8) {
    _Init_thread_header(&DAT_146a0e8b8);
    if (DAT_146a0e8b8 == -1) {
      _DAT_146a0e8b0 = 0;
      DAT_146a0e8b4 = 0;
      DAT_146a0e8b6 = 0;
      _Init_thread_footer(&DAT_146a0e8b8);
    }
  }
  puVar5 = (undefined4 *)&DAT_146a0e8b0;
LAB_141aa9716:
  if (*(char *)((longlong)puVar5 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar5 + 1);
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
    *puVar4 = &PTR_LAB_144d920a0;
    puVar4[2] = param_3;
    *(uint *)(puVar4 + 3) = (uint)uVar1;
    puVar4[4] = param_4;
  }
  return;
}



// FUNCTION 141aa9800 FUN_141aa9800 body=252 status=ok
// SIG undefined FUN_141aa9800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141aa9800(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar1 = 0;
    do {
      if (*(undefined **)(*(longlong *)(param_1 + 8) + lVar1 * 8) == &DAT_146b096e0) {
        if (iVar3 != -1) {
          puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 8);
          *puVar2 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_141aa987e;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146a0e8b8) {
    _Init_thread_header(&DAT_146a0e8b8);
    if (DAT_146a0e8b8 == -1) {
      _DAT_146a0e8b0 = 0;
      DAT_146a0e8b4 = 0;
      DAT_146a0e8b6 = 0;
      _Init_thread_footer(&DAT_146a0e8b8);
    }
  }
  puVar2 = (undefined4 *)&DAT_146a0e8b0;
LAB_141aa987e:
  SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(param_2,param_3,puVar2,param_4);
  return;
}



// FUNCTION 141aa9900 FUN_141aa9900 body=814 status=ok
// SIG undefined FUN_141aa9900(void)

void FUN_141aa9900(longlong param_1,longlong param_2,longlong *param_3,ulonglong param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar10;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  lVar4 = DAT_1464c3340;
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  lVar2 = *param_3;
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_44 = (float)(*(int *)(lVar2 + 0x1aac) - *(int *)(lVar2 + 0x1aa4)) /
             (float)(*(int *)(lVar2 + 0x2fd4) * 2);
  local_3c = local_44 * 0.5;
  local_48 = ((float)(*(int *)(lVar2 + 0x1aa8) - *(int *)(lVar2 + 0x1aa0)) /
             (float)(*(int *)(lVar2 + 0x2fd0) * 2)) * 0.5;
  local_44 = local_44 * -0.5;
  local_40 = local_48;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_res8 = *(undefined8 *)(lVar3 + 0x60);
  FUN_141aa92b0(param_1,param_2,local_res8,*(undefined8 *)(lVar2 + 0x20));
  uVar6 = local_res8;
  uVar1 = *(ushort *)(param_1 + 0x1e4);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144dc9cd0;
  puVar9[4] = param_5;
  puVar9[2] = uVar6;
  *(uint *)(puVar9 + 3) = (uint)uVar1;
  FUN_141aa56e0(param_1 + 0x1c4,param_2,&local_res8,*(undefined4 *)(lVar2 + 0x1a38),
                CONCAT44(uVar10,0xf));
  uVar6 = FUN_1404a0e20();
  FUN_141caac50(param_1 + 0xc6,&local_res8,param_3,param_2,uVar6,0,0);
  uVar6 = *(undefined8 *)(lVar4 + 0x10);
  uVar7 = FUN_141ac0bb0();
  uVar5 = local_res8;
  if (*(short *)(param_1 + 0x1dc) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1da);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144dc9ca0;
    puVar9[2] = uVar5;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar6;
  }
  if (*(short *)(param_1 + 0x1e0) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1de);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144dc9cb0;
    puVar9[4] = uVar7;
    puVar9[2] = uVar5;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
  }
  FUN_141aa58c0(param_1 + 0x1d4,param_2,lVar2,local_res8,param_4);
  FUN_141aac7b0(param_2,local_res8,param_1 + 0xc0,&local_48,param_4 & 0xffffffff00000000);
  return;
}



// FUNCTION 141aa9c30 FUN_141aa9c30 body=814 status=ok
// SIG undefined FUN_141aa9c30(void)

void FUN_141aa9c30(longlong param_1,longlong param_2,longlong *param_3,ulonglong param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar10;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  lVar4 = DAT_1464c3340;
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  lVar2 = *param_3;
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_44 = (float)(*(int *)(lVar2 + 0x1aac) - *(int *)(lVar2 + 0x1aa4)) /
             (float)(*(int *)(lVar2 + 0x2fd4) * 2);
  local_3c = local_44 * 0.5;
  local_48 = ((float)(*(int *)(lVar2 + 0x1aa8) - *(int *)(lVar2 + 0x1aa0)) /
             (float)(*(int *)(lVar2 + 0x2fd0) * 2)) * 0.5;
  local_44 = local_44 * -0.5;
  local_40 = local_48;
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  local_res8 = *(undefined8 *)(lVar3 + 0x60);
  FUN_141aa9420(param_1,param_2,local_res8,*(undefined8 *)(lVar2 + 0x20));
  uVar6 = local_res8;
  uVar1 = *(ushort *)(param_1 + 0x1e4);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar9 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar8;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_144d91e40;
  puVar9[4] = param_5;
  puVar9[2] = uVar6;
  *(uint *)(puVar9 + 3) = (uint)uVar1;
  FUN_141aa6060(param_1 + 0x1c4,param_2,&local_res8,*(undefined4 *)(lVar2 + 0x1a38),
                CONCAT44(uVar10,0xf));
  uVar6 = FUN_1404a0e20();
  FUN_141caac70(param_1 + 0xc6,&local_res8,param_3,param_2,uVar6,0,0);
  uVar6 = *(undefined8 *)(lVar4 + 0x10);
  uVar7 = FUN_141ac0bb0();
  uVar5 = local_res8;
  if (*(short *)(param_1 + 0x1dc) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1da);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d92090;
    puVar9[2] = uVar5;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar6;
  }
  if (*(short *)(param_1 + 0x1e0) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1de);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144dcb3b8;
    puVar9[4] = uVar7;
    puVar9[2] = uVar5;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
  }
  FUN_141aa6240(param_1 + 0x1d4,param_2,lVar2,local_res8,param_4);
  FUN_141a120e0(param_2,local_res8,param_1 + 0xc0,&local_48,param_4 & 0xffffffff00000000);
  return;
}



// FUNCTION 141aa9f60 FUN_141aa9f60 body=1039 status=ok
// SIG undefined FUN_141aa9f60(void)

void FUN_141aa9f60(longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  undefined4 *param_5)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  longlong local_res8;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  fVar8 = 0.0;
  if (*(longlong **)(param_5 + 4) != (longlong *)0x0) {
    fVar8 = (float)(**(code **)(**(longlong **)(param_5 + 4) + 0x2b0))();
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468509dc) &&
       (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
      DAT_1468509d8 = 1.442695;
      _Init_thread_footer(&DAT_1468509dc);
    }
    fVar8 = _guard_xfg_dispatch_icall_nop((float)(int)fVar8);
    fVar8 = fVar8 * DAT_1468509d8 + 1.0;
  }
  local_58 = *param_5;
  uStack_54 = param_5[1];
  uStack_50 = param_5[2];
  uStack_4c = param_5[3];
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>(param_2,*param_3,param_1,&local_58,0);
  local_res8 = *(longlong *)(DAT_146ac3d68 + 0x30);
  if (local_res8 != 0) {
    LOCK();
    *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_141d6a650(param_4);
  if (cVar4 != '\0') {
    lVar5 = FViewInfo::GetEyeAdaptation(param_4,param_2);
    TRefCountPtr<FRHITexture>::operator=(&local_res8,*(undefined8 *)(lVar5 + 8));
  }
  lVar5 = local_res8;
  uVar2 = *param_3;
  if (*(short *)(param_1 + 0x16) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x14);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar2;
    puVar7[4] = lVar5;
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_res8);
  lVar5 = FSceneRenderTargets::Get(param_2);
  if (((*(uint *)(param_4 + 0x28cc) & 0x400) == 0) || (*(longlong *)(lVar5 + 0x80) == 0)) {
    puVar6 = (undefined8 *)(DAT_146ac3e08 + 0x30);
  }
  else {
    puVar6 = (undefined8 *)(*(longlong *)(lVar5 + 0x80) + 0x10);
  }
  uVar2 = *puVar6;
  uVar3 = *param_3;
  if (*(short *)(param_1 + 0x1a) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x18);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar3;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar2;
  }
  local_68 = 1.0 - 4.0 / fVar8;
  local_64 = (fVar8 - 1.0) * local_68;
  local_60 = fVar8 - 4.0;
  local_5c = fVar8;
  SetShaderValue<FRHIPixelShader_*,FIntRect,FRHICommandList>
            (param_2,*param_3,param_1 + 6,&local_68,0);
  lVar5 = DAT_146ac3e58;
  if (*(longlong *)(param_5 + 4) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_5 + 4) + 0x60);
  }
  uVar2 = *param_3;
  if ((*(short *)(param_1 + 0xe) != 0) &&
     (*(undefined8 *)(lVar5 + 0x48) = DAT_1468b5a78, *(short *)(param_1 + 0xe) != 0)) {
    uVar3 = *(undefined8 *)(lVar5 + 0x30);
    uVar1 = *(ushort *)(param_1 + 0xc);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar3;
  }
  if (*(short *)(param_1 + 0x12) != 0) {
    uVar3 = *(undefined8 *)(lVar5 + 0x38);
    uVar1 = *(ushort *)(param_1 + 0x10);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar3;
  }
  return;
}



// FUNCTION 141aaa370 FUN_141aaa370 body=442 status=ok
// SIG undefined FUN_141aaa370(void)

longlong FUN_141aaa370(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0c450;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aaa530 FUN_141aaa530 body=442 status=ok
// SIG undefined FUN_141aaa530(void)

longlong FUN_141aaa530(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0ced0;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aaa6f0 FUN_141aaa6f0 body=442 status=ok
// SIG undefined FUN_141aaa6f0(void)

longlong FUN_141aaa6f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0d950;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aaa8b0 FUN_141aaa8b0 body=442 status=ok
// SIG undefined FUN_141aaa8b0(void)

longlong FUN_141aaa8b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0e3d0;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aaaa70 FUN_141aaaa70 body=442 status=ok
// SIG undefined FUN_141aaaa70(void)

longlong FUN_141aaaa70(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0b9d0;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aaac30 FUN_141aaac30 body=442 status=ok
// SIG undefined FUN_141aaac30(void)

longlong FUN_141aaac30(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0c1b0;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aaadf0 FUN_141aaadf0 body=442 status=ok
// SIG undefined FUN_141aaadf0(void)

longlong FUN_141aaadf0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0cc30;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aaafb0 FUN_141aaafb0 body=442 status=ok
// SIG undefined FUN_141aaafb0(void)

longlong FUN_141aaafb0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0d6b0;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aab170 FUN_141aab170 body=442 status=ok
// SIG undefined FUN_141aab170(void)

longlong FUN_141aab170(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0e130;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aab330 FUN_141aab330 body=442 status=ok
// SIG undefined FUN_141aab330(void)

longlong FUN_141aab330(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0b730;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aab4f0 FUN_141aab4f0 body=442 status=ok
// SIG undefined FUN_141aab4f0(void)

longlong FUN_141aab4f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0bf10;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aab6b0 FUN_141aab6b0 body=442 status=ok
// SIG undefined FUN_141aab6b0(void)

longlong FUN_141aab6b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0c990;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aab870 FUN_141aab870 body=442 status=ok
// SIG undefined FUN_141aab870(void)

longlong FUN_141aab870(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0d410;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aaba30 FUN_141aaba30 body=442 status=ok
// SIG undefined FUN_141aaba30(void)

longlong FUN_141aaba30(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0de90;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aabbf0 FUN_141aabbf0 body=442 status=ok
// SIG undefined FUN_141aabbf0(void)

longlong FUN_141aabbf0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0b490;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aabdb0 FUN_141aabdb0 body=442 status=ok
// SIG undefined FUN_141aabdb0(void)

longlong FUN_141aabdb0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0bc70;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aabf70 FUN_141aabf70 body=442 status=ok
// SIG undefined FUN_141aabf70(void)

longlong FUN_141aabf70(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0c6f0;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aac130 FUN_141aac130 body=442 status=ok
// SIG undefined FUN_141aac130(void)

longlong FUN_141aac130(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0d170;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aac2f0 FUN_141aac2f0 body=442 status=ok
// SIG undefined FUN_141aac2f0(void)

longlong FUN_141aac2f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0dbf0;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aac4b0 FUN_141aac4b0 body=442 status=ok
// SIG undefined FUN_141aac4b0(void)

longlong FUN_141aac4b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong local_res10;
  undefined *local_38;
  undefined4 local_30;
  
  plVar5 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_38 = &DAT_146a51f90;
  local_30 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  local_30 = 0;
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  local_38 = &DAT_146a0b1f0;
  lVar2 = *plVar7;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,&local_res10,&local_38);
  plVar4 = plVar5;
  if ((int)local_res10 != -1) {
    plVar4 = (longlong *)((longlong)(int)local_res10 * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar7 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = plVar5;
  }
  lVar1 = *plVar7;
  *param_3 = DAT_1464c2720;
  if (lVar2 == 0) {
    local_res10 = 0;
    plVar7 = (longlong *)0x1;
    plVar4 = plVar5;
  }
  else {
    lVar6 = *(longlong *)(lVar2 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar4 = *(longlong **)(lVar6 + 0x38);
    plVar7 = plVar5;
  }
  param_3[1] = plVar4;
  if (plVar7 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  bVar3 = false;
  if (lVar1 == 0) {
    bVar3 = true;
    local_res10 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar1 + 0x48);
    if (*(char *)(lVar6 + 0x28) == '\0') {
      FUN_1419f3850(lVar6);
    }
    plVar5 = *(longlong **)(lVar6 + 0x40);
  }
  param_3[4] = plVar5;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  FUN_141ed6ac0(*(undefined8 *)(param_2 + 0x40),param_3,2,1);
  lVar6 = FRenderingCompositePass::GetInputDesc(param_1,0);
  FUN_141ad70c0(lVar2,param_2);
  FUN_141ad7250(lVar1,*(undefined8 *)(param_2 + 0x40),param_2,*(undefined8 *)(lVar6 + 0x14),0);
  return lVar2;
}



// FUNCTION 141aac670 SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList> body=308 status=ok
// SIG undefined SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>(void)

void SetShaderValue<FRHIComputeShader_*,FIntPoint,FRHICommandList>
               (longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_5 * -0x10;
  if (7 < (int)uVar6) {
    uVar6 = 8;
  }
  if (0 < (int)uVar6) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar3;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar6);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d92080;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_5 * 0x10;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141aac7b0 FUN_141aac7b0 body=308 status=ok
// SIG undefined FUN_141aac7b0(void)

void FUN_141aac7b0(longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_5 * -0x10;
  if (0xf < (int)uVar6) {
    uVar6 = 0x10;
  }
  if (0 < (int)uVar6) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar3;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar6);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144dc9c80;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_5 * 0x10;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141aac8f0 SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList> body=308 status=ok
// SIG undefined SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>(void)

void SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
               (longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_5 * -0x10;
  if (0xb < (int)uVar6) {
    uVar6 = 0xc;
  }
  if (0 < (int)uVar6) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar3;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar6);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d92080;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_5 * 0x10;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141aaca30 SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList> body=308 status=ok
// SIG undefined SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>(void)

void SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
               (longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_5 * -0x40;
  if (0x3f < (int)uVar6) {
    uVar6 = 0x40;
  }
  if (0 < (int)uVar6) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar3;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar6);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f594b0;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_5 * 0x40;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141aacb70 SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList> body=308 status=ok
// SIG undefined SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>(void)

void SetShaderValue<FRHIPixelShader_*,FVector,FRHICommandList>
               (longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_5 * -0x10;
  if (0xb < (int)uVar6) {
    uVar6 = 0xc;
  }
  if (0 < (int)uVar6) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar3;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar6);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f594b0;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_5 * 0x10;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141aaccb0 FUN_141aaccb0 body=35 status=ok
// SIG undefined FUN_141aaccb0(void)

void FUN_141aaccb0(void)

{
  FUN_1404986d0();
  return;
}



// FUNCTION 141aacce0 FUN_141aacce0 body=310 status=ok
// SIG undefined FUN_141aacce0(void)

void FUN_141aacce0(longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5,
                  int param_6)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_6 * -0x10;
  if (param_5 << 4 <= (int)uVar6) {
    uVar6 = param_5 << 4;
  }
  if (0 < (int)uVar6) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar3;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar6);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144dc9c80;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_6 * 0x10;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141aace20 FUN_141aace20 body=310 status=ok
// SIG undefined FUN_141aace20(void)

void FUN_141aace20(longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5,
                  int param_6)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_6 * -0x10;
  if (param_5 << 4 <= (int)uVar6) {
    uVar6 = param_5 << 4;
  }
  if (0 < (int)uVar6) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar3;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar6);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_144d92080;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_6 * 0x10;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141aacf60 SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList> body=310 status=ok
// SIG undefined SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>(void)

void SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
               (longlong param_1,undefined8 param_2,ushort *param_3,void *param_4,int param_5,
               int param_6)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  uint uVar6;
  
  uVar6 = (uint)param_3[2] + param_6 * -0x10;
  if (param_5 << 4 <= (int)uVar6) {
    uVar6 = param_5 << 4;
  }
  if (0 < (int)uVar6) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    if (*(ulonglong *)(param_1 + 0x38) < uVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,uVar6 + 0x10);
      _Dst = (void *)(*(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar3 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar3;
    _guard_xfg_dispatch_icall_nop(_Dst,param_4,(ulonglong)uVar6);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 6;
    if (*(undefined8 **)(param_1 + 0x38) < puVar4) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x38);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 6;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar5;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_143f594b0;
    puVar5[3] = _Dst;
    *(uint *)(puVar5 + 4) = (uint)uVar1;
    *(uint *)((longlong)puVar5 + 0x24) = (uint)uVar2 + param_6 * 0x10;
    puVar5[2] = param_2;
    *(uint *)(puVar5 + 5) = uVar6;
  }
  return;
}



// FUNCTION 141aad0a0 SetTexture<FRHIComputeShader_*,FRHICommandList> body=201 status=ok
// SIG undefined SetTexture<FRHIComputeShader_*,FRHICommandList>(void)

void FRWShaderParameter::SetTexture<FRHIComputeShader_*,FRHICommandList>
               (ushort *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ushort uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  cVar2 = SetUAVParameterIfCS<FRHICommandList>(param_2,param_3,param_1 + 2,param_5);
  if ((cVar2 == '\0') && (param_1[1] != 0)) {
    uVar1 = *param_1;
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
    *(uint *)(puVar4 + 3) = (uint)uVar1;
    *puVar4 = &PTR_LAB_144d92090;
    puVar4[2] = param_3;
    puVar4[4] = param_4;
  }
  return;
}



// FUNCTION 141aad170 SetUAVParameterIfCS<FRHICommandList> body=181 status=ok
// SIG undefined SetUAVParameterIfCS<FRHICommandList>(void)

bool SetUAVParameterIfCS<FRHICommandList>
               (longlong param_1,undefined8 param_2,ushort *param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_3[1] != 0) {
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar1 = *param_3;
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    *puVar3 = &PTR_LAB_144d91e40;
    puVar3[2] = param_2;
    puVar3[4] = param_4;
  }
  return param_3[1] != 0;
}



// FUNCTION 141aad230 SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList> body=174 status=ok
// SIG undefined SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(void)

void SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_3 + 6) != '\0') {
    uVar1 = *(ushort *)(param_3 + 4);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    *puVar3 = &PTR_LAB_144dcb3a8;
    puVar3[2] = param_2;
    puVar3[4] = param_4;
  }
  return;
}



// FUNCTION 141aad2e0 FUN_141aad2e0 body=178 status=ok
// SIG undefined FUN_141aad2e0(void)

void FUN_141aad2e0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_3 + 6) != '\0') {
    uVar2 = *param_4;
    uVar1 = *(ushort *)(param_3 + 4);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar4;
    *(undefined8 **)(param_1 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *(uint *)(puVar4 + 3) = (uint)uVar1;
    puVar4[4] = uVar2;
    *puVar4 = &PTR_LAB_144dcb3a8;
    puVar4[2] = param_2;
  }
  return;
}



// FUNCTION 141aad3a0 SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList> body=174 status=ok
// SIG undefined SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(void)

void SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_3 + 6) != '\0') {
    uVar1 = *(ushort *)(param_3 + 4);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    *puVar3 = &PTR_LAB_144dcb398;
    puVar3[2] = param_2;
    puVar3[4] = param_4;
  }
  return;
}



// FUNCTION 141aad450 FUN_141aad450 body=178 status=ok
// SIG undefined FUN_141aad450(void)

void FUN_141aad450(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_3 + 6) != '\0') {
    uVar2 = *param_4;
    uVar1 = *(ushort *)(param_3 + 4);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar4;
    *(undefined8 **)(param_1 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *(uint *)(puVar4 + 3) = (uint)uVar1;
    puVar4[4] = uVar2;
    *puVar4 = &PTR_LAB_144dcb398;
    puVar4[2] = param_2;
  }
  return;
}



// FUNCTION 141aad510 SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList> body=174 status=ok
// SIG undefined SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(void)

void SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_3 + 6) != '\0') {
    uVar1 = *(ushort *)(param_3 + 4);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    *puVar3 = &PTR_LAB_144d920a0;
    puVar3[2] = param_2;
    puVar3[4] = param_4;
  }
  return;
}



// FUNCTION 141aad5c0 FUN_141aad5c0 body=178 status=ok
// SIG undefined FUN_141aad5c0(void)

void FUN_141aad5c0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_3 + 6) != '\0') {
    uVar2 = *param_4;
    uVar1 = *(ushort *)(param_3 + 4);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar4;
    *(undefined8 **)(param_1 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *(uint *)(puVar4 + 3) = (uint)uVar1;
    puVar4[4] = uVar2;
    *puVar4 = &PTR_LAB_144d920a0;
    puVar4[2] = param_2;
  }
  return;
}



// FUNCTION 141aad680 SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList> body=174 status=ok
// SIG undefined SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(void)

void SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_3 + 6) != '\0') {
    uVar1 = *(ushort *)(param_3 + 4);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    *puVar3 = &PTR_LAB_144dcb388;
    puVar3[2] = param_2;
    puVar3[4] = param_4;
  }
  return;
}



// FUNCTION 141aad730 FUN_141aad730 body=178 status=ok
// SIG undefined FUN_141aad730(void)

void FUN_141aad730(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_3 + 6) != '\0') {
    uVar2 = *param_4;
    uVar1 = *(ushort *)(param_3 + 4);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar3 = puVar4 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar3) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30);
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar4 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar4;
    *(undefined8 **)(param_1 + 8) = puVar4 + 1;
    puVar4[1] = 0;
    *(uint *)(puVar4 + 3) = (uint)uVar1;
    puVar4[4] = uVar2;
    *puVar4 = &PTR_LAB_144dcb388;
    puVar4[2] = param_2;
  }
  return;
}



// FUNCTION 141aad7f0 UnsetUAV<FRHICommandList> body=187 status=ok
// SIG undefined UnsetUAV<FRHICommandList>(void)

void FRWShaderParameter::UnsetUAV<FRHICommandList>
               (longlong param_1,longlong param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  
  local_res8 = 0;
  if (*(short *)(param_1 + 6) != 0) {
    uVar1 = *(ushort *)(param_1 + 4);
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar2;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar3;
    *(undefined8 **)(param_2 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *(uint *)(puVar3 + 3) = (uint)uVar1;
    *puVar3 = &PTR_LAB_144d91e40;
    puVar3[2] = param_3;
    puVar3[4] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  return;
}



// FUNCTION 141aad8b0 FUN_141aad8b0 body=234 status=ok
// SIG undefined FUN_141aad8b0(void)

undefined8 *
FUN_141aad8b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 *param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = *param_5;
  param_1[4] = param_5[1];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_5 + 2);
  lVar2 = param_5[3];
  param_1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[7] = param_5[4];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_5 + 5);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_5 + 0x2c);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_5 + 6);
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  uVar1 = *param_6;
  param_1[0xb] = param_7;
  param_1[0xc] = param_8;
  *(undefined4 *)(param_1 + 0xd) = param_10;
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_11;
  param_1[0xe] = param_12;
  *(undefined1 *)(param_1 + 10) = uVar1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  if (param_9 != (undefined8 *)0x0) {
    uVar3 = param_9[1];
    param_1[0xf] = *param_9;
    param_1[0x10] = uVar3;
    uVar3 = param_9[3];
    param_1[0x11] = param_9[2];
    param_1[0x12] = uVar3;
    uVar3 = param_9[5];
    param_1[0x13] = param_9[4];
    param_1[0x14] = uVar3;
  }
  return param_1;
}



// FUNCTION 141aad9a0 FUN_141aad9a0 body=368 status=ok
// SIG undefined FUN_141aad9a0(void)

undefined8 *
FUN_141aad9a0(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,int param_5
             ,undefined4 param_6,undefined4 param_7,byte param_8,byte param_9,undefined8 param_10,
             undefined4 param_11,byte param_12,byte param_13)

{
  undefined1 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_141b279e0();
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xfffffffe;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xfffffffe;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | (uint)param_12;
  *(undefined4 *)((longlong)param_1 + 100) = param_7;
  *(undefined4 *)(param_1 + 0xc) = param_6;
  *(uint *)(param_1 + 0xd) =
       (param_9 & 0xfffffffd | (uint)param_13 * 2) * 2 |
       ((uint)param_8 | *(uint *)(param_1 + 0xd)) & 0xfffffff9;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar4 = (**(code **)(*param_4 + 0x178))(param_4);
  cVar3 = FUN_141ed13a0((&DAT_1464c9c48)[param_5]);
  if (cVar3 != '\0') {
    lVar5 = (**(code **)(*param_2 + 0x40))(param_2);
    cVar3 = (**(code **)(lVar5 + 0x48))();
    if ((cVar3 != '\0') && (iVar4 != 0)) {
      uVar7 = 1;
      goto LAB_141aada8c;
    }
  }
  uVar7 = 0;
LAB_141aada8c:
  uVar2 = *(uint *)(param_1 + 0xd);
  uVar1 = *(undefined1 *)(param_1 + 0xd);
  uVar6 = (**(code **)(*(longlong *)param_1[1] + 0x40))();
  FUN_141aa28f0(param_4,uVar6,param_6,uVar7,
                CONCAT71((int7)((ulonglong)param_10 >> 8),(char)(uVar2 >> 1)) & 0xffffffffffffff01,
                CONCAT31((int3)((uint)param_11 >> 8),uVar1) & 0xffffff01,param_1 + 9,param_1 + 10,
                param_1 + 8,param_1 + 0xb);
  *param_1 = param_1[8];
  return param_1;
}



// FUNCTION 141aadb10 FUN_141aadb10 body=238 status=ok
// SIG undefined FUN_141aadb10(void)

undefined8 * FUN_141aadb10(undefined8 *param_1,longlong param_2)

{
  FUN_141aaf710();
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 *)((longlong)param_1 + 0x156) = 0;
  *param_1 = &PTR_FUN_144dc90e8;
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
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c6) = 0;
  FShaderUniformBufferParameter::Bind
            (param_1 + 0x2a,*(undefined8 *)(param_2 + 0x18),L"PrecomputedLightingBuffer",0);
  BindBasePassUniformBuffer(*(undefined8 *)(param_2 + 0x18),param_1 + 0x22);
  FUN_141ab55f0(param_1 + 0x2b,*(undefined8 *)(param_2 + 0x18));
  FShaderUniformBufferParameter::Bind
            (param_1 + 0x38,*(undefined8 *)(param_2 + 0x18),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 141aadc00 FUN_141aadc00 body=164 status=ok
// SIG undefined FUN_141aadc00(void)

undefined8 * FUN_141aadc00(undefined8 *param_1)

{
  FUN_141aaf7d0();
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 *)((longlong)param_1 + 0x156) = 0;
  *param_1 = &PTR_FUN_144dc90e8;
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
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c6) = 0;
  return param_1;
}



// FUNCTION 141aadcb0 FUN_141aadcb0 body=281 status=ok
// SIG undefined FUN_141aadcb0(void)

undefined8 * FUN_141aadcb0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_141aaf710();
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 *)((longlong)param_1 + 0x156) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *param_1 = &PTR_FUN_144dc8e08;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ee) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FShaderUniformBufferParameter::Bind(param_1 + 0x2a,uVar1,L"PrecomputedLightingBuffer",0);
  FSelfShadowedTranslucencyPolicy::PixelParametersType::Bind(param_1 + 0x2b,uVar1);
  BindBasePassUniformBuffer(*(undefined8 *)(param_2 + 0x18),param_1 + 0x22);
  FUN_141ab55f0(param_1 + 0x30,*(undefined8 *)(param_2 + 0x18));
  FShaderUniformBufferParameter::Bind
            (param_1 + 0x3d,*(undefined8 *)(param_2 + 0x18),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 141aaddd0 FUN_141aaddd0 body=199 status=ok
// SIG undefined FUN_141aaddd0(void)

undefined8 * FUN_141aaddd0(undefined8 *param_1)

{
  FUN_141aaf7d0();
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 *)((longlong)param_1 + 0x156) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *param_1 = &PTR_FUN_144dc8e08;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ee) = 0;
  return param_1;
}



// FUNCTION 141aadea0 FUN_141aadea0 body=238 status=ok
// SIG undefined FUN_141aadea0(void)

undefined8 * FUN_141aadea0(undefined8 *param_1,longlong param_2)

{
  FUN_141aaf710();
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *param_1 = &PTR_FUN_144dc8c98;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e6) = 0;
  FSelfShadowedTranslucencyPolicy::PixelParametersType::Bind
            (param_1 + 0x2a,*(undefined8 *)(param_2 + 0x18));
  BindBasePassUniformBuffer(*(undefined8 *)(param_2 + 0x18),param_1 + 0x22);
  FUN_141ab55f0(param_1 + 0x2f,*(undefined8 *)(param_2 + 0x18));
  FShaderUniformBufferParameter::Bind
            (param_1 + 0x3c,*(undefined8 *)(param_2 + 0x18),L"ReflectionCapture",0);
  return param_1;
}



// FUNCTION 141aadf90 FUN_141aadf90 body=180 status=ok
// SIG undefined FUN_141aadf90(void)

undefined8 * FUN_141aadf90(undefined8 *param_1)

{
  FUN_141aaf7d0();
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *param_1 = &PTR_FUN_144dc8c98;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e6) = 0;
  return param_1;
}



// FUNCTION 141aae050 FUN_141aae050 body=317 status=ok
// SIG undefined FUN_141aae050(void)

undefined8 * FUN_141aae050(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  
  FUN_141aaf710();
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 *)((longlong)param_1 + 0x156) = 0;
  *param_1 = &PTR_FUN_144dc90b8;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x15e) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  FShaderUniformBufferParameter::Bind
            (param_1 + 0x2a,*(undefined8 *)(param_2 + 0x18),L"PrecomputedLightingBuffer",0);
  BindBasePassUniformBuffer(*(undefined8 *)(param_2 + 0x18),param_1 + 0x22);
  FShaderUniformBufferParameter::Bind
            (param_1 + 0x2b,*(undefined8 *)(param_2 + 0x18),L"ReflectionCapture",0);
  cVar1 = FUN_141e02d40();
  if (cVar1 != '\0') {
    FShaderParameter::Bind(param_1 + 0x2c,*(undefined8 *)(param_2 + 0x18),L"PreviousLocalToWorld",0)
    ;
    FShaderParameter::Bind
              ((longlong)param_1 + 0x166,*(undefined8 *)(param_2 + 0x18),L"SkipOutputVelocity",0);
  }
  FShaderParameter::Bind
            ((longlong)param_1 + 0x16c,*(undefined8 *)(param_2 + 0x18),L"InstancedEyeIndex",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x172,*(undefined8 *)(param_2 + 0x18),L"bIsInstancedStereo",0);
  return param_1;
}



// FUNCTION 141aae190 FUN_141aae190 body=282 status=ok
// SIG undefined FUN_141aae190(void)

undefined8 * FUN_141aae190(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  
  FUN_141aaf710();
  *param_1 = &PTR_FUN_144dc8b18;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 *)((longlong)param_1 + 0x156) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  BindBasePassUniformBuffer(*(undefined8 *)(param_2 + 0x18),param_1 + 0x22);
  FShaderUniformBufferParameter::Bind
            (param_1 + 0x2a,*(undefined8 *)(param_2 + 0x18),L"ReflectionCapture",0);
  cVar1 = FUN_141e02d40();
  if (cVar1 != '\0') {
    FShaderParameter::Bind(param_1 + 0x2b,*(undefined8 *)(param_2 + 0x18),L"PreviousLocalToWorld",0)
    ;
    FShaderParameter::Bind
              ((longlong)param_1 + 0x15e,*(undefined8 *)(param_2 + 0x18),L"SkipOutputVelocity",0);
  }
  FShaderParameter::Bind
            ((longlong)param_1 + 0x164,*(undefined8 *)(param_2 + 0x18),L"InstancedEyeIndex",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x16a,*(undefined8 *)(param_2 + 0x18),L"bIsInstancedStereo",0);
  return param_1;
}



// FUNCTION 141aae2b0 FUN_141aae2b0 body=987 status=ok
// SIG undefined FUN_141aae2b0(void)

undefined8 * FUN_141aae2b0(undefined8 *param_1,longlong param_2)

{
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dc8450;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x112) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x132) = 0;
  *(undefined4 *)((longlong)param_1 + 0x136) = 0;
  *(undefined2 *)((longlong)param_1 + 0x13a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x142) = 0;
  *(undefined4 *)((longlong)param_1 + 0x146) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  FRWShaderParameter::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),L"ShadowFactors");
  FRWShaderParameter::Bind(param_1 + 0x19,*(undefined8 *)(param_2 + 0x18),L"TileIntersectionCounts")
  ;
  FShaderParameter::Bind(param_1 + 0x1a,*(undefined8 *)(param_2 + 0x18),L"TileDimensions",0);
  FRWShaderParameter::Bind
            ((longlong)param_1 + 0xd6,*(undefined8 *)(param_2 + 0x18),L"BentNormalTexture");
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xde,*(undefined8 *)(param_2 + 0x18),L"ReceiverBentNormalTexture",0
            );
  FShaderParameter::Bind((longlong)param_1 + 0xe2,*(undefined8 *)(param_2 + 0x18),L"NumGroups",0);
  FShaderParameter::Bind(param_1 + 0x1d,*(undefined8 *)(param_2 + 0x18),L"LightDirection",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xf4,*(undefined8 *)(param_2 + 0x18),L"LightSourceRadius",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0xfa,*(undefined8 *)(param_2 + 0x18),L"RayStartOffsetDepthScale",0)
  ;
  FShaderParameter::Bind
            ((longlong)param_1 + 0xee,*(undefined8 *)(param_2 + 0x18),L"LightPositionAndInvRadius",0
            );
  FShaderParameter::Bind
            (param_1 + 0x20,*(undefined8 *)(param_2 + 0x18),L"LightAngleAndNormalThreshold",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x106,*(undefined8 *)(param_2 + 0x18),L"ScissorRectMinAndSize",0);
  FUN_141cdf500(param_2,(longlong)param_1 + 0x10c,(longlong)param_1 + 0x114);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x11c,*(undefined8 *)(param_2 + 0x18),L"DownsampleFactor",0);
  FShaderParameter::Bind
            ((longlong)param_1 + 0x122,*(undefined8 *)(param_2 + 0x18),L"NumShadowCapsules",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x25,*(undefined8 *)(param_2 + 0x18),L"ShadowCapsuleShapes",0);
  FShaderParameter::Bind
            ((undefined4 *)((longlong)param_1 + 300),*(undefined8 *)(param_2 + 0x18),
             L"NumMeshDistanceFieldCasters",0);
  FShaderResourceParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0x132),*(undefined8 *)(param_2 + 0x18),
             L"MeshDistanceFieldCasterIndices",0);
  FShaderParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0x136),*(undefined8 *)(param_2 + 0x18),
             L"MaxOcclusionDistance",0);
  FShaderParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0x13c),*(undefined8 *)(param_2 + 0x18),
             L"CosFadeStartAngle",0);
  FShaderResourceParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0x142),*(undefined8 *)(param_2 + 0x18),
             L"LightDirectionData",0);
  FShaderParameter::Bind
            ((undefined4 *)((longlong)param_1 + 0x146),*(undefined8 *)(param_2 + 0x18),
             L"IndirectCapsuleSelfShadowingIntensity",0);
  FDistanceFieldObjectBufferParameters::Bind
            ((undefined8 *)((longlong)param_1 + 0x14c),*(undefined8 *)(param_2 + 0x18));
  return param_1;
}



// FUNCTION 141aae690 TCapsuleShadowingBaseCS<1> body=213 status=ok
// SIG undefined TCapsuleShadowingBaseCS<1>(void)

undefined8 * TCapsuleShadowingBaseCS<1>::TCapsuleShadowingBaseCS<1>(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dc8450;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x112) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  return param_1;
}



// FUNCTION 141aae770 FUN_141aae770 body=119 status=ok
// SIG undefined FUN_141aae770(void)

undefined8 * FUN_141aae770(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146a0aab0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141aae7f0 FUN_141aae7f0 body=119 status=ok
// SIG undefined FUN_141aae7f0(void)

undefined8 * FUN_141aae7f0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146a0ad50;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 141aae870 FUN_141aae870 body=450 status=ok
// SIG undefined FUN_141aae870(void)

undefined8 * FUN_141aae870(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dc8ef8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  FUN_141cdf500(param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FShaderResourceParameter::Bind(param_1 + 0x1a,uVar1,L"AtmosphereTransmittanceTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xd4,uVar1,L"AtmosphereTransmittanceTextureSampler",0);
  FShaderResourceParameter::Bind(param_1 + 0x1b,uVar1,L"AtmosphereIrradianceTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xdc,uVar1,L"AtmosphereIrradianceTextureSampler",0);
  FShaderResourceParameter::Bind(param_1 + 0x1c,uVar1,L"AtmosphereInscatterTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xe4,uVar1,L"AtmosphereInscatterTextureSampler",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1d,*(undefined8 *)(param_2 + 0x18),L"OcclusionTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xec,*(undefined8 *)(param_2 + 0x18),L"OcclusionTextureSampler",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x1e,*(undefined8 *)(param_2 + 0x18),L"GbxSceneDepthTexture",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0xf4,*(undefined8 *)(param_2 + 0x18),L"GbxSceneDepthTextureSampler"
             ,0);
  return param_1;
}



// FUNCTION 141aaea40 FUN_141aaea40 body=108 status=ok
// SIG undefined FUN_141aaea40(void)

undefined8 * FUN_141aaea40(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dc8ef8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  return param_1;
}



// FUNCTION 141aaeab0 FUN_141aaeab0 body=2011 status=ok
// SIG undefined FUN_141aaeab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141aaeab0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
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
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float local_148;
  undefined8 uStack_144;
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
  undefined1 local_f8 [16];
  undefined4 local_e8 [4];
  undefined4 local_d8;
  undefined4 local_c8;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_144dc9e50;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x2d0);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x2d4);
  fVar12 = 1.0;
  if (0.0 < *(float *)(param_2 + 0x2d8)) {
    fVar12 = 1.0 / *(float *)(param_2 + 0x2d8);
  }
  *(float *)(param_1 + 8) = fVar12;
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x2dc);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x2ec);
  fVar12 = *(float *)(param_2 + 0x2e0);
  *(float *)((longlong)param_1 + 0x4c) = fVar12;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x2e4);
  fVar33 = *(float *)(param_2 + 0x304);
  *(float *)((longlong)param_1 + 0x54) = fVar33 * fVar33 * fVar33 * 64.0;
  fVar33 = *(float *)(param_2 + 0x2f0);
  *(float *)(param_1 + 0xb) = fVar33;
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x2e8);
  uVar1 = *(undefined4 *)(param_2 + 0x2f4);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 800);
  *(float *)(param_1 + 0xb) = fVar12 * 1e-05 * fVar33;
  fVar12 = *(float *)(param_2 + 0x2f8);
  pfVar11 = (float *)FLinearColor::FLinearColor(&local_148,param_2 + 0x2fc);
  fVar33 = pfVar11[1];
  fVar35 = pfVar11[2];
  fStack_13c = fVar12 * pfVar11[3];
  *(float *)((longlong)param_1 + 100) = fVar12 * *pfVar11;
  *(float *)(param_1 + 0xd) = fVar12 * fVar33;
  *(float *)((longlong)param_1 + 0x6c) = fVar12 * fVar35;
  *(float *)(param_1 + 0xe) = fStack_13c;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | *(uint *)(param_2 + 0x300) & 1;
  uStack_144 = 0;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | *(uint *)(param_2 + 0x300) & 2;
  *(float *)(param_1 + 9) = *(float *)(param_2 + 0x228) + *(float *)(param_1 + 9);
  local_148 = *(float *)(param_2 + 0x4b0);
  pfVar11 = (float *)FRotator::Quaternion(&local_148,local_f8);
  uVar9 = uRam00000001469fd73c;
  uVar8 = uRam00000001469fd738;
  uVar7 = uRam00000001469fd734;
  uVar6 = _DAT_1469fd730;
  fVar41 = fRam00000001469fd728;
  fVar39 = fRam00000001469fd724;
  fVar37 = _DAT_1469fd720;
  auVar18 = *(undefined1 (*) [16])(param_2 + 0x230);
  fVar12 = auVar18._0_4_;
  fVar33 = auVar18._4_4_;
  fVar35 = auVar18._8_4_;
  fVar45 = (float)((uint)_DAT_1469fd720 & _DAT_1469fd730);
  fVar46 = (float)((uint)fRam00000001469fd724 & uRam00000001469fd734);
  fVar47 = (float)((uint)fRam00000001469fd728 & uRam00000001469fd738);
  fVar16 = *pfVar11;
  fVar22 = pfVar11[1];
  fVar20 = pfVar11[2];
  fVar24 = pfVar11[3];
  auVar13._4_4_ = fVar46;
  auVar13._0_4_ = fVar45;
  auVar13._8_4_ = fVar47;
  auVar13._12_4_ = (uint)fRam00000001469fd72c & uRam00000001469fd73c;
  fVar15 = *(float *)(param_2 + 0x210);
  fVar21 = *(float *)(param_2 + 0x214);
  fVar19 = *(float *)(param_2 + 0x218);
  fVar23 = *(float *)(param_2 + 0x21c);
  auVar13 = minps(auVar13,auVar18);
  auVar14._4_4_ = -(uint)(auVar13._4_4_ < fRam00000001469fd7a4);
  auVar14._0_4_ = -(uint)(auVar13._0_4_ < _DAT_1469fd7a0);
  auVar14._8_4_ = -(uint)(auVar13._8_4_ < fRam00000001469fd7a8);
  auVar14._12_4_ = -(uint)(auVar13._12_4_ < fRam00000001469fd7ac);
  iVar10 = movmskps((int)pfVar11,auVar14);
  if (iVar10 == 0) {
    fVar12 = fVar12 * 0.0;
    fVar33 = fVar33 * 0.0;
    fVar35 = fVar35 * 0.0;
    fVar37 = fVar24 * fVar15 * _DAT_1469fd760 + fVar23 * fVar16 + fVar20 * fVar21 * _DAT_1469fd750 +
             fVar22 * fVar19 * _DAT_1469fd740;
    fVar39 = fVar20 * fVar15 * fRam00000001469fd764 + fVar23 * fVar22 +
             fVar24 * fVar21 * fRam00000001469fd754 + fVar16 * fVar19 * fRam00000001469fd744;
    fVar41 = fVar22 * fVar15 * fRam00000001469fd768 + fVar23 * fVar20 +
             fVar16 * fVar21 * fRam00000001469fd758 + fVar24 * fVar19 * fRam00000001469fd748;
    fVar24 = fVar16 * fVar15 * fRam00000001469fd76c + fVar23 * fVar24 +
             fVar22 * fVar21 * fRam00000001469fd75c + fVar20 * fVar19 * fRam00000001469fd74c;
    fVar16 = fVar35 * fVar21 - fVar33 * fVar19;
    fVar22 = fVar12 * fVar19 - fVar35 * fVar15;
    fVar20 = fVar33 * fVar15 - fVar12 * fVar21;
    fVar16 = fVar16 + fVar16;
    fVar22 = fVar22 + fVar22;
    fVar20 = fVar20 + fVar20;
    local_108 = (fVar20 * fVar21 - fVar22 * fVar19) + fVar16 * fVar23 + fVar12 +
                *(float *)(param_2 + 0x220);
    fStack_104 = (fVar16 * fVar19 - fVar20 * fVar15) + fVar22 * fVar23 + fVar33 +
                 *(float *)(param_2 + 0x224);
    fStack_100 = (fVar22 * fVar15 - fVar16 * fVar21) + fVar20 * fVar23 + fVar35 +
                 *(float *)(param_2 + 0x228);
  }
  else {
    fVar25 = fVar21 + fVar21;
    fVar28 = fVar19 + fVar19;
    fVar3 = *(float *)(param_2 + 0x220);
    fVar4 = *(float *)(param_2 + 0x224);
    fVar5 = *(float *)(param_2 + 0x228);
    fVar30 = (fVar15 + fVar15) * fVar15;
    fVar26 = (fVar15 + fVar15) * fVar23;
    fVar27 = fVar22 + fVar22;
    fVar29 = fVar20 + fVar20;
    fVar42 = (fVar28 * fVar23 + fVar25 * fVar15) * fVar12;
    fVar43 = (fVar26 + fVar28 * fVar21) * fVar33;
    fVar44 = (fVar25 * fVar23 + fVar28 * fVar15) * fVar35;
    fVar31 = fVar33 * (fVar25 * fVar15 - fVar28 * fVar23);
    fVar32 = fVar35 * (fVar28 * fVar21 - fVar26);
    fVar34 = fVar12 * (fVar28 * fVar15 - fVar25 * fVar23);
    fVar26 = fVar16 * (fVar16 + fVar16);
    fVar15 = (float)((uint)((_DAT_1469fd720 - (fVar28 * fVar19 + fVar25 * fVar21)) * fVar12) &
                    _DAT_1469fd730);
    fVar19 = (float)((uint)((fRam00000001469fd724 - (fVar28 * fVar19 + fVar30)) * fVar33) &
                    uRam00000001469fd734);
    fVar21 = (float)((uint)((fRam00000001469fd728 - (fVar25 * fVar21 + fVar30)) * fVar35) &
                    uRam00000001469fd738);
    fVar23 = (float)((uint)((fRam00000001469fd72c - (fVar30 + fVar30)) * auVar18._12_4_) &
                    uRam00000001469fd73c);
    fVar25 = (fVar16 + fVar16) * fVar24;
    fVar36 = (fVar29 * fVar24 + fVar27 * fVar16) * fVar45;
    fVar38 = (fVar25 + fVar29 * fVar22) * fVar46;
    fVar40 = (fVar27 * fVar24 + fVar29 * fVar16) * fVar47;
    fVar28 = fVar46 * (fVar27 * fVar16 - fVar29 * fVar24);
    fVar25 = fVar47 * (fVar29 * fVar22 - fVar25);
    fVar30 = fVar45 * (fVar29 * fVar16 - fVar27 * fVar24);
    fVar16 = (float)((uint)((_DAT_1469fd720 - (fVar20 * fVar29 + fVar22 * fVar27)) * fVar45) &
                    _DAT_1469fd730);
    fVar20 = (float)((uint)((fRam00000001469fd724 - (fVar20 * fVar29 + fVar26)) * fVar46) &
                    uRam00000001469fd734);
    fVar22 = (float)((uint)((fRam00000001469fd728 - (fVar22 * fVar27 + fVar26)) * fVar47) &
                    uRam00000001469fd738);
    fVar24 = (float)((uint)((fRam00000001469fd72c - (fVar26 + fVar26)) *
                           (float)((uint)fRam00000001469fd72c & uRam00000001469fd73c)) &
                    uRam00000001469fd73c);
    local_138 = fVar36 * fVar31 + fVar16 * fVar15 + fVar30 * fVar44 + fVar24 * fVar3;
    fStack_134 = fVar36 * fVar19 + fVar16 * fVar42 + fVar30 * fVar32 + fVar24 * fVar4;
    fStack_130 = fVar36 * fVar43 + fVar16 * fVar34 + fVar30 * fVar21 + fVar24 * fVar5;
    fStack_12c = fVar36 * fVar23 + fVar16 * fVar23 + fVar30 * fVar23 + fVar24 * fRam00000001469fd72c
    ;
    local_128 = fVar20 * fVar31 + fVar28 * fVar15 + fVar38 * fVar44 + fVar24 * fVar3;
    fStack_124 = fVar20 * fVar19 + fVar28 * fVar42 + fVar38 * fVar32 + fVar24 * fVar4;
    fStack_120 = fVar20 * fVar43 + fVar28 * fVar34 + fVar38 * fVar21 + fVar24 * fVar5;
    fStack_11c = fVar20 * fVar23 + fVar28 * fVar23 + fVar38 * fVar23 + fVar24 * fRam00000001469fd72c
    ;
    local_118 = fVar25 * fVar31 + fVar40 * fVar15 + fVar22 * fVar44 + fVar24 * fVar3;
    fStack_114 = fVar25 * fVar19 + fVar40 * fVar42 + fVar22 * fVar32 + fVar24 * fVar4;
    fStack_110 = fVar25 * fVar43 + fVar40 * fVar34 + fVar22 * fVar21 + fVar24 * fVar5;
    fStack_10c = fVar25 * fVar23 + fVar40 * fVar23 + fVar22 * fVar23 + fVar24 * fRam00000001469fd72c
    ;
    local_108 = fVar31 * 0.0 + fVar15 * 0.0 + fVar44 * 0.0 + fRam00000001469fd72c * fVar3;
    fStack_104 = fVar19 * 0.0 + fVar42 * 0.0 + fVar32 * 0.0 + fRam00000001469fd72c * fVar4;
    fStack_100 = fVar43 * 0.0 + fVar34 * 0.0 + fVar21 * 0.0 + fRam00000001469fd72c * fVar5;
    fStack_fc = fVar23 * 0.0 + fVar23 * 0.0 + fVar23 * 0.0 +
                fRam00000001469fd72c * fRam00000001469fd72c;
    FMatrix::RemoveScaling(&local_138);
    fVar12 = (float)(-(uint)(_DAT_1469fd7a0 <= fVar45 * fVar12) & (_DAT_1469fd790 ^ (uint)fVar37) ^
                    _DAT_1469fd790);
    fVar33 = (float)(-(uint)(fRam00000001469fd7a4 <= fVar46 * fVar33) &
                     (uRam00000001469fd794 ^ (uint)fVar39) ^ uRam00000001469fd794);
    fVar35 = (float)(-(uint)(fRam00000001469fd7a8 <= fVar47 * fVar35) &
                     (uRam00000001469fd798 ^ (uint)fVar41) ^ uRam00000001469fd798);
    local_138 = fVar12 * local_138;
    fStack_134 = fVar12 * fStack_134;
    fStack_130 = fVar12 * fStack_130;
    fStack_120 = fStack_120 * fVar33;
    fStack_124 = fStack_124 * fVar33;
    local_128 = local_128 * fVar33;
    fStack_110 = fStack_110 * fVar35;
    local_118 = local_118 * fVar35;
    fStack_114 = fStack_114 * fVar35;
    FQuat::FQuat(&local_148,&local_138);
    auVar17._0_4_ = local_148 * local_148 + uStack_144._4_4_ * uStack_144._4_4_;
    auVar17._4_4_ = (float)uStack_144 * (float)uStack_144 + fStack_13c * fStack_13c;
    auVar17._8_4_ = uStack_144._4_4_ * uStack_144._4_4_ + local_148 * local_148;
    auVar17._12_4_ = fStack_13c * fStack_13c + (float)uStack_144 * (float)uStack_144;
    fVar22 = auVar17._4_4_ + auVar17._0_4_;
    fVar20 = auVar17._8_4_ + auVar17._4_4_;
    fVar24 = auVar17._12_4_ + auVar17._8_4_;
    fVar15 = auVar17._0_4_ + auVar17._12_4_;
    auVar18._4_4_ = fVar20;
    auVar18._0_4_ = fVar22;
    auVar18._8_4_ = fVar24;
    auVar18._12_4_ = fVar15;
    auVar18 = rsqrtps(auVar17,auVar18);
    fVar12 = auVar18._0_4_;
    fVar33 = auVar18._4_4_;
    fVar35 = auVar18._8_4_;
    fVar16 = auVar18._12_4_;
    fVar12 = (_DAT_1469fd780 - fVar12 * fVar12 * fVar22 * _DAT_1469fd780) * fVar12 + fVar12;
    fVar33 = (fRam00000001469fd784 - fVar33 * fVar33 * fVar20 * fRam00000001469fd784) * fVar33 +
             fVar33;
    fVar35 = (fRam00000001469fd788 - fVar35 * fVar35 * fVar24 * fRam00000001469fd788) * fVar35 +
             fVar35;
    fVar16 = (fRam00000001469fd78c - fVar16 * fVar16 * fVar15 * fRam00000001469fd78c) * fVar16 +
             fVar16;
    fVar37 = (float)(((uint)(((_DAT_1469fd780 - fVar12 * fVar12 * fVar22 * _DAT_1469fd780) * fVar12
                             + fVar12) * local_148) ^ _DAT_1469fd770) & -(uint)(1e-08 <= fVar22) ^
                    _DAT_1469fd770);
    fVar39 = (float)(((uint)(((fRam00000001469fd784 -
                              fVar33 * fVar33 * fVar20 * fRam00000001469fd784) * fVar33 + fVar33) *
                            (float)uStack_144) ^ uRam00000001469fd774) & -(uint)(1e-08 <= fVar20) ^
                    uRam00000001469fd774);
    fVar41 = (float)(((uint)(((fRam00000001469fd788 -
                              fVar35 * fVar35 * fVar24 * fRam00000001469fd788) * fVar35 + fVar35) *
                            uStack_144._4_4_) ^ uRam00000001469fd778) & -(uint)(1e-08 <= fVar24) ^
                    uRam00000001469fd778);
    fVar24 = (float)(((uint)(((fRam00000001469fd78c -
                              fVar16 * fVar16 * fVar15 * fRam00000001469fd78c) * fVar16 + fVar16) *
                            fStack_13c) ^ uRam00000001469fd77c) & -(uint)(1e-08 <= fVar15) ^
                    uRam00000001469fd77c);
  }
  fVar12 = fVar39 + fVar39;
  fVar33 = fVar41 + fVar41;
  fVar35 = fVar37 * (fVar37 + fVar37);
  fStack_114 = fVar24 * (fVar37 + fVar37);
  fStack_fc = fRam00000001469fd72c;
  fStack_134 = fVar24 * fVar33 + fVar37 * fVar12;
  fStack_120 = fStack_114 + fVar39 * fVar33;
  local_118 = fVar24 * fVar12 + fVar37 * fVar33;
  local_128 = fVar37 * fVar12 - fVar24 * fVar33;
  fStack_114 = fVar39 * fVar33 - fStack_114;
  fStack_130 = fVar37 * fVar33 - fVar24 * fVar12;
  local_138 = (float)((uint)(_DAT_1469fd720 - (fVar41 * fVar33 + fVar39 * fVar12)) & uVar6);
  fStack_124 = (float)((uint)(fRam00000001469fd724 - (fVar41 * fVar33 + fVar35)) & uVar7);
  fStack_110 = (float)((uint)(fRam00000001469fd728 - (fVar39 * fVar12 + fVar35)) & uVar8);
  fStack_12c = (float)((uint)(fRam00000001469fd72c - (fVar35 + fVar35)) & uVar9);
  fStack_11c = fStack_12c;
  fStack_10c = fStack_12c;
  FMatrix::InverseFast(&local_138,local_e8);
  lVar2 = param_1[6];
  *(ulonglong *)((longlong)param_1 + 0x74) = CONCAT44(local_d8,local_e8[0]);
  *(undefined4 *)((longlong)param_1 + 0x7c) = local_c8;
  param_1[0x11] = *(undefined8 *)(lVar2 + 0x348);
  param_1[0x12] = *(undefined8 *)(lVar2 + 0x350);
  param_1[0x13] = *(undefined8 *)(lVar2 + 0x358);
  return param_1;
}



// FUNCTION 141aaf290 FCsvDeclaredStat body=387 status=ok
// SIG undefined FCsvDeclaredStat(void)

longlong FCsvDeclaredStat::FCsvDeclaredStat(longlong param_1,short *param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *local_48;
  int local_40;
  int local_3c;
  undefined2 *local_38;
  undefined8 local_30;
  
  local_38 = (undefined2 *)0x0;
  local_30 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  puVar6 = local_38;
  FGenericPlatformString::Memcpy(local_38,L"__CSVSTAT__",0x18);
  iVar5 = (int)local_30;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    iVar3 = (int)lVar4;
    if (((int)local_30 != 0) || (iVar5 = 1, iVar3 == 0)) {
      iVar5 = 0;
    }
    local_48 = puVar6;
    local_40 = (int)local_30;
    local_3c = local_30._4_4_;
    if (local_30._4_4_ < iVar5 + (int)local_30 + iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
    }
    iVar1 = local_40;
    puVar6 = local_48;
    iVar5 = local_40;
    if (iVar3 != 0) {
      lVar4 = (longlong)local_40;
      local_40 = local_40 + (uint)(local_40 == 0) + iVar3;
      if (local_3c < local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar1);
      }
      iVar5 = local_40;
      puVar6 = local_48;
      puVar2 = local_48 + (lVar4 - (ulonglong)(iVar1 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar2,param_2,(longlong)iVar3 * 2);
      puVar2[iVar3] = 0;
    }
  }
  puVar2 = &DAT_143f3eda8;
  if (iVar5 != 0) {
    puVar2 = puVar6;
  }
  FName::FName(param_1,puVar2,1);
  if (puVar6 != (undefined2 *)0x0) {
    FMemory::Free(puVar6);
  }
  *(undefined4 *)(param_1 + 8) = param_3;
  return param_1;
}



// FUNCTION 141aaf420 FUN_141aaf420 body=238 status=ok
// SIG undefined FUN_141aaf420(void)

undefined8 * FUN_141aaf420(undefined8 *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  lVar3 = FSceneRenderTargets::Get(param_2);
  *(undefined4 *)(param_1 + 1) = 0x1010101;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x1010101;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[0xb] = 0;
  if (*(longlong *)(lVar3 + 0xe8) != 0) {
    param_1[8] = *(undefined8 *)(*(longlong *)(lVar3 + 0xe8) + 8);
  }
  if (*(longlong *)(lVar3 + 0xf0) != 0) {
    param_1[9] = *(undefined8 *)(*(longlong *)(lVar3 + 0xf0) + 8);
  }
  if (*(longlong *)(lVar3 + 0xf8) != 0) {
    param_1[10] = *(undefined8 *)(*(longlong *)(lVar3 + 0xf8) + 8);
  }
  if (*(longlong *)(lVar3 + 0x100) != 0) {
    param_1[0xb] = *(undefined8 *)(*(longlong *)(lVar3 + 0x100) + 8);
  }
  if ((DAT_146ac3ac0 != 0) && (iVar2 = FUN_1419ef5f0(param_3), 2 < iVar2)) {
    return param_1;
  }
  cVar1 = FUN_141ee4480(param_3);
  if (cVar1 == '\0') {
    *(bool *)(param_1 + 0xc) = param_4 == 1;
  }
  return param_1;
}



// FUNCTION 141aaf510 FDrawingPolicyLink body=235 status=ok
// SIG undefined FDrawingPolicyLink(void)

undefined8 *
TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink::
FDrawingPolicyLink(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
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
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  uVar1 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar1;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0xcc);
  *(undefined8 *)((longlong)param_1 + 0xc4) = *(undefined8 *)((longlong)param_2 + 0xc4);
  *(undefined8 *)((longlong)param_1 + 0xcc) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0xd4);
  param_1[0x1b] = param_2[0x1b];
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  return param_1;
}



// FUNCTION 141aaf600 FUN_141aaf600 body=272 status=ok
// SIG undefined FUN_141aaf600(void)

undefined8 * FUN_141aaf600(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x26) = 0;
  return param_1;
}



// FUNCTION 141aaf710 FUN_141aaf710 body=179 status=ok
// SIG undefined FUN_141aaf710(void)

undefined8 * FUN_141aaf710(undefined8 *param_1,longlong param_2)

{
  FUN_141d89a50();
  *param_1 = &PTR_FUN_144dc8e78;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x114) = 0;
  *(undefined1 *)((longlong)param_1 + 0x116) = 0;
  FVertexFactoryParameterRef::FVertexFactoryParameterRef
            (param_1 + 0x23,*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x18),
             *(uint *)(param_2 + 8) & 7);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)((longlong)param_1 + 0x146) = 0;
  FShaderParameter::Bind
            (param_1 + 0x28,*(undefined8 *)(param_2 + 0x18),L"NonInstancedDitherLODFactor",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x146,*(undefined8 *)(param_2 + 0x18),L"LightMapSampler",0);
  return param_1;
}



// FUNCTION 141aaf7d0 FUN_141aaf7d0 body=204 status=ok
// SIG undefined FUN_141aaf7d0(void)

undefined8 * FUN_141aaf7d0(undefined8 *param_1)

{
  FShader::FShader();
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe2) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  *param_1 = &PTR_FUN_144dc8e78;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x114) = 0;
  *(undefined1 *)((longlong)param_1 + 0x116) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  return param_1;
}



// FUNCTION 141aaf8a0 FUN_141aaf8a0 body=403 status=ok
// SIG undefined FUN_141aaf8a0(void)

undefined8 * FUN_141aaf8a0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FGlobalShader::FGlobalShader();
  *param_1 = &PTR__scalar_deleting_destructor__144dc9038;
  FPostProcessPassParameters::FPostProcessPassParameters(param_1 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1de) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e6) = 0;
  param_1[0x3d] = 0;
  FPostProcessPassParameters::Bind(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FUN_141cdf500(param_2,param_1 + 0x3b,param_1 + 0x3c);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FShaderParameter::Bind((longlong)param_1 + 0x1bc,uVar1,L"AmbientCubemapColor",0);
  FShaderParameter::Bind((longlong)param_1 + 0x1c2,uVar1,L"AmbientCubemapMipAdjust",0);
  FShaderResourceParameter::Bind(param_1 + 0x39,uVar1,L"AmbientCubemap",0);
  FShaderResourceParameter::Bind((longlong)param_1 + 0x1cc,uVar1,L"AmbientCubemapSampler",0);
  FShaderResourceParameter::Bind(param_1 + 0x3a,uVar1,L"EyeAdaptation",0);
  FShaderResourceParameter::Bind((longlong)param_1 + 0x1d4,uVar1,L"LightingChannelsTexture",0);
  FShaderResourceParameter::Bind
            (param_1 + 0x3d,*(undefined8 *)(param_2 + 0x18),L"PreIntegratedGF",0);
  FShaderResourceParameter::Bind
            ((longlong)param_1 + 0x1ec,*(undefined8 *)(param_2 + 0x18),L"PreIntegratedGFSampler",0);
  return param_1;
}



// FUNCTION 141aafa40 FPostProcessPassParameters body=180 status=ok
// SIG undefined FPostProcessPassParameters(void)

undefined8 * FPostProcessPassParameters::FPostProcessPassParameters(undefined8 *param_1)

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
  param_1[0x12] = 0;
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
  *(undefined4 *)(param_1 + 0x1f) = 0;
  return param_1;
}



// FUNCTION 141aafb00 FRCPassPostProcessAmbientOcclusion body=181 status=ok
// SIG undefined FRCPassPostProcessAmbientOcclusion(void)

undefined8 *
FRCPassPostProcessAmbientOcclusion::FRCPassPostProcessAmbientOcclusion
          (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 1;
  *(undefined2 *)(param_1 + 0xf) = 1;
  param_1[0x12] = L"UnknownTexture";
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined2 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dca3e8;
  *(undefined4 *)(param_1 + 0x1b) = param_3;
  *(undefined1 *)((longlong)param_1 + 0xdc) = param_4;
  return param_1;
}



// FUNCTION 141aafbc0 FRCPassPostProcessAmbientOcclusionSetup body=141 status=ok
// SIG undefined FRCPassPostProcessAmbientOcclusionSetup(void)

undefined8 *
FRCPassPostProcessAmbientOcclusionSetup::FRCPassPostProcessAmbientOcclusionSetup
          (undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 1;
  *(undefined2 *)(param_1 + 0xb) = 1;
  param_1[0xe] = L"UnknownTexture";
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined2 *)(param_1 + 0xf) = 1;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dca2d8;
  return param_1;
}



// FUNCTION 141aafc50 FUN_141aafc50 body=139 status=ok
// SIG undefined FUN_141aafc50(void)

undefined8 * FUN_141aafc50(undefined8 *param_1,undefined1 param_2)

{
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  *(undefined2 *)(param_1 + 9) = 1;
  param_1[0xc] = L"UnknownTexture";
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dca580;
  *(undefined1 *)(param_1 + 0x15) = param_2;
  return param_1;
}



// FUNCTION 141aafce0 FUN_141aafce0 body=146 status=ok
// SIG undefined FUN_141aafce0(void)

undefined8 * FUN_141aafce0(undefined8 *param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  *(undefined2 *)(param_1 + 9) = 1;
  param_1[0xc] = L"UnknownTexture";
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dca4f8;
  *(undefined4 *)(param_1 + 0x15) = param_2;
  *(undefined1 *)((longlong)param_1 + 0xac) = param_3;
  return param_1;
}



// FUNCTION 141aafd80 FUN_141aafd80 body=131 status=ok
// SIG undefined FUN_141aafd80(void)

undefined8 * FUN_141aafd80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcab90;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<1,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141aafe10 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcae10;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141aafea0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,1,4,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcafd0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,1,4,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141aaff30 FUN_141aaff30 body=131 status=ok
// SIG undefined FUN_141aaff30(void)

undefined8 * FUN_141aaff30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dca910;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,1,5,0,0,1,7,0,1,5,0,0,1,7,0,1,5,0,0,1,7,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141aaffc0 FUN_141aaffc0 body=131 status=ok
// SIG undefined FUN_141aaffc0(void)

undefined8 * FUN_141aaffc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dca950;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,1,5,0,0,1,7,0,0,1,0,0,1,7,0,1,5,0,0,1,7,0,1,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0050 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,4,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dca990;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,4,1,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab00e0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,4,1,0,0,1,7,0,4,1,0,0,1,7,0,4,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcaad0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,4,1,0,0,1,7,0,4,1,0,0,1,7,0,4,1,0,0,1,7,0,4,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0170 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcab50;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,4,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0200 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,8,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcaa90;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,4,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,8,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0290 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,0,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcab10;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,4,1,0,0,1,7,0,0,1,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0320 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,4,1,0,0,1,7,0,0,1,0,0,1,7,0,4,5,0,0,1,7,0,8,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcaa50;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,4,1,0,0,1,7,0,0,1,0,0,1,7,0,4,5,0,0,1,7,0,8,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab03b0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dca9d0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,4,5,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0440 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcaa10;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,7,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab04d0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcb050;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,8,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0560 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<7,0,8,0,0,0,1,1,0,8,0,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcae50;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<7,0,8,0,0,0,1,1,0,8,0,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab05f0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<0,0,4,5,0,0,1,0,0,4,5,0,0,1,0,0,4,5,0,0,1,0,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dca8d0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<0,0,4,5,0,0,1,0,0,4,5,0,0,1,0,0,4,5,0,0,1,0,0,4,5,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0680 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcaf50;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,1,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0710 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,1,1,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcb090;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,1,1,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab07a0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,1,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcb010;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,1,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0830 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcaed0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab08c0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcb0d0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0950 FUN_141ab0950 body=131 status=ok
// SIG undefined FUN_141ab0950(void)

undefined8 * FUN_141ab0950(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcabd0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = FUN_141ab94e0(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab09e0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcad90;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0a70 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcad10;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0b00 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcacd0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0b90 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcad50;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0c20 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,8,0,0,6,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcadd0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,8,0,0,6,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0cb0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcac50;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0d40 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcac90;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,0,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0dd0 FStaticStateResource body=131 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticBlendState<15,0,0,1,0,0,1,15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcac10;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    uVar1 = TStaticBlendState<15,0,0,1,0,0,1,15,0,0,1,0,0,1,15,0,4,5,0,0,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0>
            ::CreateRHI(local_res8);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,uVar1);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0e60 FUN_141ab0e60 body=175 status=ok
// SIG undefined FUN_141ab0e60(void)

undefined8 * FUN_141ab0e60(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcb120;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_c = 0;
    local_18 = 0x7000301;
    local_14 = 0x20000;
    local_10 = 7;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0f10 FStaticStateResource body=170 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<1,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcae90;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7000301;
    local_10 = 7;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab0fc0 FUN_141ab0fc0 body=175 status=ok
// SIG undefined FUN_141ab0fc0(void)

undefined8 * FUN_141ab0fc0(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcb1a0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_c = 0;
    local_18 = 0x7000401;
    local_14 = 0x20000;
    local_10 = 7;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab1070 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,1,1,7,0,0,5,1,7,0,0,5,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dca890;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7010100;
    local_14 = 0x1050000;
    local_10 = 0x5000007;
    local_c = 0x101;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab1130 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,1,1,1,1,4,1,1,1,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dca750;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x4010300;
    local_14 = 0x1010101;
    local_10 = 0x1010104;
    local_c = 0x101;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab11f0 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,1,1,1,1,4,1,1,1,129,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dca790;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x4010300;
    local_14 = 0x1010101;
    local_10 = 0x1010104;
    local_c = 0x181;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab12b0 FStaticStateResource body=170 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,3,1,4,0,0,0,0,7,0,0,0,129,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dca710;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x4010300;
    local_10 = 7;
    local_c = 0x81;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab1360 FStaticStateResource body=170 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,3,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcaf10;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x7000300;
    local_10 = 7;
    local_c = 0xffff;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab1410 FUN_141ab1410 body=175 status=ok
// SIG undefined FUN_141ab1410(void)

undefined8 * FUN_141ab1410(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcb160;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_c = 0;
    local_18 = 0x7000400;
    local_14 = 0x20000;
    local_10 = 7;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab14c0 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,1,1,1,1,4,1,1,1,1,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dca810;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x4010700;
    local_14 = 0x1010101;
    local_10 = 0x1010104;
    local_c = 0x101;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab1580 FStaticStateResource body=177 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,1,1,1,1,4,1,1,1,129,1>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dca850;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x4010700;
    local_14 = 0x1010101;
    local_10 = 0x1010104;
    local_c = 0x181;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab1640 FStaticStateResource body=170 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticDepthStencilState<0,7,1,4,0,0,0,0,7,0,0,0,129,0>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dca7d0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18 = 0x4010700;
    local_10 = 7;
    local_c = 0x81;
    (**(code **)(*DAT_146ab6358 + 0x38))(DAT_146ab6358,local_res8,&local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab16f0 FStaticStateResource body=165 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticRasterizerState<1,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcb320;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_14 = 0;
    local_18[0] = 0x101;
    local_c = 1;
    (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,local_res8,local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab17a0 FStaticStateResource body=165 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticRasterizerState<1,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcb2e0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_14 = 0;
    local_18[0] = 0x201;
    local_c = 1;
    (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,local_res8,local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab1850 FStaticStateResource body=165 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticRasterizerState<1,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcb2a0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_14 = 0;
    local_18[0] = 1;
    local_c = 1;
    (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,local_res8,local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab1900 FStaticStateResource body=165 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticRasterizerState<2,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dca6d0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_14 = 0;
    local_18[0] = 0x102;
    local_c = 1;
    (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,local_res8,local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab19b0 FStaticStateResource body=165 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticRasterizerState<2,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dca690;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_14 = 0;
    local_18[0] = 0x202;
    local_c = 1;
    (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,local_res8,local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab1a60 FStaticStateResource body=165 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticRasterizerState<0,1,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcb260;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_14 = 0;
    local_18[0] = 0x100;
    local_c = 1;
    (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,local_res8,local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab1b10 FStaticStateResource body=165 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticRasterizerState<0,2,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcb220;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_14 = 0;
    local_18[0] = 0x200;
    local_c = 1;
    (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,local_res8,local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab1bc0 FStaticStateResource body=163 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticRasterizerState<0,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined2 local_18 [2];
  undefined8 local_14;
  undefined2 local_c;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcb1e0;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_18[0] = 0;
    local_14 = 0;
    local_c = 1;
    (**(code **)(*DAT_146ab6358 + 0x30))(DAT_146ab6358,local_res8,local_18);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab1c70 FStaticStateResource body=182 status=ok
// SIG undefined FStaticStateResource(void)

undefined8 *
TStaticStateRHI<TStaticSamplerState<0,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*___ptr64>
::FStaticStateResource::FStaticStateResource(undefined8 *param_1)

{
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined1 local_10;
  
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144dcaf90;
  param_1[6] = 0;
  if ((DAT_146ab62c8 != '\0') && (DAT_146ab6326 != '\0')) {
    local_28 = 0;
    local_24 = 0;
    local_10 = 0;
    local_1c = 0x7f7fffff;
    local_18 = 1;
    (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_28);
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 6,local_res8);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
    return param_1;
  }
  FRenderResource::InitResource(param_1);
  return param_1;
}



// FUNCTION 141ab1d30 ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator> body=123 status=ok
// SIG undefined ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>(void)

void TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
     ::
     ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
               (longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar3 = *param_1;
  iVar5 = (int)param_1[1];
  if (iVar5 != 0) {
    plVar4 = (longlong *)(lVar3 + 0x30);
    do {
      if (plVar4[-5] != 0) {
        FUN_141d78430(plVar4[-5],*plVar4);
      }
      puVar2 = (undefined8 *)*plVar4;
      if (puVar2 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      plVar4 = plVar4 + 7;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar3 = *param_1;
  }
  if (lVar3 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141ab1db0 operator= body=526 status=ok
// SIG undefined operator=(void)

undefined4 * FForwardLightData::operator=(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *param_1 = *param_2;
  lVar4 = 2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  param_1[0x12] = param_2[0x12];
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  param_1[0x1c] = param_2[0x1c];
  uVar1 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = uVar1;
  puVar2 = (undefined8 *)(param_1 + 0x24);
  puVar3 = (undefined8 *)(param_2 + 0x24);
  do {
    uVar1 = puVar3[1];
    *puVar2 = *puVar3;
    puVar2[1] = uVar1;
    uVar1 = puVar3[3];
    puVar2[2] = puVar3[2];
    puVar2[3] = uVar1;
    uVar1 = puVar3[5];
    puVar2[4] = puVar3[4];
    puVar2[5] = uVar1;
    uVar1 = puVar3[7];
    puVar2[6] = puVar3[6];
    puVar2[7] = uVar1;
    uVar1 = puVar3[9];
    puVar2[8] = puVar3[8];
    puVar2[9] = uVar1;
    uVar1 = puVar3[0xb];
    puVar2[10] = puVar3[10];
    puVar2[0xb] = uVar1;
    uVar1 = puVar3[0xd];
    puVar2[0xc] = puVar3[0xc];
    puVar2[0xd] = uVar1;
    uVar1 = puVar3[0xf];
    puVar2[0xe] = puVar3[0xe];
    puVar2[0xf] = uVar1;
    lVar4 = lVar4 + -1;
    puVar2 = puVar2 + 0x10;
    puVar3 = puVar3 + 0x10;
  } while (lVar4 != 0);
  uVar1 = *(undefined8 *)(param_2 + 0x66);
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
  *(undefined8 *)(param_1 + 0x66) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x6a);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x6a) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x6e);
  *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
  *(undefined8 *)(param_1 + 0x6e) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x72);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x72) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x76);
  *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_2 + 0x74);
  *(undefined8 *)(param_1 + 0x76) = uVar1;
  param_1[0x78] = param_2[0x78];
  param_1[0x79] = param_2[0x79];
  uVar1 = *(undefined8 *)(param_2 + 0x7e);
  *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(param_2 + 0x7c);
  *(undefined8 *)(param_1 + 0x7e) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x82);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x82) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x86);
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x84);
  *(undefined8 *)(param_1 + 0x86) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x8a);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x8a) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x8e);
  *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x8e) = uVar1;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x92) = *(undefined8 *)(param_2 + 0x92);
  *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_2 + 0x94);
  *(undefined8 *)(param_1 + 0x96) = *(undefined8 *)(param_2 + 0x96);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x9a) = *(undefined8 *)(param_2 + 0x9a);
  *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)(param_2 + 0x9c);
  return param_1;
}



// FUNCTION 141ab1fc0 operator<< body=95 status=ok
// SIG undefined operator<<(void)

undefined8 operator<<(undefined8 param_1,longlong param_2)

{
  FUN_1419e0b60();
  FUN_1419e0b60(param_1,param_2 + 4);
  FUN_1419e0b60(param_1,param_2 + 8);
  FUN_1419e0b60(param_1,param_2 + 0xc);
  FUN_1419e0b60(param_1,param_2 + 0x10);
  FUN_1419e0b60(param_1,param_2 + 0x14);
  return param_1;
}



// FUNCTION 141ab2020 FUN_141ab2020 body=239 status=ok
// SIG undefined FUN_141ab2020(void)

undefined8 FUN_141ab2020(undefined8 param_1,longlong param_2)

{
  FUN_1419e0a40();
  FUN_1419e0a40(param_1,param_2 + 6);
  FUN_1419e0a40(param_1,param_2 + 0xc);
  FUN_1419e0a40(param_1,param_2 + 0x12);
  FUN_1419e0a40(param_1,param_2 + 0x18);
  FUN_1419e0a40(param_1,param_2 + 0x1e);
  FUN_1419e0a40(param_1,param_2 + 0x24);
  FUN_1419e0a40(param_1,param_2 + 0x2a);
  FUN_1419e0a40(param_1,param_2 + 0x30);
  FUN_1419e0a40(param_1,param_2 + 0x36);
  FUN_1419e0a40(param_1,param_2 + 0x3c);
  FUN_1419e0b60(param_1,param_2 + 0x42);
  FUN_1419e0b60(param_1,param_2 + 0x46);
  FUN_1419e0a40(param_1,param_2 + 0x4a);
  FUN_1419e0a40(param_1,param_2 + 0x50);
  FUN_1419e0a40(param_1,param_2 + 0x56);
  FUN_1419e0a40(param_1,param_2 + 0x5c);
  FUN_1419e0a40(param_1,param_2 + 0x62);
  return param_1;
}



// FUNCTION 141ab2110 FUN_141ab2110 body=127 status=ok
// SIG undefined FUN_141ab2110(void)

undefined8 FUN_141ab2110(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0a40();
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 0xc);
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 0x10);
  FUN_1419e0a40(uVar1,param_2 + 6);
  FUN_1419e0b60(param_1,param_2 + 0x14);
  FUN_1419e0b60(param_1,param_2 + 0x18);
  return param_1;
}



// FUNCTION 141ab2190 operator<< body=154 status=ok
// SIG undefined operator<<(void)

undefined8 operator<<(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1419e0b60();
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 4);
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 8);
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 0xc);
  uVar1 = FUN_1419e0a40(uVar1,param_2 + 0x10);
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 0x16);
  uVar1 = FUN_1419e0b60(uVar1,param_2 + 0x1a);
  FUN_1419e0a40(uVar1,param_2 + 0x1e);
  return param_1;
}



// FUNCTION 141ab2230 FUN_141ab2230 body=642 status=ok
// SIG undefined FUN_141ab2230(void)

void FUN_141ab2230(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  
  iVar11 = 0;
  puVar9 = (undefined8 *)
           ((longlong)*(int *)(*(longlong *)(*param_1 + 0x30) + (longlong)param_2 * 4) * 0xf0 +
           *(longlong *)(*param_1 + 0x40));
  puVar8 = (uint *)*puVar9;
  lVar14 = (longlong)*(int *)(puVar9 + 1);
  lVar2 = param_1[4];
  if (0 < lVar14) {
    lVar10 = 0;
    do {
      uVar5 = *puVar8;
      if (lVar2 == 0) {
        lVar13 = *(longlong *)(*(longlong *)param_1[2] + 0x10);
        if (lVar13 == 0) {
          lVar13 = *(longlong *)param_1[2];
        }
        if ((*(uint *)(lVar13 + ((longlong)(int)uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0)
        goto LAB_141ab2340;
      }
      else {
        uVar12 = 1 << ((byte)uVar5 & 0x1f);
        lVar13 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x10);
        if (lVar13 == 0) {
          lVar13 = *(longlong *)(lVar2 + 0x10);
        }
        lVar1 = ((longlong)(int)uVar5 >> 5) * 4;
        if ((*(uint *)(lVar13 + lVar1) & uVar12) == 0) {
          lVar13 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10);
          if (lVar13 == 0) {
            lVar13 = *(longlong *)(lVar2 + 0x18);
          }
          if ((*(uint *)(lVar13 + lVar1) & uVar12) == 0) goto LAB_141ab2454;
        }
LAB_141ab2340:
        lVar13 = *(longlong *)(lVar10 + 8 + puVar9[2]);
        if ((*(uint *)(lVar13 + 0x8c) & 0x2000000) == 0) {
          iVar11 = iVar11 + *(int *)(lVar13 + 0x80);
        }
        else {
          lVar13 = (longlong)*(int *)(lVar13 + 0xcc);
          if (lVar2 == 0) {
            uVar7 = *(ulonglong *)(**(longlong **)param_1[3] + lVar13 * 8);
            uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
            uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
            iVar11 = iVar11 + (uint)(byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) *
                                           0x101010101010101 >> 0x38);
          }
          else {
            uVar7 = *(ulonglong *)(**(longlong **)(lVar2 + 0x20) + lVar13 * 8);
            uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
            uVar4 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
            uVar7 = *(ulonglong *)(**(longlong **)(lVar2 + 0x28) + lVar13 * 8);
            uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
            uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
            uVar5 = (uint)(byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38);
            bVar3 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
            if (uVar5 < bVar3) {
              uVar5 = (uint)bVar3;
            }
            iVar11 = iVar11 + uVar5;
          }
        }
      }
LAB_141ab2454:
      lVar10 = lVar10 + 0x38;
      puVar8 = puVar8 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    if (iVar11 != 0) {
      uVar6 = 0xffff;
      if (iVar11 < 0x10000) {
        uVar6 = (short)iVar11;
      }
      *(undefined2 *)(*(longlong *)param_1[1] + (longlong)param_2 * 2) = uVar6;
    }
  }
  *(int *)(puVar9 + 0x1c) = iVar11;
  return;
}



// FUNCTION 141ab24c0 `scalar_deleting_destructor' body=100 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGraphTask<`FScene::AddExponentialHeightFog'::`2'::EURCMacro_FAddFogCommand>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144dcb110;
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141ab2530 FUN_141ab2530 body=97 status=ok
// SIG undefined FUN_141ab2530(void)

undefined8 * FUN_141ab2530(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144dc9f00;
  if (param_1[0xd] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xd] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141ab25a0 FUN_141ab25a0 body=97 status=ok
// SIG undefined FUN_141ab25a0(void)

undefined8 * FUN_141ab25a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144dc9ef0;
  if (param_1[0xd] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xd] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141ab2610 FUN_141ab2610 body=97 status=ok
// SIG undefined FUN_141ab2610(void)

undefined8 * FUN_141ab2610(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144dc9ed0;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab2680 FUN_141ab2680 body=97 status=ok
// SIG undefined FUN_141ab2680(void)

undefined8 * FUN_141ab2680(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144dc9ee0;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab26f0 FUN_141ab26f0 body=97 status=ok
// SIG undefined FUN_141ab26f0(void)

undefined8 * FUN_141ab26f0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144dc9eb0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141ab2760 FUN_141ab2760 body=97 status=ok
// SIG undefined FUN_141ab2760(void)

undefined8 * FUN_141ab2760(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144dc9ec0;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141ab27d0 FUN_141ab27d0 body=117 status=ok
// SIG undefined FUN_141ab27d0(void)

undefined8 * FUN_141ab27d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144dca250;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 141ab2850 `scalar_deleting_destructor' body=120 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TRenderingCompositePassBase<2,1>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dca030;
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 141ab28d0 `scalar_deleting_destructor' body=120 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TRenderingCompositePassBase<4,1>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dca360;
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0x14] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x14] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 141ab2950 FUN_141ab2950 body=117 status=ok
// SIG undefined FUN_141ab2950(void)

undefined8 * FUN_141ab2950(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144dc9fa8;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 141ab29d0 FUN_141ab29d0 body=62 status=ok
// SIG undefined FUN_141ab29d0(void)

undefined8 * FUN_141ab29d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144dc9e50;
  FUN_141edd2d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 141ab2a10 FUN_141ab2a10 body=72 status=ok
// SIG undefined FUN_141ab2a10(void)

undefined8 * FUN_141ab2a10(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144dc9f10;
  FUN_141d662d0(param_1,0);
  FParallelCommandListSet::~FParallelCommandListSet(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 141ab2a60 `scalar_deleting_destructor' body=120 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRCPassPostProcessAmbientOcclusion::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dca360;
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0x14] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x14] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 141ab2ae0 `scalar_deleting_destructor' body=117 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRCPassPostProcessDeferredDecals::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144dc9fa8;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 141ab2b60 `scalar_deleting_destructor' body=117 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRCPassPostProcessDeferredDecals::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144dca250;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x30))();
  }
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 141ab2be0 FUN_141ab2be0 body=43 status=ok
// SIG undefined FUN_141ab2be0(void)

undefined8 * FUN_141ab2be0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144dc9f20;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 141ab2c10 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcab90;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab2c60 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcae10;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab2cb0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcafd0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab2d00 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dca910;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab2d50 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dca950;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab2da0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dca990;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab2df0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcaad0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab2e40 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcab50;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab2e90 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcaa90;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab2ee0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcab10;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab2f30 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcaa50;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab2f80 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dca9d0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab2fd0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcaa10;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3020 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcb050;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3070 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcae50;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab30c0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dca8d0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3110 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcaf50;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3160 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcb090;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab31b0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcb010;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3200 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcaed0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3250 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcb0d0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab32a0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcabd0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab32f0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcad90;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3340 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcad10;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3390 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcacd0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab33e0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcad50;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3430 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcadd0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3480 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcac50;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab34d0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcac90;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3520 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcac10;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3570 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcb120;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab35c0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcae90;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3610 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcb1a0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3660 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dca890;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab36b0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dca750;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3700 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dca790;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3750 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dca710;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab37a0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcaf10;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab37f0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcb160;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3840 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dca810;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3890 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dca850;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab38e0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dca7d0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3930 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcb320;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3980 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcb2e0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab39d0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcb2a0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3a20 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dca6d0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3a70 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dca690;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3ac0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcb260;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3b10 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcb220;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3b60 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcb1e0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3bb0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144dcaf90;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141ab3c00 FUN_141ab3c00 body=1124 status=ok
// SIG undefined FUN_141ab3c00(void)

ulonglong FUN_141ab3c00(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar3 = FSceneRenderTargets::Get();
  iVar5 = 0;
  uVar4 = uVar3;
  if (0 < (int)param_2[1]) {
    lVar7 = 0;
    do {
      lVar6 = *param_2 + lVar7;
      FUN_141ab5fb0(lVar6);
      uVar4 = FUN_141ae24b0(lVar6);
      if (((((char)uVar4 != '\0') && ((*(byte *)(lVar6 + 0x1694) & 1) != 0)) &&
          (2 < *(int *)(lVar6 + 0x1a38))) &&
         (((iVar1 = *(int *)(DAT_1469fe280 + 4), uVar4 = DAT_1469fe280, 0 < iVar1 && (1 < iVar1)) &&
          ((iVar1 == 3 || (DAT_146ab62f0 != '\0')))))) {
        FUN_141d04d60(uVar3,param_1,*(undefined8 *)(uVar3 + 0x378));
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x230) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x238) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x240) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x248) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x250) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 600) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x260) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x268) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x270) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x278) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x280) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x288) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x290) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x298) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x2a0) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x2a8) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x2b0) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x2b8) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x2c0) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x2c8) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar2;
        iVar5 = (int)param_3[1];
        uVar2 = *(undefined8 *)(*(longlong *)(uVar3 + 0x2d0) + 0x18);
        *(int *)(param_3 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
          FUN_140822430(param_3,iVar5);
        }
        lVar7 = *param_3;
        *(undefined8 *)(lVar7 + (longlong)iVar5 * 8) = uVar2;
        return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 0x30d0;
    } while (iVar5 < (int)param_2[1]);
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 141ab4070 FUN_141ab4070 body=554 status=ok
// SIG undefined FUN_141ab4070(void)

void FUN_141ab4070(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong *plVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  lVar5 = operator_new(0xa0);
  plVar10 = (longlong *)0x0;
  plVar6 = plVar10;
  if (lVar5 != 0) {
    plVar6 = (longlong *)FUN_141aaeab0(lVar5,param_2,param_1);
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_38);
    puVar9 = *(undefined8 **)(param_1 + 0x1908);
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9,1);
    }
    *(longlong **)(param_1 + 0x1908) = plVar6;
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_38._0_4_);
    return;
  }
  pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar8 = TlsGetValue(*pDVar7);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)operator_new(0x18);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = 0;
      plVar8[1] = 0;
      *(undefined4 *)(plVar8 + 2) = 0;
      plVar10 = plVar8;
    }
    TlsSetValue(*pDVar7,plVar10);
    plVar8 = plVar10;
  }
  plVar10 = (longlong *)plVar8[1];
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)*plVar8;
    if (plVar10 == (longlong *)0x0) {
      lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
      plVar8[1] = lVar5;
      if (lVar5 == 0) {
        puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar8[1] = (longlong)puVar9;
        lVar5 = 0x1f;
        do {
          puVar2 = puVar9 + 0x20;
          *puVar9 = puVar2;
          lVar5 = lVar5 + -1;
          puVar9 = puVar2;
        } while (lVar5 != 0);
        *puVar2 = 0;
      }
      plVar10 = (longlong *)plVar8[1];
      iVar11 = 0x20;
      *(undefined4 *)(plVar8 + 2) = 0x20;
    }
    else {
      iVar11 = 0x20;
      plVar8[1] = (longlong)plVar10;
      *(undefined4 *)(plVar8 + 2) = 0x20;
      *plVar8 = 0;
    }
  }
  else {
    iVar11 = (int)plVar8[2];
  }
  plVar8[1] = *plVar10;
  *(int *)(plVar8 + 2) = iVar11 + -1;
  *plVar10 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar10 + 1) = 0xff;
  local_30 = 0;
  local_28 = 0;
  *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
  *plVar10 = (longlong)&PTR_FUN_144dc9eb0;
  *(undefined1 *)(plVar10 + 4) = 0;
  plVar10[5] = 0;
  plVar10[2] = param_1;
  plVar10[3] = (longlong)plVar6;
  lVar5 = plVar10[5];
  piVar1 = (int *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res20 = lVar5;
  FUN_1409421c0(plVar10,0,0xff,1);
  if (lVar5 != 0) {
    LOCK();
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 141ab42a0 AddDependency body=82 status=ok
// SIG undefined AddDependency(void)

void TRenderingCompositePassBase<1,1>::AddDependency(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0xa0) = iVar2 + 1;
  if (*(int *)(param_1 + 0xa4) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x98),iVar2);
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 141ab4300 FUN_141ab4300 body=82 status=ok
// SIG undefined FUN_141ab4300(void)

void FUN_141ab4300(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0xb0);
  *(int *)(param_1 + 0xb0) = iVar2 + 1;
  if (*(int *)(param_1 + 0xb4) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0xa8),iVar2);
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 141ab4360 FUN_141ab4360 body=82 status=ok
// SIG undefined FUN_141ab4360(void)

void FUN_141ab4360(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0xd0);
  *(int *)(param_1 + 0xd0) = iVar2 + 1;
  if (*(int *)(param_1 + 0xd4) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 200),iVar2);
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 200) + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return;
}



// FUNCTION 141ab43c0 FUN_141ab43c0 body=1002 status=ok
// SIG undefined FUN_141ab43c0(void)

void FUN_141ab43c0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  void *_Src;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  int local_158 [2];
  longlong local_150 [5];
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined1 local_68 [48];
  
  TSet<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink,TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyKeyFuncs,FDefaultSetAllocator>
  ::FindId(param_1 + 0x40,local_158,param_4);
  iVar10 = 0;
  if ((local_158[0] == -1) ||
     (plVar15 = (longlong *)((longlong)local_158[0] * 0xf0 + *(longlong *)(param_1 + 0x40)),
     plVar15 == (longlong *)0x0)) {
    local_150[4] = *param_4;
    uStack_128 = param_4[1];
    local_120 = param_4[2];
    uStack_118 = param_4[3];
    local_150[0] = 0;
    local_150[1] = 0;
    local_110 = param_4[4];
    uStack_108 = param_4[5];
    local_150[2] = 0;
    local_150[3] = 0;
    local_100 = param_4[6];
    uStack_f8 = param_4[7];
    local_90 = param_5;
    local_7c = 0xffffffff;
    local_f0 = param_4[8];
    uStack_e8 = param_4[9];
    local_70 = 0;
    local_e0 = param_4[10];
    uStack_d8 = param_4[0xb];
    local_d0 = param_4[0xc];
    uStack_c8 = param_4[0xd];
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_78 = param_1;
    puVar12 = (undefined8 *)FUN_141abc740(local_150 + 4,local_68);
    local_c0 = *puVar12;
    uStack_b8 = puVar12[1];
    local_b0 = puVar12[2];
    uStack_a8 = puVar12[3];
    local_a0 = puVar12[4];
    uStack_98 = puVar12[5];
    FUN_141aa2690(param_1 + 0x40,local_158,local_150,0);
    TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
    ::
    ~TArray<TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FElement,FDefaultAllocator>
              (local_150 + 2);
    if (local_150[0] != 0) {
      FMemory::Free();
    }
    plVar15 = (longlong *)((longlong)local_158[0] * 0xf0 + *(longlong *)(param_1 + 0x40));
    *(int *)((longlong)plVar15 + 0xd4) = local_158[0];
    DAT_146a81050 =
         (ulonglong)(uint)(*(int *)((longlong)plVar15 + 0x1c) * 0x38) + 0xe8 +
         (ulonglong)(uint)(*(int *)((longlong)plVar15 + 0xc) << 2) + DAT_146a81050;
    iVar16 = *(int *)(param_1 + 0x38) + -1;
    if (0 < iVar16) {
      lVar5 = *(longlong *)(param_1 + 0x40);
      iVar17 = 0;
      do {
        iVar10 = (iVar16 + iVar17) / 2;
        lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar10 * 4) * 0xf0;
        uVar6 = *(ulonglong *)(lVar14 + 0x60 + lVar5);
        if (uVar6 < (ulonglong)plVar15[0xc]) {
LAB_141ab45f7:
          iVar9 = iVar16;
          iVar17 = iVar10 + 1;
        }
        else {
          iVar9 = iVar10;
          if (uVar6 == plVar15[0xc]) {
            uVar6 = *(ulonglong *)(lVar14 + 0x78 + lVar5);
            if (uVar6 < (ulonglong)plVar15[0xf]) goto LAB_141ab45f7;
            if (uVar6 == plVar15[0xf]) {
              uVar6 = *(ulonglong *)(lVar14 + 0x68 + lVar5);
              if (uVar6 < (ulonglong)plVar15[0xd]) goto LAB_141ab45f7;
              if (uVar6 == plVar15[0xd]) {
                uVar6 = *(ulonglong *)(lVar14 + 0x70 + lVar5);
                if (uVar6 < (ulonglong)plVar15[0xe]) goto LAB_141ab45f7;
                if (uVar6 == plVar15[0xe]) {
                  uVar6 = *(ulonglong *)(lVar14 + 0x28 + lVar5);
                  if (uVar6 < (ulonglong)plVar15[5]) goto LAB_141ab45f7;
                  if (uVar6 == plVar15[5]) {
                    uVar6 = *(ulonglong *)(lVar14 + 0x30 + lVar5);
                    if (uVar6 < (ulonglong)plVar15[6]) goto LAB_141ab45f7;
                    if (uVar6 == plVar15[6]) {
                      uVar11 = *(uint *)(lVar14 + 0x88 + lVar5) & 1;
                      if (uVar11 < (*(uint *)(plVar15 + 0x11) & 1)) goto LAB_141ab45f7;
                      if (uVar11 == (*(uint *)(plVar15 + 0x11) & 1)) {
                        uVar11 = *(uint *)(lVar14 + 0x58 + lVar5) & 1;
                        if (uVar11 < (*(uint *)(plVar15 + 0xb) & 1)) goto LAB_141ab45f7;
                        if (uVar11 == (*(uint *)(plVar15 + 0xb) & 1)) {
                          iVar3 = *(int *)(lVar14 + 0x80 + lVar5);
                          if (iVar3 < (int)plVar15[0x10]) goto LAB_141ab45f7;
                          if (iVar3 <= (int)plVar15[0x10]) break;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        iVar10 = iVar17;
        iVar16 = iVar9;
        iVar17 = iVar10;
      } while (iVar10 < iVar16);
    }
    plVar1 = (longlong *)(param_1 + 0x30);
    iVar16 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar16 + 1;
    if (*(int *)(param_1 + 0x3c) < iVar16 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar16);
    }
    _Src = (void *)(*plVar1 + (longlong)iVar10 * 4);
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)_Src + 4),_Src,(longlong)(iVar16 - iVar10) << 2);
    *(int *)((longlong)iVar10 * 4 + *plVar1) = local_158[0];
  }
  iVar10 = (int)plVar15[3];
  iVar16 = *(int *)((longlong)plVar15 + 0xc);
  iVar17 = *(int *)((longlong)plVar15 + 0x1c);
  *(int *)(plVar15 + 3) = iVar10 + 1;
  if (*(int *)((longlong)plVar15 + 0x1c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar15 + 2,iVar10);
  }
  puVar12 = (undefined8 *)((longlong)iVar10 * 0x38 + plVar15[2]);
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    uVar4 = *(undefined4 *)((longlong)plVar15 + 0xd4);
    *puVar12 = *param_3;
    puVar12[1] = param_2;
    puVar13 = (undefined8 *)operator_new(0x20);
    if (puVar13 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar13 + 1) = 0;
      *puVar13 = &PTR_FUN_144dcb370;
      puVar13[2] = param_1;
      *(undefined4 *)(puVar13 + 3) = uVar4;
      *(int *)((longlong)puVar13 + 0x1c) = iVar10;
    }
    puVar12[6] = puVar13;
    if (puVar13 != (undefined8 *)0x0) {
      *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
    }
    lVar5 = *(longlong *)(*(longlong *)(puVar12[1] + 0xc0) + 8);
    uVar4 = *(undefined4 *)(lVar5 + 0xc4);
    uVar7 = *(undefined4 *)(lVar5 + 200);
    uVar8 = *(undefined4 *)(lVar5 + 0xcc);
    *(undefined4 *)(puVar12 + 2) = *(undefined4 *)(lVar5 + 0xc0);
    *(undefined4 *)((longlong)puVar12 + 0x14) = uVar4;
    *(undefined4 *)(puVar12 + 3) = uVar7;
    *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar8;
    puVar12[4] = *(undefined8 *)(lVar5 + 0xd0);
    *(undefined4 *)(puVar12 + 5) = *(undefined4 *)(lVar5 + 0xd8);
    *(byte *)((longlong)puVar12 + 0x2c) =
         (byte)((uint)*(undefined4 *)(*(longlong *)(*(longlong *)(puVar12[1] + 0xc0) + 8) + 0x18) >>
               0x1b) & 1;
  }
  iVar10 = (int)plVar15[1];
  *(int *)(plVar15 + 1) = iVar10 + 1;
  if (*(int *)((longlong)plVar15 + 0xc) < iVar10 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar15,iVar10);
  }
  puVar2 = (undefined4 *)(*plVar15 + (longlong)iVar10 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *(undefined4 *)(param_2 + 200);
  }
  DAT_146a81050 =
       DAT_146a81050 +
       ((((ulonglong)(uint)(*(int *)((longlong)plVar15 + 0x1c) * 0x38) +
         (ulonglong)(uint)(*(int *)((longlong)plVar15 + 0xc) << 2)) - (ulonglong)(uint)(iVar16 << 2)
        ) - (ulonglong)(uint)(iVar17 * 0x38));
  FUN_141d6b230(param_2,puVar12[6]);
  return;
}



// FUNCTION 141ab47b0 FUN_141ab47b0 body=1565 status=ok
// SIG undefined FUN_141ab47b0(void)

void FUN_141ab47b0(undefined8 *param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 local_res18 [8];
  uint local_res20 [2];
  longlong *local_60;
  longlong *local_58;
  uint *puStack_50;
  
  local_60 = (longlong *)0x0;
  plVar7 = (longlong *)0x0;
  local_res20[0] = param_4;
  lVar3 = operator_new(0xb0);
  if (lVar3 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)
             FRCPassPostProcessInput::FRCPassPostProcessInput
                       (lVar3,*(longlong *)(param_3 + 0x10) + 0x2f88);
  }
  plVar9 = *(longlong **)(param_3 + 8);
  iVar10 = (int)plVar9[1];
  *(int *)(plVar9 + 1) = iVar10 + 1;
  if (*(int *)((longlong)plVar9 + 0xc) < iVar10 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar10);
  }
  *(longlong **)(*plVar9 + (longlong)iVar10 * 8) = plVar4;
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x1a38) < 3) || (*(int *)(DAT_1469fe280 + 4) < 1)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  plVar6 = (longlong *)0x0;
  plVar9 = (longlong *)0x0;
  if (1 < param_4) {
    puStack_50 = (uint *)local_res18;
    local_58 = (longlong *)&DAT_14060d670;
    local_res18[0] = 0;
    lVar3 = FUN_1415d8310(&local_58,&DAT_146216a38);
    pvVar5 = (void *)operator_new(0xb8,lVar3 + 0x18,1);
    if (pvVar5 != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(pvVar5,0,0xb8);
      plVar6 = (longlong *)
               FRCPassPostProcessAmbientOcclusionSetup::FRCPassPostProcessAmbientOcclusionSetup
                         (pvVar5);
    }
    plVar9 = *(longlong **)(param_3 + 8);
    iVar10 = (int)plVar9[1];
    *(int *)(plVar9 + 1) = iVar10 + 1;
    if (*(int *)((longlong)plVar9 + 0xc) < iVar10 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar10);
    }
    *(longlong **)(*plVar9 + (longlong)iVar10 * 8) = plVar6;
    local_58 = *(longlong **)(param_3 + 0x20);
    puStack_50 = (uint *)((ulonglong)puStack_50 & 0xffffffff00000000);
    (**(code **)(*plVar6 + 0x18))(plVar6,0,&local_58);
    plVar9 = plVar6;
  }
  if (2 < param_4) {
    puStack_50 = (uint *)local_res18;
    local_58 = (longlong *)&DAT_14060d670;
    local_res18[0] = 0;
    lVar3 = FUN_1415d8310(&local_58,&DAT_146216a38);
    pvVar5 = (void *)operator_new(0xb8,lVar3 + 0x18,1);
    if (pvVar5 == (void *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      _guard_xfg_dispatch_icall_nop(pvVar5,0,0xb8);
      plVar6 = (longlong *)
               FRCPassPostProcessAmbientOcclusionSetup::FRCPassPostProcessAmbientOcclusionSetup
                         (pvVar5);
    }
    plVar2 = *(longlong **)(param_3 + 8);
    iVar10 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar10 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar10 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar10);
    }
    puStack_50 = (uint *)((ulonglong)puStack_50 & 0xffffffff00000000);
    *(longlong **)(*plVar2 + (longlong)iVar10 * 8) = plVar6;
    local_58 = plVar9;
    (**(code **)(*plVar6 + 0x18))(plVar6,1,&local_58);
    puStack_50 = (uint *)local_res18;
    local_res18[0] = 0;
    local_58 = (longlong *)&DAT_14060d670;
    lVar3 = FUN_1415d8310(&local_58,&DAT_146216a38);
    lVar3 = operator_new(0xe0,lVar3 + 0x18,1);
    if (lVar3 != 0) {
      plVar7 = (longlong *)
               FRCPassPostProcessAmbientOcclusion::FRCPassPostProcessAmbientOcclusion
                         (lVar3,*(undefined8 *)(param_3 + 0x10),uVar11,1);
    }
    plVar2 = *(longlong **)(param_3 + 8);
    iVar10 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar10 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar10 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar10);
    }
    *(longlong **)(*plVar2 + (longlong)iVar10 * 8) = plVar7;
    puStack_50 = (uint *)((ulonglong)puStack_50 & 0xffffffff00000000);
    local_58 = plVar6;
    (**(code **)(*plVar7 + 0x18))(plVar7,0,&local_58);
    puStack_50 = (uint *)((ulonglong)puStack_50 & 0xffffffff00000000);
    local_58 = plVar6;
    (**(code **)(*plVar7 + 0x18))(plVar7,1,&local_58);
    puStack_50 = (uint *)((ulonglong)puStack_50 & 0xffffffff00000000);
    local_58 = plVar4;
    (**(code **)(*plVar7 + 0x18))(plVar7,3,&local_58);
    param_4 = local_res20[0];
  }
  plVar6 = (longlong *)0x0;
  if (1 < param_4) {
    puStack_50 = (uint *)local_res18;
    local_res18[0] = 0;
    local_58 = (longlong *)&DAT_14060d670;
    lVar3 = FUN_1415d8310(&local_58,&DAT_146216a38);
    lVar3 = operator_new(0xe0,lVar3 + 0x18,1);
    if (lVar3 != 0) {
      plVar6 = (longlong *)
               FRCPassPostProcessAmbientOcclusion::FRCPassPostProcessAmbientOcclusion
                         (lVar3,*(undefined8 *)(param_3 + 0x10),uVar11,1);
    }
    plVar2 = *(longlong **)(param_3 + 8);
    iVar10 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar10 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar10 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar10);
    }
    *(longlong **)(*plVar2 + (longlong)iVar10 * 8) = plVar6;
    puStack_50 = (uint *)((ulonglong)puStack_50 & 0xffffffff00000000);
    local_58 = plVar9;
    (**(code **)(*plVar6 + 0x18))(plVar6,0,&local_58);
    puStack_50 = (uint *)((ulonglong)puStack_50 & 0xffffffff00000000);
    local_58 = plVar9;
    (**(code **)(*plVar6 + 0x18))(plVar6,1,&local_58);
    puStack_50 = (uint *)((ulonglong)puStack_50 & 0xffffffff00000000);
    local_58 = plVar7;
    (**(code **)(*plVar6 + 0x18))(plVar6,2,&local_58);
    puStack_50 = (uint *)((ulonglong)puStack_50 & 0xffffffff00000000);
    local_58 = plVar4;
    (**(code **)(*plVar6 + 0x18))(plVar6,3,&local_58);
    local_60 = plVar6;
  }
  plVar6 = (longlong *)0x0;
  lVar3 = FSceneRenderTargets::Get(param_2);
  plVar7 = plVar6;
  if ((2 < *(int *)(*(longlong *)(param_3 + 0x10) + 0x1a38)) &&
     (iVar10 = *(int *)(DAT_1469fe280 + 4), 0 < iVar10)) {
    if ((((local_res20[0] == 1) || ((*(byte *)(*(longlong *)(param_3 + 0x10) + 0x1694) & 1) != 0))
        && (1 < iVar10)) && ((iVar10 == 3 || (DAT_146ab62f0 != '\0')))) {
      plVar7 = (longlong *)0x2;
    }
    else {
      plVar7 = (longlong *)0x1;
    }
  }
  iVar10 = (int)plVar7;
  if (*(longlong *)(lVar3 + 0xb8) == 0) {
    iVar10 = 2;
  }
  else if (iVar10 != 2) {
    puStack_50 = local_res20;
    local_res20[0] = local_res20[0] & 0xffffff00;
    local_58 = (longlong *)&DAT_14060d670;
    lVar8 = FUN_1415d8310(&local_58,&DAT_146216a38);
    lVar8 = operator_new(0xb0,lVar8 + 0x18,1);
    if (lVar8 == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)FRCPassPostProcessInput::FRCPassPostProcessInput(lVar8,lVar3 + 0xb8);
    }
    plVar7 = *(longlong **)(param_3 + 8);
    iVar1 = (int)plVar7[1];
    *(int *)(plVar7 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar7 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7,iVar1);
    }
    *(longlong **)(*plVar7 + (longlong)iVar1 * 8) = plVar6;
  }
  puStack_50 = local_res20;
  local_res20[0] = local_res20[0] & 0xffffff00;
  local_58 = (longlong *)&DAT_14060d670;
  lVar8 = FUN_1415d8310(&local_58,&DAT_146216a38);
  lVar8 = operator_new(0xe0,lVar8 + 0x18,1);
  if (lVar8 == 0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)
             FRCPassPostProcessAmbientOcclusion::FRCPassPostProcessAmbientOcclusion
                       (lVar8,*(undefined8 *)(param_3 + 0x10),iVar10,0);
  }
  plVar2 = *(longlong **)(param_3 + 8);
  iVar10 = (int)plVar2[1];
  *(int *)(plVar2 + 1) = iVar10 + 1;
  if (*(int *)((longlong)plVar2 + 0xc) < iVar10 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar10);
  }
  puStack_50 = (uint *)((ulonglong)puStack_50 & 0xffffffff00000000);
  *(longlong **)(*plVar2 + (longlong)iVar10 * 8) = plVar7;
  local_58 = plVar6;
  (**(code **)(*plVar7 + 0x18))(plVar7,0,&local_58);
  puStack_50 = (uint *)((ulonglong)puStack_50 & 0xffffffff00000000);
  local_58 = plVar9;
  (**(code **)(*plVar7 + 0x18))(plVar7,1,&local_58);
  local_58 = local_60;
  puStack_50 = (uint *)((ulonglong)puStack_50 & 0xffffffff00000000);
  (**(code **)(*plVar7 + 0x18))(plVar7,2,&local_58);
  puStack_50 = (uint *)((ulonglong)puStack_50 & 0xffffffff00000000);
  local_58 = plVar4;
  (**(code **)(*plVar7 + 0x18))(plVar7,3,&local_58);
  if (plVar9 == (longlong *)0x0) {
    lVar8 = *plVar7;
    plVar9 = plVar7;
  }
  else {
    lVar8 = *plVar9;
  }
  (**(code **)(lVar8 + 0x20))(plVar9,param_3 + 0x28);
  puStack_50 = (uint *)((ulonglong)puStack_50 & 0xffffffff00000000);
  *param_1 = plVar7;
  *(undefined4 *)(param_1 + 1) = 0;
  *(longlong **)(param_3 + 0x28) = plVar7;
  *(uint **)(param_3 + 0x30) = puStack_50;
  *(undefined1 *)(lVar3 + 0x2d8) = 1;
  return;
}



// FUNCTION 141ab4dd0 FUN_141ab4dd0 body=257 status=ok
// SIG undefined FUN_141ab4dd0(void)

void FUN_141ab4dd0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong *local_res10;
  undefined1 local_res18 [16];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  
  local_res10 = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_3 + 0xa8) + 0x40))
            (*(longlong **)(param_3 + 0xa8),*(undefined4 *)(param_2 + 8),local_res18,&local_res10);
  plVar2 = local_res10;
  uVar3 = (**(code **)(*local_res10 + 0x1e8))(local_res10);
  if (uVar3 < 2) {
    iVar4 = (**(code **)(*plVar2 + 0x20))(plVar2);
    if (iVar4 != 3) {
      uVar1 = *(undefined4 *)(param_2 + 8);
      local_40 = *(undefined8 *)(*(longlong *)(param_3 + 0xc0) + 8);
      iVar4 = 1;
      if (*(int *)(param_3 + 0x80) != 1) {
        iVar4 = (1 << ((byte)*(int *)(param_3 + 0x80) & 0x1f)) + -1;
      }
      local_50 = (longlong)iVar4;
      local_48 = plVar2;
      local_68 = param_2;
      local_60 = param_3;
      local_58 = param_3;
      local_38 = (**(code **)(*plVar2 + 0x1e8))(plVar2);
      local_34 = (**(code **)(*plVar2 + 0x1f8))(plVar2);
      local_30 = 0;
      local_28 = 0;
      local_24 = 0;
      local_2c = uVar1;
      FUN_141aa4b20(param_1,&local_58,&local_68);
    }
  }
  return;
}



// FUNCTION 141ab4ee0 FUN_141ab4ee0 body=118 status=ok
// SIG undefined FUN_141ab4ee0(void)

void FUN_141ab4ee0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)(param_2 + 0x15a8);
  iVar2 = (int)((ulonglong)param_1 >> 0x20);
  if ((*plVar1 == 0) || (*(int *)(param_2 + 0x15c0) < iVar2 * DAT_1464ca624 * (int)param_1)) {
    FUN_141ace450(plVar1);
    FUN_141ac25e0(plVar1,DAT_1464ca624,iVar2 * (int)param_1,0x1c,0,0,0);
  }
  return;
}



// FUNCTION 141ab4f60 FUN_141ab4f60 body=344 status=ok
// SIG undefined FUN_141ab4f60(void)

void FUN_141ab4f60(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  undefined1 local_res10 [16];
  int local_res20 [2];
  
  uVar3 = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  if ((*(uint *)(param_4 + 0x8c) & 0x4000000) != 0) {
    iVar1 = *(int *)(param_4 + 200);
    uVar4 = 1 << ((byte)iVar1 & 0x1f);
    lVar5 = (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5);
    lVar2 = *(longlong *)(param_3 + 0x1bd0);
    if (*(longlong *)(param_3 + 0x1bd0) == 0) {
      lVar2 = param_3 + 0x1bc0;
    }
    if ((*(uint *)(lVar2 + lVar5 * 4) & uVar4) == 0) {
      lVar2 = *(longlong *)(param_3 + 0x1bf0);
      if (*(longlong *)(param_3 + 0x1bf0) == 0) {
        lVar2 = param_3 + 0x1be0;
      }
      if ((*(uint *)(lVar2 + lVar5 * 4) & uVar4) == 0) goto LAB_141ab5002;
      fVar6 = (float)FUN_14274fcb0(param_3);
      fVar6 = fVar6 - 1.0;
    }
    else {
      fVar6 = (float)FUN_14274fcb0(param_3);
    }
    *(float *)(param_2 + 0x30) = fVar6;
  }
LAB_141ab5002:
  local_res20[0] = 0;
  local_res10[0] = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_4 + 0xc0) + 8);
  if ((*(byte *)(param_4 + 0x8c) & 1) == 0) {
    if (lVar2 != 0) {
      uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x130) + 0x210))();
    }
    FUN_141b08550(*(undefined4 *)(param_3 + 0x1a38),local_res20,local_res10,uVar3);
    if (local_res20[0] != 3) {
      uVar3 = FUN_141abf2b0();
      goto LAB_141ab50a4;
    }
  }
  else {
    if (lVar2 != 0) {
      uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x130) + 0x210))();
    }
    FUN_141b08550(*(undefined4 *)(param_3 + 0x1a38),local_res20,local_res10,uVar3);
    if (local_res20[0] != 3) {
      uVar3 = FUN_141abf530();
      goto LAB_141ab50a4;
    }
  }
  uVar3 = FUN_141abfcb0();
LAB_141ab50a4:
  *(undefined8 *)(param_2 + 8) = uVar3;
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}



// FUNCTION 141ab50c0 FUN_141ab50c0 body=626 status=ok
// SIG undefined FUN_141ab50c0(void)

/* WARNING: Removing unreachable block (ram,0x000141ab5257) */
/* WARNING: Removing unreachable block (ram,0x000141ab5265) */
/* WARNING: Removing unreachable block (ram,0x000141ab5274) */

void FUN_141ab50c0(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong local_68;
  longlong local_60 [2];
  longlong local_50;
  longlong local_48;
  
  lVar12 = 0;
  if (*(int *)(param_1 + 0x2e0) == 0) {
    local_68 = 3;
    do {
      uVar4 = DAT_1464a8210;
      plVar11 = (longlong *)0x0;
      lVar3 = *(longlong *)(param_1 + 8);
      pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar7 = TlsGetValue(*pDVar6);
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)operator_new(0x18);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = 0;
          plVar7[1] = 0;
          *(undefined4 *)(plVar7 + 2) = 0;
          plVar11 = plVar7;
        }
        TlsSetValue(*pDVar6,plVar11);
        plVar7 = plVar11;
      }
      plVar11 = (longlong *)plVar7[1];
      if (plVar11 == (longlong *)0x0) {
        if (*plVar7 == 0) {
          lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
          plVar7[1] = lVar8;
          if (lVar8 == 0) {
            puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar7[1] = (longlong)puVar9;
            lVar8 = 0x1f;
            do {
              puVar2 = puVar9 + 0x20;
              *puVar9 = puVar2;
              lVar8 = lVar8 + -1;
              puVar9 = puVar2;
            } while (lVar8 != 0);
            *puVar2 = 0;
          }
        }
        else {
          plVar7[1] = *plVar7;
          *plVar7 = 0;
        }
        plVar11 = (longlong *)plVar7[1];
        iVar10 = 0x20;
        *(undefined4 *)(plVar7 + 2) = 0x20;
      }
      else {
        iVar10 = (int)plVar7[2];
      }
      plVar7[1] = *plVar11;
      *(int *)(plVar7 + 2) = iVar10 + -1;
      plVar7 = (longlong *)FUN_1415914c0(local_60);
      local_48 = *plVar7;
      *plVar7 = 0;
      *plVar11 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar11 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
      *plVar11 = (longlong)&PTR_FUN_144dc9ed0;
      *(undefined1 *)(plVar11 + 5) = 0;
      plVar11[6] = local_48;
      if (local_60[0] != 0) {
        LOCK();
        piVar1 = (int *)(local_60[0] + 0x48);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          FGraphEvent::Recycle();
        }
      }
      plVar11[2] = lVar3 + 0x238 + lVar12;
      lVar3 = param_2[1];
      plVar11[3] = *param_2;
      *(int *)(plVar11 + 4) = (int)lVar3;
      lVar3 = plVar11[6];
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
        UNLOCK();
      }
      local_50 = lVar3;
      FUN_141ada600(plVar11,0,uVar4,1);
      iVar10 = *(int *)(param_3 + 0x28);
      iVar5 = iVar10 + 1;
      *(int *)(param_3 + 0x28) = iVar5;
      if (*(int *)(param_3 + 0x2c) < iVar5) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow();
      }
      lVar8 = *(longlong *)(param_3 + 0x20);
      if (*(longlong *)(param_3 + 0x20) == 0) {
        lVar8 = param_3;
      }
      lVar12 = lVar12 + 0x98;
      local_68 = local_68 + -1;
      *(longlong *)(lVar8 + (longlong)iVar10 * 8) = lVar3;
    } while (local_68 != 0);
  }
  return;
}



// FUNCTION 141ab5340 FUN_141ab5340 body=514 status=ok
// SIG undefined FUN_141ab5340(void)

void FUN_141ab5340(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  if (*(int *)(param_1 + 0x2e0) == 3) {
    lVar7 = *(longlong *)(param_1 + 8);
    plVar6 = (longlong *)FUN_141aba230(local_70,0,DAT_1464a8210);
    uVar1 = *(undefined4 *)(param_2 + 1);
    lVar3 = *plVar6;
    *(undefined8 *)(lVar3 + 0x18) = *param_2;
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
    *(longlong *)(lVar3 + 0x10) = lVar7 + 0x70;
    lVar7 = *plVar6;
    lVar5 = plVar6[2];
    lVar3 = plVar6[1];
    lVar4 = *(longlong *)(lVar7 + 0x30);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
      UNLOCK();
    }
    FUN_141ada600(lVar7,lVar3,(int)lVar5,1);
    iVar2 = *(int *)(param_3 + 0x28);
    *(int *)(param_3 + 0x28) = iVar2 + 1;
    if (*(int *)(param_3 + 0x2c) < iVar2 + 1) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_3,iVar2);
    }
    lVar7 = *(longlong *)(param_3 + 0x20);
    if (*(longlong *)(param_3 + 0x20) == 0) {
      lVar7 = param_3;
    }
    *(longlong *)(lVar7 + (longlong)iVar2 * 8) = lVar4;
    lVar7 = *(longlong *)(param_1 + 8);
    plVar6 = (longlong *)FUN_141aba0b0(local_58,0,DAT_1464a8210);
    uVar1 = *(undefined4 *)(param_2 + 1);
    lVar3 = *plVar6;
    *(undefined8 *)(lVar3 + 0x18) = *param_2;
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
    *(longlong *)(lVar3 + 0x10) = lVar7 + 0x108;
    lVar7 = *plVar6;
    lVar5 = plVar6[2];
    lVar3 = plVar6[1];
    lVar4 = *(longlong *)(lVar7 + 0x30);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
      UNLOCK();
    }
    FUN_141ada600(lVar7,lVar3,(int)lVar5,1);
    iVar2 = *(int *)(param_3 + 0x28);
    *(int *)(param_3 + 0x28) = iVar2 + 1;
    if (*(int *)(param_3 + 0x2c) < iVar2 + 1) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_3,iVar2);
    }
    lVar7 = *(longlong *)(param_3 + 0x20);
    if (*(longlong *)(param_3 + 0x20) == 0) {
      lVar7 = param_3;
    }
    *(longlong *)(lVar7 + (longlong)iVar2 * 8) = lVar4;
    lVar7 = *(longlong *)(param_1 + 8);
    plVar6 = (longlong *)FUN_141aba0b0(local_40,0,DAT_1464a8210);
    uVar1 = *(undefined4 *)(param_2 + 1);
    lVar3 = *plVar6;
    *(undefined8 *)(lVar3 + 0x18) = *param_2;
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
    *(longlong *)(lVar3 + 0x10) = lVar7 + 0x1a0;
    lVar7 = *plVar6;
    lVar5 = plVar6[2];
    lVar3 = plVar6[1];
    lVar4 = *(longlong *)(lVar7 + 0x30);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
      UNLOCK();
    }
    FUN_141ada600(lVar7,lVar3,(int)lVar5,1);
    iVar2 = *(int *)(param_3 + 0x28);
    *(int *)(param_3 + 0x28) = iVar2 + 1;
    if (*(int *)(param_3 + 0x2c) < iVar2 + 1) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (param_3,iVar2);
    }
    lVar7 = *(longlong *)(param_3 + 0x20);
    if (*(longlong *)(param_3 + 0x20) == 0) {
      lVar7 = param_3;
    }
    *(longlong *)(lVar7 + (longlong)iVar2 * 8) = lVar4;
  }
  return;
}



// FUNCTION 141ab5550 Bind body=151 status=ok
// SIG undefined Bind(void)

void FAtmosphereShaderTextureParameters::Bind(longlong param_1,undefined8 param_2)

{
  FShaderResourceParameter::Bind(param_1,param_2,L"AtmosphereTransmittanceTexture",0);
  FShaderResourceParameter::Bind(param_1 + 4,param_2,L"AtmosphereTransmittanceTextureSampler",0);
  FShaderResourceParameter::Bind(param_1 + 8,param_2,L"AtmosphereIrradianceTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0xc,param_2,L"AtmosphereIrradianceTextureSampler",0);
  FShaderResourceParameter::Bind(param_1 + 0x10,param_2,L"AtmosphereInscatterTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x14,param_2,L"AtmosphereInscatterTextureSampler",0);
  return;
}



// FUNCTION 141ab55f0 FUN_141ab55f0 body=415 status=ok
// SIG undefined FUN_141ab55f0(void)

void FUN_141ab55f0(longlong param_1,undefined8 param_2)

{
  FShaderParameter::Bind(param_1,param_2,L"ReflectionPlane",0);
  FShaderParameter::Bind(param_1 + 6,param_2,L"PlanarReflectionOrigin",0);
  FShaderParameter::Bind(param_1 + 0xc,param_2,L"PlanarReflectionXAxis",0);
  FShaderParameter::Bind(param_1 + 0x12,param_2,L"PlanarReflectionYAxis",0);
  FShaderParameter::Bind(param_1 + 0x18,param_2,L"InverseTransposeMirrorMatrix",0);
  FShaderParameter::Bind(param_1 + 0x1e,param_2,L"PlanarReflectionParameters",0);
  FShaderParameter::Bind(param_1 + 0x24,param_2,L"PlanarReflectionParameters2",0);
  FShaderParameter::Bind(param_1 + 0x2a,param_2,L"ProjectionWithExtraFOV",0);
  FShaderParameter::Bind(param_1 + 0x30,param_2,L"PlanarReflectionScreenScaleBias",0);
  FShaderParameter::Bind(param_1 + 0x36,param_2,L"bIsStereo",0);
  FShaderParameter::Bind(param_1 + 0x3c,param_2,L"PlanarReflectionScreenBound",0);
  FShaderResourceParameter::Bind(param_1 + 0x42,param_2,L"PlanarReflectionTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x46,param_2,L"PlanarReflectionSampler",0);
  FShaderParameter::Bind(param_1 + 0x4a,param_2,L"SingleCubemapArrayIndex",0);
  FShaderParameter::Bind(param_1 + 0x50,param_2,L"SingleCaptureOffsetAndAverageBrightness",0);
  FShaderParameter::Bind(param_1 + 0x56,param_2,L"SingleCapturePositionAndRadius",0);
  FShaderParameter::Bind(param_1 + 0x5c,param_2,L"SingleCaptureBrightness",0);
  FShaderParameter::Bind(param_1 + 0x62,param_2,L"SingleCaptureAverageBrightnessTimeOfDay",0);
  return;
}



// FUNCTION 141ab5790 FUN_141ab5790 body=151 status=ok
// SIG undefined FUN_141ab5790(void)

void FUN_141ab5790(longlong param_1,undefined8 param_2)

{
  FShaderParameter::Bind(param_1,param_2,L"AmbientCubemapColor",0);
  FShaderParameter::Bind(param_1 + 6,param_2,L"AmbientCubemapMipAdjust",0);
  FShaderResourceParameter::Bind(param_1 + 0xc,param_2,L"AmbientCubemap",0);
  FShaderResourceParameter::Bind(param_1 + 0x10,param_2,L"AmbientCubemapSampler",0);
  FShaderResourceParameter::Bind(param_1 + 0x14,param_2,L"EyeAdaptation",0);
  FShaderResourceParameter::Bind(param_1 + 0x18,param_2,L"LightingChannelsTexture",0);
  return;
}



// FUNCTION 141ab5830 Bind body=145 status=ok
// SIG undefined Bind(void)

void FDistanceFieldObjectBufferParameters::Bind(longlong param_1,undefined8 param_2)

{
  FRWShaderParameter::Bind(param_1,param_2,L"SceneObjectBounds");
  FRWShaderParameter::Bind(param_1 + 8,param_2,L"SceneObjectData");
  FShaderParameter::Bind(param_1 + 0x10,param_2,L"NumSceneObjects",0);
  FShaderResourceParameter::Bind(param_1 + 0x16,param_2,L"DistanceFieldTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x1a,param_2,L"DistanceFieldSampler",0);
  FShaderParameter::Bind(param_1 + 0x1e,param_2,L"DistanceFieldAtlasTexelSize",0);
  return;
}



// FUNCTION 141ab58d0 Bind body=406 status=ok
// SIG undefined Bind(void)

void FRWShaderParameter::Bind(longlong param_1,undefined8 param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *local_48;
  int local_40;
  int local_3c;
  undefined2 *local_38;
  undefined8 local_30;
  
  FShaderResourceParameter::Bind();
  local_30 = 3;
  local_38 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  puVar6 = local_38;
  FGenericPlatformString::Memcpy(local_38,&DAT_144dc7860,6);
  iVar4 = (int)local_30;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_3[lVar3] != 0);
    iVar2 = (int)lVar3;
    if (((int)local_30 != 0) || (iVar4 = 1, iVar2 == 0)) {
      iVar4 = 0;
    }
    local_48 = puVar6;
    local_40 = (int)local_30;
    local_3c = local_30._4_4_;
    if (local_30._4_4_ < iVar4 + (int)local_30 + iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
    }
    iVar1 = local_40;
    puVar6 = local_48;
    iVar4 = local_40;
    if (iVar2 != 0) {
      lVar3 = (longlong)local_40;
      local_40 = local_40 + (uint)(local_40 == 0) + iVar2;
      if (local_3c < local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar1);
      }
      iVar4 = local_40;
      puVar6 = local_48;
      puVar5 = local_48 + (lVar3 - (ulonglong)(iVar1 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar5,param_3,(longlong)iVar2 * 2);
      puVar5[iVar2] = 0;
    }
  }
  puVar5 = &DAT_143f3eda8;
  if (iVar4 != 0) {
    puVar5 = puVar6;
  }
  FShaderResourceParameter::Bind(param_1 + 4,param_2,puVar5,0);
  if (puVar6 == (undefined2 *)0x0) {
    return;
  }
  FMemory::Free(puVar6);
  return;
}



// FUNCTION 141ab5a70 Bind body=195 status=ok
// SIG undefined Bind(void)

void FSelfShadowedTranslucencyPolicy::PixelParametersType::Bind(longlong param_1,undefined8 param_2)

{
  FShaderResourceParameter::Bind(param_1,param_2,L"TranslucencyShadowTransmission0",0);
  FShaderResourceParameter::Bind(param_1 + 4,param_2,L"TranslucencyShadowTransmission0Sampler",0);
  FShaderResourceParameter::Bind(param_1 + 8,param_2,L"TranslucencyShadowTransmission1",0);
  FShaderResourceParameter::Bind(param_1 + 0xc,param_2,L"TranslucencyShadowTransmission1Sampler",0);
  FShaderParameter::Bind(param_1 + 0x10,param_2,L"WorldToShadowMatrix",0);
  FShaderParameter::Bind(param_1 + 0x16,param_2,L"ShadowUVMinMax",0);
  FShaderParameter::Bind(param_1 + 0x1c,param_2,L"DirectionalLightDirection",0);
  FShaderParameter::Bind(param_1 + 0x22,param_2,L"DirectionalLightColor",0);
  return;
}



// FUNCTION 141ab5b40 BindBasePassUniformBuffer body=166 status=ok
// SIG undefined BindBasePassUniformBuffer(void)

void BindBasePassUniformBuffer(undefined8 param_1,longlong param_2)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  FUniformBufferStruct::GetNestedStructs(&DAT_1469fd970,local_18);
  FUniformBufferStruct::GetNestedStructs(&DAT_1469fda10,local_18);
  FShaderParameterMap::ContainsParameterAllocation(param_1,DAT_1469fd980);
  FShaderParameterMap::ContainsParameterAllocation(param_1,DAT_1469fda20);
  FShaderUniformBufferParameter::Bind(param_2,param_1,DAT_1469fd980,0);
  if (*(char *)(param_2 + 6) == '\0') {
    FShaderUniformBufferParameter::Bind(param_2,param_1,DAT_1469fda20,0);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141ab5bf0 BindBasePassUniformBuffer body=166 status=ok
// SIG undefined BindBasePassUniformBuffer(void)

void BindBasePassUniformBuffer(undefined8 param_1,longlong param_2)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  FUniformBufferStruct::GetNestedStructs(&DAT_146a632b0,local_18);
  FUniformBufferStruct::GetNestedStructs(&DAT_1469fda10,local_18);
  FShaderParameterMap::ContainsParameterAllocation(param_1,DAT_146a632c0);
  FShaderParameterMap::ContainsParameterAllocation(param_1,DAT_1469fda20);
  FShaderUniformBufferParameter::Bind(param_2,param_1,DAT_146a632c0,0);
  if (*(char *)(param_2 + 6) == '\0') {
    FShaderUniformBufferParameter::Bind(param_2,param_1,DAT_1469fda20,0);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141ab5cb0 FUN_141ab5cb0 body=29 status=ok
// SIG undefined FUN_141ab5cb0(void)

void FUN_141ab5cb0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FTaskGraphInterface::Get();
                    /* WARNING: Could not recover jumptable at 0x000141ab5cc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,DAT_1464a8214);
  return;
}



// FUNCTION 141ab5cd0 FUN_141ab5cd0 body=181 status=ok
// SIG undefined FUN_141ab5cd0(void)

undefined8 FUN_141ab5cd0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar3 = 0;
  if ((int)param_2[1] < 1) {
    return 1;
  }
  lVar5 = *param_2;
  lVar4 = 0;
  while( true ) {
    iVar2 = FUN_141ab5fb0((longlong)iVar3 * 0x30d0 + lVar5);
    lVar5 = *param_2;
    if (*(int *)(lVar4 + 0x1a38 + lVar5) < 3) {
      return 0;
    }
    iVar1 = *(int *)(DAT_1469fe280 + 4);
    if (iVar1 < 1) {
      return 0;
    }
    if ((iVar2 != 1) && ((*(byte *)(lVar4 + 0x1694 + lVar5) & 1) == 0)) {
      return 0;
    }
    if (iVar1 < 2) {
      return 0;
    }
    if ((iVar1 != 3) && (DAT_146ab62f0 == '\0')) break;
    iVar3 = iVar3 + 1;
    lVar4 = lVar4 + 0x30d0;
    if ((int)param_2[1] <= iVar3) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141ab5d90 Compare body=270 status=ok
// SIG undefined Compare(void)

undefined8
TStaticMeshDrawList<TBasePassDrawingPolicy<FUniformLightMapPolicy>_>::Compare
          (int param_1,int param_2,longlong *param_3,float *param_4)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar2 = *param_3;
  lVar5 = (longlong)param_1 * 0xf0;
  lVar4 = (longlong)param_2 * 0xf0;
  fVar6 = *(float *)(lVar5 + 0xd0 + lVar2);
  if (fVar6 < 524288.0) {
    pfVar1 = (float *)(lVar4 + 0xd0 + lVar2);
    if (*pfVar1 <= 524288.0 && *pfVar1 != 524288.0) goto LAB_141ab5df1;
  }
  else {
    pfVar1 = (float *)(lVar4 + 0xd0 + lVar2);
    if (*pfVar1 <= 524288.0 && *pfVar1 != 524288.0) {
      return 1;
    }
  }
  if (fVar6 < 524288.0) {
    return 0xffffffff;
  }
LAB_141ab5df1:
  fVar9 = *(float *)(lVar5 + 0xc4 + lVar2) - *param_4;
  fVar8 = *(float *)(lVar4 + 0xc4 + lVar2) - *param_4;
  fVar7 = *(float *)(lVar5 + 0xcc + lVar2) - param_4[2];
  fVar6 = *(float *)(lVar4 + 0xcc + lVar2) - param_4[2];
  fVar10 = *(float *)(lVar4 + 200 + lVar2) - param_4[1];
  fVar11 = *(float *)(lVar5 + 200 + lVar2) - param_4[1];
  uVar3 = 0xffffffff;
  if (fVar10 * fVar10 + fVar8 * fVar8 + fVar6 * fVar6 <
      fVar11 * fVar11 + fVar9 * fVar9 + fVar7 * fVar7) {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141ab5ea0 FUN_141ab5ea0 body=270 status=ok
// SIG undefined FUN_141ab5ea0(void)

undefined8 FUN_141ab5ea0(int param_1,int param_2,longlong *param_3,float *param_4)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar2 = *param_3;
  lVar5 = (longlong)param_1 * 200;
  lVar4 = (longlong)param_2 * 200;
  fVar6 = *(float *)(lVar5 + 0xa8 + lVar2);
  if (fVar6 < 524288.0) {
    pfVar1 = (float *)(lVar4 + 0xa8 + lVar2);
    if (*pfVar1 <= 524288.0 && *pfVar1 != 524288.0) goto LAB_141ab5f01;
  }
  else {
    pfVar1 = (float *)(lVar4 + 0xa8 + lVar2);
    if (*pfVar1 <= 524288.0 && *pfVar1 != 524288.0) {
      return 1;
    }
  }
  if (fVar6 < 524288.0) {
    return 0xffffffff;
  }
LAB_141ab5f01:
  fVar9 = *(float *)(lVar5 + 0x9c + lVar2) - *param_4;
  fVar8 = *(float *)(lVar4 + 0x9c + lVar2) - *param_4;
  fVar7 = *(float *)(lVar5 + 0xa4 + lVar2) - param_4[2];
  fVar6 = *(float *)(lVar4 + 0xa4 + lVar2) - param_4[2];
  fVar10 = *(float *)(lVar4 + 0xa0 + lVar2) - param_4[1];
  fVar11 = *(float *)(lVar5 + 0xa0 + lVar2) - param_4[1];
  uVar3 = 0xffffffff;
  if (fVar10 * fVar10 + fVar8 * fVar8 + fVar6 * fVar6 <
      fVar11 * fVar11 + fVar9 * fVar9 + fVar7 * fVar7) {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141ab5fb0 FUN_141ab5fb0 body=156 status=ok
// SIG undefined FUN_141ab5fb0(void)

uint FUN_141ab5fb0(longlong param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  cVar2 = FUN_141ae24b0();
  if (cVar2 == '\0') {
    return 0;
  }
  fVar5 = *(float *)(DAT_1469fe298 + 4);
  if (0.0 <= fVar5) {
    fVar4 = *(float *)(param_1 + 0x1684);
    if (fVar5 <= *(float *)(param_1 + 0x1684)) {
      fVar4 = fVar5;
    }
  }
  else {
    fVar5 = -fVar5;
    fVar4 = 0.0;
    if ((0.0 <= fVar5) && (fVar4 = fVar5, 100.0 <= fVar5)) {
      fVar4 = 100.0;
    }
  }
  uVar3 = (35.0 < fVar4) + 1 + (uint)(70.0 < fVar4);
  if (-1 < (int)*(uint *)(DAT_1469fe2c8 + 4)) {
    uVar3 = *(uint *)(DAT_1469fe2c8 + 4);
  }
  uVar1 = 3;
  if (uVar3 < 4) {
    uVar1 = uVar3;
  }
  return uVar1;
}



// FUNCTION 141ab6090 ComputeOutputDesc body=312 status=ok
// SIG undefined ComputeOutputDesc(void)

undefined8 *
FRCPassPostProcessAmbientOcclusion::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  ulonglong uStack_20;
  undefined8 uStack_10;
  
  if (*(char *)((longlong)param_1 + 0xdc) == '\0') {
    *param_2 = 1;
    param_2[1] = 0;
    uStack_10 = CONCAT62(uStack_10._2_6_,1);
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 1;
    param_2[5] = (ulonglong)CONCAT22(uStack_2e,1);
    uStack_20 = uStack_20 & 0xffffffffffffff00;
    param_2[6] = 0;
    param_2[7] = uStack_20;
    param_2[8] = L"AmbientOcclusionDirect";
    param_2[9] = uStack_10;
  }
  else {
    uVar4 = (**(code **)(*param_1 + 8))(param_1,0);
    puVar5 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar4);
    uVar4 = puVar5[4];
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    uStack_2e = (undefined2)((ulonglong)puVar5[5] >> 0x10);
    uStack_2c = 2;
    uStack_28 = (undefined4)puVar5[6];
    uStack_24 = (uint)((ulonglong)puVar5[6] >> 0x20);
    uVar6 = uStack_24 & 0xfffefffb | 1;
    uStack_10 = CONCAT71((int7)((ulonglong)puVar5[9] >> 8),1);
    uStack_20 = puVar5[7] & 0xffffffffffffff00;
    if ((int)param_1[0x1b] - 1U < 2) {
      uVar6 = uStack_24 & 0xfffefffb | 0x10001;
      uStack_2c = 10;
    }
    *param_2 = *puVar5;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    param_2[4] = uVar4;
    param_2[5] = CONCAT44(uStack_2c,CONCAT22(uStack_2e,1));
    param_2[6] = CONCAT44(uVar6,uStack_28);
    param_2[7] = uStack_20;
    param_2[8] = L"AmbientOcclusion";
    param_2[9] = uStack_10;
  }
  return param_2;
}



// FUNCTION 141ab61d0 ComputeOutputDesc body=391 status=ok
// SIG undefined ComputeOutputDesc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FRCPassPostProcessAmbientOcclusionSetup::ComputeOutputDesc(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  *param_2 = 1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[8] = L"UnknownTexture";
  param_2[4] = 1;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined2 *)(param_2 + 9) = 1;
  lVar3 = FRenderingCompositePass::GetInputDesc(param_1,0);
  lVar4 = FRenderingCompositePass::GetInputDesc(param_1,1);
  if ((lVar3 == 0) || (lVar4 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar5 = (**(code **)(*param_1 + 8))(param_1,!bVar2);
  puVar6 = (undefined8 *)FRenderingCompositeOutputRef::GetOutput(uVar5);
  uVar5 = puVar6[1];
  *param_2 = *puVar6;
  param_2[1] = uVar5;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar6 + 2);
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)puVar6 + 0x14);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(puVar6 + 3);
  *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)((longlong)puVar6 + 0x1c);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar6 + 4);
  *(undefined1 *)((longlong)param_2 + 0x24) = *(undefined1 *)((longlong)puVar6 + 0x24);
  *(undefined1 *)((longlong)param_2 + 0x25) = *(undefined1 *)((longlong)puVar6 + 0x25);
  *(undefined2 *)((longlong)param_2 + 0x26) = *(undefined2 *)((longlong)puVar6 + 0x26);
  *(undefined2 *)(param_2 + 5) = *(undefined2 *)(puVar6 + 5);
  *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)((longlong)puVar6 + 0x2c);
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(puVar6 + 6);
  *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)((longlong)puVar6 + 0x34);
  *(undefined1 *)(param_2 + 7) = *(undefined1 *)(puVar6 + 7);
  param_2[8] = puVar6[8];
  *(undefined1 *)(param_2 + 9) = *(undefined1 *)(puVar6 + 9);
  *(undefined1 *)((longlong)param_2 + 0x49) = *(undefined1 *)((longlong)puVar6 + 0x49);
  uVar1 = *(uint *)((longlong)param_2 + 0x34);
  *(uint *)((longlong)param_2 + 0x34) = uVar1 & 0xfffeffff | 1;
  *(undefined2 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 9) = 1;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 10;
  uVar5 = uRam0000000146ab6930;
  *param_2 = _DAT_146ab6928;
  param_2[1] = uVar5;
  *(undefined4 *)(param_2 + 2) = DAT_146ab6938;
  *(uint *)((longlong)param_2 + 0x34) = uVar1 & 0xfffefffb | 1;
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x14);
  *(int *)((longlong)param_2 + 0x14) = ((int)uVar5 + 1) / 2;
  *(int *)(param_2 + 3) = ((int)((ulonglong)uVar5 >> 0x20) + 1) / 2;
  param_2[8] = L"AmbientOcclusionSetup";
  return param_2;
}



// FUNCTION 141ab63e0 FUN_141ab63e0 body=411 status=ok
// SIG undefined FUN_141ab63e0(void)

undefined8 * FUN_141ab63e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1e8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc7830;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    FPostProcessPassParameters::FPostProcessPassParameters((longlong)puVar1 + 0xc6);
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1d2) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1dc) = 0;
    *(undefined2 *)(puVar1 + 0x3c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1e2) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1e6) = 0;
    FPostProcessPassParameters::Bind((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1c4),(longlong)puVar1 + 0x1cc);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1d4,*(undefined8 *)(param_1 + 0x18),L"ScreenSpaceAOParams",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1da,*(undefined8 *)(param_1 + 0x18),L"RandomNormalTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0x1de,*(undefined8 *)(param_1 + 0x18),
               L"RandomNormalTextureSampler",0);
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"HZBRemapping",0);
    FShaderParameter::Bind((longlong)puVar1 + 0x1e2,*(undefined8 *)(param_1 + 0x18),L"OutTexture",0)
    ;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab6580 ConstructCompiledInstance body=231 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FPostProcessAmbientOcclusionSetupPS<1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc93f8;
    FPostProcessPassParameters::FPostProcessPassParameters(puVar1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1bc) = 0;
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1c2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c4) = 0;
    *(undefined2 *)(puVar1 + 0x39) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x1ca) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1cc) = 0;
    *(undefined2 *)(puVar1 + 0x3a) = 0;
    FPostProcessPassParameters::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    FUN_141cdf500(param_1,(undefined4 *)((longlong)puVar1 + 0x1bc),(longlong)puVar1 + 0x1c4);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0x1cc,*(undefined8 *)(param_1 + 0x18),
               L"AmbientOcclusionSetupParams",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab6670 FUN_141ab6670 body=77 status=ok
// SIG undefined FUN_141ab6670(void)

undefined8 * FUN_141ab6670(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aae870(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc8ef8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab66c0 FUN_141ab66c0 body=139 status=ok
// SIG undefined FUN_141ab66c0(void)

undefined8 * FUN_141ab66c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x150);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dc7018;
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),DAT_146a632c0,0);
    *puVar1 = &PTR_FUN_144dc7048;
    BindBasePassUniformBuffer(*(undefined8 *)(param_1 + 0x18),puVar1 + 0x22);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab6750 FUN_141ab6750 body=139 status=ok
// SIG undefined FUN_141ab6750(void)

undefined8 * FUN_141ab6750(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x150);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aaf710(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dc7018;
    FShaderUniformBufferParameter::Bind
              (puVar1 + 0x22,*(undefined8 *)(param_1 + 0x18),DAT_146a632c0,0);
    *puVar1 = &PTR_FUN_144dc7018;
    BindBasePassUniformBuffer(*(undefined8 *)(param_1 + 0x18),puVar1 + 0x22);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab67e0 FUN_141ab67e0 body=111 status=ok
// SIG undefined FUN_141ab67e0(void)

undefined8 * FUN_141ab67e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aadb10(puVar1,param_1);
    *puVar1 = &PTR_FUN_144db9070;
    *(undefined4 *)(puVar1 + 0x39) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1cc) = 0;
    FShaderParameter::Bind(puVar1 + 0x39,*(undefined8 *)(param_1 + 0x18),L"bUseSkylight",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab6850 FUN_141ab6850 body=111 status=ok
// SIG undefined FUN_141ab6850(void)

undefined8 * FUN_141ab6850(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1f8);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aadcb0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dc8e40;
    *(undefined4 *)(puVar1 + 0x3e) = 0;
    *(undefined2 *)((longlong)puVar1 + 500) = 0;
    FShaderParameter::Bind(puVar1 + 0x3e,*(undefined8 *)(param_1 + 0x18),L"bUseSkylight",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab68c0 FUN_141ab68c0 body=111 status=ok
// SIG undefined FUN_141ab68c0(void)

undefined8 * FUN_141ab68c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1f0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aadea0(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dc8cd0;
    *(undefined4 *)(puVar1 + 0x3d) = 0;
    *(undefined2 *)((longlong)puVar1 + 0x1ec) = 0;
    FShaderParameter::Bind(puVar1 + 0x3d,*(undefined8 *)(param_1 + 0x18),L"bUseSkylight",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab6930 FUN_141ab6930 body=77 status=ok
// SIG undefined FUN_141ab6930(void)

undefined8 * FUN_141ab6930(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x178);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aae050(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dc6fe8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab6980 ConstructCompiledInstance body=77 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TShadowDepthPS<1,1>::ConstructCompiledInstance(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x170);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aae190(puVar1,param_1);
    *puVar1 = &PTR_FUN_144dc8b48;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab69d0 ConstructCompiledInstance body=77 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TShadowDepthPS<1,1>::ConstructCompiledInstance(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x170);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141aae2b0(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc8450;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab6a20 ConstructCompiledInstance body=280 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * TCapsuleShadowingUpsamplePS<1,1>::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc8c68;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined4 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xcc) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xce) = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    FUN_141cdf500(param_1);
    FShaderResourceParameter::Bind
              (puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"ShadowFactorsTexture",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xd4,*(undefined8 *)(param_1 + 0x18),L"ShadowFactorsSampler",0);
    FShaderParameter::Bind(puVar1 + 0x1b,*(undefined8 *)(param_1 + 0x18),L"ScissorRectMinAndSize",0)
    ;
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xde,*(undefined8 *)(param_1 + 0x18),
               L"OutputtingToLightAttenuation",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab6b40 ConstructCompiledInstance body=240 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FCapsuleShadowingUpsampleVS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc8b78;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xce) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"TileDimensions",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"TileSize",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"ScissorRectMinAndSize",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xd2,*(undefined8 *)(param_1 + 0x18),L"TileIntersectionCounts",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab6c30 ConstructCompiledInstance body=370 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 *
FComputeLightDirectionFromVolumetricLightmapCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc81a0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xd6) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xde) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xe6) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"NumLightDirectionData",0)
    ;
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"LightDirectionData",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xca,*(undefined8 *)(param_1 + 0x18),
               L"UseStationarySkylightShadowing",0);
    FShaderParameter::Bind
              (puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"CapsuleIndirectConeAngle",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xd6,*(undefined8 *)(param_1 + 0x18),L"CapsuleSkyAngleScale",0);
    FShaderParameter::Bind
              ((longlong)puVar1 + 0xdc,*(undefined8 *)(param_1 + 0x18),L"CapsuleMinSkyAngle",0);
    FRWShaderParameter::Bind
              ((longlong)puVar1 + 0xe2,*(undefined8 *)(param_1 + 0x18),L"ComputedLightDirectionData"
              );
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141ab6db0 ConstructCompiledInstance body=272 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FMemcpyBufferCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xe0);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144dc9898;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined2 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc6) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xce) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xd6) = 0;
    FShaderParameter::Bind(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"SrcOffset",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xc6,*(undefined8 *)(param_1 + 0x18),L"DstOffset",0);
    FShaderParameter::Bind((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"Size",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xd2,*(undefined8 *)(param_1 + 0x18),L"SrcBuffer",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xd6,*(undefined8 *)(param_1 + 0x18),L"DstBuffer",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}


