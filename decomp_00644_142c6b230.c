// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142c6b230 FUN_142c6b230 body=181 status=ok
// SIG undefined FUN_142c6b230(void)

undefined8 FUN_142c6b230(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x60);
  lVar5 = (longlong)*(int *)(param_1 + 0x68) * 0x10 + lVar6;
  do {
    if (lVar6 == lVar5) {
      return 0;
    }
    if (*(longlong *)(lVar6 + 8) != 0) {
      plVar3 = (longlong *)FUN_142e20fc0();
      plVar1 = *(longlong **)(lVar6 + 8);
      for (plVar4 = plVar1; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[6]) {
        if (plVar4 == plVar3) {
          if (plVar1 == (longlong *)0x0) break;
          plVar4 = (longlong *)plVar1[0x1f];
          if (plVar4 == (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x368))(plVar1);
            plVar4 = (longlong *)plVar1[0x1f];
            if (plVar4 == (longlong *)0x0) break;
          }
          cVar2 = (**(code **)(*plVar4 + 0x288))(plVar4,param_2);
          if (cVar2 != '\0') {
            return 1;
          }
          break;
        }
      }
    }
    lVar6 = lVar6 + 0x10;
  } while( true );
}



// FUNCTION 142c6b2f0 FUN_142c6b2f0 body=179 status=ok
// SIG undefined FUN_142c6b2f0(void)

undefined8 FUN_142c6b2f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x60);
  plVar5 = plVar6 + (longlong)*(int *)(param_1 + 0x68) * 2;
  do {
    if (plVar6 == plVar5) {
      return 0;
    }
    if (*plVar6 != 0) {
      plVar3 = (longlong *)FUN_142e20fc0();
      plVar1 = (longlong *)*plVar6;
      for (plVar4 = plVar1; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[6]) {
        if (plVar4 == plVar3) {
          if (plVar1 == (longlong *)0x0) break;
          plVar4 = (longlong *)plVar1[0x1f];
          if (plVar4 == (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x368))(plVar1);
            plVar4 = (longlong *)plVar1[0x1f];
            if (plVar4 == (longlong *)0x0) break;
          }
          cVar2 = (**(code **)(*plVar4 + 0x288))(plVar4,param_2);
          if (cVar2 != '\0') {
            return 1;
          }
          break;
        }
      }
    }
    plVar6 = plVar6 + 2;
  } while( true );
}



// FUNCTION 142c6b3b0 FUN_142c6b3b0 body=99 status=ok
// SIG undefined FUN_142c6b3b0(void)

void FUN_142c6b3b0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = UThrobber::GetPrivateStaticClass();
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
      *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(param_2 + 0x130);
    }
  }
  return;
}



// FUNCTION 142c6b420 FUN_142c6b420 body=441 status=ok
// SIG undefined FUN_142c6b420(void)

void FUN_142c6b420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  char in_stack_00000090;
  undefined1 local_148 [8];
  undefined1 local_140 [56];
  undefined1 local_108 [240];
  
  local_res8 = param_1;
  local_res10 = param_2;
  lVar2 = FUN_142c81780(param_7);
  if (lVar2 != 0) {
    FAlphaBlend::FAlphaBlend(local_140,param_6);
    FAlphaBlend::SetBlendOption(local_140,param_8);
    FAlphaBlend::SetCustomCurve(local_140,param_9);
    local_148[0] = 0;
    uVar3 = FUN_1422a1a10(local_108,&local_res10,&local_res8,param_3,param_4,param_5,local_140,
                          &stack0x00000050,&stack0x00000058,&stack0x00000060,&stack0x00000068,
                          &stack0x00000070,&stack0x00000078,local_148,in_stack_00000080,
                          in_stack_00000088);
    iVar1 = *(int *)(lVar2 + 0xf78);
    *(int *)(lVar2 + 0xf78) = iVar1 + 1;
    if (*(int *)(lVar2 + 0xf7c) < iVar1 + 1) {
      FUN_140a131a0(lVar2 + 0xf70,iVar1);
    }
    FUN_142c623c0((longlong)iVar1 * 0xe8 + *(longlong *)(lVar2 + 0xf70),uVar3);
    if (((longlong)(*(int *)(lVar2 + 0xf78) + -1) * 0xe8 + *(longlong *)(lVar2 + 0xf70) != 0) &&
       (in_stack_00000090 != '\0')) {
      FUN_1422a60f0();
    }
    *(undefined1 *)(lVar2 + 0xf6d) = 1;
  }
  return;
}



// FUNCTION 142c6b5f0 FUN_142c6b5f0 body=31 status=ok
// SIG undefined FUN_142c6b5f0(void)

void FUN_142c6b5f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = FUN_142c6dec0();
  FUN_142c6dc00(uVar2,uVar1);
  return;
}



// FUNCTION 142c6b610 FUN_142c6b610 body=370 status=ok
// SIG undefined FUN_142c6b610(void)

ulonglong FUN_142c6b610(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong *in_RAX;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *local_18;
  undefined8 local_10;
  
  if (param_1 != (longlong *)0x0) {
    in_RAX = (longlong *)FUN_142e20fc0();
    plVar5 = param_1;
    do {
      if (plVar5 == in_RAX) {
        plVar5 = (longlong *)param_1[0x1f];
        if (plVar5 == (longlong *)0x0) {
          in_RAX = (longlong *)(**(code **)(*param_1 + 0x368))(param_1);
          plVar5 = (longlong *)param_1[0x1f];
          if (plVar5 == (longlong *)0x0) break;
        }
        local_18 = (longlong *)0x0;
        local_10 = 0;
        (**(code **)(*plVar5 + 0x280))(plVar5,&local_18);
        plVar5 = local_18 + (int)local_10;
        plVar8 = local_18;
        goto joined_r0x000142c6b69a;
      }
      plVar5 = (longlong *)plVar5[6];
    } while (plVar5 != (longlong *)0x0);
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
joined_r0x000142c6b69a:
  if (plVar8 == plVar5) {
    uVar7 = 0;
LAB_142c6b6d8:
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
    return uVar7;
  }
  plVar1 = (longlong *)*plVar8;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = (longlong *)FUN_142e20fc0();
    plVar6 = plVar1;
    do {
      if (plVar6 == plVar3) {
        lVar9 = plVar1[0x1f];
        if (lVar9 == 0) {
          (**(code **)(*plVar1 + 0x368))(plVar1);
          lVar9 = plVar1[0x1f];
          if (lVar9 == 0) break;
        }
        lVar4 = UTextureRenderTarget::StaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (((bVar2) && (*(char *)(lVar9 + 0x68) != '\0')) && (*(char *)(lVar9 + 0x69) != '\0')) {
          bVar2 = true;
          goto LAB_142c6b6c0;
        }
        break;
      }
      plVar6 = (longlong *)plVar6[6];
    } while (plVar6 != (longlong *)0x0);
  }
  bVar2 = false;
LAB_142c6b6c0:
  if (bVar2) {
    uVar7 = 1;
    goto LAB_142c6b6d8;
  }
  plVar8 = plVar8 + 1;
  goto joined_r0x000142c6b69a;
}



// FUNCTION 142c6b790 FUN_142c6b790 body=451 status=ok
// SIG undefined FUN_142c6b790(void)

void FUN_142c6b790(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_142c6b861;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_142c6b861:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0xb8 + *param_1;
      if (*(longlong *)(lVar5 + 0x70) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x10) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FOnlineSessionSearchResult,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 142c6b960 FUN_142c6b960 body=78 status=ok
// SIG undefined FUN_142c6b960(void)

void FUN_142c6b960(longlong param_1)

{
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined ***local_10;
  
  local_58 = (undefined4)*(undefined8 *)(param_1 + 0x10);
  uStack_54 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  uStack_50 = (undefined4)param_1;
  uStack_4c = (undefined4)((ulonglong)param_1 >> 0x20);
  local_48 = &PTR_LAB_14583fbd0;
  local_10 = &local_48;
  local_40 = local_58;
  uStack_3c = uStack_54;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  FUN_142c6db40(local_58,&local_48);
  FUN_142c6be70(param_1);
  return;
}



// FUNCTION 142c6b9b0 FUN_142c6b9b0 body=363 status=ok
// SIG undefined FUN_142c6b9b0(void)

void FUN_142c6b9b0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  longlong local_18;
  undefined1 local_10;
  
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 2;
  *(char *)(param_1 + 0xa8) = *(char *)(param_1 + 0xa8) + '\x01';
  lVar4 = 0;
  lVar2 = lVar4;
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x120), lVar2 == 0)) {
    lVar2 = FUN_1423407b0();
  }
  plVar3 = (longlong *)FUN_142c71720(lVar2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x260))(plVar3);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar2 = lVar4;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x118);
    }
    FUN_142e214d0(*(longlong *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x30),lVar2);
  }
  TBaseMulticastDelegate<void,bool>::Broadcast(param_1 + 0x58,*(undefined1 *)(param_1 + 0x30));
  lVar2 = *(longlong *)(param_1 + 0x18);
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x338))) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    }
    local_10 = *(undefined1 *)(param_1 + 0x30);
    local_18 = lVar4;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar2 + 0x330,&local_18);
  }
  if ((((*(longlong *)(param_1 + 0x10) != 0) &&
       (cVar1 = UObjectBaseUtility::IsTemplate(*(longlong *)(param_1 + 0x10),0x30), cVar1 == '\0'))
      && (*(longlong *)(param_1 + 0x18) != 0)) &&
     ((lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x120), lVar2 != 0 ||
      (lVar2 = FUN_1423407b0(), lVar2 != 0)))) {
    FWeakObjectPtr::operator=(local_res8,*(undefined8 *)(param_1 + 0x10));
    if (*(longlong *)(lVar2 + 400) == 0) {
      lVar4 = lVar2 + 0x400;
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(lVar2 + 400) + 0x98);
    }
    FUN_142534fa0(lVar4,local_res8);
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar5 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1428800b0(uVar5);
    }
  }
  return;
}



// FUNCTION 142c6bb20 FUN_142c6bb20 body=235 status=ok
// SIG undefined FUN_142c6bb20(void)

void FUN_142c6bb20(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_res8;
  
  plVar4 = (longlong *)0x0;
  if (param_1[3] != 0) {
    plVar4 = *(longlong **)(param_1[3] + 0x118);
  }
  if (plVar4 != (longlong *)0x0) {
    uVar2 = FUN_142e39920();
    lVar3 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar2);
    if (lVar3 != 0) {
      FUN_142cf3f20(lVar3,1);
    }
  }
  if (param_1[0x8e] != 0) {
    local_res8 = param_1[0x16];
    FUN_142dbb5d0(param_1[0x8e] + 0x8b0,&local_res8);
    local_res8 = param_1[0x16];
    FUN_142dbb5d0(param_1[0x8e] + 0x948,&local_res8);
  }
  lVar3 = *param_1;
  uVar1 = *(undefined4 *)(param_1[2] + 0x224);
  uVar2 = (**(code **)(lVar3 + 0xa0))(param_1,1);
  (**(code **)(lVar3 + 0xb0))(param_1,uVar2,1,uVar1);
  FUN_142c6be70(param_1);
  return;
}



// FUNCTION 142c6bc10 FUN_142c6bc10 body=227 status=ok
// SIG undefined FUN_142c6bc10(void)

void FUN_142c6bc10(longlong *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_142c6be70();
  lVar4 = *param_1;
  uVar1 = *(undefined4 *)(param_1[2] + 0x1bc);
  uVar3 = (**(code **)(lVar4 + 0xa0))(param_1,1);
  (**(code **)(lVar4 + 0xb0))(param_1,uVar3,1,uVar1);
  if (((int)param_1[0x8e] != 0) && (plVar2 = (longlong *)param_1[0x8d], plVar2 != (longlong *)0x0))
  {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    if (param_1[0x8d] != 0) {
      lVar4 = FMemory::Realloc(param_1[0x8d],0,0);
      param_1[0x8d] = lVar4;
    }
    *(undefined4 *)(param_1 + 0x8e) = 0;
  }
  if (((int)param_1[0x90] != 0) && (plVar2 = (longlong *)param_1[0x8f], plVar2 != (longlong *)0x0))
  {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    if (param_1[0x8f] != 0) {
      lVar4 = FMemory::Realloc(param_1[0x8f],0,0);
      param_1[0x8f] = lVar4;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  return;
}



// FUNCTION 142c6bd00 FUN_142c6bd00 body=363 status=ok
// SIG undefined FUN_142c6bd00(void)

void FUN_142c6bd00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined ***local_10;
  
  lVar1 = FUN_142c71f80();
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (*(char *)(lVar2 + 0x1c3) == '\x03') {
      FUN_142db6cc0(lVar1,0,0);
    }
    if ((byte)(*(char *)(lVar2 + 0x1a9) - 2U) < 2) {
      lVar2 = FUN_142c71d20(param_1);
      if (lVar2 != 0) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38) < DAT_146b2fee0) {
          _Init_thread_header(&DAT_146b2fee0);
          if (DAT_146b2fee0 == -1) {
            FName::FName(&DAT_146b2fed8,L"Dynamic Physical Animation",1);
            _Init_thread_footer(&DAT_146b2fee0);
          }
        }
        FUN_142dbb5d0(lVar2 + 0x8b0,&DAT_146b2fed8);
        FUN_142dbb5d0(lVar2 + 0x948,&DAT_146b2fed8);
      }
    }
    if ((*(byte *)(lVar1 + 0x210) & 0x10) != 0) {
      *(byte *)(lVar1 + 0x210) = *(byte *)(lVar1 + 0x210) ^ 0x10;
    }
    FUN_142da27d0(lVar1);
  }
  local_58 = (undefined4)*(undefined8 *)(param_1 + 0x10);
  uStack_54 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  uStack_50 = (undefined4)param_1;
  uStack_4c = (undefined4)((ulonglong)param_1 >> 0x20);
  local_48 = &PTR_LAB_14583fbd0;
  local_10 = &local_48;
  local_40 = local_58;
  uStack_3c = uStack_54;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  FUN_142c6db40(param_1,&local_48);
  FUN_142c6be70(param_1);
  return;
}



// FUNCTION 142c6be70 FUN_142c6be70 body=235 status=ok
// SIG undefined FUN_142c6be70(void)

void FUN_142c6be70(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1[2];
  if (((*(char *)((longlong)param_1 + 0xe4) != '\0') && (*(char *)(lVar1 + 0x98) != '\0')) &&
     (lVar3 = FUN_142c71f10(), lVar3 != 0)) {
    FUN_142db6540(lVar3,param_1[0x1d]);
  }
  if ((*(char *)(lVar1 + 0xa9) != '\0') || (*(char *)(lVar1 + 0xa8) != '\0')) {
    lVar3 = 0;
    if (param_1[3] != 0) {
      lVar3 = *(longlong *)(param_1[3] + 0x118);
    }
    if (lVar3 != 0) {
      lVar4 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        *(undefined8 *)(lVar3 + 0xd68) = 0;
      }
    }
  }
  if (*(char *)(lVar1 + 0xb0) == '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1);
  }
  if (*(char *)((longlong)param_1 + 0xfc) == '\0') {
    (**(code **)(*param_1 + 0x108))(param_1);
  }
  FUN_142c6b9b0(param_1);
  return;
}



// FUNCTION 142c6bf60 FUN_142c6bf60 body=485 status=ok
// SIG undefined FUN_142c6bf60(void)

void FUN_142c6bf60(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  longlong *_Src;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong *local_48;
  int local_40;
  
  lVar2 = param_1[2];
  lVar4 = (**(code **)(*param_1 + 0xa0))(param_1,1);
  if (lVar4 == 0) goto LAB_142c6c103;
  lVar5 = FUN_142e5c1e0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) goto LAB_142c6c103;
  if (*(char *)(lVar2 + 0xb8) == '\x01') {
    lVar5 = *(longlong *)(lVar2 + 0xc0);
    if (lVar5 == 0) goto LAB_142c6c05f;
LAB_142c6c022:
    if (lVar5 == 0) goto LAB_142c6c05f;
    lVar6 = UAnimMontage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_142c6c05f;
  }
  else {
    if (*(char *)(lVar2 + 0xb8) == '\x02') {
      if (*(longlong *)(lVar2 + 200) != 0) {
        lVar5 = FUN_1423b9120(lVar4);
        goto LAB_142c6c022;
      }
    }
LAB_142c6c05f:
    lVar5 = 0;
  }
  local_48 = (longlong *)0x0;
  local_40 = 1;
  TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_48,1,0);
  _Src = local_48;
  lVar6 = (longlong)local_40;
  local_58 = (void *)0x0;
  local_50 = local_40;
  *local_48 = lVar5;
  if (local_40 == 0) {
    local_4c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_58,local_40,0);
    _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar6 << 3);
  }
  FUN_142c6c150(lVar2 + 0xe0,lVar4,&local_58);
  if (_Src != (longlong *)0x0) {
    FMemory::Free(_Src);
  }
LAB_142c6c103:
  lVar4 = *param_1;
  uVar1 = *(undefined4 *)(lVar2 + 0xd4);
  uVar7 = (**(code **)(lVar4 + 0xa0))(param_1,1);
  (**(code **)(lVar4 + 0xb0))(param_1,uVar7,1,uVar1);
  FUN_142c6be70(param_1);
  return;
}



// FUNCTION 142c6c150 FUN_142c6c150 body=1130 status=ok
// SIG undefined FUN_142c6c150(void)

void FUN_142c6c150(undefined8 param_1,longlong param_2,longlong *param_3)

{
  void *pvVar1;
  bool bVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  byte bVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *local_68;
  int local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  int local_40;
  
  local_40 = (int)param_3[1];
  lVar7 = (longlong)local_40;
  pvVar1 = (void *)*param_3;
  puVar8 = (undefined8 *)0x0;
  local_48 = (undefined8 *)0x0;
  puVar11 = puVar8;
  if (local_40 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_48,local_40,0);
    puVar11 = local_48;
    _guard_xfg_dispatch_icall_nop(local_48,pvVar1,lVar7 << 3);
  }
  iVar10 = local_40;
  uVar4 = FUN_142df9720();
  local_58 = (void *)0x0;
  local_50 = iVar10;
  if (iVar10 == 0) {
    local_4c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_58,iVar10,0);
    _guard_xfg_dispatch_icall_nop(local_58,puVar11,(longlong)iVar10 << 3);
  }
  FUN_142c9e510(&local_68,&local_58,uVar4);
  if (puVar11 != (undefined8 *)0x0) {
    FMemory::Free(puVar11);
  }
  if ((local_60 == 0) || (local_68 == (undefined8 *)0x0)) {
    local_50 = (int)param_3[1];
    lVar7 = (longlong)local_50;
    pvVar1 = (void *)*param_3;
    local_58 = (void *)0x0;
    if (local_50 == 0) {
      local_4c = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_58,local_50,0);
      _guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar7 << 3);
    }
    FUN_142c61530(&local_48,&local_58);
    puVar11 = local_48;
    iVar10 = local_40;
    if (((local_40 != 0) && (local_48 != (undefined8 *)0x0)) && (lVar7 = local_48[10], lVar7 != 0))
    {
      lVar5 = FUN_142df81c0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      puVar11 = local_48;
      iVar10 = local_40;
      if ((bVar2) && (lVar5 = (longlong)*(int *)(param_2 + 0xf90), *(int *)(param_2 + 0xf90) != 0))
      {
        puVar11 = (undefined8 *)0x0;
        puVar13 = puVar8;
        if ((**(longlong **)(param_2 + 0xf88) == *(longlong *)(lVar7 + 0x38)) &&
           ((*(longlong **)(param_2 + 0xf88))[1] == *(longlong *)(lVar7 + 0x40))) {
          bVar9 = 0;
          puVar11 = puVar8;
        }
        else {
          bVar9 = 1;
        }
        do {
          iVar10 = (int)puVar11;
          puVar8 = (undefined8 *)((longlong)puVar8 + 1);
          puVar11 = (undefined8 *)(ulonglong)(iVar10 + 1);
          if ((longlong)puVar8 < lVar5) {
            plVar6 = (longlong *)((longlong)puVar8 * 0xa0 + *(longlong *)(param_2 + 0xf88));
            do {
              if ((*plVar6 == *(longlong *)(lVar7 + 0x38)) &&
                 (plVar6[1] == *(longlong *)(lVar7 + 0x40))) {
                bVar3 = 0;
              }
              else {
                bVar3 = 1;
              }
              if (bVar9 != bVar3) break;
              puVar11 = (undefined8 *)(ulonglong)((int)puVar11 + 1);
              puVar8 = (undefined8 *)((longlong)puVar8 + 1);
              plVar6 = plVar6 + 0x14;
            } while ((longlong)puVar8 < lVar5);
          }
          iVar14 = (int)puVar11 - iVar10;
          if (bVar9 != 0) {
            iVar12 = (int)puVar13;
            if (iVar12 != iVar10) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar12 * 0xa0 + *(longlong *)(param_2 + 0xf88)),
                         (void *)((longlong)iVar10 * 0xa0 + *(longlong *)(param_2 + 0xf88)),
                         (longlong)iVar14 * 0xa0);
            }
            puVar13 = (undefined8 *)(ulonglong)(uint)(iVar12 + iVar14);
          }
          bVar9 = bVar9 ^ 1;
        } while ((longlong)puVar8 < lVar5);
        *(int *)(param_2 + 0xf90) = (int)puVar13;
        puVar11 = local_48;
        iVar10 = local_40;
      }
    }
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      puVar11[0xc] = &PTR_FUN_14410b0e0;
      *puVar11 = &PTR_FUN_14410b0e0;
      puVar11 = puVar11 + 0x15;
    }
    puVar11 = local_68;
    if (local_48 != (undefined8 *)0x0) {
      FMemory::Free();
      puVar11 = local_68;
    }
  }
  else {
    lVar7 = local_68[9];
    puVar11 = local_68;
    if (lVar7 != 0) {
      lVar5 = FUN_142df9720();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      puVar11 = local_68;
      if ((bVar2) && (lVar5 = (longlong)*(int *)(param_2 + 0xf90), *(int *)(param_2 + 0xf90) != 0))
      {
        puVar11 = (undefined8 *)0x0;
        puVar13 = puVar8;
        if ((**(longlong **)(param_2 + 0xf88) == *(longlong *)(lVar7 + 0x40)) &&
           ((*(longlong **)(param_2 + 0xf88))[1] == *(longlong *)(lVar7 + 0x48))) {
          bVar9 = 0;
          puVar11 = puVar8;
        }
        else {
          bVar9 = 1;
        }
        do {
          iVar10 = (int)puVar11;
          puVar8 = (undefined8 *)((longlong)puVar8 + 1);
          puVar11 = (undefined8 *)(ulonglong)(iVar10 + 1);
          if ((longlong)puVar8 < lVar5) {
            plVar6 = (longlong *)((longlong)puVar8 * 0xa0 + *(longlong *)(param_2 + 0xf88));
            do {
              if ((*plVar6 == *(longlong *)(lVar7 + 0x40)) &&
                 (plVar6[1] == *(longlong *)(lVar7 + 0x48))) {
                bVar3 = 0;
              }
              else {
                bVar3 = 1;
              }
              if (bVar9 != bVar3) break;
              puVar11 = (undefined8 *)(ulonglong)((int)puVar11 + 1);
              puVar8 = (undefined8 *)((longlong)puVar8 + 1);
              plVar6 = plVar6 + 0x14;
            } while ((longlong)puVar8 < lVar5);
          }
          iVar14 = (int)puVar11 - iVar10;
          if (bVar9 != 0) {
            iVar12 = (int)puVar13;
            if (iVar12 != iVar10) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar12 * 0xa0 + *(longlong *)(param_2 + 0xf88)),
                         (void *)((longlong)iVar10 * 0xa0 + *(longlong *)(param_2 + 0xf88)),
                         (longlong)iVar14 * 0xa0);
            }
            puVar13 = (undefined8 *)(ulonglong)(uint)(iVar12 + iVar14);
          }
          bVar9 = bVar9 ^ 1;
        } while ((longlong)puVar8 < lVar5);
        *(int *)(param_2 + 0xf90) = (int)puVar13;
        puVar11 = local_68;
      }
    }
  }
  for (; local_60 != 0; local_60 = local_60 + -1) {
    puVar11[0xc] = &PTR_FUN_14410b0e0;
    *puVar11 = &PTR_FUN_14410b0e0;
    puVar11 = puVar11 + 0x15;
  }
  if (local_68 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142c6c5d0 FUN_142c6c5d0 body=235 status=ok
// SIG undefined FUN_142c6c5d0(void)

void FUN_142c6c5d0(longlong *param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res8;
  int local_res10 [2];
  undefined8 local_res18;
  
  FUN_14222a250();
  if (param_2 == 1) {
    FUN_142c871c0(param_1);
  }
  uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  FWeakObjectPtr::operator=(&local_res8,uVar2);
  local_res18 = local_res8;
  TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1466acd40,local_res10);
  lVar3 = 0;
  if (local_res10[0] != -1) {
    lVar3 = DAT_1466acd40 + (longlong)local_res10[0] * 0x18;
  }
  lVar4 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  if ((lVar4 != 0) && (lVar3 = FWeakObjectPtr::Get(), lVar3 != 0)) {
    FWeakObjectPtr::operator=(&local_res8,uVar2);
    local_res18 = local_res8;
    TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Remove(&DAT_1466acd40,&local_res18);
    cVar1 = UWorld::IsInSeamlessTravel(uVar2);
    if ((cVar1 != '\0') && (*(byte *)(lVar3 + 0x128) < 3)) {
      FUN_142c871c0(lVar3);
    }
  }
  return;
}



// FUNCTION 142c6c6c0 FUN_142c6c6c0 body=78 status=ok
// SIG undefined FUN_142c6c6c0(void)

void FUN_142c6c6c0(longlong param_1,int param_2)

{
  if (((param_2 - 2U & 0xfffffffd) != 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    if (*(char *)(*(longlong *)(param_1 + 0x118) + 0x128) == '\x03') {
      FUN_142c81f90();
    }
    else {
      FUN_142c6abf0();
    }
  }
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 142c6c710 FUN_142c6c710 body=10 status=ok
// SIG undefined FUN_142c6c710(void)

void FUN_142c6c710(undefined8 param_1)

{
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  return;
}



// FUNCTION 142c6c720 FUN_142c6c720 body=519 status=ok
// SIG undefined FUN_142c6c720(void)

undefined4 FUN_142c6c720(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined1 local_res10 [8];
  longlong local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined1 local_e8 [208];
  
  uVar10 = 1;
  if ((*(longlong *)(param_2 + 0x188) == 0) ||
     (plVar7 = *(longlong **)(*(longlong *)(param_2 + 0x188) + 0x488), plVar7 == (longlong *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_142e27720();
    uVar5 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar5);
  }
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  *(longlong *)(param_1 + 0x80) = param_2;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar6 = FUN_142e20fc0();
    lVar8 = *(longlong *)(param_1 + 0x70);
    for (lVar4 = lVar8; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar6) {
        if (lVar8 == 0) {
          return 1;
        }
        lVar4 = *(longlong *)(param_1 + 0x78);
        if (lVar4 == 0) {
          return 1;
        }
        uVar5 = FUN_142c62180(local_e8);
        FUN_142c7bb40(lVar4,&local_118,lVar8,uVar5,0);
        if (local_118 != 0) {
          if (*(char *)(local_118 + 0x30) == '\0') {
            uStack_100 = 0;
            uVar10 = 3;
            local_108 = &LAB_142c85740;
            plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
            local_f8 = plVar7;
            if (plVar7 != (longlong *)0x0) {
              *plVar7 = (longlong)&PTR_FUN_143fcff50;
              FWeakObjectPtr::operator=(plVar7 + 1,param_1);
              *(undefined4 *)(plVar7 + 2) = (undefined4)local_108;
              *(undefined4 *)((longlong)plVar7 + 0x14) = local_108._4_4_;
              *(undefined4 *)(plVar7 + 3) = uStack_100;
              *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_fc;
              lVar8 = FDelegateHandle::GenerateNewID();
              plVar7[5] = lVar8;
              *plVar7 = (longlong)&PTR_FUN_143fcff98;
              FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(local_118 + 0x58,1);
              (**(code **)(*plVar7 + 0x20))(plVar7,local_res10);
              iVar3 = *(int *)(local_118 + 0x60);
              *(int *)(local_118 + 0x60) = iVar3 + 1;
              if (*(int *)(local_118 + 100) < iVar3 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(local_118 + 0x58,iVar3);
              }
              puVar9 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(local_118 + 0x58));
              *puVar9 = plVar7;
              *(undefined4 *)(puVar9 + 1) = 3;
            }
          }
          else {
            uVar10 = 1;
            if (*(char *)(local_118 + 0x30) == '\x04') {
              uVar10 = 1;
            }
          }
        }
        plVar7 = local_110;
        if (local_110 == (longlong *)0x0) {
          return uVar10;
        }
        LOCK();
        plVar1 = local_110 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 != 1) {
          return uVar10;
        }
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 != 1) {
          return uVar10;
        }
        (**(code **)(*local_110 + 8))(local_110,1);
        return uVar10;
      }
    }
  }
  return 1;
}



// FUNCTION 142c6c930 FUN_142c6c930 body=72 status=ok
// SIG undefined FUN_142c6c930(void)

void FUN_142c6c930(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 8) + *(float *)(param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x10);
  if (fVar2 <= param_2 + 1.0) {
    fVar2 = param_2 + 1.0;
  }
  if (param_2 - 1.0 <= fVar1) {
    fVar1 = param_2 - 1.0;
  }
  fVar2 = (fVar2 - fVar1) * 0.5;
  *(float *)(param_1 + 0x10) = fVar2;
  *(float *)(param_1 + 8) = fVar2 + fVar1;
  return;
}



// FUNCTION 142c6c980 FUN_142c6c980 body=387 status=ok
// SIG undefined FUN_142c6c980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_142c6c980(undefined8 param_1,undefined8 *param_2,undefined2 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [32];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  uVar1 = uRam00000001468b5b78;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  *param_2 = _DAT_1468b5b70;
  param_2[1] = uVar1;
  uVar5 = uRam00000001468b5b8c;
  uVar4 = uRam00000001468b5b88;
  uVar3 = uRam00000001468b5b84;
  *(undefined4 *)(param_2 + 2) = _DAT_1468b5b80;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
  *(undefined4 *)(param_2 + 3) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar5;
  uVar6 = uRam00000001468b5b9c;
  uVar5 = uRam00000001468b5b98;
  uVar4 = uRam00000001468b5b94;
  uVar3 = _DAT_1468b5b90;
  *(undefined4 *)(param_2 + 4) = _DAT_1468b5b90;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar4;
  *(undefined4 *)(param_2 + 5) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar6;
  plVar8 = (longlong *)FUN_142c6f640(uVar3,param_3);
  if (plVar8 != (longlong *)0x0) {
    lVar9 = UTextureRenderTarget::StaticClass();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (cVar7 = (**(code **)(*plVar8 + 0x2e8))(plVar8), cVar7 != '\0')) {
      lVar9 = UMaterialInstanceConstant::GetPrivateStaticClass();
      if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        puVar10 = (undefined8 *)FUN_14225d950(plVar8,local_78,param_4,param_5);
      }
      else {
        lVar9 = UAnimMontage::GetPrivateStaticClass();
        if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
            lVar9 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          return param_2;
        }
        puVar10 = (undefined8 *)FUN_142291ab0(plVar8,local_78,param_4,param_5);
      }
      uVar1 = puVar10[1];
      *param_2 = *puVar10;
      param_2[1] = uVar1;
      uVar1 = puVar10[3];
      param_2[2] = puVar10[2];
      param_2[3] = uVar1;
      uVar1 = puVar10[5];
      param_2[4] = puVar10[4];
      param_2[5] = uVar1;
    }
  }
  return param_2;
}



// FUNCTION 142c6cb10 FUN_142c6cb10 body=356 status=ok
// SIG undefined FUN_142c6cb10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142c6cb10(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined1 local_178 [8];
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 local_150 [72];
  longlong local_108;
  longlong local_e8;
  undefined1 local_d8 [32];
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined8 local_68;
  undefined4 local_60;
  byte *local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_158 = 0xffffffff;
  local_154 = 0;
  local_170 = 0;
  local_188 = 0;
  FUN_1422ffb20(local_150,0,local_178,0);
  FUN_1426d3dd0(local_d8);
  FUN_1426ea8d0(local_d8,2,0);
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = (byte *)0x0;
  local_50 = 0;
  cVar1 = FUN_14234afa0(param_2,param_1 + 0x20,&local_158);
  if (cVar1 == '\0') {
    uVar3 = 0;
    goto LAB_142c6cc1f;
  }
  if (((int)local_50 < 1) || ((*local_58 & 1) == 0)) {
LAB_142c6cc19:
    uVar2 = 0;
  }
  else {
    local_170 = *(undefined8 *)(local_58 + 0x20);
    local_168 = *(undefined4 *)(local_58 + 0x28);
    if ((param_4 != '\0') &&
       (cVar1 = FUN_142c6af80(param_1 + 4,param_1 + 0x10,&local_170,param_3), cVar1 == '\0'))
    goto LAB_142c6cc19;
    *(undefined8 *)(param_1 + 0x10) = local_170;
    *(undefined4 *)(param_1 + 0x18) = local_168;
    uVar2 = 1;
  }
  *param_1 = uVar2;
  uVar3 = 1;
LAB_142c6cc1f:
  if (local_58 != (byte *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_68);
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 142c6cc80 FUN_142c6cc80 body=1197 status=ok
// SIG undefined FUN_142c6cc80(void)

void FUN_142c6cc80(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined4 local_res8 [2];
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined8 local_178;
  longlong *local_170;
  longlong local_168 [3];
  longlong local_150;
  undefined8 *local_148;
  longlong local_140 [2];
  longlong local_130;
  longlong local_128;
  longlong local_120;
  undefined1 local_110 [208];
  
  plVar10 = (longlong *)0x0;
  local_res8[0] = 0;
  plVar8 = plVar10;
  if (*param_2 != 0) {
    lVar3 = *(longlong *)(*param_2 + 0x10);
    if (lVar3 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)(lVar3 + 0x10);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  lVar3 = FUN_142c71720(lVar3);
  if (lVar3 == 0) {
    return;
  }
  if (*param_2 == 0) {
    return;
  }
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  plVar4 = (longlong *)FUN_142e20fc0();
  plVar7 = plVar8;
  while (plVar7 != plVar4) {
    plVar7 = (longlong *)plVar7[6];
    if (plVar7 == (longlong *)0x0) {
      return;
    }
  }
  plVar4 = (longlong *)FUN_142e20fc0();
  plVar7 = plVar8;
  do {
    plVar9 = plVar8;
    if (plVar7 == plVar4) break;
    plVar7 = (longlong *)plVar7[6];
    plVar9 = plVar10;
  } while (plVar7 != (longlong *)0x0);
  plVar7 = (longlong *)plVar9[0x1f];
  if (plVar7 == (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    plVar7 = (longlong *)plVar9[0x1f];
    if (plVar7 != (longlong *)0x0) goto LAB_142c6cd6e;
LAB_142c6cda4:
    plVar7 = plVar10;
  }
  else {
LAB_142c6cd6e:
    lVar3 = FUN_142e20fc0();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (!bVar11) goto LAB_142c6cda4;
  }
  iVar2 = FUN_14233f450(param_1);
  if ((iVar2 == 3) || ((byte)(*(char *)(*param_2 + 0x31) - 2U) < 2)) {
    iVar2 = FUN_14233f450(param_1);
    if ((iVar2 != 3) && (1 < (byte)(*(char *)(*param_2 + 0x31) - 2U))) {
      return;
    }
    cVar6 = FUN_142c6a2d0(param_1,plVar8,*param_2);
    if (cVar6 == '\0') {
      return;
    }
    local_res10[0] = 2;
    uVar5 = FUN_142c6ee30(param_1,plVar8);
    FUN_142c856b0(param_1,uVar5,local_res10);
    if (*(char *)(*param_2 + 0x31) == '\x02') {
      *(undefined1 *)(*param_2 + 0xa0) = 0xff;
    }
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    lVar3 = FUN_142c71720(lVar3);
    if (lVar3 != 0) {
      local_130 = *param_2;
      local_128 = param_2[1];
      if (local_128 != 0) {
        LOCK();
        *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
        UNLOCK();
      }
      FUN_142c65780(lVar3,&local_130);
    }
    if (*param_2 == 0) goto LAB_142c6d0bc;
  }
  else {
    cVar6 = *(char *)(param_1 + 0x220) + '\x01';
    *(char *)(param_1 + 0x220) = cVar6;
    if (cVar6 == -1) {
      *(undefined1 *)(param_1 + 0x220) = 0;
      cVar6 = '\0';
    }
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,2);
    *(char *)(*param_2 + 0xa0) = cVar6;
    uVar5 = FUN_142c6ee30(param_1,plVar8);
    FUN_142c856b0(param_1,uVar5,local_res8);
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    lVar3 = *param_2;
    if (*(longlong *)(lVar3 + 0x18) != 0) {
      local_170 = *(longlong **)(lVar3 + 0xc0);
      local_178 = 0;
      if (local_170 != (longlong *)0x0) {
        LOCK();
        iVar2 = (int)local_170[1];
        bVar11 = iVar2 == 0;
        if (bVar11) {
          *(int *)(local_170 + 1) = 0;
          iVar2 = 0;
        }
        UNLOCK();
        while (!bVar11) {
          LOCK();
          bVar11 = iVar2 == (int)local_170[1];
          if (bVar11) {
            *(int *)(local_170 + 1) = iVar2 + 1;
          }
          UNLOCK();
          if (bVar11) {
            if (local_170 != (longlong *)0x0) {
              local_178 = *(undefined8 *)(lVar3 + 0xb8);
            }
            goto LAB_142c6ce7d;
          }
          LOCK();
          iVar2 = (int)local_170[1];
          bVar11 = iVar2 == 0;
          if (bVar11) {
            *(int *)(local_170 + 1) = 0;
            iVar2 = 0;
          }
          UNLOCK();
        }
        local_170 = (longlong *)0x0;
      }
LAB_142c6ce7d:
      local_150 = lVar3 + 0xa0;
      local_148 = &local_178;
      FUN_142c60f70(*(longlong *)(lVar3 + 0x18) + 0x1d0,local_res20,&local_150,0);
      plVar10 = local_170;
      if (local_170 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_170 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_170)(local_170);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    uVar5 = FUN_1405e0fd0(local_110,*param_2);
    FUN_142e2ace0(param_1,plVar8,uVar5);
    iVar2 = FUN_14233f450(param_1);
    if (iVar2 != 2) {
      bVar11 = *(longlong *)(param_1 + 0x118) == 0;
      if (bVar11) {
        local_168[0] = 0;
        local_168[1] = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_168,0);
        FGenericPlatformString::Memcpy(local_168[0],L"None",10);
        plVar8 = local_168;
      }
      else {
        local_168[2] = *(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x18);
        FName::ToString(local_168 + 2,local_140);
        plVar8 = local_140;
      }
      lVar3 = *plVar8;
      *plVar8 = 0;
      plVar8[1] = 0;
      local_120 = lVar3;
      if ((bVar11) && (local_168[0] != 0)) {
        FMemory::Free();
      }
      if ((!bVar11) && (local_140[0] != 0)) {
        FMemory::Free();
      }
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
  }
  FUN_142c66b50(param_1,plVar7 + 9,param_2);
LAB_142c6d0bc:
  iVar2 = *(int *)(param_1 + 0x230);
  *(int *)(param_1 + 0x230) = iVar2 + 1;
  if (*(int *)(param_1 + 0x234) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x228,iVar2);
  }
  plVar8 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x228));
  *plVar8 = *param_2;
  lVar3 = param_2[1];
  plVar8[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 142c6d130 FindId body=119 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)param_3) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)((longlong)iVar1 * 0xb8 + *param_1) == param_3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0xb8 + 0xb0 + *param_1);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142c6d1b0 FUN_142c6d1b0 body=185 status=ok
// SIG undefined FUN_142c6d1b0(void)

longlong FUN_142c6d1b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *param_2;
  lVar1 = lVar2 + (longlong)(int)param_2[1] * 0x48;
  lVar5 = lVar2;
  while( true ) {
    if (lVar5 == lVar1) {
      return 0xffffffff;
    }
    cVar3 = FUN_14058c1e0(lVar5,param_1);
    if ((cVar3 != '\0') ||
       (((param_1 != 0 && (lVar4 = FUN_14222e260(), lVar4 != 0)) &&
        (cVar3 = operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>
                           (lVar4,lVar5 + 8), cVar3 != '\0')))) break;
    lVar5 = lVar5 + 0x48;
  }
  if (lVar5 == lVar1) {
    return 0xffffffff;
  }
  return (lVar5 - lVar2) / 0x48;
}



// FUNCTION 142c6d270 FUN_142c6d270 body=140 status=ok
// SIG undefined FUN_142c6d270(void)

void FUN_142c6d270(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  
  piVar5 = *(int **)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x18);
  lVar6 = (longlong)iVar3;
  piVar2 = piVar5 + lVar6 * 2;
  for (; piVar5 != piVar2; piVar5 = piVar5 + 2) {
    if (*piVar5 == param_2) goto LAB_142c6d2b3;
  }
  piVar5 = (int *)0x0;
LAB_142c6d2b3:
  if (piVar5 == (int *)0x0) {
    *(int *)(param_1 + 0x18) = iVar3 + 1;
    if (*(int *)(param_1 + 0x1c) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
    }
    lVar4 = *plVar1;
    *(undefined4 *)(lVar4 + lVar6 * 8) = 0xffffffff;
    *(undefined2 *)(lVar4 + 4 + lVar6 * 8) = 0;
    *(int *)(*plVar1 + lVar6 * 8) = param_2;
  }
  return;
}



// FUNCTION 142c6d300 FUN_142c6d300 body=173 status=ok
// SIG undefined FUN_142c6d300(void)

longlong * FUN_142c6d300(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined7 uStack_3f;
  undefined8 local_38;
  undefined8 uStack_20;
  undefined8 local_18;
  
  plVar7 = *(longlong **)(param_1 + 0x20);
  plVar1 = (longlong *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x28);
  lVar8 = (longlong)iVar4 * 0x38;
  plVar2 = plVar7 + (longlong)iVar4 * 7;
  if (plVar7 != plVar2) {
    do {
      if ((*plVar7 == *param_2) && ((char)plVar7[1] == param_3)) {
        return plVar7;
      }
      plVar7 = plVar7 + 7;
    } while (plVar7 != plVar2);
  }
  lVar5 = *param_2;
  *(int *)(param_1 + 0x28) = iVar4 + 1;
  if (*(int *)(param_1 + 0x2c) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar1);
  }
  lVar6 = *plVar1;
  *(longlong *)(lVar6 + lVar8) = lVar5;
  ((longlong *)(lVar6 + lVar8))[1] = CONCAT71(uStack_3f,param_3);
  puVar3 = (undefined8 *)(lVar6 + 0x10 + lVar8);
  *puVar3 = local_38;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar8);
  *puVar3 = 0;
  puVar3[1] = uStack_20;
  *(undefined8 *)(lVar6 + 0x30 + lVar8) = local_18;
  return (longlong *)(*plVar1 + lVar8);
}



// FUNCTION 142c6d3b0 FUN_142c6d3b0 body=72 status=ok
// SIG undefined FUN_142c6d3b0(void)

longlong * FUN_142c6d3b0(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    plVar1 = *(longlong **)(param_1 + 0x20);
    uVar3 = uVar2;
    do {
      if ((*plVar1 == *param_2) && ((char)plVar1[1] == param_3)) {
        return *(longlong **)(param_1 + 0x20) + (longlong)(int)uVar3 * 7;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 7;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x28));
  }
  return (longlong *)0x0;
}



// FUNCTION 142c6d400 FUN_142c6d400 body=1552 status=ok
// SIG undefined FUN_142c6d400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c6d400(longlong param_1,float param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined1 auStack_298 [32];
  uint local_278;
  undefined8 *local_270;
  undefined *local_268;
  undefined8 local_258;
  float local_250;
  undefined4 local_248;
  undefined4 local_244;
  float local_240;
  undefined4 local_238;
  undefined4 local_234;
  float local_230;
  float local_228;
  float local_224;
  undefined8 local_220;
  float local_218;
  float local_214;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [12];
  undefined4 local_1cc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  float local_1b0;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined2 local_134;
  undefined1 local_132;
  undefined4 local_130;
  undefined1 local_12c;
  undefined4 local_128;
  undefined2 local_124;
  longlong local_100;
  undefined8 local_f8;
  longlong local_e0;
  undefined8 local_d8;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  lVar5 = FUN_142c71f80();
  lVar6 = FUN_142c725a0(param_1);
  if ((((lVar5 != 0) && (lVar8 = *(longlong *)(param_1 + 0x18), lVar8 != 0)) && (lVar6 != 0)) &&
     (0 < *(int *)(lVar6 + 0xbf8))) {
    lVar7 = *(longlong *)(lVar8 + 0x120);
    uVar1 = *(undefined8 *)(*(longlong *)(lVar6 + 0xbf0) + (longlong)*(int *)(lVar5 + 0x2a8) * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1423407b0(lVar8);
    }
    FUN_142699110(uVar1,&local_c8,1,0);
    lVar5 = *(longlong *)(lVar6 + 0x118);
    if (lVar5 != 0) {
      lVar8 = APostProcessVolume::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (lVar8 = *(longlong *)(lVar5 + 0x4d0), lVar8 != 0)) {
        uVar10 = *(uint *)(lVar8 + 0x230) & _DAT_146b2fc80;
        uVar11 = *(uint *)(lVar8 + 0x234) & uRam0000000146b2fc84;
        uVar12 = *(uint *)(lVar8 + 0x238) & uRam0000000146b2fc88;
        uVar13 = *(uint *)(lVar8 + 0x23c) & uRam0000000146b2fc8c;
        auVar17._4_4_ = uVar11;
        auVar17._0_4_ = uVar10;
        auVar17._8_4_ = uVar12;
        auVar17._12_4_ = uVar13;
        auVar18._4_4_ = uVar12;
        auVar18._0_4_ = uVar11;
        auVar18._8_4_ = uVar10;
        auVar18._12_4_ = uVar13;
        auVar18 = minps(auVar17,auVar18);
        auVar2._4_4_ = uVar10;
        auVar2._0_4_ = uVar12;
        auVar2._8_4_ = uVar11;
        auVar2._12_4_ = uVar13;
        auVar18 = minps(auVar18,auVar2);
        local_230 = fStack_b0;
        local_258 = CONCAT44(local_258._4_4_,auVar18._0_4_);
        fVar15 = auVar18._0_4_ * *(float *)(lVar8 + 0x710);
        local_238 = local_b8;
        local_240 = fStack_b0 - fVar15;
        local_234 = uStack_b4;
        local_248 = local_b8;
        local_244 = uStack_b4;
        _guard_xfg_dispatch_icall_nop(local_1d8,0,0x90);
        local_1cc = 0x3f800000;
        local_140 = 0;
        local_100 = 0;
        local_f8 = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_130 = 0;
        local_258 = 0;
        local_148 = 0;
        local_134 = 0;
        local_12c = 0;
        local_132 = 0;
        local_128 = 0;
        local_138 = 0x10000;
        local_124 = 0x101;
        FUN_142301590(&local_148,lVar8);
        FUN_142301590(&local_148,lVar6);
        local_268 = &DAT_146aefe68;
        local_270 = &local_148;
        local_278 = 2;
        cVar4 = UWorld::LineTraceSingleByChannel(lVar7,local_1d8,&local_238,&local_248);
        if (cVar4 != '\0') {
          local_250 = local_1b0 + fVar15;
          local_258 = CONCAT44(local_1b4,local_1b8);
          local_278 = local_278 & 0xffffff00;
          FUN_14223c850(lVar5,&local_258,0,0);
        }
        fVar15 = local_c8 + local_c8;
        fVar14 = -fStack_c0 + -fStack_c0;
        fVar20 = fStack_c4 * fVar14 - fStack_bc * fVar15;
        fVar19 = -(fStack_c4 * fVar15 + fStack_bc * fVar14);
        fVar16 = (local_c8 * fVar15 - fStack_c0 * fVar14) - 1.0;
        fVar15 = -fStack_c4 + -fStack_c4;
        fVar14 = fStack_bc * (fStack_c0 + fStack_c0) - local_c8 * fVar15;
        fVar15 = (fStack_c4 * fVar15 - fStack_c0 * (fStack_c0 + fStack_c0)) + 1.0;
        fVar9 = _guard_xfg_dispatch_icall_nop(param_2 * 0.017453292);
        if (fVar20 <= fVar9) {
          if (-fVar9 <= fVar20) {
            fVar9 = fVar19 * fVar19 + fVar16 * fVar16;
            fVar15 = fVar19;
            fVar14 = fVar16;
            if (1e-08 < fVar9) {
              auVar18 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
              fVar14 = auVar18._0_4_;
              fVar14 = fVar14 + fVar14 * (0.5 - fVar9 * 0.5 * fVar14 * fVar14);
              fVar14 = fVar14 + fVar14 * (0.5 - fVar9 * 0.5 * fVar14 * fVar14);
              fVar15 = fVar19 * fVar14;
              fVar14 = fVar16 * fVar14;
            }
          }
          else {
            fVar9 = fVar14 * fVar14 + fVar15 * fVar15;
            if (1e-08 < fVar9) {
              auVar18 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
              fVar16 = auVar18._0_4_;
              fVar16 = fVar16 + fVar16 * (0.5 - fVar9 * 0.5 * fVar16 * fVar16);
              fVar16 = fVar16 + fVar16 * (0.5 - fVar9 * 0.5 * fVar16 * fVar16);
              fVar15 = fVar15 * fVar16;
              fVar14 = fVar14 * fVar16;
            }
          }
        }
        else {
          fVar9 = fVar14 * fVar14 + fVar15 * fVar15;
          if (1e-08 < fVar9) {
            auVar18 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
            fVar16 = auVar18._0_4_;
            fVar16 = fVar16 + fVar16 * (0.5 - fVar9 * 0.5 * fVar16 * fVar16);
            fVar16 = fVar16 + fVar16 * (0.5 - fVar9 * 0.5 * fVar16 * fVar16);
            fVar15 = fVar15 * fVar16;
            fVar14 = fVar14 * fVar16;
          }
          fVar15 = -fVar15;
          fVar14 = -fVar14;
        }
        local_218 = -fVar14;
        local_208 = 0;
        uStack_204 = 0;
        uStack_200 = 0x3f800000;
        uStack_1fc = 0;
        local_220 = 0;
        local_210 = 0;
        local_1f8 = 0;
        uStack_1f4 = 0;
        uStack_1f0 = 0;
        uStack_1ec = 0x3f800000;
        local_228 = fVar15;
        local_224 = fVar14;
        local_214 = fVar15;
        FQuat::FQuat(local_1e8,&local_228);
        FUN_14223d160(lVar5,local_1e8,0);
        if (local_e0 != 0) {
          FMemory::Free();
        }
        if (local_100 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 142c6da10 FUN_142c6da10 body=290 status=ok
// SIG undefined FUN_142c6da10(void)

undefined8 FUN_142c6da10(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined2 local_res8 [4];
  
  plVar2 = (longlong *)param_2[7];
  local_res8[0] = 1;
  if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_guard_xfg_dispatch_icall_nop();
  }
  cVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,local_res8);
  plVar2 = (longlong *)param_2[7];
  if (cVar1 != '\0') {
    local_res8[0] = 2;
    if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop();
    }
    cVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,local_res8);
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x460) = 0;
      if (0 < *(int *)(param_1 + 0x4e0)) {
        do {
          plVar2 = (longlong *)param_2[7];
          local_res8[0] = 0x10;
          if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::_guard_xfg_dispatch_icall_nop();
          }
          cVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,local_res8);
          if (cVar1 == '\0') goto LAB_142c6daf4;
          *(int *)(param_1 + 0x460) = *(int *)(param_1 + 0x460) + 1;
        } while (*(int *)(param_1 + 0x460) < *(int *)(param_1 + 0x4e0));
      }
      plVar2 = (longlong *)param_2[7];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_2);
        param_2[7] = 0;
      }
      return 1;
    }
LAB_142c6daf4:
    plVar2 = (longlong *)param_2[7];
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_2);
    param_2[7] = 0;
  }
  return 0;
}



// FUNCTION 142c6db40 FUN_142c6db40 body=182 status=ok
// SIG undefined FUN_142c6db40(void)

undefined8 FUN_142c6db40(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined1 *puStack_58;
  longlong *local_50;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  longlong *local_30;
  undefined ***local_10;
  
  if (param_1[3] == 0) {
    plVar1 = (longlong *)param_2[7];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
      param_2[7] = 0;
    }
    return 0;
  }
  puStack_58 = local_68;
  local_60._0_4_ = SUB84(param_1,0);
  local_60._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  local_48 = &PTR_LAB_14583fd50;
  local_10 = &local_48;
  local_68[0] = 0;
  local_40 = (undefined4)local_60;
  uStack_3c = local_60._4_4_;
  uVar2 = (undefined4)local_60;
  local_60 = param_1;
  local_50 = param_2;
  local_30 = param_2;
  puStack_38 = puStack_58;
  (**(code **)(*param_1 + 0x140))(uVar2,&local_48);
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  return 1;
}



// FUNCTION 142c6dc00 FUN_142c6dc00 body=691 status=ok
// SIG undefined FUN_142c6dc00(void)

void FUN_142c6dc00(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  bool bVar14;
  longlong *local_res18;
  int local_res20 [2];
  longlong **local_48 [2];
  
  if (DAT_1468c217e == '\0') {
    local_res18 = *(longlong **)(param_2 + 8);
    lVar6 = (longlong)*(int *)(param_1 + 0x18);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      bVar14 = **(longlong **)(param_1 + 0x10) != param_2;
      uVar8 = uVar3;
      uVar10 = uVar3;
      uVar12 = uVar3;
      do {
        iVar9 = (int)uVar10;
        uVar8 = uVar8 + 1;
        uVar10 = (ulonglong)(iVar9 + 1);
        if ((longlong)uVar8 < lVar6) {
          plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + uVar8 * 8);
          do {
            if (bVar14 != (*plVar4 != param_2)) break;
            uVar10 = (ulonglong)((int)uVar10 + 1);
            uVar8 = uVar8 + 1;
            plVar4 = plVar4 + 1;
          } while ((longlong)uVar8 < lVar6);
        }
        iVar13 = (int)uVar10 - iVar9;
        if (bVar14 != false) {
          iVar11 = (int)uVar12;
          if (iVar11 != iVar9) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar11 * 8),
                       (void *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar9 * 8),
                       (longlong)iVar13 << 3);
          }
          uVar12 = (ulonglong)(uint)(iVar11 + iVar13);
        }
        bVar14 = (bool)(bVar14 ^ 1);
      } while ((longlong)uVar8 < lVar6);
      *(int *)(param_1 + 0x18) = (int)uVar12;
    }
    plVar4 = local_res18;
    lVar6 = *(longlong *)(param_2 + 0x10);
    if (lVar6 != 0) {
      iVar9 = *(int *)(lVar6 + 0xc);
      uVar8 = uVar3;
      if (iVar9 < (int)DAT_1469e91c4) {
        uVar5 = iVar9 >> 0x1f & 0xffff;
        uVar2 = iVar9 + uVar5;
        uVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
      }
      if (((*(uint *)(uVar8 + 8) & 0x30000000) == 0) &&
         (cVar1 = UObjectBaseUtility::IsTemplate(lVar6,0x30), cVar1 == '\0')) {
        iVar9 = *(int *)(*(longlong *)(param_2 + 0x10) + 0xc);
        if (iVar9 < (int)DAT_1469e91c4) {
          uVar5 = iVar9 >> 0x1f & 0xffff;
          uVar2 = iVar9 + uVar5;
          uVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
        }
        *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) | 0x20000000;
      }
    }
    (**(code **)(*plVar4 + 0x2b0))(plVar4,param_2,1);
    *(undefined8 *)(param_2 + 8) = 0;
    uVar2 = (int)plVar4[8] + -1 + *(int *)((longlong)plVar4 + 0x44) &
            -*(int *)((longlong)plVar4 + 0x44);
    local_res18 = (longlong *)CONCAT44(local_res18._4_4_,uVar2);
    if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
      lVar6 = *(longlong *)(param_1 + 0x60);
      if (*(longlong *)(param_1 + 0x60) == 0) {
        lVar6 = param_1 + 0x58;
      }
      uVar5 = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x68) - 1U & (longlong)(int)uVar2) * 4
                       );
      if (uVar5 != 0xffffffff) {
        do {
          puVar7 = (uint *)((longlong)(int)uVar5 * 0x20 + *(longlong *)(param_1 + 0x20));
          if (*puVar7 == uVar2) {
            if ((uVar5 != 0xffffffff) && (puVar7 != (uint *)0x0)) goto LAB_142c6de79;
            break;
          }
          uVar5 = puVar7[6];
        } while (uVar5 != 0xffffffff);
      }
    }
    local_48[0] = &local_res18;
    TSet<TTuple<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<enum_EFlareQuestCallback::Type,TArray<UFlareQuest_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<enum_EFlareQuestCallback::Type_const_&>_>
              (param_1 + 0x20,local_res20,local_48,0);
    puVar7 = (uint *)((longlong)local_res20[0] * 0x20 + *(longlong *)(param_1 + 0x20));
LAB_142c6de79:
    uVar2 = puVar7[4];
    puVar7[4] = uVar2 + 1;
    if ((int)puVar7[5] < (int)(uVar2 + 1)) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar7 + 2,uVar2);
    }
    *(longlong *)(*(longlong *)(puVar7 + 2) + (longlong)(int)uVar2 * 8) = param_2;
  }
  return;
}



// FUNCTION 142c6dec0 FUN_142c6dec0 body=451 status=ok
// SIG undefined FUN_142c6dec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142c6dec0(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b2fea0) && (_Init_thread_header(&DAT_146b2fea0), DAT_146b2fea0 == -1))
  {
    lVar5 = 0;
    _DAT_146b2fe30 = &PTR__scalar_deleting_destructor__143f73ca8;
    DAT_146b2fe38 = 0;
    if (DAT_1468c217e == '\0') {
      if (DAT_1469e6880 == 0) {
        uVar3 = GetTransientPackage();
        FUN_1417846f0(uVar3,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar4 = UGCObjectReferencer::GetPrivateStaticClass();
        DAT_1469e6880 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
        iVar1 = *(int *)(DAT_1469e6880 + 0xc);
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar6 = iVar1 >> 0x1f & 0xffff;
          uVar2 = iVar1 + uVar6;
          lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
        }
        *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 0x40000000;
      }
      UGCObjectReferencer::AddObject(DAT_1469e6880,&DAT_146b2fe30);
      DAT_146b2fe38 = 1;
    }
    DAT_146b2fe40 = 0;
    _DAT_146b2fe30 = &PTR_FUN_14583ce68;
    _DAT_146b2fe48 = 0;
    _DAT_146b2fe50 = 0;
    _DAT_146b2fe58 = 0;
    _DAT_146b2fe70 = 0;
    _DAT_146b2fe78 = 0;
    _DAT_146b2fe80 = 0xffffffff;
    _DAT_146b2fe84 = 0;
    DAT_146b2fe90 = 0;
    _DAT_146b2fe98 = 0;
    atexit(FUN_143ebfca0);
    _Init_thread_footer(&DAT_146b2fea0);
    return &DAT_146b2fe30;
  }
  return &DAT_146b2fe30;
}



// FUNCTION 142c6e090 FUN_142c6e090 body=549 status=ok
// SIG undefined FUN_142c6e090(void)

undefined8 * FUN_142c6e090(longlong param_1,undefined8 *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *local_res18;
  
  if (param_3 != (longlong *)0x0) {
    local_res18 = (longlong *)param_3[0x1f];
    if (local_res18 == (longlong *)0x0) {
      (**(code **)(*param_3 + 0x368))(param_3);
      local_res18 = (longlong *)param_3[0x1f];
      if (local_res18 == (longlong *)0x0) goto LAB_142c6e244;
    }
    plVar12 = *(longlong **)(param_1 + 0x460);
    plVar11 = plVar12 + (longlong)*(int *)(param_1 + 0x468) * 2;
    if (plVar12 != plVar11) {
LAB_142c6e120:
      plVar3 = (longlong *)plVar12[1];
      lVar4 = *plVar12;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      lVar5 = *(longlong *)(lVar4 + 0x10);
      if (lVar5 != 0) {
        plVar8 = (longlong *)FUN_142e20fc0();
        plVar10 = param_3;
        do {
          if (plVar10 == plVar8) {
            if ((*(char *)(lVar4 + 0x30) == '\0') && (*(longlong *)(lVar4 + 0x18) == param_4)) {
              cVar7 = (**(code **)(*local_res18 + 0x288))();
              if (cVar7 != '\0') goto LAB_142c6e26f;
              plVar8 = (longlong *)FUN_142e20fc0();
              plVar10 = param_3;
              goto LAB_142c6e1b5;
            }
            break;
          }
          plVar10 = (longlong *)plVar10[6];
        } while (plVar10 != (longlong *)0x0);
      }
      goto LAB_142c6e1fb;
    }
  }
LAB_142c6e244:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
  while (plVar10 = (longlong *)plVar10[6], plVar10 != (longlong *)0x0) {
LAB_142c6e1b5:
    plVar9 = param_3;
    if (plVar10 == plVar8) goto LAB_142c6e1ca;
  }
  plVar9 = (longlong *)0x0;
LAB_142c6e1ca:
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < (int)plVar9[0x12]) ||
     (*(longlong **)(*(longlong *)(lVar5 + 0x88) + (longlong)(int)plVar9[0x12] * 8) != plVar9 + 0x11
     )) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (bVar6) {
LAB_142c6e26f:
    FUN_142c86b10(lVar4,param_2);
    if (plVar3 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    plVar12 = plVar3 + 1;
    lVar4 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar4 != 1) {
      return param_2;
    }
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) {
      return param_2;
    }
    (**(code **)(*plVar3 + 8))(plVar3,1);
    return param_2;
  }
LAB_142c6e1fb:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
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
  plVar12 = plVar12 + 2;
  if (plVar12 == plVar11) goto LAB_142c6e244;
  goto LAB_142c6e120;
}



// FUNCTION 142c6e2c0 FUN_142c6e2c0 body=116 status=ok
// SIG undefined FUN_142c6e2c0(void)

undefined8 * FUN_142c6e2c0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  lVar1 = FUN_142c71720(lVar1);
  if (lVar1 != 0) {
    FUN_142c6e090(lVar1,param_2,param_3,param_1);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 142c6e340 FUN_142c6e340 body=235 status=ok
// SIG undefined FUN_142c6e340(void)

longlong * FUN_142c6e340(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_18;
  longlong *local_10;
  
  plVar5 = *(longlong **)(param_1 + 8);
  plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x10) * 2;
  for (; (plVar6 = (longlong *)0x0, plVar5 != plVar4 &&
         (plVar6 = plVar5, param_3 != *(int *)(*plVar5 + 0xa4))); plVar5 = plVar5 + 2) {
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (plVar6 != (longlong *)0x0) {
    local_10 = (longlong *)plVar6[1];
    local_18 = *plVar6;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    if (param_2 != &local_18) {
      *param_2 = local_18;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_10);
    }
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_10 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 142c6e430 FUN_142c6e430 body=93 status=ok
// SIG undefined FUN_142c6e430(void)

longlong * FUN_142c6e430(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_3 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x180);
    plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x188) * 3;
    for (; plVar3 != plVar1; plVar3 = plVar3 + 3) {
      if (*plVar3 == param_3) {
        *param_2 = plVar3[1];
        lVar2 = plVar3[2];
        param_2[1] = lVar2;
        if (lVar2 == 0) {
          return param_2;
        }
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
        return param_2;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 142c6e490 FUN_142c6e490 body=426 status=ok
// SIG undefined FUN_142c6e490(void)

longlong * FUN_142c6e490(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  plVar9 = *(longlong **)(param_1 + 0x460);
  plVar8 = plVar9 + (longlong)*(int *)(param_1 + 0x468) * 2;
  while( true ) {
    if (plVar9 == plVar8) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b2ff04) &&
         (_Init_thread_header(&DAT_146b2ff04), DAT_146b2ff04 == -1)) {
        DAT_1466ace58 = DAT_1466ace58 & 0xf8;
        atexit(FUN_143ebfc00);
        _Init_thread_footer(&DAT_146b2ff04);
      }
      puVar7 = (undefined8 *)operator_new(0xd8);
      if (puVar7 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar7 + 1) = 1;
        *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
        *puVar7 = &PTR_LAB_14583fb60;
        FUN_1405e0fd0(puVar7 + 2,&PTR_PTR_1466ace20);
      }
      puVar3 = puVar7 + 2;
      *param_2 = (longlong)puVar3;
      param_2[1] = (longlong)puVar7;
      SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
      return param_2;
    }
    plVar5 = (longlong *)plVar9[1];
    lVar6 = *plVar9;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (*(longlong *)(lVar6 + 0x10) == param_3) break;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    plVar9 = plVar9 + 2;
  }
  *param_2 = lVar6;
  param_2[1] = (longlong)plVar5;
  if (plVar5 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  if (plVar5 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  plVar9 = plVar5 + 1;
  lVar6 = *plVar9;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)lVar6 != 1) {
    return param_2;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar2 = (int *)((longlong)plVar5 + 0xc);
  iVar4 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar4 != 1) {
    return param_2;
  }
  (**(code **)(*plVar5 + 8))(plVar5,1);
  return param_2;
}



// FUNCTION 142c6e640 FUN_142c6e640 body=156 status=ok
// SIG undefined FUN_142c6e640(void)

undefined8 * FUN_142c6e640(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res20;
  
  FWeakObjectPtr::operator=(&local_res10,param_3);
  local_res20 = local_res10;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x238,local_res8,&local_res20);
  lVar1 = 0;
  if (local_res8[0] != -1) {
    lVar1 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x238);
  }
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = *(undefined8 *)(lVar1 + 8);
    lVar1 = *(longlong *)(lVar1 + 0x10);
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 142c6e6e0 FUN_142c6e6e0 body=382 status=ok
// SIG undefined FUN_142c6e6e0(void)

undefined8 * FUN_142c6e6e0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      local_20 = *(longlong **)(param_1 + 0x40);
      local_28 = 0;
      if (local_20 == (longlong *)0x0) {
LAB_142c6e77d:
        puVar8 = &local_28;
        bVar3 = true;
        bVar9 = false;
        uVar7 = local_28;
      }
      else {
        LOCK();
        iVar6 = (int)local_20[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(local_20 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar9) {
          LOCK();
          bVar9 = iVar6 == (int)local_20[1];
          if (bVar9) {
            *(int *)(local_20 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar9) {
            if (local_20 != (longlong *)0x0) {
              local_28 = *(undefined8 *)(param_1 + 0x38);
            }
            goto LAB_142c6e77d;
          }
          LOCK();
          iVar6 = (int)local_20[1];
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(local_20 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
        puVar8 = &local_28;
        local_20 = (longlong *)0x0;
        bVar3 = true;
        bVar9 = false;
        uVar7 = 0;
      }
      goto LAB_142c6e7a4;
    }
  }
  puVar8 = &local_18;
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  bVar3 = false;
  bVar9 = true;
  uVar7 = 0;
LAB_142c6e7a4:
  *param_2 = uVar7;
  uVar7 = puVar8[1];
  puVar8[1] = 0;
  param_2[1] = uVar7;
  *puVar8 = 0;
  plVar5 = plStack_10;
  if ((bVar9) && (plStack_10 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_10 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_10 + 8))(plStack_10,1);
      }
    }
  }
  plVar5 = local_20;
  if ((bVar3) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142c6e860 FUN_142c6e860 body=1415 status=ok
// SIG undefined FUN_142c6e860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_142c6e860(undefined8 *param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_1e8 [32];
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined **local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined2 local_168;
  undefined4 local_164;
  byte local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  uVar8 = uRam00000001468b5b78;
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = _DAT_1468b5b70;
    param_4[1] = uVar8;
    uVar4 = uRam00000001468b5b8c;
    uVar15 = uRam00000001468b5b88;
    uVar16 = uRam00000001468b5b84;
    *(undefined4 *)(param_4 + 2) = _DAT_1468b5b80;
    *(undefined4 *)((longlong)param_4 + 0x14) = uVar16;
    *(undefined4 *)(param_4 + 3) = uVar15;
    *(undefined4 *)((longlong)param_4 + 0x1c) = uVar4;
    uVar8 = uRam00000001468b5b98;
    param_4[4] = _DAT_1468b5b90;
    param_4[5] = uVar8;
  }
  if (param_2 != 0) {
    lVar5 = FUN_142e20fc0();
    lVar11 = param_2;
    do {
      if (lVar11 == lVar5) {
        if (param_3 != (longlong *)0x0) {
          local_c8 = FUN_142e27720();
          local_1a0 = (**(code **)(*param_3 + 0x628))(param_3,local_c8);
          if (local_1a0 != 0) {
            local_160 = local_160 & 0xf8;
            local_188 = 0;
            uStack_180 = 0;
            local_198 = &PTR_FUN_143ff6170;
            local_138 = 0;
            uStack_130 = 2;
            local_108 = 0;
            uStack_100 = 2;
            uVar16 = 0;
            local_190 = 0;
            local_178 = 0;
            local_170 = 0;
            local_168 = 0;
            local_164 = 0;
            local_158 = 0;
            local_150 = 0;
            local_148 = 2;
            local_140 = 0;
            local_128 = 0;
            local_120 = 0;
            local_118 = 2;
            local_110 = 0;
            local_f8 = 0xff;
            local_f4 = 0xffffffff;
            local_f0 = 0;
            local_ec = 0;
            local_e4 = 0;
            local_e0 = 0;
            local_d8 = 0;
            FUN_142c707b0(local_1a0,&local_1b8,param_2,&local_198);
            plVar13 = local_1b8;
            if (local_1b8 != (longlong *)0x0) {
              lVar11 = local_1b8[0x1f];
              if (lVar11 == 0) {
                (**(code **)(*local_1b8 + 0x368))(local_1b8);
                lVar11 = plVar13[0x1f];
                if (lVar11 == 0) goto LAB_142c6edc6;
              }
              lVar5 = UThrobber::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                plVar13 = (longlong *)0x0;
                if (local_1b8 == (longlong *)0x0) goto LAB_142c6ea85;
                plVar6 = (longlong *)FUN_142e20fc0();
                plVar7 = local_1b8;
                goto LAB_142c6ea70;
              }
            }
LAB_142c6edc6:
            *param_1 = _DAT_1468b5d90;
            *(undefined4 *)(param_1 + 1) = DAT_1468b5d98;
            FUN_142c63c50(&local_198);
            return param_1;
          }
        }
        break;
      }
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  *param_1 = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 1) = DAT_1468b5d98;
  return param_1;
  while (plVar7 = (longlong *)plVar7[6], plVar13 = (longlong *)0x0, plVar7 != (longlong *)0x0) {
LAB_142c6ea70:
    plVar13 = local_1b8;
    if (plVar7 == plVar6) break;
  }
LAB_142c6ea85:
  lVar11 = plVar13[0x1f];
  if (lVar11 == 0) {
    (**(code **)(*plVar13 + 0x368))(plVar13);
    lVar11 = plVar13[0x1f];
  }
  uVar8 = FUN_142c6dec0();
  puVar9 = (undefined8 *)FUN_142c66ce0(uVar8,local_c0,lVar11);
  local_1c0 = (longlong *)puVar9[1];
  local_1c8 = (longlong *)*puVar9;
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
    UNLOCK();
  }
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_b8 + 1;
    lVar11 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_b8 + 8))(local_b8,1);
      }
    }
  }
  plVar13 = local_1c0;
  plVar7 = local_1c8;
  if (local_1b8 != (longlong *)0x0) {
    plVar10 = (longlong *)FUN_142e20fc0();
    plVar6 = local_1b8;
    do {
      plVar14 = local_1b8;
      if (plVar6 == plVar10) goto LAB_142c6eb41;
      plVar6 = (longlong *)plVar6[6];
    } while (plVar6 != (longlong *)0x0);
  }
  plVar14 = (longlong *)0x0;
LAB_142c6eb41:
  lVar11 = plVar14[0x1f];
  if (lVar11 == 0) {
    (**(code **)(*plVar14 + 0x368))(plVar14);
    lVar11 = plVar14[0x1f];
  }
  plVar7[2] = lVar11;
  plVar7[3] = local_1a0;
  (**(code **)(*plVar7 + 0x30))(plVar7);
  lVar11 = FUN_142c6f640(plVar7,1);
  plVar7 = local_1c0;
  if (lVar11 == 0) {
    *param_1 = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 1) = DAT_1468b5d98;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar13 + 1;
      lVar11 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_1c0 + 8))(local_1c0,1);
        }
      }
    }
    FUN_142c63c50(&local_198);
    return param_1;
  }
  lVar5 = UAnimMontage::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
      != lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  uVar15 = 0x7f7fffff;
  lVar5 = 0;
  if (bVar3) {
    lVar5 = lVar11;
  }
  if (lVar5 == 0) {
    lVar12 = UMaterialInstanceConstant::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (0 < *(int *)(lVar11 + 0x180))) &&
       (0 < *(int *)(*(longlong *)(lVar11 + 0x178) + 0x10))) {
      local_1b0 = (longlong *)0x0;
      local_1a8 = 0;
      FUN_142250530(*(longlong *)(lVar11 + 0x178) + 8,&local_1b0,0,0x7f7fffff);
      if (0 < (int)local_1a8) {
        lVar5 = *local_1b0;
        uVar16 = (undefined4)local_1b0[1];
        uVar15 = *(undefined4 *)((longlong)local_1b0 + 0xc);
      }
      if (local_1b0 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (lVar5 != 0) goto LAB_142c6ecf0;
    }
    *param_1 = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 1) = DAT_1468b5d98;
  }
  else {
LAB_142c6ecf0:
    FUN_142291ab0(lVar5,&local_98,uVar16,uVar15);
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = local_98;
      param_4[1] = uStack_90;
      param_4[4] = local_78;
      param_4[5] = uStack_70;
      *(undefined4 *)(param_4 + 2) = local_88;
      *(undefined4 *)((longlong)param_4 + 0x14) = uStack_84;
      *(undefined4 *)(param_4 + 3) = uStack_80;
      *(undefined4 *)((longlong)param_4 + 0x1c) = uStack_7c;
    }
    *(undefined4 *)param_1 = local_88;
    local_a8 = local_88;
    uStack_a4 = uStack_84;
    uStack_a0 = uStack_80;
    uStack_9c = uStack_7c;
    *(undefined4 *)(param_1 + 1) = uStack_80;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_84;
  }
  plVar7 = local_1c0;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar13 + 1;
    lVar11 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1c0 + 8))(local_1c0,1);
      }
    }
  }
  FUN_142c63c50(&local_198);
  return param_1;
}



// FUNCTION 142c6edf0 FUN_142c6edf0 body=49 status=ok
// SIG undefined FUN_142c6edf0(void)

longlong * FUN_142c6edf0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x180);
  plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x188) * 3;
  if (plVar2 != plVar1) {
    do {
      if (*plVar2 == *param_2) {
        return plVar2;
      }
      plVar2 = plVar2 + 3;
    } while (plVar2 != plVar1);
  }
  return (longlong *)0x0;
}



// FUNCTION 142c6ee30 FUN_142c6ee30 body=79 status=ok
// SIG undefined FUN_142c6ee30(void)

longlong FUN_142c6ee30(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != (longlong *)0x0) {
    plVar1 = (longlong *)FUN_142e20fc0();
    plVar3 = param_2;
    do {
      if (plVar3 == plVar1) goto LAB_142c6ee56;
      plVar3 = (longlong *)plVar3[6];
    } while (plVar3 != (longlong *)0x0);
  }
  param_2 = (longlong *)0x0;
LAB_142c6ee56:
  lVar2 = param_2[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*param_2 + 0x368))(param_2);
    lVar2 = param_2[0x1f];
  }
  return lVar2 + 0x48;
}



// FUNCTION 142c6ee80 FUN_142c6ee80 body=571 status=ok
// SIG undefined FUN_142c6ee80(void)

bool FUN_142c6ee80(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  
  if (param_2 != (longlong *)0x0) {
    plVar12 = (longlong *)param_2[0x1f];
    if (plVar12 == (longlong *)0x0) {
      (**(code **)(*param_2 + 0x368))(param_2);
      plVar12 = (longlong *)param_2[0x1f];
      if (plVar12 == (longlong *)0x0) goto LAB_142c6f09e;
    }
    plVar14 = *(longlong **)(param_1 + 0x460);
    plVar11 = plVar14 + (longlong)*(int *)(param_1 + 0x468) * 2;
    if (plVar14 != plVar11) {
LAB_142c6ef10:
      plVar2 = (longlong *)plVar14[1];
      lVar3 = *plVar14;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      lVar4 = *(longlong *)(lVar3 + 0x10);
      if (lVar4 != 0) {
        plVar7 = (longlong *)FUN_142e20fc0();
        plVar9 = param_2;
        do {
          if (plVar9 == plVar7) {
            if ((*(char *)(lVar3 + 0x30) == '\0') && (*(longlong *)(lVar3 + 0x18) == param_4)) {
              cVar5 = (**(code **)(*plVar12 + 0x288))(plVar12);
              if (cVar5 != '\0') goto LAB_142c6efcb;
              plVar7 = (longlong *)FUN_142e20fc0();
              plVar9 = param_2;
              goto LAB_142c6ef85;
            }
            break;
          }
          plVar9 = (longlong *)plVar9[6];
        } while (plVar9 != (longlong *)0x0);
      }
      goto LAB_142c6f03f;
    }
  }
LAB_142c6f09e:
  return 0 < (int)param_3[1];
  while (plVar9 = (longlong *)plVar9[6], plVar9 != (longlong *)0x0) {
LAB_142c6ef85:
    plVar8 = param_2;
    if (plVar9 == plVar7) goto LAB_142c6ef9a;
  }
  plVar8 = (longlong *)0x0;
LAB_142c6ef9a:
  lVar4 = *(longlong *)(lVar4 + 0x10);
  if ((*(int *)(lVar4 + 0x90) < (int)plVar8[0x12]) ||
     (*(longlong **)(*(longlong *)(lVar4 + 0x88) + (longlong)(int)plVar8[0x12] * 8) != plVar8 + 0x11
     )) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
  }
  if (bVar15) {
LAB_142c6efcb:
    lVar4 = *(longlong *)(lVar3 + 0xc0);
    lVar10 = lVar4;
    lVar13 = 0;
    if (lVar4 != 0) {
      LOCK();
      iVar6 = *(int *)(lVar4 + 8);
      bVar15 = iVar6 == 0;
      if (bVar15) {
        *(int *)(lVar4 + 8) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (lVar10 = 0, lVar13 = 0, !bVar15) {
        LOCK();
        bVar15 = iVar6 == *(int *)(lVar4 + 8);
        if (bVar15) {
          *(int *)(lVar4 + 8) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar15) {
          lVar10 = lVar4;
          lVar13 = *(longlong *)(lVar3 + 0xb8);
          break;
        }
        LOCK();
        iVar6 = *(int *)(lVar4 + 8);
        bVar15 = iVar6 == 0;
        if (bVar15) {
          *(int *)(lVar4 + 8) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
    }
    iVar6 = (int)param_3[1];
    *(int *)(param_3 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar6);
    }
    plVar9 = (longlong *)((longlong)iVar6 * 0x10 + *param_3);
    *plVar9 = lVar13;
    plVar9[1] = lVar10;
  }
LAB_142c6f03f:
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar2 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  plVar14 = plVar14 + 2;
  if (plVar14 == plVar11) goto LAB_142c6f09e;
  goto LAB_142c6ef10;
}



// FUNCTION 142c6f0c0 FUN_142c6f0c0 body=102 status=ok
// SIG undefined FUN_142c6f0c0(void)

void FUN_142c6f0c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  lVar1 = FUN_142c71720(lVar1);
  if (lVar1 != 0) {
    FUN_142c6ee80(lVar1,param_2,param_3,param_1);
    return;
  }
  return;
}



// FUNCTION 142c6f130 FUN_142c6f130 body=18 status=ok
// SIG undefined FUN_142c6f130(void)

undefined8 FUN_142c6f130(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x118);
  }
  return 0;
}



// FUNCTION 142c6f150 FUN_142c6f150 body=70 status=ok
// SIG undefined FUN_142c6f150(void)

void FUN_142c6f150(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_2[1];
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 142c6f1a0 FUN_142c6f1a0 body=171 status=ok
// SIG undefined FUN_142c6f1a0(void)

void FUN_142c6f1a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x68);
  lVar5 = (longlong)*(int *)(param_1 + 0x70) * 0x10 + lVar4;
  do {
    if (lVar4 == lVar5) {
      return;
    }
    if (*(longlong *)(lVar4 + 8) != 0) {
      plVar2 = (longlong *)FUN_142e20fc0();
      plVar1 = *(longlong **)(lVar4 + 8);
      for (plVar3 = plVar1; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6]) {
        if (plVar3 == plVar2) {
          if (plVar1 == (longlong *)0x0) break;
          plVar3 = (longlong *)plVar1[0x1f];
          if (plVar3 == (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x368))(plVar1);
            plVar3 = (longlong *)plVar1[0x1f];
            if (plVar3 == (longlong *)0x0) break;
          }
          (**(code **)(*plVar3 + 0x280))(plVar3,param_2);
          break;
        }
      }
    }
    lVar4 = lVar4 + 0x10;
  } while( true );
}



// FUNCTION 142c6f250 FUN_142c6f250 body=171 status=ok
// SIG undefined FUN_142c6f250(void)

void FUN_142c6f250(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x60);
  lVar5 = (longlong)*(int *)(param_1 + 0x68) * 0x10 + lVar4;
  do {
    if (lVar4 == lVar5) {
      return;
    }
    if (*(longlong *)(lVar4 + 8) != 0) {
      plVar2 = (longlong *)FUN_142e20fc0();
      plVar1 = *(longlong **)(lVar4 + 8);
      for (plVar3 = plVar1; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6]) {
        if (plVar3 == plVar2) {
          if (plVar1 == (longlong *)0x0) break;
          plVar3 = (longlong *)plVar1[0x1f];
          if (plVar3 == (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x368))(plVar1);
            plVar3 = (longlong *)plVar1[0x1f];
            if (plVar3 == (longlong *)0x0) break;
          }
          (**(code **)(*plVar3 + 0x280))(plVar3,param_2);
          break;
        }
      }
    }
    lVar4 = lVar4 + 0x10;
  } while( true );
}



// FUNCTION 142c6f300 FUN_142c6f300 body=169 status=ok
// SIG undefined FUN_142c6f300(void)

void FUN_142c6f300(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x60);
  plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x68) * 2;
  do {
    if (plVar5 == plVar4) {
      return;
    }
    if (*plVar5 != 0) {
      plVar2 = (longlong *)FUN_142e20fc0();
      plVar1 = (longlong *)*plVar5;
      for (plVar3 = plVar1; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6]) {
        if (plVar3 == plVar2) {
          if (plVar1 == (longlong *)0x0) break;
          plVar3 = (longlong *)plVar1[0x1f];
          if (plVar3 == (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x368))(plVar1);
            plVar3 = (longlong *)plVar1[0x1f];
            if (plVar3 == (longlong *)0x0) break;
          }
          (**(code **)(*plVar3 + 0x280))(plVar3,param_2);
          break;
        }
      }
    }
    plVar5 = plVar5 + 2;
  } while( true );
}



// FUNCTION 142c6f3b0 FUN_142c6f3b0 body=12 status=ok
// SIG undefined FUN_142c6f3b0(void)

void FUN_142c6f3b0(longlong param_1)

{
  FUN_142c66a00(param_1 + 0xb8);
  return;
}



// FUNCTION 142c6f3c0 FUN_142c6f3c0 body=68 status=ok
// SIG undefined FUN_142c6f3c0(void)

void FUN_142c6f3c0(longlong param_1,undefined8 param_2)

{
  FUN_142c66a00(param_1 + 0xb8);
  FUN_142c66a00(param_1 + 0x130,param_2);
  FUN_142c66a00(param_1 + 0x1a8,param_2);
  return;
}



// FUNCTION 142c6f410 FUN_142c6f410 body=449 status=ok
// SIG undefined FUN_142c6f410(void)

void FUN_142c6f410(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  FUN_142c66a00(param_1 + 0xb8);
  FUN_142c66a00(param_1 + 0x140,param_2);
  puVar11 = *(undefined4 **)(param_1 + 0x130);
  puVar9 = puVar11 + (longlong)*(int *)(param_1 + 0x138) * 0x2c;
  if (puVar11 != puVar9) {
    puVar7 = puVar11 + 6;
    do {
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_2,iVar2);
      }
      lVar3 = *param_2;
      uVar4 = puVar11[1];
      uVar5 = puVar11[2];
      uVar6 = puVar11[3];
      puVar8 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
      *puVar8 = *puVar11;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = *(undefined8 *)(puVar11 + 4);
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_2,iVar2);
      }
      lVar3 = *param_2;
      uVar4 = puVar7[1];
      uVar5 = puVar7[2];
      uVar6 = puVar7[3];
      puVar8 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
      *puVar8 = *puVar7;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = *(undefined8 *)(puVar7 + 4);
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_2,iVar2);
      }
      lVar3 = *param_2;
      uVar4 = puVar7[7];
      uVar5 = puVar7[8];
      uVar6 = puVar7[9];
      puVar8 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
      *puVar8 = puVar7[6];
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = *(undefined8 *)(puVar7 + 10);
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_2,iVar2);
      }
      lVar3 = *param_2;
      uVar4 = puVar7[0xd];
      uVar5 = puVar7[0xe];
      uVar6 = puVar7[0xf];
      puVar8 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
      *puVar8 = puVar7[0xc];
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = *(undefined8 *)(puVar7 + 0x10);
      puVar8 = *(undefined4 **)(puVar7 + 0x12);
      puVar10 = puVar8 + (longlong)(int)puVar7[0x14] * 0x10;
      for (; puVar8 != puVar10; puVar8 = puVar8 + 0x10) {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar2);
        }
        uVar4 = puVar8[1];
        uVar5 = puVar8[2];
        uVar6 = puVar8[3];
        lVar3 = *param_2;
        puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
        *puVar1 = *puVar8;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = *(undefined8 *)(puVar8 + 4);
      }
      puVar11 = puVar11 + 0x2c;
      puVar7 = puVar7 + 0x2c;
    } while (puVar11 != puVar9);
  }
  return;
}



// FUNCTION 142c6f5e0 FUN_142c6f5e0 body=94 status=ok
// SIG undefined FUN_142c6f5e0(void)

void FUN_142c6f5e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  lVar3 = *param_2;
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x18);
  *puVar1 = *(undefined8 *)(param_1 + 0xb8);
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = *(undefined8 *)(param_1 + 200);
  return;
}



// FUNCTION 142c6f640 FUN_142c6f640 body=511 status=ok
// SIG undefined FUN_142c6f640(void)

longlong FUN_142c6f640(longlong *param_1,short param_2)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  
  lVar2 = (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  if (param_2 == 1) {
    if ((char)param_1[0x8f] == '\x01') {
      if (param_1[0x90] == 0) {
        return 0;
      }
      return param_1[0x90];
    }
    if ((char)param_1[0x8f] != '\x02') {
      return 0;
    }
    if (lVar2 == 0) {
      return 0;
    }
    param_1 = param_1 + 0x91;
  }
  else if (param_2 == 2) {
    if ((char)param_1[0x92] == '\x01') {
      if (param_1[0x93] == 0) {
        return 0;
      }
      return param_1[0x93];
    }
    if ((char)param_1[0x92] != '\x02') {
      return 0;
    }
    if (lVar2 == 0) {
      return 0;
    }
    param_1 = param_1 + 0x94;
  }
  else if (param_2 == 4) {
    if ((char)param_1[0x95] == '\x01') {
      if (param_1[0x96] == 0) {
        return 0;
      }
      return param_1[0x96];
    }
    if ((char)param_1[0x95] != '\x02') {
      return 0;
    }
    if (lVar2 == 0) {
      return 0;
    }
    param_1 = param_1 + 0x97;
  }
  else if (param_2 == 8) {
    if ((char)param_1[0x98] == '\x01') {
      if (param_1[0x99] == 0) {
        return 0;
      }
      return param_1[0x99];
    }
    if ((char)param_1[0x98] != '\x02') {
      return 0;
    }
    if (lVar2 == 0) {
      return 0;
    }
    param_1 = param_1 + 0x9a;
  }
  else {
    if (param_2 != 0x10) {
      return 0;
    }
    iVar1 = (int)param_1[0x8c];
    if (iVar1 < 0) {
      return 0;
    }
    if ((int)param_1[0x9c] <= iVar1) {
      return 0;
    }
    pcVar3 = (char *)((longlong)iVar1 * 0x40 + param_1[0x9b]);
    if (*pcVar3 == '\x01') {
      if (*(longlong *)(pcVar3 + 8) == 0) {
        return 0;
      }
      return *(longlong *)(pcVar3 + 8);
    }
    if (*pcVar3 != '\x02') {
      return 0;
    }
    if (lVar2 == 0) {
      return 0;
    }
    param_1 = (longlong *)(pcVar3 + 0x10);
  }
  if (*param_1 == 0) {
    return 0;
  }
  lVar2 = FUN_1423b9120(lVar2);
  return lVar2;
}



// FUNCTION 142c6f840 FUN_142c6f840 body=111 status=ok
// SIG undefined FUN_142c6f840(void)

longlong FUN_142c6f840(longlong *param_1,char *param_2,undefined2 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  lVar1 = (**(code **)(*param_1 + 0xa0))(param_1,param_3);
  if (*param_2 == '\x01') {
    lVar2 = 0;
    if (*(longlong *)(param_2 + 8) != 0) {
      lVar2 = *(longlong *)(param_2 + 8);
    }
  }
  else if ((*param_2 == '\x02') && (lVar1 != 0)) {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      lVar2 = FUN_1423b9120(lVar1);
      return lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 142c6f8b0 FUN_142c6f8b0 body=35 status=ok
// SIG undefined FUN_142c6f8b0(void)

void FUN_142c6f8b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xa0))();
  if (lVar1 != 0) {
    FUN_1423ac7e0(lVar1);
    return;
  }
  return;
}



// FUNCTION 142c6f8e0 FUN_142c6f8e0 body=86 status=ok
// SIG undefined FUN_142c6f8e0(void)

longlong FUN_142c6f8e0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_142c6f640();
  if (lVar2 != 0) {
    lVar3 = UTextureRenderTarget::StaticClass();
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
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 142c6faa0 FUN_142c6faa0 body=213 status=ok
// SIG undefined FUN_142c6faa0(void)

undefined8 * FUN_142c6faa0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar1 = *(int *)(param_1 + 0x28);
  uVar6 = 0;
  lVar2 = *(longlong *)(param_1 + 0x10);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0 < iVar1) {
    plVar3 = *(longlong **)(param_1 + 0x20);
    uVar4 = uVar6;
    uVar7 = uVar6;
    do {
      if ((*plVar3 == *(longlong *)(lVar2 + 0x198)) && ((char)plVar3[1] == '\x01')) {
        lVar5 = (longlong)(int)uVar7 * 0x38 + *(longlong *)(param_1 + 0x20);
        if (lVar5 != 0) {
          *(undefined4 *)param_2 = *(undefined4 *)(lVar5 + 0xc);
        }
        break;
      }
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 7;
    } while ((longlong)uVar4 < (longlong)iVar1);
    if (0 < iVar1) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      uVar4 = uVar6;
      while ((*plVar3 != *(longlong *)(lVar2 + 0x1a0) || ((char)plVar3[1] != '\x01'))) {
        uVar4 = (ulonglong)((int)uVar4 + 1);
        uVar6 = uVar6 + 1;
        plVar3 = plVar3 + 7;
        if ((longlong)iVar1 <= (longlong)uVar6) {
          return param_2;
        }
      }
      plVar3 = *(longlong **)(param_1 + 0x20) + (longlong)(int)uVar4 * 7;
      if (plVar3 != (longlong *)0x0) {
        *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)((longlong)plVar3 + 0xc);
      }
    }
  }
  return param_2;
}



// FUNCTION 142c6fb80 FUN_142c6fb80 body=62 status=ok
// SIG undefined FUN_142c6fb80(void)

longlong FUN_142c6fb80(undefined8 param_1,undefined8 *param_2,byte param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_142c81780();
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xf6d) = *(byte *)(lVar1 + 0xf6d) | param_3;
    lVar1 = FUN_142ca0620(lVar1,*param_2);
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 142c6fbc0 FUN_142c6fbc0 body=536 status=ok
// SIG undefined FUN_142c6fbc0(void)

undefined8 FUN_142c6fbc0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = FUN_142c81780(param_3);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_142ca0620(lVar3,param_1);
    if (puVar4 != (undefined8 *)0x0) {
      *param_2 = *puVar4;
      param_2[1] = puVar4[1];
      param_2[2] = puVar4[2];
      *(undefined4 *)(param_2 + 3) = *(undefined4 *)(puVar4 + 3);
      *(undefined8 *)((longlong)param_2 + 0x1c) = *(undefined8 *)((longlong)puVar4 + 0x1c);
      *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)((longlong)puVar4 + 0x24);
      param_2[5] = puVar4[5];
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)(puVar4 + 6);
      uVar2 = puVar4[8];
      param_2[7] = puVar4[7];
      param_2[8] = uVar2;
      uVar2 = puVar4[10];
      param_2[9] = puVar4[9];
      param_2[10] = uVar2;
      uVar2 = puVar4[0xc];
      param_2[0xb] = puVar4[0xb];
      param_2[0xc] = uVar2;
      param_2[0xd] = puVar4[0xd];
      *(undefined1 *)(param_2 + 0xe) = *(undefined1 *)(puVar4 + 0xe);
      *(undefined1 *)((longlong)param_2 + 0x71) = *(undefined1 *)((longlong)puVar4 + 0x71);
      *(undefined1 *)((longlong)param_2 + 0x72) = *(undefined1 *)((longlong)puVar4 + 0x72);
      *(undefined1 *)((longlong)param_2 + 0x73) = *(undefined1 *)((longlong)puVar4 + 0x73);
      *(undefined1 *)((longlong)param_2 + 0x74) = *(undefined1 *)((longlong)puVar4 + 0x74);
      *(undefined1 *)((longlong)param_2 + 0x75) = *(undefined1 *)((longlong)puVar4 + 0x75);
      *(undefined1 *)((longlong)param_2 + 0x76) = *(undefined1 *)((longlong)puVar4 + 0x76);
      *(undefined1 *)((longlong)param_2 + 0x77) = *(undefined1 *)((longlong)puVar4 + 0x77);
      *(undefined1 *)(param_2 + 0xf) = *(undefined1 *)(puVar4 + 0xf);
      *(undefined1 *)((longlong)param_2 + 0x79) = *(undefined1 *)((longlong)puVar4 + 0x79);
      *(undefined1 *)((longlong)param_2 + 0x7a) = *(undefined1 *)((longlong)puVar4 + 0x7a);
      *(undefined8 *)((longlong)param_2 + 0x7c) = *(undefined8 *)((longlong)puVar4 + 0x7c);
      *(undefined4 *)((longlong)param_2 + 0x84) = *(undefined4 *)((longlong)puVar4 + 0x84);
      param_2[0x11] = puVar4[0x11];
      *(undefined4 *)(param_2 + 0x12) = *(undefined4 *)(puVar4 + 0x12);
      *(undefined8 *)((longlong)param_2 + 0x94) = *(undefined8 *)((longlong)puVar4 + 0x94);
      *(undefined4 *)((longlong)param_2 + 0x9c) = *(undefined4 *)((longlong)puVar4 + 0x9c);
      param_2[0x14] = puVar4[0x14];
      *(undefined4 *)(param_2 + 0x15) = *(undefined4 *)(puVar4 + 0x15);
      *(undefined8 *)((longlong)param_2 + 0xac) = *(undefined8 *)((longlong)puVar4 + 0xac);
      *(undefined4 *)((longlong)param_2 + 0xb4) = *(undefined4 *)((longlong)puVar4 + 0xb4);
      param_2[0x17] = puVar4[0x17];
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(puVar4 + 0x18);
      *(undefined8 *)((longlong)param_2 + 0xc4) = *(undefined8 *)((longlong)puVar4 + 0xc4);
      *(undefined4 *)((longlong)param_2 + 0xcc) = *(undefined4 *)((longlong)puVar4 + 0xcc);
      param_2[0x1a] = puVar4[0x1a];
      *(undefined4 *)(param_2 + 0x1b) = *(undefined4 *)(puVar4 + 0x1b);
      *(undefined8 *)((longlong)param_2 + 0xdc) = *(undefined8 *)((longlong)puVar4 + 0xdc);
      uVar1 = *(undefined4 *)((longlong)puVar4 + 0xe4);
      *(undefined4 *)((longlong)param_2 + 0xe4) = uVar1;
      return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 142c6fde0 FUN_142c6fde0 body=31 status=ok
// SIG undefined FUN_142c6fde0(void)

undefined8 * FUN_142c6fde0(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142c6fe00 FUN_142c6fe00 body=232 status=ok
// SIG undefined FUN_142c6fe00(void)

undefined8 * FUN_142c6fe00(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if ((lVar3 != 0) &&
     (cVar1 = *(char *)(param_1 + 0xa0), *(int *)(lVar3 + 0x1d8) != *(int *)(lVar3 + 0x204))) {
    lVar4 = *(longlong *)(lVar3 + 0x210);
    if (*(longlong *)(lVar3 + 0x210) == 0) {
      lVar4 = lVar3 + 0x208;
    }
    iVar2 = *(int *)(lVar4 + ((longlong)*(int *)(lVar3 + 0x218) - 1U & (longlong)cVar1) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(lVar3 + 0x1d0);
      iVar5 = iVar2;
      do {
        if (*(char *)((longlong)iVar5 * 0x20 + lVar3) == cVar1) {
          if (iVar5 != -1) goto joined_r0x000142c6fe9f;
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar3);
      } while (iVar5 != -1);
    }
  }
  goto LAB_142c6fe87;
joined_r0x000142c6fe9f:
  if (iVar2 == -1) goto LAB_142c6febf;
  pcVar6 = (char *)((longlong)iVar2 * 0x20 + lVar3);
  if (*pcVar6 == cVar1) {
    if (iVar2 != -1) goto LAB_142c6fec2;
    goto LAB_142c6febf;
  }
  iVar2 = *(int *)(pcVar6 + 0x18);
  goto joined_r0x000142c6fe9f;
LAB_142c6febf:
  pcVar6 = (char *)0x0;
LAB_142c6fec2:
  if (pcVar6 != (char *)0x0) {
    *param_2 = *(undefined8 *)(pcVar6 + 8);
    lVar3 = *(longlong *)(pcVar6 + 0x10);
    param_2[1] = lVar3;
    if (lVar3 == 0) {
      return param_2;
    }
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    return param_2;
  }
LAB_142c6fe87:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 142c6fef0 FUN_142c6fef0 body=743 status=ok
// SIG undefined FUN_142c6fef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142c6fef0(longlong param_1,longlong *param_2,int param_3)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  uint *puVar11;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *plStack_c0;
  int local_b8;
  uint uStack_b4;
  uint *puStack_b0;
  undefined4 local_a8;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 uStack_78;
  int local_70;
  int local_6c;
  longlong *local_68;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uStack_b4 = 1;
  plVar3 = (longlong *)(param_1 + 0xb8);
  *param_2 = 0;
  puVar1 = (uint *)(param_1 + 200);
  param_2[1] = 0;
  uVar4 = *(uint *)(param_1 + 0xe0);
  local_b8 = 0;
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar4 != 0) {
    puVar11 = *(uint **)(param_1 + 0xd8);
    if (*(uint **)(param_1 + 0xd8) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = *puVar11;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar9 == 0) {
      lVar6 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar8 = local_b8 + 1;
      bVar5 = (int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 <= local_b8;
      local_b8 = iVar8;
      if (bVar5) goto LAB_142c6ffe0;
      uVar9 = puVar11[lVar6 + 1];
    }
    uStack_b4 = -uVar9 & uVar9;
    local_70 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> local_70 == 0; local_70 = local_70 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - local_70;
    }
    uStack_a4 = (iStack_a0 - iVar8) + 0x1f;
    if ((int)uVar4 < (int)uStack_a4) {
LAB_142c6ffe0:
      uStack_a4 = uVar4;
    }
  }
  local_a8 = 0xffffffff;
  uStack_84 = *(uint *)(param_1 + 0xe0);
  uStack_90 = CONCAT44(uStack_b4,local_b8);
  uVar4 = *(uint *)(param_1 + 0xe0);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_a4;
  uStack_78 = CONCAT44(uStack_9c,iStack_a0);
  uStack_88 = -1 << ((byte)uStack_84 & 0x1f);
  local_98 = (int)uStack_84 >> 5;
  uStack_94 = (undefined4)((ulonglong)plVar3 >> 0x20);
  uStack_80 = uStack_84 & 0xffffffe0;
  uStack_7c = uStack_a4;
  iStack_60 = local_b8;
  uStack_5c = uStack_b4;
  puStack_b0 = puVar1;
  local_58 = puVar1;
  local_48 = uStack_78;
  local_68 = plVar3;
  uVar9 = uStack_84;
  if (uStack_84 != uVar4) {
    puVar11 = *(uint **)(param_1 + 0xd8);
    if (*(uint **)(param_1 + 0xd8) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = puVar11[local_98] & uStack_88;
    while (uVar9 == 0) {
      lVar6 = (longlong)local_98;
      uStack_80 = uStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar5 = (int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar5) goto LAB_142c700bb;
      uVar9 = puVar11[lVar6 + 1];
      uStack_88 = 0xffffffff;
    }
    uVar9 = -uVar9 & uVar9;
    local_6c = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> local_6c == 0; local_6c = local_6c + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - local_6c;
    }
    uStack_84 = (uStack_80 - iVar8) + 0x1f;
    uVar9 = uStack_84;
    if ((int)uVar4 < (int)uStack_84) {
LAB_142c700bb:
      uStack_84 = uVar4;
      uVar9 = uVar4;
    }
  }
  do {
    if (((uStack_4c == uVar9) && (local_58 == puVar1)) && (local_68 == plVar3)) {
      return param_2;
    }
    lVar6 = (longlong)(int)uStack_4c * 0x20 + *local_68;
    plVar7 = *(longlong **)(lVar6 + 8);
    plVar10 = plVar7 + (longlong)*(int *)(lVar6 + 0x10) * 2;
    for (; plVar7 != plVar10; plVar7 = plVar7 + 2) {
      lVar6 = *plVar7;
      if ((lVar6 != 0) && (*(int *)(lVar6 + 0xa4) == param_3)) {
        plVar3 = (longlong *)plVar7[1];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        local_c8 = lVar6;
        plStack_c0 = plVar3;
        if (&local_c8 != param_2) {
          local_c8 = *param_2;
          plStack_c0 = (longlong *)param_2[1];
          *param_2 = lVar6;
          param_2[1] = (longlong)plVar3;
          local_40 = lVar6;
          plStack_38 = plVar3;
        }
        plVar3 = plStack_c0;
        if (plStack_c0 == (longlong *)0x0) {
          return param_2;
        }
        LOCK();
        plVar7 = plStack_c0 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar6 != 1) {
          return param_2;
        }
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 != 1) {
          return param_2;
        }
        (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
        return param_2;
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  } while( true );
}



// FUNCTION 142c701e0 FUN_142c701e0 body=136 status=ok
// SIG undefined FUN_142c701e0(void)

longlong FUN_142c701e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  FWeakObjectPtr::operator=(&local_res20);
  cVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if (cVar1 == '\0') {
    return 0;
  }
  local_18[0] = local_res20;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x390,local_res18,local_18);
  if (local_res18[0] == -1) {
    return 0;
  }
  lVar3 = (longlong)local_res18[0] * 0x20 + *(longlong *)(param_1 + 0x390);
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 142c70270 FUN_142c70270 body=68 status=ok
// SIG undefined FUN_142c70270(void)

float FUN_142c70270(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return 0.0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x120);
  if ((lVar1 == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
    return 0.0;
  }
  return *(float *)(lVar1 + 0x798) - *(float *)(param_1 + 0x34);
}



// FUNCTION 142c702c0 GetDefaultUserFocus body=32 status=ok
// SIG undefined GetDefaultUserFocus(void)

undefined8 UCreditsWidget::GetDefaultUserFocus(undefined8 param_1,undefined8 param_2)

{
  FUN_142d61120(param_2,param_1,0);
  return param_2;
}



// FUNCTION 142c702e0 FUN_142c702e0 body=24 status=ok
// SIG undefined FUN_142c702e0(void)

undefined4 * FUN_142c702e0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  param_2[2] = *(undefined4 *)(param_1 + 0x10);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 142c70300 GetSizeXY body=14 status=ok
// SIG undefined GetSizeXY(void)

undefined8 * FManaTextureResource::GetSizeXY(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0xb0);
  return param_2;
}



// FUNCTION 142c70310 FUN_142c70310 body=136 status=ok
// SIG undefined FUN_142c70310(void)

float FUN_142c70310(longlong param_1,undefined2 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  
  if (param_3 != 0) {
    lVar1 = UAnimNotify::GetPrivateStaticClass();
    lVar3 = param_3;
    do {
      if (lVar3 == lVar1) goto LAB_142c70345;
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  param_3 = 0;
LAB_142c70345:
  uVar2 = FUN_142c6f640(param_1,param_2);
  lVar3 = FUN_142c9e5b0(uVar2,param_3);
  if (lVar3 != 0) {
    fVar4 = (float)FAnimNotifyEvent::GetTriggerTime(lVar3);
    return fVar4 / *(float *)(param_1 + 0x4f0);
  }
  return -1.0;
}



// FUNCTION 142c703a0 FUN_142c703a0 body=82 status=ok
// SIG undefined FUN_142c703a0(void)

ulonglong FUN_142c703a0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x28);
  uVar4 = 0;
  plVar3 = (longlong *)(longlong)iVar1;
  if (0 < iVar1) {
    plVar3 = *(longlong **)(param_1 + 0x20);
    uVar6 = uVar4;
    do {
      if ((*plVar3 == *param_2) && ((char)plVar3[1] == '\x01')) {
        plVar3 = (longlong *)(longlong)(int)uVar6;
        plVar5 = *(longlong **)(param_1 + 0x20) + (longlong)plVar3 * 7;
        if (plVar5 != (longlong *)0x0) {
          uVar2 = *(undefined4 *)((longlong)plVar5 + 0xc);
          *param_3 = uVar2;
          return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
        }
        break;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 7;
    } while ((longlong)uVar4 < (longlong)iVar1);
  }
  return (ulonglong)plVar3 & 0xffffffffffffff00;
}



// FUNCTION 142c70400 thunk_FUN_142d60a40 body=5 status=ok
// SIG undefined thunk_FUN_142d60a40(void)

undefined4 thunk_FUN_142d60a40(longlong param_1)

{
  undefined4 uVar1;
  undefined4 auStackX_8 [8];
  
  auStackX_8[0] = 0;
  uVar1 = 0;
  if (param_1 != 0) {
    FUN_142c703a0(0,&DAT_146b32188,auStackX_8);
    uVar1 = auStackX_8[0];
  }
  return uVar1;
}



// FUNCTION 142c70410 FUN_142c70410 body=209 status=ok
// SIG undefined FUN_142c70410(void)

longlong FUN_142c70410(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  
  UObjectBaseUtility::IsTemplate(param_1 + -0x28,0x30);
  iVar1 = *(int *)(param_1 + -0x1c);
  lVar6 = 0;
  lVar3 = lVar6;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar7 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar7;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar7) * 0x18;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    lVar3 = FUN_1406d4330(param_1 + -0x28);
    if ((*(longlong *)(lVar3 + 0x18) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x118), lVar3 != 0)) {
      uVar4 = UGameplayTaskOwnerInterface::StaticClass();
      plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
      if (plVar5 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
      }
    }
    return lVar6;
  }
  return 0;
}



// FUNCTION 142c704f0 FUN_142c704f0 body=176 status=ok
// SIG undefined FUN_142c704f0(void)

undefined8 FUN_142c704f0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  
  UObjectBaseUtility::IsTemplate(param_1 + -0x28,0x30);
  iVar1 = *(int *)(param_1 + -0x1c);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar6 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar6;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    lVar3 = FUN_1406d4330(param_1 + -0x28);
    if ((*(longlong *)(lVar3 + 0x18) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x118), lVar3 != 0)) {
      uVar4 = UGameplayTaskOwnerInterface::StaticClass();
      plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
      if (plVar5 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142c7058f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar5 + 0x28))(plVar5);
        return uVar4;
      }
    }
  }
  return 0x7f;
}



// FUNCTION 142c705a0 FUN_142c705a0 body=209 status=ok
// SIG undefined FUN_142c705a0(void)

longlong FUN_142c705a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  
  UObjectBaseUtility::IsTemplate(param_1 + -0x28,0x30);
  iVar1 = *(int *)(param_1 + -0x1c);
  lVar6 = 0;
  lVar3 = lVar6;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar7 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar7;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar7) * 0x18;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    lVar3 = FUN_1406d4330(param_1 + -0x28);
    if ((*(longlong *)(lVar3 + 0x18) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x118), lVar3 != 0)) {
      uVar4 = UGameplayTaskOwnerInterface::StaticClass();
      plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
      if (plVar5 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
      }
    }
    return lVar6;
  }
  return 0;
}



// FUNCTION 142c70680 FUN_142c70680 body=209 status=ok
// SIG undefined FUN_142c70680(void)

longlong FUN_142c70680(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  
  UObjectBaseUtility::IsTemplate(param_1 + -0x28,0x30);
  iVar1 = *(int *)(param_1 + -0x1c);
  lVar6 = 0;
  lVar3 = lVar6;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar7 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar7;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar7) * 0x18;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    lVar3 = FUN_1406d4330(param_1 + -0x28);
    if ((*(longlong *)(lVar3 + 0x18) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x118), lVar3 != 0)) {
      uVar4 = UGameplayTaskOwnerInterface::StaticClass();
      plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
      if (plVar5 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,param_2);
      }
    }
    return lVar6;
  }
  return 0;
}



// FUNCTION 142c70760 FUN_142c70760 body=70 status=ok
// SIG undefined FUN_142c70760(void)

undefined8
FUN_142c70760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  
  puVar1 = (undefined8 *)FUN_142c71200(param_1,local_res10);
  FUN_142c707b0(param_1,param_2,*puVar1,param_4);
  return param_2;
}



// FUNCTION 142c707b0 FUN_142c707b0 body=243 status=ok
// SIG undefined FUN_142c707b0(void)

undefined8 *
FUN_142c707b0(undefined8 param_1,undefined8 *param_2,longlong *param_3,longlong param_4)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_3 != (longlong *)0x0) {
    plVar2 = (longlong *)FUN_142e20fc0();
    plVar4 = param_3;
    do {
      if (plVar4 == plVar2) {
        *(undefined8 *)(param_4 + 0x18) = param_1;
        plVar2 = (longlong *)FUN_142e20fc0();
        plVar4 = param_3;
        goto LAB_142c70820;
      }
      plVar4 = (longlong *)plVar4[6];
    } while (plVar4 != (longlong *)0x0);
  }
  *param_2 = 0;
  return param_2;
  while (plVar4 = (longlong *)plVar4[6], plVar4 != (longlong *)0x0) {
LAB_142c70820:
    if (plVar4 == plVar2) goto LAB_142c70830;
  }
  param_3 = (longlong *)0x0;
LAB_142c70830:
  plVar4 = (longlong *)param_3[0x1f];
  if (plVar4 == (longlong *)0x0) {
    (**(code **)(*param_3 + 0x368))(param_3);
    plVar4 = (longlong *)param_3[0x1f];
    if (plVar4 != (longlong *)0x0) goto LAB_142c70854;
  }
  else {
LAB_142c70854:
    lVar3 = FUN_142e20fc0();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142c7088c;
  }
  plVar4 = (longlong *)0x0;
LAB_142c7088c:
  (**(code **)(*plVar4 + 0x278))(plVar4,param_2,param_4);
  return param_2;
}



// FUNCTION 142c708b0 FUN_142c708b0 body=512 status=ok
// SIG undefined FUN_142c708b0(void)

undefined8 * FUN_142c708b0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  
  if (*(longlong *)(param_3 + 0x18) != 0) {
    iVar9 = 0;
    if (0 < *(int *)(param_3 + 0x28)) {
      plVar4 = *(longlong **)(param_3 + 0x20);
      plVar8 = plVar4 + 1;
      plVar6 = plVar4;
      do {
        if ((*plVar6 == DAT_146b2fcc0) && ((char)*plVar8 == '\x03')) {
          if ((plVar4 + (longlong)iVar9 * 7 != (longlong *)0x0) &&
             (lVar5 = (plVar4 + (longlong)iVar9 * 7)[3], lVar5 != 0)) goto LAB_142c70932;
          break;
        }
        iVar9 = iVar9 + 1;
        plVar6 = plVar6 + 7;
        plVar8 = plVar8 + 7;
      } while (iVar9 < *(int *)(param_3 + 0x28));
    }
    lVar5 = *(longlong *)(*(longlong *)(param_3 + 0x18) + 0x118);
    if (lVar5 != 0) {
LAB_142c70932:
      if (*(char *)(param_1 + 0x60) == '\0') {
        plVar8 = *(longlong **)(param_1 + 0x68);
        plVar4 = plVar8 + (longlong)*(int *)(param_1 + 0x70) * 2;
        for (; plVar8 != plVar4; plVar8 = plVar8 + 2) {
          if ((*plVar8 == 0) || (cVar2 = FUN_142c48f60(*plVar8,lVar5,0), cVar2 != '\0')) {
            plVar6 = (longlong *)plVar8[1];
            if (plVar6 != (longlong *)0x0) {
              plVar3 = (longlong *)FUN_142e20fc0();
              plVar7 = plVar6;
              do {
                if (plVar7 == plVar3) {
                  plVar4 = (longlong *)FUN_142e20fc0();
                  plVar8 = plVar6;
                  goto LAB_142c70a13;
                }
                plVar7 = (longlong *)plVar7[6];
              } while (plVar7 != (longlong *)0x0);
            }
            if ((*(longlong *)(param_1 + 0x10) != 0) &&
               (*(longlong *)(*(longlong *)(param_1 + 0x10) + 200) != 0)) break;
          }
        }
        *param_2 = 0;
        return param_2;
      }
      if (*(char *)(param_1 + 0x60) == '\x01') {
        FUN_142c72010(param_1,param_2,lVar5,param_3);
        return param_2;
      }
    }
  }
  *param_2 = 0;
  return param_2;
  while (plVar8 = (longlong *)plVar8[6], plVar8 != (longlong *)0x0) {
LAB_142c70a13:
    if (plVar8 == plVar4) goto LAB_142c70a23;
  }
  plVar6 = (longlong *)0x0;
LAB_142c70a23:
  plVar8 = (longlong *)plVar6[0x1f];
  if (plVar8 == (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    plVar8 = (longlong *)plVar6[0x1f];
    if (plVar8 != (longlong *)0x0) goto LAB_142c70a47;
  }
  else {
LAB_142c70a47:
    lVar5 = FUN_142e20fc0();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142c70a7f;
  }
  plVar8 = (longlong *)0x0;
LAB_142c70a7f:
  (**(code **)(*plVar8 + 0x278))(plVar8,param_2,param_3);
  return param_2;
}



// FUNCTION 142c70ab0 FUN_142c70ab0 body=1094 status=ok
// SIG undefined FUN_142c70ab0(void)

longlong * FUN_142c70ab0(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined8 local_res8;
  undefined8 local_98;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_80;
  
  lVar6 = 0;
  if (*(longlong *)(param_3 + 0x18) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_3 + 0x18) + 0x118);
  }
  if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x168), lVar6 != 0)) {
    fVar12 = *(float *)(lVar6 + 0x210);
    local_98 = *(undefined8 *)(lVar6 + 0x210);
    fStack_90 = *(float *)(lVar6 + 0x218);
    fStack_8c = *(float *)(lVar6 + 0x21c);
    auVar16._4_4_ = -(uint)(*(float *)(lVar6 + 0x254) != *(float *)(lVar6 + 0x214));
    auVar16._0_4_ = -(uint)(*(float *)(lVar6 + 0x250) != fVar12);
    auVar16._8_4_ = -(uint)(*(float *)(lVar6 + 600) != fStack_90);
    auVar16._12_4_ = -(uint)(*(float *)(lVar6 + 0x25c) != fStack_8c);
    iVar2 = movmskps((int)&stack0x00000000,auVar16);
    if (iVar2 != 0) {
      *(float *)(lVar6 + 0x250) = fVar12;
      *(float *)(lVar6 + 0x254) = *(float *)(lVar6 + 0x214);
      *(float *)(lVar6 + 600) = fStack_90;
      *(float *)(lVar6 + 0x25c) = fStack_8c;
      puVar3 = (undefined8 *)FQuat::Rotator(&local_98,&local_88);
      *(undefined8 *)(lVar6 + 0x260) = *puVar3;
      *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(puVar3 + 1);
    }
  }
  plVar8 = *(longlong **)(param_3 + 0x20);
  local_98 = 0;
  plVar4 = plVar8 + (longlong)*(int *)(param_3 + 0x28) * 7;
  fStack_90 = 0.0;
  for (; plVar8 != plVar4; plVar8 = plVar8 + 7) {
    lVar6 = *plVar8;
    if ((lVar6 == DAT_146b32198) && ((char)plVar8[1] == '\x01')) {
      uVar1 = (ulonglong)local_98 >> 0x20;
      local_98 = CONCAT44((int)uVar1,*(undefined4 *)((longlong)plVar8 + 0xc));
      lVar6 = *plVar8;
    }
    if ((lVar6 == DAT_146b321a0) && ((char)plVar8[1] == '\x01')) {
      local_98 = CONCAT44(*(undefined4 *)((longlong)plVar8 + 0xc),(undefined4)local_98);
      lVar6 = *plVar8;
    }
    if ((lVar6 == DAT_146b321a8) && ((char)plVar8[1] == '\x01')) {
      fStack_90 = *(float *)((longlong)plVar8 + 0xc);
    }
  }
  plVar8 = (longlong *)0x0;
  if (*(longlong *)(param_3 + 0x18) != 0) {
    plVar8 = *(longlong **)(*(longlong *)(param_3 + 0x18) + 0x118);
  }
  if ((plVar8 != (longlong *)0x0) &&
     (plVar4 = (longlong *)(**(code **)(*plVar8 + 0x668))(plVar8), plVar4 != (longlong *)0x0)) {
    uVar5 = FUN_142e79600();
    lVar6 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
    if (lVar6 != 0) {
      uVar5 = FUN_142dcd660(lVar6,0);
      goto LAB_142c70c38;
    }
  }
  uVar5 = 0;
LAB_142c70c38:
  local_res8 = 0;
  FUN_142da9940(param_1 + 0x70,&local_88,&local_98,plVar8,&local_res8,uVar5);
  fVar13 = local_84 * local_84 + local_88 * local_88 + local_80 * local_80;
  fVar15 = local_88;
  fVar14 = local_84;
  fVar12 = local_80;
  if ((fVar13 != 1.0) &&
     (fVar15 = DAT_1468b5d90, fVar14 = DAT_1468b5d94, fVar12 = DAT_1468b5d98, 1e-08 <= fVar13)) {
    auVar16 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
    fVar12 = auVar16._0_4_;
    fVar12 = fVar12 + fVar12 * (0.5 - fVar13 * 0.5 * fVar12 * fVar12);
    fVar12 = fVar12 + fVar12 * (0.5 - fVar13 * 0.5 * fVar12 * fVar12);
    local_res8 = CONCAT44(local_res8._4_4_,fVar12);
    fVar15 = local_88 * fVar12;
    fVar14 = local_84 * fVar12;
    fVar12 = local_80 * fVar12;
  }
  if (*(int *)(param_1 + 0xc0) == 0) {
    fVar12 = fVar14;
  }
  fVar12 = (float)FGenericPlatformMath::Atan2(fVar12,fVar15);
  pfVar10 = *(float **)(param_1 + 0x60);
  pfVar11 = pfVar10 + (longlong)*(int *)(param_1 + 0x68) * 4;
  *param_2 = 0;
  do {
    if (pfVar10 == pfVar11) {
      return param_2;
    }
    if (*(longlong *)(pfVar10 + 2) != 0) {
      plVar7 = (longlong *)FUN_142e20fc0();
      plVar8 = *(longlong **)(pfVar10 + 2);
      for (plVar4 = plVar8; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[6]) {
        if (plVar4 == plVar7) {
          fVar14 = *pfVar10 - fVar12 * 57.295776;
          fVar15 = (float)(int)(fVar14 * 0.0027777778) * 360.0;
          if (ABS(fVar14) < ABS(fVar15)) {
            fVar15 = fVar14;
          }
          fVar14 = fVar14 - fVar15;
          if (fVar14 < 0.0) {
            fVar14 = fVar14 + 360.0;
          }
          if (180.0 < fVar14) {
            fVar14 = fVar14 - 360.0;
          }
          if ((pfVar10[1] <= ABS(fVar14) && ABS(fVar14) != pfVar10[1]) ||
             (plVar8 == (longlong *)0x0)) break;
          plVar4 = (longlong *)plVar8[0x1f];
          if (plVar4 == (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x368))(plVar8);
            plVar4 = (longlong *)plVar8[0x1f];
            if (plVar4 == (longlong *)0x0) break;
          }
          plVar8 = (longlong *)(**(code **)(*plVar4 + 0x278))(plVar4,&local_res8,param_3);
          lVar6 = *plVar8;
          *param_2 = lVar6;
          if (lVar6 != 0) {
            lVar9 = FUN_142e20fc0();
            lVar6 = *param_2;
            goto joined_r0x000142c70e8e;
          }
          break;
        }
      }
    }
LAB_142c70ea5:
    pfVar10 = pfVar10 + 4;
  } while( true );
joined_r0x000142c70e8e:
  if (lVar6 == 0) goto LAB_142c70ea5;
  if (lVar6 == lVar9) {
    if (*param_2 != 0) {
      return param_2;
    }
    goto LAB_142c70ea5;
  }
  lVar6 = *(longlong *)(lVar6 + 0x30);
  goto joined_r0x000142c70e8e;
}



// FUNCTION 142c70f00 FUN_142c70f00 body=175 status=ok
// SIG undefined FUN_142c70f00(void)

undefined8 * FUN_142c70f00(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *local_res18 [2];
  
  if (*(longlong *)(param_3 + 0x18) != 0) {
    FUN_142c71200(*(longlong *)(param_3 + 0x18),local_res18,*(undefined8 *)(param_1 + 0x60));
    if (local_res18[0] != (longlong *)0x0) {
      plVar1 = (longlong *)FUN_142e20fc0();
      plVar2 = local_res18[0];
      do {
        if (plVar2 == plVar1) {
          plVar2 = (longlong *)local_res18[0][0x1f];
          if (plVar2 == (longlong *)0x0) {
            (**(code **)(*local_res18[0] + 0x368))(local_res18[0]);
            plVar2 = (longlong *)local_res18[0][0x1f];
            if (plVar2 == (longlong *)0x0) break;
          }
          (**(code **)(*plVar2 + 0x278))(plVar2,param_2,param_3);
          return param_2;
        }
        plVar2 = (longlong *)plVar2[6];
      } while (plVar2 != (longlong *)0x0);
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142c70fb0 FUN_142c70fb0 body=462 status=ok
// SIG undefined FUN_142c70fb0(void)

undefined8 * FUN_142c70fb0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  
  if (*(longlong *)(param_3 + 0x18) != 0) {
    fVar11 = 0.0;
    fVar10 = 0.0;
    lVar3 = *(longlong *)(param_1 + 0x60);
    lVar8 = (longlong)*(int *)(param_1 + 0x68) * 0x10 + lVar3;
    for (; lVar3 != lVar8; lVar3 = lVar3 + 0x10) {
      fVar10 = fVar10 + *(float *)(lVar3 + 8);
    }
    iVar2 = rand();
    plVar7 = *(longlong **)(param_1 + 0x60);
    plVar9 = plVar7 + (longlong)*(int *)(param_1 + 0x68) * 2;
    fVar10 = (float)iVar2 * 3.051851e-05 * fVar10;
    if (plVar7 != plVar9) {
LAB_142c71060:
      if ((fVar11 <= fVar10) && (fVar10 <= fVar11 + *(float *)(plVar7 + 1))) {
        plVar6 = (longlong *)*plVar7;
        if (plVar6 != (longlong *)0x0) {
          plVar4 = (longlong *)FUN_142e20fc0();
          plVar5 = plVar6;
          do {
            if (plVar5 == plVar4) {
              plVar4 = (longlong *)FUN_142e20fc0();
              plVar5 = plVar6;
              goto LAB_142c710a8;
            }
            plVar5 = (longlong *)plVar5[6];
          } while (plVar5 != (longlong *)0x0);
        }
        goto LAB_142c71112;
      }
      goto LAB_142c71125;
    }
  }
LAB_142c71137:
  *param_2 = 0;
  return param_2;
  while (plVar5 = (longlong *)plVar5[6], plVar5 != (longlong *)0x0) {
LAB_142c710a8:
    if (plVar5 == plVar4) goto LAB_142c710b8;
  }
  plVar6 = (longlong *)0x0;
LAB_142c710b8:
  plVar5 = (longlong *)plVar6[0x1f];
  if (plVar5 == (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    plVar5 = (longlong *)plVar6[0x1f];
    if (plVar5 == (longlong *)0x0) goto LAB_142c71112;
  }
  lVar3 = FUN_142e20fc0();
  if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    (**(code **)(*plVar5 + 0x278))(plVar5,param_2,param_3);
    return param_2;
  }
LAB_142c71112:
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 200) != 0)) goto LAB_142c71137;
LAB_142c71125:
  fVar11 = fVar11 + *(float *)(plVar7 + 1);
  plVar7 = plVar7 + 2;
  if (plVar7 == plVar9) goto LAB_142c71137;
  goto LAB_142c71060;
}



// FUNCTION 142c71180 FUN_142c71180 body=29 status=ok
// SIG undefined FUN_142c71180(void)

undefined8 FUN_142c71180(undefined8 param_1,undefined8 param_2)

{
  FUN_142d61350(param_2,param_1);
  return param_2;
}



// FUNCTION 142c711a0 FUN_142c711a0 body=82 status=ok
// SIG undefined FUN_142c711a0(void)

ulonglong FUN_142c711a0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x28);
  uVar4 = 0;
  plVar3 = (longlong *)(longlong)iVar1;
  if (0 < iVar1) {
    plVar3 = *(longlong **)(param_1 + 0x20);
    uVar6 = uVar4;
    do {
      if ((*plVar3 == *param_2) && ((char)plVar3[1] == '\x02')) {
        plVar3 = (longlong *)(longlong)(int)uVar6;
        plVar5 = *(longlong **)(param_1 + 0x20) + (longlong)plVar3 * 7;
        if (plVar5 != (longlong *)0x0) {
          uVar2 = (undefined4)plVar5[2];
          *param_3 = uVar2;
          return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
        }
        break;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 7;
    } while ((longlong)uVar4 < (longlong)iVar1);
  }
  return (ulonglong)plVar3 & 0xffffffffffffff00;
}



// FUNCTION 142c71200 FUN_142c71200 body=212 status=ok
// SIG undefined FUN_142c71200(void)

undefined8 * FUN_142c71200(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 400);
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x198) * 2;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    if (puVar1[1] == param_3) goto LAB_142c712ca;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x1a0);
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x1a8) * 2;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    if (puVar1[1] == param_3) goto LAB_142c712ca;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x1b0);
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x1b8) * 2;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    if (puVar1[1] == param_3) goto LAB_142c712ca;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x1c0);
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x1c8) * 3;
  while( true ) {
    if (puVar1 == puVar2) {
      *param_2 = 0;
      return param_2;
    }
    if (puVar1[1] == param_3) break;
    puVar1 = puVar1 + 3;
  }
LAB_142c712ca:
  *param_2 = *puVar1;
  return param_2;
}



// FUNCTION 142c712e0 FUN_142c712e0 body=114 status=ok
// SIG undefined FUN_142c712e0(void)

undefined8 * FUN_142c712e0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != (longlong *)0x0) {
    uVar1 = FUN_142e27720();
    lVar2 = (**(code **)(*param_3 + 0x628))(param_3,uVar1);
    if (lVar2 != 0) {
      FUN_142c71200(lVar2,param_1,param_2);
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 142c71360 FUN_142c71360 body=68 status=ok
// SIG undefined FUN_142c71360(void)

undefined8 * FUN_142c71360(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x1c0);
  puVar1 = puVar2 + (longlong)*(int *)(param_1 + 0x1c8) * 3;
  while( true ) {
    if (puVar2 == puVar1) {
      *param_2 = 0;
      return param_2;
    }
    if (puVar2[1] == param_3) break;
    puVar2 = puVar2 + 3;
  }
  *param_2 = *puVar2;
  return param_2;
}



// FUNCTION 142c713b0 FUN_142c713b0 body=55 status=ok
// SIG undefined FUN_142c713b0(void)

undefined8 FUN_142c713b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x1c0);
  lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x1c8) * 0x18;
  while( true ) {
    if (lVar2 == lVar1) {
      return 0;
    }
    if (*(longlong *)(lVar2 + 8) == param_2) break;
    lVar2 = lVar2 + 0x18;
  }
  return *(undefined8 *)(lVar2 + 0x10);
}



// FUNCTION 142c713f0 FUN_142c713f0 body=116 status=ok
// SIG undefined FUN_142c713f0(void)

undefined8 * FUN_142c713f0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x1a0);
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x1a8) * 2;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    if (puVar1[1] == param_3) goto LAB_142c7145a;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x1b0);
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x1b8) * 2;
  while( true ) {
    if (puVar1 == puVar2) {
      *param_2 = 0;
      return param_2;
    }
    if (puVar1[1] == param_3) break;
    puVar1 = puVar1 + 2;
  }
LAB_142c7145a:
  *param_2 = *puVar1;
  return param_2;
}



// FUNCTION 142c71470 FUN_142c71470 body=232 status=ok
// SIG undefined FUN_142c71470(void)

void FUN_142c71470(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b2ff00) && (_Init_thread_header(&DAT_146b2ff00), DAT_146b2ff00 == -1))
  {
    uVar1 = FUN_142e28330();
    FUN_142e28330();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ActionRepWrapper",1);
    DAT_146b2fef8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b2ff00);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b2fef8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b2fef8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b2fef8 + 0x30));
  }
  return;
}



// FUNCTION 142c71560 FUN_142c71560 body=102 status=ok
// SIG undefined FUN_142c71560(void)

undefined4 FUN_142c71560(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x188) != '\0') {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x18c);
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar2 = 0;
    plVar1 = *(longlong **)(param_1 + 0x20);
    do {
      if ((*plVar1 == DAT_146b2fd08) && ((char)plVar1[1] == '\x02')) {
        plVar1 = *(longlong **)(param_1 + 0x20) + (longlong)iVar3 * 7;
        if (plVar1 == (longlong *)0x0) {
          return 0;
        }
        return (int)plVar1[2];
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 1;
      plVar1 = plVar1 + 7;
    } while (lVar2 < *(int *)(param_1 + 0x28));
  }
  return 0;
}



// FUNCTION 142c715d0 FUN_142c715d0 body=102 status=ok
// SIG undefined FUN_142c715d0(void)

undefined4 FUN_142c715d0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x180) != '\0') {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x184);
  }
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    plVar1 = *(longlong **)(param_1 + 0x20);
    uVar3 = uVar2;
    do {
      if ((*plVar1 == DAT_146b2fd00) && ((char)plVar1[1] == '\x01')) {
        plVar1 = *(longlong **)(param_1 + 0x20) + (longlong)(int)uVar3 * 7;
        if (plVar1 == (longlong *)0x0) {
          return 0;
        }
        return *(undefined4 *)((longlong)plVar1 + 0xc);
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 7;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x28));
  }
  return 0;
}



// FUNCTION 142c71640 FUN_142c71640 body=100 status=ok
// SIG undefined FUN_142c71640(void)

longlong FUN_142c71640(longlong param_1,short param_2)

{
  if (param_2 == 0x10) {
    return (longlong)*(int *)(param_1 + 0x460) * 0xc0 + *(longlong *)(param_1 + 0x430);
  }
  if (param_2 == 1) {
    return param_1 + 0x120;
  }
  if (param_2 == 2) {
    return param_1 + 0x1e0;
  }
  if (param_2 != 4) {
    if (param_2 != 8) {
      return param_1 + 0x60;
    }
    return param_1 + 0x360;
  }
  return param_1 + 0x2a0;
}



// FUNCTION 142c716b0 FUN_142c716b0 body=102 status=ok
// SIG undefined FUN_142c716b0(void)

undefined4 FUN_142c716b0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 400) != '\0') {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x194);
  }
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    plVar1 = *(longlong **)(param_1 + 0x20);
    uVar3 = uVar2;
    do {
      if ((*plVar1 == DAT_146b2fd10) && ((char)plVar1[1] == '\x01')) {
        plVar1 = *(longlong **)(param_1 + 0x20) + (longlong)(int)uVar3 * 7;
        if (plVar1 == (longlong *)0x0) {
          return 0;
        }
        return *(undefined4 *)((longlong)plVar1 + 0xc);
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 7;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x28));
  }
  return 0;
}



// FUNCTION 142c71720 FUN_142c71720 body=783 status=ok
// SIG undefined FUN_142c71720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_142c71720(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  int iStack_80;
  uint uStack_7c;
  undefined4 local_78;
  int iStack_74;
  uint uStack_70;
  int iStack_6c;
  int local_68;
  undefined4 uStack_64;
  undefined8 *local_60;
  int iStack_58;
  uint uStack_54;
  undefined *puStack_50;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  if (param_1 == 0) {
    if (DAT_1466acd48 - _DAT_1466acd74 == 1) {
      local_98 = (undefined8 *)0x0;
      local_90 = (undefined8 *)0x0;
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_98,1);
      local_88._0_4_ = 0;
      local_88._4_4_ = 1;
      iStack_74 = 0;
      uStack_70 = 0;
      iVar5 = (int)DAT_1466acd68;
      if (iVar5 != 0) {
        puVar11 = DAT_1466acd60;
        if (DAT_1466acd60 == (uint *)0x0) {
          puVar11 = (uint *)&DAT_1466acd50;
        }
        uVar2 = *puVar11;
        uStack_70 = 0;
        local_88._0_4_ = 0;
        while (uVar2 == 0) {
          lVar8 = (longlong)(int)local_88;
          uStack_70 = uStack_70 + 0x20;
          iVar9 = (int)local_88 + 1;
          bVar3 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_88;
          local_88._0_4_ = iVar9;
          if (bVar3) goto LAB_142c7180c;
          uVar2 = puVar11[lVar8 + 1];
        }
        local_88._4_4_ = -uVar2 & uVar2;
        iVar9 = 0x1f;
        if (local_88._4_4_ != 0) {
          for (; local_88._4_4_ >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        if (local_88._4_4_ == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        iStack_74 = (uStack_70 - iVar9) + 0x1f;
        if (iVar5 < iStack_74) {
LAB_142c7180c:
          iStack_74 = iVar5;
        }
      }
      iVar9 = iStack_74;
      uStack_7c = local_88._4_4_;
      iStack_80 = (int)local_88;
      local_60 = &DAT_1466acd40;
      iStack_58 = (int)local_88;
      uStack_54 = local_88._4_4_;
      puStack_50 = &DAT_1466acd50;
      uStack_48 = 0xffffffff;
      iStack_44 = iStack_74;
      iStack_40 = uStack_70;
      uStack_3c = iStack_6c;
      local_88 = &DAT_1466acd40;
      local_68 = uStack_70;
      uStack_64 = iStack_6c;
      local_78 = 0x466acd50;
      iStack_74 = 1;
      uStack_70 = 0xffffffff;
      iStack_6c = iVar9;
      puVar10 = local_98;
      if (iVar9 < iVar5) {
        do {
          iVar5 = iStack_6c;
          uVar4 = (ulonglong)local_90;
          lVar8 = (longlong)(int)local_90;
          iVar9 = (int)local_90 + 1;
          local_90 = (undefined8 *)CONCAT44(local_90._4_4_,iVar9);
          if (local_90._4_4_ < iVar9) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_98,uVar4 & 0xffffffff);
            puVar10 = local_98;
          }
          puVar1 = puVar10 + lVar8;
          if (puVar1 != (undefined8 *)0x0) {
            lVar8 = *local_88;
            *(undefined4 *)puVar1 = *(undefined4 *)(lVar8 + 8 + (longlong)iVar5 * 0x18);
            *(undefined4 *)((longlong)puVar1 + 4) =
                 *(undefined4 *)(lVar8 + 0xc + (longlong)iVar5 * 0x18);
          }
          uStack_70 = uStack_70 & ~uStack_7c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
        } while (iStack_6c < *(int *)(CONCAT44(iStack_74,local_78) + 0x18));
      }
      lVar8 = FWeakObjectPtr::Get(puVar10);
      if (lVar8 != 0) {
        if (puVar10 == (undefined8 *)0x0) {
          return lVar8;
        }
        FMemory::Free(puVar10);
        return lVar8;
      }
      if (puVar10 != (undefined8 *)0x0) {
        FMemory::Free(puVar10);
      }
    }
  }
  else if (((((*(uint *)(param_1 + 0x830) & 0x400) == 0) && (DAT_146b17150 != 0)) &&
           (lVar8 = FUN_1428761d0(DAT_146b17150,param_1), lVar8 != 0)) &&
          (*(char *)(lVar8 + 8) == '\0')) {
    FWeakObjectPtr::operator=(&local_res18,param_1);
    local_res20 = local_res18;
    TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::FindId(&DAT_1466acd40,local_res8,&local_res20);
    if ((local_res8[0] == -1) ||
       (lVar8 = DAT_1466acd40 + (longlong)local_res8[0] * 0x18, lVar8 == 0)) {
      local_res10 = 0xffffffff;
      local_res14 = 0;
    }
    else {
      local_res10 = *(undefined4 *)(lVar8 + 8);
      local_res14 = *(undefined4 *)(lVar8 + 0xc);
    }
    lVar8 = FWeakObjectPtr::Get(&local_res10);
    iVar5 = FUN_1428cf800(param_1);
    if ((iVar5 != 3) && (lVar8 == 0)) {
      uVar6 = FActorSpawnParameters::FActorSpawnParameters(&local_60);
      uVar7 = FUN_142e28330();
      lVar8 = UWorld::SpawnActor(param_1,uVar7,0,0,uVar6);
      FWeakObjectPtr::operator=(&local_res20,lVar8);
      FWeakObjectPtr::operator=(&local_res18,param_1);
      local_98 = &local_res18;
      local_90 = &local_res20;
      FUN_142c60d30(&DAT_1466acd40,local_res8,&local_98,0);
      return lVar8;
    }
    return lVar8;
  }
  return 0;
}



// FUNCTION 142c71a30 FUN_142c71a30 body=10 status=ok
// SIG undefined FUN_142c71a30(void)

void FUN_142c71a30(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142c71a33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))();
  return;
}



// FUNCTION 142c71a40 FUN_142c71a40 body=168 status=ok
// SIG undefined FUN_142c71a40(void)

float FUN_142c71a40(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  plVar1 = (longlong *)FUN_142c6f640(param_1,1);
  fVar2 = (float)FUN_142c816b0(param_1);
  fVar4 = 0.0;
  if (plVar1 != (longlong *)0x0) {
    fVar3 = (float)(**(code **)(*plVar1 + 0x280))(plVar1);
    fVar4 = 0.0;
    if (0.0 < fVar3) {
      fVar4 = (float)(**(code **)(*plVar1 + 0x280))(plVar1);
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x161) == '\0') goto LAB_142c71ab8;
    }
  }
  if (0.0 < fVar2) {
    fVar4 = fVar2;
  }
LAB_142c71ab8:
  if (*(float *)(param_1 + 0x4f0) != 0.0) {
    fVar4 = fVar4 / *(float *)(param_1 + 0x4f0);
  }
  return fVar4;
}



// FUNCTION 142c71af0 FUN_142c71af0 body=101 status=ok
// SIG undefined FUN_142c71af0(void)

undefined8 FUN_142c71af0(longlong param_1,short param_2)

{
  if (param_2 == 0x10) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x420) + (longlong)*(int *)(param_1 + 0x460) * 8)
    ;
  }
  if (param_2 == 1) {
    return *(undefined8 *)(param_1 + 0x100);
  }
  if (param_2 == 2) {
    return *(undefined8 *)(param_1 + 0x108);
  }
  if (param_2 != 4) {
    if (param_2 != 8) {
      return *(undefined8 *)(param_1 + 0xf8);
    }
    return *(undefined8 *)(param_1 + 0x118);
  }
  return *(undefined8 *)(param_1 + 0x110);
}



// FUNCTION 142c71b60 FUN_142c71b60 body=182 status=ok
// SIG undefined FUN_142c71b60(void)

undefined8 FUN_142c71b60(longlong *param_1,short param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (param_2 == 0x10) {
    plVar5 = (longlong *)(param_1[0x84] + (longlong)(int)param_1[0x8c] * 8);
  }
  else {
    if (param_2 == 1) {
      lVar1 = 0x100;
    }
    else if (param_2 == 2) {
      lVar1 = 0x108;
    }
    else if (param_2 == 4) {
      lVar1 = 0x110;
    }
    else if (param_2 == 8) {
      lVar1 = 0x118;
    }
    else {
      lVar1 = 0xf8;
    }
    plVar5 = (longlong *)(lVar1 + (longlong)param_1);
  }
  lVar1 = *plVar5;
  lVar2 = (**(code **)(*param_1 + 0xa0))(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_1423ac7e0(lVar2);
    if ((lVar3 != 0) && (lVar1 != 0)) {
      uVar4 = FUN_1423ac7e0(lVar2);
      uVar4 = UAnimInstance::GetActiveInstanceForMontage(uVar4,lVar1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 142c71c20 FUN_142c71c20 body=154 status=ok
// SIG undefined FUN_142c71c20(void)

undefined8 FUN_142c71c20(longlong param_1,float param_2,float *param_3,float *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x170)) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x168) + 0x30);
    uVar3 = uVar2;
    do {
      if (*plVar1 == plVar1[2]) {
        FUN_142274950(param_1,uVar3);
        *param_3 = (1.0 / param_2) * *param_3;
        *param_4 = (1.0 / param_2) * *param_4;
        return 1;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 0xb;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x170));
  }
  return 0;
}



// FUNCTION 142c71cc0 FUN_142c71cc0 body=96 status=ok
// SIG undefined FUN_142c71cc0(void)

longlong FUN_142c71cc0(longlong param_1,short param_2)

{
  if (param_2 == 0x10) {
    return *(longlong *)(param_1 + 0x420) + (longlong)*(int *)(param_1 + 0x460) * 8;
  }
  if (param_2 == 1) {
    return param_1 + 0x100;
  }
  if (param_2 == 2) {
    return param_1 + 0x108;
  }
  if (param_2 != 4) {
    if (param_2 != 8) {
      return param_1 + 0xf8;
    }
    return param_1 + 0x118;
  }
  return param_1 + 0x110;
}



// FUNCTION 142c71d20 FUN_142c71d20 body=99 status=ok
// SIG undefined FUN_142c71d20(void)

longlong FUN_142c71d20(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x508);
  if (lVar2 == 0) {
    plVar3 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118);
    }
    if (plVar3 != (longlong *)0x0) {
      uVar1 = FUN_142e39920();
      lVar2 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar1);
      *(longlong *)(param_1 + 0x508) = lVar2;
      return lVar2;
    }
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 142c71d90 FUN_142c71d90 body=83 status=ok
// SIG undefined FUN_142c71d90(void)

ulonglong FUN_142c71d90(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x28);
  uVar5 = 0;
  plVar3 = (longlong *)(longlong)iVar1;
  if (0 < iVar1) {
    plVar3 = *(longlong **)(param_1 + 0x20);
    uVar6 = uVar5;
    do {
      if ((*plVar3 == *param_2) && ((char)plVar3[1] == '\x04')) {
        plVar4 = *(longlong **)(param_1 + 0x20) + (longlong)(int)uVar6 * 7;
        plVar3 = (longlong *)0x0;
        if (plVar4 != (longlong *)0x0) {
          lVar2 = plVar4[4];
          *param_3 = lVar2;
          return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
        }
        break;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar5 = uVar5 + 1;
      plVar3 = plVar3 + 7;
    } while ((longlong)uVar5 < (longlong)iVar1);
  }
  return (ulonglong)plVar3 & 0xffffffffffffff00;
}



// FUNCTION 142c71df0 FUN_142c71df0 body=91 status=ok
// SIG undefined FUN_142c71df0(void)

undefined8 * FUN_142c71df0(longlong param_1,undefined8 *param_2)

{
  if ((*(int *)(param_1 + 0x30) == 0) && (*(int *)(param_1 + 0x34) == 0)) {
    *param_2 = 0;
    param_2[1] = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"GbxAction State Event",0x2c);
    return param_2;
  }
  FName::ToString();
  return param_2;
}



// FUNCTION 142c71e50 FUN_142c71e50 body=91 status=ok
// SIG undefined FUN_142c71e50(void)

undefined8 * FUN_142c71e50(longlong param_1,undefined8 *param_2)

{
  if ((*(int *)(param_1 + 0x38) == 0) && (*(int *)(param_1 + 0x3c) == 0)) {
    *param_2 = 0;
    param_2[1] = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"GbxAction Event",0x20);
    return param_2;
  }
  FName::ToString();
  return param_2;
}



// FUNCTION 142c71eb0 FUN_142c71eb0 body=83 status=ok
// SIG undefined FUN_142c71eb0(void)

ulonglong FUN_142c71eb0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_1 + 0x28);
  uVar5 = 0;
  plVar3 = (longlong *)(longlong)iVar1;
  if (0 < iVar1) {
    plVar3 = *(longlong **)(param_1 + 0x20);
    uVar6 = uVar5;
    do {
      if ((*plVar3 == *param_2) && ((char)plVar3[1] == '\x03')) {
        plVar4 = *(longlong **)(param_1 + 0x20) + (longlong)(int)uVar6 * 7;
        plVar3 = (longlong *)0x0;
        if (plVar4 != (longlong *)0x0) {
          lVar2 = plVar4[3];
          *param_3 = lVar2;
          return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
        }
        break;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar5 = uVar5 + 1;
      plVar3 = plVar3 + 7;
    } while ((longlong)uVar5 < (longlong)iVar1);
  }
  return (ulonglong)plVar3 & 0xffffffffffffff00;
}



// FUNCTION 142c71f10 FUN_142c71f10 body=105 status=ok
// SIG undefined FUN_142c71f10(void)

longlong FUN_142c71f10(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0xf0);
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      return 0;
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118);
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    uVar2 = FUN_142e0ffb0();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    *(longlong *)(param_1 + 0xf0) = lVar3;
  }
  return lVar3;
}



// FUNCTION 142c71f80 FUN_142c71f80 body=99 status=ok
// SIG undefined FUN_142c71f80(void)

longlong FUN_142c71f80(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x500);
  if (lVar2 == 0) {
    plVar3 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118);
    }
    if (plVar3 != (longlong *)0x0) {
      uVar1 = FUN_142e0ffb0();
      lVar2 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar1);
      *(longlong *)(param_1 + 0x500) = lVar2;
      return lVar2;
    }
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 142c71ff0 GetScrollOffset body=9 status=ok
// SIG undefined GetScrollOffset(void)

undefined4 SScrollBox::GetScrollOffset(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x4f0);
}



// FUNCTION 142c72010 FUN_142c72010 body=457 status=ok
// SIG undefined FUN_142c72010(void)

undefined8 *
FUN_142c72010(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong local_48;
  int local_40;
  int local_3c;
  
  plVar10 = *(longlong **)(param_1 + 0x68);
  lVar13 = 0;
  iVar3 = 0;
  iVar9 = 0;
  plVar12 = plVar10 + (longlong)*(int *)(param_1 + 0x70) * 2;
  local_48 = 0;
  local_3c = 0;
  if (plVar10 != plVar12) {
LAB_142c72063:
    if (((*plVar10 == 0) || (cVar2 = FUN_142c48f60(*plVar10,param_3,0), cVar2 != '\0')) &&
       (plVar8 = (longlong *)plVar10[1], plVar8 != (longlong *)0x0)) {
      plVar5 = (longlong *)FUN_142e20fc0();
      plVar7 = plVar8;
      do {
        if (plVar7 == plVar5) {
          plVar5 = (longlong *)FUN_142e20fc0();
          plVar7 = plVar8;
          goto LAB_142c720b0;
        }
        plVar7 = (longlong *)plVar7[6];
      } while (plVar7 != (longlong *)0x0);
    }
    goto LAB_142c72149;
  }
LAB_142c721b2:
  *param_2 = 0;
LAB_142c721ba:
  if (lVar13 != 0) {
    FMemory::Free(lVar13);
  }
  return param_2;
  while (plVar7 = (longlong *)plVar7[6], plVar7 != (longlong *)0x0) {
LAB_142c720b0:
    if (plVar7 == plVar5) goto LAB_142c720c0;
  }
  plVar8 = (longlong *)0x0;
LAB_142c720c0:
  lVar11 = plVar8[0x1f];
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar11 = plVar8[0x1f];
    if (lVar11 != 0) goto LAB_142c720e4;
  }
  else {
LAB_142c720e4:
    lVar6 = FUN_142e20fc0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142c7211c;
  }
  lVar11 = 0;
LAB_142c7211c:
  local_40 = iVar9 + 1;
  if (iVar3 < local_40) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,iVar9);
    lVar13 = local_48;
    iVar3 = local_3c;
  }
  *(longlong *)(lVar13 + (longlong)iVar9 * 8) = lVar11;
  iVar9 = local_40;
LAB_142c72149:
  plVar10 = plVar10 + 2;
  if (plVar10 == plVar12) goto code_r0x000142c72156;
  goto LAB_142c72063;
code_r0x000142c72156:
  if (0 < iVar9) {
    iVar3 = rand();
    iVar4 = (int)((float)iVar3 * 3.051851e-05 * (float)iVar9);
    iVar3 = iVar9 + -1;
    if (iVar4 <= iVar9 + -1) {
      iVar3 = iVar4;
    }
    plVar10 = *(longlong **)(lVar13 + (longlong)iVar3 * 8);
    (**(code **)(*plVar10 + 0x278))(plVar10,param_2,param_4);
    goto LAB_142c721ba;
  }
  goto LAB_142c721b2;
}



// FUNCTION 142c721e0 FUN_142c721e0 body=609 status=ok
// SIG undefined FUN_142c721e0(void)

longlong FUN_142c721e0(longlong param_1,short param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *local_18;
  int local_10;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 == 0) {
LAB_142c7242a:
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    lVar7 = 0;
    if (param_2 == 0x10) {
      if ((*(int *)(param_1 + 0x460) < 0) ||
         (*(int *)(param_1 + 0x4e0) <= *(int *)(param_1 + 0x460))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_142c7242a;
      lVar5 = lVar4;
      if (lVar3 != 0) {
        lVar5 = *(longlong *)(lVar3 + 0x118);
      }
      if (lVar5 != 0) {
        uVar2 = FUN_142a07000();
        AActor::GetComponentsByClass(lVar5,&local_18,uVar2);
        if (local_18 != local_18 + local_10) {
          plVar6 = local_18;
          do {
            lVar3 = *plVar6;
            if (*(longlong *)(lVar3 + 0x18) ==
                *(longlong *)
                 ((longlong)*(int *)(param_1 + 0x460) * 0x40 + *(longlong *)(param_1 + 0x4d8) + 0x18
                 )) {
              lVar7 = FUN_142a07000();
              if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) {
                lVar3 = lVar4;
              }
              if (local_18 == (longlong *)0x0) {
                return lVar3;
              }
              FMemory::Free();
              return lVar3;
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 != local_18 + local_10);
        }
        if (local_18 != (longlong *)0x0) {
          FMemory::Free(local_18);
        }
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x18);
    if (lVar3 != 0) {
      if (param_2 == 1) {
        lVar4 = *(longlong *)(lVar3 + 0x118);
        if (lVar4 != 0) {
          lVar5 = APostProcessVolume::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            return *(longlong *)(lVar4 + 0x4c0);
          }
        }
        plVar6 = *(longlong **)(lVar3 + 0x118);
        lVar4 = lVar7;
        if (plVar6 != (longlong *)0x0) {
          lVar3 = FUN_1428dfc70();
          if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
              != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            uVar2 = FUN_142a07000();
            lVar4 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar2);
          }
        }
      }
      else if ((param_2 == 2) && (plVar6 = *(longlong **)(lVar3 + 0x118), plVar6 != (longlong *)0x0)
              ) {
        lVar3 = AHeoCon::GetPrivateStaticClass();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        lVar4 = lVar7;
        if (bVar1) {
          lVar4 = (**(code **)(*plVar6 + 0xa58))(plVar6);
        }
      }
    }
  }
  return lVar4;
}



// FUNCTION 142c72450 FUN_142c72450 body=331 status=ok
// SIG undefined FUN_142c72450(void)

undefined8 FUN_142c72450(longlong param_1,short param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    if (param_2 == 1) {
      lVar2 = *(longlong *)(lVar4 + 0x118);
      if (lVar2 != 0) {
        lVar6 = APostProcessVolume::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          return *(undefined8 *)(lVar2 + 0x4c0);
        }
      }
      plVar1 = *(longlong **)(lVar4 + 0x118);
      if (plVar1 != (longlong *)0x0) {
        lVar4 = FUN_1428dfc70();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          uVar5 = FUN_142a07000();
                    /* WARNING: Could not recover jumptable at 0x000142c72587. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
          return uVar5;
        }
      }
    }
    else if ((param_2 == 2) && (plVar1 = *(longlong **)(lVar4 + 0x118), plVar1 != (longlong *)0x0))
    {
      lVar4 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
                    /* WARNING: Could not recover jumptable at 0x000142c724d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(*plVar1 + 0xa58))(plVar1);
        return uVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 142c725a0 FUN_142c725a0 body=193 status=ok
// SIG undefined FUN_142c725a0(void)

longlong FUN_142c725a0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    return *(longlong *)(param_1 + 0x4f8);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x118);
  if (lVar1 == 0) {
LAB_142c7261e:
    plVar5 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118);
    }
    if (plVar5 == (longlong *)0x0) goto LAB_142c7264f;
    uVar4 = FUN_142a07000();
    uVar4 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar4);
  }
  else {
    lVar3 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142c7261e;
    uVar4 = *(undefined8 *)(lVar1 + 0x4c0);
  }
  *(undefined8 *)(param_1 + 0x4f8) = uVar4;
LAB_142c7264f:
  return *(longlong *)(param_1 + 0x4f8);
}



// FUNCTION 142c72670 FUN_142c72670 body=275 status=ok
// SIG undefined FUN_142c72670(void)

undefined8 FUN_142c72670(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined8 local_res8;
  undefined2 *local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar3 = FUN_142e20fc0();
    lVar1 = *(longlong *)(param_1 + 0x70);
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) {
        if (lVar1 != 0) {
          local_res8 = *(undefined8 *)(lVar1 + 0x18);
          FName::ToString(&local_res8,&local_28);
          goto LAB_142c726e7;
        }
        break;
      }
    }
  }
  local_20 = 5;
  local_28 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,&DAT_143f3edc8,10);
LAB_142c726e7:
  puVar6 = &DAT_143f3eda8;
  puVar5 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar5 = local_28;
  }
  puVar4 = (undefined8 *)UBTNode::GetStaticDescription(param_1,local_18);
  if (*(int *)(puVar4 + 1) != 0) {
    puVar6 = (undefined2 *)*puVar4;
  }
  FString::PrintfImpl(param_2,L"%s: \'%s\'",puVar6,puVar5);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142c72790 FUN_142c72790 body=120 status=ok
// SIG undefined FUN_142c72790(void)

undefined8 * FUN_142c72790(char *param_1,undefined8 *param_2)

{
  undefined8 local_res8 [4];
  
  if (*param_1 == '\x02') {
    FName::ToString(param_1 + 0x10);
    return param_2;
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    *param_2 = 0;
    param_2[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,&DAT_143f3edc8,10);
    return param_2;
  }
  local_res8[0] = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18);
  FName::ToString(local_res8);
  return param_2;
}



// FUNCTION 142c72810 FUN_142c72810 body=176 status=ok
// SIG undefined FUN_142c72810(void)

float FUN_142c72810(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)(**(code **)(*param_1 + 0x58))();
  fVar4 = 0.0;
  if (fVar2 <= 0.0) {
    return 0.0;
  }
  if ((param_1[3] == 0) ||
     ((lVar1 = *(longlong *)(param_1[3] + 0x120), lVar1 == 0 &&
      (lVar1 = FUN_1423407b0(), lVar1 == 0)))) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = *(float *)(lVar1 + 0x798) - *(float *)((longlong)param_1 + 0x34);
  }
  if (fVar3 <= fVar2) {
    if ((param_1[3] != 0) &&
       ((lVar1 = *(longlong *)(param_1[3] + 0x120), lVar1 != 0 ||
        (lVar1 = FUN_1423407b0(), lVar1 != 0)))) {
      fVar4 = *(float *)(lVar1 + 0x798) - *(float *)((longlong)param_1 + 0x34);
    }
    return fVar2 - fVar4;
  }
  return 0.0;
}



// FUNCTION 142c728c0 FUN_142c728c0 body=9 status=ok
// SIG undefined FUN_142c728c0(void)

void FUN_142c728c0(longlong param_1)

{
  FUN_142c98860(param_1 + 0x78);
  return;
}



// FUNCTION 142c728d0 FUN_142c728d0 body=29 status=ok
// SIG undefined FUN_142c728d0(void)

longlong FUN_142c728d0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
      return lVar1;
    }
  }
  return lVar1;
}



// FUNCTION 142c72910 FUN_142c72910 body=85 status=ok
// SIG undefined FUN_142c72910(void)

undefined4 FUN_142c72910(void)

{
  undefined4 *puVar1;
  char cVar2;
  DWORD DVar3;
  
  puVar1 = DAT_146b2fe10;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return puVar1[1];
    }
  }
  return *puVar1;
}



// FUNCTION 142c72970 FUN_142c72970 body=522 status=ok
// SIG undefined FUN_142c72970(void)

void FUN_142c72970(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  undefined4 *local_30;
  undefined1 *puStack_28;
  undefined ***local_10;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iVar6 = 0;
  iVar5 = 0;
  if (0 < iVar1) {
    plVar3 = *(longlong **)(param_1 + 0x20);
    do {
      if ((*plVar3 == *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x198)) &&
         ((char)plVar3[1] == '\x01')) {
        plVar3 = *(longlong **)(param_1 + 0x20) + (longlong)iVar5 * 7;
        if (plVar3 != (longlong *)0x0) {
          local_res10[0] = *(undefined4 *)((longlong)plVar3 + 0xc);
        }
        break;
      }
      iVar5 = iVar5 + 1;
      plVar3 = plVar3 + 7;
    } while (iVar5 < iVar1);
  }
  iVar5 = 0;
  if (0 < iVar1) {
    plVar3 = *(longlong **)(param_1 + 0x20);
    do {
      if ((*plVar3 == *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1a0)) &&
         ((char)plVar3[1] == '\x01')) {
        plVar3 = *(longlong **)(param_1 + 0x20) + (longlong)iVar5 * 7;
        if (plVar3 != (longlong *)0x0) {
          local_res18[0] = *(undefined4 *)((longlong)plVar3 + 0xc);
        }
        break;
      }
      iVar5 = iVar5 + 1;
      plVar3 = plVar3 + 7;
    } while (iVar5 < iVar1);
  }
  iVar5 = 0;
  if (0 < iVar1) {
    plVar3 = *(longlong **)(param_1 + 0x20);
    do {
      if ((*plVar3 == DAT_146b2fcd8) && ((char)plVar3[1] == '\x01')) {
        plVar3 = *(longlong **)(param_1 + 0x20) + (longlong)iVar5 * 7;
        if (plVar3 != (longlong *)0x0) {
          *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)((longlong)plVar3 + 0xc);
          local_res8[0] = 1;
          goto LAB_142c72a51;
        }
        break;
      }
      iVar5 = iVar5 + 1;
      plVar3 = plVar3 + 7;
    } while (iVar5 < iVar1);
  }
  local_res8[0] = 0;
LAB_142c72a51:
  puStack_38 = local_res10;
  local_68 = (undefined4)param_1;
  uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
  local_30 = local_res18;
  puStack_28 = local_res8;
  local_48 = &PTR_LAB_14583fd80;
  local_10 = &local_48;
  local_40 = local_68;
  uStack_3c = uStack_64;
  FUN_142c6db40(param_1,&local_48);
  if (0 < *(int *)(param_1 + 0x28)) {
    plVar3 = *(longlong **)(param_1 + 0x20);
    while ((*plVar3 != DAT_146b2fd28 || ((char)plVar3[1] != '\x02'))) {
      iVar6 = iVar6 + 1;
      plVar3 = plVar3 + 7;
      if (*(int *)(param_1 + 0x28) <= iVar6) {
        return;
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x20) + (longlong)iVar6 * 7;
    if ((plVar3 != (longlong *)0x0) &&
       (uVar2 = *(uint *)(plVar3 + 2), uVar2 != *(uint *)(param_1 + 0x468))) {
      uVar4 = uVar2 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      if (uVar4 == 0) {
        FUN_142c7dff0(param_1);
      }
      else if (uVar4 == 1) {
        FUN_142c739a0(param_1);
      }
      *(uint *)(param_1 + 0x468) = uVar2;
    }
  }
  return;
}



// FUNCTION 142c72b80 FUN_142c72b80 body=109 status=ok
// SIG undefined FUN_142c72b80(void)

undefined1 FUN_142c72b80(longlong *param_1,undefined8 param_2)

{
  undefined1 local_res8 [8];
  undefined8 local_res10 [3];
  undefined4 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined **local_50;
  undefined1 *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_38;
  undefined ***local_18;
  
  local_48 = local_res8;
  local_38 = local_res10;
  local_res8[0] = 0;
  local_68 = SUB84(local_48,0);
  uStack_60 = SUB84(param_1,0);
  uStack_5c = (undefined4)((ulonglong)param_1 >> 0x20);
  local_50 = &PTR_LAB_14583fcc0;
  local_18 = &local_50;
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  local_res10[0] = param_2;
  (**(code **)(*param_1 + 0x140))(local_68,&local_50);
  return local_res8[0];
}



// FUNCTION 142c72bf0 FUN_142c72bf0 body=90 status=ok
// SIG undefined FUN_142c72bf0(void)

void FUN_142c72bf0(undefined8 param_1,undefined2 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar1 = UAnimNotify::GetPrivateStaticClass();
    lVar3 = param_3;
    do {
      if (lVar3 == lVar1) goto LAB_142c72c25;
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  param_3 = 0;
LAB_142c72c25:
  uVar2 = FUN_142c6f640(param_1,param_2);
  FUN_142c901a0(uVar2,param_3);
  return;
}



// FUNCTION 142c72c50 FUN_142c72c50 body=90 status=ok
// SIG undefined FUN_142c72c50(void)

void FUN_142c72c50(undefined8 param_1,undefined2 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar1 = UAnimNotifyState::GetPrivateStaticClass();
    lVar3 = param_3;
    do {
      if (lVar3 == lVar1) goto LAB_142c72c85;
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
  param_3 = 0;
LAB_142c72c85:
  uVar2 = FUN_142c6f640(param_1,param_2);
  FUN_142c901c0(uVar2,param_3);
  return;
}



// FUNCTION 142c72cb0 FUN_142c72cb0 body=79 status=ok
// SIG undefined FUN_142c72cb0(void)

undefined1 FUN_142c72cb0(longlong *param_1)

{
  undefined1 local_res8 [32];
  undefined4 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  undefined1 *local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined ***local_10;
  
  local_40 = local_res8;
  local_58 = SUB84(local_40,0);
  uStack_50 = SUB84(param_1,0);
  uStack_4c = (undefined4)((ulonglong)param_1 >> 0x20);
  local_res8[0] = 0;
  local_48 = &PTR_LAB_14583fb70;
  local_10 = &local_48;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  (**(code **)(*param_1 + 0x140))(local_58,&local_48);
  return local_res8[0];
}



// FUNCTION 142c72dc0 FUN_142c72dc0 body=1202 status=ok
// SIG undefined FUN_142c72dc0(void)

ulonglong FUN_142c72dc0(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong in_RAX;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong *puVar13;
  uint *puVar14;
  uint uVar15;
  ulonglong *puVar16;
  longlong *plVar17;
  uint local_88;
  uint uStack_84;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  uint uStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  if (param_1 != 0) {
    uVar9 = 0;
    lVar4 = *param_2;
    if (*(int *)(param_1 + 0x120) != *(int *)(param_1 + 0x14c)) {
      lVar8 = *(longlong *)(param_1 + 0x158);
      if (*(longlong *)(param_1 + 0x158) == 0) {
        lVar8 = param_1 + 0x150;
      }
      iVar6 = *(int *)(lVar8 + ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                               (longlong)*(int *)(param_1 + 0x160) - 1U) * 4);
      if (iVar6 != -1) {
        lVar8 = *(longlong *)(param_1 + 0x118);
        do {
          lVar10 = (longlong)iVar6 * 0x20;
          if (*(longlong *)(lVar10 + lVar8) == lVar4) {
            if (((iVar6 != -1) && (lVar8 = (longlong)iVar6 * 0x20 + lVar8, lVar8 != 0)) &&
               ((longlong *)(lVar8 + 8) != (longlong *)0x0)) {
              puVar13 = *(ulonglong **)(lVar8 + 8);
              puVar16 = puVar13 + (longlong)*(int *)(lVar8 + 0x10) * 2;
              goto joined_r0x000142c72ea0;
            }
            break;
          }
          iVar6 = *(int *)(lVar10 + 0x18 + lVar8);
        } while (iVar6 != -1);
      }
    }
LAB_142c72f5d:
    puVar13 = *(ulonglong **)(param_1 + 0x108);
    puVar16 = puVar13 + (longlong)*(int *)(param_1 + 0x110) * 2;
    for (; puVar13 != puVar16; puVar13 = puVar13 + 2) {
      if ((puVar13[1] != 0) && (*puVar13 != 0)) {
        lVar4 = *(longlong *)(*puVar13 + 0x48);
        if (lVar4 != 0) {
          lVar8 = FUN_142df8d80();
          lVar4 = *(longlong *)(lVar4 + 0x10);
          iVar6 = *(int *)(lVar8 + 0x90);
          uVar11 = (longlong)iVar6;
          if ((*(int *)(lVar4 + 0x90) < iVar6) ||
             (uVar11 = *(ulonglong *)(lVar4 + 0x88),
             *(longlong *)(uVar11 + (longlong)iVar6 * 8) != lVar8 + 0x88)) {
            uVar11 = uVar11 & 0xffffffffffffff00;
            bVar5 = false;
          }
          else {
            uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
            bVar5 = true;
          }
          if (bVar5) goto LAB_142c7324f;
        }
        uVar11 = uVar9;
        if (puVar13[1] != 0) {
          uVar11 = *puVar13;
        }
        lVar4 = *(longlong *)(uVar11 + 0x50);
        if (lVar4 != 0) {
          lVar8 = FUN_142df8a60();
          lVar4 = *(longlong *)(lVar4 + 0x10);
          iVar6 = *(int *)(lVar8 + 0x90);
          uVar11 = (longlong)iVar6;
          if ((*(int *)(lVar4 + 0x90) < iVar6) ||
             (uVar11 = *(ulonglong *)(lVar4 + 0x88),
             *(longlong *)(uVar11 + (longlong)iVar6 * 8) != lVar8 + 0x88)) {
            uVar11 = uVar11 & 0xffffffffffffff00;
            bVar5 = false;
          }
          else {
            uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
            bVar5 = true;
          }
          if (bVar5) goto LAB_142c7324f;
        }
      }
    }
    plVar17 = (longlong *)(param_1 + 0x168);
    uStack_84 = 1;
    uVar2 = *(uint *)(param_1 + 400);
    puVar1 = (uint *)(param_1 + 0x178);
    local_88 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    if (uVar2 != 0) {
      puVar14 = *(uint **)(param_1 + 0x188);
      if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
        puVar14 = puVar1;
      }
      uVar3 = *puVar14;
      uVar11 = uVar9;
      while (uVar3 == 0) {
        iVar6 = (int)uVar9;
        uStack_70 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_70;
        local_88 = iVar6 + 1;
        uVar9 = (ulonglong)local_88;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_142c730ee;
        uVar3 = puVar14[(longlong)iVar6 + 1];
      }
      uStack_84 = uVar3 - 1 & uVar3 ^ uVar3;
      iVar6 = 0x1f;
      if (uStack_84 != 0) {
        for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_84 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_74 = (uStack_70 - iVar6) + 0x1f;
      if ((int)uVar2 < (int)uStack_74) {
LAB_142c730ee:
        uStack_74 = uVar2;
      }
    }
    uVar3 = *(uint *)(param_1 + 400);
    uStack_50 = 0xffffffff;
    uStack_4c = uStack_74;
    local_48 = CONCAT44(uStack_6c,uStack_70);
    uStack_38 = CONCAT44(uStack_84,local_88);
    uVar9 = 0;
    uVar15 = uVar3 & 0xffffffe0;
    uStack_60 = local_88;
    uStack_5c = uStack_84;
    local_58 = puVar1;
    local_40 = plVar17;
    puStack_30 = puVar1;
    uStack_20 = local_48;
    uStack_28 = uStack_50;
    uStack_24 = uStack_4c;
    uStack_74 = uVar3;
    if (uVar3 != uVar2) {
      puVar14 = *(uint **)(param_1 + 0x188);
      if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
        puVar14 = puVar1;
      }
      uVar7 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5;
      uVar12 = puVar14[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
      iVar6 = (int)uVar3 >> 5;
      uVar9 = (ulonglong)uVar7;
      while (uVar12 == 0) {
        uVar11 = (ulonglong)iVar6;
        uVar15 = uVar15 + 0x20;
        if ((int)uVar7 <= iVar6) goto LAB_142c731b8;
        iVar6 = iVar6 + 1;
        uVar9 = uVar11;
        uVar12 = puVar14[uVar11 + 1];
      }
      uVar12 = uVar12 - 1 & uVar12 ^ uVar12;
      iVar6 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uVar12 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_74 = (uVar15 - iVar6) + 0x1f;
      uVar9 = (ulonglong)uStack_74;
      if ((int)uVar2 < (int)uStack_74) {
LAB_142c731b8:
        uStack_74 = uVar2;
      }
    }
    while( true ) {
      if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      in_RAX = CONCAT71((int7)(uVar9 >> 8),!bVar5);
      if (bVar5) break;
      lVar4 = *(longlong *)(*(longlong *)(*plVar17 + (longlong)(int)uStack_4c * 0x18) + 0x50);
      if (lVar4 != 0) {
        lVar8 = FUN_142df8a60();
        lVar4 = *(longlong *)(lVar4 + 0x10);
        iVar6 = *(int *)(lVar8 + 0x90);
        uVar11 = (longlong)iVar6;
        if ((*(int *)(lVar4 + 0x90) < iVar6) ||
           (uVar11 = *(ulonglong *)(lVar4 + 0x88),
           *(longlong *)(uVar11 + (longlong)iVar6 * 8) != lVar8 + 0x88)) {
          uVar11 = uVar11 & 0xffffffffffffff00;
          bVar5 = false;
        }
        else {
          uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
          bVar5 = true;
        }
        if (bVar5) {
LAB_142c7324f:
          return CONCAT71((int7)(uVar11 >> 8),1);
        }
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      uVar9 = TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
    }
  }
  return in_RAX & 0xffffffffffffff00;
joined_r0x000142c72ea0:
  if (puVar13 == puVar16) goto LAB_142c72f5d;
  if ((puVar13[1] != 0) && (*puVar13 != 0)) {
    lVar4 = *(longlong *)(*puVar13 + 0x48);
    if (lVar4 != 0) {
      lVar8 = FUN_142df8d80();
      lVar4 = *(longlong *)(lVar4 + 0x10);
      iVar6 = *(int *)(lVar8 + 0x90);
      uVar11 = (longlong)iVar6;
      if ((*(int *)(lVar4 + 0x90) < iVar6) ||
         (uVar11 = *(ulonglong *)(lVar4 + 0x88),
         *(longlong *)(uVar11 + (longlong)iVar6 * 8) != lVar8 + 0x88)) {
        uVar11 = uVar11 & 0xffffffffffffff00;
        bVar5 = false;
      }
      else {
        uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
        bVar5 = true;
      }
      if (bVar5) goto LAB_142c7324f;
    }
    uVar11 = uVar9;
    if (puVar13[1] != 0) {
      uVar11 = *puVar13;
    }
    lVar4 = *(longlong *)(uVar11 + 0x50);
    if (lVar4 != 0) {
      lVar8 = FUN_142df8a60();
      lVar4 = *(longlong *)(lVar4 + 0x10);
      iVar6 = *(int *)(lVar8 + 0x90);
      uVar11 = (longlong)iVar6;
      if ((*(int *)(lVar4 + 0x90) < iVar6) ||
         (uVar11 = *(ulonglong *)(lVar4 + 0x88),
         *(longlong *)(uVar11 + (longlong)iVar6 * 8) != lVar8 + 0x88)) {
        uVar11 = uVar11 & 0xffffffffffffff00;
        bVar5 = false;
      }
      else {
        uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
        bVar5 = true;
      }
      if (bVar5) goto LAB_142c7324f;
    }
  }
  puVar13 = puVar13 + 2;
  goto joined_r0x000142c72ea0;
}



// FUNCTION 142c73280 FUN_142c73280 body=137 status=ok
// SIG undefined FUN_142c73280(void)

void FUN_142c73280(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FWeakObjectPtr::operator=();
  if (param_2 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)(param_2 + 0x118);
  }
  if (plVar4 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar4 + 0x678))();
    if (lVar2 != 0) {
      lVar3 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_142c732f3;
    }
  }
  lVar2 = 0;
LAB_142c732f3:
  FWeakObjectPtr::operator=(param_1 + 8,lVar2);
  return;
}



// FUNCTION 142c73310 FUN_142c73310 body=232 status=ok
// SIG undefined FUN_142c73310(void)

undefined8 FUN_142c73310(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 0x180);
  lVar3 = lVar7 + (longlong)*(int *)(param_1 + 0x188) * 0x18;
  if (lVar7 == lVar3) {
    return 0;
  }
  do {
    plVar5 = *(longlong **)(lVar7 + 0x10);
    lVar6 = *(longlong *)(lVar7 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (lVar6 != 0) {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
      return 1;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    lVar7 = lVar7 + 0x18;
  } while (lVar7 != lVar3);
  return 0;
}



// FUNCTION 142c73400 FUN_142c73400 body=195 status=ok
// SIG undefined FUN_142c73400(void)

undefined8 FUN_142c73400(longlong *param_1,short param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 1) {
    lVar2 = 0x100;
  }
  else if (param_2 == 2) {
    lVar2 = 0x108;
  }
  else if (param_2 == 4) {
    lVar2 = 0x110;
  }
  else if (param_2 == 8) {
    lVar2 = 0x118;
  }
  else {
    lVar2 = 0xf8;
  }
  if (*(longlong *)(lVar2 + (longlong)param_1) != 0) {
    lVar3 = (**(code **)(*param_1 + 0xa0))();
    if (lVar3 == 0) {
      return 0;
    }
    lVar3 = FUN_1423ac7e0(lVar3);
    if (lVar3 == 0) {
      return 0;
    }
    if ((param_3 != '\0') &&
       (cVar1 = FUN_142278320(lVar3,*(undefined8 *)(lVar2 + (longlong)param_1),1), cVar1 != '\0')) {
      return 1;
    }
    cVar1 = UAnimInstance::Montage_IsActive(lVar3,*(undefined8 *)(lVar2 + (longlong)param_1));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142c734d0 FUN_142c734d0 body=78 status=ok
// SIG undefined FUN_142c734d0(void)

bool FUN_142c734d0(undefined8 param_1)

{
  char local_res8 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  char *pcStack_38;
  undefined ***local_10;
  
  pcStack_38 = local_res8;
  local_58 = (undefined4)param_1;
  uStack_54 = (undefined4)((ulonglong)param_1 >> 0x20);
  local_res8[0] = '\0';
  local_48 = &PTR_LAB_14583fcf0;
  local_10 = &local_48;
  local_40 = local_58;
  uStack_3c = uStack_54;
  FUN_142c6db40(local_58,&local_48);
  return local_res8[0] == '\0';
}



// FUNCTION 142c73550 FUN_142c73550 body=254 status=ok
// SIG undefined FUN_142c73550(void)

bool FUN_142c73550(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  
  lVar4 = FUN_142c71f80();
  if (lVar4 == 0) {
    return true;
  }
  bVar1 = *(byte *)(lVar4 + 0x210);
  bVar6 = false;
  lVar2 = *(longlong *)(param_1 + 0x10);
  bVar5 = (bool)(~(bVar1 >> 4) & 1);
  switch(*(undefined1 *)(lVar2 + 0x1c3)) {
  case 0:
    break;
  case 1:
    iVar3 = FUN_142da89f0(lVar4);
    return iVar3 == 1;
  case 2:
    iVar3 = FUN_142da89f0(lVar4);
    return iVar3 == 0;
  case 3:
    return bVar5;
  case 4:
    return (~(bVar1 | 0xe0) & *(byte *)(lVar2 + 0x1c2)) == *(byte *)(lVar2 + 0x1c2);
  case 5:
    bVar6 = (*(byte *)(lVar2 + 0x1c2) & ~(bVar1 | 0xe0)) != 0;
  default:
    return bVar6;
  }
  if ((bVar5 != false) && (*(char *)(lVar4 + 0x340) == '\0')) {
    return true;
  }
  return false;
}



// FUNCTION 142c73670 FUN_142c73670 body=78 status=ok
// SIG undefined FUN_142c73670(void)

bool FUN_142c73670(undefined8 param_1)

{
  char local_res8 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  char *pcStack_38;
  undefined ***local_10;
  
  pcStack_38 = local_res8;
  local_58 = (undefined4)param_1;
  uStack_54 = (undefined4)((ulonglong)param_1 >> 0x20);
  local_res8[0] = '\0';
  local_48 = &PTR_LAB_14583fd20;
  local_10 = &local_48;
  local_40 = local_58;
  uStack_3c = uStack_54;
  FUN_142c6db40(local_58,&local_48);
  return local_res8[0] == '\0';
}



// FUNCTION 142c736c0 FUN_142c736c0 body=98 status=ok
// SIG undefined FUN_142c736c0(void)

void FUN_142c736c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_18 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  lVar1 = FUN_142c71720(lVar1);
  if (lVar1 != 0) {
    uVar2 = FUN_142c6e090(lVar1,local_18,param_2,param_1);
    FUN_142c73730(param_1,uVar2);
    return;
  }
  return;
}



// FUNCTION 142c73730 FUN_142c73730 body=182 status=ok
// SIG undefined FUN_142c73730(void)

ulonglong FUN_142c73730(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  ulonglong in_RAX;
  
  if ((longlong *)*param_2 != (longlong *)0x0) {
    cVar6 = (**(code **)(*(longlong *)*param_2 + 0x38))();
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
    return (ulonglong)(cVar6 == '\0');
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar7 = (int)lVar5 - 1;
    in_RAX = (ulonglong)uVar7;
    if (uVar7 == 0) {
      in_RAX = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        in_RAX = (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142c737f0 FUN_142c737f0 body=75 status=ok
// SIG undefined FUN_142c737f0(void)

ulonglong FUN_142c737f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*param_2 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x180);
    plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x188) * 3;
    for (; plVar2 != plVar1; plVar2 = plVar2 + 3) {
      if (*plVar2 == *param_2) {
        if (plVar2[1] != 0) {
          return CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
        }
        break;
      }
    }
    uVar3 = (ulonglong)plVar2 & 0xffffffffffffff00;
  }
  return uVar3;
}



// FUNCTION 142c73840 FUN_142c73840 body=32 status=ok
// SIG undefined FUN_142c73840(void)

bool FUN_142c73840(char *param_1)

{
  if (*param_1 != '\x02') {
    return *(longlong *)(param_1 + 8) != 0;
  }
  if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
    return false;
  }
  return true;
}



// FUNCTION 142c73860 IsValidAILocation body=100 status=ok
// SIG undefined IsValidAILocation(void)

undefined1 UAIBlueprintHelperLibrary::IsValidAILocation(float *param_1)

{
  if ((-(float)DAT_1466ace00 < *param_1) && (*param_1 < (float)DAT_1466ace00)) {
    if ((-DAT_1466ace00._4_4_ < param_1[1]) && (param_1[1] < DAT_1466ace00._4_4_)) {
      if ((-DAT_1466ace08 < param_1[2]) && (param_1[2] < DAT_1466ace08)) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142c738d0 FUN_142c738d0 body=46 status=ok
// SIG undefined FUN_142c738d0(void)

bool FUN_142c738d0(float *param_1,float *param_2)

{
  return (param_2[1] - param_1[1]) * (param_2[1] - param_1[1]) +
         (*param_2 - *param_1) * (*param_2 - *param_1) <= param_1[3] * param_1[3];
}



// FUNCTION 142c73900 FUN_142c73900 body=118 status=ok
// SIG undefined FUN_142c73900(void)

undefined1 FUN_142c73900(float *param_1,float *param_2)

{
  char cVar1;
  
  cVar1 = UAIBlueprintHelperLibrary::IsValidAILocation();
  if (((cVar1 != '\0') &&
      ((param_2[1] - param_1[1]) * (param_2[1] - param_1[1]) +
       (*param_2 - *param_1) * (*param_2 - *param_1) <= param_1[3] * param_1[3])) &&
     (ABS(param_2[2] - param_1[2]) < param_1[4] || ABS(param_2[2] - param_1[2]) == param_1[4])) {
    return 1;
  }
  return 0;
}



// FUNCTION 142c73980 FUN_142c73980 body=20 status=ok
// SIG undefined FUN_142c73980(void)

bool FUN_142c73980(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = ABS(param_2 - *(float *)(param_1 + 8));
  return fVar1 < *(float *)(param_1 + 0x10) || fVar1 == *(float *)(param_1 + 0x10);
}



// FUNCTION 142c739a0 FUN_142c739a0 body=65 status=ok
// SIG undefined FUN_142c739a0(void)

void FUN_142c739a0(longlong param_1)

{
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined ***local_10;
  
  local_58 = (undefined4)param_1;
  uStack_54 = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_50 = (undefined4)*(undefined8 *)(param_1 + 0x10);
  uStack_4c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  local_48 = &PTR_LAB_14583fc90;
  local_10 = &local_48;
  local_40 = local_58;
  uStack_3c = uStack_54;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  FUN_142c6db40(local_58,&local_48);
  return;
}



// FUNCTION 142c739f0 FUN_142c739f0 body=124 status=ok
// SIG undefined FUN_142c739f0(void)

void FUN_142c739f0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_142c6d400(uVar4,param_2);
  }
  return;
}



// FUNCTION 142c73a70 FUN_142c73a70 body=315 status=ok
// SIG undefined FUN_142c73a70(void)

undefined8 FUN_142c73a70(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_18;
  longlong *local_10;
  
  if (param_2 != (longlong *)0x0) {
    uVar6 = FUN_142e27720();
    lVar7 = (**(code **)(*param_2 + 0x628))(param_2,uVar6);
    if (lVar7 != 0) {
      lVar8 = *(longlong *)(lVar7 + 0x120);
      if (lVar8 == 0) {
        lVar8 = FUN_1423407b0(lVar7);
      }
      lVar8 = FUN_142c71720(lVar8);
      if (lVar8 != 0) {
        FUN_142c6e090(lVar8,&local_18,param_1,lVar7);
        if (local_18 != 0) {
          cVar5 = UObjectBaseUtility::IsTemplate(*(undefined8 *)(local_18 + 0x10),0x30);
          plVar4 = local_10;
          if (cVar5 == '\0') {
            uVar6 = *(undefined8 *)(local_18 + 0x10);
            if (local_10 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_10 + 1;
              lVar7 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
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
            return uVar6;
          }
        }
        plVar4 = local_10;
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_10 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
    }
  }
  return 0;
}



// FUNCTION 142c73bb0 FUN_142c73bb0 body=265 status=ok
// SIG undefined FUN_142c73bb0(void)

undefined8 FUN_142c73bb0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong local_18;
  longlong *local_10;
  
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (lVar7 == 0) {
    lVar7 = FUN_1423407b0();
  }
  lVar7 = FUN_142c71720(lVar7);
  if (lVar7 != 0) {
    FUN_142c6e090(lVar7,&local_18,param_2,param_1);
    if (local_18 != 0) {
      cVar6 = UObjectBaseUtility::IsTemplate(*(undefined8 *)(local_18 + 0x10),0x30);
      plVar5 = local_10;
      if (cVar6 == '\0') {
        uVar4 = *(undefined8 *)(local_18 + 0x10);
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_10 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_10)(local_10);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_10 + 8))(local_10,1);
            }
          }
        }
        return uVar4;
      }
    }
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142c73cc0 FUN_142c73cc0 body=252 status=ok
// SIG undefined FUN_142c73cc0(void)

longlong FUN_142c73cc0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  plVar8 = (longlong *)0x0;
  plVar9 = plVar8;
  if (param_2 != 0) {
    plVar7 = *(longlong **)(param_1 + 0x180);
    plVar2 = plVar7 + (longlong)*(int *)(param_1 + 0x188) * 3;
    for (; plVar7 != plVar2; plVar7 = plVar7 + 3) {
      if (*plVar7 == param_2) {
        plVar9 = (longlong *)plVar7[1];
        plVar8 = (longlong *)plVar7[2];
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        break;
      }
    }
  }
  if ((plVar9 != (longlong *)0x0) &&
     (cVar6 = UObjectBaseUtility::IsTemplate(plVar9[2],0x30), cVar6 == '\0')) {
    lVar4 = plVar9[2];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar8 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    return lVar4;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return 0;
}



// FUNCTION 142c73dc0 FUN_142c73dc0 body=147 status=ok
// SIG undefined FUN_142c73dc0(void)

longlong FUN_142c73dc0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0xc);
  lVar5 = 0;
  lVar3 = lVar5;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar4 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar4;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) != 0) {
    return 0;
  }
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  lVar3 = FUN_1406d4330(param_1);
  if (*(longlong *)(lVar3 + 0x18) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x118);
  }
  return lVar5;
}



// FUNCTION 142c73e60 FUN_142c73e60 body=281 status=ok
// SIG undefined FUN_142c73e60(void)

float FUN_142c73e60(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar4 = 0;
  }
  if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) != 0) {
    return 0.0;
  }
  plVar3 = (longlong *)FUN_1406d4330(param_1);
  fVar6 = (float)(**(code **)(*plVar3 + 0x58))(plVar3);
  fVar8 = 0.0;
  if (fVar6 <= 0.0) {
    return 1.0;
  }
  if ((plVar3[3] == 0) ||
     ((lVar4 = *(longlong *)(plVar3[3] + 0x120), lVar4 == 0 && (lVar4 = FUN_1423407b0(), lVar4 == 0)
      ))) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = *(float *)(lVar4 + 0x798) - *(float *)((longlong)plVar3 + 0x34);
  }
  if (fVar7 <= fVar6) {
    if ((plVar3[3] != 0) &&
       ((lVar4 = *(longlong *)(plVar3[3] + 0x120), lVar4 != 0 ||
        (lVar4 = FUN_1423407b0(), lVar4 != 0)))) {
      fVar8 = *(float *)(lVar4 + 0x798) - *(float *)((longlong)plVar3 + 0x34);
    }
    return fVar8 / fVar6;
  }
  return 1.0;
}



// FUNCTION 142c73f80 FUN_142c73f80 body=156 status=ok
// SIG undefined FUN_142c73f80(void)

float FUN_142c73f80(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    lVar3 = FUN_1406d4330(param_1);
    if (*(longlong *)(lVar3 + 0x18) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x120);
      if ((lVar4 == 0) && (lVar4 = FUN_1423407b0(), lVar4 == 0)) {
        return 0.0;
      }
      return *(float *)(lVar4 + 0x798) - *(float *)(lVar3 + 0x34);
    }
  }
  return 0.0;
}



// FUNCTION 142c74020 FUN_142c74020 body=369 status=ok
// SIG undefined FUN_142c74020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_142c74020(longlong param_1,float param_2)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_88 [32];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar7 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar7;
    lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
  }
  else {
    lVar5 = 0;
  }
  if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    lVar5 = FUN_142c725a0(uVar4);
    lVar6 = FUN_142c71f80(uVar4);
    if (((lVar5 == 0) || (lVar6 == 0)) || (*(int *)(lVar5 + 0xbf8) < 1)) {
      uVar2 = 3;
    }
    else {
      FUN_142699110(*(undefined8 *)
                     (*(longlong *)(lVar5 + 0xbf0) + (longlong)*(int *)(lVar6 + 0x2a8) * 8),
                    &local_68,1,0);
      fVar9 = -(fStack_60 + fStack_60) * fStack_64 - local_68 * 2.0 * fStack_5c;
      fVar8 = _guard_xfg_dispatch_icall_nop(param_2 * 0.017453292);
      if (fVar9 <= fVar8) {
        uVar2 = fVar9 < -fVar8;
      }
      else {
        uVar2 = 2;
      }
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}



// FUNCTION 142c741a0 FUN_142c741a0 body=215 status=ok
// SIG undefined FUN_142c741a0(void)

ulonglong FUN_142c741a0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  uVar7 = 0;
  *param_3 = 0;
  iVar2 = *(int *)(param_1 + 0xc);
  uVar5 = uVar7;
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar9 = iVar2 >> 0x1f & 0xffff;
    uVar4 = iVar2 + uVar9;
    uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
  }
  plVar6 = (longlong *)0x0;
  if ((*(uint *)(uVar5 + 8) >> 0x1d & 1) == 0) {
    plVar6 = (longlong *)FUN_1406d4330(param_1);
    plVar8 = plVar6 + 5;
    if (0 < (int)*plVar8) {
      plVar1 = plVar6 + 4;
      plVar6 = (longlong *)*plVar1;
      uVar5 = uVar7;
      do {
        if ((*plVar6 == param_2) && ((char)plVar6[1] == '\x01')) {
          plVar6 = (longlong *)(longlong)(int)uVar5;
          plVar8 = (longlong *)*plVar1 + (longlong)plVar6 * 7;
          if (plVar8 != (longlong *)0x0) {
            uVar3 = *(undefined4 *)((longlong)plVar8 + 0xc);
            *param_3 = uVar3;
            return CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
          }
          break;
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
        uVar7 = uVar7 + 1;
        plVar6 = plVar6 + 7;
      } while ((longlong)uVar7 < (longlong)(int)*plVar8);
    }
  }
  return (ulonglong)plVar6 & 0xffffffffffffff00;
}



// FUNCTION 142c74280 FUN_142c74280 body=215 status=ok
// SIG undefined FUN_142c74280(void)

ulonglong FUN_142c74280(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  uVar7 = 0;
  *param_3 = 0;
  iVar2 = *(int *)(param_1 + 0xc);
  uVar5 = uVar7;
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar9 = iVar2 >> 0x1f & 0xffff;
    uVar4 = iVar2 + uVar9;
    uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
  }
  plVar6 = (longlong *)0x0;
  if ((*(uint *)(uVar5 + 8) >> 0x1d & 1) == 0) {
    plVar6 = (longlong *)FUN_1406d4330(param_1);
    plVar8 = plVar6 + 5;
    if (0 < (int)*plVar8) {
      plVar1 = plVar6 + 4;
      plVar6 = (longlong *)*plVar1;
      uVar5 = uVar7;
      do {
        if ((*plVar6 == param_2) && ((char)plVar6[1] == '\x02')) {
          plVar6 = (longlong *)(longlong)(int)uVar5;
          plVar8 = (longlong *)*plVar1 + (longlong)plVar6 * 7;
          if (plVar8 != (longlong *)0x0) {
            uVar3 = (undefined4)plVar8[2];
            *param_3 = uVar3;
            return CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
          }
          break;
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
        uVar7 = uVar7 + 1;
        plVar6 = plVar6 + 7;
      } while ((longlong)uVar7 < (longlong)(int)*plVar8);
    }
  }
  return (ulonglong)plVar6 & 0xffffffffffffff00;
}



// FUNCTION 142c74360 FUN_142c74360 body=118 status=ok
// SIG undefined FUN_142c74360(void)

undefined8 FUN_142c74360(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 uVar6;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) != 0) {
    return 0;
  }
  plVar4 = (longlong *)FUN_1406d4330(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142c743d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(*plVar4 + 0x58))(plVar4);
  return uVar6;
}



// FUNCTION 142c743e0 FUN_142c743e0 body=139 status=ok
// SIG undefined FUN_142c743e0(void)

undefined8 FUN_142c743e0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 uVar6;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
      UObjectBaseUtility::IsTemplate(param_1,0x30);
      lVar3 = FUN_1406d4330(param_1);
      if (lVar3 != 0) {
        plVar4 = (longlong *)FUN_1406d4330(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142c7445e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(*plVar4 + 0x58))(plVar4);
        return uVar6;
      }
    }
  }
  return 0;
}



// FUNCTION 142c74470 FUN_142c74470 body=219 status=ok
// SIG undefined FUN_142c74470(void)

ulonglong FUN_142c74470(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  uVar8 = 0;
  *param_3 = 0;
  iVar2 = *(int *)(param_1 + 0xc);
  uVar5 = uVar8;
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar9 = iVar2 >> 0x1f & 0xffff;
    uVar4 = iVar2 + uVar9;
    uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
  }
  plVar6 = (longlong *)0x0;
  if ((*(uint *)(uVar5 + 8) >> 0x1d & 1) == 0) {
    plVar6 = (longlong *)FUN_1406d4330(param_1);
    plVar7 = plVar6 + 5;
    if (0 < (int)*plVar7) {
      plVar1 = plVar6 + 4;
      plVar6 = (longlong *)*plVar1;
      uVar5 = uVar8;
      do {
        if ((*plVar6 == param_2) && ((char)plVar6[1] == '\x04')) {
          plVar7 = (longlong *)*plVar1 + (longlong)(int)uVar5 * 7;
          plVar6 = (longlong *)0x0;
          if (plVar7 != (longlong *)0x0) {
            lVar3 = plVar7[4];
            *param_3 = lVar3;
            return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
          }
          break;
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
        uVar8 = uVar8 + 1;
        plVar6 = plVar6 + 7;
      } while ((longlong)uVar8 < (longlong)(int)*plVar7);
    }
  }
  return (ulonglong)plVar6 & 0xffffffffffffff00;
}



// FUNCTION 142c74550 FUN_142c74550 body=216 status=ok
// SIG undefined FUN_142c74550(void)

ulonglong FUN_142c74550(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  uVar8 = 0;
  *param_3 = 0;
  iVar2 = *(int *)(param_1 + 0xc);
  uVar5 = uVar8;
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar9 = iVar2 >> 0x1f & 0xffff;
    uVar4 = iVar2 + uVar9;
    uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
  }
  plVar6 = (longlong *)0x0;
  if ((*(uint *)(uVar5 + 8) >> 0x1d & 1) == 0) {
    plVar6 = (longlong *)FUN_1406d4330(param_1);
    plVar7 = plVar6 + 5;
    if (0 < (int)*plVar7) {
      plVar1 = plVar6 + 4;
      plVar6 = (longlong *)*plVar1;
      uVar5 = uVar8;
      do {
        if ((*plVar6 == param_2) && ((char)plVar6[1] == '\x03')) {
          plVar7 = (longlong *)*plVar1 + (longlong)(int)uVar5 * 7;
          plVar6 = (longlong *)0x0;
          if (plVar7 != (longlong *)0x0) {
            lVar3 = plVar7[3];
            *param_3 = lVar3;
            return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
          }
          break;
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
        uVar8 = uVar8 + 1;
        plVar6 = plVar6 + 7;
      } while ((longlong)uVar8 < (longlong)(int)*plVar7);
    }
  }
  return (ulonglong)plVar6 & 0xffffffffffffff00;
}



// FUNCTION 142c74630 FUN_142c74630 body=118 status=ok
// SIG undefined FUN_142c74630(void)

undefined8 FUN_142c74630(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 uVar6;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) != 0) {
    return 0;
  }
  plVar4 = (longlong *)FUN_1406d4330(param_1);
                    /* WARNING: Could not recover jumptable at 0x000142c746a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(*plVar4 + 0x50))(plVar4);
  return uVar6;
}



// FUNCTION 142c746b0 FUN_142c746b0 body=219 status=ok
// SIG undefined FUN_142c746b0(void)

undefined4 FUN_142c746b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 local_28 [32];
  
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar8 = iVar3 >> 0x1f & 0xffff;
      uVar5 = iVar3 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar6 = 0;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      UObjectBaseUtility::IsTemplate(param_1,0x30);
      puVar7 = (undefined8 *)FUN_142c6e6e0(param_1,local_28);
      uVar9 = (**(code **)(*(longlong *)*puVar7 + 0x50))();
      plVar4 = (longlong *)puVar7[1];
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
      return uVar9;
    }
  }
  return 0;
}



// FUNCTION 142c74790 FUN_142c74790 body=240 status=ok
// SIG undefined FUN_142c74790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142c74790(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  uVar7 = 0;
  *param_3 = _DAT_1468b5d90;
  *(undefined4 *)(param_3 + 1) = DAT_1468b5d98;
  iVar2 = *(int *)(param_1 + 0xc);
  uVar5 = uVar7;
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar9 = iVar2 >> 0x1f & 0xffff;
    uVar4 = iVar2 + uVar9;
    uVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
  }
  plVar6 = (longlong *)0x0;
  if ((*(uint *)(uVar5 + 8) >> 0x1d & 1) == 0) {
    plVar6 = (longlong *)FUN_1406d4330(param_1);
    plVar8 = plVar6 + 5;
    if (0 < (int)*plVar8) {
      plVar1 = plVar6 + 4;
      plVar6 = (longlong *)*plVar1;
      uVar5 = uVar7;
      do {
        if ((*plVar6 == param_2) && ((char)plVar6[1] == '\x05')) {
          plVar6 = (longlong *)(longlong)(int)uVar5;
          plVar8 = (longlong *)*plVar1 + (longlong)plVar6 * 7;
          if (plVar8 != (longlong *)0x0) {
            *param_3 = plVar8[5];
            lVar3 = plVar8[6];
            *(int *)(param_3 + 1) = (int)lVar3;
            return CONCAT71((uint7)(uint3)((uint)(int)lVar3 >> 8),1);
          }
          break;
        }
        uVar5 = (ulonglong)((int)uVar5 + 1);
        uVar7 = uVar7 + 1;
        plVar6 = plVar6 + 7;
      } while ((longlong)uVar7 < (longlong)(int)*plVar8);
    }
  }
  return (ulonglong)plVar6 & 0xffffffffffffff00;
}



// FUNCTION 142c74880 FUN_142c74880 body=144 status=ok
// SIG undefined FUN_142c74880(void)

undefined8 FUN_142c74880(undefined8 param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 local_18 [16];
  
  UObjectBaseUtility::IsTemplate(param_2,0x30);
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) != 0) {
    return 0;
  }
  uVar4 = FUN_142c6e6e0(param_2,local_18);
  uVar4 = FUN_142c73730(param_1,uVar4);
  return uVar4;
}



// FUNCTION 142c74910 FUN_142c74910 body=443 status=ok
// SIG undefined FUN_142c74910(void)

void FUN_142c74910(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined ***local_10;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    lVar6 = 0;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar10 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar10;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      UObjectBaseUtility::IsTemplate(param_1,0x30);
      lVar6 = FUN_1406d4330(param_1);
      if (lVar6 != 0) {
        uVar7 = FUN_1406d4330(param_1);
        plVar8 = (longlong *)FUN_142c86b70(uVar7,local_58);
        plVar3 = (longlong *)plVar8[1];
        lVar6 = *plVar8;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        if (lVar6 != 0) {
          lVar11 = *(longlong *)(lVar6 + 8);
          lVar9 = FUN_142e219b0();
          for (; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
            if (lVar11 == lVar9) {
              bVar4 = true;
              goto LAB_142c749f4;
            }
          }
          bVar4 = false;
LAB_142c749f4:
          lVar11 = 0;
          if (bVar4) {
            lVar11 = lVar6;
          }
          if (lVar11 != 0) {
            local_68 = (undefined4)lVar11;
            uStack_64 = (undefined4)((ulonglong)lVar11 >> 0x20);
            uStack_60 = (undefined4)*(undefined8 *)(lVar11 + 0x10);
            uStack_5c = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x10) >> 0x20);
            local_48 = &PTR_LAB_14583fc90;
            local_10 = &local_48;
            local_40 = local_68;
            uStack_3c = uStack_64;
            uStack_38 = uStack_60;
            uStack_34 = uStack_5c;
            FUN_142c6db40(lVar11,&local_48);
          }
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar3 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
      }
    }
  }
  return;
}



// FUNCTION 142c74ad0 FUN_142c74ad0 body=159 status=ok
// SIG undefined FUN_142c74ad0(void)

void FUN_142c74ad0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined ***local_10;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
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
    lVar3 = FUN_1406d4330(param_1);
    local_58 = (undefined4)lVar3;
    uStack_54 = (undefined4)((ulonglong)lVar3 >> 0x20);
    uStack_50 = (undefined4)*(undefined8 *)(lVar3 + 0x10);
    uStack_4c = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x10) >> 0x20);
    local_48 = &PTR_LAB_14583fc90;
    local_10 = &local_48;
    local_40 = local_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    FUN_142c6db40(lVar3,&local_48);
  }
  return;
}



// FUNCTION 142c74b70 FUN_142c74b70 body=412 status=ok
// SIG undefined FUN_142c74b70(void)

void FUN_142c74b70(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined **local_48;
  longlong local_40;
  undefined ***local_10;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    lVar6 = 0;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar10 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar10;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      UObjectBaseUtility::IsTemplate(param_1,0x30);
      lVar6 = FUN_1406d4330(param_1);
      if (lVar6 != 0) {
        uVar7 = FUN_1406d4330(param_1);
        plVar8 = (longlong *)FUN_142c86b70(uVar7,local_58);
        plVar3 = (longlong *)plVar8[1];
        lVar6 = *plVar8;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        if (lVar6 != 0) {
          lVar11 = *(longlong *)(lVar6 + 8);
          lVar9 = FUN_142e219b0();
          for (; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
            if (lVar11 == lVar9) {
              bVar4 = true;
              goto LAB_142c74c4b;
            }
          }
          bVar4 = false;
LAB_142c74c4b:
          lVar11 = 0;
          if (bVar4) {
            lVar11 = lVar6;
          }
          if (lVar11 != 0) {
            local_48 = &PTR_LAB_14583fc00;
            local_10 = &local_48;
            local_40 = lVar11;
            FUN_142c6db40(lVar11,&local_48);
          }
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar3 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
      }
    }
  }
  return;
}



// FUNCTION 142c74d10 FUN_142c74d10 body=140 status=ok
// SIG undefined FUN_142c74d10(void)

void FUN_142c74d10(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined **local_48;
  undefined8 local_40;
  undefined ***local_10;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
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
    local_40 = FUN_1406d4330(param_1);
    local_48 = &PTR_LAB_14583fc00;
    local_10 = &local_48;
    FUN_142c6db40(local_40,&local_48);
  }
  return;
}



// FUNCTION 142c74da0 FUN_142c74da0 body=423 status=ok
// SIG undefined FUN_142c74da0(void)

undefined8 FUN_142c74da0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong local_1c8;
  longlong *local_1c0;
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined2 local_188;
  undefined4 local_184;
  byte local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined4 local_114;
  undefined1 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  longlong *local_f8;
  undefined1 local_e8 [208];
  
  local_180 = local_180 & 0xf8;
  uVar7 = 0;
  local_1b8 = &PTR_FUN_143ff6170;
  local_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_158 = 0;
  uStack_150 = 2;
  local_128 = 0;
  uStack_120 = 2;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_184 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 2;
  local_160 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 2;
  local_130 = 0;
  local_118 = 0xff;
  local_114 = 0xffffffff;
  local_110 = 0;
  local_10c = 0;
  local_104 = 0;
  local_100 = 0;
  local_f8 = (longlong *)0x0;
  uVar6 = FUN_1405e0fd0(local_e8,&local_1b8);
  FUN_142c7bb40(param_1,&local_1c8,param_2,uVar6,1);
  plVar5 = local_1c0;
  if (local_1c8 != 0) {
    uVar7 = *(undefined8 *)(local_1c8 + 0x10);
  }
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1c0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1c0 + 8))(local_1c0,1);
      }
    }
  }
  local_1b8 = &PTR_FUN_143ff6170;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_f8 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*local_f8 + 8))(local_f8,1);
    }
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&local_130);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&local_148);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&local_160);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&local_178);
  if (local_198 != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 142c74f50 FUN_142c74f50 body=443 status=ok
// SIG undefined FUN_142c74f50(void)

void FUN_142c74f50(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined ***local_10;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    lVar6 = 0;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar10 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar10;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      UObjectBaseUtility::IsTemplate(param_1,0x30);
      lVar6 = FUN_1406d4330(param_1);
      if (lVar6 != 0) {
        uVar7 = FUN_1406d4330(param_1);
        plVar8 = (longlong *)FUN_142c86b70(uVar7,local_58);
        plVar3 = (longlong *)plVar8[1];
        lVar6 = *plVar8;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        if (lVar6 != 0) {
          lVar11 = *(longlong *)(lVar6 + 8);
          lVar9 = FUN_142e219b0();
          for (; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
            if (lVar11 == lVar9) {
              bVar4 = true;
              goto LAB_142c75034;
            }
          }
          bVar4 = false;
LAB_142c75034:
          lVar11 = 0;
          if (bVar4) {
            lVar11 = lVar6;
          }
          if (lVar11 != 0) {
            local_68 = (undefined4)lVar11;
            uStack_64 = (undefined4)((ulonglong)lVar11 >> 0x20);
            uStack_60 = (undefined4)*(undefined8 *)(lVar11 + 0x10);
            uStack_5c = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x10) >> 0x20);
            local_48 = &PTR_LAB_14583fc60;
            local_10 = &local_48;
            local_40 = local_68;
            uStack_3c = uStack_64;
            uStack_38 = uStack_60;
            uStack_34 = uStack_5c;
            FUN_142c6db40(lVar11,&local_48);
          }
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar3 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
      }
    }
  }
  return;
}



// FUNCTION 142c75110 FUN_142c75110 body=159 status=ok
// SIG undefined FUN_142c75110(void)

void FUN_142c75110(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined ***local_10;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
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
    lVar3 = FUN_1406d4330(param_1);
    local_58 = (undefined4)lVar3;
    uStack_54 = (undefined4)((ulonglong)lVar3 >> 0x20);
    uStack_50 = (undefined4)*(undefined8 *)(lVar3 + 0x10);
    uStack_4c = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x10) >> 0x20);
    local_48 = &PTR_LAB_14583fc60;
    local_10 = &local_48;
    local_40 = local_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    FUN_142c6db40(lVar3,&local_48);
  }
  return;
}



// FUNCTION 142c751b0 FUN_142c751b0 body=113 status=ok
// SIG undefined FUN_142c751b0(void)

void FUN_142c751b0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_142c812b0(uVar4);
    return;
  }
  return;
}



// FUNCTION 142c75230 FUN_142c75230 body=169 status=ok
// SIG undefined FUN_142c75230(void)

void FUN_142c75230(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 local_18 [16];
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar6 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar6;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    lVar3 = FUN_1406d4330(param_1);
    lVar4 = FUN_142c6d300(lVar3,&DAT_146b2fd28,2);
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
    uVar2 = *(uint *)(lVar4 + 0x10);
    if ((uVar2 & 1) != 0) {
      do {
        uVar2 = uVar2 + 1;
      } while ((uVar2 & 1) != 0);
      *(uint *)(lVar4 + 0x10) = uVar2;
    }
    uVar5 = FUN_142c86b70(lVar3,local_18);
    FUN_142c878b0(*(undefined8 *)(lVar3 + 0x18),uVar5);
  }
  return;
}



// FUNCTION 142c752e0 FUN_142c752e0 body=364 status=ok
// SIG undefined FUN_142c752e0(void)

void FUN_142c752e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    lVar6 = 0;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar10 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar10;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      UObjectBaseUtility::IsTemplate(param_1,0x30);
      lVar6 = FUN_1406d4330(param_1);
      if (lVar6 != 0) {
        uVar7 = FUN_1406d4330(param_1);
        plVar8 = (longlong *)FUN_142c86b70(uVar7,local_18);
        plVar3 = (longlong *)plVar8[1];
        lVar6 = *plVar8;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        if (lVar6 != 0) {
          lVar11 = *(longlong *)(lVar6 + 8);
          lVar9 = FUN_142e219b0();
          for (; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
            if (lVar11 == lVar9) {
              bVar4 = true;
              goto LAB_142c753b4;
            }
          }
          bVar4 = false;
LAB_142c753b4:
          lVar11 = 0;
          if (bVar4) {
            lVar11 = lVar6;
          }
          if (lVar11 != 0) {
            FUN_142c812b0(lVar11);
          }
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar3 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_10 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
  }
  return;
}



// FUNCTION 142c75450 FUN_142c75450 body=364 status=ok
// SIG undefined FUN_142c75450(void)

void FUN_142c75450(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    lVar6 = 0;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar10 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar10;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      UObjectBaseUtility::IsTemplate(param_1,0x30);
      lVar6 = FUN_1406d4330(param_1);
      if (lVar6 != 0) {
        uVar7 = FUN_1406d4330(param_1);
        plVar8 = (longlong *)FUN_142c86b70(uVar7,local_18);
        plVar3 = (longlong *)plVar8[1];
        lVar6 = *plVar8;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        if (lVar6 != 0) {
          lVar11 = *(longlong *)(lVar6 + 8);
          lVar9 = FUN_142e219b0();
          for (; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
            if (lVar11 == lVar9) {
              bVar4 = true;
              goto LAB_142c75524;
            }
          }
          bVar4 = false;
LAB_142c75524:
          lVar11 = 0;
          if (bVar4) {
            lVar11 = lVar6;
          }
          if (lVar11 != 0) {
            FUN_142c81330(lVar11);
          }
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar3 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_10 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
  }
  return;
}



// FUNCTION 142c755c0 FUN_142c755c0 body=140 status=ok
// SIG undefined FUN_142c755c0(void)

void FUN_142c755c0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined **local_48;
  undefined8 local_40;
  undefined ***local_10;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
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
    local_40 = FUN_1406d4330(param_1);
    local_48 = &PTR_LAB_14583fc30;
    local_10 = &local_48;
    FUN_142c6db40(local_40,&local_48);
  }
  return;
}



// FUNCTION 142c75650 FUN_142c75650 body=124 status=ok
// SIG undefined FUN_142c75650(void)

void FUN_142c75650(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_142c82200(uVar4,param_2);
  }
  return;
}



// FUNCTION 142c756d0 FUN_142c756d0 body=124 status=ok
// SIG undefined FUN_142c756d0(void)

void FUN_142c756d0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_142c82280(uVar4,param_2);
  }
  return;
}



// FUNCTION 142c75750 FUN_142c75750 body=124 status=ok
// SIG undefined FUN_142c75750(void)

void FUN_142c75750(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_142c82300(uVar4,param_2);
  }
  return;
}



// FUNCTION 142c757d0 FUN_142c757d0 body=124 status=ok
// SIG undefined FUN_142c757d0(void)

void FUN_142c757d0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_142c82d70(uVar4,param_2);
  }
  return;
}



// FUNCTION 142c75850 FUN_142c75850 body=124 status=ok
// SIG undefined FUN_142c75850(void)

void FUN_142c75850(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_142c83020(uVar4,param_2);
  }
  return;
}



// FUNCTION 142c758d0 FUN_142c758d0 body=124 status=ok
// SIG undefined FUN_142c758d0(void)

void FUN_142c758d0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_142c83090(uVar4,param_2);
  }
  return;
}



// FUNCTION 142c75950 FUN_142c75950 body=124 status=ok
// SIG undefined FUN_142c75950(void)

void FUN_142c75950(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_142c831e0(uVar4,param_2);
  }
  return;
}



// FUNCTION 142c759d0 FUN_142c759d0 body=124 status=ok
// SIG undefined FUN_142c759d0(void)

void FUN_142c759d0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_142c83250(uVar4,param_2);
  }
  return;
}



// FUNCTION 142c75a50 FUN_142c75a50 body=124 status=ok
// SIG undefined FUN_142c75a50(void)

void FUN_142c75a50(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_142c832c0(uVar4,param_2);
  }
  return;
}



// FUNCTION 142c75ad0 FUN_142c75ad0 body=124 status=ok
// SIG undefined FUN_142c75ad0(void)

void FUN_142c75ad0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_142c83330(uVar4,param_2);
  }
  return;
}



// FUNCTION 142c75b50 FUN_142c75b50 body=124 status=ok
// SIG undefined FUN_142c75b50(void)

void FUN_142c75b50(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_142c833a0(uVar4,param_2);
  }
  return;
}



// FUNCTION 142c75bd0 FUN_142c75bd0 body=124 status=ok
// SIG undefined FUN_142c75bd0(void)

void FUN_142c75bd0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_142c834e0(uVar4,param_2);
  }
  return;
}



// FUNCTION 142c75c50 FUN_142c75c50 body=124 status=ok
// SIG undefined FUN_142c75c50(void)

void FUN_142c75c50(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_142c83550(uVar4,param_2);
  }
  return;
}



// FUNCTION 142c75cd0 FUN_142c75cd0 body=124 status=ok
// SIG undefined FUN_142c75cd0(void)

void FUN_142c75cd0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_142c835c0(uVar4,param_2);
  }
  return;
}



// FUNCTION 142c75d50 FUN_142c75d50 body=124 status=ok
// SIG undefined FUN_142c75d50(void)

void FUN_142c75d50(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    uVar4 = FUN_1406d4330(param_1);
    FUN_142c83830(uVar4,param_2);
  }
  return;
}



// FUNCTION 142c75dd0 FUN_142c75dd0 body=194 status=ok
// SIG undefined FUN_142c75dd0(void)

void FUN_142c75dd0(longlong param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar1 = *(int *)(param_1 + 0xc);
  lVar6 = 0;
  lVar3 = lVar6;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar5;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    lVar4 = FUN_1406d4330(param_1);
    lVar3 = *(longlong *)(lVar4 + 0x18);
    if (param_2 != '\0') {
      if (lVar3 != 0) {
        lVar6 = *(longlong *)(lVar3 + 0x118);
      }
      FUN_142d8f020(lVar6);
      return;
    }
    if (lVar3 != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x118);
    }
    FUN_142d8f850(lVar6,*(undefined8 *)(lVar4 + 0xb0));
  }
  return;
}



// FUNCTION 142c75ea0 FUN_142c75ea0 body=435 status=ok
// SIG undefined FUN_142c75ea0(void)

void FUN_142c75ea0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar10 = iVar3 >> 0x1f & 0xffff;
      uVar5 = iVar3 + uVar10;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    else {
      lVar6 = 0;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) == 0) {
      UObjectBaseUtility::IsTemplate(param_1,0x30);
      lVar6 = FUN_1406d4330(param_1);
      if (lVar6 != 0) {
        uVar7 = FUN_1406d4330(param_1);
        puVar8 = (undefined8 *)FUN_142c86b70(uVar7,local_28);
        plVar4 = (longlong *)puVar8[1];
        uVar7 = *puVar8;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        if (param_2 != (longlong *)0x0) {
          uVar9 = FUN_142e27720();
          lVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar9);
          if (lVar6 != 0) {
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            local_res8[0] = 3;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            local_38 = uVar7;
            local_30 = plVar4;
            FUN_142c84e90(lVar6,&local_38,local_res8);
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
          }
        }
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
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_20 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
      }
    }
  }
  return;
}



// FUNCTION 142c76060 FUN_142c76060 body=367 status=ok
// SIG undefined FUN_142c76060(void)

void FUN_142c76060(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  uint uStackX_c;
  
  plVar6 = (longlong *)0x0;
  UObjectBaseUtility::IsTemplate(param_1,0x30);
  iVar4 = *(int *)(param_1 + 0xc);
  plVar5 = plVar6;
  if (iVar4 < (int)DAT_1469e91c4) {
    uVar7 = iVar4 >> 0x1f & 0xffff;
    uVar3 = iVar4 + uVar7;
    plVar5 = (longlong *)
             (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
             (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18);
  }
  if ((*(uint *)(plVar5 + 1) >> 0x1d & 1) != 0) {
    return;
  }
  plVar5 = plVar6;
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar8 = *(longlong **)(param_1 + 0x40);
      if (plVar8 == (longlong *)0x0) {
LAB_142c76127:
        plVar9 = (longlong *)0x1;
      }
      else {
        LOCK();
        iVar4 = (int)plVar8[1];
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(plVar8 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar4 == (int)plVar8[1];
          if (bVar10) {
            *(int *)(plVar8 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar10) {
            if (plVar8 != (longlong *)0x0) {
              plVar5 = *(longlong **)(param_1 + 0x38);
            }
            goto LAB_142c76127;
          }
          LOCK();
          iVar4 = (int)plVar8[1];
          bVar10 = iVar4 == 0;
          if (bVar10) {
            *(int *)(plVar8 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
        plVar8 = plVar6;
        plVar9 = (longlong *)0x1;
      }
      goto LAB_142c76137;
    }
  }
  plVar8 = (longlong *)((ulonglong)uStackX_c << 0x20);
  plVar9 = plVar6;
LAB_142c76137:
  if ((plVar9 != (longlong *)0x0) && (plVar8 != (longlong *)0x0)) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar2 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  *(char *)(plVar5 + 0x15) = (char)plVar5[0x15] + '\x01';
  *(undefined1 *)(plVar5 + 0xa4) = 1;
  if ((plVar5[3] != 0) && (plVar6 = *(longlong **)(plVar5[3] + 0x120), plVar6 == (longlong *)0x0)) {
    plVar6 = (longlong *)FUN_1423407b0();
  }
  plVar6 = (longlong *)FUN_142c71720(plVar6);
  if (plVar6 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142c761bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x260))(plVar6);
  return;
}



// FUNCTION 142c761d0 FUN_142c761d0 body=438 status=ok
// SIG undefined FUN_142c761d0(void)

void FUN_142c761d0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 local_38;
  undefined4 local_30;
  longlong *local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    plVar5 = (longlong *)0x0;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar10 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar10;
      plVar5 = (longlong *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
               (longlong)(int)((uVar4 & 0xffff) - uVar10) * 0x18);
    }
    if ((*(uint *)(plVar5 + 1) >> 0x1d & 1) == 0) {
      UObjectBaseUtility::IsTemplate(param_1,0x30);
      lVar6 = FUN_1406d4330(param_1);
      if (lVar6 != 0) {
        local_38 = *param_2;
        local_30 = *(undefined4 *)(param_2 + 1);
        uVar7 = FUN_1406d4330(param_1);
        plVar8 = (longlong *)FUN_142c86b70(uVar7,local_18);
        plVar5 = (longlong *)plVar8[1];
        plVar8 = (longlong *)*plVar8;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if ((plVar8 != (longlong *)0x0) && (plVar8[3] != 0)) {
          lVar6 = plVar8[1];
          lVar9 = FLobbyChatNode::StaticStruct();
          for (; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
            if (lVar6 == lVar9) {
              bVar3 = true;
              goto LAB_142c762c4;
            }
          }
          bVar3 = false;
LAB_142c762c4:
          plVar11 = (longlong *)0x0;
          if (bVar3) {
            plVar11 = plVar8;
          }
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 200))(plVar11,&local_38);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
            }
            local_28 = plVar8;
            local_20 = plVar5;
            FUN_142c878b0(plVar8[3],&local_28);
          }
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar5 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_10 + 1;
          lVar6 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
  }
  return;
}



// FUNCTION 142c76390 FUN_142c76390 body=495 status=ok
// SIG undefined FUN_142c76390(void)

void FUN_142c76390(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if (param_1 != 0) {
    iVar4 = *(int *)(param_1 + 0xc);
    lVar8 = 0;
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar12 = iVar4 >> 0x1f & 0xffff;
      uVar7 = iVar4 + uVar12;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
              (longlong)(int)((uVar7 & 0xffff) - uVar12) * 0x18;
    }
    if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) {
      UObjectBaseUtility::IsTemplate(param_1,0x30);
      lVar8 = FUN_1406d4330(param_1);
      if (lVar8 != 0) {
        uVar9 = FUN_1406d4330(param_1);
        plVar10 = (longlong *)FUN_142c86b70(uVar9,local_68);
        plVar5 = (longlong *)plVar10[1];
        lVar8 = *plVar10;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x18) != 0)) {
          iVar4 = *(int *)(lVar8 + 0x28);
          local_58 = DAT_146b2fcd8;
          uStack_50 = CONCAT31(uStack_50._1_3_,1);
          uStack_40 = 0;
          local_38 = 0;
          *(int *)(lVar8 + 0x28) = iVar4 + 1;
          uStack_4c = param_2;
          if (*(int *)(lVar8 + 0x2c) < iVar4 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(lVar8 + 0x20,iVar4);
          }
          lVar6 = *(longlong *)(lVar8 + 0x20);
          lVar11 = (longlong)iVar4 * 0x38;
          *(undefined8 *)(lVar11 + lVar6) = local_58;
          ((undefined8 *)(lVar11 + lVar6))[1] = CONCAT44(uStack_4c,uStack_50);
          puVar2 = (undefined8 *)(lVar11 + 0x10 + lVar6);
          *puVar2 = local_48;
          puVar2[1] = uStack_40;
          puVar3 = (undefined4 *)(lVar11 + 0x20 + lVar6);
          *puVar3 = (undefined4)local_38;
          puVar3[1] = local_38._4_4_;
          puVar3[2] = uStack_30;
          puVar3[3] = uStack_2c;
          *(undefined8 *)(lVar11 + 0x30 + lVar6) = local_28;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          local_78 = lVar8;
          local_70 = plVar5;
          FUN_142c878b0(*(undefined8 *)(lVar8 + 0x18),&local_78);
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          lVar8 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_60 + 1;
          lVar8 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)local_60 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142c76580 FUN_142c76580 body=460 status=ok
// SIG undefined FUN_142c76580(void)

void FUN_142c76580(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(param_1 + 0x18);
  plVar5 = (longlong *)0x0;
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x118) != 0)) {
    if ((*(char *)(lVar1 + 0x160) != '\0') && ((*(uint *)(param_1 + 0x4f4) & 4) == 0)) {
      *(uint *)(param_1 + 0x4f4) = *(uint *)(param_1 + 0x4f4) | 4;
      FUN_142d8eb90(*(undefined8 *)(lVar3 + 0x118),*(undefined8 *)(param_1 + 0xb0));
    }
    if ((*(char *)(lVar1 + 0x17c) != '\0') && ((*(uint *)(param_1 + 0x4f4) & 8) == 0)) {
      *(uint *)(param_1 + 0x4f4) = *(uint *)(param_1 + 0x4f4) | 8;
      plVar4 = plVar5;
      if (*(longlong *)(param_1 + 0x18) != 0) {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118);
      }
      FUN_142d8ea70(plVar4,*(undefined8 *)(param_1 + 0xb0));
    }
    if ((*(char *)(lVar1 + 0x17d) != '\0') && ((*(uint *)(param_1 + 0x4f4) & 0x10) == 0)) {
      *(uint *)(param_1 + 0x4f4) = *(uint *)(param_1 + 0x4f4) | 0x10;
      plVar4 = plVar5;
      if (*(longlong *)(param_1 + 0x18) != 0) {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118);
      }
      FUN_142d8edf0(plVar4,*(undefined8 *)(param_1 + 0xb0));
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar1 + 0x6a) != '\0') {
    FUN_142c835c0(param_1,1);
  }
  if (*(char *)(lVar1 + 0x6b) != '\0') {
    FUN_142c833a0(param_1,1);
  }
  if (*(char *)(lVar1 + 0x72) != '\0') {
    plVar4 = plVar5;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118);
    }
    FUN_142d8f020(plVar4,*(undefined8 *)(param_1 + 0xb0));
  }
  if (*(char *)(lVar1 + 0x6c) != '\0') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118);
    }
    if (plVar5 != (longlong *)0x0) {
      uVar2 = FUN_142e39920();
      lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar2);
      if (lVar3 != 0) {
        FUN_142cff920(lVar3,1,*(undefined8 *)(param_1 + 0xb0));
      }
    }
  }
  if (*(char *)(lVar1 + 0x73) != '\0') {
    FUN_142c82d70(param_1,0);
  }
  if (*(char *)(lVar1 + 0x6d) != '\0') {
    FUN_142c834e0(param_1,1);
  }
  if (*(char *)(lVar1 + 0x6e) != '\0') {
    FUN_142c82280(param_1,1);
  }
  if (*(char *)(lVar1 + 0x6f) != '\0') {
    FUN_142c832c0(param_1,1);
  }
  if (*(char *)(lVar1 + 0x70) != '\0') {
    FUN_142c83330(param_1,1);
  }
  return;
}



// FUNCTION 142c76750 FUN_142c76750 body=258 status=ok
// SIG undefined FUN_142c76750(void)

void FUN_142c76750(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar1 + 0x6a) != '\0') {
    FUN_142c835c0(param_1,1);
  }
  if (*(char *)(lVar1 + 0x6b) != '\0') {
    FUN_142c833a0(param_1,1);
  }
  plVar5 = (longlong *)0x0;
  if (*(char *)(lVar1 + 0x72) != '\0') {
    plVar4 = plVar5;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118);
    }
    FUN_142d8f020(plVar4,*(undefined8 *)(param_1 + 0xb0));
  }
  if (*(char *)(lVar1 + 0x6c) != '\0') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x118);
    }
    if (plVar5 != (longlong *)0x0) {
      uVar2 = FUN_142e39920();
      lVar3 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar2);
      if (lVar3 != 0) {
        FUN_142cff920(lVar3,1,*(undefined8 *)(param_1 + 0xb0));
      }
    }
  }
  if (*(char *)(lVar1 + 0x73) != '\0') {
    FUN_142c82d70(param_1,0);
  }
  if (*(char *)(lVar1 + 0x6d) != '\0') {
    FUN_142c834e0(param_1,1);
  }
  if (*(char *)(lVar1 + 0x6e) != '\0') {
    FUN_142c82280(param_1,1);
  }
  if (*(char *)(lVar1 + 0x6f) != '\0') {
    FUN_142c832c0(param_1,1);
  }
  if (*(char *)(lVar1 + 0x70) != '\0') {
    FUN_142c83330(param_1,1);
  }
  return;
}



// FUNCTION 142c76860 FUN_142c76860 body=201 status=ok
// SIG undefined FUN_142c76860(void)

void FUN_142c76860(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar3 = 0;
  if ((*(char *)(lVar1 + 0x17a) != '\0') && ((*(uint *)(param_1 + 0x4f4) & 1) == 0)) {
    *(uint *)(param_1 + 0x4f4) = *(uint *)(param_1 + 0x4f4) | 1;
    uVar2 = uVar3;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x118);
    }
    FUN_142d8ec30(uVar2,*(undefined8 *)(param_1 + 0xb0));
  }
  if ((*(char *)(lVar1 + 0x17b) != '\0') && ((*(uint *)(param_1 + 0x4f4) & 2) == 0)) {
    *(uint *)(param_1 + 0x4f4) = *(uint *)(param_1 + 0x4f4) | 2;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x118);
    }
    FUN_142d8eaf0(uVar3,*(undefined8 *)(param_1 + 0xb0));
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar1 + 0x68) != '\0') {
    FUN_142c82200(param_1,1);
  }
  if (*(char *)(lVar1 + 0x71) != '\0') {
    FUN_142c82300(param_1,1);
  }
  return;
}



// FUNCTION 142c76930 FUN_142c76930 body=57 status=ok
// SIG undefined FUN_142c76930(void)

void FUN_142c76930(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar1 + 0x68) != '\0') {
    FUN_142c82200(param_1,1);
  }
  if (*(char *)(lVar1 + 0x71) != '\0') {
    FUN_142c82300(param_1,1);
  }
  return;
}



// FUNCTION 142c76980 FUN_142c76980 body=75 status=ok
// SIG undefined FUN_142c76980(void)

void FUN_142c76980(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  *(char *)(param_1 + 0xa8) = *(char *)(param_1 + 0xa8) + '\x01';
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
  }
  plVar2 = (longlong *)FUN_142c71720(lVar1);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142c769bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x260))(plVar2);
    return;
  }
  return;
}



// FUNCTION 142c769d0 FUN_142c769d0 body=732 status=ok
// SIG undefined FUN_142c769d0(void)

void FUN_142c769d0(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((*(longlong *)(param_1 + 0x20) == 0) ||
     ((*(longlong *)(param_2 + 0x20) != 0 &&
      ((fVar10 = *(float *)(param_1 + 0x1c), fVar10 < 0.0 ||
       (*(float *)(param_2 + 0x1c) <= fVar10 && fVar10 != *(float *)(param_2 + 0x1c))))))) {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  }
  if ((*(float *)(param_1 + 0x10) < *(float *)(param_2 + 0x10)) &&
     (((DAT_1468b5d90 != *(float *)(param_2 + 0x38) || (DAT_1468b5d94 != *(float *)(param_2 + 0x3c))
       ) || (DAT_1468b5d98 != *(float *)(param_2 + 0x40))))) {
    if (((DAT_1468b5d90 != *(float *)(param_1 + 0x38)) ||
        (DAT_1468b5d94 != *(float *)(param_1 + 0x3c))) ||
       (DAT_1468b5d98 != *(float *)(param_1 + 0x40))) {
      cVar2 = FWeakObjectPtr::IsValid();
      fVar10 = DAT_1468b5d98;
      fVar12 = DAT_1468b5d90;
      fVar13 = DAT_1468b5d94;
      if (cVar2 != '\0') {
        lVar3 = FWeakObjectPtr::Get(param_1);
        lVar3 = *(longlong *)(lVar3 + 0x168);
        fVar10 = DAT_1468b5d98;
        fVar12 = DAT_1468b5d90;
        fVar13 = DAT_1468b5d94;
        if (lVar3 != 0) {
          fVar10 = *(float *)(lVar3 + 0x228);
          fVar12 = *(float *)(lVar3 + 0x220);
          fVar13 = *(float *)(lVar3 + 0x224);
        }
      }
      fVar14 = *(float *)(param_2 + 0x38) - fVar12;
      fVar12 = *(float *)(param_1 + 0x38) - fVar12;
      fVar15 = *(float *)(param_2 + 0x3c) - fVar13;
      fVar13 = *(float *)(param_1 + 0x3c) - fVar13;
      fVar11 = *(float *)(param_2 + 0x40) - fVar10;
      fVar10 = *(float *)(param_1 + 0x40) - fVar10;
      if (fVar13 * fVar13 + fVar12 * fVar12 + fVar10 * fVar10 <
          fVar15 * fVar15 + fVar14 * fVar14 + fVar11 * fVar11) goto LAB_142c76bc1;
    }
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  }
LAB_142c76bc1:
  fVar10 = *(float *)(param_1 + 0x10);
  if (*(float *)(param_1 + 0x10) <= *(float *)(param_2 + 0x10)) {
    fVar10 = *(float *)(param_2 + 0x10);
  }
  *(float *)(param_1 + 0x10) = fVar10;
  fVar10 = *(float *)(param_2 + 0x14);
  if (*(float *)(param_2 + 0x14) <= *(float *)(param_1 + 0x14)) {
    fVar10 = *(float *)(param_1 + 0x14);
  }
  fVar12 = *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 0x14) = fVar10;
  fVar10 = *(float *)(param_2 + 0x18);
  fVar13 = fVar10;
  if ((0.0 <= fVar12) && (fVar13 = fVar12, fVar10 <= fVar12)) {
    fVar13 = fVar10;
  }
  cVar2 = *(char *)(param_1 + 0x28);
  *(float *)(param_1 + 0x18) = fVar13;
  if (cVar2 == '\0') {
    cVar2 = *(char *)(param_2 + 0x28);
  }
  *(char *)(param_1 + 0x28) = cVar2;
  bVar1 = *(byte *)(param_1 + 0x44);
  if (((bVar1 & 1) == 0) && ((*(byte *)(param_2 + 0x44) & 1) == 0)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  *(byte *)(param_1 + 0x44) = bVar1 & 0xfe | bVar4;
  if (((bVar1 & 2) == 0) && ((*(byte *)(param_2 + 0x44) & 2) == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 2;
  }
  *(byte *)(param_1 + 0x44) = bVar1 & 0xfc | bVar4 | bVar5;
  if (((bVar1 & 4) == 0) && ((*(byte *)(param_2 + 0x44) & 4) == 0)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 4;
  }
  *(byte *)(param_1 + 0x44) = bVar1 & 0xf8 | bVar4 | bVar5 | bVar6;
  if (((bVar1 & 8) == 0) && ((*(byte *)(param_2 + 0x44) & 8) == 0)) {
    bVar7 = 0;
  }
  else {
    bVar7 = 8;
  }
  *(byte *)(param_1 + 0x44) = bVar1 & 0xf0 | bVar4 | bVar5 | bVar6 | bVar7;
  if (((bVar1 & 0x10) == 0) && ((*(byte *)(param_2 + 0x44) & 0x10) == 0)) {
    bVar8 = 0;
  }
  else {
    bVar8 = 0x10;
  }
  *(byte *)(param_1 + 0x44) = bVar1 & 0xe0 | bVar4 | bVar5 | bVar6 | bVar7 | bVar8;
  if (((bVar1 & 0x20) == 0) && ((*(byte *)(param_2 + 0x44) & 0x20) == 0)) {
    bVar9 = 0;
  }
  else {
    bVar9 = 0x20;
  }
  *(byte *)(param_1 + 0x44) = bVar1 & 0xc0 | bVar4 | bVar5 | bVar6 | bVar7 | bVar8 | bVar9;
  return;
}



// FUNCTION 142c76cb0 FUN_142c76cb0 body=9081 status=ok
// SIG undefined FUN_142c76cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte FUN_142c76cb0(ulonglong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 **ppuVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  int *piVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong **pplVar20;
  ulonglong uVar21;
  longlong lVar22;
  int *piVar23;
  int *piVar24;
  undefined1 *puVar25;
  uint uVar26;
  longlong lVar27;
  uint *puVar28;
  undefined4 *puVar29;
  int *piVar30;
  longlong lVar31;
  longlong lVar32;
  int *piVar33;
  uint *puVar34;
  ulonglong uVar35;
  uint uVar36;
  uint *puVar37;
  byte bVar38;
  longlong *plVar39;
  undefined1 auStack_bb8 [32];
  byte local_b98;
  char local_b90 [8];
  longlong *local_b88;
  longlong *local_b80;
  undefined8 local_b78;
  undefined1 local_b70;
  undefined1 local_b6f [7];
  ulonglong local_b68;
  uint local_b60;
  uint local_b5c;
  uint *local_b58;
  int local_b48 [2];
  longlong *local_b40;
  undefined8 local_b38;
  longlong *local_b30;
  longlong *local_b28;
  uint *local_b20;
  undefined8 uStack_b18;
  uint *puStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  ulonglong local_af8;
  longlong *local_af0;
  undefined1 local_ae8 [8];
  int local_ae0;
  int local_adc;
  ulonglong local_ad8;
  longlong *local_ad0;
  undefined8 uStack_ac8;
  uint *puStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 *local_aa8;
  longlong *local_aa0;
  uint local_a98;
  uint uStack_a94;
  uint *puStack_a90;
  undefined4 local_a88;
  uint uStack_a84;
  int iStack_a80;
  undefined4 uStack_a7c;
  int local_a78;
  uint uStack_a74;
  uint *puStack_a70;
  undefined4 local_a68;
  uint uStack_a64;
  int iStack_a60;
  undefined4 uStack_a5c;
  uint local_a58;
  uint uStack_a54;
  uint *puStack_a50;
  undefined4 local_a48;
  uint uStack_a44;
  uint uStack_a40;
  undefined4 uStack_a3c;
  longlong local_a38;
  undefined8 local_a30;
  int local_a28;
  uint uStack_a24;
  uint *puStack_a20;
  undefined4 local_a18;
  uint uStack_a14;
  int iStack_a10;
  undefined4 uStack_a0c;
  uint *local_a08;
  undefined8 local_a00;
  int local_9f8;
  uint *local_9f0;
  uint local_9e8;
  uint uStack_9e4;
  uint local_9e0;
  longlong local_9d8;
  uint *local_9d0;
  longlong local_9c8;
  longlong local_9c0;
  undefined8 local_9b8;
  undefined4 local_9b0;
  undefined4 local_9ac;
  longlong local_9a8;
  longlong local_9a0;
  int *local_998;
  undefined4 local_990;
  undefined4 local_98c;
  longlong local_988;
  longlong local_980;
  int *local_978;
  undefined4 local_970;
  undefined4 local_96c;
  longlong local_968;
  longlong local_960;
  undefined8 local_958;
  undefined4 local_950;
  undefined4 local_94c;
  undefined4 local_948;
  uint uStack_944;
  uint *puStack_940;
  undefined4 local_938;
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined4 local_928;
  uint uStack_924;
  uint *puStack_920;
  undefined4 local_918;
  undefined4 uStack_914;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined4 local_908;
  uint uStack_904;
  uint *puStack_900;
  undefined4 local_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined4 local_8e8;
  undefined4 uStack_8e4;
  uint *puStack_8e0;
  undefined4 local_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  undefined1 local_8c8 [4];
  int local_8c4;
  undefined8 local_8c0;
  undefined1 *local_8b8;
  longlong local_8b0;
  uint *local_8a8;
  undefined1 local_8a0 [8];
  undefined8 local_898;
  int iStack_890;
  uint uStack_88c;
  uint *local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 local_870;
  int iStack_868;
  uint uStack_864;
  uint *local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  uint *local_848;
  uint uStack_840;
  uint uStack_83c;
  uint *local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 local_820;
  uint uStack_818;
  uint uStack_814;
  uint *local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 local_7f8;
  undefined4 uStack_7f0;
  uint uStack_7ec;
  uint *local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined4 uStack_7c8;
  uint uStack_7c4;
  uint *local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 local_7a8;
  undefined4 uStack_7a0;
  uint uStack_79c;
  uint *local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  int local_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  uint local_730;
  uint uStack_72c;
  uint local_710;
  uint uStack_70c;
  longlong local_700;
  undefined8 local_6f8;
  int *local_6f0;
  undefined4 local_6e8;
  int local_6e4;
  longlong local_6e0;
  longlong local_6d8;
  longlong local_6d0;
  longlong local_6c8;
  longlong local_6c0;
  longlong local_6b8;
  longlong local_6b0;
  longlong *local_6a8;
  longlong local_6a0;
  undefined1 *local_698;
  longlong local_690 [2];
  byte local_680 [8];
  longlong local_678;
  longlong local_670;
  longlong local_668;
  longlong local_660;
  longlong local_658;
  uint local_640;
  uint uStack_63c;
  uint *local_628;
  int local_620;
  uint uStack_61c;
  uint *local_608;
  int local_600;
  uint uStack_5fc;
  undefined1 local_5f0 [16];
  undefined1 local_5e0 [32];
  int local_5c0;
  int iStack_5bc;
  int local_5a0;
  int iStack_59c;
  undefined1 local_588 [2];
  char local_586;
  undefined1 local_580 [8];
  undefined8 local_578;
  undefined1 local_558 [16];
  undefined1 local_548;
  undefined1 local_547;
  undefined1 local_508 [4];
  int local_504;
  longlong local_500;
  undefined1 local_4e0;
  longlong local_4a0;
  undefined1 local_458 [144];
  longlong local_3c8;
  undefined1 local_398 [144];
  longlong local_308;
  undefined1 local_2d8 [144];
  longlong local_248;
  undefined1 local_218 [8];
  longlong local_210;
  longlong local_1b0;
  undefined1 local_168 [144];
  longlong local_d8;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_bb8;
  uVar21 = 0;
  local_b60 = 0;
  local_b88 = param_2;
  if (param_2[10] != 0) {
    uStack_a94 = 1;
    puVar28 = (uint *)(param_1 + 0x18);
    uStack_a84 = 0;
    iStack_a80 = 0;
    uVar14 = *(uint *)(param_1 + 0x40);
    puVar34 = (uint *)(param_1 + 0x28);
    local_a98 = 0;
    if (uVar14 != 0) {
      puVar37 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar37 = puVar34;
      }
      uVar36 = *puVar37;
      while (uVar36 == 0) {
        iVar12 = (int)uVar21;
        iStack_a80 = iStack_a80 + 0x20;
        local_a98 = iVar12 + 1;
        uVar21 = (ulonglong)local_a98;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
        goto LAB_142c76dba;
        uVar36 = puVar37[(longlong)iVar12 + 1];
      }
      uStack_a94 = -uVar36 & uVar36;
      iVar12 = 0x1f;
      if (uStack_a94 != 0) {
        for (; uStack_a94 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (uStack_a94 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      uStack_a84 = (iStack_a80 - iVar12) + 0x1f;
      if ((int)uVar14 < (int)uStack_a84) {
LAB_142c76dba:
        uStack_a84 = uVar14;
      }
    }
    local_a88 = 0xffffffff;
    uStack_63c = *(uint *)(param_1 + 0x40);
    uStack_b18 = CONCAT44(uStack_a94,local_a98);
    uStack_b08 = CONCAT44(uStack_a84,0xffffffff);
    uStack_b00 = CONCAT44(uStack_a7c,iStack_a80);
    local_640 = -1 << ((byte)uStack_63c & 0x1f);
    uVar36 = uStack_63c & 0xffffffe0;
    uStack_840 = local_a98;
    uStack_83c = uStack_a94;
    if (uStack_63c != uVar14) {
      puVar37 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar37 = puVar34;
      }
      uVar26 = puVar37[(int)uStack_63c >> 5] & local_640;
      iVar12 = (int)uStack_63c >> 5;
      while (uVar26 == 0) {
        uVar36 = uVar36 + 0x20;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
        goto LAB_142c76e96;
        uVar26 = puVar37[(longlong)iVar12 + 1];
        local_640 = 0xffffffff;
        iVar12 = iVar12 + 1;
      }
      uVar26 = -uVar26 & uVar26;
      iVar12 = 0x1f;
      if (uVar26 != 0) {
        for (; uVar26 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (uVar26 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      uStack_63c = (uVar36 - iVar12) + 0x1f;
      if ((int)uVar14 < (int)uStack_63c) {
LAB_142c76e96:
        uStack_63c = uVar14;
      }
    }
    local_b68 = (ulonglong)uStack_63c;
    local_b58 = puVar28;
    local_b20 = puVar28;
    puStack_b10 = puVar34;
    puStack_a90 = puVar34;
    local_838 = puVar34;
    uStack_830 = uStack_b08;
    local_828 = uStack_b00;
    local_848 = puVar28;
    do {
      if (((uStack_830._4_4_ == (int)local_b68) && (local_838 == puVar34)) && (local_848 == puVar28)
         ) {
        return 1;
      }
      local_b30 = *(longlong **)((longlong)uStack_830._4_4_ * 0x20 + 8 + *(longlong *)local_848);
      local_b28 = local_b30 +
                  (longlong)
                  *(int *)((longlong)uStack_830._4_4_ * 0x20 + 0x10 + *(longlong *)local_848) * 0x18
      ;
      if (local_b30 != local_b28) {
        puVar37 = (uint *)(local_b30 + 0x10);
        do {
          lVar22 = param_2[10];
          if (*(int *)(lVar22 + 8) - *(int *)(lVar22 + 0x34) <
              (int)(((puVar37[-0x1c] - puVar37[-0x11]) - *(int *)(lVar22 + 0x34)) +
                   *(int *)(lVar22 + 8))) {
            FUN_1413c1970(lVar22);
          }
          uVar14 = puVar37[-0x14];
          puStack_b10 = puVar37 + -0x1a;
          uStack_a24 = 1;
          local_a28 = 0;
          uStack_a14 = 0;
          iStack_a10 = 0;
          if (uVar14 != 0) {
            puVar28 = *(uint **)(puVar37 + -0x16);
            if (*(uint **)(puVar37 + -0x16) == (uint *)0x0) {
              puVar28 = puStack_b10;
            }
            uVar36 = *puVar28;
            while (uVar36 == 0) {
              lVar27 = (longlong)local_a28;
              iStack_a10 = iStack_a10 + 0x20;
              iVar12 = local_a28 + 1;
              bVar3 = (int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a28;
              local_a28 = iVar12;
              if (bVar3) goto LAB_142c76ff9;
              uVar36 = puVar28[lVar27 + 1];
            }
            uStack_a24 = -uVar36 & uVar36;
            iVar12 = 0x1f;
            if (uStack_a24 != 0) {
              for (; uStack_a24 >> iVar12 == 0; iVar12 = iVar12 + -1) {
              }
            }
            if (uStack_a24 == 0) {
              iVar12 = 0x20;
            }
            else {
              iVar12 = 0x1f - iVar12;
            }
            uStack_a14 = (iStack_a10 - iVar12) + 0x1f;
            if ((int)uVar14 < (int)uStack_a14) {
LAB_142c76ff9:
              uStack_a14 = uVar14;
            }
          }
          local_a18 = 0xffffffff;
          uStack_72c = puVar37[-0x14];
          puVar28 = puVar37 + -0x1e;
          uStack_b18 = CONCAT44(uStack_a24,local_a28);
          uVar14 = puVar37[-0x14];
          uStack_b08 = CONCAT44(uStack_a14,0xffffffff);
          uStack_b00 = CONCAT44(uStack_a0c,iStack_a10);
          local_730 = -1 << ((byte)uStack_72c & 0x1f);
          uVar26 = uStack_72c & 0xffffffe0;
          iStack_890 = local_a28;
          uStack_88c = uStack_a24;
          local_b20 = puVar28;
          puStack_a20 = puStack_b10;
          local_888 = puStack_b10;
          uStack_880 = uStack_b08;
          local_878 = uStack_b00;
          local_898 = puVar28;
          uVar36 = uStack_72c;
          if (uStack_72c != uVar14) {
            puVar34 = *(uint **)(puVar37 + -0x16);
            if (*(uint **)(puVar37 + -0x16) == (uint *)0x0) {
              puVar34 = puVar37 + -0x1a;
            }
            uVar36 = puVar34[(int)uStack_72c >> 5] & local_730;
            iVar12 = (int)uStack_72c >> 5;
            while (uVar36 == 0) {
              uVar26 = uVar26 + 0x20;
              if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
              goto LAB_142c770e8;
              uVar36 = puVar34[(longlong)iVar12 + 1];
              local_730 = 0xffffffff;
              iVar12 = iVar12 + 1;
            }
            uVar36 = -uVar36 & uVar36;
            iVar12 = 0x1f;
            if (uVar36 != 0) {
              for (; uVar36 >> iVar12 == 0; iVar12 = iVar12 + -1) {
              }
            }
            if (uVar36 == 0) {
              iVar12 = 0x20;
            }
            else {
              iVar12 = 0x1f - iVar12;
            }
            uStack_72c = (uVar26 - iVar12) + 0x1f;
            uVar36 = uStack_72c;
            if ((int)uVar14 < (int)uStack_72c) {
LAB_142c770e8:
              uStack_72c = uVar14;
              uVar36 = uVar14;
            }
          }
          while( true ) {
            if (((uStack_880._4_4_ == uVar36) && (local_888 == puVar37 + -0x1a)) &&
               (local_898 == puVar28)) break;
            FUN_140ac3dd0(lVar22,local_8a0,
                          *(longlong *)local_898 + (longlong)(int)uStack_880._4_4_ * 0xc,0);
            uStack_880 = CONCAT44(uStack_880._4_4_,(uint)uStack_880 & ~uStack_88c);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_890);
          }
          lVar22 = local_b88[10];
          if (*(int *)(lVar22 + 8) - *(int *)(lVar22 + 0x34) <
              (int)(((puVar37[-8] - puVar37[3]) - *(int *)(lVar22 + 0x34)) + *(int *)(lVar22 + 8)))
          {
            FUN_1413c1970(lVar22);
          }
          uVar14 = *puVar37;
          puStack_b10 = puVar37 + -6;
          uStack_a74 = 1;
          local_a78 = 0;
          uStack_a64 = 0;
          iStack_a60 = 0;
          if (uVar14 != 0) {
            puVar28 = *(uint **)(puVar37 + -2);
            if (*(uint **)(puVar37 + -2) == (uint *)0x0) {
              puVar28 = puStack_b10;
            }
            uVar36 = *puVar28;
            while (uVar36 == 0) {
              lVar27 = (longlong)local_a78;
              iStack_a60 = iStack_a60 + 0x20;
              iVar12 = local_a78 + 1;
              bVar3 = (int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a78;
              local_a78 = iVar12;
              if (bVar3) goto LAB_142c7722c;
              uVar36 = puVar28[lVar27 + 1];
            }
            uStack_a74 = -uVar36 & uVar36;
            iVar12 = 0x1f;
            if (uStack_a74 != 0) {
              for (; uStack_a74 >> iVar12 == 0; iVar12 = iVar12 + -1) {
              }
            }
            if (uStack_a74 == 0) {
              iVar12 = 0x20;
            }
            else {
              iVar12 = 0x1f - iVar12;
            }
            uStack_a64 = (iStack_a60 - iVar12) + 0x1f;
            if ((int)uVar14 < (int)uStack_a64) {
LAB_142c7722c:
              uStack_a64 = uVar14;
            }
          }
          local_a68 = 0xffffffff;
          uStack_70c = *puVar37;
          puVar28 = puVar37 + -10;
          uStack_b18 = CONCAT44(uStack_a74,local_a78);
          uVar14 = *puVar37;
          uStack_b08 = CONCAT44(uStack_a64,0xffffffff);
          uStack_b00 = CONCAT44(uStack_a5c,iStack_a60);
          local_710 = -1 << ((byte)uStack_70c & 0x1f);
          uVar26 = uStack_70c & 0xffffffe0;
          iStack_868 = local_a78;
          uStack_864 = uStack_a74;
          local_b20 = puVar28;
          puStack_a70 = puStack_b10;
          local_860 = puStack_b10;
          uStack_858 = uStack_b08;
          local_850 = uStack_b00;
          local_870 = puVar28;
          uVar36 = uStack_70c;
          if (uStack_70c != uVar14) {
            puVar34 = *(uint **)(puVar37 + -2);
            if (*(uint **)(puVar37 + -2) == (uint *)0x0) {
              puVar34 = puVar37 + -6;
            }
            uVar36 = puVar34[(int)uStack_70c >> 5] & local_710;
            iVar12 = (int)uStack_70c >> 5;
            while (uVar36 == 0) {
              uVar26 = uVar26 + 0x20;
              if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
              goto LAB_142c77318;
              uVar36 = puVar34[(longlong)iVar12 + 1];
              local_710 = 0xffffffff;
              iVar12 = iVar12 + 1;
            }
            uVar36 = -uVar36 & uVar36;
            iVar12 = 0x1f;
            if (uVar36 != 0) {
              for (; uVar36 >> iVar12 == 0; iVar12 = iVar12 + -1) {
              }
            }
            if (uVar36 == 0) {
              iVar12 = 0x20;
            }
            else {
              iVar12 = 0x1f - iVar12;
            }
            uStack_70c = (uVar26 - iVar12) + 0x1f;
            uVar36 = uStack_70c;
            if ((int)uVar14 < (int)uStack_70c) {
LAB_142c77318:
              uStack_70c = uVar14;
              uVar36 = uVar14;
            }
          }
          while( true ) {
            if (((uStack_858._4_4_ == uVar36) && (local_860 == puVar37 + -6)) &&
               (local_870 == puVar28)) break;
            FUN_140ac3dd0(lVar22,local_8c8,
                          *(longlong *)local_870 + (longlong)(int)uStack_858._4_4_ * 0xc,0);
            uStack_858 = CONCAT44(uStack_858._4_4_,(uint)uStack_858 & ~uStack_864);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_868);
          }
          piVar30 = (int *)local_b88[0xb];
          if (piVar30 != (int *)0x0) {
            *piVar30 = *piVar30 + puVar37[0xe];
          }
          puVar37 = puVar37 + 0x30;
          local_b30 = local_b30 + 0x18;
          param_2 = local_b88;
          puVar28 = local_b58;
          puVar34 = puStack_a90;
        } while (local_b30 != local_b28);
      }
      uStack_830 = CONCAT44(uStack_830._4_4_,(uint)uStack_830 & ~uStack_83c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_840);
    } while( true );
  }
  if (param_2[0xc] != 0) {
    return 0;
  }
  local_b98 = 0;
  local_b68 = param_1;
  if (*param_2 == 0) {
    plVar39 = (longlong *)param_2[1];
    if (plVar39 != (longlong *)0x0) {
      bVar38 = 1;
      (**(code **)(*plVar39 + 0xa0))(plVar39);
      cVar10 = (**(code **)(*plVar39 + 0xa0))(plVar39);
      while (cVar10 == '\0') {
        bVar11 = FUN_142c7e040(param_1,plVar39,param_2,0);
        bVar38 = bVar38 & bVar11;
        cVar10 = (**(code **)(*plVar39 + 0xa0))(plVar39);
      }
      return bVar38;
    }
    if ((char)param_2[8] == '\0') {
      return 0;
    }
    local_a8 = 0;
    uStack_a0 = 0;
    local_b28 = param_2;
    TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(&local_98,0,0);
    plVar39 = (longlong *)(param_1 + 0x18);
    local_78 = 0xffffffff;
    local_68 = 0;
    uStack_60 = 0;
    if (&local_a8 != plVar39) {
      lVar22 = *plVar39;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      uVar8 = *(undefined8 *)(param_1 + 0x40);
      uVar35 = (ulonglong)uStack_5c;
      local_68 = *(longlong *)(param_1 + 0x58);
      uStack_60 = *(undefined4 *)(param_1 + 0x60);
      uStack_5c = *(uint *)(param_1 + 100);
      local_78 = *(undefined8 *)(param_1 + 0x48);
      uVar9 = *(undefined8 *)(param_1 + 0x50);
      *plVar39 = local_a8;
      *(undefined8 *)(param_1 + 0x20) = uStack_a0;
      *(undefined8 *)(param_1 + 0x28) = local_98;
      *(undefined8 *)(param_1 + 0x30) = uStack_90;
      *(undefined8 *)(param_1 + 0x38) = local_88;
      *(undefined8 *)(param_1 + 0x40) = uStack_80;
      *(undefined8 *)(param_1 + 0x48) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x50) = uStack_70;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(ulonglong *)(param_1 + 0x60) = uVar35 << 0x20;
      local_a8 = lVar22;
      uStack_a0 = uVar4;
      local_98 = uVar5;
      uStack_90 = uVar6;
      local_88 = uVar7;
      uStack_80 = uVar8;
      uStack_70 = uVar9;
    }
    local_a08 = (uint *)0x0;
    local_a00 = 0;
    FUN_142c615e0(&local_a8,&local_a08);
    puVar28 = local_a08;
    lVar22 = (longlong)(int)local_a00;
    AlgoImpl::IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
              (local_a08,lVar22,local_b6f[0],local_b6f);
    local_af8 = 0;
    local_b58 = puVar28;
    uVar35 = (ulonglong)((longlong)(puVar28 + lVar22) + (3 - (longlong)puVar28)) >> 2;
    if (puVar28 + lVar22 < puVar28) {
      uVar35 = uVar21;
    }
    puVar34 = puVar28;
    local_b68 = uVar35;
    if (uVar35 != 0) {
      do {
        uVar21 = local_af8;
        uVar14 = *puVar28;
        local_b5c = uVar14;
        local_b58 = puVar28;
        FUN_140d2ceb0(&local_a8,&local_adc,uVar14);
        if (local_adc == -1) {
          lVar22 = 0;
        }
        else {
          lVar22 = (longlong)local_adc * 0x20 + local_a8;
        }
        plVar39 = (longlong *)(lVar22 + 8);
        if (*(int *)(lVar22 + 0x10) != 0) {
          FUN_142c6e340(param_1,&local_af0,uVar14);
          if ((local_af0 != (longlong *)0x0) || (*(int *)*plVar39 == 0)) {
            iVar12 = *(int *)(lVar22 + 0x10);
            local_b90[0] = '\0';
            local_9d0 = &local_b5c;
            local_8a8 = &local_b5c;
            lVar22 = 0;
            uVar35 = local_b68;
            puVar28 = local_b58;
            local_9d8 = param_1;
            local_8b0 = param_1;
            if (0 < (longlong)iVar12) {
              lVar27 = 0;
              plVar19 = local_af0;
              do {
                plVar17 = local_b88;
                piVar30 = (int *)(*plVar39 + lVar27);
                if (*piVar30 == 0) {
                  cVar10 = FUN_142c64390(&local_b28,piVar30,1);
                  plVar17 = local_b88;
                  if (cVar10 == '\0') {
                    FUN_142c64ad0(&local_8b0,plVar39);
                    break;
                  }
                  FNetBitReader::FNetBitReader
                            (local_458,local_b88[4],*(undefined8 *)(piVar30 + 0x2c),
                             (longlong)piVar30[0x2a]);
                  FUN_142c7e040(param_1,local_458,plVar17);
                  pplVar20 = (longlong **)FUN_142c6e340(param_1,local_5f0);
                  if (&local_af0 != pplVar20) {
                    local_af0 = *pplVar20;
                    *pplVar20 = (longlong *)0x0;
                    SharedPointerInternals::FSharedReferencer<1>::operator=(local_ae8,pplVar20 + 1);
                    plVar19 = local_af0;
                  }
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (local_5f0);
                  if (plVar19 == (longlong *)0x0) {
                    FUN_142c64ad0(&local_8b0,plVar39);
                    if (local_3c8 != 0) {
                      FMemory::Free();
                    }
                    puVar25 = local_458;
LAB_142c78f62:
                    FArchive::~FArchive(puVar25);
                    break;
                  }
                  *(undefined1 *)((longlong)plVar17 + 0x41) = 1;
                  if (local_3c8 != 0) {
                    FMemory::Free();
                  }
                  FArchive::~FArchive(local_458);
                }
                else if (*piVar30 == 1) {
                  FNetBitReader::FNetBitReader
                            (local_398,local_b88[4],*(undefined8 *)(piVar30 + 0x2c),
                             (longlong)piVar30[0x2a]);
                  FUN_142c7e040(param_1,local_398,plVar17);
                  pplVar20 = (longlong **)FUN_142c6e340(param_1,local_5e0);
                  if (&local_af0 != pplVar20) {
                    local_af0 = *pplVar20;
                    *pplVar20 = (longlong *)0x0;
                    SharedPointerInternals::FSharedReferencer<1>::operator=(local_ae8,pplVar20 + 1);
                    plVar19 = local_af0;
                  }
                  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                            (local_5e0);
                  if (plVar19 == (longlong *)0x0) {
                    TSet<TTuple<int,`anonymous_namespace'::FContainerTestValueType>,TDefaultMapHashableKeyFuncs<int,`anonymous_namespace'::FContainerTestValueType,0>,FDefaultSetAllocator>
                    ::Remove(param_1 + 0x18,local_b5c);
                    if (local_308 != 0) {
                      FMemory::Free();
                    }
                    puVar25 = local_398;
                    goto LAB_142c78f62;
                  }
                  if (local_308 != 0) {
                    FMemory::Free();
                  }
                  FArchive::~FArchive(local_398);
                }
                else {
                  cVar10 = FUN_142c64390(&local_b28,piVar30,0);
                  if (cVar10 == '\0') {
                    FUN_142c647c0(&local_9d8,piVar30);
                  }
                  else if (*piVar30 == 2) {
                    local_778 = 0;
                    uStack_770 = 0;
                    local_768 = 0;
                    uStack_760 = 0;
                    local_758 = 0;
                    uStack_750 = 0;
                    local_748 = 0;
                    FNetBitReader::FNetBitReader
                              (local_168,local_b88[4],*(undefined8 *)(piVar30 + 0x2c),
                               (longlong)piVar30[0x2a]);
                    cVar10 = FUN_142c79510(&local_778,local_168);
                    if (cVar10 == '\0') {
                      FUN_142c647c0(&local_9d8,piVar30);
                    }
                    else {
                      puVar18 = (undefined8 *)FUN_142c6d300(plVar19,&local_778);
                      local_b90[0] = '\x01';
                      *puVar18 = local_778;
                      puVar18[1] = uStack_770;
                      puVar18[2] = local_768;
                      puVar18[3] = uStack_760;
                      *(undefined4 *)(puVar18 + 4) = (undefined4)local_758;
                      *(undefined4 *)((longlong)puVar18 + 0x24) = local_758._4_4_;
                      *(undefined4 *)(puVar18 + 5) = (undefined4)uStack_750;
                      *(undefined4 *)((longlong)puVar18 + 0x2c) = uStack_750._4_4_;
                      puVar18[6] = local_748;
                      *(undefined1 *)((longlong)local_b88 + 0x41) = 1;
                    }
                    if (local_d8 != 0) {
                      FMemory::Free();
                    }
                    FArchive::~FArchive(local_168);
                  }
                  else {
                    FUN_142c62100(&local_548,(char)piVar30[1] != '\x17',local_b5c,0);
                    local_547 = (undefined1)piVar30[1];
                    FNetBitReader::FNetBitReader
                              (local_2d8,local_b88[4],*(undefined8 *)(piVar30 + 0x2c),
                               (longlong)piVar30[0x2a]);
                    bVar38 = (**(code **)(*plVar19 + 0x90))(plVar19,&local_548);
                    *(byte *)((longlong)local_b88 + 0x41) =
                         *(byte *)((longlong)local_b88 + 0x41) | bVar38;
                    if (bVar38 == 0) {
                      FUN_142c647c0(&local_9d8,piVar30);
                    }
                    else {
                      FUN_142c6af20(param_1,local_2d8);
                    }
                    if (local_248 != 0) {
                      FMemory::Free();
                    }
                    FArchive::~FArchive(local_2d8);
                    FUN_142c63ad0(&local_548);
                  }
                }
                lVar22 = lVar22 + 1;
                lVar27 = lVar27 + 0xc0;
              } while (lVar22 < iVar12);
              uVar21 = local_af8;
              uVar35 = local_b68;
              puVar28 = local_b58;
              if ((local_b90[0] != '\0') && (plVar19 != (longlong *)0x0)) {
                (**(code **)(*plVar19 + 0x80))(plVar19);
                uVar21 = local_af8;
                uVar35 = local_b68;
                puVar28 = local_b58;
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_af0);
        }
        puVar28 = puVar28 + 1;
        local_af8 = uVar21 + 1;
        puVar34 = local_a08;
        local_b58 = puVar28;
      } while (local_af8 != uVar35);
    }
    *(bool *)((longlong)local_b88 + 0x43) = 0 < *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x4c);
    if (puVar34 != (uint *)0x0) {
      FMemory::Free(puVar34);
    }
    uStack_60 = 0;
    if (local_68 != 0) {
      FMemory::Free();
    }
    FUN_142c63940(&local_a8);
    return 1;
  }
  plVar39 = (longlong *)param_2[3];
  local_b40 = (longlong *)0x0;
  local_b38 = 0;
  local_b30 = plVar39;
  if (plVar39 != (longlong *)0x0) {
    plVar19 = (longlong *)((longlong)plVar39 + 8);
    uStack_a54 = 1;
    uVar14 = *(uint *)((longlong)plVar39 + 0x30);
    puVar28 = (uint *)((longlong)plVar39 + 0x18);
    local_a58 = 0;
    uStack_a44 = 0;
    uStack_a40 = 0;
    if (uVar14 != 0) {
      puVar34 = *(uint **)((longlong)plVar39 + 0x28);
      if (*(uint **)((longlong)plVar39 + 0x28) == (uint *)0x0) {
        puVar34 = puVar28;
      }
      uVar36 = *puVar34;
      uVar35 = uVar21;
      while (uVar36 == 0) {
        iVar12 = (int)uVar21;
        uStack_a40 = (int)uVar35 + 0x20;
        uVar35 = (ulonglong)uStack_a40;
        local_a58 = iVar12 + 1;
        uVar21 = (ulonglong)local_a58;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
        goto LAB_142c774d2;
        uVar36 = puVar34[(longlong)iVar12 + 1];
      }
      uStack_a54 = -uVar36 & uVar36;
      local_8c4 = 0x1f;
      if (uStack_a54 != 0) {
        for (; uStack_a54 >> local_8c4 == 0; local_8c4 = local_8c4 + -1) {
        }
      }
      if (uStack_a54 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - local_8c4;
      }
      uStack_a44 = (uStack_a40 - iVar12) + 0x1f;
      if ((int)uVar14 < (int)uStack_a44) {
LAB_142c774d2:
        uStack_a44 = uVar14;
      }
    }
    local_a48 = 0xffffffff;
    uStack_9e4 = *(uint *)((longlong)plVar39 + 0x30);
    uStack_b18 = CONCAT44(uStack_a54,local_a58);
    uStack_b08 = CONCAT44(uStack_a44,0xffffffff);
    uStack_b00 = CONCAT44(uStack_a3c,uStack_a40);
    local_9f8 = (int)uStack_9e4 >> 5;
    local_9e8 = -1 << ((byte)uStack_9e4 & 0x1f);
    local_9e0 = uStack_9e4 & 0xffffffe0;
    uStack_818 = local_a58;
    uStack_814 = uStack_a54;
    local_b20 = (uint *)plVar19;
    puStack_b10 = puVar28;
    puStack_a50 = puVar28;
    local_9f0 = puVar28;
    local_810 = puVar28;
    uStack_808 = uStack_b08;
    local_800 = uStack_b00;
    local_820 = plVar19;
    uVar36 = uStack_9e4;
    if (uStack_9e4 != uVar14) {
      puVar34 = *(uint **)((longlong)plVar39 + 0x28);
      if (*(uint **)((longlong)plVar39 + 0x28) == (uint *)0x0) {
        puVar34 = puVar28;
      }
      uVar36 = puVar34[local_9f8] & local_9e8;
      while (uVar36 == 0) {
        lVar22 = (longlong)local_9f8;
        local_9e0 = local_9e0 + 0x20;
        iVar12 = local_9f8 + 1;
        bVar3 = (int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_9f8;
        local_9f8 = iVar12;
        if (bVar3) goto LAB_142c775de;
        uVar36 = puVar34[lVar22 + 1];
        local_9e8 = 0xffffffff;
      }
      uVar36 = -uVar36 & uVar36;
      local_780 = 0x1f;
      if (uVar36 != 0) {
        for (; uVar36 >> local_780 == 0; local_780 = local_780 + -1) {
        }
      }
      if (uVar36 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - local_780;
      }
      uStack_9e4 = (local_9e0 - iVar12) + 0x1f;
      uVar36 = uStack_9e4;
      if ((int)uVar14 < (int)uStack_9e4) {
LAB_142c775de:
        uStack_9e4 = uVar14;
        uVar36 = uVar14;
      }
    }
    while( true ) {
      if (((uStack_808._4_4_ == uVar36) && (local_810 == puVar28)) && (local_820 == plVar19)) break;
      *(undefined1 *)((longlong)(int)uStack_808._4_4_ * 0xb8 + 8 + *local_820) = 0;
      uStack_808 = CONCAT44(uStack_808._4_4_,(uint)uStack_808 & ~uStack_814);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_818);
    }
  }
  plVar19 = *(longlong **)(param_1 + 8);
  plVar15 = plVar19 + (longlong)*(int *)(param_1 + 0x10) * 2;
  local_b80 = (longlong *)0x0;
  local_b78 = 0;
  plVar17 = local_b88;
  for (; plVar19 != plVar15; plVar19 = plVar19 + 2) {
    piVar30 = (int *)0x0;
    cVar10 = FUN_142c69f10(param_1,plVar17,plVar19);
    if (cVar10 == '\0') {
      piVar33 = piVar30;
      if (plVar39 != (longlong *)0x0) {
        if (*(int *)((longlong)plVar39 + 0x10) != *(int *)((longlong)plVar39 + 0x3c)) {
          lVar22 = *(longlong *)((longlong)plVar39 + 0x48);
          if (*(longlong *)((longlong)plVar39 + 0x48) == 0) {
            lVar22 = (longlong)plVar39 + 0x40;
          }
          iVar12 = *(int *)(lVar22 + ((longlong)*(int *)((longlong)plVar39 + 0x50) - 1U &
                                     (longlong)*(int *)(*plVar19 + 0xa4)) * 4);
          if (iVar12 != -1) {
            do {
              piVar23 = (int *)((longlong)iVar12 * 0xb8 + *(longlong *)((longlong)plVar39 + 8));
              if (*piVar23 == *(int *)(*plVar19 + 0xa4)) {
                if (iVar12 != -1) goto LAB_142c77715;
                goto LAB_142c77712;
              }
              iVar12 = piVar23[0x2c];
            } while (iVar12 != -1);
            piVar33 = (int *)0x0;
            goto LAB_142c77725;
          }
        }
LAB_142c77712:
        piVar23 = piVar30;
LAB_142c77715:
        piVar33 = piVar23 + 2;
        if (piVar23 == (int *)0x0) {
          piVar33 = piVar30;
        }
      }
LAB_142c77725:
      if (piVar33 != (int *)0x0) {
        *(undefined1 *)piVar33 = 1;
      }
    }
    else {
      piVar33 = piVar30;
      if (plVar39 != (longlong *)0x0) {
        if (*(int *)((longlong)plVar39 + 0x10) != *(int *)((longlong)plVar39 + 0x3c)) {
          lVar22 = *(longlong *)((longlong)plVar39 + 0x48);
          if (*(longlong *)((longlong)plVar39 + 0x48) == 0) {
            lVar22 = (longlong)plVar39 + 0x40;
          }
          iVar12 = *(int *)(lVar22 + ((longlong)*(int *)((longlong)plVar39 + 0x50) - 1U &
                                     (longlong)*(int *)(*plVar19 + 0xa4)) * 4);
          if (iVar12 != -1) {
            do {
              piVar23 = (int *)((longlong)iVar12 * 0xb8 + *(longlong *)((longlong)plVar39 + 8));
              if (*piVar23 == *(int *)(*plVar19 + 0xa4)) {
                if (iVar12 != -1) goto LAB_142c777c5;
                goto LAB_142c777c2;
              }
              iVar12 = piVar23[0x2c];
            } while (iVar12 != -1);
            piVar33 = (int *)0x0;
            goto LAB_142c777d5;
          }
        }
LAB_142c777c2:
        piVar23 = piVar30;
LAB_142c777c5:
        piVar33 = piVar23 + 2;
        if (piVar23 == (int *)0x0) {
          piVar33 = piVar30;
        }
      }
LAB_142c777d5:
      if ((piVar33 == (int *)0x0) && (lVar22 = *plVar19, *(char *)(lVar22 + 0x30) == '\0')) {
        lVar27 = plVar19[1];
        if (lVar27 != 0) {
          LOCK();
          *(int *)(lVar27 + 8) = *(int *)(lVar27 + 8) + 1;
          UNLOCK();
        }
        lVar31 = (longlong)(int)local_b38;
        local_b38._0_4_ = (int)local_b38 + 1;
        if (local_b38._4_4_ < (int)local_b38) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
        }
        local_b40[lVar31 * 2] = lVar22;
        (local_b40 + lVar31 * 2)[1] = lVar27;
        lVar22 = plVar19[1];
        lVar27 = *plVar19;
        lVar31 = lVar27;
        if (lVar22 != 0) {
          LOCK();
          *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
          UNLOCK();
          lVar31 = *plVar19;
        }
        lVar32 = (longlong)(int)local_b78;
        local_9b8 = 0;
        local_9b0 = 0;
        uVar1 = *(undefined4 *)(lVar31 + 0xa4);
        iVar12 = (int)local_b78 + 1;
        local_b78 = CONCAT44(local_b78._4_4_,iVar12);
        local_9ac = uVar1;
        if (local_b78._4_4_ < iVar12) {
          local_9c8 = lVar27;
          local_9c0 = lVar22;
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow();
        }
        plVar17 = local_b80 + lVar32 * 4;
        local_9c0 = 0;
        local_9c8 = 0;
        *plVar17 = lVar27;
        plVar17[1] = lVar22;
        plVar17[2] = 0;
        *(undefined4 *)(plVar17 + 3) = 0;
        *(undefined4 *)((longlong)plVar17 + 0x1c) = uVar1;
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_9c8);
        plVar17 = local_b88;
      }
      else {
        lVar22 = *plVar19;
        if (*(char *)(lVar22 + 0x30) == '\0') {
          lVar27 = plVar19[1];
          if (lVar27 != 0) {
            LOCK();
            *(int *)(lVar27 + 8) = *(int *)(lVar27 + 8) + 1;
            UNLOCK();
          }
          lVar31 = (longlong)(int)local_b38;
          local_b38._0_4_ = (int)local_b38 + 1;
          if (local_b38._4_4_ < (int)local_b38) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_b40);
          }
          local_b40[lVar31 * 2] = lVar22;
          (local_b40 + lVar31 * 2)[1] = lVar27;
          lVar22 = plVar19[1];
          lVar27 = *plVar19;
          lVar31 = lVar27;
          if (lVar22 != 0) {
            LOCK();
            *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
            UNLOCK();
            lVar31 = *plVar19;
          }
          lVar32 = (longlong)(int)local_b78;
          uVar1 = *(undefined4 *)(lVar31 + 0xa4);
          local_990 = 1;
          iVar12 = (int)local_b78 + 1;
          local_b78 = CONCAT44(local_b78._4_4_,iVar12);
          local_998 = piVar33;
          local_98c = uVar1;
          if (local_b78._4_4_ < iVar12) {
            local_9a8 = lVar27;
            local_9a0 = lVar22;
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(&local_b80);
          }
          plVar39 = local_b80 + lVar32 * 4;
          local_9a0 = 0;
          local_9a8 = 0;
          *plVar39 = lVar27;
          plVar39[1] = lVar22;
          plVar39[2] = (longlong)piVar33;
          *(undefined4 *)(plVar39 + 3) = 1;
          *(undefined4 *)((longlong)plVar39 + 0x1c) = uVar1;
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_9a8);
          *(undefined1 *)piVar33 = 1;
          plVar17 = local_b88;
          plVar39 = local_b30;
        }
      }
    }
    param_1 = local_b68;
  }
  if (plVar39 != (longlong *)0x0) {
    local_948 = 0;
    puVar28 = (uint *)((longlong)plVar39 + 0x18);
    uStack_944 = 1;
    local_938 = 0xffffffff;
    uStack_934 = 0;
    uStack_930 = 0;
    uStack_61c = 0;
    local_b58 = puVar28;
    puStack_940 = puVar28;
    if (*(int *)((longlong)plVar39 + 0x30) != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_948);
      uStack_61c = *(uint *)((longlong)plVar39 + 0x30);
    }
    uStack_ac8 = CONCAT44(uStack_944,local_948);
    uStack_ab8 = CONCAT44(uStack_934,local_938);
    uStack_ab0 = CONCAT44(uStack_92c,uStack_930);
    local_620 = -1 << ((byte)uStack_61c & 0x1f);
    puStack_ac0 = puStack_940;
    local_ad8 = (ulonglong)uStack_61c;
    uStack_7f0 = local_948;
    uStack_7ec = uStack_944;
    local_7e8 = puStack_940;
    local_ad0 = (longlong *)((longlong)plVar39 + 8);
    uStack_7e0 = uStack_ab8;
    local_7d8 = uStack_ab0;
    local_628 = puVar28;
    local_7f8 = (longlong *)((longlong)plVar39 + 8);
    while( true ) {
      uVar21 = local_b78;
      if (((uStack_7e0._4_4_ == (int)local_ad8) && (local_7e8 == puVar28)) &&
         (local_7f8 == (longlong *)((longlong)plVar39 + 8))) break;
      piVar33 = (int *)((longlong)uStack_7e0._4_4_ * 0xb8 + *local_7f8);
      piVar30 = piVar33 + 2;
      if ((char)piVar33[2] == '\0') {
        iVar12 = *piVar33;
        if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
          lVar22 = *(longlong *)(param_1 + 0xa8);
          if (*(longlong *)(param_1 + 0xa8) == 0) {
            lVar22 = param_1 + 0xa0;
          }
          iVar13 = *(int *)(lVar22 + ((longlong)*(int *)(param_1 + 0xb0) - 1U & (longlong)iVar12) *
                                     4);
          if (iVar13 != -1) {
            do {
              piVar23 = (int *)((longlong)iVar13 * 0x20 + *(longlong *)(param_1 + 0x68));
              if (*piVar23 == iVar12) {
                if (iVar13 != -1) goto LAB_142c77b87;
                break;
              }
              iVar13 = piVar23[6];
            } while (iVar13 != -1);
          }
        }
        piVar23 = (int *)0x0;
LAB_142c77b87:
        piVar16 = piVar23 + 2;
        if (piVar23 == (int *)0x0) {
          piVar16 = (int *)0x0;
        }
        if (piVar16 == (int *)0x0) {
          lVar22 = (longlong)(int)local_b78;
          local_6e8 = 4;
          iVar13 = (int)local_b78 + 1;
          local_b78 = CONCAT44(local_b78._4_4_,iVar13);
          local_6f0 = piVar30;
          local_6e4 = iVar12;
          if (local_b78._4_4_ < iVar13) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(&local_b80,uVar21 & 0xffffffff);
          }
          local_6f8 = 0;
          plVar19 = &local_700;
          plVar17 = local_b80 + lVar22 * 4;
          local_700 = 0;
          *plVar17 = 0;
          plVar17[1] = 0;
          *(undefined4 *)(plVar17 + 3) = 4;
          *(int *)((longlong)plVar17 + 0x1c) = iVar12;
LAB_142c77d5e:
          plVar17[2] = (longlong)piVar30;
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(plVar19);
          *(undefined1 *)piVar30 = 1;
          puVar28 = local_b58;
        }
        else {
          if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
            lVar22 = *(longlong *)(param_1 + 0xa8);
            if (*(longlong *)(param_1 + 0xa8) == 0) {
              lVar22 = param_1 + 0xa0;
            }
            iVar13 = *(int *)(lVar22 + ((longlong)*(int *)(param_1 + 0xb0) - 1U & (longlong)iVar12)
                                       * 4);
            if (iVar13 != -1) {
              do {
                piVar23 = (int *)((longlong)iVar13 * 0x20 + *(longlong *)(param_1 + 0x68));
                if (*piVar23 == iVar12) {
                  if (iVar13 != -1) goto LAB_142c77bf2;
                  break;
                }
                iVar13 = piVar23[6];
              } while (iVar13 != -1);
            }
          }
          piVar23 = (int *)0x0;
LAB_142c77bf2:
          plVar19 = (longlong *)(piVar23 + 2);
          cVar10 = FUN_142c69f10(param_1,local_b88,plVar19);
          uVar21 = local_b78;
          puVar28 = local_b58;
          if (cVar10 != '\0') {
            piVar24 = *(int **)((longlong)plVar39 + 0x58);
            piVar16 = piVar24 + *(int *)((longlong)plVar39 + 0x60);
            if (piVar24 != piVar16) {
              do {
                if (*piVar24 == *piVar33) {
                  bVar3 = true;
                  goto LAB_142c77c36;
                }
                piVar24 = piVar24 + 1;
              } while (piVar24 != piVar16);
            }
            bVar3 = false;
LAB_142c77c36:
            if (!bVar3) {
              lVar22 = *(longlong *)(piVar23 + 4);
              lVar27 = *plVar19;
              lVar31 = lVar27;
              if (lVar22 != 0) {
                LOCK();
                *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
                UNLOCK();
                lVar31 = *plVar19;
                local_b58 = local_628;
              }
              lVar32 = (longlong)(int)local_b78;
              uVar1 = *(undefined4 *)(lVar31 + 0xa4);
              local_970 = 2;
              iVar12 = (int)local_b78 + 1;
              local_b78 = CONCAT44(local_b78._4_4_,iVar12);
              local_978 = piVar30;
              local_96c = uVar1;
              if (local_b78._4_4_ < iVar12) {
                local_988 = lVar27;
                local_980 = lVar22;
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                ::ResizeGrow(&local_b80,uVar21 & 0xffffffff);
              }
              plVar17 = local_b80 + lVar32 * 4;
              local_980 = 0;
              local_988 = 0;
              plVar19 = &local_988;
              *plVar17 = lVar27;
              plVar17[1] = lVar22;
              *(undefined4 *)(plVar17 + 3) = 2;
              *(undefined4 *)((longlong)plVar17 + 0x1c) = uVar1;
              goto LAB_142c77d5e;
            }
          }
        }
      }
      uStack_7e0 = CONCAT44(uStack_7e0._4_4_,(uint)uStack_7e0 & ~uStack_7ec);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_7f0);
      param_1 = local_b68;
    }
  }
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    local_928 = 0;
    puVar28 = (uint *)(param_1 + 0x78);
    uStack_924 = 1;
    local_918 = 0xffffffff;
    uStack_914 = 0;
    uStack_910 = 0;
    uStack_5fc = 0;
    puStack_920 = puVar28;
    if (*(int *)(param_1 + 0x90) != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_928);
      uStack_5fc = *(uint *)(param_1 + 0x90);
    }
    uStack_ac8 = CONCAT44(uStack_924,local_928);
    uStack_ab8 = CONCAT44(uStack_914,local_918);
    uStack_ab0 = CONCAT44(uStack_90c,uStack_910);
    local_600 = -1 << ((byte)uStack_5fc & 0x1f);
    plVar19 = (longlong *)(param_1 + 0x68);
    puStack_ac0 = puStack_920;
    local_ad8 = (ulonglong)uStack_5fc;
    uStack_7c8 = local_928;
    uStack_7c4 = uStack_924;
    local_7c0 = puStack_920;
    local_ad0 = (longlong *)(param_1 + 0x68);
    uStack_7b8 = uStack_ab8;
    local_7b0 = uStack_ab0;
    local_608 = puVar28;
    local_7d0 = (longlong *)(param_1 + 0x68);
    while( true ) {
      lVar22 = 0;
      if (((uStack_7b8._4_4_ == (int)local_ad8) && (local_7c0 == puVar28)) && (local_7d0 == plVar19)
         ) break;
      puVar29 = (undefined4 *)((longlong)uStack_7b8._4_4_ * 0x20 + *local_7d0);
      plVar17 = (longlong *)(puVar29 + 2);
      cVar10 = FUN_142c69f10(param_1,local_b88,plVar17);
      if (((cVar10 != '\0') && (*(char *)(*plVar17 + 0x30) != '\0')) &&
         ((lVar27 = *(longlong *)(*plVar17 + 0x18), lVar27 != 0 &&
          ((lVar27 = *(longlong *)(lVar27 + 0x118), lVar27 != 0 &&
           ((*(byte *)(lVar27 + 0x94) & 2) == 0)))))) {
        uVar14 = *(uint *)(lVar27 + 0xc);
        if ((int)uVar14 < (int)DAT_1469e91c4) {
          uVar36 = uVar14 & 0xffff;
          if ((int)uVar14 < 0) {
            uVar14 = uVar14 + 0xffff;
            uVar36 = uVar36 - 0x10000;
          }
          lVar22 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar14 >> 0x10) * 8) +
                   (longlong)(int)uVar36 * 0x18;
        }
        if ((*(uint *)(lVar22 + 8) >> 0x1d & 1) == 0) {
          TSet<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>,TDefaultMapHashableKeyFuncs<unsigned_int,FPipelineCacheFileFormatPSOMetaData,0>,FDefaultSetAllocator>
          ::FindId((longlong)plVar39 + 8,&local_ae0,*puVar29);
          if (local_ae0 == -1) {
            lVar22 = 0;
          }
          else {
            lVar22 = (longlong)local_ae0 * 0xb8 + *(longlong *)((longlong)plVar39 + 8);
          }
          lVar27 = lVar22 + 8;
          if (lVar22 == 0) {
            lVar27 = 0;
          }
          if (lVar27 == 0) {
            if (plVar39 != (longlong *)0x0) {
              cVar10 = FUN_142c60190((longlong)plVar39 + 0x58,puVar29);
              if (cVar10 != '\0') goto LAB_142c78054;
            }
            uVar21 = local_b78;
            lVar22 = *(longlong *)(puVar29 + 4);
            lVar27 = *plVar17;
            lVar31 = lVar27;
            if (lVar22 != 0) {
              LOCK();
              *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
              UNLOCK();
              lVar31 = *plVar17;
              puVar28 = local_608;
            }
            lVar32 = (longlong)(int)local_b78;
            uVar1 = *(undefined4 *)(lVar31 + 0xa4);
            local_958 = 0;
            local_950 = 3;
            iVar12 = (int)local_b78 + 1;
            local_b78 = CONCAT44(local_b78._4_4_,iVar12);
            local_94c = uVar1;
            if (local_b78._4_4_ < iVar12) {
              local_968 = lVar27;
              local_960 = lVar22;
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(&local_b80,uVar21 & 0xffffffff);
            }
            plVar17 = local_b80 + lVar32 * 4;
            *plVar17 = lVar27;
            plVar17[1] = lVar22;
            local_960 = 0;
            local_968 = 0;
            plVar17[2] = 0;
            *(undefined4 *)(plVar17 + 3) = 3;
            *(undefined4 *)((longlong)plVar17 + 0x1c) = uVar1;
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_968);
            param_1 = local_b68;
          }
        }
      }
LAB_142c78054:
      uStack_7b8 = CONCAT44(uStack_7b8._4_4_,(uint)uStack_7b8 & ~uStack_7c4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_7c8);
    }
  }
  plVar19 = local_b80;
  lVar22 = (longlong)(int)local_b78;
  if ((int)local_b78 == 0) {
LAB_142c783a0:
    if (plVar39 != (longlong *)0x0) goto LAB_142c788d3;
  }
  else {
    local_8b8 = &local_b70;
    local_b70 = 0;
    FUN_142c61970(local_b80,local_b78 & 0xffffffff,&local_8b8);
    if (plVar19 == plVar19 + lVar22 * 4) goto LAB_142c783a0;
    bVar38 = 0;
    plVar39 = plVar19 + 1;
    do {
      plVar17 = local_b88;
      iVar12 = (int)plVar39[2];
      if (iVar12 == 0) {
        local_6c0 = plVar39[-1];
        local_6b8 = *plVar39;
        if (local_6b8 != 0) {
          LOCK();
          *(int *)(local_6b8 + 8) = *(int *)(local_6b8 + 8) + 1;
          UNLOCK();
        }
        FUN_142c796a0(param_1,&local_6c0,local_b88);
        bVar38 = 1;
      }
      else if (iVar12 == 1) {
        local_6d0 = plVar39[-1];
        local_6c8 = *plVar39;
        if (local_6c8 != 0) {
          LOCK();
          *(int *)(local_6c8 + 8) = *(int *)(local_6c8 + 8) + 1;
          UNLOCK();
        }
        bVar11 = FUN_142c79a10(param_1,&local_6d0,plVar39[1]);
        bVar38 = bVar38 | bVar11;
      }
      else if (iVar12 == 2) {
        local_6e0 = plVar39[-1];
        local_6d8 = *plVar39;
        if (local_6d8 != 0) {
          LOCK();
          *(int *)(local_6d8 + 8) = *(int *)(local_6d8 + 8) + 1;
          UNLOCK();
        }
        bVar11 = FUN_142c79a10(param_1,&local_6e0,plVar39[1]);
        bVar38 = bVar38 | bVar11;
      }
      else if (iVar12 == 3) {
        local_670 = plVar39[-1];
        local_668 = *plVar39;
        if (local_668 != 0) {
          LOCK();
          *(int *)(local_668 + 8) = *(int *)(local_668 + 8) + 1;
          UNLOCK();
        }
        FUN_142c796a0(param_1,&local_670,local_b88);
        FUN_142c642f0(plVar39[-1],local_508);
        local_660 = plVar39[-1];
        local_504 = local_504 + -1;
        local_658 = *plVar39;
        local_4e0 = 0;
        if (local_658 != 0) {
          LOCK();
          *(int *)(local_658 + 8) = *(int *)(local_658 + 8) + 1;
          UNLOCK();
        }
        FUN_142c79a10(param_1,&local_660,local_508);
        bVar38 = 1;
        if (local_4a0 != 0) {
          FMemory::Free();
        }
        if (local_500 != 0) {
          FMemory::Free();
        }
      }
      else if (iVar12 == 4) {
        bVar38 = 1;
        plVar15 = (longlong *)*local_b88;
        FUN_142c62100(local_588,1,*(undefined4 *)((longlong)plVar39 + 0x14));
        FUN_142c881e0(*plVar17,4,local_588);
        plVar17 = (longlong *)plVar15[1];
        local_b90[0] = '\x03';
        if ((char *)plVar17[1] < (char *)*plVar17 + 1) {
          (**(code **)(*plVar15 + 0x50))(plVar15,local_b90,1);
        }
        else {
          local_b90[0] = *(char *)*plVar17;
          *plVar17 = *plVar17 + 1;
        }
        uVar4 = local_578;
        if (local_586 != '\0') {
          lVar27 = plVar15[0x14];
          local_680[0] = *(byte *)(plVar15 + 5) >> 7;
          local_678 = lVar27;
          FBitWriterMark::PopWithoutClear(local_580,plVar15);
          plVar17 = (longlong *)plVar15[1];
          local_b48[0] = (int)lVar27 - (int)uVar4;
          if ((int *)plVar17[1] < (int *)*plVar17 + 1) {
            (**(code **)(*plVar15 + 0x50))(plVar15,local_b48,4);
            if ((*(byte *)((longlong)plVar15 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(plVar15,local_b48,4);
            }
          }
          else {
            local_b48[0] = *(int *)*plVar17;
            *plVar17 = *plVar17 + 4;
          }
          FBitWriterMark::PopWithoutClear(local_680);
        }
        TArray<FPolygonHoleVertices,FDefaultAllocator>::
        ~TArray<FPolygonHoleVertices,FDefaultAllocator>(local_558);
        param_1 = local_b68;
      }
      plVar17 = plVar39 + 3;
      plVar39 = plVar39 + 4;
    } while (plVar17 != plVar19 + lVar22 * 4);
    plVar39 = local_b30;
    local_b98 = bVar38;
    if (bVar38 == 0) goto LAB_142c783a0;
  }
  puVar18 = (undefined8 *)operator_new(0x68);
  if (puVar18 == (undefined8 *)0x0) {
    puVar18 = (undefined8 *)0x0;
  }
  else {
    _guard_xfg_dispatch_icall_nop(puVar18 + 2,0,0x58);
    *puVar18 = &PTR_FUN_14583ce50;
    puVar18[1] = 0;
    puVar18[2] = 0;
    TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(puVar18 + 3,0,0);
    *(undefined4 *)(puVar18 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar18 + 0x3c) = 0;
    puVar18[9] = 0;
    *(undefined4 *)(puVar18 + 10) = 0;
    puVar18[0xb] = 0;
    puVar18[0xc] = 0;
  }
  local_aa8 = puVar18;
  plVar19 = (longlong *)FUN_1404f6ae0(puVar18);
  local_aa0 = plVar19;
  SharedPointerInternals::EnableSharedFromThis(&local_aa8,puVar18,puVar18);
  plVar39 = local_b88;
  ppuVar2 = (undefined8 **)local_b88[2];
  if (ppuVar2 != &local_aa8) {
    *ppuVar2 = local_aa8;
    local_aa8 = (undefined8 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(ppuVar2 + 1,&local_aa0);
    plVar19 = local_aa0;
  }
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar19 + 1;
    lVar22 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar22 == 1) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar30 = (int *)((longlong)plVar19 + 0xc);
      iVar12 = *piVar30;
      *piVar30 = *piVar30 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar19 + 8))(plVar19,1);
      }
    }
  }
  uVar35 = local_b68;
  plVar17 = local_b40 + (longlong)(int)local_b38 * 2;
  uVar21 = local_b68;
  for (plVar19 = local_b40; local_b68 = uVar21, plVar19 != plVar17; plVar19 = plVar19 + 2) {
    plVar15 = (longlong *)plVar19[1];
    local_6b0 = *plVar19;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    local_6a8 = plVar15;
    cVar10 = FUN_142c69f10(uVar35,plVar39,&local_6b0);
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar39 = plVar15 + 1;
      lVar22 = *plVar39;
      *(int *)plVar39 = (int)*plVar39 + -1;
      UNLOCK();
      if ((int)lVar22 == 1) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar30 = (int *)((longlong)plVar15 + 0xc);
        iVar12 = *piVar30;
        *piVar30 = *piVar30 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar15 + 8))(plVar15);
        }
      }
    }
    if (cVar10 != '\0') {
      FUN_142c642f0(*plVar19,local_218);
      local_6a0 = *plVar19 + 0xa4;
      local_698 = local_218;
      FUN_142c61230(puVar18 + 1,&local_af8,&local_6a0);
      if (local_1b0 != 0) {
        FMemory::Free();
      }
      if (local_210 != 0) {
        FMemory::Free();
      }
    }
    plVar39 = local_b88;
    uVar21 = local_b68;
  }
  plVar39 = (longlong *)(uVar21 + 0x68);
  local_908 = 0;
  uStack_904 = 1;
  local_8f8 = 0xffffffff;
  uStack_8f4 = 0;
  uStack_8f0 = 0;
  puStack_900 = (uint *)(uVar21 + 0x78);
  iVar12 = 0;
  if (*(int *)(uVar21 + 0x90) != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_908);
    iVar12 = *(int *)(uVar21 + 0x90);
  }
  uStack_ac8 = CONCAT44(uStack_904,local_908);
  uStack_ab8 = CONCAT44(uStack_8f4,local_8f8);
  uStack_ab0 = CONCAT44(uStack_8ec,uStack_8f0);
  puStack_ac0 = puStack_900;
  local_5a0 = -1 << ((byte)iVar12 & 0x1f);
  uStack_7a0 = local_908;
  uStack_79c = uStack_904;
  local_798 = puStack_900;
  local_ad0 = plVar39;
  uStack_790 = uStack_ab8;
  local_788 = uStack_ab0;
  iStack_59c = iVar12;
  local_7a8 = plVar39;
  while( true ) {
    plVar19 = local_b30;
    lVar22 = (longlong)uStack_790._4_4_;
    if (((uStack_790._4_4_ == iVar12) && (local_798 == (uint *)(uVar21 + 0x78))) &&
       (local_7a8 == plVar39)) break;
    iVar13 = *(int *)(puVar18 + 0xc);
    lVar27 = *local_7a8;
    *(int *)(puVar18 + 0xc) = iVar13 + 1;
    if (*(int *)((longlong)puVar18 + 100) < iVar13 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(puVar18 + 0xb,iVar13);
    }
    *(undefined4 *)(puVar18[0xb] + (longlong)iVar13 * 4) = *(undefined4 *)(lVar22 * 0x20 + lVar27);
    uStack_790 = CONCAT44(uStack_790._4_4_,(uint)uStack_790 & ~uStack_79c);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_7a0);
  }
  if (local_b30 != (longlong *)0x0) {
    plVar39 = (longlong *)((longlong)local_b30 + 8);
    uStack_8e4 = 1;
    local_8e8 = 0;
    local_8d8 = 0xffffffff;
    uStack_8d4 = 0;
    uStack_8d0 = 0;
    puVar28 = (uint *)((longlong)local_b30 + 0x18);
    iVar12 = 0;
    puStack_8e0 = puVar28;
    if (*(int *)((longlong)local_b30 + 0x30) != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_8e8);
      iVar12 = *(int *)((longlong)plVar19 + 0x30);
    }
    uStack_ac8 = CONCAT44(uStack_8e4,local_8e8);
    uStack_b08 = CONCAT44(uStack_8d4,local_8d8);
    uStack_b00 = CONCAT44(uStack_8cc,uStack_8d0);
    puStack_ac0 = puStack_8e0;
    local_5c0 = -1 << ((byte)iVar12 & 0x1f);
    uStack_b18 = CONCAT44(uStack_8e4,local_8e8);
    puStack_b10 = puStack_8e0;
    local_b20 = (uint *)plVar39;
    local_ad0 = plVar39;
    uStack_ab8 = uStack_b08;
    uStack_ab0 = uStack_b00;
    iStack_5bc = iVar12;
    while( true ) {
      if (((uStack_b08._4_4_ == iVar12) && (puStack_b10 == puVar28)) &&
         (local_b20 == (uint *)plVar39)) break;
      lVar22 = (longlong)uStack_b08._4_4_ * 0xb8 + *(longlong *)local_b20;
      if ((*(char *)(lVar22 + 8) == '\0') && (*(char *)(lVar22 + 0x30) == '\0')) {
        FUN_142c60310(puVar18 + 1,lVar22,lVar22 + 8);
        cVar10 = FWeakObjectPtr::IsValid(lVar22 + 0x20);
        if (cVar10 == '\0') {
          uVar14 = local_b60 | 2;
          local_a30 = 8;
          local_a38 = 0;
          local_b60 = uVar14;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a38,0);
          FGenericPlatformString::Memcpy(local_a38,L"nullptr",0x10);
          plVar19 = &local_a38;
        }
        else {
          uVar14 = local_b60 | 1;
          local_b60 = uVar14;
          lVar22 = FWeakObjectPtr::Get(lVar22 + 0x20);
          local_8c0 = *(undefined8 *)(lVar22 + 0x18);
          FName::ToString(&local_8c0,local_690);
          plVar19 = local_690;
        }
        lVar22 = *plVar19;
        *plVar19 = 0;
        plVar19[1] = 0;
        if (((uVar14 & 2) != 0) &&
           (uVar14 = uVar14 & 0xfffffffd, local_b60 = uVar14, local_a38 != 0)) {
          FMemory::Free();
        }
        if (((uVar14 & 1) != 0) && (local_b60 = uVar14 & 0xfffffffe, local_690[0] != 0)) {
          FMemory::Free();
        }
        if (lVar22 != 0) {
          FMemory::Free(lVar22);
        }
      }
      uStack_b08 = CONCAT44(uStack_b08._4_4_,(uint)uStack_b08 & ~uStack_b18._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b18);
    }
  }
LAB_142c788d3:
  plVar39 = local_b80;
  for (iVar12 = (int)local_b78; iVar12 != 0; iVar12 = iVar12 + -1) {
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(plVar39);
    plVar39 = plVar39 + 4;
  }
  if (local_b80 != (longlong *)0x0) {
    FMemory::Free(local_b80);
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_b40);
  return local_b98;
}



// FUNCTION 142c79030 FUN_142c79030 body=22 status=ok
// SIG undefined FUN_142c79030(void)

undefined8 FUN_142c79030(longlong param_1,char *param_2,undefined8 param_3,longlong param_4)

{
  if ((param_4 != 0) && (*param_2 == '\0')) {
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x20);
  }
  return 1;
}



// FUNCTION 142c79050 FUN_142c79050 body=264 status=ok
// SIG undefined FUN_142c79050(void)

undefined8 FUN_142c79050(longlong param_1,char *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  bool bVar2;
  
  if ((param_4 != 0) && (*param_2 == '\0')) {
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x20);
  }
  lVar1 = *param_3;
  if (lVar1 == 0) {
    if ((param_4 != 0) && ((*param_2 == '\0' || ((*param_2 == '\x01' && (param_2[1] == '\x15'))))))
    {
      bVar2 = false;
      if (-1 < *(char *)(param_4 + 0x28)) {
        lVar1 = *(longlong *)(param_4 + 0xa8);
        if (lVar1 < *(longlong *)(param_4 + 0xa0)) {
          bVar2 = (*(byte *)((longlong)(int)(lVar1 >> 3) + *(longlong *)(param_4 + 0x90)) &
                  '\x01' << ((byte)lVar1 & 7)) != 0;
          *(longlong *)(param_4 + 0xa8) = lVar1 + 1;
        }
        else {
          FUN_1416952d0(param_4,1);
        }
      }
      *(bool *)(param_1 + 0x468) = bVar2;
    }
    return 1;
  }
  if (*param_2 != '\0') {
    if (*param_2 != '\x01') {
      return 1;
    }
    if (*(longlong *)(param_2 + 0x28) == 0) {
      return 1;
    }
    if (*(char *)(*(longlong *)(param_2 + 0x28) + 0xa0) == *(char *)(param_1 + 0x468)) {
      return 1;
    }
    FUN_142c881e0(lVar1,0x15,param_2);
  }
  FBitWriter::WriteBit(lVar1,*(undefined1 *)(param_1 + 0x468));
  return 1;
}



// FUNCTION 142c79160 FUN_142c79160 body=675 status=ok
// SIG undefined FUN_142c79160(void)

undefined8 FUN_142c79160(longlong param_1,char *param_2,longlong *param_3,longlong *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((param_4 != (longlong *)0x0) && (*param_2 == '\0')) {
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x20);
  }
  param_3 = (longlong *)*param_3;
  if (param_3 == (longlong *)0x0) {
    if (param_4 == (longlong *)0x0) {
      return 1;
    }
    if (*param_2 == '\0') {
      bVar4 = false;
      if (-1 < (char)param_4[5]) {
        lVar3 = param_4[0x15];
        if (lVar3 < param_4[0x14]) {
          bVar4 = (*(byte *)((longlong)(int)(lVar3 >> 3) + param_4[0x12]) &
                  '\x01' << ((byte)lVar3 & 7)) != 0;
          param_4[0x15] = lVar3 + 1;
        }
        else {
          FUN_1416952d0(param_4,1);
        }
      }
      *(bool *)(param_1 + 0x520) = bVar4;
      puVar2 = *(undefined4 **)param_4[1];
      if (puVar2 + 1 <= (undefined4 *)((undefined8 *)param_4[1])[1]) {
        *(undefined4 *)(param_1 + 0x524) = *puVar2;
        *(longlong *)param_4[1] = *(longlong *)param_4[1] + 4;
        return 1;
      }
      lVar3 = *param_4;
    }
    else {
      if (*param_2 != '\x01') {
        return 1;
      }
      if (param_2[1] == '\x13') {
        bVar4 = false;
        if (-1 < (char)param_4[5]) {
          lVar3 = param_4[0x15];
          if (param_4[0x14] <= lVar3) {
            FUN_1416952d0(param_4,1);
            *(undefined1 *)(param_1 + 0x520) = 0;
            return 1;
          }
          bVar4 = (*(byte *)((longlong)(int)(lVar3 >> 3) + param_4[0x12]) &
                  '\x01' << ((byte)lVar3 & 7)) != 0;
          param_4[0x15] = lVar3 + 1;
        }
        *(bool *)(param_1 + 0x520) = bVar4;
        return 1;
      }
      if (param_2[1] != '\x14') {
        return 1;
      }
      puVar2 = *(undefined4 **)param_4[1];
      if (puVar2 + 1 <= (undefined4 *)((undefined8 *)param_4[1])[1]) {
        *(undefined4 *)(param_1 + 0x524) = *puVar2;
        *(longlong *)param_4[1] = *(longlong *)param_4[1] + 4;
        return 1;
      }
      lVar3 = *param_4;
    }
    (**(code **)(lVar3 + 0x50))(param_4,param_1 + 0x524,4);
    bVar1 = *(byte *)((longlong)param_4 + 0x29);
    param_3 = param_4;
  }
  else {
    if (*param_2 == '\0') {
      FBitWriter::WriteBit(param_3,*(undefined1 *)(param_1 + 0x520));
    }
    else {
      if (*param_2 != '\x01') {
        return 1;
      }
      lVar3 = *(longlong *)(param_2 + 0x28);
      if (lVar3 == 0) {
        return 1;
      }
      if (*(char *)(lVar3 + 0x98) != *(char *)(param_1 + 0x520)) {
        FUN_142c881e0(param_3,0x13,param_2);
        FBitWriter::WriteBit(param_3,*(undefined1 *)(param_1 + 0x520));
      }
      if (*(int *)(lVar3 + 0x9c) == *(int *)(param_1 + 0x524)) {
        return 1;
      }
      FUN_142c881e0(param_3,0x14,param_2);
    }
    puVar2 = *(undefined4 **)param_3[1];
    if (puVar2 + 1 <= (undefined4 *)((undefined8 *)param_3[1])[1]) {
      *(undefined4 *)(param_1 + 0x524) = *puVar2;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
      return 1;
    }
    (**(code **)(*param_3 + 0x50))(param_3,param_1 + 0x524,4);
    bVar1 = *(byte *)((longlong)param_3 + 0x29);
  }
  if ((bVar1 & 0x10) != 0) {
    FArchive::ByteSwap(param_3,param_1 + 0x524,4);
  }
  return 1;
}



// FUNCTION 142c79410 FUN_142c79410 body=254 status=ok
// SIG undefined FUN_142c79410(void)

undefined8 FUN_142c79410(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined1 local_res8 [8];
  
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0xa0),1);
  }
  else {
    *(undefined1 *)(param_1 + 0xa0) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  plVar2 = (longlong *)param_2[1];
  local_res8[0] = *(undefined1 *)(param_1 + 0x31);
  if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
  }
  else {
    local_res8[0] = *(undefined1 *)*plVar2;
    *plVar2 = *plVar2 + 1;
  }
  *(undefined1 *)(param_1 + 0x31) = local_res8[0];
  FUN_142c64060(param_2,param_1 + 0x20);
  puVar3 = *(undefined4 **)param_2[1];
  if (puVar3 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0xa4) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return 1;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xa4,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0xa4,4);
  }
  return 1;
}



// FUNCTION 142c79510 FUN_142c79510 body=395 status=ok
// SIG undefined FUN_142c79510(void)

undefined8 FUN_142c79510(longlong param_1,longlong *param_2,longlong *param_3,undefined1 *param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  (**(code **)(*param_2 + 0x40))(param_2,param_1);
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 8,1);
  }
  else {
    *(undefined1 *)(param_1 + 8) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  *param_4 = 1;
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\x01') {
    puVar3 = *(undefined4 **)param_2[1];
    if (puVar3 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
      *(undefined4 *)(param_1 + 0xc) = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      return 1;
    }
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xc,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) == 0) {
      return 1;
    }
    param_1 = param_1 + 0xc;
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        if (param_3 == (longlong *)0x0) {
          return 1;
        }
        uVar4 = UObject::GetPrivateStaticClass();
        uVar4 = (**(code **)(*param_3 + 0x280))(param_3,param_2,uVar4,param_1 + 0x18,0);
        return uVar4;
      }
      if (cVar1 != '\x04') {
        if (cVar1 != '\x05') {
          return 1;
        }
        FUN_1406da970(param_2,param_1 + 0x28);
        return 1;
      }
      (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x20);
      return 1;
    }
    puVar3 = *(undefined4 **)param_2[1];
    if (puVar3 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
      *(undefined4 *)(param_1 + 0x10) = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      return 1;
    }
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) == 0) {
      return 1;
    }
    param_1 = param_1 + 0x10;
  }
  FArchive::ByteSwap(param_2,param_1,4);
  return 1;
}



// FUNCTION 142c796a0 FUN_142c796a0 body=880 status=ok
// SIG undefined FUN_142c796a0(void)

void FUN_142c796a0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 local_a8 [2];
  undefined4 local_a0 [2];
  undefined4 local_98 [2];
  int local_90 [2];
  undefined4 local_88 [2];
  byte local_80 [8];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  byte local_38 [8];
  longlong local_30;
  
  plVar2 = (longlong *)*param_3;
  local_res10[0] = 0;
  plVar4 = (longlong *)plVar2[1];
  if ((undefined1 *)plVar4[1] < (undefined1 *)*plVar4 + 1) {
    (**(code **)(*plVar2 + 0x50))(plVar2,local_res10,1);
  }
  else {
    local_res10[0] = *(undefined1 *)*plVar4;
    *plVar4 = *plVar4 + 1;
  }
  local_a8[0] = *(undefined4 *)(*param_2 + 0xa4);
  plVar4 = (longlong *)plVar2[1];
  if ((undefined4 *)plVar4[1] < (undefined4 *)*plVar4 + 1) {
    (**(code **)(*plVar2 + 0x50))(plVar2,local_a8,4);
    if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar2,local_a8,4);
    }
  }
  else {
    local_a8[0] = *(undefined4 *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  local_res18[0] = *(undefined1 *)(*param_2 + 0xa0);
  plVar4 = (longlong *)plVar2[1];
  if ((undefined1 *)plVar4[1] < (undefined1 *)*plVar4 + 1) {
    (**(code **)(*plVar2 + 0x50))(plVar2,local_res18,1);
  }
  else {
    local_res18[0] = *(undefined1 *)*plVar4;
    *plVar4 = *plVar4 + 1;
  }
  local_48 = *(undefined8 *)(*(longlong *)(*param_2 + 0x10) + 0x10);
  uVar3 = UObject::GetPrivateStaticClass();
  (**(code **)(*(longlong *)param_3[4] + 0x280))((longlong *)param_3[4],plVar2,uVar3,&local_48,0);
  local_40 = *(undefined8 *)(*(longlong *)(*param_2 + 0x18) + 0x118);
  uVar3 = FUN_1428dfc70();
  (**(code **)(*(longlong *)param_3[4] + 0x280))((longlong *)param_3[4],plVar2,uVar3,&local_40,0);
  local_a0[0] = 0;
  local_68 = *(undefined4 *)(*param_2 + 0xa4);
  local_88[0] = 0x1700;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_78 = plVar2[0x14];
  local_80[0] = *(byte *)(plVar2 + 5) >> 7;
  plVar4 = (longlong *)plVar2[1];
  if ((undefined4 *)plVar4[1] < (undefined4 *)*plVar4 + 1) {
    (**(code **)(*plVar2 + 0x50))(plVar2,local_a0,4);
    if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar2,local_a0,4);
    }
  }
  else {
    local_a0[0] = *(undefined4 *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  local_98[0] = *(undefined4 *)(*param_2 + 0x28);
  plVar4 = (longlong *)plVar2[1];
  if ((undefined4 *)plVar4[1] < (undefined4 *)*plVar4 + 1) {
    (**(code **)(*plVar2 + 0x50))(plVar2,local_98,4);
    if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar2,local_98,4);
    }
  }
  else {
    local_98[0] = *(undefined4 *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  plVar4 = (longlong *)*param_2;
  lVar7 = plVar4[4];
  lVar5 = (longlong)(int)plVar4[5] * 0x38 + lVar7;
  if (lVar7 != lVar5) {
    do {
      FUN_142c79510(lVar7,plVar2,param_3[4],local_res20);
      lVar7 = lVar7 + 0x38;
    } while (lVar7 != lVar5);
    plVar4 = (longlong *)*param_2;
  }
  (**(code **)(*plVar4 + 0x90))(plVar4,local_88,param_3,0);
  lVar5 = local_78;
  lVar7 = plVar2[0x14];
  local_38[0] = *(byte *)(plVar2 + 5) >> 7;
  local_30 = lVar7;
  FBitWriterMark::PopWithoutClear(local_80,plVar2);
  plVar4 = (longlong *)plVar2[1];
  local_90[0] = (int)lVar7 - (int)lVar5;
  if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
    (**(code **)(*plVar2 + 0x50))(plVar2,local_90,4);
    if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar2,local_90,4);
    }
  }
  else {
    local_90[0] = *(int *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  FBitWriterMark::PopWithoutClear(local_38,plVar2);
  lVar7 = local_58;
  for (iVar6 = (int)local_50; iVar6 != 0; iVar6 = iVar6 + -1) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
    lVar7 = lVar7 + 0x10;
  }
  if (local_58 != 0) {
    FMemory::Free(local_58);
  }
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 142c79a10 FUN_142c79a10 body=765 status=ok
// SIG undefined FUN_142c79a10(void)

undefined8 FUN_142c79a10(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  int local_98 [2];
  byte local_90 [8];
  longlong local_88;
  undefined2 local_78;
  char local_76;
  undefined1 local_75;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  
  lVar7 = *param_2;
  plVar2 = (longlong *)*param_4;
  if (*(int *)(param_3 + 4) != (int)*(char *)(lVar7 + 0xa8)) {
    local_58 = *(undefined4 *)(lVar7 + 0xa4);
    local_78 = 0x1701;
    local_48 = 0;
    local_40 = 0;
    local_76 = '\0';
    local_70[0] = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_75 = *(char *)(lVar7 + 0x30) != '\0';
    local_50 = param_3;
    cVar5 = FUN_142c64200(lVar7 + 0x20,param_3 + 8);
    if (cVar5 == '\0') {
      FUN_142c881e0(plVar2,2,&local_78);
      local_res20[0] = *(undefined4 *)(*param_2 + 0x28);
      plVar3 = (longlong *)plVar2[1];
      if ((undefined4 *)plVar3[1] < (undefined4 *)*plVar3 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_res20,4);
        if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar2,local_res20,4);
        }
      }
      else {
        local_res20[0] = *(undefined4 *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      lVar7 = *param_2;
      lVar6 = *(longlong *)(lVar7 + 0x20);
      lVar9 = (longlong)*(int *)(lVar7 + 0x28) * 0x38 + lVar6;
      if (lVar6 != lVar9) {
        do {
          FUN_142c79510(lVar6,plVar2,param_4[4],local_res18);
          lVar6 = lVar6 + 0x38;
        } while (lVar6 != lVar9);
        lVar7 = *param_2;
      }
    }
    if (*(char *)(lVar7 + 0x30) != *(char *)(param_3 + 0x28)) {
      FUN_142c881e0(*param_4,4,&local_78);
      local_res10[0] = *(undefined1 *)(*param_2 + 0x30);
      plVar3 = (longlong *)plVar2[1];
      if ((undefined1 *)plVar3[1] < (undefined1 *)*plVar3 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_res10,1);
      }
      else {
        local_res10[0] = *(undefined1 *)*plVar3;
        *plVar3 = *plVar3 + 1;
      }
    }
    (**(code **)(*(longlong *)*param_2 + 0x90))((longlong *)*param_2,&local_78,param_4,0);
    uVar4 = local_68;
    if (local_76 != '\0') {
      lVar7 = plVar2[0x14];
      local_90[0] = *(byte *)(plVar2 + 5) >> 7;
      local_88 = lVar7;
      FBitWriterMark::PopWithoutClear(local_70,plVar2);
      plVar3 = (longlong *)plVar2[1];
      local_98[0] = (int)lVar7 - (int)uVar4;
      if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_98,4);
        if ((*(byte *)((longlong)plVar2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(plVar2,local_98,4);
        }
      }
      else {
        local_98[0] = *(int *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      FBitWriterMark::PopWithoutClear(local_90,plVar2);
      lVar7 = local_48;
      for (iVar8 = (int)local_40; iVar8 != 0; iVar8 = iVar8 + -1) {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
        lVar7 = lVar7 + 0x10;
      }
      if (local_48 != 0) {
        FMemory::Free(local_48);
      }
      plVar2 = (longlong *)param_2[1];
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar2 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      return 1;
    }
    local_76 = 0;
    lVar7 = local_48;
    for (iVar8 = (int)local_40; iVar8 != 0; iVar8 = iVar8 + -1) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
      lVar7 = lVar7 + 0x10;
    }
    if (local_48 != 0) {
      FMemory::Free(local_48);
    }
  }
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return 0;
}



// FUNCTION 142c79d10 FUN_142c79d10 body=1186 status=ok
// SIG undefined FUN_142c79d10(void)

longlong *
FUN_142c79d10(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4,char param_5)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  bool bVar4;
  void *_Src;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  int iVar14;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_98;
  longlong *plStack_90;
  void *local_88;
  int local_80;
  int local_7c;
  longlong local_78;
  longlong *plStack_70;
  void *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  
  plVar13 = (longlong *)0x0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar8 = plVar13;
  local_res20 = param_4;
  if (param_3 != (longlong *)0x0) {
    plVar5 = (longlong *)FUN_142e20fc0();
    plVar9 = param_3;
    do {
      plVar8 = param_3;
      if (plVar9 == plVar5) break;
      plVar9 = (longlong *)plVar9[6];
      plVar8 = plVar13;
    } while (plVar9 != (longlong *)0x0);
  }
  lVar7 = plVar8[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar7 = plVar8[0x1f];
  }
  uVar6 = FUN_142c6dec0();
  FUN_142c66ce0(uVar6,&local_98,lVar7);
  plVar8 = plVar13;
  if (param_3 != (longlong *)0x0) {
    plVar5 = (longlong *)FUN_142e20fc0();
    plVar9 = param_3;
    do {
      plVar8 = param_3;
      if (plVar9 == plVar5) break;
      plVar9 = (longlong *)plVar9[6];
      plVar8 = plVar13;
    } while (plVar9 != (longlong *)0x0);
  }
  lVar7 = plVar8[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar7 = plVar8[0x1f];
  }
  if ((param_5 == '\0') && (*(char *)(lVar7 + 0x30) != '\0')) {
    *(longlong *)(local_98 + 0x10) = lVar7;
  }
  else {
    plVar8 = plVar13;
    if (param_3 != (longlong *)0x0) {
      plVar5 = (longlong *)FUN_142e20fc0();
      plVar9 = param_3;
      do {
        plVar8 = param_3;
        if (plVar9 == plVar5) break;
        plVar9 = (longlong *)plVar9[6];
        plVar8 = plVar13;
      } while (plVar9 != (longlong *)0x0);
    }
    local_res10 = 0;
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    lVar7 = FUN_1417985e0(plVar8,param_1,0,0,0,0,0,0,0);
    plVar9 = plStack_90;
    *(longlong *)(local_98 + 0x10) = lVar7;
    *(longlong *)(lVar7 + 0x38) = local_98;
    plVar8 = *(longlong **)(lVar7 + 0x40);
    if (plStack_90 != plVar8) {
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plStack_90 + 0xc) = *(int *)((longlong)plStack_90 + 0xc) + 1;
        UNLOCK();
        plVar8 = *(longlong **)(lVar7 + 0x40);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (plVar8 != (longlong *)0x0)) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      *(longlong **)(lVar7 + 0x40) = plVar9;
    }
    plVar8 = plVar13;
    if (param_3 != (longlong *)0x0) {
      plVar5 = (longlong *)FUN_142e20fc0();
      plVar9 = param_3;
      do {
        plVar8 = param_3;
        if (plVar9 == plVar5) break;
        plVar9 = (longlong *)plVar9[6];
        plVar8 = plVar13;
      } while (plVar9 != (longlong *)0x0);
    }
    lVar7 = plVar8[0x1f];
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0x368))(plVar8);
      lVar7 = plVar8[0x1f];
      if (lVar7 == 0) goto LAB_142c79f57;
    }
    lVar11 = FUN_142e20fc0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      (**(code **)(**(longlong **)(local_98 + 0x10) + 0x290))(*(longlong **)(local_98 + 0x10),lVar7)
      ;
    }
  }
LAB_142c79f57:
  lVar7 = local_98;
  local_60 = 3;
  local_68 = (void *)0x0;
  *(undefined8 *)(local_98 + 0x18) = param_1;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  _Src = local_68;
  FGenericPlatformString::Memcpy(local_68,&DAT_14583aa58,6);
  local_res10 = *(undefined8 *)(*(longlong *)(lVar7 + 0x10) + 0x18);
  FName::ToString(&local_res10,&local_88);
  iVar3 = local_80;
  if (((int)local_60 != 0) && (iVar14 = (int)local_60 + -1, iVar14 != 0)) {
    lVar11 = (longlong)local_80;
    local_80 = (uint)(local_80 == 0) + local_80 + iVar14;
    if (local_7c < local_80) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar3);
    }
    pvVar2 = (void *)((longlong)local_88 + (lVar11 - (ulonglong)(iVar3 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,_Src,(longlong)iVar14 * 2);
    *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar2) = 0;
  }
  pvVar2 = local_88;
  puVar12 = (undefined2 *)0x0;
  lVar11 = (longlong)local_80;
  local_58 = (undefined2 *)0x0;
  local_50 = local_80;
  if (local_80 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_80,0);
    puVar12 = local_58;
    _guard_xfg_dispatch_icall_nop(local_58,pvVar2,lVar11 * 2);
  }
  iVar3 = local_50;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  puVar10 = &DAT_143f3eda8;
  if (iVar3 != 0) {
    puVar10 = puVar12;
  }
  FName::FName(&local_res18,puVar10,1);
  *(undefined8 *)(lVar7 + 0xb0) = local_res18;
  iVar3 = DAT_1466acc90 + 1;
  *(int *)(lVar7 + 0xb4) = DAT_1466acc90;
  DAT_1466acc90 = iVar3;
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
  }
  lVar7 = local_res20;
  *(undefined1 *)(local_98 + 0x31) = *(undefined1 *)(local_res20 + 0x31);
  TArray<FObjectImport,FDefaultAllocator>::operator=(local_98 + 0x20,local_res20 + 0x20);
  *(undefined1 *)(local_98 + 0xa0) = *(undefined1 *)(lVar7 + 0xa0);
  local_78 = local_98;
  plStack_70 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
  }
  if (param_2 != &local_78) {
    *param_2 = local_98;
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&plStack_70);
  }
  plVar8 = plStack_70;
  plVar13 = plStack_90;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_70 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar13 = plStack_90;
      if (iVar3 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
        plVar13 = plStack_90;
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar13 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142c7a1c0 FUN_142c7a1c0 body=250 status=ok
// SIG undefined FUN_142c7a1c0(void)

void FUN_142c7a1c0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *local_28;
  longlong *local_20;
  
  plVar4 = *(longlong **)(param_2 + 0x118);
  if (plVar4 != (longlong *)0x0) {
    uVar5 = FUN_142e27720();
    lVar6 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
    if (lVar6 != 0) {
      FUN_142c6e640(lVar6,&local_28,param_3);
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0x48))(local_28,param_1 + 0x38);
        lVar6 = UObject::FindFunction(local_28[2],*(undefined8 *)(param_1 + 0x38));
        if (lVar6 != 0) {
          (**(code **)(*(longlong *)local_28[2] + 0x208))((longlong *)local_28[2],lVar6,0);
        }
      }
      plVar4 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
  }
  UAnimNotify::Notify(param_1,param_2,param_3);
  return;
}



// FUNCTION 142c7a2c0 FUN_142c7a2c0 body=58 status=ok
// SIG undefined FUN_142c7a2c0(void)

void FUN_142c7a2c0(undefined8 param_1,longlong param_2,longlong param_3)

{
  thunk_FUN_1428f9800();
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_142d8eb90(*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_3 + 0x18));
  }
  return;
}



// FUNCTION 142c7a300 FUN_142c7a300 body=58 status=ok
// SIG undefined FUN_142c7a300(void)

void FUN_142c7a300(undefined8 param_1,longlong param_2,longlong param_3)

{
  thunk_FUN_1428f9800();
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_142d8ebe0(*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_3 + 0x18));
  }
  return;
}



// FUNCTION 142c7a340 FUN_142c7a340 body=58 status=ok
// SIG undefined FUN_142c7a340(void)

void FUN_142c7a340(undefined8 param_1,longlong param_2,longlong param_3)

{
  thunk_FUN_1428f9800();
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_142d8ed50(*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_3 + 0x18));
  }
  return;
}



// FUNCTION 142c7a380 FUN_142c7a380 body=157 status=ok
// SIG undefined FUN_142c7a380(void)

void FUN_142c7a380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong local_28 [4];
  
  local_28[1] = 6;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"Begin",0xc);
  FUN_142c7a600(param_1,param_2,param_3,local_28);
  if (local_28[0] != 0) {
    FMemory::Free(local_28[0]);
  }
  thunk_FUN_1428f9800(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142c7a420 FUN_142c7a420 body=58 status=ok
// SIG undefined FUN_142c7a420(void)

void FUN_142c7a420(undefined8 param_1,longlong param_2,longlong param_3)

{
  thunk_FUN_1428f9860();
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_142d8f450(*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_3 + 0x18));
  }
  return;
}



// FUNCTION 142c7a460 FUN_142c7a460 body=58 status=ok
// SIG undefined FUN_142c7a460(void)

void FUN_142c7a460(undefined8 param_1,longlong param_2,longlong param_3)

{
  thunk_FUN_1428f9860();
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_142d8f4a0(*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_3 + 0x18));
  }
  return;
}



// FUNCTION 142c7a4a0 FUN_142c7a4a0 body=58 status=ok
// SIG undefined FUN_142c7a4a0(void)

void FUN_142c7a4a0(undefined8 param_1,longlong param_2,longlong param_3)

{
  thunk_FUN_1428f9860();
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_142d8f610(*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_3 + 0x18));
  }
  return;
}



// FUNCTION 142c7a4e0 FUN_142c7a4e0 body=178 status=ok
// SIG undefined FUN_142c7a4e0(void)

void FUN_142c7a4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  longlong local_18 [2];
  
  thunk_FUN_1428f9860();
  local_18[0] = 0;
  if (param_4 == '\0') {
    local_18[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    uVar3 = 8;
    pwVar2 = L"End";
  }
  else {
    local_18[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    uVar3 = 0xc;
    pwVar2 = L"Abort";
  }
  lVar1 = local_18[0];
  FGenericPlatformString::Memcpy(local_18[0],pwVar2,uVar3);
  FUN_142c7a600(param_1,param_2,param_3,local_18);
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 142c7a5b0 FUN_142c7a5b0 body=72 status=ok
// SIG undefined FUN_142c7a5b0(void)

void FUN_142c7a5b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x180);
  lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x188) * 0x18;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    if (*(longlong **)(lVar2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 8) + 0x68))();
    }
  }
  return;
}



// FUNCTION 142c7a600 FUN_142c7a600 body=363 status=ok
// SIG undefined FUN_142c7a600(void)

void FUN_142c7a600(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined8 local_res10;
  longlong local_40;
  longlong *local_38;
  undefined2 *local_30;
  int local_28;
  longlong local_20 [3];
  
  plVar4 = *(longlong **)(param_2 + 0x118);
  if (plVar4 != (longlong *)0x0) {
    uVar5 = FUN_142e27720();
    lVar6 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
    if (lVar6 != 0) {
      FUN_142c6e640(lVar6,&local_40,param_3);
      if (local_40 != 0) {
        if (*(int *)(param_4 + 1) == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*param_4;
        }
        puVar7 = (undefined8 *)FName::ToString(param_1 + 0x30,local_20);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar7;
        }
        FString::PrintfImpl(&local_30,L"%s_%s",puVar9,puVar8,uVar5);
        if (local_20[0] != 0) {
          FMemory::Free();
        }
        puVar8 = &DAT_143f3eda8;
        if (local_28 != 0) {
          puVar8 = local_30;
        }
        FName::FName(&local_res10,puVar8,1);
        lVar6 = UObject::FindFunction(*(undefined8 *)(local_40 + 0x10),local_res10);
        if (lVar6 != 0) {
          (**(code **)(**(longlong **)(local_40 + 0x10) + 0x208))
                    (*(longlong **)(local_40 + 0x10),lVar6,0);
        }
        if (local_30 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      plVar4 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142c7a780 FUN_142c7a780 body=222 status=ok
// SIG undefined FUN_142c7a780(void)

void FUN_142c7a780(longlong param_1,char param_2,int param_3,undefined8 *param_4,undefined8 *param_5
                  )

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  
  lVar4 = FUN_142c6d270(param_1,param_3);
  if ((*(char *)(lVar4 + 5) != param_2) || ((param_2 != '\x01' && (param_2 != '\x04')))) {
    *(char *)(lVar4 + 5) = param_2;
    if ((param_2 == '\x01') || (param_2 == '\x04')) {
      if ((*(int *)(param_1 + 0x48) < *(int *)(param_1 + 0x44)) &&
         (*(int *)(param_1 + 0x40) == param_3)) {
        piVar5 = *(int **)(param_1 + 0x10);
        piVar1 = piVar5 + (longlong)*(int *)(param_1 + 0x18) * 2;
        for (; piVar5 != piVar1; piVar5 = piVar5 + 2) {
          if (*piVar5 == param_3) {
            if (piVar5 == (int *)0x0) {
              return;
            }
            cVar2 = *(char *)((longlong)piVar5 + 5);
            if ((cVar2 != '\x01') && (cVar2 != '\x04')) {
              return;
            }
            if (cVar2 == (char)piVar5[1]) {
              return;
            }
            goto LAB_142c7a845;
          }
        }
      }
      else {
LAB_142c7a845:
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x44);
      }
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x2c);
      *param_4 = *(undefined8 *)(param_1 + 0x24);
      param_4[1] = uVar3;
      *param_5 = *(undefined8 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x44);
    }
  }
  return;
}



// FUNCTION 142c7a860 FUN_142c7a860 body=761 status=ok
// SIG undefined FUN_142c7a860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c7a860(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  undefined8 local_a0 [2];
  undefined8 local_90;
  longlong local_88 [8];
  longlong *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FWeakObjectPtr::operator=(local_a0,*(undefined8 *)(param_1 + 0x118));
  cVar4 = FWeakObjectPtr::IsValid(local_a0);
  if (cVar4 != '\0') {
    local_90 = local_a0[0];
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x340,local_a8,&local_90);
    plVar12 = (longlong *)0x0;
    plVar5 = plVar12;
    if (local_a8[0] != -1) {
      plVar5 = (longlong *)((longlong)local_a8[0] * 0x20 + *(longlong *)(param_1 + 0x340));
    }
    plVar9 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar9 = plVar12;
    }
    if (plVar9 != (longlong *)0x0) {
      iVar6 = (int)plVar9[1];
      if (0 < iVar6) {
        plVar9 = (longlong *)*plVar9;
        local_48 = (longlong *)0x0;
        local_40 = iVar6;
        if (iVar6 == 0) {
          local_3c = 0;
        }
        else {
          TArray<TScriptDelegate<FWeakObjectPtr>,TInlineAllocator<4,FDefaultAllocator>_>::
          ResizeForCopy(local_88,iVar6,0);
          plVar5 = local_88;
          if (local_48 != (longlong *)0x0) {
            plVar5 = local_48;
          }
          do {
            *plVar5 = *plVar9;
            lVar3 = plVar9[1];
            plVar5[1] = lVar3;
            if (lVar3 != 0) {
              LOCK();
              *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
              UNLOCK();
            }
            plVar9 = plVar9 + 2;
            iVar6 = iVar6 + -1;
            plVar5 = plVar5 + 2;
          } while (iVar6 != 0);
        }
        plVar5 = local_88;
        if (local_48 != (longlong *)0x0) {
          plVar5 = plVar12;
        }
        puVar8 = (undefined8 *)((ulonglong)plVar5 | (ulonglong)local_48);
        puVar7 = puVar8 + (longlong)local_40 * 2;
        iVar6 = local_40;
        for (; local_40 = iVar6, puVar8 != puVar7; puVar8 = puVar8 + 2) {
          plVar5 = (longlong *)puVar8[1];
          plVar9 = (longlong *)*puVar8;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
            UNLOCK();
          }
          if (plVar9 == (longlong *)0x0) {
LAB_142c7aa7f:
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          else if (plVar5 != (longlong *)0x0) {
            LOCK();
            iVar6 = (int)plVar5[1];
            if (iVar6 == 0) {
              *(int *)(plVar5 + 1) = 0;
              iVar6 = 0;
            }
            UNLOCK();
            if (0 < iVar6) {
              plVar10 = plVar5;
              plVar11 = plVar12;
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                iVar6 = (int)plVar5[1];
                bVar13 = iVar6 == 0;
                if (bVar13) {
                  *(int *)(plVar5 + 1) = 0;
                  iVar6 = 0;
                }
                UNLOCK();
                while (plVar10 = plVar12, plVar11 = plVar12, !bVar13) {
                  LOCK();
                  bVar13 = iVar6 == (int)plVar5[1];
                  if (bVar13) {
                    *(int *)(plVar5 + 1) = iVar6 + 1;
                  }
                  UNLOCK();
                  plVar10 = plVar5;
                  plVar11 = plVar9;
                  if (bVar13) break;
                  LOCK();
                  iVar6 = (int)plVar5[1];
                  bVar13 = iVar6 == 0;
                  if (bVar13) {
                    *(int *)(plVar5 + 1) = 0;
                    iVar6 = 0;
                  }
                  UNLOCK();
                }
              }
              FUN_142cf4c90(plVar11,param_2);
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                plVar9 = plVar10 + 1;
                lVar3 = *plVar9;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)lVar3 == 1) {
                  (**(code **)*plVar10)(plVar10);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar10 + 0xc);
                  iVar6 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*plVar10 + 8))(plVar10,1);
                  }
                }
              }
            }
            goto LAB_142c7aa7f;
          }
          iVar6 = local_40;
        }
        plVar5 = local_88;
        if (local_48 != (longlong *)0x0) {
          plVar5 = local_48;
        }
        if (iVar6 != 0) {
          plVar5 = plVar5 + 1;
          do {
            plVar12 = (longlong *)*plVar5;
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar2 == 1) && (plVar12 != (longlong *)0x0)) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
            plVar5 = plVar5 + 2;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 142c7ab60 FUN_142c7ab60 body=761 status=ok
// SIG undefined FUN_142c7ab60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c7ab60(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  undefined8 local_a0 [2];
  undefined8 local_90;
  longlong local_88 [8];
  longlong *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FWeakObjectPtr::operator=(local_a0,*(undefined8 *)(param_2 + 0x118));
  cVar4 = FWeakObjectPtr::IsValid(local_a0);
  if (cVar4 != '\0') {
    local_90 = local_a0[0];
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x340,local_a8,&local_90);
    plVar12 = (longlong *)0x0;
    plVar5 = plVar12;
    if (local_a8[0] != -1) {
      plVar5 = (longlong *)((longlong)local_a8[0] * 0x20 + *(longlong *)(param_1 + 0x340));
    }
    plVar9 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar9 = plVar12;
    }
    if (plVar9 != (longlong *)0x0) {
      iVar6 = (int)plVar9[1];
      if (0 < iVar6) {
        plVar9 = (longlong *)*plVar9;
        local_48 = (longlong *)0x0;
        local_40 = iVar6;
        if (iVar6 == 0) {
          local_3c = 0;
        }
        else {
          TArray<TScriptDelegate<FWeakObjectPtr>,TInlineAllocator<4,FDefaultAllocator>_>::
          ResizeForCopy(local_88,iVar6,0);
          plVar5 = local_88;
          if (local_48 != (longlong *)0x0) {
            plVar5 = local_48;
          }
          do {
            *plVar5 = *plVar9;
            lVar3 = plVar9[1];
            plVar5[1] = lVar3;
            if (lVar3 != 0) {
              LOCK();
              *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
              UNLOCK();
            }
            plVar9 = plVar9 + 2;
            iVar6 = iVar6 + -1;
            plVar5 = plVar5 + 2;
          } while (iVar6 != 0);
        }
        plVar5 = local_88;
        if (local_48 != (longlong *)0x0) {
          plVar5 = plVar12;
        }
        puVar8 = (undefined8 *)((ulonglong)plVar5 | (ulonglong)local_48);
        puVar7 = puVar8 + (longlong)local_40 * 2;
        iVar6 = local_40;
        for (; local_40 = iVar6, puVar8 != puVar7; puVar8 = puVar8 + 2) {
          plVar5 = (longlong *)puVar8[1];
          plVar9 = (longlong *)*puVar8;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
            UNLOCK();
          }
          if (plVar9 == (longlong *)0x0) {
LAB_142c7ad7f:
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          else if (plVar5 != (longlong *)0x0) {
            LOCK();
            iVar6 = (int)plVar5[1];
            if (iVar6 == 0) {
              *(int *)(plVar5 + 1) = 0;
              iVar6 = 0;
            }
            UNLOCK();
            if (0 < iVar6) {
              plVar10 = plVar5;
              plVar11 = plVar12;
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                iVar6 = (int)plVar5[1];
                bVar13 = iVar6 == 0;
                if (bVar13) {
                  *(int *)(plVar5 + 1) = 0;
                  iVar6 = 0;
                }
                UNLOCK();
                while (plVar10 = plVar12, plVar11 = plVar12, !bVar13) {
                  LOCK();
                  bVar13 = iVar6 == (int)plVar5[1];
                  if (bVar13) {
                    *(int *)(plVar5 + 1) = iVar6 + 1;
                  }
                  UNLOCK();
                  plVar10 = plVar5;
                  plVar11 = plVar9;
                  if (bVar13) break;
                  LOCK();
                  iVar6 = (int)plVar5[1];
                  bVar13 = iVar6 == 0;
                  if (bVar13) {
                    *(int *)(plVar5 + 1) = 0;
                    iVar6 = 0;
                  }
                  UNLOCK();
                }
              }
              FUN_142cf51c0(plVar11,param_2);
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                plVar9 = plVar10 + 1;
                lVar3 = *plVar9;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)lVar3 == 1) {
                  (**(code **)*plVar10)(plVar10);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar10 + 0xc);
                  iVar6 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*plVar10 + 8))(plVar10,1);
                  }
                }
              }
            }
            goto LAB_142c7ad7f;
          }
          iVar6 = local_40;
        }
        plVar5 = local_88;
        if (local_48 != (longlong *)0x0) {
          plVar5 = local_48;
        }
        if (iVar6 != 0) {
          plVar5 = plVar5 + 1;
          do {
            plVar12 = (longlong *)*plVar5;
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar2 == 1) && (plVar12 != (longlong *)0x0)) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
            plVar5 = plVar5 + 2;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 142c7ae60 FUN_142c7ae60 body=761 status=ok
// SIG undefined FUN_142c7ae60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c7ae60(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  undefined8 local_a0 [2];
  undefined8 local_90;
  longlong local_88 [8];
  longlong *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FWeakObjectPtr::operator=(local_a0);
  cVar4 = FWeakObjectPtr::IsValid(local_a0);
  if (cVar4 != '\0') {
    local_90 = local_a0[0];
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x390,local_a8,&local_90);
    plVar12 = (longlong *)0x0;
    plVar5 = plVar12;
    if (local_a8[0] != -1) {
      plVar5 = (longlong *)((longlong)local_a8[0] * 0x20 + *(longlong *)(param_1 + 0x390));
    }
    plVar9 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar9 = plVar12;
    }
    if (plVar9 != (longlong *)0x0) {
      iVar6 = (int)plVar9[1];
      if (0 < iVar6) {
        plVar9 = (longlong *)*plVar9;
        local_48 = (longlong *)0x0;
        local_40 = iVar6;
        if (iVar6 == 0) {
          local_3c = 0;
        }
        else {
          TArray<TScriptDelegate<FWeakObjectPtr>,TInlineAllocator<4,FDefaultAllocator>_>::
          ResizeForCopy(local_88,iVar6,0);
          plVar5 = local_88;
          if (local_48 != (longlong *)0x0) {
            plVar5 = local_48;
          }
          do {
            *plVar5 = *plVar9;
            lVar3 = plVar9[1];
            plVar5[1] = lVar3;
            if (lVar3 != 0) {
              LOCK();
              *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
              UNLOCK();
            }
            plVar9 = plVar9 + 2;
            iVar6 = iVar6 + -1;
            plVar5 = plVar5 + 2;
          } while (iVar6 != 0);
        }
        plVar5 = local_88;
        if (local_48 != (longlong *)0x0) {
          plVar5 = plVar12;
        }
        puVar8 = (undefined8 *)((ulonglong)plVar5 | (ulonglong)local_48);
        puVar7 = puVar8 + (longlong)local_40 * 2;
        iVar6 = local_40;
        for (; local_40 = iVar6, puVar8 != puVar7; puVar8 = puVar8 + 2) {
          plVar5 = (longlong *)puVar8[1];
          plVar9 = (longlong *)*puVar8;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
            UNLOCK();
          }
          if (plVar9 == (longlong *)0x0) {
LAB_142c7b07f:
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          else if (plVar5 != (longlong *)0x0) {
            LOCK();
            iVar6 = (int)plVar5[1];
            if (iVar6 == 0) {
              *(int *)(plVar5 + 1) = 0;
              iVar6 = 0;
            }
            UNLOCK();
            if (0 < iVar6) {
              plVar10 = plVar5;
              plVar11 = plVar12;
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                iVar6 = (int)plVar5[1];
                bVar13 = iVar6 == 0;
                if (bVar13) {
                  *(int *)(plVar5 + 1) = 0;
                  iVar6 = 0;
                }
                UNLOCK();
                while (plVar10 = plVar12, plVar11 = plVar12, !bVar13) {
                  LOCK();
                  bVar13 = iVar6 == (int)plVar5[1];
                  if (bVar13) {
                    *(int *)(plVar5 + 1) = iVar6 + 1;
                  }
                  UNLOCK();
                  plVar10 = plVar5;
                  plVar11 = plVar9;
                  if (bVar13) break;
                  LOCK();
                  iVar6 = (int)plVar5[1];
                  bVar13 = iVar6 == 0;
                  if (bVar13) {
                    *(int *)(plVar5 + 1) = 0;
                    iVar6 = 0;
                  }
                  UNLOCK();
                }
              }
              FUN_142cf5b40(plVar11,param_2);
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                plVar9 = plVar10 + 1;
                lVar3 = *plVar9;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)lVar3 == 1) {
                  (**(code **)*plVar10)(plVar10);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar10 + 0xc);
                  iVar6 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*plVar10 + 8))(plVar10,1);
                  }
                }
              }
            }
            goto LAB_142c7b07f;
          }
          iVar6 = local_40;
        }
        plVar5 = local_88;
        if (local_48 != (longlong *)0x0) {
          plVar5 = local_48;
        }
        if (iVar6 != 0) {
          plVar5 = plVar5 + 1;
          do {
            plVar12 = (longlong *)*plVar5;
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar2 == 1) && (plVar12 != (longlong *)0x0)) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
            plVar5 = plVar5 + 2;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 142c7b160 FUN_142c7b160 body=46 status=ok
// SIG undefined FUN_142c7b160(void)

void FUN_142c7b160(longlong param_1,int param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x10);
  piVar1 = piVar2 + (longlong)*(int *)(param_1 + 0x18) * 2;
  if (piVar2 != piVar1) {
    while (*piVar2 != param_2) {
      piVar2 = piVar2 + 2;
      if (piVar2 == piVar1) {
        return;
      }
    }
    if ((piVar2 != (int *)0x0) && (param_3 != '\0')) {
      *(undefined1 *)((longlong)piVar2 + 5) = 0;
    }
  }
  return;
}



// FUNCTION 142c7b190 FUN_142c7b190 body=180 status=ok
// SIG undefined FUN_142c7b190(void)

void FUN_142c7b190(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  
  UObjectBaseUtility::IsTemplate(param_1 + -0x28,0x30);
  iVar1 = *(int *)(param_1 + -0x1c);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar6 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar6;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    lVar3 = FUN_1406d4330(param_1 + -0x28);
    if ((*(longlong *)(lVar3 + 0x18) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x118), lVar3 != 0)) {
      uVar4 = UGameplayTaskOwnerInterface::StaticClass();
      plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,param_2);
      }
    }
  }
  return;
}



// FUNCTION 142c7b250 FUN_142c7b250 body=180 status=ok
// SIG undefined FUN_142c7b250(void)

void FUN_142c7b250(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  
  UObjectBaseUtility::IsTemplate(param_1 + -0x28,0x30);
  iVar1 = *(int *)(param_1 + -0x1c);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar6 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar6;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    lVar3 = FUN_1406d4330(param_1 + -0x28);
    if ((*(longlong *)(lVar3 + 0x18) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x118), lVar3 != 0)) {
      uVar4 = UGameplayTaskOwnerInterface::StaticClass();
      plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x40))(plVar5,param_2);
      }
    }
  }
  return;
}



// FUNCTION 142c7b310 FUN_142c7b310 body=180 status=ok
// SIG undefined FUN_142c7b310(void)

void FUN_142c7b310(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  
  UObjectBaseUtility::IsTemplate(param_1 + -0x28,0x30);
  iVar1 = *(int *)(param_1 + -0x1c);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar6 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar6;
    lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
  }
  else {
    lVar3 = 0;
  }
  if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
    lVar3 = FUN_1406d4330(param_1 + -0x28);
    if ((*(longlong *)(lVar3 + 0x18) != 0) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x118), lVar3 != 0)) {
      uVar4 = UGameplayTaskOwnerInterface::StaticClass();
      plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x30))(plVar5,param_2);
      }
    }
  }
  return;
}



// FUNCTION 142c7b3d0 FUN_142c7b3d0 body=166 status=ok
// SIG undefined FUN_142c7b3d0(void)

void FUN_142c7b3d0(longlong *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  
  if (param_3 == '\0') {
    *(int *)((longlong)param_1 + 0x48c) = *(int *)((longlong)param_1 + 0x48c) + 1;
    if (((char)param_1[0xa4] == '\0') && (param_1[3] != 0)) {
      iVar2 = FUN_14233f450();
      if (iVar2 == 3) {
        cVar1 = (**(code **)(*param_1 + 0x128))(param_1);
        if (cVar1 != '\0') {
          *(undefined1 *)(param_1 + 0xa4) = 1;
          FUN_142c76980(param_1);
        }
      }
    }
    if ((char)param_1[0xa4] != '\0') {
      *(undefined1 *)(param_1 + 0x91) = 3;
      (**(code **)(*param_1 + 0x120))();
      if (param_1[3] != 0) {
        FUN_142e26000(param_1[2],*(undefined8 *)(param_1[3] + 0x118));
        return;
      }
      FUN_142e26000(param_1[2]);
      return;
    }
    (**(code **)(*param_1 + 0x118))(param_1);
  }
  return;
}



// FUNCTION 142c7b480 FUN_142c7b480 body=444 status=ok
// SIG undefined FUN_142c7b480(void)

void FUN_142c7b480(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  longlong *local_res8;
  longlong local_28;
  longlong *local_20;
  
  plVar5 = (longlong *)0x0;
  local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
  if (param_1[3] == 0) {
    return;
  }
  FUN_142c80680();
  local_20 = (longlong *)param_1[0x18];
  local_28 = 0;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)local_20[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(local_20 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)local_20[1];
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        if (local_20 != (longlong *)0x0) {
          local_28 = param_1[0x17];
        }
        goto LAB_142c7b4f3;
      }
      LOCK();
      iVar4 = (int)local_20[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(local_20 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
    local_20 = (longlong *)0x0;
  }
LAB_142c7b4f3:
  TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove
            (param_1[3] + 0x228,&local_28);
  plVar2 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_20 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if ((*(byte *)(param_1 + 7) & 2) != 0) {
    return;
  }
  if (param_1[2] != 0) {
    lVar3 = *(longlong *)(param_1[2] + 0x48);
    local_res8 = plVar5;
    if (lVar3 != 0) {
      plVar6 = *(longlong **)(param_1[3] + 0x180);
      plVar2 = plVar6 + (longlong)*(int *)(param_1[3] + 0x188) * 3;
      for (; plVar6 != plVar2; plVar6 = plVar6 + 3) {
        if (*plVar6 == lVar3) {
          local_res8 = (longlong *)plVar6[2];
          plVar5 = (longlong *)plVar6[1];
          if (local_res8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_res8 + 1) = (int)local_res8[1] + 1;
            UNLOCK();
          }
          break;
        }
      }
    }
    bVar7 = plVar5 == param_1;
    plVar5 = (longlong *)0x1;
    if (bVar7) {
      bVar7 = true;
      goto LAB_142c7b5d3;
    }
  }
  bVar7 = false;
LAB_142c7b5d3:
  if ((plVar5 != (longlong *)0x0) && (local_res8 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_res8 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_res8)(local_res8);
      LOCK();
      piVar1 = (int *)((longlong)local_res8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_res8 + 8))(local_res8,1);
      }
    }
  }
  if (bVar7) {
    FUN_142c80fd0(param_1[3],param_1[2] + 0x48);
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



// FUNCTION 142c7b640 FUN_142c7b640 body=154 status=ok
// SIG undefined FUN_142c7b640(void)

void FUN_142c7b640(longlong param_1,char param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 param_5,longlong *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_142c6d270(param_1,param_3);
  if ((*(char *)(lVar3 + 5) != param_2) || ((param_2 != '\x01' && (param_2 != '\x04')))) {
    if (param_6 != (longlong *)0x0) {
      (**(code **)(*param_6 + 0x260))();
    }
    *(char *)(lVar3 + 5) = param_2;
    if ((param_2 == '\x01') || (param_2 == '\x04')) {
      *(char *)(lVar3 + 4) = param_2;
    }
    else {
      *(char *)(param_1 + 0x20) = param_2;
      uVar1 = *param_4;
      uVar2 = param_4[1];
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      *(undefined8 *)(param_1 + 0x38) = param_5;
      *(undefined8 *)(param_1 + 0x24) = uVar1;
      *(undefined8 *)(param_1 + 0x2c) = uVar2;
      *(undefined4 *)(param_1 + 0x40) = param_3;
    }
  }
  return;
}



// FUNCTION 142c7b6e0 FUN_142c7b6e0 body=35 status=ok
// SIG undefined FUN_142c7b6e0(void)

void FUN_142c7b6e0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  
  if ((param_2 != '\x01') && (param_2 != '\x04')) {
    uVar1 = *(undefined8 *)(param_1 + 0x2c);
    *param_5 = *(undefined8 *)(param_1 + 0x24);
    param_5[1] = uVar1;
    *param_6 = *(undefined8 *)(param_1 + 0x38);
  }
  return;
}



// FUNCTION 142c7b710 FUN_142c7b710 body=343 status=ok
// SIG undefined FUN_142c7b710(void)

void FUN_142c7b710(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 local_res8;
  
  lVar4 = 0;
  lVar3 = lVar4;
  if (param_1[3] != 0) {
    lVar3 = *(longlong *)(param_1[3] + 0x118);
  }
  if (((param_3 == '\0') && (lVar3 != 0)) && (lVar1 = param_1[2], lVar1 != 0)) {
    *(int *)((longlong)param_1 + 0x48c) = *(int *)((longlong)param_1 + 0x48c) + 1;
    *(undefined1 *)(param_1 + 0x91) = 2;
    if (*(char *)(lVar1 + 0x260) == '\0') {
      iVar2 = 0x7fffffff;
    }
    else {
      local_res8 = 0xffffffffffffffff;
      fVar5 = (float)FUN_142de77e0(lVar1 + 0x1e0,lVar3,0,&local_res8);
      iVar2 = (int)ROUND(fVar5 * 2.0 + 0.5) >> 1;
    }
    *(int *)(param_1 + 0x92) = iVar2;
    if (*(char *)((longlong)param_1 + 0x49c) == '\0') {
      uVar6 = 0x7f7fffff;
    }
    else {
      local_res8 = 0xffffffffffffffff;
      uVar6 = FUN_142de77e0(param_1 + 0x94,lVar3,0,&local_res8);
    }
    *(undefined4 *)((longlong)param_1 + 0x494) = uVar6;
    if ((param_1[3] == 0) ||
       ((lVar3 = *(longlong *)(param_1[3] + 0x120), lVar3 == 0 &&
        (lVar3 = FUN_1423407b0(), lVar3 == 0)))) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(lVar3 + 0x790);
    }
    *(undefined4 *)(param_1 + 0x93) = uVar6;
    (**(code **)(*param_1 + 0x118))(param_1);
    if (param_1[3] != 0) {
      lVar4 = *(longlong *)(param_1[3] + 0x118);
    }
    FUN_142e25fc0(lVar1,lVar4);
  }
  return;
}



// FUNCTION 142c7b870 FUN_142c7b870 body=46 status=ok
// SIG undefined FUN_142c7b870(void)

void FUN_142c7b870(undefined8 param_1)

{
  undefined **local_48;
  undefined8 local_40;
  undefined ***local_10;
  
  local_48 = &PTR_LAB_14583fc00;
  local_10 = &local_48;
  local_40 = param_1;
  FUN_142c6db40(param_1,&local_48);
  return;
}



// FUNCTION 142c7b8a0 FUN_142c7b8a0 body=576 status=ok
// SIG undefined FUN_142c7b8a0(void)

undefined8 FUN_142c7b8a0(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  cVar1 = FWeakObjectPtr::IsValid();
  if ((cVar1 == '\0') || (cVar1 = FWeakObjectPtr::IsValid(param_1 + 8), cVar1 != '\0'))
  goto LAB_142c7b959;
  lVar4 = FWeakObjectPtr::Get(param_1);
  FWeakObjectPtr::operator=(param_1,lVar4);
  if (lVar4 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = *(longlong **)(lVar4 + 0x118);
  }
  if ((plVar6 == (longlong *)0x0) || (lVar4 = (**(code **)(*plVar6 + 0x678))(), lVar4 == 0)) {
LAB_142c7b94b:
    lVar4 = 0;
  }
  else {
    lVar5 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142c7b94b;
  }
  FWeakObjectPtr::operator=(param_1 + 8,lVar4);
LAB_142c7b959:
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
  if ((cVar1 == '\0') || (cVar1 = FWeakObjectPtr::IsValid(param_1), cVar1 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (*(char *)(param_1 + 0x24) == '\0') {
      plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
      cVar1 = (**(code **)(*plVar6 + 0x780))(plVar6);
      if ((cVar1 == '\0') && (lVar4 = (**(code **)(*plVar6 + 0x690))(plVar6), lVar4 == 0)) {
        lVar4 = FWeakObjectPtr::Get(param_1 + 0x10);
        if (lVar4 != 0) {
          FUN_142c83b00(param_1);
        }
      }
    }
    else {
      if (((*(char *)(param_1 + 0x28) == '\0') || (*(char *)(param_1 + 0x50) == '\0')) ||
         (*(char *)(param_1 + 0x78) == '\0')) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      *param_2 = uVar3;
      plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
      FWeakObjectPtr::Get(param_1);
      uVar7 = (**(code **)(*plVar6 + 0x148))(plVar6);
      cVar1 = FUN_142341250(uVar7,param_1 + 0x48,0);
      if (((cVar1 == '\0') || (cVar1 = FUN_142341250(uVar7,param_1 + 0x70,0), cVar1 == '\0')) ||
         (cVar1 = FUN_142341250(uVar7,param_1 + 0x98,0), cVar1 == '\0')) {
        *(undefined1 *)(param_1 + 0x24) = 0;
        return 0;
      }
      uVar8 = (**(code **)(*plVar6 + 0x798))(plVar6,local_18);
      FRotator::Vector(uVar8,local_28);
      cVar1 = FUN_142c6cb10(param_1 + 0x28,uVar7,local_28,0);
      if (cVar1 != '\0') {
        cVar1 = FUN_142c6cb10(param_1 + 0x50,uVar7,local_28,1);
        if ((cVar1 != '\0') &&
           (cVar1 = FUN_142c6cb10(param_1 + 0x78,uVar7,local_28,1), cVar1 != '\0')) {
          *(undefined1 *)(param_1 + 0x24) = 0;
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142c7bae0 FUN_142c7bae0 body=83 status=ok
// SIG undefined FUN_142c7bae0(void)

undefined8 FUN_142c7bae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_d8 [208];
  
  uVar1 = FUN_142c62180(local_d8);
  FUN_142c7bb40(param_1,param_2,param_3,uVar1,0);
  return param_2;
}



// FUNCTION 142c7bb40 FUN_142c7bb40 body=185 status=ok
// SIG undefined FUN_142c7bb40(void)

longlong *
FUN_142c7bb40(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  FUN_142c7ddc0(param_1,&local_18,param_3,param_4,param_5);
  plVar5 = local_10;
  if (local_18 == 0) {
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
    local_10 = (longlong *)0x0;
    *param_2 = 0;
  }
  else {
    FUN_142c6cc80(param_1,&local_18);
    *param_2 = local_18;
  }
  param_2[1] = (longlong)local_10;
  FUN_142c63c50(param_4);
  return param_2;
}



// FUNCTION 142c7bc00 FUN_142c7bc00 body=346 status=ok
// SIG undefined FUN_142c7bc00(void)

undefined8
FUN_142c7bc00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined1 local_187;
  undefined4 local_184;
  byte local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined4 local_114;
  undefined1 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  longlong *local_f8;
  undefined1 local_e8 [208];
  
  local_180 = local_180 & 0xf8;
  local_1b8 = &PTR_FUN_143ff6170;
  local_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_158 = 0;
  uStack_150 = 2;
  local_128 = 0;
  uStack_120 = 2;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_184 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 2;
  local_160 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 2;
  local_130 = 0;
  local_118 = 0xff;
  local_114 = 0xffffffff;
  local_110 = 0;
  local_10c = 0;
  local_104 = 0;
  local_100 = 0;
  local_f8 = (longlong *)0x0;
  local_187 = param_4;
  uVar3 = FUN_1405e0fd0(local_e8,&local_1b8);
  FUN_142c7bb40(param_1,param_2,param_3,uVar3,0);
  local_1b8 = &PTR_FUN_143ff6170;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_f8 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*local_f8 + 8))(local_f8,1);
    }
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&local_130);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&local_148);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&local_160);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(&local_178);
  if (local_198 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142c7bd60 FUN_142c7bd60 body=251 status=ok
// SIG undefined FUN_142c7bd60(void)

undefined1
FUN_142c7bd60(longlong param_1,longlong param_2,short param_3,undefined4 param_4,undefined8 param_5,
             undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  cVar3 = FUN_142c7bfc0(param_1,param_2,param_3,param_4,param_5,param_6);
  if (cVar3 == '\0') {
    return 0;
  }
  if ((param_2 != 0) && (param_3 == 2)) {
    lVar4 = FUN_1423ac7e0(param_2);
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (((*(float *)(lVar2 + 0x158) != 0.0) || (*(float *)(lVar2 + 0x15c) != 1.0)) &&
       ((lVar4 != 0 && (*(longlong *)(param_1 + 0x108) != 0)))) {
      plVar5 = (longlong *)FUN_142274b30();
      lVar6 = *plVar5;
      lVar1 = lVar6 + (longlong)(int)plVar5[1] * 0x18;
      for (; lVar6 != lVar1; lVar6 = lVar6 + 0x18) {
        FUN_1422805b0(lVar4,lVar6,*(undefined4 *)(lVar2 + 0x158),*(undefined4 *)(lVar2 + 0x15c));
      }
    }
  }
  return 1;
}



// FUNCTION 142c7be60 FUN_142c7be60 body=346 status=ok
// SIG undefined FUN_142c7be60(void)

void FUN_142c7be60(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                  char param_5,undefined4 param_6,undefined4 param_7,undefined2 param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b2fef0) {
    _Init_thread_header(&DAT_146b2fef0);
    if (DAT_146b2fef0 == -1) {
      FName::FName(&DAT_146b2fee8,L"FullBody",1);
      _Init_thread_footer(&DAT_146b2fef0);
    }
  }
  uVar2 = *param_3;
  lVar1 = *param_1;
  uStack_40 = CONCAT31(uStack_40._1_3_,param_5 * '\x02');
  local_48._0_4_ = (undefined4)uVar2;
  local_48._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_68 = 0;
  local_60 = 0;
  local_38 = param_6;
  uStack_34 = param_7;
  uStack_2c = uStack_4c;
  local_28 = (undefined4)local_48;
  uStack_24 = local_48._4_4_;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_48 = uVar2;
  uStack_30 = param_4;
  uVar2 = (**(code **)(lVar1 + 0xa0))(param_1,param_8);
  (**(code **)(lVar1 + 0xa8))(param_1,uVar2,param_8,param_2,&local_38,&local_68);
  return;
}



// FUNCTION 142c7bfc0 FUN_142c7bfc0 body=1355 status=ok
// SIG undefined FUN_142c7bfc0(void)

undefined8
FUN_142c7bfc0(longlong *param_1,longlong param_2,ulonglong param_3,undefined1 *param_4,
             undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  longlong *plVar15;
  short sVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined4 local_78;
  undefined4 local_74;
  
  sVar16 = (short)param_3;
  (**(code **)(*param_1 + 0xb0))(param_1,param_2,param_3,*param_5);
  if (sVar16 == 0x10) {
    plVar15 = (longlong *)(param_1[0x84] + (longlong)(int)param_1[0x8c] * 8);
  }
  else {
    if (sVar16 == 1) {
      lVar7 = 0x100;
    }
    else if (sVar16 == 2) {
      lVar7 = 0x108;
    }
    else if (sVar16 == 4) {
      lVar7 = 0x110;
    }
    else if (sVar16 == 8) {
      lVar7 = 0x118;
    }
    else {
      lVar7 = 0xf8;
    }
    plVar15 = (longlong *)(lVar7 + (longlong)param_1);
  }
  puVar12 = (undefined1 *)0x0;
  *plVar15 = 0;
  if ((((param_4 != (undefined1 *)0x0) && (param_1[3] != 0)) && (param_2 != 0)) &&
     (lVar7 = FUN_1423ac7e0(param_2), lVar7 != 0)) {
    if (*(float *)(param_1 + 0x1c) <= 0.0 && *(float *)(param_1 + 0x1c) != 0.0) {
      *(undefined4 *)(param_1 + 0x1c) = param_5[1];
    }
    lVar8 = UMaterialInstanceConstant::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
         ) != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    puVar13 = param_4;
    if (!bVar5) {
      puVar13 = puVar12;
    }
    *plVar15 = (longlong)puVar13;
    if (puVar13 == (undefined1 *)0x0) {
      lVar8 = UAnimMontage::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar8 = FUN_14227a0e0(lVar7,param_4,*(undefined8 *)(param_5 + 4),*param_5,param_5[1],
                              param_5[2],1,0xbf800000,0);
        *plVar15 = lVar8;
        if (lVar8 == 0) {
          param_4 = (undefined1 *)0x0;
        }
      }
      else {
        lVar8 = UBlendSpaceBase::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          (**(code **)(*param_1 + 0xc0))(param_1,&local_78);
          FUN_142258610(lVar7,param_5 + 4,param_4,local_78,local_74,param_5[2],*param_5,param_5[1],
                        *(char *)(param_5 + 6) == '\x02',*(char *)(param_5 + 6) == '\x01');
        }
      }
    }
    else {
      FUN_142278740(lVar7,*param_5,param_5[2],0,0,1,*param_5,param_5[1]);
    }
    uVar9 = FUN_142c86b10(param_1,&local_78);
    FUN_142c66760(param_4,uVar9);
    lVar8 = *plVar15;
    if (lVar8 != 0) {
      uVar1 = param_6[2];
      uVar2 = param_6[1];
      uVar3 = *param_6;
      lVar10 = FUN_142c71640(param_1,param_3 & 0xffff);
      cVar6 = FUN_142278320(lVar7,lVar8,0);
      if (cVar6 != '\0') {
        FWeakObjectPtr::operator=(lVar10 + 8,lVar8);
        FWeakObjectPtr::operator=(lVar10,lVar7);
        *(undefined4 *)(lVar10 + 0x14) = uVar3;
        *(undefined4 *)(lVar10 + 0x10) = uVar2;
        *(undefined4 *)(lVar10 + 0x18) = uVar1;
        *(undefined4 *)(lVar10 + 0x2c) = 0;
        lVar8 = FWeakObjectPtr::Get(lVar10 + 8);
        puVar13 = puVar12;
        puVar19 = puVar12;
        if (0 < *(int *)(lVar8 + 0x170)) {
          do {
            lVar8 = FWeakObjectPtr::Get(lVar10 + 8);
            if (*(longlong *)(puVar19 + *(longlong *)(lVar8 + 0x168) + 0x30) ==
                *(longlong *)(puVar19 + *(longlong *)(lVar8 + 0x168) + 0x40)) {
              FUN_142c65f50(lVar10,puVar13);
            }
            uVar14 = (int)puVar13 + 1;
            lVar8 = FWeakObjectPtr::Get(lVar10 + 8);
            puVar13 = (undefined1 *)(ulonglong)uVar14;
            puVar19 = puVar19 + 0x58;
          } while ((int)uVar14 < *(int *)(lVar8 + 0x170));
        }
      }
      lVar7 = UAnimInstance::GetActiveInstanceForMontage(lVar7,*plVar15);
      if (lVar7 != 0) {
        if (*(char *)(param_5 + 6) == '\x01') {
          FAlphaBlend::SetBlendTime(lVar7 + 0x1f8,0);
          *(undefined1 *)(lVar7 + 0x1ac) = 1;
        }
        else if (*(char *)(param_5 + 6) == '\x02') {
          *(undefined1 *)(lVar7 + 0x1ad) = 1;
          FUN_14227cb60(lVar7);
        }
      }
    }
    if (2 < *(byte *)(param_2 + 0x878)) {
      lVar7 = param_1[0x16];
      puVar13 = (undefined1 *)(param_2 + 0x9b0);
      puVar19 = (undefined1 *)(param_2 + 0x9a0);
      puVar17 = *(undefined1 **)(param_2 + 0x9f0);
      if (*(undefined1 **)(param_2 + 0x9f0) == (undefined1 *)0x0) {
        puVar17 = puVar13;
      }
      puVar11 = puVar17 + (longlong)*(int *)(param_2 + 0x9f8) * 0x10;
      for (; (puVar18 = puVar12, puVar17 != puVar11 &&
             (puVar18 = puVar17, *(longlong *)(puVar17 + 8) != lVar7)); puVar17 = puVar17 + 0x10) {
      }
      if ((*(int *)(param_2 + 0x9f8) == 0) &&
         (*(undefined1 **)(param_2 + 0x9a8) != (undefined1 *)0x0)) {
        *puVar19 = **(undefined1 **)(param_2 + 0x9a8);
      }
      if (puVar18 == (undefined1 *)0x0) {
        iVar4 = *(int *)(param_2 + 0x9f8);
        *(int *)(param_2 + 0x9f8) = iVar4 + 1;
        if (*(int *)(param_2 + 0x9fc) < iVar4 + 1) {
          TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(puVar13,iVar4);
        }
        lVar8 = (longlong)iVar4 * 0x10;
        puVar12 = *(undefined1 **)(param_2 + 0x9f0);
        if (*(undefined1 **)(param_2 + 0x9f0) == (undefined1 *)0x0) {
          puVar12 = puVar13;
        }
        *(undefined8 *)(puVar12 + lVar8) = 0;
        *(undefined8 *)(puVar12 + lVar8 + 8) = 0;
        puVar18 = *(undefined1 **)(param_2 + 0x9f0);
        if (*(undefined1 **)(param_2 + 0x9f0) == (undefined1 *)0x0) {
          puVar18 = puVar13;
        }
        puVar18 = puVar18 + lVar8;
        *(longlong *)(puVar18 + 8) = lVar7;
      }
      *puVar18 = 2;
      if (*(undefined1 **)(param_2 + 0x9a8) != (undefined1 *)0x0) {
        if (*(int *)(param_2 + 0x9f8) != 0) {
          puVar19 = *(undefined1 **)(param_2 + 0x9f0);
          if (*(undefined1 **)(param_2 + 0x9f0) == (undefined1 *)0x0) {
            puVar19 = puVar13;
          }
          puVar19 = puVar19 + (longlong)*(int *)(param_2 + 0x9f8) * 0x10 + -0x10;
        }
        **(undefined1 **)(param_2 + 0x9a8) = *puVar19;
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142c7c510 FUN_142c7c510 body=798 status=ok
// SIG undefined FUN_142c7c510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142c7c510(longlong *param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  char *pcVar9;
  bool bVar10;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined4 *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88 [4];
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar4 = param_1[3];
  if (uVar4 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(uVar4 + 0x118);
  }
  if (lVar8 == 0) {
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    bVar10 = false;
    local_b0 = lVar8;
    lVar5 = FUN_142c6f840(param_1,param_2,1);
    if (lVar5 != 0) {
      local_c8 = param_4;
      cVar3 = FUN_142c7c830(param_1,1,lVar5,param_3);
      bVar10 = cVar3 != '\0';
    }
    lVar5 = FUN_142c6f840(param_1,param_2 + 0x18,2);
    if ((lVar5 != 0) &&
       ((local_c8 = param_4, cVar3 = FUN_142c7c830(param_1,2,lVar5,param_3), cVar3 != '\0' ||
        (bVar10 != false)))) {
      bVar10 = true;
    }
    lVar5 = FUN_142c6f840(param_1,param_2 + 0x30,4);
    if ((lVar5 != 0) &&
       ((local_c8 = param_4, cVar3 = FUN_142c7c830(param_1,4,lVar5,param_3), cVar3 != '\0' ||
        (bVar10 != false)))) {
      bVar10 = true;
    }
    lVar5 = FUN_142c6f840(param_1,param_2 + 0x48,8);
    if ((lVar5 != 0) &&
       ((local_c8 = param_4, cVar3 = FUN_142c7c830(param_1,8,lVar5,param_3), cVar3 != '\0' ||
        (bVar10 != false)))) {
      bVar10 = true;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    iVar2 = *(int *)(param_2 + 0x68);
    FUN_142c65c80(param_1,iVar2);
    iVar6 = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    if (0 < iVar2) {
      do {
        pcVar9 = (char *)((longlong)iVar6 * 0x40 + *(longlong *)(param_2 + 0x60));
        local_68 = (longlong *)0x0;
        local_60 = 0;
        FUN_140e3e400(lVar8,local_88,0);
        plVar7 = local_88;
        if (local_68 != (longlong *)0x0) {
          plVar7 = local_68;
        }
        plVar1 = plVar7 + (int)local_60;
        for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
          lVar8 = *plVar7;
          if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x18) == *(longlong *)(pcVar9 + 0x18))) {
            if (*pcVar9 == '\x01') {
              lVar5 = *(longlong *)(pcVar9 + 8);
              if (lVar5 == 0) break;
            }
            else {
              if (((*pcVar9 != '\x02') || (lVar8 == 0)) ||
                 (local_b8 = 0, *(longlong *)(pcVar9 + 0x10) == 0)) break;
              lVar5 = FUN_1423b9120(lVar8);
            }
            local_a8 = *param_3;
            uStack_a4 = param_3[1];
            uStack_a0 = param_3[2];
            uStack_9c = param_3[3];
            local_98 = param_3[4];
            uStack_94 = param_3[5];
            uStack_90 = param_3[6];
            uStack_8c = param_3[7];
            if (pcVar9[0x30] != '\0') {
              local_a8 = *(undefined4 *)(pcVar9 + 0x2c);
            }
            if (pcVar9[0x38] != '\0') {
              uStack_a4 = *(undefined4 *)(pcVar9 + 0x34);
            }
            local_c8 = &local_a8;
            local_c0 = param_4;
            cVar3 = (**(code **)(*param_1 + 0xa8))(param_1,lVar8,0x10,lVar5);
            if ((cVar3 != '\0') || (bVar10 != false)) {
              bVar10 = true;
            }
            break;
          }
        }
        if (local_68 != (longlong *)0x0) {
          FMemory::Free(local_68);
        }
        iVar6 = (int)param_1[0x8c] + 1;
        *(int *)(param_1 + 0x8c) = iVar6;
        lVar8 = local_b0;
      } while (iVar6 < iVar2);
    }
    uVar4 = (ulonglong)bVar10;
  }
  return uVar4;
}



// FUNCTION 142c7c830 FUN_142c7c830 body=108 status=ok
// SIG undefined FUN_142c7c830(void)

void FUN_142c7c830(longlong *param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = (**(code **)(lVar1 + 0xa0))();
  (**(code **)(lVar1 + 0xa8))(param_1,uVar2,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 142c7c8a0 FUN_142c7c8a0 body=96 status=ok
// SIG undefined FUN_142c7c8a0(void)

undefined8 FUN_142c7c8a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  undefined1 local_d8 [208];
  
  puVar2 = (undefined8 *)FUN_142c71200(param_1,local_res10);
  uVar1 = *puVar2;
  uVar3 = FUN_142c62180(local_d8);
  FUN_142c7bb40(param_1,param_2,uVar1,uVar3,0);
  return param_2;
}



// FUNCTION 142c7c900 FUN_142c7c900 body=107 status=ok
// SIG undefined FUN_142c7c900(void)

undefined8
FUN_142c7c900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res10 [8];
  undefined1 local_d8 [208];
  
  puVar1 = (undefined8 *)FUN_142c71200(param_1,local_res10);
  uVar2 = FUN_1405e0fd0(local_d8,param_4);
  FUN_142c7bb40(param_1,param_2,*puVar1,uVar2,0);
  return param_2;
}



// FUNCTION 142c7c970 FUN_142c7c970 body=956 status=ok
// SIG undefined FUN_142c7c970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142c7c970(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_158 [32];
  float local_138;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [32];
  undefined1 local_e8 [128];
  undefined1 *local_68;
  int local_60;
  undefined4 local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((*(int *)(lVar1 + 0x138) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
    if (*(int *)(param_1 + 0x48c) == 1) {
      uVar13 = *(undefined4 *)(lVar1 + 0x1c0);
    }
    else {
      uVar13 = *(undefined4 *)(lVar1 + 0x1c4);
    }
    if ((*(char *)(lVar1 + 0x260) == '\0') ||
       (*(int *)(param_1 + 0x48c) < *(int *)(param_1 + 0x490))) {
      uVar14 = *(undefined4 *)(lVar1 + 0x1c4);
    }
    else {
      uVar14 = *(undefined4 *)(lVar1 + 0x1c8);
    }
    puVar5 = (undefined8 *)FUN_142c62320(local_108);
    *(undefined4 *)puVar5 = uVar13;
    *(undefined4 *)((longlong)puVar5 + 4) = uVar14;
    puVar5[2] = *(undefined8 *)(lVar1 + 0x1d0);
    local_128 = *puVar5;
    uStack_120 = puVar5[1];
    local_118 = *(undefined4 *)(puVar5 + 2);
    uStack_114 = *(undefined4 *)((longlong)puVar5 + 0x14);
    uVar13 = *(undefined4 *)(puVar5 + 3);
    uStack_10c = *(undefined4 *)((longlong)puVar5 + 0x1c);
    iVar4 = *(int *)(lVar1 + 0x138);
    uStack_110 = uVar13;
    if (((*(char *)(lVar1 + 0x1d8) == '\0') && (*(char *)(lVar1 + 0x260) == '\0')) && (iVar4 < 2)) {
      uStack_110._0_1_ = (undefined1)uVar13;
      if (ABS(*(float *)(lVar1 + 0x1c4)) <= 1e-08) {
        uStack_110._0_1_ = 2;
      }
      uStack_110._1_3_ = (undefined3)((uint)uVar13 >> 8);
    }
    if ((*(char *)(param_1 + 0x530) == '\0') && (1 < iVar4)) {
      *(undefined1 *)(param_1 + 0x530) = 1;
      *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_1 + 0x524);
      *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(param_1 + 0x524);
    }
    puVar8 = (undefined1 *)0x0;
    fVar15 = 0.0;
    iVar9 = 0;
    if (1 < iVar4) {
      uVar3 = *(int *)(param_1 + 0x52c) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_1 + 0x52c) = uVar3;
      local_138 = (float)(uVar3 & 0x7fffff | 0x3f800000);
      puVar11 = puVar8;
      if (*(longlong *)(param_1 + 0x18) != 0) {
        puVar11 = *(undefined1 **)(*(longlong *)(param_1 + 0x18) + 0x118);
      }
      fVar17 = local_138 - (float)(int)local_138;
      if (fVar17 < 0.0) {
        iVar4 = rand();
        fVar17 = (float)iVar4 * 3.051851e-05;
      }
      local_60 = *(int *)(lVar1 + 0x138);
      lVar10 = (longlong)local_60;
      local_68 = (undefined1 *)0x0;
      local_5c = 0;
      if (0 < local_60) {
        FUN_1409e3b30(local_e8);
      }
      puVar7 = local_e8;
      if (local_68 != (undefined1 *)0x0) {
        puVar7 = puVar8;
      }
      _guard_xfg_dispatch_icall_nop((void *)((ulonglong)puVar7 | (ulonglong)local_68),0,lVar10 << 2)
      ;
      iVar4 = *(int *)(lVar1 + 0x138);
      fVar16 = 0.0;
      puVar7 = puVar8;
      puVar12 = puVar8;
      if (0 < iVar4) {
        do {
          uVar13 = FUN_142c98860((longlong)(int)puVar12 * 0xb0 + *(longlong *)(lVar1 + 0x130) + 0x78
                                 ,puVar11);
          puVar6 = local_e8;
          if (local_68 != (undefined1 *)0x0) {
            puVar6 = local_68;
          }
          *(undefined4 *)(puVar6 + (longlong)puVar7) = uVar13;
          puVar6 = local_e8;
          if (local_68 != (undefined1 *)0x0) {
            puVar6 = local_68;
          }
          uVar3 = (int)puVar12 + 1;
          fVar16 = fVar16 + *(float *)(puVar6 + (longlong)puVar7);
          iVar4 = *(int *)(lVar1 + 0x138);
          puVar7 = puVar7 + 4;
          puVar12 = (undefined1 *)(ulonglong)uVar3;
        } while ((int)uVar3 < iVar4);
      }
      puVar11 = puVar8;
      iVar9 = -1;
      if (0 < iVar4) {
        do {
          if (fVar15 <= fVar16 * fVar17) {
            puVar7 = local_e8;
            if (local_68 != (undefined1 *)0x0) {
              puVar7 = local_68;
            }
            iVar9 = (int)puVar11;
            if (fVar16 * fVar17 <= fVar15 + *(float *)(puVar7 + (longlong)puVar8 * 4)) break;
          }
          puVar7 = local_e8;
          if (local_68 != (undefined1 *)0x0) {
            puVar7 = local_68;
          }
          fVar15 = fVar15 + *(float *)(puVar7 + (longlong)puVar8 * 4);
          puVar8 = puVar8 + 1;
          puVar11 = (undefined1 *)(ulonglong)((int)puVar11 + 1);
          iVar9 = -1;
        } while ((longlong)puVar8 < (longlong)iVar4);
      }
      if (local_68 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
    local_134 = 0;
    local_12c = 0;
    cVar2 = FUN_142c7c510(param_1,*(longlong *)(lVar1 + 0x130) + (longlong)iVar9 * 0xb0,&local_128,
                          &local_134);
    if (cVar2 == '\0') {
      FUN_142c86c30(param_1);
    }
    else {
      FUN_142c69920(param_1,*(longlong *)(lVar1 + 0x130) + (longlong)iVar9 * 0xb0,param_1 + 0x478);
    }
  }
  return;
}



// FUNCTION 142c7cd30 FUN_142c7cd30 body=407 status=ok
// SIG undefined FUN_142c7cd30(void)

void FUN_142c7cd30(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *plStack_20;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  lVar3 = FUN_142c71720(lVar3);
  if (lVar3 != 0) {
    FUN_142c7ddc0(param_1,&local_38,param_2,param_3,0);
    plVar5 = plStack_30;
    if (local_38 != 0) {
      local_28 = local_38;
      plStack_20 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
        UNLOCK();
      }
      FUN_142c65780(lVar3,&local_28);
      iVar2 = *(int *)(param_1 + 0x230);
      *(int *)(param_1 + 0x230) = iVar2 + 1;
      if (*(int *)(param_1 + 0x234) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x228,iVar2);
      }
      plVar4 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x228));
      *plVar4 = local_38;
      plVar4[1] = (longlong)plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        plVar5 = plStack_30;
      }
      if (param_2 == (longlong *)0x0) {
        lVar3 = 0;
      }
      else {
        lVar3 = param_2[0x1f];
        if (lVar3 == 0) {
          (**(code **)(*param_2 + 0x368))(param_2);
          lVar3 = param_2[0x1f];
        }
      }
      FUN_142c66b50(param_1,lVar3 + 0x48,&local_38);
    }
    plVar4 = plStack_30;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar5 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
  }
  FUN_142c63c50(param_3);
  return;
}



// FUNCTION 142c7ced0 FUN_142c7ced0 body=19 status=ok
// SIG undefined FUN_142c7ced0(void)

undefined1 FUN_142c7ced0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142c63c50(param_3);
  return 1;
}



// FUNCTION 142c7cef0 FUN_142c7cef0 body=280 status=ok
// SIG undefined FUN_142c7cef0(void)

void FUN_142c7cef0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_38 = 0;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b2fef0) {
    _Init_thread_header(&DAT_146b2fef0);
    if (DAT_146b2fef0 == -1) {
      FName::FName(&DAT_146b2fee8,L"FullBody",1);
      _Init_thread_footer(&DAT_146b2fef0);
    }
  }
  local_28 = *(undefined4 *)(lVar1 + 0x1b8);
  local_18 = *(undefined8 *)(lVar1 + 0x1d0);
  local_20 = 0x3f800000;
  local_24 = *(undefined4 *)(lVar1 + 0x1c0);
  local_10 = 0;
  cVar2 = FUN_142c7c510(param_1,lVar1 + 0xb8,&local_28,&local_38);
  if (cVar2 != '\0') {
    FUN_142c69920(param_1,lVar1 + 0xb8,param_1 + 0x468);
    return;
  }
  FUN_142c7b710(param_1,0,0);
  return;
}



// FUNCTION 142c7d010 FUN_142c7d010 body=303 status=ok
// SIG undefined FUN_142c7d010(void)

void FUN_142c7d010(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  lVar2 = param_1[2];
  local_48 = 0;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b2fef0) {
    _Init_thread_header(&DAT_146b2fef0);
    if (DAT_146b2fef0 == -1) {
      FName::FName(&DAT_146b2fee8,L"FullBody",1);
      _Init_thread_footer(&DAT_146b2fef0);
    }
  }
  local_38 = *(undefined4 *)(lVar2 + 0x1c8);
  local_28 = *(undefined8 *)(lVar2 + 0x1d0);
  local_30 = 0x3f800000;
  local_34 = *(undefined4 *)(lVar2 + 0x1bc);
  local_20 = 0;
  cVar3 = FUN_142c7c510(param_1,lVar2 + 0x140,&local_38,&local_48);
  if (cVar3 == '\0') {
    uVar1 = *(undefined4 *)(lVar2 + 0x1bc);
    lVar2 = *param_1;
    uVar4 = (**(code **)(lVar2 + 0xa0))(param_1,1);
    (**(code **)(lVar2 + 0xb0))(param_1,uVar4,1,uVar1);
  }
  return;
}



// FUNCTION 142c7d140 FUN_142c7d140 body=131 status=ok
// SIG undefined FUN_142c7d140(void)

void FUN_142c7d140(longlong param_1)

{
  UObject::PostLoad();
  if (*(char *)(param_1 + 0x6c) != '\0') {
    *(undefined1 *)(param_1 + 0x6a) = 1;
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    *(undefined1 *)(param_1 + 0xb8) = 1;
    *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0x240);
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
  if (*(longlong *)(param_1 + 0x248) != 0) {
    *(undefined1 *)(param_1 + 0x130) = 1;
    *(longlong *)(param_1 + 0x138) = *(longlong *)(param_1 + 0x248);
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  if (*(longlong *)(param_1 + 0x250) != 0) {
    *(undefined1 *)(param_1 + 0x1a8) = 1;
    *(longlong *)(param_1 + 0x1b0) = *(longlong *)(param_1 + 0x250);
    *(undefined8 *)(param_1 + 0x250) = 0;
  }
  return;
}



// FUNCTION 142c7d1d0 FUN_142c7d1d0 body=1084 status=ok
// SIG undefined FUN_142c7d1d0(void)

void FUN_142c7d1d0(longlong param_1)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined7 uStack_87;
  undefined7 uStack_6f;
  undefined7 uStack_57;
  undefined4 local_40;
  undefined4 uStack_3c;
  longlong local_28 [4];
  
  UObject::PostLoad();
  if (*(char *)(param_1 + 0x6c) != '\0') {
    *(undefined1 *)(param_1 + 0x6a) = 1;
  }
  lVar7 = 0;
  if (*(char *)(param_1 + 0x318) != '\0') {
    lVar6 = *(longlong *)(param_1 + 0x300);
    *(undefined1 *)(param_1 + 0x318) = 0;
    if (lVar6 == 0) {
      if ((*(longlong *)(param_1 + 0x308) == 0) && (*(longlong *)(param_1 + 0x310) == 0))
      goto LAB_142c7d331;
LAB_142c7d272:
      lVar6 = lVar7;
    }
    else {
      lVar3 = UAnimationAsset::StaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (!bVar8) goto LAB_142c7d272;
    }
    *(undefined1 *)(param_1 + 0xb8) = 1;
    *(longlong *)(param_1 + 0xc0) = lVar6;
    lVar6 = *(longlong *)(param_1 + 0x308);
    if (lVar6 == 0) {
LAB_142c7d2c5:
      lVar6 = lVar7;
    }
    else {
      lVar3 = UAnimationAsset::StaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (!bVar8) goto LAB_142c7d2c5;
    }
    *(undefined1 *)(param_1 + 0x340) = 1;
    *(longlong *)(param_1 + 0x348) = lVar6;
    lVar6 = *(longlong *)(param_1 + 0x310);
    if (lVar6 == 0) {
LAB_142c7d318:
      lVar6 = lVar7;
    }
    else {
      lVar3 = UAnimationAsset::StaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (!bVar8) goto LAB_142c7d318;
    }
    *(undefined1 *)(param_1 + 0x140) = 1;
    *(longlong *)(param_1 + 0x148) = lVar6;
    UObjectBaseUtility::MarkPackageDirty(param_1);
  }
LAB_142c7d331:
  if (*(char *)(param_1 + 0x338) == '\0') goto LAB_142c7d461;
  lVar6 = *(longlong *)(param_1 + 800);
  *(undefined1 *)(param_1 + 0x338) = 0;
  if (lVar6 == 0) {
    if ((*(longlong *)(param_1 + 0x328) == 0) && (*(longlong *)(param_1 + 0x330) == 0))
    goto LAB_142c7d461;
LAB_142c7d3a2:
    lVar6 = lVar7;
  }
  else {
    lVar3 = UAnimationAsset::StaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) goto LAB_142c7d3a2;
  }
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(longlong *)(param_1 + 0xd8) = lVar6;
  lVar6 = *(longlong *)(param_1 + 0x328);
  if (lVar6 == 0) {
LAB_142c7d3f5:
    lVar6 = lVar7;
  }
  else {
    lVar3 = UAnimationAsset::StaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) goto LAB_142c7d3f5;
  }
  *(undefined1 *)(param_1 + 0x358) = 1;
  *(longlong *)(param_1 + 0x360) = lVar6;
  lVar6 = *(longlong *)(param_1 + 0x330);
  if (lVar6 == 0) {
LAB_142c7d448:
    lVar6 = lVar7;
  }
  else {
    lVar3 = UAnimationAsset::StaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) goto LAB_142c7d448;
  }
  *(undefined1 *)(param_1 + 0x158) = 1;
  *(longlong *)(param_1 + 0x160) = lVar6;
  UObjectBaseUtility::MarkPackageDirty(param_1);
LAB_142c7d461:
  pcVar1 = (char *)(param_1 + 0x340);
  if (*pcVar1 == '\x02') {
    if ((*(int *)(param_1 + 0x350) == 0) && (*(int *)(param_1 + 0x354) == 0)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
  }
  else {
    bVar8 = *(longlong *)(param_1 + 0x348) != 0;
  }
  if (!bVar8) {
    if (*(char *)(param_1 + 0x358) == '\x02') {
      if ((*(int *)(param_1 + 0x368) == 0) && (*(int *)(param_1 + 0x36c) == 0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
    }
    else {
      bVar8 = *(longlong *)(param_1 + 0x360) != 0;
    }
    if (!bVar8) {
      return;
    }
  }
  plVar5 = (longlong *)(param_1 + 0x130);
  iVar2 = *(int *)(param_1 + 0x138);
  *(int *)(param_1 + 0x138) = iVar2 + 1;
  if (*(int *)(param_1 + 0x13c) < iVar2 + 1) {
    TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(plVar5,iVar2);
  }
  puVar4 = (undefined1 *)((longlong)iVar2 * 0xb0 + *plVar5);
  *puVar4 = 1;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  puVar4[0x18] = 1;
  *(undefined8 *)(puVar4 + 0x20) = 0;
  *(undefined8 *)(puVar4 + 0x28) = 0;
  puVar4[0x30] = 1;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  puVar4[0x48] = 1;
  *(undefined8 *)(puVar4 + 0x50) = 0;
  *(undefined8 *)(puVar4 + 0x58) = 0;
  *(undefined8 *)(puVar4 + 0x60) = 0;
  *(undefined8 *)(puVar4 + 0x68) = 0;
  *(undefined2 *)(puVar4 + 0x70) = 0x1f;
  FUN_142c8c260(puVar4 + 0x78,0x3f800000);
  FUN_142c63e10(*plVar5,pcVar1);
  plVar5 = (longlong *)(param_1 + 0x3a0);
  local_40 = CONCAT31(local_40._1_3_,1);
  *(ulonglong *)pcVar1 = CONCAT71(uStack_87,1);
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(ulonglong *)(param_1 + 0x358) = CONCAT71(uStack_6f,1);
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(ulonglong *)(param_1 + 0x370) = CONCAT71(uStack_57,1);
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined4 *)(param_1 + 0x388) = local_40;
  *(undefined4 *)(param_1 + 0x38c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x390) = 0;
  *(undefined4 *)(param_1 + 0x394) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  if (plVar5 != local_28) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    *plVar5 = 0;
    *(undefined8 *)(param_1 + 0x3a8) = 0;
  }
  *(undefined2 *)(param_1 + 0x3b0) = 0x1f;
  return;
}



// FUNCTION 142c7d610 FUN_142c7d610 body=30 status=ok
// SIG undefined FUN_142c7d610(void)

void FUN_142c7d610(longlong param_1)

{
  UObject::PostLoad();
  if (*(char *)(param_1 + 0x6c) != '\0') {
    *(undefined1 *)(param_1 + 0x6a) = 1;
  }
  return;
}



// FUNCTION 142c7d630 FUN_142c7d630 body=559 status=ok
// SIG undefined FUN_142c7d630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142c7d630(longlong param_1)

{
  char cVar1;
  byte *pbVar2;
  wchar_t *pwVar3;
  int iVar4;
  undefined1 auStack_858 [32];
  int local_838;
  undefined4 uStack_834;
  wchar_t local_828 [1024];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_858;
  if (*(char *)(param_1 + 0x110) != '\0') {
    *(char *)(param_1 + 0xe0) = *(char *)(param_1 + 0x110);
    *(undefined1 *)(param_1 + 0x110) = 0;
  }
  pbVar2 = (byte *)FName::GetComparisonNameEntry(param_1 + 0x118);
  if (pbVar2 != (byte *)0x0) {
    pwVar3 = L"TargetActorInfo";
    iVar4 = 0;
    local_838 = 0;
    cVar1 = FName::SplitNameWithCheck(L"TargetActorInfo",local_828,0x400,&local_838);
    if (cVar1 != '\0') {
      pwVar3 = local_828;
      iVar4 = local_838 + 1;
    }
    if (iVar4 == *(int *)(param_1 + 0x11c)) {
      if ((*pbVar2 & 1) == 0) {
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(pwVar3,pbVar2 + 0x10);
      }
      else {
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
      }
      if (iVar4 == 0) goto LAB_142c7d72f;
    }
  }
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x124);
  FName::FName(&local_838,L"TargetActorInfo",1);
  *(ulonglong *)(param_1 + 0x118) = CONCAT44(uStack_834,local_838);
LAB_142c7d72f:
  if (((0.0001 < ABS(*(float *)(param_1 + 0x128))) || (0.0001 < ABS(*(float *)(param_1 + 300)))) ||
     (0.0001 < ABS(*(float *)(param_1 + 0x130)))) {
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x128);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x128) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x130) = DAT_1468b5d98;
  }
  if (*(char *)(param_1 + 0x134) != '\x02') {
    *(char *)(param_1 + 0x104) = *(char *)(param_1 + 0x134);
    *(undefined1 *)(param_1 + 0x134) = 2;
  }
  if (*(char *)(param_1 + 0x135) != '\0') {
    *(char *)(param_1 + 0x105) = *(char *)(param_1 + 0x135);
    *(undefined1 *)(param_1 + 0x135) = 0;
  }
  if (*(float *)(param_1 + 0x138) != 500.0) {
    *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x138);
    *(undefined4 *)(param_1 + 0x138) = 0x43fa0000;
  }
  if (*(float *)(param_1 + 0x13c) != 0.0) {
    *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x13c);
    *(undefined4 *)(param_1 + 0x13c) = 0;
  }
  UObject::PostLoad(param_1);
  if (*(char *)(param_1 + 0x6c) != '\0') {
    *(undefined1 *)(param_1 + 0x6a) = 1;
  }
  return;
}


