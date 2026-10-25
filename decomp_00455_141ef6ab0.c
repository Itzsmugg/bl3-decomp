// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141ef6ab0 FUN_141ef6ab0 body=573 status=ok
// SIG undefined FUN_141ef6ab0(void)

void FUN_141ef6ab0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  AActor::AddReferencedObjects();
  plVar1 = (longlong *)(param_1 + 0x780);
  local_78 = 0;
  uStack_74 = 1;
  iVar2 = *(int *)(param_1 + 0x7a8);
  puStack_28 = (uint *)(param_1 + 0x790);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0x7a0);
    if (*(uint **)(param_1 + 0x7a0) == (uint *)0x0) {
      puVar7 = puStack_28;
    }
    uVar3 = *puVar7;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar6 = local_78 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar6;
      if (bVar4) goto LAB_141ef6b8d;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_74 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_68._4_4_ = (uStack_60 - iVar6) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_141ef6b8d:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  iStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar4 = local_68._4_4_ < *(int *)(param_1 + 0x7a8);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar4) {
    do {
      lVar5 = (longlong)iStack_5c * 0x30;
      (**(code **)(*param_2 + 0x38))(param_2,*plVar1 + lVar5,param_1,0);
      (**(code **)(*param_2 + 0x38))(param_2,*plVar1 + 8 + lVar5,param_1);
      (**(code **)(*param_2 + 0x38))(param_2,*plVar1 + 0x10 + lVar5,param_1);
      (**(code **)(*param_2 + 0x38))(param_2,*plVar1 + 0x18 + lVar5,param_1);
      (**(code **)(*param_2 + 0x38))(param_2,*plVar1 + 0x20 + lVar5,param_1);
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<UTexture2D_*,FLandscapeWeightmapUsage>,TDefaultMapHashableKeyFuncs<UTexture2D_*,FLandscapeWeightmapUsage,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 141ef6cf0 ApplyWorldOffset body=45 status=ok
// SIG undefined ApplyWorldOffset(void)

void ULandscapeHeightfieldCollisionComponent::ApplyWorldOffset
               (undefined8 param_1,undefined8 param_2,char param_3)

{
  FUN_142381c70();
  if (param_3 == '\0') {
    FUN_14234b040(param_1);
  }
  return;
}



// FUNCTION 141ef6d20 ApplyWorldOffset body=53 status=ok
// SIG undefined ApplyWorldOffset(void)

void ULandscapeMeshCollisionComponent::ApplyWorldOffset
               (undefined8 param_1,undefined8 param_2,char param_3)

{
  FUN_142381c70();
  if (param_3 == '\0') {
    FUN_14234b040(param_1);
    FUN_14234b040(param_1);
  }
  return;
}



// FUNCTION 141ef6d70 FUN_141ef6d70 body=88 status=ok
// SIG undefined FUN_141ef6d70(void)

void FUN_141ef6d70(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x790);
  *(undefined8 *)(param_1 + 0x790) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *(undefined4 *)(param_1 + 0x728) = 0;
  *(undefined4 *)(param_1 + 0x72c) = 0;
  *(undefined4 *)(param_1 + 0x730) = 0;
  *(undefined4 *)(param_1 + 0x734) = 0;
  FUN_142384dc0(param_1);
  return;
}



// FUNCTION 141ef6dd0 FUN_141ef6dd0 body=155 status=ok
// SIG undefined FUN_141ef6dd0(void)

void FUN_141ef6dd0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x7e0);
    *(undefined8 *)(param_1 + 0x7e0) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(undefined4 *)(param_1 + 2000) = 0;
    *(undefined4 *)(param_1 + 0x7d4) = 0;
    *(undefined4 *)(param_1 + 0x7d8) = 0;
    *(undefined4 *)(param_1 + 0x7dc) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x790);
  *(undefined8 *)(param_1 + 0x790) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *(undefined4 *)(param_1 + 0x728) = 0;
  *(undefined4 *)(param_1 + 0x72c) = 0;
  *(undefined4 *)(param_1 + 0x730) = 0;
  *(undefined4 *)(param_1 + 0x734) = 0;
  FUN_142384dc0(param_1);
  return;
}



// FUNCTION 141ef6e70 FUN_141ef6e70 body=503 status=ok
// SIG undefined FUN_141ef6e70(void)

void FUN_141ef6e70(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 1;
  plVar1 = (longlong *)param_2[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_3 == '\0') &&
     ((((*(byte *)(param_2 + 5) & 2) == 0 || (param_2[0xe] != 0)) &&
      ((*(byte *)((longlong)param_2 + 0x29) & 0x10) == 0)))) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 1),(longlong)*(int *)((longlong)param_1 + 0xc));
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar1 = (longlong *)param_2[1];
      iVar3 = 0;
      local_res18[0] = 0;
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = 0;
      if (iVar2 != local_res18[0]) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      plVar1 = (longlong *)param_2[1];
      local_res18[0] = *(int *)(param_1 + 1);
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
  }
  else {
    FUN_140d25120(param_2,param_1);
  }
  return;
}



// FUNCTION 141ef7070 FUN_141ef7070 body=465 status=ok
// SIG undefined FUN_141ef7070(void)

undefined8 * FUN_141ef7070(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  
  FBox::TransformBy(param_1 + 0x798,&local_70);
  fStack_68 = fStack_68 - *(float *)(param_1 + 0x7f8);
  fStack_5c = fStack_5c + *(float *)(param_1 + 0x7fc);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    fStack_68 = fStack_68 - *(float *)(lVar1 + 0x4d4);
    fStack_5c = fStack_5c + *(float *)(lVar1 + 0x4d8);
  }
  *(ulonglong *)((longlong)param_2 + 0xc) =
       CONCAT44((local_60 - fStack_6c) * 0.5,(fStack_64 - local_70) * 0.5);
  *(float *)((longlong)param_2 + 0x14) = (fStack_5c - fStack_68) * 0.5;
  *param_2 = CONCAT44(fStack_6c + *(float *)(param_2 + 2),
                      local_70 + *(float *)((longlong)param_2 + 0xc));
  *(float *)(param_2 + 1) = fStack_68 + *(float *)((longlong)param_2 + 0x14);
  *(float *)(param_2 + 3) =
       SQRT(*(float *)((longlong)param_2 + 0xc) * *(float *)((longlong)param_2 + 0xc) +
            *(float *)(param_2 + 2) * *(float *)(param_2 + 2) +
            *(float *)((longlong)param_2 + 0x14) * *(float *)((longlong)param_2 + 0x14));
  return param_2;
}



// FUNCTION 141ef7250 FUN_141ef7250 body=46 status=ok
// SIG undefined FUN_141ef7250(void)

undefined8 FUN_141ef7250(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_28 [32];
  
  uVar1 = FBox::TransformBy(param_1 + 0x738,local_28);
  FBoxSphereBounds::FBoxSphereBounds(param_2,uVar1);
  return param_2;
}



// FUNCTION 141ef7280 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<UTexture2D_*,FLandscapeWeightmapUsage>,TDefaultMapHashableKeyFuncs<UTexture2D_*,FLandscapeWeightmapUsage,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      TSet<TTuple<TSharedPtr<SWidget,0>,FText>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,0>,FText,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141ef7330 FUN_141ef7330 body=748 status=ok
// SIG undefined FUN_141ef7330(void)

void FUN_141ef7330(longlong param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *local_res8;
  undefined8 *local_res10;
  undefined **local_58;
  undefined8 **local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  if (*(longlong *)(param_1 + 0x790) == 0) {
    if (*(longlong *)(param_1 + 0x120) == 0) {
      FUN_1423407b0();
    }
    ppuVar1 = (undefined **)(param_1 + 0x728);
    if (((*(int *)(param_1 + 0x734) == 0 && *(int *)(param_1 + 0x730) == 0) &&
        *(int *)(param_1 + 0x72c) == 0) && *(int *)ppuVar1 == 0) {
      piVar8 = (int *)FGuid::NewGuid(&local_58);
      iVar2 = piVar8[1];
      iVar3 = piVar8[2];
      iVar4 = piVar8[3];
      *(int *)ppuVar1 = *piVar8;
      *(int *)(param_1 + 0x72c) = iVar2;
      *(int *)(param_1 + 0x730) = iVar3;
      *(int *)(param_1 + 0x734) = iVar4;
    }
    else {
      TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
      ::FindId(&DAT_1464cdf70,&local_res8,ppuVar1);
      if ((((int)local_res8 != -1) &&
          (lVar11 = (longlong)(int)local_res8 * 0x20 + DAT_1464cdf70, lVar11 != 0)) &&
         (lVar11 = *(longlong *)(lVar11 + 0x10), lVar11 != 0)) {
        puVar9 = *(undefined8 **)(param_1 + 0x790);
        *(longlong *)(param_1 + 0x790) = lVar11;
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        if (puVar9 == (undefined8 *)0x0) {
          return;
        }
        piVar8 = (int *)(puVar9 + 1);
        *piVar8 = *piVar8 + -1;
        if (*piVar8 != 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000141ef746a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar9)(puVar9,1);
        return;
      }
    }
    if (*(int *)(param_1 + 0x778) != 0) {
      puVar9 = (undefined8 *)operator_new(0x40);
      puVar12 = (undefined8 *)0x0;
      local_res10 = puVar12;
      if (puVar9 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar9 + 1) = 0;
        *puVar9 = &PTR__scalar_deleting_destructor__144ee96a8;
        uVar5 = *(undefined4 *)(param_1 + 0x72c);
        uVar6 = *(undefined4 *)(param_1 + 0x730);
        uVar7 = *(undefined4 *)(param_1 + 0x734);
        *(int *)(puVar9 + 2) = *(int *)ppuVar1;
        *(undefined4 *)((longlong)puVar9 + 0x14) = uVar5;
        *(undefined4 *)(puVar9 + 3) = uVar6;
        *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar7;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        puVar9[7] = 0;
        local_res10 = puVar9;
      }
      local_50 = &local_res10;
      local_58 = ppuVar1;
      FUN_141ef2650(&DAT_1464cdf70,&local_res8,&local_58,0);
      puVar9 = *(undefined8 **)(param_1 + 0x790);
      lVar11 = *(longlong *)((longlong)(int)local_res8 * 0x20 + 0x10 + DAT_1464cdf70);
      *(longlong *)(param_1 + 0x790) = lVar11;
      if (lVar11 != 0) {
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      }
      if (puVar9 != (undefined8 *)0x0) {
        piVar8 = (int *)(puVar9 + 1);
        *piVar8 = *piVar8 + -1;
        if (*piVar8 == 0) {
          (**(code **)*puVar9)(puVar9,1);
        }
      }
      lVar11 = *(longlong *)(param_1 + 0x790);
      puVar9 = (undefined8 *)(param_1 + 0x770);
      local_58 = &PTR_read_144eeacb0;
      local_50 = (undefined8 **)*puVar9;
      local_48 = *(undefined4 *)(param_1 + 0x778);
      local_44 = 0;
      local_res8 = puVar9;
      uVar10 = (**(code **)(*DAT_146b08400 + 0x40))(DAT_146b08400,&local_58);
      *(undefined8 *)(lVar11 + 0x30) = uVar10;
      if (0 < *(int *)(param_1 + 0x710)) {
        lVar11 = *(longlong *)(param_1 + 0x790);
        uVar10 = (**(code **)(*DAT_146b08400 + 0x40))(DAT_146b08400,&local_58);
        *(undefined8 *)(lVar11 + 0x38) = uVar10;
      }
      puVar14 = *(undefined8 **)(param_1 + 0x780);
      puVar13 = (undefined8 *)((longlong)*(int *)(param_1 + 0x788) & 0x1fffffffffffffff);
      if (puVar14 + *(int *)(param_1 + 0x788) < puVar14) {
        puVar13 = puVar12;
      }
      if (puVar13 != (undefined8 *)0x0) {
        do {
          uVar10 = FUN_1426c86a0(*puVar14);
          lVar11 = *(longlong *)(param_1 + 0x790);
          iVar2 = *(int *)(lVar11 + 0x28);
          *(int *)(lVar11 + 0x28) = iVar2 + 1;
          if (*(int *)(lVar11 + 0x2c) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar11 + 0x20,iVar2);
          }
          puVar14 = puVar14 + 1;
          puVar12 = (undefined8 *)((longlong)puVar12 + 1);
          *(undefined8 *)(*(longlong *)(lVar11 + 0x20) + (longlong)iVar2 * 8) = uVar10;
          puVar9 = local_res8;
        } while (puVar12 != puVar13);
      }
      *(undefined4 *)(puVar9 + 1) = 0;
      if (*(int *)((longlong)puVar9 + 0xc) != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar9,0);
      }
    }
  }
  return;
}



// FUNCTION 141ef7620 FUN_141ef7620 body=700 status=ok
// SIG undefined FUN_141ef7620(void)

void FUN_141ef7620(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *local_res8;
  undefined8 *local_res10;
  int *local_68;
  undefined8 **local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  if (*(longlong *)(param_1 + 0x7e0) == 0) {
    piVar1 = (int *)(param_1 + 2000);
    if (((*(int *)(param_1 + 0x7dc) == 0 && *(int *)(param_1 + 0x7d8) == 0) &&
        *(int *)(param_1 + 0x7d4) == 0) && *piVar1 == 0) {
      piVar8 = (int *)FGuid::NewGuid(&local_68);
      iVar2 = piVar8[1];
      iVar3 = piVar8[2];
      iVar4 = piVar8[3];
      *piVar1 = *piVar8;
      *(int *)(param_1 + 0x7d4) = iVar2;
      *(int *)(param_1 + 0x7d8) = iVar3;
      *(int *)(param_1 + 0x7dc) = iVar4;
    }
    else {
      TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
      ::FindId(&DAT_1464cdfc0,&local_res8,piVar1);
      if ((((int)local_res8 != -1) &&
          (lVar11 = (longlong)(int)local_res8 * 0x20 + DAT_1464cdfc0, lVar11 != 0)) &&
         (lVar11 = *(longlong *)(lVar11 + 0x10), lVar11 != 0)) {
        puVar9 = *(undefined8 **)(param_1 + 0x7e0);
        *(longlong *)(param_1 + 0x7e0) = lVar11;
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        if (puVar9 == (undefined8 *)0x0) {
          return;
        }
        piVar1 = (int *)(puVar9 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000141ef774d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar9)(puVar9,1);
        return;
      }
    }
    if (*(int *)(param_1 + 0x778) != 0) {
      puVar9 = (undefined8 *)operator_new(0x38);
      puVar12 = (undefined8 *)0x0;
      local_res10 = puVar12;
      if (puVar9 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar9 + 1) = 0;
        *puVar9 = &PTR__scalar_deleting_destructor__144eea030;
        uVar5 = *(undefined4 *)(param_1 + 0x7d4);
        uVar6 = *(undefined4 *)(param_1 + 0x7d8);
        uVar7 = *(undefined4 *)(param_1 + 0x7dc);
        *(int *)(puVar9 + 2) = *piVar1;
        *(undefined4 *)((longlong)puVar9 + 0x14) = uVar5;
        *(undefined4 *)(puVar9 + 3) = uVar6;
        *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar7;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        local_res10 = puVar9;
      }
      local_60 = &local_res10;
      local_68 = piVar1;
      FUN_141ef2650(&DAT_1464cdfc0,&local_res8,&local_68,0);
      puVar9 = *(undefined8 **)(param_1 + 0x7e0);
      lVar11 = *(longlong *)((longlong)(int)local_res8 * 0x20 + 0x10 + DAT_1464cdfc0);
      *(longlong *)(param_1 + 0x7e0) = lVar11;
      if (lVar11 != 0) {
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      }
      if (puVar9 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar9 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar9)(puVar9,1);
        }
      }
      lVar11 = *(longlong *)(param_1 + 0x7e0);
      puVar9 = (undefined8 *)(param_1 + 0x770);
      local_58 = &PTR_read_144eeacb0;
      local_50 = *puVar9;
      local_48 = *(undefined4 *)(param_1 + 0x778);
      local_44 = 0;
      local_res8 = puVar9;
      uVar10 = (**(code **)(*DAT_146b08400 + 0x28))(DAT_146b08400,&local_58);
      *(undefined8 *)(lVar11 + 0x30) = uVar10;
      puVar14 = *(undefined8 **)(param_1 + 0x780);
      puVar13 = (undefined8 *)((longlong)*(int *)(param_1 + 0x788) & 0x1fffffffffffffff);
      if (puVar14 + *(int *)(param_1 + 0x788) < puVar14) {
        puVar13 = puVar12;
      }
      if (puVar13 != (undefined8 *)0x0) {
        do {
          uVar10 = FUN_1426c86a0(*puVar14);
          lVar11 = *(longlong *)(param_1 + 0x7e0);
          iVar2 = *(int *)(lVar11 + 0x28);
          *(int *)(lVar11 + 0x28) = iVar2 + 1;
          if (*(int *)(lVar11 + 0x2c) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar11 + 0x20,iVar2);
          }
          puVar14 = puVar14 + 1;
          puVar12 = (undefined8 *)((longlong)puVar12 + 1);
          *(undefined8 *)(*(longlong *)(lVar11 + 0x20) + (longlong)iVar2 * 8) = uVar10;
          puVar9 = local_res8;
        } while (puVar12 != puVar13);
      }
      *(undefined4 *)(puVar9 + 1) = 0;
      if (*(int *)((longlong)puVar9 + 0xc) != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(puVar9,0);
      }
    }
  }
  return;
}



// FUNCTION 141ef78e0 FUN_141ef78e0 body=124 status=ok
// SIG undefined FUN_141ef78e0(void)

undefined8 FUN_141ef78e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  if (*(int *)(lVar1 + 0x1c0) < 2) {
    if ((*(int *)(param_1 + 0x860) != 0) || (*(longlong *)(param_1 + 0x868) != 0)) {
      lVar1 = operator_new(0x630);
      if (lVar1 != 0) {
        uVar2 = FUN_141f0e150(lVar1,param_1);
        return uVar2;
      }
    }
  }
  else {
    lVar1 = operator_new(0x610);
    if (lVar1 != 0) {
      uVar2 = FUN_141f0d470(lVar1,param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 141ef7960 FUN_141ef7960 body=288 status=ok
// SIG undefined FUN_141ef7960(void)

void FUN_141ef7960(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((lVar1 != 0) && (lVar2 = (longlong)*(int *)(lVar1 + 0x4e8), *(int *)(lVar1 + 0x4e8) != 0)) {
    iVar7 = 0;
    bVar8 = **(longlong **)(lVar1 + 0x4e0) != param_1;
    lVar4 = 0;
    iVar5 = 0;
    do {
      lVar4 = lVar4 + 1;
      iVar6 = iVar5 + 1;
      if (lVar4 < lVar2) {
        plVar3 = (longlong *)(*(longlong *)(lVar1 + 0x4e0) + lVar4 * 8);
        do {
          if (bVar8 != (*plVar3 != param_1)) break;
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
          plVar3 = plVar3 + 1;
        } while (lVar4 < lVar2);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar1 + 0x4e0) + (longlong)iVar7 * 8),
                     (void *)(*(longlong *)(lVar1 + 0x4e0) + (longlong)iVar5 * 8),
                     (longlong)(iVar6 - iVar5) << 3);
        }
        iVar7 = iVar7 + (iVar6 - iVar5);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar5 = iVar6;
    } while (lVar4 < lVar2);
    *(int *)(lVar1 + 0x4e8) = iVar7;
  }
  FUN_142388290(param_1,param_2);
  return;
}



// FUNCTION 141ef7a80 FUN_141ef7a80 body=69 status=ok
// SIG undefined FUN_141ef7a80(void)

void FUN_141ef7a80(longlong param_1,undefined1 param_2)

{
  longlong local_res8;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    local_res8 = param_1;
    TArray<FName,FDefaultAllocator>::Remove(*(longlong *)(param_1 + 0x20) + 0x4f0,&local_res8);
  }
  FUN_142388290(param_1,param_2);
  return;
}



// FUNCTION 141ef7ad0 FUN_141ef7ad0 body=100 status=ok
// SIG undefined FUN_141ef7ad0(void)

void FUN_141ef7ad0(longlong param_1,undefined1 param_2)

{
  longlong local_res8;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    local_res8 = param_1;
    TArray<FName,FDefaultAllocator>::Remove(*(longlong *)(param_1 + 0x20) + 0x4f0,&local_res8);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      local_res8 = param_1;
      TArray<FName,FDefaultAllocator>::Remove(*(longlong *)(param_1 + 0x20) + 0x4f0,&local_res8);
    }
  }
  FUN_142388290(param_1,param_2);
  return;
}



// FUNCTION 141ef7b60 DestroyObject body=92 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FLandscapeComponentGrassData,SharedPointerInternals::DefaultDeleter<FLandscapeComponentGrassData>_>
     ::DestroyObject(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)(plVar1 + 0xb) = 0;
    if (plVar1[10] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (plVar1 + 2);
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x60);
    return;
  }
  return;
}



// FUNCTION 141ef7bc0 FUN_141ef7bc0 body=241 status=ok
// SIG undefined FUN_141ef7bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141ef7bc0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x790);
  if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x30), lVar2 != 0)) {
    local_38 = *(undefined8 *)(param_1 + 0x220);
    uStack_30 = *(undefined8 *)(param_1 + 0x228);
    local_48 = *(undefined8 *)(param_1 + 0x210);
    uStack_40 = *(undefined8 *)(param_1 + 0x218);
    if (*(longlong *)(lVar1 + 0x38) == 0) {
      local_28 = *(float *)(param_1 + 0x70c);
    }
    else {
      local_28 = ((float)*(int *)(param_1 + 0x708) * *(float *)(param_1 + 0x70c)) /
                 (float)*(int *)(param_1 + 0x710);
      lVar2 = *(longlong *)(lVar1 + 0x38);
    }
    fStack_1c = *(float *)(param_1 + 0x23c) * 0.0;
    fStack_20 = *(float *)(param_1 + 0x238) * 0.0078125;
    fStack_24 = *(float *)(param_1 + 0x234) * local_28;
    local_28 = *(float *)(param_1 + 0x230) * local_28;
    local_18 = (**(code **)(*param_2 + 0x20))(param_2,lVar2,&local_48);
  }
  return local_18 & 0xffffffffffffff00;
}



// FUNCTION 141ef7cc0 FUN_141ef7cc0 body=199 status=ok
// SIG undefined FUN_141ef7cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_141ef7cc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar3 = *(ulonglong *)(param_1 + 0x7e0);
  if ((uVar3 != 0) && (plVar1 = *(longlong **)(uVar3 + 0x30), plVar1 != (longlong *)0x0)) {
    local_48 = *(undefined8 *)(param_1 + 0x210);
    uStack_40 = *(undefined8 *)(param_1 + 0x218);
    local_38 = *(undefined8 *)(param_1 + 0x220);
    uStack_30 = *(undefined8 *)(param_1 + 0x228);
    local_28 = *(float *)(param_1 + 0x70c) * *(float *)(param_1 + 0x230);
    fStack_24 = *(float *)(param_1 + 0x70c) * *(float *)(param_1 + 0x234);
    fStack_20 = *(float *)(param_1 + 0x238) * 1.0;
    fStack_1c = *(float *)(param_1 + 0x23c) * 0.0;
    pbVar2 = (byte *)(**(code **)(*plVar1 + 0x58))(plVar1,local_58);
    if ((*pbVar2 & 2) == 0) {
      uVar3 = (**(code **)(*param_2 + 0x10))
                        (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x7e0) + 0x30),&local_48);
    }
    else {
      uVar3 = (**(code **)(*param_2 + 8))();
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141ef7d90 ExtractScaling body=337 status=ok
// SIG undefined ExtractScaling(void)

float * FMatrix::ExtractScaling(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  fVar1 = *param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2];
  fVar3 = param_1[4] * param_1[4] + param_1[5] * param_1[5] + param_1[6] * param_1[6];
  fVar2 = param_1[8] * param_1[8] + param_1[9] * param_1[9] + param_1[10] * param_1[10];
  if (param_3 < fVar1) {
    fVar1 = SQRT(fVar1);
    *param_2 = fVar1;
    fVar1 = 1.0 / fVar1;
    *param_1 = fVar1 * *param_1;
    param_1[1] = fVar1 * param_1[1];
    param_1[2] = fVar1 * param_1[2];
  }
  if (fVar3 <= param_3) {
    param_2[1] = 0.0;
  }
  else {
    fVar3 = SQRT(fVar3);
    param_2[1] = fVar3;
    fVar3 = 1.0 / fVar3;
    param_1[4] = fVar3 * param_1[4];
    param_1[5] = fVar3 * param_1[5];
    param_1[6] = fVar3 * param_1[6];
  }
  if (param_3 < fVar2) {
    fVar2 = SQRT(fVar2);
    param_2[2] = fVar2;
    fVar2 = 1.0 / fVar2;
    param_1[8] = fVar2 * param_1[8];
    param_1[9] = fVar2 * param_1[9];
    param_1[10] = fVar2 * param_1[10];
    return param_2;
  }
  param_2[2] = 0.0;
  return param_2;
}



// FUNCTION 141ef7ef0 FUN_141ef7ef0 body=164 status=ok
// SIG undefined FUN_141ef7ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141ef7ef0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x4d8) != 0) {
    local_48 = *(undefined8 *)(param_1 + -0xc0);
    uStack_40 = *(undefined8 *)(param_1 + -0xb8);
    local_38 = *(undefined8 *)(param_1 + -0xb0);
    uStack_30 = *(undefined8 *)(param_1 + -0xa8);
    local_58 = &local_48;
    local_28 = *(float *)(param_1 + 0x43c) * *(float *)(param_1 + -0xa0);
    fStack_24 = *(float *)(param_1 + 0x43c) * *(float *)(param_1 + -0x9c);
    fStack_20 = *(float *)(param_1 + -0x98) * 0.0078125;
    fStack_1c = *(float *)(param_1 + -0x94) * 0.0;
    local_50 = param_3;
    (**(code **)(*param_2 + 0x28))
              (param_2,param_1 + 0x4d0,*(undefined4 *)(param_1 + 0x4c8),
               *(undefined4 *)(param_1 + 0x4cc));
  }
  return;
}



// FUNCTION 141ef7fa0 FUN_141ef7fa0 body=699 status=ok
// SIG undefined FUN_141ef7fa0(void)

longlong FUN_141ef7fa0(longlong *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  int iStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  int iStack_c;
  
  iVar4 = (int)param_1[5];
  puStack_20 = (uint *)(param_1 + 2);
  uVar5 = 0;
  local_58 = 0;
  uStack_54 = 1;
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar4 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puStack_20;
    }
    uVar1 = *puVar8;
    uVar7 = uVar5;
    uVar6 = uVar5;
    while (uVar1 == 0) {
      iVar3 = (int)uVar6;
      uStack_40 = (int)uVar7 + 0x20;
      uVar7 = (ulonglong)uStack_40;
      local_58 = iVar3 + 1;
      uVar6 = (ulonglong)local_58;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar3) goto LAB_141ef806a;
      uVar1 = puVar8[(longlong)iVar3 + 1];
    }
    uStack_54 = -uVar1 & uVar1;
    iVar3 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    local_48._4_4_ = (uStack_40 - iVar3) + 0x1f;
    if (iVar4 < local_48._4_4_) {
LAB_141ef806a:
      local_48._4_4_ = iVar4;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  uStack_10 = uStack_40;
  uStack_28 = local_58;
  uStack_24 = uStack_54;
  uStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  uStack_40 = 0xffffffff;
  iStack_3c = local_48._4_4_;
  bVar2 = local_48._4_4_ < iVar4;
  uVar7 = uVar5;
  local_30 = param_1;
  local_48 = puStack_20;
  if (bVar2) {
    do {
      uVar7 = uVar7 + *(uint *)((longlong)iStack_3c * 0x20 + 0x14 + *param_1);
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  iVar4 = (int)param_1[0xf];
  puStack_20 = (uint *)(param_1 + 0xc);
  local_58 = 0;
  uStack_54 = 1;
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar4 != 0) {
    puVar8 = (uint *)param_1[0xe];
    if ((uint *)param_1[0xe] == (uint *)0x0) {
      puVar8 = puStack_20;
    }
    uVar1 = *puVar8;
    uVar6 = uVar5;
    while (uVar1 == 0) {
      iVar3 = (int)uVar6;
      uStack_40 = (int)uVar5 + 0x20;
      uVar5 = (ulonglong)uStack_40;
      local_58 = iVar3 + 1;
      uVar6 = (ulonglong)local_58;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar3) goto LAB_141ef8178;
      uVar1 = puVar8[(longlong)iVar3 + 1];
    }
    uStack_54 = -uVar1 & uVar1;
    iVar3 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    local_48._4_4_ = (uStack_40 - iVar3) + 0x1f;
    if (iVar4 < local_48._4_4_) {
LAB_141ef8178:
      local_48._4_4_ = iVar4;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  uStack_10 = uStack_40;
  iStack_c = iStack_3c;
  uStack_28 = local_58;
  uStack_24 = uStack_54;
  uStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  iStack_34 = iStack_3c;
  uStack_40 = 0xffffffff;
  iStack_3c = local_48._4_4_;
  bVar2 = local_48._4_4_ < iVar4;
  local_30 = param_1 + 10;
  local_48 = puStack_20;
  if (bVar2) {
    do {
      uVar7 = uVar7 + *(uint *)((longlong)iStack_3c * 0x20 + 0x14 + param_1[10]);
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  iVar4 = *(int *)((longlong)param_1 + 0x7c) + 0x1f;
  iVar3 = *(int *)((longlong)param_1 + 0x2c) + 0x1f;
  return uVar7 + (uint)((((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) +
                         *(int *)((longlong)param_1 + 0x5c) * 8 + (int)param_1[0x13]) * 4) +
         (ulonglong)
         (uint)((((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) +
                 *(int *)((longlong)param_1 + 0xc) * 8 + (int)param_1[9]) * 4) + 0xa0;
}



// FUNCTION 141ef82b0 FUN_141ef82b0 body=27 status=ok
// SIG undefined FUN_141ef82b0(void)

undefined8 FUN_141ef82b0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x2a8))();
  return param_2;
}



// FUNCTION 141ef82d0 FUN_141ef82d0 body=62 status=ok
// SIG undefined FUN_141ef82d0(void)

undefined8 * FUN_141ef82d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"GetAutoPaintLayerWeight",0x30);
  return param_2;
}



// FUNCTION 141ef8330 FUN_141ef8330 body=85 status=ok
// SIG undefined FUN_141ef8330(void)

undefined8 FUN_141ef8330(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\landscape\\classes\\LandscapeProxy.h",0x2d4,
             L"Pure virtual not implemented (%s)",L"GetLandscapeActor");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\landscape\\classes\\LandscapeProxy.h",0x2d4,
             L"Pure virtual not implemented (%s)",L"GetLandscapeActor");
  return 0;
}



// FUNCTION 141ef8390 FUN_141ef8390 body=212 status=ok
// SIG undefined FUN_141ef8390(void)

longlong FUN_141ef8390(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0x7d8;
  lVar2 = FWeakObjectPtr::Get(lVar3);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b4c84 == 0) {
      DAT_1464b4c84 = 0;
    }
    UNLOCK();
    if (DAT_1464b4c84 == *(int *)(param_1 + 0x7e0)) {
      return 0;
    }
    if (((*(int *)(param_1 + 0x7f0) == 0 && *(int *)(param_1 + 0x7ec) == 0) &&
        *(int *)(param_1 + 0x7e8) == 0) && *(int *)(param_1 + 0x7e4) == 0) {
      return 0;
    }
    lVar2 = FUniqueObjectGuid::ResolveObject();
    FWeakObjectPtr::operator=(lVar3,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b4c84 == 0) {
        DAT_1464b4c84 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x7e0) = DAT_1464b4c84;
    }
    lVar2 = FWeakObjectPtr::Get(lVar3);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar3 = FUN_141f1e180();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  return lVar2;
}



// FUNCTION 141ef8470 FUN_141ef8470 body=56 status=ok
// SIG undefined FUN_141ef8470(void)

undefined8 FUN_141ef8470(longlong param_1,int param_2,char param_3)

{
  if (((*(longlong *)(param_1 + 0x20) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x20) + 0x77c) != '\0')) && (param_3 != '\0')) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x728) + (longlong)param_2 * 8);
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x718) + (longlong)param_2 * 8);
}



// FUNCTION 141ef84b0 FUN_141ef84b0 body=51 status=ok
// SIG undefined FUN_141ef84b0(void)

undefined8 FUN_141ef84b0(longlong param_1,int param_2)

{
  if ((((*(longlong *)(param_1 + 0x20) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x20) + 0x77c) != '\0')) && (-1 < param_2)) &&
     (param_2 < *(int *)(param_1 + 0x730))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x728) + (longlong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 141ef84f0 FUN_141ef84f0 body=130 status=ok
// SIG undefined FUN_141ef84f0(void)

undefined8 FUN_141ef84f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar1 = AActor::GetLevel();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xc0) != 0)) {
      lVar2 = FUN_14256ac50();
      if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) ||
         (*(longlong *)(lVar1 + 0x1f0) != 0)) {
        local_18 = *(undefined4 *)(param_1 + 2000);
        uStack_14 = *(undefined4 *)(param_1 + 0x7d4);
        uStack_10 = *(undefined4 *)(param_1 + 0x7d8);
        uStack_c = *(undefined4 *)(param_1 + 0x7dc);
        uVar3 = UMapBuildDataRegistry::GetMeshBuildData(local_18,&local_18);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 141ef8580 FUN_141ef8580 body=64 status=ok
// SIG undefined FUN_141ef8580(void)

void FUN_141ef8580(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_14238d310();
  lVar1 = FLandscapeComponentGrassData::GetAllocatedSize(*(undefined8 *)(param_1 + 0x878));
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + lVar1;
  lVar1 = FUN_141ef7fa0(*(undefined8 *)(param_1 + 0x888));
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + lVar1;
  return;
}



// FUNCTION 141ef85c0 FUN_141ef85c0 body=21 status=ok
// SIG undefined FUN_141ef85c0(void)

undefined4 * FUN_141ef85c0(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x6f0);
  param_2[1] = *(undefined4 *)(param_1 + 0x6f4);
  return param_2;
}



// FUNCTION 141ef85e0 FUN_141ef85e0 body=142 status=ok
// SIG undefined FUN_141ef85e0(void)

bool FUN_141ef85e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar1 = AActor::GetLevel();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xc0) != 0)) {
      lVar2 = FUN_14256ac50();
      if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) ||
         (*(longlong *)(lVar1 + 0x1f0) != 0)) {
        local_18 = *(undefined4 *)(param_1 + 2000);
        uStack_14 = *(undefined4 *)(param_1 + 0x7d4);
        uStack_10 = *(undefined4 *)(param_1 + 0x7d8);
        uStack_c = *(undefined4 *)(param_1 + 0x7dc);
        lVar1 = UMapBuildDataRegistry::GetMeshBuildData(local_18,&local_18);
        return lVar1 != 0;
      }
    }
  }
  return false;
}



// FUNCTION 141ef8670 FUN_141ef8670 body=163 status=ok
// SIG undefined FUN_141ef8670(void)

undefined8 FUN_141ef8670(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong local_res8;
  
  uVar2 = 0;
  uVar5 = 0;
  uVar4 = uVar2;
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + uVar2);
      if ((((int)plVar1[4] != 0 || *(int *)((longlong)plVar1 + 0x1c) != 0) || (int)plVar1[3] != 0)
          || *(int *)((longlong)plVar1 + 0x14) != 0) {
        local_res8 = 0;
        FUN_141ef2890(plVar1,(int *)((longlong)plVar1 + 0x14),param_2 + 0x740,&local_res8);
        if ((local_res8 != 0) && (*plVar1 != *(longlong *)(local_res8 + 0xa0))) {
          *plVar1 = *(longlong *)(local_res8 + 0xa0);
          uVar5 = 1;
        }
      }
      uVar3 = (int)uVar4 + 1;
      uVar2 = uVar2 + 0x30;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)(param_1 + 0x28));
  }
  return uVar5;
}



// FUNCTION 141ef8720 FUN_141ef8720 body=702 status=ok
// SIG undefined FUN_141ef8720(void)

void FUN_141ef8720(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong local_res10;
  longlong local_res18;
  longlong local_68;
  undefined8 local_60;
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((longlong *)param_2[0x12] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_2[0x12] + 0x290))();
    local_68 = 0;
    local_60 = 0;
    local_58[0] = 0;
    local_58[1] = 0;
    lVar4 = (**(code **)(*param_2 + 0x288))(param_2);
    if (lVar4 != 0) {
      FUN_141ef45d0(lVar4,&local_68,local_58,0);
    }
    lVar4 = (**(code **)(*param_2 + 0x288))(param_2);
    if (lVar4 != 0) {
      FUN_141ef3ee0(lVar4,&local_68,local_58,0);
    }
    lVar4 = (**(code **)(*param_2 + 0x288))(param_2);
    if (lVar4 != 0) {
      FUN_141ef37f0(lVar4,&local_68,local_58,0);
    }
    lVar4 = (**(code **)(*param_2 + 0x288))(param_2);
    if (lVar4 != 0) {
      FUN_141ef3100(lVar4,&local_68,local_58,0);
    }
    lVar4 = (**(code **)(*param_2 + 0x288))(param_2);
    if (lVar4 != 0) {
      FUN_141ef4cc0(lVar4,&local_68,local_58,0);
    }
    lVar4 = (longlong)(int)local_60;
    plVar1 = (longlong *)(param_1 + 0x20);
    iVar7 = *(int *)(param_1 + 0x28);
    iVar3 = iVar7 + (int)local_60;
    *(int *)(param_1 + 0x28) = iVar3;
    if (*(int *)(param_1 + 0x2c) < iVar3) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar7 * 0x30 + *plVar1),0,lVar4 * 0x30);
    iVar7 = 0;
    if (0 < (int)local_60) {
      local_res10 = 0;
      local_res18 = 0;
      do {
        puVar8 = (undefined8 *)(*plVar1 + local_res10);
        piVar6 = (int *)(local_68 + local_res18);
        puVar2 = (undefined4 *)(local_res18 + local_58[0]);
        local_48 = *puVar2;
        uStack_44 = puVar2[1];
        uStack_40 = puVar2[2];
        uStack_3c = puVar2[3];
        *(undefined1 *)(puVar8 + 2) = 0;
        *puVar8 = *(undefined8 *)piVar6;
        *(short *)(puVar8 + 1) = (short)piVar6[2];
        *(undefined1 *)((longlong)puVar8 + 10) = *(undefined1 *)((longlong)piVar6 + 10);
        *(undefined1 *)((longlong)puVar8 + 0xb) = *(undefined1 *)((longlong)piVar6 + 0xb);
        *(int *)((longlong)puVar8 + 0xc) = piVar6[3];
        (**(code **)(*(longlong *)param_2[0x12] + 0x318))
                  ((longlong *)param_2[0x12],piVar6,(longlong)puVar8 + 0x24,&local_48);
        iVar3 = 0;
        *(undefined4 *)((longlong)puVar8 + 0x14) = local_48;
        *(undefined4 *)(puVar8 + 3) = uStack_44;
        *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_40;
        *(undefined4 *)(puVar8 + 4) = uStack_3c;
        lVar4 = FUN_140aaea60(param_2);
        if (0 < *(int *)(lVar4 + 0x28)) {
          lVar4 = 0;
          do {
            lVar5 = FUN_140aaea60(param_2);
            lVar5 = *(longlong *)(lVar5 + 0x20);
            if ((((*piVar6 == *(int *)(lVar4 + lVar5)) && (piVar6[1] == *(int *)(lVar4 + 4 + lVar5))
                 ) && (*(char *)((longlong)piVar6 + 0xb) == *(char *)(lVar4 + 0xb + lVar5))) &&
               ((piVar6[3] == *(int *)(lVar4 + 0xc + lVar5) &&
                (*(undefined1 *)(puVar8 + 2) = *(undefined1 *)(lVar4 + 0x10 + lVar5),
                *(char *)(lVar4 + 0x10 + lVar5) != '\0')))) {
              *(undefined4 *)((longlong)puVar8 + 0x24) = *(undefined4 *)(lVar4 + 0x24 + lVar5);
              *(undefined1 *)(puVar8 + 5) = *(undefined1 *)(lVar4 + 0x28 + lVar5);
            }
            iVar3 = iVar3 + 1;
            lVar4 = lVar4 + 0x30;
            lVar5 = FUN_140aaea60(param_2);
          } while (iVar3 < *(int *)(lVar5 + 0x28));
        }
        iVar7 = iVar7 + 1;
        local_res10 = local_res10 + 0x30;
        local_res18 = local_res18 + 0x10;
      } while (iVar7 < (int)local_60);
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141ef89e0 FUN_141ef89e0 body=3045 status=ok
// SIG undefined FUN_141ef89e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ef89e0(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  float fVar10;
  char cVar11;
  uint uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined2 uVar20;
  longlong *plVar21;
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
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  char *local_1f0;
  char local_1e8;
  char local_1e7 [3];
  int local_1e4;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined1 local_1b8 [12];
  uint uStack_1ac;
  undefined8 local_1a8;
  float local_1a0;
  undefined1 local_198 [12];
  uint uStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [32];
  undefined4 local_128 [2];
  longlong local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined1 local_10c;
  undefined2 local_10b;
  undefined1 local_109;
  undefined4 local_108 [2];
  undefined8 local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined4 local_ec;
  float local_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  FUN_1423437b0();
  plVar21 = param_1 + 0x76;
  cVar11 = FBodyInstance::IsValidBodyInstance(plVar21);
  if ((cVar11 == '\0') &&
     ((**(code **)(*param_1 + 0x8e8))(param_1), fVar10 = fRam0000000146ac439c, param_1[0xf2] != 0))
  {
    fVar22 = *(float *)(param_1 + 0x42);
    fVar27 = *(float *)((longlong)param_1 + 0x214);
    fVar25 = *(float *)(param_1 + 0x43);
    fVar23 = *(float *)((longlong)param_1 + 0x21c);
    fVar24 = fVar27 + fVar27;
    fVar26 = fVar25 + fVar25;
    fVar28 = *(float *)(param_1 + 0x46);
    fVar33 = *(float *)((longlong)param_1 + 0x234);
    fVar4 = *(float *)(param_1 + 0x47);
    fVar30 = fVar22 * (fVar22 + fVar22);
    fVar29 = fVar23 * (fVar22 + fVar22);
    fVar5 = *(float *)(param_1 + 0x44);
    fVar6 = *(float *)((longlong)param_1 + 0x224);
    fVar7 = *(float *)(param_1 + 0x45);
    fVar34 = (fVar23 * fVar26 + fVar22 * fVar24) * fVar28;
    fVar35 = (fVar29 + fVar27 * fVar26) * fVar33;
    fVar36 = (fVar23 * fVar24 + fVar22 * fVar26) * fVar4;
    fVar31 = fVar33 * (fVar22 * fVar24 - fVar23 * fVar26);
    fVar29 = fVar4 * (fVar27 * fVar26 - fVar29);
    fVar32 = fVar28 * (fVar22 * fVar26 - fVar23 * fVar24);
    fStack_14c = fRam0000000146ac439c;
    fVar23 = (float)((uint)((_DAT_146ac4390 - (fVar25 * fVar26 + fVar27 * fVar24)) * fVar28) &
                    _DAT_146ac4380);
    fVar25 = (float)((uint)((fRam0000000146ac4394 - (fVar25 * fVar26 + fVar30)) * fVar33) &
                    uRam0000000146ac4384);
    fVar27 = (float)((uint)((fRam0000000146ac4398 - (fVar27 * fVar24 + fVar30)) * fVar4) &
                    uRam0000000146ac4388);
    fVar28 = (float)((uint)((fRam0000000146ac439c - (fVar30 + fVar30)) *
                           *(float *)((longlong)param_1 + 0x23c)) & uRam0000000146ac438c);
    local_188 = fVar23;
    fStack_184 = fVar34;
    fStack_180 = fVar32;
    fStack_17c = fVar28;
    local_178 = fVar31;
    fStack_174 = fVar25;
    fStack_170 = fVar35;
    fStack_16c = fVar28;
    local_168 = fVar36;
    fStack_164 = fVar29;
    fStack_160 = fVar27;
    fStack_15c = fVar28;
    local_158 = fVar5;
    fStack_154 = fVar6;
    fStack_150 = fVar7;
    fVar22 = (float)FMatrix::Determinant(&local_188);
    fVar33 = 0.0;
    if (0.0 <= fVar22) {
      local_d8 = (float)(int)param_1[0xe1] * *(float *)((longlong)param_1 + 0x70c);
      local_188 = fVar31 * 0.0 + fVar23 * 1.0 + fVar36 * 0.0 + fVar5 * 0.0;
      fStack_184 = fVar25 * 0.0 + fVar34 * 1.0 + fVar29 * 0.0 + fVar6 * 0.0;
      fStack_180 = fVar35 * 0.0 + fVar32 * 1.0 + fVar27 * 0.0 + fVar7 * 0.0;
      fStack_17c = fVar28 * 0.0 + fVar28 * 1.0 + fVar28 * 0.0 + fVar10 * 0.0;
      local_178 = fVar31 * 1.0 + fVar23 * 0.0 + fVar36 * 0.0 + fVar5 * 0.0;
      fStack_174 = fVar25 * 1.0 + fVar34 * 0.0 + fVar29 * 0.0 + fVar6 * 0.0;
      fStack_170 = fVar35 * 1.0 + fVar32 * 0.0 + fVar27 * 0.0 + fVar7 * 0.0;
      fStack_16c = fVar28 * 1.0 + fVar28 * 0.0 + fVar28 * 0.0 + fVar10 * 0.0;
      uStack_d4 = 0;
      uStack_cc = 0x3f800000;
      local_168 = fVar31 * 0.0 + fVar23 * 0.0 + fVar36 * 1.0 + fVar5 * 0.0;
      fStack_164 = fVar25 * 0.0 + fVar34 * 0.0 + fVar29 * 1.0 + fVar6 * 0.0;
      fStack_160 = fVar35 * 0.0 + fVar32 * 0.0 + fVar27 * 1.0 + fVar7 * 0.0;
      fStack_15c = fVar28 * 0.0 + fVar28 * 0.0 + fVar28 * 1.0 + fVar10 * 0.0;
      local_158 = fVar31 * 0.0 + local_d8 * fVar23 + fVar36 * 0.0 + fVar5 * 1.0;
      fStack_154 = fVar25 * 0.0 + local_d8 * fVar34 + fVar29 * 0.0 + fVar6 * 1.0;
      fStack_150 = fVar35 * 0.0 + local_d8 * fVar32 + fVar27 * 0.0 + fVar7 * 1.0;
      fStack_14c = fVar28 * 0.0 + local_d8 * fVar28 + fVar28 * 0.0 + fVar10 * 1.0;
    }
    FMatrix::ExtractScaling(&local_188,&local_1a8,0x322bcc77);
    fVar27 = fStack_160;
    fVar22 = fStack_164;
    fVar10 = local_168;
    local_168 = local_178;
    fStack_160 = fStack_170;
    fStack_164 = fStack_174;
    local_178 = fVar10;
    fStack_174 = fVar22;
    fStack_170 = fVar27;
    FUN_140487e30(local_108,&local_188);
    U2PTransform(local_148,local_108);
    local_1e4 = (int)param_1[0xe2];
    local_110 = *(float *)((longlong)param_1 + 0x70c);
    if (0 < local_1e4) {
      fVar33 = ((float)(int)param_1[0xe1] * local_110) / (float)local_1e4;
    }
    plVar19 = (longlong *)0x0;
    fVar27 = local_1a0 * 0.0078125;
    local_120 = *(longlong *)(param_1[0xf2] + 0x30);
    fVar22 = local_1a8._4_4_;
    fVar10 = (float)local_1a8;
    local_114 = local_110 * local_1a8._4_4_;
    local_128[0] = 6;
    local_110 = local_110 * (float)local_1a8;
    local_10c = 2;
    uVar20 = 0;
    local_10b = 0;
    local_109 = 0;
    local_118 = fVar27;
    uVar12 = _fpclass((double)fVar27);
    if (((((uVar12 & 0x207) == 0) && (uVar12 = _fpclass((double)local_114), (uVar12 & 0x207) == 0))
        && (uVar12 = _fpclass((double)local_110), (uVar12 & 0x207) == 0)) &&
       (((1e-08 <= local_114 && (1e-08 <= local_110)) &&
        ((1.5259022e-09 <= local_118 && (local_120 != 0)))))) {
      local_1a8 = (longlong *)(**(code **)(*DAT_146b08400 + 0xa8))(DAT_146b08400,local_148);
      local_1e7[0] = '\v';
      local_1f0 = local_1e7;
      local_1f8 = 1;
      plVar13 = (longlong *)
                (**(code **)(*DAT_146b08400 + 0xd8))
                          (DAT_146b08400,local_128,*(undefined8 *)(param_1[0xf2] + 0x20),
                           *(undefined2 *)(param_1[0xf2] + 0x28));
      uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
      uStack_1d0 = 0;
      uStack_1cc = 0;
      local_1d8 = 0;
      uStack_1d4 = 0;
      uStack_1c0 = 0;
      uStack_1bc = 0;
      local_1c8 = 0;
      uStack_1c4 = 0;
      uVar2 = *(undefined4 *)(param_1[0x23] + 0xc);
      uVar14 = (**(code **)(*param_1 + 0x4d0))(param_1);
      local_1e8 = (**(code **)(*param_1 + 0x4f8))(param_1);
      FUN_1422ffde0(local_1b8,&local_1e8,0,uVar14);
      iVar9 = local_1e4;
      uStack_1d0 = local_1b8._4_4_;
      uStack_1d4 = local_1b8._0_4_;
      uStack_1c4 = local_1b8._0_4_;
      uStack_1cc = (local_1e4 < 1) + 2 | local_1b8._8_4_ | 0x14;
      local_1c8 = 0;
      local_1d8 = uVar2;
      uStack_1c0 = uVar1;
      uStack_1bc = uStack_1cc;
      (**(code **)(*plVar13 + 0xa8))(plVar13,&local_1d8);
      (**(code **)(*plVar13 + 0x98))(plVar13,&local_1c8);
      (**(code **)(*plVar13 + 0xf8))(plVar13,2,1);
      (**(code **)(*plVar13 + 0xf8))(plVar13,1,1);
      (**(code **)(*plVar13 + 0xf8))(plVar13,8,1);
      plVar17 = local_1a8;
      (**(code **)(*local_1a8 + 0xb8))(local_1a8,plVar13);
      (**(code **)*plVar13)(plVar13);
      if (0 < iVar9) {
        lVar15 = param_1[0xf2];
        local_1f0 = &local_1e8;
        local_1e8 = '\v';
        local_100 = *(undefined8 *)(lVar15 + 0x38);
        local_108[0] = 6;
        local_ec = 0;
        local_f4 = fVar22 * fVar33;
        local_1f8 = 1;
        local_f0 = fVar10 * fVar33;
        local_f8 = fVar27;
        plVar13 = (longlong *)
                  (**(code **)(*DAT_146b08400 + 0xd8))
                            (DAT_146b08400,local_108,*(undefined8 *)(lVar15 + 0x20),
                             *(undefined2 *)(lVar15 + 0x28));
        local_1b8._4_4_ = uStack_1d4;
        local_1b8._0_4_ = local_1d8;
        local_1b8._8_4_ = uStack_1d0;
        local_198._4_4_ = uStack_1c4;
        local_198._0_4_ = local_1c8;
        local_198._8_4_ = uStack_1c0;
        uStack_1ac = uStack_1cc & 0xfffffffd | 1;
        uStack_18c = uStack_1bc & 0xfffffffd | 1;
        (**(code **)(*plVar13 + 0xa8))(plVar13,local_1b8);
        (**(code **)(*plVar13 + 0x98))(plVar13,local_198);
        (**(code **)(*plVar13 + 0xf8))(plVar13,2,1);
        (**(code **)(*plVar13 + 0xf8))(plVar13,1,1);
        (**(code **)(*plVar13 + 0xf8))(plVar13,8,1);
        (**(code **)(*plVar17 + 0xb8))(plVar17,plVar13);
        (**(code **)*plVar13)(plVar13);
      }
      lVar15 = param_1[0x24];
      if (lVar15 == 0) {
        lVar15 = FUN_1423407b0(param_1);
      }
      pcVar3 = *(char **)(lVar15 + 0x218);
      local_1e7[0] = *pcVar3;
      plVar13 = plVar19;
      if (local_1e7[0] != '\0') {
        plVar13 = (longlong *)(**(code **)(*DAT_146b08400 + 0xa8))(DAT_146b08400,local_148);
        local_1e8 = '\v';
        local_1f0 = &local_1e8;
        local_1f8 = 1;
        plVar16 = (longlong *)
                  (**(code **)(*DAT_146b08400 + 0xd8))
                            (DAT_146b08400,local_128,*(undefined8 *)(param_1[0xf2] + 0x20),
                             *(undefined2 *)(param_1[0xf2] + 0x28));
        (**(code **)(*plVar16 + 0xa8))(plVar16,&local_1d8);
        (**(code **)(*plVar16 + 0x98))(plVar16,&local_1c8);
        (**(code **)(*plVar16 + 0xf8))(plVar16,2);
        (**(code **)(*plVar16 + 0xf8))(plVar16,1,1);
        (**(code **)(*plVar16 + 0xf8))(plVar16,8,1);
        (**(code **)(*plVar13 + 0xb8))(plVar13,plVar16);
        (**(code **)*plVar16)(plVar16);
        if (0 < local_1e4) {
          lVar15 = param_1[0xf2];
          local_1f0 = &local_1e8;
          local_1e8 = '\v';
          local_100 = *(undefined8 *)(lVar15 + 0x38);
          local_108[0] = 6;
          local_ec = 0;
          local_f4 = fVar22 * fVar33;
          local_1f8 = 1;
          local_f0 = fVar10 * fVar33;
          local_f8 = fVar27;
          plVar16 = (longlong *)
                    (**(code **)(*DAT_146b08400 + 0xd8))
                              (DAT_146b08400,local_108,*(undefined8 *)(lVar15 + 0x20),
                               *(undefined2 *)(lVar15 + 0x28));
          local_198._4_4_ = uStack_1d4;
          local_198._0_4_ = local_1d8;
          local_198._8_4_ = uStack_1d0;
          local_1b8._4_4_ = uStack_1c4;
          local_1b8._0_4_ = local_1c8;
          local_1b8._8_4_ = uStack_1c0;
          uStack_18c = uStack_1cc & 0xfffffffd | 1;
          uStack_1ac = uStack_1bc & 0xfffffffd | 1;
          (**(code **)(*plVar16 + 0xa8))(plVar16,local_198);
          (**(code **)(*plVar16 + 0x98))(plVar16,local_1b8);
          (**(code **)(*plVar16 + 0xf8))(plVar16,2);
          (**(code **)(*plVar16 + 0xf8))(plVar16,1,1);
          (**(code **)(*plVar16 + 0xf8))(plVar16,8,1);
          (**(code **)(*plVar13 + 0xb8))(plVar13,plVar16);
          (**(code **)*plVar16)(plVar16);
        }
      }
      cVar11 = local_1e7[0];
      local_198._0_4_ = 1;
      stack0xfffffffffffffe70 = plVar21;
      param_1[0xa4] = local_198._0_8_;
      param_1[0xa5] = (longlong)plVar21;
      FWeakObjectPtr::operator=(param_1 + 0x9d,param_1);
      *(undefined2 *)((longlong)param_1 + 0x3b6) = *(undefined2 *)(pcVar3 + 0x60);
      if (cVar11 != '\0') {
        uVar20 = *(undefined2 *)(pcVar3 + 100);
      }
      *(undefined2 *)(param_1 + 0x77) = uVar20;
      param_1[0x98] = (longlong)plVar17;
      param_1[0x99] = (longlong)plVar13;
      plVar17[2] = (longlong)(param_1 + 0xa4);
      if (cVar11 != '\0') {
        plVar13[2] = (longlong)(param_1 + 0xa4);
      }
      plVar17 = (longlong *)FUN_1426e2530(pcVar3,0);
      if (plVar17 != (longlong *)0x0) {
        (**(code **)(*plVar17 + 0x358))
                  (plVar17,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
                   ,0x16c);
      }
      (**(code **)(*plVar17 + 0x50))(plVar17,local_1a8);
      if (cVar11 != '\0') {
        plVar16 = (longlong *)FUN_1426e2530(pcVar3,2);
        if (plVar16 != (longlong *)0x0) {
          (**(code **)(*plVar16 + 0x358))
                    (plVar16,
                     "D:\\Oak\\main\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
                     ,0x173);
        }
        (**(code **)(*plVar16 + 0x50))(plVar16,plVar13);
        (**(code **)(*plVar16 + 0x360))(plVar16);
      }
      bVar8 = false;
      DAT_146534744 = DAT_146534744 + 1;
      lVar15 = (longlong)(DAT_146534738 + -1);
      if (-1 < DAT_146534738 + -1) {
        lVar18 = lVar15 << 4;
        bVar8 = false;
        do {
          if (((*(int *)(lVar18 + 8 + DAT_146534730) == 0) ||
              (plVar13 = *(longlong **)(lVar18 + DAT_146534730), plVar13 == (longlong *)0x0)) ||
             (cVar11 = (**(code **)(*plVar13 + 0x40))(plVar13,plVar21,0), cVar11 == '\0')) {
            bVar8 = true;
          }
          lVar18 = lVar18 + -0x10;
          lVar15 = lVar15 + -1;
        } while (-1 < lVar15);
      }
      iVar9 = DAT_146534738;
      DAT_146534744 = DAT_146534744 + -1;
      if ((bVar8) && (DAT_146534744 < 1)) {
        plVar21 = plVar19;
        if (0 < DAT_146534738) {
          do {
            if (((*(int *)((longlong)plVar19 + DAT_146534730 + 8) == 0) ||
                (*(longlong **)((longlong)plVar19 + DAT_146534730) == (longlong *)0x0)) ||
               (cVar11 = (**(code **)(**(longlong **)((longlong)plVar19 + DAT_146534730) + 0x10))(),
               cVar11 != '\0')) {
              TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146534730,plVar21,1,1);
            }
            else {
              plVar21 = (longlong *)(ulonglong)((int)plVar21 + 1);
              plVar19 = plVar19 + 2;
            }
          } while ((int)plVar21 < DAT_146534738);
        }
        _DAT_146534740 = DAT_146534738 * 2;
        if (_DAT_146534740 < 3) {
          _DAT_146534740 = 2;
        }
        if ((_DAT_146534740 < iVar9) && (DAT_14653473c != DAT_146534738)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146534730);
        }
      }
      (**(code **)(*plVar17 + 0x360))(plVar17);
    }
  }
  return;
}



// FUNCTION 141ef95d0 FUN_141ef95d0 body=2077 status=ok
// SIG undefined FUN_141ef95d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141ef95d0(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
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
  float fVar30;
  float fVar31;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  undefined1 *local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  undefined8 local_1c0;
  ulonglong local_1b8;
  longlong local_1b0;
  ulonglong local_1a8;
  undefined8 local_1a0;
  float local_198;
  uint local_190;
  undefined4 uStack_18c;
  longlong *plStack_188;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [32];
  undefined4 local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  longlong local_f0;
  undefined1 local_e8 [48];
  float local_b8;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  FUN_1423437b0();
  cVar10 = FBodyInstance::IsValidBodyInstance(param_1 + 0x76);
  if ((cVar10 == '\0') &&
     ((**(code **)(*param_1 + 0x8e8))(param_1), fVar18 = fRam0000000146ac439c, param_1[0xfc] != 0))
  {
    fVar17 = *(float *)(param_1 + 0x42);
    fVar21 = *(float *)((longlong)param_1 + 0x214);
    fVar20 = *(float *)(param_1 + 0x43);
    fVar19 = *(float *)((longlong)param_1 + 0x21c);
    fVar23 = fVar21 + fVar21;
    fVar25 = fVar20 + fVar20;
    fVar22 = *(float *)(param_1 + 0x46);
    fVar5 = *(float *)((longlong)param_1 + 0x234);
    fVar6 = *(float *)(param_1 + 0x47);
    fVar26 = fVar17 * (fVar17 + fVar17);
    fVar24 = (fVar17 + fVar17) * fVar19;
    fVar7 = *(float *)(param_1 + 0x44);
    fVar8 = *(float *)((longlong)param_1 + 0x224);
    fVar9 = *(float *)(param_1 + 0x45);
    fVar29 = (fVar25 * fVar19 + fVar23 * fVar17) * fVar22;
    fVar30 = (fVar24 + fVar25 * fVar21) * fVar5;
    fVar31 = (fVar23 * fVar19 + fVar25 * fVar17) * fVar6;
    fVar27 = fVar5 * (fVar23 * fVar17 - fVar25 * fVar19);
    fVar24 = fVar6 * (fVar25 * fVar21 - fVar24);
    fVar28 = fVar22 * (fVar25 * fVar17 - fVar23 * fVar19);
    fStack_13c = fRam0000000146ac439c;
    fVar19 = (float)((uint)((_DAT_146ac4390 - (fVar20 * fVar25 + fVar21 * fVar23)) * fVar22) &
                    _DAT_146ac4380);
    fVar20 = (float)((uint)((fRam0000000146ac4394 - (fVar20 * fVar25 + fVar26)) * fVar5) &
                    uRam0000000146ac4384);
    fVar21 = (float)((uint)((fRam0000000146ac4398 - (fVar21 * fVar23 + fVar26)) * fVar6) &
                    uRam0000000146ac4388);
    fVar22 = (float)((uint)((fRam0000000146ac439c - (fVar26 + fVar26)) *
                           *(float *)((longlong)param_1 + 0x23c)) & uRam0000000146ac438c);
    local_178 = fVar19;
    fStack_174 = fVar29;
    fStack_170 = fVar28;
    fStack_16c = fVar22;
    local_168 = fVar27;
    fStack_164 = fVar20;
    fStack_160 = fVar30;
    fStack_15c = fVar22;
    local_158 = fVar31;
    fStack_154 = fVar24;
    fStack_150 = fVar21;
    fStack_14c = fVar22;
    local_148 = fVar7;
    fStack_144 = fVar8;
    fStack_140 = fVar9;
    fVar17 = (float)FMatrix::Determinant(&local_178);
    if (fVar17 < 0.0) {
      local_b8 = (float)(int)param_1[0xe1];
      local_178 = fVar27 * 0.0 + fVar19 * 1.0 + fVar31 * 0.0 + fVar7 * 0.0;
      fStack_174 = fVar20 * 0.0 + fVar29 * 1.0 + fVar24 * 0.0 + fVar8 * 0.0;
      fStack_170 = fVar30 * 0.0 + fVar28 * 1.0 + fVar21 * 0.0 + fVar9 * 0.0;
      fStack_16c = fVar22 * 0.0 + fVar22 * 1.0 + fVar22 * 0.0 + fVar18 * 0.0;
      local_168 = fVar27 * 1.0 + fVar19 * 0.0 + fVar31 * 0.0 + fVar7 * 0.0;
      fStack_164 = fVar20 * 1.0 + fVar29 * 0.0 + fVar24 * 0.0 + fVar8 * 0.0;
      fStack_160 = fVar30 * 1.0 + fVar28 * 0.0 + fVar21 * 0.0 + fVar9 * 0.0;
      fStack_15c = fVar22 * 1.0 + fVar22 * 0.0 + fVar22 * 0.0 + fVar18 * 0.0;
      uStack_b4 = 0;
      uStack_ac = 0x3f800000;
      local_158 = fVar27 * 0.0 + fVar19 * 0.0 + fVar31 * 1.0 + fVar7 * 0.0;
      fStack_154 = fVar20 * 0.0 + fVar29 * 0.0 + fVar24 * 1.0 + fVar8 * 0.0;
      fStack_150 = fVar30 * 0.0 + fVar28 * 0.0 + fVar21 * 1.0 + fVar9 * 0.0;
      fStack_14c = fVar22 * 0.0 + fVar22 * 0.0 + fVar22 * 1.0 + fVar18 * 0.0;
      local_148 = fVar27 * 0.0 + local_b8 * fVar19 + fVar31 * 0.0 + fVar7 * 1.0;
      fStack_144 = fVar20 * 0.0 + local_b8 * fVar29 + fVar24 * 0.0 + fVar8 * 1.0;
      fStack_140 = fVar30 * 0.0 + local_b8 * fVar28 + fVar21 * 0.0 + fVar9 * 1.0;
      fStack_13c = fVar22 * 0.0 + local_b8 * fVar22 + fVar22 * 0.0 + fVar18 * 1.0;
    }
    FMatrix::ExtractScaling(&local_178,&local_1a0,0x322bcc77);
    FUN_140487e30(local_e8,&local_178);
    U2PTransform(local_138,local_e8);
    plVar16 = (longlong *)0x0;
    local_108 = 0;
    uStack_100 = 0x3f80000000000000;
    local_118 = 5;
    local_f8 = 0;
    local_f0 = *(longlong *)(param_1[0xfc] + 0x30);
    local_110 = *(float *)((longlong)param_1 + 0x70c) * local_1a0._4_4_;
    local_114 = *(float *)((longlong)param_1 + 0x70c) * (float)local_1a0;
    local_10c = local_198;
    uVar11 = _fpclass((double)local_114);
    if (((((uVar11 & 0x207) == 0) && (uVar11 = _fpclass((double)local_110), (uVar11 & 0x207) == 0))
        && (uVar11 = _fpclass((double)local_10c), (uVar11 & 0x207) == 0)) &&
       (cVar10 = physx::PxQuat::isFinite(&local_108), cVar10 != '\0')) {
      if (ABS(SQRT(local_108._4_4_ * local_108._4_4_ + (float)local_108 * (float)local_108 +
                   (float)uStack_100 * (float)uStack_100 + uStack_100._4_4_ * uStack_100._4_4_) -
              1.0) < 0.0001) {
        fVar17 = ABS(local_10c);
        fVar21 = ABS(local_114);
        fVar20 = ABS(local_110);
        fVar18 = fVar17;
        if (fVar17 <= fVar20) {
          fVar18 = fVar20;
        }
        if (fVar18 <= fVar21) {
          fVar18 = fVar21;
        }
        if (fVar18 <= 1e+06) {
          if (fVar20 <= fVar17) {
            fVar17 = fVar20;
          }
          if (fVar21 <= fVar17) {
            fVar17 = fVar21;
          }
          if ((1e-06 <= fVar17) && (local_f0 != 0)) {
            local_1a0 = (longlong *)(**(code **)(*DAT_146b08400 + 0xa8))(DAT_146b08400,local_138);
            local_1c7[0] = 0xb;
            local_1d0 = local_1c7;
            local_1d8 = 1;
            plVar12 = (longlong *)
                      (**(code **)(*DAT_146b08400 + 0xd8))
                                (DAT_146b08400,&local_118,*(undefined8 *)(param_1[0xfc] + 0x20),
                                 *(undefined2 *)(param_1[0xfc] + 0x28));
            uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
            local_1b8 = 0;
            local_1c0 = 0;
            local_1a8 = 0;
            local_1b0 = 0;
            uVar3 = *(undefined4 *)(param_1[0x23] + 0xc);
            uVar13 = (**(code **)(*param_1 + 0x4d0))(param_1);
            local_1c8 = (**(code **)(*param_1 + 0x4f8))(param_1);
            FUN_1422ffde0(&local_190,&local_1c8,0,uVar13);
            local_1b8 = CONCAT44(plStack_188._0_4_,uStack_18c) | 0x1300000000;
            local_1c0 = CONCAT44(local_190,uVar3);
            local_1b0 = (ulonglong)local_190 << 0x20;
            local_1a8 = CONCAT44(plStack_188._0_4_,uVar2) | 0x1300000000;
            (**(code **)(*plVar12 + 0xa8))(plVar12,&local_1c0);
            (**(code **)(*plVar12 + 0x98))(plVar12,&local_1b0);
            (**(code **)(*plVar12 + 0xf8))(plVar12,2,1);
            (**(code **)(*plVar12 + 0xf8))(plVar12,1,1);
            (**(code **)(*plVar12 + 0xf8))(plVar12,8,1);
            plVar15 = local_1a0;
            (**(code **)(*local_1a0 + 0xb8))(local_1a0,plVar12);
            (**(code **)*plVar12)(plVar12);
            lVar14 = param_1[0x24];
            if (lVar14 == 0) {
              lVar14 = FUN_1423407b0(param_1);
            }
            pcVar4 = *(char **)(lVar14 + 0x218);
            cVar10 = *pcVar4;
            plVar12 = plVar16;
            if (cVar10 != '\0') {
              plVar12 = (longlong *)(**(code **)(*DAT_146b08400 + 0xa8))(DAT_146b08400,local_138);
              local_1c8 = 0xb;
              local_1d0 = &local_1c8;
              local_1d8 = 1;
              plVar15 = (longlong *)
                        (**(code **)(*DAT_146b08400 + 0xd8))
                                  (DAT_146b08400,&local_118,*(undefined8 *)(param_1[0xfc] + 0x20),
                                   *(undefined2 *)(param_1[0xfc] + 0x28));
              (**(code **)(*plVar15 + 0xa8))(plVar15,&local_1c0);
              (**(code **)(*plVar15 + 0x98))(plVar15,&local_1b0);
              (**(code **)(*plVar15 + 0xf8))(plVar15,2);
              (**(code **)(*plVar15 + 0xf8))(plVar15,1,1);
              (**(code **)(*plVar15 + 0xf8))(plVar15,8,1);
              (**(code **)(*plVar12 + 0xb8))(plVar12,plVar15);
              (**(code **)*plVar15)(plVar15);
              plVar15 = local_1a0;
            }
            plStack_188 = param_1 + 0x76;
            local_190 = 1;
            plVar1 = param_1 + 0xa4;
            *(undefined4 *)plVar1 = 1;
            *(undefined4 *)((longlong)param_1 + 0x524) = uStack_18c;
            param_1[0xa5] = (longlong)plStack_188;
            FWeakObjectPtr::operator=(param_1 + 0x9d,param_1);
            *(undefined2 *)((longlong)param_1 + 0x3b6) = *(undefined2 *)(pcVar4 + 0x60);
            if (cVar10 != '\0') {
              plVar16 = (longlong *)(ulonglong)*(ushort *)(pcVar4 + 100);
            }
            *(short *)(param_1 + 0x77) = (short)plVar16;
            param_1[0x98] = (longlong)plVar15;
            param_1[0x99] = (longlong)plVar12;
            plVar15[2] = (longlong)plVar1;
            if (cVar10 != '\0') {
              plVar12[2] = (longlong)plVar1;
            }
            plVar16 = (longlong *)FUN_1426e2530(pcVar4,0);
            if (plVar16 != (longlong *)0x0) {
              (**(code **)(*plVar16 + 0x358))
                        (plVar16,
                         "D:\\Oak\\main\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
                         ,0x44f);
            }
            (**(code **)(*plVar16 + 0x50))(plVar16,plVar15);
            if (cVar10 != '\0') {
              plVar15 = (longlong *)FUN_1426e2530(pcVar4,2);
              if (plVar15 != (longlong *)0x0) {
                (**(code **)(*plVar15 + 0x358))
                          (plVar15,
                           "D:\\Oak\\main\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeCollision.cpp"
                           ,0x456);
              }
              (**(code **)(*plVar15 + 0x50))(plVar15,plVar12);
              (**(code **)(*plVar15 + 0x360))(plVar15);
            }
            (**(code **)(*plVar16 + 0x360))(plVar16);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141ef9df0 FUN_141ef9df0 body=211 status=ok
// SIG undefined FUN_141ef9df0(void)

void FUN_141ef9df0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  
  FUN_1423937b0();
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x20) + 0x77c) != '\0')) {
    iVar2 = *(int *)(param_1 + 0x720);
    plVar1 = (longlong *)(param_1 + 0x728);
    if (*(int *)(param_1 + 0x734) < iVar2) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,iVar2);
      iVar2 = *(int *)(param_1 + 0x720);
    }
    iVar4 = 0;
    if (0 < iVar2) {
      lVar5 = 0;
      do {
        uVar3 = UMaterialInstanceDynamic::Create
                          (*(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x718)),param_1);
        iVar2 = *(int *)(param_1 + 0x730);
        *(int *)(param_1 + 0x730) = iVar2 + 1;
        if (*(int *)(param_1 + 0x734) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
        }
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 8;
        *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar3;
      } while (iVar4 < *(int *)(param_1 + 0x720));
    }
  }
  return;
}



// FUNCTION 141ef9ef0 FUN_141ef9ef0 body=52 status=ok
// SIG undefined FUN_141ef9ef0(void)

void FUN_141ef9ef0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_18 [16];
  
  FUN_142394440();
  FWindowsPlatformMisc::CreateGuid((GUID *)(param_1 + 0x80c));
  puVar1 = (undefined8 *)FGuid::NewGuid(local_18);
  uVar2 = puVar1[1];
  *(undefined8 *)(param_1 + 2000) = *puVar1;
  *(undefined8 *)(param_1 + 0x7d8) = uVar2;
  return;
}



// FUNCTION 141ef9f30 FUN_141ef9f30 body=198 status=ok
// SIG undefined FUN_141ef9f30(void)

void FUN_141ef9f30(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined1 local_18 [16];
  
  if (((*(int *)(param_1 + 0x46c) == 0 && *(int *)(param_1 + 0x468) == 0) &&
      *(int *)(param_1 + 0x464) == 0) && *(int *)(param_1 + 0x460) == 0) {
    puVar6 = (undefined4 *)FGuid::NewGuid(local_18);
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *(undefined4 *)(param_1 + 0x460) = *puVar6;
    *(undefined4 *)(param_1 + 0x464) = uVar2;
    *(undefined4 *)(param_1 + 0x468) = uVar3;
    *(undefined4 *)(param_1 + 0x46c) = uVar4;
  }
  FUN_1422384a0(param_1);
  if (*(char *)(param_1 + 0x574) == '\0') {
    AActor::SetActorTickEnabled(param_1,0);
    *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xfd;
  }
  if (((*(int *)(param_1 + 0x76c) == 0) && (0 < *(int *)(param_1 + 0x4e8))) &&
     (lVar1 = **(longlong **)(param_1 + 0x4e0), lVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(lVar1 + 0x6f8);
    *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(lVar1 + 0x6fc);
    *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(lVar1 + 0x700);
  }
  cVar5 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar5 == '\0') {
    FBodyInstance::FixupData(param_1 + 0x5b8,param_1);
    return;
  }
  return;
}



// FUNCTION 141efa000 FUN_141efa000 body=149 status=ok
// SIG undefined FUN_141efa000(void)

void FUN_141efa000(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  FUN_1422384a0();
  if (*(char *)(param_1 + 0x574) == '\0') {
    AActor::SetActorTickEnabled(param_1,0);
    *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xfd;
  }
  if (((*(int *)(param_1 + 0x76c) == 0) && (0 < *(int *)(param_1 + 0x4e8))) &&
     (lVar1 = **(longlong **)(param_1 + 0x4e0), lVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(lVar1 + 0x6f8);
    *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(lVar1 + 0x6fc);
    *(undefined4 *)(param_1 + 0x774) = *(undefined4 *)(lVar1 + 0x700);
  }
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar2 == '\0') {
    FBodyInstance::FixupData(param_1 + 0x5b8,param_1);
    return;
  }
  return;
}



// FUNCTION 141efa0a0 FUN_141efa0a0 body=445 status=ok
// SIG undefined FUN_141efa0a0(void)

void FUN_141efa0a0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined2 *local_28;
  uint local_20;
  undefined4 local_1c;
  
  if (*(longlong *)(param_1 + 0x4c0) == 0) {
    return;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x4c0) + 0x30) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x4d8) != 0) {
    return;
  }
  if ((*(longlong *)(param_1 + -0x1b0) == 0) &&
     (lVar8 = FUN_1423407b0(param_1 + -0x2d0), lVar8 == 0)) {
    return;
  }
  uVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x4c0) + 0x30) + 0x38))();
  *(undefined4 *)(param_1 + 0x4c8) = uVar5;
  uVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x4c0) + 0x30) + 0x40))();
  *(undefined4 *)(param_1 + 0x4cc) = uVar5;
  iVar6 = *(int *)(param_1 + 0x4c8) * *(int *)(param_1 + 0x4c8);
  if (*(int *)(param_1 + 0x4d8) == iVar6) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x4d0);
  iVar2 = *(int *)(param_1 + 0x4d8);
  if (iVar2 < iVar6) {
    *(int *)(param_1 + 0x4d8) = iVar6;
    if (*(int *)(param_1 + 0x4dc) < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
  }
  else if ((iVar6 < iVar2) && (iVar6 != iVar2)) {
    *(int *)(param_1 + 0x4d8) = iVar6;
    TArray<wchar_t,FDefaultAllocator>::ResizeShrink(plVar1);
  }
  uVar10 = 0;
  uVar7 = *(int *)(param_1 + 0x4c8) * *(int *)(param_1 + 0x4c8);
  local_28 = (undefined2 *)0x0;
  local_1c = 0;
  if ((int)uVar7 < 1) {
    uVar11 = uVar10;
    if ((-1 < (int)uVar7) || (uVar11 = 0, uVar7 == 0)) goto LAB_141efa1c7;
    local_20 = uVar7;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&local_28);
  }
  else {
    local_20 = uVar7;
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_28,0);
  }
  uVar11 = (ulonglong)local_20;
LAB_141efa1c7:
  puVar4 = local_28;
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x4c0) + 0x30);
  (**(code **)(*plVar3 + 0x28))(plVar3,local_28,(int)uVar11 * 4);
  if (0 < (int)uVar11) {
    puVar9 = puVar4;
    do {
      *(undefined2 *)(uVar10 + *plVar1) = *puVar9;
      TBitArray<FDefaultBitArrayAllocator>::Add
                (param_1 + 0x4e0,(*(byte *)(puVar9 + 1) & 0x7f) == 0x7f,1);
      puVar9 = puVar9 + 2;
      uVar10 = uVar10 + 2;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (puVar4 != (undefined2 *)0x0) {
    FMemory::Free(puVar4);
  }
  return;
}



// FUNCTION 141efa260 PrintNumLandscapeShadows body=171 status=ok
// SIG undefined PrintNumLandscapeShadows(void)

void PrintNumLandscapeShadows(void)

{
  undefined8 uVar1;
  longlong local_28;
  undefined8 local_20;
  int local_18;
  
  local_18 = -1;
  local_28 = 0;
  local_20 = 0;
  uVar1 = ACameraActor::GetPrivateStaticClass();
  FUN_1417a5560(uVar1,&local_28,1,0x10,0);
  do {
    local_18 = local_18 + 1;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)local_20 <= local_18)) {
        if (local_28 != 0) {
          FMemory::Free(local_28);
        }
        return;
      }
      local_18 = local_18 + 1;
    } while ((int)local_20 <= local_18);
    do {
      if (*(longlong *)(local_28 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)local_20);
  } while( true );
}



// FUNCTION 141efa310 FUN_141efa310 body=70 status=ok
// SIG undefined FUN_141efa310(void)

void FUN_141efa310(longlong *param_1)

{
  if ((*(byte *)(param_1 + 0x17) & 3) == 3) {
    (**(code **)(*param_1 + 0x300))();
    if (((*(byte *)(param_1 + 0x17) & 2) == 0) && ((*(byte *)(param_1 + 0x17) & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000141efa349. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2e8))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 141efa360 FUN_141efa360 body=100 status=ok
// SIG undefined FUN_141efa360(void)

void FUN_141efa360(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x790);
    *(undefined8 *)(param_1 + 0x790) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(undefined4 *)(param_1 + 0x728) = 0;
    *(undefined4 *)(param_1 + 0x72c) = 0;
    *(undefined4 *)(param_1 + 0x730) = 0;
    *(undefined4 *)(param_1 + 0x734) = 0;
    FUN_14234b040(param_1);
  }
  return;
}



// FUNCTION 141efa3d0 FUN_141efa3d0 body=169 status=ok
// SIG undefined FUN_141efa3d0(void)

void FUN_141efa3d0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((uVar3 >> 4 & 1) == 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x7e0);
    *(undefined8 *)(param_1 + 0x7e0) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    uVar3 = *(uint *)(param_1 + 8);
    *(undefined4 *)(param_1 + 2000) = 0;
    *(undefined4 *)(param_1 + 0x7d4) = 0;
    *(undefined4 *)(param_1 + 0x7d8) = 0;
    *(undefined4 *)(param_1 + 0x7dc) = 0;
  }
  if ((uVar3 >> 4 & 1) == 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x790);
    *(undefined8 *)(param_1 + 0x790) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(undefined4 *)(param_1 + 0x728) = 0;
    *(undefined4 *)(param_1 + 0x72c) = 0;
    *(undefined4 *)(param_1 + 0x730) = 0;
    *(undefined4 *)(param_1 + 0x734) = 0;
    FUN_14234b040(param_1);
  }
  return;
}



// FUNCTION 141efa480 FUN_141efa480 body=383 status=ok
// SIG undefined FUN_141efa480(void)

undefined8 FUN_141efa480(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar8 = (int)(param_2 >> 4);
  uVar7 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
  uVar6 = (longlong)(int)param_1[9] - 1;
  uVar5 = -(uVar7 + iVar8) ^ uVar7 >> 0xd;
  uVar9 = (iVar8 - uVar7) - uVar5 ^ uVar5 >> 0xc;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 0x10;
  uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar7 >> 5;
  uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar5 >> 3;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 10;
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  iVar8 = *(int *)((longlong)plVar10 +
                  (((longlong)(int)((uVar5 - uVar7) - uVar9) ^ (ulonglong)(uVar7 >> 0xf)) & uVar6) *
                  4);
  if (iVar8 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar8 * 0x20;
      if (*(ulonglong *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar8 * 0x20;
        uVar6 = (longlong)*(int *)(lVar3 + 0x1c + lVar2) & uVar6;
        piVar4 = (int *)((longlong)plVar10 + uVar6 * 4);
        iVar1 = *(int *)((longlong)plVar10 + uVar6 * 4);
        goto joined_r0x000141efa597;
      }
      iVar8 = *(int *)(lVar3 + 0x18 + lVar2);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x000141efa597:
  if (iVar1 == -1) {
LAB_141efa5c0:
    if (*(longlong *)(lVar3 + 8 + *param_1) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar8,1);
    return 1;
  }
  if (iVar1 == iVar8) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x18);
    goto LAB_141efa5c0;
  }
  piVar4 = (int *)(lVar2 + 0x18 + (longlong)iVar1 * 0x20);
  iVar1 = *piVar4;
  goto joined_r0x000141efa597;
}



// FUNCTION 141efa600 RemoveAnnotation body=178 status=ok
// SIG undefined RemoveAnnotation(void)

void FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::RemoveAnnotation
               (longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  longlong local_18 [2];
  
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x80) = param_2;
  plVar1 = (longlong *)(param_1 + 0x88);
  if (plVar1 != local_18) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x3c);
  FUN_141efa480(param_1 + 8,*(undefined8 *)(param_1 + 0x80));
  if ((0 < iVar2 - iVar3) && (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c))) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000141efa6ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 141efa6c0 FUN_141efa6c0 body=1109 status=ok
// SIG undefined FUN_141efa6c0(void)

undefined8 * FUN_141efa6c0(undefined8 *param_1,short *param_2)

{
  void *_Src;
  uint uVar1;
  uint uVar2;
  wint_t *pwVar3;
  wchar_t *pwVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  wint_t *pwVar11;
  uint uVar12;
  uint uVar13;
  wint_t *pwVar14;
  wchar_t *pwVar15;
  wint_t *pwVar16;
  wint_t *local_78;
  uint local_70;
  int local_6c;
  wint_t *local_68;
  int local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  
  pwVar11 = (wint_t *)0x0;
  local_78 = (wint_t *)0x0;
  local_6c = 0;
  local_68 = (wint_t *)0x0;
  local_5c = 0;
  pwVar3 = pwVar11;
  iVar8 = 0;
  if ((param_2 != (short *)0x0) && (pwVar3 = (wint_t *)0x0, iVar8 = 0, *param_2 != 0)) {
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (param_2[lVar9] != 0);
    iVar6 = (int)lVar9 + 1;
    local_60 = iVar6;
    if (0 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    }
    iVar8 = local_60;
    pwVar3 = local_68;
    FGenericPlatformString::Memcpy(local_68,param_2,(longlong)iVar6 * 2);
  }
  uVar13 = 0;
  pwVar16 = pwVar3;
  uVar5 = uVar13;
  uVar2 = uVar13;
  while( true ) {
    pwVar4 = (wchar_t *)0x0;
    uVar12 = (uint)pwVar11;
    uVar10 = 0;
    uVar1 = iVar8 - 1;
    if (iVar8 == 0) {
      uVar1 = uVar10;
    }
    if ((int)uVar1 <= (int)uVar5) break;
    iVar6 = iswalnum(*pwVar3);
    if ((iVar6 == 0) && (*pwVar3 != 0x5f)) {
      pwVar4 = (wchar_t *)0x0;
      uVar2 = uVar2 + uVar13;
      uVar1 = iVar8 - 1;
      if (iVar8 == 0) {
        uVar1 = 0;
      }
      if (uVar13 < uVar1) {
        uVar1 = uVar13;
      }
      uVar13 = iVar8 - 1;
      if (iVar8 == 0) {
        uVar13 = 0;
      }
      uVar10 = uVar1;
      if ((uVar1 <= uVar2) && (uVar10 = uVar13, uVar2 < uVar13)) {
        uVar10 = uVar2;
      }
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      pwVar14 = &DAT_143f3eda8;
      if (iVar8 != 0) {
        pwVar14 = pwVar16;
      }
      iVar7 = uVar10 - uVar1;
      iVar6 = iVar7 + 1;
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      local_50 = iVar6;
      if ((0 < iVar6) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0), iVar6 = local_50,
         pwVar4 = local_58, 0 < local_50)) {
        wcsncpy(local_58,(wchar_t *)(pwVar14 + (int)uVar1),(longlong)iVar7);
        pwVar4[iVar7] = L'\0';
      }
      if ((iVar6 != 0) && (iVar6 = iVar6 + -1, iVar6 != 0)) {
        local_70 = uVar12 + (uVar12 == 0) + iVar6;
        if (local_6c < (int)local_70) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,pwVar11);
        }
        pwVar11 = (wint_t *)(ulonglong)local_70;
        pwVar16 = local_78 + ((longlong)(int)uVar12 - (ulonglong)(uVar12 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar16,pwVar4,(longlong)iVar6 * 2);
        pwVar16[iVar6] = 0;
      }
      if (pwVar4 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      uVar2 = 0;
      uVar13 = uVar5 + 1;
      FString::PrintfImpl(&local_48,&DAT_144ee9688,*pwVar3);
      _Src = local_48;
      if (local_40 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = local_40 + -1;
      }
      if (iVar6 != 0) {
        iVar7 = (int)pwVar11;
        local_70 = iVar7 + (uint)(iVar7 == 0) + iVar6;
        if (local_6c < (int)local_70) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,pwVar11);
        }
        pwVar11 = (wint_t *)(ulonglong)local_70;
        pwVar16 = local_78 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar16,_Src,(longlong)iVar6 * 2);
        pwVar16[iVar6] = 0;
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      uVar5 = uVar5 + 1;
      pwVar3 = pwVar3 + 1;
      pwVar16 = local_68;
    }
    else {
      uVar2 = uVar2 + 1;
      uVar5 = uVar5 + 1;
      pwVar3 = pwVar3 + 1;
    }
  }
  if (uVar13 == 0) {
    uVar5 = iVar8 - 1;
    if (iVar8 == 0) {
      uVar5 = uVar10;
    }
    if (uVar2 == uVar5) {
      *param_1 = pwVar16;
      *(int *)(param_1 + 1) = iVar8;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_5c;
      pwVar3 = local_78;
      goto joined_r0x000141efaaf3;
    }
  }
  pwVar3 = local_78;
  if (0 < (int)uVar2) {
    uVar2 = uVar2 + uVar13;
    uVar5 = iVar8 - 1;
    if (iVar8 == 0) {
      uVar5 = uVar10;
    }
    if (uVar13 < uVar5) {
      uVar5 = uVar13;
    }
    uVar13 = iVar8 - 1;
    if (iVar8 == 0) {
      uVar13 = uVar10;
    }
    uVar1 = uVar5;
    if ((uVar5 <= uVar2) && (uVar1 = uVar13, uVar2 < uVar13)) {
      uVar1 = uVar2;
    }
    local_58 = (wchar_t *)0x0;
    local_4c = 0;
    pwVar3 = &DAT_143f3eda8;
    if (iVar8 != 0) {
      pwVar3 = pwVar16;
    }
    iVar8 = uVar1 - uVar5;
    pwVar15 = (wchar_t *)(ulonglong)(iVar8 + 1);
    if (iVar8 == 0) {
      pwVar15 = pwVar4;
    }
    iVar6 = (int)pwVar15;
    local_50 = iVar6;
    if ((0 < iVar6) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0), iVar6 = local_50,
       pwVar4 = local_58, 0 < local_50)) {
      wcsncpy(local_58,(wchar_t *)(pwVar3 + (int)uVar5),(longlong)iVar8);
      pwVar4[iVar8] = L'\0';
    }
    pwVar3 = local_78;
    if ((iVar6 != 0) && (iVar6 = iVar6 + -1, iVar6 != 0)) {
      local_70 = uVar12 + (uVar12 == 0) + iVar6;
      if (local_6c < (int)local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,pwVar11);
      }
      uVar5 = local_70;
      pwVar3 = local_78;
      pwVar11 = local_78 + ((longlong)(int)uVar12 - (ulonglong)(uVar12 != 0));
      _guard_xfg_dispatch_icall_nop(pwVar11,pwVar4,(longlong)iVar6 * 2);
      pwVar11[iVar6] = 0;
      uVar12 = uVar5;
    }
    if (pwVar4 != (wchar_t *)0x0) {
      FMemory::Free(pwVar4);
    }
  }
  *param_1 = pwVar3;
  *(uint *)(param_1 + 1) = uVar12;
  *(int *)((longlong)param_1 + 0xc) = local_6c;
  pwVar3 = local_68;
joined_r0x000141efaaf3:
  if (pwVar3 != (wint_t *)0x0) {
    FMemory::Free(pwVar3);
  }
  return param_1;
}



// FUNCTION 141efab20 FUN_141efab20 body=410 status=ok
// SIG undefined FUN_141efab20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141efab20(longlong param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  AActor::Serialize();
  FArchive::UsingCustomVersion(param_2,&DAT_1464cdf60);
  if ((((*(byte *)(param_2 + 0x28) & 1) != 0) &&
      (iVar2 = FArchive::CustomVer(param_2,&DAT_1464cdf60), iVar2 < 7)) &&
     (fVar1 = *(float *)(param_1 + 0x47c), 0.0 < fVar1)) {
    local_b8 = 0x3fa00000;
    local_b4 = 0x3fa00000;
    local_b0 = 0x3fa00000;
    local_88 = 0x3fa00000;
    local_84 = 0x3fa00000;
    local_80 = 0x3fa00000;
    local_58 = 0x3fa00000;
    local_54 = 0x3fa00000;
    local_50 = 0x3fa00000;
    local_28 = 0x3fa00000;
    local_24 = 0x3fa00000;
    local_20 = 0x3fa00000;
    local_d8 = 0x3fe000003fe00000;
    uStack_d0 = 0x3fe000003fe00000;
    local_a8 = 0x4000000040000000;
    uStack_a0 = 0x3fd3333340000000;
    local_c8 = 0x3fd70a3d3fe00000;
    uStack_c0 = 0x3fb333333fc66666;
    local_78 = 0x3fcccccd3fe00000;
    uStack_70 = 0x3fa000003fa00000;
    local_98 = 0x3fa000003faccccd;
    uStack_90 = 0x3fa000003fa00000;
    local_48 = 0x3fe6666640000000;
    uStack_40 = 0x3fa666663fc66666;
    local_68 = 0x3fa000003fa00000;
    uStack_60 = 0x3fa000003fa00000;
    local_38 = 0x3fa000003fa00000;
    uStack_30 = 0x3fa000003fa00000;
    if (*(char *)(param_1 + 0x480) == '\0') {
      lVar4 = (longlong)(int)ROUND(fVar1 + fVar1 + 0.5) >> 1;
      *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)((longlong)&local_d8 + lVar4 * 4);
      uVar3 = *(undefined4 *)((longlong)&local_a8 + lVar4 * 4);
    }
    else {
      if (*(char *)(param_1 + 0x480) != '\x01') {
        return;
      }
      lVar4 = (longlong)(int)ROUND(fVar1 + fVar1 + 0.5) >> 1;
      *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)((longlong)&local_78 + lVar4 * 4);
      uVar3 = *(undefined4 *)((longlong)&local_48 + lVar4 * 4);
    }
    *(undefined4 *)(param_1 + 0x48c) = uVar3;
  }
  return;
}



// FUNCTION 141efacc0 FUN_141efacc0 body=1480 status=ok
// SIG undefined FUN_141efacc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141efacc0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  void *_Src;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *_Src_00;
  char cVar10;
  int iVar11;
  BOOL BVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  longlong *plVar16;
  undefined1 auStack_128 [32];
  undefined2 *local_108;
  char local_f8;
  char local_f7 [7];
  undefined8 local_f0;
  longlong *plStack_e8;
  longlong local_e0;
  undefined8 *local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 *local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  int local_a8;
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  FUN_142396660(param_1,param_2);
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     (iVar11 = FArchive::CustomVer(param_2,&DAT_1464b00e8), iVar11 < 9)) {
    lVar13 = operator_new(0x30);
    plVar16 = (longlong *)0x0;
    plVar14 = plVar16;
    if (lVar13 != 0) {
      plVar14 = (longlong *)FUN_14217c900(lVar13);
    }
    local_d0 = *plVar14;
    FUN_14253eb20(param_2,&local_d0);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar4 = (longlong *)*plVar14;
      *plVar14 = local_d0;
      if (local_d0 != 0) {
        *(int *)(local_d0 + 0x1c) = *(int *)(local_d0 + 0x1c) + 1;
      }
      if (plVar4 != (longlong *)0x0) {
        piVar1 = (int *)((longlong)plVar4 + 0x1c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x38))();
        }
      }
    }
    local_c8 = plVar14[1];
    FUN_14276dcd0(param_2,&local_c8);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar4 = (longlong *)plVar14[1];
      plVar14[1] = local_c8;
      if (local_c8 != 0) {
        *(int *)(local_c8 + 0x18) = *(int *)(local_c8 + 0x18) + 1;
      }
      if (plVar4 != (longlong *)0x0) {
        plVar2 = plVar4 + 3;
        *(int *)plVar2 = (int)*plVar2 + -1;
        if ((int)*plVar2 == 0) {
          (**(code **)(*plVar4 + 0x38))();
        }
      }
    }
    plVar4 = plVar14 + 2;
    if (plVar4 != (longlong *)(param_1 + 0x7e0)) {
      iVar11 = *(int *)(param_1 + 0x7e8);
      _Src = *(void **)(param_1 + 0x7e0);
      *(int *)(plVar14 + 3) = iVar11;
      if ((iVar11 == 0) && (*(int *)((longlong)plVar14 + 0x1c) == 0)) {
        *(undefined4 *)((longlong)plVar14 + 0x1c) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar4,iVar11);
        _guard_xfg_dispatch_icall_nop((void *)*plVar4,_Src,(longlong)iVar11 << 4);
      }
    }
    local_c0 = (undefined4 *)0x0;
    local_b8 = 1;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_c0,0);
    _Src_00 = local_c0;
    uVar6 = *(undefined4 *)(param_1 + 2000);
    uVar7 = *(undefined4 *)(param_1 + 0x7d4);
    uVar8 = *(undefined4 *)(param_1 + 0x7d8);
    uVar9 = *(undefined4 *)(param_1 + 0x7dc);
    local_b0 = (longlong *)0x0;
    *(longlong **)(local_c0 + 4) = plVar14;
    lVar13 = (longlong)(int)local_b8;
    local_a8 = (int)local_b8;
    *local_c0 = uVar6;
    local_c0[1] = uVar7;
    local_c0[2] = uVar8;
    local_c0[3] = uVar9;
    if ((int)local_b8 != 0) {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_b0,local_b8 & 0xffffffff,0);
      plVar16 = local_b0;
      _guard_xfg_dispatch_icall_nop(local_b0,_Src_00,lVar13 * 0x18);
    }
    iVar11 = local_a8;
    BVar12 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1465334f8);
    if (BVar12 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1465334f8);
    }
    DAT_146533520 = param_1;
    _DAT_146533530 = iVar11;
    if ((iVar11 == 0) && (DAT_146533534 == 0)) {
      DAT_146533534 = 0;
      FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::RemoveAnnotation
                (&PTR_PTR_1465334a0,param_1);
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&DAT_146533528,iVar11);
      _guard_xfg_dispatch_icall_nop(DAT_146533528,plVar16,(longlong)iVar11 * 0x18);
      if (iVar11 == 0) {
        FUObjectAnnotationSparse<FMeshMapBuildLegacyData,1>::RemoveAnnotation
                  (&PTR_PTR_1465334a0,param_1);
      }
      else {
        if (DAT_1465334b0 == DAT_1465334dc) {
          FUObjectArray::AddUObjectDeleteListener(&DAT_1469e91a0,&PTR_PTR_1465334a0);
        }
        local_60 = &DAT_146533528;
        local_68 = &DAT_146533520;
        FUN_141ef2320(&DAT_1465334a8,local_a0,&local_68,0);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1465334f8);
    if (plVar16 != (longlong *)0x0) {
      FMemory::Free(plVar16);
    }
    if (_Src_00 != (undefined4 *)0x0) {
      FMemory::Free(_Src_00);
    }
  }
  if (0x1b2 < (int)param_2[8]) {
    if ((*(uint *)(param_2 + 6) >> 0x16 & 1) == 0) {
      operator<<(param_2,*(undefined8 *)(param_1 + 0x878));
    }
    else {
      plVar16 = (longlong *)param_2[1];
      if ((*(byte *)(param_2 + 5) & 2) == 0) {
        if ((undefined8 *)plVar16[1] < (undefined8 *)*plVar16 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_d8,8);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&local_d8,8);
          }
        }
        else {
          local_d8 = *(undefined8 **)*plVar16;
          *plVar16 = *plVar16 + 8;
        }
        puVar3 = (undefined8 *)(param_1 + 0x878);
        plVar16 = (longlong *)local_d8[1];
        uVar5 = *local_d8;
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
          UNLOCK();
        }
        local_f0 = uVar5;
        plStack_e8 = plVar16;
        if (&local_f0 != puVar3) {
          local_f0 = *puVar3;
          plStack_e8 = *(longlong **)(param_1 + 0x880);
          *puVar3 = uVar5;
          *(longlong **)(param_1 + 0x880) = plVar16;
          local_58 = uVar5;
          plStack_50 = plVar16;
        }
        plVar16 = plStack_e8;
        if (plStack_e8 != (longlong *)0x0) {
          LOCK();
          plVar14 = plStack_e8 + 1;
          lVar13 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plStack_e8)(plStack_e8);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plStack_e8 + 8))(plStack_e8,1);
            }
          }
        }
      }
      else {
        local_e0 = param_1 + 0x878;
        if ((longlong *)plVar16[1] < (longlong *)*plVar16 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_e0,8);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&local_e0,8);
          }
        }
        else {
          local_e0 = *(longlong *)*plVar16;
          *plVar16 = *plVar16 + 8;
        }
      }
    }
  }
  local_f8 = '\0';
  if ((0x122 < (int)param_2[8]) && ((*(uint *)(param_1 + 8) >> 4 & 1) == 0)) {
    if ((param_2[0xe] == 0) && ((*(byte *)(param_2 + 5) & 2) == 0)) {
      local_f8 = '\0';
    }
    else {
      local_f8 = '\x01';
    }
    (**(code **)(*param_2 + 8))(param_2,&local_f8);
    if (local_f8 != '\0') goto LAB_141efb227;
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    return;
  }
  local_98 = *(undefined8 *)(param_1 + 0x18);
  FName::ToString(&local_98,&local_88);
  puVar15 = &DAT_143f3eda8;
  if (local_80 != 0) {
    puVar15 = local_88;
  }
  LowLevelFatalErrorHandler
            ("Unknown",0x185,
             L"This platform requires cooked packages, and this landscape does not contain cooked data %s."
             ,puVar15);
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_90 = *(undefined8 *)(param_1 + 0x18);
  FName::ToString(&local_90,&local_78);
  local_108 = &DAT_143f3eda8;
  if (local_70 != 0) {
    local_108 = local_78;
  }
  FDebug::AssertFailed
            (&DAT_144ee6142,"Unknown",0x185,
             L"This platform requires cooked packages, and this landscape does not contain cooked data %s."
            );
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_f8 == '\0') {
    return;
  }
LAB_141efb227:
  plVar16 = (longlong *)param_2[0xe];
  if ((plVar16 == (longlong *)0x0) ||
     (cVar10 = (**(code **)(*plVar16 + 0xc0))(plVar16,0xb), cVar10 == '\0')) {
    local_f7[0] = '\0';
  }
  else {
    local_f7[0] = '\x01';
  }
  (**(code **)(*param_2 + 8))(param_2,local_f7);
  if (local_f7[0] != '\0') {
    FUN_140d25120(param_2,param_1 + 0x858);
  }
  return;
}



// FUNCTION 141efb290 FUN_141efb290 body=291 status=ok
// SIG undefined FUN_141efb290(void)

void FUN_141efb290(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  char local_res10 [8];
  longlong local_18 [2];
  
  FUN_142396660();
  if ((int)param_2[8] < 0x15b) {
    return;
  }
  if ((param_2[0xe] == 0) && ((*(byte *)(param_2 + 5) & 2) == 0)) {
    local_res10[0] = '\0';
  }
  else {
    local_res10[0] = '\x01';
  }
  (**(code **)(*param_2 + 8))(param_2,local_res10);
  if (local_res10[0] == '\0') {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      return;
    }
    puVar1 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_18,0);
    puVar2 = &DAT_143f3eda8;
    if (*(int *)(puVar1 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar1;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x5b4,
               L"This platform requires cooked packages, and physX data was not cooked into %s.",
               puVar3);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    puVar1 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_18,0);
    if (*(int *)(puVar1 + 1) != 0) {
      puVar2 = (undefined2 *)*puVar1;
    }
    FDebug::AssertFailed
              (&DAT_144ee6144,"Unknown",0x5b4,
               L"This platform requires cooked packages, and physX data was not cooked into %s.",
               puVar2);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (local_res10[0] == '\0') {
      return;
    }
  }
  FUN_141ef6e70(param_1 + 0x770,param_2,0);
  return;
}



// FUNCTION 141efb3c0 FUN_141efb3c0 body=501 status=ok
// SIG undefined FUN_141efb3c0(void)

void FUN_141efb3c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  char local_res10 [8];
  char local_res18 [8];
  longlong local_18 [2];
  
  FUN_142396660();
  puVar2 = &DAT_143f3eda8;
  if ((int)param_2[8] < 0x15b) goto LAB_141efb4d8;
  if ((param_2[0xe] == 0) && ((*(byte *)(param_2 + 5) & 2) == 0)) {
    local_res10[0] = '\0';
  }
  else {
    local_res10[0] = '\x01';
  }
  (**(code **)(*param_2 + 8))(param_2,local_res10);
  if (local_res10[0] == '\0') {
    if ((*(byte *)(param_2 + 5) & 1) == 0) goto LAB_141efb4d8;
    puVar1 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_18,0);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar1;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x5b4,
               L"This platform requires cooked packages, and physX data was not cooked into %s.",
               puVar3);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    puVar1 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_18,0);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar1;
    }
    FDebug::AssertFailed
              (&DAT_144ee6144,"Unknown",0x5b4,
               L"This platform requires cooked packages, and physX data was not cooked into %s.",
               puVar3);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (local_res10[0] == '\0') goto LAB_141efb4d8;
  }
  FUN_141ef6e70(param_1 + 0x770,param_2,0);
LAB_141efb4d8:
  local_res18[0] = '\0';
  if (0x104 < (int)param_2[8]) {
    local_res18[0] = param_2[0xe] != 0;
    (**(code **)(*param_2 + 8))(param_2,local_res18);
    if (local_res18[0] != '\0') {
      return;
    }
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    puVar1 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_18,0);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar1;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x5df,
               L"This platform requires cooked packages, and physX data was not cooked into %s.",
               puVar3);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    puVar1 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_18,0);
    if (*(int *)(puVar1 + 1) != 0) {
      puVar2 = (undefined2 *)*puVar1;
    }
    FDebug::AssertFailed
              (&DAT_144ee6145,"Unknown",0x5df,
               L"This platform requires cooked packages, and physX data was not cooked into %s.",
               puVar2);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141efb5c0 FUN_141efb5c0 body=225 status=ok
// SIG undefined FUN_141efb5c0(void)

void FUN_141efb5c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  if (*(char *)(param_1 + 0x77c) != '\0') {
    plVar5 = *(longlong **)(param_1 + 0x4e0);
    plVar1 = plVar5 + *(int *)(param_1 + 0x4e8);
    if (plVar5 != plVar1) {
      do {
        plVar3 = *(longlong **)(*plVar5 + 0x728);
        uVar2 = (ulonglong)*(int *)(*plVar5 + 0x730);
        uVar4 = uVar2 & 0x1fffffffffffffff;
        if (plVar3 + uVar2 < plVar3) {
          uVar4 = 0;
        }
        uVar2 = 0;
        if (uVar4 != 0) {
          do {
            if (*plVar3 != 0) {
              FUN_1425a2750(*plVar3,param_2,param_3);
            }
            plVar3 = plVar3 + 1;
            uVar2 = uVar2 + 1;
          } while (uVar2 != uVar4);
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar1);
    }
  }
  return;
}



// FUNCTION 141efb6b0 FUN_141efb6b0 body=221 status=ok
// SIG undefined FUN_141efb6b0(void)

void FUN_141efb6b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  if (*(char *)(param_1 + 0x77c) != '\0') {
    plVar5 = *(longlong **)(param_1 + 0x4e0);
    plVar1 = plVar5 + *(int *)(param_1 + 0x4e8);
    if (plVar5 != plVar1) {
      do {
        plVar3 = *(longlong **)(*plVar5 + 0x728);
        uVar2 = (ulonglong)*(int *)(*plVar5 + 0x730);
        uVar4 = uVar2 & 0x1fffffffffffffff;
        if (plVar3 + uVar2 < plVar3) {
          uVar4 = 0;
        }
        uVar2 = 0;
        if (uVar4 != 0) {
          do {
            if (*plVar3 != 0) {
              FUN_1425a28b0(*plVar3,param_2,param_3);
            }
            plVar3 = plVar3 + 1;
            uVar2 = uVar2 + 1;
          } while (uVar2 != uVar4);
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar1);
    }
  }
  return;
}



// FUNCTION 141efb790 FUN_141efb790 body=232 status=ok
// SIG undefined FUN_141efb790(void)

void FUN_141efb790(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(char *)(param_1 + 0x77c) != '\0') {
    plVar5 = *(longlong **)(param_1 + 0x4e0);
    plVar1 = plVar5 + *(int *)(param_1 + 0x4e8);
    if (plVar5 != plVar1) {
      do {
        plVar3 = *(longlong **)(*plVar5 + 0x728);
        uVar2 = (ulonglong)*(int *)(*plVar5 + 0x730);
        uVar4 = uVar2 & 0x1fffffffffffffff;
        if (plVar3 + uVar2 < plVar3) {
          uVar4 = 0;
        }
        uVar2 = 0;
        if (uVar4 != 0) {
          do {
            if (*plVar3 != 0) {
              local_38 = *param_3;
              uStack_34 = param_3[1];
              uStack_30 = param_3[2];
              uStack_2c = param_3[3];
              FUN_1425a2be0(*plVar3,param_2,&local_38);
            }
            plVar3 = plVar3 + 1;
            uVar2 = uVar2 + 1;
          } while (uVar2 != uVar4);
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar1);
    }
  }
  return;
}



// FUNCTION 141efb880 FUN_141efb880 body=91 status=ok
// SIG undefined FUN_141efb880(void)

void FUN_141efb880(longlong param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  *(undefined1 *)(param_4 + 9) = 4;
  if (*(char *)(param_1 + 0x574) != '\0') {
    FUN_141f07420(param_1,param_4);
  }
  FUN_1422409a0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 141efb8f0 read body=91 status=ok
// SIG int read(int _FileHandle, void * _DstBuf, uint _MaxCharCount)

int __cdecl FPhysXInputStream::read(int _FileHandle,void *_DstBuf,uint _MaxCharCount)

{
  uint uVar1;
  undefined4 in_register_0000000c;
  longlong lVar2;
  
  lVar2 = CONCAT44(in_register_0000000c,_FileHandle);
  uVar1 = *(uint *)(lVar2 + 0x14) + _MaxCharCount;
  if (uVar1 <= *(uint *)(lVar2 + 0x10)) {
    ::_guard_xfg_dispatch_icall_nop
              (_DstBuf,(void *)((ulonglong)*(uint *)(lVar2 + 0x14) + *(longlong *)(lVar2 + 8)),
               (ulonglong)_MaxCharCount);
    *(uint *)(lVar2 + 0x14) = uVar1;
    return _MaxCharCount;
  }
  return 0;
}



// FUNCTION 141efb950 AddReferencedObjects<FGuid,ULandscapeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,ULandscapeInfo_*,0>_> body=538 status=ok
// SIG undefined AddReferencedObjects<FGuid,ULandscapeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,ULandscapeInfo_*,0>_>(void)

void FReferenceCollector::
     AddReferencedObjects<FGuid,ULandscapeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,ULandscapeInfo_*,0>_>
               (longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
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
  
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar8 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar3 = *puVar8;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar9 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar9;
      if (bVar4) goto LAB_141efba2e;
      uVar3 = puVar8[lVar5 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
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
    uStack_84 = (iStack_80 - iVar9) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_141efba2e:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar7 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar8 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar6 = puVar8[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar9 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar7 = uVar7 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_141efbaf1;
      uVar6 = puVar8[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (uVar7 - iVar9) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_141efbaf1:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    (**(code **)(*param_1 + 0x38))
              (param_1,*param_2 + (longlong)(int)uStack_5c * 0x20 + 0x10,param_3,param_4);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 141efbb70 FUN_141efbb70 body=589 status=ok
// SIG undefined FUN_141efbb70(void)

int * FUN_141efbb70(longlong *param_1,int *param_2,uint *param_3,undefined1 *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  bool bVar8;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar1 = *(int *)(*param_1 + 4 + (longlong)iVar5 * 0x50);
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar1 * 0x50) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar6 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar6 = *puVar6 | 1 << ((byte)iVar5 & 0x1f);
  puVar6 = (uint *)((longlong)iVar5 * 0x50 + *param_1);
  *puVar6 = *param_3;
  puVar6[1] = param_3[1];
  puVar6[2] = param_3[2];
  puVar6[3] = param_3[3];
  puVar6[4] = param_3[4];
  puVar6[5] = param_3[5];
  puVar6[6] = param_3[6];
  puVar6[7] = param_3[7];
  puVar6[8] = param_3[8];
  puVar6[9] = param_3[9];
  puVar6[10] = param_3[10];
  puVar6[0xb] = param_3[0xb];
  puVar6[0xc] = param_3[0xc];
  *(undefined8 *)(puVar6 + 0xe) = *(undefined8 *)(param_3 + 0xe);
  bVar8 = false;
  *(char *)(puVar6 + 0x10) = (char)param_3[0x10];
  puVar6[0x12] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,puVar6);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)local_res8[0] * 0x50 + *param_1),puVar6,0x48)
      ;
      TSparseArray<TSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_141efbd9b;
    }
  }
  cVar2 = TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar2 == '\0') {
    uVar7 = ((((puVar6[7] << 8 ^ puVar6[6]) << 3 ^ puVar6[9]) << 10 ^ puVar6[8]) << 3 ^ puVar6[3] ^
             puVar6[2] ^ puVar6[1] ^ puVar6[4] ^ *puVar6 ^ puVar6[5]) & (int)param_1[9] - 1U;
    puVar6[0x13] = uVar7;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar6[0x12] = *(uint *)((longlong)plVar4 +
                            ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_141efbd9b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 141efbdc0 FUN_141efbdc0 body=1139 status=ok
// SIG undefined FUN_141efbdc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141efbdc0(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_1b8 [32];
  char local_198;
  longlong *local_190;
  int local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  int local_160;
  int local_15c;
  longlong *local_158;
  int iStack_150;
  uint uStack_14c;
  uint *local_148;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *(undefined4 *)(param_2 + 200) = 0;
  local_198 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0xcc)) {
    FUN_140615c30(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_184 = 1;
  local_190 = (longlong *)(param_1 + 0x2b0);
  local_168 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_180 = (uint *)(param_1 + 0x2c0);
  local_15c = 0;
  iVar13 = 0;
  local_188 = 0;
  uStack_174 = 0;
  iStack_170 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar12 = *puVar10;
    iStack_170 = 0;
    local_188 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_188;
      iStack_170 = iStack_170 + 0x20;
      iVar5 = local_188 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_188;
      local_188 = iVar5;
      if (bVar3) goto LAB_141efbeef;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_184 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_184 != 0) {
      for (; uStack_184 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_184 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_174 = (iStack_170 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_174) {
LAB_141efbeef:
      uStack_174 = uVar1;
    }
  }
  local_178 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_128 = CONCAT44(uStack_184,local_188);
  uStack_140 = 0xffffffff;
  uStack_13c = uStack_174;
  local_138 = CONCAT44(uStack_16c,iStack_170);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_150 = local_188;
  uStack_14c = uStack_184;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_141efbfaf;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uVar12 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uVar12) {
LAB_141efbfaf:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_148 = puStack_180;
  local_130 = local_190;
  puStack_120 = puStack_180;
  uStack_110 = local_138;
  local_158 = local_190;
  uStack_118 = uStack_140;
  uStack_114 = uStack_13c;
  while( true ) {
    if ((uStack_13c == uVar12) && (local_148 == puStack_180)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_158 == local_190)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_158 + (longlong)(int)uStack_13c * 0x10);
    if (lVar7 != 0) {
      lVar4 = AUGCompanionAIController::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_2 + 200);
        *(int *)(param_2 + 200) = iVar2 + 1;
        if (*(int *)(param_2 + 0xcc) < iVar2 + 1) {
          TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
          ::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0xc0);
        if (*(longlong *)(param_2 + 0xc0) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_198 != '\0') && (lVar7 != 0)) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_160 = iVar13 + 1;
        if (iVar5 < local_160) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,iVar13);
          plVar11 = local_168;
          iVar5 = local_15c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_160;
      }
    }
    uStack_140 = uStack_140 & ~uStack_14c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_150);
  }
  if (local_198 != '\0') {
    uVar8 = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_141efbdc0(*(longlong *)(*plVar14 + 0x2d8),local_108,1);
          iVar13 = (int)local_40;
          lVar7 = (longlong)(int)local_40;
          if ((int)local_40 != 0) {
            iVar5 = *(int *)(param_2 + 200);
            if (*(int *)(param_2 + 0xcc) < (int)local_40 + iVar5) {
              FUN_140615c30(param_2);
              iVar5 = *(int *)(param_2 + 200);
            }
            _Src = local_108;
            if (local_48 != (undefined1 *)0x0) {
              _Src = local_48;
            }
            lVar4 = *(longlong *)(param_2 + 0xc0);
            if (*(longlong *)(param_2 + 0xc0) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + iVar13;
            local_40 = local_40 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 141efc240 FUN_141efc240 body=337 status=ok
// SIG undefined FUN_141efc240(void)

undefined8 * FUN_141efc240(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  FUN_141784790(param_2,L"Sprite");
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Sprite",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar1,0,param_2);
  FUN_14221fbd0(param_1,param_2);
  *param_1 = &PTR_FUN_144eec418;
  puVar1 = (undefined8 *)FName::FName(local_res10,L"RootComponent0",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = uVar3;
  *param_1 = &PTR_FUN_144eecd78;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GizmoRendererComponent0",1);
  uVar3 = *puVar1;
  uVar2 = AGImpulseWindProjectile::GetPrivateStaticClass();
  plVar4 = (longlong *)FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  (**(code **)(*plVar4 + 0x640))(plVar4,DAT_146aefc70);
  param_1[0x2d] = plVar4;
  return param_1;
}



// FUNCTION 141efc3a0 ALandscapeGizmoActor body=112 status=ok
// SIG undefined ALandscapeGizmoActor(void)

undefined8 * ALandscapeGizmoActor::ALandscapeGizmoActor(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144eec418;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RootComponent0",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 141efc410 FUN_141efc410 body=1609 status=ok
// SIG undefined FUN_141efc410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_141efc410(char *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                    undefined8 *param_5,undefined4 param_6,longlong param_7,undefined4 param_8,
                    undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
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
  undefined8 *puVar30;
  longlong lVar31;
  char cVar32;
  undefined4 uVar33;
  longlong lVar34;
  float *pfVar35;
  longlong *plVar36;
  int iVar37;
  longlong lVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  uint local_f8;
  float fStack_f4;
  float fStack_f0;
  uint uStack_ec;
  float local_e8;
  uint uStack_e4;
  float fStack_e0;
  uint uStack_dc;
  float local_d8;
  float fStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  undefined1 local_b8 [32];
  undefined1 local_98 [144];
  
  puVar30 = param_5;
  FUN_141efcb50(param_1,param_2,param_3,param_5,param_6,param_8,param_9,param_10,
                *(byte *)(param_4 + 0x38) & 1);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_3 + 0x878);
  lVar34 = *(longlong *)(param_3 + 0x880);
  *(longlong *)(param_1 + 0xa8) = lVar34;
  if (lVar34 != 0) {
    LOCK();
    *(int *)(lVar34 + 8) = *(int *)(lVar34 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_3 + 0x878);
  lVar34 = *(longlong *)(param_3 + 0x878);
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(lVar34 + 0x10,&param_5,param_4);
  lVar31 = param_7;
  lVar38 = 0;
  if ((int)param_5 != -1) {
    lVar38 = (longlong)(int)param_5 * 0x20 + *(longlong *)(lVar34 + 0x10);
  }
  lVar34 = lVar38 + 8;
  if (lVar38 == 0) {
    lVar34 = 0;
  }
  *(longlong *)(param_1 + 0xb8) = lVar34;
  *(int *)(param_1 + 0xc0) = *(int *)(param_3 + 0x6f8) + 1;
  param_1[200] = *(char *)(puVar30 + 4);
  *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)((longlong)puVar30 + 0x24);
  *(undefined8 *)(param_1 + 0xd4) = *(undefined8 *)((longlong)puVar30 + 0x2c);
  *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)((longlong)puVar30 + 0x34);
  param_1[0xe4] = *(char *)((longlong)puVar30 + 0x3c);
  if (((0.0 < *(float *)(puVar30 + 5) - *(float *)((longlong)puVar30 + 0x24)) ||
      (0.0 < *(float *)(puVar30 + 6) - *(float *)((longlong)puVar30 + 0x2c))) ||
     (0.0 < *(float *)(puVar30 + 7) - *(float *)((longlong)puVar30 + 0x34))) {
    cVar32 = '\x01';
  }
  else {
    cVar32 = '\0';
  }
  param_1[0xe5] = cVar32;
  param_1[0xe6] = *(char *)((longlong)puVar30 + 0x3d);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(puVar30 + 2);
  uVar33 = *(undefined4 *)(param_7 + 0x7b8);
  *(undefined4 *)(param_1 + 0xec) = uVar33;
  *(undefined4 *)(param_1 + 0xf0) = uVar33;
  fVar1 = *(float *)(param_7 + 0x210);
  fVar2 = *(float *)(param_7 + 0x214);
  fVar3 = *(float *)(param_7 + 0x218);
  fVar4 = *(float *)(param_7 + 0x21c);
  fVar39 = fVar2 + fVar2;
  fVar41 = fVar3 + fVar3;
  fVar42 = (fVar1 + fVar1) * fVar1;
  fVar40 = (fVar1 + fVar1) * fVar4;
  fVar5 = *(float *)(param_7 + 0x230);
  fVar6 = *(float *)(param_7 + 0x234);
  fVar7 = *(float *)(param_7 + 0x238);
  fStack_f4 = (fVar41 * fVar4 + fVar39 * fVar1) * fVar5;
  fStack_e0 = (fVar40 + fVar41 * fVar2) * fVar6;
  local_d8 = (fVar39 * fVar4 + fVar41 * fVar1) * fVar7;
  local_e8 = fVar6 * (fVar39 * fVar1 - fVar41 * fVar4);
  fStack_d4 = fVar7 * (fVar41 * fVar2 - fVar40);
  fStack_f0 = fVar5 * (fVar41 * fVar1 - fVar39 * fVar4);
  local_f8 = (uint)((_DAT_146ac44a0 - (fVar41 * fVar3 + fVar39 * fVar2)) * fVar5) & _DAT_146ac4490;
  uStack_e4 = (uint)((fRam0000000146ac44a4 - (fVar41 * fVar3 + fVar42)) * fVar6) &
              uRam0000000146ac4494;
  uStack_d0 = (uint)((fRam0000000146ac44a8 - (fVar39 * fVar2 + fVar42)) * fVar7) &
              uRam0000000146ac4498;
  uStack_ec = (uint)((fRam0000000146ac44ac - (fVar42 + fVar42)) * *(float *)(param_7 + 0x23c)) &
              uRam0000000146ac449c;
  local_c8 = *(undefined4 *)(param_7 + 0x220);
  uStack_c4 = *(undefined4 *)(param_7 + 0x224);
  uStack_c0 = *(undefined4 *)(param_7 + 0x228);
  fStack_bc = fRam0000000146ac44ac;
  uStack_dc = uStack_ec;
  uStack_cc = uStack_ec;
  pfVar35 = (float *)FMatrix::Inverse(&local_f8,local_98);
  fVar1 = *(float *)(param_1 + 0x30);
  fVar2 = *(float *)(param_1 + 0x34);
  fVar3 = *(float *)(param_1 + 0x38);
  fVar4 = *(float *)(param_1 + 0x3c);
  fVar5 = pfVar35[4];
  fVar6 = pfVar35[5];
  fVar7 = pfVar35[6];
  fVar39 = pfVar35[7];
  fVar40 = *pfVar35;
  fVar41 = pfVar35[1];
  fVar42 = pfVar35[2];
  fVar9 = pfVar35[3];
  fVar10 = pfVar35[8];
  fVar11 = pfVar35[9];
  fVar12 = pfVar35[10];
  fVar13 = pfVar35[0xb];
  fVar14 = pfVar35[0xc];
  fVar15 = pfVar35[0xd];
  fVar16 = pfVar35[0xe];
  fVar17 = pfVar35[0xf];
  fVar18 = *(float *)(param_1 + 0x40);
  fVar19 = *(float *)(param_1 + 0x44);
  fVar20 = *(float *)(param_1 + 0x48);
  fVar21 = *(float *)(param_1 + 0x4c);
  fVar22 = *(float *)(param_1 + 0x50);
  fVar23 = *(float *)(param_1 + 0x54);
  fVar24 = *(float *)(param_1 + 0x58);
  fVar25 = *(float *)(param_1 + 0x5c);
  fVar26 = *(float *)(param_1 + 0x20);
  fVar27 = *(float *)(param_1 + 0x24);
  fVar28 = *(float *)(param_1 + 0x28);
  fVar29 = *(float *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x110) = fVar1 * fVar40 + fVar2 * fVar5 + fVar3 * fVar10 + fVar4 * fVar14;
  *(float *)(param_1 + 0x114) = fVar1 * fVar41 + fVar2 * fVar6 + fVar3 * fVar11 + fVar4 * fVar15;
  *(float *)(param_1 + 0x118) = fVar1 * fVar42 + fVar2 * fVar7 + fVar3 * fVar12 + fVar4 * fVar16;
  *(float *)(param_1 + 0x11c) = fVar1 * fVar9 + fVar2 * fVar39 + fVar3 * fVar13 + fVar4 * fVar17;
  *(float *)(param_1 + 0x120) = fVar18 * fVar40 + fVar19 * fVar5 + fVar20 * fVar10 + fVar21 * fVar14
  ;
  *(float *)(param_1 + 0x124) = fVar18 * fVar41 + fVar19 * fVar6 + fVar20 * fVar11 + fVar21 * fVar15
  ;
  *(float *)(param_1 + 0x128) = fVar18 * fVar42 + fVar19 * fVar7 + fVar20 * fVar12 + fVar21 * fVar16
  ;
  *(float *)(param_1 + 300) = fVar18 * fVar9 + fVar19 * fVar39 + fVar20 * fVar13 + fVar21 * fVar17;
  *(float *)(param_1 + 0x130) = fVar22 * fVar40 + fVar23 * fVar5 + fVar24 * fVar10 + fVar25 * fVar14
  ;
  *(float *)(param_1 + 0x134) = fVar22 * fVar41 + fVar23 * fVar6 + fVar24 * fVar11 + fVar25 * fVar15
  ;
  *(float *)(param_1 + 0x138) = fVar22 * fVar42 + fVar23 * fVar7 + fVar24 * fVar12 + fVar25 * fVar16
  ;
  *(float *)(param_1 + 0x13c) = fVar22 * fVar9 + fVar23 * fVar39 + fVar24 * fVar13 + fVar25 * fVar17
  ;
  *(float *)(param_1 + 0x100) = fVar26 * fVar40 + fVar27 * fVar5 + fVar28 * fVar10 + fVar29 * fVar14
  ;
  *(float *)(param_1 + 0x104) = fVar26 * fVar41 + fVar27 * fVar6 + fVar28 * fVar11 + fVar29 * fVar15
  ;
  *(float *)(param_1 + 0x108) = fVar26 * fVar42 + fVar27 * fVar7 + fVar28 * fVar12 + fVar29 * fVar16
  ;
  *(float *)(param_1 + 0x10c) = fVar26 * fVar9 + fVar27 * fVar39 + fVar28 * fVar13 + fVar29 * fVar17
  ;
  pfVar35 = (float *)UStaticMesh::GetBounds(*puVar30,local_b8);
  fVar1 = *pfVar35;
  fVar2 = pfVar35[2];
  fVar3 = pfVar35[1];
  fVar4 = pfVar35[5];
  fVar5 = pfVar35[3];
  fVar6 = pfVar35[5];
  fVar7 = pfVar35[4];
  *(ulonglong *)(param_1 + 0x140) = CONCAT44(fVar3 - pfVar35[4],fVar1 - pfVar35[3]);
  *(float *)(param_1 + 0x148) = fVar2 - fVar6;
  *(ulonglong *)(param_1 + 0x14c) = CONCAT44(fVar3 + fVar7,fVar1 + fVar5);
  *(float *)(param_1 + 0x154) = fVar2 + fVar4;
  param_1[0x158] = '\x01';
  uVar33 = FUN_1424c0700(lVar31);
  *(undefined4 *)(param_1 + 0x15c) = uVar33;
  param_1[0x160] = '\0';
  param_1[0x161] = '\0';
  param_1[0x162] = '\0';
  param_1[0x163] = '\0';
  param_1[0x164] = '\0';
  param_1[0x165] = '\0';
  param_1[0x166] = '\0';
  param_1[0x167] = '\0';
  param_1[0x168] = '\0';
  param_1[0x169] = '\0';
  param_1[0x16a] = '\0';
  param_1[0x16b] = '\0';
  param_1[0x16c] = '\0';
  param_1[0x16d] = '\0';
  param_1[0x16e] = '\0';
  param_1[0x16f] = '\0';
  *(undefined4 *)(param_1 + 0x17c) = param_11;
  param_1[0x170] = '\0';
  param_1[0x171] = '\0';
  param_1[0x172] = '\0';
  param_1[0x173] = '\0';
  param_1[0x174] = '\0';
  param_1[0x175] = '\0';
  param_1[0x176] = '\0';
  param_1[0x177] = '\0';
  param_1[0x178] = '\0';
  param_1[0x179] = '\0';
  param_1[0x17a] = '\0';
  param_1[0x17b] = '\0';
  param_1[0x180] = *(char *)((longlong)puVar30 + 0x3e);
  *(undefined4 *)(param_1 + 0x184) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x188) = DAT_1468b5d88._4_4_;
  *(undefined4 *)(param_1 + 0x18c) = DAT_1464aa770;
  *(undefined4 *)(param_1 + 400) = DAT_1464aa774;
  *(undefined4 *)(param_1 + 0x194) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x198) = DAT_1468b5d88._4_4_;
  *(undefined4 *)(param_1 + 0x19c) = DAT_1464aa770;
  *(undefined4 *)(param_1 + 0x1a0) = DAT_1464aa774;
  *(undefined4 *)(param_1 + 0x1a4) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x1a8) = DAT_1468b5d88._4_4_;
  *(undefined4 *)(param_1 + 0x1ac) = DAT_1464aa770;
  *(undefined4 *)(param_1 + 0x1b0) = DAT_1464aa774;
  plVar36 = (longlong *)(param_1 + 0x1b8);
  param_1[0x1b4] = *(char *)((longlong)puVar30 + 0x43);
  *plVar36 = 0;
  param_1[0x1c0] = '\0';
  param_1[0x1c1] = '\0';
  param_1[0x1c2] = '\0';
  param_1[0x1c3] = '\0';
  param_1[0x1c4] = '\0';
  param_1[0x1c5] = '\0';
  param_1[0x1c6] = '\0';
  param_1[0x1c7] = '\0';
  param_1[0x1c8] = '\0';
  param_1[0x1c9] = '\0';
  param_1[0x1ca] = '\0';
  param_1[0x1cb] = '\0';
  param_1[0x1cc] = '\0';
  param_1[0x1cd] = '\0';
  param_1[0x1ce] = '\0';
  param_1[0x1cf] = '\0';
  param_1[0x1d0] = '\0';
  param_1[0x1d1] = '\0';
  param_1[0x1d2] = '\0';
  param_1[0x1d3] = '\0';
  param_1[0x1d4] = '\0';
  param_1[0x1d5] = '\0';
  param_1[0x1d6] = '\0';
  param_1[0x1d7] = '\0';
  param_1[0x1d8] = '\0';
  param_1[0x1d9] = '\0';
  param_1[0x1da] = '\0';
  param_1[0x1db] = '\0';
  param_1[0x1dc] = '\0';
  param_1[0x1dd] = '\0';
  param_1[0x1de] = '\0';
  param_1[0x1df] = '\0';
  param_1[0x1e0] = '\0';
  param_1[0x1e1] = '\0';
  param_1[0x1e2] = '\0';
  param_1[0x1e3] = '\0';
  param_1[0x1e4] = '\0';
  param_1[0x1e5] = '\0';
  param_1[0x1e6] = '\0';
  param_1[0x1e7] = '\0';
  param_1[0x1e8] = '\0';
  param_1[0x1e9] = '\0';
  param_1[0x1ea] = '\0';
  param_1[0x1eb] = '\0';
  param_1[0x1ec] = '\x01';
  FStaticMeshInstanceData::AllocateBuffers(plVar36,0,0);
  param_1[0x1f0] = '\0';
  param_1[0x1f1] = '\0';
  param_1[0x1f2] = '\0';
  param_1[499] = '\0';
  param_1[500] = '\0';
  param_1[0x1f5] = '\0';
  param_1[0x1f6] = '\0';
  param_1[0x1f7] = '\0';
  param_1[0x1f8] = '\0';
  param_1[0x1f9] = '\0';
  param_1[0x1fa] = '\0';
  param_1[0x1fb] = '\0';
  param_1[0x1fc] = '\0';
  param_1[0x1fd] = '\0';
  param_1[0x1fe] = '\0';
  param_1[0x1ff] = '\0';
  param_1[0x200] = '\0';
  param_1[0x201] = '\0';
  param_1[0x202] = '\0';
  param_1[0x203] = '\0';
  if (((*param_1 == '\0') || (*(longlong *)(param_1 + 0xb8) == 0)) ||
     ((iVar37 = *(int *)(param_1 + 0xc0) * *(int *)(param_1 + 0xc0),
      *(int *)(*(longlong *)(param_1 + 0xb8) + 8) != iVar37 ||
      (*(int *)(*(longlong *)(param_1 + 0xb0) + 8) != iVar37)))) {
    cVar32 = '\0';
  }
  else {
    cVar32 = '\x01';
  }
  cVar8 = param_1[0x1b4];
  *param_1 = cVar32;
  if ((longlong *)*plVar36 != (longlong *)0x0) {
    plVar36 = (longlong *)(**(code **)(*(longlong *)*plVar36 + 0x38))();
    (**(code **)(*plVar36 + 0x28))(plVar36,cVar8);
  }
  if (*(longlong **)(param_1 + 0x1d8) != (longlong *)0x0) {
    plVar36 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x38))();
    (**(code **)(*plVar36 + 0x28))(plVar36,cVar8);
  }
  if (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0) {
    plVar36 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x38))();
    (**(code **)(*plVar36 + 0x28))(plVar36,cVar8);
  }
  if (param_1[0x180] != '\0') {
    FUN_141f05420(param_1,param_3);
  }
  return param_1;
}



// FUNCTION 141efca60 FUN_141efca60 body=237 status=ok
// SIG undefined FUN_141efca60(void)

undefined8 * FUN_141efca60(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FVector,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar2,(longlong)iVar1 * 0xc);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 2,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[2],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined1 *)((longlong)param_1 + 0x3c) = *(undefined1 *)((longlong)param_2 + 0x3c);
  *(undefined1 *)((longlong)param_1 + 0x3d) = *(undefined1 *)((longlong)param_2 + 0x3d);
  *(undefined1 *)((longlong)param_1 + 0x3e) = *(undefined1 *)((longlong)param_2 + 0x3e);
  *(undefined1 *)((longlong)param_1 + 0x3f) = *(undefined1 *)((longlong)param_2 + 0x3f);
  return param_1;
}



// FUNCTION 141efcb50 FUN_141efcb50 body=1077 status=ok
// SIG undefined FUN_141efcb50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_141efcb50(char *param_1,longlong param_2,longlong param_3,longlong param_4,
                    undefined8 param_5,int param_6,int param_7,int param_8,char param_9)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float *pfVar8;
  char cVar9;
  DWORD DVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  undefined1 local_res8 [8];
  undefined8 local_58;
  undefined4 local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  *param_1 = '\x01';
  pfVar8 = DAT_146ac4580;
  if (param_9 == '\0') {
    fVar15 = 1.0;
  }
  else {
    cVar9 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar9 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar10 = GetCurrentThreadId();
      if (DVar10 != DAT_1468c21c0) {
        fVar15 = pfVar8[1];
        goto LAB_141efcbdb;
      }
    }
    fVar15 = *pfVar8;
  }
LAB_141efcbdb:
  *(float *)(param_1 + 4) = fVar15 * *(float *)(param_4 + 8);
  lVar14 = *(longlong *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar14 + 0x204);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar14 + 0x20c);
  lVar14 = *(longlong *)(param_2 + 0x168);
  if (lVar14 == 0) {
    local_58 = _DAT_1468b5d90;
    local_50 = DAT_1468b5d98;
  }
  else {
    local_58 = *(undefined8 *)(lVar14 + 0x220);
    local_50 = *(undefined4 *)(lVar14 + 0x228);
  }
  *(undefined8 *)(param_1 + 0x14) = local_58;
  *(undefined4 *)(param_1 + 0x1c) = local_50;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x470);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x474);
  puVar12 = (undefined4 *)FUN_141ef85c0(param_3,local_res8);
  *(undefined4 *)(param_1 + 0x60) = *puVar12;
  iVar11 = puVar12[1];
  *(int *)(param_1 + 100) = iVar11;
  iVar2 = *(int *)(param_3 + 0x6f8);
  fVar15 = *(float *)(param_1 + 8);
  fVar1 = *(float *)(param_1 + 0xc);
  *(int *)(param_1 + 0x70) = iVar2;
  *(ulonglong *)(param_1 + 0x74) =
       CONCAT44((float)iVar11 * fVar1,(float)*(int *)(param_1 + 0x60) * fVar15);
  param_1[0x7c] = '\0';
  param_1[0x7d] = '\0';
  param_1[0x7e] = '\0';
  param_1[0x7f] = '\0';
  *(ulonglong *)(param_1 + 0x80) =
       CONCAT44((float)(iVar11 + iVar2) * fVar1 - *(float *)(param_1 + 0x78),
                (float)(*(int *)(param_1 + 0x60) + iVar2) * fVar15 - *(float *)(param_1 + 0x74));
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x7c) ^ 0x80000000;
  local_50 = *(undefined4 *)(param_1 + 0x7c);
  fVar16 = SQRT(ABS(*(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x80) *
                    *(float *)(param_1 + 4) * 1e-06));
  *(ulonglong *)(param_1 + 0x8c) =
       CONCAT44(*(float *)(param_1 + 0x78) - (float)*(int *)(param_1 + 0x6c) * fVar1,
                *(float *)(param_1 + 0x74) - (float)*(int *)(param_1 + 0x68) * fVar15);
  *(undefined4 *)(param_1 + 0x94) = local_50;
  iVar11 = -((int)ROUND(-0.5 - (fVar16 + fVar16)) >> 1);
  *(int *)(param_1 + 0x98) = iVar11;
  if (iVar11 == 0) {
    *param_1 = '\0';
  }
  lVar14 = *(longlong *)(param_2 + 0x168);
  if (lVar14 != 0) {
    local_48 = *(float *)(lVar14 + 0x210);
    fStack_44 = *(float *)(lVar14 + 0x214);
    fStack_40 = *(float *)(lVar14 + 0x218);
    fStack_3c = *(float *)(lVar14 + 0x21c);
    auVar17._4_4_ = -(uint)(*(float *)(lVar14 + 0x254) != fStack_44);
    auVar17._0_4_ = -(uint)(*(float *)(lVar14 + 0x250) != local_48);
    auVar17._8_4_ = -(uint)(*(float *)(lVar14 + 600) != fStack_40);
    auVar17._12_4_ = -(uint)(*(float *)(lVar14 + 0x25c) != fStack_3c);
    iVar11 = movmskps(iVar11,auVar17);
    if (iVar11 != 0) {
      *(float *)(lVar14 + 0x250) = local_48;
      *(float *)(lVar14 + 0x254) = fStack_44;
      *(float *)(lVar14 + 600) = fStack_40;
      *(float *)(lVar14 + 0x25c) = fStack_3c;
      puVar13 = (undefined8 *)FQuat::Rotator(&local_48,&local_58);
      *(undefined8 *)(lVar14 + 0x260) = *puVar13;
      *(undefined4 *)(lVar14 + 0x268) = *(undefined4 *)(puVar13 + 1);
      lVar14 = *(longlong *)(param_2 + 0x168);
    }
  }
  fVar7 = fRam0000000146ac44ac;
  fVar15 = *(float *)(lVar14 + 0x210);
  fVar1 = *(float *)(lVar14 + 0x214);
  fVar16 = *(float *)(lVar14 + 0x218);
  fVar3 = *(float *)(lVar14 + 0x21c);
  fVar18 = fVar1 + fVar1;
  fVar19 = fVar16 + fVar16;
  fVar24 = fVar15 * (fVar15 + fVar15);
  fVar20 = fVar3 * (fVar15 + fVar15);
  uVar21 = (uint)(fRam0000000146ac44a4 - (fVar16 * fVar19 + fVar24)) & uRam0000000146ac4494;
  uVar22 = (uint)(fRam0000000146ac44a8 - (fVar1 * fVar18 + fVar24)) & uRam0000000146ac4498;
  uVar23 = (uint)(fRam0000000146ac44ac - (fVar24 + fVar24)) & uRam0000000146ac449c;
  uVar4 = *(undefined4 *)(lVar14 + 0x220);
  uVar5 = *(undefined4 *)(lVar14 + 0x224);
  uVar6 = *(undefined4 *)(lVar14 + 0x228);
  *(uint *)(param_1 + 0x20) =
       (uint)(_DAT_146ac44a0 - (fVar16 * fVar19 + fVar1 * fVar18)) & _DAT_146ac4490;
  *(float *)(param_1 + 0x24) = fVar3 * fVar19 + fVar15 * fVar18;
  *(float *)(param_1 + 0x28) = fVar15 * fVar19 - fVar3 * fVar18;
  *(uint *)(param_1 + 0x2c) = uVar23;
  *(float *)(param_1 + 0x30) = fVar15 * fVar18 - fVar3 * fVar19;
  *(uint *)(param_1 + 0x34) = uVar21;
  *(float *)(param_1 + 0x38) = fVar20 + fVar1 * fVar19;
  *(uint *)(param_1 + 0x3c) = uVar23;
  *(float *)(param_1 + 0x40) = fVar3 * fVar18 + fVar15 * fVar19;
  *(float *)(param_1 + 0x44) = fVar1 * fVar19 - fVar20;
  *(uint *)(param_1 + 0x48) = uVar22;
  *(uint *)(param_1 + 0x4c) = uVar23;
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(undefined4 *)(param_1 + 0x58) = uVar6;
  *(float *)(param_1 + 0x5c) = fVar7;
  if ((*param_1 != '\0') && (param_6 != 1)) {
    fVar16 = 1.0 / (float)param_6;
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) / param_6;
    fVar15 = *(float *)(param_1 + 0x80);
    fVar1 = *(float *)(param_1 + 0x84);
    *(float *)(param_1 + 0x80) = fVar16 * fVar15;
    *(float *)(param_1 + 0x84) = fVar16 * fVar1;
    *(float *)(param_1 + 0x88) = fVar16 * *(float *)(param_1 + 0x88);
    *(float *)(param_1 + 0x74) = (float)param_7 * fVar16 * fVar15 + *(float *)(param_1 + 0x74);
    *(float *)(param_1 + 0x78) = (float)param_8 * fVar16 * fVar1 + *(float *)(param_1 + 0x78);
  }
  return param_1;
}



// FUNCTION 141efcf90 FUN_141efcf90 body=87 status=ok
// SIG undefined FUN_141efcf90(void)

undefined8 * FUN_141efcf90(undefined8 *param_1)

{
  FUN_14237eb90();
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 4;
  *param_1 = &PTR__scalar_deleting_destructor__144eed460;
  param_1[5] = &PTR_LAB_144280e10;
  param_1[0x5a] = &PTR_LAB_144280e40;
  FUN_142717130(param_1,DAT_146aefc60);
  return param_1;
}



// FUNCTION 141efcff0 ULandscapeGrassType body=81 status=ok
// SIG undefined ULandscapeGrassType(void)

undefined8 * ULandscapeGrassType::ULandscapeGrassType(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144eedfc0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
  *(undefined4 *)(param_1 + 9) = 0x43c80000;
  *(undefined4 *)(param_1 + 10) = 10000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 10000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined2 *)(param_1 + 0xb) = 0x101;
  return param_1;
}



// FUNCTION 141efd050 ULandscapeInfoMap body=72 status=ok
// SIG undefined ULandscapeInfoMap(void)

undefined8 * ULandscapeInfoMap::ULandscapeInfoMap(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144eecb00;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 141efd0a0 FUN_141efd0a0 body=290 status=ok
// SIG undefined FUN_141efd0a0(void)

undefined8 * FUN_141efd0a0(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  FUN_14255dee0();
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_144eee238;
  pvVar2 = ThreadLocalStoragePointer;
  param_1[8] = 0;
  param_1[9] = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar3 * 8) + 0x38) < DAT_146ac4708) {
    _Init_thread_header(&DAT_146ac4708);
    if (DAT_146ac4708 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146ac46e8,L"Landscape",L"Landscape",L"Landscape");
      FName::FName(&DAT_146ac4700,"Grass",1);
      atexit(FUN_143ea2220);
      _Init_thread_footer(&DAT_146ac4708);
    }
  }
  iVar1 = *(int *)(param_1 + 9);
  *(int *)(param_1 + 9) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x4c) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 8,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x40 + param_1[8]);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = DAT_146ac4700;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    *(undefined4 *)(puVar4 + 6) = 0;
    puVar4[7] = 0;
  }
  return param_1;
}



// FUNCTION 141efd1d0 operator= body=98 status=ok
// SIG undefined operator=(void)

undefined2 *
FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>::operator=
          (undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  return param_1;
}



// FUNCTION 141efd240 FUN_141efd240 body=951 status=ok
// SIG undefined FUN_141efd240(void)

longlong * FUN_141efd240(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,4);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 2,4);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 3,4);
    }
  }
  else {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 4,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 4,4);
    }
  }
  else {
    param_2[4] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 5,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 5,4);
    }
  }
  else {
    param_2[5] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 6,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 6,4);
    }
  }
  else {
    param_2[6] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 7,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 7,4);
    }
  }
  else {
    param_2[7] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 8,4);
    }
  }
  else {
    param_2[8] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 9,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 9,4);
    }
  }
  else {
    param_2[9] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 10,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 10,4);
    }
  }
  else {
    param_2[10] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    param_2[0xb] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xb,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 0xb,4);
  }
  return param_1;
}



// FUNCTION 141efd600 operator<< body=231 status=ok
// SIG undefined operator<<(void)

void operator<<(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140d25400();
  uVar1 = FUN_140d25400(uVar1,param_2 + 2);
  uVar1 = FUN_140d25400(uVar1,param_2 + 4);
  uVar1 = FUN_140d25400(uVar1,param_2 + 6);
  uVar1 = FUN_140d25400(uVar1,param_2 + 8);
  uVar1 = FUN_140d25400(uVar1,param_2 + 10);
  uVar1 = FUN_140d25400(uVar1,param_2 + 0xc);
  uVar1 = FUN_140d25400(uVar1,param_2 + 0xe);
  uVar1 = FUN_140d25400(uVar1,param_2 + 0x10);
  uVar1 = FUN_140d25400(uVar1,param_2 + 0x12);
  uVar1 = FUN_140d25400(uVar1,param_2 + 0x14);
  FUN_140d25400(uVar1,param_2 + 0x16);
  return;
}



// FUNCTION 141efd6f0 operator<< body=122 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FArchive::UsingCustomVersion(param_1,&DAT_1464ce018);
  FUN_141f02680(param_2,param_1,0);
  FUN_141efde90(param_1,param_2 + 0x10);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_2 + 0x50) != 0) {
      uVar1 = FMemory::Realloc(*(longlong *)(param_2 + 0x50),0,0);
      *(undefined8 *)(param_2 + 0x50) = uVar1;
    }
    *(undefined4 *)(param_2 + 0x58) = 0;
    TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
    ::ConditionalRehash(param_2 + 0x10,*(int *)(param_2 + 0x18) - *(int *)(param_2 + 0x44),0);
  }
  return param_1;
}



// FUNCTION 141efd770 FUN_141efd770 body=393 status=ok
// SIG undefined FUN_141efd770(void)

longlong * FUN_141efd770(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x30,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x30);
  iVar4 = 0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x55555 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141efd240(param_1,(longlong)iVar4 * 0x30 + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        FUN_141efd240(param_1,(longlong)iVar2 * 0x30 + *param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141efd900 FUN_141efd900 body=409 status=ok
// SIG undefined FUN_141efd900(void)

longlong * FUN_141efd900(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  puVar6 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar4 = (longlong *)param_1[1];
  if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  bVar2 = *(byte *)(param_1 + 5);
  if ((((char)bVar2 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0xaaaaa < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar2 | 0x80;
    return param_1;
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        operator<<(param_1,*param_2 + (longlong)(int)puVar6 * 0x18);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar3);
    }
    puVar1 = (undefined8 *)(*param_2 + (longlong)iVar3 * 0x18);
    puVar5 = puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar5 = puVar1;
    }
    operator<<(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 141efdaa0 FUN_141efdaa0 body=373 status=ok
// SIG undefined FUN_141efdaa0(void)

longlong * FUN_141efdaa0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  iVar4 = 0;
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
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x200000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
  }
  else if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_141edd6e0(param_1,*param_2 + (longlong)iVar4 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2[1]);
      return param_1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        FUN_141edd6e0(param_1,*param_2 + (longlong)iVar2 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141efdc20 FUN_141efdc20 body=405 status=ok
// SIG undefined FUN_141efdc20(void)

longlong * FUN_141efdc20(longlong *param_1,longlong *param_2)

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
        FUN_140da9f70(param_1,(longlong)(int)puVar6 * 0x10 + *param_2);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,local_res8[0]);
  }
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
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0x3f800000;
      puVar5 = puVar4;
    }
    FUN_140da9f70(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 141efddc0 operator<< body=194 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_141efe140();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(param_2 + 0x40),0,0);
      *(undefined8 *)(param_2 + 0x40) = uVar3;
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar5 < 4) {
      iVar2 = 1;
    }
    else {
      uVar1 = (uVar5 >> 1) + 8;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar4 = 0x20;
      if (uVar1 != 0) {
        iVar4 = 0x1f - iVar2;
      }
      uVar1 = (uVar5 >> 1) + 7;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      if (uVar1 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
      }
    }
    if (0 < (int)uVar5) {
      *(int *)(param_2 + 0x48) = iVar2;
      TSet<TTuple<FGuid,AActor_*>,TDefaultMapHashableKeyFuncs<FGuid,AActor_*,0>,FDefaultSetAllocator>
      ::Rehash(param_2);
    }
  }
  return param_1;
}



// FUNCTION 141efde90 FUN_141efde90 body=677 status=ok
// SIG undefined FUN_141efde90(void)

longlong * FUN_141efde90(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  iVar3 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar4 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar6 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar8 = (longlong)local_2c * 0x20 + *local_48;
        (**(code **)(*param_1 + 0x30))(param_1,lVar8);
        FUN_140d25120(param_1,lVar8 + 8);
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar3 = 0;
  local_res8[0] = 0;
  if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_2,iVar4);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar4 = (int)param_2[6];
        iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + *param_2);
        iVar5 = *(int *)((longlong)param_2 + 0x34) + -1;
        *(int *)(param_2 + 6) = iVar2;
        *(int *)((longlong)param_2 + 0x34) = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)((longlong)iVar2 * 0x20 + *param_2) = 0xffffffff;
        }
      }
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      iVar5 = iVar4;
      if (iVar4 < 0) {
        iVar5 = iVar4 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
      puVar7 = (undefined8 *)((longlong)iVar4 * 0x20 + *param_2);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *(undefined4 *)(puVar7 + 3) = 0xffffffff;
      (**(code **)(*param_1 + 0x30))(param_1);
      FUN_140d25120(param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 141efe140 FUN_141efe140 body=823 status=ok
// SIG undefined FUN_141efe140(void)

longlong * FUN_141efe140(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int local_res8 [2];
  undefined1 local_78 [16];
  undefined1 *local_68;
  undefined1 **local_60;
  longlong *local_58;
  undefined1 local_50 [4];
  uint local_4c;
  longlong local_48;
  uint local_40;
  int local_3c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  plVar1 = param_2 + 2;
  iVar4 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar5 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar8 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_58,param_2);
    if (local_3c < *(int *)(local_48 + 0x18)) {
      do {
        lVar9 = (longlong)local_3c * 0x20 + *local_58;
        FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_78,param_1);
        local_68 = local_78;
        local_60 = &local_68;
        FUN_141661f40(&local_68,lVar9);
        FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_78);
        (**(code **)(*param_1 + 0x30))(param_1,lVar9 + 0x10);
        local_40 = local_40 & ~local_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_50);
      } while (local_3c < *(int *)(local_48 + 0x18));
    }
    return param_1;
  }
  iVar4 = 0;
  local_res8[0] = 0;
  if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar8;
    *plVar8 = *plVar8 + 4;
  }
  iVar5 = local_res8[0];
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  uVar6 = iVar5 + 0x1f + (iVar5 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_2 + 0x2c) != uVar6) {
    *(uint *)((longlong)param_2 + 0x2c) = uVar6;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(plVar1,0);
  }
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar5 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_2,iVar5);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(plVar1,0,1);
      }
      else {
        iVar5 = (int)param_2[6];
        iVar3 = *(int *)((longlong)iVar5 * 0x20 + 4 + *param_2);
        iVar7 = *(int *)((longlong)param_2 + 0x34) + -1;
        *(int *)(param_2 + 6) = iVar3;
        *(int *)((longlong)param_2 + 0x34) = iVar7;
        if (iVar7 != 0) {
          *(undefined4 *)((longlong)iVar3 * 0x20 + *param_2) = 0xffffffff;
        }
      }
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      iVar7 = iVar5;
      if (iVar5 < 0) {
        iVar7 = iVar5 + 0x1f;
      }
      puVar2 = (uint *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar5 & 0x1f);
      puVar10 = (undefined8 *)((longlong)iVar5 * 0x20 + *param_2);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      *(undefined4 *)(puVar10 + 3) = 0xffffffff;
      FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_78,param_1);
      local_68 = local_78;
      local_60 = &local_68;
      FUN_141661f40(&local_68,puVar10);
      FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_78);
      (**(code **)(*param_1 + 0x30))(param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 141efe480 `scalar_deleting_destructor' body=104 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAsyncTask<FAsyncGrassTask>::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_Abandon_144eee518;
  FUN_1415b5910(param_1[9]);
  param_1[9] = 0;
  if (param_1[1] != 0) {
    FAsyncGrassBuilder::_scalar_deleting_destructor_(param_1[1],1);
  }
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141efe4f0 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FObjectiveData::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141efe550 FUN_141efe550 body=72 status=ok
// SIG undefined FUN_141efe550(void)

undefined8 * FUN_141efe550(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144eec1b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141efe5a0 FUN_141efe5a0 body=141 status=ok
// SIG undefined FUN_141efe5a0(void)

longlong FUN_141efe5a0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x458,0);
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a8);
  }
  return param_1;
}



// FUNCTION 141efe630 `scalar_deleting_destructor' body=210 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FAsyncGrassBuilder::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  puVar4 = *(undefined8 **)(param_1 + 0x1b8);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x1d8);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x1c8);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  plVar5 = *(longlong **)(param_1 + 0xa8);
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 141efe710 FUN_141efe710 body=133 status=ok
// SIG undefined FUN_141efe710(void)

undefined8 * FUN_141efe710(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_144eedd48;
  puVar1 = (undefined8 *)param_1[0x93];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x93] = 0;
  if (param_1[0x90] != 0) {
    FMemory::Free();
  }
  if (param_1[0x8e] != 0) {
    FMemory::Free();
  }
  FUN_14271e9f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4b0);
  }
  return param_1;
}



// FUNCTION 141efe7a0 FUN_141efe7a0 body=82 status=ok
// SIG undefined FUN_141efe7a0(void)

undefined8 * FUN_141efe7a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144eedec0;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 141efe800 `scalar_deleting_destructor' body=82 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FLandscapeGrassShadowMap::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144eedf40;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141efe860 `scalar_deleting_destructor' body=82 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FWmfMediaBinarySample::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144eedec0;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141efe8c0 FUN_141efe8c0 body=82 status=ok
// SIG undefined FUN_141efe8c0(void)

undefined8 * FUN_141efe8c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144eedf40;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141efe920 FUN_141efe920 body=43 status=ok
// SIG undefined FUN_141efe920(void)

undefined8 * FUN_141efe920(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144eec1b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 141efe950 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ULandscapeGrassType::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141efe9a0 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ULandscapeInfoMap::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141efea00 Abandon body=49 status=ok
// SIG undefined Abandon(void)

void FAsyncTask<FAsyncGrassTask>::Abandon(longlong param_1)

{
  FUN_141efed90(*(undefined8 *)(param_1 + 8));
  LOCK();
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  UNLOCK();
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141efea27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 141efea60 AllocateBuffers body=375 status=ok
// SIG undefined AllocateBuffers(void)

void FStaticMeshInstanceData::AllocateBuffers
               (longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined **ppuVar5;
  longlong *plVar6;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[2];
  plVar6 = (longlong *)0x0;
  param_1[1] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[4];
  param_1[3] = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  param_1[5] = 0;
  plVar3 = (longlong *)operator_new(0x28);
  plVar4 = plVar6;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_144eec210;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[1] = (longlong)&PTR_GetBoundProgramCounterForTimerManager_144e08448;
    *(undefined1 *)(plVar3 + 4) = 0;
    plVar4 = plVar3;
  }
  *param_1 = (longlong)plVar4;
  (**(code **)(*plVar4 + 8))(plVar4,param_2,param_3);
  plVar3 = (longlong *)operator_new(0x28);
  plVar4 = plVar6;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_144eec2a0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[1] = (longlong)&PTR_GetBoundProgramCounterForTimerManager_144eec268;
    *(undefined1 *)(plVar3 + 4) = 0;
    plVar4 = plVar3;
  }
  param_1[4] = (longlong)plVar4;
  (**(code **)(*plVar4 + 8))(plVar4,param_2,param_3);
  cVar1 = *(char *)((longlong)param_1 + 0x34);
  plVar4 = (longlong *)operator_new(0x28);
  if (cVar1 == '\0') {
    if (plVar4 == (longlong *)0x0) goto LAB_141efebad;
    *plVar4 = (longlong)&PTR_FUN_144eec3c0;
    ppuVar5 = &PTR_GetBoundProgramCounterForTimerManager_144eec388;
  }
  else {
    if (plVar4 == (longlong *)0x0) goto LAB_141efebad;
    *plVar4 = (longlong)&PTR_FUN_144eec330;
    ppuVar5 = &PTR_GetBoundProgramCounterForTimerManager_144eec2f8;
  }
  plVar4[2] = 0;
  plVar4[3] = 0;
  *(undefined1 *)(plVar4 + 4) = 0;
  plVar4[1] = (longlong)ppuVar5;
  plVar6 = plVar4;
LAB_141efebad:
  param_1[2] = (longlong)plVar6;
                    /* WARNING: Could not recover jumptable at 0x000141efebd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 8))(plVar6,param_2,param_3);
  return;
}



// FUNCTION 141efebe0 AllocateInstances body=158 status=ok
// SIG undefined AllocateInstances(void)

void FStaticMeshInstanceData::AllocateInstances
               (undefined8 *param_1,ulonglong param_2,undefined4 param_3,char param_4)

{
  undefined8 uVar1;
  
  *(int *)(param_1 + 6) = (int)param_2;
  if (param_4 != '\0') {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    (**(code **)(*(longlong *)param_1[4] + 0x10))
              ((longlong *)param_1[4],*(undefined4 *)(param_1 + 6));
    (**(code **)(*(longlong *)param_1[2] + 0x10))
              ((longlong *)param_1[2],*(undefined4 *)(param_1 + 6));
    param_2 = (ulonglong)*(uint *)(param_1 + 6);
  }
  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,param_2,param_3);
  uVar1 = (**(code **)(*(longlong *)*param_1 + 0x30))();
  param_1[1] = uVar1;
  (**(code **)(*(longlong *)param_1[4] + 8))
            ((longlong *)param_1[4],*(undefined4 *)(param_1 + 6),param_3);
  uVar1 = (**(code **)(*(longlong *)param_1[4] + 0x30))();
  param_1[5] = uVar1;
  (**(code **)(*(longlong *)param_1[2] + 8))
            ((longlong *)param_1[2],*(undefined4 *)(param_1 + 6),param_3);
  uVar1 = (**(code **)(*(longlong *)param_1[2] + 0x30))();
  param_1[3] = uVar1;
  return;
}



// FUNCTION 141efec80 BeginDestroy body=261 status=ok
// SIG undefined BeginDestroy(void)

void ULandscapeInfoMap::BeginDestroy(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if ((lVar1 != 0) && (lVar2 = (longlong)*(int *)(lVar1 + 0x80), *(int *)(lVar1 + 0x80) != 0)) {
    iVar7 = 0;
    bVar8 = **(longlong **)(lVar1 + 0x78) != param_1;
    lVar4 = 0;
    iVar5 = 0;
    do {
      lVar4 = lVar4 + 1;
      iVar6 = iVar5 + 1;
      if (lVar4 < lVar2) {
        plVar3 = (longlong *)(*(longlong *)(lVar1 + 0x78) + lVar4 * 8);
        do {
          if (bVar8 != (*plVar3 != param_1)) break;
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
          plVar3 = plVar3 + 1;
        } while (lVar4 < lVar2);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar5) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar1 + 0x78) + (longlong)iVar7 * 8),
                     (void *)(*(longlong *)(lVar1 + 0x78) + (longlong)iVar5 * 8),
                     (longlong)(iVar6 - iVar5) << 3);
        }
        iVar7 = iVar7 + (iVar6 - iVar5);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar5 = iVar6;
    } while (lVar4 < lVar2);
    *(int *)(lVar1 + 0x80) = iVar7;
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 141efed90 FUN_141efed90 body=11161 status=ok
// SIG undefined FUN_141efed90(void)

void FUN_141efed90(longlong param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  DWORD DVar21;
  code *pcVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  bool bVar32;
  int iVar33;
  int iVar34;
  undefined8 *puVar35;
  undefined8 uVar36;
  longlong *plVar37;
  longlong lVar38;
  char cVar39;
  uint uVar40;
  int iVar41;
  float *pfVar42;
  uint uVar43;
  int iVar44;
  longlong lVar45;
  longlong lVar46;
  int iVar47;
  longlong lVar48;
  ulonglong uVar49;
  int iVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  ulonglong uVar54;
  DWORD DVar55;
  LARGE_INTEGER LVar56;
  float *pfVar57;
  int iVar58;
  int iVar59;
  ulonglong uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  double dVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar73 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  int local_3c0;
  int local_3bc;
  uint local_3b8;
  ulonglong local_3a8;
  longlong local_398;
  undefined8 local_390;
  float local_388;
  float local_378;
  float fStack_374;
  float fStack_370;
  undefined4 uStack_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  undefined4 uStack_35c;
  float local_358;
  float fStack_354;
  float fStack_350;
  undefined4 uStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  undefined4 uStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  undefined4 uStack_32c;
  float local_328;
  float fStack_324;
  float fStack_320;
  undefined4 uStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  undefined4 uStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  float local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  float local_2b8;
  float local_2b4;
  longlong local_2b0;
  undefined8 local_2a8;
  float local_298;
  float local_288;
  float local_280;
  float local_278;
  float local_268;
  float local_258;
  longlong local_248;
  undefined8 local_240;
  float local_238;
  undefined8 local_228;
  float fStack_220;
  float fStack_21c;
  longlong local_218;
  longlong local_210;
  LARGE_INTEGER local_208;
  float local_200;
  float local_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
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
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined8 local_178;
  float fStack_170;
  float fStack_16c;
  undefined8 local_168;
  float fStack_160;
  float fStack_15c;
  longlong local_158;
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
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  local_158 = param_1;
  QueryPerformanceCounter(&local_208);
  dVar69 = (double)local_208.QuadPart;
  iVar58 = *(int *)(param_1 + 0x98);
  uVar54 = 0;
  local_208.QuadPart = 0;
  local_398 = 0;
  local_390 = 0;
  *(double *)(param_1 + 0x160) =
       *(double *)(param_1 + 0x160) - (dVar69 * DAT_1468b02f8 + 16777216.0);
  fVar76 = 1.0 / (float)iVar58;
  if (*(int *)(param_1 + 0x17c) == 0) {
    fVar77 = *(float *)(param_1 + 0xe8);
    if (0.0 <= fVar77) {
      if (0.99 <= fVar77) {
        fVar77 = 0.99;
      }
    }
    else {
      fVar77 = 0.0;
    }
    fVar64 = *(float *)(param_1 + 0x80);
    local_2c8 = 0;
    fVar77 = fVar77 * fVar76 * 0.5;
    fVar79 = fVar76 * 0.5;
    local_2e8 = CONCAT44(local_2e8._4_4_,*(float *)(param_1 + 0x84) * fVar77);
    *(float *)(param_1 + 0x74) = fVar64 * fVar79 + *(float *)(param_1 + 0x74);
    *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x84) * fVar79 + *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x7c) = *(float *)(param_1 + 0x88) * fVar79 + *(float *)(param_1 + 0x7c);
    iVar58 = *(int *)(param_1 + 0x98);
    uStack_2c0 = (ulonglong)(uint)(iVar58 * iVar58);
    if (0 < iVar58 * iVar58) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_2c8,0);
      iVar58 = *(int *)(param_1 + 0x98);
    }
    lVar46 = local_2c8;
    local_3b8 = 0;
    if (0 < iVar58) {
      local_3a8 = 0;
      uVar49 = uVar54;
      uVar60 = uVar54;
      do {
        iVar34 = 0;
        uVar40 = (uint)uVar49;
        if (0 < iVar58) {
          pfVar57 = (float *)(local_2c8 + 8 + uVar54 * 0x10);
          fVar79 = (float)(int)(uint)uVar49 * fVar76;
          local_2f0 = CONCAT44(local_2f0._4_4_,fVar79);
          uVar54 = local_3a8;
          do {
            uVar40 = *(int *)(param_1 + 0xf0) * 0xbb38435 + 0x3619636b;
            fVar91 = (float)(uVar40 & 0x7fffff | 0x3f800000);
            iVar58 = uVar40 * 0xbb38435 + 0x3619636b;
            *(int *)(param_1 + 0xf0) = iVar58;
            iVar59 = *(int *)(param_1 + 0xc0);
            local_2f8 = CONCAT44(local_2f8._4_4_,iVar58) & 0xffffffff007fffff | 0x3f800000;
            iVar58 = iVar59 + -1;
            fVar91 = fVar91 - (float)(int)fVar91;
            fVar62 = fVar79 * *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x74) +
                     ((fVar91 + fVar91) - 1.0) * fVar64 * fVar77;
            fVar91 = fVar62 / *(float *)(param_1 + 8) - (float)*(int *)(param_1 + 0x60);
            fVar61 = (float)iVar34 * fVar76 * *(float *)(param_1 + 0x84) +
                     *(float *)(param_1 + 0x78) +
                     ((((float)local_2f8 - (float)(int)(float)local_2f8) +
                      ((float)local_2f8 - (float)(int)(float)local_2f8)) - 1.0) * (float)local_2e8;
            fVar65 = fVar61 / *(float *)(param_1 + 0xc) - (float)*(int *)(param_1 + 100);
            iVar44 = (int)ROUND((fVar91 + fVar91) - 0.5) >> 1;
            iVar47 = (int)ROUND((fVar65 + fVar65) - 0.5) >> 1;
            iVar41 = -((int)ROUND(-0.5 - (fVar91 + fVar91)) >> 1);
            iVar33 = -((int)ROUND(-0.5 - (fVar65 + fVar65)) >> 1);
            iVar50 = iVar58;
            if (iVar44 <= iVar58) {
              iVar50 = iVar44;
            }
            iVar44 = iVar58;
            if (iVar47 <= iVar58) {
              iVar44 = iVar47;
            }
            iVar47 = iVar58;
            if (iVar41 <= iVar58) {
              iVar47 = iVar41;
            }
            if (iVar33 <= iVar58) {
              iVar58 = iVar33;
            }
            fVar91 = fVar91 - (float)(int)fVar91;
            lVar53 = (longlong)(iVar59 * iVar44 + iVar50);
            lVar38 = **(longlong **)(param_1 + 0xb8);
            lVar52 = (longlong)(iVar59 * iVar58 + iVar50);
            fVar66 = (float)*(byte *)(lVar53 + lVar38) * 0.003921569;
            lVar48 = (longlong)(iVar59 * iVar44 + iVar47);
            fVar70 = (float)*(byte *)(lVar52 + lVar38) * 0.003921569;
            lVar51 = (longlong)(iVar59 * iVar58 + iVar47);
            lVar45 = **(longlong **)(param_1 + 0xb0);
            uVar7 = *(ushort *)(lVar45 + lVar48 * 2);
            fVar66 = ((float)*(byte *)(lVar48 + lVar38) * 0.003921569 - fVar66) * fVar91 + fVar66;
            uVar8 = *(ushort *)(lVar45 + lVar52 * 2);
            fVar67 = ((float)*(ushort *)(lVar45 + lVar53 * 2) - 32768.0) * 0.0078125;
            fVar66 = ((((float)*(byte *)(lVar51 + lVar38) * 0.003921569 - fVar70) * fVar91 + fVar70)
                     - fVar66) * (fVar65 - (float)(int)fVar65) + fVar66;
            uVar9 = *(ushort *)(lVar45 + lVar51 * 2);
            pfVar57[-2] = fVar62 - (float)*(int *)(param_1 + 0x68) * *(float *)(param_1 + 8);
            fVar62 = ((float)uVar8 - 32768.0) * 0.0078125;
            pfVar57[-1] = fVar61 - (float)*(int *)(param_1 + 0x6c) * *(float *)(param_1 + 0xc);
            fVar67 = (((float)uVar7 - 32768.0) * 0.0078125 - fVar67) * fVar91 + fVar67;
            *pfVar57 = ((((((float)uVar9 - 32768.0) * 0.0078125 - fVar62) * fVar91 + fVar62) -
                        fVar67) * (fVar65 - (float)(int)fVar65) + fVar67) *
                       *(float *)(param_1 + 0x10);
            if ((fVar66 <= 0.0) ||
               (uVar40 = *(int *)(param_1 + 0xf0) * 0xbb38435 + 0x3619636b,
               *(uint *)(param_1 + 0xf0) = uVar40, fVar91 = (float)(uVar40 & 0x7fffff | 0x3f800000),
               fVar66 < fVar91 - (float)(int)fVar91)) {
              cVar39 = '\0';
            }
            else {
              cVar39 = '\x01';
            }
            uVar40 = (uint)uVar60 + 1;
            if (cVar39 == '\0') {
              uVar40 = (uint)uVar60;
            }
            *(char *)(pfVar57 + 1) = cVar39;
            uVar60 = (ulonglong)uVar40;
            iVar58 = *(int *)(param_1 + 0x98);
            uVar54 = uVar54 + 1;
            pfVar57 = pfVar57 + 4;
            iVar34 = iVar34 + 1;
            uVar40 = local_3b8;
            local_3a8 = uVar54;
          } while (iVar34 < iVar58);
        }
        local_3b8 = uVar40 + 1;
        uVar49 = (ulonglong)local_3b8;
      } while ((int)local_3b8 < iVar58);
      iVar58 = (int)uVar60;
      if (iVar58 != 0) {
        iVar34 = (int)local_390 + iVar58;
        local_390 = CONCAT44(local_390._4_4_,iVar34);
        if (local_390._4_4_ < iVar34) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_398);
        }
        *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + iVar58;
        FStaticMeshInstanceData::AllocateInstances(param_1 + 0x1b8,uVar60,3,1);
        iVar58 = *(int *)(param_1 + 0x98);
        iVar34 = 0;
        local_3bc = 0;
        local_3c0 = 0;
        if (0 < iVar58) {
          lVar45 = 0;
          local_210 = 0;
          lVar38 = 0;
          local_218 = 0;
          do {
            iVar59 = 0;
            if (0 < iVar58) {
              lVar48 = lVar45 * 0x30;
              pfVar57 = (float *)(lVar38 * 0x10 + lVar46);
              do {
                if (*(char *)(pfVar57 + 3) != '\0') {
                  if (*(char *)(param_1 + 0xe5) == '\0') {
                    plVar37 = &local_2b0;
                    local_2b0 = 0x3f8000003f800000;
                    local_2a8 = CONCAT44(local_2a8._4_4_,0x3f800000);
                  }
                  else {
                    plVar37 = (longlong *)FAsyncGrassBuilder::GetRandomScale(param_1,&local_2c8);
                  }
                  local_178 = *plVar37;
                  fStack_170 = *(float *)(plVar37 + 1);
                  if (*(char *)(param_1 + 0xe4) != '\0') {
                    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) * 0xbb38435 + 0x3619636b;
                  }
                  iVar58 = local_3c0;
                  `anonymous_namespace'::GetSinCos(&local_248,&local_2e8);
                  `anonymous_namespace'::GetSinCos(&local_2f0,&local_2f8);
                  `anonymous_namespace'::GetSinCos(&local_2b4,&local_2b8);
                  fStack_334 = (float)local_2f0 * (float)local_2e8 * (float)local_178;
                  local_338 = (float)local_2f8 * (float)local_2e8 * (float)local_178;
                  fStack_330 = (float)local_178 * (float)local_248;
                  fStack_320 = -(local_2b4 * (float)local_2e8 * local_178._4_4_);
                  local_328 = ((float)local_2f8 * local_2b4 * (float)local_248 -
                              local_2b8 * (float)local_2f0) * local_178._4_4_;
                  fStack_324 = ((float)local_2f0 * local_2b4 * (float)local_248 +
                               local_2b8 * (float)local_2f8) * local_178._4_4_;
                  fStack_310 = local_2b8 * (float)local_2e8 * fStack_170;
                  fStack_314 = (local_2b4 * (float)local_2f8 -
                               (float)local_2f0 * local_2b8 * (float)local_248) * fStack_170;
                  local_318 = -(((float)local_2f8 * local_2b8 * (float)local_248 +
                                local_2b4 * (float)local_2f0) * fStack_170);
                  local_308 = DAT_1468b5d90;
                  fStack_304 = DAT_1468b5d94;
                  fStack_300 = DAT_1468b5d98;
                  uVar4 = local_2e0;
                  uVar5 = local_240;
                  uVar6 = local_228;
                  uVar36 = local_168;
                  if (*(char *)(param_1 + 0xe6) == '\0') {
LAB_141f012b7:
                    local_168 = uVar36;
                    local_228 = uVar6;
                    local_240 = uVar5;
                    local_2e0 = uVar4;
                    fStack_304 = DAT_1468b5d94 + pfVar57[1];
                    local_308 = DAT_1468b5d90 + *pfVar57;
                    fVar76 = *(float *)(param_1 + 0x100);
                    fVar77 = *(float *)(param_1 + 0x104);
                    fVar64 = *(float *)(param_1 + 0x108);
                    fVar79 = *(float *)(param_1 + 0x10c);
                    fVar91 = *(float *)(param_1 + 0x110);
                    fVar65 = *(float *)(param_1 + 0x114);
                    fVar61 = *(float *)(param_1 + 0x118);
                    fVar62 = *(float *)(param_1 + 0x11c);
                    fVar66 = *(float *)(param_1 + 0x130);
                    fVar70 = *(float *)(param_1 + 0x134);
                    fVar67 = *(float *)(param_1 + 0x138);
                    fVar72 = *(float *)(param_1 + 0x13c);
                    fStack_300 = DAT_1468b5d98 + pfVar57[2];
                    fVar75 = *(float *)(param_1 + 0x120);
                    fVar78 = *(float *)(param_1 + 0x124);
                    fVar80 = *(float *)(param_1 + 0x128);
                    fVar63 = *(float *)(param_1 + 300);
                    local_148 = local_338 * fVar76 + fStack_334 * fVar91 + fStack_330 * fVar75 +
                                fVar66 * 0.0;
                    fStack_144 = local_338 * fVar77 + fStack_334 * fVar65 + fStack_330 * fVar78 +
                                 fVar70 * 0.0;
                    fStack_140 = local_338 * fVar64 + fStack_334 * fVar61 + fStack_330 * fVar80 +
                                 fVar67 * 0.0;
                    fStack_13c = local_338 * fVar79 + fStack_334 * fVar62 + fStack_330 * fVar63 +
                                 fVar72 * 0.0;
                    local_138 = local_328 * fVar76 + fStack_324 * fVar91 + fStack_320 * fVar75 +
                                fVar66 * 0.0;
                    fStack_134 = local_328 * fVar77 + fStack_324 * fVar65 + fStack_320 * fVar78 +
                                 fVar70 * 0.0;
                    fStack_130 = local_328 * fVar64 + fStack_324 * fVar61 + fStack_320 * fVar80 +
                                 fVar67 * 0.0;
                    fStack_12c = local_328 * fVar79 + fStack_324 * fVar62 + fStack_320 * fVar63 +
                                 fVar72 * 0.0;
                    local_128 = local_318 * fVar76 + fStack_314 * fVar91 + fStack_310 * fVar75 +
                                fVar66 * 0.0;
                    fStack_124 = local_318 * fVar77 + fStack_314 * fVar65 + fStack_310 * fVar78 +
                                 fVar70 * 0.0;
                    fStack_120 = local_318 * fVar64 + fStack_314 * fVar61 + fStack_310 * fVar80 +
                                 fVar67 * 0.0;
                    fStack_11c = local_318 * fVar79 + fStack_314 * fVar62 + fStack_310 * fVar63 +
                                 fVar72 * 0.0;
                    local_118 = local_308 * fVar76 + fStack_304 * fVar91 + fStack_300 * fVar75 +
                                fVar66 * 1.0;
                    fStack_114 = local_308 * fVar77 + fStack_304 * fVar65 + fStack_300 * fVar78 +
                                 fVar70 * 1.0;
                    fStack_110 = local_308 * fVar64 + fStack_304 * fVar61 + fStack_300 * fVar80 +
                                 fVar67 * 1.0;
                    fStack_10c = local_308 * fVar79 + fStack_304 * fVar62 + fStack_300 * fVar63 +
                                 fVar72 * 1.0;
                  }
                  else {
                    iVar50 = *(int *)(param_1 + 0x98);
                    pfVar42 = pfVar57;
                    if (iVar58 != 0) {
                      pfVar42 = (float *)((longlong)(iVar34 - iVar50) * 0x10 + lVar46);
                    }
                    fStack_160 = pfVar42[2];
                    uVar36 = *(undefined8 *)pfVar42;
                    pfVar42 = pfVar57;
                    if (iVar58 + 1 < iVar50) {
                      pfVar42 = (float *)((longlong)(iVar34 + iVar50) * 0x10 + lVar46);
                    }
                    uVar4 = *(undefined8 *)pfVar42;
                    local_2d8 = pfVar42[2];
                    pfVar42 = pfVar57;
                    if (iVar59 != 0) {
                      pfVar42 = (float *)((longlong)(iVar34 + -1) * 0x10 + lVar46);
                    }
                    local_238 = pfVar42[2];
                    uVar5 = *(undefined8 *)pfVar42;
                    pfVar42 = pfVar57;
                    if (iVar59 + 1 < iVar50) {
                      pfVar42 = (float *)((longlong)(iVar34 + 1) * 0x10 + lVar46);
                    }
                    local_168._0_4_ = (float)uVar36;
                    local_2e0._0_4_ = (float)uVar4;
                    fStack_220 = pfVar42[2];
                    uVar6 = *(undefined8 *)pfVar42;
                    local_168._4_4_ = (float)((ulonglong)uVar36 >> 0x20);
                    local_2e0._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
                    if ((((float)local_168 == (float)local_2e0) &&
                        (local_168._4_4_ == local_2e0._4_4_)) && (fStack_160 == local_2d8))
                    goto LAB_141f012b7;
                    local_240._0_4_ = (float)uVar5;
                    local_228._0_4_ = (float)uVar6;
                    local_240._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
                    local_228._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
                    if ((((float)local_240 == (float)local_228) &&
                        (local_240._4_4_ == local_228._4_4_)) && (local_238 == fStack_220)) {
                      bVar32 = false;
                    }
                    else {
                      bVar32 = true;
                    }
                    if (!bVar32) goto LAB_141f012b7;
                    fVar91 = (local_168._4_4_ - local_2e0._4_4_) * (local_238 - fStack_220) -
                             (fStack_160 - local_2d8) * (local_240._4_4_ - local_228._4_4_);
                    fVar64 = ((float)local_168 - (float)local_2e0) *
                             (local_240._4_4_ - local_228._4_4_) -
                             (local_168._4_4_ - local_2e0._4_4_) *
                             ((float)local_240 - (float)local_228);
                    fVar79 = (fStack_160 - local_2d8) * ((float)local_240 - (float)local_228) -
                             ((float)local_168 - (float)local_2e0) * (local_238 - fStack_220);
                    fVar77 = fVar79 * fVar79 + fVar91 * fVar91 + fVar64 * fVar64;
                    fStack_350 = fVar64;
                    fVar76 = fVar79;
                    local_358 = fVar91;
                    if ((fVar77 != 1.0) &&
                       (fStack_350 = DAT_1468b5d98, fVar76 = DAT_1468b5d94,
                       local_358 = DAT_1468b5d90, 1e-08 <= fVar77)) {
                      auVar73 = rsqrtss(ZEXT416((uint)fVar77),ZEXT416((uint)fVar77));
                      fVar65 = auVar73._0_4_;
                      fVar65 = fVar65 + fVar65 * (0.5 - fVar77 * 0.5 * fVar65 * fVar65);
                      fVar65 = fVar65 + fVar65 * (0.5 - fVar77 * 0.5 * fVar65 * fVar65);
                      fStack_350 = fVar65 * fVar64;
                      fVar76 = fVar65 * fVar79;
                      local_358 = fVar65 * fVar91;
                    }
                    if (fStack_350 <= 0.0) {
                      if (0.0 <= fStack_350) {
                        fStack_354 = 0.0;
                      }
                      else {
                        fStack_354 = -1.0;
                      }
                    }
                    else {
                      fStack_354 = 1.0;
                    }
                    local_358 = fStack_354 * local_358;
                    fStack_350 = fStack_354 * fStack_350;
                    fStack_354 = fStack_354 * fVar76;
                    fVar77 = -fStack_350;
                    fVar76 = fVar77 * fVar77 + local_358 * local_358;
                    fStack_374 = 0.0;
                    fStack_370 = local_358;
                    local_378 = fVar77;
                    if ((fVar76 != 1.0) &&
                       (fStack_374 = DAT_1468b5d94, fStack_370 = DAT_1468b5d98,
                       local_378 = DAT_1468b5d90, 1e-08 <= fVar76)) {
                      auVar73 = rsqrtss(ZEXT416((uint)fVar76),ZEXT416((uint)fVar76));
                      fVar64 = auVar73._0_4_;
                      fVar64 = fVar64 + fVar64 * (0.5 - fVar76 * 0.5 * fVar64 * fVar64);
                      fVar64 = fVar64 + fVar64 * (0.5 - fVar76 * 0.5 * fVar64 * fVar64);
                      fStack_374 = 0.0;
                      fStack_370 = fVar64 * local_358;
                      local_378 = fVar64 * fVar77;
                    }
                    local_368 = fStack_354 * fStack_370 - fStack_350 * fStack_374;
                    fStack_364 = fStack_350 * local_378 - local_358 * fStack_370;
                    fStack_360 = local_358 * fStack_374 - fStack_354 * local_378;
                    uStack_35c = 0;
                    uStack_36c = 0;
                    uStack_34c = 0;
                    fVar74 = fStack_334 * local_368 + local_338 * local_378 + fStack_330 * local_358
                             + DAT_1468b5d90 * 0.0;
                    fVar88 = fStack_334 * fStack_364 + local_338 * fStack_374 +
                             fStack_330 * fStack_354 + DAT_1468b5d94 * 0.0;
                    fVar81 = fStack_334 * fStack_360 + local_338 * fStack_370 +
                             fStack_330 * fStack_350 + DAT_1468b5d98 * 0.0;
                    fVar82 = fStack_334 * 0.0 + local_338 * 0.0 + fStack_330 * 0.0 + 0.0;
                    local_348 = DAT_1468b5d90;
                    fStack_344 = DAT_1468b5d94;
                    fStack_340 = DAT_1468b5d98;
                    uStack_33c = 0x3f800000;
                    fVar76 = *(float *)(param_1 + 0x110);
                    fVar77 = *(float *)(param_1 + 0x114);
                    fVar64 = *(float *)(param_1 + 0x118);
                    fVar79 = *(float *)(param_1 + 0x11c);
                    fVar91 = *(float *)(param_1 + 0x120);
                    fVar65 = *(float *)(param_1 + 0x124);
                    fVar61 = *(float *)(param_1 + 0x128);
                    fVar62 = *(float *)(param_1 + 300);
                    fVar66 = *(float *)(param_1 + 0x130);
                    fVar70 = *(float *)(param_1 + 0x134);
                    fVar67 = *(float *)(param_1 + 0x138);
                    fVar72 = *(float *)(param_1 + 0x13c);
                    local_108 = fStack_324 * local_368 + local_328 * local_378 +
                                fStack_320 * local_358 + DAT_1468b5d90 * 0.0;
                    fStack_104 = fStack_324 * fStack_364 + local_328 * fStack_374 +
                                 fStack_320 * fStack_354 + DAT_1468b5d94 * 0.0;
                    fStack_100 = fStack_324 * fStack_360 + local_328 * fStack_370 +
                                 fStack_320 * fStack_350 + DAT_1468b5d98 * 0.0;
                    fStack_fc = fStack_324 * 0.0 + local_328 * 0.0 + fStack_320 * 0.0 + 0.0;
                    local_f8 = fStack_314 * local_368 + local_318 * local_378 +
                               fStack_310 * local_358 + DAT_1468b5d90 * 0.0;
                    fStack_f4 = fStack_314 * fStack_364 + local_318 * fStack_374 +
                                fStack_310 * fStack_354 + DAT_1468b5d94 * 0.0;
                    fStack_f0 = fStack_314 * fStack_360 + local_318 * fStack_370 +
                                fStack_310 * fStack_350 + DAT_1468b5d98 * 0.0;
                    fStack_ec = fStack_314 * 0.0 + local_318 * 0.0 + fStack_310 * 0.0 + 0.0;
                    fStack_e4 = DAT_1468b5d94 * fStack_364 + DAT_1468b5d90 * fStack_374 +
                                DAT_1468b5d98 * fStack_354 + DAT_1468b5d94 * 1.0;
                    fStack_e0 = DAT_1468b5d94 * fStack_360 + DAT_1468b5d90 * fStack_370 +
                                DAT_1468b5d98 * fStack_350 + DAT_1468b5d98 * 1.0;
                    fStack_dc = DAT_1468b5d94 * 0.0 + DAT_1468b5d90 * 0.0 + DAT_1468b5d98 * 0.0 +
                                1.0;
                    local_e8 = DAT_1468b5d94 * local_368 + DAT_1468b5d90 * local_378 +
                               DAT_1468b5d98 * local_358 + DAT_1468b5d90 * 1.0 + *pfVar57;
                    fVar71 = fStack_e0 + pfVar57[2];
                    fVar68 = fStack_e4 + pfVar57[1];
                    fVar75 = *(float *)(param_1 + 0x100);
                    fVar78 = *(float *)(param_1 + 0x104);
                    fVar80 = *(float *)(param_1 + 0x108);
                    fVar63 = *(float *)(param_1 + 0x10c);
                    local_148 = fVar74 * fVar75 + fVar88 * fVar76 + fVar81 * fVar91 +
                                fVar82 * fVar66;
                    fStack_144 = fVar74 * fVar78 + fVar88 * fVar77 + fVar81 * fVar65 +
                                 fVar82 * fVar70;
                    fStack_140 = fVar74 * fVar80 + fVar88 * fVar64 + fVar81 * fVar61 +
                                 fVar82 * fVar67;
                    fStack_13c = fVar74 * fVar63 + fVar88 * fVar79 + fVar81 * fVar62 +
                                 fVar82 * fVar72;
                    local_138 = local_108 * fVar75 + fStack_104 * fVar76 + fStack_100 * fVar91 +
                                fStack_fc * fVar66;
                    fStack_134 = local_108 * fVar78 + fStack_104 * fVar77 + fStack_100 * fVar65 +
                                 fStack_fc * fVar70;
                    fStack_130 = local_108 * fVar80 + fStack_104 * fVar64 + fStack_100 * fVar61 +
                                 fStack_fc * fVar67;
                    fStack_12c = local_108 * fVar63 + fStack_104 * fVar79 + fStack_100 * fVar62 +
                                 fStack_fc * fVar72;
                    local_128 = local_f8 * fVar75 + fStack_f4 * fVar76 + fStack_f0 * fVar91 +
                                fStack_ec * fVar66;
                    fStack_124 = local_f8 * fVar78 + fStack_f4 * fVar77 + fStack_f0 * fVar65 +
                                 fStack_ec * fVar70;
                    fStack_120 = local_f8 * fVar80 + fStack_f4 * fVar64 + fStack_f0 * fVar61 +
                                 fStack_ec * fVar67;
                    fStack_11c = local_f8 * fVar63 + fStack_f4 * fVar79 + fStack_f0 * fVar62 +
                                 fStack_ec * fVar72;
                    local_118 = local_e8 * fVar75 + fVar68 * fVar76 + fVar71 * fVar91 +
                                fStack_dc * fVar66;
                    fStack_114 = local_e8 * fVar78 + fVar68 * fVar77 + fVar71 * fVar65 +
                                 fStack_dc * fVar70;
                    fStack_110 = local_e8 * fVar80 + fVar68 * fVar64 + fVar71 * fVar61 +
                                 fStack_dc * fVar67;
                    fStack_10c = local_e8 * fVar63 + fVar68 * fVar79 + fVar71 * fVar62 +
                                 fStack_dc * fVar72;
                    local_2e0 = uVar4;
                    local_240 = uVar5;
                    local_228 = uVar6;
                    local_168 = uVar36;
                    local_d8 = fStack_dc;
                    fStack_d4 = fStack_dc;
                    fStack_d0 = fStack_dc;
                    fStack_cc = fStack_dc;
                  }
                  uStack_2fc = 0x3f800000;
                  uStack_30c = 0;
                  uStack_31c = 0;
                  uStack_32c = 0;
                  FUN_140487e30(&local_1f8,&local_148);
                  auVar73._4_4_ = fStack_1e4;
                  auVar73._0_4_ = local_1e8;
                  auVar73._8_4_ = fStack_1e0;
                  auVar73._12_4_ = uStack_1dc;
                  *(undefined8 *)(local_398 + lVar48) = CONCAT44(fStack_1f4,local_1f8);
                  ((undefined8 *)(local_398 + lVar48))[1] = CONCAT44(uStack_1ec,fStack_1f0);
                  puVar35 = (undefined8 *)(local_398 + 0x20 + lVar48);
                  *puVar35 = CONCAT44(fStack_1d4,local_1d8);
                  puVar35[1] = CONCAT44(uStack_1cc,fStack_1d0);
                  *(undefined1 (*) [16])(local_398 + 0x10 + lVar48) = auVar73;
                  uVar40 = *(int *)(param_1 + 0xf0) * 0xbb38435 + 0x3619636b;
                  *(uint *)(param_1 + 0xf0) = uVar40;
                  fVar76 = (float)(uVar40 & 0x7fffff | 0x3f800000);
                  FUN_141f05df0(param_1,local_3bc,&local_1f8,fVar76 - (float)(int)fVar76);
                  local_3bc = local_3bc + 1;
                  lVar45 = local_210 + 1;
                  iVar58 = *(int *)(param_1 + 0x98);
                  lVar48 = lVar48 + 0x30;
                  local_210 = lVar45;
                  lVar38 = local_218;
                }
                lVar38 = lVar38 + 1;
                iVar34 = iVar34 + 1;
                pfVar57 = pfVar57 + 4;
                local_218 = lVar38;
                iVar59 = iVar59 + 1;
              } while (iVar59 < iVar58);
            }
            local_3c0 = local_3c0 + 1;
          } while (local_3c0 < iVar58);
        }
      }
    }
    if (lVar46 != 0) {
      FMemory::Free(lVar46);
    }
  }
  else {
    fVar77 = *(float *)(param_1 + 0x80);
    if (fVar77 < 0.0) {
      *(float *)(param_1 + 0x80) = -fVar77;
      *(float *)(param_1 + 0x74) = fVar77 + *(float *)(param_1 + 0x74);
    }
    fVar77 = *(float *)(param_1 + 0x84);
    if (fVar77 < 0.0) {
      *(float *)(param_1 + 0x84) = -fVar77;
      *(float *)(param_1 + 0x78) = fVar77 + *(float *)(param_1 + 0x78);
    }
    iVar58 = iVar58 * iVar58;
    if (0 < iVar58) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(&local_398,iVar58);
    }
    fVar77 = fVar76 * *(float *)(param_1 + 0x84);
    fVar76 = fVar76 * *(float *)(param_1 + 0x80);
    uVar49 = uVar54;
    if (0 < iVar58) {
      do {
        fVar65 = 0.33333334;
        fVar91 = 0.0;
        fVar79 = 0.0;
        fVar64 = 0.5;
        uVar40 = *(int *)(param_1 + 0x17c) + (int)uVar49;
        for (uVar43 = uVar40; uVar43 != 0; uVar43 = uVar43 >> 1) {
          fVar61 = (float)(uVar43 & 1) * fVar64;
          fVar64 = fVar64 * 0.5;
          fVar79 = fVar79 + fVar61;
        }
        for (; uVar40 != 0; uVar40 = uVar40 / 3) {
          fVar64 = (float)(uVar40 % 3) * fVar65;
          fVar65 = fVar65 * 0.33333334;
          fVar91 = fVar91 + fVar64;
        }
        iVar59 = *(int *)(param_1 + 0xc0);
        iVar34 = iVar59 + -1;
        local_388 = fVar79 * *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x74);
        fVar61 = fVar91 * *(float *)(param_1 + 0x84) + *(float *)(param_1 + 0x78);
        fVar65 = local_388 / *(float *)(param_1 + 8) - (float)*(int *)(param_1 + 0x60);
        fVar64 = fVar61 / *(float *)(param_1 + 0xc) - (float)*(int *)(param_1 + 100);
        iVar47 = (int)ROUND((fVar65 + fVar65) - 0.5) >> 1;
        iVar44 = (int)ROUND((fVar64 + fVar64) - 0.5) >> 1;
        iVar41 = -((int)ROUND(-0.5 - (fVar65 + fVar65)) >> 1);
        iVar33 = -((int)ROUND(-0.5 - (fVar64 + fVar64)) >> 1);
        iVar50 = iVar34;
        if (iVar47 <= iVar34) {
          iVar50 = iVar47;
        }
        iVar47 = iVar34;
        if (iVar44 <= iVar34) {
          iVar47 = iVar44;
        }
        iVar44 = iVar34;
        if (iVar41 <= iVar34) {
          iVar44 = iVar41;
        }
        if (iVar33 <= iVar34) {
          iVar34 = iVar33;
        }
        fVar65 = fVar65 - (float)(int)fVar65;
        lVar52 = (longlong)(iVar50 + iVar47 * iVar59);
        lVar46 = **(longlong **)(param_1 + 0xb8);
        lVar45 = (longlong)(iVar50 + iVar34 * iVar59);
        fVar62 = (float)*(byte *)(lVar46 + lVar52) * 0.003921569;
        lVar48 = (longlong)(iVar44 + iVar47 * iVar59);
        fVar66 = (float)*(byte *)(lVar45 + lVar46) * 0.003921569;
        lVar51 = (longlong)(iVar44 + iVar34 * iVar59);
        lVar38 = **(longlong **)(param_1 + 0xb0);
        fVar62 = ((float)*(byte *)(lVar48 + lVar46) * 0.003921569 - fVar62) * fVar65 + fVar62;
        fVar67 = local_388 - (float)*(int *)(param_1 + 0x68) * *(float *)(param_1 + 8);
        fVar62 = ((((float)*(byte *)(lVar51 + lVar46) * 0.003921569 - fVar66) * fVar65 + fVar66) -
                 fVar62) * (fVar64 - (float)(int)fVar64) + fVar62;
        fVar66 = fVar61 - (float)*(int *)(param_1 + 0x6c) * *(float *)(param_1 + 0xc);
        fVar70 = ((float)*(ushort *)(lVar38 + lVar52 * 2) - 32768.0) * 0.0078125;
        fVar72 = ((float)*(ushort *)(lVar38 + lVar45 * 2) - 32768.0) * 0.0078125;
        fVar70 = (((float)*(ushort *)(lVar38 + lVar48 * 2) - 32768.0) * 0.0078125 - fVar70) * fVar65
                 + fVar70;
        fVar64 = ((((((float)*(ushort *)(lVar38 + lVar51 * 2) - 32768.0) * 0.0078125 - fVar72) *
                    fVar65 + fVar72) - fVar70) * (fVar64 - (float)(int)fVar64) + fVar70) *
                 *(float *)(param_1 + 0x10);
        if ((0.0 < fVar62) &&
           (uVar40 = *(int *)(param_1 + 0xf0) * 0xbb38435 + 0x3619636b,
           *(uint *)(param_1 + 0xf0) = uVar40, fVar65 = (float)(uVar40 & 0x7fffff | 0x3f800000),
           fVar65 - (float)(int)fVar65 <= fVar62)) {
          if (*(char *)(param_1 + 0xe5) == '\0') {
            puVar35 = &local_240;
            local_240 = 0x3f8000003f800000;
            local_238 = 1.0;
          }
          else {
            puVar35 = (undefined8 *)FAsyncGrassBuilder::GetRandomScale(param_1,&local_2b0);
          }
          local_2e0 = *puVar35;
          local_2d8 = *(float *)(puVar35 + 1);
          if (*(char *)(param_1 + 0xe4) != '\0') {
            *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) * 0xbb38435 + 0x3619636b;
          }
          `anonymous_namespace'::GetSinCos(&local_210,&local_1fc);
          `anonymous_namespace'::GetSinCos(&local_218,&local_200);
          `anonymous_namespace'::GetSinCos(&local_2b8,&local_2b4);
          local_378 = local_200 * local_1fc * (float)local_2e0;
          fStack_374 = (float)local_218 * local_1fc * (float)local_2e0;
          fStack_370 = (float)local_210 * (float)local_2e0;
          local_368 = (local_2b8 * (float)local_210 * local_200 - local_2b4 * (float)local_218) *
                      local_2e0._4_4_;
          fStack_364 = (local_2b8 * (float)local_210 * (float)local_218 + local_2b4 * local_200) *
                       local_2e0._4_4_;
          fStack_360 = -(local_2b8 * local_1fc * local_2e0._4_4_);
          fStack_350 = local_2b4 * local_1fc * local_2d8;
          fStack_354 = (local_2b8 * local_200 - (float)local_218 * local_2b4 * (float)local_210) *
                       local_2d8;
          local_358 = -((local_200 * local_2b4 * (float)local_210 + local_2b8 * (float)local_218) *
                       local_2d8);
          local_348 = DAT_1468b5d90;
          fStack_344 = DAT_1468b5d94;
          fStack_340 = DAT_1468b5d98;
          if (*(char *)(param_1 + 0xe6) == '\0') {
LAB_141efffc5:
            local_348 = fVar67 + DAT_1468b5d90;
            fStack_344 = fVar66 + DAT_1468b5d94;
            fStack_340 = fVar64 + DAT_1468b5d98;
            fVar64 = *(float *)(param_1 + 0x100);
            fVar79 = *(float *)(param_1 + 0x104);
            fVar91 = *(float *)(param_1 + 0x108);
            fVar65 = *(float *)(param_1 + 0x10c);
            fVar61 = *(float *)(param_1 + 0x110);
            fVar62 = *(float *)(param_1 + 0x114);
            fVar66 = *(float *)(param_1 + 0x118);
            fVar70 = *(float *)(param_1 + 0x11c);
            fVar67 = *(float *)(param_1 + 0x120);
            fVar72 = *(float *)(param_1 + 0x124);
            fVar75 = *(float *)(param_1 + 0x128);
            fVar78 = *(float *)(param_1 + 300);
            fVar80 = *(float *)(param_1 + 0x130);
            fVar63 = *(float *)(param_1 + 0x134);
            fVar68 = *(float *)(param_1 + 0x138);
            fVar71 = *(float *)(param_1 + 0x13c);
            local_1b8 = local_378 * fVar64 + fStack_374 * fVar61 + fStack_370 * fVar67 +
                        fVar80 * 0.0;
            fStack_1b4 = local_378 * fVar79 + fStack_374 * fVar62 + fStack_370 * fVar72 +
                         fVar63 * 0.0;
            fStack_1b0 = local_378 * fVar91 + fStack_374 * fVar66 + fStack_370 * fVar75 +
                         fVar68 * 0.0;
            fStack_1ac = local_378 * fVar65 + fStack_374 * fVar70 + fStack_370 * fVar78 +
                         fVar71 * 0.0;
            local_1a8 = local_368 * fVar64 + fStack_364 * fVar61 + fStack_360 * fVar67 +
                        fVar80 * 0.0;
            fStack_1a4 = local_368 * fVar79 + fStack_364 * fVar62 + fStack_360 * fVar72 +
                         fVar63 * 0.0;
            fStack_1a0 = local_368 * fVar91 + fStack_364 * fVar66 + fStack_360 * fVar75 +
                         fVar68 * 0.0;
            fStack_19c = local_368 * fVar65 + fStack_364 * fVar70 + fStack_360 * fVar78 +
                         fVar71 * 0.0;
            local_198 = local_358 * fVar64 + fStack_354 * fVar61 + fStack_350 * fVar67 +
                        fVar80 * 0.0;
            fStack_194 = local_358 * fVar79 + fStack_354 * fVar62 + fStack_350 * fVar72 +
                         fVar63 * 0.0;
            fStack_190 = local_358 * fVar91 + fStack_354 * fVar66 + fStack_350 * fVar75 +
                         fVar68 * 0.0;
            fStack_18c = local_358 * fVar65 + fStack_354 * fVar70 + fStack_350 * fVar78 +
                         fVar71 * 0.0;
            local_188 = local_348 * fVar64 + fStack_344 * fVar61 + fStack_340 * fVar67 +
                        fVar80 * 1.0;
            fStack_184 = local_348 * fVar79 + fStack_344 * fVar62 + fStack_340 * fVar72 +
                         fVar63 * 1.0;
            fStack_180 = local_348 * fVar91 + fStack_344 * fVar66 + fStack_340 * fVar75 +
                         fVar68 * 1.0;
            fStack_17c = local_348 * fVar65 + fStack_344 * fVar70 + fStack_340 * fVar78 +
                         fVar71 * 1.0;
          }
          else {
            fVar65 = fVar76;
            if (0.5 <= fVar79) {
              fVar65 = -fVar76;
            }
            fVar79 = *(float *)(param_1 + 0x74);
            fVar65 = local_388 + fVar65;
            if ((fVar79 <= fVar65) &&
               (fVar79 = fVar79 + *(float *)(param_1 + 0x80), fVar65 <= fVar79)) {
              fVar79 = fVar65;
            }
            fVar80 = 1.0 / *(float *)(param_1 + 8);
            iVar59 = *(int *)(param_1 + 0xc0);
            iVar34 = iVar59 + -1;
            fVar72 = 1.0 / *(float *)(param_1 + 0xc);
            fVar65 = (float)*(int *)(param_1 + 0x60);
            local_248 = CONCAT44(local_248._4_4_,fVar65);
            local_2f0 = CONCAT44(local_2f0._4_4_,fVar72);
            fVar78 = fVar80 * fVar79 - fVar65;
            fVar62 = (float)*(int *)(param_1 + 100);
            fVar75 = fVar72 * fVar61 - fVar62;
            local_2e8 = CONCAT44(local_2e8._4_4_,fVar62);
            fVar70 = (float)*(int *)(param_1 + 0x68) * *(float *)(param_1 + 8);
            local_2f8 = CONCAT44(local_2f8._4_4_,fVar70);
            iVar47 = (int)ROUND((fVar78 + fVar78) - 0.5) >> 1;
            iVar44 = (int)ROUND((fVar75 + fVar75) - 0.5) >> 1;
            iVar41 = -((int)ROUND(-0.5 - (fVar78 + fVar78)) >> 1);
            iVar33 = -((int)ROUND(-0.5 - (fVar75 + fVar75)) >> 1);
            iVar50 = iVar34;
            if (iVar47 <= iVar34) {
              iVar50 = iVar47;
            }
            iVar47 = iVar34;
            if (iVar44 <= iVar34) {
              iVar47 = iVar44;
            }
            iVar44 = iVar34;
            if (iVar41 <= iVar34) {
              iVar44 = iVar41;
            }
            iVar41 = iVar34;
            if (iVar33 <= iVar34) {
              iVar41 = iVar33;
            }
            lVar46 = **(longlong **)(param_1 + 0xb0);
            fVar63 = ((float)*(ushort *)(lVar46 + (longlong)(iVar47 * iVar59 + iVar50) * 2) -
                     32768.0) * 0.0078125;
            fVar71 = ((float)*(ushort *)(lVar46 + (longlong)(iVar41 * iVar59 + iVar50) * 2) -
                     32768.0) * 0.0078125;
            fVar74 = (float)*(int *)(param_1 + 0x6c) * *(float *)(param_1 + 0xc);
            fVar68 = fVar61 - fVar74;
            fVar63 = (((float)*(ushort *)(lVar46 + (longlong)(iVar47 * iVar59 + iVar44) * 2) -
                      32768.0) * 0.0078125 - fVar63) * (fVar78 - (float)(int)fVar78) + fVar63;
            fVar78 = ((((((float)*(ushort *)(lVar46 + (longlong)(iVar41 * iVar59 + iVar44) * 2) -
                         32768.0) * 0.0078125 - fVar71) * (fVar78 - (float)(int)fVar78) + fVar71) -
                      fVar63) * (fVar75 - (float)(int)fVar75) + fVar63) * *(float *)(param_1 + 0x10)
            ;
            fVar75 = fVar77;
            if (0.5 <= fVar91) {
              fVar75 = -fVar77;
            }
            fVar91 = *(float *)(param_1 + 0x78);
            fVar75 = fVar75 + fVar61;
            if ((fVar91 <= fVar75) &&
               (fVar91 = fVar91 + *(float *)(param_1 + 0x84), fVar75 <= fVar91)) {
              fVar91 = fVar75;
            }
            fVar65 = fVar80 * local_388 - fVar65;
            fVar74 = fVar91 - fVar74;
            fVar62 = fVar72 * fVar91 - fVar62;
            iVar47 = (int)ROUND((fVar65 + fVar65) - 0.5) >> 1;
            iVar44 = (int)ROUND((fVar62 + fVar62) - 0.5) >> 1;
            iVar41 = -((int)ROUND(-0.5 - (fVar65 + fVar65)) >> 1);
            iVar33 = -((int)ROUND(-0.5 - (fVar62 + fVar62)) >> 1);
            iVar50 = iVar34;
            if (iVar47 <= iVar34) {
              iVar50 = iVar47;
            }
            iVar47 = iVar34;
            if (iVar44 <= iVar34) {
              iVar47 = iVar44;
            }
            iVar44 = iVar34;
            if (iVar41 <= iVar34) {
              iVar44 = iVar41;
            }
            if (iVar33 <= iVar34) {
              iVar34 = iVar33;
            }
            fVar91 = ((float)*(ushort *)(lVar46 + (longlong)(iVar50 + iVar47 * iVar59) * 2) -
                     32768.0) * 0.0078125;
            fVar61 = ((float)*(ushort *)(lVar46 + (longlong)(iVar34 * iVar59 + iVar50) * 2) -
                     32768.0) * 0.0078125;
            fVar91 = (((float)*(ushort *)(lVar46 + (longlong)(iVar44 + iVar47 * iVar59) * 2) -
                      32768.0) * 0.0078125 - fVar91) * (fVar65 - (float)(int)fVar65) + fVar91;
            fVar91 = ((((((float)*(ushort *)(lVar46 + (longlong)(iVar34 * iVar59 + iVar44) * 2) -
                         32768.0) * 0.0078125 - fVar61) * (fVar65 - (float)(int)fVar65) + fVar61) -
                      fVar91) * (fVar62 - (float)(int)fVar62) + fVar91) * *(float *)(param_1 + 0x10)
            ;
            if (((fVar67 == fVar79 - fVar70) && (fVar66 == fVar68)) && (fVar64 == fVar78))
            goto LAB_141efffc5;
            if (((fVar67 == local_388 - fVar70) && (fVar66 == fVar74)) && (fVar64 == fVar91)) {
              bVar32 = false;
            }
            else {
              bVar32 = true;
            }
            if (!bVar32) goto LAB_141efffc5;
            fVar65 = fVar67 - (fVar79 - fVar70);
            fVar68 = fVar66 - fVar68;
            fVar79 = fVar67 - (local_388 - fVar70);
            fVar78 = fVar64 - fVar78;
            fVar74 = fVar66 - fVar74;
            fVar91 = fVar64 - fVar91;
            fVar62 = fVar68 * fVar91 - fVar78 * fVar74;
            fVar61 = fVar65 * fVar74 - fVar68 * fVar79;
            fVar91 = fVar78 * fVar79 - fVar65 * fVar91;
            fVar79 = fVar91 * fVar91 + fVar62 * fVar62 + fVar61 * fVar61;
            fStack_1d4 = fVar91;
            local_1d8 = fVar62;
            fStack_1d0 = fVar61;
            if ((fVar79 != 1.0) &&
               (fStack_1d4 = DAT_1468b5d94, local_1d8 = DAT_1468b5d90, fStack_1d0 = DAT_1468b5d98,
               1e-08 <= fVar79)) {
              auVar73 = rsqrtss(ZEXT416((uint)fVar79),ZEXT416((uint)fVar79));
              fVar65 = auVar73._0_4_;
              fVar65 = fVar65 + fVar65 * (0.5 - fVar79 * 0.5 * fVar65 * fVar65);
              fVar65 = fVar65 + fVar65 * (0.5 - fVar79 * 0.5 * fVar65 * fVar65);
              fStack_1d4 = fVar65 * fVar91;
              local_1d8 = fVar65 * fVar62;
              fStack_1d0 = fVar65 * fVar61;
            }
            if (fStack_1d0 <= 0.0) {
              if (0.0 <= fStack_1d0) {
                fVar79 = 0.0;
              }
              else {
                fVar79 = -1.0;
              }
            }
            else {
              fVar79 = 1.0;
            }
            fStack_1d0 = fStack_1d0 * fVar79;
            local_1d8 = local_1d8 * fVar79;
            fStack_1d4 = fStack_1d4 * fVar79;
            fVar79 = -fStack_1d0;
            fVar91 = fVar79 * fVar79 + local_1d8 * local_1d8;
            fStack_1f0 = local_1d8;
            if (fVar91 == 1.0) {
LAB_141effb48:
              fStack_1f4 = 0.0;
              local_1f8 = fVar79;
            }
            else {
              fStack_1f4 = DAT_1468b5d94;
              local_1f8 = DAT_1468b5d90;
              fStack_1f0 = DAT_1468b5d98;
              if (1e-08 <= fVar91) {
                auVar73 = rsqrtss(ZEXT416((uint)fVar91),ZEXT416((uint)fVar91));
                fVar65 = auVar73._0_4_;
                fVar65 = fVar65 + fVar65 * (0.5 - fVar91 * 0.5 * fVar65 * fVar65);
                fVar65 = fVar65 + fVar65 * (0.5 - fVar91 * 0.5 * fVar65 * fVar65);
                fVar79 = fVar65 * fVar79;
                fStack_1f0 = fVar65 * local_1d8;
                goto LAB_141effb48;
              }
            }
            local_1e8 = fStack_1f0 * fStack_1d4 - fStack_1f4 * fStack_1d0;
            fStack_1e4 = local_1f8 * fStack_1d0 - fStack_1f0 * local_1d8;
            fStack_1e0 = fStack_1f4 * local_1d8 - local_1f8 * fStack_1d4;
            uStack_1ec = 0;
            uStack_1dc = 0;
            uStack_1cc = 0;
            local_1c8 = DAT_1468b5d90;
            fStack_1c4 = DAT_1468b5d94;
            fStack_1c0 = DAT_1468b5d98;
            uStack_1bc = 0x3f800000;
            fVar86 = fStack_374 * local_1e8 + local_378 * local_1f8 + fStack_370 * local_1d8 +
                     DAT_1468b5d90 * 0.0;
            fVar87 = fStack_374 * fStack_1e4 + local_378 * fStack_1f4 + fStack_370 * fStack_1d4 +
                     DAT_1468b5d94 * 0.0;
            fVar89 = fStack_374 * fStack_1e0 + local_378 * fStack_1f0 + fStack_370 * fStack_1d0 +
                     DAT_1468b5d98 * 0.0;
            fVar90 = fStack_374 * 0.0 + local_378 * 0.0 + fStack_370 * 0.0 + 0.0;
            fVar79 = *(float *)(param_1 + 0x130);
            fVar91 = *(float *)(param_1 + 0x134);
            fVar65 = *(float *)(param_1 + 0x138);
            fVar61 = *(float *)(param_1 + 0x13c);
            fVar81 = fStack_364 * local_1e8 + local_368 * local_1f8 + fStack_360 * local_1d8 +
                     DAT_1468b5d90 * 0.0;
            fVar82 = fStack_364 * fStack_1e4 + local_368 * fStack_1f4 + fStack_360 * fStack_1d4 +
                     DAT_1468b5d94 * 0.0;
            fStack_160 = fStack_364 * fStack_1e0 + local_368 * fStack_1f0 + fStack_360 * fStack_1d0
                         + DAT_1468b5d98 * 0.0;
            fStack_15c = fStack_364 * 0.0 + local_368 * 0.0 + fStack_360 * 0.0 + 0.0;
            local_168 = CONCAT44(fVar82,fVar81);
            fVar83 = fStack_354 * local_1e8 + local_358 * local_1f8 + fStack_350 * local_1d8 +
                     DAT_1468b5d90 * 0.0;
            fVar84 = fStack_354 * fStack_1e4 + local_358 * fStack_1f4 + fStack_350 * fStack_1d4 +
                     DAT_1468b5d94 * 0.0;
            fStack_170 = fStack_354 * fStack_1e0 + local_358 * fStack_1f0 + fStack_350 * fStack_1d0
                         + DAT_1468b5d98 * 0.0;
            fStack_16c = fStack_354 * 0.0 + local_358 * 0.0 + fStack_350 * 0.0 + 0.0;
            local_178 = CONCAT44(fVar84,fVar83);
            fVar85 = DAT_1468b5d94 * fStack_1e4 + DAT_1468b5d90 * fStack_1f4 +
                     DAT_1468b5d98 * fStack_1d4 + DAT_1468b5d94 * 1.0;
            fStack_220 = DAT_1468b5d94 * fStack_1e0 + DAT_1468b5d90 * fStack_1f0 +
                         DAT_1468b5d98 * fStack_1d0 + DAT_1468b5d98 * 1.0;
            fStack_21c = DAT_1468b5d94 * 0.0 + DAT_1468b5d90 * 0.0 + DAT_1468b5d98 * 0.0 + 1.0;
            fVar67 = DAT_1468b5d94 * local_1e8 + DAT_1468b5d90 * local_1f8 +
                     DAT_1468b5d98 * local_1d8 + DAT_1468b5d90 * 1.0 + fVar67;
            fVar64 = fStack_220 + fVar64;
            fVar62 = *(float *)(param_1 + 0x110);
            fVar70 = *(float *)(param_1 + 0x114);
            fVar72 = *(float *)(param_1 + 0x118);
            fVar75 = *(float *)(param_1 + 0x11c);
            local_228 = CONCAT44(fVar85,fVar67);
            local_2c8 = CONCAT44(fVar87,fVar86);
            uStack_2c0 = CONCAT44(fVar90,fVar89);
            fVar85 = fVar85 + fVar66;
            fVar66 = *(float *)(param_1 + 0x120);
            fVar78 = *(float *)(param_1 + 0x124);
            fVar80 = *(float *)(param_1 + 0x128);
            fVar63 = *(float *)(param_1 + 300);
            fVar68 = *(float *)(param_1 + 0x100);
            fVar71 = *(float *)(param_1 + 0x104);
            fVar74 = *(float *)(param_1 + 0x108);
            fVar88 = *(float *)(param_1 + 0x10c);
            local_1b8 = fVar86 * fVar68 + fVar87 * fVar62 + fVar89 * fVar66 + fVar90 * fVar79;
            fStack_1b4 = fVar86 * fVar71 + fVar87 * fVar70 + fVar89 * fVar78 + fVar90 * fVar91;
            fStack_1b0 = fVar86 * fVar74 + fVar87 * fVar72 + fVar89 * fVar80 + fVar90 * fVar65;
            fStack_1ac = fVar86 * fVar88 + fVar87 * fVar75 + fVar89 * fVar63 + fVar90 * fVar61;
            local_1a8 = fVar81 * fVar68 + fVar82 * fVar62 + fStack_160 * fVar66 +
                        fStack_15c * fVar79;
            fStack_1a4 = fVar81 * fVar71 + fVar82 * fVar70 + fStack_160 * fVar78 +
                         fStack_15c * fVar91;
            fStack_1a0 = fVar81 * fVar74 + fVar82 * fVar72 + fStack_160 * fVar80 +
                         fStack_15c * fVar65;
            fStack_19c = fVar81 * fVar88 + fVar82 * fVar75 + fStack_160 * fVar63 +
                         fStack_15c * fVar61;
            local_198 = fVar83 * fVar68 + fVar84 * fVar62 + fStack_170 * fVar66 +
                        fStack_16c * fVar79;
            fStack_194 = fVar83 * fVar71 + fVar84 * fVar70 + fStack_170 * fVar78 +
                         fStack_16c * fVar91;
            fStack_190 = fVar83 * fVar74 + fVar84 * fVar72 + fStack_170 * fVar80 +
                         fStack_16c * fVar65;
            fStack_18c = fVar83 * fVar88 + fVar84 * fVar75 + fStack_170 * fVar63 +
                         fStack_16c * fVar61;
            local_188 = fVar67 * fVar68 + fVar85 * fVar62 + fVar64 * fVar66 + fStack_21c * fVar79;
            fStack_184 = fVar67 * fVar71 + fVar85 * fVar70 + fVar64 * fVar78 + fStack_21c * fVar91;
            fStack_180 = fVar67 * fVar74 + fVar85 * fVar72 + fVar64 * fVar80 + fStack_21c * fVar65;
            fStack_17c = fVar67 * fVar88 + fVar85 * fVar75 + fVar64 * fVar63 + fStack_21c * fVar61;
          }
          uStack_33c = 0x3f800000;
          uStack_34c = 0;
          uStack_35c = 0;
          uStack_36c = 0;
          local_298 = local_378;
          local_288 = fStack_374;
          local_280 = fStack_370;
          local_278 = local_368;
          local_268 = fStack_360;
          local_258 = local_358;
          FUN_140487e30(&local_1f8,&local_1b8);
          uVar60 = local_390;
          lVar46 = (longlong)(int)local_390;
          iVar34 = (int)local_390 + 1;
          local_390 = CONCAT44(local_390._4_4_,iVar34);
          if (local_390._4_4_ < iVar34) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_398,uVar60 & 0xffffffff);
          }
          auVar31._4_4_ = fStack_1e4;
          auVar31._0_4_ = local_1e8;
          auVar31._8_4_ = fStack_1e0;
          auVar31._12_4_ = uStack_1dc;
          puVar35 = (undefined8 *)(lVar46 * 0x30 + local_398);
          *puVar35 = CONCAT44(fStack_1f4,local_1f8);
          puVar35[1] = CONCAT44(uStack_1ec,fStack_1f0);
          puVar35[4] = CONCAT44(fStack_1d4,local_1d8);
          puVar35[5] = CONCAT44(uStack_1cc,fStack_1d0);
          *(undefined1 (*) [16])(puVar35 + 2) = auVar31;
        }
        uVar40 = (int)uVar49 + 1;
        uVar49 = (ulonglong)uVar40;
      } while ((int)uVar40 < iVar58);
    }
    if ((int)local_390 != 0) {
      *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + (int)local_390;
      *(int *)(param_1 + 0x1e8) = (int)local_390;
      (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x10))();
      (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x10))
                (*(longlong **)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1e8));
      (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x10))
                (*(longlong **)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x1e8));
      (**(code **)(**(longlong **)(param_1 + 0x1b8) + 8))
                (*(longlong **)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1e8),3);
      uVar36 = (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x30))();
      *(undefined8 *)(param_1 + 0x1c0) = uVar36;
      (**(code **)(**(longlong **)(param_1 + 0x1d8) + 8))
                (*(longlong **)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1e8),3);
      uVar36 = (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x30))();
      *(undefined8 *)(param_1 + 0x1e0) = uVar36;
      (**(code **)(**(longlong **)(param_1 + 0x1c8) + 8))
                (*(longlong **)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x1e8),3);
      uVar36 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x30))();
      *(undefined8 *)(param_1 + 0x1d0) = uVar36;
      if (0 < (int)local_390) {
        do {
          uVar40 = *(int *)(param_1 + 0xf0) * 0xbb38435 + 0x3619636b;
          *(uint *)(param_1 + 0xf0) = uVar40;
          fVar76 = (float)(uVar40 & 0x7fffff | 0x3f800000);
          FUN_141f05df0(param_1,uVar54,(longlong)(int)uVar54 * 0x30 + local_398,
                        fVar76 - (float)(int)fVar76);
          uVar40 = (int)uVar54 + 1;
          uVar54 = (ulonglong)uVar40;
        } while ((int)uVar40 < (int)local_390);
      }
    }
  }
  LVar56.QuadPart = 0;
  iVar58 = (int)local_390;
  if ((int)local_390 != 0) {
    local_2b0 = 0;
    local_2a8 = 0;
    local_2c8 = 0;
    uStack_2c0 = 0;
    FUN_1424bc9f0(&local_398,param_1 + 0x140,param_1 + 0x1f0,&local_2b0,&local_2c8,param_1 + 0x200,
                  *(undefined4 *)(param_1 + 0x15c));
    if (0 < iVar58) {
      local_2f8 = 0;
      local_2f0 = 0;
      local_2e8 = 0;
      do {
        lVar38 = local_2e8;
        lVar46 = local_2f0;
        uVar54 = local_2f8;
        DVar21 = *(DWORD *)(local_2b0 + local_2f8 * 4);
        lVar45 = (longlong)(int)DVar21;
        DVar55 = LVar56.s.LowPart;
        if (DVar21 != DVar55) {
          lVar48 = *(longlong *)(param_1 + 0x1d0);
          pcVar22 = *(code **)(**(longlong **)(param_1 + 0x1c8) + 0x28);
          if (*(char *)(param_1 + 0x1ec) == '\0') {
            (*pcVar22)();
            (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x20))();
            puVar2 = (undefined4 *)(lVar38 + lVar48);
            uVar23 = *puVar2;
            uVar24 = puVar2[1];
            uVar25 = puVar2[2];
            uVar26 = puVar2[3];
            puVar35 = (undefined8 *)(lVar38 + 0x10 + lVar48);
            uVar36 = *puVar35;
            uVar4 = puVar35[1];
            puVar2 = (undefined4 *)(lVar38 + 0x20 + lVar48);
            uVar27 = *puVar2;
            uVar28 = puVar2[1];
            uVar29 = puVar2[2];
            uVar30 = puVar2[3];
            puVar35 = (undefined8 *)(lVar48 + lVar45 * 0x30);
            uVar5 = puVar35[1];
            *(undefined8 *)(lVar38 + lVar48) = *puVar35;
            ((undefined8 *)(lVar38 + lVar48))[1] = uVar5;
            puVar35 = (undefined8 *)(lVar48 + 0x10 + lVar45 * 0x30);
            uVar5 = puVar35[1];
            puVar3 = (undefined8 *)(lVar38 + 0x10 + lVar48);
            *puVar3 = *puVar35;
            puVar3[1] = uVar5;
            puVar35 = (undefined8 *)(lVar48 + 0x20 + lVar45 * 0x30);
            uVar5 = puVar35[1];
            puVar3 = (undefined8 *)(lVar38 + 0x20 + lVar48);
            *puVar3 = *puVar35;
            puVar3[1] = uVar5;
            puVar2 = (undefined4 *)(lVar48 + lVar45 * 0x30);
            *puVar2 = uVar23;
            puVar2[1] = uVar24;
            puVar2[2] = uVar25;
            puVar2[3] = uVar26;
            puVar35 = (undefined8 *)(lVar48 + 0x10 + lVar45 * 0x30);
            *puVar35 = uVar36;
            puVar35[1] = uVar4;
            puVar2 = (undefined4 *)(lVar48 + 0x20 + lVar45 * 0x30);
            *puVar2 = uVar27;
            puVar2[1] = uVar28;
            puVar2[2] = uVar29;
            puVar2[3] = uVar30;
          }
          else {
            (*pcVar22)();
            (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x20))();
            lVar38 = (longlong)(int)DVar55;
            uVar10 = *(undefined2 *)(lVar48 + 8 + lVar38 * 0x18);
            lVar46 = lVar48 + lVar38 * 0x18;
            uVar11 = *(undefined2 *)(lVar46 + 10);
            uVar12 = *(undefined2 *)(lVar46 + 0x10);
            uVar13 = *(undefined2 *)(lVar46 + 0x12);
            uVar14 = *(undefined2 *)(lVar46 + 0x14);
            uVar15 = *(undefined2 *)(lVar46 + 0x16);
            local_388 = (float)CONCAT22(local_388._2_2_,*(undefined2 *)(lVar48 + lVar38 * 0x18));
            uVar16 = *(undefined2 *)(lVar46 + 2);
            uVar17 = *(undefined2 *)(lVar46 + 4);
            uVar18 = *(undefined2 *)(lVar46 + 6);
            uVar19 = *(undefined2 *)(lVar46 + 0xc);
            uVar20 = *(undefined2 *)(lVar46 + 0xe);
            local_248 = (longlong)(int)DVar21;
            puVar1 = (undefined2 *)(lVar48 + local_248 * 0x18);
            FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>::operator=(lVar46,puVar1);
            *puVar1 = local_388._0_2_;
            puVar1[1] = uVar16;
            puVar1[2] = uVar17;
            puVar1[3] = uVar18;
            puVar1[6] = uVar19;
            puVar1[4] = uVar10;
            puVar1[5] = uVar11;
            DVar55 = local_208.s.LowPart;
            puVar1[7] = uVar20;
            puVar1[8] = uVar12;
            puVar1[9] = uVar13;
            puVar1[10] = uVar14;
            puVar1[0xb] = uVar15;
            param_1 = local_158;
            lVar45 = local_248;
            lVar46 = local_2f0;
            uVar54 = local_2f8;
            lVar38 = local_2e8;
          }
          lVar48 = *(longlong *)(param_1 + 0x1c0);
          (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x28))();
          (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x20))();
          auVar73 = *(undefined1 (*) [16])(lVar46 + lVar48);
          puVar35 = (undefined8 *)(lVar48 + lVar45 * 0x10);
          uVar36 = puVar35[1];
          *(undefined8 *)(lVar46 + lVar48) = *puVar35;
          ((undefined8 *)(lVar46 + lVar48))[1] = uVar36;
          *(undefined1 (*) [16])(lVar48 + lVar45 * 0x10) = auVar73;
          lVar48 = *(longlong *)(param_1 + 0x1e0);
          (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x28))();
          (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x20))();
          uVar36 = *(undefined8 *)(lVar48 + uVar54 * 8);
          *(undefined8 *)(lVar48 + uVar54 * 8) = *(undefined8 *)(lVar48 + lVar45 * 8);
          *(undefined8 *)(lVar48 + lVar45 * 8) = uVar36;
          iVar34 = *(int *)(local_2c8 + uVar54 * 4);
          *(DWORD *)(local_2b0 + (longlong)iVar34 * 4) = DVar21;
          *(int *)(local_2c8 + lVar45 * 4) = iVar34;
          *(DWORD *)(local_2c8 + uVar54 * 4) = DVar55;
          *(DWORD *)(local_2b0 + uVar54 * 4) = DVar55;
        }
        LVar56._0_4_ = DVar55 + 1;
        LVar56.s.HighPart = 0;
        local_2f8 = uVar54 + 1;
        local_2e8 = lVar38 + 0x30;
        local_2f0 = lVar46 + 0x10;
        local_208 = LVar56;
      } while ((longlong)local_2f8 < (longlong)iVar58);
    }
    if (local_2c8 != 0) {
      FMemory::Free();
    }
    if (local_2b0 != 0) {
      FMemory::Free();
    }
  }
  if (local_398 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f01930 FUN_141f01930 body=3396 status=ok
// SIG undefined FUN_141f01930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141f01930(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  byte bVar7;
  void *pvVar8;
  float fVar9;
  float fVar10;
  byte bVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  char *pcVar24;
  char *pcVar25;
  byte bVar26;
  uint uVar27;
  int iVar28;
  longlong lVar29;
  undefined2 *puVar30;
  char *pcVar31;
  undefined4 *puVar32;
  uint uVar33;
  undefined2 *puVar34;
  byte *pbVar35;
  undefined8 *puVar36;
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStack_2c8 [32];
  undefined8 *local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  undefined8 local_290;
  uint local_288;
  undefined4 local_280;
  int local_278;
  char local_268;
  char local_267;
  char local_266;
  char local_265;
  byte local_264;
  int local_260;
  undefined4 local_25c;
  uint local_258;
  undefined4 *local_250;
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  undefined4 local_238;
  undefined4 local_234;
  longlong local_230;
  undefined8 *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8 [8];
  LARGE_INTEGER local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  ulonglong local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  undefined4 *local_1b0;
  undefined2 *local_1a8;
  int local_1a0;
  longlong local_198 [2];
  longlong local_188 [2];
  longlong local_178 [2];
  longlong local_168 [2];
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [128];
  longlong local_a8;
  byte *local_a0;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_244 = *(int *)(param_2 + 0x38);
  fVar3 = *(float *)(param_2 + 0x30);
  local_267 = *(char *)(param_2 + 0x3f);
  puVar32 = *(undefined4 **)(param_2 + 0x40);
  local_268 = *(char *)(param_2 + 0x3e);
  local_266 = *(char *)(param_2 + 0x3d);
  local_260 = 0;
  local_234 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x1b8) + 8);
  local_1b0 = puVar32 + (longlong)*(int *)(param_2 + 0x48) * 0x18;
  if (puVar32 != local_1b0) {
    local_1d8 = (ulonglong)_tls_index;
    local_230 = param_1;
    local_1c8 = param_2;
    do {
      iVar28 = local_260;
      local_250 = puVar32;
      lVar15 = FWeakObjectPtr::Get(puVar32 + 2);
      local_1c0 = lVar15;
      lVar16 = FWeakObjectPtr::Get(puVar32);
      local_240 = puVar32[0x14];
      iVar12 = puVar32[9];
      fVar4 = (float)puVar32[0x12];
      fVar5 = (float)puVar32[0x13];
      local_258 = puVar32[6];
      puVar36 = (undefined8 *)(*(longlong *)(lVar15 + 0x28) + (longlong)iVar12 * 0x48);
      local_25c = puVar32[7];
      local_238 = puVar32[4];
      local_23c = puVar32[0x15];
      local_265 = *(char *)(puVar32 + 0x16);
      local_228 = puVar36;
      local_1b8 = lVar16;
      TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
      ::FindId(param_1 + 0x510,&local_248,puVar32);
      if ((local_248 == -1) ||
         (lVar29 = (longlong)local_248 * 0x50 + *(longlong *)(param_1 + 0x510), iVar28 = local_260,
         lVar29 == 0)) {
        if ((fVar4 <= fVar5) &&
           ((local_267 != '\0' || ((iVar28 == 0 && (*(int *)(param_1 + 0x568) < local_244)))))) {
          local_1e8 = *(undefined8 *)(lVar16 + 0x18);
          local_260 = iVar28 + 1;
          FName::ToString(&local_1e8,local_188);
          puVar17 = (undefined8 *)FString::ToLower(local_188,local_168);
          if (*(int *)(puVar17 + 1) == 0) {
            puVar30 = &DAT_143f3eda8;
          }
          else {
            puVar30 = (undefined2 *)*puVar17;
          }
          local_1e0 = *(undefined8 *)(lVar15 + 0x18);
          FName::ToString(&local_1e0,local_198);
          puVar17 = (undefined8 *)FString::ToLower(local_198,local_178);
          if (*(int *)(puVar17 + 1) == 0) {
            puVar34 = &DAT_143f3eda8;
          }
          else {
            puVar34 = (undefined2 *)*puVar17;
          }
          local_298 = (longlong *)CONCAT44(local_298._4_4_,iVar12);
          local_2a0 = CONCAT44(local_2a0._4_4_,local_25c);
          local_2a8 = (undefined8 *)CONCAT44(local_2a8._4_4_,local_258);
          FString::PrintfImpl(&local_1a8,L"%s%s%d %d %d",puVar34,puVar30);
          puVar30 = &DAT_143f3eda8;
          if (local_1a0 != 0) {
            puVar30 = local_1a8;
          }
          TStringConversion<TStringConvert<wchar_t,char>,128>::
          TStringConversion<TStringConvert<wchar_t,char>,128>(local_128,puVar30);
          uVar27 = 0xffffffff;
          bVar11 = *local_a0;
          pbVar35 = local_a0;
          while (bVar11 != 0) {
            pbVar35 = pbVar35 + 1;
            uVar27 = *(uint *)(&DAT_1464aaab0 + (ulonglong)((bVar11 ^ uVar27) & 0xff) * 4) ^
                     uVar27 >> 8;
            uVar27 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar27 & 0xff) * 4) ^ uVar27 >> 8;
            uVar27 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar27 & 0xff) * 4) ^ uVar27 >> 8;
            uVar27 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar27 & 0xff) * 4) ^ uVar27 >> 8;
            bVar11 = *pbVar35;
          }
          if (local_a8 != 0) {
            FMemory::Free();
          }
          if (local_1a8 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_178[0] != 0) {
            FMemory::Free();
          }
          if (local_198[0] != 0) {
            FMemory::Free();
          }
          if (local_168[0] != 0) {
            FMemory::Free();
          }
          if (local_188[0] != 0) {
            FMemory::Free();
          }
          uVar33 = 1;
          if (~uVar27 != 0) {
            uVar33 = ~uVar27;
          }
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff7;
          lVar15 = UObjectBaseUtility::GetOutermost(param_1);
          local_218 = 0;
          local_210 = 0;
          local_264 = *(byte *)(lVar15 + 0x28) & 1;
          FUN_1417846f0(param_1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          uVar18 = AUGCompanionAIController::GetPrivateStaticClass();
          local_288 = local_288 & 0xffffff00;
          local_290 = 0;
          local_298 = (longlong *)((ulonglong)local_298 & 0xffffffffffffff00);
          local_2a0 = 0;
          local_2a8 = (undefined8 *)((ulonglong)local_2a8 & 0xffffffff00000000);
          plVar19 = (longlong *)FUN_1417985e0(uVar18,param_1,0,0x40);
          local_1d0 = plVar19;
          FWeakObjectPtr::operator=(puVar32 + 10,plVar19);
          FUN_141efbb70(param_1 + 0x510,local_1f8,puVar32,0);
          *(undefined1 *)((longlong)plVar19 + 0x24e) = 0;
          (**(code **)(*plVar19 + 0x928))(plVar19,*puVar36);
          uVar13 = *(undefined4 *)((longlong)puVar36 + 0x1c);
          *(byte *)((longlong)plVar19 + 0x2f1) = *(byte *)((longlong)plVar19 + 0x2f1) & 0xf5;
          pvVar8 = ThreadLocalStoragePointer;
          *(undefined4 *)(plVar19 + 0xe4) = uVar13;
          *(byte *)(plVar19 + 0x5e) =
               *(byte *)(plVar19 + 0x5e) ^
               (*(char *)(puVar36 + 8) << 3 ^ *(byte *)(plVar19 + 0x5e)) & 8;
          if ((*(int *)(*(longlong *)((longlong)pvVar8 + local_1d8 * 8) + 0x38) < DAT_146ac4730) &&
             (_Init_thread_header(&DAT_146ac4730), DAT_146ac4730 == -1)) {
            FName::FName(&DAT_146ac4728,L"NoCollision",1);
            _Init_thread_footer(&DAT_146ac4730);
          }
          (**(code **)(*plVar19 + 0x640))(plVar19,DAT_146ac4728);
          *(undefined1 *)((longlong)plVar19 + 0x8f4) = 1;
          FUN_14234fe40(plVar19,0);
          *(uint *)(plVar19 + 0xf7) = uVar33;
          uVar6 = *(undefined1 *)((longlong)puVar36 + 0x3f);
          *(byte *)((longlong)plVar19 + 0x2f2) = *(byte *)((longlong)plVar19 + 0x2f2) & 0xfe;
          *(undefined1 *)((longlong)plVar19 + 0x304) = uVar6;
          if ((*(char *)((longlong)puVar36 + 0x42) == '\0') || (local_268 != '\0')) {
            bVar11 = 0;
          }
          else {
            bVar11 = 0x10;
          }
          bVar7 = *(byte *)((longlong)plVar19 + 0x2f1);
          *(byte *)((longlong)plVar19 + 0x2f1) = bVar7 & 0xef | bVar11;
          if ((*(char *)((longlong)puVar36 + 0x42) == '\0') || (local_268 != '\0')) {
            bVar26 = 0;
          }
          else {
            bVar26 = 0x80;
          }
          bVar26 = bVar7 & 0x6f | bVar11 | bVar26;
          *(byte *)((longlong)plVar19 + 0x2f1) = bVar26;
          *(byte *)((longlong)plVar19 + 0x2f1) =
               (*(byte *)((longlong)puVar36 + 0x41) ^ bVar26) & 1 ^ bVar26;
          plVar20 = (longlong *)FUN_141ef84f0(lVar16);
          if ((((*(char *)((longlong)puVar36 + 0x3e) != '\0') &&
               (iVar12 = UStaticMesh::GetNumLODs(*puVar36), 0 < iVar12)) &&
              (plVar20 != (longlong *)0x0)) && (*plVar20 != 0)) {
            uVar13 = UStaticMesh::GetNumLODs(*puVar36);
            uVar14 = UStaticMesh::GetNumLODs(*puVar36);
            FUN_142826ef0(plVar19,uVar14,uVar13);
            plVar21 = (longlong *)operator_new(0x160);
            if (plVar21 == (longlong *)0x0) {
              plVar21 = (longlong *)0x0;
            }
            else {
              lVar15 = (**(code **)(*(longlong *)*plVar20 + 0x30))();
              *plVar21 = (longlong)&PTR__scalar_deleting_destructor__144eedec0;
              plVar21[1] = 0;
              iVar12 = *(int *)(lVar15 + 0x10);
              pvVar8 = *(void **)(lVar15 + 8);
              *(int *)(plVar21 + 2) = iVar12;
              if (iVar12 == 0) {
                *(undefined4 *)((longlong)plVar21 + 0x14) = 0;
              }
              else {
                TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar21 + 1,iVar12,0);
                _guard_xfg_dispatch_icall_nop((void *)plVar21[1],pvVar8,(longlong)iVar12 << 4);
              }
              *(undefined1 *)(plVar21 + 3) = *(undefined1 *)(lVar15 + 0x18);
              *(undefined4 *)((longlong)plVar21 + 0x1c) = *(undefined4 *)(lVar15 + 0x1c);
              *(undefined1 *)(plVar21 + 4) = *(undefined1 *)(lVar15 + 0x20);
              *plVar21 = (longlong)&PTR_FUN_144eedf00;
              lVar16 = *(longlong *)(lVar15 + 0x30);
              plVar21[5] = *(longlong *)(lVar15 + 0x28);
              plVar21[6] = lVar16;
              plVar21[7] = *(longlong *)(lVar15 + 0x38);
              plVar21[8] = *(longlong *)(lVar15 + 0x40);
              lVar16 = *(longlong *)(lVar15 + 0x58);
              plVar21[10] = *(longlong *)(lVar15 + 0x50);
              plVar21[0xb] = lVar16;
              lVar16 = *(longlong *)(lVar15 + 0x68);
              plVar21[0xc] = *(longlong *)(lVar15 + 0x60);
              plVar21[0xd] = lVar16;
              lVar16 = *(longlong *)(lVar15 + 0x78);
              plVar21[0xe] = *(longlong *)(lVar15 + 0x70);
              plVar21[0xf] = lVar16;
              lVar16 = *(longlong *)(lVar15 + 0x88);
              plVar21[0x10] = *(longlong *)(lVar15 + 0x80);
              plVar21[0x11] = lVar16;
              lVar16 = *(longlong *)(lVar15 + 0x98);
              plVar21[0x12] = *(longlong *)(lVar15 + 0x90);
              plVar21[0x13] = lVar16;
              lVar16 = *(longlong *)(lVar15 + 0xa8);
              plVar21[0x14] = *(longlong *)(lVar15 + 0xa0);
              plVar21[0x15] = lVar16;
              lVar16 = *(longlong *)(lVar15 + 0xb8);
              plVar21[0x16] = *(longlong *)(lVar15 + 0xb0);
              plVar21[0x17] = lVar16;
              lVar16 = *(longlong *)(lVar15 + 200);
              plVar21[0x18] = *(longlong *)(lVar15 + 0xc0);
              plVar21[0x19] = lVar16;
              lVar16 = *(longlong *)(lVar15 + 0xd8);
              plVar21[0x1a] = *(longlong *)(lVar15 + 0xd0);
              plVar21[0x1b] = lVar16;
              lVar16 = *(longlong *)(lVar15 + 0xe8);
              plVar21[0x1c] = *(longlong *)(lVar15 + 0xe0);
              plVar21[0x1d] = lVar16;
              lVar16 = *(longlong *)(lVar15 + 0xf8);
              plVar21[0x1e] = *(longlong *)(lVar15 + 0xf0);
              plVar21[0x1f] = lVar16;
              lVar16 = *(longlong *)(lVar15 + 0x108);
              plVar21[0x20] = *(longlong *)(lVar15 + 0x100);
              plVar21[0x21] = lVar16;
              lVar16 = *(longlong *)(lVar15 + 0x118);
              plVar21[0x22] = *(longlong *)(lVar15 + 0x110);
              plVar21[0x23] = lVar16;
              lVar16 = *(longlong *)(lVar15 + 0x128);
              plVar21[0x24] = *(longlong *)(lVar15 + 0x120);
              plVar21[0x25] = lVar16;
              lVar16 = *(longlong *)(lVar15 + 0x138);
              plVar21[0x26] = *(longlong *)(lVar15 + 0x130);
              plVar21[0x27] = lVar16;
              lVar16 = *(longlong *)(lVar15 + 0x148);
              plVar21[0x28] = *(longlong *)(lVar15 + 0x140);
              plVar21[0x29] = lVar16;
              plVar21[0x2a] = *(longlong *)(lVar15 + 0x150);
              plVar21[0x2b] = *(longlong *)(lVar15 + 0x158);
              *plVar21 = (longlong)&PTR_FUN_144eedf00;
              *(undefined4 *)(plVar21 + 0x2a) = (undefined4)DAT_1468b5d88;
              *(undefined4 *)((longlong)plVar21 + 0x154) = DAT_1468b5d88._4_4_;
              *(undefined4 *)(plVar21 + 0x2b) = (undefined4)DAT_1468b5d88;
              *(undefined4 *)((longlong)plVar21 + 0x15c) = DAT_1468b5d88._4_4_;
              *(undefined4 *)((longlong)plVar21 + 0x1c) = 1;
            }
            if ((plVar20[1] == 0) ||
               (plVar22 = (longlong *)operator_new(0x50), plVar22 == (longlong *)0x0)) {
              plVar22 = (longlong *)0x0;
            }
            else {
              lVar15 = (**(code **)(*(longlong *)plVar20[1] + 0x30))();
              *plVar22 = (longlong)&PTR_FUN_144eedf40;
              plVar22[1] = 0;
              iVar12 = *(int *)(lVar15 + 0x10);
              pvVar8 = *(void **)(lVar15 + 8);
              *(int *)(plVar22 + 2) = iVar12;
              if (iVar12 == 0) {
                *(undefined4 *)((longlong)plVar22 + 0x14) = 0;
              }
              else {
                TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar22 + 1,iVar12,0);
                _guard_xfg_dispatch_icall_nop((void *)plVar22[1],pvVar8,(longlong)iVar12 << 4);
              }
              *(undefined4 *)(plVar22 + 3) = *(undefined4 *)(lVar15 + 0x18);
              *(undefined1 *)((longlong)plVar22 + 0x1c) = *(undefined1 *)(lVar15 + 0x1c);
              *plVar22 = (longlong)&PTR__scalar_deleting_destructor__144eedf80;
              plVar22[4] = *(longlong *)(lVar15 + 0x20);
              plVar22[5] = *(longlong *)(lVar15 + 0x28);
              plVar22[6] = *(longlong *)(lVar15 + 0x30);
              *(undefined4 *)(plVar22 + 7) = *(undefined4 *)(lVar15 + 0x38);
              lVar16 = *(longlong *)(lVar15 + 0x40);
              lVar15 = *(longlong *)(lVar15 + 0x48);
              *plVar22 = (longlong)&PTR__scalar_deleting_destructor__144eedf80;
              plVar22[8] = lVar16;
              plVar22[9] = lVar15;
              *(undefined4 *)(plVar22 + 5) = (undefined4)DAT_1468b5d88;
              *(undefined4 *)((longlong)plVar22 + 0x2c) = DAT_1468b5d88._4_4_;
              *(undefined4 *)(plVar22 + 6) = (undefined4)DAT_1468b5d88;
              *(undefined4 *)((longlong)plVar22 + 0x34) = DAT_1468b5d88._4_4_;
              *(undefined4 *)(plVar22 + 3) = 1;
            }
            lVar15 = plVar19[0xeb];
            lVar16 = (longlong)(int)plVar19[0xec] * 0xc0 + lVar15;
            local_200 = lVar16;
            if (lVar15 != lVar16) {
              plVar20 = (longlong *)(lVar15 + 0x18);
              do {
                lVar23 = operator_new(0x30);
                lVar29 = 0;
                if (lVar23 != 0) {
                  lVar29 = FUN_14217c900(lVar23);
                }
                if (plVar20 == &local_208) {
                  local_208 = lVar29;
                  if (lVar29 != 0) {
                    FMeshMapBuildData::~FMeshMapBuildData(lVar29);
                    FMemory::operator_delete(lVar29,0x30);
                  }
                }
                else {
                  lVar23 = *plVar20;
                  *plVar20 = lVar29;
                  local_208 = 0;
                  lVar16 = local_200;
                  if (lVar23 != 0) {
                    FMeshMapBuildData::~FMeshMapBuildData(lVar23);
                    FMemory::operator_delete(lVar23,0x30);
                    lVar16 = local_200;
                  }
                }
                plVar19 = *(longlong **)*plVar20;
                *(longlong **)*plVar20 = plVar21;
                if (plVar21 != (longlong *)0x0) {
                  *(int *)((longlong)plVar21 + 0x1c) = *(int *)((longlong)plVar21 + 0x1c) + 1;
                }
                if (plVar19 != (longlong *)0x0) {
                  piVar1 = (int *)((longlong)plVar19 + 0x1c);
                  *piVar1 = *piVar1 + -1;
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar19 + 0x38))();
                  }
                }
                plVar19 = *(longlong **)(*plVar20 + 8);
                *(longlong **)(*plVar20 + 8) = plVar22;
                if (plVar22 != (longlong *)0x0) {
                  *(int *)(plVar22 + 3) = (int)plVar22[3] + 1;
                }
                if (plVar19 != (longlong *)0x0) {
                  plVar2 = plVar19 + 3;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  if ((int)*plVar2 == 0) {
                    (**(code **)(*plVar19 + 0x38))();
                  }
                }
                lVar15 = lVar15 + 0xc0;
                plVar20 = plVar20 + 0x18;
                plVar19 = local_1d0;
              } while (lVar15 != lVar16);
            }
            if (plVar22 != (longlong *)0x0) {
              plVar20 = plVar22 + 3;
              *(int *)plVar20 = (int)*plVar20 + -1;
              if ((int)*plVar20 == 0) {
                (**(code **)(*plVar22 + 0x38))(plVar22);
              }
            }
            puVar32 = local_250;
            param_1 = local_230;
            puVar36 = local_228;
            if (plVar21 != (longlong *)0x0) {
              piVar1 = (int *)((longlong)plVar21 + 0x1c);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                (**(code **)(*plVar21 + 0x38))(plVar21);
                puVar32 = local_250;
                param_1 = local_230;
                puVar36 = local_228;
              }
            }
          }
          if ((*(int *)(local_1c8 + 8) == 0) || (local_266 != '\0')) {
            iVar12 = 0;
            *(undefined4 *)((longlong)plVar19 + 0x7bc) = 0;
          }
          else {
            *(int *)((longlong)plVar19 + 0x7bc) =
                 (int)((float)*(int *)((longlong)puVar36 + 0x14) * fVar3);
            iVar12 = (int)((float)*(int *)(puVar36 + 3) * fVar3);
          }
          pcVar31 = (char *)0x0;
          *(int *)(plVar19 + 0xf8) = iVar12;
          *(byte *)((longlong)plVar19 + 0x2f1) = *(byte *)((longlong)plVar19 + 0x2f1) & 0xbf;
          local_220 = 0;
          FUN_142382f60(plVar19,*(undefined8 *)(param_1 + 0x168),&DAT_146af29ec,0);
          lVar15 = *(longlong *)(param_1 + 0x168);
          local_138._0_4_ = _DAT_146ac44a0 & _DAT_146ac4490;
          local_138._4_4_ = uRam0000000146ac44a4 & uRam0000000146ac4494;
          local_138._8_4_ = uRam0000000146ac44a8 & uRam0000000146ac4498;
          local_138._12_4_ = uRam0000000146ac44ac & uRam0000000146ac449c;
          fVar4 = *(float *)(lVar15 + 0x210);
          fVar5 = *(float *)(lVar15 + 0x214);
          fVar9 = *(float *)(lVar15 + 0x218);
          fVar10 = *(float *)(lVar15 + 0x21c);
          local_148 = *(undefined8 *)(lVar15 + 0x220);
          uStack_140 = *(undefined8 *)(lVar15 + 0x228);
          local_2a8 = (undefined8 *)((ulonglong)local_2a8 & 0xffffffffffffff00);
          fVar38 = fVar4 * fVar4 + fVar9 * fVar9;
          fVar39 = fVar5 * fVar5 + fVar10 * fVar10;
          fVar41 = fVar9 * fVar9 + fVar4 * fVar4;
          fVar43 = fVar10 * fVar10 + fVar5 * fVar5;
          fVar45 = fVar39 + fVar38;
          fVar39 = fVar41 + fVar39;
          fVar41 = fVar43 + fVar41;
          fVar38 = fVar38 + fVar43;
          auVar37._4_4_ = fVar39;
          auVar37._0_4_ = fVar45;
          auVar37._8_4_ = fVar41;
          auVar37._12_4_ = fVar38;
          auVar37 = rsqrtps(local_138,auVar37);
          fVar43 = auVar37._0_4_;
          fVar40 = auVar37._4_4_;
          fVar42 = auVar37._8_4_;
          fVar44 = auVar37._12_4_;
          fVar43 = (_DAT_146ac4460 - fVar43 * fVar43 * fVar45 * _DAT_146ac4460) * fVar43 + fVar43;
          fVar40 = (fRam0000000146ac4464 - fVar40 * fVar40 * fVar39 * fRam0000000146ac4464) * fVar40
                   + fVar40;
          fVar42 = (fRam0000000146ac4468 - fVar42 * fVar42 * fVar41 * fRam0000000146ac4468) * fVar42
                   + fVar42;
          fVar44 = (fRam0000000146ac446c - fVar44 * fVar44 * fVar38 * fRam0000000146ac446c) * fVar44
                   + fVar44;
          local_158 = ((uint)(((_DAT_146ac4460 - fVar43 * fVar43 * fVar45 * _DAT_146ac4460) * fVar43
                              + fVar43) * fVar4) ^ _DAT_146ac4450) &
                      -(uint)(_DAT_146ac4470 <= fVar45) ^ _DAT_146ac4450;
          uStack_154 = ((uint)(((fRam0000000146ac4464 -
                                fVar40 * fVar40 * fVar39 * fRam0000000146ac4464) * fVar40 + fVar40)
                              * fVar5) ^ uRam0000000146ac4454) &
                       -(uint)(fRam0000000146ac4474 <= fVar39) ^ uRam0000000146ac4454;
          uStack_150 = ((uint)(((fRam0000000146ac4468 -
                                fVar42 * fVar42 * fVar41 * fRam0000000146ac4468) * fVar42 + fVar42)
                              * fVar9) ^ uRam0000000146ac4458) &
                       -(uint)(fRam0000000146ac4478 <= fVar41) ^ uRam0000000146ac4458;
          uStack_14c = ((uint)(((fRam0000000146ac446c -
                                fVar44 * fVar44 * fVar38 * fRam0000000146ac446c) * fVar44 + fVar44)
                              * fVar10) ^ uRam0000000146ac445c) &
                       -(uint)(fRam0000000146ac447c <= fVar38) ^ uRam0000000146ac445c;
          FUN_142399d60(plVar19,&local_158,0,0);
          iVar12 = *(int *)(param_1 + 0x508);
          *(int *)(param_1 + 0x508) = iVar12 + 1;
          if (*(int *)(param_1 + 0x50c) < iVar12 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (param_1 + 0x500,iVar12);
          }
          *(longlong **)(*(longlong *)(param_1 + 0x500) + (longlong)iVar12 * 8) = plVar19;
          lVar15 = operator_new(0x210);
          pcVar24 = pcVar31;
          if (lVar15 != 0) {
            local_278 = local_240 - local_23c;
            if (local_265 == '\0') {
              local_278 = 0;
            }
            local_280 = local_25c;
            local_288 = local_258;
            local_290 = CONCAT44(local_290._4_4_,local_238);
            local_2a0 = CONCAT44(local_2a0._4_4_,local_234);
            local_2a8 = puVar36;
            local_298 = plVar19;
            pcVar24 = (char *)FUN_141efc410(lVar15,param_1,local_1b8,local_1c0);
          }
          if (*pcVar24 == '\0') {
            FAsyncGrassBuilder::_scalar_deleting_destructor_(pcVar24,1);
          }
          else {
            pcVar25 = (char *)operator_new(0x58);
            if (pcVar25 != (char *)0x0) {
              *(undefined ***)pcVar25 = &PTR_Abandon_144eee518;
              *(char **)(pcVar25 + 8) = pcVar24;
              *(undefined4 *)(pcVar25 + 0x10) = *puVar32;
              *(undefined4 *)(pcVar25 + 0x14) = puVar32[1];
              *(undefined4 *)(pcVar25 + 0x18) = puVar32[2];
              *(undefined4 *)(pcVar25 + 0x1c) = puVar32[3];
              *(undefined4 *)(pcVar25 + 0x20) = puVar32[4];
              *(undefined4 *)(pcVar25 + 0x24) = puVar32[5];
              *(undefined4 *)(pcVar25 + 0x28) = puVar32[6];
              *(undefined4 *)(pcVar25 + 0x2c) = puVar32[7];
              *(undefined4 *)(pcVar25 + 0x30) = puVar32[8];
              *(undefined4 *)(pcVar25 + 0x34) = puVar32[9];
              FWeakObjectPtr::operator=(pcVar25 + 0x38,plVar19);
              pcVar25[0x40] = '\0';
              pcVar25[0x41] = '\0';
              pcVar25[0x42] = '\0';
              pcVar25[0x43] = '\0';
              pcVar25[0x48] = '\0';
              pcVar25[0x49] = '\0';
              pcVar25[0x4a] = '\0';
              pcVar25[0x4b] = '\0';
              pcVar25[0x4c] = '\0';
              pcVar25[0x4d] = '\0';
              pcVar25[0x4e] = '\0';
              pcVar25[0x4f] = '\0';
              pcVar25[0x50] = '\0';
              pcVar25[0x51] = '\0';
              pcVar25[0x52] = '\0';
              pcVar25[0x53] = '\0';
              pcVar25[0x54] = '\0';
              pcVar25[0x55] = '\0';
              pcVar25[0x56] = '\0';
              pcVar25[0x57] = '\0';
              pcVar31 = pcVar25;
            }
            lVar15 = DAT_1468b5010;
            LOCK();
            *(int *)(pcVar31 + 0x40) = *(int *)(pcVar31 + 0x40) + 1;
            UNLOCK();
            plVar20 = *(longlong **)(pcVar31 + 0x48);
            *(longlong *)(pcVar31 + 0x50) = lVar15;
            if (lVar15 == 0) {
              FUN_1415b5910();
              pcVar31[0x48] = '\0';
              pcVar31[0x49] = '\0';
              pcVar31[0x4a] = '\0';
              pcVar31[0x4b] = '\0';
              pcVar31[0x4c] = '\0';
              pcVar31[0x4d] = '\0';
              pcVar31[0x4e] = '\0';
              pcVar31[0x4f] = '\0';
              FUN_141efed90(*(undefined8 *)(pcVar31 + 8));
              LOCK();
              *(int *)(pcVar31 + 0x40) = *(int *)(pcVar31 + 0x40) + -1;
              UNLOCK();
            }
            else {
              if (plVar20 == (longlong *)0x0) {
                plVar20 = (longlong *)FUN_1415ab270(1);
                *(longlong **)(pcVar31 + 0x48) = plVar20;
              }
              (**(code **)(*plVar20 + 0x18))();
              (**(code **)(**(longlong **)(pcVar31 + 0x50) + 0x10))
                        (*(longlong **)(pcVar31 + 0x50),pcVar31);
            }
            iVar12 = *(int *)(param_1 + 0x568);
            *(int *)(param_1 + 0x568) = iVar12 + 1;
            if (*(int *)(param_1 + 0x56c) < iVar12 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x560,iVar12);
            }
            *(char **)(*(longlong *)(param_1 + 0x560) + (longlong)iVar12 * 8) = pcVar31;
          }
          FUN_14234b150(plVar19);
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
          uVar18 = UObjectBaseUtility::GetOutermost(param_1);
          FUN_141764920(uVar18,local_264);
        }
      }
      else {
        *(undefined4 *)(lVar29 + 0x30) = DAT_1464aaa8c;
        QueryPerformanceCounter(&local_1f0);
        *(double *)(lVar29 + 0x38) = (double)local_1f0.QuadPart * DAT_1468b02f8 + 16777216.0;
      }
      puVar32 = puVar32 + 0x18;
    } while (puVar32 != local_1b0);
  }
  return;
}



// FUNCTION 141f02680 FUN_141f02680 body=509 status=ok
// SIG undefined FUN_141f02680(void)

void FUN_141f02680(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 2;
  plVar1 = (longlong *)param_2[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_3 == '\0') &&
     ((((*(byte *)(param_2 + 5) & 2) == 0 || (param_2[0xe] != 0)) &&
      ((*(byte *)((longlong)param_2 + 0x29) & 0x10) == 0)))) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 1) * 2,
               (longlong)*(int *)((longlong)param_1 + 0xc) * 2);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar1 = (longlong *)param_2[1];
      iVar3 = 0;
      local_res18[0] = 0;
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = 0;
      if (iVar2 != local_res18[0]) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      plVar1 = (longlong *)param_2[1];
      local_res18[0] = *(int *)(param_1 + 1);
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
  }
  else {
    FUN_14091a320(param_2,param_1);
  }
  return;
}



// FUNCTION 141f02880 FUN_141f02880 body=520 status=ok
// SIG undefined FUN_141f02880(void)

void FUN_141f02880(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0x30;
  plVar1 = (longlong *)param_2[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_3 == '\0') &&
     ((((*(byte *)(param_2 + 5) & 2) == 0 || (param_2[0xe] != 0)) &&
      ((*(byte *)((longlong)param_2 + 0x29) & 0x10) == 0)))) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 1) * 0x30,
               (longlong)*(int *)((longlong)param_1 + 0xc) * 0x30);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar1 = (longlong *)param_2[1];
      iVar3 = 0;
      local_res18[0] = 0;
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = 0;
      if (iVar2 != local_res18[0]) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      plVar1 = (longlong *)param_2[1];
      local_res18[0] = *(int *)(param_1 + 1);
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
  }
  else {
    FUN_141efd770(param_2,param_1);
  }
  return;
}



// FUNCTION 141f02a90 FUN_141f02a90 body=520 status=ok
// SIG undefined FUN_141f02a90(void)

void FUN_141f02a90(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0x18;
  plVar1 = (longlong *)param_2[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_3 == '\0') &&
     ((((*(byte *)(param_2 + 5) & 2) == 0 || (param_2[0xe] != 0)) &&
      ((*(byte *)((longlong)param_2 + 0x29) & 0x10) == 0)))) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 1) * 0x18,
               (longlong)*(int *)((longlong)param_1 + 0xc) * 0x18);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar1 = (longlong *)param_2[1];
      iVar3 = 0;
      local_res18[0] = 0;
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = 0;
      if (iVar2 != local_res18[0]) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1,iVar3);
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      plVar1 = (longlong *)param_2[1];
      local_res18[0] = *(int *)(param_1 + 1);
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
  }
  else {
    FUN_141efd900(param_2,param_1);
  }
  return;
}



// FUNCTION 141f02ca0 FUN_141f02ca0 body=511 status=ok
// SIG undefined FUN_141f02ca0(void)

void FUN_141f02ca0(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 8;
  plVar1 = (longlong *)param_2[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_3 == '\0') &&
     ((((*(byte *)(param_2 + 5) & 2) == 0 || (param_2[0xe] != 0)) &&
      ((*(byte *)((longlong)param_2 + 0x29) & 0x10) == 0)))) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 1) << 3,
               (longlong)*(int *)((longlong)param_1 + 0xc) << 3);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar1 = (longlong *)param_2[1];
      iVar3 = 0;
      local_res18[0] = 0;
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = 0;
      if (iVar2 != local_res18[0]) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      plVar1 = (longlong *)param_2[1];
      local_res18[0] = *(int *)(param_1 + 1);
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
  }
  else {
    FUN_141efdaa0(param_2,param_1);
  }
  return;
}



// FUNCTION 141f02ea0 FUN_141f02ea0 body=511 status=ok
// SIG undefined FUN_141f02ea0(void)

void FUN_141f02ea0(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0x10;
  plVar1 = (longlong *)param_2[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_3 == '\0') &&
     ((((*(byte *)(param_2 + 5) & 2) == 0 || (param_2[0xe] != 0)) &&
      ((*(byte *)((longlong)param_2 + 0x29) & 0x10) == 0)))) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 1) << 4,
               (longlong)*(int *)((longlong)param_1 + 0xc) << 4);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar1 = (longlong *)param_2[1];
      iVar3 = 0;
      local_res18[0] = 0;
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = 0;
      if (iVar2 != local_res18[0]) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar3);
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      plVar1 = (longlong *)param_2[1];
      local_res18[0] = *(int *)(param_1 + 1);
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
  }
  else {
    FUN_141efdc20(param_2,param_1);
  }
  return;
}



// FUNCTION 141f030a0 CalcBounds body=23 status=ok
// SIG undefined CalcBounds(void)

undefined8 ULandscapeGizmoRenderComponent::CalcBounds(undefined8 param_1,undefined8 param_2)

{
  USceneComponent::CalcBounds();
  return param_2;
}



// FUNCTION 141f030c0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141f03170 FUN_141f03170 body=95 status=ok
// SIG undefined FUN_141f03170(void)

void FUN_141f03170(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144eee530;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    FUN_141efca60(puVar1 + 2,param_1 + 0x10);
    puVar1[0xb] = *(undefined8 *)(param_1 + 0x58);
    *puVar1 = &PTR_GetPoolName_144eee578;
  }
  return;
}



// FUNCTION 141f031d0 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144eee5c0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144eee608;
  }
  return;
}



// FUNCTION 141f03220 FUN_141f03220 body=160 status=ok
// SIG undefined FUN_141f03220(void)

undefined8 * FUN_141f03220(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x4b0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14271d7c0(puVar1,param_1,0);
    *puVar1 = &PTR_FUN_144eedd48;
    puVar1[0x8e] = 0;
    puVar1[0x8f] = 0;
    puVar1[0x90] = 0;
    puVar1[0x91] = 0;
    *(undefined1 *)(puVar1 + 0x92) = 0;
    puVar1[0x93] = 0;
    puVar1[0x94] = 0;
    puVar1[0x95] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141f03350 SetDebugSourceInfo body=8 status=ok
// SIG undefined SetDebugSourceInfo(void)

void FSlateTextBlockLayout::SetDebugSourceInfo(undefined8 *param_1)

{
  FUN_141efed90(*param_1);
  return;
}



// FUNCTION 141f033e0 FUN_141f033e0 body=213 status=ok
// SIG undefined FUN_141f033e0(void)

void FUN_141f033e0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *local_res8;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_141f036c0(lVar3,&local_res8,param_1 + 0x10);
    plVar1 = (longlong *)(lVar3 + 2000);
    if (plVar1 != plVar4) {
      plVar2 = (longlong *)*plVar1;
      *plVar1 = *plVar4;
      *plVar4 = 0;
      if (plVar2 != (longlong *)0x0) {
        if (plVar2[8] != 0) {
          FMemory::Free();
        }
        if (plVar2[2] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar2,0x50);
      }
    }
    if (local_res8 != (longlong *)0x0) {
      if (local_res8[8] != 0) {
        FMemory::Free();
      }
      if (local_res8[2] != 0) {
        FMemory::Free();
      }
      if (*local_res8 != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(local_res8,0x50);
    }
  }
  return;
}



// FUNCTION 141f034c0 FUN_141f034c0 body=131 status=ok
// SIG undefined FUN_141f034c0(void)

void FUN_141f034c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 != 0) {
    FUN_141f01930(lVar2,*(undefined8 *)(lVar2 + 2000));
    plVar1 = *(longlong **)(lVar2 + 2000);
    *(undefined8 *)(lVar2 + 2000) = 0;
    if (plVar1 != (longlong *)0x0) {
      if (plVar1[8] != 0) {
        FMemory::Free();
      }
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(plVar1,0x50);
    }
  }
  return;
}



// FUNCTION 141f03550 FUN_141f03550 body=215 status=ok
// SIG undefined FUN_141f03550(void)

undefined1 FUN_141f03550(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *local_res8;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_141f036c0(lVar3,&local_res8,param_1 + 0x10);
    plVar1 = (longlong *)(lVar3 + 2000);
    if (plVar1 != plVar4) {
      plVar2 = (longlong *)*plVar1;
      *plVar1 = *plVar4;
      *plVar4 = 0;
      if (plVar2 != (longlong *)0x0) {
        if (plVar2[8] != 0) {
          FMemory::Free();
        }
        if (plVar2[2] != 0) {
          FMemory::Free();
        }
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar2,0x50);
      }
    }
    if (local_res8 != (longlong *)0x0) {
      if (local_res8[8] != 0) {
        FMemory::Free();
      }
      if (local_res8[2] != 0) {
        FMemory::Free();
      }
      if (*local_res8 != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(local_res8,0x50);
    }
  }
  return 1;
}



// FUNCTION 141f03630 FUN_141f03630 body=141 status=ok
// SIG undefined FUN_141f03630(void)

undefined1 FUN_141f03630(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 != 0) {
    FUN_141f01930(lVar2,*(undefined8 *)(lVar2 + 2000));
    plVar1 = *(longlong **)(lVar2 + 2000);
    *(undefined8 *)(lVar2 + 2000) = 0;
    if (plVar1 != (longlong *)0x0) {
      if (plVar1[8] != 0) {
        FMemory::Free();
      }
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(plVar1,0x50);
    }
    return 1;
  }
  return 1;
}



// FUNCTION 141f036c0 FUN_141f036c0 body=2424 status=ok
// SIG undefined FUN_141f036c0(void)

longlong * FUN_141f036c0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  char cVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  float *pfVar19;
  undefined8 *puVar20;
  int iVar21;
  longlong *plVar22;
  longlong *plVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int local_2b0;
  longlong local_278;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  double local_230;
  undefined1 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined1 local_210;
  int local_1d0;
  longlong *local_1c8;
  LARGE_INTEGER local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  undefined1 local_148;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  undefined4 uStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined4 local_100;
  undefined4 local_f0;
  
  iVar8 = *(int *)((longlong)param_3 + 0x34);
  fVar2 = *(float *)(param_3 + 6);
  fVar3 = *(float *)(param_3 + 5);
  lVar11 = param_3[4];
  fVar4 = *(float *)((longlong)param_3 + 0x2c);
  cVar7 = *(char *)((longlong)param_3 + 0x3c);
  puVar16 = (undefined8 *)operator_new(0x50);
  puVar20 = (undefined8 *)0x0;
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = 0;
    puVar16[1] = 0;
    puVar16[2] = 0;
    puVar16[3] = 0;
    puVar16[4] = 0;
    puVar16[5] = 0;
    puVar16[6] = 0;
    puVar16[7] = 0;
    puVar16[8] = 0;
    puVar16[9] = 0;
    puVar20 = puVar16;
  }
  *param_2 = (longlong)puVar20;
  TArray<FVector,FDefaultAllocator>::operator=(puVar20,param_3);
  TArray<FName,FDefaultAllocator>::operator=(puVar20 + 2,param_3 + 2);
  puVar20[4] = param_3[4];
  *(undefined4 *)(puVar20 + 5) = *(undefined4 *)(param_3 + 5);
  *(undefined4 *)((longlong)puVar20 + 0x2c) = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(undefined4 *)(puVar20 + 6) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)((longlong)puVar20 + 0x34) = *(undefined4 *)((longlong)param_3 + 0x34);
  *(undefined4 *)(puVar20 + 7) = *(undefined4 *)(param_3 + 7);
  *(undefined1 *)((longlong)puVar20 + 0x3c) = *(undefined1 *)((longlong)param_3 + 0x3c);
  *(undefined1 *)((longlong)puVar20 + 0x3d) = *(undefined1 *)((longlong)param_3 + 0x3d);
  *(undefined1 *)((longlong)puVar20 + 0x3e) = *(undefined1 *)((longlong)param_3 + 0x3e);
  *(undefined1 *)((longlong)puVar20 + 0x3f) = *(undefined1 *)((longlong)param_3 + 0x3f);
  local_2b0 = 0;
  uVar9 = *(undefined4 *)(*(longlong *)(lVar11 + 0x1b8) + 8);
  if (0 < *(int *)(param_1 + 0x4e8)) {
    local_278 = 0;
    do {
      plVar12 = *(longlong **)(local_278 + *(longlong *)(param_1 + 0x4e0));
      if ((plVar12 != (longlong *)0x0) &&
         (((cVar14 = UWorld::IsGameWorld(lVar11), cVar14 == '\0' ||
           (lVar13 = plVar12[0x10f], 0 < *(int *)(lVar13 + 8))) ||
          (0 < *(int *)(lVar13 + 0x18) - *(int *)(lVar13 + 0x44))))) {
        local_1c8 = plVar12 + 0x42;
        (**(code **)(*plVar12 + 0x4a8))(plVar12,&local_1a0,local_1c8);
        if (*(int *)(param_3 + 1) == 0) {
          fVar27 = 0.0;
        }
        else {
          fVar27 = 3.4028235e+38;
        }
        pfVar19 = (float *)*param_3;
        pfVar1 = pfVar19 + (longlong)*(int *)(param_3 + 1) * 3;
        if (pfVar19 != pfVar1) {
          fVar31 = fVar27;
          do {
            fVar32 = *pfVar19;
            fVar27 = 0.0;
            fVar29 = local_1a0 - local_194;
            if ((fVar32 < local_1a0 - local_194) ||
               (fVar29 = local_194 + local_1a0, local_194 + local_1a0 < fVar32)) {
              fVar27 = (fVar32 - fVar29) * (fVar32 - fVar29);
            }
            fVar32 = pfVar19[1];
            fVar29 = local_19c - local_190;
            if ((fVar32 < local_19c - local_190) ||
               (fVar29 = local_190 + local_19c, local_190 + local_19c < fVar32)) {
              fVar27 = fVar27 + (fVar32 - fVar29) * (fVar32 - fVar29);
            }
            fVar32 = pfVar19[2];
            fVar29 = local_198 - local_18c;
            if ((fVar32 < local_198 - local_18c) ||
               (fVar29 = local_18c + local_198, local_18c + local_198 < fVar32)) {
              fVar27 = fVar27 + (fVar32 - fVar29) * (fVar32 - fVar29);
            }
            if (fVar31 <= fVar27) {
              fVar27 = fVar31;
            }
            pfVar19 = pfVar19 + 3;
            fVar31 = fVar27;
          } while (pfVar19 != pfVar1);
        }
        plVar23 = (longlong *)param_3[2];
        fVar27 = SQRT(fVar27);
        local_1a8 = plVar23 + *(int *)(param_3 + 3);
        if (plVar23 != local_1a8) {
          do {
            local_1b8 = *plVar23;
            if (local_1b8 != 0) {
              plVar22 = *(longlong **)(local_1b8 + 0x28);
              iVar18 = -1;
              iVar26 = 1;
              local_1b0 = plVar22 + (longlong)*(int *)(local_1b8 + 0x30) * 9;
              if (plVar22 != local_1b0) {
                do {
                  iVar24 = 0;
                  iVar18 = iVar18 + 1;
                  if (((*plVar22 != 0) && (0.0 < *(float *)(plVar22 + 1))) && (0 < (int)plVar22[3]))
                  {
                    cVar14 = *(char *)((longlong)plVar22 + 0xc);
                    fVar31 = (float)(int)plVar22[3];
                    fVar32 = fVar31 * fVar4 * fVar2;
                    if ((cVar14 == '\0') || (fVar27 <= fVar32)) {
                      FUN_141efcb50(&local_268,param_1,plVar12,plVar22,uVar9,1,0,0,1);
                      iVar25 = 1;
                      if ((((char)local_268 != '\0') &&
                          ((0 < local_1d0 &&
                           (fVar29 = (float)local_1d0 / SQRT((float)iVar8),
                           iVar15 = -((int)ROUND(-0.5 - (fVar29 + fVar29)) >> 1), 0 < iVar15)))) &&
                         (iVar25 = 0x10, iVar15 < 0x10)) {
                        iVar25 = iVar15;
                      }
                      iVar15 = (local_1d0 / iVar25) * (local_1d0 / iVar25);
                      if ((cVar14 != '\0') || (fVar27 <= fVar32)) {
                        local_118 = plVar12[0xf5];
                        fVar29 = *(float *)(plVar12 + 0xf3);
                        local_138 = *(float *)((longlong)plVar12 + 0x79c);
                        uStack_120 = (undefined4)plVar12[0xf4];
                        fStack_11c = *(float *)((longlong)plVar12 + 0x7a4);
                        fVar33 = (fStack_11c - fVar29) / (float)iVar25;
                        fVar34 = ((float)local_118 - local_138) / (float)iVar25;
                        fStack_134 = local_138;
                        fStack_130 = local_138;
                        fStack_12c = local_138;
                        local_128 = fVar29;
                        fStack_124 = local_138;
                        if (0 < iVar25) {
                          do {
                            iVar21 = 0;
                            do {
                              fVar30 = fVar27;
                              if ((cVar7 != '\0') && (1 < iVar25)) {
                                local_100 = uStack_120;
                                local_158 = uStack_120;
                                local_148 = 1;
                                local_f0 = local_118._4_4_;
                                local_14c = local_118._4_4_;
                                local_160 = CONCAT44((float)iVar21 * fVar34 + local_138,
                                                     (float)iVar24 * fVar33 + fVar29);
                                local_154 = CONCAT44((float)(iVar21 + 1) * fVar34 + local_138,
                                                     (float)(iVar24 + 1) * fVar33 + fVar29);
                                FBox::TransformBy(&local_160,&local_180,local_1c8);
                                if (*(int *)(param_3 + 1) == 0) {
                                  fVar30 = 0.0;
                                }
                                else {
                                  fVar30 = 3.4028235e+38;
                                }
                                pfVar19 = (float *)*param_3;
                                pfVar1 = pfVar19 + (longlong)*(int *)(param_3 + 1) * 3;
                                for (; pfVar19 != pfVar1; pfVar19 = pfVar19 + 3) {
                                  fVar5 = *pfVar19;
                                  fVar28 = 0.0;
                                  fVar6 = local_180;
                                  if ((fVar5 < local_180) || (fVar6 = local_174, local_174 < fVar5))
                                  {
                                    fVar28 = (fVar5 - fVar6) * (fVar5 - fVar6);
                                  }
                                  fVar5 = pfVar19[1];
                                  fVar6 = local_17c;
                                  if ((fVar5 < local_17c) || (fVar6 = local_170, local_170 < fVar5))
                                  {
                                    fVar28 = fVar28 + (fVar5 - fVar6) * (fVar5 - fVar6);
                                  }
                                  fVar5 = pfVar19[2];
                                  fVar6 = local_178;
                                  if ((fVar5 < local_178) || (fVar6 = local_16c, local_16c < fVar5))
                                  {
                                    fVar28 = fVar28 + (fVar5 - fVar6) * (fVar5 - fVar6);
                                  }
                                  if (fVar30 <= fVar28) {
                                    fVar28 = fVar30;
                                  }
                                  fVar30 = fVar28;
                                }
                                fVar30 = SQRT(fVar30);
                              }
                              iVar10 = iVar15 + iVar26;
                              if (cVar14 != '\0') {
                                iVar10 = iVar26;
                              }
                              iVar26 = iVar10;
                              if (fVar30 <= fVar32) {
                                local_268 = 0xffffffff;
                                uStack_260 = 0xffffffff;
                                local_248 = 0xffffffff00000000;
                                uStack_240 = 0xffffffff;
                                local_258 = 0;
                                uStack_250 = 0;
                                local_228 = 1;
                                local_238 = DAT_1464aaa8c;
                                QueryPerformanceCounter(&local_1c0);
                                local_220 = 0;
                                local_218 = 0;
                                local_210 = 0;
                                local_230 = (double)local_1c0.QuadPart * DAT_1468b02f8 + 16777216.0;
                                FWeakObjectPtr::operator=(&local_268,plVar12);
                                lVar13 = local_1b8;
                                FWeakObjectPtr::operator=(&uStack_260,local_1b8);
                                local_248 = CONCAT44(iVar18,*(undefined4 *)(lVar13 + 0x30));
                                local_220 = CONCAT44(fVar31 * fVar3 * fVar2,fVar30);
                                local_258 = CONCAT44(iVar8,iVar25);
                                lVar13 = *param_2;
                                uStack_250 = CONCAT44(iVar21,iVar24);
                                local_218 = CONCAT44(iVar15,iVar26);
                                iVar10 = *(int *)(lVar13 + 0x48);
                                *(int *)(lVar13 + 0x48) = iVar10 + 1;
                                local_210 = cVar14 == '\0';
                                if (*(int *)(lVar13 + 0x4c) < iVar10 + 1) {
                                  TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow
                                            (lVar13 + 0x40,iVar10);
                                }
                                puVar17 = (undefined4 *)
                                          ((longlong)iVar10 * 0x60 + *(longlong *)(lVar13 + 0x40));
                                *puVar17 = (undefined4)local_268;
                                puVar17[1] = local_268._4_4_;
                                puVar17[2] = (undefined4)uStack_260;
                                puVar17[3] = uStack_260._4_4_;
                                puVar17[4] = (undefined4)local_258;
                                puVar17[5] = local_258._4_4_;
                                puVar17[6] = (undefined4)uStack_250;
                                puVar17[7] = uStack_250._4_4_;
                                puVar17[8] = (undefined4)local_248;
                                puVar17[9] = local_248._4_4_;
                                puVar17[10] = (undefined4)uStack_240;
                                puVar17[0xb] = uStack_240._4_4_;
                                puVar17[0xc] = local_238;
                                *(double *)(puVar17 + 0xe) = local_230;
                                *(undefined1 *)(puVar17 + 0x10) = local_228;
                                puVar17[0x12] = (undefined4)local_220;
                                puVar17[0x13] = local_220._4_4_;
                                puVar17[0x14] = (undefined4)local_218;
                                puVar17[0x15] = local_218._4_4_;
                                *(undefined1 *)(puVar17 + 0x16) = local_210;
                              }
                              iVar21 = iVar21 + 1;
                            } while (iVar21 < iVar25);
                            iVar24 = iVar24 + 1;
                          } while (iVar24 < iVar25);
                        }
                      }
                      else {
                        iVar26 = iVar26 + iVar15 * iVar25 * iVar25;
                      }
                    }
                  }
                  plVar22 = plVar22 + 9;
                } while (plVar22 != local_1b0);
              }
            }
            plVar23 = plVar23 + 1;
          } while (plVar23 != local_1a8);
        }
      }
      local_278 = local_278 + 8;
      local_2b0 = local_2b0 + 1;
    } while (local_2b0 < *(int *)(param_1 + 0x4e8));
  }
  return param_2;
}



// FUNCTION 141f04040 FindId body=331 status=ok
// SIG undefined FindId(void)

int * TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,uint *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar6 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)((((param_3[7] << 8 ^ param_3[6]) << 3 ^ param_3[9]) << 10 ^ param_3[8])
                           << 3 ^ param_3[3] ^ param_3[1] ^ *param_3 ^ param_3[2] ^ param_3[4] ^
                          param_3[5]) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar6 != -1) {
      lVar5 = *param_1;
      do {
        lVar4 = (longlong)iVar6;
        lVar1 = lVar5 + lVar4 * 0x50;
        if (((((*(uint *)(lVar5 + 0x10 + lVar4 * 0x50) == param_3[4]) &&
              (*(uint *)(lVar1 + 0x14) == param_3[5])) && (*(uint *)(lVar1 + 0x18) == param_3[6]))
            && ((*(uint *)(lVar1 + 0x1c) == param_3[7] &&
                (cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar1,param_3),
                cVar2 != '\0')))) &&
           ((cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar1 + 8,param_3 + 2)
            , cVar2 != '\0' &&
            ((*(uint *)(lVar1 + 0x20) == param_3[8] && (*(uint *)(lVar1 + 0x24) == param_3[9]))))))
        {
          *param_2 = iVar6;
          return param_2;
        }
        lVar5 = *param_1;
        iVar6 = *(int *)(lVar5 + 0x48 + lVar4 * 0x50);
      } while (iVar6 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141f04190 FlushGrass body=310 status=ok
// SIG undefined FlushGrass(void)

void FlushGrass(void)

{
  int iVar1;
  void *_Src;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  void *pvVar7;
  void *local_38;
  ulonglong local_30;
  int local_28;
  void *local_20;
  int local_18;
  
  pvVar7 = (void *)0x0;
  local_28 = -1;
  local_38 = (void *)0x0;
  local_30 = 0;
  uVar3 = FUN_141f1ec00();
  FUN_1417a5560(uVar3,&local_38,1,0x30,0x20000000);
  _Src = local_38;
  lVar6 = (longlong)(int)local_30;
  do {
    local_28 = local_28 + 1;
    if ((int)local_30 <= local_28) break;
  } while (*(longlong *)((longlong)local_38 + (longlong)local_28 * 8) == 0);
  local_20 = (void *)0x0;
  local_18 = (int)local_30;
  iVar4 = local_28;
  iVar1 = (int)local_30;
  iVar2 = local_18;
  iVar5 = 0;
  if ((int)local_30 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_20,local_30 & 0xffffffff,0);
    pvVar7 = local_20;
    _guard_xfg_dispatch_icall_nop(local_20,_Src,lVar6 << 3);
    iVar4 = local_28;
    iVar1 = local_18;
    iVar2 = local_18;
    iVar5 = (int)local_30;
  }
  do {
    local_18 = iVar2;
    iVar2 = local_18;
    local_18 = iVar1;
    if (iVar4 == iVar5) {
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      return;
    }
    FUN_141f042d0(*(undefined8 *)((longlong)pvVar7 + (longlong)iVar4 * 8),0,1);
    do {
      iVar4 = iVar4 + 1;
      iVar1 = local_18;
      if (iVar2 <= iVar4) break;
    } while (*(longlong *)((longlong)pvVar7 + (longlong)iVar4 * 8) == 0);
  } while( true );
}



// FUNCTION 141f042d0 FUN_141f042d0 body=1163 status=ok
// SIG undefined FUN_141f042d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f042d0(longlong param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_198 [32];
  undefined4 local_178 [2];
  undefined8 local_170;
  uint uStack_168;
  uint uStack_164;
  undefined8 local_160;
  undefined8 uStack_158;
  ulonglong local_150;
  longlong *local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  uint uStack_130;
  uint uStack_12c;
  uint *puStack_128;
  undefined4 uStack_120;
  int iStack_11c;
  ulonglong uStack_118;
  undefined8 local_110 [24];
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  puVar13 = (undefined8 *)0x0;
  uVar8 = 0;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x508) = 0;
    if (*(int *)(param_1 + 0x50c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x500,0);
    }
    *(undefined4 *)(param_1 + 0x518) = 0;
    if (*(int *)(param_1 + 0x51c) != 0) {
      TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1 + 0x510,0);
    }
    *(undefined4 *)(param_1 + 0x540) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x544) = 0;
    *(undefined4 *)(param_1 + 0x538) = 0;
    if (*(int *)(param_1 + 0x53c) != 0) {
      *(undefined4 *)(param_1 + 0x53c) = 0;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x520,0);
    }
    if (0 < (int)*(uint *)(param_1 + 0x558)) {
      uVar16 = (ulonglong)*(uint *)(param_1 + 0x558);
      puVar14 = puVar13;
      do {
        uVar9 = (longlong)*(int *)(param_1 + 0x558) - 1U & (ulonglong)puVar14;
        lVar4 = *(longlong *)(param_1 + 0x550);
        if (*(longlong *)(param_1 + 0x550) == 0) {
          lVar4 = param_1 + 0x548;
        }
        puVar14 = (undefined8 *)((longlong)puVar14 + 1);
        *(undefined4 *)(lVar4 + uVar9 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    FUN_141efbdc0(param_1,local_110,0);
    puVar14 = local_110;
    if (local_50 != (undefined8 *)0x0) {
      puVar14 = local_50;
    }
    puVar12 = (undefined8 *)((longlong)(int)local_48 & 0x1fffffffffffffff);
    if (puVar14 + (int)local_48 < puVar14) {
      puVar12 = puVar13;
    }
    puVar17 = puVar13;
    if (puVar12 != (undefined8 *)0x0) {
      do {
        plVar7 = (longlong *)*puVar14;
        (**(code **)(*plVar7 + 0x9a0))(plVar7);
        local_178[0] = 0;
        (**(code **)(*plVar7 + 0x418))(plVar7,local_178);
        (**(code **)(*plVar7 + 0x3b0))(plVar7,0);
        puVar17 = (undefined8 *)((longlong)puVar17 + 1);
        puVar14 = puVar14 + 1;
      } while (puVar17 != puVar12);
    }
    local_170 = (undefined8 *)0x0;
    uStack_164 = 0;
    plVar10 = *(longlong **)(*(longlong *)(param_1 + 0x168) + 0x1a0);
    plVar7 = plVar10 + *(int *)(*(longlong *)(param_1 + 0x168) + 0x1a8);
    puVar14 = puVar13;
    puVar12 = puVar13;
    puVar17 = puVar13;
    for (; plVar10 != plVar7; plVar10 = plVar10 + 1) {
      lVar4 = *plVar10;
      if (lVar4 != 0) {
        lVar5 = AUGCompanionAIController::GetPrivateStaticClass();
        lVar4 = *(longlong *)(lVar4 + 0x10);
        if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          iVar11 = (int)puVar14;
          uStack_168 = iVar11 + 1;
          if ((int)puVar12 < (int)uStack_168) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_170,puVar14);
            puVar12 = (undefined8 *)(ulonglong)uStack_164;
            puVar17 = local_170;
          }
          puVar14 = (undefined8 *)(ulonglong)uStack_168;
          puVar17[iVar11] = *plVar10;
        }
      }
      uVar8 = (uint)puVar14;
    }
    puVar14 = (undefined8 *)
              ((ulonglong)((longlong)(puVar17 + (int)uVar8) + (7 - (longlong)puVar17)) >> 3);
    if (puVar17 + (int)uVar8 < puVar17) {
      puVar14 = puVar13;
    }
    puVar12 = puVar17;
    if (puVar14 != (undefined8 *)0x0) {
      do {
        plVar7 = (longlong *)*puVar12;
        (**(code **)(*plVar7 + 0x9a0))(plVar7);
        local_178[0] = 0;
        (**(code **)(*plVar7 + 0x418))(plVar7,local_178);
        (**(code **)(*plVar7 + 0x3b0))(plVar7,0);
        puVar13 = (undefined8 *)((longlong)puVar13 + 1);
        puVar12 = puVar12 + 1;
      } while (puVar13 != puVar14);
    }
    if (puVar17 != (undefined8 *)0x0) {
      FMemory::Free(puVar17);
    }
    if (local_50 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    local_148 = (longlong *)(param_1 + 0x510);
    iVar11 = *(int *)(param_1 + 0x538);
    puStack_128 = (uint *)(param_1 + 0x520);
    local_170._0_4_ = 0;
    local_170._4_4_ = 1;
    local_160._4_4_ = 0;
    uStack_158 = uStack_158 & 0xffffffff00000000;
    if (iVar11 != 0) {
      puVar15 = *(uint **)(param_1 + 0x530);
      if (*(uint **)(param_1 + 0x530) == (uint *)0x0) {
        puVar15 = puStack_128;
      }
      uVar1 = *puVar15;
      puVar14 = puVar13;
      while (uVar1 == 0) {
        iVar3 = (int)puVar14;
        uVar8 = (int)puVar13 + 0x20;
        puVar13 = (undefined8 *)(ulonglong)uVar8;
        local_170._0_4_ = iVar3 + 1;
        puVar14 = (undefined8 *)(ulonglong)(uint)local_170;
        uStack_158._4_4_ = (int)(uStack_158 >> 0x20);
        uStack_158 = CONCAT44(uStack_158._4_4_,uVar8);
        local_160._4_4_ = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar3) goto LAB_141f043ce;
        uVar1 = puVar15[(longlong)iVar3 + 1];
      }
      local_170._4_4_ = -uVar1 & uVar1;
      iVar3 = 0x1f;
      if (local_170._4_4_ != 0) {
        for (; local_170._4_4_ >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (local_170._4_4_ == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      local_160._4_4_ = (uVar8 - iVar3) + 0x1f;
      if (iVar11 < local_160._4_4_) {
        local_160._4_4_ = iVar11;
      }
    }
LAB_141f043ce:
    uStack_130 = (uint)local_170;
    uStack_12c = local_170._4_4_;
    uStack_120 = 0xffffffff;
    iStack_11c = local_160._4_4_;
    uStack_118 = uStack_158;
    local_150 = uStack_158;
    _uStack_168 = CONCAT44(local_170._4_4_,(uint)local_170);
    uStack_158._0_4_ = 0xffffffff;
    uStack_158._4_4_ = local_160._4_4_;
    bVar2 = local_160._4_4_ < iVar11;
    local_170 = local_148;
    local_160 = puStack_128;
    local_138 = local_148;
    if (bVar2) {
      do {
        plVar10 = local_148;
        iVar11 = uStack_158._4_4_;
        plVar7 = local_170;
        lVar4 = (longlong)uStack_158._4_4_;
        lVar5 = FWeakObjectPtr::Get(*local_170 + lVar4 * 0x50);
        if ((lVar5 == 0) ||
           (piVar6 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                      (param_2,local_140,lVar5), *piVar6 != -1)) {
          plVar7 = (longlong *)FWeakObjectPtr::Get(*plVar7 + 0x28 + lVar4 * 0x50);
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x9a0))(plVar7);
            local_178[0] = 0;
            (**(code **)(*plVar7 + 0x418))(plVar7,local_178);
            (**(code **)(*plVar7 + 0x3b0))(plVar7,0);
          }
          TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
          ::Remove(plVar10,iVar11);
        }
        uStack_158._0_4_ = (uint)uStack_158 & ~uStack_164;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_168);
      } while (uStack_158._4_4_ < (int)local_160[6]);
    }
  }
  return;
}



// FUNCTION 141f04760 FlushGrassPIE body=310 status=ok
// SIG undefined FlushGrassPIE(void)

void FlushGrassPIE(void)

{
  int iVar1;
  void *_Src;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  void *pvVar7;
  void *local_38;
  ulonglong local_30;
  int local_28;
  void *local_20;
  int local_18;
  
  pvVar7 = (void *)0x0;
  local_28 = -1;
  local_38 = (void *)0x0;
  local_30 = 0;
  uVar3 = FUN_141f1ec00();
  FUN_1417a5560(uVar3,&local_38,1,0x30,0x20000000);
  _Src = local_38;
  lVar6 = (longlong)(int)local_30;
  do {
    local_28 = local_28 + 1;
    if ((int)local_30 <= local_28) break;
  } while (*(longlong *)((longlong)local_38 + (longlong)local_28 * 8) == 0);
  local_20 = (void *)0x0;
  local_18 = (int)local_30;
  iVar4 = local_28;
  iVar1 = (int)local_30;
  iVar2 = local_18;
  iVar5 = 0;
  if ((int)local_30 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_20,local_30 & 0xffffffff,0);
    pvVar7 = local_20;
    _guard_xfg_dispatch_icall_nop(local_20,_Src,lVar6 << 3);
    iVar4 = local_28;
    iVar1 = local_18;
    iVar2 = local_18;
    iVar5 = (int)local_30;
  }
  do {
    local_18 = iVar2;
    iVar2 = local_18;
    local_18 = iVar1;
    if (iVar4 == iVar5) {
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      return;
    }
    FUN_141f042d0(*(undefined8 *)((longlong)pvVar7 + (longlong)iVar4 * 8),0,0);
    do {
      iVar4 = iVar4 + 1;
      iVar1 = local_18;
      if (iVar2 <= iVar4) break;
    } while (*(longlong *)((longlong)pvVar7 + (longlong)iVar4 * 8) == 0);
  } while( true );
}



// FUNCTION 141f048a0 GetAllocatedSize body=374 status=ok
// SIG undefined GetAllocatedSize(void)

longlong FLandscapeComponentGrassData::GetAllocatedSize(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  
  uVar6 = 0;
  local_58 = 0;
  uStack_54 = 1;
  iVar4 = *(int *)(param_1 + 0x38);
  puStack_20 = (uint *)(param_1 + 0x20);
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar4 != 0) {
    puVar8 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar8 = puStack_20;
    }
    uVar1 = *puVar8;
    uVar5 = uVar6;
    uVar7 = uVar6;
    while (uVar1 == 0) {
      iVar3 = (int)uVar7;
      uStack_40 = (int)uVar5 + 0x20;
      uVar5 = (ulonglong)uStack_40;
      local_58 = iVar3 + 1;
      uVar7 = (ulonglong)local_58;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar3) goto LAB_141f0495d;
      uVar1 = puVar8[(longlong)iVar3 + 1];
    }
    uStack_54 = -uVar1 & uVar1;
    iVar3 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    local_48._4_4_ = (uStack_40 - iVar3) + 0x1f;
    if (iVar4 < local_48._4_4_) {
LAB_141f0495d:
      local_48._4_4_ = iVar4;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  uStack_10 = uStack_40;
  uStack_28 = local_58;
  uStack_24 = uStack_54;
  uStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  uStack_40 = 0xffffffff;
  iStack_3c = local_48._4_4_;
  bVar2 = local_48._4_4_ < iVar4;
  local_30 = (longlong *)(param_1 + 0x10);
  local_48 = puStack_20;
  if (bVar2) {
    do {
      uVar6 = uVar6 + *(uint *)((longlong)iStack_3c * 0x20 + 0x14 + *(longlong *)(param_1 + 0x10));
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  iVar4 = *(int *)(param_1 + 0x3c) + 0x1f;
  return uVar6 + (uint)((((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) +
                         *(int *)(param_1 + 0x1c) * 8 + *(int *)(param_1 + 0x58)) * 4) +
         (ulonglong)(uint)(*(int *)(param_1 + 0xc) * 2) + 0x60;
}



// FUNCTION 141f04a20 GetFunctionName body=62 status=ok
// SIG undefined GetFunctionName(void)

undefined8 *
UMaterialExpressionLandscapeGrassOutput::GetFunctionName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"GetGrassWeight",0x1e);
  return param_2;
}



// FUNCTION 141f04a70 GetRandomScale body=610 status=ok
// SIG undefined GetRandomScale(void)

float * FAsyncGrassBuilder::GetRandomScale(longlong param_1,float *param_2)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  
  cVar1 = *(char *)(param_1 + 200);
  *param_2 = 1.0;
  param_2[1] = 1.0;
  param_2[2] = 1.0;
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 0xf0) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_1 + 0xf0) = uVar3;
    fVar4 = *(float *)(param_1 + 0xcc);
    fVar2 = (float)(uVar3 & 0x7fffff | 0x3f800000);
    if (fVar4 <= *(float *)(param_1 + 0xd0)) {
      fVar4 = (fVar2 - (float)(int)fVar2) * (*(float *)(param_1 + 0xd0) - fVar4) + fVar4;
      *param_2 = fVar4;
      param_2[1] = fVar4;
      param_2[2] = fVar4;
      return param_2;
    }
    *param_2 = 0.0;
    param_2[1] = 0.0;
  }
  else {
    if (cVar1 == '\x01') {
      uVar3 = *(int *)(param_1 + 0xf0) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_1 + 0xf0) = uVar3;
      fVar4 = *(float *)(param_1 + 0xcc);
      fVar2 = (float)(uVar3 & 0x7fffff | 0x3f800000);
      if (*(float *)(param_1 + 0xd0) < fVar4) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = (fVar2 - (float)(int)fVar2) * (*(float *)(param_1 + 0xd0) - fVar4) + fVar4;
      }
      *param_2 = fVar4;
      uVar3 = uVar3 * 0xbb38435 + 0x3619636b;
      *(uint *)(param_1 + 0xf0) = uVar3;
      fVar4 = *(float *)(param_1 + 0xd4);
      fVar2 = (float)(uVar3 & 0x7fffff | 0x3f800000);
      if (*(float *)(param_1 + 0xd8) < fVar4) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = (fVar2 - (float)(int)fVar2) * (*(float *)(param_1 + 0xd8) - fVar4) + fVar4;
      }
    }
    else {
      if (cVar1 != '\x02') {
        return param_2;
      }
      uVar3 = *(int *)(param_1 + 0xf0) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_1 + 0xf0) = uVar3;
      fVar4 = *(float *)(param_1 + 0xcc);
      fVar2 = (float)(uVar3 & 0x7fffff | 0x3f800000);
      if (*(float *)(param_1 + 0xd0) < fVar4) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = (fVar2 - (float)(int)fVar2) * (*(float *)(param_1 + 0xd0) - fVar4) + fVar4;
      }
      *param_2 = fVar4;
    }
    param_2[1] = fVar4;
    uVar3 = uVar3 * 0xbb38435 + 0x3619636b;
    *(uint *)(param_1 + 0xf0) = uVar3;
    fVar4 = *(float *)(param_1 + 0xdc);
    fVar2 = (float)(uVar3 & 0x7fffff | 0x3f800000);
    if (fVar4 <= *(float *)(param_1 + 0xe0)) {
      param_2[2] = (fVar2 - (float)(int)fVar2) * (*(float *)(param_1 + 0xe0) - fVar4) + fVar4;
      return param_2;
    }
  }
  param_2[2] = 0.0;
  return param_2;
}



// FUNCTION 141f04cf0 FUN_141f04cf0 body=10 status=ok
// SIG undefined FUN_141f04cf0(void)

int FUN_141f04cf0(longlong param_1)

{
  return *(int *)(param_1 + 0x10) * 0x18;
}



// FUNCTION 141f04d50 GetSinCos body=401 status=ok
// SIG undefined GetSinCos(void)

void `anonymous_namespace'::GetSinCos(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_3 == 0.0) {
    *param_1 = 0.0;
    *param_2 = 1.0;
    return;
  }
  if (param_3 == 90.0) {
    *param_1 = 1.0;
    *param_2 = 0.0;
    return;
  }
  if (param_3 == 180.0) {
    *param_1 = 0.0;
    *param_2 = -1.0;
    return;
  }
  if (param_3 == 270.0) {
    *param_1 = -1.0;
    *param_2 = 0.0;
    return;
  }
  param_3 = param_3 * 0.017453292;
  if (param_3 < 0.0) {
    fVar1 = param_3 * 0.15915494 - 0.5;
  }
  else {
    fVar1 = param_3 * 0.15915494 + 0.5;
  }
  param_3 = param_3 - (float)(int)fVar1 * 6.2831855;
  if (param_3 <= 1.5707964) {
    if (-1.5707964 <= param_3) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = -1.0;
      param_3 = -3.1415927 - param_3;
    }
  }
  else {
    fVar1 = -1.0;
    param_3 = 3.1415927 - param_3;
  }
  fVar2 = param_3 * param_3;
  *param_1 = (((((2.7525562e-06 - fVar2 * 2.3889859e-08) * fVar2 - 0.00019840874) * fVar2 +
               0.008333331) * fVar2 - 0.16666667) * fVar2 + 1.0) * param_3;
  *param_2 = (((((2.4760495e-05 - fVar2 * 2.6051615e-07) * fVar2 - 0.0013888378) * fVar2 +
               0.041666638) * fVar2 - 0.5) * fVar2 + 1.0) * fVar1;
  return;
}



// FUNCTION 141f04ef0 FUN_141f04ef0 body=529 status=ok
// SIG undefined FUN_141f04ef0(void)

void FUN_141f04ef0(float param_1,int *param_2,int *param_3,int param_4,int param_5,uint *param_6,
                  byte param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  if (0.0 < param_1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ac46e0) &&
       (_Init_thread_header(&DAT_146ac46e0), DAT_146ac46e0 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146ac46d8 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))
                     (DAT_1468b1f88,L"r.Lightmass.ExpandTerrainComponents");
      _Init_thread_footer(&DAT_146ac46e0);
    }
    if ((DAT_146ac46d8 == (longlong *)0x0) ||
       (iVar1 = (**(code **)(*DAT_146ac46d8 + 0x68))(), iVar1 == 1)) {
      iVar2 = 1;
      iVar1 = DAT_1464ca280;
      iVar4 = DAT_1464ca284;
    }
    else {
      iVar2 = 0;
      iVar1 = iVar2;
      iVar4 = iVar2;
    }
    fVar6 = (float)iVar1;
    if (1.0 <= param_1) {
      fVar6 = fVar6 / param_1;
    }
    fVar7 = (float)iVar4;
    if (1.0 <= param_1) {
      fVar7 = fVar7 / param_1;
    }
    iVar1 = (int)fVar6 >> (param_7 & 0x1f);
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    *param_2 = iVar1;
    iVar1 = (int)fVar7 >> (param_7 & 0x1f);
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    *param_3 = iVar1;
    iVar1 = param_5;
    if (1.0 <= param_1) {
      iVar1 = param_4 + 1;
    }
    uVar5 = 0x1000;
    if ((int)((float)iVar1 * param_1) < 0x1001) {
      uVar5 = (int)((float)iVar1 * param_1);
    }
    *param_6 = uVar5;
    iVar1 = (*param_2 << (param_7 & 0x1f)) * 2;
    if (param_1 < 1.0) {
      param_4 = iVar1 + param_5;
    }
    else {
      param_4 = iVar1 + 1 + param_4;
    }
    iVar1 = 0x1000;
    if ((int)((float)param_4 * param_1) < 0x1001) {
      iVar1 = (int)((float)param_4 * param_1);
    }
    uVar3 = uVar5;
    if ((int)uVar5 < iVar1) {
      while (0 < (int)uVar3) {
        uVar5 = *param_6;
        uVar3 = ~(-uVar5 & uVar5) & uVar5;
        *param_6 = uVar3;
      }
      *param_6 = uVar5 * 2;
      if (iVar1 * iVar1 <= (int)(uVar5 * uVar5 * 2)) {
        *param_6 = uVar5;
      }
    }
  }
  return;
}



// FUNCTION 141f05140 FUN_141f05140 body=721 status=ok
// SIG undefined FUN_141f05140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141f05140(void)

{
  float fVar1;
  float fVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  void *pvVar9;
  void *local_58;
  ulonglong local_50;
  int local_48;
  void *local_40;
  int local_38;
  
  fVar1 = *DAT_146ac4580;
  iVar4 = *DAT_146ac4508;
  if (iVar4 < 1) {
    DAT_1464ce010 = 1;
  }
  else {
    DAT_1464ce010 = 0x3c;
    if (iVar4 < 0x3c) {
      DAT_1464ce010 = iVar4;
    }
  }
  fVar2 = *DAT_146ac4598;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar8 + 0x38) < DAT_146ac4438) &&
     (_Init_thread_header(&DAT_146ac4438), DAT_146ac4438 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146ac4430 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DetailMode");
    _Init_thread_footer(&DAT_146ac4438);
  }
  pvVar9 = (void *)0x0;
  iVar4 = 0;
  if ((*(int *)(lVar8 + 0x38) < DAT_146ac4440) &&
     (_Init_thread_header(&DAT_146ac4440), DAT_146ac4440 == -1)) {
    iVar5 = iVar4;
    if (DAT_146ac4430 != (longlong *)0x0) {
      iVar5 = (**(code **)(*DAT_146ac4430 + 0x68))();
    }
    DAT_146ac443c = iVar5;
    _Init_thread_footer(&DAT_146ac4440);
  }
  if (DAT_146ac4430 != (longlong *)0x0) {
    iVar4 = (**(code **)(*DAT_146ac4430 + 0x68))();
  }
  if (((iVar4 != DAT_146ac443c) || (fVar1 != _DAT_1464ce028)) || (fVar2 != _DAT_1464ce02c)) {
    local_58 = (void *)0x0;
    local_50 = 0;
    local_48 = -1;
    _DAT_1464ce028 = fVar1;
    _DAT_1464ce02c = fVar2;
    DAT_146ac443c = iVar4;
    uVar6 = FUN_141f1ec00();
    FUN_1417a5560(uVar6,&local_58,1,0x30,0x20000000);
    _Src = local_58;
    lVar8 = (longlong)(int)local_50;
    do {
      local_48 = local_48 + 1;
      if ((int)local_50 <= local_48) break;
    } while (*(longlong *)((longlong)local_58 + (longlong)local_48 * 8) == 0);
    local_40 = (void *)0x0;
    local_38 = (int)local_50;
    iVar4 = local_48;
    iVar5 = (int)local_50;
    iVar3 = local_38;
    iVar7 = 0;
    if ((int)local_50 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                (&local_40,local_50 & 0xffffffff,0);
      pvVar9 = local_40;
      _guard_xfg_dispatch_icall_nop(local_40,_Src,lVar8 << 3);
      iVar4 = local_48;
      iVar5 = local_38;
      iVar3 = local_38;
      iVar7 = (int)local_50;
    }
joined_r0x000141f052d5:
    local_38 = iVar3;
    iVar3 = local_38;
    local_38 = iVar5;
    if (iVar4 != iVar7) {
      FUN_141f042d0(*(undefined8 *)((longlong)pvVar9 + (longlong)iVar4 * 8),0,0);
      do {
        iVar4 = iVar4 + 1;
        iVar5 = local_38;
        if (iVar3 <= iVar4) break;
      } while (*(longlong *)((longlong)pvVar9 + (longlong)iVar4 * 8) == 0);
      goto joined_r0x000141f052d5;
    }
    if (pvVar9 != (void *)0x0) {
      FMemory::Free(pvVar9);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
  }
  return;
}



// FUNCTION 141f05420 FUN_141f05420 body=503 status=ok
// SIG undefined FUN_141f05420(void)

void FUN_141f05420(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  int local_res8 [2];
  int local_res10 [2];
  undefined4 local_res18 [4];
  
  iVar6 = *(int *)(param_2 + 0x6fc);
  iVar1 = *(int *)(param_2 + 0x700);
  iVar2 = *(int *)(param_2 + 0x6f8);
  lVar4 = USignificanceManager::GetWorld(param_2);
  uVar3 = *(undefined4 *)(lVar4 + 0x4a0);
  if (*(float *)(param_2 + 0x800) <= 0.0) {
    USignificanceManager::GetWorld(param_2);
  }
  lVar4 = USignificanceManager::GetWorld(param_2);
  local_res18[0] = 1;
  local_res8[0] = 0;
  local_res10[0] = 0;
  fVar7 = (float)FUN_141f04ef0(local_res18,local_res8,local_res10,iVar2,(iVar6 + 1) * iVar1,
                               local_res18,*(undefined4 *)(lVar4 + 0x4a0));
  iVar6 = iVar2 + 1 >> ((byte)uVar3 & 0x1f);
  fVar8 = fVar7 / (float)(iVar6 + local_res8[0] * 2);
  fVar7 = fVar7 / (float)(iVar6 + local_res10[0] * 2);
  *(float *)(param_1 + 0x1b0) =
       ((float)(iVar6 + -1) * fVar7 * (1.0 / (float)iVar2)) / *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0x1ac) =
       ((float)(iVar6 + -1) * fVar8 * (1.0 / (float)iVar2)) / *(float *)(param_1 + 8);
  *(float *)(param_1 + 0x1a4) = (float)local_res8[0] * fVar8;
  *(float *)(param_1 + 0x1a8) = (float)local_res10[0] * fVar7;
  plVar5 = (longlong *)FUN_141ef84f0(param_2);
  if (plVar5 != (longlong *)0x0) {
    if ((longlong *)*plVar5 != (longlong *)0x0) {
      lVar4 = (**(code **)(*(longlong *)*plVar5 + 0x30))();
      *(undefined8 *)(param_1 + 0x184) = *(undefined8 *)(lVar4 + 0x158);
      lVar4 = (**(code **)(*(longlong *)*plVar5 + 0x30))();
      *(undefined8 *)(param_1 + 0x18c) = *(undefined8 *)(lVar4 + 0x150);
    }
    if ((longlong *)plVar5[1] != (longlong *)0x0) {
      lVar4 = (**(code **)(*(longlong *)plVar5[1] + 0x30))();
      *(undefined8 *)(param_1 + 0x194) = *(undefined8 *)(lVar4 + 0x30);
      lVar4 = (**(code **)(*(longlong *)plVar5[1] + 0x30))();
      *(undefined8 *)(param_1 + 0x19c) = *(undefined8 *)(lVar4 + 0x28);
    }
  }
  return;
}



// FUNCTION 141f05630 FUN_141f05630 body=307 status=ok
// SIG undefined FUN_141f05630(void)

void FUN_141f05630(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 uStack_4c;
  uint local_38;
  undefined1 uStack_19;
  undefined4 uStack_14;
  
  UObject::PostLoad();
  lVar8 = *(longlong *)(param_1 + 0x40);
  if ((lVar8 != 0) && (*(int *)(param_1 + 0x30) == 0)) {
    uVar3 = *(undefined4 *)(param_1 + 0x48);
    iVar6 = *(int *)(param_1 + 0x30);
    lVar11 = (longlong)iVar6;
    uVar7 = *(undefined4 *)(param_1 + 0x54);
    uVar4 = *(undefined1 *)(param_1 + 0x58);
    uVar5 = *(undefined1 *)(param_1 + 0x59);
    uVar10 = *(undefined8 *)(param_1 + 0x4c);
    uStack_4c = CONCAT31(uStack_4c._1_3_,1);
    local_38 = local_38 & 0xffffff00;
    *(int *)(param_1 + 0x30) = iVar6 + 1;
    if (*(int *)(param_1 + 0x34) < iVar6 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1 + 0x28,iVar6);
    }
    lVar9 = *(longlong *)(param_1 + 0x28);
    plVar1 = (longlong *)(lVar9 + lVar11 * 0x48);
    *plVar1 = lVar8;
    plVar1[1] = CONCAT44(uStack_4c,uVar3);
    puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar11 * 0x48);
    *puVar2 = uVar10;
    puVar2[1] = CONCAT44(0xffffffff,uVar7);
    puVar2 = (undefined8 *)(lVar9 + 0x20 + lVar11 * 0x48);
    *puVar2 = CONCAT44(0x3f800000,local_38);
    puVar2[1] = 0x3f8000003f800000;
    puVar2 = (undefined8 *)(lVar9 + 0x30 + lVar11 * 0x48);
    *puVar2 = 0x3f8000003f800000;
    puVar2[1] = CONCAT17(uStack_19,(uint7)CONCAT15(uVar5,CONCAT14(uVar4,0x3f800000))) &
                0xf9ffffffffffffff | 0x100000000000000;
    *(ulonglong *)(lVar9 + 0x40 + lVar11 * 0x48) = CONCAT44(uStack_14,0x10101);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 141f05770 Rehash body=573 status=ok
// SIG undefined Rehash(void)

void TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
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
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar8;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        uVar6 = (longlong)(int)*plVar2 - 1U & uVar10;
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar9 + uVar6 * 4) = 0xffffffff;
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
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_141f058af;
        uVar8 = puVar12[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
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
      if (iVar3 < iStack_44) {
LAB_141f058af:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0x50 + *param_1);
        uVar8 = ((((puVar12[7] << 8 ^ puVar12[6]) << 3 ^ puVar12[9]) << 10 ^ puVar12[8]) << 3 ^
                 puVar12[3] ^ puVar12[5] ^ puVar12[4] ^ puVar12[1] ^ puVar12[2] ^ *puVar12) &
                (int)*plVar2 - 1U;
        puVar12[0x13] = uVar8;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        puVar12[0x12] =
             *(uint *)((longlong)plVar9 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141f059b0 Remove body=144 status=ok
// SIG undefined Remove(void)

void TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar4 = (longlong)
            (int)((int)param_1[9] - 1U & *(uint *)(lVar2 + 0x4c + (longlong)param_2 * 0x50));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)(lVar2 + 0x48 + (longlong)param_2 * 0x50);
        break;
      }
      piVar5 = (int *)(lVar2 + 0x48 + (longlong)iVar1 * 0x50);
      iVar1 = *piVar5;
    }
  }
  TSparseArray<TSetElement<FCachedLandscapeFoliage::FGrassComp>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 141f05a40 RemoveAtImpl body=128 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TAlignedHeapAllocator<0>_>::
     RemoveAtImpl(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = (int)param_1[1];
    iVar2 = (iVar1 - param_2) - param_3;
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x30 + *param_1),
                 (void *)((longlong)(param_2 + param_3) * 0x30 + *param_1),(longlong)iVar2 * 0x30);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 - param_3;
    if (param_4 != '\0') {
      TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141f05ac0 RemoveAtImpl body=125 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TAlignedHeapAllocator<0>_>::
     RemoveAtImpl(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = (int)param_1[1];
    iVar2 = (iVar1 - param_2) - param_3;
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x18),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 0x18),(longlong)iVar2 * 0x18);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 - param_3;
    if (param_4 != '\0') {
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141f05b40 ResizeBuffer body=125 status=ok
// SIG undefined ResizeBuffer(void)

void TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_>::ResizeBuffer
               (longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = (uint)param_2;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < uVar1) {
    if (((param_3 & 1) == 0) && (*(int *)(param_1 + 0x1c) < (int)uVar1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo();
      uVar2 = *(uint *)(param_1 + 0x18);
    }
    iVar3 = (*(int *)(param_1 + 0x18) - uVar2) + uVar1;
    *(int *)(param_1 + 0x18) = iVar3;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow();
      return;
    }
  }
  else if (uVar1 < uVar2) {
    TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TAlignedHeapAllocator<0>_>::
    RemoveAtImpl(param_1 + 0x10,param_2,uVar2 - uVar1,~(byte)(param_3 >> 1) & 1);
  }
  return;
}



// FUNCTION 141f05bc0 ResizeBuffer body=125 status=ok
// SIG undefined ResizeBuffer(void)

void TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>_>::
     ResizeBuffer(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = (uint)param_2;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < uVar1) {
    if (((param_3 & 1) == 0) && (*(int *)(param_1 + 0x1c) < (int)uVar1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo();
      uVar2 = *(uint *)(param_1 + 0x18);
    }
    iVar3 = (*(int *)(param_1 + 0x18) - uVar2) + uVar1;
    *(int *)(param_1 + 0x18) = iVar3;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                ();
      return;
    }
  }
  else if (uVar1 < uVar2) {
    TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TAlignedHeapAllocator<0>_>::
    RemoveAtImpl(param_1 + 0x10,param_2,uVar2 - uVar1,~(byte)(param_3 >> 1) & 1);
  }
  return;
}



// FUNCTION 141f05c40 ResizeBuffer body=125 status=ok
// SIG undefined ResizeBuffer(void)

void TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceLightMapVector>::ResizeBuffer
               (longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = (uint)param_2;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < uVar1) {
    if (((param_3 & 1) == 0) && (*(int *)(param_1 + 0x1c) < (int)uVar1)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo();
      uVar2 = *(uint *)(param_1 + 0x18);
    }
    iVar3 = (*(int *)(param_1 + 0x18) - uVar2) + uVar1;
    *(int *)(param_1 + 0x18) = iVar3;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow();
      return;
    }
  }
  else if (uVar1 < uVar2) {
    TArray<unsigned___int64,FDefaultAllocator>::RemoveAtImpl
              (param_1 + 0x10,param_2,uVar2 - uVar1,~(byte)(param_3 >> 1) & 1);
  }
  return;
}



// FUNCTION 141f05cc0 ResizeBuffer body=125 status=ok
// SIG undefined ResizeBuffer(void)

void TStaticMeshVertexData<FVector4>::ResizeBuffer(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = (uint)param_2;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < uVar1) {
    if (((param_3 & 1) == 0) && (*(int *)(param_1 + 0x1c) < (int)uVar1)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
      uVar2 = *(uint *)(param_1 + 0x18);
    }
    iVar3 = (*(int *)(param_1 + 0x18) - uVar2) + uVar1;
    *(int *)(param_1 + 0x18) = iVar3;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
      return;
    }
  }
  else if (uVar1 < uVar2) {
    FUN_14175ebf0(param_1 + 0x10,param_2,uVar2 - uVar1,~(byte)(param_3 >> 1) & 1);
  }
  return;
}



// FUNCTION 141f05d80 Serialize body=34 status=ok
// SIG undefined Serialize(void)

void AAkReverbVolume::Serialize(undefined8 param_1,undefined8 param_2)

{
  AActor::Serialize();
  FArchive::UsingCustomVersion(param_2,&DAT_1464ce018);
  return;
}



// FUNCTION 141f05db0 Serialize body=50 status=ok
// SIG undefined Serialize(void)

void ULandscapeInfoMap::Serialize(longlong param_1,longlong param_2)

{
  FUN_141763960();
  if ((*(byte *)(param_2 + 0x2a) & 8) != 0) {
    ::operator<<(param_2,param_1 + 0x28);
  }
  return;
}



// FUNCTION 141f05df0 FUN_141f05df0 body=5671 status=ok
// SIG undefined FUN_141f05df0(void)

/* WARNING: Removing unreachable block (ram,0x000141f073a1) */
/* WARNING: Removing unreachable block (ram,0x000141f073b4) */
/* WARNING: Removing unreachable block (ram,0x000141f073c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141f05df0(longlong param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  code *pcVar9;
  ushort uVar10;
  float fVar11;
  float fVar12;
  ushort uVar13;
  uint uVar14;
  float fVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  ushort uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint uVar30;
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
  float local_198;
  
  lVar21 = (longlong)param_2;
  uVar14 = *(int *)(param_1 + 0xf0) * 0xbb38435 + 0x3619636b;
  if (*(char *)(param_1 + 0x180) == '\0') {
    *(uint *)(param_1 + 0xf0) = uVar14;
    fVar35 = *param_3;
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    fVar4 = param_3[3];
    fVar15 = (float)(uVar14 & 0x7fffff | 0x3f800000);
    fVar8 = param_3[4];
    fVar11 = param_3[5];
    fVar12 = param_3[6];
    lVar20 = *(longlong *)(param_1 + 0x1c0);
    fVar26 = fVar2 + fVar2;
    fVar28 = fVar3 + fVar3;
    fVar32 = fVar35 * (fVar35 + fVar35);
    fVar27 = (fVar35 + fVar35) * fVar4;
    fVar5 = param_3[8];
    fVar6 = param_3[9];
    fVar7 = param_3[10];
    fVar25 = (fVar28 * fVar4 + fVar26 * fVar35) * fVar5;
    fVar29 = (fVar27 + fVar28 * fVar2) * fVar6;
    fVar31 = (fVar26 * fVar4 + fVar28 * fVar35) * fVar7;
    fVar24 = fVar6 * (fVar26 * fVar35 - fVar28 * fVar4);
    fVar27 = fVar7 * (fVar28 * fVar2 - fVar27);
    fVar35 = fVar5 * (fVar28 * fVar35 - fVar26 * fVar4);
    uVar14 = (uint)((_DAT_146ac44a0 - (fVar3 * fVar28 + fVar2 * fVar26)) * fVar5) & _DAT_146ac4490;
    uVar23 = (uint)((fRam0000000146ac44a4 - (fVar3 * fVar28 + fVar32)) * fVar6) &
             uRam0000000146ac4494;
    uVar30 = (uint)((fRam0000000146ac44a8 - (fVar2 * fVar26 + fVar32)) * fVar7) &
             uRam0000000146ac4498;
    (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x28))();
    (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x20))();
    pfVar1 = (float *)(lVar20 + lVar21 * 0x10);
    *pfVar1 = fVar8;
    pfVar1[1] = fVar11;
    pfVar1[2] = fVar12;
    pfVar1[3] = fVar15 - (float)(int)fVar15;
    lVar20 = *(longlong *)(param_1 + 0x1d0);
    pcVar9 = *(code **)(**(longlong **)(param_1 + 0x1c8) + 0x28);
    if (*(char *)(param_1 + 0x1ec) == '\0') {
      (*pcVar9)();
      (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x20))();
      *(uint *)(lVar20 + lVar21 * 0x30) = uVar14;
      *(float *)(lVar20 + 4 + lVar21 * 0x30) = fVar25;
      *(float *)(lVar20 + 8 + lVar21 * 0x30) = fVar35;
      *(undefined4 *)(lVar20 + 0xc + lVar21 * 0x30) = 0;
      *(float *)(lVar20 + 0x10 + lVar21 * 0x30) = fVar24;
      *(uint *)(lVar20 + 0x14 + lVar21 * 0x30) = uVar23;
      *(float *)(lVar20 + 0x18 + lVar21 * 0x30) = fVar29;
      *(undefined4 *)(lVar20 + 0x1c + lVar21 * 0x30) = 0;
      *(float *)(lVar20 + 0x20 + lVar21 * 0x30) = fVar31;
      *(float *)(lVar20 + 0x24 + lVar21 * 0x30) = fVar27;
      *(uint *)(lVar20 + 0x28 + lVar21 * 0x30) = uVar30;
      *(undefined4 *)(lVar20 + 0x2c + lVar21 * 0x30) = 0;
    }
    else {
      (*pcVar9)();
      (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x20))();
      uVar13 = *(ushort *)(lVar20 + lVar21 * 0x18);
      uVar10 = (ushort)(uVar14 >> 0x10);
      uVar22 = uVar10 & 0x8000 | uVar13 & 0x7fff;
      uVar17 = uVar14 >> 0x17 & 0xff;
      if (uVar17 < 0x71) {
        *(ushort *)(lVar20 + lVar21 * 0x18) = uVar10 & 0x8000;
        iVar19 = -uVar17 + 0x7e;
        if (iVar19 < 0x19) {
          uVar14 = uVar14 & 0x7fffff | 0x800000;
          uVar13 = (ushort)(uVar14 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
          *(ushort *)(lVar20 + lVar21 * 0x18) = uVar13;
          if ((uVar14 >> ((char)-uVar17 + 0x7dU & 0x1f) & 1) != 0) {
            *(ushort *)(lVar20 + lVar21 * 0x18) = uVar13 + 1;
          }
        }
      }
      else if (uVar17 < 0x8f) {
        uVar22 = uVar22 ^ (((uVar10 >> 7) - 0x10) * 0x400 ^ uVar22) & 0x7c00;
        *(ushort *)(lVar20 + lVar21 * 0x18) = ((ushort)(uVar14 >> 0xd) ^ uVar22) & 0x3ff ^ uVar22;
      }
      else {
        *(ushort *)(lVar20 + lVar21 * 0x18) = uVar10 & 0x8000 | uVar13 & 0x7bff | 0x7bff;
      }
      uVar13 = *(ushort *)(lVar20 + 2 + lVar21 * 0x18);
      uVar10 = (ushort)((uint)fVar25 >> 0x10);
      uVar22 = uVar10 & 0x8000 | uVar13 & 0x7fff;
      uVar14 = (uint)fVar25 >> 0x17 & 0xff;
      if (uVar14 < 0x71) {
        *(ushort *)(lVar20 + 2 + lVar21 * 0x18) = uVar10 & 0x8000;
        iVar19 = -uVar14 + 0x7e;
        if (iVar19 < 0x19) {
          uVar17 = (uint)fVar25 & 0x7fffff | 0x800000;
          uVar13 = (ushort)(uVar17 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
          *(ushort *)(lVar20 + 2 + lVar21 * 0x18) = uVar13;
          if ((uVar17 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
            *(ushort *)(lVar20 + 2 + lVar21 * 0x18) = uVar13 + 1;
          }
        }
      }
      else if (uVar14 < 0x8f) {
        uVar22 = uVar22 ^ (((uVar10 >> 7) - 0x10) * 0x400 ^ uVar22) & 0x7c00;
        *(ushort *)(lVar20 + 2 + lVar21 * 0x18) =
             ((ushort)((uint)fVar25 >> 0xd) ^ uVar22) & 0x3ff ^ uVar22;
      }
      else {
        *(ushort *)(lVar20 + 2 + lVar21 * 0x18) = uVar10 & 0x8000 | uVar13 & 0x7bff | 0x7bff;
      }
      uVar13 = *(ushort *)(lVar20 + 4 + lVar21 * 0x18);
      uVar10 = (ushort)((uint)fVar35 >> 0x10);
      uVar22 = uVar10 & 0x8000 | uVar13 & 0x7fff;
      uVar14 = (uint)fVar35 >> 0x17 & 0xff;
      if (((uint)fVar35 >> 0x17 & 0xff) < 0x71) {
        iVar19 = -uVar14;
        *(ushort *)(lVar20 + 4 + lVar21 * 0x18) = uVar10 & 0x8000;
        iVar16 = iVar19 + 0x7e;
        if (iVar16 < 0x19) {
          uVar14 = (uint)fVar35 & 0x7fffff | 0x800000;
          uVar13 = (ushort)(uVar14 >> ((byte)iVar16 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
          *(ushort *)(lVar20 + 4 + lVar21 * 0x18) = uVar13;
          if ((uVar14 >> ((char)iVar19 + 0x7dU & 0x1f) & 1) != 0) {
            *(ushort *)(lVar20 + 4 + lVar21 * 0x18) = uVar13 + 1;
          }
        }
      }
      else if (uVar14 < 0x8f) {
        uVar22 = uVar22 ^ (((uVar10 >> 7) - 0x10) * 0x400 ^ uVar22) & 0x7c00;
        *(ushort *)(lVar20 + 4 + lVar21 * 0x18) =
             ((ushort)((uint)fVar35 >> 0xd) ^ uVar22) & 0x3ff ^ uVar22;
      }
      else {
        *(ushort *)(lVar20 + 4 + lVar21 * 0x18) = uVar10 & 0x8000 | uVar13 & 0x7bff | 0x7bff;
      }
      *(undefined2 *)(lVar20 + 6 + lVar21 * 0x18) = 0;
      uVar13 = *(ushort *)(lVar20 + 8 + lVar21 * 0x18);
      uVar10 = (ushort)((uint)fVar24 >> 0x10);
      uVar22 = uVar10 & 0x8000 | uVar13 & 0x7fff;
      uVar14 = (uint)fVar24 >> 0x17 & 0xff;
      if (uVar14 < 0x71) {
        *(ushort *)(lVar20 + 8 + lVar21 * 0x18) = uVar10 & 0x8000;
        iVar19 = -uVar14 + 0x7e;
        if (iVar19 < 0x19) {
          uVar17 = (uint)fVar24 & 0x7fffff | 0x800000;
          uVar13 = (ushort)(uVar17 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
          *(ushort *)(lVar20 + 8 + lVar21 * 0x18) = uVar13;
          if ((uVar17 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
            *(ushort *)(lVar20 + 8 + lVar21 * 0x18) = uVar13 + 1;
          }
        }
      }
      else if (uVar14 < 0x8f) {
        uVar22 = uVar22 ^ (((uVar10 >> 7) - 0x10) * 0x400 ^ uVar22) & 0x7c00;
        *(ushort *)(lVar20 + 8 + lVar21 * 0x18) =
             ((ushort)((uint)fVar24 >> 0xd) ^ uVar22) & 0x3ff ^ uVar22;
      }
      else {
        *(ushort *)(lVar20 + 8 + lVar21 * 0x18) = uVar10 & 0x8000 | uVar13 & 0x7bff | 0x7bff;
      }
      uVar13 = *(ushort *)(lVar20 + 10 + lVar21 * 0x18);
      uVar10 = (ushort)(uVar23 >> 0x10);
      uVar22 = uVar10 & 0x8000 | uVar13 & 0x7fff;
      uVar14 = uVar23 >> 0x17 & 0xff;
      if (uVar14 < 0x71) {
        *(ushort *)(lVar20 + 10 + lVar21 * 0x18) = uVar10 & 0x8000;
        iVar19 = -uVar14 + 0x7e;
        if (iVar19 < 0x19) {
          uVar23 = uVar23 & 0x7fffff | 0x800000;
          uVar13 = (ushort)(uVar23 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
          *(ushort *)(lVar20 + 10 + lVar21 * 0x18) = uVar13;
          if ((uVar23 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
            *(ushort *)(lVar20 + 10 + lVar21 * 0x18) = uVar13 + 1;
          }
        }
      }
      else if (uVar14 < 0x8f) {
        uVar22 = uVar22 ^ (((uVar10 >> 7) - 0x10) * 0x400 ^ uVar22) & 0x7c00;
        *(ushort *)(lVar20 + 10 + lVar21 * 0x18) =
             ((ushort)(uVar23 >> 0xd) ^ uVar22) & 0x3ff ^ uVar22;
      }
      else {
        *(ushort *)(lVar20 + 10 + lVar21 * 0x18) = uVar10 & 0x8000 | uVar13 & 0x7bff | 0x7bff;
      }
      uVar13 = *(ushort *)(lVar20 + 0xc + lVar21 * 0x18);
      uVar10 = (ushort)((uint)fVar29 >> 0x10);
      uVar22 = uVar10 & 0x8000 | uVar13 & 0x7fff;
      uVar14 = (uint)fVar29 >> 0x17 & 0xff;
      if (((uint)fVar29 >> 0x17 & 0xff) < 0x71) {
        iVar19 = -uVar14;
        *(ushort *)(lVar20 + 0xc + lVar21 * 0x18) = uVar10 & 0x8000;
        iVar16 = iVar19 + 0x7e;
        if (iVar16 < 0x19) {
          uVar14 = (uint)fVar29 & 0x7fffff | 0x800000;
          uVar13 = (ushort)(uVar14 >> ((byte)iVar16 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
          *(ushort *)(lVar20 + 0xc + lVar21 * 0x18) = uVar13;
          if ((uVar14 >> ((char)iVar19 + 0x7dU & 0x1f) & 1) != 0) {
            *(ushort *)(lVar20 + 0xc + lVar21 * 0x18) = uVar13 + 1;
          }
        }
      }
      else if (uVar14 < 0x8f) {
        uVar22 = uVar22 ^ (((uVar10 >> 7) - 0x10) * 0x400 ^ uVar22) & 0x7c00;
        *(ushort *)(lVar20 + 0xc + lVar21 * 0x18) =
             ((ushort)((uint)fVar29 >> 0xd) ^ uVar22) & 0x3ff ^ uVar22;
      }
      else {
        *(ushort *)(lVar20 + 0xc + lVar21 * 0x18) = uVar10 & 0x8000 | uVar13 & 0x7bff | 0x7bff;
      }
      *(undefined2 *)(lVar20 + 0xe + lVar21 * 0x18) = 0;
      uVar13 = *(ushort *)(lVar20 + 0x10 + lVar21 * 0x18);
      uVar10 = (ushort)((uint)fVar31 >> 0x10);
      uVar22 = uVar10 & 0x8000 | uVar13 & 0x7fff;
      uVar14 = (uint)fVar31 >> 0x17 & 0xff;
      if (uVar14 < 0x71) {
        *(ushort *)(lVar20 + 0x10 + lVar21 * 0x18) = uVar10 & 0x8000;
        iVar19 = -uVar14 + 0x7e;
        if (iVar19 < 0x19) {
          uVar23 = (uint)fVar31 & 0x7fffff | 0x800000;
          uVar13 = (ushort)(uVar23 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
          *(ushort *)(lVar20 + 0x10 + lVar21 * 0x18) = uVar13;
          if ((uVar23 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
            *(ushort *)(lVar20 + 0x10 + lVar21 * 0x18) = uVar13 + 1;
          }
        }
      }
      else if (uVar14 < 0x8f) {
        uVar22 = uVar22 ^ (((uVar10 >> 7) - 0x10) * 0x400 ^ uVar22) & 0x7c00;
        *(ushort *)(lVar20 + 0x10 + lVar21 * 0x18) =
             ((ushort)((uint)fVar31 >> 0xd) ^ uVar22) & 0x3ff ^ uVar22;
      }
      else {
        *(ushort *)(lVar20 + 0x10 + lVar21 * 0x18) = uVar10 & 0x8000 | uVar13 & 0x7bff | 0x7bff;
      }
      uVar13 = *(ushort *)(lVar20 + 0x12 + lVar21 * 0x18);
      uVar10 = (ushort)((uint)fVar27 >> 0x10);
      uVar22 = uVar10 & 0x8000 | uVar13 & 0x7fff;
      uVar14 = (uint)fVar27 >> 0x17 & 0xff;
      if (uVar14 < 0x71) {
        *(ushort *)(lVar20 + 0x12 + lVar21 * 0x18) = uVar10 & 0x8000;
        iVar19 = -uVar14 + 0x7e;
        if (iVar19 < 0x19) {
          uVar23 = (uint)fVar27 & 0x7fffff | 0x800000;
          uVar13 = (ushort)(uVar23 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
          *(ushort *)(lVar20 + 0x12 + lVar21 * 0x18) = uVar13;
          if ((uVar23 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
            *(ushort *)(lVar20 + 0x12 + lVar21 * 0x18) = uVar13 + 1;
          }
        }
      }
      else if (uVar14 < 0x8f) {
        uVar22 = uVar22 ^ (((uVar10 >> 7) - 0x10) * 0x400 ^ uVar22) & 0x7c00;
        *(ushort *)(lVar20 + 0x12 + lVar21 * 0x18) =
             ((ushort)((uint)fVar27 >> 0xd) ^ uVar22) & 0x3ff ^ uVar22;
      }
      else {
        *(ushort *)(lVar20 + 0x12 + lVar21 * 0x18) = uVar10 & 0x8000 | uVar13 & 0x7bff | 0x7bff;
      }
      uVar13 = *(ushort *)(lVar20 + 0x14 + lVar21 * 0x18);
      uVar10 = (ushort)(uVar30 >> 0x10);
      uVar22 = uVar10 & 0x8000 | uVar13 & 0x7fff;
      uVar14 = uVar30 >> 0x17 & 0xff;
      if ((uVar30 >> 0x17 & 0xff) < 0x71) {
        iVar16 = -uVar14;
        *(ushort *)(lVar20 + 0x14 + lVar21 * 0x18) = uVar10 & 0x8000;
        iVar19 = iVar16 + 0x7e;
        if (iVar19 < 0x19) {
          uVar14 = uVar30 & 0x7fffff | 0x800000;
          uVar13 = (ushort)(uVar14 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
          *(ushort *)(lVar20 + 0x14 + lVar21 * 0x18) = uVar13;
          if ((uVar14 >> ((char)iVar16 + 0x7dU & 0x1f) & 1) != 0) {
            *(ushort *)(lVar20 + 0x14 + lVar21 * 0x18) = uVar13 + 1;
            *(undefined2 *)(lVar20 + 0x16 + lVar21 * 0x18) = 0;
            goto LAB_141f07370;
          }
        }
      }
      else {
        if (0x8e < uVar14) {
          *(ushort *)(lVar20 + 0x14 + lVar21 * 0x18) = uVar10 & 0x8000 | uVar13 & 0x7bff | 0x7bff;
          *(undefined2 *)(lVar20 + 0x16 + lVar21 * 0x18) = 0;
          goto LAB_141f07370;
        }
        uVar22 = uVar22 ^ (((uVar10 >> 7) - 0x10) * 0x400 ^ uVar22) & 0x7c00;
        *(ushort *)(lVar20 + 0x14 + lVar21 * 0x18) =
             ((ushort)(uVar30 >> 0xd) ^ uVar22) & 0x3ff ^ uVar22;
      }
      *(undefined2 *)(lVar20 + 0x16 + lVar21 * 0x18) = 0;
    }
LAB_141f07370:
    lVar20 = *(longlong *)(param_1 + 0x1e0);
    (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x28))();
    (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x20))();
    iVar19 = 0;
    *(undefined2 *)(lVar20 + lVar21 * 8) = 0;
    *(undefined2 *)(lVar20 + 2 + lVar21 * 8) = 0;
    *(undefined2 *)(lVar20 + 4 + lVar21 * 8) = 0;
    goto LAB_141f073d8;
  }
  fVar40 = (param_3[4] - *(float *)(param_1 + 0x8c)) * *(float *)(param_1 + 0x1ac) +
           *(float *)(param_1 + 0x1a4);
  fVar39 = (param_3[5] - *(float *)(param_1 + 0x90)) * *(float *)(param_1 + 0x1b0) +
           *(float *)(param_1 + 0x1a8);
  fVar35 = *(float *)(param_1 + 0x19c);
  fVar2 = *(float *)(param_1 + 0x18c);
  fVar3 = *(float *)(param_1 + 0x194);
  fVar4 = *(float *)(param_1 + 0x184);
  fVar5 = *(float *)(param_1 + 400);
  fVar6 = *(float *)(param_1 + 0x1a0);
  fVar7 = *(float *)(param_1 + 0x188);
  fVar8 = *(float *)(param_1 + 0x198);
  *(uint *)(param_1 + 0xf0) = uVar14;
  fVar11 = *param_3;
  fVar12 = param_3[1];
  fVar15 = param_3[2];
  fVar26 = param_3[3];
  local_198 = (float)(uVar14 & 0x7fffff | 0x3f800000);
  local_198 = local_198 - (float)(int)local_198;
  fVar24 = fVar12 + fVar12;
  fVar25 = fVar15 + fVar15;
  fVar31 = fVar11 * (fVar11 + fVar11);
  fVar29 = fVar26 * (fVar11 + fVar11);
  fVar27 = param_3[8];
  fVar28 = param_3[9];
  fVar32 = param_3[10];
  fVar36 = (fVar26 * fVar25 + fVar11 * fVar24) * fVar27;
  fVar37 = (fVar29 + fVar12 * fVar25) * fVar28;
  fVar38 = (fVar26 * fVar24 + fVar11 * fVar25) * fVar32;
  fVar33 = fVar28 * (fVar11 * fVar24 - fVar26 * fVar25);
  fVar29 = fVar32 * (fVar12 * fVar25 - fVar29);
  fVar34 = fVar27 * (fVar11 * fVar25 - fVar26 * fVar24);
  fVar26 = (float)((uint)((_DAT_146ac44a0 - (fVar15 * fVar25 + fVar12 * fVar24)) * fVar27) &
                  _DAT_146ac4490);
  fVar27 = (float)((uint)((fRam0000000146ac44a4 - (fVar15 * fVar25 + fVar31)) * fVar28) &
                  uRam0000000146ac4494);
  fVar28 = (float)((uint)((fRam0000000146ac44a8 - (fVar12 * fVar24 + fVar31)) * fVar32) &
                  uRam0000000146ac4498);
  fVar11 = param_3[4];
  fVar12 = param_3[5];
  fVar15 = param_3[6];
  if (0.0 <= ((fVar27 * fVar28 - fVar29 * fVar37) * fVar26 -
             (fVar36 * fVar28 - fVar34 * fVar29) * fVar33) +
             (fVar36 * fVar37 - fVar34 * fVar27) * fVar38) {
    local_198 = (float)((uint)local_198 & 0xfffffffe);
  }
  else {
    local_198 = (float)((uint)local_198 | 1);
  }
  lVar20 = *(longlong *)(param_1 + 0x1c0);
  (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x28))();
  (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x20))();
  pfVar1 = (float *)(lVar20 + lVar21 * 0x10);
  *pfVar1 = fVar11;
  pfVar1[1] = fVar12;
  pfVar1[2] = fVar15;
  pfVar1[3] = local_198;
  lVar20 = *(longlong *)(param_1 + 0x1d0);
  pcVar9 = *(code **)(**(longlong **)(param_1 + 0x1c8) + 0x28);
  if (*(char *)(param_1 + 0x1ec) == '\0') {
    (*pcVar9)();
    (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x20))();
    *(float *)(lVar20 + lVar21 * 0x30) = fVar26;
    *(float *)(lVar20 + 4 + lVar21 * 0x30) = fVar36;
    *(float *)(lVar20 + 8 + lVar21 * 0x30) = fVar34;
    *(undefined4 *)(lVar20 + 0xc + lVar21 * 0x30) = 0;
    *(float *)(lVar20 + 0x10 + lVar21 * 0x30) = fVar33;
    *(float *)(lVar20 + 0x14 + lVar21 * 0x30) = fVar27;
    *(float *)(lVar20 + 0x18 + lVar21 * 0x30) = fVar37;
    *(undefined4 *)(lVar20 + 0x1c + lVar21 * 0x30) = 0;
    *(float *)(lVar20 + 0x20 + lVar21 * 0x30) = fVar38;
    *(float *)(lVar20 + 0x24 + lVar21 * 0x30) = fVar29;
    *(float *)(lVar20 + 0x28 + lVar21 * 0x30) = fVar28;
    *(undefined4 *)(lVar20 + 0x2c + lVar21 * 0x30) = 0;
  }
  else {
    (*pcVar9)();
    (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x20))();
    uVar13 = *(ushort *)(lVar20 + lVar21 * 0x18);
    uVar10 = (ushort)((uint)fVar26 >> 0x10);
    uVar22 = uVar10 & 0x8000 | uVar13 & 0x7fff;
    uVar14 = (uint)fVar26 >> 0x17 & 0xff;
    if (uVar14 < 0x71) {
      *(ushort *)(lVar20 + lVar21 * 0x18) = uVar10 & 0x8000;
      iVar19 = -uVar14 + 0x7e;
      if (iVar19 < 0x19) {
        uVar23 = (uint)fVar26 & 0x7fffff | 0x800000;
        uVar13 = (ushort)(uVar23 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
        *(ushort *)(lVar20 + lVar21 * 0x18) = uVar13;
        if ((uVar23 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
          *(ushort *)(lVar20 + lVar21 * 0x18) = uVar13 + 1;
        }
      }
    }
    else if (uVar14 < 0x8f) {
      uVar22 = uVar22 ^ (((uVar10 >> 7) - 0x10) * 0x400 ^ uVar22) & 0x7c00;
      *(ushort *)(lVar20 + lVar21 * 0x18) =
           ((ushort)((uint)fVar26 >> 0xd) ^ uVar22) & 0x3ff ^ uVar22;
    }
    else {
      *(ushort *)(lVar20 + lVar21 * 0x18) = uVar10 & 0x8000 | uVar13 & 0x7bff | 0x7bff;
    }
    uVar13 = *(ushort *)(lVar20 + 2 + lVar21 * 0x18);
    uVar10 = (ushort)((uint)fVar36 >> 0x10);
    uVar22 = uVar10 & 0x8000 | uVar13 & 0x7fff;
    uVar14 = (uint)fVar36 >> 0x17 & 0xff;
    if (uVar14 < 0x71) {
      *(ushort *)(lVar20 + 2 + lVar21 * 0x18) = uVar10 & 0x8000;
      iVar19 = -uVar14 + 0x7e;
      if (iVar19 < 0x19) {
        uVar23 = (uint)fVar36 & 0x7fffff | 0x800000;
        uVar13 = (ushort)(uVar23 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
        *(ushort *)(lVar20 + 2 + lVar21 * 0x18) = uVar13;
        if ((uVar23 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
          *(ushort *)(lVar20 + 2 + lVar21 * 0x18) = uVar13 + 1;
        }
      }
    }
    else if (uVar14 < 0x8f) {
      uVar22 = uVar22 ^ (((uVar10 >> 7) - 0x10) * 0x400 ^ uVar22) & 0x7c00;
      *(ushort *)(lVar20 + 2 + lVar21 * 0x18) =
           ((ushort)((uint)fVar36 >> 0xd) ^ uVar22) & 0x3ff ^ uVar22;
    }
    else {
      *(ushort *)(lVar20 + 2 + lVar21 * 0x18) = uVar10 & 0x8000 | uVar13 & 0x7bff | 0x7bff;
    }
    uVar13 = *(ushort *)(lVar20 + 4 + lVar21 * 0x18);
    uVar10 = (ushort)((uint)fVar34 >> 0x10);
    uVar22 = uVar10 & 0x8000 | uVar13 & 0x7fff;
    uVar14 = (uint)fVar34 >> 0x17 & 0xff;
    if (((uint)fVar34 >> 0x17 & 0xff) < 0x71) {
      iVar19 = -uVar14;
      *(ushort *)(lVar20 + 4 + lVar21 * 0x18) = uVar10 & 0x8000;
      iVar16 = iVar19 + 0x7e;
      if (iVar16 < 0x19) {
        uVar14 = (uint)fVar34 & 0x7fffff | 0x800000;
        uVar13 = (ushort)(uVar14 >> ((byte)iVar16 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
        *(ushort *)(lVar20 + 4 + lVar21 * 0x18) = uVar13;
        if ((uVar14 >> ((char)iVar19 + 0x7dU & 0x1f) & 1) != 0) {
          *(ushort *)(lVar20 + 4 + lVar21 * 0x18) = uVar13 + 1;
        }
      }
    }
    else if (uVar14 < 0x8f) {
      uVar22 = uVar22 ^ (((uVar10 >> 7) - 0x10) * 0x400 ^ uVar22) & 0x7c00;
      *(ushort *)(lVar20 + 4 + lVar21 * 0x18) =
           ((ushort)((uint)fVar34 >> 0xd) ^ uVar22) & 0x3ff ^ uVar22;
    }
    else {
      *(ushort *)(lVar20 + 4 + lVar21 * 0x18) = uVar10 & 0x8000 | uVar13 & 0x7bff | 0x7bff;
    }
    *(undefined2 *)(lVar20 + 6 + lVar21 * 0x18) = 0;
    uVar13 = *(ushort *)(lVar20 + 8 + lVar21 * 0x18);
    uVar10 = (ushort)((uint)fVar33 >> 0x10);
    uVar22 = uVar10 & 0x8000 | uVar13 & 0x7fff;
    uVar14 = (uint)fVar33 >> 0x17 & 0xff;
    if (uVar14 < 0x71) {
      *(ushort *)(lVar20 + 8 + lVar21 * 0x18) = uVar10 & 0x8000;
      iVar19 = -uVar14 + 0x7e;
      if (iVar19 < 0x19) {
        uVar23 = (uint)fVar33 & 0x7fffff | 0x800000;
        uVar13 = (ushort)(uVar23 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
        *(ushort *)(lVar20 + 8 + lVar21 * 0x18) = uVar13;
        if ((uVar23 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
          *(ushort *)(lVar20 + 8 + lVar21 * 0x18) = uVar13 + 1;
        }
      }
    }
    else if (uVar14 < 0x8f) {
      uVar22 = uVar22 ^ (((uVar10 >> 7) - 0x10) * 0x400 ^ uVar22) & 0x7c00;
      *(ushort *)(lVar20 + 8 + lVar21 * 0x18) =
           ((ushort)((uint)fVar33 >> 0xd) ^ uVar22) & 0x3ff ^ uVar22;
    }
    else {
      *(ushort *)(lVar20 + 8 + lVar21 * 0x18) = uVar10 & 0x8000 | uVar13 & 0x7bff | 0x7bff;
    }
    uVar13 = *(ushort *)(lVar20 + 10 + lVar21 * 0x18);
    uVar10 = (ushort)((uint)fVar27 >> 0x10);
    uVar22 = uVar10 & 0x8000 | uVar13 & 0x7fff;
    uVar14 = (uint)fVar27 >> 0x17 & 0xff;
    if (uVar14 < 0x71) {
      *(ushort *)(lVar20 + 10 + lVar21 * 0x18) = uVar10 & 0x8000;
      iVar19 = -uVar14 + 0x7e;
      if (iVar19 < 0x19) {
        uVar23 = (uint)fVar27 & 0x7fffff | 0x800000;
        uVar13 = (ushort)(uVar23 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
        *(ushort *)(lVar20 + 10 + lVar21 * 0x18) = uVar13;
        if ((uVar23 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
          *(ushort *)(lVar20 + 10 + lVar21 * 0x18) = uVar13 + 1;
        }
      }
    }
    else if (uVar14 < 0x8f) {
      uVar22 = uVar22 ^ (((uVar10 >> 7) - 0x10) * 0x400 ^ uVar22) & 0x7c00;
      *(ushort *)(lVar20 + 10 + lVar21 * 0x18) =
           ((ushort)((uint)fVar27 >> 0xd) ^ uVar22) & 0x3ff ^ uVar22;
    }
    else {
      *(ushort *)(lVar20 + 10 + lVar21 * 0x18) = uVar10 & 0x8000 | uVar13 & 0x7bff | 0x7bff;
    }
    uVar13 = *(ushort *)(lVar20 + 0xc + lVar21 * 0x18);
    uVar10 = (ushort)((uint)fVar37 >> 0x10);
    uVar22 = uVar10 & 0x8000 | uVar13 & 0x7fff;
    uVar14 = (uint)fVar37 >> 0x17 & 0xff;
    if (((uint)fVar37 >> 0x17 & 0xff) < 0x71) {
      iVar19 = -uVar14;
      *(ushort *)(lVar20 + 0xc + lVar21 * 0x18) = uVar10 & 0x8000;
      iVar16 = iVar19 + 0x7e;
      if (iVar16 < 0x19) {
        uVar14 = (uint)fVar37 & 0x7fffff | 0x800000;
        uVar13 = (ushort)(uVar14 >> ((byte)iVar16 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
        *(ushort *)(lVar20 + 0xc + lVar21 * 0x18) = uVar13;
        if ((uVar14 >> ((char)iVar19 + 0x7dU & 0x1f) & 1) != 0) {
          *(ushort *)(lVar20 + 0xc + lVar21 * 0x18) = uVar13 + 1;
        }
      }
    }
    else if (uVar14 < 0x8f) {
      uVar22 = uVar22 ^ (((uVar10 >> 7) - 0x10) * 0x400 ^ uVar22) & 0x7c00;
      *(ushort *)(lVar20 + 0xc + lVar21 * 0x18) =
           ((ushort)((uint)fVar37 >> 0xd) ^ uVar22) & 0x3ff ^ uVar22;
    }
    else {
      *(ushort *)(lVar20 + 0xc + lVar21 * 0x18) = uVar10 & 0x8000 | uVar13 & 0x7bff | 0x7bff;
    }
    *(undefined2 *)(lVar20 + 0xe + lVar21 * 0x18) = 0;
    uVar13 = *(ushort *)(lVar20 + 0x10 + lVar21 * 0x18);
    uVar10 = (ushort)((uint)fVar38 >> 0x10);
    uVar22 = uVar10 & 0x8000 | uVar13 & 0x7fff;
    uVar14 = (uint)fVar38 >> 0x17 & 0xff;
    if (uVar14 < 0x71) {
      *(ushort *)(lVar20 + 0x10 + lVar21 * 0x18) = uVar10 & 0x8000;
      iVar19 = -uVar14 + 0x7e;
      if (iVar19 < 0x19) {
        uVar23 = (uint)fVar38 & 0x7fffff | 0x800000;
        uVar13 = (ushort)(uVar23 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
        *(ushort *)(lVar20 + 0x10 + lVar21 * 0x18) = uVar13;
        if ((uVar23 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
          *(ushort *)(lVar20 + 0x10 + lVar21 * 0x18) = uVar13 + 1;
        }
      }
    }
    else if (uVar14 < 0x8f) {
      uVar22 = uVar22 ^ (((uVar10 >> 7) - 0x10) * 0x400 ^ uVar22) & 0x7c00;
      *(ushort *)(lVar20 + 0x10 + lVar21 * 0x18) =
           ((ushort)((uint)fVar38 >> 0xd) ^ uVar22) & 0x3ff ^ uVar22;
    }
    else {
      *(ushort *)(lVar20 + 0x10 + lVar21 * 0x18) = uVar10 & 0x8000 | uVar13 & 0x7bff | 0x7bff;
    }
    uVar13 = *(ushort *)(lVar20 + 0x12 + lVar21 * 0x18);
    uVar10 = (ushort)((uint)fVar29 >> 0x10);
    uVar22 = uVar10 & 0x8000 | uVar13 & 0x7fff;
    uVar14 = (uint)fVar29 >> 0x17 & 0xff;
    if (uVar14 < 0x71) {
      *(ushort *)(lVar20 + 0x12 + lVar21 * 0x18) = uVar10 & 0x8000;
      iVar19 = -uVar14 + 0x7e;
      if (iVar19 < 0x19) {
        uVar23 = (uint)fVar29 & 0x7fffff | 0x800000;
        uVar13 = (ushort)(uVar23 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
        *(ushort *)(lVar20 + 0x12 + lVar21 * 0x18) = uVar13;
        if ((uVar23 >> ((char)-uVar14 + 0x7dU & 0x1f) & 1) != 0) {
          *(ushort *)(lVar20 + 0x12 + lVar21 * 0x18) = uVar13 + 1;
        }
      }
    }
    else if (uVar14 < 0x8f) {
      uVar22 = uVar22 ^ (((uVar10 >> 7) - 0x10) * 0x400 ^ uVar22) & 0x7c00;
      *(ushort *)(lVar20 + 0x12 + lVar21 * 0x18) =
           ((ushort)((uint)fVar29 >> 0xd) ^ uVar22) & 0x3ff ^ uVar22;
    }
    else {
      *(ushort *)(lVar20 + 0x12 + lVar21 * 0x18) = uVar10 & 0x8000 | uVar13 & 0x7bff | 0x7bff;
    }
    uVar13 = *(ushort *)(lVar20 + 0x14 + lVar21 * 0x18);
    uVar10 = (ushort)((uint)fVar28 >> 0x10);
    uVar22 = uVar10 & 0x8000 | uVar13 & 0x7fff;
    uVar14 = (uint)fVar28 >> 0x17 & 0xff;
    if (((uint)fVar28 >> 0x17 & 0xff) < 0x71) {
      iVar16 = -uVar14;
      *(ushort *)(lVar20 + 0x14 + lVar21 * 0x18) = uVar10 & 0x8000;
      iVar19 = iVar16 + 0x7e;
      if (iVar19 < 0x19) {
        uVar14 = (uint)fVar28 & 0x7fffff | 0x800000;
        uVar13 = (ushort)(uVar14 >> ((byte)iVar19 & 0x1f)) & 0x3ff | uVar10 & 0x8000;
        *(ushort *)(lVar20 + 0x14 + lVar21 * 0x18) = uVar13;
        if ((uVar14 >> ((char)iVar16 + 0x7dU & 0x1f) & 1) != 0) {
          *(ushort *)(lVar20 + 0x14 + lVar21 * 0x18) = uVar13 + 1;
          *(undefined2 *)(lVar20 + 0x16 + lVar21 * 0x18) = 0;
          goto LAB_141f06910;
        }
      }
    }
    else {
      if (0x8e < uVar14) {
        *(ushort *)(lVar20 + 0x14 + lVar21 * 0x18) = uVar10 & 0x8000 | uVar13 & 0x7bff | 0x7bff;
        *(undefined2 *)(lVar20 + 0x16 + lVar21 * 0x18) = 0;
        goto LAB_141f06910;
      }
      uVar22 = uVar22 ^ (((uVar10 >> 7) - 0x10) * 0x400 ^ uVar22) & 0x7c00;
      *(ushort *)(lVar20 + 0x14 + lVar21 * 0x18) =
           ((ushort)((uint)fVar28 >> 0xd) ^ uVar22) & 0x3ff ^ uVar22;
    }
    *(undefined2 *)(lVar20 + 0x16 + lVar21 * 0x18) = 0;
  }
LAB_141f06910:
  lVar20 = *(longlong *)(param_1 + 0x1e0);
  (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x28))();
  (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x20))();
  iVar16 = (int)((fVar40 * fVar2 + fVar4) * 32767.0);
  iVar19 = -0x8000;
  if ((-0x8001 < iVar16) && (iVar19 = 0x7fff, iVar16 < 0x7fff)) {
    iVar19 = iVar16;
  }
  *(short *)(lVar20 + lVar21 * 8) = (short)iVar19;
  iVar18 = (int)((fVar39 * fVar5 + fVar7) * 32767.0);
  iVar16 = -0x8000;
  iVar19 = iVar16;
  if ((-0x8001 < iVar18) && (iVar19 = 0x7fff, iVar18 < 0x7fff)) {
    iVar19 = iVar18;
  }
  *(short *)(lVar20 + 2 + lVar21 * 8) = (short)iVar19;
  iVar19 = (int)((fVar40 * fVar35 + fVar3) * 32767.0);
  if ((-0x8001 < iVar19) && (iVar16 = 0x7fff, iVar19 < 0x7fff)) {
    iVar16 = iVar19;
  }
  *(short *)(lVar20 + 4 + lVar21 * 8) = (short)iVar16;
  iVar19 = (int)((fVar39 * fVar6 + fVar8) * 32767.0);
LAB_141f073d8:
  iVar16 = -0x8000;
  if ((-0x8001 < iVar19) && (iVar16 = 0x7fff, iVar19 < 0x7fff)) {
    iVar16 = iVar19;
  }
  *(short *)(lVar20 + 6 + lVar21 * 8) = (short)iVar16;
  return;
}



// FUNCTION 141f07420 FUN_141f07420 body=564 status=ok
// SIG undefined FUN_141f07420(void)

ulonglong FUN_141f07420(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  if (((int)DAT_1464ce010 < 2) ||
     (uVar5 = (int)param_1[0xae] + DAT_1464aaa8c,
     uVar6 = (ulonglong)uVar5 / (ulonglong)DAT_1464ce010, uVar5 % DAT_1464ce010 == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ac4720) &&
       (_Init_thread_header(&DAT_146ac4720), DAT_146ac4720 == -1)) {
      atexit((_func_5014 *)&LAB_143ea2310);
      _Init_thread_footer(&DAT_146ac4720);
    }
    if (*DAT_146ac45e0 == 0) {
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      if ((uVar6 != 0) && ((DAT_146ac4718 != 0 || (*(int *)(uVar6 + 0x128) != 0)))) {
        if (*(int *)(uVar6 + 0x128) == 0) {
          puVar9 = &DAT_146ac4710;
        }
        else {
          puVar9 = (undefined8 *)(uVar6 + 0x120);
          if ((void **)puVar9 != &DAT_146ac4710) {
            DAT_146ac4718 = *(int *)(uVar6 + 0x128);
            lVar7 = (longlong)DAT_146ac4718;
            pvVar2 = (void *)*puVar9;
            if ((DAT_146ac4718 == 0) && (DAT_146ac471c == 0)) {
              DAT_146ac471c = 0;
            }
            else {
              TArray<FVector,FDefaultAllocator>::ResizeForCopy(&DAT_146ac4710,DAT_146ac4718);
              _guard_xfg_dispatch_icall_nop(DAT_146ac4710,pvVar2,lVar7 * 0xc);
            }
          }
        }
        uVar6 = FUN_141f07ca0(param_1,puVar9,0,param_2);
      }
    }
    else {
      uVar6 = IStreamingManager::Get();
      iVar3 = DAT_146af1318;
      lVar7 = (longlong)DAT_146af1318;
      if (DAT_146af1318 != 0) {
        lVar8 = 0;
        DAT_146ac4718 = 0;
        if ((DAT_146ac471c < DAT_146af1318) && (DAT_146ac471c != DAT_146af1318)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(&DAT_146ac4710,DAT_146af1318);
        }
        if (0 < iVar3) {
          do {
            IStreamingManager::Get();
            lVar4 = DAT_146af1310;
            iVar3 = DAT_146ac4718;
            lVar10 = (longlong)DAT_146ac4718;
            DAT_146ac4718 = DAT_146ac4718 + 1;
            if (DAT_146ac471c < DAT_146ac4718) {
              TArray<FRotator,FDefaultAllocator>::ResizeGrow(&DAT_146ac4710,iVar3);
            }
            pvVar2 = DAT_146ac4710;
            *(undefined8 *)((longlong)DAT_146ac4710 + lVar10 * 0xc) = *(undefined8 *)(lVar4 + lVar8)
            ;
            puVar1 = (undefined4 *)(lVar4 + 8 + lVar8);
            lVar8 = lVar8 + 0x28;
            *(undefined4 *)((longlong)pvVar2 + lVar10 * 0xc + 8) = *puVar1;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        uVar6 = FUN_141f07ca0(param_1,&DAT_146ac4710,0,param_2);
      }
    }
  }
  return uVar6;
}



// FUNCTION 141f07660 FUN_141f07660 body=1597 status=ok
// SIG undefined FUN_141f07660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f07660(longlong *param_1,char param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  uint *puVar15;
  char cVar16;
  uint uVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_178 [32];
  char local_158;
  undefined4 local_157;
  int local_150 [2];
  int local_148;
  uint uStack_144;
  uint *puStack_140;
  undefined4 local_138;
  int iStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  undefined8 uStack_120;
  uint *local_118;
  uint uStack_110;
  int iStack_10c;
  int local_108;
  undefined4 uStack_104;
  longlong *local_100;
  int local_f8;
  undefined1 local_f4 [4];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  LARGE_INTEGER local_e8;
  longlong local_e0;
  LARGE_INTEGER local_d8;
  longlong *local_d0;
  undefined8 uStack_c8;
  uint *puStack_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0xffffffff;
  local_158 = param_2;
  QueryPerformanceCounter(&local_e8);
  local_128 = param_1 + 0xa2;
  puStack_140 = (uint *)(param_1 + 0xa4);
  iVar14 = (int)param_1[0xa7];
  iStack_134 = 0;
  iStack_130 = 0;
  uStack_144 = 1;
  uVar17 = DAT_1464aaa8c - *DAT_146ac44f0 * DAT_1464ce010;
  dVar5 = ((double)local_e8.QuadPart * DAT_1468b02f8 + 16777216.0) - (double)*DAT_146ac4520;
  local_148 = 0;
  if (iVar14 != 0) {
    puVar15 = (uint *)param_1[0xa6];
    if ((uint *)param_1[0xa6] == (uint *)0x0) {
      puVar15 = puStack_140;
    }
    uVar2 = *puVar15;
    iStack_130 = 0;
    while (uVar2 == 0) {
      lVar11 = (longlong)local_148;
      iStack_130 = iStack_130 + 0x20;
      iVar10 = local_148 + 1;
      bVar19 = (int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_148;
      local_148 = iVar10;
      if (bVar19) goto LAB_141f077d7;
      uVar2 = puVar15[lVar11 + 1];
    }
    uStack_144 = -uVar2 & uVar2;
    local_f8 = 0x1f;
    if (uStack_144 != 0) {
      for (; uStack_144 >> local_f8 == 0; local_f8 = local_f8 + -1) {
      }
    }
    if (uStack_144 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - local_f8;
    }
    iStack_134 = (iStack_130 - iVar10) + 0x1f;
    if (iVar14 < iStack_134) {
LAB_141f077d7:
      iStack_134 = iVar14;
    }
  }
  local_138 = 0xffffffff;
  uStack_120 = CONCAT44(uStack_144,local_148);
  uStack_b8 = 0xffffffff;
  iStack_b4 = iStack_134;
  iStack_b0 = iStack_130;
  uStack_ac = uStack_12c;
  uStack_110 = 0xffffffff;
  iStack_10c = iStack_134;
  local_108 = iStack_130;
  uStack_104 = uStack_12c;
  local_118 = puStack_140;
  local_100 = local_128;
  local_d0 = local_128;
  uStack_c8 = uStack_120;
  puStack_c0 = puStack_140;
  if (iStack_134 < iVar14) {
    do {
      plVar1 = local_100;
      iVar14 = iStack_10c;
      lVar12 = (longlong)iStack_10c * 0x50 + *local_128;
      lVar11 = FWeakObjectPtr::Get(lVar12 + 0x28);
      local_e0 = lVar11;
      if ((*(char *)(lVar12 + 0x40) != '\0') ||
         ((((lVar8 = FWeakObjectPtr::Get(lVar12), lVar8 != 0 &&
            (lVar8 = FWeakObjectPtr::Get(lVar12 + 8), lVar8 != 0)) && (lVar11 != 0)) &&
          ((uVar17 <= *(uint *)(lVar12 + 0x30) ||
           (dVar5 < *(double *)(lVar12 + 0x38) || dVar5 == *(double *)(lVar12 + 0x38))))))) {
        if (lVar11 != 0) {
          if (((int)local_a0 == local_74) &&
             (0 < (int)param_1[0xa3] - *(int *)((longlong)param_1 + 0x544))) {
            FUN_1405effc0(&local_a8);
          }
          FUN_14058c900(&local_a8,local_f4,&local_e0,0);
        }
      }
      else {
        TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
        ::Remove(plVar1,iVar14);
      }
      uStack_110 = uStack_110 & ~uStack_120._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_120);
    } while (iStack_10c < (int)local_118[6]);
  }
  uVar13 = 0;
  if (((int)local_a0 - local_74 < (int)param_1[0xa1]) && (0 < (int)param_1[0xa1])) {
    plVar1 = param_1 + 0xa0;
    uVar18 = uVar13;
    do {
      iVar14 = (int)uVar18;
      plVar3 = *(longlong **)(uVar13 + *plVar1);
      piVar9 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                (&local_a8,local_f0,plVar3);
      if (*piVar9 == -1) {
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x9a0))(plVar3);
          local_157 = 0;
          (**(code **)(*plVar3 + 0x418))(plVar3,&local_157);
          (**(code **)(*plVar3 + 0x3b0))(plVar3,0);
        }
        iVar10 = (int)param_1[0xa1];
        iVar7 = (iVar10 - iVar14) + -1;
        if (0 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar14 * 8),
                     (void *)(*plVar1 + (longlong)(iVar10 - iVar7) * 8),(longlong)iVar7 << 3);
          iVar10 = (int)param_1[0xa1];
        }
        *(int *)(param_1 + 0xa1) = iVar10 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        iVar14 = iVar14 + -1;
        uVar13 = uVar13 - 8;
        if (param_2 == '\0') break;
      }
      uVar18 = (ulonglong)(iVar14 + 1U);
      uVar13 = uVar13 + 8;
    } while ((int)(iVar14 + 1U) < (int)param_1[0xa1]);
  }
  uVar13 = 0;
  if (0 < (int)param_1[0xad]) {
    plVar1 = param_1 + 0xac;
    uVar18 = uVar13;
    cVar16 = local_158;
    do {
      iVar14 = (int)uVar13;
      plVar3 = *(longlong **)(uVar18 + *plVar1);
      if (cVar16 != '\0') {
        plVar4 = (longlong *)plVar3[10];
        if (plVar4 == (longlong *)0x0) {
          LOCK();
          bVar19 = (int)plVar3[8] == 0;
          if (bVar19) {
            *(int *)(plVar3 + 8) = 0;
          }
          UNLOCK();
          if (!bVar19) {
            FUN_141efed90(plVar3[1]);
            LOCK();
            *(int *)(plVar3 + 8) = (int)plVar3[8] + -1;
            UNLOCK();
          }
code_r0x000141f07a6b:
          if (plVar3[10] == 0) goto LAB_141f07a88;
          (**(code **)(*(longlong *)plVar3[9] + 0x20))((longlong *)plVar3[9],0xffffffff,0);
        }
        else {
          cVar6 = (**(code **)(*plVar4 + 0x18))(plVar4,plVar3);
          if (cVar6 == '\0') goto code_r0x000141f07a6b;
          FUN_141efed90(plVar3[1]);
          LOCK();
          *(int *)(plVar3 + 8) = (int)plVar3[8] + -1;
          UNLOCK();
          if ((longlong *)plVar3[9] != (longlong *)0x0) {
            (**(code **)(*(longlong *)plVar3[9] + 0x10))();
          }
        }
        plVar3[10] = 0;
      }
LAB_141f07a88:
      LOCK();
      bVar19 = (int)plVar3[8] == 0;
      if (bVar19) {
        *(int *)(plVar3 + 8) = 0;
      }
      UNLOCK();
      if (bVar19) {
        if (plVar3[10] != 0) {
          (**(code **)(*(longlong *)plVar3[9] + 0x20))((longlong *)plVar3[9],0xffffffff,0);
          plVar3[10] = 0;
        }
        iVar10 = (int)param_1[0xad];
        iVar7 = (iVar10 - iVar14) + -1;
        if (0 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar14 * 8),
                     (void *)(*plVar1 + (longlong)(iVar10 - iVar7) * 8),(longlong)iVar7 << 3);
          iVar10 = (int)param_1[0xad];
        }
        *(int *)(param_1 + 0xad) = iVar10 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        iVar14 = iVar14 + -1;
        uVar18 = uVar18 - 8;
        lVar11 = FWeakObjectPtr::Get(plVar3 + 7);
        if ((lVar11 != 0) &&
           (piVar9 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                      (&local_a8,local_ec,lVar11), *piVar9 != -1)) {
          lVar12 = plVar3[1];
          iVar10 = *(int *)(lVar12 + 0x1e8);
          cVar16 = local_158;
          if (0 < iVar10) {
            if (*(longlong *)(lVar11 + 0x7e8) == 0) {
              FUN_1424fbbf0(lVar11,CONCAT71((int7)((ulonglong)(lVar12 + 0x1b8) >> 8),1),
                            lVar12 + 0x1b8,*(undefined1 *)(lVar12 + 0x1b4));
            }
            else {
              FUN_14250b800();
            }
            FUN_1424b82e0(lVar11,plVar3[1] + 0x1f0,*(undefined4 *)(plVar3[1] + 0x200),iVar10);
            cVar16 = local_158;
            if ((local_158 != '\0') &&
               (lVar12 = (**(code **)(*param_1 + 0x148))(param_1), lVar12 != 0)) {
              FUN_14234b090(lVar11);
            }
          }
        }
        TSet<FCachedLandscapeFoliage::FGrassComp,FCachedLandscapeFoliage::FGrassCompKeyFuncs,FDefaultSetAllocator>
        ::FindId(param_1 + 0xa2,local_150);
        if ((local_150[0] != -1) &&
           (lVar11 = (longlong)local_150[0] * 0x50 + param_1[0xa2], lVar11 != 0)) {
          *(undefined1 *)(lVar11 + 0x40) = 0;
          *(int *)(lVar11 + 0x30) = DAT_1464aaa8c;
          QueryPerformanceCounter(&local_d8);
          *(double *)(lVar11 + 0x38) = (double)local_d8.QuadPart * DAT_1468b02f8 + 16777216.0;
        }
        (**(code **)(*plVar3 + 0x10))(plVar3,1);
        if (cVar16 == '\0') break;
      }
      uVar13 = (ulonglong)(iVar14 + 1U);
      uVar18 = uVar18 + 8;
    } while ((int)(iVar14 + 1U) < (int)param_1[0xad]);
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_a8);
  return;
}



// FUNCTION 141f07ca0 FUN_141f07ca0 body=2569 status=ok
// SIG undefined FUN_141f07ca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f07ca0(longlong *param_1,void **param_2,undefined1 param_3,longlong param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  void *_Src;
  void **ppvVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 uVar14;
  void **ppvVar15;
  void **ppvVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  longlong *plVar20;
  longlong *plVar21;
  int iVar22;
  longlong **pplVar23;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  void **local_1e0;
  longlong local_1d0;
  longlong *local_1c8;
  void *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  void *local_188;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  longlong local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  int local_154;
  undefined4 local_150;
  undefined1 local_14c;
  undefined1 local_14b;
  undefined1 local_14a;
  undefined1 local_149;
  longlong local_148;
  longlong *local_140 [2];
  longlong local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118 [2];
  undefined4 local_108;
  undefined4 local_104;
  longlong local_100 [2];
  longlong local_f0;
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  longlong local_88 [4];
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  lVar8 = DAT_146ac45b0;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_1e8 = param_3;
  local_1e0 = param_2;
  local_1c8 = param_1;
  local_148 = param_4;
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  plVar12 = (longlong *)0x0;
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    plVar13 = (longlong *)0x1;
    if (DVar7 == DAT_1468c21c0) goto LAB_141f07d18;
  }
  else {
LAB_141f07d18:
    plVar13 = plVar12;
  }
  if ((*(int *)(lVar8 + (longlong)plVar13 * 4) < 1) ||
     (lVar8 = (**(code **)(*param_1 + 0x148))(param_1), local_1d0 = lVar8, lVar8 == 0))
  goto LAB_141f0861c;
  local_1c0 = (void *)0x0;
  local_1b8 = 0;
  iVar22 = 0;
  if ((longlong *)param_1[0x97] != (longlong *)0x0) {
    local_1a8 = (longlong *)0x0;
    local_1a0 = 0;
    lVar9 = (**(code **)(*(longlong *)param_1[0x97] + 0x290))();
    param_2 = local_1e0;
    param_1 = local_1c8;
    iVar22 = 0;
    if (0 < *(int *)(lVar9 + 0x748)) {
      plVar13 = plVar12;
      plVar20 = plVar12;
      plVar21 = plVar12;
      iVar22 = local_1a0._4_4_;
      do {
        lVar8 = *(longlong *)((longlong)plVar20 + *(longlong *)(lVar9 + 0x740));
        if (lVar8 != 0) {
          lVar10 = UMaterialExpressionLandscapeGrassOutput::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            iVar17 = (int)plVar13;
            uVar18 = iVar17 + 1;
            local_1a0 = CONCAT44(local_1a0._4_4_,uVar18);
            if (iVar22 < (int)uVar18) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1a8,plVar13);
              iVar22 = local_1a0._4_4_;
              uVar18 = (uint)local_1a0;
            }
            plVar13 = (longlong *)(ulonglong)uVar18;
            local_1a8[iVar17] = lVar8;
            plVar12 = local_1a8;
          }
        }
        uVar18 = (int)plVar21 + 1;
        plVar21 = (longlong *)(ulonglong)uVar18;
        plVar20 = plVar20 + 1;
      } while ((int)uVar18 < *(int *)(lVar9 + 0x748));
      iVar22 = (int)local_1b8;
      if (0 < (int)plVar13) {
        lVar8 = *(longlong *)(*plVar12 + 0x40);
        lVar9 = (longlong)*(int *)(*plVar12 + 0x48) * 0x40 + lVar8;
        if (lVar8 != lVar9) {
          iVar17 = (int)local_1b8;
          iVar19 = local_1b8._4_4_;
          do {
            iVar22 = iVar17 + 1;
            local_1b8 = CONCAT44(local_1b8._4_4_,iVar22);
            if (iVar19 < iVar22) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1c0,iVar17);
              iVar22 = (int)local_1b8;
              iVar19 = local_1b8._4_4_;
            }
            puVar1 = (undefined8 *)(lVar8 + 8);
            lVar8 = lVar8 + 0x40;
            *(undefined8 *)((longlong)local_1c0 + (longlong)iVar17 * 8) = *puVar1;
            iVar17 = iVar22;
          } while (lVar8 != lVar9);
        }
      }
      param_2 = local_1e0;
      lVar8 = local_1d0;
      param_1 = local_1c8;
      if (local_1a8 != (longlong *)0x0) {
        FMemory::Free();
        param_2 = local_1e0;
        lVar8 = local_1d0;
        param_1 = local_1c8;
      }
    }
  }
  lVar9 = DAT_146ac44c0;
  lVar10 = 0;
  local_188 = (void *)0x0;
  local_180 = 0;
  local_178 = (void *)0x0;
  local_170 = 0;
  local_168 = 0;
  local_149 = 0;
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    lVar11 = 1;
    if (DVar7 == DAT_1468c21c0) goto LAB_141f07f25;
  }
  else {
LAB_141f07f25:
    lVar11 = lVar10;
  }
  lVar5 = DAT_146ac44d8;
  local_160 = *(undefined4 *)(lVar9 + lVar11 * 4);
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    lVar9 = 1;
    if (DVar7 == DAT_1468c21c0) goto LAB_141f07f69;
  }
  else {
LAB_141f07f69:
    lVar9 = lVar10;
  }
  lVar11 = DAT_146ac45f8;
  local_15c = *(undefined4 *)(lVar5 + lVar9 * 4);
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    lVar9 = 1;
    if (DVar7 == DAT_1468c21c0) goto LAB_141f07fad;
  }
  else {
LAB_141f07fad:
    lVar9 = lVar10;
  }
  lVar5 = DAT_146ac4610;
  local_14c = 0 < *(int *)(lVar11 + lVar9 * 4);
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    lVar9 = 1;
    if (DVar7 == DAT_1468c21c0) goto LAB_141f07fef;
  }
  else {
LAB_141f07fef:
    lVar9 = lVar10;
  }
  lVar11 = DAT_146ac4640;
  local_14b = 0 < *(int *)(lVar5 + lVar9 * 4);
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    lVar9 = 1;
    if (DVar7 == DAT_1468c21c0) goto LAB_141f08031;
  }
  else {
LAB_141f08031:
    lVar9 = lVar10;
  }
  lVar5 = DAT_146ac4538;
  local_14a = 0 < *(int *)(lVar11 + lVar9 * 4);
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    lVar9 = 1;
    if (DVar7 == DAT_1468c21c0) goto LAB_141f08073;
  }
  else {
LAB_141f08073:
    lVar9 = lVar10;
  }
  lVar11 = DAT_146ac4550;
  local_154 = *(int *)(lVar5 + lVar9 * 4);
  if (local_154 < 0x401) {
    local_154 = 0x400;
  }
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    lVar9 = 1;
    if (DVar7 == DAT_1468c21c0) goto LAB_141f080bd;
  }
  else {
LAB_141f080bd:
    lVar9 = lVar10;
  }
  lVar5 = DAT_146ac4598;
  local_150 = *(undefined4 *)(lVar11 + lVar9 * 4);
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    lVar9 = 1;
    if (DVar7 == DAT_1468c21c0) goto LAB_141f080fd;
  }
  else {
LAB_141f080fd:
    lVar9 = lVar10;
  }
  local_158 = *(undefined4 *)(lVar5 + lVar9 * 4);
  iVar17 = 0;
  if (&local_188 != param_2) {
    iVar19 = *(int *)(param_2 + 1);
    _Src = *param_2;
    local_180 = CONCAT44(local_180._4_4_,iVar19);
    iVar17 = 0;
    if (iVar19 != 0) {
      TArray<FVector,FDefaultAllocator>::ResizeForCopy(&local_188,iVar19,0);
      _guard_xfg_dispatch_icall_nop(local_188,_Src,(longlong)iVar19 * 0xc);
      iVar17 = local_170._4_4_;
    }
  }
  local_170 = CONCAT44(local_170._4_4_,iVar22);
  if ((iVar22 == 0) && (iVar17 == 0)) {
    local_170 = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_178,iVar22,iVar17);
    _guard_xfg_dispatch_icall_nop(local_178,local_1c0,(longlong)iVar22 << 3);
  }
  lVar9 = DAT_146ac4658;
  local_149 = local_1e8;
  local_168 = lVar8;
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    lVar8 = 1;
    if (DVar7 == DAT_1468c21c0) goto LAB_141f081c1;
  }
  else {
LAB_141f081c1:
    lVar8 = lVar10;
  }
  if ((*(int *)(lVar9 + lVar8 * 4) < 1) || (local_148 == 0)) {
    FUN_141f036c0(param_1,&local_120,&local_188);
    FUN_141f01930(param_1,local_120);
    if (local_120 != (longlong *)0x0) {
      if (local_120[8] != 0) {
        FMemory::Free();
      }
      if (local_120[2] != 0) {
        FMemory::Free();
      }
      if (*local_120 != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(local_120,0x50);
    }
  }
  else {
    FWeakObjectPtr::operator=(&local_198,param_1);
    local_108 = local_198;
    local_104 = uStack_194;
    FUN_141efca60(local_100,&local_188);
    local_1b0 = CONCAT44(uStack_194,local_198);
    plVar12 = (longlong *)FMemory::Realloc(0,0x60);
    local_118[0] = plVar12;
    if (plVar12 != (longlong *)0x0) {
      *plVar12 = (longlong)&PTR_GetPoolName_144eee530;
      *(undefined4 *)(plVar12 + 1) = local_108;
      *(undefined4 *)((longlong)plVar12 + 0xc) = local_104;
      FUN_141efca60(plVar12 + 2,local_100);
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar12[0xb] = lVar8;
      *plVar12 = (longlong)&PTR_GetPoolName_144eee578;
    }
    plVar13 = (longlong *)FUN_140960ab0(local_b8,0,0xff);
    lVar8 = *plVar13;
    pplVar23 = (longlong **)(lVar8 + 0x10);
    *pplVar23 = (longlong *)0x0;
    *(undefined4 *)(lVar8 + 0x18) = 0;
    if ((local_118 != pplVar23) && (plVar12 != (longlong *)0x0)) {
      (**(code **)(*plVar12 + 0x30))(plVar12,pplVar23);
    }
    *(undefined4 *)(lVar8 + 0x20) = 0xff;
    lVar8 = *plVar13;
    lVar10 = plVar13[2];
    lVar9 = plVar13[1];
    local_1d0 = *(longlong *)(lVar8 + 0x30);
    uVar14 = CONCAT44(uStack_194,local_198);
    if (local_1d0 != 0) {
      LOCK();
      *(int *)(local_1d0 + 0x48) = *(int *)(local_1d0 + 0x48) + 1;
      UNLOCK();
      uVar14 = local_1b0;
      plVar12 = local_118[0];
    }
    FUN_1409691d0(lVar8,lVar9,(int)lVar10,1);
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x28))(plVar12,0);
      local_118[0] = (longlong *)FMemory::Realloc(plVar12,0,0);
      if (local_118[0] != (longlong *)0x0) {
        FMemory::Free(local_118[0]);
      }
    }
    plVar12 = (longlong *)FMemory::Realloc(0,0x20);
    local_140[0] = plVar12;
    if (plVar12 != (longlong *)0x0) {
      *plVar12 = (longlong)&PTR_GetPoolName_144eee5c0;
      *(int *)(plVar12 + 1) = (int)uVar14;
      *(undefined4 *)((longlong)plVar12 + 0xc) = local_1b0._4_4_;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar12[3] = lVar8;
      *plVar12 = (longlong)&PTR_GetPoolName_144eee608;
    }
    local_68 = (longlong *)0x0;
    local_60 = 1;
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_88,0)
    ;
    plVar13 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar13 = local_68;
    }
    *plVar13 = local_1d0;
    if (local_1d0 != 0) {
      LOCK();
      *(int *)(local_1d0 + 0x48) = *(int *)(local_1d0 + 0x48) + 1;
      UNLOCK();
      plVar12 = local_140[0];
    }
    plVar13 = (longlong *)FUN_140960ab0(local_a0,local_88,2);
    lVar8 = *plVar13;
    pplVar23 = (longlong **)(lVar8 + 0x10);
    *pplVar23 = (longlong *)0x0;
    *(undefined4 *)(lVar8 + 0x18) = 0;
    if ((local_140 != pplVar23) && (plVar12 != (longlong *)0x0)) {
      (**(code **)(*plVar12 + 0x30))(plVar12,pplVar23);
    }
    *(undefined4 *)(lVar8 + 0x20) = 2;
    lVar8 = *plVar13;
    lVar10 = plVar13[2];
    lVar9 = plVar13[1];
    ppvVar3 = *(void ***)(lVar8 + 0x30);
    if (ppvVar3 != (void **)0x0) {
      LOCK();
      *(int *)(ppvVar3 + 9) = *(int *)(ppvVar3 + 9) + 1;
      UNLOCK();
      plVar12 = local_140[0];
    }
    local_1e0 = ppvVar3;
    FUN_1409691d0(lVar8,lVar9,(int)lVar10,1);
    ppvVar16 = ppvVar3;
    plVar13 = local_88;
    iVar22 = (int)local_60;
    if (local_68 != (longlong *)0x0) {
      plVar13 = local_68;
    }
    for (; iVar22 != 0; iVar22 = iVar22 + -1) {
      if (*plVar13 != 0) {
        LOCK();
        piVar2 = (int *)(*plVar13 + 0x48);
        iVar17 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          FGraphEvent::Recycle();
        }
      }
      ppvVar16 = local_1e0;
      plVar12 = local_140[0];
      plVar13 = plVar13 + 1;
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x28))(plVar12,0);
      local_140[0] = (longlong *)FMemory::Realloc(plVar12,0,0);
      if (local_140[0] != (longlong *)0x0) {
        FMemory::Free(local_140[0]);
      }
    }
    lVar8 = local_148;
    plVar12 = (longlong *)FTickFunction::GetCompletionHandle(local_148,&local_130);
    *(undefined4 *)(*plVar12 + 0x4c) = 2;
    if (local_130 != 0) {
      LOCK();
      piVar2 = (int *)(local_130 + 0x48);
      iVar22 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      ppvVar16 = local_1e0;
      if (iVar22 == 1) {
        FGraphEvent::Recycle();
        ppvVar16 = local_1e0;
      }
    }
    ppvVar3 = ppvVar3 + 9;
    ppvVar15 = (void **)0x0;
    if (ppvVar16 != (void **)0x0) {
      LOCK();
      *(int *)ppvVar3 = *(int *)ppvVar3 + 1;
      UNLOCK();
      ppvVar15 = local_1e0;
    }
    plVar12 = (longlong *)FTickFunction::GetCompletionHandle(lVar8,&local_128);
    lVar8 = *plVar12;
    iVar22 = *(int *)(lVar8 + 0x40);
    *(int *)(lVar8 + 0x40) = iVar22 + 1;
    if (*(int *)(lVar8 + 0x44) < iVar22 + 1) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (lVar8 + 0x18,iVar22);
    }
    lVar9 = *(longlong *)(lVar8 + 0x38);
    if (*(longlong *)(lVar8 + 0x38) == 0) {
      lVar9 = lVar8 + 0x18;
    }
    puVar1 = (undefined8 *)(lVar9 + (longlong)iVar22 * 8);
    if (puVar1 == (undefined8 *)0x0) {
LAB_141f0853f:
      ppvVar16 = (void **)0x0;
      if (ppvVar15 != (void **)0x0) {
        LOCK();
        iVar22 = *(int *)ppvVar3;
        *(int *)ppvVar3 = *(int *)ppvVar3 + -1;
        UNLOCK();
        ppvVar16 = local_1e0;
        if (iVar22 == 1) {
          FGraphEvent::Recycle(local_1e0);
        }
      }
    }
    else {
      *puVar1 = ppvVar15;
      ppvVar16 = (void **)0x0;
      if (ppvVar15 != (void **)0x0) {
        LOCK();
        *(int *)(ppvVar15 + 9) = *(int *)(ppvVar15 + 9) + 1;
        UNLOCK();
        ppvVar15 = local_1e0;
        goto LAB_141f0853f;
      }
    }
    if (local_128 != 0) {
      LOCK();
      piVar2 = (int *)(local_128 + 0x48);
      iVar22 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      ppvVar16 = local_1e0;
      if (iVar22 == 1) {
        FGraphEvent::Recycle();
        ppvVar16 = local_1e0;
      }
    }
    if (ppvVar16 != (void **)0x0) {
      LOCK();
      iVar22 = *(int *)ppvVar3;
      *(int *)ppvVar3 = *(int *)ppvVar3 + -1;
      UNLOCK();
      if (iVar22 == 1) {
        FGraphEvent::Recycle(local_1e0);
      }
    }
    if (local_1d0 != 0) {
      LOCK();
      piVar2 = (int *)(local_1d0 + 0x48);
      iVar22 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar22 == 1) {
        FGraphEvent::Recycle(local_1d0);
      }
    }
    if (local_f0 != 0) {
      FMemory::Free();
    }
    param_1 = local_1c8;
    if (local_100[0] != 0) {
      FMemory::Free();
      param_1 = local_1c8;
    }
  }
  if (local_178 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_188 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_1c0 != (void *)0x0) {
    FMemory::Free();
  }
LAB_141f0861c:
  FUN_141f07660(param_1,local_1e8);
  return;
}



// FUNCTION 141f086b0 FUN_141f086b0 body=515 status=ok
// SIG undefined FUN_141f086b0(void)

void FUN_141f086b0(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong **pplVar4;
  undefined1 local_res10 [24];
  longlong *local_18;
  int local_10;
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143fca720;
    plVar2[1] = (longlong)FUN_141ef8720;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143fca768;
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(&DAT_146533dc8,local_res10,&local_18);
    plVar2 = local_18;
    if (local_10 != 0) {
      if (local_18 == (longlong *)0x0) goto LAB_141f08758;
      (**(code **)(*local_18 + 0x28))(local_18,0);
      plVar2 = (longlong *)FMemory::Realloc(plVar2,0,0);
    }
    if (plVar2 != (longlong *)0x0) {
      FMemory::Free(plVar2);
    }
  }
LAB_141f08758:
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_144ef9bc0;
    plVar2[1] = (longlong)FUN_141ef8670;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
  }
  iVar1 = DAT_146afe3d8;
  lVar3 = (longlong)DAT_146afe3d8;
  DAT_146afe3d8 = DAT_146afe3d8 + 1;
  if (DAT_146afe3dc < DAT_146afe3d8) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146afe3d0,iVar1);
  }
  pplVar4 = (longlong **)(lVar3 * 0x10 + DAT_146afe3d0);
  *pplVar4 = (longlong *)0x0;
  *(undefined4 *)(pplVar4 + 1) = 0;
  if (&local_18 != pplVar4) {
    if (plVar2 == (longlong *)0x0) goto LAB_141f0880a;
    (**(code **)(*plVar2 + 0x30))(plVar2);
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
LAB_141f0880a:
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_144eefb28;
    plVar2[1] = (longlong)FUN_141f1d920;
    local_18 = plVar2;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_144eefb70;
    FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(&DAT_146535778,local_res10,&local_18);
    plVar2 = local_18;
    if (local_10 != 0) {
      if (local_18 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_18 + 0x28))(local_18,0);
      plVar2 = (longlong *)FMemory::Realloc(plVar2,0,0);
    }
    if (plVar2 != (longlong *)0x0) {
      FMemory::Free(plVar2);
    }
  }
  return;
}



// FUNCTION 141f088c0 operator_new<FStreamingTexturePrimitiveInfo,FDefaultAllocator> body=60 status=ok
// SIG undefined operator_new<FStreamingTexturePrimitiveInfo,FDefaultAllocator>(void)

longlong operator_new<FStreamingTexturePrimitiveInfo,FDefaultAllocator>
                   (undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  return (longlong)iVar1 * 0x30 + *param_2;
}



// FUNCTION 141f08900 operator<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>_>_TTuple<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>_> body=272 status=ok
// SIG undefined operator<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>_>_TTuple<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
TKeyInitializer<FLandscapeNeighborInfo::FLandscapeKey_const_&>::
operator<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>_>_TTuple<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>_>
          (longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  puVar1 = (undefined4 *)*param_1;
  local_68 = 0;
  uStack_60 = 0;
  local_40 = 0;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  local_30 = 0;
  local_78 = 0;
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  local_70 = 0;
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar1 + 4);
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x12] = 0xffffffff;
  param_2[0x13] = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  param_2[0x18] = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 6,&local_78);
  lVar5 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 0x14,&local_40,4);
  }
  if (*(longlong *)(param_2 + 0x16) != 0) {
    FMemory::Free();
  }
  *(longlong *)(param_2 + 0x16) = lVar5;
  param_2[0x18] = (undefined4)local_30;
  local_38 = 0;
  local_30 = local_30 & 0xffffffff00000000;
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  return param_2;
}



// FUNCTION 141f08a10 FUN_141f08a10 body=200 status=ok
// SIG undefined FUN_141f08a10(void)

ulonglong FUN_141f08a10(longlong *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined8 *puVar3;
  int *piVar4;
  ulonglong uVar5;
  
  piVar2 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (piVar2 != piVar2 + (longlong)(int)uVar1 * 4) {
    piVar4 = piVar2;
    do {
      if ((((*piVar4 == *param_2) && (piVar4[1] == param_2[1])) &&
          (*(char *)((longlong)piVar4 + 0xb) == *(char *)((longlong)param_2 + 0xb))) &&
         (piVar4[3] == param_2[3])) {
        uVar5 = (longlong)piVar4 - (longlong)piVar2 >> 4;
        if ((int)uVar5 != -1) {
          return uVar5 & 0xffffffff;
        }
        break;
      }
      piVar4 = piVar4 + 4;
    } while (piVar4 != piVar2 + (longlong)(int)uVar1 * 4);
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar1 + 1)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,uVar1);
  }
  puVar3 = (undefined8 *)(*param_1 + (longlong)(int)uVar1 * 0x10);
  *puVar3 = *(undefined8 *)param_2;
  *(short *)(puVar3 + 1) = (short)param_2[2];
  *(undefined1 *)((longlong)puVar3 + 10) = *(undefined1 *)((longlong)param_2 + 10);
  *(undefined1 *)((longlong)puVar3 + 0xb) = *(undefined1 *)((longlong)param_2 + 0xb);
  *(int *)((longlong)puVar3 + 0xc) = param_2[3];
  return (ulonglong)uVar1;
}



// FUNCTION 141f08ae0 BuildLandscapeAdjacencyIndexBuffer<unsigned_short> body=649 status=ok
// SIG undefined BuildLandscapeAdjacencyIndexBuffer<unsigned_short>(void)

void BuildLandscapeAdjacencyIndexBuffer<unsigned_short>
               (int param_1,int param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int local_res18;
  int local_48;
  ulonglong local_40;
  
  if ((param_3 == (longlong *)0x0) || (iVar4 = (**(code **)(*param_3 + 0x50))(param_3), iVar4 == 0))
  {
    *(undefined4 *)(param_4 + 1) = 0;
    if (*(int *)((longlong)param_4 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,0);
      return;
    }
  }
  else {
    iVar4 = *(int *)((longlong)param_4 + 0xc);
    iVar8 = 0;
    *(undefined4 *)(param_4 + 1) = 0;
    uVar2 = param_1 * param_1 * 2;
    iVar7 = uVar2 * param_2 * param_2 * 0xc;
    if (iVar4 != iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4,iVar7);
      iVar8 = (int)param_4[1];
      iVar4 = *(int *)((longlong)param_4 + 0xc);
    }
    *(int *)(param_4 + 1) = iVar8 + iVar7;
    if (iVar4 < iVar8 + iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4);
    }
    local_48 = 0;
    if (0 < param_2) {
      do {
        local_res18 = 0;
        do {
          uVar5 = (local_48 * param_2 + local_res18) * uVar2;
          if (uVar5 < uVar5 + uVar2) {
            iVar4 = uVar5 * 3 + 2;
            iVar8 = uVar5 * 0xc;
            local_40 = (ulonglong)uVar2;
            do {
              lVar1 = *param_4;
              lVar6 = (longlong)iVar8;
              uVar3 = (**(code **)(*param_3 + 0x60))(param_3,iVar4 + -2);
              *(undefined2 *)(lVar1 + lVar6 * 2) = uVar3;
              lVar1 = *param_4;
              uVar3 = (**(code **)(*param_3 + 0x60))(param_3,iVar4 + -1);
              *(undefined2 *)(lVar1 + 2 + lVar6 * 2) = uVar3;
              lVar1 = *param_4;
              uVar3 = (**(code **)(*param_3 + 0x60))(param_3,iVar4);
              *(undefined2 *)(lVar1 + 4 + lVar6 * 2) = uVar3;
              lVar1 = *param_4;
              uVar3 = (**(code **)(*param_3 + 0x60))(param_3,iVar4 + -2);
              *(undefined2 *)(lVar1 + 6 + lVar6 * 2) = uVar3;
              lVar1 = *param_4;
              uVar3 = (**(code **)(*param_3 + 0x60))(param_3,iVar4 + -1);
              *(undefined2 *)(lVar1 + 8 + lVar6 * 2) = uVar3;
              lVar1 = *param_4;
              uVar3 = (**(code **)(*param_3 + 0x60))(param_3,iVar4 + -1);
              *(undefined2 *)(lVar1 + 10 + lVar6 * 2) = uVar3;
              lVar1 = *param_4;
              uVar3 = (**(code **)(*param_3 + 0x60))(param_3,iVar4);
              *(undefined2 *)(lVar1 + 0xc + lVar6 * 2) = uVar3;
              lVar1 = *param_4;
              uVar3 = (**(code **)(*param_3 + 0x60))(param_3,iVar4);
              *(undefined2 *)(lVar1 + 0xe + lVar6 * 2) = uVar3;
              lVar1 = *param_4;
              uVar3 = (**(code **)(*param_3 + 0x60))(param_3,iVar4 + -2);
              *(undefined2 *)(lVar1 + 0x10 + lVar6 * 2) = uVar3;
              lVar1 = *param_4;
              uVar3 = (**(code **)(*param_3 + 0x60))(param_3,iVar4 + -2);
              *(undefined2 *)(lVar1 + 0x12 + lVar6 * 2) = uVar3;
              lVar1 = *param_4;
              uVar3 = (**(code **)(*param_3 + 0x60))(param_3,iVar4 + -1);
              *(undefined2 *)(lVar1 + 0x14 + lVar6 * 2) = uVar3;
              lVar1 = *param_4;
              uVar3 = (**(code **)(*param_3 + 0x60))(param_3,iVar4);
              iVar4 = iVar4 + 3;
              iVar8 = iVar8 + 0xc;
              *(undefined2 *)(lVar1 + 0x16 + lVar6 * 2) = uVar3;
              local_40 = local_40 - 1;
            } while (local_40 != 0);
          }
          local_res18 = local_res18 + 1;
        } while (local_res18 < param_2);
        local_48 = local_48 + 1;
      } while (local_48 < param_2);
    }
  }
  return;
}



// FUNCTION 141f08d70 BuildLandscapeAdjacencyIndexBuffer<unsigned_int> body=637 status=ok
// SIG undefined BuildLandscapeAdjacencyIndexBuffer<unsigned_int>(void)

void BuildLandscapeAdjacencyIndexBuffer<unsigned_int>
               (int param_1,int param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int local_res18;
  int local_48;
  ulonglong local_40;
  
  if ((param_3 == (longlong *)0x0) || (iVar3 = (**(code **)(*param_3 + 0x50))(param_3), iVar3 == 0))
  {
    *(undefined4 *)(param_4 + 1) = 0;
    if (*(int *)((longlong)param_4 + 0xc) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_4,0);
      return;
    }
  }
  else {
    iVar3 = *(int *)((longlong)param_4 + 0xc);
    iVar8 = 0;
    *(undefined4 *)(param_4 + 1) = 0;
    uVar2 = param_1 * param_1 * 2;
    iVar7 = uVar2 * param_2 * param_2 * 0xc;
    if (iVar3 != iVar7) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_4,iVar7);
      iVar8 = (int)param_4[1];
      iVar3 = *(int *)((longlong)param_4 + 0xc);
    }
    *(int *)(param_4 + 1) = iVar8 + iVar7;
    if (iVar3 < iVar8 + iVar7) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_4);
    }
    local_48 = 0;
    if (0 < param_2) {
      do {
        local_res18 = 0;
        do {
          uVar4 = (local_48 * param_2 + local_res18) * uVar2;
          if (uVar4 < uVar4 + uVar2) {
            iVar3 = uVar4 * 3 + 2;
            iVar8 = uVar4 * 0xc;
            local_40 = (ulonglong)uVar2;
            do {
              lVar1 = *param_4;
              lVar6 = (longlong)iVar8;
              uVar5 = (**(code **)(*param_3 + 0x60))(param_3,iVar3 + -2);
              *(undefined4 *)(lVar1 + lVar6 * 4) = uVar5;
              lVar1 = *param_4;
              uVar5 = (**(code **)(*param_3 + 0x60))(param_3,iVar3 + -1);
              *(undefined4 *)(lVar1 + 4 + lVar6 * 4) = uVar5;
              lVar1 = *param_4;
              uVar5 = (**(code **)(*param_3 + 0x60))(param_3,iVar3);
              *(undefined4 *)(lVar1 + 8 + lVar6 * 4) = uVar5;
              lVar1 = *param_4;
              uVar5 = (**(code **)(*param_3 + 0x60))(param_3,iVar3 + -2);
              *(undefined4 *)(lVar1 + 0xc + lVar6 * 4) = uVar5;
              lVar1 = *param_4;
              uVar5 = (**(code **)(*param_3 + 0x60))(param_3,iVar3 + -1);
              *(undefined4 *)(lVar1 + 0x10 + lVar6 * 4) = uVar5;
              lVar1 = *param_4;
              uVar5 = (**(code **)(*param_3 + 0x60))(param_3,iVar3 + -1);
              *(undefined4 *)(lVar1 + 0x14 + lVar6 * 4) = uVar5;
              lVar1 = *param_4;
              uVar5 = (**(code **)(*param_3 + 0x60))(param_3,iVar3);
              *(undefined4 *)(lVar1 + 0x18 + lVar6 * 4) = uVar5;
              lVar1 = *param_4;
              uVar5 = (**(code **)(*param_3 + 0x60))(param_3,iVar3);
              *(undefined4 *)(lVar1 + 0x1c + lVar6 * 4) = uVar5;
              lVar1 = *param_4;
              uVar5 = (**(code **)(*param_3 + 0x60))(param_3,iVar3 + -2);
              *(undefined4 *)(lVar1 + 0x20 + lVar6 * 4) = uVar5;
              lVar1 = *param_4;
              uVar5 = (**(code **)(*param_3 + 0x60))(param_3,iVar3 + -2);
              *(undefined4 *)(lVar1 + 0x24 + lVar6 * 4) = uVar5;
              lVar1 = *param_4;
              uVar5 = (**(code **)(*param_3 + 0x60))(param_3,iVar3 + -1);
              *(undefined4 *)(lVar1 + 0x28 + lVar6 * 4) = uVar5;
              lVar1 = *param_4;
              uVar5 = (**(code **)(*param_3 + 0x60))(param_3,iVar3);
              iVar3 = iVar3 + 3;
              iVar8 = iVar8 + 0xc;
              *(undefined4 *)(lVar1 + 0x2c + lVar6 * 4) = uVar5;
              local_40 = local_40 - 1;
            } while (local_40 != 0);
          }
          local_res18 = local_res18 + 1;
        } while (local_res18 < param_2);
        local_48 = local_48 + 1;
      } while (local_48 < param_2);
    }
  }
  return;
}



// FUNCTION 141f08ff0 FUN_141f08ff0 body=3494 status=ok
// SIG undefined FUN_141f08ff0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f08ff0(longlong param_1,int param_2,char param_3)

{
  ushort uVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  ushort *puVar6;
  longlong *plVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  ushort uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  ushort uVar16;
  ushort uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auStack_1f8 [32];
  ushort local_1d8;
  char local_1d6;
  ushort local_1d4 [2];
  ushort local_1d0 [4];
  longlong local_1c8;
  undefined8 local_1c0;
  ushort local_1b8 [2];
  ushort local_1b4 [2];
  longlong local_1b0;
  undefined8 local_1a8;
  uint local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  ulonglong local_178;
  ulonglong local_170;
  longlong local_168;
  longlong local_160;
  ulonglong local_158;
  int local_150;
  ulonglong local_148;
  ulonglong local_140;
  longlong local_138;
  void *local_130;
  undefined8 local_128;
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  ulonglong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  longlong local_f0;
  ulonglong *local_e8;
  ushort *local_e0;
  ulonglong *local_d8;
  ushort *local_d0;
  ulonglong *local_c8;
  ushort *local_c0;
  ulonglong *local_b8;
  ushort *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [8];
  undefined1 *local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_1d6 = param_3;
  local_180 = param_2;
  local_160 = param_1;
  if ((param_2 < 2) && (DAT_146ac4748 == '\0')) {
    DAT_146ac4748 = `anonymous_namespace'::ComputeVertexScores();
  }
  local_17c = *(int *)(param_1 + 0x1c) + -1;
  iVar14 = *(int *)(param_1 + 0x18) + -1;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  local_1d8 = 0;
  local_184 = iVar14;
  if (-1 < iVar14) {
    lVar20 = (longlong)iVar14;
    do {
      uVar16 = local_1d8;
      iVar12 = (*(int *)(param_1 + 0x1c) >> ((byte)iVar14 & 0x1f)) + -1;
      local_1c8 = 0;
      local_1c0 = 0;
      local_194 = iVar12;
      local_184 = iVar14;
      local_168 = lVar20;
      if (*(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x20) * iVar12 * iVar12 * 6 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1c8);
      }
      iVar19 = 0;
      lVar13 = *(longlong *)(param_1 + 0x40);
      *(undefined8 *)(lVar13 + 0x20 + lVar20 * 0x28) = 0x7fffffff;
      iVar3 = *(int *)(param_1 + 0x20);
      local_138 = lVar13;
      if (param_2 < 2) {
        local_1a0 = 0;
        fVar21 = (float)local_17c / (float)iVar12;
        if (0 < iVar3) {
          do {
            local_198 = 0;
            if (0 < iVar3) {
              local_108 = lVar20 * 5;
              local_100 = (longlong)(int)local_1a0;
              local_150 = iVar12 * iVar12 * 6;
              do {
                lVar20 = local_100;
                lVar13 = local_108;
                iVar14 = local_198;
                cVar8 = (char)local_1a0;
                local_1b0 = 0;
                local_1a8 = 0;
                if (local_150 != 0) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1b0,local_150);
                  cVar8 = (char)local_1a0;
                }
                lVar2 = *(longlong *)(param_1 + 0x40);
                lVar15 = lVar20 + ((longlong)iVar14 + 2 + lVar13) * 2;
                *(undefined4 *)(lVar2 + lVar15 * 4) = 0;
                lVar20 = lVar20 + (lVar13 + iVar14) * 2;
                *(undefined4 *)(lVar2 + lVar20 * 4) = 0x7fffffff;
                local_110 = lVar15;
                local_f0 = lVar20;
                if (0 < iVar12) {
                  local_140 = (ulonglong)(char)iVar14;
                  local_178 = (ulonglong)cVar8;
                  iVar12 = 0;
                  do {
                    local_188 = 0;
                    local_19c = iVar12 + 1;
                    local_18c = (int)ROUND((fVar21 + fVar21) * (float)iVar12 + 0.5) >> 1;
                    local_190 = (int)ROUND((fVar21 + fVar21) * (float)local_19c + 0.5) >> 1;
                    do {
                      iVar14 = local_188 + 1;
                      uVar10 = (longlong)
                               (short)((int)ROUND((fVar21 + fVar21) * (float)local_188 + 0.5) >> 1)
                               << 0x10;
                      local_118 = (((longlong)(short)local_18c | uVar10) << 8 | local_140) << 8 |
                                  local_178;
                      local_170 = (((longlong)(short)local_190 | uVar10) << 8 | local_140) << 8 |
                                  local_178;
                      uVar10 = (longlong)
                               (short)((int)ROUND((fVar21 + fVar21) * (float)iVar14 + 0.5) >> 1) <<
                               0x10;
                      local_148 = (((longlong)(short)local_18c | uVar10) << 8 | local_140) << 8 |
                                  local_178;
                      local_158 = (((longlong)(short)local_190 | uVar10) << 8 | local_140) << 8 |
                                  local_178;
                      if ((int)local_a0 != local_74) {
                        puVar5 = local_70;
                        if (local_68 != (undefined1 *)0x0) {
                          puVar5 = local_68;
                        }
                        iVar12 = *(int *)(puVar5 + (longlong)
                                                   (int)((int)(local_118 >> 0x20) * 0x17 +
                                                         (int)local_118 & local_60 - 1U) * 4);
                        while (iVar12 != -1) {
                          lVar20 = (longlong)iVar12;
                          if (*(ulonglong *)(local_a8 + lVar20 * 0x18) == local_118) {
                            if (iVar12 != -1) {
                              lVar20 = local_a8 + lVar20 * 0x18;
                              goto LAB_141f0939d;
                            }
                            break;
                          }
                          iVar12 = *(int *)(local_a8 + 0x10 + lVar20 * 0x18);
                        }
                      }
                      lVar20 = 0;
LAB_141f0939d:
                      puVar4 = (ushort *)(lVar20 + 8);
                      if (lVar20 == 0) {
                        puVar4 = (ushort *)0x0;
                      }
                      local_188 = iVar14;
                      if (puVar4 == (ushort *)0x0) {
                        local_e8 = &local_118;
                        local_e0 = local_1d4;
                        local_1d8 = uVar16 + 1;
                        local_1d4[0] = uVar16;
                        FUN_141f0b010(&local_a8,local_f8,&local_e8,0);
                        uVar16 = uVar16 + 1;
                      }
                      else {
                        local_1d4[0] = *puVar4;
                      }
                      if ((int)local_a0 != local_74) {
                        puVar5 = local_70;
                        if (local_68 != (undefined1 *)0x0) {
                          puVar5 = local_68;
                        }
                        iVar14 = *(int *)(puVar5 + (longlong)
                                                   (int)((int)(local_148 >> 0x20) * 0x17 +
                                                         (int)local_148 & local_60 - 1U) * 4);
                        while (iVar14 != -1) {
                          lVar20 = (longlong)iVar14;
                          if (*(ulonglong *)(local_a8 + lVar20 * 0x18) == local_148) {
                            lVar20 = local_a8 + lVar20 * 0x18;
                            if (iVar14 != -1) goto LAB_141f09485;
                            break;
                          }
                          iVar14 = *(int *)(local_a8 + 0x10 + lVar20 * 0x18);
                        }
                      }
                      lVar20 = 0;
LAB_141f09485:
                      puVar4 = (ushort *)(lVar20 + 8);
                      if (lVar20 == 0) {
                        puVar4 = (ushort *)0x0;
                      }
                      if (puVar4 == (ushort *)0x0) {
                        local_d8 = &local_148;
                        local_d0 = local_1b8;
                        local_1d8 = uVar16 + 1;
                        local_1b8[0] = uVar16;
                        FUN_141f0b010(&local_a8,local_11c,&local_d8,0);
                        uVar16 = uVar16 + 1;
                        iVar14 = (int)local_a0;
                      }
                      else {
                        local_1b8[0] = *puVar4;
                        iVar14 = (int)local_a0;
                      }
                      if (iVar14 != local_74) {
                        puVar5 = local_70;
                        if (local_68 != (undefined1 *)0x0) {
                          puVar5 = local_68;
                        }
                        iVar12 = *(int *)(puVar5 + (longlong)
                                                   (int)((int)(local_158 >> 0x20) * 0x17 +
                                                         (int)local_158 & local_60 - 1U) * 4);
                        while (iVar12 != -1) {
                          lVar20 = (longlong)iVar12;
                          if (*(ulonglong *)(local_a8 + lVar20 * 0x18) == local_158) {
                            puVar4 = (ushort *)(local_a8 + lVar20 * 0x18);
                            if (iVar12 != -1) goto LAB_141f09555;
                            break;
                          }
                          iVar12 = *(int *)(local_a8 + 0x10 + lVar20 * 0x18);
                        }
                      }
                      puVar4 = (ushort *)0x0;
LAB_141f09555:
                      puVar6 = puVar4 + 4;
                      if (puVar4 == (ushort *)0x0) {
                        puVar6 = (ushort *)0x0;
                      }
                      if (puVar6 == (ushort *)0x0) {
                        local_c8 = &local_158;
                        local_c0 = local_1d0;
                        local_1d8 = uVar16 + 1;
                        local_1d0[0] = uVar16;
                        FUN_141f0b010(&local_a8,local_f4,&local_c8,0);
                        uVar16 = uVar16 + 1;
                        iVar14 = (int)local_a0;
                      }
                      else {
                        local_1d0[0] = *puVar6;
                      }
                      if (iVar14 != local_74) {
                        puVar5 = local_70;
                        if (local_68 != (undefined1 *)0x0) {
                          puVar5 = local_68;
                        }
                        iVar14 = *(int *)(puVar5 + (longlong)
                                                   (int)((int)(local_170 >> 0x20) * 0x17 +
                                                         (int)local_170 & local_60 - 1U) * 4);
                        while (iVar14 != -1) {
                          lVar20 = (longlong)iVar14;
                          if (*(ulonglong *)(local_a8 + lVar20 * 0x18) == local_170) {
                            puVar4 = (ushort *)(local_a8 + lVar20 * 0x18);
                            if (iVar14 != -1) goto LAB_141f09625;
                            break;
                          }
                          iVar14 = *(int *)(local_a8 + 0x10 + lVar20 * 0x18);
                        }
                      }
                      puVar4 = (ushort *)0x0;
LAB_141f09625:
                      puVar6 = puVar4 + 4;
                      if (puVar4 == (ushort *)0x0) {
                        puVar6 = (ushort *)0x0;
                      }
                      if (puVar6 == (ushort *)0x0) {
                        local_b8 = &local_170;
                        local_b0 = local_1b4;
                        local_1d8 = uVar16 + 1;
                        local_1b4[0] = uVar16;
                        FUN_141f0b010(&local_a8,local_120,&local_b8,0);
                      }
                      else {
                        local_1b4[0] = *puVar6;
                      }
                      lVar20 = local_f0;
                      lVar15 = local_110;
                      lVar13 = (longlong)(int)local_1a8;
                      uVar18 = (uint)local_1d4[0];
                      if ((int)(uint)local_1d4[0] <= *(int *)(lVar2 + local_110 * 4)) {
                        uVar18 = *(uint *)(lVar2 + local_110 * 4);
                      }
                      *(uint *)(lVar2 + local_110 * 4) = uVar18;
                      iVar14 = (int)local_1a8 + 1;
                      uVar18 = (uint)local_1d4[0];
                      if (*(int *)(lVar2 + local_f0 * 4) <= (int)(uint)local_1d4[0]) {
                        uVar18 = *(uint *)(lVar2 + local_f0 * 4);
                      }
                      *(uint *)(lVar2 + local_f0 * 4) = uVar18;
                      uVar18 = (uint)local_1b8[0];
                      if ((int)(uint)local_1b8[0] <= *(int *)(lVar2 + local_110 * 4)) {
                        uVar18 = *(uint *)(lVar2 + local_110 * 4);
                      }
                      *(uint *)(lVar2 + local_110 * 4) = uVar18;
                      uVar18 = (uint)local_1b8[0];
                      if (*(int *)(lVar2 + local_f0 * 4) <= (int)(uint)local_1b8[0]) {
                        uVar18 = *(uint *)(lVar2 + local_f0 * 4);
                      }
                      *(uint *)(lVar2 + local_f0 * 4) = uVar18;
                      uVar18 = (uint)local_1d0[0];
                      if ((int)(uint)local_1d0[0] <= *(int *)(lVar2 + local_110 * 4)) {
                        uVar18 = *(uint *)(lVar2 + local_110 * 4);
                      }
                      *(uint *)(lVar2 + local_110 * 4) = uVar18;
                      uVar18 = (uint)local_1d0[0];
                      if (*(int *)(lVar2 + local_f0 * 4) <= (int)(uint)local_1d0[0]) {
                        uVar18 = *(uint *)(lVar2 + local_f0 * 4);
                      }
                      *(uint *)(lVar2 + local_f0 * 4) = uVar18;
                      uVar9 = (uint)local_1b4[0];
                      uVar18 = uVar9;
                      if ((int)uVar9 <= *(int *)(lVar2 + local_110 * 4)) {
                        uVar18 = *(uint *)(lVar2 + local_110 * 4);
                      }
                      *(uint *)(lVar2 + local_110 * 4) = uVar18;
                      uVar18 = (uint)local_1b4[0];
                      if (*(int *)(lVar2 + local_f0 * 4) <= (int)uVar9) {
                        uVar18 = *(uint *)(lVar2 + local_f0 * 4);
                      }
                      *(uint *)(lVar2 + local_f0 * 4) = uVar18;
                      if (local_1a8._4_4_ < iVar14) {
                        uVar10 = local_1a8 & 0xffffffff;
                        local_1a8._0_4_ = iVar14;
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b0,uVar10);
                        iVar14 = (int)local_1a8;
                      }
                      *(ushort *)(local_1b0 + lVar13 * 2) = local_1d4[0];
                      local_1a8._0_4_ = iVar14 + 1;
                      iVar12 = (int)local_1a8;
                      if (local_1a8._4_4_ < (int)local_1a8) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b0,iVar14);
                        iVar12 = (int)local_1a8;
                      }
                      local_1a8._0_4_ = iVar12 + 1;
                      *(ushort *)(local_1b0 + (longlong)iVar14 * 2) = local_1d0[0];
                      iVar14 = (int)local_1a8;
                      if (local_1a8._4_4_ < (int)local_1a8) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b0,iVar12);
                        iVar14 = (int)local_1a8;
                      }
                      local_1a8._0_4_ = iVar14 + 1;
                      *(ushort *)(local_1b0 + (longlong)iVar12 * 2) = local_1b8[0];
                      iVar12 = (int)local_1a8;
                      if (local_1a8._4_4_ < (int)local_1a8) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b0,iVar14);
                        iVar12 = (int)local_1a8;
                      }
                      local_1a8._0_4_ = iVar12 + 1;
                      *(ushort *)(local_1b0 + (longlong)iVar14 * 2) = local_1d4[0];
                      iVar14 = (int)local_1a8;
                      if (local_1a8._4_4_ < (int)local_1a8) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b0,iVar12);
                        iVar14 = (int)local_1a8;
                      }
                      *(ushort *)(local_1b0 + (longlong)iVar12 * 2) = local_1b4[0];
                      local_1a8 = CONCAT44(local_1a8._4_4_,iVar14 + 1);
                      if (local_1a8._4_4_ < iVar14 + 1) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b0,iVar14);
                      }
                      *(ushort *)(local_1b0 + (longlong)iVar14 * 2) = local_1d0[0];
                      uVar16 = local_1d8;
                    } while (local_188 < local_194);
                    iVar14 = local_198;
                    iVar12 = local_19c;
                  } while (local_19c < local_194);
                }
                iVar12 = *(int *)(lVar2 + lVar15 * 4);
                local_130 = (void *)0x0;
                local_128 = 0;
                if (iVar12 <= *(int *)(local_138 + 0x24 + local_168 * 0x28)) {
                  iVar12 = *(int *)(local_138 + 0x24 + local_168 * 0x28);
                }
                *(int *)(local_138 + 0x24 + local_168 * 0x28) = iVar12;
                iVar12 = *(int *)(lVar2 + lVar20 * 4);
                if (*(int *)(local_138 + 0x20 + local_168 * 0x28) <= iVar12) {
                  iVar12 = *(int *)(local_138 + 0x20 + local_168 * 0x28);
                }
                *(int *)(local_138 + 0x20 + local_168 * 0x28) = iVar12;
                FUN_141f0b5f0(&local_1b0,&local_130,0x20);
                _Src = local_130;
                iVar12 = (int)local_128;
                lVar20 = (longlong)(int)local_128;
                if ((int)local_128 != 0) {
                  if (local_1c0._4_4_ < (int)local_1c0 + (int)local_128) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1c8);
                  }
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(local_1c8 + (longlong)(int)local_1c0 * 2),_Src,lVar20 * 2);
                  local_1c0 = CONCAT44(local_1c0._4_4_,(int)local_1c0 + iVar12);
                }
                if (_Src != (void *)0x0) {
                  FMemory::Free(_Src);
                }
                if (local_1b0 != 0) {
                  FMemory::Free();
                }
                local_198 = iVar14 + 1;
                iVar3 = *(int *)(local_160 + 0x20);
                param_1 = local_160;
                lVar20 = local_168;
                iVar12 = local_194;
              } while (local_198 < iVar3);
            }
            local_1a0 = local_1a0 + 1;
            param_3 = local_1d6;
            iVar14 = local_184;
            param_2 = local_180;
          } while ((int)local_1a0 < iVar3);
        }
      }
      else {
        local_19c = 0;
        local_178 = 0;
        local_188 = 0;
        if (0 < iVar3) {
          do {
            local_18c = 0;
            if (0 < iVar3) {
              lVar15 = (local_178 + lVar20 * 10) * 4;
              do {
                lVar2 = *(longlong *)(param_1 + 0x40);
                local_198 = 0;
                *(undefined4 *)(lVar2 + 0x10 + lVar15) = 0;
                *(undefined4 *)(lVar2 + lVar15) = 0x7fffffff;
                if (0 < iVar12) {
                  do {
                    uVar18 = local_198 + 1;
                    local_190 = 0;
                    local_1a0 = CONCAT22(local_1a0._2_2_,(short)uVar18);
                    do {
                      lVar20 = (longlong)(int)local_1c0;
                      iVar14 = (int)local_1c0 + 1;
                      uVar11 = (short)local_198 * *(short *)(param_1 + 0x1c) + (short)iVar19 +
                               (short)local_190;
                      uVar17 = (short)uVar18 * *(short *)(param_1 + 0x1c) + (short)iVar19 +
                               (short)local_190;
                      uVar16 = uVar11 + 1;
                      uVar1 = uVar17 + 1;
                      if (local_1c0._4_4_ < iVar14) {
                        uVar10 = local_1c0 & 0xffffffff;
                        local_1c0._0_4_ = iVar14;
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,uVar10);
                        iVar14 = (int)local_1c0;
                      }
                      local_1c0._0_4_ = iVar14;
                      iVar14 = (int)local_1c0;
                      *(ushort *)(local_1c8 + lVar20 * 2) = uVar11;
                      lVar20 = (longlong)(int)local_1c0;
                      local_1c0._0_4_ = (int)local_1c0 + 1;
                      if (local_1c0._4_4_ < (int)local_1c0) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,iVar14);
                      }
                      iVar14 = (int)local_1c0;
                      *(ushort *)(local_1c8 + lVar20 * 2) = uVar1;
                      lVar20 = (longlong)(int)local_1c0;
                      local_1c0._0_4_ = (int)local_1c0 + 1;
                      if (local_1c0._4_4_ < (int)local_1c0) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,iVar14);
                      }
                      iVar14 = (int)local_1c0;
                      *(ushort *)(local_1c8 + lVar20 * 2) = uVar16;
                      lVar20 = (longlong)(int)local_1c0;
                      local_1c0._0_4_ = (int)local_1c0 + 1;
                      if (local_1c0._4_4_ < (int)local_1c0) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,iVar14);
                      }
                      iVar14 = (int)local_1c0;
                      *(ushort *)(local_1c8 + lVar20 * 2) = uVar11;
                      lVar20 = (longlong)(int)local_1c0;
                      local_1c0._0_4_ = (int)local_1c0 + 1;
                      if (local_1c0._4_4_ < (int)local_1c0) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,iVar14);
                      }
                      iVar14 = (int)local_1c0;
                      *(ushort *)(local_1c8 + lVar20 * 2) = uVar17;
                      lVar20 = (longlong)(int)local_1c0;
                      local_1c0._0_4_ = (int)local_1c0 + 1;
                      if (local_1c0._4_4_ < (int)local_1c0) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,iVar14);
                      }
                      uVar18 = local_1a0 & 0xffff;
                      *(ushort *)(local_1c8 + lVar20 * 2) = uVar1;
                      uVar9 = (uint)uVar11;
                      if ((int)(uint)uVar11 <= *(int *)(lVar2 + 0x10 + lVar15)) {
                        uVar9 = *(uint *)(lVar2 + 0x10 + lVar15);
                      }
                      *(uint *)(lVar2 + 0x10 + lVar15) = uVar9;
                      uVar9 = (uint)uVar11;
                      if (*(int *)(lVar2 + lVar15) <= (int)(uint)uVar11) {
                        uVar9 = *(uint *)(lVar2 + lVar15);
                      }
                      *(uint *)(lVar2 + lVar15) = uVar9;
                      uVar9 = (uint)uVar16;
                      if ((int)(uint)uVar16 <= *(int *)(lVar2 + 0x10 + lVar15)) {
                        uVar9 = *(uint *)(lVar2 + 0x10 + lVar15);
                      }
                      *(uint *)(lVar2 + 0x10 + lVar15) = uVar9;
                      uVar9 = (uint)uVar16;
                      if (*(int *)(lVar2 + lVar15) <= (int)(uint)uVar16) {
                        uVar9 = *(uint *)(lVar2 + lVar15);
                      }
                      *(uint *)(lVar2 + lVar15) = uVar9;
                      uVar9 = (uint)uVar1;
                      if ((int)(uint)uVar1 <= *(int *)(lVar2 + 0x10 + lVar15)) {
                        uVar9 = *(uint *)(lVar2 + 0x10 + lVar15);
                      }
                      *(uint *)(lVar2 + 0x10 + lVar15) = uVar9;
                      uVar9 = (uint)uVar1;
                      if (*(int *)(lVar2 + lVar15) <= (int)(uint)uVar1) {
                        uVar9 = *(uint *)(lVar2 + lVar15);
                      }
                      *(uint *)(lVar2 + lVar15) = uVar9;
                      uVar9 = (uint)uVar17;
                      if ((int)(uint)uVar17 <= *(int *)(lVar2 + 0x10 + lVar15)) {
                        uVar9 = *(uint *)(lVar2 + 0x10 + lVar15);
                      }
                      *(uint *)(lVar2 + 0x10 + lVar15) = uVar9;
                      uVar9 = (uint)uVar17;
                      if (*(int *)(lVar2 + lVar15) <= (int)(uint)uVar17) {
                        uVar9 = *(uint *)(lVar2 + lVar15);
                      }
                      *(uint *)(lVar2 + lVar15) = uVar9;
                      local_190 = local_190 + 1;
                      param_1 = local_160;
                      iVar19 = local_19c;
                    } while (local_190 < local_194);
                    local_198 = local_198 + 1;
                    lVar13 = local_138;
                    lVar20 = local_168;
                    iVar12 = local_194;
                  } while (local_198 < local_194);
                }
                iVar14 = *(int *)(lVar2 + 0x10 + lVar15);
                if (iVar14 <= *(int *)(lVar13 + 0x24 + lVar20 * 0x28)) {
                  iVar14 = *(int *)(lVar13 + 0x24 + lVar20 * 0x28);
                }
                *(int *)(lVar13 + 0x24 + lVar20 * 0x28) = iVar14;
                iVar14 = *(int *)(lVar2 + lVar15);
                if (*(int *)(lVar13 + 0x20 + lVar20 * 0x28) <= *(int *)(lVar2 + lVar15)) {
                  iVar14 = *(int *)(lVar13 + 0x20 + lVar20 * 0x28);
                }
                lVar15 = lVar15 + 8;
                *(int *)(lVar13 + 0x20 + lVar20 * 0x28) = iVar14;
                local_18c = local_18c + 1;
                local_19c = iVar19 + *(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x1c);
                iVar3 = *(int *)(param_1 + 0x20);
                iVar19 = local_19c;
              } while (local_18c < iVar3);
            }
            local_188 = local_188 + 1;
            local_178 = local_178 + 1;
            param_3 = local_1d6;
            iVar14 = local_184;
            param_2 = local_180;
          } while (local_188 < iVar3);
        }
      }
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x38) + lVar20 * 8);
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)operator_new();
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          *(undefined4 *)(plVar7 + 1) = 4;
          plVar7[2] = 0;
          plVar7[3] = 0;
          *(undefined1 *)(plVar7 + 5) = 0;
          plVar7[6] = 0;
          plVar7[7] = 0;
          *plVar7 = (longlong)&PTR_FUN_144ef08e8;
          plVar7[9] = 0;
          plVar7[10] = 0;
          plVar7[8] = (longlong)&PTR_GetBoundProgramCounterForTimerManager_144e09148;
          *(undefined1 *)(plVar7 + 0xb) = 0;
        }
      }
      (**(code **)(*plVar7 + 0x90))(plVar7,&local_1c8);
      if (param_3 == '\0') {
        (**(code **)(*plVar7 + 0x28))(plVar7);
      }
      *(longlong **)(*(longlong *)(param_1 + 0x38) + lVar20 * 8) = plVar7;
      if (local_1c8 != 0) {
        FMemory::Free();
      }
      iVar14 = iVar14 + -1;
      lVar20 = lVar20 + -1;
      local_184 = iVar14;
      local_168 = lVar20;
    } while (-1 < iVar14);
  }
  local_60 = 0;
  if (local_68 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_a8);
  return;
}



// FUNCTION 141f09da0 FUN_141f09da0 body=3417 status=ok
// SIG undefined FUN_141f09da0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f09da0(longlong param_1,int param_2,char param_3)

{
  void *_Src;
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int *piVar4;
  longlong *plVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  undefined8 local_1e0;
  int local_1d8;
  int local_1d4;
  longlong local_1d0;
  undefined8 local_1c8;
  char local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  undefined8 local_1b0;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  ulonglong local_188;
  longlong local_180;
  int local_178;
  int local_174;
  ulonglong local_170;
  longlong local_168;
  int local_160;
  ulonglong local_158;
  ulonglong local_150;
  longlong local_148;
  longlong local_140;
  void *local_138;
  undefined8 local_130;
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  ulonglong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  longlong local_f0;
  ulonglong *local_e8;
  int *local_e0;
  ulonglong *local_d8;
  int *local_d0;
  ulonglong *local_c8;
  int *local_c0;
  undefined8 *local_b8;
  int *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [8];
  undefined1 *local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_1c0 = param_3;
  local_180 = param_1;
  local_160 = param_2;
  if ((param_2 < 2) && (DAT_146ac4748 == '\0')) {
    DAT_146ac4748 = `anonymous_namespace'::ComputeVertexScores();
  }
  uVar8 = 0;
  local_190 = *(int *)(param_1 + 0x1c) + -1;
  iVar16 = *(int *)(param_1 + 0x18) + -1;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  local_1b0 = (ulonglong)local_1b0._4_4_ << 0x20;
  local_198 = iVar16;
  if (-1 < iVar16) {
    lVar14 = (longlong)iVar16;
    do {
      iVar12 = (*(int *)(param_1 + 0x1c) >> ((byte)iVar16 & 0x1f)) + -1;
      local_1e8 = 0;
      local_1e0 = 0;
      local_198 = iVar16;
      local_194 = iVar12;
      local_168 = lVar14;
      if (*(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x20) * iVar12 * iVar12 * 6 != 0) {
        TArray<float,FDefaultAllocator>::ResizeTo(&local_1e8);
      }
      iVar17 = 0;
      local_140 = *(longlong *)(param_1 + 0x40);
      lVar10 = lVar14 * 5;
      *(undefined8 *)(local_140 + 0x20 + lVar14 * 0x28) = 0x7fffffff;
      iVar13 = *(int *)(param_1 + 0x20);
      local_148 = lVar10;
      if (param_2 < 2) {
        local_1d8 = 0;
        fVar18 = (float)local_190 / (float)iVar12;
        if (0 < iVar13) {
          do {
            local_1b4 = 0;
            if (0 < iVar13) {
              local_100 = (longlong)local_1d8;
              local_108 = lVar14 * 5;
              local_174 = iVar12 * iVar12 * 6;
              do {
                lVar14 = local_100;
                lVar10 = local_108;
                iVar16 = local_1b4;
                cVar6 = (char)local_1d8;
                local_1d0 = 0;
                local_1c8 = 0;
                if (local_174 != 0) {
                  TArray<float,FDefaultAllocator>::ResizeTo(&local_1d0,local_174);
                  cVar6 = (char)local_1d8;
                }
                lVar11 = *(longlong *)(param_1 + 0x40);
                lVar15 = (lVar10 + iVar16) * 2 + 4 + lVar14;
                lVar14 = lVar14 + (lVar10 + iVar16) * 2;
                *(undefined4 *)(lVar11 + lVar15 * 4) = 0;
                *(undefined4 *)(lVar11 + lVar14 * 4) = 0x7fffffff;
                local_118 = lVar11;
                local_110 = lVar15;
                local_f0 = lVar14;
                if (0 < iVar12) {
                  local_150 = (ulonglong)(char)iVar16;
                  local_188 = (ulonglong)cVar6;
                  iVar16 = 0;
                  do {
                    local_19c = 0;
                    local_178 = iVar16 + 1;
                    local_1a0 = (int)ROUND((fVar18 + fVar18) * (float)iVar16 + 0.5) >> 1;
                    local_1a4 = (int)ROUND((fVar18 + fVar18) * (float)local_178 + 0.5) >> 1;
                    do {
                      iVar16 = local_19c + 1;
                      uVar7 = (longlong)
                              (short)((int)ROUND((fVar18 + fVar18) * (float)local_19c + 0.5) >> 1)
                              << 0x10;
                      local_120 = (((longlong)(short)local_1a0 | uVar7) << 8 | local_150) << 8 |
                                  local_188;
                      local_1b0 = (((longlong)(short)local_1a4 | uVar7) << 8 | local_150) << 8 |
                                  local_188;
                      uVar7 = (longlong)
                              (short)((int)ROUND((fVar18 + fVar18) * (float)iVar16 + 0.5) >> 1) <<
                              0x10;
                      local_158 = (((longlong)(short)local_1a0 | uVar7) << 8 | local_150) << 8 |
                                  local_188;
                      local_170 = (((longlong)(short)local_1a4 | uVar7) << 8 | local_150) << 8 |
                                  local_188;
                      if ((int)local_a0 != local_74) {
                        puVar3 = local_70;
                        if (local_68 != (undefined1 *)0x0) {
                          puVar3 = local_68;
                        }
                        iVar12 = *(int *)(puVar3 + (longlong)
                                                   (int)((int)(local_120 >> 0x20) * 0x17 +
                                                         (int)local_120 & local_60 - 1U) * 4);
                        while (iVar12 != -1) {
                          lVar14 = (longlong)iVar12;
                          if (*(ulonglong *)(local_a8 + lVar14 * 0x18) == local_120) {
                            if (iVar12 != -1) {
                              lVar14 = local_a8 + lVar14 * 0x18;
                              goto LAB_141f0a169;
                            }
                            break;
                          }
                          iVar12 = *(int *)(local_a8 + 0x10 + lVar14 * 0x18);
                        }
                      }
                      lVar14 = 0;
LAB_141f0a169:
                      piVar9 = (int *)0x0;
                      piVar2 = (int *)(lVar14 + 8);
                      if (lVar14 == 0) {
                        piVar2 = piVar9;
                      }
                      local_19c = iVar16;
                      if (piVar2 == (int *)0x0) {
                        local_e8 = &local_120;
                        local_1d4 = (int)uVar8;
                        local_e0 = &local_1d4;
                        uVar8 = (ulonglong)(local_1d4 + 1);
                        FUN_141f0b300(&local_a8,local_128,&local_e8,0);
                      }
                      else {
                        local_1d4 = *piVar2;
                      }
                      if ((int)local_a0 != local_74) {
                        puVar3 = local_70;
                        if (local_68 != (undefined1 *)0x0) {
                          puVar3 = local_68;
                        }
                        iVar16 = *(int *)(puVar3 + (longlong)
                                                   (int)((int)(local_158 >> 0x20) * 0x17 +
                                                         (int)local_158 & local_60 - 1U) * 4);
                        while (iVar16 != -1) {
                          lVar14 = (longlong)iVar16;
                          if (*(ulonglong *)(local_a8 + lVar14 * 0x18) == local_158) {
                            piVar2 = (int *)(local_a8 + lVar14 * 0x18);
                            if (iVar16 != -1) goto LAB_141f0a245;
                            break;
                          }
                          iVar16 = *(int *)(local_a8 + 0x10 + lVar14 * 0x18);
                        }
                      }
                      piVar2 = piVar9;
LAB_141f0a245:
                      piVar4 = piVar2 + 2;
                      if (piVar2 == (int *)0x0) {
                        piVar4 = piVar9;
                      }
                      if (piVar4 == (int *)0x0) {
                        local_d8 = &local_158;
                        local_1bc = (int)uVar8;
                        local_d0 = &local_1bc;
                        uVar8 = (ulonglong)(local_1bc + 1);
                        FUN_141f0b300(&local_a8,local_124,&local_d8,0);
                        iVar16 = (int)local_a0;
                      }
                      else {
                        local_1bc = *piVar4;
                        iVar16 = (int)local_a0;
                      }
                      if (iVar16 != local_74) {
                        puVar3 = local_70;
                        if (local_68 != (undefined1 *)0x0) {
                          puVar3 = local_68;
                        }
                        iVar12 = *(int *)(puVar3 + (longlong)
                                                   (int)((int)(local_170 >> 0x20) * 0x17 +
                                                         (int)local_170 & local_60 - 1U) * 4);
                        while (iVar12 != -1) {
                          lVar14 = (longlong)iVar12;
                          if (*(ulonglong *)(local_a8 + lVar14 * 0x18) == local_170) {
                            if (iVar12 != -1) {
                              lVar14 = local_a8 + lVar14 * 0x18;
                              goto LAB_141f0a310;
                            }
                            break;
                          }
                          iVar12 = *(int *)(local_a8 + 0x10 + lVar14 * 0x18);
                        }
                      }
                      lVar14 = 0;
LAB_141f0a310:
                      piVar9 = (int *)0x0;
                      piVar2 = (int *)(lVar14 + 8);
                      if (lVar14 == 0) {
                        piVar2 = piVar9;
                      }
                      if (piVar2 == (int *)0x0) {
                        local_c8 = &local_170;
                        local_1b8 = (int)uVar8;
                        local_c0 = &local_1b8;
                        uVar8 = (ulonglong)(local_1b8 + 1);
                        FUN_141f0b300(&local_a8,local_f4,&local_c8,0);
                        iVar16 = (int)local_a0;
                      }
                      else {
                        local_1b8 = *piVar2;
                      }
                      if (iVar16 != local_74) {
                        puVar3 = local_70;
                        if (local_68 != (undefined1 *)0x0) {
                          puVar3 = local_68;
                        }
                        iVar16 = *(int *)(puVar3 + (longlong)
                                                   (int)((int)(local_1b0 >> 0x20) * 0x17 +
                                                         (int)local_1b0 & local_60 - 1U) * 4);
                        while (iVar16 != -1) {
                          lVar14 = (longlong)iVar16;
                          if (*(ulonglong *)(local_a8 + lVar14 * 0x18) == local_1b0) {
                            piVar2 = (int *)(local_a8 + lVar14 * 0x18);
                            if (iVar16 != -1) goto LAB_141f0a3f5;
                            break;
                          }
                          iVar16 = *(int *)(local_a8 + 0x10 + lVar14 * 0x18);
                        }
                      }
                      piVar2 = piVar9;
LAB_141f0a3f5:
                      piVar4 = piVar2 + 2;
                      if (piVar2 == (int *)0x0) {
                        piVar4 = piVar9;
                      }
                      if (piVar4 == (int *)0x0) {
                        local_b8 = &local_1b0;
                        local_1a8 = (int)uVar8;
                        local_b0 = &local_1a8;
                        uVar8 = (ulonglong)(local_1a8 + 1);
                        FUN_141f0b300(&local_a8,local_f8,&local_b8,0);
                      }
                      else {
                        local_1a8 = *piVar4;
                      }
                      lVar14 = local_f0;
                      lVar15 = local_110;
                      lVar11 = local_118;
                      iVar16 = local_1d4;
                      if (local_1d4 <= *(int *)(local_118 + local_110 * 4)) {
                        iVar16 = *(int *)(local_118 + local_110 * 4);
                      }
                      *(int *)(local_118 + local_110 * 4) = iVar16;
                      iVar16 = local_1d4;
                      if (*(int *)(local_118 + local_f0 * 4) <= local_1d4) {
                        iVar16 = *(int *)(local_118 + local_f0 * 4);
                      }
                      *(int *)(local_118 + local_f0 * 4) = iVar16;
                      iVar16 = local_1bc;
                      if (local_1bc <= *(int *)(local_118 + local_110 * 4)) {
                        iVar16 = *(int *)(local_118 + local_110 * 4);
                      }
                      *(int *)(local_118 + local_110 * 4) = iVar16;
                      iVar16 = local_1bc;
                      if (*(int *)(local_118 + local_f0 * 4) <= local_1bc) {
                        iVar16 = *(int *)(local_118 + local_f0 * 4);
                      }
                      *(int *)(local_118 + local_f0 * 4) = iVar16;
                      lVar10 = (longlong)(int)local_1c8;
                      iVar16 = local_1b8;
                      if (local_1b8 <= *(int *)(local_118 + local_110 * 4)) {
                        iVar16 = *(int *)(local_118 + local_110 * 4);
                      }
                      *(int *)(local_118 + local_110 * 4) = iVar16;
                      iVar16 = (int)local_1c8 + 1;
                      iVar12 = local_1b8;
                      if (*(int *)(local_118 + local_f0 * 4) <= local_1b8) {
                        iVar12 = *(int *)(local_118 + local_f0 * 4);
                      }
                      *(int *)(local_118 + local_f0 * 4) = iVar12;
                      iVar12 = local_1a8;
                      if (local_1a8 <= *(int *)(local_118 + local_110 * 4)) {
                        iVar12 = *(int *)(local_118 + local_110 * 4);
                      }
                      *(int *)(local_118 + local_110 * 4) = iVar12;
                      iVar12 = local_1a8;
                      if (*(int *)(local_118 + local_f0 * 4) <= local_1a8) {
                        iVar12 = *(int *)(local_118 + local_f0 * 4);
                      }
                      *(int *)(local_118 + local_f0 * 4) = iVar12;
                      if (local_1c8._4_4_ < iVar16) {
                        uVar7 = local_1c8 & 0xffffffff;
                        local_1c8._0_4_ = iVar16;
                        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1d0,uVar7);
                        iVar16 = (int)local_1c8;
                      }
                      *(int *)(local_1d0 + lVar10 * 4) = local_1d4;
                      local_1c8._0_4_ = iVar16 + 1;
                      iVar12 = (int)local_1c8;
                      if (local_1c8._4_4_ < (int)local_1c8) {
                        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1d0,iVar16);
                        iVar12 = (int)local_1c8;
                      }
                      local_1c8._0_4_ = iVar12 + 1;
                      *(int *)(local_1d0 + (longlong)iVar16 * 4) = local_1b8;
                      iVar16 = (int)local_1c8;
                      if (local_1c8._4_4_ < (int)local_1c8) {
                        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1d0,iVar12);
                        iVar16 = (int)local_1c8;
                      }
                      local_1c8._0_4_ = iVar16 + 1;
                      *(int *)(local_1d0 + (longlong)iVar12 * 4) = local_1bc;
                      iVar12 = (int)local_1c8;
                      if (local_1c8._4_4_ < (int)local_1c8) {
                        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1d0,iVar16);
                        iVar12 = (int)local_1c8;
                      }
                      local_1c8._0_4_ = iVar12 + 1;
                      *(int *)(local_1d0 + (longlong)iVar16 * 4) = local_1d4;
                      iVar16 = (int)local_1c8;
                      if (local_1c8._4_4_ < (int)local_1c8) {
                        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1d0,iVar12);
                        iVar16 = (int)local_1c8;
                      }
                      *(int *)(local_1d0 + (longlong)iVar12 * 4) = local_1a8;
                      local_1c8 = CONCAT44(local_1c8._4_4_,iVar16 + 1);
                      if (local_1c8._4_4_ < iVar16 + 1) {
                        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1d0,iVar16);
                      }
                      *(int *)(local_1d0 + (longlong)iVar16 * 4) = local_1b8;
                    } while (local_19c < local_194);
                    local_1b0 = CONCAT44(local_1b0._4_4_,(int)uVar8);
                    iVar12 = local_194;
                    iVar16 = local_178;
                  } while (local_178 < local_194);
                }
                iVar16 = *(int *)(lVar11 + lVar15 * 4);
                local_138 = (void *)0x0;
                local_130 = 0;
                if (iVar16 <= *(int *)(local_140 + 0x24 + local_148 * 8)) {
                  iVar16 = *(int *)(local_140 + 0x24 + local_148 * 8);
                }
                *(int *)(local_140 + 0x24 + local_148 * 8) = iVar16;
                iVar16 = *(int *)(lVar11 + lVar14 * 4);
                if (*(int *)(local_140 + 0x20 + local_148 * 8) <= iVar16) {
                  iVar16 = *(int *)(local_140 + 0x20 + local_148 * 8);
                }
                *(int *)(local_140 + 0x20 + local_148 * 8) = iVar16;
                FUN_141f0c4f0(&local_1d0,&local_138,0x20);
                _Src = local_138;
                iVar16 = (int)local_130;
                lVar14 = (longlong)(int)local_130;
                if ((int)local_130 != 0) {
                  if (local_1e0._4_4_ < (int)local_130 + (int)local_1e0) {
                    TArray<float,FDefaultAllocator>::ResizeTo(&local_1e8);
                  }
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(local_1e8 + (longlong)(int)local_1e0 * 4),_Src,lVar14 << 2);
                  local_1e0 = CONCAT44(local_1e0._4_4_,(int)local_1e0 + iVar16);
                }
                if (_Src != (void *)0x0) {
                  FMemory::Free(_Src);
                }
                if (local_1d0 != 0) {
                  FMemory::Free();
                }
                local_1b4 = local_1b4 + 1;
                iVar13 = *(int *)(local_180 + 0x20);
                lVar14 = local_168;
                param_1 = local_180;
              } while (local_1b4 < iVar13);
            }
            local_1d8 = local_1d8 + 1;
            iVar16 = local_198;
          } while (local_1d8 < iVar13);
        }
      }
      else {
        local_1d8 = 0;
        local_188 = 0;
        local_19c = 0;
        if (0 < iVar13) {
          do {
            local_1a0 = 0;
            if (0 < iVar13) {
              lVar11 = (local_188 + lVar14 * 10) * 4;
              do {
                lVar14 = *(longlong *)(param_1 + 0x40);
                local_1b4 = 0;
                *(undefined4 *)(lVar14 + 0x10 + lVar11) = 0;
                *(undefined4 *)(lVar14 + lVar11) = 0x7fffffff;
                if (0 < iVar12) {
                  do {
                    local_1a4 = 0;
                    do {
                      lVar10 = (longlong)(int)local_1e0;
                      iVar1 = (int)local_1e0 + 1;
                      iVar13 = *(int *)(param_1 + 0x1c) * local_1b4 + local_1a4 + iVar17;
                      iVar17 = (local_1b4 + 1) * *(int *)(param_1 + 0x1c) + local_1a4 + iVar17;
                      iVar16 = iVar13 + 1;
                      iVar12 = iVar17 + 1;
                      if (local_1e0._4_4_ < iVar1) {
                        uVar8 = local_1e0 & 0xffffffff;
                        local_1e0._0_4_ = iVar1;
                        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1e8,uVar8);
                        iVar1 = (int)local_1e0;
                      }
                      local_1e0._0_4_ = iVar1;
                      iVar1 = (int)local_1e0;
                      *(int *)(local_1e8 + lVar10 * 4) = iVar13;
                      lVar10 = (longlong)(int)local_1e0;
                      local_1e0._0_4_ = (int)local_1e0 + 1;
                      if (local_1e0._4_4_ < (int)local_1e0) {
                        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1e8,iVar1);
                      }
                      iVar1 = (int)local_1e0;
                      *(int *)(local_1e8 + lVar10 * 4) = iVar12;
                      lVar10 = (longlong)(int)local_1e0;
                      local_1e0._0_4_ = (int)local_1e0 + 1;
                      if (local_1e0._4_4_ < (int)local_1e0) {
                        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1e8,iVar1);
                      }
                      iVar1 = (int)local_1e0;
                      *(int *)(local_1e8 + lVar10 * 4) = iVar16;
                      lVar10 = (longlong)(int)local_1e0;
                      local_1e0._0_4_ = (int)local_1e0 + 1;
                      if (local_1e0._4_4_ < (int)local_1e0) {
                        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1e8,iVar1);
                      }
                      iVar1 = (int)local_1e0;
                      *(int *)(local_1e8 + lVar10 * 4) = iVar13;
                      lVar10 = (longlong)(int)local_1e0;
                      local_1e0._0_4_ = (int)local_1e0 + 1;
                      if (local_1e0._4_4_ < (int)local_1e0) {
                        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1e8,iVar1);
                      }
                      iVar1 = (int)local_1e0;
                      *(int *)(local_1e8 + lVar10 * 4) = iVar17;
                      lVar10 = (longlong)(int)local_1e0;
                      local_1e0._0_4_ = (int)local_1e0 + 1;
                      if (local_1e0._4_4_ < (int)local_1e0) {
                        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_1e8,iVar1);
                      }
                      *(int *)(local_1e8 + lVar10 * 4) = iVar12;
                      iVar1 = iVar13;
                      if (iVar13 <= *(int *)(lVar14 + 0x10 + lVar11)) {
                        iVar1 = *(int *)(lVar14 + 0x10 + lVar11);
                      }
                      *(int *)(lVar14 + 0x10 + lVar11) = iVar1;
                      if (*(int *)(lVar14 + lVar11) <= iVar13) {
                        iVar13 = *(int *)(lVar14 + lVar11);
                      }
                      *(int *)(lVar14 + lVar11) = iVar13;
                      iVar13 = iVar16;
                      if (iVar16 <= *(int *)(lVar14 + 0x10 + lVar11)) {
                        iVar13 = *(int *)(lVar14 + 0x10 + lVar11);
                      }
                      *(int *)(lVar14 + 0x10 + lVar11) = iVar13;
                      if (*(int *)(lVar14 + lVar11) <= iVar16) {
                        iVar16 = *(int *)(lVar14 + lVar11);
                      }
                      *(int *)(lVar14 + lVar11) = iVar16;
                      iVar16 = iVar12;
                      if (iVar12 <= *(int *)(lVar14 + 0x10 + lVar11)) {
                        iVar16 = *(int *)(lVar14 + 0x10 + lVar11);
                      }
                      *(int *)(lVar14 + 0x10 + lVar11) = iVar16;
                      if (*(int *)(lVar14 + lVar11) <= iVar12) {
                        iVar12 = *(int *)(lVar14 + lVar11);
                      }
                      *(int *)(lVar14 + lVar11) = iVar12;
                      iVar16 = iVar17;
                      if (iVar17 <= *(int *)(lVar14 + 0x10 + lVar11)) {
                        iVar16 = *(int *)(lVar14 + 0x10 + lVar11);
                      }
                      *(int *)(lVar14 + 0x10 + lVar11) = iVar16;
                      if (*(int *)(lVar14 + lVar11) <= iVar17) {
                        iVar17 = *(int *)(lVar14 + lVar11);
                      }
                      local_1a4 = local_1a4 + 1;
                      *(int *)(lVar14 + lVar11) = iVar17;
                      param_1 = local_180;
                      iVar17 = local_1d8;
                    } while (local_1a4 < local_194);
                    local_1b4 = local_1b4 + 1;
                    lVar10 = local_148;
                    iVar12 = local_194;
                  } while (local_1b4 < local_194);
                }
                iVar16 = *(int *)(lVar14 + 0x10 + lVar11);
                if (iVar16 <= *(int *)(local_140 + 0x24 + lVar10 * 8)) {
                  iVar16 = *(int *)(local_140 + 0x24 + lVar10 * 8);
                }
                *(int *)(local_140 + 0x24 + lVar10 * 8) = iVar16;
                iVar16 = *(int *)(lVar14 + lVar11);
                if (*(int *)(local_140 + 0x20 + lVar10 * 8) <= *(int *)(lVar14 + lVar11)) {
                  iVar16 = *(int *)(local_140 + 0x20 + lVar10 * 8);
                }
                lVar11 = lVar11 + 8;
                *(int *)(local_140 + 0x20 + lVar10 * 8) = iVar16;
                local_1a0 = local_1a0 + 1;
                local_1d8 = iVar17 + *(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x1c);
                iVar13 = *(int *)(param_1 + 0x20);
                lVar14 = local_168;
                iVar17 = local_1d8;
              } while (local_1a0 < iVar13);
            }
            local_19c = local_19c + 1;
            local_188 = local_188 + 1;
          } while (local_19c < iVar13);
          uVar8 = local_1b0 & 0xffffffff;
          iVar16 = local_198;
        }
      }
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x38) + lVar14 * 8);
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)operator_new();
        if (plVar5 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          *(undefined4 *)(plVar5 + 1) = 4;
          plVar5[2] = 0;
          plVar5[3] = 0;
          *(undefined1 *)(plVar5 + 5) = 0;
          plVar5[6] = 0;
          plVar5[7] = 0;
          *plVar5 = (longlong)&PTR_FUN_144ef0850;
          plVar5[9] = 0;
          plVar5[10] = 0;
          plVar5[8] = (longlong)&PTR_GetBoundProgramCounterForTimerManager_144ef0818;
          *(undefined1 *)(plVar5 + 0xb) = 0;
        }
      }
      (**(code **)(*plVar5 + 0x90))(plVar5,&local_1e8);
      if (local_1c0 == '\0') {
        (**(code **)(*plVar5 + 0x28))(plVar5);
      }
      *(longlong **)(*(longlong *)(param_1 + 0x38) + lVar14 * 8) = plVar5;
      if (local_1e8 != 0) {
        FMemory::Free();
      }
      iVar16 = iVar16 + -1;
      lVar14 = lVar14 + -1;
      local_198 = iVar16;
      local_168 = lVar14;
      param_2 = local_160;
    } while (-1 < iVar16);
  }
  local_60 = 0;
  if (local_68 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_a8);
  return;
}



// FUNCTION 141f0ab00 FUN_141f0ab00 body=586 status=ok
// SIG undefined FUN_141f0ab00(void)

uint * FUN_141f0ab00(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  void *_Dst;
  int iVar7;
  uint uVar8;
  char cVar9;
  void *_Src;
  bool bVar10;
  uint local_res8 [2];
  
  iVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar8 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar8 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar8 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar5 = *(int *)((longlong)(int)uVar8 * 0x70 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x70 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = uVar8;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar4 +
                   (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar8 & 0x1f);
  _Src = (void *)((longlong)(int)uVar8 * 0x70 + *param_1);
  TKeyInitializer<FLandscapeNeighborInfo::FLandscapeKey_const_&>::
  operator<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>_>_TTuple<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>_>
            (param_3,_Src);
  *(undefined4 *)((longlong)_Src + 0x68) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>_>,TDefaultMapHashableKeyFuncs<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar8 = local_res8[0];
    lVar6 = (longlong)(int)local_res8[0];
    bVar10 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar10);
    if (bVar10) {
      _Dst = (void *)(lVar6 * 0x70 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x60) = 0;
      if (*(longlong *)((longlong)_Dst + 0x58) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 0x18);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x68);
      TSparseArray<TSetElement<TTuple<FTextFormatString,TFunction<TSharedPtr<ITextFormatArgumentModifier,0>___cdecl(FTextFormatString_const_&,TSharedRef<FTextFormatPatternDefinition_const_,1>)>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar8;
      goto LAB_141f0ad1c;
    }
  }
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar8) {
    uVar3 = (uVar8 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar9 = '\0';
    if (uVar3 != 0) {
      iVar5 = 0x1f - iVar7;
    }
    uVar3 = (uVar8 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar9 = '\x1f' - (char)iVar7;
    }
    iVar7 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar8 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar8 = *param_2;
    uVar3 = GetTypeHash(_Src);
    uVar3 = (int)param_1[9] - 1U & uVar3;
    *(uint *)((longlong)_Src + 0x6c) = uVar3;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x68) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(uint *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) =
         uVar8;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>_>,TDefaultMapHashableKeyFuncs<FLandscapeNeighborInfo::FLandscapeKey,TMap<FIntPoint,FLandscapeNeighborInfo_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>_>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141f0ad1c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141f0ad50 FUN_141f0ad50 body=694 status=ok
// SIG undefined FUN_141f0ad50(void)

uint * FUN_141f0ad50(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  undefined8 *puVar2;
  undefined8 uVar3;
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
  _Src = (undefined8 *)(*param_1 + (longlong)(int)uVar9 * 0x18);
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = *(undefined8 *)*param_3;
  *_Src = uVar3;
  _Src[1] = *puVar2;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    TSet<TTuple<FIntPoint,FLandscapeNeighborInfo_const_*>,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>,FDefaultSetAllocator>
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
      goto LAB_141f0afd8;
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
    uVar12 = (uint)((ulonglong)*_Src >> 0x20);
    uVar13 = (int)*_Src - uVar12 ^ uVar12 >> 0xd;
    uVar5 = (-0x61c88647 - uVar13) - uVar12 ^ uVar13 << 8;
    uVar12 = (uVar12 - uVar5) - uVar13 ^ uVar5 >> 0xd;
    uVar13 = (uVar13 - uVar5) - uVar12 ^ uVar12 >> 0xc;
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
    TSet<TTuple<FIntPoint,FLandscapeNeighborInfo_const_*>,TDefaultMapHashableKeyFuncs<FIntPoint,FLandscapeNeighborInfo_const_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141f0afd8:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141f0b010 FUN_141f0b010 body=742 status=ok
// SIG undefined FUN_141f0b010(void)

int * FUN_141f0b010(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  undefined2 *puVar2;
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
  longlong *plVar14;
  uint *puVar15;
  int iVar16;
  bool local_res8;
  
  iVar8 = 1;
  iVar16 = -1;
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
  plVar14 = (longlong *)param_1[4];
  *param_2 = iVar11;
  local_res8 = false;
  lVar6 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  puVar15 = (uint *)((longlong)plVar14 + lVar6);
  *puVar15 = *puVar15 | 1 << ((byte)iVar11 & 0x1f);
  puVar2 = (undefined2 *)param_3[1];
  lVar1 = (longlong)iVar11 * 0x18;
  plVar14 = (longlong *)(*param_1 + lVar1);
  lVar3 = *(longlong *)*param_3;
  *plVar14 = lVar3;
  *(undefined2 *)(plVar14 + 1) = *puVar2;
  *(undefined4 *)(plVar14 + 2) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar16;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x18) == lVar3) break;
          iVar9 = *(int *)(*param_1 + 0x10 + (longlong)iVar9 * 0x18);
          iVar10 = iVar16;
        } while (iVar9 != -1);
      }
    }
    local_res8 = iVar10 != -1;
    if (local_res8) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar10 * 0x18),plVar14,0x10);
      bVar4 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar11;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar1 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar16 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar3) = iVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar14 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar14 == (longlong *)0x0) {
        plVar14 = param_1 + 2;
      }
      puVar15 = (uint *)((longlong)plVar14 + lVar6);
      *puVar15 = *puVar15 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_141f0b2c7;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar16 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar16;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar16 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar16;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar13 = (int)((ulonglong)*plVar14 >> 0x20) * 0x17 + (int)*plVar14 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar14 + 0x14) = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar14 + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141f0b2c7:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141f0b300 FUN_141f0b300 body=741 status=ok
// SIG undefined FUN_141f0b300(void)

int * FUN_141f0b300(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
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
  longlong *plVar14;
  uint *puVar15;
  int iVar16;
  bool local_res8;
  
  iVar8 = 1;
  iVar16 = -1;
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
  plVar14 = (longlong *)param_1[4];
  *param_2 = iVar11;
  local_res8 = false;
  lVar6 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  puVar15 = (uint *)((longlong)plVar14 + lVar6);
  *puVar15 = *puVar15 | 1 << ((byte)iVar11 & 0x1f);
  puVar2 = (undefined4 *)param_3[1];
  lVar1 = (longlong)iVar11 * 0x18;
  plVar14 = (longlong *)(*param_1 + lVar1);
  lVar3 = *(longlong *)*param_3;
  *plVar14 = lVar3;
  *(undefined4 *)(plVar14 + 1) = *puVar2;
  *(undefined4 *)(plVar14 + 2) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar16;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x18) == lVar3) break;
          iVar9 = *(int *)(*param_1 + 0x10 + (longlong)iVar9 * 0x18);
          iVar10 = iVar16;
        } while (iVar9 != -1);
      }
    }
    local_res8 = iVar10 != -1;
    if (local_res8) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar10 * 0x18),plVar14,0x10);
      bVar4 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar11;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar1 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar16 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar3) = iVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar14 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar14 == (longlong *)0x0) {
        plVar14 = param_1 + 2;
      }
      puVar15 = (uint *)((longlong)plVar14 + lVar6);
      *puVar15 = *puVar15 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_141f0b5b6;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar16 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar16;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar16 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar16;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar13 = (int)((ulonglong)*plVar14 >> 0x20) * 0x17 + (int)*plVar14 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar14 + 0x14) = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar14 + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141f0b5b6:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 141f0b5f0 FUN_141f0b5f0 body=3830 status=ok
// SIG undefined FUN_141f0b5f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f0b5f0(longlong *param_1,longlong *param_2,ushort param_3)

{
  int *piVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  int iVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM1 [16];
  uint uVar21;
  float fVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auStack_338 [32];
  ushort local_318;
  uint local_314;
  uint local_310;
  ulonglong local_308;
  undefined8 local_300;
  uint local_2f8;
  uint local_2f4;
  uint *local_2f0;
  longlong local_2e8;
  undefined8 uStack_2e0;
  longlong *local_2d0;
  uint *local_2c8;
  uint local_2c0;
  undefined8 local_2b8;
  uint *local_2b0;
  longlong *local_2a8;
  uint local_298 [67];
  uint local_18c [69];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  local_2f8 = *(uint *)(param_1 + 1);
  uVar8 = 0;
  iVar13 = 0;
  if (local_2f8 != 0) {
    uVar16 = uVar8;
    uVar7 = uVar8;
    if ((7 < local_2f8) && (uVar16 = 0, uVar7 = 0, 1 < DAT_1468387b0)) {
      uVar21 = 0;
      uVar23 = 0;
      uVar24 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar30 = 0;
      uVar7 = uVar8;
      do {
        iVar13 = (int)uVar7;
        uVar7 = (ulonglong)(iVar13 + 8U);
        auVar19._8_8_ = 0;
        auVar19._0_8_ = *(ulonglong *)(*param_1 + (longlong)iVar13 * 2);
        auVar19 = pmovzxwd(in_XMM1,auVar19);
        auVar20._8_8_ = 0;
        auVar20._0_8_ = *(ulonglong *)(*param_1 + 8 + (longlong)iVar13 * 2);
        uVar4 = auVar19._0_4_;
        uVar21 = (uVar21 < uVar4) * uVar4 | (uVar21 >= uVar4) * uVar21;
        uVar4 = auVar19._4_4_;
        uVar23 = (uVar23 < uVar4) * uVar4 | (uVar23 >= uVar4) * uVar23;
        uVar4 = auVar19._8_4_;
        uVar24 = (uVar24 < uVar4) * uVar4 | (uVar24 >= uVar4) * uVar24;
        uVar4 = auVar19._12_4_;
        uVar25 = (uVar25 < uVar4) * uVar4 | (uVar25 >= uVar4) * uVar25;
        in_XMM1 = pmovzxwd(auVar19,auVar20);
        uVar4 = in_XMM1._0_4_;
        uVar26 = (uVar26 < uVar4) * uVar4 | (uVar26 >= uVar4) * uVar26;
        uVar4 = in_XMM1._4_4_;
        uVar28 = (uVar28 < uVar4) * uVar4 | (uVar28 >= uVar4) * uVar28;
        uVar4 = in_XMM1._8_4_;
        uVar29 = (uVar29 < uVar4) * uVar4 | (uVar29 >= uVar4) * uVar29;
        uVar4 = in_XMM1._12_4_;
        uVar30 = (uVar30 < uVar4) * uVar4 | (uVar30 >= uVar4) * uVar30;
      } while (iVar13 + 8U < local_2f8 - (local_2f8 & 7));
      uVar21 = (uVar21 < uVar26) * uVar26 | (uVar21 >= uVar26) * uVar21;
      uVar23 = (uVar23 < uVar28) * uVar28 | (uVar23 >= uVar28) * uVar23;
      uVar24 = (uVar24 < uVar29) * uVar29 | (uVar24 >= uVar29) * uVar24;
      uVar25 = (uVar25 < uVar30) * uVar30 | (uVar25 >= uVar30) * uVar25;
      uVar21 = (uVar21 < uVar24) * uVar24 | (uVar21 >= uVar24) * uVar21;
      uVar23 = (uVar23 < uVar25) * uVar25 | (uVar23 >= uVar25) * uVar23;
      uVar16 = (ulonglong)((uVar21 < uVar23) * uVar23 | (uVar21 >= uVar23) * uVar21);
    }
    iVar13 = (int)uVar16;
    if ((uint)uVar7 < local_2f8) {
      do {
        uVar21 = (uint)*(ushort *)(*param_1 + (longlong)(int)uVar7 * 2);
        if ((uint)uVar16 <= uVar21) {
          uVar16 = (ulonglong)uVar21;
        }
        iVar13 = (int)uVar16;
        uVar21 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar21;
      } while (uVar21 < local_2f8);
    }
  }
  local_300 = 0;
  local_308 = 0;
  uVar21 = iVar13 + 1;
  local_318 = param_3;
  local_2d0 = param_1;
  local_2a8 = param_2;
  if (uVar21 != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
              (&local_308);
    uVar16 = (ulonglong)uVar21;
    uVar8 = local_308;
    do {
      lVar10 = (longlong)(int)local_300;
      local_2e8 = 0;
      uStack_2e0 = 0;
      iVar5 = (int)local_300 + 1;
      local_300 = CONCAT44(local_300._4_4_,iVar5);
      if (local_300._4_4_ < iVar5) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
        ResizeGrow(&local_308);
        uVar8 = local_308;
      }
      plVar9 = (longlong *)(uVar8 + lVar10 * 0x14);
      *plVar9 = local_2e8;
      plVar9[1] = uStack_2e0;
      *(undefined4 *)(uVar8 + 0x10 + lVar10 * 0x14) = 0;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  uVar24 = local_2f8;
  uVar23 = *(uint *)((longlong)param_2 + 0xc);
  iVar5 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (uVar23 != local_2f8) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2);
    uVar23 = *(uint *)((longlong)param_2 + 0xc);
    iVar5 = (int)param_2[1];
  }
  *(uint *)(param_2 + 1) = iVar5 + uVar24;
  if ((int)uVar23 < (int)(iVar5 + uVar24)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
  }
  puVar15 = (uint *)(longlong)(int)uVar24;
  local_2c8 = puVar15;
  _guard_xfg_dispatch_icall_nop((void *)(*local_2a8 + (longlong)iVar5 * 2),0,(longlong)puVar15 * 2);
  uVar23 = 0;
  if (uVar24 != 0) {
    do {
      lVar10 = (longlong)(int)uVar23;
      uVar23 = uVar23 + 1;
      piVar1 = (int *)(uVar8 + 8 + (ulonglong)*(ushort *)(*param_1 + lVar10 * 2) * 0x14);
      *piVar1 = *piVar1 + 1;
    } while (uVar23 < uVar24);
  }
  iVar5 = 0;
  local_308 = 0;
  uVar23 = 0;
  if (3 < uVar21) {
    uVar16 = (ulonglong)param_3;
    do {
      lVar10 = (longlong)(int)uVar23;
      *(undefined8 *)(uVar8 + 0xc + lVar10 * 0x14) = 0xffffffffffffffff;
      *(int *)(uVar8 + 4 + lVar10 * 0x14) = iVar5;
      uVar24 = *(uint *)(uVar8 + 8 + lVar10 * 0x14);
      uVar25 = (uint)param_3;
      if (uVar24 == 0) {
        fVar22 = -1.0;
      }
      else {
        uVar26 = *(uint *)(uVar8 + 0xc + lVar10 * 0x14);
        fVar22 = 0.0;
        if (uVar26 < uVar25) {
          fVar22 = *(float *)(&DAT_146ac4750 + (uVar16 * 0x40 + (ulonglong)uVar26) * 4);
        }
        if (uVar24 < 0x40) {
          fVar27 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar24 * 4);
        }
        else {
          fVar27 = 1.0 / SQRT((float)uVar24);
          fVar27 = fVar27 + fVar27;
        }
        fVar22 = fVar22 + fVar27;
      }
      *(float *)(uVar8 + lVar10 * 0x14) = fVar22;
      *(undefined4 *)(uVar8 + 8 + lVar10 * 0x14) = 0;
      *(undefined8 *)(uVar8 + 0x20 + lVar10 * 0x14) = 0xffffffffffffffff;
      *(uint *)(uVar8 + 0x18 + lVar10 * 0x14) = iVar5 + uVar24;
      uVar26 = *(uint *)(uVar8 + 0x1c + lVar10 * 0x14);
      iVar5 = iVar5 + uVar24 + uVar26;
      if (uVar26 == 0) {
        fVar22 = -1.0;
      }
      else {
        uVar24 = *(uint *)(uVar8 + 0x20 + lVar10 * 0x14);
        fVar22 = 0.0;
        if (uVar24 < uVar25) {
          fVar22 = *(float *)(&DAT_146ac4750 + (uVar16 * 0x40 + (ulonglong)uVar24) * 4);
        }
        if (uVar26 < 0x40) {
          fVar27 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar26 * 4);
        }
        else {
          fVar27 = 1.0 / SQRT((float)uVar26);
          fVar27 = fVar27 + fVar27;
        }
        fVar22 = fVar22 + fVar27;
      }
      *(float *)(uVar8 + 0x14 + lVar10 * 0x14) = fVar22;
      *(undefined4 *)(uVar8 + 0x1c + lVar10 * 0x14) = 0;
      *(undefined8 *)(uVar8 + 0x34 + lVar10 * 0x14) = 0xffffffffffffffff;
      *(int *)(uVar8 + 0x2c + lVar10 * 0x14) = iVar5;
      uVar24 = *(uint *)(uVar8 + 0x30 + lVar10 * 0x14);
      iVar5 = iVar5 + uVar24;
      if (uVar24 == 0) {
        fVar22 = -1.0;
      }
      else {
        uVar26 = *(uint *)(uVar8 + 0x34 + lVar10 * 0x14);
        fVar22 = 0.0;
        if (uVar26 < uVar25) {
          fVar22 = *(float *)(&DAT_146ac4750 + (uVar16 * 0x40 + (ulonglong)uVar26) * 4);
        }
        if (uVar24 < 0x40) {
          fVar27 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar24 * 4);
        }
        else {
          fVar27 = 1.0 / SQRT((float)uVar24);
          fVar27 = fVar27 + fVar27;
        }
        fVar22 = fVar22 + fVar27;
      }
      *(float *)(uVar8 + 0x28 + lVar10 * 0x14) = fVar22;
      *(undefined4 *)(uVar8 + 0x30 + lVar10 * 0x14) = 0;
      *(undefined8 *)(uVar8 + 0x48 + lVar10 * 0x14) = 0xffffffffffffffff;
      *(int *)(uVar8 + 0x40 + lVar10 * 0x14) = iVar5;
      uVar24 = *(uint *)(uVar8 + 0x44 + lVar10 * 0x14);
      iVar5 = iVar5 + uVar24;
      if (uVar24 == 0) {
        fVar22 = -1.0;
      }
      else {
        uVar26 = *(uint *)(uVar8 + 0x48 + lVar10 * 0x14);
        fVar22 = 0.0;
        if (uVar26 < uVar25) {
          fVar22 = *(float *)(&DAT_146ac4750 + (uVar16 * 0x40 + (ulonglong)uVar26) * 4);
        }
        if (uVar24 < 0x40) {
          fVar27 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar24 * 4);
        }
        else {
          fVar27 = 1.0 / SQRT((float)uVar24);
          fVar27 = fVar27 + fVar27;
        }
        fVar22 = fVar22 + fVar27;
      }
      uVar23 = uVar23 + 4;
      *(float *)(uVar8 + 0x3c + lVar10 * 0x14) = fVar22;
      *(undefined4 *)(uVar8 + 0x44 + lVar10 * 0x14) = 0;
      uVar24 = local_2f8;
      puVar15 = local_2c8;
    } while (uVar23 < iVar13 - 2U);
  }
  for (; uVar23 < uVar21; uVar23 = uVar23 + 1) {
    lVar10 = (longlong)(int)uVar23;
    uVar25 = *(uint *)(uVar8 + 8 + lVar10 * 0x14);
    *(int *)(uVar8 + 4 + lVar10 * 0x14) = iVar5;
    iVar5 = iVar5 + uVar25;
    *(undefined8 *)(uVar8 + 0xc + lVar10 * 0x14) = 0xffffffffffffffff;
    if (uVar25 == 0) {
      fVar22 = -1.0;
    }
    else if (uVar25 < 0x40) {
      fVar22 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar25 * 4);
    }
    else {
      fVar22 = 1.0 / SQRT((float)uVar25);
      fVar22 = fVar22 + fVar22;
    }
    *(float *)(uVar8 + lVar10 * 0x14) = fVar22;
    *(undefined4 *)(uVar8 + 8 + lVar10 * 0x14) = 0;
  }
  local_300 = 0;
  iVar13 = 0;
  iVar17 = 0;
  if (iVar5 != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(&local_308);
    iVar13 = (int)local_300;
    iVar17 = local_300._4_4_;
  }
  local_300 = CONCAT44(local_300._4_4_,iVar5 + iVar13);
  if (iVar17 < iVar5 + iVar13) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_308);
  }
  uVar16 = local_308;
  _guard_xfg_dispatch_icall_nop((void *)(local_308 + (longlong)iVar13 * 4),0,(longlong)iVar5 << 2);
  plVar9 = local_2d0;
  uVar21 = 0;
  if (uVar24 != 0) {
    do {
      lVar10 = (longlong)(int)uVar21;
      uVar7 = (ulonglong)*(ushort *)(*local_2d0 + lVar10 * 2);
      *(uint *)(uVar16 + (longlong)
                         (*(int *)(uVar8 + 4 + uVar7 * 0x14) + *(int *)(uVar8 + 8 + uVar7 * 0x14)) *
                         4) = uVar21;
      piVar1 = (int *)(uVar8 + 8 + uVar7 * 0x14);
      *piVar1 = *piVar1 + 1;
      uVar7 = (ulonglong)*(ushort *)(*local_2d0 + 2 + lVar10 * 2);
      *(uint *)(uVar16 + (longlong)
                         (*(int *)(uVar8 + 4 + uVar7 * 0x14) + *(int *)(uVar8 + 8 + uVar7 * 0x14)) *
                         4) = uVar21;
      piVar1 = (int *)(uVar8 + 8 + uVar7 * 0x14);
      *piVar1 = *piVar1 + 1;
      uVar7 = (ulonglong)*(ushort *)(*local_2d0 + 4 + lVar10 * 2);
      *(uint *)(uVar16 + (longlong)
                         (*(int *)(uVar8 + 4 + uVar7 * 0x14) + *(int *)(uVar8 + 8 + uVar7 * 0x14)) *
                         4) = uVar21;
      uVar21 = uVar21 + 3;
      piVar1 = (int *)(uVar8 + 8 + uVar7 * 0x14);
      *piVar1 = *piVar1 + 1;
    } while (uVar21 < uVar24);
  }
  local_2e8 = 0;
  uStack_2e0 = 0;
  iVar13 = 0;
  iVar5 = 0;
  if (uVar24 != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_2e8);
    iVar13 = (int)uStack_2e0;
    iVar5 = uStack_2e0._4_4_;
  }
  uStack_2e0 = CONCAT44(uStack_2e0._4_4_,uVar24 + iVar13);
  if (iVar5 < (int)(uVar24 + iVar13)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_2e8);
  }
  _guard_xfg_dispatch_icall_nop((void *)(iVar13 + local_2e8),0,(size_t)puVar15);
  local_2c8 = local_298;
  local_2f0 = local_18c;
  fVar27 = DAT_146ac8854 * 3.0;
  uVar23 = 0;
  uVar21 = 0;
  fVar22 = -1.0;
  local_2b8 = (ulonglong)local_2b8._4_4_ << 0x20;
  local_314 = 0;
  local_2f4 = 0;
  if (local_2f8 != 0) {
    local_2c0 = (uint)param_3;
    do {
      puVar15 = local_2c8;
      if (fVar22 < 0.0) {
        uVar24 = 0;
        do {
          lVar10 = (longlong)(int)uVar24;
          if (*(char *)(lVar10 + local_2e8) == '\0') {
            lVar11 = *plVar9;
            fVar18 = *(float *)(uVar8 + (ulonglong)*(ushort *)(lVar11 + 2 + lVar10 * 2) * 0x14) +
                     *(float *)(uVar8 + (ulonglong)*(ushort *)(lVar11 + lVar10 * 2) * 0x14) +
                     *(float *)(uVar8 + (ulonglong)*(ushort *)(lVar11 + 4 + lVar10 * 2) * 0x14);
            if ((fVar22 < fVar18) &&
               (uVar21 = uVar24, fVar22 = fVar18, local_314 = uVar24, fVar27 <= fVar18)) break;
          }
          uVar24 = uVar24 + 3;
          local_314 = uVar21;
        } while (uVar24 < local_2f8);
      }
      lVar11 = (longlong)(int)uVar21;
      uVar24 = 1;
      *(undefined1 *)(local_2e8 + lVar11) = 1;
      lVar10 = (longlong)(int)local_2f4;
      uVar2 = *(ushort *)(*plVar9 + lVar11 * 2);
      uVar7 = (ulonglong)uVar2;
      *local_2f0 = (uint)uVar2;
      *(ushort *)(*local_2a8 + lVar10 * 2) = uVar2;
      iVar13 = *(int *)(uVar8 + 8 + uVar7 * 0x14);
      *(undefined4 *)(uVar8 + 0x10 + uVar7 * 0x14) = 0;
      if (iVar13 == 1) {
        *(undefined4 *)(uVar8 + 8 + uVar7 * 0x14) = 0;
      }
      else {
        uVar26 = *(uint *)(uVar8 + 4 + uVar7 * 0x14);
        uVar25 = uVar26 + iVar13;
        while ((uVar26 < uVar25 && (*(uint *)(uVar16 + (longlong)(int)uVar26 * 4) != uVar21))) {
          uVar26 = uVar26 + 1;
        }
        if (uVar26 != uVar25 - 1) {
          uVar3 = *(undefined4 *)(uVar16 + (longlong)(int)uVar26 * 4);
          *(undefined4 *)(uVar16 + (longlong)(int)uVar26 * 4) =
               *(undefined4 *)((uVar16 - 4) + (longlong)(int)uVar25 * 4);
          *(undefined4 *)
           ((uVar16 - 4) +
           (longlong)(*(int *)(uVar8 + 4 + uVar7 * 0x14) + *(int *)(uVar8 + 8 + uVar7 * 0x14)) * 4)
               = uVar3;
          iVar13 = *(int *)(uVar8 + 8 + uVar7 * 0x14);
        }
        uVar25 = iVar13 - 1;
        *(uint *)(uVar8 + 8 + uVar7 * 0x14) = uVar25;
        if (uVar25 == 0) {
          fVar22 = -1.0;
        }
        else {
          uVar26 = *(uint *)(uVar8 + 0x10 + uVar7 * 0x14);
          fVar22 = 0.0;
          if (uVar26 < param_3) {
            fVar22 = *(float *)(&DAT_146ac4750 + ((ulonglong)param_3 * 0x40 + (ulonglong)uVar26) * 4
                               );
          }
          if (uVar25 < 0x40) {
            fVar18 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar25 * 4);
          }
          else {
            fVar18 = 1.0 / SQRT((float)uVar25) + 1.0 / SQRT((float)uVar25);
          }
          fVar22 = fVar22 + fVar18;
        }
        *(float *)(uVar8 + uVar7 * 0x14) = fVar22;
      }
      uVar2 = *(ushort *)(*local_2d0 + 2 + lVar11 * 2);
      uVar7 = (ulonglong)uVar2;
      *(ushort *)(*local_2a8 + 2 + lVar10 * 2) = uVar2;
      if (*(int *)(uVar8 + 0x10 + uVar7 * 0x14) == 0) {
LAB_141f0be27:
        uVar26 = *(uint *)(uVar8 + 4 + uVar7 * 0x14);
        iVar13 = *(int *)(uVar8 + 8 + uVar7 * 0x14);
        uVar25 = uVar26 + iVar13;
        while ((uVar26 < uVar25 && (*(uint *)(uVar16 + (longlong)(int)uVar26 * 4) != uVar21))) {
          uVar26 = uVar26 + 1;
        }
        if (uVar26 != uVar25 - 1) {
          uVar3 = *(undefined4 *)(uVar16 + (longlong)(int)uVar26 * 4);
          *(undefined4 *)(uVar16 + (longlong)(int)uVar26 * 4) =
               *(undefined4 *)((uVar16 - 4) + (longlong)(int)uVar25 * 4);
          *(undefined4 *)
           ((uVar16 - 4) +
           (longlong)(*(int *)(uVar8 + 4 + uVar7 * 0x14) + *(int *)(uVar8 + 8 + uVar7 * 0x14)) * 4)
               = uVar3;
          iVar13 = *(int *)(uVar8 + 8 + uVar7 * 0x14);
        }
        uVar25 = iVar13 - 1;
        *(uint *)(uVar8 + 8 + uVar7 * 0x14) = uVar25;
        if (uVar25 == 0) {
          fVar22 = -1.0;
        }
        else {
          uVar26 = *(uint *)(uVar8 + 0x10 + uVar7 * 0x14);
          fVar22 = 0.0;
          if (uVar26 < param_3) {
            fVar22 = *(float *)(&DAT_146ac4750 + ((ulonglong)param_3 * 0x40 + (ulonglong)uVar26) * 4
                               );
          }
          if (uVar25 < 0x40) {
            fVar18 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar25 * 4);
          }
          else {
            fVar18 = 1.0 / SQRT((float)uVar25) + 1.0 / SQRT((float)uVar25);
          }
          fVar22 = fVar22 + fVar18;
        }
        *(float *)(uVar8 + uVar7 * 0x14) = fVar22;
      }
      else {
        *(undefined4 *)(uVar8 + 0x10 + uVar7 * 0x14) = 1;
        uVar24 = 2;
        iVar13 = *(int *)(uVar8 + 8 + uVar7 * 0x14);
        local_2f0[1] = (uint)uVar2;
        if (iVar13 != 1) goto LAB_141f0be27;
        *(undefined4 *)(uVar8 + 8 + uVar7 * 0x14) = 0;
      }
      uVar2 = *(ushort *)(*local_2d0 + 4 + lVar11 * 2);
      uVar7 = (ulonglong)uVar2;
      *(ushort *)(*local_2a8 + 4 + lVar10 * 2) = uVar2;
      if (*(uint *)(uVar8 + 0x10 + uVar7 * 0x14) < uVar24) {
LAB_141f0bf41:
        uVar26 = *(uint *)(uVar8 + 4 + uVar7 * 0x14);
        iVar13 = *(int *)(uVar8 + 8 + uVar7 * 0x14);
        uVar25 = uVar26 + iVar13;
        while ((uVar26 < uVar25 && (*(uint *)(uVar16 + (longlong)(int)uVar26 * 4) != uVar21))) {
          uVar26 = uVar26 + 1;
        }
        if (uVar26 != uVar25 - 1) {
          uVar3 = *(undefined4 *)(uVar16 + (longlong)(int)uVar26 * 4);
          *(undefined4 *)(uVar16 + (longlong)(int)uVar26 * 4) =
               *(undefined4 *)((uVar16 - 4) + (longlong)(int)uVar25 * 4);
          *(undefined4 *)
           ((uVar16 - 4) +
           (longlong)(*(int *)(uVar8 + 4 + uVar7 * 0x14) + *(int *)(uVar8 + 8 + uVar7 * 0x14)) * 4)
               = uVar3;
          iVar13 = *(int *)(uVar8 + 8 + uVar7 * 0x14);
        }
        uVar25 = iVar13 - 1;
        *(uint *)(uVar8 + 8 + uVar7 * 0x14) = uVar25;
        if (uVar25 == 0) {
          fVar22 = -1.0;
        }
        else {
          uVar26 = *(uint *)(uVar8 + 0x10 + uVar7 * 0x14);
          fVar22 = 0.0;
          if (uVar26 < param_3) {
            fVar22 = *(float *)(&DAT_146ac4750 + ((ulonglong)param_3 * 0x40 + (ulonglong)uVar26) * 4
                               );
          }
          if (uVar25 < 0x40) {
            fVar18 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar25 * 4);
          }
          else {
            fVar18 = 1.0 / SQRT((float)uVar25) + 1.0 / SQRT((float)uVar25);
          }
          fVar22 = fVar22 + fVar18;
        }
        *(float *)(uVar8 + uVar7 * 0x14) = fVar22;
      }
      else {
        uVar6 = (ulonglong)uVar24;
        *(uint *)(uVar8 + 0x10 + uVar7 * 0x14) = uVar24;
        uVar24 = uVar24 + 1;
        iVar13 = *(int *)(uVar8 + 8 + uVar7 * 0x14);
        local_2f0[uVar6] = (uint)uVar2;
        if (iVar13 != 1) goto LAB_141f0bf41;
        *(undefined4 *)(uVar8 + 8 + uVar7 * 0x14) = 0;
      }
      uVar25 = 0;
      local_310 = local_2c0;
      if (3 < uVar23) {
        puVar12 = local_2c8 + 2;
        uVar25 = (uVar23 - 4 >> 2) + 1;
        uVar16 = (ulonglong)uVar25;
        uVar25 = uVar25 * 4;
        local_2b0 = (uint *)CONCAT44(local_2b0._4_4_,uVar25);
        do {
          uVar21 = puVar12[-2];
          lVar10 = (longlong)(int)uVar21;
          uVar23 = uVar24;
          if (uVar24 <= *(uint *)(uVar8 + 0x10 + lVar10 * 0x14)) {
            *(uint *)(uVar8 + 0x10 + lVar10 * 0x14) = uVar24;
            uVar23 = uVar24 + 1;
            local_2f0[uVar24] = uVar21;
            uVar21 = *(uint *)(uVar8 + 8 + lVar10 * 0x14);
            if (uVar21 == 0) {
              fVar22 = -1.0;
            }
            else {
              fVar22 = 0.0;
              if (uVar24 < local_318) {
                fVar22 = *(float *)(&DAT_146ac4750 +
                                   ((ulonglong)local_318 * 0x40 + (ulonglong)uVar24) * 4);
              }
              if (uVar21 < 0x40) {
                fVar18 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar21 * 4);
              }
              else {
                fVar18 = 1.0 / SQRT((float)uVar21);
                fVar18 = fVar18 + fVar18;
              }
              fVar22 = fVar22 + fVar18;
            }
            *(float *)(uVar8 + lVar10 * 0x14) = fVar22;
          }
          uVar21 = puVar12[-1];
          lVar10 = (longlong)(int)uVar21;
          uVar26 = uVar23;
          if (uVar23 <= *(uint *)(uVar8 + 0x10 + lVar10 * 0x14)) {
            *(uint *)(uVar8 + 0x10 + lVar10 * 0x14) = uVar23;
            uVar26 = uVar23 + 1;
            local_2f0[uVar23] = uVar21;
            uVar21 = *(uint *)(uVar8 + 8 + lVar10 * 0x14);
            if (uVar21 == 0) {
              fVar22 = -1.0;
            }
            else {
              fVar22 = 0.0;
              if (uVar23 < local_318) {
                fVar22 = *(float *)(&DAT_146ac4750 +
                                   ((ulonglong)local_318 * 0x40 + (ulonglong)uVar23) * 4);
              }
              if (uVar21 < 0x40) {
                fVar18 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar21 * 4);
              }
              else {
                fVar18 = 1.0 / SQRT((float)uVar21);
                fVar18 = fVar18 + fVar18;
              }
              fVar22 = fVar22 + fVar18;
            }
            *(float *)(uVar8 + lVar10 * 0x14) = fVar22;
          }
          uVar21 = *puVar12;
          lVar10 = (longlong)(int)uVar21;
          uVar23 = (uint)local_318;
          uVar24 = uVar26;
          if (uVar26 <= *(uint *)(uVar8 + 0x10 + lVar10 * 0x14)) {
            *(uint *)(uVar8 + 0x10 + lVar10 * 0x14) = uVar26;
            uVar24 = uVar26 + 1;
            local_2f0[uVar26] = uVar21;
            uVar21 = *(uint *)(uVar8 + 8 + lVar10 * 0x14);
            if (uVar21 == 0) {
              fVar22 = -1.0;
            }
            else {
              fVar22 = 0.0;
              if (uVar26 < uVar23) {
                fVar22 = *(float *)(&DAT_146ac4750 +
                                   ((ulonglong)local_318 * 0x40 + (ulonglong)uVar26) * 4);
              }
              if (uVar21 < 0x40) {
                fVar18 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar21 * 4);
              }
              else {
                fVar18 = 1.0 / SQRT((float)uVar21);
                fVar18 = fVar18 + fVar18;
              }
              fVar22 = fVar22 + fVar18;
            }
            *(float *)(uVar8 + lVar10 * 0x14) = fVar22;
          }
          uVar21 = puVar12[1];
          lVar10 = (longlong)(int)uVar21;
          if (uVar24 <= *(uint *)(uVar8 + 0x10 + lVar10 * 0x14)) {
            *(uint *)(uVar8 + 0x10 + lVar10 * 0x14) = uVar24;
            uVar26 = uVar24 + 1;
            local_2f0[uVar24] = uVar21;
            uVar21 = *(uint *)(uVar8 + 8 + lVar10 * 0x14);
            if (uVar21 == 0) {
              *(undefined4 *)(uVar8 + lVar10 * 0x14) = 0xbf800000;
              uVar24 = uVar26;
              uVar23 = local_310;
            }
            else {
              fVar22 = 0.0;
              if (uVar24 < local_310) {
                fVar22 = *(float *)(&DAT_146ac4750 +
                                   ((ulonglong)local_310 * 0x40 + (ulonglong)uVar24) * 4);
              }
              if (uVar21 < 0x40) {
                *(float *)(uVar8 + lVar10 * 0x14) =
                     fVar22 + *(float *)(&DAT_146ac8850 + (ulonglong)uVar21 * 4);
                uVar24 = uVar26;
              }
              else {
                fVar18 = 1.0 / SQRT((float)uVar21);
                *(float *)(uVar8 + lVar10 * 0x14) = fVar22 + fVar18 + fVar18;
                uVar24 = uVar26;
              }
            }
          }
          local_310 = uVar23;
          puVar12 = puVar12 + 4;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
        uVar21 = local_314;
        uVar23 = (uint)local_2b8;
      }
      if (uVar25 < uVar23) {
        uVar16 = (ulonglong)(uVar23 - uVar25);
        local_2c8 = local_2c8 + uVar25;
        do {
          uVar21 = *local_2c8;
          lVar10 = (longlong)(int)uVar21;
          if (uVar24 <= *(uint *)(uVar8 + 0x10 + lVar10 * 0x14)) {
            *(uint *)(uVar8 + 0x10 + lVar10 * 0x14) = uVar24;
            local_2f0[uVar24] = uVar21;
            uVar21 = *(uint *)(uVar8 + 8 + lVar10 * 0x14);
            if (uVar21 == 0) {
              fVar22 = -1.0;
            }
            else {
              fVar22 = 0.0;
              if (uVar24 < local_318) {
                fVar22 = *(float *)(&DAT_146ac4750 +
                                   ((ulonglong)local_318 * 0x40 + (ulonglong)uVar24) * 4);
              }
              if (uVar21 < 0x40) {
                fVar18 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar21 * 4);
              }
              else {
                fVar18 = 1.0 / SQRT((float)uVar21);
                fVar18 = fVar18 + fVar18;
              }
              fVar22 = fVar22 + fVar18;
            }
            *(float *)(uVar8 + lVar10 * 0x14) = fVar22;
            uVar24 = uVar24 + 1;
          }
          local_2c8 = local_2c8 + 1;
          uVar16 = uVar16 - 1;
          uVar21 = local_314;
        } while (uVar16 != 0);
      }
      fVar22 = -1.0;
      if (uVar24 != 0) {
        uVar16 = (ulonglong)uVar24;
        local_2b0 = local_2f0;
        do {
          lVar10 = (longlong)(int)*local_2b0;
          uVar23 = 0;
          uVar21 = *(uint *)(uVar8 + 8 + lVar10 * 0x14);
          *(undefined4 *)(uVar8 + 0xc + lVar10 * 0x14) =
               *(undefined4 *)(uVar8 + 0x10 + lVar10 * 0x14);
          *(undefined4 *)(uVar8 + 0x10 + lVar10 * 0x14) = 0xffffffff;
          if (uVar21 != 0) {
            lVar11 = *local_2d0;
            do {
              uVar25 = *(uint *)(local_308 +
                                (longlong)(int)(*(int *)(uVar8 + 4 + lVar10 * 0x14) + uVar23) * 4);
              lVar14 = (longlong)(int)uVar25;
              fVar18 = *(float *)(uVar8 + (ulonglong)*(ushort *)(lVar11 + 2 + lVar14 * 2) * 0x14) +
                       *(float *)(uVar8 + (ulonglong)*(ushort *)(lVar11 + lVar14 * 2) * 0x14) +
                       *(float *)(uVar8 + (ulonglong)*(ushort *)(lVar11 + 4 + lVar14 * 2) * 0x14);
              if (fVar18 <= fVar22) {
                uVar25 = local_314;
                fVar18 = fVar22;
              }
              fVar22 = fVar18;
              local_314 = uVar25;
              uVar23 = uVar23 + 1;
            } while (uVar23 < uVar21);
          }
          local_2b0 = local_2b0 + 1;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
        local_2b8 = 0;
        uVar21 = local_314;
      }
      uVar23 = local_310;
      if (uVar24 <= local_310) {
        uVar23 = uVar24;
      }
      local_2c8 = local_2f0;
      local_2f4 = local_2f4 + 3;
      local_2f0 = puVar15;
      local_2b8 = CONCAT44(local_2b8._4_4_,uVar23);
      plVar9 = local_2d0;
      uVar16 = local_308;
      param_3 = local_318;
    } while (local_2f4 < local_2f8);
  }
  if (local_2e8 != 0) {
    FMemory::Free(local_2e8);
  }
  if (uVar16 != 0) {
    FMemory::Free(uVar16);
  }
  if (uVar8 != 0) {
    FMemory::Free(uVar8);
  }
  return;
}



// FUNCTION 141f0c4f0 FUN_141f0c4f0 body=3776 status=ok
// SIG undefined FUN_141f0c4f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f0c4f0(longlong *param_1,longlong *param_2,ushort param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  int *piVar17;
  ulonglong uVar18;
  int iVar19;
  float fVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  undefined1 auStack_338 [32];
  ushort local_318;
  uint local_314;
  uint local_310;
  ulonglong local_308;
  undefined8 local_300;
  uint local_2f8;
  uint local_2f4;
  undefined8 local_2f0;
  longlong *local_2e8;
  longlong local_2e0;
  undefined8 uStack_2d8;
  uint local_2c8;
  int *local_2c0;
  longlong *local_2b8;
  int *local_2b0;
  int *local_2a8;
  int local_298 [67];
  int local_18c [69];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  local_2f8 = *(uint *)(param_1 + 1);
  uVar9 = 0;
  iVar15 = 0;
  if (local_2f8 != 0) {
    uVar18 = uVar9;
    uVar16 = uVar9;
    if ((7 < local_2f8) && (uVar18 = 0, uVar16 = 0, 1 < DAT_1468387b0)) {
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      uVar25 = 0;
      uVar27 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar16 = uVar9;
      do {
        iVar15 = (int)uVar16;
        uVar16 = (ulonglong)(iVar15 + 8U);
        puVar1 = (uint *)(*param_1 + (longlong)iVar15 * 4);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        uVar21 = (uVar21 < uVar3) * uVar3 | (uVar21 >= uVar3) * uVar21;
        uVar22 = (uVar22 < uVar4) * uVar4 | (uVar22 >= uVar4) * uVar22;
        uVar23 = (uVar23 < uVar5) * uVar5 | (uVar23 >= uVar5) * uVar23;
        uVar24 = (uVar24 < uVar6) * uVar6 | (uVar24 >= uVar6) * uVar24;
        puVar1 = (uint *)(*param_1 + 0x10 + (longlong)iVar15 * 4);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        uVar25 = (uVar25 < uVar3) * uVar3 | (uVar25 >= uVar3) * uVar25;
        uVar27 = (uVar27 < uVar4) * uVar4 | (uVar27 >= uVar4) * uVar27;
        uVar28 = (uVar28 < uVar5) * uVar5 | (uVar28 >= uVar5) * uVar28;
        uVar29 = (uVar29 < uVar6) * uVar6 | (uVar29 >= uVar6) * uVar29;
      } while (iVar15 + 8U < local_2f8 - (local_2f8 & 7));
      uVar21 = (uVar21 < uVar25) * uVar25 | (uVar21 >= uVar25) * uVar21;
      uVar22 = (uVar22 < uVar27) * uVar27 | (uVar22 >= uVar27) * uVar22;
      uVar23 = (uVar23 < uVar28) * uVar28 | (uVar23 >= uVar28) * uVar23;
      uVar24 = (uVar24 < uVar29) * uVar29 | (uVar24 >= uVar29) * uVar24;
      uVar21 = (uVar21 < uVar23) * uVar23 | (uVar21 >= uVar23) * uVar21;
      uVar22 = (uVar22 < uVar24) * uVar24 | (uVar22 >= uVar24) * uVar22;
      uVar18 = (ulonglong)((uVar21 < uVar22) * uVar22 | (uVar21 >= uVar22) * uVar21);
    }
    iVar15 = (int)uVar18;
    if ((uint)uVar16 < local_2f8) {
      do {
        iVar7 = (int)uVar16;
        if ((uint)uVar18 <= *(uint *)(*param_1 + (longlong)iVar7 * 4)) {
          uVar18 = (ulonglong)*(uint *)(*param_1 + (longlong)iVar7 * 4);
        }
        iVar15 = (int)uVar18;
        uVar16 = (ulonglong)(iVar7 + 1U);
      } while (iVar7 + 1U < local_2f8);
    }
  }
  local_300 = 0;
  local_308 = 0;
  uVar21 = iVar15 + 1;
  local_318 = param_3;
  local_2e8 = param_1;
  local_2b8 = param_2;
  if (uVar21 != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
              (&local_308);
    uVar18 = (ulonglong)uVar21;
    uVar9 = local_308;
    do {
      lVar11 = (longlong)(int)local_300;
      local_2e0 = 0;
      uStack_2d8 = 0;
      iVar7 = (int)local_300 + 1;
      local_300 = CONCAT44(local_300._4_4_,iVar7);
      if (local_300._4_4_ < iVar7) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
        ResizeGrow(&local_308);
        uVar9 = local_308;
      }
      plVar10 = (longlong *)(uVar9 + lVar11 * 0x14);
      *plVar10 = local_2e0;
      plVar10[1] = uStack_2d8;
      *(undefined4 *)(uVar9 + 0x10 + lVar11 * 0x14) = 0;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  uVar23 = local_2f8;
  uVar22 = *(uint *)((longlong)param_2 + 0xc);
  iVar7 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (uVar22 != local_2f8) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_2);
    uVar22 = *(uint *)((longlong)param_2 + 0xc);
    iVar7 = (int)param_2[1];
  }
  *(uint *)(param_2 + 1) = iVar7 + uVar23;
  if ((int)uVar22 < (int)(iVar7 + uVar23)) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2);
  }
  piVar17 = (int *)(longlong)(int)uVar23;
  local_2a8 = piVar17;
  _guard_xfg_dispatch_icall_nop((void *)(*local_2b8 + (longlong)iVar7 * 4),0,(longlong)piVar17 * 4);
  uVar22 = 0;
  if (uVar23 != 0) {
    do {
      lVar11 = (longlong)(int)uVar22;
      uVar22 = uVar22 + 1;
      piVar13 = (int *)(uVar9 + 8 + (longlong)*(int *)(*param_1 + lVar11 * 4) * 0x14);
      *piVar13 = *piVar13 + 1;
    } while (uVar22 < uVar23);
  }
  iVar7 = 0;
  local_2e0 = 0;
  uVar22 = 0;
  if (3 < uVar21) {
    uVar18 = (ulonglong)param_3;
    do {
      lVar11 = (longlong)(int)uVar22;
      *(undefined8 *)(uVar9 + 0xc + lVar11 * 0x14) = 0xffffffffffffffff;
      *(int *)(uVar9 + 4 + lVar11 * 0x14) = iVar7;
      uVar23 = *(uint *)(uVar9 + 8 + lVar11 * 0x14);
      uVar24 = (uint)param_3;
      if (uVar23 == 0) {
        fVar26 = -1.0;
      }
      else {
        uVar25 = *(uint *)(uVar9 + 0xc + lVar11 * 0x14);
        fVar26 = 0.0;
        if (uVar25 < uVar24) {
          fVar26 = *(float *)(&DAT_146ac4750 + (uVar18 * 0x40 + (ulonglong)uVar25) * 4);
        }
        if (uVar23 < 0x40) {
          fVar30 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar23 * 4);
        }
        else {
          fVar30 = 1.0 / SQRT((float)uVar23);
          fVar30 = fVar30 + fVar30;
        }
        fVar26 = fVar26 + fVar30;
      }
      *(float *)(uVar9 + lVar11 * 0x14) = fVar26;
      *(undefined4 *)(uVar9 + 8 + lVar11 * 0x14) = 0;
      *(undefined8 *)(uVar9 + 0x20 + lVar11 * 0x14) = 0xffffffffffffffff;
      *(uint *)(uVar9 + 0x18 + lVar11 * 0x14) = iVar7 + uVar23;
      uVar25 = *(uint *)(uVar9 + 0x1c + lVar11 * 0x14);
      iVar7 = iVar7 + uVar23 + uVar25;
      if (uVar25 == 0) {
        fVar26 = -1.0;
      }
      else {
        uVar23 = *(uint *)(uVar9 + 0x20 + lVar11 * 0x14);
        fVar26 = 0.0;
        if (uVar23 < uVar24) {
          fVar26 = *(float *)(&DAT_146ac4750 + (uVar18 * 0x40 + (ulonglong)uVar23) * 4);
        }
        if (uVar25 < 0x40) {
          fVar30 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar25 * 4);
        }
        else {
          fVar30 = 1.0 / SQRT((float)uVar25);
          fVar30 = fVar30 + fVar30;
        }
        fVar26 = fVar26 + fVar30;
      }
      *(float *)(uVar9 + 0x14 + lVar11 * 0x14) = fVar26;
      *(undefined4 *)(uVar9 + 0x1c + lVar11 * 0x14) = 0;
      *(undefined8 *)(uVar9 + 0x34 + lVar11 * 0x14) = 0xffffffffffffffff;
      *(int *)(uVar9 + 0x2c + lVar11 * 0x14) = iVar7;
      uVar23 = *(uint *)(uVar9 + 0x30 + lVar11 * 0x14);
      iVar7 = iVar7 + uVar23;
      if (uVar23 == 0) {
        fVar26 = -1.0;
      }
      else {
        uVar25 = *(uint *)(uVar9 + 0x34 + lVar11 * 0x14);
        fVar26 = 0.0;
        if (uVar25 < uVar24) {
          fVar26 = *(float *)(&DAT_146ac4750 + (uVar18 * 0x40 + (ulonglong)uVar25) * 4);
        }
        if (uVar23 < 0x40) {
          fVar30 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar23 * 4);
        }
        else {
          fVar30 = 1.0 / SQRT((float)uVar23);
          fVar30 = fVar30 + fVar30;
        }
        fVar26 = fVar26 + fVar30;
      }
      *(float *)(uVar9 + 0x28 + lVar11 * 0x14) = fVar26;
      *(undefined4 *)(uVar9 + 0x30 + lVar11 * 0x14) = 0;
      *(undefined8 *)(uVar9 + 0x48 + lVar11 * 0x14) = 0xffffffffffffffff;
      *(int *)(uVar9 + 0x40 + lVar11 * 0x14) = iVar7;
      uVar23 = *(uint *)(uVar9 + 0x44 + lVar11 * 0x14);
      iVar7 = iVar7 + uVar23;
      if (uVar23 == 0) {
        fVar26 = -1.0;
      }
      else {
        uVar25 = *(uint *)(uVar9 + 0x48 + lVar11 * 0x14);
        fVar26 = 0.0;
        if (uVar25 < uVar24) {
          fVar26 = *(float *)(&DAT_146ac4750 + (uVar18 * 0x40 + (ulonglong)uVar25) * 4);
        }
        if (uVar23 < 0x40) {
          fVar30 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar23 * 4);
        }
        else {
          fVar30 = 1.0 / SQRT((float)uVar23);
          fVar30 = fVar30 + fVar30;
        }
        fVar26 = fVar26 + fVar30;
      }
      uVar22 = uVar22 + 4;
      *(float *)(uVar9 + 0x3c + lVar11 * 0x14) = fVar26;
      *(undefined4 *)(uVar9 + 0x44 + lVar11 * 0x14) = 0;
      uVar23 = local_2f8;
      piVar17 = local_2a8;
    } while (uVar22 < iVar15 - 2U);
  }
  for (; uVar22 < uVar21; uVar22 = uVar22 + 1) {
    lVar11 = (longlong)(int)uVar22;
    uVar24 = *(uint *)(uVar9 + 8 + lVar11 * 0x14);
    *(int *)(uVar9 + 4 + lVar11 * 0x14) = iVar7;
    iVar7 = iVar7 + uVar24;
    *(undefined8 *)(uVar9 + 0xc + lVar11 * 0x14) = 0xffffffffffffffff;
    if (uVar24 == 0) {
      fVar26 = -1.0;
    }
    else if (uVar24 < 0x40) {
      fVar26 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar24 * 4);
    }
    else {
      fVar26 = 1.0 / SQRT((float)uVar24);
      fVar26 = fVar26 + fVar26;
    }
    *(float *)(uVar9 + lVar11 * 0x14) = fVar26;
    *(undefined4 *)(uVar9 + 8 + lVar11 * 0x14) = 0;
  }
  uStack_2d8 = 0;
  iVar15 = 0;
  iVar19 = 0;
  if (iVar7 != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(&local_2e0);
    iVar15 = (int)uStack_2d8;
    iVar19 = uStack_2d8._4_4_;
  }
  uStack_2d8 = CONCAT44(uStack_2d8._4_4_,iVar7 + iVar15);
  if (iVar19 < iVar7 + iVar15) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_2e0);
  }
  lVar11 = local_2e0;
  _guard_xfg_dispatch_icall_nop((void *)(local_2e0 + (longlong)iVar15 * 4),0,(longlong)iVar7 << 2);
  plVar10 = local_2e8;
  uVar21 = 0;
  if (uVar23 != 0) {
    do {
      lVar14 = (longlong)(int)uVar21;
      lVar8 = (longlong)*(int *)(*local_2e8 + lVar14 * 4);
      *(uint *)(lVar11 + (longlong)
                         (*(int *)(uVar9 + 4 + lVar8 * 0x14) + *(int *)(uVar9 + 8 + lVar8 * 0x14)) *
                         4) = uVar21;
      piVar13 = (int *)(uVar9 + 8 + lVar8 * 0x14);
      *piVar13 = *piVar13 + 1;
      lVar8 = (longlong)*(int *)(*local_2e8 + 4 + lVar14 * 4);
      *(uint *)(lVar11 + (longlong)
                         (*(int *)(uVar9 + 4 + lVar8 * 0x14) + *(int *)(uVar9 + 8 + lVar8 * 0x14)) *
                         4) = uVar21;
      piVar13 = (int *)(uVar9 + 8 + lVar8 * 0x14);
      *piVar13 = *piVar13 + 1;
      lVar8 = (longlong)*(int *)(*local_2e8 + 8 + lVar14 * 4);
      *(uint *)(lVar11 + (longlong)
                         (*(int *)(uVar9 + 4 + lVar8 * 0x14) + *(int *)(uVar9 + 8 + lVar8 * 0x14)) *
                         4) = uVar21;
      uVar21 = uVar21 + 3;
      piVar13 = (int *)(uVar9 + 8 + lVar8 * 0x14);
      *piVar13 = *piVar13 + 1;
    } while (uVar21 < uVar23);
  }
  local_308 = 0;
  local_300 = 0;
  iVar15 = 0;
  iVar7 = 0;
  if (uVar23 != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_308);
    iVar15 = (int)local_300;
    iVar7 = local_300._4_4_;
  }
  local_300 = CONCAT44(local_300._4_4_,uVar23 + iVar15);
  if (iVar7 < (int)(uVar23 + iVar15)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_308);
  }
  uVar18 = local_308;
  _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar15 + local_308),0,(size_t)piVar17);
  local_2a8 = local_18c;
  fVar30 = DAT_146ac8854 * 3.0;
  uVar21 = 0;
  fVar26 = -1.0;
  local_2f0 = (ulonglong)local_2f0._4_4_ << 0x20;
  local_314 = 0;
  local_2f4 = 0;
  local_2b0 = local_298;
  if (local_2f8 != 0) {
    local_2c8 = (uint)param_3;
    do {
      piVar17 = local_2a8;
      if (fVar26 < 0.0) {
        uVar22 = 0;
        do {
          lVar8 = (longlong)(int)uVar22;
          if (*(char *)(lVar8 + uVar18) == '\0') {
            lVar14 = *plVar10;
            fVar20 = *(float *)(uVar9 + (longlong)*(int *)(lVar14 + 4 + lVar8 * 4) * 0x14) +
                     *(float *)(uVar9 + (longlong)*(int *)(lVar14 + lVar8 * 4) * 0x14) +
                     *(float *)(uVar9 + (longlong)*(int *)(lVar14 + 8 + lVar8 * 4) * 0x14);
            if ((fVar26 < fVar20) &&
               (fVar26 = fVar20, uVar21 = uVar22, local_314 = uVar22, fVar30 <= fVar20)) break;
          }
          uVar22 = uVar22 + 3;
          local_314 = uVar21;
        } while (uVar22 < local_2f8);
      }
      lVar12 = (longlong)(int)uVar21;
      uVar22 = 1;
      *(undefined1 *)(local_308 + lVar12) = 1;
      lVar14 = (longlong)(int)local_2f4;
      iVar15 = *(int *)(*plVar10 + lVar12 * 4);
      lVar8 = (longlong)iVar15;
      *local_2a8 = iVar15;
      *(int *)(*local_2b8 + lVar14 * 4) = iVar15;
      iVar15 = *(int *)(uVar9 + 8 + lVar8 * 0x14);
      *(undefined4 *)(uVar9 + 0x10 + lVar8 * 0x14) = 0;
      if (iVar15 == 1) {
        *(undefined4 *)(uVar9 + 8 + lVar8 * 0x14) = 0;
      }
      else {
        uVar24 = *(uint *)(uVar9 + 4 + lVar8 * 0x14);
        uVar23 = uVar24 + iVar15;
        while ((uVar24 < uVar23 && (*(uint *)(lVar11 + (longlong)(int)uVar24 * 4) != uVar21))) {
          uVar24 = uVar24 + 1;
        }
        if (uVar24 != uVar23 - 1) {
          uVar2 = *(undefined4 *)(lVar11 + (longlong)(int)uVar24 * 4);
          *(undefined4 *)(lVar11 + (longlong)(int)uVar24 * 4) =
               *(undefined4 *)(lVar11 + -4 + (longlong)(int)uVar23 * 4);
          *(undefined4 *)
           (lVar11 + -4 +
           (longlong)(*(int *)(uVar9 + 4 + lVar8 * 0x14) + *(int *)(uVar9 + 8 + lVar8 * 0x14)) * 4)
               = uVar2;
          iVar15 = *(int *)(uVar9 + 8 + lVar8 * 0x14);
        }
        uVar23 = iVar15 - 1;
        *(uint *)(uVar9 + 8 + lVar8 * 0x14) = uVar23;
        if (uVar23 == 0) {
          fVar26 = -1.0;
        }
        else {
          uVar24 = *(uint *)(uVar9 + 0x10 + lVar8 * 0x14);
          fVar26 = 0.0;
          if (uVar24 < param_3) {
            fVar26 = *(float *)(&DAT_146ac4750 + ((ulonglong)param_3 * 0x40 + (ulonglong)uVar24) * 4
                               );
          }
          if (uVar23 < 0x40) {
            fVar20 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar23 * 4);
          }
          else {
            fVar20 = 1.0 / SQRT((float)uVar23) + 1.0 / SQRT((float)uVar23);
          }
          fVar26 = fVar26 + fVar20;
        }
        *(float *)(uVar9 + lVar8 * 0x14) = fVar26;
      }
      iVar15 = *(int *)(*local_2e8 + 4 + lVar12 * 4);
      lVar8 = (longlong)iVar15;
      *(int *)(*local_2b8 + 4 + lVar14 * 4) = iVar15;
      if (*(int *)(uVar9 + 0x10 + lVar8 * 0x14) == 0) {
LAB_141f0ccf8:
        uVar24 = *(uint *)(uVar9 + 4 + lVar8 * 0x14);
        iVar15 = *(int *)(uVar9 + 8 + lVar8 * 0x14);
        uVar23 = uVar24 + iVar15;
        while ((uVar24 < uVar23 && (*(uint *)(lVar11 + (longlong)(int)uVar24 * 4) != uVar21))) {
          uVar24 = uVar24 + 1;
        }
        if (uVar24 != uVar23 - 1) {
          uVar2 = *(undefined4 *)(lVar11 + (longlong)(int)uVar24 * 4);
          *(undefined4 *)(lVar11 + (longlong)(int)uVar24 * 4) =
               *(undefined4 *)(lVar11 + -4 + (longlong)(int)uVar23 * 4);
          *(undefined4 *)
           (lVar11 + -4 +
           (longlong)(*(int *)(uVar9 + 4 + lVar8 * 0x14) + *(int *)(uVar9 + 8 + lVar8 * 0x14)) * 4)
               = uVar2;
          iVar15 = *(int *)(uVar9 + 8 + lVar8 * 0x14);
        }
        uVar23 = iVar15 - 1;
        *(uint *)(uVar9 + 8 + lVar8 * 0x14) = uVar23;
        if (uVar23 == 0) {
          fVar26 = -1.0;
        }
        else {
          uVar24 = *(uint *)(uVar9 + 0x10 + lVar8 * 0x14);
          fVar26 = 0.0;
          if (uVar24 < param_3) {
            fVar26 = *(float *)(&DAT_146ac4750 + ((ulonglong)param_3 * 0x40 + (ulonglong)uVar24) * 4
                               );
          }
          if (uVar23 < 0x40) {
            fVar20 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar23 * 4);
          }
          else {
            fVar20 = 1.0 / SQRT((float)uVar23) + 1.0 / SQRT((float)uVar23);
          }
          fVar26 = fVar26 + fVar20;
        }
        *(float *)(uVar9 + lVar8 * 0x14) = fVar26;
      }
      else {
        *(undefined4 *)(uVar9 + 0x10 + lVar8 * 0x14) = 1;
        uVar22 = 2;
        iVar7 = *(int *)(uVar9 + 8 + lVar8 * 0x14);
        local_2a8[1] = iVar15;
        if (iVar7 != 1) goto LAB_141f0ccf8;
        *(undefined4 *)(uVar9 + 8 + lVar8 * 0x14) = 0;
      }
      iVar15 = *(int *)(*local_2e8 + 8 + lVar12 * 4);
      lVar8 = (longlong)iVar15;
      *(int *)(*local_2b8 + 8 + lVar14 * 4) = iVar15;
      if (*(uint *)(uVar9 + 0x10 + lVar8 * 0x14) < uVar22) {
LAB_141f0ce08:
        uVar24 = *(uint *)(uVar9 + 4 + lVar8 * 0x14);
        iVar15 = *(int *)(uVar9 + 8 + lVar8 * 0x14);
        uVar23 = uVar24 + iVar15;
        while ((uVar24 < uVar23 && (*(uint *)(lVar11 + (longlong)(int)uVar24 * 4) != uVar21))) {
          uVar24 = uVar24 + 1;
        }
        if (uVar24 != uVar23 - 1) {
          uVar2 = *(undefined4 *)(lVar11 + (longlong)(int)uVar24 * 4);
          *(undefined4 *)(lVar11 + (longlong)(int)uVar24 * 4) =
               *(undefined4 *)(lVar11 + -4 + (longlong)(int)uVar23 * 4);
          *(undefined4 *)
           (lVar11 + -4 +
           (longlong)(*(int *)(uVar9 + 4 + lVar8 * 0x14) + *(int *)(uVar9 + 8 + lVar8 * 0x14)) * 4)
               = uVar2;
          iVar15 = *(int *)(uVar9 + 8 + lVar8 * 0x14);
        }
        uVar23 = iVar15 - 1;
        *(uint *)(uVar9 + 8 + lVar8 * 0x14) = uVar23;
        if (uVar23 == 0) {
          fVar26 = -1.0;
        }
        else {
          uVar24 = *(uint *)(uVar9 + 0x10 + lVar8 * 0x14);
          fVar26 = 0.0;
          if (uVar24 < param_3) {
            fVar26 = *(float *)(&DAT_146ac4750 + ((ulonglong)param_3 * 0x40 + (ulonglong)uVar24) * 4
                               );
          }
          if (uVar23 < 0x40) {
            fVar20 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar23 * 4);
          }
          else {
            fVar20 = 1.0 / SQRT((float)uVar23) + 1.0 / SQRT((float)uVar23);
          }
          fVar26 = fVar26 + fVar20;
        }
        *(float *)(uVar9 + lVar8 * 0x14) = fVar26;
      }
      else {
        uVar18 = (ulonglong)uVar22;
        *(uint *)(uVar9 + 0x10 + lVar8 * 0x14) = uVar22;
        uVar22 = uVar22 + 1;
        iVar7 = *(int *)(uVar9 + 8 + lVar8 * 0x14);
        local_2a8[uVar18] = iVar15;
        if (iVar7 != 1) goto LAB_141f0ce08;
        *(undefined4 *)(uVar9 + 8 + lVar8 * 0x14) = 0;
      }
      uVar23 = 0;
      local_310 = local_2c8;
      if (3 < (uint)local_2f0) {
        piVar13 = local_2b0 + 2;
        uVar23 = ((uint)local_2f0 - 4 >> 2) + 1;
        uVar18 = (ulonglong)uVar23;
        uVar23 = uVar23 * 4;
        local_2c0 = (int *)CONCAT44(local_2c0._4_4_,uVar23);
        do {
          uVar24 = (uint)local_318;
          iVar15 = piVar13[-2];
          lVar11 = (longlong)iVar15;
          uVar21 = uVar22;
          if (uVar22 <= *(uint *)(uVar9 + 0x10 + lVar11 * 0x14)) {
            *(uint *)(uVar9 + 0x10 + lVar11 * 0x14) = uVar22;
            uVar21 = uVar22 + 1;
            local_2a8[uVar22] = iVar15;
            uVar25 = *(uint *)(uVar9 + 8 + lVar11 * 0x14);
            if (uVar25 == 0) {
              fVar26 = -1.0;
            }
            else {
              fVar26 = 0.0;
              if (uVar22 < local_318) {
                fVar26 = *(float *)(&DAT_146ac4750 +
                                   ((ulonglong)local_318 * 0x40 + (ulonglong)uVar22) * 4);
              }
              if (uVar25 < 0x40) {
                fVar20 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar25 * 4);
              }
              else {
                fVar20 = 1.0 / SQRT((float)uVar25);
                fVar20 = fVar20 + fVar20;
              }
              fVar26 = fVar26 + fVar20;
            }
            *(float *)(uVar9 + lVar11 * 0x14) = fVar26;
          }
          iVar15 = piVar13[-1];
          lVar11 = (longlong)iVar15;
          uVar25 = uVar21;
          if (uVar21 <= *(uint *)(uVar9 + 0x10 + lVar11 * 0x14)) {
            *(uint *)(uVar9 + 0x10 + lVar11 * 0x14) = uVar21;
            uVar25 = uVar21 + 1;
            local_2a8[uVar21] = iVar15;
            uVar22 = *(uint *)(uVar9 + 8 + lVar11 * 0x14);
            if (uVar22 == 0) {
              fVar26 = -1.0;
            }
            else {
              fVar26 = 0.0;
              if (uVar21 < local_318) {
                fVar26 = *(float *)(&DAT_146ac4750 +
                                   ((ulonglong)local_318 * 0x40 + (ulonglong)uVar21) * 4);
              }
              if (uVar22 < 0x40) {
                fVar20 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar22 * 4);
              }
              else {
                fVar20 = 1.0 / SQRT((float)uVar22);
                fVar20 = fVar20 + fVar20;
              }
              fVar26 = fVar26 + fVar20;
            }
            *(float *)(uVar9 + lVar11 * 0x14) = fVar26;
          }
          iVar15 = *piVar13;
          lVar11 = (longlong)iVar15;
          uVar22 = uVar25;
          if (uVar25 <= *(uint *)(uVar9 + 0x10 + lVar11 * 0x14)) {
            *(uint *)(uVar9 + 0x10 + lVar11 * 0x14) = uVar25;
            uVar22 = uVar25 + 1;
            local_2a8[uVar25] = iVar15;
            uVar21 = *(uint *)(uVar9 + 8 + lVar11 * 0x14);
            if (uVar21 == 0) {
              fVar26 = -1.0;
            }
            else {
              fVar26 = 0.0;
              if (uVar25 < uVar24) {
                fVar26 = *(float *)(&DAT_146ac4750 +
                                   ((ulonglong)uVar24 * 0x40 + (ulonglong)uVar25) * 4);
              }
              if (uVar21 < 0x40) {
                fVar20 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar21 * 4);
              }
              else {
                fVar20 = 1.0 / SQRT((float)uVar21);
                fVar20 = fVar20 + fVar20;
              }
              fVar26 = fVar26 + fVar20;
            }
            *(float *)(uVar9 + lVar11 * 0x14) = fVar26;
          }
          iVar15 = piVar13[1];
          lVar11 = (longlong)iVar15;
          if (uVar22 <= *(uint *)(uVar9 + 0x10 + lVar11 * 0x14)) {
            *(uint *)(uVar9 + 0x10 + lVar11 * 0x14) = uVar22;
            uVar25 = uVar22 + 1;
            local_2a8[uVar22] = iVar15;
            uVar21 = *(uint *)(uVar9 + 8 + lVar11 * 0x14);
            if (uVar21 == 0) {
              *(undefined4 *)(uVar9 + lVar11 * 0x14) = 0xbf800000;
              uVar22 = uVar25;
              uVar24 = local_310;
            }
            else {
              fVar26 = 0.0;
              if (uVar22 < local_310) {
                fVar26 = *(float *)(&DAT_146ac4750 +
                                   ((ulonglong)local_310 * 0x40 + (ulonglong)uVar22) * 4);
              }
              if (uVar21 < 0x40) {
                *(float *)(uVar9 + lVar11 * 0x14) =
                     fVar26 + *(float *)(&DAT_146ac8850 + (ulonglong)uVar21 * 4);
                uVar22 = uVar25;
              }
              else {
                fVar20 = 1.0 / SQRT((float)uVar21);
                *(float *)(uVar9 + lVar11 * 0x14) = fVar26 + fVar20 + fVar20;
                uVar22 = uVar25;
              }
            }
          }
          local_310 = uVar24;
          piVar13 = piVar13 + 4;
          uVar18 = uVar18 - 1;
          uVar21 = local_314;
        } while (uVar18 != 0);
      }
      if (uVar23 < (uint)local_2f0) {
        uVar18 = (ulonglong)((uint)local_2f0 - uVar23);
        piVar13 = local_2b0 + uVar23;
        do {
          iVar15 = *piVar13;
          lVar11 = (longlong)iVar15;
          if (uVar22 <= *(uint *)(uVar9 + 0x10 + lVar11 * 0x14)) {
            *(uint *)(uVar9 + 0x10 + lVar11 * 0x14) = uVar22;
            local_2a8[uVar22] = iVar15;
            uVar21 = *(uint *)(uVar9 + 8 + lVar11 * 0x14);
            if (uVar21 == 0) {
              fVar26 = -1.0;
            }
            else {
              fVar26 = 0.0;
              if (uVar22 < local_318) {
                fVar26 = *(float *)(&DAT_146ac4750 +
                                   ((ulonglong)local_318 * 0x40 + (ulonglong)uVar22) * 4);
              }
              if (uVar21 < 0x40) {
                fVar20 = *(float *)(&DAT_146ac8850 + (ulonglong)uVar21 * 4);
              }
              else {
                fVar20 = 1.0 / SQRT((float)uVar21);
                fVar20 = fVar20 + fVar20;
              }
              fVar26 = fVar26 + fVar20;
            }
            *(float *)(uVar9 + lVar11 * 0x14) = fVar26;
            uVar22 = uVar22 + 1;
          }
          piVar13 = piVar13 + 1;
          uVar18 = uVar18 - 1;
          uVar21 = local_314;
        } while (uVar18 != 0);
      }
      fVar26 = -1.0;
      if (uVar22 != 0) {
        uVar18 = (ulonglong)uVar22;
        do {
          lVar11 = (longlong)*local_2a8;
          uVar23 = 0;
          uVar21 = *(uint *)(uVar9 + 8 + lVar11 * 0x14);
          *(undefined4 *)(uVar9 + 0xc + lVar11 * 0x14) =
               *(undefined4 *)(uVar9 + 0x10 + lVar11 * 0x14);
          *(undefined4 *)(uVar9 + 0x10 + lVar11 * 0x14) = 0xffffffff;
          if (uVar21 != 0) {
            lVar8 = *local_2e8;
            do {
              uVar24 = *(uint *)(local_2e0 +
                                (longlong)(int)(*(int *)(uVar9 + 4 + lVar11 * 0x14) + uVar23) * 4);
              lVar14 = (longlong)(int)uVar24;
              fVar20 = *(float *)(uVar9 + (longlong)*(int *)(lVar8 + 4 + lVar14 * 4) * 0x14) +
                       *(float *)(uVar9 + (longlong)*(int *)(lVar8 + lVar14 * 4) * 0x14) +
                       *(float *)(uVar9 + (longlong)*(int *)(lVar8 + 8 + lVar14 * 4) * 0x14);
              if (fVar20 <= fVar26) {
                uVar24 = local_314;
                fVar20 = fVar26;
              }
              fVar26 = fVar20;
              local_314 = uVar24;
              uVar23 = uVar23 + 1;
            } while (uVar23 < uVar21);
          }
          local_2a8 = local_2a8 + 1;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
        local_2f0 = 0;
        uVar21 = local_314;
        local_2c0 = local_2a8;
      }
      local_2a8 = local_2b0;
      uVar23 = local_310;
      if (uVar22 <= local_310) {
        uVar23 = uVar22;
      }
      local_2f4 = local_2f4 + 3;
      local_2f0 = CONCAT44(local_2f0._4_4_,uVar23);
      plVar10 = local_2e8;
      uVar18 = local_308;
      lVar11 = local_2e0;
      param_3 = local_318;
      local_2b0 = piVar17;
    } while (local_2f4 < local_2f8);
  }
  if (uVar18 != 0) {
    FMemory::Free(uVar18);
  }
  if (lVar11 != 0) {
    FMemory::Free(lVar11);
  }
  if (uVar9 != 0) {
    FMemory::Free(uVar9);
  }
  return;
}



// FUNCTION 141f0d3b0 SetUniformBufferParameter<FRHIVertexShader_*,FLandscapeUniformShaderParameters,FRHICommandList> body=179 status=ok
// SIG undefined SetUniformBufferParameter<FRHIVertexShader_*,FLandscapeUniformShaderParameters,FRHICommandList>(void)

void SetUniformBufferParameter<FRHIVertexShader_*,FLandscapeUniformShaderParameters,FRHICommandList>
               (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_3 + 6) != '\0') {
    uVar2 = *(undefined8 *)(param_4 + 0x38);
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



// FUNCTION 141f0d470 FUN_141f0d470 body=3288 status=ok
// SIG undefined FUN_141f0d470(void)

undefined8 * FUN_141f0d470(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  void *_Src;
  int *piVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  byte bVar17;
  uint uVar18;
  ulonglong *puVar19;
  longlong lVar20;
  undefined8 *puVar21;
  float *pfVar22;
  longlong lVar23;
  char cVar24;
  int iVar25;
  longlong *plVar26;
  longlong *plVar27;
  longlong *plVar28;
  char cVar29;
  undefined1 uVar30;
  char cVar31;
  int iVar32;
  int iVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined8 local_res8;
  longlong local_res10;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  float local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  FUN_14271d7c0(param_1,param_2,DAT_146ac8b20);
  iVar25 = *(int *)(param_2 + 0x6f8);
  puVar19 = (ulonglong *)FUN_141ef85c0(param_2,&local_res10);
  uVar10 = *puVar19;
  local_res8._4_4_ = (int)(uVar10 >> 0x20);
  lVar20 = (longlong)local_res8._4_4_;
  local_res8 = CONCAT44(local_res8._4_4_ / iVar25,
                        (int)((longlong)
                              ((ulonglong)(uint)((int)uVar10 >> 0x1f) << 0x20 | uVar10 & 0xffffffff)
                             / (longlong)iVar25));
  lVar20 = USignificanceManager::GetWorld(param_2,lVar20 % (longlong)iVar25 & 0xffffffff);
  uVar14 = *(undefined8 *)(lVar20 + 0x460);
  uVar15 = *(undefined8 *)(lVar20 + 0x468);
  lVar20 = *(longlong *)(param_2 + 0x120);
  if (lVar20 == 0) {
    lVar20 = FUN_1423407b0(param_2);
  }
  uVar30 = *(undefined1 *)(param_2 + 0x808);
  uVar6 = *(undefined1 *)(param_2 + 0x804);
  uVar11 = *(undefined8 *)(param_2 + 0x790);
  *(undefined1 *)(param_1 + 0x75) = 0;
  param_1[0x76] = lVar20;
  param_1[0x77] = uVar14;
  param_1[0x78] = uVar15;
  param_1[0x79] = local_res8;
  *(undefined1 *)((longlong)param_1 + 0x3f9) = uVar30;
  param_1[0x7e] = uVar11;
  *(undefined1 *)(param_1 + 0x7f) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0xffffffff;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144eefea0;
  param_1[0x74] = &PTR_LAB_144ef0018;
  uVar8 = *(uint *)(param_2 + 0x6fc);
  uVar18 = uVar8 + 1;
  iVar25 = 0x1f;
  if (uVar18 != 0) {
    for (; uVar18 >> iVar25 == 0; iVar25 = iVar25 + -1) {
    }
  }
  if (uVar18 == 0) {
    iVar25 = 0x20;
  }
  else {
    iVar25 = 0x1f - iVar25;
  }
  iVar33 = 0x1f;
  if (uVar8 != 0) {
    for (; uVar8 >> iVar33 == 0; iVar33 = iVar33 + -1) {
    }
  }
  if (uVar8 == 0) {
    cVar29 = ' ';
  }
  else {
    cVar29 = '\x1f' - (char)iVar33;
  }
  *(undefined4 *)((longlong)param_1 + 0x404) = 0;
  plVar28 = param_1 + 0x82;
  cVar29 = (0x20U - cVar29 & ~(byte)((iVar25 << 0x1a) >> 0x1f)) - 1;
  *(char *)(param_1 + 0x80) = cVar29;
  *(int *)(param_1 + 0x81) = (int)cVar29;
  *plVar28 = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  lVar20 = USignificanceManager::GetWorld(param_2);
  *(float *)((longlong)param_1 + 0x424) = *(float *)(lVar20 + 0x484) * *(float *)(lVar20 + 0x484);
  lVar20 = USignificanceManager::GetWorld(param_2);
  fVar38 = *(float *)(lVar20 + 0x490);
  *(undefined1 *)((longlong)param_1 + 0x434) = 0;
  *(float *)(param_1 + 0x86) = fVar38 * fVar38;
  lVar20 = USignificanceManager::GetWorld(param_2);
  *(undefined1 *)((longlong)param_1 + 0x435) = *(undefined1 *)(lVar20 + 0x494);
  lVar20 = USignificanceManager::GetWorld(param_2);
  plVar1 = param_1 + 0x88;
  *(undefined4 *)(param_1 + 0x87) = *(undefined4 *)(lVar20 + 0x498);
  *plVar1 = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = *(undefined4 *)(param_2 + 0x700);
  *(undefined4 *)((longlong)param_1 + 0x454) = *(undefined4 *)(param_2 + 0x6fc);
  *(int *)(param_1 + 0x8b) = *(int *)(param_2 + 0x6fc) + 1;
  *(undefined4 *)((longlong)param_1 + 0x45c) = *(undefined4 *)(param_2 + 0x6f8);
  *(int *)(param_1 + 0x8c) = *(int *)(param_2 + 0x6f8) + 1;
  lVar20 = USignificanceManager::GetWorld(param_2);
  *(undefined1 *)((longlong)param_1 + 0x464) = *(undefined1 *)(lVar20 + 0x4a0);
  FUN_141ef85c0(param_2);
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  uVar14 = *(undefined8 *)(param_2 + 0x768);
  param_1[0x9a] = *(undefined8 *)(param_2 + 0x760);
  param_1[0x9b] = uVar14;
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x770);
  param_1[0x9d] = 0;
  iVar25 = *(int *)(param_2 + 0x750);
  _Src = *(void **)(param_2 + 0x748);
  *(int *)(param_1 + 0x9e) = iVar25;
  if (iVar25 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4f4) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x9d,iVar25,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[0x9d],_Src,(longlong)iVar25 << 3);
  }
  *(undefined1 *)(param_1 + 0x9f) = *(undefined1 *)(param_2 + 0x740);
  param_1[0xa0] = *(undefined8 *)(param_2 + 0x790);
  param_1[0xa1] = *(undefined8 *)(param_2 + 0x830);
  uVar14 = *(undefined8 *)(param_2 + 0x788);
  param_1[0xa2] = *(undefined8 *)(param_2 + 0x780);
  param_1[0xa3] = uVar14;
  param_1[0xa5] = *(undefined8 *)(param_2 + 0x758);
  *(undefined4 *)((longlong)param_1 + 0x534) = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = param_2;
  lVar20 = USignificanceManager::GetWorld(param_2);
  plVar2 = param_1 + 0xa9;
  *(uint *)(param_1 + 0xb0) = (uint)*(byte *)(lVar20 + 0x480);
  *(undefined4 *)(param_1 + 0xb2) = 4;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  param_1[0xb1] = &PTR_FUN_144eefe60;
  *(undefined4 *)(param_1 + 0xb7) = 2;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  local_res8 = CONCAT44(local_res8._4_4_,*(int *)(param_1[0x26] + 8));
  if (*(int *)(param_1[0x26] + 8) < 2) {
    iVar25 = *(int *)(param_1 + 0xac);
    iVar33 = iVar25 + 1;
    *(int *)(param_1 + 0xac) = iVar33;
    if (*(int *)((longlong)param_1 + 0x564) < iVar33) {
      TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
      ::ResizeGrow(plVar2);
    }
    plVar27 = (longlong *)param_1[0xab];
    if ((longlong *)param_1[0xab] == (longlong *)0x0) {
      plVar27 = plVar2;
    }
    plVar27[iVar25] = *(longlong *)(param_2 + 0x840);
  }
  else {
    lVar20 = USignificanceManager::GetWorld();
    if (*(char *)(lVar20 + 0x77c) == '\0') {
      iVar25 = *(int *)(param_2 + 0x720);
      if (iVar25 != 0) {
        iVar33 = *(int *)(param_1 + 0xac);
        if (*(int *)((longlong)param_1 + 0x564) < iVar25 + iVar33) {
          TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
          ::ResizeTo();
          iVar33 = *(int *)(param_1 + 0xac);
        }
        plVar27 = *(longlong **)(param_2 + 0x718);
        plVar26 = (longlong *)param_1[0xab];
        if ((longlong *)param_1[0xab] == (longlong *)0x0) {
          plVar26 = plVar2;
        }
        plVar26 = plVar26 + iVar33;
        iVar33 = iVar25;
        do {
          lVar20 = *plVar27;
          plVar27 = plVar27 + 1;
          *plVar26 = lVar20;
          plVar26 = plVar26 + 1;
          iVar33 = iVar33 + -1;
        } while (iVar33 != 0);
        goto LAB_141f0d934;
      }
    }
    else {
      iVar25 = *(int *)(param_2 + 0x730);
      if (iVar25 != 0) {
        iVar33 = *(int *)(param_1 + 0xac);
        if (*(int *)((longlong)param_1 + 0x564) < iVar25 + iVar33) {
          TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
          ::ResizeTo();
          iVar33 = *(int *)(param_1 + 0xac);
        }
        plVar27 = *(longlong **)(param_2 + 0x728);
        plVar26 = (longlong *)param_1[0xab];
        if ((longlong *)param_1[0xab] == (longlong *)0x0) {
          plVar26 = plVar2;
        }
        plVar26 = plVar26 + iVar33;
        iVar33 = iVar25;
        do {
          lVar20 = *plVar27;
          plVar27 = plVar27 + 1;
          *plVar26 = lVar20;
          plVar26 = plVar26 + 1;
          iVar33 = iVar33 + -1;
        } while (iVar33 != 0);
LAB_141f0d934:
        *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + iVar25;
      }
    }
    if (1 < *(int *)(param_1 + 0xac)) {
      plVar27 = (longlong *)param_1[0xab];
      if ((longlong *)param_1[0xab] == (longlong *)0x0) {
        plVar27 = plVar2;
      }
      if (((longlong *)*plVar27 != (longlong *)0x0) &&
         (lVar20 = (**(code **)(*(longlong *)*plVar27 + 0x290))(), lVar20 != 0)) {
        plVar27 = (longlong *)param_1[0xab];
        if ((longlong *)param_1[0xab] == (longlong *)0x0) {
          plVar27 = plVar2;
        }
        lVar20 = (**(code **)(*(longlong *)*plVar27 + 0x290))();
        *(bool *)((longlong)param_1 + 0x434) = *(char *)(lVar20 + 0x710) != '\0';
      }
    }
  }
  if ((*(uint *)(param_1 + 3) >> 0x17 & 1) == 0) {
    *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) | 0x800000;
  }
  iVar25 = 0;
  if ((int)local_res8 < 2) {
    param_1[0x7e] = 0;
    fVar38 = 0.0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  else {
    piVar12 = *(int **)(param_1[0x7e] + 0xd8);
    iVar33 = iVar25;
    if (piVar12 != (int *)0x0) {
      iVar33 = *piVar12;
    }
    *(float *)(param_1 + 0xa4) = (float)(*(int *)(param_2 + 0x6fc) + 1) / (float)iVar33;
    lVar20 = *(longlong *)(param_1[0x7e] + 0xd8);
    iVar33 = iVar25;
    if (lVar20 != 0) {
      iVar33 = *(int *)(lVar20 + 4);
    }
    fVar38 = (float)(*(int *)(param_2 + 0x6fc) + 1) / (float)iVar33;
  }
  *(float *)((longlong)param_1 + 0x524) = fVar38;
  lVar20 = USignificanceManager::GetWorld(param_2);
  iVar33 = *(char *)(param_1 + 0x80) + 1 + *(int *)(param_1 + 0x83);
  fVar38 = DAT_1464ce030 * *(float *)(lVar20 + 0x488);
  *(int *)(param_1 + 0x83) = iVar33;
  if (*(int *)((longlong)param_1 + 0x41c) < iVar33) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar28);
  }
  fVar38 = 1.0 / fVar38;
  *(undefined4 *)*plVar28 = 0x3f800000;
  lVar20 = USignificanceManager::GetWorld(param_2);
  iVar33 = 1;
  fVar34 = DAT_1464ce034 * *(float *)(lVar20 + 0x48c);
  if ('\0' < *(char *)(param_1 + 0x80)) {
    lVar20 = 4;
    do {
      iVar33 = iVar33 + 1;
      fVar35 = fVar38 * fVar38;
      fVar38 = fVar38 * (1.0 / fVar34);
      *(float *)(lVar20 + *plVar28) = fVar35;
      lVar20 = lVar20 + 4;
    } while (iVar33 <= *(char *)(param_1 + 0x80));
  }
  lVar20 = USignificanceManager::GetWorld(param_2);
  if (*(int *)(lVar20 + 0x478) < 0) {
    cVar29 = *(char *)(param_1 + 0x80);
  }
  else {
    lVar20 = USignificanceManager::GetWorld(param_2);
    cVar29 = *(char *)(lVar20 + 0x478);
    if (*(char *)(param_1 + 0x80) <= *(char *)(lVar20 + 0x478)) {
      cVar29 = *(char *)(param_1 + 0x80);
    }
    *(char *)(param_1 + 0x80) = cVar29;
  }
  iVar33 = (int)cVar29;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0;
  *(int *)(param_1 + 0x81) = iVar33;
  if ((param_1[0x7e] != 0) && (lVar20 = *(longlong *)(param_1[0x7e] + 0x60), lVar20 != 0)) {
    uVar18 = *(uint *)(param_1 + 0x8b);
    iVar25 = 0x1f;
    if (uVar18 != 0) {
      for (; uVar18 >> iVar25 == 0; iVar25 = iVar25 + -1) {
      }
    }
    if (uVar18 == 0) {
      iVar25 = 0x20;
    }
    else {
      iVar25 = 0x1f - iVar25;
    }
    uVar18 = uVar18 - 1;
    iVar32 = 0x1f;
    if (uVar18 != 0) {
      for (; uVar18 >> iVar32 == 0; iVar32 = iVar32 + -1) {
      }
    }
    if (uVar18 == 0) {
      iVar32 = 0x20;
    }
    else {
      iVar32 = 0x1f - iVar32;
    }
    iVar9 = *(int *)(lVar20 + 0x78);
    iVar25 = (0x20U - iVar32 & ~((iVar25 << 0x1a) >> 0x1f)) - 1;
    if (iVar9 <= iVar25) {
      iVar25 = iVar9;
    }
  }
  cVar29 = *(char *)(param_1 + 0x7f);
  iVar32 = iVar33;
  if (iVar33 <= iVar25) {
    iVar32 = iVar25;
  }
  *(int *)(param_1 + 0x81) = iVar32;
  if (cVar29 == -1) {
    uVar30 = 0xff;
  }
  else if (cVar29 < '\0') {
    uVar30 = 0;
  }
  else {
    if (cVar29 < iVar32) {
      iVar32 = (int)cVar29;
    }
    uVar30 = (undefined1)iVar32;
  }
  cVar29 = *(char *)(param_1 + 0x80);
  cVar7 = *(char *)((longlong)param_1 + 0x3f9);
  cVar24 = -cVar29;
  *(undefined1 *)(param_1 + 0x7f) = uVar30;
  cVar31 = cVar24;
  if ((cVar24 <= cVar7) && (cVar31 = cVar29, cVar7 < cVar29)) {
    cVar31 = cVar7;
  }
  *(char *)((longlong)param_1 + 0x3f9) = cVar31;
  cVar31 = cVar31 + DAT_146ac4744;
  if ((cVar24 <= cVar31) && (cVar24 = cVar29, cVar31 < cVar29)) {
    cVar24 = cVar31;
  }
  iVar25 = cVar31 + iVar33;
  if (iVar33 <= cVar31 + iVar33) {
    iVar25 = iVar33;
  }
  *(float *)(param_1 + 0x85) = (float)(int)cVar24;
  *(float *)((longlong)param_1 + 0x42c) = (float)iVar25;
  auVar37 = *(undefined1 (*) [16])(param_2 + 0x230);
  if (auVar37._0_4_ <= auVar37._4_4_) {
    auVar37._0_4_ = auVar37._4_4_;
  }
  fVar38 = auVar37._0_4_ * (float)*(int *)((longlong)param_1 + 0x454);
  *(float *)(param_1 + 0x84) = fVar38;
  if (1 < *(int *)(param_1 + 0x8a)) {
    lVar20 = param_1[0xaf];
    local_98 = *(float *)(lVar20 + 0x210);
    fStack_94 = *(float *)(lVar20 + 0x214);
    fStack_90 = *(float *)(lVar20 + 0x218);
    fStack_8c = *(float *)(lVar20 + 0x21c);
    auVar36._4_4_ = -(uint)(*(float *)(lVar20 + 0x254) != fStack_94);
    auVar36._0_4_ = -(uint)(*(float *)(lVar20 + 0x250) != local_98);
    auVar36._8_4_ = -(uint)(*(float *)(lVar20 + 600) != fStack_90);
    auVar36._12_4_ = -(uint)(*(float *)(lVar20 + 0x25c) != fStack_8c);
    iVar25 = movmskps(iVar25,auVar36);
    if (iVar25 != 0) {
      *(float *)(lVar20 + 0x250) = local_98;
      *(float *)(lVar20 + 0x254) = fStack_94;
      *(float *)(lVar20 + 600) = fStack_90;
      *(float *)(lVar20 + 0x25c) = fStack_8c;
      puVar21 = (undefined8 *)FQuat::Rotator(&local_98,local_a8);
      *(undefined8 *)(lVar20 + 0x260) = *puVar21;
      *(undefined4 *)(lVar20 + 0x268) = *(undefined4 *)(puVar21 + 1);
      fVar38 = *(float *)(param_1 + 0x84);
    }
    local_c8 = fVar38 * 0.5;
    local_c0 = 0;
    local_b8 = *(undefined8 *)(lVar20 + 0x260);
    local_b0 = *(undefined4 *)(lVar20 + 0x268);
    local_c4 = local_c8;
    pfVar22 = (float *)FRotator::RotateVector(&local_b8,local_a8,&local_c8);
    lVar20 = param_1[0xaf];
    iVar25 = *(int *)(param_1 + 0x89);
    fVar38 = *(float *)(lVar20 + 0x1d0);
    fVar34 = *(float *)(lVar20 + 0x1d4);
    fVar35 = *(float *)(lVar20 + 0x1d8);
    fVar3 = *pfVar22;
    fVar4 = pfVar22[1];
    fVar5 = pfVar22[2];
    *(int *)(param_1 + 0x89) = iVar25 + 4;
    if (*(int *)((longlong)param_1 + 0x44c) < iVar25 + 4) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    iVar25 = *(int *)(param_1 + 0x8a);
    iVar33 = 0;
    if (0 < iVar25) {
      do {
        iVar32 = 0;
        if (0 < iVar25) {
          do {
            local_c0 = 0;
            local_c8 = (float)iVar32 * *(float *)(param_1 + 0x84);
            local_c4 = (float)iVar33 * *(float *)(param_1 + 0x84);
            iVar25 = *(int *)(param_1 + 0x8a) * iVar33 + iVar32;
            pfVar22 = (float *)FRotator::RotateVector(&local_b8,&local_98,&local_c8);
            lVar20 = *plVar1;
            iVar32 = iVar32 + 1;
            local_a0 = (fVar35 - fVar5) + pfVar22[2];
            lVar23 = (longlong)iVar25;
            *(ulonglong *)(lVar20 + lVar23 * 0xc) =
                 CONCAT44((fVar34 - fVar4) + pfVar22[1],(fVar38 - fVar3) + *pfVar22);
            *(float *)(lVar20 + 8 + lVar23 * 0xc) = local_a0;
            iVar25 = *(int *)(param_1 + 0x8a);
          } while (iVar32 < iVar25);
        }
        iVar33 = iVar33 + 1;
      } while (iVar33 < iVar25);
    }
  }
  puVar21 = (undefined8 *)0x0;
  plVar28 = param_1 + 0xae;
  fVar38 = *(float *)(param_2 + 0x800);
  if (fVar38 <= 0.0) {
    lVar20 = USignificanceManager::GetWorld(param_2);
    fVar38 = *(float *)(lVar20 + 0x578);
  }
  *(float *)(param_1 + 0x8d) = fVar38;
  lVar20 = operator_new(0x38);
  if (lVar20 != 0) {
    puVar21 = (undefined8 *)
              FLandscapeComponentSceneProxy::FLandscapeLCI::FLandscapeLCI(lVar20,param_2);
  }
  if (plVar28 == &local_res10) {
    if (puVar21 == (undefined8 *)0x0) goto LAB_141f0df44;
    if (puVar21[5] != 0) {
      FMemory::Free();
    }
    *puVar21 = &PTR__scalar_deleting_destructor__144eefa68;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar21 + 4);
  }
  else {
    puVar13 = (undefined8 *)*plVar28;
    *plVar28 = (longlong)puVar21;
    if (puVar13 == (undefined8 *)0x0) goto LAB_141f0df44;
    if (puVar13[5] != 0) {
      FMemory::Free();
    }
    *puVar13 = &PTR__scalar_deleting_destructor__144eefa68;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar13 + 4);
    puVar21 = puVar13;
  }
  FMemory::operator_delete(puVar21,0x38);
LAB_141f0df44:
  if ((*(longlong *)(*plVar28 + 0x10) == 0) && (*(longlong *)(*plVar28 + 0x18) == 0)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  if (*(int *)(param_1 + 0xac) < 1) {
    lVar20 = UMaterial::GetDefaultMaterial(0);
    iVar25 = *(int *)(param_1 + 0xac);
    *(int *)(param_1 + 0xac) = iVar25 + 1;
    if (*(int *)((longlong)param_1 + 0x564) < iVar25 + 1) {
      TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
      ::ResizeGrow(plVar2,iVar25);
    }
    plVar28 = (longlong *)param_1[0xab];
    if ((longlong *)param_1[0xab] == (longlong *)0x0) {
      plVar28 = plVar2;
    }
    plVar28[iVar25] = lVar20;
  }
  else {
    plVar28 = (longlong *)param_1[0xab];
    if ((longlong *)param_1[0xab] == (longlong *)0x0) {
      plVar28 = plVar2;
    }
    plVar1 = plVar28 + *(int *)(param_1 + 0xac);
    for (; plVar28 != plVar1; plVar28 = plVar28 + 1) {
      plVar27 = (longlong *)*plVar28;
      if ((plVar27 == (longlong *)0x0) ||
         ((bVar16 && (cVar29 = (**(code **)(*plVar27 + 0x2e8))(plVar27,4), cVar29 == '\0')))) {
        lVar20 = UMaterial::GetDefaultMaterial(0);
        *plVar28 = lVar20;
      }
    }
  }
  iVar25 = (int)local_res8;
  plVar28 = (longlong *)param_1[0xab];
  if ((longlong *)param_1[0xab] == (longlong *)0x0) {
    plVar28 = plVar2;
  }
  puVar21 = (undefined8 *)FUN_142592090(*plVar28,&local_res8,local_res8 & 0xffffffff);
  param_1[0xad] = *puVar21;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  plVar28 = (longlong *)param_1[0xab];
  if ((longlong *)param_1[0xab] == (longlong *)0x0) {
    plVar28 = plVar2;
  }
  plVar1 = plVar28 + *(int *)(param_1 + 0xac);
  for (; plVar28 != plVar1; plVar28 = plVar28 + 1) {
    lVar20 = *(longlong *)(param_2 + 0x120);
    if (lVar20 == 0) {
      lVar20 = FUN_1423407b0(param_2);
    }
    bVar17 = FUN_142857e10(*plVar28,&DAT_146ac8b30,*(undefined4 *)(lVar20 + 0x1c0));
    *(byte *)(param_1 + 0xa6) = *(byte *)(param_1 + 0xa6) | bVar17;
  }
  uVar8 = *(uint *)(param_2 + 0x6fc);
  uVar18 = uVar8 + 1;
  iVar33 = 0x1f;
  if (uVar18 != 0) {
    for (; uVar18 >> iVar33 == 0; iVar33 = iVar33 + -1) {
    }
  }
  if (uVar18 == 0) {
    iVar33 = 0x20;
  }
  else {
    iVar33 = 0x1f - iVar33;
  }
  iVar32 = 0x1f;
  if (uVar8 != 0) {
    for (; uVar8 >> iVar32 == 0; iVar32 = iVar32 + -1) {
    }
  }
  if (uVar8 == 0) {
    cVar29 = '\0';
  }
  else {
    cVar29 = '\x1f' - (char)iVar32;
  }
  uVar18 = 0x40000000;
  if (iVar25 < 2) {
    uVar18 = 0;
  }
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) | 0x400000;
  *(uint *)((longlong)param_1 + 0x534) =
       (byte)(~(byte)((iVar33 << 0x1a) >> 0x1f) & -cVar29) & 0xf |
       (*(uint *)(param_1 + 0x8a) & 0xf) << 4 | -(uint)(param_1[0xa5] != 0) & 0x80000000 | uVar18;
  return param_1;
}



// FUNCTION 141f0e150 FUN_141f0e150 body=206 status=ok
// SIG undefined FUN_141f0e150(void)

undefined8 * FUN_141f0e150(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  void *_Src;
  
  FUN_141f0d470();
  *param_1 = &PTR_FUN_144ef74b8;
  param_1[0x74] = &PTR_LAB_144ef0018;
  FUN_141f17df0(param_2 + 0x858,param_1 + 0xc2);
  puVar1 = (undefined8 *)(param_2 + 0x848);
  puVar2 = param_1 + 0x9d;
  if (puVar2 != puVar1) {
    iVar3 = *(int *)(param_2 + 0x850);
    _Src = (void *)*puVar1;
    *(int *)(param_1 + 0x9e) = iVar3;
    if ((iVar3 == 0) && (*(int *)((longlong)param_1 + 0x4f4) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x4f4) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar2,iVar3);
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar3 << 3);
    }
  }
  param_1[0xa0] = *(undefined8 *)*puVar1;
  *(undefined1 *)(param_1 + 0xc4) = *(undefined1 *)(param_2 + 0x838);
  return param_1;
}



// FUNCTION 141f0e220 FUN_141f0e220 body=723 status=ok
// SIG undefined FUN_141f0e220(void)

undefined2 * FUN_141f0e220(undefined2 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *local_38;
  int local_30;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  local_38 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_30 = 3;
  local_38 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&DAT_143f3ed00;
    plVar1[1] = (longlong)param_1;
    plVar1[2] = (longlong)&LAB_141f1b100;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar3 = (**(code **)(*DAT_1468b1f88 + 0x88))
                    (DAT_1468b1f88,L"Landscape.Patches",L"Show/hide Landscape patches",&local_38,0);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined ***)(param_1 + 4) = &PTR_FUN_143f3ecf0;
  if (local_30 == 0) {
LAB_141f0e322:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_141f0e322;
  }
  local_38 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&DAT_143f3ed00;
    plVar1[1] = (longlong)param_1;
    plVar1[2] = (longlong)&LAB_141f1d7e0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar3 = (**(code **)(*DAT_1468b1f88 + 0x88))
                    (DAT_1468b1f88,L"Landscape.Static",L"Enable/disable Landscape static drawlists",
                     &local_38,0);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined ***)(param_1 + 0xc) = &PTR_FUN_143f3ecf0;
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_141f0e3f7;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_141f0e3f7:
  local_38 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)IDelegateInstance::vftable;
    *plVar1 = (longlong)&DAT_143f3ed00;
    plVar1[2] = (longlong)FLandscapeDebugOptions::Combine;
    plVar1[1] = (longlong)param_1;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar3 = (**(code **)(*DAT_1468b1f88 + 0x80))
                    (DAT_1468b1f88,L"Landscape.Combine",
                     L"Set landscape component combining mode : 0 = Default, 1 = Combine All, 2 = Disabled"
                     ,&local_38,0);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined ***)(param_1 + 0x14) = &PTR_FUN_143f3ecf0;
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) {
      return param_1;
    }
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return param_1;
}



// FUNCTION 141f0e500 FLandscapeLCI body=193 status=ok
// SIG undefined FLandscapeLCI(void)

undefined8 *
FLandscapeComponentSceneProxy::FLandscapeLCI::FLandscapeLCI(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  puVar1 = param_1 + 5;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144eefe50;
  *puVar1 = 0;
  param_1[6] = 0;
  puVar3 = (undefined8 *)FUN_141ef84f0(param_2);
  if (puVar3 != (undefined8 *)0x0) {
    param_1[2] = *puVar3;
    param_1[3] = puVar3[1];
    if (puVar1 != puVar3 + 2) {
      _Src = (void *)puVar3[2];
      iVar2 = *(int *)(puVar3 + 3);
      *(int *)(param_1 + 6) = iVar2;
      if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x34) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0x34) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 141f0e5d0 FUN_141f0e5d0 body=1041 status=ok
// SIG undefined FUN_141f0e5d0(void)

undefined8 * FUN_141f0e5d0(undefined8 *param_1,longlong *param_2)

{
  longlong **pplVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  size_t sVar8;
  int local_res8 [2];
  int local_res10 [2];
  longlong *local_118;
  undefined8 local_110;
  longlong *local_108;
  longlong *plStack_100;
  longlong *local_f8;
  longlong *plStack_f0;
  undefined **local_e8;
  longlong *local_e0;
  byte local_c0;
  byte local_bf;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  
  pplVar1 = (longlong **)(param_1 + 1);
  plVar5 = (longlong *)0x0;
  *pplVar1 = (longlong *)0x0;
  param_1[2] = 0;
  FArchive::FArchive(&local_e8);
  local_58 = 0;
  local_e8 = &PTR_FUN_143f4a3a0;
  local_48 = 0x7fffffffffffffff;
  local_50 = param_2;
  FArchive::SetIsLoading(&local_e8,1);
  FArchive::SetIsPersistent(&local_e8,0);
  iVar7 = 0;
  local_118 = (longlong *)0x0;
  local_110 = 0;
  if ((int *)local_e0[1] < (int *)*local_e0 + 1) {
    (*(code *)local_e8[10])(&local_e8,local_res10,4);
    if ((local_bf & 0x10) != 0) {
      FArchive::ByteSwap(&local_e8,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*local_e0;
    *local_e0 = *local_e0 + 4;
  }
  if (local_res10[0] * 0xc < 1) {
    plVar4 = plVar5;
    if ((-1 < local_res10[0] * 0xc) ||
       (plVar4 = (longlong *)0x0, (local_res10[0] * 3 & 0x3fffffffU) == 0)) goto LAB_141f0e6e0;
    local_110 = CONCAT44(local_110._4_4_,local_res10[0] * 0xc);
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_118);
  }
  else {
    local_110 = CONCAT44(local_110._4_4_,local_res10[0] * 0xc);
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_118,0);
  }
  plVar4 = local_118;
  iVar7 = (int)local_110;
LAB_141f0e6e0:
  sVar8 = (size_t)iVar7;
  if ((iVar7 != 0) && (-1 < (char)local_c0)) {
    lVar6 = local_48;
    if ((int)local_50[1] <= local_48) {
      lVar6 = (longlong)(int)local_50[1];
    }
    if (lVar6 < (longlong)(local_58 + sVar8)) {
      local_c0 = local_c0 | 0x80;
    }
    else {
      _guard_xfg_dispatch_icall_nop(plVar4,(void *)((longlong)(int)local_58 + *local_50),sVar8);
      local_58 = local_58 + sVar8;
    }
  }
  puVar3 = (undefined8 *)operator_new(0x50);
  if (puVar3 == (undefined8 *)0x0) {
    *param_1 = 0;
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 4;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined1 *)(puVar3 + 5) = 0;
    puVar3[6] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144ef7478;
    puVar3[7] = 0;
    *(int *)(puVar3 + 8) = iVar7;
    if (iVar7 == 0) {
      *(undefined4 *)((longlong)puVar3 + 0x44) = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar3 + 7,iVar7,0);
      _guard_xfg_dispatch_icall_nop((void *)puVar3[7],plVar4,sVar8);
    }
    *(int *)(puVar3 + 9) = iVar7;
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
    *param_1 = puVar3;
  }
  if ((int *)local_e0[1] < (int *)*local_e0 + 1) {
    (*(code *)local_e8[10])(&local_e8,local_res8,4);
    if ((local_bf & 0x10) != 0) {
      FArchive::ByteSwap(&local_e8,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*local_e0;
    *local_e0 = *local_e0 + 4;
  }
  if (0 < local_res8[0]) {
    plVar4 = (longlong *)operator_new(0x20);
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      *plVar4 = (longlong)&PTR_FUN_144cb51c0;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar5 = plVar4;
    }
    local_f8 = plVar5 + 2;
    plStack_f0 = plVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_f8,local_f8,local_f8);
    local_108 = local_f8;
    plStack_100 = plStack_f0;
    if (plStack_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
      UNLOCK();
    }
    if (pplVar1 != &local_108) {
      *pplVar1 = local_f8;
      local_108 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 2,&plStack_100);
    }
    plVar5 = plStack_100;
    if (plStack_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_100 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_100)(plStack_100);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plStack_100 + 8))(plStack_100,1);
        }
      }
    }
    plVar5 = plStack_f0;
    if (plStack_f0 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_f0 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_f0)(plStack_f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *pplVar1;
    iVar7 = (int)plVar5[1];
    if (iVar7 < local_res8[0]) {
      *(int *)(plVar5 + 1) = local_res8[0];
      if (*(int *)((longlong)plVar5 + 0xc) < local_res8[0]) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow();
      }
    }
    else if ((local_res8[0] < iVar7) && (iVar7 - local_res8[0] != 0)) {
      *(int *)(plVar5 + 1) = iVar7 - (iVar7 - local_res8[0]);
      TArray<FVector,FDefaultAllocator>::ResizeShrink();
    }
    sVar8 = (longlong)local_res8[0] * 0xc;
    if ((sVar8 != 0) && (-1 < (char)local_c0)) {
      lVar6 = local_48;
      if ((int)local_50[1] <= local_48) {
        lVar6 = (longlong)(int)local_50[1];
      }
      if (lVar6 < (longlong)(local_58 + sVar8)) {
        local_c0 = local_c0 | 0x80;
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  ((void *)**pplVar1,(void *)((longlong)(int)local_58 + *local_50),sVar8);
        local_58 = local_58 + sVar8;
      }
    }
  }
  FArchive::~FArchive(&local_e8);
  return param_1;
}



// FUNCTION 141f0e9f0 FUN_141f0e9f0 body=568 status=ok
// SIG undefined FUN_141f0e9f0(void)

undefined8 * FUN_141f0e9f0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong local_48 [4];
  
  uVar7 = 0;
  plVar1 = param_1 + 2;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144eefc98;
  *plVar1 = 0;
  param_1[3] = 0;
  if (*(int *)(param_2 + 0x18) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
  }
  iVar2 = *(int *)(param_2 + 0x10);
  uVar9 = uVar7;
  if (0 < *(int *)(param_2 + 0x18)) {
    do {
      plVar6 = (longlong *)0x0;
      iVar3 = (*(int *)(param_2 + 0x1c) >> ((byte)uVar7 & 0x1f)) + -1;
      if (iVar2 < 0x10000) {
        local_48[2] = 0;
        local_48[3] = 0;
        BuildLandscapeAdjacencyIndexBuffer<unsigned_short>
                  (iVar3,*(undefined4 *)(param_2 + 0x20),
                   *(undefined8 *)(*(longlong *)(param_2 + 0x38) + uVar9),local_48 + 2);
        plVar4 = (longlong *)operator_new(0x60);
        if (plVar4 != (longlong *)0x0) {
          *(undefined4 *)(plVar4 + 1) = 4;
          plVar4[2] = 0;
          plVar4[3] = 0;
          *(undefined1 *)(plVar4 + 5) = 0;
          plVar4[6] = 0;
          plVar4[7] = 0;
          *plVar4 = (longlong)&PTR_FUN_144ef08e8;
          plVar4[9] = 0;
          plVar4[10] = 0;
          plVar4[8] = (longlong)&PTR_GetBoundProgramCounterForTimerManager_144e09148;
          *(undefined1 *)(plVar4 + 0xb) = 0;
          plVar6 = plVar4;
        }
        (**(code **)(*plVar6 + 0x90))(plVar6,local_48 + 2);
        iVar3 = *(int *)(param_1 + 3);
        *(int *)(param_1 + 3) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0x1c) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
        }
        *(longlong **)(*plVar1 + (longlong)iVar3 * 8) = plVar6;
        lVar5 = local_48[2];
      }
      else {
        local_48[0] = 0;
        local_48[1] = 0;
        BuildLandscapeAdjacencyIndexBuffer<unsigned_int>
                  (iVar3,*(undefined4 *)(param_2 + 0x20),
                   *(undefined8 *)(*(longlong *)(param_2 + 0x38) + uVar9),local_48);
        plVar4 = (longlong *)operator_new(0x60);
        if (plVar4 != (longlong *)0x0) {
          *(undefined4 *)(plVar4 + 1) = 4;
          plVar4[2] = 0;
          plVar4[3] = 0;
          *(undefined1 *)(plVar4 + 5) = 0;
          plVar4[6] = 0;
          plVar4[7] = 0;
          *plVar4 = (longlong)&PTR_FUN_144ef0850;
          plVar4[9] = 0;
          plVar4[10] = 0;
          plVar4[8] = (longlong)&PTR_GetBoundProgramCounterForTimerManager_144ef0818;
          *(undefined1 *)(plVar4 + 0xb) = 0;
          plVar6 = plVar4;
        }
        (**(code **)(*plVar6 + 0x90))(plVar6,local_48);
        iVar3 = *(int *)(param_1 + 3);
        *(int *)(param_1 + 3) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0x1c) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
        }
        *(longlong **)(*plVar1 + (longlong)iVar3 * 8) = plVar6;
        lVar5 = local_48[0];
      }
      if (lVar5 != 0) {
        FMemory::Free();
      }
      (**(code **)(**(longlong **)(uVar9 + *plVar1) + 0x28))();
      uVar8 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar8;
      uVar9 = uVar9 + 8;
    } while ((int)uVar8 < *(int *)(param_2 + 0x18));
  }
  return param_1;
}



// FUNCTION 141f0ec30 FUN_141f0ec30 body=442 status=ok
// SIG undefined FUN_141f0ec30(void)

undefined8 *
FUN_141f0ec30(undefined8 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
             undefined1 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  void *_Dst;
  size_t _Size;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  
  puVar12 = (undefined8 *)0x0;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar13 = param_3 + 1;
  *param_1 = &PTR__scalar_deleting_destructor__144eefca0;
  iVar4 = 0x1f;
  if (uVar13 != 0) {
    for (; uVar13 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  iVar11 = 0x20;
  iVar7 = iVar11;
  if (uVar13 != 0) {
    iVar7 = 0x1f - iVar4;
  }
  iVar4 = 0x1f;
  if (param_3 != 0) {
    for (; param_3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  if (param_3 != 0) {
    iVar11 = 0x1f - iVar4;
  }
  *(uint *)((longlong)param_1 + 0x1c) = uVar13;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(uint *)(param_1 + 3) = 0x20U - iVar11 & ~((iVar7 << 0x1a) >> 0x1f);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 2) =
       *(int *)(param_1 + 4) * *(int *)(param_1 + 4) * *(int *)((longlong)param_1 + 0x1c) *
       *(int *)((longlong)param_1 + 0x1c);
  if (1 < param_5) {
    puVar8 = (undefined8 *)operator_new(0x48);
    puVar10 = puVar12;
    if (puVar8 != (undefined8 *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 2);
      uVar2 = *(undefined4 *)(param_1 + 4);
      uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
      *(undefined4 *)(puVar8 + 1) = 4;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *(undefined1 *)(puVar8 + 5) = 0;
      puVar8[6] = 0;
      *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar1;
      *puVar8 = &PTR__scalar_deleting_destructor__144eefc58;
      *(int *)(puVar8 + 7) = param_5;
      *(undefined4 *)(puVar8 + 8) = uVar3;
      *(undefined4 *)((longlong)puVar8 + 0x44) = uVar2;
      FRenderResource::InitResource(puVar8);
      puVar10 = puVar8;
    }
    param_1[6] = puVar10;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (longlong)*(int *)(param_1 + 3);
  uVar9 = SUB168(ZEXT816(8) * auVar5,0);
  if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
    uVar9 = 0xffffffffffffffff;
  }
  _Dst = (void *)operator_new(uVar9);
  param_1[7] = _Dst;
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)*(int *)(param_1 + 3) << 3);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (longlong)*(int *)(param_1 + 3);
  _Size = SUB168(ZEXT816(0x28) * auVar6,0);
  if (SUB168(ZEXT816(0x28) * auVar6,8) != 0) {
    _Size = 0xffffffffffffffff;
  }
  puVar10 = (undefined8 *)operator_new(_Size);
  if (puVar10 != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(puVar10,0,_Size);
    puVar12 = puVar10;
  }
  param_1[8] = puVar12;
  if (*(int *)(param_1 + 2) < 0x10000) {
    FUN_141f08ff0(param_1,param_5,param_6);
  }
  else {
    *(undefined1 *)(param_1 + 0xc) = 1;
    FUN_141f09da0();
  }
  FLandscapeSharedBuffers::CreateOccluderIndexBuffer(param_1,param_7);
  return param_1;
}



// FUNCTION 141f0edf0 FUN_141f0edf0 body=317 status=ok
// SIG undefined FUN_141f0edf0(void)

undefined8 * FUN_141f0edf0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *_Src;
  undefined8 *_Dst;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  _Src = (undefined8 *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    TArray<TRefCountPtr<FRHIUnorderedAccessView>,TInlineAllocator<1,FDefaultAllocator>_>::
    ResizeForCopy(param_1 + 5,iVar1,0);
    if (_Src == (undefined8 *)0x0) {
      _Src = param_2 + 5;
    }
    _Dst = (undefined8 *)param_1[6];
    if ((undefined8 *)param_1[6] == (undefined8 *)0x0) {
      _Dst = param_1 + 5;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 << 3);
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)((longlong)param_1 + 100) = *(undefined1 *)((longlong)param_2 + 100);
  *(undefined1 *)((longlong)param_1 + 0x65) = *(undefined1 *)((longlong)param_2 + 0x65);
  *(undefined1 *)((longlong)param_1 + 0x66) = *(undefined1 *)((longlong)param_2 + 0x66);
  *(undefined1 *)((longlong)param_1 + 0x67) = *(undefined1 *)((longlong)param_2 + 0x67);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)((longlong)param_1 + 0x69) = *(undefined1 *)((longlong)param_2 + 0x69);
  param_1[0xe] = param_2[0xe];
  return param_1;
}



// FUNCTION 141f0ef30 FViewCustomDataLOD body=268 status=ok
// SIG undefined FViewCustomDataLOD(void)

undefined2 *
FLandscapeComponentSceneProxy::FViewCustomDataLOD::FViewCustomDataLOD(undefined2 *param_1)

{
  *param_1 = 0x1ff;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 8) = 0xff;
  *(undefined4 *)(param_1 + 10) = 0xbf800000;
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  *(undefined4 *)(param_1 + 0xe) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x10) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x12) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x14) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x16) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x18) = 0xff;
  *(undefined4 *)(param_1 + 0x1a) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x1c) = 0xff;
  *(undefined4 *)(param_1 + 0x1e) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x20) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x22) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x24) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x26) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x28) = 0xff;
  *(undefined4 *)(param_1 + 0x2a) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x2c) = 0xff;
  *(undefined4 *)(param_1 + 0x2e) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x30) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x32) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x34) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x36) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x38) = 0xff;
  *(undefined4 *)(param_1 + 0x3a) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x3c) = 0xff;
  *(undefined4 *)(param_1 + 0x3e) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x40) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x42) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x44) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x46) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  return param_1;
}



// FUNCTION 141f0f040 FUN_141f0f040 body=80 status=ok
// SIG undefined FUN_141f0f040(void)

undefined8 * FUN_141f0f040(undefined8 *param_1)

{
  FUN_1423c48a0();
  *param_1 = &PTR__scalar_deleting_destructor__144ef8520;
  param_1[5] = &PTR_LAB_144ee07d0;
  param_1[0x5a] = &PTR_LAB_144ee0800;
  FUN_1423df280(param_1,DAT_146aefc60);
  *(undefined1 *)((longlong)param_1 + 0x24e) = 0;
  return param_1;
}



// FUNCTION 141f0f090 FUN_141f0f090 body=62 status=ok
// SIG undefined FUN_141f0f090(void)

undefined8 * FUN_141f0f090(undefined8 *param_1)

{
  FUN_14257f0f0();
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffe;
  *param_1 = &PTR__scalar_deleting_destructor__144ef02c0;
  param_1[5] = &PTR_LAB_144ef07d0;
  param_1[6] = &PTR_LAB_144ef07e8;
  return param_1;
}



// FUNCTION 141f0f0d0 ULandscapeSplineControlPoint body=72 status=ok
// SIG undefined ULandscapeSplineControlPoint(void)

undefined8 * ULandscapeSplineControlPoint::ULandscapeSplineControlPoint(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144ef82a8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 8) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x447a0000;
  *(undefined4 *)(param_1 + 9) = 0x44fa0000;
  return param_1;
}



// FUNCTION 141f0f120 ULandscapeSplineSegment body=90 status=ok
// SIG undefined ULandscapeSplineSegment(void)

undefined8 * ULandscapeSplineSegment::ULandscapeSplineSegment(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144ef8028;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 141f0f180 FUN_141f0f180 body=108 status=ok
// SIG undefined FUN_141f0f180(void)

undefined8 * FUN_141f0f180(undefined8 *param_1)

{
  FUN_14237eb90();
  *param_1 = &PTR_FUN_144ef76b8;
  param_1[5] = &PTR_LAB_144ef7fa0;
  param_1[0x5a] = &PTR_LAB_144ef7fd0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined1 *)((longlong)param_1 + 0x24e) = 0;
  return param_1;
}



// FUNCTION 141f0f1f0 FUN_141f0f1f0 body=173 status=ok
// SIG undefined FUN_141f0f1f0(void)

undefined8 * FUN_141f0f1f0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__144ef8ea0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146ac8f80) {
    _Init_thread_header(&DAT_146ac8f80);
    if (DAT_146ac8f80 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146ac8f68,L"Landscape",L"Landscape",L"Landscape");
      atexit(FUN_143ea2670);
      _Init_thread_footer(&DAT_146ac8f80);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141f0f2a0 FUN_141f0f2a0 body=155 status=ok
// SIG undefined FUN_141f0f2a0(void)

undefined8 * FUN_141f0f2a0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_144ef0020;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146ac8fa0) {
    _Init_thread_header(&DAT_146ac8fa0);
    if (DAT_146ac8fa0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146ac8f88,L"Landscape",L"Landscape",L"Landscape");
      atexit(FUN_143ea26c0);
      _Init_thread_footer(&DAT_146ac8fa0);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 141f0f340 FUN_141f0f340 body=177 status=ok
// SIG undefined FUN_141f0f340(void)

undefined8 * FUN_141f0f340(undefined8 *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_144ef9140;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146ac8fc0) {
    _Init_thread_header(&DAT_146ac8fc0);
    if (DAT_146ac8fc0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146ac8fa8,L"Landscape",L"Landscape",L"Landscape");
      atexit(FUN_143ea2710);
      _Init_thread_footer(&DAT_146ac8fc0);
      *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
      return param_1;
    }
  }
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
  return param_1;
}



// FUNCTION 141f0f400 FUN_141f0f400 body=238 status=ok
// SIG undefined FUN_141f0f400(void)

undefined8 * FUN_141f0f400(undefined8 *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__144ef93e0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146ac8fe0) {
    _Init_thread_header(&DAT_146ac8fe0);
    if (DAT_146ac8fe0 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146ac8fc8,L"Landscape",L"Landscape",L"Landscape");
      atexit(FUN_143ea2760);
      _Init_thread_footer(&DAT_146ac8fe0);
    }
  }
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
  *(uint *)(param_1 + 0x15) = *(uint *)(param_1 + 0x15) | 1;
  return param_1;
}



// FUNCTION 141f0f4f0 FUN_141f0f4f0 body=278 status=ok
// SIG undefined FUN_141f0f4f0(void)

undefined8 * FUN_141f0f4f0(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  UMaterialExpression::UMaterialExpression();
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_144ef9680;
  pvVar2 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146ac9000) {
    _Init_thread_header(&DAT_146ac9000);
    if (DAT_146ac9000 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146ac8fe8,L"Landscape",L"Landscape",L"Landscape");
      atexit(FUN_143ea27b0);
      _Init_thread_footer(&DAT_146ac9000);
    }
  }
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  return param_1;
}



// FUNCTION 141f0f610 FUN_141f0f610 body=173 status=ok
// SIG undefined FUN_141f0f610(void)

undefined8 * FUN_141f0f610(undefined8 *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_144ef9920;
  param_1[8] = 0;
  param_1[9] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146ac9020) {
    _Init_thread_header(&DAT_146ac9020);
    if (DAT_146ac9020 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146ac9008,L"Landscape",L"Landscape",L"Landscape");
      atexit(FUN_143ea2800);
      _Init_thread_footer(&DAT_146ac9020);
      *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
      return param_1;
    }
  }
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
  return param_1;
}



// FUNCTION 141f0f6c0 FUN_141f0f6c0 body=323 status=ok
// SIG undefined FUN_141f0f6c0(void)

void FUN_141f0f6c0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144eefea0;
  param_1[0x74] = &PTR_LAB_144ef0018;
  FLandscapeNeighborInfo::UnregisterNeighbors();
  plVar1 = param_1 + 0xb1;
  (**(code **)(*plVar1 + 0x30))(plVar1);
  puVar2 = (undefined8 *)param_1[0xa7];
  if (puVar2 != (undefined8 *)0x0) {
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + -1;
    if (*(int *)(puVar2 + 1) == 0) {
      (**(code **)*puVar2)(puVar2,1);
      TSet<TTuple<int,UHomeItem_*>,TDefaultMapHashableKeyFuncs<int,UHomeItem_*,0>,FDefaultSetAllocator>
      ::Remove(&DAT_1464ce0b0,*(undefined4 *)((longlong)param_1 + 0x534));
    }
    param_1[0xa7] = 0;
  }
  *plVar1 = (longlong)&PTR_FUN_144eefe60;
  if (param_1[0xb9] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xb8);
  FUN_141edd2d0(plVar1);
  puVar2 = (undefined8 *)param_1[0xae];
  if (puVar2 != (undefined8 *)0x0) {
    if (puVar2[5] != 0) {
      FMemory::Free();
    }
    *puVar2 = &PTR__scalar_deleting_destructor__144eefa68;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar2 + 4);
    FMemory::operator_delete(puVar2,0x38);
  }
  if (param_1[0xab] != 0) {
    FMemory::Free();
  }
  if (param_1[0x9d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x98] != 0) {
    FMemory::Free();
  }
  if (param_1[0x88] != 0) {
    FMemory::Free();
  }
  if (param_1[0x82] != 0) {
    FMemory::Free();
  }
  FUN_14271e9f0(param_1);
  return;
}



// FUNCTION 141f0f810 FUN_141f0f810 body=588 status=ok
// SIG undefined FUN_141f0f810(void)

void FUN_141f0f810(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  
  if (*param_1 != 0) {
    cVar3 = IsInRenderingThread();
    if (cVar3 == '\0') {
      if ((DAT_146ac3ac5 == '\0') &&
         (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
          (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
        puVar8 = (undefined8 *)*param_1;
        FBaseGraphTask::GetSmallTaskAllocator();
        QueryPerformanceCounter(&local_res20);
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8,1);
        }
        QueryPerformanceCounter(&local_res18);
        DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_res20._0_4_);
      }
      else {
        pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
        plVar6 = TlsGetValue(*pDVar5);
        plVar9 = (longlong *)0x0;
        if (plVar6 == (longlong *)0x0) {
          plVar6 = (longlong *)operator_new(0x18);
          if (plVar6 != (longlong *)0x0) {
            *plVar6 = 0;
            plVar6[1] = 0;
            *(undefined4 *)(plVar6 + 2) = 0;
            plVar9 = plVar6;
          }
          TlsSetValue(*pDVar5,plVar9);
          plVar6 = plVar9;
        }
        plVar9 = (longlong *)plVar6[1];
        if (plVar9 == (longlong *)0x0) {
          plVar9 = (longlong *)*plVar6;
          if (plVar9 == (longlong *)0x0) {
            lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
            plVar6[1] = lVar7;
            if (lVar7 == 0) {
              puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
              plVar6[1] = (longlong)puVar8;
              lVar7 = 0x1f;
              do {
                puVar2 = puVar8 + 0x20;
                *puVar8 = puVar2;
                lVar7 = lVar7 + -1;
                puVar8 = puVar2;
              } while (lVar7 != 0);
              *puVar2 = 0;
            }
            plVar9 = (longlong *)plVar6[1];
            iVar10 = 0x20;
            *(undefined4 *)(plVar6 + 2) = 0x20;
          }
          else {
            iVar10 = 0x20;
            plVar6[1] = (longlong)plVar9;
            *(undefined4 *)(plVar6 + 2) = 0x20;
            *plVar6 = 0;
          }
        }
        else {
          iVar10 = (int)plVar6[2];
        }
        plVar6[1] = *plVar9;
        *(int *)(plVar6 + 2) = iVar10 + -1;
        *plVar9 = (longlong)&PTR_FUN_143f3edd8;
        *(undefined4 *)(plVar9 + 1) = 0xff;
        *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
        *(undefined1 *)(plVar9 + 3) = 0;
        *plVar9 = (longlong)&PTR_FUN_144ef76a8;
        plVar9[4] = 0;
        plVar9[2] = *param_1;
        lVar7 = plVar9[4];
        piVar1 = (int *)(lVar7 + 0x48);
        if (lVar7 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_14048a3d0(plVar9,0,0xff,1,0,0);
        if (lVar7 != 0) {
          LOCK();
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            FGraphEvent::Recycle(lVar7);
          }
        }
      }
    }
    else {
      puVar8 = (undefined8 *)*param_1;
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8,1);
      }
    }
  }
  plVar9 = (longlong *)param_1[2];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 141f0fa60 FUN_141f0fa60 body=509 status=ok
// SIG undefined FUN_141f0fa60(void)

void FUN_141f0fa60(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1d8) + 0x48);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x188);
  iVar5 = *(int *)(param_1 + 0x180);
  puVar3 = *(undefined8 **)(param_1 + 0x178);
  if (iVar5 != 0) {
    do {
      *puVar3 = &PTR_FUN_144eef6b8;
      FUN_14257f4c0(puVar3);
      puVar3 = puVar3 + 7;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar3 = *(undefined8 **)(param_1 + 0x178);
  }
  if (puVar3 != (undefined8 *)0x0) {
    FMemory::Free(puVar3);
  }
  iVar5 = *(int *)(param_1 + 0x170);
  lVar2 = *(longlong *)(param_1 + 0x168);
  if (iVar5 != 0) {
    plVar4 = (longlong *)(lVar2 + 0x30);
    do {
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
      plVar4 = plVar4 + 0xd;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar2 = *(longlong *)(param_1 + 0x168);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x48);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_143f47c68;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143fe0658;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 141f0fc90 FUN_141f0fc90 body=98 status=ok
// SIG undefined FUN_141f0fc90(void)

undefined8 * FUN_141f0fc90(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141f0fd00 FUN_141f0fd00 body=97 status=ok
// SIG undefined FUN_141f0fd00(void)

undefined8 * FUN_141f0fd00(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144ef76a8;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141f0fd70 FUN_141f0fd70 body=97 status=ok
// SIG undefined FUN_141f0fd70(void)

undefined8 * FUN_141f0fd70(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144ef73d8;
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



// FUNCTION 141f0fde0 FUN_141f0fde0 body=97 status=ok
// SIG undefined FUN_141f0fde0(void)

undefined8 * FUN_141f0fde0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144ef73c8;
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



// FUNCTION 141f0fe50 FUN_141f0fe50 body=97 status=ok
// SIG undefined FUN_141f0fe50(void)

undefined8 * FUN_141f0fe50(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144ef73f8;
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



// FUNCTION 141f0fec0 FUN_141f0fec0 body=97 status=ok
// SIG undefined FUN_141f0fec0(void)

undefined8 * FUN_141f0fec0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144ef73e8;
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



// FUNCTION 141f0ff30 FUN_141f0ff30 body=89 status=ok
// SIG undefined FUN_141f0ff30(void)

undefined8 * FUN_141f0ff30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144eefe60;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141f0ff90 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UWaterSplineComponent::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141f0f6c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x610);
  }
  return param_1;
}



// FUNCTION 141f0ffd0 FUN_141f0ffd0 body=192 status=ok
// SIG undefined FUN_141f0ffd0(void)

undefined8 * FUN_141f0ffd0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_144ef74b8;
  param_1[0x74] = &PTR_LAB_144ef0018;
  puVar4 = (undefined8 *)param_1[0xa8];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
    param_1[0xa8] = 0;
  }
  plVar5 = (longlong *)param_1[0xc3];
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  FUN_141f0f6c0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x630);
  }
  return param_1;
}



// FUNCTION 141f10090 FUN_141f10090 body=43 status=ok
// SIG undefined FUN_141f10090(void)

undefined8 * FUN_141f10090(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141f100c0 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FLandscapeComponentSceneProxy::FLandscapeLCI::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__144eefa68;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 4);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141f10120 FUN_141f10120 body=62 status=ok
// SIG undefined FUN_141f10120(void)

undefined8 * FUN_141f10120(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144eef6b8;
  FUN_14257f4c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141f10160 FUN_141f10160 body=153 status=ok
// SIG undefined FUN_141f10160(void)

undefined8 * FUN_141f10160(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_144eefcb0;
  lVar1 = param_1[0x7c];
  lVar2 = (longlong)*(int *)(param_1 + 0x7d) * 0x60 + lVar1;
  if (lVar1 != lVar2) {
    do {
      FLandscapeNeighborInfo::UnregisterNeighbors(lVar1);
      lVar1 = lVar1 + 0x60;
    } while (lVar1 != lVar2);
    lVar1 = param_1[0x7c];
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  FUN_1428181b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3f0);
  }
  return param_1;
}



// FUNCTION 141f10200 `scalar_deleting_destructor' body=163 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FLandscapeSharedAdjacencyIndexBuffer::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144eefc98;
  if (0 < *(int *)(param_1 + 3)) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + param_1[2]) + 0x30))();
      puVar1 = *(undefined8 **)(lVar2 + param_1[2]);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar3 < *(int *)(param_1 + 3));
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141f102b0 `scalar_deleting_destructor' body=308 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FLandscapeSharedBuffers::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  
  *param_1 = &PTR__scalar_deleting_destructor__144eefca0;
  puVar3 = (undefined8 *)param_1[6];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 3)) {
    lVar5 = 0;
    do {
      (**(code **)(**(longlong **)(lVar5 + param_1[7]) + 0x30))();
      puVar3 = *(undefined8 **)(lVar5 + param_1[7]);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar6 < *(int *)(param_1 + 3));
  }
  FMemory::operator_delete(param_1[7]);
  FMemory::operator_delete(param_1[8]);
  puVar3 = (undefined8 *)param_1[9];
  if (puVar3 != (undefined8 *)0x0) {
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + -1;
    if (*(int *)(puVar3 + 1) == 0) {
      (**(code **)*puVar3)(puVar3,1);
      TSet<TTuple<int,UHomeItem_*>,TDefaultMapHashableKeyFuncs<int,UHomeItem_*,0>,FDefaultSetAllocator>
      ::Remove(&DAT_1464ce100,*(undefined4 *)((longlong)param_1 + 0x14));
    }
    param_1[9] = 0;
  }
  puVar3 = (undefined8 *)param_1[5];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  plVar4 = (longlong *)param_1[0xb];
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
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 141f103f0 `scalar_deleting_destructor' body=89 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FLandscapeVertexBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144eefc58;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141f10450 `scalar_deleting_destructor' body=104 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FLandscapeVertexBufferMobile::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ef7478;
  FRenderResource::ReleaseResource();
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141f104c0 FUN_141f104c0 body=94 status=ok
// SIG undefined FUN_141f104c0(void)

undefined8 * FUN_141f104c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144eefbe8;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xca);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xc9);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x668);
  }
  return param_1;
}



// FUNCTION 141f10520 FUN_141f10520 body=112 status=ok
// SIG undefined FUN_141f10520(void)

undefined8 * FUN_141f10520(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144ef7408;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_144eefbe8;
  FRenderResource::ReleaseResource(param_1);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xca);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xc9);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6a0);
  }
  return param_1;
}



// FUNCTION 141f10590 FUN_141f10590 body=43 status=ok
// SIG undefined FUN_141f10590(void)

undefined8 * FUN_141f10590(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144164008;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141f105c0 FUN_141f105c0 body=43 status=ok
// SIG undefined FUN_141f105c0(void)

undefined8 * FUN_141f105c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144164008;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141f105f0 FUN_141f105f0 body=43 status=ok
// SIG undefined FUN_141f105f0(void)

undefined8 * FUN_141f105f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144164008;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141f10620 FUN_141f10620 body=43 status=ok
// SIG undefined FUN_141f10620(void)

undefined8 * FUN_141f10620(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144164008;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141f10650 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FLightCacheInterface::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144eefa68;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 4);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141f106a0 FUN_141f106a0 body=62 status=ok
// SIG undefined FUN_141f106a0(void)

undefined8 * FUN_141f106a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144eef6b8;
  FUN_14257f4c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141f106e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessAmbientOcclusionPSandCS<1,1,1,1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_141f0fa60();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e8);
  }
  return param_1;
}



// FUNCTION 141f10720 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ULandscapeSplineControlPoint::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 141f10780 `scalar_deleting_destructor' body=101 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ULandscapeSplineSegment::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 141f107f0 FUN_141f107f0 body=107 status=ok
// SIG undefined FUN_141f107f0(void)

longlong FUN_141f107f0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x710) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x700) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x720);
  }
  return param_1;
}



// FUNCTION 141f10860 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMaterialExpressionLandscapeLayerBlend::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141f108b0 FUN_141f108b0 body=52 status=ok
// SIG undefined FUN_141f108b0(void)

undefined8 FUN_141f108b0(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141f108f0 AddItem body=71 status=ok
// SIG undefined AddItem(void)

int FRawStaticIndexBuffer16or32<unsigned_short>::AddItem(longlong param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x50) = iVar1 + 1;
  if (*(int *)(param_1 + 0x54) < iVar1 + 1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x48),iVar1);
  }
  *(undefined2 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 2) = param_2;
  return iVar1;
}



// FUNCTION 141f10940 AddItem body=70 status=ok
// SIG undefined AddItem(void)

int FRawStaticIndexBuffer16or32<unsigned_int>::AddItem(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x50) = iVar1 + 1;
  if (*(int *)(param_1 + 0x54) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x48),iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 4) = param_2;
  return iVar1;
}



// FUNCTION 141f10990 AddPerWorldLandscapeData body=323 status=ok
// SIG undefined AddPerWorldLandscapeData(void)

void AddPerWorldLandscapeData(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  
  lVar5 = ULandscapeInfoMap::GetPrivateStaticClass();
  lVar8 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    plVar9 = *(longlong **)(param_1 + 0x78);
    do {
      if (*plVar9 != 0) {
        lVar3 = *(longlong *)(*plVar9 + 0x10);
        if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          return;
        }
      }
      lVar8 = lVar8 + 1;
      plVar9 = plVar9 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x80));
  }
  uVar1 = *(uint *)(param_1 + 8);
  uVar6 = GetTransientPackage();
  FUN_1417846f0(uVar6,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar7 = ULandscapeInfoMap::GetPrivateStaticClass();
  lVar5 = FUN_1417985e0(uVar7,uVar6,0,(uVar1 >> 3 & 1) << 3,0,0,0,0,0);
  *(longlong *)(lVar5 + 0x78) = param_1;
  iVar2 = *(int *)(param_1 + 0x80);
  *(int *)(param_1 + 0x80) = iVar2 + 1;
  if (*(int *)(param_1 + 0x84) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x78,iVar2);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar2 * 8) = lVar5;
  return;
}



// FUNCTION 141f10ae0 AllocatePermutationResource body=129 status=ok
// SIG undefined AllocatePermutationResource(void)

undefined8 * ULandscapeMaterialInstanceConstant::AllocatePermutationResource(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    FMaterialResource::FMaterialResource(puVar1);
    *puVar1 = &PTR_FUN_144ef0af8;
    *(byte *)(puVar1 + 7) = *(byte *)(param_1 + 0x1e0) & 1;
    *(byte *)((longlong)puVar1 + 0x39) = (byte)(*(uint *)(param_1 + 0x1e0) >> 1) & 1;
    *(byte *)((longlong)puVar1 + 0x3a) = (byte)(*(uint *)(param_1 + 0x1e0) >> 2) & 1;
    *(byte *)((longlong)puVar1 + 0x3b) = (byte)(*(uint *)(param_1 + 0x1e0) >> 3) & 1;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141f10b70 FUN_141f10b70 body=194 status=ok
// SIG undefined FUN_141f10b70(void)

void FUN_141f10b70(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  FUN_1427222d0();
  iVar5 = *(int *)(param_1 + 0x450);
  if ((1 < iVar5) && (iVar8 = 0, iVar9 = iVar5, 0 < iVar5)) {
    do {
      iVar7 = 0;
      if (0 < iVar9) {
        fVar1 = *param_2;
        fVar2 = param_2[1];
        fVar3 = param_2[2];
        do {
          iVar5 = iVar5 * iVar8 + iVar7;
          iVar7 = iVar7 + 1;
          lVar6 = (longlong)iVar5;
          lVar4 = *(longlong *)(param_1 + 0x440);
          *(float *)(lVar4 + lVar6 * 0xc) = fVar1 + *(float *)(lVar4 + lVar6 * 0xc);
          *(float *)(lVar4 + 4 + lVar6 * 0xc) = fVar2 + *(float *)(lVar4 + 4 + lVar6 * 0xc);
          *(float *)(lVar4 + 8 + lVar6 * 0xc) = fVar3 + *(float *)(lVar4 + 8 + lVar6 * 0xc);
          iVar5 = *(int *)(param_1 + 0x450);
          iVar9 = iVar5;
        } while (iVar7 < iVar5);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar9);
  }
  return;
}



// FUNCTION 141f10c40 AssignNewBuffer body=182 status=ok
// SIG undefined AssignNewBuffer(void)

void FRawStaticIndexBuffer16or32<unsigned_short>::AssignNewBuffer
               (longlong param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  void **ppvVar2;
  void *_Src_00;
  longlong lVar3;
  void *local_18;
  int local_10;
  
  local_10 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_10;
  _Src_00 = (void *)0x0;
  _Src = (void *)*param_2;
  local_18 = (void *)0x0;
  if (local_10 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    _Src_00 = local_18;
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar3 * 2);
  }
  iVar1 = local_10;
  ppvVar2 = (void **)(param_1 + 0x48);
  if (ppvVar2 != &local_18) {
    *(int *)(param_1 + 0x50) = local_10;
    if ((local_10 == 0) && (*(int *)(param_1 + 0x54) == 0)) {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar2,local_10);
      ::_guard_xfg_dispatch_icall_nop(*ppvVar2,_Src_00,(longlong)iVar1 * 2);
    }
  }
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  return;
}



// FUNCTION 141f10d00 AssignNewBuffer body=184 status=ok
// SIG undefined AssignNewBuffer(void)

void FRawStaticIndexBuffer16or32<unsigned_int>::AssignNewBuffer
               (longlong param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  void **ppvVar2;
  void *_Src_00;
  longlong lVar3;
  void *local_18;
  int local_10;
  
  local_10 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_10;
  _Src_00 = (void *)0x0;
  _Src = (void *)*param_2;
  local_18 = (void *)0x0;
  if (local_10 != 0) {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    _Src_00 = local_18;
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar3 << 2);
  }
  iVar1 = local_10;
  ppvVar2 = (void **)(param_1 + 0x48);
  if (ppvVar2 != &local_18) {
    *(int *)(param_1 + 0x50) = local_10;
    if ((local_10 == 0) && (*(int *)(param_1 + 0x54) == 0)) {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(ppvVar2,local_10);
      ::_guard_xfg_dispatch_icall_nop(*ppvVar2,_Src_00,(longlong)iVar1 << 2);
    }
  }
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  return;
}



// FUNCTION 141f10dc0 Bind body=111 status=ok
// SIG undefined Bind(void)

void FLandscapeVertexFactoryMobilePixelShaderParameters::Bind(longlong param_1,undefined8 param_2)

{
  FShaderResourceParameter::Bind(param_1 + 8,param_2,L"NormalmapTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0xc,param_2,L"NormalmapTextureSampler",0);
  FShaderParameter::Bind(param_1 + 0x10,param_2,L"LocalToWorldNoScaling",0);
  FShaderParameter::Bind(param_1 + 0x18,param_2,L"BlendableLayerMask",0);
  return;
}



// FUNCTION 141f10e30 Bind body=133 status=ok
// SIG undefined Bind(void)

void FLandscapeVertexFactoryMobileVertexShaderParameters::Bind(longlong param_1,undefined8 param_2)

{
  FShaderParameter::Bind(param_1 + 8,param_2,L"LodValues",0);
  FShaderParameter::Bind(param_1 + 0xe,param_2,L"LodTessellationParams",0);
  FShaderParameter::Bind(param_1 + 0x14,param_2,L"NeighborSectionLod",0);
  FShaderParameter::Bind(param_1 + 0x1a,param_2,L"LodBias",0);
  FShaderParameter::Bind(param_1 + 0x20,param_2,L"SectionLods",0);
  return;
}



// FUNCTION 141f10ec0 Bind body=89 status=ok
// SIG undefined Bind(void)

void FLandscapeVertexFactoryPixelShaderParameters::Bind(longlong param_1,undefined8 param_2)

{
  FShaderResourceParameter::Bind(param_1 + 8,param_2,L"NormalmapTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0xc,param_2,L"NormalmapTextureSampler",0);
  FShaderParameter::Bind(param_1 + 0x10,param_2,L"LocalToWorldNoScaling",0);
  return;
}



// FUNCTION 141f10f20 Bind body=221 status=ok
// SIG undefined Bind(void)

void FLandscapeVertexFactoryVertexShaderParameters::Bind(longlong param_1,undefined8 param_2)

{
  FShaderResourceParameter::Bind(param_1 + 0x26,param_2,L"HeightmapTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x2a,param_2,L"HeightmapTextureSampler",0);
  FShaderParameter::Bind(param_1 + 0xe,param_2,L"LodValues",0);
  FShaderParameter::Bind(param_1 + 8,param_2,L"LodTessellationParams",0);
  FShaderParameter::Bind(param_1 + 0x14,param_2,L"NeighborSectionLod",0);
  FShaderParameter::Bind(param_1 + 0x1a,param_2,L"LodBias",0);
  FShaderParameter::Bind(param_1 + 0x20,param_2,L"SectionLods",0);
  FShaderResourceParameter::Bind(param_1 + 0x2e,param_2,L"XYOffsetmapTexture",0);
  FShaderResourceParameter::Bind(param_1 + 0x32,param_2,L"XYOffsetmapTextureSampler",0);
  return;
}



// FUNCTION 141f11000 FUN_141f11000 body=1472 status=ok
// SIG undefined FUN_141f11000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141f11000(longlong param_1,longlong param_2,byte param_3,longlong *param_4,longlong param_5
                  ,longlong *param_6)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_118 [32];
  char local_f8;
  byte local_f7;
  longlong *local_f0;
  longlong local_e8;
  int local_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  longlong local_c8 [3];
  undefined8 uStack_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_f0 = param_6;
  if (param_4 == (longlong *)0x0) {
    return;
  }
  local_f7 = param_3;
  local_e8 = param_2;
  if (param_3 == 0) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x130) + 8);
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x540) + 0x40))();
    cVar3 = FUN_142857d30(param_4,uVar5,uVar2);
    if (cVar3 != '\0') {
      cVar3 = '\x01';
      goto LAB_141f1108f;
    }
  }
  cVar3 = '\0';
LAB_141f1108f:
  *(undefined8 *)(param_5 + 0xa0) = *(undefined8 *)(param_1 + 0x540);
  local_f8 = cVar3;
  uVar5 = (**(code **)(*param_4 + 0x2a8))(param_4,0,0);
  *(undefined8 *)(param_5 + 0xa8) = uVar5;
  *(undefined8 *)(param_5 + 0x98) = *(undefined8 *)(param_1 + 0x570);
  uVar7 = (param_3 ^ 1) << 5 |
          (((uint)*(byte *)(param_1 + 0x18) << 3 ^ *(uint *)(param_5 + 0x8c)) & 8 ^
          *(uint *)(param_5 + 0x8c)) & 0xffffffdf;
  *(uint *)(param_5 + 0x8c) = uVar7;
  if ((((*(uint *)(param_1 + 0x1c) >> 0x1b & 1) == 0) ||
      (*(int *)(*(longlong *)(param_1 + 0x130) + 8) < 2)) ||
     (uVar4 = 0x80, *(int *)(param_1 + 0x10) - 1U < 2)) {
    uVar4 = 0;
  }
  *(undefined1 *)(param_5 + 0x88) = 0;
  *(uint *)(param_5 + 0x8c) = -(uint)(cVar3 != '\0') & 0x11000 | uVar7 & 0xfffc0f7f | uVar4 | 0x40;
  FUN_141f142e0(param_5,0);
  uVar7 = *(uint *)(param_1 + 0x450);
  if (((int)uVar7 < 2) || (*(char *)(local_e8 + 1) != '\0')) {
    bVar1 = *(byte *)(local_e8 + 0x18);
    local_6c = 0;
    local_a8 = (longlong *)*local_f0;
    local_c8[1] = 0;
    uStack_b0 = 0;
    local_98 = (longlong *)0x0;
    local_8c = 0;
    local_88 = 1;
    local_78 = 0;
    local_70 = 0xffffffff;
    local_68 = 0x3f800000;
    local_60 = 0;
    local_58 = 0;
    if (param_3 == 0) {
      local_a8[2] = param_1;
      *local_a8 = param_1 + 0x588;
      local_a8[1] = param_1 + 0x480;
      local_a8[3] = -1;
      *(int *)(local_a8 + 4) = (int)(char)bVar1;
      uVar7 = *(uint *)(param_1 + 0x450);
    }
    local_c8[0] = param_1 + 0x188;
    lVar11 = (longlong)(char)bVar1;
    if (cVar3 == '\0') {
      local_c8[2] = *(undefined8 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x538) + 0x38) + lVar11 * 8);
    }
    else {
      local_c8[2] = *(undefined8 *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x538) + 0x48) + 0x10) +
                     lVar11 * 8);
    }
    iVar12 = (*(int *)(param_1 + 0x458) >> (bVar1 & 0x1f)) + -1;
    local_f0 = (longlong *)((ulonglong)(iVar12 * iVar12 * uVar7 * uVar7 * 2) << 0x20);
    local_90 = 1;
    TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
    ::ResizeGrow(&local_a0,0);
    plVar9 = &local_a0;
    if (local_98 != (longlong *)0x0) {
      plVar9 = local_98;
    }
    *plVar9 = (longlong)local_f0;
    iVar12 = *(int *)(param_5 + 0x80);
    local_80 = *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x538) + 0x40) + 0x20 + lVar11 * 0x28);
    local_7c = *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x538) + 0x40) + 0x24 + lVar11 * 0x28);
    *(int *)(param_5 + 0x80) = iVar12 + 1;
    if (*(int *)(param_5 + 0x84) < iVar12 + 1) {
      FUN_1408ca0e0(param_5,iVar12);
    }
    lVar11 = *(longlong *)(param_5 + 0x78);
    if (*(longlong *)(param_5 + 0x78) == 0) {
      lVar11 = param_5;
    }
    FUN_141f0edf0((longlong)iVar12 * 0x78 + lVar11,local_c8);
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_c8 + 1);
  }
  else {
    lVar11 = local_e8;
    iVar12 = 0;
    if (0 < (int)uVar7) {
      do {
        uVar4 = uVar7;
        if (0 < (int)uVar7) {
          uVar4 = *(uint *)(param_1 + 0x450);
          iVar10 = 0;
          do {
            local_c8[0] = param_1 + 0x188;
            local_c8[1] = 0;
            uStack_b0 = 0;
            local_98 = (longlong *)0x0;
            cVar3 = (char)iVar12 * (char)uVar7 + (char)iVar10;
            local_8c = 0;
            local_88 = 1;
            local_78 = 0;
            local_70 = 0xffffffff;
            bVar1 = *(byte *)((ulonglong)(uint)(int)cVar3 * 0x20 + 0x18 + lVar11);
            local_6c = 0;
            local_68 = 0x3f800000;
            local_60 = 0;
            local_58 = 0;
            local_a8 = (longlong *)(*local_f0 + (longlong)cVar3 * 0x28);
            if (local_f7 == 0) {
              local_a8[2] = param_1;
              local_a8[1] = param_1 + 0x480;
              *local_a8 = param_1 + 0x588;
              *(int *)(local_a8 + 3) = iVar10;
              *(int *)((longlong)local_a8 + 0x1c) = iVar12;
              *(int *)(local_a8 + 4) = (int)(char)bVar1;
              uVar4 = *(uint *)(param_1 + 0x450);
            }
            iVar8 = (*(int *)(param_1 + 0x458) >> (bVar1 & 0x1f)) + -1;
            lVar11 = (longlong)(char)bVar1;
            iVar8 = iVar8 * iVar8 * 2;
            if (local_f8 == '\0') {
              local_c8[2] = *(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x538) + 0x38) + lVar11 * 8);
              local_d8 = (uVar4 * iVar12 + iVar10) * iVar8 * 3;
              local_90 = 1;
              iStack_d4 = iVar8;
              TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
              ::ResizeGrow(&local_a0,0);
              lVar6 = CONCAT44(iStack_d4,local_d8);
            }
            else {
              local_c8[2] = *(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x538) + 0x48) + 0x10) +
                             lVar11 * 8);
              local_e0 = (*(int *)(param_1 + 0x450) * iVar12 + iVar10) * iVar8 * 0xc;
              local_90 = 1;
              iStack_dc = iVar8;
              TArray<TWeakObjectPtr<UPersistenceComponent,FWeakObjectPtr>,TInlineAllocator<1,FDefaultAllocator>_>
              ::ResizeGrow(&local_a0,0);
              lVar6 = CONCAT44(iStack_dc,local_e0);
            }
            plVar9 = &local_a0;
            if (local_98 != (longlong *)0x0) {
              plVar9 = local_98;
            }
            *plVar9 = lVar6;
            iVar8 = *(int *)(param_5 + 0x80);
            lVar11 = lVar11 * 5 + (longlong)iVar10;
            local_80 = *(undefined4 *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x538) + 0x40) +
                        ((longlong)iVar12 + lVar11 * 2) * 4);
            local_7c = *(undefined4 *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x538) + 0x40) + 0x10 +
                        ((longlong)iVar12 + lVar11 * 2) * 4);
            *(int *)(param_5 + 0x80) = iVar8 + 1;
            if (*(int *)(param_5 + 0x84) < iVar8 + 1) {
              FUN_1408ca0e0(param_5,iVar8);
            }
            lVar11 = *(longlong *)(param_5 + 0x78);
            if (*(longlong *)(param_5 + 0x78) == 0) {
              lVar11 = param_5;
            }
            FUN_141f0edf0(lVar11 + (longlong)iVar8 * 0x78,local_c8);
            if (local_98 != (longlong *)0x0) {
              FMemory::Free();
            }
            TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_c8 + 1);
            uVar4 = *(uint *)(param_1 + 0x450);
            iVar10 = iVar10 + 1;
            uVar7 = uVar4 & 0xff;
            lVar11 = local_e8;
          } while (iVar10 < (int)uVar4);
        }
        uVar7 = uVar4;
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)uVar7);
    }
  }
  return;
}



// FUNCTION 141f115c0 FUN_141f115c0 body=511 status=ok
// SIG undefined FUN_141f115c0(void)

void FUN_141f115c0(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 4;
  plVar1 = (longlong *)param_2[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_3 == '\0') &&
     ((((*(byte *)(param_2 + 5) & 2) == 0 || (param_2[0xe] != 0)) &&
      ((*(byte *)((longlong)param_2 + 0x29) & 0x10) == 0)))) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 1) << 2,
               (longlong)*(int *)((longlong)param_1 + 0xc) << 2);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar1 = (longlong *)param_2[1];
      iVar3 = 0;
      local_res18[0] = 0;
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = 0;
      if (iVar2 != local_res18[0]) {
        TArray<float,FDefaultAllocator>::ResizeTo(param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      plVar1 = (longlong *)param_2[1];
      local_res18[0] = *(int *)(param_1 + 1);
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
  }
  else {
    FUN_1408bda20(param_2,param_1);
  }
  return;
}



// FUNCTION 141f117c0 FUN_141f117c0 body=1115 status=ok
// SIG undefined FUN_141f117c0(void)

float * FUN_141f117c0(longlong param_1,float *param_2,longlong param_3)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  float *pfVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint local_70;
  undefined1 local_68 [96];
  
  cVar4 = '\0';
  uVar7 = 0;
  plVar6 = *(longlong **)(param_1 + 0x6f0);
  fStack_7c = DAT_1468b5d90;
  fStack_78 = DAT_1468b5d94;
  fStack_74 = DAT_1468b5d98;
  local_88 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  fStack_80 = DAT_1468b5d98;
  uVar9 = (longlong)*(int *)(param_1 + 0x6f8) & 0x1fffffffffffffff;
  if (plVar6 + *(int *)(param_1 + 0x6f8) < plVar6) {
    uVar9 = uVar7;
  }
  local_70 = local_70 & 0xffffff00;
  uVar8 = uVar7;
  fVar12 = DAT_1468b5d98;
  fVar11 = DAT_1468b5d90;
  fVar13 = DAT_1468b5d90;
  fVar14 = DAT_1468b5d94;
  fVar15 = DAT_1468b5d98;
  fVar10 = DAT_1468b5d94;
  if (uVar9 != 0) {
    do {
      lVar2 = *plVar6;
      if (lVar2 != 0) {
        if (cVar4 == '\0') {
          if (*(char *)(lVar2 + 0x88) != '\0') {
            uVar3 = *(undefined8 *)(lVar2 + 0x70);
            fStack_80 = (float)*(undefined8 *)(lVar2 + 0x78);
            fStack_7c = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x78) >> 0x20);
            local_88._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
            local_88._0_4_ = (float)uVar3;
            fStack_78 = (float)*(undefined8 *)(lVar2 + 0x80);
            fStack_74 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x80) >> 0x20);
            local_70 = *(uint *)(lVar2 + 0x88);
            cVar4 = (char)local_70;
            fVar12 = fStack_74;
            fVar11 = fStack_7c;
            fVar13 = (float)local_88;
            fVar14 = local_88._4_4_;
            fVar15 = fStack_80;
            local_88 = uVar3;
            fVar10 = fStack_78;
          }
        }
        else if (*(char *)(lVar2 + 0x88) != '\0') {
          fVar1 = *(float *)(lVar2 + 0x70);
          if (fVar1 < fVar13) {
            local_88 = CONCAT44(local_88._4_4_,fVar1);
            fVar13 = fVar1;
          }
          fVar1 = *(float *)(lVar2 + 0x74);
          if (fVar1 < fVar14) {
            local_88 = CONCAT44(fVar1,(float)local_88);
            fVar14 = fVar1;
          }
          fVar1 = *(float *)(lVar2 + 0x78);
          if (fVar1 < fVar15) {
            fVar15 = fVar1;
            fStack_80 = fVar1;
          }
          fVar1 = *(float *)(lVar2 + 0x7c);
          if (fVar11 < fVar1) {
            fVar11 = fVar1;
            fStack_7c = fVar1;
          }
          fVar1 = *(float *)(lVar2 + 0x80);
          if (fVar10 < fVar1) {
            fStack_78 = fVar1;
            fVar10 = fVar1;
          }
          fVar1 = *(float *)(lVar2 + 0x84);
          if (fVar12 < fVar1) {
            fVar12 = fVar1;
            fStack_74 = fVar1;
          }
        }
      }
      plVar6 = plVar6 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar9);
  }
  plVar6 = *(longlong **)(param_1 + 0x700);
  uVar9 = (longlong)*(int *)(param_1 + 0x708) & 0x1fffffffffffffff;
  if (plVar6 + *(int *)(param_1 + 0x708) < plVar6) {
    uVar9 = uVar7;
  }
  if (uVar9 != 0) {
    do {
      lVar2 = *plVar6;
      if (lVar2 != 0) {
        if (cVar4 == '\0') {
          if (*(char *)(lVar2 + 0x98) != '\0') {
            uVar3 = *(undefined8 *)(lVar2 + 0x80);
            fStack_80 = (float)*(undefined8 *)(lVar2 + 0x88);
            fStack_7c = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x88) >> 0x20);
            local_88._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
            local_88._0_4_ = (float)uVar3;
            fStack_78 = (float)*(undefined8 *)(lVar2 + 0x90);
            fStack_74 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x90) >> 0x20);
            local_70 = *(uint *)(lVar2 + 0x98);
            cVar4 = (char)local_70;
            fVar12 = fStack_74;
            fVar11 = fStack_7c;
            fVar13 = (float)local_88;
            fVar14 = local_88._4_4_;
            fVar15 = fStack_80;
            local_88 = uVar3;
            fVar10 = fStack_78;
          }
        }
        else if (*(char *)(lVar2 + 0x98) != '\0') {
          fVar1 = *(float *)(lVar2 + 0x80);
          if (fVar1 < fVar13) {
            local_88 = CONCAT44(local_88._4_4_,fVar1);
            fVar13 = fVar1;
          }
          fVar1 = *(float *)(lVar2 + 0x84);
          if (fVar1 < fVar14) {
            local_88 = CONCAT44(fVar1,(float)local_88);
            fVar14 = fVar1;
          }
          fVar1 = *(float *)(lVar2 + 0x88);
          if (fVar1 < fVar15) {
            fVar15 = fVar1;
            fStack_80 = fVar1;
          }
          fVar1 = *(float *)(lVar2 + 0x8c);
          if (fVar11 < fVar1) {
            fVar11 = fVar1;
            fStack_7c = fVar1;
          }
          fVar1 = *(float *)(lVar2 + 0x90);
          if (fVar10 < fVar1) {
            fStack_78 = fVar1;
            fVar10 = fVar1;
          }
          fVar1 = *(float *)(lVar2 + 0x94);
          if (fVar12 < fVar1) {
            fVar12 = fVar1;
            fStack_74 = fVar1;
          }
        }
      }
      plVar6 = plVar6 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar9);
  }
  if (cVar4 == '\0') {
    lVar2 = *(longlong *)(param_1 + 400);
    if (lVar2 == 0) {
      fVar12 = *(float *)(param_3 + 0x10);
      fVar11 = *(float *)(param_3 + 0x14);
      fStack_80 = *(float *)(param_3 + 0x18);
    }
    else {
      fVar12 = *(float *)(lVar2 + 0x1d0);
      fVar11 = *(float *)(lVar2 + 0x1d4);
      fStack_80 = *(float *)(lVar2 + 0x1d8);
    }
    fStack_7c = DAT_1468b5d90;
    fStack_78 = DAT_1468b5d94;
    fVar13 = 0.0;
    fStack_74 = DAT_1468b5d98;
  }
  else {
    pfVar5 = (float *)FBox::TransformBy(&local_88,local_68,param_3);
    fStack_78 = (float)*(undefined8 *)(pfVar5 + 4);
    fStack_74 = (float)((ulonglong)*(undefined8 *)(pfVar5 + 4) >> 0x20);
    fVar15 = pfVar5[3] - *pfVar5;
    fVar14 = fStack_78 - pfVar5[1];
    fVar13 = fStack_74 - pfVar5[2];
    fStack_7c = fVar15 * 0.5;
    fStack_78 = fVar14 * 0.5;
    fStack_74 = fVar13 * 0.5;
    fVar12 = fStack_7c + *pfVar5;
    fVar11 = fStack_78 + pfVar5[1];
    fStack_80 = fStack_74 + pfVar5[2];
    fVar13 = SQRT((fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13) * 0.25);
  }
  *param_2 = fVar12;
  param_2[1] = fVar11;
  param_2[2] = fStack_80;
  param_2[3] = fStack_7c;
  *(ulonglong *)(param_2 + 4) = CONCAT44(fStack_74,fStack_78);
  param_2[6] = fVar13;
  return param_2;
}



// FUNCTION 141f11c20 FUN_141f11c20 body=801 status=ok
// SIG undefined FUN_141f11c20(void)

void FUN_141f11c20(longlong param_1,undefined8 param_2,float param_3,float param_4,longlong param_5,
                  char param_6)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  undefined8 in_R8;
  char cVar10;
  undefined8 in_R9;
  longlong lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  int local_res18;
  
  if (*(int *)(param_1 + 0x450) < 2) {
    *(undefined1 *)(param_5 + 1) = 1;
    *(float *)(param_5 + 0x1c) = param_3;
    FUN_141f11f50(param_1,param_2,in_R8,in_R9,0,param_5);
    *(undefined4 *)(param_5 + 0x90) = *(undefined4 *)(param_5 + 0x14);
  }
  else {
    *(undefined1 *)(param_5 + 1) = 0;
    fVar1 = *(float *)(param_1 + 0x420);
    fVar2 = *(float *)(*(longlong *)(param_1 + 0x578) + 0x1e8);
    uVar5 = FUN_14274f0c0(param_2);
    iVar7 = *(int *)(param_1 + 0x450);
    local_res18 = 0;
    fVar14 = 0.0;
    bVar3 = true;
    bVar4 = true;
    if (0 < iVar7) {
      do {
        bVar3 = bVar4;
        iVar6 = 0;
        if (0 < iVar7) {
          do {
            uVar8 = iVar7 * local_res18 + iVar6;
            lVar11 = (ulonglong)uVar8 * 0x20;
            uVar12 = FUN_141f156f0(param_1,uVar5,
                                   *(longlong *)(param_1 + 0x440) + (longlong)(int)uVar8 * 0xc,
                                   fVar1 * 0.5,fVar2 * 0.5);
            *(undefined4 *)(lVar11 + 0x1c + param_5) = uVar12;
            FUN_141f11f50(param_1,uVar5,uVar12,param_4,uVar8,param_5);
            *(undefined4 *)(param_5 + 0x90 + (longlong)(int)uVar8 * 4) =
                 *(undefined4 *)(lVar11 + 0x14 + param_5);
            if ((param_4 * param_4 * *(float *)(param_1 + 0x424) < param_3) && (bVar3)) {
              fVar13 = param_4 * param_4 * *(float *)(lVar11 + 0x1c + param_5);
              if ((0.0 < fVar14) && (bVar3 = true, 0.0001 < ABS(fVar14 - fVar13))) {
                bVar3 = false;
              }
              fVar14 = fVar14 + fVar13;
              if (0 < (int)uVar8) {
                fVar14 = fVar14 * 0.5;
              }
            }
            iVar7 = *(int *)(param_1 + 0x450);
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar7);
        }
        local_res18 = local_res18 + 1;
        bVar4 = bVar3;
      } while (local_res18 < iVar7);
    }
    if ((DAT_146ac8aec != 2) &&
       ((((bVar3 || (DAT_146ac8aec == 1)) || (*(char *)(param_1 + 0x3f8) != -1)) ||
        (param_6 != '\0')))) {
      *(undefined1 *)(param_5 + 1) = 1;
      cVar9 = *(char *)(param_5 + 0x58);
      if (*(char *)(param_5 + 0x38) <= *(char *)(param_5 + 0x58)) {
        cVar9 = *(char *)(param_5 + 0x38);
      }
      cVar10 = *(char *)(param_5 + 0x78);
      if (cVar9 <= *(char *)(param_5 + 0x78)) {
        cVar10 = cVar9;
      }
      if (*(char *)(param_5 + 0x18) <= cVar10) {
        cVar10 = *(char *)(param_5 + 0x18);
      }
      *(char *)(param_5 + 0x18) = cVar10;
      *(char *)(param_5 + 0x38) = cVar10;
      *(char *)(param_5 + 0x58) = cVar10;
      *(char *)(param_5 + 0x78) = cVar10;
    }
  }
  return;
}



// FUNCTION 141f11f50 FUN_141f11f50 body=678 status=ok
// SIG undefined FUN_141f11f50(void)

void FUN_141f11f50(longlong param_1,undefined8 param_2,float param_3,undefined4 param_4,uint param_5
                  ,longlong param_6)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar3 = FUN_14046cec0();
  if (-1 < *(char *)(param_1 + 0x3f8)) {
    iVar3 = (int)*(char *)(param_1 + 0x3f8);
  }
  if (*(longlong *)(param_1 + 0x3f0) == 0) {
    cVar9 = '\0';
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x458);
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar9 = ' ';
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar10;
    }
    uVar4 = uVar4 - 1;
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar9 = '\x1f' - (char)iVar10;
    }
    cVar9 = (0x20U - cVar9 & ~(byte)((iVar7 << 0x1a) >> 0x1f)) - 1;
    cVar6 = (char)*(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x3f0) + 0x60) + 0x78);
    if (cVar6 <= cVar9) {
      cVar9 = cVar6;
    }
  }
  cVar6 = *(char *)(param_1 + 0x400);
  cVar8 = *(char *)(param_1 + 0x3f9) + DAT_146ac4744;
  fVar13 = *(float *)(param_1 + 0x42c);
  fVar15 = (float)*(int *)(param_1 + 0x408);
  cVar5 = cVar6;
  if (cVar9 <= cVar6) {
    cVar5 = cVar9;
  }
  fVar14 = *(float *)(param_1 + 0x428);
  if (*(float *)(param_1 + 0x428) <= (float)(int)cVar5) {
    fVar14 = (float)(int)cVar5;
  }
  if ((float)iVar3 < 0.0) {
    if (fVar13 <= fVar15) {
      fVar15 = fVar13;
    }
    cVar9 = FUN_141f17190(param_1,cVar6,param_4);
    iVar3 = *(int *)(param_1 + 0x418);
    lVar2 = *(longlong *)(param_1 + 0x410);
    fVar13 = *(float *)(lVar2 + (longlong)cVar9 * 4);
    if ((int)cVar9 == iVar3 + -1) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = *(float *)(lVar2 + 4 + (longlong)cVar9 * 4);
    }
    fVar12 = fVar13 - fVar11;
    if ((fVar13 < param_3) || (param_3 < fVar11)) {
      pfVar1 = (float *)(lVar2 + -4 + (longlong)iVar3 * 4);
      iVar10 = iVar3 + -1;
      if (*pfVar1 <= param_3 && param_3 != *pfVar1) {
        if (param_3 < *(float *)(lVar2 + 4) || param_3 == *(float *)(lVar2 + 4)) {
          cVar6 = -1;
          iVar3 = 1;
          if (param_3 < *(float *)(lVar2 + (longlong)(iVar10 / 2) * 4)) {
            iVar3 = iVar10 / 2;
          }
          for (; iVar3 < iVar10; iVar3 = iVar3 + 1) {
            pfVar1 = (float *)(lVar2 + 4 + (longlong)iVar3 * 4);
            if (*pfVar1 <= param_3 && param_3 != *pfVar1) {
              cVar6 = (char)iVar3;
              break;
            }
          }
        }
        else {
          cVar6 = '\0';
        }
      }
      else {
        cVar6 = (char)iVar3 + -1;
      }
      if (cVar6 == iVar10) {
        fVar11 = 0.0;
      }
      else {
        fVar11 = *(float *)(lVar2 + 4 + (longlong)cVar6 * 4);
      }
      fVar12 = *(float *)(lVar2 + (longlong)cVar6 * 4) - fVar11;
    }
    fVar13 = (1.0 - (param_3 - fVar11) / fVar12) + (float)(int)cVar9 + (float)(int)cVar8;
    if ((fVar14 <= fVar13) && (fVar14 = fVar13, fVar15 <= fVar13)) {
      fVar14 = fVar15;
    }
  }
  else {
    fVar11 = (float)(int)cVar8 + (float)iVar3;
    if (fVar14 <= fVar11) {
      if (fVar13 <= fVar15) {
        fVar15 = fVar13;
      }
      fVar14 = fVar15;
      if (fVar11 <= fVar15) {
        fVar14 = fVar11;
      }
    }
  }
  *(float *)((ulonglong)param_5 * 0x20 + 0x14 + param_6) = fVar14;
  *(char *)((ulonglong)param_5 * 0x20 + 0x18 + param_6) =
       (char)((int)ROUND((fVar14 + fVar14) - 0.5) >> 1);
  return;
}



// FUNCTION 141f12210 FUN_141f12210 body=873 status=ok
// SIG undefined FUN_141f12210(void)

void FUN_141f12210(longlong param_1,float param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  char cVar6;
  DWORD DVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  DWORD *pDVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  longlong *plVar17;
  float fVar18;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  
  fVar18 = 0.01;
  if ((0.01 <= param_2) && (fVar18 = param_2, 1.0 <= param_2)) {
    fVar18 = 1.0;
  }
  iVar4 = *(int *)(param_1 + 0x4e8);
  *(float *)(param_1 + 0x484) = fVar18;
  if (0 < iVar4) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)iVar4;
    uVar9 = SUB168(ZEXT816(8) * auVar5,0);
    if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    lVar10 = operator_new(uVar9);
    plVar14 = (longlong *)0x0;
    iVar16 = 0;
    plVar17 = plVar14;
    if (0 < iVar4) {
      do {
        *(undefined8 *)(lVar10 + (longlong)plVar17 * 8) =
             *(undefined8 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x4e0) + (longlong)plVar17 * 8) + 0x640);
        plVar17 = (longlong *)((longlong)plVar17 + 1);
      } while ((longlong)plVar17 < (longlong)iVar4);
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
      fVar18 = *(float *)(param_1 + 0x484);
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res20);
      if (3 < iVar4) {
        plVar14 = (longlong *)(lVar10 + 0x10);
        uVar8 = (iVar4 - 4U >> 2) + 1;
        uVar15 = (ulonglong)uVar8;
        iVar16 = uVar8 * 4;
        do {
          if (plVar14[-2] != 0) {
            *(float *)(plVar14[-2] + 0x424) = fVar18 * fVar18;
          }
          if (plVar14[-1] != 0) {
            *(float *)(plVar14[-1] + 0x424) = fVar18 * fVar18;
          }
          if (*plVar14 != 0) {
            *(float *)(*plVar14 + 0x424) = fVar18 * fVar18;
          }
          if (plVar14[1] != 0) {
            *(float *)(plVar14[1] + 0x424) = fVar18 * fVar18;
          }
          plVar14 = plVar14 + 4;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      if (iVar16 < iVar4) {
        uVar15 = (ulonglong)(uint)(iVar4 - iVar16);
        plVar14 = (longlong *)(lVar10 + (longlong)iVar16 * 8);
        do {
          if (*plVar14 != 0) {
            *(float *)(*plVar14 + 0x424) = fVar18 * fVar18;
          }
          plVar14 = plVar14 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      FMemory::operator_delete(lVar10);
      QueryPerformanceCounter(&local_res18);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_res20._0_4_);
    }
    else {
      pDVar11 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar17 = TlsGetValue(*pDVar11);
      if (plVar17 == (longlong *)0x0) {
        plVar17 = (longlong *)operator_new(0x18);
        if (plVar17 != (longlong *)0x0) {
          *plVar17 = 0;
          plVar17[1] = 0;
          *(undefined4 *)(plVar17 + 2) = 0;
          plVar14 = plVar17;
        }
        TlsSetValue(*pDVar11,plVar14);
        plVar17 = plVar14;
      }
      plVar14 = (longlong *)plVar17[1];
      if (plVar14 == (longlong *)0x0) {
        plVar14 = (longlong *)*plVar17;
        if (plVar14 == (longlong *)0x0) {
          lVar12 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar11 + 2);
          plVar17[1] = lVar12;
          if (lVar12 == 0) {
            puVar13 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar17[1] = (longlong)puVar13;
            lVar12 = 0x1f;
            do {
              puVar2 = puVar13 + 0x20;
              *puVar13 = puVar2;
              lVar12 = lVar12 + -1;
              puVar13 = puVar2;
            } while (lVar12 != 0);
            *puVar2 = 0;
          }
          plVar14 = (longlong *)plVar17[1];
          iVar16 = 0x20;
          *(undefined4 *)(plVar17 + 2) = 0x20;
        }
        else {
          iVar16 = 0x20;
          plVar17[1] = (longlong)plVar14;
          *(undefined4 *)(plVar17 + 2) = 0x20;
          *plVar17 = 0;
        }
      }
      else {
        iVar16 = (int)plVar17[2];
      }
      plVar17[1] = *plVar14;
      *(int *)(plVar17 + 2) = iVar16 + -1;
      *plVar14 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar14 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
      *(undefined1 *)(plVar14 + 4) = 0;
      *plVar14 = (longlong)&PTR_FUN_144ef73d8;
      plVar14[5] = 0;
      uVar3 = *(undefined4 *)(param_1 + 0x484);
      *(undefined4 *)((longlong)plVar14 + 0x1c) = uVar3;
      plVar14[2] = lVar10;
      *(int *)(plVar14 + 3) = iVar4;
      lVar10 = plVar14[5];
      piVar1 = (int *)(lVar10 + 0x48);
      if (lVar10 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_1409421c0(uVar3,0,0xff,1,0,0);
      if (lVar10 != 0) {
        LOCK();
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          FGraphEvent::Recycle(lVar10);
        }
      }
    }
  }
  return;
}



// FUNCTION 141f12580 FUN_141f12580 body=873 status=ok
// SIG undefined FUN_141f12580(void)

void FUN_141f12580(longlong param_1,float param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  char cVar6;
  DWORD DVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  DWORD *pDVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  longlong *plVar17;
  float fVar18;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  
  fVar18 = 0.01;
  if ((0.01 <= param_2) && (fVar18 = param_2, 1.0 <= param_2)) {
    fVar18 = 1.0;
  }
  iVar4 = *(int *)(param_1 + 0x4e8);
  *(float *)(param_1 + 0x490) = fVar18;
  if (0 < iVar4) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)iVar4;
    uVar9 = SUB168(ZEXT816(8) * auVar5,0);
    if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    lVar10 = operator_new(uVar9);
    plVar14 = (longlong *)0x0;
    iVar16 = 0;
    plVar17 = plVar14;
    if (0 < iVar4) {
      do {
        *(undefined8 *)(lVar10 + (longlong)plVar17 * 8) =
             *(undefined8 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x4e0) + (longlong)plVar17 * 8) + 0x640);
        plVar17 = (longlong *)((longlong)plVar17 + 1);
      } while ((longlong)plVar17 < (longlong)iVar4);
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
      fVar18 = *(float *)(param_1 + 0x490);
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res20);
      if (3 < iVar4) {
        plVar14 = (longlong *)(lVar10 + 0x10);
        uVar8 = (iVar4 - 4U >> 2) + 1;
        uVar15 = (ulonglong)uVar8;
        iVar16 = uVar8 * 4;
        do {
          if (plVar14[-2] != 0) {
            *(float *)(plVar14[-2] + 0x430) = fVar18 * fVar18;
          }
          if (plVar14[-1] != 0) {
            *(float *)(plVar14[-1] + 0x430) = fVar18 * fVar18;
          }
          if (*plVar14 != 0) {
            *(float *)(*plVar14 + 0x430) = fVar18 * fVar18;
          }
          if (plVar14[1] != 0) {
            *(float *)(plVar14[1] + 0x430) = fVar18 * fVar18;
          }
          plVar14 = plVar14 + 4;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      if (iVar16 < iVar4) {
        uVar15 = (ulonglong)(uint)(iVar4 - iVar16);
        plVar14 = (longlong *)(lVar10 + (longlong)iVar16 * 8);
        do {
          if (*plVar14 != 0) {
            *(float *)(*plVar14 + 0x430) = fVar18 * fVar18;
          }
          plVar14 = plVar14 + 1;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      FMemory::operator_delete(lVar10);
      QueryPerformanceCounter(&local_res18);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_res20._0_4_);
    }
    else {
      pDVar11 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar17 = TlsGetValue(*pDVar11);
      if (plVar17 == (longlong *)0x0) {
        plVar17 = (longlong *)operator_new(0x18);
        if (plVar17 != (longlong *)0x0) {
          *plVar17 = 0;
          plVar17[1] = 0;
          *(undefined4 *)(plVar17 + 2) = 0;
          plVar14 = plVar17;
        }
        TlsSetValue(*pDVar11,plVar14);
        plVar17 = plVar14;
      }
      plVar14 = (longlong *)plVar17[1];
      if (plVar14 == (longlong *)0x0) {
        plVar14 = (longlong *)*plVar17;
        if (plVar14 == (longlong *)0x0) {
          lVar12 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar11 + 2);
          plVar17[1] = lVar12;
          if (lVar12 == 0) {
            puVar13 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar17[1] = (longlong)puVar13;
            lVar12 = 0x1f;
            do {
              puVar2 = puVar13 + 0x20;
              *puVar13 = puVar2;
              lVar12 = lVar12 + -1;
              puVar13 = puVar2;
            } while (lVar12 != 0);
            *puVar2 = 0;
          }
          plVar14 = (longlong *)plVar17[1];
          iVar16 = 0x20;
          *(undefined4 *)(plVar17 + 2) = 0x20;
        }
        else {
          iVar16 = 0x20;
          plVar17[1] = (longlong)plVar14;
          *(undefined4 *)(plVar17 + 2) = 0x20;
          *plVar17 = 0;
        }
      }
      else {
        iVar16 = (int)plVar17[2];
      }
      plVar17[1] = *plVar14;
      *(int *)(plVar17 + 2) = iVar16 + -1;
      *plVar14 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar14 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
      *(undefined1 *)(plVar14 + 4) = 0;
      *plVar14 = (longlong)&PTR_FUN_144ef73c8;
      plVar14[5] = 0;
      uVar3 = *(undefined4 *)(param_1 + 0x490);
      *(undefined4 *)((longlong)plVar14 + 0x1c) = uVar3;
      plVar14[2] = lVar10;
      *(int *)(plVar14 + 3) = iVar4;
      lVar10 = plVar14[5];
      piVar1 = (int *)(lVar10 + 0x48);
      if (lVar10 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_1409421c0(uVar3,0,0xff,1,0,0);
      if (lVar10 != 0) {
        LOCK();
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          FGraphEvent::Recycle(lVar10);
        }
      }
    }
  }
  return;
}



// FUNCTION 141f128f0 FUN_141f128f0 body=841 status=ok
// SIG undefined FUN_141f128f0(void)

void FUN_141f128f0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  char cVar7;
  DWORD DVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  DWORD *pDVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  longlong *plVar18;
  float fVar19;
  LARGE_INTEGER local_res8 [2];
  longlong local_res18;
  LARGE_INTEGER local_res20;
  
  fVar3 = *(float *)(param_1 + 0x498);
  fVar19 = 0.01;
  if ((0.01 <= fVar3) && (fVar19 = fVar3, 1.0 <= fVar3)) {
    fVar19 = 1.0;
  }
  iVar5 = *(int *)(param_1 + 0x4e8);
  *(float *)(param_1 + 0x498) = fVar19;
  if (0 < iVar5) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (longlong)iVar5;
    uVar10 = SUB168(ZEXT816(8) * auVar6,0);
    if (SUB168(ZEXT816(8) * auVar6,8) != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    lVar11 = operator_new(uVar10);
    plVar15 = (longlong *)0x0;
    iVar17 = 0;
    plVar18 = plVar15;
    if (0 < iVar5) {
      do {
        *(undefined8 *)(lVar11 + (longlong)plVar18 * 8) =
             *(undefined8 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x4e0) + (longlong)plVar18 * 8) + 0x640);
        plVar18 = (longlong *)((longlong)plVar18 + 1);
      } while ((longlong)plVar18 < (longlong)iVar5);
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
      uVar4 = *(undefined4 *)(param_1 + 0x498);
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res20);
      if (3 < iVar5) {
        plVar15 = (longlong *)(lVar11 + 0x10);
        uVar9 = (iVar5 - 4U >> 2) + 1;
        uVar16 = (ulonglong)uVar9;
        iVar17 = uVar9 * 4;
        do {
          if (plVar15[-2] != 0) {
            *(undefined4 *)(plVar15[-2] + 0x438) = uVar4;
          }
          if (plVar15[-1] != 0) {
            *(undefined4 *)(plVar15[-1] + 0x438) = uVar4;
          }
          if (*plVar15 != 0) {
            *(undefined4 *)(*plVar15 + 0x438) = uVar4;
          }
          if (plVar15[1] != 0) {
            *(undefined4 *)(plVar15[1] + 0x438) = uVar4;
          }
          plVar15 = plVar15 + 4;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      if (iVar17 < iVar5) {
        uVar16 = (ulonglong)(uint)(iVar5 - iVar17);
        plVar15 = (longlong *)(lVar11 + (longlong)iVar17 * 8);
        do {
          if (*plVar15 != 0) {
            *(undefined4 *)(*plVar15 + 0x438) = uVar4;
          }
          plVar15 = plVar15 + 1;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      FMemory::operator_delete(lVar11);
      QueryPerformanceCounter(local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
    }
    else {
      pDVar12 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar18 = TlsGetValue(*pDVar12);
      if (plVar18 == (longlong *)0x0) {
        plVar18 = (longlong *)operator_new(0x18);
        if (plVar18 != (longlong *)0x0) {
          *plVar18 = 0;
          plVar18[1] = 0;
          *(undefined4 *)(plVar18 + 2) = 0;
          plVar15 = plVar18;
        }
        TlsSetValue(*pDVar12,plVar15);
        plVar18 = plVar15;
      }
      plVar15 = (longlong *)plVar18[1];
      if (plVar15 == (longlong *)0x0) {
        plVar15 = (longlong *)*plVar18;
        if (plVar15 == (longlong *)0x0) {
          lVar13 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar12 + 2);
          plVar18[1] = lVar13;
          if (lVar13 == 0) {
            puVar14 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar18[1] = (longlong)puVar14;
            lVar13 = 0x1f;
            do {
              puVar2 = puVar14 + 0x20;
              *puVar14 = puVar2;
              lVar13 = lVar13 + -1;
              puVar14 = puVar2;
            } while (lVar13 != 0);
            *puVar2 = 0;
          }
          plVar15 = (longlong *)plVar18[1];
          iVar17 = 0x20;
          *(undefined4 *)(plVar18 + 2) = 0x20;
        }
        else {
          iVar17 = 0x20;
          plVar18[1] = (longlong)plVar15;
          *(undefined4 *)(plVar18 + 2) = 0x20;
          *plVar18 = 0;
        }
      }
      else {
        iVar17 = (int)plVar18[2];
      }
      plVar18[1] = *plVar15;
      *(int *)(plVar18 + 2) = iVar17 + -1;
      *plVar15 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar15 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
      *(undefined1 *)(plVar15 + 4) = 0;
      *plVar15 = (longlong)&PTR_FUN_144ef73f8;
      plVar15[5] = 0;
      uVar4 = *(undefined4 *)(param_1 + 0x498);
      *(undefined4 *)((longlong)plVar15 + 0x1c) = uVar4;
      plVar15[2] = lVar11;
      *(int *)(plVar15 + 3) = iVar5;
      lVar11 = plVar15[5];
      piVar1 = (int *)(lVar11 + 0x48);
      if (lVar11 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res18 = lVar11;
      FUN_1409421c0(uVar4,0,0xff,1,0,0);
      if (lVar11 != 0) {
        LOCK();
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          FGraphEvent::Recycle(local_res18);
        }
      }
    }
  }
  return;
}



// FUNCTION 141f12c40 FUN_141f12c40 body=667 status=ok
// SIG undefined FUN_141f12c40(void)

void FUN_141f12c40(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  char cVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  DWORD *pDVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  
  uVar4 = *(uint *)(param_1 + 0x4e8);
  uVar15 = (ulonglong)uVar4;
  *(undefined1 *)(param_1 + 0x494) = param_2;
  if (0 < (int)uVar4) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (longlong)(int)uVar4;
    uVar8 = SUB168(ZEXT816(8) * auVar5,0);
    if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    plVar9 = (longlong *)operator_new(uVar8);
    plVar10 = (longlong *)0x0;
    plVar16 = plVar10;
    if (0 < (int)uVar4) {
      do {
        plVar9[(longlong)plVar16] =
             *(longlong *)
              (*(longlong *)(*(longlong *)(param_1 + 0x4e0) + (longlong)plVar16 * 8) + 0x640);
        plVar16 = (longlong *)((longlong)plVar16 + 1);
      } while ((longlong)plVar16 < (longlong)(int)uVar4);
    }
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
      uVar3 = *(undefined1 *)(param_1 + 0x494);
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res20);
      plVar10 = plVar9;
      if (0 < (int)uVar4) {
        do {
          if (*plVar10 != 0) {
            *(undefined1 *)(*plVar10 + 0x435) = uVar3;
          }
          uVar15 = uVar15 - 1;
          plVar10 = plVar10 + 1;
        } while (uVar15 != 0);
      }
      FMemory::operator_delete(plVar9);
      QueryPerformanceCounter(&local_res18);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_res20._0_4_);
    }
    else {
      pDVar11 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar16 = TlsGetValue(*pDVar11);
      if (plVar16 == (longlong *)0x0) {
        plVar16 = (longlong *)operator_new(0x18);
        if (plVar16 != (longlong *)0x0) {
          *plVar16 = 0;
          plVar16[1] = 0;
          *(undefined4 *)(plVar16 + 2) = 0;
          plVar10 = plVar16;
        }
        TlsSetValue(*pDVar11,plVar10);
        plVar16 = plVar10;
      }
      plVar10 = (longlong *)plVar16[1];
      if (plVar10 == (longlong *)0x0) {
        plVar10 = (longlong *)*plVar16;
        if (plVar10 == (longlong *)0x0) {
          lVar12 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar11 + 2);
          plVar16[1] = lVar12;
          if (lVar12 == 0) {
            puVar13 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar16[1] = (longlong)puVar13;
            lVar12 = 0x1f;
            do {
              puVar2 = puVar13 + 0x20;
              *puVar13 = puVar2;
              lVar12 = lVar12 + -1;
              puVar13 = puVar2;
            } while (lVar12 != 0);
            *puVar2 = 0;
          }
          plVar10 = (longlong *)plVar16[1];
          iVar14 = 0x20;
          *(undefined4 *)(plVar16 + 2) = 0x20;
        }
        else {
          iVar14 = 0x20;
          plVar16[1] = (longlong)plVar10;
          *(undefined4 *)(plVar16 + 2) = 0x20;
          *plVar16 = 0;
        }
      }
      else {
        iVar14 = (int)plVar16[2];
      }
      plVar16[1] = *plVar10;
      *(int *)(plVar16 + 2) = iVar14 + -1;
      *plVar10 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar10 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_144ef73e8;
      *(undefined1 *)(plVar10 + 4) = 0;
      plVar10[5] = 0;
      *(undefined1 *)((longlong)plVar10 + 0x1c) = *(undefined1 *)(param_1 + 0x494);
      plVar10[2] = (longlong)plVar9;
      *(uint *)(plVar10 + 3) = uVar4;
      lVar12 = plVar10[5];
      piVar1 = (int *)(lVar12 + 0x48);
      if (lVar12 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_1409421c0(plVar10,0,0xff,1,0,0);
      if (lVar12 != 0) {
        LOCK();
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          FGraphEvent::Recycle(lVar12);
        }
      }
    }
  }
  return;
}



// FUNCTION 141f12ee0 FUN_141f12ee0 body=73 status=ok
// SIG undefined FUN_141f12ee0(void)

undefined8 FUN_141f12ee0(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(*(longlong *)(param_1 + 0x610) + 8) != 0) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x538) + 0x50) != 0) {
      (**(code **)(*param_2 + 8))
                (param_2,*(longlong *)(param_1 + 0x610) + 8,*(longlong *)(param_1 + 0x538) + 0x50,
                 param_1 + 0x80);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141f12f30 Combine body=64 status=ok
// SIG undefined Combine(void)

void FLandscapeDebugOptions::Combine(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  if (0 < (int)param_2[1]) {
    if (*(int *)((undefined8 *)*param_2 + 1) != 0) {
      iVar1 = _wtoi(*(wchar_t **)*param_2);
      *(int *)(param_1 + 4) = iVar1;
      return;
    }
    iVar1 = _wtoi(L"");
    *(int *)(param_1 + 4) = iVar1;
  }
  return;
}



// FUNCTION 141f12f70 ComputeVertexScores body=415 status=ok
// SIG undefined ComputeVertexScores(void)

undefined8 `anonymous_namespace'::ComputeVertexScores(void)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  float fVar13;
  
  pfVar8 = (float *)&DAT_146ac4750;
  uVar7 = 0;
  do {
    uVar5 = 0;
    pfVar6 = pfVar8;
    if (uVar7 != 0) {
      do {
        fVar9 = 0.0;
        if (-1 < (int)uVar5) {
          if ((int)uVar5 < 3) {
            fVar9 = 0.75;
          }
          else {
            fVar9 = (float)(int)(uVar5 - 3) / (float)(uVar7 - 3);
            in_XMM2 = ZEXT416((uint)fVar9);
            fVar9 = 1.0 - fVar9;
            fVar9 = SQRT(fVar9) * fVar9;
          }
        }
        *pfVar6 = fVar9;
        uVar5 = uVar5 + 1;
        pfVar6 = pfVar6 + 1;
      } while (uVar5 < uVar7);
    }
    uVar7 = uVar7 + 1;
    pfVar8 = pfVar8 + 0x40;
  } while (uVar7 < 0x41);
  uVar7 = 8;
  do {
    auVar10._4_4_ = (float)(int)(uVar7 - 7);
    auVar10._0_4_ = (float)(int)(uVar7 - 8);
    auVar10._8_4_ = (float)(int)(uVar7 - 6);
    auVar10._12_4_ = (float)(int)(uVar7 - 5);
    auVar10 = rsqrtps(in_XMM2,auVar10);
    fVar9 = auVar10._0_4_;
    fVar11 = auVar10._4_4_;
    fVar12 = auVar10._8_4_;
    fVar13 = auVar10._12_4_;
    lVar1 = (ulonglong)(uVar7 - 8) * 4;
    *(float *)(&DAT_146ac8850 + lVar1) =
         (fVar9 * (float)(int)(uVar7 - 8) * fVar9 - 3.0) * fVar9 * -0.5 * 2.0;
    (&DAT_146ac8854)[uVar7 - 8] =
         (fVar11 * (float)(int)(uVar7 - 7) * fVar11 - 3.0) * fVar11 * -0.5 * 2.0;
    *(float *)(lVar1 + 0x146ac8858) =
         (fVar12 * (float)(int)(uVar7 - 6) * fVar12 - 3.0) * fVar12 * -0.5 * 2.0;
    *(float *)(lVar1 + 0x146ac885c) =
         (fVar13 * (float)(int)(uVar7 - 5) * fVar13 - 3.0) * fVar13 * -0.5 * 2.0;
    auVar2._4_4_ = (float)(int)(uVar7 - 3);
    auVar2._0_4_ = (float)(int)(uVar7 - 4);
    auVar2._8_4_ = (float)(int)(uVar7 - 2);
    auVar2._12_4_ = (float)(int)(uVar7 - 1);
    auVar10 = rsqrtps(auVar10,auVar2);
    fVar9 = auVar10._0_4_;
    fVar11 = auVar10._4_4_;
    fVar12 = auVar10._8_4_;
    fVar13 = auVar10._12_4_;
    lVar1 = (ulonglong)(uVar7 - 4) * 4;
    *(float *)(&DAT_146ac8850 + lVar1) =
         (fVar9 * (float)(int)(uVar7 - 4) * fVar9 - 3.0) * fVar9 * -0.5 * 2.0;
    (&DAT_146ac8854)[uVar7 - 4] =
         (fVar11 * (float)(int)(uVar7 - 3) * fVar11 - 3.0) * fVar11 * -0.5 * 2.0;
    *(float *)(lVar1 + 0x146ac8858) =
         (fVar12 * (float)(int)(uVar7 - 2) * fVar12 - 3.0) * fVar12 * -0.5 * 2.0;
    *(float *)(lVar1 + 0x146ac885c) =
         (fVar13 * (float)(int)(uVar7 - 1) * fVar13 - 3.0) * fVar13 * -0.5 * 2.0;
    auVar3._4_4_ = (float)(int)(uVar7 + 1);
    auVar3._0_4_ = (float)(int)uVar7;
    auVar3._8_4_ = (float)(int)(uVar7 + 2);
    auVar3._12_4_ = (float)(int)(uVar7 + 3);
    auVar10 = rsqrtps(auVar10,auVar3);
    fVar9 = auVar10._0_4_;
    fVar11 = auVar10._4_4_;
    fVar12 = auVar10._8_4_;
    fVar13 = auVar10._12_4_;
    lVar1 = (ulonglong)uVar7 * 4;
    *(float *)(&DAT_146ac8850 + lVar1) =
         (fVar9 * (float)(int)uVar7 * fVar9 - 3.0) * fVar9 * -0.5 * 2.0;
    (&DAT_146ac8854)[uVar7] =
         (fVar11 * (float)(int)(uVar7 + 1) * fVar11 - 3.0) * fVar11 * -0.5 * 2.0;
    *(float *)(lVar1 + 0x146ac8858) =
         (fVar12 * (float)(int)(uVar7 + 2) * fVar12 - 3.0) * fVar12 * -0.5 * 2.0;
    *(float *)(lVar1 + 0x146ac885c) =
         (fVar13 * (float)(int)(uVar7 + 3) * fVar13 - 3.0) * fVar13 * -0.5 * 2.0;
    uVar5 = uVar7 + 4;
    auVar4._4_4_ = (float)(int)(uVar7 + 5);
    auVar4._0_4_ = (float)(int)uVar5;
    auVar4._8_4_ = (float)(int)(uVar7 + 6);
    auVar4._12_4_ = (float)(int)(uVar7 + 7);
    in_XMM2 = rsqrtps(auVar10,auVar4);
    fVar9 = in_XMM2._0_4_;
    fVar11 = in_XMM2._4_4_;
    fVar12 = in_XMM2._8_4_;
    fVar13 = in_XMM2._12_4_;
    lVar1 = (ulonglong)uVar5 * 4;
    *(float *)(&DAT_146ac8850 + lVar1) =
         (fVar9 * (float)(int)uVar5 * fVar9 - 3.0) * fVar9 * -0.5 * 2.0;
    (&DAT_146ac8854)[uVar5] =
         (fVar11 * (float)(int)(uVar7 + 5) * fVar11 - 3.0) * fVar11 * -0.5 * 2.0;
    *(float *)(lVar1 + 0x146ac8858) =
         (fVar12 * (float)(int)(uVar7 + 6) * fVar12 - 3.0) * fVar12 * -0.5 * 2.0;
    *(float *)(lVar1 + 0x146ac885c) =
         (fVar13 * (float)(int)(uVar7 + 7) * fVar13 - 3.0) * fVar13 * -0.5 * 2.0;
    uVar5 = uVar7 + 8;
    uVar7 = uVar7 + 0x10;
  } while (uVar5 < 0x40);
  return CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
}



// FUNCTION 141f13130 FUN_141f13130 body=172 status=ok
// SIG undefined FUN_141f13130(void)

undefined8 * FUN_141f13130(int param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new();
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      *puVar1 = &PTR_FUN_144ef0980;
      *(undefined8 *)((longlong)puVar1 + 10) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x12) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x1a) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x22) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x2a) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x32) = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x3c) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x3e) = 0;
      return puVar1;
    }
  }
  else {
    if (param_1 != 3) {
      return (undefined8 *)0x0;
    }
    puVar1 = (undefined8 *)operator_new();
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &PTR_FUN_144eefbc0;
      *(undefined8 *)((longlong)puVar1 + 10) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x12) = 0;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141f131e0 FUN_141f131e0 body=165 status=ok
// SIG undefined FUN_141f131e0(void)

undefined8 * FUN_141f131e0(int param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new();
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *puVar1 = &PTR_FUN_144ef7630;
      *(undefined8 *)((longlong)puVar1 + 10) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x12) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x1a) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x22) = 0;
      *(undefined4 *)(puVar1 + 5) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x2c) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x2e) = 0;
      return puVar1;
    }
  }
  else {
    if (param_1 != 3) {
      return (undefined8 *)0x0;
    }
    puVar1 = (undefined8 *)operator_new();
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined8 *)((longlong)puVar1 + 10) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x12) = 0;
      *puVar1 = &PTR_FUN_144ef7658;
      *(undefined4 *)(puVar1 + 3) = 0;
      *(undefined2 *)((longlong)puVar1 + 0x1c) = 0;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141f13290 FUN_141f13290 body=66 status=ok
// SIG undefined FUN_141f13290(void)

void FUN_141f13290(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144eefb28;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144eefb70;
  }
  return;
}



// FUNCTION 141f132e0 FUN_141f132e0 body=56 status=ok
// SIG undefined FUN_141f132e0(void)

void FUN_141f132e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144ef9bc0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 141f13320 CreateOccluderIndexBuffer body=557 status=ok
// SIG undefined CreateOccluderIndexBuffer(void)

void FLandscapeSharedBuffers::CreateOccluderIndexBuffer(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  longlong lVar6;
  short sVar7;
  longlong *plVar8;
  longlong lVar9;
  short sVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong **pplVar15;
  longlong *local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *plStack_40;
  
  if (param_2 - 1U < 0xffff) {
    uVar14 = (int)SQRT((float)param_2) - 1U & 0xffff;
    iVar4 = uVar14 * uVar14 * 6;
    plVar8 = (longlong *)operator_new(0x20);
    plVar11 = (longlong *)0x0;
    plStack_40 = plVar11;
    if (plVar8 != (longlong *)0x0) {
      *(undefined4 *)(plVar8 + 1) = 1;
      *plVar8 = (longlong)&PTR_FUN_144cb51c0;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      plVar8[2] = 0;
      plVar8[3] = 0;
      plStack_40 = plVar8;
    }
    local_48 = plStack_40 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_48,local_48,local_48);
    local_58 = local_48;
    plStack_50 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
    pplVar15 = (longlong **)(param_1 + 0x50);
    if (pplVar15 != &local_58) {
      *pplVar15 = local_48;
      local_58 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x58,&plStack_50);
    }
    plVar8 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar8 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    plVar8 = *pplVar15;
    iVar3 = (int)plVar8[1];
    if (iVar3 < iVar4) {
      *(int *)(plVar8 + 1) = iVar4;
      if (*(int *)((longlong)plVar8 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar8,iVar3);
      }
    }
    else if ((iVar4 < iVar3) && (iVar4 != iVar3)) {
      *(int *)(plVar8 + 1) = iVar4;
    }
    sVar5 = (short)(int)SQRT((float)param_2);
    lVar6 = **pplVar15;
    plVar8 = plVar11;
    uVar13 = (ulonglong)uVar14;
    if (uVar14 != 0) {
      do {
        lVar9 = (longlong)(int)plVar8;
        uVar12 = (ulonglong)uVar14;
        do {
          sVar10 = (short)plVar11;
          *(short *)(lVar6 + lVar9 * 2) = sVar10;
          *(short *)(lVar6 + 2 + lVar9 * 2) = sVar5 + sVar10;
          lVar9 = lVar9 + 6;
          sVar7 = sVar5 + 1 + sVar10;
          plVar8 = (longlong *)(ulonglong)((int)plVar8 + 6);
          *(short *)(lVar6 + -8 + lVar9 * 2) = sVar7;
          *(short *)(lVar6 + -6 + lVar9 * 2) = sVar10;
          plVar11 = (longlong *)(ulonglong)(ushort)(sVar10 + 1U);
          *(short *)(lVar6 + -4 + lVar9 * 2) = sVar7;
          *(ushort *)(lVar6 + -2 + lVar9 * 2) = sVar10 + 1U;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        plVar11 = (longlong *)(ulonglong)(ushort)(sVar10 + 2);
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  return;
}



// FUNCTION 141f13550 FUN_141f13550 body=789 status=ok
// SIG undefined FUN_141f13550(void)

void FUN_141f13550(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  int *local_28;
  longlong *local_20;
  
  if ((*(uint *)(param_1 + 0x18) >> 0x17 & 1) != 0) {
    FUN_141f1b3b0(param_1 + 0x3a0);
  }
  piVar1 = (int *)(param_1 + 0x534);
  plVar10 = (longlong *)0x0;
  uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x130) + 8);
  plVar6 = plVar10;
  if (DAT_1464ce0b8 != DAT_1464ce0e4) {
    puVar5 = DAT_1464ce0f0;
    if (DAT_1464ce0f0 == (undefined *)0x0) {
      puVar5 = &DAT_1464ce0e8;
    }
    iVar4 = *(int *)(puVar5 + ((longlong)DAT_1464ce0f8 - 1U & (longlong)*piVar1) * 4);
    while (iVar4 != -1) {
      lVar8 = (longlong)iVar4;
      if (*(int *)(DAT_1464ce0b0 + lVar8 * 0x18) == *piVar1) {
        if ((iVar4 != -1) && (lVar8 = DAT_1464ce0b0 + lVar8 * 0x18, lVar8 != 0)) {
          plVar6 = *(longlong **)(lVar8 + 8);
        }
        break;
      }
      iVar4 = *(int *)(DAT_1464ce0b0 + 0x10 + lVar8 * 0x18);
    }
  }
  plVar2 = (longlong *)(param_1 + 0x538);
  *plVar2 = (longlong)plVar6;
  if (plVar6 == (longlong *)0x0) {
    lVar8 = operator_new(0x68);
    plVar6 = plVar10;
    if (lVar8 != 0) {
      plVar6 = (longlong *)
               FUN_141f0ec30(lVar8,*piVar1,*(undefined4 *)(param_1 + 0x454),
                             *(undefined4 *)(param_1 + 0x450),uVar3,*(undefined1 *)(param_1 + 0x530)
                             ,0);
    }
    *plVar2 = (longlong)plVar6;
    local_28 = piVar1;
    local_20 = plVar2;
    FUN_14058d980(&DAT_1464ce0b0,local_res8,&local_28,0);
    plVar7 = (longlong *)operator_new(0x668);
    plVar6 = plVar10;
    if (plVar7 != (longlong *)0x0) {
      *(undefined4 *)(plVar7 + 1) = uVar3;
      plVar7[2] = 0;
      plVar7[3] = 0;
      *(undefined1 *)(plVar7 + 5) = 0;
      plVar7[0x66] = 0;
      *(undefined2 *)(plVar7 + 0x67) = 1;
      *(undefined1 *)((longlong)plVar7 + 0x33a) = 0;
      plVar7[200] = 0;
      plVar7[0xc9] = 0;
      plVar7[0xca] = 0;
      *plVar7 = (longlong)&PTR_FUN_144eefbe8;
      plVar7[0xcb] = 0;
      plVar7[0xcc] = 0;
      plVar6 = plVar7;
    }
    plVar6[0xcb] = *(longlong *)(*plVar2 + 0x30);
    *(undefined4 *)(plVar6 + 0xcc) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x664) = 0x41000;
    (**(code **)(*plVar6 + 0x28))(plVar6);
    *(longlong **)(*plVar2 + 0x28) = plVar6;
    plVar6 = (longlong *)*plVar2;
  }
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  if (*(char *)(param_1 + 0x530) == '\0') goto LAB_141f1382f;
  lVar8 = *plVar2;
  if (*(longlong *)(lVar8 + 0x48) == 0) {
    plVar6 = (longlong *)**(longlong **)(lVar8 + 0x38);
    if (plVar6 != (longlong *)0x0) {
      if (*(char *)(lVar8 + 0x60) != '\0') {
        iVar4 = (**(code **)(*plVar6 + 0x50))(plVar6);
        lVar8 = *plVar2;
        if (iVar4 == 0) {
          FUN_141f09da0(lVar8,uVar3,*(undefined1 *)(param_1 + 0x530));
          goto LAB_141f1379c;
        }
      }
      iVar4 = (**(code **)(*(longlong *)**(undefined8 **)(lVar8 + 0x38) + 0x50))();
      if (iVar4 == 0) {
        FUN_141f08ff0(*plVar2,uVar3,*(undefined1 *)(param_1 + 0x530));
      }
    }
LAB_141f1379c:
    lVar8 = operator_new(0x20);
    plVar6 = plVar10;
    if (lVar8 != 0) {
      plVar6 = (longlong *)FUN_141f0e9f0(lVar8,*plVar2);
    }
    *(longlong **)(*plVar2 + 0x48) = plVar6;
    local_20 = (longlong *)(*plVar2 + 0x48);
    local_28 = piVar1;
    FUN_14058d980(&DAT_1464ce100,local_res8,&local_28,0);
    lVar8 = *plVar2;
  }
  piVar1 = (int *)(*(longlong *)(lVar8 + 0x48) + 8);
  *piVar1 = *piVar1 + 1;
  plVar6 = plVar10;
  if (0 < *(int *)(*plVar2 + 0x18)) {
    do {
      (**(code **)(**(longlong **)((longlong)plVar6 + *(longlong *)(*plVar2 + 0x38)) + 0x28))();
      uVar9 = (int)plVar10 + 1;
      plVar10 = (longlong *)(ulonglong)uVar9;
      plVar6 = plVar6 + 1;
    } while ((int)uVar9 < *(int *)(*plVar2 + 0x18));
  }
LAB_141f1382f:
  *(undefined8 *)(param_1 + 0x540) = *(undefined8 *)(*plVar2 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x000141f13861. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x588) + 0x28))();
  return;
}



// FUNCTION 141f13870 FUN_141f13870 body=689 status=ok
// SIG undefined FUN_141f13870(void)

void FUN_141f13870(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  undefined *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  int *local_38;
  undefined8 *local_30;
  
  if ((*(uint *)(param_1 + 0x18) >> 0x17 & 1) != 0) {
    FUN_141f1b3b0(param_1 + 0x3a0);
  }
  piVar1 = (int *)(param_1 + 0x534);
  plVar11 = (longlong *)0x0;
  uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x130) + 8);
  uVar10 = 0;
  plVar7 = plVar11;
  if (DAT_1464ce0b8 != DAT_1464ce0e4) {
    puVar6 = DAT_1464ce0f0;
    if (DAT_1464ce0f0 == (undefined *)0x0) {
      puVar6 = &DAT_1464ce0e8;
    }
    iVar4 = *(int *)(puVar6 + ((longlong)DAT_1464ce0f8 - 1U & (longlong)*piVar1) * 4);
    while (iVar4 != -1) {
      lVar9 = (longlong)iVar4;
      if (*(int *)(DAT_1464ce0b0 + lVar9 * 0x18) == *piVar1) {
        if ((iVar4 != -1) && (lVar9 = DAT_1464ce0b0 + lVar9 * 0x18, lVar9 != 0)) {
          plVar7 = *(longlong **)(lVar9 + 8);
        }
        break;
      }
      iVar4 = *(int *)(DAT_1464ce0b0 + 0x10 + lVar9 * 0x18);
    }
  }
  puVar2 = (undefined8 *)(param_1 + 0x538);
  *puVar2 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x610) + 8);
    if (lVar9 != 0) {
      uVar10 = *(undefined4 *)(lVar9 + 8);
    }
    lVar9 = operator_new(0x68);
    plVar7 = plVar11;
    if (lVar9 != 0) {
      plVar7 = (longlong *)
               FUN_141f0ec30(lVar9,*piVar1,*(undefined4 *)(param_1 + 0x454),
                             *(undefined4 *)(param_1 + 0x450),
                             *(undefined4 *)(*(longlong *)(param_1 + 0x130) + 8),0,uVar10);
    }
    *puVar2 = plVar7;
    local_38 = piVar1;
    local_30 = puVar2;
    FUN_14058d980(&DAT_1464ce0b0,local_res8,&local_38,0);
    plVar7 = (longlong *)*puVar2;
  }
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x610) + 0x28))();
  plVar8 = (longlong *)operator_new(0x6a0);
  plVar7 = plVar11;
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = uVar3;
    plVar8[2] = 0;
    plVar8[3] = 0;
    *(undefined1 *)(plVar8 + 5) = 0;
    plVar8[0x66] = 0;
    *(undefined2 *)(plVar8 + 0x67) = 1;
    *(undefined1 *)((longlong)plVar8 + 0x33a) = 0;
    plVar8[200] = 0;
    plVar8[0xc9] = 0;
    plVar8[0xca] = 0;
    plVar8[0xcb] = 0;
    plVar8[0xcc] = 0;
    *plVar8 = (longlong)&PTR_FUN_144ef7408;
    plVar8[0xcd] = 0;
    plVar8[0xce] = 0;
    plVar8[0xd3] = 0;
    plVar7 = plVar8;
  }
  plVar7[0xcd] = **(longlong **)(param_1 + 0x610);
  *(undefined4 *)(plVar7 + 0xce) = 0;
  *(undefined4 *)((longlong)plVar7 + 0x674) = 0x70c00;
  do {
    cVar5 = (char)plVar11;
    iVar4 = (int)plVar7[0xd3];
    lVar13 = (longlong)iVar4;
    lVar9 = **(longlong **)(param_1 + 0x610);
    *(int *)(plVar7 + 0xd3) = iVar4 + 1;
    if (*(int *)((longlong)plVar7 + 0x69c) < iVar4 + 1) {
      TArray<FVertexStreamComponent,TFixedAllocator<2>_>::ResizeGrow(plVar7 + 0xcf,iVar4);
    }
    uVar12 = (int)plVar11 + 1;
    plVar11 = (longlong *)(ulonglong)uVar12;
    (plVar7 + 0xcf)[lVar13 * 2] = lVar9;
    *(undefined4 *)(plVar7 + lVar13 * 2 + 0xd0) = 0;
    *(char *)((longlong)plVar7 + lVar13 * 0x10 + 0x684) = (cVar5 + '\x01') * '\x04';
    *(undefined2 *)((longlong)plVar7 + lVar13 * 0x10 + 0x685) = 0x70c;
    *(undefined1 *)((longlong)plVar7 + lVar13 * 0x10 + 0x687) = 0;
  } while (uVar12 < 2);
  (**(code **)(*plVar7 + 0x28))(plVar7);
  *(longlong **)(param_1 + 0x540) = plVar7;
                    /* WARNING: Could not recover jumptable at 0x000141f13b1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x588) + 0x28))();
  return;
}



// FUNCTION 141f13b30 FUN_141f13b30 body=86 status=ok
// SIG undefined FUN_141f13b30(void)

void FUN_141f13b30(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(uint *)(param_1 + 0x18) >> 0x17 & 1) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x3e0);
    lVar2 = (longlong)*(int *)(param_1 + 1000) * 0x60 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x60) {
      FUN_141f1b3b0(lVar1);
    }
  }
  return;
}



// FUNCTION 141f13b90 FUN_141f13b90 body=496 status=ok
// SIG undefined FUN_141f13b90(void)

undefined8 * FUN_141f13b90(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if ((((*(longlong *)(param_1 + 0x728) != 0) &&
       (puVar9 = *(undefined8 **)(*(longlong *)(param_1 + 0x728) + 0x38),
       puVar9 != (undefined8 *)0x0)) && (*(int *)(puVar9 + 1) != 0)) &&
     (*(int *)(*(longlong *)*puVar9 + 0xdc) != 0)) {
    puVar9 = (undefined8 *)operator_new(0x3f0);
    if (puVar9 != (undefined8 *)0x0) {
      uVar3 = *(undefined1 *)(param_1 + 0x7c8);
      FUN_142817110(puVar9,param_1,0);
      *puVar9 = &PTR_FUN_144eefcb0;
      plVar2 = puVar9 + 0x7c;
      *plVar2 = 0;
      puVar9[0x7d] = 0;
      if ((*(uint *)(puVar9 + 3) >> 0x17 & 1) == 0) {
        *(uint *)((longlong)puVar9 + 0x1c) = *(uint *)((longlong)puVar9 + 0x1c) | 0x800000;
      }
      iVar4 = *(int *)(param_1 + 0x7c0);
      *(undefined4 *)(puVar9 + 0x7d) = 0;
      if (*(int *)((longlong)puVar9 + 0x3ec) != iVar4) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(plVar2);
      }
      puVar12 = *(undefined8 **)(param_1 + 0x7b8);
      puVar1 = puVar12 + *(int *)(param_1 + 0x7c0);
      for (; puVar12 != puVar1; puVar12 = puVar12 + 1) {
        iVar4 = *(int *)(puVar9 + 0x7d);
        uVar5 = *puVar12;
        *(int *)(puVar9 + 0x7d) = iVar4 + 1;
        if (*(int *)((longlong)puVar9 + 0x3ec) < iVar4 + 1) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar2,iVar4);
        }
        puVar11 = (undefined8 *)((longlong)iVar4 * 0x60 + *plVar2);
        if (puVar11 != (undefined8 *)0x0) {
          lVar10 = *(longlong *)(param_1 + 0x120);
          if (lVar10 == 0) {
            lVar10 = FUN_1423407b0(param_1);
          }
          *(undefined1 *)(puVar11 + 1) = 0;
          *puVar11 = &PTR_GetPoolName_144eefca8;
          puVar11[2] = lVar10;
          uVar6 = *(undefined4 *)(param_1 + 0x7ac);
          uVar7 = *(undefined4 *)(param_1 + 0x7b0);
          uVar8 = *(undefined4 *)(param_1 + 0x7b4);
          *(undefined4 *)(puVar11 + 3) = *(undefined4 *)(param_1 + 0x7a8);
          *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar6;
          *(undefined4 *)(puVar11 + 4) = uVar7;
          *(undefined4 *)((longlong)puVar11 + 0x24) = uVar8;
          puVar11[5] = uVar5;
          puVar11[10] = 0;
          *(undefined1 *)(puVar11 + 0xb) = uVar3;
          *(undefined1 *)((longlong)puVar11 + 0x59) = 0;
          *(undefined4 *)((longlong)puVar11 + 0x5c) = 0xffffffff;
          puVar11[6] = 0;
          puVar11[7] = 0;
          puVar11[8] = 0;
          puVar11[9] = 0;
        }
      }
      return puVar9;
    }
    return (undefined8 *)0x0;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141f13d80 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FMessageTracerTypeInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerTypeInfo>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_141f0f810(lVar1);
    FMemory::operator_delete(lVar1,0x18);
    return;
  }
  return;
}



// FUNCTION 141f13de0 FUN_141f13de0 body=114 status=ok
// SIG undefined FUN_141f13de0(void)

void FUN_141f13de0(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  uVar2 = 0;
  uVar3 = uVar2;
  if (0 < (int)param_1[1]) {
    do {
      if (*(longlong *)(uVar3 + *param_1) != 0) {
        *(float *)(*(longlong *)(uVar3 + *param_1) + 0x424) =
             *(float *)((longlong)param_1 + 0xc) * *(float *)((longlong)param_1 + 0xc);
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      uVar3 = uVar3 + 8;
    } while ((int)uVar1 < (int)param_1[1]);
  }
  FMemory::operator_delete(*param_1);
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141f13e60 FUN_141f13e60 body=114 status=ok
// SIG undefined FUN_141f13e60(void)

void FUN_141f13e60(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  uVar2 = 0;
  uVar3 = uVar2;
  if (0 < (int)param_1[1]) {
    do {
      if (*(longlong *)(uVar3 + *param_1) != 0) {
        *(float *)(*(longlong *)(uVar3 + *param_1) + 0x430) =
             *(float *)((longlong)param_1 + 0xc) * *(float *)((longlong)param_1 + 0xc);
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      uVar3 = uVar3 + 8;
    } while ((int)uVar1 < (int)param_1[1]);
  }
  FMemory::operator_delete(*param_1);
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141f13ee0 FUN_141f13ee0 body=106 status=ok
// SIG undefined FUN_141f13ee0(void)

void FUN_141f13ee0(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  uVar1 = 0;
  uVar3 = uVar1;
  if (0 < (int)param_1[1]) {
    do {
      if (*(longlong *)(uVar1 + *param_1) != 0) {
        *(undefined4 *)(*(longlong *)(uVar1 + *param_1) + 0x438) =
             *(undefined4 *)((longlong)param_1 + 0xc);
      }
      uVar2 = (int)uVar3 + 1;
      uVar1 = uVar1 + 8;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < (int)param_1[1]);
  }
  FMemory::operator_delete(*param_1);
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141f13f50 FUN_141f13f50 body=107 status=ok
// SIG undefined FUN_141f13f50(void)

void FUN_141f13f50(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  LARGE_INTEGER local_res8 [3];
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  iVar1 = 0;
  if (0 < (int)param_1[1]) {
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar2 + *param_1) != 0) {
        *(undefined1 *)(*(longlong *)(lVar2 + *param_1) + 0x435) =
             *(undefined1 *)((longlong)param_1 + 0xc);
      }
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar1 < (int)param_1[1]);
  }
  FMemory::operator_delete(*param_1);
  QueryPerformanceCounter(local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8[0].s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 141f13fc0 FUN_141f13fc0 body=735 status=ok
// SIG undefined FUN_141f13fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141f13fc0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_2a8 [32];
  undefined1 local_288;
  undefined8 local_280;
  undefined1 *local_278;
  longlong local_270;
  undefined1 local_268 [184];
  undefined1 local_1b0 [184];
  undefined1 local_f8 [184];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  if (*(int *)(param_1 + 0x560) != 0) {
    cVar4 = *(char *)(param_1 + 0x434);
    if ((*(int *)(param_1 + 0x560) < 2) || (cVar4 == '\0')) {
      iVar7 = (cVar4 != '\0') + 1;
    }
    else {
      iVar7 = 4;
    }
    lVar1 = param_1 + 0x4c0;
    iVar5 = *(int *)(param_1 + 0x408) - *(int *)(param_1 + 0x404);
    *(undefined4 *)(param_1 + 0x4c8) = 0;
    iVar8 = (iVar5 + 1) * 5;
    if (*(int *)(param_1 + 0x450) == 1) {
      iVar8 = iVar5 + 1;
    }
    if (*(int *)(param_1 + 0x4cc) != iVar8 * iVar7) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (lVar1,iVar8 * iVar7);
    }
    FUN_1408bb700(local_f8);
    puVar2 = (undefined8 *)(param_1 + 0x548);
    puVar6 = *(undefined8 **)(param_1 + 0x558);
    if (*(undefined8 **)(param_1 + 0x558) == (undefined8 *)0x0) {
      puVar6 = puVar2;
    }
    local_278 = local_f8;
    local_280 = *puVar6;
    local_288 = 0;
    local_270 = lVar1;
    cVar3 = FUN_141f172c0(param_1,cVar4,0,*(undefined1 *)(param_1 + 0x434));
    if (cVar3 != '\0') {
      (**(code **)(*param_2 + 0x10))(param_2,local_f8,0x7f7fffff);
    }
    if ((*(char *)(param_1 + 0x434) != '\0') && (1 < *(int *)(param_1 + 0x560))) {
      FUN_1408bb700(local_268);
      puVar6 = *(undefined8 **)(param_1 + 0x558);
      if (*(undefined8 **)(param_1 + 0x558) == (undefined8 *)0x0) {
        puVar6 = puVar2;
      }
      local_278 = local_268;
      local_280 = puVar6[1];
      local_288 = 1;
      local_270 = lVar1;
      cVar3 = FUN_141f172c0(param_1,cVar4,0,0);
      if (cVar3 != '\0') {
        (**(code **)(*param_2 + 0x10))(param_2,local_268,0x7f7fffff);
      }
      FUN_1408bbda0(local_268);
    }
    if (cVar4 != '\0') {
      FUN_1408bb700(local_1b0);
      puVar6 = *(undefined8 **)(param_1 + 0x558);
      if (*(undefined8 **)(param_1 + 0x558) == (undefined8 *)0x0) {
        puVar6 = puVar2;
      }
      local_278 = local_1b0;
      local_280 = *puVar6;
      local_288 = 2;
      local_270 = lVar1;
      cVar3 = FUN_141f172c0(param_1,cVar4,1,*(undefined1 *)(param_1 + 0x434));
      if (cVar3 != '\0') {
        (**(code **)(*param_2 + 0x10))(param_2,local_1b0,0x7f7fffff);
      }
      if (1 < *(int *)(param_1 + 0x560)) {
        FUN_1408bb700(local_268);
        puVar6 = *(undefined8 **)(param_1 + 0x558);
        if (*(undefined8 **)(param_1 + 0x558) == (undefined8 *)0x0) {
          puVar6 = puVar2;
        }
        local_278 = local_268;
        local_280 = puVar6[1];
        local_288 = 3;
        local_270 = lVar1;
        cVar4 = FUN_141f172c0(param_1,cVar4,1,0);
        if (cVar4 != '\0') {
          (**(code **)(*param_2 + 0x10))(param_2,local_268,0x7f7fffff);
        }
        FUN_1408bbda0(local_268);
      }
      FUN_1408bbda0(local_1b0);
    }
    FUN_1408bbda0(local_f8);
  }
  return;
}



// FUNCTION 141f142e0 FUN_141f142e0 body=135 status=ok
// SIG undefined FUN_141f142e0(void)

void FUN_141f142e0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x80);
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x78) == 0) {
    lVar1 = param_1;
  }
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        FMemory::Free();
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1);
      lVar1 = lVar1 + 0x78;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != param_2) {
    FUN_141f1bf20(param_1,param_2);
  }
  return;
}



// FUNCTION 141f14370 FUN_141f14370 body=38 status=ok
// SIG undefined FUN_141f14370(void)

void FUN_141f14370(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000141f14393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2,param_3,param_4,param_5);
  return;
}


