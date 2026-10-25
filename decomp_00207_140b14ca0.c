// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140b14ca0 FUN_140b14ca0 body=154 status=ok
// SIG undefined FUN_140b14ca0(void)

undefined8 *
FUN_140b14ca0(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_1442abc08;
  param_1[2] = *param_3;
  FWeakObjectPtr::operator=(param_1 + 3);
  *(undefined1 *)(param_1 + 5) = param_5;
  param_1[4] = param_4;
  uVar1 = FDelegateHandle::GenerateNewID();
  param_1[6] = uVar1;
  if (param_2 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 3);
    uVar1 = FUN_14178ac60(uVar1,*param_3);
    param_1[1] = uVar1;
  }
  *param_1 = &PTR_LAB_1442abc50;
  return param_1;
}



// FUNCTION 140b14d40 FUN_140b14d40 body=1018 status=ok
// SIG undefined FUN_140b14d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b14d40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_14125b280();
  *param_1 = &PTR_FUN_1442a2b08;
  param_1[0x8b] = &PTR_LAB_1442a3218;
  param_1[0x8c] = &PTR_LAB_1442a3230;
  param_1[0xd0] = &PTR_LAB_1442a3258;
  param_1[0xd1] = &PTR_LAB_1442a3270;
  param_1[0xdc] = &PTR_IsPromotedBuild_1442a3340;
  param_1[0xed] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  *(undefined1 *)(param_1 + 0xfa) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7d4) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7dc) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0xfe) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7f4) = 0;
  param_1[0xff] = 0;
  param_1[0x100] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x101) = DAT_1468b5d98;
  param_1[0x102] = 0;
  *(undefined4 *)(param_1 + 0x103) = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  *(undefined4 *)(param_1 + 0x10a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x854) = 0;
  param_1[0x10c] = 0;
  *(undefined4 *)(param_1 + 0x10d) = 0;
  param_1[0x10f] = 0;
  FUN_142d2e580(param_1 + 0x112);
  uVar2 = DAT_146868f30;
  uVar1 = FUN_142a175e0();
  uVar2 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,0,0);
  param_1[0xdf] = uVar2;
  uVar2 = DAT_146868f38;
  uVar1 = FUN_142a07000();
  uVar2 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,0,0);
  param_1[0xe0] = uVar2;
  uVar2 = DAT_146868f60;
  uVar1 = FUN_142a232e0();
  uVar2 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,0,0);
  param_1[0xe1] = uVar2;
  uVar2 = DAT_146868f40;
  uVar1 = FUN_142a232e0();
  uVar2 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,0,0);
  param_1[0xe2] = uVar2;
  uVar2 = DAT_146868f48;
  uVar1 = FUN_142912e90();
  uVar2 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,0,0);
  param_1[0xe3] = uVar2;
  uVar2 = DAT_146868f50;
  uVar1 = ULanguageItemCUnitWidget::GetPrivateStaticClass();
  uVar2 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,0,0);
  param_1[0xe5] = uVar2;
  uVar2 = DAT_146868f68;
  uVar1 = AUGDoor::GetPrivateStaticClass();
  uVar2 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,0,0);
  param_1[0xe9] = uVar2;
  *(undefined1 *)(param_1[0xdf] + 0x714) = 1;
  param_1[0x2d] = param_1[0xdf];
  FUN_142399e30(param_1[0xe0],param_1[0xdf],0);
  FUN_142399e30(param_1[0xe1],param_1[0xdf],0);
  FUN_142399e30(param_1[0xe2],param_1[0xdf],0);
  FUN_142398ec0(param_1[0xe2],0,1);
  FUN_142399e30(param_1[0xe3],param_1[0xdf],0);
  FUN_142398ec0(param_1[0xe3],0,1);
  (**(code **)(*(longlong *)param_1[0xe3] + 0x638))((longlong *)param_1[0xe3],0);
  FUN_142399e30(param_1[0xe9],param_1[0xdf],0);
  param_1[0xea] = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0;
  *(undefined1 *)(param_1 + 0x12a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x75c) = 1;
  *(undefined4 *)(param_1 + 0xec) = 0x3f333333;
  *(undefined1 *)((longlong)param_1 + 0x764) = 1;
  *(undefined2 *)(param_1 + 0xef) = 0x101;
  *(undefined4 *)(param_1 + 0xf5) = 0x437a0000;
  *(undefined1 *)((longlong)param_1 + 0x691) = 1;
  *(undefined2 *)(param_1 + 0xfc) = 1;
  *(undefined4 *)(param_1 + 0x10e) = 0x41200000;
  *(undefined4 *)(param_1 + 0x129) = 0x41700000;
  return param_1;
}



// FUNCTION 140b15140 FUN_140b15140 body=930 status=ok
// SIG undefined FUN_140b15140(void)

undefined8 * FUN_140b15140(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  longlong *plVar13;
  longlong local_res10;
  int local_38;
  int local_34;
  longlong local_30;
  
  FUN_14125b280();
  *param_1 = &PTR__scalar_deleting_destructor__1442a53a8;
  param_1[0x8b] = &PTR_LAB_1442a5ab8;
  param_1[0x8c] = &PTR_LAB_1442a5ad0;
  param_1[0xd0] = &PTR_LAB_1442a5af8;
  param_1[0xd1] = &PTR_LAB_1442a5b10;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  uVar7 = DAT_146868c90;
  uVar6 = FUN_142a175e0();
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,0,0);
  param_1[0xde] = uVar7;
  param_1[0x2d] = uVar7;
  uVar7 = DAT_146868c88;
  uVar6 = FUN_142e6f710();
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,0,0);
  param_1[0xdd] = uVar7;
  uVar7 = DAT_146868ca0;
  uVar6 = AUGDoor::GetPrivateStaticClass();
  uVar7 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,0,0);
  param_1[0xe4] = uVar7;
  uVar7 = DAT_146868c98;
  uVar6 = FUN_1430a9310();
  lVar8 = FUN_141752410(param_1,uVar7,uVar6,uVar6,1,0,0);
  FUN_1423bc010(param_1[0xde],0x41200000,1);
  (**(code **)(*(longlong *)param_1[0xde] + 0x838))((longlong *)param_1[0xde],0);
  (**(code **)(*(longlong *)param_1[0xde] + 0x830))((longlong *)param_1[0xde],2,1);
  pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AGrenadeHealingProjectile::OnOverlapActor",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res10,pwVar4 + 2,1);
  lVar2 = param_1[0xde];
  plVar13 = (longlong *)(lVar2 + 0x570);
  FWeakObjectPtr::operator=(&local_38,0);
  local_30 = 0;
  FWeakObjectPtr::operator=(&local_38,param_1);
  local_30 = local_res10;
  if ((local_res10 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_38), lVar10 != 0)) {
    UObject::FindFunction(lVar10,local_30);
  }
  piVar11 = (int *)*plVar13;
  iVar1 = *(int *)(lVar2 + 0x578);
  piVar12 = piVar11;
  do {
    if (piVar12 == piVar11 + (longlong)iVar1 * 4) {
LAB_140b153d4:
      iVar1 = *(int *)(lVar2 + 0x578);
      *(int *)(lVar2 + 0x578) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x57c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar1);
      }
      piVar11 = (int *)((longlong)iVar1 * 0x10 + *plVar13);
      *piVar11 = local_38;
      piVar11[1] = local_34;
      *(longlong *)(piVar11 + 2) = local_30;
LAB_140b1540d:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
      *(undefined4 *)(param_1[0xdd] + 0x17c) = 0x42480000;
      *(undefined1 *)(param_1[0xdd] + 0x180) = 1;
      *(undefined4 *)(param_1[0xdd] + 0x184) = 0x44160000;
      *(undefined4 *)(param_1[0xdd] + 0x188) = 0x41200000;
      *(undefined4 *)(param_1[0xdd] + 0x18c) = 0x43480000;
      *(undefined4 *)(param_1[0xdd] + 0x198) = 0x40000000;
      FUN_142399e30(param_1[0xe4],param_1[0x2d],0);
      *(uint *)(lVar8 + 0x1c8) = *(uint *)(lVar8 + 0x1c8) | 1;
      *(undefined4 *)(lVar8 + 0x1c0) = 0x43fa0000;
      *(undefined4 *)(lVar8 + 0x1c4) = 0x44fa0000;
      *(undefined4 *)(lVar8 + 0x1dc) = 0;
      *(undefined4 *)(lVar8 + 0x194) = 0x3e19999a;
      return param_1;
    }
    if ((((*piVar12 == local_38) && (piVar12[1] == local_34)) ||
        ((cVar5 = FWeakObjectPtr::IsValid(piVar12), cVar5 == '\0' &&
         (cVar5 = FWeakObjectPtr::IsValid(&local_38), cVar5 == '\0')))) &&
       (*(longlong *)(piVar12 + 2) == local_30)) {
      if ((int)((longlong)piVar12 - (longlong)piVar11 >> 4) != -1) goto LAB_140b1540d;
      goto LAB_140b153d4;
    }
    piVar12 = piVar12 + 4;
  } while( true );
}



// FUNCTION 140b154f0 FUN_140b154f0 body=471 status=ok
// SIG undefined FUN_140b154f0(void)

undefined8 * FUN_140b154f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_140b158e0();
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *param_1 = &PTR_FUN_1442a23d0;
  *(undefined4 *)(param_1 + 0x9b) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x9c) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x4e4) = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9e) = 0x3f800000;
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x4f4);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0xa0);
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined4 *)(param_1 + 0xa9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0xae);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x57c);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0xb1);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0xb3);
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  uVar2 = DAT_146868fd0;
  uVar1 = FUN_142a07000();
  uVar2 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,0,0);
  param_1[0x99] = uVar2;
  param_1[0x2d] = uVar2;
  uVar2 = DAT_146868fd8;
  uVar1 = FUN_142a232e0();
  uVar2 = FUN_141752410(param_1,uVar2,uVar1,uVar1,1,0,0);
  param_1[0x9a] = uVar2;
  FUN_142399e30(uVar2,param_1[0x2d],0);
  param_1[0xad] = 0;
  *(undefined4 *)((longlong)param_1 + 0x594) = 0x47127c00;
  FUN_14246fd50(param_1 + 0xb1,0x3f333333);
  return param_1;
}



// FUNCTION 140b156d0 FUN_140b156d0 body=166 status=ok
// SIG undefined FUN_140b156d0(void)

undefined8 * FUN_140b156d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__1442a6870;
  *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) & 0xfe;
  param_1[0x8b] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxActionComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142e27720();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x95] = uVar3;
  return param_1;
}



// FUNCTION 140b15780 FUN_140b15780 body=175 status=ok
// SIG undefined FUN_140b15780(void)

undefined8 * FUN_140b15780(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  FUN_140b158e0();
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfb;
  *param_1 = &PTR_FUN_1442a79b8;
  *(undefined2 *)(param_1 + 0x8f) = 0x101;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ItemMesh",1);
  uVar1 = *puVar2;
  uVar3 = FUN_142a232e0();
  plVar4 = (longlong *)FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x94] = plVar4;
  (**(code **)(*plVar4 + 0x638))(plVar4,0);
  *(byte *)(param_1[0x94] + 0x2f0) = *(byte *)(param_1[0x94] + 0x2f0) & 0xf7;
  param_1[0x2d] = param_1[0x94];
  return param_1;
}



// FUNCTION 140b15830 FUN_140b15830 body=102 status=ok
// SIG undefined FUN_140b15830(void)

undefined8 * FUN_140b15830(undefined8 *param_1)

{
  FUN_140b159d0();
  *(undefined1 *)((longlong)param_1 + 0x6d4) = 0;
  *param_1 = &PTR_FUN_1442a89c0;
  param_1[0xcc] = &PTR_LAB_1442a9248;
  param_1[0xcd] = &PTR_LAB_1442a9270;
  param_1[0xce] = &PTR_LAB_1442a9290;
  *(undefined4 *)(param_1 + 0xe5) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x72c) = 0xc47a0000;
  return param_1;
}



// FUNCTION 140b158a0 FUN_140b158a0 body=63 status=ok
// SIG undefined FUN_140b158a0(void)

undefined8 * FUN_140b158a0(undefined8 *param_1)

{
  FUN_140b158e0();
  *param_1 = &PTR_FUN_1442a19e8;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  return param_1;
}



// FUNCTION 140b158e0 FUN_140b158e0 body=226 status=ok
// SIG undefined FUN_140b158e0(void)

undefined8 * FUN_140b158e0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__1442a12e0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  FText::FText(param_1 + 0x90);
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"[red]INVENTORY FULL[/red]",L"InventoryItem",L"InventoryFull");
  FText::operator=(param_1 + 0x90,uVar5);
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
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 1;
  *(undefined2 *)(param_1 + 0x8f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x129) = 2;
  return param_1;
}



// FUNCTION 140b159d0 FUN_140b159d0 body=470 status=ok
// SIG undefined FUN_140b159d0(void)

undefined8 * FUN_140b159d0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_res18 [8];
  undefined1 local_38 [8];
  longlong *local_30;
  
  FUN_142fddc40();
  *(undefined4 *)(param_1 + 0xcf) = 0x40000000;
  *param_1 = &PTR__scalar_deleting_destructor__1442a80c8;
  param_1[0xcc] = &PTR_LAB_1442a8950;
  param_1[0xcd] = &PTR_LAB_1442a8978;
  param_1[0xce] = &PTR_LAB_1442a8998;
  param_1[0xd6] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  *(byte *)((longlong)param_1 + 0x6b9) = *(byte *)((longlong)param_1 + 0x6b9) | 3;
  *(undefined1 *)(param_1 + 0xe4) = 4;
  *(undefined4 *)(param_1 + 0xda) = 0x40000000;
  *(undefined1 *)((longlong)param_1 + 0x67c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x6d6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6ba) = 0;
  *(undefined4 *)(param_1 + 0x96) = 0x457a0000;
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_38,L"[red]INVENTORY FULL[/red]",L"InventoryItem",L"InventoryFull");
  FText::operator=(param_1 + 0xa8,uVar5);
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
  puVar6 = (undefined8 *)FName::FName(local_res18,L"LootBeamComponent",1);
  uVar5 = *puVar6;
  uVar7 = AGFreezeCharacterCue::GetPrivateStaticClass();
  uVar5 = FUN_141789050(param_2,param_1,uVar5,uVar7,uVar7,1,0,0);
  param_1[0xd9] = uVar5;
  FUN_142397000(uVar5,0,1);
  FUN_142399e30(param_1[0xd9],param_1[0xa6],0);
  *(byte *)(param_1[0xd9] + 0xba) = *(byte *)(param_1[0xd9] + 0xba) & 0xfd;
  return param_1;
}



// FUNCTION 140b15bb0 FUN_140b15bb0 body=110 status=ok
// SIG undefined FUN_140b15bb0(void)

undefined8 * FUN_140b15bb0(undefined8 *param_1)

{
  FUN_140b159d0();
  *(undefined4 *)(param_1 + 0xda) = 0x40000000;
  *param_1 = &PTR__scalar_deleting_destructor__1442a80c8;
  param_1[0xcc] = &PTR_LAB_1442a8950;
  param_1[0xcd] = &PTR_LAB_1442a8978;
  param_1[0xce] = &PTR_LAB_1442a8998;
  *(undefined1 *)((longlong)param_1 + 0x67c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x6d6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6ba) = 0;
  *(undefined1 *)(param_1 + 6) = 5;
  return param_1;
}



// FUNCTION 140b15c20 FUN_140b15c20 body=184 status=ok
// SIG undefined FUN_140b15c20(void)

undefined8 * FUN_140b15c20(undefined8 *param_1)

{
  FUN_140b159d0();
  *param_1 = &PTR_FUN_1442aac10;
  param_1[0xcc] = &PTR_LAB_1442ab498;
  param_1[0xcd] = &PTR_LAB_1442ab4c0;
  param_1[0xce] = &PTR_LAB_1442ab4e0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  *(undefined1 *)(param_1 + 0xea) = 1;
  param_1[0xed] = 0;
  param_1[0xee] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xed,0);
  FGenericPlatformString::Memcpy(param_1[0xed],L"\'#9146ff\'",0x14);
  return param_1;
}



// FUNCTION 140b15ce0 FUN_140b15ce0 body=405 status=ok
// SIG undefined FUN_140b15ce0(void)

undefined8 * FUN_140b15ce0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  
  uVar1 = FUN_14178c940();
  FUN_140b158e0(param_1,uVar1);
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *param_1 = &PTR_FUN_1442a9598;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x98);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x4cc);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x9b);
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x544) = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb5] = 0;
  param_1[0xbc] = 0;
  uVar1 = DAT_1468690a8;
  uVar2 = FUN_142a07000();
  uVar1 = FUN_141752410(param_1,uVar1,uVar2,uVar2,1,0,0);
  param_1[0x9d] = uVar1;
  param_1[0x2d] = uVar1;
  param_1[0xb8] = 0;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"AudioComponent",1);
  uVar1 = *puVar3;
  uVar2 = AUGDoor::GetPrivateStaticClass();
  uVar1 = FUN_141752410(param_1,uVar1,uVar2,uVar2,1,0,0);
  param_1[0xb7] = uVar1;
  local_res8 = 0;
  FUN_142399e30(uVar1,param_1[0x2d],0);
  *(undefined1 *)(param_1 + 0xbb) = 0;
  return param_1;
}



// FUNCTION 140b15e80 FUN_140b15e80 body=48 status=ok
// SIG undefined FUN_140b15e80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b15e80(undefined8 *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0xc) = 1;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 4) = DAT_1468b5d98;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 140b15ed0 FUN_140b15ed0 body=42 status=ok
// SIG undefined FUN_140b15ed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b15ed0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x24) = DAT_1468b5d98;
  return param_1;
}



// FUNCTION 140b15f00 FUN_140b15f00 body=43 status=ok
// SIG undefined FUN_140b15f00(void)

undefined2 * FUN_140b15f00(undefined2 *param_1)

{
  *param_1 = 0;
  FWeakObjectPtr::operator=(param_1 + 2,0);
  FUN_142d979c0(param_1 + 8);
  return param_1;
}



// FUNCTION 140b15f30 FUN_140b15f30 body=44 status=ok
// SIG undefined FUN_140b15f30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_140b15f30(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = _DAT_1468b5d90;
  param_1[6] = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 140b15f60 FCachedPropertyPath body=24 status=ok
// SIG undefined FCachedPropertyPath(void)

undefined8 * FCachedPropertyPath::FCachedPropertyPath(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 140b15f80 FUN_140b15f80 body=58 status=ok
// SIG undefined FUN_140b15f80(void)

undefined8 * FUN_140b15f80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142c8d050(param_1,uVar1);
  *param_1 = &PTR_FUN_1442a20f0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return param_1;
}



// FUNCTION 140b15fc0 FUN_140b15fc0 body=159 status=ok
// SIG undefined FUN_140b15fc0(void)

undefined8 * FUN_140b15fc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  FUN_140aece00();
  *param_1 = &PTR_FUN_1442a3370;
  *(undefined4 *)(param_1 + 9) = 0x44548000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3fc00000;
  FUN_142c8c260(&local_48,0x40000000);
  iVar2 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar2);
  }
  lVar3 = param_1[5];
  lVar4 = (longlong)iVar2 * 0x38;
  *(undefined8 *)(lVar4 + lVar3) = local_48;
  ((undefined8 *)(lVar4 + lVar3))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar3);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar3);
  *puVar1 = local_28;
  puVar1[1] = uStack_20;
  *(undefined8 *)(lVar4 + 0x30 + lVar3) = local_18;
  return param_1;
}



// FUNCTION 140b16060 FUN_140b16060 body=366 status=ok
// SIG undefined FUN_140b16060(void)

undefined8 * FUN_140b16060(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140aece00();
  *param_1 = &PTR_FUN_1442a3648;
  *(undefined4 *)(param_1 + 9) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x420c0000;
  *(undefined4 *)(param_1 + 10) = 0x44548000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x3fc00000;
  FUN_142c8c260(&local_48,0x40400000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x40c00000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x41100000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar4);
  *puVar1 = CONCAT44(uStack_24,local_28);
  puVar1[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  *(undefined2 *)(param_1 + 0xe) = 0x101;
  return param_1;
}



// FUNCTION 140b161d0 FUN_140b161d0 body=384 status=ok
// SIG undefined FUN_140b161d0(void)

undefined8 * FUN_140b161d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  FUN_140aece00();
  *param_1 = &PTR_FUN_1442a6598;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_142c8c260(&local_58,0);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_58;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_50;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_38;
  puVar2[1] = uStack_34;
  puVar2[2] = uStack_30;
  puVar2[3] = uStack_2c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_28;
  FUN_142c8c260(&local_58,0);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_58;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_50;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_38;
  puVar2[1] = uStack_34;
  puVar2[2] = uStack_30;
  puVar2[3] = uStack_2c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_28;
  FUN_142c8c260(&local_58,0x3e4ccccd);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_58;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_50;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar4);
  *puVar1 = CONCAT44(uStack_34,local_38);
  puVar1[1] = CONCAT44(uStack_2c,uStack_30);
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_28;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x42c80000;
  return param_1;
}



// FUNCTION 140b16350 FUN_140b16350 body=345 status=ok
// SIG undefined FUN_140b16350(void)

undefined8 * FUN_140b16350(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140aece00();
  *param_1 = &PTR__scalar_deleting_destructor__1442a3bf8;
  *(undefined4 *)(param_1 + 9) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3e800000;
  FUN_142c8c260(&local_48,0x40000000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x40400000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x40a00000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar4);
  *puVar1 = CONCAT44(uStack_24,local_28);
  puVar1[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  return param_1;
}



// FUNCTION 140b164b0 FUN_140b164b0 body=387 status=ok
// SIG undefined FUN_140b164b0(void)

undefined8 * FUN_140b164b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140aece00();
  *param_1 = &PTR_FUN_1442a3920;
  *(undefined4 *)(param_1 + 9) = 0x43c80000;
  *(undefined4 *)(param_1 + 0xb) = 0x451c4000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x451c4000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f333333;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f400000;
  *(undefined4 *)(param_1 + 0xd) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0xe) = 0x41200000;
  FUN_142c8c260(&local_48,0x40000000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x40800000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x40c00000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar4);
  *puVar1 = CONCAT44(uStack_24,local_28);
  puVar1[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  return param_1;
}



// FUNCTION 140b16640 FUN_140b16640 body=331 status=ok
// SIG undefined FUN_140b16640(void)

undefined8 * FUN_140b16640(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140aece00();
  *param_1 = &PTR_FUN_1442a3ed0;
  FUN_142c8c260(&local_48,0x3f933333);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3fa66666);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3fb9999a);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar4);
  *puVar1 = CONCAT44(uStack_24,local_28);
  puVar1[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  return param_1;
}



// FUNCTION 140b16790 FUN_140b16790 body=647 status=ok
// SIG undefined FUN_140b16790(void)

undefined8 * FUN_140b16790(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140aece00();
  *param_1 = &PTR_FUN_1442a4b20;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x44834000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3faccccd;
  *(undefined4 *)(param_1 + 0xe) = 0x44160000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x42c80000;
  FUN_142c8c260(&local_48,0x3f8ccccd);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3f933333);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3f99999a);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3f800000);
  iVar3 = *(int *)(param_1 + 10);
  *(int *)(param_1 + 10) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x54) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 9,iVar3);
  }
  lVar4 = param_1[9];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x40000000);
  iVar3 = *(int *)(param_1 + 10);
  *(int *)(param_1 + 10) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x54) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 9,iVar3);
  }
  lVar4 = param_1[9];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x40800000);
  iVar3 = *(int *)(param_1 + 10);
  *(int *)(param_1 + 10) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x54) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 9,iVar3);
  }
  lVar4 = param_1[9];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar4);
  *puVar1 = CONCAT44(uStack_24,local_28);
  puVar1[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  return param_1;
}



// FUNCTION 140b16a20 FUN_140b16a20 body=393 status=ok
// SIG undefined FUN_140b16a20(void)

undefined8 * FUN_140b16a20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140aece00();
  *(undefined4 *)(param_1 + 9) = 0x3f000000;
  *param_1 = &PTR_FUN_1442a4df8;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0x11;
  FName::FName(param_1 + 0xb,L"Diameter",1);
  *(undefined4 *)(param_1 + 0xc) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x43000000;
  *(undefined4 *)(param_1 + 0xd) = 0x43c80000;
  param_1[0xf] = 0;
  FUN_142c8c260(&local_48,0x3e800000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3f800000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x40000000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar4);
  *puVar1 = CONCAT44(uStack_24,local_28);
  puVar1[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  return param_1;
}



// FUNCTION 140b16bb0 FUN_140b16bb0 body=349 status=ok
// SIG undefined FUN_140b16bb0(void)

undefined8 * FUN_140b16bb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_140aece00();
  *param_1 = &PTR__scalar_deleting_destructor__1442a50d0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_142c8c260(&local_48,0x3e99999a);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3f19999a);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar4);
  *puVar2 = local_28;
  puVar2[1] = uStack_24;
  puVar2[2] = uStack_20;
  puVar2[3] = uStack_1c;
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  FUN_142c8c260(&local_48,0x3f800000);
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 5,iVar3);
  }
  lVar4 = param_1[5];
  lVar5 = (longlong)iVar3 * 0x38;
  *(undefined8 *)(lVar5 + lVar4) = local_48;
  ((undefined8 *)(lVar5 + lVar4))[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar4);
  *puVar1 = CONCAT44(uStack_24,local_28);
  puVar1[1] = CONCAT44(uStack_1c,uStack_20);
  *(undefined8 *)(lVar5 + 0x30 + lVar4) = local_18;
  return param_1;
}



// FUNCTION 140b16d10 FUN_140b16d10 body=191 status=ok
// SIG undefined FUN_140b16d10(void)

undefined8 * FUN_140b16d10(undefined8 *param_1)

{
  FUN_142d521e0();
  *param_1 = &PTR_FUN_1442a6168;
  param_1[5] = &PTR_LAB_1442a6568;
  param_1[0x47] = 0;
  FName::FName(param_1 + 0x4b,L"TargetLocked",1);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x41c80000;
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x459c4000;
  *(undefined4 *)(param_1 + 0x31) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x42480000;
  *(undefined4 *)(param_1 + 0x32) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x49) = 0x3f800000;
  return param_1;
}



// FUNCTION 140b16dd0 FUN_140b16dd0 body=102 status=ok
// SIG undefined FUN_140b16dd0(void)

undefined8 * FUN_140b16dd0(undefined8 *param_1)

{
  FUN_142fded40();
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *param_1 = &PTR_FUN_1442a5be0;
  param_1[5] = &PTR_LAB_1442a6120;
  param_1[0x2f] = &PTR_LAB_1442a6150;
  return param_1;
}



// FUNCTION 140b16e40 FUN_140b16e40 body=368 status=ok
// SIG undefined FUN_140b16e40(void)

undefined8 * FUN_140b16e40(undefined8 *param_1)

{
  FUN_142fdf320();
  *param_1 = &PTR_FUN_1442a71e0;
  param_1[5] = &PTR_LAB_1442a76b8;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0x3f800000;
  param_1[0x7a] = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x92) = 0x44fa0000;
  return param_1;
}



// FUNCTION 140b16fb0 FUN_140b16fb0 body=37 status=ok
// SIG undefined FUN_140b16fb0(void)

undefined8 * FUN_140b16fb0(undefined8 *param_1)

{
  FUN_142d982f0();
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffff3;
  *param_1 = &PTR_FUN_1442a6f58;
  return param_1;
}



// FUNCTION 140b16fe0 FUN_140b16fe0 body=102 status=ok
// SIG undefined FUN_140b16fe0(void)

undefined8 * FUN_140b16fe0(undefined8 *param_1)

{
  FUN_142fded40();
  *param_1 = &PTR_FUN_1442a5be0;
  param_1[5] = &PTR_LAB_1442a6120;
  param_1[0x2f] = &PTR_LAB_1442a6150;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  return param_1;
}



// FUNCTION 140b17050 _Order_node_base<Concurrency::agent_status> body=70 status=ok
// SIG undefined _Order_node_base<Concurrency::agent_status>(_Order_node_base<Concurrency::agent_status> * this)

/* Library Function - Single Match
    public: __cdecl Concurrency::_Order_node_base<enum
   Concurrency::agent_status>::_Order_node_base<enum Concurrency::agent_status>(void) __ptr64
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release, Visual Studio 2017 Release,
   Visual Studio 2019 Release */

_Order_node_base<Concurrency::agent_status> * __thiscall
Concurrency::_Order_node_base<Concurrency::agent_status>::
_Order_node_base<Concurrency::agent_status>(_Order_node_base<Concurrency::agent_status> *this)

{
  FUN_142fdef40();
  *(undefined ***)this = &PTR_FUN_1442a76e8;
  *(undefined ***)(this + 0x130) = &PTR_LAB_1442a79a0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  return this;
}



// FUNCTION 140b170a0 FUN_140b170a0 body=51 status=ok
// SIG undefined FUN_140b170a0(void)

undefined8 * FUN_140b170a0(undefined8 *param_1)

{
  FUN_142fdf320();
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) & 0xfffffffe;
  *param_1 = &PTR_FUN_1442613b0;
  param_1[5] = &PTR_LAB_1442618c8;
  return param_1;
}



// FUNCTION 140b170e0 FUN_140b170e0 body=200 status=ok
// SIG undefined FUN_140b170e0(void)

undefined8 * FUN_140b170e0(undefined8 *param_1)

{
  FUN_142326e40();
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *param_1 = &PTR_FUN_1442aa0f0;
  param_1[5] = &PTR_LAB_1442aa508;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x43c80000;
  *(undefined4 *)(param_1 + 0x4b) = 0x3f800000;
  return param_1;
}



// FUNCTION 140b171b0 FUN_140b171b0 body=153 status=ok
// SIG undefined FUN_140b171b0(void)

undefined8 * FUN_140b171b0(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_142326e40();
  *param_1 = &PTR_FUN_1442aa568;
  param_1[5] = &PTR_LAB_1442aa960;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0x3f800000;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x3f000000;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  FName::FName(local_res8,L"LootSpawnDirection",1);
  param_1[0x37] = local_res8[0];
  return param_1;
}



// FUNCTION 140b17250 UTextPropertyTestObject body=60 status=ok
// SIG undefined UTextPropertyTestObject(void)

undefined8 * UTextPropertyTestObject::UTextPropertyTestObject(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_1442aa990;
  FText::FText(param_1 + 6);
  FText::FText(param_1 + 9);
  FText::FText(param_1 + 0xc);
  return param_1;
}



// FUNCTION 140b17290 FUN_140b17290 body=58 status=ok
// SIG undefined FUN_140b17290(void)

undefined8 * FUN_140b17290(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142c8d050(param_1,uVar1);
  *param_1 = &PTR_FUN_1442a92b8;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return param_1;
}



// FUNCTION 140b172d0 FUN_140b172d0 body=270 status=ok
// SIG undefined FUN_140b172d0(void)

undefined8 * FUN_140b172d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_1423a0b90(param_1,uVar1);
  *param_1 = &PTR_FUN_1442a41a8;
  param_1[5] = &PTR_LAB_1442a4a98;
  param_1[0x5a] = &PTR_LAB_1442a4ac8;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xed] = 0x459c4000;
  *(undefined4 *)((longlong)param_1 + 0x774) = 0;
  param_1[0xef] = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x784) = 0x42480000;
  *(undefined4 *)(param_1 + 0xf1) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x78c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xf2) = 0x3ea8f5c3;
  *(undefined4 *)((longlong)param_1 + 0x794) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xf3) = 0x3f4ccccd;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 6;
  FUN_142717130(param_1,DAT_146868f20);
  FUN_1423974f0(param_1,1);
  *(undefined4 *)(param_1 + 0xe2) = 0x44898000;
  return param_1;
}



// FUNCTION 140b173e0 FUN_140b173e0 body=155 status=ok
// SIG undefined FUN_140b173e0(void)

void FUN_140b173e0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar4 = (longlong *)(lVar1 + 0x48);
    do {
      iVar5 = (int)plVar4[1];
      lVar1 = *plVar4;
      if (iVar5 != 0) {
        plVar2 = (longlong *)(lVar1 + 0x48);
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 0xb;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        lVar1 = *plVar4;
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 0xb;
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



// FUNCTION 140b17480 FUN_140b17480 body=76 status=ok
// SIG undefined FUN_140b17480(void)

void FUN_140b17480(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140b174d0 FUN_140b174d0 body=119 status=ok
// SIG undefined FUN_140b174d0(void)

void FUN_140b174d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  FUN_140b173e0(param_1 + 0x1e0);
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 140b17550 operator= body=373 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<INavLinkCustomInterface_*,FWeakObjectPtr>,TDefaultMapHashableKeyFuncs<INavLinkCustomInterface_*,FWeakObjectPtr,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  undefined1 local_res8 [8];
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
    ::Empty(param_1,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
    iVar1 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    uStack_40 = 0;
    local_48._4_4_ = 0;
    if (iVar1 != 0) {
      puVar6 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar6 = puStack_20;
      }
      uVar2 = *puVar6;
      local_58 = 0;
      uStack_40 = 0;
      while (uVar2 == 0) {
        lVar4 = (longlong)local_58;
        uStack_40 = uStack_40 + 0x20;
        iVar5 = local_58 + 1;
        bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar5;
        if (bVar3) goto LAB_140b1762d;
        uVar2 = puVar6[lVar4 + 1];
      }
      uStack_54 = -uVar2 & uVar2;
      iVar5 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_48._4_4_ = (uStack_40 - iVar5) + 0x1f;
      if (iVar1 < local_48._4_4_) {
LAB_140b1762d:
        local_48._4_4_ = iVar1;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    iStack_10 = uStack_40;
    uStack_c = iStack_3c;
    iStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar5 = local_48._4_4_;
    iStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar3 = local_48._4_4_ < iVar1;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar5;
    if (bVar3) {
      do {
        TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
        ::Emplace<TTuple<UObject_*,FSparseItemInfo>_const_&>
                  (param_1,local_res8,*param_2 + (longlong)iStack_3c * 0x18,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 140b176d0 FUN_140b176d0 body=57 status=ok
// SIG undefined FUN_140b176d0(void)

void FUN_140b176d0(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return;
}



// FUNCTION 140b17710 FUN_140b17710 body=58 status=ok
// SIG undefined FUN_140b17710(void)

void FUN_140b17710(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_2 + 7);
  param_1[9] = param_2[9];
  return;
}



// FUNCTION 140b17750 FUN_140b17750 body=285 status=ok
// SIG undefined FUN_140b17750(void)

ulonglong FUN_140b17750(char *param_1,char *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  uVar2 = 0;
  if (*param_1 == *param_2) {
    puVar5 = &DAT_143f3eda8;
    if (*(int *)(param_2 + 0x70) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = *(undefined2 **)(param_2 + 0x68);
    }
    if (*(int *)(param_1 + 0x70) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = *(undefined2 **)(param_1 + 0x68);
    }
    uVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
    if ((int)uVar2 == 0) {
      uVar2 = FText::EqualTo(param_1 + 8,param_2 + 8,0);
      if ((char)uVar2 != '\0') {
        uVar2 = FText::EqualTo(param_1 + 0x20,param_2 + 0x20,0);
        if ((char)uVar2 != '\0') {
          uVar2 = FText::EqualTo(param_1 + 0x38,param_2 + 0x38,0);
          if ((char)uVar2 != '\0') {
            if (*(int *)(param_2 + 0x58) == 0) {
              puVar4 = &DAT_143f3eda8;
            }
            else {
              puVar4 = *(undefined2 **)(param_2 + 0x50);
            }
            if (*(int *)(param_1 + 0x58) != 0) {
              puVar5 = *(undefined2 **)(param_1 + 0x50);
            }
            uVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar4);
            if ((((int)uVar2 == 0) &&
                (uVar2 = *(ulonglong *)(param_2 + 0x78), *(ulonglong *)(param_1 + 0x78) == uVar2))
               && (uVar2 = *(ulonglong *)(param_2 + 0x80), *(ulonglong *)(param_1 + 0x80) == uVar2))
            {
              if (*param_1 == '\x02') {
                uVar2 = (**(code **)**(undefined8 **)(param_2 + 0x90))
                                  (*(undefined8 **)(param_2 + 0x90),*(undefined8 *)(param_1 + 0x90))
                ;
                if ((char)uVar2 == '\0') goto LAB_140b1785b;
              }
              uVar1 = *(uint *)(param_2 + 0x60);
              uVar2 = (ulonglong)uVar1;
              if (*(uint *)(param_1 + 0x60) == uVar1) {
                return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
              }
            }
          }
        }
      }
    }
  }
LAB_140b1785b:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140b17870 FUN_140b17870 body=1294 status=ok
// SIG undefined FUN_140b17870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b17870(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  void *_Dst;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined1 local_170;
  int local_168;
  int local_160;
  uint uStack_15c;
  uint *puStack_158;
  uint local_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  int iStack_120;
  uint uStack_11c;
  uint *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 uStack_f8;
  uint *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong local_d8 [10];
  longlong *local_88;
  undefined8 local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x848) == 0)) {
    return;
  }
  plVar6 = (longlong *)*param_1;
  iVar9 = (int)plVar6[1];
  lVar14 = (longlong)iVar9;
  *(int *)(plVar6 + 1) = iVar9 + 1;
  local_138 = param_1;
  if (*(int *)((longlong)plVar6 + 0xc) < iVar9 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar6,iVar9);
  }
  lVar7 = *plVar6;
  *(undefined8 *)(lVar7 + lVar14 * 0x18) = 0;
  *(undefined8 *)(lVar7 + 8 + lVar14 * 0x18) = 0;
  plVar6 = (longlong *)(lVar7 + lVar14 * 0x18);
  plVar6[2] = param_2;
  local_140 = FUN_140b81930(param_2,(int)param_1[1],*(undefined4 *)((longlong)param_1 + 0xc));
  iVar5 = (int)param_1[2];
  local_88 = (longlong *)0x0;
  local_80 = 0;
  iVar9 = (int)plVar6[1];
  local_168 = 0;
  bVar20 = SBORROW4(iVar9,iVar5);
  iVar13 = iVar9 - iVar5;
  bVar18 = iVar9 == iVar5;
  if (iVar9 < iVar5) {
    do {
      fVar22 = *(float *)(param_1 + 3);
      plVar11 = param_1 + 4;
      puVar1 = (uint *)(param_1 + 6);
      iVar9 = rand();
      uVar3 = *(uint *)(param_1 + 9);
      local_160 = 0;
      uStack_15c = 1;
      uStack_14c = 0;
      iStack_148 = 0;
      fVar22 = (float)iVar9 * 3.051851e-05 * fVar22;
      fVar21 = 0.0;
      if (uVar3 != 0) {
        puVar17 = (uint *)param_1[8];
        if ((uint *)param_1[8] == (uint *)0x0) {
          puVar17 = puVar1;
        }
        uVar4 = *puVar17;
        while (uVar4 == 0) {
          lVar14 = (longlong)local_160;
          iStack_148 = iStack_148 + 0x20;
          iVar9 = local_160 + 1;
          bVar18 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_160;
          local_160 = iVar9;
          if (bVar18) goto LAB_140b17a33;
          uVar4 = puVar17[lVar14 + 1];
        }
        uStack_15c = -uVar4 & uVar4;
        iVar9 = 0x1f;
        if (uStack_15c != 0) {
          for (; uStack_15c >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        if (uStack_15c == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        uStack_14c = (iStack_148 - iVar9) + 0x1f;
        if ((int)uVar3 < (int)uStack_14c) {
LAB_140b17a33:
          uStack_14c = uVar3;
        }
      }
      uVar4 = *(uint *)(param_1 + 9);
      uStack_110 = CONCAT44(uStack_14c,0xffffffff);
      local_108 = CONCAT44(uStack_144,iStack_148);
      uStack_f8 = CONCAT44(uStack_15c,local_160);
      local_150 = -1 << ((byte)uVar4 & 0x1f);
      uVar16 = uVar4 & 0xffffffe0;
      iStack_120 = local_160;
      uStack_11c = uStack_15c;
      puStack_158 = puVar1;
      uStack_14c = uVar4;
      local_118 = puVar1;
      local_100 = plVar11;
      puStack_f0 = puVar1;
      uStack_e8 = uStack_110;
      uStack_e0 = local_108;
      local_128 = plVar11;
      if (uVar4 != uVar3) {
        puVar17 = (uint *)param_1[8];
        if ((uint *)param_1[8] == (uint *)0x0) {
          puVar17 = puVar1;
        }
        uVar12 = puVar17[(int)uVar4 >> 5] & local_150;
        iVar9 = (int)uVar4 >> 5;
        while (uVar12 == 0) {
          uVar16 = uVar16 + 0x20;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
          goto LAB_140b17b07;
          uVar12 = puVar17[(longlong)iVar9 + 1];
          local_150 = 0xffffffff;
          iVar9 = iVar9 + 1;
        }
        uVar12 = -uVar12 & uVar12;
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
        uStack_14c = (uVar16 - iVar9) + 0x1f;
        uVar4 = uStack_14c;
        if ((int)uVar3 < (int)uStack_14c) {
LAB_140b17b07:
          uStack_14c = uVar3;
          uVar4 = uVar3;
        }
      }
      while( true ) {
        uVar8 = local_80;
        lVar14 = (longlong)(int)uStack_110._4_4_;
        if (((uStack_110._4_4_ == uVar4) && (local_118 == puVar1)) && (local_128 == plVar11))
        goto LAB_140b17bdd;
        lVar7 = *local_128;
        plVar10 = local_d8;
        if (local_88 != (longlong *)0x0) {
          plVar10 = local_88;
        }
        lVar15 = (longlong)(int)local_80;
        plVar2 = plVar10 + lVar15;
        if (plVar10 != plVar2) {
          do {
            if (*plVar10 == *(longlong *)(lVar7 + lVar14 * 0x18)) goto LAB_140b17b8d;
            plVar10 = plVar10 + 1;
          } while (plVar10 != plVar2);
        }
        if ((fVar21 <= fVar22) && (fVar22 <= fVar21 + *(float *)(lVar7 + 8 + lVar14 * 0x18))) break;
        fVar21 = fVar21 + *(float *)(lVar7 + 8 + lVar14 * 0x18);
LAB_140b17b8d:
        uStack_110 = CONCAT44(uStack_110._4_4_,(uint)uStack_110 & ~uStack_11c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_120);
      }
      iVar9 = (int)local_80 + 1;
      local_80 = CONCAT44(local_80._4_4_,iVar9);
      if (local_80._4_4_ < iVar9) {
        TArray<FPrimitiveSceneInfo_*,TInlineAllocator<10,TSizedDefaultAllocator<32>_>_>::ResizeGrow
                  (local_d8,uVar8 & 0xffffffff);
      }
      plVar11 = local_d8;
      if (local_88 != (longlong *)0x0) {
        plVar11 = local_88;
      }
      plVar11[lVar15] = *(longlong *)(lVar7 + lVar14 * 0x18);
LAB_140b17bdd:
      param_1 = local_138;
      iVar9 = (int)plVar6[1];
      iVar5 = (int)local_138[2];
      if ((int)local_80 - local_168 != 1) goto LAB_140b17c5a;
      local_170 = 1;
      plVar11 = local_d8;
      if (local_88 != (longlong *)0x0) {
        plVar11 = local_88;
      }
      local_178 = 0;
      local_180 = 0;
      local_188 = local_138[0xf];
      FUN_143013fe0(plVar6,plVar11[(int)local_80 + -1],local_140,local_138[0xe]);
      iVar5 = (int)param_1[2];
      iVar9 = (int)plVar6[1];
      if (iVar5 <= iVar9) goto LAB_140b17c5a;
      local_168 = (int)local_80;
    } while( true );
  }
LAB_140b17c85:
  bVar19 = iVar13 < 0;
  if (!bVar18 && bVar20 == bVar19) {
    if (bVar20 == bVar19) {
      if (!bVar18 && bVar20 == bVar19) {
        FUN_140b3c970(plVar6,iVar5,iVar9 - iVar5,0);
      }
    }
    else {
      *(int *)(plVar6 + 1) = iVar5;
      iVar13 = iVar5 - iVar9;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar5) {
        TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(plVar6);
      }
      _Dst = (void *)((longlong)iVar9 * 0x60 + *plVar6);
      if (iVar13 != 0) {
        lVar14 = (longlong)_Dst + 0x44;
        do {
          *(undefined8 *)(lVar14 + -0x24) = 0;
          *(undefined8 *)(lVar14 + -0x1c) = 0;
          *(undefined1 *)(lVar14 + -0x14) = 0;
          *(undefined8 *)(lVar14 + -0xc) = 0;
          *(undefined8 *)(lVar14 + -4) = 0;
          *(undefined8 *)(lVar14 + 4) = 0;
          *(undefined8 *)(lVar14 + 0xc) = 0;
          _guard_xfg_dispatch_icall_nop(_Dst,0,0x60);
          _Dst = (void *)((longlong)_Dst + 0x60);
          *(undefined2 *)(lVar14 + 0x14) = 1;
          lVar14 = lVar14 + 0x60;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
  }
  local_138 = (longlong *)*plVar6;
  _uStack_130 = CONCAT44(uStack_12c,(int)plVar6[1]);
  AK::MemoryMgr::StartProfileThreadUsage(0x442aa538);
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
LAB_140b17c5a:
  bVar20 = SBORROW4(iVar9,iVar5);
  iVar13 = iVar9 - iVar5;
  bVar18 = iVar9 == iVar5;
  goto LAB_140b17c85;
}



// FUNCTION 140b17d80 FUN_140b17d80 body=1125 status=ok
// SIG undefined FUN_140b17d80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b17d80(float *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined8 local_98;
  float local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [112];
  
  lVar4 = (**(code **)(*param_2 + 0xa0))(param_2,local_78);
  local_b8 = *param_1 - *(float *)(lVar4 + 0x10);
  fStack_b4 = param_1[1] - *(float *)(lVar4 + 0x14);
  lVar5 = *(longlong *)(param_1 + 4);
  local_b0 = param_1[2] - *(float *)(lVar4 + 0x18);
  uVar10 = *(uint *)(lVar5 + 0x230) & _DAT_146868c20;
  uVar12 = *(uint *)(lVar5 + 0x234) & uRam0000000146868c24;
  uVar13 = *(uint *)(lVar5 + 0x238) & uRam0000000146868c28;
  uVar14 = *(uint *)(lVar5 + 0x23c) & uRam0000000146868c2c;
  auVar8._4_4_ = uVar12;
  auVar8._0_4_ = uVar10;
  auVar8._8_4_ = uVar13;
  auVar8._12_4_ = uVar14;
  auVar9._4_4_ = uVar13;
  auVar9._0_4_ = uVar12;
  auVar9._8_4_ = uVar10;
  auVar9._12_4_ = uVar14;
  auVar9 = minps(auVar8,auVar9);
  fVar16 = SQRT(fStack_b4 * fStack_b4 + local_b8 * local_b8 + local_b0 * local_b0);
  auVar3._4_4_ = uVar10;
  auVar3._0_4_ = uVar13;
  auVar3._8_4_ = uVar12;
  auVar3._12_4_ = uVar14;
  auVar9 = minps(auVar9,auVar3);
  if (fVar16 <= auVar9._0_4_ * *(float *)(lVar5 + 0x710)) {
    FVector::Rotation(&local_b8,local_88);
    if (*(float *)(*(longlong *)(param_1 + 4) + 0x788) <= fVar16) {
      fVar16 = (float)(**(code **)(*param_2 + 0x100))(param_2);
      if (fVar16 <= 0.0001) {
        lVar5 = *(longlong *)(param_1 + 4);
        fVar16 = *(float *)(lVar5 + 0x794);
      }
      else {
        fVar16 = (float)(**(code **)(*param_2 + 0x100))(param_2);
        lVar5 = *(longlong *)(param_1 + 4);
      }
      fVar11 = local_b8 * local_b8 + fStack_b4 * fStack_b4 + local_b0 * local_b0;
      fVar15 = local_b8;
      fVar6 = fStack_b4;
      fVar7 = local_b0;
      if ((fVar11 != 1.0) &&
         (fVar15 = DAT_1468b5d90, fVar6 = DAT_1468b5d94, fVar7 = DAT_1468b5d98, 1e-08 <= fVar11)) {
        auVar9 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
        fVar7 = auVar9._0_4_;
        fVar7 = fVar7 + fVar7 * (0.5 - fVar11 * 0.5 * fVar7 * fVar7);
        fVar7 = fVar7 + fVar7 * (0.5 - fVar11 * 0.5 * fVar7 * fVar7);
        fVar15 = fVar7 * local_b8;
        fVar6 = fVar7 * fStack_b4;
        fVar7 = fVar7 * local_b0;
      }
      fVar11 = *(float *)(lVar5 + 0x768);
      fVar1 = *(float *)(lVar5 + 0x794);
      fVar2 = param_1[6];
      fVar16 = 1.0 / fVar16;
      local_b8 = fVar15 * fVar2 * fVar11 * fVar1 * fVar16;
      fStack_b4 = fVar6 * fVar2 * fVar11 * fVar1 * fVar16;
      local_b0 = fVar7 * fVar2 * fVar11 * fVar1 * fVar16;
      local_a8 = local_b8;
      local_a4 = fStack_b4;
      local_a0 = local_b0;
    }
    else {
      local_98 = CONCAT44(fStack_b4,local_b8);
      local_90 = local_b0;
      FUN_140b1f500(*(longlong *)(param_1 + 4),&local_a8,&local_98,fVar16);
      fVar16 = (float)(**(code **)(*param_2 + 0x100))(param_2);
      if (fVar16 <= 0.0001) {
        lVar5 = *(longlong *)(param_1 + 4);
        fVar16 = *(float *)(lVar5 + 0x794);
      }
      else {
        fVar16 = (float)(**(code **)(*param_2 + 0x100))(param_2);
        lVar5 = *(longlong *)(param_1 + 4);
      }
      fVar11 = local_a8 * local_a8 + local_a4 * local_a4 + local_a0 * local_a0;
      fVar15 = local_a0;
      fVar6 = local_a8;
      fVar7 = local_a4;
      if ((fVar11 != 1.0) &&
         (fVar15 = DAT_1468b5d98, fVar6 = DAT_1468b5d90, fVar7 = DAT_1468b5d94, 1e-08 <= fVar11)) {
        auVar9 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
        fVar15 = auVar9._0_4_;
        fVar15 = fVar15 + fVar15 * (0.5 - fVar11 * 0.5 * fVar15 * fVar15);
        fVar15 = fVar15 + fVar15 * (0.5 - fVar11 * 0.5 * fVar15 * fVar15);
        fVar6 = fVar15 * local_a8;
        fVar7 = fVar15 * local_a4;
        fVar15 = fVar15 * local_a0;
      }
      fVar11 = param_1[6];
      fVar1 = *(float *)(lVar5 + 0x768);
      fVar2 = *(float *)(lVar5 + 0x794);
      fVar16 = 1.0 / fVar16;
      local_a8 = fVar11 * fVar6 * fVar1 * fVar2 * fVar16;
      local_a4 = fVar11 * fVar7 * fVar1 * fVar2 * fVar16;
      local_a0 = fVar15 * fVar11 * fVar1 * fVar2 * fVar16;
    }
    (**(code **)(*param_2 + 0x148))(param_2,&local_a8,0,1);
  }
  return;
}



// FUNCTION 140b181f0 FUN_140b181f0 body=1423 status=ok
// SIG undefined FUN_140b181f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b181f0(longlong param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_238 [32];
  uint local_218;
  undefined8 **local_210;
  undefined4 local_208;
  byte *local_200;
  undefined1 local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  float local_1d0;
  longlong *local_1c8;
  int local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  undefined8 local_188 [2];
  undefined8 local_178;
  undefined8 uStack_170;
  byte local_168 [12];
  undefined4 local_15c;
  undefined4 local_154;
  undefined4 local_150;
  float local_14c;
  undefined8 local_d8;
  longlong lStack_d0;
  undefined1 local_c8 [16];
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  lVar4 = FWeakObjectPtr::Get();
  if (lVar4 == 0) {
    return;
  }
  lVar4 = param_1 + 8;
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    return;
  }
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (*(char *)(lVar5 + 0x75d) != '\0') {
    return;
  }
  lVar5 = FWeakObjectPtr::Get((undefined4 *)(param_1 + 0x10));
  if (lVar5 == 0) {
    return;
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x18);
  if (lVar5 == 0) {
    return;
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x20);
  if (lVar5 == 0) {
    return;
  }
  local_1d8 = (undefined4)*(undefined8 *)(param_1 + 0x28);
  uStack_1d4 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  local_1d0 = *(float *)(param_1 + 0x30) + *(float *)(*(longlong *)(param_1 + 0x38) + 0x70);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  local_198 = (undefined8 *)0x0;
  local_190 = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_198);
  *local_198 = uVar6;
  _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
  local_15c = 0x3f800000;
  local_1b0 = local_1d0;
  local_1a0 = *(undefined4 *)(param_1 + 0x30);
  local_178 = _DAT_1464aa700;
  uStack_170 = uRam00000001464aa708;
  local_1b8 = CONCAT44(uStack_1d4,local_1d8);
  local_d8 = _DAT_1464aa6f0;
  lStack_d0 = uRam00000001464aa6f8;
  uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x58);
  local_1a8 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x148))();
  local_1e0 = 0x40a00000;
  local_1e8 = &local_178;
  local_1f0 = &local_d8;
  local_200 = local_168;
  local_1f8 = 1;
  local_210 = &local_198;
  local_208 = 0;
  local_218 = local_218 & 0xffffff00;
  FUN_14252f0f0(uVar6,&local_1a8,&local_1b8,uVar1);
  if ((local_168[0] & 1) != 0) {
    local_1d8 = local_154;
    uStack_1d4 = local_150;
    local_1d0 = local_14c - *(float *)(*(longlong *)(param_1 + 0x38) + 0x74);
  }
  local_218 = CONCAT31(local_218._1_3_,1);
  FUN_14223c850(*(undefined8 *)(param_1 + 0x40),&local_1d8,0,0);
  lVar5 = *(longlong *)(param_1 + 0x48);
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b8 = CONCAT44(uStack_1d4,local_1d8);
  local_1b0 = local_1d0;
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x148))();
  local_210 = (undefined8 **)&local_1a8;
  local_218 = 0x42480000;
  FUN_1405a1e30(&local_d8,uVar6,*(undefined8 *)(lVar5 + 0x68),&local_1b8);
  FUN_140591060(&local_d8);
  local_b8 = _DAT_146868b90 & _DAT_146868ba0;
  uStack_b4 = uRam0000000146868b94 & uRam0000000146868ba4;
  uStack_b0 = uRam0000000146868b98 & uRam0000000146868ba8;
  uStack_ac = uRam0000000146868b9c & uRam0000000146868bac;
  lVar5 = *(longlong *)(param_1 + 0x48);
  local_c8._4_4_ = uStack_1d4;
  local_c8._0_4_ = local_1d8;
  local_c8._8_4_ = local_1d0;
  local_d8 = 0;
  lStack_d0 = (ulonglong)uRam0000000146868b9c << 0x20;
  local_c8._12_4_ = 0;
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x148))();
  local_210 = (undefined8 **)0x0;
  local_218 = CONCAT31(local_218._1_3_,1);
  FUN_14245f910(uVar6,*(undefined8 *)(lVar5 + 0x80),&local_d8,1);
  lVar5 = *(longlong *)(param_1 + 0x50);
  local_1a0 = 0;
  *(undefined8 *)(lVar5 + 0x18c) = 0;
  *(undefined4 *)(lVar5 + 0x194) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x450))
            (*(longlong **)(param_1 + 0x50),*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x168));
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  local_188[0] = 0;
  local_1c8 = (longlong *)0x0;
  local_1c0 = 0;
  plVar7 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar7 == (longlong *)0x0) {
    if (((local_1c0 != 0) && (local_1c8 != (longlong *)0x0)) &&
       ((**(code **)(*local_1c8 + 0x28))(local_1c8,0), local_1c8 != (longlong *)0x0)) {
      local_1c8 = (longlong *)FMemory::Realloc(local_1c8,0,0);
    }
  }
  else {
    *plVar7 = (longlong)&PTR_GetPoolName_1442ab9c8;
    *(undefined4 *)(plVar7 + 1) = uVar2;
    *(undefined4 *)((longlong)plVar7 + 0xc) = uVar3;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar7[3] = lVar5;
    *plVar7 = (longlong)&PTR_GetPoolName_1442aba10;
    TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
    ::CreateCopy(plVar7,&local_1c8);
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    lVar5 = FMemory::Realloc(plVar7,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  plVar7 = (longlong *)FWeakObjectPtr::Get(lVar4);
  lVar4 = (**(code **)(*plVar7 + 0x148))(plVar7);
  if (*(longlong *)(lVar4 + 400) == 0) {
    uVar6 = *(undefined8 *)(lVar4 + 0x3f8);
  }
  else {
    uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
  }
  local_a8 = 0;
  local_a0 = 0;
  if ((local_1c0 != 0) && (local_1c8 != (longlong *)0x0)) {
    (**(code **)(*local_1c8 + 0x30))(local_1c8,&local_a8);
  }
  FWeakObjectPtr::operator=(local_98,0);
  local_210 = (undefined8 **)CONCAT44(local_210._4_4_,0xbf800000);
  local_218 = local_218 & 0xffffff00;
  local_90 = 0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar6,local_188,&local_a8,0x3dcccccd);
  if (local_48 != 0) {
    plVar7 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar7 = local_58;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
  if (local_1c0 != 0) {
    if (local_1c8 == (longlong *)0x0) goto LAB_140b18740;
    (**(code **)(*local_1c8 + 0x28))(local_1c8,0);
    if (local_1c8 != (longlong *)0x0) {
      local_1c8 = (longlong *)FMemory::Realloc(local_1c8,0,0);
    }
    local_1c0 = 0;
  }
  if (local_1c8 != (longlong *)0x0) {
    FMemory::Free(local_1c8);
  }
LAB_140b18740:
  if (local_198 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b18780 FUN_140b18780 body=124 status=ok
// SIG undefined FUN_140b18780(void)

bool FUN_140b18780(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *local_28;
  int local_20;
  undefined2 *local_18;
  int local_10;
  
  (**(code **)(*param_2 + 0x280))(param_2,&local_18);
  (**(code **)(*param_3 + 0x280))(param_3,&local_28);
  puVar3 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar3 = local_28;
  }
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return -1 < iVar1;
}



// FUNCTION 140b18800 FUN_140b18800 body=423 status=ok
// SIG undefined FUN_140b18800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140b18800(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_38;
  undefined8 local_28;
  
  lVar2 = *(longlong *)(*param_1 + 0x168);
  if (lVar2 == 0) {
    local_38 = _DAT_1468b5d90;
  }
  else {
    local_38 = *(undefined8 *)(lVar2 + 0x220);
  }
  uVar3 = local_38;
  if (*(longlong *)(param_2 + 0x168) == 0) {
    local_38 = _DAT_1468b5d90;
  }
  else {
    local_38 = *(undefined8 *)(*(longlong *)(param_2 + 0x168) + 0x220);
  }
  local_28._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  fVar7 = (float)((ulonglong)local_38 >> 0x20) - local_28._4_4_;
  local_28._0_4_ = (float)uVar3;
  fVar8 = (float)local_38 - (float)local_28;
  if (lVar2 == 0) {
    local_28 = _DAT_1468b5d90;
  }
  else {
    local_28 = *(undefined8 *)(lVar2 + 0x220);
  }
  uVar3 = local_28;
  if (*(longlong *)(param_3 + 0x168) == 0) {
    local_28 = _DAT_1468b5d90;
  }
  else {
    local_28 = *(undefined8 *)(*(longlong *)(param_3 + 0x168) + 0x220);
  }
  uVar4 = local_28;
  lVar2 = *(longlong *)(*param_1 + 0x4f0);
  fVar6 = (float)local_28;
  local_38._0_4_ = (float)uVar3;
  uVar1 = *(undefined8 *)(lVar2 + 0x18c);
  fVar5 = (float)((ulonglong)uVar1 >> 0x20);
  local_28._0_4_ = (float)uVar1;
  local_38._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),
                  ABS(fVar7 * fVar5 + fVar8 * (float)local_28) <
                  ABS((fVar6 - (float)local_38) * (float)local_28 +
                      ((float)((ulonglong)uVar4 >> 0x20) - local_38._4_4_) * fVar5));
}



// FUNCTION 140b189b0 FUN_140b189b0 body=1117 status=ok
// SIG undefined FUN_140b189b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b189b0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 *local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float fStack_f0;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [32];
  undefined8 local_a8 [2];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar3 = FWeakObjectPtr::Get();
  if ((lVar3 != 0) && (lVar3 = FWeakObjectPtr::Get(param_1 + 8), lVar3 != 0)) {
    local_e8 = *(float *)(*(longlong *)(param_1 + 0x10) + 0x68) - 90.0;
    local_e0 = 0;
    local_e4 = *(float *)(param_1 + 0x18) + 90.0;
    fVar10 = *(float *)(*(longlong *)(param_1 + 0x10) + 0x70);
    pfVar4 = (float *)FRotator::Vector(&local_e8,&local_f8);
    fVar12 = *pfVar4;
    fVar9 = pfVar4[1];
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x168);
    if (lVar3 == 0) {
      local_108 = _DAT_1468b5d90;
      local_100 = DAT_1468b5d98;
    }
    else {
      local_108 = *(undefined8 *)(lVar3 + 0x220);
      local_100 = *(float *)(lVar3 + 0x228);
    }
    fVar11 = (float)local_108;
    uVar2 = (ulonglong)local_108 >> 0x20;
    fVar13 = fVar10 * pfVar4[2] + local_100;
    FRotator::Quaternion(&local_e8,&local_f8);
    plVar7 = *(longlong **)(param_1 + 0x20);
    local_a8[0] = local_f8;
    local_98._4_4_ = fVar10 * fVar9 + (float)uVar2;
    local_98._0_4_ = fVar10 * fVar12 + fVar11;
    local_98._8_4_ = fVar13;
    local_98._12_4_ = 0;
    local_88._4_4_ = DAT_1464aa788._4_4_;
    local_88._0_4_ = (undefined4)DAT_1464aa788;
    local_88._8_4_ = DAT_1464aa790;
    local_88._12_4_ = 0;
    lVar3 = plVar7[0x23];
    lVar1 = plVar7[2];
    uVar5 = FUN_140a63ba0();
    uVar6 = (**(code **)(*plVar7 + 0x148))(plVar7);
    local_110 = (undefined8 *)((ulonglong)local_110 & 0xffffffffffffff00);
    local_118 = uVar5;
    lVar3 = FUN_140aea740(uVar6,lVar1,local_a8,lVar3);
    if (lVar3 != 0) {
      FUN_140b30220(lVar3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10));
      FUN_140b30a70(lVar3,*(undefined8 *)(param_1 + 0x28));
      bVar8 = *(byte *)(lVar3 + 0x94) & 0x18;
      if (bVar8 == 0x10) {
        fVar10 = *(float *)(lVar3 + 0x470);
        fVar12 = *(float *)(lVar3 + 0x488);
      }
      else {
        fVar10 = *(float *)(lVar3 + 0x7ac);
        fVar12 = *(float *)(lVar3 + 0x7b0);
      }
      if (0.0001 < fVar10) {
        lVar1 = *(longlong *)(param_1 + 0x20);
        if ((*(byte *)(lVar1 + 0x94) & 0x18) == 0x10) {
          fVar9 = *(float *)(lVar1 + 0x470);
        }
        else {
          fVar9 = *(float *)(lVar1 + 0x7ac);
        }
        if ((bVar8 != 0x10) && (*(char *)(lVar3 + 0x128) == '\x03')) {
          *(float *)(lVar3 + 0x7ac) = (fVar9 / fVar10) * *(float *)(lVar3 + 0x7ac);
        }
      }
      if (0.0001 < fVar12) {
        lVar1 = *(longlong *)(param_1 + 0x20);
        if ((*(byte *)(lVar1 + 0x94) & 0x18) == 0x10) {
          fVar10 = *(float *)(lVar1 + 0x488);
        }
        else {
          fVar10 = *(float *)(lVar1 + 0x7b0);
        }
        if ((bVar8 != 0x10) && (*(char *)(lVar3 + 0x128) == '\x03')) {
          *(float *)(lVar3 + 0x7b0) = (fVar10 / fVar12) * *(float *)(lVar3 + 0x7b0);
        }
      }
      UGameplayStatics::FinishSpawningActor(lVar3,local_a8);
      lVar3 = FWeakObjectPtr::Get(param_1);
      if (*(longlong *)(lVar3 + 0x78) != 0) {
        fStack_f0 = 0.0;
        local_d8 = 0;
        local_d0 = 0;
        lVar3 = FWeakObjectPtr::Get(param_1 + 8);
        lVar3 = *(longlong *)(lVar3 + 0x168);
        if (lVar3 == 0) {
          local_108 = _DAT_1468b5d90;
          local_100 = DAT_1468b5d98;
        }
        else {
          local_108 = *(undefined8 *)(lVar3 + 0x220);
          local_100 = *(float *)(lVar3 + 0x228);
        }
        local_f8 = local_108;
        fStack_f0 = local_100;
        plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
        lVar3 = FWeakObjectPtr::Get(param_1);
        uVar5 = (**(code **)(*plVar7 + 0x148))(plVar7);
        local_110 = &local_d8;
        local_118 = CONCAT44(local_118._4_4_,0x42480000);
        FUN_1405a1e30(local_c8,uVar5,*(undefined8 *)(lVar3 + 0x78),&local_f8);
        FUN_140591060(local_c8);
      }
    }
  }
  return;
}



// FUNCTION 140b18e10 FUN_140b18e10 body=508 status=ok
// SIG undefined FUN_140b18e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b18e10(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [32];
  undefined1 local_88 [24];
  longlong local_70;
  longlong local_60;
  undefined2 local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_38;
  longlong local_30;
  undefined4 local_28;
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x848) != 0)) {
    uVar2 = FUN_140b81930(param_2,(int)param_1[2],*(undefined4 *)((longlong)param_1 + 0x14));
    FUN_140b3d920(param_1[1],0);
    local_c8 = param_1[5];
    local_b0 = 1;
    local_b8 = 0;
    local_c0 = 0;
    FUN_143013fe0(param_1[1],param_1[3],uVar2,param_1[4]);
    if ((*(int *)(param_1[1] + 8) == 0) &&
       (FUN_142ff7db0(&local_28,param_1[3],param_1[4],uVar2), local_24 != '\0')) {
      local_c8 = param_1[5];
      local_b0 = 1;
      local_b8 = 0;
      local_c0 = 0;
      FUN_143013fe0(param_1[1],param_1[3],local_28,param_1[4]);
    }
    if (0 < *(int *)(param_1[1] + 8)) {
      _guard_xfg_dispatch_icall_nop(local_a8,0,0x60);
      local_50 = 1;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      FUN_140aa0aa0(local_a8,param_1 + 6);
      local_48 = param_1[0x12];
      local_40 = param_1[0x13];
      local_38 = (undefined1)param_1[0x14];
      local_30 = param_1[0x15];
      FUN_140aa0aa0(local_a8,*(undefined8 *)param_1[1]);
      param_1 = (longlong *)*param_1;
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      local_30 = param_2;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                  (param_1,iVar1);
      }
      lVar3 = (longlong)iVar1 * 0x80 + *param_1;
      FUN_1409f3dd0(lVar3,local_a8);
      *(longlong *)(lVar3 + 0x60) = local_48;
      *(longlong *)(lVar3 + 0x68) = local_40;
      *(undefined1 *)(lVar3 + 0x70) = local_38;
      *(longlong *)(lVar3 + 0x78) = local_30;
      if (local_60 != 0) {
        FMemory::Free();
      }
      if (local_70 != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (local_88);
    }
  }
  return;
}



// FUNCTION 140b19170 FUN_140b19170 body=43 status=ok
// SIG undefined FUN_140b19170(void)

undefined8 * FUN_140b19170(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 140b191a0 FUN_140b191a0 body=43 status=ok
// SIG undefined FUN_140b191a0(void)

undefined8 * FUN_140b191a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140b191d0 FUN_140b191d0 body=98 status=ok
// SIG undefined FUN_140b191d0(void)

undefined8 * FUN_140b191d0(undefined8 *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 5);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 140b19240 FUN_140b19240 body=98 status=ok
// SIG undefined FUN_140b19240(void)

undefined8 * FUN_140b19240(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0xb);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 140b192b0 FUN_140b192b0 body=165 status=ok
// SIG undefined FUN_140b192b0(void)

longlong FUN_140b192b0(longlong param_1,ulonglong param_2)

{
  FUN_1406d8b70(param_1 + 0x890);
  *(undefined4 *)(param_1 + 0x868) = 0;
  if (*(longlong *)(param_1 + 0x860) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x820);
  if (*(longlong *)(param_1 + 0x798) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x780) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x6e0) = &PTR_CanBeUsedOnAnyThread_1442a2ad8;
  FUN_14099acc0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x958);
  }
  return param_1;
}



// FUNCTION 140b19360 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
AFGBuildableConveyorBase::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14099acc0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x738);
  }
  return param_1;
}



// FUNCTION 140b193a0 FUN_140b193a0 body=228 status=ok
// SIG undefined FUN_140b193a0(void)

longlong FUN_140b193a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    FMemory::Free();
  }
  thunk_FUN_142478640(param_1 + 0x598);
  thunk_FUN_142478640(param_1 + 0x588);
  thunk_FUN_142478640(param_1 + 0x57c);
  thunk_FUN_142478640(param_1 + 0x570);
  *(undefined4 *)(param_1 + 0x560) = 0;
  if (*(longlong *)(param_1 + 0x558) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x518);
  thunk_FUN_142478640(param_1 + 0x500);
  thunk_FUN_142478640(param_1 + 0x4f4);
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FMemory::Free();
  }
  FUN_140aee220(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5c0);
  }
  return param_1;
}



// FUNCTION 140b19490 FUN_140b19490 body=52 status=ok
// SIG undefined FUN_140b19490(void)

undefined8 FUN_140b19490(undefined8 param_1,ulonglong param_2)

{
  FUN_140a7c530();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x730);
  }
  return param_1;
}



// FUNCTION 140b194d0 FUN_140b194d0 body=90 status=ok
// SIG undefined FUN_140b194d0(void)

longlong FUN_140b194d0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FMemory::Free();
  }
  FUN_140aee220(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4c0);
  }
  return param_1;
}



// FUNCTION 140b19530 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UNiagaraSystem::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140aee220();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a0);
  }
  return param_1;
}



// FUNCTION 140b19570 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
UNiagaraMeshRendererProperties::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140a7c530();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x728);
  }
  return param_1;
}



// FUNCTION 140b195b0 FUN_140b195b0 body=107 status=ok
// SIG undefined FUN_140b195b0(void)

longlong FUN_140b195b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x768) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x738) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x728) != 0) {
    FMemory::Free();
  }
  FUN_140a7c530(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x778);
  }
  return param_1;
}



// FUNCTION 140b19620 FUN_140b19620 body=216 status=ok
// SIG undefined FUN_140b19620(void)

longlong FUN_140b19620(longlong param_1,ulonglong param_2)

{
  FUN_140590de0(param_1 + 0x580);
  if (*(longlong *)(param_1 + 0x570) != 0) {
    FMemory::Free();
  }
  FUN_140676620(param_1 + 0x560);
  *(undefined4 *)(param_1 + 0x558) = 0;
  if (*(longlong *)(param_1 + 0x550) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FIntVector,FIndirectLightingCacheBlock>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x510);
  thunk_FUN_142478640(param_1 + 0x4d8);
  thunk_FUN_142478640(param_1 + 0x4cc);
  thunk_FUN_142478640(param_1 + 0x4c0);
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FMemory::Free();
  }
  FUN_140aee220(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5e8);
  }
  return param_1;
}



// FUNCTION 140b19700 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAutoDeleteAsyncTask<FAsyncSHAVerify>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140b19750 FUN_140b19750 body=43 status=ok
// SIG undefined FUN_140b19750(void)

undefined8 * FUN_140b19750(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_CanBeUsedOnAnyThread_1442a2ad8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140b19780 FUN_140b19780 body=84 status=ok
// SIG undefined FUN_140b19780(void)

longlong FUN_140b19780(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 140b197e0 FUN_140b197e0 body=98 status=ok
// SIG undefined FUN_140b197e0(void)

longlong FUN_140b197e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 140b19850 FUN_140b19850 body=84 status=ok
// SIG undefined FUN_140b19850(void)

longlong FUN_140b19850(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 140b198b0 FUN_140b198b0 body=90 status=ok
// SIG undefined FUN_140b198b0(void)

longlong FUN_140b198b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x298);
  }
  return param_1;
}



// FUNCTION 140b19910 FUN_140b19910 body=107 status=ok
// SIG undefined FUN_140b19910(void)

longlong FUN_140b19910(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x370) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x360) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FMemory::Free();
  }
  FUN_140aee3c0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x388);
  }
  return param_1;
}



// FUNCTION 140b19980 FUN_140b19980 body=158 status=ok
// SIG undefined FUN_140b19980(void)

longlong FUN_140b19980(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FMemory::Free();
  }
  TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
  ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(param_1 + 0x498);
  if (*(longlong *)(param_1 + 0x380) != 0) {
    FMemory::Free();
  }
  TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
  ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(param_1 + 0x370);
  FUN_140ac8090(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4e0);
  }
  return param_1;
}



// FUNCTION 140b19a20 FUN_140b19a20 body=52 status=ok
// SIG undefined FUN_140b19a20(void)

undefined8 FUN_140b19a20(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 140b19a60 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FEditableTextStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140b174d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 140b19aa0 FUN_140b19aa0 body=87 status=ok
// SIG undefined FUN_140b19aa0(void)

longlong FUN_140b19aa0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x130) = &PTR_FUN_143fe0658;
  FUN_140a51930(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 140b19b00 FUN_140b19b00 body=73 status=ok
// SIG undefined FUN_140b19b00(void)

longlong FUN_140b19b00(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  FUN_140b174d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x268);
  }
  return param_1;
}



// FUNCTION 140b19b50 FUN_140b19b50 body=85 status=ok
// SIG undefined FUN_140b19b50(void)

longlong FUN_140b19b50(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x178);
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c8);
  }
  return param_1;
}



// FUNCTION 140b19bb0 FUN_140b19bb0 body=239 status=ok
// SIG undefined FUN_140b19bb0(void)

longlong FUN_140b19bb0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x68);
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
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 140b19ca0 FUN_140b19ca0 body=141 status=ok
// SIG undefined FUN_140b19ca0(void)

longlong FUN_140b19ca0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x7b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x738) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x728) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x718) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x7c0);
  }
  return param_1;
}



// FUNCTION 140b19d70 FUN_140b19d70 body=65 status=ok
// SIG undefined FUN_140b19d70(void)

void FUN_140b19d70(longlong *param_1)

{
  FUN_142fe35b0();
  if (param_1[0xdf] == 0) {
    FUN_14301be20(param_1);
  }
  if ((*(byte *)(param_1 + 0xb5) & 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140b19da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x830))(param_1);
    return;
  }
  return;
}



// FUNCTION 140b19dc0 FUN_140b19dc0 body=825 status=ok
// SIG undefined FUN_140b19dc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b19dc0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  float fVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if ((*(longlong *)(param_1 + 0x260) == 0) && (iVar5 = FUN_14233f450(), iVar5 == 3)) {
    *(undefined1 *)(param_1 + 0x25c) = 1;
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar6 = *(longlong *)(DAT_146b33f38 + 0x58);
    if (0 < *(int *)(param_1 + 0x1f8)) {
      if ((lVar6 == 0) || (*(char *)(lVar6 + 0x420) == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (lVar6 == 0) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = *(float *)(lVar6 + 0x424);
      }
      if (*(char *)(param_1 + 0x250) != '\0') {
        fVar10 = *(float *)(param_1 + 0x254);
      }
      plVar7 = *(longlong **)(param_1 + 0x1f0);
      if (fVar10 <= 0.01) {
        fVar10 = 0.01;
      }
      plVar9 = plVar7 + *(int *)(param_1 + 0x1f8);
      for (; plVar7 != plVar9; plVar7 = plVar7 + 1) {
        plVar1 = (longlong *)*plVar7;
        if (plVar1 != (longlong *)0x0) {
          lVar6 = AGExplodingRockProjectile::GetPrivateStaticClass();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (((bVar2) && ((*(byte *)(plVar1 + 0xb5) & 1) != 0)) &&
             ((cVar4 = (**(code **)(*plVar1 + 0x858))(plVar1), cVar4 == '\0' || (!bVar3)))) {
            (**(code **)(*plVar1 + 0x7f8))(plVar1);
          }
        }
      }
      if ((bVar3) &&
         ((*(longlong *)(param_1 + 0x120) != 0 || (lVar6 = FUN_1423407b0(param_1), lVar6 != 0)))) {
        local_b8 = FUN_140b45d20;
        lVar6 = *(longlong *)(param_1 + 0x120);
        uStack_b0 = 0;
        if (lVar6 == 0) {
          lVar6 = FUN_1423407b0(param_1);
        }
        if (*(longlong *)(lVar6 + 400) == 0) {
          uVar8 = *(undefined8 *)(lVar6 + 0x3f8);
        }
        else {
          uVar8 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
        }
        plVar7 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar7 + 1,param_1);
          *(undefined4 *)(plVar7 + 2) = (undefined4)local_b8;
          *(undefined4 *)((longlong)plVar7 + 0x14) = local_b8._4_4_;
          *(undefined4 *)(plVar7 + 3) = uStack_b0;
          *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_ac;
          lVar6 = FDelegateHandle::GenerateNewID();
          plVar7[5] = lVar6;
          *plVar7 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_a8 = 0;
        local_a0 = 0;
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x30))(plVar7,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_c0 = 0xbf800000;
        local_c8 = 0;
        local_90 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar8,param_1 + 0x260,&local_a8,fVar10);
        if (local_48 != 0) {
          plVar9 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar9 = local_58;
          }
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x10))(plVar9,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x28))(plVar7,0);
          lVar6 = FMemory::Realloc(plVar7,0,0);
          if (lVar6 != 0) {
            FMemory::Free(lVar6);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140b1a100 FUN_140b1a100 body=371 status=ok
// SIG undefined FUN_140b1a100(void)

longlong FUN_140b1a100(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_10;
  
  if (param_4 == '\0') {
    lVar4 = *(longlong *)(param_1 + 0x6f8);
    if (lVar4 != 0) {
      lVar3 = FUN_1429ff160();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) goto LAB_140b1a19e;
      bVar2 = true;
      goto LAB_140b1a1a0;
    }
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x700);
    if (lVar4 != 0) {
      lVar3 = FUN_1429ff160();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
LAB_140b1a19e:
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
LAB_140b1a1a0:
      if (bVar2) goto LAB_140b1a1a6;
    }
  }
  lVar4 = 0;
LAB_140b1a1a6:
  local_38 = 0;
  local_30 = 0;
  local_10 = 0;
  local_20 = 0;
  local_28 = 0;
  lVar4 = FUN_1424600f0(param_2,lVar4,param_3,&local_28,&local_38,0,1,2,1,0);
  if (lVar4 != 0) {
    iVar1 = *(int *)(param_1 + 0x788);
    *(int *)(param_1 + 0x788) = iVar1 + 1;
    if (*(int *)(param_1 + 0x78c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x780,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x780) + (longlong)iVar1 * 8) = lVar4;
  }
  return lVar4;
}



// FUNCTION 140b1a280 FUN_140b1a280 body=47 status=ok
// SIG undefined FUN_140b1a280(void)

void FUN_140b1a280(longlong param_1,undefined8 param_2)

{
  undefined1 local_28 [40];
  
  if (*(longlong *)(param_1 + 0x748) != 0) {
    FUN_1405a3150(*(longlong *)(param_1 + 0x748),local_28,param_2,0);
    FUN_140591060(local_28);
  }
  return;
}



// FUNCTION 140b1a2b0 FUN_140b1a2b0 body=73 status=ok
// SIG undefined FUN_140b1a2b0(void)

void FUN_140b1a2b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x368);
  *(int *)(param_1 + 0x368) = iVar1 + 1;
  if (*(int *)(param_1 + 0x36c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x360),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x360) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 140b1a300 FUN_140b1a300 body=43 status=ok
// SIG undefined FUN_140b1a300(void)

void FUN_140b1a300(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x388);
  if ((param_2 != 0) && ((lVar1 == 0 || (*(byte *)(lVar1 + 0x30) < *(byte *)(param_2 + 0x30))))) {
    *(longlong *)(param_1 + 0x388) = param_2;
    return;
  }
  *(longlong *)(param_1 + 0x388) = lVar1;
  return;
}



// FUNCTION 140b1a330 FUN_140b1a330 body=222 status=ok
// SIG undefined FUN_140b1a330(void)

void FUN_140b1a330(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  if (lVar3 != 0) {
    lVar3 = UWorld::GetGameState<APVPGameState>(lVar3);
    if (lVar3 != 0) {
      cVar1 = FUN_1407c3030(lVar3 + 0x670);
      if (cVar1 != '\0') {
        uVar2 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(lVar3 + 0x670);
        goto LAB_140b1a387;
      }
    }
  }
  uVar2 = 0;
LAB_140b1a387:
  *(undefined4 *)(param_1 + 0x4dc) = uVar2;
  if (param_2 != (longlong *)0x0) {
    uVar4 = FUN_14142bde0();
    lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x208) != 0)) {
      FUN_142fe3d60(param_1,local_res8,*(undefined8 *)(*(longlong *)(lVar3 + 0x208) + 0x1d8),param_2
                    ,1,0,0,1,0,0);
    }
    FUN_140b40900(param_1,param_2);
  }
  return;
}



// FUNCTION 140b1a410 FUN_140b1a410 body=383 status=ok
// SIG undefined FUN_140b1a410(void)

void FUN_140b1a410(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((*(char *)(param_1 + 0x128) == '\x03') && (param_2 != 0)) {
    uStack_30 = 0;
    local_38._0_4_ = (undefined4)param_3;
    local_38._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = 0;
    uStack_1c = 0;
    local_38 = param_3;
    FUN_142c8e590(&local_48,param_2,&local_28,param_5,param_4,1,local_res8);
    plVar3 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_40)(local_40);
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
    iVar4 = *(int *)(param_1 + 0x568);
    lVar6 = (longlong)iVar4;
    *(int *)(param_1 + 0x568) = iVar4 + 1;
    if (*(int *)(param_1 + 0x56c) < iVar4 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x560,iVar4);
    }
    lVar5 = *(longlong *)(param_1 + 0x560);
    *(longlong *)(lVar5 + lVar6 * 0x28) = param_2;
    *(undefined8 *)(lVar5 + 8 + lVar6 * 0x28) = local_48;
    *(longlong **)(lVar5 + 0x10 + lVar6 * 0x28) = plVar3;
    *(undefined8 *)(lVar5 + 0x18 + lVar6 * 0x28) = param_6;
    *(undefined1 *)(lVar5 + 0x20 + lVar6 * 0x28) = param_7;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b1a590 FUN_140b1a590 body=52 status=ok
// SIG undefined FUN_140b1a590(void)

void FUN_140b1a590(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (lVar1 = UNiagaraSystem::GetEffectType(param_2), lVar1 != 0)) {
    *(longlong *)(param_1 + 0x3a8) = param_2;
  }
  return;
}



// FUNCTION 140b1a5d0 FUN_140b1a5d0 body=105 status=ok
// SIG undefined FUN_140b1a5d0(void)

void FUN_140b1a5d0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_2 != 0) && (lVar2 = UNiagaraSystem::GetEffectType(param_2), lVar2 != 0)) {
    uVar3 = UNiagaraSystem::GetEffectType(param_2);
    iVar1 = *(int *)(param_1 + 0x3a0);
    *(int *)(param_1 + 0x3a0) = iVar1 + 1;
    if (*(int *)(param_1 + 0x3a4) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 0x398),iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x398) + (longlong)iVar1 * 8) = uVar3;
  }
  return;
}



// FUNCTION 140b1a640 FUN_140b1a640 body=233 status=ok
// SIG undefined FUN_140b1a640(void)

void FUN_140b1a640(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar9;
  longlong local_res10;
  undefined4 local_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_2 != 0) {
    local_res10 = param_2;
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x728,&local_res10);
    lVar5 = local_res10;
    plVar1 = (longlong *)(param_1 + 0x718);
    plVar7 = (longlong *)*plVar1;
    iVar4 = *(int *)(param_1 + 0x720);
    plVar2 = plVar7 + (longlong)iVar4 * 2;
    for (; plVar7 != plVar2; plVar7 = plVar7 + 2) {
      bVar9 = false;
      if (local_res10 != 0) {
        bVar9 = local_res10 == *plVar7;
      }
      if (bVar9) {
        return;
      }
    }
    uStack_10 = uStack_10 & 0xffffff00;
    *(int *)(param_1 + 0x720) = iVar4 + 1;
    if (*(int *)(param_1 + 0x724) < iVar4 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar4);
    }
    local_18 = (undefined4)lVar5;
    uStack_14 = (undefined4)((ulonglong)lVar5 >> 0x20);
    puVar3 = (undefined4 *)(*plVar1 + (longlong)iVar4 * 0x10);
    *puVar3 = local_18;
    puVar3[1] = uStack_14;
    puVar3[2] = uStack_10;
    puVar3[3] = uStack_c;
    if (*(longlong *)(param_1 + 0x748) != 0) {
      FUN_14307e770(*(longlong *)(param_1 + 0x748),lVar5);
    }
    uVar8 = UCurveSourceInterface::GetPrivateStaticClass();
    cVar6 = UClass::ImplementsInterface(*(undefined8 *)(lVar5 + 0x10),uVar8);
    if (cVar6 != '\0') {
      FUN_1414c3e80(lVar5,param_1);
    }
  }
  return;
}



// FUNCTION 140b1a730 FUN_140b1a730 body=124 status=ok
// SIG undefined FUN_140b1a730(void)

void FUN_140b1a730(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x38) != 0) && (param_2 != 0)) {
    lVar2 = FUN_1413b4d10();
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
      lVar2 = *(longlong *)(param_2 + 0x390);
      if ((lVar2 == 0) || (*(byte *)(lVar2 + 0x30) < *(byte *)(param_1 + 0x30))) {
        lVar2 = param_1;
      }
      *(longlong *)(param_2 + 0x390) = lVar2;
    }
  }
  return;
}



// FUNCTION 140b1a7b0 FUN_140b1a7b0 body=375 status=ok
// SIG undefined FUN_140b1a7b0(void)

void FUN_140b1a7b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x38);
  plVar1 = plVar7 + *(int *)(param_1 + 0x40);
  do {
    if (plVar7 == plVar1) {
      return;
    }
    if (*plVar7 != 0) {
      lVar5 = FUN_1430f1090();
      for (lVar6 = *plVar7; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar5) {
          if (*plVar7 != 0) {
            plVar7 = *(longlong **)(param_1 + 0x38);
            plVar1 = plVar7 + *(int *)(param_1 + 0x40);
            goto joined_r0x000140b1a82d;
          }
          break;
        }
      }
    }
    plVar7 = plVar7 + 1;
  } while( true );
joined_r0x000140b1a82d:
  if (plVar7 == plVar1) {
LAB_140b1a899:
    if (param_2 == 0) {
      return;
    }
    lVar6 = FUN_14142bde0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) {
      return;
    }
    if (param_1 == 0) {
      return;
    }
    iVar2 = *(int *)(param_2 + 0x358);
    *(int *)(param_2 + 0x358) = iVar2 + 1;
    if (*(int *)(param_2 + 0x35c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 0x350,iVar2);
    }
    *(longlong *)(*(longlong *)(param_2 + 0x350) + (longlong)iVar2 * 8) = param_1;
    return;
  }
  plVar3 = (longlong *)*plVar7;
  if ((plVar3 != (longlong *)0x0) &&
     ((plVar3[0x1f] != 0 || ((**(code **)(*plVar3 + 0x368))(plVar3), plVar3[0x1f] != 0)))) {
    plVar3 = (longlong *)*plVar7;
    if (plVar3 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = plVar3[0x1f];
      if (lVar6 == 0) {
        (**(code **)(*plVar3 + 0x368))(plVar3);
        lVar6 = plVar3[0x1f];
      }
    }
    if (*(char *)(lVar6 + 0x80) != '\0') goto LAB_140b1a899;
  }
  plVar7 = plVar7 + 1;
  goto joined_r0x000140b1a82d;
}



// FUNCTION 140b1a930 FUN_140b1a930 body=158 status=ok
// SIG undefined FUN_140b1a930(void)

void FUN_140b1a930(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  
  if (((*(longlong *)(param_1 + 0x38) != 0) && (0 < *(int *)(param_1 + 0x50))) && (param_2 != 0)) {
    lVar3 = FUN_14142bde0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar1 = *(int *)(param_2 + 0x378);
      *(int *)(param_2 + 0x378) = iVar1 + 1;
      if (*(int *)(param_2 + 0x37c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 0x370,iVar1);
      }
      *(longlong *)(*(longlong *)(param_2 + 0x370) + (longlong)iVar1 * 8) = param_1;
    }
  }
  return;
}



// FUNCTION 140b1a9d0 AddUninitialized body=216 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::AddUninitialized(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar4 * 0x40 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 140b1aab0 FUN_140b1aab0 body=138 status=ok
// SIG undefined FUN_140b1aab0(void)

void FUN_140b1aab0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_142fe5500();
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x360);
  uVar2 = (longlong)*(int *)(param_1 + 0x368) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x368) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_1412618f0(*puVar1,*(undefined8 *)(param_1 + 0x118),param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 140b1ab40 FUN_140b1ab40 body=1046 status=ok
// SIG undefined FUN_140b1ab40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_140b1ab40(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  void *_Src;
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  uint uStack_c0;
  int iStack_bc;
  undefined1 local_b8 [16];
  longlong *local_a8;
  undefined2 local_a0;
  undefined4 local_98 [2];
  void *local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_64;
  undefined4 local_5c;
  byte local_58;
  longlong *local_48;
  undefined8 uStack_40;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  plVar8 = (longlong *)FUN_140a83f10(param_7,param_2,param_3,param_4,param_5,param_6,param_7);
  uVar12 = *(ulonglong *)(param_2 + 0x28);
  uVar10 = 0;
  if (uVar12 == 0) {
LAB_140b1abbd:
    uVar12 = uVar10;
  }
  else {
    lVar9 = FUN_1413ac760();
    if ((*(int *)(*(longlong *)(uVar12 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140b1abbd;
  }
  if (plVar8 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  if (uVar12 == 0) {
    return plVar8;
  }
  local_68 = DAT_1468b5d98;
  local_5c = DAT_1468b5d98;
  local_98[0] = 0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = _DAT_1468b5d90;
  local_64 = _DAT_1468b5d90;
  local_58 = 0;
  local_98[0] = (**(code **)(*plVar8 + 0x18))(plVar8,0);
  if (&local_90 != (void **)(plVar8 + 0x4b)) {
    iVar5 = (int)plVar8[0x4c];
    _Src = (void *)plVar8[0x4b];
    local_88 = CONCAT44(local_88._4_4_,iVar5);
    if ((iVar5 == 0) && (local_88._4_4_ == 0)) {
      local_88 = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_90,iVar5);
      _guard_xfg_dispatch_icall_nop(local_90,_Src,(longlong)iVar5 << 4);
    }
  }
  local_70 = *(undefined8 *)((longlong)plVar8 + 0x11c);
  local_68 = *(undefined4 *)((longlong)plVar8 + 0x124);
  plVar1 = (longlong *)plVar8[10];
  local_64 = plVar8[0x22];
  local_5c = (undefined4)plVar8[0x23];
  if (plVar1 == (longlong *)0x0) {
    local_78 = 0;
    lVar9 = local_78;
  }
  else {
    lVar9 = plVar1[0x1f];
    if (plVar1[0x1f] == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar9 = plVar1[0x1f];
    }
  }
  local_78 = lVar9;
  plVar1 = (longlong *)plVar8[0xb];
  if (plVar1 == (longlong *)0x0) {
    local_80 = 0;
    lVar9 = local_80;
  }
  else {
    lVar9 = plVar1[0x1f];
    if (plVar1[0x1f] == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar9 = plVar1[0x1f];
    }
  }
  local_80 = lVar9;
  local_58 = *(byte *)((longlong)plVar8 + 0x214) & 1;
  if ((plVar8[0x56] != 0) && (uVar14 = *(ulonglong *)(plVar8[0x56] + 0x118), uVar14 != 0)) {
    lVar9 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(uVar14 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140b1ad6d;
  }
  uVar14 = uVar10;
LAB_140b1ad6d:
  lVar9 = FUN_142df3510(uVar12);
  local_c8 = (uint *)CONCAT44(local_c8._4_4_,(undefined4)local_c8);
  if ((lVar9 != 0) &&
     (local_c8 = (uint *)CONCAT44(local_c8._4_4_,(undefined4)local_c8), uVar14 != 0)) {
    iVar5 = FUN_142dec940(lVar9,uVar14);
    local_c8 = (uint *)CONCAT44(local_c8._4_4_,(undefined4)local_c8);
    if (iVar5 == 2) {
      plVar1 = (longlong *)(uVar12 + 0x820);
      iVar5 = *(int *)(uVar12 + 0x848);
      puStack_38 = (uint *)(uVar12 + 0x830);
      local_d8 = 0x100000000;
      local_c8._4_4_ = 0;
      uStack_c0 = 0;
      if (iVar5 != 0) {
        puVar13 = *(uint **)(uVar12 + 0x840);
        if (*(uint **)(uVar12 + 0x840) == (uint *)0x0) {
          puVar13 = puStack_38;
        }
        uVar6 = *puVar13;
        uVar11 = uVar10;
        while (uVar6 == 0) {
          iVar7 = (int)uVar11;
          uStack_c0 = (int)uVar10 + 0x20;
          uVar10 = (ulonglong)uStack_c0;
          uVar11 = (ulonglong)(iVar7 + 1U);
          uVar4 = (ulonglong)local_d8 >> 0x20;
          local_d8 = CONCAT44((int)uVar4,iVar7 + 1U);
          if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_140b1ae4e;
          uVar6 = puVar13[(longlong)iVar7 + 1];
        }
        uVar6 = -uVar6 & uVar6;
        iVar7 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        local_d8 = CONCAT44(uVar6,(undefined4)local_d8);
        if (uVar6 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        local_c8._4_4_ = (uStack_c0 - iVar7) + 0x1f;
        if (iVar5 < local_c8._4_4_) {
LAB_140b1ae4e:
          local_c8._4_4_ = iVar5;
        }
      }
      auStack_30._4_4_ = local_c8._4_4_;
      auStack_30._0_4_ = 0xffffffff;
      auStack_30._8_4_ = uStack_c0;
      auStack_30._12_4_ = iStack_bc;
      uStack_40 = local_d8;
      local_a0 = 0;
      local_20._0_4_ = SUB84(plVar1,0);
      local_20._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
      uStack_c0 = 0xffffffff;
      iStack_bc = local_c8._4_4_;
      uStack_d0 = local_d8;
      local_b8._8_4_ = (undefined4)local_20;
      local_b8._0_8_ = auStack_30._8_8_;
      local_b8._12_4_ = local_20._4_4_;
      bVar3 = local_c8._4_4_ < *(int *)(uVar12 + 0x848);
      local_a8 = plVar1;
      local_48 = plVar1;
      local_20 = plVar1;
      local_c8 = puStack_38;
      if (bVar3) {
        do {
          plVar2 = *(longlong **)((longlong)iStack_bc * 0x40 + *plVar1);
          (**(code **)(*plVar2 + 0x2c8))
                    (plVar2,uVar12,*(undefined8 *)(uVar12 + 0x6e8),
                     *plVar1 + 8 + (longlong)iStack_bc * 0x40,uVar14,local_98);
          uStack_c0 = uStack_c0 & ~uStack_d0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d0);
        } while (iStack_bc < (int)local_c8[6]);
        if (((char)local_a0 != '\0') && (local_a0._1_1_ != '\0')) {
          TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_a8,(int)local_a8[1] - *(int *)((longlong)local_a8 + 0x34),1);
        }
      }
    }
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free();
  }
  return plVar8;
}



// FUNCTION 140b1af60 FUN_140b1af60 body=142 status=ok
// SIG undefined FUN_140b1af60(void)

void FUN_140b1af60(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_142fe5790();
  uVar2 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x360);
  uVar3 = (longlong)*(int *)(param_1 + 0x368) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x368) < puVar1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      FUN_1412636d0(*puVar1,param_2,*(undefined8 *)(param_1 + 0x118),param_1 + 0x2a8);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}



// FUNCTION 140b1aff0 FUN_140b1aff0 body=138 status=ok
// SIG undefined FUN_140b1aff0(void)

void FUN_140b1aff0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_142fe59e0();
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x360);
  uVar2 = (longlong)*(int *)(param_1 + 0x368) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x368) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_1412639d0(*puVar1,*(undefined8 *)(param_1 + 0x118),param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 140b1b080 FUN_140b1b080 body=849 status=ok
// SIG undefined FUN_140b1b080(void)

void FUN_140b1b080(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *local_48;
  undefined8 local_40;
  
  if (((((char)param_1[0x70] == '\0') && ((int)param_1[0x6f] != 0)) && (param_1[0x23] != 0)) &&
     (lVar2 = *(longlong *)(param_1[0x23] + 0x168), lVar2 != 0)) {
    uVar11 = 0;
    *(undefined1 *)(param_1 + 0x70) = 1;
    plVar10 = (longlong *)param_1[0x6e];
    local_48 = (longlong *)0x0;
    local_40 = 0;
    uVar13 = (longlong)(int)param_1[0x6f] & 0x1fffffffffffffff;
    if (plVar10 + (int)param_1[0x6f] < plVar10) {
      uVar13 = uVar11;
    }
    if (uVar13 != 0) {
      do {
        uVar4 = local_40;
        lVar9 = *plVar10;
        lVar3 = *(longlong *)(lVar9 + 0x38);
        if ((lVar3 != 0) && (0 < *(int *)(lVar9 + 0x50))) {
          for (plVar7 = local_48; plVar7 != local_48 + (longlong)(int)local_40 * 6;
              plVar7 = plVar7 + 6) {
            if (lVar3 == *plVar7) goto LAB_140b1b1d4;
          }
          lVar12 = (longlong)(int)local_40;
          iVar5 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar5);
          if (local_40._4_4_ < iVar5) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,uVar4 & 0xffffffff);
          }
          local_48[lVar12 * 6] = 0;
          local_48[lVar12 * 6 + 1] = 0;
          local_48[lVar12 * 6 + 2] = 0;
          local_48[lVar12 * 6 + 3] = 0;
          local_48[lVar12 * 6 + 4] = 0;
          local_48[lVar12 * 6 + 5] = 0;
          plVar7 = local_48 + lVar12 * 6;
          *plVar7 = lVar3;
LAB_140b1b1d4:
          if (plVar7[3] == 0) {
            plVar7[3] = *(longlong *)(lVar9 + 0x58);
          }
          if (plVar7[2] == 0) {
            plVar7[2] = *(longlong *)(lVar9 + 0x40);
          }
          iVar5 = *(int *)(lVar9 + 0x50);
          if (iVar5 != 0) {
            iVar6 = (int)plVar7[5];
            if (*(int *)((longlong)plVar7 + 0x2c) < iVar5 + iVar6) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(plVar7 + 4);
              iVar6 = (int)plVar7[5];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(plVar7[4] + (longlong)iVar6 * 8),*(void **)(lVar9 + 0x48),
                       (longlong)iVar5 << 3);
            *(int *)(plVar7 + 5) = (int)plVar7[5] + iVar5;
          }
        }
        plVar10 = plVar10 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar13);
    }
    plVar10 = local_48 + (longlong)(int)local_40 * 6;
    if (local_48 != plVar10) {
      plVar7 = local_48 + 1;
      do {
        lVar9 = plVar7[1];
        lVar3 = param_1[0x23];
        if (lVar9 == 0) {
          FUN_1417846f0(lVar3,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
        }
        uVar8 = FUN_142a07000();
        lVar9 = FUN_1417985e0(uVar8,lVar3,lVar9,0,0,0,0,0,0);
        *plVar7 = lVar9;
        FUN_1424a3300(plVar7[-1],lVar9,plVar7 + 3);
        lVar9 = *(longlong *)*plVar7;
        uVar8 = FVoicePacketImpl::GetSampleCounter(plVar7[-1]);
        (**(code **)(lVar9 + 0x930))(*plVar7,uVar8,1);
        FUN_142399e30(*plVar7,lVar2,plVar7[2]);
        FUN_14234b150();
        plVar1 = plVar7 + 5;
        plVar7 = plVar7 + 6;
      } while (plVar1 != plVar10);
    }
    if (0 < (int)local_40) {
      (**(code **)(*param_1 + 0x538))(param_1,&local_48);
    }
    if ((int)local_40 != 0) {
      plVar10 = local_48 + 4;
      iVar5 = (int)local_40;
      do {
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 6;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140b1b3e0 FUN_140b1b3e0 body=27 status=ok
// SIG undefined FUN_140b1b3e0(void)

void FUN_140b1b3e0(undefined8 param_1)

{
  FUN_140b1b080();
  FUN_142fe5e40(param_1);
  return;
}



// FUNCTION 140b1b400 FUN_140b1b400 body=170 status=ok
// SIG undefined FUN_140b1b400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b1b400(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  if (param_2 != 0) {
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
    lVar1 = *(longlong *)(param_1 + 0x118);
    if (lVar1 != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x168);
      if (lVar2 == 0) {
        local_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        local_28 = _DAT_146868b90 & _DAT_146868ba0;
        uStack_24 = uRam0000000146868b94 & uRam0000000146868ba4;
        uStack_20 = uRam0000000146868b98 & uRam0000000146868ba8;
        uStack_1c = uRam0000000146868b9c & uRam0000000146868bac;
        local_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_3c = uRam0000000146868b9c;
      }
      else {
        local_48 = *(undefined4 *)(lVar2 + 0x210);
        uStack_44 = *(undefined4 *)(lVar2 + 0x214);
        uStack_40 = *(undefined4 *)(lVar2 + 0x218);
        local_38 = *(undefined4 *)(lVar2 + 0x220);
        uStack_34 = *(undefined4 *)(lVar2 + 0x224);
        uStack_30 = *(undefined4 *)(lVar2 + 0x228);
        uStack_2c = *(undefined4 *)(lVar2 + 0x22c);
        local_28 = *(uint *)(lVar2 + 0x230);
        uStack_24 = *(uint *)(lVar2 + 0x234);
        uStack_20 = *(uint *)(lVar2 + 0x238);
        uStack_1c = *(uint *)(lVar2 + 0x23c);
        uStack_3c = *(uint *)(lVar2 + 0x21c);
      }
      local_58 = param_2;
      FUN_140b537a0(&local_48,lVar1,*(undefined8 *)(param_1 + 0x230),
                    *(undefined8 *)(param_1 + 0x238));
    }
  }
  return;
}



// FUNCTION 140b1b4b0 FUN_140b1b4b0 body=1123 status=ok
// SIG undefined FUN_140b1b4b0(void)

undefined8 FUN_140b1b4b0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  if (param_1[0x95] != 0) {
    uVar5 = USafeZone::GetPrivateStaticClass();
    FUN_142c84570(param_1[0x95],uVar5);
  }
  plVar1 = param_1 + 0x8d;
  FUN_140b43e30(plVar1);
  FUN_140b43e30(param_1 + 0x90);
  uVar5 = FUN_142e43690();
  lVar6 = (**(code **)(*param_1 + 0x628))(param_1,uVar5);
  if (lVar6 != 0) {
    FUN_142d26700(lVar6);
  }
  cVar4 = FUN_140b2f360(param_1,param_1[0x94],0);
  if ((cVar4 != '\0') && (plVar7 = (longlong *)param_1[0x94], plVar7 != (longlong *)0x0)) {
    uVar5 = FUN_14301f8f0();
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x628))(plVar7,uVar5);
    if (plVar7 != (longlong *)0x0) {
      lVar6 = param_1[0x94];
      lVar10 = 0;
      if (lVar6 != 0) {
        lVar8 = FUN_14149b100();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          plVar11 = (longlong *)(lVar6 + 0x938);
          FUN_140483870(plVar11,param_1);
          plVar9 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar9 != (longlong *)0x0) {
            *plVar9 = (longlong)&PTR_FUN_143f4d170;
            FWeakObjectPtr::operator=(plVar9 + 1,param_1);
            plVar9[2] = (longlong)&LAB_140b3ae30;
            lVar8 = FDelegateHandle::GenerateNewID();
            plVar9[4] = lVar8;
            *plVar9 = (longlong)&PTR_FUN_143f4d1b8;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
            (**(code **)(*plVar9 + 0x20))(plVar9,local_res8);
            iVar2 = *(int *)(lVar6 + 0x940);
            *(int *)(lVar6 + 0x940) = iVar2 + 1;
            if (*(int *)(lVar6 + 0x944) < iVar2 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar2);
            }
            lVar6 = *plVar11;
            *(longlong **)(lVar6 + (longlong)iVar2 * 0x10) = plVar9;
            *(undefined4 *)(lVar6 + 8 + (longlong)iVar2 * 0x10) = 3;
          }
        }
      }
      local_34 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0x1000100;
      (**(code **)(*plVar7 + 0x4e8))(plVar7,param_1,0,0,&local_48);
      lVar6 = param_1[0x2d];
      if (lVar6 != 0) {
        lVar8 = FUN_1429bed90();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          param_1[0x91] = lVar6;
          FUN_140b30340(param_1 + 0x90);
          plVar7 = (longlong *)param_1[0x2a];
          if (plVar7 != (longlong *)0x0) {
            lVar6 = FUN_1413f82e0();
            if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
                lVar6 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (((bVar3) && (cVar4 = (**(code **)(*plVar7 + 0x780))(plVar7), cVar4 != '\0')) &&
               (cVar4 = (**(code **)(*plVar7 + 0x778))(plVar7), cVar4 != '\0')) {
              plVar9 = (longlong *)param_1[0x94];
              if (plVar9 != (longlong *)0x0) {
                uVar5 = FUN_14301f8f0();
                lVar6 = (**(code **)(*plVar9 + 0x628))(plVar9,uVar5);
                if (lVar6 != 0) {
                  lVar10 = *(longlong *)(lVar6 + 0x208);
                }
              }
              if (((lVar10 == 0) || ((*(byte *)(lVar10 + 0x1c8) & 2) != 0)) &&
                 ((cVar4 = FUN_140c39b60(plVar7,param_1[0x94]), cVar4 != '\0' &&
                  ((cVar4 = FUN_140b2f360(param_1,param_1[0x94],1), cVar4 != '\0' &&
                   (param_1[0x91] != 0)))))) {
                lVar6 = FUN_140b24120(plVar1);
                param_1[0x8e] = lVar6;
                local_58 = (longlong *)0x0;
                local_50 = 0;
                FUN_14238b380(param_1[0x91],0,&local_58);
                plVar7 = local_58 + (int)local_50;
                for (plVar9 = local_58; plVar9 != plVar7; plVar9 = plVar9 + 1) {
                  lVar6 = *plVar9;
                  if (lVar6 != 0) {
                    lVar10 = FUN_1429bed90();
                    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                      bVar3 = false;
                    }
                    else {
                      bVar3 = true;
                    }
                    if ((bVar3) && (lVar10 = FUN_140b24120(plVar1,lVar6), lVar10 != 0)) {
                      FUN_142382f60(lVar10,param_1[0x8e],&DAT_146532188,
                                    *(undefined8 *)(lVar6 + 0x198));
                    }
                  }
                }
                FUN_140b30340(plVar1);
                if (local_58 != (longlong *)0x0) {
                  FMemory::Free();
                }
              }
            }
          }
        }
      }
      FUN_140b1bae0(param_1);
      if (local_48 != 0) {
        FMemory::Free();
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140b1b920 FUN_140b1b920 body=444 status=ok
// SIG undefined FUN_140b1b920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b1b920(longlong *param_1,longlong param_2,undefined8 param_3,char param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_90;
  undefined8 local_88;
  char local_80;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined1 local_48;
  undefined2 local_47;
  undefined1 local_45;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  plVar5 = (longlong *)param_1[1];
  if ((plVar5 != (longlong *)0x0) && (param_2 != 0)) {
    local_60 = DAT_1468b5da0;
    local_58 = DAT_1468b5da8;
    local_54 = _DAT_1468b5d90;
    local_70 = 0;
    local_68 = 0;
    local_4c = DAT_1468b5d98;
    local_47 = 1;
    local_45 = 1;
    local_48 = 1;
    local_88 = param_3;
    local_80 = param_4;
    if ((param_4 != '\0') &&
       ((*param_1 != 0 && (plVar6 = *(longlong **)(*param_1 + 0x4a0), plVar6 != (longlong *)0x0))))
    {
      uVar3 = FUN_14301f8f0();
      local_68 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar3);
      plVar5 = (longlong *)param_1[1];
    }
    local_90 = param_5;
    local_a0 = param_5;
    local_a8 = CONCAT44(param_5,param_5);
    (**(code **)(*plVar5 + 0x3f8))(local_a8,&local_a8);
    FUN_142fe6850(param_1[1],param_2,&local_88);
    FUN_140b409d0(param_1[1],param_2);
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    FUN_14238b380(param_1[1],1,&local_b8);
    plVar5 = local_b8 + (int)local_b0;
    for (plVar6 = local_b8; plVar6 != plVar5; plVar6 = plVar6 + 1) {
      lVar1 = *plVar6;
      if (lVar1 != 0) {
        lVar4 = FUN_1429bed90();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_140b409d0(lVar1,param_2);
        }
      }
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  return;
}



// FUNCTION 140b1bae0 FUN_140b1bae0 body=459 status=ok
// SIG undefined FUN_140b1bae0(void)

void FUN_140b1bae0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  lVar6 = *(longlong *)(param_1 + 0x150);
  lVar7 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x4a0);
  local_res10 = 0;
  if (lVar6 != 0) {
    lVar5 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      cVar4 = FUN_140c42740(lVar6,uVar1,&local_res10,local_res8);
      if ((cVar4 != '\0') && (plVar2 = *(longlong **)(param_1 + 0x150), plVar2 != (longlong *)0x0))
      {
        lVar5 = FUN_1413f82e0();
        lVar6 = plVar2[2];
        if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if (*(longlong *)(param_1 + 0x470) != 0) {
            lVar6 = FUN_140b27940(param_1,CONCAT71((int7)((ulonglong)lVar6 >> 8),1));
            uVar8 = (**(code **)(plVar2[0x1b1] + 200))(plVar2 + 0x1b1,0,1);
            if (lVar6 != 0) {
              FUN_140b1b920(param_1 + 0x468,lVar6,local_res10,local_res8[0],uVar8);
            }
          }
          if (*(longlong *)(param_1 + 0x488) != 0) {
            lVar6 = *(longlong *)(param_1 + 0x150);
            if (lVar6 != 0) {
              lVar5 = AHeoCon::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                lVar7 = *(longlong *)(lVar6 + 0x4c0);
              }
            }
            uVar8 = (**(code **)(plVar2[0x1b1] + 200))(plVar2 + 0x1b1,0,0);
            if (lVar7 != 0) {
              FUN_140b1b920(param_1 + 0x480,lVar7,local_res10,local_res8[0],uVar8);
            }
          }
          (**(code **)(*plVar2 + 0xbf8))(plVar2,param_1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b1bcb0 FUN_140b1bcb0 body=533 status=ok
// SIG undefined FUN_140b1bcb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b1bcb0(longlong *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  float fVar5;
  char cVar6;
  longlong lVar7;
  float local_28;
  float fStack_24;
  undefined8 local_1c;
  float local_14;
  
  if (param_2 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (param_3 != 0)) && ((*(byte *)((longlong)param_1 + 0x70c) & 2) == 0)) {
      lVar7 = *(longlong *)(param_2 + 0x488);
      if ((*(longlong *)(param_3 + 0x140) != 0) && (lVar7 != 0)) {
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        if (*(longlong *)(DAT_146b33f38 + 0xd8) != 0) {
          lVar2 = param_1[0x2d];
          if (lVar2 == 0) {
            local_1c = _DAT_1468b5d90;
            local_14 = DAT_1468b5d98;
          }
          else {
            local_1c = *(undefined8 *)(lVar2 + 0x220);
            local_14 = *(float *)(lVar2 + 0x228);
          }
          fVar5 = local_14;
          uVar4 = local_1c;
          lVar7 = *(longlong *)(lVar7 + 0x168);
          if (lVar7 == 0) {
            local_1c = _DAT_1468b5d90;
            local_14 = DAT_1468b5d98;
          }
          else {
            local_1c = *(undefined8 *)(lVar7 + 0x220);
            local_14 = *(float *)(lVar7 + 0x228);
          }
          fVar1 = *(float *)(*(longlong *)(DAT_146b33f38 + 0xd8) + 0x110);
          fStack_24 = (float)((ulonglong)uVar4 >> 0x20);
          fStack_24 = (float)((ulonglong)local_1c >> 0x20) - fStack_24;
          local_28 = (float)uVar4;
          local_28 = (float)local_1c - local_28;
          if ((fStack_24 * fStack_24 + local_28 * local_28 + (local_14 - fVar5) * (local_14 - fVar5)
               < fVar1 * fVar1) &&
             ((*(longlong *)(param_3 + 0x138) == 0 ||
              (cVar6 = FUN_142c48f60(*(longlong *)(param_3 + 0x138),param_1,param_2), cVar6 != '\0')
              ))) {
            FUN_141460620(param_2,param_1);
            (**(code **)(*param_1 + 0x600))(param_1);
          }
        }
      }
      lVar7 = FUN_140c44ae0(param_1);
      if (lVar7 != 0) {
        FUN_140c4b670(lVar7,param_1);
      }
      *(byte *)((longlong)param_1 + 0x70c) = *(byte *)((longlong)param_1 + 0x70c) | 2;
    }
  }
  return;
}



// FUNCTION 140b1bed0 FUN_140b1bed0 body=879 status=ok
// SIG undefined FUN_140b1bed0(void)

void FUN_140b1bed0(ulonglong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong local_res8;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong *local_60;
  undefined8 local_58;
  
  if ((*(longlong *)(param_1 + 0x4f0) != 0) && (*(longlong *)(param_1 + 0x730) == 0)) {
    local_60 = (longlong *)0x0;
    local_58 = 0;
    cVar6 = FUN_142d472a0(param_1,param_1 + 0x890,&local_60);
    if (cVar6 != '\0') {
      local_res8 = param_1;
      AlgoImpl::
      IntroSortInternal<AVillageSocket_*,FIdentityFunctor,TDereferenceWrapper<AVillageSocket_*,<lambda_62ded9058879722249fd3bf388cc91c4>_>_>
                (local_60,(longlong)(int)local_58,param_1 & 0xff,&local_res8);
      plVar5 = local_60;
      if ((0 < (int)local_58) && (*local_60 != 0)) {
        fVar8 = *(float *)(param_1 + 0x94c);
        fVar13 = 0.0;
        if (fVar8 == 0.0) {
          fVar8 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x948));
          *(float *)(param_1 + 0x94c) = fVar8;
        }
        lVar2 = *(longlong *)(param_1 + 0x4f0);
        lVar3 = *(longlong *)(param_1 + 0x168);
        uVar1 = *(undefined8 *)(lVar2 + 0x18c);
        fVar9 = (float)uVar1;
        local_88._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        local_80 = 0;
        fVar14 = SQRT(fVar9 * fVar9 + local_88._4_4_ * local_88._4_4_);
        if (lVar3 == 0) {
          local_70 = DAT_1468b5d98;
          local_78 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        }
        else {
          local_70 = *(undefined4 *)(lVar3 + 0x228);
          local_78 = *(undefined8 *)(lVar3 + 0x220);
        }
        uVar4 = local_78;
        local_64 = local_70;
        local_6c = local_78;
        lVar3 = *(longlong *)(*plVar5 + 0x168);
        if (lVar3 == 0) {
          local_70 = DAT_1468b5d98;
          local_78 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        }
        else {
          local_70 = *(undefined4 *)(lVar3 + 0x228);
          local_78 = *(undefined8 *)(lVar3 + 0x220);
        }
        local_6c._0_4_ = (float)uVar4;
        fVar12 = (float)local_78 - (float)local_6c;
        local_6c._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
        fVar11 = (float)((ulonglong)local_78 >> 0x20) - local_6c._4_4_;
        fVar9 = fVar12 * fVar9 + fVar11 * local_88._4_4_;
        local_88 = uVar1;
        local_6c = uVar4;
        if (fVar8 < ABS(fVar9)) {
          if (fVar9 <= 0.0) {
            fVar8 = 1.0;
          }
          else {
            fVar8 = -1.0;
          }
          local_6c = 0;
          local_64 = 0x3f800000;
          puVar7 = (undefined8 *)
                   FVector::RotateAngleAxis
                             (&local_88,&local_78,fVar8 * *(float *)(param_1 + 0x948),&local_6c);
          local_88 = *puVar7;
          fVar13 = *(float *)(puVar7 + 1);
          fVar11 = (float)((ulonglong)local_88 >> 0x20);
          fVar12 = (float)local_88;
        }
        fVar9 = fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13;
        fVar8 = fVar11;
        fVar13 = fVar12;
        if ((fVar9 != 1.0) && (fVar8 = DAT_1468b5d94, fVar13 = DAT_1468b5d90, 1e-08 <= fVar9)) {
          auVar10 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
          fVar13 = auVar10._0_4_;
          fVar13 = fVar13 + fVar13 * (0.5 - fVar9 * 0.5 * fVar13 * fVar13);
          fVar13 = fVar13 + fVar13 * (0.5 - fVar9 * 0.5 * fVar13 * fVar13);
          fVar8 = fVar11 * fVar13;
          fVar13 = fVar12 * fVar13;
        }
        local_80 = *(undefined4 *)(lVar2 + 0x194);
        *(ulonglong *)(lVar2 + 0x18c) = CONCAT44(fVar8 * fVar14,fVar13 * fVar14);
        *(undefined4 *)(lVar2 + 0x194) = local_80;
      }
    }
    if (local_60 != (longlong *)0x0) {
      FMemory::Free(local_60);
    }
  }
  return;
}



// FUNCTION 140b1c240 FUN_140b1c240 body=1449 status=ok
// SIG undefined FUN_140b1c240(void)

void FUN_140b1c240(longlong param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  int *piVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  uint *puVar13;
  wchar_t *pwVar14;
  longlong *plVar15;
  bool bVar16;
  float fVar17;
  uint *local_res8;
  ulonglong local_res10;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  undefined1 local_78 [16];
  code *local_68;
  undefined2 local_60;
  code *local_58;
  ulonglong uStack_50;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  FUN_141264210();
  if (*(char *)(param_1 + 0x128) == '\x03') {
    *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_1 + 0x7ac);
    *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_1 + 0x7b0);
    *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_1 + 0x7b4);
  }
  else {
    FUN_140b30a70(param_1,*(undefined8 *)(param_1 + 0x6e8));
  }
  pwVar14 = (wchar_t *)0x0;
  if (*(longlong *)(param_1 + 0x728) != 0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&AGrenade::OnGrenadeBounce",L"::");
    pwVar9 = pwVar14;
    while (pwVar11 = pwVar6, pwVar11 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
      pwVar9 = pwVar11;
    }
    FName::FName(&local_res10,pwVar9 + 2,1);
    lVar12 = *(longlong *)(param_1 + 0x728);
    plVar15 = (longlong *)(lVar12 + 0x1f0);
    FWeakObjectPtr::operator=(&local_98,0);
    uStack_90 = 0;
    FWeakObjectPtr::operator=(&local_98,param_1);
    uStack_90 = local_res10;
    local_res8 = (uint *)0x0;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_98), lVar7 != 0)) {
      UObject::FindFunction(lVar7,uStack_90);
    }
    piVar2 = (int *)*plVar15;
    iVar1 = *(int *)(lVar12 + 0x1f8);
    for (piVar10 = piVar2; piVar10 != piVar2 + (longlong)iVar1 * 4; piVar10 = piVar10 + 4) {
      if (((*piVar10 == (int)local_98) &&
          (local_98._4_4_ = (int)((ulonglong)local_98 >> 0x20),
          bVar16 = piVar10[1] == local_98._4_4_, bVar16)) ||
         ((cVar3 = FWeakObjectPtr::IsValid(piVar10), cVar3 == '\0' &&
          (cVar3 = FWeakObjectPtr::IsValid(&local_98), cVar3 == '\0')))) {
        bVar16 = true;
      }
      else {
        bVar16 = false;
      }
      if ((bVar16) && (*(ulonglong *)(piVar10 + 2) == uStack_90)) {
        bVar16 = true;
      }
      else {
        bVar16 = false;
      }
      if (bVar16) {
        if ((int)((longlong)piVar10 - (longlong)piVar2 >> 4) != -1) goto LAB_140b1c410;
        break;
      }
    }
    iVar1 = *(int *)(lVar12 + 0x1f8);
    lVar7 = (longlong)iVar1;
    *(int *)(lVar12 + 0x1f8) = iVar1 + 1;
    if (*(int *)(lVar12 + 0x1fc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar1);
    }
    lVar12 = *plVar15;
    *(int *)(lVar12 + lVar7 * 0x10) = (int)local_98;
    *(int *)(lVar12 + 4 + lVar7 * 0x10) = local_98._4_4_;
    *(ulonglong *)(lVar12 + 8 + lVar7 * 0x10) = uStack_90;
LAB_140b1c410:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
    uStack_90 = uStack_90 & 0xffffffff00000000;
    local_98 = FUN_140b38060;
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&AGrenade::OnGrenadeLastBounce",L"::");
    pwVar9 = pwVar14;
    while (pwVar11 = pwVar6, pwVar11 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
      pwVar9 = pwVar11;
    }
    FName::FName(&local_res8,pwVar9 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x728) + 600,param_1,&local_98,local_res8);
    if ((*(char *)(param_1 + 0x128) == '\x03') &&
       (*(int *)(param_1 + 0x7cc) + *(int *)(param_1 + 0x7c8) + *(int *)(param_1 + 0x7c4) +
        *(int *)(param_1 + 0x7c0) + *(int *)(param_1 + 0x7bc) + *(int *)(param_1 + 0x7b8) == 0)) {
      *(float *)(*(longlong *)(param_1 + 0x728) + 0x194) =
           *(float *)(param_1 + 0x7a8) + *(float *)(*(longlong *)(param_1 + 0x728) + 0x194);
    }
  }
  lVar12 = *(longlong *)(param_1 + 0x6e8);
  if (lVar12 != 0) {
    if (*(char *)(param_1 + 0x128) == '\x03') {
      fVar17 = *(float *)(lVar12 + 0x59c);
      if (*(float *)(lVar12 + 0x59c) <= *(float *)(lVar12 + 0x594)) {
        fVar17 = *(float *)(lVar12 + 0x594);
      }
      *(float *)(param_1 + 0x7b4) = fVar17;
    }
    plVar15 = *(longlong **)(param_1 + 0x7e8);
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x290))(plVar15,param_1);
    }
    local_68 = (code *)(param_1 + 0x820);
    iVar1 = *(int *)(param_1 + 0x848);
    puStack_48 = (uint *)(param_1 + 0x830);
    local_98 = (code *)0x100000000;
    local_88._4_4_ = 0;
    uStack_80 = 0;
    if (iVar1 != 0) {
      puVar13 = *(uint **)(param_1 + 0x840);
      if (*(uint **)(param_1 + 0x840) == (uint *)0x0) {
        puVar13 = puStack_48;
      }
      uVar4 = *puVar13;
      pwVar9 = pwVar14;
      pwVar6 = pwVar14;
      while (uVar4 == 0) {
        iVar5 = (int)pwVar9;
        uStack_80 = (int)pwVar6 + 0x20;
        pwVar6 = (wchar_t *)(ulonglong)uStack_80;
        pwVar9 = (wchar_t *)(ulonglong)(iVar5 + 1U);
        local_98._4_4_ = (int)((ulonglong)local_98 >> 0x20);
        local_98 = (code *)CONCAT44(local_98._4_4_,iVar5 + 1U);
        if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140b1c5f0;
        uVar4 = puVar13[(longlong)iVar5 + 1];
      }
      uVar4 = uVar4 - 1 & uVar4 ^ uVar4;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      local_98 = (code *)CONCAT44(uVar4,(int)local_98);
      if (uVar4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_88._4_4_ = (uStack_80 - iVar5) + 0x1f;
      if (iVar1 < local_88._4_4_) {
LAB_140b1c5f0:
        local_88._4_4_ = iVar1;
      }
    }
    auStack_40._4_4_ = local_88._4_4_;
    auStack_40._0_4_ = 0xffffffff;
    auStack_40._8_4_ = uStack_80;
    auStack_40._12_4_ = iStack_7c;
    uStack_50 = (ulonglong)local_98;
    local_60 = 0;
    local_30._0_4_ = SUB84(local_68,0);
    local_30._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
    uStack_80 = 0xffffffff;
    iStack_7c = local_88._4_4_;
    uStack_90 = (ulonglong)local_98;
    local_78._8_4_ = (undefined4)local_30;
    local_78._0_8_ = auStack_40._8_8_;
    local_78._12_4_ = local_30._4_4_;
    bVar16 = local_88._4_4_ < *(int *)(param_1 + 0x848);
    local_98 = local_68;
    local_58 = local_68;
    local_30 = local_68;
    local_88 = puStack_48;
    if (bVar16) {
      do {
        plVar15 = *(longlong **)((longlong)iStack_7c * 0x40 + *(longlong *)local_98);
        (**(code **)(*plVar15 + 0x298))
                  (plVar15,param_1,*(undefined8 *)(param_1 + 0x6e8),
                   *(longlong *)local_98 + 8 + (longlong)iStack_7c * 0x40);
        uStack_80 = uStack_80 & ~uStack_90._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
      } while (iStack_7c < (int)local_88[6]);
      if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
        TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_68,*(int *)(local_68 + 8) - *(int *)(local_68 + 0x34),1);
      }
    }
    *(undefined8 *)(param_1 + 0x5d0) = *(undefined8 *)(*(longlong *)(param_1 + 0x6e8) + 0x568);
  }
  if ((*(char *)(param_1 + 0x75c) != '\0') && (*(longlong *)(param_1 + 0x878) != 0)) {
    lVar7 = FUN_1413077e0();
    for (lVar12 = *(longlong *)(param_1 + 0x878); lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x30)
        ) {
      if (lVar12 == lVar7) {
        if (*(longlong *)(param_1 + 0x878) == 0) {
          return;
        }
        pwVar6 = (wchar_t *)FUN_1413077e0();
        for (pwVar9 = *(wchar_t **)(param_1 + 0x878);
            (pwVar11 = pwVar14, pwVar9 != (wchar_t *)0x0 &&
            (pwVar11 = *(wchar_t **)(param_1 + 0x878), pwVar9 != pwVar6));
            pwVar9 = *(wchar_t **)(pwVar9 + 0x18)) {
        }
        lVar12 = *(longlong *)(pwVar11 + 0x7c);
        if (lVar12 == 0) {
          (**(code **)(*(longlong *)pwVar11 + 0x368))(pwVar11);
          lVar12 = *(longlong *)(pwVar11 + 0x7c);
          if (lVar12 == 0) {
            return;
          }
        }
        lVar7 = FUN_1413077e0();
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar16 = false;
        }
        else {
          bVar16 = true;
        }
        if (!bVar16) {
          return;
        }
        local_res8 = (uint *)0x0;
        uVar8 = FUN_142e11920(lVar12,param_1);
        uVar8 = FUN_140b1a100(param_1,uVar8,0,1);
        FUN_140b3fd40(param_1,uVar8,DAT_146868f28);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140b1c7f0 FUN_140b1c7f0 body=599 status=ok
// SIG undefined FUN_140b1c7f0(void)

void FUN_140b1c7f0(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res8;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  code *local_28;
  ulonglong uStack_20;
  
  if (param_1[0xdd] != 0) {
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = FUN_140b2f4e0;
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&AGrenadeHealingProjectile::HealHomingTarget",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    FUN_1407260e0(param_1[0xdd] + 0x1f0,param_1,&local_28,local_res8);
  }
  FUN_141264210(param_1);
  (**(code **)(*param_1 + 0x3a0))(param_1,0x41200000);
  FUN_1430890e0(param_1,param_1[0x23]);
  if (param_1[0xdd] != 0) {
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = FUN_140b2f4e0;
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&AGrenadeHealingProjectile::HealHomingTarget",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    FUN_1407260e0(param_1[0xdd] + 0x1f0,param_1,&local_28,local_res8);
    if (*(longlong *)(param_1[0xdd] + 0x1a0) == 0) {
      *(longlong *)(param_1[0xdd] + 0x1a0) = param_1[0x23];
    }
  }
  local_58 = 0x3f8000003f800000;
  local_50 = 0x3f800000;
  local_40 = DAT_1468b5da8;
  local_30 = 0;
  local_48 = DAT_1468b5da0;
  local_38 = 0;
  uStack_20 = uStack_20 & 0xffffffff00000000;
  local_res8 = 0;
  FUN_14245fd00(param_1[0xe3],param_1[0x2d],0,&local_38,&local_48,&local_58,2,1,0,1,0);
  if ((((char)param_1[0x25] != '\x03') && (param_1[0xe4] != 0)) && (param_1[0xe5] != 0)) {
    FUN_1405abab0();
  }
  return;
}



// FUNCTION 140b1ca50 FUN_140b1ca50 body=1345 status=ok
// SIG undefined FUN_140b1ca50(void)

void FUN_140b1ca50(longlong *param_1)

{
  int iVar1;
  void *_Src;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong local_res8;
  ulonglong *local_res10;
  ulonglong **local_res18;
  undefined8 ***local_res20;
  undefined8 local_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  uint uStack_a0;
  int iStack_9c;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined2 local_80;
  longlong *local_78;
  uint uStack_70;
  uint uStack_6c;
  uint *puStack_68;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  
  uVar5 = FUN_1413b4d10();
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x628))(param_1,uVar5);
  plVar13 = (longlong *)0x0;
  if (plVar6 == (longlong *)0x0) {
LAB_140b1cabb:
    plVar6 = plVar13;
  }
  else {
    lVar7 = FUN_1413b4d10();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140b1cabb;
  }
  param_1[0x98] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    lVar7 = (**(code **)(*plVar6 + 0x540))(plVar6);
    if (lVar7 != 0) {
      plVar6 = (longlong *)(**(code **)(*(longlong *)param_1[0x98] + 0x540))();
      param_1[0xa2] = (longlong)plVar6;
      (**(code **)(*plVar6 + 0x280))(plVar6,param_1);
    }
    if ((((param_1[0x9a] != 0) && (param_1[0x99] != 0)) &&
        (lVar7 = param_1[0x98], *(longlong *)(lVar7 + 0x3a8) != 0)) &&
       ((lVar8 = UNiagaraSystem::GetEffectType(), lVar8 != 0 &&
        (lVar7 = UNiagaraSystem::GetEffectType(*(undefined8 *)(lVar7 + 0x3a8)), lVar7 != 0)))) {
      (**(code **)(*(longlong *)param_1[0x9a] + 0x928))((longlong *)param_1[0x9a],lVar7);
      (**(code **)(*(longlong *)param_1[0x9a] + 0x418))((longlong *)param_1[0x9a],&DAT_146532190);
      lVar7 = *(longlong *)param_1[0x9a];
      uVar3 = (**(code **)(*(longlong *)param_1[0x99] + 0x4e8))();
      (**(code **)(lVar7 + 0x638))(param_1[0x9a],uVar3);
      lVar7 = *(longlong *)param_1[0x9a];
      uVar5 = (**(code **)(*(longlong *)param_1[0x99] + 0x4d0))();
      (**(code **)(lVar7 + 0x840))(param_1[0x9a],uVar5,0);
      local_res8 = 0;
      FUN_142382f60(param_1[0x99],param_1[0x9a],&DAT_146532180,0);
      FUN_142397540(param_1[0x99],1);
      FUN_14223f010(param_1,param_1[0x9a]);
    }
    local_b8 = (longlong *)0x0;
    iVar1 = *(int *)(param_1[0x98] + 0x3a0);
    _Src = *(void **)(param_1[0x98] + 0x398);
    _uStack_b0 = CONCAT44(uStack_ac,iVar1);
    plVar6 = plVar13;
    uVar10 = 0;
    if (iVar1 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_b8,iVar1,0);
      plVar6 = local_b8;
      _guard_xfg_dispatch_icall_nop(local_b8,_Src,(longlong)iVar1 << 3);
      uVar10 = uStack_b0;
    }
    plVar9 = (longlong *)
             ((ulonglong)((longlong)(plVar6 + (int)uVar10) + (7 - (longlong)plVar6)) >> 3);
    if (plVar6 + (int)uVar10 < plVar6) {
      plVar9 = plVar13;
    }
    plVar11 = plVar13;
    plVar14 = plVar6;
    if (plVar9 != (longlong *)0x0) {
      do {
        local_res18 = (ulonglong **)*plVar14;
        if (local_res18 != (ulonglong **)0x0) {
          TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
          ::FindId(param_1 + 0xa3,&local_res8);
          if (((int)local_res8 == -1) ||
             (lVar7 = (longlong)(int)local_res8 * 0x40 + param_1[0xa3], lVar7 == 0)) {
            local_res20 = &local_res18;
            FUN_140b13070(param_1 + 0xa3,&local_res10,&local_res20,0);
            lVar7 = (longlong)(int)local_res10 * 0x40 + param_1[0xa3];
          }
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        }
        plVar14 = plVar14 + 1;
        plVar11 = (longlong *)((longlong)plVar11 + 1);
      } while (plVar11 != plVar9);
    }
    if (plVar6 != (longlong *)0x0) {
      FMemory::Free(plVar6);
    }
  }
  local_res10 = &local_res8;
  local_res8 = local_res8 & 0xffffffffffffff00;
  plVar6 = param_1 + 0xa3;
  local_res18 = &local_res10;
  if (0 < (int)param_1[0xa4] - *(int *)((longlong)param_1 + 0x54c)) {
    TSparseArray<TSetElement<TTuple<UParticleSystem_*,`<lambda_deb06920f3722963109d8aa43b3c1784>::operator()'::`2'::FPSCInfoSummary>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Compact(plVar6);
    local_res20 = &local_res18;
    FUN_140b14620(*plVar6,(longlong)((int)param_1[0xa4] - *(int *)((longlong)param_1 + 0x54c)),
                  local_res8 & 0xff,&local_res20);
  }
  TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
  ::Rehash(plVar6);
  iVar1 = (int)param_1[0xa8];
  puStack_68 = (uint *)(param_1 + 0xa5);
  local_b8._0_4_ = 0;
  local_b8._4_4_ = 1;
  local_a8._4_4_ = 0;
  uStack_a0 = 0;
  if (iVar1 != 0) {
    puVar12 = (uint *)param_1[0xa7];
    if ((uint *)param_1[0xa7] == (uint *)0x0) {
      puVar12 = puStack_68;
    }
    uVar10 = *puVar12;
    plVar9 = plVar13;
    plVar11 = plVar13;
    while (uVar10 == 0) {
      iVar4 = (int)plVar9;
      uStack_a0 = (int)plVar11 + 0x20;
      plVar11 = (longlong *)(ulonglong)uStack_a0;
      local_b8._0_4_ = iVar4 + 1;
      plVar9 = (longlong *)(ulonglong)(uint)local_b8;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140b1ce50;
      uVar10 = puVar12[(longlong)iVar4 + 1];
    }
    local_b8._4_4_ = uVar10 - 1 & uVar10 ^ uVar10;
    iVar4 = 0x1f;
    if (local_b8._4_4_ != 0) {
      for (; local_b8._4_4_ >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (local_b8._4_4_ == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_a8._4_4_ = (uStack_a0 - iVar4) + 0x1f;
    if (iVar1 < local_a8._4_4_) {
LAB_140b1ce50:
      local_a8._4_4_ = iVar1;
    }
  }
  auStack_60._4_4_ = local_a8._4_4_;
  auStack_60._0_4_ = 0xffffffff;
  auStack_60._8_4_ = uStack_a0;
  auStack_60._12_4_ = iStack_9c;
  uStack_70 = (uint)local_b8;
  uStack_6c = local_b8._4_4_;
  local_80 = 0;
  local_50._0_4_ = SUB84(plVar6,0);
  local_50._4_4_ = (undefined4)((ulonglong)plVar6 >> 0x20);
  uStack_a0 = 0xffffffff;
  iStack_9c = local_a8._4_4_;
  uStack_b0 = (uint)local_b8;
  uStack_ac = local_b8._4_4_;
  local_98._8_4_ = (undefined4)local_50;
  local_98._0_8_ = auStack_60._8_8_;
  local_98._12_4_ = local_50._4_4_;
  bVar2 = local_a8._4_4_ < (int)param_1[0xa8];
  local_b8 = plVar6;
  local_88 = plVar6;
  local_78 = plVar6;
  local_50 = plVar6;
  local_a8 = puStack_68;
  if (bVar2) {
    do {
      plVar6 = *(longlong **)((longlong)iStack_9c * 0x40 + *local_b8);
      (**(code **)(*plVar6 + 0x288))(plVar6,param_1,*local_b8 + 8 + (longlong)iStack_9c * 0x40);
      uStack_a0 = uStack_a0 & ~uStack_ac;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
    } while (iStack_9c < (int)local_a8[6]);
    if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
    }
  }
  FUN_142223710(param_1);
  uVar5 = FUN_14301f8f0();
  plVar6 = (longlong *)AGameStateBase::OnRep_GameModeClass(param_1,uVar5);
  if (plVar6 != (longlong *)0x0) {
    lVar7 = FUN_14301f8f0();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140b1cf65;
  }
  plVar6 = plVar13;
LAB_140b1cf65:
  *(undefined4 *)(param_1 + 0x9b) = *(undefined4 *)((longlong)param_1 + 0x504);
  *(int *)(param_1 + 0x9c) = (int)param_1[0x9f];
  param_1[0x93] = (longlong)plVar6;
  return;
}



// FUNCTION 140b1cfa0 FUN_140b1cfa0 body=51 status=ok
// SIG undefined FUN_140b1cfa0(void)

void FUN_140b1cfa0(longlong param_1)

{
  FUN_142223710();
  FUN_14223c460(param_1,0);
  *(longlong *)(param_1 + 0x468) = param_1;
  *(undefined1 *)(param_1 + 0x478) = 1;
  *(longlong *)(param_1 + 0x480) = param_1;
  return;
}



// FUNCTION 140b1cfe0 FUN_140b1cfe0 body=132 status=ok
// SIG undefined FUN_140b1cfe0(void)

void FUN_140b1cfe0(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142223710();
  uVar2 = FUN_14301f8f0();
  lVar3 = AGameStateBase::OnRep_GameModeClass(param_1,uVar2);
  if (lVar3 != 0) {
    lVar4 = FUN_14301f8f0();
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
      *(longlong *)(param_1 + 0x498) = lVar3;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x498) = 0;
  return;
}



// FUNCTION 140b1d070 FUN_140b1d070 body=1406 status=ok
// SIG undefined FUN_140b1d070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b1d070(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  byte bVar13;
  longlong lVar14;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_142fe79a0();
  if ((*(byte *)(param_1 + 0xb5) & 2) != 0) {
    (**(code **)(*param_1 + 0x830))(param_1);
  }
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar14 = 0;
  bVar13 = 0;
  if (lVar6 != 0) {
    local_b8 = FUN_14301be20;
    uStack_b0 = 0;
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar6 + 400) == 0) {
      uVar9 = *(undefined8 *)(lVar6 + 0x3f8);
    }
    else {
      uVar9 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
    }
    lVar6 = param_1[0xda];
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_b8;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_b8._4_4_;
      *(undefined4 *)(plVar7 + 3) = uStack_b0;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_ac;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar8;
      *plVar7 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_a8 = 0;
    local_a0 = 0;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_c0 = 0xbf800000;
    local_c8 = 0;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar9,param_1 + 0xde,&local_a8,(int)lVar6);
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      lVar6 = FMemory::Realloc(plVar7,0,0);
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
  }
  lVar6 = param_1[0xd8];
  if (lVar6 != 0) {
    uStack_b0 = 0;
    local_b8 = (code *)&LAB_140b31a90;
    plVar12 = (longlong *)(lVar6 + 0x3a0);
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_1441db630;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_b8;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_b8._4_4_;
      *(undefined4 *)(plVar7 + 3) = uStack_b0;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_ac;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar8;
    }
    if (&local_b8 != plVar12) {
      if (plVar7 == (longlong *)0x0) {
        if ((*(int *)(lVar6 + 0x3a8) != 0) &&
           (plVar7 = (longlong *)*plVar12, plVar7 != (longlong *)0x0)) {
          (**(code **)(*plVar7 + 0x28))(plVar7,0);
          if (*plVar12 != 0) {
            lVar8 = FMemory::Realloc(*plVar12,0,0);
            *plVar12 = lVar8;
          }
          *(undefined4 *)(lVar6 + 0x3a8) = 0;
        }
        goto LAB_140b1d2d5;
      }
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar12);
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      lVar6 = FMemory::Realloc(plVar7,0,0);
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
  }
LAB_140b1d2d5:
  if (param_1[0x95] != 0) {
    lVar8 = FUN_1428dfc70();
    for (lVar6 = param_1[0x95]; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar8) {
        if (param_1[0x95] != 0) goto LAB_140b1d362;
        break;
      }
    }
  }
  if ((param_1[0xd5] != 0) && ((char)param_1[0x25] == '\x03')) {
    FUN_143018530(param_1);
    FUN_142fef430(param_1);
    FUN_142fefdb0(param_1);
  }
LAB_140b1d362:
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    if (*(char *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x428) == '\0') {
      bVar13 = 8;
    }
    *(byte *)(param_1 + 0xb5) = bVar13 | *(byte *)(param_1 + 0xb5) & 0xf7;
  }
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar6 != 0) {
    uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar6 = UWorld::GetGameState<APVPGameState>(uVar9);
    if (lVar6 != 0) {
      FUN_140cd74f0(lVar6,param_1);
    }
  }
  if (param_1[0xe3] == 0) {
    uVar9 = AArchVisCharacter::StaticClass();
    lVar6 = AGameStateBase::OnRep_GameModeClass(param_1,uVar9);
    if (lVar6 == 0) {
LAB_140b1d432:
      lVar6 = lVar14;
    }
    else {
      lVar8 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140b1d432;
    }
    param_1[0xe3] = lVar6;
    if ((lVar6 != 0) && (param_1[0xad] != 0)) {
      local_b8 = (code *)0x0;
      FUN_142382f60(lVar6,param_1[0x2d],&DAT_146532180,0);
    }
  }
  if (((char)param_1[0x25] == '\x03') && (param_1[0xe3] != 0)) {
    if (((*(byte *)(param_1 + 0x10) & 1) == 0) || ((*(byte *)(param_1 + 0xb5) & 1) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    FUN_142f6c130(param_1[0xe3],uVar3);
  }
  lVar8 = FUN_142dcfb00(param_1);
  lVar6 = lVar14;
  if (lVar8 != 0) {
    lVar10 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar6 = FUN_140cff230(lVar8);
    }
  }
  lVar8 = param_1[0xe2];
  if (lVar8 != 0) {
    lVar10 = USoundNodeEnveloper::StaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140b1d533;
  }
  lVar8 = lVar14;
LAB_140b1d533:
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if ((((lVar6 != 0) && (lVar8 != 0)) && (*(longlong *)(DAT_146b33f38 + 0x58) != 0)) &&
     (lVar8 == *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x360))) {
    *(int *)(lVar6 + 0x4fc) = *(int *)(lVar6 + 0x4fc) + 1;
    iVar11 = *(int *)(lVar6 + 0x4fc);
    iVar5 = *(int *)(lVar6 + 0x4f0) + -1;
    lVar8 = (longlong)iVar5;
    if (-1 < iVar5) {
      lVar10 = lVar8 << 4;
      do {
        lVar1 = *(longlong *)(lVar6 + 0x4e8);
        if (((*(int *)(lVar10 + 8 + lVar1) == 0) ||
            (plVar7 = *(longlong **)(lVar10 + lVar1), plVar7 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar7 + 0x40))(plVar7,1), cVar4 == '\0')) {
          lVar14 = 1;
        }
        lVar10 = lVar10 + -0x10;
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
      iVar11 = *(int *)(lVar6 + 0x4fc);
    }
    *(int *)(lVar6 + 0x4fc) = iVar11 + -1;
    if ((char)lVar14 != '\0') {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar6 + 0x4e8),0);
    }
  }
  return;
}



// FUNCTION 140b1d5f0 FUN_140b1d5f0 body=1175 status=ok
// SIG undefined FUN_140b1d5f0(void)

void FUN_140b1d5f0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  wchar_t *pwVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  uint *puVar15;
  longlong lVar16;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  uint local_b8;
  uint uStack_b4;
  int iStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_90;
  uint *local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined2 local_60;
  longlong *local_58;
  undefined8 uStack_50;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar10 = DAT_146b33f38;
  lVar16 = DAT_146b33f38 + 0xa0;
  lVar9 = FWeakObjectPtr::Get(lVar16);
  pwVar14 = (wchar_t *)0x0;
  if (lVar9 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar10 + 0xa8)) && (*(longlong *)(lVar10 + 0xb0) != 0)) {
      lVar9 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar16,lVar9);
      if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar10 + 0xa8) = DAT_1464b56f4;
      }
      lVar9 = FWeakObjectPtr::Get(lVar16);
      if (lVar9 != 0) goto LAB_140b1d69b;
    }
  }
  else {
LAB_140b1d69b:
    lVar10 = FUN_1413bd170();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      (**(code **)(*(longlong *)param_1[0x9d] + 0x930))
                ((longlong *)param_1[0x9d],*(undefined8 *)(lVar9 + 0x1c8),
                 CONCAT71((int7)((ulonglong)(lVar10 + 0x88) >> 8),1));
      param_1[0x9e] = *(longlong *)(lVar9 + 0x1d0);
      param_1[0x9f] = *(longlong *)(lVar9 + 0x1d8);
      param_1[0xb4] = *(longlong *)(lVar9 + 0x1e0);
    }
  }
  uVar11 = AInteractiveFoliageActor::GetPrivateStaticClass();
  pwVar12 = (wchar_t *)(**(code **)(*param_1 + 0x628))(param_1,uVar11);
  if (pwVar12 != (wchar_t *)0x0) {
    lVar10 = AInteractiveFoliageActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar12 + 8) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar12 + 8) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140b1d767;
  }
  pwVar12 = pwVar14;
LAB_140b1d767:
  param_1[0xa0] = (longlong)pwVar12;
  FUN_140b1cfe0(param_1);
  *(undefined1 *)(param_1 + 0xb3) = 0;
  pwVar13 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnShieldEquipped",L"::");
  pwVar12 = pwVar14;
  while (pwVar6 = pwVar13, pwVar6 != (wchar_t *)0x0) {
    pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
    pwVar12 = pwVar6;
  }
  FName::FName(&local_res10,pwVar12 + 2,1);
  FUN_14074ba20(param_1 + 0x94,param_1,FUN_140b394d0,local_res10);
  pwVar13 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnShieldUnequipped",L"::");
  pwVar12 = pwVar14;
  while (pwVar6 = pwVar13, pwVar6 != (wchar_t *)0x0) {
    pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
    pwVar12 = pwVar6;
  }
  FName::FName(local_res18,pwVar12 + 2,1);
  FUN_14074ba20(param_1 + 0x96,param_1,FUN_140b3a250,local_res18[0]);
  plVar1 = param_1 + 0xa2;
  local_b8 = 0;
  iVar2 = (int)param_1[0xa7];
  local_88 = (uint *)(param_1 + 0xa4);
  uStack_b4 = 1;
  iStack_a4 = 0;
  uStack_a0 = 0;
  if (iVar2 != 0) {
    puVar15 = (uint *)param_1[0xa6];
    if ((uint *)param_1[0xa6] == (uint *)0x0) {
      puVar15 = local_88;
    }
    uVar3 = *puVar15;
    pwVar12 = pwVar14;
    while (uVar3 == 0) {
      iVar8 = (int)pwVar12;
      uStack_a0 = (int)pwVar14 + 0x20;
      pwVar14 = (wchar_t *)(ulonglong)uStack_a0;
      local_b8 = iVar8 + 1;
      pwVar12 = (wchar_t *)(ulonglong)local_b8;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_140b1d8ec;
      uVar3 = puVar15[(longlong)iVar8 + 1];
    }
    uStack_b4 = uVar3 - 1 & uVar3 ^ uVar3;
    iVar8 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_a4 = (uStack_a0 - iVar8) + 0x1f;
    if (iVar2 < iStack_a4) {
LAB_140b1d8ec:
      iStack_a4 = iVar2;
    }
  }
  uStack_80 = CONCAT44(iStack_a4,0xffffffff);
  auStack_40._8_4_ = uStack_a0;
  auStack_40._0_8_ = uStack_80;
  auStack_40._12_4_ = uStack_9c;
  uStack_90 = CONCAT44(uStack_b4,local_b8);
  local_60 = 0;
  local_30._0_4_ = SUB84(plVar1,0);
  local_30._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  local_78._8_4_ = (undefined4)local_30;
  local_78._0_8_ = auStack_40._8_8_;
  local_78._12_4_ = local_30._4_4_;
  local_68 = plVar1;
  local_58 = plVar1;
  uStack_50 = uStack_90;
  puStack_48 = local_88;
  local_30 = plVar1;
  if (iStack_a4 < (int)param_1[0xa7]) {
    do {
      lVar10 = (longlong)iStack_a4 * 0x40;
      plVar4 = *(longlong **)(*plVar1 + lVar10);
      (**(code **)(*plVar4 + 0x278))(plVar4,param_1,*plVar1 + 8 + lVar10);
      if (((char)param_1[0xbb] == '\0') && (lVar10 = *(longlong *)(*plVar1 + lVar10), lVar10 != 0))
      {
        lVar9 = UFGPoleDescriptor::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((bVar5) && (cVar7 = FUN_140b5efa0(lVar10), cVar7 != '\0')) {
          *(undefined1 *)(param_1 + 0xbb) = 1;
        }
      }
      uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_90._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
      iStack_a4 = uStack_80._4_4_;
    } while (uStack_80._4_4_ < (int)local_88[6]);
    if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  if (((char)param_1[0x25] != '\x03') && (lVar10 = param_1[0x23], lVar10 != 0)) {
    lVar9 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (cVar7 = FUN_140c48e60(lVar10,param_1), cVar7 != '\0')) {
      FUN_140b394d0(param_1,lVar10);
    }
  }
  return;
}



// FUNCTION 140b1da90 FUN_140b1da90 body=59 status=ok
// SIG undefined FUN_140b1da90(void)

void FUN_140b1da90(longlong param_1)

{
  FUN_142d57a30();
  FUN_140b46ba0(param_1);
  if (*(longlong *)(param_1 + 0x208) != 0) {
    *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1dc);
  }
  FUN_140b46e30(param_1);
  return;
}



// FUNCTION 140b1dad0 FUN_140b1dad0 body=670 status=ok
// SIG undefined FUN_140b1dad0(void)

void FUN_140b1dad0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong local_res10;
  int local_38;
  int local_34;
  longlong local_30;
  
  FUN_142385110();
  pwVar6 = _guard_xfg_dispatch_icall_nop
                     (L"&UGrenadeLingeringBeamTriggerComponent::OnBeginOverlap",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res10,pwVar4 + 2,1);
  lVar7 = local_res10;
  plVar1 = (longlong *)(param_1 + 0x570);
  FWeakObjectPtr::operator=(&local_38,0);
  local_30 = 0;
  FWeakObjectPtr::operator=(&local_38,param_1);
  local_30 = lVar7;
  if ((lVar7 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_30);
  }
  piVar8 = (int *)*plVar1;
  iVar2 = *(int *)(param_1 + 0x578);
  for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar2 * 4; piVar9 = piVar9 + 4) {
    if ((((*piVar9 == local_38) && (piVar9[1] == local_34)) ||
        ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
         (cVar5 = FWeakObjectPtr::IsValid(&local_38), cVar5 == '\0')))) &&
       (*(longlong *)(piVar9 + 2) == local_30)) {
      if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140b1dc1f;
      break;
    }
  }
  iVar2 = *(int *)(param_1 + 0x578);
  *(int *)(param_1 + 0x578) = iVar2 + 1;
  if (*(int *)(param_1 + 0x57c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  piVar8 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
  *piVar8 = local_38;
  piVar8[1] = local_34;
  *(longlong *)(piVar8 + 2) = local_30;
LAB_140b1dc1f:
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  pwVar6 = _guard_xfg_dispatch_icall_nop
                     (L"&UGrenadeLingeringBeamTriggerComponent::OnEndOverlap",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res10,pwVar4 + 2,1);
  plVar1 = (longlong *)(param_1 + 0x580);
  FWeakObjectPtr::operator=(&local_38,0);
  local_30 = 0;
  FWeakObjectPtr::operator=(&local_38,param_1);
  local_30 = local_res10;
  if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_38), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_30);
  }
  piVar8 = (int *)*plVar1;
  iVar2 = *(int *)(param_1 + 0x588);
  piVar9 = piVar8;
  do {
    if (piVar9 == piVar8 + (longlong)iVar2 * 4) {
LAB_140b1dd19:
      iVar2 = *(int *)(param_1 + 0x588);
      *(int *)(param_1 + 0x588) = iVar2 + 1;
      if (*(int *)(param_1 + 0x58c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar8 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar8 = local_38;
      piVar8[1] = local_34;
      *(longlong *)(piVar8 + 2) = local_30;
LAB_140b1dd4f:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      return;
    }
    if ((((*piVar9 == local_38) && (piVar9[1] == local_34)) ||
        ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
         (cVar5 = FWeakObjectPtr::IsValid(&local_38), cVar5 == '\0')))) &&
       (*(longlong *)(piVar9 + 2) == local_30)) {
      if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140b1dd4f;
      goto LAB_140b1dd19;
    }
    piVar9 = piVar9 + 4;
  } while( true );
}



// FUNCTION 140b1dd70 FUN_140b1dd70 body=190 status=ok
// SIG undefined FUN_140b1dd70(void)

void FUN_140b1dd70(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = *(longlong **)(param_1 + 0x230);
  plVar1 = plVar5 + *(int *)(param_1 + 0x238);
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    lVar6 = *plVar5;
    if (lVar6 == 0) {
LAB_140b1dde2:
      lVar6 = 0;
    }
    else {
      lVar4 = FUN_14149c820();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140b1dde2;
    }
    FWeakObjectPtr::operator=(param_1 + 0x3b0,lVar6);
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x3b0);
    if (cVar3 != '\0') break;
  }
  FUN_142fe7b10(param_1);
  return;
}



// FUNCTION 140b1de30 FUN_140b1de30 body=1144 status=ok
// SIG undefined FUN_140b1de30(void)

void FUN_140b1de30(longlong param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  undefined4 *puVar11;
  code *pcVar12;
  int *piVar13;
  int iVar14;
  code *pcVar15;
  longlong *plVar16;
  longlong *plVar17;
  bool bVar18;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  longlong local_38;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar6 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar6 != 0) {
    local_58 = (code *)0x0;
    uStack_50 = 0;
    FUN_142ffa740(param_1 + 0x370,&local_58);
    pcVar15 = local_58 + (longlong)(int)uStack_50 * 0x88;
    pcVar12 = local_58;
    if (local_58 != pcVar15) {
LAB_140b1deb0:
      uVar5 = FHardwareCursor::GetHandle(pcVar12);
      cVar4 = FUN_140b8d3b0(lVar6,uVar5);
      if (cVar4 == '\0') goto code_r0x000140b1dec7;
      plVar8 = (longlong *)FUN_140b82990(lVar6,local_48);
      plVar17 = (longlong *)(param_1 + 0x498);
      if (plVar17 != plVar8) {
        iVar14 = *(int *)(param_1 + 0x4a0);
        lVar6 = *plVar17;
        if (iVar14 != 0) {
          plVar16 = (longlong *)(lVar6 + 0x78);
          do {
            if (*plVar16 != 0) {
              FMemory::Free();
            }
            plVar16 = plVar16 + 0x11;
            iVar14 = iVar14 + -1;
          } while (iVar14 != 0);
          lVar6 = *plVar17;
        }
        if (lVar6 != 0) {
          FMemory::Free();
        }
        *plVar17 = *plVar8;
        *plVar8 = 0;
        *(int *)(param_1 + 0x4a0) = (int)plVar8[1];
        *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)((longlong)plVar8 + 0xc);
        plVar8[1] = 0;
      }
      plVar17 = plVar8 + 2;
      plVar16 = (longlong *)(param_1 + 0x4a8);
      if (plVar16 != plVar17) {
        if (*plVar16 != 0) {
          FMemory::Free();
        }
        *plVar16 = *plVar17;
        *plVar17 = 0;
        *(int *)(param_1 + 0x4b0) = (int)plVar8[3];
        *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)((longlong)plVar8 + 0x1c);
        plVar8[3] = 0;
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
      TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
      ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(local_48);
    }
LAB_140b1df9f:
    if ((int)uStack_50 != 0) {
      pcVar12 = local_58 + 0x78;
      iVar14 = (int)uStack_50;
      do {
        if (*(longlong *)pcVar12 != 0) {
          FMemory::Free();
        }
        pcVar12 = pcVar12 + 0x88;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    if (local_58 != (code *)0x0) {
      FMemory::Free(local_58);
    }
  }
  FUN_142330a70(param_1);
  if (((*(longlong *)(param_1 + 0x120) != 0) || (lVar6 = FUN_1423407b0(param_1), lVar6 != 0)) &&
     (iVar14 = FUN_14233f450(param_1), iVar14 == 3)) {
    lVar6 = *(longlong *)(param_1 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(param_1);
    }
    lVar6 = *(longlong *)(lVar6 + 0x140);
    if (lVar6 != 0) {
      lVar7 = FUN_141425c60();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar18 = false;
      }
      else {
        bVar18 = true;
      }
      if (bVar18) {
        uStack_50 = uStack_50 & 0xffffffff00000000;
        local_58 = FUN_140b32c70;
        plVar17 = (longlong *)(lVar6 + 0x598);
        plVar8 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = (longlong)&PTR_FUN_143fcfec0;
          FWeakObjectPtr::operator=(plVar8 + 1,param_1);
          *(int *)(plVar8 + 2) = (int)local_58;
          *(int *)((longlong)plVar8 + 0x14) = local_58._4_4_;
          *(int *)(plVar8 + 3) = (int)uStack_50;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_50._4_4_;
          lVar7 = FDelegateHandle::GenerateNewID();
          plVar8[5] = lVar7;
          *plVar8 = (longlong)&PTR_FUN_143fcff08;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar17,1);
          (**(code **)(*plVar8 + 0x20))(plVar8,&local_res8);
          iVar14 = *(int *)(lVar6 + 0x5a0);
          *(int *)(lVar6 + 0x5a0) = iVar14 + 1;
          if (*(int *)(lVar6 + 0x5a4) < iVar14 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar17,iVar14);
          }
          puVar9 = (undefined8 *)((longlong)iVar14 * 0x10 + *plVar17);
          *puVar9 = plVar8;
          *(undefined4 *)(puVar9 + 1) = 3;
        }
      }
    }
    plVar17 = *(longlong **)(param_1 + 0x118);
    if (plVar17 != (longlong *)0x0) {
      uVar5 = FUN_142dfdf30();
      lVar6 = (**(code **)(*plVar17 + 0x628))(plVar17,uVar5);
      if (lVar6 != 0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop
                            (L"&UInventoryShopComponent::HandleOwnerExperienceLevelChanged",L"::");
        pwVar3 = (wchar_t *)0x0;
        while (pwVar2 = pwVar10, pwVar2 != (wchar_t *)0x0) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar3 = pwVar2;
        }
        FName::FName(&local_res10,pwVar3 + 2,1);
        plVar17 = (longlong *)(lVar6 + 0x1b0);
        FWeakObjectPtr::operator=(&local_58,0);
        uStack_50 = 0;
        FWeakObjectPtr::operator=(&local_58,param_1);
        uStack_50 = local_res10;
        local_res8 = 0;
        if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_58), lVar7 != 0)) {
          UObject::FindFunction(lVar7,uStack_50);
        }
        piVar1 = (int *)*plVar17;
        iVar14 = *(int *)(lVar6 + 0x1b8);
        for (piVar13 = piVar1; piVar13 != piVar1 + (longlong)iVar14 * 4; piVar13 = piVar13 + 4) {
          if (((*piVar13 == (int)local_58) &&
              (local_58._4_4_ = (int)((ulonglong)local_58 >> 0x20),
              bVar18 = piVar13[1] == local_58._4_4_, bVar18)) ||
             ((cVar4 = FWeakObjectPtr::IsValid(piVar13), cVar4 == '\0' &&
              (cVar4 = FWeakObjectPtr::IsValid(&local_58), cVar4 == '\0')))) {
            bVar18 = true;
          }
          else {
            bVar18 = false;
          }
          if ((bVar18) && (*(longlong *)(piVar13 + 2) == uStack_50)) {
            bVar18 = true;
          }
          else {
            bVar18 = false;
          }
          if (bVar18) {
            if ((int)((longlong)piVar13 - (longlong)piVar1 >> 4) != -1) goto LAB_140b1e285;
            break;
          }
        }
        iVar14 = *(int *)(lVar6 + 0x1b8);
        *(int *)(lVar6 + 0x1b8) = iVar14 + 1;
        if (*(int *)(lVar6 + 0x1bc) < iVar14 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar17,iVar14);
        }
        puVar11 = (undefined4 *)((longlong)iVar14 * 0x10 + *plVar17);
        *puVar11 = (int)local_58;
        puVar11[1] = local_58._4_4_;
        *(ulonglong *)(puVar11 + 2) = uStack_50;
LAB_140b1e285:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar17);
      }
    }
  }
  return;
code_r0x000140b1dec7:
  pcVar12 = pcVar12 + 0x88;
  if (pcVar12 == pcVar15) goto LAB_140b1df9f;
  goto LAB_140b1deb0;
}



// FUNCTION 140b1e2b0 FUN_140b1e2b0 body=652 status=ok
// SIG undefined FUN_140b1e2b0(void)

void FUN_140b1e2b0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  longlong local_48;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0x58);
  if ((lVar1 != 0) && (lVar3 = *(longlong *)(param_1 + 0x1a8), lVar3 != 0)) {
    lVar6 = *(longlong *)(lVar3 + 0x30);
    lVar3 = (longlong)*(int *)(lVar3 + 0x38) * 0x58 + lVar6;
    for (; lVar6 != lVar3; lVar6 = lVar6 + 0x58) {
      plVar12 = *(longlong **)(lVar6 + 0x48);
      plVar10 = plVar12 + (longlong)*(int *)(lVar6 + 0x50) * 0xb;
      for (; plVar12 != plVar10; plVar12 = plVar12 + 0xb) {
        if (*plVar12 != 0) {
          cVar2 = FUN_140b8d3b0(lVar1);
          if (cVar2 == '\0') {
            puVar8 = *(undefined8 **)(*plVar12 + 0x48);
            puVar11 = puVar8 + (longlong)*(int *)(*plVar12 + 0x50) * 0xe;
            for (; puVar8 != puVar11; puVar8 = puVar8 + 0xe) {
              uVar5 = FHardwareCursor::GetHandle(puVar8);
              cVar2 = FUN_140b8d3b0(lVar1,uVar5);
              if (cVar2 != '\0') {
                FUN_140b82990(lVar1,local_58);
                local_68 = 0;
                local_60 = 0;
                FUN_142ffa740(local_58,&local_68);
                if (0 < (int)local_60) {
                  uVar5 = FHardwareCursor::GetHandle(local_68);
                  *puVar8 = uVar5;
                }
                if ((int)local_60 != 0) {
                  plVar7 = (longlong *)(local_68 + 0x78);
                  iVar9 = (int)local_60;
                  do {
                    if (*plVar7 != 0) {
                      FMemory::Free();
                    }
                    plVar7 = plVar7 + 0x11;
                    iVar9 = iVar9 + -1;
                  } while (iVar9 != 0);
                }
                if (local_68 != 0) {
                  FMemory::Free();
                }
                if (local_48 != 0) {
                  FMemory::Free();
                }
                TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
                ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(local_58);
              }
            }
          }
          else {
            FUN_140b82990(lVar1,local_58);
            local_78 = 0;
            local_70 = 0;
            FUN_142ffa740(local_58,&local_78);
            if (0 < (int)local_70) {
              lVar4 = FHardwareCursor::GetHandle(local_78);
              *plVar12 = lVar4;
            }
            if ((int)local_70 != 0) {
              plVar7 = (longlong *)(local_78 + 0x78);
              iVar9 = (int)local_70;
              do {
                if (*plVar7 != 0) {
                  FMemory::Free();
                }
                plVar7 = plVar7 + 0x11;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            if (local_78 != 0) {
              FMemory::Free();
            }
            if (local_48 != 0) {
              FMemory::Free();
            }
            TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::
            ~TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>(local_58);
          }
        }
      }
    }
  }
  FUN_142fe7f80(param_1);
  return;
}



// FUNCTION 140b1e540 FUN_140b1e540 body=695 status=ok
// SIG undefined FUN_140b1e540(void)

void FUN_140b1e540(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
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
  
  FUN_142330a70();
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (lVar5 == 0) {
    return;
  }
  plVar2 = (longlong *)(lVar5 + 0x2b0);
  local_88 = 0;
  uVar3 = *(uint *)(lVar5 + 0x2d8);
  puVar1 = (uint *)(lVar5 + 0x2c0);
  uStack_84 = 1;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(lVar5 + 0x2d0);
    if (*(uint **)(lVar5 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar9 = local_88 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar9;
      if (bVar6) goto LAB_140b1e64b;
      uVar4 = puVar11[lVar8 + 1];
    }
    uStack_84 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar9 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_74 = (iStack_70 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_140b1e64b:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(lVar5 + 0x2d8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = *(uint **)(lVar5 + 0x2d0);
    if (*(uint **)(lVar5 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar7 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar9 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_140b1e717;
      uVar7 = puVar11[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar9 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_74 = (uVar10 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_140b1e717:
      uStack_74 = uVar3;
    }
  }
  do {
    if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      return;
    }
    lVar5 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if (lVar5 != 0) {
      lVar8 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) && (*(longlong *)(lVar5 + 0x18) == *(longlong *)(param_1 + 0x1b8))) {
        *(longlong *)(param_1 + 400) = lVar5;
        return;
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  } while( true );
}



// FUNCTION 140b1e800 FUN_140b1e800 body=1475 status=ok
// SIG undefined FUN_140b1e800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_140b1e800(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  wchar_t *pwVar14;
  bool bVar15;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  ulonglong local_d0 [3];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  pwVar9 = (wchar_t *)param_1[0x23];
  pwVar14 = (wchar_t *)0x0;
  if (pwVar9 != (wchar_t *)0x0) {
    lVar7 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar9 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar9 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (bVar15) goto LAB_140b1e875;
  }
  pwVar9 = pwVar14;
LAB_140b1e875:
  param_1[0xe9] = (longlong)pwVar9;
  *(undefined1 *)((longlong)param_1 + 0x771) = 1;
  (**(code **)(*param_1 + 0x358))(param_1,1);
  if ((param_1[0xea] == 0) && (param_1[0x23] != 0)) {
    lVar7 = FUN_142df3510();
    param_1[0xea] = lVar7;
  }
  pwVar8 = _guard_xfg_dispatch_icall_nop(L"&USingularityComponent::OnBeginOverlap",L"::");
  pwVar9 = pwVar14;
  while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar9 = pwVar4;
  }
  FName::FName(local_d0,pwVar9 + 2,1);
  uVar5 = local_d0[0];
  plVar10 = param_1 + 0xae;
  FWeakObjectPtr::operator=(&local_e8,0);
  local_e0 = 0;
  FWeakObjectPtr::operator=(&local_e8,param_1);
  local_e0 = uVar5;
  local_d8 = 0;
  if ((uVar5 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_e8), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_e0);
  }
  piVar3 = (int *)*plVar10;
  lVar7 = param_1[0xaf];
  uVar13 = local_e8;
  for (piVar12 = piVar3; local_e8 = (longlong *)uVar13, piVar12 != piVar3 + (longlong)(int)lVar7 * 4
      ; piVar12 = piVar12 + 4) {
    local_e8._0_4_ = (int)uVar13;
    if (((*piVar12 == (int)local_e8) &&
        (local_e8._4_4_ = (int)((ulonglong)uVar13 >> 0x20), bVar15 = piVar12[1] == local_e8._4_4_,
        bVar15)) ||
       ((cVar6 = FWeakObjectPtr::IsValid(piVar12), cVar6 == '\0' &&
        (cVar6 = FWeakObjectPtr::IsValid(&local_e8), cVar6 == '\0')))) {
      bVar15 = true;
    }
    else {
      bVar15 = false;
    }
    if ((bVar15) && (*(ulonglong *)(piVar12 + 2) == local_e0)) {
      bVar15 = true;
    }
    else {
      bVar15 = false;
    }
    if (bVar15) {
      if ((int)((longlong)piVar12 - (longlong)piVar3 >> 4) != -1) goto LAB_140b1ea00;
      break;
    }
    uVar13 = local_e8;
  }
  iVar2 = (int)param_1[0xaf];
  *(int *)(param_1 + 0xaf) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x57c) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar2);
  }
  puVar11 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar10);
  *puVar11 = (int)local_e8;
  puVar11[1] = local_e8._4_4_;
  *(ulonglong *)(puVar11 + 2) = local_e0;
LAB_140b1ea00:
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
  pwVar9 = _guard_xfg_dispatch_icall_nop(L"&USingularityComponent::OnEndOverlap",L"::");
  while (pwVar8 = pwVar9, pwVar8 != (wchar_t *)0x0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
    pwVar14 = pwVar8;
  }
  FName::FName(local_d0,pwVar14 + 2,1);
  uVar5 = local_d0[0];
  plVar10 = param_1 + 0xb0;
  FWeakObjectPtr::operator=(&local_e8,0);
  local_e0 = 0;
  FWeakObjectPtr::operator=(&local_e8,param_1);
  local_e0 = uVar5;
  local_d8 = 0;
  if ((uVar5 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_e8), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_e0);
  }
  piVar3 = (int *)*plVar10;
  lVar7 = param_1[0xb1];
  piVar12 = piVar3;
  uVar13 = local_e8;
  do {
    local_e8 = (longlong *)uVar13;
    if (piVar12 == piVar3 + (longlong)(int)lVar7 * 4) {
LAB_140b1eb25:
      iVar2 = (int)param_1[0xb1];
      *(int *)(param_1 + 0xb1) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x58c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar2);
      }
      puVar11 = (undefined4 *)((longlong)iVar2 * 0x10 + *plVar10);
      *puVar11 = (int)local_e8;
      puVar11[1] = local_e8._4_4_;
      *(ulonglong *)(puVar11 + 2) = local_e0;
LAB_140b1eb60:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
      (**(code **)(*param_1 + 0x488))(param_1,0,1,0);
      if (((longlong *)param_1[0x23] != (longlong *)0x0) &&
         (lVar7 = (**(code **)(*(longlong *)param_1[0x23] + 0x148))(), lVar7 != 0)) {
        local_e8 = (longlong *)0x0;
        local_e0 = local_e0 & 0xffffffff00000000;
        FWeakObjectPtr::operator=(local_d0,param_1);
        local_d8 = local_d0[0];
        plVar10 = (longlong *)FMemory::Realloc(0,0x20);
        if (plVar10 == (longlong *)0x0) {
          if ((((int)local_e0 != 0) && (local_e8 != (longlong *)0x0)) &&
             ((**(code **)(*local_e8 + 0x28))(local_e8,0), local_e8 != (longlong *)0x0)) {
            local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
          }
        }
        else {
          *plVar10 = (longlong)&PTR_GetPoolName_1442abb78;
          *(int *)(plVar10 + 1) = (int)local_d0[0];
          *(undefined4 *)((longlong)plVar10 + 0xc) = local_d8._4_4_;
          lVar7 = FDelegateHandle::GenerateNewID();
          plVar10[3] = lVar7;
          *plVar10 = (longlong)&PTR_GetPoolName_1442abbc0;
          TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
          ::CreateCopy(plVar10,&local_e8);
          (**(code **)(*plVar10 + 0x28))(plVar10,0);
          lVar7 = FMemory::Realloc(plVar10,0,0);
          if (lVar7 != 0) {
            FMemory::Free(lVar7);
          }
        }
        local_d0[1] = 0;
        lVar7 = (**(code **)(*(longlong *)param_1[0x23] + 0x148))();
        if (*(longlong *)(lVar7 + 400) == 0) {
          uVar13 = *(undefined8 *)(lVar7 + 0x3f8);
        }
        else {
          uVar13 = *(undefined8 *)(*(longlong *)(lVar7 + 400) + 0x90);
        }
        uVar1 = *(undefined4 *)((longlong)param_1 + 0x774);
        local_b8 = 0;
        local_b0 = 0;
        if (((int)local_e0 != 0) && (local_e8 != (longlong *)0x0)) {
          (**(code **)(*local_e8 + 0x30))(local_e8,&local_b8);
        }
        FWeakObjectPtr::operator=(local_a8,0);
        local_f0 = 0xbf800000;
        local_f8 = 0;
        local_a0 = 0;
        local_68 = (longlong *)0x0;
        local_58 = 0;
        local_98 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar13,local_d0 + 1,&local_b8,uVar1);
        if (local_58 != 0) {
          plVar10 = local_88;
          if (local_68 != (longlong *)0x0) {
            plVar10 = local_68;
          }
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x10))(plVar10,0);
          }
        }
        if (local_68 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
        if ((int)local_e0 != 0) {
          if (local_e8 == (longlong *)0x0) {
            return;
          }
          (**(code **)(*local_e8 + 0x28))(local_e8,0);
          if (local_e8 != (longlong *)0x0) {
            local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
          }
          local_e0 = local_e0 & 0xffffffff00000000;
        }
        if (local_e8 != (longlong *)0x0) {
          FMemory::Free(local_e8);
        }
      }
      return;
    }
    local_e8._0_4_ = (int)uVar13;
    if (((*piVar12 == (int)local_e8) &&
        (local_e8._4_4_ = (int)((ulonglong)uVar13 >> 0x20), bVar15 = piVar12[1] == local_e8._4_4_,
        bVar15)) ||
       ((cVar6 = FWeakObjectPtr::IsValid(piVar12), cVar6 == '\0' &&
        (cVar6 = FWeakObjectPtr::IsValid(&local_e8), cVar6 == '\0')))) {
      bVar15 = true;
    }
    else {
      bVar15 = false;
    }
    if ((bVar15) && (*(ulonglong *)(piVar12 + 2) == local_e0)) {
      bVar15 = true;
    }
    else {
      bVar15 = false;
    }
    if (bVar15) {
      if ((int)((longlong)piVar12 - (longlong)piVar3 >> 4) != -1) goto LAB_140b1eb60;
      goto LAB_140b1eb25;
    }
    piVar12 = piVar12 + 4;
    uVar13 = local_e8;
  } while( true );
}



// FUNCTION 140b1edd0 FUN_140b1edd0 body=891 status=ok
// SIG undefined FUN_140b1edd0(void)

void FUN_140b1edd0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  wchar_t *pwVar3;
  char cVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  int *piVar8;
  int *piVar9;
  wchar_t *pwVar10;
  undefined8 local_res10;
  longlong local_res18 [2];
  int local_48;
  int local_44;
  longlong local_40;
  
  if (param_2 != 0) {
    pwVar10 = (wchar_t *)0x0;
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnOwnerCrouched",L"::");
    pwVar7 = pwVar10;
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar7 = pwVar3;
    }
    FName::FName(&local_res10,pwVar7 + 2,1);
    FUN_14074ba20(param_2 + 0x24f0,param_1,FUN_140b38470,local_res10);
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnOwnerUncrouched",L"::");
    pwVar7 = pwVar10;
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar7 = pwVar3;
    }
    FName::FName(&local_res10,pwVar7 + 2,1);
    FUN_14074ba20(param_2 + 0x2500,param_1,FUN_140b38ad0,local_res10);
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnOwnerHealthStateChanged",L"::");
    pwVar7 = pwVar10;
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar7 = pwVar3;
    }
    FName::FName(local_res18,pwVar7 + 2,1);
    lVar6 = local_res18[0];
    plVar1 = (longlong *)(param_2 + 0xec8);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1);
    local_40 = lVar6;
    local_res10 = 0;
    if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_48), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_40);
    }
    piVar8 = (int *)*plVar1;
    iVar2 = *(int *)(param_2 + 0xed0);
    for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar2 * 4; piVar9 = piVar9 + 4) {
      if ((((*piVar9 == local_48) && (piVar9[1] == local_44)) ||
          ((cVar4 = FWeakObjectPtr::IsValid(piVar9), cVar4 == '\0' &&
           (cVar4 = FWeakObjectPtr::IsValid(&local_48), cVar4 == '\0')))) &&
         (*(longlong *)(piVar9 + 2) == local_40)) {
        if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140b1efef;
        break;
      }
    }
    iVar2 = *(int *)(param_2 + 0xed0);
    *(int *)(param_2 + 0xed0) = iVar2 + 1;
    if (*(int *)(param_2 + 0xed4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    piVar8 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
    *piVar8 = local_48;
    piVar8[1] = local_44;
    *(longlong *)(piVar8 + 2) = local_40;
LAB_140b1efef:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnOwnerEnteredVehicle",L"::");
    while (pwVar5 = pwVar7, pwVar5 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar10 = pwVar5;
    }
    FName::FName(local_res18,pwVar10 + 2,1);
    plVar1 = (longlong *)(param_2 + 0x1d88);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1);
    local_res10 = 0;
    local_40 = local_res18[0];
    if ((local_res18[0] != 0) && (lVar6 = FWeakObjectPtr::Get(&local_48), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_40);
    }
    piVar8 = (int *)*plVar1;
    iVar2 = *(int *)(param_2 + 0x1d90);
    for (piVar9 = piVar8; piVar9 != piVar8 + (longlong)iVar2 * 4; piVar9 = piVar9 + 4) {
      if ((((*piVar9 == local_48) && (piVar9[1] == local_44)) ||
          ((cVar4 = FWeakObjectPtr::IsValid(piVar9), cVar4 == '\0' &&
           (cVar4 = FWeakObjectPtr::IsValid(&local_48), cVar4 == '\0')))) &&
         (*(longlong *)(piVar9 + 2) == local_40)) {
        if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140b1f125;
        break;
      }
    }
    iVar2 = *(int *)(param_2 + 0x1d90);
    *(int *)(param_2 + 0x1d90) = iVar2 + 1;
    if (*(int *)(param_2 + 0x1d94) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    piVar8 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
    *piVar8 = local_48;
    piVar8[1] = local_44;
    *(longlong *)(piVar8 + 2) = local_40;
LAB_140b1f125:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  }
  return;
}



// FUNCTION 140b1f150 FUN_140b1f150 body=930 status=ok
// SIG undefined FUN_140b1f150(void)

void FUN_140b1f150(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong local_b8 [3];
  longlong *plStack_a0;
  longlong local_98;
  longlong *plStack_90;
  undefined1 local_88 [32];
  longlong local_68;
  longlong local_58;
  longlong local_48;
  longlong local_38;
  
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if ((lVar7 == 0) || (lVar7 = *(longlong *)(lVar7 + 400), lVar7 == 0)) {
LAB_140b1f1b9:
    lVar7 = 0;
  }
  else {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140b1f1b9;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar8 = param_1[0x8f];
  lVar12 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar8 != 0) {
    lVar9 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (plVar11 = *(longlong **)(lVar8 + 0x9c0), plVar11 != (longlong *)0x0)) {
      lVar8 = FUN_14145f370();
      if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_140b1f25d;
    }
  }
  plVar11 = (longlong *)0x0;
LAB_140b1f25d:
  lVar8 = ATrap::GetActivationShapeComponent(param_1);
  if (lVar8 != 0) {
    lVar9 = FUN_14142bde0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) &&
       ((*(longlong *)(lVar8 + 0x208) == 0 ||
        (*(longlong *)(*(longlong *)(lVar8 + 0x208) + 0x230) == 0)))) {
      if (param_1[0xe2] == 0) {
        if (*(longlong *)(lVar8 + 0x210) == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x210) + 0xb8);
        }
        param_1[0xe2] = lVar9;
      }
      if (lVar12 == 0) {
        lVar9 = 0;
        lVar12 = 0;
      }
      else {
        lVar9 = *(longlong *)(lVar12 + 0x358);
        lVar12 = *(longlong *)(lVar12 + 0x360);
      }
      if (((lVar7 != 0) && (plVar11 != (longlong *)0x0)) &&
         (cVar6 = (**(code **)(*plVar11 + 0x768))(plVar11), cVar6 != '\0')) {
        FUN_142dcf3a0(plVar11);
        if ((((local_b8[2] != 0) && (lVar4 = param_1[0xe2], lVar4 != 0)) &&
            ((lVar9 != 0 && (lVar12 != 0)))) && ((lVar4 == lVar9 || (lVar4 == lVar12)))) {
          _guard_xfg_dispatch_icall_nop(local_88,0,0x68);
          FUN_142ff3000(lVar8,local_88);
          local_b8[0] = 0;
          local_b8[1] = 0;
          cVar6 = FUN_142ff5c90(local_88,local_b8,1);
          if (cVar6 != '\0') {
            local_98 = local_b8[2];
            plStack_90 = plStack_a0;
            if (plStack_a0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
              UNLOCK();
            }
            uVar10 = FUN_140bb7220(lVar7);
            FUN_140d6b2d0(uVar10,&local_98,local_b8,0);
            plVar11 = plStack_90;
            if (plStack_90 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_90 + 1;
              lVar7 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plStack_90)(plStack_90);
                LOCK();
                piVar2 = (int *)((longlong)plVar11 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
          }
          if (local_b8[0] != 0) {
            FMemory::Free();
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
        if (plStack_a0 != (longlong *)0x0) {
          LOCK();
          plVar11 = plStack_a0 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_a0)(plStack_a0);
            LOCK();
            piVar2 = (int *)((longlong)plStack_a0 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140b1f500 FUN_140b1f500 body=764 status=ok
// SIG undefined FUN_140b1f500(void)

float * FUN_140b1f500(longlong param_1,float *param_2,float *param_3,float param_4)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_a8;
  undefined4 local_a0;
  float local_98 [36];
  
  if (*(char *)(param_1 + 0x780) == '\x01') {
    local_a0 = 0xbf800000;
  }
  else {
    if (*(char *)(param_1 + 0x780) != '\x02') goto LAB_140b1f5a7;
    local_a0 = 0x3f800000;
  }
  local_a8 = 0;
  puVar1 = (undefined8 *)FVector::RotateAngleAxis(param_3,local_98,0x42b40000,&local_a8);
  local_a8 = *puVar1;
LAB_140b1f5a7:
  fVar10 = *(float *)(param_1 + 0x784);
  fVar7 = *(float *)(param_1 + 0x790) * param_3[2];
  param_3[2] = fVar7;
  if (fVar10 <= param_4) {
    fVar10 = *(float *)(param_1 + 0x78c);
  }
  else {
    fVar10 = 1.0;
  }
  fVar5 = param_3[1];
  fVar9 = *param_3;
  fVar3 = fVar9 * fVar9 + fVar5 * fVar5 + fVar7 * fVar7;
  if (fVar3 == 1.0) {
    local_98[0] = (float)*(undefined8 *)param_3;
    fVar8 = param_3[2];
    fVar4 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
  }
  else {
    fVar8 = DAT_1468b5d98;
    fVar4 = DAT_1468b5d94;
    local_98[0] = DAT_1468b5d90;
    if (1e-08 <= fVar3) {
      auVar6 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar4 = auVar6._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      local_98[0] = fVar9 * fVar4;
      fVar8 = fVar7 * fVar4;
      fVar4 = fVar5 * fVar4;
    }
  }
  fVar3 = 1.0 - fVar10;
  fVar2 = local_a8._4_4_ * local_a8._4_4_ + (float)local_a8 * (float)local_a8;
  fVar7 = (float)local_a8;
  fVar5 = local_a8._4_4_;
  fVar9 = 0.0;
  if ((fVar2 != 1.0) &&
     (fVar7 = DAT_1468b5d90, fVar5 = DAT_1468b5d94, fVar9 = DAT_1468b5d98, 1e-08 <= fVar2)) {
    auVar6 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
    fVar5 = auVar6._0_4_;
    fVar5 = fVar5 + fVar5 * (0.5 - fVar2 * 0.5 * fVar5 * fVar5);
    fVar5 = fVar5 + fVar5 * (0.5 - fVar2 * 0.5 * fVar5 * fVar5);
    fVar7 = (float)local_a8 * fVar5;
    fVar5 = local_a8._4_4_ * fVar5;
    fVar9 = 0.0;
  }
  *param_2 = fVar7 * fVar10 + local_98[0] * fVar3;
  param_2[1] = fVar5 * fVar10 + fVar4 * fVar3;
  param_2[2] = fVar9 * fVar10 + fVar8 * fVar3;
  return param_2;
}



// FUNCTION 140b1f810 FUN_140b1f810 body=54 status=ok
// SIG undefined FUN_140b1f810(void)

void FUN_140b1f810(undefined8 *param_1,undefined8 param_2)

{
  FUN_143014080(*param_1,param_2,*(undefined4 *)(param_1 + 1),param_1[2],
                *(undefined8 *)(param_1[3] + 0x3d0),0,*(undefined1 *)(param_1 + 4));
  return;
}



// FUNCTION 140b1f870 FUN_140b1f870 body=737 status=ok
// SIG undefined FUN_140b1f870(void)

char FUN_140b1f870(longlong param_1,longlong param_2,undefined1 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar10 = 0;
  if ((*(byte *)(param_1 + 0x70c) & 1) == 0) goto LAB_140b1f93d;
  if (param_2 == 0) {
    return '\0';
  }
  lVar7 = AHeoCon::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
      != lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return '\0';
  }
  lVar7 = *(longlong *)(param_2 + 0x9c0);
  if (lVar7 == 0) {
LAB_140b1f926:
    lVar7 = lVar10;
  }
  else {
    lVar8 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140b1f926;
  }
  lVar8 = FUN_140b2aac0(param_1);
  if (lVar7 != lVar8) {
    return '\0';
  }
LAB_140b1f93d:
  lVar7 = FUN_142ffa140(param_1,param_2);
  if (((lVar7 != 0) && (cVar4 = FUN_143003580(lVar7), cVar4 != '\0')) &&
     (iVar6 = FUN_143017ba0(lVar7,param_1), 0 < iVar6)) {
    cVar4 = FUN_140b31db0(param_1,param_2,param_4);
    if (cVar4 != '\0') {
      return '\x01';
    }
    if (param_2 != 0) {
      lVar7 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar10 = param_2;
      }
    }
    if (((param_4 == '\0') && (lVar10 != 0)) && (lVar7 = *(longlong *)(param_1 + 0x4c0), lVar7 != 0)
       ) {
      uVar9 = FUN_140c428a0(lVar10);
      lVar7 = FUN_140e80e00(uVar9,lVar7);
      if ((lVar7 != 0) &&
         (cVar4 = FUN_140c39630(lVar10,*(undefined8 *)(param_1 + 0x568)), cVar4 != '\0')) {
        return '\x01';
      }
    }
    if (((*(longlong *)(param_1 + 0x4c0) != 0) && (lVar10 != 0)) &&
       (cVar4 = FUN_140c39630(lVar10,*(undefined8 *)(param_1 + 0x568)), cVar4 != '\0')) {
      return param_4;
    }
  }
  cVar4 = FUN_142fe9c70(param_1,param_2,param_3,param_4);
  if ((cVar4 == '\0') && (lVar10 = *(longlong *)(param_1 + 0x568), lVar10 != 0)) {
    lVar7 = FUN_14142fee0();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FText::FText(local_38,lVar10 + 0x480);
      FText::operator=(param_1 + 0x540,local_38);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
    }
  }
  lVar10 = ATrap::GetActivationShapeComponent(param_1);
  if (((*(longlong *)(param_1 + 0x4c0) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x4c0) + 0x38) != '\0')) &&
     ((lVar10 != 0 && ((param_4 != '\0' || (cVar5 = FUN_142fe9d60(lVar10,param_2), cVar5 != '\0'))))
     )) {
    cVar4 = '\x01';
  }
  return cVar4;
}



// FUNCTION 140b1fb60 FUN_140b1fb60 body=471 status=ok
// SIG undefined FUN_140b1fb60(void)

undefined8 FUN_140b1fb60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((*(char *)(param_1 + 0x478) != '\0') && (param_2 != 0)) &&
     (lVar1 = *(longlong *)(param_2 + 0x9c0), lVar1 != 0)) {
    lVar4 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = FUN_14145f370();
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
        if ((*(longlong *)(param_1 + 0x498) != 0) &&
           (cVar3 = FUN_143003260(*(longlong *)(param_1 + 0x498),lVar1), cVar3 != '\0')) {
          return 0;
        }
        lVar4 = 0;
        if (*(longlong *)(param_1 + 0x498) != 0) {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 0x208);
        }
        if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x230), lVar4 != 0)) {
          lVar5 = FUN_14142e810();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            cVar3 = FUN_140d01d10(lVar1,lVar4);
          }
          else {
            lVar5 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              cVar3 = FUN_140d01880(lVar1,lVar4);
            }
            else {
              lVar5 = FUN_1412fb190();
              if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) {
                return 0;
              }
              cVar3 = FUN_140d01780(lVar1,lVar4);
            }
          }
          if (cVar3 == '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140b1fd50 FUN_140b1fd50 body=102 status=ok
// SIG undefined FUN_140b1fd50(void)

ulonglong FUN_140b1fd50(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar1 = FUN_1423407b0();
    uVar2 = 0;
    if (lVar1 == 0) goto LAB_140b1fdae;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
  uVar2 = FUN_1428cdc10(lVar1);
  if ((char)uVar2 != '\0') {
    lVar1 = FUN_140b825a0(param_1);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_140cb68f0(lVar1);
      if ((char)uVar2 == '\x01') {
        return uVar2;
      }
    }
  }
LAB_140b1fdae:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140b1fdc0 FUN_140b1fdc0 body=67 status=ok
// SIG undefined FUN_140b1fdc0(void)

undefined1 FUN_140b1fdc0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_142fe9de0();
  if (cVar1 != '\0') {
    cVar1 = FUN_140b31bc0(param_1,*(undefined8 *)(param_2 + 0x20));
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140b1fe10 FUN_140b1fe10 body=41 status=ok
// SIG undefined FUN_140b1fe10(void)

bool FUN_140b1fe10(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142fe9df0();
  if (cVar1 == '\0') {
    return false;
  }
  return *(longlong *)(param_1 + 0x6f8) == 0;
}



// FUNCTION 140b1fe40 FUN_140b1fe40 body=53 status=ok
// SIG undefined FUN_140b1fe40(void)

undefined1 FUN_140b1fe40(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(byte *)(param_1 + 0x70c) & 1) == 0) {
    return 1;
  }
  plVar2 = (longlong *)FUN_140b2aac0();
  if ((plVar2 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar2 + 0x768))(plVar2), cVar1 != '\0')
     ) {
    return 1;
  }
  return 0;
}



// FUNCTION 140b1fe80 FUN_140b1fe80 body=67 status=ok
// SIG undefined FUN_140b1fe80(void)

undefined1 FUN_140b1fe80(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_142fe9e70();
  if (cVar1 != '\0') {
    cVar1 = FUN_140b31bc0(param_1,*(undefined8 *)(param_2 + 0x20));
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140b1fed0 FUN_140b1fed0 body=60 status=ok
// SIG undefined FUN_140b1fed0(void)

bool FUN_140b1fed0(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = *(float *)(lVar1 + 0x790);
  }
  return fVar2 + *(float *)(param_1 + 0xe5) < *(float *)((longlong)param_1 + 0x72c);
}



// FUNCTION 140b1ff10 FUN_140b1ff10 body=86 status=ok
// SIG undefined FUN_140b1ff10(void)

undefined8 FUN_140b1ff10(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = FUN_14222e2a0();
  if (lVar1 == 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar1 == 0) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = *(float *)(lVar1 + 0x790);
    }
    if (fVar2 <= *(float *)(param_1 + 0xe1) + *(float *)(param_1 + 0xcf)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140b1ff80 FUN_140b1ff80 body=276 status=ok
// SIG undefined FUN_140b1ff80(void)

undefined8 FUN_140b1ff80(longlong *param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  cVar1 = ACutsceneManager::ServerVoteSkipCutscene_Validate();
  if (cVar1 == '\0') {
LAB_140b2007c:
    uVar4 = 0;
  }
  else {
    plVar6 = (longlong *)param_3[0xad];
    uVar4 = FUN_142dfdf30();
    if (plVar6 == (longlong *)0x0) {
      lVar8 = *param_3;
    }
    else {
      lVar8 = *plVar6;
      param_3 = plVar6;
    }
    plVar5 = (longlong *)(**(code **)(lVar8 + 0x628))(param_3,uVar4);
    plVar6 = (longlong *)param_1[0x23];
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      uVar4 = FUN_142dfdf30();
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x628))(plVar6,uVar4);
    }
    if ((plVar5 != (longlong *)0x0) && (plVar6 != (longlong *)0x0)) {
      iVar2 = (**(code **)(*plVar6 + 0x408))();
      iVar3 = (**(code **)(*plVar5 + 0x408))(plVar5);
      if (iVar2 < iVar3) goto LAB_140b2007c;
    }
    cVar1 = FUN_143003580(param_1);
    if (cVar1 != '\0') {
      lVar8 = param_1[0x45];
      lVar7 = (longlong)(int)param_1[0x46] * 0x40 + lVar8;
      if (lVar8 != lVar7) {
        while (*(longlong *)(lVar8 + 0x20) != param_2) {
          lVar8 = lVar8 + 0x40;
          if (lVar8 == lVar7) {
            return 1;
          }
        }
        if ((lVar8 != 0) && (cVar1 = (**(code **)(*param_1 + 0x478))(param_1), cVar1 == '\0'))
        goto LAB_140b2007c;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 140b200a0 FUN_140b200a0 body=234 status=ok
// SIG undefined FUN_140b200a0(void)

ulonglong FUN_140b200a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_48 [32];
  longlong local_28;
  
  FUN_142fde510(local_48);
  uVar2 = FUN_142ffa4f0(param_1,param_2,local_48);
  if (((char)uVar2 != '\0') && (local_28 != 0)) {
    lVar3 = FUN_14142fee0();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar2 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(local_28 + 0x10) + 0x90) < iVar1) ||
       (uVar2 = *(ulonglong *)(*(longlong *)(local_28 + 0x10) + 0x88),
       *(longlong *)(uVar2 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      uVar2 = uVar2 & 0xffffffffffffff00;
    }
    else {
      uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
    }
    if (((char)uVar2 != '\0') && (lVar3 = *(longlong *)(param_1 + 0x118), lVar3 != 0)) {
      lVar4 = FUN_1413f82e0();
      iVar1 = *(int *)(lVar4 + 0x90);
      uVar2 = (longlong)iVar1;
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar1) ||
         (uVar2 = *(ulonglong *)(*(longlong *)(lVar3 + 0x10) + 0x88),
         *(longlong *)(uVar2 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
        uVar2 = uVar2 & 0xffffffffffffff00;
      }
      else {
        uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
      }
      if ((char)uVar2 != '\0') {
        uVar2 = FUN_14142f5b0(local_28,lVar3);
        return uVar2;
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140b20190 FUN_140b20190 body=1836 status=ok
// SIG undefined FUN_140b20190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b20190(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  void *_Src;
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_268 [32];
  uint local_248;
  undefined8 local_240;
  undefined1 local_238;
  undefined8 local_230;
  undefined1 local_228;
  longlong *local_218;
  int local_210;
  undefined8 local_208;
  longlong local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8 [2];
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1c8;
  longlong local_1c0 [4];
  undefined4 local_1a0;
  void *local_198;
  int local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  float local_158;
  undefined4 local_154;
  undefined1 local_150;
  undefined8 local_14c;
  undefined8 uStack_144;
  undefined8 local_13c;
  undefined4 local_134;
  undefined1 local_130;
  undefined1 local_12f;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_200 = param_4;
  uVar4 = FUN_14222e2a0(param_2);
  FWeakObjectPtr::operator=(&local_1f0,uVar4);
  FUN_1422279d0(param_2,&DAT_146532190);
  local_1c8 = *(undefined8 *)(param_1 + 0x58);
  local_1c0[0] = 0;
  local_1c0[1] = 0;
  local_1c0[2] = 0;
  local_1c0[3] = 0;
  FGameplayTagContainer::operator=(local_1c0,param_1 + 0x60);
  local_190 = *(int *)(param_1 + 0x90);
  lVar7 = (longlong)local_190;
  local_1a0 = *(undefined4 *)(param_1 + 0x80);
  _Src = *(void **)(param_1 + 0x88);
  local_198 = (void *)0x0;
  if (local_190 == 0) {
    local_18c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_198,local_190,0);
    _guard_xfg_dispatch_icall_nop(local_198,_Src,lVar7 << 3);
  }
  local_188 = *(undefined8 *)(param_1 + 0x98);
  local_180 = *(undefined4 *)(param_1 + 0xa0);
  local_17c = *(undefined4 *)(param_1 + 0xa4);
  local_170 = *(undefined8 *)(param_1 + 0xb0);
  local_168 = *(undefined8 *)(param_1 + 0xb8);
  local_160 = *(undefined8 *)(param_1 + 0xc0);
  local_178 = *(undefined4 *)(param_1 + 0xa8);
  local_150 = *(undefined1 *)(param_1 + 0xd0);
  local_158 = *(float *)(param_1 + 200);
  local_134 = *(undefined4 *)(param_1 + 0xec);
  local_14c = *(undefined8 *)(param_1 + 0xd4);
  uStack_144 = *(undefined8 *)(param_1 + 0xdc);
  local_130 = *(undefined1 *)(param_1 + 0xf0);
  local_12f = *(undefined1 *)(param_1 + 0xf1);
  local_13c = *(undefined8 *)(param_1 + 0xe4);
  local_128 = *(undefined8 *)(param_1 + 0xf8);
  local_120 = *(undefined4 *)(param_1 + 0x100);
  local_118 = *(undefined8 *)(param_1 + 0x108);
  local_154 = *(undefined4 *)(param_1 + 0xcc);
  local_110 = *(undefined4 *)(param_1 + 0x110);
  local_158 = (float)FUN_140afed70(param_1,param_4);
  if (local_158 < 0.0001) {
    local_158 = *(float *)(param_1 + 200);
  }
  if ((*(byte *)((longlong)param_2 + 0x94) & 0x18) == 0x10) {
    fVar8 = *(float *)(param_2 + 0x91);
  }
  else {
    fVar8 = *(float *)(param_2 + 0xf6);
  }
  fVar8 = fVar8 * *(float *)(param_1 + 0x48);
  fVar9 = *(float *)(param_1 + 0x4c);
  if ((*(float *)(param_1 + 0x4c) <= fVar8) && (fVar9 = fVar8, *(float *)(param_1 + 0x50) <= fVar8))
  {
    fVar9 = *(float *)(param_1 + 0x50);
  }
  uVar4 = AArchVisCharacter::StaticClass();
  lVar7 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
  if (lVar7 == 0) {
LAB_140b203fa:
    FUN_1417846f0(param_2,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    local_208 = 0;
    uVar4 = AArchVisCharacter::StaticClass();
    local_228 = 0;
    local_230 = 0;
    local_238 = 0;
    local_240 = 0;
    local_248 = 0;
    lVar7 = FUN_1417985e0(uVar4,param_2,0,0);
    if (lVar7 != 0) goto LAB_140b20445;
  }
  else {
    lVar5 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140b203fa;
LAB_140b20445:
    FUN_140b31350(lVar7,fVar9,&local_1c8);
    FUN_140b1e800(lVar7);
  }
  if ((*(int *)((longlong)param_2 + 0x7c4) == 0) &&
     (plVar6 = (longlong *)param_2[0xe5], plVar6 != (longlong *)0x0)) {
    *(undefined4 *)((longlong)plVar6 + 0x1dc) = 0;
    local_1d8 = *(undefined4 *)(param_1 + 0x54);
    *(uint *)(plVar6 + 0x39) = *(uint *)(plVar6 + 0x39) & 0xfffffffd;
    *(undefined8 *)((longlong)plVar6 + 0x18c) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x194) = local_1d8;
    (**(code **)(*plVar6 + 0x450))(plVar6,param_2[0x2d]);
    (**(code **)(*plVar6 + 0x280))(plVar6,0);
    *(undefined1 *)(plVar6 + 0x59) = 0;
  }
  lVar7 = FWeakObjectPtr::Get(&local_1f0);
  if ((lVar7 == 0) && (plVar6 = (longlong *)param_2[0xdf], plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x838))(plVar6,0);
    (**(code **)(*plVar6 + 0x830))(plVar6,0,2);
    (**(code **)(*plVar6 + 0x830))(plVar6,1,2);
  }
  lVar7 = (**(code **)(*param_2 + 0x148))(param_2);
  if ((lVar7 != 0) && (param_3 != 0)) {
    local_218 = (longlong *)0x0;
    local_210 = 0;
    FWeakObjectPtr::operator=(&local_208,param_2);
    FWeakObjectPtr::operator=(&local_1f8,param_1);
    uVar4 = FUN_1413b53a0();
    lVar7 = FUN_140b2c110(param_3,uVar4,local_1e8);
    uVar2 = (undefined4)local_208;
    uVar3 = local_208._4_4_;
    if (lVar7 == 0) {
      local_1e8[0] = local_1ec;
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 == (longlong *)0x0) {
        param_4 = local_200;
        if (((local_210 != 0) && (local_218 != (longlong *)0x0)) &&
           ((**(code **)(*local_218 + 0x28))(local_218,0), param_4 = local_200,
           local_218 != (longlong *)0x0)) {
          local_218 = (longlong *)FMemory::Realloc(local_218,0,0);
          param_4 = local_200;
        }
      }
      else {
        *plVar6 = (longlong)&PTR_GetPoolName_1442ab818;
        *(undefined4 *)(plVar6 + 1) = local_1f8;
        *(undefined4 *)((longlong)plVar6 + 0xc) = local_1f4;
        *(undefined4 *)(plVar6 + 2) = uVar2;
        *(undefined4 *)((longlong)plVar6 + 0x14) = uVar3;
        *(undefined4 *)(plVar6 + 3) = local_1f0;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = local_1e8[0];
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar7;
        *plVar6 = (longlong)&PTR_GetPoolName_1442ab860;
        FUN_140b21c20(plVar6,&local_218);
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        lVar7 = FMemory::Realloc(plVar6,0,0);
        param_4 = local_200;
        if (lVar7 != 0) {
          FMemory::Free(lVar7);
          param_4 = local_200;
        }
      }
    }
    else {
      plVar6 = (longlong *)FMemory::Realloc(0);
      if (plVar6 == (longlong *)0x0) {
        if (((local_210 != 0) && (local_218 != (longlong *)0x0)) &&
           ((**(code **)(*local_218 + 0x28))(local_218,0), local_218 != (longlong *)0x0)) {
          local_218 = (longlong *)FMemory::Realloc(local_218,0,0);
        }
      }
      else {
        *plVar6 = (longlong)&PTR_GetPoolName_1442ab788;
        *(undefined4 *)(plVar6 + 1) = local_1f8;
        *(undefined4 *)((longlong)plVar6 + 0xc) = local_1f4;
        *(undefined4 *)(plVar6 + 2) = uVar2;
        *(undefined4 *)((longlong)plVar6 + 0x14) = uVar3;
        plVar6[3] = (longlong)param_2;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar7;
        *plVar6 = (longlong)&PTR_GetPoolName_1442ab7d0;
        FUN_140b21ce0(plVar6,&local_218);
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        lVar7 = FMemory::Realloc(plVar6,0,0);
        if (lVar7 != 0) {
          FMemory::Free(lVar7);
        }
      }
    }
    local_1e0 = 0;
    lVar7 = (**(code **)(*param_2 + 0x148))(param_2);
    fVar8 = local_158;
    if (*(longlong *)(lVar7 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar7 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar7 + 400) + 0x90);
    }
    local_d8 = 0;
    local_d0 = 0;
    if ((local_210 != 0) && (local_218 != (longlong *)0x0)) {
      (**(code **)(*local_218 + 0x30))(local_218,&local_d8);
    }
    FWeakObjectPtr::operator=(local_c8,0);
    local_240 = CONCAT44(local_240._4_4_,0xbf800000);
    local_248 = local_248 & 0xffffff00;
    local_c0 = 0;
    local_88 = (longlong *)0x0;
    local_78 = 0;
    local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,&local_1e0,&local_d8,fVar8);
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
    if (local_210 != 0) {
      if (local_218 == (longlong *)0x0) goto LAB_140b20863;
      (**(code **)(*local_218 + 0x28))(local_218,0);
      if (local_218 != (longlong *)0x0) {
        local_218 = (longlong *)FMemory::Realloc(local_218,0,0);
      }
      local_210 = 0;
    }
    if (local_218 != (longlong *)0x0) {
      FMemory::Free(local_218);
    }
  }
LAB_140b20863:
  *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) + 1;
  if (local_198 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_1c0[2] != 0) {
    FMemory::Free();
  }
  if (local_1c0[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b208c0 thunk_FUN_142fe9ef0 body=5 status=ok
// SIG undefined thunk_FUN_142fe9ef0(void)

void thunk_FUN_142fe9ef0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char acStack_38 [8];
  longlong lStack_30;
  undefined8 uStack_28;
  uint uStack_20;
  
  *(undefined1 *)(param_1 + 0x78) = 0;
  if (0 < *(int *)(param_1 + 8)) {
    lStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(&lStack_30,param_1);
    if (0 < (int)uStack_28) {
      acStack_38[0] = '\x04';
      iVar4 = FUN_143009a20(acStack_38,0,4);
      lVar1 = lStack_30;
      if (-1 < iVar4) {
        iVar4 = (int)uStack_28;
        uVar6 = uStack_20;
        if (acStack_38[0] == '\x03') {
          uVar11 = uStack_20 >> 3;
          iVar10 = uStack_20 + uVar11 * -8;
          uVar7 = 8 - iVar10;
          if (7 < uVar7) {
            uVar7 = 8;
          }
          if ((int)uVar11 < (int)uStack_28) {
            uVar6 = uStack_20 + uVar7;
            uVar12 = 8 - uVar7;
            uVar13 = 0xffffffffU >> (0x20U - (char)uVar7 & 0x1f) & 0xff &
                     (uint)(*(byte *)((ulonglong)uVar11 + lStack_30) >> ((byte)iVar10 & 0x1f));
            uVar9 = 8;
            if (uVar12 < 9) {
              uVar9 = uVar12;
            }
            while (uVar12 != 0) {
              uVar11 = uVar11 + 1;
              if (((int)uVar11 < 0) || ((int)uStack_28 <= (int)uVar11)) goto LAB_142fea06e;
              uVar6 = uVar6 + uVar9;
              uVar12 = uVar12 - uVar9;
              uVar8 = uVar7 + uVar9;
              uVar13 = uVar13 | (0xffffffffU >> (0x20U - (char)uVar9 & 0x1f) & 0xff &
                                (uint)*(byte *)((int)uVar11 + lStack_30)) << ((byte)uVar7 & 0x1f);
              uVar9 = 8;
              uVar7 = uVar8;
              if (uVar12 < 9) {
                uVar9 = uVar12;
              }
            }
            if (DAT_146b45380 == 0) {
              uVar13 = uVar13 & 0x7f;
            }
            if (0 < (int)uVar13) {
              cVar2 = FUN_1404c68e0(uVar13);
              *(bool *)(param_1 + 0x78) = cVar2 == '\0';
            }
          }
        }
LAB_142fea06e:
        if ((*(char *)(param_1 + 0x78) == '\0') && (acStack_38[0] == '\x03')) {
          uVar11 = uVar6 >> 3;
          iVar10 = uVar6 + uVar11 * -8;
          uVar6 = 8 - iVar10;
          if (6 < uVar6) {
            uVar6 = 7;
          }
          if ((int)uVar11 < iVar4) {
            uVar7 = 7 - uVar6;
            uVar12 = 0xffffffffU >> (0x20U - (char)uVar6 & 0x1f) & 0xff &
                     (uint)(*(byte *)((ulonglong)uVar11 + lVar1) >> ((byte)iVar10 & 0x1f));
            uVar13 = 8;
            if (uVar7 < 9) {
              uVar13 = uVar7;
            }
            while (uVar7 != 0) {
              uVar11 = uVar11 + 1;
              if (((int)uVar11 < 0) || (iVar4 <= (int)uVar11)) goto LAB_142fea154;
              uVar7 = uVar7 - uVar13;
              uVar9 = uVar6 + uVar13;
              uVar12 = uVar12 | (0xffffffffU >> (0x20U - (char)uVar13 & 0x1f) & 0xff &
                                (uint)*(byte *)((int)uVar11 + lVar1)) << ((byte)uVar6 & 0x1f);
              uVar6 = uVar9;
              uVar13 = 8;
              if (uVar7 < 9) {
                uVar13 = uVar7;
              }
            }
            lVar5 = FUN_142ff6920();
            if (((int)uVar12 < 0) || (*(int *)(lVar5 + 0x38) < (int)uVar12)) {
              uVar3 = 1;
            }
            else {
              uVar3 = 0;
            }
            *(undefined1 *)(param_1 + 0x78) = uVar3;
          }
        }
LAB_142fea154:
        if (lVar1 == 0) {
          return;
        }
        FMemory::Free(lVar1);
        return;
      }
      *(undefined1 *)(param_1 + 0x78) = 1;
    }
    if (lStack_30 != 0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 140b208d0 FUN_140b208d0 body=297 status=ok
// SIG undefined FUN_140b208d0(void)

ulonglong FUN_140b208d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  ulonglong in_RAX;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if (*(longlong *)(param_1 + 0x6f8) == 0) {
    uVar6 = 0;
    if (param_2 != (longlong *)0x0) {
      iVar1 = *(int *)((longlong)param_2 + 0xc);
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
        plVar4 = (longlong *)(**(code **)(*param_2 + 0x678))(param_2);
        if (plVar4 != (longlong *)0x0) {
          in_RAX = (**(code **)(*plVar4 + 0x780))(plVar4);
          if ((char)in_RAX == '\0') goto LAB_140b209ec;
        }
        lVar5 = FUN_1413f82e0();
        if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
            != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          in_RAX = (**(code **)(*param_2 + 0x950))(param_2);
          if (((char)in_RAX != '\0') || ((char)param_2[0x1d8] == '\x03')) goto LAB_140b209ec;
        }
        if (*(longlong *)(param_1 + 0x4b8) != 0) {
          uVar6 = FUN_142c48f90(*(longlong *)(param_1 + 0x4b8),param_2,0);
          return uVar6;
        }
        uVar6 = 1;
      }
    }
    return uVar6;
  }
LAB_140b209ec:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140b20a00 FUN_140b20a00 body=459 status=ok
// SIG undefined FUN_140b20a00(void)

void FUN_140b20a00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  longlong *local_18;
  longlong *local_10;
  
  lVar8 = *(longlong *)(param_1 + 0x4a0);
  if (lVar8 != 0) {
    lVar6 = FUN_14149b100();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_140483870(lVar8 + 0x938,param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(param_1 + 0x498);
  bVar4 = false;
  *(undefined8 *)(param_1 + 0x498) = 0;
  cVar5 = FUN_140b1b4b0(param_1);
  if (((cVar5 != '\0') && (*(longlong *)(param_1 + 0x4a0) != 0)) &&
     (cVar5 = FUN_140b40ea0(param_1), cVar5 == '\0')) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar8 = *(longlong *)(DAT_146b33f38 + 0x58);
    if ((lVar8 != 0) && (lVar6 = *(longlong *)(lVar8 + 0x5f0), lVar6 != 0)) {
      lVar7 = USafeZone::GetPrivateStaticClass();
      do {
        if (lVar6 == lVar7) {
          lVar8 = *(longlong *)(lVar8 + 0x5f0);
          if (lVar8 == 0) goto LAB_140b20b25;
          lVar7 = USafeZone::GetPrivateStaticClass();
          lVar6 = lVar8;
          goto LAB_140b20b17;
        }
        lVar6 = *(longlong *)(lVar6 + 0x30);
      } while (lVar6 != 0);
    }
  }
  goto LAB_140b20baf;
  while (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0) {
LAB_140b20b17:
    if (lVar6 == lVar7) goto LAB_140b20b27;
  }
LAB_140b20b25:
  lVar8 = 0;
LAB_140b20b27:
  FUN_140b3b860(param_1,&local_18,lVar8);
  if ((local_18 != (longlong *)0x0) && (cVar5 = (**(code **)(*local_18 + 0x38))(), cVar5 == '\0')) {
    FUN_140b12d60(local_18 + 0xb,local_res8,param_1,&LAB_140b33310);
    *(undefined1 *)(param_1 + 0x4b0) = 1;
    bVar4 = true;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (bVar4) {
    return;
  }
LAB_140b20baf:
  *(undefined1 *)(param_1 + 0x4b0) = 0;
  return;
}



// FUNCTION 140b20bd0 AbortAttack_Implementation body=12 status=ok
// SIG undefined AbortAttack_Implementation(void)

void AMaiCharacter::AbortAttack_Implementation(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x7e8) = 0;
  return;
}



// FUNCTION 140b20be0 FUN_140b20be0 body=266 status=ok
// SIG undefined FUN_140b20be0(void)

void FUN_140b20be0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    FUN_142fea5c0(param_1,param_2);
    uVar4 = 0;
    plVar3 = *(longlong **)(param_1 + 0x4b8);
    uVar5 = (longlong)*(int *)(param_1 + 0x4c0) & 0x1fffffffffffffff;
    if (plVar3 + *(int *)(param_1 + 0x4c0) < plVar3) {
      uVar5 = uVar4;
    }
    if (uVar5 != 0) {
      do {
        if (*plVar3 != 0) {
          FUN_142227350(*plVar3,0,1);
        }
        plVar3 = plVar3 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar5);
    }
    *(undefined4 *)(param_1 + 0x4c0) = 0;
    if (*(int *)(param_1 + 0x4c4) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x4b8,0);
    }
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    if (*(int *)(param_1 + 0x4d4) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x4c8,0);
    }
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    lVar2 = FUN_140b5b830(lVar2);
    if (lVar2 != 0) {
      FUN_140b55f90(lVar2,*(undefined8 *)(param_1 + 0x118));
      return;
    }
  }
  return;
}



// FUNCTION 140b20d10 FUN_140b20d10 body=368 status=ok
// SIG undefined FUN_140b20d10(void)

void FUN_140b20d10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 local_38;
  undefined8 local_30;
  
  if ((((*(longlong *)(param_1 + 0x3a8) != 0) &&
       (lVar4 = UNiagaraSystem::GetEffectType(), lVar4 != 0)) &&
      (lVar4 = UNiagaraSystem::GetEffectType(*(undefined8 *)(param_1 + 0x3a8)),
      uVar2 = DAT_146868fd8, lVar4 != 0)) && (0 < *(int *)(param_1 + 0x2c0))) {
    plVar1 = (longlong *)(param_1 + 0x2b8);
    iVar6 = *(int *)(param_1 + 0x2c0);
    local_38 = 0;
    local_30 = 0;
    if (iVar6 != 0) {
      lVar4 = *plVar1 + 0x10;
      do {
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (lVar4);
        lVar4 = lVar4 + 0x20;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x2c0) = 0;
    iVar6 = 1;
    if (*(int *)(param_1 + 0x2c4) != 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (plVar1,1);
      iVar6 = *(int *)(param_1 + 0x2c4);
      iVar3 = *(int *)(param_1 + 0x2c0);
    }
    *(int *)(param_1 + 0x2c0) = iVar3 + 1;
    if (iVar6 < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1,iVar3);
    }
    puVar5 = (undefined8 *)((longlong)iVar3 * 0x20 + *plVar1);
    puVar5[1] = 0;
    *puVar5 = uVar2;
    puVar5[2] = 0;
    FUN_140747320(puVar5 + 2,0,0,0,0);
    TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
              (&local_38);
  }
  FUN_142fea860(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140b20e80 Compact body=574 status=ok
// SIG undefined Compact(void)

ulonglong TSparseArray<TSetElement<TTuple<UParticleSystem_*,`<lambda_deb06920f3722963109d8aa43b3c1784>::operator()'::`2'::FPSCInfoSummary>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Compact(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  ulonglong in_RAX;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if (iVar2 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar3 = (int)param_1[1];
  uVar16 = 0;
  iVar17 = iVar3 - iVar2;
  lVar5 = *param_1;
  iVar12 = iVar3;
  iVar8 = (int)param_1[6];
  if ((int)param_1[6] != -1) {
    do {
      iVar14 = *(int *)((longlong)iVar8 * 0x40 + 4 + *param_1);
      if (iVar8 < iVar17) {
        bVar6 = (byte)iVar12 & 0x1f;
        uVar10 = 1 << bVar6 | 1U >> 0x20 - bVar6;
        plVar9 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar9 = param_1 + 2;
        }
        do {
          iVar13 = iVar12 + -1;
          uVar10 = uVar10 >> 1 | (uint)((uVar10 & 1) != 0) << 0x1f;
          iVar15 = iVar13;
          if (iVar13 < 0) {
            iVar15 = iVar12 + 0x1e;
          }
          iVar12 = iVar13;
        } while ((*(uint *)((longlong)plVar9 + (longlong)(iVar15 >> 5) * 4) & uVar10) == 0);
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar8 * 0x40 + lVar5),
                   (void *)((longlong)iVar13 * 0x40 + lVar5),0x40);
        plVar9 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar9 = param_1 + 2;
        }
        iVar15 = iVar8;
        if (iVar8 < 0) {
          iVar15 = iVar8 + 0x1f;
        }
        uVar16 = 1;
        puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar15 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
      }
      iVar8 = iVar14;
    } while (iVar14 != -1);
    iVar12 = (int)param_1[1];
  }
  iVar8 = (iVar12 - iVar17) - iVar2;
  if (iVar8 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar17 * 0x40 + *param_1),
               (void *)((longlong)iVar3 * 0x40 + *param_1),(longlong)iVar8 << 6);
    iVar12 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar12 - iVar2;
  TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(param_1);
  iVar12 = (int)param_1[5];
  if (iVar3 != iVar12) {
    iVar14 = 0;
    iVar8 = 0;
    iVar13 = 0;
    iVar15 = 0;
    uVar10 = 1;
    uVar11 = 1;
    if (0 < iVar12) {
      do {
        if ((iVar15 < iVar17) || (iVar3 <= iVar15)) {
          if (iVar8 != iVar15) {
            plVar9 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar9 = param_1 + 2;
            }
            uVar4 = *(uint *)((longlong)plVar9 + (longlong)iVar14 * 4);
            puVar1 = (uint *)((longlong)plVar9 + (longlong)iVar14 * 4);
            if ((*(uint *)((longlong)plVar9 + (longlong)iVar13 * 4) & uVar11) == 0) {
              *puVar1 = ~uVar10 & uVar4;
            }
            else {
              *puVar1 = uVar4 | uVar10;
            }
          }
          iVar8 = iVar8 + 1;
          uVar10 = uVar10 * 2;
          if (uVar10 == 0) {
            uVar10 = 1;
            iVar14 = iVar14 + 1;
          }
        }
        iVar12 = (int)param_1[5];
        uVar4 = uVar11 * 2;
        iVar15 = iVar15 + 1;
        iVar7 = iVar13 + 1;
        uVar11 = 1;
        if (uVar4 != 0) {
          iVar7 = iVar13;
          uVar11 = uVar4;
        }
        iVar13 = iVar7;
      } while (iVar15 < iVar12);
    }
  }
  *(int *)(param_1 + 5) = iVar12 - iVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  return uVar16;
}



// FUNCTION 140b210c0 FUN_140b210c0 body=473 status=ok
// SIG undefined FUN_140b210c0(void)

void FUN_140b210c0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_18;
  int local_10;
  
  plVar1 = (longlong *)param_1[0x8f];
  if (plVar1 != (longlong *)0x0) {
    lVar4 = FUN_1429d7ab0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((((bVar2) && (cVar3 = (**(code **)(*plVar1 + 0x778))(plVar1), cVar3 != '\0')) &&
        (lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 != 0)) &&
       (lVar4 = *(longlong *)(lVar4 + 400), lVar4 != 0)) {
      lVar5 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if ((param_1[0x8c] != 0) && ((*(byte *)(param_1[0x8c] + 0x60) & 2) != 0)) {
          FUN_140ba31d0(lVar4,plVar1);
        }
        lVar5 = param_1[0xa7];
        if (lVar5 == 0) {
          if (param_1[0xad] == 0) {
            return;
          }
          uVar6 = FUN_14301f8f0();
          AActor::GetComponentsByClass(param_1[0xad],&local_18,uVar6);
          if ((0 < local_10) && (lVar8 = *local_18, lVar8 != 0)) {
            lVar7 = FUN_14301f8f0();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              lVar5 = *(longlong *)(lVar8 + 0x208);
            }
          }
          if (local_18 != (longlong *)0x0) {
            FMemory::Free();
          }
          if (lVar5 == 0) {
            return;
          }
        }
        lVar8 = *(longlong *)(lVar5 + 0x128);
        if (((*(byte *)((longlong)param_1 + 0x70c) & 4) != 0) && (*(longlong *)(lVar5 + 0x130) != 0)
           ) {
          lVar8 = *(longlong *)(lVar5 + 0x130);
        }
        if (lVar8 != 0) {
          FUN_140ba31d0(lVar4,plVar1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140b212a0 FUN_140b212a0 body=1064 status=ok
// SIG undefined FUN_140b212a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140b212a0(longlong param_1,undefined8 *param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_108;
  float local_100;
  float local_f8;
  float fStack_f4;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined1 local_c8 [160];
  
  fVar10 = DAT_1468b5d98;
  *param_2 = _DAT_1468b5d90;
  *(float *)(param_2 + 1) = fVar10;
  lVar4 = ATrap::GetActivationShapeComponent();
  if (((lVar4 == 0) || (*(longlong *)(lVar4 + 0x210) == 0)) ||
     (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x210) + 0xb8), lVar4 == 0)) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = *(float *)(lVar4 + 0xa0);
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar4 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (param_4 == '\0') {
    if (param_3 == (longlong *)0x0) {
      return param_2;
    }
    if (lVar4 == 0) {
      return param_2;
    }
    if (((*(longlong *)(param_1 + 0x6b0) == 0) ||
        (plVar1 = *(longlong **)(param_1 + 0x488), plVar1 == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(*plVar1 + 0x440))(plVar1,*(undefined8 *)(param_1 + 0x6b0)),
       cVar3 == '\0')) {
      lVar2 = *(longlong *)(param_1 + 0x168);
      if (lVar2 == 0) {
        local_e8 = _DAT_1468b5d90;
        local_e0 = DAT_1468b5d98;
      }
      else {
        local_e8 = *(undefined8 *)(lVar2 + 0x220);
        local_e0 = *(float *)(lVar2 + 0x228);
      }
      local_108 = local_e8;
      local_100 = local_e0;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x488) + 0x428))
                (*(longlong **)(param_1 + 0x488),&local_108,*(undefined8 *)(param_1 + 0x6b0));
    }
    (**(code **)(*param_3 + 0x610))(param_3,&local_f8,local_c8);
    fVar10 = *(float *)(lVar4 + 0x3f4);
    FRotator::Vector(local_c8,&local_d8);
    fVar7 = -local_d8._4_4_ * local_d0;
    fVar10 = fVar10 + local_100;
    fVar9 = -((float)local_d8 * local_d0);
    fVar8 = (float)local_d8 * (float)local_d8 - -local_d8._4_4_ * local_d8._4_4_;
    fVar6 = fVar9 * (float)local_108 + fVar7 * local_108._4_4_ + fVar8 * local_100;
    fVar6 = ((fVar9 * local_f8 + fVar7 * fStack_f4 + fVar8 * local_f0) - fVar6) /
            ((fVar9 * (float)local_108 + fVar7 * local_108._4_4_ + fVar8 * fVar10) - fVar6);
    if (0.0 < fVar6) {
      fVar6 = SQRT(fVar6);
    }
    if (0.0 <= fVar6) {
      if (1.0 <= fVar6) {
        fVar6 = 1.0;
      }
    }
    else {
      fVar6 = 0.0;
    }
    fVar10 = (fVar10 - local_100) * fVar6 + local_100;
    if (fVar10 - local_100 < *(float *)(lVar4 + 0x3f0)) {
      fVar10 = local_100 + *(float *)(lVar4 + 0x3f0);
    }
    local_100 = fVar10;
    *param_2 = CONCAT44((local_108._4_4_ - local_108._4_4_) * fVar6 + local_108._4_4_,
                        ((float)local_108 - (float)local_108) * fVar6 + (float)local_108);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x168);
    if (lVar4 == 0) {
      local_d0 = DAT_1468b5d98;
      pfVar5 = (float *)&local_d8;
      local_d8 = _DAT_1468b5d90;
    }
    else {
      pfVar5 = &local_f8;
      local_f8 = *(float *)(lVar4 + 0x220);
      local_f0 = (float)*(undefined4 *)(lVar4 + 0x228);
      fStack_f4 = (float)*(undefined4 *)(lVar4 + 0x224);
    }
    local_100 = pfVar5[2] + fVar10;
    *param_2 = *(undefined8 *)pfVar5;
  }
  *(float *)(param_2 + 1) = local_100;
  return param_2;
}



// FUNCTION 140b216d0 FUN_140b216d0 body=298 status=ok
// SIG undefined FUN_140b216d0(void)

undefined8 * FUN_140b216d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28 [2];
  undefined8 local_18;
  
  puVar1 = (undefined8 *)operator_new(0x48);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &PTR__scalar_deleting_destructor__1442a80c0;
    puVar1[2] = 0;
    *(undefined2 *)(puVar1 + 3) = 0;
    FWeakObjectPtr::operator=((longlong)puVar1 + 0x1c,0);
    FUN_142d979c0(puVar1 + 5);
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
  }
  local_48 = 0;
  local_40 = local_40 & 0xffffffffffff0000;
  FWeakObjectPtr::operator=((longlong)&local_40 + 4,0);
  FUN_142d979c0(&local_30);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  local_18 = 0;
  FUN_140b886d0(param_1 + -0x660,&local_48);
  puVar1[2] = local_48;
  *(undefined1 *)(puVar1 + 3) = (undefined1)local_40;
  *(undefined1 *)((longlong)puVar1 + 0x19) = local_40._1_1_;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = local_40._4_4_;
  *(undefined4 *)(puVar1 + 4) = (undefined4)local_38;
  *(undefined1 *)(puVar1 + 5) = (undefined1)local_30;
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(puVar1 + 6,local_28);
  *(undefined4 *)(puVar1 + 8) = (undefined4)local_18;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return puVar1;
}



// FUNCTION 140b21800 FUN_140b21800 body=178 status=ok
// SIG undefined FUN_140b21800(void)

undefined8 * FUN_140b21800(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x88);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1442ab530;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined1 *)((longlong)puVar1 + 0x24) = *(undefined1 *)(param_1 + 0x24);
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
    puVar1[0xd] = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0;
    TSet<TTuple<INavLinkCustomInterface_*,FWeakObjectPtr>,TDefaultMapHashableKeyFuncs<INavLinkCustomInterface_*,FWeakObjectPtr,0>,FDefaultSetAllocator>
    ::operator=(puVar1 + 5,param_1 + 0x28);
    puVar1[0xf] = *(undefined8 *)(param_1 + 0x78);
    puVar1[0x10] = *(undefined8 *)(param_1 + 0x80);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140b218c0 FUN_140b218c0 body=200 status=ok
// SIG undefined FUN_140b218c0(void)

undefined8 * FUN_140b218c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0xb8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1442ab518;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    FUN_1409f3dd0(puVar1 + 7,param_1 + 0x38);
    puVar1[0x13] = *(undefined8 *)(param_1 + 0x98);
    puVar1[0x14] = *(undefined8 *)(param_1 + 0xa0);
    *(undefined1 *)(puVar1 + 0x15) = *(undefined1 *)(param_1 + 0xa8);
    puVar1[0x16] = *(undefined8 *)(param_1 + 0xb0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140b21990 FUN_140b21990 body=117 status=ok
// SIG undefined FUN_140b21990(void)

void FUN_140b21990(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (*(longlong *)(param_1 + 0x5d0) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x5d0) + 0xc);
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
      return;
    }
  }
  if (param_2 != 0) {
    uVar4 = FUN_14059b7e0(param_2,1);
    *(undefined8 *)(param_1 + 0x5d0) = uVar4;
  }
  return;
}



// FUNCTION 140b21a10 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1442ab8a8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1442ab8f0;
  }
  return;
}



// FUNCTION 140b21a60 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1442ab548;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1442ab590;
  }
  return;
}



// FUNCTION 140b21ab0 FUN_140b21ab0 body=95 status=ok
// SIG undefined FUN_140b21ab0(void)

void FUN_140b21ab0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1442abd88;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar2 = &PTR_GetPoolName_1442abdd0;
  }
  return;
}



// FUNCTION 140b21b10 FUN_140b21b10 body=185 status=ok
// SIG undefined FUN_140b21b10(void)

void FUN_140b21b10(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1442aba58;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
    puVar1[8] = *(undefined8 *)(param_1 + 0x40);
    puVar1[9] = *(undefined8 *)(param_1 + 0x48);
    puVar1[10] = *(undefined8 *)(param_1 + 0x50);
    puVar1[0xb] = *(undefined8 *)(param_1 + 0x58);
    puVar1[0xd] = *(undefined8 *)(param_1 + 0x68);
    *puVar1 = &PTR_GetPoolName_1442abaa0;
  }
  return;
}



// FUNCTION 140b21bd0 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1442ab938;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1442ab980;
  }
  return;
}



// FUNCTION 140b21c20 FUN_140b21c20 body=103 status=ok
// SIG undefined FUN_140b21c20(void)

void FUN_140b21c20(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1442ab818;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar1 = &PTR_GetPoolName_1442ab860;
  }
  return;
}



// FUNCTION 140b21c90 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1442abb78;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1442abbc0;
  }
  return;
}



// FUNCTION 140b21ce0 FUN_140b21ce0 body=97 status=ok
// SIG undefined FUN_140b21ce0(void)

void FUN_140b21ce0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1442ab788;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar1 = &PTR_GetPoolName_1442ab7d0;
  }
  return;
}



// FUNCTION 140b21d50 CreateCopy body=70 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1442ab9c8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1442aba10;
  }
  return;
}



// FUNCTION 140b21da0 FUN_140b21da0 body=111 status=ok
// SIG undefined FUN_140b21da0(void)

void FUN_140b21da0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1442abae8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar1 = &PTR_GetPoolName_1442abb30;
  }
  return;
}



// FUNCTION 140b21e10 FUN_140b21e10 body=120 status=ok
// SIG undefined FUN_140b21e10(void)

void FUN_140b21e10(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1442ab6f8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    puVar1[8] = *(undefined8 *)(param_1 + 0x40);
    *puVar1 = &PTR_GetPoolName_1442ab740;
  }
  return;
}



// FUNCTION 140b21e90 FUN_140b21e90 body=124 status=ok
// SIG undefined FUN_140b21e90(void)

void FUN_140b21e90(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1442ab5d8;
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    puVar2[7] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    puVar2[8] = *(undefined8 *)(param_1 + 0x40);
    puVar2[9] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    puVar2[10] = *(undefined8 *)(param_1 + 0x50);
    puVar2[0xb] = uVar1;
    puVar2[0xd] = *(undefined8 *)(param_1 + 0x68);
    *puVar2 = &PTR_GetPoolName_1442ab620;
  }
  return;
}



// FUNCTION 140b21f10 FUN_140b21f10 body=89 status=ok
// SIG undefined FUN_140b21f10(void)

void FUN_140b21f10(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1442ab668;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1442ab6b0;
  }
  return;
}



// FUNCTION 140b21f70 CreateCopy body=100 status=ok
// SIG undefined CreateCopy(void)

void TBaseUFunctionDelegateInstance<AFGHUD,TTypeWrapper<void>___cdecl(void),TSubclassOf<UUserWidget>,APawn_*>
     ::CreateCopy(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_LAB_1442abc08;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = uVar1;
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar2 = &PTR_LAB_1442abc50;
  }
  return;
}



// FUNCTION 140b21fe0 FUN_140b21fe0 body=372 status=ok
// SIG undefined FUN_140b21fe0(void)

void FUN_140b21fe0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468691b8) && (_Init_thread_header(&DAT_1468691b8), DAT_1468691b8 == -1))
  {
    FName::FName(&DAT_1468691b0,L"GrenadeHomingComponent",1);
    _Init_thread_footer(&DAT_1468691b8);
  }
  lVar2 = DAT_1468691b0;
  if (*(longlong *)(param_1 + 0x730) == 0) {
    if (param_2 == 0) {
      if (DAT_1468691b0 == 0) {
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar1 = UGunfireTechRequirementsImplWin64::GetPrivateStaticClass();
      lVar2 = FUN_1417985e0(uVar1,param_1,lVar2,0,0,0,0,0,0);
    }
    else {
      uVar1 = UGunfireTechRequirementsImplWin64::GetPrivateStaticClass();
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      lVar2 = FUN_1417985e0(uVar1,param_1,0,0,0,param_2,0,0,0);
    }
    *(longlong *)(param_1 + 0x730) = lVar2;
    if (lVar2 != 0) {
      FUN_14234b150(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140b22160 FUN_140b22160 body=229 status=ok
// SIG undefined FUN_140b22160(void)

void FUN_140b22160(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18;
  int local_10;
  
  if (((*(longlong *)(param_1 + 0x120) != 0) || (lVar3 = FUN_1423407b0(), lVar3 != 0)) &&
     (cVar2 = FUN_140b81c70(param_1), cVar2 == '\x01')) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    UWorld::GetPlayerControllerIterator(lVar3,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar3 = FWeakObjectPtr::Get();
      if (lVar3 != 0) {
        lVar4 = FUN_14145f370();
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
          FUN_140b461a0(param_1,lVar3,0);
        }
      }
      local_10 = local_10 + 1;
    }
  }
  return;
}



// FUNCTION 140b22250 FUN_140b22250 body=403 status=ok
// SIG undefined FUN_140b22250(void)

void FUN_140b22250(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,longlong param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_90;
  longlong *local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((*(longlong *)(param_1 + 0x5c0) == 0) && (param_7 != 0)) {
    uVar1 = FUN_140b7e090(param_7,1,1,0x3f800000);
    *(undefined8 *)(param_1 + 0x5c0) = uVar1;
    local_78 = *param_5;
    uStack_70 = param_5[1];
    local_68 = param_5[2];
    uStack_60 = param_5[3];
    local_58 = param_5[4];
    uStack_50 = param_5[5];
    local_48 = *param_4;
    uStack_40 = param_4[1];
    local_38 = *(undefined4 *)(param_4 + 2);
    uStack_34 = *(undefined4 *)((longlong)param_4 + 0x14);
    uStack_30 = *(undefined4 *)(param_4 + 3);
    uStack_2c = *(undefined4 *)((longlong)param_4 + 0x1c);
    local_28 = *(undefined4 *)(param_4 + 4);
    uStack_24 = *(undefined4 *)((longlong)param_4 + 0x24);
    uStack_20 = *(undefined4 *)(param_4 + 5);
    uStack_1c = *(undefined4 *)((longlong)param_4 + 0x2c);
    FUN_140b7de90(local_88,param_7,uVar1,param_2,param_3,&local_48,&local_78);
    if (local_88[0] != (longlong *)0x0) {
      (**(code **)(*local_88[0] + 0x568))(local_88[0],0,param_6);
    }
    if (*(longlong *)(param_1 + 0x5c0) != 0) {
      lVar2 = FUN_1405ab470(param_7,0,0);
      *(longlong *)(param_1 + 0x5c8) = lVar2;
      if (lVar2 != 0) {
        local_a8 = *(undefined4 *)(param_4 + 2);
        uStack_a4 = *(undefined4 *)((longlong)param_4 + 0x14);
        local_a0 = *(undefined4 *)(param_4 + 3);
        local_90 = local_a0;
        FUN_142380500(lVar2,&local_a8,0,0,param_3 & 0xffffffffffffff00);
      }
    }
    FUN_140b1edd0(param_1,param_7);
  }
  return;
}



// FUNCTION 140b223f0 FUN_140b223f0 body=260 status=ok
// SIG undefined FUN_140b223f0(void)

longlong FUN_140b223f0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  uVar2 = AArchVisCharacter::StaticClass();
  lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar2);
  if (lVar3 != 0) {
    lVar4 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140b224ba;
  }
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = AArchVisCharacter::StaticClass();
  lVar3 = FUN_1417985e0(uVar2,param_1,0,0,0,0,0,0,0);
  if (lVar3 == 0) {
    return 0;
  }
LAB_140b224ba:
  FUN_140b31350(lVar3,param_2,param_3);
  FUN_140b1e800(lVar3);
  return lVar3;
}



// FUNCTION 140b22500 FUN_140b22500 body=2299 status=ok
// SIG undefined FUN_140b22500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b22500(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_2c8 [32];
  uint5 *local_2a8;
  undefined8 *local_2a0;
  undefined8 *local_298;
  uint5 local_288;
  undefined3 uStack_283;
  float local_280;
  float fStack_27c;
  float local_278;
  undefined8 local_268;
  float local_260;
  float local_258;
  float fStack_254;
  float local_250;
  longlong *local_248;
  uint local_240;
  int local_23c;
  longlong local_238;
  undefined8 local_230;
  undefined8 local_228;
  longlong *local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 local_210;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  float local_1f0;
  float local_1e4;
  undefined8 local_1d8;
  float local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [16];
  undefined1 local_188 [32];
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined2 local_154;
  undefined1 local_152;
  undefined4 local_150;
  undefined1 local_14c;
  undefined4 local_148;
  undefined2 local_144;
  longlong local_120;
  undefined8 local_118;
  longlong local_100;
  undefined8 local_f8;
  ulonglong local_e8;
  
  if (param_1 != (longlong *)0x0) {
    local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
    local_220 = param_1;
    lVar4 = (**(code **)(*param_1 + 0x148))();
    if ((((lVar4 != 0) && (fVar19 = *(float *)((longlong)param_2 + 0x7c), 0.0 < fVar19)) &&
        (*(float *)(param_2 + 5) <= fVar19 && fVar19 != *(float *)(param_2 + 5))) &&
       (local_208 = FUN_142df3580(param_1), local_208 != 0)) {
      plVar14 = (longlong *)0x0;
      local_160 = 0;
      local_120 = 0;
      local_118 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_158 = 0x10000;
      local_150 = 0;
      _local_288 = 0;
      local_168 = 0;
      local_154 = 0;
      local_144 = 0x101;
      local_14c = 0;
      local_152 = 0;
      local_148 = 0;
      FCollisionQueryParams::AddIgnoredActors(&local_168,param_2 + 6);
      uVar5 = FUN_140a63ba0(param_1);
      local_14c = FUN_142dd0740(uVar5);
      local_1c4 = *(undefined4 *)((longlong)param_2 + 0x7c);
      local_1c8 = 2;
      local_238 = 0;
      local_230 = 0;
      puVar6 = (uint *)FUN_140a05dc0();
      local_288 = (uint5)(~puVar6[1] & *puVar6);
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      local_298 = &local_168;
      local_2a8 = &local_288;
      local_2a0 = (undefined8 *)&local_1c8;
      UWorld::OverlapMultiByObjectType(uVar5,&local_238,param_2 + 0xe,&DAT_1464aa810);
      local_248 = (longlong *)0x0;
      local_23c = 0;
      local_200 = local_238 + (longlong)(int)local_230 * 0x18;
      lVar4 = local_238;
      plVar11 = plVar14;
      if (local_238 != local_200) {
        do {
          plVar7 = (longlong *)FUN_1423111a0(lVar4);
          if (plVar7 != (longlong *)0x0) {
            lVar8 = AHeoCon::GetPrivateStaticClass();
            if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
                lVar8 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              plVar12 = (longlong *)param_2[6];
              plVar13 = plVar12 + *(int *)(param_2 + 7);
              for (; plVar12 != plVar13; plVar12 = plVar12 + 1) {
                if ((longlong *)*plVar12 == plVar7) goto LAB_140b22c17;
              }
              iVar15 = (int)plVar11;
              for (plVar13 = plVar14; plVar13 != plVar14 + iVar15; plVar13 = plVar13 + 1) {
                if ((longlong *)*plVar13 == plVar7) goto LAB_140b22c17;
              }
              uVar5 = FUN_142df3580(plVar7);
              iVar3 = FUN_142de8c20(local_208,uVar5);
              if (iVar3 == 2) {
                local_240 = iVar15 + 1;
                if (local_23c < (int)local_240) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (&local_248,plVar11);
                  plVar14 = local_248;
                }
                plVar11 = (longlong *)(ulonglong)local_240;
                plVar14[iVar15] = (longlong)plVar7;
                if (plVar7[0x124] != 0) {
                  uVar5 = UEnvQueryTest_Random::StaticClass();
                  cVar2 = FUN_142c736c0(plVar7[0x124],uVar5);
                  if (cVar2 != '\0') goto LAB_140b22c17;
                }
                lVar8 = plVar7[0x2d];
                fVar19 = *(float *)(plVar7 + 0x13f);
                if (fVar19 <= 1.0) {
                  fVar19 = 1.0;
                }
                if (lVar8 == 0) {
                  local_1f0 = DAT_1468b5d98;
                  puVar10 = &local_1f8;
                  local_1f8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
                }
                else {
                  puVar10 = (undefined8 *)&local_218;
                  local_218 = *(undefined4 *)(lVar8 + 0x220);
                  local_210 = *(undefined4 *)(lVar8 + 0x228);
                  uStack_214 = *(undefined4 *)(lVar8 + 0x224);
                }
                fVar21 = *(float *)(param_2 + 0xe) - (float)*puVar10;
                local_1e4 = *(float *)(puVar10 + 1);
                fVar23 = *(float *)((longlong)param_2 + 0x74) - (float)((ulonglong)*puVar10 >> 0x20)
                ;
                fVar22 = *(float *)(param_2 + 0xf) - local_1e4;
                fVar17 = fVar23 * fVar23 + fVar21 * fVar21 + fVar22 * fVar22;
                fVar16 = fVar21;
                fVar20 = fVar22;
                fVar24 = fVar23;
                if ((fVar17 != 1.0) &&
                   (fVar16 = DAT_1468b5d90, fVar20 = DAT_1468b5d98, fVar24 = DAT_1468b5d94,
                   1e-08 <= fVar17)) {
                  auVar18 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
                  fVar24 = auVar18._0_4_;
                  fVar24 = fVar24 + fVar24 * (0.5 - fVar17 * 0.5 * fVar24 * fVar24);
                  fVar24 = fVar24 + fVar24 * (0.5 - fVar17 * 0.5 * fVar24 * fVar24);
                  fVar16 = fVar24 * fVar21;
                  fVar20 = fVar24 * fVar22;
                  fVar24 = fVar24 * fVar23;
                }
                fVar17 = *(float *)(param_2 + 0x10);
                fVar19 = 1.0 / fVar19;
                fVar20 = fVar19 * fVar20 * fVar17;
                fVar24 = fVar19 * fVar24 * fVar17;
                fVar19 = fVar19 * fVar16 * fVar17;
                local_258 = fVar19;
                fStack_254 = fVar24;
                local_250 = fVar20;
                uVar5 = UScrollBox::GetPrivateStaticClass();
                lVar8 = AGameStateBase::OnRep_GameModeClass(plVar7,uVar5);
                if (lVar8 != 0) {
                  lVar9 = UScrollBox::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if (bVar1) {
                    fVar17 = fVar19 * fVar19 + fVar24 * fVar24;
                    fVar16 = SQRT(fVar20 * fVar20 + fVar17);
                    if (*(float *)(lVar8 + 0x730) <= fVar16 && fVar16 != *(float *)(lVar8 + 0x730))
                    {
                      lVar9 = (**(code **)(*plVar7 + 0x308))(plVar7,local_198);
                      fVar16 = *(float *)(lVar9 + 8);
                      if ((0.0 < fVar16) && (0.0 < fVar20)) {
                        fVar21 = fVar20;
                        if (fVar16 <= fVar20) {
                          fVar21 = fVar16;
                        }
                        if (fVar20 <= fVar16) {
                          fVar20 = fVar16;
                        }
                        fVar20 = (fVar21 * *(float *)(lVar8 + 0x738) + fVar20) - fVar16;
                        local_250 = fVar20;
                      }
                    }
                    cVar2 = FUN_1407c3030(lVar8 + 0x3d0);
                    if (cVar2 == '\0') {
                      puVar10 = (undefined8 *)
                                FUN_142d979a0(local_188,*(undefined4 *)(param_2 + 0x10));
                      local_1b8 = *puVar10;
                      uStack_1b0 = puVar10[1];
                      local_1a8 = *(undefined4 *)(puVar10 + 2);
                      uStack_1a4 = *(undefined4 *)((longlong)puVar10 + 0x14);
                      uStack_1a0 = *(undefined4 *)(puVar10 + 3);
                      uStack_19c = *(undefined4 *)((longlong)puVar10 + 0x1c);
                      fVar17 = fVar20 * fVar20 + fVar17;
                      local_280 = fVar19;
                      fStack_27c = fVar24;
                      local_278 = fVar20;
                      if (fVar17 != 1.0) {
                        if (1e-08 <= fVar17) {
                          auVar18 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
                          fVar16 = auVar18._0_4_;
                          fVar16 = fVar16 + fVar16 * (0.5 - fVar17 * 0.5 * fVar16 * fVar16);
                          fVar16 = fVar16 + fVar16 * (0.5 - fVar17 * 0.5 * fVar16 * fVar16);
                          local_280 = fVar19 * fVar16;
                          fStack_27c = fVar16 * fVar24;
                          local_278 = fVar16 * fVar20;
                        }
                        else {
                          local_280 = DAT_1468b5d90;
                          local_278 = DAT_1468b5d98;
                          fStack_27c = DAT_1468b5d94;
                        }
                      }
                      local_1d8 = CONCAT44(fStack_27c,local_280);
                      local_1d0 = local_278;
                      local_2a0 = &local_1b8;
                      local_228 = 0;
                      local_2a8 = (uint5 *)0x0;
                      FUN_142d6ec80(plVar7,local_220,*param_2,&local_1d8);
                      goto LAB_140b22c17;
                    }
                  }
                }
                if (fVar20 < 0.0) {
                  local_250 = 0.0;
                }
                local_268 = CONCAT44(fStack_254,local_258);
                local_260 = local_250;
                (**(code **)(*plVar7 + 0x8a0))(plVar7,&local_268,1);
              }
            }
          }
LAB_140b22c17:
          lVar4 = lVar4 + 0x18;
          param_1 = local_220;
        } while (lVar4 != local_200);
      }
      if (param_2[0x11] != 0) {
        local_268 = param_2[0xe];
        local_260 = *(float *)(param_2 + 0xf);
        local_2a8 = (uint5 *)0x0;
        FUN_142d41c10(param_2[0x11],*(undefined4 *)((longlong)param_2 + 0x7c),&local_268,param_1);
      }
      if (((param_2[8] != 0) && (0.0 < *(float *)(param_2 + 9))) && (0.0 < *(float *)(param_2 + 10))
         ) {
        uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
        plVar11 = (longlong *)FUN_140a24b10(uVar5);
        if (plVar11 != (longlong *)0x0) {
          plVar11[0x5a] = param_2[8];
          plVar11[0x5c] = param_2[0xb];
          plVar11[0x5d] = param_2[0xc];
          plVar11[0x5e] = param_2[0xd];
          *(undefined4 *)(plVar11 + 0x5f) = *(undefined4 *)(param_2 + 9);
          *(undefined4 *)((longlong)plVar11 + 0x2fc) = *(undefined4 *)((longlong)param_2 + 0x4c);
          *(undefined4 *)(plVar11 + 0x60) = *(undefined4 *)(param_2 + 10);
          local_268 = param_2[0xe];
          local_260 = *(float *)(param_2 + 0xf);
          local_2a8 = (uint5 *)((ulonglong)local_2a8 & 0xffffffffffffff00);
          FUN_1423990b0(plVar11,&local_268,0,0);
          (**(code **)(*plVar11 + 0x280))(plVar11,0);
        }
      }
      if (plVar14 != (longlong *)0x0) {
        FMemory::Free(plVar14);
      }
      if (local_238 != 0) {
        FMemory::Free();
      }
      if (local_100 != 0) {
        FMemory::Free();
      }
      if (local_120 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140b22e00 FUN_140b22e00 body=567 status=ok
// SIG undefined FUN_140b22e00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b22e00(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
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
  lVar4 = param_1[0xe2];
  if (lVar4 != 0) {
    lVar3 = USoundNodeEnveloper::StaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140b22e6e;
  }
  lVar4 = 0;
LAB_140b22e6e:
  cVar2 = (**(code **)(*param_1 + 0x880))(param_1);
  if (((cVar2 != '\0') && (lVar4 != 0)) && (*(longlong *)(lVar4 + 0x158) != 0)) {
    local_98 = FUN_140b40b50;
    uStack_90 = 0;
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar4 + 400) == 0) {
      uVar6 = *(undefined8 *)(lVar4 + 0x3f8);
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
    }
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      *(undefined4 *)(plVar5 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar5 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar5 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_8c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar4;
      *plVar5 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_a0 = 0xbf800000;
    local_a8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar6,param_1 + 0xe0,&local_88,0x3dcccccd);
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar4 = FMemory::Realloc(plVar5,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
  }
  return;
}



// FUNCTION 140b23040 FUN_140b23040 body=49 status=ok
// SIG undefined FUN_140b23040(void)

void FUN_140b23040(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x5d0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
    *(undefined8 *)(param_1 + 0x5d0) = 0;
  }
  return;
}



// FUNCTION 140b23080 FUN_140b23080 body=659 status=ok
// SIG undefined FUN_140b23080(void)

void FUN_140b23080(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  WriteBytesMem *this;
  int iVar11;
  bool bVar12;
  
  if ((param_2 != 0) && (iVar2 = FUN_14233f450(), iVar2 == 3)) {
    iVar2 = *(int *)(param_1 + 0x230) + -1;
    if (-1 < iVar2) {
      lVar9 = (longlong)iVar2 << 6;
      lVar10 = lVar9;
      do {
        this = (WriteBytesMem *)(*(longlong *)(param_1 + 0x228) + lVar10);
        plVar8 = *(longlong **)(this + 0x20);
        if (plVar8 == (longlong *)0x0) {
          lVar5 = 0;
          lVar6 = 0;
        }
        else {
          uVar4 = FUN_14142bde0();
          lVar5 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar4);
          lVar6 = *(longlong *)(this + 0x20);
        }
        if ((((lVar6 != 0) && (lVar5 != 0)) && (*(char *)(lVar5 + 0x348) != '\0')) &&
           (lVar6 = FUN_140b2ab40(lVar5), lVar6 == param_2)) {
          FUN_142227350(*(undefined8 *)(this + 0x20),0,1);
          lVar6 = *(longlong *)(param_1 + 0x228);
          lVar3 = AK::WriteBytesMem::Count(this);
          FUN_143011bf0(param_1,lVar6 + 0xc + lVar9,lVar3,0);
        }
        lVar9 = lVar9 + -0x40;
        lVar10 = lVar10 + -0x40;
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
    iVar2 = *(int *)(param_1 + 0x4c0) + -1;
    if (-1 < iVar2) {
      plVar8 = (longlong *)(param_1 + 0x4b8);
      lVar10 = (longlong)iVar2 * 8;
      lVar6 = (longlong)*(int *)(param_1 + 0x4c0) << 3;
      lVar9 = lVar10;
      do {
        plVar1 = *(longlong **)(lVar9 + *plVar8);
        if (plVar1 == (longlong *)0x0) {
LAB_140b231f9:
          iVar11 = *(int *)(param_1 + 0x4c0);
          iVar7 = (iVar11 - iVar2) + -1;
          if (iVar7 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar10 + *plVar8),(void *)(lVar6 + *plVar8),(longlong)iVar7 << 3);
            iVar11 = *(int *)(param_1 + 0x4c0);
          }
          *(int *)(param_1 + 0x4c0) = iVar11 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar8);
        }
        else {
          uVar4 = FUN_14142bde0();
          lVar5 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
          if (((lVar5 != 0) && (*(char *)(lVar5 + 0x348) != '\0')) &&
             (lVar5 = FUN_140b2ab40(lVar5), lVar5 == param_2)) {
            FUN_142227350(plVar1,0,1);
            goto LAB_140b231f9;
          }
        }
        lVar6 = lVar6 + -8;
        lVar10 = lVar10 + -8;
        lVar9 = lVar9 + -8;
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
    lVar10 = (longlong)*(int *)(param_1 + 0x4d0);
    if (*(int *)(param_1 + 0x4d0) != 0) {
      iVar11 = 0;
      bVar12 = **(longlong **)(param_1 + 0x4c8) != param_2;
      lVar9 = 0;
      iVar2 = 0;
      do {
        lVar9 = lVar9 + 1;
        iVar7 = iVar2 + 1;
        if (lVar9 < lVar10) {
          plVar8 = (longlong *)(*(longlong *)(param_1 + 0x4c8) + lVar9 * 8);
          do {
            if (bVar12 != (*plVar8 != param_2)) break;
            iVar7 = iVar7 + 1;
            lVar9 = lVar9 + 1;
            plVar8 = plVar8 + 1;
          } while (lVar9 < lVar10);
        }
        if (bVar12 != false) {
          if (iVar11 != iVar2) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x4c8) + (longlong)iVar11 * 8),
                       (void *)(*(longlong *)(param_1 + 0x4c8) + (longlong)iVar2 * 8),
                       (longlong)(iVar7 - iVar2) << 3);
          }
          iVar11 = iVar11 + (iVar7 - iVar2);
        }
        bVar12 = (bool)(bVar12 ^ 1);
        iVar2 = iVar7;
      } while (lVar9 < lVar10);
      *(int *)(param_1 + 0x4d0) = iVar11;
    }
  }
  return;
}



// FUNCTION 140b23320 FUN_140b23320 body=416 status=ok
// SIG undefined FUN_140b23320(void)

void FUN_140b23320(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined8 local_res8;
  
  *(undefined1 *)(param_1 + 0x5b1) = 0;
  plVar1 = *(longlong **)(param_1 + 0x5c0);
  pwVar5 = (wchar_t *)0x0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
    *(undefined8 *)(param_1 + 0x5c0) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x5c8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
    *(undefined8 *)(param_1 + 0x5c8) = 0;
  }
  if (param_2 != 0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnOwnerCrouched",L"::");
    pwVar4 = pwVar5;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar4 = pwVar2;
    }
    FName::FName(&local_res8,pwVar4 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_2 + 0x24f0,param_1,local_res8);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnOwnerUncrouched",L"::");
    pwVar4 = pwVar5;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar4 = pwVar2;
    }
    FName::FName(&local_res8,pwVar4 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_2 + 0x2500,param_1,local_res8);
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&AShield::OnOwnerHealthStateChanged",L"::");
    while (pwVar3 = pwVar4, pwVar3 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar5 = pwVar3;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_2 + 0xec8,param_1,local_res8);
  }
  return;
}



// FUNCTION 140b234c0 FUN_140b234c0 body=158 status=ok
// SIG undefined FUN_140b234c0(void)

void FUN_140b234c0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar2 = *(longlong *)(lVar2 + 400);
    if (lVar2 != 0) {
      lVar3 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && ((**(code **)(param_1[0xce] + 0x10))(), param_1[0x8f] == 0)) {
        FUN_140be3960(lVar2,param_1);
      }
    }
  }
  FUN_142ff07d0(param_1);
  return;
}



// FUNCTION 140b23560 FUN_140b23560 body=243 status=ok
// SIG undefined FUN_140b23560(void)

void FUN_140b23560(longlong param_1,undefined8 param_2)

{
  void *_Src;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_28;
  int local_20;
  
  if ((*(longlong *)(param_1 + 0x118) != 0) && (iVar1 = FUN_14233f450(), iVar1 == 3)) {
    puVar2 = (undefined8 *)0x0;
    _Src = *(void **)(param_1 + 0x1f0);
    local_20 = *(int *)(param_1 + 0x1f8);
    lVar4 = (longlong)local_20;
    local_28 = (undefined8 *)0x0;
    puVar6 = puVar2;
    if (local_20 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_28,local_20,0);
      puVar6 = local_28;
      _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar4 << 3);
    }
    puVar3 = (undefined8 *)
             ((ulonglong)((longlong)(puVar6 + local_20) + (7 - (longlong)puVar6)) >> 3);
    if (puVar6 + local_20 < puVar6) {
      puVar3 = puVar2;
    }
    puVar5 = puVar6;
    if (puVar3 != (undefined8 *)0x0) {
      do {
        FUN_140b23660(param_1,*puVar5,param_2);
        puVar2 = (undefined8 *)((longlong)puVar2 + 1);
        puVar5 = puVar5 + 1;
      } while (puVar2 != puVar3);
    }
    if (puVar6 != (undefined8 *)0x0) {
      FMemory::Free(puVar6);
    }
  }
  return;
}



// FUNCTION 140b23660 FUN_140b23660 body=746 status=ok
// SIG undefined FUN_140b23660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b23660(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined1 local_a0 [24];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if ((((param_2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x118) != 0)) &&
      (iVar2 = FUN_14233f450(), iVar2 == 3)) && (lVar4 = FUN_142ffcb50(param_2), lVar4 != 0)) {
    FUN_1422279d0(param_2,&DAT_146532190);
    uVar3 = (**(code **)(*param_2 + 0x710))(param_2,lVar4);
    if (param_3 != 0) {
      lVar4 = param_2[0x2d];
      if (lVar4 == 0) {
        local_148 = _DAT_1468b5d90;
        local_140 = DAT_1468b5d98;
        uVar3 = (undefined4)DAT_1468b5da0;
        uVar7 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        local_120 = DAT_1468b5da8;
      }
      else {
        local_148 = *(undefined8 *)(lVar4 + 0x220);
        local_140 = *(undefined4 *)(lVar4 + 0x228);
        local_88 = *(float *)(lVar4 + 0x210);
        fStack_84 = *(float *)(lVar4 + 0x214);
        fStack_80 = *(float *)(lVar4 + 0x218);
        fStack_7c = *(float *)(lVar4 + 0x21c);
        auVar1._4_4_ = -(uint)(*(float *)(lVar4 + 0x254) != fStack_84);
        auVar1._0_4_ = -(uint)(*(float *)(lVar4 + 0x250) != local_88);
        auVar1._8_4_ = -(uint)(*(float *)(lVar4 + 600) != fStack_80);
        auVar1._12_4_ = -(uint)(*(float *)(lVar4 + 0x25c) != fStack_7c);
        iVar2 = movmskps(uVar3,auVar1);
        if (iVar2 != 0) {
          *(float *)(lVar4 + 0x250) = local_88;
          *(float *)(lVar4 + 0x254) = fStack_84;
          *(float *)(lVar4 + 600) = fStack_80;
          *(float *)(lVar4 + 0x25c) = fStack_7c;
          puVar5 = (undefined8 *)FQuat::Rotator(&local_88,local_38);
          *(undefined8 *)(lVar4 + 0x260) = *puVar5;
          *(undefined4 *)(lVar4 + 0x268) = *(undefined4 *)(puVar5 + 1);
        }
        uVar3 = (undefined4)*(undefined8 *)(lVar4 + 0x260);
        uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x260) >> 0x20);
        local_120 = *(undefined4 *)(lVar4 + 0x268);
      }
      local_128 = CONCAT44(uVar7,uVar3);
      uVar6 = FRotationMatrix::FRotationMatrix(&local_78,&local_128);
      uVar6 = FMatrix::GetUnitAxis(uVar6,local_a0,2);
      FVector::Rotation(uVar6,&local_e8);
      local_d8 = *(undefined8 *)(param_1 + 0x118);
      uStack_b0 = 0;
      local_118 = 0;
      uStack_110 = 0;
      uStack_d0 = 0;
      uStack_bc = local_e8;
      uVar6 = uStack_bc;
      uStack_c0 = local_140;
      uStack_bc._0_4_ = (undefined4)local_e8;
      uStack_b4 = local_e0;
      uStack_70 = 0;
      uStack_bc._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
      local_a8 = 0;
      local_68._8_4_ = local_140;
      local_68._0_8_ = local_148;
      local_68._12_4_ = (undefined4)uStack_bc;
      local_48 = (ulonglong)uStack_a4 << 0x20;
      local_108 = 0;
      local_100 = 1;
      local_fc = 0;
      local_f4 = 0;
      local_f0 = 1;
      local_58 = uStack_bc._4_4_;
      uStack_54 = local_e0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_bc = uVar6;
      local_78 = local_d8;
      FUN_142d9d660(param_3,&local_78,&local_118);
      FRotator::Vector(&local_e8,local_28);
      FUN_14223c850(param_2,&local_118,0,0,1);
      puVar5 = (undefined8 *)FVector::Rotation((longlong)&uStack_110 + 4,local_a0);
      local_128 = *puVar5;
      local_120 = *(undefined4 *)(puVar5 + 1);
      AActor::SetActorRotation(param_2,&local_128,1);
      FUN_143015550(param_2,SQRT(uStack_110._4_4_ * uStack_110._4_4_ +
                                 (float)local_108 * (float)local_108 +
                                 local_108._4_4_ * local_108._4_4_));
      FUN_1430154c0(param_2,&local_fc);
    }
  }
  return;
}



// FUNCTION 140b23950 RestoreSelectedMaterialColor body=8 status=ok
// SIG undefined RestoreSelectedMaterialColor(void)

void UEngine::RestoreSelectedMaterialColor(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x75c) = 0;
  return;
}



// FUNCTION 140b23960 FUN_140b23960 body=78 status=ok
// SIG undefined FUN_140b23960(void)

void FUN_140b23960(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FUN_142398ec0(*(longlong *)(param_1 + 0x278),0,2);
    FUN_142600fa0(*(undefined8 *)(param_1 + 0x278));
    (**(code **)(**(longlong **)(param_1 + 0x278) + 0x3b0))(*(longlong **)(param_1 + 0x278),0);
    *(undefined8 *)(param_1 + 0x278) = 0;
  }
  return;
}



// FUNCTION 140b239b0 FUN_140b239b0 body=568 status=ok
// SIG undefined FUN_140b239b0(void)

void FUN_140b239b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_res10 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_2 != 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
    if (lVar2 != 0) {
      uVar3 = FUN_142ff7c90(param_1,*(undefined8 *)(lVar2 + 0x2c0));
      uVar4 = FUN_142ff7c90(param_1,*(undefined8 *)(lVar2 + 0x2c8));
      uVar5 = FUN_142ff7c90(param_1,*(undefined8 *)(lVar2 + 0x2e0));
      plVar1 = (longlong *)(param_2 + 0x98);
      local_28 = CONCAT44((float)DAT_1464aa730._1_1_ * 0.003921569,
                          (float)DAT_1464aa730._2_1_ * 0.003921569);
      local_20 = CONCAT44((float)DAT_1464aa730._3_1_ * 0.003921569,
                          (float)(byte)DAT_1464aa730 * 0.003921569);
      (**(code **)(*plVar1 + 0x20))(plVar1,&local_28);
      local_res10[0] = 0;
      local_28 = 0;
      local_20 = 0x1e;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      FGenericPlatformString::Memcpy(local_28,L"---------Currencies----------",0x3c);
      FUN_1428a6fb0(plVar1,&local_28,local_res10);
      if (local_28 != 0) {
        FMemory::Free();
      }
      FString::PrintfImpl(&local_28,L"Credits: {c:y}%d{c}",uVar3);
      FUN_1428c0170(plVar1,&local_28);
      if (local_28 != 0) {
        FMemory::Free();
      }
      FString::PrintfImpl(&local_28,L"Eridium: {c:b}%d{c}",uVar4);
      FUN_1428c0170(plVar1,&local_28);
      if (local_28 != 0) {
        FMemory::Free();
      }
      FString::PrintfImpl(&local_28,L"Golden Keys: {c:o}%d{c}",uVar5);
      FUN_1428c0170(plVar1,&local_28);
      if (local_28 != 0) {
        FMemory::Free();
      }
      local_res10[0] = 0;
      local_28 = 0;
      local_20 = 0x1e;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      FGenericPlatformString::Memcpy(local_28,L"---------Currencies----------",0x3c);
      FUN_1428a6fb0(plVar1,&local_28,local_res10);
      if (local_28 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140b23bf0 FUN_140b23bf0 body=1277 status=ok
// SIG undefined FUN_140b23bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b23bf0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_1e8 [32];
  uint local_1c8;
  undefined8 *local_1c0;
  longlong *local_1b8;
  int local_1b0;
  longlong local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  longlong local_178;
  undefined4 local_170;
  undefined4 local_168 [2];
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138 [2];
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  code *local_e8;
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined1 local_88 [16];
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  ulonglong local_68;
  
  if ((((param_2 != (longlong *)0x0) &&
       (local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1e8, param_3 != 0)) &&
      (lVar2 = (**(code **)(*param_2 + 0x148))(param_2), lVar2 != 0)) &&
     (lVar2 = param_2[0xe5], lVar2 != 0)) {
    *(undefined4 *)(lVar2 + 0x1dc) = *(undefined4 *)(param_1 + 0x5c);
    lVar1 = param_2[0x2d];
    if (lVar1 == 0) {
      local_1a8 = _DAT_1468b5d90;
      local_1a0 = DAT_1468b5d98;
    }
    else {
      local_1a8 = *(longlong *)(lVar1 + 0x220);
      local_1a0 = *(undefined4 *)(lVar1 + 0x228);
    }
    lVar1 = local_1a8;
    local_110 = local_1a0;
    puVar3 = (undefined8 *)FName::FName(local_168,&DAT_14428c86c,1);
    uVar4 = FUN_140b1a100(param_2,*(undefined8 *)(param_3 + 0x40),*puVar3,0);
    local_170 = local_1a0;
    local_120 = 0;
    local_128 = 0;
    local_178 = lVar1;
    uVar5 = (**(code **)(*param_2 + 0x148))(param_2);
    local_1c0 = &local_128;
    local_1c8 = 0x42480000;
    FUN_1405a1e30(&local_98,uVar5,*(undefined8 *)(param_3 + 0x48),&local_178);
    FUN_140591060(&local_98);
    local_78 = _DAT_146868b90 & _DAT_146868ba0;
    uStack_74 = uRam0000000146868b94 & uRam0000000146868ba4;
    uStack_70 = uRam0000000146868b98 & uRam0000000146868ba8;
    uStack_6c = uRam0000000146868b9c & uRam0000000146868bac;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = uRam0000000146868b9c;
    local_88._8_4_ = local_110;
    local_88._0_8_ = lVar1;
    local_88._12_4_ = 0;
    uVar5 = (**(code **)(*param_2 + 0x148))(param_2);
    local_1c0 = (undefined8 *)0x0;
    local_1c8 = CONCAT31(local_1c8._1_3_,1);
    FUN_14245f910(uVar5,*(undefined8 *)(param_3 + 0x50),&local_98,1);
    local_1b8 = (longlong *)0x0;
    local_1b0 = 0;
    FWeakObjectPtr::operator=(&local_158,param_2);
    FWeakObjectPtr::operator=(&local_140,lVar2);
    FWeakObjectPtr::operator=(&local_150,uVar4);
    FWeakObjectPtr::operator=(&local_148,param_3);
    FWeakObjectPtr::operator=(&local_160,param_1);
    local_19c = local_15c;
    local_198 = local_158;
    local_194 = local_154;
    local_190 = local_150;
    local_18c = local_14c;
    local_188 = local_148;
    local_184 = local_144;
    local_180 = local_140;
    local_168[0] = local_13c;
    plVar6 = (longlong *)FMemory::Realloc(0,0x70);
    if (plVar6 == (longlong *)0x0) {
      if (((local_1b0 != 0) && (local_1b8 != (longlong *)0x0)) &&
         ((**(code **)(*local_1b8 + 0x28))(local_1b8,0), local_1b8 != (longlong *)0x0)) {
        local_1b8 = (longlong *)FMemory::Realloc(local_1b8,0,0);
      }
    }
    else {
      *plVar6 = (longlong)&PTR_GetPoolName_1442aba58;
      *(undefined4 *)((longlong)plVar6 + 0xc) = local_19c;
      *(undefined4 *)(plVar6 + 1) = local_160;
      *(undefined4 *)(plVar6 + 2) = local_198;
      *(undefined4 *)((longlong)plVar6 + 0x14) = local_194;
      *(undefined4 *)(plVar6 + 3) = local_190;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = local_18c;
      *(undefined4 *)(plVar6 + 4) = local_188;
      *(undefined4 *)((longlong)plVar6 + 0x24) = local_184;
      *(undefined4 *)(plVar6 + 5) = local_180;
      *(undefined4 *)((longlong)plVar6 + 0x2c) = local_168[0];
      plVar6[6] = local_1a8;
      *(undefined4 *)(plVar6 + 7) = local_1a0;
      plVar6[8] = param_1;
      plVar6[9] = (longlong)param_2;
      plVar6[10] = param_3;
      plVar6[0xb] = lVar2;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar6[0xd] = lVar2;
      *plVar6 = (longlong)&PTR_GetPoolName_1442abaa0;
      FUN_140b21b10(plVar6,&local_1b8);
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
      lVar2 = FMemory::Realloc(plVar6,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    local_138[0] = 0;
    lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar4 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    local_108 = 0;
    local_100 = 0;
    if ((local_1b0 != 0) && (local_1b8 != (longlong *)0x0)) {
      (**(code **)(*local_1b8 + 0x30))(local_1b8,&local_108);
    }
    FWeakObjectPtr::operator=(local_f8,0);
    local_1c0 = (undefined8 *)CONCAT44(local_1c0._4_4_,0xbf800000);
    local_1c8 = local_1c8 & 0xffffff00;
    local_f0 = 0;
    local_b8 = (longlong *)0x0;
    local_a8 = 0;
    local_e8 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,local_138,&local_108,0x3dcccccd);
    if (local_a8 != 0) {
      plVar6 = local_d8;
      if (local_b8 != (longlong *)0x0) {
        plVar6 = local_b8;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_108);
    if (local_1b0 != 0) {
      if (local_1b8 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_1b8 + 0x28))(local_1b8,0);
      if (local_1b8 != (longlong *)0x0) {
        local_1b8 = (longlong *)FMemory::Realloc(local_1b8,0,0);
      }
      local_1b0 = 0;
    }
    if (local_1b8 != (longlong *)0x0) {
      FMemory::Free(local_1b8);
    }
  }
  return;
}



// FUNCTION 140b240f0 FUN_140b240f0 body=44 status=ok
// SIG undefined FUN_140b240f0(void)

undefined1 FUN_140b240f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x348) != '\0') {
    lVar1 = FUN_140b2ab40();
    if (lVar1 != param_2) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140b24120 FUN_140b24120 body=232 status=ok
// SIG undefined FUN_140b24120(void)

longlong * FUN_140b24120(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((param_2 == 0) || (*param_1 == 0)) {
    return (longlong *)0x0;
  }
  plVar2 = (longlong *)FUN_142227070(*param_1,param_2,0);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_1429bed90();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((char)param_1[2] != '\0') {
        (**(code **)(*plVar2 + 0x638))(plVar2,0);
      }
      FUN_142cfe720(plVar2);
      FUN_14234b150(plVar2);
      if ((char)param_1[2] != '\0') {
        FUN_1423970c0(plVar2,0);
        *(byte *)((longlong)plVar2 + 0x2f3) = *(byte *)((longlong)plVar2 + 0x2f3) | 8;
      }
      (**(code **)(*plVar2 + 0x290))(plVar2,0,0);
      return plVar2;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140b24210 FUN_140b24210 body=372 status=ok
// SIG undefined FUN_140b24210(void)

void FUN_140b24210(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_4 != 0) {
    local_38 = *param_5;
    if (local_38 == 0) {
      plVar7 = (longlong *)FUN_140b2a350(local_28,param_3,param_4);
      bVar5 = false;
      bVar4 = true;
      local_38 = *plVar7;
    }
    else {
      local_40 = (longlong *)param_5[1];
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      plVar7 = &local_48;
      bVar5 = true;
      bVar4 = false;
      local_48 = local_38;
    }
    local_30 = (longlong *)plVar7[1];
    plVar7[1] = 0;
    *plVar7 = 0;
    if ((bVar4) && (local_20 != (longlong *)0x0)) {
      LOCK();
      plVar7 = local_20 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    plVar7 = local_40;
    if ((bVar5) && (local_40 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_40 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (local_38 != 0) {
      FUN_1416b33f0(*param_1,param_2,&local_38);
    }
    plVar7 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_30)(local_30);
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



// FUNCTION 140b24390 FUN_140b24390 body=589 status=ok
// SIG undefined FUN_140b24390(void)

void FUN_140b24390(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
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
  
  FUN_14126ac70();
  plVar3 = *(longlong **)(param_1 + 0x7e8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x2b8))(plVar3,param_1,*(undefined8 *)(param_1 + 0x6e8));
  }
  plVar3 = (longlong *)(param_1 + 0x820);
  iVar1 = *(int *)(param_1 + 0x848);
  puStack_28 = (uint *)(param_1 + 0x830);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar1 != 0) {
    puVar8 = *(uint **)(param_1 + 0x840);
    if (*(uint **)(param_1 + 0x840) == (uint *)0x0) {
      puVar8 = puStack_28;
    }
    uVar2 = *puVar8;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar2 == 0) {
      lVar7 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar6 = local_78 + 1;
      bVar5 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar6;
      if (bVar5) goto LAB_140b2447f;
      uVar2 = puVar8[lVar7 + 1];
    }
    uStack_74 = -uVar2 & uVar2;
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
    if (iVar1 < local_68._4_4_) {
LAB_140b2447f:
      local_68._4_4_ = iVar1;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  iStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar3,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar5 = local_68._4_4_ < *(int *)(param_1 + 0x848);
  local_48 = plVar3;
  local_38 = plVar3;
  local_10 = plVar3;
  local_68 = puStack_28;
  if (bVar5) {
    do {
      plVar4 = *(longlong **)((longlong)iStack_5c * 0x40 + *plVar3);
      (**(code **)(*plVar4 + 0x2c0))
                (plVar4,param_1,*(undefined8 *)(param_1 + 0x6e8),
                 *plVar3 + 8 + (longlong)iStack_5c * 0x40);
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  iVar1 = *(int *)(param_1 + 0x788);
  while (0 < iVar1) {
    plVar3 = *(longlong **)(param_1 + 0x780);
    if (*plVar3 == 0) {
      iVar1 = *(int *)(param_1 + 0x788);
      iVar6 = iVar1 + -1;
      if (0 < iVar6) {
        iVar6 = 1;
      }
      if (iVar6 != 0) {
        _guard_xfg_dispatch_icall_nop(plVar3,plVar3 + (iVar1 - iVar6),(longlong)iVar6 << 3);
        iVar1 = *(int *)(param_1 + 0x788);
      }
      *(int *)(param_1 + 0x788) = iVar1 + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x780);
    }
    else {
      FUN_140b3d130(param_1);
    }
    iVar1 = *(int *)(param_1 + 0x788);
  }
  return;
}



// FUNCTION 140b245e0 FUN_140b245e0 body=157 status=ok
// SIG undefined FUN_140b245e0(void)

void FUN_140b245e0(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x6e0) != '\0') || (*(longlong *)(param_1 + 0x6e8) == 0))
  goto LAB_140b24669;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x6e8) + 0x1a0);
  if ((lVar3 == 0) && (lVar3 = *(longlong *)(param_1 + 0x118), lVar3 == 0)) {
LAB_140b24657:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140b24657;
  }
  FUN_140b2f560(param_1,lVar3);
LAB_140b24669:
  FUN_14126ac70(param_1,param_2);
  return;
}



// FUNCTION 140b24680 FUN_140b24680 body=128 status=ok
// SIG undefined FUN_140b24680(void)

void FUN_140b24680(longlong param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  FUN_14222a250();
  if ((param_2 == 0) && (lVar1 = *(longlong *)(param_1 + 0x4a0), lVar1 != 0)) {
    cVar3 = FUN_1407cd900(lVar1);
    if (cVar3 == '\0') {
      lVar4 = FUN_14149b100();
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
        FUN_140483870(lVar1 + 0x938,param_1);
      }
    }
  }
  return;
}



// FUNCTION 140b24700 FUN_140b24700 body=78 status=ok
// SIG undefined FUN_140b24700(void)

void FUN_140b24700(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_14222a250();
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar1 = UWorld::GetGameState<APVPGameState>(uVar2);
    if (lVar1 != 0) {
      FUN_140cd7a40(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140b24750 PostLoad body=43 status=ok
// SIG undefined PostLoad(void)

void UEditableMesh::PostLoad(undefined8 param_1)

{
  FUN_14222a250();
  FUN_140b3c490(param_1);
  FUN_140b3c810(param_1);
  FUN_140b3c560(param_1);
  return;
}



// FUNCTION 140b24780 FUN_140b24780 body=104 status=ok
// SIG undefined FUN_140b24780(void)

void FUN_140b24780(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  
  lVar1 = FUN_140b2c020();
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x1a0) != 0)) {
    lVar1 = FUN_140b2c020(param_1);
    if (*(longlong *)(lVar1 + 0x6e8) != 0) {
      local_res18[0] = *(undefined8 *)(param_1 + 0x1a0);
      TArray<UAIAsyncTaskBlueprintProxy_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                (*(longlong *)(lVar1 + 0x6e8) + 0x5a8,local_res18);
    }
  }
  FUN_142d5ce30(param_1,param_2);
  return;
}



// FUNCTION 140b247f0 FUN_140b247f0 body=195 status=ok
// SIG undefined FUN_140b247f0(void)

void FUN_140b247f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_res8;
  undefined1 local_res18 [8];
  undefined2 *local_28;
  int local_20;
  
  uVar5 = 0;
  plVar4 = *(longlong **)(param_1 + 0x718);
  uVar6 = (longlong)*(int *)(param_1 + 0x720) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x720) < plVar4) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    do {
      if (*plVar4 != 0) {
        local_res8 = *(undefined8 *)(*plVar4 + 0x18);
        FName::ToString(&local_res8,&local_28);
        uVar1 = *(undefined8 *)(param_1 + 0x118);
        puVar3 = &DAT_143f3eda8;
        if (local_20 != 0) {
          puVar3 = local_28;
        }
        puVar2 = (undefined8 *)FName::FName(local_res18,puVar3,1);
        FUN_143059e20(uVar1,*puVar2);
        if (local_28 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      plVar4 = plVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  return;
}



// FUNCTION 140b248c0 FUN_140b248c0 body=40 status=ok
// SIG undefined FUN_140b248c0(void)

void FUN_140b248c0(undefined8 param_1,undefined4 param_2)

{
  FUN_140b3c3e0();
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 140b248f0 FUN_140b248f0 body=328 status=ok
// SIG undefined FUN_140b248f0(void)

void FUN_140b248f0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_88 [2];
  code *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  uVar8 = 0;
  plVar1 = param_2 + 2;
  local_48 = 0;
  local_38 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    plVar3 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar3 = plVar1;
    }
    if (plVar3 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)*plVar3)(plVar3,local_68);
      (**(code **)(*plVar3 + 8))(plVar3);
      local_78[0] = (code *)*param_2;
      goto LAB_140b24954;
    }
  }
  local_78[0] = AK::MemoryMgr::StartProfileThreadUsage;
LAB_140b24954:
  BuildPatchServices::FCloudChunkSource::SetUnavailableChunksCallback(param_1,local_78);
  plVar3 = *(longlong **)(param_1 + 0x360);
  uVar10 = (longlong)*(int *)(param_1 + 0x368) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x368) < plVar3) {
    uVar10 = uVar8;
  }
  uVar9 = uVar8;
  if (uVar10 != 0) {
    do {
      lVar2 = *plVar3;
      uVar5 = uVar8;
      if (lVar2 != 0) {
        uVar4 = UDamageableInterface::GetPrivateStaticClass();
        uVar5 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar4);
      }
      uVar6 = uVar8;
      local_88[0] = uVar5;
      if (*(int *)(param_2 + 8) != 0) {
        plVar7 = (longlong *)param_2[6];
        if ((longlong *)param_2[6] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        if (plVar7 != (longlong *)0x0) {
          uVar6 = (**(code **)(*plVar7 + 8))();
        }
      }
      (*(code *)*param_2)(uVar6,local_88);
      plVar3 = plVar3 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar10);
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar3 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar3 = plVar1;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b24a40 FUN_140b24a40 body=489 status=ok
// SIG undefined FUN_140b24a40(void)

undefined8 FUN_140b24a40(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_2 == 0) {
LAB_140b24a98:
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar2 = DAT_146b33f38;
    lVar6 = DAT_146b33f38 + 0xa0;
    lVar3 = FWeakObjectPtr::Get(lVar6);
    if (lVar3 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
        uVar4 = 0;
      }
      else {
        uVar4 = (ulonglong)DAT_1464b56f4;
      }
      UNLOCK();
      if (((int)uVar4 != *(int *)(lVar2 + 0xa8)) && (uVar4 = 0, *(longlong *)(lVar2 + 0xb0) != 0)) {
        lVar3 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar6,lVar3);
        if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(uint *)(lVar2 + 0xa8) = DAT_1464b56f4;
        }
        lVar3 = FWeakObjectPtr::Get(lVar6);
        uVar4 = 0;
        if (lVar3 != 0) goto LAB_140b24b34;
      }
    }
    else {
LAB_140b24b34:
      lVar2 = FUN_1413bd170();
      iVar1 = *(int *)(lVar2 + 0x90);
      uVar4 = (longlong)iVar1;
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar1) ||
         (uVar4 = *(ulonglong *)(*(longlong *)(lVar3 + 0x10) + 0x88),
         *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
        uVar4 = uVar4 & 0xffffffffffffff00;
      }
      else {
        uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      }
      if (((char)uVar4 != '\0') && (param_2 != 0)) {
        lVar2 = FUN_1413f82e0();
        iVar1 = *(int *)(lVar2 + 0x90);
        uVar4 = (longlong)iVar1;
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
           (uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
           *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
          uVar4 = uVar4 & 0xffffffffffffff00;
        }
        else {
          uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
        }
        if ((char)uVar4 != '\0') {
          uVar5 = FWmfMediaPlayer::GetSamples(lVar3);
          param_2 = FUN_140c42900(param_2,uVar5);
          uVar4 = 0;
          if (param_2 != 0) {
            lVar2 = AWeaponBase::GetPrivateStaticClass();
            iVar1 = *(int *)(lVar2 + 0x90);
            uVar4 = (longlong)iVar1;
            if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
               (uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
               *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
              uVar4 = uVar4 & 0xffffffffffffff00;
            }
            else {
              uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
            }
            if ((char)uVar4 != '\0') goto LAB_140b24bfe;
          }
        }
      }
    }
    bVar7 = *(int *)(param_1 + 0x88) == 0;
  }
  else {
    lVar2 = AWeaponBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140b24a98;
LAB_140b24bfe:
    uVar4 = (ulonglong)*(uint *)(param_2 + 0x5b8);
    bVar7 = *(uint *)(param_1 + 0x88) == *(uint *)(param_2 + 0x5b8);
  }
  return CONCAT71((int7)(uVar4 >> 8),bVar7);
}



// FUNCTION 140b24c30 FUN_140b24c30 body=44 status=ok
// SIG undefined FUN_140b24c30(void)

void FUN_140b24c30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    *(undefined1 *)(lVar1 + 0x764) = 1;
  }
  return;
}



// FUNCTION 140b24c60 FUN_140b24c60 body=72 status=ok
// SIG undefined FUN_140b24c60(void)

void FUN_140b24c60(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  param_1 = param_1 + 8;
  lVar1 = FWeakObjectPtr::Get(param_1);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1);
    *(undefined1 *)(lVar1 + 0x778) = 0;
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140b24c9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x6d0))(plVar2,0);
    return;
  }
  return;
}



// FUNCTION 140b24cb0 FUN_140b24cb0 body=137 status=ok
// SIG undefined FUN_140b24cb0(void)

void FUN_140b24cb0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  lVar1 = param_1 + 8;
  lVar2 = FWeakObjectPtr::Get(lVar1);
  if (lVar2 != 0) {
    lVar2 = FWeakObjectPtr::Get(lVar1);
    if (*(char *)(lVar2 + 0x598) == '\x01') {
      uVar3 = FWeakObjectPtr::Get(lVar1);
      FUN_140b2cbe0(uVar3,1);
      lVar2 = FWeakObjectPtr::Get(lVar1);
      if (*(char *)(lVar2 + 0x598) != '\x01') {
        lVar2 = FWeakObjectPtr::Get(lVar1);
        *(undefined1 *)(lVar2 + 0x598) = 1;
        local_28 = *(undefined4 *)(param_1 + 0x10);
        uStack_24 = *(undefined4 *)(param_1 + 0x14);
        uStack_20 = *(undefined4 *)(param_1 + 0x18);
        uStack_1c = *(undefined4 *)(param_1 + 0x1c);
        local_18 = *(undefined8 *)(param_1 + 0x20);
        uVar3 = FWeakObjectPtr::Get(lVar1);
        FUN_140b39e70(uVar3,&local_28);
      }
    }
  }
  return;
}



// FUNCTION 140b24d50 FUN_140b24d50 body=72 status=ok
// SIG undefined FUN_140b24d50(void)

void FUN_140b24d50(longlong param_1)

{
  longlong lVar1;
  
  param_1 = param_1 + 8;
  lVar1 = FWeakObjectPtr::Get(param_1);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1);
    if ((char)*(undefined8 *)(lVar1 + 2000) == '\0') {
      lVar1 = FWeakObjectPtr::Get(param_1);
      *(undefined1 *)(lVar1 + 0x779) = 1;
    }
  }
  return;
}



// FUNCTION 140b24da0 FUN_140b24da0 body=140 status=ok
// SIG undefined FUN_140b24da0(void)

void FUN_140b24da0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x10;
    lVar2 = FWeakObjectPtr::Get(lVar1);
    if (lVar2 != 0) {
      lVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
      if (lVar2 != 0) {
        uVar3 = FWeakObjectPtr::Get(param_1 + 0x18);
        uVar4 = FWeakObjectPtr::Get(lVar1);
        FUN_142223280(uVar4,uVar3,&DAT_146532180,0);
      }
      plVar5 = (longlong *)FWeakObjectPtr::Get(lVar1);
      (**(code **)(*plVar5 + 0x6f8))(plVar5);
    }
  }
  return;
}



// FUNCTION 140b24e30 FUN_140b24e30 body=168 status=ok
// SIG undefined FUN_140b24e30(void)

void FUN_140b24e30(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
  plVar1 = (longlong *)plVar3[0xeb];
  *(undefined1 *)((longlong)plVar3 + 0x771) = 0;
  if ((char)plVar3[0xee] != '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_142600fa0();
    }
    (**(code **)(*plVar3 + 0x358))(plVar3,0);
    FUN_140b3c3e0(plVar3);
    FUN_142359580(plVar3);
    return;
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
  }
  (**(code **)(*plVar3 + 0x418))(plVar3,&DAT_146532190);
                    /* WARNING: Could not recover jumptable at 0x000140b24ecb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x3b0))(plVar3,0);
  return;
}



// FUNCTION 140b24ee0 FUN_140b24ee0 body=105 status=ok
// SIG undefined FUN_140b24ee0(void)

void FUN_140b24ee0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 8;
  lVar1 = FWeakObjectPtr::Get(lVar2);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
    if (lVar1 != 0) {
      lVar1 = FWeakObjectPtr::Get(lVar2);
      if (*(longlong *)(lVar1 + 0x128) != 0) {
        lVar2 = FWeakObjectPtr::Get(lVar2);
        FUN_140b1a100(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(lVar2 + 0x128),0,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140b24f50 FUN_140b24f50 body=55 status=ok
// SIG undefined FUN_140b24f50(void)

void FUN_140b24f50(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x000140b24f7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x288))(plVar2);
    return;
  }
  return;
}



// FUNCTION 140b24f90 FUN_140b24f90 body=190 status=ok
// SIG undefined FUN_140b24f90(void)

void FUN_140b24f90(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (((lVar2 != 0) && (lVar2 = FWeakObjectPtr::Get(param_1 + 0x10), lVar2 != 0)) &&
     (lVar2 = FWeakObjectPtr::Get(param_1 + 0x18), lVar2 != 0)) {
    uVar3 = FWeakObjectPtr::Get(param_1 + 8);
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x68);
    fVar6 = *(float *)(*(longlong *)(param_1 + 0x20) + 100);
    fVar5 = (float)FUN_1409d4e20(uVar3);
    if ((fVar6 <= fVar5) && (fVar6 = fVar5, fVar1 <= fVar5)) {
      fVar6 = fVar1;
    }
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x10);
    FUN_1423bc010(uVar3,fVar6,1);
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x10);
    (**(code **)(*plVar4 + 0x488))(plVar4,0,1,0);
  }
  return;
}



// FUNCTION 140b25060 FUN_140b25060 body=120 status=ok
// SIG undefined FUN_140b25060(void)

void FUN_140b25060(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
  if ((lVar1 != 0) && (lVar1 = FWeakObjectPtr::Get(param_1 + 0x18), lVar1 != 0)) {
    local_38 = *(undefined8 *)(param_1 + 0x30);
    uStack_30 = *(undefined8 *)(param_1 + 0x38);
    local_28 = *(undefined4 *)(param_1 + 0x40);
    uStack_24 = *(undefined4 *)(param_1 + 0x44);
    uStack_20 = *(undefined4 *)(param_1 + 0x48);
    uStack_1c = *(undefined4 *)(param_1 + 0x4c);
    local_18 = *(undefined4 *)(param_1 + 0x50);
    uStack_14 = *(undefined4 *)(param_1 + 0x54);
    uStack_10 = *(undefined4 *)(param_1 + 0x58);
    uStack_c = *(undefined4 *)(param_1 + 0x5c);
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x10);
    FUN_140b42660(*(undefined8 *)(param_1 + 0x20),uVar3,uVar2,&local_38);
  }
  return;
}



// FUNCTION 140b250e0 FUN_140b250e0 body=461 status=ok
// SIG undefined FUN_140b250e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b250e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [64];
  
  lVar1 = param_1 + 8;
  lVar2 = FWeakObjectPtr::Get(lVar1);
  if ((lVar2 != 0) && (lVar2 = FWeakObjectPtr::Get(param_1 + 0x10), lVar2 != 0)) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
    if (*(longlong *)(lVar2 + 0x80) != 0) {
      local_50 = 0;
      local_68 = 0;
      local_60 = 0;
      lVar2 = FWeakObjectPtr::Get(lVar1);
      lVar2 = *(longlong *)(lVar2 + 0x168);
      if (lVar2 == 0) {
        local_78 = _DAT_1468b5d90;
        local_70 = DAT_1468b5d98;
      }
      else {
        local_78 = *(undefined8 *)(lVar2 + 0x220);
        local_70 = *(undefined4 *)(lVar2 + 0x228);
      }
      local_58 = local_78;
      local_50 = local_70;
      plVar3 = (longlong *)FWeakObjectPtr::Get(lVar1);
      lVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
      uVar4 = (**(code **)(*plVar3 + 0x148))(plVar3);
      FUN_1405a1e30(local_48,uVar4,*(undefined8 *)(lVar2 + 0x80),&local_58,0x42480000,&local_68);
      FUN_140591060(local_48);
    }
    lVar2 = FWeakObjectPtr::Get(lVar1);
    *(undefined1 *)(lVar2 + 0x778) = 1;
    lVar2 = FWeakObjectPtr::Get(lVar1);
    *(undefined1 *)(lVar2 + 0x779) = 1;
    uVar4 = FWeakObjectPtr::Get(lVar1);
    SScrollBox::SetWheelScrollMultiplier(uVar4,0x42480000);
    uVar4 = FWeakObjectPtr::Get(lVar1);
    uhx::glues::AGEffectSphere_Glue_obj::set_SizeScale(uVar4,0);
    plVar3 = (longlong *)FWeakObjectPtr::Get(lVar1);
    (**(code **)(*plVar3 + 0x6f8))(plVar3);
  }
  return;
}



// FUNCTION 140b252b0 FUN_140b252b0 body=96 status=ok
// SIG undefined FUN_140b252b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140b252b0(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_1 + 0x20);
  local_20 = *(undefined1 *)(param_1 + 0x28);
  local_18 = 1;
  plVar1 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x208))(plVar1,*(undefined8 *)(param_1 + 8),&local_28);
  return;
}



// FUNCTION 140b25310 FUN_140b25310 body=46 status=ok
// SIG undefined FUN_140b25310(void)

undefined1 FUN_140b25310(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    *(undefined1 *)(lVar1 + 0x764) = 1;
  }
  return 1;
}



// FUNCTION 140b25340 FUN_140b25340 body=69 status=ok
// SIG undefined FUN_140b25340(void)

undefined1 FUN_140b25340(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  param_1 = param_1 + 8;
  lVar1 = FWeakObjectPtr::Get(param_1);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1);
    *(undefined1 *)(lVar1 + 0x778) = 0;
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
    (**(code **)(*plVar2 + 0x6d0))(plVar2,0);
  }
  return 1;
}



// FUNCTION 140b25390 FUN_140b25390 body=139 status=ok
// SIG undefined FUN_140b25390(void)

undefined1 FUN_140b25390(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  lVar1 = param_1 + 8;
  lVar2 = FWeakObjectPtr::Get(lVar1);
  if (lVar2 != 0) {
    lVar2 = FWeakObjectPtr::Get(lVar1);
    if (*(char *)(lVar2 + 0x598) == '\x01') {
      uVar3 = FWeakObjectPtr::Get(lVar1);
      FUN_140b2cbe0(uVar3,1);
      lVar2 = FWeakObjectPtr::Get(lVar1);
      if (*(char *)(lVar2 + 0x598) != '\x01') {
        lVar2 = FWeakObjectPtr::Get(lVar1);
        *(undefined1 *)(lVar2 + 0x598) = 1;
        local_28 = *(undefined4 *)(param_1 + 0x10);
        uStack_24 = *(undefined4 *)(param_1 + 0x14);
        uStack_20 = *(undefined4 *)(param_1 + 0x18);
        uStack_1c = *(undefined4 *)(param_1 + 0x1c);
        local_18 = *(undefined8 *)(param_1 + 0x20);
        uVar3 = FWeakObjectPtr::Get(lVar1);
        FUN_140b39e70(uVar3,&local_28);
      }
    }
  }
  return 1;
}



// FUNCTION 140b25420 FUN_140b25420 body=20 status=ok
// SIG undefined FUN_140b25420(void)

undefined1 FUN_140b25420(longlong param_1)

{
  FUN_140b181f0(param_1 + 8);
  return 1;
}



// FUNCTION 140b25440 FUN_140b25440 body=74 status=ok
// SIG undefined FUN_140b25440(void)

undefined8 FUN_140b25440(longlong param_1)

{
  longlong lVar1;
  
  param_1 = param_1 + 8;
  lVar1 = FWeakObjectPtr::Get(param_1);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1);
    if ((char)*(undefined8 *)(lVar1 + 2000) == '\0') {
      lVar1 = FWeakObjectPtr::Get(param_1);
      *(undefined1 *)(lVar1 + 0x779) = 1;
    }
  }
  return 1;
}



// FUNCTION 140b25490 FUN_140b25490 body=150 status=ok
// SIG undefined FUN_140b25490(void)

undefined8 FUN_140b25490(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x10;
    lVar2 = FWeakObjectPtr::Get(lVar1);
    if (lVar2 != 0) {
      lVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
      if (lVar2 != 0) {
        uVar3 = FWeakObjectPtr::Get(param_1 + 0x18);
        uVar4 = FWeakObjectPtr::Get(lVar1);
        FUN_142223280(uVar4,uVar3,&DAT_146532180,0);
      }
      plVar5 = (longlong *)FWeakObjectPtr::Get(lVar1);
      (**(code **)(*plVar5 + 0x6f8))(plVar5);
    }
    return 1;
  }
  return 1;
}



// FUNCTION 140b25530 FUN_140b25530 body=167 status=ok
// SIG undefined FUN_140b25530(void)

undefined8 FUN_140b25530(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
    plVar1 = (longlong *)plVar3[0xeb];
    *(undefined1 *)((longlong)plVar3 + 0x771) = 0;
    if ((char)plVar3[0xee] != '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_142600fa0();
      }
      (**(code **)(*plVar3 + 0x358))(plVar3,0);
      FUN_140b3c3e0(plVar3);
      FUN_142359580(plVar3);
      return 1;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
    }
    (**(code **)(*plVar3 + 0x418))(plVar3,&DAT_146532190);
    (**(code **)(*plVar3 + 0x3b0))(plVar3,0);
  }
  return 1;
}



// FUNCTION 140b255e0 FUN_140b255e0 body=102 status=ok
// SIG undefined FUN_140b255e0(void)

undefined8 FUN_140b255e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 8;
  lVar1 = FWeakObjectPtr::Get(lVar2);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
    if (lVar1 != 0) {
      lVar1 = FWeakObjectPtr::Get(lVar2);
      if (*(longlong *)(lVar1 + 0x128) != 0) {
        lVar2 = FWeakObjectPtr::Get(lVar2);
        FUN_140b1a100(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(lVar2 + 0x128),0,1);
      }
    }
  }
  return 1;
}



// FUNCTION 140b25650 FUN_140b25650 body=51 status=ok
// SIG undefined FUN_140b25650(void)

undefined1 FUN_140b25650(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(*plVar2 + 0x288))(plVar2);
  }
  return 1;
}



// FUNCTION 140b25690 FUN_140b25690 body=217 status=ok
// SIG undefined FUN_140b25690(void)

undefined1 FUN_140b25690(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 == 0) {
    return 1;
  }
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
  if ((lVar2 != 0) && (lVar2 = FWeakObjectPtr::Get(param_1 + 0x18), lVar2 != 0)) {
    uVar3 = FWeakObjectPtr::Get(param_1 + 8);
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x20) + 0x68);
    fVar6 = *(float *)(*(longlong *)(param_1 + 0x20) + 100);
    fVar5 = (float)FUN_1409d4e20(uVar3);
    if ((fVar6 <= fVar5) && (fVar6 = fVar5, fVar1 <= fVar5)) {
      fVar6 = fVar1;
    }
    uVar3 = FWeakObjectPtr::Get(param_1 + 0x10);
    FUN_1423bc010(uVar3,fVar6,1);
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x10);
    (**(code **)(*plVar4 + 0x488))(plVar4,0,1,0);
    return 1;
  }
  return 1;
}



// FUNCTION 140b25770 FUN_140b25770 body=20 status=ok
// SIG undefined FUN_140b25770(void)

undefined1 FUN_140b25770(longlong param_1)

{
  FUN_140b189b0(param_1 + 8);
  return 1;
}



// FUNCTION 140b25790 FUN_140b25790 body=130 status=ok
// SIG undefined FUN_140b25790(void)

undefined1 FUN_140b25790(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x18);
    if (lVar1 != 0) {
      local_38 = *(undefined8 *)(param_1 + 0x30);
      uStack_30 = *(undefined8 *)(param_1 + 0x38);
      local_28 = *(undefined4 *)(param_1 + 0x40);
      uStack_24 = *(undefined4 *)(param_1 + 0x44);
      uStack_20 = *(undefined4 *)(param_1 + 0x48);
      uStack_1c = *(undefined4 *)(param_1 + 0x4c);
      local_18 = *(undefined4 *)(param_1 + 0x50);
      uStack_14 = *(undefined4 *)(param_1 + 0x54);
      uStack_10 = *(undefined4 *)(param_1 + 0x58);
      uStack_c = *(undefined4 *)(param_1 + 0x5c);
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
      uVar3 = FWeakObjectPtr::Get(param_1 + 0x10);
      FUN_140b42660(*(undefined8 *)(param_1 + 0x20),uVar3,uVar2,&local_38);
    }
    return 1;
  }
  return 1;
}



// FUNCTION 140b25820 FUN_140b25820 body=493 status=ok
// SIG undefined FUN_140b25820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140b25820(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [64];
  
  lVar1 = param_1 + 8;
  lVar2 = FWeakObjectPtr::Get(lVar1);
  if (lVar2 == 0) {
    return 1;
  }
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
  if (lVar2 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
    if (*(longlong *)(lVar2 + 0x80) != 0) {
      local_50 = 0;
      local_68 = 0;
      local_60 = 0;
      lVar2 = FWeakObjectPtr::Get(lVar1);
      lVar2 = *(longlong *)(lVar2 + 0x168);
      if (lVar2 == 0) {
        local_78 = _DAT_1468b5d90;
        local_70 = DAT_1468b5d98;
      }
      else {
        local_78 = *(undefined8 *)(lVar2 + 0x220);
        local_70 = *(undefined4 *)(lVar2 + 0x228);
      }
      local_58 = local_78;
      local_50 = local_70;
      plVar3 = (longlong *)FWeakObjectPtr::Get(lVar1);
      lVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
      uVar4 = (**(code **)(*plVar3 + 0x148))(plVar3);
      FUN_1405a1e30(local_48,uVar4,*(undefined8 *)(lVar2 + 0x80),&local_58,0x42480000,&local_68);
      FUN_140591060(local_48);
    }
    lVar2 = FWeakObjectPtr::Get(lVar1);
    *(undefined1 *)(lVar2 + 0x778) = 1;
    lVar2 = FWeakObjectPtr::Get(lVar1);
    *(undefined1 *)(lVar2 + 0x779) = 1;
    uVar4 = FWeakObjectPtr::Get(lVar1);
    SScrollBox::SetWheelScrollMultiplier(uVar4,0x42480000);
    uVar4 = FWeakObjectPtr::Get(lVar1);
    uhx::glues::AGEffectSphere_Glue_obj::set_SizeScale(uVar4,0);
    plVar3 = (longlong *)FWeakObjectPtr::Get(lVar1);
    (**(code **)(*plVar3 + 0x6f8))(plVar3);
    return 1;
  }
  return 1;
}



// FUNCTION 140b25a10 FUN_140b25a10 body=124 status=ok
// SIG undefined FUN_140b25a10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_140b25a10(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar1 != '\0') {
    local_28 = *(undefined8 *)(param_1 + 0x20);
    local_20 = *(undefined1 *)(param_1 + 0x28);
    local_18 = 1;
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x18);
    (**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(param_1 + 8),&local_28);
  }
  return cVar1 != '\0';
}



// FUNCTION 140b25a90 FUN_140b25a90 body=1894 status=ok
// SIG undefined FUN_140b25a90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b25a90(longlong *param_1)

{
  float fVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong **pplVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint *puVar21;
  undefined1 auStack_348 [32];
  longlong **local_328;
  undefined8 local_320;
  undefined8 local_318;
  uint local_308;
  uint uStack_304;
  uint *puStack_300;
  undefined4 local_2f8;
  int iStack_2f4;
  uint uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined1 local_2d4;
  undefined2 local_2d3;
  undefined1 local_2d1;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 uStack_2c0;
  undefined4 local_2bc;
  longlong *local_2b8;
  undefined8 uStack_2b0;
  uint *local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [16];
  longlong *local_288;
  undefined2 local_280;
  int local_278;
  undefined8 local_274;
  undefined4 local_26c;
  longlong *local_268;
  undefined8 uStack_260;
  uint *puStack_258;
  undefined4 uStack_250;
  int iStack_24c;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  byte local_218;
  undefined1 local_214 [8];
  undefined1 local_20c [24];
  undefined1 local_1f4 [212];
  undefined4 local_120;
  undefined1 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_10c;
  float local_c8;
  undefined1 local_c4;
  undefined4 local_b0;
  undefined1 local_ac;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  iVar13 = *(int *)((longlong)param_1 + 0xc);
  uVar16 = 0;
  uVar9 = uVar16;
  if (iVar13 < (int)DAT_1469e91c4) {
    uVar15 = iVar13 >> 0x1f & 0xffff;
    uVar7 = iVar13 + uVar15;
    uVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
            (longlong)(int)((uVar7 & 0xffff) - uVar15) * 0x18;
  }
  if ((*(uint *)(uVar9 + 8) >> 0x1d & 1) != 0) {
    return;
  }
  cVar6 = UMaterialInterface::GetCastShadowAsMasked(param_1);
  if (cVar6 != '\0') {
    return;
  }
  plVar2 = (longlong *)param_1[0xfd];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2b0))(plVar2,param_1,param_1[0xdd]);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468691a8) && (_Init_thread_header(&DAT_1468691a8), DAT_1468691a8 == -1))
  {
    FName::FName(&DAT_1468691a0,L"BP_GM_Payload_ToiletBombs_C",1);
    _Init_thread_footer(&DAT_1468691a8);
  }
  local_2b8 = param_1 + 0x104;
  uStack_304 = 1;
  iVar13 = (int)param_1[0x109];
  puStack_300 = (uint *)(param_1 + 0x106);
  local_308 = 0;
  iStack_2f4 = 0;
  uStack_2f0 = 0;
  if (iVar13 != 0) {
    puVar21 = (uint *)param_1[0x108];
    if ((uint *)param_1[0x108] == (uint *)0x0) {
      puVar21 = puStack_300;
    }
    uVar7 = *puVar21;
    uVar9 = uVar16;
    uVar20 = uVar16;
    while (uVar7 == 0) {
      iVar8 = (int)uVar9;
      uStack_2f0 = (int)uVar20 + 0x20;
      uVar20 = (ulonglong)uStack_2f0;
      local_308 = iVar8 + 1;
      uVar9 = (ulonglong)local_308;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_140b25c18;
      uVar7 = puVar21[(longlong)iVar8 + 1];
    }
    uStack_304 = uVar7 - 1 & uVar7 ^ uVar7;
    local_278 = 0x1f;
    if (uStack_304 != 0) {
      for (; uStack_304 >> local_278 == 0; local_278 = local_278 + -1) {
      }
    }
    if (uStack_304 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - local_278;
    }
    iStack_2f4 = (uStack_2f0 - iVar8) + 0x1f;
    if (iVar13 < iStack_2f4) {
LAB_140b25c18:
      iStack_2f4 = iVar13;
    }
  }
  local_2f8 = 0xffffffff;
  uStack_2a0 = CONCAT44(iStack_2f4,0xffffffff);
  auVar4._8_4_ = uStack_2f0;
  auVar4._0_8_ = uStack_2a0;
  auVar4._12_4_ = uStack_2ec;
  iStack_24c = iStack_2f4;
  local_240._0_4_ = SUB84(local_2b8,0);
  local_240._4_4_ = (undefined4)((ulonglong)local_2b8 >> 0x20);
  uStack_2b0 = CONCAT44(uStack_304,local_308);
  uStack_250 = 0xffffffff;
  local_280 = 0;
  uStack_248 = auVar4._8_8_;
  local_298._8_4_ = (undefined4)local_240;
  local_298._0_8_ = uStack_248;
  local_298._12_4_ = local_240._4_4_;
  iVar13 = iStack_2f4;
  local_2a8 = puStack_300;
  local_288 = local_2b8;
  local_268 = local_2b8;
  uStack_260 = uStack_2b0;
  puStack_258 = puStack_300;
  local_240 = local_2b8;
  if (iStack_2f4 < (int)param_1[0x109]) {
    do {
      plVar3 = local_2b8;
      lVar17 = (longlong)iVar13 * 0x40;
      plVar2 = *(longlong **)(lVar17 + *local_2b8);
      (**(code **)(*plVar2 + 0x2b8))(plVar2,param_1,param_1[0xdd],*local_2b8 + 8 + lVar17);
      lVar17 = *(longlong *)(*(longlong *)(lVar17 + *plVar3) + 0x10);
      if (((lVar17 != 0) && (*(longlong *)(lVar17 + 0x18) == DAT_1468691a0)) && (param_1[0x2d] != 0)
         ) {
        FUN_14223c460(param_1,0);
      }
      uStack_2a0 = CONCAT44(uStack_2a0._4_4_,(uint)uStack_2a0 & ~uStack_2b0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_2b0);
      iVar13 = uStack_2a0._4_4_;
    } while (uStack_2a0._4_4_ < (int)local_2a8[6]);
    if (((char)local_280 != '\0') && (local_280._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_288,(int)local_288[1] - *(int *)((longlong)local_288 + 0x34),1);
    }
  }
  FUN_143072b30(param_1);
  if ((char)param_1[0xef] == '\0') goto LAB_140b260f0;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar17 = DAT_146b33f38;
  lVar19 = DAT_146b33f38 + 0xa0;
  lVar10 = FWeakObjectPtr::Get(lVar19);
  if (lVar10 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar17 + 0xa8)) ||
       (local_2e8 = 0, *(longlong *)(lVar17 + 0xb0) == 0)) goto LAB_140b260f0;
    lVar10 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar19,lVar10);
    if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar17 + 0xa8) = DAT_1464b56f4;
    }
    lVar10 = FWeakObjectPtr::Get(lVar19);
    if (lVar10 == 0) goto LAB_140b260f0;
  }
  lVar17 = FUN_1413bd170();
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar17 + 0x90) * 8)
      != lVar17 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (bVar5) {
    FUN_142d0a300(local_228);
    (**(code **)(*param_1 + 0x700))(param_1,local_228);
    if (param_1 + 0x8e != (longlong *)&local_120) {
      local_120 = (undefined4)param_1[0x8e];
      local_11c = 1;
    }
    fVar1 = *(float *)(param_1 + 0x91);
    if ((0.0 < fVar1) && ((float *)(param_1 + 0x91) != &local_c8)) {
      local_c4 = 1;
      local_c8 = fVar1;
    }
    uVar9 = uVar16;
    if (param_1[0x90] != 0) {
      plVar11 = (longlong *)FUN_142e0d0b0();
      plVar2 = (longlong *)param_1[0x90];
      for (plVar3 = plVar2; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6]) {
        if (plVar3 == plVar11) {
          if ((plVar2 != (longlong *)0x0) && (uVar9 = plVar2[0x1f], plVar2[0x1f] == 0)) {
            (**(code **)(*plVar2 + 0x368))(plVar2);
            uVar9 = plVar2[0x1f];
          }
          break;
        }
      }
    }
    FWeakObjectPtr::operator=(local_214,uVar9);
    if (param_1[0x8f] != 0) {
      plVar11 = (longlong *)FUN_142e49950();
      plVar2 = (longlong *)param_1[0x8f];
      for (plVar3 = plVar2; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[6]) {
        if (plVar3 == plVar11) {
          if ((plVar2 != (longlong *)0x0) && (uVar16 = plVar2[0x1f], uVar16 == 0)) {
            (**(code **)(*plVar2 + 0x368))(plVar2);
            uVar16 = plVar2[0x1f];
          }
          break;
        }
      }
    }
    FWeakObjectPtr::operator=(local_20c,uVar16);
    if (((char)param_1[0xbb] == '\0') || (param_1[0xbc] == 0)) {
      lVar17 = param_1[0xba];
      if (lVar17 == 0) {
        lVar17 = FBackChannelConnection::GetSocket(lVar10);
      }
      FWeakObjectPtr::operator=(local_1f4,lVar17);
    }
    lVar17 = param_1[0x2d];
    if (lVar17 == 0) {
      local_26c = DAT_1468b5d98;
      puVar12 = &local_274;
      local_274 = _DAT_1468b5d90;
    }
    else {
      puVar12 = (undefined8 *)&local_2c4;
      local_2c4 = *(undefined4 *)(lVar17 + 0x220);
      local_2bc = *(undefined4 *)(lVar17 + 0x228);
      uStack_2c0 = *(undefined4 *)(lVar17 + 0x224);
    }
    local_118 = *puVar12;
    local_110 = *(undefined4 *)(puVar12 + 1);
    local_10c = 1;
    if ((undefined4 *)((longlong)param_1 + 0x7b4) != &local_b0) {
      local_b0 = *(undefined4 *)((longlong)param_1 + 0x7b4);
      local_ac = 1;
    }
    if (param_1[0xe6] != 0) {
      local_218 = local_218 & 0xef;
    }
    lVar17 = param_1[0xdd];
    if (lVar17 == 0) {
      local_2d3 = 0;
      pplVar18 = (longlong **)&local_2e0;
      local_2d1 = 0;
      local_2e0 = 0xbf800000;
      local_2dc = 0xbf800000;
      local_2d8 = 0xbf800000;
      local_2d4 = 0;
      local_2d0 = 0x3f800000;
      local_2cc = 0x3f800000;
      local_2c8 = 0x3f800000;
    }
    else {
      local_268 = *(longlong **)(lVar17 + 0x4d8);
      uStack_260 = *(undefined8 *)(lVar17 + 0x4e0);
      pplVar18 = &local_268;
      puStack_258 = *(uint **)(lVar17 + 0x4e8);
      uStack_250 = *(undefined4 *)(lVar17 + 0x4f0);
    }
    puVar12 = (undefined8 *)FUN_14054b6b0(lVar10,local_238);
    local_318 = 0;
    local_320 = 0;
    local_328 = pplVar18;
    FUN_140a86fb0(param_1,*puVar12,0,local_228);
    FUN_1409c53c0(local_228);
  }
LAB_140b260f0:
  if (*(char *)((longlong)param_1 + 0x779) != '\0') {
    plVar2 = (longlong *)param_1[0xdf];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x638))(plVar2,0);
    }
    if ((longlong *)param_1[0x9e] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x9e] + 0x430))();
      (**(code **)(*(longlong *)param_1[0x9e] + 0x288))();
    }
    lVar17 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar17 != 0) {
      lVar17 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar17 + 400) == 0) {
        uVar14 = *(undefined8 *)(lVar17 + 0x3f8);
      }
      else {
        uVar14 = *(undefined8 *)(*(longlong *)(lVar17 + 400) + 0x90);
      }
      FUN_1428800b0(uVar14,param_1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,0);
  }
  return;
}



// FUNCTION 140b26200 FUN_140b26200 body=208 status=ok
// SIG undefined FUN_140b26200(void)

void FUN_140b26200(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *local_res8;
  longlong local_28 [4];
  
  if (*param_1 != 0) {
    local_res8 = (longlong *)0x0;
    FUN_1416b3e60(*param_1,param_2,&local_res8);
    if ((local_res8 != (longlong *)0x0) && (*local_res8 != 0)) {
      local_28[2] = 0;
      local_28[3] = 0;
      local_28[0] = 0;
      local_28[1] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      FGenericPlatformString::Memcpy(local_28[0],L"SerialNumber",0x1a);
      cVar1 = FUN_1416b40a0(*local_res8,local_28,local_28 + 2);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if (cVar1 != '\0') {
        FString::operator=(param_3,local_28 + 2);
      }
      if (local_28[2] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140b262d0 FUN_140b262d0 body=122 status=ok
// SIG undefined FUN_140b262d0(void)

void FUN_140b262d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x568);
  if (lVar1 != 0) {
    lVar3 = FUN_141437c50();
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
      FUN_140c21800(lVar1);
    }
  }
  FUN_14222aed0(param_1,param_2);
  return;
}



// FUNCTION 140b26350 FUN_140b26350 body=502 status=ok
// SIG undefined FUN_140b26350(void)

undefined1 * FUN_140b26350(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  
  if (((*(longlong *)(param_1 + 400) != 0) && (*(longlong *)(param_1 + 0x188) != 0)) &&
     (*(longlong *)(param_1 + 0x150) != 0)) {
    _guard_xfg_dispatch_icall_nop(local_88,0,0x68);
    plVar1 = (longlong *)(param_2 + 8);
    *param_2 = local_88[0];
    *(undefined8 *)(param_2 + 2) = local_80;
    *(undefined8 *)(param_2 + 4) = local_78;
    *(undefined8 *)(param_2 + 6) = local_70;
    if (plVar1 != &local_68) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = local_68;
      param_2[10] = local_60;
      param_2[0xb] = local_5c;
    }
    plVar1 = (longlong *)(param_2 + 0xc);
    if (plVar1 != &local_58) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = local_58;
      param_2[0xe] = local_50;
      param_2[0xf] = local_4c;
    }
    plVar1 = (longlong *)(param_2 + 0x10);
    if (plVar1 != &local_48) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = local_48;
      param_2[0x12] = local_40;
      param_2[0x13] = local_3c;
    }
    plVar1 = (longlong *)(param_2 + 0x14);
    if (plVar1 != &local_38) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = local_38;
      param_2[0x16] = local_30;
      param_2[0x17] = local_2c;
    }
    *(undefined1 *)(param_2 + 0x18) = local_28;
    *(undefined1 *)((longlong)param_2 + 0x61) = local_27;
    if (local_38 != 0) {
      FMemory::Free(local_38);
    }
    if (local_48 != 0) {
      FMemory::Free(local_48);
    }
    if (local_58 != 0) {
      FMemory::Free(local_58);
    }
    if (local_68 != 0) {
      FMemory::Free(local_68);
    }
    *param_2 = 1;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 400);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x188);
    uVar2 = *(undefined8 *)(param_1 + 0x150);
    *(undefined8 *)(param_2 + 6) = uVar2;
    return (undefined1 *)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  return &stack0x00000000;
}



// FUNCTION 140b26550 FUN_140b26550 body=477 status=ok
// SIG undefined FUN_140b26550(void)

void FUN_140b26550(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  char param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong local_78;
  ulonglong local_70;
  code *local_68;
  undefined8 **ppuStack_60;
  longlong *local_58;
  undefined4 local_50;
  longlong *local_48;
  longlong local_40;
  undefined1 local_38;
  
  plVar4 = *(longlong **)(param_1 + 0x118);
  if (plVar4 != (longlong *)0x0) {
    uVar2 = FUN_142dfdf30();
    plVar3 = (longlong *)(**(code **)(*plVar4 + 0x628))(plVar4,uVar2);
    if (plVar3 != (longlong *)0x0) {
      local_50 = (**(code **)(*plVar3 + 0x400))(plVar3);
      goto LAB_140b265b6;
    }
  }
  local_50 = 1;
LAB_140b265b6:
  if (param_5 == '\0') {
    uVar2 = FUN_140b823d0(param_1);
    uVar1 = FUN_140b81ea0(uVar2,local_50);
    local_50 = FUN_140b81930(param_4,uVar1,local_50);
  }
  local_58 = &local_78;
  ppuStack_60 = &local_58;
  local_78 = 0;
  local_68 = FUN_140b1f810;
  local_70 = 0;
  local_48 = plVar4;
  local_40 = param_1;
  local_38 = param_5 == '\0';
  FUN_142ff36a0(param_3,plVar4,&local_68);
  *param_2 = (longlong)plVar4;
  plVar4 = param_2 + 1;
  if (plVar4 != &local_78) {
    iVar5 = (int)param_2[2];
    if (iVar5 != 0) {
      plVar3 = (longlong *)(*plVar4 + 0x38);
      do {
        if (plVar3[2] != 0) {
          FMemory::Free();
        }
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar3 + -3);
        plVar3 = plVar3 + 0xc;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_1409f0540(plVar4,local_78,local_70 & 0xffffffff,*(undefined4 *)((longlong)param_2 + 0x14),0)
    ;
  }
  *(undefined1 *)((longlong)param_2 + 0x1a) = *(undefined1 *)(param_1 + 0x3d8);
  *(undefined1 *)(param_2 + 3) = 2;
  param_2[4] = param_4;
  if ((int)local_70 != 0) {
    plVar4 = (longlong *)(local_78 + 0x38);
    iVar5 = (int)local_70;
    do {
      if (plVar4[2] != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar4 + -3);
      plVar4 = plVar4 + 0xc;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140b26730 FUN_140b26730 body=826 status=ok
// SIG undefined FUN_140b26730(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140b26730(longlong param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  float local_64;
  longlong local_60;
  int local_58;
  
  if (*(float *)(param_1 + 0x24c) <= 0.0) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar5 = FUN_1423407b0(), lVar5 == 0)) {
    return 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x118);
  local_78 = _DAT_1468b5d90;
  local_70 = DAT_1468b5d98;
  if ((lVar5 != 0) && (lVar6 = *(longlong *)(lVar5 + 0x168), lVar6 != 0)) {
    local_78 = *(undefined8 *)(lVar6 + 0x220);
    local_70 = *(float *)(lVar6 + 0x228);
  }
  local_88 = local_78;
  local_80 = local_70;
  fVar12 = *(float *)(param_1 + 0x24c) * *(float *)(param_1 + 0x24c);
  if (lVar5 != 0) {
    lVar6 = FUN_1413c3a10();
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
      lVar5 = *(longlong *)(lVar5 + 0x6f8);
      goto LAB_140b2686a;
    }
  }
  lVar5 = 0;
LAB_140b2686a:
  fVar4 = local_80;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar5 + 0x488);
  }
  fVar3 = local_88._4_4_;
  fVar2 = (float)local_88;
  if (lVar6 != 0) {
    lVar6 = *(longlong *)(lVar6 + 0x168);
    if (lVar6 == 0) {
      local_70 = DAT_1468b5d98;
      puVar7 = &local_78;
      local_78 = _DAT_1468b5d90;
    }
    else {
      puVar7 = &local_88;
      local_80 = *(float *)(lVar6 + 0x228);
      local_88 = *(undefined8 *)(lVar6 + 0x220);
    }
    local_78 = *puVar7;
    local_70 = *(float *)(puVar7 + 1);
    fVar11 = (float)local_78 - fVar2;
    fVar10 = (float)((ulonglong)local_78 >> 0x20) - fVar3;
    fVar9 = local_70 - fVar4;
    if (fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9 < fVar12) {
      return lVar5;
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x120);
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0(param_1);
  }
  UWorld::GetPlayerControllerIterator(lVar6,&local_60);
  while( true ) {
    if ((local_58 < 0) || (*(int *)(local_60 + 8) <= local_58)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    lVar6 = FWeakObjectPtr::Get();
    if (lVar6 != lVar5) {
      if (lVar6 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = *(longlong *)(lVar6 + 0x488);
      }
      if (lVar8 != 0) {
        lVar8 = *(longlong *)(lVar8 + 0x168);
        if (lVar8 == 0) {
          local_70 = DAT_1468b5d98;
          puVar7 = &local_78;
          local_78 = _DAT_1468b5d90;
        }
        else {
          puVar7 = &local_88;
          local_80 = *(float *)(lVar8 + 0x228);
          local_88 = *(undefined8 *)(lVar8 + 0x220);
        }
        local_64 = *(float *)(puVar7 + 1);
        fVar11 = (float)*puVar7 - fVar2;
        fVar10 = (float)((ulonglong)*puVar7 >> 0x20) - fVar3;
        fVar9 = local_64 - fVar4;
        if (fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9 < fVar12) {
          return lVar6;
        }
      }
    }
    local_58 = local_58 + 1;
  }
  return 0;
}



// FUNCTION 140b26a70 FUN_140b26a70 body=219 status=ok
// SIG undefined FUN_140b26a70(void)

void FUN_140b26a70(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong local_res18;
  undefined8 local_res20;
  undefined1 local_28 [8];
  undefined2 *local_20;
  int local_18;
  
  lVar3 = FWeakObjectPtr::Get(param_2);
  if (lVar3 != 0) {
    plVar5 = *(longlong **)(param_1 + 0x750);
    plVar1 = plVar5 + *(int *)(param_1 + 0x758);
    if (plVar5 != plVar1) {
      while (*plVar5 != lVar3) {
        plVar5 = plVar5 + 1;
        if (plVar5 == plVar1) {
          return;
        }
      }
      local_res18 = lVar3;
      TArray<UAIAsyncTaskBlueprintProxy_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                ((longlong *)(param_1 + 0x750),&local_res18);
      local_res20 = *(undefined8 *)(lVar3 + 0x18);
      FName::ToString(&local_res20,&local_20);
      uVar2 = *(undefined8 *)(param_1 + 0x118);
      puVar6 = &DAT_143f3eda8;
      if (local_18 != 0) {
        puVar6 = local_20;
      }
      puVar4 = (undefined8 *)FName::FName(local_28,puVar6,1);
      FUN_143059e20(uVar2,*puVar4);
      if (local_20 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      TArray<UAIAsyncTaskBlueprintProxy_*,TSizedDefaultAllocator<32>_>::RemoveSwap
                (param_1 + 0x718,&local_res18);
    }
  }
  return;
}



// FUNCTION 140b26b50 FUN_140b26b50 body=56 status=ok
// SIG undefined FUN_140b26b50(void)

void FUN_140b26b50(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x50);
  plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x58) * 3;
  while( true ) {
    if (plVar2 == plVar1) {
      return;
    }
    if ((*plVar2 == param_2) && (plVar2[1] == param_3)) break;
    plVar2 = plVar2 + 3;
  }
  if (plVar2[2] == 0) {
    return;
  }
  FUN_143015bf0(plVar2[2],param_4);
  return;
}



// FUNCTION 140b26b90 FUN_140b26b90 body=467 status=ok
// SIG undefined FUN_140b26b90(void)

void FUN_140b26b90(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong local_38;
  longlong local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((*(char *)((longlong)param_1 + 0x67c) != '\0') && (param_1[0x8f] != 0)) {
    (**(code **)(*param_1 + 0x600))();
    FUN_1430160a0(param_1,1);
    USplineMeshComponent::SetBoundaryMax(param_1,0xbf800000);
    if (param_1[0xd9] != 0) {
      FUN_142397540(param_1[0xd9],1);
    }
    cVar4 = *(char *)((longlong)param_1 + 0x6d6);
    if (cVar4 == '\0') {
      lVar9 = param_1[0xd2];
    }
    else if (cVar4 == '\x01') {
      lVar9 = param_1[0xd3];
    }
    else {
      if (cVar4 != '\x02') {
        return;
      }
      lVar9 = param_1[0xd4];
    }
    if (lVar9 != 0) {
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar7 = FUN_142ff67b0(uVar6);
      if (lVar7 != 0) {
        plVar2 = param_1 + 0xdc;
        if (*plVar2 == 0) {
          plVar8 = (longlong *)FUN_142fe4ae0(local_28);
          if (plVar2 != plVar8) {
            *plVar2 = *plVar8;
            *plVar8 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xdd,plVar8 + 1);
          }
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_20 + 1;
            lVar5 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_20)(local_20);
              LOCK();
              piVar1 = (int *)((longlong)local_20 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_20 + 8))(local_20,1);
              }
            }
          }
        }
        *(longlong *)(*plVar2 + 0x30) = param_1[0xdb];
        local_38 = *plVar2;
        local_30 = param_1[0xdd];
        if (local_30 != 0) {
          LOCK();
          *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
          UNLOCK();
        }
        FUN_143019b80(lVar7,&local_38,param_1[0x8f],param_1,lVar9);
      }
      FUN_1422279d0(param_1,&DAT_146532190);
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xef;
      *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) & 0xfe;
      (**(code **)(*param_1 + 0x288))(param_1);
    }
  }
  return;
}



// FUNCTION 140b26d70 FUN_140b26d70 body=160 status=ok
// SIG undefined FUN_140b26d70(void)

void FUN_140b26d70(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x3a8))(param_1);
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_1428800b0(uVar2,param_1);
    (**(code **)(*param_1 + 0x3a0))(param_1,uVar3);
  }
  if (param_1[0xee] != 0) {
    FUN_140b3d130(param_1);
    param_1[0xee] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140b26e09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6f8))(param_1);
  return;
}



// FUNCTION 140b26e10 FUN_140b26e10 body=1467 status=ok
// SIG undefined FUN_140b26e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140b26e10(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_1f8 [32];
  uint local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118 [8];
  undefined8 local_110;
  code *local_108;
  longlong local_f8 [4];
  longlong *local_d8;
  int local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  *(undefined1 *)((longlong)param_1 + 0x765) = 1;
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 == 0) {
    return;
  }
  if (*(float *)(param_1 + 0xec) <= 0.0) {
    local_1b0 = FUN_140b26d70;
    uStack_1a8 = 0;
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar6 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_1b0;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_1b0._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_1a8;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_1a4;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar2;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_128 = 0;
    local_120 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_128);
    }
    FWeakObjectPtr::operator=(local_118,0);
    local_110 = 0;
    local_108 = AK::MemoryMgr::StartProfileThreadUsage;
    local_d8 = (longlong *)0x0;
    local_c8 = 0;
    FUN_142880af0(uVar6,&local_128);
    if (local_c8 != 0) {
      plVar7 = local_f8;
      if (local_d8 != (longlong *)0x0) {
        plVar7 = local_d8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_128);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar2 = FMemory::Realloc(plVar3,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    goto LAB_140b27311;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = DAT_146b33f38;
  lVar8 = DAT_146b33f38 + 0xa0;
  lVar4 = FWeakObjectPtr::Get(lVar8);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar2 + 0xa8)) &&
       (local_1c8 = 0, *(longlong *)(lVar2 + 0xb0) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar8,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar2 + 0xa8) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(lVar8);
      if (lVar4 != 0) goto LAB_140b2705f;
    }
  }
  else {
LAB_140b2705f:
    lVar2 = FUN_1413bd170();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = FHdrImageWrapper::GetHeight(lVar4), lVar2 != 0)) {
      puVar5 = (undefined8 *)FName::FName(&local_1c0,&DAT_14428d6cc,1);
      uVar6 = FHdrImageWrapper::GetHeight(lVar4);
      lVar2 = FUN_140b1a100(param_1,uVar6,*puVar5,1);
      param_1[0xee] = lVar2;
    }
  }
  uStack_1b8 = 0;
  local_1c0 = FUN_140b26d70;
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (*(longlong *)(lVar2 + 400) == 0) {
    uVar6 = *(undefined8 *)(lVar2 + 0x3f8);
  }
  else {
    uVar6 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
  }
  lVar2 = param_1[0xec];
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_1c0;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_1c0._4_4_;
    *(undefined4 *)(plVar3 + 3) = uStack_1b8;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_1b4;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_b8 = 0;
  local_b0 = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_b8);
  }
  FWeakObjectPtr::operator=(local_a8,0);
  local_1d0 = (undefined8 *)CONCAT44(local_1d0._4_4_,0xbf800000);
  local_1d8 = local_1d8 & 0xffffff00;
  local_a0 = 0;
  local_68 = (longlong *)0x0;
  local_58 = 0;
  local_98 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar6,param_1 + 0xed,&local_b8,(int)lVar2);
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
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar2 = FMemory::Realloc(plVar3,0,0);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  lVar2 = param_1[0x110];
  if (lVar2 != 0) {
    uStack_1b8 = 0;
    local_170 = 0;
    lVar4 = param_1[0x2d];
    local_178 = 0;
    if (lVar4 == 0) {
      local_180 = DAT_1468b5d98;
      puVar5 = &local_188;
      local_188 = _DAT_1468b5d90;
    }
    else {
      puVar5 = (undefined8 *)&local_1a0;
      local_1a0 = *(undefined4 *)(lVar4 + 0x220);
      local_198 = *(undefined4 *)(lVar4 + 0x228);
      uStack_19c = *(undefined4 *)(lVar4 + 0x224);
    }
    local_168 = *puVar5;
    local_160 = *(undefined4 *)(puVar5 + 1);
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    local_1d0 = &local_178;
    local_1d8 = 0x42480000;
    FUN_1405a1e30(local_148,uVar6,lVar2,&local_168);
    FUN_140591060(local_148);
  }
LAB_140b27311:
  lVar2 = param_1[0x2d];
  if (lVar2 == 0) {
    local_150 = DAT_1468b5d98;
    puVar5 = &local_158;
    local_158 = _DAT_1468b5d90;
  }
  else {
    puVar5 = (undefined8 *)&local_194;
    local_194 = *(undefined4 *)(lVar2 + 0x220);
    local_18c = *(undefined4 *)(lVar2 + 0x228);
    uStack_190 = *(undefined4 *)(lVar2 + 0x224);
  }
  local_1b0 = (code *)*puVar5;
  uStack_1a8 = *(undefined4 *)(puVar5 + 1);
  uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  FUN_142d4dc40(uVar6,&local_1b0,param_1,0);
  return;
}



// FUNCTION 140b273d0 FUN_140b273d0 body=271 status=ok
// SIG undefined FUN_140b273d0(void)

void FUN_140b273d0(longlong param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float local_68 [4];
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined1 local_48 [64];
  
  FUN_142da84b0();
  if ((*(uint *)(param_1 + 0xf8) & 1) != 0) {
    fVar4 = *(float *)(param_1 + 0xfc);
    if ((*(uint *)(param_1 + 0xf8) & 2) != 0) {
      fVar1 = *(float *)(param_1 + 0x100);
      iVar2 = rand();
      fVar4 = (float)iVar2 * 3.051851e-05 * (fVar1 - fVar4) + fVar4;
    }
    iVar2 = rand();
    local_58 = 0;
    local_50 = 0;
    local_68[1] = 0.0;
    local_68[2] = 0.0;
    local_54 = (float)iVar2 * 0.010986663;
    local_68[0] = fVar4;
    pfVar3 = (float *)FRotator::RotateVector(&local_58,local_48,local_68);
    *param_3 = *pfVar3 + *param_3;
    param_3[1] = pfVar3[1] + param_3[1];
    param_3[2] = pfVar3[2] + param_3[2];
  }
  return;
}



// FUNCTION 140b274e0 FUN_140b274e0 body=8 status=ok
// SIG undefined FUN_140b274e0(void)

undefined1 FUN_140b274e0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x5b0);
}



// FUNCTION 140b274f0 GetSlavePoseComponents body=8 status=ok
// SIG undefined GetSlavePoseComponents(void)

longlong USkinnedMeshComponent::GetSlavePoseComponents(longlong param_1)

{
  return param_1 + 0x5a8;
}



// FUNCTION 140b27500 FUN_140b27500 body=150 status=ok
// SIG undefined FUN_140b27500(void)

void FUN_140b27500(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x710) == 0) {
    lVar2 = ATrap::GetActivationShapeComponent();
    if (lVar2 != 0) {
      lVar3 = FUN_14142bde0();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(longlong *)(lVar2 + 0x210) != 0)) {
        *(undefined8 *)(param_1 + 0x710) = *(undefined8 *)(*(longlong *)(lVar2 + 0x210) + 0xb8);
        return;
      }
    }
    *(undefined8 *)(param_1 + 0x710) = 0;
  }
  return;
}



// FUNCTION 140b275a0 FUN_140b275a0 body=8 status=ok
// SIG undefined FUN_140b275a0(void)

undefined8 FUN_140b275a0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x790);
}



// FUNCTION 140b275b0 FUN_140b275b0 body=452 status=ok
// SIG undefined FUN_140b275b0(void)

longlong FUN_140b275b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
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
  
  plVar1 = (longlong *)(param_1 + 0x510);
  iVar2 = *(int *)(param_1 + 0x538);
  local_78 = 0;
  uStack_74 = 1;
  puStack_28 = (uint *)(param_1 + 0x520);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)(param_1 + 0x530);
    if (*(uint **)(param_1 + 0x530) == (uint *)0x0) {
      puVar8 = puStack_28;
    }
    uVar3 = *puVar8;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar3 == 0) {
      lVar6 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar5 = local_78 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar5;
      if (bVar4) goto LAB_140b2767f;
      uVar3 = puVar8[lVar6 + 1];
    }
    uStack_74 = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_68._4_4_ = (uStack_60 - iVar5) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_140b2767f:
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
  bVar4 = local_68._4_4_ < *(int *)(param_1 + 0x538);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar4) {
    do {
      lVar6 = *plVar1;
      if (*(longlong *)((longlong)iStack_5c * 0x40 + lVar6) == param_2) {
        lVar7 = (longlong)iStack_5c;
        if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
          TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),
                              CONCAT71((int7)((ulonglong)plVar1 >> 8),1));
        }
        return lVar7 * 0x40 + lVar6 + 8;
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return 0;
}



// FUNCTION 140b27780 FUN_140b27780 body=420 status=ok
// SIG undefined FUN_140b27780(void)

undefined8 FUN_140b27780(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined1 local_res8 [8];
  int local_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  
  plVar1 = (longlong *)(param_1 + 0x510);
  iVar2 = *(int *)(param_1 + 0x538);
  local_68 = 0;
  uStack_64 = 1;
  puStack_30 = (uint *)(param_1 + 0x520);
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)(param_1 + 0x530);
    if (*(uint **)(param_1 + 0x530) == (uint *)0x0) {
      puVar8 = puStack_30;
    }
    uVar3 = *puVar8;
    uStack_50 = 0;
    local_68 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_68;
      uStack_50 = uStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar4) goto LAB_140b2784f;
      uVar3 = puVar8[lVar7 + 1];
    }
    uStack_64 = -uVar3 & uVar3;
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
    local_58._4_4_ = (uStack_50 - iVar6) + 0x1f;
    if (iVar2 < local_58._4_4_) {
LAB_140b2784f:
      local_58._4_4_ = iVar2;
    }
  }
  uStack_28 = 0xffffffff;
  iStack_24 = local_58._4_4_;
  iStack_20 = uStack_50;
  iStack_38 = local_68;
  uStack_34 = uStack_64;
  iStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = uStack_50;
  uStack_50 = 0xffffffff;
  iStack_4c = local_58._4_4_;
  bVar4 = local_58._4_4_ < iVar2;
  local_40 = plVar1;
  local_58 = puStack_30;
  if (bVar4) {
    do {
      iVar2 = iStack_4c;
      lVar7 = *(longlong *)((longlong)iStack_4c * 0x40 + *plVar1);
      if (*(longlong *)(lVar7 + 0x10) == param_2) {
        plVar5 = (longlong *)
                 TBaseUObjectMethodDelegateInstance<1,UBorder,FSlateBrush_const_*___ptr64___cdecl(void),TAttribute<FSlateBrush>_>
                 ::GetHandle(lVar7,local_res8);
        if (*plVar5 == param_3) {
          uVar9 = FUN_140b5df60(*(undefined8 *)((longlong)iVar2 * 0x40 + *plVar1),
                                *plVar1 + 8 + (longlong)iVar2 * 0x40,param_4);
          return uVar9;
        }
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  return 0;
}



// FUNCTION 140b27930 FUN_140b27930 body=8 status=ok
// SIG undefined FUN_140b27930(void)

undefined8 FUN_140b27930(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x4c0);
}



// FUNCTION 140b27940 FUN_140b27940 body=146 status=ok
// SIG undefined FUN_140b27940(void)

undefined8 FUN_140b27940(longlong param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x150);
  if (lVar3 != 0) {
    lVar2 = AHeoCon::GetPrivateStaticClass();
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
      if (param_2 == '\0') {
        return *(undefined8 *)(lVar3 + 0x4c0);
      }
      lVar3 = FUN_142cc1670(lVar3);
      if (lVar3 != 0) {
        return *(undefined8 *)(lVar3 + 0x188);
      }
    }
  }
  return 0;
}



// FUNCTION 140b279e0 FUN_140b279e0 body=54 status=ok
// SIG undefined FUN_140b279e0(void)

void FUN_140b279e0(longlong param_1)

{
  longlong local_18 [3];
  
  local_18[1] = 0;
  local_18[0] = param_1;
  FUN_142ca2f00(*(undefined8 *)(param_1 + 0x4f8),local_18,0);
  return;
}



// FUNCTION 140b27a20 FUN_140b27a20 body=554 status=ok
// SIG undefined FUN_140b27a20(void)

longlong * FUN_140b27a20(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  int local_res10;
  
  lVar8 = param_2[1];
  lVar5 = *param_2;
  local_res10 = 0;
  plVar6 = (longlong *)0x0;
  lVar3 = (longlong)((int)(lVar8 - lVar5 >> 3) + -1);
  if (0 < lVar3) {
    lVar12 = 0;
    do {
      plVar9 = *(longlong **)(param_1 + 0x50);
      lVar2 = *(longlong *)(lVar5 + lVar12 * 8);
      plVar1 = plVar9 + (longlong)*(int *)(param_1 + 0x58) * 3;
      for (; plVar9 != plVar1; plVar9 = plVar9 + 3) {
        lVar11 = lVar5;
        if (plVar6 == (longlong *)0x0) {
LAB_140b27ad6:
          if ((*plVar9 != 0) && (plVar9[1] != 0)) {
            if (*plVar9 == *(longlong *)(lVar2 + 0x1a8)) {
              iVar7 = local_res10 + 1;
              if ((ulonglong)(longlong)iVar7 < (ulonglong)(lVar8 - lVar5 >> 3)) {
                lVar4 = lVar12 * 8;
                lVar10 = lVar5;
                do {
                  lVar4 = lVar4 + 8;
                  if (plVar9[1] == *(longlong *)(*(longlong *)(lVar4 + lVar10) + 0x1a8)) {
                    *param_3 = lVar2;
                    *param_4 = *(longlong *)(lVar4 + *param_2);
                    lVar10 = *param_2;
                    plVar6 = plVar9;
                    lVar5 = lVar10;
                  }
                  lVar8 = param_2[1];
                  iVar7 = iVar7 + 1;
                  lVar11 = lVar5;
                } while ((ulonglong)(longlong)iVar7 < (ulonglong)(lVar8 - lVar10 >> 3));
              }
            }
            else if ((plVar9[1] == *(longlong *)(lVar2 + 0x1a8)) &&
                    (iVar7 = local_res10 + 1,
                    (ulonglong)(longlong)iVar7 < (ulonglong)(lVar8 - lVar5 >> 3))) {
              lVar4 = lVar12 * 8;
              do {
                lVar4 = lVar4 + 8;
                if (*plVar9 == *(longlong *)(*(longlong *)(lVar4 + lVar5) + 0x1a8)) {
                  *param_3 = *(longlong *)(lVar4 + lVar5);
                  *param_4 = lVar2;
                  lVar5 = *param_2;
                  plVar6 = plVar9;
                  lVar11 = lVar5;
                }
                lVar8 = param_2[1];
                iVar7 = iVar7 + 1;
              } while ((ulonglong)(longlong)iVar7 < (ulonglong)(lVar8 - lVar5 >> 3));
            }
          }
        }
        else {
          if (plVar6[2] == 0) {
            fVar14 = 3.4028235e+38;
          }
          else {
            fVar14 = *(float *)(plVar6[2] + 0x48);
          }
          if (plVar9[2] == 0) {
            fVar13 = 3.4028235e+38;
          }
          else {
            fVar13 = *(float *)(plVar9[2] + 0x48);
          }
          if (fVar13 < fVar14) goto LAB_140b27ad6;
        }
        lVar5 = lVar11;
      }
      local_res10 = local_res10 + 1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < lVar3);
  }
  return plVar6;
}



// FUNCTION 140b27c50 FUN_140b27c50 body=38 status=ok
// SIG undefined FUN_140b27c50(void)

undefined8 * FUN_140b27c50(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x7c0);
  uVar2 = *(undefined8 *)(param_1 + 0x7c8);
  uVar3 = *(undefined8 *)(param_1 + 2000);
  *param_2 = *(undefined8 *)(param_1 + 0x7b8);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x7d8);
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar1;
  return param_2;
}



// FUNCTION 140b27c80 FUN_140b27c80 body=537 status=ok
// SIG undefined FUN_140b27c80(void)

longlong * FUN_140b27c80(longlong param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong *plVar9;
  
  plVar9 = (longlong *)0x0;
  plVar8 = (longlong *)0x0;
  plVar6 = plVar9;
  if (param_2 != 0) {
    if ((*(longlong **)(param_1 + 8) == (longlong *)0x0) ||
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (param_3 != 0)) {
      plVar6 = plVar8;
      if ((*(byte *)(param_3 + 0x830) & 4) == 0) {
        lVar4 = FUN_142481360(param_3,*(undefined8 *)(param_1 + 8));
        if (lVar4 != 0) {
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
          if ((bVar1) &&
             (plVar8 = (longlong *)FUN_140cfd240(lVar4,param_2), plVar8 != (longlong *)0x0)) {
            uVar3 = (**(code **)(*plVar8 + 0x278))(plVar8);
            plVar6 = (longlong *)(ulonglong)uVar3;
          }
        }
      }
      else {
        lVar4 = FUN_140c125c0(param_1,param_3);
        if (lVar4 != 0) {
          lVar5 = *(longlong *)(lVar4 + 0x1e8);
          lVar4 = (longlong)*(int *)(lVar4 + 0x1f0) * 0x10 + lVar5;
          for (; plVar6 = plVar9, lVar5 != lVar4; lVar5 = lVar5 + 0x10) {
            plVar6 = (longlong *)FString::FString(local_38,lVar5);
            local_28 = 0;
            local_20 = 0;
            local_18 = 0;
            local_48 = *plVar6;
            *plVar6 = 0;
            local_40 = (undefined4)plVar6[1];
            local_3c = *(undefined4 *)((longlong)plVar6 + 0xc);
            plVar6[1] = 0;
            FUN_1417978e0(&local_28,&local_48);
            if (*plVar6 != 0) {
              FMemory::Free();
            }
            plVar6 = (longlong *)FSoftObjectPath::TryLoad(&local_28);
            if (plVar6 == (longlong *)0x0) {
LAB_140b27e30:
              plVar6 = plVar9;
            }
            else {
              lVar7 = FUN_142e498a0();
              if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
                  lVar7 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) goto LAB_140b27e30;
            }
            if (local_20 != 0) {
              FMemory::Free();
            }
            if ((plVar6 != (longlong *)0x0) && (plVar6[0x1e] == param_2)) {
              cVar2 = FUN_140ab3ac0(plVar6,0);
              if (cVar2 != '\0') {
                return (longlong *)0x0;
              }
              uVar3 = (**(code **)(*plVar6 + 0x278))(plVar6);
              return (longlong *)(ulonglong)uVar3;
            }
          }
        }
      }
    }
  }
  return plVar6;
}



// FUNCTION 140b27ea0 FUN_140b27ea0 body=95 status=ok
// SIG undefined FUN_140b27ea0(void)

undefined8 FUN_140b27ea0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x5b0);
  }
  if (lVar2 != 0) {
    uVar1 = FUN_140b27c80(param_1,lVar2,param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 140b27f00 FUN_140b27f00 body=95 status=ok
// SIG undefined FUN_140b27f00(void)

undefined8 FUN_140b27f00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x5c0);
  }
  if (lVar2 != 0) {
    uVar1 = FUN_140b27c80(param_1,lVar2,param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 140b27f60 FUN_140b27f60 body=95 status=ok
// SIG undefined FUN_140b27f60(void)

undefined8 FUN_140b27f60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x5a8);
  }
  if (lVar2 != 0) {
    uVar1 = FUN_140b27c80(param_1,lVar2,param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 140b27fc0 FUN_140b27fc0 body=95 status=ok
// SIG undefined FUN_140b27fc0(void)

undefined8 FUN_140b27fc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x5b8);
  }
  if (lVar2 != 0) {
    uVar1 = FUN_140b27c80(param_1,lVar2,param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 140b28020 FUN_140b28020 body=7 status=ok
// SIG undefined FUN_140b28020(void)

undefined4 FUN_140b28020(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x294);
}


