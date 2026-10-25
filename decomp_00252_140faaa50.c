// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140faaa50 FUN_140faaa50 body=150 status=ok
// SIG undefined FUN_140faaa50(void)

void FUN_140faaa50(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 0x40);
  local_res14 = *(undefined4 *)(param_1 + 0x44);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
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
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      FUN_140fa5480(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140faaaf0 FUN_140faaaf0 body=376 status=ok
// SIG undefined FUN_140faaaf0(void)

void FUN_140faaaf0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 uStack_1c;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    iVar2 = *(int *)(lVar6 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar10 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar10;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    else {
      lVar6 = 0;
    }
    if (((*(uint *)(lVar6 + 8) & 0x30000000) == 0) && (lVar6 = FUN_140eccc40(*param_1), lVar6 != 0))
    {
      uVar3 = *param_1;
      plVar1 = (longlong *)(lVar6 + 0xe40);
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143fcff50;
        FWeakObjectPtr::operator=(plVar7 + 1,uVar3);
        *(undefined4 *)(plVar7 + 2) = 0x40fb9310;
        *(undefined4 *)((longlong)plVar7 + 0x14) = 1;
        *(undefined4 *)(plVar7 + 3) = 0;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_1c;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar8;
        *plVar7 = (longlong)&PTR_FUN_143fcff98;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
        iVar2 = *(int *)(lVar6 + 0xe48);
        *(int *)(lVar6 + 0xe48) = iVar2 + 1;
        if (*(int *)(lVar6 + 0xe4c) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar9 = plVar7;
        *(undefined4 *)(puVar9 + 1) = 3;
      }
      FUN_140fb01d0(*param_1);
    }
  }
  return;
}



// FUNCTION 140faac70 FUN_140faac70 body=271 status=ok
// SIG undefined FUN_140faac70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140faac70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar1 = *param_1;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = uVar1;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140faeef0;
  uVar3 = FUN_1420849a0(uVar1,local_68,local_b8);
  FUN_14208c260(uVar1,uVar3);
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
  if (local_78 != 0) {
    plVar4 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar4 = local_88;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140faad80 FUN_140faad80 body=1481 status=ok
// SIG undefined FUN_140faad80(void)

void FUN_140faad80(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  longlong local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8;
  longlong local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined2 local_84;
  undefined1 local_82;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  
  lVar9 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar9 != 0) {
    lVar10 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar19 = (longlong *)*param_2;
      local_d8 = 0;
      local_d0 = 0;
      plVar2 = plVar19 + (int)param_2[1];
      if (plVar19 != plVar2) {
LAB_140faae34:
        if (*plVar19 != 0) {
          lVar10 = FUN_142f71d80();
          for (lVar9 = *plVar19; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
            if (lVar9 == lVar10) {
              if (*plVar19 != 0) {
                plVar11 = (longlong *)FUN_142f71d80();
                plVar14 = (longlong *)*plVar19;
                plVar17 = plVar14;
                goto joined_r0x000140faae7c;
              }
              break;
            }
          }
        }
        goto LAB_140faaeea;
      }
LAB_140fab30d:
      FUN_140f98600(*param_1 + 0x920,&local_d8);
      TArray<Chaos::FDirtyJointConstraintData,TSizedDefaultAllocator<32>_>::
      ~TArray<Chaos::FDirtyJointConstraintData,TSizedDefaultAllocator<32>_>(&local_d8);
    }
  }
  return;
joined_r0x000140faae7c:
  if (plVar17 == (longlong *)0x0) goto LAB_140faae8e;
  if (plVar17 == plVar11) goto LAB_140faae90;
  plVar17 = (longlong *)plVar17[6];
  goto joined_r0x000140faae7c;
LAB_140faae8e:
  plVar14 = (longlong *)0x0;
LAB_140faae90:
  lVar9 = plVar14[0x1f];
  if (lVar9 == 0) {
    (**(code **)(*plVar14 + 0x368))(plVar14);
    lVar9 = plVar14[0x1f];
    if (lVar9 != 0) goto LAB_140faaeb4;
LAB_140faaeea:
    lVar9 = 0;
  }
  else {
LAB_140faaeb4:
    lVar10 = FUN_141437870();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140faaeea;
  }
  if (*plVar19 != 0) {
    lVar12 = FUN_142f71d80();
    for (lVar10 = *plVar19; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
      if (lVar10 == lVar12) {
        if ((*plVar19 != 0) && (lVar9 != 0)) {
          uVar13 = FWeakObjectPtr::Get(*param_1 + 0x960);
          FUN_142f5ef60(uVar13,*plVar19);
          local_c8 = 0;
          FText::FText(local_c0);
          local_a0 = *plVar19;
          local_a8 = 0;
          local_90 = 0xffffffff;
          local_84 = 0;
          local_82 = 0;
          local_80 = 0;
          local_c8 = 1;
          local_8c = (ulonglong)*(byte *)(lVar9 + 0x4c0) << 0x20;
          local_98 = lVar9;
          uVar13 = FUN_142f5bb60(plVar19);
          uVar13 = FUN_142dea370(uVar13,local_68);
          FText::operator=(local_c0,uVar13);
          plVar14 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar17 = local_60 + 1;
            lVar10 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
              }
            }
          }
          uVar13 = FWeakObjectPtr::Get(*param_1 + 0x960);
          plVar14 = (longlong *)FUN_142f5ed60(uVar13);
          if (*plVar14 == 0) goto LAB_140fab03e;
          lVar15 = FUN_142f71d80();
          lVar10 = *plVar14;
          lVar12 = lVar10;
          goto joined_r0x000140fab02b;
        }
        break;
      }
    }
  }
LAB_140fab2f8:
  plVar19 = plVar19 + 1;
  if (plVar19 == plVar2) goto LAB_140fab30d;
  goto LAB_140faae34;
joined_r0x000140fab02b:
  if (lVar12 == 0) goto LAB_140fab03e;
  if (lVar12 == lVar15) goto LAB_140fab040;
  lVar12 = *(longlong *)(lVar12 + 0x30);
  goto joined_r0x000140fab02b;
LAB_140fab03e:
  lVar10 = 0;
LAB_140fab040:
  if (*plVar19 != 0) {
    lVar16 = FUN_142f71d80();
    lVar12 = *plVar19;
    for (lVar15 = lVar12; lVar15 != 0; lVar15 = *(longlong *)(lVar15 + 0x30)) {
      if (lVar15 == lVar16) goto LAB_140fab066;
    }
  }
  lVar12 = 0;
LAB_140fab066:
  local_8c._0_6_ = CONCAT15(lVar10 == lVar12,(undefined5)local_8c);
  plVar14 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x960);
  uVar5 = (**(code **)(*plVar14 + 0x720))(plVar14);
  local_8c = CONCAT17(param_3,CONCAT16(uVar5,(undefined6)local_8c));
  local_a8 = 0;
  plVar17 = *(longlong **)param_1[1];
  plVar14 = plVar17 + (int)((longlong *)param_1[1])[1];
  for (; plVar17 != plVar14; plVar17 = plVar17 + 1) {
    if (*plVar17 != 0) {
      lVar15 = FUN_142f71d80();
      lVar10 = *plVar17;
      for (lVar12 = lVar10; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x30)) {
        if (lVar12 == lVar15) goto LAB_140fab0d6;
      }
    }
    lVar10 = 0;
LAB_140fab0d6:
    if (*plVar19 != 0) {
      lVar16 = FUN_142f71d80();
      lVar12 = *plVar19;
      for (lVar15 = lVar12; lVar15 != 0; lVar15 = *(longlong *)(lVar15 + 0x30)) {
        if (lVar15 == lVar16) goto LAB_140fab100;
      }
    }
    lVar12 = 0;
LAB_140fab100:
    if (lVar10 == lVar12) {
      uVar5 = 1;
      goto LAB_140fab110;
    }
  }
  uVar5 = 0;
LAB_140fab110:
  local_84 = CONCAT11(local_84._1_1_,uVar5);
  uVar7 = FUN_1409ac010(lVar9);
  local_78 = 0;
  local_70 = 0;
  FUN_140fb17e0(*param_1,uVar7,&local_78);
  uVar7 = (undefined4)local_70;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_78);
  local_80 = uVar7;
  cVar6 = FWeakObjectPtr::IsValid(*param_1 + 0x968);
  if (cVar6 == '\0') {
    local_84 = CONCAT11(1,(undefined1)local_84);
  }
  else {
    uVar13 = FWeakObjectPtr::Get(*param_1 + 0x968);
    uVar5 = FUN_140c477a0(uVar13,*plVar19);
    local_84 = CONCAT11(uVar5,(undefined1)local_84);
  }
  switch(local_8c._4_1_) {
  case 1:
    local_82 = 1;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    local_82 = 2;
  }
  cVar6 = FText::IsEmpty(local_c0);
  if (cVar6 != '\0') {
    uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_50,L"-DESIGNER: Missing Mission Name-",L"GFxMissionLogMenu",
                        L"MissingName");
    FText::operator=(local_c0,uVar13);
    plVar14 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_48 + 1;
      lVar9 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
  }
  uVar4 = local_d0;
  lVar9 = (longlong)(int)local_d0;
  iVar8 = (int)local_d0 + 1;
  local_d0 = CONCAT44(local_d0._4_4_,iVar8);
  if (local_d0._4_4_ < iVar8) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(&local_d8,uVar4 & 0xffffffff);
  }
  puVar18 = (undefined1 *)(lVar9 * 0x50 + local_d8);
  *puVar18 = local_c8;
  FText::FText(puVar18 + 8,local_c0);
  plVar14 = local_b8;
  puVar18[0x20] = local_a8;
  *(longlong *)(puVar18 + 0x28) = local_a0;
  *(longlong *)(puVar18 + 0x30) = local_98;
  *(undefined4 *)(puVar18 + 0x38) = local_90;
  *(undefined4 *)(puVar18 + 0x3c) = (undefined4)local_8c;
  puVar18[0x40] = local_8c._4_1_;
  puVar18[0x41] = local_8c._5_1_;
  puVar18[0x42] = local_8c._6_1_;
  puVar18[0x43] = local_8c._7_1_;
  puVar18[0x44] = (undefined1)local_84;
  puVar18[0x45] = local_84._1_1_;
  puVar18[0x46] = local_82;
  *(undefined4 *)(puVar18 + 0x48) = local_80;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_b8 + 1;
    lVar9 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  goto LAB_140fab2f8;
}



// FUNCTION 140fab370 FUN_140fab370 body=342 status=ok
// SIG undefined FUN_140fab370(void)

void FUN_140fab370(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  
  lVar4 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
  if (lVar4 != 0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar4 = *(longlong *)(lVar4 + 0x850), lVar4 != 0)) {
      lVar5 = AGTutorialStepVideo::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar5 = *param_1;
        plVar1 = (longlong *)(lVar4 + 0x358);
        plVar6 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_FUN_143f4d170;
          FWeakObjectPtr::operator=(plVar6 + 1,lVar5);
          plVar6[2] = (longlong)FUN_140fb5560;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar6[4] = lVar5;
          *plVar6 = (longlong)&PTR_FUN_143f4d1b8;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
          (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
          iVar2 = *(int *)(lVar4 + 0x360);
          *(int *)(lVar4 + 0x360) = iVar2 + 1;
          if (*(int *)(lVar4 + 0x364) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
          }
          puVar7 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
          *puVar7 = plVar6;
          *(undefined4 *)(puVar7 + 1) = 3;
        }
      }
    }
  }
  return;
}



// FUNCTION 140fab4d0 FUN_140fab4d0 body=819 status=ok
// SIG undefined FUN_140fab4d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fab4d0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_a0 = (undefined4)param_1[1];
  local_9c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_b8);
  FUN_14172a400(local_b8);
  cVar3 = FWeakObjectPtr::IsValid(&local_a0);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_a0);
    lVar8 = 0;
    iVar1 = *(int *)(lVar5 + 0xc);
    lVar5 = lVar8;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar10 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar10;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar10) * 0x18;
    }
    if (((*(uint *)(lVar5 + 8) & 0x30000000) == 0) &&
       (lVar5 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar5 != 0)) {
      lVar6 = FUN_142f6c9f0(lVar5);
      lVar2 = *param_1;
      if (lVar6 == 0) {
        if (*(longlong *)(lVar2 + 0x738) == 0) {
          uStack_a8._0_4_ = 0;
          local_b0 = FUN_140fd5020;
          if (*(longlong *)(lVar5 + 400) == 0) {
            uVar7 = *(undefined8 *)(lVar5 + 0x3f8);
          }
          else {
            uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
          }
          plVar9 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar9 != (longlong *)0x0) {
            *plVar9 = (longlong)&PTR_FUN_143f77b88;
            FWeakObjectPtr::operator=(plVar9 + 1,lVar2);
            *(undefined4 *)(plVar9 + 2) = (undefined4)local_b0;
            *(undefined4 *)((longlong)plVar9 + 0x14) = local_b0._4_4_;
            *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_a8;
            *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_a8._4_4_;
            lVar5 = FDelegateHandle::GenerateNewID();
            plVar9[5] = lVar5;
            *plVar9 = (longlong)&PTR_FUN_143f77bd0;
          }
          local_98 = 0;
          local_90 = 0;
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x30))(plVar9,&local_98);
          }
          FWeakObjectPtr::operator=(local_88,0);
          local_c0 = 0xbf800000;
          local_c8 = 1;
          local_80 = 0;
          local_48 = (longlong *)0x0;
          local_38 = 0;
          local_78 = AK::MemoryMgr::StartProfileThreadUsage;
          FUN_142880850(uVar7,lVar2 + 0x738,&local_98,0x3e800000);
          if (local_38 != 0) {
            plVar11 = local_68;
            if (local_48 != (longlong *)0x0) {
              plVar11 = local_48;
            }
            if (plVar11 != (longlong *)0x0) {
              (**(code **)(*plVar11 + 0x10))(plVar11,0);
            }
          }
          if (local_48 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x28))(plVar9,0);
            lVar5 = FMemory::Realloc(plVar9,0,0);
            if (lVar5 != 0) {
              FMemory::Free(lVar5);
            }
          }
        }
      }
      else {
        FWeakObjectPtr::operator=(lVar2 + 0x728,lVar6);
        lVar2 = *param_1;
        uStack_a8 = lVar8;
        local_b0 = (code *)lVar2;
        if (lVar2 != 0) {
          uVar7 = FUN_142f772d0();
          uStack_a8 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar7);
        }
        FUN_142f69080(lVar6,&local_b0);
        lVar2 = *param_1;
        local_b0 = (code *)lVar2;
        if (lVar2 != 0) {
          uVar7 = FUN_142f768a0();
          lVar8 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar7);
        }
        uStack_a8 = lVar8;
        FUN_142f690f0(lVar6,&local_b0,1);
        if (*(longlong *)(lVar5 + 400) == 0) {
          uVar7 = *(undefined8 *)(lVar5 + 0x3f8);
        }
        else {
          uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
        }
        lVar5 = *param_1;
        FUN_142880530(uVar7,lVar5 + 0x738);
        *(undefined8 *)(lVar5 + 0x738) = 0;
        *(undefined1 *)(*param_1 + 0x839) = 1;
        *(undefined8 *)(*param_1 + 0x738) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140fab810 FUN_140fab810 body=324 status=ok
// SIG undefined FUN_140fab810(void)

void FUN_140fab810(longlong *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 local_res8;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined2 local_10;
  
  plVar6 = *(longlong **)(*param_1 + 0x5b0);
  if (plVar6 != (longlong *)0x0) {
    if ((char)param_1[1] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140fab947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x278))(plVar6,0);
      return;
    }
    local_48 = 0;
    local_40 = 0;
    uVar5 = FUN_1404b03b0();
    FText::FText(local_38,uVar5);
    local_18 = 0;
    local_10 = 1;
    local_20 = 1;
    uVar2 = 0;
    if ((char)param_1[1] != '\0') {
      FName::FName(&local_res8,L"OakPC_OpenStatusMenu",1);
      uVar3 = local_40;
      lVar7 = (longlong)(int)local_40;
      iVar4 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar4);
      if (local_40._4_4_ < iVar4) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_48,uVar3 & 0xffffffff);
      }
      *(undefined8 *)(local_48 + lVar7 * 8) = local_res8;
      uVar2 = (undefined1)param_1[1];
    }
    plVar6 = (longlong *)(*(longlong *)(*param_1 + 0x5b0) + 0x308);
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_48,uVar2);
    (**(code **)(**(longlong **)(*param_1 + 0x5b0) + 0x278))(*(longlong **)(*param_1 + 0x5b0),1);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_30 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (local_48 != 0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 140fab960 FUN_140fab960 body=238 status=ok
// SIG undefined FUN_140fab960(void)

void FUN_140fab960(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((((*(uint *)(lVar5 + 8) & 0x30000000) == 0) && (lVar5 = FUN_141083c60(*param_1), lVar5 != 0)
        ) && (cVar3 = FUN_1412ba5c0(lVar5), cVar3 != '\0')) {
      lVar2 = *param_1;
      if (((*(char *)(lVar2 + 0xa51) != '\a') && (*(char *)(lVar2 + 0xd30) == '\x02')) &&
         (*(longlong *)(lVar2 + 0x950) != 0)) {
        FUN_1412c3f20(lVar5,*(longlong *)(lVar2 + 0x950) + 0x188,1);
      }
      FUN_1412ceef0(lVar5);
    }
  }
  return;
}



// FUNCTION 140faba50 FUN_140faba50 body=1705 status=ok
// SIG undefined FUN_140faba50(void)

void FUN_140faba50(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  undefined1 uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  int iVar22;
  undefined4 *puVar23;
  int local_res10;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined1 local_90 [8];
  longlong *local_88;
  longlong local_78;
  int local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [24];
  
  lVar13 = FUN_141083c60(*param_1);
  lVar14 = 0;
  if (lVar13 != 0) {
    lVar14 = FWeakObjectPtr::Get(lVar13 + 0x754);
  }
  lVar13 = FUN_141083c60(*param_1);
  if (lVar14 != 0) {
    lVar17 = *param_1;
    uVar15 = FUN_140585cd0(lVar14);
    plVar16 = (longlong *)FUN_140f991c0(uVar15,&local_78,lVar17);
    if (param_2 != plVar16) {
      iVar22 = (int)param_2[1];
      lVar14 = *param_2;
      if (iVar22 != 0) {
        plVar20 = (longlong *)(lVar14 + 8);
        do {
          if (*plVar20 != 0) {
            FMemory::Free();
          }
          plVar20 = plVar20 + 0xc;
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
        lVar14 = *param_2;
      }
      if (lVar14 != 0) {
        FMemory::Free();
      }
      *param_2 = *plVar16;
      *plVar16 = 0;
      *(int *)(param_2 + 1) = (int)plVar16[1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar16 + 0xc);
      plVar16[1] = 0;
    }
    if (local_70 != 0) {
      plVar16 = (longlong *)(local_78 + 8);
      iVar22 = local_70;
      do {
        if (*plVar16 != 0) {
          FMemory::Free();
        }
        plVar16 = plVar16 + 0xc;
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
  }
  if (lVar13 != 0) {
    puVar4 = *(undefined4 **)(lVar13 + 0x7d8);
    iVar22 = *(int *)(lVar13 + 0x7e0);
    if (puVar4 != puVar4 + (longlong)iVar22 * 0x9c) {
      puVar23 = puVar4 + 0x38;
      do {
        if ((*(char *)((longlong)puVar23 + -0x43) == '\x05') &&
           (lVar13 = FWeakObjectPtr::Get(puVar23 + -0x32), lVar13 != 0)) {
          lVar14 = ALandscape::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if ((bVar8) && (*(char *)(lVar13 + 0x630) != '\0')) {
            iVar19 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar19 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar19 + 1) {
              TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_2,iVar19);
            }
            puVar21 = (undefined8 *)(*param_2 + (longlong)iVar19 * 0x60);
            *puVar21 = *(undefined8 *)(puVar23 + -0x10);
            FString::FString(puVar21 + 1,puVar23 + -0xe);
            uVar15 = *(undefined8 *)(puVar23 + -6);
            puVar21[4] = *(undefined8 *)(puVar23 + -8);
            puVar21[5] = uVar15;
            uVar5 = puVar23[-3];
            uVar6 = puVar23[-2];
            uVar7 = puVar23[-1];
            *(undefined4 *)(puVar21 + 6) = puVar23[-4];
            *(undefined4 *)((longlong)puVar21 + 0x34) = uVar5;
            *(undefined4 *)(puVar21 + 7) = uVar6;
            *(undefined4 *)((longlong)puVar21 + 0x3c) = uVar7;
            uVar5 = puVar23[1];
            uVar6 = puVar23[2];
            uVar7 = puVar23[3];
            *(undefined4 *)(puVar21 + 8) = *puVar23;
            *(undefined4 *)((longlong)puVar21 + 0x44) = uVar5;
            *(undefined4 *)(puVar21 + 9) = uVar6;
            *(undefined4 *)((longlong)puVar21 + 0x4c) = uVar7;
            puVar21[10] = *(undefined8 *)(puVar23 + 4);
            puVar21[0xb] = *(undefined8 *)(puVar23 + 6);
            if ((iVar19 < 0) || ((int)param_2[1] <= iVar19)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (bVar8) {
              uVar15 = FWeakObjectPtr::Get(puVar23 + -0x32);
              *(undefined8 *)((longlong)iVar19 * 0x60 + 0x58 + *param_2) = uVar15;
            }
          }
        }
        puVar3 = puVar23 + 100;
        puVar23 = puVar23 + 0x9c;
      } while (puVar3 != puVar4 + (longlong)iVar22 * 0x9c);
    }
  }
  iVar22 = 0;
  if (0 < (int)param_2[1]) {
    lVar13 = 0;
    local_res10 = 1;
    do {
      plVar16 = (longlong *)(*param_2 + lVar13);
      lVar14 = plVar16[0xb];
      if (lVar14 == 0) {
LAB_140fabcf6:
        lVar14 = 0;
      }
      else {
        lVar17 = FUN_142f477c0();
        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (!bVar8) goto LAB_140fabcf6;
      }
      if ((*plVar16 != 0) && (*(char *)(*plVar16 + 0xd1) == '\x05')) {
        bVar8 = true;
        goto LAB_140fabdbf;
      }
      bVar8 = false;
      if ((lVar14 == 0) || (*(char *)(lVar14 + 0xd8) == '\x01')) {
LAB_140fac05c:
        if (*(longlong *)((longlong)iVar22 * 0x60 + 8 + *param_2) != 0) {
          FMemory::Free();
        }
        iVar19 = (int)param_2[1];
        iVar12 = (iVar19 - iVar22) + -1;
        if (iVar12 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 + (longlong)iVar22 * 0x60),
                     (void *)((longlong)local_res10 * 0x60 + *param_2),(longlong)iVar12 * 0x60);
          iVar19 = (int)param_2[1];
        }
        *(int *)(param_2 + 1) = iVar19 + -1;
        TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(param_2);
        iVar22 = iVar22 + -1;
        local_res10 = local_res10 + -1;
        lVar13 = lVar13 + -0x60;
      }
      else {
        lVar17 = FWeakObjectPtr::Get(*param_1 + 0x58c);
        if (lVar17 == 0) {
LAB_140fabd77:
          lVar17 = 0;
        }
        else {
          lVar18 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar18 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar18 + 0x90) * 8) != lVar18 + 0x88)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (!bVar9) goto LAB_140fabd77;
        }
        cVar10 = FUN_142f3e730(lVar14,lVar17);
        if (cVar10 == '\0') goto LAB_140fac05c;
        cVar10 = FOutputDevice::CanBeUsedOnAnyThread();
        if (cVar10 == '\0') {
          uVar15 = FUN_140e971d0(*param_1);
          cVar10 = FUN_142f43380(lVar14,uVar15,0);
          if (cVar10 == '\0') goto LAB_140fac05c;
        }
LAB_140fabdbf:
        FText::FText(local_90);
        if (lVar14 == 0) {
          if ((!bVar8) || (lVar14 = plVar16[0xb], lVar14 == 0)) {
LAB_140fabece:
            lVar14 = *plVar16 + 0x30;
            goto LAB_140fabed5;
          }
          lVar17 = UCheckBoxWidgetStyle::StaticClass();
          if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if ((bVar8) && (lVar14 = FWeakObjectPtr::Get(lVar14 + 0x590), lVar14 != 0)) {
            lVar17 = FUN_14148cad0();
            if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (!bVar8) goto LAB_140fabe6b;
          }
          else {
LAB_140fabe6b:
            lVar14 = 0;
          }
          if (lVar14 == 0) goto LAB_140fabece;
          uVar15 = (**(code **)(*(longlong *)(lVar14 + 0x608) + 0x68))
                             ((longlong *)(lVar14 + 0x608),local_68);
          FText::operator=(local_90,uVar15);
          plVar20 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_60 + 1;
            lVar14 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar20 + 0xc);
              iVar19 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar19 == 1) {
                (**(code **)(*plVar20 + 8))(plVar20,1);
              }
            }
          }
        }
        else {
          lVar14 = lVar14 + 0x98;
LAB_140fabed5:
          FText::operator=(local_90,lVar14);
        }
        lVar14 = FText::FText(local_50,local_90);
        uVar15 = FUN_1404b03b0();
        FText::FText(local_b8,uVar15);
        local_a0 = 0;
        local_9c = 0;
        FText::operator=(local_b8,lVar14);
        local_a0 = 0;
        plVar20 = *(longlong **)(lVar14 + 8);
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar20 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar2 = (int *)((longlong)plVar20 + 0xc);
            iVar19 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*plVar20 + 8))(plVar20,1);
            }
          }
        }
        uVar15 = (**(code **)(*(longlong *)*param_1 + 0x148))();
        uVar11 = FUN_1412ab760(plVar16,uVar15);
        local_9c._0_5_ = CONCAT14(uVar11,(undefined4)local_9c);
        iVar19 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar19 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar19 + 1) {
          FUN_140d979d0(param_3,iVar19);
        }
        lVar14 = *param_3 + (longlong)iVar19 * 0x28;
        FText::FText(lVar14,local_b8);
        plVar16 = local_b0;
        *(undefined1 *)(lVar14 + 0x18) = local_a0;
        *(undefined4 *)(lVar14 + 0x1c) = (undefined4)local_9c;
        *(undefined1 *)(lVar14 + 0x20) = local_9c._4_1_;
        *(undefined1 *)(lVar14 + 0x21) = local_9c._5_1_;
        *(undefined1 *)(lVar14 + 0x22) = local_9c._6_1_;
        *(undefined1 *)(lVar14 + 0x23) = local_9c._7_1_;
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar20 = local_b0 + 1;
          lVar14 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar2 = (int *)((longlong)plVar16 + 0xc);
            iVar19 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16,1);
            }
          }
        }
        plVar16 = local_88;
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar20 = local_88 + 1;
          lVar14 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar2 = (int *)((longlong)plVar16 + 0xc);
            iVar19 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16,1);
            }
          }
        }
      }
      local_res10 = local_res10 + 1;
      iVar22 = iVar22 + 1;
      lVar13 = lVar13 + 0x60;
    } while (iVar22 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 140fac100 FUN_140fac100 body=157 status=ok
// SIG undefined FUN_140fac100(void)

void FUN_140fac100(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
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
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140fac190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)*param_1 + 0x578))((longlong *)*param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 140fac1a0 FUN_140fac1a0 body=371 status=ok
// SIG undefined FUN_140fac1a0(void)

void FUN_140fac1a0(longlong *param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined1 *puVar4;
  longlong *plVar5;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined2 local_24;
  undefined1 local_22;
  undefined4 local_20;
  
  FText::FText(local_60);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_2c = 0;
  local_24 = 0;
  local_22 = 0;
  local_20 = 0;
  local_30 = 0xffffffff;
  FText::operator=(local_60,param_3);
  lVar3 = *param_1;
  plVar5 = (longlong *)(lVar3 + 0x920);
  local_48 = 2;
  local_24._1_1_ = 1;
  iVar2 = *(int *)(lVar3 + 0x928);
  *(int *)(lVar3 + 0x928) = iVar2 + 1;
  if (*(int *)(lVar3 + 0x92c) < iVar2 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar5,iVar2);
  }
  _Src = (void *)(*plVar5 + (longlong)param_2 * 0x50);
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 0x50),_Src,(longlong)(iVar2 - param_2) * 0x50);
  puVar4 = (undefined1 *)((longlong)param_2 * 0x50 + *plVar5);
  *puVar4 = 1;
  FText::FText(puVar4 + 8,local_60);
  puVar4[0x20] = local_48;
  *(undefined8 *)(puVar4 + 0x28) = local_40;
  *(undefined8 *)(puVar4 + 0x30) = local_38;
  *(undefined4 *)(puVar4 + 0x38) = local_30;
  *(undefined4 *)(puVar4 + 0x3c) = (undefined4)local_2c;
  puVar4[0x40] = local_2c._4_1_;
  puVar4[0x41] = local_2c._5_1_;
  puVar4[0x42] = local_2c._6_1_;
  puVar4[0x43] = local_2c._7_1_;
  puVar4[0x44] = (undefined1)local_24;
  puVar4[0x45] = local_24._1_1_;
  puVar4[0x46] = local_22;
  *(undefined4 *)(puVar4 + 0x48) = local_20;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_58 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  return;
}



// FUNCTION 140fac320 FUN_140fac320 body=122 status=ok
// SIG undefined FUN_140fac320(void)

void FUN_140fac320(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0xb8) == 0)) &&
     (*(longlong *)(param_2 + 0x1d0) == 0)) {
    piVar1 = (int *)param_1[1];
    iVar2 = FUN_14129f600(param_2,param_1[2],0);
    *piVar1 = *piVar1 + iVar2;
    param_1 = (longlong *)*param_1;
    iVar2 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = *(undefined8 *)(param_2 + 0x78);
  }
  return;
}



// FUNCTION 140fac3a0 FUN_140fac3a0 body=119 status=ok
// SIG undefined FUN_140fac3a0(void)

ulonglong FUN_140fac3a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  uVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(param_2 + 0x98,lVar1 + 0x98);
  if ((char)uVar2 != '\0') {
    uVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(param_2 + 0x80,lVar1 + 0x80);
    if ((((char)uVar2 != '\0') &&
        (uVar2 = *(ulonglong *)(lVar1 + 0xa0), *(ulonglong *)(param_2 + 0xa0) == uVar2)) &&
       (uVar2 = 0, *(char *)(param_2 + 0xa9) == *(char *)(lVar1 + 0xa9))) {
      return 1;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140fac420 FUN_140fac420 body=181 status=ok
// SIG undefined FUN_140fac420(void)

bool FUN_140fac420(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_2 + 0x30);
  if ((lVar7 != 0) && (lVar1 = *(longlong *)(param_3 + 0x30), lVar1 != 0)) {
    lVar5 = FUN_142f5a280(lVar7);
    uVar4 = 0;
    if (lVar5 == 0) {
      uVar3 = 0;
    }
    else {
      uVar6 = FUN_142f5a280(lVar7);
      uVar3 = FUN_1404cfc20(uVar6);
    }
    lVar7 = FUN_142f5a280(lVar1);
    if (lVar7 != 0) {
      uVar6 = FUN_142f5a280(lVar1);
      uVar4 = FUN_1404cfc20(uVar6);
    }
    if (uVar3 != uVar4) {
      return uVar3 < uVar4;
    }
  }
  if (*(byte *)(param_2 + 0x40) != *(byte *)(param_3 + 0x40)) {
    return *(byte *)(param_2 + 0x40) < *(byte *)(param_3 + 0x40);
  }
  uVar2 = FUN_140fac4e0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  return (bool)uVar2;
}



// FUNCTION 140fac4e0 FUN_140fac4e0 body=1039 status=ok
// SIG undefined FUN_140fac4e0(void)

bool FUN_140fac4e0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  longlong *local_res10;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  plVar13 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x28) != 0) {
    lVar3 = FUN_142f71d80();
    lVar6 = *(longlong *)(param_2 + 0x28);
    lVar8 = lVar6;
joined_r0x000140fac50a:
    if (lVar8 != 0) {
      if (lVar8 != lVar3) goto code_r0x000140fac519;
      if (lVar6 != 0) {
        plVar12 = plVar13;
        if (lVar6 != 0) {
          plVar5 = (longlong *)FUN_142f71d80();
          for (plVar4 = *(longlong **)(param_2 + 0x28);
              (plVar12 = plVar13, plVar4 != (longlong *)0x0 &&
              (plVar12 = *(longlong **)(param_2 + 0x28), plVar4 != plVar5));
              plVar4 = (longlong *)plVar4[6]) {
          }
        }
        plVar4 = (longlong *)plVar12[0x1f];
        if (plVar4 == (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x368))(plVar12);
          plVar4 = (longlong *)plVar12[0x1f];
          if (plVar4 != (longlong *)0x0) goto LAB_140fac62d;
LAB_140fac667:
          plVar4 = plVar13;
        }
        else {
LAB_140fac62d:
          lVar6 = FUN_142f71d80();
          if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar14 = false;
          }
          else {
            bVar14 = true;
          }
          if (!bVar14) goto LAB_140fac667;
        }
        goto LAB_140fac526;
      }
    }
  }
  plVar4 = *(longlong **)(param_2 + 0x30);
LAB_140fac526:
  if (*(longlong *)(param_3 + 0x28) != 0) {
    lVar3 = FUN_142f71d80();
    lVar6 = *(longlong *)(param_3 + 0x28);
    lVar8 = lVar6;
joined_r0x000140fac543:
    if (lVar8 != 0) {
      if (lVar8 != lVar3) goto code_r0x000140fac54e;
      if (lVar6 != 0) {
        plVar12 = plVar13;
        if (lVar6 != 0) {
          plVar7 = (longlong *)FUN_142f71d80();
          for (plVar5 = *(longlong **)(param_3 + 0x28);
              (plVar12 = plVar13, plVar5 != (longlong *)0x0 &&
              (plVar12 = *(longlong **)(param_3 + 0x28), plVar5 != plVar7));
              plVar5 = (longlong *)plVar5[6]) {
          }
        }
        plVar5 = (longlong *)plVar12[0x1f];
        if (plVar5 == (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x368))(plVar12);
          plVar5 = (longlong *)plVar12[0x1f];
          if (plVar5 != (longlong *)0x0) goto LAB_140fac6c5;
LAB_140fac6ff:
          plVar5 = plVar13;
        }
        else {
LAB_140fac6c5:
          lVar6 = FUN_142f71d80();
          if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar14 = false;
          }
          else {
            bVar14 = true;
          }
          if (!bVar14) goto LAB_140fac6ff;
        }
        goto LAB_140fac55b;
      }
    }
  }
  plVar5 = *(longlong **)(param_3 + 0x30);
LAB_140fac55b:
  if ((plVar4 == (longlong *)0x0) || (plVar5 == (longlong *)0x0)) {
    iVar2 = FText::CompareTo(param_2 + 8,param_3 + 8,0);
    bVar14 = iVar2 < 0;
  }
  else {
    if (*(char *)((longlong)plVar4 + 0x177) == '\0') {
      if (*(char *)((longlong)plVar5 + 0x177) == '\0') {
        uVar10 = FUN_142dea370(plVar5 + 7,local_40);
        uVar11 = FUN_142dea370(plVar4 + 7,local_58);
        iVar2 = FText::CompareTo(uVar11,uVar10,0);
        bVar14 = iVar2 < 0;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_50 + 1;
          lVar6 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
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
        if (local_38 == (longlong *)0x0) {
          return bVar14;
        }
        LOCK();
        plVar13 = local_38 + 1;
        lVar6 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar6 != 1) {
          return bVar14;
        }
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
          return bVar14;
        }
        return bVar14;
      }
    }
    else {
      if (*(char *)((longlong)plVar5 + 0x177) == '\0') {
        return true;
      }
      FUN_142f5cd00(plVar4,&local_res10);
      while ((local_res10 != (longlong *)0x0 &&
             (plVar4 = (longlong *)FUN_142f71d80(), plVar12 = local_res10,
             local_res10 != (longlong *)0x0))) {
        while (plVar12 != plVar4) {
          plVar12 = (longlong *)plVar12[6];
          if (plVar12 == (longlong *)0x0) {
            return false;
          }
        }
        plVar4 = (longlong *)FUN_142f71d80();
        for (plVar12 = local_res10;
            (plVar7 = plVar13, plVar12 != (longlong *)0x0 &&
            (plVar7 = local_res10, plVar12 != plVar4)); plVar12 = (longlong *)plVar12[6]) {
        }
        if (plVar7 == (longlong *)plVar5[2]) {
          return true;
        }
        plVar12 = plVar13;
        if (local_res10 != (longlong *)0x0) {
          plVar7 = (longlong *)FUN_142f71d80();
          for (plVar4 = local_res10;
              (plVar12 = plVar13, plVar4 != (longlong *)0x0 &&
              (plVar12 = local_res10, plVar4 != plVar7)); plVar4 = (longlong *)plVar4[6]) {
          }
        }
        lVar6 = plVar12[0x1f];
        if (lVar6 == 0) {
          (**(code **)(*plVar12 + 0x368))(plVar12);
          lVar6 = plVar12[0x1f];
          if (lVar6 != 0) goto LAB_140fac795;
LAB_140fac7f3:
          local_res20 = 0;
          local_res10 = (longlong *)0x0;
        }
        else {
LAB_140fac795:
          lVar8 = FUN_142f71d80();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar14 = false;
          }
          else {
            bVar14 = true;
          }
          if (!bVar14) goto LAB_140fac7f3;
          puVar9 = (undefined8 *)FUN_142f5cd00(lVar6,local_res18);
          local_res10 = (longlong *)*puVar9;
        }
      }
    }
    bVar14 = false;
  }
  return bVar14;
code_r0x000140fac519:
  lVar8 = *(longlong *)(lVar8 + 0x30);
  goto joined_r0x000140fac50a;
code_r0x000140fac54e:
  lVar8 = *(longlong *)(lVar8 + 0x30);
  goto joined_r0x000140fac543;
}



// FUNCTION 140fac8f0 FUN_140fac8f0 body=165 status=ok
// SIG undefined FUN_140fac8f0(void)

void FUN_140fac8f0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_28 [8];
  longlong local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x594);
  if (lVar2 != 0) {
    lVar3 = FUN_1413ffe00();
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
      local_20 = param_1[1];
      local_18 = (undefined4)DAT_1468b5d88;
      local_10 = 0;
      local_14 = DAT_1468b5d88._4_4_;
      local_28[0] = 1;
      FUN_140e5e370(lVar2 + 0x26f0,local_28);
    }
  }
  return;
}



// FUNCTION 140fac9a0 FUN_140fac9a0 body=183 status=ok
// SIG undefined FUN_140fac9a0(void)

void FUN_140fac9a0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
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
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = *param_1;
      if (*(char *)(lVar4 + 0xa58) == '\0') {
        LOCK();
        *(undefined4 *)(lVar4 + 0x6c4) = 1;
        UNLOCK();
        lVar4 = *param_1;
      }
      *(undefined1 *)(lVar4 + 0xa58) = 0;
      FUN_140fca110(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140faca60 FUN_140faca60 body=529 status=ok
// SIG undefined FUN_140faca60(void)

void FUN_140faca60(longlong *param_1)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  
  AcquireSRWLockShared((PSRWLOCK)(*param_1 + 0x6f0));
  lVar1 = *param_1;
  lVar3 = *(longlong *)(lVar1 + 0x6e0);
  lVar8 = (longlong)*(int *)(lVar1 + 0x6e8) * 0xd0 + lVar3;
  if (lVar3 != lVar8) {
    do {
      if ((*(char *)(lVar3 + 0xa9) == '\x03') &&
         (plVar4 = *(longlong **)(lVar3 + 0xa0), plVar4 != (longlong *)0x0)) {
        if (*(char *)(lVar3 + 0xa8) != '\0') {
          *(undefined1 *)(lVar3 + 0xa8) = 0;
          (**(code **)(*plVar4 + 0x278))(plVar4,0);
          plVar4 = *(longlong **)(lVar3 + 0xa0);
        }
        if (plVar4 != (longlong *)0x0) {
          FUN_142f06500();
        }
      }
      lVar3 = lVar3 + 0xd0;
    } while (lVar3 != lVar8);
    lVar1 = *param_1;
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 0x6f0));
  AcquireSRWLockExclusive((PSRWLOCK)(*param_1 + 0x6f0));
  lVar1 = *param_1;
  lVar3 = (longlong)*(int *)(lVar1 + 0x6e8);
  if (*(int *)(lVar1 + 0x6e8) != 0) {
    iVar9 = 0;
    bVar10 = *(char *)(*(longlong *)(lVar1 + 0x6e0) + 0xa9) != '\x03';
    lVar8 = 0;
    iVar5 = 0;
    do {
      lVar8 = lVar8 + 1;
      iVar6 = iVar5 + 1;
      if (lVar8 < lVar3) {
        pcVar2 = (char *)(*(longlong *)(lVar1 + 0x6e0) + 0xa9 + lVar8 * 0xd0);
        do {
          if (bVar10 != (*pcVar2 != '\x03')) break;
          iVar6 = iVar6 + 1;
          lVar8 = lVar8 + 1;
          pcVar2 = pcVar2 + 0xd0;
        } while (lVar8 < lVar3);
      }
      iVar7 = iVar6 - iVar5;
      if (bVar10 == false) {
        if (iVar7 != 0) {
          plVar4 = (longlong *)((longlong)iVar5 * 0xd0 + 8 + *(longlong *)(lVar1 + 0x6e0));
          do {
            if (plVar4[0x17] != 0) {
              FMemory::Free();
            }
            if (*plVar4 != 0) {
              FMemory::Free();
            }
            plVar4 = plVar4 + 0x1a;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      else {
        if (iVar9 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar9 * 0xd0 + *(longlong *)(lVar1 + 0x6e0)),
                     (void *)((longlong)iVar5 * 0xd0 + *(longlong *)(lVar1 + 0x6e0)),
                     (longlong)iVar7 * 0xd0);
        }
        iVar9 = iVar9 + iVar7;
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar5 = iVar6;
    } while (lVar8 < lVar3);
    *(int *)(lVar1 + 0x6e8) = iVar9;
    lVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x000140facc6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x6f0));
  return;
}



// FUNCTION 140facc80 FUN_140facc80 body=908 status=ok
// SIG undefined FUN_140facc80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140facc80(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  undefined8 *puVar11;
  int *piVar12;
  wchar_t *pwVar13;
  int *piVar14;
  longlong *plVar15;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  longlong local_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar6 = FWeakObjectPtr::Get(*param_1 + 0x60c);
  if (lVar6 != 0) {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar15 = *(longlong **)(lVar6 + 0x968);
      lVar7 = *param_1;
      uVar2 = *(undefined8 *)(lVar6 + 0x960);
      puVar11 = (undefined8 *)(lVar7 + 0x658);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
      }
      local_68 = uVar2;
      plStack_60 = plVar15;
      if (&local_68 != puVar11) {
        local_68 = *puVar11;
        plStack_60 = *(longlong **)(lVar7 + 0x660);
        *puVar11 = uVar2;
        *(longlong **)(lVar7 + 0x660) = plVar15;
        local_48 = uVar2;
        plStack_40 = plVar15;
      }
      plVar15 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_60 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar12 = (int *)((longlong)plVar15 + 0xc);
          iVar1 = *piVar12;
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
    }
  }
  lVar6 = *param_1;
  plVar15 = *(longlong **)(lVar6 + 0x658);
  if (plVar15 != (longlong *)0x0) {
    plVar8 = (longlong *)FMemory::Realloc(0,0x30,0);
    pwVar13 = (wchar_t *)0x0;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar8 + 1,lVar6);
      plVar8[2] = (longlong)FUN_140fbf6c0;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar8[4] = lVar6;
      *plVar8 = (longlong)&PTR_FUN_143f4d1b8;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar15,1);
      plVar9 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
      iVar1 = (int)plVar15[1];
      pwVar13 = (wchar_t *)*plVar9;
      *(int *)(plVar15 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar15 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar1);
      }
      lVar6 = *plVar15;
      *(longlong **)(lVar6 + (longlong)iVar1 * 0x10) = plVar8;
      *(undefined4 *)(lVar6 + 8 + (longlong)iVar1 * 0x10) = 3;
    }
    *(wchar_t **)(*param_1 + 0x670) = pwVar13;
    lVar6 = *param_1;
  }
  lVar6 = FWeakObjectPtr::Get(lVar6 + 0x5c8);
  if (lVar6 != 0) {
    lVar7 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInputDeviceChanged",L"::");
      pwVar13 = (wchar_t *)0x0;
      while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar13 = pwVar4;
      }
      FName::FName(&local_50,pwVar13 + 2,1);
      lVar7 = *param_1;
      plVar15 = (longlong *)(lVar6 + 0x5f8);
      FWeakObjectPtr::operator=(&local_78,0);
      local_70 = 0;
      FWeakObjectPtr::operator=(&local_78,lVar7);
      local_70 = local_50;
      local_58 = 0;
      if ((local_50 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_78), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_70);
      }
      piVar12 = (int *)*plVar15;
      iVar1 = *(int *)(lVar6 + 0x600);
      for (piVar14 = piVar12; piVar14 != piVar12 + (longlong)iVar1 * 4; piVar14 = piVar14 + 4) {
        if (((*piVar14 == local_78) && (piVar14[1] == local_74)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar14), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_78), cVar5 == '\0')))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((bVar3) && (*(longlong *)(piVar14 + 2) == local_70)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          if ((int)((longlong)piVar14 - (longlong)piVar12 >> 4) != -1) goto LAB_140facfe4;
          break;
        }
      }
      iVar1 = *(int *)(lVar6 + 0x600);
      *(int *)(lVar6 + 0x600) = iVar1 + 1;
      if (*(int *)(lVar6 + 0x604) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar1);
      }
      piVar12 = (int *)((longlong)iVar1 * 0x10 + *plVar15);
      *piVar12 = local_78;
      piVar12[1] = local_74;
      *(longlong *)(piVar12 + 2) = local_70;
LAB_140facfe4:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
    }
  }
  return;
}



// FUNCTION 140fad010 FUN_140fad010 body=885 status=ok
// SIG undefined FUN_140fad010(void)

void FUN_140fad010(longlong *param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  code *local_58;
  undefined8 uStack_50;
  code *local_48;
  ulonglong uStack_40;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    pcVar10 = (code *)0x0;
    iVar9 = *(int *)(lVar4 + 0xc);
    pcVar7 = pcVar10;
    if (iVar9 < (int)DAT_1469e91c4) {
      uVar8 = iVar9 >> 0x1f & 0xffff;
      uVar3 = iVar9 + uVar8;
      pcVar7 = (code *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                       (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18);
    }
    if ((*(uint *)(pcVar7 + 8) & 0x30000000) == 0) {
      uVar5 = (**(code **)(*(longlong *)*param_1 + 0x148))();
      lVar4 = FUN_140c12480(uVar5);
      if ((lVar4 != 0) && (lVar4 = FARSupportInterface::GetXRTrackingSystem(lVar4), lVar4 != 0)) {
        if ((char)param_1[2] == '\0') {
          FUN_1407665e0(lVar4 + 0x48,*param_1);
          FUN_1407665e0(lVar4 + 0x28,*param_1);
          AcquireSRWLockShared((PSRWLOCK)(*param_1 + 0x6f0));
          lVar4 = *param_1;
          local_58 = (code *)0x0;
          uStack_50._4_4_ = 0;
          lVar11 = *(longlong *)(lVar4 + 0x6e0);
          lVar12 = (longlong)*(int *)(lVar4 + 0x6e8) * 0xd0 + lVar11;
          pcVar7 = pcVar10;
          pcVar6 = pcVar10;
          if (lVar11 != lVar12) {
            do {
              if ((*(char *)(lVar11 + 0xa9) - 2U & 0xfd) == 0) {
                iVar9 = (int)pcVar10;
                uStack_50._0_4_ = iVar9 + 1;
                if ((int)pcVar6 < (int)(uint)uStack_50) {
                  TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(&local_58,pcVar10);
                  pcVar6 = (code *)(ulonglong)uStack_50._4_4_;
                  pcVar7 = local_58;
                }
                pcVar10 = (code *)(ulonglong)(uint)uStack_50;
                FUN_140f9f450(pcVar7 + (longlong)iVar9 * 0xd0,lVar11);
              }
              lVar11 = lVar11 + 0xd0;
            } while (lVar11 != lVar12);
            lVar4 = *param_1;
          }
          ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x6f0));
          for (pcVar6 = pcVar7; pcVar6 != pcVar7 + (longlong)(int)pcVar10 * 0xd0;
              pcVar6 = pcVar6 + 0xd0) {
            FUN_140fd54c0(*param_1,pcVar6);
          }
          if ((int)pcVar10 != 0) {
            pcVar6 = pcVar7 + 8;
            do {
              if (*(longlong *)(pcVar6 + 0xb8) != 0) {
                FMemory::Free();
              }
              if (*(longlong *)pcVar6 != 0) {
                FMemory::Free();
              }
              pcVar6 = pcVar6 + 0xd0;
              uVar3 = (int)pcVar10 - 1;
              pcVar10 = (code *)(ulonglong)uVar3;
            } while (uVar3 != 0);
          }
        }
        else {
          uStack_50 = uStack_50 & 0xffffffff00000000;
          local_58 = FUN_140fc0f70;
          local_48 = FUN_140fc0f70;
          uStack_40 = uStack_50;
          pcVar6 = (code *)_guard_xfg_dispatch_icall_nop
                                     (L"&ThisClass::OnMinimapIconComponentBeginTracking",L"::");
          pcVar7 = pcVar10;
          while (pcVar1 = pcVar6, pcVar1 != (code *)0x0) {
            pcVar6 = (code *)_guard_xfg_dispatch_icall_nop((wchar_t *)(pcVar1 + 2),L"::");
            pcVar7 = pcVar1;
          }
          FName::FName(&local_res8,pcVar7 + 4,1);
          FUN_1407260e0(lVar4 + 0x28,*param_1,&local_48,local_res8);
          uStack_40 = uStack_40 & 0xffffffff00000000;
          local_48 = FUN_140fc1070;
          pcVar7 = (code *)_guard_xfg_dispatch_icall_nop
                                     (L"&ThisClass::OnMinimapIconComponentEndTracking",L"::");
          while (pcVar6 = pcVar7, pcVar6 != (code *)0x0) {
            pcVar7 = (code *)_guard_xfg_dispatch_icall_nop((wchar_t *)(pcVar6 + 2),L"::");
            pcVar10 = pcVar6;
          }
          FName::FName(&local_res8,pcVar10 + 4,1);
          FUN_1407260e0(lVar4 + 0x48,*param_1,&local_48,local_res8);
          local_58 = (code *)0x0;
          uStack_50._0_4_ = 0;
          uStack_50._4_4_ = 0;
          FUN_1411e0e30(lVar4,&local_58);
          pcVar10 = local_58 + (longlong)(int)(uint)uStack_50 * 8;
          for (pcVar6 = local_58; pcVar7 = local_58, pcVar6 != pcVar10; pcVar6 = pcVar6 + 8) {
            uVar5 = FWeakObjectPtr::Get(pcVar6);
            FUN_140fc0f70(*param_1,uVar5);
          }
        }
        if (pcVar7 != (code *)0x0) {
          FMemory::Free(pcVar7);
        }
      }
    }
  }
  return;
}



// FUNCTION 140fad390 FUN_140fad390 body=607 status=ok
// SIG undefined FUN_140fad390(void)

void FUN_140fad390(longlong *param_1,char param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_40 = 0xd;
  local_48 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"NavBarButton",0x1a);
  uVar8 = *(undefined8 *)(*param_1 + 0x8a0);
  uVar2 = URemnantGameInstance::GetPrivateStaticClass();
  lVar3 = FUN_142ebcee0(uVar8,&local_48,uVar2,0);
  if (lVar3 == 0) {
LAB_140fad43b:
    lVar3 = 0;
  }
  else {
    lVar4 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140fad43b;
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (lVar3 == 0) {
    return;
  }
  *(char *)(lVar3 + 0x308) = param_2;
  FUN_142ed3af0(lVar3,param_3,0);
  local_28 = 0;
  local_20 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28,0xb,"navBarIcon",0xb,0x3f);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  lVar3 = FUN_140ecbdf0(lVar3,&local_28,0,6,&local_38);
  plVar7 = local_38;
  for (iVar6 = (int)local_30; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (lVar3 == 0) {
    return;
  }
  local_48 = 0;
  if (param_2 == '\x02') {
    local_40 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pwVar5 = L"ECHO LOG";
  }
  else {
    if (param_2 == '\x03') {
      local_40 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      uVar8 = 0x16;
      pwVar5 = L"TYPHON LOG";
      goto LAB_140fad5af;
    }
    if (param_2 == '\x04') {
      local_40 = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      uVar8 = 0x18;
      pwVar5 = L"ERIDIAN LOG";
      goto LAB_140fad5af;
    }
    local_40 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pwVar5 = L"MISSIONS";
  }
  uVar8 = 0x12;
LAB_140fad5af:
  FGenericPlatformString::Memcpy(local_48,pwVar5,uVar8);
  FUN_142088cf0(lVar3,&local_48);
  if (local_48 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fad620 FUN_140fad620 body=80 status=ok
// SIG undefined FUN_140fad620(void)

undefined8 * FUN_140fad620(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)(param_1 + 4));
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140fad670 FUN_140fad670 body=89 status=ok
// SIG undefined FUN_140fad670(void)

undefined8 * FUN_140fad670(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 140fad6d0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_663464369c1590981c9f122ae74cbfd4>,1>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_140f9fdf0(param_1 + 1);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140fad720 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_663464369c1590981c9f122ae74cbfd4>,1>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_140f9fe50(param_1 + 1);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140fad770 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
Chaos::FPBDRigidsEvolutionGBF::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140fa05a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x9c0);
  }
  return param_1;
}



// FUNCTION 140fad7b0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 Audio::FEpicSynth1::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140e9c5f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6b0);
  }
  return param_1;
}



// FUNCTION 140fad7f0 FUN_140fad7f0 body=52 status=ok
// SIG undefined FUN_140fad7f0(void)

undefined8 FUN_140fad7f0(undefined8 param_1,ulonglong param_2)

{
  FUN_140e9c5f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x690);
  }
  return param_1;
}



// FUNCTION 140fad830 FUN_140fad830 body=549 status=ok
// SIG undefined FUN_140fad830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140fad830(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 auStack_2e8 [32];
  longlong local_2c8 [2];
  undefined1 local_2b8 [8];
  longlong *local_2b0;
  undefined1 local_298 [624];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  uVar7 = 0;
  if (param_2 != (longlong *)0x0) {
    FText::FText(local_2b8);
    cVar6 = FUN_1414f5620(param_2,local_2b8);
    if (cVar6 == '\0') {
      plVar3 = *(longlong **)(param_1 + 0x980);
      if ((plVar3 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x978) != 0)) {
        (**(code **)(*plVar3 + 0x2b0))(plVar3,local_2b8,1,0);
        local_2c8[1] = 5;
        local_2c8[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2c8,0);
        FGenericPlatformString::Memcpy(local_2c8[0],L"show",10);
        FUN_142088910(*(undefined8 *)(param_1 + 0x978),local_2c8);
        if (local_2c8[0] != 0) {
          FMemory::Free();
        }
      }
    }
    else {
      cVar6 = (**(code **)(*param_2 + 0x758))(param_2);
      if (((((cVar6 != '\0') && (lVar5 = *(longlong *)(param_1 + 0x988), lVar5 != 0)) &&
           (*(longlong *)(lVar5 + 0x1e0) == *(longlong *)(param_1 + 0x848))) &&
          ((*(int *)(lVar5 + 0x1a0) == *(int *)(param_1 + 0x874) &&
           (*(char *)(lVar5 + 0x1a4) != '\0')))) && (*(char *)(lVar5 + 0x1a5) == '\0')) {
        FUN_140fae710();
      }
      cVar6 = FUN_1414f5250(param_2);
      if (cVar6 != '\0') {
        FUN_142ebe450(param_1);
        uVar7 = FUN_140f9f650(local_298);
        FUN_1412b1e40(param_1 + 0xa70,uVar7);
        FUN_140fa04a0(local_298);
        *(undefined4 *)(param_1 + 0xcf0) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xcf4) = 0;
        local_2c8[0] = 0;
        *(undefined8 *)(param_1 + 0xd00) = 0;
        *(undefined4 *)(param_1 + 0xd10) = 0;
        if (0x7fffffff < *(uint *)(param_1 + 0xd14)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo((undefined8 *)(param_1 + 0xd08),0);
        }
        puVar4 = *(undefined2 **)(param_1 + 0xd08);
        if (puVar4 != (undefined2 *)0x0) {
          *puVar4 = 0;
        }
        *(undefined4 *)(param_1 + 0xcf8) = 0;
      }
      uVar7 = 1;
    }
    if (local_2b0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_2b0 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_2b0)(local_2b0);
        LOCK();
        piVar1 = (int *)((longlong)local_2b0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_2b0 + 8))(local_2b0,1);
        }
      }
    }
  }
  return uVar7;
}



// FUNCTION 140fada60 FUN_140fada60 body=473 status=ok
// SIG undefined FUN_140fada60(void)

char FUN_140fada60(longlong *param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong local_res8;
  undefined1 local_38 [8];
  longlong *local_30;
  
  cVar3 = '\0';
  uVar5 = FUN_1404b03b0();
  FText::FText(local_38,uVar5);
  cVar2 = FUN_140faf0d0(param_1,param_2,local_38);
  lVar6 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (lVar6 != 0) {
    FUN_14145f370();
  }
  if ((cVar2 == '\0') || (param_2 == 0)) goto LAB_140fadb20;
  cVar2 = *(char *)(param_2 + 0x9d);
  if (cVar2 == '\x01') {
LAB_140fadad9:
    uVar5 = FWeakObjectPtr::Get(param_2 + 0x18);
    cVar3 = FUN_140fad830(param_1,uVar5);
    if (cVar3 == '\0') goto LAB_140fadb20;
  }
  else {
    if (cVar2 != '\x04') {
      if (cVar2 != '\x05') goto LAB_140fadb20;
      goto LAB_140fadad9;
    }
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    iVar4 = FUN_14129dd30(param_2 + 0x100,uVar5);
    if ((iVar4 == 3) && (0 < *(int *)(param_2 + 0x160))) {
      (**(code **)(**(longlong **)(param_2 + 0x158) + 0x18))
                (*(longlong **)(param_2 + 0x158),&local_res8);
      if (local_res8 == 0) goto LAB_140fadc31;
      lVar7 = FUN_142f71d80();
      lVar6 = local_res8;
      if (local_res8 == 0) goto LAB_140fadc31;
      do {
        if (lVar6 == lVar7) {
          cVar2 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x58c);
          if (cVar2 != '\0') {
            plVar8 = (longlong *)FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
            uVar5 = FUN_142f7b660();
            lVar6 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar5);
            if (lVar6 != 0) {
              FUN_142f7b710(lVar6,local_res8);
            }
          }
          goto LAB_140fadc31;
        }
        lVar6 = *(longlong *)(lVar6 + 0x30);
      } while (lVar6 != 0);
      cVar3 = '\x01';
    }
    else {
LAB_140fadc31:
      cVar3 = '\x01';
    }
  }
  LOCK();
  *(undefined4 *)(param_1 + 0xb1) = 1;
  UNLOCK();
  lVar6 = FUN_141083c60(param_1);
  if ((lVar6 == 0) || (*(char *)(lVar6 + 0x640) == '\0')) {
    FUN_140fde680(param_1,param_2);
  }
LAB_140fadb20:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_30 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return cVar3;
}



// FUNCTION 140fadc40 FUN_140fadc40 body=487 status=ok
// SIG undefined FUN_140fadc40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fadc40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_2b8 [32];
  undefined1 local_298 [96];
  longlong *local_238;
  longlong *local_220;
  longlong local_210;
  longlong local_1f0;
  longlong local_190;
  undefined1 local_140 [16];
  undefined1 local_130 [104];
  undefined1 local_c8 [32];
  longlong local_a8;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  iVar5 = *(int *)(param_1 + 0x640) + -1;
  if (-1 < iVar5) {
    lVar7 = (longlong)iVar5 * 0x270;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x638) + 0x9d + lVar7) == '\x04') {
        FUN_140fd51c0(param_1 + 0x638,iVar5,1,1);
      }
      lVar7 = lVar7 + -0x270;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  lVar7 = *param_2;
  lVar6 = (longlong)(int)param_2[1] * 0x70 + lVar7;
  for (; lVar7 != lVar6; lVar7 = lVar7 + 0x70) {
    FUN_1412b0d00(local_298,lVar7);
    FUN_140fadef0(param_1 + -0x6a8,local_298,0);
    if (local_a8 != 0) {
      FMemory::Free();
    }
    TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
    ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(local_c8);
    FUN_140bff340(local_130);
    FUN_140c64420(local_140);
    if (local_190 != 0) {
      FMemory::Free();
    }
    if (local_1f0 != 0) {
      FMemory::Free();
    }
    if (local_210 != 0) {
      FMemory::Free();
    }
    plVar4 = local_220;
    if (local_220 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_220 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_220)(local_220);
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
    plVar4 = local_238;
    if (local_238 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_238 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_238)(local_238);
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
  }
  return;
}



// FUNCTION 140fade40 FUN_140fade40 body=167 status=ok
// SIG undefined FUN_140fade40(void)

void FUN_140fade40(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *local_138 [2];
  undefined1 local_128 [32];
  undefined8 local_108;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined1 local_d8 [8];
  longlong local_d0;
  longlong local_18;
  
  local_e8 = param_1;
  FUN_140f9f450(local_d8);
  local_108 = 0;
  local_f8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0xf0,local_128);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144648798;
    puVar1[2] = local_e8;
    FUN_140f9f450(puVar1 + 4,local_d8);
  }
  local_138[0] = &LAB_140faea10;
  FUN_14208c4f0(param_1,local_138);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fadef0 FUN_140fadef0 body=1158 status=ok
// SIG undefined FUN_140fadef0(void)

longlong FUN_140fadef0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 local_res20;
  longlong local_78 [4];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_78[0] = FUN_141083c60();
  lVar10 = 0;
  if (((local_78[0] != 0) && (lVar10 = 0, *(longlong *)(param_1 + 0x930) != 0)) &&
     (*(char *)(local_78[0] + 0x640) == '\0')) {
    FString::PrintfImpl(local_78 + 2,L"IconInst_%u",*(undefined4 *)(param_1 + 0xa54));
    lVar8 = FUN_140f98b20(*(undefined8 *)(param_1 + 0x930),PTR_s_AllIcons_14629eb40,local_78 + 2,0);
    if (local_78[2] != 0) {
      FMemory::Free();
    }
    lVar10 = 0;
    if (lVar8 != 0) {
      *(int *)(param_1 + 0xa54) = *(int *)(param_1 + 0xa54) + 1;
      *(undefined8 *)(lVar8 + 0x2d0) = *(undefined8 *)(param_1 + 0x930);
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      FWeakObjectPtr::operator=(&local_48,0);
      FWeakObjectPtr::operator=(&local_40,0);
      FWeakObjectPtr::operator=(&local_38,0);
      FWeakObjectPtr::operator=(&local_30,0);
      uVar9 = TScriptInterface<IBlendableInterface>::
              TScriptInterface<IBlendableInterface><UMaterialInterface>(local_58,lVar8);
      FUN_142ecfd10(param_1,uVar9,&local_48);
      (**(code **)(*(longlong *)(lVar8 + 0x170) + 0x38))((longlong *)(lVar8 + 0x170),1);
      FName::FName(&local_res20,L"OnMapIconClicked",1);
      FWeakObjectPtr::operator=(lVar8 + 0x1b0,param_1);
      *(undefined8 *)(lVar8 + 0x1b8) = local_res20;
      FName::FName(&local_res20,L"OnMapIconUnhovered",1);
      FWeakObjectPtr::operator=(lVar8 + 0x220,param_1);
      *(undefined8 *)(lVar8 + 0x228) = local_res20;
      if (((param_3 != 0) && (cVar7 = FWeakObjectPtr::IsValid(param_2), cVar7 != '\0')) &&
         ((*(char *)(param_3 + 0xd1) == '\x02' &&
          (lVar10 = FWeakObjectPtr::Get(param_2), lVar10 != 0)))) {
        lVar11 = FUN_1413ffe00();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if ((bVar6) && (lVar11 = FUN_140f578e0(param_1), lVar10 != lVar11)) {
          FString::operator=(param_2 + 0x88,param_3 + 0xc0);
        }
      }
      lVar10 = FUN_1412b7ff0(local_78[0],param_2,lVar8,param_3);
      lVar11 = *(longlong *)(param_2 + 0xf8);
      if (lVar11 != 0) {
        lVar12 = FUN_142f47520();
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          FText::operator=(param_2 + 0x58,lVar11 + 0x98);
          FText::operator=(param_2 + 0x70,lVar11 + 0xb8);
        }
      }
      if ((*(longlong *)(lVar8 + 0x2c8) != 0) && (*(longlong *)(lVar8 + 0x2c8) != -0x2e0)) {
        iVar1 = *(int *)(param_1 + 0xce8);
        *(int *)(param_1 + 0xce8) = iVar1 + 1;
        if (*(int *)(param_1 + 0xcec) < iVar1 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 0xce0,iVar1);
        }
        FUN_1412b0b60((longlong)iVar1 * 0x270 + *(longlong *)(param_1 + 0xce0),param_2);
      }
      if (((*(longlong *)(param_1 + 0x8e0) != 0) && (lVar10 != 0)) &&
         ((*(char *)(lVar10 + 0x2d0) != '\0' ||
          ((param_3 != 0 && (*(char *)(param_3 + 0xd1) == '\x05')))))) {
        iVar1 = *(int *)(param_1 + 0x998);
        *(int *)(param_1 + 0x998) = iVar1 + 1;
        if (*(int *)(param_1 + 0x99c) < iVar1 + 1) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 0x990,iVar1);
        }
        puVar13 = (undefined8 *)((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0x990));
        *puVar13 = *(undefined8 *)(param_2 + 0xa0);
        FString::FString(puVar13 + 1,param_2 + 0xa8);
        uVar9 = *(undefined8 *)(param_2 + 200);
        puVar13[4] = *(undefined8 *)(param_2 + 0xc0);
        puVar13[5] = uVar9;
        uVar3 = *(undefined4 *)(param_2 + 0xd4);
        uVar4 = *(undefined4 *)(param_2 + 0xd8);
        uVar5 = *(undefined4 *)(param_2 + 0xdc);
        *(undefined4 *)(puVar13 + 6) = *(undefined4 *)(param_2 + 0xd0);
        *(undefined4 *)((longlong)puVar13 + 0x34) = uVar3;
        *(undefined4 *)(puVar13 + 7) = uVar4;
        *(undefined4 *)((longlong)puVar13 + 0x3c) = uVar5;
        uVar3 = *(undefined4 *)(param_2 + 0xe4);
        uVar4 = *(undefined4 *)(param_2 + 0xe8);
        uVar5 = *(undefined4 *)(param_2 + 0xec);
        *(undefined4 *)(puVar13 + 8) = *(undefined4 *)(param_2 + 0xe0);
        *(undefined4 *)((longlong)puVar13 + 0x44) = uVar3;
        *(undefined4 *)(puVar13 + 9) = uVar4;
        *(undefined4 *)((longlong)puVar13 + 0x4c) = uVar5;
        puVar13[10] = *(undefined8 *)(param_2 + 0xf0);
        puVar13[0xb] = *(undefined8 *)(param_2 + 0xf8);
        local_78[0] = 0;
        local_78[1] = 0x13;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
        FGenericPlatformString::Convert<char,wchar_t>
                  (local_78[0],0x13,"FastTravelListItem",0x13,0x3f);
        lVar8 = FUN_140f9c1e0(*(undefined8 *)(param_1 + 0x8e0),local_78,0);
        if (local_78[0] != 0) {
          FMemory::Free();
        }
        if (lVar8 != 0) {
          FUN_140fd9000(lVar8,0);
          plVar2 = *(longlong **)(lVar8 + 0x310);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x278))(plVar2,0);
          }
          plVar2 = *(longlong **)(lVar8 + 0x318);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x278))(plVar2,0);
          }
          plVar2 = *(longlong **)(lVar8 + 0x330);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x278))(plVar2,0);
          }
          *(undefined1 *)(lVar8 + 0x198) = 1;
          (**(code **)(*(longlong *)(lVar8 + 0x170) + 0x38))((longlong *)(lVar8 + 0x170),1);
        }
      }
    }
  }
  return lVar10;
}



// FUNCTION 140fae380 FUN_140fae380 body=912 status=ok
// SIG undefined FUN_140fae380(void)

void FUN_140fae380(longlong param_1,double param_2)

{
  longlong lVar1;
  void *pvVar2;
  int iVar3;
  void *local_28;
  int local_20;
  int local_1c;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x38) < DAT_1468734b4) {
    _Init_thread_header(&DAT_1468734b4);
    if (DAT_1468734b4 == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629eb78,0);
      FGenericPlatformString::Memcpy(DAT_14629eb78,&DAT_14463be00,8);
      atexit((_func_5014 *)&LAB_143e5b350);
      _Init_thread_footer(&DAT_1468734b4);
    }
  }
  if (*(int *)(lVar1 + 0x38) < DAT_1468734b8) {
    _Init_thread_header(&DAT_1468734b8);
    if (DAT_1468734b8 == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629eb88,0);
      FGenericPlatformString::Memcpy(DAT_14629eb88,L"small",0xc);
      atexit((_func_5014 *)&LAB_143e5b690);
      _Init_thread_footer(&DAT_1468734b8);
    }
  }
  if (*(int *)(lVar1 + 0x38) < DAT_1468734bc) {
    _Init_thread_header(&DAT_1468734bc);
    if (DAT_1468734bc == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629eb98,0);
      FGenericPlatformString::Memcpy(DAT_14629eb98,L"medium",0xe);
      atexit((_func_5014 *)&LAB_143e5b330);
      _Init_thread_footer(&DAT_1468734bc);
    }
  }
  if (*(int *)(lVar1 + 0x38) < DAT_1468734c0) {
    _Init_thread_header(&DAT_1468734c0);
    if (DAT_1468734c0 == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629eba8,0);
      FGenericPlatformString::Memcpy(DAT_14629eba8,L"large",0xc);
      atexit((_func_5014 *)&LAB_143e5b1f0);
      _Init_thread_footer(&DAT_1468734c0);
    }
  }
  if (*(int *)(lVar1 + 0x38) < DAT_1468734c4) {
    _Init_thread_header(&DAT_1468734c4);
    if (DAT_1468734c4 == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ebb8,0);
      FGenericPlatformString::Memcpy(DAT_14629ebb8,&DAT_14463be78,8);
      atexit((_func_5014 *)&LAB_143e5b310);
      _Init_thread_footer(&DAT_1468734c4);
    }
  }
  pvVar2 = DAT_14629ebb8;
  local_28 = (void *)0x0;
  iVar3 = (int)DAT_14629ebc0;
  local_20 = iVar3;
  if (iVar3 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,DAT_14629ebc0 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_28,pvVar2,(longlong)iVar3 * 2);
  }
  if (*(double *)(param_1 + 0x690) <= param_2) {
    if (*(double *)(param_1 + 0x698) <= param_2) {
      if (*(double *)(param_1 + 0x6a0) <= param_2) {
        if (*(double *)(param_1 + 0x6a8) <= param_2) goto LAB_140fae4e8;
        iVar3 = (int)DAT_14629ebb0;
        pvVar2 = DAT_14629eba8;
      }
      else {
        iVar3 = (int)DAT_14629eba0;
        pvVar2 = DAT_14629eb98;
      }
    }
    else {
      iVar3 = (int)DAT_14629eb90;
      pvVar2 = DAT_14629eb88;
    }
  }
  else {
    iVar3 = (int)DAT_14629eb80;
    pvVar2 = DAT_14629eb78;
  }
  local_20 = iVar3;
  if ((iVar3 == 0) && (local_1c == 0)) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,iVar3);
    _guard_xfg_dispatch_icall_nop(local_28,pvVar2,(longlong)iVar3 * 2);
  }
LAB_140fae4e8:
  if (*(longlong *)(param_1 + 0x758) != 0) {
    FUN_142088cf0(*(longlong *)(param_1 + 0x758),&local_28);
  }
  if (*(longlong *)(param_1 + 0x760) != 0) {
    FUN_142088cf0(*(longlong *)(param_1 + 0x760),&local_28);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fae710 FUN_140fae710 body=357 status=ok
// SIG undefined FUN_140fae710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fae710(longlong param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x1a0);
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x198) <= iVar1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_140fd9520(param_1,(longlong)iVar1 * 0xd0 + *(longlong *)(param_1 + 400));
    *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
    if (((*(int *)(param_1 + 0x178) == 0) || (*(longlong **)(param_1 + 0x170) == (longlong *)0x0))
       || (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x18))(), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return;
    }
    if (*(int *)(param_1 + 0x178) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140fae79b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x170) + 0x40))();
      return;
    }
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x38);
    if (lVar5 != 0) {
      lVar4 = UInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (lVar5 = FUN_140e971d0(lVar5), lVar5 != 0)) &&
         (lVar5 = FUN_140cff230(lVar5), lVar5 != 0)) {
        FUN_140d4cc50(lVar5,param_1 + 0x1e0,1);
      }
    }
    FUN_140fb3220();
    if (((*(int *)(param_1 + 0x188) == 0) || (*(longlong **)(param_1 + 0x180) == (longlong *)0x0))
       || (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x18))(), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return;
    }
    if (*(int *)(param_1 + 0x188) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140fae85d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x180) + 0x40))();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140fae86b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_00000000 + 0x40))();
  return;
}



// FUNCTION 140fae880 FUN_140fae880 body=183 status=ok
// SIG undefined FUN_140fae880(void)

void FUN_140fae880(longlong param_1,undefined8 *param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  
  puVar6 = &DAT_143f3eda8;
  puVar3 = &DAT_143f3eda8;
  if (DAT_14629ea38 != 0) {
    puVar3 = DAT_14629ea30;
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar3);
  if ((iVar2 == 0) && (param_3 != 0)) {
    lVar4 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar5 = FUN_1413f2350();
      lVar4 = param_3;
      while (lVar4 != lVar5) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        if (lVar4 == 0) {
          return;
        }
      }
      *(undefined1 *)(param_1 + 0xa58) = 1;
      FUN_140fb25f0(param_1,param_3);
    }
  }
  return;
}



// FUNCTION 140fae970 FUN_140fae970 body=78 status=ok
// SIG undefined FUN_140fae970(void)

void FUN_140fae970(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  FUN_140fd50b0(*param_1,0);
  cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x59c);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(*param_1 + 0x59c);
    if (0 < *(int *)(lVar1 + 0x48)) {
      FUN_142eb3990(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140fae9c0 FUN_140fae9c0 body=44 status=ok
// SIG undefined FUN_140fae9c0(void)

void FUN_140fae9c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*param_1 + 0x668);
  FUN_142880530(*param_1 + 0x340,puVar1);
  *puVar1 = 0;
  return;
}



// FUNCTION 140faea40 FUN_140faea40 body=109 status=ok
// SIG undefined FUN_140faea40(void)

void FUN_140faea40(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  lVar2 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  if ((lVar2 != 0) && (lVar2 = FUN_142f6c9f0(lVar2), lVar2 != 0)) {
    lVar1 = *param_1;
    local_18 = lVar1;
    if (lVar1 == 0) {
      local_10 = 0;
    }
    else {
      uVar3 = FUN_142f772d0();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar3);
    }
    FUN_142f6dea0(lVar2,&local_18);
  }
  return;
}



// FUNCTION 140faece0 FUN_140faece0 body=47 status=ok
// SIG undefined FUN_140faece0(void)

void FUN_140faece0(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1416f8720(*param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_1416f8720(*param_1);
    FUN_142ecffe0(uVar2);
    return;
  }
  return;
}



// FUNCTION 140faed40 FUN_140faed40 body=109 status=ok
// SIG undefined FUN_140faed40(void)

void FUN_140faed40(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_18;
  undefined8 local_10;
  
  lVar2 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  if ((lVar2 != 0) && (lVar2 = FUN_142f6c9f0(lVar2), lVar2 != 0)) {
    lVar1 = *param_1;
    local_18 = lVar1;
    if (lVar1 == 0) {
      local_10 = 0;
    }
    else {
      uVar3 = FUN_142f772d0();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar3);
    }
    FUN_142f69080(lVar2,&local_18);
  }
  return;
}



// FUNCTION 140faef10 FUN_140faef10 body=52 status=ok
// SIG undefined FUN_140faef10(void)

void FUN_140faef10(undefined4 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_1416f8720(*param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1416f8720(*param_1);
                    /* WARNING: Could not recover jumptable at 0x000140faef37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x300))(plVar2);
    return;
  }
  return;
}



// FUNCTION 140faef50 FUN_140faef50 body=384 status=ok
// SIG undefined FUN_140faef50(void)

undefined8 FUN_140faef50(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 local_58 [24];
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar5 == 0) {
LAB_140faefb5:
    cVar2 = '\0';
  }
  else {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140faefb5;
    cVar2 = FUN_140cee9c0(lVar5);
  }
  lVar5 = *param_2;
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0xd1) == '\x05')) {
    return 1;
  }
  local_28 = 0;
  local_30 = 0;
  local_20 = 0;
  local_40 = 0xffffffff;
  local_3c = 0;
  if (lVar5 == 0) {
    local_30 = 0;
  }
  else {
    uVar7 = FSoftObjectPath::FSoftObjectPath(local_58,lVar5);
    FSoftObjectPath::operator=(&local_30,uVar7);
    FWeakObjectPtr::operator=(&local_40,lVar5);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    local_3c = CONCAT44(DAT_1464b56f4,(undefined4)local_3c);
  }
  cVar3 = FSoftObjectPath::operator==(&local_30,param_1 + 2000);
  if (cVar3 != '\0') {
    puVar8 = &DAT_143f3eda8;
    puVar9 = &DAT_143f3eda8;
    if (DAT_14629eb38 != 0) {
      puVar9 = DAT_14629eb30;
    }
    if ((int)param_2[2] != 0) {
      puVar8 = (undefined2 *)param_2[1];
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
    if ((iVar4 != 0) && (cVar2 == '\0')) {
      uVar7 = 1;
      goto LAB_140faf0ae;
    }
  }
  uVar7 = 0;
LAB_140faf0ae:
  if (local_28 != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 140faf0d0 FUN_140faf0d0 body=908 status=ok
// SIG undefined FUN_140faf0d0(void)

ulonglong FUN_140faf0d0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  uVar7 = FUN_1404b03b0();
  FText::operator=(param_3,uVar7);
  lVar8 = FUN_141083c60(param_1);
  uVar9 = 0;
  if (((lVar8 == 0) || (uVar9 = FUN_1412ba5c0(lVar8), (char)uVar9 == '\0')) || (param_2 == 0)) {
LAB_140faf442:
    return uVar9 & 0xffffffffffffff00;
  }
  cVar4 = *(char *)(param_2 + 0x9d);
  if (cVar4 == '\x01') {
    cVar4 = FUN_140bf9690(0,param_2 + 0x18);
    if (cVar4 == '\0') {
LAB_140faf380:
      bVar5 = FUN_140faef50(param_1,param_2 + 0xa0);
      if (bVar5 != 0) goto LAB_140faf396;
      uVar7 = FUN_1404b03b0();
      uVar7 = FText::FText(local_48,uVar7);
      bVar3 = false;
      bVar11 = true;
    }
    else {
      uVar7 = FWeakObjectPtr::Get(param_2 + 0x18);
      bVar5 = FUN_1414f5020(uVar7);
      if (bVar5 == 0) goto LAB_140faf380;
LAB_140faf396:
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_30,L"TRAVEL",L"GFxMapMenu",L"HintCrosshairTravel");
      bVar3 = true;
      bVar11 = false;
    }
    FText::operator=(param_3,uVar7);
    if ((bVar11) && (local_40 != (longlong *)0x0)) {
      LOCK();
      plVar10 = local_40 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    plVar10 = local_28;
    if (!bVar3) goto LAB_140faf24d;
  }
  else {
    if (cVar4 == '\x04') {
      uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
      iVar6 = FUN_14129dd30(param_2 + 0x100,uVar7);
      bVar5 = iVar6 == 3;
      bVar11 = !(bool)bVar5;
      if (bVar11) {
        uVar7 = FUN_1404b03b0();
        uVar7 = FText::FText(local_78,uVar7);
      }
      else {
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_60,L"TRACK MISSION",L"GFxMapMenu",L"HintCrosshairMission");
      }
      FText::operator=(param_3,uVar7);
      if ((bVar11) && (local_70 != (longlong *)0x0)) {
        LOCK();
        plVar10 = local_70 + 1;
        lVar8 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      if ((!bVar11) && (local_58 != (longlong *)0x0)) {
        LOCK();
        plVar10 = local_58 + 1;
        lVar8 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)local_58 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
            return (ulonglong)bVar5;
          }
        }
      }
      goto LAB_140faf24d;
    }
    if (cVar4 != '\x05') goto LAB_140faf442;
    cVar4 = FUN_140bf9690(0,param_2 + 0x18);
    if (cVar4 == '\0') {
      bVar5 = FUN_14044af00(param_2,0);
    }
    else {
      uVar7 = FWeakObjectPtr::Get(param_2 + 0x18);
      bVar5 = FUN_1414f5020(uVar7);
    }
    bVar11 = bVar5 == 0;
    if (bVar11) {
      uVar7 = FUN_1404b03b0();
      uVar7 = FText::FText(local_a8,uVar7);
    }
    else {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_90,L"TRAVEL",L"GFxMapMenu",L"HintCrosshairTravel");
    }
    FText::operator=(param_3,uVar7);
    if ((bVar11) && (local_a0 != (longlong *)0x0)) {
      LOCK();
      plVar10 = local_a0 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    plVar10 = local_88;
    if (bVar11) goto LAB_140faf24d;
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
LAB_140faf24d:
  return (ulonglong)bVar5;
}



// FUNCTION 140faf460 FUN_140faf460 body=441 status=ok
// SIG undefined FUN_140faf460(void)

ulonglong FUN_140faf460(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  char local_res10 [8];
  undefined1 uVar8;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined2 local_24;
  undefined1 local_22;
  int local_20;
  
  uVar6 = FUN_1410828b0(local_res10,param_1);
  if (local_res10[0] != '\x02') {
    return uVar6 & 0xffffffffffffff00;
  }
  if (*(longlong *)(param_1 + 0x918) == 0) {
    iVar5 = -1;
  }
  else {
    iVar5 = FUN_142eb7a00();
  }
  bVar3 = false;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x930));
  LOCK();
  *(int *)(param_1 + 0x93c) = *(int *)(param_1 + 0x93c) + 1;
  UNLOCK();
  uVar8 = 0;
  FText::FText(local_60);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0xffffffff;
  local_2c = 0;
  local_24 = 0;
  local_22 = 0;
  local_20 = 0;
  if ((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x928))) {
    puVar7 = (undefined1 *)((longlong)iVar5 * 0x50 + *(longlong *)(param_1 + 0x920));
    uVar8 = *puVar7;
    FText::operator=(local_60,puVar7 + 8);
    local_48 = puVar7[0x20];
    bVar3 = true;
    local_40 = *(undefined8 *)(puVar7 + 0x28);
    local_38 = *(undefined8 *)(puVar7 + 0x30);
    local_30 = *(undefined4 *)(puVar7 + 0x38);
    local_2c = *(undefined8 *)(puVar7 + 0x3c);
    local_24 = *(undefined2 *)(puVar7 + 0x44);
    local_22 = puVar7[0x46];
    local_20 = *(int *)(puVar7 + 0x48);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x930));
  LOCK();
  *(int *)(param_1 + 0x93c) = *(int *)(param_1 + 0x93c) + -1;
  UNLOCK();
  if ((bVar3) && (0 < local_20)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1,*local_58,param_4,uVar8);
      }
    }
  }
  return uVar6;
}



// FUNCTION 140faf620 FUN_140faf620 body=187 status=ok
// SIG undefined FUN_140faf620(void)

ulonglong FUN_140faf620(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  ulonglong in_RAX;
  longlong lVar5;
  ulonglong uVar6;
  
  if (*(longlong *)(param_1 + 0x8e0) != 0) {
    in_RAX = FUN_142eb7a00();
    iVar4 = (int)in_RAX;
    if ((iVar4 < 0) || (*(int *)(param_1 + 0x9b8) <= iVar4)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      in_RAX = (ulonglong)iVar4;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x9b0) + in_RAX * 8);
      if (lVar1 != 0) {
        in_RAX = FUN_140e971d0(param_1);
        if ((in_RAX != 0) && (lVar2 = *(longlong *)(in_RAX + 0x1850), lVar2 != 0)) {
          lVar5 = UInputKeySelector::GetPrivateStaticClass();
          iVar4 = *(int *)(lVar5 + 0x90);
          uVar6 = (longlong)iVar4;
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar4) ||
             (uVar6 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
             *(longlong *)(uVar6 + (longlong)iVar4 * 8) != lVar5 + 0x88)) {
            in_RAX = uVar6 & 0xffffffffffffff00;
          }
          else {
            in_RAX = CONCAT71((int7)(uVar6 >> 8),1);
          }
          if ((char)in_RAX != '\0') {
            return CONCAT71((int7)(in_RAX >> 8),*(longlong *)(lVar2 + 0x670) != lVar1);
          }
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140faf6e0 FUN_140faf6e0 body=308 status=ok
// SIG undefined FUN_140faf6e0(void)

void FUN_140faf6e0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 local_res8 [2];
  longlong local_48 [5];
  longlong *local_20;
  longlong *local_18;
  
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x678);
  }
  *(longlong *)(param_1 + 0x6c8) = param_2;
  local_48[0] = 0;
  local_48[1] = 0x22;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"MinimapTerrainTexture_%02d_nopack",0x44);
  local_20 = local_48 + 2;
  local_48[2] = 0;
  local_18 = local_48;
  local_48[3] = 0;
  local_res8[0] = 0xffffffff;
  local_48[4] = param_1;
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar3 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar2 = FUN_142710360(lVar3,local_res8), cVar2 != '\0')) {
      lVar3 = *(longlong *)(param_1 + 0x6c8);
      uVar5 = local_res8[0];
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(param_1 + 0x678);
      }
      goto LAB_140faf7e1;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x6c8);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x678);
  }
  uVar5 = 0;
LAB_140faf7e1:
  FUN_140fa5780(local_48 + 4,uVar5,lVar3);
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140faf820 FUN_140faf820 body=271 status=ok
// SIG undefined FUN_140faf820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140faf820(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140faeca0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140faf930 FUN_140faf930 body=271 status=ok
// SIG undefined FUN_140faf930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140faf930(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140faebd0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fafa40 FUN_140fafa40 body=263 status=ok
// SIG undefined FUN_140fafa40(void)

void FUN_140fafa40(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined2 local_10;
  
  *(undefined1 *)(param_1 + 0x2a0) = 0;
  FUN_140fd5ac0(param_1,1);
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    local_48 = 0;
    local_40 = 0;
    uVar4 = FUN_1404b03b0();
    FText::FText(local_38,uVar4);
    local_18 = 0;
    local_10 = 1;
    local_20 = 1;
    uVar4 = FUN_1404b03b0();
    FText::operator=(local_38,uVar4);
    uVar2 = local_40;
    lVar6 = (longlong)(int)local_40;
    iVar3 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar3);
    if (local_40._4_4_ < iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_48,uVar2 & 0xffffffff);
    }
    *(undefined8 *)(local_48 + lVar6 * 8) = DAT_146b3e2a0;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x308);
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_48,0);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_30 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140fafb50 FUN_140fafb50 body=727 status=ok
// SIG undefined FUN_140fafb50(void)

ulonglong FUN_140fafb50(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                       float *param_5,float *param_6)

{
  ulonglong in_RAX;
  float *pfVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_38;
  float local_34;
  undefined1 local_28 [16];
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x948);
  }
  param_5[0] = 0.0;
  param_5[1] = 0.0;
  param_6[0] = 0.0;
  param_6[1] = 0.0;
  if (((param_3 == 0) || (param_4 == 0)) || (lVar3 == 0)) {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  else {
    FUN_142394970(lVar3,&local_38,param_2,0);
    if (((local_38 < -*(float *)(param_1 + 0x654)) || (*(float *)(param_1 + 0x654) <= local_38)) ||
       ((local_34 < -*(float *)(param_1 + 0x658) || (*(float *)(param_1 + 0x658) <= local_34)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    pfVar1 = (float *)FUN_14239d7d0(lVar3,local_28,param_2,0);
    fVar7 = *pfVar1;
    param_6[1] = pfVar1[1];
    *param_6 = fVar7;
    param_5[1] = local_34;
    *param_5 = local_38;
    fVar7 = param_6[1];
    fVar6 = *param_6;
    fVar8 = ABS(fVar6);
    if (ABS(fVar6) <= ABS(fVar7)) {
      fVar8 = ABS(fVar7);
    }
    if (1e-08 < fVar8) {
      fVar6 = fVar6 * (1.0 / fVar8);
      fVar7 = fVar7 * (1.0 / fVar8);
      *param_6 = fVar6;
      param_6[1] = fVar7;
    }
    pfVar1 = (float *)(param_1 + 0x6f8);
    *param_6 = (*(float *)(param_1 + 0x6dc) - *(float *)(param_1 + 0x6d4)) * 0.5 * fVar6;
    param_6[1] = (*(float *)(param_1 + 0x6d8) - *(float *)(param_1 + 0x6d0)) * -0.5 * fVar7;
    *param_5 = (*(float *)(param_1 + 0x6dc) - *(float *)(param_1 + 0x6d4)) * 0.5 * *param_5;
    param_5[1] = (*(float *)(param_1 + 0x6d8) - *(float *)(param_1 + 0x6d0)) * -0.5 * param_5[1];
    fVar7 = *param_6;
    if (((((fVar7 < *pfVar1) && (fVar6 = param_6[1], fVar6 < *(float *)(param_1 + 0x6fc))) ||
         (((pfVar1 = (float *)(param_1 + 0x704), *pfVar1 <= fVar7 && fVar7 != *pfVar1 &&
           (fVar6 = param_6[1], fVar6 < *(float *)(param_1 + 0x708))) ||
          ((pfVar1 = (float *)(param_1 + 0x710), fVar7 < *pfVar1 &&
           (fVar6 = param_6[1],
           *(float *)(param_1 + 0x714) <= fVar6 && fVar6 != *(float *)(param_1 + 0x714))))))) ||
        ((pfVar1 = (float *)(param_1 + 0x71c), *pfVar1 <= fVar7 && fVar7 != *pfVar1 &&
         (fVar6 = param_6[1],
         *(float *)(param_1 + 0x720) <= fVar6 && fVar6 != *(float *)(param_1 + 0x720))))) &&
       ((pfVar1 != (float *)0x0 &&
        (fVar7 = SQRT((DAT_1468b5d88._4_4_ - fVar6) * (DAT_1468b5d88._4_4_ - fVar6) +
                      ((float)DAT_1468b5d88 - fVar7) * ((float)DAT_1468b5d88 - fVar7)),
        *(float *)(param_1 + 0x64c) <= fVar7 && fVar7 != *(float *)(param_1 + 0x64c))))) {
      uVar4 = FGenericPlatformMath::Atan2();
      uVar5 = __libm_sse2_sincosf_(uVar4);
      *param_6 = (float)((ulonglong)uVar5 >> 0x20) * pfVar1[2] + *pfVar1;
      param_6[1] = (float)uVar5 * pfVar1[2] + pfVar1[1];
    }
  }
  return uVar2;
}



// FUNCTION 140fafe30 FUN_140fafe30 body=124 status=ok
// SIG undefined FUN_140fafe30(void)

undefined8 * FUN_140fafe30(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446487b0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FString::FString(puVar1 + 2,param_1 + 0x10);
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x20));
    FUN_14170c210(puVar1 + 4,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140fafeb0 FUN_140fafeb0 body=87 status=ok
// SIG undefined FUN_140fafeb0(void)

undefined8 * FUN_140fafeb0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144648798;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    FUN_140f9f450(puVar1 + 4,param_1 + 0x20);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140faff10 FUN_140faff10 body=96 status=ok
// SIG undefined FUN_140faff10(void)

undefined8 * FUN_140faff10(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446486f0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_1 + 0x20);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140faff70 FUN_140faff70 body=188 status=ok
// SIG undefined FUN_140faff70(void)

undefined8 * FUN_140faff70(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1446486c0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar2 + 3) = 0xffffffff;
    uVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x18));
    FUN_14170c210(puVar2 + 3,uVar3);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined1 *)((longlong)puVar2 + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    lVar1 = *(longlong *)(param_1 + 0x40);
    puVar2[8] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined1 *)(puVar2 + 9) = *(undefined1 *)(param_1 + 0x48);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140fb0030 FUN_140fb0030 body=104 status=ok
// SIG undefined FUN_140fb0030(void)

undefined8 * FUN_140fb0030(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446486d8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_1 + 0x20);
    *(undefined1 *)((longlong)puVar1 + 0x21) = *(undefined1 *)(param_1 + 0x21);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140fb00a0 FUN_140fb00a0 body=179 status=ok
// SIG undefined FUN_140fb00a0(void)

undefined8 * FUN_140fb00a0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1446487d8;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
    FString::FString(puVar2 + 4,param_1 + 0x20);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    lVar1 = *(longlong *)(param_1 + 0x38);
    puVar2[7] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    uVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x40));
    FUN_14170c210(puVar2 + 8,uVar3);
    *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)((longlong)puVar2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140fb0160 FUN_140fb0160 body=84 status=ok
// SIG undefined FUN_140fb0160(void)

void FUN_140fb0160(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144648708;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144648750;
  }
  return;
}



// FUNCTION 140fb01c0 thunk_FUN_140fb3220 body=5 status=ok
// SIG undefined thunk_FUN_140fb3220(void)

void thunk_FUN_140fb3220(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lStack_18;
  undefined8 uStack_10;
  
  if (*(char *)(param_1 + 0x1a4) != '\0') {
    *(undefined1 *)(param_1 + 0x1a4) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    lStack_18 = 0;
    uStack_10 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&lStack_18,0);
    FGenericPlatformString::Memcpy(lStack_18,L"hide",10);
    FUN_142088910(param_1,&lStack_18);
    if (lStack_18 != 0) {
      FMemory::Free();
    }
    lVar3 = *(longlong *)(param_1 + 0x1d0);
    lVar4 = (longlong)*(int *)(param_1 + 0x1d8) * 0x20 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x20) {
      plVar1 = *(longlong **)(lVar3 + 0x18);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x278))(plVar1,0);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    lVar4 = UInputKeySelector::GetPrivateStaticClass();
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
      LOCK();
      *(undefined4 *)(lVar3 + 0x588) = 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 140fb01d0 FUN_140fb01d0 body=753 status=ok
// SIG undefined FUN_140fb01d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fb01d0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  lVar7 = 0;
  lVar9 = lVar7;
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar7 = UMediumDoorComponent::GetSecondDoorComponent(lVar5);
      lVar9 = lVar5;
    }
  }
  *(longlong *)(param_1 + 0x6b0) = lVar7;
  if (lVar7 == 0) {
    if (lVar9 != 0) {
      local_b8 = (code *)0x0;
      local_a8 = FUN_140fb01d0;
      uStack_a0 = 0;
      uVar11 = AActor::GetWorldTimerManager(lVar9);
      plVar12 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar12 != (longlong *)0x0) {
        *plVar12 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar12 + 1,param_1);
        *(undefined4 *)(plVar12 + 2) = (undefined4)local_a8;
        *(undefined4 *)((longlong)plVar12 + 0x14) = local_a8._4_4_;
        *(undefined4 *)(plVar12 + 3) = uStack_a0;
        *(undefined4 *)((longlong)plVar12 + 0x1c) = uStack_9c;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar12[5] = lVar7;
        *plVar12 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_98 = 0;
      local_90 = 0;
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x30))(plVar12,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_c0 = 0xbf800000;
      local_c8 = 0;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar11,&local_b8,&local_98,0x3dcccccd);
      if (local_38 != 0) {
        plVar8 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar8 = local_48;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        lVar7 = FMemory::Realloc(plVar12,0,0);
        if (lVar7 != 0) {
          FMemory::Free(lVar7);
        }
      }
    }
  }
  else {
    plVar12 = *(longlong **)(lVar7 + 0x540);
    plVar8 = plVar12 + (longlong)*(int *)(lVar7 + 0x548) * 2;
    if (plVar12 != plVar8) {
      do {
        if ((((int)plVar12[1] != 0) && (plVar2 = (longlong *)*plVar12, plVar2 != (longlong *)0x0))
           && (cVar4 = (**(code **)(*plVar2 + 8))(plVar2,param_1), cVar4 != '\0')) {
          return;
        }
        plVar12 = plVar12 + 2;
      } while (plVar12 != plVar8);
      lVar7 = *(longlong *)(param_1 + 0x6b0);
    }
    uStack_b0 = 0;
    local_b8 = FUN_140fb5140;
    plVar12 = (longlong *)(lVar7 + 0x540);
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_144648708;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1);
      *(undefined4 *)(plVar8 + 2) = (undefined4)local_b8;
      *(undefined4 *)((longlong)plVar8 + 0x14) = local_b8._4_4_;
      *(undefined4 *)(plVar8 + 3) = uStack_b0;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_ac;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar9;
      *plVar8 = (longlong)&PTR_FUN_144648750;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar12,1);
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_b8);
      iVar1 = *(int *)(lVar7 + 0x548);
      *(int *)(lVar7 + 0x548) = iVar1 + 1;
      if (*(int *)(lVar7 + 0x54c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar12,iVar1);
      }
      puVar10 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar12);
      *puVar10 = plVar8;
      *(undefined4 *)(puVar10 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 140fb04d0 FUN_140fb04d0 body=259 status=ok
// SIG undefined FUN_140fb04d0(void)

void FUN_140fb04d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x8d0) != &local_28) {
    *(undefined8 *)(param_1 + 0x8d0) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x8d8,&local_20);
    plVar5 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x8f8) != &local_18) {
    *(undefined8 *)(param_1 + 0x8f8) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x900,&local_10);
    plVar5 = local_10;
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
  }
  FUN_142eb3890(param_1);
  return;
}



// FUNCTION 140fb05e0 FUN_140fb05e0 body=47 status=ok
// SIG undefined FUN_140fb05e0(void)

void FUN_140fb05e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_140d65eb0(lVar1);
    FMemory::operator_delete(lVar1,0x30);
    return;
  }
  return;
}



// FUNCTION 140fb0610 FUN_140fb0610 body=1638 status=ok
// SIG undefined FUN_140fb0610(void)

void FUN_140fb0610(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_1b8 [14];
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  local_1b8[1] = 0x17;
  local_1b8[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b8,0);
  FGenericPlatformString::Memcpy(local_1b8[0],L"<font color=\'#FFFFFF\'>",0x2e);
  uVar5 = FText::FromString(local_148,local_1b8);
  FText::operator=(param_3,uVar5);
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_140 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar1 = (int *)((longlong)local_140 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  if (local_1b8[0] != 0) {
    FMemory::Free();
  }
  uVar5 = FUN_1404b03b0();
  FText::operator=(param_4,uVar5);
  local_1b8[2] = 0;
  local_1b8[3] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b8 + 2,0);
  FGenericPlatformString::Memcpy(local_1b8[2],L"</font>",0x10);
  uVar5 = FText::FromString(local_130,local_1b8 + 2);
  FText::operator=(param_5,uVar5);
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_128 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar1 = (int *)((longlong)local_128 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_128 + 8))(local_128,1);
      }
    }
  }
  if (local_1b8[2] != 0) {
    FMemory::Free();
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x788);
  if (cVar3 != '\0') {
    plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x788);
    iVar4 = (**(code **)(*plVar6 + 0x408))(plVar6);
    iVar4 = iVar4 - param_2;
    if (iVar4 < -3) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_118,L"Very Hard",L"GFxMissionDeliveryMenu",
                         L"Difficulty String Very Hard");
      FText::operator=(param_4,uVar5);
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_110 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)local_110 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
          }
        }
      }
      local_1b8[4] = 0;
      local_1b8[5] = 0x17;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b8 + 4,0);
      FGenericPlatformString::Memcpy(local_1b8[4],L"<font color=\'#E70202\'>",0x2e);
      uVar5 = FText::FromString(local_100,local_1b8 + 4);
      FText::operator=(param_3,uVar5);
      lVar7 = local_1b8[4];
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_f8 + 1;
        lVar2 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_f8)(local_f8);
          LOCK();
          piVar1 = (int *)((longlong)local_f8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          lVar7 = local_1b8[4];
          if (iVar4 == 1) {
            (**(code **)(*local_f8 + 8))(local_f8,1);
            lVar7 = local_1b8[4];
          }
        }
      }
    }
    else if (iVar4 < -1) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_e8,L"Hard",L"GFxMissionDeliveryMenu",L"Difficulty String Hard");
      FText::operator=(param_4,uVar5);
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_e0 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar1 = (int *)((longlong)local_e0 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
      local_1b8[6] = 0;
      local_1b8[7] = 0x17;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b8 + 6,0);
      FGenericPlatformString::Memcpy(local_1b8[6],L"<font color=\'#E78302\'>",0x2e);
      uVar5 = FText::FromString(local_d0,local_1b8 + 6);
      FText::operator=(param_3,uVar5);
      lVar7 = local_1b8[6];
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_c8 + 1;
        lVar2 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar1 = (int *)((longlong)local_c8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          lVar7 = local_1b8[6];
          if (iVar4 == 1) {
            (**(code **)(*local_c8 + 8))(local_c8,1);
            lVar7 = local_1b8[6];
          }
        }
      }
    }
    else if (iVar4 < 2) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_b8,L"Normal",L"GFxMissionDeliveryMenu",L"Difficulty String Normal");
      FText::operator=(param_4,uVar5);
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_b0 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)local_b0 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
      local_1b8[8] = 0;
      local_1b8[9] = 0x17;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b8 + 8,0);
      FGenericPlatformString::Memcpy(local_1b8[8],L"<font color=\'#FFFFFF\'>",0x2e);
      uVar5 = FText::FromString(local_a0,local_1b8 + 8);
      FText::operator=(param_3,uVar5);
      lVar7 = local_1b8[8];
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_98 + 1;
        lVar2 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar1 = (int *)((longlong)local_98 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          lVar7 = local_1b8[8];
          if (iVar4 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
            lVar7 = local_1b8[8];
          }
        }
      }
    }
    else if (iVar4 < 4) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_88,L"Easy",L"GFxMissionDeliveryMenu",L"Difficulty String Easy");
      FText::operator=(param_4,uVar5);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_80 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
      local_1b8[10] = 0;
      local_1b8[0xb] = 0x17;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b8 + 10,0);
      FGenericPlatformString::Memcpy(local_1b8[10],L"<font color=\'#02E779\'>",0x2e);
      uVar5 = FText::FromString(local_70,local_1b8 + 10);
      FText::operator=(param_3,uVar5);
      lVar7 = local_1b8[10];
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_68 + 1;
        lVar2 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          lVar7 = local_1b8[10];
          if (iVar4 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
            lVar7 = local_1b8[10];
          }
        }
      }
    }
    else {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_58,L"Trivial",L"GFxMissionDeliveryMenu",L"Difficulty String Trivial")
      ;
      FText::operator=(param_4,uVar5);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_50 + 1;
        lVar7 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      local_1b8[0xc] = 0;
      local_1b8[0xd] = 0x17;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b8 + 0xc,0);
      FGenericPlatformString::Memcpy(local_1b8[0xc],L"<font color=\'#AFAFAF\'>",0x2e);
      uVar5 = FText::FromString(local_40,local_1b8 + 0xc);
      FText::operator=(param_3,uVar5);
      lVar7 = local_1b8[0xc];
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_38 + 1;
        lVar2 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar1 = (int *)((longlong)local_38 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          lVar7 = local_1b8[0xc];
          if (iVar4 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
            lVar7 = local_1b8[0xc];
          }
        }
      }
    }
    if (lVar7 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140fb0c80 FUN_140fb0c80 body=470 status=ok
// SIG undefined FUN_140fb0c80(void)

void FUN_140fb0c80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  float local_res8;
  float local_resc;
  float local_res18;
  float local_res1c;
  longlong local_38 [3];
  undefined4 local_20;
  undefined4 local_1c;
  
  if ((((*(char *)(param_1 + 0xd30) == '\x02') && (*(longlong *)(param_1 + 0x948) != 0)) &&
      (lVar1 = FUN_141083c60(), lVar1 != 0)) && (*(longlong *)(lVar1 + 0x940) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x948) + 0x278))(*(longlong **)(param_1 + 0x948),1);
    local_20 = (undefined4)*(undefined8 *)(lVar1 + 0xce8);
    local_1c = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0xce8) >> 0x20);
    local_38[2] = 0;
    FSceneView::ProjectWorldToScreen
              (param_2,local_38 + 2,*(longlong *)(lVar1 + 0x940) + 0xc50,&local_res18);
    local_res8 = 1.0;
    local_resc = 1.0;
    if ((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) {
      FUN_142481d50(*(longlong *)(DAT_146b17150 + 0x7b0),&local_res8);
    }
    if (*(float *)(param_1 + 0x1ec) / *(float *)(param_1 + 0x1f0) <= 1.9) {
      fVar2 = 1920.0 / *(float *)(param_1 + 0x1ec);
    }
    else {
      fVar2 = 1080.0 / *(float *)(param_1 + 0x1f0);
    }
    FUN_1420900f0(*(undefined8 *)(param_1 + 0x948),
                  CONCAT44((local_res1c - local_resc * 0.5) * fVar2,
                           (local_res18 - local_res8 * 0.5) * fVar2));
    lVar1 = *(longlong *)(param_1 + 0x948);
    if (*(char *)(lVar1 + 0x188) == '\0') {
      local_38[0] = 0;
      local_38[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],L"show",10);
      FUN_142088910(lVar1,local_38);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      *(undefined1 *)(lVar1 + 0x188) = 1;
    }
  }
  return;
}



// FUNCTION 140fb0e60 FUN_140fb0e60 body=168 status=ok
// SIG undefined FUN_140fb0e60(void)

void FUN_140fb0e60(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x10);
    do {
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 140fb0f10 FUN_140fb0f10 body=148 status=ok
// SIG undefined FUN_140fb0f10(void)

void FUN_140fb0f10(longlong param_1)

{
  longlong local_18 [2];
  
  if (*(char *)(param_1 + 400) != '\x01') {
    *(undefined1 *)(param_1 + 400) = 1;
    FUN_140fe0490(param_1,param_1 + 0x198,param_1 + 0x1a8,*(undefined4 *)(param_1 + 0x1b8),
                  *(undefined1 *)(param_1 + 0x1bc));
    local_18[1] = 0xe;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"progressIntro",0x1c);
    FUN_142088910(param_1,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140fb0fb0 Execute body=86 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,UREDWidgetRCodeCharacterChart,TTypeWrapper<void>___cdecl(enum_ERCodeDisplayParamType,TArray<int,TSizedDefaultAllocator<32>_>_&)>
     ::Execute(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140fb1003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 140fb1010 FUN_140fb1010 body=168 status=ok
// SIG undefined FUN_140fb1010(void)

undefined8
FUN_140fb1010(longlong param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_18;
  undefined1 local_17;
  undefined4 local_14;
  undefined8 local_10;
  
  if (((*(longlong *)(param_1 + 8) != 0) && (lVar1 = FWeakObjectPtr::Get(), lVar1 != 0)) &&
     (lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 8)), lVar1 != 0)) {
    local_10 = param_5;
    local_18 = param_2;
    local_17 = param_3;
    local_14 = param_4;
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
    uVar3 = FUN_14178ac60(plVar2,*(undefined8 *)(param_1 + 8));
    (**(code **)(*plVar2 + 0x208))(plVar2,uVar3,&local_18);
    return 1;
  }
  return 0;
}



// FUNCTION 140fb10c0 ExecuteIfSafe body=112 status=ok
// SIG undefined ExecuteIfSafe(void)

bool TBaseUObjectMethodDelegateInstance<0,UREDWidgetRCodeCharacterChart,void___cdecl(enum_ERCodeDisplayParamType,TArray<int,TSizedDefaultAllocator<32>_>_&)>
     ::ExecuteIfSafe(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3);
  }
  return lVar1 != 0;
}



// FUNCTION 140fb1130 FUN_140fb1130 body=547 status=ok
// SIG undefined FUN_140fb1130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fb1130(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulonglong local_38;
  
  puVar9 = auStack_88;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x2d8);
  }
  if ((iVar3 < 0) || (*(int *)(param_1 + 0x998) <= iVar3)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  if (param_2 == 0) {
LAB_140fb11c9:
    param_2 = 0;
  }
  else {
    lVar4 = AReplicationGraphDebugActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140fb11c9;
  }
  puVar7 = &DAT_143f3eda8;
  puVar10 = (undefined1 *)((longlong)iVar3 * 0x60 + *(longlong *)(param_1 + 0x990));
  puVar8 = &DAT_143f3eda8;
  if (DAT_14629eb38 != 0) {
    puVar8 = DAT_14629eb30;
  }
  if (*(int *)(puVar10 + 0x10) != 0) {
    puVar7 = *(undefined2 **)(puVar10 + 8);
  }
  iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
  if (iVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_140fb2010(param_1,puVar10);
  }
  lVar5 = FUN_142eb65a0(param_1);
  if (lVar5 != 0) {
    lVar6 = UGameInstanceGameParameters::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140fb126b;
  }
  lVar5 = 0;
LAB_140fb126b:
  cVar1 = *(char *)(param_1 + 0xd20);
  lVar6 = FUN_141083c60(param_1);
  if ((lVar6 != 0) && (((*(char *)(lVar6 + 0x9f8) == '\0' || (lVar5 != 0)) && (cVar1 == '\0')))) {
    if (iVar3 == 0) {
      FUN_1412baec0(lVar6);
    }
    else {
      if (lVar4 == 0) {
        if (param_2 == 0) {
          return;
        }
        puVar9 = puVar10;
        if (*(char *)(param_2 + 0x308) != '\0') {
          return;
        }
      }
      else {
        lVar4 = *(longlong *)(lVar4 + 0x168);
        if (lVar4 == 0) {
          local_58 = 0;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          local_48 = _DAT_146872f40 & _DAT_146872f50;
          uStack_44 = uRam0000000146872f44 & uRam0000000146872f54;
          uStack_40 = uRam0000000146872f48 & uRam0000000146872f58;
          uStack_3c = uRam0000000146872f4c & uRam0000000146872f5c;
          local_68 = 0;
          uStack_64 = 0;
          uStack_60 = 0;
          uStack_5c = uRam0000000146872f4c;
        }
        else {
          local_58 = *(undefined4 *)(lVar4 + 0x220);
          uStack_54 = *(undefined4 *)(lVar4 + 0x224);
          uStack_50 = *(undefined4 *)(lVar4 + 0x228);
          uStack_4c = *(undefined4 *)(lVar4 + 0x22c);
          local_48 = *(uint *)(lVar4 + 0x230);
          uStack_44 = *(uint *)(lVar4 + 0x234);
          uStack_40 = *(uint *)(lVar4 + 0x238);
          uStack_3c = *(uint *)(lVar4 + 0x23c);
          local_68 = *(undefined4 *)(lVar4 + 0x210);
          uStack_64 = *(undefined4 *)(lVar4 + 0x214);
          uStack_60 = *(undefined4 *)(lVar4 + 0x218);
          uStack_5c = *(uint *)(lVar4 + 0x21c);
          puVar9 = auStack_88;
        }
      }
      thunk_FUN_1414f8fb0(lVar6,puVar9 + 0x20);
    }
  }
  return;
}



// FUNCTION 140fb1360 FUN_140fb1360 body=765 status=ok
// SIG undefined FUN_140fb1360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140fb1360(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  void **ppvVar8;
  longlong lVar9;
  undefined1 auStack_108 [32];
  void *local_e8;
  int local_e0;
  int local_dc;
  undefined8 local_d8;
  longlong lStack_d0;
  undefined4 *local_c8;
  ulonglong *puStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [16];
  undefined4 local_68 [2];
  undefined8 local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_108;
  puVar6 = (undefined8 *)FText::ToString(param_2);
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(puVar6 + 1);
  lVar9 = (longlong)local_e0;
  pvVar4 = (void *)*puVar6;
  if (local_e0 == 0) {
    local_dc = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,local_e0,0);
    _guard_xfg_dispatch_icall_nop(local_e8,pvVar4,lVar9 * 2);
  }
  FString::ReplaceInline(&local_e8,&DAT_144632bfc,&DAT_144632bbc,1);
  FString::ReplaceInline(&local_e8,&DAT_144632c64,&DAT_144632c34,1);
  FString::ReplaceInline(&local_e8,&DAT_14463d8f8,&DAT_14463d748,1);
  puVar6 = (undefined8 *)FTextFormat::FromString(local_78,&local_e8);
  local_68[0] = 0;
  local_c8 = local_68;
  local_40 = '\0';
  puStack_c0 = local_38;
  lStack_d0 = puVar6[1];
  local_d8 = *puVar6;
  local_60 = 0;
  if (lStack_d0 != 0) {
    LOCK();
    *(int *)(lStack_d0 + 8) = *(int *)(lStack_d0 + 8) + 1;
    UNLOCK();
  }
  uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8,&local_c8);
  uVar7 = FText::Format(local_90,&local_d8,uVar7);
  FText::FText(local_a8,uVar7);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_88 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_b8);
  if (local_40 != '\0') {
    local_40 = '\0';
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_50 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  plVar5 = (longlong *)puVar6[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  ppvVar8 = (void **)FText::ToString(local_a8);
  if (&local_e8 != ppvVar8) {
    local_e0 = *(int *)(ppvVar8 + 1);
    lVar9 = (longlong)local_e0;
    pvVar4 = *ppvVar8;
    if ((local_e0 == 0) && (local_dc == 0)) {
      local_dc = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,local_e0);
      _guard_xfg_dispatch_icall_nop(local_e8,pvVar4,lVar9 * 2);
    }
  }
  FString::ReplaceInline(&local_e8,&DAT_144632cb4,&DAT_144632c9c,1);
  FString::ReplaceInline(&local_e8,&DAT_144632d44,&DAT_144632d14,1);
  FText::FromString(param_1,&local_e8);
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_a0 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (local_e8 != (void *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140fb1660 FUN_140fb1660 body=267 status=ok
// SIG undefined FUN_140fb1660(void)

float * FUN_140fb1660(longlong param_1,float *param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  float fVar4;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142eb5aa0();
  local_10 = 0x10;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"descriptionText",0x20);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  cVar1 = FUN_140e99270(param_1,(undefined8 *)(param_1 + 0x308),&local_18,0,6,&local_28);
  plVar2 = local_28;
  for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (cVar1 != '\0') {
    fVar4 = (float)FUN_142eee550(*(undefined8 *)(param_1 + 0x308));
    param_2[2] = fVar4 + *param_2;
  }
  return param_2;
}



// FUNCTION 140fb1770 FUN_140fb1770 body=97 status=ok
// SIG undefined FUN_140fb1770(void)

undefined8 FUN_140fb1770(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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
      uVar4 = FUN_140bb7440(lVar2);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 140fb17e0 FUN_140fb17e0 body=561 status=ok
// SIG undefined FUN_140fb17e0(void)

void FUN_140fb17e0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined4 local_res8 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong *plStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar10 = 0;
  local_res8[0] = 0;
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar7 != 0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      bVar6 = true;
      bVar5 = false;
      plVar9 = (longlong *)FUN_142dcf3a0(lVar7,local_28);
      lVar10 = *plVar9;
      goto LAB_140fb1885;
    }
  }
  plVar9 = &local_48;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  bVar6 = false;
  bVar5 = true;
LAB_140fb1885:
  plVar4 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = plStack_40;
  if (bVar5) {
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
    }
  }
  if ((bVar6) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_20 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if (lVar10 != 0) {
    pcVar11 = (char *)FUN_1410828b0(local_res8,param_1);
    if (*pcVar11 == '\x02') {
      lVar7 = FUN_140f9aee0(param_1);
      if (lVar7 != 0) {
        local_58 = (undefined4)lVar10;
        uStack_54 = (undefined4)((ulonglong)lVar10 >> 0x20);
        uStack_50 = SUB84(plVar4,0);
        uStack_4c = (undefined4)((ulonglong)plVar4 >> 0x20);
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        uVar12 = FUN_140bb7440(lVar7);
        FUN_140d82c60(uVar12,&local_38,param_2,param_3);
        plVar9 = (longlong *)CONCAT44(uStack_2c,uStack_30);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar9 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  return;
}



// FUNCTION 140fb1a20 FUN_140fb1a20 body=258 status=ok
// SIG undefined FUN_140fb1a20(void)

undefined8 FUN_140fb1a20(longlong param_1,int *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [4];
  undefined1 local_resc [4];
  undefined1 local_res20 [8];
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x6f0));
  lVar5 = *(longlong *)(param_1 + 0x6e0);
  lVar4 = (longlong)*(int *)(param_1 + 0x6e8) * 0xd0 + lVar5;
  if (lVar5 != lVar4) {
    piVar3 = (int *)(lVar5 + 0x90);
    do {
      if ((((*(longlong *)(param_1 + 0x680) != 0) && (*(longlong *)(piVar3 + 4) != 0)) &&
          (((piVar3[1] == param_2[3] && piVar3[-1] == param_2[1]) && piVar3[-2] == *param_2) &&
           param_2[2] == *piVar3)) &&
         (cVar1 = FUN_142087ad0(*(longlong *)(piVar3 + 4),local_res8,local_resc), cVar1 != '\0')) {
        puVar2 = (undefined8 *)
                 FUN_142ef62c0(*(undefined8 *)(param_1 + 0x680),local_res20,local_res8);
        *param_3 = *puVar2;
        ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x6f0));
        return 1;
      }
      lVar5 = lVar5 + 0xd0;
      piVar3 = piVar3 + 0x34;
    } while (lVar5 != lVar4);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x6f0));
  return 0;
}



// FUNCTION 140fb1b30 FUN_140fb1b30 body=512 status=ok
// SIG undefined FUN_140fb1b30(void)

undefined8 FUN_140fb1b30(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(param_2);
  switch(param_3) {
  case 2:
  case 8:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,L"Unable to update. An ally is currently in a menu.",
                       L"GFxMayhemMenu",L"TravelFailedMessage_Menu");
    FText::operator=(param_2,uVar5);
    local_20 = local_b0;
    break;
  case 3:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"Unable to update. An ally is down!",L"GFxMayhemMenu",
                       L"TravelFailedMessage_Down");
    FText::operator=(param_2,uVar5);
    local_20 = local_98;
    break;
  case 4:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,L"Unable to update. Map reloading is currently disabled.",
                       L"GFxMayhemMenu",L"TravelFailedMessage_Disabled");
    FText::operator=(param_2,uVar5);
    local_20 = local_80;
    break;
  case 5:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,L"Unable to update. An ally is currently in a vehicle.",
                       L"GFxMayhemMenu",L"TravelFailedMessage_Vehicle");
    FText::operator=(param_2,uVar5);
    local_20 = local_68;
    break;
  case 6:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Unable to update. An ally is actively joining this game.",
                       L"GFxMayhemMenu",L"TravelFailedMessage_ClientJoin");
    FText::operator=(param_2,uVar5);
    local_20 = local_50;
    break;
  case 7:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Unable to update. An ally is currently in a duel.",
                       L"GFxMayhemMenu",L"TravelFailedMessage_Duel");
    FText::operator=(param_2,uVar5);
    local_20 = local_38;
    break;
  default:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"An ally is not currently able to travel.",L"GFxMayhemMenu",
                       L"TravelFailedMessage");
    FText::operator=(param_2,uVar5);
  }
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
  return param_2;
}



// FUNCTION 140fb1d50 FUN_140fb1d50 body=602 status=ok
// SIG undefined FUN_140fb1d50(void)

undefined4 FUN_140fb1d50(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong *plStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar11 = 0;
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) {
      cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x58c);
      bVar12 = cVar5 == '\0';
      if (bVar12) {
        plVar10 = &local_48;
        local_48 = 0;
        plStack_40 = (longlong *)0x0;
      }
      else {
        uVar9 = FWeakObjectPtr::Get(param_1 + 0x58c);
        plVar10 = (longlong *)FUN_142dcf3a0(uVar9,local_28);
        lVar11 = *plVar10;
      }
      plVar4 = (longlong *)plVar10[1];
      plVar10[1] = 0;
      *plVar10 = 0;
      plVar10 = plStack_40;
      if ((bVar12) && (plStack_40 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plStack_40 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_40 + 8))(plStack_40,1);
          }
        }
      }
      if ((!bVar12) && (local_20 != (longlong *)0x0)) {
        LOCK();
        plVar10 = local_20 + 1;
        lVar8 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      if (lVar11 != 0) {
        local_58 = (undefined4)lVar11;
        uStack_54 = (undefined4)((ulonglong)lVar11 >> 0x20);
        uStack_50 = SUB84(plVar4,0);
        uStack_4c = (undefined4)((ulonglong)plVar4 >> 0x20);
        local_38 = local_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        uVar9 = FUN_140bb7440(lVar7);
        uVar6 = FUN_140d84070(uVar9,&local_38,param_2);
        plVar10 = (longlong *)CONCAT44(uStack_2c,uStack_30);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar10 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        if (plVar4 == (longlong *)0x0) {
          return uVar6;
        }
        LOCK();
        plVar10 = plVar4 + 1;
        lVar11 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar11 != 1) {
          return uVar6;
        }
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 != 1) {
          return uVar6;
        }
        (**(code **)(*plVar4 + 8))(plVar4,1);
        return uVar6;
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar4 + 1;
        lVar11 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
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
  return 0;
}



// FUNCTION 140fb1fb0 FUN_140fb1fb0 body=93 status=ok
// SIG undefined FUN_140fb1fb0(void)

longlong FUN_140fb1fb0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + -0x11c);
  if (lVar2 != 0) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
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



// FUNCTION 140fb2010 FUN_140fb2010 body=160 status=ok
// SIG undefined FUN_140fb2010(void)

longlong FUN_140fb2010(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_2 + 0x58);
  if (lVar3 != 0) {
    lVar2 = UCheckBoxWidgetStyle::StaticClass();
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
      lVar3 = FWeakObjectPtr::Get(lVar3 + 0x590);
      if (lVar3 != 0) {
        lVar2 = FUN_14148cad0();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
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
  }
  return 0;
}



// FUNCTION 140fb20b0 FUN_140fb20b0 body=660 status=ok
// SIG undefined FUN_140fb20b0(void)

void FUN_140fb20b0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong local_28;
  ulonglong local_20;
  
  if ((param_2 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_2 + 0x148))(param_2), lVar3 != 0)
     ) {
    FUN_140e7e6f0(lVar3);
    uVar4 = UEnvQueryTest_Random::StaticClass();
    lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
    if (lVar3 != 0) {
      local_28 = 0;
      local_20 = 0;
      FUN_140e217b0(lVar3,param_2,&local_28);
      uVar10 = (ulonglong)(int)local_20;
      lVar8 = uVar10 * 0x30 + local_28;
      lVar3 = local_28;
      if (local_28 != lVar8) {
        do {
          lVar5 = FWeakObjectPtr::Get(lVar3);
          if (lVar5 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != *(int *)(lVar3 + 8)) && (*(longlong *)(lVar3 + 0x10) != 0)) {
              lVar5 = FUN_141796df0();
              FWeakObjectPtr::operator=(lVar3,lVar5);
              if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(lVar3 + 8) = DAT_1464b56f4;
              }
              lVar5 = FWeakObjectPtr::Get(lVar3);
              if (lVar5 != 0) goto LAB_140fb21ca;
            }
          }
          else {
LAB_140fb21ca:
            lVar6 = FUN_1414a9b90();
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
              lVar5 = FWeakObjectPtr::Get(lVar3);
              if (lVar5 == 0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                if ((DAT_1464b56f4 != *(int *)(lVar3 + 8)) && (*(longlong *)(lVar3 + 0x10) != 0)) {
                  lVar5 = FUN_141796df0();
                  FWeakObjectPtr::operator=(lVar3,lVar5);
                  if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    *(int *)(lVar3 + 8) = DAT_1464b56f4;
                  }
                  lVar5 = FWeakObjectPtr::Get(lVar3);
                  if (lVar5 != 0) goto LAB_140fb2276;
                }
LAB_140fb22ac:
                lVar5 = 0;
              }
              else {
LAB_140fb2276:
                lVar6 = FUN_1414a9b90();
                if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (!bVar2) goto LAB_140fb22ac;
              }
              if (*(char *)(lVar5 + 0xf2) == '\0') {
                iVar1 = (int)param_3[1];
                *(int *)(param_3 + 1) = iVar1 + 1;
                if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
                  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
                }
                FUN_140e13260((longlong)iVar1 * 0x30 + *param_3,lVar3);
              }
            }
          }
          lVar3 = lVar3 + 0x30;
        } while (lVar3 != lVar8);
        uVar10 = local_20 & 0xffffffff;
      }
      if ((int)uVar10 != 0) {
        plVar7 = (longlong *)(local_28 + 0x18);
        do {
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          plVar7 = plVar7 + 6;
          uVar9 = (int)uVar10 - 1;
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 != 0);
      }
      if (local_28 != 0) {
        FMemory::Free(local_28);
      }
    }
  }
  return;
}



// FUNCTION 140fb23b0 FUN_140fb23b0 body=563 status=ok
// SIG undefined FUN_140fb23b0(void)

longlong FUN_140fb23b0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar3 = FUN_141083c60();
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x640) == '\0')) {
    lVar3 = FUN_142eb65a0(param_1);
    if (lVar3 != 0) {
      lVar5 = FUN_14149d3c0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar5 = *(longlong *)(lVar3 + 0x2c8) + 0x2e0;
        if (*(longlong *)(lVar3 + 0x2c8) == 0) {
          lVar5 = 0;
        }
        return lVar5;
      }
    }
    return 0;
  }
  lVar5 = param_1 + 0xcf0;
  lVar4 = FWeakObjectPtr::Get(lVar5);
  lVar8 = 0;
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0xcf8)) && (*(longlong *)(param_1 + 0xd00) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar5,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0xcf8) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(lVar5);
      if (lVar4 != 0) goto LAB_140fb2460;
    }
  }
  else {
LAB_140fb2460:
    lVar5 = FUN_1414efb80();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140fb255f;
  }
  lVar5 = 0;
  lVar4 = lVar8;
  if (*(longlong **)(param_1 + 0x8e0) == (longlong *)0x0) goto LAB_140fb255f;
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0x2b0))();
  if (lVar6 == 0) {
LAB_140fb24f0:
    lVar6 = lVar8;
  }
  else {
    lVar7 = AReplicationGraphDebugActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140fb24f0;
  }
  if (((*(char *)(param_1 + 0xa50) != '\x02') && (lVar4 = lVar5, lVar6 != 0)) &&
     (*(char *)(lVar6 + 0x308) == '\0')) {
    iVar1 = *(int *)(lVar6 + 0x2d8);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x998) <= iVar1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) &&
       (*(longlong *)((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0x990) + 0x58) != 0)) {
      lVar3 = FUN_1412bf430(lVar3);
      return lVar3;
    }
  }
LAB_140fb255f:
  lVar3 = FUN_1412bf4f0(lVar3,lVar4);
  return lVar3;
}



// FUNCTION 140fb25f0 FUN_140fb25f0 body=1102 status=ok
// SIG undefined FUN_140fb25f0(void)

void FUN_140fb25f0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  longlong local_res8;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  longlong *local_50;
  int local_48;
  int local_44;
  
  uVar5 = (**(code **)(*param_1 + 0x148))();
  lVar6 = FMistWorldUtils::GetDebugEntityDrawSystem(uVar5);
  if (param_1[0x139] == 0) {
    return;
  }
  if (param_1[0x121] == 0) {
    return;
  }
  if (param_2 == (longlong *)0x0) {
    return;
  }
  plVar7 = (longlong *)FUN_1413f2350();
  plVar8 = param_2;
  while (plVar8 != plVar7) {
    plVar8 = (longlong *)plVar8[6];
    if (plVar8 == (longlong *)0x0) {
      return;
    }
  }
  if (lVar6 == 0) {
    return;
  }
  plVar7 = (longlong *)FUN_1413f2350();
  plVar8 = param_2;
  do {
    plVar11 = (longlong *)0x0;
    plVar10 = param_2;
    if (plVar8 == plVar7) break;
    plVar8 = (longlong *)plVar8[6];
    plVar10 = plVar11;
  } while (plVar8 != (longlong *)0x0);
  lVar12 = plVar10[0x1f];
  if (lVar12 == 0) {
    (**(code **)(*plVar10 + 0x368))(plVar10);
    lVar12 = plVar10[0x1f];
  }
  param_1[0x14c] = lVar12;
  if (lVar12 == 0) goto LAB_140fb2a22;
  if (*(longlong *)(lVar12 + 0x90) == 0) {
    if (((char)param_1[0x14a] != '\x03') && (param_1[0x121] != 0)) {
      *(undefined1 *)(param_1 + 0x14a) = 3;
      FUN_140fb5e60(param_1);
      LOCK();
      *(undefined4 *)(param_1 + 0xb1) = 1;
      UNLOCK();
      LOCK();
      *(undefined4 *)(param_1 + 0xd8) = 1;
      UNLOCK();
    }
    lVar6 = FUN_141083c60(param_1);
    if (lVar6 != 0) {
      FUN_1412d12e0(lVar6);
    }
    if (0 < (int)param_1[0x101]) {
      plVar8 = (longlong *)(param_1[0x100] + 0x18);
      do {
        plVar10 = (longlong *)*plVar8;
        plVar7 = plVar10 + (int)plVar8[1];
        if (plVar10 != plVar7) {
          do {
            if (*plVar10 == *(longlong *)(param_1[0x14c] + 0xd8)) {
              *(int *)(param_1 + 0x123) = (int)plVar11;
              goto LAB_140fb2a11;
            }
            plVar10 = plVar10 + 1;
          } while (plVar10 != plVar7);
        }
        uVar13 = (int)plVar11 + 1;
        plVar11 = (longlong *)(ulonglong)uVar13;
        plVar8 = plVar8 + 5;
      } while ((int)uVar13 < (int)param_1[0x101]);
    }
LAB_140fb2a11:
    FUN_1411f4750(param_1[0x139]);
    goto LAB_140fb2a22;
  }
  plVar8 = (longlong *)FUN_142f406a0(lVar6);
  if (((char)param_1[0x14a] != '\x01') && (param_1[0x121] != 0)) {
    *(undefined1 *)(param_1 + 0x14a) = 1;
    FUN_140fb6770(param_1);
    LOCK();
    *(undefined4 *)(param_1 + 0xb1) = 1;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0xd8) = 1;
    UNLOCK();
  }
  if (0 < (int)param_1[0x103]) {
    local_res8 = 0;
    plVar7 = plVar11;
    do {
      lVar6 = param_1[0x102] + local_res8;
      FText::FText(local_68,lVar6);
      local_50 = (longlong *)0x0;
      local_48 = *(int *)(lVar6 + 0x20);
      lVar12 = (longlong)local_48;
      _Src = *(void **)(lVar6 + 0x18);
      if (local_48 == 0) {
        local_44 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_50,local_48,0);
        _guard_xfg_dispatch_icall_nop(local_50,_Src,lVar12 << 3);
      }
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
        puVar9 = (undefined8 *)FUN_140b80630(*(longlong *)(DAT_146b33f38 + 0x58),local_78,local_68);
        iVar3 = *(int *)(puVar9 + 1);
        if (iVar3 != 0) {
          if (local_44 < local_48 + iVar3) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(&local_50);
          }
          _guard_xfg_dispatch_icall_nop(local_50 + local_48,(void *)*puVar9,(longlong)iVar3 << 3);
          *(undefined4 *)(puVar9 + 1) = 0;
          local_48 = local_48 + iVar3;
        }
        if (local_78[0] != 0) {
          FMemory::Free();
        }
      }
      if (local_50 != local_50 + local_48) {
        plVar10 = local_50;
        do {
          if (*plVar10 == *(longlong *)(param_1[0x14c] + 0xd8)) {
            *(int *)((longlong)param_1 + 0x91c) = (int)plVar7;
            if (local_50 != (longlong *)0x0) {
              FMemory::Free();
            }
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_60 + 1;
              lVar6 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_60)(local_60);
                LOCK();
                piVar2 = (int *)((longlong)local_60 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_60 + 8))(local_60,1);
                }
              }
            }
            goto LAB_140fb28f9;
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != local_50 + local_48);
      }
      if (local_50 != (longlong *)0x0) {
        FMemory::Free();
      }
      plVar10 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      uVar13 = (int)plVar7 + 1;
      plVar7 = (longlong *)(ulonglong)uVar13;
      local_res8 = local_res8 + 0x28;
    } while ((int)uVar13 < (int)param_1[0x103]);
  }
LAB_140fb28f9:
  if (plVar8 == (longlong *)0x0) {
LAB_140fb293a:
    plVar8 = plVar11;
  }
  else {
    lVar6 = UMaterialInstanceDynamic::GetPrivateStaticClass();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140fb293a;
  }
  FUN_1411f4b70(param_1[0x139],plVar8);
  FUN_140fb2a40(param_1,plVar8,1,1);
LAB_140fb2a22:
  FUN_140fd6950(param_1,8);
  return;
}



// FUNCTION 140fb2a40 FUN_140fb2a40 body=286 status=ok
// SIG undefined FUN_140fb2a40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fb2a40(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FWeakObjectPtr::operator=(&local_a0);
  FWeakObjectPtr::operator=(&local_a8,param_1);
  local_68 = (longlong *)0x0;
  local_58 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x28,local_88);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446486d8;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_a8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_a4;
    *(undefined4 *)(puVar1 + 3) = local_a0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_9c;
    *(undefined1 *)(puVar1 + 4) = param_3;
    *(undefined1 *)((longlong)puVar1 + 0x21) = param_4;
  }
  local_98[0] = &LAB_140faee10;
  FUN_14208c260(param_1,local_98);
  if (local_58 != 0) {
    plVar2 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar2 = local_68;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fb2b60 FUN_140fb2b60 body=722 status=ok
// SIG undefined FUN_140fb2b60(void)

void FUN_140fb2b60(longlong param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong local_58 [8];
  
  if (param_2 != *(char *)(param_1 + 0x948)) {
    iVar5 = 0;
    *(char *)(param_1 + 0x948) = param_2;
    if ((*(longlong *)(param_1 + 0x8a0) != 0) && (iVar2 = FUN_142eb7440(), 0 < iVar2)) {
      do {
        lVar3 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x8a0),iVar5);
        if (lVar3 != 0) {
          lVar4 = URemnantGameInstance::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (*(char *)(lVar3 + 0x308) == *(char *)(param_1 + 0x948))) {
            (**(code **)(**(longlong **)(param_1 + 0x8a0) + 0x2b8))
                      (*(longlong **)(param_1 + 0x8a0),iVar5,1);
            break;
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x8a0));
      } while (iVar5 < iVar2);
    }
    if (param_2 == '\0') {
      *(undefined1 *)(param_1 + 0x949) = 0;
    }
    else if (param_2 == '\x01') {
      *(undefined1 *)(param_1 + 0x949) = 1;
      if (*(longlong *)(param_1 + 0x898) != 0) {
        local_58[6] = 0;
        local_58[7] = 0x10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 6,0);
        FGenericPlatformString::Memcpy(local_58[6],L"missionLogIntro",0x20);
        FUN_142088910(*(undefined8 *)(param_1 + 0x898),local_58 + 6);
        if (local_58[6] != 0) {
          FMemory::Free();
        }
      }
    }
    else if (param_2 == '\x02') {
      *(undefined1 *)(param_1 + 0x949) = 0;
      if (*(longlong *)(param_1 + 0x898) != 0) {
        local_58[4] = 0;
        local_58[5] = 0xd;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 4,0);
        FGenericPlatformString::Memcpy(local_58[4],L"echoLogIntro",0x1a);
        FUN_142088910(*(undefined8 *)(param_1 + 0x898),local_58 + 4);
        if (local_58[4] != 0) {
          FMemory::Free();
        }
      }
    }
    else if (param_2 == '\x03') {
      *(undefined1 *)(param_1 + 0x949) = 0;
      if (*(longlong *)(param_1 + 0x898) != 0) {
        local_58[2] = 0;
        local_58[3] = 0xd;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 2,0);
        FGenericPlatformString::Memcpy(local_58[2],L"echoLogIntro",0x1a);
        FUN_142088910(*(undefined8 *)(param_1 + 0x898),local_58 + 2);
        if (local_58[2] != 0) {
          FMemory::Free();
        }
      }
    }
    else if ((param_2 == '\x04') &&
            (*(undefined1 *)(param_1 + 0x949) = 0, *(longlong *)(param_1 + 0x898) != 0)) {
      local_58[0] = 0;
      local_58[1] = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
      FGenericPlatformString::Memcpy(local_58[0],L"eridianLogIntro",0x20);
      FUN_142088910(*(undefined8 *)(param_1 + 0x898),local_58);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x998) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140fb2e40 FUN_140fb2e40 body=295 status=ok
// SIG undefined FUN_140fb2e40(void)

undefined8 FUN_140fb2e40(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0x10;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"objectiveListMC",0x20);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  cVar1 = FUN_140f15e80(param_1,param_1 + 0x198,&local_28,0,6,&local_38);
  plVar3 = local_38;
  for (iVar4 = (int)local_30; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if ((cVar1 == '\0') || (iVar4 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x198)), iVar4 < 1)) {
    if (*(longlong *)(param_1 + 0x1c0) == 0) {
      uVar2 = 0;
    }
    else {
      FUN_142eef530(*(longlong *)(param_1 + 0x1c0),param_2);
      uVar2 = 1;
    }
  }
  else {
    FUN_142eb96e0(*(undefined8 *)(param_1 + 0x198),*(undefined4 *)(param_2 + 4));
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 140fb2f70 FUN_140fb2f70 body=418 status=ok
// SIG undefined FUN_140fb2f70(void)

ulonglong FUN_140fb2f70(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  longlong lVar7;
  uint7 uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  
  if (*(char *)(param_1 + 0x1a4) != '\0') {
    iVar3 = *(int *)(param_1 + 0x1a0);
    cVar2 = *(char *)((longlong)param_2 + 0xc);
    if ((cVar2 == '\0') && (in_RAX = *param_2, DAT_146b3e2a0 == in_RAX)) {
      uVar6 = CONCAT71((int7)(in_RAX >> 8),1);
    }
    else {
      uVar6 = in_RAX & 0xffffffffffffff00;
    }
    if (((char)uVar6 == '\0') || (*(char *)(param_1 + 0x1a5) == '\0')) {
      if ((cVar2 == '\0') && (uVar6 = *param_2, DAT_1468730c0 == uVar6)) {
        uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
      }
      else {
        uVar6 = uVar6 & 0xffffffffffffff00;
      }
      if ((char)uVar6 == '\0') {
        if ((cVar2 == '\0') && (uVar6 = *param_2, DAT_146b3e2b8 == uVar6)) {
          in_RAX = CONCAT71((int7)(uVar6 >> 8),1);
        }
        else {
          in_RAX = uVar6 & 0xffffffffffffff00;
        }
        if ((char)in_RAX != '\0') goto LAB_140fb3100;
      }
      else if (*(char *)(param_1 + 0x1a6) != '\0') {
        lVar9 = *(longlong *)(param_1 + 0x38);
        if (lVar9 != 0) {
          lVar7 = UInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            lVar9 = FUN_140e971d0(lVar9);
            if (lVar9 != 0) {
              lVar9 = FUN_140cff230(lVar9);
              if (lVar9 != 0) {
                FUN_140d4cc50(lVar9,param_1 + 0x1e0,1);
              }
            }
          }
        }
        FUN_140fb3220(param_1);
        TBaseDelegate<void>::ExecuteIfBound(param_1 + 0x180);
      }
    }
    else {
      FUN_140fae710(param_1);
    }
    iVar5 = iVar3 + -1;
    uVar8 = (uint7)(uint3)((uint)iVar5 >> 8);
    if ((iVar5 < 0) || (*(int *)(param_1 + 0x198) <= iVar5)) {
      in_RAX = (ulonglong)uVar8 << 8;
    }
    else {
      in_RAX = CONCAT71(uVar8,1);
    }
    if ((char)in_RAX != '\0') {
      lVar9 = (longlong)iVar3 * 0xd0;
      puVar10 = *(ulonglong **)(lVar9 + -0x18 + *(longlong *)(param_1 + 400));
      in_RAX = (ulonglong)*(int *)(lVar9 + -0x10 + *(longlong *)(param_1 + 400));
      puVar1 = puVar10 + in_RAX;
      if (puVar10 != puVar1) {
        in_RAX = *param_2;
        do {
          if (in_RAX == *puVar10) goto LAB_140fb3100;
          puVar10 = puVar10 + 1;
        } while (puVar10 != puVar1);
      }
    }
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_140fb3100:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140fb3120 FUN_140fb3120 body=251 status=ok
// SIG undefined FUN_140fb3120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fb3120(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  FWeakObjectPtr::operator=(&local_88,param_1);
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144213c48;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_88;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_84;
    *(undefined4 *)(puVar1 + 3) = param_2;
  }
  local_78[0] = &LAB_140faeb00;
  FUN_14208c260(param_1,local_78);
  if (local_38 != 0) {
    plVar2 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar2 = local_48;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fb3220 FUN_140fb3220 body=279 status=ok
// SIG undefined FUN_140fb3220(void)

void FUN_140fb3220(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x1a4) != '\0') {
    *(undefined1 *)(param_1 + 0x1a4) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    local_18 = 0;
    local_10 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"hide",10);
    FUN_142088910(param_1,&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
    lVar3 = *(longlong *)(param_1 + 0x1d0);
    lVar4 = (longlong)*(int *)(param_1 + 0x1d8) * 0x20 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x20) {
      plVar1 = *(longlong **)(lVar3 + 0x18);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x278))(plVar1,0);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    lVar4 = UInputKeySelector::GetPrivateStaticClass();
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
      LOCK();
      *(undefined4 *)(lVar3 + 0x588) = 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 140fb3340 FUN_140fb3340 body=693 status=ok
// SIG undefined FUN_140fb3340(void)

void FUN_140fb3340(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float local_res8;
  float local_resc;
  undefined8 local_res10;
  float local_res18;
  float local_res1c;
  
  lVar4 = FUN_141083c60();
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
  lVar8 = 0;
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140fb33a3;
  }
  lVar5 = lVar8;
LAB_140fb33a3:
  if ((lVar4 != 0) && (lVar5 != 0)) {
    local_res10 = 0;
    FUN_142eb7ad0(param_1,&local_res18);
    local_res8 = 1.0;
    local_resc = 1.0;
    fVar9 = 960.0 / *(float *)(param_1 + 0x1ec);
    fVar10 = 540.0 / *(float *)(param_1 + 0x1f0);
    if ((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) {
      FUN_142481d50(*(longlong *)(DAT_146b17150 + 0x7b0),&local_res8);
    }
    cVar2 = FUN_142dcfc60(lVar5);
    if (cVar2 == '\x01') {
      fVar9 = local_resc * -0.25;
      FUN_142eb7a90(param_1);
      iVar3 = FUN_142eb7a90(param_1);
      if (iVar3 != 0) {
        fVar9 = (local_resc * 0.5 - *(float *)(param_1 + 0x1f0)) + fVar9;
      }
      local_res10 = (ulonglong)(uint)(fVar10 * fVar9) << 0x20;
    }
    else {
      cVar2 = FUN_142dcfc60(lVar5);
      if (cVar2 == '\x02') {
        local_res10 = CONCAT44((local_resc * *(float *)(lVar4 + 0x9e4) +
                               local_res1c * (local_resc * 0.5 - *(float *)(param_1 + 0x1f0))) *
                               fVar10,(local_res8 * 0.25 * *(float *)(lVar4 + 0x9e0) +
                                      local_res18 * (local_res8 * 0.5 - *(float *)(param_1 + 0x1ec))
                                      ) * fVar9);
      }
      else {
        cVar2 = FUN_142dcfc60(lVar5);
        if (cVar2 == '\x03') {
          local_res10 = CONCAT44((local_resc * 0.25 * *(float *)(lVar4 + 0x9dc) +
                                 local_res1c * (local_resc * 0.5 - *(float *)(param_1 + 0x1f0))) *
                                 fVar10,(local_res8 * 0.25 * *(float *)(lVar4 + 0x9d8) +
                                        local_res18 *
                                        (local_res8 * 0.5 - *(float *)(param_1 + 0x1ec))) * fVar9);
        }
      }
    }
    lVar5 = local_res10;
    plVar7 = (longlong *)(param_1 + 0x938);
    if (plVar7 <= (longlong *)(param_1 + 0x948U)) {
      do {
        if (*plVar7 != 0) {
          FUN_1420900f0(*plVar7,lVar5);
        }
        plVar7 = plVar7 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 2);
    }
  }
  return;
}



// FUNCTION 140fb3600 FUN_140fb3600 body=113 status=ok
// SIG undefined FUN_140fb3600(void)

void FUN_140fb3600(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18;
  undefined8 local_10;
  
  *(undefined1 *)(param_1 + 0x898) = 1;
  FUN_140fd62d0();
  lVar1 = *(longlong *)(param_1 + 0x8e0);
  local_18 = lVar1;
  if (lVar1 == 0) {
    local_10 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
  }
  FUN_142ed36d0(param_1,&local_18,0);
  if (*(longlong *)(param_1 + 0x8e0) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x8e0) + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 140fb3680 FUN_140fb3680 body=1556 status=ok
// SIG undefined FUN_140fb3680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fb3680(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_228 [32];
  undefined4 local_208 [2];
  longlong local_200 [3];
  undefined4 *local_1e8;
  ulonglong *puStack_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong *plStack_1b8;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [24];
  longlong local_b0;
  longlong local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_228;
  local_208[0] = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_200[0] = 0;
  local_200[1] = 0;
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = UWorld::GetGameState<APVPGameState>(lVar7);
    if (lVar7 != 0) {
      FUN_140b5b5c0(lVar7 + 0x670,&local_1a8,local_200,0xffffffff);
    }
  }
  lVar8 = FUN_140b73d00(&local_1a8,local_c8);
  iVar3 = *(int *)(lVar8 + 0x30);
  if (iVar3 != 0) {
    iVar5 = (int)param_1[0xf5];
    if (*(int *)((longlong)param_1 + 0x7ac) < iVar5 + iVar3) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xf4);
      iVar5 = (int)param_1[0xf5];
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(param_1[0xf4] + (longlong)iVar5 * 8),*(void **)(lVar8 + 0x28),
               (longlong)iVar3 << 3);
    *(undefined4 *)(lVar8 + 0x30) = 0;
    *(int *)(param_1 + 0xf5) = (int)param_1[0xf5] + iVar3;
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  FUN_140b4e2b0(local_c8);
  lVar8 = FWeakObjectPtr::Get((longlong)param_1 + 0x5cc);
  if (lVar8 != 0) {
    lVar9 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) {
      uVar6 = FUN_140b5d0c0(lVar8);
      *(undefined4 *)(param_1 + 0xe5) = uVar6;
      uVar6 = FUN_140b5d580(lVar8);
      iVar3 = (int)param_1[0xe5];
      *(int *)((longlong)param_1 + 0x72c) = iVar3;
      *(undefined4 *)((longlong)param_1 + 0x734) = uVar6;
      *(bool *)(param_1 + 0xe6) = 0 < iVar3;
      *(bool *)((longlong)param_1 + 0x731) = 0 < iVar3;
      *(undefined4 *)(param_1 + 0xe7) = uVar6;
      if (param_1[0xd7] != 0) {
        FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                  (local_128,L"Current Level: {0}",L"GFxMayhemMenu",L"CurrentRankIndicator");
        FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                  (local_140,L"Disabled",L"GFxMayhemMenu",L"CurrentRankDisabled");
        bVar12 = (char)param_1[0xe6] == '\0';
        if (bVar12) {
          uVar10 = FText::FText(local_f8,local_140);
        }
        else {
          local_1c0 = 0;
          plStack_1b8 = (longlong *)0x0;
          uVar10 = FText::AsNumber(local_e0,(int)param_1[0xe5],0,&local_1c0);
        }
        lVar9 = FText::FText(local_80,uVar10);
        local_1d8 = lVar9;
        puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_90,local_128);
        local_68[0] = 4;
        FText::FText(local_58,lVar9);
        local_1d0 = *puVar11;
        local_1e8 = local_68;
        puStack_1e0 = local_38;
        local_1c8 = puVar11[1];
        local_40 = '\x01';
        if (local_1c8 != 0) {
          LOCK();
          *(int *)(local_1c8 + 8) = *(int *)(local_1c8 + 8) + 1;
          UNLOCK();
        }
        uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_168,&local_1e8);
        uVar10 = FText::Format(local_110,&local_1d0,uVar10);
        FText::FText(local_158,uVar10);
        if (local_108 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_108 + 1;
          lVar9 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_108)(local_108);
            LOCK();
            piVar1 = (int *)((longlong)local_108 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_108 + 8))(local_108,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_168);
        if (local_40 != '\0') {
          local_40 = '\0';
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_50 + 1;
            lVar9 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
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
        plVar4 = (longlong *)puVar11[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar4 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
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
        plVar4 = *(longlong **)(local_1d8 + 8);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar4 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
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
        (**(code **)(*(longlong *)param_1[0xd7] + 0x2b0))((longlong *)param_1[0xd7],local_158,1,0);
        if (local_150 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_150 + 1;
          lVar9 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_150)(local_150);
            LOCK();
            piVar1 = (int *)((longlong)local_150 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_150 + 8))(local_150,1);
            }
          }
        }
        if (bVar12) {
          if (local_f0 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_f0 + 1;
            lVar9 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_f0)(local_f0);
              LOCK();
              piVar1 = (int *)((longlong)local_f0 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_f0 + 8))(local_f0,1);
              }
            }
          }
        }
        if (!bVar12) {
          if (local_d8 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_d8 + 1;
            lVar9 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_d8)(local_d8);
              LOCK();
              piVar1 = (int *)((longlong)local_d8 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_d8 + 8))(local_d8,1);
              }
            }
          }
        }
        plVar4 = plStack_1b8;
        if ((!bVar12) && (plStack_1b8 != (longlong *)0x0)) {
          LOCK();
          plVar2 = plStack_1b8 + 1;
          lVar9 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_1b8)(plStack_1b8);
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
        if (local_138 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_138 + 1;
          lVar9 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_138)(local_138);
            LOCK();
            piVar1 = (int *)((longlong)local_138 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_138 + 8))(local_138,1);
            }
          }
        }
        if (local_120 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_120 + 1;
          lVar9 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_120)(local_120);
            LOCK();
            piVar1 = (int *)((longlong)local_120 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_120 + 8))(local_120,1);
            }
          }
        }
      }
      lVar8 = FUN_140f9afa0(lVar8);
      if ((lVar8 != 0) && (lVar7 != 0)) {
        local_208[0] = *(undefined4 *)(lVar7 + 0x690);
        FUN_140b70560(lVar7 + 0x670,local_208,param_1 + 0xf6);
      }
    }
  }
  if (local_200[0] != 0) {
    FMemory::Free();
  }
  FUN_140b4e2b0(&local_1a8);
  return;
}



// FUNCTION 140fb3ca0 InsertZeroed body=142 status=ok
// SIG undefined InsertZeroed(void)

void TArray<UParticleLODLevel_*,FDefaultAllocator>::InsertZeroed
               (longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Src;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_3;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_3) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  _Src = (void *)(*param_1 + (longlong)param_2 * 8);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)param_3 * 8 + (longlong)_Src),_Src,(longlong)(iVar1 - param_2) << 3)
  ;
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*param_1 + (longlong)param_2 * 8),0,(longlong)param_3 * 8);
  return;
}



// FUNCTION 140fb3d30 FUN_140fb3d30 body=59 status=ok
// SIG undefined FUN_140fb3d30(void)

undefined1 FUN_140fb3d30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x58c);
    if (*(char *)(lVar1 + 0x128) == '\x03') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140fb3d70 FUN_140fb3d70 body=14 status=ok
// SIG undefined FUN_140fb3d70(void)

undefined8 FUN_140fb3d70(longlong param_1,longlong *param_2)

{
  return CONCAT71((int7)((ulonglong)*param_2 >> 8),*(longlong *)(param_1 + 0x1e0) == *param_2);
}



// FUNCTION 140fb3d80 FUN_140fb3d80 body=57 status=ok
// SIG undefined FUN_140fb3d80(void)

bool FUN_140fb3d80(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar3 = &DAT_143f3eda8;
  puVar2 = &DAT_143f3eda8;
  if (DAT_14629eb38 != 0) {
    puVar2 = DAT_14629eb30;
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    puVar3 = *(undefined2 **)(param_2 + 8);
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar2);
  return iVar1 == 0;
}



// FUNCTION 140fb3dc0 FUN_140fb3dc0 body=808 status=ok
// SIG undefined FUN_140fb3dc0(void)

void FUN_140fb3dc0(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if ((*(longlong *)(param_1 + 0x910) != 0) &&
     (((iVar8 = *(int *)(param_1 + 0xd58), param_2 != iVar8 ||
       (param_3 != *(int *)(param_1 + 0xd5c))) && (param_3 - param_2 < *(int *)(param_1 + 0xd34)))))
  {
    for (; iVar8 < param_2; iVar8 = iVar8 + 1) {
      lVar4 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x910),iVar8);
      if (lVar4 != 0) {
        lVar5 = FUN_141369c80();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (lVar5 = *(longlong *)(lVar4 + 0x358), lVar5 != 0)) {
          iVar9 = *(int *)(param_1 + 0xd78);
          *(int *)(param_1 + 0xd78) = iVar9 + 1;
          if (*(int *)(param_1 + 0xd7c) < iVar9 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xd70,iVar9)
            ;
          }
          *(longlong *)(*(longlong *)(param_1 + 0xd70) + (longlong)iVar9 * 8) = lVar5;
          *(undefined8 *)(lVar4 + 0x358) = 0;
        }
      }
    }
    iVar9 = param_3 + 1;
    iVar8 = param_2;
    if (iVar9 <= *(int *)(param_1 + 0xd5c)) {
      do {
        lVar4 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x910),iVar9);
        if (lVar4 != 0) {
          lVar5 = FUN_141369c80();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (lVar5 = *(longlong *)(lVar4 + 0x358), lVar5 != 0)) {
            iVar7 = *(int *)(param_1 + 0xd78);
            *(int *)(param_1 + 0xd78) = iVar7 + 1;
            if (*(int *)(param_1 + 0xd7c) < iVar7 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0xd70,iVar7);
            }
            *(longlong *)(*(longlong *)(param_1 + 0xd70) + (longlong)iVar7 * 8) = lVar5;
            *(undefined8 *)(lVar4 + 0x358) = 0;
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 <= *(int *)(param_1 + 0xd5c));
    }
    for (; iVar8 <= param_3; iVar8 = iVar8 + 1) {
      lVar4 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x910),iVar8);
      if (lVar4 != 0) {
        lVar5 = FUN_141369c80();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (((bVar2) && (*(longlong *)(lVar4 + 0x358) == 0)) && (0 < *(int *)(param_1 + 0xd78))) {
          iVar7 = *(int *)(param_1 + 0xd78);
          lVar5 = *(longlong *)(param_1 + 0xd70);
          iVar9 = iVar7 + -1;
          uVar1 = *(undefined8 *)(lVar5 + (longlong)iVar9 * 8);
          iVar3 = (iVar7 - iVar9) + -1;
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar5 + (longlong)iVar9 * 8),(void *)(lVar5 + (longlong)iVar7 * 8),
                       (longlong)iVar3 << 3);
            iVar7 = *(int *)(param_1 + 0xd78);
          }
          *(int *)(param_1 + 0xd78) = iVar7 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0xd70);
          *(undefined8 *)(lVar4 + 0x358) = uVar1;
          lVar5 = FWeakObjectPtr::Get(param_1 + 0x5cc);
          if (lVar5 == 0) {
LAB_140fb40a4:
            lVar5 = 0;
          }
          else {
            lVar6 = FUN_14141f270();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_140fb40a4;
          }
          FUN_140fe0110(lVar4,lVar5);
        }
      }
    }
    *(int *)(param_1 + 0xd58) = param_2;
    *(int *)(param_1 + 0xd5c) = param_3;
  }
  return;
}



// FUNCTION 140fb4120 FUN_140fb4120 body=551 status=ok
// SIG undefined FUN_140fb4120(void)

undefined8 * FUN_140fb4120(undefined8 *param_1,undefined1 param_2)

{
  wchar_t *pwVar1;
  
  switch(param_2) {
  case 0:
    *param_1 = 0;
    param_1[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    pwVar1 = L"none";
    break;
  case 1:
    *param_1 = 0;
    param_1[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    pwVar1 = L"plot";
    break;
  case 2:
    *param_1 = 0;
    param_1[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    pwVar1 = L"side";
    break;
  case 3:
    *param_1 = 0;
    param_1[1] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    FGenericPlatformString::Memcpy(*param_1,L"contract",0x12);
    return param_1;
  case 4:
    *param_1 = 0;
    param_1[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    FGenericPlatformString::Memcpy(*param_1,L"echoLog",0x10);
    return param_1;
  case 5:
    *param_1 = 0;
    param_1[1] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    FGenericPlatformString::Memcpy(*param_1,L"eridianWritingRead",0x26);
    return param_1;
  default:
    *param_1 = 0;
    param_1[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    pwVar1 = L"none";
    break;
  case 7:
    *param_1 = 0;
    param_1[1] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    FGenericPlatformString::Memcpy(*param_1,L"complete",0x12);
    return param_1;
  case 8:
    *param_1 = 0;
    param_1[1] = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    FGenericPlatformString::Memcpy(*param_1,L"eridianWritingUnread",0x2a);
    return param_1;
  case 9:
    *param_1 = 0;
    param_1[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    pwVar1 = L"none";
    break;
  case 10:
    *param_1 = 0;
    param_1[1] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    FGenericPlatformString::Memcpy(*param_1,L"hardMission",0x18);
    return param_1;
  }
  FGenericPlatformString::Memcpy(*param_1,pwVar1,10);
  return param_1;
}



// FUNCTION 140fb4380 FUN_140fb4380 body=1025 status=ok
// SIG undefined FUN_140fb4380(void)

void FUN_140fb4380(longlong *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined4 uVar16;
  int local_res8 [2];
  undefined8 in_stack_ffffffffffffff88;
  uint uVar17;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  int local_40;
  undefined1 local_38 [16];
  
  uVar17 = (uint)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  lVar14 = *param_1;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  puVar4 = (undefined8 *)FName::FName(local_res8,"Confirm",1);
  (**(code **)(lVar14 + 0x4e8))(param_1,*puVar4,&local_58);
  local_res8[0] = 0;
  local_58 = (longlong *)0x0;
  plVar7 = param_1 + 0xe8;
  if ((char)param_1[0xea] == '\0') {
    plVar7 = param_1 + 0xf6;
  }
  FUN_140f99080(&local_58,*plVar7,(int)plVar7[1],0,(ulonglong)uVar17 << 0x20);
  do {
    local_res8[0] = local_res8[0] + 1;
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x72c);
    lVar14 = 0;
    uVar16 = 0;
    local_68 = 0;
    uVar12 = 0;
    local_60 = 0;
    iVar10 = (int)param_1[0xe7] * 0xbb38435 + 0x3619636b;
    *(int *)(param_1 + 0xe7) = iVar10;
    lVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x5cc);
    uVar13 = uVar12;
    if (lVar5 != 0) {
      lVar6 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      uVar13 = 0;
      if ((bVar2) && (lVar5 = FUN_140f9afa0(lVar5), lVar5 != 0)) {
        plVar7 = (longlong *)FUN_140c54d80(lVar5,local_38,uVar1,iVar10,0);
        if (&local_68 != plVar7) {
          lVar14 = *plVar7;
          *plVar7 = 0;
          uVar16 = (undefined4)plVar7[1];
          uVar12 = *(undefined4 *)((longlong)plVar7 + 0xc);
          local_60 = plVar7[1];
          plVar7[1] = 0;
          local_68 = lVar14;
        }
        TArray<FCompositeSubFont,FDefaultAllocator>::~TArray<FCompositeSubFont,FDefaultAllocator>
                  (local_38);
        uVar13 = uVar12;
      }
    }
    plVar7 = param_1 + 0xe8;
    if (plVar7 != &local_68) {
      iVar10 = (int)param_1[0xe9];
      lVar5 = *plVar7;
      if (iVar10 != 0) {
        do {
          if (*(longlong *)(lVar5 + 0x28) != 0) {
            FMemory::Free();
          }
          if (*(longlong *)(lVar5 + 0x18) != 0) {
            FMemory::Free();
          }
          FUN_140b4e2b0(lVar5);
          lVar5 = lVar5 + 0x38;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        lVar5 = *plVar7;
      }
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
      *plVar7 = lVar14;
      local_68 = 0;
      local_60 = 0;
      *(undefined4 *)(param_1 + 0xe9) = uVar16;
      *(undefined4 *)((longlong)param_1 + 0x74c) = uVar13;
    }
    TArray<FCompositeSubFont,FDefaultAllocator>::~TArray<FCompositeSubFont,FDefaultAllocator>
              (&local_68);
    *(undefined1 *)(param_1 + 0xea) = 1;
    FUN_140fd3460(param_1);
    iVar10 = (int)param_1[0xe9];
    if (iVar10 == (int)local_50) {
      plVar7 = (longlong *)*plVar7;
      plVar15 = local_58;
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        iVar9 = (int)plVar15[1];
        if (iVar9 == (int)plVar7[1]) {
          if (iVar9 != 0) {
            plVar8 = (longlong *)(*plVar7 + 0x28);
            plVar11 = (longlong *)(*plVar15 + 0x28);
            do {
              cVar3 = FSoftObjectPath::operator==(plVar8 + -3,plVar11 + -3);
              if ((cVar3 == '\0') || (*plVar8 != *plVar11)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) goto LAB_140fb45e5;
              plVar11 = plVar11 + 6;
              plVar8 = plVar8 + 6;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          bVar2 = true;
        }
        else {
LAB_140fb45e5:
          bVar2 = false;
        }
        if (!bVar2) goto LAB_140fb460b;
        plVar7 = plVar7 + 7;
        plVar15 = plVar15 + 7;
      }
      bVar2 = true;
    }
    else {
LAB_140fb460b:
      bVar2 = false;
    }
    if ((!bVar2) && (cVar3 = FUN_140fa0fe0(param_1 + 0xe8,param_1 + 0xf6), cVar3 == '\0')) {
      iVar10 = (int)param_1[0xe5];
      if ((*(int *)((longlong)param_1 + 0x72c) == iVar10) || (iVar10 < 1)) break;
      FUN_140fd5940(param_1,&local_48,iVar10,(int)param_1[0xe7]);
      if (local_40 == (int)param_1[0xf7]) {
        plVar7 = (longlong *)param_1[0xf6];
        plVar15 = local_48;
        for (iVar10 = local_40; iVar10 != 0; iVar10 = iVar10 + -1) {
          iVar9 = (int)plVar7[1];
          if (iVar9 == (int)plVar15[1]) {
            if (iVar9 != 0) {
              plVar11 = (longlong *)(*plVar15 + 0x28);
              plVar8 = (longlong *)(*plVar7 + 0x28);
              do {
                cVar3 = FSoftObjectPath::operator==(plVar11 + -3,plVar8 + -3);
                if ((cVar3 == '\0') || (*plVar11 != *plVar8)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (!bVar2) goto LAB_140fb46d4;
                plVar8 = plVar8 + 6;
                plVar11 = plVar11 + 6;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            bVar2 = true;
          }
          else {
LAB_140fb46d4:
            bVar2 = false;
          }
          if (!bVar2) goto LAB_140fb46ec;
          plVar15 = plVar15 + 7;
          plVar7 = plVar7 + 7;
        }
        bVar2 = false;
      }
      else {
LAB_140fb46ec:
        bVar2 = true;
      }
      TArray<FCompositeSubFont,FDefaultAllocator>::~TArray<FCompositeSubFont,FDefaultAllocator>
                (&local_48);
      if (bVar2) break;
    }
  } while (local_res8[0] < 10);
  FUN_140fcf4f0(param_1);
  if ((int)local_50 != 0) {
    plVar7 = local_58 + 3;
    iVar10 = (int)local_50;
    do {
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      FUN_140b4e2b0(plVar7 + -3);
      plVar7 = plVar7 + 7;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}



// FUNCTION 140fb4790 FUN_140fb4790 body=249 status=ok
// SIG undefined FUN_140fb4790(void)

void FUN_140fb4790(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  iVar4 = *(int *)(param_1 + 0x810);
  iVar3 = *(int *)(param_1 + 0x820);
  iVar1 = (iVar3 - iVar4) + -1;
  if (iVar1 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x818) + (longlong)iVar4 * 8),
               (void *)(*(longlong *)(param_1 + 0x818) + (longlong)(iVar4 + 1) * 8),
               (longlong)iVar1 << 3);
    iVar3 = *(int *)(param_1 + 0x820);
  }
  *(int *)(param_1 + 0x820) = iVar3 + -1;
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x818);
  uStack_60 = CONCAT31(uStack_60._1_3_,0 < *(int *)(param_1 + 0x820));
  local_28 = 0;
  iVar4 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    local_68 = (undefined4)param_1;
    uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
    *puVar2 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar2 + 1) = local_68;
    *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_64;
    *(undefined4 *)(puVar2 + 2) = uStack_60;
    *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_5c;
  }
  local_58[0] = &LAB_140faecd0;
  FUN_14204c280(local_58);
  iVar3 = *(int *)(param_1 + 0x810);
  if (-1 < iVar3 + -1) {
    iVar4 = *(int *)(param_1 + 0x820);
    if (iVar3 <= *(int *)(param_1 + 0x820) + -1) {
      iVar4 = iVar3;
    }
    iVar4 = iVar4 + -1;
  }
  *(int *)(param_1 + 0x810) = iVar4;
  FUN_140fcf600(param_1);
  return;
}



// FUNCTION 140fb4890 FUN_140fb4890 body=241 status=ok
// SIG undefined FUN_140fb4890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fb4890(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [80];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_142ebee70();
  FUN_140fd3cf0(param_1,0);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_140faeaf0;
  uVar2 = FUN_1420849a0(param_1,local_b8,local_68);
  FUN_14208c4f0(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fb4990 FUN_140fb4990 body=155 status=ok
// SIG undefined FUN_140fb4990(void)

void FUN_140fb4990(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_142ebee70();
  *(undefined4 *)(param_1 + 0x83c) = 1;
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_140faeeb0;
  FUN_14208c4f0(param_1,local_58);
  return;
}



// FUNCTION 140fb4a30 FUN_140fb4a30 body=455 status=ok
// SIG undefined FUN_140fb4a30(void)

undefined8 FUN_140fb4a30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar3 = FUN_141083c60(param_1 + -0x4d8);
  lVar2 = *(longlong *)(param_1 + 0x4b0);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x1a4) != '\0')) {
    iVar5 = *(int *)(lVar2 + 0x1a0) + -1;
    if (iVar5 < 0) {
      return 1;
    }
    if (*(int *)(lVar2 + 0x198) <= iVar5) {
      return 1;
    }
    lVar6 = (longlong)*(int *)(lVar2 + 0x1a0) * 0xd0;
    plVar7 = *(longlong **)(lVar6 + -0x28 + *(longlong *)(lVar2 + 400));
    plVar1 = plVar7 + *(int *)(lVar6 + -0x20 + *(longlong *)(lVar2 + 400));
    if (plVar7 == plVar1) {
      return 1;
    }
    while (*(longlong *)(param_2 + 8) != *plVar7) {
      plVar7 = plVar7 + 1;
      if (plVar7 == plVar1) {
        return 1;
      }
    }
  }
  lVar2 = *(longlong *)(param_2 + 8);
  bVar8 = lVar2 != DAT_146873128;
  bVar9 = lVar2 != DAT_146873130;
  if (((lVar2 == DAT_146873128) || (!bVar9)) && (fVar11 = *(float *)(param_2 + 4), 0.0001 < fVar11))
  {
    fVar12 = *(float *)(param_1 + 0x570);
    if (!bVar8) {
      fVar12 = fVar11;
    }
    fVar10 = *(float *)(param_1 + 0x574);
    if (!bVar9) {
      fVar10 = fVar11;
    }
    fVar11 = fVar10 * fVar10 + fVar12 * fVar12;
    if (*(float *)(param_1 + 0x318) <= fVar11 && fVar11 != *(float *)(param_1 + 0x318)) {
      *(undefined8 *)(param_1 + 0x8a8) = 0;
    }
  }
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x640) == '\0')) {
    if (bVar8) {
      if (bVar9) goto LAB_140fb4bc2;
      *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_2 + 4);
      fVar11 = *(float *)(param_1 + 0x570) * *(float *)(param_1 + 0x570) +
               *(float *)(param_1 + 0x574) * *(float *)(param_1 + 0x574);
      bVar8 = fVar11 == *(float *)(param_1 + 0x318);
      bVar9 = fVar11 < *(float *)(param_1 + 0x318);
    }
    else {
      fVar11 = *(float *)(param_2 + 4);
      *(float *)(param_1 + 0x570) = fVar11;
      fVar11 = *(float *)(param_1 + 0x574) * *(float *)(param_1 + 0x574) + fVar11 * fVar11;
      bVar8 = fVar11 == *(float *)(param_1 + 0x318);
      bVar9 = fVar11 < *(float *)(param_1 + 0x318);
    }
    if (!bVar9 && !bVar8) {
      FUN_140fde680(param_1 + -0x4d8,0);
    }
  }
LAB_140fb4bc2:
  if (*(char *)(param_1 + 0x858) == '\x02') {
    return 1;
  }
  uVar4 = FUN_1410885f0(param_1,param_2);
  return uVar4;
}



// FUNCTION 140fb4c00 FUN_140fb4c00 body=61 status=ok
// SIG undefined FUN_140fb4c00(void)

undefined8 FUN_140fb4c00(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x230) != 0) && (*(longlong *)(param_2 + 8) == DAT_146873140)) {
    FUN_142eb96e0(*(longlong *)(param_1 + 0x230),*(undefined4 *)(param_2 + 4));
    return 1;
  }
  uVar1 = FUN_1410885f0(param_1);
  return uVar1;
}



// FUNCTION 140fb4c40 FUN_140fb4c40 body=71 status=ok
// SIG undefined FUN_140fb4c40(void)

undefined1 FUN_140fb4c40(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    cVar1 = FUN_142f0b080();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  uVar2 = FOutputDevice::CanBeUsedOnAnyThread(param_1,param_2);
  return uVar2;
}



// FUNCTION 140fb4c90 FUN_140fb4c90 body=130 status=ok
// SIG undefined FUN_140fb4c90(void)

undefined8 FUN_140fb4c90(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_2 + 8) == DAT_146873140) {
    if (((*(char *)(param_1 + 0x470) == '\x01') && (*(longlong *)(param_1 + 0x430) != 0)) &&
       (cVar1 = FUN_140fb2e40(), cVar1 != '\0')) {
      return 1;
    }
    if ((((byte)(*(char *)(param_1 + 0x470) - 2U) < 3) && (*(longlong *)(param_1 + 0x438) != 0)) &&
       (cVar1 = FUN_140fb2e40(*(longlong *)(param_1 + 0x438),param_2), cVar1 != '\0')) {
      return 1;
    }
  }
  uVar2 = FUN_1410885f0(param_1,param_2);
  return uVar2;
}



// FUNCTION 140fb4d20 FUN_140fb4d20 body=128 status=ok
// SIG undefined FUN_140fb4d20(void)

void FUN_140fb4d20(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if ((param_2 != 0) && (lVar4 = *(longlong *)(param_1 + 0x9c8), lVar4 != 0)) {
    iVar1 = *(int *)(param_2 + 0x2d8);
    if ((-1 < iVar1) && ((iVar1 < *(int *)(lVar4 + 0x80) && (*(int *)(lVar4 + 0x9c) == 2)))) {
      lVar4 = (longlong)iVar1 * 0xc0 + *(longlong *)(lVar4 + 0x78);
      cVar2 = FWeakObjectPtr::IsValid(lVar4 + 0x90);
      if (cVar2 != '\0') {
        uVar3 = FWeakObjectPtr::Get(lVar4 + 0x90);
        FUN_140fb2a40(param_1,uVar3,0,0);
      }
    }
  }
  return;
}



// FUNCTION 140fb4da0 FUN_140fb4da0 body=208 status=ok
// SIG undefined FUN_140fb4da0(void)

void FUN_140fb4da0(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x908));
  if (0 < iVar2) {
    do {
      lVar3 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x908),iVar5);
      if (lVar3 != 0) {
        lVar4 = ALobbyBeaconPlayerState::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          if ((*(longlong *)(lVar3 + 0x318) == *(longlong *)(param_2 + 0x10)) &&
             (*(longlong *)(lVar3 + 800) == *(longlong *)(param_2 + 0x18))) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            FUN_1411fe550(lVar3,param_2);
            return;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x908));
    } while (iVar5 < iVar2);
  }
  return;
}



// FUNCTION 140fb4e70 FUN_140fb4e70 body=716 status=ok
// SIG undefined FUN_140fb4e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fb4e70(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    lVar3 = ALobbyBeaconPlayerState::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140fb4ecd;
  }
  param_2 = 0;
LAB_140fb4ecd:
  lVar4 = FUN_141083c60(param_1);
  lVar3 = *(longlong *)(param_1 + 0x960);
  if (lVar3 != 0) {
    if ((param_2 == 0) || (lVar4 == 0)) {
      if (lVar3 != 0) {
        FUN_140fafa40();
      }
    }
    else {
      if (*(char *)(param_1 + 0xa50) != '\x02') {
        FUN_140fdae90(lVar3,*(undefined8 *)(param_1 + 0x9c8),param_2 + 0x308);
      }
      lVar3 = *(longlong *)(param_1 + 0xce0);
      lVar10 = (longlong)*(int *)(param_1 + 0xce8) * 0x270 + lVar3;
      for (; lVar3 != lVar10; lVar3 = lVar3 + 0x270) {
        if (((*(char *)(lVar3 + 0x9d) == '\x03') && (*(longlong *)(lVar3 + 0x50) != 0)) &&
           (cVar2 = FWeakObjectPtr::IsValid(lVar3), cVar2 != '\0')) {
          lVar9 = *(longlong *)(lVar3 + 0x50);
          if (*(longlong *)(lVar9 + 0x758) != 0) {
            lVar5 = FUN_142dfdfe0();
            lVar9 = *(longlong *)(lVar9 + 0x758);
            for (lVar8 = lVar9; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
              if (lVar8 == lVar5) goto LAB_140fb4fb0;
            }
          }
          lVar9 = 0;
LAB_140fb4fb0:
          if (*(longlong *)(param_2 + 0x3b0) != 0) {
            lVar6 = FUN_142dfdfe0();
            lVar8 = *(longlong *)(param_2 + 0x3b0);
            for (lVar5 = lVar8; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
              if (lVar5 == lVar6) goto LAB_140fb4fe0;
            }
          }
          lVar8 = 0;
LAB_140fb4fe0:
          if (lVar9 == lVar8) {
LAB_140fb5087:
            uVar7 = FWeakObjectPtr::Get(lVar3);
            FUN_1412d4cc0(lVar4,uVar7);
            FUN_140fde680(param_1,lVar3);
            if (*(char *)(lVar4 + 0x640) == '\0') {
              return;
            }
            cVar2 = FUN_140bf9690(0,lVar3 + 0x18);
            if (cVar2 == '\0') {
              return;
            }
            lVar3 = FWeakObjectPtr::Get(lVar3 + 0x18);
            lVar3 = *(longlong *)(lVar3 + 0x168);
            if (lVar3 == 0) {
              local_58 = 0;
              uStack_54 = 0;
              uStack_50 = 0;
              uStack_4c = 0;
              local_48 = _DAT_146872f40 & _DAT_146872f50;
              uStack_44 = uRam0000000146872f44 & uRam0000000146872f54;
              uStack_40 = uRam0000000146872f48 & uRam0000000146872f58;
              uStack_3c = uRam0000000146872f4c & uRam0000000146872f5c;
              local_68 = 0;
              uStack_64 = 0;
              uStack_60 = 0;
              uStack_5c = uRam0000000146872f4c;
            }
            else {
              local_58 = *(undefined4 *)(lVar3 + 0x220);
              uStack_54 = *(undefined4 *)(lVar3 + 0x224);
              uStack_50 = *(undefined4 *)(lVar3 + 0x228);
              uStack_4c = *(undefined4 *)(lVar3 + 0x22c);
              local_48 = *(uint *)(lVar3 + 0x230);
              uStack_44 = *(uint *)(lVar3 + 0x234);
              uStack_40 = *(uint *)(lVar3 + 0x238);
              uStack_3c = *(uint *)(lVar3 + 0x23c);
              local_68 = *(undefined4 *)(lVar3 + 0x210);
              uStack_64 = *(undefined4 *)(lVar3 + 0x214);
              uStack_60 = *(undefined4 *)(lVar3 + 0x218);
              uStack_5c = *(uint *)(lVar3 + 0x21c);
            }
            thunk_FUN_1414f8fb0(lVar4,&local_68);
            return;
          }
          if ((*(longlong *)(param_2 + 0x380) != 0) &&
             (*(longlong *)(*(longlong *)(param_2 + 0x380) + 0x10) != 0)) {
            lVar9 = *(longlong *)(lVar3 + 0x50);
            if (*(longlong *)(lVar9 + 0x758) != 0) {
              lVar5 = FUN_142dfdfe0();
              lVar9 = *(longlong *)(lVar9 + 0x758);
              for (lVar8 = lVar9; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
                if (lVar8 == lVar5) goto LAB_140fb5030;
              }
            }
            lVar9 = 0;
LAB_140fb5030:
            for (lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x380) + 0x10); lVar8 != 0;
                lVar8 = *(longlong *)(lVar8 + 0x30)) {
              if (lVar8 == lVar9) goto LAB_140fb5087;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140fb5140 FUN_140fb5140 body=1044 status=ok
// SIG undefined FUN_140fb5140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fb5140(longlong param_1,char param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined8 *local_190;
  longlong local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 *local_168;
  undefined1 local_158 [32];
  undefined8 local_138;
  undefined4 local_128;
  undefined1 local_118 [8];
  longlong local_110;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5c8);
  lVar12 = 0;
  if (lVar6 != 0) {
    lVar7 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140fb51c1;
  }
  lVar6 = lVar12;
LAB_140fb51c1:
  if (param_2 == '\0') {
    local_138 = 0;
    local_128 = 0;
    puVar11 = (undefined8 *)FUN_140438ef0(0x10,local_158);
    if (puVar11 != (undefined8 *)0x0) {
      puVar11[1] = param_1;
      *puVar11 = &PTR_FUN_143f77b70;
    }
    local_168 = &LAB_140faeee0;
    FUN_14208c4f0(param_1);
    _guard_xfg_dispatch_icall_nop(local_118,0,0xd0);
    lVar12 = FUN_140f9f590(local_118);
    FUN_14128c120(param_1 + 0x760,lVar12);
    *(undefined1 *)(param_1 + 0x7c0) = *(undefined1 *)(lVar12 + 0x60);
    *(undefined1 *)(param_1 + 0x7c1) = *(undefined1 *)(lVar12 + 0x61);
    *(undefined4 *)(param_1 + 0x7c4) = *(undefined4 *)(lVar12 + 100);
    *(undefined1 *)(param_1 + 0x7c8) = *(undefined1 *)(lVar12 + 0x68);
    *(undefined8 *)(param_1 + 0x7cc) = *(undefined8 *)(lVar12 + 0x6c);
    *(undefined4 *)(param_1 + 0x7d4) = *(undefined4 *)(lVar12 + 0x74);
    *(undefined1 *)(param_1 + 0x7d8) = *(undefined1 *)(lVar12 + 0x78);
    *(undefined4 *)(param_1 + 0x7dc) = *(undefined4 *)(lVar12 + 0x7c);
    *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)(lVar12 + 0x80);
    *(undefined4 *)(param_1 + 0x7e4) = *(undefined4 *)(lVar12 + 0x84);
    uVar10 = *(undefined8 *)(lVar12 + 0x90);
    *(undefined8 *)(param_1 + 0x7e8) = *(undefined8 *)(lVar12 + 0x88);
    *(undefined8 *)(param_1 + 0x7f0) = uVar10;
    *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)(lVar12 + 0x98);
    *(undefined4 *)(param_1 + 0x7fc) = *(undefined4 *)(lVar12 + 0x9c);
    *(undefined8 *)(param_1 + 0x800) = *(undefined8 *)(lVar12 + 0xa0);
    *(undefined1 *)(param_1 + 0x808) = *(undefined1 *)(lVar12 + 0xa8);
    *(undefined1 *)(param_1 + 0x809) = *(undefined1 *)(lVar12 + 0xa9);
    *(undefined4 *)(param_1 + 0x80c) = *(undefined4 *)(lVar12 + 0xac);
    *(undefined4 *)(param_1 + 0x810) = *(undefined4 *)(lVar12 + 0xb0);
    plVar13 = (longlong *)(lVar12 + 0xc0);
    *(undefined8 *)(param_1 + 0x814) = *(undefined8 *)(lVar12 + 0xb4);
    plVar14 = (longlong *)(param_1 + 0x820);
    if (plVar14 != plVar13) {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      *plVar14 = *plVar13;
      *plVar13 = 0;
      *(undefined4 *)(param_1 + 0x828) = *(undefined4 *)(lVar12 + 200);
      *(undefined4 *)(param_1 + 0x82c) = *(undefined4 *)(lVar12 + 0xcc);
      *(undefined8 *)(lVar12 + 200) = 0;
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_110 != 0) {
      FMemory::Free();
    }
    if (lVar6 == 0) {
      return;
    }
    cVar5 = FWeakObjectPtr::IsValid(lVar6 + 0x730);
    if (cVar5 == '\0') {
      return;
    }
    uVar10 = FWeakObjectPtr::Get(lVar6 + 0x730);
    param_3 = (undefined8 *)&DAT_1468b5d90;
    param_2 = '\0';
  }
  else {
    *(undefined1 *)(param_1 + 0x7c1) = 1;
    local_188 = 0;
    local_180 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
    FGenericPlatformString::Memcpy(local_188,L"miniCustomWaypoint",0x26);
    FString::operator=(param_1 + 0x820,&local_188);
    if (local_188 != 0) {
      FMemory::Free();
    }
    *(undefined1 *)(param_1 + 0x809) = 3;
    *(undefined8 *)(param_1 + 0x7cc) = *param_3;
    *(undefined4 *)(param_1 + 0x7d4) = *(undefined4 *)(param_3 + 1);
    *(undefined1 *)(param_1 + 0x7d8) = 1;
    puVar8 = (undefined4 *)FGuid::NewGuid(&local_188);
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    *(undefined4 *)(param_1 + 0x7e8) = *puVar8;
    *(undefined4 *)(param_1 + 0x7ec) = uVar1;
    *(undefined4 *)(param_1 + 0x7f0) = uVar2;
    *(undefined4 *)(param_1 + 0x7f4) = uVar3;
    FUN_140fade40(param_1,param_1 + 0x760);
    lVar7 = FUN_140eccca0(param_1);
    lVar9 = FUN_140eccc40(param_1);
    if (lVar9 != 0) {
      lVar12 = *(longlong *)(lVar9 + 0x528);
    }
    cVar5 = '\x02';
    if ((((lVar6 != 0) && (lVar7 != 0)) && (lVar12 != 0)) && (*(longlong *)(param_1 + 0x800) != 0))
    {
      FUN_140cb9b10(lVar6,param_1 + 0x7e8,2);
      local_188 = *(longlong *)(param_1 + 0x7cc);
      local_180 = CONCAT44(local_180._4_4_,*(undefined4 *)(param_1 + 0x7d4));
      local_190 = &local_178;
      local_170 = 0;
      local_198 = &local_170;
      local_178 = 0;
      cVar5 = FUN_140fafb50(param_1,&local_188,lVar7,lVar12);
      cVar5 = (cVar5 != '\0') + '\x02';
    }
    FUN_140ccfca0(lVar6,param_1 + 0x7e8,cVar5);
    if (lVar6 == 0) {
      return;
    }
    cVar5 = FWeakObjectPtr::IsValid(lVar6 + 0x730);
    if (cVar5 == '\0') {
      return;
    }
    uVar10 = FWeakObjectPtr::Get(lVar6 + 0x730);
  }
  FUN_140f725b0(uVar10,param_2,param_3,param_1 + 0x7e8);
  return;
}



// FUNCTION 140fb5560 FUN_140fb5560 body=391 status=ok
// SIG undefined FUN_140fb5560(void)

void FUN_140fb5560(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xbb);
  plVar7 = (longlong *)0x0;
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((bVar8) && (cVar2 = (**(code **)(*plVar4 + 0xf98))(plVar4), plVar7 = plVar4, cVar2 != '\0'))
    {
      return;
    }
  }
  (**(code **)(*param_1 + 0x578))(param_1,0);
  if ((plVar7 != (longlong *)0x0) && (lVar5 = plVar7[0x10a], lVar5 != 0)) {
    lVar6 = AGTutorialStepVideo::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (((bVar8) && (cVar2 = FUN_140a971c0(lVar5), cVar2 != '\0')) &&
       (plVar7 = (longlong *)param_1[199], plVar7 != (longlong *)0x0)) {
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar8 = iVar3 == 0;
      if (bVar8) {
        *(int *)(plVar7 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
      while (!bVar8) {
        LOCK();
        bVar8 = iVar3 == (int)plVar7[1];
        if (bVar8) {
          *(int *)(plVar7 + 1) = iVar3 + 1;
        }
        UNLOCK();
        if (bVar8) {
          if (param_1[0xc6] != 0) {
            FUN_14203de70(param_1[0xc6],&DAT_144632374);
          }
          LOCK();
          plVar4 = plVar7 + 1;
          lVar5 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
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
          break;
        }
        LOCK();
        iVar3 = (int)plVar7[1];
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(plVar7 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
      }
    }
  }
  (**(code **)(*param_1 + 0x580))(param_1,0);
  return;
}



// FUNCTION 140fb5700 FUN_140fb5700 body=279 status=ok
// SIG undefined FUN_140fb5700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fb5700(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140faeca0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140fb5820 FUN_140fb5820 body=279 status=ok
// SIG undefined FUN_140fb5820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fb5820(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140faebd0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140fb5940 FUN_140fb5940 body=398 status=ok
// SIG undefined FUN_140fb5940(void)

void FUN_140fb5940(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    FUN_140483870(*(longlong *)(param_1 + 0x6b0) + 0x540,param_1);
  }
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar4 != 0) {
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
    if (bVar1) {
      lVar4 = FUN_140cff230(lVar4);
      if (lVar4 != 0) {
        FUN_140483870(lVar4 + 0x490,param_1);
      }
    }
  }
  FWeakObjectPtr::operator=(&local_res8,param_1);
  uVar3 = local_resc;
  uVar2 = local_res8;
  local_28 = 0;
  local_18 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_1444f8920;
    puVar6[1] = param_1;
    *(undefined4 *)(puVar6 + 2) = uVar2;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar3;
  }
  local_58[0] = &LAB_140faed30;
  FUN_14204c280(local_58);
  FUN_140fd4f80(param_1,0);
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_1444f8920;
    puVar6[1] = param_1;
    *(undefined4 *)(puVar6 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar6 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_140faedf0;
  FUN_14204c280(local_58);
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 140fb5ad0 FUN_140fb5ad0 body=151 status=ok
// SIG undefined FUN_140fb5ad0(void)

void FUN_140fb5ad0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x178) != &local_18) {
    *(undefined8 *)(param_1 + 0x178) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x180,&local_10);
    plVar5 = local_10;
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
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 140fb5b70 FUN_140fb5b70 body=366 status=ok
// SIG undefined FUN_140fb5b70(void)

void FUN_140fb5b70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_30 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x310) != &local_38) {
    *(undefined8 *)(param_1 + 0x310) = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x318,&local_30);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 800) != &local_28) {
    *(undefined8 *)(param_1 + 800) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x328,&local_20);
    plVar5 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x330) != &local_18) {
    *(undefined8 *)(param_1 + 0x330) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x338,&local_10);
    plVar5 = local_10;
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
  }
  FUN_142ec05c0(param_1);
  return;
}



// FUNCTION 140fb5ce0 FUN_140fb5ce0 body=145 status=ok
// SIG undefined FUN_140fb5ce0(void)

void FUN_140fb5ce0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x1a8) + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) & 0xfbffffff;
    FUN_142ee3e70(*(undefined8 *)(param_1 + 0x1a8));
    local_18 = 0;
    uStack_10 = 0;
    FUN_142f0dc90(*(undefined8 *)(param_1 + 0x1a8),&local_18);
    *(undefined8 *)(param_1 + 0x1a8) = 0;
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 140fb5d80 FUN_140fb5d80 body=112 status=ok
// SIG undefined FUN_140fb5d80(void)

void FUN_140fb5d80(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  FUN_140fd22d0(param_1,0);
  if (((*(char *)(param_1 + 0x948) != '\x01') && (*(longlong *)(param_1 + 0x910) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x910) + 0x170), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x278))(plVar1,0);
    lVar3 = *(longlong *)(param_1 + 0x910);
    cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0x1d8);
    if (cVar2 != '\0') {
      lVar3 = FWeakObjectPtr::Get(lVar3 + 0x1d8);
      LOCK();
      *(undefined4 *)(lVar3 + 0x588) = 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 140fb5df0 FUN_140fb5df0 body=112 status=ok
// SIG undefined FUN_140fb5df0(void)

void FUN_140fb5df0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  char in_stack_00000038;
  
  if ((((in_stack_00000038 != '\0') && (*(char *)(param_1 + 0x948) != '\x01')) &&
      (*(longlong *)(param_1 + 0x910) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x910) + 0x170), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x278))(plVar1,1);
    lVar3 = *(longlong *)(param_1 + 0x910);
    cVar2 = FWeakObjectPtr::IsValid(lVar3 + 0x1d8);
    if (cVar2 != '\0') {
      lVar3 = FWeakObjectPtr::Get(lVar3 + 0x1d8);
      LOCK();
      *(undefined4 *)(lVar3 + 0x588) = 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 140fb5e60 FUN_140fb5e60 body=2308 status=ok
// SIG undefined FUN_140fb5e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fb5e60(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  void *_Src;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_2e8 [32];
  undefined1 *local_2c8;
  undefined1 local_2c0;
  ulonglong local_2b8;
  uint local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  longlong local_298;
  longlong *local_290;
  longlong local_288;
  undefined8 local_280;
  longlong local_278;
  int local_270;
  void *local_268;
  ulonglong local_260;
  longlong local_258 [2];
  void *local_248;
  int local_240;
  undefined4 local_23c;
  longlong local_238;
  undefined1 local_230 [8];
  longlong local_228;
  longlong local_220;
  longlong *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined1 *local_1f8;
  void ***pppvStack_1f0;
  undefined4 *local_1e8;
  ulonglong *puStack_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  void **local_1c8;
  int *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [16];
  undefined1 *local_198;
  void ***pppvStack_190;
  undefined4 *local_188;
  ulonglong *puStack_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [16];
  undefined4 local_b8 [2];
  longlong local_b0;
  undefined1 local_90;
  undefined4 local_88;
  longlong local_80;
  undefined1 local_60;
  ulonglong local_58 [3];
  longlong alStack_40 [3];
  
  local_58[0] = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  local_2a4 = 0;
  local_218 = param_1;
  lVar10 = FUN_1405ec200(param_1 + 0xe9);
  bVar4 = true;
  if (lVar10 == 0) {
LAB_140fb5f0f:
    lVar10 = 0;
    local_238 = 0;
    bVar5 = false;
    bVar4 = true;
    uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_128,L"ERROR_GALAXYNAME",L"GFxMapMenu",L"ErrorGalaxyName");
  }
  else {
    local_238 = lVar10;
    lVar11 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar4 = false;
    }
    if (!bVar4) goto LAB_140fb5f0f;
    bVar5 = true;
    bVar4 = false;
    uVar12 = FText::FText(local_110,lVar10 + 0x30);
  }
  FText::FText(local_140,uVar12);
  if ((bVar4) && (local_120 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_120 + 1;
    lVar11 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar1 = (int *)((longlong)local_120 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  if ((bVar5) && (local_108 != (longlong *)0x0)) {
    LOCK();
    plVar13 = local_108 + 1;
    lVar11 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  plVar13 = (longlong *)FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (plVar13 != (longlong *)0x0) {
    local_290 = plVar13;
    lVar11 = FUN_14145f370();
    if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
        lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140fb6028;
  }
  plVar13 = (longlong *)0x0;
  local_290 = (longlong *)0x0;
LAB_140fb6028:
  uVar16 = 0;
  if (((lVar10 != 0) && (param_1[0x11a] != 0)) && (plVar13 != (longlong *)0x0)) {
    local_2b0 = 0;
    fVar20 = 0.0;
    local_2b8 = 0;
    fVar19 = 0.0;
    local_2ac = 0;
    local_288 = 0;
    local_280 = 0;
    FUN_14129c8b0(lVar10,&local_278);
    local_2a8 = 0;
    if (0 < local_270) {
      local_298 = 0;
      uVar17 = uVar16;
      do {
        bVar4 = false;
        lVar10 = *(longlong *)(local_278 + local_298);
        local_220 = lVar10;
        if (lVar10 != 0) {
          if ((int)uVar16 < 1) {
LAB_140fb6107:
            iVar8 = 0;
            iVar18 = 0;
            local_29c = 0;
            lVar11 = local_298;
            iVar15 = local_2a8;
            if (local_2a8 < local_270) {
              do {
                if ((*(longlong *)(lVar11 + local_278) != 0) &&
                   (iVar9 = FText::CompareToCaseIgnored
                                      (lVar10 + 0x30,*(longlong *)(lVar11 + local_278) + 0x30),
                   iVar9 == 0)) {
                  local_1f8 = &LAB_140fae940;
                  local_2a0 = 0;
                  local_2a4 = 0;
                  uVar12 = *(undefined8 *)(lVar11 + local_278);
                  local_1c8 = &local_268;
                  local_1c0 = &local_2a4;
                  pppvStack_1f0 = &local_1c8;
                  local_268 = (void *)0x0;
                  local_260 = 0;
                  local_198 = &LAB_140fae940;
                  local_1b8 = uVar12;
                  pppvStack_190 = pppvStack_1f0;
                  FUN_1412be2f0(plVar13,0,&local_198);
                  local_1b0 = FUN_142e035e0();
                  local_228 = (**(code **)(*plVar13 + 0x628))(plVar13,local_1b0);
                  _Src = local_268;
                  if (local_228 != 0) {
                    lVar10 = (longlong)(int)local_260;
                    local_248 = (void *)0x0;
                    local_240 = (int)local_260;
                    if ((int)local_260 == 0) {
                      local_23c = 0;
                    }
                    else {
                      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                                (&local_248,local_260 & 0xffffffff,0);
                      _guard_xfg_dispatch_icall_nop(local_248,_Src,lVar10 << 3);
                    }
                    local_2c8 = local_230;
                    local_2c0 = 0;
                    FUN_142dcda40(local_228,&local_248,uVar12,&local_2a0);
                    plVar13 = local_290;
                    iVar8 = local_29c;
                  }
                  if (local_268 != (void *)0x0) {
                    FMemory::Free();
                  }
                  iVar8 = iVar8 + local_2a0;
                  iVar18 = iVar18 + local_2a4;
                  lVar10 = local_220;
                  local_29c = iVar8;
                }
                iVar15 = iVar15 + 1;
                lVar11 = lVar11 + 8;
              } while (iVar15 < local_270);
              if (iVar18 < 1) {
                uVar16 = (ulonglong)local_2b0;
                uVar17 = local_2b8;
              }
              else {
                local_258[0] = 0;
                local_258[1] = 8;
                fVar19 = fVar19 + (float)iVar8 * *(float *)(lVar10 + 0x48);
                fVar20 = fVar20 + (float)iVar18 * *(float *)(lVar10 + 0x48);
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_258,0);
                local_2c8 = (undefined1 *)CONCAT62(local_2c8._2_6_,0x3f);
                FGenericPlatformString::Convert<char,wchar_t>(local_258[0],8,"{0}/{1}");
                uVar12 = FText::FromString(local_e0,local_258);
                puVar14 = (undefined8 *)FTextFormat::FTextFormat(local_c8,uVar12);
                local_b0 = (longlong)iVar8;
                local_1e8 = local_b8;
                puStack_1e0 = local_58;
                local_1d8 = *puVar14;
                local_1d0 = puVar14[1];
                local_80 = (longlong)iVar18;
                local_b8[0] = 0;
                local_90 = 0;
                local_88 = 0;
                local_60 = 0;
                if (local_1d0 != 0) {
                  LOCK();
                  *(int *)(local_1d0 + 8) = *(int *)(local_1d0 + 8) + 1;
                  UNLOCK();
                }
                local_188 = local_1e8;
                puStack_180 = puStack_1e0;
                uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                         TArray<FFormatArgumentValue,FDefaultAllocator>(local_178,&local_188);
                uVar12 = FText::Format(local_f8,&local_1d8,uVar12);
                FText::FText(local_158,uVar12);
                plVar13 = local_f0;
                if (local_f0 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = local_f0 + 1;
                  lVar11 = *plVar3;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_f0)(local_f0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar8 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar8 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                TArray<FFormatArgumentValue,FDefaultAllocator>::
                ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_178);
                lVar11 = 2;
                plVar13 = alStack_40;
                do {
                  lVar11 = lVar11 + -1;
                  if ((char)plVar13[-4] != '\0') {
                    *(undefined1 *)(plVar13 + -4) = 0;
                    plVar3 = (longlong *)plVar13[-6];
                    if (plVar3 != (longlong *)0x0) {
                      LOCK();
                      plVar2 = plVar3 + 1;
                      lVar6 = *plVar2;
                      *(int *)plVar2 = (int)*plVar2 + -1;
                      UNLOCK();
                      if ((int)lVar6 == 1) {
                        (**(code **)*plVar3)(plVar3);
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
                  }
                  plVar13 = plVar13 + -6;
                } while (lVar11 != 0);
                plVar13 = (longlong *)puVar14[1];
                if (plVar13 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = plVar13 + 1;
                  lVar11 = *plVar3;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*plVar13)(plVar13);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar8 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar8 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                uVar16 = local_280;
                lVar11 = (longlong)(int)local_280;
                iVar8 = (int)local_280 + 1;
                local_280 = CONCAT44(local_280._4_4_,iVar8);
                if (local_280._4_4_ < iVar8) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_288,uVar16 & 0xffffffff);
                }
                FText::FText(local_288 + lVar11 * 0x18,local_158);
                plVar13 = local_150;
                if (local_150 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = local_150 + 1;
                  lVar11 = *plVar3;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_150)(local_150);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar8 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar8 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                plVar13 = local_d8;
                if (local_d8 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = local_d8 + 1;
                  lVar11 = *plVar3;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_d8)(local_d8);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    iVar8 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar8 == 1) {
                      (**(code **)(*plVar13 + 8))(plVar13,1);
                    }
                  }
                }
                if (local_258[0] != 0) {
                  FMemory::Free();
                }
                uVar7 = local_2b0;
                lVar11 = (longlong)(int)local_2b0;
                local_2b0 = local_2b0 + 1;
                if (local_2ac < (int)local_2b0) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                  ::ResizeGrow(&local_2b8,uVar7);
                }
                uVar17 = local_2b8;
                uVar16 = (ulonglong)local_2b0;
                FText::FText(local_2b8 + lVar11 * 0x18,lVar10 + 0x30);
              }
              goto LAB_140fb657f;
            }
          }
          else {
            do {
              iVar8 = FText::CompareToCaseIgnored(lVar10 + 0x30,uVar17);
              if (iVar8 == 0) {
                bVar4 = true;
              }
              uVar17 = uVar17 + 0x18;
              uVar16 = uVar16 - 1;
            } while (uVar16 != 0);
            uVar17 = local_2b8;
            plVar13 = local_290;
            if (!bVar4) goto LAB_140fb6107;
          }
          uVar16 = (ulonglong)local_2b0;
        }
LAB_140fb657f:
        local_298 = local_298 + 8;
        local_2a8 = local_2a8 + 1;
        param_1 = local_218;
        lVar10 = local_238;
        plVar13 = local_290;
      } while (local_2a8 < local_270);
    }
    local_2c8 = (undefined1 *)CONCAT71(local_2c8._1_7_,3);
    FUN_140fe0490(param_1[0x11a],&local_2b8,&local_288,fVar19 / fVar20);
    if (local_278 != 0) {
      FMemory::Free();
    }
    TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
    ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_288);
    TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
    ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_2b8);
  }
  if (param_1[299] != 0) {
    uVar12 = FUN_1404b03b0();
    FUN_140fd6390(param_1[299],local_140,uVar12,3);
    local_210 = 0;
    lVar11 = *param_1;
    local_208 = 0;
    puVar14 = (undefined8 *)FName::FName(local_1a8,L"StatusMenu_Map_Planet_Open",1);
    (**(code **)(lVar11 + 0x4e8))(param_1,*puVar14,&local_210);
    FUN_140fda410(param_1[299],1);
  }
  if (param_1[300] != 0) {
    FUN_140fd61e0(param_1[300],0,0);
    FUN_140fd5ac0(param_1[300],1);
  }
  lVar11 = FUN_141083c60(param_1);
  if ((lVar11 == 0) || (*(char *)(lVar11 + 0x71d) == '\0')) {
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x6c4) = 1;
    UNLOCK();
  }
  if (lVar11 != 0) {
    FUN_1412c4c30(lVar11,lVar10);
  }
  if ((char)param_1[0x1a6] == '\x02') {
    local_168 = 0;
    uStack_160 = 0;
    FUN_142ed36d0(param_1,&local_168,0);
  }
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_138 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar1 = (int *)((longlong)local_138 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_138 + 8))(local_138,1);
      }
    }
  }
  return;
}



// FUNCTION 140fb6770 FUN_140fb6770 body=2418 status=ok
// SIG undefined FUN_140fb6770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fb6770(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_2b8 [32];
  int *local_298;
  undefined1 local_290;
  int local_288;
  int local_284;
  longlong local_280;
  undefined8 local_278;
  int local_270 [2];
  longlong local_268;
  longlong local_260;
  undefined8 local_258;
  longlong local_250;
  int local_248;
  longlong local_240 [5];
  longlong local_218;
  undefined4 *local_208;
  ulonglong *puStack_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined4 *local_1e8;
  ulonglong *puStack_1e0;
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [24];
  undefined4 local_c8 [2];
  longlong local_c0;
  undefined1 local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined1 local_70;
  ulonglong local_68 [3];
  longlong alStack_50 [5];
  
  local_68[0] = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  local_284 = 0;
  local_218 = param_1;
  lVar10 = FUN_141083c60();
  if (lVar10 == 0) {
    local_240[3] = 0;
LAB_140fb67f3:
    lVar10 = local_240[3];
    bVar5 = false;
    bVar4 = true;
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_170,L"ERROR_LEVELNAME",L"GFxMapMenu",L"ErrorLevelName");
  }
  else {
    lVar10 = FWeakObjectPtr::Get(lVar10 + 0x754);
    local_240[3] = lVar10;
    if (lVar10 == 0) goto LAB_140fb67f3;
    bVar5 = true;
    bVar4 = false;
    uVar11 = FText::FText(local_158,lVar10 + 0x30);
  }
  FText::FText(local_188,uVar11);
  if ((bVar4) && (local_168 != (longlong *)0x0)) {
    LOCK();
    plVar17 = local_168 + 1;
    lVar12 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar1 = (int *)((longlong)local_168 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_168 + 8))(local_168,1);
      }
    }
  }
  bVar4 = true;
  if ((bVar5) && (local_150 != (longlong *)0x0)) {
    LOCK();
    plVar17 = local_150 + 1;
    lVar12 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)local_150 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  lVar12 = FUN_141083c60(param_1);
  if ((lVar12 == 0) || (lVar12 = FWeakObjectPtr::Get(lVar12 + 0x780), lVar12 == 0)) {
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_140,L"ERROR_PLANETNAME",L"GFxMapMenu",L"ErrorPlanetName");
    bVar6 = false;
    bVar5 = true;
  }
  else {
    uVar11 = FText::FText(local_128,lVar12 + 0x30);
    bVar6 = true;
    bVar5 = false;
  }
  FText::FText(local_1a0,uVar11);
  if ((bVar5) && (local_138 != (longlong *)0x0)) {
    LOCK();
    plVar17 = local_138 + 1;
    lVar12 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar1 = (int *)((longlong)local_138 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_138 + 8))(local_138,1);
      }
    }
  }
  if ((bVar6) && (local_120 != (longlong *)0x0)) {
    LOCK();
    plVar17 = local_120 + 1;
    lVar12 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar1 = (int *)((longlong)local_120 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  lVar12 = FUN_1405ec200(param_1 + 0x748);
  if (lVar12 == 0) {
LAB_140fb69d0:
    lVar12 = 0;
  }
  else {
    lVar13 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (bVar5 = bVar4,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
       != lVar13 + 0x88)) {
      bVar5 = false;
    }
    if (!bVar5) goto LAB_140fb69d0;
  }
  lVar13 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar13 == 0) {
LAB_140fb6a1e:
    lVar13 = 0;
    local_240[2] = 0;
  }
  else {
    local_240[2] = lVar13;
    lVar14 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8
         ) != lVar14 + 0x88)) {
      bVar4 = false;
    }
    if (!bVar4) goto LAB_140fb6a1e;
  }
  if ((((lVar12 == 0) || (lVar10 == 0)) || (*(longlong *)(param_1 + 0x8d0) == 0)) || (lVar13 == 0))
  goto LAB_140fb6f6e;
  uVar19 = 0;
  lVar10 = 0;
  local_280 = 0;
  local_278 = 0;
  fVar23 = 0.0;
  local_260 = 0;
  fVar24 = 0.0;
  local_258 = 0;
  FUN_14129c8b0(lVar12,&local_250);
  local_288 = 0;
  if (local_248 < 1) {
LAB_140fb6efe:
    fVar23 = 1.0;
  }
  else {
    local_268 = 0;
    do {
      bVar4 = false;
      local_240[4] = *(longlong *)(local_250 + local_268);
      if (local_240[4] != 0) {
        if (0 < (int)uVar19) {
          lVar12 = local_240[4] + 0x30;
          uVar21 = uVar19;
          do {
            iVar8 = FText::CompareToCaseIgnored(lVar12,lVar10);
            if (iVar8 == 0) {
              bVar4 = true;
            }
            lVar10 = lVar10 + 0x18;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
          lVar10 = local_280;
          if (bVar4) goto LAB_140fb6ecd;
        }
        lVar14 = local_240[4];
        lVar13 = local_240[3];
        lVar12 = local_240[2];
        iVar22 = 0;
        iVar20 = 0;
        lVar16 = local_268;
        iVar8 = local_288;
        if (local_288 < local_248) {
          do {
            if ((*(longlong *)(local_250 + lVar16) != 0) &&
               (iVar9 = FText::CompareToCaseIgnored
                                  (lVar14 + 0x30,*(longlong *)(local_250 + lVar16) + 0x30),
               iVar9 == 0)) {
              local_270[0] = 0;
              local_284 = 0;
              local_290 = 0;
              local_298 = local_270;
              FUN_14129f250(lVar13,lVar12,*(undefined8 *)(local_250 + lVar16),&local_284);
              iVar22 = iVar22 + local_270[0];
              iVar20 = iVar20 + local_284;
            }
            lVar7 = local_240[4];
            iVar8 = iVar8 + 1;
            lVar16 = lVar16 + 8;
          } while (iVar8 < local_248);
          lVar10 = local_280;
          uVar18 = (uint)local_278;
          if (0 < iVar20) {
            local_240[0] = 0;
            local_240[1] = 8;
            fVar23 = fVar23 + (float)iVar22 * *(float *)(local_240[4] + 0x48);
            fVar24 = fVar24 + (float)iVar20 * *(float *)(local_240[4] + 0x48);
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_240,0);
            local_298 = (int *)CONCAT62(local_298._2_6_,0x3f);
            FGenericPlatformString::Convert<char,wchar_t>(local_240[0],8,"{0}/{1}");
            uVar11 = FText::FromString(local_f8,local_240);
            puVar15 = (undefined8 *)FTextFormat::FTextFormat(local_e0,uVar11);
            local_c0 = (longlong)iVar22;
            local_208 = local_c8;
            puStack_200 = local_68;
            local_1f8 = *puVar15;
            local_1f0 = puVar15[1];
            local_90 = (longlong)iVar20;
            local_c8[0] = 0;
            local_a0 = 0;
            local_98 = 0;
            local_70 = 0;
            if (local_1f0 != 0) {
              LOCK();
              *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
              UNLOCK();
            }
            local_1e8 = local_208;
            puStack_1e0 = puStack_200;
            uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                     TArray<FFormatArgumentValue,FDefaultAllocator>(local_1d8,&local_1e8);
            uVar11 = FText::Format(local_110,&local_1f8,uVar11);
            FText::FText(local_1b8,uVar11);
            plVar17 = local_108;
            if (local_108 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_108 + 1;
              lVar10 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_108)(local_108);
                LOCK();
                piVar1 = (int *)((longlong)plVar17 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar17 + 8))(plVar17,1);
                }
              }
            }
            TArray<FFormatArgumentValue,FDefaultAllocator>::
            ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1d8);
            lVar10 = 2;
            plVar17 = alStack_50;
            do {
              lVar10 = lVar10 + -1;
              if ((char)plVar17[-4] != '\0') {
                *(undefined1 *)(plVar17 + -4) = 0;
                plVar3 = (longlong *)plVar17[-6];
                if (plVar3 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = plVar3 + 1;
                  lVar12 = *plVar2;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)lVar12 == 1) {
                    (**(code **)*plVar3)(plVar3);
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
              }
              plVar17 = plVar17 + -6;
            } while (lVar10 != 0);
            plVar17 = (longlong *)puVar15[1];
            if (plVar17 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar17 + 1;
              lVar10 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*plVar17)(plVar17);
                LOCK();
                piVar1 = (int *)((longlong)plVar17 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar17 + 8))(plVar17,1);
                }
              }
            }
            uVar19 = local_258;
            lVar10 = (longlong)(int)local_258;
            iVar8 = (int)local_258 + 1;
            local_258 = CONCAT44(local_258._4_4_,iVar8);
            if (local_258._4_4_ < iVar8) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_260,uVar19 & 0xffffffff);
            }
            FText::FText(local_260 + lVar10 * 0x18,local_1b8);
            plVar17 = local_1b0;
            if (local_1b0 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_1b0 + 1;
              lVar10 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_1b0)(local_1b0);
                LOCK();
                piVar1 = (int *)((longlong)plVar17 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar17 + 8))(plVar17,1);
                }
              }
            }
            plVar17 = local_f0;
            if (local_f0 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_f0 + 1;
              lVar10 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
                (**(code **)*local_f0)(local_f0);
                LOCK();
                piVar1 = (int *)((longlong)plVar17 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar17 + 8))(plVar17,1);
                }
              }
            }
            if (local_240[0] != 0) {
              FMemory::Free();
            }
            uVar19 = local_278;
            lVar12 = (longlong)(int)(uint)local_278;
            uVar18 = (uint)local_278 + 1;
            local_278 = CONCAT44(local_278._4_4_,uVar18);
            if (local_278._4_4_ < (int)uVar18) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_280,uVar19 & 0xffffffff);
              uVar18 = (uint)local_278;
            }
            lVar10 = local_280;
            FText::FText(lVar12 * 0x18 + local_280,lVar7 + 0x30);
          }
          uVar19 = (ulonglong)uVar18;
        }
      }
LAB_140fb6ecd:
      local_288 = local_288 + 1;
      local_268 = local_268 + 8;
    } while (local_288 < local_248);
    param_1 = local_218;
    if (fVar24 <= 0.0) goto LAB_140fb6efe;
    fVar23 = fVar23 / fVar24;
  }
  local_298 = (int *)CONCAT71(local_298._1_7_,1);
  FUN_140fe0490(*(undefined8 *)(param_1 + 0x8d0),&local_280,&local_260,fVar23);
  if (local_250 != 0) {
    FMemory::Free();
  }
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_260);
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_280);
LAB_140fb6f6e:
  if (*(longlong *)(param_1 + 0x958) != 0) {
    FUN_140fd6390(*(longlong *)(param_1 + 0x958),local_188,local_1a0,1);
    FUN_140fda410(*(undefined8 *)(param_1 + 0x958),1);
  }
  lVar10 = FUN_141083c60(param_1);
  if ((lVar10 == 0) || (*(char *)(lVar10 + 0x71d) == '\0')) {
    LOCK();
    *(undefined4 *)(param_1 + 0x6c4) = 1;
    UNLOCK();
  }
  plVar17 = *(longlong **)(param_1 + 0x948);
  if (((plVar17 != (longlong *)0x0) && (*(char *)(param_1 + 0xd31) == '\0')) &&
     (*(char *)(param_1 + 0x898) == '\0')) {
    (**(code **)(*plVar17 + 0x278))(plVar17,1);
  }
  lVar10 = *(longlong *)(param_1 + 0x988);
  if (((lVar10 != 0) && (*(longlong *)(lVar10 + 0x1e0) == *(longlong *)(param_1 + 0x848))) &&
     ((*(int *)(lVar10 + 0x1a0) == *(int *)(param_1 + 0x870) &&
      ((*(char *)(lVar10 + 0x1a4) != '\0' && (*(char *)(lVar10 + 0x1a5) == '\0')))))) {
    FUN_140fae710();
  }
  if (*(char *)(param_1 + 0xd30) == '\x02') {
    local_1c8 = 0;
    uStack_1c0 = 0;
    FUN_142ed36d0(param_1,&local_1c8,0);
  }
  if (local_198 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_198 + 1;
    lVar10 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_198)(local_198);
      LOCK();
      piVar1 = (int *)((longlong)local_198 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_198 + 8))(local_198,1);
      }
    }
  }
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_180 + 1;
    lVar10 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar1 = (int *)((longlong)local_180 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_180 + 8))(local_180,1);
      }
    }
  }
  return;
}



// FUNCTION 140fb70f0 FUN_140fb70f0 body=2396 status=ok
// SIG undefined FUN_140fb70f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fb70f0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_2c8 [32];
  int *local_2a8;
  int local_298;
  int local_294;
  longlong local_290;
  undefined8 local_288;
  int local_280 [2];
  longlong local_278;
  longlong local_270;
  undefined8 local_268;
  longlong local_260;
  int local_258;
  longlong local_250 [5];
  longlong *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 *local_208;
  ulonglong *puStack_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined1 local_1e8 [16];
  undefined4 *local_1d8;
  ulonglong *puStack_1d0;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [24];
  undefined4 local_b8 [2];
  longlong local_b0;
  undefined1 local_90;
  undefined4 local_88;
  longlong local_80;
  undefined1 local_60;
  ulonglong local_58 [3];
  longlong alStack_40 [3];
  
  local_58[0] = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_294 = 0;
  local_228 = param_1;
  lVar10 = FUN_141083c60();
  if (lVar10 == 0) {
    local_250[3] = 0;
LAB_140fb7176:
    lVar10 = local_250[3];
    bVar5 = false;
    bVar4 = true;
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_160,L"ERROR_PLANETNAME",L"GFxMapMenu",L"ErrorPlanetName");
  }
  else {
    lVar10 = FWeakObjectPtr::Get(lVar10 + 0x780);
    local_250[3] = lVar10;
    if (lVar10 == 0) goto LAB_140fb7176;
    bVar5 = true;
    bVar4 = false;
    uVar11 = FText::FText(local_148,lVar10 + 0x30);
  }
  FText::FText(local_178,uVar11);
  if ((bVar4) && (local_158 != (longlong *)0x0)) {
    LOCK();
    plVar17 = local_158 + 1;
    lVar12 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar1 = (int *)((longlong)local_158 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_158 + 8))(local_158,1);
      }
    }
  }
  bVar4 = true;
  if ((bVar5) && (local_140 != (longlong *)0x0)) {
    LOCK();
    plVar17 = local_140 + 1;
    lVar12 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar1 = (int *)((longlong)local_140 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  lVar12 = FUN_1405ec200(param_1 + 0xe9);
  if (lVar12 == 0) {
LAB_140fb7292:
    lVar12 = 0;
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_130,L"ERROR_GALAXYNAME",L"GFxMapMenu",L"ErrorGalaxyName");
    bVar6 = false;
    bVar5 = true;
  }
  else {
    lVar13 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (bVar5 = bVar4,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
       != lVar13 + 0x88)) {
      bVar5 = false;
    }
    if (!bVar5) goto LAB_140fb7292;
    uVar11 = FText::FText(local_118,lVar12 + 0x30);
    bVar6 = true;
    bVar5 = false;
  }
  FText::FText(local_190,uVar11);
  if ((bVar5) && (local_128 != (longlong *)0x0)) {
    LOCK();
    plVar17 = local_128 + 1;
    lVar13 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar1 = (int *)((longlong)local_128 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_128 + 8))(local_128,1);
      }
    }
  }
  if ((bVar6) && (local_110 != (longlong *)0x0)) {
    LOCK();
    plVar17 = local_110 + 1;
    lVar13 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)local_110 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  lVar13 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (lVar13 != 0) {
    local_250[2] = lVar13;
    lVar14 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8
         ) != lVar14 + 0x88)) {
      bVar4 = false;
    }
    if (bVar4) goto LAB_140fb7398;
  }
  lVar13 = 0;
  local_250[2] = 0;
LAB_140fb7398:
  if ((((lVar12 != 0) && (lVar10 != 0)) && (param_1[0x11a] != 0)) && (lVar13 != 0)) {
    uVar19 = 0;
    lVar10 = 0;
    local_290 = 0;
    local_288 = 0;
    local_270 = 0;
    fVar24 = 0.0;
    local_268 = 0;
    fVar23 = 0.0;
    FUN_14129c8b0(lVar12,&local_260);
    local_298 = 0;
    if (0 < local_258) {
      local_278 = 0;
      do {
        bVar4 = false;
        local_250[4] = *(longlong *)(local_260 + local_278);
        if (local_250[4] != 0) {
          if (0 < (int)uVar19) {
            lVar12 = local_250[4] + 0x30;
            uVar21 = uVar19;
            do {
              iVar8 = FText::CompareToCaseIgnored(lVar12,lVar10);
              if (iVar8 == 0) {
                bVar4 = true;
              }
              lVar10 = lVar10 + 0x18;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
            lVar10 = local_290;
            if (bVar4) goto LAB_140fb781e;
          }
          lVar14 = local_250[4];
          lVar13 = local_250[3];
          lVar12 = local_250[2];
          iVar22 = 0;
          iVar20 = 0;
          lVar16 = local_278;
          iVar8 = local_298;
          if (local_298 < local_258) {
            do {
              if ((*(longlong *)(local_260 + lVar16) != 0) &&
                 (iVar9 = FText::CompareToCaseIgnored
                                    (lVar14 + 0x30,*(longlong *)(local_260 + lVar16) + 0x30),
                 iVar9 == 0)) {
                local_280[0] = 0;
                local_294 = 0;
                local_2a8 = local_280;
                thunk_FUN_14129ae20(lVar13,lVar12,*(undefined8 *)(local_260 + lVar16),&local_294);
                iVar22 = iVar22 + local_280[0];
                iVar20 = iVar20 + local_294;
              }
              lVar7 = local_250[4];
              iVar8 = iVar8 + 1;
              lVar16 = lVar16 + 8;
            } while (iVar8 < local_258);
            lVar10 = local_290;
            uVar18 = (uint)local_288;
            if (0 < iVar20) {
              local_250[0] = 0;
              local_250[1] = 8;
              fVar23 = fVar23 + (float)iVar22 * *(float *)(local_250[4] + 0x48);
              fVar24 = fVar24 + (float)iVar20 * *(float *)(local_250[4] + 0x48);
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_250,0);
              local_2a8 = (int *)CONCAT62(local_2a8._2_6_,0x3f);
              FGenericPlatformString::Convert<char,wchar_t>(local_250[0],8,"{0}/{1}");
              uVar11 = FText::FromString(local_e8,local_250);
              puVar15 = (undefined8 *)FTextFormat::FTextFormat(local_d0,uVar11);
              local_b0 = (longlong)iVar22;
              local_208 = local_b8;
              puStack_200 = local_58;
              local_1f8 = *puVar15;
              local_1f0 = puVar15[1];
              local_80 = (longlong)iVar20;
              local_b8[0] = 0;
              local_90 = 0;
              local_88 = 0;
              local_60 = 0;
              if (local_1f0 != 0) {
                LOCK();
                *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
                UNLOCK();
              }
              local_1d8 = local_208;
              puStack_1d0 = puStack_200;
              uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                       TArray<FFormatArgumentValue,FDefaultAllocator>(local_1c8,&local_1d8);
              uVar11 = FText::Format(local_100,&local_1f8,uVar11);
              FText::FText(local_1a8,uVar11);
              plVar17 = local_f8;
              if (local_f8 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_f8 + 1;
                lVar10 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*local_f8)(local_f8);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar17 + 0xc);
                  iVar8 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar17 + 8))(plVar17,1);
                  }
                }
              }
              TArray<FFormatArgumentValue,FDefaultAllocator>::
              ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1c8);
              lVar10 = 2;
              plVar17 = alStack_40;
              do {
                lVar10 = lVar10 + -1;
                if ((char)plVar17[-4] != '\0') {
                  *(undefined1 *)(plVar17 + -4) = 0;
                  plVar3 = (longlong *)plVar17[-6];
                  if (plVar3 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = plVar3 + 1;
                    lVar12 = *plVar2;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)lVar12 == 1) {
                      (**(code **)*plVar3)(plVar3);
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
                }
                plVar17 = plVar17 + -6;
              } while (lVar10 != 0);
              plVar17 = (longlong *)puVar15[1];
              if (plVar17 != (longlong *)0x0) {
                LOCK();
                plVar3 = plVar17 + 1;
                lVar10 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*plVar17)(plVar17);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar17 + 0xc);
                  iVar8 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar17 + 8))(plVar17,1);
                  }
                }
              }
              uVar19 = local_268;
              lVar10 = (longlong)(int)local_268;
              iVar8 = (int)local_268 + 1;
              local_268 = CONCAT44(local_268._4_4_,iVar8);
              if (local_268._4_4_ < iVar8) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(&local_270,uVar19 & 0xffffffff);
              }
              FText::FText(local_270 + lVar10 * 0x18,local_1a8);
              plVar17 = local_1a0;
              if (local_1a0 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_1a0 + 1;
                lVar10 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*local_1a0)(local_1a0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar17 + 0xc);
                  iVar8 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar17 + 8))(plVar17,1);
                  }
                }
              }
              plVar17 = local_e0;
              if (local_e0 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_e0 + 1;
                lVar10 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*local_e0)(local_e0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar17 + 0xc);
                  iVar8 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar17 + 8))(plVar17,1);
                  }
                }
              }
              if (local_250[0] != 0) {
                FMemory::Free();
              }
              uVar19 = local_288;
              lVar12 = (longlong)(int)(uint)local_288;
              uVar18 = (uint)local_288 + 1;
              local_288 = CONCAT44(local_288._4_4_,uVar18);
              if (local_288._4_4_ < (int)uVar18) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(&local_290,uVar19 & 0xffffffff);
                uVar18 = (uint)local_288;
              }
              lVar10 = local_290;
              FText::FText(lVar12 * 0x18 + local_290,lVar7 + 0x30);
            }
            uVar19 = (ulonglong)uVar18;
          }
        }
LAB_140fb781e:
        local_298 = local_298 + 1;
        local_278 = local_278 + 8;
        param_1 = local_228;
      } while (local_298 < local_258);
    }
    local_2a8 = (int *)CONCAT71(local_2a8._1_7_,2);
    FUN_140fe0490(param_1[0x11a],&local_290,&local_270,fVar23 / fVar24);
    if (local_260 != 0) {
      FMemory::Free();
    }
    TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
    ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_270);
    TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
    ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_290);
  }
  if (param_1[299] != 0) {
    FUN_140fd6390(param_1[299],local_178,local_190,2);
    lVar10 = *param_1;
    local_220 = 0;
    local_218 = 0;
    puVar15 = (undefined8 *)FName::FName(local_1e8,L"StatusMenu_Map_Planet_Open",1);
    (**(code **)(lVar10 + 0x4e8))(param_1,*puVar15,&local_220);
    FUN_140fda410(param_1[299],1);
  }
  if (param_1[300] != 0) {
    FUN_140fd61e0(param_1[300],0,0);
    FUN_140fd5ac0(param_1[300],1);
  }
  lVar10 = FUN_141083c60(param_1);
  if ((lVar10 == 0) || (*(char *)(lVar10 + 0x71d) == '\0')) {
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x6c4) = 1;
    UNLOCK();
  }
  lVar10 = param_1[0x131];
  if ((((lVar10 != 0) && (*(longlong *)(lVar10 + 0x1e0) == param_1[0x109])) &&
      (*(int *)(lVar10 + 0x1a0) == (int)param_1[0x10d])) &&
     ((*(char *)(lVar10 + 0x1a4) != '\0' && (*(char *)(lVar10 + 0x1a5) == '\0')))) {
    FUN_140fae710();
  }
  if ((char)param_1[0x1a6] == '\x02') {
    local_1b8 = 0;
    uStack_1b0 = 0;
    FUN_142ed36d0(param_1,&local_1b8,0);
  }
  if (local_188 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_188 + 1;
    lVar10 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_188)(local_188);
      LOCK();
      piVar1 = (int *)((longlong)local_188 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_188 + 8))(local_188,1);
      }
    }
  }
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_170 + 1;
    lVar10 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar1 = (int *)((longlong)local_170 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_170 + 8))(local_170,1);
      }
    }
  }
  return;
}



// FUNCTION 140fb7a50 FUN_140fb7a50 body=128 status=ok
// SIG undefined FUN_140fb7a50(void)

void FUN_140fb7a50(longlong param_1,char param_2)

{
  wchar_t *pwVar1;
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x970) != 0) {
    local_18[1] = 5;
    local_18[0] = 0;
    if (param_2 == '\0') {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      pwVar1 = L"show";
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      pwVar1 = L"hide";
    }
    FGenericPlatformString::Memcpy(local_18[0],pwVar1,10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x970),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140fb7ad0 FUN_140fb7ad0 body=509 status=ok
// SIG undefined FUN_140fb7ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fb7ad0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  longlong *local_a8;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_114 = 0xffffffff;
  if (param_2 != 0) {
    FUN_14170c210(&local_114);
  }
  FWeakObjectPtr::operator=(&local_10c,param_1);
  plVar6 = (longlong *)param_3[4];
  local_d0 = local_114;
  plVar7 = plVar6 + 1;
  local_100 = *param_3;
  local_110 = *(undefined4 *)(param_3 + 1);
  local_118 = *(undefined1 *)((longlong)param_3 + 0xc);
  local_f0 = param_3[3];
  local_f8 = param_3[2];
  local_d8 = local_10c;
  local_d4 = local_108;
  local_114 = 0xffffffff;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
  }
  uVar3 = *(undefined1 *)(param_3 + 5);
  local_68 = (longlong *)0x0;
  local_58 = 0;
  local_e8 = plVar6;
  local_a8 = plVar6;
  puVar5 = (undefined8 *)FUN_140438ef0(0x50,local_88);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1446486c0;
    puVar5[1] = param_1;
    *(undefined4 *)(puVar5 + 2) = local_10c;
    *(undefined4 *)((longlong)puVar5 + 0x14) = local_108;
    *(undefined4 *)(puVar5 + 3) = local_d0;
    puVar5[4] = local_100;
    *(undefined4 *)(puVar5 + 5) = local_110;
    *(undefined1 *)((longlong)puVar5 + 0x2c) = local_118;
    puVar5[6] = local_f8;
    puVar5[7] = local_f0;
    local_d0 = 0xffffffff;
    puVar5[8] = local_e8;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar7 = (int)*plVar7 + 1;
      UNLOCK();
      plVar6 = local_a8;
    }
    *(undefined1 *)(puVar5 + 9) = uVar3;
  }
  local_98[0] = &LAB_140faeb30;
  FUN_14208c260(param_1,local_98);
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
  plVar7 = local_a8;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar6 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  FUN_1416f8340(local_d0);
  FUN_1416f8340(local_114);
  return;
}



// FUNCTION 140fb7cd0 FUN_140fb7cd0 body=1657 status=ok
// SIG undefined FUN_140fb7cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fb7cd0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_328 [32];
  undefined8 local_308;
  ulonglong local_300;
  undefined4 local_2f8;
  undefined8 local_2f4;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0 [24];
  undefined1 local_2b8 [624];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  uVar12 = 0;
  local_300 = local_300 & 0xffffffff00000000;
  if (param_2 != 0) {
    iVar5 = *(int *)(param_2 + 0x2d8);
    lVar6 = AReplicationGraphDebugActor::GetPrivateStaticClass();
    bVar3 = true;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (bVar2 = bVar3,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
       != lVar6 + 0x88)) {
      bVar2 = false;
    }
    if ((bVar2) && (param_1[300] != 0)) {
      if ((iVar5 < 0) || ((int)param_1[0x133] <= iVar5)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar6 = (longlong)iVar5 * 0x60 + param_1[0x132];
        if (*(char *)(param_2 + 0x308) == '\0') {
          lVar10 = FUN_141083c60(param_1);
          FUN_140fd61e0(param_1[300],1,1);
          *(undefined4 *)((longlong)param_1 + 0xd1c) = 0;
          if (lVar10 != 0) {
            lVar10 = FUN_1412bf430(lVar10,*(undefined8 *)(lVar6 + 0x58));
            uVar7 = uVar12;
            if (lVar10 == 0) {
LAB_140fb808c:
              bVar3 = false;
            }
            else {
              plVar1 = param_1 + 0x19e;
              lVar8 = FWeakObjectPtr::Get(plVar1);
              if (lVar8 == 0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                if ((DAT_1464b56f4 != (int)param_1[0x19f]) && (local_308 = 0, param_1[0x1a0] != 0))
                {
                  lVar8 = FUN_141796df0();
                  FWeakObjectPtr::operator=(plVar1,lVar8);
                  if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    *(int *)(param_1 + 0x19f) = DAT_1464b56f4;
                  }
                  lVar8 = FWeakObjectPtr::Get(plVar1);
                  if (lVar8 != 0) goto LAB_140fb7ff7;
                }
              }
              else {
LAB_140fb7ff7:
                lVar8 = FWeakObjectPtr::Get(lVar10 + 0x18);
                local_2e0 = 0;
                local_2e8 = 0;
                local_2d8 = 0;
                local_2f8 = 0xffffffff;
                local_2f4 = 0;
                local_308 = 0;
                if (lVar8 == 0) {
                  local_308 = 0;
                  local_2e8 = 0;
                }
                else {
                  uVar9 = FSoftObjectPath::FSoftObjectPath(local_2d0,lVar8);
                  FSoftObjectPath::operator=(&local_2e8,uVar9);
                  FWeakObjectPtr::operator=(&local_2f8,lVar8);
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  local_2f4 = CONCAT44(DAT_1464b56f4,(undefined4)local_2f4);
                }
                uVar7 = 1;
                cVar4 = FSoftObjectPath::operator==(&local_2e8,param_1 + 0x1a0);
                if (cVar4 != '\0') goto LAB_140fb808c;
              }
              bVar3 = true;
            }
            if ((uVar7 != 0) && (local_2e0 != 0)) {
              FMemory::Free();
            }
            if (bVar3) {
              lVar10 = FWeakObjectPtr::Get(lVar10 + 0x18);
            }
            else if (((lVar10 != 0) || (cVar4 = FUN_140fb3d80(param_1,lVar6), cVar4 != '\0')) ||
                    (lVar10 = FUN_140fb2010(param_1,lVar6), lVar10 == 0)) goto LAB_140fb80f2;
            FUN_140fc9970(param_1,lVar10,lVar6);
          }
LAB_140fb80f2:
          *(undefined4 *)(param_1 + 0x19e) = 0xffffffff;
          *(undefined4 *)((longlong)param_1 + 0xcf4) = 0;
          param_1[0x1a0] = 0;
          local_308 = 0;
          *(undefined4 *)(param_1 + 0x1a2) = 0;
          if (0x7fffffff < *(uint *)((longlong)param_1 + 0xd14)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1a1,0);
          }
          if ((undefined2 *)param_1[0x1a1] != (undefined2 *)0x0) {
            *(undefined2 *)param_1[0x1a1] = 0;
          }
          *(undefined4 *)(param_1 + 0x19f) = 0;
          uVar7 = *(ulonglong *)(lVar6 + 0x58);
          if (uVar7 == 0) {
LAB_140fb8182:
            uVar7 = uVar12;
          }
          else {
            lVar6 = FUN_142f477c0();
            if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_140fb8182;
          }
          lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
          if (lVar6 != 0) {
            uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
            lVar6 = UWorld::GetGameState<APVPGameState>(uVar9);
            if (((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x5a0), lVar6 != 0)) && (uVar7 != 0)
               ) {
              plVar1 = *(longlong **)(param_2 + 0x310);
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x278))(plVar1,0);
              }
              FUN_142f44d10(lVar6,uVar7,0);
            }
          }
          if ((char)param_1[0x1a6] != '\x02') {
            FUN_140fb1130(param_1,param_2);
          }
        }
        else {
          FUN_140fde680(param_1,0);
          FUN_140fd61e0(param_1[300],0,0);
          plVar1 = param_1 + 0xee;
          uVar7 = FWeakObjectPtr::Get(plVar1);
          if (uVar7 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != (int)param_1[0xef]) && (local_300 = 0, param_1[0xf0] != 0)) {
              lVar6 = FUN_141796df0();
              FWeakObjectPtr::operator=(plVar1,lVar6);
              if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(param_1 + 0xef) = DAT_1464b56f4;
              }
              uVar7 = FWeakObjectPtr::Get(plVar1);
              if (uVar7 != 0) goto LAB_140fb7e4b;
            }
LAB_140fb7e83:
            uVar7 = uVar12;
          }
          else {
LAB_140fb7e4b:
            lVar6 = UMaterialInstanceDynamic::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar3 = false;
            }
            if (!bVar3) goto LAB_140fb7e83;
          }
          FUN_140fdd7a0(param_1[300],uVar7);
          *(undefined4 *)(param_1 + 0x19e) = 0xffffffff;
          *(undefined4 *)((longlong)param_1 + 0xcf4) = 0;
          param_1[0x1a0] = 0;
          local_300 = 0;
          *(undefined4 *)(param_1 + 0x1a2) = 0;
          if (0x7fffffff < *(uint *)((longlong)param_1 + 0xd14)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1a1,0);
          }
          if ((undefined2 *)param_1[0x1a1] != (undefined2 *)0x0) {
            *(undefined2 *)param_1[0x1a1] = 0;
          }
          *(undefined4 *)(param_1 + 0x19f) = 0;
          LOCK();
          *(undefined4 *)(param_1 + 0xb1) = 1;
          UNLOCK();
          lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
          if (lVar6 == 0) {
            *(undefined4 *)((longlong)param_1 + 0xd1c) = 0;
          }
          else {
            lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
            *(float *)((longlong)param_1 + 0xd1c) = *(float *)(lVar6 + 0x794) + 0.75;
          }
        }
        iVar5 = FUN_142eb7440(param_1[0x11c]);
        if (0 < iVar5) {
          do {
            lVar6 = FUN_142eb6a30(param_1[0x11c],uVar12);
            if (lVar6 != 0) {
              lVar10 = AReplicationGraphDebugActor::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if ((bVar3) && ((bool)*(char *)(lVar6 + 0x309) != (lVar6 == param_2))) {
                *(bool *)(lVar6 + 0x309) = lVar6 == param_2;
              }
            }
            uVar11 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar11;
            iVar5 = FUN_142eb7440(param_1[0x11c]);
          } while ((int)uVar11 < iVar5);
        }
        goto LAB_140fb8321;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x19e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcf4) = 0;
  param_1[0x1a0] = 0;
  local_308 = 0;
  *(undefined4 *)(param_1 + 0x1a2) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xd14)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1a1,0);
  }
  if ((undefined2 *)param_1[0x1a1] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x1a1] = 0;
  }
  *(undefined4 *)(param_1 + 0x19f) = 0;
  uVar9 = FUN_140f9f650(local_2b8);
  FUN_1412b1e40(param_1 + 0x14e,uVar9);
  FUN_140fa04a0(local_2b8);
  if ((param_1[300] != 0) && ((char)param_1[0x113] == '\0')) {
    FUN_140fafa40();
  }
LAB_140fb8321:
  LOCK();
  *(undefined4 *)(param_1 + 0xb1) = 1;
  UNLOCK();
  return;
}



// FUNCTION 140fb8350 FUN_140fb8350 body=308 status=ok
// SIG undefined FUN_140fb8350(void)

void FUN_140fb8350(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_38 [32];
  
  if (param_2 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = *(int *)(param_2 + 0x2d8);
  }
  if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x998))) {
    lVar2 = *(longlong *)(param_1 + 0x990);
    lVar1 = FUN_141083c60();
    if ((lVar1 != 0) &&
       (lVar2 = FUN_1412bf430(lVar1,*(undefined8 *)((longlong)iVar4 * 0x60 + 0x58 + lVar2)),
       lVar2 != 0)) {
      FUN_140fde680(param_1,lVar2);
      lVar2 = FWeakObjectPtr::Get(lVar2 + 0x18);
      *(longlong *)(param_1 + 0xd80) = lVar2;
      if (lVar2 == 0) {
        *(undefined4 *)(param_1 + 0xcf0) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xcf4) = 0;
        *(undefined8 *)(param_1 + 0xd00) = 0;
        *(undefined4 *)(param_1 + 0xd10) = 0;
        if ((*(int *)(param_1 + 0xd14) < 0) && (*(int *)(param_1 + 0xd14) != 0)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xd08,0);
        }
        if (*(undefined2 **)(param_1 + 0xd08) != (undefined2 *)0x0) {
          **(undefined2 **)(param_1 + 0xd08) = 0;
        }
        *(undefined4 *)(param_1 + 0xcf8) = 0;
      }
      else {
        uVar3 = FSoftObjectPath::FSoftObjectPath(local_38,lVar2);
        FSoftObjectPath::operator=(param_1 + 0xd00,uVar3);
        FWeakObjectPtr::operator=((undefined4 *)(param_1 + 0xcf0),lVar2);
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0xcf8) = DAT_1464b56f4;
      }
    }
  }
  FUN_140fb7cd0(param_1,param_2);
  return;
}



// FUNCTION 140fb8490 FUN_140fb8490 body=7 status=ok
// SIG undefined FUN_140fb8490(void)

void FUN_140fb8490(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x838) = param_2;
  return;
}



// FUNCTION 140fb84a0 FUN_140fb84a0 body=95 status=ok
// SIG undefined FUN_140fb84a0(void)

void FUN_140fb84a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    local_68 = (undefined4)param_2;
    uStack_64 = (undefined4)((ulonglong)param_2 >> 0x20);
    uStack_60 = (undefined4)param_1;
    uStack_5c = (undefined4)((ulonglong)param_1 >> 0x20);
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = local_68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_64;
    *(undefined4 *)(puVar1 + 2) = uStack_60;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_5c;
  }
  local_58[0] = &LAB_140faea00;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 140fb8500 FUN_140fb8500 body=1264 status=ok
// SIG undefined FUN_140fb8500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fb8500(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [12];
  int iVar11;
  undefined1 uVar12;
  bool bVar13;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined1 local_68 [16];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  bVar13 = false;
  bVar3 = false;
  local_138 = local_138 & 0xffffffff00000000;
  if (param_2 == 0) {
LAB_140fb857c:
    iVar11 = -1;
LAB_140fb8581:
    bVar2 = false;
  }
  else {
    lVar5 = FUN_141369c80();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140fb857c;
    iVar11 = *(int *)(param_2 + 0x308);
    if ((iVar11 < 0) || ((int)param_1[0x145] <= iVar11)) goto LAB_140fb8581;
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar5 = FUN_141083c60(param_1);
  if (lVar5 == 0) {
    return;
  }
  cVar4 = (char)param_1[0x14a];
  if (cVar4 != '\x03') {
    if (cVar4 != '\x02') {
      if (cVar4 != '\x01') {
        return;
      }
      pauVar10 = (undefined1 (*) [12])
                 FUN_1412bf240(lVar5,local_b8,(longlong)iVar11 * 0x10 + param_1[0x144]);
      local_58 = _DAT_146872f40 & _DAT_146872f50;
      uStack_54 = uRam0000000146872f44 & uRam0000000146872f54;
      uStack_50 = uRam0000000146872f48 & uRam0000000146872f58;
      uStack_4c = uRam0000000146872f4c & uRam0000000146872f5c;
      local_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = uRam0000000146872f4c;
      local_68._12_4_ = 0;
      local_68._0_12_ = *pauVar10;
      thunk_FUN_1414f8fb0(lVar5,&local_78);
      LOCK();
      *(undefined4 *)(param_1 + 0xb1) = 1;
      UNLOCK();
      return;
    }
    FString::FString(local_c8,*(longlong *)(param_1[0x144] + (longlong)iVar11 * 0x10) + 0x48);
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar7 = FUN_1412c3780(local_c8,uVar6);
    if (lVar7 == 0) {
      return;
    }
    plVar1 = param_1 + 0xee;
    lVar8 = FWeakObjectPtr::Get(plVar1);
    if (lVar8 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != (int)param_1[0xef]) && (local_138 = 0, param_1[0xf0] != 0)) {
        lVar8 = FUN_141796df0();
        FWeakObjectPtr::operator=(plVar1,lVar8);
        if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0xef) = DAT_1464b56f4;
        }
        lVar8 = FWeakObjectPtr::Get(plVar1);
        if (lVar8 != 0) goto LAB_140fb888a;
      }
    }
    else {
LAB_140fb888a:
      lVar9 = UMaterialInstanceDynamic::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      bVar13 = false;
      if (bVar3) {
        local_f0 = 0;
        local_f8 = 0;
        local_e8 = 0;
        local_108 = 0xffffffff;
        local_104 = 0;
        local_138 = 0;
        uVar6 = FSoftObjectPath::FSoftObjectPath(local_90,lVar7);
        FSoftObjectPath::operator=(&local_f8,uVar6);
        FWeakObjectPtr::operator=(&local_108,lVar7);
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_104 = CONCAT44(DAT_1464b56f4,(undefined4)local_104);
        bVar13 = true;
        cVar4 = FSoftObjectPath::operator==(&local_f8,param_1 + 0xf0);
        if (cVar4 != '\0') {
          uVar12 = 1;
          goto LAB_140fb8938;
        }
      }
    }
    uVar12 = 0;
LAB_140fb8938:
    if ((bVar13) && (local_f0 != 0)) {
      FMemory::Free();
    }
    FUN_1412be240(lVar5,lVar7,uVar12);
    LOCK();
    *(undefined4 *)(param_1 + 0xb1) = 1;
    UNLOCK();
    return;
  }
  FString::FString(local_d8,*(longlong *)(param_1[0x144] + (longlong)iVar11 * 0x10) + 0x48);
  uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar7 = FUN_1412c3780(local_d8,uVar6);
  if (lVar7 == 0) {
    return;
  }
  local_e0 = FUN_14129f920(lVar7);
  if (local_e0 == 0) {
    return;
  }
  plVar1 = param_1 + 0xee;
  lVar8 = FWeakObjectPtr::Get(plVar1);
  bVar13 = true;
  if (lVar8 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0xef]) && (local_138 = 0, param_1[0xf0] != 0)) {
      lVar8 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar1,lVar8);
      if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0xef) = DAT_1464b56f4;
      }
      lVar8 = FWeakObjectPtr::Get(plVar1);
      if (lVar8 != 0) goto LAB_140fb86ae;
    }
  }
  else {
LAB_140fb86ae:
    lVar9 = UMaterialInstanceDynamic::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar13 = false;
    }
    bVar3 = false;
    if (bVar13) {
      local_118 = 0;
      local_120 = 0;
      local_110 = 0;
      local_130 = 0xffffffff;
      local_12c = 0;
      local_138 = 0;
      uVar6 = FSoftObjectPath::FSoftObjectPath(local_a8,lVar7);
      FSoftObjectPath::operator=(&local_120,uVar6);
      FWeakObjectPtr::operator=(&local_130,lVar7);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_12c = CONCAT44(DAT_1464b56f4,(undefined4)local_12c);
      bVar13 = true;
      cVar4 = FSoftObjectPath::operator==(&local_120,param_1 + 0xf0);
      bVar3 = true;
      if (cVar4 != '\0') {
        uVar12 = 1;
        goto LAB_140fb875e;
      }
    }
  }
  bVar13 = bVar3;
  uVar12 = 0;
LAB_140fb875e:
  if ((bVar13) && (local_118 != 0)) {
    FMemory::Free();
  }
  FUN_1412be2d0(lVar5,local_e0,uVar12);
  LOCK();
  *(undefined4 *)(param_1 + 0xb1) = 1;
  UNLOCK();
  return;
}



// FUNCTION 140fb89f0 FUN_140fb89f0 body=541 status=ok
// SIG undefined FUN_140fb89f0(void)

void FUN_140fb89f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  wchar_t *_Str;
  longlong local_res18;
  longlong local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  undefined1 local_28 [24];
  undefined4 local_10;
  undefined2 local_c;
  
  local_res18 = param_3;
  plVar3 = (longlong *)FName::FName(local_98,&DAT_144632970,1);
  if (local_res18 == *plVar3) {
    return;
  }
  puVar4 = (undefined8 *)FName::ToString(&local_res18,local_98);
  if (*(int *)(puVar4 + 1) == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*puVar4;
  }
  iVar2 = _wtoi(_Str);
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  if ((iVar2 < 0) || (*(int *)(param_1 + 0x958) <= iVar2)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar5 = FUN_140f9aee0(param_1);
  if (lVar5 == 0) {
    return;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 2;
  FText::FText(local_70);
  FText::FText(local_58);
  FText::FText(local_40);
  FText::FText(local_28);
  lVar8 = 0;
  local_10 = 0;
  local_c = 0;
  FUN_1411f4300(&local_88,lVar5,(longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x950));
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar5 != 0) {
    lVar6 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
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
      uVar7 = FUN_142f30760();
      plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar7);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      goto LAB_140fb8b7d;
    }
  }
  lVar5 = 0;
LAB_140fb8b7d:
  if ((((lVar5 != 0) && (*(longlong *)(param_1 + 0x940) != 0)) && (lVar8 != 0)) &&
     (lVar5 = FUN_142f02280(lVar8), lVar5 != 0)) {
    lVar8 = AInteractiveFoliageActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1411f3640(lVar5,&local_88);
    }
  }
  FUN_140fa0310(&local_88);
  return;
}



// FUNCTION 140fb8c10 FUN_140fb8c10 body=553 status=ok
// SIG undefined FUN_140fb8c10(void)

void FUN_140fb8c10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong local_58;
  longlong *local_50;
  longlong *local_40;
  undefined **local_38;
  longlong local_30;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*(longlong *)(param_1 + 0x910) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xa50) != '\x01') {
    return;
  }
  lVar7 = FUN_140fb1770();
  if (lVar7 == 0) {
    return;
  }
  lVar8 = (**(code **)(**(longlong **)(param_1 + 0x910) + 0x2b0))();
  if (lVar8 != 0) {
    lVar9 = FUN_141369c80();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140fb8cad;
  }
  lVar8 = 0;
LAB_140fb8cad:
  cVar6 = FWeakObjectPtr::IsValid();
  if ((cVar6 != '\0') && (lVar8 != 0)) {
    iVar4 = *(int *)(lVar8 + 0x308);
    if ((iVar4 < 0) || (*(int *)(param_1 + 0xa28) <= iVar4)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa20) + (longlong)iVar4 * 0x10);
      local_40 = *(longlong **)(lVar8 + 0x18);
      lVar8 = *(longlong *)(lVar8 + 0x10);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      uVar10 = FWeakObjectPtr::Get(param_1 + 0x58c);
      FUN_142dcf3a0(uVar10,&local_58);
      if ((lVar8 != 0) && (local_58 != 0)) {
        local_30 = local_58;
        local_28 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        local_20 = 0;
        local_38 = &PTR_FUN_143f740c8;
        local_18 = 0;
        FUN_140d96df0(lVar7,&local_38,
                      *(longlong *)(*(longlong *)(param_1 + 0xa20) + (longlong)iVar4 * 0x10) + 8);
        FUN_1404bf980(&local_38);
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      plVar1 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140fb8e50 FUN_140fb8e50 body=1201 status=ok
// SIG undefined FUN_140fb8e50(void)

void FUN_140fb8e50(longlong param_1)

{
  int iVar1;
  int *piVar2;
  wchar_t *pwVar3;
  char cVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  undefined4 *puVar14;
  int *piVar15;
  bool bVar16;
  undefined8 local_res10;
  ulonglong local_res18;
  undefined1 local_res20 [8];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  wchar_t *local_a0;
  code *local_98;
  ulonglong uStack_90;
  longlong *local_88;
  longlong *local_78;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  
  FUN_14108b1e0();
  pwVar5 = (wchar_t *)FWeakObjectPtr::Get(param_1 + 0x58c);
  pwVar13 = (wchar_t *)0x0;
  if (pwVar5 != (wchar_t *)0x0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(pwVar5 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar5 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if (bVar16) goto LAB_140fb8ebc;
  }
  pwVar5 = pwVar13;
LAB_140fb8ebc:
  *(wchar_t **)(param_1 + 0x860) = pwVar5;
  if (pwVar5 != (wchar_t *)0x0) {
    uVar7 = (**(code **)(*(longlong *)pwVar5 + 0x148))(pwVar5);
    lVar6 = FUN_140c12480(uVar7);
    if ((lVar6 != 0) && (lVar6 = UNiagaraSystem::GetEffectType(lVar6), lVar6 != 0)) {
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      local_b8 = FUN_140fb5d80;
      plVar11 = (longlong *)(lVar6 + 0x80);
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      local_88 = plVar8;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_FUN_144060be0;
        FWeakObjectPtr::operator=(plVar8 + 1,param_1);
        *(int *)(plVar8 + 2) = (int)local_b8;
        *(int *)((longlong)plVar8 + 0x14) = local_b8._4_4_;
        *(undefined4 *)(plVar8 + 3) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_b0._4_4_;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar8[5] = lVar9;
        *plVar8 = (longlong)&PTR_FUN_144060c28;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
        (**(code **)(*plVar8 + 0x20))(plVar8,local_res20);
        iVar1 = *(int *)(lVar6 + 0x88);
        *(int *)(lVar6 + 0x88) = iVar1 + 1;
        if (*(int *)(lVar6 + 0x8c) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
        }
        puVar10 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar11);
        *puVar10 = plVar8;
        *(undefined4 *)(puVar10 + 1) = 3;
      }
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      local_b8 = FUN_140fb5df0;
      plVar11 = (longlong *)FMemory::Realloc(0,0x30);
      local_78 = plVar11;
      if (plVar11 != (longlong *)0x0) {
        *plVar11 = (longlong)&PTR_FUN_144213ea0;
        FWeakObjectPtr::operator=(plVar11 + 1,param_1);
        *(int *)(plVar11 + 2) = (int)local_b8;
        *(int *)((longlong)plVar11 + 0x14) = local_b8._4_4_;
        *(undefined4 *)(plVar11 + 3) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_b0._4_4_;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar11[5] = lVar9;
        *plVar11 = (longlong)&PTR_FUN_144213ee8;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar6 + 0x68,1);
        (**(code **)(*plVar11 + 0x20))(plVar11,local_c8);
        iVar1 = *(int *)(lVar6 + 0x70);
        *(int *)(lVar6 + 0x70) = iVar1 + 1;
        if (*(int *)(lVar6 + 0x74) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar6 + 0x68,iVar1);
        }
        puVar10 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar6 + 0x68));
        *puVar10 = plVar11;
        *(undefined4 *)(puVar10 + 1) = 3;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x918) != 0) {
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    local_b8 = FUN_140fc14c0;
    local_98 = FUN_140fc14c0;
    uStack_90 = uStack_b0;
    pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxMissionLogMenu::OnMissionSelectionChanged",L"::")
    ;
    pwVar5 = pwVar13;
    while (pwVar3 = pwVar12, pwVar3 != (wchar_t *)0x0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar5 = pwVar3;
    }
    FName::FName(&local_res10,pwVar5 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x918) + 0x180,param_1,&local_98,local_res10);
    pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxMissionLogMenu::OnMissionListItemClicked",L"::");
    pwVar5 = pwVar13;
    while (pwVar3 = pwVar12, pwVar3 != (wchar_t *)0x0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar5 = pwVar3;
    }
    FName::FName(&local_res18,pwVar5 + 2,1);
    lVar6 = *(longlong *)(param_1 + 0x918);
    plVar11 = (longlong *)(lVar6 + 0x1a8);
    FWeakObjectPtr::operator=(&local_b8,0);
    uStack_b0 = 0;
    FWeakObjectPtr::operator=(&local_b8,param_1);
    uStack_b0 = local_res18;
    if ((local_res18 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_b8), lVar9 != 0)) {
      UObject::FindFunction(lVar9,uStack_b0);
    }
    piVar2 = (int *)*plVar11;
    iVar1 = *(int *)(lVar6 + 0x1b0);
    for (piVar15 = piVar2; piVar15 != piVar2 + (longlong)iVar1 * 4; piVar15 = piVar15 + 4) {
      if (((*piVar15 == (int)local_b8) &&
          (local_b8._4_4_ = (int)((ulonglong)local_b8 >> 0x20),
          bVar16 = piVar15[1] == local_b8._4_4_, bVar16)) ||
         ((cVar4 = FWeakObjectPtr::IsValid(piVar15), cVar4 == '\0' &&
          (cVar4 = FWeakObjectPtr::IsValid(&local_b8), cVar4 == '\0')))) {
        bVar16 = true;
      }
      else {
        bVar16 = false;
      }
      if ((bVar16) && (*(ulonglong *)(piVar15 + 2) == uStack_b0)) {
        bVar16 = true;
      }
      else {
        bVar16 = false;
      }
      if (bVar16) {
        if ((int)((longlong)piVar15 - (longlong)piVar2 >> 4) != -1) goto LAB_140fb923c;
        break;
      }
    }
    iVar1 = *(int *)(lVar6 + 0x1b0);
    *(int *)(lVar6 + 0x1b0) = iVar1 + 1;
    if (*(int *)(lVar6 + 0x1b4) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
    }
    puVar14 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar11);
    *puVar14 = (int)local_b8;
    puVar14[1] = local_b8._4_4_;
    *(ulonglong *)(puVar14 + 2) = uStack_b0;
LAB_140fb923c:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar11);
    FWeakObjectPtr::operator=(local_68,0);
    FWeakObjectPtr::operator=(local_60,0);
    FWeakObjectPtr::operator=(local_58,0);
    FWeakObjectPtr::operator=(local_50,0);
    lVar6 = *(longlong *)(param_1 + 0x918);
    local_a8 = lVar6;
    if (lVar6 != 0) {
      uVar7 = UBlendableInterface::GetPrivateStaticClass();
      pwVar13 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
    }
    local_a0 = pwVar13;
    FUN_142ecfd10(param_1,&local_a8,local_68);
    *(undefined1 *)(*(longlong *)(param_1 + 0x918) + 0x242) = 1;
    *(undefined8 *)(*(longlong *)(param_1 + 0x918) + 0x244) = *(undefined8 *)(param_1 + 0x6f8);
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x998) = 1;
  UNLOCK();
  FUN_142ecd4d0(param_1);
  return;
}



// FUNCTION 140fb9310 FUN_140fb9310 body=23 status=ok
// SIG undefined FUN_140fb9310(void)

void FUN_140fb9310(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x690) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140fb931f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x690) + 0x278))();
    return;
  }
  return;
}



// FUNCTION 140fb9330 FUN_140fb9330 body=282 status=ok
// SIG undefined FUN_140fb9330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fb9330(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x580))(param_1,0);
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = FUN_140fae9c0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fb9450 FUN_140fb9450 body=4981 status=ok
// SIG undefined FUN_140fb9450(void)

void FUN_140fb9450(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  byte bVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  longlong *local_3c8;
  undefined8 local_3c0;
  longlong *local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  undefined8 local_390;
  longlong *local_388;
  undefined8 local_380;
  longlong *local_378;
  undefined8 local_370;
  longlong *local_368;
  undefined8 local_360;
  longlong local_358;
  undefined8 local_350;
  longlong *local_348;
  undefined8 local_340;
  longlong local_338;
  undefined8 local_330;
  longlong *local_328;
  undefined8 local_320;
  longlong local_318;
  undefined8 local_310;
  longlong *local_308;
  undefined8 local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  longlong *local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined8 local_290;
  longlong *local_288;
  undefined8 local_280;
  longlong local_278;
  undefined8 local_270;
  longlong *local_268;
  undefined8 local_260;
  longlong local_258;
  undefined8 local_250;
  longlong *local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  longlong *local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  longlong local_208 [2];
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8 [2];
  longlong local_e8 [2];
  longlong local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  
  uVar6 = 0;
  FUN_142ef9e70();
  local_338 = 0;
  local_330 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_338,0);
  FGenericPlatformString::Memcpy(local_338,L"contentPanel",0x1a);
  local_348 = (longlong *)0x0;
  local_340 = 0;
  lVar2 = FUN_140ecbdf0(param_1,&local_338,0,6,&local_348);
  param_1[0x2e] = lVar2;
  plVar12 = local_348;
  for (iVar7 = (int)local_340; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_348 != (longlong *)0x0) {
    FMemory::Free(local_348);
  }
  if (local_338 != 0) {
    FMemory::Free();
  }
  local_318 = 0;
  local_310 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318,0);
  FGenericPlatformString::Memcpy(local_318,L"fastTravelPreview",0x24);
  local_328 = (longlong *)0x0;
  local_320 = 0;
  lVar2 = FUN_140ecbdf0(param_1,&local_318,0,6,&local_328);
  param_1[0x2f] = lVar2;
  plVar12 = local_328;
  for (iVar7 = (int)local_320; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_328 != (longlong *)0x0) {
    FMemory::Free(local_328);
  }
  if (local_318 != 0) {
    FMemory::Free();
  }
  if (param_1[0x2e] != 0) {
    local_2f8 = 0;
    local_2f0 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f8,0);
    FGenericPlatformString::Memcpy(local_2f8,L"headerText",0x16);
    local_308 = (longlong *)0x0;
    local_300 = 0;
    lVar2 = FUN_140ecc7d0(param_1[0x2e],&local_2f8,0,6,&local_308);
    param_1[0x30] = lVar2;
    plVar12 = local_308;
    for (iVar7 = (int)local_300; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_308 != (longlong *)0x0) {
      FMemory::Free(local_308);
    }
    if (local_2f8 != 0) {
      FMemory::Free();
    }
    local_2d8 = 0;
    local_2d0 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d8,0);
    FGenericPlatformString::Memcpy(local_2d8,L"subHeaderText",0x1c);
    local_3c8 = (longlong *)0x0;
    local_3c0 = 0;
    local_70 = 0;
    lVar2 = FUN_140ecc7d0(param_1[0x2e],&local_2d8,0,6,&local_3c8);
    param_1[0x31] = lVar2;
    plVar12 = local_3c8;
    for (iVar7 = (int)local_3c0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_3c8 != (longlong *)0x0) {
      FMemory::Free(local_3c8);
    }
    if (local_2d8 != 0) {
      FMemory::Free();
    }
    local_2b8 = 0;
    local_2b0 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,0);
    FGenericPlatformString::Memcpy(local_2b8,L"descriptionText",0x20);
    local_2c8 = (longlong *)0x0;
    local_2c0 = 0;
    local_a8 = 0;
    lVar2 = FUN_140ecc7d0(param_1[0x2e],&local_2b8,0,6,&local_2c8);
    param_1[0x32] = lVar2;
    plVar12 = local_2c8;
    for (iVar7 = (int)local_2c0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_2c8 != (longlong *)0x0) {
      FMemory::Free(local_2c8);
    }
    if (local_2b8 != 0) {
      FMemory::Free();
    }
    local_298 = 0;
    local_290 = 0x1f;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
    FGenericPlatformString::Memcpy(local_298,L"generalIconWrapper.generalIcon",0x3e);
    local_2a8 = (longlong *)0x0;
    local_2a0 = 0;
    local_a0 = 0;
    lVar2 = FUN_140ecbdf0(param_1[0x2e],&local_298,0,6,&local_2a8);
    param_1[0x33] = lVar2;
    plVar12 = local_2a8;
    for (iVar7 = (int)local_2a0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_2a8 != (longlong *)0x0) {
      FMemory::Free(local_2a8);
    }
    if (local_298 != 0) {
      FMemory::Free();
    }
    local_278 = 0;
    local_270 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,0);
    FGenericPlatformString::Memcpy(local_278,L"dlcIconWrapper",0x1e);
    local_288 = (longlong *)0x0;
    local_280 = 0;
    local_98 = 0;
    lVar2 = FUN_140ecbdf0(param_1[0x2e],&local_278,0,6,&local_288);
    param_1[0x34] = lVar2;
    plVar12 = local_288;
    for (iVar7 = (int)local_280; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_288 != (longlong *)0x0) {
      FMemory::Free(local_288);
    }
    if (local_278 != 0) {
      FMemory::Free();
    }
    local_258 = 0;
    local_250 = 0x17;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
    FGenericPlatformString::Memcpy(local_258,L"DetailsBackgroundPanel",0x2e);
    local_268 = (longlong *)0x0;
    local_260 = 0;
    local_90 = 0;
    lVar2 = FUN_140ecbdf0(param_1[0x2e],&local_258,0,6,&local_268);
    param_1[0x35] = lVar2;
    plVar12 = local_268;
    for (iVar7 = (int)local_260; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_268 != (longlong *)0x0) {
      FMemory::Free(local_268);
    }
    if (local_258 != 0) {
      FMemory::Free();
    }
    if (param_1[0x35] != 0) {
      local_238 = 0;
      local_230 = 0x18;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,0);
      FGenericPlatformString::Memcpy(local_238,L"detailsPanelHintWrapper",0x30);
      local_248 = (longlong *)0x0;
      local_240 = 0;
      local_88 = 0;
      lVar2 = FUN_140ecba50(param_1[0x35],&local_238,0,6,&local_248);
      param_1[0x36] = lVar2;
      plVar12 = local_248;
      for (iVar7 = (int)local_240; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
      if (local_248 != (longlong *)0x0) {
        FMemory::Free(local_248);
      }
      if (local_238 != 0) {
        FMemory::Free();
      }
      local_218 = 0;
      local_210 = 0x22;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
      FGenericPlatformString::Memcpy(local_218,L"detailsPanelHintWrapper.panelHint",0x44);
      local_228 = (longlong *)0x0;
      local_220 = 0;
      local_80 = 0;
      lVar2 = FUN_140ecba50(param_1[0x35],&local_218,0,6,&local_228);
      param_1[0x37] = lVar2;
      plVar12 = local_228;
      for (iVar7 = (int)local_220; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
      if (local_228 != (longlong *)0x0) {
        FMemory::Free(local_228);
      }
      if (local_218 != 0) {
        FMemory::Free();
      }
      if ((param_1[0x37] != 0) && (param_1[0x36] != 0)) {
        local_358 = 0;
        local_350 = 4;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,0);
        FGenericPlatformString::Memcpy(local_358,&DAT_1446407f8,8);
        FUN_142088cf0(param_1[0x36],&local_358);
        if (local_358 != 0) {
          FMemory::Free();
        }
        *(undefined1 *)((longlong)param_1 + 0x2a2) = 0;
        local_138 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_130 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = 0;
        uStack_100 = 0;
        uVar3 = FUN_1404b03b0();
        FText::FText(&local_128,uVar3);
        uStack_110 = uStack_110 & 0xffffffffffffff00;
        plVar12 = param_1 + 0x55;
        local_108 = 0;
        uStack_100 = CONCAT62(uStack_100._2_6_,1);
        if (plVar12 != &local_138) {
          if (*plVar12 != 0) {
            FMemory::Free();
          }
          *plVar12 = local_138;
          *(undefined4 *)(param_1 + 0x56) = (undefined4)local_130;
          *(undefined4 *)((longlong)param_1 + 0x2b4) = local_130._4_4_;
          local_130 = 0;
          local_138 = 0;
        }
        FText::operator=(param_1 + 0x57,&local_128);
        *(undefined1 *)(param_1 + 0x5a) = (undefined1)uStack_110;
        param_1[0x5b] = local_108;
        *(undefined1 *)(param_1 + 0x5c) = (undefined1)uStack_100;
        *(undefined1 *)((longlong)param_1 + 0x2e1) = uStack_100._1_1_;
        UE4Tuple_Private::
        TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
        ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                  (&local_138);
        *(undefined1 *)(param_1 + 0x5a) = 1;
        iVar7 = (int)param_1[0x56];
        *(int *)(param_1 + 0x56) = iVar7 + 1;
        if (*(int *)((longlong)param_1 + 0x2b4) < iVar7 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar12,iVar7);
        }
        *(undefined8 *)(*plVar12 + (longlong)iVar7 * 8) = DAT_146b3e2a0;
      }
    }
    local_1e8 = 0;
    local_1e0 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
    FGenericPlatformString::Memcpy(local_1e8,L"rewardsHeader",0x1c);
    local_1f8 = (longlong *)0x0;
    local_1f0 = 0;
    local_78 = 0;
    lVar2 = FUN_140ecc7d0(param_1[0x2e],&local_1e8,0,6,&local_1f8);
    param_1[0x38] = lVar2;
    plVar12 = local_1f8;
    for (iVar7 = (int)local_1f0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_1f8 != (longlong *)0x0) {
      FMemory::Free(local_1f8);
    }
    if (local_1e8 != 0) {
      FMemory::Free();
    }
    iVar7 = 1;
    uVar4 = uVar6;
    if ((longlong *)param_1[0x38] != (longlong *)0x0) {
      lVar2 = *(longlong *)param_1[0x38];
      uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_68,L"Rewards: ",L"GFxMapMenu",L"RewardsLabel");
      (**(code **)(lVar2 + 0x2b0))(param_1[0x38],uVar3,1,0);
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_60 + 1;
        lVar2 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
    while( true ) {
      local_1d8 = (longlong *)0x0;
      local_1d0 = 0;
      FString::PrintfImpl(local_f8,L"rewardEntry%i.challengeRewardText",uVar4);
      lVar2 = FUN_140ecc7d0(param_1[0x2e],local_f8,0,6,&local_1d8);
      if (local_f8[0] != 0) {
        FMemory::Free();
      }
      plVar12 = local_1d8;
      for (iVar8 = (int)local_1d0; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
      if (local_1d8 != (longlong *)0x0) {
        FMemory::Free(local_1d8);
      }
      uVar11 = uVar6;
      if (lVar2 == 0) break;
      iVar8 = (int)param_1[0x3a];
      *(int *)(param_1 + 0x3a) = iVar8 + 1;
      if (*(int *)((longlong)param_1 + 0x1d4) < iVar8 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x39,iVar8);
      }
      *(longlong *)(param_1[0x39] + (longlong)iVar8 * 8) = lVar2;
      uVar4 = (ulonglong)((int)uVar4 + 1);
    }
    while( true ) {
      local_1c8 = (longlong *)0x0;
      local_1c0 = 0;
      FString::PrintfImpl(local_e8,L"rewardEntry%i.rewardSymbol",uVar11);
      lVar2 = FUN_140ecc7d0(param_1[0x2e],local_e8,0,6,&local_1c8);
      if (local_e8[0] != 0) {
        FMemory::Free();
      }
      plVar12 = local_1c8;
      for (iVar8 = (int)local_1c0; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
      if (local_1c8 != (longlong *)0x0) {
        FMemory::Free(local_1c8);
      }
      if (lVar2 == 0) break;
      iVar8 = (int)param_1[0x3c];
      *(int *)(param_1 + 0x3c) = iVar8 + 1;
      if (*(int *)((longlong)param_1 + 0x1e4) < iVar8 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x3b,iVar8);
      }
      *(longlong *)(param_1[0x3b] + (longlong)iVar8 * 8) = lVar2;
      uVar11 = (ulonglong)((int)uVar11 + 1);
    }
    local_1a8 = 0;
    local_1a0 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
    FGenericPlatformString::Memcpy(local_1a8,L"rewardItemType",0x1e);
    local_1b8 = (longlong *)0x0;
    local_1b0 = 0;
    lVar2 = FUN_140ecbdf0(param_1[0x2e],&local_1a8,0,6,&local_1b8);
    param_1[0x3d] = lVar2;
    plVar12 = local_1b8;
    for (iVar8 = (int)local_1b0; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_1b8 != (longlong *)0x0) {
      FMemory::Free(local_1b8);
    }
    if (local_1a8 != 0) {
      FMemory::Free();
    }
    if (param_1[0x3d] != 0) {
      local_188 = 0;
      local_180 = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
      FGenericPlatformString::Memcpy(local_188,L"itemTypeContainer",0x24);
      local_198 = (longlong *)0x0;
      local_190 = 0;
      lVar2 = FUN_140ecbdf0(param_1[0x3d],&local_188,0,6,&local_198);
      param_1[0x3e] = lVar2;
      plVar12 = local_198;
      for (iVar8 = (int)local_190; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
      if (local_198 != (longlong *)0x0) {
        FMemory::Free(local_198);
      }
      if (local_188 != 0) {
        FMemory::Free();
      }
      uVar4 = uVar6;
      uVar11 = uVar6;
      if (param_1[0x3e] != 0) {
        local_168 = 0;
        local_160 = 0xe;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
        FGenericPlatformString::Memcpy(local_168,L"weaponIconArt",0x1c);
        local_178 = (longlong *)0x0;
        local_170 = 0;
        uVar4 = FUN_140ecbdf0(param_1[0x3e],&local_168,0,6,&local_178);
        uVar11 = 3;
      }
      param_1[0x3f] = uVar4;
      bVar10 = (byte)uVar11;
      if ((uVar11 & 2) != 0) {
        bVar10 = bVar10 & 0xfd;
        plVar12 = local_178;
        for (iVar8 = (int)local_170; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (*plVar12 != 0) {
            FMemory::Free();
          }
          plVar12 = plVar12 + 2;
        }
        if (local_178 != (longlong *)0x0) {
          FMemory::Free(local_178);
        }
      }
      if (((bVar10 & 1) != 0) && (local_168 != 0)) {
        FMemory::Free();
      }
    }
    local_148 = 0;
    local_140 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    FGenericPlatformString::Memcpy(local_148,L"rewardBackground",0x22);
    local_158 = (longlong *)0x0;
    local_150 = 0;
    lVar2 = FUN_140ecbdf0(param_1[0x2e],&local_148,0,6,&local_158);
    param_1[0x40] = lVar2;
    plVar12 = local_158;
    for (iVar8 = (int)local_150; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_158 != (longlong *)0x0) {
      FMemory::Free(local_158);
    }
    if (local_148 != 0) {
      FMemory::Free();
    }
    local_3a8 = 0;
    local_3a0 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3a8,0);
    FGenericPlatformString::Memcpy(local_3a8,L"missionTypeIcon",0x20);
    local_3b8 = (longlong *)0x0;
    local_3b0 = 0;
    lVar2 = FUN_140ecbdf0(param_1[0x2e],&local_3a8,0,6,&local_3b8);
    param_1[0x41] = lVar2;
    plVar12 = local_3b8;
    for (iVar8 = (int)local_3b0; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_3b8 != (longlong *)0x0) {
      FMemory::Free(local_3b8);
    }
    uVar4 = uVar6;
    if (local_3a8 != 0) {
      FMemory::Free();
    }
    while( true ) {
      local_398 = (longlong *)0x0;
      local_390 = 0;
      FString::PrintfImpl(local_d8,L"objectiveListMC.entry%i",uVar4);
      lVar2 = FUN_140ecc7d0(param_1[0x2e],local_d8,0,6,&local_398);
      if (local_d8[0] != 0) {
        FMemory::Free();
      }
      plVar12 = local_398;
      for (iVar8 = (int)local_390; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
      if (local_398 != (longlong *)0x0) {
        FMemory::Free(local_398);
      }
      if (lVar2 == 0) break;
      iVar8 = (int)param_1[0x43];
      *(int *)(param_1 + 0x43) = iVar8 + 1;
      if (*(int *)((longlong)param_1 + 0x21c) < iVar8 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x42,iVar8);
      }
      *(longlong *)(param_1[0x42] + (longlong)iVar8 * 8) = lVar2;
      uVar4 = (ulonglong)((int)uVar4 + 1);
    }
    plVar12 = param_1 + 0x45;
    do {
      local_388 = (longlong *)0x0;
      local_380 = 0;
      FString::PrintfImpl(local_c8,L"mayhemModList.entry%i",uVar6);
      lVar2 = FUN_140ecc7d0(param_1[0x2e],local_c8,0,6,&local_388);
      *plVar12 = lVar2;
      if (local_c8[0] != 0) {
        FMemory::Free();
      }
      plVar9 = local_388;
      for (iVar8 = (int)local_380; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_388 != (longlong *)0x0) {
        FMemory::Free(local_388);
      }
      plVar9 = (longlong *)*plVar12;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x278))(plVar9,0);
      }
      uVar13 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar13;
      plVar12 = plVar12 + 1;
    } while ((int)uVar13 < 5);
    plVar12 = param_1 + 0x4a;
    lVar2 = 6;
    do {
      local_378 = (longlong *)0x0;
      local_370 = 0;
      FString::PrintfImpl(local_b8,L"mayhemModAllStats.mayhemStat%i.textfield",iVar7);
      lVar5 = FUN_140ecc7d0(param_1[0x2e],local_b8,0,6,&local_378);
      *plVar12 = lVar5;
      if (local_b8[0] != 0) {
        FMemory::Free();
      }
      plVar9 = local_378;
      for (iVar8 = (int)local_370; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_378 != (longlong *)0x0) {
        FMemory::Free(local_378);
      }
      iVar7 = iVar7 + 1;
      plVar12 = plVar12 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    local_2e8 = 0;
    local_2e0 = 0x1e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e8,0);
    FGenericPlatformString::Memcpy(local_2e8,L"mayhemModeLevelText.textField",0x3c);
    local_368 = (longlong *)0x0;
    local_360 = 0;
    lVar2 = FUN_140ecc7d0(param_1[0x2e],&local_2e8,0,6,&local_368);
    param_1[0x50] = lVar2;
    plVar12 = local_368;
    for (iVar7 = (int)local_360; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_368 != (longlong *)0x0) {
      FMemory::Free(local_368);
    }
    if (local_2e8 != 0) {
      FMemory::Free();
    }
  }
  (**(code **)(*param_1 + 0x278))(param_1,1);
  (**(code **)(*param_1 + 0x278))(param_1,0);
  *(undefined1 *)((longlong)param_1 + 0x2a1) = 1;
  local_208[0] = 0;
  local_208[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_208,0);
  FGenericPlatformString::Memcpy(local_208[0],&DAT_144640b60,0x14);
  FUN_142088cf0(param_1,local_208);
  if (local_208[0] != 0) {
    FMemory::Free();
  }
  FUN_140fafa40(param_1);
  return;
}



// FUNCTION 140fba7d0 FUN_140fba7d0 body=264 status=ok
// SIG undefined FUN_140fba7d0(void)

void FUN_140fba7d0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ef9e70();
  local_10 = 0x12;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"progressFill.fill",0x24);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc430(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  plVar2 = local_28;
  for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  FUN_14208d2d0(param_1,param_1 + 0x178,L"progressFill");
  *(undefined1 *)(param_1 + 0x188) = 0;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_142056670(*(longlong *)(param_1 + 0x178),1);
    FUN_142056670(*(undefined8 *)(param_1 + 0x178),0);
  }
  return;
}



// FUNCTION 140fba8e0 FUN_140fba8e0 body=839 status=ok
// SIG undefined FUN_140fba8e0(void)

void FUN_140fba8e0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ec5080();
  local_10 = 0xd;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"newIndicator",0x1a);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x310) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"friendInfo",0x16);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 800) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"friendCount",0x18);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x328) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"currentLocation",0x20);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x318) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"missionIndicator",0x22);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x330) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0x338) = 1;
  FUN_142ecf920(param_1,0);
  return;
}



// FUNCTION 140fbac30 FUN_140fbac30 body=745 status=ok
// SIG undefined FUN_140fbac30(void)

void FUN_140fbac30(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  FUN_142ec5080();
  local_90 = 0xb;
  local_98 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"playerName",0x16);
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  uVar3 = FUN_140ecc7d0(param_1,&local_98,0,6,&local_a8);
  *(undefined8 *)(param_1 + 0x310) = uVar3;
  plVar7 = local_a8;
  for (iVar6 = (int)local_a0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  local_78 = 0;
  local_70 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"playerInfo",0x16);
  local_88 = (longlong *)0x0;
  local_80 = 0;
  uVar3 = FUN_140ecc7d0(param_1,&local_78,0,6,&local_88);
  *(undefined8 *)(param_1 + 0x318) = uVar3;
  plVar7 = local_88;
  for (iVar6 = (int)local_80; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  local_58 = 0;
  local_50 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"playerIcon",0x16);
  local_68 = (longlong *)0x0;
  local_60 = 0;
  uVar3 = FUN_140ecbdf0(param_1,&local_58,0,6,&local_68);
  *(undefined8 *)(param_1 + 800) = uVar3;
  plVar7 = local_68;
  for (iVar6 = (int)local_60; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  puVar4 = (undefined8 *)FUN_142085870(param_1,local_38,L"systemIcons");
  *(undefined8 *)(param_1 + 0x328) = *puVar4;
  plVar7 = (longlong *)puVar4[1];
  plVar5 = *(longlong **)(param_1 + 0x330);
  if (plVar7 != plVar5) {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(param_1 + 0x330);
    }
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
    *(longlong **)(param_1 + 0x330) = plVar7;
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  local_48[0] = 0;
  local_48[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"friendCount",0x18);
  uVar3 = FUN_1404b03b0();
  FUN_142f100e0(param_1,local_48,uVar3);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fbaf20 FUN_140fbaf20 body=581 status=ok
// SIG undefined FUN_140fbaf20(void)

void FUN_140fbaf20(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xf;
  iVar5 = 0;
  local_28 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"progressHeader",0x1e);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_38);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  plVar4 = local_38;
  for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"progressPercentage",0x26);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_38,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x178) = uVar1;
  plVar4 = local_28;
  for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  while( true ) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FString::PrintfImpl(&local_38,L"entry%i",iVar5);
    lVar2 = FUN_140ecbdf0(param_1,&local_38,0,6,&local_28);
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar4 = local_28;
    for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (lVar2 == 0) break;
    iVar3 = *(int *)(param_1 + 0x188);
    *(int *)(param_1 + 0x188) = iVar3 + 1;
    if (*(int *)(param_1 + 0x18c) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x180,iVar3);
    }
    iVar5 = iVar5 + 1;
    *(longlong *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar3 * 8) = lVar2;
  }
  *(undefined1 *)(param_1 + 400) = 0;
  FUN_140fb0f10(param_1);
  return;
}



// FUNCTION 140fbb170 FUN_140fbb170 body=815 status=ok
// SIG undefined FUN_140fbb170(void)

void FUN_140fbb170(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  local_10 = 0x11;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"locationNameText",0x22);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"locationIcon",0x1a);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x178) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"locationParentName",0x26);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x180) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"locationParentIcon",0x26);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x188) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"mapLayerIndicator",0x24);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 400) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fbb4a0 FUN_140fbb4a0 body=1442 status=ok
// SIG undefined FUN_140fbb4a0(void)

void FUN_140fbb4a0(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  
  FUN_142ec45d0();
  local_150 = 0x11;
  local_158 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
  FGenericPlatformString::Memcpy(local_158,L"matchMessageText",0x22);
  local_168 = (longlong *)0x0;
  local_160 = 0;
  local_res10 = 0;
  uVar4 = FUN_140ac4770(param_1,&local_158,0,6,&local_168);
  *(undefined8 *)(param_1 + 0x638) = uVar4;
  plVar6 = local_168;
  for (iVar8 = (int)local_160; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free(local_168);
  }
  if (local_158 != 0) {
    FMemory::Free();
  }
  local_138 = 0;
  local_130 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"matchmakingWidget",0x24);
  local_148 = (longlong *)0x0;
  local_140 = 0;
  local_res18 = 0;
  uVar4 = FUN_140e96f30(param_1,&local_138,0,6,&local_148);
  *(undefined8 *)(param_1 + 0x630) = uVar4;
  plVar6 = local_148;
  for (iVar8 = (int)local_140; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_148 != (longlong *)0x0) {
    FMemory::Free(local_148);
  }
  if (local_138 != 0) {
    FMemory::Free();
  }
  local_118 = 0;
  local_110 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"matchStateIcon",0x1e);
  local_128 = (longlong *)0x0;
  local_120 = 0;
  local_res20 = 0;
  uVar4 = FUN_140e96f30(param_1,&local_118,0,6,&local_128);
  *(undefined8 *)(param_1 + 0x648) = uVar4;
  plVar6 = local_128;
  for (iVar8 = (int)local_120; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_128 != (longlong *)0x0) {
    FMemory::Free(local_128);
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  local_f8 = 0;
  local_f0 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
  FGenericPlatformString::Memcpy(local_f8,L"matchTypeIcon",0x1c);
  local_108 = (longlong *)0x0;
  local_100 = 0;
  local_68 = 0;
  uVar4 = FUN_140e96f30(param_1,&local_f8,0,6,&local_108);
  *(undefined8 *)(param_1 + 0x640) = uVar4;
  plVar6 = local_108;
  for (iVar8 = (int)local_100; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  local_d8 = 0;
  local_d0 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"cancelHint",0x16);
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  local_60 = 0;
  uVar4 = FUN_140f139f0(param_1,&local_d8,0,6,&local_e8);
  *(undefined8 *)(param_1 + 0x5b0) = uVar4;
  plVar6 = local_e8;
  for (iVar8 = (int)local_e0; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  local_b8 = 0;
  local_b0 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,L"cancelText",0x16);
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  local_58 = 0;
  plVar5 = (longlong *)FUN_140ac4770(param_1,&local_b8,0,6,&local_c8);
  plVar6 = local_c8;
  for (iVar8 = (int)local_c0; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (plVar5 != (longlong *)0x0) {
    lVar7 = *plVar5;
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,L"Cancel",L"GFxMatchmakingHUDWidget",L"CancelMatchmakingText");
    (**(code **)(lVar7 + 0x2b0))(plVar5,uVar4,1,0);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_48 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x5b0) + 0x308);
    uVar4 = FUN_140e10600(param_1);
    (**(code **)(lVar7 + 0x10))(*(longlong *)(param_1 + 0x5b0) + 0x308,0,uVar4);
    local_a8 = 0;
    local_a0 = 0;
    uVar4 = FUN_1404b03b0();
    FText::FText(local_98,uVar4);
    local_78 = 0;
    local_70 = 1;
    local_80 = 1;
    FName::FName(&local_res8,L"OakPC_OpenStatusMenu",1);
    uVar2 = local_a0;
    lVar7 = (longlong)(int)local_a0;
    iVar8 = (int)local_a0 + 1;
    local_a0 = CONCAT44(local_a0._4_4_,iVar8);
    if (local_a0._4_4_ < iVar8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_a8,uVar2 & 0xffffffff);
    }
    *(undefined8 *)(local_a8 + lVar7 * 8) = local_res8;
    lVar7 = FUN_140eccc40(param_1);
    if ((lVar7 == 0) || (cVar3 = FUN_142dd3d20(lVar7), cVar3 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x5b0) + 0x308);
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_a8,uVar4);
    FUN_142ed2e60(*(undefined8 *)(param_1 + 0x5b0),0x3f800000);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_90 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
  }
  FUN_140fd3cf0(param_1,0);
  return;
}



// FUNCTION 140fbba50 FUN_140fbba50 body=367 status=ok
// SIG undefined FUN_140fbba50(void)

void FUN_140fbba50(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ec5080();
  local_10 = 8;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"modName",0x10);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x308) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"mayhemMod",0x14);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x310) = uVar1;
  plVar3 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fbbbc0 FUN_140fbbbc0 body=196 status=ok
// SIG undefined FUN_140fbbbc0(void)

void FUN_140fbbbc0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142ec45d0();
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x4a8))(param_1,local_18,L"menuDamageClip.innerClip")
  ;
  param_1[0xc6] = *plVar4;
  plVar4 = (longlong *)plVar4[1];
  plVar5 = (longlong *)param_1[199];
  if (plVar4 != plVar5) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)param_1[199];
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
    param_1[199] = (longlong)plVar4;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 140fbbc90 FUN_140fbbc90 body=2674 status=ok
// SIG undefined FUN_140fbbc90(void)

void FUN_140fbbc90(longlong param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined8 uVar7;
  float *pfVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [16];
  longlong *local_a8;
  undefined1 *local_98 [2];
  undefined8 local_88 [4];
  undefined8 local_68;
  undefined4 local_58;
  
  uVar13 = 0;
  local_res8 = 0;
  FUN_142ec45d0();
  local_1d8 = 0;
  local_1d0 = 0x1d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
  FGenericPlatformString::Memcpy(local_1d8,L"minimapInitializationWrapper",0x3a);
  local_1e8 = (longlong *)0x0;
  local_1e0 = 0;
  local_res10 = 0;
  uVar7 = FUN_140e96f30(param_1,&local_1d8,0,6,&local_1e8);
  *(undefined8 *)(param_1 + 0x6b8) = uVar7;
  plVar9 = local_1e8;
  for (iVar17 = (int)local_1e0; iVar17 != 0; iVar17 = iVar17 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_1e8 != (longlong *)0x0) {
    FMemory::Free(local_1e8);
  }
  if (local_1d8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6b8) != 0) {
    local_1b8 = 0;
    local_1b0 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
    FGenericPlatformString::Memcpy(local_1b8,L"minimap",0x10);
    local_1c8 = (longlong *)0x0;
    local_1c0 = 0;
    local_res18 = 0;
    uVar7 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x6b8),&local_1b8,0,6,&local_1c8);
    *(undefined8 *)(param_1 + 0x5e8) = uVar7;
    plVar9 = local_1c8;
    for (iVar17 = (int)local_1c0; iVar17 != 0; iVar17 = iVar17 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_1c8 != (longlong *)0x0) {
      FMemory::Free(local_1c8);
    }
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x5e8) != 0) {
      local_198 = 0;
      local_190 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
      FGenericPlatformString::Memcpy(local_198,L"terrain",0x10);
      local_1a8 = (longlong *)0x0;
      local_1a0 = 0;
      local_res20 = 0;
      uVar7 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x5e8),&local_198,0,6,&local_1a8);
      *(undefined8 *)(param_1 + 0x6c0) = uVar7;
      plVar9 = local_1a8;
      for (iVar17 = (int)local_1a0; iVar17 != 0; iVar17 = iVar17 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_1a8 != (longlong *)0x0) {
        FMemory::Free(local_1a8);
      }
      if (local_198 != 0) {
        FMemory::Free();
      }
    }
  }
  local_178 = 0;
  local_170 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
  FGenericPlatformString::Memcpy(local_178,L"minimapInitializationMC",0x30);
  local_188 = (longlong *)0x0;
  local_180 = 0;
  local_f8 = 0;
  uVar7 = FUN_140e96f30(param_1,&local_178,0,6,&local_188);
  *(undefined8 *)(param_1 + 0x5f0) = uVar7;
  plVar9 = local_188;
  for (iVar17 = (int)local_180; iVar17 != 0; iVar17 = iVar17 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_188 != (longlong *)0x0) {
    FMemory::Free(local_188);
  }
  if (local_178 != 0) {
    FMemory::Free();
  }
  local_158 = 0;
  local_150 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
  FGenericPlatformString::Memcpy(local_158,L"clampedIconStage",0x22);
  local_168 = (longlong *)0x0;
  local_160 = 0;
  local_f0 = 0;
  uVar7 = FUN_140e96f30(param_1,&local_158,0,6,&local_168);
  *(undefined8 *)(param_1 + 0x680) = uVar7;
  plVar9 = local_168;
  for (iVar17 = (int)local_160; iVar17 != 0; iVar17 = iVar17 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free(local_168);
  }
  if (local_158 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x680) != 0) {
    local_138 = 0;
    local_130 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    FGenericPlatformString::Memcpy(local_138,L"sizeReference",0x1c);
    local_148 = (longlong *)0x0;
    local_140 = 0;
    local_e8 = 0;
    uVar7 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x680),&local_138,0,6,&local_148);
    *(undefined8 *)(param_1 + 0x688) = uVar7;
    plVar9 = local_148;
    for (iVar17 = (int)local_140; iVar17 != 0; iVar17 = iVar17 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free(local_148);
    }
    if (local_138 != 0) {
      FMemory::Free();
    }
  }
  if ((*(longlong *)(param_1 + 0x680) != 0) && (*(longlong *)(param_1 + 0x688) != 0)) {
    pfVar8 = (float *)FUN_142eeb1f0(*(longlong *)(param_1 + 0x688),local_b8);
    uVar18 = *(undefined4 *)(param_1 + 0x648);
    fVar2 = *pfVar8;
    fVar3 = pfVar8[1];
    fVar4 = pfVar8[2];
    fVar5 = pfVar8[3];
    *(undefined4 *)(param_1 + 0x700) = uVar18;
    *(float *)(param_1 + 0x6d0) = fVar2;
    *(float *)(param_1 + 0x6d4) = fVar3;
    *(float *)(param_1 + 0x6d8) = fVar4;
    *(float *)(param_1 + 0x6dc) = fVar5;
    *(undefined4 *)(param_1 + 0x70c) = uVar18;
    *(float *)(param_1 + 0x6f8) =
         (*(float *)(param_1 + 0x6dc) - *(float *)(param_1 + 0x6d4)) * -0.25;
    *(float *)(param_1 + 0x6fc) = (fVar4 - fVar2) * -0.25;
    *(undefined4 *)(param_1 + 0x718) = uVar18;
    *(float *)(param_1 + 0x708) =
         (*(float *)(param_1 + 0x6d8) - *(float *)(param_1 + 0x6d0)) * -0.25;
    *(float *)(param_1 + 0x704) = (*(float *)(param_1 + 0x6dc) - *(float *)(param_1 + 0x6d4)) * 0.25
    ;
    *(undefined4 *)(param_1 + 0x724) = uVar18;
    *(float *)(param_1 + 0x714) = (*(float *)(param_1 + 0x6d8) - *(float *)(param_1 + 0x6d0)) * 0.25
    ;
    *(float *)(param_1 + 0x710) =
         (*(float *)(param_1 + 0x6dc) - *(float *)(param_1 + 0x6d4)) * -0.25;
    *(float *)(param_1 + 0x720) = (*(float *)(param_1 + 0x6d8) - *(float *)(param_1 + 0x6d0)) * 0.25
    ;
    *(float *)(param_1 + 0x71c) = (*(float *)(param_1 + 0x6dc) - *(float *)(param_1 + 0x6d4)) * 0.25
    ;
  }
  plVar9 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (plVar9 == (longlong *)0x0) {
LAB_140fbc2de:
    plVar9 = (longlong *)0x0;
  }
  else {
    lVar10 = FUN_14145f370();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140fbc2de;
    lVar10 = (**(code **)(*plVar9 + 0x148))(plVar9);
    if (lVar10 != 0) {
      uVar7 = (**(code **)(*plVar9 + 0x148))(plVar9);
      lVar10 = UWorld::GetWorldSettings(uVar7,0,1);
      if ((lVar10 != 0) && (lVar10 = *(longlong *)(lVar10 + 0x658), lVar10 != 0)) {
        lVar11 = FUN_141437aa0();
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
          uVar18 = *(undefined4 *)(lVar10 + 0x28);
          goto LAB_140fbc2e4;
        }
      }
    }
  }
  uVar18 = 0;
LAB_140fbc2e4:
  *(undefined4 *)(param_1 + 0x6ac) = uVar18;
  uVar15 = uVar13;
  if (plVar9 != (longlong *)0x0) {
    uVar15 = plVar9[0x359];
  }
  FUN_140faf6e0(param_1,uVar15);
  if ((plVar9 != (longlong *)0x0) && (lVar10 = FUN_140cff230(plVar9), lVar10 != 0)) {
    uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
    local_1f8 = FUN_140fb8490;
    plVar16 = (longlong *)(lVar10 + 0x490);
    plVar12 = (longlong *)FMemory::Realloc(0,0x30);
    local_a8 = plVar12;
    if (plVar12 != (longlong *)0x0) {
      *plVar12 = (longlong)&PTR_FUN_143fcff50;
      FWeakObjectPtr::operator=(plVar12 + 1,param_1);
      *(undefined4 *)(plVar12 + 2) = (undefined4)local_1f8;
      *(undefined4 *)((longlong)plVar12 + 0x14) = local_1f8._4_4_;
      *(undefined4 *)(plVar12 + 3) = (undefined4)uStack_1f0;
      *(undefined4 *)((longlong)plVar12 + 0x1c) = uStack_1f0._4_4_;
      lVar11 = FDelegateHandle::GenerateNewID();
      plVar12[5] = lVar11;
      *plVar12 = (longlong)&PTR_FUN_143fcff98;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar16,1);
      (**(code **)(*plVar12 + 0x20))(plVar12,local_e0);
      iVar17 = *(int *)(lVar10 + 0x498);
      *(int *)(lVar10 + 0x498) = iVar17 + 1;
      if (*(int *)(lVar10 + 0x49c) < iVar17 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar17);
      }
      lVar11 = *plVar16;
      *(longlong **)(lVar11 + (longlong)iVar17 * 0x10) = plVar12;
      *(undefined4 *)(lVar11 + 8 + (longlong)iVar17 * 0x10) = 3;
    }
    *(undefined1 *)(param_1 + 0x838) = *(undefined1 *)(lVar10 + 0x17a);
  }
  uVar15 = uVar13;
  if (*(longlong *)(param_1 + 0x680) != 0) {
    local_118 = 0;
    local_110 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    FGenericPlatformString::Memcpy(local_118,L"northTF",0x10);
    local_128 = (longlong *)0x0;
    local_120 = 0;
    local_d8 = 0;
    uVar13 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x680),&local_118,0,6,&local_128);
    uVar15 = 3;
  }
  *(ulonglong *)(param_1 + 0x698) = uVar13;
  if ((uVar15 & 2) != 0) {
    uVar15 = (ulonglong)((uint)uVar15 & 0xfffffffd);
    plVar16 = local_128;
    for (iVar17 = (int)local_120; iVar17 != 0; iVar17 = iVar17 + -1) {
      if (*plVar16 != 0) {
        FMemory::Free();
      }
      plVar16 = plVar16 + 2;
    }
    if (local_128 != (longlong *)0x0) {
      FMemory::Free(local_128);
    }
  }
  if (((uVar15 & 1) != 0) && (local_118 != 0)) {
    FMemory::Free();
  }
  if (*(longlong **)(param_1 + 0x698) != (longlong *)0x0) {
    lVar10 = **(longlong **)(param_1 + 0x698);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d0,&DAT_144632f44,L"GFxMinimapWidget",L"NorthLabel");
    (**(code **)(lVar10 + 0x2b0))(*(undefined8 *)(param_1 + 0x698),uVar7,1,0);
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_c8 + 1;
      lVar10 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar1 = (int *)((longlong)local_c8 + 0xc);
        iVar17 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)(*local_c8 + 8))(local_c8,1);
        }
      }
    }
  }
  local_1f8 = (code *)0x0;
  uStack_1f0 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
  FGenericPlatformString::Memcpy(local_1f8,L"mailNotification",0x22);
  local_108 = (longlong *)0x0;
  local_100 = 0;
  uVar7 = FUN_140e96f30(param_1,&local_1f8,0,6,&local_108);
  *(undefined8 *)(param_1 + 0x690) = uVar7;
  plVar16 = local_108;
  for (iVar17 = (int)local_100; iVar17 != 0; iVar17 = iVar17 + -1) {
    if (*plVar16 != 0) {
      FMemory::Free();
    }
    plVar16 = plVar16 + 2;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_1f8 != (code *)0x0) {
    FMemory::Free();
  }
  plVar16 = *(longlong **)(param_1 + 0x690);
  if ((plVar16 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) {
    (**(code **)(*plVar16 + 0x278))(plVar16,0);
    FWeakObjectPtr::operator=(&local_res8,param_1);
    uVar18 = local_res8;
    local_68 = 0;
    local_58 = 0;
    puVar14 = (undefined8 *)FUN_140438ef0(0x18,local_88);
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &PTR_FUN_1444f8920;
      puVar14[1] = param_1;
      *(undefined4 *)(puVar14 + 2) = uVar18;
      *(undefined4 *)((longlong)puVar14 + 0x14) = local_resc;
    }
    local_98[0] = &LAB_140faee40;
    FUN_14204c280(local_98);
  }
  lVar10 = FWeakObjectPtr::Get(param_1 + 0x5c8);
  if (lVar10 != 0) {
    lVar11 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      FWeakObjectPtr::operator=(lVar10 + 0x728,param_1);
    }
  }
  FUN_140fd4f80(param_1,1);
  FUN_140fd5020(param_1);
  FUN_140fd4c60(param_1);
  return;
}



// FUNCTION 140fbc710 FUN_140fbc710 body=1097 status=ok
// SIG undefined FUN_140fbc710(void)

void FUN_140fbc710(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  FUN_142ef9e70();
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (lVar5 != 0) {
    lVar3 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140fbc775;
  }
  lVar5 = 0;
LAB_140fbc775:
  FWeakObjectPtr::operator=(param_1 + 0x1d8,lVar5);
  local_e8 = 0;
  local_e0 = 0x22;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"replayHintWrapper.replayAudioHint",0x44);
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  FUN_140e98630(param_1,param_1 + 0x1a8,&local_e8,0,6,&local_f8);
  plVar7 = local_f8;
  for (iVar6 = (int)local_f0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if ((*(longlong *)(param_1 + 0x1a8) != 0) &&
     (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x1d8), cVar2 != '\0')) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x308);
    uVar4 = FUN_1420fc090(*(undefined8 *)(param_1 + 0x38));
    (**(code **)(lVar5 + 0x10))(*(longlong *)(param_1 + 0x1a8) + 0x308,0,uVar4);
    FUN_140fd2110(param_1);
  }
  local_c8 = 0;
  local_c0 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"activeMissionIcon",0x24);
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  uVar4 = FUN_140ecbdf0(param_1,&local_c8,0,6,&local_d8);
  *(undefined8 *)(param_1 + 0x170) = uVar4;
  plVar7 = local_d8;
  for (iVar6 = (int)local_d0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  local_a8 = 0;
  local_a0 = 0x29;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"scrollingDescriptionText.descriptionText",0x52);
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  FUN_140e99270(param_1,param_1 + 0x1b8,&local_a8,0,6,&local_b8);
  plVar7 = local_b8;
  for (iVar6 = (int)local_b0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  local_88 = 0;
  local_80 = 0x23;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"scrollingDescriptionText.scrollBar",0x46);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  FUN_140e98f00(param_1,param_1 + 0x1c0,&local_88,0,6,&local_98);
  plVar7 = local_98;
  for (iVar6 = (int)local_90; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  local_68 = 0;
  local_60 = 0x27;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"scrollingDescriptionText.scrollingMask",0x4e);
  local_78 = (longlong *)0x0;
  local_70 = 0;
  local_58 = 0;
  FUN_140e98b90(param_1,param_1 + 0x1c8,&local_68,0,6,&local_78);
  plVar7 = local_78;
  for (iVar6 = (int)local_70; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (((*(longlong *)(param_1 + 0x1b8) != 0) && (*(longlong *)(param_1 + 0x1c0) != 0)) &&
     (*(longlong *)(param_1 + 0x1c8) != 0)) {
    FUN_142f118f0();
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x1d8);
  if (cVar2 != '\0') {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x1d8);
    LOCK();
    *(undefined4 *)(lVar5 + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140fbcb60 FUN_140fbcb60 body=555 status=ok
// SIG undefined FUN_140fbcb60(void)

void FUN_140fbcb60(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ec5080();
  local_10 = 0x12;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"activeMissionIcon",0x24);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar2 = FUN_140ecbdf0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x350) = uVar2;
  plVar4 = local_28;
  for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"progressText",0x1a);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar2 = FUN_140ecc7d0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x358) = uVar2;
  plVar4 = local_18;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"hint",10);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  cVar1 = FUN_140e98630(param_1,(undefined8 *)(param_1 + 0x348),&local_28,0,6,&local_18);
  plVar4 = local_18;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (cVar1 != '\0') {
    uVar2 = FUN_1404b03b0();
    FUN_142ed5ef0(*(undefined8 *)(param_1 + 0x348),&DAT_146b3e2a0,uVar2);
  }
  return;
}



// FUNCTION 140fbcda0 FUN_140fbcda0 body=694 status=ok
// SIG undefined FUN_140fbcda0(void)

void FUN_140fbcda0(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  FUN_142ef9e70();
  uVar3 = FUN_142085870(param_1,local_48,L"titleText");
  FUN_142ede260(param_1 + 0x170,uVar3);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_40 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  uVar3 = FUN_142085870(param_1,local_38,L"bodyText");
  FUN_142ede260(param_1 + 0x188,uVar3);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  lVar6 = 0;
  local_70 = 0x17;
  local_78 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"hintBarWrapper.hintBar",0x2e);
  local_88 = (longlong *)0x0;
  local_80 = 0;
  FUN_140f9e600(param_1,param_1 + 0x1a0,&local_78,0,6,&local_88);
  plVar7 = local_88;
  for (iVar9 = (int)local_80; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) == 0) {
    return;
  }
  FUN_142ed2120(*(longlong *)(param_1 + 0x1a0),1);
  FUN_14172a070(local_res8,0);
  uVar3 = GetTransientPackage();
  FUN_1417846f0(uVar3,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res10 = 0;
  uVar4 = FUN_142f25af0();
  uVar3 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  FUN_14172a400(local_res8);
  if (*(longlong *)(param_1 + 0x1a8) == 0) {
    return;
  }
  lVar8 = *(longlong *)(param_1 + 0x38);
  if (lVar8 != 0) {
    lVar5 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140fbcfd6;
  }
  lVar8 = lVar6;
LAB_140fbcfd6:
  local_60 = lVar6;
  local_68 = lVar8;
  if (lVar8 != 0) {
    uVar3 = FUN_142f2b5a0();
    local_60 = UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar3);
  }
  FTimeline::SetTimelinePostUpdateFunc(*(undefined8 *)(param_1 + 0x1a8),&local_68);
  lVar8 = *(longlong *)(param_1 + 0x1a0);
  local_58 = lVar8;
  if (lVar8 != 0) {
    uVar3 = FUN_142f25a40();
    lVar6 = UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar3);
  }
  local_50 = lVar6;
  FUN_142f0dc90(*(undefined8 *)(param_1 + 0x1a8),&local_58);
  return;
}



// FUNCTION 140fbd060 FUN_140fbd060 body=1124 status=ok
// SIG undefined FUN_140fbd060(void)

void FUN_140fbd060(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  longlong local_res10;
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  
  FUN_142ef9e70();
  local_30 = 0xd;
  local_38 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"tutorialMenu",0x1a);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_140e98b90(param_1,param_1 + 0x1a8,&local_38,0,6,&local_48);
  plVar9 = local_48;
  for (iVar11 = (int)local_40; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    local_48 = (longlong *)0x0;
    local_40 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"tutorialLarge",0x1c);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FUN_140f9e290(*(undefined8 *)(param_1 + 0x1a8),param_1 + 0x1b0,&local_48,0,6,&local_38);
    plVar9 = local_38;
    for (iVar11 = (int)local_30; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_48 = (longlong *)0x0;
    local_40 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"tutorialMedium",0x1e);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FUN_140f9e290(*(undefined8 *)(param_1 + 0x1a8),param_1 + 0x1b8,&local_48,0,6,&local_38);
    plVar9 = local_38;
    for (iVar11 = (int)local_30; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_48 = (longlong *)0x0;
    local_40 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"tutorialSmall",0x1c);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FUN_140f9e290(*(undefined8 *)(param_1 + 0x1a8),param_1 + 0x1c0,&local_48,0,6,&local_38);
    plVar9 = local_38;
    for (iVar11 = (int)local_30; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar6 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxTutorialWidget::OnInputDeviceChanged",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res10,pwVar4 + 2,1);
      plVar9 = (longlong *)(lVar1 + 0x560);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,param_1);
      local_40 = local_res10;
      if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_48), lVar6 != 0)) {
        UObject::FindFunction(lVar6,local_40);
      }
      piVar2 = (int *)*plVar9;
      iVar11 = *(int *)(lVar1 + 0x568);
      for (piVar10 = piVar2; piVar10 != piVar2 + (longlong)iVar11 * 4; piVar10 = piVar10 + 4) {
        if (((*piVar10 == (int)local_48) &&
            (local_48._4_4_ = (int)((ulonglong)local_48 >> 0x20),
            bVar12 = piVar10[1] == local_48._4_4_, bVar12)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar10), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) {
          bVar12 = true;
        }
        else {
          bVar12 = false;
        }
        if ((bVar12) && (*(longlong *)(piVar10 + 2) == local_40)) {
          bVar12 = true;
        }
        else {
          bVar12 = false;
        }
        if (bVar12) {
          if ((int)((longlong)piVar10 - (longlong)piVar2 >> 4) != -1) goto LAB_140fbd493;
          break;
        }
      }
      iVar11 = *(int *)(lVar1 + 0x568);
      *(int *)(lVar1 + 0x568) = iVar11 + 1;
      if (*(int *)(lVar1 + 0x56c) < iVar11 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar11);
      }
      puVar8 = (undefined4 *)((longlong)iVar11 * 0x10 + *plVar9);
      *puVar8 = (int)local_48;
      puVar8[1] = local_48._4_4_;
      *(longlong *)(puVar8 + 2) = local_40;
LAB_140fbd493:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar9);
      FUN_142eb62a0(lVar1);
      FUN_140fcf410(param_1);
    }
  }
  return;
}



// FUNCTION 140fbd4d0 FUN_140fbd4d0 body=4046 status=ok
// SIG undefined FUN_140fbd4d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_140fbd4d0(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  float *pfVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong *plVar16;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  longlong *plStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  ulonglong local_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac;
  ulonglong local_1a8;
  ulonglong local_1a0;
  longlong *local_198;
  undefined1 local_190;
  undefined8 local_188;
  longlong *plStack_180;
  undefined8 local_178;
  longlong *plStack_170;
  undefined8 local_168;
  longlong *plStack_160;
  longlong local_158;
  longlong local_150;
  undefined1 local_148 [16];
  undefined1 *local_138 [2];
  longlong local_128 [4];
  longlong *local_108;
  int local_f8;
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  FWeakObjectPtr::Get(param_1 + 0xc4);
  if (*(char *)(param_1 + 0x3c0) != '\0') {
    uVar3 = *param_2;
    if ((uVar3 == DAT_146873058) || (uVar3 == DAT_146873060)) {
      cVar4 = FUN_1410949b0(param_1,param_2);
      return cVar4;
    }
    if (uVar3 == DAT_146873078) {
      return '\x01';
    }
    if (uVar3 == DAT_146873080) {
      return '\x01';
    }
    if (uVar3 == DAT_146873088) {
      return '\x01';
    }
    if (uVar3 == DAT_146873090) {
      return '\x01';
    }
    if (uVar3 == DAT_146873068) {
      return '\x01';
    }
    if (uVar3 == DAT_146873070) {
      return '\x01';
    }
    if (uVar3 == DAT_1468730e0) {
      return '\x01';
    }
    if (uVar3 == DAT_1468730e8) {
      return '\x01';
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x4b0);
  if (((lVar9 != 0) && (*(char *)(lVar9 + 0x1a4) != '\0')) &&
     (cVar4 = FUN_140fb2f70(lVar9), cVar4 != '\0')) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x4b0) + 0x1e0) != *(longlong *)(param_1 + 0x370)) {
      return '\x01';
    }
    if (*(int *)(*(longlong *)(param_1 + 0x4b0) + 0x1a0) != *(int *)(param_1 + 0x390)) {
      return '\x01';
    }
    if (*param_2 != DAT_146873410) {
      return '\x01';
    }
  }
  if ((*(char *)((longlong)param_2 + 0xc) == '\x01') && (DAT_146b3e2a8 == *param_2)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  iVar7 = -1;
  if (bVar5) {
    plVar12 = (longlong *)(param_1 + -0x4d8);
    uVar8 = FUN_140fb23b0(plVar12);
    cVar4 = FUN_140fada60(plVar12,uVar8);
    if (cVar4 != '\0') {
      return '\x01';
    }
    if ((*(char *)(param_1 + 0x3c0) == '\0') && (*(char *)(param_1 + 0x858) == '\x02')) {
      lVar9 = FUN_141083c60(plVar12);
      iVar15 = iVar7;
      if ((*(longlong *)(param_1 + 0x408) != 0) && (lVar10 = FUN_140f9b010(), lVar10 != 0)) {
        iVar15 = *(int *)(lVar10 + 0x2d8);
      }
      if ((iVar15 < 0) || (*(int *)(param_1 + 0x4c0) <= iVar15)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((((bVar5) && (lVar9 != 0)) &&
          (lVar9 = FUN_1412bf430(lVar9,*(undefined8 *)
                                        ((longlong)iVar15 * 0x60 + 0x58 +
                                        *(longlong *)(param_1 + 0x4b8))), lVar9 != 0)) &&
         (lVar9 = FWeakObjectPtr::Get(lVar9 + 0x18), lVar9 != 0)) {
        FUN_140fad830(plVar12,lVar9);
        return '\x01';
      }
    }
    lVar9 = (**(code **)(*plVar12 + 0x148))(plVar12);
    lVar10 = FUN_140e971d0(plVar12);
    if (((lVar9 != 0) && (lVar10 != 0)) && (lVar9 = *(longlong *)(lVar9 + 0x140), lVar9 != 0)) {
      lVar11 = FUN_141425c60();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (cVar4 = FUN_140c082f0(lVar9,lVar10), cVar4 == '\0')) {
        return '\x01';
      }
    }
    if ((*(longlong *)(param_1 + 0x408) != 0) && (*(char *)(param_1 + 0x579) == '\a')) {
      if ((*(char *)(param_1 + 0x3c0) != '\0') && (cVar4 = FUN_140faf620(plVar12), cVar4 == '\0')) {
        return '\x01';
      }
      lVar9 = FUN_140f9b010(*(undefined8 *)(param_1 + 0x408));
      if (lVar9 != 0) {
        iVar15 = *(int *)(lVar9 + 0x2d8);
        if ((iVar15 < 0) || (*(int *)(param_1 + 0x4c0) <= iVar15)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (((bVar5) &&
            (lVar9 = *(longlong *)((longlong)iVar15 * 0x60 + *(longlong *)(param_1 + 0x4b8)),
            lVar9 != 0)) && (*(char *)(lVar9 + 0xd1) == '\x05')) {
          return '\0';
        }
      }
    }
  }
  cVar4 = *(char *)(param_1 + 0x579);
  lVar9 = *(longlong *)(param_1 + 0x408);
  if (cVar4 == '\b') {
    lVar10 = *(longlong *)(param_1 + 0x430);
  }
  else {
    lVar10 = lVar9;
    if (cVar4 == '\t') {
      lVar10 = *(longlong *)(param_1 + 0x438);
    }
  }
  uVar3 = *param_2;
  if (uVar3 != DAT_146b3e2a0) {
    if (*(char *)(param_1 + 0x858) == '\x02') {
      if (uVar3 == DAT_146873078) {
        return '\x01';
      }
      if (uVar3 == DAT_146873080) {
        return '\x01';
      }
      if (uVar3 == DAT_146873088) {
        return '\x01';
      }
      if (uVar3 == DAT_146873090) {
        return '\x01';
      }
      if (uVar3 == DAT_146873058) {
        return '\x01';
      }
      if (uVar3 == DAT_146873060) {
        return '\x01';
      }
      if (uVar3 == DAT_146873068) {
        return '\x01';
      }
      if (uVar3 == DAT_146873070) {
        return '\x01';
      }
      if (uVar3 == DAT_146873190) {
        return '\x01';
      }
      if (uVar3 == DAT_146873198) {
        return '\x01';
      }
    }
    if ((uVar3 == DAT_146873078) || (uVar3 == DAT_146873058)) {
      if (lVar10 == 0) {
        return '\x01';
      }
      if (uVar3 != DAT_146873078) {
        return '\x01';
      }
      if (cVar4 == '\x06') {
        return '\x01';
      }
      if ((((lVar10 != lVar9) || (iVar7 = FUN_142eb7440(lVar9), iVar7 != 2)) ||
          (*(char *)(param_1 + 0x579) == '\b')) &&
         ((*(char *)(param_1 + 0x579) != '\b' ||
          (iVar7 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x408)), iVar7 != 1)))) {
        FUN_142ebe960(lVar10);
        return '\x01';
      }
      local_1c0 = FUN_140f9b010(*(undefined8 *)(param_1 + 0x408));
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x420,&local_1c0);
      return '\x01';
    }
    if ((uVar3 == DAT_146873080) || (uVar3 == DAT_146873060)) {
      if (lVar10 == 0) {
        return '\x01';
      }
      if (uVar3 != DAT_146873080) {
        return '\x01';
      }
      if (cVar4 == '\x06') {
        return '\x01';
      }
      if ((((lVar10 != lVar9) || (iVar7 = FUN_142eb7440(lVar9), iVar7 != 2)) ||
          (*(char *)(param_1 + 0x579) == '\b')) &&
         ((*(char *)(param_1 + 0x579) != '\b' || (iVar7 = FUN_142eb7440(lVar10), iVar7 != 1)))) {
        FUN_142ebe930(lVar10);
        return '\x01';
      }
      local_1c8 = FUN_140f9b010(*(undefined8 *)(param_1 + 0x408));
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x420,&local_1c8);
      return '\x01';
    }
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_1468730b8 == uVar3)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      if ((cVar4 == '\b') && (*(longlong *)(param_1 + 0x450) != 0)) {
        if (*(char *)(param_1 + 0x578) == '\x03') {
          iVar7 = *(int *)(param_1 + 0x440) + 1;
          if ((iVar7 < 0) || (*(int *)(param_1 + 0x330) <= iVar7)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) {
            iVar7 = 0;
          }
          *(int *)(param_1 + 0x440) = iVar7;
          LOCK();
          *(undefined4 *)(param_1 + 0x1d8) = 1;
          UNLOCK();
          LOCK();
          *(undefined4 *)(param_1 + 0x210) = 1;
          UNLOCK();
          return '\x01';
        }
      }
      else if ((cVar4 == '\t') &&
              ((*(longlong **)(param_1 + 0x438) != (longlong *)0x0 &&
               (plVar12 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x438) + 0x2b0))(),
               plVar12 != (longlong *)0x0)))) {
        lVar9 = FUN_141369c80();
        if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
            != lVar9 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          if (((int)plVar12[0x61] < 0) || (*(int *)(param_1 + 0x550) <= (int)plVar12[0x61])) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            pfVar13 = (float *)(**(code **)(*plVar12 + 0x328))
                                         (plVar12,local_148,*(undefined8 *)(param_1 + 0x438));
            local_158 = plVar12[0x69];
            local_150 = plVar12[0x6a];
            local_1f8 = CONCAT44((pfVar13[2] + *pfVar13) * 0.5,(pfVar13[3] + pfVar13[1]) * 0.5);
            if (local_150 != 0) {
              LOCK();
              *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
              UNLOCK();
            }
            FUN_140fdd180(param_1 + -0x4d8,&local_158,*(undefined1 *)((longlong)plVar12 + 0x30c),
                          local_1f8);
            return '\x01';
          }
        }
      }
    }
    cVar4 = *(char *)(param_1 + 0x3c0);
    if (cVar4 == '\0') {
      uVar3 = *param_2;
      if (((uVar3 == DAT_146873430) && (*(char *)((longlong)param_2 + 0xc) == '\0')) &&
         (*(char *)(param_1 + 0x579) != '\t')) {
        param_1 = param_1 + -0x4d8;
        FWeakObjectPtr::operator=(&local_1f0,param_1);
        local_108 = (longlong *)0x0;
        local_f8 = 0;
        puVar14 = (undefined8 *)FUN_140438ef0(0x18,local_128);
        if (puVar14 != (undefined8 *)0x0) {
          *puVar14 = &PTR_FUN_1444f8920;
          puVar14[1] = param_1;
          *(undefined4 *)(puVar14 + 2) = local_1f0;
          *(undefined4 *)((longlong)puVar14 + 0x14) = local_1ec;
        }
        local_138[0] = &LAB_140faeea0;
        FUN_14208c260(param_1,local_138);
        if (local_f8 != 0) {
          plVar12 = local_128;
          if (local_108 != (longlong *)0x0) {
            plVar12 = local_108;
          }
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x10))(plVar12,0);
          }
        }
        if (local_108 == (longlong *)0x0) {
          return '\x01';
        }
        FMemory::Free();
        return '\x01';
      }
      if ((uVar3 == DAT_146873410) && (*(char *)(param_1 + 0x579) != '\x06')) {
        param_1 = param_1 + -0x4d8;
        FWeakObjectPtr::operator=(&local_1e8,param_1);
        local_b8 = (longlong *)0x0;
        local_a8 = 0;
        puVar14 = (undefined8 *)FUN_140438ef0(0x18,local_d8);
        if (puVar14 != (undefined8 *)0x0) {
          *puVar14 = &PTR_FUN_1444f8920;
          puVar14[1] = param_1;
          *(undefined4 *)(puVar14 + 2) = local_1e8;
          *(undefined4 *)((longlong)puVar14 + 0x14) = local_1e4;
        }
        local_e8[0] = &LAB_140faedb0;
        FUN_14208c260(param_1,local_e8);
        if (local_a8 != 0) {
          plVar12 = local_d8;
          if (local_b8 != (longlong *)0x0) {
            plVar12 = local_b8;
          }
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x10))(plVar12,0);
          }
        }
        if (local_b8 == (longlong *)0x0) {
          return '\x01';
        }
        FMemory::Free();
        return '\x01';
      }
      if ((uVar3 == DAT_146873420) && (*(char *)(param_1 + 0x579) != '\t')) {
        param_1 = param_1 + -0x4d8;
        FWeakObjectPtr::operator=(&local_1e0,param_1);
        local_68 = (longlong *)0x0;
        local_58 = 0;
        puVar14 = (undefined8 *)FUN_140438ef0(0x18,local_88);
        if (puVar14 != (undefined8 *)0x0) {
          *puVar14 = &PTR_FUN_1444f8920;
          puVar14[1] = param_1;
          *(undefined4 *)(puVar14 + 2) = local_1e0;
          *(undefined4 *)((longlong)puVar14 + 0x14) = local_1dc;
        }
        local_98[0] = &LAB_140faecb0;
        FUN_14208c260(param_1,local_98);
        if (local_58 != 0) {
          plVar12 = local_88;
          if (local_68 != (longlong *)0x0) {
            plVar12 = local_68;
          }
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x10))(plVar12,0);
          }
        }
        if (local_68 == (longlong *)0x0) {
          return '\x01';
        }
        FMemory::Free();
        return '\x01';
      }
    }
    iVar15 = 0;
    if (*(char *)(param_1 + 0x579) != '\x06') {
      uVar3 = *param_2;
      if (*(char *)(param_1 + 0x858) == '\x02') {
        iVar15 = 0;
        if (uVar3 == DAT_146873228) {
          iVar15 = -1;
        }
        if (uVar3 == DAT_146873230) {
          iVar15 = 1;
        }
      }
      else {
        if (uVar3 == DAT_146873088) {
          iVar15 = iVar7;
        }
        if (uVar3 == DAT_146873090) {
          iVar15 = 1;
        }
      }
    }
    if (((*(longlong *)(param_1 + 0x400) != 0) && (iVar15 != 0)) && (cVar4 == '\0')) {
      if (iVar15 < 1) {
        ATTLPlayerController::InputPadDown_Released();
      }
      else {
        FUN_142ebe950();
      }
      plVar12 = *(longlong **)(param_1 + 0x408);
      if (plVar12 == (longlong *)0x0) {
        return '\x01';
      }
      (**(code **)(*plVar12 + 0x2b8))(plVar12,0xffffffff,0,0);
      return '\x01';
    }
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146873428 == *param_2)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if ((bVar5) && (cVar4 == '\0')) {
      if (*(char *)(param_1 + 0x579) != '\x06') {
        FUN_140fd6950(param_1 + -0x4d8,6);
        return '\x01';
      }
      FUN_140fd6950(param_1 + -0x4d8,*(undefined1 *)(param_1 + 0x57a));
      return '\x01';
    }
    cVar4 = FUN_1410949b0(param_1,param_2);
    if (cVar4 == '\0') {
      if (*param_2 == DAT_1468731f8) {
        FUN_140fb3120(param_1 + -0x4d8,0xbf800000);
        return '\x01';
      }
      if (*param_2 == DAT_146873200) {
        FUN_140fb3120(param_1 + -0x4d8,0x3f800000);
        return '\x01';
      }
    }
    if (*param_2 != DAT_146873100) {
      return cVar4;
    }
    if ((((*(char *)((longlong)param_2 + 0xc) == '\x02') &&
         (lVar9 = *(longlong *)(param_1 + 0x408), lVar9 != 0)) &&
        (*(char *)(param_1 + 0x579) == '\a')) && ((byte)(*(char *)(param_1 + 0x578) - 2U) < 2)) {
      local_1b0 = (undefined4)param_2[1];
      local_1a8 = param_2[2];
      local_1a0 = param_2[3];
      local_198 = (longlong *)param_2[4];
      if (local_198 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_198 + 1) = (int)local_198[1] + 1;
        UNLOCK();
        lVar9 = *(longlong *)(param_1 + 0x408);
      }
      local_190 = (undefined1)param_2[5];
      local_1b8 = DAT_146b3e2a0;
      local_1ac = 0;
      cVar6 = (**(code **)(*(longlong *)(lVar9 + 0x170) + 0x20))
                        ((longlong *)(lVar9 + 0x170),&local_1b8);
      plVar12 = local_198;
      plVar16 = local_198;
      if (cVar6 != '\0') goto LAB_140fbdc07;
      if (local_198 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_198 + 1;
        lVar9 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_198)(local_198);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
    }
    if (*param_2 != DAT_146873100) {
      return cVar4;
    }
    if (*(longlong *)(param_1 + 0x478) == 0) {
      return cVar4;
    }
    if (lVar10 == 0) {
      return cVar4;
    }
    lVar9 = FUN_142eb65a0(param_1 + -0x4d8);
    if (lVar9 != *(longlong *)(lVar10 + 0x2f8)) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x478) + 400) = 1;
      return cVar4;
    }
    return cVar4;
  }
  if ((*(longlong *)(param_1 + 0x488) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x488) + 0x2a0) != '\a')) {
    cVar4 = (**(code **)(*(longlong *)(lVar10 + 0x170) + 0x20))
                      ((longlong *)(lVar10 + 0x170),param_2);
    return cVar4;
  }
  lVar9 = param_1 + 0x818;
  lVar10 = FWeakObjectPtr::Get(lVar9);
  if (lVar10 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0x820)) {
      return '\0';
    }
    local_1f8 = 0;
    if (*(longlong *)(param_1 + 0x828) == 0) {
      return '\0';
    }
    lVar10 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar9,lVar10);
    if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x820) = DAT_1464b56f4;
    }
    lVar10 = FWeakObjectPtr::Get(lVar9);
    if (lVar10 == 0) {
      return '\0';
    }
  }
  lVar11 = FUN_1414efb80();
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
      != lVar11 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return '\0';
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xb4);
  if (cVar4 == '\0') {
    return '\0';
  }
  if (*(char *)(*(longlong *)(param_1 + 0x488) + 0x2a2) == '\0') {
    return '\0';
  }
  plVar12 = (longlong *)FWeakObjectPtr::Get(lVar9);
  if (plVar12 == (longlong *)0x0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0x820)) {
      return '\0';
    }
    local_1f8 = 0;
    if (*(longlong *)(param_1 + 0x828) == 0) {
      return '\0';
    }
    lVar10 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar9,lVar10);
    if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x820) = DAT_1464b56f4;
    }
    plVar12 = (longlong *)FWeakObjectPtr::Get(lVar9);
    if (plVar12 == (longlong *)0x0) {
      return '\0';
    }
  }
  lVar9 = FUN_1414efb80();
  if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return '\0';
  }
  lVar9 = AUIWSRiver::StaticClass();
  if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return '\0';
  }
  plVar12 = (longlong *)(**(code **)(*plVar12 + 0x750))(plVar12);
  if (plVar12 == (longlong *)0x0) {
    return '\0';
  }
  lVar9 = FUN_1413ffe00();
  if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return '\0';
  }
  lVar9 = (**(code **)(*plVar12 + 0x680))(plVar12);
  if (lVar9 == 0) {
    return '\0';
  }
  lVar10 = FUN_140f9aee0(param_1 + -0x4d8);
  if (lVar10 == 0) {
    return '\0';
  }
  uVar8 = FWeakObjectPtr::Get(param_1 + 0xb4);
  FUN_142dcf3a0(uVar8,&local_168);
  local_1d8 = *(undefined8 *)(lVar9 + 0x4b8);
  plStack_1d0 = *(longlong **)(lVar9 + 0x4c0);
  if (plStack_1d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_1d0 + 1) = (int)plStack_1d0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plStack_1d0 + 1) = (int)plStack_1d0[1] + 1;
    UNLOCK();
  }
  local_188 = local_168;
  plStack_180 = plStack_160;
  if (plStack_160 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
    UNLOCK();
  }
  local_178 = local_1d8;
  plStack_170 = plStack_1d0;
  FUN_140bf76e0(lVar10,&local_188,&local_178);
  plVar12 = plStack_180;
  if (plStack_180 != (longlong *)0x0) {
    LOCK();
    plVar16 = plStack_180 + 1;
    lVar9 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_180)(plStack_180);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  plVar12 = plStack_170;
  if (plStack_170 != (longlong *)0x0) {
    LOCK();
    plVar16 = plStack_170 + 1;
    lVar9 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_170)(plStack_170);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  plVar12 = plStack_1d0;
  plVar16 = plStack_160;
  if (plStack_1d0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_1d0 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_1d0)(plStack_1d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar16 = plStack_160;
      if (iVar7 == 1) {
        (**(code **)(*plStack_1d0 + 8))(plStack_1d0,1);
        plVar16 = plStack_160;
      }
    }
  }
LAB_140fbdc07:
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar16 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  return '\x01';
}



// FUNCTION 140fbe4a0 FUN_140fbe4a0 body=422 status=ok
// SIG undefined FUN_140fbe4a0(void)

undefined8 FUN_140fbe4a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x230) != 0) {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x230) + 0x170) + 0x20))();
  }
  if ((*(char *)(param_1 + 0x259) == *(char *)(param_1 + 600)) &&
     ((*(char *)(param_1 + 0x259) == '\0' ||
      ((*(int *)(param_1 + 0x254) == *(int *)(param_1 + 0x250) &&
       ((*(int *)(param_1 + 0x260) == *(int *)(param_1 + 0x25c) ||
        (cVar1 = FUN_140fa0fe0(param_1 + 0x268,param_1 + 0x2d8), cVar1 != '\0')))))))) {
LAB_140fbe5cc:
    if ((*(char *)(param_1 + 0x259) != '\0') &&
       ((((*(char *)(param_1 + 0x27a) == '\0' &&
          (lVar2 = FWeakObjectPtr::Get(param_1 + 0xb4), lVar2 != 0)) &&
         (lVar2 = FWeakObjectPtr::Get(param_1 + 0xb4), *(char *)(lVar2 + 0x128) == '\x03')) &&
        ((*(char *)((longlong)param_2 + 0xc) == '\0' && (DAT_1468730b8 == *param_2)))))) {
      FUN_140fb4380(param_1 + -0x4d8);
    }
    uVar3 = FUN_1410949b0(param_1,param_2);
    return uVar3;
  }
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    if ((*(char *)((longlong)param_2 + 0xc) != '\0') ||
       ((DAT_1468730e8 != *param_2 && (DAT_1468730e0 != *param_2)))) goto LAB_140fbe5cc;
  }
  FUN_140fdd8f0(param_1 + -0x4d8,uVar3);
  plVar4 = (longlong *)(param_1 + 0x280);
  if (param_2 != plVar4) {
    FUN_140fd5680(plVar4);
    *plVar4 = *param_2;
    *(int *)(param_1 + 0x288) = (int)param_2[1];
    *(undefined1 *)(param_1 + 0x28c) = *(undefined1 *)((longlong)param_2 + 0xc);
    *(longlong *)(param_1 + 0x290) = param_2[2];
    *(longlong *)(param_1 + 0x298) = param_2[3];
    lVar2 = param_2[4];
    *(longlong *)(param_1 + 0x2a0) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(char *)(param_1 + 0x2a8) = (char)param_2[5];
    *(undefined1 *)(param_1 + 0x2b0) = 1;
  }
  return 1;
}



// FUNCTION 140fbe650 FUN_140fbe650 body=548 status=ok
// SIG undefined FUN_140fbe650(void)

ulonglong FUN_140fbe650(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  bVar6 = 0;
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    if (DAT_146b3e2a0 == *param_2) {
      iVar7 = *(int *)(param_1 + 0x348);
      iVar1 = *(int *)(param_1 + 0x338);
      iVar2 = (iVar7 - iVar1) + -1;
      if (iVar2 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(param_1 + 0x340) + (longlong)iVar1 * 8),
                   (void *)(*(longlong *)(param_1 + 0x340) + (longlong)(iVar1 + 1) * 8),
                   (longlong)iVar2 << 3);
        iVar7 = *(int *)(param_1 + 0x348);
      }
      *(int *)(param_1 + 0x348) = iVar7 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x340);
      uStack_60 = CONCAT31(uStack_60._1_3_,0 < *(int *)(param_1 + 0x348));
      local_28 = 0;
      iVar7 = 0;
      local_18 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_48);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_143f77c18;
        puVar3[1] = param_1 + -0x4d8;
        *(undefined4 *)(puVar3 + 2) = uStack_60;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_5c;
      }
      local_58[0] = (code *)&LAB_140faecd0;
      FUN_14204c280(local_58);
      iVar1 = *(int *)(param_1 + 0x338);
      if (-1 < iVar1 + -1) {
        iVar7 = *(int *)(param_1 + 0x348);
        if (iVar1 <= *(int *)(param_1 + 0x348) + -1) {
          iVar7 = iVar1;
        }
        iVar7 = iVar7 + -1;
      }
      *(int *)(param_1 + 0x338) = iVar7;
      FUN_140fcf600(param_1 + -0x4d8);
    }
    else {
      if (DAT_146b3e2b8 != *param_2) goto LAB_140fbe7d7;
      local_28 = 0;
      local_18 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_48);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_143f77b70;
        puVar3[1] = param_1 + -0x4d8;
      }
      local_58[0] = FUN_140fae970;
      FUN_14204c280(local_58);
    }
    bVar6 = 1;
  }
LAB_140fbe7d7:
  if (*(char *)((longlong)param_2 + 0xc) != '\0') goto LAB_140fbe849;
  cVar5 = '\0';
  if (DAT_1468730f0 == *param_2) {
    iVar7 = *(int *)(param_1 + 0x338) + 1;
    if ((-1 < iVar7) && (iVar7 < *(int *)(param_1 + 0x348))) {
      *(int *)(param_1 + 0x338) = iVar7;
      FUN_140fcf600(param_1 + -0x4d8);
      cVar5 = *(char *)((longlong)param_2 + 0xc);
      goto LAB_140fbe814;
    }
  }
  else {
LAB_140fbe814:
    if (cVar5 != '\0') goto LAB_140fbe849;
  }
  if (((DAT_1468730f8 == *param_2) && (iVar7 = *(int *)(param_1 + 0x338) + -1, -1 < iVar7)) &&
     (iVar7 < *(int *)(param_1 + 0x348))) {
    *(int *)(param_1 + 0x338) = iVar7;
    FUN_140fcf600(param_1 + -0x4d8);
  }
LAB_140fbe849:
  if (bVar6 == 0) {
    uVar4 = FUN_142ec6030(param_1,param_2);
  }
  else {
    uVar4 = (ulonglong)bVar6;
  }
  return uVar4;
}



// FUNCTION 140fbe880 FUN_140fbe880 body=1381 status=ok
// SIG undefined FUN_140fbe880(void)

char FUN_140fbe880(longlong param_1,longlong *param_2)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined2 local_54;
  undefined1 local_52;
  undefined4 local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') &&
     ((DAT_146873070 == *param_2 || (DAT_146873068 == *param_2)))) {
    if (*(longlong *)(param_1 + 0x3c8) != 0) {
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x3c8) + 0x170) + 0x20))();
    }
    lVar8 = *(longlong *)(param_1 + -0x4d8);
    local_d8 = 0;
    local_d0 = 0;
    puVar6 = (undefined8 *)FName::FName(local_res10,L"StatusMenu_Nav_Click",1);
    (**(code **)(lVar8 + 0x4e8))(param_1 + -0x4d8,*puVar6,&local_d8);
    return '\x01';
  }
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') &&
     ((DAT_146873058 == *param_2 || (DAT_146873060 == *param_2)))) {
    local_c8 = 0;
    lVar8 = *(longlong *)(param_1 + -0x4d8);
    local_c0 = 0;
    puVar6 = (undefined8 *)FName::FName(local_res18,L"StatusMenu_Nav_Click",1);
    (**(code **)(lVar8 + 0x4e8))((longlong *)(param_1 + -0x4d8),*puVar6,&local_c8);
  }
  if ((((*(char *)(param_1 + 0x470) != '\x01') && (*(char *)((longlong)param_2 + 0xc) == '\0')) &&
      (DAT_146b3e2a0 == *param_2)) && (*(longlong *)(param_1 + 0x440) != 0)) {
    FUN_141081510(param_1 + -0x4d8,param_2);
    iVar5 = FUN_142eb7a00(*(undefined8 *)(param_1 + 0x440));
    local_98[0] = 0;
    FText::FText(local_90);
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0xffffffff;
    local_5c = 0;
    local_54 = 0;
    local_52 = 0;
    local_50 = 0;
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x458));
    LOCK();
    *(int *)(param_1 + 0x464) = *(int *)(param_1 + 0x464) + 1;
    UNLOCK();
    bVar2 = false;
    if ((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x450))) {
      FUN_140fa0ea0(local_98,(longlong)iVar5 * 0x50 + *(longlong *)(param_1 + 0x448));
      bVar2 = true;
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x458));
    LOCK();
    *(int *)(param_1 + 0x464) = *(int *)(param_1 + 0x464) + -1;
    UNLOCK();
    if (bVar2) {
      FUN_140fca1e0(param_1 + -0x4d8,local_98);
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x41c) = 1;
    UNLOCK();
    if (local_88 == (longlong *)0x0) {
      return '\x01';
    }
    LOCK();
    plVar9 = local_88 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 != 1) {
      return '\x01';
    }
    (**(code **)*local_88)(local_88);
    LOCK();
    piVar1 = (int *)((longlong)local_88 + 0xc);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 != 1) {
      return '\x01';
    }
    (**(code **)(*local_88 + 8))(local_88,1);
    return '\x01';
  }
  if (*(char *)((longlong)param_2 + 0xc) != '\0') {
LAB_140fbebfd:
    if ((((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146873448 == *param_2)) &&
        (lVar8 = *(longlong *)(param_1 + 0x388), lVar8 != 0)) &&
       (lVar3 = *(longlong *)(lVar8 + 0xc48), lVar3 != 0)) {
      uVar7 = (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x148))();
      FUN_140e2ee60(lVar3,uVar7,lVar8);
    }
    lVar8 = *param_2;
    if (((((lVar8 != DAT_146873100) && (lVar8 != DAT_146873108)) &&
         ((lVar8 != DAT_146873110 && ((lVar8 != DAT_146873118 && (lVar8 != DAT_146873120)))))) &&
        (lVar8 != DAT_1468731f8)) &&
       ((((lVar8 != DAT_146873200 && (*(char *)((longlong)param_2 + 0xc) == '\0')) &&
         (DAT_146b3e2a0 == lVar8)) &&
        ((*(longlong **)(param_1 + 0x440) != (longlong *)0x0 &&
         (lVar8 = (**(code **)(**(longlong **)(param_1 + 0x440) + 0x2b0))(), lVar8 != 0)))))) {
      plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x440) + 0x2b0))();
      (**(code **)(*plVar9 + 0x300))(plVar9,param_2);
      local_a8 = 0;
      lVar8 = *(longlong *)(param_1 + -0x4d8);
      local_a0 = 0;
      puVar6 = (undefined8 *)FName::FName(local_40,L"StatusMenu_Mission_Select",1);
      (**(code **)(lVar8 + 0x4e8))((longlong *)(param_1 + -0x4d8),*puVar6,&local_a8);
    }
    if (((*param_2 == DAT_146873200) || (*param_2 == DAT_1468731f8)) &&
       (((*(char *)(param_1 + 0x470) == '\x01' &&
         (((*(longlong *)(param_1 + 0x430) != 0 &&
           (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x430) + 0x1c0), lVar8 != 0)) &&
          (plVar9 = (longlong *)(lVar8 + 0x170),
          cVar4 = (**(code **)(*plVar9 + 0x20))(plVar9,param_2), cVar4 != '\0')))) ||
        (((((byte)(*(char *)(param_1 + 0x470) - 2U) < 3 && (*(longlong *)(param_1 + 0x438) != 0)) &&
          (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x438) + 0x1c0), lVar8 != 0)) &&
         (plVar9 = (longlong *)(lVar8 + 0x170),
         cVar4 = (**(code **)(*plVar9 + 0x20))(plVar9,param_2), cVar4 != '\0')))))) {
      return '\x01';
    }
    cVar4 = FUN_1410949b0(param_1,param_2);
    if (cVar4 != '\0') {
      FUN_141081510(param_1 + -0x4d8,param_2);
      LOCK();
      *(undefined4 *)(param_1 + 0xb0) = 1;
      UNLOCK();
    }
    return cVar4;
  }
  if (DAT_146873438 != *param_2) {
    if ((DAT_146873440 == *param_2) && (cVar4 = FUN_140faf460(param_1 + -0x4d8), cVar4 != '\0')) {
      if (*(longlong *)(param_1 + 0x388) == 0) {
        return '\x01';
      }
      cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
      if (cVar4 == '\0') {
        return '\x01';
      }
      FUN_142ebe450(param_1 + -0x4d8);
      FUN_140d08690(*(undefined8 *)(param_1 + 0x388));
      uVar7 = FWeakObjectPtr::Get(param_1 + 0xc4);
      lVar8 = FUN_140cdde20(uVar7);
      if (lVar8 == 0) {
        return '\x01';
      }
      lVar3 = param_2[1];
      puVar6 = (undefined8 *)FName::FName(local_48,"Roster",1);
      FUN_14112a420(lVar8,*puVar6,(int)lVar3);
      return '\x01';
    }
    goto LAB_140fbebfd;
  }
  cVar4 = *(char *)(param_1 + 0x471);
  if (cVar4 == '\0') goto LAB_140fbeb1b;
  if (cVar4 == '\x01') {
    if (*(char *)(param_1 + 0x4bc) == '\0') goto LAB_140fbeb0b;
    *(undefined1 *)(param_1 + 0x471) = 2;
  }
  else if (cVar4 == '\x02') {
LAB_140fbeb0b:
    *(undefined1 *)(param_1 + 0x471) = 3;
  }
  else if (cVar4 == '\x03') {
    *(undefined1 *)(param_1 + 0x471) = 1;
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x4c0) = 1;
  UNLOCK();
LAB_140fbeb1b:
  lVar8 = *(longlong *)(param_1 + -0x4d8);
  local_b8 = 0;
  local_b0 = 0;
  puVar6 = (undefined8 *)FName::FName(local_res20,L"StatusMenu_Mission_Toggle_Filter",1);
  (**(code **)(lVar8 + 0x4e8))(param_1 + -0x4d8,*puVar6,&local_b8);
  return '\x01';
}



// FUNCTION 140fbedf0 FUN_140fbedf0 body=382 status=ok
// SIG undefined FUN_140fbedf0(void)

void FUN_140fbedf0(longlong param_1,undefined1 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_142ec64e0();
  lVar2 = *(longlong *)(param_1 + 0x488);
  if (((lVar2 != 0) && (*(char *)(param_1 + 0x3c0) == '\0')) && (*(longlong *)(lVar2 + 0x1b8) != 0))
  {
    plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x1b8) + 0x308);
    (**(code **)(*plVar3 + 0x20))(plVar3,lVar2 + 0x2a8,1);
  }
  *(undefined1 *)(param_1 + 0x858) = param_2;
  lVar2 = FUN_141083c60(param_1 + -0x4d8);
  if (lVar2 != 0) {
    FUN_1412c7ad0(lVar2,param_2);
  }
  plVar3 = *(longlong **)(param_1 + 0x470);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x278))(plVar3,1);
    (**(code **)(**(longlong **)(param_1 + 0x470) + 0x278))(*(longlong **)(param_1 + 0x470),0);
  }
  cVar1 = *(char *)(param_1 + 0x858);
  *(bool *)(param_1 + 0x859) = cVar1 == '\x02';
  if (cVar1 == '\x02') {
    lVar2 = *(longlong *)(param_1 + 0x468);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x460);
  }
  *(longlong *)(param_1 + 0x470) = lVar2;
  if ((lVar2 != 0) && (cVar1 != '\x02')) {
    FUN_14208ff10(lVar2,0,0);
  }
  FUN_140fde680(param_1 + -0x4d8,0);
  plVar3 = *(longlong **)(param_1 + 0x408);
  *(undefined1 *)(param_1 + 0x410) = 0;
  if ((plVar3 != (longlong *)0x0) && (*(char *)(param_1 + 0x3c0) == '\0')) {
    (**(code **)(*plVar3 + 0x2b8))(plVar3,0xffffffff,0);
  }
  if ((*(char *)(param_1 + 0x858) == '\x02') && (*(char *)(param_1 + 0x3c0) == '\0')) {
    local_18 = 0;
    uStack_10 = 0;
    FUN_142ed36d0(param_1 + -0x4d8,&local_18,0);
  }
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FUN_142ed14f0();
  }
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FUN_140fcf410();
  }
  return;
}



// FUNCTION 140fbef70 FUN_140fbef70 body=138 status=ok
// SIG undefined FUN_140fbef70(void)

void FUN_140fbef70(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5c8);
  if (lVar3 != 0) {
    lVar4 = FUN_14142a560();
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
      cVar2 = FUN_140cbbac0(lVar3,param_1);
      if (cVar2 != '\0') {
        FUN_140fd3cf0(param_1,1);
        return;
      }
    }
  }
  FUN_140fd3cf0(param_1,0);
  return;
}



// FUNCTION 140fbf000 FUN_140fbf000 body=31 status=ok
// SIG undefined FUN_140fbf000(void)

void FUN_140fbf000(longlong param_1)

{
  FUN_142ec64e0();
  FUN_140fe16e0(param_1 + -0x4d8);
  return;
}



// FUNCTION 140fbf020 FUN_140fbf020 body=229 status=ok
// SIG undefined FUN_140fbf020(void)

void FUN_140fbf020(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  FUN_142ec64e0();
  if (*(longlong *)(param_1 + 0x440) != 0) {
    iVar5 = 0;
    iVar2 = FUN_142eb7440();
    if (0 < iVar2) {
      do {
        lVar3 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x440),iVar5);
        if (lVar3 != 0) {
          lVar4 = UMobBaseAnim::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (*(longlong *)(lVar3 + 0x348) != 0)) {
            FUN_142ecfa40();
          }
        }
        iVar5 = iVar5 + 1;
        iVar2 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x440));
      } while (iVar5 < iVar2);
    }
  }
  if (*(longlong *)(param_1 + 0x430) != 0) {
    FUN_140fd2110();
  }
  if (*(longlong *)(param_1 + 0x438) == 0) {
    return;
  }
  FUN_140fd2110();
  return;
}



// FUNCTION 140fbf110 OnReturnToStartScreenMessageBoxClosed body=5 status=ok
// SIG undefined OnReturnToStartScreenMessageBoxClosed(void)

void UUGGameInstance::OnReturnToStartScreenMessageBoxClosed(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_38 [8];
  longlong *plStack_30;
  undefined1 auStack_20 [8];
  longlong *plStack_18;
  
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_140fd44b0();
    uVar5 = FUN_140fb1360(auStack_20,param_1 + 0x200);
    uVar6 = FUN_140fb1360(auStack_38,param_1 + 0x1e8);
    FUN_140fd9340(*(undefined8 *)(param_1 + 0x1c8),uVar6,uVar5);
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plStack_30 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
    if (plStack_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_18 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_18)(plStack_18);
        LOCK();
        piVar2 = (int *)((longlong)plStack_18 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_18 + 8))(plStack_18,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140fbf120 FUN_140fbf120 body=457 status=ok
// SIG undefined FUN_140fbf120(void)

void FUN_140fbf120(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x2d8);
  lVar5 = AReplicationGraphDebugActor::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
      != lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  cVar4 = *(char *)(param_2 + 0x308);
  if (cVar4 == '\0') {
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x9a8) <= iVar1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_140fd61e0(*(longlong *)(param_1 + 0x960),1);
    cVar4 = *(char *)(param_2 + 0x308);
  }
  if (cVar4 == '\0') {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x9a0) + (longlong)iVar1 * 8);
    FUN_141083c60(param_1);
    FUN_140fb2a40(param_1,uVar2,0,0);
    return;
  }
  lVar5 = param_1 + 0x770;
  lVar6 = FWeakObjectPtr::Get(lVar5);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x778)) && (*(longlong *)(param_1 + 0x780) != 0)) {
      lVar6 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar5,lVar6);
      if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x778) = DAT_1464b56f4;
      }
      lVar6 = FWeakObjectPtr::Get(lVar5);
      if (lVar6 != 0) goto LAB_140fbf253;
    }
  }
  else {
LAB_140fbf253:
    lVar5 = UMaterialInstanceDynamic::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140fbf28c;
  }
  lVar6 = 0;
LAB_140fbf28c:
  FUN_140fb2a40(param_1,lVar6,1);
  return;
}



// FUNCTION 140fbf2f0 FUN_140fbf2f0 body=768 status=ok
// SIG undefined FUN_140fbf2f0(void)

void FUN_140fbf2f0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  
  if (param_2 == 0) {
    iVar6 = -1;
  }
  else {
    iVar6 = *(int *)(param_2 + 0x2d8);
  }
  if (param_2 == 0) {
LAB_140fbf358:
    param_2 = 0;
  }
  else {
    lVar3 = AReplicationGraphDebugActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140fbf358;
  }
  lVar3 = FUN_141083c60(param_1);
  if (param_2 == 0) {
LAB_140fbf5b1:
    if (lVar3 != 0) {
      if ((param_1[300] != 0) && ((char)param_1[0x113] == '\0')) {
        FUN_140fafa40();
      }
      FUN_1412be240(lVar3,0,0);
    }
    return;
  }
  if ((iVar6 < 0) || ((int)param_1[0x135] <= iVar6)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_140fbf5b1;
  if (lVar3 == 0) {
    return;
  }
  lVar5 = *(longlong *)(param_1[0x134] + (longlong)iVar6 * 8);
  if ((char)param_1[0x1a4] == '\0') {
    FUN_1412be240(lVar3,lVar5,*(undefined1 *)(param_2 + 0x308));
  }
  if ((*(char *)(param_2 + 0x308) == '\0') ||
     (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), lVar3 == 0)) {
    fVar7 = 0.0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    fVar7 = *(float *)(lVar3 + 0x794) + 0.75;
  }
  *(float *)((longlong)param_1 + 0xd1c) = fVar7;
  if (param_1[300] == 0) {
    return;
  }
  FUN_140fd61e0(param_1[300],0,0);
  if (*(char *)(param_2 + 0x308) == '\0') goto LAB_140fbf5a0;
  plVar1 = param_1 + 0xee;
  lVar3 = FWeakObjectPtr::Get(plVar1);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == (int)param_1[0xef]) || (param_1[0xf0] == 0)) goto LAB_140fbf5a0;
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(plVar1,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0xef) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(plVar1);
    if (lVar3 == 0) goto LAB_140fbf5a0;
  }
  lVar4 = UMaterialInstanceDynamic::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar5 = FWeakObjectPtr::Get(plVar1);
    if (lVar5 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 == (int)param_1[0xef]) || (param_1[0xf0] == 0)) goto LAB_140fbf589;
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar1,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0xef) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(plVar1);
      if (lVar5 == 0) goto LAB_140fbf589;
    }
    lVar3 = UMaterialInstanceDynamic::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
LAB_140fbf589:
      FUN_140fdd7a0(param_1[300],0);
      return;
    }
  }
LAB_140fbf5a0:
  FUN_140fdd7a0(param_1[300],lVar5);
  return;
}



// FUNCTION 140fbf5f0 FUN_140fbf5f0 body=187 status=ok
// SIG undefined FUN_140fbf5f0(void)

void FUN_140fbf5f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = 0;
  if (param_2 != 0) {
    lVar3 = FUN_14149d3c0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140fbf645;
  }
  param_2 = lVar5;
LAB_140fbf645:
  lVar3 = FUN_141083c60(param_1);
  if ((param_2 != 0) && (lVar3 != 0)) {
    lVar1 = *(longlong *)(param_2 + 0x2c8);
    if ((lVar1 != 0) && (lVar5 = lVar1 + 0x2e0, lVar5 != 0)) {
      lVar3 = FUN_1412c3130(lVar3);
      if (lVar3 != 0) {
        uVar4 = FWeakObjectPtr::Get(lVar1 + 0x2f8);
        FUN_140fad830(param_1,uVar4);
      }
    }
    FUN_140fde680(param_1,lVar5);
  }
  return;
}



// FUNCTION 140fbf6b0 FUN_140fbf6b0 body=7 status=ok
// SIG undefined FUN_140fbf6b0(void)

void FUN_140fbf6b0(undefined8 param_1)

{
  FUN_140fde680(param_1,0);
  return;
}



// FUNCTION 140fbf6c0 FUN_140fbf6c0 body=842 status=ok
// SIG undefined FUN_140fbf6c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fbf6c0(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if (param_1[0xcb] == 0) {
    return;
  }
  cVar1 = FText::IsEmpty(param_1[0xcb] + 0x38);
  if (cVar1 == '\0') {
    cVar1 = FUN_142ebdc00();
    if ((cVar1 != '\0') && (cVar1 = FUN_142eba870(param_1), cVar1 == '\0')) {
      local_88 = (longlong *)0x0;
      local_78 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = param_1;
        *puVar3 = &PTR_FUN_143f77b70;
      }
      local_b8[0] = &LAB_140faeaf0;
      uVar4 = FUN_1420849a0(param_1,local_68,local_b8);
      FUN_14208d480(param_1,uVar4);
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
      FUN_142eb05b0(param_1);
      return;
    }
    (**(code **)(*param_1 + 0x578))(param_1,0);
    plVar6 = (longlong *)param_1[199];
    if ((plVar6 != (longlong *)0x0) &&
       ((**(code **)(*plVar6 + 0x2b0))(plVar6,param_1[0xcb] + 0x38,1,0), param_1[0xc6] != 0)) {
      local_c8[0] = 0;
      local_c8[1] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
      FGenericPlatformString::Memcpy(local_c8[0],L"matchingGrow",0x1a);
      FUN_142088910(param_1[0xc6],local_c8);
      if (local_c8[0] != 0) {
        FMemory::Free();
      }
    }
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = param_1;
      *puVar3 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = &LAB_140faede0;
  }
  else {
    cVar1 = FUN_142ebe180(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x580))(param_1,1);
      goto LAB_140fbf973;
    }
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = param_1;
      *puVar3 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = &LAB_140faeab0;
  }
  uVar4 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar4);
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
LAB_140fbf973:
  if (param_1[0xc9] != 0) {
    FUN_142088cf0(param_1[0xc9],param_1[0xcb] + 0x50);
  }
  if (param_1[200] != 0) {
    FUN_142088cf0(param_1[200],param_1[0xcb] + 0x60);
  }
  lVar5 = FUN_140eccbe0(param_1);
  if (lVar5 != 0) {
    if (*(char *)(param_1[0xcb] + 0x94) == '\0') {
      FUN_140cc9500(lVar5,param_1);
    }
    else {
      uVar2 = FUN_140ccaa90();
      FUN_140fd3cf0(param_1,uVar2);
    }
  }
  return;
}



// FUNCTION 140fbfa10 FUN_140fbfa10 body=263 status=ok
// SIG undefined FUN_140fbfa10(void)

void FUN_140fbfa10(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  float fVar7;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  if ((param_1[0xe2] != 0) &&
     (cVar2 = FUN_142eb7a60(), cVar2 != *(char *)((longlong)param_1 + 0x731))) {
    lVar1 = *param_1;
    iVar6 = 0;
    local_28 = 0;
    local_20 = 0;
    puVar3 = (undefined8 *)FName::FName(local_res8,"Navigate",1);
    (**(code **)(lVar1 + 0x4e8))(param_1,*puVar3,&local_28);
    LOCK();
    *(undefined4 *)(param_1 + 0xb1) = 1;
    UNLOCK();
    *(char *)((longlong)param_1 + 0x731) = cVar2;
    if (param_1[0xe3] != 0) {
      if ((*(char *)((longlong)param_1 + 0x732) == '\0') || (cVar2 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      plVar4 = (longlong *)(param_1[0xe3] + 0x170);
      (**(code **)(*plVar4 + 0x38))(plVar4,uVar5);
      cVar2 = *(char *)((longlong)param_1 + 0x731);
    }
    if ((cVar2 != '\0') && (param_1[0xe3] != 0)) {
      fVar7 = (float)FUN_1427fe4c0();
      iVar6 = (int)fVar7;
    }
    *(int *)((longlong)param_1 + 0x72c) = iVar6;
    FUN_140fd5590(param_1);
  }
  FUN_140fcf4f0(param_1);
  return;
}



// FUNCTION 140fbfb20 FUN_140fbfb20 body=365 status=ok
// SIG undefined FUN_140fbfb20(void)

void FUN_140fbfb20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong local_res10;
  undefined1 local_48 [8];
  longlong local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  FWeakObjectPtr::operator=(local_48,0);
  local_40 = 0;
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxMayhemMenu::OnMayhemApplyChoiceMade",L"::");
  pwVar5 = (wchar_t *)0x0;
  while (pwVar4 = pwVar6, pwVar4 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar5 = pwVar4;
  }
  FName::FName(&local_res10,pwVar5 + 2,1);
  FWeakObjectPtr::operator=(local_48,param_1);
  local_40 = local_res10;
  if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(local_48), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_40);
  }
  uVar8 = FWeakObjectPtr::Get(param_1 + 0x58c);
  uVar9 = FWeakObjectPtr::Get(param_1 + 0x58c);
  uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_38,L"Apply Changes?",L"GFxMayhemMenu",L"ConfirmApplyMayhem");
  FUN_1410f47a0(uVar9,uVar10,param_1 + 0x7f0,local_48,0,uVar8,0,1,1);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 140fbfc90 FUN_140fbfc90 body=504 status=ok
// SIG undefined FUN_140fbfc90(void)

void FUN_140fbfc90(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 local_res18 [16];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  plVar6 = (longlong *)FName::FName(local_res18,&DAT_144633154,1);
  if ((param_3 == *plVar6) && (lVar7 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c), lVar7 != 0))
  {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (lVar8 = (**(code **)(*param_1 + 0x148))(param_1), lVar8 != 0)) &&
       (lVar8 = UWorld::GetGameState<APVPGameState>(lVar8), lVar8 != 0)) {
      uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
      cVar4 = FUN_140b55160(lVar8 + 0x670,uVar9,lVar7);
      if (cVar4 == '\0') {
        if (*(char *)((longlong)param_1 + 0x731) == '\0') {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)((longlong)param_1 + 0x72c);
        }
        FUN_141460960(lVar7,uVar5,(int)param_1[0xe7]);
        FUN_142ebe450(param_1);
      }
      else {
        FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                  (local_20,L"Update Failed",L"GFxMayhemMenu",L"TravelFailedHeader");
        FUN_140fb1b30(param_1,local_38,cVar4);
        FWeakObjectPtr::operator=(local_48,0);
        local_40 = 0;
        FUN_1410f3960(lVar7,local_20,local_38,local_48,0,lVar7,0);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_30 + 1;
          lVar7 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
        if (local_18 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_18 + 1;
          lVar7 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
      }
    }
  }
  return;
}



// FUNCTION 140fbfe90 FUN_140fbfe90 body=569 status=ok
// SIG undefined FUN_140fbfe90(void)

void FUN_140fbfe90(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (param_3 == DAT_146875010) {
    lVar7 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
    if (lVar7 != 0) {
      lVar8 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((bVar4) && (lVar8 = (**(code **)(*param_1 + 0x148))(param_1), lVar8 != 0)) &&
         (lVar8 = UWorld::GetGameState<APVPGameState>(lVar8), lVar8 != 0)) {
        uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
        cVar5 = FUN_140b55160(lVar8 + 0x670,uVar9,lVar7);
        if (cVar5 == '\0') {
          if (*(char *)((longlong)param_1 + 0x731) == '\0') {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined4 *)((longlong)param_1 + 0x72c);
          }
          FUN_141460960(lVar7,uVar6,(int)param_1[0xe7]);
          if (*(char *)((longlong)param_1 + 0x751) != '\0') {
            *(undefined1 *)((longlong)param_1 + 0x751) = 0;
            FUN_142ebe450(param_1);
          }
        }
        else {
          FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_20,L"Update Failed",L"GFxMayhemMenu",L"TravelFailedHeader");
          FUN_140fb1b30(param_1,local_38,cVar5);
          FWeakObjectPtr::operator=(local_48,0);
          local_40 = 0;
          FUN_1410f3960(lVar7,local_20,local_38,local_48,0,lVar7,0);
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_30 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_30)(local_30);
              LOCK();
              piVar2 = (int *)((longlong)local_30 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_30 + 8))(local_30,1);
              }
            }
          }
          if (local_18 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_18 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_18)(local_18);
              LOCK();
              piVar2 = (int *)((longlong)local_18 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_18 + 8))(local_18,1);
              }
            }
          }
        }
      }
    }
  }
  else if (param_3 != DAT_146875018) {
    return;
  }
  FUN_140fb3680(param_1);
  if ((char)param_1[0xf1] != '\0') {
    FUN_140fbe4a0(param_1 + 0x9b,param_1 + 0xeb);
    FUN_140fd5680(param_1 + 0xeb);
  }
  return;
}



// FUNCTION 140fc00d0 FUN_140fc00d0 body=88 status=ok
// SIG undefined FUN_140fc00d0(void)

void FUN_140fc00d0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  LOCK();
  *(undefined4 *)(param_1 + 0xb1) = 1;
  UNLOCK();
  lVar1 = *param_1;
  local_18 = 0;
  local_10 = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,"Navigate",1);
  (**(code **)(lVar1 + 0x4e8))(param_1,*puVar2,&local_18);
  return;
}



// FUNCTION 140fc0130 FUN_140fc0130 body=139 status=ok
// SIG undefined FUN_140fc0130(void)

void FUN_140fc0130(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_1[0xe3] != 0) {
    fVar3 = (float)FUN_1427fe4c0();
    if ((int)fVar3 != *(int *)((longlong)param_1 + 0x72c)) {
      lVar1 = *param_1;
      local_18 = 0;
      local_10 = 0;
      puVar2 = (undefined8 *)FName::FName(local_res8,"Navigate",1);
      (**(code **)(lVar1 + 0x4e8))(param_1,*puVar2,&local_18);
      *(int *)((longlong)param_1 + 0x72c) = (int)fVar3;
      FUN_140fd5590(param_1);
    }
    FUN_140fcf4f0(param_1);
  }
  return;
}



// FUNCTION 140fc01c0 FUN_140fc01c0 body=190 status=ok
// SIG undefined FUN_140fc01c0(void)

void FUN_140fc01c0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_141096090();
  plVar1 = (longlong *)(param_1 + -0x4d8);
  lVar4 = *plVar1;
  local_18 = 0;
  local_10 = 0;
  puVar3 = (undefined8 *)FName::FName(local_res8,L"StatusMenu_Map_Planet_BG_Start",1);
  (**(code **)(lVar4 + 0x4e8))(plVar1,*puVar3,&local_18);
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FUN_140d97f70();
  }
  lVar4 = FUN_141083c60(plVar1);
  if (lVar4 != 0) {
    cVar2 = (**(code **)(*plVar1 + 0x480))(plVar1);
    if (cVar2 != '\0') {
      FUN_1412d2860(lVar4);
      uVar5 = FWeakObjectPtr::Get(lVar4 + 0x754);
      FWeakObjectPtr::operator=(param_1 + 0x4e8,uVar5);
    }
  }
  FUN_140fd62d0(plVar1);
  return;
}



// FUNCTION 140fc0280 FUN_140fc0280 body=42 status=ok
// SIG undefined FUN_140fc0280(void)

void FUN_140fc0280(longlong param_1)

{
  FUN_141096090();
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FUN_140d97f70();
    return;
  }
  return;
}



// FUNCTION 140fc02b0 FUN_140fc02b0 body=79 status=ok
// SIG undefined FUN_140fc02b0(void)

void FUN_140fc02b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FUN_140d924b0();
  }
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    FUN_140483870(*(longlong *)(param_1 + 0x4f0) + 0x48,param_1 + -0x4d8);
    FUN_1411d8ac0(*(undefined8 *)(param_1 + 0x4f0));
  }
  FUN_142ec7580(param_1);
  return;
}



// FUNCTION 140fc0300 FUN_140fc0300 body=39 status=ok
// SIG undefined FUN_140fc0300(void)

void FUN_140fc0300(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FUN_140d924b0();
  }
  FUN_142ec7580(param_1);
  return;
}



// FUNCTION 140fc0330 FUN_140fc0330 body=250 status=ok
// SIG undefined FUN_140fc0330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fc0330(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar1 = param_1 + -0x4d8;
  FWeakObjectPtr::operator=(&local_88,lVar1);
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8920;
    puVar2[1] = lVar1;
    *(undefined4 *)(puVar2 + 2) = local_88;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_84;
  }
  local_78[0] = &LAB_140faecc0;
  FUN_14208c260(lVar1,local_78);
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 140fc0430 FUN_140fc0430 body=282 status=ok
// SIG undefined FUN_140fc0430(void)

void FUN_140fc0430(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x1e0);
  if (lVar1 != 0) {
    FWeakObjectPtr::operator=(lVar1 + 0x1f0,0);
    *(undefined8 *)(lVar1 + 0x1f8) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x1e8);
  if (lVar1 != 0) {
    FWeakObjectPtr::operator=(lVar1 + 0x1f0,0);
    *(undefined8 *)(lVar1 + 0x1f8) = 0;
  }
  uVar3 = FUN_1404b03b0();
  FText::operator=(param_1 + 0x2d0,uVar3);
  uVar3 = FUN_1404b03b0();
  FText::operator=(param_1 + 0x2e8,uVar3);
  uVar3 = FUN_1404b03b0();
  FText::operator=(param_1 + 0x300,uVar3);
  *(undefined4 *)(param_1 + 0x318) = 0xffffffff;
  uVar3 = FUN_1404b03b0();
  FText::operator=(param_1 + 800,uVar3);
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    lVar4 = FUN_142f71d80();
    lVar1 = *(longlong *)(param_1 + 0x2b8);
    for (lVar2 = lVar1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar4) {
        if (lVar1 != 0) {
          FUN_140fd50b0(param_1 + -0x4d8,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
        }
        break;
      }
    }
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 140fc0550 FUN_140fc0550 body=340 status=ok
// SIG undefined FUN_140fc0550(void)

void FUN_140fc0550(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 local_28;
  longlong *local_20;
  longlong local_18;
  undefined8 local_10;
  
  lVar7 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar7 = FUN_140bb7440(lVar7);
      TBaseMulticastDelegate<void>::Remove(lVar7 + 0xc0,*(undefined8 *)(param_1 + 0x4d8));
    }
  }
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x488);
  if (cVar6 != '\0') {
    lVar7 = param_1 + -0x4d8;
    local_18 = lVar7;
    if (lVar7 == 0) {
      local_10 = 0;
    }
    else {
      uVar9 = FUN_142f768a0();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar9);
    }
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x488);
    FUN_142f6e000(uVar9,&local_18);
  }
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x4c8) != &local_28) {
    *(undefined8 *)(param_1 + 0x4c8) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x4d0,&local_20);
    plVar5 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 140fc06b0 FUN_140fc06b0 body=1177 status=ok
// SIG undefined FUN_140fc06b0(void)

void FUN_140fc06b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 local_res10 [8];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong *local_48;
  
  plVar8 = (longlong *)0x0;
  FUN_1410975c0();
  plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb4);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_140fc0728;
  }
  plVar4 = plVar8;
LAB_140fc0728:
  plVar12 = (longlong *)(param_1 + -0x4d8);
  uVar6 = (**(code **)(*plVar12 + 0x148))(plVar12);
  uVar6 = FUN_142f6c9f0(uVar6);
  FWeakObjectPtr::operator=(param_1 + 0x488,uVar6);
  plVar7 = plVar8;
  if (plVar4 != (longlong *)0x0) {
    uVar6 = FUN_14146c130();
    plVar7 = (longlong *)(**(code **)(*plVar4 + 0x628))(plVar4,uVar6);
  }
  FWeakObjectPtr::operator=(param_1 + 0x490,plVar7);
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x488);
  if (cVar3 != '\0') {
    local_78 = plVar12;
    if (plVar12 != (longlong *)0x0) {
      uVar6 = FUN_142f768a0();
      plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar12,uVar6);
    }
    local_70 = plVar8;
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x488);
    FUN_142f690f0(uVar6,&local_78,1);
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar5 != 0) {
    lVar9 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) {
      uStack_80 = (longlong *)((ulonglong)uStack_80._4_4_ << 0x20);
      local_88 = &LAB_140fb8e40;
      lVar9 = FUN_140bb7440(lVar5);
      plVar4 = (longlong *)(lVar9 + 0xc0);
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      local_48 = plVar8;
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar8 + 1,plVar12);
        *(undefined4 *)(plVar8 + 2) = (undefined4)local_88;
        *(undefined4 *)((longlong)plVar8 + 0x14) = local_88._4_4_;
        *(undefined4 *)(plVar8 + 3) = (undefined4)uStack_80;
        *(uint *)((longlong)plVar8 + 0x1c) = uStack_80._4_4_;
        lVar10 = FDelegateHandle::GenerateNewID();
        plVar8[5] = lVar10;
        *plVar8 = (longlong)&PTR_FUN_143f77bd0;
      }
      uVar6 = 0;
      if (plVar8 != (longlong *)0x0) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
        puVar11 = (undefined8 *)(**(code **)(*plVar8 + 0x20))(plVar8,local_res10);
        iVar2 = *(int *)(lVar9 + 200);
        uVar6 = *puVar11;
        *(int *)(lVar9 + 200) = iVar2 + 1;
        if (*(int *)(lVar9 + 0xcc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar2);
        }
        puVar11 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar4);
        *puVar11 = plVar8;
        *(undefined4 *)(puVar11 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x4d8) = uVar6;
      cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xb4);
      bVar13 = cVar3 == '\0';
      if (bVar13) {
        plVar4 = &local_88;
        lVar9 = 0;
        local_88 = (undefined1 *)0x0;
        uStack_80 = (longlong *)0x0;
      }
      else {
        uVar6 = FWeakObjectPtr::Get(param_1 + 0xb4);
        plVar4 = (longlong *)FUN_142dcf3a0(uVar6,local_58);
        lVar9 = *plVar4;
      }
      plVar12 = (longlong *)0x0;
      plVar8 = (longlong *)plVar4[1];
      plVar4[1] = 0;
      *plVar4 = 0;
      plVar4 = uStack_80;
      if ((bVar13) && (uStack_80 != (longlong *)0x0)) {
        LOCK();
        plVar7 = uStack_80 + 1;
        lVar10 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*uStack_80)(uStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*uStack_80 + 8))(uStack_80,1);
          }
        }
      }
      if ((!bVar13) && (local_50 != (longlong *)0x0)) {
        LOCK();
        plVar4 = local_50 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
      if (lVar9 != 0) {
        lVar10 = operator_new(0x30);
        if (lVar10 == 0) {
          bVar13 = false;
          plVar4 = plVar12;
        }
        else {
          local_a8 = (undefined4)lVar9;
          uStack_a4 = (undefined4)((ulonglong)lVar9 >> 0x20);
          uStack_a0 = SUB84(plVar8,0);
          uStack_9c = (undefined4)((ulonglong)plVar8 >> 0x20);
          local_68 = local_a8;
          uStack_64 = uStack_a4;
          uStack_60 = uStack_a0;
          uStack_5c = uStack_9c;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          plVar4 = (longlong *)FUN_140d646b0(lVar10,lVar5,&local_68);
          bVar13 = true;
        }
        plVar7 = (longlong *)operator_new(0x18);
        if (plVar7 != (longlong *)0x0) {
          *(undefined4 *)(plVar7 + 1) = 1;
          *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
          *plVar7 = (longlong)&PTR_FUN_1446487c8;
          plVar7[2] = (longlong)plVar4;
          plVar12 = plVar7;
        }
        local_98 = plVar4;
        local_90 = plVar12;
        SharedPointerInternals::EnableSharedFromThis(&local_98,plVar4,plVar4);
        if ((longlong **)(param_1 + 0x4c8) != &local_98) {
          *(longlong **)(param_1 + 0x4c8) = plVar4;
          local_98 = (longlong *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x4d0,&local_90);
          plVar12 = local_90;
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar12 + 1;
          lVar5 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        if ((bVar13) &&
           (plVar4 = (longlong *)CONCAT44(uStack_5c,uStack_60), plVar4 != (longlong *)0x0)) {
          LOCK();
          plVar12 = plVar4 + 1;
          lVar5 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
        }
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar8 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
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
    }
  }
  return;
}



// FUNCTION 140fc0b50 FUN_140fc0b50 body=525 status=ok
// SIG undefined FUN_140fc0b50(void)

void FUN_140fc0b50(longlong *param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_48 [8];
  undefined8 local_40;
  longlong *plStack_38;
  undefined1 local_30;
  
  FUN_142ec8c70();
  FUN_140fca7e0(param_1 + -0x9b);
  FUN_140fcab00(param_1 + -0x9b);
  if ((param_1[0x8f] != 0) && ((char)param_1[0x10b] == '\x02')) {
    FUN_142ec23c0(param_1[0x8f],param_2);
  }
  if (((((char)param_1[0x82] != '\0') && (lVar5 = param_1[0x8e], lVar5 != 0)) &&
      (*(longlong *)(lVar5 + 0x178) != 0)) &&
     ((*(longlong *)(lVar5 + 0x170) != 0 && (0.0 < *(float *)((longlong)param_1 + 0x414))))) {
    param_2 = *(float *)((longlong)param_1 + 0x414) - param_2;
    *(float *)((longlong)param_1 + 0x414) = param_2;
    FUN_142f0ead0(*(undefined8 *)(lVar5 + 0x170),param_2 / *(float *)(param_1 + 0x83));
    if (*(float *)((longlong)param_1 + 0x414) <= 0.0) {
      FName::FName(&local_58,&DAT_143f3eda8,1);
      local_50 = 0xffffffff;
      local_4c = 0;
      FName::FName(local_48,&DAT_143f3eda8,1);
      local_58 = DAT_146b3e2a8;
      local_40 = 0;
      plStack_38 = (longlong *)0x0;
      local_30 = 0;
      local_4c = 1;
      (**(code **)(*param_1 + 0xc0))(param_1,&local_58);
      plVar3 = plStack_38;
      if (plStack_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_38 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_38)(plStack_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  if (((char)param_1[0x10b] == '\x02') && ((char)param_1[0x78] == '\0')) {
    FUN_140fdfe00(param_1 + -0x9b);
    puVar6 = (undefined8 *)FUN_140ad4c90(param_1 + -0x9b,local_68);
    FUN_142033230(*puVar6);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_60 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140fc0d60 FUN_140fc0d60 body=252 status=ok
// SIG undefined FUN_140fc0d60(void)

void FUN_140fc0d60(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_142ec8c70();
  lVar6 = 0;
  LOCK();
  iVar2 = *(int *)(param_1 + 0x4c0);
  *(int *)(param_1 + 0x4c0) = 0;
  UNLOCK();
  if (iVar2 != 0) {
    FUN_140fd23f0(param_1 + -0x4d8);
  }
  if (*(char *)(param_1 + 0x418) == '\0') {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xb4);
    if (cVar1 == '\0') {
      uVar4 = (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x148))(param_1 + -0x4d8);
    }
    else {
      plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb4);
      uVar4 = (**(code **)(*plVar3 + 0x148))(plVar3);
    }
    lVar5 = FUN_140c12480(uVar4);
    if (lVar5 != 0) {
      lVar6 = UNiagaraSystem::GetEffectType(lVar5);
    }
    lVar5 = FUN_140f9aee0(param_1 + -0x4d8);
    if ((((lVar6 != 0) && (lVar5 != 0)) &&
        ((iVar2 = FUN_14046e5c0(lVar5), 1 < iVar2 || (cVar1 = FUN_140bc2c90(lVar5), cVar1 != '\0')))
        ) && (lVar5 = FUN_140aabbe0(lVar6), lVar5 != 0)) {
      FUN_140ab8470(lVar6);
    }
    *(undefined1 *)(param_1 + 0x418) = 1;
    return;
  }
  return;
}



// FUNCTION 140fc0e60 FUN_140fc0e60 body=136 status=ok
// SIG undefined FUN_140fc0e60(void)

undefined8 FUN_140fc0e60(longlong param_1)

{
  char cVar1;
  longlong local_18 [2];
  
  cVar1 = FUN_142ec8d60();
  if (cVar1 != '\0') {
    if ((*(char *)(param_1 + 0x470) == '\x01') && (*(longlong *)(param_1 + 0x3c0) != 0)) {
      local_18[1] = 10;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"menuIntro",0x14);
      FUN_142088910(*(undefined8 *)(param_1 + 0x3c0),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 140fc0ef0 FUN_140fc0ef0 body=115 status=ok
// SIG undefined FUN_140fc0ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fc0ef0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [624];
  ulonglong local_18;
  
  if (param_2 != 0) {
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
    FUN_1412b1120(local_288);
    FUN_140fadef0(param_1,local_288,*(undefined8 *)(param_2 + 0x180));
    FUN_140fa04a0(local_288);
  }
  return;
}



// FUNCTION 140fc0f70 FUN_140fc0f70 body=137 status=ok
// SIG undefined FUN_140fc0f70(void)

void FUN_140fc0f70(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res8);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_140faeb20;
  FUN_14208c4f0(param_1,local_58);
  return;
}



// FUNCTION 140fc1000 FUN_140fc1000 body=106 status=ok
// SIG undefined FUN_140fc1000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fc1000(longlong param_1,longlong param_2)

{
  undefined1 auStack_2b8 [32];
  undefined1 *local_298 [2];
  undefined1 local_288 [624];
  ulonglong local_18;
  
  if (param_2 != 0) {
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
    FUN_1412b1120(local_288);
    local_298[0] = local_288;
    FUN_140f9e970(param_1 + 0xce0,local_298);
    FUN_140fa04a0(local_288);
  }
  return;
}



// FUNCTION 140fc1070 FUN_140fc1070 body=366 status=ok
// SIG undefined FUN_140fc1070(void)

void FUN_140fc1070(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong local_38;
  uint local_30;
  uint local_2c;
  
  if (param_2 != 0) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x6f0));
    lVar2 = *(longlong *)(param_1 + 0x6e0);
    uVar4 = 0;
    local_38 = 0;
    lVar9 = (longlong)*(int *)(param_1 + 0x6e8) * 0xd0 + lVar2;
    local_2c = 0;
    uVar7 = uVar4;
    if (lVar2 != lVar9) {
      uVar8 = uVar4;
      do {
        cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                          (lVar2 + 0x98,param_2 + 0x218);
        if ((cVar1 != '\0') && ((*(char *)(lVar2 + 0xa9) - 2U & 0xfd) == 0)) {
          iVar5 = (int)uVar7;
          local_30 = iVar5 + 1;
          if ((int)uVar8 < (int)local_30) {
            TArray<FSpriteDrawCallRecord,FDefaultAllocator>::ResizeGrow(&local_38,uVar7);
            uVar8 = (ulonglong)local_2c;
            uVar4 = local_38;
          }
          uVar7 = (ulonglong)local_30;
          FUN_140f9f450((longlong)iVar5 * 0xd0 + uVar4,lVar2);
        }
        lVar2 = lVar2 + 0xd0;
      } while (lVar2 != lVar9);
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x6f0));
    if (0 < (int)uVar7) {
      FUN_140fd54c0(param_1,uVar4);
    }
    if ((int)uVar7 != 0) {
      plVar3 = (longlong *)(uVar4 + 8);
      do {
        if (plVar3[0x17] != 0) {
          FMemory::Free();
        }
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 0x1a;
        uVar6 = (int)uVar7 - 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 != 0);
    }
    if (uVar4 != 0) {
      FMemory::Free(uVar4);
    }
  }
  return;
}



// FUNCTION 140fc11e0 FUN_140fc11e0 body=723 status=ok
// SIG undefined FUN_140fc11e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fc11e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  longlong *local_118;
  char local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined7 local_ec;
  char cStack_e5;
  undefined2 local_e4;
  undefined1 local_e2;
  undefined4 local_e0;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  iVar8 = -1;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x2d8);
  }
  bVar3 = false;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x930));
  LOCK();
  *(int *)(param_1 + 0x93c) = *(int *)(param_1 + 0x93c) + 1;
  UNLOCK();
  local_128[0] = 0;
  FText::FText(local_120);
  local_108 = '\0';
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0xffffffff;
  local_ec = 0;
  cStack_e5 = '\0';
  local_e4 = 0;
  local_e2 = 0;
  local_e0 = 0;
  if ((-1 < iVar8) && (iVar8 < *(int *)(param_1 + 0x928))) {
    puVar9 = (undefined1 *)((longlong)iVar8 * 0x50 + *(longlong *)(param_1 + 0x920));
    local_128[0] = *puVar9;
    FText::operator=(local_120,puVar9 + 8);
    local_108 = puVar9[0x20];
    bVar3 = true;
    local_100 = *(longlong *)(puVar9 + 0x28);
    local_f8 = *(undefined8 *)(puVar9 + 0x30);
    local_f0 = *(undefined4 *)(puVar9 + 0x38);
    local_ec = *(undefined7 *)(puVar9 + 0x3c);
    cStack_e5 = puVar9[0x43];
    local_e4 = *(undefined2 *)(puVar9 + 0x44);
    local_e2 = puVar9[0x46];
    local_e0 = *(undefined4 *)(puVar9 + 0x48);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x930));
  LOCK();
  *(int *)(param_1 + 0x93c) = *(int *)(param_1 + 0x93c) + -1;
  UNLOCK();
  if (bVar3) {
    if (local_108 == '\0') {
      cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x968);
      if ((cVar4 != '\0') && (local_100 != 0)) {
        lVar5 = FUN_142f71d80();
        for (lVar2 = local_100; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == lVar5) {
            if (cStack_e5 == '\0') {
              uVar7 = FWeakObjectPtr::Get(param_1 + 0x968);
              FUN_142f7b710(uVar7,local_100);
            }
            break;
          }
        }
      }
      local_a8 = (longlong *)0x0;
      local_98 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = param_1;
        *puVar6 = &PTR_FUN_143f77b70;
      }
      local_d8[0] = &LAB_140faec90;
      uVar7 = FUN_1420849a0(param_1,local_88,local_d8);
      FUN_14208c260(param_1,uVar7);
      if (local_48 != 0) {
        plVar10 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar10 = local_58;
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_98 != 0) {
        plVar10 = local_c8;
        if (local_a8 != (longlong *)0x0) {
          plVar10 = local_a8;
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10,0);
        }
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    else {
      FUN_140fca1e0(param_1,local_128);
    }
  }
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_118 + 1;
    lVar2 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)local_118 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_118 + 8))(local_118,1);
      }
    }
  }
  return;
}



// FUNCTION 140fc14c0 FUN_140fc14c0 body=983 status=ok
// SIG undefined FUN_140fc14c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fc14c0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_158 [32];
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  longlong *local_128;
  char local_118;
  undefined8 local_110;
  longlong local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined2 local_f4;
  undefined1 local_f2;
  undefined4 local_f0;
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined1 local_98 [16];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  FUN_140fd22d0(param_1,1);
  if (param_2 == 0) {
    return;
  }
  lVar5 = UMobBaseAnim::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
      != lVar5 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  if (*(longlong *)(param_1 + 0x860) == 0) {
    return;
  }
  FUN_142ed3eb0(param_2,0);
  iVar2 = *(int *)(param_2 + 0x2d8);
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x930));
  LOCK();
  *(int *)(param_1 + 0x93c) = *(int *)(param_1 + 0x93c) + 1;
  UNLOCK();
  local_138[0] = 0;
  FText::FText(local_130);
  local_118 = '\0';
  local_110 = 0;
  local_108 = 0;
  local_100 = 0xffffffff;
  local_fc = 0;
  local_f4 = 0;
  local_f2 = 0;
  local_f0 = 0;
  if ((iVar2 < 0) || (*(int *)(param_1 + 0x928) <= iVar2)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    FUN_140fa0ea0(local_138,(longlong)iVar2 * 0x50 + *(longlong *)(param_1 + 0x920));
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x930));
  LOCK();
  *(int *)(param_1 + 0x93c) = *(int *)(param_1 + 0x93c) + -1;
  UNLOCK();
  if (!bVar3) goto LAB_140fc183c;
  if (local_118 == '\0') {
    if (local_108 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x908);
      if (lVar5 != 0) {
        plVar8 = *(longlong **)(lVar5 + 0x1a8);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x278))(plVar8,*(undefined1 *)(lVar5 + 0x1e0));
          lVar5 = *(longlong *)(param_1 + 0x908);
        }
        FWeakObjectPtr::IsValid(lVar5 + 0x1d8);
      }
      local_b8 = (longlong *)0x0;
      local_a8 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = param_1;
        *puVar6 = &PTR_FUN_143f77b70;
      }
      local_e8[0] = &LAB_140faeb50;
      uVar7 = FUN_1420849a0(param_1,local_98,local_e8);
      FUN_14208c260(param_1,uVar7);
      if (local_58 != 0) {
        plVar8 = local_88;
        if (local_68 != (longlong *)0x0) {
          plVar8 = local_68;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_a8 != 0) {
        plVar8 = local_d8;
        if (local_b8 != (longlong *)0x0) {
          plVar8 = local_b8;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  else if ((local_118 == '\x01') && (*(longlong *)(param_1 + 0x910) != 0)) {
    cVar4 = FWeakObjectPtr::IsValid(&local_100);
    if (cVar4 != '\0') {
      FWeakObjectPtr::Get(&local_100);
    }
    lVar5 = *(longlong *)(param_1 + 0x910);
    plVar8 = *(longlong **)(lVar5 + 0x1a8);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x278))(plVar8,*(undefined1 *)(lVar5 + 0x1e0));
      lVar5 = *(longlong *)(param_1 + 0x910);
    }
    FWeakObjectPtr::IsValid(lVar5 + 0x1d8);
  }
  FUN_140fcd270(param_2,local_138);
  if ((((*(char *)(param_1 + 0x948) == '\x01') || (*(longlong *)(param_1 + 0x910) == 0)) ||
      (*(longlong *)(param_1 + 0x860) == 0)) ||
     ((*(longlong *)(param_1 + 0x8e0) == 0 ||
      (*(longlong *)(*(longlong *)(param_1 + 0x910) + 0x170) == 0)))) goto LAB_140fc183c;
  cVar4 = FWeakObjectPtr::IsValid(&local_100);
  if (cVar4 == '\0') {
LAB_140fc1823:
    uVar7 = 0;
  }
  else {
    uVar7 = FWeakObjectPtr::Get(&local_100);
    cVar4 = FUN_140e27890(uVar7,*(undefined8 *)(param_1 + 0x860));
    if (((cVar4 == '\0') || (*(longlong *)(param_1 + 0x8e0) == 0)) ||
       (*(char *)(*(longlong *)(param_1 + 0x8e0) + 0x200) == '\0')) goto LAB_140fc1823;
    uVar7 = 1;
  }
  plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x910) + 0x170);
  (**(code **)(*plVar8 + 0x278))(plVar8,uVar7);
LAB_140fc183c:
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_128 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar1 = (int *)((longlong)local_128 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_128 + 8))(local_128,1);
      }
    }
  }
  return;
}



// FUNCTION 140fc18a0 FUN_140fc18a0 body=125 status=ok
// SIG undefined FUN_140fc18a0(void)

void FUN_140fc18a0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = URemnantGameInstance::GetPrivateStaticClass();
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
      if (*(char *)(param_1 + 0xa51) == '\x06') {
        FUN_140fd6950(param_1,*(undefined1 *)(param_2 + 0x308));
      }
      FUN_140fc2560(param_1,*(undefined1 *)(param_2 + 0x308));
    }
  }
  return;
}



// FUNCTION 140fc1920 FUN_140fc1920 body=210 status=ok
// SIG undefined FUN_140fc1920(void)

void FUN_140fc1920(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    lVar4 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_140fb2b60(param_1,*(undefined1 *)(param_2 + 0x308));
      plVar2 = *(longlong **)(param_1 + 0x8e8);
      if (plVar2 != (longlong *)0x0) {
        cVar1 = *(char *)(param_2 + 0x308);
        lVar4 = *plVar2;
        if (cVar1 == '\x02') {
          (**(code **)(lVar4 + 0x2b0))(plVar2,param_1 + 0x760);
        }
        else if (cVar1 == '\x04') {
          (**(code **)(lVar4 + 0x2b0))(plVar2,param_1 + 0x730);
        }
        else {
          lVar5 = param_1 + 0x778;
          if (cVar1 != '\x01') {
            lVar5 = param_1 + 0x748;
          }
          (**(code **)(lVar4 + 0x2b0))(plVar2,lVar5,1,0);
        }
      }
    }
  }
  FUN_140fd22d0(param_1,0);
  return;
}



// FUNCTION 140fc1a00 FUN_140fc1a00 body=813 status=ok
// SIG undefined FUN_140fc1a00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fc1a00(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
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
  if (param_2 == 0) {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x2d8);
  lVar4 = AReplicationGraphDebugActor::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
      != lVar4 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x9b8) <= iVar1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  if (*(char *)(param_2 + 0x308) == '\0') {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x9b0) + (longlong)iVar1 * 8);
    if (*(char *)(param_1 + 0x898) == '\0') {
      FWeakObjectPtr::operator=(&local_e8,uVar2);
      FWeakObjectPtr::operator=(&local_f0,param_1);
      local_58 = (longlong *)0x0;
      local_48 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x28,local_78);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &PTR_FUN_1446486f0;
        puVar6[1] = param_1;
        *(undefined4 *)(puVar6 + 2) = local_f0;
        *(undefined4 *)((longlong)puVar6 + 0x14) = local_ec;
        *(undefined4 *)(puVar6 + 3) = local_e8;
        *(undefined4 *)((longlong)puVar6 + 0x1c) = local_e4;
        *(undefined1 *)(puVar6 + 4) = 0;
      }
      local_88[0] = &LAB_140faeac0;
      FUN_14208c260(param_1,local_88);
      plVar7 = local_58;
      if (local_48 != 0) {
        plVar8 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar8 = local_58;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
          plVar7 = local_58;
        }
      }
    }
    else {
      FWeakObjectPtr::operator=(&local_f8,uVar2);
      FWeakObjectPtr::operator=(&local_100,param_1);
      local_a8 = (longlong *)0x0;
      local_98 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &PTR_FUN_144605c80;
        puVar6[1] = param_1;
        *(undefined4 *)(puVar6 + 2) = local_100;
        *(undefined4 *)((longlong)puVar6 + 0x14) = local_fc;
        *(undefined4 *)(puVar6 + 3) = local_f8;
        *(undefined4 *)((longlong)puVar6 + 0x1c) = local_f4;
      }
      local_d8[0] = &LAB_140faec80;
      FUN_14208c260(param_1,local_d8);
      plVar7 = local_a8;
      if (local_98 != 0) {
        plVar8 = local_c8;
        if (local_a8 != (longlong *)0x0) {
          plVar8 = local_a8;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
          plVar7 = local_a8;
        }
      }
    }
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    FMemory::Free();
    return;
  }
  lVar4 = param_1 + 0x770;
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x778)) &&
       (local_108 = 0, *(longlong *)(param_1 + 0x780) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x778) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 != 0) goto LAB_140fc1b23;
    }
  }
  else {
LAB_140fc1b23:
    lVar4 = UMaterialInstanceDynamic::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140fc1b5c;
  }
  lVar5 = 0;
LAB_140fc1b5c:
  FUN_140fb2a40(param_1,lVar5,1);
  return;
}



// FUNCTION 140fc1d30 FUN_140fc1d30 body=1667 status=ok
// SIG undefined FUN_140fc1d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fc1d30(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  float fVar12;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong local_130 [2];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if (param_1[0x1a5] == 0) {
LAB_140fc1da5:
    iVar8 = -1;
    if (param_2 != 0) {
      iVar8 = *(int *)(param_2 + 0x2d8);
    }
  }
  else {
    plVar11 = (longlong *)param_1[0x136];
    for (plVar9 = plVar11; plVar9 != plVar11 + (int)param_1[0x137]; plVar9 = plVar9 + 1) {
      if (*plVar9 == param_1[0x1a5]) {
        uVar10 = (longlong)plVar9 - (longlong)plVar11 >> 3;
        iVar8 = (int)uVar10;
        if (iVar8 != -1) {
          (**(code **)(*(longlong *)param_1[0x11c] + 0x2b8))
                    ((longlong *)param_1[0x11c],uVar10 & 0xffffffff,1);
        }
        goto LAB_140fc1d99;
      }
    }
    iVar8 = -1;
LAB_140fc1d99:
    param_1[0x1a5] = 0;
    if (iVar8 == -1) goto LAB_140fc1da5;
  }
  if ((iVar8 < 0) || ((int)param_1[0x137] <= iVar8)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((!bVar1) || (param_2 == 0)) {
LAB_140fc22f1:
    if ((char)param_1[0x113] != '\0') {
      FWeakObjectPtr::operator=(&local_110,param_1);
      local_68 = (longlong *)0x0;
      local_58 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_88);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_1444f8920;
        puVar4[1] = param_1;
        *(undefined4 *)(puVar4 + 2) = local_110;
        *(undefined4 *)((longlong)puVar4 + 0x14) = local_10c;
      }
      local_98[0] = &LAB_140faead0;
      FUN_14208c260(param_1,local_98);
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
    }
    if ((param_1[300] != 0) && ((char)param_1[0x113] == '\0')) {
      FUN_140fafa40();
    }
    return;
  }
  lVar3 = AReplicationGraphDebugActor::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
      != lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_140fc22f1;
  lVar3 = *(longlong *)(param_1[0x136] + (longlong)iVar8 * 8);
  if ((char)param_1[0x113] == '\0') {
    lVar6 = FUN_141083c60(param_1);
    if (lVar6 != 0) {
      lVar7 = FUN_142eb65a0(param_1);
      if (lVar7 == 0) {
LAB_140fc1f91:
        lVar7 = 0;
      }
      else {
        lVar5 = UGameInstanceGameParameters::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140fc1f91;
      }
      if (((*(char *)(lVar6 + 0x9f8) == '\0') || (lVar7 != 0)) && ((char)param_1[0x1a4] == '\0')) {
        FUN_1412be2d0(lVar6,lVar3,*(undefined1 *)(param_2 + 0x308));
      }
    }
  }
  else {
    FWeakObjectPtr::operator=(&local_118,lVar3);
    FWeakObjectPtr::operator=(&local_120,param_1);
    local_100 = local_120;
    local_fc = local_11c;
    local_f8 = local_118;
    local_f4 = local_114;
    local_b8 = (longlong *)0x0;
    local_a8 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x20,local_d8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_144605c80;
      puVar4[1] = param_1;
      *(undefined4 *)(puVar4 + 2) = local_120;
      *(undefined4 *)((longlong)puVar4 + 0x14) = local_11c;
      *(undefined4 *)(puVar4 + 3) = local_118;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = local_114;
    }
    local_e8[0] = &LAB_140faee00;
    FUN_14208c260(param_1,local_e8);
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
  if ((*(char *)(param_2 + 0x308) == '\0') ||
     (lVar6 = (**(code **)(*param_1 + 0x148))(param_1), lVar6 == 0)) {
    fVar12 = 0.0;
  }
  else {
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    fVar12 = *(float *)(lVar6 + 0x794) + 0.75;
  }
  *(float *)((longlong)param_1 + 0xd1c) = fVar12;
  if (param_1[300] == 0) {
    return;
  }
  FUN_140fd61e0(param_1[300],0,0);
  if (*(char *)(param_2 + 0x308) == '\0') goto LAB_140fc21cb;
  plVar11 = param_1 + 0xee;
  lVar6 = FWeakObjectPtr::Get(plVar11);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == (int)param_1[0xef]) || (local_138 = 0, param_1[0xf0] == 0))
    goto LAB_140fc21cb;
    lVar6 = FUN_141796df0();
    FWeakObjectPtr::operator=(plVar11,lVar6);
    if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0xef) = DAT_1464b56f4;
    }
    lVar6 = FWeakObjectPtr::Get(plVar11);
    if (lVar6 == 0) goto LAB_140fc21cb;
  }
  lVar7 = UMaterialInstanceDynamic::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
LAB_140fc21cb:
    lVar6 = param_1[300];
    if (lVar3 == 0) {
      return;
    }
    if (*(longlong *)(lVar6 + 0x38) == 0) {
      return;
    }
    FUN_140fd61e0(lVar6,0,0);
    FUN_140fd5ac0(lVar6,5);
    plVar11 = *(longlong **)(lVar6 + 0x180);
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x2b0))(plVar11,lVar3 + 0x30,1,0);
    }
    plVar11 = *(longlong **)(lVar6 + 0x188);
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x2b0))(plVar11,lVar3 + 0x48,1,0);
    }
    plVar11 = *(longlong **)(lVar6 + 400);
    if ((plVar11 != (longlong *)0x0) && (*(longlong *)(lVar6 + 0x1a8) != 0)) {
      (**(code **)(*plVar11 + 0x2b0))(plVar11,lVar3 + 0x60,1,0);
      iVar8 = *(int *)(lVar6 + 0x2a4);
      iVar2 = FUN_142eed950(*(undefined8 *)(lVar6 + 400));
      iVar2 = iVar2 + 1;
      if (iVar2 < 1) {
        iVar8 = 1;
      }
      else if (iVar2 < iVar8) {
        iVar8 = iVar2;
      }
      FUN_142088ee0(*(undefined8 *)(lVar6 + 0x1a8),iVar8);
    }
    local_130[0] = 0;
    local_130[1] = 0x1c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_130,0);
    FGenericPlatformString::Memcpy(local_130[0],L"ExtConceptArtTexture_nopack",0x38);
    (**(code **)(**(longlong **)(lVar6 + 0x38) + 0x2a0))
              (*(longlong **)(lVar6 + 0x38),local_130,*(undefined8 *)(lVar3 + 0xf8));
    if (local_130[0] == 0) {
      return;
    }
    FMemory::Free();
    return;
  }
  lVar3 = FWeakObjectPtr::Get(plVar11);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != (int)param_1[0xef]) && (local_138 = 0, param_1[0xf0] != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(plVar11,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0xef) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(plVar11);
      if (lVar3 != 0) goto LAB_140fc215f;
    }
  }
  else {
LAB_140fc215f:
    lVar6 = UMaterialInstanceDynamic::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140fc2198;
  }
  lVar3 = 0;
LAB_140fc2198:
  FUN_140fdd7a0(param_1[300],lVar3);
  return;
}



// FUNCTION 140fc23c0 FUN_140fc23c0 body=215 status=ok
// SIG undefined FUN_140fc23c0(void)

void FUN_140fc23c0(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (*(longlong *)(param_1 + 0x910) != 0) {
    iVar3 = FUN_142eb7440();
    iVar7 = 0;
    if (0 < iVar3) {
      do {
        lVar4 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x910),iVar7);
        if (lVar4 != 0) {
          lVar5 = FUN_141369c80();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (((bVar1) && (*(longlong *)(lVar4 + 0x348) != 0)) &&
             (cVar2 = (*(code *)**(undefined8 **)*param_2)(), cVar2 != '\0')) {
            uVar6 = FUN_140f9aee0(param_1);
            FUN_140fe0110(lVar4,uVar6);
            return;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar3);
    }
  }
  return;
}



// FUNCTION 140fc24a0 FUN_140fc24a0 body=80 status=ok
// SIG undefined FUN_140fc24a0(void)

void FUN_140fc24a0(undefined8 param_1)

{
  undefined8 *puVar1;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = FUN_140fae970;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 140fc24f0 FUN_140fc24f0 body=104 status=ok
// SIG undefined FUN_140fc24f0(void)

void FUN_140fc24f0(longlong param_1,char param_2)

{
  if ((param_2 != *(char *)(param_1 + 0xa50)) && (*(longlong *)(param_1 + 0x908) != 0)) {
    *(char *)(param_1 + 0xa50) = param_2;
    if (param_2 == '\x01') {
      FUN_140fb6770(param_1);
    }
    else if (param_2 == '\x02') {
      FUN_140fb70f0(param_1);
    }
    else if (param_2 == '\x03') {
      FUN_140fb5e60(param_1);
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x588) = 1;
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x6c0) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140fc2560 FUN_140fc2560 body=1177 status=ok
// SIG undefined FUN_140fc2560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140fc2560(longlong param_1,byte param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  byte *pbVar13;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8 [3];
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  cVar6 = *(char *)(param_1 + 0xa51);
  *(char *)(param_1 + 0xa52) = cVar6;
  *(byte *)(param_1 + 0xa51) = param_2;
  if (cVar6 == '\t') {
    FUN_140fde320();
    lVar8 = FUN_141083c60(param_1);
    if (lVar8 != 0) {
      FUN_1412cd330(lVar8);
    }
    FUN_140fd5370(param_1);
    param_2 = *(byte *)(param_1 + 0xa51);
  }
  uVar9 = 0;
  if (*(int *)(param_1 + 0x6f8) != *(int *)(param_1 + 0x724)) {
    lVar8 = *(longlong *)(param_1 + 0x730);
    if (*(longlong *)(param_1 + 0x730) == 0) {
      lVar8 = param_1 + 0x728;
    }
    iVar7 = *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x738) - 1U & (ulonglong)param_2) * 4);
    if (iVar7 != -1) {
      do {
        pbVar13 = (byte *)((longlong)iVar7 * 0x38 + *(longlong *)(param_1 + 0x6f0));
        if (*pbVar13 == param_2) {
          if ((iVar7 != -1) && (pbVar13 != (byte *)0x0)) {
            FText::FText(&local_e0,pbVar13 + 8);
            FString::FString(local_c8,pbVar13 + 0x20);
            goto LAB_140fc2664;
          }
          break;
        }
        iVar7 = *(int *)(pbVar13 + 0x30);
      } while (iVar7 != -1);
    }
  }
  local_e0 = 0;
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  FText::FText(&local_e0);
  local_c8[0] = 0;
  local_c8[1] = 0;
LAB_140fc2664:
  if ((((*(longlong *)(param_1 + 0x8c8) != 0) &&
       (FUN_142088cf0(*(longlong *)(param_1 + 0x8c8),local_c8), *(char *)(param_1 + 0xa51) == '\t'))
      && (cVar6 = FUN_142ebdd70(param_1), cVar6 != '\0')) && (*(longlong *)(param_1 + 0x910) != 0))
  {
    iVar7 = FUN_142eb7a90(param_1);
    if (iVar7 == 0) {
      local_e8 = *(undefined4 *)(param_1 + 0x878);
      uStack_e4 = *(undefined4 *)(param_1 + 0x87c);
    }
    else {
      local_e8 = *(undefined4 *)(param_1 + 0x888);
      uStack_e4 = *(undefined4 *)(param_1 + 0x88c);
    }
    FUN_1420904e0(*(undefined8 *)(param_1 + 0x910),CONCAT44(uStack_e4,local_e8));
    if (iVar7 == 0) {
      local_e8 = *(undefined4 *)(param_1 + 0x880);
      uStack_e4 = *(undefined4 *)(param_1 + 0x884);
    }
    else {
      local_e8 = *(undefined4 *)(param_1 + 0x890);
      uStack_e4 = *(undefined4 *)(param_1 + 0x894);
    }
    FUN_1420900f0(*(undefined8 *)(param_1 + 0x910),CONCAT44(uStack_e4,local_e8));
  }
  cVar6 = *(char *)(param_1 + 0xa51);
  if (cVar6 == '\a') {
    if ((*(longlong *)(param_1 + 0x960) != 0) && (*(char *)(param_1 + 0x898) == '\0')) {
      FUN_140fafa40();
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x6c4) = 1;
    UNLOCK();
    if (*(char *)(param_1 + 0xd30) == '\x02') goto LAB_140fc2982;
    lVar8 = *(longlong *)(param_1 + 0x8e0);
    local_98 = lVar8;
    if (lVar8 != 0) {
      uVar9 = UBlendableInterface::GetPrivateStaticClass();
      uVar9 = UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar9);
    }
    plVar12 = &local_98;
    local_90 = uVar9;
  }
  else {
    if (cVar6 != '\b') {
      if (cVar6 == '\t') {
        if (*(longlong *)(param_1 + 0x960) != 0) {
          FUN_140fafa40();
        }
        LOCK();
        *(undefined4 *)(param_1 + 0x6c4) = 1;
        UNLOCK();
        lVar8 = *(longlong *)(param_1 + 0x910);
        local_c8[2] = lVar8;
        if (lVar8 != 0) {
          uVar9 = UBlendableInterface::GetPrivateStaticClass();
          uVar9 = UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar9);
        }
        local_b0 = uVar9;
        FUN_142ed36d0(param_1,local_c8 + 2,0);
        FWeakObjectPtr::operator=(&local_e8,param_1);
        uVar5 = uStack_e4;
        uVar4 = local_e8;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        puVar10 = (undefined8 *)FUN_140438ef0(0x18,local_78);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &PTR_FUN_1444f8920;
          puVar10[1] = param_1;
          *(undefined4 *)(puVar10 + 2) = uVar4;
          *(undefined4 *)((longlong)puVar10 + 0x14) = uVar5;
        }
        local_88[0] = &LAB_140faec70;
        FUN_14208c260(param_1,local_88);
        if (local_48 != 0) {
          plVar12 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar12 = local_58;
          }
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x10))(plVar12,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
      goto LAB_140fc2982;
    }
    if (*(longlong *)(param_1 + 0x960) != 0) {
      FUN_140fafa40();
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x6c4) = 1;
    UNLOCK();
    lVar8 = FUN_141083c60(param_1);
    plVar12 = *(longlong **)(param_1 + 0x8e0);
    if ((plVar12 != (longlong *)0x0) && (lVar8 != 0)) {
      (**(code **)(*plVar12 + 0x2b8))(plVar12,0xffffffff,0,0);
      *(undefined8 *)(lVar8 + 0x820) = 0;
      FUN_1412be240(lVar8,0,0);
    }
    lVar8 = *(longlong *)(param_1 + 0x908);
    local_a8 = lVar8;
    if (lVar8 != 0) {
      uVar9 = UBlendableInterface::GetPrivateStaticClass();
      uVar9 = UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar9);
    }
    plVar12 = &local_a8;
    local_a0 = uVar9;
  }
  FUN_142ed36d0(param_1,plVar12,0);
LAB_140fc2982:
  LOCK();
  uVar3 = *(uint *)(param_1 + 0x588);
  *(uint *)(param_1 + 0x588) = 1;
  uVar11 = (ulonglong)uVar3;
  UNLOCK();
  if (local_c8[0] != 0) {
    uVar11 = FMemory::Free();
  }
  plVar12 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_d8 + 1);
    uVar3 = *puVar1;
    uVar11 = (ulonglong)uVar3;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      uVar11 = (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        uVar11 = (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  return uVar11;
}



// FUNCTION 140fc2a00 FUN_140fc2a00 body=385 status=ok
// SIG undefined FUN_140fc2a00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fc2a00(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_f8 [32];
  undefined2 local_d8;
  longlong local_c8 [2];
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x630) != 0) {
    local_c8[0] = 0;
    local_c8[1] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
    local_d8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_c8[0],0xf,"matchingShrink");
    FUN_142088910(*(undefined8 *)(param_1 + 0x630),local_c8);
    if (local_c8[0] != 0) {
      FMemory::Free();
    }
  }
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = FUN_140fae9c0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fc2b90 FUN_140fc2b90 body=1019 status=ok
// SIG undefined FUN_140fc2b90(void)

void FUN_140fc2b90(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined **local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((*(longlong **)(param_2 + 8) != (longlong *)0x0) &&
     (cVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar4 != '\0')) {
    if ((param_3 == 8) || (param_3 == 2)) {
      LOCK();
      *(undefined4 *)(param_1 + 0x6c0) = 1;
      UNLOCK();
    }
    else if (param_3 == 0xd) {
      local_58 = *(longlong *)(param_2 + 0x10);
      plVar6 = *(longlong **)(param_2 + 8);
      if (local_58 != 0) {
        LOCK();
        *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
        UNLOCK();
      }
      iVar9 = *(int *)(param_1 + 0xa28);
      local_68 = &PTR_FUN_143f740c8;
      plVar3 = *(longlong **)(param_1 + 0xa20);
      local_50 = 0;
      local_48 = 0;
      local_60 = plVar6;
      for (plVar8 = plVar3; plVar8 != plVar3 + (longlong)iVar9 * 2; plVar8 = plVar8 + 2) {
        lVar5 = *plVar8;
        if ((((plVar6 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar6 + 0x20))(plVar6), cVar4 == '\0')) ||
            (*(longlong **)(lVar5 + 0x10) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x20))(), cVar4 == '\0')) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if ((((plVar6 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar6 + 0x20))(plVar6), cVar4 == '\0')) &&
            ((*(longlong **)(lVar5 + 0x10) == (longlong *)0x0 ||
             (cVar4 = (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x20))(), cVar4 == '\0')))) ||
           ((bVar10 &&
            (cVar4 = (**(code **)**(undefined8 **)(lVar5 + 0x10))
                               (*(undefined8 **)(lVar5 + 0x10),plVar6), cVar4 != '\0')))) {
          iVar9 = (int)((longlong)plVar8 - (longlong)plVar3 >> 4);
          goto LAB_140fc2cd6;
        }
      }
      iVar9 = -1;
LAB_140fc2cd6:
      FUN_1404bf980(&local_68);
      if (iVar9 != -1) {
        lVar5 = FUN_140fb1770(param_1);
        bVar10 = lVar5 == 0;
        if (bVar10) {
          plVar6 = &local_98;
          local_98 = 0;
          plStack_90 = (longlong *)0x0;
          lVar5 = 0;
        }
        else {
          plVar6 = (longlong *)FUN_140d80730(lVar5,local_78,param_2);
          lVar5 = *plVar6;
        }
        plVar3 = (longlong *)plVar6[1];
        plVar6[1] = 0;
        *plVar6 = 0;
        plVar6 = plStack_90;
        if ((bVar10) && (plStack_90 != (longlong *)0x0)) {
          LOCK();
          plVar8 = plStack_90 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plStack_90 + 8))(plStack_90,1);
            }
          }
        }
        if ((!bVar10) && (local_70 != (longlong *)0x0)) {
          LOCK();
          plVar6 = local_70 + 1;
          lVar7 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
        if (lVar5 != 0) {
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          plVar8 = (longlong *)((longlong)iVar9 * 0x10 + *(longlong *)(param_1 + 0xa20));
          *plVar8 = lVar5;
          plVar6 = (longlong *)plVar8[1];
          plVar8[1] = (longlong)plVar3;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar6 + 1;
            lVar7 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar3 + 1;
            lVar7 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          lVar7 = FUN_141083c60(param_1);
          if (lVar7 != 0) {
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            local_88 = lVar5;
            local_80 = plVar3;
            FUN_1412cb6a0(lVar7,&local_88);
            plVar6 = local_80;
            if (local_80 != (longlong *)0x0) {
              LOCK();
              plVar8 = local_80 + 1;
              lVar5 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_80)(local_80);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6,1);
                }
              }
            }
            if (plVar3 == (longlong *)0x0) {
              return;
            }
            LOCK();
            plVar6 = plVar3 + 1;
            lVar5 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar3 + 1;
          lVar5 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140fc2f90 FUN_140fc2f90 body=6998 status=ok
// SIG undefined FUN_140fc2f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fc2f90(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined1 auStack_688 [32];
  longlong **local_668;
  undefined8 local_660;
  undefined1 local_658;
  undefined8 local_650;
  undefined1 local_648;
  ulonglong local_638 [2];
  undefined8 local_628;
  undefined8 uStack_620;
  longlong *local_618;
  undefined8 local_610;
  longlong local_608;
  undefined8 local_600;
  longlong local_5f8;
  undefined8 local_5f0;
  longlong local_5e8;
  undefined8 local_5e0;
  longlong *local_5d8;
  undefined8 local_5d0;
  longlong local_5c8;
  undefined8 local_5c0;
  longlong *local_5b8;
  undefined8 local_5b0;
  longlong local_5a8;
  undefined8 local_5a0;
  longlong local_598;
  undefined8 local_590;
  longlong *local_588;
  undefined8 local_580;
  longlong local_578;
  undefined8 local_570;
  longlong *local_568;
  undefined8 local_560;
  longlong local_558;
  undefined8 local_550;
  longlong *local_548;
  undefined8 local_540;
  longlong local_538;
  undefined8 local_530;
  longlong *local_528;
  undefined8 local_520;
  longlong local_518;
  undefined8 local_510;
  longlong *local_508;
  undefined8 local_500;
  longlong local_4f8;
  undefined8 local_4f0;
  longlong *local_4e8;
  undefined8 local_4e0;
  longlong local_4d8;
  undefined8 local_4d0;
  longlong *local_4c8;
  undefined8 local_4c0;
  longlong *local_4b8;
  undefined8 local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  longlong *local_498;
  undefined8 local_490;
  longlong local_488;
  undefined8 local_480;
  longlong *local_478;
  undefined8 local_470;
  longlong local_468;
  undefined8 local_460;
  longlong *local_458;
  undefined8 local_450;
  longlong local_448;
  undefined8 local_440;
  longlong *local_438;
  undefined8 local_430;
  longlong local_428;
  undefined8 local_420;
  longlong *local_418;
  undefined8 local_410;
  longlong local_408;
  undefined8 local_400;
  longlong *local_3f8;
  undefined8 local_3f0;
  longlong local_3e8;
  undefined8 local_3e0;
  longlong *local_3d8;
  undefined8 local_3d0;
  longlong local_3c8;
  undefined8 local_3c0;
  ulonglong local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined8 local_390;
  undefined4 local_388;
  longlong local_380;
  undefined8 local_378;
  longlong local_370;
  undefined8 local_368;
  uint local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined1 local_348 [8];
  undefined1 local_340 [8];
  undefined1 local_338 [8];
  undefined1 local_330 [8];
  undefined1 local_328 [8];
  undefined1 local_320 [8];
  undefined1 local_318 [8];
  undefined1 local_310 [8];
  longlong local_308 [2];
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8 [8];
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined1 local_240 [8];
  longlong *local_238;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [24];
  undefined1 *local_1c8 [2];
  longlong local_1b8 [4];
  longlong *local_198;
  int local_188;
  undefined1 *local_178 [2];
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  undefined1 *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  code *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_688;
  thunk_FUN_142ecbc80();
  param_1[0x119] = param_1[0xc0];
  FWeakObjectPtr::operator=(local_328,0);
  FWeakObjectPtr::operator=(local_320,0);
  FWeakObjectPtr::operator=(local_318,0);
  FWeakObjectPtr::operator=(local_310,0);
  uVar14 = 0;
  local_5c0 = 0xf;
  local_5c8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5c8,0);
  FGenericPlatformString::Memcpy(local_5c8,L"fastTravelList",0x1e);
  local_668 = &local_5d8;
  local_5d8 = (longlong *)0x0;
  local_5d0 = 0;
  local_2b8 = 0;
  lVar6 = FUN_140ecb410(param_1,&local_5c8,0,6);
  param_1[0x11c] = lVar6;
  plVar12 = local_5d8;
  for (iVar16 = (int)local_5d0; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_5d8 != (longlong *)0x0) {
    FMemory::Free(local_5d8);
  }
  if (local_5c8 != 0) {
    FMemory::Free();
  }
  if (param_1[0x11c] != 0) {
    *(undefined1 *)(param_1[0x11c] + 0x1a0) = 1;
    if (param_1[0x11c] != 0) {
      *(undefined1 *)(param_1[0x11c] + 0x209) = 1;
      lVar6 = *(longlong *)(param_1[0x11c] + 0x2f8);
      if (lVar6 != 0) {
        local_378 = 0;
        local_380 = lVar6;
        uVar7 = UBlendableInterface::GetPrivateStaticClass();
        local_378 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
        FUN_142ecfd10(param_1,&local_380,local_328);
        plVar12 = (longlong *)(*(longlong *)(param_1[0x11c] + 0x2f8) + 0x170);
        (**(code **)(*plVar12 + 0x38))(plVar12,1);
      }
    }
  }
  local_5a8 = 0;
  local_5a0 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5a8,0);
  FGenericPlatformString::Memcpy(local_5a8,L"challengeList",0x1c);
  local_668 = &local_5b8;
  local_5b8 = (longlong *)0x0;
  local_5b0 = 0;
  local_2b0 = 0;
  lVar6 = FUN_140ecb410(param_1,&local_5a8,0,6);
  param_1[0x121] = lVar6;
  plVar12 = local_5b8;
  for (iVar16 = (int)local_5b0; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_5b8 != (longlong *)0x0) {
    FMemory::Free(local_5b8);
  }
  if (local_5a8 != 0) {
    FMemory::Free();
  }
  if (param_1[0x121] != 0) {
    *(undefined1 *)(param_1[0x121] + 0x209) = 1;
    lVar6 = *(longlong *)(param_1[0x121] + 0x2f8);
    if (lVar6 != 0) {
      local_368 = 0;
      local_370 = lVar6;
      uVar7 = UBlendableInterface::GetPrivateStaticClass();
      local_368 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
      FUN_142ecfd10(param_1,&local_370,local_328);
      plVar12 = (longlong *)(*(longlong *)(param_1[0x121] + 0x2f8) + 0x170);
      (**(code **)(*plVar12 + 0x38))(plVar12,1);
    }
  }
  local_578 = 0;
  local_570 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_578,0);
  FGenericPlatformString::Memcpy(local_578,L"progressPanel",0x1c);
  local_588 = (longlong *)0x0;
  local_580 = 0;
  local_2a8 = 0;
  local_668 = &local_588;
  lVar6 = FUN_140f998e0(param_1,&local_578,0,6);
  param_1[0x11a] = lVar6;
  plVar12 = local_588;
  for (iVar16 = (int)local_580; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_588 != (longlong *)0x0) {
    FMemory::Free(local_588);
  }
  if (local_578 != 0) {
    FMemory::Free();
  }
  if (param_1[0x11a] != 0) {
    local_558 = 0;
    local_550 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_558,0);
    FGenericPlatformString::Memcpy(local_558,L"navBar",0xe);
    local_668 = &local_568;
    local_568 = (longlong *)0x0;
    local_560 = 0;
    local_2a0 = 0;
    lVar6 = FUN_140ecb6b0(param_1[0x11a],&local_558,0,6);
    param_1[0x11b] = lVar6;
    plVar12 = local_568;
    for (iVar16 = (int)local_560; iVar16 != 0; iVar16 = iVar16 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_568 != (longlong *)0x0) {
      FMemory::Free(local_568);
    }
    if (local_558 != 0) {
      FMemory::Free();
    }
    local_538 = 0;
    local_530 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_538,0);
    FGenericPlatformString::Memcpy(local_538,L"challengeHintWrapper",0x2a);
    local_668 = &local_548;
    local_548 = (longlong *)0x0;
    local_540 = 0;
    local_2c0 = 0;
    lVar6 = FUN_140ecbdf0(param_1[0x11a],&local_538,0,6);
    param_1[0x124] = lVar6;
    plVar12 = local_548;
    for (iVar16 = (int)local_540; iVar16 != 0; iVar16 = iVar16 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_548 != (longlong *)0x0) {
      FMemory::Free(local_548);
    }
    if (local_538 != 0) {
      FMemory::Free();
    }
    if (param_1[0x124] != 0) {
      local_518 = 0;
      local_510 = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518,0);
      FGenericPlatformString::Memcpy(local_518,L"challengeFilterHint",0x28);
      local_668 = &local_528;
      local_528 = (longlong *)0x0;
      local_520 = 0;
      local_298 = 0;
      lVar6 = FUN_140ecba50(param_1[0x124],&local_518,0,6);
      param_1[0x125] = lVar6;
      plVar12 = local_528;
      for (iVar16 = (int)local_520; iVar16 != 0; iVar16 = iVar16 + -1) {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 2;
      }
      if (local_528 != (longlong *)0x0) {
        FMemory::Free(local_528);
      }
      if (local_518 != 0) {
        FMemory::Free();
      }
    }
  }
  local_4f8 = 0;
  local_4f0 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4f8,0);
  FGenericPlatformString::Memcpy(local_4f8,L"friendList",0x16);
  local_668 = &local_508;
  local_508 = (longlong *)0x0;
  local_500 = 0;
  local_290 = 0;
  lVar6 = FUN_140ecb410(param_1,&local_4f8,0,6);
  param_1[0x122] = lVar6;
  plVar12 = local_508;
  for (iVar16 = (int)local_500; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_508 != (longlong *)0x0) {
    FMemory::Free(local_508);
  }
  if (local_4f8 != 0) {
    FMemory::Free();
  }
  if ((param_1[0x122] != 0) && (pcVar3 = *(code **)(param_1[0x122] + 0x2f8), pcVar3 != (code *)0x0))
  {
    uStack_620 = 0;
    local_628 = pcVar3;
    uVar7 = UBlendableInterface::GetPrivateStaticClass();
    uStack_620 = UObjectBaseUtility::GetInterfaceAddress(pcVar3,uVar7);
    FUN_142ecfd10(param_1,&local_628,local_328);
    plVar12 = (longlong *)(*(longlong *)(param_1[0x122] + 0x2f8) + 0x170);
    (**(code **)(*plVar12 + 0x38))(plVar12,1);
  }
  local_4d8 = 0;
  local_4d0 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4d8,0);
  FGenericPlatformString::Memcpy(local_4d8,L"iconContainer",0x1c);
  local_668 = &local_4e8;
  local_4e8 = (longlong *)0x0;
  local_4e0 = 0;
  local_288 = 0;
  lVar6 = FUN_140e96f30(param_1,&local_4d8,0,6);
  param_1[0x126] = lVar6;
  plVar12 = local_4e8;
  for (iVar16 = (int)local_4e0; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_4e8 != (longlong *)0x0) {
    FMemory::Free(local_4e8);
  }
  if (local_4d8 != 0) {
    FMemory::Free();
  }
  local_598 = 0;
  local_590 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_598,0);
  FGenericPlatformString::Memcpy(local_598,L"crosshairContainer",0x26);
  local_668 = &local_4c8;
  local_4c8 = (longlong *)0x0;
  local_4c0 = 0;
  local_258 = 0;
  lVar6 = FUN_140f99640(param_1,&local_598,0,6);
  param_1[0x127] = lVar6;
  plVar12 = local_4c8;
  for (iVar16 = (int)local_4c0; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_4c8 != (longlong *)0x0) {
    FMemory::Free(local_4c8);
  }
  if (local_598 != 0) {
    FMemory::Free();
  }
  local_4a8 = 0;
  local_4a0 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4a8,0);
  FGenericPlatformString::Memcpy(local_4a8,L"crosshairContainerPC",0x2a);
  local_668 = &local_4b8;
  local_4b8 = (longlong *)0x0;
  local_4b0 = 0;
  local_250 = 0;
  lVar6 = FUN_140f99640(param_1,&local_4a8,0,6);
  param_1[0x128] = lVar6;
  plVar12 = local_4b8;
  for (iVar16 = (int)local_4b0; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_4b8 != (longlong *)0x0) {
    FMemory::Free(local_4b8);
  }
  if (local_4a8 != 0) {
    FMemory::Free();
  }
  plVar12 = param_1 + 0x127;
  lVar6 = 2;
  do {
    if (*plVar12 != 0) {
      FUN_14208f170(*plVar12,"enabled",0);
      FUN_14208f170(*plVar12,"mouseEnabled");
      FUN_14208f170(*plVar12,"mouseChildren");
      (**(code **)(*(longlong *)*plVar12 + 0x278))((longlong *)*plVar12,1);
      (**(code **)(*(longlong *)*plVar12 + 0x278))((longlong *)*plVar12,0);
    }
    plVar12 = plVar12 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  plVar12 = (longlong *)UTwitchInteractivitySettings::GetPrivateStaticClass();
  lVar6 = plVar12[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar12 + 0x368))(plVar12);
    lVar6 = plVar12[0x1f];
    if (lVar6 != 0) goto LAB_140fc391e;
    uVar18 = 0x3f000000;
  }
  else {
LAB_140fc391e:
    uVar18 = *(undefined4 *)(lVar6 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x11e) = uVar18;
  if ((char)param_1[0x1a6] == '\x02') {
    lVar6 = param_1[0x128];
  }
  else {
    lVar6 = param_1[0x127];
  }
  param_1[0x129] = lVar6;
  local_488 = 0;
  local_480 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_488,0);
  FGenericPlatformString::Memcpy(local_488,L"locationInfo",0x1a);
  local_668 = &local_498;
  local_498 = (longlong *)0x0;
  local_490 = 0;
  local_248 = 0;
  lVar6 = FUN_140f99b80(param_1,&local_488,0,6);
  param_1[299] = lVar6;
  plVar12 = local_498;
  for (iVar16 = (int)local_490; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_498 != (longlong *)0x0) {
    FMemory::Free(local_498);
  }
  if (local_488 != 0) {
    FMemory::Free();
  }
  local_468 = 0;
  local_460 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_468,0);
  FGenericPlatformString::Memcpy(local_468,L"detailsPanel",0x1a);
  local_668 = &local_478;
  local_478 = (longlong *)0x0;
  local_470 = 0;
  local_2f8 = 0;
  lVar6 = FUN_140f993a0(param_1,&local_468,0,6);
  param_1[300] = lVar6;
  plVar12 = local_478;
  for (iVar16 = (int)local_470; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_478 != (longlong *)0x0) {
    FMemory::Free(local_478);
  }
  if (local_468 != 0) {
    FMemory::Free();
  }
  if (param_1[300] != 0) {
    uVar8 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
    if (uVar8 == 0) {
LAB_140fc3b38:
      uVar8 = uVar14;
    }
    else {
      lVar6 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_140fc3b38;
    }
    lVar6 = *(longlong *)(param_1[300] + 0x1b8);
    *(ulonglong *)(param_1[300] + 0x298) = uVar8;
    if (lVar6 != 0) {
      plVar12 = (longlong *)(lVar6 + 0x308);
      (**(code **)(*plVar12 + 0x10))(plVar12,0,uVar8);
    }
    *(longlong **)(param_1[300] + 0x220) = param_1;
  }
  local_448 = 0;
  local_440 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_448,0);
  FGenericPlatformString::Memcpy(local_448,L"hyperspaceHeader",0x22);
  local_668 = &local_458;
  local_458 = (longlong *)0x0;
  local_450 = 0;
  local_2f0 = 0;
  lVar6 = FUN_140ac4770(param_1,&local_448,0,6);
  param_1[0x12d] = lVar6;
  plVar12 = local_458;
  for (iVar16 = (int)local_450; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_458 != (longlong *)0x0) {
    FMemory::Free(local_458);
  }
  if (local_448 != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[0x12d] != (longlong *)0x0) {
    lVar6 = *(longlong *)param_1[0x12d];
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_240,L"SELECT DESTINATION",L"GFxMapMenu",L"HyperspaceHeader");
    (**(code **)(lVar6 + 0x2b0))(param_1[0x12d],uVar7,1,0);
    if (local_238 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_238 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_238)(local_238);
        LOCK();
        piVar1 = (int *)((longlong)local_238 + 0xc);
        iVar16 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*local_238 + 8))(local_238,1);
        }
      }
    }
  }
  local_428 = 0;
  local_420 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_428,0);
  FGenericPlatformString::Memcpy(local_428,L"mouseCapture",0x1a);
  local_668 = &local_438;
  local_438 = (longlong *)0x0;
  local_430 = 0;
  local_2e8 = 0;
  lVar6 = FUN_140f9ac40(param_1,&local_428,0,6);
  param_1[0x12a] = lVar6;
  plVar12 = local_438;
  for (iVar16 = (int)local_430; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_438 != (longlong *)0x0) {
    FMemory::Free(local_438);
  }
  if (local_428 != 0) {
    FMemory::Free();
  }
  local_408 = 0;
  local_400 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_408,0);
  FGenericPlatformString::Memcpy(local_408,L"mapWarning",0x16);
  local_668 = &local_418;
  local_418 = (longlong *)0x0;
  local_410 = 0;
  local_2e0 = 0;
  lVar6 = FUN_140e96f30(param_1,&local_408,0,6);
  param_1[0x12e] = lVar6;
  plVar12 = local_418;
  for (iVar16 = (int)local_410; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_418 != (longlong *)0x0) {
    FMemory::Free(local_418);
  }
  if (local_408 != 0) {
    FMemory::Free();
  }
  local_3e8 = 0;
  local_3e0 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3e8,0);
  FGenericPlatformString::Memcpy(local_3e8,L"mapError",0x12);
  local_668 = &local_3f8;
  local_3f8 = (longlong *)0x0;
  local_3f0 = 0;
  local_2d8 = 0;
  lVar6 = FUN_140e96f30(param_1,&local_3e8,0,6);
  param_1[0x12f] = lVar6;
  plVar12 = local_3f8;
  for (iVar16 = (int)local_3f0; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_3f8 != (longlong *)0x0) {
    FMemory::Free(local_3f8);
  }
  if (local_3e8 != 0) {
    FMemory::Free();
  }
  if (param_1[0x12f] != 0) {
    local_3c8 = 0;
    local_3c0 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3c8,0);
    FGenericPlatformString::Memcpy(local_3c8,L"mapErrorText",0x1a);
    local_668 = &local_3d8;
    local_3d8 = (longlong *)0x0;
    local_3d0 = 0;
    local_2d0 = 0;
    lVar6 = FUN_140ecc7d0(param_1[0x12f],&local_3c8,0,6);
    param_1[0x130] = lVar6;
    plVar12 = local_3d8;
    for (iVar16 = (int)local_3d0; iVar16 != 0; iVar16 = iVar16 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_3d8 != (longlong *)0x0) {
      FMemory::Free(local_3d8);
    }
    if (local_3c8 != 0) {
      FMemory::Free();
    }
    if ((longlong *)param_1[0x130] != (longlong *)0x0) {
      lVar6 = *(longlong *)param_1[0x130];
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_228,L"Fast Travel Disabled",L"GFxMapMenu",L"NoFastTravelWarning");
      (**(code **)(lVar6 + 0x2b0))(param_1[0x130],uVar7,1,0);
      if (local_220 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_220 + 1;
        lVar6 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_220)(local_220);
          LOCK();
          piVar1 = (int *)((longlong)local_220 + 0xc);
          iVar16 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar16 == 1) {
            (**(code **)(*local_220 + 8))(local_220,1);
          }
        }
      }
    }
  }
  local_608 = 0;
  local_600 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_608,0);
  FGenericPlatformString::Memcpy(local_608,L"tutorialWrapper",0x20);
  local_668 = &local_618;
  local_618 = (longlong *)0x0;
  local_610 = 0;
  lVar6 = FUN_140f99e20(param_1,&local_608,0,6);
  param_1[0x131] = lVar6;
  plVar12 = local_618;
  for (iVar16 = (int)local_610; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_618 != (longlong *)0x0) {
    FMemory::Free(local_618);
  }
  if (local_608 != 0) {
    FMemory::Free();
  }
  if (param_1[0x131] != 0) {
    uStack_26c = (undefined4)(uStack_620 >> 0x20);
    uStack_620 = uStack_620 & 0xffffffff00000000;
    local_628 = FUN_140fc9180;
    local_278 = 0x40fc9180;
    uStack_274 = 1;
    uStack_270 = 0;
    FUN_1407ffe80(param_1[0x131] + 0x170,param_1,&local_278);
    local_628 = FUN_140fc9340;
    uStack_25c = (undefined4)(uStack_620 >> 0x20);
    uStack_620 = uStack_620 & 0xffffffff00000000;
    local_268 = 0x40fc9340;
    uStack_264 = 1;
    uStack_260 = 0;
    FUN_1407ffe80(param_1[0x131] + 0x180,param_1,&local_268);
    if (param_1[0x119] != 0) {
      FUN_140fda020(param_1[0x131],param_1[0x119],param_1 + 0x106);
    }
  }
  if (param_1[0x139] == 0) {
    if (param_1[0xff] != 0) {
      lVar9 = FUN_141488520();
      lVar6 = param_1[0xff];
joined_r0x000140fc41dc:
      if (lVar6 != 0) {
        if (lVar6 != lVar9) goto code_r0x000140fc41e9;
        if (param_1[0xff] != 0) {
          local_3b8 = 0;
          uVar8 = uVar14;
          if (param_1[0xff] != 0) {
            uVar10 = FUN_141488520();
            for (uVar15 = param_1[0xff];
                (uVar8 = uVar14, uVar15 != 0 && (uVar8 = param_1[0xff], uVar15 != uVar10));
                uVar15 = *(ulonglong *)(uVar15 + 0x30)) {
            }
          }
          uVar15 = local_3b8;
          local_638[0] = 0;
          if (local_3b8 == 0) {
            FUN_1417846f0(param_1,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                         );
          }
          goto LAB_140fc4213;
        }
      }
    }
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_3b0 = 0;
    uVar8 = FUN_141488520();
    uVar15 = uVar14;
LAB_140fc4213:
    local_648 = 0;
    local_650 = 0;
    local_658 = 0;
    local_660 = 0;
    local_668 = (longlong **)((ulonglong)local_668 & 0xffffffff00000000);
    lVar6 = FUN_1417985e0(uVar8,param_1,uVar15,0);
    param_1[0x139] = lVar6;
    if (lVar6 == 0) goto LAB_140fc43ba;
  }
  uVar8 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (uVar8 == 0) {
LAB_140fc42f7:
    uVar8 = uVar14;
  }
  else {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140fc42f7;
  }
  FUN_1411e8980(param_1[0x139],uVar8);
  lVar6 = param_1[0x139];
  local_628 = FUN_140fb4da0;
  uStack_620 = uStack_620 & 0xffffffff00000000;
  plVar12 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar12 != (longlong *)0x0) {
    *plVar12 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar12 + 1,param_1);
    *(undefined4 *)(plVar12 + 2) = (undefined4)local_628;
    *(undefined4 *)((longlong)plVar12 + 0x14) = local_628._4_4_;
    *(undefined4 *)(plVar12 + 3) = (undefined4)uStack_620;
    *(undefined4 *)((longlong)plVar12 + 0x1c) = uStack_620._4_4_;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar12[5] = lVar9;
    *plVar12 = (longlong)&PTR_FUN_143fcff08;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar6 + 0x48,1);
    (**(code **)(*plVar12 + 0x20))(plVar12,local_2c8);
    iVar16 = *(int *)(lVar6 + 0x50);
    *(int *)(lVar6 + 0x50) = iVar16 + 1;
    if (*(int *)(lVar6 + 0x54) < iVar16 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar6 + 0x48,iVar16);
    }
    puVar11 = (undefined8 *)((longlong)iVar16 * 0x10 + *(longlong *)(lVar6 + 0x48));
    *puVar11 = plVar12;
    *(undefined4 *)(puVar11 + 1) = 3;
  }
LAB_140fc43ba:
  local_638[0]._0_4_ = 0xffffffff;
  if (param_1[0x121] != 0) {
    FUN_14170c210(local_638);
  }
  FWeakObjectPtr::operator=(&local_3a8,param_1);
  uVar18 = (undefined4)local_638[0];
  local_638[0] = CONCAT44(local_638[0]._4_4_,0xffffffff);
  local_198 = (longlong *)0x0;
  local_188 = 0;
  puVar11 = (undefined8 *)FUN_140438ef0(0x20,local_1b8);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &PTR_FUN_144605c50;
    puVar11[1] = param_1;
    *(undefined4 *)(puVar11 + 2) = local_3a8;
    *(undefined4 *)((longlong)puVar11 + 0x14) = local_3a4;
    *(undefined4 *)(puVar11 + 3) = uVar18;
    uVar18 = 0xffffffff;
  }
  local_1c8[0] = &LAB_140faeb60;
  FUN_14208c260(param_1,local_1c8);
  if (local_188 != 0) {
    plVar12 = local_1b8;
    if (local_198 != (longlong *)0x0) {
      plVar12 = local_198;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_198 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar18);
  FUN_1416f8340(local_638[0] & 0xffffffff);
  FWeakObjectPtr::operator=(&local_3a0,param_1);
  local_148 = (longlong *)0x0;
  local_138 = 0;
  puVar11 = (undefined8 *)FUN_140438ef0(0x18,local_168);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &PTR_FUN_1444f8920;
    puVar11[1] = param_1;
    *(undefined4 *)(puVar11 + 2) = local_3a0;
    *(undefined4 *)((longlong)puVar11 + 0x14) = local_39c;
  }
  local_178[0] = &LAB_140faedd0;
  FUN_14208c260(param_1,local_178);
  if (local_138 != 0) {
    plVar12 = local_168;
    if (local_148 != (longlong *)0x0) {
      plVar12 = local_148;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_148 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_140fd4890(param_1);
  FWeakObjectPtr::operator=(local_348,0);
  FWeakObjectPtr::operator=(local_340,0);
  FWeakObjectPtr::operator=(local_338,0);
  FWeakObjectPtr::operator=(local_330,0);
  uVar7 = TScriptInterface<IBlendableInterface>::
          TScriptInterface<IBlendableInterface><UMaterialInterface>(local_200,param_1[0x11b]);
  FUN_142ecfd10(param_1,uVar7,local_348);
  uVar7 = TScriptInterface<IBlendableInterface>::
          TScriptInterface<IBlendableInterface><UMaterialInterface>(local_1f0,param_1[0x11c]);
  FUN_142ecfd10(param_1,uVar7,local_348);
  uVar7 = TScriptInterface<IBlendableInterface>::
          TScriptInterface<IBlendableInterface><UMaterialInterface>(local_1e0,param_1[0x121]);
  FUN_142ecfd10(param_1,uVar7,local_348);
  uVar7 = TScriptInterface<IBlendableInterface>::
          TScriptInterface<IBlendableInterface><UMaterialInterface>(local_210,param_1[0x122]);
  FUN_142ecfd10(param_1,uVar7,local_348);
  FWeakObjectPtr::operator=(&local_398,param_1);
  local_f8 = (longlong *)0x0;
  local_e8 = 0;
  puVar11 = (undefined8 *)FUN_140438ef0(0x18,local_118);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &PTR_FUN_1444f8920;
    puVar11[1] = param_1;
    *(undefined4 *)(puVar11 + 2) = local_398;
    *(undefined4 *)((longlong)puVar11 + 0x14) = local_394;
  }
  local_128[0] = &LAB_140faea30;
  FUN_14208c260(param_1,local_128);
  if (local_e8 != 0) {
    plVar12 = local_118;
    if (local_f8 != (longlong *)0x0) {
      plVar12 = local_f8;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free();
  }
  (**(code **)(*param_1 + 0x148))(param_1);
  lVar6 = FWeakObjectPtr::Get((longlong)param_1 + 0x59c);
  if (lVar6 != 0) {
    *(undefined1 *)(param_1 + 0x1a6) = *(undefined1 *)(lVar6 + 0xb8);
  }
  FUN_140fcce10(param_1);
  FUN_140fd62d0(param_1);
  FUN_140fd4cf0(param_1,1);
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((((lVar6 != 0) && (lVar6 = UWorld::GetGameState<APVPGameState>(lVar6), lVar6 != 0)) &&
      (plVar12 = *(longlong **)(lVar6 + 0x5a0), plVar12 != (longlong *)0x0)) &&
     (cVar5 = FUN_140f9da70(plVar12), cVar5 != '\0')) {
    uStack_620 = uStack_620 & 0xffffffff00000000;
    local_628 = FUN_140fb7a50;
    local_390 = 0;
    local_388 = 0;
    puVar11 = (undefined8 *)operator_new(0x30,&local_390);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &PTR_FUN_143fcff50;
      FWeakObjectPtr::operator=(puVar11 + 1,param_1);
      *(undefined4 *)(puVar11 + 2) = (undefined4)local_628;
      *(undefined4 *)((longlong)puVar11 + 0x14) = local_628._4_4_;
      *(undefined4 *)(puVar11 + 3) = (undefined4)uStack_620;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_620._4_4_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar11[5] = uVar7;
      *puVar11 = &PTR_FUN_143fcff98;
    }
    TBaseDelegate<FSlateBrush_const_*>::operator=(plVar12 + 0xa9,&local_390);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_390);
    if (param_1[0x12e] != 0) {
      cVar5 = (**(code **)(*plVar12 + 0x718))(plVar12);
      if (cVar5 == '\0') {
        local_5e8 = 0;
        local_5e0 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5e8,0);
        FGenericPlatformString::Memcpy(local_5e8,L"show",10);
        FUN_142088910(param_1[0x12e],&local_5e8);
        lVar6 = local_5e8;
      }
      else {
        local_5f8 = 0;
        local_5f0 = 4;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5f8,0);
        FGenericPlatformString::Memcpy(local_5f8,&DAT_1446426d8,8);
        FUN_142088cf0(param_1[0x12e],&local_5f8);
        lVar6 = local_5f8;
      }
      if (lVar6 != 0) {
        FMemory::Free();
      }
    }
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar11 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[1] = param_1;
    *puVar11 = &PTR_FUN_143f77b70;
  }
  local_d8[0] = FUN_140faed40;
  uVar7 = FUN_1420849a0(param_1,local_88,local_d8);
  FUN_14208c260(param_1,uVar7);
  if (local_48 != 0) {
    plVar12 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar12 = local_58;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    plVar12 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar12 = local_a8;
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  iVar16 = *(int *)((longlong)param_1 + 0xd34);
  plVar12 = param_1 + 0x1ac;
  param_1[0x14c] = 0;
  if (*(int *)((longlong)param_1 + 0xd6c) < iVar16) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (plVar12,iVar16);
    iVar16 = *(int *)((longlong)param_1 + 0xd34);
  }
  plVar2 = param_1 + 0x1ae;
  if (*(int *)((longlong)param_1 + 0xd7c) < iVar16) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2,iVar16);
    iVar16 = *(int *)((longlong)param_1 + 0xd34);
  }
  if (0 < iVar16) {
    do {
      if ((int)param_1[0x1aa] == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)param_1[0x1a9];
      }
      FString::PrintfImpl(local_308,puVar13,uVar14);
      uVar17 = (int)uVar14 + 1;
      local_360 = uVar17;
      FString::FString(&local_358,local_308);
      if (local_308[0] != 0) {
        FMemory::Free();
      }
      iVar16 = (int)param_1[0x1ad];
      lVar6 = (longlong)iVar16;
      *(int *)(param_1 + 0x1ad) = iVar16 + 1;
      if (*(int *)((longlong)param_1 + 0xd6c) < iVar16 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar12,iVar16);
      }
      lVar9 = *plVar12;
      *(uint *)(lVar9 + lVar6 * 0x18) = local_360;
      *(undefined8 *)(lVar9 + 8 + lVar6 * 0x18) = local_358;
      *(undefined4 *)(lVar9 + 0x10 + lVar6 * 0x18) = local_350;
      *(undefined4 *)(lVar9 + 0x14 + lVar6 * 0x18) = local_34c;
      lVar9 = *plVar12;
      iVar16 = (int)param_1[0x1af];
      *(int *)(param_1 + 0x1af) = iVar16 + 1;
      if (*(int *)((longlong)param_1 + 0xd7c) < iVar16 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar16);
      }
      *(longlong *)(*plVar2 + (longlong)iVar16 * 8) = lVar9 + lVar6 * 0x18;
      uVar14 = (ulonglong)uVar17;
    } while ((int)uVar17 < *(int *)((longlong)param_1 + 0xd34));
  }
  FUN_142ecd4d0(param_1);
  *(undefined1 *)((longlong)param_1 + 0x614) = 1;
  return;
code_r0x000140fc41e9:
  lVar6 = *(longlong *)(lVar6 + 0x30);
  goto joined_r0x000140fc41dc;
}



// FUNCTION 140fc4af0 FUN_140fc4af0 body=6388 status=ok
// SIG undefined FUN_140fc4af0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fc4af0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_698 [32];
  longlong **local_678;
  undefined4 local_670;
  undefined1 local_668;
  undefined1 *local_660;
  longlong local_658;
  undefined8 local_650;
  longlong *local_648;
  int local_640;
  longlong *local_638;
  undefined8 local_630;
  longlong local_628;
  undefined8 local_620;
  longlong *local_618;
  undefined8 local_610;
  longlong local_608;
  undefined8 local_600;
  longlong local_5f8;
  undefined8 local_5f0;
  longlong *local_5e8;
  undefined8 local_5e0;
  longlong local_5d8;
  undefined8 local_5d0;
  longlong *local_5c8;
  undefined8 local_5c0;
  longlong *local_5b8;
  undefined8 local_5b0;
  longlong local_5a8;
  undefined8 local_5a0;
  longlong *local_598;
  undefined8 local_590;
  longlong local_588;
  undefined8 local_580;
  longlong *local_578;
  undefined8 local_570;
  longlong local_568;
  undefined8 local_560;
  longlong *local_558;
  undefined8 local_550;
  longlong local_548;
  undefined8 local_540;
  longlong local_538;
  undefined8 local_530;
  longlong *local_528;
  undefined8 local_520;
  longlong local_518;
  undefined8 local_510;
  longlong *local_508;
  undefined8 local_500;
  longlong local_4f8;
  undefined8 local_4f0;
  longlong *local_4e8;
  undefined8 local_4e0;
  longlong local_4d8;
  undefined8 local_4d0;
  longlong *local_4c8;
  undefined8 local_4c0;
  longlong local_4b8;
  undefined8 local_4b0;
  longlong *local_4a8;
  undefined8 local_4a0;
  longlong local_498;
  undefined8 local_490;
  longlong *local_488;
  undefined8 local_480;
  longlong *local_478;
  undefined8 local_470;
  longlong local_468;
  undefined8 local_460;
  longlong *local_458;
  undefined8 local_450;
  longlong local_448;
  undefined8 local_440;
  longlong local_438;
  longlong *local_430;
  int local_428;
  undefined4 local_424;
  undefined1 local_420 [8];
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined1 local_3e8;
  undefined1 local_3e7;
  undefined1 local_3e6;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined1 local_3d8;
  longlong local_3d0 [2];
  undefined1 local_3c0;
  undefined1 local_3bf;
  undefined1 local_3be;
  undefined1 local_3bd;
  longlong local_3b8 [2];
  longlong local_3a8 [2];
  longlong local_398 [2];
  undefined1 local_388;
  undefined1 local_387;
  undefined1 local_386;
  undefined4 local_384;
  undefined4 local_380;
  undefined1 local_37c;
  undefined1 local_37b;
  undefined1 local_37a;
  undefined1 local_379;
  undefined1 local_378;
  undefined1 local_377;
  undefined8 local_370;
  undefined8 local_368;
  undefined1 local_360;
  undefined1 local_35f;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  longlong *local_2e0;
  undefined8 local_2d0;
  undefined1 local_2c8 [8];
  longlong *local_2c0;
  undefined1 local_2b0 [8];
  longlong *local_2a8;
  undefined1 local_298 [8];
  longlong *local_290;
  undefined1 local_280 [8];
  longlong *local_278;
  undefined1 local_268 [8];
  longlong *local_260;
  undefined1 local_250 [24];
  undefined1 *local_238 [2];
  longlong local_228 [4];
  longlong *local_208;
  int local_1f8;
  undefined1 *local_1e8 [2];
  longlong local_1d8 [4];
  longlong *local_1b8;
  int local_1a8;
  undefined1 *local_198 [2];
  longlong local_188 [4];
  longlong *local_168;
  int local_158;
  undefined1 local_148 [16];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  undefined1 local_f8 [16];
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  undefined1 local_a8 [16];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_698;
  thunk_FUN_142ecbc80();
  local_4d0 = 0xb;
  local_4d8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4d8,0);
  FGenericPlatformString::Memcpy(local_4d8,L"infoHeader",0x16);
  local_678 = &local_4e8;
  local_4e8 = (longlong *)0x0;
  iVar11 = 0;
  local_4e0 = 0;
  local_318 = 0;
  uVar6 = FUN_140ac4770(param_1,&local_4d8,0,6);
  *(undefined8 *)(param_1 + 0x6a8) = uVar6;
  plVar7 = local_4e8;
  for (iVar10 = (int)local_4e0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_4e8 != (longlong *)0x0) {
    FMemory::Free(local_4e8);
  }
  if (local_4d8 != 0) {
    FMemory::Free();
  }
  local_4b8 = 0;
  local_4b0 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4b8,0);
  FGenericPlatformString::Memcpy(local_4b8,L"infoBody",0x12);
  local_678 = &local_4c8;
  local_4c8 = (longlong *)0x0;
  local_4c0 = 0;
  local_320 = 0;
  uVar6 = FUN_140ac4770(param_1,&local_4b8,0,6);
  *(undefined8 *)(param_1 + 0x6b0) = uVar6;
  plVar7 = local_4c8;
  for (iVar10 = (int)local_4c0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_4c8 != (longlong *)0x0) {
    FMemory::Free(local_4c8);
  }
  if (local_4b8 != 0) {
    FMemory::Free();
  }
  local_498 = 0;
  local_490 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_498,0);
  FGenericPlatformString::Memcpy(local_498,L"statusLabel",0x18);
  local_678 = &local_4a8;
  local_4a8 = (longlong *)0x0;
  local_4a0 = 0;
  local_328 = 0;
  uVar6 = FUN_140ac4770(param_1,&local_498,0,6);
  *(undefined8 *)(param_1 + 0x6b8) = uVar6;
  plVar7 = local_4a8;
  for (iVar10 = (int)local_4a0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_4a8 != (longlong *)0x0) {
    FMemory::Free(local_4a8);
  }
  if (local_498 != 0) {
    FMemory::Free();
  }
  local_4f8 = 0;
  local_4f0 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4f8,0);
  FGenericPlatformString::Memcpy(local_4f8,L"warningText",0x18);
  local_678 = &local_488;
  local_488 = (longlong *)0x0;
  local_480 = 0;
  local_2d0 = 0;
  uVar6 = FUN_140ac4770(param_1,&local_4f8,0,6);
  *(undefined8 *)(param_1 + 0x6c0) = uVar6;
  plVar7 = local_488;
  for (iVar10 = (int)local_480; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_488 != (longlong *)0x0) {
    FMemory::Free(local_488);
  }
  if (local_4f8 != 0) {
    FMemory::Free();
  }
  local_628 = 0;
  local_620 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_628,0);
  FGenericPlatformString::Memcpy(local_628,L"headerStats",0x18);
  local_678 = &local_638;
  local_638 = (longlong *)0x0;
  local_630 = 0;
  local_330 = 0;
  uVar6 = FUN_140ac4770(param_1,&local_628,0,6);
  *(undefined8 *)(param_1 + 0x6c8) = uVar6;
  plVar7 = local_638;
  for (iVar10 = (int)local_630; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_638 != (longlong *)0x0) {
    FMemory::Free(local_638);
  }
  if (local_628 != 0) {
    FMemory::Free();
  }
  local_608 = 0;
  local_600 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_608,0);
  FGenericPlatformString::Memcpy(local_608,L"mayhemStat1",0x18);
  local_678 = &local_618;
  local_618 = (longlong *)0x0;
  local_610 = 0;
  local_338 = 0;
  uVar6 = FUN_140ac4770(param_1,&local_608,0,6);
  *(undefined8 *)(param_1 + 0x6d0) = uVar6;
  plVar7 = local_618;
  for (iVar10 = (int)local_610; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_618 != (longlong *)0x0) {
    FMemory::Free(local_618);
  }
  if (local_608 != 0) {
    FMemory::Free();
  }
  local_518 = 0;
  local_510 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518,0);
  FGenericPlatformString::Memcpy(local_518,L"mayhemStat2",0x18);
  local_678 = &local_5c8;
  local_5c8 = (longlong *)0x0;
  local_5c0 = 0;
  local_340 = 0;
  uVar6 = FUN_140ac4770(param_1,&local_518,0,6);
  *(undefined8 *)(param_1 + 0x6d8) = uVar6;
  plVar7 = local_5c8;
  for (iVar10 = (int)local_5c0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_5c8 != (longlong *)0x0) {
    FMemory::Free(local_5c8);
  }
  if (local_518 != 0) {
    FMemory::Free();
  }
  local_538 = 0;
  local_530 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_538,0);
  FGenericPlatformString::Memcpy(local_538,L"mayhemStat3",0x18);
  local_678 = &local_528;
  local_528 = (longlong *)0x0;
  local_520 = 0;
  local_348 = 0;
  uVar6 = FUN_140ac4770(param_1,&local_538,0,6);
  *(undefined8 *)(param_1 + 0x6e0) = uVar6;
  plVar7 = local_528;
  for (iVar10 = (int)local_520; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_528 != (longlong *)0x0) {
    FMemory::Free(local_528);
  }
  if (local_538 != 0) {
    FMemory::Free();
  }
  local_548 = 0;
  local_540 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_548,0);
  FGenericPlatformString::Memcpy(local_548,L"mayhemStat4",0x18);
  local_678 = &local_508;
  local_508 = (longlong *)0x0;
  local_500 = 0;
  local_350 = 0;
  uVar6 = FUN_140ac4770(param_1,&local_548,0,6);
  *(undefined8 *)(param_1 + 0x6e8) = uVar6;
  plVar7 = local_508;
  for (iVar10 = (int)local_500; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_508 != (longlong *)0x0) {
    FMemory::Free(local_508);
  }
  if (local_548 != 0) {
    FMemory::Free();
  }
  local_568 = 0;
  local_560 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_568,0);
  FGenericPlatformString::Memcpy(local_568,L"mayhemStat5",0x18);
  local_678 = &local_558;
  local_558 = (longlong *)0x0;
  local_550 = 0;
  local_358 = 0;
  uVar6 = FUN_140ac4770(param_1,&local_568,0,6);
  *(undefined8 *)(param_1 + 0x6f0) = uVar6;
  plVar7 = local_558;
  for (iVar10 = (int)local_550; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_558 != (longlong *)0x0) {
    FMemory::Free(local_558);
  }
  if (local_568 != 0) {
    FMemory::Free();
  }
  local_588 = 0;
  local_580 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_588,0);
  FGenericPlatformString::Memcpy(local_588,L"mayhemStat6",0x18);
  local_678 = &local_578;
  local_578 = (longlong *)0x0;
  local_570 = 0;
  local_2e8 = 0;
  uVar6 = FUN_140ac4770(param_1,&local_588,0,6);
  *(undefined8 *)(param_1 + 0x6f8) = uVar6;
  plVar7 = local_578;
  for (iVar10 = (int)local_570; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_578 != (longlong *)0x0) {
    FMemory::Free(local_578);
  }
  if (local_588 != 0) {
    FMemory::Free();
  }
  plVar7 = (longlong *)(param_1 + 0x790);
  if ((*(int *)(param_1 + 0x79c) < 0) &&
     (*(undefined4 *)(param_1 + 0x798) = 0, *(int *)(param_1 + 0x79c) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar7,0);
    iVar11 = *(int *)(param_1 + 0x798);
  }
  *(int *)(param_1 + 0x798) = iVar11 + 1;
  if (*(int *)(param_1 + 0x79c) < iVar11 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7,iVar11);
  }
  *(undefined8 *)(*plVar7 + (longlong)iVar11 * 8) = *(undefined8 *)(param_1 + 0x6d0);
  iVar11 = *(int *)(param_1 + 0x798);
  *(int *)(param_1 + 0x798) = iVar11 + 1;
  if (*(int *)(param_1 + 0x79c) < iVar11 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7,iVar11);
  }
  *(undefined8 *)(*plVar7 + (longlong)iVar11 * 8) = *(undefined8 *)(param_1 + 0x6d8);
  iVar11 = *(int *)(param_1 + 0x798);
  *(int *)(param_1 + 0x798) = iVar11 + 1;
  if (*(int *)(param_1 + 0x79c) < iVar11 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7,iVar11);
  }
  *(undefined8 *)(*plVar7 + (longlong)iVar11 * 8) = *(undefined8 *)(param_1 + 0x6e0);
  iVar11 = *(int *)(param_1 + 0x798);
  *(int *)(param_1 + 0x798) = iVar11 + 1;
  if (*(int *)(param_1 + 0x79c) < iVar11 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7,iVar11);
  }
  *(undefined8 *)(*plVar7 + (longlong)iVar11 * 8) = *(undefined8 *)(param_1 + 0x6e8);
  iVar11 = *(int *)(param_1 + 0x798);
  *(int *)(param_1 + 0x798) = iVar11 + 1;
  if (*(int *)(param_1 + 0x79c) < iVar11 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7,iVar11);
  }
  *(undefined8 *)(*plVar7 + (longlong)iVar11 * 8) = *(undefined8 *)(param_1 + 0x6f0);
  iVar11 = *(int *)(param_1 + 0x798);
  *(int *)(param_1 + 0x798) = iVar11 + 1;
  if (*(int *)(param_1 + 0x79c) < iVar11 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7,iVar11);
  }
  local_5a8 = 0;
  local_5a0 = 0xb;
  *(undefined8 *)(*plVar7 + (longlong)iVar11 * 8) = *(undefined8 *)(param_1 + 0x6f8);
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5a8,0);
  FGenericPlatformString::Memcpy(local_5a8,L"headerMods",0x16);
  local_598 = (longlong *)0x0;
  local_590 = 0;
  local_2f0 = 0;
  local_678 = &local_598;
  uVar6 = FUN_140ac4770(param_1,&local_5a8,0,6);
  *(undefined8 *)(param_1 + 0x700) = uVar6;
  plVar7 = local_598;
  for (iVar11 = (int)local_590; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_598 != (longlong *)0x0) {
    FMemory::Free(local_598);
  }
  if (local_5a8 != 0) {
    FMemory::Free();
  }
  local_5d8 = 0;
  local_5d0 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5d8,0);
  FGenericPlatformString::Memcpy(local_5d8,L"mayhemModList",0x1c);
  local_678 = &local_5b8;
  local_5b8 = (longlong *)0x0;
  local_5b0 = 0;
  local_2f8 = 0;
  uVar6 = FUN_140ecb410(param_1,&local_5d8,0,6);
  *(undefined8 *)(param_1 + 0x708) = uVar6;
  plVar7 = local_5b8;
  for (iVar11 = (int)local_5b0; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_5b8 != (longlong *)0x0) {
    FMemory::Free(local_5b8);
  }
  if (local_5d8 != 0) {
    FMemory::Free();
  }
  lVar8 = *(longlong *)(param_1 + 0x708);
  if (lVar8 != 0) {
    local_3e8 = *(undefined1 *)(lVar8 + 0x1e0);
    local_3e7 = *(undefined1 *)(lVar8 + 0x1e1);
    local_3e6 = *(undefined1 *)(lVar8 + 0x1e2);
    local_3e4 = *(undefined4 *)(lVar8 + 0x1e4);
    local_3e0 = *(undefined4 *)(lVar8 + 0x1e8);
    local_3dc = *(undefined4 *)(lVar8 + 0x1ec);
    local_3d8 = *(undefined1 *)(lVar8 + 0x1f0);
    FString::FString(local_3d0,lVar8 + 0x1f8);
    local_3c0 = *(undefined1 *)(lVar8 + 0x208);
    local_3bf = *(undefined1 *)(lVar8 + 0x209);
    local_3be = *(undefined1 *)(lVar8 + 0x20a);
    local_3bd = *(undefined1 *)(lVar8 + 0x20b);
    FString::FString(local_3b8,lVar8 + 0x210);
    FString::FString(local_3a8,lVar8 + 0x220);
    FString::FString(local_398,lVar8 + 0x230);
    local_388 = *(undefined1 *)(lVar8 + 0x240);
    local_387 = *(undefined1 *)(lVar8 + 0x241);
    local_386 = *(undefined1 *)(lVar8 + 0x242);
    local_384 = *(undefined4 *)(lVar8 + 0x244);
    local_380 = *(undefined4 *)(lVar8 + 0x248);
    local_37c = *(undefined1 *)(lVar8 + 0x24c);
    local_37b = *(undefined1 *)(lVar8 + 0x24d);
    local_37a = *(undefined1 *)(lVar8 + 0x24e);
    local_379 = *(undefined1 *)(lVar8 + 0x24f);
    local_378 = *(undefined1 *)(lVar8 + 0x250);
    local_377 = *(undefined1 *)(lVar8 + 0x251);
    local_370 = *(undefined8 *)(lVar8 + 600);
    local_368 = *(undefined8 *)(lVar8 + 0x260);
    local_360 = *(undefined1 *)(lVar8 + 0x268);
    local_35f = *(undefined1 *)(lVar8 + 0x269);
    local_3e0 = 0;
    FUN_142ed2840(*(undefined8 *)(param_1 + 0x708),&local_3e8);
    if (local_398[0] != 0) {
      FMemory::Free();
    }
    if (local_3a8[0] != 0) {
      FMemory::Free();
    }
    if (local_3b8[0] != 0) {
      FMemory::Free();
    }
    if (local_3d0[0] != 0) {
      FMemory::Free();
    }
  }
  local_5f8 = 0;
  local_5f0 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5f8,0);
  FGenericPlatformString::Memcpy(local_5f8,L"entry0",0xe);
  local_678 = &local_5e8;
  local_5e8 = (longlong *)0x0;
  local_5e0 = 0;
  local_300 = 0;
  uVar6 = FUN_140f9a9a0(param_1,&local_5f8,0,6);
  *(undefined8 *)(param_1 + 0x710) = uVar6;
  plVar7 = local_5e8;
  for (iVar11 = (int)local_5e0; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_5e8 != (longlong *)0x0) {
    FMemory::Free(local_5e8);
  }
  if (local_5f8 != 0) {
    FMemory::Free();
  }
  local_468 = 0;
  local_460 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_468,0);
  FGenericPlatformString::Memcpy(local_468,L"entry1",0xe);
  local_678 = &local_478;
  local_478 = (longlong *)0x0;
  local_470 = 0;
  local_308 = 0;
  uVar6 = FUN_140f9a700(param_1,&local_468,0,6);
  *(undefined8 *)(param_1 + 0x718) = uVar6;
  plVar7 = local_478;
  for (iVar11 = (int)local_470; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_478 != (longlong *)0x0) {
    FMemory::Free(local_478);
  }
  if (local_468 != 0) {
    FMemory::Free();
  }
  local_448 = 0;
  local_440 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_448,0);
  FGenericPlatformString::Memcpy(local_448,L"entry2",0xe);
  local_678 = &local_458;
  local_458 = (longlong *)0x0;
  local_450 = 0;
  local_310 = 0;
  uVar6 = FUN_140f9a0c0(param_1,&local_448,0,6);
  *(undefined8 *)(param_1 + 0x720) = uVar6;
  plVar7 = local_458;
  for (iVar11 = (int)local_450; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_458 != (longlong *)0x0) {
    FMemory::Free(local_458);
  }
  if (local_448 != 0) {
    FMemory::Free();
  }
  FUN_140fb3680(param_1);
  plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x58c);
  if (plVar7 != (longlong *)0x0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (plVar2 = (longlong *)plVar7[0x109], plVar2 != (longlong *)0x0)) {
      lVar8 = FUN_1413ffe00();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) &&
         ((lVar8 = (**(code **)(*plVar7 + 0x690))(plVar7), lVar8 != 0 ||
          (lVar8 = (**(code **)(*plVar2 + 0x690))(plVar2), lVar8 != 0)))) {
        *(undefined1 *)(param_1 + 0x752) = 1;
      }
    }
  }
  if (*(char *)(param_1 + 0x752) == '\0') {
    lVar8 = FWeakObjectPtr::Get(param_1 + 0x58c);
    if ((lVar8 == 0) ||
       (lVar8 = FWeakObjectPtr::Get(param_1 + 0x58c), *(char *)(lVar8 + 0x128) != '\x03')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140fc5a8a;
    uVar5 = 1;
  }
  else {
LAB_140fc5a8a:
    uVar5 = 0;
  }
  *(undefined1 *)(param_1 + 0x732) = uVar5;
  if (*(longlong *)(param_1 + 0x710) != 0) {
    FName::FName(&local_410,L"OnMayhemOptionFocused",1);
    lVar8 = *(longlong *)(param_1 + 0x710);
    FWeakObjectPtr::operator=(lVar8 + 0x1d0,param_1);
    *(undefined8 *)(lVar8 + 0x1d8) = local_410;
    local_648 = (longlong *)0x0;
    local_640 = 0;
    FName::FName(&local_438,L"OnMayhemActivationChanged",1);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_2e0 = plVar7;
    if (plVar7 == (longlong *)0x0) {
      if (((local_640 != 0) && (local_648 != (longlong *)0x0)) &&
         ((**(code **)(*local_648 + 0x28))(local_648,0), local_648 != (longlong *)0x0)) {
        local_648 = (longlong *)FMemory::Realloc(local_648,0,0);
      }
    }
    else {
      *plVar7 = (longlong)&PTR_LAB_14461b6c8;
      plVar7[2] = local_438;
      FWeakObjectPtr::operator=(plVar7 + 3,param_1);
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar8;
      uVar6 = FWeakObjectPtr::Get(plVar7 + 3);
      lVar8 = FUN_14178ac60(uVar6,local_438);
      plVar7[1] = lVar8;
      *plVar7 = (longlong)&PTR_LAB_14461b710;
      FUN_140f28e40(plVar7,&local_648);
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      local_2e0 = (longlong *)FMemory::Realloc(plVar7,0,0);
      if (local_2e0 != (longlong *)0x0) {
        FMemory::Free(local_2e0);
      }
    }
    local_658 = 0;
    local_650 = 1;
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_2c8,&DAT_144642318,L"GFxMayhemMenu",L"MayhemActivationOff");
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_658,0);
    FText::FText(local_658,uVar6);
    if (local_2c0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_2c0 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_2c0)(local_2c0);
        LOCK();
        piVar1 = (int *)((longlong)local_2c0 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_2c0 + 8))(local_2c0,1);
        }
      }
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_2b0,&DAT_1446423d0,L"GFxMayhemMenu",L"MayhemActivationOn");
    uVar4 = local_650;
    lVar8 = (longlong)(int)local_650;
    iVar11 = (int)local_650 + 1;
    local_650 = CONCAT44(local_650._4_4_,iVar11);
    if (local_650._4_4_ < iVar11) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_658,uVar4 & 0xffffffff);
      iVar11 = (int)local_650;
    }
    FText::FText(local_658 + lVar8 * 0x18,uVar6);
    if (local_2a8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_2a8 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_2a8)(local_2a8);
        LOCK();
        piVar1 = (int *)((longlong)local_2a8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_2a8 + 8))(local_2a8,1);
        }
      }
      iVar11 = (int)local_650;
    }
    local_430 = (longlong *)0x0;
    local_428 = iVar11;
    if (iVar11 == 0) {
      local_424 = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_430,iVar11,0);
      lVar8 = local_658;
      plVar7 = local_430;
      do {
        FText::FText(plVar7,lVar8);
        plVar7 = plVar7 + 3;
        lVar8 = lVar8 + 0x18;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_268,L"Mayhem Mode",L"GFxMayhemMenu",L"MayhemActivationSpinnerLabel");
    local_678 = &local_430;
    FUN_142ebc020(*(undefined8 *)(param_1 + 0x710),uVar6,*(undefined1 *)(param_1 + 0x731),&local_648
                 );
    if (local_260 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_260 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_260)(local_260);
        LOCK();
        piVar1 = (int *)((longlong)local_260 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_260 + 8))(local_260,1);
        }
      }
    }
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x710) + 0x170);
    (**(code **)(*plVar7 + 0x38))(plVar7,*(undefined1 *)(param_1 + 0x732));
    local_208 = (longlong *)0x0;
    local_1f8 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_228);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[1] = param_1;
      *puVar9 = &PTR_FUN_143f77b70;
    }
    local_238[0] = &LAB_140faec60;
    uVar6 = FUN_1420849a0(param_1,local_148,local_238);
    FUN_14208c260(param_1,uVar6);
    if (local_108 != 0) {
      plVar7 = local_138;
      if (local_118 != (longlong *)0x0) {
        plVar7 = local_118;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_118 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_1f8 != 0) {
      plVar7 = local_228;
      if (local_208 != (longlong *)0x0) {
        plVar7 = local_208;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_208 != (longlong *)0x0) {
      FMemory::Free();
    }
    TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
    ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_658);
    if (local_640 != 0) {
      if (local_648 == (longlong *)0x0) goto LAB_140fc5f2a;
      (**(code **)(*local_648 + 0x28))(local_648,0);
      if (local_648 != (longlong *)0x0) {
        local_648 = (longlong *)FMemory::Realloc(local_648,0,0);
      }
      local_640 = 0;
    }
    if (local_648 != (longlong *)0x0) {
      FMemory::Free(local_648);
    }
  }
LAB_140fc5f2a:
  if (*(longlong *)(param_1 + 0x718) != 0) {
    FName::FName(&local_408,L"OnMayhemOptionFocused",1);
    lVar8 = *(longlong *)(param_1 + 0x718);
    FWeakObjectPtr::operator=(lVar8 + 0x1d0,param_1);
    *(undefined8 *)(lVar8 + 0x1d8) = local_408;
    FWeakObjectPtr::operator=(local_420,0);
    local_418 = 0;
    FName::FName(&local_400,L"OnMayhemValueChanged",1);
    FWeakObjectPtr::operator=(local_420,param_1);
    local_418 = local_400;
    iVar11 = 100;
    lVar8 = FUN_140f9aee0(param_1);
    if (lVar8 != 0) {
      iVar11 = FUN_140b5d080(lVar8);
    }
    iVar10 = *(int *)(param_1 + 0x72c);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_298,L"Mayhem Level",L"GFxMayhemMenu",L"MayhemLevelSliderLabel");
    local_660 = local_420;
    local_668 = 1;
    local_670 = 0x3f800000;
    local_678 = (longlong **)CONCAT44(local_678._4_4_,(float)iVar11);
    FUN_142ebca00(*(undefined8 *)(param_1 + 0x718),uVar6,(float)iVar10);
    if (local_290 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_290 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_290)(local_290);
        LOCK();
        piVar1 = (int *)((longlong)local_290 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_290 + 8))(local_290,1);
        }
      }
    }
    if ((*(char *)(param_1 + 0x731) == '\0') || (*(char *)(param_1 + 0x732) == '\0')) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x718) + 0x170);
    (**(code **)(*plVar7 + 0x38))(plVar7,uVar6);
    local_1b8 = (longlong *)0x0;
    local_1a8 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_1d8);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[1] = param_1;
      *puVar9 = &PTR_FUN_143f77b70;
    }
    local_1e8[0] = &LAB_140faec50;
    uVar6 = FUN_1420849a0(param_1,local_f8,local_1e8);
    FUN_14208c260(param_1,uVar6);
    if (local_b8 != 0) {
      plVar7 = local_e8;
      if (local_c8 != (longlong *)0x0) {
        plVar7 = local_c8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_1a8 != 0) {
      plVar7 = local_1d8;
      if (local_1b8 != (longlong *)0x0) {
        plVar7 = local_1b8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_1b8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x720) != 0) {
    FName::FName(&local_3f8,L"OnMayhemOptionFocused",1);
    lVar8 = *(longlong *)(param_1 + 0x720);
    FWeakObjectPtr::operator=(lVar8 + 0x1d0,param_1);
    *(undefined8 *)(lVar8 + 0x1d8) = local_3f8;
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_280,L"Apply",L"GFxMayhemMenu",L"MayhemApplyButtonLabel");
    FUN_142ed3af0(*(undefined8 *)(param_1 + 0x720),uVar6,0);
    if (local_278 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_278 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_278)(local_278);
        LOCK();
        piVar1 = (int *)((longlong)local_278 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_278 + 8))(local_278,1);
        }
      }
    }
    FName::FName(&local_3f0,L"OnMayhemApplyButtonClicked",1);
    lVar8 = *(longlong *)(param_1 + 0x720);
    FWeakObjectPtr::operator=(lVar8 + 0x1b0,param_1);
    *(undefined8 *)(lVar8 + 0x1b8) = local_3f0;
    local_168 = (longlong *)0x0;
    local_158 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_188);
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[1] = param_1;
      *puVar9 = &PTR_FUN_143f77b70;
    }
    local_198[0] = &LAB_140faeb90;
    uVar6 = FUN_1420849a0(param_1,local_a8,local_198);
    FUN_14208c260(param_1,uVar6);
    if (local_68 != 0) {
      plVar7 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar7 = local_78;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_158 != 0) {
      plVar7 = local_188;
      if (local_168 != (longlong *)0x0) {
        plVar7 = local_168;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_168 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  uVar6 = TScriptInterface<IBlendableInterface>::
          TScriptInterface<IBlendableInterface><UMaterialInterface>
                    (local_250,*(undefined8 *)(param_1 + 0x710));
  FUN_142ed36d0(param_1,uVar6,0);
  FUN_140fcf4f0(param_1);
  FUN_140fd3460(param_1);
  FUN_140fda1b0(param_1);
  FUN_142ecd4d0(param_1);
  return;
}



// FUNCTION 140fc63f0 FUN_140fc63f0 body=799 status=ok
// SIG undefined FUN_140fc63f0(void)

void FUN_140fc63f0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  FUN_140efe5e0();
  local_90 = 0x15;
  local_98 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"missionCompletedText",0x2a);
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_98,0,6,&local_a8);
  *(undefined8 *)(param_1 + 0x598) = uVar3;
  plVar5 = local_a8;
  for (iVar4 = (int)local_a0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  local_78 = 0;
  local_70 = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"missionCompletedTextShadow",0x36);
  local_88 = (longlong *)0x0;
  local_80 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_78,0,6,&local_88);
  *(undefined8 *)(param_1 + 0x5a0) = uVar3;
  plVar5 = local_88;
  for (iVar4 = (int)local_80; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  if ((*(longlong **)(param_1 + 0x598) != (longlong *)0x0) && (*(longlong *)(param_1 + 0x5a0) != 0))
  {
    lVar2 = **(longlong **)(param_1 + 0x598);
    uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,L"MISSION COMPLETE",L"MissionCompletedNotificationWidget",
                       L"MissionComplete");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x598),uVar3,1,0);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    lVar2 = **(longlong **)(param_1 + 0x5a0);
    uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_30,L"MISSION COMPLETE",L"MissionCompletedNotificationWidget",
                       L"MissionComplete");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x5a0),uVar3,1,0);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_28 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
  }
  local_58 = 0;
  local_50 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"missionNameText",0x20);
  local_68 = (longlong *)0x0;
  local_60 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_58,0,6,&local_68);
  *(undefined8 *)(param_1 + 0x5a8) = uVar3;
  plVar5 = local_68;
  for (iVar4 = (int)local_60; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x5b0) != '\0') {
    *(undefined1 *)(param_1 + 0x5b0) = 0;
    FUN_140fd9420(param_1);
  }
  return;
}



// FUNCTION 140fc6710 FUN_140fc6710 body=5653 status=ok
// SIG undefined FUN_140fc6710(void)

void FUN_140fc6710(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_4c8;
  undefined8 local_4c0;
  longlong *local_4b8;
  undefined8 local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  longlong *local_498;
  undefined8 local_490;
  longlong *local_488;
  undefined8 local_480;
  longlong local_478;
  undefined8 local_470;
  longlong *local_468;
  undefined8 local_460;
  longlong local_458;
  undefined8 local_450;
  longlong *local_448;
  undefined8 local_440;
  longlong *local_438;
  undefined8 local_430;
  longlong local_428;
  undefined8 local_420;
  longlong *local_418;
  undefined8 local_410;
  longlong local_408;
  undefined8 local_400;
  longlong *local_3f8;
  undefined8 local_3f0;
  longlong local_3e8;
  undefined8 local_3e0;
  longlong *local_3d8;
  undefined8 local_3d0;
  longlong local_3c8;
  undefined8 local_3c0;
  longlong *local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  undefined8 local_390;
  longlong *local_388;
  undefined8 local_380;
  longlong local_378;
  undefined8 local_370;
  longlong *local_368;
  undefined8 local_360;
  longlong *local_358;
  undefined8 local_350;
  longlong local_348;
  undefined8 local_340;
  longlong *local_338;
  undefined8 local_330;
  longlong local_328;
  undefined8 local_320;
  longlong *local_318;
  undefined8 local_310;
  longlong local_308;
  undefined8 local_300;
  longlong *local_2f8;
  undefined8 local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  longlong *local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  undefined8 local_2c0;
  longlong *local_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  undefined8 local_290;
  longlong local_288;
  undefined8 local_280;
  longlong *local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_260;
  longlong local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong local_188 [2];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0 [3];
  undefined1 *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146873480) && (_Init_thread_header(&DAT_146873480), DAT_146873480 == -1)) {
    FName::FName(&DAT_146873478,L"AcceptMission",1);
    _Init_thread_footer(&DAT_146873480);
  }
  if ((*piVar6 < DAT_146873490) && (_Init_thread_header(&DAT_146873490), DAT_146873490 == -1)) {
    FName::FName(&DAT_146873488,L"RejectMission",1);
    _Init_thread_footer(&DAT_146873490);
  }
  FUN_142ecbc80(param_1);
  iVar9 = 0;
  local_340 = 0xd;
  local_348 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_348,0);
  FGenericPlatformString::Memcpy(local_348,L"acceptButton",0x1a);
  local_358 = (longlong *)0x0;
  local_350 = 0;
  uVar2 = FUN_140f9a0c0(param_1,&local_348,0,6,&local_358);
  *(undefined8 *)(param_1 + 0x6b8) = uVar2;
  plVar4 = local_358;
  for (iVar7 = (int)local_350; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_358 != (longlong *)0x0) {
    FMemory::Free(local_358);
  }
  if (local_348 != 0) {
    FMemory::Free();
  }
  local_328 = 0;
  local_320 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_328,0);
  FGenericPlatformString::Memcpy(local_328,L"declineButton",0x1c);
  local_338 = (longlong *)0x0;
  local_330 = 0;
  uVar2 = FUN_140f9a0c0(param_1,&local_328,0,6,&local_338);
  *(undefined8 *)(param_1 + 0x6c0) = uVar2;
  plVar4 = local_338;
  for (iVar7 = (int)local_330; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_338 != (longlong *)0x0) {
    FMemory::Free(local_338);
  }
  if (local_328 != 0) {
    FMemory::Free();
  }
  local_308 = 0;
  local_300 = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_308,0);
  FGenericPlatformString::Memcpy(local_308,L"missionDescriptionText",0x2e);
  local_318 = (longlong *)0x0;
  local_310 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_308,0,6,&local_318);
  *(undefined8 *)(param_1 + 0x6c8) = uVar2;
  plVar4 = local_318;
  for (iVar7 = (int)local_310; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_318 != (longlong *)0x0) {
    FMemory::Free(local_318);
  }
  if (local_308 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    local_2e8 = 0;
    local_2e0 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e8,0);
    FGenericPlatformString::Memcpy(local_2e8,L"descriptionText",0x20);
    local_2f8 = (longlong *)0x0;
    local_2f0 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x6c8),param_1 + 0x6d0,&local_2e8,0,6,&local_2f8);
    plVar4 = local_2f8;
    for (iVar7 = (int)local_2f0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_2f8 != (longlong *)0x0) {
      FMemory::Free(local_2f8);
    }
    if (local_2e8 != 0) {
      FMemory::Free();
    }
    local_2c8 = 0;
    local_2c0 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c8,0);
    FGenericPlatformString::Memcpy(local_2c8,L"scrollBar",0x14);
    local_2d8 = (longlong *)0x0;
    local_2d0 = 0;
    local_168 = 0;
    FUN_140e98f00(*(undefined8 *)(param_1 + 0x6c8),param_1 + 0x6d8,&local_2c8,0,6,&local_2d8);
    plVar4 = local_2d8;
    for (iVar7 = (int)local_2d0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_2d8 != (longlong *)0x0) {
      FMemory::Free(local_2d8);
    }
    if (local_2c8 != 0) {
      FMemory::Free();
    }
    local_2a8 = 0;
    local_2a0 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
    FGenericPlatformString::Memcpy(local_2a8,L"gridArea",0x12);
    local_2b8 = (longlong *)0x0;
    local_2b0 = 0;
    local_160 = 0;
    FUN_140e98b90(*(undefined8 *)(param_1 + 0x6c8),param_1 + 0x6e0,&local_2a8,0,6,&local_2b8);
    plVar4 = local_2b8;
    for (iVar7 = (int)local_2b0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_2b8 != (longlong *)0x0) {
      FMemory::Free(local_2b8);
    }
    if (local_2a8 != 0) {
      FMemory::Free();
    }
  }
  if (((*(longlong *)(param_1 + 0x6d0) != 0) && (*(longlong *)(param_1 + 0x6d8) != 0)) &&
     (*(longlong *)(param_1 + 0x6e0) != 0)) {
    FUN_142f0f790(*(longlong *)(param_1 + 0x6d8),1);
    FUN_142f118f0(*(undefined8 *)(param_1 + 0x6d0),*(undefined8 *)(param_1 + 0x6d8),
                  *(undefined8 *)(param_1 + 0x6e0));
  }
  local_288 = 0;
  local_280 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
  FGenericPlatformString::Memcpy(local_288,L"missionTitleText",0x22);
  local_298 = (longlong *)0x0;
  local_290 = 0;
  local_158 = 0;
  uVar2 = FUN_140ac4770(param_1,&local_288,0,6,&local_298);
  *(undefined8 *)(param_1 + 0x6e8) = uVar2;
  plVar4 = local_298;
  for (iVar7 = (int)local_290; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_298 != (longlong *)0x0) {
    FMemory::Free(local_298);
  }
  if (local_288 != 0) {
    FMemory::Free();
  }
  local_268 = 0;
  local_260 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
  FGenericPlatformString::Memcpy(local_268,L"missionLevelText",0x22);
  local_278 = (longlong *)0x0;
  local_270 = 0;
  local_150 = 0;
  uVar2 = FUN_140ac4770(param_1,&local_268,0,6,&local_278);
  *(undefined8 *)(param_1 + 0x6f0) = uVar2;
  plVar4 = local_278;
  for (iVar7 = (int)local_270; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_278 != (longlong *)0x0) {
    FMemory::Free(local_278);
  }
  if (local_268 != 0) {
    FMemory::Free();
  }
  local_248 = 0;
  local_240 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
  FGenericPlatformString::Memcpy(local_248,L"missionLocationText",0x28);
  local_438 = (longlong *)0x0;
  local_430 = 0;
  local_148 = 0;
  uVar2 = FUN_140ac4770(param_1,&local_248,0,6,&local_438);
  *(undefined8 *)(param_1 + 0x6f8) = uVar2;
  plVar4 = local_438;
  for (iVar7 = (int)local_430; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_438 != (longlong *)0x0) {
    FMemory::Free(local_438);
  }
  if (local_248 != 0) {
    FMemory::Free();
  }
  local_228 = 0;
  local_220 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
  FGenericPlatformString::Memcpy(local_228,L"multiMissionNavBar",0x26);
  local_238 = (longlong *)0x0;
  local_230 = 0;
  local_140 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_228,0,6,&local_238);
  *(undefined8 *)(param_1 + 0x700) = uVar2;
  plVar4 = local_238;
  for (iVar7 = (int)local_230; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_238 != (longlong *)0x0) {
    FMemory::Free(local_238);
  }
  if (local_228 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x700) != 0) {
    local_208 = 0;
    local_200 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
    FGenericPlatformString::Memcpy(local_208,L"navLeftHint",0x18);
    local_218 = (longlong *)0x0;
    local_210 = 0;
    local_138 = 0;
    uVar2 = FUN_140ecba50(*(undefined8 *)(param_1 + 0x700),&local_208,0,6,&local_218);
    *(undefined8 *)(param_1 + 0x708) = uVar2;
    plVar4 = local_218;
    for (iVar7 = (int)local_210; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_218 != (longlong *)0x0) {
      FMemory::Free(local_218);
    }
    if (local_208 != 0) {
      FMemory::Free();
    }
    local_1e8 = 0;
    local_1e0 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
    FGenericPlatformString::Memcpy(local_1e8,L"leftButton",0x16);
    local_1f8 = (longlong *)0x0;
    local_1f0 = 0;
    local_130 = 0;
    uVar2 = FUN_140f9a360(*(undefined8 *)(param_1 + 0x700),&local_1e8,0,6,&local_1f8);
    *(undefined8 *)(param_1 + 0x710) = uVar2;
    plVar4 = local_1f8;
    for (iVar7 = (int)local_1f0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_1f8 != (longlong *)0x0) {
      FMemory::Free(local_1f8);
    }
    if (local_1e8 != 0) {
      FMemory::Free();
    }
    local_1c8 = 0;
    local_1c0 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
    FGenericPlatformString::Memcpy(local_1c8,L"navRightHint",0x1a);
    local_1d8 = (longlong *)0x0;
    local_1d0 = 0;
    local_128 = 0;
    uVar2 = FUN_140ecba50(*(undefined8 *)(param_1 + 0x700),&local_1c8,0,6,&local_1d8);
    *(undefined8 *)(param_1 + 0x718) = uVar2;
    plVar4 = local_1d8;
    for (iVar7 = (int)local_1d0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_1d8 != (longlong *)0x0) {
      FMemory::Free(local_1d8);
    }
    if (local_1c8 != 0) {
      FMemory::Free();
    }
    local_4c8 = 0;
    local_4c0 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4c8,0);
    FGenericPlatformString::Memcpy(local_4c8,L"rightButton",0x18);
    local_1b8 = (longlong *)0x0;
    local_1b0 = 0;
    local_b8 = 0;
    uVar2 = FUN_140f9a360(*(undefined8 *)(param_1 + 0x700),&local_4c8,0,6,&local_1b8);
    *(undefined8 *)(param_1 + 0x720) = uVar2;
    plVar4 = local_1b8;
    for (iVar7 = (int)local_1b0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_1b8 != (longlong *)0x0) {
      FMemory::Free(local_1b8);
    }
    if (local_4c8 != 0) {
      FMemory::Free();
    }
    local_4a8 = 0;
    local_4a0 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4a8,0);
    FGenericPlatformString::Memcpy(local_4a8,L"missionPips",0x18);
    local_4b8 = (longlong *)0x0;
    local_4b0 = 0;
    local_120 = 0;
    uVar2 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x700),&local_4a8,0,6,&local_4b8);
    *(undefined8 *)(param_1 + 0x728) = uVar2;
    plVar4 = local_4b8;
    for (iVar7 = (int)local_4b0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_4b8 != (longlong *)0x0) {
      FMemory::Free(local_4b8);
    }
    if (local_4a8 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x728) != 0) {
      plVar4 = (longlong *)(param_1 + 0x730);
      *(undefined4 *)(param_1 + 0x738) = 0;
      if (*(int *)(param_1 + 0x73c) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar4,0);
      }
      local_118 = 0;
      while( true ) {
        local_498 = (longlong *)0x0;
        local_490 = 0;
        FString::PrintfImpl(local_188,L"entry%i",iVar9);
        lVar3 = FUN_140f9a360(*(undefined8 *)(param_1 + 0x728),local_188,0,6,&local_498);
        if (local_188[0] != 0) {
          FMemory::Free();
        }
        plVar8 = local_498;
        for (iVar7 = (int)local_490; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          plVar8 = plVar8 + 2;
        }
        if (local_498 != (longlong *)0x0) {
          FMemory::Free(local_498);
        }
        if (lVar3 == 0) break;
        iVar7 = *(int *)(param_1 + 0x738);
        iVar9 = iVar9 + 1;
        *(int *)(param_1 + 0x738) = iVar7 + 1;
        if (*(int *)(param_1 + 0x73c) < iVar7 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar7);
        }
        *(longlong *)(*plVar4 + (longlong)iVar7 * 8) = lVar3;
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x718);
    if (lVar3 != 0) {
      local_1a0 = 0;
      local_1a8 = lVar3;
      uVar2 = UBlendableInterface::GetPrivateStaticClass();
      local_1a0 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar2);
      FUN_142ecff00(param_1,&local_1a8,DAT_1468730f0);
    }
    lVar3 = *(longlong *)(param_1 + 0x708);
    if (lVar3 != 0) {
      local_190 = 0;
      local_198 = lVar3;
      uVar2 = UBlendableInterface::GetPrivateStaticClass();
      local_190 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar2);
      FUN_142ecff00(param_1,&local_198,DAT_1468730f8);
    }
  }
  local_478 = 0;
  local_470 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_478,0);
  FGenericPlatformString::Memcpy(local_478,L"difficultyText",0x1e);
  local_488 = (longlong *)0x0;
  local_480 = 0;
  local_110 = 0;
  uVar2 = FUN_140ac4770(param_1,&local_478,0,6,&local_488);
  *(undefined8 *)(param_1 + 0x740) = uVar2;
  plVar4 = local_488;
  for (iVar7 = (int)local_480; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_488 != (longlong *)0x0) {
    FMemory::Free(local_488);
  }
  if (local_478 != 0) {
    FMemory::Free();
  }
  local_458 = 0;
  local_450 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_458,0);
  FGenericPlatformString::Memcpy(local_458,L"placardBG",0x14);
  local_468 = (longlong *)0x0;
  local_460 = 0;
  local_108 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_458,0,6,&local_468);
  *(undefined8 *)(param_1 + 0x748) = uVar2;
  plVar4 = local_468;
  for (iVar7 = (int)local_460; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_468 != (longlong *)0x0) {
    FMemory::Free(local_468);
  }
  if (local_458 != 0) {
    FMemory::Free();
  }
  local_428 = 0;
  local_420 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_428,0);
  FGenericPlatformString::Memcpy(local_428,L"placardTop",0x16);
  local_448 = (longlong *)0x0;
  local_440 = 0;
  local_100 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_428,0,6,&local_448);
  *(undefined8 *)(param_1 + 0x750) = uVar2;
  plVar4 = local_448;
  for (iVar7 = (int)local_440; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_448 != (longlong *)0x0) {
    FMemory::Free(local_448);
  }
  if (local_428 != 0) {
    FMemory::Free();
  }
  local_408 = 0;
  local_400 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_408,0);
  FGenericPlatformString::Memcpy(local_408,L"placardElementsBG",0x24);
  local_418 = (longlong *)0x0;
  local_410 = 0;
  local_f8 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_408,0,6,&local_418);
  *(undefined8 *)(param_1 + 0x758) = uVar2;
  plVar4 = local_418;
  for (iVar7 = (int)local_410; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_418 != (longlong *)0x0) {
    FMemory::Free(local_418);
  }
  if (local_408 != 0) {
    FMemory::Free();
  }
  local_3e8 = 0;
  local_3e0 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3e8,0);
  FGenericPlatformString::Memcpy(local_3e8,L"placardTopText",0x1e);
  local_3f8 = (longlong *)0x0;
  local_3f0 = 0;
  local_f0 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_3e8,0,6,&local_3f8);
  *(undefined8 *)(param_1 + 0x760) = uVar2;
  plVar4 = local_3f8;
  for (iVar7 = (int)local_3f0; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_3f8 != (longlong *)0x0) {
    FMemory::Free(local_3f8);
  }
  if (local_3e8 != 0) {
    FMemory::Free();
  }
  local_3c8 = 0;
  local_3c0 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3c8,0);
  FGenericPlatformString::Memcpy(local_3c8,L"modalDetails",0x1a);
  local_3d8 = (longlong *)0x0;
  local_3d0 = 0;
  local_e8 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_3c8,0,6,&local_3d8);
  *(undefined8 *)(param_1 + 0x768) = uVar2;
  plVar4 = local_3d8;
  for (iVar7 = (int)local_3d0; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_3d8 != (longlong *)0x0) {
    FMemory::Free(local_3d8);
  }
  if (local_3c8 != 0) {
    FMemory::Free();
  }
  local_3a8 = 0;
  local_3a0 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3a8,0);
  FGenericPlatformString::Memcpy(local_3a8,L"friendAmount",0x1a);
  local_3b8 = (longlong *)0x0;
  local_3b0 = 0;
  local_e0 = 0;
  uVar2 = FUN_140ac4770(param_1,&local_3a8,0,6,&local_3b8);
  *(undefined8 *)(param_1 + 0x770) = uVar2;
  plVar4 = local_3b8;
  for (iVar7 = (int)local_3b0; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_3b8 != (longlong *)0x0) {
    FMemory::Free(local_3b8);
  }
  if (local_3a8 != 0) {
    FMemory::Free();
  }
  local_258 = 0;
  local_250 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
  FGenericPlatformString::Memcpy(local_258,L"friendsOnMissionText",0x2a);
  local_398 = (longlong *)0x0;
  local_390 = 0;
  local_d8 = 0;
  uVar2 = FUN_140ac4770(param_1,&local_258,0,6,&local_398);
  *(undefined8 *)(param_1 + 0x778) = uVar2;
  plVar4 = local_398;
  for (iVar7 = (int)local_390; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_398 != (longlong *)0x0) {
    FMemory::Free(local_398);
  }
  if (local_258 != 0) {
    FMemory::Free();
  }
  local_378 = 0;
  local_370 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_378,0);
  FGenericPlatformString::Memcpy(local_378,L"descriptionCycleGlyph",0x2c);
  local_388 = (longlong *)0x0;
  local_380 = 0;
  local_d0 = 0;
  uVar2 = FUN_140ac4770(param_1,&local_378,0,6,&local_388);
  *(undefined8 *)(param_1 + 0x780) = uVar2;
  plVar4 = local_388;
  for (iVar7 = (int)local_380; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_388 != (longlong *)0x0) {
    FMemory::Free(local_388);
  }
  if (local_378 != 0) {
    FMemory::Free();
  }
  lVar3 = *(longlong *)(param_1 + 0x6b8);
  if (lVar3 != 0) {
    FWeakObjectPtr::operator=(lVar3 + 0x1f0,param_1);
    *(undefined8 *)(lVar3 + 0x1f8) = DAT_146873478;
  }
  lVar3 = *(longlong *)(param_1 + 0x6c0);
  if (lVar3 != 0) {
    FWeakObjectPtr::operator=(lVar3 + 0x1f0,param_1);
    *(undefined8 *)(lVar3 + 0x1f8) = DAT_146873488;
  }
  plVar4 = (longlong *)FUN_142eb75d0(param_1);
  if (plVar4 != (longlong *)0x0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_c8 = FUN_1414aa4c0();
      uVar2 = (**(code **)(*plVar4 + 0x628))(plVar4,local_c8);
      FWeakObjectPtr::operator=(param_1 + 0x788,uVar2);
    }
  }
  FUN_140fcc6e0(param_1);
  FUN_140fcf600(param_1);
  FUN_140fe16e0(param_1);
  local_368 = (longlong *)0x0;
  local_360 = 0;
  local_c0 = 0;
  uVar2 = FName::ToString(param_1 + 0x850,local_b0);
  uVar2 = FUN_140e96f30(param_1,uVar2,0,6,&local_368);
  if (local_b0[0] != 0) {
    FMemory::Free();
  }
  plVar4 = local_368;
  for (iVar7 = (int)local_360; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_368 != (longlong *)0x0) {
    FMemory::Free(local_368);
  }
  local_68 = 0;
  local_58 = 0;
  local_178 = param_1;
  uStack_170 = uVar2;
  puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_88);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar5 + 1) = (undefined4)local_178;
    *(undefined4 *)((longlong)puVar5 + 0xc) = local_178._4_4_;
    *(undefined4 *)(puVar5 + 2) = (undefined4)uStack_170;
    *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_170._4_4_;
  }
  local_98[0] = &LAB_140faeec0;
  FUN_14204c280(local_98);
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  FUN_142ecd4d0(param_1);
  return;
}



// FUNCTION 140fc7d30 FUN_140fc7d30 body=2988 status=ok
// SIG undefined FUN_140fc7d30(void)

void FUN_140fc7d30(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  code *local_278;
  ulonglong uStack_270;
  longlong *local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  wchar_t *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  code *local_a8;
  ulonglong uStack_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  
  thunk_FUN_142ecbc80();
  *(longlong *)(param_1 + 0x898) = *(longlong *)(param_1 + 0x600);
  if (*(longlong *)(param_1 + 0x600) != 0) {
    local_1c8 = 0;
    local_1c0 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
    FGenericPlatformString::Memcpy(local_1c8,L"listContent.navBar",0x26);
    local_1d8 = (longlong *)0x0;
    local_1d0 = 0;
    local_res18 = 0;
    cVar5 = FUN_140f15e80(*(undefined8 *)(param_1 + 0x898),param_1 + 0x8a0,&local_1c8,0,6,&local_1d8
                         );
    plVar8 = local_1d8;
    for (iVar9 = (int)local_1d0; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_1d8 != (longlong *)0x0) {
      FMemory::Free(local_1d8);
    }
    if (local_1c8 != 0) {
      FMemory::Free();
    }
    if (cVar5 != '\0') {
      local_248 = 0;
      local_240 = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
      FGenericPlatformString::Memcpy(local_248,L"categoryLabel",0x1c);
      local_258 = (longlong *)0x0;
      local_250 = 0;
      local_res20 = 0;
      FUN_140e99270(*(undefined8 *)(param_1 + 0x8a0),param_1 + 0x8e8,&local_248,0,6,&local_258);
      plVar8 = local_258;
      for (iVar9 = (int)local_250; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      if (local_258 != (longlong *)0x0) {
        FMemory::Free(local_258);
      }
      if (local_248 != 0) {
        FMemory::Free();
      }
    }
    local_228 = 0;
    local_220 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
    FGenericPlatformString::Memcpy(local_228,L"listContent.missionLogList",0x36);
    local_238 = (longlong *)0x0;
    local_230 = 0;
    local_d8 = 0;
    FUN_140f15e80(*(undefined8 *)(param_1 + 0x898),param_1 + 0x918,&local_228,0,6,&local_238);
    plVar8 = local_238;
    for (iVar9 = (int)local_230; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_238 != (longlong *)0x0) {
      FMemory::Free(local_238);
    }
    if (local_228 != 0) {
      FMemory::Free();
    }
    local_208 = 0;
    local_200 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
    FGenericPlatformString::Memcpy(local_208,L"listContent.listFilterHint",0x36);
    local_218 = (longlong *)0x0;
    local_210 = 0;
    local_d0 = 0;
    FUN_140e98630(*(undefined8 *)(param_1 + 0x898),param_1 + 0x8c8,&local_208,0,6,&local_218);
    plVar8 = local_218;
    for (iVar9 = (int)local_210; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_218 != (longlong *)0x0) {
      FMemory::Free(local_218);
    }
    if (local_208 != 0) {
      FMemory::Free();
    }
    local_1e8 = 0;
    local_1e0 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
    FGenericPlatformString::Memcpy(local_1e8,L"listContent.emptyText",0x2c);
    local_1f8 = (longlong *)0x0;
    local_1f0 = 0;
    local_c8 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x898),(longlong *)(param_1 + 0x870),&local_1e8,0,6,
                  &local_1f8);
    plVar8 = local_1f8;
    for (iVar9 = (int)local_1f0; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_1f8 != (longlong *)0x0) {
      FMemory::Free(local_1f8);
    }
    if (local_1e8 != 0) {
      FMemory::Free();
    }
    plVar8 = *(longlong **)(param_1 + 0x870);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x2b0))(plVar8,param_1 + 0x7a8,1,0);
    }
    local_1b8 = 0;
    local_1b0 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
    FGenericPlatformString::Memcpy(local_1b8,L"missionDescriptionBox",0x2c);
    local_268 = (longlong *)0x0;
    local_260 = 0;
    local_c0 = 0;
    FUN_140f9df20(*(undefined8 *)(param_1 + 0x898),param_1 + 0x908,&local_1b8,0,6,&local_268);
    plVar8 = local_268;
    for (iVar9 = (int)local_260; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_268 != (longlong *)0x0) {
      FMemory::Free(local_268);
    }
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    local_198 = 0;
    local_190 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
    FGenericPlatformString::Memcpy(local_198,L"logDescriptionBox",0x24);
    local_1a8 = (longlong *)0x0;
    local_1a0 = 0;
    local_b8 = 0;
    FUN_140f9df20(*(undefined8 *)(param_1 + 0x898),param_1 + 0x910,&local_198,0,6,&local_1a8);
    plVar8 = local_1a8;
    for (iVar9 = (int)local_1a0; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_1a8 != (longlong *)0x0) {
      FMemory::Free(local_1a8);
    }
    if (local_198 != 0) {
      FMemory::Free();
    }
    local_178 = 0;
    local_170 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
    FGenericPlatformString::Memcpy(local_178,L"socialWidgetMC",0x1e);
    local_188 = (longlong *)0x0;
    local_180 = 0;
    local_f8 = 0;
    cVar5 = FUN_140e98b90(*(undefined8 *)(param_1 + 0x898),param_1 + 0x970,&local_178,0,6,&local_188
                         );
    plVar8 = local_188;
    for (iVar9 = (int)local_180; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free(local_188);
    }
    if (local_178 != 0) {
      FMemory::Free();
    }
    if (cVar5 != '\0') {
      local_158 = 0;
      local_150 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
      FGenericPlatformString::Memcpy(local_158,L"socialWidgetHint",0x22);
      local_168 = (longlong *)0x0;
      local_160 = 0;
      local_f0 = 0;
      FUN_140e98630(*(undefined8 *)(param_1 + 0x970),param_1 + 0x980,&local_158,0,6,&local_168);
      plVar8 = local_168;
      for (iVar9 = (int)local_160; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      if (local_168 != (longlong *)0x0) {
        FMemory::Free(local_168);
      }
      if (local_158 != 0) {
        FMemory::Free();
      }
      local_138 = 0;
      local_130 = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
      FGenericPlatformString::Memcpy(local_138,L"onlineFriendsHeader",0x28);
      local_148 = (longlong *)0x0;
      local_140 = 0;
      local_e8 = 0;
      FUN_140e99270(*(undefined8 *)(param_1 + 0x970),param_1 + 0x978,&local_138,0,6,&local_148);
      plVar8 = local_148;
      for (iVar9 = (int)local_140; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      if (local_148 != (longlong *)0x0) {
        FMemory::Free(local_148);
      }
      if (local_138 != 0) {
        FMemory::Free();
      }
    }
    local_118 = 0;
    local_110 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    FGenericPlatformString::Memcpy(local_118,L"echoLogWidget",0x1c);
    local_128 = (longlong *)0x0;
    local_120 = 0;
    local_e0 = 0;
    FUN_140f9dbb0(*(undefined8 *)(param_1 + 0x898),param_1 + 0x8e0,&local_118,0,6,&local_128);
    plVar8 = local_128;
    for (iVar9 = (int)local_120; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_128 != (longlong *)0x0) {
      FMemory::Free(local_128);
    }
    if (local_118 != 0) {
      FMemory::Free();
    }
  }
  if ((*(longlong *)(param_1 + 0x898) != 0) &&
     (cVar5 = FUN_14208d2d0(*(longlong *)(param_1 + 0x898),param_1 + 0x8d0,L"locationInfo"),
     cVar5 != '\0')) {
    FUN_142056670(*(undefined8 *)(param_1 + 0x8d0),0);
  }
  plVar8 = *(longlong **)(param_1 + 0x910);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x278))(plVar8,0);
  }
  lVar2 = *(longlong *)(param_1 + 0x918);
  local_100 = (wchar_t *)0x0;
  local_108 = lVar2;
  if (lVar2 != 0) {
    uVar6 = UBlendableInterface::GetPrivateStaticClass();
    local_100 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar6);
  }
  FUN_142ed36d0(param_1,&local_108,0);
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    uStack_270 = uStack_270 & 0xffffffff00000000;
    local_278 = FUN_140fc1920;
    local_a8 = FUN_140fc1920;
    uStack_a0 = uStack_270;
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnNavCellSelectionChanged",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x8a0) + 0x180,param_1,&local_a8,local_res10);
    *(undefined1 *)(*(longlong *)(param_1 + 0x8a0) + 0x208) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x8a0) + 0x209) = 2;
    *(undefined1 *)(*(longlong *)(param_1 + 0x8a0) + 0x20a) = 0;
    local_res8 = param_1;
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_98,L"MISSIONS",L"GFxMissionLogMenu",L"MissionsNavLabel");
    FUN_140fad390(&local_res8,1,uVar6);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_90 + 1;
      lVar2 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_80,L"ECHO LOG",L"GFxMissionLogMenu",L"EchoLogNavLabel");
    FUN_140fad390(&local_res8,2,uVar6);
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_78 + 1;
      lVar2 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_68,L"TYPHON LOG",L"GFxMissionLogMenu",L"TyphonLogNavLabel");
    FUN_140fad390(&local_res8,3,uVar6);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_60 + 1;
      lVar2 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,L"ERIDIAN LOG",L"GFxMissionLogMenu",L"EridianLogNavLabel");
    FUN_140fad390(&local_res8,4,uVar6);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_48 + 1;
      lVar2 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  FUN_140fd22d0(param_1,0);
  FUN_140fb2b60(param_1,1);
  if (*(longlong *)(param_1 + 0x898) != 0) {
    local_278 = (code *)0x0;
    uStack_270 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,0);
    FGenericPlatformString::Memcpy(local_278,L"menuIntro",0x14);
    FUN_142088910(*(undefined8 *)(param_1 + 0x898),&local_278);
    if (local_278 != (code *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140fc88e0 FUN_140fc88e0 body=1420 status=ok
// SIG undefined FUN_140fc88e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fc88e0(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [24];
  undefined1 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar6 = FUN_141083c60();
  cVar4 = '\x01';
  if (lVar6 != 0) {
    cVar3 = FUN_14044af00(lVar6 + 0x978,0);
    if ((cVar3 == '\0') ||
       (cVar3 = FUN_14058c1e0(lVar6 + 0x978,*(undefined8 *)(lVar6 + 0x820)), cVar3 == '\0')) {
      cVar4 = '\0';
    }
    if (*(char *)(param_1 + 0x6bc) != cVar4) {
      *(char *)(param_1 + 0x6bc) = cVar4;
      LOCK();
      *(undefined4 *)(param_1 + 0x588) = 1;
      UNLOCK();
    }
  }
  FUN_14109d980(param_1,param_2);
  lVar6 = FUN_141083c60(param_1);
  uVar10 = 0;
  if (lVar6 != 0) {
    fVar16 = *(float *)(param_1 + 0xa48) * *(float *)(param_1 + 0xa48) +
             *(float *)(param_1 + 0xa4c) * *(float *)(param_1 + 0xa4c);
    if ((*(float *)(param_1 + 0x7f0) <= fVar16 && fVar16 != *(float *)(param_1 + 0x7f0)) ||
       (*(char *)(param_1 + 0xd18) != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((((bVar2) || (lVar7 = FUN_1412c3130(lVar6), lVar7 == 0)) &&
        (*(longlong *)(param_1 + 0x948) != 0)) && (*(char *)(lVar6 + 0x640) == '\0')) {
      uVar12 = *(ulonglong *)(param_1 + 0xce0);
      uVar14 = (longlong)*(int *)(param_1 + 0xce8) * 0x270 + uVar12;
      while ((uVar15 = uVar10, uVar12 != uVar14 &&
             (((*(longlong *)(uVar12 + 8) == 0 ||
               (lVar6 = *(longlong *)(*(longlong *)(uVar12 + 8) + 0x550), lVar6 == 0)) ||
              (cVar4 = FUN_142efed70(lVar6,*(undefined8 *)(param_1 + 0x948)), uVar15 = uVar12,
              cVar4 == '\0'))))) {
        uVar12 = uVar12 + 0x270;
      }
      FUN_140fde680(param_1,uVar15);
    }
  }
  if (*(char *)(param_1 + 0xa51) == '\t') {
    FUN_140fd33e0(param_1);
  }
  LOCK();
  iVar5 = *(int *)(param_1 + 0x6ec);
  *(int *)(param_1 + 0x6ec) = 0;
  UNLOCK();
  if (iVar5 != 0) {
    FUN_140fcdda0(param_1);
  }
  LOCK();
  iVar5 = *(int *)(param_1 + 0x6e8);
  *(int *)(param_1 + 0x6e8) = 0;
  UNLOCK();
  if (iVar5 != 0) {
    FUN_140fcd6a0(param_1);
  }
  LOCK();
  iVar5 = *(int *)(param_1 + 0x6b0);
  *(int *)(param_1 + 0x6b0) = 0;
  UNLOCK();
  if ((iVar5 != 0) && (plVar11 = *(longlong **)(param_1 + 0x928), plVar11 != (longlong *)0x0)) {
    bVar1 = *(byte *)(param_1 + 0xa50);
    if (bVar1 != 0) {
      if (bVar1 < 3) {
        (**(code **)(**(longlong **)(param_1 + 0x920) + 0x278))(*(longlong **)(param_1 + 0x920),0);
        plVar11 = *(longlong **)(param_1 + 0x928);
      }
      else if (bVar1 == 3) {
        local_d8 = 0;
        local_d0 = 0;
        uVar8 = FUN_1404b03b0();
        FText::FText(local_c8,uVar8);
        uVar12 = local_d0;
        lVar6 = (longlong)(int)local_d0;
        local_a8 = 0;
        local_a0 = 1;
        local_b0 = 1;
        iVar5 = (int)local_d0 + 1;
        local_d0 = CONCAT44(local_d0._4_4_,iVar5);
        if (local_d0._4_4_ < iVar5) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    (&local_d8,uVar12 & 0xffffffff);
        }
        *(undefined8 *)(local_d8 + lVar6 * 8) = DAT_1468730b8;
        iVar5 = *(int *)(param_1 + 0x918);
        if ((iVar5 < 0) || (*(int *)(param_1 + 0x808) <= iVar5)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = *(longlong *)(param_1 + 0x800) + (longlong)iVar5 * 0x28;
        }
        else {
          lVar6 = FUN_1404b03b0();
        }
        FText::operator=(local_c8,lVar6);
        plVar11 = (longlong *)(*(longlong *)(param_1 + 0x928) + 0x308);
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_d8,0);
        (**(code **)(**(longlong **)(param_1 + 0x920) + 0x278))(*(longlong **)(param_1 + 0x920),1);
        (**(code **)(**(longlong **)(param_1 + 0x928) + 0x278))(*(longlong **)(param_1 + 0x928),1);
        UE4Tuple_Private::
        TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
        ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                  (&local_d8);
        goto LAB_140fc8bdb;
      }
    }
    (**(code **)(*plVar11 + 0x278))(plVar11,0);
  }
LAB_140fc8bdb:
  LOCK();
  iVar5 = *(int *)(param_1 + 0x6b8);
  *(int *)(param_1 + 0x6b8) = 0;
  UNLOCK();
  if (iVar5 != 0) {
    LOCK();
    iVar5 = *(int *)(param_1 + 0x6b4);
    *(int *)(param_1 + 0x6b4) = 1;
    UNLOCK();
    if (iVar5 == 0) {
      FUN_140fcce10(param_1);
    }
    local_e0 = param_1;
    if ((*(longlong *)(param_1 + 0x8d8) != 0) &&
       (iVar5 = FUN_142eb7440(), uVar12 = uVar10, 0 < iVar5)) {
      do {
        uVar14 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x8d8),uVar12);
        if (uVar14 == 0) {
LAB_140fc8c6f:
          uVar14 = uVar10;
        }
        else {
          lVar6 = URemnantGameInstance::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(uVar14 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar14 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140fc8c6f;
        }
        FUN_140fa8f20(&local_e0,uVar14);
        uVar13 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar13;
      } while ((int)uVar13 < iVar5);
    }
  }
  LOCK();
  iVar5 = *(int *)(param_1 + 0x6c8);
  *(int *)(param_1 + 0x6c8) = 0;
  UNLOCK();
  if (iVar5 != 0) {
    FUN_140fd07e0(param_1);
  }
  LOCK();
  iVar5 = *(int *)(param_1 + 0x6c0);
  *(int *)(param_1 + 0x6c0) = 0;
  UNLOCK();
  if (iVar5 != 0) {
    FWeakObjectPtr::operator=(&local_e8,param_1);
    local_68 = (longlong *)0x0;
    local_58 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_88);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &PTR_FUN_1444f8920;
      puVar9[1] = param_1;
      *(undefined4 *)(puVar9 + 2) = local_e8;
      *(undefined4 *)((longlong)puVar9 + 0x14) = local_e4;
    }
    local_98[0] = &LAB_140faec40;
    FUN_14208c260(param_1,local_98);
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
  }
  LOCK();
  iVar5 = *(int *)(param_1 + 0x6c4);
  *(int *)(param_1 + 0x6c4) = 0;
  UNLOCK();
  if ((iVar5 != 0) && (cVar4 = *(char *)(param_1 + 0xa51), cVar4 != '\0')) {
    if (cVar4 == '\a') {
      FUN_140fd0b80(param_1);
    }
    else if (cVar4 == '\b') {
      FUN_140fb4e70(param_1,0);
      if ((*(longlong *)(param_1 + 0x908) != 0) && (*(longlong *)(param_1 + 0x9c8) != 0)) {
        cVar4 = *(char *)(param_1 + 0xa50);
        if (cVar4 == '\x01') {
          lVar6 = FUN_141083c60(param_1);
          if (lVar6 != 0) {
            uVar10 = FWeakObjectPtr::Get(lVar6 + 0x754);
          }
          FUN_1411f4b70(*(undefined8 *)(param_1 + 0x9c8),uVar10);
        }
        else {
          if (cVar4 == '\x02') {
            lVar6 = FUN_141083c60(param_1);
            if (lVar6 != 0) {
              uVar10 = FWeakObjectPtr::Get(lVar6 + 0x780);
            }
            FUN_1411f4f50(*(undefined8 *)(param_1 + 0x9c8),uVar10,1);
            LOCK();
            *(undefined4 *)(param_1 + 0x6e8) = 1;
            UNLOCK();
            return;
          }
          if (cVar4 == '\x03') {
            FUN_1411f4750();
            LOCK();
            *(undefined4 *)(param_1 + 0x6e8) = 1;
            UNLOCK();
            return;
          }
        }
        LOCK();
        *(undefined4 *)(param_1 + 0x6e8) = 1;
        UNLOCK();
      }
    }
    else if (cVar4 == '\t') {
      LOCK();
      *(undefined4 *)(param_1 + 0x6c0) = 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 140fc8e70 FUN_140fc8e70 body=95 status=ok
// SIG undefined FUN_140fc8e70(void)

void FUN_140fc8e70(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((*(longlong *)(param_1 + 0x860) != 0) &&
     (bVar2 = *(longlong *)(*(longlong *)(param_1 + 0x860) + 0xc48) != 0,
     (bool)*(char *)(param_1 + 0x868) != bVar2)) {
    *(bool *)(param_1 + 0x868) = bVar2;
    LOCK();
    *(undefined4 *)(param_1 + 0x588) = 1;
    UNLOCK();
  }
  FUN_14109d980();
  LOCK();
  iVar1 = *(int *)(param_1 + 0x8f4);
  *(int *)(param_1 + 0x8f4) = 0;
  UNLOCK();
  if (iVar1 != 0) {
    FUN_140fd22d0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140fc8ed0 FUN_140fc8ed0 body=684 status=ok
// SIG undefined FUN_140fc8ed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fc8ed0(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined8 local_38;
  undefined4 local_30;
  
  if (*(char *)(param_1 + 0x839) != '\0') {
    *(undefined1 *)(param_1 + 0x839) = 0;
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x728);
    if (cVar3 != '\0') {
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x728);
      FUN_140fd3de0(param_1,lVar5 + 0x660);
    }
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x6f0));
  lVar5 = *(longlong *)(param_1 + 0x6e0);
  lVar9 = (longlong)*(int *)(param_1 + 0x6e8) * 0xd0 + lVar5;
  for (; lVar5 != lVar9; lVar5 = lVar5 + 0xd0) {
    FUN_140fdf960(param_1,lVar5,param_2);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x6f0));
  lVar9 = FUN_140eccca0(param_1);
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  lVar8 = 0;
  lVar5 = lVar8;
  if (lVar6 != 0) {
    lVar7 = FUN_14145f370();
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
      lVar5 = *(longlong *)(lVar6 + 0x528);
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x698);
  if (((lVar6 != 0) && (lVar9 != 0)) && (lVar5 != 0)) {
    if (*(char *)(param_1 + 0x838) == '\0') {
      lVar6 = *(longlong *)(lVar9 + 0x168);
      if (lVar6 == 0) {
        local_38 = _DAT_1468b5d90;
        local_30 = DAT_1468b5d98;
      }
      else {
        local_38 = *(undefined8 *)(lVar6 + 0x220);
        local_30 = *(undefined4 *)(lVar6 + 0x228);
      }
      fVar11 = (float)local_38;
      uVar2 = (ulonglong)local_38 >> 0x20;
      uVar10 = __libm_sse2_sincosf_(*(undefined4 *)(param_1 + 0x6ac));
      local_res18[0] = 0;
      *(undefined4 *)(param_1 + 0x6a8) = local_30;
      local_38 = CONCAT44((float)uVar10 * *(float *)(param_1 + 0x644) + (float)uVar2,
                          (float)((ulonglong)uVar10 >> 0x20) * *(float *)(param_1 + 0x644) + fVar11)
      ;
      *(undefined8 *)(param_1 + 0x6a0) = local_38;
      local_30 = *(undefined4 *)(param_1 + 0x6a8);
      FUN_140fafb50(param_1,&local_38,lVar9,lVar5,local_res18,&local_res8);
      lVar6 = *(longlong *)(param_1 + 0x698);
    }
    else {
      local_res8 = *(undefined8 *)(param_1 + 0x670);
    }
    FUN_14208ff10(lVar6,(undefined4)local_res8,local_res8._4_4_);
  }
  if ((0 < *(int *)(param_1 + 0x83c)) &&
     (iVar4 = *(int *)(param_1 + 0x83c) + -1, *(int *)(param_1 + 0x83c) = iVar4, iVar4 == 0)) {
    if (*(longlong *)(param_1 + 0x6b0) != 0) {
      lVar8 = FUN_1412bfdd0();
    }
    FUN_140faf6e0(param_1,lVar8);
  }
  return;
}



// FUNCTION 140fc9180 FUN_140fc9180 body=443 status=ok
// SIG undefined FUN_140fc9180(void)

undefined4 FUN_140fc9180(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar4 = *(longlong *)(param_1 + 0x988);
  if (((lVar4 != 0) && (*(char *)(lVar4 + 0x1a4) != '\0')) &&
     (*(longlong *)(lVar4 + 0x1e0) == *(longlong *)(param_1 + 0x840))) {
    iVar2 = *(int *)(lVar4 + 0x1a0);
    if (iVar2 == *(int *)(param_1 + 0x850)) {
      uVar7 = 1;
    }
    else if (iVar2 == *(int *)(param_1 + 0x854)) {
      uVar7 = 2;
    }
    else if (iVar2 == *(int *)(param_1 + 0x858)) {
      lVar4 = FUN_140e971d0(param_1);
      if ((lVar4 != 0) && (lVar5 = FUN_141083c60(param_1), lVar5 != 0)) {
        lVar8 = *(longlong *)(lVar5 + 0x7d8);
        lVar5 = (longlong)*(int *)(lVar5 + 0x7e0) * 0x270 + lVar8;
        if (lVar8 != lVar5) {
          lVar9 = lVar8 + 0x18;
          do {
            cVar3 = FWeakObjectPtr::IsValid(lVar9);
            if (cVar3 != '\0') {
              lVar6 = FWeakObjectPtr::Get(lVar9);
              cVar3 = FWeakObjectPtr::IsValid(lVar6 + 0x590);
              if (cVar3 != '\0') {
                uVar7 = *(undefined8 *)(lVar4 + 0x848);
                lVar6 = FWeakObjectPtr::Get(lVar9);
                cVar3 = FUN_14058c1e0(lVar6 + 0x590,uVar7);
                if (cVar3 != '\0') {
                  lVar6 = FWeakObjectPtr::Get(lVar9);
                  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                            (lVar6 + 0x460,0);
                }
              }
            }
            lVar8 = lVar8 + 0x270;
            lVar9 = lVar9 + 0x270;
          } while (lVar8 != lVar5);
        }
      }
      bVar10 = *(char *)(param_1 + 0xd31) != '\0';
      if (bVar10) {
        *(undefined1 *)(param_1 + 0xd31) = 0;
      }
      uVar7 = FUN_140fb23b0(param_1);
      FUN_140fde680(param_1,uVar7);
      if (bVar10) {
        *(undefined1 *)(param_1 + 0xd31) = 1;
      }
      uVar7 = 3;
    }
    else if (iVar2 == *(int *)(param_1 + 0x85c)) {
      uVar7 = 4;
    }
    else {
      if (iVar2 != *(int *)(param_1 + 0x860)) goto LAB_140fc932a;
      uVar7 = 5;
    }
    FUN_140fd6950(param_1,uVar7);
  }
LAB_140fc932a:
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140fc9340 FUN_140fc9340 body=256 status=ok
// SIG undefined FUN_140fc9340(void)

void FUN_140fc9340(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  if ((byte)(*(char *)(param_1 + 0xa51) - 1U) < 4) {
    bVar1 = true;
    if (*(longlong *)(param_1 + 0x8c8) != 0) {
      local_18[1] = 0xd;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xd,"tutorialSkip",0xd,0x3f);
      FUN_142088910(*(undefined8 *)(param_1 + 0x8c8),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  else {
    bVar1 = false;
  }
  FUN_140fca110(param_1);
  if ((*(longlong *)(param_1 + 0x988) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x988) + 0x1a4) == '\0')) {
    if ((bVar1) || (*(char *)(param_1 + 0xa51) == '\x05')) {
      FUN_140fd6950(param_1,*(undefined1 *)(param_1 + 0x740));
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x6c4) = 1;
    UNLOCK();
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  uVar2 = FUN_140fb23b0(param_1);
  FUN_140fde680(param_1,uVar2);
  return;
}



// FUNCTION 140fc9440 FUN_140fc9440 body=225 status=ok
// SIG undefined FUN_140fc9440(void)

void FUN_140fc9440(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if ((param_1[0x1b0] == 0) && (*(char *)((longlong)param_1 + 0xa51) != '\t')) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if ((lVar1 != 0) &&
       (lVar1 = (**(code **)(*param_1 + 0x148))(param_1),
       *(float *)(lVar1 + 0x794) < *(float *)((longlong)param_1 + 0xd1c) ||
       *(float *)(lVar1 + 0x794) == *(float *)((longlong)param_1 + 0xd1c))) {
      return;
    }
    FWeakObjectPtr::operator=(&local_res8,param_1);
    local_28 = 0;
    local_18 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_1444f8920;
      puVar2[1] = param_1;
      *(undefined4 *)(puVar2 + 2) = local_res8;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_resc;
    }
    local_58[0] = &LAB_140faebe0;
    FUN_14208c4f0(param_1,local_58);
  }
  return;
}



// FUNCTION 140fc9540 FUN_140fc9540 body=155 status=ok
// SIG undefined FUN_140fc9540(void)

void FUN_140fc9540(longlong param_1)

{
  FUN_140fd55e0(param_1 + 0x990,0);
  *(undefined4 *)(param_1 + 0x9a8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x9ac)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x9a0,0);
  }
  *(undefined4 *)(param_1 + 0x9b8) = 0;
  if ((*(int *)(param_1 + 0x9bc) < 0) && (*(int *)(param_1 + 0x9bc) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x9b0,0);
  }
  if (*(longlong *)(param_1 + 0x8e0) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x8e0) + 0x180,param_1);
    FUN_1407665e0(*(longlong *)(param_1 + 0x8e0) + 0x1a8,param_1);
    FUN_142ecffe0(*(undefined8 *)(param_1 + 0x8e0));
    return;
  }
  return;
}



// FUNCTION 140fc95e0 FUN_140fc95e0 body=140 status=ok
// SIG undefined FUN_140fc95e0(void)

void FUN_140fc95e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_140faeed0;
  FUN_14208c4f0(param_1,local_58);
  return;
}



// FUNCTION 140fc9670 FUN_140fc9670 body=757 status=ok
// SIG undefined FUN_140fc9670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140fc9670(longlong *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_2d8 [32];
  longlong local_2b8 [4];
  undefined1 local_298 [624];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  if (param_1[0x1b0] != 0) {
    return local_28;
  }
  if (*(char *)((longlong)param_1 + 0xa51) == '\t') {
    return local_28;
  }
  lVar6 = (**(code **)(*param_1 + 0x148))();
  if ((lVar6 != 0) &&
     (uVar7 = (**(code **)(*param_1 + 0x148))(param_1),
     *(float *)(uVar7 + 0x794) < *(float *)((longlong)param_1 + 0xd1c) ||
     *(float *)(uVar7 + 0x794) == *(float *)((longlong)param_1 + 0xd1c))) {
    return uVar7;
  }
  iVar4 = -1;
  if (((*param_3 != 0) && (*(char *)(*param_3 + 0xd1) == '\x05')) && (param_2 != 0)) {
    lVar6 = UCheckBoxWidgetStyle::StaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar2 = (longlong *)param_1[0x132];
      for (plVar9 = plVar2; plVar9 != plVar2 + (longlong)(int)param_1[0x133] * 0xc;
          plVar9 = plVar9 + 0xc) {
        if (((*plVar9 == 0) || (*(char *)(*plVar9 + 0xd1) != '\x05')) || (plVar9[0xb] != param_2)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar6 = ((longlong)plVar9 - (longlong)plVar2) / 6 +
                  ((longlong)plVar9 - (longlong)plVar2 >> 0x3f);
          iVar4 = (int)(lVar6 >> 4) - (int)(lVar6 >> 0x3f);
          if ((-1 < iVar4) && (iVar4 < (int)param_1[0x133])) {
            bVar3 = true;
            goto LAB_140fc9797;
          }
          break;
        }
      }
    }
  }
  bVar3 = false;
LAB_140fc9797:
  if (!bVar3) {
    iVar4 = FUN_140f9c080(param_1 + 0x132,param_3);
  }
  if ((param_1[0x11c] == 0) || (iVar5 = FUN_142eb7a00(), iVar4 != iVar5)) {
LAB_140fc983f:
    if ((char)param_1[0x1a6] != '\x02') goto LAB_140fc9862;
  }
  else if ((char)param_1[0x1a6] != '\x02') {
    lVar6 = FUN_140f9af40(param_1[0x11c],iVar4);
    if (lVar6 != 0) {
      *(undefined1 *)(lVar6 + 0x338) = 0;
      local_2b8[0] = 0;
      local_2b8[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_2b8,0);
      FGenericPlatformString::Memcpy(local_2b8[0],L"over",10);
      FUN_142088910(lVar6,local_2b8);
      if (local_2b8[0] != 0) {
        FMemory::Free();
      }
      *(undefined1 *)(lVar6 + 0x309) = 0;
    }
    goto LAB_140fc983f;
  }
  (**(code **)(*(longlong *)param_1[0x11c] + 0x2b8))((longlong *)param_1[0x11c],0xffffffff,0);
LAB_140fc9862:
  *(undefined4 *)(param_1 + 0x19e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcf4) = 0;
  param_1[0x1a0] = 0;
  local_2b8[2] = 0;
  *(undefined4 *)(param_1 + 0x1a2) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xd14)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1a1,0);
  }
  if ((undefined2 *)param_1[0x1a1] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x1a1] = 0;
  }
  *(undefined4 *)(param_1 + 0x19f) = 0;
  uVar8 = FUN_140f9f650(local_298);
  FUN_1412b1e40(param_1 + 0x14e,uVar8);
  FUN_140fa04a0(local_298);
  FUN_140fde680(param_1,0);
  if ((param_1[300] != 0) && ((char)param_1[0x113] == '\0')) {
    FUN_140fafa40();
  }
  LOCK();
  uVar1 = *(uint *)(param_1 + 0xb1);
  *(uint *)(param_1 + 0xb1) = 1;
  UNLOCK();
  return (ulonglong)uVar1;
}



// FUNCTION 140fc9970 FUN_140fc9970 body=1065 status=ok
// SIG undefined FUN_140fc9970(void)

ulonglong FUN_140fc9970(longlong *param_1,ulonglong param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined1 *local_308 [2];
  undefined1 local_2f8 [32];
  undefined8 local_2d8;
  undefined4 local_2c8;
  undefined1 local_2b8 [32];
  undefined1 local_298 [24];
  undefined1 local_280 [600];
  
  uVar6 = param_1[0x1b0];
  if (uVar6 == 0) {
    if (*(char *)((longlong)param_1 + 0xa51) == '\t') {
      return 0;
    }
    lVar5 = (**(code **)(*param_1 + 0x148))();
    if ((lVar5 != 0) &&
       (uVar6 = (**(code **)(*param_1 + 0x148))(param_1),
       *(float *)(uVar6 + 0x794) < *(float *)((longlong)param_1 + 0xd1c) ||
       *(float *)(uVar6 + 0x794) == *(float *)((longlong)param_1 + 0xd1c))) {
      return uVar6;
    }
  }
  else if (uVar6 != param_2) {
    return uVar6;
  }
  if (param_1[0x11c] != 0) {
    if (((*param_3 != 0) && (*(char *)(*param_3 + 0xd1) == '\x05')) && (param_2 != 0)) {
      lVar5 = UCheckBoxWidgetStyle::StaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if (bVar12) {
        plVar1 = (longlong *)param_1[0x132];
        for (plVar10 = plVar1; plVar10 != plVar1 + (longlong)(int)param_1[0x133] * 0xc;
            plVar10 = plVar10 + 0xc) {
          if (((*plVar10 == 0) || (*(char *)(*plVar10 + 0xd1) != '\x05')) ||
             (plVar10[0xb] != param_2)) {
            bVar12 = false;
          }
          else {
            bVar12 = true;
          }
          if (bVar12) {
            lVar5 = ((longlong)plVar10 - (longlong)plVar1) / 6 +
                    ((longlong)plVar10 - (longlong)plVar1 >> 0x3f);
            uVar6 = (lVar5 >> 4) - (lVar5 >> 0x3f);
            if ((int)uVar6 != -1) goto LAB_140fc9ad2;
            break;
          }
        }
      }
    }
    uVar3 = FUN_140f9c080(param_1 + 0x132,param_3);
    uVar6 = (ulonglong)uVar3;
    if (uVar3 != 0xffffffff) {
LAB_140fc9ad2:
      lVar5 = FUN_140f9b010(param_1[0x11c]);
      if (lVar5 != 0) {
        uVar7 = FUN_142eb7a00(param_1[0x11c]);
        if (*(char *)(lVar5 + 0x308) == '\0') {
          iVar4 = (int)uVar7;
          if (((iVar4 != -1) && (*(char *)(lVar5 + 0x309) != '\0')) &&
             (bVar12 = iVar4 == (int)uVar6, !bVar12)) {
            return (ulonglong)bVar12;
          }
        }
        else if (*(char *)(lVar5 + 0x309) != '\0') {
          return uVar7;
        }
      }
      (**(code **)(*(longlong *)param_1[0x11c] + 0x2b8))
                ((longlong *)param_1[0x11c],uVar6 & 0xffffffff,1);
      lVar5 = FUN_140f9b010(param_1[0x11c]);
      if (lVar5 != 0) {
        *(undefined1 *)(lVar5 + 0x338) = 1;
        FUN_142ecf920(lVar5,0);
      }
    }
  }
  lVar5 = FUN_141083c60(param_1);
  uVar6 = 0;
  if ((lVar5 == 0) || (uVar6 = FUN_1412bf4f0(lVar5,param_2), uVar6 == 0)) goto LAB_140fc9d17;
  FUN_1412b0b60(local_298,uVar6);
  plVar1 = param_1 + 0x19c;
  lVar5 = *plVar1;
  lVar11 = (longlong)(int)param_1[0x19d] * 0x270 + lVar5;
  for (; lVar5 != lVar11; lVar5 = lVar5 + 0x270) {
    cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar5 + 0x18,local_280);
    if (cVar2 != '\0') {
      FUN_140fa04a0(local_298);
      if (lVar5 == 0) goto LAB_140fc9c0e;
      goto LAB_140fc9c3b;
    }
  }
  FUN_140fa04a0(local_298);
LAB_140fc9c0e:
  iVar4 = (int)param_1[0x19d];
  *(int *)(param_1 + 0x19d) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xcec) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::ResizeGrow
              (plVar1,iVar4);
  }
  FUN_1412b0b60((longlong)iVar4 * 0x270 + *plVar1,uVar6);
LAB_140fc9c3b:
  if (param_2 == 0) {
LAB_140fc9c8a:
    param_2 = 0;
  }
  else {
    lVar5 = FUN_1414efb80();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (!bVar12) goto LAB_140fc9c8a;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x19e) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0xcf4) = 0;
    param_1[0x1a0] = 0;
    *(undefined4 *)(param_1 + 0x1a2) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0xd14)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1a1,0);
    }
    if ((undefined2 *)param_1[0x1a1] != (undefined2 *)0x0) {
      *(undefined2 *)param_1[0x1a1] = 0;
    }
    *(undefined4 *)(param_1 + 0x19f) = 0;
  }
  else {
    uVar8 = FSoftObjectPath::FSoftObjectPath(local_2b8,param_2);
    FSoftObjectPath::operator=(param_1 + 0x1a0,uVar8);
    FWeakObjectPtr::operator=(param_1 + 0x19e,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 0x19f) = DAT_1464b56f4;
  }
LAB_140fc9d17:
  local_2d8 = 0;
  local_2c8 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_2f8);
  if (puVar9 != (undefined8 *)0x0) {
    local_318 = SUB84(param_1,0);
    uStack_314 = (undefined4)((ulonglong)param_1 >> 0x20);
    uStack_310 = (undefined4)uVar6;
    uStack_30c = (undefined4)(uVar6 >> 0x20);
    *puVar9 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar9 + 1) = local_318;
    *(undefined4 *)((longlong)puVar9 + 0xc) = uStack_314;
    *(undefined4 *)(puVar9 + 2) = uStack_310;
    *(undefined4 *)((longlong)puVar9 + 0x14) = uStack_30c;
  }
  local_308[0] = &LAB_140faee60;
  FUN_14208c4f0(param_1,local_308);
  LOCK();
  uVar3 = *(uint *)(param_1 + 0xb1);
  *(uint *)(param_1 + 0xb1) = 1;
  UNLOCK();
  return (ulonglong)uVar3;
}



// FUNCTION 140fc9da0 FUN_140fc9da0 body=143 status=ok
// SIG undefined FUN_140fc9da0(void)

void FUN_140fc9da0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((param_1[0x1b0] == 0) && (*(char *)((longlong)param_1 + 0xa51) != '\t')) {
    lVar2 = (**(code **)(*param_1 + 0x148))();
    if ((lVar2 != 0) &&
       (lVar2 = (**(code **)(*param_1 + 0x148))(param_1),
       *(float *)(lVar2 + 0x794) < *(float *)((longlong)param_1 + 0xd1c) ||
       *(float *)(lVar2 + 0x794) == *(float *)((longlong)param_1 + 0xd1c))) {
      return;
    }
    FUN_140fde680(param_1,0);
    if (param_1[300] != 0) {
      FUN_140fd5ac0(param_1[300],1);
    }
    plVar1 = (longlong *)param_1[0x11c];
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140fc9e22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x2b8))(plVar1,0xffffffff,0);
      return;
    }
  }
  return;
}



// FUNCTION 140fc9e30 FUN_140fc9e30 body=340 status=ok
// SIG undefined FUN_140fc9e30(void)

void FUN_140fc9e30(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong local_res8;
  
  if (param_1[0x1b0] != 0) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0xa51) == '\t') {
    return;
  }
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if ((lVar3 != 0) &&
     (lVar3 = (**(code **)(*param_1 + 0x148))(param_1),
     *(float *)(lVar3 + 0x794) < *(float *)((longlong)param_1 + 0xd1c) ||
     *(float *)(lVar3 + 0x794) == *(float *)((longlong)param_1 + 0xd1c))) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1a4) = 1;
  plVar1 = (longlong *)param_1[0x136];
  for (plVar5 = plVar1; plVar5 != plVar1 + (int)param_1[0x137]; plVar5 = plVar5 + 1) {
    if (*plVar5 == param_3) {
      uVar4 = (undefined4)((longlong)plVar5 - (longlong)plVar1 >> 3);
      goto LAB_140fc9ec3;
    }
  }
  uVar4 = 0xffffffff;
LAB_140fc9ec3:
  plVar1 = (longlong *)param_1[0x11c];
  if (plVar1 == (longlong *)0x0) {
LAB_140fc9f1c:
    lVar3 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x2b8))(plVar1,uVar4,1);
    if (param_1[0x11c] == 0) goto LAB_140fc9f1c;
    lVar3 = FUN_140f9b010(param_1[0x11c]);
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x338) = 1;
      FUN_142ecf920(lVar3,0);
      goto LAB_140fc9f25;
    }
  }
  param_1[0x1a5] = param_3;
LAB_140fc9f25:
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  local_res8 = lVar3;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x11f,&local_res8);
  FUN_140fde680(param_1,0);
  if (((lVar3 != 0) && (param_1[0x11c] != 0)) && (iVar2 = FUN_142eb7440(), 0 < iVar2)) {
    FUN_140fd5ac0(param_1[300],5);
  }
  return;
}



// FUNCTION 140fc9f90 FUN_140fc9f90 body=323 status=ok
// SIG undefined FUN_140fc9f90(void)

void FUN_140fc9f90(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong local_res8;
  
  if (param_1[0x1b0] != 0) {
    return;
  }
  if (*(char *)((longlong)param_1 + 0xa51) == '\t') {
    return;
  }
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if ((lVar3 != 0) &&
     (lVar3 = (**(code **)(*param_1 + 0x148))(param_1),
     *(float *)(lVar3 + 0x794) < *(float *)((longlong)param_1 + 0xd1c) ||
     *(float *)(lVar3 + 0x794) == *(float *)((longlong)param_1 + 0xd1c))) {
    return;
  }
  *(undefined1 *)(param_1 + 0x1a4) = 1;
  plVar1 = (longlong *)param_1[0x134];
  for (plVar5 = plVar1; plVar5 != plVar1 + (int)param_1[0x135]; plVar5 = plVar5 + 1) {
    if (*plVar5 == param_3) {
      uVar4 = (undefined4)((longlong)plVar5 - (longlong)plVar1 >> 3);
      goto LAB_140fca023;
    }
  }
  uVar4 = 0xffffffff;
LAB_140fca023:
  plVar1 = (longlong *)param_1[0x11c];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b8))(plVar1,uVar4,1);
    if (param_1[0x11c] != 0) {
      local_res8 = FUN_140f9b010(param_1[0x11c]);
      if (local_res8 != 0) {
        *(undefined1 *)(local_res8 + 0x338) = 1;
        FUN_142ecf920(local_res8,0);
      }
      goto LAB_140fca07e;
    }
  }
  local_res8 = 0;
LAB_140fca07e:
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x11f,&local_res8);
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  FUN_140fde680(param_1,0);
  if ((param_1[0x11c] != 0) && (iVar2 = FUN_142eb7440(), 0 < iVar2)) {
    FUN_140fd5ac0(param_1[300],6);
  }
  return;
}



// FUNCTION 140fca0e0 FUN_140fca0e0 body=33 status=ok
// SIG undefined FUN_140fca0e0(void)

undefined4 FUN_140fca0e0(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_140fde680(param_1,0);
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140fca110 FUN_140fca110 body=204 status=ok
// SIG undefined FUN_140fca110(void)

void FUN_140fca110(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x988);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x1a4) == '\0')) {
    FUN_140fca450(lVar2,param_1 + 0x840,param_1 + 0x820);
    if (*(char *)(*(longlong *)(param_1 + 0x988) + 0x1a4) == '\0') {
      lVar2 = FUN_140e971d0(param_1);
      if (((lVar2 != 0) && (lVar2 = FUN_140cff230(lVar2), lVar2 != 0)) &&
         (cVar1 = FUN_140d3b110(lVar2), cVar1 != '\0')) {
        FUN_140fca450(*(undefined8 *)(param_1 + 0x988),param_1 + 0x848,param_1 + 0x820);
      }
    }
    else if (*(longlong *)(*(longlong *)(param_1 + 0x988) + 0x1e0) == *(longlong *)(param_1 + 0x840)
            ) {
      FUN_140fd6950(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 140fca1e0 FUN_140fca1e0 body=618 status=ok
// SIG undefined FUN_140fca1e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fca1e0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  longlong local_148 [2];
  undefined4 local_138 [4];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [24];
  undefined1 local_c8 [80];
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if ((longlong *)param_1[0x10c] != (longlong *)0x0) {
    uVar2 = (**(code **)(*(longlong *)param_1[0x10c] + 0x148))();
    lVar3 = FUN_140c12480(uVar2);
    if (lVar3 != 0) {
      UNiagaraSystem::GetEffectType(lVar3);
    }
  }
  local_148[0] = 0;
  if (((*(char *)(param_2 + 0x20) != '\x01') ||
      (cVar1 = FWeakObjectPtr::IsValid(param_2 + 0x38), cVar1 == '\0')) ||
     (lVar3 = FWeakObjectPtr::Get(param_2 + 0x38), lVar3 == 0)) goto LAB_140fca3fe;
  uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  local_158 = 0;
  FUN_140e2f920(lVar3,uVar2,param_1[0x10c],0);
  local_110 = 0;
  local_118 = 0;
  local_128 = *(undefined4 *)(lVar3 + 800);
  local_124 = *(undefined4 *)(lVar3 + 0x324);
  local_120 = *(undefined4 *)(lVar3 + 0x328);
  local_e8 = *(undefined8 *)(lVar3 + 0x330);
  local_108 = 0;
  local_148[1] = 0;
  FString::FString(local_e0,lVar3 + 0x338);
  FSoftObjectPath::operator=(&local_118,&local_e8);
  local_100 = *(undefined4 *)(lVar3 + 0x348);
  uStack_fc = *(undefined4 *)(lVar3 + 0x34c);
  uStack_f8 = *(undefined4 *)(lVar3 + 0x350);
  uStack_f4 = *(undefined4 *)(lVar3 + 0x354);
  local_f0 = *(undefined8 *)(lVar3 + 0x358);
  *(undefined1 *)(param_1 + 0x10b) = 0;
  local_138[0] = 0;
  if ((longlong *)param_1[0x10c] == (longlong *)0x0) {
LAB_140fca3bc:
    cVar1 = *(char *)(lVar3 + 0x361);
    if (cVar1 == '\0') {
      local_148[0] = param_1[0xe1];
    }
    else if (cVar1 == '\x01') {
      local_148[0] = param_1[0xe2];
    }
    else if (cVar1 == '\x02') {
      local_148[0] = param_1[0xe3];
    }
  }
  else {
    uVar2 = (**(code **)(*(longlong *)param_1[0x10c] + 0x148))();
    cVar1 = FUN_140aa4f60(uVar2,local_138);
    if (cVar1 != '\0') goto LAB_140fca3bc;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_68);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_78[0] = &LAB_140faec20;
    uVar2 = FUN_1420849a0(param_1,local_c8,local_78);
    FUN_14208c4f0(param_1,uVar2);
    if (local_38 != 0) {
      plVar5 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar5 = local_48;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if (local_110 != 0) {
    FMemory::Free();
  }
LAB_140fca3fe:
  lVar3 = FUN_1410833d0(param_1);
  if ((lVar3 != 0) && (local_148[1] = 0, local_148[0] != 0)) {
    FUN_140ebbab0(lVar3 + 0x6b8,local_148);
  }
  return;
}



// FUNCTION 140fca450 FUN_140fca450 body=453 status=ok
// SIG undefined FUN_140fca450(void)

undefined8 FUN_140fca450(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_28 [2];
  
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (lVar5 == 0) {
    return 0;
  }
  lVar4 = UInputKeySelector::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return 0;
  }
  lVar5 = FUN_140e971d0(lVar5);
  lVar4 = 0;
  if (lVar5 != 0) {
    lVar4 = FUN_140cff230(lVar5);
  }
  if (*param_2 == 0) {
    return 0;
  }
  if (lVar4 == 0) {
    return 0;
  }
  cVar3 = FUN_140d288b0(lVar4);
  if (cVar3 != '\0') {
    cVar3 = FUN_140d3ced0(lVar4,param_2);
    if (cVar3 != '\0') {
      return 0;
    }
    if (*param_2 == 0) {
      if (*(int *)(param_3 + 1) < 1) {
        return 1;
      }
      plVar6 = (longlong *)*param_3;
    }
    else {
      plVar6 = (longlong *)*param_3;
      plVar1 = plVar6 + (longlong)*(int *)(param_3 + 1) * 3;
      if (plVar6 == plVar1) {
        return 1;
      }
      while (*plVar6 != *param_2) {
        plVar6 = plVar6 + 3;
        if (plVar6 == plVar1) {
          return 1;
        }
      }
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_140fa08f0(param_1 + 400,plVar6 + 1);
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      if (0 < *(int *)(param_1 + 0x198)) {
        *(undefined1 *)(param_1 + 0x1a4) = 1;
        local_28[0] = 0;
        local_28[1] = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        FGenericPlatformString::Memcpy(local_28[0],L"show",10);
        FUN_142088910(param_1,local_28);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        FUN_140fae710(param_1);
        *(longlong *)(param_1 + 0x1e0) = *plVar6;
        return 1;
      }
      FUN_140fb3220(param_1);
      *(longlong *)(param_1 + 0x1e0) = *plVar6;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 140fca620 FUN_140fca620 body=282 status=ok
// SIG undefined FUN_140fca620(void)

void FUN_140fca620(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  undefined1 **ppuVar2;
  undefined1 *local_f8 [2];
  undefined1 local_e8 [32];
  undefined8 local_c8;
  undefined4 local_b8;
  undefined1 *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  if (param_3 == '\0') {
    local_28 = 0;
    local_18 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_58[0] = &LAB_140faeb40;
    ppuVar2 = local_58;
  }
  else if (param_3 == '\x01') {
    local_78 = 0;
    local_68 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_98);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_a8[0] = &LAB_140faec10;
    ppuVar2 = local_a8;
  }
  else {
    if (param_3 != '\n') goto LAB_140fca72a;
    local_c8 = 0;
    local_b8 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_e8);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_f8[0] = &LAB_140fae950;
    ppuVar2 = local_f8;
  }
  FUN_14204c280(ppuVar2);
LAB_140fca72a:
  FUN_140fca740(param_1);
  return;
}



// FUNCTION 140fca740 FUN_140fca740 body=145 status=ok
// SIG undefined FUN_140fca740(void)

void FUN_140fca740(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  *(undefined8 *)(param_1 + 0x578) = 0;
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xa38) != &local_18) {
    *(undefined8 *)(param_1 + 0xa38) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa40,&local_10);
    plVar5 = local_10;
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
  }
  return;
}



// FUNCTION 140fca7e0 FUN_140fca7e0 body=796 status=ok
// SIG undefined FUN_140fca7e0(void)

void FUN_140fca7e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 local_a8;
  float local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *plStack_88;
  char local_80 [16];
  char local_70 [16];
  char local_60 [16];
  char local_50 [16];
  char local_40 [16];
  char local_30 [40];
  
  if (*(char *)(param_1 + 0xd30) != '\x02') {
    return;
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  if (cVar4 == '\0') {
    return;
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x59c);
  lVar6 = FWeakObjectPtr::Get(lVar6 + 0x38);
  if (lVar6 == 0) {
    return;
  }
  lVar7 = FUN_141083c60(param_1);
  if (lVar7 == 0) {
    return;
  }
  lVar8 = *(longlong *)(param_1 + 0x988);
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0x1a4) != '\0')) {
    if (*(longlong *)(lVar8 + 0x1e0) == *(longlong *)(param_1 + 0x840)) {
      iVar5 = *(int *)(param_1 + 0x864);
    }
    else {
      if (*(longlong *)(lVar8 + 0x1e0) != *(longlong *)(param_1 + 0x848)) goto LAB_140fca8ab;
      iVar5 = *(int *)(param_1 + 0x874);
    }
    if (*(int *)(lVar8 + 0x1a0) != iVar5) {
      return;
    }
  }
LAB_140fca8ab:
  lVar8 = FUN_140e971d0(param_1);
  lVar9 = 0;
  if (lVar8 != 0) {
    lVar9 = FUN_14270bb10(lVar8);
  }
  local_98 = 0;
  local_90 = 0;
  plStack_88 = (longlong *)0x0;
  if (lVar9 == 0) {
    local_a8 = 0xffffffff;
  }
  else {
    local_a8 = *(undefined4 *)(lVar9 + 0x108);
  }
  FUN_142f02690(lVar6,local_80,&DAT_146873058,local_a8,0);
  FUN_142f02690(lVar6,local_70,&DAT_146873060,local_a8,0);
  FUN_142f02690(lVar6,local_50,&DAT_146873068,local_a8,0);
  FUN_142f02690(lVar6,local_60,&DAT_146873070,local_a8,0);
  FUN_142f02690(lVar6,local_30,&DAT_146873198,local_a8,0);
  FUN_142f02690(lVar6,local_40,&DAT_146873190,local_a8,0);
  fVar10 = 0.0;
  fVar12 = 0.0;
  local_a4 = 0.0;
  local_a0 = DAT_146873130;
  if (local_80[0] != '\0') {
    fVar10 = 1.0;
    local_a4 = 1.0;
  }
  if (local_70[0] != '\0') {
    local_a4 = fVar10 + -1.0;
  }
  FUN_1412c3d30(lVar7,&local_a8);
  local_a0 = DAT_146873128;
  local_a4 = 0.0;
  if (local_60[0] != '\0') {
    fVar12 = 1.0;
    local_a4 = 1.0;
  }
  if (local_50[0] != '\0') {
    local_a4 = fVar12 + -1.0;
  }
  FUN_1412c3d30(lVar7,&local_a8);
  if (local_30[0] == '\0') {
    if (local_40[0] == '\0') goto LAB_140fcaaa1;
LAB_140fcaa6b:
    if (local_30[0] != '\0') goto LAB_140fcaaa1;
    if (*(char *)(param_1 + 0xa50) == '\x01') {
      FUN_1412c3d80(lVar7,&DAT_146873190);
      goto LAB_140fcaaa1;
    }
    if (1 < (byte)(*(char *)(param_1 + 0xa50) - 2U)) goto LAB_140fcaaa1;
    uVar11 = 0xbf800000;
  }
  else {
    if (local_40[0] != '\0') goto LAB_140fcaa6b;
    if (*(char *)(param_1 + 0xa50) == '\x01') {
      FUN_1412c3d80(lVar7,&DAT_146873198);
      goto LAB_140fcaaa1;
    }
    if (1 < (byte)(*(char *)(param_1 + 0xa50) - 2U)) goto LAB_140fcaaa1;
    uVar11 = 0x3f800000;
  }
  FUN_140fb3120(param_1,uVar11);
LAB_140fcaaa1:
  plVar3 = plStack_88;
  if (plStack_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_88 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_88)(plStack_88);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 140fcab00 FUN_140fcab00 body=996 status=ok
// SIG undefined FUN_140fcab00(void)

void FUN_140fcab00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined4 local_58;
  float local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *plStack_38;
  
  if (*(char *)(param_1 + 0xd30) != '\x02') {
    return;
  }
  if (*(longlong *)(param_1 + 0x950) == 0) {
    return;
  }
  lVar8 = FUN_141083c60();
  if (lVar8 == 0) {
    return;
  }
  lVar6 = *(longlong *)(param_1 + 0x988);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x1a4) != '\0')) {
    if (*(longlong *)(lVar6 + 0x1e0) == *(longlong *)(param_1 + 0x840)) {
      bVar10 = *(int *)(lVar6 + 0x1a0) == *(int *)(param_1 + 0x864);
    }
    else {
      if (*(longlong *)(lVar6 + 0x1e0) != *(longlong *)(param_1 + 0x848)) goto LAB_140fcabd1;
      bVar10 = *(int *)(lVar6 + 0x1a0) == *(int *)(param_1 + 0x874);
    }
    if (!bVar10) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x950) + 0x193) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x950) + 0x194) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x950) + 0x195) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x950) + 0x196) = 0;
      return;
    }
  }
LAB_140fcabd1:
  cVar7 = *(char *)(param_1 + 0xa50);
  if (cVar7 == '\x01') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x950) + 0x193) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x950) + 0x194) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x950) + 0x195) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x950) + 0x196) = 1;
  }
  else if ((cVar7 == '\x02') || (cVar7 == '\x03')) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x950) + 0x193) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x950) + 0x194) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x950) + 0x195) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x950) + 0x196) = 0;
  }
  lVar6 = *(longlong *)(param_1 + 0x950);
  fVar3 = *(float *)(lVar6 + 0x178);
  fVar4 = *(float *)(lVar6 + 0x17c);
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_58 = 0xffffffff;
  if (*(char *)(lVar6 + 400) == '\0') {
    if (*(char *)(lVar6 + 0x192) == '\0') {
      if ((((*(char *)(param_1 + 0x8e8) != '\0') &&
           (lVar6 = *(longlong *)(param_1 + 0x948), lVar6 != 0)) &&
          (*(longlong *)(lVar6 + 0x178) != 0)) && (*(longlong *)(lVar6 + 0x170) != 0)) {
        *(undefined1 *)(param_1 + 0x8e8) = 0;
        FUN_142056670(*(undefined8 *)(lVar6 + 0x178),0);
        FUN_142f0ead0(*(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x170),0x3f800000);
      }
      if (*(char *)(param_1 + 0xa51) == '\a') {
        FUN_1412c3f20(lVar8,*(longlong *)(param_1 + 0x950) + 0x188,0);
      }
    }
    else {
      local_50 = DAT_146873138;
      local_54 = fVar3;
      FUN_1412c3dd0(lVar8,&local_58);
      local_50 = DAT_146873140;
      local_54 = fVar4;
      FUN_1412c3dd0(lVar8,&local_58);
    }
  }
  else {
    if (*(char *)(param_1 + 0x8e8) != '\0') {
      return;
    }
    local_50 = DAT_146873128;
    local_54 = fVar3;
    FUN_1412c3dd0(lVar8,&local_58);
    local_50 = DAT_146873130;
    local_54 = fVar4;
    FUN_1412c3dd0(lVar8,&local_58);
    plVar9 = *(longlong **)(param_1 + 0x8e0);
    if (plVar9 != (longlong *)0x0) {
      if ((0.001 < SQRT(fVar4 * fVar4 + fVar3 * fVar3)) && (*(char *)(param_1 + 0xa50) != '\x01')) {
        (**(code **)(*plVar9 + 0x2b8))(plVar9,0xffffffff,0,0);
        plVar9 = *(longlong **)(param_1 + 0x8e0);
      }
      lVar8 = (**(code **)(*plVar9 + 0x2b0))();
      if (((*(char *)(param_1 + 0xa50) == '\x01') && (lVar8 != 0)) &&
         ((cVar7 = (**(code **)(*(longlong *)(lVar8 + 0x170) + 0x10))(), cVar7 == '\x05' &&
          (((*(char *)(param_1 + 0x8e8) == '\0' &&
            (lVar8 = *(longlong *)(param_1 + 0x948), lVar8 != 0)) &&
           (*(longlong *)(lVar8 + 0x178) != 0)))))) {
        *(undefined4 *)(param_1 + 0x8ec) = *(undefined4 *)(param_1 + 0x8f0);
        *(undefined1 *)(param_1 + 0x8e8) = 1;
        FUN_142056670(*(undefined8 *)(lVar8 + 0x178),1);
      }
    }
  }
  plVar9 = plStack_38;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 140fcaef0 FUN_140fcaef0 body=2593 status=ok
// SIG undefined FUN_140fcaef0(void)

void FUN_140fcaef0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  longlong *plVar16;
  bool bVar17;
  undefined8 local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FUN_142ecdac0();
  if (*(char *)(param_1 + 0x898) != '\0') {
    cVar7 = FUN_140faf620(param_1);
    if (cVar7 != '\0') {
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_198,L"Travel",L"GFxMapMenu",L"HintSelect");
      FUN_142eb01d0(param_1,&DAT_146b3e2a0,uVar9,0);
      if (local_190 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_190 + 1;
        lVar10 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_190)(local_190);
          LOCK();
          piVar1 = (int *)((longlong)local_190 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_190 + 8))(local_190,1);
          }
        }
      }
    }
    goto LAB_140fcb893;
  }
  lVar10 = *(longlong *)(param_1 + 0x988);
  if ((lVar10 != 0) && (*(char *)(lVar10 + 0x1a4) != '\0')) {
    if ((*(longlong *)(lVar10 + 0x1e0) == *(longlong *)(param_1 + 0x840)) &&
       (*(int *)(lVar10 + 0x1a0) == *(int *)(param_1 + 0x864))) {
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_180,L"Zoom",L"GFxMapMenu",L"HintZoom");
      FUN_142eb01d0(param_1,&DAT_146873418,uVar9,0);
      local_148 = local_178;
    }
    else {
      if ((((*(longlong *)(lVar10 + 0x1e0) != *(longlong *)(param_1 + 0x848)) ||
           (*(int *)(lVar10 + 0x1a0) != *(int *)(param_1 + 0x868))) ||
          (lVar10 = FUN_141083c60(param_1), lVar10 == 0)) ||
         (cVar7 = FUN_1412ba5a0(lVar10), cVar7 == '\0')) goto LAB_140fcb893;
      bVar17 = *(char *)(param_1 + 0xa50) != '\x02';
      puVar12 = local_150;
      pwVar15 = L"HinUpToGalaxy";
      pwVar14 = L"GFxMapMenu";
      pwVar13 = L"Galaxy View";
      if (bVar17) {
        pwVar15 = L"HintUpToOrbit";
        pwVar14 = L"GFxMapMenu";
        pwVar13 = L"Orbit View";
        puVar12 = local_168;
      }
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (puVar12,pwVar13,pwVar14,pwVar15);
      FUN_142eb01d0(param_1,&DAT_146873410,uVar9,0);
      if ((bVar17) && (local_160 != (longlong *)0x0)) {
        LOCK();
        plVar16 = local_160 + 1;
        lVar10 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar1 = (int *)((longlong)local_160 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_160 + 8))(local_160,1);
          }
        }
      }
      if (bVar17) goto LAB_140fcb893;
    }
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_148 + 1;
      lVar10 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_148 + 8))(local_148,1);
        }
      }
    }
    goto LAB_140fcb893;
  }
  uVar9 = FUN_1404b03b0();
  FUN_142eb01d0(param_1,&DAT_146873428,uVar9,1);
  uVar9 = FUN_1404b03b0();
  FUN_142eb01d0(param_1,&DAT_146873228,uVar9,1);
  uVar9 = FUN_1404b03b0();
  FUN_142eb01d0(param_1,&DAT_146873230,uVar9,1);
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_138,L"Zoom",L"GFxMapMenu",L"HintZoom");
  FUN_142eb01d0(param_1,&DAT_146873418,uVar9,0);
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_130 + 1;
    lVar10 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)local_130 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  lVar10 = FUN_141083c60(param_1);
  if (((*(longlong *)(param_1 + 0x928) == 0) || (*(char *)(param_1 + 0xa51) != '\b')) ||
     (*(char *)(param_1 + 0xa50) != '\x03')) {
    cVar7 = '\0';
  }
  else {
    cVar7 = '\x01';
  }
  plVar16 = *(longlong **)(param_1 + 0x920);
  if (plVar16 != (longlong *)0x0) {
    (**(code **)(*plVar16 + 0x278))(plVar16,cVar7);
  }
  if (cVar7 == '\0') {
    if ((*(char *)(param_1 + 0xa51) != '\t') && (*(char *)(param_1 + 0xa50) == '\x01')) {
      if (*(char *)(param_1 + 0x6bc) == '\0') {
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_108,L"Set Waypoint",L"GFxMapMenu",L"HintSetCustomWaypoint");
        FUN_142eb01d0(param_1,&DAT_146873430,uVar9,0);
        plVar16 = local_100;
      }
      else {
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_120,L"Remove Waypoint",L"GFxMapMenu",L"HintRemoveCustomWaypoint");
        FUN_142eb01d0(param_1,&DAT_146873430,uVar9,0);
        plVar16 = local_118;
      }
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar16 + 1;
        lVar11 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16,1);
          }
        }
      }
    }
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0x928);
    local_1a8 = lVar11;
    if (lVar11 == 0) {
      local_1a0 = 0;
    }
    else {
      uVar9 = UBlendableInterface::GetPrivateStaticClass();
      local_1a0 = UObjectBaseUtility::GetInterfaceAddress(lVar11,uVar9);
    }
    FUN_142ecff00(param_1,&local_1a8,DAT_146873268);
    LOCK();
    *(undefined4 *)(param_1 + 0x6b0) = 1;
    UNLOCK();
  }
  if ((lVar10 != 0) && (cVar8 = FUN_1412ba5a0(lVar10), cVar8 != '\0')) {
    cVar8 = *(char *)(param_1 + 0xa50);
    puVar12 = local_d8;
    pwVar15 = L"HinUpToGalaxy";
    pwVar14 = L"GFxMapMenu";
    pwVar13 = L"Galaxy View";
    if (cVar8 != '\x02') {
      pwVar15 = L"HintUpToOrbit";
      pwVar14 = L"GFxMapMenu";
      pwVar13 = L"Orbit View";
      puVar12 = local_f0;
    }
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (puVar12,pwVar13,pwVar14,pwVar15);
    FUN_142eb01d0(param_1,&DAT_146873410,uVar9,0);
    if ((((cVar8 != '\x02') + 1U & 2) != 0) && (local_e8 != (longlong *)0x0)) {
      LOCK();
      plVar16 = local_e8 + 1;
      lVar11 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)local_e8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
    if ((cVar8 == '\x02') && (local_d0 != (longlong *)0x0)) {
      LOCK();
      plVar16 = local_d0 + 1;
      lVar11 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
  }
  bVar5 = false;
  bVar17 = false;
  if (*(char *)(param_1 + 0xa51) == '\t') {
    lVar10 = (**(code **)(**(longlong **)(param_1 + 0x910) + 0x2b0))();
    if (lVar10 == 0) {
LAB_140fcb509:
      lVar10 = 0;
    }
    else {
      lVar11 = FUN_141369c80();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_140fcb509;
    }
    lVar11 = FUN_140f9aee0(param_1);
    if (lVar10 == 0) goto LAB_140fcb893;
    if (*(char *)(lVar10 + 0x30c) == '\0') {
      if (lVar11 == 0) {
LAB_140fcb5f5:
        bVar4 = false;
      }
      else {
        local_1c8 = *(undefined8 *)(lVar10 + 0x348);
        bVar17 = true;
        local_1c0 = *(longlong **)(lVar10 + 0x350);
        if (local_1c0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
          UNLOCK();
        }
        cVar7 = FUN_140ba67e0(lVar11,&local_1c8);
        if (cVar7 == '\0') goto LAB_140fcb5f5;
        bVar4 = true;
      }
      plVar16 = local_1c0;
      if ((bVar17) && (local_1c0 != (longlong *)0x0)) {
        LOCK();
        plVar2 = local_1c0 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_1c0)(local_1c0);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16,1);
          }
        }
      }
      bVar5 = false;
      if (bVar4) {
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_a8,L"Invite Friend",L"GFxMapMenu",L"HintInviteFriend");
        FUN_142eb01d0(param_1,&DAT_146b3e2a0,uVar9,0);
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar16 = local_a0 + 1;
          lVar10 = *plVar16;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar1 = (int *)((longlong)local_a0 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_a0 + 8))(local_a0,1);
              bVar17 = true;
              goto LAB_140fcb6fb;
            }
          }
        }
        goto LAB_140fcb6f3;
      }
      if (lVar11 != 0) {
        local_1b8 = *(undefined8 *)(lVar10 + 0x348);
        bVar5 = true;
        local_1b0 = *(longlong **)(lVar10 + 0x350);
        if (local_1b0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
          UNLOCK();
        }
        cVar7 = FUN_140ba7eb0(lVar11,&local_1b8);
        if (cVar7 != '\0') goto LAB_140fcb6f3;
      }
      bVar17 = false;
    }
    else {
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_c0,L"Join Friend",L"GFxMapMenu",L"HintJoinFriend");
      FUN_142eb01d0(param_1,&DAT_146b3e2a0,uVar9,0);
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_b8 + 1;
        lVar10 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 != 1) goto LAB_140fcb6f3;
          (**(code **)(*local_b8 + 8))(local_b8,1);
          bVar17 = true;
          goto LAB_140fcb6fb;
        }
      }
LAB_140fcb6f3:
      bVar17 = true;
    }
LAB_140fcb6fb:
    plVar16 = local_1b0;
    if ((bVar5) && (local_1b0 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_1b0 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
    }
    if (!bVar17) goto LAB_140fcb893;
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_90,L"Player Options",L"GFxMapMenu",L"PlayerOptionsText");
    FUN_142eb01d0(param_1,&DAT_1468730b8,uVar9,0);
    local_58 = local_88;
  }
  else {
    if (*(char *)(param_1 + 0xa50) != '\x01') goto LAB_140fcb893;
    if ((cVar7 == '\0') && ((lVar10 == 0 || (cVar7 = FUN_1412c7dd0(lVar10), cVar7 != '\0')))) {
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_78,L"Custom Waypoint",L"GFxMapMenu",L"HintCustomWaypoint");
      FUN_142eb01d0(param_1,&DAT_146873430,uVar9,0);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_70 + 1;
        lVar10 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
    }
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_60,L"Cycle Waypoints",L"GFxMapMenu",L"HintCycleWaypoints");
    FUN_142eb01d0(param_1,&DAT_146873420,uVar9,0);
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_58 + 1;
    lVar10 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
LAB_140fcb893:
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_48,L"Close",L"GFxMapMenu",L"HintExit");
  FUN_142eb01d0(param_1,&DAT_146b3e2b8,uVar9,0);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_40 + 1;
    lVar10 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140fcb920 FUN_140fcb920 body=452 status=ok
// SIG undefined FUN_140fcb920(void)

void FUN_140fcb920(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    if ((*(longlong *)(param_1 + 0x720) != 0) &&
       (lVar5 = FUN_142eb65a0(param_1), *(longlong *)(param_1 + 0x720) == lVar5)) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_58,L"Select",L"GFxMayhemMenu",L"MayhemHintSelect");
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar6);
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    if (((*(char *)(param_1 + 0x731) != '\0') && (*(char *)(param_1 + 0x752) == '\0')) &&
       (cVar4 = FUN_140fb3d30(param_1), cVar4 != '\0')) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_40,L"Reroll",L"GFxMayhemMenu",L"MayhemHintReroll");
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_1468730b8,uVar6);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)local_38 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Close",L"GFxMayhemMenu",L"MayhemHintClose");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar6);
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140fcbaf0 FUN_140fcbaf0 body=577 status=ok
// SIG undefined FUN_140fcbaf0(void)

void FUN_140fcbaf0(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60;
  undefined8 local_58;
  undefined2 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined2 local_10;
  
  FUN_142ecdac0();
  plVar5 = *(longlong **)(param_1 + 0x708);
  if (*(int *)(param_1 + 0x820) < 2) {
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x278))(plVar5,0);
    }
    plVar5 = *(longlong **)(param_1 + 0x718);
    if (plVar5 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140fcbb4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x278))(plVar5,0);
      return;
    }
  }
  else {
    if (plVar5 != (longlong *)0x0) {
      local_88 = 0;
      local_80 = 0;
      uVar4 = FUN_1404b03b0();
      FText::FText(local_78,uVar4);
      uVar2 = local_80;
      lVar6 = (longlong)(int)local_80;
      local_58 = 0;
      local_50 = 0;
      local_60 = 1;
      iVar3 = (int)local_80 + 1;
      local_80 = CONCAT44(local_80._4_4_,iVar3);
      if (local_80._4_4_ < iVar3) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_88,uVar2 & 0xffffffff);
      }
      *(undefined8 *)(local_88 + lVar6 * 8) = DAT_1468730f8;
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x708) + 0x308);
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_88,0);
      (**(code **)(**(longlong **)(param_1 + 0x708) + 0x278))(*(longlong **)(param_1 + 0x708),1);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_70 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x718) != 0) {
      local_48 = 0;
      local_40 = 0;
      uVar4 = FUN_1404b03b0();
      FText::FText(local_38,uVar4);
      uVar2 = local_40;
      lVar6 = (longlong)(int)local_40;
      local_18 = 0;
      local_10 = 0;
      local_20 = 1;
      iVar3 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar3);
      if (local_40._4_4_ < iVar3) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_48,uVar2 & 0xffffffff);
      }
      *(undefined8 *)(local_48 + lVar6 * 8) = DAT_1468730f0;
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x718) + 0x308);
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48,0);
      (**(code **)(**(longlong **)(param_1 + 0x718) + 0x278))(*(longlong **)(param_1 + 0x718),1);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_30 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140fcbd40 FUN_140fcbd40 body=2455 status=ok
// SIG undefined FUN_140fcbd40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fcbd40(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_298 [32];
  undefined1 local_278;
  longlong **local_270;
  longlong *local_268;
  undefined8 local_260;
  longlong local_258;
  undefined8 local_250;
  longlong *local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  undefined1 local_228;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined1 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined2 local_1e4;
  undefined1 local_1e2;
  undefined4 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined4 *local_1b8;
  ulonglong *puStack_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  ulonglong local_198;
  undefined8 local_190;
  longlong local_188;
  longlong local_180;
  ulonglong local_178;
  longlong local_170;
  ulonglong local_168;
  longlong local_160;
  ulonglong local_158;
  undefined8 local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
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
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_298;
  uVar11 = 0;
  local_1a8 = local_1a8 & 0xffffffff00000000;
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) == 0) {
    return;
  }
  iVar14 = -1;
  if (*(longlong *)(param_1 + 0x918) != 0) {
    iVar14 = FUN_142eb7a00();
  }
  bVar3 = false;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x930));
  LOCK();
  *(int *)(param_1 + 0x93c) = *(int *)(param_1 + 0x93c) + 1;
  UNLOCK();
  local_228 = 0;
  FText::FText(local_220);
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0xffffffff;
  local_1ec = 0;
  local_1e4 = 0;
  local_1e2 = 0;
  local_1e0 = 0;
  if ((-1 < iVar14) && (iVar14 < *(int *)(param_1 + 0x928))) {
    puVar12 = (undefined1 *)((longlong)iVar14 * 0x50 + *(longlong *)(param_1 + 0x920));
    local_228 = *puVar12;
    FText::operator=(local_220,puVar12 + 8);
    local_208 = puVar12[0x20];
    bVar3 = true;
    local_200 = *(undefined8 *)(puVar12 + 0x28);
    local_1f8 = *(undefined8 *)(puVar12 + 0x30);
    local_1f0 = *(undefined4 *)(puVar12 + 0x38);
    local_1ec = *(undefined8 *)(puVar12 + 0x3c);
    local_1e4 = *(undefined2 *)(puVar12 + 0x44);
    local_1e2 = puVar12[0x46];
    local_1e0 = *(undefined4 *)(puVar12 + 0x48);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x930));
  LOCK();
  *(int *)(param_1 + 0x93c) = *(int *)(param_1 + 0x93c) + -1;
  UNLOCK();
  if ((((bVar3) && (local_1ec._5_1_ == '\0')) && (local_1ec._7_1_ == '\0')) &&
     (local_1ec._6_1_ == '\0')) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_120,L"Track Mission",L"GFxMissionLogMenu",L"SetActiveText");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar8);
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_118 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
  }
  plVar13 = *(longlong **)(param_1 + 0x8c8);
  if (plVar13 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0x948) == '\x01') {
      (**(code **)(*plVar13 + 0x278))(plVar13,1);
      lVar9 = *(longlong *)(param_1 + 0x8c8);
      local_198 = uVar11;
      local_1a0 = lVar9;
      if (lVar9 != 0) {
        uVar8 = UBlendableInterface::GetPrivateStaticClass();
        local_198 = UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar8);
      }
      FUN_142f05530(*(undefined8 *)(param_1 + 0x5b0),&local_1a0,DAT_146873438);
      uVar8 = FText::ToString(param_1 + 0x878);
      lVar9 = FText::FromString(local_80,uVar8);
      puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_90,param_1 + 0x7c0);
      local_68[0] = 4;
      FText::FText(local_58,lVar9);
      local_190 = *puVar10;
      local_1b8 = local_68;
      puStack_1b0 = local_38;
      local_188 = puVar10[1];
      local_40 = '\x01';
      if (local_188 != 0) {
        LOCK();
        *(int *)(local_188 + 8) = *(int *)(local_188 + 8) + 1;
        UNLOCK();
      }
      uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_148,&local_1b8);
      uVar8 = FText::Format(local_108,&local_190,uVar8);
      FText::FText(local_138,uVar8);
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_100 + 1;
        lVar6 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)local_100 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_100 + 8))(local_100,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_148);
      if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
        LOCK();
        plVar13 = local_50 + 1;
        lVar6 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      plVar13 = (longlong *)puVar10[1];
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar13 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      plVar13 = *(longlong **)(lVar9 + 8);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar13 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146873438,local_138,1);
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_130 + 1;
        lVar9 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)local_130 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
    }
    else {
      (**(code **)(*plVar13 + 0x278))(plVar13,0);
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x980);
  local_178 = uVar11;
  local_180 = lVar9;
  if (lVar9 != 0) {
    uVar8 = UBlendableInterface::GetPrivateStaticClass();
    local_178 = UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar8);
  }
  FUN_142f05530(*(undefined8 *)(param_1 + 0x5b0),&local_180,DAT_146873440);
  cVar7 = FUN_140faf460(param_1);
  if (cVar7 != '\0') {
    FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146873440,param_1 + 0x790,1);
  }
  uVar15 = uVar11;
  if (*(longlong *)(param_1 + 0x8a0) == 0) {
LAB_140fcc299:
    bVar3 = false;
  }
  else {
    local_258 = 0;
    local_250 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
    FGenericPlatformString::Memcpy(local_258,L"prevPageHint",0x1a);
    local_270 = &local_268;
    local_278 = 6;
    local_268 = (longlong *)0x0;
    local_260 = 0;
    uVar15 = 3;
    local_1a8 = 0;
    cVar7 = FUN_140e98630(*(undefined8 *)(param_1 + 0x8a0),param_1 + 0x8b0,&local_258,0);
    if (cVar7 == '\0') goto LAB_140fcc299;
    bVar3 = true;
  }
  if ((uVar15 & 2) != 0) {
    uVar15 = (ulonglong)((uint)uVar15 & 0xfffffffd);
    plVar13 = local_268;
    for (iVar14 = (int)local_260; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 2;
    }
    if (local_268 != (longlong *)0x0) {
      FMemory::Free(local_268);
    }
  }
  if (((uVar15 & 1) != 0) && (local_258 != 0)) {
    FMemory::Free();
  }
  bVar5 = false;
  bVar4 = false;
  if (bVar3) {
    lVar9 = *(longlong *)(param_1 + 0x8b0);
    local_168 = uVar11;
    local_170 = lVar9;
    if (lVar9 != 0) {
      uVar8 = UBlendableInterface::GetPrivateStaticClass();
      local_168 = UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar8);
    }
    FUN_142f05530(*(undefined8 *)(param_1 + 0x5b0),&local_170,DAT_146873068);
    local_1d8 = 0;
    local_1d0 = 0;
    uVar8 = FText::FromString(local_f0,&local_1d8);
    FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146873068,uVar8,1);
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_e8 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)local_e8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
    if (local_1d8 != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    local_238 = 0;
    local_230 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,0);
    FGenericPlatformString::Memcpy(local_238,L"nextPageHint",0x1a);
    local_270 = &local_248;
    local_278 = 6;
    local_248 = (longlong *)0x0;
    bVar5 = true;
    bVar4 = true;
    local_240 = 0;
    local_150 = 0;
    cVar7 = FUN_140e98630(*(undefined8 *)(param_1 + 0x8a0),param_1 + 0x8b8,&local_238,0);
    if (cVar7 != '\0') {
      bVar3 = true;
      goto LAB_140fcc43d;
    }
  }
  bVar3 = false;
LAB_140fcc43d:
  if (bVar4) {
    plVar13 = local_248;
    for (iVar14 = (int)local_240; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 2;
    }
    if (local_248 != (longlong *)0x0) {
      FMemory::Free(local_248);
    }
  }
  if ((bVar5) && (local_238 != 0)) {
    FMemory::Free();
  }
  if (bVar3) {
    lVar9 = *(longlong *)(param_1 + 0x8b8);
    local_160 = lVar9;
    if (lVar9 != 0) {
      uVar8 = UBlendableInterface::GetPrivateStaticClass();
      uVar11 = UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar8);
    }
    local_158 = uVar11;
    FUN_142f05530(*(undefined8 *)(param_1 + 0x5b0),&local_160,DAT_146873070);
    local_1c8 = 0;
    local_1c0 = 0;
    uVar8 = FText::FromString(local_d8,&local_1c8);
    FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146873070,uVar8,1);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_d0 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    if (local_1c8 != 0) {
      FMemory::Free();
    }
  }
  if ((*(longlong *)(param_1 + 0x860) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x860) + 0xc48) != 0)) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_c0,L"Stop Audio",L"GFxMissionLogMenu",L"StopLog");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146873448,uVar8);
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_b8 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x910) != 0) {
    FUN_140fd2110();
  }
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_a8,L"Close",L"GFxMissionLogMenu",L"BackOutText");
  FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar8);
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_a0 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  if (local_218 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_218 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_218)(local_218);
      LOCK();
      piVar1 = (int *)((longlong)local_218 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_218 + 8))(local_218,1);
      }
    }
  }
  return;
}



// FUNCTION 140fcc6e0 FUN_140fcc6e0 body=1828 status=ok
// SIG undefined FUN_140fcc6e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fcc6e0(longlong param_1)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  char *pcVar12;
  float fVar13;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  undefined4 *local_238;
  ulonglong *puStack_230;
  longlong local_228;
  longlong local_220;
  undefined8 local_218;
  longlong local_210;
  undefined8 local_208;
  longlong *plStack_200;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [24];
  undefined1 local_100 [24];
  undefined1 local_e8 [32];
  undefined4 local_c8 [4];
  undefined1 local_b8 [24];
  undefined1 local_a0;
  undefined4 local_98;
  undefined1 local_88 [24];
  undefined1 local_70;
  undefined4 local_68;
  undefined1 local_58 [24];
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_268;
  if (*(longlong **)(param_1 + 0x778) != (longlong *)0x0) {
    lVar8 = **(longlong **)(param_1 + 0x778);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_188,L"View Roster",L"GFxMissionDeliveryMenu",L"ViewRosterText");
    (**(code **)(lVar8 + 0x2b0))(*(undefined8 *)(param_1 + 0x778),uVar7,1,0);
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_180 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar1 = (int *)((longlong)local_180 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_180 + 8))(local_180,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x6d0) != 0) {
    cVar6 = FText::IsEmpty(param_1 + 0x7a8);
    if (cVar6 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x2b0))
                (*(longlong **)(param_1 + 0x6d0),param_1 + 0x7a8,1,0);
      fVar13 = (float)FUN_142eee550(*(undefined8 *)(param_1 + 0x6d0));
      FUN_140fae380(param_1,(double)fVar13);
    }
  }
  if (*(longlong *)(param_1 + 0x6e8) != 0) {
    cVar6 = FText::IsEmpty(param_1 + 0x7c0);
    if (cVar6 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x2b0))
                (*(longlong **)(param_1 + 0x6e8),param_1 + 0x7c0,1,0);
    }
  }
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    cVar6 = FText::IsEmpty(param_1 + 0x7d8);
    if (cVar6 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x2b0))
                (*(longlong **)(param_1 + 0x6f8),param_1 + 0x7d8,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x740) != 0) && (0 < *(int *)(param_1 + 0x7f0))) {
    FText::FText(local_1c8);
    FText::FText(local_1e0);
    FText::FText(local_1f8);
    local_248 = local_1f8;
    FUN_140fb0610(param_1,*(undefined4 *)(param_1 + 0x7f0),local_1c8,local_1e0);
    lVar8 = FText::FText(local_118,local_1f8);
    local_220 = lVar8;
    lVar9 = FText::FText(local_100,local_1e0);
    local_228 = lVar9;
    lVar10 = FText::FText(local_e8,local_1c8);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_158,L"{0}{1}{2}",L"GFxMissionDeliveryMenu",
                       L"Mission Difficulty Format String");
    puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_128,uVar7);
    local_c8[0] = 4;
    FText::FText(local_b8,lVar10);
    local_a0 = 1;
    local_98 = 4;
    FText::FText(local_88,lVar9);
    local_70 = 1;
    local_68 = 4;
    FText::FText(local_58,lVar8);
    local_238 = local_c8;
    local_40 = 1;
    puStack_230 = local_38;
    local_218 = *puVar11;
    local_210 = puVar11[1];
    if (local_210 != 0) {
      LOCK();
      *(int *)(local_210 + 8) = *(int *)(local_210 + 8) + 1;
      UNLOCK();
    }
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_1b0,&local_238);
    uVar7 = FText::Format(local_170,&local_218,uVar7);
    FText::FText(local_1a0,uVar7);
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_168 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_168)(local_168);
        LOCK();
        piVar1 = (int *)((longlong)local_168 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_168 + 8))(local_168,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1b0);
    lVar8 = 3;
    pcVar12 = &stack0xfffffffffffffff0;
    do {
      lVar8 = lVar8 + -1;
      pcVar2 = pcVar12 + -0x30;
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        plVar5 = *(longlong **)(pcVar12 + -0x40);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar5 + 1;
          lVar9 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
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
      }
      pcVar12 = pcVar2;
    } while (lVar8 != 0);
    plVar5 = (longlong *)puVar11[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
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
    plVar5 = *(longlong **)(lVar10 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
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
    plVar5 = *(longlong **)(local_228 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
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
    plVar5 = *(longlong **)(local_220 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
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
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x2b0))
              (*(longlong **)(param_1 + 0x740),local_1a0,1,0);
    if (local_198 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_198 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_198)(local_198);
        LOCK();
        piVar1 = (int *)((longlong)local_198 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_198 + 8))(local_198,1);
        }
      }
    }
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_150 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)local_150 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1f0 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar1 = (int *)((longlong)local_1f0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1f0 + 8))(local_1f0,1);
        }
      }
    }
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1d8 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_1d8)(local_1d8);
        LOCK();
        piVar1 = (int *)((longlong)local_1d8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1d8 + 8))(local_1d8,1);
        }
      }
    }
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_1c0 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar1 = (int *)((longlong)local_1c0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1c0 + 8))(local_1c0,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    cVar6 = FText::IsEmpty(param_1 + 0x7f8);
    if (cVar6 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x2b0))
                (*(longlong **)(param_1 + 0x6f0),param_1 + 0x7f8,1,0);
    }
  }
  if (*(longlong **)(param_1 + 0x770) != (longlong *)0x0) {
    local_208 = 0;
    plStack_200 = (longlong *)0x0;
    lVar8 = **(longlong **)(param_1 + 0x770);
    uVar7 = FText::AsNumber(local_140,*(undefined4 *)(param_1 + 0x7a4),0,&local_208);
    (**(code **)(lVar8 + 0x2b0))(*(undefined8 *)(param_1 + 0x770),uVar7,1,0);
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_138 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar1 = (int *)((longlong)local_138 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_138 + 8))(local_138,1);
        }
      }
    }
    plVar5 = plStack_200;
    if (plStack_200 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_200 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_200)(plStack_200);
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
  }
  plVar5 = *(longlong **)(param_1 + 0x768);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x278))(plVar5,0 < *(int *)(param_1 + 0x7a4));
  }
  return;
}



// FUNCTION 140fcce10 FUN_140fcce10 body=1116 status=ok
// SIG undefined FUN_140fcce10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fcce10(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  uint **ppuVar17;
  uint uVar18;
  uint *puVar19;
  undefined1 auStack_108 [32];
  undefined2 local_e8;
  undefined4 local_d8 [2];
  undefined8 local_d0;
  uint *puStack_c8;
  uint local_c0;
  uint uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  longlong *local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint *local_a0;
  uint uStack_98;
  uint uStack_94;
  undefined8 local_90;
  longlong *local_88;
  undefined8 uStack_80;
  uint *puStack_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  uint **local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FUN_142ecffe0();
    plVar1 = (longlong *)(param_1 + 0x6f0);
    puVar2 = (uint *)(param_1 + 0x700);
    local_d0 = 0x100000000;
    *(undefined1 *)(*(longlong *)(param_1 + 0x8d8) + 0x209) = 2;
    uVar4 = *(uint *)(param_1 + 0x718);
    uStack_bc = 0;
    iStack_b8 = 0;
    if (uVar4 != 0) {
      puVar19 = *(uint **)(param_1 + 0x710);
      if (*(uint **)(param_1 + 0x710) == (uint *)0x0) {
        puVar19 = puVar2;
      }
      uVar9 = *puVar19;
      iStack_b8 = 0;
      iVar10 = 0;
      while (uVar9 == 0) {
        iStack_b8 = iStack_b8 + 0x20;
        local_d0._4_4_ = (undefined4)((ulonglong)local_d0 >> 0x20);
        local_d0 = CONCAT44(local_d0._4_4_,iVar10 + 1);
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
        goto LAB_140fccf1d;
        uVar9 = puVar19[(longlong)iVar10 + 1];
        iVar10 = iVar10 + 1;
      }
      uVar9 = uVar9 - 1 & uVar9 ^ uVar9;
      iVar10 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      local_d0 = CONCAT44(uVar9,(undefined4)local_d0);
      if (uVar9 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_bc = (iStack_b8 - iVar10) + 0x1f;
      if ((int)uVar4 < (int)uStack_bc) {
LAB_140fccf1d:
        uStack_bc = uVar4;
      }
    }
    uVar9 = *(uint *)(param_1 + 0x718);
    uStack_98 = 0xffffffff;
    uStack_94 = uStack_bc;
    local_90 = CONCAT44(uStack_b4,iStack_b8);
    uStack_80 = local_d0;
    lVar11 = uStack_80;
    local_c0 = -1 << ((byte)uVar9 & 0x1f);
    uStack_80._0_4_ = (undefined4)local_d0;
    uStack_80._4_4_ = (uint)((ulonglong)local_d0 >> 0x20);
    uVar18 = uVar9 & 0xffffffe0;
    uStack_a8 = (undefined4)uStack_80;
    uStack_a4 = uStack_80._4_4_;
    puStack_c8 = puVar2;
    uStack_bc = uVar9;
    local_a0 = puVar2;
    local_88 = plVar1;
    uStack_80 = lVar11;
    puStack_78 = puVar2;
    uStack_68 = local_90;
    local_b0 = plVar1;
    uStack_70 = uStack_98;
    uStack_6c = uStack_94;
    if (uVar9 != uVar4) {
      puVar19 = *(uint **)(param_1 + 0x710);
      if (*(uint **)(param_1 + 0x710) == (uint *)0x0) {
        puVar19 = puVar2;
      }
      uVar15 = puVar19[(int)uVar9 >> 5] & local_c0;
      iVar10 = (int)uVar9 >> 5;
      while (uVar15 == 0) {
        uVar18 = uVar18 + 0x20;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
        goto LAB_140fccff5;
        uVar15 = puVar19[(longlong)iVar10 + 1];
        local_c0 = 0xffffffff;
        iVar10 = iVar10 + 1;
      }
      uVar15 = uVar15 - 1 & uVar15 ^ uVar15;
      iVar10 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uVar15 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_bc = (uVar18 - iVar10) + 0x1f;
      uVar9 = uStack_bc;
      if ((int)uVar4 < (int)uStack_bc) {
LAB_140fccff5:
        uStack_bc = uVar4;
        uVar9 = uVar4;
      }
    }
    while( true ) {
      if ((uStack_94 == uVar9) && (local_a0 == puVar2)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if ((bVar6) && (local_b0 == plVar1)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) break;
      local_d0 = 0;
      puVar14 = (undefined1 *)((longlong)(int)uStack_94 * 0x38 + *local_b0);
      puStack_c8 = (uint *)0xd;
      uVar3 = *puVar14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d0,0);
      local_e8 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_d0,0xd,"NavBarButton");
      uVar5 = *(undefined8 *)(param_1 + 0x8d8);
      URemnantGameInstance::GetPrivateStaticClass();
      lVar11 = FUN_142ebcee0(uVar5,&local_d0);
      if (lVar11 == 0) {
LAB_140fcd0d3:
        lVar11 = 0;
      }
      else {
        lVar12 = URemnantGameInstance::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_140fcd0d3;
      }
      if (local_d0 != 0) {
        FMemory::Free();
      }
      if (lVar11 != 0) {
        FUN_142ed3af0(lVar11,puVar14 + 8);
        FUN_142ed2600(lVar11,0);
        (**(code **)(*(longlong *)(lVar11 + 0x170) + 0x38))((longlong *)(lVar11 + 0x170),1);
        *(undefined1 *)(lVar11 + 0x308) = uVar3;
      }
      uStack_98 = uStack_98 & ~uStack_a4;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a8);
    }
    if (*(longlong *)(param_1 + 0x8e0) != 0) {
      iVar10 = FUN_142eb7440();
      if (0 < iVar10) {
        (**(code **)(**(longlong **)(param_1 + 0x8d8) + 0x2b8))
                  (*(longlong **)(param_1 + 0x8d8),0,0,0);
      }
    }
    local_d8[0] = 0xffffffff;
    if (*(longlong *)(param_1 + 0x8d8) != 0) {
      FUN_14170c210(local_d8);
    }
    FWeakObjectPtr::operator=(&local_d0,param_1);
    uVar16 = local_d8[0];
    uVar7 = (undefined4)local_d0;
    uVar8 = local_d0._4_4_;
    local_d8[0] = 0xffffffff;
    local_58 = (uint **)0x0;
    local_48 = 0;
    puVar13 = (undefined8 *)FUN_140438ef0(0x20,&puStack_78);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = &PTR_FUN_144605c50;
      puVar13[1] = param_1;
      *(undefined4 *)(puVar13 + 2) = uVar7;
      *(undefined4 *)((longlong)puVar13 + 0x14) = uVar8;
      *(undefined4 *)(puVar13 + 3) = uVar16;
      uVar16 = 0xffffffff;
    }
    local_88 = (longlong *)&LAB_140faeae0;
    FUN_14208c260(param_1,&local_88);
    if (local_48 != 0) {
      ppuVar17 = &puStack_78;
      if (local_58 != (uint **)0x0) {
        ppuVar17 = local_58;
      }
      if (ppuVar17 != (uint **)0x0) {
        (**(code **)(*ppuVar17 + 4))(ppuVar17,0);
      }
    }
    if (local_58 != (uint **)0x0) {
      FMemory::Free();
    }
    FUN_1416f8340(uVar16);
    FUN_1416f8340(local_d8[0]);
  }
  return;
}



// FUNCTION 140fcd270 FUN_140fcd270 body=496 status=ok
// SIG undefined FUN_140fcd270(void)

void FUN_140fcd270(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 0x340) == 0) {
    local_40 = 0x17;
    local_48 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"friendInfo.friendCount",0x2e);
    local_58 = (longlong *)0x0;
    local_50 = 0;
    uVar5 = FUN_140ecc7d0(param_1,&local_48,0,6,&local_58);
    *(undefined8 *)(param_1 + 0x340) = uVar5;
    plVar6 = local_58;
    for (iVar7 = (int)local_50; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong **)(param_1 + 0x340) != (longlong *)0x0) {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    lVar3 = **(longlong **)(param_1 + 0x340);
    uVar5 = FText::AsNumber(local_28,*(undefined4 *)(param_2 + 0x48),0,&local_38);
    (**(code **)(lVar3 + 0x2b0))(*(undefined8 *)(param_1 + 0x340),uVar5,1,0);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_20 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    plVar6 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_30 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x340) + 0x278))
              (*(longlong **)(param_1 + 0x340),0 < *(int *)(param_2 + 0x48));
  }
  cVar4 = FUN_14208d2d0(param_1,(undefined8 *)(param_1 + 800),L"friendInfo.FriendIcon");
  if (cVar4 != '\0') {
    FUN_142056670(*(undefined8 *)(param_1 + 800),0 < *(int *)(param_2 + 0x48));
  }
  return;
}



// FUNCTION 140fcd460 FUN_140fcd460 body=276 status=ok
// SIG undefined FUN_140fcd460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fcd460(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_142ece720();
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140faee50;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_142ecfea0(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fcd580 FUN_140fcd580 body=276 status=ok
// SIG undefined FUN_140fcd580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fcd580(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_142ece720();
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140faed20;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_142ecfea0(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fcd6a0 FUN_140fcd6a0 body=1787 status=ok
// SIG undefined FUN_140fcd6a0(void)

void FUN_140fcd6a0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  longlong local_res8;
  longlong local_res10;
  wchar_t *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0 [3];
  undefined8 local_88;
  longlong local_78 [2];
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  
  if ((*(longlong *)(param_1 + 0x908) == 0) || (*(longlong *)(param_1 + 0x9c8) == 0))
  goto LAB_140fcdd6f;
  FUN_142ecffe0();
  FText::FText(local_c8);
  local_b0 = (longlong *)0x0;
  local_a8 = 0;
  if (*(char *)(param_1 + 0xa50) == '\x01') {
    iVar5 = *(int *)(param_1 + 0x91c);
    if ((iVar5 < 0) || (*(int *)(param_1 + 0x818) <= iVar5)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_140fa0e20(local_c8,*(longlong *)(param_1 + 0x810) + (longlong)iVar5 * 0x28);
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
        puVar7 = (undefined8 *)FUN_140b80630(*(longlong *)(DAT_146b33f38 + 0x58),local_68,local_c8);
        iVar5 = *(int *)(puVar7 + 1);
        if (iVar5 != 0) {
          if (local_a8._4_4_ < (int)local_a8 + iVar5) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(&local_b0);
          }
          _guard_xfg_dispatch_icall_nop
                    (local_b0 + (int)local_a8,(void *)*puVar7,(longlong)iVar5 << 3);
          *(undefined4 *)(puVar7 + 1) = 0;
          local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + iVar5);
        }
LAB_140fcd88b:
        if (local_68[0] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  else if (*(char *)(param_1 + 0xa50) == '\x03') {
    iVar5 = *(int *)(param_1 + 0x918);
    if ((iVar5 < 0) || (*(int *)(param_1 + 0x808) <= iVar5)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_140fa0e20(local_c8,*(longlong *)(param_1 + 0x800) + (longlong)iVar5 * 0x28);
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
        puVar7 = (undefined8 *)FUN_140b80440(*(longlong *)(DAT_146b33f38 + 0x58),local_78,local_c8);
        iVar5 = *(int *)(puVar7 + 1);
        local_68[0] = local_78[0];
        if (iVar5 != 0) {
          if (local_a8._4_4_ < (int)local_a8 + iVar5) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(&local_b0);
          }
          _guard_xfg_dispatch_icall_nop
                    (local_b0 + (int)local_a8,(void *)*puVar7,(longlong)iVar5 << 3);
          *(undefined4 *)(puVar7 + 1) = 0;
          local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + iVar5);
          local_68[0] = local_78[0];
        }
        goto LAB_140fcd88b;
      }
    }
  }
  bVar3 = false;
  iVar5 = FSlateUpdatableInstanceBuffer::GetNumInstances(*(undefined8 *)(param_1 + 0x9c8));
  iVar16 = 0;
  local_res10 = (longlong)iVar5;
  iVar6 = -1;
  if (0 < iVar5) {
    local_res8 = 0;
    do {
      plVar15 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x9c8) + 0x78) + local_res8);
      if ((int)local_a8 < 1) {
LAB_140fcd924:
        local_d8 = (wchar_t *)0x0;
        local_d0 = 0x12;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
        FGenericPlatformString::Memcpy(local_d8,L"ChallengeListItem",0x24);
        if (*plVar15 == 0) {
          if (((char)plVar15[0x14] != '\0') && (local_d8 != L"ChallengeUndiscoveredMC")) {
            uVar13 = local_d0._4_4_;
            iVar5 = 0;
            local_d0 = (ulonglong)local_d0._4_4_ << 0x20;
            if (uVar13 != 0x18) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_d8,0x18);
              iVar5 = (int)local_d0;
              uVar13 = local_d0._4_4_;
            }
            local_d0 = CONCAT44(local_d0._4_4_,iVar5 + 0x18);
            if ((int)uVar13 < iVar5 + 0x18) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8);
            }
            builtin_wcsncpy(local_d8,L"ChallengeUndiscoveredMC",0x18);
          }
        }
        else {
          iVar5 = iVar16 + 1;
          if (iVar5 < iVar16 + 1 + (int)plVar15[1]) {
            do {
              if (0 < (int)local_a8) {
                lVar8 = FUN_1411e6c30((longlong)iVar5 * 0xc0 +
                                      *(longlong *)(*(longlong *)(param_1 + 0x9c8) + 0x78));
                plVar14 = local_b0;
                while( true ) {
                  if (plVar14 == local_b0 + (int)local_a8) goto LAB_140fcdc61;
                  if (*plVar14 == lVar8) break;
                  plVar14 = plVar14 + 1;
                }
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar16 + 1 + (int)plVar15[1]);
          }
          if (bVar3) {
            local_a0[1] = 0x14;
            local_a0[0] = 0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a0,0);
            FGenericPlatformString::Memcpy(local_a0[0],L"ChallengeListSpacer",0x28);
            uVar12 = *(undefined8 *)(param_1 + 0x908);
            uVar9 = ALobbyBeaconPlayerState::GetPrivateStaticClass();
            lVar8 = FUN_142ebcee0(uVar12,local_a0,uVar9,1);
            if (lVar8 == 0) {
LAB_140fcda63:
              lVar8 = 0;
            }
            else {
              lVar10 = ALobbyBeaconPlayerState::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (!bVar3) goto LAB_140fcda63;
            }
            if (local_a0[0] != 0) {
              FMemory::Free();
            }
            if (lVar8 != 0) {
              (**(code **)(*(longlong *)(lVar8 + 0x170) + 0x38))();
            }
          }
          bVar3 = true;
          if (local_d8 != L"ChallengeListHeader") {
            uVar13 = local_d0._4_4_;
            iVar5 = 0;
            local_d0 = (ulonglong)local_d0._4_4_ << 0x20;
            if (uVar13 != 0x14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_d8,0x14);
              iVar5 = (int)local_d0;
              uVar13 = local_d0._4_4_;
            }
            local_d0 = CONCAT44(local_d0._4_4_,iVar5 + 0x14);
            if ((int)uVar13 < iVar5 + 0x14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8);
            }
            builtin_wcsncpy(local_d8,L"ChallengeListHeader",0x14);
          }
        }
        uVar12 = *(undefined8 *)(param_1 + 0x908);
        uVar9 = ALobbyBeaconPlayerState::GetPrivateStaticClass();
        lVar8 = FUN_142ebcee0(uVar12,&local_d8,uVar9,1);
        if (lVar8 != 0) {
          lVar10 = ALobbyBeaconPlayerState::GetPrivateStaticClass();
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
            FUN_1411fe550(lVar8,plVar15);
            (**(code **)(*(longlong *)(lVar8 + 0x170) + 0x38))();
            if ((iVar6 == -1) && (*plVar15 == 0)) {
              iVar6 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x908));
              iVar6 = iVar6 + -1;
            }
          }
        }
        if (((*(longlong *)(param_1 + 0xa60) != 0) &&
            (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa60) + 0x10), lVar8 != 0)) &&
           (plVar15[3] != 0)) {
          plVar15 = (longlong *)FUN_140852e70(plVar15 + 2);
          if (*plVar15 != 0) {
            lVar11 = FUN_142dfdfe0();
            lVar10 = *plVar15;
            for (lVar2 = lVar10; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
              if (lVar2 == lVar11) goto LAB_140fcdc48;
            }
          }
          lVar10 = 0;
LAB_140fcdc48:
          if (lVar8 == lVar10) {
            iVar6 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x908));
            iVar6 = iVar6 + -1;
          }
        }
LAB_140fcdc61:
        if (local_d8 != (wchar_t *)0x0) {
          FMemory::Free();
        }
      }
      else {
        lVar8 = FUN_1411e6c30(plVar15);
        for (plVar14 = local_b0; plVar14 != local_b0 + (int)local_a8; plVar14 = plVar14 + 1) {
          if (*plVar14 == lVar8) goto LAB_140fcd924;
        }
      }
      local_res8 = local_res8 + 0xc0;
      iVar16 = iVar16 + 1;
      local_res10 = local_res10 + -1;
    } while (local_res10 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x908) + 0x300))();
  lVar8 = *(longlong *)(param_1 + 0x908);
  local_a0[2] = lVar8;
  if (lVar8 == 0) {
    local_88 = 0;
  }
  else {
    uVar12 = UBlendableInterface::GetPrivateStaticClass();
    local_88 = UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar12);
  }
  FUN_142ed36d0(param_1,local_a0 + 2,0);
  *(undefined8 *)(param_1 + 0xa60) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x908) + 0x2b8))(*(longlong **)(param_1 + 0x908),iVar6,1,0)
  ;
  if (local_b0 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_c0 + 1;
    lVar8 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
LAB_140fcdd6f:
  if (*(char *)(param_1 + 0xd30) == '\x02') {
    local_58 = 0;
    uStack_50 = 0;
    FUN_142ed36d0(param_1,&local_58,0);
  }
  return;
}



// FUNCTION 140fcdda0 FUN_140fcdda0 body=5740 status=ok
// SIG undefined FUN_140fcdda0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fcdda0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 **ppuVar3;
  void *pvVar4;
  undefined4 *puVar5;
  wchar_t *pwVar6;
  int iVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong **pplVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong *plVar19;
  wchar_t *pwVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  uint uVar23;
  longlong *plVar24;
  ulonglong uVar25;
  undefined2 *puVar26;
  wchar_t *pwVar27;
  longlong *plVar28;
  bool bVar29;
  undefined1 auStack_3e8 [32];
  longlong *local_3c8;
  undefined1 local_3b8;
  uint local_3b4;
  undefined1 local_3b0 [8];
  longlong *local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  longlong local_390;
  longlong *local_388;
  ulonglong local_380;
  longlong *local_378;
  ulonglong local_370;
  longlong local_368;
  longlong *plStack_360;
  undefined2 *local_358;
  int local_350;
  undefined4 local_34c;
  longlong *local_348;
  longlong *plStack_340;
  longlong local_338;
  ulonglong local_330;
  void *local_328;
  int local_320;
  undefined4 local_31c;
  code *local_318;
  undefined4 uStack_310;
  uint uStack_30c;
  undefined8 local_308;
  longlong *plStack_300;
  undefined4 *local_2f8;
  longlong *plStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  longlong *local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  undefined1 local_2b8 [8];
  longlong *local_2b0;
  undefined1 local_2a0 [8];
  longlong *local_298;
  undefined1 local_288 [8];
  longlong *local_280;
  undefined4 local_270;
  undefined2 local_26c;
  longlong local_268;
  longlong *plStack_260;
  longlong local_258;
  longlong *plStack_250;
  longlong local_248;
  longlong *local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined4 local_1e0;
  undefined2 local_1dc;
  undefined8 local_1d8;
  longlong *plStack_1d0;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined8 local_1b0;
  longlong local_1a8;
  longlong local_198;
  longlong *plStack_190;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined4 *local_158;
  longlong *plStack_150;
  undefined1 local_148 [16];
  longlong local_138 [2];
  code *local_128;
  longlong lStack_120;
  code *local_118;
  longlong lStack_110;
  longlong local_108 [2];
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [16];
  undefined4 local_88 [2];
  longlong local_80;
  longlong *local_70;
  char local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  uVar25 = 0;
  local_3b4 = 0;
  local_390 = param_1;
  uVar12 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (uVar12 != 0) {
    local_380 = uVar12;
    lVar13 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(uVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
         ) != lVar13 + 0x88)) {
      bVar29 = false;
    }
    else {
      bVar29 = true;
    }
    if (bVar29) goto LAB_140fcde3c;
  }
  local_380 = 0;
  uVar12 = uVar25;
LAB_140fcde3c:
  plVar19 = *(longlong **)(param_1 + 0xa20);
  local_2d8 = plVar19 + (longlong)*(int *)(param_1 + 0xa28) * 2;
  local_3a8 = (longlong *)0x0;
  local_3a0 = 0;
  local_388 = plVar19;
  if (plVar19 != local_2d8) {
    local_2e8 = local_88;
    uStack_2e0 = (longlong *)&local_58;
    do {
      local_2d0 = 0;
      local_2c8 = 0;
      local_348 = (longlong *)0x0;
      plStack_340 = (longlong *)0x0;
      local_368 = *(longlong *)(*plVar19 + 0x10);
      plStack_360 = *(longlong **)(*plVar19 + 0x18);
      local_3b8 = 0;
      if (plStack_360 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_360 + 1) = (int)plStack_360[1] + 1;
        UNLOCK();
      }
      local_388 = plVar19;
      if (uVar12 != 0) {
        local_3c8 = &local_2d0;
        cVar8 = FUN_140d79f00(*(undefined8 *)(uVar12 + 0x478),&local_368,1,0);
        if (cVar8 == '\0') {
          FUN_140d938f0(*(undefined8 *)(uVar12 + 0x478),&local_368);
        }
        pplVar14 = (longlong **)
                   FUN_140d84620(*(longlong *)(uVar12 + 0x478) + 0x1f8,local_170,&local_368);
        if (&local_348 != pplVar14) {
          local_348 = *pplVar14;
          *pplVar14 = (longlong *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_340,pplVar14 + 1);
        }
        plVar28 = local_168;
        if (local_168 != (longlong *)0x0) {
          LOCK();
          plVar24 = local_168 + 1;
          lVar13 = *plVar24;
          *(int *)plVar24 = (int)*plVar24 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_168)(local_168);
            LOCK();
            piVar1 = (int *)((longlong)plVar28 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar28 + 8))(plVar28,1);
            }
          }
        }
        if ((local_348 == (longlong *)0x0) ||
           (lVar13 = (**(code **)(*local_348 + 0x10))(), lVar13 == 0)) {
          FUN_140d94190(*(longlong *)(uVar12 + 0x478) + 0x1f8,&local_368);
        }
        lVar13 = FWeakObjectPtr::Get(param_1 + 0x58c);
        if (lVar13 != 0) {
          lVar15 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
            bVar29 = false;
          }
          else {
            bVar29 = true;
          }
          if (bVar29) {
            FUN_142dcf3a0(lVar13,&local_258);
            if (local_258 == 0) {
LAB_140fce068:
              uVar9 = 0;
            }
            else {
              local_3b4 = (uint)uVar25 | 1;
              uVar25 = (ulonglong)local_3b4;
              local_198 = local_258;
              plStack_190 = plStack_250;
              if (plStack_250 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_250 + 1) = (int)plStack_250[1] + 1;
                UNLOCK();
              }
              cVar8 = FUN_140ba6b70(uVar12,&local_198,&local_368);
              if (cVar8 == '\0') goto LAB_140fce068;
              uVar9 = 1;
            }
            plVar28 = plStack_190;
            if ((uVar25 & 1) != 0) {
              local_3b4 = (uint)uVar25 & 0xfffffffe;
              uVar25 = (ulonglong)local_3b4;
              if (plStack_190 != (longlong *)0x0) {
                LOCK();
                plVar24 = plStack_190 + 1;
                lVar13 = *plVar24;
                *(int *)plVar24 = (int)*plVar24 + -1;
                UNLOCK();
                if ((int)lVar13 == 1) {
                  (**(code **)*plStack_190)(plStack_190);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar28 + 0xc);
                  iVar11 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar11 == 1) {
                    (**(code **)(*plVar28 + 8))(plVar28,1);
                  }
                }
              }
            }
            plVar28 = plStack_250;
            local_3b8 = uVar9;
            if (plStack_250 != (longlong *)0x0) {
              LOCK();
              plVar24 = plStack_250 + 1;
              lVar13 = *plVar24;
              *(int *)plVar24 = (int)*plVar24 + -1;
              UNLOCK();
              if ((int)lVar13 == 1) {
                (**(code **)*plStack_250)(plStack_250);
                LOCK();
                piVar1 = (int *)((longlong)plVar28 + 0xc);
                iVar11 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                local_3b8 = uVar9;
                if (iVar11 == 1) {
                  (**(code **)(*plVar28 + 8))(plVar28,1);
                  local_3b8 = uVar9;
                }
              }
            }
          }
        }
      }
      uVar16 = FUN_1404b03b0();
      FText::FText(local_2b8,uVar16);
      uVar16 = FUN_1404b03b0();
      FText::FText(local_2a0,uVar16);
      uVar16 = FUN_1404b03b0();
      FText::FText(local_288,uVar16);
      local_270 = 0xffffffff;
      local_268 = 0;
      plStack_260 = (longlong *)0x0;
      local_26c = 0;
      uVar16 = FText::FromString(local_e0,&local_2d0);
      FText::operator=(local_2b8,uVar16);
      plVar28 = local_d8;
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar24 = local_d8 + 1;
        lVar13 = *plVar24;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar28 + 8))(plVar28,1);
          }
        }
      }
      iVar11 = *(int *)(*plVar19 + 0x40);
      uVar16 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_b0,L"LVL {0}",L"GFxMapMenu");
      puVar17 = (undefined8 *)FTextFormat::FTextFormat(local_98,uVar16);
      local_88[0] = 0;
      local_60 = '\0';
      local_1b0 = *puVar17;
      local_1a8 = puVar17[1];
      if (local_1a8 != 0) {
        LOCK();
        *(int *)(local_1a8 + 8) = *(int *)(local_1a8 + 8) + 1;
        UNLOCK();
      }
      local_158 = local_88;
      plStack_150 = (longlong *)&local_58;
      local_80 = (longlong)iVar11;
      uVar16 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_148,&local_158);
      uVar16 = FText::Format(local_c8,&local_1b0,uVar16);
      FText::FText(local_f8,uVar16);
      plVar28 = local_c0;
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar24 = local_c0 + 1;
        lVar13 = *plVar24;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar28 + 8))(plVar28,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_148);
      plVar28 = local_70;
      if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
        LOCK();
        plVar24 = local_70 + 1;
        lVar13 = *plVar24;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar28 + 8))(plVar28,1);
          }
        }
      }
      plVar28 = (longlong *)puVar17[1];
      if (plVar28 != (longlong *)0x0) {
        LOCK();
        plVar24 = plVar28 + 1;
        lVar13 = *plVar24;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar28)(plVar28);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar28 + 8))(plVar28,1);
          }
        }
      }
      FText::operator=(local_2a0,local_f8);
      plVar28 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar24 = local_f0 + 1;
        lVar13 = *plVar24;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar28 + 8))(plVar28,1);
          }
        }
      }
      plVar28 = local_a8;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar24 = local_a8 + 1;
        lVar13 = *plVar24;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)plVar28 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar28 + 8))(plVar28,1);
          }
        }
      }
      puVar26 = (undefined2 *)0x0;
      local_358 = (undefined2 *)0x0;
      local_350 = *(int *)(*plVar19 + 0x50);
      lVar13 = (longlong)local_350;
      pvVar4 = *(void **)(*plVar19 + 0x48);
      if (local_350 == 0) {
        local_34c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_358,local_350,0);
        puVar26 = local_358;
        _guard_xfg_dispatch_icall_nop(local_358,pvVar4,lVar13 * 2);
      }
      iVar11 = local_350;
      if (*(char *)(param_1 + 0xa50) == '\x02') {
        plVar28 = *(longlong **)(param_1 + 0x9a0);
        plVar19 = plVar28 + *(int *)(param_1 + 0x9a8);
        for (; plVar28 != plVar19; plVar28 = plVar28 + 1) {
          lVar13 = *plVar28;
          if (lVar13 == 0) {
LAB_140fce48e:
            bVar29 = false;
          }
          else {
            local_3b4 = (uint)uVar25 | 4;
            uVar25 = (ulonglong)local_3b4;
            puVar17 = (undefined8 *)FUN_14129a740(lVar13,local_138);
            puVar22 = &DAT_143f3eda8;
            if (iVar11 != 0) {
              puVar22 = puVar26;
            }
            if (*(int *)(puVar17 + 1) == 0) {
              puVar21 = &DAT_143f3eda8;
            }
            else {
              puVar21 = (undefined2 *)*puVar17;
            }
            iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar21,puVar22);
            if (iVar10 != 0) goto LAB_140fce48e;
            bVar29 = true;
          }
          if ((uVar25 & 4) != 0) {
            local_3b4 = (uint)uVar25 & 0xfffffffb;
            uVar25 = (ulonglong)local_3b4;
            if (local_138[0] != 0) {
              FMemory::Free();
            }
          }
          if (bVar29) {
            lVar13 = lVar13 + 0x30;
            goto LAB_140fce4cf;
          }
        }
      }
      else if (*(char *)(param_1 + 0xa50) == '\x03') {
        plVar28 = *(longlong **)(param_1 + 0x9b0);
        plVar19 = plVar28 + *(int *)(param_1 + 0x9b8);
        local_398 = plVar19;
        if (plVar28 != plVar19) {
LAB_140fce8d4:
          lVar13 = *plVar28;
          if (lVar13 != 0) {
            local_378 = (longlong *)0x0;
            local_370 = 0;
            lVar15 = FWeakObjectPtr::Get(local_390 + 0x58c);
            if (lVar15 == 0) {
LAB_140fce939:
              lVar15 = 0;
            }
            else {
              lVar18 = FUN_14145f370();
              if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar18 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar18 + 0x90) * 8) != lVar18 + 0x88)) {
                bVar29 = false;
              }
              else {
                bVar29 = true;
              }
              if (!bVar29) goto LAB_140fce939;
            }
            FUN_14129bc20(lVar15,lVar13,&local_378);
            uVar25 = (ulonglong)(int)local_370;
            plVar24 = local_378 + uVar25 * 2;
            plVar19 = local_378;
            if (local_378 != plVar24) {
LAB_140fce970:
              puVar22 = &DAT_143f3eda8;
              if (iVar11 != 0) {
                puVar22 = puVar26;
              }
              if ((int)plVar19[1] == 0) {
                puVar21 = &DAT_143f3eda8;
              }
              else {
                puVar21 = (undefined2 *)*plVar19;
              }
              iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar21,puVar22);
              if (iVar10 != 0) goto code_r0x000140fce999;
              FText::FText(local_1c8,lVar13 + 0x30);
              plVar19 = local_378;
              for (iVar11 = (int)local_370; iVar11 != 0; iVar11 = iVar11 + -1) {
                if (*plVar19 != 0) {
                  FMemory::Free();
                }
                plVar19 = plVar19 + 2;
              }
              if (local_378 != (longlong *)0x0) {
                FMemory::Free(local_378);
              }
              goto LAB_140fce4db;
            }
            goto LAB_140fce9ab;
          }
          goto LAB_140fce9df;
        }
      }
LAB_140fce4c7:
      lVar13 = FUN_1404b03b0();
LAB_140fce4cf:
      FText::FText(local_1c8,lVar13);
LAB_140fce4db:
      FText::operator=(local_288,local_1c8);
      plVar19 = local_1c0;
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        plVar28 = local_1c0 + 1;
        lVar13 = *plVar28;
        *(int *)plVar28 = (int)*plVar28 + -1;
        UNLOCK();
        puVar26 = local_358;
        if ((int)lVar13 == 1) {
          (**(code **)*local_1c0)(local_1c0);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          puVar26 = local_358;
          if (iVar11 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
            puVar26 = local_358;
          }
        }
      }
      if (puVar26 != (undefined2 *)0x0) {
        FMemory::Free(puVar26);
      }
      plStack_300 = plStack_360;
      local_270 = (int)local_3a0;
      if (plStack_360 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_360 + 1) = (int)plStack_360[1] + 1;
        UNLOCK();
      }
      local_268 = local_368;
      local_308 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_260,&plStack_300);
      plVar19 = plStack_300;
      if (plStack_300 != (longlong *)0x0) {
        LOCK();
        plVar28 = plStack_300 + 1;
        lVar13 = *plVar28;
        *(int *)plVar28 = (int)*plVar28 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plStack_300)(plStack_300);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plStack_300 + 8))(plStack_300,1);
          }
        }
      }
      uVar25 = local_3a0;
      lVar13 = (longlong)(int)local_3a0;
      local_26c = CONCAT11(local_3b8,(undefined1)local_26c);
      iVar11 = (int)local_3a0 + 1;
      local_3a0 = CONCAT44(local_3a0._4_4_,iVar11);
      if (local_3a0._4_4_ < iVar11) {
        FUN_140fd56e0(&local_3a8,uVar25 & 0xffffffff);
      }
      plVar28 = local_3a8 + lVar13 * 0xc;
      FText::FText(plVar28,local_2b8);
      FText::FText(plVar28 + 3,local_2a0);
      FText::FText(plVar28 + 6,local_288);
      plVar19 = plStack_260;
      *(undefined4 *)(plVar28 + 9) = local_270;
      *(undefined1 *)((longlong)plVar28 + 0x4c) = (undefined1)local_26c;
      *(undefined1 *)((longlong)plVar28 + 0x4d) = local_26c._1_1_;
      plVar28[10] = local_268;
      plVar28[0xb] = (longlong)plStack_260;
      if (plStack_260 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_260 + 1) = (int)plStack_260[1] + 1;
        UNLOCK();
        if (plStack_260 != (longlong *)0x0) {
          LOCK();
          plVar28 = plStack_260 + 1;
          lVar13 = *plVar28;
          *(int *)plVar28 = (int)*plVar28 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plStack_260)(plStack_260);
            LOCK();
            piVar1 = (int *)((longlong)plVar19 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar19 + 8))(plVar19,1);
            }
          }
        }
      }
      plVar19 = local_280;
      if (local_280 != (longlong *)0x0) {
        LOCK();
        plVar28 = local_280 + 1;
        lVar13 = *plVar28;
        *(int *)plVar28 = (int)*plVar28 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_280)(local_280);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
          }
        }
      }
      plVar19 = local_298;
      if (local_298 != (longlong *)0x0) {
        LOCK();
        plVar28 = local_298 + 1;
        lVar13 = *plVar28;
        *(int *)plVar28 = (int)*plVar28 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_298)(local_298);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
          }
        }
      }
      plVar19 = local_2b0;
      if (local_2b0 != (longlong *)0x0) {
        LOCK();
        plVar28 = local_2b0 + 1;
        lVar13 = *plVar28;
        *(int *)plVar28 = (int)*plVar28 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_2b0)(local_2b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
          }
        }
      }
      plVar19 = plStack_360;
      if (plStack_360 != (longlong *)0x0) {
        LOCK();
        plVar28 = plStack_360 + 1;
        lVar13 = *plVar28;
        *(int *)plVar28 = (int)*plVar28 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plStack_360)(plStack_360);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19,1);
          }
        }
      }
      plVar19 = plStack_340;
      if (plStack_340 != (longlong *)0x0) {
        LOCK();
        plVar28 = plStack_340 + 1;
        lVar13 = *plVar28;
        *(int *)plVar28 = (int)*plVar28 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plStack_340)(plStack_340);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plStack_340 + 8))(plStack_340,1);
          }
        }
      }
      if (local_2d0 != 0) {
        FMemory::Free();
      }
      uVar25 = (ulonglong)local_3b4;
      plVar19 = local_388 + 2;
      uVar12 = local_380;
      param_1 = local_390;
      local_388 = plVar19;
    } while (plVar19 != local_2d8);
  }
  uVar25 = 0;
  iVar11 = (int)local_3a0;
  FUN_140f9c5a0(local_3a8,(longlong)(int)local_3a0,local_3b0[0],local_3b0);
  if ((byte)(*(char *)(param_1 + 0xa50) - 2U) < 2) {
    FText::FText(local_188);
    uVar12 = uVar25;
    if (0 < iVar11) {
      do {
        iVar11 = (int)uVar12;
        plVar19 = local_3a8 + (longlong)iVar11 * 0xc + 6;
        cVar8 = FText::EqualTo(plVar19,local_188,0);
        if ((cVar8 == '\0') || (iVar11 == 0)) {
          bVar29 = true;
        }
        else {
          bVar29 = false;
        }
        if (bVar29) {
          uVar16 = FUN_1404b03b0();
          FText::FText(local_228,uVar16);
          uVar16 = FUN_1404b03b0();
          FText::FText(local_210,uVar16);
          uVar16 = FUN_1404b03b0();
          FText::FText(local_1f8,uVar16);
          local_1e0 = 0xffffffff;
          local_1d8 = 0;
          plStack_1d0 = (longlong *)0x0;
          local_1dc = 1;
          FText::operator=(local_228,plVar19);
          FText::operator=(local_1f8,plVar19);
          uVar12 = local_3a0;
          iVar7 = (int)local_3a0;
          iVar10 = (int)local_3a0 + 1;
          local_3a0 = CONCAT44(local_3a0._4_4_,iVar10);
          if (local_3a0._4_4_ < iVar10) {
            FUN_140fd56e0(&local_3a8,uVar12 & 0xffffffff);
          }
          plVar28 = local_3a8;
          _guard_xfg_dispatch_icall_nop
                    (local_3a8 + (longlong)iVar11 * 0xc + 0xc,local_3a8 + (longlong)iVar11 * 0xc,
                     (longlong)(iVar7 - iVar11) * 0x60);
          lVar13 = (longlong)plVar28 + uVar25;
          FText::FText(lVar13,local_228);
          FText::FText(lVar13 + 0x18,local_210);
          FText::FText(lVar13 + 0x30,local_1f8);
          plVar28 = plStack_1d0;
          *(undefined4 *)(lVar13 + 0x48) = local_1e0;
          *(undefined1 *)(lVar13 + 0x4c) = (undefined1)local_1dc;
          *(undefined1 *)(lVar13 + 0x4d) = local_1dc._1_1_;
          *(undefined8 *)(lVar13 + 0x50) = local_1d8;
          *(longlong **)(lVar13 + 0x58) = plStack_1d0;
          if (plStack_1d0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_1d0 + 1) = (int)plStack_1d0[1] + 1;
            UNLOCK();
            LOCK();
            plVar24 = plStack_1d0 + 1;
            lVar13 = *plVar24;
            *(int *)plVar24 = (int)*plVar24 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*plStack_1d0)(plStack_1d0);
              LOCK();
              piVar1 = (int *)((longlong)plVar28 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar28 + 8))(plVar28,1);
              }
            }
          }
          plVar28 = local_1f0;
          iVar11 = iVar11 + 1;
          uVar25 = uVar25 + 0x60;
          if (local_1f0 != (longlong *)0x0) {
            LOCK();
            plVar24 = local_1f0 + 1;
            lVar13 = *plVar24;
            *(int *)plVar24 = (int)*plVar24 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*local_1f0)(local_1f0);
              LOCK();
              piVar1 = (int *)((longlong)plVar28 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar28 + 8))(plVar28,1);
              }
            }
          }
          plVar28 = local_208;
          if (local_208 != (longlong *)0x0) {
            LOCK();
            plVar24 = local_208 + 1;
            lVar13 = *plVar24;
            *(int *)plVar24 = (int)*plVar24 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*local_208)(local_208);
              LOCK();
              piVar1 = (int *)((longlong)plVar28 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar28 + 8))(plVar28,1);
              }
            }
          }
          plVar28 = local_220;
          if (local_220 != (longlong *)0x0) {
            LOCK();
            plVar24 = local_220 + 1;
            lVar13 = *plVar24;
            *(int *)plVar24 = (int)*plVar24 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*local_220)(local_220);
              LOCK();
              piVar1 = (int *)((longlong)plVar28 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar28 + 8))(plVar28,1);
              }
            }
          }
        }
        FText::operator=(local_188,plVar19);
        uVar25 = uVar25 + 0x60;
        uVar12 = (ulonglong)(iVar11 + 1U);
        param_1 = local_390;
      } while ((int)(iVar11 + 1U) < (int)local_3a0);
    }
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_180 + 1;
      lVar13 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar1 = (int *)((longlong)local_180 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*local_180 + 8))(local_180,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x910) != 0) {
    local_388 = (longlong *)0xffffffff;
    if (*(longlong *)(param_1 + 0xa38) != 0) {
      plVar28 = local_3a8 + (longlong)(int)local_3a0 * 0xc;
      for (plVar19 = local_3a8; plVar19 != plVar28; plVar19 = plVar19 + 0xc) {
        if ((plVar19[10] == 0) ||
           (cVar8 = (**(code **)**(undefined8 **)(param_1 + 0xa38))(), cVar8 == '\0')) {
          bVar29 = false;
        }
        else {
          bVar29 = true;
        }
        if (bVar29) {
          lVar13 = ((longlong)plVar19 - (longlong)local_3a8) / 6 +
                   ((longlong)plVar19 - (longlong)local_3a8 >> 0x3f);
          local_388 = (longlong *)((lVar13 >> 4) - (lVar13 >> 0x3f));
          goto LAB_140fced5c;
        }
      }
      local_388 = (longlong *)0xffffffff;
    }
LAB_140fced5c:
    FUN_1407665e0(*(longlong *)(param_1 + 0x910) + 0x180,param_1);
    FUN_1407665e0(*(longlong *)(param_1 + 0x910) + 0x1a8,param_1);
    FUN_142ecffe0(*(undefined8 *)(param_1 + 0x910));
    uStack_310 = 0;
    local_318 = FUN_140fb8500;
    lStack_120 = (ulonglong)uStack_30c << 0x20;
    local_128 = FUN_140fb8500;
    pwVar20 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnFriendSelected",L"::");
    pwVar27 = (wchar_t *)0x0;
    while (pwVar6 = pwVar20, pwVar6 != (wchar_t *)0x0) {
      pwVar20 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
      pwVar27 = pwVar6;
    }
    FName::FName(&local_238,pwVar27 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x910) + 0x180,param_1,&local_128,local_238);
    uStack_310 = 0;
    local_318 = FUN_140fb84a0;
    lStack_110 = (ulonglong)uStack_30c << 0x20;
    local_118 = FUN_140fb84a0;
    pwVar20 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnFriendClicked",L"::");
    pwVar27 = (wchar_t *)0x0;
    while (pwVar6 = pwVar20, pwVar6 != (wchar_t *)0x0) {
      pwVar20 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
      pwVar27 = pwVar6;
    }
    FName::FName(&local_230,pwVar27 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x910) + 0x1a8,param_1,&local_118,local_230);
    *(undefined1 *)(*(longlong *)(param_1 + 0x910) + 0x209) = 1;
    if (local_380 == 0) {
      iVar11 = 0x14;
    }
    else {
      uVar16 = FUN_140bb7630(local_380);
      iVar11 = FUN_140d83600(uVar16);
    }
    iVar11 = iVar11 * 4;
    plVar19 = local_3a8 + (longlong)(int)local_3a0 * 0xc;
    local_398 = plVar19;
    if (local_3a8 != plVar19) {
      plVar28 = local_3a8 + 0xb;
      do {
        iVar11 = iVar11 + -1;
        param_1 = local_390;
        if (iVar11 < 1) break;
        pwVar27 = L"FriendsListItem";
        local_330 = 0;
        if (*(char *)((longlong)plVar28 + -0xc) != '\0') {
          pwVar27 = L"FriendListItemHeader";
        }
        local_338 = 0;
        if (*pwVar27 != L'\0') {
          lVar13 = -1;
          do {
            lVar13 = lVar13 + 1;
          } while (pwVar27[lVar13] != L'\0');
          uVar23 = (int)lVar13 + 1;
          local_330 = (ulonglong)uVar23;
          if (0 < (int)uVar23) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_338,0);
          }
          FGenericPlatformString::Memcpy(local_338,pwVar27,(longlong)(int)uVar23 * 2);
        }
        uVar16 = *(undefined8 *)(local_390 + 0x910);
        local_318 = (code *)FUN_141369c80();
        lVar13 = FUN_142ebcee0(uVar16,&local_338,local_318,1);
        if (lVar13 != 0) {
          lVar15 = FUN_141369c80();
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
            bVar29 = false;
          }
          else {
            bVar29 = true;
          }
          if (bVar29) {
            plVar24 = (longlong *)*plVar28;
            lVar15 = plVar28[-1];
            if (plVar24 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
              UNLOCK();
            }
            if ((lVar15 == 0) || (local_380 == 0)) {
              uVar9 = 7;
              uVar23 = local_3b4;
            }
            else {
              uVar23 = local_3b4 | 2;
              if (plVar24 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
                UNLOCK();
              }
              local_3b4 = uVar23;
              local_248 = lVar15;
              local_240 = plVar24;
              uVar9 = FUN_140bbd2a0(local_380,&local_248);
            }
            plVar19 = local_240;
            if (((uVar23 & 2) != 0) &&
               (local_3b4 = uVar23 & 0xfffffffd, local_240 != (longlong *)0x0)) {
              LOCK();
              plVar2 = local_240 + 1;
              lVar15 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar15 == 1) {
                (**(code **)*local_240)(local_240);
                LOCK();
                piVar1 = (int *)((longlong)plVar19 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar19 + 8))(plVar19,1);
                }
              }
            }
            plVar19 = *(longlong **)(lVar13 + 0x310);
            if (plVar19 != (longlong *)0x0) {
              (**(code **)(*plVar19 + 0x2b0))(plVar19,plVar28 + -0xb,1,0);
            }
            plVar19 = *(longlong **)(lVar13 + 0x330);
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              iVar10 = (int)plVar19[1];
              bVar29 = iVar10 == 0;
              if (bVar29) {
                *(int *)(plVar19 + 1) = 0;
                iVar10 = 0;
              }
              UNLOCK();
              while (!bVar29) {
                LOCK();
                bVar29 = iVar10 == (int)plVar19[1];
                if (bVar29) {
                  *(int *)(plVar19 + 1) = iVar10 + 1;
                }
                UNLOCK();
                if (bVar29) {
                  lVar15 = *(longlong *)(lVar13 + 0x328);
                  if (lVar15 != 0) {
                    uVar16 = FUN_1411f1490(local_108,uVar9);
                    FUN_14203e230(lVar15,uVar16);
                    if (local_108[0] != 0) {
                      FMemory::Free();
                    }
                  }
                  LOCK();
                  plVar2 = plVar19 + 1;
                  lVar15 = *plVar2;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)lVar15 == 1) {
                    (**(code **)*plVar19)(plVar19);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar19 + 0xc);
                    iVar10 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar10 == 1) {
                      (**(code **)(*plVar19 + 8))(plVar19,1);
                    }
                  }
                  break;
                }
                LOCK();
                iVar10 = (int)plVar19[1];
                bVar29 = iVar10 == 0;
                if (bVar29) {
                  *(int *)(plVar19 + 1) = 0;
                  iVar10 = 0;
                }
                UNLOCK();
              }
            }
            FUN_142ed3af0(lVar13,plVar28 + -0xb,0);
            plVar19 = *(longlong **)(lVar13 + 0x318);
            if (plVar19 != (longlong *)0x0) {
              (**(code **)(*plVar19 + 0x2b0))(plVar19,plVar28 + -8,1,0);
            }
            puVar5 = (undefined4 *)plVar28[-1];
            plVar19 = (longlong *)*plVar28;
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
              UNLOCK();
            }
            local_2e8._0_4_ = SUB84(puVar5,0);
            local_2e8._4_4_ = (undefined4)((ulonglong)puVar5 >> 0x20);
            uStack_2e0._0_4_ = SUB84(plVar19,0);
            uStack_2e0._4_4_ = (undefined4)((ulonglong)plVar19 >> 0x20);
            ppuVar3 = (undefined4 **)(lVar13 + 0x348);
            if (plVar19 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
              UNLOCK();
            }
            local_2f8 = puVar5;
            plStack_2f0 = plVar19;
            if (&local_2f8 != ppuVar3) {
              local_2f8 = *ppuVar3;
              plStack_2f0 = *(longlong **)(lVar13 + 0x350);
              *(undefined4 *)ppuVar3 = (undefined4)local_2e8;
              *(undefined4 *)(lVar13 + 0x34c) = local_2e8._4_4_;
              *(undefined4 *)(lVar13 + 0x350) = (undefined4)uStack_2e0;
              *(undefined4 *)(lVar13 + 0x354) = uStack_2e0._4_4_;
              local_58 = (undefined4)local_2e8;
              uStack_54 = local_2e8._4_4_;
              uStack_50 = (undefined4)uStack_2e0;
              uStack_4c = uStack_2e0._4_4_;
            }
            plVar2 = plStack_2f0;
            local_2e8 = puVar5;
            uStack_2e0 = plVar19;
            if (plStack_2f0 != (longlong *)0x0) {
              LOCK();
              plVar19 = plStack_2f0 + 1;
              lVar15 = *plVar19;
              *(int *)plVar19 = (int)*plVar19 + -1;
              UNLOCK();
              if ((int)lVar15 == 1) {
                (**(code **)*plStack_2f0)(plStack_2f0);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plStack_2f0 + 8))(plStack_2f0,1);
                }
              }
            }
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_2e8);
            local_328 = (void *)0x0;
            local_320 = *(int *)(local_390 + 0xd40);
            lVar15 = (longlong)local_320;
            pvVar4 = *(void **)(local_390 + 0xd38);
            if (local_320 == 0) {
              local_31c = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_328,local_320,0);
              _guard_xfg_dispatch_icall_nop(local_328,pvVar4,lVar15 * 2);
            }
            FString::operator=(lVar13 + 0x338,&local_328);
            if (local_328 != (void *)0x0) {
              FMemory::Free();
            }
            (**(code **)(*(longlong *)(lVar13 + 0x170) + 0x38))
                      ((longlong *)(lVar13 + 0x170),*(char *)((longlong)plVar28 + -0xc) == '\0');
            *(undefined1 *)(lVar13 + 0x30c) = *(undefined1 *)((longlong)plVar28 + -0xb);
            *(int *)(lVar13 + 0x308) = (int)plVar28[-2];
            FUN_140fe0110(lVar13);
            plVar19 = local_398;
            if (plVar24 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar24 + 1;
              lVar13 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar13 == 1) {
                (**(code **)*plVar24)(plVar24);
                LOCK();
                piVar1 = (int *)((longlong)plVar24 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar19 = local_398;
                if (iVar10 == 1) {
                  (**(code **)(*plVar24 + 8))(plVar24);
                  plVar19 = local_398;
                }
              }
            }
          }
        }
        if (local_338 != 0) {
          FMemory::Free();
        }
        plVar24 = plVar28 + 1;
        plVar28 = plVar28 + 0xc;
        param_1 = local_390;
      } while (plVar24 != plVar19);
    }
    (**(code **)(**(longlong **)(param_1 + 0x910) + 0x300))();
    plVar19 = local_388;
    iVar11 = (int)local_388;
    if ((iVar11 == -1) ||
       (iVar10 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x910)), iVar10 <= iVar11)) {
      (**(code **)(**(longlong **)(param_1 + 0x910) + 0x2c8))(*(longlong **)(param_1 + 0x910),1,0);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x910) + 0x2b8))
                (*(longlong **)(param_1 + 0x910),(ulonglong)plVar19 & 0xffffffff,1,0);
    }
    FUN_140fd5370(param_1);
    FUN_140fd33e0(param_1);
  }
  FUN_140f9fed0(&local_3a8);
  return;
code_r0x000140fce999:
  plVar19 = plVar19 + 2;
  if (plVar19 == plVar24) goto code_r0x000140fce9a2;
  goto LAB_140fce970;
code_r0x000140fce9a2:
  uVar25 = local_370 & 0xffffffff;
LAB_140fce9ab:
  uVar23 = (uint)uVar25;
  plVar19 = local_378;
  while (uVar23 != 0) {
    if (*plVar19 != 0) {
      FMemory::Free();
    }
    plVar19 = plVar19 + 2;
    uVar23 = (int)uVar25 - 1;
    uVar25 = (ulonglong)uVar23;
  }
  plVar19 = local_398;
  if (local_378 != (longlong *)0x0) {
    FMemory::Free(local_378);
    plVar19 = local_398;
  }
LAB_140fce9df:
  plVar28 = plVar28 + 1;
  if (plVar28 == plVar19) goto LAB_140fce4c7;
  goto LAB_140fce8d4;
}



// FUNCTION 140fcf410 FUN_140fcf410 body=211 status=ok
// SIG undefined FUN_140fcf410(void)

void FUN_140fcf410(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_140fd44b0();
    uVar5 = FUN_140fb1360(local_20,param_1 + 0x200);
    uVar6 = FUN_140fb1360(local_38,param_1 + 0x1e8);
    FUN_140fd9340(*(undefined8 *)(param_1 + 0x1c8),uVar6,uVar5);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)local_18 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140fcf4f0 FUN_140fcf4f0 body=263 status=ok
// SIG undefined FUN_140fcf4f0(void)

void FUN_140fcf4f0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_18 [16];
  
  if (*(char *)(param_1 + 0x731) == *(char *)(param_1 + 0x730)) {
    if (*(char *)(param_1 + 0x731) != '\0') {
      if (*(int *)(param_1 + 0x72c) != *(int *)(param_1 + 0x728)) goto LAB_140fcf54d;
      if (*(int *)(param_1 + 0x738) != *(int *)(param_1 + 0x734)) {
        cVar3 = FUN_140fa0fe0(param_1 + 0x740,param_1 + 0x7b0);
        if (cVar3 == '\0') goto LAB_140fcf54d;
      }
    }
    bVar2 = false;
  }
  else {
LAB_140fcf54d:
    bVar2 = true;
  }
  lVar6 = *(longlong *)(param_1 + 0x720);
  if (lVar6 != 0) {
    if ((*(char *)(param_1 + 0x732) == '\0') || (!bVar2)) {
      lVar4 = FUN_142eb65a0(param_1);
      if (lVar4 == lVar6) {
        uVar5 = TScriptInterface<IBlendableInterface>::
                TScriptInterface<IBlendableInterface><UMaterialInterface>
                          (local_18,*(undefined8 *)(param_1 + 0x718));
        FUN_142ed36d0(param_1,uVar5,0);
        lVar6 = *(longlong *)(param_1 + 0x720);
      }
    }
    if ((*(char *)(param_1 + 0x732) == '\0') || (!bVar2)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    (**(code **)(*(longlong *)(lVar6 + 0x170) + 0x38))((longlong *)(lVar6 + 0x170),uVar5);
  }
  plVar1 = *(longlong **)(param_1 + 0x6c0);
  if (plVar1 != (longlong *)0x0) {
    if ((bVar2) || (*(char *)(param_1 + 0x752) != '\0')) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    (**(code **)(*plVar1 + 0x278))(plVar1,uVar5);
  }
  return;
}



// FUNCTION 140fcf600 FUN_140fcf600 body=4574 status=ok
// SIG undefined FUN_140fcf600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fcf600(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  wchar_t *pwVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  bool bVar20;
  undefined1 auStack_548 [32];
  undefined1 *local_528;
  ulonglong local_518;
  undefined4 *local_508;
  ulonglong *puStack_500;
  longlong local_4f8;
  longlong local_4f0;
  longlong local_4e8;
  ulonglong local_4e0;
  longlong local_4d8;
  undefined8 local_4d0;
  longlong local_4c8;
  undefined8 local_4c0;
  longlong local_4b8;
  undefined8 local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  undefined1 local_498 [8];
  longlong *local_490;
  undefined8 *local_480;
  undefined8 local_478;
  longlong local_470;
  undefined8 local_468;
  longlong local_460;
  undefined8 local_458;
  longlong local_450;
  undefined1 local_448 [8];
  longlong *local_440;
  undefined1 local_430 [8];
  longlong *local_428;
  undefined1 local_418 [8];
  longlong *local_410;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3e8 [16];
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined1 local_3c8 [16];
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined1 local_3a8 [16];
  undefined1 local_398 [8];
  longlong *local_390;
  undefined1 local_380 [8];
  longlong *local_378;
  undefined1 local_368 [8];
  longlong *local_360;
  undefined1 local_350 [8];
  longlong *local_348;
  undefined1 local_338 [8];
  longlong *local_330;
  undefined1 local_320 [8];
  longlong *local_318;
  undefined1 local_308 [8];
  longlong *local_300;
  undefined1 local_2f0 [8];
  longlong *local_2e8;
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  undefined1 local_2c0 [8];
  longlong *local_2b8;
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  undefined1 local_290 [8];
  longlong *local_288;
  undefined1 local_278 [8];
  longlong *local_270;
  undefined1 local_260 [8];
  longlong *local_258;
  undefined1 local_248 [8];
  longlong *local_240;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [24];
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined4 local_158 [2];
  longlong local_150;
  longlong *local_140;
  char local_130;
  ulonglong local_128 [2];
  undefined1 local_118 [24];
  undefined1 local_100;
  undefined4 local_f8;
  undefined1 local_e8 [24];
  undefined1 local_d0;
  ulonglong local_c8 [2];
  undefined1 local_b8 [8];
  longlong local_b0 [2];
  undefined1 local_a0;
  undefined4 local_98;
  undefined1 local_88 [24];
  undefined1 local_70;
  undefined4 local_68;
  undefined1 local_58 [24];
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_548;
  iVar19 = *(int *)(param_1 + 0x810);
  local_518 = local_518 & 0xffffffff00000000;
  if ((iVar19 < 0) || (*(int *)(param_1 + 0x820) <= iVar19)) {
    bVar20 = false;
  }
  else {
    bVar20 = true;
  }
  if (bVar20) {
    plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x818) + (longlong)iVar19 * 8);
  }
  else {
    plVar14 = (longlong *)0x0;
  }
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_338,
             L"<font color=\'#02E779\'>This will start {0}. All players must own this to complete this mission.</font><br><br>{1}"
             ,L"GFxMissionDeliveryMenu",L"StartDLCText");
  if (plVar14 != (longlong *)0x0) {
    plVar7 = (longlong *)FUN_142f71d80();
    plVar13 = plVar14;
    do {
      if (plVar13 == plVar7) {
        plVar7 = (longlong *)FUN_142f71d80();
        plVar13 = plVar14;
        goto LAB_140fcf760;
      }
      plVar13 = (longlong *)plVar13[6];
    } while (plVar13 != (longlong *)0x0);
  }
  lVar18 = 0;
  goto LAB_140fcf6b4;
  while (plVar13 = (longlong *)plVar13[6], plVar13 != (longlong *)0x0) {
LAB_140fcf760:
    if (plVar13 == plVar7) goto LAB_140fcf770;
  }
  plVar14 = (longlong *)0x0;
LAB_140fcf770:
  lVar18 = plVar14[0x1f];
  if (lVar18 == 0) {
    (**(code **)(*plVar14 + 0x368))(plVar14);
    lVar18 = plVar14[0x1f];
  }
LAB_140fcf6b4:
  local_3f8 = (ulonglong *)CONCAT44(local_3f8._4_4_,(undefined4)local_3f8);
  uStack_3f0 = (ulonglong *)CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0);
  local_3d8 = (ulonglong *)CONCAT44(local_3d8._4_4_,(undefined4)local_3d8);
  uStack_3d0 = (ulonglong *)CONCAT44(uStack_3d0._4_4_,(undefined4)uStack_3d0);
  local_3b8 = (ulonglong *)CONCAT44(local_3b8._4_4_,(undefined4)local_3b8);
  uStack_3b0 = (ulonglong *)CONCAT44(uStack_3b0._4_4_,(undefined4)uStack_3b0);
  if ((*(longlong *)(param_1 + 0x828) == 0) ||
     (local_3f8 = (ulonglong *)CONCAT44(local_3f8._4_4_,(undefined4)local_3f8),
     uStack_3f0 = (ulonglong *)CONCAT44(uStack_3f0._4_4_,(undefined4)uStack_3f0),
     local_3d8 = (ulonglong *)CONCAT44(local_3d8._4_4_,(undefined4)local_3d8),
     uStack_3d0 = (ulonglong *)CONCAT44(uStack_3d0._4_4_,(undefined4)uStack_3d0),
     local_3b8 = (ulonglong *)CONCAT44(local_3b8._4_4_,(undefined4)local_3b8),
     uStack_3b0 = (ulonglong *)CONCAT44(uStack_3b0._4_4_,(undefined4)uStack_3b0), lVar18 == 0))
  goto LAB_140fd077f;
  FText::FText(local_498);
  if (*(longlong *)(param_1 + 0x798) != 0) {
    local_400 = FUN_142f71e20();
    lVar8 = AGameStateBase::OnRep_GameModeClass(*(undefined8 *)(param_1 + 0x798),local_400);
    if (lVar8 != 0) {
      lVar9 = FUN_142f71e20();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar20 = false;
      }
      else {
        bVar20 = true;
      }
      if (bVar20) {
        lVar17 = *(longlong *)(lVar8 + 0x300);
        lVar9 = lVar17 + (longlong)*(int *)(lVar8 + 0x308) * 0x48;
        for (; lVar17 != lVar9; lVar17 = lVar17 + 0x48) {
          cVar5 = FUN_142f638e0(lVar17,lVar8);
          if ((cVar5 != '\0') && (lVar10 = FUN_142f5c080(lVar18,lVar17 + 0x30), lVar10 != 0)) {
            uVar11 = FUN_142dea370(lVar10 + 0xe8,local_320);
            FText::operator=(local_498,uVar11);
            if (local_318 != (longlong *)0x0) {
              LOCK();
              plVar14 = local_318 + 1;
              lVar18 = *plVar14;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)lVar18 == 1) {
                (**(code **)*local_318)(local_318);
                LOCK();
                piVar1 = (int *)((longlong)local_318 + 0xc);
                iVar19 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar19 == 1) {
                  (**(code **)(*local_318 + 8))(local_318,1);
                }
              }
            }
            break;
          }
        }
      }
    }
  }
  plVar14 = *(longlong **)(param_1 + 0x700);
  if ((plVar14 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x728) != 0)) {
    if (*(int *)(param_1 + 0x820) < 2) {
      (**(code **)(*plVar14 + 0x278))(plVar14,0);
    }
    else {
      FUN_142088ee0(*(longlong *)(param_1 + 0x728));
      (**(code **)(**(longlong **)(param_1 + 0x700) + 0x278))(*(longlong **)(param_1 + 0x700),1);
      iVar19 = 0;
      if (0 < *(int *)(param_1 + 0x738)) {
        lVar18 = 0;
        do {
          lVar8 = *(longlong *)(lVar18 + *(longlong *)(param_1 + 0x730));
          if (lVar8 != 0) {
            pwVar15 = L"empty";
            if (iVar19 == *(int *)(param_1 + 0x810)) {
              pwVar15 = L"filled";
            }
            local_4e8 = 0;
            local_4e0 = 0;
            if (*pwVar15 != L'\0') {
              lVar9 = -1;
              do {
                lVar9 = lVar9 + 1;
              } while (pwVar15[lVar9] != L'\0');
              uVar16 = (int)lVar9 + 1;
              local_4e0 = (ulonglong)uVar16;
              if (0 < (int)uVar16) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4e8,0);
              }
              FGenericPlatformString::Memcpy(local_4e8,pwVar15,(longlong)(int)uVar16 * 2);
            }
            FUN_142088cf0(lVar8);
            if (local_4e8 != 0) {
              FMemory::Free();
            }
          }
          iVar19 = iVar19 + 1;
          lVar18 = lVar18 + 8;
        } while (iVar19 < *(int *)(param_1 + 0x738));
      }
    }
  }
  plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x818) + (longlong)*(int *)(param_1 + 0x810) * 8)
  ;
  lVar18 = FUN_142f5c820(*(undefined8 *)(param_1 + 0x828),plVar14);
  if (lVar18 == 0) {
LAB_140fcf9b7:
    lVar18 = 0;
  }
  else {
    lVar8 = FUN_141437870();
    if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if (!bVar20) goto LAB_140fcf9b7;
  }
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x828) + 0x780))
                    (*(longlong **)(param_1 + 0x828),plVar14);
  local_518 = CONCAT44(local_518._4_4_,uVar6);
  if (lVar18 != 0) {
    *(longlong **)(param_1 + 0x790) = plVar14;
    cVar5 = FText::IsEmptyOrWhitespace(local_498);
    if (cVar5 != '\0') {
      uVar11 = FUN_142dea370(lVar18 + 0xa0,local_308);
      FText::operator=(local_498,uVar11);
      if (local_300 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_300 + 1;
        lVar8 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_300)(local_300);
          LOCK();
          piVar1 = (int *)((longlong)local_300 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*local_300 + 8))(local_300,1);
          }
        }
      }
    }
    cVar5 = FText::IsEmptyOrWhitespace(local_498);
    if (cVar5 != '\0') {
      local_4d8 = 0;
      local_4d0 = 0x25;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4d8,0);
      FGenericPlatformString::Memcpy(local_4d8,L"Error - PreAcceptanceSummary not set",0x4a);
      uVar11 = FText::FromString(local_2f0,&local_4d8);
      FText::operator=(local_498,uVar11);
      if (local_2e8 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_2e8 + 1;
        lVar8 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_2e8)(local_2e8);
          LOCK();
          piVar1 = (int *)((longlong)local_2e8 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*local_2e8 + 8))(local_2e8,1);
          }
        }
      }
      if (local_4d8 != 0) {
        FMemory::Free();
      }
    }
    if (*(char *)(lVar18 + 0x191) != '\0') {
      lVar8 = FUN_142f5a280(lVar18);
      if (lVar8 != 0) {
        lVar9 = FText::FText(local_1d0,local_498);
        local_4f0 = lVar9;
        lVar8 = FText::FText(local_1b8,lVar8 + 0x48);
        local_4f8 = lVar8;
        puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_200,local_338);
        local_128[0]._0_4_ = 4;
        local_480 = puVar12;
        FText::FText(local_118,lVar8);
        local_100 = 1;
        local_f8 = 4;
        FText::FText(local_e8,lVar9);
        local_508 = (undefined4 *)local_128;
        local_d0 = 1;
        puStack_500 = local_c8;
        local_478 = *puVar12;
        local_470 = puVar12[1];
        if (local_470 != 0) {
          LOCK();
          *(int *)(local_470 + 8) = *(int *)(local_470 + 8) + 1;
          UNLOCK();
        }
        local_3f8 = (ulonglong *)local_508;
        uStack_3f0 = puStack_500;
        uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_3e8,&local_3f8);
        uVar11 = FText::Format(local_2d8,&local_478,uVar11);
        FText::FText(local_380,uVar11);
        if (local_2d0 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_2d0 + 1;
          lVar8 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_2d0)(local_2d0);
            LOCK();
            piVar1 = (int *)((longlong)local_2d0 + 0xc);
            iVar19 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*local_2d0 + 8))(local_2d0,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_3e8);
        lVar8 = 2;
        plVar13 = local_b0;
        do {
          lVar8 = lVar8 + -1;
          if ((char)plVar13[-4] != '\0') {
            *(undefined1 *)(plVar13 + -4) = 0;
            plVar7 = (longlong *)plVar13[-6];
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar7 + 1;
              lVar9 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                iVar19 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar19 == 1) {
                  (**(code **)(*plVar7 + 8))(plVar7,1);
                }
              }
            }
          }
          plVar13 = plVar13 + -6;
        } while (lVar8 != 0);
        plVar13 = (longlong *)local_480[1];
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar13 + 1;
          lVar8 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar19 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
        plVar13 = *(longlong **)(local_4f8 + 8);
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar13 + 1;
          lVar8 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar19 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
        plVar13 = *(longlong **)(local_4f0 + 8);
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar13 + 1;
          lVar8 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar19 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
        FText::operator=(local_498,local_380);
        if (local_378 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_378 + 1;
          lVar8 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_378)(local_378);
            LOCK();
            piVar1 = (int *)((longlong)local_378 + 0xc);
            iVar19 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*local_378 + 8))(local_378,1);
            }
          }
        }
      }
    }
    FText::operator=(param_1 + 0x7a8,local_498);
    cVar5 = FText::IsEmptyOrWhitespace(lVar18 + 0x38);
    lVar8 = 3;
    bVar20 = cVar5 == '\0';
    if (bVar20) {
      uVar11 = FUN_142dea370(lVar18 + 0x38,local_2c0);
    }
    else {
      local_4c0 = 0x19;
      local_4c8 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4c8,0);
      FGenericPlatformString::Memcpy(local_4c8,L"Error - NO MISSION TITLE",0x32);
      uVar11 = FText::FromString(local_2a8,&local_4c8);
    }
    FText::operator=(param_1 + 0x7c0,uVar11);
    if ((bVar20) && (local_2b8 != (longlong *)0x0)) {
      LOCK();
      plVar13 = local_2b8 + 1;
      lVar18 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_2b8)(local_2b8);
        LOCK();
        piVar1 = (int *)((longlong)local_2b8 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*local_2b8 + 8))(local_2b8,1);
        }
      }
    }
    if ((!bVar20) && (local_2a0 != (longlong *)0x0)) {
      LOCK();
      plVar13 = local_2a0 + 1;
      lVar18 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_2a0)(local_2a0);
        LOCK();
        piVar1 = (int *)((longlong)local_2a0 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*local_2a0 + 8))(local_2a0,1);
        }
      }
    }
    if ((!bVar20) && (local_4c8 != 0)) {
      FMemory::Free();
    }
    lVar18 = FUN_142f5ef60(*(undefined8 *)(param_1 + 0x828),plVar14);
    if (lVar18 == 0) {
LAB_140fcff0f:
      local_4b8 = 0;
      local_4b0 = 0x1c;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4b8,0);
      FGenericPlatformString::Memcpy(local_4b8,L"Error - NO MISSION LOCATION",0x38);
      uVar11 = FText::FromString(local_290,&local_4b8);
      bVar4 = false;
      bVar3 = true;
      bVar20 = true;
    }
    else {
      cVar5 = FText::IsEmptyOrWhitespace(lVar18 + 0x98);
      if (cVar5 != '\0') goto LAB_140fcff0f;
      uVar11 = FText::FText(local_278,lVar18 + 0x98);
      bVar4 = true;
      bVar3 = false;
      bVar20 = false;
    }
    FText::operator=(param_1 + 0x7d8,uVar11);
    if ((bVar20) && (local_288 != (longlong *)0x0)) {
      LOCK();
      plVar13 = local_288 + 1;
      lVar18 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_288)(local_288);
        LOCK();
        piVar1 = (int *)((longlong)local_288 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*local_288 + 8))(local_288,1);
        }
      }
    }
    if ((bVar3) && (local_4b8 != 0)) {
      FMemory::Free();
    }
    if ((bVar4) && (local_270 != (longlong *)0x0)) {
      LOCK();
      plVar13 = local_270 + 1;
      lVar18 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_270)(local_270);
        LOCK();
        piVar1 = (int *)((longlong)local_270 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*local_270 + 8))(local_270,1);
        }
      }
    }
    FText::FText(local_448);
    FText::FText(local_350);
    FText::FText(local_418);
    iVar19 = (int)local_518;
    lVar18 = (longlong)(int)local_518;
    local_528 = local_418;
    FUN_140fb0610(param_1,local_518 & 0xffffffff,local_448,local_350);
    *(int *)(param_1 + 0x7f0) = iVar19;
    local_4a8 = 0;
    local_4a0 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4a8,0);
    FGenericPlatformString::Memcpy(local_4a8,L"LV XX",0xc);
    FText::FromString(local_430,&local_4a8);
    if (local_4a8 != 0) {
      FMemory::Free();
    }
    if (0 < iVar19) {
      uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_248,L"Lv. {0}",L"GFxMissionDeliveryMenu",L"Mission Level");
      puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_1f0,uVar11);
      local_158[0] = 0;
      local_508 = local_158;
      local_130 = '\0';
      puStack_500 = local_128;
      local_468 = *puVar12;
      local_460 = puVar12[1];
      if (local_460 != 0) {
        LOCK();
        *(int *)(local_460 + 8) = *(int *)(local_460 + 8) + 1;
        UNLOCK();
      }
      local_150 = lVar18;
      local_3d8 = (ulonglong *)local_508;
      uStack_3d0 = puStack_500;
      uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_3c8,&local_3d8);
      uVar11 = FText::Format(local_260,&local_468,uVar11);
      FText::FText(local_398,uVar11);
      if (local_258 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_258 + 1;
        lVar18 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*local_258)(local_258);
          LOCK();
          piVar1 = (int *)((longlong)local_258 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*local_258 + 8))(local_258,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_3c8);
      if ((local_130 != '\0') && (local_130 = '\0', local_140 != (longlong *)0x0)) {
        LOCK();
        plVar13 = local_140 + 1;
        lVar18 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar1 = (int *)((longlong)local_140 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*local_140 + 8))(local_140,1);
          }
        }
      }
      plVar13 = (longlong *)puVar12[1];
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar13 + 1;
        lVar18 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      FText::operator=(local_430,local_398);
      if (local_390 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_390 + 1;
        lVar18 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*local_390)(local_390);
          LOCK();
          piVar1 = (int *)((longlong)local_390 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*local_390 + 8))(local_390,1);
          }
        }
      }
      if (local_240 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_240 + 1;
        lVar18 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*local_240)(local_240);
          LOCK();
          piVar1 = (int *)((longlong)local_240 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*local_240 + 8))(local_240,1);
          }
        }
      }
    }
    local_518 = FText::FText(local_1a0,local_418);
    lVar18 = FText::FText(local_188,local_430);
    local_4f8 = lVar18;
    lVar9 = FText::FText(local_170,local_448);
    local_4f0 = lVar9;
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_218,L"{0}{1}{2}",L"GFxMissionDeliveryMenu",
                        L"Mission Level Format String");
    puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_1e0,uVar11);
    local_c8[0]._0_4_ = 4;
    FText::FText(local_b8,lVar9);
    local_a0 = 1;
    local_98 = 4;
    FText::FText(local_88,lVar18);
    local_70 = 1;
    local_68 = 4;
    FText::FText(local_58,local_518);
    local_508 = (undefined4 *)local_c8;
    local_40 = 1;
    puStack_500 = local_38;
    local_458 = *puVar12;
    local_450 = puVar12[1];
    if (local_450 != 0) {
      LOCK();
      *(int *)(local_450 + 8) = *(int *)(local_450 + 8) + 1;
      UNLOCK();
    }
    local_3b8 = (ulonglong *)local_508;
    uStack_3b0 = puStack_500;
    uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_3a8,&local_3b8);
    uVar11 = FText::Format(local_230,&local_458,uVar11);
    FText::FText(local_368,uVar11);
    if (local_228 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_228 + 1;
      lVar18 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_228)(local_228);
        LOCK();
        piVar1 = (int *)((longlong)local_228 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*local_228 + 8))(local_228,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_3a8);
    plVar13 = (longlong *)&stack0xffffffffffffffe0;
    do {
      lVar8 = lVar8 + -1;
      if ((char)plVar13[-4] != '\0') {
        *(undefined1 *)(plVar13 + -4) = 0;
        plVar7 = (longlong *)plVar13[-6];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar7 + 1;
          lVar18 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar19 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
      }
      plVar13 = plVar13 + -6;
    } while (lVar8 != 0);
    plVar13 = (longlong *)puVar12[1];
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar13 + 1;
      lVar18 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    plVar13 = *(longlong **)(local_4f0 + 8);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar13 + 1;
      lVar18 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    plVar13 = *(longlong **)(local_4f8 + 8);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar13 + 1;
      lVar18 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    plVar13 = *(longlong **)(local_518 + 8);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar13 + 1;
      lVar18 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    FText::operator=(param_1 + 0x7f8,local_368);
    if (local_360 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_360 + 1;
      lVar18 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_360)(local_360);
        LOCK();
        piVar1 = (int *)((longlong)local_360 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*local_360 + 8))(local_360,1);
        }
      }
    }
    if (local_210 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_210 + 1;
      lVar18 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_210)(local_210);
        LOCK();
        piVar1 = (int *)((longlong)local_210 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*local_210 + 8))(local_210,1);
        }
      }
    }
    if (plVar14 != (longlong *)0x0) {
      plVar7 = (longlong *)FUN_142f71d80();
      plVar13 = plVar14;
      do {
        if (plVar13 == plVar7) goto LAB_140fd0611;
        plVar13 = (longlong *)plVar13[6];
      } while (plVar13 != (longlong *)0x0);
    }
    plVar14 = (longlong *)0x0;
LAB_140fd0611:
    lVar18 = plVar14[0x1f];
    if (lVar18 == 0) {
      (**(code **)(*plVar14 + 0x368))(plVar14);
      lVar18 = plVar14[0x1f];
    }
    uVar6 = FUN_1409ac010(lVar18);
    uVar6 = FUN_140fb1d50(param_1,uVar6);
    *(undefined4 *)(param_1 + 0x7a4) = uVar6;
    FUN_140fcc6e0(param_1);
    if (local_428 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_428 + 1;
      lVar18 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_428)(local_428);
        LOCK();
        piVar1 = (int *)((longlong)local_428 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*local_428 + 8))(local_428,1);
        }
      }
    }
    if (local_410 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_410 + 1;
      lVar18 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_410)(local_410);
        LOCK();
        piVar1 = (int *)((longlong)local_410 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*local_410 + 8))(local_410,1);
        }
      }
    }
    if (local_348 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_348 + 1;
      lVar18 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_348)(local_348);
        LOCK();
        piVar1 = (int *)((longlong)local_348 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*local_348 + 8))(local_348,1);
        }
      }
    }
    if (local_440 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_440 + 1;
      lVar18 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_440)(local_440);
        LOCK();
        piVar1 = (int *)((longlong)local_440 + 0xc);
        iVar19 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*local_440 + 8))(local_440,1);
        }
      }
    }
  }
  if (local_490 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_490 + 1;
    lVar18 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_490)(local_490);
      LOCK();
      piVar1 = (int *)((longlong)local_490 + 0xc);
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar19 == 1) {
        (**(code **)(*local_490 + 8))(local_490,1);
      }
    }
  }
LAB_140fd077f:
  if (local_330 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_330 + 1;
    lVar18 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_330)(local_330);
      LOCK();
      piVar1 = (int *)((longlong)local_330 + 0xc);
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar19 == 1) {
        (**(code **)(*local_330 + 8))(local_330,1);
      }
    }
  }
  return;
}



// FUNCTION 140fd07e0 FUN_140fd07e0 body=925 status=ok
// SIG undefined FUN_140fd07e0(void)

void FUN_140fd07e0(longlong param_1)

{
  void *_Src;
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined4 uVar17;
  longlong **local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  
  plVar14 = *(longlong **)(param_1 + 0xa20);
  plVar15 = plVar14 + (longlong)*(int *)(param_1 + 0xa28) * 2;
  local_78 = (longlong *)0x0;
  local_70 = 0;
  for (; plVar14 != plVar15; plVar14 = plVar14 + 2) {
    plVar16 = (longlong *)0x0;
    local_68 = (longlong *)0x0;
    iVar4 = *(int *)(*plVar14 + 0x50);
    _Src = *(void **)(*plVar14 + 0x48);
    local_60._4_4_ = (undefined4)((ulonglong)local_60 >> 0x20);
    local_60._0_4_ = iVar4;
    if (iVar4 == 0) {
      uVar17 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar4,0);
      plVar16 = local_68;
      _guard_xfg_dispatch_icall_nop(local_68,_Src,(longlong)iVar4 * 2);
      uVar17 = local_60._4_4_;
    }
    iVar4 = (int)local_60;
    uVar2 = local_70;
    lVar12 = (longlong)(int)local_70;
    iVar3 = (int)local_70 + 1;
    local_70 = CONCAT44(local_70._4_4_,iVar3);
    if (local_70._4_4_ < iVar3) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_78,uVar2 & 0xffffffff);
    }
    local_68 = (longlong *)0x0;
    plVar6 = local_78 + lVar12 * 2;
    local_60 = 0;
    *plVar6 = (longlong)plVar16;
    *(int *)(plVar6 + 1) = iVar4;
    *(undefined4 *)((longlong)plVar6 + 0xc) = uVar17;
  }
  local_res10 = &local_78;
  if (*(longlong *)(param_1 + 0x8e0) != 0) {
    iVar3 = 0;
    iVar4 = FUN_142eb7440();
    if (0 < iVar4) {
      lVar12 = 0;
      local_res18 = 0;
      do {
        lVar7 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x8e0),iVar3);
        local_res20 = lVar7;
        if (lVar7 != 0) {
          lVar8 = AReplicationGraphDebugActor::GetPrivateStaticClass();
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
            if (*(char *)(lVar7 + 0x308) == '\0') {
              if (*(char *)(param_1 + 0xa50) == '\x02') {
                if ((iVar3 < 0) || (*(int *)(param_1 + 0x9a8) <= iVar3)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (!bVar1) goto LAB_140fd0ae5;
                iVar4 = FUN_140fa9870(&local_res10,
                                      *(undefined8 *)(*(longlong *)(param_1 + 0x9a0) + lVar12));
              }
              else if (*(char *)(param_1 + 0xa50) == '\x03') {
                if ((iVar3 < 0) || (*(int *)(param_1 + 0x9b8) <= iVar3)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                iVar4 = 0;
                if ((bVar1) &&
                   (lVar8 = *(longlong *)(lVar12 + *(longlong *)(param_1 + 0x9b0)),
                   lVar12 = local_res18, lVar8 != 0)) {
                  local_68 = (longlong *)0x0;
                  local_60 = 0;
                  uVar9 = FUN_140e971d0(param_1);
                  FUN_14129bdc0(uVar9,lVar8,&local_68,1,0);
                  plVar14 = local_68 + (int)local_60;
                  for (plVar15 = local_68; plVar15 != plVar14; plVar15 = plVar15 + 1) {
                    iVar13 = 0;
                    if (*plVar15 != 0) {
                      FUN_14129a740(*plVar15,&local_58);
                      plVar16 = *local_res10;
                      plVar6 = plVar16 + (longlong)*(int *)(local_res10 + 1) * 2;
                      iVar13 = 0;
                      for (; plVar16 != plVar6; plVar16 = plVar16 + 2) {
                        puVar11 = &DAT_143f3eda8;
                        if (local_50 != 0) {
                          puVar11 = local_58;
                        }
                        if ((int)plVar16[1] == 0) {
                          puVar10 = &DAT_143f3eda8;
                        }
                        else {
                          puVar10 = (undefined2 *)*plVar16;
                        }
                        iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
                        if (iVar5 == 0) {
                          iVar13 = iVar13 + 1;
                        }
                      }
                      if (local_58 != (undefined2 *)0x0) {
                        FMemory::Free();
                      }
                    }
                    iVar4 = iVar4 + iVar13;
                    lVar7 = local_res20;
                  }
                  lVar12 = local_res18;
                  if (local_68 != (longlong *)0x0) {
                    FMemory::Free(local_68);
                    lVar12 = local_res18;
                  }
                }
              }
              else {
LAB_140fd0ae5:
                iVar4 = 0;
              }
            }
            else {
              iVar4 = *(int *)(param_1 + 0xa30);
            }
            FUN_140fd9000(lVar7,iVar4);
          }
        }
        lVar12 = lVar12 + 8;
        iVar3 = iVar3 + 1;
        local_res18 = lVar12;
        iVar4 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x8e0));
      } while (iVar3 < iVar4);
    }
  }
  plVar14 = local_78;
  for (iVar4 = (int)local_70; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar14 != 0) {
      FMemory::Free();
    }
    plVar14 = plVar14 + 2;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fd0b80 FUN_140fd0b80 body=5509 status=ok
// SIG undefined FUN_140fd0b80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fd0b80(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  undefined8 *puVar23;
  undefined4 *puVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  longlong *plVar28;
  char cVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  char local_res8;
  longlong local_res20;
  longlong local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  longlong local_388;
  undefined8 local_380;
  longlong local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined4 local_364;
  longlong local_360;
  longlong local_358;
  undefined8 local_350;
  longlong local_348;
  undefined8 local_340;
  longlong local_338;
  undefined8 local_330;
  undefined1 local_328 [8];
  longlong *local_320;
  undefined1 local_310;
  undefined8 local_30c;
  undefined1 local_300 [8];
  longlong *local_2f8;
  undefined1 local_2e8;
  undefined8 local_2e4;
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  undefined1 local_2c0;
  undefined8 local_2bc;
  undefined1 local_2b0 [8];
  longlong *local_2a8;
  undefined1 local_298;
  undefined8 local_294;
  undefined4 local_288;
  undefined8 local_284;
  undefined8 local_278;
  longlong local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_25c;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  undefined8 local_218;
  longlong local_210;
  longlong local_208;
  ulonglong local_200;
  undefined8 local_1f8 [2];
  code *local_1e8;
  ulonglong uStack_1e0;
  code *local_1d8;
  ulonglong uStack_1d0;
  code *local_1c8;
  ulonglong uStack_1c0;
  code *local_1b8;
  ulonglong uStack_1b0;
  undefined1 local_1a8 [40];
  undefined1 local_180 [16];
  undefined1 local_170 [40];
  undefined1 local_148 [40];
  undefined1 local_120 [24];
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [32];
  wchar_t *pwVar29;
  
  plVar28 = (longlong *)0x0;
  local_3a8 = 0;
  local_3a0 = 0;
  local_res20 = param_1;
  local_228 = param_1;
  local_210 = param_1;
  FUN_140fd55e0(param_1 + 0x990,0);
  puVar23 = (undefined8 *)(param_1 + 0x9a0);
  *(undefined4 *)(param_1 + 0x9a8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x9ac)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(puVar23,0);
  }
  *(undefined4 *)(param_1 + 0x9b8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x9bc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x9b0,0);
  }
  plVar16 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x58c);
  if (plVar16 == (longlong *)0x0) {
LAB_140fd0c61:
    plVar16 = plVar28;
  }
  else {
    lVar17 = FUN_14145f370();
    if ((*(int *)(plVar16[2] + 0x90) < *(int *)(lVar17 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar16[2] + 0x88) + (longlong)*(int *)(lVar17 + 0x90) * 8) !=
        lVar17 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140fd0c61;
  }
  iVar26 = -1;
  plVar18 = plVar28;
  if (*(char *)(param_1 + 0x898) == '\0') {
    lVar17 = FUN_141083c60(param_1);
    if (lVar17 != 0) {
      plVar18 = (longlong *)FWeakObjectPtr::Get(lVar17 + 0x754);
    }
    local_248 = 0;
    local_250 = 0;
    local_240 = 0;
    local_260 = 0xffffffff;
    local_25c = 0;
    if (plVar18 == (longlong *)0x0) {
      local_250 = 0;
    }
    else {
      uVar19 = FSoftObjectPath::FSoftObjectPath(local_c0,plVar18);
      FSoftObjectPath::operator=(&local_250,uVar19);
      FWeakObjectPtr::operator=(&local_260,plVar18);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_25c = CONCAT44(DAT_1464b56f4,(undefined4)local_25c);
    }
    plVar18 = (longlong *)0x1;
    cVar13 = FSoftObjectPath::operator==(&local_250,param_1 + 0x780);
    if (cVar13 != '\0') goto LAB_140fd0dc6;
    lVar17 = FUN_141083c60(param_1);
    plVar18 = plVar28;
    if (lVar17 != 0) {
      plVar18 = (longlong *)FWeakObjectPtr::Get(lVar17 + 0x780);
    }
    local_270 = 0;
    local_278 = 0;
    local_268 = 0;
    local_288 = 0xffffffff;
    local_284 = 0;
    if (plVar18 == (longlong *)0x0) {
      local_278 = 0;
    }
    else {
      uVar19 = FSoftObjectPath::FSoftObjectPath(local_a8,plVar18);
      FSoftObjectPath::operator=(&local_278,uVar19);
      FWeakObjectPtr::operator=(&local_288,plVar18);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_284 = CONCAT44(DAT_1464b56f4,(undefined4)local_284);
    }
    plVar18 = (longlong *)0x3;
    cVar13 = FSoftObjectPath::operator==(&local_278,param_1 + 0x7a8);
    bVar4 = false;
    if (cVar13 != '\0') goto LAB_140fd0dc6;
  }
  else {
LAB_140fd0dc6:
    bVar4 = true;
  }
  if ((((ulonglong)plVar18 & 2) != 0) &&
     (plVar18 = (longlong *)(ulonglong)((uint)plVar18 & 0xfffffffd), local_270 != 0)) {
    FMemory::Free();
  }
  if ((((ulonglong)plVar18 & 1) != 0) && (local_248 != 0)) {
    FMemory::Free();
  }
  local_res8 = FOutputDevice::CanBeUsedOnAnyThread();
  if ((local_res8 == '\0') && (plVar16 != (longlong *)0x0)) {
    lVar17 = param_1 + 0x770;
    lVar20 = FWeakObjectPtr::Get(lVar17);
    if (lVar20 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0x778)) && (*(longlong *)(param_1 + 0x780) != 0)) {
        lVar20 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar17,lVar20);
        if ((lVar20 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x778) = DAT_1464b56f4;
        }
        lVar20 = FWeakObjectPtr::Get(lVar17);
        if (lVar20 != 0) goto LAB_140fd0ea0;
      }
    }
    else {
LAB_140fd0ea0:
      lVar21 = UMaterialInstanceDynamic::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x90) < *(int *)(lVar21 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar21 + 0x90) * 8) != lVar21 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        plVar18 = (longlong *)FWeakObjectPtr::Get(lVar17);
        if (plVar18 == (longlong *)0x0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(param_1 + 0x778)) && (*(longlong *)(param_1 + 0x780) != 0))
          {
            lVar20 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar17,lVar20);
            if ((lVar20 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(param_1 + 0x778) = DAT_1464b56f4;
            }
            plVar18 = (longlong *)FWeakObjectPtr::Get(lVar17);
            if (plVar18 != (longlong *)0x0) goto LAB_140fd0f4e;
          }
LAB_140fd0f84:
          plVar18 = plVar28;
        }
        else {
LAB_140fd0f4e:
          lVar17 = UMaterialInstanceDynamic::GetPrivateStaticClass();
          if ((*(int *)(plVar18[2] + 0x90) < *(int *)(lVar17 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(plVar18[2] + 0x88) + (longlong)*(int *)(lVar17 + 0x90) * 8) !=
              lVar17 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_140fd0f84;
        }
        plVar18 = (longlong *)FUN_140585cd0(plVar18);
        plVar28 = (longlong *)*plVar18;
        lVar17 = plVar18[1];
        if (plVar28 != plVar28 + (longlong)(int)lVar17 * 0xc) {
          plVar18 = plVar28 + 0xb;
          do {
            lVar20 = *plVar18;
            if (lVar20 != 0) {
              lVar21 = FUN_142f477c0();
              if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x90) < *(int *)(lVar21 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar21 + 0x90) * 8) != lVar21 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) {
                uVar19 = (**(code **)(*plVar16 + 0x148))(plVar16);
                cVar13 = FUN_142f43380(lVar20,uVar19,0);
                if (cVar13 != '\0') {
                  local_res8 = '\x01';
                  break;
                }
              }
            }
            plVar1 = plVar18 + 1;
            plVar18 = plVar18 + 0xc;
          } while (plVar1 != plVar28 + (longlong)(int)lVar17 * 0xc);
        }
      }
    }
  }
  if ((bVar4) || (local_res8 == '\0')) goto LAB_140fd1478;
  lVar20 = FUN_14129f690(param_1);
  lVar17 = param_1 + 0x770;
  lVar21 = FWeakObjectPtr::Get(lVar17);
  if (lVar21 == 0) {
    lVar21 = 0;
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x778)) && (*(longlong *)(param_1 + 0x780) != 0)) {
      lVar21 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar17,lVar21);
      if ((lVar21 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x778) = DAT_1464b56f4;
      }
      lVar21 = FWeakObjectPtr::Get(lVar17);
      if (lVar21 != 0) goto LAB_140fd10c7;
      goto LAB_140fd110d;
    }
  }
  else {
LAB_140fd10c7:
    lVar17 = UMaterialInstanceDynamic::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar21 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x88) + (longlong)*(int *)(lVar17 + 0x90) * 8
         ) != lVar17 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) {
LAB_140fd110d:
      lVar21 = 0;
    }
  }
  lVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_90,L"HOME",L"GFxMapMenu",L"HomeBase");
  uVar19 = FUN_1404b03b0();
  FText::FText(local_328,uVar19);
  local_310 = 0;
  local_30c = 0;
  FText::operator=(local_328,lVar17);
  local_310 = 2;
  plVar28 = *(longlong **)(lVar17 + 8);
  if (plVar28 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar28 + 1;
    lVar17 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plVar28)(plVar28);
      LOCK();
      piVar2 = (int *)((longlong)plVar28 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar28 + 8))(plVar28,1);
      }
    }
  }
  local_3a0 = CONCAT44(local_3a0._4_4_,1);
  FUN_140d979d0(&local_3a8,0);
  lVar17 = local_3a8;
  FText::FText(local_3a8,local_328);
  *(undefined1 *)(lVar17 + 0x18) = local_310;
  *(undefined4 *)(lVar17 + 0x1c) = (undefined4)local_30c;
  *(undefined1 *)(lVar17 + 0x20) = local_30c._4_1_;
  *(undefined1 *)(lVar17 + 0x21) = local_30c._5_1_;
  *(undefined1 *)(lVar17 + 0x22) = local_30c._6_1_;
  *(undefined1 *)(lVar17 + 0x23) = local_30c._7_1_;
  if (local_320 != (longlong *)0x0) {
    LOCK();
    plVar28 = local_320 + 1;
    lVar17 = *plVar28;
    *(int *)plVar28 = (int)*plVar28 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_320)(local_320);
      LOCK();
      piVar2 = (int *)((longlong)local_320 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_320 + 8))(local_320,1);
      }
    }
  }
  lVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_78,L"Sanctuary",L"GFxMapMenu",L"SanctuaryText");
  uVar19 = FUN_1404b03b0();
  FText::FText(local_300,uVar19);
  local_2e8 = 0;
  local_2e4 = 0;
  FText::operator=(local_300,lVar17);
  local_2e8 = 1;
  plVar28 = *(longlong **)(lVar17 + 8);
  if (plVar28 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar28 + 1;
    lVar17 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plVar28)(plVar28);
      LOCK();
      piVar2 = (int *)((longlong)plVar28 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar28 + 8))(plVar28,1);
      }
    }
  }
  uVar25 = local_3a0;
  lVar17 = (longlong)(int)local_3a0;
  iVar14 = (int)local_3a0 + 1;
  local_3a0 = CONCAT44(local_3a0._4_4_,iVar14);
  if (local_3a0._4_4_ < iVar14) {
    FUN_140d979d0(&local_3a8,uVar25 & 0xffffffff);
  }
  lVar17 = local_3a8 + lVar17 * 0x28;
  FText::FText(lVar17,local_300);
  *(undefined1 *)(lVar17 + 0x18) = local_2e8;
  *(undefined4 *)(lVar17 + 0x1c) = (undefined4)local_2e4;
  *(undefined1 *)(lVar17 + 0x20) = local_2e4._4_1_;
  *(undefined1 *)(lVar17 + 0x21) = local_2e4._5_1_;
  *(undefined1 *)(lVar17 + 0x22) = local_2e4._6_1_;
  *(undefined1 *)(lVar17 + 0x23) = local_2e4._7_1_;
  if (local_2f8 != (longlong *)0x0) {
    LOCK();
    plVar28 = local_2f8 + 1;
    lVar17 = *plVar28;
    *(int *)plVar28 = (int)*plVar28 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_2f8)(local_2f8);
      LOCK();
      piVar2 = (int *)((longlong)local_2f8 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_2f8 + 8))(local_2f8,1);
      }
    }
  }
  if (((lVar20 != 0) && (lVar21 != 0)) && (lVar20 == lVar21)) {
    *(undefined1 *)(local_3a8 + 0x21 + (longlong)((int)local_3a0 + -1) * 0x28) = 1;
  }
  uVar19 = FUN_1404b03b0();
  lVar17 = FText::FText(local_60,uVar19);
  uVar19 = FUN_1404b03b0();
  FText::FText(local_2d8,uVar19);
  local_2c0 = 0;
  local_2bc = 0;
  FText::operator=(local_2d8,lVar17);
  local_2c0 = 3;
  plVar28 = *(longlong **)(lVar17 + 8);
  if (plVar28 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar28 + 1;
    lVar17 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*plVar28)(plVar28);
      LOCK();
      piVar2 = (int *)((longlong)plVar28 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar28 + 8))(plVar28,1);
      }
    }
  }
  uVar25 = local_3a0;
  lVar17 = (longlong)(int)local_3a0;
  iVar14 = (int)local_3a0 + 1;
  local_3a0 = CONCAT44(local_3a0._4_4_,iVar14);
  if (local_3a0._4_4_ < iVar14) {
    FUN_140d979d0(&local_3a8,uVar25 & 0xffffffff);
  }
  lVar17 = local_3a8 + lVar17 * 0x28;
  FText::FText(lVar17,local_2d8);
  *(undefined1 *)(lVar17 + 0x18) = local_2c0;
  *(undefined4 *)(lVar17 + 0x1c) = (undefined4)local_2bc;
  *(undefined1 *)(lVar17 + 0x20) = local_2bc._4_1_;
  *(undefined1 *)(lVar17 + 0x21) = local_2bc._5_1_;
  *(undefined1 *)(lVar17 + 0x22) = local_2bc._6_1_;
  *(undefined1 *)(lVar17 + 0x23) = local_2bc._7_1_;
  if (local_2d0 != (longlong *)0x0) {
    LOCK();
    plVar28 = local_2d0 + 1;
    lVar17 = *plVar28;
    *(int *)plVar28 = (int)*plVar28 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_2d0)(local_2d0);
      LOCK();
      piVar2 = (int *)((longlong)local_2d0 + 0xc);
      iVar14 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_2d0 + 8))(local_2d0,1);
      }
    }
  }
LAB_140fd1478:
  pwVar29 = (wchar_t *)0x0;
  local_388 = 0;
  local_380 = 0;
  local_378 = 0;
  local_370 = 0;
  if ((bVar4) || (uVar25 = 4, local_res8 == '\0')) {
    uVar25 = 1;
  }
  cVar13 = *(char *)(param_1 + 0xa50);
  cVar30 = 0;
  local_res8 = 0;
  if (cVar13 == '\x01') {
    lVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_d8,L"FAST TRAVEL STATIONS",L"GFxMapMenu",L"FastTravelStationsCategory"
                       );
    uVar19 = FUN_1404b03b0();
    FText::FText(local_2b0,uVar19);
    local_298 = 0;
    local_294 = 0;
    FText::operator=(local_2b0,lVar17);
    local_298 = 2;
    plVar28 = *(longlong **)(lVar17 + 8);
    if (plVar28 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar28 + 1;
      lVar17 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*plVar28)(plVar28);
        LOCK();
        piVar2 = (int *)((longlong)plVar28 + 0xc);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plVar28 + 8))(plVar28,1);
        }
      }
    }
    uVar12 = local_3a0;
    lVar17 = (longlong)(int)local_3a0;
    iVar14 = (int)local_3a0 + 1;
    local_3a0 = CONCAT44(local_3a0._4_4_,iVar14);
    if (local_3a0._4_4_ < iVar14) {
      FUN_140d979d0(&local_3a8,uVar12 & 0xffffffff);
    }
    lVar17 = local_3a8 + lVar17 * 0x28;
    FText::FText(lVar17,local_2b0);
    *(undefined1 *)(lVar17 + 0x18) = local_298;
    *(undefined4 *)(lVar17 + 0x1c) = (undefined4)local_294;
    *(undefined1 *)(lVar17 + 0x20) = local_294._4_1_;
    *(undefined1 *)(lVar17 + 0x21) = local_294._5_1_;
    *(undefined1 *)(lVar17 + 0x22) = local_294._6_1_;
    *(undefined1 *)(lVar17 + 0x23) = local_294._7_1_;
    if (local_2a8 != (longlong *)0x0) {
      LOCK();
      plVar28 = local_2a8 + 1;
      lVar17 = *plVar28;
      *(int *)plVar28 = (int)*plVar28 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_2a8)(local_2a8);
        LOCK();
        piVar2 = (int *)((longlong)local_2a8 + 0xc);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_2a8 + 8))(local_2a8,1);
        }
      }
    }
    puVar23 = (undefined8 *)(param_1 + 0x990);
    FUN_140faba50(&local_210,puVar23,&local_3a8);
    iVar14 = *(int *)(param_1 + 0x998);
    iVar15 = iVar14 + (int)uVar25;
    *(int *)(param_1 + 0x998) = iVar15;
    if (*(int *)(param_1 + 0x99c) < iVar15) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(puVar23,iVar14);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(uVar25 * 0x60 + (longlong)*puVar23),(void *)*puVar23,(longlong)iVar14 * 0x60
              );
    uVar11 = uRam0000000146872f5c;
    uVar10 = uRam0000000146872f58;
    uVar9 = uRam0000000146872f54;
    uVar27 = _DAT_146872f50;
    puVar23 = (undefined8 *)*puVar23;
    lVar17 = (longlong)puVar23 + 0x14;
    do {
      *puVar23 = 0;
      *(undefined8 *)(lVar17 + -0xc) = 0;
      puVar23 = puVar23 + 0xc;
      *(undefined8 *)(lVar17 + -4) = 0;
      uVar31 = uRam0000000146872f4c;
      *(undefined8 *)(lVar17 + 0x1c) = 0;
      *(undefined8 *)(lVar17 + 0x24) = 0;
      *(undefined4 *)(lVar17 + 0xc) = 0;
      *(undefined4 *)(lVar17 + 0x10) = 0;
      *(undefined4 *)(lVar17 + 0x14) = 0;
      *(uint *)(lVar17 + 0x18) = uVar31;
      uVar31 = uRam0000000146872f44 & uVar9;
      uVar32 = uRam0000000146872f48 & uVar10;
      uVar33 = uRam0000000146872f4c & uVar11;
      *(uint *)(lVar17 + 0x2c) = _DAT_146872f40 & uVar27;
      *(uint *)(lVar17 + 0x30) = uVar31;
      *(uint *)(lVar17 + 0x34) = uVar32;
      *(uint *)(lVar17 + 0x38) = uVar33;
      *(undefined8 *)(lVar17 + 0x3c) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x44) = 0;
      uVar31 = (int)uVar25 - 1;
      uVar25 = (ulonglong)uVar31;
      lVar17 = lVar17 + 0x60;
    } while (uVar31 != 0);
    pwVar22 = _guard_xfg_dispatch_icall_nop
                        (L"&ThisClass::OnFastTravelStationSelectedExplicitly",L"::");
    pwVar8 = pwVar29;
    while (pwVar7 = pwVar22, pwVar7 != (wchar_t *)0x0) {
      pwVar22 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
      pwVar8 = pwVar7;
    }
    FName::FName(&local_208,pwVar8 + 2,1);
    FWeakObjectPtr::operator=(&local_368,0);
    local_360 = 0;
    FWeakObjectPtr::operator=(&local_368,param_1);
    local_360 = local_208;
    if ((local_208 != 0) && (lVar17 = FWeakObjectPtr::Get(&local_368), lVar17 != 0)) {
      UObject::FindFunction(lVar17,local_360);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(&local_388);
    uVar25 = local_380;
    lVar17 = (longlong)(int)local_380;
    iVar14 = (int)local_380 + 1;
    local_380 = CONCAT44(local_380._4_4_,iVar14);
    if (local_380._4_4_ < iVar14) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_388,uVar25 & 0xffffffff);
    }
    puVar24 = (undefined4 *)(lVar17 * 0x10 + local_388);
    *puVar24 = local_368;
    puVar24[1] = local_364;
    *(longlong *)(puVar24 + 2) = local_360;
    pwVar22 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnFastTravelStationClicked",L"::");
    pwVar8 = pwVar29;
    while (pwVar7 = pwVar22, pwVar7 != (wchar_t *)0x0) {
      pwVar22 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
      pwVar8 = pwVar7;
    }
    FName::FName(&local_200,pwVar8 + 2,1);
    FWeakObjectPtr::operator=(&local_398,0);
    uStack_390 = 0;
    FWeakObjectPtr::operator=(&local_398,param_1);
    uStack_390 = local_200;
    if ((local_200 != 0) && (lVar17 = FWeakObjectPtr::Get(&local_398), lVar17 != 0)) {
      UObject::FindFunction(lVar17,uStack_390);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(&local_378);
    uVar25 = local_370;
    lVar17 = (longlong)(int)local_370;
    iVar14 = (int)local_370 + 1;
    local_370 = CONCAT44(local_370._4_4_,iVar14);
    if (local_370._4_4_ < iVar14) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_378,uVar25 & 0xffffffff);
    }
    cVar30 = 1;
    puVar24 = (undefined4 *)(lVar17 * 0x10 + local_378);
    local_res8 = 1;
    *puVar24 = (undefined4)local_398;
    puVar24[1] = local_398._4_4_;
    *(ulonglong *)(puVar24 + 2) = uStack_390;
  }
  else if (cVar13 == '\x02') {
    uVar19 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_f0,L"ZONES",L"GFxMapMenu",L"ZonesCateogry");
    lVar17 = FUN_140f9eff0(local_148,uVar19,2);
    uVar12 = local_3a0;
    lVar20 = (longlong)(int)local_3a0;
    iVar14 = (int)local_3a0 + 1;
    local_3a0 = CONCAT44(local_3a0._4_4_,iVar14);
    if (local_3a0._4_4_ < iVar14) {
      FUN_140d979d0(&local_3a8,uVar12 & 0xffffffff);
    }
    lVar20 = local_3a8 + lVar20 * 0x28;
    FText::FText(lVar20,lVar17);
    *(undefined1 *)(lVar20 + 0x18) = *(undefined1 *)(lVar17 + 0x18);
    *(undefined4 *)(lVar20 + 0x1c) = *(undefined4 *)(lVar17 + 0x1c);
    *(undefined1 *)(lVar20 + 0x20) = *(undefined1 *)(lVar17 + 0x20);
    *(undefined1 *)(lVar20 + 0x21) = *(undefined1 *)(lVar17 + 0x21);
    *(undefined1 *)(lVar20 + 0x22) = *(undefined1 *)(lVar17 + 0x22);
    *(undefined1 *)(lVar20 + 0x23) = *(undefined1 *)(lVar17 + 0x23);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_148);
    FUN_140fa7e50(&local_228,puVar23,&local_3a8);
    iVar14 = *(int *)(param_1 + 0x9a8);
    iVar15 = iVar14 + (int)uVar25;
    *(int *)(param_1 + 0x9a8) = iVar15;
    if (*(int *)(param_1 + 0x9ac) < iVar15) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar23,iVar14);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(uVar25 * 8 + (longlong)*puVar23),(void *)*puVar23,(longlong)iVar14 << 3);
    _guard_xfg_dispatch_icall_nop((void *)*puVar23,0,uVar25 * 8);
    uStack_390 = (ulonglong)uStack_390._4_4_ << 0x20;
    local_398 = FUN_140fbf2f0;
    local_1e8 = FUN_140fbf2f0;
    uStack_1e0 = uStack_390;
    pwVar22 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnLevelSelected",L"::");
    pwVar8 = pwVar29;
    while (pwVar7 = pwVar22, pwVar7 != (wchar_t *)0x0) {
      pwVar22 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
      pwVar8 = pwVar7;
    }
    FName::FName(&local_220,pwVar8 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
              (&local_388,param_1,&local_1e8,local_220);
    uStack_390 = uStack_390 & 0xffffffff00000000;
    local_398 = FUN_140fbf120;
    local_1d8 = FUN_140fbf120;
    uStack_1d0 = uStack_390;
    pwVar22 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnLevelClicked",L"::");
    pwVar8 = pwVar29;
    while (pwVar7 = pwVar22, pwVar7 != (wchar_t *)0x0) {
      pwVar22 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
      pwVar8 = pwVar7;
    }
    FName::FName(&local_218,pwVar8 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
              (&local_378,param_1,&local_1d8,local_218);
    cVar30 = 0;
  }
  else if (cVar13 == '\x03') {
    uVar19 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_120,L"PLANETS",L"GFxMapMenu",L"PlanetsCategory");
    lVar17 = FUN_140f9eff0(local_170,uVar19,2);
    uVar12 = local_3a0;
    lVar20 = (longlong)(int)local_3a0;
    iVar14 = (int)local_3a0 + 1;
    local_3a0 = CONCAT44(local_3a0._4_4_,iVar14);
    if (local_3a0._4_4_ < iVar14) {
      FUN_140d979d0(&local_3a8,uVar12 & 0xffffffff);
    }
    lVar20 = local_3a8 + lVar20 * 0x28;
    FText::FText(lVar20,lVar17);
    *(undefined1 *)(lVar20 + 0x18) = *(undefined1 *)(lVar17 + 0x18);
    *(undefined4 *)(lVar20 + 0x1c) = *(undefined4 *)(lVar17 + 0x1c);
    *(undefined1 *)(lVar20 + 0x20) = *(undefined1 *)(lVar17 + 0x20);
    *(undefined1 *)(lVar20 + 0x21) = *(undefined1 *)(lVar17 + 0x21);
    *(undefined1 *)(lVar20 + 0x22) = *(undefined1 *)(lVar17 + 0x22);
    *(undefined1 *)(lVar20 + 0x23) = *(undefined1 *)(lVar17 + 0x23);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_170);
    uVar19 = FUN_1404b03b0();
    uVar19 = FText::FText(local_108,uVar19);
    FUN_140f9eff0(local_1a8,uVar19,3);
    FUN_140fa2680(&local_res20,param_1 + 0x9b0,&local_3a8,local_1a8);
    TArray<UParticleLODLevel_*,FDefaultAllocator>::InsertZeroed(param_1 + 0x9b0,0,uVar25);
    uStack_390 = (ulonglong)uStack_390._4_4_ << 0x20;
    local_398 = FUN_140fc1d30;
    local_1c8 = FUN_140fc1d30;
    uStack_1c0 = uStack_390;
    pwVar22 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlanetSelected",L"::");
    pwVar8 = pwVar29;
    while (pwVar7 = pwVar22, pwVar7 != (wchar_t *)0x0) {
      pwVar22 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
      pwVar8 = pwVar7;
    }
    FName::FName(&local_238,pwVar8 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
              (&local_388,param_1,&local_1c8,local_238);
    uStack_390 = uStack_390 & 0xffffffff00000000;
    local_398 = FUN_140fc1a00;
    local_1b8 = FUN_140fc1a00;
    uStack_1b0 = uStack_390;
    pwVar22 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlanetClicked",L"::");
    pwVar8 = pwVar29;
    while (pwVar7 = pwVar22, pwVar7 != (wchar_t *)0x0) {
      pwVar22 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
      pwVar8 = pwVar7;
    }
    FName::FName(&local_230,pwVar8 + 2,1);
    TBaseDynamicMulticastDelegate<FWeakObjectPtr,void>::__Internal_AddDynamic<AHomeCharacter>
              (&local_378,param_1,&local_1b8,local_230);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1a8);
    cVar30 = 0;
  }
  if (*(longlong *)(param_1 + 0x8e0) != 0) {
    FUN_1407665e0(param_1 + 0x8f8,param_1);
    FUN_1407665e0(*(longlong *)(param_1 + 0x8e0) + 0x1a8,param_1);
    FUN_142ecffe0(*(undefined8 *)(param_1 + 0x8e0));
    TMulticastScriptDelegate<FWeakObjectPtr>::operator=(param_1 + 0x8f8,&local_388);
    TMulticastScriptDelegate<FWeakObjectPtr>::operator=
              (*(longlong *)(param_1 + 0x8e0) + 0x1a8,&local_378);
    TMulticastScriptDelegate<FWeakObjectPtr>::operator=
              (*(longlong *)(param_1 + 0x8e0) + 0x180,&local_388);
    *(undefined1 *)(*(longlong *)(param_1 + 0x8e0) + 0x209) = 1;
    lVar17 = *(longlong *)(param_1 + 0x988);
    if (((lVar17 == 0) || (*(longlong *)(lVar17 + 0x1e0) != *(longlong *)(param_1 + 0x848))) ||
       ((*(int *)(lVar17 + 0x1a0) != *(int *)(param_1 + 0x86c) &&
        (*(int *)(lVar17 + 0x1a0) != *(int *)(param_1 + 0x870))))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (0 < (int)local_3a0) {
      puVar24 = (undefined4 *)(local_3a8 + 0x1c);
      do {
        bVar3 = *(byte *)(puVar24 + -1);
        if (bVar3 < 2) {
          local_330 = 0x13;
          local_338 = 0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_338,0);
          FGenericPlatformString::Memcpy(local_338,L"FastTravelListItem",0x26);
          lVar20 = FUN_140f9c1e0(*(undefined8 *)(param_1 + 0x8e0),&local_338,0);
          lVar17 = local_338;
LAB_140fd1eb7:
          if (lVar17 != 0) {
            FMemory::Free();
          }
          if (lVar20 != 0) {
            FUN_142ed3af0(lVar20,puVar24 + -7,0);
            plVar28 = *(longlong **)(lVar20 + 0x330);
            if (plVar28 != (longlong *)0x0) {
              (**(code **)(*plVar28 + 0x278))(plVar28,*(undefined1 *)((longlong)puVar24 + 5));
            }
            FUN_140fd9000(lVar20,*puVar24);
            plVar28 = *(longlong **)(lVar20 + 0x310);
            if (plVar28 != (longlong *)0x0) {
              (**(code **)(*plVar28 + 0x278))(plVar28,*(undefined1 *)(puVar24 + 1));
            }
            plVar28 = *(longlong **)(lVar20 + 0x318);
            if (plVar28 != (longlong *)0x0) {
              (**(code **)(*plVar28 + 0x278))(plVar28,*(undefined1 *)((longlong)puVar24 + 6));
            }
            *(undefined1 *)(lVar20 + 0x308) = 0;
            FUN_142ed5bf0(lVar20,cVar30);
            cVar13 = *(char *)(puVar24 + -1);
            bVar6 = false;
            if (cVar13 == '\0') {
LAB_140fd1f7b:
              FUN_142ed2600(lVar20,0);
              if ((bVar5) && (*(char *)((longlong)puVar24 + 7) == '\0')) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
            }
            else {
              if (cVar13 == '\x01') {
                *(undefined1 *)(lVar20 + 0x308) = 1;
                FUN_142ed5bf0(lVar20,0);
                goto LAB_140fd1f7b;
              }
              if ((cVar13 == '\x02') || (cVar13 == '\x03')) {
                FUN_140fd5a10(lVar20,0);
              }
            }
            (**(code **)(*(longlong *)(lVar20 + 0x170) + 0x38))();
            if ((*(char *)((longlong)puVar24 + 6) != '\0') || ((iVar26 == -1 && (bVar6)))) {
              iVar26 = (int)pwVar29;
            }
          }
        }
        else {
          if (bVar3 == 2) {
            local_340 = 0x19;
            local_348 = 0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_348,0);
            FGenericPlatformString::Memcpy(local_348,L"FastTravelListItemHeader",0x32);
            lVar20 = FUN_140f9c1e0(*(undefined8 *)(param_1 + 0x8e0),&local_348,0);
            lVar17 = local_348;
            goto LAB_140fd1eb7;
          }
          if (bVar3 == 3) {
            local_350 = 0x15;
            local_358 = 0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,0);
            FGenericPlatformString::Memcpy(local_358,L"FastTravelListSpacer",0x2a);
            lVar20 = FUN_140f9c1e0(*(undefined8 *)(param_1 + 0x8e0),&local_358,0);
            lVar17 = local_358;
            goto LAB_140fd1eb7;
          }
        }
        uVar27 = (int)pwVar29 + 1;
        pwVar29 = (wchar_t *)(ulonglong)uVar27;
        puVar24 = puVar24 + 10;
        cVar30 = local_res8;
      } while ((int)uVar27 < (int)local_3a0);
    }
    if (*(char *)(param_1 + 0xd30) != '\x02') {
      uVar19 = TScriptInterface<IBlendableInterface>::
               TScriptInterface<IBlendableInterface><UMaterialInterface>
                         (local_180,*(undefined8 *)(param_1 + 0x8e0));
      FUN_142ed36d0(param_1,uVar19,0);
    }
    FUN_140fd07e0(param_1);
    FUN_141083c60(param_1);
    if ((*(char *)(param_1 + 0xd30) != '\x02') &&
       ((bVar4 || (*(char *)(param_1 + 0xa50) != '\x01')))) {
      *(undefined1 *)(param_1 + 0xd20) = 1;
      (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0x2b8))
                (*(longlong **)(param_1 + 0x8e0),iVar26,1,0);
      local_1f8[0] = FUN_140f9b010(*(undefined8 *)(param_1 + 0x8e0));
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x8f8,local_1f8);
      *(undefined1 *)(param_1 + 0xd20) = 0;
    }
  }
  if (local_378 != 0) {
    FMemory::Free();
  }
  if (local_388 != 0) {
    FMemory::Free();
  }
  lVar17 = local_3a8;
  for (iVar26 = (int)local_3a0; iVar26 != 0; iVar26 = iVar26 + -1) {
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(lVar17);
    lVar17 = lVar17 + 0x28;
  }
  if (local_3a8 != 0) {
    FMemory::Free(local_3a8);
  }
  return;
}



// FUNCTION 140fd2110 FUN_140fd2110 body=443 status=ok
// SIG undefined FUN_140fd2110(void)

void FUN_140fd2110(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined2 local_10;
  
  if ((*(longlong *)(param_1 + 0x1a8) != 0) &&
     (cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x1d8), cVar3 != '\0')) {
    local_50 = 0;
    lVar7 = *(longlong *)(param_1 + 0x1a8);
    local_58 = lVar7;
    if (lVar7 != 0) {
      uVar5 = UBlendableInterface::GetPrivateStaticClass();
      local_50 = UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar5);
    }
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x1d8);
    FUN_142ecff00(uVar5,&local_58,DAT_146b3e2a0);
    local_48 = 0;
    local_40 = 0;
    uVar5 = FUN_1404b03b0();
    FText::FText(local_38,uVar5);
    uVar2 = local_40;
    lVar7 = (longlong)(int)local_40;
    local_18 = 0;
    local_10 = 1;
    iVar4 = (int)local_40 + 1;
    local_20 = 1;
    local_40 = CONCAT44(local_40._4_4_,iVar4);
    if (local_40._4_4_ < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_48,uVar2 & 0xffffffff);
    }
    *(undefined8 *)(local_48 + lVar7 * 8) = DAT_146b3e2a0;
    FText::operator=(local_38,param_1 + 0x1e8);
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x308);
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_48,0);
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x1d8);
    if (*(longlong *)(lVar7 + 0x860) != 0) {
      FWeakObjectPtr::Get(param_1 + 0x1d8);
    }
    plVar6 = *(longlong **)(param_1 + 0x1a8);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x278))(plVar6,*(undefined1 *)(param_1 + 0x1e0));
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_30 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140fd22d0 FUN_140fd22d0 body=288 status=ok
// SIG undefined FUN_140fd22d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fd22d0(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uStack_c0 = CONCAT31(uStack_c0._1_3_,param_2);
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_c8 = param_1;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(puVar1 + 2) = uStack_c0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_bc;
  }
  local_b8[0] = &LAB_140faeb10;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fd23f0 FUN_140fd23f0 body=713 status=ok
// SIG undefined FUN_140fd23f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fd23f0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x918) != 0) {
    FUN_142ecffe0();
  }
  cVar3 = *(char *)(param_1 + 0x948);
  if (cVar3 == '\x01') {
    FUN_140fd27e0(param_1);
  }
  else if (cVar3 == '\x02') {
    FUN_140fd26c0(param_1,0);
  }
  else if (cVar3 == '\x03') {
    FUN_140fd26c0(param_1,2);
  }
  else if (cVar3 == '\x04') {
    FUN_140fd26c0(param_1,1);
  }
  if (*(longlong *)(param_1 + 0x870) != 0) {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x930));
    LOCK();
    *(int *)(param_1 + 0x93c) = *(int *)(param_1 + 0x93c) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(param_1 + 0x870) + 0x278))
              (*(longlong **)(param_1 + 0x870),*(int *)(param_1 + 0x928) == 0);
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x930));
    LOCK();
    *(int *)(param_1 + 0x93c) = *(int *)(param_1 + 0x93c) + -1;
    UNLOCK();
  }
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_140faedc0;
  FUN_14208c260(param_1,local_68);
  if (local_28 != 0) {
    plVar7 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar7 = local_38;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  cVar3 = *(char *)(param_1 + 0x949);
  if (cVar3 == '\x01') {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,L"Mission Type",L"GFxMissionLogMenu",L"MissionTypeText");
    FText::operator=(param_1 + 0x878,uVar6);
  }
  else if (cVar3 == '\x02') {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a0,L"Additional Content",L"GFxMissionLogMenu",L"ByExpansion");
    FText::operator=(param_1 + 0x878,uVar6);
    local_80 = local_98;
  }
  else {
    if (cVar3 != '\x03') goto LAB_140fd263c;
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b8,L"Region",L"GFxMissionLogMenu",L"ByRegion");
    FText::operator=(param_1 + 0x878,uVar6);
    local_80 = local_b0;
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_80 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
LAB_140fd263c:
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x930));
  LOCK();
  *(int *)(param_1 + 0x93c) = *(int *)(param_1 + 0x93c) + 1;
  UNLOCK();
  iVar2 = *(int *)(param_1 + 0x928);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x930));
  LOCK();
  *(int *)(param_1 + 0x93c) = *(int *)(param_1 + 0x93c) + -1;
  UNLOCK();
  if (((iVar2 == 0) && (*(longlong *)(param_1 + 0x910) != 0)) &&
     (plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x910) + 0x170), plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x278))(plVar7,0);
  }
  return;
}



// FUNCTION 140fd26c0 FUN_140fd26c0 body=288 status=ok
// SIG undefined FUN_140fd26c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fd26c0(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uStack_c0 = CONCAT31(uStack_c0._1_3_,param_2);
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_c8 = param_1;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(puVar1 + 2) = uStack_c0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_bc;
  }
  local_b8[0] = &LAB_140faeb80;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fd27e0 FUN_140fd27e0 body=3067 status=ok
// SIG undefined FUN_140fd27e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fd27e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  char *pcVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong *plVar16;
  void *pvVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  longlong lVar21;
  PSRWLOCK SRWLock;
  longlong *plVar22;
  int iVar23;
  longlong *plVar24;
  int iVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8;
  char local_2c7;
  undefined1 local_2c6;
  undefined1 local_2c5;
  byte local_2c4 [4];
  longlong local_2c0;
  int local_2b8;
  ulonglong local_2b0;
  longlong *local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278;
  undefined1 local_270 [8];
  longlong *local_268;
  undefined1 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_23c;
  undefined2 local_234;
  undefined1 local_232;
  undefined4 local_230;
  undefined1 local_228;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined1 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined2 local_1e4;
  undefined1 local_1e2;
  undefined4 local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8 [3];
  longlong *local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  char local_168;
  undefined1 local_167;
  undefined1 local_166;
  undefined1 local_165;
  undefined1 local_164;
  undefined1 local_163;
  undefined1 local_162;
  undefined4 local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  bVar5 = false;
  bVar4 = false;
  SRWLock = (PSRWLOCK)(param_1 + 0x930);
  local_2b8 = 0;
  local_2c0 = param_1;
  AcquireSRWLockExclusive(SRWLock);
  plVar22 = (longlong *)(param_1 + 0x920);
  LOCK();
  *(undefined4 *)(param_1 + 0x938) = 1;
  UNLOCK();
  FUN_140fb0e60(plVar22,0);
  uStack_280 = local_1c8;
  local_298 = (longlong *)0x0;
  local_2b8 = -1;
  local_290 = 0;
  local_2a8 = (longlong *)0x0;
  local_2a0 = 0;
  local_1c8[0] = 0;
  local_1c8[1] = 0;
  local_288 = param_1;
  local_1d8 = param_1;
  local_1d0 = param_1;
  cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x960);
  if (cVar7 == '\0') goto LAB_140fd326b;
  uVar8 = FWeakObjectPtr::Get(param_1 + 0x960);
  FUN_142f5b8e0(uVar8,&local_298,1);
  uVar8 = FWeakObjectPtr::Get(param_1 + 0x960);
  FUN_142f5b8e0(uVar8,&local_298,3);
  uVar8 = FWeakObjectPtr::Get(param_1 + 0x960);
  FUN_142f5b8e0(uVar8,&local_2a8,2);
  *(undefined1 *)(param_1 + 0x994) = 0;
  plVar2 = local_298 + (int)local_290;
  cVar7 = '\0';
  plVar24 = local_298;
  if (local_298 != plVar2) {
LAB_140fd2930:
    plVar19 = (longlong *)*plVar24;
    if (plVar19 != (longlong *)0x0) {
      plVar9 = (longlong *)FUN_142f71d80();
      plVar16 = plVar19;
      do {
        if (plVar16 == plVar9) {
          plVar9 = (longlong *)FUN_142f71d80();
          plVar16 = plVar19;
          goto LAB_140fd2960;
        }
        plVar16 = (longlong *)plVar16[6];
      } while (plVar16 != (longlong *)0x0);
    }
    goto LAB_140fd29d7;
  }
  goto LAB_140fd29f0;
  while (plVar16 = (longlong *)plVar16[6], plVar16 != (longlong *)0x0) {
LAB_140fd2960:
    if (plVar16 == plVar9) goto LAB_140fd2970;
  }
  plVar19 = (longlong *)0x0;
LAB_140fd2970:
  lVar18 = plVar19[0x1f];
  if (lVar18 == 0) {
    (**(code **)(*plVar19 + 0x368))(plVar19);
    lVar18 = plVar19[0x1f];
    if (lVar18 == 0) goto LAB_140fd29d7;
  }
  lVar27 = FUN_141437870();
  if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar27 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) + (longlong)*(int *)(lVar27 + 0x90) * 8)
      != lVar27 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((bVar3) && (lVar18 = FUN_142f5a280(lVar18), lVar18 != 0)) {
    *(undefined1 *)(local_2c0 + 0x994) = 1;
    cVar7 = '\x01';
    goto LAB_140fd29f0;
  }
LAB_140fd29d7:
  plVar24 = plVar24 + 1;
  if (plVar24 == plVar2) goto code_r0x000140fd29e4;
  goto LAB_140fd2930;
  while (plVar16 = (longlong *)plVar16[6], plVar16 != (longlong *)0x0) {
LAB_140fd2a50:
    if (plVar16 == plVar9) goto LAB_140fd2a60;
  }
  plVar19 = (longlong *)0x0;
LAB_140fd2a60:
  lVar18 = plVar19[0x1f];
  if (lVar18 == 0) {
    (**(code **)(*plVar19 + 0x368))(plVar19);
    lVar18 = plVar19[0x1f];
    if (lVar18 == 0) goto LAB_140fd2acb;
  }
  lVar27 = FUN_141437870();
  if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar27 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) + (longlong)*(int *)(lVar27 + 0x90) * 8)
      != lVar27 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((bVar3) && (lVar18 = FUN_142f5a280(lVar18), lVar18 != 0)) {
    *(undefined1 *)(local_2c0 + 0x994) = 1;
    goto LAB_140fd2add;
  }
LAB_140fd2acb:
  plVar24 = plVar24 + 1;
  if (plVar24 == plVar2) goto LAB_140fd2add;
  goto LAB_140fd2a10;
code_r0x000140fd29e4:
  cVar7 = *(char *)(local_2c0 + 0x994);
LAB_140fd29f0:
  if (cVar7 == '\0') {
    plVar2 = local_2a8 + (int)local_2a0;
    plVar24 = local_2a8;
    if (local_2a8 != plVar2) {
LAB_140fd2a10:
      plVar19 = (longlong *)*plVar24;
      if (plVar19 != (longlong *)0x0) {
        plVar9 = (longlong *)FUN_142f71d80();
        plVar16 = plVar19;
        do {
          if (plVar16 == plVar9) {
            plVar9 = (longlong *)FUN_142f71d80();
            plVar16 = plVar19;
            goto LAB_140fd2a50;
          }
          plVar16 = (longlong *)plVar16[6];
        } while (plVar16 != (longlong *)0x0);
      }
      goto LAB_140fd2acb;
    }
  }
LAB_140fd2add:
  lVar18 = local_2c0;
  cVar7 = *(char *)(local_2c0 + 0x949);
  local_1c8[2] = local_2c0;
  if (cVar7 == '\x01') {
    local_140 = &local_2c6;
    local_138 = &local_2c5;
    local_130 = &local_2c8;
    FUN_140faad80(&local_288,&local_298,0);
    FUN_140f9ca50(*plVar22,(longlong)*(int *)(param_1 + 0x928),local_2c8,&local_140);
    iVar23 = *(int *)(lVar18 + 0x928);
    cVar7 = '\0';
    lVar18 = (longlong)(iVar23 + -1);
    if (-1 < iVar23 + -1) {
      lVar27 = lVar18 * 0x50;
      do {
        puVar20 = (undefined1 *)(*plVar22 + lVar27);
        local_1a8 = *puVar20;
        FText::FText(local_1a0,puVar20 + 8);
        local_188 = puVar20[0x20];
        local_180 = *(undefined8 *)(puVar20 + 0x28);
        local_178 = *(undefined8 *)(puVar20 + 0x30);
        local_170 = *(undefined4 *)(puVar20 + 0x38);
        local_16c = *(undefined4 *)(puVar20 + 0x3c);
        local_168 = puVar20[0x40];
        local_167 = puVar20[0x41];
        local_166 = puVar20[0x42];
        local_165 = puVar20[0x43];
        local_164 = puVar20[0x44];
        local_163 = puVar20[0x45];
        local_162 = puVar20[0x46];
        local_160 = *(undefined4 *)(puVar20 + 0x48);
        cVar6 = cVar7;
        if ((local_168 != cVar7) && (cVar6 = local_168, cVar7 != '\0')) {
          FUN_140fa6750(&local_1d8,iVar23,cVar7);
          cVar6 = local_168;
        }
        cVar7 = cVar6;
        plVar2 = local_198;
        if (local_198 != (longlong *)0x0) {
          LOCK();
          plVar24 = local_198 + 1;
          lVar12 = *plVar24;
          *(int *)plVar24 = (int)*plVar24 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_198)();
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar25 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar25 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
        iVar23 = iVar23 + -1;
        lVar27 = lVar27 + -0x50;
        lVar18 = lVar18 + -1;
      } while (-1 < lVar18);
      if (cVar7 != '\0') {
        FUN_140fa6750(&local_1d8,0,cVar7);
      }
    }
  }
  else if (cVar7 == '\x02') {
    local_158 = &local_2c6;
    local_150 = &local_2c5;
    local_148 = &local_2c8;
    FUN_140faad80(&local_288,&local_298,0);
    FUN_140f9d340(*plVar22,(longlong)*(int *)(param_1 + 0x928),local_2c8,&local_158);
    iVar23 = *(int *)(lVar18 + 0x928);
    iVar25 = iVar23 + -1;
    lVar18 = (longlong)iVar25;
    if (lVar18 != -1) {
      lVar27 = lVar18 * 0x50;
      local_2b0 = lVar18 + 1;
      lVar18 = 0;
      do {
        if (*(longlong *)(lVar27 + 0x30 + *plVar22) == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = FUN_142f5a280();
        }
        lVar21 = lVar18;
        if ((lVar12 != lVar18) && (lVar21 = lVar12, lVar18 != 0)) {
          local_278 = 0;
          FText::FText(local_270);
          local_258 = 0;
          local_250 = 0;
          local_248 = 0;
          local_23c = 0;
          local_234 = 0;
          local_232 = 0;
          local_230 = 0;
          local_240 = 0xffffffff;
          local_278 = 1;
          FText::operator=(local_270,lVar18 + 0x48);
          local_258 = 2;
          local_234 = CONCAT11(1,(undefined1)local_234);
          iVar15 = *(int *)(param_1 + 0x928);
          *(int *)(param_1 + 0x928) = iVar15 + 1;
          if (*(int *)(param_1 + 0x92c) < iVar15 + 1) {
            TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar22,iVar15);
          }
          pvVar17 = (void *)((longlong)iVar23 * 0x50 + *plVar22);
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)pvVar17 + 0x50),pvVar17,
                     (longlong)((iVar15 - iVar25) + -1) * 0x50);
          lVar18 = *plVar22 + lVar27;
          *(undefined1 *)(lVar18 + 0x50) = local_278;
          FText::FText(lVar18 + 0x58,local_270);
          plVar2 = local_268;
          *(undefined1 *)(lVar18 + 0x70) = local_258;
          *(undefined8 *)(lVar18 + 0x78) = local_250;
          *(undefined8 *)(lVar18 + 0x80) = local_248;
          *(undefined4 *)(lVar18 + 0x88) = local_240;
          *(undefined4 *)(lVar18 + 0x8c) = (undefined4)local_23c;
          *(undefined1 *)(lVar18 + 0x90) = local_23c._4_1_;
          *(undefined1 *)(lVar18 + 0x91) = local_23c._5_1_;
          *(undefined1 *)(lVar18 + 0x92) = local_23c._6_1_;
          *(undefined1 *)(lVar18 + 0x93) = local_23c._7_1_;
          *(undefined1 *)(lVar18 + 0x94) = (undefined1)local_234;
          *(undefined1 *)(lVar18 + 0x95) = local_234._1_1_;
          *(undefined1 *)(lVar18 + 0x96) = local_232;
          *(undefined4 *)(lVar18 + 0x98) = local_230;
          if (local_268 != (longlong *)0x0) {
            LOCK();
            plVar24 = local_268 + 1;
            lVar18 = *plVar24;
            *(int *)plVar24 = (int)*plVar24 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*local_268)();
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar15 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
              }
            }
          }
        }
        iVar25 = iVar25 + -1;
        iVar23 = iVar23 + -1;
        lVar27 = lVar27 + -0x50;
        local_2b0 = local_2b0 - 1;
        lVar18 = lVar21;
      } while (local_2b0 != 0);
      if (lVar21 != 0) {
        FUN_140fac1a0(&local_1d0,0,lVar21 + 0x48);
      }
    }
  }
  else if (cVar7 == '\x03') {
    local_1b0 = local_1c8 + 2;
    FUN_140faad80(&local_288,&local_298,0);
    FUN_140f9cee0(*plVar22,(longlong)*(int *)(param_1 + 0x928),local_2c8,&local_1b0);
    local_228 = 0;
    FText::FText(local_220);
    uVar10 = 0;
    local_200 = 0;
    local_1f8 = 0;
    local_1f0 = 0xffffffff;
    local_1ec = 0;
    local_1e4 = 0x100;
    local_1e2 = 0;
    local_1e0 = 0;
    local_228 = 1;
    local_208 = 2;
    local_2c7 = '\x01';
    uVar11 = uVar10;
    uVar26 = uVar10;
    if (0 < *(int *)(local_2c0 + 0x928)) {
      do {
        iVar23 = (int)uVar11;
        uVar11 = FUN_141297ac0(local_2c0,*(undefined8 *)((longlong)iVar23 * 0x50 + 0x28 + *plVar22))
        ;
        if (((uVar11 == 0) && (local_2c7 != '\0')) || (uVar11 != uVar10)) {
          local_2c7 = '\0';
          local_2b0 = uVar11;
          if (uVar11 == 0) {
            bVar4 = true;
            uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_128,L"Undiscovered",L"GFxMissionLogMenu",L"UndiscoveredText");
          }
          else {
            bVar5 = true;
            uVar8 = FText::FText(local_110,uVar11 + 0x98);
          }
          FText::operator=(local_220,uVar8);
          plVar2 = local_120;
          if ((bVar4) && (bVar4 = false, local_120 != (longlong *)0x0)) {
            LOCK();
            plVar24 = local_120 + 1;
            lVar18 = *plVar24;
            *(int *)plVar24 = (int)*plVar24 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*local_120)(local_120);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar25 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar25 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
              }
            }
          }
          plVar2 = local_108;
          if ((bVar5) && (bVar5 = false, local_108 != (longlong *)0x0)) {
            LOCK();
            plVar24 = local_108 + 1;
            lVar18 = *plVar24;
            *(int *)plVar24 = (int)*plVar24 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*local_108)(local_108);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar25 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar25 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
              }
            }
          }
          iVar25 = *(int *)(param_1 + 0x928);
          *(int *)(param_1 + 0x928) = iVar25 + 1;
          if (*(int *)(param_1 + 0x92c) < iVar25 + 1) {
            TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar22,iVar25);
          }
          pvVar17 = (void *)(*plVar22 + (longlong)iVar23 * 0x50);
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)pvVar17 + 0x50),pvVar17,(longlong)(iVar25 - iVar23) * 0x50);
          puVar20 = (undefined1 *)(*plVar22 + uVar26);
          *puVar20 = local_228;
          FText::FText(puVar20 + 8,local_220);
          puVar20[0x20] = local_208;
          *(undefined8 *)(puVar20 + 0x28) = local_200;
          *(undefined8 *)(puVar20 + 0x30) = local_1f8;
          *(undefined4 *)(puVar20 + 0x38) = local_1f0;
          *(undefined4 *)(puVar20 + 0x3c) = (undefined4)local_1ec;
          puVar20[0x40] = local_1ec._4_1_;
          puVar20[0x41] = local_1ec._5_1_;
          puVar20[0x42] = local_1ec._6_1_;
          puVar20[0x43] = local_1ec._7_1_;
          puVar20[0x44] = (undefined1)local_1e4;
          puVar20[0x45] = local_1e4._1_1_;
          puVar20[0x46] = local_1e2;
          *(undefined4 *)(puVar20 + 0x48) = local_1e0;
          uVar10 = local_2b0;
        }
        uVar11 = (ulonglong)(iVar23 + 1U);
        uVar26 = uVar26 + 0x50;
      } while ((int)(iVar23 + 1U) < *(int *)(local_2c0 + 0x928));
    }
    if (local_218 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_218 + 1;
      lVar18 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_218)();
        LOCK();
        piVar1 = (int *)((longlong)local_218 + 0xc);
        iVar23 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*local_218 + 8))(local_218,1);
        }
      }
    }
  }
  param_1 = local_2c0;
  iVar15 = 0;
  iVar23 = *(int *)(local_2c0 + 0x928);
  iVar25 = local_2b8;
  if (0 < iVar23) {
    pcVar13 = (char *)(*plVar22 + 0x41);
    do {
      iVar25 = iVar15;
      if (*pcVar13 != '\0') break;
      iVar15 = iVar15 + 1;
      pcVar13 = pcVar13 + 0x50;
      iVar25 = local_2b8;
    } while (iVar15 < iVar23);
  }
  local_2b8 = iVar25;
  if (0 < (int)local_2a0) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_f8,L"Completed",L"GFxMissionLogMenu",L"CompletedHeaderText");
    FUN_140fac1a0(&local_1d0,iVar23,uVar8);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar22 = local_f0 + 1;
      lVar18 = *plVar22;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar1 = (int *)((longlong)local_f0 + 0xc);
        iVar23 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    AlgoImpl::
    IntroSortInternal<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,FIdentityFunctor,TDereferenceWrapper<TWeakObjectPtr<USceneCaptureComponent,FWeakObjectPtr>,<lambda_8d147fa6b0e7bb9aa8f58dc0abb9a3e9>_>_>
              (local_2a8,(longlong)(int)local_2a0,local_2c4[0],local_2c4);
    FUN_140faad80(&local_288,&local_2a8,1);
  }
  SRWLock = (PSRWLOCK)(param_1 + 0x930);
LAB_140fd326b:
  ReleaseSRWLockExclusive(SRWLock);
  LOCK();
  *(undefined4 *)&SRWLock[1].Ptr = 0;
  UNLOCK();
  uStack_280._0_4_ = local_2b8;
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  local_288 = param_1;
  puVar14 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar14 + 1) = (undefined4)local_288;
    *(undefined4 *)((longlong)puVar14 + 0xc) = local_288._4_4_;
    *(int *)(puVar14 + 2) = (int)uStack_280;
    *(undefined4 *)((longlong)puVar14 + 0x14) = uStack_280._4_4_;
  }
  local_d8[0] = &LAB_140faebf0;
  uVar8 = FUN_1420849a0(param_1,local_88,local_d8);
  FUN_14208c940(param_1,uVar8);
  if (local_48 != 0) {
    plVar22 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar22 = local_58;
    }
    if (plVar22 != (longlong *)0x0) {
      (**(code **)(*plVar22 + 0x10))(plVar22,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    plVar22 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar22 = local_a8;
    }
    if (plVar22 != (longlong *)0x0) {
      (**(code **)(*plVar22 + 0x10))(plVar22,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_1c8[0] != 0) {
    FMemory::Free();
  }
  if (local_2a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_298 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fd33e0 FUN_140fd33e0 body=115 status=ok
// SIG undefined FUN_140fd33e0(void)

void FUN_140fd33e0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(longlong **)(param_1 + 0x910) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x910) + 0x2d8))();
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x910) + 0x2e0))();
    if (0 < iVar1) {
      iVar1 = iVar1 + -1;
    }
    iVar3 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x910));
    if (iVar2 < iVar3 + -1) {
      iVar2 = iVar2 + 1;
    }
    FUN_140fb3dc0(param_1,iVar1,iVar2);
  }
  return;
}



// FUNCTION 140fd3460 FUN_140fd3460 body=2189 status=ok
// SIG undefined FUN_140fd3460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fd3460(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar14;
  undefined1 auStack_c28 [32];
  undefined8 *local_c08;
  undefined1 local_bf8 [8];
  longlong local_bf0;
  longlong local_be8 [4];
  undefined1 local_bc8 [8];
  longlong *local_bc0;
  longlong local_bb0;
  undefined1 local_ba8 [8];
  undefined1 local_ba0 [8];
  longlong *local_b98;
  undefined1 local_b88 [8];
  longlong *local_b80;
  undefined1 local_b70 [8];
  longlong *local_b68;
  undefined8 local_b58;
  undefined8 local_b50;
  undefined1 local_b48;
  undefined1 local_b40 [608];
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined1 local_8d0;
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined8 local_8a8;
  undefined8 local_8a0;
  undefined4 local_898;
  undefined4 local_894;
  longlong local_888;
  undefined4 local_880;
  undefined8 local_878;
  longlong local_770;
  undefined8 local_768;
  longlong local_660;
  undefined8 local_658;
  longlong local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined1 local_5b8;
  undefined1 local_5b0 [608];
  undefined8 local_350;
  undefined8 local_348;
  undefined1 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 local_304;
  longlong local_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong uVar13;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_c28;
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar6 != 0) {
    FUN_14141f270();
  }
  lVar6 = 0;
  if (5 < *(int *)(param_1 + 0x7a8)) {
    if (*(char *)(param_1 + 0x731) == '\0') {
      lVar10 = 3;
      do {
        lVar8 = *(longlong *)(param_1 + 0x790);
        plVar4 = *(longlong **)(lVar8 + lVar6);
        if (plVar4 != (longlong *)0x0) {
          lVar8 = *plVar4;
          uVar7 = FUN_1404b03b0();
          (**(code **)(lVar8 + 0x2b0))(plVar4,uVar7,1,0);
          lVar8 = *(longlong *)(param_1 + 0x790);
          lVar6 = lVar6 + 8;
        }
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      plVar4 = *(longlong **)(lVar8 + 0x18);
      if (plVar4 != (longlong *)0x0) {
        lVar6 = *plVar4;
        uVar7 = FUN_1404b03b0();
        (**(code **)(lVar6 + 0x2b0))(plVar4,uVar7,1,0);
        lVar8 = *(longlong *)(param_1 + 0x790);
      }
      plVar4 = *(longlong **)(lVar8 + 0x20);
      if (plVar4 != (longlong *)0x0) {
        lVar6 = *plVar4;
        uVar7 = FUN_1404b03b0();
        (**(code **)(lVar6 + 0x2b0))(plVar4,uVar7,1,0);
        lVar8 = *(longlong *)(param_1 + 0x790);
      }
      plVar4 = *(longlong **)(lVar8 + 0x28);
      if (plVar4 != (longlong *)0x0) {
        lVar6 = *plVar4;
        uVar7 = FUN_1404b03b0();
        (**(code **)(lVar6 + 0x2b0))(plVar4,uVar7,1,0);
      }
    }
    else {
      FText::FText(local_ba0);
      FText::FText(local_bc8);
      local_b50 = FWeakObjectPtr::Get(param_1 + 0x58c);
      lVar10 = 3;
      local_b48 = 1;
      local_8e0 = 0;
      local_8d8 = 0;
      local_8d0 = 1;
      local_8c8 = 0;
      local_8c0 = 0;
      local_8a8 = 0;
      local_8a0 = 0;
      local_898 = 0xffffffff;
      local_894 = 0;
      local_888 = 0;
      local_880 = 0;
      local_878 = 0;
      local_770 = 0;
      local_768 = 0;
      local_660 = 0;
      local_658 = 0;
      local_5d0 = 0;
      local_5c8 = 0;
      do {
        lVar8 = *(longlong *)(param_1 + 0x790);
        if ((*(longlong *)(lVar8 + lVar6) != 0) &&
           (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x7a0) + lVar6),
           plVar4 != (longlong *)0x0)) {
          local_c08 = &local_b50;
          (**(code **)(*plVar4 + 0x2a8))(plVar4,local_ba0,local_bc8,local_bf8);
          plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x790) + lVar6);
          (**(code **)(*plVar4 + 0x2b0))(plVar4,local_bc8,1,0);
          lVar8 = *(longlong *)(param_1 + 0x790);
          lVar6 = lVar6 + 8;
        }
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      if ((*(longlong *)(lVar8 + 0x18) != 0) &&
         (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x7a0) + 0x18), plVar4 != (longlong *)0x0)
         ) {
        local_c08 = &local_b50;
        (**(code **)(*plVar4 + 0x2a8))(plVar4,local_ba0,local_bc8,local_bf8);
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x790) + 0x18);
        (**(code **)(*plVar4 + 0x2b0))(plVar4,local_bc8,1,0);
        lVar8 = *(longlong *)(param_1 + 0x790);
      }
      if ((*(longlong *)(lVar8 + 0x20) != 0) &&
         (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x7a0) + 0x20), plVar4 != (longlong *)0x0)
         ) {
        local_c08 = &local_b50;
        (**(code **)(*plVar4 + 0x2a8))(plVar4,local_ba0,local_bc8,local_bf8);
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x790) + 0x20);
        (**(code **)(*plVar4 + 0x2b0))(plVar4,local_bc8,1,0);
        lVar8 = *(longlong *)(param_1 + 0x790);
      }
      if ((*(longlong *)(lVar8 + 0x28) != 0) &&
         (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x7a0) + 0x28), plVar4 != (longlong *)0x0)
         ) {
        local_c08 = &local_b50;
        (**(code **)(*plVar4 + 0x2a8))(plVar4,local_ba0,local_bc8,local_bf8);
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x790) + 0x28);
        (**(code **)(*plVar4 + 0x2b0))(plVar4,local_bc8,1,0);
      }
      if (local_5d0 != 0) {
        FMemory::Free();
      }
      if (local_660 != 0) {
        FMemory::Free();
      }
      if (local_770 != 0) {
        FMemory::Free();
      }
      local_880 = 0;
      if (local_888 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_8c8);
      FUN_14099aac0(local_b40);
      if (local_bc0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_bc0 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_bc0)(local_bc0);
          LOCK();
          piVar1 = (int *)((longlong)local_bc0 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_bc0 + 8))(local_bc0,1);
          }
        }
      }
      if (local_b98 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_b98 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_b98)(local_b98);
          LOCK();
          piVar1 = (int *)((longlong)local_b98 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_b98 + 8))(local_b98,1);
          }
        }
      }
    }
  }
  uVar13 = 0;
  if ((*(longlong *)(param_1 + 0x708) != 0) && (FUN_142ecffe0(), *(char *)(param_1 + 0x731) != '\0')
     ) {
    iVar11 = 1;
    lVar6 = 1;
    local_bf0 = 1;
    local_bb0 = 5;
    lVar10 = 0x38;
    uVar14 = uVar13;
    do {
      lVar8 = 0x740;
      if (*(char *)(param_1 + 0x750) == '\0') {
        lVar8 = 0x7b0;
      }
      if ((lVar6 < 0) || (*(int *)(lVar8 + 8 + param_1) <= iVar11)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar8 = *(longlong *)(lVar8 + param_1) + lVar10;
        if (((longlong)uVar14 < 0) || (*(int *)(lVar8 + 0x30) <= (int)uVar13)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        lVar6 = local_bf0;
        if ((bVar5) &&
           (plVar4 = *(longlong **)(*(longlong *)(lVar8 + 0x28) + uVar14 * 8),
           plVar4 != (longlong *)0x0)) {
          FText::FText(local_b70);
          FText::FText(local_b88);
          local_5c0 = FWeakObjectPtr::Get(param_1 + 0x58c);
          local_c08 = &local_5c0;
          local_350 = 0;
          local_348 = 0;
          local_338 = 0;
          local_330 = 0;
          local_318 = 0;
          local_310 = 0;
          local_304 = 0;
          local_2f8 = 0;
          local_2f0 = 0;
          local_2e8 = 0;
          local_1e0 = 0;
          local_1d8 = 0;
          local_d0 = 0;
          local_c8 = 0;
          local_40 = 0;
          local_38 = 0;
          local_5b8 = 1;
          local_340 = 1;
          local_308 = 0xffffffff;
          (**(code **)(*plVar4 + 0x2a8))(plVar4,local_b70,local_b88,local_ba8);
          local_be8[1] = 10;
          local_be8[0] = 0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_be8,0);
          FGenericPlatformString::Memcpy(local_be8[0],L"MayhemMod",0x14);
          uVar7 = *(undefined8 *)(param_1 + 0x708);
          local_b58 = UGameInstanceGameParameters::GetPrivateStaticClass();
          lVar6 = FUN_142ebcee0(uVar7,local_be8,local_b58,1);
          if (lVar6 == 0) {
LAB_140fd3ac1:
            lVar6 = 0;
          }
          else {
            lVar9 = UGameInstanceGameParameters::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (!bVar5) goto LAB_140fd3ac1;
          }
          if (local_be8[0] != 0) {
            FMemory::Free();
          }
          if (lVar6 != 0) {
            plVar4 = *(longlong **)(lVar6 + 0x308);
            *(undefined1 *)(lVar6 + 0x198) = 0;
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x2b0))(plVar4,local_b88,1,0);
            }
            plVar4 = *(longlong **)(lVar6 + 0x310);
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x2b0))(plVar4,local_b70,1,0);
            }
            local_be8[3] = 8;
            local_be8[2] = 0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_be8 + 2,0);
            FGenericPlatformString::Memcpy(local_be8[2],L"refresh",0x10);
            FUN_142088910(lVar6,local_be8 + 2);
            if (local_be8[2] != 0) {
              FMemory::Free();
            }
          }
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          uVar14 = uVar14 + 1;
          if (((longlong)uVar14 < 0) || (*(int *)(lVar8 + 0x30) <= (int)uVar12)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) {
            local_bf0 = local_bf0 + 1;
            iVar11 = iVar11 + 1;
            lVar10 = lVar10 + 0x38;
            uVar13 = 0;
            uVar14 = 0;
          }
          lVar6 = local_bf0;
          if (local_40 != 0) {
            FMemory::Free();
          }
          if (local_d0 != 0) {
            FMemory::Free();
          }
          if (local_1e0 != 0) {
            FMemory::Free();
          }
          local_2f0 = 0;
          if (local_2f8 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (&local_338);
          FUN_14099aac0(local_5b0);
          plVar4 = local_b80;
          if (local_b80 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_b80 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_b80)(local_b80);
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
          plVar4 = local_b68;
          if (local_b68 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_b68 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_b68)(local_b68);
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
        }
      }
      local_bb0 = local_bb0 + -1;
    } while (local_bb0 != 0);
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x300))();
  }
  return;
}



// FUNCTION 140fd3cf0 FUN_140fd3cf0 body=237 status=ok
// SIG undefined FUN_140fd3cf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fd3cf0(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [80];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uStack_c0 = CONCAT31(uStack_c0._1_3_,param_2);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  local_c8 = param_1;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(puVar1 + 2) = uStack_c0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_bc;
  }
  local_68[0] = &LAB_140faee90;
  uVar2 = FUN_1420849a0(param_1,local_b8,local_68);
  FUN_14208c4f0(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fd3de0 FUN_140fd3de0 body=1741 status=ok
// SIG undefined FUN_140fd3de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fd3de0(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  PSRWLOCK SRWLock;
  int *piVar9;
  int iVar10;
  int *piVar11;
  ulonglong uVar12;
  int *piVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  int *piVar17;
  bool bVar18;
  undefined1 auStack_298 [32];
  char local_278;
  int local_274;
  longlong local_270;
  int *local_268;
  int *local_260;
  int *local_258;
  uint local_250;
  uint local_24c;
  undefined1 *local_248 [2];
  undefined1 local_238 [32];
  undefined8 local_218;
  undefined4 local_208;
  longlong local_1f8;
  undefined1 local_1e8 [8];
  longlong local_1e0;
  longlong local_128;
  undefined8 local_118;
  longlong local_110 [3];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined8 local_ac;
  int local_a4;
  undefined1 local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_6f;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  piVar3 = (int *)0x0;
  local_258 = (int *)0x0;
  local_24c = 0;
  local_270 = param_1;
  local_268 = param_2;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x6f0));
  iVar8 = *(int *)(param_1 + 0x6e8) + -1;
  piVar9 = piVar3;
  if (-1 < iVar8) {
    lVar15 = (longlong)iVar8 * 0xd0;
    piVar11 = piVar3;
    do {
      if (*(char *)(lVar15 + 0xa9 + *(longlong *)(param_1 + 0x6e0)) == '\x01') {
        iVar2 = (int)piVar9;
        local_250 = iVar2 + 1;
        if ((int)piVar11 < (int)local_250) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_258,piVar9);
          piVar11 = (int *)(ulonglong)local_24c;
          piVar3 = local_258;
        }
        piVar9 = (int *)(ulonglong)local_250;
        piVar3[iVar2] = iVar8;
      }
      lVar15 = lVar15 + -0xd0;
      iVar8 = iVar8 + -1;
      param_2 = local_268;
    } while (-1 < iVar8);
  }
  iVar8 = (int)piVar9;
  SRWLock = (PSRWLOCK)(param_1 + 0x6f0);
  ReleaseSRWLockShared(SRWLock);
  piVar11 = *(int **)param_2;
  piVar17 = piVar11 + (longlong)param_2[2] * 0x1c;
  local_260 = piVar17;
  if (piVar11 == piVar17) {
LAB_140fd4234:
    uVar12 = 0;
    uVar16 = (ulonglong)((longlong)(piVar3 + iVar8) + (3 - (longlong)piVar3)) >> 2;
    if (piVar3 + iVar8 < piVar3) {
      uVar16 = uVar12;
    }
    piVar9 = piVar3;
    if (uVar16 != 0) {
      do {
        iVar8 = *piVar3;
        AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x6f0));
        puVar5 = (undefined8 *)((longlong)iVar8 * 0xd0 + *(longlong *)(param_1 + 0x6e0));
        local_118 = *puVar5;
        FString::FString(local_110,puVar5 + 1);
        local_c8 = puVar5[10];
        local_f8 = puVar5[4];
        uStack_f0 = puVar5[5];
        local_e8 = *(undefined4 *)(puVar5 + 6);
        uStack_e4 = *(undefined4 *)((longlong)puVar5 + 0x34);
        uStack_e0 = *(undefined4 *)(puVar5 + 7);
        uStack_dc = *(undefined4 *)((longlong)puVar5 + 0x3c);
        local_c0 = puVar5[0xb];
        local_b8 = *(undefined1 *)(puVar5 + 0xc);
        local_b7 = *(undefined1 *)((longlong)puVar5 + 0x61);
        local_b0 = *(undefined1 *)(puVar5 + 0xd);
        local_a4 = *(int *)((longlong)puVar5 + 0x74);
        local_a0 = *(undefined1 *)(puVar5 + 0xf);
        local_9c = *(int *)((longlong)puVar5 + 0x7c);
        local_98 = *(undefined4 *)(puVar5 + 0x10);
        local_94 = *(undefined4 *)((longlong)puVar5 + 0x84);
        local_d8 = puVar5[8];
        uStack_d0 = puVar5[9];
        local_80 = *(undefined4 *)(puVar5 + 0x13);
        local_b4 = *(undefined4 *)((longlong)puVar5 + 100);
        local_7c = *(undefined4 *)((longlong)puVar5 + 0x9c);
        local_ac = *(undefined8 *)((longlong)puVar5 + 0x6c);
        local_78 = puVar5[0x14];
        local_90 = puVar5[0x11];
        uStack_88 = puVar5[0x12];
        local_70 = *(undefined1 *)(puVar5 + 0x15);
        local_6c = *(undefined4 *)((longlong)puVar5 + 0xac);
        uStack_68 = *(undefined4 *)(puVar5 + 0x16);
        uStack_64 = *(undefined4 *)((longlong)puVar5 + 0xb4);
        uStack_60 = *(undefined4 *)(puVar5 + 0x17);
        local_6f = *(undefined1 *)((longlong)puVar5 + 0xa9);
        FString::FString(local_58,puVar5 + 0x18);
        ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x6f0));
        local_1f8 = param_1;
        FUN_140f9f450(local_1e8,&local_118);
        local_218 = 0;
        local_208 = 0;
        puVar5 = (undefined8 *)FUN_140438ef0(0xf0,local_238);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &PTR_FUN_144648798;
          puVar5[2] = local_1f8;
          FUN_140f9f2f0(puVar5 + 4,local_1e8);
        }
        local_248[0] = &LAB_140faebb0;
        FUN_14208c4f0(param_1,local_248);
        if (local_128 != 0) {
          FMemory::Free();
        }
        if (local_1e0 != 0) {
          FMemory::Free();
        }
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        if (local_110[0] != 0) {
          FMemory::Free();
        }
        piVar3 = piVar3 + 1;
        uVar12 = uVar12 + 1;
        piVar9 = local_258;
      } while (uVar12 != uVar16);
    }
    if (piVar9 != (int *)0x0) {
      FMemory::Free(piVar9);
    }
    return;
  }
  piVar11 = piVar11 + 6;
LAB_140fd3ee0:
  if ((char)piVar11[0x12] == '\0') {
    local_278 = '\0';
    local_268 = piVar11;
    AcquireSRWLockShared(SRWLock);
    lVar15 = (longlong)(int)piVar9;
    if (piVar3 != piVar3 + lVar15) {
      lVar4 = *(longlong *)(param_1 + 0x6e0);
      piVar13 = piVar3;
      do {
        iVar8 = *piVar13;
        lVar6 = (longlong)iVar8 * 0xd0;
        if (((*(int *)(lVar6 + 0x8c + lVar4) == piVar11[-1] &&
             *(int *)(lVar6 + 0x94 + lVar4) == piVar11[1]) &&
            *(int *)(lVar6 + 0x90 + lVar4) == *piVar11) &&
            piVar11[-2] == *(int *)(lVar6 + 0x88 + lVar4)) {
          local_278 = '\x01';
          cVar1 = FWeakObjectPtr::IsValid(piVar11 + 2);
          if (cVar1 == '\0') {
            uVar7 = 0;
          }
          else {
            lVar4 = FWeakObjectPtr::Get(piVar11 + 2);
            uVar7 = *(undefined8 *)(lVar4 + 0x118);
          }
          param_1 = local_270;
          lVar6 = (longlong)iVar8 * 0xd0;
          FWeakObjectPtr::operator=(*(longlong *)(local_270 + 0x6e0) + 0x80 + lVar6,uVar7);
          lVar4 = *(longlong *)(param_1 + 0x6e0);
          *(undefined8 *)(lVar6 + 0x6c + lVar4) = *(undefined8 *)(piVar11 + 4);
          *(int *)(lVar6 + 0x74 + lVar4) = piVar11[6];
          piVar17 = local_260;
          if ((int)piVar9 != 0) {
            iVar2 = 0;
            bVar18 = *piVar3 != iVar8;
            piVar9 = (int *)0x0;
            lVar4 = 0;
            iVar10 = iVar2;
            goto joined_r0x000140fd3ffe;
          }
          break;
        }
        piVar13 = piVar13 + 1;
        param_1 = local_270;
        piVar17 = local_260;
      } while (piVar13 != piVar3 + lVar15);
    }
    goto LAB_140fd407b;
  }
  goto LAB_140fd421e;
  while( true ) {
    local_274 = iVar2 - iVar10;
    if (bVar18 != false) {
      iVar14 = (int)piVar9;
      if (iVar14 != iVar10) {
        _guard_xfg_dispatch_icall_nop(piVar3 + iVar14,piVar3 + iVar10,(longlong)local_274 << 2);
      }
      piVar9 = (int *)(ulonglong)(uint)(iVar14 + local_274);
    }
    bVar18 = (bool)(bVar18 ^ 1);
    piVar11 = local_268;
    param_1 = local_270;
    piVar17 = local_260;
    iVar10 = iVar2;
    if (lVar15 <= lVar4) break;
joined_r0x000140fd3ffe:
    lVar4 = lVar4 + 1;
    iVar2 = iVar2 + 1;
    if (lVar4 < lVar15) {
      if (bVar18 == (piVar3[lVar4] != iVar8)) goto joined_r0x000140fd3ffe;
    }
  }
LAB_140fd407b:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x6f0));
  if (local_278 != '\0') goto LAB_140fd4216;
  lVar15 = *(longlong *)(piVar11 + 8);
  if (lVar15 == 0) {
LAB_140fd40d8:
    lVar15 = 0;
  }
  else {
    lVar4 = FUN_1413b8c70();
    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    if (!bVar18) goto LAB_140fd40d8;
  }
  uVar7 = 0;
  if (lVar15 != 0) {
    FUN_140f9f590(&local_118);
    FUN_140fd5fb0(&local_118,lVar15,param_1 + 0x660);
    local_90 = *(undefined8 *)(piVar11 + -2);
    uStack_88 = *(undefined8 *)piVar11;
    cVar1 = FWeakObjectPtr::IsValid(piVar11 + 2);
    if (cVar1 != '\0') {
      lVar15 = FWeakObjectPtr::Get(piVar11 + 2);
      uVar7 = *(undefined8 *)(lVar15 + 0x118);
    }
    FWeakObjectPtr::operator=(&local_98,uVar7);
    local_a4 = piVar11[6];
    local_ac = *(undefined8 *)(piVar11 + 4);
    local_9c = piVar11[7];
    local_6f = 1;
    local_a0 = 1;
    local_1f8 = param_1;
    FUN_140f9f450(local_1e8,&local_118);
    local_218 = 0;
    local_208 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0xf0,local_238);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_144648798;
      puVar5[2] = local_1f8;
      FUN_140f9f450(puVar5 + 4,local_1e8);
    }
    local_248[0] = &LAB_140faea10;
    FUN_14208c4f0(param_1,local_248);
    if (local_128 != 0) {
      FMemory::Free();
    }
    if (local_1e0 != 0) {
      FMemory::Free();
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_110[0] != 0) {
      FMemory::Free();
    }
  }
LAB_140fd4216:
  SRWLock = (PSRWLOCK)(param_1 + 0x6f0);
LAB_140fd421e:
  iVar8 = (int)piVar9;
  local_268 = piVar11 + 0x1c;
  piVar13 = piVar11 + 0x16;
  piVar11 = local_268;
  if (piVar13 == piVar17) goto LAB_140fd4234;
  goto LAB_140fd3ee0;
}



// FUNCTION 140fd44b0 FUN_140fd44b0 body=136 status=ok
// SIG undefined FUN_140fd44b0(void)

ulonglong FUN_140fd44b0(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar3 = 0;
  LOCK();
  bVar1 = *(byte *)(param_1 + 0x1b3);
  if (bVar1 == 0) {
    *(byte *)(param_1 + 0x1b3) = 1;
  }
  else {
    uVar3 = (ulonglong)bVar1;
  }
  UNLOCK();
  if (bVar1 == 0) {
    FWeakObjectPtr::operator=(&local_res8,param_1);
    local_28 = 0;
    local_18 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_1444f8920;
      puVar2[1] = param_1;
      *(undefined4 *)(puVar2 + 2) = local_res8;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_resc;
    }
    local_58[0] = &LAB_140faee20;
    uVar3 = FUN_14208c5d0(param_1,local_58);
  }
  return uVar3;
}



// FUNCTION 140fd4540 FUN_140fd4540 body=17 status=ok
// SIG undefined FUN_140fd4540(void)

ulonglong FUN_140fd4540(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong in_RAX;
  undefined4 uStackX_8;
  undefined4 uStackX_c;
  undefined1 *apuStack_58 [2];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  undefined4 uStack_18;
  
  lVar2 = *(longlong *)(param_1 + 0x1c8);
  if (lVar2 == 0) {
    return in_RAX;
  }
  uVar4 = 0;
  LOCK();
  bVar1 = *(byte *)(lVar2 + 0x1b3);
  if (bVar1 == 0) {
    *(byte *)(lVar2 + 0x1b3) = 1;
  }
  else {
    uVar4 = (ulonglong)bVar1;
  }
  UNLOCK();
  if (bVar1 == 0) {
    FWeakObjectPtr::operator=(&uStackX_8,lVar2);
    uStack_28 = 0;
    uStack_18 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x18,auStack_48);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_1444f8920;
      puVar3[1] = lVar2;
      *(undefined4 *)(puVar3 + 2) = uStackX_8;
      *(undefined4 *)((longlong)puVar3 + 0x14) = uStackX_c;
    }
    apuStack_58[0] = &LAB_140faee20;
    uVar4 = FUN_14208c5d0(lVar2,apuStack_58);
  }
  return uVar4;
}



// FUNCTION 140fd4560 FUN_140fd4560 body=271 status=ok
// SIG undefined FUN_140fd4560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fd4560(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140faeef0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fd4670 FUN_140fd4670 body=271 status=ok
// SIG undefined FUN_140fd4670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fd4670(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140faee70;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fd4780 FUN_140fd4780 body=269 status=ok
// SIG undefined FUN_140fd4780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fd4780(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  undefined1 auStack_138 [40];
  undefined4 local_110;
  undefined1 local_108 [8];
  longlong local_100;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined4 local_8c;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_5f;
  longlong local_48;
  ulonglong local_38;
  
  if (param_3 != 0) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
    FUN_140f9f590(local_108);
    FUN_140fd5fb0(local_108,param_2,param_1 + 0x660);
    FWeakObjectPtr::operator=(local_88,*(undefined8 *)(param_3 + 0x118));
    local_9c = *(undefined4 *)(param_3 + 0x220);
    uStack_98 = *(undefined4 *)(param_3 + 0x224);
    local_110 = *(undefined4 *)(param_3 + 0x228);
    local_80 = *param_4;
    uStack_78 = param_4[1];
    local_5f = 2;
    local_90 = 1;
    local_8c = param_5;
    local_94 = local_110;
    FUN_140fade40(param_1,local_108);
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_100 != 0) {
      FMemory::Free();
    }
  }
  return;
}


